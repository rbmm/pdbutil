#include "StdAfx.h"

extern "C"{
	PSTR __fastcall strnstr(SIZE_T n1, const void* str1, SIZE_T n2, const void* str2);
	PSTR __fastcall strnchr(SIZE_T n1, const void* str1, char c);
}

#define _strnstr(a, b, x) strnstr(RtlPointerToOffset(a, b), a, sizeof(x) - 1, x)
#define _strnstrL(a, b, x) strnstr(RtlPointerToOffset(a, b), a, strlen(x), x)
#define _strnchr(a, b, c) strnchr(RtlPointerToOffset(a, b), a, c)
#define _strnstrS(a, b, s, x) strnstr(RtlPointerToOffset(a, b), a, s, x)

#define LP(str) RTL_NUMBER_OF(str) - 1, str
#define PL(str) str, RTL_NUMBER_OF(str) - 1 

_NT_BEGIN

#include "undname.h"
#include "lineheap.h"
#include "pdb.h"
BOOL eprintf(PCWSTR format, ...);

static _lineHeap g_sh, g_nh;

__inline bool IsBeginSymbol(char c)
{
	switch (c)
	{
	case ' ':
	case ',':
	case '<':
	case '(':
	case '&':
		return true;
	}
	return false;
}

void SmartRemove(PSTR sz, PCSTR sbstr, ULONG len)
{
	PSTR end = sz + strlen(sz), c, to = 0, q = 0, from = 0, _sz = sz;

	while (c = _strnchr(sz, end, ':'))
	{
		if (*c == ':' && RtlPointerToOffset(sz, c) > len && !memcmp(q = c - len - 1, sbstr, len) && 
			(q == _sz || IsBeginSymbol(q[-1]) ))
		{
			if (to)
			{
				ULONG l = (ULONG)(q - from);
				memcpy(to, from, l);
				to += l;
			}
			else
			{
				to = q;
			}
			from = c + 1;
		}
		sz = c + 1;

		if (sz >= end)
		{
			break;
		}
	}

	if (to)
	{
		memcpy(to, from, 1 + end - from);
	}
}

void RemoveEmptyVoid(PSTR sz)
{
	PSTR end = sz + strlen(sz), c, to = 0, from = 0;

	while (c = _strnchr(sz, end, '('))
	{
		if (c[0] == 'v' && c[1] == 'o' && c[2] == 'i' && c[3] == 'd' && c[4] == ')')
		{
			if (to)
			{
				ULONG l = (ULONG)(c - from);
				memcpy(to, from, l);
				to += l;
			}
			else
			{
				to = c;
			}
			from = c + 4, sz = c + 5;
		}
		else 
		{
			sz = c;
		}
	}

	if (to)
	{
		memcpy(to, from, 1 + end - from);
	}
}

class CNameSpace : public RTL_AVL_TABLE
{
private:
	RTL_AVL_TABLE m_rat[3];
	PCSTR m_name;
	BOOLEAN m_bNamespace, m_bClass;

	static RTL_GENERIC_COMPARE_RESULTS NTAPI NameSpaceCompareRoutine(
		PRTL_AVL_TABLE, CNameSpace* FirstStruct, CNameSpace* SecondStruct
		)
	{
		int i = strcmp(FirstStruct->m_name, SecondStruct->m_name);
		if (i < 0) return GenericLessThan;
		if (0 < i) return GenericGreaterThan;
		return GenericEqual;
	}

	static RTL_GENERIC_COMPARE_RESULTS NTAPI SymbolCompareRoutine(
		PRTL_AVL_TABLE, PCSTR FirstStruct, PCSTR SecondStruct
		)
	{
		int i = strcmp(FirstStruct, SecondStruct);
		if (i < 0) return GenericLessThan;
		if (0 < i) return GenericGreaterThan;
		return GenericEqual;
	}

	static PVOID NTAPI AllocateRoutine(PRTL_AVL_TABLE ,CLONG ByteSize)
	{
		return g_sh.alloc(ByteSize);
	}

public:
	void* operator new(size_t cb) { return g_sh.alloc((DWORD)cb); }

	CNameSpace* InsertNamespace(PCSTR name)
	{
		BOOLEAN bNew;
		CNameSpace* pNS = (CNameSpace*)RtlInsertElementGenericTableAvl(this, &CNameSpace(name), sizeof(CNameSpace), &bNew);

		if (pNS && bNew)
		{
			pNS->m_name = g_nh.alloc(name);
			pNS->Init();
		}

		return pNS;
	}

