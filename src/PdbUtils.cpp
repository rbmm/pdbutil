// PdbUtils.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

_NT_BEGIN

#include "../inc/initterm.h"
#define FormatStatus(err, module, status) FormatMessage(\
	FORMAT_MESSAGE_IGNORE_INSERTS|FORMAT_MESSAGE_FROM_HMODULE,\
	GetModuleHandleW(L ## # module),status, 0, err, RTL_NUMBER_OF(err), 0)

#define FormatWin32Status(err, status) FormatStatus(err, kernel32.dll, status)
#define FormatNTStatus(err, status) FormatStatus(err, ntdll.dll, status)

#include "pdb.h"

BOOL eprintf(PCWSTR format, va_list args)
{
	WCHAR buf[0x2100];
	int len = _vsnwprintf(buf, RTL_NUMBER_OF(buf) , format, args);
	if (0 > len) buf[len = RTL_NUMBER_OF(buf) - 1] = 0;
	return WriteConsole(GetStdHandle(STD_ERROR_HANDLE), buf, len, (DWORD*)&len, 0);
}

BOOL eprintf(PCWSTR format, ...)
{
	return eprintf(format, (va_list)(&format + 1));
}

void UDTEntry(LPCWSTR lpsz);

struct TPIHDR;

void TPIDumpTypesAndSave (TPIHDR* pHdr, LONG cb, PWSTR lpsz, BOOL Is64Bit);
void DumpPublicSymbols(PdbReader* pdb, PVOID sym, LONG size, PWSTR lpsz);

NTSTATUS MapFileAndClose(HANDLE hFile, void** BaseAddress, PSIZE_T ViewSize);
NTSTATUS OpenDosFile(PHANDLE hFile, PCWSTR FilePath);

NTSTATUS MapFile(PCWSTR FilePath, void** BaseAddress, PSIZE_T ViewSize)
{
	HANDLE hFile;
	NTSTATUS status = OpenDosFile(&hFile, FilePath);
	return 0 > status ? status : MapFileAndClose(hFile, BaseAddress, ViewSize);
}

NTSTATUS OpenPdbByPE(PVOID ImageBase, CV_INFO_PDB* pv, DWORD cb)
{
	PIMAGE_NT_HEADERS pinth = RtlImageNtHeader(ImageBase);

	if (!pinth)
	{
		return STATUS_INVALID_IMAGE_FORMAT;
	}

	ULONG size;
	PIMAGE_DEBUG_DIRECTORY pidd = (PIMAGE_DEBUG_DIRECTORY)RtlImageDirectoryEntryToData(ImageBase, FALSE, IMAGE_DIRECTORY_ENTRY_DEBUG, &size);

	if (!pidd || !size || (size % sizeof(IMAGE_DEBUG_DIRECTORY)))
	{
		return STATUS_NOT_FOUND;
	}

	do 
	{
		if (pidd->Type == IMAGE_DEBUG_TYPE_CODEVIEW && pidd->SizeOfData > sizeof(CV_INFO_PDB))
		{
			DWORD SizeOfData = pidd->SizeOfData, AddressOfRawData = pidd->AddressOfRawData;

			if (AddressOfRawData && SizeOfData > sizeof(CV_INFO_PDB))
			{
				if (CV_INFO_PDB* lpcvh = (CV_INFO_PDB*)RtlAddressInSectionTable(pinth, ImageBase, AddressOfRawData))
				{
					eprintf(L"found debug directory!\n");
					if (SizeOfData <= cb)
					{
						memcpy(pv, lpcvh, SizeOfData);
						return STATUS_SUCCESS;
					}
					memcpy(pv, lpcvh, cb);
					*RtlOffsetToPointer(pv, cb - 1) = 0;
					return STATUS_SUCCESS;
				}
			}
			break;
		}

	} while (pidd++, size -= sizeof(IMAGE_DEBUG_DIRECTORY));

	return STATUS_NOT_FOUND;
}

NTSTATUS OpenPdbByPE(PCWSTR lpsz, CV_INFO_PDB* pv, DWORD cb)
{
	SIZE_T ViewSize;
	PVOID ImageBase;
	NTSTATUS status = MapFile(lpsz, &ImageBase, &ViewSize);

	if (0 <= status)
	{
		__try
		{
			status = OpenPdbByPE(ImageBase, pv, cb);
		}
		__except(EXCEPTION_EXECUTE_HANDLER)
		{
			status = GetExceptionCode();
		}
		ZwUnmapViewOfSection(NtCurrentProcess(), ImageBase);
	}
	else
	{
		eprintf(L"fail load (%x) %s\n", status, lpsz);
	}

	return status;
}

PWSTR getBaseName(PWSTR lpsz)
{
	PWSTR a = wcsrchr(lpsz, '\\'), b = wcsrchr(lpsz, '/');

	if (a < b)
	{
		a = b;
	}

	if (a)
	{
		lpsz = a + 1;
	}

	if (a = wcsrchr(lpsz, '.'))
	{
		*a = 0;
	}

	return lpsz;
}

void UDTEntry(PWSTR lpsz, PCWSTR NtSymbolPath)
{
	eprintf(L"UDTEntry(%s)\n", lpsz, NtSymbolPath);

	NTSTATUS status = STATUS_UNSUCCESSFUL;

	PdbReader pdb;

	if (NtSymbolPath)
	{
		CV_INFO_PDB* lpcvh = (CV_INFO_PDB*)alloca(0x10000);

		status = OpenPdbByPE(lpsz, lpcvh, 0x10000);

		if (0 <= status)
		{
			status = pdb.Open(lpcvh, NtSymbolPath);
		}
	}
	else
	{
		status = pdb.Open(lpsz);
	}

	if (0 > status)
	{
		WCHAR err[256];
		if (FormatNTStatus(err, status))
		{
			eprintf(L"open PDB error = %x <%s>\n", status, err);
		}
		return;
	}

	PVOID pv;
	ULONG cb;

	lpsz = getBaseName(lpsz);

	if (0 <= pdb.getStream(PDB_STREAM_TPI, &pv, &cb))
	{
		TPIDumpTypesAndSave((TPIHDR*)pv, cb, lpsz, pdb.Is64Bit());
		pdb.FreeStream(pv);
	}

	SHORT symrecStream = pdb.getPublicSymbolsStreamIndex();

	if (0 < symrecStream)
	{
		if (0 <= pdb.getStream(symrecStream, &pv, &cb))
		{
			DumpPublicSymbols(&pdb, pv, cb, lpsz);
			pdb.FreeStream(pv);
		}
	}
}

int ShowHelp()
{
	eprintf(L"*NtSymbolPath*PE_Name\n");
	eprintf(L"*PDB_Path\n");

	return __LINE__;
}

int epz(int argc, LPWSTR* argv)
{
	PCWSTR NtSymbolPath = 0;
	switch (argc)
	{
	case 2:
		NtSymbolPath = argv[1];
	case 1:
		return UDTEntry(argv[0], NtSymbolPath), 0;
	}
	return ShowHelp();
}

void ep(PVOID)
{
	HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE); 

	SetConsoleTextAttribute(GetStdHandle(STD_ERROR_HANDLE), FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	SetConsoleTextAttribute(hStdout, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	SetConsoleMode(GetStdHandle(STD_INPUT_HANDLE), 0);

	volatile static int z;
	PVOID stack = alloca(z);
	LPWSTR* argv = (LPWSTR*)stack, lpsz = GetCommandLineW();

	int argc = 0;

	while (lpsz = wcschr(lpsz, L'*'))
	{
		*lpsz++ = 0;

		if (--argv < stack) stack = alloca(sizeof PVOID);

		*argv = lpsz, argc++;
	}

	initterm();

	int exitcode = epz(argc, argv);

	destroyterm();

	eprintf(L"press any key...\n");
	char a;
	DWORD n;
	ReadConsoleA(GetStdHandle(STD_INPUT_HANDLE), &a, 1, &n, 0);
	ExitProcess(exitcode);
}

_NT_END