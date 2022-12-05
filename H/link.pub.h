struct <lambda_b70241e9b5ebaad244db3e52d52cab17>
{
	void operator()(unsigned short * const,unsigned short const * const,unsigned __int64,unsigned __int64,unsigned short);
};

class Arm64HazardAvoidance
{
	bool AvoidHazard(unsigned long,unsigned char *,unsigned long,unsigned long *);
	bool FHazardCandidate(unsigned char *,unsigned char *);
public:
	static bool FADRP(unsigned char *,unsigned long &);
	static bool FLoadStore(unsigned char *);
	static bool FLoadStoreRegisterUnsignedImmediateWithBaseReg(unsigned char *,unsigned long);
	static bool FNeedCheckHazard(IMAGE *,CON *);
	void Do(unsigned long,unsigned long *);
};

class ArmHazardAvoidance
{
	bool AvoidHazard(unsigned long,unsigned char *,unsigned long,unsigned long *);
	bool FHazardCandidate(unsigned char *);
public:
	static bool FNeedCheckHazard(IMAGE *,CON *);
	void Do(unsigned long,unsigned long *);
};

struct Array<ARGUMENT_LIST *>
{
	int append(ARGUMENT_LIST * const &);
	int setSize(unsigned __int64);
};

struct Array<Array<unsigned __int64> *>
{
	int setSize(unsigned __int64);
	void clear();
	~Array<Array<unsigned __int64> *>();
};

struct Array<BASE_RELOC *>
{
	int setSize(unsigned __int64);
};

struct Array<CHPE_CODE_RANGE_ENTRY>
{
	int setSize(unsigned __int64);
};

struct Array<CMismatches::ValuePmod>
{
	int setSize(unsigned __int64);
};

struct Array<CON *>
{
	int append(CON * const &);
	int setSize(unsigned __int64);
	~Array<CON *>();
};

struct Array<CON_VOLATILE_META *>
{
	int setSize(unsigned __int64);
};

struct Array<CORTCEInfo>
{
	int setSize(unsigned __int64);
};

struct Array<CTaskQueue::MSGBLOCKPAIR *>
{
	~Array<CTaskQueue::MSGBLOCKPAIR *>();
};

struct Array<EXPORT>
{
	Array<EXPORT>(unsigned int);
	int append(EXPORT const &);
	int setSize(unsigned __int64);
};

struct Array<EXTERNAL *>
{
	int append(EXTERNAL * const &);
	int setSize(unsigned __int64);
	~Array<EXTERNAL *>();
};

struct Array<GRP *>
{
	int setSize(unsigned __int64);
};

struct Array<ICF_GRP *>
{
	int setSize(unsigned __int64);
};

struct Array<IMemHandler *>
{
	int setSize(unsigned __int64);
};

struct Array<ImplicitDllImportInfo>
{
	int setSize(unsigned __int64);
};

struct Array<LIB *>
{
	int append(LIB * const &);
	int setSize(unsigned __int64);
	~Array<LIB *>();
};

struct Array<LONG_BRANCH_REGION *>
{
	int setSize(unsigned __int64);
};

struct Array<LSL * *>
{
	int append(LSL * * const &);
	int setSize(unsigned __int64);
};

struct Array<LongBranch>
{
	int setSize(unsigned __int64);
};

struct Array<LongBranchRecord>
{
	int append(LongBranchRecord const &);
	int setSize(unsigned __int64);
};

struct Array<LongBranchTarget>
{
	int setSize(unsigned __int64);
};

struct Array<MOD *>
{
	int append(MOD * const &);
	int setSize(unsigned __int64);
	~Array<MOD *>();
};

struct Array<MODSTATICDEF *>
{
	int setSize(unsigned __int64);
};

struct Array<PdataMgr::FuncStartEnd>
{
	int append(PdataMgr::FuncStartEnd const &);
	int setSize(unsigned __int64);
};

struct Array<PdataMgr::IntraLBR>
{
	int setSize(unsigned __int64);
};

struct Array<PdataMgr::PdataIntraLBR>
{
	int setSize(unsigned __int64);
};

struct Array<PdataMgr::PdataLeafFunc>
{
	int setSize(unsigned __int64);
};

struct Array<PhaseInfo>
{
	~Array<PhaseInfo>();
};

struct Array<RVACB>
{
	int setSize(unsigned __int64);
};

struct Array<SEC *>
{
	int append(SEC * const &);
	int setSize(unsigned __int64);
	~Array<SEC *>();
};

struct Array<SXDataRecord>
{
	int append(SXDataRecord const &);
	int setSize(unsigned __int64);
	void clear();
};

struct Array<SXPextRecord>
{
	int append(SXPextRecord const &);
	int setSize(unsigned __int64);
	void clear();
};

struct Array<StackNode>
{
	int append(StackNode const &);
};

struct Array<TransInfo>
{
	int append(TransInfo const &);
	int setSize(unsigned __int64);
};

struct Array<Warbird::WARBIRD_NONLTCG_SYMBOL>
{
	int append(Warbird::WARBIRD_NONLTCG_SYMBOL const &);
	int setSize(unsigned __int64);
};

struct Array<_DYN_VALUE_RELOC_OFFSET_DESCRIPTOR>
{
	int setSize(unsigned __int64);
	~Array<_DYN_VALUE_RELOC_OFFSET_DESCRIPTOR>();
};

struct Array<_IMAGE_SECTION_HEADER>
{
	int append(_IMAGE_SECTION_HEADER const &);
	int setSize(unsigned __int64);
};

struct Array<_IMAGE_SYMBOL>
{
	int append(_IMAGE_SYMBOL const &);
	int setSize(unsigned __int64);
};

struct Array<char *>
{
	int append(char * const &);
	int setSize(unsigned __int64);
	~Array<char *>();
};

struct Array<char const *>
{
	int append(char const * const &);
	int setSize(unsigned __int64);
};

struct Array<char>
{
	~Array<char>();
};

struct Array<int>
{
	int setSize(unsigned __int64);
};

struct Array<tagPGDOBJECTRECORD>
{
	int setSize(unsigned __int64);
};

struct Array<unsigned __int64>
{
	int append(unsigned __int64 const &);
	int setSize(unsigned __int64);
	~Array<unsigned __int64>();
};

struct Array<unsigned int>
{
	int append(unsigned int const &);
	int setSize(unsigned __int64);
	void clear();
	~Array<unsigned int>();
};

struct Array<unsigned long>
{
	Array<unsigned long>(unsigned int);
	int append(unsigned long const &);
	int setSize(unsigned __int64);
	void clear();
	void fill(unsigned long const &);
	~Array<unsigned long>();
};

struct Array<unsigned short *>
{
	Array<unsigned short *>(unsigned int);
	int append(unsigned short * const &);
	int setSize(unsigned __int64);
	~Array<unsigned short *>();
};

struct Array<unsigned short const *>
{
	int append(unsigned short const * const &);
	int setSize(unsigned __int64);
	~Array<unsigned short const *>();
};

struct Array<void *>
{
	int append(void * const &);
	int setSize(unsigned __int64);
};

struct Array<void const *>
{
	~Array<void const *>();
};

namespace BufIOPrivate
{
	FI * * rgpfi;
	unsigned long BufferedRead(FI *,void *,unsigned long);
	unsigned long BufferedWrite(FI *,void const *,unsigned long);
	unsigned long MappedRead(FI *,void *,unsigned long);
	unsigned long MappedWrite(FI *,void const *,unsigned long);
};

class Buffer
{
protected:
	int grow(long);
	int setPbExtent(unsigned char *,unsigned char *);
public:
	int Alloc(long);
	int Append(unsigned char const *,long,unsigned char * *);
	int Ensure(long);
	int Reserve(long,unsigned char * *);
	void Clear();
	void Free();
	~Buffer();
};

struct BufferDefaultAllocator
{
	virtual unsigned char * Alloc(long);
	virtual unsigned char * AllocZeroed(long);
	virtual void DeAlloc(unsigned char *);
};

struct CAutoLockT<CLockCS>
{
	~CAutoLockT<CLockCS>();
};

struct CAutoLockT<CLockSRW>
{
	~CAutoLockT<CLockSRW>();
};