	void InsertSymbol(int i, PSTR name)
	{
		if (i < 0)
		{
			i = 0;
		}
		else
		{
			m_bNamespace = FALSE;
			if (0 < i)
			{
				m_bClass = TRUE;
			}
		}

		ULONG len = (ULONG)strlen(name) + 1;
		BOOLEAN bNew;
		RtlInsertElementGenericTableAvl(m_rat + i, name, len, &bNew);
		//if (!bNew)
		//{
		//	__nop();
		//}
	}

	CNameSpace(PCSTR name) : m_name(name), m_bNamespace(TRUE), m_bClass(FALSE)
	{ 
	}

	void Init()
	{
		RtlInitializeGenericTableAvl(this, 
			(PRTL_AVL_COMPARE_ROUTINE)NameSpaceCompareRoutine, AllocateRoutine, 0, 0);

		int i = RTL_NUMBER_OF(m_rat) - 1;
		do 
		{
			RtlInitializeGenericTableAvl(m_rat + i, 
				(PRTL_AVL_COMPARE_ROUTINE)SymbolCompareRoutine, AllocateRoutine, 0, 0);
		} while(i--);
	}

	PSTR Dump(PSTR buf, int level = -1);

} g_ns("");

PSTR CNameSpace::Dump(PSTR buf, int level)
{
	char* prefix = const_cast<char*>("");
	if (0 < level) {
		prefix = (char*)alloca(1 + level);
		memset(prefix, '\t', level);
		prefix[level] = 0;
	}

	if (0 <= level) buf += sprintf(buf, "%s%s %s\r\n%s{\r\n", prefix, 
		m_bNamespace ? "namespace" : (m_bClass ? "class" : "struct"), m_name, prefix);

	if (CNameSpace *pNS = (CNameSpace*)RtlEnumerateGenericTableAvl(this, TRUE))
	{
		do 
		{
			buf = pNS->Dump(buf, level + 1);
		} while (pNS = (CNameSpace*)RtlEnumerateGenericTableAvl(this, FALSE));
	}

	int i = RTL_NUMBER_OF(m_rat) - 1, _i = m_bClass ? 2 : 0;
	PRTL_AVL_TABLE Table = m_rat + RTL_NUMBER_OF(m_rat);

	static const PSTR s_ppp[] = { 
		const_cast<char*>("public"), 
		const_cast<char*>("protected"), 
		const_cast<char*>("private") 
	};

	do 
	{
		if (PCSTR psz = (PCSTR)RtlEnumerateGenericTableAvl(--Table, TRUE))
		{
			if (i != _i)
			{
				buf += sprintf(buf, "%s%s:\r\n", prefix, s_ppp[i]);
			}
			do 
			{
				buf += sprintf(buf, level < 0 ? "%s%s;\r\n" : "%s\t%s;\r\n", prefix, psz);
			} while (psz = (PCSTR)RtlEnumerateGenericTableAvl(Table, FALSE));
		}
	} while(i--);

	if (0 <= level) buf += sprintf(buf, "%s};\r\n\r\n", prefix);

	return buf;
}

BOOL IsOperator(PCSTR name, PCSTR pc)
{
	// c == '<' { <, <=, <<, <<= }
	// c == '>' { ->, ->*, >>=, >> , >, >= }

	for (char c = *--pc; ; c = 0)
	{
		switch (*--pc)
		{
		case '-':
		case '>':
			if (c == '>')
			{
				continue;
			}
			return FALSE;
		case '<':
			if (c == '<')
			{
				continue;
			}
			return FALSE;
		case 'r':
			return pc - 6 > name &&
				pc[-1] == 'o' && 
				pc[-2] == 't' && 
				pc[-3] == 'a' && 
				pc[-4] == 'r' && 
				pc[-5] == 'e' && 
				pc[-6] == 'p' && 
				pc[-7] == 'o' &&
				(pc - 7 == name || pc[-8] < 'A');
		default:
			return FALSE;
		}
	}
}

BOOL AddSymbol(PSTR name)
{
	enum { max_short_len = 0x4000, max_full_len = 0xc000};

	PSTR ShortName = (PSTR)alloca(max_short_len), FullName = (PSTR)alloca(max_full_len);

	if (!_unDName(ShortName, name, max_short_len, 
		UNDNAME_NAME_ONLY|
		UNDNAME_NO_MS_KEYWORDS|
		UNDNAME_NO_ALLOCATION_MODEL|
		UNDNAME_NO_SPECIAL_SYMS
		)) 
	{
		return FALSE;
	}

	if (strchr(ShortName, '`') || *ShortName == '?') 
	{
		return FALSE;
	}

	if (!_unDName(FullName, name, max_full_len, 
		UNDNAME_NO_MS_KEYWORDS|
		UNDNAME_NO_ALLOCATION_MODEL|
		UNDNAME_NO_THISTYPE|
		UNDNAME_NO_THROW_SIGNATURES|
		UNDNAME_NO_RETURN_UDT_MODEL|
		UNDNAME_32_BIT_DECODE|
		UNDNAME_NO_SPECIAL_SYMS|
		UNDNAME_NO_ECSU
		)) return FALSE;

	if (strchr(FullName, '`')) 
	{
		return FALSE;
	}

#if 0
	volatile static size_t msl = 0;
	volatile size_t sl = strlen(ShortName);
	if (msl < sl)
	{
		msl = sl;
	}
	
	if (strstr(FullName, "_StandardDestroyCB(_ITEMID_CHILD *,void *)"))
	{
		__nop();//IActivatableClassRegistration * *(void)
	}
#endif

	int i = -1;
	if (!strncmp(FullName, "public: ", 8)) i = 0, FullName += 8;
	else if (!strncmp(FullName, "protected: ", 11)) i = 1, FullName += 11;
	else if (!strncmp(FullName, "private: ", 9)) i = 2, FullName += 9;

	RemoveEmptyVoid(ShortName);
	RemoveEmptyVoid(FullName);

	PSTR a = strstr(FullName, ShortName), c = ShortName;

	if (!a)
	{
		return FALSE;
	}

	*a = 0, a += strlen(ShortName);

	int lock = 0;
	PCSTR szremove = 0;


	CNameSpace *pNS = &g_ns;
	ULONG len;

	for(;;) 
	{
		switch (*c++)
		{
		case ' ':
			if (lock)
			{
				continue;
			}

			if (!IsOperator(ShortName, c))
			{
				return FALSE;
			}
		case 0:
			if (lock)
			{
				return FALSE;
			}
			len = (ULONG)strlen(ShortName);
			if ((c = (PSTR)memcpy(FullName + strlen(FullName), ShortName, len) + len) != a)
			{
				strcpy(c, a);
			}
			pNS->InsertSymbol(i, FullName);
			return TRUE;

		case '<':
			if (!IsOperator(ShortName, c))
			{
				lock++;
			}
			continue;

		case '>':
			if (!IsOperator(ShortName, c))
			{
				if (!lock--)
				{
					return FALSE;
				}
			}
			continue;

		case ':':
			if (!lock)
			{
				if (*c != ':')
				{
					return FALSE;
				}

				c[-1] = 0;

				pNS = pNS->InsertNamespace(ShortName);

				SmartRemove(c, ShortName, (ULONG)strlen(ShortName));

				if (szremove)
				{
					len = (ULONG)strlen(szremove);
					SmartRemove(FullName, szremove, len);
					SmartRemove(a, szremove, len);
				}

				szremove = ShortName;

				ShortName = ++c;
			}
			continue;
		}
	}
}

size_t __fastcall strnlen(_In_ size_t numberOfElements, _In_ const char *str);

template<typename T>
BOOL IsValidSymbol(T* ps, ULONG cb)
{
	if (FIELD_OFFSET(T, name) < cb)
	{
		ULONG len = sizeof(USHORT) + static_cast<SYM_HEADER*>(ps)->len;
		if (FIELD_OFFSET(T, name) < len && len <= cb)
		{
			len -= FIELD_OFFSET(T, name);
			if (strnlen(len, ps->name) < len)
			{
				return TRUE;
			}
		}
	}

	return FALSE;
}

C_ASSERT(sizeof(SYM_HEADER) == 4);
C_ASSERT(FIELD_OFFSET(PUBSYM32, pubsymflags) == 4);

DbiModuleInfo** getModules(_In_ PdbReader* pdb, _Out_ PULONG pn)
{
	*pn = 0;

	ULONG size, nModules, cb;
	PUSHORT pFileInfo = pdb->getFileInfo(size);
	union {
		PBYTE pb;
		DbiModuleInfo* module;
	};

	if (!pFileInfo || !(nModules = *pFileInfo) || !(module = pdb->getModuleInfo(size)))
	{
		return 0;
	}

	if (size < sizeof(DbiModuleInfo) + 2)
	{
		return 0;
	}

	PCSTR end = RtlOffsetToPointer(module, size - 2);

	if (end[0] || end[1])
	{
		return 0;
	}

	if (DbiModuleInfo** ppm = new DbiModuleInfo*[nModules])
	{
		DbiModuleInfo** _ppm = ppm;
		*pn = nModules;
		do 
		{
			*ppm++ = module;
			PCSTR objectName = module->buf + strlen(module->buf) + 1;

			cb = (RtlPointerToOffset(module, objectName + strlen(objectName)) + __alignof(DbiModuleInfo)) & ~(__alignof(DbiModuleInfo) - 1);

			size -= cb, pb += cb;

		} while (--nModules && size > sizeof(DbiModuleInfo) + 1);

		if (!nModules && !size)
		{
			return _ppm;
		}

		*pn = 0;
		delete [] _ppm;
	}

	return 0;
}