struct CCoffAuxSymT<IMAGE_FILE>
{
	virtual long AryDim(unsigned long *,unsigned long);
	virtual long AuxType(unsigned char *);
	virtual long CLineNo(unsigned long *);
	virtual long CRelocs(unsigned long *);
	virtual long CheckSum(unsigned long *);
	virtual long FcnPLineNo(unsigned long *);
	virtual long FcnPNextFcn(unsigned long *);
	virtual long FileName(unsigned char *,unsigned long);
	virtual long ISection(int *);
	virtual long ImgAuxSym(unsigned char *);
	virtual long Length(unsigned long *);
	virtual long MiscLineNo(unsigned long *);
	virtual long MiscSize(unsigned long *);
	virtual long MiscTotalSize(unsigned long *);
	virtual long NewSymCrc(unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SelType(unsigned char *);
	virtual long TagIndex(unsigned long *);
	virtual long TkFile(unsigned __int64 *);
	virtual long Tocid(unsigned char *);
	virtual long TokenDef(unsigned long *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CCoffAuxSymT<IMAGE_FILE_EX>
{
	virtual long AryDim(unsigned long *,unsigned long);
	virtual long AuxType(unsigned char *);
	virtual long CLineNo(unsigned long *);
	virtual long CRelocs(unsigned long *);
	virtual long CheckSum(unsigned long *);
	virtual long FcnPLineNo(unsigned long *);
	virtual long FcnPNextFcn(unsigned long *);
	virtual long FileName(unsigned char *,unsigned long);
	virtual long ISection(int *);
	virtual long ImgAuxSym(unsigned char *);
	virtual long Length(unsigned long *);
	virtual long MiscLineNo(unsigned long *);
	virtual long MiscSize(unsigned long *);
	virtual long MiscTotalSize(unsigned long *);
	virtual long NewSymCrc(unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SelType(unsigned char *);
	virtual long TagIndex(unsigned long *);
	virtual long TkFile(unsigned __int64 *);
	virtual long Tocid(unsigned char *);
	virtual long TokenDef(unsigned long *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CCoffContrib
{
protected:
	_IMAGE_RELOCATION * PImgRelocs(unsigned long,unsigned char *);
	static BLK _blkRelocs;
	static CLinkDataRO * _pldDataRO;
	static CLinkDataRO * _pldDataROAlt;
	static CLinkDataRO * _pldSecName;
public:
	virtual long CLineNo(unsigned long *);
	virtual long CRelocs(unsigned long *);
	virtual long CbContents(unsigned long *);
	virtual long Characteristics(unsigned long *);
	virtual long ISection(unsigned long *);
	virtual long PbContents(unsigned char *,unsigned long,unsigned long *);
	virtual long PbContentsRO(ILinkDataRO * *);
	virtual long PbContentsRW(ILinkDataRW * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RgLineNo(ILinkDataRO * *);
	virtual long RgRelocs(ILinkDataRO * *);
	virtual long RgRelocsEx(unsigned char *,unsigned long);
	virtual long RgSymbol(unsigned long,ICOFFSymRO * *,IObjectContrib * *);
	virtual long SzSectionName(ILinkDataRO * *);
	virtual long TkFile(unsigned __int64 *);
	virtual long VirtualAddress(unsigned long *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CCoffEnumSections
{
protected:
	~CCoffEnumSections();
public:
	virtual long Clone(IEnumContrib * *);
	virtual long Next(unsigned long,IObjectContrib * *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset();
	virtual long Skip(unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CCoffSymROT<IMAGE_FILE>
{
	static CEnumAuxSymsT<IMAGE_FILE> * _pEnumAuxAlt;
	static CEnumAuxSymsT<IMAGE_FILE> * _pEnumAuxCur;
	static CLinkDataRO * _pldSymName;
	static CLinkDataRO * _pldSymNameAlt;
public:
	static void Init();
	virtual long CAuxSym(unsigned char *);
	virtual long EnumAuxSym(IEnumAuxSym * *);
	virtual long ISection(int *);
	virtual long ISym(unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long StorageClass(unsigned char *);
	virtual long SzFile(ILinkDataRO * *);
	virtual long SzName(ILinkDataRO * *);
	virtual long TkFile(unsigned __int64 *);
	virtual long Type(unsigned short *);
	virtual long Value(unsigned long *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CCoffSymROT<IMAGE_FILE_EX>
{
	static CEnumAuxSymsT<IMAGE_FILE_EX> * _pEnumAuxAlt;
	static CEnumAuxSymsT<IMAGE_FILE_EX> * _pEnumAuxCur;
	static CLinkDataRO * _pldSymName;
	static CLinkDataRO * _pldSymNameAlt;
public:
	static void Init();
	virtual long CAuxSym(unsigned char *);
	virtual long EnumAuxSym(IEnumAuxSym * *);
	virtual long ISection(int *);
	virtual long ISym(unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long StorageClass(unsigned char *);
	virtual long SzFile(ILinkDataRO * *);
	virtual long SzName(ILinkDataRO * *);
	virtual long TkFile(unsigned __int64 *);
	virtual long Type(unsigned short *);
	virtual long Value(unsigned long *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CCoffSymRWT<IMAGE_FILE>
{
	static CEnumAuxSymsT<IMAGE_FILE> * _pEnumAuxAlt;
	static CEnumAuxSymsT<IMAGE_FILE> * _pEnumAuxCur;
	static CLinkDataRO * _pldSymName;
	static CLinkDataRO * _pldSymNameAlt;
public:
	static void Init();
	virtual long CAuxSym(unsigned char *);
	virtual long EnumAuxSym(IEnumAuxSym * *);
	virtual long ISection(int *);
	virtual long ISym(unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetISection(int);
	virtual long SetType(unsigned short);
	virtual long SetValue(unsigned long);
	virtual long StorageClass(unsigned char *);
	virtual long SzFile(ILinkDataRO * *);
	virtual long SzName(ILinkDataRO * *);
	virtual long TkFile(unsigned __int64 *);
	virtual long Type(unsigned short *);
	virtual long Value(unsigned long *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CCoffSymRWT<IMAGE_FILE_EX>
{
	static CEnumAuxSymsT<IMAGE_FILE_EX> * _pEnumAuxAlt;
	static CEnumAuxSymsT<IMAGE_FILE_EX> * _pEnumAuxCur;
	static CLinkDataRO * _pldSymName;
	static CLinkDataRO * _pldSymNameAlt;
public:
	static void Init();
	virtual long CAuxSym(unsigned char *);
	virtual long EnumAuxSym(IEnumAuxSym * *);
	virtual long ISection(int *);
	virtual long ISym(unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetISection(int);
	virtual long SetType(unsigned short);
	virtual long SetValue(unsigned long);
	virtual long StorageClass(unsigned char *);
	virtual long SzFile(ILinkDataRO * *);
	virtual long SzName(ILinkDataRO * *);
	virtual long TkFile(unsigned __int64 *);
	virtual long Type(unsigned short *);
	virtual long Value(unsigned long *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CCoffSymTabROT<IMAGE_FILE>
{
	bool FInit(CObjFileT<IMAGE_FILE> *,unsigned long,bool);
	static CCoffSymROT<IMAGE_FILE> * _pccoffsymAlt;
	static CCoffSymROT<IMAGE_FILE> * _pccoffsymCur;
public:
	virtual long CSymbols(unsigned long *);
	virtual long EmitCOFFSymbolTable(unsigned char *,unsigned long);
	virtual long EnumCOFFSymRO(IEnumCOFFSymRO * *);
	virtual long GetCOFFSymRO(unsigned long,ICOFFSymRO * *);
	virtual long ISYMNextCOFFSymRO(ICOFFSymRO *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CCoffSymTabROT<IMAGE_FILE_EX>
{
	bool FInit(CObjFileT<IMAGE_FILE_EX> *,unsigned long,bool);
	static CCoffSymROT<IMAGE_FILE_EX> * _pccoffsymAlt;
	static CCoffSymROT<IMAGE_FILE_EX> * _pccoffsymCur;
public:
	virtual long CSymbols(unsigned long *);
	virtual long EmitCOFFSymbolTable(unsigned char *,unsigned long);
	virtual long EnumCOFFSymRO(IEnumCOFFSymRO * *);
	virtual long GetCOFFSymRO(unsigned long,ICOFFSymRO * *);
	virtual long ISYMNextCOFFSymRO(ICOFFSymRO *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CCoffSymTabRWT<IMAGE_FILE>
{
	static CCoffSymRWT<IMAGE_FILE> * _pccoffsymAlt;
	static CCoffSymRWT<IMAGE_FILE> * _pccoffsymCur;
public:
	virtual long CSymbols(unsigned long *);
	virtual long EmitCOFFSymbolTable(unsigned char *,unsigned long);
	virtual long EnumCOFFSymRW(IEnumCOFFSymRW * *);
	virtual long GetCOFFSymRW(unsigned long,ICOFFSymRW * *);
	virtual long ISYMNextCOFFSymRW(ICOFFSymRW *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CCoffSymTabRWT<IMAGE_FILE_EX>
{
	static CCoffSymRWT<IMAGE_FILE_EX> * _pccoffsymAlt;
	static CCoffSymRWT<IMAGE_FILE_EX> * _pccoffsymCur;
public:
	virtual long CSymbols(unsigned long *);
	virtual long EmitCOFFSymbolTable(unsigned char *,unsigned long);
	virtual long EnumCOFFSymRW(IEnumCOFFSymRW * *);
	virtual long GetCOFFSymRW(unsigned long,ICOFFSymRW * *);
	virtual long ISYMNextCOFFSymRW(ICOFFSymRW *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CEnumAuxSymsT<IMAGE_FILE>
{
	static CCoffAuxSymT<IMAGE_FILE> * _pAuxSymAlt;
	static CCoffAuxSymT<IMAGE_FILE> * _pAuxSymCur;
public:
	virtual long Clone(IEnumAuxSym * *);
	virtual long Next(unsigned long,ICOFFAuxSym * *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset();
	virtual long Skip(unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CEnumAuxSymsT<IMAGE_FILE_EX>
{
	static CCoffAuxSymT<IMAGE_FILE_EX> * _pAuxSymAlt;
	static CCoffAuxSymT<IMAGE_FILE_EX> * _pAuxSymCur;
public:
	virtual long Clone(IEnumAuxSym * *);
	virtual long Next(unsigned long,ICOFFAuxSym * *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset();
	virtual long Skip(unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CEnumPubsT<IMAGE_FILE>
{
	bool FBuildIsecToIsymMapping();
	bool FInit();
	unsigned long CPublicSymbols();
public:
	virtual long Clone(IEnumPublics * *);
	virtual long Next(unsigned long,IPublicSym * *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset();
	virtual long Skip(unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CEnumPubsT<IMAGE_FILE_EX>
{
	__MIDL___MIDL_itf_objint_0000_0000_0001 PsymtForPImgSym(_IMAGE_SYMBOL_EX *,unsigned long *);
	bool FBuildIsecToIsymMapping();
	bool FComdat(unsigned long,unsigned char *);
	bool FInit();
	unsigned long CPublicSymbols();
public:
	virtual long Clone(IEnumPublics * *);
	virtual long Next(unsigned long,IPublicSym * *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset();
	virtual long Skip(unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CEnumSymROT<IMAGE_FILE>
{
	virtual long Clone(IEnumCOFFSymRO * *);
	virtual long Next(unsigned long,ICOFFSymRO * *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset();
	virtual long Skip(unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CEnumSymROT<IMAGE_FILE_EX>
{
	virtual long Clone(IEnumCOFFSymRO * *);
	virtual long Next(unsigned long,ICOFFSymRO * *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset();
	virtual long Skip(unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CEnumSymRWT<IMAGE_FILE>
{
	virtual long Clone(IEnumCOFFSymRW * *);
	virtual long Next(unsigned long,ICOFFSymRW * *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset();
	virtual long Skip(unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CEnumSymRWT<IMAGE_FILE_EX>
{
	virtual long Clone(IEnumCOFFSymRW * *);
	virtual long Next(unsigned long,ICOFFSymRW * *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset();
	virtual long Skip(unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CFileIO
{
	long Close();
	virtual long Read(long,void *,unsigned __int64);
	virtual long Write(long,void const *,unsigned __int64);
	~CFileIO();
};

class CImplib
{
	bool AddHybridLTCGICallPushThunk(EXTERNAL *);
	bool FEmitMembers();
	bool FSkipExportPext(EXTERNAL const *);
	char * SzNullThunk();
	char const * GetCvName(ImportData *,ThunkSectionInfo const *,unsigned long *);
	char const * GetSymbolName(ImportData *,SymName,unsigned long *);
	char const * SzHybridPushThunk(char const *);
	static _IMAGE_IMPORT_DESCRIPTOR _NullImportDescriptor;
	static unsigned long ( CImplib::*const * const _rgpfnSizeData)(ImportData *,unsigned long *);
	static void ( CImplib::*const * const _rgpfnGetData)(ImportData *,unsigned char *,unsigned long);
	static void ReSortExportNamePtrs(unsigned char *,unsigned long *,unsigned long,unsigned long);
	unsigned __int64 CbCvExportSyms();
	unsigned long AddHybridPushThunkOBJs();
	unsigned long CsymCreateThunkSymbols();
	unsigned long EmitDefLibExternals(Buffer &,StringTableUnique *,unsigned long);
	unsigned long GetContribDataSize(ThunkSectionInfo const *,ImportData *,unsigned long *);
	unsigned long SelectHybridExportThunks();
	unsigned long SizeData_CvCompile3(ImportData *,unsigned long *);
	unsigned long SizeData_DllName(ImportData *,unsigned long *);
	unsigned long SizeData_HintName(ImportData *,unsigned long *);
	void AddExportSymsIntoDLLSymTab();
	void AddHybridICallPushThunk(EXTERNAL *);
	void BuildRawDataFromExternTable(BLK *,BLK *,BLK *,unsigned long *,unsigned long,unsigned long);
	void CalcSectionsAndSymbols(ImportData *,_IMAGE_SECTION_HEADER *,unsigned int,Buffer *,_IMAGE_SYMBOL *,unsigned int,_IMAGE_FILE_HEADER *);
	void CompleteHybridMap();
	void CompleteLinkerMembers();
	void CreateImportSymbols(unsigned long *);
	void EmitCvExportSyms(int);
	void EmitData_CvCompile3(ImportData *,unsigned char *,unsigned long);
	void EmitData_CvThunk(ImportData *,THKSECTYPE,unsigned char *,unsigned long);
	void EmitData_DllName(ImportData *,unsigned char *,unsigned long);
	void EmitData_HintName(ImportData *,unsigned char *,unsigned long);
	void EmitDefLibHybridExportThunks(Buffer &,StringTableUnique *,unsigned short);
	void EmitDllExportDirectory(unsigned long,unsigned long,unsigned long,bool);
	void EmitExportDataFixups(int,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long);
	void EmitHybridExportThunkDebugFixups(int,BLK *,unsigned long);
	void EmitHybridExportThunkFixups(int,unsigned long);
	void EmitHybridExportThunkGfids(int,unsigned long,unsigned long);
	void EmitImportDescriptor();
	void EmitLinkerMembers(unsigned long);
	void EmitMember(EXTERNAL *);
	void EmitNullImportDescriptor();
	void EmitNullThunkData();
	void EmitPushThunkMembers();
	void GenerateExpAndImpLibFilenames();
	void GenerateSymbolTable(Buffer &,StringTableUnique *,unsigned long *,unsigned short *,unsigned long,unsigned long,unsigned long *,unsigned long,unsigned long,unsigned long,BLK &);
	void GetDllFilename();
	void IdentifyAssignedOrdinals();
	void Init();
	void MakeDllNames(unsigned short const *);
	void SetThunkArchInfo(bool);
	void UpdateArchiveMemberTimeStamp(unsigned long,unsigned long,unsigned long);
	void VerifyFilenames(bool);
	void WriteArchive(unsigned long,unsigned long,unsigned long,unsigned long,bool);
public:
	CImplib(IMAGE *);
	CImplib(IMAGE *,LIB *,int,unsigned short const *,unsigned short,unsigned long);
	int DefLibMain();
	void EmitDelayLoadCode(bool,IMPORT_OBJECT_HEADER const *,int,_IMAGE_FILE_HEADER *,unsigned short,char const *,_IMAGE_SECTION_HEADER *,unsigned int,ImportData *,bool *);
	void EmitImportThunk(int,IMPORT_OBJECT_HEADER const &,_IMAGE_FILE_HEADER *,_IMAGE_SECTION_HEADER *,unsigned int,ImportData *,bool);
	void EmitMember(IMPORT_OBJECT_HEADER &,char const *,char const *);
	void GetData(_IMAGE_SECTION_HEADER *,ImportData *,unsigned char *,unsigned long);
	void GetRelocs(_IMAGE_SECTION_HEADER *,ImportData *,_IMAGE_RELOCATION *,unsigned long);
	~CImplib();
};

class CImportContrib
{
	virtual void Init(unsigned long,CObjFileBase *,_IMAGE_SECTION_HEADER *);
public:
	virtual long PbContents(unsigned char *,unsigned long,unsigned long *);
	virtual long PbContentsRO(ILinkDataRO * *);
	virtual long PbContentsRW(ILinkDataRW * *);
	virtual long RgRelocs(ILinkDataRO * *);
	virtual long RgRelocsEx(unsigned char *,unsigned long);
};

class CImportEnumSections
{
protected:
	bool FInit();
public:
	virtual long Next(unsigned long,IObjectContrib * *,unsigned long *);
	virtual long Reset();
	virtual long Skip(unsigned long);
	virtual unsigned long Release();
};

class CImportObject
{
protected:
	virtual _IMAGE_SYMBOL * ReadSymbolTable(bool);
	virtual bool FComdatIsec(int);
	virtual bool FInit(IMAGE *,void *,LIB *,unsigned short const *,char const *,bool,bool,unsigned long *);
	virtual void LoadStringTable();
	virtual void ReadSectionHeaders(_IMAGE_SECTION_HEADER * *);
	virtual void VerifyOpen();
	void RefreshModuleContent(bool);
public:
	CImportObject(unsigned __int64,bool);
	virtual long EnumContrib(IEnumContrib * *);
	virtual long FImportObj(int *);
	virtual long GetContribForISec(unsigned long,IObjectContrib * *);
	virtual long GetStringTable(ILinkDataRO * *);
	virtual long PbDirectives(ILinkDataRO * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long Release();
	virtual void IncrInit(unsigned long);
	void WriteOutImportObject(int);
};

struct CLinkCG
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CLinkDataRO
{
	void Reset();
public:
	virtual long GetDataPointer(unsigned char * *,int *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	void Init(unsigned char *,unsigned __int64,bool,bool);
	~CLinkDataRO();
};

struct CLinkDataRW
{
	virtual long GetDataPointer(unsigned char * *,int *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CLinkNativeSymbol
{
	virtual long EnumEntryPoints(IEnumCOFFSymRO * *);
	virtual long GetCOFFSym(IObjectContrib *,unsigned long,ICOFFSymRO * *,IObjectContrib * *);
	virtual long GetContrib(IPublicSym *,IObjectContrib * *,char * *);
	virtual long GetSymbolSize(char const *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CLinkNotify
{
	virtual long AddExternalFilenames(IEnumExternalFilenames2 *);
	virtual long OnError(ILinkError2 *);
	virtual long OnStatus(unsigned long,unsigned long);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CLockCS
{
	CLockCS();
};

struct CMapToken
{
	virtual long Map(unsigned int,unsigned int);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CMemCoordinator
{
	virtual long ListMemory();
	virtual long NotifyOOM();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Register(IMemHandler *);
	virtual long Unregister(IMemHandler *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CMemHandler
{
	virtual long OnListMemory();
	virtual long OnOOM();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CMetaError
{
	static unsigned int m_cerror;
	virtual long OnError(long,unsigned int);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CMetadataHandler
{
	CMetadataHandler();
	virtual long Map(unsigned int,unsigned int);
	virtual long MarkToken(unsigned int);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CMismatches
{
	bool Find(unsigned short const *,unsigned short const * *,MOD * *);
	void Add(unsigned short const *,unsigned short const *,MOD *);
public:
	void DetectMismatch(MOD *,unsigned short const *,unsigned short const *);
};

struct COMRefPtr<ICOFFAuxSym>
{
	~COMRefPtr<ICOFFAuxSym>();
};

struct COMRefPtr<ICOFFObj>
{
	ICOFFObj * * operator&();
	~COMRefPtr<ICOFFObj>();
};

struct COMRefPtr<ICOFFSymRO>
{
	ICOFFSymRO * * operator&();
	~COMRefPtr<ICOFFSymRO>();
};

struct COMRefPtr<ICOFFSymRW>
{
	~COMRefPtr<ICOFFSymRW>();
};

class COMRefPtr<ICOFFSymTabRO>
{
	void Release();
public:
	ICOFFSymTabRO * * operator&();
	~COMRefPtr<ICOFFSymTabRO>();
};

struct COMRefPtr<ICOFFSymTabRW>
{
	~COMRefPtr<ICOFFSymTabRW>();
};

struct COMRefPtr<IEnumAuxSym>
{
	IEnumAuxSym * * operator&();
	~COMRefPtr<IEnumAuxSym>();
};

struct COMRefPtr<IEnumCOFFSymRO>
{
	~COMRefPtr<IEnumCOFFSymRO>();
};

struct COMRefPtr<IEnumCOFFSymRW>
{
	~COMRefPtr<IEnumCOFFSymRW>();
};

class COMRefPtr<IEnumContrib>
{
	void Release();
public:
	IEnumContrib * * operator&();
	~COMRefPtr<IEnumContrib>();
};

struct COMRefPtr<IEnumExternalFilenames2>
{
	COMRefPtr<IEnumExternalFilenames2>(COMRefPtr<IEnumExternalFilenames2> const &);
	~COMRefPtr<IEnumExternalFilenames2>();
};

struct COMRefPtr<IEnumExternalFilenames>
{
	~COMRefPtr<IEnumExternalFilenames>();
};

struct COMRefPtr<IEnumPublics>
{
	~COMRefPtr<IEnumPublics>();
};

class COMRefPtr<ILinkDataRO>
{
	void Release();
public:
	COMRefPtr<ILinkDataRO> & operator=(ILinkDataRO *);
	ILinkDataRO * * operator&();
	~COMRefPtr<ILinkDataRO>();
};

struct COMRefPtr<ILinkDataRW>
{
	~COMRefPtr<ILinkDataRW>();
};

struct COMRefPtr<IMetaDataAssemblyImport>
{
	~COMRefPtr<IMetaDataAssemblyImport>();
};

struct COMRefPtr<IObjFileHybrid>
{
	~COMRefPtr<IObjFileHybrid>();
};

struct COMRefPtr<IObjFileXFG>
{
	~COMRefPtr<IObjFileXFG>();
};

struct COMRefPtr<IObjHandler7>
{
	~COMRefPtr<IObjHandler7>();
};

struct COMRefPtr<IObjHandler8>
{
	~COMRefPtr<IObjHandler8>();
};

struct COMRefPtr<IObjHandler9>
{
	~COMRefPtr<IObjHandler9>();
};

struct COMRefPtr<IObjectContrib>
{
	~COMRefPtr<IObjectContrib>();
};

struct COMRefPtr<IPublicSym2>
{
	~COMRefPtr<IPublicSym2>();
};

struct COMRefPtr<IPublicSym3>
{
	~COMRefPtr<IPublicSym3>();
};

struct COMRefPtr<IPublicSym>
{
	~COMRefPtr<IPublicSym>();
};

struct CON
{
	EXTERNAL * PextAssoc();
	MOD * PmodOrig();
	bool FExportComdatFunc();
	bool FGuardInfoContainsSymbolIndex();
	unsigned long CRelocSrc();
	unsigned short * SzComName<521>(unsigned short (&)[521]);
	void Error(unsigned int,...);
	void Fatal(unsigned int,...);
	void Pass2ReadWriteRawData(IMAGE *,IObjectContrib *,COMRefPtr<ICOFFSymTabRW> &,unsigned long const *);
	void Warning(unsigned int,...);
};

class CObjFileBase
{
protected:
	bool FFetchContent(unsigned char *,unsigned long,unsigned long);
	char const * PStringTable();
	unsigned short * SzComNameObj();
	virtual void VerifyOpen();
	void CloseFile(bool);
public:
	static IObjFile2 * PObjFileFromFile(PObjFileForFileParams *);
	static void IncrInitVtables(CObjFileBase *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	void DecrementOpenCount();
};

class CObjFileT<IMAGE_FILE>
{
protected:
	bool FIsecOffForRelocIsym(unsigned __int64,int *,unsigned long *);
	bool FLoadSectionHeaderInfo(_IMAGE_SECTION_HEADER *);
	static CCoffSymTabROT<IMAGE_FILE> * _pSymTab;
	static CCoffSymTabROT<IMAGE_FILE> * _pSymTabAlt;
	virtual _IMAGE_SYMBOL * ReadSymbolTable(bool);
	virtual bool FComdatIsec(int);
	virtual bool FInit(FileRef,void *,unsigned short const *,unsigned short const *,IMAGE *,unsigned long,LIB *,unsigned short const *,char const *,bool,bool,unsigned long *);
	virtual bool FInit(IMAGE *,void *,LIB *,unsigned short const *,char const *,bool,bool,unsigned long *);
	virtual bool FInitDummy();
	virtual void LoadStringTable();
	virtual void ReadSectionHeaders(_IMAGE_SECTION_HEADER * *);
	void ReadStringTable(int,unsigned short const *,unsigned long);
	void SzFuncFromSecOff(int,unsigned long,ILinkDataRO * *);
public:
	static void Init();
	virtual long BeginOptCaching();
	virtual long CContrib(unsigned long *);
	virtual long COFFTimeStamp(unsigned long *);
	virtual long CSymbols(unsigned long *);
	virtual long Characteristics(unsigned long *);
	virtual long Close(int);
	virtual long CloseCache(int);
	virtual long CloseCoffCon(int);
	virtual long EndOptCaching();
	virtual long EnumContrib(IEnumContrib * *);
	virtual long EnumExternalFilenames(IEnumExternalFilenames * *);
	virtual long EnumPublics(IEnumPublics * *,unsigned __int64);
	virtual long FImportObj(int *);
	virtual long FNative(int *);
	virtual long GetContribForISec(unsigned long,IObjectContrib * *);
	virtual long GetStringTable(ILinkDataRO * *);
	virtual long GetSymbolTableRO(ICOFFSymTabRO * *);
	virtual long GetSymbolTableRW(ICOFFSymTabRW * *);
	virtual long Machine(unsigned short *);
	virtual long ObjtkFromSzSymbol(ILinkDataRO *,unsigned __int64 *);
	virtual long PbDirectives(ILinkDataRO * *);
	virtual long SzRefForIsym(unsigned __int64,ILinkDataRO * *);
	virtual long TimeStamp(unsigned long *);
	virtual void IncrInit(unsigned long);
	virtual ~CObjFileT<IMAGE_FILE>();
};

class CObjFileT<IMAGE_FILE_EX>
{
protected:
	bool FIsecOffForRelocIsym(unsigned __int64,int *,unsigned long *);
	bool FLoadSectionHeaderInfo(_IMAGE_SECTION_HEADER *);
	static CCoffSymTabROT<IMAGE_FILE_EX> * _pSymTab;
	static CCoffSymTabROT<IMAGE_FILE_EX> * _pSymTabAlt;
	virtual _IMAGE_SYMBOL_EX * ReadSymbolTable(bool);
	virtual bool FComdatIsec(int);
	virtual bool FInit(FileRef,void *,unsigned short const *,unsigned short const *,IMAGE *,unsigned long,LIB *,unsigned short const *,char const *,bool,bool,unsigned long *);
	virtual bool FInit(IMAGE *,void *,LIB *,unsigned short const *,char const *,bool,bool,unsigned long *);
	virtual bool FInitDummy();
	virtual void LoadStringTable();
	virtual void ReadSectionHeaders(_IMAGE_SECTION_HEADER * *);
	void ReadStringTable(int,unsigned short const *,unsigned long);
	void SzFuncFromSecOff(int,unsigned long,ILinkDataRO * *);
public:
	static void Init();
	virtual long BeginOptCaching();
	virtual long CContrib(unsigned long *);
	virtual long COFFTimeStamp(unsigned long *);
	virtual long CSymbols(unsigned long *);
	virtual long Characteristics(unsigned long *);
	virtual long Close(int);
	virtual long CloseCache(int);
	virtual long CloseCoffCon(int);
	virtual long EndOptCaching();
	virtual long EnumContrib(IEnumContrib * *);
	virtual long EnumExternalFilenames(IEnumExternalFilenames * *);
	virtual long EnumPublics(IEnumPublics * *,unsigned __int64);
	virtual long FImportObj(int *);
	virtual long FNative(int *);
	virtual long GetContribForISec(unsigned long,IObjectContrib * *);
	virtual long GetStringTable(ILinkDataRO * *);
	virtual long GetSymbolTableRO(ICOFFSymTabRO * *);
	virtual long GetSymbolTableRW(ICOFFSymTabRW * *);
	virtual long Machine(unsigned short *);
	virtual long ObjtkFromSzSymbol(ILinkDataRO *,unsigned __int64 *);
	virtual long PbDirectives(ILinkDataRO * *);
	virtual long SzRefForIsym(unsigned __int64,ILinkDataRO * *);
	virtual long TimeStamp(unsigned long *);
	virtual void IncrInit(unsigned long);
	virtual ~CObjFileT<IMAGE_FILE_EX>();
};

struct CPubSymT<IMAGE_FILE>
{
	virtual long FComdat(int *,unsigned char *);
	virtual long ISym(unsigned __int64 *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SymType(__MIDL___MIDL_itf_objint_0000_0000_0001 *);
	virtual long SzName(ILinkDataRO * *);
	virtual long SzNameDefaultSym(ILinkDataRO * *);
	virtual long TkFile(unsigned __int64 *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CPubSymT<IMAGE_FILE_EX>
{
	virtual long FComdat(int *,unsigned char *);
	virtual long ISym(unsigned __int64 *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SymType(__MIDL___MIDL_itf_objint_0000_0000_0001 *);
	virtual long SzName(ILinkDataRO * *);
	virtual long SzNameDefaultSym(ILinkDataRO * *);
	virtual long TkFile(unsigned __int64 *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CQuickBytes
{
	~CQuickBytes();
};

struct CQuickMemoryBase<512,128>
{
	long ReSizeNoThrow(unsigned __int64);
};

struct CStream
{
	virtual long Clone(IStream * *);
	virtual long Commit(unsigned long);
	virtual long CopyTo(IStream *,_ULARGE_INTEGER,_ULARGE_INTEGER *,_ULARGE_INTEGER *);
	virtual long LockRegion(_ULARGE_INTEGER,_ULARGE_INTEGER,unsigned long);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Read(void *,unsigned long,unsigned long *);
	virtual long Revert();
	virtual long Seek(_LARGE_INTEGER,unsigned long,_ULARGE_INTEGER *);
	virtual long SetSize(_ULARGE_INTEGER);
	virtual long Stat(tagSTATSTG *,unsigned long);
	virtual long UnlockRegion(_ULARGE_INTEGER,_ULARGE_INTEGER,unsigned long);
	virtual long Write(void const *,unsigned long,unsigned long *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CTaskQueue
{
	bool FCanAppend(unsigned __int64);
	void AppendBlock(CTaskQueue::MSGBLOCK *,bool);
	void DecrementBufferSize(unsigned __int64);
	void ReleaseBlock(CTaskQueue::MSGBLOCK *,bool);
public:
	CTaskQueue(unsigned short const *,unsigned __int64);
	CTaskQueue::STATUS Append(void *,unsigned __int64,bool);
	CTaskQueue::STATUS Get(void * *,unsigned __int64 *);
	CTaskQueue::STATUS WaitEmpty();
	void BlockModWaitingForPCH(DBGOP *);
	void Deactivate();
	void SignalAllModPdbEvents();
	void SignalModWaitingForPCH(MOD *);
	~CTaskQueue();
};

struct CTickCount
{
	CTickCount(_iobuf *,CTickCount *,unsigned short const *);
	bool LapTimeQPC(unsigned short const *,unsigned short const *);
	bool LapTimeTick(unsigned short const *,unsigned short const *);
	void FinalTime();
	void FinalTimeQPC(unsigned short const *);
	void FinalTimeTick();
	void Reset();
	void WriteFileName(unsigned short const *,bool,bool);
	void WriteTime(unsigned __int64);
	~CTickCount();
};

class DName
{
	void append<DNameNode>(DNameNode const *);
	void append<DNameStatusNode>(DNameStatusNode const *);
	void append<charNode>(charNode const *);
	void append<pcharNode>(pcharNode const *);
	void doPchar(char);
	void doPchar<0>(char const *,int);
	void doPchar<1>(char const *,int);
	void doPchar<2>(char const *,int);
public:
	DName & operator+=(DName const &);
	DName & operator+=(DNameStatus);
	DName & operator+=(StringLiteral const &);
	DName & operator+=(char);
	DName & operator=(DNameStatus);
	DName & operator|=(DName const &);
	DName operator+(DName const &);
	DName operator+(DNameStatus);
	DName operator+(StringLiteral const &);
	DName operator+(char);
	DName(DName *);
	DName(DNameStatus);
	DName(StringLiteral const &);
	DName(__int64);
	DName(char const * &,char);
	DName(unsigned __int64);
	DName<0>(char const *,StringLifeSelector<0>);
	DName<2>(char const *,StringLifeSelector<2>);
	char * getString(char *,int);
};

struct DNameStatusNode
{
	static DNameStatusNode const * make(DNameStatus);
	virtual char * getString(char *,char *);
	virtual char getLastChar();
	virtual int length();
	virtual int raw_length();
};

struct DUMPSTATE
{
	~DUMPSTATE();
};

namespace DecoratedNameGenerator
{
	struct CorSigDecode_t
	{
		CorElementType GetNextParam();
		unsigned int NextToken();
		void SkipFunctionSignature();
	};

	class DecoratedNameGenerator_t
	{
		long ProcessCustomMetaData();
		void ReadAttributeString(void const *);
	};

	void ExtractNamespaceAndTypeName(unsigned short const *,unsigned short *,unsigned __int64,unsigned short *,unsigned __int64);
};

class DeferredCloseState
{
	MOD * Dequeue();
	static unsigned long ThreadProc(void *);
public:
	DeferredCloseState();
	bool Enqueue(MOD *);
	void Start();
	~DeferredCloseState();
};

struct DiscardRVA
{
	DiscardRVA();
};

struct EXTERNAL
{
	EXTERNAL * PextWeak(IMAGE *);
	MOD * PmodOrig(ST *);
	bool FAbsolute();
	bool FFunction();
	bool FLazyOrWeak();
	bool FPerAppDomain();
	bool FSafeSEH();
	char const * SzDecoratedForwarder();
	char const * SzExportAs();
	char const * SzOtherName();
	unsigned int TkEmit();
	void SetDecoratedForwarder(char const *);
	void SetExportAs(char const *);
	void SetOtherName(char const *);
};

struct EnumMap<unsigned int,unsigned int,HashClassCRC<unsigned int> >
{
	virtual int next();
	virtual void release();
	virtual void reset();
};

struct EnumMap<unsigned long,unsigned long,HashClass<unsigned long,0> >
{
	virtual int next();
	virtual void release();
	virtual void reset();
};

struct EnumNMT<char>
{
	virtual int next();
	virtual void get(char const * *,unsigned long *);
	virtual void release();
	virtual void reset();
};

struct FileRef
{
	~FileRef();
};

struct Hasher<unsigned long *,unsigned short *>
{
	static unsigned long lhashPbCb(unsigned char *,unsigned __int64,unsigned long);
};

class ICFCompareContext
{
	CompareOrder FoldCONsEx(unsigned long *);
	CompareOrder ICFCompareCONs();
	CompareOrder ICFCompareDependencies();
	CompareOrder ICFCompareExternals(COMRefPtr<ICOFFSymRO> &,COMRefPtr<ICOFFSymRO> &,unsigned char,unsigned char);
	CompareOrder ICFCompareRelocs();
	CompareOrder ICFCompareToken(COMRefPtr<ICOFFSymRO> &,COMRefPtr<ICOFFSymRO> &,unsigned char,unsigned char);
	bool FSameDependency(CON *,CON *);
	static IMAGE * pimage;
public:
	CompareOrder FoldCONs(unsigned long *);
};

struct ICF_GRP
{
	ICF_GRP(GRP *);
};

struct IDLStuff
{
	IDLStuff();
	~IDLStuff();
};

class IMAGE
{
	CON * GuardGetTargetCon(CON *);
	CON * PconCreateJumpTable();
	EXTERNAL * GuardGetLoadConfig();
	MOD * PmodCreate(unsigned short const *,unsigned short const *,unsigned long,LIB *,unsigned long);
	bool FEmitCodeViewDebugDirectory();
	bool FEmitCoffGroupOrPGOPhaseInfo();
	bool FEmitCompilerFeature();
	bool FInferEntryPoint();
	bool FInferSubsystemAndEntry();
	bool FMergeSectionsSzSz(MOD *,char const *,char const *);
	bool GuardIsAddressTakenFunctionReloc(CON *,unsigned short,unsigned char,_IMAGE_RELOCATION *);
	unsigned long CalculateDynValueRelocsSize();
	unsigned long CbBuildProdidBlock(void * *);
	unsigned long CbCoffContribInfo();
	unsigned long CbPogoInfo();
	unsigned long CreateHybridCodeMap(CON *);
	unsigned long MarkPconInHybridFuncMap(EXTERNAL *);
	unsigned long WriteHybridCodeAddressRange(CON *,CON *,CON *);
	unsigned short CsecNonEmpty();
	void AddSectionAndGroupSyms();
	void AllocateCommon();
	void ArchiveWowA64Obj(ARGUMENT_LIST *);
	void AssignNativeRefToGuestRef();
	void AssignWeakExternals(bool);
	void BaseRelocClustering();
	void CalculatePGO2Layout();
	void CalculatePtrs(unsigned long *,unsigned long *);
	void CheckForWin32Imports();
	void CheckSectionLayoutSpec(SEC *);
	void CreateEnclavePCON();
	void CreatePadSection(SEC *,char const *);
	void DefineAbsoluteZeroSymbol();
	void DefineENCSymbols(CON * *,LEXT * *);
	void DefineImageBaseSymbol();
	void DefineSelfImports(Array<CON *> *,LEXT * *);
	void DetermineDLoadIATPlacement(DLOAD_IAT_PLACEMENT &);
	void EmitEnclaveStructures();
	void EmitHybridFuncMap();
	void EmitHybridRvaDeltaToMappedFunc(CON *,ResolvedSym const &);
	void EmitSectionHeaders();
	void FillUninitializedPaddingBytes();
	void GenerateHybridExportThunksForPatchableFunctions();
	void GenerateWowA64LIBs();
	void GuardAddHybridFuncWithPopThunk(CON *,CON *);
	void GuardAddHybridFuncs();
	void GuardAddHybridPushThunk(CON *);
	void GuardAnalyze();
	void GuardAnalyzeCon(CON *,IObjectContrib *,COMRefPtr<ICOFFSymTabRO> &,MOD *,GUARD_SECTION_TYPE);
	void GuardAnalyzeEntryAndExports();
	void GuardAnalyzeExternal(EXTERNAL *,bool,bool);
	void GuardAnalyzeIncr();
	void GuardAnalyzeLib(LIB *);
	void GuardAnalyzeModule(MOD *);
	void GuardCheckEHContReloc(MOD *,CON *,COMRefPtr<ICOFFSymRO> &,_IMAGE_RELOCATION *,unsigned long);
	void GuardCheckNonReadOnlyIAT(SEC *);
	void GuardCheckSetjmpReloc(CON *,COMRefPtr<ICOFFSymRO> &,_IMAGE_RELOCATION *);
	void GuardCollectExportSuppress();
	void GuardDefineSymbols();
	void GuardLanguageSpecificExceptionHandler();
	void GuardMarkAddrTakenIATEntry(CON *,unsigned long);
	void GuardMarkCON(MOD *,CON *,unsigned short,ICOFFSymRO *,GUARD_SECTION_TYPE);
	void GuardMarkEHContinuations(CON *,unsigned long);
	void GuardMarkFidsFuncCON(CON *,unsigned long,char const *,bool *);
	void GuardMarkLongJmpTarget(CON *,unsigned long);
	void GuardProcessNonComdatCONs();
	void GuardUpdateGfidsIncr();
	void GuardUpdateTableCount(EXTERNAL *,char const *,unsigned long,unsigned long);
	void GuardWriteFids();
	void GuardWriteTable(CON *,IncrHeapArray<unsigned long> *,unsigned long);
	void ICFAnalysis();
	void ImportSemantics();
	void LookupWeakExternForEntryRVA(EXTERNAL *);
	void MakeHybridAuxiliaryIATHaveItsOwnPages();
	void MakeIATHaveItsOwnPages();
	void MarkNonICFCandidates();
	void MarkNonPAGESections();
	void Optimize00cfg();
	void OptimizeCFG();
	void OptimizeIdata(bool);
	void OptimizeTLS();
	void OrderSections();
	void OrderSemantics();
	void ProcessMergeSwitches();
	void ProcessVolatileMetadata(CON *,_IMAGE_VOLATILE_METADATA *);
	void ResolveEnclaveConfig();
	void ResolveHybridFuncMap();
	void SectionLayout(unsigned long *);
	void SeparateX86Code();
	void SetDefaultSubsystemVersion();
	void SortLibMods();
	void UpdateHybridAuxiliaryIATSymbol();
	void UpdateHybridCodeMapSymbols(CON *);
	void UpdateLoadConfigDynValueRelocTable();
	void UpdateLongBranchRegion(CON *);
	void UpdateOptionalHeader();
	void VerboseICF();
	void VerboseOrder();
	void WarnDuplicateSections();
	void WriteBaseRelocations();
	void WriteBaseRelocationsToFile(unsigned short const *);
	void WriteCoffContribInfo(CON *);
	void WriteCompilerFeatureSignature(CON *);
	void WriteDebugInfo();
	void WriteENCSymbols();
	void WriteExDllCharacteristics(CON *);
	void WriteHybridExportThunksForPatchableFunctions();
	void WriteHybridMetadata(CON *);
	void WriteHybridNativeRefToGuestRef();
	void WriteIncLtcgInfo();
	void WriteMPXInfo(CON *);
	void WritePEReproEntry();
	void WritePogoInfo(CON *);
	void WriteRVAsIntoSPDFile();
	void WriteSPGOInfo(CON *);
public:
	CON * PconFirstJmpTbl();
	CON * PconForStaticRefSym(COFF_STATIC_SYM_REF *,unsigned long *);
	CON * PconNew(MOD *,MOD *,char const *,unsigned long,unsigned long);
	GRP * PgrpCreateStrictICFThunks();
	GRP * PgrpNew(char const *,SEC *,SEC *,bool);
	LIB * PlibInstantiateDefaultLib();
	LIB * PlibNew(unsigned short const *,unsigned long,bool,bool);
	LONG_BRANCH_REGION * LBRForPCON(CON *);
	MOD * LoadStaticDefModule(MOD *);
	MOD * PmodNew(unsigned short const *,unsigned short const *,unsigned long,LIB *,bool *,unsigned long,bool,LINK_FILE_ID *);
	SEC * PsecFindFlags(unsigned long,unsigned long);
	SEC * PsecFindGrp(MOD *,char const *,unsigned long);
	SEC * PsecFindIsec(int);
	SEC * PsecFindNoFlags(char const *);
	SEC * PsecFindNoMerge(MOD *,char const *,unsigned long,bool *);
	SEC * PsecNewNoMerge(MOD *,char const *,unsigned long);
	StaticRefSym * LookupStaticRefSym(COFF_STATIC_SYM_REF *);
	bool FBuildGraph();
	bool FCorNativeRvaEntry(char const *);
	bool FEmitImportDll(unsigned short const *);
	bool FHasSafeSEHTable();
	bool FMachineType(unsigned long);
	bool FPdbEarlyTypeMerge();
	bool FPureMSIL();
	bool FSafeMSIL();
	bool FShouldDefineImageBase();
	bool FShouldResolveStaticRef(MOD *);
	char const * GetDataSymbolName(char const *);
	char const * SzImageBaseName();
	int BuildImage();
	static unsigned long ProcessSectionFlags(char const *,unsigned long,unsigned long);
	static unsigned short const * const LinkerThunkSizes;
	unsigned __int64 GetPextDynValueSymbol(void const *);
	unsigned long CThunks();
	unsigned long CalculateSectionSize(SEC *);
	unsigned long CbConPadding(CON *,CON *,unsigned long,bool);
	unsigned long CbHdrPE(unsigned long *);
	unsigned long CbTextSection();
	unsigned long GetLtcgObjTimestamp();
	unsigned long GetRelocations(unsigned long,unsigned long,Array<BASE_RELOC *> *);
	unsigned long GuardGetICallDispatchPtrRVA();
	unsigned long LBRCount();
	void AddImageBaseSymbolAndDefine();
	void BuildExternalSymbolTable();
	void CheckCRTSection(char const *);
	void CheckUnusedLibs(bool);
	void Checksum();
	void ClearSymbolCaches(bool);
	void ContribInit();
	void CreateDefaultSections();
	void DefineDynValueFixupSymbols();
	void DisableOptRefBeforeLTCG();
	void EmitRelocations();
	void EnclaveCheckForwardDLLs(CON *,IObjectContrib *,COMRefPtr<ICOFFSymTabRO> &);
	void FixupDynValueRelocation(CON *,unsigned char *,COMRefPtr<ICOFFSymRW>);
	void FreeLongBranchRegions();
	void FreePLibsST(bool);
	void GenerateSPDFile();
	void GenerateTransitions();
	void GenerateWinMDFile();
	void GuardCollectRvaForGfids(CON *);
	void GuardCollectRvaForIATHelper(SEC *,char const *);
	void GuardCreateFids();
	void GuardInit();
	void GuardRecordRetpolineData(MOD *,CON *,IObjectContrib *);
	void GuardRemoveStaleEHContTargets(CON *);
	void GuardRemoveStaleFidsEntry(unsigned long,unsigned long);
	void GuardRemoveStaleLongJmpTargets(CON *);
	void GuardSaveJumpTableSlotRva(EXTERNAL *,unsigned long,unsigned long);
	void GuardUpdateSymbols();
	void IncrInit();
	void IncrPass1();
	void Init();
	void InitializeBaseRelocations();
	void MPXDefineSymbols();
	void MPXInit();
	void MarkExternalAsNonImport(EXTERNAL *,bool);
	void Normalize();
	void OpenPDB();
	void Pass1();
	void Pass1Arg(ARGUMENT_LIST *,LIB *,MOD * *);
	void Pass2(Array<CON *> *,LEXT *);
	void PmodUncreate(MOD *);
	void PrepClrResources();
	void RecordDynValueReloc(CON *,char const *,unsigned long);
	void RecordDynValueReloc(CON *,void const *,unsigned long,unsigned long,bool);
	void RecordHybridFuncMap(MOD *,CON *,IObjectContrib *,COMRefPtr<ICOFFSymTabRO> &);
	void RecordStaticDefinition(MOD *,char const *,EXTERNAL *);
	void RecordStaticReference(MOD *,unsigned __int64,char const *,bool,EXTERNAL *);
	void RecordVolatileMetadata(MOD *,CON *,COMRefPtr<IEnumContrib>,COMRefPtr<ICOFFSymTabRO> &);
	void ResetExternalSymbolTable();
	void ResolveAlternateNames(bool,bool);
	void ResolveCondIncludeExternals(bool);
	void ResolveEntryPoint(char const *,bool);
	void ResolveExternalsInLibs(bool,bool);
	void ResolveLinkerDefinedSymbols();
	void ResolveLoadConfig();
	void ResolveManagedSymbols(bool);
	void ResolveStaticReference(MOD *);
	void SaveIncrCmdLine();
	void SaveIncrCwd();
	void SetDefaultClrImageType();
	void SetImageBase();
	void SetLoadConfigDirectory();
	void SetMachine(unsigned short const *,unsigned short,bool);
	void SetupODRIgnoreFilters();
	void UpdateTLSDirectory();
	void WriteComStructures();
	void WriteHeaderPE(int);
	void WriteSectionHeaderPE(int,SEC *,_IMAGE_SECTION_HEADER *);
};

struct ISet
{
	int add(unsigned int);
	int contains(unsigned int);
	~ISet();
};

struct IncrEnumMap<CON *,IncrHeapArray<unsigned long> *,LHashClass2<void const *,7,4> >
{
	virtual int next();
	virtual void release();
	virtual void reset();
};

struct IncrEnumMap<CON *,IncrHeapMap<unsigned long,unsigned long,LHashClass<unsigned long,0> > *,LHashClass2<void const *,7,4> >
{
	virtual int next();
	virtual void release();
	virtual void reset();
};

struct IncrEnumMap<CON *,LONG_BRANCH_REGION *,LHashClass2<void const *,7,4> >
{
	virtual int next();
	virtual void release();
	virtual void reset();
};

struct IncrEnumMap<EXTERNAL *,MOD *,LHashClass2<void const *,7,4> >
{
	virtual int next();
	virtual void release();
	virtual void reset();
};

struct IncrEnumMap<EXTERNAL *,WEAK_DEFAULT,LHashClass2<void const *,7,4> >
{
	virtual int next();
	virtual void release();
	virtual void reset();
};

struct IncrEnumMap<EXTERNAL *,unsigned long,LHashClass2<void const *,7,4> >
{
	virtual int next();
	virtual void release();
	virtual void reset();
};

struct IncrEnumMap<unsigned long,PDATACOFFINFO,HashClassCRC<unsigned int> >
{
	virtual int next();
	virtual void release();
	virtual void reset();
};

struct IncrEnumMap<unsigned long,unsigned long,LHashClass<unsigned long,0> >
{
	virtual int next();
	virtual void release();
	virtual void reset();
};

struct IncrHeapArray<CON *>
{
	int append(CON * const &);
	int setSize(unsigned __int64);
	~IncrHeapArray<CON *>();
};

struct IncrHeapArray<EXTERNAL *>
{
	int append(EXTERNAL * const &);
	int setSize(unsigned __int64);
	~IncrHeapArray<EXTERNAL *>();
};

struct IncrHeapArray<IncrHeapArray<unsigned __int64> *>
{
	int setSize(unsigned __int64);
	~IncrHeapArray<IncrHeapArray<unsigned __int64> *>();
};

struct IncrHeapArray<IncrHeapArray<unsigned long> *>
{
	int setSize(unsigned __int64);
	~IncrHeapArray<IncrHeapArray<unsigned long> *>();
};

struct IncrHeapArray<IncrHeapMap<unsigned long,unsigned long,LHashClass<unsigned long,0> > *>
{
	int setSize(unsigned __int64);
	~IncrHeapArray<IncrHeapMap<unsigned long,unsigned long,LHashClass<unsigned long,0> > *>();
};

struct IncrHeapArray<LONG_BRANCH_REGION *>
{
	int append(LONG_BRANCH_REGION * const &);
	int setSize(unsigned __int64);
	~IncrHeapArray<LONG_BRANCH_REGION *>();
};

struct IncrHeapArray<MOD *>
{
	int setSize(unsigned __int64);
	~IncrHeapArray<MOD *>();
};

struct IncrHeapArray<PDATACOFFINFO>
{
	int setSize(unsigned __int64);
	~IncrHeapArray<PDATACOFFINFO>();
};

struct IncrHeapArray<SXDataRecord>
{
	int setSize(unsigned __int64);
};

struct IncrHeapArray<SXPextRecord>
{
	int setSize(unsigned __int64);
};

struct IncrHeapArray<WEAK_DEFAULT>
{
	int setSize(unsigned __int64);
	~IncrHeapArray<WEAK_DEFAULT>();
};

struct IncrHeapArray<char const *>
{
	int append(char const * const &);
	int setSize(unsigned __int64);
};

struct IncrHeapArray<unsigned __int64>
{
	int append(unsigned __int64 const &);
	int setSize(unsigned __int64);
	void deleteAt(unsigned __int64);
};

struct IncrHeapArray<unsigned long>
{
	int append(unsigned long const &);
	int bsearch(int (*)(void const *,void const *),unsigned long *,unsigned int *);
	int setSize(unsigned __int64);
	void deleteAt(unsigned __int64);
	~IncrHeapArray<unsigned long>();
};

struct IncrHeapArray<unsigned short *>
{
	int setSize(unsigned __int64);
};

class IncrHeapMap<CON *,IncrHeapArray<unsigned long> *,LHashClass2<void const *,7,4> >
{
protected:
	int find(CON *,unsigned int *,unsigned int *,unsigned int *,unsigned int *);
	int grow(bool &);
public:
	IncrHeapMap<CON *,IncrHeapArray<unsigned long> *,LHashClass2<void const *,7,4> >(unsigned int);
	int add(CON *,IncrHeapArray<unsigned long> *);
	int map(CON *,IncrHeapArray<unsigned long> * *);
	static void operator delete(void *);
};

class IncrHeapMap<CON *,IncrHeapMap<unsigned long,unsigned long,LHashClass<unsigned long,0> > *,LHashClass2<void const *,7,4> >
{
protected:
	int find(CON *,unsigned int *,unsigned int *,unsigned int *,unsigned int *);
	int grow(bool &);
public:
	IncrHeapMap<CON *,IncrHeapMap<unsigned long,unsigned long,LHashClass<unsigned long,0> > *,LHashClass2<void const *,7,4> >(unsigned int);
	int add(CON *,IncrHeapMap<unsigned long,unsigned long,LHashClass<unsigned long,0> > *);
	int map(CON *,IncrHeapMap<unsigned long,unsigned long,LHashClass<unsigned long,0> > * *);
	static void operator delete(void *);
};

class IncrHeapMap<CON *,LONG_BRANCH_REGION *,LHashClass2<void const *,7,4> >
{
protected:
	int find(CON *,unsigned int *,unsigned int *,unsigned int *,unsigned int *);
	int grow(bool &);
public:
	IncrHeapMap<CON *,LONG_BRANCH_REGION *,LHashClass2<void const *,7,4> >(unsigned int);
	int add(CON *,LONG_BRANCH_REGION *);
	int map(CON *,LONG_BRANCH_REGION * *);
	static void operator delete(void *);
};

class IncrHeapMap<EXTERNAL *,MOD *,LHashClass2<void const *,7,4> >
{
protected:
	int find(EXTERNAL *,unsigned int *,unsigned int *,unsigned int *,unsigned int *);
	int grow(bool &);
public:
	IncrHeapMap<EXTERNAL *,MOD *,LHashClass2<void const *,7,4> >(unsigned int);
	int add(EXTERNAL *,MOD *);
	static void operator delete(void *);
};

class IncrHeapMap<EXTERNAL *,WEAK_DEFAULT,LHashClass2<void const *,7,4> >
{
protected:
	int find(EXTERNAL *,unsigned int *,unsigned int *,unsigned int *,unsigned int *);
	int grow(bool &);
public:
	IncrHeapMap<EXTERNAL *,WEAK_DEFAULT,LHashClass2<void const *,7,4> >(unsigned int);
	int add(EXTERNAL *,WEAK_DEFAULT);
	int map(EXTERNAL *,WEAK_DEFAULT * *);
	int map(EXTERNAL *,WEAK_DEFAULT *);
	int remove(EXTERNAL *);
	static void operator delete(void *);
	void reset();
};

class IncrHeapMap<EXTERNAL *,unsigned long,LHashClass2<void const *,7,4> >
{
protected:
	int find(EXTERNAL *,unsigned int *,unsigned int *,unsigned int *,unsigned int *);
	int grow(bool &);
public:
	IncrHeapMap<EXTERNAL *,unsigned long,LHashClass2<void const *,7,4> >(unsigned int);
	int add(EXTERNAL *,unsigned long);
	static void operator delete(void *);
};

class IncrHeapMap<unsigned long,PDATACOFFINFO,HashClassCRC<unsigned int> >
{
protected:
	int find(unsigned long,unsigned int *,unsigned int *,unsigned int *,unsigned int *);
	int grow(bool &);
public:
	IncrHeapMap<unsigned long,PDATACOFFINFO,HashClassCRC<unsigned int> >(unsigned int);
	int add(unsigned long,PDATACOFFINFO);
	int map(unsigned long,PDATACOFFINFO *);
	static void operator delete(void *);
};

class IncrHeapMap<unsigned long,unsigned long,LHashClass<unsigned long,0> >
{
protected:
	int find(unsigned long,unsigned int *,unsigned int *,unsigned int *,unsigned int *);
	int grow(bool &);
public:
	IncrHeapMap<unsigned long,unsigned long,LHashClass<unsigned long,0> >(unsigned int);
	int add(unsigned long,unsigned long);
	int map(unsigned long,unsigned long *);
	int remove(unsigned long);
	static void * operator new(unsigned __int64);
	static void operator delete(void *);
};

struct IncrISet
{
	~IncrISet();
};

struct JmpTblMgr
{
	CON * PconCreateJmpTbl(IMAGE *,GRP *,unsigned long);
	void BuildThunkMap(void const *,unsigned long * *,unsigned long,IMAGE *);
	void UpdateJumpTable(IMAGE *,unsigned long * *,unsigned long *,SO * *,unsigned short *);
	void WriteJumpTable(IMAGE *,unsigned long * *,unsigned long *,SO * *,unsigned short *);
};

struct LIB
{
	MOD * LocateModByName(IMAGE *,unsigned short const *,bool);
	MOD * PmodFind(unsigned short const *,unsigned long,bool,LINK_FILE_ID *);
	bool FExtractedMembersModified(IMAGE *,ARGUMENT_LIST *,bool *,bool *,bool *);
	bool FGetMember(char const *,unsigned long *);
	bool FGetMember(unsigned long,unsigned long *);
	bool FLoadArchiveMember(IMAGE *,unsigned long,unsigned long,EXTERNAL *,bool *,bool *,bool,bool);
	bool MemberIndex(unsigned long,unsigned long *);
	unsigned long CMembers();
	void CacheLibMemberInfo(LIB *);
	void ProcessLibMod(ARGUMENT_LIST *,IMAGE *,MOD *,LIB *);
	void ReadSpecialLinkerInterfaceMembers(int);
	void Search(IMAGE *,bool *,bool *,bool,bool);
};

struct LLIBMEM
{
	LIBMEM * SzFind(unsigned short const *);
	void AddToList(unsigned short const *,unsigned long,unsigned long);
	void FreeList();
};

namespace LegacyActivationShim
{
	namespace Util
	{
		struct DelayLoadFunctor<long (unsigned short const *,unsigned short const *,unsigned short const *,unsigned long,unsigned long,unsigned short *,unsigned long,unsigned long *,unsigned short *,unsigned long,unsigned long *)>
		{
			~DelayLoadFunctor<long (unsigned short const *,unsigned short const *,unsigned short const *,unsigned long,unsigned long,unsigned short *,unsigned long,unsigned long *,unsigned short *,unsigned long,unsigned long *)>();
		};

		struct ReleaseHolder<ICLRMetaHost *>
		{
			~ReleaseHolder<ICLRMetaHost *>();
		};

		struct ReleaseHolder<ICLRMetaHostPolicy *>
		{
			~ReleaseHolder<ICLRMetaHostPolicy *>();
		};

		struct ReleaseHolder<ICLRRuntimeInfo *>
		{
			~ReleaseHolder<ICLRRuntimeInfo *>();
		};

		struct ZeroInitGlobalReleaseHolder<ICLRMetaHost *>
		{
			~ZeroInitGlobalReleaseHolder<ICLRMetaHost *>();
		};

		struct ZeroInitGlobalReleaseHolder<ICLRMetaHostPolicy *>
		{
			~ZeroInitGlobalReleaseHolder<ICLRMetaHostPolicy *>();
		};

		class ZeroInitGlobalSpinLock
		{
			static void Lock(ZeroInitGlobalSpinLock * &);
		};

		HINSTANCE__ * g_hModMscoree;
		ICLRMetaHost * g_pCLRMetaHost;
		ICLRMetaHostPolicy * g_pCLRMetaHostPolicy;
		Util::RuntimeInfo g_runtimeInfo;
		Util::ZeroInitGlobalHMODULEHolder g_hModMscoreeHolder;
		Util::ZeroInitGlobalReleaseHolder<ICLRMetaHost *> g_hCLRMetaHost;
		Util::ZeroInitGlobalReleaseHolder<ICLRMetaHostPolicy *> g_hCLRMetaHostPolicy;
		Util::ZeroInitGlobalReleaseHolder<Util::RuntimeInfo *> g_hRuntimeInfo;
		Util::ZeroInitGlobalSpinLock g_runtimeInfoLock;
		bool HasNewActivationAPIs();
		long CallCLRCreateInstance(_GUID const &,_GUID const &,void * *);
		long GetCLRMetaHost(ICLRMetaHost * *);
		long GetCLRMetaHostPolicy(ICLRMetaHostPolicy * *);
		long GetCLRRuntimeInfo(ICLRRuntimeInfo * *,unsigned short const *,IStream *,unsigned short *,unsigned long *);
		long GetCLRRuntimeInfoHelper(ICLRRuntimeInfo * *,unsigned short const *,IStream *,unsigned short *,unsigned long *,unsigned short *,unsigned long *);
		long GetMSCOREE(HINSTANCE__ * *);
		long GetRuntimeInfo(Util::RuntimeInfo * *,unsigned short const *,IStream *,unsigned short *,unsigned long *);
		long g_runtimeInfoIsInitialized;
		unsigned long g_fHasNewActivationAPIs;
	};

	long ClrCoCreateInstance(_GUID const &,IUnknown *,unsigned long,_GUID const &,void * *);
};

struct MOD
{
	CLRIMAGE_TYPE GetCLRType();
	bool FContainCode();
	bool FGetRawDataForIsec(unsigned long,COMRefPtr<ILinkDataRO> &);
	bool FGuarded();
	bool FHasCorMeta();
	bool FILImage();
	bool FImport();
	bool FThunkable();
	unsigned long GetAlternateRVAForStrictICF(unsigned long);
	unsigned short * SzComName(unsigned short *,unsigned __int64);
	unsigned short * SzComNameEx(unsigned short *,unsigned __int64);
	unsigned short * SzComNameEx<521>(unsigned short (&)[521]);
	void AddSecContribs(IMAGE *,COMRefPtr<IEnumContrib> &);
	void BuildSymIndexToPdataMap(IMAGE *,bool);
	void Close(bool);
	void EmitDiscardedSymbols(IObjectContrib *,CON *,IMAGE *,CV_DISCARDED_e);
	void Error(unsigned int,...);
	void Fatal(unsigned int,...);
	void GetCOFFObj(IMAGE *);
	void Init(IMAGE *,IObjFile2 *,bool,unsigned long);
	void Pass2(IMAGE *,bool);
	void Pass2InitCommon(IMAGE *);
	void Pass2SaveAlternateRvaForStrictICF(ICOFFSymRW *,unsigned long);
	void Pass2Worker(IMAGE *);
	void PostNote(unsigned int,...);
	void PrepareEarlyTypeMerge(IMAGE *,bool);
	void ReadImageSecHdrInfo(IEnumContrib * *);
	void ResetPdbState(IMAGE *);
	void UnGetCOFFObj(IMAGE *);
	void Warning(unsigned int,...);
};

class Map<unsigned int,unsigned int,HashClassCRC<unsigned int> >
{
protected:
	int find(unsigned int,unsigned int *,unsigned int *,unsigned int *,unsigned int *);
	int grow(bool &);
public:
	Map<unsigned int,unsigned int,HashClassCRC<unsigned int> >(unsigned int);
	int add(unsigned int,unsigned int);
	int map(unsigned int,unsigned int *);
	~Map<unsigned int,unsigned int,HashClassCRC<unsigned int> >();
};

class Map<unsigned long,unsigned long,HashClass<unsigned long,0> >
{
protected:
	int find(unsigned long,unsigned int *,unsigned int *,unsigned int *,unsigned int *);
	int grow(bool &);
public:
	Map<unsigned long,unsigned long,HashClass<unsigned long,0> >(unsigned int);
	int add(unsigned long,unsigned long);
	int map(unsigned long,unsigned long *);
	~Map<unsigned long,unsigned long,HashClass<unsigned long,0> >();
};

struct MapEmitter
{
	virtual bool Pre();
	virtual bool PreExports();
	virtual bool PreExternals();
	virtual bool PreSections();
	virtual bool PreStatics();
	virtual void Export(char const *,int,bool,char const *);
	virtual void External(char const *,EXTERNAL *,CON *);
	virtual void PostExternals();
	virtual void PostStatics();
	virtual void Section(GRP *,SEC *,bool);
	virtual void Static(char const *,CON *,MOD *,unsigned long,bool);
};

class MsvcEtw
{
	struct ProviderRegistration
	{
		~ProviderRegistration();
	};

	static std::unique_ptr<unsigned short [0],std::default_delete<unsigned short [0]> > FlattenCommandLine(unsigned short const * const *);
	static std::unique_ptr<unsigned short [0],std::default_delete<unsigned short [0]> > GetWindowsPath(std::function<unsigned long (unsigned long,unsigned short *)>);
	static std::vector<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > JoinAndSegmentizeTokenString(unsigned short const *,unsigned __int64);
	static void JoinToken(std::vector<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > &,unsigned short const *,unsigned __int64);
public:
	static std::multimap<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::less<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >,std::allocator<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > > GetSegmentizedEnvironmentVariables();
	static std::pair<bool,int> SpawnProcess(unsigned short const *,unsigned short const * const *);
	static std::pair<bool,int> SpawnProcessFromPATH(unsigned short const *,unsigned short const * const *);
	static std::unique_ptr<unsigned short [0],std::default_delete<unsigned short [0]> > GetAbsoluteFilePath(unsigned short const *);
	static std::unique_ptr<unsigned short [0],std::default_delete<unsigned short [0]> > GetCurrentExecutablePath();
};

class NMT<char>
{
	int find(char const *,unsigned long *,unsigned int *);
	void rehash(unsigned int);
public:
	NMT<char>();
	int addNiForSz(char const *,unsigned long *);
	int reset();
	unsigned long niForSz(char const *);
	~NMT<char>();
};

class NMT<unsigned short>
{
	int addSz(unsigned short const *,unsigned long *);
	int find(unsigned short const *,unsigned long *,unsigned int *);
	void rehash(unsigned int);
public:
	NMT<unsigned short>();
	int addNiForSz(unsigned short const *,unsigned long *);
	unsigned long niForSz(unsigned short const *);
};

struct PGDEmitter
{
	virtual bool Pre();
	virtual void External(char const *,EXTERNAL *,CON *);
	virtual void Static(char const *,CON *,MOD *,unsigned long,bool);
	~PGDEmitter();
};

struct POOL<8>
{
	void * alloc(unsigned __int64);
};

class PdataMgr
{
	static int CompareArmNtRFEs(void const *,void const *);
	static int CompareIa64RFEs(void const *,void const *);
	static int ComparePdataEntries(void const *,void const *);
	static int CompareXFixups(void const *,void const *);
	static void VerifyPdataContents(void *,unsigned long,unsigned short,CON *);
public:
	PdataMgr();
	bool FAddRFEsForPcon(IMAGE *,void *,CON *);
	bool FInit();
	bool FInitIncr();
	bool FSetCurrentPcon(CON *);
	static bool FUseArmNtPdata(unsigned short);
	static bool FUseCompressedPdata(unsigned short);
	static unsigned int CFixupsPerRFE(unsigned short);
	unsigned long CbRFE();
	void CollectLeafFunctions(IMAGE *,MOD *);
	void GeneratePdataForIntraLBRs(IMAGE *,MOD *);
	void RegisterFunctionSymbol(unsigned long,unsigned long);
	void RegisterIntraLBR(unsigned long,unsigned long);
	void ScanPdataRelocations(MOD *,CON *,IObjectContrib *,COMRefPtr<ICOFFSymTabRO> &);
	void SortAndEmitPdata(IMAGE *,bool);
	void UpdatePdataForLeafFunctions(IMAGE *);
};

struct Replicator
{
	DName operator[](int);
	Replicator & operator+=(DName const &);
};

class SPDReader
{
	bool DetectFileFormat(SPDReader::Format &,void * &,unsigned long &,SPDReader::Error &);
	bool OpenAsSPDInCoff(void * &,unsigned long &,bool &,SPDReader::Error &);
	bool OpenAsSPDInPDB(void * &,unsigned long &,bool &,SPDReader::Error &);
	bool OpenAsSPDStandalone(void * &,unsigned long &,bool &,SPDReader::Error &);
public:
	SPDReader(unsigned short const *,bool,int (*)(unsigned short const *,char const *,long *,unsigned short *,unsigned __int64,PDB * *),int (*)(PDB *));
	SPD_FileHeader * GetFileHeader();
	SPD_ModHeader * GetModuleProfileFromModuleTableEnrty(SPD_ModTableEntry *);
	SPD_ModHeader * GetNextModuleProfile(SPD_ModHeader *);
	SPD_ModTableEntry * GetNextModuleTableEntry(SPD_ModTableEntry *);
	SPD_Symbol * GetSymbolByIdInAllModules(unsigned __int64,SPD_ModHeader * &);
	bool LoadSPD();
	bool LoadSPD(SPDReader::Error &);
	static SPD_CGEdge * GetNextLayoutEdge(SPD_CGEdge *,SPD_FuncRecord *);
	static SPD_DataRecord * GetNextDataRecord(SPD_DataRecord *,SPD_ModHeader *);
	static SPD_FGBlock * GetNextFGBlock(SPD_FGBlock *,SPD_FuncRecord *);
	static SPD_FuncRecord * GetNextFunctionProfile(SPD_FuncRecord *,SPD_ModHeader *);
	static SPD_Symbol * GetSymbolByIdInModule(unsigned __int64,SPD_ModHeader *);
	static char const * GetSymbolNameByIdInModule(unsigned __int64,SPD_ModHeader *);
	unsigned long GetTotalSize();
	unsigned short const * GetLibraryNameForModule(SPD_ModTableEntry *);
	unsigned short const * GetObjectNameForModule(SPD_ModTableEntry *);
	void CloseSPD();
	~SPDReader();
};

struct ST
{
	EXTERNAL * * RgpexternalByAddr();
	EXTERNAL * * RgpexternalByModName();
	EXTERNAL * * RgpexternalByName();
	EXTERNAL * LookupExternSz(char const *,bool *,unsigned long);
	EXTERNAL * LookupExternSz(unsigned short const *,bool *);
	EXTERNAL * SearchExternSz(char const *);
	void AllowInserts();
	void PrintUndefinedExternals(IMAGE *,bool,bool);
};

struct STR_LIST
{
	void AddToList(unsigned short const *);
	void FreeList();
};

struct SafeStackAllocator<4096>
{
	virtual void * AllocBytes(unsigned __int64);
	virtual void Free(void *);
	~SafeStackAllocator<4096>();
};

struct Stack<CON *>
{
	~Stack<CON *>();
};

struct SymInfoEmitter
{
	unsigned __int64 VABase();
	virtual bool Pre();
	virtual bool PreExports();
	virtual bool PreExternals();
	virtual bool PreSections();
	virtual bool PreStatics();
	virtual void Export(char const *,int,bool,char const *);
	virtual void External(char const *,EXTERNAL *,CON *);
	virtual void Post();
	virtual void PostExports();
	virtual void PostExternals();
	virtual void PostSections();
	virtual void PostStatics();
	virtual void Section(GRP *,SEC *,bool);
	virtual void Static(char const *,CON *,MOD *,unsigned long,bool);
};

struct TIME64
{
	void GetTime(unsigned short const *,bool *);
};

struct ThunkingRelocs
{
	ThunkingRelocs();
	bool Contains(MOD *,unsigned long,unsigned long);
	void Add(MOD *,unsigned long,unsigned long);
	~ThunkingRelocs();
};

struct TrampSyms
{
	void CreateSym(unsigned long,unsigned long,unsigned long,unsigned long,int,int);
	void Init(IMAGE *,TRAMP_e,unsigned __int64,unsigned __int64);
};

struct TransInfo
{
	TransInfo();
};

class UnDecorator
{
	static DName composeDeclaration(DName const &);
	static DName getArgumentList();
	static DName getArgumentTypes();
	static DName getArrayType(DName const &);
	static DName getBasedType();
	static DName getBasicDataType(DName const &);
	static DName getCallingConvention();
	static DName getDataIndirectType(DName const &,IndirectionKind,DName const &,int);
	static DName getDataType(DName *);
	static DName getDecoratedName();
	static DName getDimension(bool);
	static DName getECSUDataType();
	static DName getEnumType();
	static DName getExtendedDataIndirectType(IndirectionKind &,bool &,int);
	static DName getExternalDataType(DName const &);
	static DName getFunctionIndirectType(DName const &);
	static DName getNoexcept();
	static DName getOperatorName(bool,bool *);
	static DName getPrimaryDataType(DName const &);
	static DName getPtrRefDataType(DName const &,int);
	static DName getPtrRefType(DName const &,DName const &,IndirectionKind);
	static DName getReturnType(DName *);
	static DName getScope();
	static DName getScopedName();
	static DName getSignedDimension();
	static DName getStringEncoding(PrefixKind,int);
	static DName getSymbolName();
	static DName getTemplateArgumentList();
	static DName getTemplateName(bool);
	static DName getTemplateNonTypeArgument();
	static DName getTemplateTypeArgument();
	static DName getThisType();
	static DName getThrowTypes();
	static DName getVCallThunkType();
	static DName getVdispMapType(DName const &);
	static DName getVfTableType(DName const &);
	static DName getZName(bool,bool);
	static DName parseDecoratedName();
	static Replicator * pArgList;
	static Replicator * pTemplateArgList;
	static Replicator * pZNameList;
	static bool fExplicitTemplateParams;
	static bool fGetTemplateArgumentList;
	static char * (* m_pGetParameter)(long);
	static char const * const gName;
	static char const * const name;
	static int getNumberOfDimensions();
	static int getTypeEncoding();
	static unsigned long disableFlags;
	static unsigned long m_CHPENameOffset;
	static unsigned long m_recursionLevel;
public:
	char * getCHPEName(char *,int);
	static StringLiteral UScore(Tokens);
};

class UniqUTF16StringTable
{
	unsigned short const * szFind(unsigned short const *,LSL * * &,Array<LSL * *> &);
public:
	UniqUTF16StringTable(bool);
	unsigned short const * SzAdd(unsigned short const *,bool *);
	~UniqUTF16StringTable();
};

namespace VCToolsTelemetry
{
	struct Event
	{
		~Event();
	};

	struct EventWriter
	{
		~EventWriter();
	};

	class OutputPipe
	{
		void Write<unsigned int>(unsigned int const &,unsigned int);
	public:
		OutputPipe(bool);
		void Write(Event);
		~OutputPipe();
	};

	struct RegKey
	{
		~RegKey();
	};

	struct VCTipClientMutex
	{
		~VCTipClientMutex();
	};

	struct VCTipHandle_t
	{
		~VCTipHandle_t();
	};

	struct VCTipReadyEvent
	{
		~VCTipReadyEvent();
	};

	bool StartUploaderProc(bool);
	std::exception Win32Exception(char const *,unsigned long);
	unsigned __int64 GetVCTipUnstable();
	void SetVCTipUnstable();
};

namespace VCUtil
{
	long LoadUILibrary(unsigned short const *,unsigned short const *,unsigned long,HINSTANCE__ * *,unsigned short *,unsigned __int64,unsigned short *,unsigned short * (*)(unsigned short *,unsigned short *));
};

struct WSZTEMPUTF8
{
	WSZTEMPUTF8(char const *);
	~WSZTEMPUTF8();
};

namespace Warbird
{
	class CWarbirdClient
	{
		CWarbirdClient();
		void CleanupConSymbolTable();
	public:
		int IsEnabled();
		long FinishProcessNonLtcgModule();
		long PostProcess();
		long RegisterSymbol(char const *,int,unsigned char,CON *,MOD *,unsigned long,int);
		long TransformFunction(Phase);
		static CWarbirdClient * GetInstance();
		void CleanPrivateSymbolTable();
		void UnInitialize();
		~CWarbirdClient();
	};

	class CWarbirdLinkerTransformations
	{
		EXTERNAL * SearchGlobalSymbolTableAndValidate(char const *);
	public:
		CON * GetSymbolContribution(char const *,long);
		char * CreatePrivateSymbolKey(char const *,void *);
		long FindPrivateSymbol(char const *,void *,CWarbirdLinkerTransformations::PRIVATE_SYMBOL &);
		long RegisterPrivateSymbol(char const *,unsigned char,CON *,MOD *,unsigned long);
		static CON * GetSelectedCon(CON *);
		virtual long AddSymbolToGuardTable(char const *,void *);
		virtual long AddSymboltoTCEGraph(char const *,long);
		virtual long AddSymboltoTCEGraph(char const *,long,char const *,long);
		virtual long GetContributionLocation(void *,tagWARBIRD_LINK_SYMBOL &);
		virtual long GetImageType(IMAGE_TYPE *);
		virtual long GetRelocations(unsigned long,unsigned long,unsigned long,tagWARBIRD_PRIVATE_RELOCATION_ITEM *,unsigned long &);
		virtual long GetSectionLocation(char const *,unsigned long &,unsigned long &,unsigned long &,long);
		virtual long GetSymbolLocation(char const *,void *,tagWARBIRD_LINK_SYMBOL &,long);
		virtual long GetSymbolRelocsCount(char const *,void *,unsigned long &,long);
		virtual long Log(LogLevel,unsigned short const *);
		virtual long ReadBytes(unsigned long,unsigned char *,unsigned long);
		virtual long ReplaceEntryFunction(char const *,void *,unsigned long *);
		virtual long SetSymbolValue(char const *,void *,unsigned char *,unsigned long,int);
		virtual long WriteBytes(unsigned long,unsigned char *,unsigned long);
		virtual unsigned __int64 GetImageBase();
		virtual unsigned long GetRelocStartRva(unsigned long,unsigned short &,unsigned short &);
		virtual unsigned long SetSectionFlags(char const *,unsigned long,unsigned long);
		virtual unsigned short const * GetBinaryFilename();
		virtual void * CreateSegment(char const *,unsigned long,unsigned long,unsigned long);
	};

	struct CWarbirdServer
	{
		long CreateObfuscator(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned long,CObfuscatorBase * *);
		void DestroyObfuscator();
	};

	int WarbirdNonLtcgSymCompare(void const *,void const *);
};

namespace Xfg
{
	bool LoadXfgInformation(LIB *,unsigned long,unsigned __int64 *);
	int CompareICF(CON *,CON *);
	phmap::flat_hash_map<LIB *,phmap::flat_hash_map<unsigned long,unsigned __int64,phmap::Hash<unsigned long>,phmap::EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,unsigned __int64> > >,phmap::container_internal::HashEq<LIB *,void>::Hash,phmap::container_internal::HashEq<LIB *,void>::Eq,std::allocator<std::pair<LIB * const,phmap::flat_hash_map<unsigned long,unsigned __int64,phmap::Hash<unsigned long>,phmap::EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,unsigned __int64> > > > > > LibXfgInfo;
	phmap::flat_hash_map<unsigned long,unsigned __int64,phmap::Hash<unsigned long>,phmap::EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,unsigned __int64> > > importLibExportsHashes;
	unsigned long PconInitialHashCount(CON *);
	void AddImportLibMap(LIB *,unsigned long,unsigned __int64);
	void CollectRvaForHashes(CON *);
	void CollectSectionInformation(CON *,IObjectContrib *,MOD *);
	void EmitHashMap(IMAGE *);
	void MarkExternalHash(EXTERNAL *,unsigned __int64);
	void RecordHashWriteInfo(unsigned long,CON *,unsigned __int64);
	void RecordPconHash(CON *,unsigned long,unsigned __int64);
	void ResolveDelayloadRvas(IMAGE *);
	void SynthesizeSectionInformation(COMRefPtr<ICOFFSymTabRO> &,MOD *,ST *);
};

struct _HeapManager
{
	void * getMemoryWithBuffer(unsigned __int64);
	void Destructor();
};

class __B64
{
	static char const * const m_rgchBase64Digits;
	void ConvertToUint(char const *);
};

struct charNode
{
	virtual char * getString(char *,char *);
	virtual char getLastChar();
	virtual int length();
	virtual int raw_length();
};

namespace msl
{
	namespace utilities
	{
		struct SafeInt<unsigned int,SafeIntErrorPolicy_SafeIntException>
		{
			SafeInt<unsigned int,SafeIntErrorPolicy_SafeIntException> operator*<unsigned __int64>(unsigned __int64);
		};

		struct SafeIntErrorPolicy_SafeIntException
		{
			static void SafeIntOnOverflow();
		};

	};

};

struct pDNameNode
{
	virtual char * getString(char *,char *);
	virtual char getLastChar();
	virtual int length();
	virtual int raw_length();
};

struct pairNode
{
	virtual char * getString(char *,char *);
	virtual char getLastChar();
	virtual int length();
	virtual int raw_length();
};

struct pcharNode
{
	pcharNode<0>(char const *,int,StringLifeSelector<0>);
	pcharNode<2>(char const *,int,StringLifeSelector<2>);
	virtual char * getString(char *,char *);
	virtual char getLastChar();
	virtual int length();
	virtual int raw_length();
};

namespace phmap
{
	namespace container_internal
	{
		class raw_hash_set<FlatHashMapPolicy<CON *,Array<CON *> *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,Array<CON *> *> > >
		{
			class iterator
			{
				void skip_empty_or_deleted();
			};

			raw_hash_set<FlatHashMapPolicy<CON *,Array<CON *> *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,Array<CON *> *> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			unsigned __int64 prepare_insert(unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<CON *,Array<Warbird::WARBIRD_NONLTCG_SYMBOL> *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,Array<Warbird::WARBIRD_NONLTCG_SYMBOL> *> > >
		{
			class iterator
			{
				void skip_empty_or_deleted();
			};

			raw_hash_set<FlatHashMapPolicy<CON *,Array<Warbird::WARBIRD_NONLTCG_SYMBOL> *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,Array<Warbird::WARBIRD_NONLTCG_SYMBOL> *> > >::FindInfo find_first_non_full(unsigned __int64);
			void destroy_slots();
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<CON *>(CON * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<CON *,Array<Warbird::WARBIRD_NONLTCG_SYMBOL> *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,Array<Warbird::WARBIRD_NONLTCG_SYMBOL> *> > >::iterator begin();
			raw_hash_set<FlatHashMapPolicy<CON *,Array<Warbird::WARBIRD_NONLTCG_SYMBOL> *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,Array<Warbird::WARBIRD_NONLTCG_SYMBOL> *> > >::iterator find<CON *>(CON * const &,unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<CON *,Array<_DYN_VALUE_RELOC_OFFSET_DESCRIPTOR> *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,Array<_DYN_VALUE_RELOC_OFFSET_DESCRIPTOR> *> > >
		{
			class iterator
			{
				void skip_empty_or_deleted();
			};

			raw_hash_set<FlatHashMapPolicy<CON *,Array<_DYN_VALUE_RELOC_OFFSET_DESCRIPTOR> *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,Array<_DYN_VALUE_RELOC_OFFSET_DESCRIPTOR> *> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<CON *>(CON * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<CON *,Array<_DYN_VALUE_RELOC_OFFSET_DESCRIPTOR> *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,Array<_DYN_VALUE_RELOC_OFFSET_DESCRIPTOR> *> > >::iterator begin();
			raw_hash_set<FlatHashMapPolicy<CON *,Array<_DYN_VALUE_RELOC_OFFSET_DESCRIPTOR> *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,Array<_DYN_VALUE_RELOC_OFFSET_DESCRIPTOR> *> > >::iterator find<CON *>(CON * const &,unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<CON *,Array<unsigned int> *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,Array<unsigned int> *> > >
		{
			raw_hash_set<FlatHashMapPolicy<CON *,Array<unsigned int> *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,Array<unsigned int> *> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void erase_meta_only(raw_hash_set<FlatHashMapPolicy<CON *,Array<unsigned int> *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,Array<unsigned int> *> > >::const_iterator);
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<CON *>(CON * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<CON *,Array<unsigned int> *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,Array<unsigned int> *> > >::iterator erase(raw_hash_set<FlatHashMapPolicy<CON *,Array<unsigned int> *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,Array<unsigned int> *> > >::iterator);
			raw_hash_set<FlatHashMapPolicy<CON *,Array<unsigned int> *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,Array<unsigned int> *> > >::iterator find<CON *>(CON * const &,unsigned __int64);
			void clear();
		};

		class raw_hash_set<FlatHashMapPolicy<CON *,COFF_STATIC_SYM_REF *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,COFF_STATIC_SYM_REF *> > >
		{
			class iterator
			{
				void skip_empty_or_deleted();
			};

			raw_hash_set<FlatHashMapPolicy<CON *,COFF_STATIC_SYM_REF *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,COFF_STATIC_SYM_REF *> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<CON *>(CON * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			void clear();
		};

		class raw_hash_set<FlatHashMapPolicy<CON *,CON *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,CON *> > >
		{
			raw_hash_set<FlatHashMapPolicy<CON *,CON *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,CON *> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void initialize_slots();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<CON *>(CON * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<CON *,CON *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,CON *> > >::iterator find<CON *>(CON * const &,unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<CON *,EXTERNAL *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,EXTERNAL *> > >
		{
			class iterator
			{
				void skip_empty_or_deleted();
			};

			raw_hash_set<FlatHashMapPolicy<CON *,EXTERNAL *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,EXTERNAL *> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<CON *>(CON * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			void clear();
		};

		class raw_hash_set<FlatHashMapPolicy<CON *,EXTERNALPAIR *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,EXTERNALPAIR *> > >
		{
			class iterator
			{
				void skip_empty_or_deleted();
			};

			raw_hash_set<FlatHashMapPolicy<CON *,EXTERNALPAIR *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,EXTERNALPAIR *> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<CON *>(CON * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<CON *,MOD *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,MOD *> > >
		{
			raw_hash_set<FlatHashMapPolicy<CON *,MOD *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,MOD *> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<CON *,MOD *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,MOD *> > >::iterator find<CON *>(CON * const &,unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<CON *,PdataMgr::PdataEntry *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,PdataMgr::PdataEntry *> > >
		{
			raw_hash_set<FlatHashMapPolicy<CON *,PdataMgr::PdataEntry *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,PdataMgr::PdataEntry *> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<CON *>(CON * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<CON *,PdataMgr::PdataEntry *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,PdataMgr::PdataEntry *> > >::iterator find<CON *>(CON * const &,unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<CON *,ResolvedSym>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,ResolvedSym> > >
		{
			class iterator
			{
				void skip_empty_or_deleted();
			};

			raw_hash_set<FlatHashMapPolicy<CON *,ResolvedSym>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,ResolvedSym> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<CON *>(CON * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<CON *,ResolvedSym>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,ResolvedSym> > >::iterator begin();
		};

		class raw_hash_set<FlatHashMapPolicy<CON *,char const *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,char const *> > >
		{
			raw_hash_set<FlatHashMapPolicy<CON *,char const *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,char const *> > >::FindInfo find_first_non_full(unsigned __int64);
			void destroy_slots();
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<CON *>(CON * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<CON *,char const *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,char const *> > >::iterator find<CON *>(CON * const &,unsigned __int64);
			void clear();
		};

		class raw_hash_set<FlatHashMapPolicy<CON *,flat_hash_map<unsigned long,std::vector<unsigned __int64,std::allocator<unsigned __int64> >,Hash<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,std::vector<unsigned __int64,std::allocator<unsigned __int64> > > > > >,HashEq<CON *,void>::Hash,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,flat_hash_map<unsigned long,std::vector<unsigned __int64,std::allocator<unsigned __int64> >,Hash<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,std::vector<unsigned __int64,std::allocator<unsigned __int64> > > > > > > >
		{
			class iterator
			{
				void skip_empty_or_deleted();
			};

			raw_hash_set<FlatHashMapPolicy<CON *,flat_hash_map<unsigned long,std::vector<unsigned __int64,std::allocator<unsigned __int64> >,Hash<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,std::vector<unsigned __int64,std::allocator<unsigned __int64> > > > > >,HashEq<CON *,void>::Hash,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,flat_hash_map<unsigned long,std::vector<unsigned __int64,std::allocator<unsigned __int64> >,Hash<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,std::vector<unsigned __int64,std::allocator<unsigned __int64> > > > > > > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void initialize_slots();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<CON *>(CON * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<CON *,flat_hash_map<unsigned long,std::vector<unsigned __int64,std::allocator<unsigned __int64> >,Hash<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,std::vector<unsigned __int64,std::allocator<unsigned __int64> > > > > >,HashEq<CON *,void>::Hash,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,flat_hash_map<unsigned long,std::vector<unsigned __int64,std::allocator<unsigned __int64> >,Hash<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,std::vector<unsigned __int64,std::allocator<unsigned __int64> > > > > > > >::iterator find<CON *>(CON * const &,unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<CON *,unsigned long>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,unsigned long> > >
		{
			class iterator
			{
				void skip_empty_or_deleted();
			};

			raw_hash_set<FlatHashMapPolicy<CON *,unsigned long>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,unsigned long> > >::FindInfo find_first_non_full(unsigned __int64);
			void destroy_slots();
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<CON *>(CON * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<CON *,unsigned long>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,unsigned long> > >::iterator begin();
		};

		class raw_hash_set<FlatHashMapPolicy<EDGE *,COFF_STATIC_SYM_REF *>,PHMapKeyHasher<void *>,HashEq<EDGE *,void>::Eq,std::allocator<std::pair<EDGE * const,COFF_STATIC_SYM_REF *> > >
		{
			class iterator
			{
				void skip_empty_or_deleted();
			};

			raw_hash_set<FlatHashMapPolicy<EDGE *,COFF_STATIC_SYM_REF *>,PHMapKeyHasher<void *>,HashEq<EDGE *,void>::Eq,std::allocator<std::pair<EDGE * const,COFF_STATIC_SYM_REF *> > >::FindInfo find_first_non_full(unsigned __int64);
			void destroy_slots();
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<EDGE *>(EDGE * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<EDGE *,COFF_STATIC_SYM_REF *>,PHMapKeyHasher<void *>,HashEq<EDGE *,void>::Eq,std::allocator<std::pair<EDGE * const,COFF_STATIC_SYM_REF *> > >::iterator find<EDGE *>(EDGE * const &,unsigned __int64);
			void clear();
		};

		class raw_hash_set<FlatHashMapPolicy<EXTERNAL *,COFF_STATIC_SYM_REF *>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,COFF_STATIC_SYM_REF *> > >
		{
			class iterator
			{
				void skip_empty_or_deleted();
			};

			raw_hash_set<FlatHashMapPolicy<EXTERNAL *,COFF_STATIC_SYM_REF *>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,COFF_STATIC_SYM_REF *> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<EXTERNAL *>(EXTERNAL * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			void clear();
		};

		class raw_hash_set<FlatHashMapPolicy<EXTERNAL *,EXTERNAL *>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,EXTERNAL *> > >
		{
			class iterator
			{
				void skip_empty_or_deleted();
			};

			raw_hash_set<FlatHashMapPolicy<EXTERNAL *,EXTERNAL *>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,EXTERNAL *> > >::FindInfo find_first_non_full(unsigned __int64);
			void destroy_slots();
			void drop_deletes_without_resize();
			void erase_meta_only(raw_hash_set<FlatHashMapPolicy<EXTERNAL *,EXTERNAL *>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,EXTERNAL *> > >::const_iterator);
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<EXTERNAL *>(EXTERNAL * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<EXTERNAL *,EXTERNAL *>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,EXTERNAL *> > >::iterator begin();
			raw_hash_set<FlatHashMapPolicy<EXTERNAL *,EXTERNAL *>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,EXTERNAL *> > >::iterator find<EXTERNAL *>(EXTERNAL * const &,unsigned __int64);
			unsigned __int64 erase<EXTERNAL *>(EXTERNAL * const &);
			void clear();
		};

		class raw_hash_set<FlatHashMapPolicy<EXTERNAL *,MOD *>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,MOD *> > >
		{
			raw_hash_set<FlatHashMapPolicy<EXTERNAL *,MOD *>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,MOD *> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<EXTERNAL *>(EXTERNAL * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<EXTERNAL *,ModExternalList *>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,ModExternalList *> > >
		{
			raw_hash_set<FlatHashMapPolicy<EXTERNAL *,ModExternalList *>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,ModExternalList *> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<EXTERNAL *>(EXTERNAL * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<EXTERNAL *,ModExternalList *>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,ModExternalList *> > >::iterator begin();
			raw_hash_set<FlatHashMapPolicy<EXTERNAL *,ModExternalList *>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,ModExternalList *> > >::iterator find<EXTERNAL *>(EXTERNAL * const &,unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<EXTERNAL *,ModICallPushThunk>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,ModICallPushThunk> > >
		{
			class iterator
			{
				void skip_empty_or_deleted();
			};

			raw_hash_set<FlatHashMapPolicy<EXTERNAL *,ModICallPushThunk>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,ModICallPushThunk> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<EXTERNAL *>(EXTERNAL * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<EXTERNAL *,ModICallPushThunk>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,ModICallPushThunk> > >::iterator find<EXTERNAL *>(EXTERNAL * const &,unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<EXTERNAL *,NODE *>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,NODE *> > >
		{
			class iterator
			{
				void skip_empty_or_deleted();
			};

			raw_hash_set<FlatHashMapPolicy<EXTERNAL *,NODE *>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,NODE *> > >::FindInfo find_first_non_full(unsigned __int64);
			void destroy_slots();
			void drop_deletes_without_resize();
			void rehash_and_grow_if_necessary();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<EXTERNAL *>(EXTERNAL * const &,unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<EXTERNAL *,NODE *>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,NODE *> > >::iterator find<EXTERNAL *>(EXTERNAL * const &,unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<EXTERNAL *,ResolvedSym>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,ResolvedSym> > >
		{
			class iterator
			{
				void skip_empty_or_deleted();
			};

			raw_hash_set<FlatHashMapPolicy<EXTERNAL *,ResolvedSym>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,ResolvedSym> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<EXTERNAL *>(EXTERNAL * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			void clear();
		};

		class raw_hash_set<FlatHashMapPolicy<EXTERNAL *,TKMOD>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,TKMOD> > >
		{
			raw_hash_set<FlatHashMapPolicy<EXTERNAL *,TKMOD>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,TKMOD> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<EXTERNAL *>(EXTERNAL * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<EXTERNAL *,TKMOD>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,TKMOD> > >::iterator find<EXTERNAL *>(EXTERNAL * const &,unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<EXTERNAL *,WEAK_DEFAULT>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,WEAK_DEFAULT> > >
		{
			raw_hash_set<FlatHashMapPolicy<EXTERNAL *,WEAK_DEFAULT>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,WEAK_DEFAULT> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<EXTERNAL *>(EXTERNAL * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<EXTERNAL *,WEAK_DEFAULT>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,WEAK_DEFAULT> > >::iterator find<EXTERNAL *>(EXTERNAL * const &,unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<EXTERNAL *,unsigned __int64>,HashEq<EXTERNAL *,void>::Hash,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,unsigned __int64> > >
		{
			raw_hash_set<FlatHashMapPolicy<EXTERNAL *,unsigned __int64>,HashEq<EXTERNAL *,void>::Hash,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,unsigned __int64> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void initialize_slots();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<EXTERNAL *>(EXTERNAL * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<EXTERNAL *,unsigned __int64>,HashEq<EXTERNAL *,void>::Hash,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,unsigned __int64> > >::iterator find<EXTERNAL *>(EXTERNAL * const &,unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<EXTERNAL *,unsigned __int64>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,unsigned __int64> > >
		{
			class iterator
			{
				void skip_empty_or_deleted();
			};

			raw_hash_set<FlatHashMapPolicy<EXTERNAL *,unsigned __int64>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,unsigned __int64> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void erase_meta_only(raw_hash_set<FlatHashMapPolicy<EXTERNAL *,unsigned __int64>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,unsigned __int64> > >::const_iterator);
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<EXTERNAL *>(EXTERNAL * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<EXTERNAL *,unsigned __int64>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,unsigned __int64> > >::iterator find<EXTERNAL *>(EXTERNAL * const &,unsigned __int64);
			unsigned __int64 erase<EXTERNAL *>(EXTERNAL * const &);
		};

		class raw_hash_set<FlatHashMapPolicy<EXTERNAL *,unsigned long>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,unsigned long> > >
		{
			class iterator
			{
				void skip_empty_or_deleted();
			};

			raw_hash_set<FlatHashMapPolicy<EXTERNAL *,unsigned long>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,unsigned long> > >::FindInfo find_first_non_full(unsigned __int64);
			void destroy_slots();
			void drop_deletes_without_resize();
			void erase_meta_only(raw_hash_set<FlatHashMapPolicy<EXTERNAL *,unsigned long>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,unsigned long> > >::const_iterator);
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<EXTERNAL *>(EXTERNAL * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<EXTERNAL *,unsigned long>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,unsigned long> > >::iterator find<EXTERNAL *>(EXTERNAL * const &,unsigned __int64);
			unsigned __int64 erase<EXTERNAL *>(EXTERNAL * const &);
		};

		class raw_hash_set<FlatHashMapPolicy<EXTERNAL *,void *>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,void *> > >
		{
			class iterator
			{
				void skip_empty_or_deleted();
			};

			raw_hash_set<FlatHashMapPolicy<EXTERNAL *,void *>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,void *> > >::FindInfo find_first_non_full(unsigned __int64);
			void destroy_slots();
			void drop_deletes_without_resize();
			void initialize_slots();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<EXTERNAL *>(EXTERNAL * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<EXTERNAL *,void *>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,void *> > >::iterator find<EXTERNAL *>(EXTERNAL * const &,unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<LIB *,flat_hash_map<unsigned long,unsigned __int64,Hash<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,unsigned __int64> > > >,HashEq<LIB *,void>::Hash,HashEq<LIB *,void>::Eq,std::allocator<std::pair<LIB * const,flat_hash_map<unsigned long,unsigned __int64,Hash<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,unsigned __int64> > > > > >
		{
			raw_hash_set<FlatHashMapPolicy<LIB *,flat_hash_map<unsigned long,unsigned __int64,Hash<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,unsigned __int64> > > >,HashEq<LIB *,void>::Hash,HashEq<LIB *,void>::Eq,std::allocator<std::pair<LIB * const,flat_hash_map<unsigned long,unsigned __int64,Hash<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,unsigned __int64> > > > > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void initialize_slots();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<LIB *>(LIB * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<LIB *,flat_hash_map<unsigned long,unsigned __int64,Hash<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,unsigned __int64> > > >,HashEq<LIB *,void>::Hash,HashEq<LIB *,void>::Eq,std::allocator<std::pair<LIB * const,flat_hash_map<unsigned long,unsigned __int64,Hash<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,unsigned __int64> > > > > >::iterator find<LIB *>(LIB * const &,unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<LINK_FILE_ID,MOD *>,LinkFileIDHasher,EqualTo<LINK_FILE_ID>,std::allocator<std::pair<LINK_FILE_ID const ,MOD *> > >
		{
			raw_hash_set<FlatHashMapPolicy<LINK_FILE_ID,MOD *>,LinkFileIDHasher,EqualTo<LINK_FILE_ID>,std::allocator<std::pair<LINK_FILE_ID const ,MOD *> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<LINK_FILE_ID>(LINK_FILE_ID const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<LINK_FILE_ID,MOD *>,LinkFileIDHasher,EqualTo<LINK_FILE_ID>,std::allocator<std::pair<LINK_FILE_ID const ,MOD *> > >::iterator find<LINK_FILE_ID>(LINK_FILE_ID const &);
			raw_hash_set<FlatHashMapPolicy<LINK_FILE_ID,MOD *>,LinkFileIDHasher,EqualTo<LINK_FILE_ID>,std::allocator<std::pair<LINK_FILE_ID const ,MOD *> > >::iterator find<LINK_FILE_ID>(LINK_FILE_ID const &,unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<MOD *,Array<CON *> *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,Array<CON *> *> > >
		{
			raw_hash_set<FlatHashMapPolicy<MOD *,Array<CON *> *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,Array<CON *> *> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void erase_meta_only(raw_hash_set<FlatHashMapPolicy<MOD *,Array<CON *> *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,Array<CON *> *> > >::const_iterator);
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<MOD *>(MOD * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<MOD *,Array<CON *> *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,Array<CON *> *> > >::iterator erase(raw_hash_set<FlatHashMapPolicy<MOD *,Array<CON *> *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,Array<CON *> *> > >::iterator);
			raw_hash_set<FlatHashMapPolicy<MOD *,Array<CON *> *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,Array<CON *> *> > >::iterator find<MOD *>(MOD * const &,unsigned __int64);
			unsigned __int64 erase<MOD *>(MOD * const &);
		};

		class raw_hash_set<FlatHashMapPolicy<MOD *,Array<CON_VOLATILE_META *> *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,Array<CON_VOLATILE_META *> *> > >
		{
			class iterator
			{
				void skip_empty_or_deleted();
			};

			raw_hash_set<FlatHashMapPolicy<MOD *,Array<CON_VOLATILE_META *> *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,Array<CON_VOLATILE_META *> *> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<MOD *>(MOD * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<MOD *,Array<CON_VOLATILE_META *> *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,Array<CON_VOLATILE_META *> *> > >::iterator find<MOD *>(MOD * const &,unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<MOD *,Array<MODSTATICDEF *> *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,Array<MODSTATICDEF *> *> > >
		{
			raw_hash_set<FlatHashMapPolicy<MOD *,Array<MODSTATICDEF *> *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,Array<MODSTATICDEF *> *> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void erase_meta_only(raw_hash_set<FlatHashMapPolicy<MOD *,Array<MODSTATICDEF *> *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,Array<MODSTATICDEF *> *> > >::const_iterator);
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<MOD *>(MOD * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<MOD *,Array<MODSTATICDEF *> *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,Array<MODSTATICDEF *> *> > >::iterator erase(raw_hash_set<FlatHashMapPolicy<MOD *,Array<MODSTATICDEF *> *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,Array<MODSTATICDEF *> *> > >::iterator);
			raw_hash_set<FlatHashMapPolicy<MOD *,Array<MODSTATICDEF *> *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,Array<MODSTATICDEF *> *> > >::iterator find<MOD *>(MOD * const &,unsigned __int64);
			unsigned __int64 erase<MOD *>(MOD * const &);
		};

		class raw_hash_set<FlatHashMapPolicy<MOD *,CTaskQueue::MSGBLOCKPAIR *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,CTaskQueue::MSGBLOCKPAIR *> > >
		{
			raw_hash_set<FlatHashMapPolicy<MOD *,CTaskQueue::MSGBLOCKPAIR *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,CTaskQueue::MSGBLOCKPAIR *> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void erase_meta_only(raw_hash_set<FlatHashMapPolicy<MOD *,CTaskQueue::MSGBLOCKPAIR *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,CTaskQueue::MSGBLOCKPAIR *> > >::const_iterator);
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<MOD *>(MOD * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<MOD *,CTaskQueue::MSGBLOCKPAIR *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,CTaskQueue::MSGBLOCKPAIR *> > >::iterator find<MOD *>(MOD * const &,unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<MOD *,MOD *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,MOD *> > >
		{
			class iterator
			{
				void skip_empty_or_deleted();
			};

			raw_hash_set<FlatHashMapPolicy<MOD *,MOD *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,MOD *> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<MOD *>(MOD * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<MOD *,MOD *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,MOD *> > >::iterator find<MOD *>(MOD * const &,unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<MOD *,bool>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,bool> > >
		{
			raw_hash_set<FlatHashMapPolicy<MOD *,bool>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,bool> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<MOD *>(MOD * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<MOD *,bool>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,bool> > >::iterator find<MOD *>(MOD * const &,unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<MOD *,char const *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,char const *> > >
		{
			class iterator
			{
				void skip_empty_or_deleted();
			};

			raw_hash_set<FlatHashMapPolicy<MOD *,char const *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,char const *> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<MOD *>(MOD * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<MOD *,char const *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,char const *> > >::iterator begin();
		};

		class raw_hash_set<FlatHashMapPolicy<MOD *,flat_hash_map<CON *,Array<CON *> *,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,Array<CON *> *> > > *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,flat_hash_map<CON *,Array<CON *> *,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,Array<CON *> *> > > *> > >
		{
			raw_hash_set<FlatHashMapPolicy<MOD *,flat_hash_map<CON *,Array<CON *> *,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,Array<CON *> *> > > *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,flat_hash_map<CON *,Array<CON *> *,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,Array<CON *> *> > > *> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<MOD *>(MOD * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<MOD *,flat_hash_map<unsigned __int64,Array<CON *> *,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,Array<CON *> *> > > *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,flat_hash_map<unsigned __int64,Array<CON *> *,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,Array<CON *> *> > > *> > >
		{
			raw_hash_set<FlatHashMapPolicy<MOD *,flat_hash_map<unsigned __int64,Array<CON *> *,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,Array<CON *> *> > > *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,flat_hash_map<unsigned __int64,Array<CON *> *,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,Array<CON *> *> > > *> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<MOD *>(MOD * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<MOD *,flat_hash_map<unsigned __int64,Array<CON *> *,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,Array<CON *> *> > > *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,flat_hash_map<unsigned __int64,Array<CON *> *,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,Array<CON *> *> > > *> > >::iterator find<MOD *>(MOD * const &,unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<MOD *,flat_hash_map<unsigned __int64,StaticRefSym *,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,StaticRefSym *> > > *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,flat_hash_map<unsigned __int64,StaticRefSym *,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,StaticRefSym *> > > *> > >
		{
			class iterator
			{
				void skip_empty_or_deleted();
			};

			raw_hash_set<FlatHashMapPolicy<MOD *,flat_hash_map<unsigned __int64,StaticRefSym *,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,StaticRefSym *> > > *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,flat_hash_map<unsigned __int64,StaticRefSym *,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,StaticRefSym *> > > *> > >::FindInfo find_first_non_full(unsigned __int64);
			void destroy_slots();
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<MOD *>(MOD * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<MOD *,flat_hash_map<unsigned __int64,StaticRefSym *,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,StaticRefSym *> > > *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,flat_hash_map<unsigned __int64,StaticRefSym *,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,StaticRefSym *> > > *> > >::iterator find<MOD *>(MOD * const &,unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<MOD *,flat_hash_set<GRP *,PHMapKeyHasher<void *>,HashEq<GRP *,void>::Eq,std::allocator<GRP *> > *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,flat_hash_set<GRP *,PHMapKeyHasher<void *>,HashEq<GRP *,void>::Eq,std::allocator<GRP *> > *> > >
		{
			class iterator
			{
				void skip_empty_or_deleted();
			};

			raw_hash_set<FlatHashMapPolicy<MOD *,flat_hash_set<GRP *,PHMapKeyHasher<void *>,HashEq<GRP *,void>::Eq,std::allocator<GRP *> > *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,flat_hash_set<GRP *,PHMapKeyHasher<void *>,HashEq<GRP *,void>::Eq,std::allocator<GRP *> > *> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<MOD *>(MOD * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<MOD *,flat_hash_set<GRP *,PHMapKeyHasher<void *>,HashEq<GRP *,void>::Eq,std::allocator<GRP *> > *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,flat_hash_set<GRP *,PHMapKeyHasher<void *>,HashEq<GRP *,void>::Eq,std::allocator<GRP *> > *> > >::iterator find<MOD *>(MOD * const &,unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<MOD *,std::vector<unsigned long,std::allocator<unsigned long> > >,HashEq<MOD *,void>::Hash,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,std::vector<unsigned long,std::allocator<unsigned long> > > > >
		{
			raw_hash_set<FlatHashMapPolicy<MOD *,std::vector<unsigned long,std::allocator<unsigned long> > >,HashEq<MOD *,void>::Hash,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,std::vector<unsigned long,std::allocator<unsigned long> > > > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void initialize_slots();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<MOD *>(MOD * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<MOD *,unsigned long>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,unsigned long> > >
		{
			raw_hash_set<FlatHashMapPolicy<MOD *,unsigned long>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,unsigned long> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<MOD *>(MOD * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<MOD *,unsigned long>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,unsigned long> > >::iterator find<MOD *>(MOD * const &,unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<SrcHeaderW *,unsigned char *>,PHMapKeyHasher<void *>,HashEq<SrcHeaderW *,void>::Eq,std::allocator<std::pair<SrcHeaderW * const,unsigned char *> > >
		{
			class iterator
			{
				void skip_empty_or_deleted();
			};

			raw_hash_set<FlatHashMapPolicy<SrcHeaderW *,unsigned char *>,PHMapKeyHasher<void *>,HashEq<SrcHeaderW *,void>::Eq,std::allocator<std::pair<SrcHeaderW * const,unsigned char *> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<SrcHeaderW *>(SrcHeaderW * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<unsigned __int64,Array<CON *> *>,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,Array<CON *> *> > >
		{
			raw_hash_set<FlatHashMapPolicy<unsigned __int64,Array<CON *> *>,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,Array<CON *> *> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<unsigned __int64>(unsigned __int64 const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<unsigned __int64,Array<CON *> *>,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,Array<CON *> *> > >::iterator find<unsigned __int64>(unsigned __int64 const &,unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<unsigned __int64,LG_NODE *>,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,LG_NODE *> > >
		{
			raw_hash_set<FlatHashMapPolicy<unsigned __int64,LG_NODE *>,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,LG_NODE *> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<unsigned __int64>(unsigned __int64 const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<unsigned __int64,LG_NODE *>,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,LG_NODE *> > >::iterator find<unsigned __int64>(unsigned __int64 const &,unsigned __int64);
			void clear();
		};

		class raw_hash_set<FlatHashMapPolicy<unsigned __int64,StaticRefSym *>,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,StaticRefSym *> > >
		{
			class iterator
			{
				void skip_empty_or_deleted();
			};

			raw_hash_set<FlatHashMapPolicy<unsigned __int64,StaticRefSym *>,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,StaticRefSym *> > >::FindInfo find_first_non_full(unsigned __int64);
			void destroy_slots();
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<unsigned __int64>(unsigned __int64 const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<unsigned __int64,StaticRefSym *>,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,StaticRefSym *> > >::iterator find<unsigned __int64>(unsigned __int64 const &,unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<unsigned __int64,char *>,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,char *> > >
		{
			raw_hash_set<FlatHashMapPolicy<unsigned __int64,char *>,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,char *> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<unsigned __int64>(unsigned __int64 const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<unsigned __int64,char *>,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,char *> > >::iterator find<unsigned __int64>(unsigned __int64 const &,unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<unsigned __int64,unsigned long>,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,unsigned long> > >
		{
			raw_hash_set<FlatHashMapPolicy<unsigned __int64,unsigned long>,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,unsigned long> > >::FindInfo find_first_non_full(unsigned __int64);
			void destroy_slots();
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<unsigned __int64>(unsigned __int64 const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<unsigned __int64,unsigned long>,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,unsigned long> > >::iterator find<unsigned __int64>(unsigned __int64 const &,unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<unsigned int,TkEmitTCEInfo *>,PHMapKeyHasher<unsigned int>,EqualTo<unsigned int>,std::allocator<std::pair<unsigned int const ,TkEmitTCEInfo *> > >
		{
			raw_hash_set<FlatHashMapPolicy<unsigned int,TkEmitTCEInfo *>,PHMapKeyHasher<unsigned int>,EqualTo<unsigned int>,std::allocator<std::pair<unsigned int const ,TkEmitTCEInfo *> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<unsigned int>(unsigned int const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<unsigned int,TkEmitTCEInfo *>,PHMapKeyHasher<unsigned int>,EqualTo<unsigned int>,std::allocator<std::pair<unsigned int const ,TkEmitTCEInfo *> > >::iterator find<unsigned int>(unsigned int const &,unsigned __int64);
			void clear();
		};

		class raw_hash_set<FlatHashMapPolicy<unsigned long,Array<GRP *> *>,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,Array<GRP *> *> > >
		{
			raw_hash_set<FlatHashMapPolicy<unsigned long,Array<GRP *> *>,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,Array<GRP *> *> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<unsigned long>(unsigned long const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<unsigned long,Array<GRP *> *>,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,Array<GRP *> *> > >::iterator find<unsigned long>(unsigned long const &,unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<unsigned long,Array<PdataMgr::FuncStartEnd> *>,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,Array<PdataMgr::FuncStartEnd> *> > >
		{
			raw_hash_set<FlatHashMapPolicy<unsigned long,Array<PdataMgr::FuncStartEnd> *>,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,Array<PdataMgr::FuncStartEnd> *> > >::FindInfo find_first_non_full(unsigned __int64);
			void destroy_slots();
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<int>(int const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<unsigned long,Array<PdataMgr::FuncStartEnd> *>,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,Array<PdataMgr::FuncStartEnd> *> > >::iterator find<unsigned long>(unsigned long const &,unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<unsigned long,Array<unsigned long> *>,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,Array<unsigned long> *> > >
		{
			raw_hash_set<FlatHashMapPolicy<unsigned long,Array<unsigned long> *>,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,Array<unsigned long> *> > >::FindInfo find_first_non_full(unsigned __int64);
			void destroy_slots();
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<int>(int const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<unsigned long,Array<unsigned long> *>,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,Array<unsigned long> *> > >::iterator find<unsigned long>(unsigned long const &,unsigned __int64);
			void clear();
		};

		class raw_hash_set<FlatHashMapPolicy<unsigned long,Buffer *>,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,Buffer *> > >
		{
			raw_hash_set<FlatHashMapPolicy<unsigned long,Buffer *>,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,Buffer *> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<unsigned long>(unsigned long const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<unsigned long,Buffer *>,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,Buffer *> > >::iterator find<unsigned long>(unsigned long const &,unsigned __int64);
			std::pair<raw_hash_set<FlatHashMapPolicy<unsigned long,Buffer *>,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,Buffer *> > >::iterator,bool> emplace<unsigned long &,Buffer * &,0>(unsigned long &,Buffer * &);
			void clear();
		};

		class raw_hash_set<FlatHashMapPolicy<unsigned long,Warbird::CWarbirdLinkerTransformations::PRIVATE_SYMBOL>,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,Warbird::CWarbirdLinkerTransformations::PRIVATE_SYMBOL> > >
		{
			raw_hash_set<FlatHashMapPolicy<unsigned long,Warbird::CWarbirdLinkerTransformations::PRIVATE_SYMBOL>,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,Warbird::CWarbirdLinkerTransformations::PRIVATE_SYMBOL> > >::FindInfo find_first_non_full(unsigned __int64);
			void destroy_slots();
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<unsigned long>(unsigned long const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<unsigned long,Warbird::CWarbirdLinkerTransformations::PRIVATE_SYMBOL>,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,Warbird::CWarbirdLinkerTransformations::PRIVATE_SYMBOL> > >::iterator find<unsigned long>(unsigned long const &,unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<unsigned long,flat_hash_map<unsigned __int64,char *,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,char *> > > *>,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,flat_hash_map<unsigned __int64,char *,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,char *> > > *> > >
		{
			raw_hash_set<FlatHashMapPolicy<unsigned long,flat_hash_map<unsigned __int64,char *,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,char *> > > *>,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,flat_hash_map<unsigned __int64,char *,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,char *> > > *> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<unsigned long>(unsigned long const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<unsigned long,flat_hash_map<unsigned __int64,char *,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,char *> > > *>,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,flat_hash_map<unsigned __int64,char *,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,char *> > > *> > >::iterator find<unsigned long>(unsigned long const &,unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<unsigned long,flat_hash_set<unsigned long,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<unsigned long> > *>,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,flat_hash_set<unsigned long,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<unsigned long> > *> > >
		{
			class iterator
			{
				void skip_empty_or_deleted();
			};

			raw_hash_set<FlatHashMapPolicy<unsigned long,flat_hash_set<unsigned long,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<unsigned long> > *>,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,flat_hash_set<unsigned long,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<unsigned long> > *> > >::FindInfo find_first_non_full(unsigned __int64);
			void destroy_slots();
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<unsigned long>(unsigned long const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<unsigned long,flat_hash_set<unsigned long,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<unsigned long> > *>,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,flat_hash_set<unsigned long,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<unsigned long> > *> > >::iterator find<unsigned long>(unsigned long const &,unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<unsigned long,std::pair<CON *,std::vector<unsigned __int64,std::allocator<unsigned __int64> > > >,Hash<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,std::pair<CON *,std::vector<unsigned __int64,std::allocator<unsigned __int64> > > > > >
		{
			class iterator
			{
				void skip_empty_or_deleted();
			};

			raw_hash_set<FlatHashMapPolicy<unsigned long,std::pair<CON *,std::vector<unsigned __int64,std::allocator<unsigned __int64> > > >,Hash<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,std::pair<CON *,std::vector<unsigned __int64,std::allocator<unsigned __int64> > > > > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void initialize_slots();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<unsigned long>(unsigned long const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<unsigned long,std::pair<CON *,std::vector<unsigned __int64,std::allocator<unsigned __int64> > > >,Hash<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,std::pair<CON *,std::vector<unsigned __int64,std::allocator<unsigned __int64> > > > > >::iterator find<unsigned long>(unsigned long const &);
			raw_hash_set<FlatHashMapPolicy<unsigned long,std::pair<CON *,std::vector<unsigned __int64,std::allocator<unsigned __int64> > > >,Hash<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,std::pair<CON *,std::vector<unsigned __int64,std::allocator<unsigned __int64> > > > > >::iterator find<unsigned long>(unsigned long const &,unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<unsigned long,std::vector<unsigned __int64,std::allocator<unsigned __int64> > >,Hash<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,std::vector<unsigned __int64,std::allocator<unsigned __int64> > > > >
		{
			class iterator
			{
				void skip_empty_or_deleted();
			};

			raw_hash_set<FlatHashMapPolicy<unsigned long,std::vector<unsigned __int64,std::allocator<unsigned __int64> > >,Hash<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,std::vector<unsigned __int64,std::allocator<unsigned __int64> > > > >::FindInfo find_first_non_full(unsigned __int64);
			void destroy_slots();
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<unsigned long>(unsigned long const &);
			std::pair<unsigned __int64,bool> find_or_prepare_insert<unsigned long>(unsigned long const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<unsigned long,std::vector<unsigned __int64,std::allocator<unsigned __int64> > >,Hash<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,std::vector<unsigned __int64,std::allocator<unsigned __int64> > > > >::const_iterator find<unsigned long>(unsigned long const &);
			raw_hash_set<FlatHashMapPolicy<unsigned long,std::vector<unsigned __int64,std::allocator<unsigned __int64> > >,Hash<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,std::vector<unsigned __int64,std::allocator<unsigned __int64> > > > >::iterator begin();
			raw_hash_set<FlatHashMapPolicy<unsigned long,std::vector<unsigned __int64,std::allocator<unsigned __int64> > >,Hash<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,std::vector<unsigned __int64,std::allocator<unsigned __int64> > > > >::iterator find<unsigned long>(unsigned long const &,unsigned __int64);
			void clear();
		};

		class raw_hash_set<FlatHashMapPolicy<unsigned long,unsigned __int64>,Hash<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,unsigned __int64> > >
		{
			class iterator
			{
				void skip_empty_or_deleted();
			};

			raw_hash_set<FlatHashMapPolicy<unsigned long,unsigned __int64>,Hash<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,unsigned __int64> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<unsigned long>(unsigned long const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<unsigned long,unsigned __int64>,Hash<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,unsigned __int64> > >::iterator find<unsigned long>(unsigned long const &);
			raw_hash_set<FlatHashMapPolicy<unsigned long,unsigned __int64>,Hash<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,unsigned __int64> > >::iterator find<unsigned long>(unsigned long const &,unsigned __int64);
		};

		class raw_hash_set<FlatHashMapPolicy<unsigned long,unsigned long>,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,unsigned long> > >
		{
			class iterator
			{
				void skip_empty_or_deleted();
			};

			raw_hash_set<FlatHashMapPolicy<unsigned long,unsigned long>,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,unsigned long> > >::FindInfo find_first_non_full(unsigned __int64);
			void destroy_slots();
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<unsigned long>(unsigned long const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<unsigned long,unsigned long>,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,unsigned long> > >::iterator begin();
			raw_hash_set<FlatHashMapPolicy<unsigned long,unsigned long>,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,unsigned long> > >::iterator find<unsigned long>(unsigned long const &,unsigned __int64);
			std::pair<raw_hash_set<FlatHashMapPolicy<unsigned long,unsigned long>,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,unsigned long> > >::iterator,bool> emplace<unsigned long &,unsigned long &,0>(unsigned long &,unsigned long &);
			void clear();
		};

		class raw_hash_set<FlatHashMapPolicy<void *,EXTERNAL *>,PHMapKeyHasher<void *>,HashEq<void *,void>::Eq,std::allocator<std::pair<void * const,EXTERNAL *> > >
		{
			raw_hash_set<FlatHashMapPolicy<void *,EXTERNAL *>,PHMapKeyHasher<void *>,HashEq<void *,void>::Eq,std::allocator<std::pair<void * const,EXTERNAL *> > >::FindInfo find_first_non_full(unsigned __int64);
			void destroy_slots();
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<void *>(void * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<void *,EXTERNAL *>,PHMapKeyHasher<void *>,HashEq<void *,void>::Eq,std::allocator<std::pair<void * const,EXTERNAL *> > >::iterator find<void *>(void * const &,unsigned __int64);
			void clear();
		};

		class raw_hash_set<FlatHashMapPolicy<void *,flat_hash_map<CON *,Array<_DYN_VALUE_RELOC_OFFSET_DESCRIPTOR> *,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,Array<_DYN_VALUE_RELOC_OFFSET_DESCRIPTOR> *> > > *>,PHMapKeyHasher<void *>,HashEq<void *,void>::Eq,std::allocator<std::pair<void * const,flat_hash_map<CON *,Array<_DYN_VALUE_RELOC_OFFSET_DESCRIPTOR> *,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,Array<_DYN_VALUE_RELOC_OFFSET_DESCRIPTOR> *> > > *> > >
		{
			class iterator
			{
				void skip_empty_or_deleted();
			};

			raw_hash_set<FlatHashMapPolicy<void *,flat_hash_map<CON *,Array<_DYN_VALUE_RELOC_OFFSET_DESCRIPTOR> *,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,Array<_DYN_VALUE_RELOC_OFFSET_DESCRIPTOR> *> > > *>,PHMapKeyHasher<void *>,HashEq<void *,void>::Eq,std::allocator<std::pair<void * const,flat_hash_map<CON *,Array<_DYN_VALUE_RELOC_OFFSET_DESCRIPTOR> *,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,Array<_DYN_VALUE_RELOC_OFFSET_DESCRIPTOR> *> > > *> > >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<void *>(void * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashMapPolicy<void *,flat_hash_map<CON *,Array<_DYN_VALUE_RELOC_OFFSET_DESCRIPTOR> *,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,Array<_DYN_VALUE_RELOC_OFFSET_DESCRIPTOR> *> > > *>,PHMapKeyHasher<void *>,HashEq<void *,void>::Eq,std::allocator<std::pair<void * const,flat_hash_map<CON *,Array<_DYN_VALUE_RELOC_OFFSET_DESCRIPTOR> *,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,Array<_DYN_VALUE_RELOC_OFFSET_DESCRIPTOR> *> > > *> > >::iterator begin();
			raw_hash_set<FlatHashMapPolicy<void *,flat_hash_map<CON *,Array<_DYN_VALUE_RELOC_OFFSET_DESCRIPTOR> *,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,Array<_DYN_VALUE_RELOC_OFFSET_DESCRIPTOR> *> > > *>,PHMapKeyHasher<void *>,HashEq<void *,void>::Eq,std::allocator<std::pair<void * const,flat_hash_map<CON *,Array<_DYN_VALUE_RELOC_OFFSET_DESCRIPTOR> *,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,Array<_DYN_VALUE_RELOC_OFFSET_DESCRIPTOR> *> > > *> > >::iterator find<void *>(void * const &,unsigned __int64);
		};

		class raw_hash_set<FlatHashSetPolicy<CON *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<CON *> >
		{
			class iterator
			{
				void skip_empty_or_deleted();
			};

			raw_hash_set<FlatHashSetPolicy<CON *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<CON *> >::FindInfo find_first_non_full(unsigned __int64);
			void destroy_slots();
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<CON *>(CON * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashSetPolicy<CON *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<CON *> >::iterator begin();
			raw_hash_set<FlatHashSetPolicy<CON *>,PHMapKeyHasher<void *>,HashEq<CON *,void>::Eq,std::allocator<CON *> >::iterator find<CON *>(CON * const &,unsigned __int64);
			void clear();
		};

		class raw_hash_set<FlatHashSetPolicy<EXTERNAL *>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<EXTERNAL *> >
		{
			class iterator
			{
				void skip_empty_or_deleted();
			};

			raw_hash_set<FlatHashSetPolicy<EXTERNAL *>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<EXTERNAL *> >::FindInfo find_first_non_full(unsigned __int64);
			void destroy_slots();
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<EXTERNAL *>(EXTERNAL * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashSetPolicy<EXTERNAL *>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<EXTERNAL *> >::iterator begin();
			raw_hash_set<FlatHashSetPolicy<EXTERNAL *>,PHMapKeyHasher<void *>,HashEq<EXTERNAL *,void>::Eq,std::allocator<EXTERNAL *> >::iterator find<EXTERNAL *>(EXTERNAL * const &,unsigned __int64);
			unsigned __int64 count<EXTERNAL *>(EXTERNAL * const &);
			void clear();
		};

		class raw_hash_set<FlatHashSetPolicy<GRP *>,PHMapKeyHasher<void *>,HashEq<GRP *,void>::Eq,std::allocator<GRP *> >
		{
			class iterator
			{
				void skip_empty_or_deleted();
			};

			raw_hash_set<FlatHashSetPolicy<GRP *>,PHMapKeyHasher<void *>,HashEq<GRP *,void>::Eq,std::allocator<GRP *> >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<GRP *>(GRP * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashSetPolicy<GRP *>,PHMapKeyHasher<void *>,HashEq<GRP *,void>::Eq,std::allocator<GRP *> >::iterator find<GRP *>(GRP * const &,unsigned __int64);
		};

		class raw_hash_set<FlatHashSetPolicy<LONG_BRANCH_REGION *>,PHMapKeyHasher<void *>,HashEq<LONG_BRANCH_REGION *,void>::Eq,std::allocator<LONG_BRANCH_REGION *> >
		{
			class iterator
			{
				void skip_empty_or_deleted();
			};

			raw_hash_set<FlatHashSetPolicy<LONG_BRANCH_REGION *>,PHMapKeyHasher<void *>,HashEq<LONG_BRANCH_REGION *,void>::Eq,std::allocator<LONG_BRANCH_REGION *> >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<LONG_BRANCH_REGION *>(LONG_BRANCH_REGION * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		};

		class raw_hash_set<FlatHashSetPolicy<MOD *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<MOD *> >
		{
			class iterator
			{
				void skip_empty_or_deleted();
			};

			raw_hash_set<FlatHashSetPolicy<MOD *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<MOD *> >::FindInfo find_first_non_full(unsigned __int64);
			std::pair<raw_hash_set<FlatHashSetPolicy<MOD *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<MOD *> >::iterator,bool> emplace_decomposable<MOD *,MOD * &>(MOD * const &,unsigned __int64,MOD * &);
			void destroy_slots();
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<MOD *>(MOD * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashSetPolicy<MOD *>,PHMapKeyHasher<void *>,HashEq<MOD *,void>::Eq,std::allocator<MOD *> >::iterator find<MOD *>(MOD * const &,unsigned __int64);
			unsigned __int64 count<MOD *>(MOD * const &);
			void clear();
		};

		class raw_hash_set<FlatHashSetPolicy<unsigned long>,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<unsigned long> >
		{
			class iterator
			{
				void skip_empty_or_deleted();
			};

			raw_hash_set<FlatHashSetPolicy<unsigned long>,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<unsigned long> >::FindInfo find_first_non_full(unsigned __int64);
			void destroy_slots();
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<unsigned long>(unsigned long const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashSetPolicy<unsigned long>,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<unsigned long> >::iterator begin();
			raw_hash_set<FlatHashSetPolicy<unsigned long>,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<unsigned long> >::iterator find<unsigned long>(unsigned long const &,unsigned __int64);
			unsigned __int64 count<unsigned long>(unsigned long const &);
		};

		class raw_hash_set<FlatHashSetPolicy<unsigned short *>,PHMapKeyHasher<void *>,HashEq<unsigned short *,void>::Eq,std::allocator<unsigned short *> >
		{
			raw_hash_set<FlatHashSetPolicy<unsigned short *>,PHMapKeyHasher<void *>,HashEq<unsigned short *,void>::Eq,std::allocator<unsigned short *> >::FindInfo find_first_non_full(unsigned __int64);
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<unsigned short *>(unsigned short * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			raw_hash_set<FlatHashSetPolicy<unsigned short *>,PHMapKeyHasher<void *>,HashEq<unsigned short *,void>::Eq,std::allocator<unsigned short *> >::iterator find<unsigned short *>(unsigned short * const &,unsigned __int64);
		};

		class raw_hash_set<FlatHashSetPolicy<void *>,PHMapKeyHasher<void *>,HashEq<void *,void>::Eq,std::allocator<void *> >
		{
			raw_hash_set<FlatHashSetPolicy<void *>,PHMapKeyHasher<void *>,HashEq<void *,void>::Eq,std::allocator<void *> >::FindInfo find_first_non_full(unsigned __int64);
			void destroy_slots();
			void drop_deletes_without_resize();
			void resize(unsigned __int64);
		protected:
			std::pair<unsigned __int64,bool> find_or_prepare_insert<void *>(void * const &,unsigned __int64);
			unsigned __int64 prepare_insert(unsigned __int64);
		public:
			void clear();
		};

		unsigned __int64 NormalizeCapacity(unsigned __int64);
		void ConvertDeletedToEmptyAndFullToDeleted(signed char *,unsigned __int64);
	};

	struct flat_hash_map<CON *,Array<unsigned int> *,PHMapKeyHasher<void *>,container_internal::HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,Array<unsigned int> *> > >
	{
		~flat_hash_map<CON *,Array<unsigned int> *,PHMapKeyHasher<void *>,container_internal::HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,Array<unsigned int> *> > >();
	};

	struct flat_hash_map<CON *,COFF_STATIC_SYM_REF *,PHMapKeyHasher<void *>,container_internal::HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,COFF_STATIC_SYM_REF *> > >
	{
		~flat_hash_map<CON *,COFF_STATIC_SYM_REF *,PHMapKeyHasher<void *>,container_internal::HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,COFF_STATIC_SYM_REF *> > >();
	};

	struct flat_hash_map<CON *,CON *,PHMapKeyHasher<void *>,container_internal::HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,CON *> > >
	{
		~flat_hash_map<CON *,CON *,PHMapKeyHasher<void *>,container_internal::HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,CON *> > >();
	};

	struct flat_hash_map<CON *,EXTERNAL *,PHMapKeyHasher<void *>,container_internal::HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,EXTERNAL *> > >
	{
		~flat_hash_map<CON *,EXTERNAL *,PHMapKeyHasher<void *>,container_internal::HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,EXTERNAL *> > >();
	};

	struct flat_hash_map<CON *,ResolvedSym,PHMapKeyHasher<void *>,container_internal::HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,ResolvedSym> > >
	{
		~flat_hash_map<CON *,ResolvedSym,PHMapKeyHasher<void *>,container_internal::HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,ResolvedSym> > >();
	};

	struct flat_hash_map<CON *,flat_hash_map<unsigned long,std::vector<unsigned __int64,std::allocator<unsigned __int64> >,Hash<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,std::vector<unsigned __int64,std::allocator<unsigned __int64> > > > >,container_internal::HashEq<CON *,void>::Hash,container_internal::HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,flat_hash_map<unsigned long,std::vector<unsigned __int64,std::allocator<unsigned __int64> >,Hash<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,std::vector<unsigned __int64,std::allocator<unsigned __int64> > > > > > > >
	{
		~flat_hash_map<CON *,flat_hash_map<unsigned long,std::vector<unsigned __int64,std::allocator<unsigned __int64> >,Hash<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,std::vector<unsigned __int64,std::allocator<unsigned __int64> > > > >,container_internal::HashEq<CON *,void>::Hash,container_internal::HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,flat_hash_map<unsigned long,std::vector<unsigned __int64,std::allocator<unsigned __int64> >,Hash<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,std::vector<unsigned __int64,std::allocator<unsigned __int64> > > > > > > >();
	};

	struct flat_hash_map<EXTERNAL *,COFF_STATIC_SYM_REF *,PHMapKeyHasher<void *>,container_internal::HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,COFF_STATIC_SYM_REF *> > >
	{
		~flat_hash_map<EXTERNAL *,COFF_STATIC_SYM_REF *,PHMapKeyHasher<void *>,container_internal::HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,COFF_STATIC_SYM_REF *> > >();
	};

	struct flat_hash_map<EXTERNAL *,EXTERNAL *,PHMapKeyHasher<void *>,container_internal::HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,EXTERNAL *> > >
	{
		~flat_hash_map<EXTERNAL *,EXTERNAL *,PHMapKeyHasher<void *>,container_internal::HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,EXTERNAL *> > >();
	};

	struct flat_hash_map<EXTERNAL *,ModExternalList *,PHMapKeyHasher<void *>,container_internal::HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,ModExternalList *> > >
	{
		~flat_hash_map<EXTERNAL *,ModExternalList *,PHMapKeyHasher<void *>,container_internal::HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,ModExternalList *> > >();
	};

	struct flat_hash_map<EXTERNAL *,ModICallPushThunk,PHMapKeyHasher<void *>,container_internal::HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,ModICallPushThunk> > >
	{
		~flat_hash_map<EXTERNAL *,ModICallPushThunk,PHMapKeyHasher<void *>,container_internal::HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,ModICallPushThunk> > >();
	};

	struct flat_hash_map<EXTERNAL *,ResolvedSym,PHMapKeyHasher<void *>,container_internal::HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,ResolvedSym> > >
	{
		~flat_hash_map<EXTERNAL *,ResolvedSym,PHMapKeyHasher<void *>,container_internal::HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,ResolvedSym> > >();
	};

	struct flat_hash_map<EXTERNAL *,TKMOD,PHMapKeyHasher<void *>,container_internal::HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,TKMOD> > >
	{
		~flat_hash_map<EXTERNAL *,TKMOD,PHMapKeyHasher<void *>,container_internal::HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,TKMOD> > >();
	};

	struct flat_hash_map<EXTERNAL *,unsigned __int64,PHMapKeyHasher<void *>,container_internal::HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,unsigned __int64> > >
	{
		~flat_hash_map<EXTERNAL *,unsigned __int64,PHMapKeyHasher<void *>,container_internal::HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,unsigned __int64> > >();
	};

	struct flat_hash_map<EXTERNAL *,unsigned __int64,container_internal::HashEq<EXTERNAL *,void>::Hash,container_internal::HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,unsigned __int64> > >
	{
		~flat_hash_map<EXTERNAL *,unsigned __int64,container_internal::HashEq<EXTERNAL *,void>::Hash,container_internal::HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,unsigned __int64> > >();
	};

	struct flat_hash_map<LIB *,flat_hash_map<unsigned long,unsigned __int64,Hash<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,unsigned __int64> > >,container_internal::HashEq<LIB *,void>::Hash,container_internal::HashEq<LIB *,void>::Eq,std::allocator<std::pair<LIB * const,flat_hash_map<unsigned long,unsigned __int64,Hash<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,unsigned __int64> > > > > >
	{
		~flat_hash_map<LIB *,flat_hash_map<unsigned long,unsigned __int64,Hash<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,unsigned __int64> > >,container_internal::HashEq<LIB *,void>::Hash,container_internal::HashEq<LIB *,void>::Eq,std::allocator<std::pair<LIB * const,flat_hash_map<unsigned long,unsigned __int64,Hash<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,unsigned __int64> > > > > >();
	};

	struct flat_hash_map<LINK_FILE_ID,MOD *,LinkFileIDHasher,EqualTo<LINK_FILE_ID>,std::allocator<std::pair<LINK_FILE_ID const ,MOD *> > >
	{
		~flat_hash_map<LINK_FILE_ID,MOD *,LinkFileIDHasher,EqualTo<LINK_FILE_ID>,std::allocator<std::pair<LINK_FILE_ID const ,MOD *> > >();
	};

	struct flat_hash_map<MOD *,Array<CON *> *,PHMapKeyHasher<void *>,container_internal::HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,Array<CON *> *> > >
	{
		~flat_hash_map<MOD *,Array<CON *> *,PHMapKeyHasher<void *>,container_internal::HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,Array<CON *> *> > >();
	};

	struct flat_hash_map<MOD *,MOD *,PHMapKeyHasher<void *>,container_internal::HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,MOD *> > >
	{
		~flat_hash_map<MOD *,MOD *,PHMapKeyHasher<void *>,container_internal::HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,MOD *> > >();
	};

	struct flat_hash_map<MOD *,bool,PHMapKeyHasher<void *>,container_internal::HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,bool> > >
	{
		~flat_hash_map<MOD *,bool,PHMapKeyHasher<void *>,container_internal::HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,bool> > >();
	};

	struct flat_hash_map<MOD *,char const *,PHMapKeyHasher<void *>,container_internal::HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,char const *> > >
	{
		~flat_hash_map<MOD *,char const *,PHMapKeyHasher<void *>,container_internal::HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,char const *> > >();
	};

	struct flat_hash_map<MOD *,flat_hash_map<unsigned __int64,Array<CON *> *,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,Array<CON *> *> > > *,PHMapKeyHasher<void *>,container_internal::HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,flat_hash_map<unsigned __int64,Array<CON *> *,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,Array<CON *> *> > > *> > >
	{
		~flat_hash_map<MOD *,flat_hash_map<unsigned __int64,Array<CON *> *,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,Array<CON *> *> > > *,PHMapKeyHasher<void *>,container_internal::HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,flat_hash_map<unsigned __int64,Array<CON *> *,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,Array<CON *> *> > > *> > >();
	};

	struct flat_hash_map<MOD *,flat_hash_set<GRP *,PHMapKeyHasher<void *>,container_internal::HashEq<GRP *,void>::Eq,std::allocator<GRP *> > *,PHMapKeyHasher<void *>,container_internal::HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,flat_hash_set<GRP *,PHMapKeyHasher<void *>,container_internal::HashEq<GRP *,void>::Eq,std::allocator<GRP *> > *> > >
	{
		~flat_hash_map<MOD *,flat_hash_set<GRP *,PHMapKeyHasher<void *>,container_internal::HashEq<GRP *,void>::Eq,std::allocator<GRP *> > *,PHMapKeyHasher<void *>,container_internal::HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,flat_hash_set<GRP *,PHMapKeyHasher<void *>,container_internal::HashEq<GRP *,void>::Eq,std::allocator<GRP *> > *> > >();
	};

	struct flat_hash_map<MOD *,std::vector<unsigned long,std::allocator<unsigned long> >,container_internal::HashEq<MOD *,void>::Hash,container_internal::HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,std::vector<unsigned long,std::allocator<unsigned long> > > > >
	{
		~flat_hash_map<MOD *,std::vector<unsigned long,std::allocator<unsigned long> >,container_internal::HashEq<MOD *,void>::Hash,container_internal::HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,std::vector<unsigned long,std::allocator<unsigned long> > > > >();
	};

	struct flat_hash_map<MOD *,unsigned long,PHMapKeyHasher<void *>,container_internal::HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,unsigned long> > >
	{
		~flat_hash_map<MOD *,unsigned long,PHMapKeyHasher<void *>,container_internal::HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,unsigned long> > >();
	};

	struct flat_hash_map<SrcHeaderW *,unsigned char *,PHMapKeyHasher<void *>,container_internal::HashEq<SrcHeaderW *,void>::Eq,std::allocator<std::pair<SrcHeaderW * const,unsigned char *> > >
	{
		~flat_hash_map<SrcHeaderW *,unsigned char *,PHMapKeyHasher<void *>,container_internal::HashEq<SrcHeaderW *,void>::Eq,std::allocator<std::pair<SrcHeaderW * const,unsigned char *> > >();
	};

	struct flat_hash_map<unsigned __int64,LG_NODE *,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,LG_NODE *> > >
	{
		~flat_hash_map<unsigned __int64,LG_NODE *,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,LG_NODE *> > >();
	};

	struct flat_hash_map<unsigned __int64,unsigned long,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,unsigned long> > >
	{
		~flat_hash_map<unsigned __int64,unsigned long,Hash<unsigned __int64>,EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,unsigned long> > >();
	};

	struct flat_hash_map<unsigned int,TkEmitTCEInfo *,PHMapKeyHasher<unsigned int>,EqualTo<unsigned int>,std::allocator<std::pair<unsigned int const ,TkEmitTCEInfo *> > >
	{
		~flat_hash_map<unsigned int,TkEmitTCEInfo *,PHMapKeyHasher<unsigned int>,EqualTo<unsigned int>,std::allocator<std::pair<unsigned int const ,TkEmitTCEInfo *> > >();
	};

	struct flat_hash_map<unsigned long,Array<GRP *> *,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,Array<GRP *> *> > >
	{
		~flat_hash_map<unsigned long,Array<GRP *> *,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,Array<GRP *> *> > >();
	};

	struct flat_hash_map<unsigned long,Buffer *,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,Buffer *> > >
	{
		~flat_hash_map<unsigned long,Buffer *,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,Buffer *> > >();
	};

	struct flat_hash_map<unsigned long,std::pair<CON *,std::vector<unsigned __int64,std::allocator<unsigned __int64> > >,Hash<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,std::pair<CON *,std::vector<unsigned __int64,std::allocator<unsigned __int64> > > > > >
	{
		~flat_hash_map<unsigned long,std::pair<CON *,std::vector<unsigned __int64,std::allocator<unsigned __int64> > >,Hash<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,std::pair<CON *,std::vector<unsigned __int64,std::allocator<unsigned __int64> > > > > >();
	};

	struct flat_hash_map<unsigned long,unsigned __int64,Hash<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,unsigned __int64> > >
	{
		~flat_hash_map<unsigned long,unsigned __int64,Hash<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,unsigned __int64> > >();
	};

	struct flat_hash_map<unsigned long,unsigned long,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,unsigned long> > >
	{
		~flat_hash_map<unsigned long,unsigned long,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,unsigned long> > >();
	};

	struct flat_hash_set<EXTERNAL *,PHMapKeyHasher<void *>,container_internal::HashEq<EXTERNAL *,void>::Eq,std::allocator<EXTERNAL *> >
	{
		~flat_hash_set<EXTERNAL *,PHMapKeyHasher<void *>,container_internal::HashEq<EXTERNAL *,void>::Eq,std::allocator<EXTERNAL *> >();
	};

	struct flat_hash_set<LONG_BRANCH_REGION *,PHMapKeyHasher<void *>,container_internal::HashEq<LONG_BRANCH_REGION *,void>::Eq,std::allocator<LONG_BRANCH_REGION *> >
	{
		~flat_hash_set<LONG_BRANCH_REGION *,PHMapKeyHasher<void *>,container_internal::HashEq<LONG_BRANCH_REGION *,void>::Eq,std::allocator<LONG_BRANCH_REGION *> >();
	};

	struct flat_hash_set<MOD *,PHMapKeyHasher<void *>,container_internal::HashEq<MOD *,void>::Eq,std::allocator<MOD *> >
	{
		~flat_hash_set<MOD *,PHMapKeyHasher<void *>,container_internal::HashEq<MOD *,void>::Eq,std::allocator<MOD *> >();
	};

	struct flat_hash_set<unsigned long,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<unsigned long> >
	{
		~flat_hash_set<unsigned long,PHMapKeyHasher<unsigned long>,EqualTo<unsigned long>,std::allocator<unsigned long> >();
	};

	struct flat_hash_set<unsigned short *,PHMapKeyHasher<void *>,container_internal::HashEq<unsigned short *,void>::Eq,std::allocator<unsigned short *> >
	{
		~flat_hash_set<unsigned short *,PHMapKeyHasher<void *>,container_internal::HashEq<unsigned short *,void>::Eq,std::allocator<unsigned short *> >();
	};

};

namespace std
{
	struct _Alloc_construct_ptr<allocator<_List_node<pair<HashedStringRef const ,unsigned long>,void *> > >
	{
		~_Alloc_construct_ptr<allocator<_List_node<pair<HashedStringRef const ,unsigned long>,void *> > >();
	};

	struct _Alloc_construct_ptr<allocator<_List_node<pair<basic_string_view<unsigned short,char_traits<unsigned short> > const ,FI *>,void *> > >
	{
		~_Alloc_construct_ptr<allocator<_List_node<pair<basic_string_view<unsigned short,char_traits<unsigned short> > const ,FI *>,void *> > >();
	};

	struct _Alloc_construct_ptr<allocator<_List_node<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> > >
	{
		~_Alloc_construct_ptr<allocator<_List_node<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> > >();
	};

	struct _Alloc_construct_ptr<allocator<_List_node<unsigned long,void *> > >
	{
		~_Alloc_construct_ptr<allocator<_List_node<unsigned long,void *> > >();
	};

	struct _Alloc_construct_ptr<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> > >
	{
		~_Alloc_construct_ptr<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> > >();
	};

	struct _Alloc_construct_ptr<allocator<_Tree_node<pair<pair<MOD *,unsigned long> const ,unordered_set<unsigned long,hash<unsigned long>,equal_to<unsigned long>,allocator<unsigned long> > >,void *> > >
	{
		~_Alloc_construct_ptr<allocator<_Tree_node<pair<pair<MOD *,unsigned long> const ,unordered_set<unsigned long,hash<unsigned long>,equal_to<unsigned long>,allocator<unsigned long> > >,void *> > >();
	};

	struct _Compressed_pair<allocator<char>,_String_val<_Simple_types<char> >,1>
	{
		~_Compressed_pair<allocator<char>,_String_val<_Simple_types<char> >,1>();
	};

	struct _Compressed_pair<allocator<unsigned short>,_String_val<_Simple_types<unsigned short> >,1>
	{
		~_Compressed_pair<allocator<unsigned short>,_String_val<_Simple_types<unsigned short> >,1>();
	};

	struct _Facetptr<ctype<unsigned short> >
	{
		static locale::facet const * const _Psave;
	};

	struct _Func_class<unsigned long,unsigned long,unsigned short *>
	{
		unsigned long operator()(unsigned long,unsigned short *);
	};

	class _Func_impl_no_alloc<unsigned long (*)(unsigned long,unsigned short *),unsigned long,unsigned long,unsigned short *>
	{
		virtual _Func_base<unsigned long,unsigned long,unsigned short *> * _Copy(void *);
		virtual _Func_base<unsigned long,unsigned long,unsigned short *> * _Move(void *);
		virtual type_info const & _Target_type();
		virtual void _Delete_this(bool);
		virtual void const * _Get();
	};

	struct _Generic_error_category
	{
		virtual basic_string<char,char_traits<char>,allocator<char> > message(int);
		virtual char const * name();
	};

	class _Hash<_Umap_traits<HashedStringRef,unsigned long,_Uhash_compare<HashedStringRef,hash<HashedStringRef>,equal_to<HashedStringRef> >,allocator<pair<HashedStringRef const ,unsigned long> >,0> >
	{
	protected:
		_Hash_find_last_result<_List_node<pair<HashedStringRef const ,unsigned long>,void *> *> _Find_last<HashedStringRef>(HashedStringRef const &,unsigned __int64);
		_List_node<pair<HashedStringRef const ,unsigned long>,void *> * _Insert_new_node_before(unsigned __int64,_List_node<pair<HashedStringRef const ,unsigned long>,void *> * const,_List_node<pair<HashedStringRef const ,unsigned long>,void *> * const);
		void _Forced_rehash(unsigned __int64);
		void _Rehash_for_1();
	};

	class _Hash<_Umap_traits<basic_string_view<unsigned short,char_traits<unsigned short> >,FI *,_Uhash_compare<basic_string_view<unsigned short,char_traits<unsigned short> >,hash<basic_string_view<unsigned short,char_traits<unsigned short> > >,equal_to<basic_string_view<unsigned short,char_traits<unsigned short> > > >,allocator<pair<basic_string_view<unsigned short,char_traits<unsigned short> > const ,FI *> >,0> >
	{
	protected:
		_Hash<_Umap_traits<basic_string_view<unsigned short,char_traits<unsigned short> >,FI *,_Uhash_compare<basic_string_view<unsigned short,char_traits<unsigned short> >,hash<basic_string_view<unsigned short,char_traits<unsigned short> > >,equal_to<basic_string_view<unsigned short,char_traits<unsigned short> > > >,allocator<pair<basic_string_view<unsigned short,char_traits<unsigned short> > const ,FI *> >,0> >(_Uhash_compare<basic_string_view<unsigned short,char_traits<unsigned short> >,hash<basic_string_view<unsigned short,char_traits<unsigned short> > >,equal_to<basic_string_view<unsigned short,char_traits<unsigned short> > > > const &,allocator<pair<basic_string_view<unsigned short,char_traits<unsigned short> > const ,FI *> > const &);
		_Hash_find_last_result<_List_node<pair<basic_string_view<unsigned short,char_traits<unsigned short> > const ,FI *>,void *> *> _Find_last<basic_string_view<unsigned short,char_traits<unsigned short> > >(basic_string_view<unsigned short,char_traits<unsigned short> > const &,unsigned __int64);
		_List_node<pair<basic_string_view<unsigned short,char_traits<unsigned short> > const ,FI *>,void *> * _Insert_new_node_before(unsigned __int64,_List_node<pair<basic_string_view<unsigned short,char_traits<unsigned short> > const ,FI *>,void *> * const,_List_node<pair<basic_string_view<unsigned short,char_traits<unsigned short> > const ,FI *>,void *> * const);
		unsigned __int64 _Desired_grow_bucket_count(unsigned __int64);
		void _Forced_rehash(unsigned __int64);
	public:
		_List_iterator<_List_val<_List_simple_types<pair<basic_string_view<unsigned short,char_traits<unsigned short> > const ,FI *> > > > find<void>(basic_string_view<unsigned short,char_traits<unsigned short> > const &);
		unsigned __int64 erase(basic_string_view<unsigned short,char_traits<unsigned short> > const &);
	};

	class _Hash<_Umap_traits<unsigned long,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_Uhash_compare<unsigned long,hash<unsigned long>,equal_to<unsigned long> >,allocator<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,0> >
	{
	protected:
		_Hash<_Umap_traits<unsigned long,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_Uhash_compare<unsigned long,hash<unsigned long>,equal_to<unsigned long> >,allocator<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,0> >(_Uhash_compare<unsigned long,hash<unsigned long>,equal_to<unsigned long> > const &,allocator<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > const &);
		_Hash_find_last_result<_List_node<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *> _Find_last<unsigned long>(unsigned long const &,unsigned __int64);
		void _Forced_rehash(unsigned __int64);
		void _Rehash_for_1();
	public:
		void insert<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > const *>(pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > const *,pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > const *);
		~_Hash<_Umap_traits<unsigned long,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_Uhash_compare<unsigned long,hash<unsigned long>,equal_to<unsigned long> >,allocator<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,0> >();
	};

	class _Hash<_Uset_traits<unsigned long,_Uhash_compare<unsigned long,hash<unsigned long>,equal_to<unsigned long> >,allocator<unsigned long>,0> >
	{
	protected:
		_Hash_find_last_result<_List_node<unsigned long,void *> *> _Find_last<unsigned long>(unsigned long const &,unsigned __int64);
		_List_node<unsigned long,void *> * _Insert_new_node_before(unsigned __int64,_List_node<unsigned long,void *> * const,_List_node<unsigned long,void *> * const);
		void _Forced_rehash(unsigned __int64);
		void _Rehash_for_1();
	public:
		pair<_List_const_iterator<_List_val<_List_simple_types<unsigned long> > >,bool> emplace<unsigned long &>(unsigned long &);
	};

	struct _Hash_vec<allocator<_List_unchecked_const_iterator<_List_val<_List_simple_types<unsigned long> >,_Iterator_base0> > >
	{
		void _Assign_grow(unsigned __int64,_List_unchecked_const_iterator<_List_val<_List_simple_types<unsigned long> >,_Iterator_base0>);
		~_Hash_vec<allocator<_List_unchecked_const_iterator<_List_val<_List_simple_types<unsigned long> >,_Iterator_base0> > >();
	};

	struct _Hash_vec<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<HashedStringRef const ,unsigned long> > > > > >
	{
		void _Assign_grow(unsigned __int64,_List_unchecked_iterator<_List_val<_List_simple_types<pair<HashedStringRef const ,unsigned long> > > >);
		~_Hash_vec<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<HashedStringRef const ,unsigned long> > > > > >();
	};

	struct _Hash_vec<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string_view<unsigned short,char_traits<unsigned short> > const ,FI *> > > > > >
	{
		void _Assign_grow(unsigned __int64,_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string_view<unsigned short,char_traits<unsigned short> > const ,FI *> > > >);
		~_Hash_vec<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string_view<unsigned short,char_traits<unsigned short> > const ,FI *> > > > > >();
	};

	struct _Hash_vec<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > > >
	{
		void _Assign_grow(unsigned __int64,_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >);
		~_Hash_vec<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > > >();
	};

	struct _List_node<pair<HashedStringRef const ,unsigned long>,void *>
	{
		static void _Free_non_head<allocator<_List_node<pair<HashedStringRef const ,unsigned long>,void *> > >(allocator<_List_node<pair<HashedStringRef const ,unsigned long>,void *> > &,_List_node<pair<HashedStringRef const ,unsigned long>,void *> *);
	};

	struct _List_node<pair<basic_string_view<unsigned short,char_traits<unsigned short> > const ,FI *>,void *>
	{
		static void _Free_non_head<allocator<_List_node<pair<basic_string_view<unsigned short,char_traits<unsigned short> > const ,FI *>,void *> > >(allocator<_List_node<pair<basic_string_view<unsigned short,char_traits<unsigned short> > const ,FI *>,void *> > &,_List_node<pair<basic_string_view<unsigned short,char_traits<unsigned short> > const ,FI *>,void *> *);
	};

	struct _List_node<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *>
	{
		static void _Free_non_head<allocator<_List_node<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> > >(allocator<_List_node<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> > &,_List_node<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
	};

	struct _List_node<unsigned long,void *>
	{
		static void _Free_non_head<allocator<_List_node<unsigned long,void *> > >(allocator<_List_node<unsigned long,void *> > &,_List_node<unsigned long,void *> *);
	};

	struct _List_node_emplace_op2<allocator<_List_node<pair<HashedStringRef const ,unsigned long>,void *> > >
	{
		~_List_node_emplace_op2<allocator<_List_node<pair<HashedStringRef const ,unsigned long>,void *> > >();
	};

	struct _List_node_emplace_op2<allocator<_List_node<pair<basic_string_view<unsigned short,char_traits<unsigned short> > const ,FI *>,void *> > >
	{
		~_List_node_emplace_op2<allocator<_List_node<pair<basic_string_view<unsigned short,char_traits<unsigned short> > const ,FI *>,void *> > >();
	};

	struct _List_node_emplace_op2<allocator<_List_node<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> > >
	{
		~_List_node_emplace_op2<allocator<_List_node<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> > >();
	};

	struct _List_node_emplace_op2<allocator<_List_node<unsigned long,void *> > >
	{
		~_List_node_emplace_op2<allocator<_List_node<unsigned long,void *> > >();
	};

	struct _Lockit
	{
		~_Lockit();
	};

	class _System_error
	{
		static basic_string<char,char_traits<char>,allocator<char> > _Makestr(error_code,basic_string<char,char_traits<char>,allocator<char> >);
	protected:
		_System_error(error_code,basic_string<char,char_traits<char>,allocator<char> > const &);
	public:
		_System_error(_System_error const &);
	};

	struct _System_error_category
	{
		virtual basic_string<char,char_traits<char>,allocator<char> > message(int);
		virtual char const * name();
		virtual error_condition default_error_condition(int);
	};

	struct _Tidy_guard<vector<VCToolsTelemetry::Property,allocator<VCToolsTelemetry::Property> > >
	{
		~_Tidy_guard<vector<VCToolsTelemetry::Property,allocator<VCToolsTelemetry::Property> > >();
	};

	class _Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,1> >
	{
	protected:
		_Tree_find_result<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *> _Find_upper_bound<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
	};

	class _Tree<_Tmap_traits<pair<MOD *,unsigned long>,unordered_set<unsigned long,hash<unsigned long>,equal_to<unsigned long>,allocator<unsigned long> >,less<pair<MOD *,unsigned long> >,allocator<pair<pair<MOD *,unsigned long> const ,unordered_set<unsigned long,hash<unsigned long>,equal_to<unsigned long>,allocator<unsigned long> > > >,0> >
	{
	protected:
		_Tree_find_result<_Tree_node<pair<pair<MOD *,unsigned long> const ,unordered_set<unsigned long,hash<unsigned long>,equal_to<unsigned long>,allocator<unsigned long> > >,void *> *> _Find_lower_bound<pair<MOD *,unsigned long> >(pair<MOD *,unsigned long> const &);
	};

	struct _Tree_temp_node<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> > >
	{
		~_Tree_temp_node<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> > >();
	};

	struct _Tree_temp_node<allocator<_Tree_node<pair<pair<MOD *,unsigned long> const ,unordered_set<unsigned long,hash<unsigned long>,equal_to<unsigned long>,allocator<unsigned long> > >,void *> > >
	{
		~_Tree_temp_node<allocator<_Tree_node<pair<pair<MOD *,unsigned long> const ,unordered_set<unsigned long,hash<unsigned long>,equal_to<unsigned long>,allocator<unsigned long> > >,void *> > >();
	};

	struct _Tree_temp_node_alloc<allocator<_Tree_node<pair<pair<MOD *,unsigned long> const ,unordered_set<unsigned long,hash<unsigned long>,equal_to<unsigned long>,allocator<unsigned long> > >,void *> > >
	{
		~_Tree_temp_node_alloc<allocator<_Tree_node<pair<pair<MOD *,unsigned long> const ,unordered_set<unsigned long,hash<unsigned long>,equal_to<unsigned long>,allocator<unsigned long> > >,void *> > >();
	};

	struct _Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> * _Insert_node(_Tree_id<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *>,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> * const);
		void _Erase_tree<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> > >(allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
		void _Lrotate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
		void _Rrotate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
	};

	struct _Tree_val<_Tree_simple_types<pair<pair<MOD *,unsigned long> const ,unordered_set<unsigned long,hash<unsigned long>,equal_to<unsigned long>,allocator<unsigned long> > > > >
	{
		_Tree_node<pair<pair<MOD *,unsigned long> const ,unordered_set<unsigned long,hash<unsigned long>,equal_to<unsigned long>,allocator<unsigned long> > >,void *> * _Insert_node(_Tree_id<_Tree_node<pair<pair<MOD *,unsigned long> const ,unordered_set<unsigned long,hash<unsigned long>,equal_to<unsigned long>,allocator<unsigned long> > >,void *> *>,_Tree_node<pair<pair<MOD *,unsigned long> const ,unordered_set<unsigned long,hash<unsigned long>,equal_to<unsigned long>,allocator<unsigned long> > >,void *> * const);
		void _Erase_tree<allocator<_Tree_node<pair<pair<MOD *,unsigned long> const ,unordered_set<unsigned long,hash<unsigned long>,equal_to<unsigned long>,allocator<unsigned long> > >,void *> > >(allocator<_Tree_node<pair<pair<MOD *,unsigned long> const ,unordered_set<unsigned long,hash<unsigned long>,equal_to<unsigned long>,allocator<unsigned long> > >,void *> > &,_Tree_node<pair<pair<MOD *,unsigned long> const ,unordered_set<unsigned long,hash<unsigned long>,equal_to<unsigned long>,allocator<unsigned long> > >,void *> *);
		void _Lrotate(_Tree_node<pair<pair<MOD *,unsigned long> const ,unordered_set<unsigned long,hash<unsigned long>,equal_to<unsigned long>,allocator<unsigned long> > >,void *> *);
		void _Rrotate(_Tree_node<pair<pair<MOD *,unsigned long> const ,unordered_set<unsigned long,hash<unsigned long>,equal_to<unsigned long>,allocator<unsigned long> > >,void *> *);
	};

	struct _Uninitialized_backout_al<allocator<VCToolsTelemetry::Property> >
	{
		~_Uninitialized_backout_al<allocator<VCToolsTelemetry::Property> >();
	};

	struct _WChar_traits<unsigned short>
	{
		static int compare(unsigned short const * const,unsigned short const * const,unsigned __int64);
	};

	struct bad_alloc
	{
		bad_alloc(bad_alloc const &);
	};

	struct bad_array_new_length
	{
		bad_array_new_length(bad_array_new_length const &);
		virtual ~bad_array_new_length();
	};

	struct bad_cast
	{
		bad_cast(bad_cast const &);
		virtual ~bad_cast();
	};

	namespace basic_istream<unsigned short,char_traits<unsigned short> >
	{
		struct _Sentry_base
		{
			~_Sentry_base();
		};

		struct sentry
		{
			~sentry();
		};

	};

	class basic_streambuf<unsigned short,char_traits<unsigned short> >
	{
	protected:
		virtual __int64 showmanyc();
		virtual __int64 xsgetn(unsigned short *,__int64);
		virtual __int64 xsputn(unsigned short const *,__int64);
		virtual basic_streambuf<unsigned short,char_traits<unsigned short> > * setbuf(unsigned short *,__int64);
		virtual int sync();
		virtual unsigned short uflow();
		virtual void imbue(locale const &);
	public:
		virtual void _Lock();
		virtual void _Unlock();
		virtual ~basic_streambuf<unsigned short,char_traits<unsigned short> >();
	};

	class basic_string<char,char_traits<char>,allocator<char> >
	{
		basic_string<char,char_traits<char>,allocator<char> > & _Reallocate_for<<lambda_138c3d7c38c85abb84c7fc7bfe5747b7>,char>(unsigned __int64,<lambda_138c3d7c38c85abb84c7fc7bfe5747b7>,char);
		basic_string<char,char_traits<char>,allocator<char> > & _Reallocate_for<<lambda_66f57f934f28d61049862f64df852ff0>,char const *>(unsigned __int64,<lambda_66f57f934f28d61049862f64df852ff0>,char const *);
		basic_string<char,char_traits<char>,allocator<char> > & _Reallocate_grow_by<<lambda_319d5e083f45f90dcdce5dce53cbb275>,char>(unsigned __int64,<lambda_319d5e083f45f90dcdce5dce53cbb275>,char);
		basic_string<char,char_traits<char>,allocator<char> > & _Reallocate_grow_by<<lambda_65e615be2a453ca0576c979606f46740>,char const *,unsigned __int64>(unsigned __int64,<lambda_65e615be2a453ca0576c979606f46740>,char const *,unsigned __int64);
		basic_string<char,char_traits<char>,allocator<char> > & _Reallocate_grow_by<<lambda_e1befb086ad3257e3f042a63030725f7>,unsigned __int64,char>(unsigned __int64,<lambda_e1befb086ad3257e3f042a63030725f7>,unsigned __int64,char);
		unsigned __int64 _Calculate_growth(unsigned __int64);
		void _Become_small();
	public:
		basic_string<char,char_traits<char>,allocator<char> > & append(char const * const,unsigned __int64);
		basic_string<char,char_traits<char>,allocator<char> > & append(unsigned __int64,char);
		basic_string<char,char_traits<char>,allocator<char> > & assign(char const * const,unsigned __int64);
		basic_string<char,char_traits<char>,allocator<char> >(basic_string<char,char_traits<char>,allocator<char> > const &);
		basic_string<char,char_traits<char>,allocator<char> >(char const * const);
		~basic_string<char,char_traits<char>,allocator<char> >();
	};

	class basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >
	{
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & _Reallocate_for<<lambda_05cef1f6fdf474c9f3ed207deba0f73b>,unsigned short const *>(unsigned __int64,<lambda_05cef1f6fdf474c9f3ed207deba0f73b>,unsigned short const *);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & _Reallocate_grow_by<<lambda_3fdb14453883e86a37ebade6a7a0ebb0>,unsigned short>(unsigned __int64,<lambda_3fdb14453883e86a37ebade6a7a0ebb0>,unsigned short);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & _Reallocate_grow_by<<lambda_7030d12a21dba11210293044e97fe9c7>,unsigned short const *,unsigned __int64>(unsigned __int64,<lambda_7030d12a21dba11210293044e97fe9c7>,unsigned short const *,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & _Reallocate_grow_by<<lambda_b70241e9b5ebaad244db3e52d52cab17>,unsigned __int64,unsigned short>(unsigned __int64,<lambda_b70241e9b5ebaad244db3e52d52cab17>,unsigned __int64,unsigned short);
		unsigned __int64 _Calculate_growth(unsigned __int64);
		void _Construct_lv_contents(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		void _Tidy_deallocate();
	public:
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & append(unsigned __int64,unsigned short);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & append(unsigned short const * const,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & assign(unsigned short const * const,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & erase(unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(unsigned short const * const);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> ><unsigned short *,0>(unsigned short *,unsigned short *,allocator<unsigned short> const &);
		void push_back(unsigned short);
		~basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >();
	};

	class basic_stringbuf<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >
	{
	protected:
		virtual fpos<_Mbstatet> seekoff(__int64,int,int);
		virtual fpos<_Mbstatet> seekpos(fpos<_Mbstatet>,int);
		virtual unsigned short overflow(unsigned short);
		virtual unsigned short pbackfail(unsigned short);
		virtual unsigned short underflow();
		void _Init(unsigned short const *,unsigned __int64,int);
	public:
		virtual ~basic_stringbuf<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >();
	};

	struct basic_stringstream<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >
	{
		basic_stringstream<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,int);
		virtual ~basic_stringstream<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >();
	};

	class deque<MOD *,allocator<MOD *> >
	{
		void _Growmap(unsigned __int64);
	public:
		MOD * & emplace_back<MOD * &>(MOD * &);
	};

	struct error_category
	{
		virtual bool equivalent(error_code const &,int);
		virtual bool equivalent(int,error_condition const &);
		virtual error_condition default_error_condition(int);
	};

	struct exception
	{
		exception(char const * const);
		exception(exception const &);
		virtual char const * what();
		virtual ~exception();
	};

	namespace filesystem
	{
		class filesystem_error
		{
			static basic_string<char,char_traits<char>,allocator<char> > _Pretty_message(basic_string_view<char,char_traits<char> >,path const &,path const &);
		public:
			filesystem_error(basic_string<char,char_traits<char>,allocator<char> > const &,path const &,error_code);
			filesystem_error(filesystem_error const &);
			virtual char const * what();
			virtual ~filesystem_error();
		};

		struct path
		{
			path & operator/=(path const &);
			path parent_path();
			~path();
		};

		basic_string<char,char_traits<char>,allocator<char> > _Convert_wide_to_narrow<char_traits<char>,allocator<char> >(__std_code_page,basic_string_view<unsigned short,char_traits<unsigned short> >,allocator<char> const &);
		bool exists(filesystem::path const &);
		error_code _Make_ec(__std_win_error);
		filesystem::_File_status_and_error _Get_any_status(filesystem::path const &,__std_fs_stats_flags);
		filesystem::file_status status(filesystem::path const &,error_code &);
		filesystem::path operator/(filesystem::path const &,filesystem::path const &);
		int _Check_convert_result(__std_fs_convert_result);
		unsigned short const * _Find_root_name_end(unsigned short const * const,unsigned short const * const);
	};

	struct function<unsigned long (unsigned long,unsigned short *)>
	{
		~function<unsigned long (unsigned long,unsigned short *)>();
	};

	struct initializer_list<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
		initializer_list<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >(pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > const *,pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > const *);
	};

	struct list<pair<HashedStringRef const ,unsigned long>,allocator<pair<HashedStringRef const ,unsigned long> > >
	{
		~list<pair<HashedStringRef const ,unsigned long>,allocator<pair<HashedStringRef const ,unsigned long> > >();
	};

	struct list<pair<basic_string_view<unsigned short,char_traits<unsigned short> > const ,FI *>,allocator<pair<basic_string_view<unsigned short,char_traits<unsigned short> > const ,FI *> > >
	{
		~list<pair<basic_string_view<unsigned short,char_traits<unsigned short> > const ,FI *>,allocator<pair<basic_string_view<unsigned short,char_traits<unsigned short> > const ,FI *> > >();
	};

	struct list<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >
	{
		~list<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >();
	};

	struct list<unsigned long,allocator<unsigned long> >
	{
		~list<unsigned long,allocator<unsigned long> >();
	};

	struct locale
	{
		~locale();
	};

	struct multimap<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >
	{
		~multimap<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >();
	};

	struct pair<CON *,vector<unsigned __int64,allocator<unsigned __int64> > >
	{
		~pair<CON *,vector<unsigned __int64,allocator<unsigned __int64> > >();
	};

	struct pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >
	{
		~pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >();
	};

	struct pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >
	{
		pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > ><unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,0>(unsigned long const &,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		~pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >();
	};

	struct runtime_error
	{
		runtime_error(runtime_error const &);
	};

	struct system_error
	{
		system_error(error_code);
		system_error(system_error const &);
		virtual ~system_error();
	};

	struct tuple<COMRefPtr<ICOFFSymRO>,_IMAGE_RELOCATION *>
	{
		~tuple<COMRefPtr<ICOFFSymRO>,_IMAGE_RELOCATION *>();
	};

	struct tuple<COMRefPtr<IObjectContrib>,COMRefPtr<ICOFFSymRO>,_IMAGE_RELOCATION *>
	{
		~tuple<COMRefPtr<IObjectContrib>,COMRefPtr<ICOFFSymRO>,_IMAGE_RELOCATION *>();
	};

	struct unique_ptr<_Facet_base,default_delete<_Facet_base> >
	{
		~unique_ptr<_Facet_base,default_delete<_Facet_base> >();
	};

	struct unique_ptr<unsigned short [0],default_delete<unsigned short [0]> >
	{
		~unique_ptr<unsigned short [0],default_delete<unsigned short [0]> >();
	};

	struct unordered_map<basic_string_view<unsigned short,char_traits<unsigned short> >,FI *,hash<basic_string_view<unsigned short,char_traits<unsigned short> > >,equal_to<basic_string_view<unsigned short,char_traits<unsigned short> > >,allocator<pair<basic_string_view<unsigned short,char_traits<unsigned short> > const ,FI *> > >
	{
		unordered_map<basic_string_view<unsigned short,char_traits<unsigned short> >,FI *,hash<basic_string_view<unsigned short,char_traits<unsigned short> > >,equal_to<basic_string_view<unsigned short,char_traits<unsigned short> > >,allocator<pair<basic_string_view<unsigned short,char_traits<unsigned short> > const ,FI *> > >();
		~unordered_map<basic_string_view<unsigned short,char_traits<unsigned short> >,FI *,hash<basic_string_view<unsigned short,char_traits<unsigned short> > >,equal_to<basic_string_view<unsigned short,char_traits<unsigned short> > >,allocator<pair<basic_string_view<unsigned short,char_traits<unsigned short> > const ,FI *> > >();
	};

	struct unordered_map<unsigned long,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,hash<unsigned long>,equal_to<unsigned long>,allocator<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >
	{
		unordered_map<unsigned long,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,hash<unsigned long>,equal_to<unsigned long>,allocator<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >(initializer_list<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >);
		~unordered_map<unsigned long,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,hash<unsigned long>,equal_to<unsigned long>,allocator<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >();
	};

	class vector<VCToolsTelemetry::Property,allocator<VCToolsTelemetry::Property> >
	{
		VCToolsTelemetry::Property & _Emplace_back_with_unused_capacity<unsigned long &,unsigned long &>(unsigned long &,unsigned long &);
		VCToolsTelemetry::Property & _Emplace_back_with_unused_capacity<unsigned long &,unsigned short &>(unsigned long &,unsigned short &);
		unsigned __int64 _Calculate_growth(unsigned __int64);
		void _Change_array(VCToolsTelemetry::Property * const,unsigned __int64,unsigned __int64);
		void _Tidy();
	public:
		VCToolsTelemetry::Property * _Emplace_reallocate<unsigned long &,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > &>(VCToolsTelemetry::Property * const,unsigned long &,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > &);
		VCToolsTelemetry::Property * _Emplace_reallocate<unsigned long &,int &>(VCToolsTelemetry::Property * const,unsigned long &,int &);
		VCToolsTelemetry::Property * _Emplace_reallocate<unsigned long &,unsigned long &>(VCToolsTelemetry::Property * const,unsigned long &,unsigned long &);
		VCToolsTelemetry::Property * _Emplace_reallocate<unsigned long &,unsigned short &>(VCToolsTelemetry::Property * const,unsigned long &,unsigned short &);
		VCToolsTelemetry::Property * _Emplace_reallocate<unsigned long &,unsigned short const (&)[4]>(VCToolsTelemetry::Property * const,unsigned long &,unsigned short const (&)[4]);
		VCToolsTelemetry::Property * _Emplace_reallocate<unsigned long &,unsigned short const * &>(VCToolsTelemetry::Property * const,unsigned long &,unsigned short const * &);
		vector<VCToolsTelemetry::Property,allocator<VCToolsTelemetry::Property> >(vector<VCToolsTelemetry::Property,allocator<VCToolsTelemetry::Property> > const &);
	};

	class vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
		unsigned __int64 _Calculate_growth(unsigned __int64);
		void _Change_array(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > * const,unsigned __int64,unsigned __int64);
		void _Tidy();
	public:
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & emplace_back<unsigned short const * &>(unsigned short const * &);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > * _Emplace_reallocate<unsigned short const * &,unsigned __int64 &>(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > * const,unsigned short const * &,unsigned __int64 &);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > * _Emplace_reallocate<unsigned short const * &>(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > * const,unsigned short const * &);
		~vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >();
	};

	class vector<unsigned __int64,allocator<unsigned __int64> >
	{
		unsigned __int64 _Calculate_growth(unsigned __int64);
		void _Buy_raw(unsigned __int64);
		void _Change_array(unsigned __int64 * const,unsigned __int64,unsigned __int64);
		void _Clear_and_reserve_geometric(unsigned __int64);
		void _Tidy();
	public:
		unsigned __int64 * _Emplace_reallocate<unsigned __int64 const &>(unsigned __int64 * const,unsigned __int64 const &);
		vector<unsigned __int64,allocator<unsigned __int64> >(initializer_list<unsigned __int64>,allocator<unsigned __int64> const &);
		vector<unsigned __int64,allocator<unsigned __int64> >(vector<unsigned __int64,allocator<unsigned __int64> > const &);
		~vector<unsigned __int64,allocator<unsigned __int64> >();
	};

	class vector<unsigned long,allocator<unsigned long> >
	{
		void _Change_array(unsigned long * const,unsigned __int64,unsigned __int64);
	public:
		unsigned long * _Emplace_reallocate<unsigned long &>(unsigned long * const,unsigned long &);
	};

	ICF_GRP * * _Insertion_sort_unchecked<ICF_GRP * *,bool (*)(ICF_GRP *,ICF_GRP *)>(ICF_GRP * *,ICF_GRP * * const,bool (*)(ICF_GRP *,ICF_GRP *));
	MSTAT * * _Insertion_sort_unchecked<MSTAT * *,bool (*)(MSTAT const *,MSTAT const *)>(MSTAT * *,MSTAT * * const,bool (*)(MSTAT const *,MSTAT const *));
	VCToolsTelemetry::Property * _Uninitialized_move<VCToolsTelemetry::Property *,allocator<VCToolsTelemetry::Property> >(VCToolsTelemetry::Property * const,VCToolsTelemetry::Property * const,VCToolsTelemetry::Property *,std::allocator<VCToolsTelemetry::Property> &);
	bool _Traits_equal<char_traits<unsigned short> >(unsigned short const * const,unsigned __int64,unsigned short const * const,unsigned __int64);
	char * _UIntegral_to_buff<char,unsigned long>(char *,unsigned long);
	int _Immortalize_impl<_Generic_error_category>(void *,void *,void * *);
	int _Immortalize_impl<_System_error_category>(void *,void *,void * *);
	int _Traits_compare<char_traits<unsigned short> >(unsigned short const * const,unsigned __int64,unsigned short const * const,unsigned __int64);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > > unique<_Vector_iterator<_Vector_val<_Simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >,equal_to<void> >(std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > >,std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > >,std::equal_to<void>);
	std::basic_string<char,std::char_traits<char>,std::allocator<char> > to_string(unsigned long);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > * _Insertion_sort_unchecked<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,less<void> >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > * const,std::less<void>);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > * _Uninitialized_move<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > * const,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > * const,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > &);
	std::ctype<unsigned short> const & use_facet<ctype<unsigned short> >(std::locale const &);
	std::pair<ICF_GRP * *,ICF_GRP * *> _Partition_by_median_guess_unchecked<ICF_GRP * *,bool (*)(ICF_GRP *,ICF_GRP *)>(ICF_GRP * *,ICF_GRP * *,bool (*)(ICF_GRP *,ICF_GRP *));
	std::pair<MSTAT * *,MSTAT * *> _Partition_by_median_guess_unchecked<MSTAT * *,bool (*)(MSTAT const *,MSTAT const *)>(MSTAT * *,MSTAT * *,bool (*)(MSTAT const *,MSTAT const *));
	std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *> _Partition_by_median_guess_unchecked<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,less<void> >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::less<void>);
	unsigned __int64 _Fnv1a_append_bytes(unsigned __int64,unsigned char const * const,unsigned __int64);
	unsigned __int64 _Get_size_of_n<40>(unsigned __int64);
	unsigned __int64 _Get_size_of_n<4>(unsigned __int64);
	unsigned __int64 _Get_size_of_n<8>(unsigned __int64);
	unsigned short * _UIntegral_to_buff<unsigned short,unsigned int>(unsigned short *,unsigned int);
	unsigned short * _UIntegral_to_buff<unsigned short,unsigned long>(unsigned short *,unsigned long);
	void * _Allocate<16,_Default_allocate_traits,0>(unsigned __int64);
	void _Adjust_manually_vector_aligned(void * &,unsigned __int64 &);
	void _Deallocate<16,0>(void *,unsigned __int64);
	void _Deallocate<8,0>(void *,unsigned __int64);
	void _Destroy_range<allocator<VCToolsTelemetry::Property> >(VCToolsTelemetry::Property *,VCToolsTelemetry::Property * const,std::allocator<VCToolsTelemetry::Property> &);
	void _Destroy_range<allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > * const,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > &);
	void _Facet_Register(std::_Facet_base *);
	void _Guess_median_unchecked<ICF_GRP * *,bool (*)(ICF_GRP *,ICF_GRP *)>(ICF_GRP * *,ICF_GRP * *,ICF_GRP * *,bool (*)(ICF_GRP *,ICF_GRP *));
	void _Guess_median_unchecked<MSTAT * *,bool (*)(MSTAT const *,MSTAT const *)>(MSTAT * *,MSTAT * *,MSTAT * *,bool (*)(MSTAT const *,MSTAT const *));
	void _Guess_median_unchecked<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,less<void> >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::less<void>);
	void _Make_heap_unchecked<ICF_GRP * *,bool (*)(ICF_GRP *,ICF_GRP *)>(ICF_GRP * *,ICF_GRP * *,bool (*)(ICF_GRP *,ICF_GRP *));
	void _Make_heap_unchecked<MSTAT * *,bool (*)(MSTAT const *,MSTAT const *)>(MSTAT * *,MSTAT * *,bool (*)(MSTAT const *,MSTAT const *));
	void _Make_heap_unchecked<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,less<void> >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::less<void>);
	void _Med3_unchecked<ICF_GRP * *,bool (*)(ICF_GRP *,ICF_GRP *)>(ICF_GRP * *,ICF_GRP * *,ICF_GRP * *,bool (*)(ICF_GRP *,ICF_GRP *));
	void _Med3_unchecked<MSTAT * *,bool (*)(MSTAT const *,MSTAT const *)>(MSTAT * *,MSTAT * *,MSTAT * *,bool (*)(MSTAT const *,MSTAT const *));
	void _Med3_unchecked<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,less<void> >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::less<void>);
	void _Sort_heap_unchecked<ICF_GRP * *,bool (*)(ICF_GRP *,ICF_GRP *)>(ICF_GRP * *,ICF_GRP * *,bool (*)(ICF_GRP *,ICF_GRP *));
	void _Sort_heap_unchecked<MSTAT * *,bool (*)(MSTAT const *,MSTAT const *)>(MSTAT * *,MSTAT * *,bool (*)(MSTAT const *,MSTAT const *));
	void _Sort_heap_unchecked<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,less<void> >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::less<void>);
	void _Sort_unchecked<ICF_GRP * *,bool (*)(ICF_GRP *,ICF_GRP *)>(ICF_GRP * *,ICF_GRP * *,__int64,bool (*)(ICF_GRP *,ICF_GRP *));
	void _Sort_unchecked<MSTAT * *,bool (*)(MSTAT const *,MSTAT const *)>(MSTAT * *,MSTAT * *,__int64,bool (*)(MSTAT const *,MSTAT const *));
	void _Sort_unchecked<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,less<void> >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,__int64,std::less<void>);
	void _Throw_bad_array_new_length();
	void _Throw_system_error(std::errc);
};

ALTERNATE_NAME * AddAlternateName(IMAGE *,char const *,char const *,bool);
ALTERNATE_NAME * FindAlternateName(IMAGE const *,char const *);
ARGUMENT_LIST * FindInFilenameArguments(unsigned short const *);
ARGUMENT_LIST * PargFindSz(unsigned short const *,NAME_LIST *);
ARGUMENT_LIST * PargFindSzModified(unsigned short const *,NAME_LIST *);
ARGUMENT_LIST * pargFirst;
ARMTHUNKINFO * ArmThunkInfoAdd(IMAGE::ThunkType,unsigned long);
ARMTHUNKREGION ArmThunkRegion;
ARMTOTHUMBTHUNK ArmToThumbThunk;
ARP * ParpParseSz(unsigned short const *,unsigned short const *);
Array<ARGUMENT_LIST *> g_rgResFiles;
Array<CON *> g_rgpconLinkerDefinedRefdInCurMod;
Array<ICF_GRP *> g_rgICFGrp;
Array<ImplicitDllImportInfo> s_rgImplicitDllImportInfo;
Array<LIB *> g_rgplibWowa64;
Array<TransInfo> * g_prgMToUMTrans;
Array<char *> g_rgszCoffGrpSkipIncrPad;
Array<char *> g_rgszDiscardPublic;
Array<char const *> g_rgszTrimFilePrefix;
Array<tagPGDOBJECTRECORD> g_rgObjRecPGO;
Array<unsigned short *> g_rgszTmdIgnoreTypesInRegex;
Array<unsigned short *> g_rgszWowA64Lib;
Array<unsigned short const *> g_rgszCvtcilArgs;
Array<unsigned short const *> g_rgszNatvisNew;
Array<unsigned short const *> g_rgszNatvisRemove;
BASE_RELOC * NextEnmNonAbsBaseReloc(ENM_BASE_RELOC *,IMAGE *);
BASE_RELOC * pbrCur;
BASE_RELOC * rgbr;
BLK blkDirectives;
BUF * PbufLRU();
Buffer g_bufCmdLineOptions;
Buffer g_bufIncrCmdLine;
CImplib * g_pimplib;
CLockCS g_csMsg;
CMemCoordinator * g_memCoordinator;
CMismatches * g_pMismatchMap;
CON * PconCreateLBR(IMAGE *,CON *,unsigned long,unsigned long);
CON * PconSelectedComdat(CON *);
CON * g_pconTextBss;
CON * pconCvSignature;
CON * pconDebugDir;
CTaskQueue * SetupWorkerThread(unsigned short const *);
CTaskQueue * g_ptaskqETM;
CTickCount ticCounter;
CVCOMPILE2 CvCompile2C11;
CVCOMPILE3 CvCompile3;
CVEND const CvEnd;
CVOBJNAME CvObjName;
CVOBJNAME CvObjNameC11;
CVSIG CvSig;
CVTHUNK CvThunk;
CompareOrder FIdenticalRelocs(IMAGE *,_IMAGE_RELOCATION *,_IMAGE_RELOCATION *);
CompareOrder ICFComparePcons(CON *,CON *,bool);
CorPinvokeMap GetCallingConventionFromCorSig(unsigned char const *,unsigned long);
DBI * g_pdbi;
DFT dft;
DIS * PdisInitDisasm(DUMPSTATE *,DIS::DIST);
DName operator+(DNameStatus,DName const &);
DName operator+(StringLiteral const &,DName const &);
DName operator+(char,DName const &);
Dbg * g_pdbgFpo;
Dbg * g_pdbgOmapFrom;
Dbg * g_pdbgOmapTo;
Dbg * g_pdbgPdata;
Dbg * g_pdbgSectionHdr;
Dbg * g_pdbgSectionHdrOrig;
Dbg * g_pdbgXdata;
Dbg * g_pdbgXfixup;
DbgThunkSymHdr const g_c13SymHdr;
DiscardRVA g_discardRva;
EDGE * PedgeNew_TCE(CON *,CON *,unsigned short,unsigned long,unsigned char,bool,unsigned long);
EDGE * PedgeNew_TCE(CON *,EXTERNAL *,unsigned short,unsigned long,unsigned char,bool);
EDGE * PedgeNew_TCE(CON *,MOD *,unsigned int,bool,unsigned short,unsigned long,unsigned char,bool);
EDGE * PedgeNew_TCE(IMAGE *,EXTERNAL *,bool,EXTERNAL *,bool);
ERRINC ChckAbsSym(IMAGE *,char const *,unsigned long,EXTERNAL *,bool);
ERRINC ChckExtSym(char const *,unsigned long,unsigned short,EXTERNAL *,bool);
ERRINC errInc;
EXTERNAL * * RgpexternalSort(ST *,int (*)(void const *,void const *));
EXTERNAL * LookForEntry(IMAGE *,EntryRecord const *,int,bool *,char const * *,unsigned short const * *);
EXTERNAL * LookForMain(IMAGE *,bool *,char const * *,unsigned short const * *);
EXTERNAL * LookForWinMain(IMAGE *,bool *,char const * *,unsigned short const * *);
EXTERNAL * PextEntryPoint(IMAGE *);
EXTERNAL * PextFromTk(IMAGE *,MOD *,unsigned int);
EXTERNAL * TrackNonNativeStatic(char const *,MOD *,unsigned __int64,bool);
EXTERNAL * pextComEntry;
EXTERNAL * pextGp;
FEATUREI g_featureInfo;
FI * LookupCachedFiles(unsigned short const *,int,FileOpenFlags);
FIXPAG * pfixpagCur;
FIXPAG * pfixpagHead;
GRP * PgrpFind(SEC *,char const *);
GRP * pgrpCvPTypes;
GRP * pgrpCvSymbols;
GRP * pgrpCvTypes;
GRP * pgrpExport;
GRP * pgrpFirstTLS;
GRP * pgrpFpoData;
GRP * pgrpLastTLS;
HINSTANCE__ * DloadKernel32;
HT_ELEMENT * PelementLookup_HT(char const *,HT *,bool,BLK *,bool *);
ICOFFAuxSym * PICOFFAuxSymComFind(MOD *,COMRefPtr<IEnumAuxSym> &,unsigned char);
IDLStuff g_IDLStuff;
ILINKINFO * PilinkinfoFromMachine(IMAGE *);
ILINKINFO ilinkinfoArm64;
ILINKINFO ilinkinfoArmNT;
ILINKINFO ilinkinfoX86;
IMAGE * g_pimageWinMD;
IMAGE * pimageDump;
IObjFile2 * PObjFileForFile(PObjFileForFileParams *);
IObjHandler6 * g_pILHandler;
ISet g_isetDeletedMods;
LEXT * FindPlextForPext(EXTERNAL const *,LEXT *);
LEXT * g_plextTextBss;
LHEAPV * PlheapvNew(unsigned __int64,unsigned __int64);
LIB * AddArchiveArg(IMAGE *,unsigned short const *);
LIB * FindLib(unsigned short const *,LIBS *);
LIB * PlibFind(unsigned short const *,LIB *,bool);
LIB * g_plibModObjs;
LIB * plibCmdLineObjs;
MI * PmiLookupCachedMods(MOD *);
MOD * FindPmodDefiningSym(IncrHeapMap<EXTERNAL *,MOD *,LHashClass2<void const *,7,4> > *,EXTERNAL *);
MOD * PmodConvertCIL(ARGUMENT_LIST *,MOD *,LIB *,IMAGE *,bool *);
MOD * PmodFindPrevPMOD(MOD *);
MOD * PmodOrig(ICOFFSymRO *,MOD *);
MOD * PmodOrig(ICOFFSymRW *,MOD *);
MOD * PmodOrig(IObjectContrib *,MOD *);
MOD * PmodOrig(char const *);
MOD * PmodPreprocessFile(ARGUMENT_LIST *,LIB *,IMAGE *,bool *);
MOD * g_pmodCIL;
Map<unsigned long,unsigned long,HashClass<unsigned long,0> > s_mpObjToOriginalPath;
Map<unsigned long,unsigned long,HashClass<unsigned long,0> > s_mpOriginalPathToObj;
Mod * PmodDBIOpenMod(unsigned short const *,unsigned short const *);
NAME_LIST ArchiveFilenameArguments;
NAME_LIST ArchiveFilenameArgumentsPGO;
NAME_LIST DynValueFixupSyms;
NAME_LIST ExportDirectives;
NAME_LIST ExportSwitches;
NAME_LIST FilenameArguments;
NAME_LIST FilenameArgumentsPGO;
NAME_LIST LibPaths;
NAME_LIST MergeSwitches;
NAME_LIST ModFileList;
NAME_LIST ObjectFilenameArguments;
NAME_LIST ObjectFilenameArgumentsPGO;
NAME_LIST PathMapping;
NAME_LIST PchMapping;
NAME_LIST PdbMapping;
NAME_LIST SwitchArguments;
NAME_LIST SwitchArgumentsPGO;
NAME_LIST WinmdMapping;
NAME_LIST g_nlDelayDlls;
NAME_LIST g_nlLTCGMetaOutFilenames;
NMT<char> g_nmtCoffSectToPDBStream;
NMT<char> g_nmtFoldableCoffSects;
NMT<unsigned short> g_nmtTmdIgnoreTypes;
NMT<unsigned short> s_nmtObjMapping;
NODE * PnodePcon(CON *);
NODE * PnodePext(IMAGE *,EXTERNAL *,bool);
PDB * g_ppdb;
PUBSYM32 const * PPubsymLookupExact(DUMPSTATE const *,unsigned long);
PUBSYM32 const * RetrievePublicSymbol(DUMPSTATE const *,unsigned __int64);
RESERVED_SECTION const ReservedSection;
ResHdr g_resHdr;
SEC * PsecApplyMergePsec(SEC *);
SEC * g_psecTextBss;
SEC * psecBaseReloc;
SEC * psecCommon;
SEC * psecData;
SEC * psecDebug;
SEC * psecDelayLoadDescriptor;
SEC * psecDidat2;
SEC * psecDidat5;
SEC * psecException;
SEC * psecExport;
SEC * psecGuardEHCont;
SEC * psecGuardFids;
SEC * psecGuardIATs;
SEC * psecGuardIds;
SEC * psecGuardLongJmps;
SEC * psecIdata2;
SEC * psecIdata5;
SEC * psecImportDescriptor;
SEC * psecReadOnlyData;
SEC * psecResource;
SEC * psecSPD;
SEC * psecXdata;
SOURCEMAP * psmHead;
SOURCEMAP * psmTail;
ST * g_pstOptRefLtcg;
SWITCH const DefSwitch;
SWITCH_INFO const DefSwitchInfo;
THUMB2LONGBRANCHTHUNK Thumb2LongBranchThunk;
THUMB2LONGBRANCHTHUNK Thumb2LongBranchThunkPGI;
TOOL_TYPE Tool;
TPI * g_pipi;
TPI * g_ptpi;
ThunkingRelocs g_thunkingRelocs;
TrampSyms g_trampSyms;
UTF8_NAME_LIST LastSectionNames;
UTF8_NAME_LIST NoFunctionPadSectionNames;
UTF8_NAME_LIST SectionNames;
VirtualMemoryDumper vmdumper;
_IMAGE_ARCHIVE_MEMBER_HEADER * ReadArchiveMemberHeader(int);
_IMAGE_FILE_HEADER const DefImageFileHdr;
_IMAGE_OPTIONAL_HEADER64 const DefImageOptionalHdr;
_IMAGE_SECTION_HEADER * GlobalImgSecHdr;
_IMAGE_SECTION_HEADER const NullSectionHdr;
_IMAGE_SYMBOL * ReadSymbolTableT<_IMAGE_SYMBOL>(int,unsigned long,unsigned long,bool);
_IMAGE_SYMBOL const NullSymbol;
_IMAGE_SYMBOL_EX * FetchNextSymbol(_IMAGE_SYMBOL_EX * *);
_IMAGE_SYMBOL_EX * PsymDisasmLookup(DUMPSTATE const *,unsigned __int64,bool,unsigned __int64 *);
_IMAGE_SYMBOL_EX * ReadSymbolTableEx(int,unsigned long,unsigned long,bool,bool);
_IMAGE_SYMBOL_EX * ReadSymbolTableT<_IMAGE_SYMBOL_EX>(int,unsigned long,unsigned long,bool);
__type_info_node __type_info_root_node;
_iobuf * link_wfsopen(unsigned short const *,unsigned short const *,int);
_iobuf * pfileReproResponse;
bool (* DBG_QuerySignature2)(_GUID *);
bool (* FSkipRelocation)(CON *,unsigned short,bool);
bool (* FSkipRelocationWow)(CON *,unsigned short,bool);
bool Arm64IsLongBranch(unsigned long,long);
bool ArmOffsetInRangeThunkType(long,unsigned char,unsigned long);
bool ArmShouldUsePGILongBranch(CON *,CON *);
bool BadFuzzyMatch;
bool CheckAndUpdateLinkerSwitches(IMAGE const *,IMAGE *);
bool CheckHResult(long);
bool CloseLRUFile();
bool ColorTkEmit(IMAGE *,unsigned int);
bool ConvertDName(char const *,char *,unsigned int);
bool CvtCilAnObject(IMAGE *,MOD *,unsigned short const *);
bool DbgAddSecContrib2Mod_i(DBGCONTEXT *,CON *,unsigned long);
bool DbgAddSymbolsMod_i(DBGCONTEXT *,void *,unsigned long,unsigned long);
bool DbgAddTypesMod_i(CTaskQueue *,void const *,unsigned long,bool &);
bool DbgAppend(DBGCONTEXT *,Dbg *,unsigned long,void const *);
bool DbgClear(DBGCONTEXT *,Dbg *);
bool DbgClose(DBGCONTEXT *,Dbg *);
bool DbgCloseCachedMod_i(DBGCONTEXT *,LIB *);
bool DbgCopySrcCore();
bool DbgInjectNatvisCore();
bool DbgOpen(DBGCONTEXT *,DBGTYPE,Dbg * *);
bool DbgOpenMod_i(DBGCONTEXT *,MOD *);
bool DbgQueryNext(DBGCONTEXT *,Dbg *,unsigned long,void *);
bool DbgQuerySignature2(_GUID *);
bool DbgReplace(DBGCONTEXT *,Dbg *,unsigned long,void const *);
bool DbgStQuerySignature2(_GUID *);
bool ErrorReportingCheckOptIn();
bool FAddressInPdata(unsigned long,unsigned long);
bool FArgOnList(NAME_LIST *,ARGUMENT_LIST const *);
bool FArm64SkipRelocation(CON *,unsigned short,bool);
bool FArmSkipRelocation(CON *,unsigned short,bool);
bool FArmThumbCode(unsigned long);
bool FCompareRE(unsigned short const *,unsigned short const *);
bool FComputeMD5Hash(void *,long,unsigned char *);
bool FCorImplictDllImport(IMAGE *,EXTERNAL *,unsigned short const *,unsigned long,bool);
bool FCorSupportLastError(IMAGE *,unsigned short const *);
bool FDefinedAlias(IMAGE const *,EXTERNAL const *);
bool FDefinedOrAlias(EXTERNAL const *);
bool FDelayLoadLib(unsigned short const *);
bool FDisasmBuffer(DUMPSTATE *,unsigned short,bool,int,unsigned __int64,unsigned char const *,unsigned __int64,unsigned __int64,DUMP_DISASM_BYTES_TYPE);
bool FDisasmSection(DUMPSTATE *,unsigned short,_IMAGE_SECTION_HEADER *,unsigned long,unsigned __int64,unsigned char const *,unsigned long);
bool FDiscardedPCON(IMAGE *,CON *);
bool FDupAssemblyModule(unsigned short const *,ARGUMENT_LIST *);
bool FDupFilename(unsigned short const *,ARGUMENT_LIST *,unsigned short *);
bool FDynInitOrDtor(char const *);
bool FEbcSkipRelocation(CON *,unsigned short,bool);
bool FExists(unsigned short const *);
bool FExistsImplib(unsigned short const *,LIB *,CImplib * *);
bool FExportsChanged(EXPINFO *,bool);
bool FFriendAssembly();
bool FGenFileModified(unsigned short const *,unsigned short const *,TIME64 &);
bool FGotVal(ARP const *,unsigned __int64);
bool FGuardCommonPadSymbol(EXTERNAL *);
bool FHasCorMetaSection(int,unsigned long,_IMAGE_FILE_HEADER &);
bool FILImage(int,unsigned short const *,unsigned long,LinkerInputFileInfo *);
bool FIgnoreWarning(unsigned int);
bool FIncrementalLinkSupported(IMAGE *);
bool FIsANSIConvertible(unsigned short const *);
bool FIsASCIIString(unsigned short const *);
bool FIsIncrPtr(void const *);
bool FIsRemoteFile(FI *);
bool FIsSymbolName(DUMPSTATE const *,unsigned long,char const *);
bool FIslandMachine(unsigned long);
bool FLibNamesMatch(unsigned short const *,unsigned short const *);
bool FLoadingImport(int,_IMAGE_FILE_HEADER *,bool,unsigned short const *,char const *);
bool FLsnIbFromRva(DUMPSTATE const *,unsigned long,unsigned short *,unsigned long *);
bool FNextEnmBaseReloc(ENM_BASE_RELOC *,IMAGE *);
bool FNextEnmCon(ENM_CON *);
bool FNextEnmEdge(ENM_EDGE *);
bool FNextEnmEnt(ENM_ENT *);
bool FNextEnmExtList(ENM_EXT_LIST *);
bool FNextEnmGrp(ENM_GRP *);
bool FNextEnmLib(ENM_LIB *);
bool FNextEnmMod(ENM_MOD *);
bool FNextEnmModExt(ENM_MOD_EXT *);
bool FNextEnmNode(ENM_NODE *);
bool FNextEnmSec(ENM_SEC *);
bool FNextEnmSrc(ENM_SRC *);
bool FNextEnmUndefExt(ENM_UNDEF_EXT *);
bool FNoIncrPaddingCoffGroup(GRP *);
bool FNum64FromSz(unsigned short const *,unsigned __int64 *);
bool FNum64Parp(ARP const *,unsigned __int64,unsigned __int64 *);
bool FNumParp(ARP const *,unsigned __int64,unsigned long *);
bool FOrderLTCG();
bool FPOAddFpo(unsigned long,_FPO_DATA *,unsigned long);
bool FPOInit(unsigned long);
bool FPOUpdate(FPOI *);
bool FParseMajorMinorVersion(unsigned short const *,unsigned long &,unsigned long &,bool &);
bool FParseWin32Version(unsigned short const *,unsigned long &,bool &);
bool FPass1DefFile(IMAGE *,unsigned short const *);
bool FPerAppDomainPickAny(COMRefPtr<ICOFFSymRO> &,MOD *);
bool FPextRef(EXTERNAL *);
bool FPrintSymbolName(DUMPSTATE const *,unsigned short const *,unsigned long);
bool FReadHybridCodeAddressRangeTable(DUMPSTATE *);
bool FRelocTargetTLS(unsigned short,unsigned short,unsigned long);
bool FRelocationOverflow(CON *,IObjectContrib *);
bool FRemoveModule(IMAGE *,unsigned short const *);
bool FResFile(int);
bool FReserveMemory(void *,unsigned __int64,unsigned long *);
bool FRvaInsideGrps(unsigned long,GRP *,GRP *);
bool FSameDelayLoadDllsList(NAME_LIST const *);
bool FSameExport(EXTERNAL *,char const *,char const *,char const *,AddExportFlags,unsigned long);
bool FSearchLibPath(unsigned short const *,unsigned short *,unsigned __int64);
bool FSetEntryPoint(IMAGE *);
bool FSkipHybridExportThunk(EXTERNAL const *);
bool FSubsetAlternateNames(IMAGE const *,IMAGE const *);
bool FSymbolHasXfgHash(EXTERNAL *);
bool FTlsGrp(GRP *);
bool FUnwindDataFileOffset(IMAGE *,int,unsigned long,unsigned long *);
bool FUseLinkerHandler(LinkerInputFileInfo *,unsigned short const *,int,unsigned long,unsigned long,bool *);
bool FUselessPCON(IMAGE *,CON *);
bool FUtf8ArgOnList(UTF8_NAME_LIST *,UTF8_ARGUMENT_LIST const *);
bool FValidCorEntry(unsigned int);
bool FValidFileHdr(unsigned short const *,LinkerInputFileHeaderInfo const &);
bool FValidILKFile(unsigned short const *,bool,IMAGE *,_stat64 *,bool);
bool FValidPtrInfo(void *,unsigned __int64,void *,unsigned __int64);
bool FValidSecName(unsigned short const *);
bool FValidSubsystemVersion(unsigned short,_IMAGE_OPTIONAL_HEADER64 &,unsigned short,unsigned short,bool);
bool FVerifyDirectivesPMOD(IMAGE *,MOD *,NAME_LIST *);
bool FWarningAsError(unsigned int);
bool FWithinSection(_IMAGE_SECTION_HEADER const &,unsigned long);
bool FX64SkipRelocation(CON *,unsigned short,bool);
bool FX86SkipRelocation(CON *,unsigned short,bool);
bool FileCompare(unsigned short const *,bool,unsigned short const *,bool);
bool FileRemove(unsigned short const *);
bool GenerateLTCGInfo(ICOFFObj *,Buffer &);
bool GetDecoratedNameFromTkInput(IMAGE *,unsigned int,unsigned short *,unsigned long,unsigned char const * *,unsigned long *,char *,unsigned long);
bool GetTempSectionReloc(IObjectContrib *,unsigned long *,_IMAGE_RELOCATION * *);
bool ICFCompareGrp(CON *,CON *);
bool ICFCompareIcfGrp(ICF_GRP *,ICF_GRP *);
bool InvMapTk(IMAGE *,unsigned int,unsigned int,unsigned int *,MOD * *);
bool IsArchiveFile(int);
bool IsExpObj(unsigned short const *);
bool IsMPXArrayEndLabel(unsigned long,CON *,COMRefPtr<ICOFFSymRW>,unsigned char *);
bool IsMSILSymbol(char const *);
bool IsPogoSupported();
bool IsT2MSymbol(char const *);
bool LoadPchObject(MOD *,char *);
bool MSTAT_Compare(MSTAT const *,MSTAT const *);
bool MergeIDL(Array<void *> &,Array<int> &,bool,unsigned short const *);
bool OpenDbgMod(DBGCONTEXT *,unsigned short const *,unsigned short const *,Mod * *);
bool ParseSymbolTable<_IMAGE_SYMBOL>(int,char const *,char const *,unsigned long);
bool ParseSymbolTable<_IMAGE_SYMBOL_EX>(int,char const *,char const *,unsigned long);
bool ReadFromRvaEH(DUMPSTATE const *,unsigned long,void *,unsigned long);
bool ReadStringTableMapped(int,long,unsigned long *,char * *,unsigned long);
bool RemoveExtFromDefList(MOD *,EXTERNAL *);
bool ShouldProcessReproInput();
bool ShowWarning(DBGCONTEXT *,unsigned short const *,unsigned int,...);
bool TkFromSz(char const *,unsigned int &);
bool TkFromSzSymbol(char const *,MOD *,unsigned int *,unsigned long *);
bool ValidateFileMatching(ARGUMENT_LIST *,IMAGE *);
bool bv_setAndReadBit(void *,unsigned int);
bool fDidInitRgci;
bool fDidMachineDependentInit;
bool fErr;
bool fExceptionsOff;
bool fINCR;
bool fImageMappedAsFile;
bool fIncrDbFile;
bool fIncrSwitchUsed;
bool fIncrSwitchValue;
bool fMD5DefFilename;
bool fMultipleDefinitions;
bool fNoBaseRelocs;
bool fNoLogo;
bool fOpenedOutFilename;
bool fPdb;
bool fReproducible;
bool fSkipIncrChecks;
bool fTest;
bool fUnInitCOM;
bool fUnInitWarbird;
bool fWarningIsError;
bool fWbrdReportErrors;
bool fWbrdTestEncrypt;
bool g_fArm64HazardFree;
bool g_fArm64SimulatorMode;
bool g_fArmHazardFree;
bool g_fArmSimulatorMode;
bool g_fClearLinkRepro;
bool g_fClrNetCore;
bool g_fCvtResFoldDups;
bool g_fDidPass1DefFile;
bool g_fEarlyTypeMergeDone;
bool g_fEmbedSPD;
bool g_fFastFail;
bool g_fForceNoLinkRepro;
bool g_fForceNoOnfailRepro;
bool g_fForcePGORepro;
bool g_fForceWinMDVersion12;
bool g_fIncrClean;
bool g_fIncrStress;
bool g_fLBR;
bool g_fLTCG;
bool g_fLTCGStatus;
bool g_fLtcgForcedOff;
bool g_fLtcgIncremental;
bool g_fLtcgIncrementalRebuild;
bool g_fLtcgOutCommandLine;
bool g_fMPX;
bool g_fObjCoffInitialized;
bool g_fPGI;
bool g_fPGO;
bool g_fPGO2;
bool g_fPGU;
bool g_fPdbDbgST;
bool g_fPdbInProc;
bool g_fPrefetch;
bool g_fPrependCDecoration;
bool g_fPrescanSwitches;
bool g_fProcessingWholeArchiveLib;
bool g_fReportNonComdatGuardFunc;
bool g_fRetryOnFileOpenFailure;
bool g_fRunBelow4GB;
bool g_fSEHEmpty;
bool g_fSawArm32Mod;
bool g_fSawCIL;
bool g_fSawCORMeta;
bool g_fSawILImage;
bool g_fSawWinRTMeta;
bool g_fSkipCDecoration;
bool g_fStaticLibChanged;
bool g_fTmdTypeFilter;
bool g_fUpdateManifest;
bool g_fUseUnsafeThumbDelayThunk;
bool g_fVerbose;
bool g_fWarnZwObjInStaticLib;
bool g_fWowA64;
bool g_fWowA64LinkerGeneratedLib;
calltype * ToolType;
char * * FuzzySearchVariants(IMAGE *,char const *,char,int *,bool);
char * Dbflags;
char * EntryPointName;
char * FuzzyLookupSz(unsigned short const *,char const *,IMAGE *,bool,char,bool,bool,bool);
char * ReadStringTable(int,unsigned short const *,long,unsigned long *);
char * ShortName;
char * Strdup(char const *);
char * StringTable;
char * SzConvertCppNameToHybrid(char const *,bool);
char * SzDup(char const *);
char * SzDupUtf8(char const *);
char * SzDupWsz(unsigned short const *);
char * SzEntryConv(char const *,bool);
char * SzFromFo(int,unsigned long);
char * SzFromRva(DUMPSTATE const *,int,unsigned long);
char * SzObjectFromSzDyn(char const *);
char * SzObjectFromSzEdge(char const *,bool);
char * SzT2M(char const *,char *,unsigned __int64);
char * SzTrimFile(char const *);
char * SzUndecorateNameOnly(char const *);
char * SzUtf8Dup(unsigned short const *);
char * getStringHelper(char *,char const *,char const *,int);
char * strdup_TCE(char const *);
char const * GetExportInternalSymbolName(EXTERNAL *,ST *);
char const * GetLTCGHybridGuest(EXTERNAL *,__MIDL___MIDL_itf_objint_0000_0010_0001);
char const * GetPushThunkForExternal(EXTERNAL *);
char const * SzEntryConvToDot(char const *);
char const * SzObjSectionName(char const *,char const *);
char const * SzPrependThunk(bool,char const *);
char const * SzSym<_IMAGE_SYMBOL>(_IMAGE_SYMBOL const *,char const *,char * const);
char const * SzSym<_IMAGE_SYMBOL_EX>(_IMAGE_SYMBOL_EX const *,char const *,char * const);
char const * SzSymbol(CON *,ICOFFSymRW *);
char const * SzUMNFromMN(char const *,unsigned int);
char g_cCDecorationChar;
int (* gpfn_NameMapOpen)(PDB *,int,NameMap * *);
int (* gpfn_PDBExportValidateInterface)(unsigned long);
int (* gpfn_PDBOpen2W)(unsigned short const *,char const *,long *,unsigned short *,unsigned __int64,PDB * *);
int (* gpfn_PDBOpenEx2W)(unsigned short const *,char const *,long,long *,unsigned short *,unsigned __int64,PDB * *);
int (* gpfn_PDBOpenValidate4)(unsigned short const *,char const *,_GUID const *,unsigned long,unsigned long,long *,unsigned short *,unsigned __int64,PDB * *);
int (* gpfn_PDBOpenValidate5)(unsigned short const *,unsigned short const *,void *,int (*(*)(void *,POVC))(),long *,unsigned short *,unsigned __int64,PDB * *);
int (* gpfn_PDBRPC)();
int (* gpfn_PDBSetServerFastFailMode)();
int (* gpfn_in_proc_NameMapOpen)(PDB *,int,NameMap * *);
int (* gpfn_in_proc_PDBOpenValidate5)(unsigned short const *,unsigned short const *,void *,int (*(*)(void *,POVC))(),long *,unsigned short *,unsigned __int64,PDB * *);
int (*PfnDumpQueryCallback(void *,POVC))();
int BaseRelocAddrCompare(void const *,void const *);
int BaseRelocFindContainsRva(void const *,void const *);
int CleanUp(IMAGE * *,unsigned long *);
int CmpPextDynValueReloc(void *,void const *,void const *);
int Compare(void const *,void const *);
int CompareExternalAddr(void const *,void const *);
int CompareExternalModName(void const *,void const *);
int CompareExternalName(void const *,void const *);
int ComparePsecPsecName(void const *,void const *);
int ComparePsym(void const *,void const *);
int ComparePtrValues(void const *,void const *);
int CompareW(void const *,void const *);
int ControlCHandler(unsigned long);
int CvtCilArchive(IMAGE *,ARGUMENT_LIST *);
int CvtCilMain(int,unsigned short * * const);
int CvtCilObject(IMAGE *,ARGUMENT_LIST *);
int DefLibMain(IMAGE *);
int DelayLoadExceptionFilter(unsigned long,_EXCEPTION_POINTERS *,bool);
int DumperMain(int,unsigned short * * const);
int EditorMain(int,unsigned short * * const);
int FCalculateSHA256(unsigned char *,unsigned long,unsigned char * *,unsigned long *);
int FCompareName(unsigned short * *,void *);
int FRvaSourceCmp(void const *,void const *);
int FileDuplicate(int);
int FileOpen(unsigned short const *,FileOpenFlags,int,unsigned long);
int FileReadHandle;
int FuzzyCompare(void const *,void const *);
int FuzzyCompareInLib(void const *,void const *);
int HelperMain(int,unsigned short * * const);
int HybridPushThunkObjMain(int,unsigned short * * const);
int IncrBuildImage(IMAGE * *,unsigned long *);
int InfoClose();
int InfoPrintf(unsigned short const *,...);
int InfoPrintfA(char const *,...);
int InfoPutc(unsigned short);
int InfoPuts(unsigned short const *);
int InfoPutsA(char const *);
int LibrarianMain(int,unsigned short * * const);
int LinkExceptionFilter(unsigned long,_EXCEPTION_POINTERS *,_EXCEPTION_RECORD *,_CONTEXT *,bool,bool);
int LinkerMain(int,unsigned short * * const);
int MemCoordinator(unsigned __int64);
int PgoAllowSwitchCmp(void const *,void const *);
int RVACmp(void const *,void const *);
int SXDataGTCmpPcon(void const *,void const *);
int SXDataLTCmpRva(void const *,void const *);
int SpawnFullBuild(bool,unsigned short const *,bool,bool,bool,unsigned short const *);
int StdOutFlush();
int StdOutPrintf(unsigned short const *,...);
int StdOutPutc(unsigned short);
int StdOutPuts(unsigned short const *);
int StdOutVprintf(unsigned short const *,char *);
int TmdTypeFilter(void *,unsigned short const *);
int UpdateCoffTimeDateStamp(unsigned short const *,unsigned long *);
int cmpHybridCodeAddrRange(void const *,void const *);
int cmpPcconstPcconst(void const *,void const *);
int cmpPcontribPcontrib(void const *,void const *);
int cmpPfixupPfixupRva(void const *,void const *);
int cmpPmodOffCompare(void const *,void const *);
int cmpPrvaPfixup(void const *,void const *);
int cmpifpo(void const *,void const *);
int comparePhase(void const *,void const *);
int link_fclose(_iobuf *);
int link_fwprintf(_iobuf *,unsigned short const *,...);
int link_vfwprintf(_iobuf *,unsigned short const *,char *);
int swprintf_s<512>(unsigned short (&)[512],unsigned short const *,...);
int wmainInner(int,unsigned short * * const);
long (* DBG_QuerySizeFpo)();
long (* g_pfnCloseAlg)(void *,unsigned long);
long (* g_pfnCreateHash)(void *,void * *,unsigned char *,unsigned long,unsigned char *,unsigned long,unsigned long);
long (* g_pfnDestroyHash)(void *);
long (* g_pfnFinishHash)(void *,unsigned char *,unsigned long,unsigned long);
long (* g_pfnGetProp)(void *,unsigned short const *,unsigned char *,unsigned long,unsigned long *,unsigned long);
long (* g_pfnHashData)(void *,unsigned char *,unsigned long,unsigned long);
long (* g_pfnOpenAlg)(void * *,unsigned short const *,unsigned short const *,unsigned long);
long AttachMarshaling(IMetaDataEmit *,unsigned int,unsigned char const *,unsigned long,bool);
long CorSigUncompressData(unsigned char const *,unsigned long,unsigned long *,unsigned long *);
long CreateMarshalAsMemberRef(IMetaDataEmit *,unsigned char const *,unsigned long,bool);
long DbgQuerySizeFpo();
long DbgStQuerySizeFpo();
long FileSeek(int,long,int);
long GenerateDecoratedName(unsigned int,IMetaDataImport *,char *,unsigned long,GDNCallingConvention *,unsigned long,void *,unsigned int);
long GetAssemblyRefForFacadeMSCORLIB(IMetaDataEmit *,unsigned int *);
long GetAssemblyRefForInteropServices(IMetaDataEmit *,unsigned int *,bool);
long GetAssemblyRefForMSCORLIB(IMetaDataEmit *,unsigned int *,bool);
long GetAssemblyRefFromName(IMetaDataEmit *,unsigned int *,unsigned short const *);
long LThumbExtractOffsetForSSPAN12P8N_MEM(unsigned long);
long LThumbExtractOffsetForSSPAN9_MEM(unsigned long);
long LThumbExtractOffsetForSSPAN9_MEM64(unsigned long);
long SHA256(unsigned char *,unsigned long,unsigned char * *,unsigned long *);
long SHA256Init();
long SzRefFuncToken(ST *,EXTERNAL *,MOD *,ILinkDataRO * *);
long WatsonExceptionFilter(_EXCEPTION_POINTERS *);
long WriteAuxSym<IMAGE_FILE>(IFileIO *,ICOFFAuxSym *,long,unsigned long,unsigned long);
long WriteCoffObj(IFileIO *,IObjFile2 *,ICOFFObj *,unsigned long,bool,unsigned long,SectionInfo *);
long WriteCoffSections(IFileIO *,long,long,ICOFFObj *,StringTableUnique *,unsigned long *,unsigned long *);
long WriteCoffSymbolTableT<IMAGE_FILE>(IFileIO *,long,ICOFFObj *,StringTableUnique *,unsigned long *,unsigned long *);
long WriteCoffSymbolTableT<IMAGE_FILE_EX>(IFileIO *,long,ICOFFObj *,StringTableUnique *,unsigned long *,unsigned long *);
long WriteExtraSection(IFileIO *,long,long,SectionInfo *,unsigned long *);
long WriteLineNumberAuxSym<IMAGE_FILE>(IFileIO *,ICOFFAuxSym *,long,unsigned long);
long WriteWeakAuxSym<IMAGE_FILE>(IFileIO *,ICOFFAuxSym *,long,unsigned long);
long WriteWeakAuxSym<IMAGE_FILE_EX>(IFileIO *,ICOFFAuxSym *,long,unsigned long);
long _CountBytesOfOneArg(unsigned char const *,unsigned long *);
long _GetFixedSigOfVarArg(unsigned char const *,unsigned long,CQuickBytes *,unsigned long *);
long link_ftell(_iobuf *);
phmap::flat_hash_map<CON *,Array<CON *> *,PHMapKeyHasher<void *>,phmap::container_internal::HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,Array<CON *> *> > > * CollectAssociativeComdats(MOD *);
phmap::flat_hash_map<CON *,COFF_STATIC_SYM_REF *,PHMapKeyHasher<void *>,phmap::container_internal::HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,COFF_STATIC_SYM_REF *> > > g_mpHybridFuncMapPconToStaticRefSym;
phmap::flat_hash_map<CON *,EXTERNAL *,PHMapKeyHasher<void *>,phmap::container_internal::HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,EXTERNAL *> > > g_mpHybridFuncMapPconToPext;
phmap::flat_hash_map<CON *,MOD *,PHMapKeyHasher<void *>,phmap::container_internal::HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,MOD *> > > * g_pmpCILPconPmod;
phmap::flat_hash_map<CON *,ResolvedSym,PHMapKeyHasher<void *>,phmap::container_internal::HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,ResolvedSym> > > g_mpHybridFuncMapPconToResolvedSym;
phmap::flat_hash_map<CON *,char const *,PHMapKeyHasher<void *>,phmap::container_internal::HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,char const *> > > * g_pmpPconDllRename;
phmap::flat_hash_map<CON *,char const *,PHMapKeyHasher<void *>,phmap::container_internal::HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,char const *> > > g_mpPconSzSym;
phmap::flat_hash_map<CON *,unsigned long,PHMapKeyHasher<void *>,phmap::container_internal::HashEq<CON *,void>::Eq,std::allocator<std::pair<CON * const,unsigned long> > > g_mpHybridFuncStatPconToOffset;
phmap::flat_hash_map<EXTERNAL *,COFF_STATIC_SYM_REF *,PHMapKeyHasher<void *>,phmap::container_internal::HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,COFF_STATIC_SYM_REF *> > > g_mpHybridFuncMapPextToStaticRefSym;
phmap::flat_hash_map<EXTERNAL *,EXTERNAL *,PHMapKeyHasher<void *>,phmap::container_internal::HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,EXTERNAL *> > > g_mpHybridFuncMapPextToPext;
phmap::flat_hash_map<EXTERNAL *,EXTERNAL *,PHMapKeyHasher<void *>,phmap::container_internal::HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,EXTERNAL *> > > g_mpMPextUMPext;
phmap::flat_hash_map<EXTERNAL *,MOD *,PHMapKeyHasher<void *>,phmap::container_internal::HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,MOD *> > > * g_pmpCommonMod;
phmap::flat_hash_map<EXTERNAL *,ModExternalList *,PHMapKeyHasher<void *>,phmap::container_internal::HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,ModExternalList *> > > g_mpHybridNativeRefToGuestRef;
phmap::flat_hash_map<EXTERNAL *,ModICallPushThunk,PHMapKeyHasher<void *>,phmap::container_internal::HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,ModICallPushThunk> > > g_mpHybridFuncToModICallPushThunk;
phmap::flat_hash_map<EXTERNAL *,ResolvedSym,PHMapKeyHasher<void *>,phmap::container_internal::HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,ResolvedSym> > > g_mpHybridFuncMapPextToResolvedSym;
phmap::flat_hash_map<EXTERNAL *,TKMOD,PHMapKeyHasher<void *>,phmap::container_internal::HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,TKMOD> > > g_mppexttkmodComdat;
phmap::flat_hash_map<EXTERNAL *,unsigned __int64,PHMapKeyHasher<void *>,phmap::container_internal::HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,unsigned __int64> > > g_mpDllImportPextIsym;
phmap::flat_hash_map<EXTERNAL *,unsigned long,PHMapKeyHasher<void *>,phmap::container_internal::HashEq<EXTERNAL *,void>::Eq,std::allocator<std::pair<EXTERNAL * const,unsigned long> > > g_mpHybridFuncMapPextToFlag;
phmap::flat_hash_map<LINK_FILE_ID,MOD *,LinkFileIDHasher,phmap::EqualTo<LINK_FILE_ID>,std::allocator<std::pair<LINK_FILE_ID const ,MOD *> > > g_mpCmdLineObjFileID;
phmap::flat_hash_map<MOD *,Array<CON_VOLATILE_META *> *,PHMapKeyHasher<void *>,phmap::container_internal::HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,Array<CON_VOLATILE_META *> *> > > * g_pmpModCoffVolatileMetaInfo;
phmap::flat_hash_map<MOD *,Array<MODSTATICDEF *> *,PHMapKeyHasher<void *>,phmap::container_internal::HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,Array<MODSTATICDEF *> *> > > * s_pmpModStaticDefs;
phmap::flat_hash_map<MOD *,MOD *,PHMapKeyHasher<void *>,phmap::container_internal::HashEq<MOD *,void>::Eq,std::allocator<std::pair<MOD * const,MOD *> > > g_mpLibPmodMap;
phmap::flat_hash_map<SrcHeaderW *,unsigned char *,PHMapKeyHasher<void *>,phmap::container_internal::HashEq<SrcHeaderW *,void>::Eq,std::allocator<std::pair<SrcHeaderW * const,unsigned char *> > > g_mpSrcHdrToRaw;
phmap::flat_hash_map<unsigned long,Buffer *,PHMapKeyHasher<unsigned long>,phmap::EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,Buffer *> > > g_mpniCoffSectToBufPDBStream;
phmap::flat_hash_map<unsigned long,unsigned long,PHMapKeyHasher<unsigned long>,phmap::EqualTo<unsigned long>,std::allocator<std::pair<unsigned long const ,unsigned long> > > g_mpniCoffSectToPDBStream;
phmap::flat_hash_set<CON *,PHMapKeyHasher<void *>,phmap::container_internal::HashEq<CON *,void>::Eq,std::allocator<CON *> > * g_psetPopThunks;
phmap::flat_hash_set<CON *,PHMapKeyHasher<void *>,phmap::container_internal::HashEq<CON *,void>::Eq,std::allocator<CON *> > * g_psetPushThunks;
phmap::flat_hash_set<LONG_BRANCH_REGION *,PHMapKeyHasher<void *>,phmap::container_internal::HashEq<LONG_BRANCH_REGION *,void>::Eq,std::allocator<LONG_BRANCH_REGION *> > g_setLBRsForIncrEmit;
std::tuple<COMRefPtr<IObjectContrib>,COMRefPtr<ICOFFSymRO>,_IMAGE_RELOCATION *> LookupRelocationInDelayLoadPCON(CON *,unsigned long);
tagPGDOBJECTRECORD * PPGDObjRecFromSz(unsigned short const *);
unsigned __int64 AllocSizeAdd(unsigned __int64,unsigned __int64);
unsigned __int64 CbDisassemble(DIS *,DIS *,unsigned __int64,unsigned __int64,unsigned char const *,unsigned __int64,bool,bool);
unsigned __int64 CchAddr(DIS const *,unsigned __int64,unsigned short *,unsigned __int64,unsigned __int64 *);
unsigned __int64 CchAddrCoff(DUMPSTATE const *,unsigned __int64,unsigned short *,unsigned __int64,unsigned __int64 *);
unsigned __int64 CchAddrGsi(DUMPSTATE const *,unsigned __int64,unsigned short *,unsigned __int64,unsigned __int64 *);
unsigned __int64 CchAddrGsi16(DUMPSTATE const *,unsigned __int64,unsigned short *,unsigned __int64,unsigned __int64 *);
unsigned __int64 CchFixup(DIS const *,unsigned __int64,unsigned __int64,unsigned short *,unsigned __int64,unsigned __int64 *);
unsigned __int64 CchFixupObject(DIS const *,unsigned __int64,unsigned __int64,unsigned short *,unsigned __int64,unsigned __int64 *);
unsigned __int64 CchNoFixup32(DIS const *,unsigned __int64,unsigned __int64,unsigned short *,unsigned __int64,unsigned __int64 *);
unsigned __int64 CchNoFixup64(DIS const *,unsigned __int64,unsigned __int64,unsigned short *,unsigned __int64,unsigned __int64 *);
unsigned __int64 CchRegrel(DIS const *,DIS::REGA,unsigned long,unsigned short *,unsigned __int64,unsigned long *);
unsigned __int64 CfixupArm64FromRgimgreloc(_IMAGE_RELOCATION const *,unsigned __int64);
unsigned __int64 CfixupArm64FromRgxfixup(XFIXUP const *,unsigned __int64,unsigned long,unsigned long);
unsigned __int64 CfixupArmFromRgimgreloc(_IMAGE_RELOCATION const *,unsigned __int64);
unsigned __int64 CfixupArmFromRgxfixup(XFIXUP const *,unsigned __int64,unsigned long,unsigned long);
unsigned __int64 CfixupMipsFromRgxfixup(XFIXUP const *,unsigned __int64,unsigned long,unsigned long);
unsigned __int64 CfixupSh4FromRgxfixup(XFIXUP const *,unsigned __int64,unsigned long,unsigned long);
unsigned __int64 CfixupX64FromRgimgreloc(_IMAGE_RELOCATION const *,unsigned __int64);
unsigned __int64 CfixupX64FromRgxfixup(XFIXUP const *,unsigned __int64,unsigned long,unsigned long);
unsigned __int64 CfixupX86FromRgimgreloc(_IMAGE_RELOCATION const *,unsigned __int64);
unsigned __int64 CfixupX86FromRgxfixup(XFIXUP const *,unsigned __int64,unsigned long,unsigned long);
unsigned __int64 DloadSrwLock;
unsigned __int64 DwlThumbEncodeMov32Immediate(unsigned __int64,unsigned long);
unsigned __int64 FileWrite(int,void const *,unsigned __int64);
unsigned __int64 GetSymbolXfgHash(EXTERNAL *);
unsigned __int64 IbAppendBlk(BLK *,void const *,unsigned __int64);
unsigned __int64 IbAppendBlkZ(BLK *,unsigned __int64);
unsigned __int64 IbAppendStr(BLK *,char const *,bool);
unsigned __int64 IbAppendStr(BLK *,unsigned short const *,bool);
unsigned __int64 SPDIndexFromStr(unsigned short const *,bool);
unsigned __int64 cbRoundPageSize(unsigned __int64);
unsigned __int64 cszEcPdb;
unsigned __int64 g_cbExternal;
unsigned __int64 g_cbILKMax;
unsigned __int64 g_qwSPDIndex;
unsigned __int64 g_uPdbQSize;
unsigned __int64 link_fread(void *,unsigned __int64,unsigned __int64,_iobuf *);
unsigned char * Arm64LongBranchThunk;
unsigned char * PbMappedRegion(int,unsigned long,unsigned long);
unsigned char * rgbMD5DefFilename;
unsigned char DloadGetSRWLockFunctionPointers();
unsigned char GetLDRScale(unsigned long);
unsigned char OAStub;
unsigned char const * const DosHeaderArray;
unsigned int * g_mpisymtkExternal;
unsigned int ComDefineMethod(IMAGE *,unsigned short const *,unsigned char const *,unsigned long,unsigned long);
unsigned int CreateUnmanagedEntry(IMAGE *,char const *);
unsigned int HashString(char const *,unsigned __int64);
unsigned int TkEmitFromLinkerDefTk(unsigned int);
unsigned int TkEmitFromPTkMod(TKMOD const *);
unsigned int TkFacadeMscorlib(bool);
unsigned int TkFromCoffSym<MOD,ICOFFSymRO>(MOD *,ICOFFSymRO *);
unsigned int TkFromCoffSym<MOD,ICOFFSymRW>(MOD *,ICOFFSymRW *);
unsigned int TkMSVC();
unsigned int TkMscorlib(bool);
unsigned int const * const g_tkCorEncodeToken;
unsigned int g_GuardCompatLevel;
unsigned int g_tkEntry;
unsigned long ( IMAGE::* CbHdr)(unsigned long *);
unsigned long (* DBG_QueryAge)();
unsigned long (* gpfn_SigForPbCb)(unsigned char *,unsigned __int64,unsigned long);
unsigned long (* pfnCbAdjustForDynamicBase)(IMAGE *,unsigned long,unsigned long,_IMAGE_RELOCATION *,unsigned long);
unsigned long (* pfnCbAdjustForDynamicBaseWow)(IMAGE *,unsigned long,unsigned long,_IMAGE_RELOCATION *,unsigned long);
unsigned long (* pfnDwAdjustSymValue)(CON *,unsigned long,bool);
unsigned long * g_rgMemberStart;
unsigned long AdditionalFlagsFromName(unsigned short const *);
unsigned long AlignFlag(unsigned long);
unsigned long BuildLinkerMember(IMAGE *,__int64,unsigned long);
unsigned long CArmBaseRelocs(IMAGE *,CON *,COMRefPtr<ICOFFSymTabRO> &,unsigned long,_IMAGE_RELOCATION *,unsigned long,unsigned long,unsigned long &);
unsigned long CConOrderLTCG(IMAGE *,unsigned long);
unsigned long CConOrderPGO2(unsigned long);
unsigned long CIncludes(LEXT *);
unsigned long CX64BaseRelocs(IMAGE *,CON *,COMRefPtr<ICOFFSymTabRO> &,unsigned long,_IMAGE_RELOCATION *,unsigned long,unsigned long,unsigned long &);
unsigned long CbArm64AdjustForDynamicBase(IMAGE *,unsigned long,unsigned long,_IMAGE_RELOCATION *,unsigned long);
unsigned long CbArmAdjustForDynamicBase(IMAGE *,unsigned long,unsigned long,_IMAGE_RELOCATION *,unsigned long);
unsigned long CbArmOrArm64FuncSizeFromPdata(MOD *,COMRefPtr<ICOFFSymTabRO> &,unsigned long,unsigned long,bool);
unsigned long CbBranchThunk(unsigned long);
unsigned long CbMinBranchLim(unsigned long);
unsigned long CbX64AdjustForDynamicBase(IMAGE *,unsigned long,unsigned long,_IMAGE_RELOCATION *,unsigned long);
unsigned long CbX86AdjustForDynamicBase(IMAGE *,unsigned long,unsigned long,_IMAGE_RELOCATION *,unsigned long);
unsigned long CconOrderFile(ST *,IMAGE *,unsigned short const *,unsigned long,bool);
unsigned long ComPrintUndefinedTokens(IMAGE *);
unsigned long CorSigCompressData(unsigned long,void *);
unsigned long CorSigCompressToken(unsigned int,void *);
unsigned long CorSigUncompressBigData(unsigned char const * &);
unsigned long CorSigUncompressData(unsigned char const *,unsigned long *);
unsigned long CorSigUncompressToken(unsigned char const *,unsigned int *);
unsigned long CountExternTable(ST *,unsigned long *,unsigned long *,unsigned long *);
unsigned long CountUniqueTargets(IMAGE *,unsigned long,unsigned long,unsigned long *,unsigned long);
unsigned long DbgQueryAge();
unsigned long DbgStQueryAge();
unsigned long DbgWorker(void *);
unsigned long DloadSectionCommitPermanent;
unsigned long DloadSectionLockCount;
unsigned long DloadSectionOldProtection;
unsigned long DwArmAdjustSymValue(CON *,unsigned long,bool);
unsigned long DwMarkConOrdered(CON *,unsigned long);
unsigned long DwThumbEncodeOffsetFor12P8N_MEM(unsigned long,__int64,bool &);
unsigned long DwThumbExtractMov32Immediate(unsigned __int64);
unsigned long EliminateLongBranch(IMAGE *,unsigned long,unsigned long);
unsigned long FileLength(int);
unsigned long FileTell(int);
unsigned long GetRelocRvaTarget(CON *,COMRefPtr<ICOFFSymTabRW> &,_IMAGE_RELOCATION *);
unsigned long LargestOrdinal;
unsigned long LayoutCode(IMAGE *,unsigned long,unsigned long,unsigned long *,unsigned long *);
unsigned long LookupLongName(StringTableUnique *,char const *);
unsigned long MemberSeekBase;
unsigned long MemberSize;
unsigned long RvaAlign(unsigned long,unsigned long);
unsigned long RvaArmThunk(IMAGE *,IMAGE::ThunkType,unsigned int,unsigned long,unsigned long,CON *,bool,int,unsigned __int64,bool,unsigned short,bool,unsigned long,bool,unsigned long);
unsigned long RvaMapToSrc(DUMPSTATE const *,unsigned long);
unsigned long SmallestOrdinal;
unsigned long UndefinedSymbols;
unsigned long UpdateBaseRelocs(IMAGE *);
unsigned long VerifyImageSize;
unsigned long WriteModuleProfileData(IMAGE *,MOD *);
unsigned long cGlobalRgciCon;
unsigned long cdwLBrBVLen;
unsigned long cfixpag;
unsigned long const DosHeaderSize;
unsigned long cxfixupCur;
unsigned long fCtrlCSignal;
unsigned long g_cCFGErrors;
unsigned long g_cFixupError;
unsigned long g_cICFIterMax;
unsigned long g_cIntraFuncLBRs;
unsigned long g_cLtcgArgsMac;
unsigned long g_cLtcgArgsMax;
unsigned long g_cbExeMapView;
unsigned long g_cbHash;
unsigned long g_cbLayoutPageSize;
unsigned long g_cbObj;
unsigned long g_cbTextBss;
unsigned long g_cntTmd;
unsigned long g_dwMainThreadId;
unsigned long g_uPdbModCloseThreads;
unsigned long grfAlign(unsigned long);
unsigned long rvaGp;
unsigned long rvaGpMax;
unsigned short * (* gpfn_SzCanonFilename)(unsigned short *);
unsigned short * * argv_LTCG(IMAGE *,unsigned short const *);
unsigned short * * g_rgszLtcgArgs;
unsigned short * * savArgv;
unsigned short * CorGetErrorString(long,bool);
unsigned short * DeterminePDBFilename(IMAGE *,unsigned short const *,unsigned short const *);
unsigned short * ExpandMemberName(char const *,unsigned char *);
unsigned short * FormTokenFromDirective(unsigned short *,unsigned short const *,unsigned short const *,unsigned short *);
unsigned short * PvAlloc<unsigned short>(unsigned __int64);
unsigned short * ReadDefinitionFile();
unsigned short * Strdup(unsigned short const *);
unsigned short * SzCanonFileName(unsigned short const *);
unsigned short * SzDup(unsigned short const *);
unsigned short * SzGenIncrDbFilename(IMAGE *);
unsigned short * SzGetArgument(unsigned short *,bool *);
unsigned short * SzLongFileName(unsigned short const *);
unsigned short * SzMachineForCvt(unsigned long);
unsigned short * SzModifyFilename(unsigned short const *,unsigned short const *);
unsigned short * SzOutputSymbolName(char const *,bool);
unsigned short * SzRefFunc(ST *,EXTERNAL *,MOD *);
unsigned short * SzSearchLibEnv(unsigned short const *,unsigned short const *,bool *);
unsigned short * WszDupSz(char const *);
unsigned short * WszDupUtf8(char const *);
unsigned short * WszDupUtf8(char const *,Allocator &);
unsigned short * _find(unsigned short const *);
unsigned short * g_szAltBE;
unsigned short * g_szIncrCmdLine;
unsigned short * g_szOnfailReproDir;
unsigned short * g_szPGD;
unsigned short * g_szSPD;
unsigned short * g_szSPDIdStr;
unsigned short * g_szSPDIn;
unsigned short * g_szWinMDVersion;
unsigned short * szCombinedFilenames;
unsigned short * szExportFilename;
unsigned short * szIncrDbFilename;
unsigned short * szMidl;
unsigned short * szMt;
unsigned short * szPdbAltPath;
unsigned short * szPdbDll;
unsigned short * szPdbFilename;
unsigned short * szRc;
unsigned short * szReproDir;
unsigned short * szWbrdCfgFilename;
unsigned short * szWbrdDllFilename;
unsigned short * szWbrdLogFilename;
unsigned short * szWbrdSchemaFilename;
unsigned short * szWbrdSummaryFilename;
unsigned short * wcschr(unsigned short *,unsigned short);
unsigned short CvMachine(unsigned short);
unsigned short GetRelocationTypeSize(unsigned short,unsigned short);
unsigned short IsDefinitionKeyword(unsigned short const *);
unsigned short ParseAnExport(IMAGE *,unsigned short *);
unsigned short ParseDefExports(IMAGE *);
unsigned short ParseDefNameOrLibrary(IMAGE *,bool);
unsigned short ParseDefSections(unsigned short const *);
unsigned short ParseSizes(unsigned short const *,unsigned short const *);
unsigned short RvaRelocType(IMAGE *);
unsigned short SkipToNextKeyword();
unsigned short WExtraFromScType(unsigned char,unsigned short);
unsigned short const * (* SzRelocationType)(unsigned short,unsigned short *,bool *);
unsigned short const * (* SzRelocationTypeWow)(unsigned short,unsigned short *,bool *);
unsigned short const * DbgGetPDBErrorMsg(long);
unsigned short const * GetErrorFormatString(unsigned int);
unsigned short const * SzArm64RelocationType(unsigned short,unsigned short *,bool *);
unsigned short const * SzArmRelocationType(unsigned short,unsigned short *,bool *);
unsigned short const * SzBE();
unsigned short const * SzClass(_IMAGE_SYMBOL_EX *);
unsigned short const * SzClrImageType(CLRIMAGE_TYPE);
unsigned short const * SzClrImageTypeSwitch(CLRIMAGE_TYPE);
unsigned short const * SzCoffMachine(unsigned short);
unsigned short const * SzEbcRelocationType(unsigned short,unsigned short *,bool *);
unsigned short const * SzErrorFromEc(PDBErrors,unsigned short *,unsigned __int64);
unsigned short const * SzFindRenamedDll(IMAGE *,unsigned short const *,bool &);
unsigned short const * SzMachine(unsigned long);
unsigned short const * SzMapAssemblyModule(unsigned short const *);
unsigned short const * SzMapSourceFilename(unsigned short const *,unsigned short *,unsigned __int64);
unsigned short const * SzMipsRelocationType(unsigned short,unsigned short *,bool *);
unsigned short const * SzPDBDLL();
unsigned short const * SzSh4RelocationType(unsigned short,unsigned short *,bool *);
unsigned short const * SzSubsystemOption(unsigned short);
unsigned short const * SzX64RelocationType(unsigned short,unsigned short *,bool *);
unsigned short const * SzX86RelocationType(unsigned short,unsigned short *,bool *);
unsigned short const * const DefFilename;
unsigned short const * const Delimiters;
unsigned short const * const ImplibFilename;
unsigned short const * const OutFilename;
unsigned short const * const ToolName;
unsigned short const * const g_szFileEdata;
unsigned short const * const g_szIPDBFilename;
unsigned short const * const g_szLTCGMetaOutSuffix;
unsigned short const * const g_szLTCGOutFilename;
unsigned short const * const g_szManifestResConvertedObj;
unsigned short const * const g_szOdrIgnoreFilename;
unsigned short const * const g_szReproTarget;
unsigned short const * const szInfoFilename;
unsigned short const * const szPhase;
unsigned short const * const szWinMDFilename;
unsigned short wMachineFromSz(unsigned short const *);
void ( IMAGE::* WriteHeader)(int);
void ( IMAGE::* WriteSecHeader)(int,SEC *,_IMAGE_SECTION_HEADER *);
void (* ApplyFixups)(CON *,_IMAGE_RELOCATION *,unsigned long,unsigned char *,COMRefPtr<ICOFFSymTabRW> &,IMAGE *,unsigned long,unsigned long const *);
void (* ApplyFixupsWow)(CON *,_IMAGE_RELOCATION *,unsigned long,unsigned char *,COMRefPtr<ICOFFSymTabRW> &,IMAGE *,unsigned long,unsigned long const *);
void (* DBG_AddLinesMod)(unsigned short const *,MOD *,unsigned short,unsigned long,unsigned long,unsigned long,unsigned long,void *,unsigned long);
void (* DBG_AddLinkInfo)(IMAGE *);
void (* DBG_AddPublicDBI)(char const *,bool,unsigned short,unsigned long);
void (* DBG_AddSecContrib2Mod)(CON *,MOD *,unsigned long);
void (* DBG_AddSecContribMod)(CON *,MOD *);
void (* DBG_AddSecDBI)(unsigned short,unsigned short,unsigned long,unsigned long);
void (* DBG_AddSymbols2Mod)(void *,unsigned long,MOD *,unsigned long);
void (* DBG_AddSymbolsMod)(void *,unsigned long,MOD *);
void (* DBG_AddThunkMapDBI)(unsigned long *,unsigned long,unsigned long,unsigned short,unsigned long,SO *,unsigned short);
void (* DBG_AddTypesMod)(MOD *,void const *,unsigned long);
void (* DBG_AppendFpo)(unsigned long,_FPO_DATA const *);
void (* DBG_AppendPdata)(unsigned long,unsigned char const *);
void (* DBG_AppendSectionHdr)(unsigned long,_IMAGE_SECTION_HEADER const *);
void (* DBG_AppendXFixup)(unsigned long,XFIXUP const *);
void (* DBG_AppendXdata)(unsigned long,unsigned char const *);
void (* DBG_ClearFpo)();
void (* DBG_ClearOmap)(bool);
void (* DBG_ClearPdata)();
void (* DBG_ClearSectionHdr)();
void (* DBG_ClearSegmentMapDBI)();
void (* DBG_ClearXFixup)();
void (* DBG_ClearXdata)();
void (* DBG_CloseCachedMod)(LIB *);
void (* DBG_CloseDBI)();
void (* DBG_CloseFpo)();
void (* DBG_CloseMod)(MOD *);
void (* DBG_CloseOmap)(bool);
void (* DBG_ClosePDB)(unsigned short const *);
void (* DBG_ClosePdata)();
void (* DBG_CloseSectionHdr)();
void (* DBG_CloseXFixup)();
void (* DBG_CloseXdata)();
void (* DBG_CommitPDB)();
void (* DBG_CopySrc)();
void (* DBG_DeleteOmap)();
void (* DBG_EmbedSPD)();
void (* DBG_EmitCoffSectToPDBStream)();
void (* DBG_EmitSourceLink)(NAME_LIST *);
void (* DBG_EndTypeMergingMod)(MOD *);
void (* DBG_InjectNatvis)();
void (* DBG_MergeTypesMod)(unsigned char *,unsigned long,MOD *);
void (* DBG_NoteDiscardedRVAs)();
void (* DBG_NotifyPublicSymbolCount)(unsigned long);
void (* DBG_OpenDBI)(IMAGE *);
void (* DBG_OpenFpo)();
void (* DBG_OpenMod)(MOD *,IMAGE *);
void (* DBG_OpenOmap)(bool);
void (* DBG_OpenPDB)(IMAGE *,unsigned short const *);
void (* DBG_OpenPdata)();
void (* DBG_OpenSectionHdr)();
void (* DBG_OpenXFixup)();
void (* DBG_OpenXdata)();
void (* DBG_QueryNextFpo)(unsigned long,_FPO_DATA *);
void (* DBG_RegisterPDBMapping)();
void (* DBG_RemoveGlobalRefsMod)(MOD *);
void (* DBG_RemovePublicDBI)(char const *);
void (* DBG_SetMachineType)(unsigned short);
void (* DBG_UpdateGlobalDataAddr)(char const *,unsigned short,unsigned long);
void (* DBG_UpdatePDBSignature)(unsigned long,_GUID,unsigned long);
void (* DloadAcquireSRWLockExclusive)(unsigned __int64 *);
void (* DloadReleaseSRWLockExclusive)(unsigned __int64 *);
void (* pfnValidateDirectives)(IMAGE *);
void * AllocHeap_HT(HT *,LHEAPV * *,unsigned long,unsigned long);
void * Calloc(unsigned __int64,unsigned __int64);
void * CreateHeap(void *,unsigned __int64,bool,unsigned long *);
void * DloadObtainSection(unsigned long *,unsigned long *);
void * FileIncrDbHandle;
void * Malloc(unsigned __int64);
void * PvAlloc(unsigned __int64);
void * PvAllocEx<0>(unsigned __int64);
void * PvAllocVirtHeap(LHEAPV * *,unsigned __int64);
void * PvRealloc(void *,unsigned __int64);
void * TBBHeapAlloc(unsigned long,unsigned __int64);
void * bvLBrTarget;
void * bvSafeSEH;
void * g_hAlg;
void * operator new(unsigned __int64);
void * operator new(unsigned __int64,LIFETIME);
void * operator new(unsigned __int64,_HeapManager &,int);
void * operator new[](unsigned __int64);
void AVLBalance(Array<LSL * *> &);
void AVLRotateLeft(LSL * *);
void AVLRotateRight(LSL * *);
void AddArgToListOnHeap(NAME_LIST *,ARGUMENT_LIST const *);
void AddArgument(MOD *,NAME_LIST *,unsigned short const *);
void AddArgumentToList(MOD *,NAME_LIST *,unsigned short const *,unsigned short const *,bool);
void AddAssemblyLinkResource(unsigned short const *,unsigned short const *,bool);
void AddAssemblyModule(unsigned short const *);
void AddAssemblyModuleMap(unsigned short const *,unsigned short const *);
void AddAssemblyResource(unsigned short const *,unsigned short const *,bool);
void AddCILDeferredPCON(CON *,unsigned __int64);
void AddCompilerArg(unsigned short *);
void AddEntryISYMForPext(EXTERNAL *);
void AddExportToSymbolTable(unsigned short const *,unsigned short const *,unsigned short const *,AddExportFlags,unsigned long,unsigned short const *,IMAGE *);
void AddExtToList(LPEXT *,bool,EXTERNAL *);
void AddExtToMultDefList(EXTERNAL *);
void AddFileArgs(IMAGE *);
void AddObjMapping(unsigned short const *,unsigned short const *);
void AddOrdinal(unsigned long);
void AddPogoFileInfo(IMAGE *);
void AddPogoLinkInfo(IMAGE *);
void AddPublicMod(IMAGE *,EXTERNAL *);
void AddReferenceExt(EXTERNAL *,MOD *);
void AddSafeSEH(CON *,unsigned long,unsigned short);
void AddSafeSEH(MOD *,EXTERNAL *);
void AddSectionsToDBI(IMAGE *);
void AddSupportLastErrorDll(unsigned short const *);
void AddToModList(LMOD * *,MOD *);
void AddUtf8Argument(MOD *,UTF8_NAME_LIST *,unsigned short const *);
void AddWarningDisabledToILK(IncrHeapMap<unsigned long,unsigned long,LHashClass<unsigned long,0> > *);
void AddWeakExtToList(IMAGE *,MOD *,EXTERNAL *,EXTERNAL *,IncrHeapMap<EXTERNAL *,WEAK_DEFAULT,LHashClass2<void const *,7,4> > * *,unsigned long);
void AllocBlk(BLK *,unsigned __int64);
void AllocateCommonPEXT(IMAGE *,EXTERNAL *,unsigned long &);
void AllocateCommonPMOD(IMAGE *,MOD *);
void AppendArg(unsigned short const *);
void AppendList(NAME_LIST &,NAME_LIST *);
void AppendPogoLinkInfo(unsigned short const *);
void AppendPsec(SEC *,SEC *);
void AppendSimpleOp(CTaskQueue *,DbgOpType);
void ApplyArm64Fixups(CON *,_IMAGE_RELOCATION *,unsigned long,unsigned char *,COMRefPtr<ICOFFSymTabRW> &,IMAGE *,unsigned long,unsigned long const *);
void ApplyArmFixups(CON *,_IMAGE_RELOCATION *,unsigned long,unsigned char *,COMRefPtr<ICOFFSymTabRW> &,IMAGE *,unsigned long,unsigned long const *);
void ApplyCommandLineSectionAttributes(IMAGE *,SEC *,bool *);
void ApplyDirectives(IMAGE *,MOD *,unsigned short *);
void ApplyEbcFixups(CON *,_IMAGE_RELOCATION *,unsigned long,unsigned char *,COMRefPtr<ICOFFSymTabRW> &,IMAGE *,unsigned long,unsigned long const *);
void ApplyX64Fixups(CON *,_IMAGE_RELOCATION *,unsigned long,unsigned char *,COMRefPtr<ICOFFSymTabRW> &,IMAGE *,unsigned long,unsigned long const *);
void ApplyX86Fixups(CON *,_IMAGE_RELOCATION *,unsigned long,unsigned char *,COMRefPtr<ICOFFSymTabRW> &,IMAGE *,unsigned long,unsigned long const *);
void Arm64BuildRgfixupFromRgimgreloc(_IMAGE_RELOCATION const *,unsigned __int64,unsigned char const *,FIXUP *);
void Arm64BuildRgfixupFromRgxfixup(unsigned __int64,unsigned __int64,XFIXUP const *,unsigned __int64,unsigned long,unsigned long,unsigned char const *,FIXUP *);
void Arm64EmitOneLBR(IMAGE *,LONG_BRANCH_REGION *);
void Arm64EmitThunks(IMAGE *);
void Arm64LinkerInit(IMAGE *,bool *);
void Arm64ValidateDirectives(IMAGE *);
void ArmBuildRgfixupFromRgimgreloc(_IMAGE_RELOCATION const *,unsigned __int64,unsigned char const *,FIXUP *);
void ArmBuildRgfixupFromRgxfixup(unsigned __int64,unsigned __int64,XFIXUP const *,unsigned __int64,unsigned long,unsigned long,unsigned char const *,FIXUP *);
void ArmCheckAndCreateThunk(IMAGE::ThunkType,int,unsigned long &,unsigned long,unsigned short &,int &,bool,bool);
void ArmEmitLBRThunk(IMAGE *,unsigned long,IMAGE::ThunkType);
void ArmEmitLBRThunks(IMAGE *);
void ArmEmitNoLBRThunks(IMAGE *);
void ArmEmitOneLBR(IMAGE *,LONG_BRANCH_REGION *);
void ArmLinkerInit(IMAGE *,bool *);
void ArmValidateDirectives(IMAGE *);
void AssignWeakDefinition(EXTERNAL *,EXTERNAL *,ST *);
void BadExitCleanup();
void BufferedIOInit();
void BuildArgList(MOD *,NAME_LIST *,unsigned short *,UniqUTF16StringTable *);
void BuildCconst(DUMPSTATE *,unsigned short,ISet *,CCONST * *,unsigned __int64 *);
void BuildDumpSymbolTable(DUMPSTATE *,int,unsigned __int64);
void BuildExternalSymbolTable(IMAGE *,bool *,MOD *,unsigned short);
void BuildLibrary(IMAGE *,bool);
void BuildPublicSymbolTable(IMAGE *,bool *,MOD *,unsigned short);
void BuildSectionHeader(SEC *,_IMAGE_SECTION_HEADER *);
void BuildTokenMap(IMAGE *);
void CalcPtrsPMOD(MOD *,MOD *,IMAGE *);
void CheckChangedSafeSeh(IMAGE *);
void CheckDupFilename(unsigned short const *,ARGUMENT_LIST *);
void CheckEnCSettings(IMAGE *,unsigned short const *,bool);
void CheckErrNo();
void CheckForMultDefns(IMAGE *,LPEXT *);
void CheckForReproDir();
void CheckInvalidDelayLoadDlls(IMAGE *);
void CheckManagedDllEntry(IMAGE *);
void CheckModMSIL(IMAGE *,MOD *);
void CheckModMSILType(IMAGE *,MOD *,CLRIMAGE_TYPE);
void CheckPogoCommandLine(LinkInfoW *);
void CheckSwitchesForIncrementalLink(IMAGE *);
void Cleanup_TCE(IMAGE *,bool);
void ClearHybridNativeRefToGuestRef();
void CloseILKFile();
void CloseReproDir();
void CodeGenPushThunks(IMAGE *,unsigned short const *);
void CollectIDL(IMAGE *);
void CollectLocalDbgSyms(DUMPSTATE *,unsigned short,phmap::flat_hash_map<unsigned __int64,char *,phmap::Hash<unsigned __int64>,phmap::EqualTo<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const ,char *> > > *);
void CollectLongBranch(IMAGE *,unsigned long,unsigned long);
void CollectLongBranchRecord(CON *,unsigned char,_IMAGE_RELOCATION *,int,char const *,unsigned long,unsigned long,unsigned long);
void CollectWeakAndLazyExterns(MOD *,IMAGE *);
void ComBuildAssembly(IMAGE *);
void ComCheckMergeErrors(IMAGE *);
void ComCloseAssembly(bool);
void ComInitTCE(IMAGE *);
void ComMetaMergeEnd(IMAGE *);
void ComMetaUpdate(MOD *,unsigned int,unsigned long);
void ComMetaUpdateFromSymbol(IMAGE *,ICOFFSymRW *,MOD *,unsigned long,bool);
void CompressSecMap(SO *,unsigned short,unsigned short);
void ConvertOHdr32To64(unsigned long &,_IMAGE_OPTIONAL_HEADER *,_IMAGE_OPTIONAL_HEADER64 *);
void ConvertOHdr64To32(unsigned long,_IMAGE_OPTIONAL_HEADER64 *,_IMAGE_OPTIONAL_HEADER *);
void ConvertResFile(IMAGE *,ARGUMENT_LIST *,unsigned short const * *);
void ConvertRgImgSymToRgImgSymEx(_IMAGE_SYMBOL *,unsigned long,_IMAGE_SYMBOL_EX *);
void CorError(MOD *,unsigned int,long);
void CorFatal(MOD *,unsigned int,long,bool);
void CorWarning(MOD *,unsigned int,long);
void CountFixupError(IMAGE *);
void CountRelocsInSection(IMAGE *,CON *,IObjectContrib *,COMRefPtr<ICOFFSymTabRO> &,MOD *);
void CrcEdges(IMAGE *,CON *);
void CreateCOREntry(IMAGE *);
void CreateCORPcons(IMAGE *);
void CreateDirective(unsigned short const *);
void CreateGraph_TCE(IMAGE *);
void CvtCilUsage();
void DBG_AddObjAndCompileRecord(IMAGE *,char const *,bool,MOD *);
void DBG_EarlyTypeMergeDone();
void DBG_NetModuleReadSrcInfo(unsigned short const *);
void DBG_StripPDB(unsigned short const *,unsigned short const *);
void DBG_SwitchToST();
void DbgAddLinesMod(unsigned short const *,MOD *,unsigned short,unsigned long,unsigned long,unsigned long,unsigned long,void *,unsigned long);
void DbgAddLinkInfo(IMAGE *);
void DbgAddPublicDBI(char const *,bool,unsigned short,unsigned long);
void DbgAddSecContrib2Mod(CON *,MOD *,unsigned long);
void DbgAddSecContribMod(CON *,MOD *);
void DbgAddSecDBI(unsigned short,unsigned short,unsigned long,unsigned long);
void DbgAddSymbols2Mod(void *,unsigned long,MOD *,unsigned long);
void DbgAddSymbolsMod(void *,unsigned long,MOD *);
void DbgAddThunkMapDBI(unsigned long *,unsigned long,unsigned long,unsigned short,unsigned long,SO *,unsigned short);
void DbgAddTypesMod(MOD *,void const *,unsigned long);
void DbgAppendFpo(unsigned long,_FPO_DATA const *);
void DbgAppendPdata(unsigned long,unsigned char const *);
void DbgAppendSectionHdr(unsigned long,_IMAGE_SECTION_HEADER const *);
void DbgAppendXFixup(unsigned long,XFIXUP const *);
void DbgAppendXdata(unsigned long,unsigned char const *);
void DbgClearFpo();
void DbgClearOmap(bool);
void DbgClearPdata();
void DbgClearSectionHdr();
void DbgClearSegmentMapDBI();
void DbgClearXFixup();
void DbgClearXdata();
void DbgCloseCachedMod(LIB *);
void DbgCloseDBI();
void DbgCloseFpo();
void DbgCloseMod(MOD *);
void DbgCloseOmap(bool);
void DbgClosePDB(unsigned short const *);
void DbgClosePdata();
void DbgCloseSectionHdr();
void DbgCloseXFixup();
void DbgCloseXdata();
void DbgCommitPDB();
void DbgCopySrc();
void DbgDeleteOmap();
void DbgEmbedSPD();
void DbgEmitCoffSectToPDBStream();
void DbgEmitSourceLink(NAME_LIST *);
void DbgEndTypeMergingMod(MOD *);
void DbgInjectNatvis();
void DbgMergeTypesMod(unsigned char *,unsigned long,MOD *);
void DbgNoteDiscardedRVAs();
void DbgNotifyPublicSymbolCount(unsigned long);
void DbgOpenDBI(IMAGE *);
void DbgOpenFpo();
void DbgOpenMod(MOD *,IMAGE *);
void DbgOpenOmap(bool);
void DbgOpenPDB(IMAGE *,unsigned short const *);
void DbgOpenPdata();
void DbgOpenSectionHdr();
void DbgOpenXFixup();
void DbgOpenXdata();
void DbgQueryNextFpo(unsigned long,_FPO_DATA *);
void DbgRegisterPDBMapping();
void DbgRemoveGlobalRefsMod(MOD *);
void DbgRemovePublicDBI(char const *);
void DbgSetMachineType(unsigned short);
void DbgStAddLinesMod(unsigned short const *,MOD *,unsigned short,unsigned long,unsigned long,unsigned long,unsigned long,void *,unsigned long);
void DbgStAddLinkInfo(IMAGE *);
void DbgStAddPublicDBI(char const *,bool,unsigned short,unsigned long);
void DbgStAddSecContrib2Mod(CON *,MOD *,unsigned long);
void DbgStAddSecContribMod(CON *,MOD *);
void DbgStAddSecDBI(unsigned short,unsigned short,unsigned long,unsigned long);
void DbgStAddSymbols2Mod(void *,unsigned long,MOD *,unsigned long);
void DbgStAddSymbolsMod(void *,unsigned long,MOD *);
void DbgStAddSymbolsModHelper(void *,unsigned long,MOD *,unsigned long);
void DbgStAddThunkMapDBI(unsigned long *,unsigned long,unsigned long,unsigned short,unsigned long,SO *,unsigned short);
void DbgStAddTypesMod(MOD *,void const *,unsigned long);
void DbgStAppendFpo(unsigned long,_FPO_DATA const *);
void DbgStAppendPdata(unsigned long,unsigned char const *);
void DbgStAppendSectionHdr(unsigned long,_IMAGE_SECTION_HEADER const *);
void DbgStAppendXFixup(unsigned long,XFIXUP const *);
void DbgStAppendXdata(unsigned long,unsigned char const *);
void DbgStClearFpo();
void DbgStClearOmap(bool);
void DbgStClearPdata();
void DbgStClearSectionHdr();
void DbgStClearSegmentMapDBI();
void DbgStClearXFixup();
void DbgStClearXdata();
void DbgStCloseCachedMod(LIB *);
void DbgStCloseDBI();
void DbgStCloseFpo();
void DbgStCloseMod(MOD *);
void DbgStCloseModError(MOD *);
void DbgStCloseOmap(bool);
void DbgStClosePDB(unsigned short const *);
void DbgStClosePdata();
void DbgStCloseSectionHdr();
void DbgStCloseXFixup();
void DbgStCloseXdata();
void DbgStCommitPDB();
void DbgStCopySrc();
void DbgStCreateDBI(IMAGE *);
void DbgStDeleteOmap();
void DbgStEmbedSPD();
void DbgStEmitCoffSectToPDBStream();
void DbgStEmitSourceLink(NAME_LIST *);
void DbgStEndTypeMergingMod(MOD *);
void DbgStInjectNatvis();
void DbgStMergeTypesMod(unsigned char *,unsigned long,MOD *);
void DbgStNoteDiscardedRVAs();
void DbgStNotifyPublicSymbolCount(unsigned long);
void DbgStOpenDBI(IMAGE *);
void DbgStOpenFpo();
void DbgStOpenMod(MOD *,IMAGE *);
void DbgStOpenOmap(bool);
void DbgStOpenPDB(IMAGE *,unsigned short const *);
void DbgStOpenPdata();
void DbgStOpenSectionHdr();
void DbgStOpenXFixup();
void DbgStOpenXdata();
void DbgStQueryNextFpo(unsigned long,_FPO_DATA *);
void DbgStRegisterPDBMapping();
void DbgStRemoveGlobalRefsMod(MOD *);
void DbgStRemovePublicDBI(char const *);
void DbgStSetMachineType(unsigned short);
void DbgStUpdateGlobalDataAddr(char const *,unsigned short,unsigned long);
void DbgStUpdatePDBSignature(unsigned long,_GUID,unsigned long);
void DbgUpdateGlobalDataAddr(char const *,unsigned short,unsigned long);
void DbgUpdatePDBSignature(unsigned long,_GUID,unsigned long);
void DeactivateTaskQueues();
void DefineCtorCustomAttribute(unsigned int,unsigned int,unsigned short const *,unsigned char const *,unsigned long,unsigned char const *,unsigned long);
void DelExtFromList(LPEXT *,EXTERNAL *);
void DelayLoad(unsigned short const *);
void DeleteBaseRelocs(IMAGE *,unsigned long,unsigned long);
void DeregisterIncrThread(void *);
void DetachMiscFromHeap(IMAGE *);
void DeterminePGDFilename();
void DetermineTimeStamps(IMAGE *);
void DetermineWowA64Filename(unsigned short const *,unsigned short *);
void DisableIncrementalLink(IMAGE *);
void DisableWarning(unsigned int);
void DiscardPCONsLibGroup(LIB *,SEC *,char const *,unsigned short const *);
void DisplayDiscardedPcon(CON *,NODE *);
void DisplayFatal(unsigned short const *,unsigned __int64,MSGTYPE,bool,unsigned int,char *);
void DisplayMessage(unsigned short const *,unsigned __int64,MSGTYPE,unsigned int,char *);
void DisplayWarning(unsigned short const *,unsigned __int64,unsigned int,char *);
void DloadAcquireSectionWriteAccess();
void DloadMakePermanentImageCommit(void *,unsigned __int64);
void DloadProtectSection(unsigned long,unsigned long *);
void DloadReleaseSectionWriteAccess();
void DoCodeGen(IMAGE *);
void DoMachineDependentInit(IMAGE *);
void DumpArchive(unsigned short const *);
void DumpArchiveExports();
void DumpArchiveMembers(LIB *,unsigned short const *);
void DumpAuxSymbolTableEntry(DUMPSTATE const *,_IMAGE_SYMBOL_EX *,unsigned short,_IMAGE_AUX_SYMBOL_EX *,_IMAGE_SYMBOL_EX *);
void DumpBaseRelocations(DUMPSTATE const *,_IMAGE_BASE_RELOCATION *,unsigned short *,unsigned char const *);
void DumpCOFFObject(LinkerInputFileHeaderInfo const &,bool,unsigned short const *);
void DumpCoffSymbols(DUMPSTATE const *);
void DumpComHeader(DUMPSTATE const *,_IMAGE_SECTION_HEADER *);
void DumpComdatSelection(_IMAGE_AUX_SYMBOL_N *,_IMAGE_SYMBOL_EX *);
void DumpCxxFrameHandler3(int,DUMPSTATE const *,unsigned long);
void DumpDbgFunctionTable(int,DFT,DUMPSTATE const *,unsigned long,unsigned long);
void DumpDebugData(DUMPSTATE const *,_IMAGE_SECTION_HEADER *,unsigned long);
void DumpDebugDirectories(DUMPSTATE const *,_IMAGE_SECTION_HEADER *);
void DumpDebugDirectory(_IMAGE_DEBUG_DIRECTORY *);
void DumpDebugFile(unsigned short const *);
void DumpDelayLoadDependencies(DUMPSTATE const *,_IMAGE_SECTION_HEADER *);
void DumpDelayLoadImports(DUMPSTATE const *,_IMAGE_SECTION_HEADER *);
void DumpDependencies(DUMPSTATE const *,_IMAGE_SECTION_HEADER *);
void DumpDirectives(unsigned long,unsigned long);
void DumpException(_EXCEPTION_RECORD const *,_CONTEXT const *);
void DumpExports(DUMPSTATE const *,_IMAGE_SECTION_HEADER *);
void DumpFile(unsigned short const *);
void DumpFileType(bool);
void DumpFunctionTable(int,DUMPSTATE const *,IMAGE *);
void DumpGuardFlags(unsigned long);
void DumpHeaders(DUMPSTATE *);
void DumpHintWord(DUMPSTATE const *,unsigned long);
void DumpImportObject(int,IMPORT_OBJECT_HEADER const &);
void DumpImports(DUMPSTATE const *,_IMAGE_SECTION_HEADER *);
void DumpLoadConfig(DUMPSTATE const *,_IMAGE_SECTION_HEADER *);
void DumpMemberHeader(LIB *,_IMAGE_ARCHIVE_MEMBER_HEADER,unsigned long);
void DumpNamePsym(unsigned short const *,_IMAGE_SYMBOL_EX *);
void DumpNotifyDebugDir(void *,int,_IMAGE_DEBUG_DIRECTORY const *);
void DumpNotifyOpenDBG(void *,unsigned short const *,PDBErrors,unsigned short const *);
void DumpNotifyOpenPDB(void *,unsigned short const *,PDBErrors,unsigned short const *);
void DumpObjFunctionTable(int,unsigned short,_IMAGE_SECTION_HEADER *,short);
void DumpObjectFile(bool,unsigned short const *);
void DumpPeFile(unsigned short const *);
void DumpRawData(DUMPSTATE *,unsigned __int64,unsigned char const *,unsigned long);
void DumpSecContribMap(DUMPSTATE const *);
void DumpSectionHeader(DUMPSTATE const *,int,_IMAGE_SECTION_HEADER *);
void DumpSpecialLinkerInterfaceMembers(LIB *);
void DumpSymbolInfo(_IMAGE_SYMBOL_EX *,unsigned short *,unsigned __int64);
void DumpSymbolMap(DUMPSTATE const *);
void DumpSymbolTableEntry(_IMAGE_SYMBOL_EX *);
void DumpTLS(DUMPSTATE const *,_IMAGE_SECTION_HEADER *);
void DumpX64UnwindInfo(int,DUMPSTATE const *,unsigned long);
void DumperUsage();
void EbcLinkerInit(IMAGE *,bool *);
void EbcValidateDirectives(IMAGE *);
void EmitCILDebugInfo(IMAGE *);
void EmitGlobalsIntoPGD(IMAGE *);
void EmitHelp(unsigned int,unsigned int);
void EmitMapMTBegin(IMAGE *,unsigned short const *);
void EmitOffsets(int,ST *,bool);
void EmitStrings(int,ST *,bool);
void EmitTelemetry(bool,unsigned short,unsigned short,unsigned short,unsigned short,unsigned short);
void EndEnmBaseReloc(ENM_BASE_RELOC *);
void EndEnmCon(ENM_CON *);
void EndEnmEdge(ENM_EDGE *);
void EndEnmEnt(ENM_ENT *);
void EndEnmExtList(ENM_EXT_LIST *);
void EndEnmGrp(ENM_GRP *);
void EndEnmLib(ENM_LIB *);
void EndEnmMod(ENM_MOD *);
void EndEnmModExt(ENM_MOD_EXT *);
void EndEnmNode(ENM_NODE *);
void EndEnmSec(ENM_SEC *);
void EndEnmSrc(ENM_SRC *);
void EndEnmUndefExt(ENM_UNDEF_EXT *);
void Error(unsigned short const *,unsigned int,...);
void ExcludeLib(unsigned short const *,LIBS *,MOD *);
void ExtractImplibExports(DUMPSTATE const *,unsigned char *,unsigned long,int);
void Fatal(unsigned short const *,unsigned int,...);
void FatalLine(unsigned short const *,unsigned __int64,unsigned int,...);
void FatalNoDelete(unsigned short const *,unsigned int,...);
void FeedLinenums(IMAGE *,unsigned long,_IMAGE_LINENUMBER *,unsigned long,CON *,unsigned long,unsigned long);
void FileClose(int,bool);
void FileCloseAll(bool);
void FileHardClose(unsigned short const *,bool);
void FileInit();
void FileMove(unsigned short const *,unsigned short const *);
void FilePad(int,unsigned long);
void FileRead(int,void *,unsigned __int64);
void FileSetSize(int);
void FinishedGeneratingPushThunkOBJsForMod();
void FlushBuffer(BUF *);
void ForceDoPass2PMOD(IMAGE *,MOD *,bool);
void Free(void *,unsigned __int64);
void FreeArgumentList(NAME_LIST *);
void FreeBlk(BLK *);
void FreeCvtcilArguments();
void FreeDumpstate(DUMPSTATE *);
void FreeExternalSymbolTable(ST * *);
void FreeHeap();
void FreeImage(IMAGE * *,bool);
void FreeMemory(void *);
void FreeModList(LMOD * *);
void FreePCONSpace(CON *,CON *,IMAGE *);
void FreePLIB(LIBS *,LIB *);
void FreePLIBHelper(LIB *,bool);
void FreePLIBs(LIBS *);
void FreePMOD(IMAGE *,MOD *);
void FreePlext<LEXT2>(LEXT2 *);
void FreePv(void const *);
void FreeVirtHeap(LHEAPV *);
void FuzzyBsearch(IMAGE *,char const *,Array<char *> &,Array<unsigned short const *> &,bool,bool,char);
void FuzzyBsearchInLib(LIB *,char const *,Array<char *> &,Array<unsigned short const *> &,bool,char);
void FuzzyLinearSearchInLib(LIB *,char const *,Array<char *> &,Array<unsigned short const *> &,char,bool);
void FuzzyLookup(ST *,IMAGE *,bool,char,bool,bool);
void FuzzyLookupPext(EXTERNAL *,ST *,IMAGE *,bool,char,bool,bool,bool);
void GenerateFieldTransition(IMAGE *,unsigned short const *,unsigned char const *,unsigned long,char const *,unsigned long);
void GenerateIOBJName();
void GenerateIPDBName();
void GenerateLBR(IMAGE *,unsigned long);
void GenerateMethodTransition(IMAGE *,unsigned short const *,unsigned char const *,unsigned long,char const *,unsigned long,unsigned int);
void GenerateOptimizedLBR(IMAGE *);
void GeneratePushThunkOBJ(MOD *,unsigned long);
void GenerateSPDName();
void GenerateTransitionIJW(IMAGE *,EXTERNAL *,unsigned int,unsigned char const *,unsigned long,CorPinvokeMap);
void GenerateTransitionPure(IMAGE *,EXTERNAL *,EXTERNAL *,unsigned int,unsigned char const *,unsigned long,CorPinvokeMap);
void GetCorDLLSig(unsigned char const * *,unsigned long *);
void GetFileID(int,unsigned short const *,LINK_FILE_ID *);
void GetPdbModName(MOD *,IMAGE *,unsigned short const * *,unsigned short const * *,unsigned short *,unsigned __int64);
void GetTmpFile(unsigned short *,unsigned __int64);
void GetTmpFileWithPath(unsigned short *,unsigned __int64,unsigned short const *);
void GrowBlk(BLK *,unsigned __int64);
void GuardCollectPadSymIndex(CON *,IObjectContrib *,Array<unsigned long> &);
void HandleDefaultError(DBGCONTEXT *);
void HandleDefaultError(DBGCONTEXT *,unsigned short const *,long,unsigned short const *);
void ICFFold(IMAGE *,CON *,CON *,bool);
void ICFWriteJumpThunk(IMAGE *,CON *,unsigned char *,unsigned long);
void InconsistentMetadata3(IMAGE *,EXTERNAL *,unsigned int);
void InconsistentMetadataError(IMAGE *,EXTERNAL *);
void IncrAllocCommonPMOD(MOD *,IMAGE *);
void IncrAllocateCommon(IMAGE *);
void IncrCalcPtrs(IMAGE *);
void InferComEntryPoint(IMAGE *);
void InfoOpen(unsigned short const *);
void InitCRC(IMAGE *);
void InitCor(IMAGE *);
void InitEnmExtList(ENM_EXT_LIST *,LPEXT *);
void InitEnmModExt(ENM_MOD_EXT *,EXTERNAL *);
void InitEnmNode(ENM_NODE *,IMAGE *);
void InitExternalSymbolTable(ST * *,unsigned long,unsigned long);
void InitICFGrps();
void InitImage(IMAGE * *);
void InitNodePcon(IMAGE *,CON *,char const *,bool);
void InitNodePmod(MOD *);
void InitNodePublicSymbol(EXTERNAL *,char const *,unsigned long,unsigned __int64 *,bool,NODE * *);
void InitPconPmodMap();
void InitSEHImage(IMAGE *);
void Init_HT(HT *,unsigned long,unsigned long,unsigned short);
void InitializeDumpstateFromFile(DUMPSTATE *,unsigned short const *,unsigned __int64,unsigned long);
void InitializeDumpstateFromHeader(DUMPSTATE *,LinkerInputFileHeaderInfo const &,unsigned long *);
void InitializeILHandler(IMAGE *,unsigned short const *,LinkerInputFileInfo const &);
void InsertPCONBetween(CON *,CON *,CON *);
void InternalError(unsigned short const *);
void InvokeMIDL(bool,unsigned short);
void LibrarianUsage();
void LinkInvalidParameterHandler(unsigned short const *,unsigned short const *,unsigned short const *,unsigned int,unsigned __int64);
void LinkOptionsChanged(unsigned short const *,bool);
void LinkerUsage();
void ListLibrary(LIB *);
void LoadCoffSymbolTable(DUMPSTATE *,unsigned long,unsigned short const *);
void LoadInProcPDBAPIs();
void LoadPDBAPIs();
void LoadPchObject(MOD *,Buffer &);
void LoadPchObject(MOD *,ILinkDataRO *);
void LoadPdata(IMAGE *,int,unsigned long,unsigned long,unsigned long,unsigned long,_IMAGE_SECTION_HEADER *,_IMAGE_SECTION_HEADER *,_IMAGE_ALPHA_RUNTIME_FUNCTION_ENTRY * *,_IMAGE_CE_RUNTIME_FUNCTION_ENTRY * *,_IMAGE_ARM_RUNTIME_FUNCTION_ENTRY * *,_IMAGE_RUNTIME_FUNCTION_ENTRY * *,unsigned long *,TFIXUP * *,unsigned long *);
void LoadRelocs(IMAGE *,_IMAGE_SECTION_HEADER *,unsigned long,unsigned long,int,TFIXUP * *,unsigned long *);
void LoadSourceMap(IMAGE *);
void LoadSourceMapFile(unsigned short const *);
void LogPassEnd(unsigned long);
void LogPassStart(unsigned long,unsigned long);
void LtcgP1BuildExternalSymbolTable(IMAGE *,bool *,MOD *);
void MSILCreateStub(IMAGE *);
void MSILWriteStubEntry(IMAGE *);
void MakeDefaultLib(unsigned short const *,LIBS *);
void MakeEdgePextFromISym(IMAGE *,Array<EXTERNAL *> &,phmap::flat_hash_set<void *,PHMapKeyHasher<void *>,phmap::container_internal::HashEq<void *,void>::Eq,std::allocator<void *> > &,phmap::flat_hash_map<void *,EXTERNAL *,PHMapKeyHasher<void *>,phmap::container_internal::HashEq<void *,void>::Eq,std::allocator<std::pair<void * const,EXTERNAL *> > > &);
void MakeEdgePextFromISym(IMAGE *,MOD *,unsigned long);
void MarkExtern_FuncFixup(char const *,IMAGE *,CON *);
void MarkSymbols(IMAGE *);
void MarkToken(unsigned int);
void MergePsec(MOD *,SEC *,SEC *,IMAGE *);
void Message(unsigned int,...);
void MipsBuildRgfixupFromRgxfixup(unsigned __int64,unsigned __int64,XFIXUP const *,unsigned __int64,unsigned long,unsigned long,unsigned char const *,FIXUP *);
void MovePgrp(char const *,SEC *,SEC *);
void MovePgrpToEndOfPSEC(GRP *);
void MoveToBeginningOfPSECsListOfPGRPs(GRP *,GRP *);
void MoveToBeginningOfPSECsPGRP(GRP *);
void MoveToEndPSEC(SEC *,SECS *);
void MultDefFound(IMAGE *,LIB *,LPEXT *);
void MultipleMetadataError(IMAGE *,EXTERNAL *);
void MultiplyDefinedSym<CON>(IMAGE *,unsigned short const *,char const *,CON *);
void MultiplyDefinedSym<EXTERNAL>(IMAGE *,unsigned short const *,char const *,EXTERNAL *);
void MultiplyDefinedSym<MOD>(IMAGE *,unsigned short const *,char const *,MOD *);
void NoDefaultLib(unsigned short const *,LIBS *);
void NotePdbUsed(void *,unsigned short const *,int,int);
void NoteTypeMismatch(void *,unsigned short const *,unsigned short const *);
void ObjFileAddExternalFilenames(COMRefPtr<IEnumExternalFilenames2>);
void OnExitCleanup(bool);
void OrderPsecs(SECS *,unsigned __int64,unsigned long,unsigned long);
void OutOfMemory();
void OutputInit();
void PDBError(MOD *,long,unsigned short const *);
void PDBError(long,unsigned short const *,unsigned short const *);
void ParseCommandLine(int,unsigned short * const * const,unsigned short const *,unsigned short const *,bool);
void ParseCommandString(unsigned short *);
void ParseDefinitionFile(IMAGE *,unsigned short const *);
void ParseExportDirective(unsigned short const *,IMAGE *,bool,unsigned short const *);
void ParseExportDirectives(IMAGE *,NAME_LIST &);
void ParseReserveCommit(unsigned short const *,unsigned __int64 *,unsigned __int64 *);
void ParseSecName(char const *,char const * *);
void ParseSection(unsigned short const *,char const * *,char const * *,unsigned long *,unsigned short const *,unsigned long,bool);
void ParseSymbol(unsigned short const *,unsigned short const *,bool);
void Pass2External(IMAGE *,EXTERNAL *,ICOFFSymRW *,MOD *);
void Pass2InitUninitDataPcon(IMAGE *,CON *);
void Pass2PSYM_clr_token(IMAGE *,ICOFFSymRW *,MOD *,int);
void Pass2PSYM_static_label(IMAGE *,ICOFFSymRW *,MOD *,unsigned char,int);
void PentNew_TCE(MOD *,unsigned int);
void PinvokeNoCallConvError(IMAGE *,EXTERNAL *);
void PogoOpt();
void PostNote(unsigned short const *,unsigned int,...);
void PrepLibForSearching(LIB *);
void PrepareModForPushThunkOBJ(MOD *);
void PrepareToModifyFile(ARGUMENT_LIST *,bool);
void PrintCommandLine(unsigned short const * *);
void PrintLogo();
void ProcessAbsSymForIlink(IMAGE *,EXTERNAL *,unsigned long,char const *,bool,MOD *);
void ProcessArgument(unsigned short *,bool,bool,bool);
void ProcessCORMeta(IMAGE *,MOD *,CON *);
void ProcessCommandFile(unsigned short const *);
void ProcessCommonSymForIlink(IMAGE *,EXTERNAL *,unsigned long,char const *,bool,MOD *);
void ProcessCvtCilSwitches(IMAGE *);
void ProcessDumperSwitches();
void ProcessEditorSwitches(int,unsigned short const *,int,unsigned long,bool,bool);
void ProcessInitSymReplacingCommonSym(IMAGE *,EXTERNAL *,char const *,bool);
void ProcessLibrarianSwitches(IMAGE *);
void ProcessLinkerSwitches(IMAGE *,MOD *,bool);
void ProcessManifest(IMAGE *);
void ProcessPGDFile(IMAGE *,bool);
void ProcessRelocForTCE(IMAGE *,CON *,COMRefPtr<ICOFFSymTabRO> &,_IMAGE_RELOCATION *);
void ProcessReproInput(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,bool,bool);
void ProcessResFiles(IMAGE *,LIB *,bool);
void ProcessUndefinedExternals(IMAGE *);
void ProcessWildCards(unsigned short const *);
void ReadFileHeader(int,unsigned short const *,LinkerInputFileHeaderInfo *,_IMAGE_FILE_HEADER *);
void ReadHeaders(DUMPSTATE *,unsigned long,unsigned long,bool);
void ReadIncrDbFile(IMAGE * *);
void ReadOptionalHeader(DUMPSTATE *);
void ReadOptionalHeader(int,_IMAGE_OPTIONAL_HEADER64 &,unsigned long &,unsigned long,_IMAGE_DATA_DIRECTORY *);
void ReadPogoLinkInfo();
void ReadSectionHeaders(DUMPSTATE *,unsigned long,unsigned long);
void ReadStringsAndSymbols(DUMPSTATE *,int,unsigned short const *);
void ReallocRgci(unsigned long);
void RecordSeenMultiplyDefinedSymbol(IMAGE *);
void RecordSwitchForTelemetry(unsigned short const *);
void RecordSymDef(IncrHeapMap<EXTERNAL *,MOD *,LHashClass2<void const *,7,4> > * *,EXTERNAL *,MOD *);
void RecordTransitionIJW(IMAGE *,unsigned int,EXTERNAL *);
void RegisterIncrThread(void *);
void RemoveAllRefsToPext(EXTERNAL *);
void RemoveAssociativeSymbolComdats(EXTERNAL *);
void RemoveConvertTempFilesPNL(NAME_LIST *);
void RemovePCONFromGrp(CON *);
void RemovePextWeakMappings(IMAGE *,MOD *);
void RemovePrevDefn(EXTERNAL *);
void RemoveStaleBaseRelocs_TCE(IMAGE *);
void RemoveStaleRefs_TCE(IMAGE *);
void ReportFatalError(DBGFATALERROR *);
void ReportMultipleMetadataError(IMAGE *,MOD *,unsigned short const *,char const *,unsigned int);
void ResetLibsAndMods(IMAGE *);
void ResolveExistingWeakAndLazyExterns(IMAGE *);
void ResolveWeakExterns(IMAGE *);
void SHA256Uninit();
void SaveCORTCEInfo(MOD *,unsigned int,int);
void SaveDebugFixup(unsigned short,unsigned short,unsigned long,unsigned long);
void SaveDebugFixupFromImgReloc(CON *,COMRefPtr<ICOFFSymTabRW> &,unsigned long,_IMAGE_RELOCATION *);
void SaveEXEInfo(unsigned short const *,IMAGE *);
void SaveExpFileInfo(EXPINFO *,unsigned short const *,TIME64,bool);
void SaveExportInfo(unsigned short const *,EXPINFO *);
void SaveIDLSymSection(IObjectContrib *,unsigned long);
void SaveImage(IMAGE *,unsigned long *);
void SaveLinkerDefTCEInfo(unsigned int,CON *);
void SavePconTkMOD(CON *,unsigned int,MOD *);
void SaveStaticForMapFile(IMAGE *,char const *,CON *,MOD *,unsigned long,bool);
void SaveTkEmitPcon_TCE(unsigned int,CON *);
void SaveTmpFileNameForCleanUp(unsigned short *);
void SearchForDuplicate(IMAGE *,char const *,Array<char *> &,Array<unsigned short const *> &,char,bool,bool,bool);
void SearchForDuplicateInLibs(IMAGE *,char const *,Array<char *> &,Array<unsigned short const *> &,char,bool,bool);
void SetAssemblyDebug(IMAGE *);
void SetDefaultAppContainer(IMAGE *);
void SetDefaultDynamicBase(IMAGE *);
void SetDefaultHighEntropyVA(IMAGE *);
void SetDefaultLargeAddressAware(IMAGE *);
void SetDefaultNXCompat(IMAGE *);
void SetDefaultOutFilename(IMAGE *,ARGUMENT_LIST *);
void SetDefaultTSAware(IMAGE *);
void SetDefinedExt(EXTERNAL *,bool,ST *);
void SetFatalError(DBGCONTEXT *,bool,unsigned short const *,unsigned int,...);
void SetFieldRVA(unsigned int,unsigned long);
void SetLTCGArgs(unsigned short const *);
void SetLTCGBE(unsigned short const *);
void SetRVA(unsigned int,unsigned long);
void SetSymbolShortName(unsigned char * const,char const *);
void SetupForFullIlinkBuild(IMAGE * *);
void SetupForIncrIlinkBuild(IMAGE * *,void *,unsigned __int64,bool);
void Sh4BuildRgfixupFromRgxfixup(unsigned __int64,unsigned __int64,XFIXUP const *,unsigned __int64,unsigned long,unsigned long,unsigned char const *,FIXUP *);
void SortPGRPByPMOD(GRP *);
void SortSectionList(SECS *,unsigned __int64,int (*)(void const *,void const *));
void SpawnCvtcil(unsigned short const *,unsigned short const *);
void SpawnLinkerToCreateRepro();
void SpawnToRunTool(unsigned short const *,unsigned short const * *,unsigned short const *,unsigned int,bool);
void TrackNonNativePublic(EXTERNAL *,unsigned __int64,bool,phmap::flat_hash_map<void *,EXTERNAL *,PHMapKeyHasher<void *>,phmap::container_internal::HashEq<void *,void>::Eq,std::allocator<std::pair<void * const,EXTERNAL *> > > *);
void TransferLinkerSwitchValues(IMAGE *,IMAGE const *);
void UpdateCORDirectory(IMAGE *);
void UpdateCORPcons(bool);
void UpdateDebugDir(IMAGE *);
void UpdateExternalSymbol(EXTERNAL *,IMAGE *,CON *,unsigned long,int,unsigned short,MOD *,unsigned short,unsigned int);
void UpdateImgHdrsAndComment(IMAGE *,bool);
void UpdateSEHSymbols(IMAGE *);
void UpdateSXdata(IMAGE *);
void VSetFatalError(DBGCONTEXT *,bool,unsigned short const *,unsigned int,char *);
void ValidateFixupTarget(IMAGE *,CON *,unsigned long,unsigned char,unsigned short,bool,ICOFFSymRW *);
void ValidateFixupTargetError(IMAGE *,CON *,unsigned short,char const *);
void Verbose_TCE(IMAGE *);
void VerifyAnObject(IMAGE *,ARGUMENT_LIST *,bool *,unsigned long *,IObjFile2 * *,MOD *,FileRef);
void VerifyModuleRef();
void VerifyPogoFileTimes(IMAGE *);
void WaitPendingTasks(CTaskQueue *);
void WalkGraphEntryPoints_TCE(IMAGE *);
void WarnExports(EXTERNAL *,char const *,unsigned short const *,unsigned long);
void Warning(unsigned short const *,unsigned int,...);
void WarningIgnoredExports(unsigned short const *);
void WarningLine(unsigned short const *,unsigned __int64,unsigned int,...);
void WriteComdatMetainfo(bool);
void WriteFileHeader(int,bool,_IMAGE_FILE_HEADER *);
void WriteFpoRecordsToPdb(FPOI *);
void WriteLTCGMetaObject(unsigned short const *,IObjFile2 *,ICOFFObj *,NAME_LIST *,unsigned short const *);
void WriteLTCGObject(unsigned short const *,IObjFile2 *,ICOFFObj *,bool,Buffer *);
void WriteMemberHeader(int,char const *,bool,__int64,unsigned short,long,_IMAGE_ARCHIVE_MEMBER_HEADER *);
void X64ApplyRetpolines(CON *,unsigned char *,IMAGE *,ICOFFSymTabRW *,unsigned long);
void X64BuildRgfixupFromRgimgreloc(_IMAGE_RELOCATION const *,unsigned __int64,unsigned char const *,FIXUP *);
void X64BuildRgfixupFromRgxfixup(unsigned __int64,unsigned __int64,XFIXUP const *,unsigned __int64,unsigned long,unsigned long,unsigned char const *,FIXUP *);
void X64LinkerInit(IMAGE *,bool *);
void X64RecordRetpolineData(IMAGE *,CON *,unsigned char *,unsigned long);
void X64ValidateDirectives(IMAGE *);
void X86BuildRgfixupFromRgimgreloc(_IMAGE_RELOCATION const *,unsigned __int64,unsigned char const *,FIXUP *);
void X86BuildRgfixupFromRgxfixup(unsigned __int64,unsigned __int64,XFIXUP const *,unsigned __int64,unsigned long,unsigned long,unsigned char const *,FIXUP *);
void X86LinkerInit(IMAGE *,bool *);
void X86ValidateDirectives(IMAGE *);
void ZeroPCONSpace(CON *,IMAGE *);
void ZeroPadImageSections(IMAGE *,unsigned char *);
void __ArrayUnwind(void *,unsigned __int64,unsigned __int64,void (*)(void *));
void __empty_global_delete(void *,unsigned __int64);
void __global_delete(void *,unsigned __int64);
void __scrt_initialize_type_info();
void const * * ArmThunks;
void dbsetflags(unsigned short const *,unsigned short const *);
void operator delete(void *);
void operator delete(void *,unsigned __int64);
void operator delete[](void *);
void operator delete[](void *,unsigned __int64);
void strdup_TCE(char const *,char * *,unsigned __int64 *);
void toupper_non_localized(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