struct MI 
{
	USHORT imod = MAXUSHORT;
	PBYTE _pb = 0;
	ULONG _cb;

	~MI()
	{
		if (PVOID pv = _pb)
		{
			delete [] pv;
		}
	}

	ULONG rva(DbiModuleInfo* pm, PdbReader* pdb, ULONG ibSym, PCSTR name)
	{
		USHORT s = pm->stream;
		if (s != MAXUSHORT)
		{
			union {
				PVOID pv;
				PBYTE pb;
				SYM_HEADER* ph;
				PROCSYM32* ps;
			};
			ULONG cb;
			if (s == imod)
			{
				cb = _cb, pb = _pb;
			}
			else
			{
				if (0 > pdb->getStream(s, &pv, &cb))
				{
					return 0;
				}
				if (_pb)
				{
					delete [] _pb;
					_pb = 0;
				}
				_pb = pb;
				_cb = cb;
				imod = s;
			}

			if (ibSym < cb) // Offset of actual symbol in $$Symbols
			{
				pb += ibSym, cb -= ibSym;

				if (IsValidSymbol(ps, cb))
				{
					switch (ph->type)
					{
					case S_GPROC32:
					case S_LPROC32:
					case S_GPROC32_ID:
					case S_LPROC32_ID:
					case S_LPROC32_DPC:
					case S_LPROC32_DPC_ID:
						if (!strcmp(ps->name, name))
						{
							return pdb->rva(ps->seg, ps->off);
						}
					}
				}
			}
		}

		return 0;
	}
};

struct RVAOFS
{
	DWORD rva;

	static int __cdecl compare(RVAOFS& a, RVAOFS& b);
};

int __cdecl RVAOFS::compare(RVAOFS& a, RVAOFS& b)
{
	ULONG a_rva = a.rva, b_rva = b.rva;
	if (a_rva < b_rva) return -1;
	if (a_rva > b_rva) return +1;
	return 0;
}

struct MD 
{
	ULONG n;
	DbiModuleInfo** pmm;

	MD(PdbReader* pdb) : pmm(getModules(pdb, &n))
	{
	}

	~MD()
	{
		if (PVOID pv = pmm)
		{
			delete [] pv;
		}
	}

	DbiModuleInfo* operator[](ULONG i)
	{
		return i < n ? pmm[i] : 0;
	}
};

BOOL IsRvaExist(ULONG rva, RVAOFS *pSymbols, ULONG b)
{
	if (!b || pSymbols->rva > rva)
	{
		return 0;
	}

	ULONG a = 0, o, r;

	do 
	{
		if ((r = pSymbols[o = (a + b) >> 1].rva) == rva)
		{
			return TRUE;
		}

		r < rva ? a = o + 1 : b = o;

	} while (a < b);

	return FALSE;
}
ULONG LoadSymbols(PdbReader* pdb,
				  PVOID stream, 
				  ULONG size, 
				  MD& md, 
				  RVAOFS* pSymbolsBase,
				  ULONG nSymbols,
				  BOOL bSecondLoop)
{
	union {
		PVOID pv;
		PBYTE pb;
		SYM_HEADER* psh;
		PUBSYM32* pbs;
		PROCSYM32* pps;
		REFSYM2* pls;
	};

	pv = stream;

	DWORD n = 0, len;

	PSTR name = 0;
	MI mi;

	RVAOFS* pSymbols = pSymbolsBase + nSymbols;

	do 
	{
		len = psh->len + sizeof(WORD);

		if (size < len) 
		{
			return 0;
		}

		ULONG rva = 0;

		switch (psh->type)
		{
		case S_DATAREF:
		case S_PROCREF:
		case S_LPROCREF:
			if (bSecondLoop && IsValidSymbol(pls, size))
			{
				if (DbiModuleInfo* pm = md[pls->imod - 1])
				{
					name = pls->name;
					if (!*name)
					{
						continue;
					}
					if (rva = mi.rva(pm, pdb, pls->ibSym, pls->name))
					{
						if (!IsRvaExist(rva, pSymbolsBase, nSymbols))
						{
							break;
						}
					}
				}
			}
			continue;

		case S_PUB32:
			if (!bSecondLoop && IsValidSymbol(pbs, size))
			{
				name = pbs->name;
				if (!*name)
				{
					continue;
				}
				if (rva = pdb->rva(pbs->seg, pbs->off))
				{
					break;
				}
			}
			continue;
		default:
			continue;
		}

		if (AddSymbol(name))
		{
			pSymbols++->rva = rva;
			n++;
		}

	} while (pb += len, size -= len);

	return n;
}

BOOL IncludeSymbol(_In_ PCSTR name)
{
	// if (!c++) continue;
	if (*name == '?')
	{
		// if (??_C@_) continue;// string
		if (name[1] != '?' || name[2] != '_' || name[3] != 'C' || name[4] != '@' || name[5] != '_')
		{
			return TRUE;
		}
	}

	return FALSE;
}

ULONG GetMaxSymCount(PVOID stream, ULONG size)
{
	union {
		PVOID pv;
		PBYTE pb;
		SYM_HEADER* psh;
		PUBSYM32* pbs;
		REFSYM2* pls;
	};

	pv = stream;

	ULONG n = 0, len;

	PSTR name = 0;

	do 
	{
		len = psh->len + sizeof(WORD);

		if (size < len) 
		{
			return 0;
		}

		switch (psh->type)
		{
		case S_DATAREF:
		case S_PROCREF:
		case S_LPROCREF:
			if (IsValidSymbol(pls, size))
			{
				name = pls->name;
				break;
			}
			continue;

		case S_PUB32:
			if (IsValidSymbol(pbs, size))
			{
				name = pbs->name;
				break;
			}
			continue;
		default:
			continue;
		}

		if (IncludeSymbol(name))
		{
			n++;
		}
		else
		{
			*name = 0;
		}

	} while (pb += len, size -= len);

	return n;
}

NTSTATUS LoadPublicSymbols(PdbReader* pdb, PVOID stream, ULONG size)
{
	if (ULONG n = GetMaxSymCount(stream, size))
	{
		if (RVAOFS* pSymbols = new RVAOFS[n])
		{
			MD md(pdb);

			if (n = LoadSymbols(pdb, stream, size, md, pSymbols, 0, FALSE))
			{
				qsort(pSymbols, n, sizeof(RVAOFS), (QSORTFN)RVAOFS::compare);
			}

			n += LoadSymbols(pdb, stream, size, md, pSymbols, n, TRUE);

			delete [] pSymbols;

			return STATUS_SUCCESS;
		}

		return STATUS_INSUFFICIENT_RESOURCES;
	}

	return STATUS_NOT_FOUND;
}

void DumpPublicSymbols(PdbReader* pdb, PVOID sym, LONG size, PWSTR lpsz)
{
	//char tst[] = "void fn<int a(void), void b(void*,void), void* c(void)>(void)";
	//RemoveEmptyVoid(tst);
	eprintf(L"search for public symbols...");

	if (!g_sh.Create(0x1000000, sizeof(PVOID)) || !g_nh.Create(0x100000, 1)) return;

	g_ns.Init();

	if (0 <= LoadPublicSymbols(pdb, sym, size))
	{
		PSTR buf = 0, end;
		SIZE_T RegionSize = 0x1000000;
		if (0 <= ZwAllocateVirtualMemory(NtCurrentProcess(), (void**)&buf, 0, &RegionSize, MEM_COMMIT, PAGE_READWRITE))
		{
			end = g_ns.Dump(buf);
			LARGE_INTEGER li;
			li.QuadPart = end - buf;
			HANDLE hFile;
			IO_STATUS_BLOCK iosb;

			PWSTR name = (PWSTR)alloca((wcslen(lpsz) + 8)<< 1);

			swprintf(name, L"%s.pub.h", lpsz);

			UNICODE_STRING ObjectName;
			OBJECT_ATTRIBUTES oa = { sizeof(oa), 0, &ObjectName };
			if (RtlDosPathNameToNtPathName_U(name, &ObjectName, 0, 0))
			{
				if (0 <= ZwCreateFile(&hFile, FILE_APPEND_DATA|SYNCHRONIZE, &oa, &iosb, &li, 0, 0, 
					FILE_OVERWRITE_IF, FILE_NON_DIRECTORY_FILE|FILE_SYNCHRONOUS_IO_NONALERT, 0, 0))
				{
					ZwWriteFile(hFile, 0, 0, 0, &iosb, buf, li.LowPart, 0, 0);
					ZwClose(hFile);
				}
				RtlFreeUnicodeString(&ObjectName);
			}

			ZwFreeVirtualMemory(NtCurrentProcess(), (void**)&buf, &RegionSize, MEM_RELEASE);
		}
	}
}

_NT_END