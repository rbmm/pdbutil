namespace ADVAPI32
{
	int (* ChangeServiceConfig2W)(SC_HANDLE__ *,unsigned long,void *);
	int (* CheckTokenMembership)(void *,void *,int *);
	int (* CreateRestrictedToken)(void *,unsigned long,unsigned long,_SID_AND_ATTRIBUTES *,unsigned long,_LUID_AND_ATTRIBUTES *,unsigned long,_SID_AND_ATTRIBUTES *,void * *);
	int (* CreateWellKnownSid)(WELL_KNOWN_SID_TYPE,void *,void *,unsigned long *);
	int (* GetFileSecurityW)(unsigned short const *,unsigned long,void *,unsigned long,unsigned long *);
	int (* QueryServiceConfig2W)(SC_HANDLE__ *,unsigned long,unsigned char *,unsigned long,unsigned long *);
	int (* SaferCloseLevel)(SAFER_LEVEL_HANDLE__ *);
	int (* SaferComputeTokenFromLevel)(SAFER_LEVEL_HANDLE__ *,void *,void * *,unsigned long,void *);
	int (* SaferCreateLevel)(unsigned long,unsigned long,unsigned long,SAFER_LEVEL_HANDLE__ * *,void *);
	int (* SaferGetLevelInformation)(SAFER_LEVEL_HANDLE__ *,_SAFER_OBJECT_INFO_CLASS,void *,unsigned long,unsigned long *);
	int (* SaferIdentifyLevel)(unsigned long,_SAFER_CODE_PROPERTIES_V2 *,SAFER_LEVEL_HANDLE__ * *,void *);
	int (* SaferiChangeRegistryScope)(HKEY__ *,unsigned long);
	long (* RegDeleteKeyExW)(HKEY__ *,unsigned short const *,unsigned long,unsigned long);
	long (* RegOpenCurrentUser)(unsigned long,HKEY__ * *);
	long (* RegOpenUserClassesRoot)(void *,unsigned long,unsigned long,HKEY__ * *);
	unsigned long (* GetSecurityInfo)(void *,_SE_OBJECT_TYPE,unsigned long,void * *,void * *,_ACL * *,_ACL * *,void * *);
	unsigned long (* InitiateShutdownW)(unsigned short *,unsigned short *,unsigned long,unsigned long,unsigned long);
	unsigned long (* SetEntriesInAclW)(unsigned long,_EXPLICIT_ACCESS_W *,_ACL *,_ACL * *);
	unsigned long (* SetSecurityInfo)(void *,_SE_OBJECT_TYPE,unsigned long,void *,void *,_ACL *,_ACL *);
	unsigned long (* UninstallApplication)(unsigned short *,unsigned long);
};

namespace APPHELP
{
	int (* ApphelpCheckMsiPackage)(_GUID *,_GUID *,unsigned long,int);
	int (* ApphelpFixMsiPackage)(_GUID *,_GUID *,unsigned short const *,unsigned short const *,unsigned long);
	int (* ApphelpFixMsiPackageExe)(_GUID *,_GUID *,unsigned short const *,unsigned short *,unsigned long *);
	int (* ApphelpGetMsiProperties)(SHIMDBNS::tagMSIPROPERTYOVERRIDES *);
	int (* SdbCreateMsiTransformFile)(void *,unsigned short const *,SHIMDBNS::tagSDBMSITRANSFORMINFO *);
	int (* SdbGetMsiPackageInformation)(void *,unsigned long,SHIMDBNS::tagMSIPACKAGEINFO *);
	int (* SdbReadMsiTransformInfo)(void *,unsigned long,SHIMDBNS::tagSDBMSITRANSFORMINFO *);
	int (* SdbReadStringTagRef)(void *,unsigned long,unsigned short *,unsigned long);
	unsigned long (* SdbFindFirstMsiPackage_Str)(void *,unsigned short const *,unsigned short const *,SHIMDBNS::tagSDBMSIFINDINFO *);
	unsigned long (* SdbFindFirstTagRef)(void *,unsigned long,unsigned short);
	unsigned long (* SdbFindNextMsiPackage)(void *,SHIMDBNS::tagSDBMSIFINDINFO *);
	unsigned long (* SdbFindNextTagRef)(void *,unsigned long,unsigned long);
	unsigned long (* SdbQueryDataEx)(void *,unsigned long,unsigned short const *,unsigned long *,void *,unsigned long *,unsigned long *);
	void (* SdbReleaseDatabase)(void *);
	void * (* SdbInitDatabase)(unsigned long,unsigned short const *);
};

struct CAPITempBuffer<CMsiCustomAction::ActionThreadData,4>
{
	bool SetSize(int,bool);
};

struct CAPITempBuffer<CMsiCustomAction::AssemblyInstallData,10>
{
	bool SetSize(int,bool);
};

struct CAPITempBuffer<CMsiExternalUI,10>
{
	bool SetSize(int,bool);
	void Destroy();
};

struct CAPITempBuffer<EnumEntity,1>
{
	bool SetSize(int,bool);
};

struct CAPITempBuffer<ThreadIdImpersonate,5>
{
	bool SetSize(int,bool);
	void Destroy();
};

struct CAPITempBuffer<_RM_PROCESS_INFO,1>
{
	bool SetSize(int,bool);
};

struct CAPITempBuffer<char,1024>
{
	bool SetSize(int,bool);
};

struct CAPITempBuffer<char,1>
{
	bool SetSize(int,bool);
};

struct CAPITempBuffer<char,256>
{
	bool SetSize(int,bool);
};

struct CAPITempBuffer<char,260>
{
	bool SetSize(int,bool);
};

struct CAPITempBuffer<char,512>
{
	bool SetSize(int,bool);
};

struct CAPITempBuffer<char,64>
{
	bool SetSize(int,bool);
};

struct CAPITempBuffer<int,1>
{
	bool SetSize(int,bool);
};

struct CAPITempBuffer<sProductContext,20>
{
	bool SetSize(int,bool);
	void Destroy();
};

struct CAPITempBuffer<unsigned char,1>
{
	bool SetSize(int,bool);
};

struct CAPITempBuffer<unsigned short,1024>
{
	bool SetSize(int,bool);
	~CAPITempBuffer<unsigned short,1024>();
};

struct CAPITempBuffer<unsigned short,1>
{
	bool SetSize(int,bool);
	void Destroy();
};

struct CAPITempBuffer<unsigned short,256>
{
	bool SetSize(int,bool);
	void Destroy();
	~CAPITempBuffer<unsigned short,256>();
};

struct CAPITempBuffer<unsigned short,25>
{
	bool SetSize(int,bool);
};

struct CAPITempBuffer<unsigned short,260>
{
	CAPITempBuffer<unsigned short,260>();
	bool SetSize(int,bool);
	~CAPITempBuffer<unsigned short,260>();
};

struct CAPITempBuffer<unsigned short,261>
{
	bool SetSize(int,bool);
	void Destroy();
};

struct CAPITempBuffer<unsigned short,318>
{
	~CAPITempBuffer<unsigned short,318>();
};

struct CAPITempBuffer<unsigned short,64>
{
	bool SetSize(int,bool);
	~CAPITempBuffer<unsigned short,64>();
};

struct CAPITempBuffer<unsigned short,80>
{
	bool SetSize(int,bool);
};

struct CAPITempBufferRef<char>
{
	bool SetSize(int,bool);
};

struct CAPITempBufferRef<unsigned short>
{
	bool SetSize(int,bool);
};

struct CActionEntry
{
	static CActionEntry const * Find(unsigned short const *);
};

struct CActionState
{
	CActionState & operator=(CActionState const &);
	CActionState();
	IMsiRecord * CreateCabinetCopier(IMsiServices &,ictEnum,unsigned short const *,unsigned short const *,bool);
	~CActionState();
};

struct CActionThreadData
{
	Bool CreateTempFile(IMsiStream &,IMsiString const * &);
	CActionThreadData(IMsiMessage &,CMsiEngine *,unsigned short const *,int,IMsiString const *,bool,bool,_GUID const *,_GUID const *);
	iesEnum RunThread();
	void InitializeEXE(IMsiString const &,IMsiString const &);
	void InitializeRemoteDLL(IMsiString const &,IMsiString const &,unsigned long);
	void InitializeRemoteScript(IMsiString const &,IMsiString const &,unsigned long);
	~CActionThreadData();
};

struct CAnsiToWideOutParam
{
	CAnsiToWideOutParam(char *,unsigned long *);
	unsigned int FillReturnBuffer(unsigned int,char *,unsigned long *);
};

struct CApiConvertString
{
	CApiConvertString(unsigned short const *);
	operator char const *();
	operator unsigned short const *();
	~CApiConvertString();
};

struct CAppliedPatchInfo
{
	CAppliedPatchInfo(iaaAppAssignment,unsigned short const *,unsigned short const *);
	unsigned long GetProperty(unsigned short const *,CAPITempBufferRef<unsigned short> &);
};

struct CAutoApiFactory
{
	virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
	virtual long LockServer(int);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CAutoArgs
{
	Bool Present(unsigned int);
	CAutoArgs(tagDISPPARAMS *,tagVARIANT *,unsigned short);
	CVariant & operator[](unsigned int);
	long Assign(Bool);
	long Assign(IDispatch *);
	long Assign(double &);
	long Assign(int);
	long Assign(unsigned short const *);
	long ReturnBSTR(unsigned short *);
};

class CAutoBase
{
protected:
	CAutoBase(DispatchEntry<CAutoBase> const *,int,_GUID const &,unsigned long);
public:
	virtual long GetIDsOfNames(_GUID const &,unsigned short * *,unsigned int,unsigned long,long *);
	virtual long GetTypeInfo(unsigned int,unsigned long,ITypeInfo * *);
	virtual long GetTypeInfoCount(unsigned int *);
	virtual long Invoke(long,_GUID const &,unsigned long,unsigned short,tagDISPPARAMS *,tagVARIANT *,tagEXCEPINFO *,unsigned int *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CAutoCollection
{
	CAutoCollection(IMsiCollection &,_GUID const &);
	long Count(CAutoArgs &);
	long Item(CAutoArgs &);
	long _NewEnum(CAutoArgs &);
	virtual unsigned long Release();
};

struct CAutoComponent
{
	CAutoComponent();
	bool Initialize(unsigned short const *,unsigned short const *,tagMSIINSTALLCONTEXT);
	long ComponentCode(CAutoArgs &);
	long Context(CAutoArgs &);
	long UserSid(CAutoArgs &);
	virtual unsigned long Release();
};

struct CAutoComponentClient
{
	CAutoComponentClient();
	bool Initialize(unsigned short const *,unsigned short const *,unsigned short const *,tagMSIINSTALLCONTEXT);
	long ComponentCode(CAutoArgs &);
	long Context(CAutoArgs &);
	long ProductCode(CAutoArgs &);
	long UserSid(CAutoArgs &);
	virtual unsigned long Release();
};

struct CAutoComponentPath
{
	CAutoComponentPath();
	bool Initialize(unsigned short const *,unsigned short const *,tagINSTALLSTATE);
	long ComponentCode(CAutoArgs &);
	long Path(CAutoArgs &);
	long State(CAutoArgs &);
	virtual unsigned long Release();
};

struct CAutoDatabase
{
	CAutoDatabase(unsigned long);
	long ApplyTransform(CAutoArgs &);
	long Commit(CAutoArgs &);
	long CreateTransformSummaryInfo(CAutoArgs &);
	long DatabaseState(CAutoArgs &);
	long EnableUIPreview(CAutoArgs &);
	long Export(CAutoArgs &);
	long GenerateTransform(CAutoArgs &);
	long GetHandle(CAutoArgs &);
	long Import(CAutoArgs &);
	long Merge(CAutoArgs &);
	long OpenView(CAutoArgs &);
	long PrimaryKeys(CAutoArgs &);
	long SummaryInformation(CAutoArgs &);
	long TablePersistent(CAutoArgs &);
};

struct CAutoEngine
{
	CAutoEngine(unsigned long,CAutoInstall *,unsigned long,unsigned long);
	long Application(CAutoArgs &);
	long ComponentCosts(CAutoArgs &);
	long ComponentCurrentState(CAutoArgs &);
	long ComponentRequestState(CAutoArgs &);
	long Database(CAutoArgs &);
	long DoAction(CAutoArgs &);
	long EvaluateCondition(CAutoArgs &);
	long FeatureCost(CAutoArgs &);
	long FeatureCurrentState(CAutoArgs &);
	long FeatureInfo(CAutoArgs &);
	long FeatureRequestState(CAutoArgs &);
	long FeatureValidStates(CAutoArgs &);
	long FormatRecord(CAutoArgs &);
	long Language(CAutoArgs &);
	long Message(CAutoArgs &);
	long Mode(CAutoArgs &);
	long ProductProperty(CAutoArgs &);
	long Property(CAutoArgs &);
	long Sequence(CAutoArgs &);
	long SetInstallLevel(CAutoArgs &);
	long SourcePath(CAutoArgs &);
	long TargetPath(CAutoArgs &);
	long VerifyDiskSpace(CAutoArgs &);
	virtual unsigned long Release();
};

struct CAutoFeatureInfo
{
	bool Initialize(unsigned long,unsigned short const *);
	long Attributes(CAutoArgs &);
	long Description(CAutoArgs &);
	long Title(CAutoArgs &);
	virtual unsigned long Release();
};

class CAutoInstall
{
	virtual long QueryInterface(_GUID const &,void * *);
public:
	CAutoInstall(unsigned long);
	long AddSource(CAutoArgs &);
	long AdvertiseProduct(CAutoArgs &);
	long AdvertiseScript(CAutoArgs &);
	long ApplyMultiplePatches(CAutoArgs &);
	long ApplyPatch(CAutoArgs &);
	long ClearSourceList(CAutoArgs &);
	long CollectUserInfo(CAutoArgs &);
	long ComponentClients(CAutoArgs &);
	long ComponentClientsEx(CAutoArgs &);
	long ComponentPath(CAutoArgs &);
	long ComponentPathEx(CAutoArgs &);
	long ComponentQualifiers(CAutoArgs &);
	long Components(CAutoArgs &);
	long ComponentsEx(CAutoArgs &);
	long ConfigureFeature(CAutoArgs &);
	long ConfigureProduct(CAutoArgs &);
	long CreateAdvertiseScript(CAutoArgs &);
	long CreateRecord(CAutoArgs &);
	long EnableLog(CAutoArgs &);
	long Environment(CAutoArgs &);
	long ExtractPatchXMLData(CAutoArgs &);
	long FeatureParent(CAutoArgs &);
	long FeatureState(CAutoArgs &);
	long FeatureUsageCount(CAutoArgs &);
	long FeatureUsageDate(CAutoArgs &);
	long Features(CAutoArgs &);
	long FileAttributes(CAutoArgs &);
	long FileHash(CAutoArgs &);
	long FileSignatureInfo(CAutoArgs &);
	long FileSize(CAutoArgs &);
	long FileVersion(CAutoArgs &);
	long ForceSourceListResolution(CAutoArgs &);
	long GetShortcutTarget(CAutoArgs &);
	long InstallProduct(CAutoArgs &);
	long LastErrorRecord(CAutoArgs &);
	long OpenDatabase(CAutoArgs &);
	long OpenPackage(CAutoArgs &);
	long OpenProduct(CAutoArgs &);
	long Patch(CAutoArgs &);
	long PatchFiles(CAutoArgs &);
	long PatchInfo(CAutoArgs &);
	long PatchTransforms(CAutoArgs &);
	long Patches(CAutoArgs &);
	long PatchesEx(CAutoArgs &);
	long Product(CAutoArgs &);
	long ProductCode(CAutoArgs &);
	long ProductElevated(CAutoArgs &);
	long ProductInfo(CAutoArgs &);
	long ProductInfoFromScript(CAutoArgs &);
	long ProductState(CAutoArgs &);
	long Products(CAutoArgs &);
	long ProductsEx(CAutoArgs &);
	long ProvideAssembly(CAutoArgs &);
	long ProvideComponent(CAutoArgs &);
	long ProvideQualifiedComponent(CAutoArgs &);
	long QualifierDescription(CAutoArgs &);
	long RegistryValue(CAutoArgs &);
	long ReinstallFeature(CAutoArgs &);
	long ReinstallProduct(CAutoArgs &);
	long RelatedProducts(CAutoArgs &);
	long RemovePatches(CAutoArgs &);
	long SummaryInformation(CAutoArgs &);
	long UILevel(CAutoArgs &);
	long UseFeature(CAutoArgs &);
	long Version(CAutoArgs &);
};

struct CAutoPatch
{
	CAutoPatch();
	bool Initialize(unsigned short const *,unsigned short const *,unsigned short const *,tagMSIINSTALLCONTEXT);
	long Context(CAutoArgs &);
	long MediaDisks(CAutoArgs &);
	long PatchCode(CAutoArgs &);
	long PatchProperty(CAutoArgs &);
	long ProductCode(CAutoArgs &);
	long SourceListAddMediaDisk(CAutoArgs &);
	long SourceListAddSource(CAutoArgs &);
	long SourceListClearAll(CAutoArgs &);
	long SourceListClearMediaDisk(CAutoArgs &);
	long SourceListClearSource(CAutoArgs &);
	long SourceListForceResolution(CAutoArgs &);
	long SourceListInfo(CAutoArgs &);
	long Sources(CAutoArgs &);
	long State(CAutoArgs &);
	long UserSid(CAutoArgs &);
	virtual unsigned long Release();
};

struct CAutoProduct
{
	CAutoProduct();
	bool Initialize(unsigned short const *,unsigned short const *,tagMSIINSTALLCONTEXT);
	long ComponentState(CAutoArgs &);
	long Context(CAutoArgs &);
	long FeatureState(CAutoArgs &);
	long InstallProperty(CAutoArgs &);
	long MediaDisks(CAutoArgs &);
	long ProductCode(CAutoArgs &);
	long SourceListAddMediaDisk(CAutoArgs &);
	long SourceListAddSource(CAutoArgs &);
	long SourceListClearAll(CAutoArgs &);
	long SourceListClearMediaDisk(CAutoArgs &);
	long SourceListClearSource(CAutoArgs &);
	long SourceListForceResolution(CAutoArgs &);
	long SourceListInfo(CAutoArgs &);
	long Sources(CAutoArgs &);
	long State(CAutoArgs &);
	long UserSid(CAutoArgs &);
	virtual unsigned long Release();
};

struct CAutoRecord
{
	CAutoRecord(unsigned long);
	long ClearData(CAutoArgs &);
	long DataSize(CAutoArgs &);
	long FieldCount(CAutoArgs &);
	long FormatText(CAutoArgs &);
	long GetHandle(CAutoArgs &);
	long IntegerData(CAutoArgs &);
	long IsNull(CAutoArgs &);
	long ReadStream(CAutoArgs &);
	long SetStream(CAutoArgs &);
	long StringData(CAutoArgs &);
};

struct CAutoSummaryInfo
{
	CAutoSummaryInfo(unsigned long);
	long Persist(CAutoArgs &);
	long Property(CAutoArgs &);
	long PropertyCount(CAutoArgs &);
};

struct CAutoUIPreview
{
	long Property(CAutoArgs &);
	long ViewBillboard(CAutoArgs &);
	long ViewDialog(CAutoArgs &);
};

struct CAutoView
{
	long Close(CAutoArgs &);
	long ColumnInfo(CAutoArgs &);
	long Execute(CAutoArgs &);
	long Fetch(CAutoArgs &);
	long GetError(CAutoArgs &);
	long Modify(CAutoArgs &);
};

struct CBStr
{
	CBStr(unsigned short const *);
	void operator=(unsigned short const *);
};

struct CBaseElementEnumerator
{
	virtual HKEY__ * ManagedRoot();
	virtual bool ManagedRootExists();
	virtual ePerElementState CurrentState();
	virtual unsigned int Enumerate(CRegHandle &,CRegHandle &);
	virtual unsigned int Initialize(CRegHandle &);
	virtual unsigned long CurrentValueType();
	virtual unsigned short * CurrentValue();
	virtual void Configure(CEnumProviderState *,CEnumProviderState *);
	virtual void Dispose();
	virtual void Reset();
};

class CBasicUI
{
	bool CheckDialog();
	bool CreateProgressDialog(int);
	imsEnum FilesInUseDialog(IMsiRecord *);
	imsEnum RMFilesInUseDialog(IMsiRecord *);
	imsEnum SetProgressData(int,unsigned short const *,bool);
	imsEnum SetProgressGauge(int,int,int);
	imsEnum SetProgressTimeRemaining(IMsiRecord &);
	imsEnum SetScriptInProgress(Bool);
public:
	bool Initialize(HWND__ *,bool,bool,bool,bool,bool,bool);
	bool SetCancelButtonText();
	bool Terminate();
	imsEnum FatalError(imtEnum,unsigned short const *);
	imsEnum Message(imtEnum,IMsiRecord &);
	void SetUserCancel(bool);
};

struct CBinaryTree
{
	bool Insert(unsigned long,unsigned long);
	void DeleteTree(Node *);
};

struct CCatalogTable
{
	CCatalogTable(CMsiDatabase &,unsigned int,int);
	bool GetTableState(unsigned int,ictsEnum);
	bool SetTableState(unsigned int,ictsEnum);
	int GetLoadedTable(unsigned int,CMsiTable * &);
	int SetLoadedTable(unsigned int,CMsiTable *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CClientEnumState
{
protected:
	unsigned int CreateFSMList(unsigned int);
	unsigned int CreateRegState(unsigned int);
	unsigned int RegisterFSMElement(CBaseElementEnumerator *);
public:
	unsigned int Enumerate();
	unsigned int Initialize(eEnumerationType,unsigned long);
	void Dispose();
};

struct CClientEnumerator
{
	virtual unsigned int Enumerate(CRegHandle &,CRegHandle &);
	virtual unsigned int Initialize(CRegHandle &);
	virtual unsigned long CurrentValueType();
	virtual unsigned short * CurrentValue();
};

class CClientRestartManagerWrapper
{
protected:
	virtual unsigned int AddResourceCore(void * const,int);
public:
	virtual unsigned int AddFilePathResources(unsigned short * *,int);
	virtual unsigned int AddProcessResource(_RM_UNIQUE_PROCESS const *);
};

struct CClientThreadImpersonate
{
	CClientThreadImpersonate(unsigned long,unsigned long);
	~CClientThreadImpersonate();
};

struct CCoImpersonate
{
	CCoImpersonate(bool);
};

struct CCoUninitialize
{
	~CCoUninitialize();
};

struct CComPointer<CMsiCustomContext>
{
	~CComPointer<CMsiCustomContext>();
};

struct CComPointer<CMsiDataWrapper>
{
	~CComPointer<CMsiDataWrapper>();
};

struct CComPointer<CMsiDatabase>
{
	CMsiDatabase * * operator&();
	~CComPointer<CMsiDatabase>();
};

struct CComPointer<CMsiTable>
{
	CComPointer<CMsiTable> & operator=(CMsiTable *);
	CMsiTable * * operator&();
	~CComPointer<CMsiTable>();
};

struct CComPointer<IAssemblyCache>
{
	IAssemblyCache * * operator&();
	~CComPointer<IAssemblyCache>();
};

struct CComPointer<IAssemblyCacheItem>
{
	CComPointer<IAssemblyCacheItem> & operator=(IAssemblyCacheItem *);
	IAssemblyCacheItem * * operator&();
	~CComPointer<IAssemblyCacheItem>();
};

struct CComPointer<IAssemblyName>
{
	CComPointer<IAssemblyName> & operator=(IAssemblyName *);
	IAssemblyName * * operator&();
	~CComPointer<IAssemblyName>();
};

struct CComPointer<ICOMAdminCatalog>
{
	ICOMAdminCatalog * * operator&();
	~CComPointer<ICOMAdminCatalog>();
};

struct CComPointer<ICatalogCollection>
{
	~CComPointer<ICatalogCollection>();
};

struct CComPointer<IEnumMsiRecord>
{
	CComPointer<IEnumMsiRecord> & operator=(IEnumMsiRecord *);
	IEnumMsiRecord * * operator&();
	~CComPointer<IEnumMsiRecord>();
};

struct CComPointer<IEnumMsiString>
{
	IEnumMsiString * * operator&();
	~CComPointer<IEnumMsiString>();
};

struct CComPointer<IEnumMsiVolume>
{
	~CComPointer<IEnumMsiVolume>();
};

struct CComPointer<ILockBytes>
{
	~CComPointer<ILockBytes>();
};

struct CComPointer<IMsiConfigurationManager>
{
	~CComPointer<IMsiConfigurationManager>();
};

struct CComPointer<IMsiCostAdjuster>
{
	~CComPointer<IMsiCostAdjuster>();
};

struct CComPointer<IMsiCursor>
{
	CComPointer<IMsiCursor> & operator=(IMsiCursor *);
	IMsiCursor * * operator&();
	~CComPointer<IMsiCursor>();
};

struct CComPointer<IMsiCustomAction>
{
	CComPointer<IMsiCustomAction> & operator=(IMsiCustomAction *);
	IMsiCustomAction * * operator&();
	~CComPointer<IMsiCustomAction>();
};

struct CComPointer<IMsiData const >
{
	CComPointer<IMsiData const > & operator=(IMsiData const *);
	~CComPointer<IMsiData const >();
};

struct CComPointer<IMsiDatabase>
{
	CComPointer<IMsiDatabase> & operator=(IMsiDatabase *);
	IMsiDatabase * * operator&();
	~CComPointer<IMsiDatabase>();
};

struct CComPointer<IMsiDirectoryManager>
{
	~CComPointer<IMsiDirectoryManager>();
};

struct CComPointer<IMsiEngine>
{
	CComPointer<IMsiEngine> & operator=(IMsiEngine *);
	~CComPointer<IMsiEngine>();
};

struct CComPointer<IMsiExecute>
{
	CComPointer<IMsiExecute> & operator=(IMsiExecute *);
	~CComPointer<IMsiExecute>();
};

struct CComPointer<IMsiFileCopy>
{
	CComPointer<IMsiFileCopy> & operator=(CComPointer<IMsiFileCopy> const &);
	CComPointer<IMsiFileCopy> & operator=(IMsiFileCopy *);
	IMsiFileCopy * * operator&();
	~CComPointer<IMsiFileCopy>();
};

struct CComPointer<IMsiFilePatch>
{
	IMsiFilePatch * * operator&();
};

struct CComPointer<IMsiHandler>
{
	~CComPointer<IMsiHandler>();
};

struct CComPointer<IMsiMemoryStream>
{
	~CComPointer<IMsiMemoryStream>();
};

struct CComPointer<IMsiMessage>
{
	~CComPointer<IMsiMessage>();
};

struct CComPointer<IMsiPath>
{
	CComPointer<IMsiPath> & operator=(CComPointer<IMsiPath> const &);
	CComPointer<IMsiPath> & operator=(IMsiPath *);
	IMsiPath * * operator&();
	~CComPointer<IMsiPath>();
};

struct CComPointer<IMsiRecord>
{
	CComPointer<IMsiRecord> & operator=(CComPointer<IMsiRecord> const &);
	CComPointer<IMsiRecord> & operator=(IMsiRecord *);
	IMsiRecord * * operator&();
	~CComPointer<IMsiRecord>();
};

struct CComPointer<IMsiRegKey>
{
	CComPointer<IMsiRegKey> & operator=(IMsiRegKey *);
	~CComPointer<IMsiRegKey>();
};

struct CComPointer<IMsiRemoteAPI>
{
	~CComPointer<IMsiRemoteAPI>();
};

struct CComPointer<IMsiSelectionManager>
{
	~CComPointer<IMsiSelectionManager>();
};

struct CComPointer<IMsiServer>
{
	CComPointer<IMsiServer> & operator=(IMsiServer *);
	~CComPointer<IMsiServer>();
};

struct CComPointer<IMsiServices>
{
	CComPointer<IMsiServices> & operator=(IMsiServices *);
	~CComPointer<IMsiServices>();
};

struct CComPointer<IMsiStorage>
{
	CComPointer<IMsiStorage> & operator=(CComPointer<IMsiStorage> const &);
	CComPointer<IMsiStorage> & operator=(IMsiStorage *);
	IMsiStorage * * operator&();
	~CComPointer<IMsiStorage>();
};

struct CComPointer<IMsiStream>
{
	CComPointer<IMsiStream> & operator=(IMsiStream *);
	IMsiStream * * operator&();
	~CComPointer<IMsiStream>();
};

struct CComPointer<IMsiSummaryInfo>
{
	IMsiSummaryInfo * * operator&();
	~CComPointer<IMsiSummaryInfo>();
};

struct CComPointer<IMsiTable>
{
	CComPointer<IMsiTable> & operator=(IMsiTable *);
	IMsiTable * * operator&();
	~CComPointer<IMsiTable>();
};

struct CComPointer<IMsiView>
{
	CComPointer<IMsiView> & operator=(IMsiView *);
	IMsiView * * operator&();
	~CComPointer<IMsiView>();
};

struct CComPointer<IMsiVolume>
{
	CComPointer<IMsiVolume> & operator=(IMsiVolume *);
	IMsiVolume * * operator&();
	~CComPointer<IMsiVolume>();
};

struct CComPointer<IPersistFile>
{
	IPersistFile * * operator&();
	~CComPointer<IPersistFile>();
};

struct CComPointer<IServerSecurity>
{
	~CComPointer<IServerSecurity>();
};

struct CComPointer<IShellLinkDataList>
{
	~CComPointer<IShellLinkDataList>();
};

struct CComPointer<IShellLinkW>
{
	~CComPointer<IShellLinkW>();
};

struct CComPointer<ITypeLib>
{
	ITypeLib * * operator&();
	~CComPointer<ITypeLib>();
};

struct CComPointer<IXMLDOMDocument>
{
	IXMLDOMDocument * * operator&();
	~CComPointer<IXMLDOMDocument>();
};

struct CComPointer<IXMLDOMElement>
{
	CComPointer<IXMLDOMElement> & operator=(CComPointer<IXMLDOMElement> const &);
	CComPointer<IXMLDOMElement> & operator=(IXMLDOMElement *);
	IXMLDOMElement * * operator&();
	~CComPointer<IXMLDOMElement>();
};

struct CComPointer<IXMLDOMNamedNodeMap>
{
	~CComPointer<IXMLDOMNamedNodeMap>();
};

struct CComPointer<IXMLDOMNode>
{
	CComPointer<IXMLDOMNode> & operator=(CComPointer<IXMLDOMNode> const &);
	IXMLDOMNode * * operator&();
	~CComPointer<IXMLDOMNode>();
};

class CComponentBaselineHelper
{
	IMsiRecord * GetCurrentUserSid(IMsiString const * *);
	IMsiRecord * GetRTMProductDatabaseForProductCode(unsigned short const *,unsigned short const *,CComPointer<IMsiDatabase> &);
	IMsiRecord * InsertCacheRTMFileInfoToComponentPatchCacheTable(IMsiString const &,IMsiString const &,IMsiString const &,IMsiString const &,IMsiString const &,IMsiDatabase *);
	TRI FetchKeyFileVersion(unsigned short const *,IMsiString const &,IMsiString const * *,unsigned long *,unsigned long *,bool);
	bool GetPatchAddedComponentVersion(IMsiString const &,IMsiString const &,unsigned long *,unsigned long *);
	void InitializeTablesCursorsAndColumnIndices();
	void QueryComponentInfo(IMsiString const &,IMsiString const &,bool *,bool *);
	void SetTargetComponentData(IMsiString const &,IMsiString const &,IMsiString const &,IMsiPath *,int,unsigned long *,int,bool);
public:
	CComponentBaselineHelper(IMsiEngine &);
	IMsiRecord * GenerateComponentPatchCacheOpsForCachingFromRTMSource(bool &);
	bool PrepareToCacheComponent(IMsiString const &,IMsiString const &,IMsiPath *,IMsiString const &,int,IMsiString const &,bool);
	virtual IMsiRecord * CacheComponent(unsigned short const *,unsigned short const *,bool &);
	virtual ~CComponentBaselineHelper();
};

class CComponentEnumerator
{
	bool ClientExistsForRequiredContext(CRegHandle &,unsigned long);
public:
	CComponentEnumerator(IPerElementEnumerator *);
	virtual HKEY__ * ManagedRoot();
	virtual bool ManagedRootExists();
	virtual unsigned int Enumerate(CRegHandle &,CRegHandle &);
	virtual unsigned int Initialize(CRegHandle &);
	virtual void Dispose();
};

struct CConvertString
{
	operator char const *();
	operator unsigned short const *();
};

struct CConvertStringInputArgument
{
	CConvertStringInputArgument();
	unsigned long ConvertAToW(char const *);
	unsigned short const * GetWArgument();
	~CConvertStringInputArgument();
};

struct CConvertStringOutputArgument
{
	unsigned long FillOutputBuffer(unsigned long,char *,unsigned long *);
	unsigned long Initialize(unsigned long);
};

struct CDeleteUrlLocalFileOnClose
{
	CDeleteUrlLocalFileOnClose();
	void SetFileName(IMsiString const &);
	~CDeleteUrlLocalFileOnClose();
};

class CDetectApps
{
	static int EnumWindowsProc(HWND__ *,__int64);
};

class CDetectAppsNT
{
protected:
	IMsiRecord * GetPerfData();
	IMsiRecord * GetPerfIdxs();
	static _PERF_INSTANCE_DEFINITION * FindInstanceParent(_PERF_INSTANCE_DEFINITION *,_PERF_DATA_BLOCK *);
	static _PERF_INSTANCE_DEFINITION * FirstInstance(_PERF_OBJECT_TYPE *);
	static _PERF_INSTANCE_DEFINITION * NextInstance(_PERF_INSTANCE_DEFINITION *);
	static _PERF_OBJECT_TYPE * FindObject(_PERF_DATA_BLOCK *,unsigned int);
	static unsigned short * InstanceName(_PERF_INSTANCE_DEFINITION *);
public:
	CDetectAppsNT(IMsiServices &);
	virtual IMsiRecord * GetFileUsage(IMsiString const &,IEnumMsiRecord * &);
	virtual IMsiRecord * Refresh();
};

struct CElevate
{
	CElevate(bool);
	~CElevate();
};

struct CEngineMainThreadData
{
	CEngineMainThreadData(ireEnum,unsigned short const *,unsigned short const *,unsigned short const *,iioEnum,IMsiRecord const *);
};

struct CEnumAVolume
{
	CEnumAVolume(idtEnum,IMsiServices &);
	virtual long Clone(IEnumMsiVolume * *);
	virtual long Next(unsigned long,IMsiVolume * *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset();
	virtual long Skip(unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CEnumComponentClients
{
	CEnumComponentClients(IMsiString const &,IMsiString const &);
	unsigned long Next(IMsiString const * &);
	~CEnumComponentClients();
};

class CEnumMsiRecord
{
protected:
	virtual ~CEnumMsiRecord();
public:
	CEnumMsiRecord(IMsiRecord * *,unsigned long);
	virtual long Clone(IEnumMsiRecord * *);
	virtual long Next(unsigned long,IMsiRecord * *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset();
	virtual long Skip(unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CEnumMsiString
{
protected:
	virtual ~CEnumMsiString();
public:
	CEnumMsiString(IMsiString const * *,unsigned long);
	virtual long Clone(IEnumMsiString * *);
	virtual long Next(unsigned long,IMsiString const * *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset();
	virtual long Skip(unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CEnumProviderState
{
	void Initialize();
	~CEnumProviderState();
};

struct CEnumRollbackScripts
{
	CEnumRollbackScripts(_FILETIME,Bool,IMsiServices &);
	virtual long Clone(IEnumMsiString * *);
	virtual long Next(unsigned long,IMsiString const * *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset();
	virtual long Skip(unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CEnumScriptRecord
{
	virtual long Clone(IEnumMsiRecord * *);
	virtual long Next(unsigned long,IMsiRecord * *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset();
	virtual long Skip(unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CEnumStateList
{
	unsigned int FindClientIndex(unsigned int &);
public:
	CEnumProviderState * GetInputState();
	CEnumProviderState * GetOutputState();
	bool Initialized();
	unsigned int Enumerate();
	unsigned int Initialize(eEnumerationType);
	void Dispose();
	~CEnumStateList();
};

struct CEnumStateManager
{
	unsigned int Initialize();
	void Destroy();
};

class CEnumStorage
{
protected:
	virtual ~CEnumStorage();
public:
	CEnumStorage(IStorage &,bool,bool);
	virtual long Clone(IEnumMsiString * *);
	virtual long Next(unsigned long,IMsiString const * *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset();
	virtual long Skip(unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CEnumUsers
{
	unsigned long Next(IMsiString const * &);
};

struct CEnumVARIANTBSTR
{
	CEnumVARIANTBSTR(CEnumBuffer &);
	virtual long Clone(IEnumVARIANT * *);
	virtual long Item(unsigned long,tagVARIANT *);
	virtual long Next(unsigned long,tagVARIANT *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset();
	virtual long Skip(unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Count();
	virtual unsigned long Release();
};

class CEnumVARIANTComponent
{
protected:
	virtual ~CEnumVARIANTComponent();
public:
	virtual long Clone(IEnumVARIANT * *);
	virtual long UnitReturn(void *,tagVARIANT *);
	virtual void UnitDelete(void *);
};

class CEnumVARIANTComponentClient
{
protected:
	virtual ~CEnumVARIANTComponentClient();
public:
	virtual long Clone(IEnumVARIANT * *);
	virtual long UnitReturn(void *,tagVARIANT *);
	virtual void UnitDelete(void *);
};

class CEnumVARIANTMediaDisks
{
protected:
	virtual ~CEnumVARIANTMediaDisks();
public:
	virtual long Clone(IEnumVARIANT * *);
	virtual long UnitReturn(void *,tagVARIANT *);
	virtual void UnitDelete(void *);
};

struct CEnumVARIANTObject
{
	CEnumVARIANTObject(CEnumBuffer &);
	long ReturnItem(unsigned long,tagVARIANT *);
	virtual long Item(unsigned long,tagVARIANT *);
	virtual long Next(unsigned long,tagVARIANT *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset();
	virtual long Skip(unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Count();
	virtual unsigned long Release();
	void Destroy();
};

class CEnumVARIANTPatch
{
protected:
	virtual ~CEnumVARIANTPatch();
public:
	virtual long Clone(IEnumVARIANT * *);
	virtual long UnitReturn(void *,tagVARIANT *);
	virtual void UnitDelete(void *);
};

class CEnumVARIANTProduct
{
protected:
	virtual ~CEnumVARIANTProduct();
public:
	virtual long Clone(IEnumVARIANT * *);
	virtual long UnitReturn(void *,tagVARIANT *);
	virtual void UnitDelete(void *);
};

class CEnumVARIANTVolumeCosts
{
protected:
	virtual ~CEnumVARIANTVolumeCosts();
public:
	virtual long Clone(IEnumVARIANT * *);
	virtual long UnitReturn(void *,tagVARIANT *);
	virtual void UnitDelete(void *);
};

struct CFieldInteger
{
	virtual IMsiString const & GetMsiStringValue();
	virtual int GetIntegerValue();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned int GetUniqueId();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void SetUniqueId(unsigned int);
};

struct CFileRead
{
	Bool Close();
	Bool Open(IMsiPath &,unsigned short const *);
	CFileRead();
	CFileRead(int);
	unsigned short ReadString(IMsiString const * &);
	~CFileRead();
};

struct CFileTable
{
	IMsiRecord * Initialize(IMsiDatabase &,bool);
};

struct CFileWrite
{
	Bool Close();
	Bool Open(IMsiPath &,unsigned short const *,bool);
	Bool WriteInteger(int,int);
	Bool WriteMsiString(IMsiString const &,int);
	Bool WriteString(unsigned short const *,int);
	Bool WriteText(unsigned short const *,unsigned long,int);
	CFileWrite(int);
};

class CFilesInUseDialog
{
protected:
	virtual bool InitSpecial();
public:
	CFilesInUseDialog(unsigned short const *,unsigned short const *,int,int,int,int,int,IMsiRecord &);
	~CFilesInUseDialog();
};

struct CFixedLengthParam<39>
{
	operator unsigned short *();
	void Update();
};

struct CForbidTokenChangesDuringCall
{
	CForbidTokenChangesDuringCall();
	~CForbidTokenChangesDuringCall();
};

struct CGenericTable
{
	bool Next();
	bool UpdateIntegerColumn(int,int,bool);
	unsigned int RowCount();
	void FilterOnIntColumn(int,int);
	void Release();
	void ResetFilter();
	void SetFilter(int);
};

struct CHandle
{
	void operator=(void *);
	~CHandle();
};

struct CImpersonate
{
	CImpersonate(bool);
	~CImpersonate();
};

struct CInstallerFactory
{
	virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
	virtual long LockServer(int);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CLibAttr
{
	long Init(CComPointer<ITypeLib> &);
	void Release();
};

class CLogFile
{
	AWRITEDATA * PurgeCompletedAsyncOps();
	bool ScheduleAWrite(unsigned char const *,unsigned long);
public:
	bool Flush(bool);
	bool WriteLine(unsigned char const *,unsigned long);
	void Destroy();
	void Init(void *,int);
};

struct CMediaTable
{
	IMsiRecord * Initialize(IMsiDatabase &,bool);
	IMsiString const & GetSourceProp();
	bool UpdateDiskIDAndLastSequence(int,int);
	bool UpdateSourceProp(IMsiString const &,IMsiString const &);
};

struct CMessageContextState
{
	unsigned int SetState(bool);
};

struct CModuleFactory
{
	CModuleFactory();
	virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
	virtual long LockServer(int);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CMsgThrottler
{
	bool ShouldReport();
};

struct CMsiAPIMessage
{
	Bool FSetInternalHandlerValue(unsigned int);
	CMsiAPIMessage();
	imsEnum Message(imtEnum,IMsiRecord &);
	imsEnum Message(imtEnum,unsigned short const *);
	int (*SetExternalHandler(int (*)(void *,unsigned int,char const *),unsigned long,void *))(void *,unsigned int,char const *);
	int (*SetExternalHandler(int (*)(void *,unsigned int,unsigned short const *),unsigned long,void *))(void *,unsigned int,unsigned short const *);
	tagINSTALLUILEVEL SetInternalHandler(unsigned int,HWND__ * *);
	~CMsiAPIMessage();
};

class CMsiAPIMessageBase
{
protected:
	CMsiExternalUI * FindOldHandler(CMsiExternalUI::stExternalUIHandler const &);
	CMsiExternalUI const & SetExternalHandler(CMsiExternalUI &);
	~CMsiAPIMessageBase();
public:
	CMsiAPIMessageBase();
};

struct CMsiAPIMessageRec
{
	CMsiAPIMessageRec();
	imsEnum Message(imtEnum,IMsiRecord &);
	int (*SetExternalHandler(int (*)(void *,unsigned int,unsigned long),unsigned long,void *))(void *,unsigned int,unsigned long);
	~CMsiAPIMessageRec();
};

struct CMsiBaselineCost
{
	virtual IMsiRecord * GetDynamicCost(IMsiString const &,IMsiString const &,Bool,int &,int &,int &,int &,int &,int &,int &,int &);
	virtual IMsiRecord * GetUpdatedCostDelta(unsigned long,IMsiString const &,IMsiString const &,int &,int &,int &,int &,int &,int &,int &,int &);
	virtual IMsiRecord * Initialize();
	virtual IMsiRecord * Reset();
	virtual IMsiString const & GetMsiStringValue();
	virtual int GetIntegerValue();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned int GetUniqueId();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void SetUniqueId(unsigned int);
};

class CMsiBaselineManager
{
	IMsiRecord * SortBaselinesForProduct(IMsiString const &,int *);
	IMsiRecord * UpdateComponentCost(IMsiString const &);
	IMsiRecord * UpdateDatabaseCursors();
	IMsiString const & GetPatchCacheDirectory(bool,IMsiString const &);
	bool AddBaselineFile(IMsiString const &,IMsiString const &,eBaselineFileAttributeEnum);
	bool LocateInFileTable(IMsiString const &);
	static bool InsertIntoBaselineList(CMsiBaselineManager::sBaselineData * *,CMsiBaselineManager::sBaselineData *);
	static void DeleteBaselineList(CMsiBaselineManager::sBaselineData *);
	unsigned __int64 GetAggregateBaselineCacheCost();
	unsigned __int64 GetAllProductOnDiskCacheSize(IMsiPath &);
	unsigned __int64 GetExistingOnDiskBaselineSize();
public:
	CMsiBaselineManager(IMsiEngine &,IMsiDatabase &);
	IMsiRecord * AddBaseline(IMsiString const &,IMsiString const &,IMsiString const &);
	IMsiRecord * AddQFE(IMsiString const &,IMsiString const &);
	IMsiRecord * CacheBaselineFile(IMsiString const &,IMsiPath &,IMsiString const &,IMsiString const &,bool &);
	IMsiRecord * CacheComponentBaseline(IMsiString const &,IMsiString const &,IMsiPath *,IMsiString const &,IMsiString const &,bool,int,bool &);
	IMsiRecord * CreateBaselineTables();
	IMsiRecord * DeterminePatchCacheBaselines();
	IMsiRecord * EnumerateUnpatchedRTMFiles(void *,bool (*)(void *,unsigned int,int));
	IMsiRecord * GetBaselineCleanupCost(bool,bool,__int64 &);
	IMsiRecord * GetComponentCacheCost(IMsiString const &,unsigned long const *,unsigned __int64 &);
	IMsiRecord * InitializePerUserComponentDataForComponentBaseline();
	IMsiRecord * LinkBaselineCostToWindowsFolder();
	IMsiRecord * MarkBaselinesForProductUninstall();
	IMsiRecord * PopulateBaselineFileTable(IMsiString const &,IMsiCursor &);
	IMsiRecord * PopulateBaselineFileTableWithResequencedFiles(IMsiString const &,IMsiCursor &);
	IMsiRecord * UpdateBaselineFileTableAfterFileUpdate(IMsiString const &,IMsiString const &);
	IMsiRecord * UpdateMatchDataForEntirePatch(IMsiString const &);
	IMsiRecord * UpdateMatchDataForFile(IMsiCursor &);
	bool CheckBaselineAgainstPolicy(unsigned long *);
	bool DisableBaselineForCostReasons(unsigned long *);
	bool FComponentInstalledPerUserForUser(IMsiString const &,IMsiString const &);
	bool FileHasFullFileMinorUpdate(IMsiString const &);
	bool FileHasFullFileUpdate(IMsiString const &);
	bool GetBaselineCachePathString(IMsiString const &,IMsiString const * &);
	bool GetFileBaselinePath(IMsiString const &,IMsiString const &,IMsiString const &,IMsiPath * &);
	bool GetFileBaselineSource(IMsiString const &,bool,eSourceFileType &,int &,IMsiString const * &);
	bool GetLastLogicalBaseline(IMsiString const * &,bool &);
	bool PatchResponsibleForABaseline(IMsiString const &);
	ieiEnum SetBaselineCacheActivityForThisTransaction();
	iesEnum CleanupStaleBaselineCache();
	iesEnum FlushComponentBaselineOpcodes();
	iesEnum ForceCacheComponentBaseline();
	iesEnum SendBaselineDefinitionOpcodes();
	void DumpBaselineDataTable();
	void DumpBaselineFileTable();
	~CMsiBaselineManager();
};

class CMsiCabinetCopy
{
protected:
	IMsiRecord * EndCopy();
	IMsiRecord * PostCabinetError(IMsiPath &,unsigned short const *,FDIInterfaceError,long);
	virtual IMsiRecord * _CopyTo(IMsiPath &,IMsiPath *,IAssemblyCacheItem *,CMsiCustomActionManager *,bool,IMsiRecord &,bool);
	virtual ~CMsiCabinetCopy();
public:
	CMsiCabinetCopy(IMsiServices *,icbtEnum);
	virtual IMsiRecord * ChangeMedia(IMsiPath &,unsigned short const *,Bool,IMsiStream *,IMsiStream *);
	virtual IMsiRecord * CloseMedia();
	virtual IMsiRecord * InitCopy(IMsiStorage *);
	virtual int SetNotification(int,int);
};

struct CMsiClientMessage
{
	virtual imsEnum Message(imtEnum,IMsiRecord &);
	virtual imsEnum MessageNoRecord(imtEnum);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CMsiClientMessageNull
{
	virtual imsEnum Message(imtEnum,IMsiRecord &);
};

class CMsiConfigurationManager
{
protected:
	unsigned char EnsureFoldersKey();
	~CMsiConfigurationManager();
public:
	CMsiConfigurationManager(IMsiServices &);
	IMsiCustomAction * GetEEUICustomActionProxy(unsigned char *,int *,unsigned long *);
	static iesEnum InstallFinalize(iesEnum,CMsiConfigurationManager &,IMsiMessage &,unsigned char);
	virtual CMsiCustomActionManager * GetCustomActionManager();
	virtual IMsiCustomAction * CreateCustomActionProxy(icacCustomActionContext,unsigned long,IMsiRemoteAPI *,unsigned short const *,unsigned long,unsigned char *,int *,void * *,unsigned long *,bool,bool,void *);
	virtual IMsiRecord * DisableRollbackScripts(Bool);
	virtual IMsiRecord * GetRollbackScriptEnumerator(_FILETIME,Bool,IEnumMsiString * &);
	virtual IMsiRecord * IsFolderRemovable(IMsiPath &,Bool,Bool &);
	virtual IMsiRecord * RegisterComponent(IMsiString const &,IMsiString const &,tagINSTALLSTATE,IMsiString const &,unsigned int,int);
	virtual IMsiRecord * RegisterFolder(IMsiPath &,Bool);
	virtual IMsiRecord * RegisterRollbackScript(unsigned short const *);
	virtual IMsiRecord * RegisterUser(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *);
	virtual IMsiRecord * RemoveRunOnceEntry(unsigned short const *);
	virtual IMsiRecord * RollbackScriptsDisabled(Bool &);
	virtual IMsiRecord * SetLastUsedSource(HWND__ *,unsigned short const *,unsigned short const *,Bool,Bool,IMsiString const * *,IMsiString const * *,IMsiString const * *,IMsiString const * *,IMsiString const * *,IMsiString const * *);
	virtual IMsiRecord * SetLastUsedSource(HWND__ *,unsigned short const *,unsigned short const *,unsigned char,unsigned char);
	virtual IMsiRecord * UnregisterComponent(IMsiString const &,IMsiString const &);
	virtual IMsiRecord * UnregisterFolder(IMsiPath &);
	virtual IMsiRecord * UnregisterRollbackScript(unsigned short const *);
	virtual IMsiServices & GetServices();
	virtual iesEnum InstallFinalize(iesEnum,IMsiMessage &,unsigned char);
	virtual iesEnum RunScript(unsigned short const *,IMsiMessage &,IMsiDirectoryManager *,unsigned char);
	virtual int DoInstall(ireEnum,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,int,unsigned char,IMsiMessage &,iioEnum,unsigned long,HWND__ *,IMsiRecord const &);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned char CleanupTempPackages(IMsiMessage &,unsigned char);
	virtual unsigned char FMultiPackageTransaction();
	virtual unsigned char IsServiceInstalling();
	virtual unsigned char Reboot();
	virtual unsigned int CreateCustomActionServer(icacCustomActionContext,unsigned long,IMsiRemoteAPI *,unsigned short const *,unsigned long,unsigned long,unsigned char *,int *,IMsiCustomAction * *,unsigned long *,unsigned char);
	virtual unsigned int GetJoinEEUIInfo(unsigned short *,unsigned long *,icacCustomActionContext *);
	virtual unsigned int GetTransactionAttributes();
	virtual unsigned int MsiBeginTransactionW(unsigned short const *,unsigned long,unsigned long *,unsigned short *);
	virtual unsigned int MsiEndTransaction(unsigned long,IMsiMessage &);
	virtual unsigned int MsiJoinTransaction(unsigned long,unsigned long,unsigned long *,unsigned short *);
	virtual unsigned int RegisterCustomActionServer(icacCustomActionContext *,unsigned char const *,int,IMsiCustomAction *,unsigned long *,IMsiRemoteAPI * *,unsigned long *);
	virtual unsigned int SetChangeOfOwnerEvent();
	virtual unsigned int SetEEUIDirectoryAndFilter(unsigned short const *,unsigned long);
	virtual unsigned int SetEEUIServerDetails(IMsiCustomAction *,unsigned char const *,unsigned long,icacCustomActionContext);
	virtual unsigned int SetInstallParentWindow(HWND__ *);
	virtual unsigned int ShutdownCustomActionServer();
	virtual unsigned int SourceListAddSource(unsigned short const *,unsigned short const *,isrcEnum,unsigned short const *);
	virtual unsigned int SourceListClearByType(unsigned short const *,unsigned short const *,isrcEnum);
	virtual unsigned int SourceListClearLastUsed(unsigned short const *,unsigned short const *);
	virtual unsigned int SourceListSetInfo(unsigned short const *,unsigned short const *,unsigned long,unsigned long,unsigned short const *,unsigned short const *);
	virtual unsigned int SourceListUpdate(unsigned char,unsigned short const *,unsigned short const *,unsigned long,unsigned long,unsigned long,unsigned short const *,unsigned short const *,unsigned long,iSrcOpEnum);
	virtual unsigned int UninstallApplication(unsigned short const *,unsigned int);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void ChangeServices(IMsiServices &);
	virtual void CreateCustomActionManager(bool);
	virtual void EnableReboot(unsigned char,IMsiString const &,IMsiString const &);
	virtual void EnableUninstallApplication(bool,bool,bool,IMsiString const &,unsigned long);
	virtual void FatalErrorShutdown();
	virtual void RevokeGITInterface(unsigned long);
	virtual void SetObjectHandleReferences(void * *,void * *,void * *,_RTL_CRITICAL_SECTION *);
	virtual void SignalCallbackEvent();
};

struct CMsiConvertString
{
	IMsiString const & operator*();
	~CMsiConvertString();
};

class CMsiCursor
{
protected:
	Bool CheckNonNullColumns();
	IMsiRecord & SetUpRecord(int);
	IMsiStream * GetObjectStream(int);
	int SetupForeignKeyValidation(MsiString &,MsiString &,int,int);
	int ValidateForeignKey(MsiString &,MsiString &,Bool,int,int);
	iveEnum CheckIntegerValue(IMsiTable &,IMsiCursor &,int,int &,Bool);
	iveEnum CheckStringValue(IMsiTable &,IMsiCursor &,int,int &,Bool);
	iveEnum ValidateField(IMsiTable &,IMsiCursor &,int,int &,Bool,int,int);
	void CheckDuplicateKeys(IMsiRecord * &,int &);
	void CheckForeignKeys(IMsiTable &,IMsiCursor &,IMsiRecord * &,int,int &);
public:
	CMsiCursor(CMsiTable &,CMsiDatabase &,Bool);
	IMsiStream * CreateInputStream(IMsiStorage *);
	static void * operator new(unsigned __int64);
	virtual Bool Assign();
	virtual Bool Delete();
	virtual Bool GetRowState(iraEnum);
	virtual Bool Insert();
	virtual Bool InsertTemporary();
	virtual Bool Merge();
	virtual Bool PutInteger(unsigned int,int);
	virtual Bool PutMsiData(unsigned int,IMsiData const *);
	virtual Bool PutNull(unsigned int);
	virtual Bool PutStream(unsigned int,IMsiStream *);
	virtual Bool PutString(unsigned int,IMsiString const &);
	virtual Bool Refresh();
	virtual Bool Replace();
	virtual Bool Seek();
	virtual Bool SetRowState(iraEnum,Bool);
	virtual Bool Update();
	virtual IMsiData const * GetMsiData(unsigned int);
	virtual IMsiRecord * Validate(IMsiTable &,IMsiCursor &,int);
	virtual IMsiStream * GetStream(unsigned int);
	virtual IMsiString const & GetMoniker();
	virtual IMsiString const & GetString(unsigned int);
	virtual IMsiTable & GetTable();
	virtual int GetInteger(unsigned int);
	virtual int Next();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned int SetFilter(unsigned int);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void Reset();
	virtual void RowDeleted(unsigned int,unsigned int);
	virtual void RowInserted(unsigned int);
	void DerefStrings();
};

class CMsiCustomAction
{
	IMsiRemoteAPI * GetAPI();
	static unsigned long CustomActionThread(CustomActionData *);
	void WaitForCAMainThread();
protected:
	~CMsiCustomAction();
public:
	CMsiCustomAction();
	long CloseAllHandles();
	long CloseHandle(unsigned long);
	long CreateRecord(unsigned int,unsigned long *);
	long DatabaseCommit(unsigned long);
	long DatabaseGetPrimaryKeys(unsigned long,unsigned short const *,unsigned long *);
	long DatabaseIsTablePersistent(unsigned long,unsigned short const *,int *);
	long DatabaseOpenView(unsigned long,unsigned short const *,unsigned long *);
	long DoAction(unsigned long,unsigned short const *);
	long EnumComponentCosts(unsigned long,unsigned short const *,unsigned long,long,unsigned short *,unsigned long,unsigned long *,int *,int *);
	long EvaluateCondition(unsigned long,unsigned short const *,int *);
	long FormatRecord(unsigned long,unsigned long,unsigned short *,unsigned long,unsigned long *);
	long GetActiveDatabase(unsigned long,unsigned long *);
	long GetComponentState(unsigned long,unsigned short const *,long *,long *);
	long GetFeatureCost(unsigned long,unsigned short const *,int,long,int *);
	long GetFeatureState(unsigned long,unsigned short const *,long *,long *);
	long GetFeatureValidStates(unsigned long,unsigned short const *,unsigned long *);
	long GetInstallerObject(IDispatch * *);
	long GetLanguage(unsigned long,unsigned short *);
	long GetLastErrorRecord(unsigned long *);
	long GetMode(unsigned long,long,unsigned char *);
	long GetProperty(unsigned long,unsigned short const *,unsigned short *,unsigned long,unsigned long *);
	long GetSourcePath(unsigned long,unsigned short const *,unsigned short *,unsigned long,unsigned long *);
	long GetSummaryInformation(unsigned long,unsigned short const *,unsigned int,unsigned long *);
	long GetTargetPath(unsigned long,unsigned short const *,unsigned short *,unsigned long,unsigned long *);
	long OpenDatabase(unsigned short const *,unsigned short const *,unsigned long *);
	long ProcessMessage(unsigned long,long,unsigned long,int *);
	long RecordClearData(unsigned long);
	long RecordDataSize(unsigned long,unsigned int,unsigned int *);
	long RecordGetFieldCount(unsigned long,unsigned int *);
	long RecordGetInteger(unsigned long,unsigned int,int *);
	long RecordGetString(unsigned long,unsigned int,unsigned short *,unsigned long,unsigned long *);
	long RecordIsNull(unsigned long,unsigned int,unsigned char *);
	long RecordReadStream(unsigned long,unsigned int,unsigned char,char *,unsigned long *);
	long RecordSetInteger(unsigned long,unsigned int,int);
	long RecordSetStream(unsigned long,unsigned int,unsigned short const *);
	long RecordSetString(unsigned long,unsigned int,unsigned short const *);
	long Sequence(unsigned long,unsigned short const *,int);
	long SetComponentState(unsigned long,unsigned short const *,long);
	long SetFeatureAttributes(unsigned long,unsigned short const *,long);
	long SetFeatureState(unsigned long,unsigned short const *,long);
	long SetInstallLevel(unsigned long,int);
	long SetMode(unsigned long,long,unsigned char);
	long SetProperty(unsigned long,unsigned short const *,unsigned short const *);
	long SetTargetPath(unsigned long,unsigned short const *,unsigned short const *);
	long SummaryInfoGetProperty(unsigned long,unsigned int,unsigned int *,int *,_FILETIME *,unsigned short *,unsigned long,unsigned long *);
	long SummaryInfoGetPropertyCount(unsigned long,unsigned int *);
	long SummaryInfoPersist(unsigned long);
	long SummaryInfoSetProperty(unsigned long,unsigned int,unsigned int,int,_FILETIME *,unsigned short const *);
	long VerifyDiskSpace(unsigned long);
	long ViewClose(unsigned long);
	long ViewExecute(unsigned long,unsigned long);
	long ViewFetch(unsigned long,unsigned long *);
	long ViewGetColumnInfo(unsigned long,long,unsigned long *);
	long ViewGetError(unsigned long,unsigned short *,unsigned long,unsigned long *,int *);
	long ViewModify(unsigned long,long,unsigned long);
	virtual long CallInitDLL(unsigned long,unsigned short const *,unsigned long *,unsigned long *);
	virtual long CallMessageDLL(unsigned int,unsigned long,unsigned long *);
	virtual long CallShutdownDLL(unsigned long *);
	virtual long FinishDLLCustomAction(unsigned long);
	virtual long GetOwningProcessId(unsigned long *);
	virtual long LoadEmbeddedDLL(unsigned short const *,unsigned char);
	virtual long PrepareDLLCustomAction(unsigned short const *,unsigned short const *,unsigned short const *,unsigned long,unsigned char,unsigned char,_GUID const *,_GUID const *,unsigned long *);
	virtual long ProcessTypeLibrary(unsigned short const *,unsigned long,unsigned short const *,unsigned short const *,int,int *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QueryPathOfRegTypeLib(_GUID const &,unsigned short,unsigned short,unsigned long,unsigned short *,int);
	virtual long RunDLLCustomAction(unsigned long,unsigned long *);
	virtual long RunScriptAction(int,IDispatch *,unsigned short const *,unsigned short const *,unsigned short,int *,int *,char * *);
	virtual long SQLConfigDataSource(unsigned short,unsigned short const *,unsigned short const *,unsigned long,int *);
	virtual long SQLConfigDriver(unsigned short,unsigned short const *,unsigned short const *,unsigned short *,unsigned short,unsigned short *,int *);
	virtual long SQLInstallDriverEx(int,unsigned short const *,unsigned short const *,unsigned short *,unsigned short,unsigned short *,unsigned short,unsigned long *,int *);
	virtual long SQLInstallDriverManager(unsigned short *,unsigned short,unsigned short *,int *);
	virtual long SQLInstallTranslatorEx(int,unsigned short const *,unsigned short const *,unsigned short *,unsigned short,unsigned short *,unsigned short,unsigned long *,int *);
	virtual long SQLInstallerError(unsigned short,unsigned long *,unsigned short *,unsigned short,unsigned short *);
	virtual long SQLRemoveDriver(unsigned short const *,int,unsigned long *,int *);
	virtual long SQLRemoveDriverManager(unsigned long *,int *);
	virtual long SQLRemoveTranslator(unsigned short const *,unsigned long *,int *);
	virtual long SetChangeOwningProcessEvent(void *);
	virtual long SetClientInfo(unsigned long,bool,bool,bool,unsigned long,void *);
	virtual long SetCookie(icacCustomActionContext *,unsigned char const *);
	virtual long SetNewClientProcess(unsigned long,IMsiRemoteAPI *);
	virtual long SetRemoteAPI(IMsiRemoteAPI *);
	virtual long SetShutdownEvent(void *);
	virtual long URTAddAssemblyInstallComponent(unsigned short const *,unsigned short const *,unsigned short const *);
	virtual long URTAreAssembliesEqual(unsigned short const *,unsigned short const *,int *,int *,char * *);
	virtual long URTCarryingNDP(int);
	virtual long URTCommitAssemblies(unsigned short const *,int *,char * *);
	virtual long URTCommitAssemblyStream();
	virtual long URTCreateAssemblyFileStream(unsigned short const *,int);
	virtual long URTGetAssemblyCacheItem(unsigned short const *,unsigned short const *,unsigned long,int *,char * *);
	virtual long URTGetFusionPath(unsigned short const *,int,unsigned short *,unsigned long,unsigned long *,unsigned short *,unsigned long,int *);
	virtual long URTIsAssemblyInstalled(unsigned short const *,unsigned short const *,int *,int *,char * *);
	virtual long URTMakeFusionFullPath(unsigned short const *,unsigned short *,unsigned long,int *);
	virtual long URTProvideGlobalAssembly(unsigned short const *,unsigned long,unsigned long *);
	virtual long URTQueryAssembly(unsigned short const *,unsigned short const *,unsigned long,int *,char * *);
	virtual long URTUninstallAssembly(unsigned short const *,unsigned short const *,int *,char * *);
	virtual long URTUnloadFusionBinaries();
	virtual long URTWriteAssemblyBits(char *,unsigned long,unsigned long *);
	virtual long UnloadEmbeddedDLL();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CMsiCustomActionManager
{
	IMsiCustomAction * GetCustomActionInterface(bool,icacCustomActionContext);
	bool MsgWaitForThreadOrEvent();
	long GetAPICustomActionInterface(ibtBinaryType,IMsiCustomAction * *);
	static unsigned long CustomActionManagerThread(CMsiCustomActionManager *);
	unsigned long CreateAndRegisterInterface(icacCustomActionContext);
	void ShutdownSpecificCustomActionServer(icacCustomActionContext);
public:
	CMsiCustomActionManager(bool);
	bool EnsureHKCUKeyMappingState(bool);
	long CallInitDLL(unsigned long,unsigned short const *,unsigned long *,unsigned long *);
	long CallMessageDLL(unsigned int,unsigned long,unsigned long *);
	long CallShutdownDLL(unsigned long *);
	long LoadEmbeddedDLL(unsigned short const *,bool);
	long ProcessTypeLibrary(unsigned short const *,unsigned long,unsigned short const *,unsigned short const *,int,int *);
	long QueryPathOfRegTypeLib(_GUID const &,unsigned short,unsigned short,unsigned long,unsigned short *,int);
	long RunCustomAction(icacCustomActionContext,unsigned short const *,unsigned short const *,unsigned long,bool,bool,bool,_GUID const *,_GUID const *,IMsiMessage &,unsigned short const *,unsigned long *);
	long RunScriptAction(icacCustomActionContext,int,IDispatch *,unsigned short const *,unsigned short const *,unsigned short,bool,UniqueThreadID,int *,IMsiRecord * *);
	long SQLConfigDataSource(ibtBinaryType,unsigned short,unsigned short const *,unsigned short const *,unsigned long,int *);
	long SQLConfigDriver(ibtBinaryType,unsigned short,unsigned short const *,unsigned short const *,unsigned short *,unsigned short,unsigned short *,int *);
	long SQLInstallDriverEx(ibtBinaryType,int,unsigned short const *,unsigned short const *,unsigned short *,unsigned short,unsigned short *,unsigned short,unsigned long *,int *);
	long SQLInstallDriverManager(ibtBinaryType,unsigned short *,unsigned short,unsigned short *,int *);
	long SQLInstallTranslatorEx(ibtBinaryType,int,unsigned short const *,unsigned short const *,unsigned short *,unsigned short,unsigned short *,unsigned short,unsigned long *,int *);
	long SQLRemoveDriver(ibtBinaryType,unsigned short const *,int,unsigned long *,int *);
	long SQLRemoveDriverManager(ibtBinaryType,unsigned long *,int *);
	long SQLRemoveTranslator(ibtBinaryType,unsigned short const *,unsigned long *,int *);
	long URTAddAssemblyInstallComponent(unsigned short const *,unsigned short const *,unsigned short const *);
	long URTAreAssembliesEqual(unsigned short const *,unsigned short const *,int *,IMsiRecord * *);
	long URTCommitAssemblies(unsigned short const *,IMsiRecord * *);
	long URTCommitAssemblyStream();
	long URTCreateAssemblyFileStream(unsigned short const *,int);
	long URTGetAssemblyCacheItem(unsigned short const *,unsigned short const *,unsigned long,IMsiRecord * *);
	long URTGetFusionPath(unsigned short const *,int,unsigned short *,unsigned long,unsigned long *,unsigned short *,unsigned long,int *);
	long URTIsAssemblyInstalled(unsigned short const *,unsigned short const *,int *,IMsiRecord * *);
	long URTMakeFusionFullPath(unsigned short const *,unsigned short *,unsigned long,int *);
	long URTProvideGlobalAssembly(unsigned short const *,unsigned long,unsigned long *);
	long URTQueryAssembly(unsigned short const *,unsigned short const *,unsigned long,IMsiRecord * *);
	long URTUninstallAssembly(unsigned short const *,unsigned short const *,IMsiRecord * *);
	long URTUnloadFusionBinaries();
	long URTWriteAssemblyBits(char *,unsigned long,unsigned long *);
	long UnloadEmbeddedDLL();
	short SQLInstallerError(ibtBinaryType,unsigned short,unsigned long *,unsigned short *,unsigned short,unsigned short *);
	unsigned int ShutdownCustomActionServer();
	unsigned int ShutdownEEUIServer();
	void GetEEUIServerDetails(IMsiCustomAction * *,unsigned char *,unsigned long *,icacCustomActionContext *);
	~CMsiCustomActionManager();
};

struct CMsiCustomContext
{
	CMsiCustomContext(int,IMsiString const &,IMsiString const &,unsigned short,IMsiMessage &);
	IMsiString const & GetProperty(unsigned short const *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CMsiDCursor
{
	virtual void RowDeleted(unsigned int,unsigned int);
	virtual void RowInserted(unsigned int);
};

struct CMsiDataWrapper
{
	virtual IMsiString const & GetMsiStringValue();
	virtual int GetIntegerValue();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned int GetUniqueId();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void SetUniqueId(unsigned int);
};

class CMsiDatabase
{
	unsigned int FindString(int,int,unsigned short const *);
	unsigned int HashString(unsigned short const *,int &);
protected:
	Bool CompareTableName(IMsiCursor &,int);
	Bool UpdateMergeErrorTable(IMsiTable &,IMsiString const &,int,IMsiTable &);
	IMsiRecord * AddMarkingColumn(IMsiTable &,IMsiCursor &,int &);
	IMsiRecord * ApplyTransforms(unsigned int,CMsiTable &,int);
	IMsiRecord * CheckTableProperties(int &,int &,int &,IMsiTable &,IMsiTable &,IMsiString const &,IMsiDatabase &,IMsiDatabase &);
	IMsiRecord * CompareRows(CTransformStreamWrite &,IMsiCursor &,IMsiCursor &,IMsiDatabase &,int &,IMsiStorage *);
	IMsiRecord * CreateSystemTables(IMsiStorage *,idoEnum);
	IMsiRecord * CreateTransformStringPool(IMsiStorage &,CMsiDatabase * &);
	IMsiRecord * InitStringCache(IMsiStorage *);
	IMsiRecord * MergeCompareTables(IMsiString const &,CMsiDatabase &,IMsiDatabase &,int &,Bool &,IMsiTable *);
	IMsiRecord * StoreStringCache(IMsiStorage &,unsigned int *,int);
	IMsiRecord * TransformColumnCatalog(IMsiStorage &,CMsiDatabase &,int);
	IMsiRecord * TransformCompareTables(IMsiString const &,IMsiDatabase &,IMsiDatabase &,CMsiDatabase &,IMsiStorage *,CTransformStreamWrite &,Bool &);
	IMsiRecord * TransformTable(unsigned int,CMsiTable &,IMsiStorage &,CMsiDatabase &,int,int,bool);
	IMsiRecord * TransformTableCatalog(IMsiStorage &,CMsiDatabase &,int);
	IMsiRecord * ViewTransform(IMsiStorage &,int,unsigned short const *,IMsiRecord *,bool,bool);
	virtual ~CMsiDatabase();
	void MergeErrorTableSetup(IMsiTable &);
	void MergeOperation(IMsiCursor &,IMsiCursor &,IMsiTable &,int,int &);
public:
	Bool LockIfNotPersisted(unsigned int);
	CMsiDatabase(IMsiServices &);
	IMsiRecord * OpenDatabase(IMsiStorage &,idoEnum);
	IMsiRecord * OpenDatabase(unsigned short const *,idoEnum);
	IMsiRecord * PostError(int,unsigned short const *,int);
	IMsiRecord * PostError(int,unsigned short const *,unsigned short const *);
	IMsiRecord * PostOutOfMemory();
	IMsiStorage * GetOutputStorage();
	IMsiStorage * GetTransformStorage(unsigned int);
	IMsiString const & ComputeStreamName(IMsiString const &,unsigned int *,unsigned short *);
	IMsiString const & DecodeStringNoRef(unsigned int);
	static void * operator new(unsigned __int64);
	unsigned int BindString(IMsiString const &);
	virtual Bool LockTable(IMsiString const &,Bool);
	virtual IMsiRecord * Commit();
	virtual IMsiRecord * CreateOutputDatabase(unsigned short const *,Bool);
	virtual IMsiRecord * CreateTable(IMsiString const &,unsigned int,IMsiTable * &);
	virtual IMsiRecord * DropTable(unsigned short const *);
	virtual IMsiRecord * ExportTable(unsigned short const *,IMsiPath &,unsigned short const *);
	virtual IMsiRecord * GenerateTransform(IMsiDatabase &,IMsiStorage *,int,int);
	virtual IMsiRecord * GetPrimaryKeys(unsigned short const *);
	virtual IMsiRecord * ImportTable(IMsiPath &,unsigned short const *);
	virtual IMsiRecord * LoadTable(IMsiString const &,unsigned int,IMsiTable * &);
	virtual IMsiRecord * MergeDatabase(IMsiDatabase &,IMsiTable *);
	virtual IMsiRecord * OpenView(unsigned short const *,ivcEnum,IMsiView * &);
	virtual IMsiRecord * SetTransform(IMsiStorage &,int);
	virtual IMsiRecord * SetTransformEx(IMsiStorage &,int,unsigned short const *,IMsiRecord *,bool,bool);
	virtual IMsiServices & GetServices();
	virtual IMsiStorage * GetStorage(int);
	virtual IMsiString const & CreateTempTableName();
	virtual IMsiString const & DecodeString(unsigned int);
	virtual IMsiTable * GetCatalogTable(int);
	virtual bool GetTableState(unsigned short const *,itsEnum);
	virtual idsEnum GetUpdateState();
	virtual int GetANSICodePage();
	virtual itsEnum FindTable(IMsiString const &);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned int EncodeString(IMsiString const &);
	virtual unsigned int EncodeStringSz(unsigned short const *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void RemoveObjectData(int);
	void BindStringIndex(unsigned int);
	void TableReleased(unsigned int);
	void UnbindStringIndex(unsigned int);
};

struct CMsiDuplicateFileCost
{
	virtual IMsiRecord * GetDynamicCost(IMsiString const &,IMsiString const &,Bool,int &,int &,int &,int &,int &,int &,int &,int &);
	virtual IMsiRecord * Initialize();
};

class CMsiEmbeddedUIManager
{
protected:
	unsigned long ConvertToUILevel(iuiEnum,iioEnum);
	unsigned long CreateTemporaryDirectory();
	void SetUILevel(iuiEnum &,unsigned long,iioEnum &);
public:
	CMsiEmbeddedUIManager(IMsiDatabase *);
	bool SendEEUICADetailsToServer();
	imsEnum Message(imtEnum,IMsiRecord &);
	int StreamSingleFileToDisk(unsigned short const *,IMsiRecord *);
	unsigned long InitializeHandlers(unsigned long,iuiEnum &,iioEnum &,bool);
	unsigned long JoinExistingEEUI(unsigned short *,unsigned long,icacCustomActionContext);
	unsigned short * CleanupTempDirectory();
};

class CMsiEndTransactionMessageProcessor
{
	static unsigned long ProcessEndTransactionMessages(void *);
public:
	CMsiEndTransactionMessageProcessor();
	~CMsiEndTransactionMessageProcessor();
};

class CMsiEngine
{
protected:
	Bool CreatePropertyTable(IMsiDatabase &,unsigned short const *,Bool);
	Bool PIDCheckSum(IMsiString const &);
	Bool SetPatchSourceProperties();
	Bool UnlockInstallServer(Bool);
	IMsiRecord * AddCostToVolumeTable(IMsiPath *,int,int,int,int);
	IMsiRecord * CalculateFeatureInstalledStates();
	IMsiRecord * CheckLegacyAppsForSharedUninstalls(IMsiString const &,iisEnum &,IMsiRecord const &);
	IMsiRecord * CheckNeverOverwriteForRegKeypath(unsigned int,iisEnum &);
	IMsiRecord * ComponentIDToComponent(IMsiString const &,IMsiString const * &);
	IMsiRecord * ConfigureAllFeatures(iisEnum);
	IMsiRecord * ConfigureComponent(IMsiString const &,iisEnum);
	IMsiRecord * ConfigureFile(IMsiString const &,iisEnum);
	IMsiRecord * ConfigureThisFeature(IMsiString const &,iisEnum,Bool);
	IMsiRecord * CreateComponentFeatureTable(IMsiTable * &);
	IMsiRecord * CreateNewPatchTableSchema(IMsiDatabase &,IMsiCursor &);
	IMsiRecord * CreateNewTempPatchDataTables(IMsiDatabase &);
	IMsiRecord * CreatePathObject(IMsiString const &,IMsiPath * &);
	IMsiRecord * CreateTargetPathsCore(IMsiString const *);
	IMsiRecord * DetermineComponentInstalledStates();
	IMsiRecord * DetermineEngineCost(int *,int *);
	IMsiRecord * DetermineFeatureInstalledStates();
	IMsiRecord * DeterminePatchableComponents();
	IMsiRecord * DoStateTransitionForSharedInstalls(unsigned int,iisEnum &);
	IMsiRecord * DoStateTransitionForSharedUninstalls(iisEnum &,IMsiRecord const &);
	IMsiRecord * EnumEngineCosts(int,Bool,Bool,Bool &,IMsiPath * &,int &,int &,int &,Bool *);
	IMsiRecord * FetchSingleRow(unsigned short const *,unsigned short const *,unsigned short const *);
	IMsiRecord * GetComponentActionCost(IMsiCursor *,iisEnum,int &,int &,int &,int &);
	IMsiRecord * GetComponentCost(IMsiCursor *,int &,int &,int &,int &);
	IMsiRecord * GetCurrentSelectState(IMsiString const * &,IMsiString const * &,IMsiString const * *,IMsiString const * *,Bool);
	IMsiRecord * GetFeatureCompositeInstalledState(IMsiString const &,iisEnum &);
	IMsiRecord * GetFeatureParent(IMsiString const &,IMsiString const * &);
	IMsiRecord * GetFeatureValidStates(unsigned int,int &,IMsiCursor *,IMsiCursor *);
	IMsiRecord * GetFileInstalledLocation(IMsiString const &,IMsiString const * &,bool,bool *);
	IMsiRecord * GetScriptCost(int *,int *,Bool,Bool *);
	IMsiRecord * GetTotalSubComponentActionCost(IMsiString const &,iisEnum,int &,int &);
	IMsiRecord * LoadComponentTable();
	IMsiRecord * LoadCustomActionTableAndCursor(IMsiDatabase &);
	IMsiRecord * LoadFeatureTable();
	IMsiRecord * LoadFileTable(IMsiDatabase *,int,IMsiTable * &);
	IMsiRecord * LockInstallServer(IMsiRecord *,IMsiRecord * &);
	IMsiRecord * MarkOrResetFeatureTree(IMsiString const &,Bool);
	IMsiRecord * ProcessPropertyFeatureRequests(int *,Bool);
	IMsiRecord * RecostComponent(unsigned int,bool);
	IMsiRecord * RecostComponentActionChange(IMsiCursor *,iisEnum);
	IMsiRecord * RecostComponentDirectoryChange(IMsiCursor *,IMsiPath *,bool);
	IMsiRecord * RecostFeatureLinkedComponents(IMsiString const &);
	IMsiRecord * RecostLinkedComponents(IMsiString const &);
	IMsiRecord * ResolveSource(unsigned short const *,unsigned short const *,iuiEnum,Bool,IMsiString const * *,IMsiString const * *,Bool);
	IMsiRecord * SetComponentState(IMsiCursor *,int,unsigned int,iisEnum);
	IMsiRecord * SetDirectoryNonConfigurable(IMsiString const &);
	IMsiRecord * SetFeature(IMsiString const &,iisEnum);
	IMsiRecord * SetFeatureChildren(IMsiString const &,iisEnum);
	IMsiRecord * SetFeatureComponents(unsigned int);
	IMsiRecord * SetFileComponentStates(IMsiCursor *,IMsiCursor *,IMsiCursor *);
	IMsiRecord * SetThisFeature(IMsiString const &,iisEnum,Bool);
	IMsiRecord * UpdateComponentActionStates(unsigned int,iisEnum,iisEnum,bool);
	IMsiRecord * UpdateFeatureActionState(IMsiString const *,Bool,IMsiCursor *,IMsiCursor *);
	IMsiRecord * UpdateFeatureComponents(IMsiString const *);
	IMsiRecord * ValidateFeatureSelectState(IMsiString const &,iisEnum,iisEnum &);
	IMsiString const & GetDefaultDir(IMsiString const &,bool);
	IMsiString const & GetEstimatedInstallSize();
	IMsiString const & GetPatchDisplayName(IMsiString const &);
	IMsiString const & GetRootParentProductKey();
	IMsiString const & ValidatePIDSegment(IMsiString const &,Bool);
	bool AdjustForScriptGuess(int &,int &,unsigned __int64,Bool *);
	bool ApplyAppCompatProperties();
	bool ApplyAppCompatTransforms(unsigned short const *,unsigned short const *,IMsiDatabase &,IMsiString const &,IMsiString const &,iacpAppCompatTransformApplyPoint,iacsAppCompatShimFlags &,bool,bool,bool &);
	bool CheckAssemblyPlatformSupport();
	bool CloseHydraRegistryWindow(bool);
	bool CreateFolderCache(IMsiDatabase &);
	bool EnableLUAPatching();
	bool FRunPatchUninstallCustomAction(unsigned short const *);
	bool IsPropertyHidden(unsigned short const *,unsigned short const *,IMsiDatabase &,bool *);
	bool IsValidLUAPatch(IMsiDatabase &,IMsiString const &,IMsiString const &);
	bool OpenHydraRegistryWindow(bool);
	bool SetPropertyCore(IMsiCursor *,IMsiString const &,IMsiString const &);
	bool TerminalServerInstallsAreAllowed(bool);
	ieiEnum ApplyLanguageTransform(int,IMsiDatabase &);
	ieiEnum DoInitialize(unsigned short const *,iuiEnum,unsigned short const *,unsigned short const *,iioEnum,IMsiRecord const *);
	ieiEnum EnginePromptForElevatedCredentials(IMsiDatabase &,iitEnum,bool,unsigned long,bool);
	ieiEnum FetchUpdatedBinaryStreamIntoPatchUninstallTable(IMsiStorage &,IMsiString const &,IMsiString const &);
	ieiEnum GeneratePatchUninstallTransformViewTables(IMsiString const &,IMsiStorage &,IMsiDatabase &,IMsiTable *);
	ieiEnum IdentifyAndInsertCustomActionInAPatchToSequenceTable(IMsiCursor *,IMsiString const &);
	ieiEnum IdentifyPatchUninstallCustomActions(IMsiDatabase &,IMsiTable *,IMsiStorage &);
	ieiEnum InitializeLogging();
	ieiEnum InitializeTransforms(IMsiDatabase &,IMsiStorage *,IMsiString const &,Bool,IMsiString const * *,bool,bool,int *,unsigned short const *,unsigned short const *,IMsiString const * *,tsEnum *,IMsiString const * *);
	ieiEnum InitializeUI(iuiEnum);
	ieiEnum InsertCustomActionIntoPatchUninstallTable(IMsiString const &,int,IMsiString const &,IMsiString const &,int,ieslEnum);
	ieiEnum InsertPatchUninstallCustomActionsIntoTransaction(IMsiDatabase &);
	ieiEnum LoadMessageHeaders(IMsiDatabase *);
	ieiEnum PostInitializeError(IMsiRecord *,IMsiString const &,ieiEnum);
	ieiEnum ProcessInProgressInstall();
	ieiEnum ProcessLanguage(IMsiString const &,IMsiString const &,unsigned short &,Bool,bool);
	ieiEnum ProcessPlatform(IMsiString const &,unsigned short &);
	ieiEnum ProcessPreselectedAndResumeInfo();
	iesEnum CacheDatabaseIfNecessary();
	iesEnum FindAndRunAction(unsigned short const *);
	iesEnum RemovePatchAddedFiles(rparEnum);
	iesEnum RemovePatchAddedRegistryEntries(rparEnum);
	iesEnum RemoveUninstallPatchAddedShortcuts();
	iesEnum RollbackSuspendedInstall(IMsiRecord &,Bool,Bool &,Bool);
	iesEnum RunNestedInstallCustomAction(IMsiString const &,IMsiString const &,unsigned short const *,int,iioEnum);
	iesEnum UnpublishUninstallPatchAddedAssemblies();
	iesEnum UnpublishUninstallPatchAddedFeatures();
	iesEnum UnregisterPatchAddedComponents(rparEnum);
	ieslEnum GetBinarySourceNameForUpdatedCustomAction(IMsiCursor *,IMsiString const &,IMsiString const * *);
	iisEnum GetFeatureComponentsInstalledState(unsigned int,bool,int &);
	imsEnum LoadHandler();
	int GetComponentColumnIndex(unsigned short const *);
	int GetDeploymentFlags();
	int GetFeatureColumnIndex(unsigned short const *);
	int GetFeatureComponentsColumnIndex(unsigned short const *);
	int GetFeatureRegisteredComponentTotal(IMsiString const &,IMsiString const &);
	int GetTotalCostAcrossVolumes(bool,bool);
	ipitEnum InProgressInstallType(IMsiRecord &);
	static int FormatTextCallback(unsigned short const *,int,CTempBufferRef<unsigned short> &,Bool &,Bool &,Bool &,IUnknown *);
	static int FormatTextCallbackCore(unsigned short const *,int,CTempBufferRef<unsigned short> &,Bool &,Bool &,Bool &,IUnknown *,bool);
	static int FormatTextCallbackEx(unsigned short const *,int,CTempBufferRef<unsigned short> &,Bool &,Bool &,Bool &,IUnknown *);
	tagINSTALLSTATE GetProductState(unsigned short const *,Bool &,Bool &);
	virtual iesEnum ProcessSharedComponentPatchAddedFile();
	void ClearEngineData();
	void DestroyPatchUninstallCustomActionData();
	void GetSummaryInfoProperties(IMsiSummaryInfo &,IMsiString const * &,int &);
	void InitializeUserInfo(IMsiString const &);
	void LogCommandLine(unsigned short const *,IMsiDatabase &);
	void ReleaseHandler();
	void ReportPatchIntoEventLog(IMsiString const &,bool,unsigned int);
	void ReportStateToEventLog(iesEnum);
	void ReportToEventLog(unsigned short,int,IMsiRecord &,unsigned int);
	void ResetComponentCostMarkers();
	void SetActiveMajorUpgradePatch(bool);
	void SetCostingComplete(bool);
	void SetForceRepair(bool);
	void SetPatchingDownRevFiles(bool);
	void SetPatchingRunFromSourceFeatures(bool);
	void SetProductAlienClientsFlag();
	~CMsiEngine();
public:
	CMsiEngine(IMsiServices &,IMsiServer *,IMsiStorage *,IMsiDatabase *,CMsiEngine *);
	IMsiRecord * AddMultiModuleAssemblyFilesForPatchedFileToFileList(IMsiDatabase &,IMsiString const &,IMsiString const *,ipfisEnum);
	IMsiRecord * CheckPatchForNotUninstallableContent(IMsiString const &,IMsiCursor &,bool &);
	IMsiRecord * CompleteUninstallPatchAddedAssemblyDetection(IMsiDatabase &,IMsiTable &,IMsiCursor &);
	IMsiRecord * CreatePatchCacheTable(IMsiDatabase &);
	IMsiRecord * CreatePatchFileListTable(IMsiDatabase &);
	IMsiRecord * CreatePatchSupersededAffectedFeatureTable(IMsiDatabase &);
	IMsiRecord * CreatePatchSupersededComponentTable(IMsiDatabase &);
	IMsiRecord * CreatePatchSupersededFileTable(IMsiDatabase &);
	IMsiRecord * CreatePatchSupersededRegistryTable(IMsiDatabase &);
	IMsiRecord * CreatePatchUninstallAssemblyTable(IMsiDatabase &);
	IMsiRecord * CreatePatchUninstallComponentTable(IMsiDatabase &);
	IMsiRecord * CreatePatchUninstallDirectoryTable(IMsiDatabase &);
	IMsiRecord * CreatePatchUninstallShortcutTable(IMsiDatabase &);
	IMsiRecord * CreateTable(IMsiDatabase &,TableInfo *,bool);
	IMsiRecord * DetermineEngineCostOODS();
	IMsiRecord * DetermineInstallPatchModifications(IMsiDatabase &,IMsiCursor &,imodcEnum,iactcEnum);
	IMsiRecord * DeterminePatchUninstallAddedContentFromDatabaseTransform(IMsiDatabase &,IMsiCursor *,IMsiTable *);
	IMsiRecord * DetermineSupersededAffectedFeatures(IMsiDatabase &,IMsiTable &,IMsiString const &);
	IMsiRecord * DetermineSupersededFiles(IMsiDatabase &,IMsiTable &,IMsiString const &);
	IMsiRecord * DetermineSupersededRegistries(IMsiDatabase &,IMsiTable &,IMsiString const &);
	IMsiRecord * DetermineUninstallPatchAddedFeatures(IMsiCursor &);
	IMsiRecord * DetermineUninstallPatchAddedResource(IMsiDatabase &,IMsiTable &,IMsiCursor &,iputcEnum);
	IMsiRecord * FindAffectedComponents();
	IMsiRecord * GeneratePatchFileRemoveEntries(IMsiDatabase &,IMsiCursor &);
	IMsiRecord * GeneratePatchUninstallFileListFromPatchTransform(IMsiDatabase &,IMsiCursor *,IMsiTable *);
	IMsiRecord * GeneratePatchUninstallRegistryEntries(IMsiDatabase &,IMsiCursor &);
	IMsiRecord * GetAssemblyNameSzFromTransform(IMsiTable &,IMsiCursor &,IMsiString const &,IMsiString const * &);
	IMsiRecord * GetFeatureStates(unsigned int,iisEnum *,iisEnum *);
	IMsiRecord * HandleFlyWeightTransformDetection(IMsiTable &,IMsiCursor &);
	IMsiRecord * ProcessUninstallPatchAddedRemovals(IMsiDatabase &,IMsiCursor &);
	IMsiRecord * ResolvePatchSource(unsigned short const *,unsigned short const *,IMsiString const * *,IMsiString const * *);
	IMsiRecord * SecureRepair();
	IMsiRecord * SetComponent(unsigned int,iisEnum);
	IMsiString const & GetEnvironmentVariableW(unsigned short const *);
	bool CheckPatchPathAgainstRegisteredList(iaaAppAssignment,unsigned short const *,unsigned short const *);
	bool ComponentHasMultipleClients(IMsiString const &);
	bool SearchPatchDownloadRecord(IMsiRecord const *,IMsiString const &,IMsiString const * *,IMsiString const * *);
	ieiEnum ApplyPatchTransforms(IMsiDatabase &);
	ieiEnum CheckForChangedSupersededComponentAttribute(IMsiDatabase &,IMsiCursor &);
	ieiEnum CheckPatchSecurity(IMsiString const &,bool *);
	ieiEnum CheckProvidedPatchesForPatch(IMsiDatabase &,unsigned short const *,IMsiRecord const *,IMsiRecord const *,IMsiRecord const *);
	ieiEnum CreateEngineCopyOfNewPatch(IMsiString const &,bool,IMsiString const * *,IMsiString const * *,IMsiStorage * *);
	ieiEnum CreateOrLocatePatchRowFromPatchPath(IMsiRecord const *,IMsiString const &,bool &);
	ieiEnum GeneratePatchFileList(IMsiDatabase &,iioEnum);
	ieiEnum InitializePatchTransforms(IMsiDatabase &,IMsiString const &,IMsiStorage *,IMsiString const &,bool,int,bool,bool &,bool &,IMsiString const * *);
	ieiEnum InitializePatches(IMsiDatabase &,IMsiString const &,bool,bool,iePatchSequencerMode,IMsiRecord const *,IMsiRecord const *,IMsiRecord const *);
	ieiEnum OptimizeCustomActions();
	ieiEnum PopulatePatchRemovalListProperty();
	ieiEnum ProcessPatchesMarkedForUninstall(IMsiDatabase &,bool);
	ieiEnum ProcessSingleFeaturePackage(IMsiDatabase &);
	ieiEnum ProcessSupersededPatches(IMsiDatabase &,iisEnum,bool);
	ieiEnum QueryPatchMetaDataForNewObsoletedAndSupercededMSPs();
	ieiEnum ReadInPatchMetaData(IMsiStorage &,IMsiServices &,IMsiString const &,int &,bool &,IMsiString const * &,IMsiString const * &,bool *);
	ieiEnum ResolvePatchSourceFromTable(iaaAppAssignment,bool);
	ieiEnum VerifyAccessAndOpenPatchFiles(IMsiString const &);
	iesEnum CreateProductInfoRec(IMsiRecord * &);
	iesEnum GetAffectedFeaturesList(IMsiString const &,IMsiString const * &);
	virtual Bool DetermineOutOfDiskSpace(Bool *,Bool *);
	virtual Bool FreeSelectionTables();
	virtual Bool GetActionText(unsigned short const *,IMsiString const * &,IMsiString const * &);
	virtual Bool GetFeatureInfo(IMsiString const &,IMsiString const * &,IMsiString const * &,int &);
	virtual Bool ResolveFolderProperty(IMsiString const &);
	virtual Bool SetFeatureHandle(IMsiString const &,__int64);
	virtual Bool SetProperty(IMsiString const &,IMsiString const &);
	virtual Bool SetPropertyInt(IMsiString const &,int);
	virtual Bool ValidateProductID(bool);
	virtual CMsiBaselineManager * GetBaselineManager();
	virtual CMsiCustomActionManager * GetCustomActionManager();
	virtual CMsiFile * GetSharedCMsiFile();
	virtual CMsiPatchManager * GetPatchManager();
	virtual CMsiSecureRepairManager * GetSecureRepairManager();
	virtual IMsiDatabase * GetDatabase();
	virtual IMsiHandler * GetHandler();
	virtual IMsiRecord * AddActivatedComponentsToFileList();
	virtual IMsiRecord * AddFileToPatchFileList(IMsiString const &,ipfisEnum);
	virtual IMsiRecord * AddUserSidBlob(IMsiString const &,IMsiStream const &);
	virtual IMsiRecord * BuildPatchDownloadRecord();
	virtual IMsiRecord * CheckFeatureTreeGrayState(IMsiString const &,bool &);
	virtual IMsiRecord * ConfigureFeature(IMsiString const &,iisEnum);
	virtual IMsiRecord * CostOneComponent(IMsiString const &);
	virtual IMsiRecord * CreateSourcePaths();
	virtual IMsiRecord * CreateTargetPaths();
	virtual IMsiRecord * CreateTempActionTable(ttblEnum);
	virtual IMsiRecord * EnumComponentCosts(IMsiString const &,iisEnum,unsigned long,IMsiVolume * &,int &,int &);
	virtual IMsiRecord * EnumEngineCostsPerVolume(unsigned long,IMsiVolume * &,int &,int &);
	virtual IMsiRecord * GetAncestryFeatureCost(IMsiString const &,iisEnum,int &);
	virtual IMsiRecord * GetAssemblyInfo(IMsiDatabase *,IMsiString const &,iatAssemblyType &,IMsiString const * *,IMsiString const * *);
	virtual IMsiRecord * GetAssemblyNameSz(IMsiString const &,iatAssemblyType,bool,IMsiString const * &);
	virtual IMsiRecord * GetComponentStates(IMsiString const &,iisEnum *,iisEnum *,int *);
	virtual IMsiRecord * GetDescendentFeatureCost(IMsiString const &,iisEnum,int &);
	virtual IMsiRecord * GetFeatureConfigurableDirectory(IMsiString const &,IMsiString const * &);
	virtual IMsiRecord * GetFeatureCost(IMsiString const &,iisEnum,int &);
	virtual IMsiRecord * GetFeatureRuntimeFlags(unsigned int,int *);
	virtual IMsiRecord * GetFeatureStates(IMsiString const &,iisEnum *,iisEnum *);
	virtual IMsiRecord * GetFeatureValidStates(unsigned int,int &);
	virtual IMsiRecord * GetFeatureValidStatesSz(unsigned short const *,int &);
	virtual IMsiRecord * GetFileHashInfo(IMsiString const &,unsigned long,MD5Hash &,bool &);
	virtual IMsiRecord * GetFolderCachePath(int,IMsiPath * &);
	virtual IMsiRecord * GetPackageSourceType(CComPointer<IMsiServices>,MsiString &,int &);
	virtual IMsiRecord * GetPatchCodeFromMediaId(int,IMsiString const * &);
	virtual IMsiRecord * GetSourcePath(IMsiString const &,IMsiPath * &,Bool);
	virtual IMsiRecord * GetSourceRootAndType(bool,IMsiPath * &,int &);
	virtual IMsiRecord * GetSourceSubPath(IMsiString const &,bool,IMsiString const * &);
	virtual IMsiRecord * GetTargetPath(IMsiString const &,IMsiPath * &);
	virtual IMsiRecord * GetUninstallAssemblyInfo(IMsiString const &,iatAssemblyType &,IMsiString const * *,IMsiString const * *);
	virtual IMsiRecord * GetUserSidBlob(IMsiString const &,IMsiStream * &);
	virtual IMsiRecord * InitializeComponents();
	virtual IMsiRecord * InitializeDynamicCost(bool);
	virtual IMsiRecord * IsPathWritable(IMsiPath &,Bool &);
	virtual IMsiRecord * LoadDirectoryTable(unsigned short const *);
	virtual IMsiRecord * LoadSelectionTables();
	virtual IMsiRecord * MarkAllPatchesForProductUninstall();
	virtual IMsiRecord * OpenView(IMsiDatabase *,unsigned short const *,ivcEnum,IMsiView * &);
	virtual IMsiRecord * ProcessConditionTable();
	virtual IMsiRecord * RecheckAssemblyComponents();
	virtual IMsiRecord * RecostAllComponents(Bool &);
	virtual IMsiRecord * RecostDirectory(IMsiString const &,IMsiPath &);
	virtual IMsiRecord * RecostSingleAdjuster(iecatCostAdjusterType,unsigned long);
	virtual IMsiRecord * RegisterComponentDirectory(IMsiString const &,IMsiString const &);
	virtual IMsiRecord * RegisterComponentDirectoryId(unsigned int,unsigned int);
	virtual IMsiRecord * RegisterCostAdjuster(iecatCostAdjusterType,IMsiCostAdjuster &);
	virtual IMsiRecord * RegisterCostLinkedComponent(IMsiString const &,IMsiString const &);
	virtual IMsiRecord * RegisterFeatureCostLinkedComponent(IMsiString const &,IMsiString const &);
	virtual IMsiRecord * ResolveSourceSubPaths();
	virtual IMsiRecord * SetAllFeaturesLocal();
	virtual IMsiRecord * SetComponentSz(unsigned short const *,iisEnum);
	virtual IMsiRecord * SetFeatureAttributes(IMsiString const &,int);
	virtual IMsiRecord * SetInProgressInstallInfo(IMsiServices &,IMsiRecord &);
	virtual IMsiRecord * SetInstallLevel(int);
	virtual IMsiRecord * SetReinstallMode(IMsiString const &);
	virtual IMsiRecord * SetTargetPath(IMsiString const &,unsigned short const *,Bool);
	virtual IMsiRecord * TearDownSecureRepairManager();
	virtual IMsiRecord * UpdateInProgressInstallInfo(IMsiServices &,IMsiRecord &);
	virtual IMsiServer * GetConfigurationServer();
	virtual IMsiServices * GetServices();
	virtual IMsiString const & FormatText(IMsiString const &);
	virtual IMsiString const & GetErrorTableString(int);
	virtual IMsiString const & GetPackageName();
	virtual IMsiString const & GetProductKey();
	virtual IMsiString const & GetProperty(IMsiString const &);
	virtual IMsiString const & GetPropertyFromSz(unsigned short const *);
	virtual IMsiString const & GetTempFileCleanupList();
	virtual IMsiString const & SafeGetProperty(IMsiString const &);
	virtual IMsiTable * GetComponentTable();
	virtual IMsiTable * GetDirectoryTable();
	virtual IMsiTable * GetFeatureComponentsTable();
	virtual IMsiTable * GetFeatureTable();
	virtual IMsiTable * GetVolumeCostTable();
	virtual bool FChildInstall();
	virtual bool FCostingSkipped();
	virtual bool FInstallElevatedViaAIS();
	virtual bool FIsFileInPatchFileList(IMsiString const &);
	virtual bool FPatchAddedComponent(IMsiString const &);
	virtual bool FPatchModeEnabled(ipmEnum);
	virtual bool FPerformAppcompatFix(iacsAppCompatShimFlags);
	virtual bool FRunningUpgrade();
	virtual bool FSafeForFullUninstall(iremEnum);
	virtual bool GetPatchFileListInfoForFile(IMsiString const &,int *,IMsiString const * *,IMsiString const * *,IMsiString const * *,IMsiString const * *);
	virtual bool HasFontFile();
	virtual bool Is20StylePatch();
	virtual bool IsBackgroundCostingEnabled();
	virtual bool IsCostingComplete();
	virtual bool IsFastInstall(msifiFastInstallBits);
	virtual bool IsFlyWeight();
	virtual bool IsIconFilesPlaced();
	virtual bool IsProductElevated();
	virtual bool ObtainPatchFileListStateForFile(IMsiString const &,int &);
	virtual bool SafeSetProperty(IMsiString const &,IMsiString const &);
	virtual bool const & FUsePatchFileList();
	virtual iecEnum EvaluateCondition(unsigned short const *);
	virtual ieiEnum Initialize(unsigned short const *,iuiEnum,unsigned short const *,unsigned short const *,iioEnum,IMsiRecord const *);
	virtual ieiEnum LoadUpgradeUninstallMessageHeaders(IMsiDatabase *,bool);
	virtual iesEnum BeginTransaction();
	virtual iesEnum CleanupTempFilesViaOpcode();
	virtual iesEnum DoAction(unsigned short const *,bool);
	virtual iesEnum EnableRollback(Bool);
	virtual iesEnum EndTransaction(iesEnum);
	virtual iesEnum ExecuteRecord(ixoEnum,IMsiRecord &);
	virtual iesEnum FatalError(IMsiRecord &);
	virtual iesEnum GenerateOpcodesForSupersededPatchContent();
	virtual iesEnum GenerateOpcodesForUninstalledPatchNewContent();
	virtual iesEnum ProcessEmbeddedChainer();
	virtual iesEnum RegisterPatchState();
	virtual iesEnum RegisterProduct();
	virtual iesEnum RegisterUser(bool);
	virtual iesEnum RunExecutionPhase(unsigned short const *,bool);
	virtual iesEnum RunNestedInstall(IMsiString const &,Bool,unsigned short const *,IMsiString const &,iioEnum,bool);
	virtual iesEnum RunScript(bool);
	virtual iesEnum Sequence(unsigned short const *);
	virtual iesEnum SetFeatureSelectionProperties();
	virtual iesEnum Terminate(iesEnum);
	virtual iesEnum UnregisterProduct();
	virtual iitEnum GetInstallType();
	virtual imsEnum ActionProgress();
	virtual imsEnum Message(imtEnum,IMsiRecord &);
	virtual imsEnum MessageNoRecord(imtEnum);
	virtual int GetDeterminedPackageSourceType();
	virtual int GetMode();
	virtual int GetPropertyInt(IMsiString const &);
	virtual ipfaEnum GetPatchTypeForFile(IMsiString const &);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned int ShutdownCustomActionServer();
	virtual unsigned int ShutdownEEUIServer();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual unsigned short GetLanguage();
	virtual void AddFileToCleanupList(unsigned short const *);
	virtual void DisableMessages();
	virtual void EnableMessages();
	virtual void FSetElevatedViaAIS();
	virtual void FormInstallSourcesHashfilePath(IMsiString const * &);
	virtual void FreeDirectoryTable();
	virtual void ParsePatchDownloadRecord(IMsiRecord const *);
	virtual void ReleaseSharedCMsiFile();
	virtual void SetIconFilesPlaced(bool);
	virtual void SetMode(int,Bool);
	virtual void SetMsiEngineHandle(unsigned long);
	virtual void SkipCosting();
	void CheckForActiveMajorUpgradePatches();
	void DumpPatchFileListTable();
	void ParsePatchProperties(IMsiString const &,IMsiString const &,IMsiRecord * &,IMsiRecord * &);
	void SetSecureRepairErrorMessage(IMsiRecord *);
};

class CMsiEnvironmentBlock
{
	bool CopyBlock(unsigned short const *,bool);
public:
	bool Expand(unsigned short const *,CAPITempBufferRef<unsigned short> &);
	bool Get(unsigned short const *,CAPITempBufferRef<unsigned short> &);
	bool InitializeFromUserEnvironment();
	bool Set(unsigned short const *,unsigned short const *);
	~CMsiEnvironmentBlock();
};

class CMsiExecute
{
	static iesEnum ( CMsiOpExecute::*const * const rgOpExecute)(IMsiRecord &);
	static int const * const rgOpTypes;
protected:
	CMsiExecute(IMsiConfigurationManager &,IMsiMessage &,IMsiDirectoryManager *,irlEnum,unsigned int,HKEY__ * *);
	IMsiRecord * GetSortedRollbackScriptList(_FILETIME,Bool,RBSInfo * &);
	iesEnum DeleteRollbackScriptsAndBackupFiles(RBSInfo *);
	iesEnum GenerateRollbackScriptName(IMsiPath * &,IMsiString const * &);
	iesEnum RunCommitActions(IMsiString const &);
	iesEnum RunInstallScript(IMsiStream &,unsigned short const *);
	iesEnum RunRollbackScript(IMsiStream &,unsigned short const *);
	virtual IMsiRecord * EnumerateScript(unsigned short const *,IEnumMsiRecord * &);
	virtual IMsiServices & GetServices();
	virtual iesEnum ExecuteRecord(ixoEnum,IMsiRecord &);
	virtual iesEnum GetTransformsList(IMsiRecord &,IMsiRecord &,IMsiString const * &);
	virtual iesEnum RemoveRollbackFiles(_FILETIME);
	virtual iesEnum Rollback(_FILETIME,bool);
	virtual iesEnum RollbackFinalize(iesEnum,_FILETIME,bool);
	virtual iesEnum RunScript(unsigned short const *,bool);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	void ClearExecutorData();
	void DeleteRollbackScriptList(RBSInfo *);
	~CMsiExecute();
};

struct CMsiExternalUI
{
	CMsiExternalUI();
	bool VerifyExternalUIHandler();
};

class CMsiFile
{
	IMsiRecord * ExecuteView(IMsiString const &);
public:
	IMsiRecord * FetchFile(IMsiString const &);
	virtual ~CMsiFile();
};

struct CMsiFileBase
{
	CMsiFileBase(IMsiEngine &);
	IMsiRecord * GetExtractedTargetFileName(IMsiPath &,IMsiString const * &);
	IMsiRecord * GetFileRecord();
	IMsiRecord * GetTargetPath(IMsiPath * &);
	virtual ~CMsiFileBase();
};

class CMsiFileCopy
{
protected:
	IMsiRecord * EndCopy(bool);
	IMsiRecord * OpenDestination();
	IMsiRecord * OpenSource();
	IMsiRecord * ValidateDestination();
	IMsiRecord * WriteFileBits(char *,unsigned long);
	virtual IMsiRecord * _CopyTo(IMsiPath &,IMsiPath *,IAssemblyCacheItem *,CMsiCustomActionManager *,bool,IMsiRecord &,bool);
	virtual ~CMsiFileCopy();
public:
	CMsiFileCopy(IMsiServices *);
	virtual IMsiRecord * ChangeMedia(IMsiPath &,unsigned short const *,Bool,IMsiStream *,IMsiStream *);
	virtual IMsiRecord * CloseMedia();
	virtual IMsiRecord * CopyTo(IMsiPath &,CMsiCustomActionManager &,bool,IMsiRecord &);
	virtual IMsiRecord * CopyTo(IMsiPath &,IAssemblyCacheItem &,bool,IMsiRecord &);
	virtual IMsiRecord * CopyTo(IMsiPath &,IMsiPath &,IMsiRecord &);
	virtual IMsiRecord * InitCopy(IMsiStorage *);
	virtual int SetNotification(int,int);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CMsiFileCost
{
	IMsiRecord * CheckRemoveFileList(IMsiString const &,IMsiString const &,Bool &);
protected:
	virtual ~CMsiFileCost();
public:
	CMsiFileCost(IMsiEngine &,bool const &);
	virtual IMsiRecord * GetDynamicCost(IMsiString const &,IMsiString const &,Bool,int &,int &,int &,int &,int &,int &,int &,int &);
	virtual IMsiRecord * GetUpdatedCostDelta(unsigned long,IMsiString const &,IMsiString const &,int &,int &,int &,int &,int &,int &,int &,int &);
	virtual IMsiRecord * Initialize();
	virtual IMsiRecord * Reset();
	virtual IMsiString const & GetMsiStringValue();
	virtual int GetIntegerValue();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned int GetUniqueId();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void SetUniqueId(unsigned int);
};

class CMsiFileInstall
{
	IMsiRecord * Initialize();
public:
	CMsiFileInstall(IMsiEngine &,bool);
	IMsiRecord * FetchFile();
	IMsiRecord * TotalBytesToCopy(__int64 &);
	virtual ~CMsiFileInstall();
};

class CMsiFilePatch
{
protected:
	IMsiRecord * CreateFileHandles(Bool);
	IMsiRecord * PostPatchError(int);
	IMsiRecord * WaitForEvent();
	static int ApplyPatchCallback(void *,unsigned long,unsigned long);
	static unsigned long PatchThreadStart(void *);
	void CloseFileHandles();
public:
	CMsiFilePatch(IMsiServices *);
	virtual IMsiRecord * ApplyPatch(IMsiPath &,unsigned short const *,IMsiPath &,unsigned short const *,IMsiPath &,unsigned short const *,int);
	virtual IMsiRecord * CanPatchFile(IMsiPath &,unsigned short const *,IMsiPath &,unsigned short const *,icpEnum &);
	virtual IMsiRecord * CancelPatch();
	virtual IMsiRecord * ContinuePatch();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	~CMsiFilePatch();
};

class CMsiFileRemove
{
	IMsiRecord * Initialize();
public:
	CMsiFileRemove(IMsiEngine &);
	IMsiRecord * FetchFile(IMsiRecord * &);
	IMsiRecord * GetExtractedTargetFileName(IMsiPath &,IMsiString const * &);
	IMsiRecord * TotalFilesToDelete(unsigned int &);
	virtual ~CMsiFileRemove();
};

class CMsiFileStream
{
protected:
	virtual void Flush();
public:
	virtual IMsiStream * Clone();
	virtual IMsiString const & GetMsiStringValue();
	virtual int GetIntegerValue();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Read(void *,unsigned long,unsigned long *);
	virtual unsigned int Remaining();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void Reset();
	virtual void Seek(int);
};

class CMsiHandle
{
	static CMsiHandle * m_Head;
	static IMsiServices * m_piHandleServices;
	static _RTL_CRITICAL_SECTION m_csLock;
	static unsigned long m_hLast;
public:
	static IMsiDirectoryManager * GetDirectoryManager(unsigned long);
	static IMsiSelectionManager * GetSelectionManager(unsigned long);
};

struct CMsiIniFileCost
{
	virtual IMsiRecord * GetDynamicCost(IMsiString const &,IMsiString const &,Bool,int &,int &,int &,int &,int &,int &,int &,int &);
	virtual IMsiRecord * Initialize();
};

struct CMsiInteger
{
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CMsiIpiReader
{
	IMsiRecord * GetInProgressInstallInfo(IMsiServices &,IMsiRecord * &);
};

class CMsiLockBytes
{
protected:
	~CMsiLockBytes();
public:
	CMsiLockBytes(IMsiStream *);
	CMsiLockBytes(char const *,int);
	virtual long Flush();
	virtual long LockRegion(_ULARGE_INTEGER,_ULARGE_INTEGER,unsigned long);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ReadAt(_ULARGE_INTEGER,void *,unsigned long,unsigned long *);
	virtual long SetSize(_ULARGE_INTEGER);
	virtual long Stat(tagSTATSTG *,unsigned long);
	virtual long UnlockRegion(_ULARGE_INTEGER,_ULARGE_INTEGER,unsigned long);
	virtual long WriteAt(_ULARGE_INTEGER,void const *,unsigned long,unsigned long *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CMsiMalloc
{
	void * AllocProc(unsigned long);
public:
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void * Alloc(unsigned long);
	virtual void * AllocEx(unsigned long,unsigned long *);
	virtual void * AllocObject(unsigned long);
	virtual void * AllocObjectEx(unsigned long,unsigned long *,bool);
	virtual void Free(void *);
	virtual void FreeObject(void *);
	void FreeAllocator();
};

struct CMsiMemoryStream
{
	virtual Bool Error();
	virtual IMsiStream * Clone();
	virtual IMsiString const & GetMsiStringValue();
	virtual char const * GetMemory();
	virtual int GetInt32();
	virtual int GetIntegerValue();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual short GetInt16();
	virtual unsigned int GetData(void *,unsigned int);
	virtual unsigned int GetUniqueId();
	virtual unsigned int Remaining();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void Flush();
	virtual void PutData(void const *,unsigned int);
	virtual void PutInt16(short);
	virtual void PutInt32(int);
	virtual void Reset();
	virtual void Seek(int);
	virtual void SetUniqueId(unsigned int);
};

class CMsiMessageBox
{
protected:
	int SetButtonNames();
	static __int64 MsgBoxDlgProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	virtual bool InitSpecial();
	virtual int HandleCommand(unsigned int);
	void AdjustButtons();
	void CenterMsgBox();
	void InitializeDialog();
	void SetControlText(int,HFONT__ *,unsigned short const *);
	void SetMsgBoxSize();
public:
	CMsiMessageBox(unsigned short const *,unsigned short const *,int,int,int,int,int,unsigned int,unsigned short,bool);
	int Execute(HWND__ *,int,int,ieMsgBoxOpts);
	~CMsiMessageBox();
};

struct CMsiMoveFileCost
{
	virtual IMsiRecord * GetDynamicCost(IMsiString const &,IMsiString const &,Bool,int &,int &,int &,int &,int &,int &,int &,int &);
	virtual IMsiRecord * Initialize();
};

struct CMsiObjectPool
{
	~CMsiObjectPool();
};

class CMsiOpExecute
{
	iesEnum DeleteCache(unsigned short const *,unsigned short const *,unsigned short const *);
protected:
	Bool FFileExists(IMsiPath &,IMsiString const &);
	Bool GetFileState(IMsiString const &,icfsEnum *,IMsiString const * *,int *,int *,IMsiString const * *,int *);
	CMsiOpExecute(IMsiConfigurationManager &,IMsiMessage &,IMsiDirectoryManager *,irlEnum,unsigned int,HKEY__ * *);
	IMsiRecord & GetSharedRecord(int);
	IMsiRecord * CacheAssemblyForUninstalling(IMsiString const &,IMsiString const &,iatAssemblyType);
	IMsiRecord * CacheAssemblyMapping(IMsiString const &,IMsiString const &,iatAssemblyType);
	IMsiRecord * CacheFileState(IMsiString const &,icfsEnum *,IMsiString const *,IMsiString const *,int *,int *,int *);
	IMsiRecord * CreateAssemblyCacheTable();
	IMsiRecord * CreateBackupFolderCache();
	IMsiRecord * CreateTableForAssembliesToUninstall();
	IMsiRecord * DoShellNotify(IMsiPath &,unsigned short const *,IMsiPath &,Bool);
	IMsiRecord * DoShellNotifyDefer(IMsiPath &,unsigned short const *,IMsiPath &,Bool);
	IMsiRecord * EnsureUserDataKey();
	IMsiRecord * GetCachePath(IMsiPath * &,IMsiString const * *);
	IMsiRecord * GetInstalledPatchesKey(unsigned short const *,IMsiString const * &);
	IMsiRecord * GetInstalledProductsKey(HKEY__ * &,IMsiString const * &);
	IMsiRecord * GetPatchCacheDirectory(bool,IMsiString const &,IMsiString const &,IMsiPath * &);
	IMsiRecord * GetProductFeatureUsageKey(IMsiString const * &);
	IMsiRecord * GetProductInstalledComponentsKey(unsigned short const *,IMsiString const * &);
	IMsiRecord * GetProductInstalledFeaturesKey(IMsiString const * &);
	IMsiRecord * GetProductInstalledPropertiesKey(HKEY__ * &,IMsiString const * &);
	IMsiRecord * GetProductSecureTransformsKey(IMsiString const * &);
	IMsiRecord * GetShellFolder(int,IMsiString const * &);
	IMsiRecord * GetUsageKeySecurityDescriptor(IMsiStream * &);
	IMsiRecord * IsAssemblyInstalled(IMsiString const &,IMsiString const &,iatAssemblyType,bool &);
	IMsiRecord * LinkedRegInfoExists(unsigned short const * const *,Bool &,ibtBinaryType);
	IMsiRecord * ProcessComPlusInstall(long,IMsiString const &,IMsiString const &,unsigned short *,unsigned short *,unsigned short *);
	IMsiRecord * PullRecord();
	IMsiRecord * RegisterComponent(IMsiString const &,IMsiString const &,tagINSTALLSTATE,IMsiString const &,unsigned int,int,ibtBinaryType,Bool);
	IMsiRecord * RegisterFont(unsigned short const *,unsigned short const *,IMsiPath *,bool,bool *);
	IMsiRecord * UnRegisterFont(unsigned short const *,bool *);
	IMsiRecord * UnregisterComponent(IMsiString const &,IMsiString const &,ibtBinaryType);
	IMsiString const & ComposeDescriptor(IMsiString const &,IMsiString const &,bool);
	IMsiString const & GetUserProfileEnvPath(IMsiString const &,bool &);
	_GUID const * GUIDFromProdInfoData(_GUID *,int);
	bool CheckRegKeyProtected();
	bool ConfigureServiceDelayedAutoStart(SC_HANDLE__ * const,IMsiRecord const &,IMsiRecord &);
	bool ConfigureServiceFailureActionsFlag(SC_HANDLE__ * const,IMsiRecord const &,IMsiRecord &);
	bool ConfigureServiceRequiredPrivileges(SC_HANDLE__ * const,IMsiRecord const &,IMsiRecord &);
	bool ConfigureServiceServicePreshutdown(SC_HANDLE__ * const,IMsiRecord const &,IMsiRecord &);
	bool ConfigureServiceServiceSid(SC_HANDLE__ * const,IMsiRecord const &,IMsiRecord &);
	bool DeleteService(IMsiRecord &,IMsiRecord &,int,IMsiRecord *);
	bool GetAppCompatCAEnabled();
	bool GetSDFromService(SC_HANDLE__ * const,IMsiStream * &);
	bool IsChecksumOK(IMsiPath &,IMsiString const &,int,imsEnum *,bool,bool,bool);
	bool QueryServiceConfiguration(SC_HANDLE__ * const,MsiString,unsigned long,void * *);
	bool RemoteURTInstallRequired();
	bool RewriteEnvironmentString(iueEnum,unsigned short,IMsiString const &,IMsiString const &,IMsiString const * &);
	bool RollbackServiceConfiguration(SC_HANDLE__ * const,IMsiString const &,IMsiRecord &);
	bool StartServiceW(IMsiRecord &,IMsiRecord &,int);
	bool StopService(IMsiRecord &,IMsiRecord &,int,IMsiRecord *);
	bool UpdateRegistryEnvironmentStrings(IMsiRecord &);
	bool ValidateSourceMediaLabelOrPackage(IMsiVolume *,unsigned int,unsigned short const *);
	bool VerifySourceMedia(IMsiPath &,unsigned short const *,unsigned short const *,unsigned int,IMsiVolume * &);
	bool WaitForService(SC_HANDLE__ * const,unsigned long);
	iesEnum ApplyPatchCore(IMsiPath &,IMsiPath &,IMsiString const &,IMsiRecord &,IMsiString const * &,IMsiString const * &);
	iesEnum BackupAssembly(IMsiString const &,IMsiString const &,iatAssemblyType);
	iesEnum BackupFile(IMsiPath &,IMsiString const &,Bool,Bool,iehEnum,bool,bool,IMsiString const *,bool);
	iesEnum CheckODBCError(unsigned long,int,unsigned short const *,imsEnum,ibtBinaryType);
	iesEnum CommitAssemblies(iacmEnum);
	iesEnum CommitAssembliesPerScript(iacmEnum);
	iesEnum CopyASM(IMsiPath &,IMsiString const &,IAssemblyCacheItem *,CMsiCustomActionManager *,IMsiString const &,bool,Bool,iehEnum,ielfEnum);
	iesEnum CopyOrMoveFile(IMsiPath &,IMsiPath &,IMsiString const &,IMsiString const &,IMsiString const &,Bool,Bool,Bool,iehEnum,IMsiStream *,ielfEnum,bool,bool,bool,int);
	iesEnum CreateFileFromData(IMsiPath &,IMsiString const &,IMsiData const *,_SECURITY_ATTRIBUTES *);
	iesEnum CreateFilePath(unsigned short const *,IMsiPath * &,IMsiString const * &);
	iesEnum CreateFolder(IMsiPath &,Bool,Bool,IMsiStream *);
	iesEnum CreateUninstallKey();
	iesEnum DeleteFileDuringCleanup(unsigned short const *,bool);
	iesEnum DoMachineVsUserInitialization();
	iesEnum EnsureClassesRootKeyRW();
	iesEnum GetAssemblyCacheItem(IMsiString const &,int,IAssemblyCacheItem * &,iatAssemblyType &);
	iesEnum GetBackupFolder(IMsiPath *,IMsiPath * &);
	iesEnum GetCompressedSourcePathAndMediaCabinet(IMsiRecord &,bool,IMsiString const &,IMsiPath * &,IMsiString const * *);
	iesEnum GetCurrentSourcePathAndType(IMsiPath * &,int &);
	iesEnum GetSecurityDescriptor(unsigned short const *,IMsiStream * &);
	iesEnum GetSourceRootAndType(bool,IMsiPath * &,int &);
	iesEnum HandleExistingFile(IMsiPath &,IMsiRecord &,Bool,iehEnum,bool &);
	iesEnum InitCopier(Bool,int,IMsiString const &,IMsiPath *,Bool);
	iesEnum IsInBackupFolder(IMsiPath &,bool &);
	iesEnum MoveFileW(IMsiPath &,IMsiPath &,IMsiRecord &,Bool,Bool,bool,bool,iehEnum);
	iesEnum ODBCDataSourceCore(IMsiRecord &,ibtBinaryType);
	iesEnum ODBCInstallDriverCore(IMsiRecord &,ibtBinaryType);
	iesEnum ODBCInstallTranslatorCore(IMsiRecord &,ibtBinaryType);
	iesEnum ODBCRemoveDriverCore(IMsiRecord &,ibtBinaryType);
	iesEnum ODBCRemoveTranslatorCore(IMsiRecord &,ibtBinaryType);
	iesEnum PatchDatabase(IMsiRecord &,bool);
	iesEnum PopulateMediaList(MsiString const &,IMsiRecord const &,int,int);
	iesEnum PopulateNonMediaList(MsiString const &,IMsiRecord const &,int,int &,int &);
	iesEnum ProcessAppIdInfo(IMsiRecord &,Bool,ibtBinaryType);
	iesEnum ProcessClassInfo(IMsiRecord &,Bool,ibtBinaryType);
	iesEnum ProcessExtensionInfo(IMsiRecord &,Bool,ibtBinaryType,bool);
	iesEnum ProcessFileFromData(IMsiPath &,IMsiString const &,IMsiData const *,_SECURITY_ATTRIBUTES *);
	iesEnum ProcessFont(IMsiRecord &,Bool);
	iesEnum ProcessIcon(IMsiRecord &,Bool);
	iesEnum ProcessMIMEInfo(IMsiRecord &,Bool,ibtBinaryType);
	iesEnum ProcessPatchRegistration(IMsiRecord &);
	iesEnum ProcessProgIdInfo(IMsiRecord &,Bool,ibtBinaryType);
	iesEnum ProcessPublishAssembly(IMsiRecord &,Bool);
	iesEnum ProcessPublishComponent(IMsiRecord &,Bool);
	iesEnum ProcessPublishFeature(IMsiRecord &,Bool);
	iesEnum ProcessPublishProduct(IMsiRecord &,Bool,IMsiString const * *);
	iesEnum ProcessPublishProductClient(IMsiRecord &,Bool);
	iesEnum ProcessPublishSourceList(IMsiRecord &,Bool);
	iesEnum ProcessPublishSourceListEx(IMsiRecord &);
	iesEnum ProcessRegInfo(unsigned short const * const *,HKEY__ *,Bool,IMsiStream *,bool *,ibtBinaryType,bool);
	iesEnum ProcessRegisterLastUsedSourceList(unsigned short const *,unsigned short const *,bool);
	iesEnum ProcessRegisterProduct(IMsiRecord &,Bool);
	iesEnum ProcessRegisterProductCPDisplayInfo(IMsiRecord &,Bool);
	iesEnum ProcessRegisterUser(IMsiRecord &,Bool);
	iesEnum ProcessSelfReg(IMsiRecord &,Bool);
	iesEnum ProcessSharedComponentProvider(IMsiRecord &,Bool);
	iesEnum ProcessShortcut(IMsiRecord &,Bool);
	iesEnum ProcessSourceListTypeRegister(unsigned short const *,int,bool);
	iesEnum ProcessTypeLibraryInfo(IMsiRecord &,Bool);
	iesEnum ProcessUpgradeCodePublish(IMsiRecord &,Bool);
	iesEnum RemoveRegKeys(unsigned short const * const *,HKEY__ *,ibtBinaryType);
	iesEnum ResolveMediaRecSourcePath(IMsiRecord &,int,bool);
	iesEnum ResolveSourcePath(IMsiRecord &,IMsiPath * &,bool &);
	iesEnum RollbackODBCEntry(unsigned short const *,rrkEnum,ibtBinaryType);
	iesEnum RollbackODBCINSTEntry(unsigned short const *,unsigned short const *,ibtBinaryType);
	iesEnum SetRegValueUndoOps(rrkEnum,unsigned short const *,unsigned short const *,ibtBinaryType);
	iesEnum SetRemoveKeyUndoOps(IMsiRegKey &);
	iesEnum ShellNotifyProcessDeferred();
	iesEnum TestPatchHeaders(IMsiPath &,IMsiString const &,IMsiRecord &,icpEnum &,int &);
	iesEnum VerifyAccessibility(IMsiPath &,unsigned short const *,unsigned long,iehEnum,void * *);
	iesEnum _CopyFile(IMsiPath &,IMsiPath *,IAssemblyCacheItem *,CMsiCustomActionManager *,bool,IMsiRecord &,Bool,iehEnum,bool,bool);
	iesEnum ixfActionStart(IMsiRecord &);
	iesEnum ixfAdvtFlagsUpdate(IMsiRecord &);
	iesEnum ixfAssemblyCopy(IMsiRecord &);
	iesEnum ixfAssemblyMapping(IMsiRecord &);
	iesEnum ixfAssemblyPatch(IMsiRecord &);
	iesEnum ixfAssemblyPublish(IMsiRecord &);
	iesEnum ixfAssemblyUnpublish(IMsiRecord &);
	iesEnum ixfCacheBaselineFile(IMsiRecord &);
	iesEnum ixfCacheRTMFile(IMsiRecord &);
	iesEnum ixfCacheSizeFlush(IMsiRecord &);
	iesEnum ixfChangeMedia(IMsiRecord &);
	iesEnum ixfCleanupConfigData(IMsiRecord &);
	iesEnum ixfCleanupTempFiles(IMsiRecord &);
	iesEnum ixfComPlusCommit(IMsiRecord &);
	iesEnum ixfComPlusRegister(IMsiRecord &);
	iesEnum ixfComPlusRegisterMetaOnly(IMsiRecord &);
	iesEnum ixfComPlusRollback(IMsiRecord &);
	iesEnum ixfComPlusUnregister(IMsiRecord &);
	iesEnum ixfComPlusUnregisterMetaOnly(IMsiRecord &);
	iesEnum ixfCommitAssembliesCompatibility(IMsiRecord &);
	iesEnum ixfComponentPublish(IMsiRecord &);
	iesEnum ixfComponentRegister(IMsiRecord &);
	iesEnum ixfComponentUnpublish(IMsiRecord &);
	iesEnum ixfComponentUnregister(IMsiRecord &);
	iesEnum ixfCustomActionCommit(IMsiRecord &);
	iesEnum ixfCustomActionRollback(IMsiRecord &);
	iesEnum ixfCustomActionSchedule(IMsiRecord &);
	iesEnum ixfDatabaseCopy(IMsiRecord &);
	iesEnum ixfDatabasePatch(IMsiRecord &);
	iesEnum ixfDatabasePatchEx(IMsiRecord &);
	iesEnum ixfDialogInfo(IMsiRecord &);
	iesEnum ixfDisableRollback(IMsiRecord &);
	iesEnum ixfEnd(IMsiRecord &);
	iesEnum ixfExtendedFullRecord(IMsiRecord &);
	iesEnum ixfFail(IMsiRecord &);
	iesEnum ixfFeaturePublish(IMsiRecord &);
	iesEnum ixfFeatureUnpublish(IMsiRecord &);
	iesEnum ixfFileBindImage(IMsiRecord &);
	iesEnum ixfFileCopy(IMsiRecord &);
	iesEnum ixfFileCopySDDL(IMsiRecord &);
	iesEnum ixfFileRemove(IMsiRecord &);
	iesEnum ixfFileRemovePFREntry(IMsiRecord &);
	iesEnum ixfFileUndoRebootReplace(IMsiRecord &);
	iesEnum ixfFolderCreate(IMsiRecord &);
	iesEnum ixfFolderRemove(IMsiRecord &);
	iesEnum ixfFontRegister(IMsiRecord &);
	iesEnum ixfFontUnregister(IMsiRecord &);
	iesEnum ixfFullRecord(IMsiRecord &);
	iesEnum ixfHeader(IMsiRecord &);
	iesEnum ixfIconCreate(IMsiRecord &);
	iesEnum ixfIconRemove(IMsiRecord &);
	iesEnum ixfInfoMessage(IMsiRecord &);
	iesEnum ixfIniFilePath(IMsiRecord &);
	iesEnum ixfIniWriteRemoveValue(IMsiRecord &);
	iesEnum ixfInstallProtectedFiles(IMsiRecord &);
	iesEnum ixfInstallSFPCatalogFile(IMsiRecord &);
	iesEnum ixfNoop(IMsiRecord &);
	iesEnum ixfODBCDataSource(IMsiRecord &);
	iesEnum ixfODBCDataSource64(IMsiRecord &);
	iesEnum ixfODBCDriverManager(IMsiRecord &);
	iesEnum ixfODBCInstallDriver(IMsiRecord &);
	iesEnum ixfODBCInstallDriver64(IMsiRecord &);
	iesEnum ixfODBCInstallTranslator(IMsiRecord &);
	iesEnum ixfODBCInstallTranslator64(IMsiRecord &);
	iesEnum ixfODBCRemoveDriver(IMsiRecord &);
	iesEnum ixfODBCRemoveDriver64(IMsiRecord &);
	iesEnum ixfODBCRemoveTranslator(IMsiRecord &);
	iesEnum ixfODBCRemoveTranslator64(IMsiRecord &);
	iesEnum ixfPackageCodePublish(IMsiRecord &);
	iesEnum ixfPatchApply(IMsiRecord &);
	iesEnum ixfPatchCache(IMsiRecord &);
	iesEnum ixfPatchRegister(IMsiRecord &);
	iesEnum ixfPatchSourceListRegisterLastUsed(IMsiRecord &);
	iesEnum ixfPatchUnregister(IMsiRecord &);
	iesEnum ixfProductCPDisplayInfoRegister(IMsiRecord &);
	iesEnum ixfProductCPDisplayInfoUnregister(IMsiRecord &);
	iesEnum ixfProductInfo(IMsiRecord &);
	iesEnum ixfProductPublish(IMsiRecord &);
	iesEnum ixfProductPublishClient(IMsiRecord &);
	iesEnum ixfProductPublishUpdate(IMsiRecord &);
	iesEnum ixfProductRegister(IMsiRecord &);
	iesEnum ixfProductUnpublish(IMsiRecord &);
	iesEnum ixfProductUnpublishClient(IMsiRecord &);
	iesEnum ixfProductUnregister(IMsiRecord &);
	iesEnum ixfProgressTick(IMsiRecord &);
	iesEnum ixfProgressTotal(IMsiRecord &);
	iesEnum ixfRegAddRunOnceEntry(IMsiRecord &);
	iesEnum ixfRegAddValue(IMsiRecord &);
	iesEnum ixfRegAllocateSpace(IMsiRecord &);
	iesEnum ixfRegAppIdInfoRegister(IMsiRecord &);
	iesEnum ixfRegAppIdInfoRegister64(IMsiRecord &);
	iesEnum ixfRegAppIdInfoUnregister(IMsiRecord &);
	iesEnum ixfRegAppIdInfoUnregister64(IMsiRecord &);
	iesEnum ixfRegClassInfoRegister(IMsiRecord &);
	iesEnum ixfRegClassInfoRegister64(IMsiRecord &);
	iesEnum ixfRegClassInfoUnregister(IMsiRecord &);
	iesEnum ixfRegClassInfoUnregister64(IMsiRecord &);
	iesEnum ixfRegCreateKey(IMsiRecord &);
	iesEnum ixfRegExtensionInfoRegister(IMsiRecord &);
	iesEnum ixfRegExtensionInfoRegister64(IMsiRecord &);
	iesEnum ixfRegExtensionInfoRegister64Ex(IMsiRecord &);
	iesEnum ixfRegExtensionInfoRegisterEx(IMsiRecord &);
	iesEnum ixfRegExtensionInfoUnregister(IMsiRecord &);
	iesEnum ixfRegExtensionInfoUnregister64(IMsiRecord &);
	iesEnum ixfRegExtensionInfoUnregister64Ex(IMsiRecord &);
	iesEnum ixfRegExtensionInfoUnregisterEx(IMsiRecord &);
	iesEnum ixfRegMIMEInfoRegister(IMsiRecord &);
	iesEnum ixfRegMIMEInfoRegister64(IMsiRecord &);
	iesEnum ixfRegMIMEInfoUnregister(IMsiRecord &);
	iesEnum ixfRegMIMEInfoUnregister64(IMsiRecord &);
	iesEnum ixfRegOpenKey(IMsiRecord &);
	iesEnum ixfRegProgIdInfoRegister(IMsiRecord &);
	iesEnum ixfRegProgIdInfoRegister64(IMsiRecord &);
	iesEnum ixfRegProgIdInfoUnregister(IMsiRecord &);
	iesEnum ixfRegProgIdInfoUnregister64(IMsiRecord &);
	iesEnum ixfRegRemoveKey(IMsiRecord &);
	iesEnum ixfRegRemoveValue(IMsiRecord &);
	iesEnum ixfRegSelfReg(IMsiRecord &);
	iesEnum ixfRegSelfUnreg(IMsiRecord &);
	iesEnum ixfRegisterBackupFile(IMsiRecord &);
	iesEnum ixfRegisterPatchOrder(IMsiRecord &);
	iesEnum ixfRegisterSharedComponentProvider(IMsiRecord &);
	iesEnum ixfRemoveBaseline(IMsiRecord &);
	iesEnum ixfResourceUpdate(IMsiRecord &);
	iesEnum ixfRollbackInfo(IMsiRecord &);
	iesEnum ixfSecureTransformCache(IMsiRecord &);
	iesEnum ixfServiceConfigure(IMsiRecord &);
	iesEnum ixfServiceConfigureFailureAction(IMsiRecord &);
	iesEnum ixfServiceControl(IMsiRecord &);
	iesEnum ixfServiceInstall(IMsiRecord &);
	iesEnum ixfSetBaseline(IMsiRecord &);
	iesEnum ixfSetCompanionParent(IMsiRecord &);
	iesEnum ixfSetSourceFolder(IMsiRecord &);
	iesEnum ixfSetTargetFolder(IMsiRecord &);
	iesEnum ixfShortcutCreate(IMsiRecord &);
	iesEnum ixfShortcutPropertyCreate(IMsiRecord &);
	iesEnum ixfShortcutRemove(IMsiRecord &);
	iesEnum ixfSourceListAppend(IMsiRecord &);
	iesEnum ixfSourceListPublish(IMsiRecord &);
	iesEnum ixfSourceListRegisterLastUsed(IMsiRecord &);
	iesEnum ixfSourceListUnpublish(IMsiRecord &);
	iesEnum ixfStreamAdd(IMsiRecord &);
	iesEnum ixfStreamsRemove(IMsiRecord &);
	iesEnum ixfSummaryInfoUpdate(IMsiRecord &);
	iesEnum ixfTypeLibraryRegister(IMsiRecord &);
	iesEnum ixfTypeLibraryUnregister(IMsiRecord &);
	iesEnum ixfURLPatchSourceTypeRegister(IMsiRecord &);
	iesEnum ixfURLSourceTypeRegister(IMsiRecord &);
	iesEnum ixfUnregisterSharedComponentProvider(IMsiRecord &);
	iesEnum ixfUpdateEnvironmentStrings(IMsiRecord &);
	iesEnum ixfUpdateEstimatedSize(IMsiRecord &);
	iesEnum ixfUpgradeCodePublish(IMsiRecord &);
	iesEnum ixfUpgradeCodeUnpublish(IMsiRecord &);
	iesEnum ixfUserRegister(IMsiRecord &);
	imsEnum DispatchMessageW(imtEnum,IMsiRecord &,Bool);
	imsEnum DispatchProgress(unsigned int);
	imsEnum Message(imtEnum,IMsiRecord &);
	imsEnum ReportProgress();
	imsEnum ShowFileErrorDialog(int,IMsiString const &,Bool);
	int GetProductDeploymentFlags();
	int GetProductInstanceType();
	int GetProductLUASetting();
	static IMsiRecord * UninstallAssembly(IMsiString const &,IMsiString const &,iatAssemblyType);
	unsigned short * * NewArgumentArray(IMsiString const &,int &);
	void GetProductClientList(unsigned short const *,unsigned short const *,unsigned int,IMsiString const * &);
	void InsertTopRecord(IMsiRecord &);
	void PatchHasClients(IMsiString const &,IMsiString const &,bool &,bool &);
	void PushRecord(IMsiRecord &);
	void UpdateProductSizeCache(IMsiPath &,bool,__int64);
	~CMsiOpExecute();
public:
	Bool ReplaceFileOnReboot(unsigned short const *,unsigned short const *,IMsiRecord *,iehEnum);
	bool RollbackRecord(ixoEnum,IMsiRecord &);
	iesEnum RemoveFile(IMsiPath &,IMsiString const &,Bool,bool,bool,Bool,iehEnum,bool,bool *);
	imsEnum DispatchError(imtEnum,int);
	imsEnum DispatchError(imtEnum,int,IMsiString const &);
	imsEnum DispatchError(imtEnum,int,IMsiString const &,IMsiString const &);
	imsEnum DispatchError(imtEnum,int,IMsiString const &,IMsiString const &,IMsiString const &);
	imsEnum DispatchError(imtEnum,int,int,unsigned short const *);
	imsEnum DispatchError(imtEnum,int,unsigned short const *,int);
	imsEnum DispatchError(imtEnum,int,unsigned short const *,int,int,int);
};

struct CMsiParser
{
	iecEnum Evaluate(tokEnum);
	tokEnum Lex();
};

class CMsiPatchManager
{
	IMsiRecord * ActivateChainOfPatches(IMsiString const &,int,bool);
	IMsiRecord * DetermineEligiblePatches();
	IMsiRecord * DetermineIfProductRequiresLegacyPatchMethod();
	IMsiRecord * GetCurrentlyRegisteredComponentAssemblyFolder(IMsiString const &,IMsiString const &,unsigned short const *,iaaAppAssignment,IMsiPath * &,iatAssemblyType *);
	IMsiRecord * GetTargetPathAndFileNameForFileKey(IMsiString const &,IMsiString const * &,IMsiPath * &);
	IMsiRecord * InitializeTables();
	IMsiRecord * MarkNewAndMinorUpdatePatches();
	IMsiRecord * PopulateMsiPatchMediaTable();
	bool AttemptNewMinorUpdateDeltaTest(IMsiString const &);
	bool BinaryPatchIsFromANewMSP(IMsiString const &);
	bool ResequenceUnpatchedFile(unsigned int,int);
	static bool ResequenceUnpatchedFile(void *,unsigned int,int);
protected:
	IMsiRecord * DetermineFirstNewMinorUpdatePatchForFile(IMsiString const &,int &,IMsiStream * &);
	IMsiRecord * DetermineLastBinaryPatchForFile(IMsiString const &,int &,IMsiStream * &);
	IMsiRecord * FindFilePatchesUsingBaselineChain(IMsiString const &,bool &);
	IMsiRecord * FindFilePatchesUsingCurrentFile(IMsiString const &,bool,int,IMsiStream &,bool &);
	IMsiRecord * FindFilePatchesUsingGACFile(IMsiString const &,bool,IMsiString const &,iatAssemblyType,int,IMsiStream &,bool &);
	IMsiRecord * FindFilePatchesUsingLastBaseline(IMsiString const &,int,IMsiStream &,bool &);
	IMsiRecord * FindFilePatchesUsingLegacyAlgorithm(IMsiString const &,bool &);
	IMsiRecord * PerformFileRedirectionBasedUponSourceTypeAndSequence(IMsiString const &,eSourceFileType,int,IMsiString const &);
public:
	CMsiPatchManager(IMsiEngine &,IMsiDatabase &);
	IMsiRecord * DetermineActivePatchesForSpecificFileKey(IMsiString const &,IMsiString const &);
	IMsiRecord * GetCurrentlyRegisteredComponentAssemblyFolder(IMsiString const &,bool,IMsiPath * &,iatAssemblyType *);
	IMsiRecord * InitializePatchManager();
	IMsiRecord * ProcessPatches();
	bool FOptedInForSharedComponent(IMsiString const &);
	bool FileComponentIsAGlobalAssembly(IMsiString const &,iatAssemblyType &);
	bool FileHasBinaryPatches(IMsiString const &);
	bool GetRedirectedSource(IMsiString const &,IMsiString const &,IMsiString const * &,IMsiString const * &,bool *,bool *,bool *);
	bool GetRedirectionStateOfFile(IMsiString const &,bool &,int &);
	bool NextResequencedFile(IMsiString const * &,int &,int &);
	bool PatchCodeFromPatchSequence(int,IMsiString const * &);
	bool ResetResequencedFile();
	int LastSequenceFromPatchCode(IMsiString const &);
	void DumpPatchManagerPatchTableInfo();
	~CMsiPatchManager();
};

class CMsiPatchSequencer
{
	CPatchTransformInfo * CreateTransformInfo(void * const,bool,unsigned short const *);
	IMsiString const & GetPatchDisplayName(IMsiString const &);
	bool AreThereAnyPatchesOfStateAndType(CMsiPatchSequencer::iePatchState,int,bool);
	bool DeterminePatchType(bool,IMsiString const &,IMsiString const &,IMsiString const &,IMsiString const &,iePatchType &);
	bool DoesPatchTargetRTM(IMsiCursor &);
	bool EnsureOrderedGUIDsInitialized();
	bool EnsurePatchSequenceInitialized();
	bool EnsurePredecessorInitialized();
	bool EnsureQFESequenceInitialized();
	bool IsOfInterestFor20Obsoletion(int,CMsiPatchSequencer::iePatchState,ipsPatchStateEnum,int);
	unsigned int CheckIfOptimizationsArePossible(iePatchSequencerMode,CMsiPatchSequencer::ieOptimizationType &);
	unsigned int FetchQFEs(IMsiString const &,IMsiString const &,unsigned short,IMsiString const &);
	unsigned int GetQFEsSequencingInfo(IMsiCursor *,IMsiString const &,bool &);
	unsigned int LocalGetPatchInfo(XMLBlob *,bool *,unsigned short const *,unsigned short const *,iePatchType *,bool *,IMsiString const * *,IMsiString const * *);
	unsigned int LocalGetPatchInfo(unsigned short const *,IMsiStorage *,bool *,IMsiServices *,unsigned short const *,unsigned short const *,iePatchType *,bool *,IMsiString const * *,IMsiString const * *,IMsiString const * *);
	unsigned int MassageUnapplicablePatches(iePatchSequencerMode);
	unsigned int MergeSequences();
	unsigned int ObsoleteTrim20s();
	unsigned int ReadInData(bool);
	unsigned int RetrieveAppliedPatchData(IMsiCursor *,IMsiString const &,int *,IMsiString const * &,IMsiString const * &,IMsiString const * &,unsigned short &);
	unsigned int RetrieveMinorUpgradeData();
	unsigned int RetrieveQFEs();
	unsigned int RetrieveSequencingInfo(IMsiStorage const *,IMsiString const &,IMsiString const &,IMsiString const &,iePatchType,bool *);
	unsigned int RetrieveSequencingInfo(XMLBlob *,IMsiString const &,IMsiString const &,iePatchType,bool *);
	unsigned int ReturnData();
	unsigned int SequenceQFEs();
	unsigned int SortMinorUpgrades();
	unsigned int SortOnVersions(IMsiCursor *,IMsiCursor *,int,int,icfvEnum (*)(unsigned long,unsigned long,unsigned long,unsigned long),unsigned int);
	unsigned int SortQFEsInVersion(IMsiCursor *,int);
	unsigned int SupersedeTrim(bool);
	unsigned int VerifyApplicabilityInSequence(IMsiString const &,int,int,bool,int,bool,IMsiCursor *,int,int,IMsiString const &,IMsiString const &,unsigned short,IMsiString const &,IMsiString const * *,IMsiString const * &,IMsiString const * &,unsigned short &,IMsiString const * *);
	unsigned int VerifyPatchApplicability(IMsiString const &,IMsiCursor *,bool,bool,IMsiString const &,IMsiString const &,unsigned short,IMsiString const &,IMsiString const * *,IMsiString const * *,unsigned short *,IMsiString const * *);
	unsigned short const * GetPatchType(int);
	void RecordErrorForPatch(IMsiString const &,unsigned int);
public:
	CMsiPatchSequencer(IMsiDatabase *);
	unsigned int SequencePatches(IMsiString const &,IMsiString const &,IMsiString const &,unsigned short,bool,iePatchSequencerMode,IMsiRecord * *);
	void Reset();
	~CMsiPatchSequencer();
};

class CMsiPath
{
protected:
	Bool FFolderExists(unsigned short const *);
	IMsiRecord * CheckLanguageIDs(unsigned short const *,unsigned short const *,iclEnum &,unsigned short * const,int);
	IMsiRecord * ChkFileSizeEx();
	IMsiRecord * EnsureCurFileOverwrite(int *);
	IMsiRecord * FitFileFilter(IMsiRecord &,Bool &);
	IMsiRecord * GetChecksums(unsigned short const *,void *,int,unsigned long *,unsigned long *);
	IMsiRecord * GetFileOrFolderEnumeratorCore(IEnumMsiString * &,Bool,bool);
	IMsiRecord * GetFullFilePath(unsigned short const *,Bool,IMsiString const * &);
	IMsiRecord * PathExists(IMsiString const &,Bool &);
	IMsiRecord * TempFolderOrFile(Bool,unsigned short const *,unsigned short const *,Bool,_SECURITY_ATTRIBUTES *,IMsiString const * &);
	IMsiRecord * ValidatePathSyntax(IMsiString const &,IMsiString const * &);
	IMsiRecord * ValidateSubPathSyntax(IMsiString const &);
	IMsiString const & NormalizePath(unsigned short const *,Bool);
	ifiEnum GetFileVersion(unsigned short const *,unsigned long &,unsigned long &,bool);
	ifiEnum GetLangIDArrayFromFile(unsigned short const *,unsigned short * const,int,int &,bool);
	void ChkCurFileAttributes(_FILETIME *,_FILETIME *,_FILETIME *);
	void ResetCachedStatus();
public:
	CMsiPath(IMsiServices *);
	virtual Bool SupportsLFN();
	virtual IMsiRecord * AppendPiece(IMsiString const &);
	virtual IMsiRecord * BindImage(IMsiString const &,IMsiString const &);
	virtual IMsiRecord * CheckFileHash(unsigned short const *,MD5Hash &,icfhEnum &);
	virtual IMsiRecord * CheckFileVersion(unsigned short const *,unsigned short const *,unsigned short const *,MD5Hash *,icfvEnum &,int *,bool);
	virtual IMsiRecord * CheckLanguageIDs(unsigned short const *,unsigned short const *,iclEnum &);
	virtual IMsiRecord * Child(IMsiPath &,IMsiString const * &);
	virtual IMsiRecord * ChopPiece();
	virtual IMsiRecord * ClonePath(IMsiPath * &);
	virtual IMsiRecord * ClusteredFileSize(unsigned int,unsigned int &);
	virtual IMsiRecord * Compare(IMsiPath &,ipcEnum &);
	virtual IMsiRecord * CreateTempFolder(unsigned short const *,unsigned short const *,Bool,_SECURITY_ATTRIBUTES *,IMsiString const * &);
	virtual IMsiRecord * CurFileExists(Bool &,unsigned long *);
	virtual IMsiRecord * CurFileSize(unsigned int &);
	virtual IMsiRecord * CurFileSizeEx(unsigned __int64 &);
	virtual IMsiRecord * EnsureExists(int *);
	virtual IMsiRecord * EnsureOverwrite(unsigned short const *,int *);
	virtual IMsiRecord * Exists(Bool &);
	virtual IMsiRecord * FileCanBeOpened(unsigned short const *,unsigned long,bool &,unsigned long &,void * *);
	virtual IMsiRecord * FileDate(unsigned short const *,MsiDate &);
	virtual IMsiRecord * FileExists(unsigned short const *,Bool &,unsigned long *);
	virtual IMsiRecord * FileInUse(unsigned short const *,Bool &);
	virtual IMsiRecord * FileSize(unsigned short const *,unsigned int &);
	virtual IMsiRecord * FileSizeEx(unsigned short const *,unsigned __int64 &);
	virtual IMsiRecord * FileWritable(unsigned short const *,Bool &);
	virtual IMsiRecord * FindFile(IMsiRecord &,int,Bool &);
	virtual IMsiRecord * GetAllFileAttributes(unsigned short const *,int &);
	virtual IMsiRecord * GetCompanionFileInstallState(IMsiString const &,IMsiString const &,IMsiString const &,IMsiPath &,IMsiString const &,MD5Hash *,ifsEnum &,Bool &,unsigned int *,Bool *,int,int *);
	virtual IMsiRecord * GetCurFileAttributes(unsigned long &);
	virtual IMsiRecord * GetCurFileFullPath(IMsiString const * &);
	virtual IMsiRecord * GetFileAttribute(unsigned short const *,ifaEnum,Bool &);
	virtual IMsiRecord * GetFileChecksum(unsigned short const *,unsigned long *,unsigned long *);
	virtual IMsiRecord * GetFileEnumerator(IEnumMsiString * &,Bool);
	virtual IMsiRecord * GetFileInstallState(IMsiString const &,IMsiString const &,IMsiString const &,MD5Hash *,ifsEnum &,Bool &,unsigned int *,Bool *,int,int *,bool);
	virtual IMsiRecord * GetFileVersionString(unsigned short const *,IMsiString const * &,bool);
	virtual IMsiRecord * GetFullFilePath(unsigned short const *,IMsiString const * &);
	virtual IMsiRecord * GetFullUNCFilePath(unsigned short const *,IMsiString const * &);
	virtual IMsiRecord * GetLangIDStringFromFile(unsigned short const *,IMsiString const * &,bool);
	virtual IMsiRecord * GetSelfRelativeSD(IMsiStream * &);
	virtual IMsiRecord * GetSubFolderEnumerator(IEnumMsiString * &,Bool);
	virtual IMsiRecord * IsFileModified(unsigned short const *,Bool &);
	virtual IMsiRecord * IsPE64Bit(unsigned short const *,bool &,bool &);
	virtual IMsiRecord * Remove(bool *);
	virtual IMsiRecord * RemoveFile(unsigned short const *);
	virtual IMsiRecord * SetAllFileAttributes(unsigned short const *,int);
	virtual IMsiRecord * SetCurFileAllAttributes(int);
	virtual IMsiRecord * SetCurFileAttribute(ifaEnum,Bool);
	virtual IMsiRecord * SetFileAttribute(unsigned short const *,ifaEnum,Bool);
	virtual IMsiRecord * SetPath(unsigned short const *);
	virtual IMsiRecord * SetPathToPath(IMsiPath &);
	virtual IMsiRecord * SetVolume(IMsiVolume &);
	virtual IMsiRecord * TempFileName(unsigned short const *,unsigned short const *,Bool,IMsiString const * &,CSecurityDescription *);
	virtual IMsiRecord * VerifyFileChecksum(unsigned short const *,Bool &);
	virtual IMsiRecord * Writable(Bool &);
	virtual IMsiString const & GetEndSubPath();
	virtual IMsiString const & GetMsiStringValue();
	virtual IMsiString const & GetPath();
	virtual IMsiString const & GetRelativePath();
	virtual IMsiVolume & GetVolume();
	virtual bool IsCurFileRequireImpersonation();
	virtual bool IsLink();
	virtual bool IsRootPath();
	virtual bool ShouldImpersonate();
	virtual int GetIntegerValue();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned int GetUniqueId();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void ResetCachedCurFileInfo();
	virtual void SetUniqueId(unsigned int);
};

struct CMsiPreview
{
	virtual Bool Break();
	virtual Bool Initialize(IMsiEngine &,iuiEnum,HWND__ *,bool &);
	virtual HWND__ * GetTopWindow();
	virtual iesEnum DoAction(unsigned short const *);
	virtual imsEnum Message(imtEnum,IMsiRecord &);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void Terminate(bool);
};

struct CMsiProduct
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CMsiRecord
{
protected:
	static _RTL_CRITICAL_SECTION m_RecCacheCrs;
	static int FormatTextCallback(unsigned short const *,int,CTempBufferRef<unsigned short> &,Bool &,Bool &,Bool &,IUnknown *);
	static long m_cCacheRef;
public:
	int FormatRecordParam(CTempBufferRef<unsigned short> &,int,Bool &);
	static IMsiRecord * NewRecordFromCache(unsigned int);
	static void KillRecordCache(unsigned char);
	virtual Bool ClearData();
	virtual Bool IsChanged(unsigned int);
	virtual Bool IsInteger(unsigned int);
	virtual Bool IsNull(unsigned int);
	virtual Bool RefString(unsigned int,unsigned short const *);
	virtual Bool SetHandle(unsigned int,void * const);
	virtual Bool SetInteger(unsigned int,int);
	virtual Bool SetMsiData(unsigned int,IMsiData const *);
	virtual Bool SetMsiString(unsigned int,IMsiString const &);
	virtual Bool SetNull(unsigned int);
	virtual Bool SetString(unsigned int,unsigned short const *);
	virtual IMsiData const * GetMsiData(unsigned int);
	virtual IMsiRecord * Clone();
	virtual IMsiString const & FormatText(Bool,Bool);
	virtual IMsiString const & GetMsiString(unsigned int);
	virtual int GetFieldCount();
	virtual int GetInteger(unsigned int);
	virtual int GetTextSize(unsigned int);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual unsigned short const * GetString(unsigned int);
	virtual void * GetHandle(unsigned int);
	virtual void ClearUpdate();
	virtual void Initialize(IMsiRecord const &);
	virtual void RemoveReferences();
};

struct CMsiRecordNull
{
	virtual Bool ClearData();
	virtual Bool IsChanged(unsigned int);
	virtual Bool IsInteger(unsigned int);
	virtual Bool IsNull(unsigned int);
	virtual Bool RefString(unsigned int,unsigned short const *);
	virtual Bool SetHandle(unsigned int,void * const);
	virtual Bool SetInteger(unsigned int,int);
	virtual Bool SetMsiData(unsigned int,IMsiData const *);
	virtual Bool SetMsiString(unsigned int,IMsiString const &);
	virtual Bool SetNull(unsigned int);
	virtual Bool SetString(unsigned int,unsigned short const *);
	virtual IMsiData const * GetMsiData(unsigned int);
	virtual IMsiRecord * Clone();
	virtual IMsiString const & FormatText(Bool,Bool);
	virtual IMsiString const & GetMsiString(unsigned int);
	virtual int GetFieldCount();
	virtual int GetInteger(unsigned int);
	virtual int GetTextSize(unsigned int);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual unsigned short const * GetString(unsigned int);
	virtual void * GetHandle(unsigned int);
	virtual void ClearUpdate();
	virtual void Initialize(IMsiRecord const &);
	virtual void RemoveReferences();
};

class CMsiRegKey
{
	IMsiRecord * GetRawValue(unsigned short const *,CTempBufferRef<char> &,unsigned long &);
	IMsiRecord * InitMsiRegKey(rrwEnum,Bool);
	IMsiRecord * SetRawValue(unsigned short const *,CTempBufferRef<char> &,unsigned long);
	void SetFullKey();
public:
	CMsiRegKey(HKEY__ *,IMsiServices *,ibtBinaryType);
	CMsiRegKey(IMsiRegKey &,HKEY__ *,IMsiString const &,IMsiStream *,IMsiServices *,ibtBinaryType,TRI);
	virtual IMsiRecord * Create();
	virtual IMsiRecord * Exists(Bool &);
	virtual IMsiRecord * GetSelfRelativeSD(IMsiStream * &);
	virtual IMsiRecord * GetSubKeyEnumerator(IEnumMsiString * &);
	virtual IMsiRecord * GetValue(unsigned short const *,IMsiString const * &);
	virtual IMsiRecord * GetValueEnumerator(IEnumMsiString * &);
	virtual IMsiRecord * Remove();
	virtual IMsiRecord * RemoveSubTree(unsigned short const *);
	virtual IMsiRecord * RemoveValue(unsigned short const *,IMsiString const *);
	virtual IMsiRecord * SetValue(unsigned short const *,IMsiString const &);
	virtual IMsiRecord * ValueExists(unsigned short const *,Bool &);
	virtual IMsiRegKey * CreateChild(unsigned short const *,IMsiStream *,TRI);
	virtual IMsiString const & GetKey();
	virtual TRI GetReflectionState();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void SetSD(IMsiStream *);
};

class CMsiRegistryCost
{
	IMsiRecord * LinkToWindowsFolder(unsigned short const *);
	void AdjustRegistryCost(int &);
public:
	virtual IMsiRecord * GetDynamicCost(IMsiString const &,IMsiString const &,Bool,int &,int &,int &,int &,int &,int &,int &,int &);
	virtual IMsiRecord * Initialize();
};

class CMsiRemoteAPI
{
	bool ValidateCookie(int,unsigned char const *,int);
protected:
	~CMsiRemoteAPI();
public:
	CMsiRemoteAPI();
	bool FindAndValidateContextFromCallerPID(icacCustomActionContext *);
	long BeginAction(int);
	long EndAction(int);
	virtual long CloseAllHandles(int,unsigned long,unsigned char const *,int);
	virtual long CloseHandle(int,unsigned long,unsigned char const *,int,unsigned long);
	virtual long CreateRecord(int,unsigned long,unsigned char const *,int,unsigned int,unsigned long *);
	virtual long DatabaseCommit(int,unsigned long,unsigned char const *,int,unsigned long);
	virtual long DatabaseGetPrimaryKeys(int,unsigned long,unsigned char const *,int,unsigned long,unsigned short const *,unsigned long *);
	virtual long DatabaseIsTablePersistent(int,unsigned long,unsigned char const *,int,unsigned long,unsigned short const *,int *);
	virtual long DatabaseOpenView(int,unsigned long,unsigned char const *,int,unsigned long,unsigned short const *,unsigned long *);
	virtual long DoAction(int,unsigned long,unsigned char const *,int,unsigned long,unsigned short const *);
	virtual long EnumComponentCosts(int,unsigned long,unsigned char const *,int,unsigned long,unsigned short const *,unsigned long,long,unsigned short *,unsigned long,unsigned long *,int *,int *);
	virtual long EvaluateCondition(int,unsigned long,unsigned char const *,int,unsigned long,unsigned short const *,int *);
	virtual long FormatRecord(int,unsigned long,unsigned char const *,int,unsigned long,unsigned long,unsigned short *,unsigned long,unsigned long *);
	virtual long GetActiveDatabase(int,unsigned long,unsigned char const *,int,unsigned long,unsigned long *);
	virtual long GetComponentState(int,unsigned long,unsigned char const *,int,unsigned long,unsigned short const *,long *,long *);
	virtual long GetFeatureCost(int,unsigned long,unsigned char const *,int,unsigned long,unsigned short const *,int,long,int *);
	virtual long GetFeatureState(int,unsigned long,unsigned char const *,int,unsigned long,unsigned short const *,long *,long *);
	virtual long GetFeatureValidStates(int,unsigned long,unsigned char const *,int,unsigned long,unsigned short const *,unsigned long *);
	virtual long GetInstallerObject(int,unsigned long,unsigned char const *,int,IDispatch * *);
	virtual long GetLanguage(int,unsigned long,unsigned char const *,int,unsigned long,unsigned short *);
	virtual long GetLastErrorRecord(int,unsigned long,unsigned char const *,int,unsigned long *);
	virtual long GetMode(int,unsigned long,unsigned char const *,int,unsigned long,long,unsigned char *);
	virtual long GetProperty(int,unsigned long,unsigned char const *,int,unsigned long,unsigned short const *,unsigned short *,unsigned long,unsigned long *);
	virtual long GetSourcePath(int,unsigned long,unsigned char const *,int,unsigned long,unsigned short const *,unsigned short *,unsigned long,unsigned long *);
	virtual long GetSummaryInformation(int,unsigned long,unsigned char const *,int,unsigned long,unsigned short const *,unsigned int,unsigned long *);
	virtual long GetTargetPath(int,unsigned long,unsigned char const *,int,unsigned long,unsigned short const *,unsigned short *,unsigned long,unsigned long *);
	virtual long OpenDatabase(int,unsigned long,unsigned char const *,int,unsigned short const *,unsigned short const *,unsigned long *);
	virtual long ProcessMessage(int,unsigned long,unsigned char const *,int,unsigned long,long,unsigned long,int *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RecordClearData(int,unsigned long,unsigned char const *,int,unsigned long);
	virtual long RecordDataSize(int,unsigned long,unsigned char const *,int,unsigned long,unsigned int,unsigned int *);
	virtual long RecordGetFieldCount(int,unsigned long,unsigned char const *,int,unsigned long,unsigned int *);
	virtual long RecordGetInteger(int,unsigned long,unsigned char const *,int,unsigned long,unsigned int,int *);
	virtual long RecordGetString(int,unsigned long,unsigned char const *,int,unsigned long,unsigned int,unsigned short *,unsigned long,unsigned long *);
	virtual long RecordIsNull(int,unsigned long,unsigned char const *,int,unsigned long,unsigned int,unsigned char *);
	virtual long RecordReadStream(int,unsigned long,unsigned char const *,int,unsigned long,unsigned int,unsigned char,char *,unsigned long *);
	virtual long RecordSetInteger(int,unsigned long,unsigned char const *,int,unsigned long,unsigned int,int);
	virtual long RecordSetStream(int,unsigned long,unsigned char const *,int,unsigned long,unsigned int,unsigned short const *);
	virtual long RecordSetString(int,unsigned long,unsigned char const *,int,unsigned long,unsigned int,unsigned short const *);
	virtual long Sequence(int,unsigned long,unsigned char const *,int,unsigned long,unsigned short const *,int);
	virtual long SetComponentState(int,unsigned long,unsigned char const *,int,unsigned long,unsigned short const *,long);
	virtual long SetFeatureAttributes(int,unsigned long,unsigned char const *,int,unsigned long,unsigned short const *,long);
	virtual long SetFeatureState(int,unsigned long,unsigned char const *,int,unsigned long,unsigned short const *,long);
	virtual long SetInstallLevel(int,unsigned long,unsigned char const *,int,unsigned long,int);
	virtual long SetMode(int,unsigned long,unsigned char const *,int,unsigned long,long,unsigned char);
	virtual long SetProperty(int,unsigned long,unsigned char const *,int,unsigned long,unsigned short const *,unsigned short const *);
	virtual long SetTargetPath(int,unsigned long,unsigned char const *,int,unsigned long,unsigned short const *,unsigned short const *);
	virtual long SummaryInfoGetProperty(int,unsigned long,unsigned char const *,int,unsigned long,unsigned int,unsigned int *,int *,_FILETIME *,unsigned short *,unsigned long,unsigned long *);
	virtual long SummaryInfoGetPropertyCount(int,unsigned long,unsigned char const *,int,unsigned long,unsigned int *);
	virtual long SummaryInfoPersist(int,unsigned long,unsigned char const *,int,unsigned long);
	virtual long SummaryInfoSetProperty(int,unsigned long,unsigned char const *,int,unsigned long,unsigned int,unsigned int,int,_FILETIME *,unsigned short const *);
	virtual long VerifyDiskSpace(int,unsigned long,unsigned char const *,int,unsigned long);
	virtual long ViewClose(int,unsigned long,unsigned char const *,int,unsigned long);
	virtual long ViewExecute(int,unsigned long,unsigned char const *,int,unsigned long,unsigned long);
	virtual long ViewFetch(int,unsigned long,unsigned char const *,int,unsigned long,unsigned long *);
	virtual long ViewGetColumnInfo(int,unsigned long,unsigned char const *,int,unsigned long,long,unsigned long *);
	virtual long ViewGetError(int,unsigned long,unsigned char const *,int,unsigned long,unsigned short *,unsigned long,unsigned long *,int *);
	virtual long ViewModify(int,unsigned long,unsigned char const *,int,unsigned long,long,unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CMsiRemoveFileCost
{
	IMsiRecord * AddToRemoveFilePathTable(IMsiString const &,IMsiString const &,int);
	IMsiRecord * GetDynamicCost(IMsiString const &,IMsiString const &,Bool,int &,int &,int &,int &,int &,int &,int &,int &,CMsiRemoveFileCost::icrlEnum);
	IMsiRecord * Initialize(Bool);
	IMsiRecord * RemoveComponentFromRemoveFilePathTable(IMsiString const &);
public:
	CMsiRemoveFileCost(IMsiEngine &);
	virtual IMsiRecord * GetDynamicCost(IMsiString const &,IMsiString const &,Bool,int &,int &,int &,int &,int &,int &,int &,int &);
	virtual IMsiRecord * Initialize();
	virtual IMsiRecord * Reset();
};

struct CMsiReserveCost
{
	virtual IMsiRecord * GetDynamicCost(IMsiString const &,IMsiString const &,Bool,int &,int &,int &,int &,int &,int &,int &,int &);
	virtual IMsiRecord * Initialize();
};

class CMsiSQMSession
{
protected:
	static sqmHealingCheckResultEnum m_sqmHealingCheckResult;
public:
	CMsiSQMSession();
	static void MarkHealingCheck(sqmHealingCheckResultEnum);
	static void RecordHealingCheck(sqmHealingCheckResultEnum);
	void EndSession();
	void RecordDWORD(unsigned long,unsigned long);
	void RecordElevationCause(sqmElevationCauseEnum);
	void RecordInstallType(IMsiEngine &);
	void RecordSecurityContext();
	void UpdateInstallSize(__int64);
	void UpdateInstallSourceType(bool,unsigned short const *,IMsiServices &);
};

class CMsiSecureRepairManager
{
	IMsiRecord * CreateContentHash(unsigned short const *,CTempBufferRef<unsigned char> &);
public:
	IMsiRecord * AllFilesHash();
	IMsiRecord * CompareCurrentAndStoredHashOfFile(unsigned short const *);
	IMsiRecord * CreateAndSaveHashOfFile(unsigned short const *);
	IMsiRecord * RunHashOperation(unsigned short const *);
	IMsiRecord * SecureCustomActions();
	bool DonotShowHashMissingUAC();
	bool IsGPDeployFirstInstall();
	static bool NeedsSecureRepair(unsigned short const *,eSecRepairModeEnum &);
	static void Base64Encode(CTempBufferRef<unsigned char> &,MsiString &);
	void SetHashDatabase(IMsiDatabase *);
};

struct CMsiServerConnMgr
{
	CMsiServerConnMgr(CMsiEngine *);
	~CMsiServerConnMgr();
};

struct CMsiServerProxy
{
	CMsiServerProxy(IMsiServices &,IMsiServer &);
	virtual IMsiRecord * RegisterUser(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *);
	virtual IMsiRecord * RemoveRunOnceEntry(unsigned short const *);
	virtual IMsiRecord * SetLastUsedSource(HWND__ *,unsigned short const *,unsigned short const *,unsigned char,unsigned char);
	virtual iesEnum InstallFinalize(iesEnum,IMsiMessage &,unsigned char);
	virtual int DoInstall(ireEnum,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,int,unsigned char,IMsiMessage &,iioEnum,unsigned long,HWND__ *,IMsiRecord const &);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned char CleanupTempPackages(IMsiMessage &,unsigned char);
	virtual unsigned char FMultiPackageTransaction();
	virtual unsigned char IsServiceInstalling();
	virtual unsigned char Reboot();
	virtual unsigned int CreateCustomActionServer(icacCustomActionContext,unsigned long,IMsiRemoteAPI *,unsigned short const *,unsigned long,unsigned long,unsigned char *,int *,IMsiCustomAction * *,unsigned long *,unsigned char);
	virtual unsigned int GetJoinEEUIInfo(unsigned short *,unsigned long *,icacCustomActionContext *);
	virtual unsigned int GetTransactionAttributes();
	virtual unsigned int MsiBeginTransactionW(unsigned short const *,unsigned long,unsigned long *,unsigned short *);
	virtual unsigned int MsiEndTransaction(unsigned long,IMsiMessage &);
	virtual unsigned int MsiJoinTransaction(unsigned long,unsigned long,unsigned long *,unsigned short *);
	virtual unsigned int RegisterCustomActionServer(icacCustomActionContext *,unsigned char const *,int,IMsiCustomAction *,unsigned long *,IMsiRemoteAPI * *,unsigned long *);
	virtual unsigned int SetChangeOfOwnerEvent();
	virtual unsigned int SetEEUIDirectoryAndFilter(unsigned short const *,unsigned long);
	virtual unsigned int SetEEUIServerDetails(IMsiCustomAction *,unsigned char const *,unsigned long,icacCustomActionContext);
	virtual unsigned int SetInstallParentWindow(HWND__ *);
	virtual unsigned int SourceListAddSource(unsigned short const *,unsigned short const *,isrcEnum,unsigned short const *);
	virtual unsigned int SourceListClearByType(unsigned short const *,unsigned short const *,isrcEnum);
	virtual unsigned int SourceListClearLastUsed(unsigned short const *,unsigned short const *);
	virtual unsigned int SourceListSetInfo(unsigned short const *,unsigned short const *,unsigned long,unsigned long,unsigned short const *,unsigned short const *);
	virtual unsigned int SourceListUpdate(unsigned char,unsigned short const *,unsigned short const *,unsigned long,unsigned long,unsigned long,unsigned short const *,unsigned short const *,unsigned long,iSrcOpEnum);
	virtual unsigned int UninstallApplication(unsigned short const *,unsigned int);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CMsiServices
{
protected:
	IMsiRecord * ProcessTypeLibrary(unsigned short const *,unsigned long,unsigned short const *,unsigned short const *,Bool,ibtBinaryType);
	IMsiRecord * ReadLineFromIni(IMsiPath *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned int,CTempBufferRef<unsigned short> &);
	IMsiRecord * WriteLineToIni(IMsiPath *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *);
public:
	CMsiServices();
	virtual Bool CheckMsiVersion(unsigned int);
	virtual Bool CreateLog(unsigned short const *,Bool);
	virtual Bool CreateVolumeFromLabel(unsigned short const *,idtEnum,IMsiVolume * &);
	virtual Bool FTestNoPowerdown();
	virtual Bool LoggingEnabled();
	virtual Bool SetPlatformProperties(IMsiTable &,Bool,isppEnum,IMsiTable *);
	virtual Bool WriteLog(unsigned short const *);
	virtual IEnumMsiVolume * EnumDriveType(idtEnum);
	virtual IMsiMalloc & GetAllocator();
	virtual IMsiRecord & CreateRecord(unsigned int);
	virtual IMsiRecord * CreateCopier(ictEnum,IMsiStorage *,IMsiFileCopy * &);
	virtual IMsiRecord * CreateDatabase(unsigned short const *,idoEnum,IMsiDatabase * &);
	virtual IMsiRecord * CreateDatabaseFromStorage(IMsiStorage &,Bool,IMsiDatabase * &);
	virtual IMsiRecord * CreateFilePath(unsigned short const *,IMsiPath * &,IMsiString const * &);
	virtual IMsiRecord * CreateFileStream(unsigned short const *,Bool,IMsiStream * &);
	virtual IMsiRecord * CreatePatcher(IMsiFilePatch * &);
	virtual IMsiRecord * CreatePath(unsigned short const *,IMsiPath * &);
	virtual IMsiRecord * CreateShortcut(IMsiPath &,IMsiString const &,IMsiPath *,unsigned short const *,IMsiRecord *,_SECURITY_ATTRIBUTES *);
	virtual IMsiRecord * CreateShortcutProperty(IMsiPath &,IMsiString const &,IMsiString const &,IMsiString const &);
	virtual IMsiRecord * CreateStorage(unsigned short const *,ismEnum,IMsiStorage * &);
	virtual IMsiRecord * CreateStorageFromMemory(char const *,unsigned int,IMsiStorage * &);
	virtual IMsiRecord * CreateVolume(unsigned short const *,IMsiVolume * &);
	virtual IMsiRecord * ExtractFileName(unsigned short const *,Bool,IMsiString const * &);
	virtual IMsiRecord * GetModuleUsage(IMsiString const &,IEnumMsiRecord * &);
	virtual IMsiRecord * GetShellFolderPath(int,bool,IMsiString const * &,bool);
	virtual IMsiRecord * GetShellFolderPath(int,unsigned short const *,IMsiString const * &,bool);
	virtual IMsiRecord * GetUnhandledError();
	virtual IMsiRecord * ReadIniFile(IMsiPath *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned int,IMsiString const * &);
	virtual IMsiRecord * ReadScriptRecord(IMsiStream &,IMsiRecord * &,int);
	virtual IMsiRecord * ReadScriptRecordMsg(IMsiStream &);
	virtual IMsiRecord * RegisterTypeLibrary(unsigned short const *,unsigned long,unsigned short const *,unsigned short const *,ibtBinaryType);
	virtual IMsiRecord * RemoveShortcut(IMsiPath &,IMsiString const &);
	virtual IMsiRecord * UnregisterTypeLibrary(unsigned short const *,unsigned long,unsigned short const *,ibtBinaryType);
	virtual IMsiRecord * ValidateFileName(unsigned short const *,Bool);
	virtual IMsiRecord * WriteIniFile(IMsiPath *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,iifIniMode);
	virtual IMsiRegKey * GetRootKey(rrkEnum,ibtBinaryType);
	virtual IMsiStream * CreateStreamOnMemory(char const *,unsigned int);
	virtual IMsiString const & GetLocalPath(unsigned short const *);
	virtual IMsiString const & GetNullString();
	virtual IMsiString const & GetUserProfilePath();
	virtual bool FWriteScriptRecord(ixoEnum,IMsiStream &,IMsiRecord const &,IMsiRecord *,bool,bool);
	virtual bool FWriteScriptRecordMsg(ixoEnum,IMsiStream &,IMsiRecord const &,bool);
	virtual bool IsAssemblyTypeSupported(IMsiEngine *,bool,IMsiString const * &);
	virtual bool MustRemoteForURTAssemblyInstalls();
	virtual bool SetAssemblyProperties(IMsiEngine *,IMsiTable &);
	virtual char * AllocateMemoryStream(unsigned int,IMsiStream * &);
	virtual int GetLangNamesFromLangIDString(unsigned short const *,IMsiRecord &,int);
	virtual isliEnum SupportLanguageId(int,Bool);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void ClearAllCaches();
	virtual void ClearNoOSInterruptions();
	virtual void ClearNoPowerdown();
	virtual void GetFontFolderPath(IMsiString const * &);
	virtual void SetNoOSInterruptions();
	virtual void SetNoPowerdown();
};

class CMsiShortcutCost
{
	IMsiRecord * GetTargetFileRecord(IMsiString const &,IMsiRecord * &);
public:
	virtual IMsiRecord * GetDynamicCost(IMsiString const &,IMsiString const &,Bool,int &,int &,int &,int &,int &,int &,int &,int &);
	virtual IMsiRecord * Initialize();
};

class CMsiSourceList
{
	bool NonAdminAllowedToModifyByPolicy(bool);
	isfEnum MapIsrcToIsf(isrcEnum);
	unsigned int CleanUp();
	unsigned int ClearSpecifiedSource(IMsiRegKey *,unsigned short const *,int,int);
	unsigned int FindSource(IMsiRegKey *,isfEnum,unsigned short const *,int &,int &);
	unsigned int GetSubKey(isfEnum,unsigned short * *);
	unsigned int MoveIndices(IMsiRegKey *,int,int,bool);
	unsigned int UpdateLastUsed(isfEnum);
public:
	CMsiSourceList();
	bool GetLastUsedType(isfEnum &);
	unsigned int AddSource(isfEnum,unsigned short const *,unsigned long);
	unsigned int ClearASource(isfEnum,unsigned short const *);
	unsigned int ClearLastUsed();
	unsigned int ClearListByType(isfEnum);
	unsigned int GetProperty(unsigned short const *,unsigned short *,unsigned long *);
	unsigned int OpenSourceList(bool,bool,unsigned short const *,unsigned short const *);
	unsigned int OpenSourceListSpecific(bool,bool,bool,unsigned short const *,unsigned short const *,iaaAppAssignment);
	unsigned int RemoveProperty(unsigned short const *);
	unsigned int SetProperty(unsigned short const *,unsigned short const *,isfEnum);
	unsigned int SourceForIndex(isfEnum,unsigned int &,unsigned long *,unsigned short *,unsigned long *,unsigned short *,unsigned long *);
	unsigned int UpdateMediaSource(iSrcOpEnum,unsigned long,unsigned short const *,unsigned short const *);
	virtual ~CMsiSourceList();
};

class CMsiStorage
{
protected:
	~CMsiStorage();
public:
	CMsiStorage(IStorage &,ismEnum,CMsiStorage *,bool);
	virtual Bool DeleteOnRelease(bool);
	virtual Bool GetClass(_GUID *);
	virtual IEnumMsiString * GetStorageEnumerator();
	virtual IEnumMsiString * GetStreamEnumerator();
	virtual IMsiRecord * Commit();
	virtual IMsiRecord * CopyTo(IMsiStorage &,IMsiRecord *);
	virtual IMsiRecord * CreateSummaryInfo(unsigned int,IMsiSummaryInfo * &);
	virtual IMsiRecord * GetName(IMsiString const * &);
	virtual IMsiRecord * GetSubStorageNameList(IMsiString const * &,IMsiString const * &);
	virtual IMsiRecord * OpenStorage(unsigned short const *,ismEnum,IMsiStorage * &);
	virtual IMsiRecord * OpenStream(unsigned short const *,Bool,IMsiStream * &);
	virtual IMsiRecord * RemoveElement(unsigned short const *,Bool);
	virtual IMsiRecord * RenameElement(unsigned short const *,unsigned short const *,Bool);
	virtual IMsiRecord * Rollback();
	virtual IMsiRecord * SetClass(_GUID const &);
	virtual IMsiString const & GetMsiStringValue();
	virtual bool ValidateStorageClass(ivscEnum);
	virtual int GetIntegerValue();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned int GetUniqueId();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void SetUniqueId(unsigned int);
};

struct CMsiStream
{
	CMsiStream(CMsiStorage &,IStream &,Bool);
	virtual IMsiStream * Clone();
	virtual IMsiString const & GetMsiStringValue();
	virtual int GetIntegerValue();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Read(void *,unsigned long,unsigned long *);
	virtual unsigned int Remaining();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void Flush();
	virtual void Reset();
	virtual void Seek(int);
};

struct CMsiStreamBuffer
{
	virtual Bool Error();
	virtual int GetInt32();
	virtual short GetInt16();
	virtual unsigned int GetData(void *,unsigned int);
	virtual unsigned int GetUniqueId();
	virtual void PutData(void const *,unsigned int);
	virtual void PutInt16(short);
	virtual void PutInt32(int);
	virtual void SetUniqueId(unsigned int);
};

struct CMsiString
{
	CMsiString(unsigned short const &,int);
	static CMsiString * Create(unsigned int);
	static IMsiString const & Create(unsigned short const *);
	static void * operator new(unsigned __int64,int);
	virtual Bool Remove(iseEnum,unsigned int,IMsiString const * &);
	virtual IMsiString const & ExtractAndRemove(iseEnum,unsigned int,IMsiString const * &);
	virtual int CopyToBuf(unsigned short *,unsigned int);
	virtual unsigned short const * GetString();
	virtual void LowerCase(IMsiString const * &);
	virtual void SetString(unsigned short const *,IMsiString const * &);
	virtual void UpperCase(IMsiString const * &);
};

class CMsiStringBase
{
protected:
	void FindExtractAndRemoveString(iseEnum,unsigned int,unsigned short const * &,unsigned int &,unsigned short const * &,unsigned int &,bool &);
public:
	virtual Bool IsDBCS();
	virtual Bool Remove(iseEnum,unsigned int,IMsiString const * &);
	virtual IMsiString const & AddMsiString(IMsiString const &);
	virtual IMsiString const & AddString(unsigned short const *);
	virtual IMsiString const & Extract(iseEnum,unsigned int);
	virtual IMsiString const & ExtractAndRemove(iseEnum,unsigned int,IMsiString const * &);
	virtual IMsiString const & GetMsiStringValue();
	virtual int CharacterCount();
	virtual int Compare(iscEnum,unsigned short const *);
	virtual int GetIntegerValue();
	virtual int TextSize();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned int GetUniqueId();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual unsigned short * AllocateString(unsigned int,Bool,IMsiString const * &);
	virtual void AppendMsiString(IMsiString const &,IMsiString const * &);
	virtual void AppendString(unsigned short const *,IMsiString const * &);
	virtual void LowerCase(IMsiString const * &);
	virtual void RefString(unsigned short const *,IMsiString const * &);
	virtual void RemoveRef(IMsiString const * &);
	virtual void SetBinary(unsigned char const *,unsigned int,IMsiString const * &);
	virtual void SetChar(unsigned short,IMsiString const * &);
	virtual void SetInteger(int,IMsiString const * &);
	virtual void SetUniqueId(unsigned int);
	virtual void UpperCase(IMsiString const * &);
};

struct CMsiStringLive
{
	virtual int CopyToBuf(unsigned short *,unsigned int);
	virtual int TextSize();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual unsigned short const * GetString();
	virtual void SetString(unsigned short const *,IMsiString const * &);
};

struct CMsiStringNull
{
	virtual Bool Remove(iseEnum,unsigned int,IMsiString const * &);
	virtual IMsiString const & AddMsiString(IMsiString const &);
	virtual IMsiString const & AddString(unsigned short const *);
	virtual IMsiString const & Extract(iseEnum,unsigned int);
	virtual IMsiString const & ExtractAndRemove(iseEnum,unsigned int,IMsiString const * &);
	virtual int CopyToBuf(unsigned short *,unsigned int);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual unsigned short const * GetString();
	virtual void AppendMsiString(IMsiString const &,IMsiString const * &);
	virtual void AppendString(unsigned short const *,IMsiString const * &);
	virtual void LowerCase(IMsiString const * &);
	virtual void SetString(unsigned short const *,IMsiString const * &);
	virtual void UpperCase(IMsiString const * &);
};

struct CMsiStringRef
{
	virtual int CopyToBuf(unsigned short *,unsigned int);
	virtual unsigned short const * GetString();
	virtual void RemoveRef(IMsiString const * &);
	virtual void SetString(unsigned short const *,IMsiString const * &);
};

struct CMsiStringStrRef
{
	virtual Bool Remove(iseEnum,unsigned int,IMsiString const * &);
	virtual IMsiString const & ExtractAndRemove(iseEnum,unsigned int,IMsiString const * &);
	virtual unsigned long Release();
};

class CMsiSummaryInfo
{
	PropertyData * FindNewProperty(int);
	int * FindOldProperty(int);
public:
	static IMsiRecord * Create(CMsiStorage &,unsigned int,IMsiSummaryInfo * &);
	virtual Bool GetFileTimeProperty(int,_FILETIME &);
	virtual Bool GetIntegerProperty(int,int &);
	virtual Bool GetTimeProperty(int,MsiDate &);
	virtual Bool RemoveProperty(int);
	virtual Bool WritePropertyStream();
	virtual IMsiString const & GetStringProperty(int);
	virtual int GetPropertyCount();
	virtual int GetPropertyType(int);
	virtual int SetFileTimeProperty(int,_FILETIME &);
	virtual int SetIntegerProperty(int,int);
	virtual int SetStringProperty(int,IMsiString const &);
	virtual int SetTimeProperty(int,MsiDate);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CMsiSystemAccess
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned int ProvideComponentFromDescriptor(unsigned short const *,unsigned short *,unsigned long *,unsigned long *);
	virtual unsigned int ProvideComponentFromDescriptorA(char const *,char *,unsigned long *,unsigned long *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CMsiSystemChange
{
	CMsiSystemChange();
	void BeginSystemChange(IMsiDatabase *);
	void EndSystemChange(bool,__int64);
	void EndSystemChange(bool,unsigned short const *);
	void SetSystemChangeInfo(bool,bool,bool,bool,bool,bool,bool,unsigned short const *,iuiEnum,unsigned short);
};

class CMsiTable
{
protected:
	Bool AllocateData(int,int);
	int * IndexByTextKey();
	int LinkParent(int,unsigned int *);
	unsigned int * FindFirstKey(unsigned int,int,int &);
	~CMsiTable();
public:
	Bool DeleteRow(int);
	Bool FillColumn(unsigned int,unsigned int);
	Bool FindKey(int &,unsigned int *);
	Bool FindNextRow(int &,unsigned int *,unsigned int,Bool);
	Bool InsertRow(int &,unsigned int *);
	Bool LoadFromStorage(IMsiString const &,IMsiStorage &,int,int);
	Bool MatchRow(int &,unsigned int *);
	Bool ReleaseData();
	Bool RemovePersistentStreams(unsigned int,IMsiStorage &);
	Bool RenameStream(unsigned int,unsigned int *,unsigned int);
	Bool ReplaceRow(int &,unsigned int *);
	Bool SaveIfDirty();
	Bool SaveToStorage(IMsiString const &,IMsiStorage &);
	Bool SaveToSummaryInfo(IMsiStorage &);
	CMsiTable(CMsiDatabase &,unsigned int,unsigned int,unsigned int);
	bool HideStrings();
	bool UnhideStrings();
	int CreateColumnsFromCatalog(unsigned int,int);
	int FetchRow(int,unsigned int *);
	static void * operator new(unsigned __int64);
	virtual Bool IsReadOnly();
	virtual IMsiCursor * CreateCursor(Bool);
	virtual IMsiDatabase & GetDatabase();
	virtual IMsiString const & GetMsiStringValue();
	virtual int CreateColumn(int,IMsiString const &);
	virtual int GetColumnType(unsigned int);
	virtual int GetIntegerValue();
	virtual int LinkTree(unsigned int);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned int GetColumnCount();
	virtual unsigned int GetColumnIndex(unsigned int);
	virtual unsigned int GetColumnName(unsigned int);
	virtual unsigned int GetPersistentColumnCount();
	virtual unsigned int GetPrimaryKeyCount();
	virtual unsigned int GetRowCount();
	virtual unsigned int GetUniqueId();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void SetUniqueId(unsigned int);
	void DerefStrings();
	void TableDropped();
};

class CMsiTextKeySortCursor
{
	virtual int Next();
	virtual unsigned long Release();
	virtual void Reset();
};

class CMsiTransaction
{
	bool IsValidLUAPackage(IMsiString const &);
	static CMsiTransaction * m_pMsiTransaction;
	static bool m_fRollbackDisabled;
protected:
	CMsiTransaction(unsigned short const *,unsigned long,unsigned long,unsigned short *);
	unsigned int ScheduleFileOrFolderDelete(unsigned short const *,bool);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	~CMsiTransaction();
public:
	IMsiRecord * AddToPFRList(unsigned short const *,unsigned short const *,IMsiRecord *,iehEnum,CMsiOpExecute *);
	IMsiRecord * GetTransactionBeginTime(_FILETIME *);
	IMsiRecord * SetLUAInfo(IMsiDatabase &,void *);
	bool FCurrentTransactionInProgressInfo(IMsiRecord &);
	bool GetJoinEEUIInfo(unsigned short *,unsigned long *,icacCustomActionContext *);
	bool IsClientProcessRunning();
	bool IsPendingFileDeletion(unsigned short const *);
	bool IsValidCaller();
	bool SetEEUIServerDetails(IMsiCustomAction *,unsigned char const *,unsigned long,icacCustomActionContext);
	bool SetTransactionInProgressInfo(IMsiRecord &);
	iesEnum ProcessPFRList(IMsiExecute *);
	iesEnum RemovePFREntry(IMsiRecord &,CMsiOpExecute *);
	iesEnum StoreAssemblyCacheTable(bool,int,int,int,int,int,IMsiTable * &,bool,IMsiString const &);
	static irlEnum GetRollbackType(bool);
	static unsigned int GetUserTokenFromRPC(unsigned long,void * *);
	static unsigned long CreateTransaction(unsigned short const *,unsigned long,unsigned long,unsigned long *,unsigned short *);
	static unsigned long EndTransaction(unsigned long,IMsiMessage *,etcEnum);
	static unsigned long GetActiveProcesses(CBinaryTree &);
	static unsigned long GetCallerInfo(unsigned long *,void * *);
	static unsigned long JoinTransaction(unsigned long,unsigned long,unsigned long *,unsigned short *);
	unsigned int SetEEUIDirectoryAndFilter(unsigned short const *,unsigned long);
	unsigned int SetUserToken(bool,unsigned long);
	unsigned long CreateAndGetTransactionHandle();
	unsigned long RetrieveAssemblyCacheTable(bool,int,int,int,int,int,int,IMsiTable * &);
	virtual long QueryInterface(_GUID const &,void * *);
	void CleanupTempPackages(IMsiMessage &);
	void ShutdownWaitingThread();
};

struct CMsiValConditionParser
{
	ivcpEnum Evaluate(vtokEnum);
	vtokEnum Lex();
};

class CMsiView
{
protected:
	Bool EvaluateConstExpressions();
	Bool EvaluateExpression(unsigned int);
	Bool FetchFirst(unsigned int);
	Bool FetchNext(unsigned int);
	Bool FitCriteria(unsigned int);
	Bool FitCriteriaORExpr(unsigned int);
	Bool GetNextFetchRecord();
	Bool InitialiseFilters();
	Bool SetTableFilters(unsigned int);
	IMsiRecord * CheckSQL(unsigned short const *);
	IMsiRecord * FetchCore();
	IMsiRecord * ParseAlterSQL(Lex &);
	IMsiRecord * ParseColumnAttributes(Lex &,int);
	IMsiRecord * ParseCreateColumns(Lex &);
	IMsiRecord * ParseCreateSQL(Lex &);
	IMsiRecord * ParseDeleteSQL(Lex &);
	IMsiRecord * ParseDropSQL(Lex &);
	IMsiRecord * ParseExpr2(Lex &,unsigned int &,unsigned int &,unsigned int &);
	IMsiRecord * ParseExpression(Lex &,unsigned int &,unsigned int &,unsigned int &);
	IMsiRecord * ParseInsertColumns(Lex &);
	IMsiRecord * ParseInsertSQL(Lex &);
	IMsiRecord * ParseInsertValues(Lex &);
	IMsiRecord * ParseOrderBy(Lex &);
	IMsiRecord * ParsePrimaryColumns(Lex &);
	IMsiRecord * ParseSelectColumns(Lex &);
	IMsiRecord * ParseSelectSQL(Lex &);
	IMsiRecord * ParseTables(Lex &);
	IMsiRecord * ParseUpdateColumns(Lex &);
	IMsiRecord * ParseUpdateSQL(Lex &);
	IMsiRecord * ResolveCreateColumn(Lex &,MsiString &,int);
	IMsiRecord * ResolvePrimaryColumn(Lex &,MsiString &,int);
	int GetSearchReversingCost(unsigned int,unsigned int &);
	unsigned int BindString(MsiString &);
	virtual Bool IsDistinct();
	virtual Bool SetupTableJoins();
	virtual IMsiRecord * GetResult();
	virtual IMsiRecord * ResolveColumn(Lex &,MsiString &,unsigned int &,unsigned int &,int &);
	virtual IMsiRecord * ResolveTable(Lex &,MsiString &);
	virtual ~CMsiView();
	void FetchRecordInfoFromCursors();
	void ReverseJoinLink(unsigned int);
	void SetAndExpressions(unsigned int);
	void SetNextFetchRecord();
	void SetTableSequence(int,int &);
	void SetupSortTable();
public:
	CMsiView(CMsiDatabase &,IMsiServices &);
	IMsiRecord * OpenView(unsigned short const *,ivcEnum);
	virtual IMsiRecord * Close();
	virtual IMsiRecord * Execute(IMsiRecord *);
	virtual IMsiRecord * Fetch();
	virtual IMsiRecord * GetColumnNames();
	virtual IMsiRecord * GetColumnTypes();
	virtual IMsiRecord * GetRowCount(long &);
	virtual IMsiRecord * Modify(IMsiRecord &,irmEnum);
	virtual dvcsCursorState GetState();
	virtual iveEnum GetError(IMsiString const * &);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned int GetFieldCount();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	void RowDeleted(int,int);
	void RowInserted(int,int);
};

class CMsiVolume
{
protected:
	IMsiRecord * SetDriveType();
	IMsiRecord * SetFreeSpaceAndClusterSize();
	IMsiRecord * SetLFNAndFileSys();
	IMsiRecord * SetVolCharacteristics();
	static Bool s_fDriveListInit;
	void SetUNCServer();
	~CMsiVolume();
public:
	CMsiVolume(IMsiServices *);
	IMsiRecord * InitVolume(unsigned short const *,unsigned short);
	static IMsiRecord * InitDriveList(IMsiServices *);
	static IMsiRecord * ReInitDriveList();
	static daeDriveArrayElem * s_rgDrive;
	static int s_iNoDrives;
	static int s_iscNext;
	static unsigned short * * s_szServerCache;
	static vleVolListElem * s_pvleHead;
	virtual Bool DiskNotInDrive();
	virtual Bool IsUNCServer();
	virtual Bool IsURLServer();
	virtual Bool SupportsLFN();
	virtual IMsiString const & FileSystem();
	virtual IMsiString const & GetMsiStringValue();
	virtual IMsiString const & GetPath();
	virtual IMsiString const & UNCServer();
	virtual IMsiString const & URLServer();
	virtual IMsiString const & VolumeLabel();
	virtual idtEnum DriveType();
	virtual int GetIntegerValue();
	virtual int SerialNum();
	virtual int VolumeID();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned __int64 FreeSpace();
	virtual unsigned __int64 TotalSpace();
	virtual unsigned int ClusterSize();
	virtual unsigned int GetUniqueId();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual unsigned long const FileSystemFlags();
	virtual void SetUniqueId(unsigned int);
};

struct CMsiWinHttpProgress
{
	bool BeginDownload(unsigned long);
	bool ContinueDownload(unsigned long);
	bool FinishDownload();
};

struct CMutex
{
	void Release();
};

namespace COMCTL32
{
	UnbindStruct * rgUnbind;
	int (* IsolationAwareInitCommonControlsEx)(tagINITCOMMONCONTROLSEX *);
	long (* IsolationAwareTaskDialog)(HWND__ *,HINSTANCE__ *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned long,unsigned short const *,int *);
	void (* IsolationAwareInitCommonControls)();
};

namespace COMDLG32
{
	UnbindStruct * rgUnbind;
	int (* IsolationAwareGetOpenFileNameW)(tagOFNW *);
	unsigned long (* IsolationAwareCommDlgExtendedError)();
};

struct CObjectSafety
{
	virtual long GetInterfaceSafetyOptions(_GUID const &,unsigned long *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetInterfaceSafetyOptions(_GUID const &,unsigned long,unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class COfflineSystem
{
protected:
	unsigned long GetLogicInstallerPath(HKEY__ *);
	void ReleaseRegistryKeys();
public:
	unsigned long MapPath(unsigned short const *,unsigned short *);
	unsigned long MapRegKey(HKEY__ *,unsigned short const *,HKEY__ * *,unsigned short const * *);
	unsigned long SetContext(eOfflineContextID,unsigned short const *);
	~COfflineSystem();
};

struct CPatchPackageTable
{
	IMsiRecord * Initialize(IMsiDatabase &,bool);
};

struct CPatchTable
{
	IMsiRecord * Initialize(IMsiDatabase &,bool);
	void FilterOnKeyAndSequence(IMsiString const &,int);
};

class CPatchesSorter
{
	unsigned long InitTable();
public:
	unsigned long AddEntry(IMsiString const &,IMsiString const &,IMsiString const &);
	unsigned long GetFilteredList(EnumFilter,unsigned short const *,MsiString &);
	unsigned long UpdateProduct(unsigned short const *,unsigned long);
	~CPatchesSorter();
};

struct CPathEnumerator
{
	virtual unsigned int Enumerate(CRegHandle &,CRegHandle &);
	virtual unsigned int Initialize(CRegHandle &);
};

struct CProductContextCache
{
	CProductContextCache(unsigned short const *);
	bool GetProductContext(iaaAppAssignment &);
	bool SetProductContext(iaaAppAssignment);
	static CAPITempBuffer<sProductContext,20> g_rgProductContext;
	static _RTL_CRITICAL_SECTION g_csCacheCriticalSection;
	static bool g_fInitialized;
	static int g_cProductCacheCount;
};

struct CRFSCachedSourceInfo
{
	CRFSCachedSourceInfo();
	bool RetrieveCachedSource(unsigned short const *,int,CAPITempBufferRef<unsigned short> &);
	bool SetCachedSource(unsigned short const *,int,unsigned short const * const);
};

namespace CRYPT32
{
	_CERT_CONTEXT const * (* CertDuplicateCertificateContext)(_CERT_CONTEXT const *);
	int (* CertFreeCertificateContext)(_CERT_CONTEXT const *);
};

class CRefCountedTokenPrivileges
{
protected:
	void Initialize(itkpEnum);
};

struct CRegHandle
{
	CRegHandle();
	~CRegHandle();
};

struct CRegHandleStatic
{
	HKEY__ * * operator&();
	unsigned short const * GetRootAndKey(HKEY__ * &);
	void Destroy();
	void SetKey(HKEY__ *,unsigned short const *);
	void SetSubKey(CRegHandleStatic &,unsigned short const *);
};

struct CResetImpersonationInfo
{
	CResetImpersonationInfo();
	~CResetImpersonationInfo();
};

class CResolveSource
{
protected:
	IMsiRecord * GetProductsToSearch(IMsiString const &,IMsiRecord * &,Bool);
	IMsiRecord * InitializeProduct(unsigned short const *,Bool,IMsiString const * &);
	IMsiRecord * ProcessGenericSourceList(IMsiRegKey *,IMsiString const * &,IMsiString const * *,unsigned short const *,unsigned int,isfEnum,psEnum (*)(IMsiServices *,unsigned short const *,unsigned short const *,isfEnum,int,__int64,unsigned long,isptEnum,IMsiString const * *),__int64,psfEnum,bool,bool,Bool &);
	IMsiRecord * ProcessSources(IMsiRecord &,Bool,IMsiString const * &,IMsiString const * *,IMsiString const * &,IMsiString const * &,unsigned int,psEnum (*)(IMsiServices *,unsigned short const *,unsigned short const *,isfEnum,int,__int64,unsigned long,isptEnum,IMsiString const * *),__int64,Bool &,psfEnum);
	bool ConnectToMediaSource(unsigned short const *,unsigned int,IMsiString const &,CTempBufferRef<IMsiPath *> &,int &);
	bool ConnectToSource(unsigned short const *,IMsiPath * &,IMsiString const * &,isfEnum);
	static psEnum ValidateSource(IMsiServices *,unsigned short const *,unsigned short const *,isfEnum,int,__int64,unsigned long,isptEnum,IMsiString const * *);
	void AddToRecord(IMsiRecord * &,IMsiString const &);
public:
	CResolveSource(IMsiServices *,bool);
	IMsiRecord * ResolveSource(unsigned short const *,Bool,unsigned int,IMsiString const * &,IMsiString const * &,Bool,HWND__ *,bool,IMsiString const * *,Bool);
	virtual ~CResolveSource();
};

class CResolveSourceUI
{
protected:
	static psEnum AddSourceToList(IMsiServices *,unsigned short const *,unsigned short const *,isfEnum,int,__int64,unsigned long,isptEnum,IMsiString const * *);
	virtual bool InitSpecial();
	virtual int HandleCommand(unsigned int);
	void Browse();
	void PopulateDropDownWithSources();
public:
	Bool ResolveSource(unsigned short const *,isptEnum,bool,bool,unsigned short const *,IMsiString const * &,Bool,unsigned int,bool,bool,bool);
	CResolveSourceUI(IMsiServices *,unsigned short const *,unsigned int,unsigned short,bool);
	bool IsSourceAllowed(IMsiServices *,bool);
	bool TryHarderDialog(Bool,bool);
	virtual ~CResolveSourceUI();
};

class CRestartManagerWrapper
{
protected:
	CRestartManagerWrapper();
	static CRestartManagerWrapper * * m_gpoRestartManagerWrapper;
	static _RTL_CRITICAL_SECTION m_csAccessControl;
	unsigned int AddResourceTemplate(void * const,int);
	void ClearAll();
public:
	bool IsEnabled();
	static CRestartManagerWrapper * GetInstance(ieRMInstallLevel);
	static void DestroyInstance(ieRMInstallLevel);
	unsigned int EndSession();
	unsigned int EnumApplications(unsigned long,_RM_PROCESS_INFO &);
	unsigned int GetApplicationsList(TRI &,unsigned int &);
	unsigned int StartSession(CAPITempBufferRef<unsigned short> &);
	virtual ieShutdownState GetShutdownState();
	virtual unsigned int RestartApplications();
	virtual unsigned int ShutdownAllApplications(unsigned long,bool);
	void ReportDetectedApplication(_RM_PROCESS_INFO const &);
	void Reset();
};

class CRestartMgrFilesInUseDialog
{
protected:
	virtual bool InitSpecial();
	virtual int HandleCommand(unsigned int);
};

struct CRootKeyHolder
{
	CRootKeyHolder(IMsiServices *);
	IMsiRegKey * GetRootKey(rrkEnum,ibtBinaryType);
	~CRootKeyHolder();
};

namespace CSCDLL
{
	int (* CSCQueryFileStatusW)(unsigned short const *,unsigned long *,unsigned long *,unsigned long *);
};

struct CSIDAccess
{
	CSIDAccess();
	~CSIDAccess();
};

struct CSIDPointer
{
	CSIDPointer & operator=(_SID *);
	_SID * * operator&();
};

struct CScriptDatabase
{
	virtual Bool LockTable(IMsiString const &,Bool);
	virtual IMsiRecord * Commit();
	virtual IMsiRecord * CreateOutputDatabase(unsigned short const *,Bool);
	virtual IMsiRecord * CreateTable(IMsiString const &,unsigned int,IMsiTable * &);
	virtual IMsiRecord * DropTable(unsigned short const *);
	virtual IMsiRecord * ExportTable(unsigned short const *,IMsiPath &,unsigned short const *);
	virtual IMsiRecord * GenerateTransform(IMsiDatabase &,IMsiStorage *,int,int);
	virtual IMsiRecord * GetPrimaryKeys(unsigned short const *);
	virtual IMsiRecord * ImportTable(IMsiPath &,unsigned short const *);
	virtual IMsiRecord * LoadTable(IMsiString const &,unsigned int,IMsiTable * &);
	virtual IMsiRecord * MergeDatabase(IMsiDatabase &,IMsiTable *);
	virtual IMsiRecord * OpenView(unsigned short const *,ivcEnum,IMsiView * &);
	virtual IMsiRecord * SetTransform(IMsiStorage &,int);
	virtual IMsiRecord * SetTransformEx(IMsiStorage &,int,unsigned short const *,IMsiRecord *,bool,bool);
	virtual IMsiServices & GetServices();
	virtual IMsiStorage * GetStorage(int);
	virtual IMsiString const & CreateTempTableName();
	virtual IMsiString const & DecodeString(unsigned int);
	virtual IMsiTable * GetCatalogTable(int);
	virtual bool GetTableState(unsigned short const *,itsEnum);
	virtual idsEnum GetUpdateState();
	virtual int GetANSICodePage();
	virtual itsEnum FindTable(IMsiString const &);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned int EncodeString(IMsiString const &);
	virtual unsigned int EncodeStringSz(unsigned short const *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void RemoveObjectData(int);
};

struct CScriptGenerate
{
	CScriptGenerate(IMsiStream &,int,int,istEnum,isaEnum,IMsiServices &);
	bool InitializeScript(unsigned short);
	bool WriteRecord(ixoEnum,IMsiRecord &,bool);
	~CScriptGenerate();
};

class CScriptSite
{
	long AttachScriptEngine(_GUID const &,IDispatch *);
	virtual long EnableModeless(int);
	virtual long GetDocVersionString(unsigned short * *);
	virtual long GetItemInfo(unsigned short const *,unsigned long,IUnknown * *,ITypeInfo * *);
	virtual long GetLCID(unsigned long *);
	virtual long GetWindow(HWND__ * *);
	virtual long OnEnterScript();
	virtual long OnLeaveScript();
	virtual long OnScriptError(IActiveScriptError *);
	virtual long OnScriptTerminate(tagVARIANT const *,tagEXCEPINFO const *);
	virtual long OnStateChange(tagSCRIPTSTATE);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	void SaveErrorString(unsigned short const * &,unsigned short *);
	~CScriptSite();
public:
	long CallScriptFunction(unsigned short const *);
	long GetIntegerResult(int &);
	long ParseScript(unsigned short const *,int);
	void ClearError();
};

struct CScriptView
{
	CScriptView(CScriptDatabase &,IMsiServices &);
	IMsiRecord * Initialise(unsigned short const *);
	virtual IMsiRecord * Close();
	virtual IMsiRecord * Execute(IMsiRecord *);
	virtual IMsiRecord * Fetch();
	virtual IMsiRecord * GetColumnNames();
	virtual IMsiRecord * GetColumnTypes();
	virtual IMsiRecord * GetRowCount(long &);
	virtual IMsiRecord * Modify(IMsiRecord &,irmEnum);
	virtual dvcsCursorState GetState();
	virtual iveEnum GetError(IMsiString const * &);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned int GetFieldCount();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CSecurityDescription
{
protected:
	void Initialize();
public:
	CSecurityDescription(IMsiStream *);
	CSecurityDescription(bool,bool);
	CSecurityDescription(unsigned short const *);
	CSecurityDescription(void *,void *,CSIDAccess *,int);
	_SECURITY_ATTRIBUTES * SecurityAttributes();
	void * SecurityDescriptor();
	void SecurityDescriptorStream(IMsiServices &,IMsiStream * &);
	void Set(unsigned short const *);
	~CSecurityDescription();
};

struct CSequenceData
{
	~CSequenceData();
};

class CServiceRestartManagerWrapper
{
protected:
	virtual unsigned int AddResourceCore(void * const,int);
public:
	virtual unsigned int AddFilePathResources(unsigned short * *,int);
	virtual unsigned int AddProcessResource(_RM_UNIQUE_PROCESS const *);
};

class CSharedComponentPatchManager
{
	tagMSIINSTALLCONTEXT GetCurrentAppInstallAssignmentType();
	void Init();
public:
	CSharedComponentPatchManager(IMsiEngine &,IMsiDatabase &);
	IMsiRecord * GetHighestVersionedClientForComponent(IMsiString const &,IMsiString const &,IMsiString const * *,IMsiString const * *,IMsiString const * *,IMsiString const * *,IMsiString const * *,IMsiString const * *,IMsiString const * *,IMsiString const * *,IMsiString const * *,bool *,unsigned long *,unsigned long *);
	bool GetRedirectedSource(IMsiString const &,IMsiString const &,IMsiString const * &,IMsiString const * &,bool *,bool *);
	iesEnum GenerateFileOpsForSharedComponents();
	iesEnum GeneratePatchOpsForSharedComponents();
};

class CSidEnumerator
{
	unsigned int EnumerateContexts(CRegHandle &);
	unsigned int EnumerateUsers(CRegHandle &,CRegHandle &);
public:
	CSidEnumerator();
	virtual HKEY__ * ManagedRoot();
	virtual bool ManagedRootExists();
	virtual unsigned int Enumerate(CRegHandle &,CRegHandle &);
	virtual unsigned int Initialize(CRegHandle &);
	virtual void Dispose();
	virtual ~CSidEnumerator();
};

class CSkipKeyProtectionCheck
{
protected:
	static int m_iSkipKeyProctionCnt;
	static unsigned long m_dwCurrentThreadId;
public:
	CSkipKeyProtectionCheck();
	~CSkipKeyProtectionCheck();
};

struct CSourceListPublisher
{
	CSourceListPublisher(IMsiEngine &);
	iesEnum AddMediaSource(int,IMsiString const &,IMsiString const &);
	iesEnum AddPatchInfo(unsigned short const *,unsigned short const *);
	iesEnum AddSource(IMsiString const &);
	iesEnum Flush();
	~CSourceListPublisher();
};

class CSourceTryHarderDialog
{
protected:
	virtual bool InitSpecial();
	virtual int HandleCommand(unsigned int);
public:
	CSourceTryHarderDialog(unsigned short const *,unsigned short const *,unsigned short const *,Bool,bool,unsigned int,unsigned short);
	~CSourceTryHarderDialog();
};

struct CStorageTable
{
	bool WriteData();
	static CStorageTable * Create(CMsiDatabase &);
	virtual unsigned long Release();
};

struct CStorageTransformInfo
{
	CStorageTransformInfo(IMsiStorage *,unsigned short const *);
	virtual unsigned int EnumTransformInfo(unsigned long,int *,IMsiString const * &,IMsiString const * &,IMsiString const * *,IMsiString const * *);
	virtual ~CStorageTransformInfo();
};

struct CStreamTable
{
	CStreamTable(CMsiDatabase &,IMsiStorage &);
	bool WriteData();
	static CStreamTable * Create(CMsiDatabase &);
	virtual unsigned long Release();
};

struct CSysHandle
{
	void operator=(void *);
};

struct CTempBuffer<CConvertStringInputArgument,1>
{
	CTempBuffer<CConvertStringInputArgument,1>();
	void SetSize(int);
	~CTempBuffer<CConvertStringInputArgument,1>();
};

struct CTempBuffer<CDeleteUrlLocalFileOnClose,1>
{
	CTempBuffer<CDeleteUrlLocalFileOnClose,1>(int);
	~CTempBuffer<CDeleteUrlLocalFileOnClose,1>();
};

struct CTempBuffer<CMsiPatchSequencer::stVersion,1>
{
	void Resize(int);
};

struct CTempBuffer<ColumnDefn,10>
{
	CTempBuffer<ColumnDefn,10>();
	void Resize(int);
};

struct CTempBuffer<ExpressionDefn,10>
{
	void Resize(int);
};

struct CTempBuffer<IMsiPath *,10>
{
	void Resize(int);
};

struct CTempBuffer<IMsiString *,1>
{
	void Resize(int);
};

struct CTempBuffer<IMsiString const *,10>
{
	void Resize(int);
};

struct CTempBuffer<OperationTree,10>
{
	void Resize(int);
};

struct CTempBuffer<TableDefn,10>
{
	void Resize(int);
};

struct CTempBuffer<VolumeCost *,10>
{
	void Resize(int);
};

struct CTempBuffer<char,1024>
{
	void SetSize(int);
};

struct CTempBuffer<char,1>
{
	CTempBuffer<char,1>(int);
	void Resize(int);
	void SetSize(int);
};

struct CTempBuffer<char,30>
{
	void SetSize(int);
};

struct CTempBuffer<char,512>
{
	void SetSize(int);
};

struct CTempBuffer<char,72>
{
	CTempBuffer<char,72>();
	~CTempBuffer<char,72>();
};

struct CTempBuffer<int,1>
{
	CTempBuffer<int,1>(int);
};

struct CTempBuffer<int,20>
{
	void Resize(int);
};

struct CTempBuffer<tagMSIPATCHSEQUENCEINFOW,1>
{
	void SetSize(int);
};

struct CTempBuffer<unsigned __int64,10>
{
	void SetSize(int);
};

struct CTempBuffer<unsigned char,1024>
{
	void SetSize(int);
};

struct CTempBuffer<unsigned char,10>
{
	void SetSize(int);
};

struct CTempBuffer<unsigned char,1>
{
	CTempBuffer<unsigned char,1>(int);
};

struct CTempBuffer<unsigned int,10>
{
	void Resize(int);
};

struct CTempBuffer<unsigned short *,1>
{
	void Resize(int);
};

struct CTempBuffer<unsigned short,100>
{
	void SetSize(int);
};

struct CTempBuffer<unsigned short,1024>
{
	void SetSize(int);
};

struct CTempBuffer<unsigned short,10>
{
	void SetSize(int);
};

struct CTempBuffer<unsigned short,128>
{
	void SetSize(int);
};

struct CTempBuffer<unsigned short,15>
{
	void SetSize(int);
};

struct CTempBuffer<unsigned short,1>
{
	CTempBuffer<unsigned short,1>(int);
	void Resize(int);
	void SetSize(int);
	~CTempBuffer<unsigned short,1>();
};

struct CTempBuffer<unsigned short,200>
{
	void SetSize(int);
};

struct CTempBuffer<unsigned short,20>
{
	void SetSize(int);
};

struct CTempBuffer<unsigned short,256>
{
	CTempBuffer<unsigned short,256>(int);
	void SetSize(int);
};

struct CTempBuffer<unsigned short,260>
{
	void Resize(int);
	void SetSize(int);
};

struct CTempBuffer<unsigned short,261>
{
	void Resize(int);
	void SetSize(int);
};

struct CTempBuffer<unsigned short,30>
{
	void SetSize(int);
};

struct CTempBuffer<unsigned short,40>
{
	void SetSize(int);
};

struct CTempBufferRef<IMsiPath *>
{
	void Resize(int);
};

struct CTempBufferRef<char>
{
	void Resize(int);
	void SetSize(int);
};

struct CTempBufferRef<int>
{
	void Resize(int);
};

struct CTempBufferRef<unsigned char>
{
	void Resize(int);
};

struct CTempBufferRef<unsigned short>
{
	void Resize(int);
	void SetSize(int);
};

struct CTransformInfo
{
	CTransformInfo & operator=(CTransformInfo const &);
	unsigned int GetTransformValidationFlags();
	~CTransformInfo();
};

struct CTransformStreamRead
{
	CTransformStreamRead(CMsiDatabase &,CMsiDatabase &,int,CMsiTable *,int);
	IMsiString const & GetStringValue(int,IMsiString const &);
	bool GetNextOp();
	bool GetValue(int,IMsiCursor &);
	bool OpenStream(IMsiStorage &,unsigned short const *,IMsiRecord * &);
	unsigned int ReadStringId();
	~CTransformStreamRead();
};

struct CTransformStreamWrite
{
	CTransformStreamWrite(CMsiDatabase &,IMsiStorage *,IMsiTable &,IMsiString const &);
	IMsiRecord * CopyStream(IMsiStream &,IMsiCursor &);
	IMsiRecord * WriteTransformRow(int,IMsiCursor &);
	~CTransformStreamWrite();
};

struct CVariant
{
	long GetBool(Bool &);
	long GetInt(int &);
	long GetString(unsigned short const * &);
	unsigned long GetHandle(_GUID const &);
};

struct CViewAndStreamRelease
{
	void ReleaseAll();
	~CViewAndStreamRelease();
};

class CWERReporter
{
	unsigned long CopyPropertyTo(unsigned short const *,unsigned short *,unsigned long);
	unsigned long GetWERRuntimeModuleName(unsigned short * *);
public:
	CWERReporter(unsigned long,unsigned short const *);
	virtual ~CWERReporter();
};

struct CWideOutParam
{
	CWideOutParam(unsigned short *,unsigned long *);
};

struct CWideToAnsiOutParam
{
	~CWideToAnsiOutParam();
};

class CWin64DualFolders
{
	ieIsDualFolder IsWin64DualFolder(ieFolderSwapType,unsigned short const *,int &,int *,unsigned short *,unsigned __int64);
	void ClearArray();
public:
	bool Initialize(bool,strFolderPairs const *,unsigned long);
	ieSwappedFolder SwapFolder(ieFolderSwapType,unsigned short const *,unsigned short *,unsigned __int64,int);
	unsigned long Release();
};

struct CXMLBlobTransformInfo
{
	virtual unsigned int EnumTransformInfo(unsigned long,int *,IMsiString const * &,IMsiString const * &,IMsiString const * *,IMsiString const * *);
};

struct ColumnDefn
{
	ColumnDefn();
};

struct CustomActionData
{
	CustomActionData(unsigned short const *,unsigned short const *,unsigned short const *,unsigned long,bool,_GUID const *,_GUID const *);
};

struct EnumEntity
{
	bool SetFilter(unsigned short const *,unsigned short const *,unsigned long);
	bool fVerifyFilter(unsigned short const *,unsigned short const *,unsigned long);
};

class EnumEntityList
{
	bool GetInfoInternal(unsigned int &,unsigned int &,unsigned int &,int &,unsigned long *,bool *,char const * *,unsigned short const * *);
	bool SetInfoInternal(unsigned int,unsigned int,unsigned int,int,unsigned long,bool,char const *,unsigned short const *);
	unsigned int FindEntry();
public:
	bool SetFilter(unsigned short const *,unsigned short const *,unsigned long);
	bool fVerifyFilter(unsigned short const *,unsigned short const *,unsigned long);
	void Destroy();
	void Init();
	void RemoveThreadInfo();
};

struct ExpressionDefn
{
	ExpressionDefn();
};

namespace FAULTREP
{
	tagEFaultRepRetVal (* ReportFault)(_EXCEPTION_POINTERS *,unsigned long);
};

class FDI_Interface
{
	FDIServerResponse WaitResponse(FDIServerCommand);
	int LaunchFDIServer();
public:
	FDIInterfaceError OpenCabinet(unsigned short const *,unsigned short const *,icbtEnum,int,Bool,IMsiStream *,IMsiStream *,long &);
	FDIServerResponse ExtractFile(unsigned short const *,IAssemblyCacheItem *,CMsiCustomActionManager *,bool,bool,unsigned short const *,FileAttributes *,int,_SECURITY_ATTRIBUTES *,bool);
};

namespace FUSION
{
	UnbindStruct * rgUnbind;
	long (* CreateAssemblyCache)(IAssemblyCache * *,unsigned long);
	long (* CreateAssemblyNameObject)(IAssemblyName * *,unsigned short const *,unsigned long,void *);
	long (* SetMSIHandleForLogging)(unsigned long);
};

struct FieldData
{
	IMsiData const * GetMsiData();
	static CFieldInteger s_Integer;
	void Free();
	void SetMsiString(IMsiString const &);
};

struct GUIDAndSequence
{
	GUIDAndSequence();
	~GUIDAndSequence();
};

namespace KERNEL32
{
	int (* CancelSynchronousIo)(void *);
	int (* FreeEnvironmentStringsW)(unsigned short *);
	int (* GetFileAttributesExW)(unsigned short const *,_GET_FILEEX_INFO_LEVELS,void *);
	int (* GetThreadPreferredUILanguages)(unsigned long,unsigned long *,unsigned short *,unsigned long *);
	int (* GlobalMemoryStatusEx)(_MEMORYSTATUSEX *);
	int (* SetThreadExecutionState)(unsigned long);
	int (* SetWaitableTimer)(void *,_LARGE_INTEGER const *,long,void (*)(void *,unsigned long,unsigned long),void *,int);
	int (* Thread32First)(void *,tagTHREADENTRY32 *);
	int (* Thread32Next)(void *,tagTHREADENTRY32 *);
	long (* WerRegisterRuntimeExceptionModule)(unsigned short const *,void *);
	long (* WerUnregisterRuntimeExceptionModule)(unsigned short const *,void *);
	unsigned int (* GetSystemWindowsDirectoryW)(unsigned short *,unsigned int);
	unsigned int (* GetSystemWow64DirectoryW)(unsigned short *,unsigned int);
	unsigned long (* CheckElevationEnabled)(int *);
	unsigned long (* WTSGetActiveConsoleSessionId)();
	unsigned short (* GetUserDefaultUILanguage)();
	void (* GetNativeSystemInfo)(_SYSTEM_INFO *);
	void * (* CreateToolhelp32Snapshot)(unsigned long,unsigned long);
	void * (* GetEnvironmentStringsW)();
};

namespace KERNELBASE
{
	int (* NotifyRedirectedStringChange)(unsigned long);
};

class Lex
{
	bitarray<2> const & GetCharToken(unsigned short);
	bitarray<2> const & GetNextToken(__int64 &,bitarray<2> const *,IMsiString const * *);
	bitarray<2> const & GetStringToken(unsigned short const *,bitarray<2> const *);
	static TokenCharList const * const m_rgTokenCharArray;
	static TokenStringList const * const m_rgTokenStringArray;
public:
	Bool MatchNext(bitarray<2> const &);
	Bool Skip(bitarray<2> const &);
	Lex(unsigned short const *);
	int NumEntriesInList(bitarray<2> const &,bitarray<2> const &);
};

namespace MPR
{
	UnbindStruct * rgUnbind;
	unsigned long (* WNetAddConnection2W)(_NETRESOURCEW *,unsigned short const *,unsigned short const *,unsigned long);
	unsigned long (* WNetCancelConnection2W)(unsigned short const *,unsigned long,int);
	unsigned long (* WNetGetConnectionW)(unsigned short const *,unsigned short *,unsigned long *);
	unsigned long (* WNetGetLastErrorW)(unsigned long *,unsigned short *,unsigned long,unsigned short *,unsigned long);
	unsigned long (* WNetGetResourceInformationW)(_NETRESOURCEW *,void *,unsigned long *,unsigned short * *);
};

namespace MSCOREE
{
	UnbindStruct * rgUnbind;
	long (* GetCORSystemDirectory)(unsigned short *,unsigned long,unsigned long *);
};

namespace MSPATCHA
{
	UnbindStruct * rgUnbind;
	int (* ApplyPatchToFileByHandlesEx)(void *,void *,void *,unsigned long,int (*)(void *,unsigned long,unsigned long),void *);
	int (* GetFilePatchSignatureByHandle)(void *,unsigned long,void *,unsigned long,_PATCH_IGNORE_RANGE *,unsigned long,_PATCH_RETAIN_RANGE *,unsigned long,void *);
	int (* TestApplyPatchToFileByHandles)(void *,void *,unsigned long);
};

struct MediaDiskInfo
{
	MediaDiskInfo(int,unsigned short const *,unsigned long,unsigned short const *,unsigned long);
};

struct MsiMessageHandler
{
	int ValidateResult(unsigned int,unsigned long);
	unsigned long LoadHandler(bool);
	unsigned long SendMessageW(unsigned int,unsigned long);
	unsigned long ShutdownHandler();
};

class MsiString
{
	static CMsiStringNullCopy s_NullString;
public:
	MsiString & operator=(MsiString const &);
	MsiString();
	~MsiString();
};

class MsiUIMessageContext
{
	bool FCreateHiddenWindow();
	bool InitializeLog(bool,CEngineMainThreadData const *);
	imsEnum ProcessMessage(imtEnum,IMsiRecord *);
	static unsigned long ChildUIThread(MsiUIMessageContext *);
	static unsigned long MainEngineThread(void *);
public:
	HWND__ * GetCurrentWindow();
	IMsiRecord * GetNoDataRecord();
	MsiUIMessageContext();
	bool InitializeEnvironmentVariables();
	bool IsServiceInstalling();
	bool Terminate(bool,bool,bool);
	imsEnum Invoke(imtEnum,IMsiRecord *);
	unsigned int CancelAllSynchronousIo();
	unsigned int Initialize(bool,iuiEnum,CEngineMainThreadData const *,bool);
	unsigned int ResetUILevel(iuiEnum,iioEnum);
	unsigned int RunEmbeddedChainer();
	unsigned int RunInstall(CEngineMainThreadData &,iuiEnum,IMsiMessage *);
	unsigned int SetServiceInstalling(unsigned char);
	unsigned int SetUserToken(bool);
	unsigned long ProcessEndTransactionMessages(void *);
	void * GetUserToken();
	void ClearSaferHandle();
	void SetEmbeddedChainerCmdLine(IMsiEngine &);
	~MsiUIMessageContext();
};

struct MsiUIMessageHandler
{
	virtual unsigned long InitializeHandler(unsigned long,unsigned short const *,unsigned long *);
};

namespace NETAPI32
{
	unsigned long (* NetApiBufferFree)(void *);
	unsigned long (* NetGetJoinInformation)(unsigned short const *,unsigned short * *,_NETSETUP_JOIN_STATUS *);
};

namespace NTDLL
{
	long (* NtOpenKey)(void * *,unsigned long,_OBJECT_ATTRIBUTES *);
	long (* NtQuerySystemInformation)(_SYSTEM_INFORMATION_CLASS,void *,unsigned long,unsigned long *);
	long (* NtRenameKey)(void *,_UNICODE_STRING *);
	long (* NtSetSystemInformation)(_SYSTEM_INFORMATION_CLASS,void *,unsigned long);
	long (* RtlCreateEnvironment)(unsigned char,void * *);
	long (* RtlDestroyEnvironment)(void *);
	long (* RtlImageNtHeaderEx)(unsigned long,void *,unsigned __int64,_IMAGE_NT_HEADERS64 * *);
	long (* RtlReportException)(_EXCEPTION_RECORD *,_CONTEXT *,unsigned long);
	void (* RtlInitUnicodeString)(_UNICODE_STRING *,unsigned short const *);
};

namespace ODBCCP32
{
	UnbindStruct * rgUnbind;
	int (* SQLConfigDataSource)(HWND__ *,unsigned short,unsigned short const *,unsigned short const *);
	int (* SQLConfigDriver)(HWND__ *,unsigned short,unsigned short const *,unsigned short const *,unsigned short *,unsigned short,unsigned short *);
	int (* SQLInstallDriverEx)(unsigned short const *,unsigned short const *,unsigned short *,unsigned short,unsigned short *,unsigned short,unsigned long *);
	int (* SQLInstallDriverManager)(unsigned short *,unsigned short,unsigned short *);
	int (* SQLInstallTranslatorEx)(unsigned short const *,unsigned short const *,unsigned short *,unsigned short,unsigned short *,unsigned short,unsigned long *);
	int (* SQLRemoveDriver)(unsigned short const *,int,unsigned long *);
	int (* SQLRemoveDriverManager)(unsigned long *);
	int (* SQLRemoveTranslator)(unsigned short const *,unsigned long *);
	short (* SQLInstallerError)(unsigned short,unsigned long *,unsigned short *,unsigned short,unsigned short *);
};

namespace OLE32
{
	int (* CoIsHandlerConnected)(IUnknown *);
	long (* CoCreateInstance)(_GUID const &,IUnknown *,unsigned long,_GUID const &,void * *);
	long (* CoDisconnectObject)(IUnknown *,unsigned long);
	long (* CoGetCallContext)(_GUID const &,void * *);
	long (* CoGetMalloc)(unsigned long,IMalloc * *);
	long (* CoImpersonateClient)();
	long (* CoInitialize)(void *);
	long (* CoInitializeEx)(void *,unsigned long);
	long (* CoQueryProxyBlanket)(IUnknown *,unsigned long *,unsigned long *,unsigned short * *,unsigned long *,unsigned long *,void * *,unsigned long *);
	long (* CoRevertToSelf)();
	long (* CoSetProxyBlanket)(IUnknown *,unsigned long,unsigned long,unsigned short *,unsigned long,unsigned long,void *,unsigned long);
	long (* CreateStreamOnHGlobal)(void *,int,IStream * *);
	long (* IIDFromString)(unsigned short *,_GUID *);
	long (* StgCreateStorageEx)(unsigned short const *,unsigned long,unsigned long,unsigned long,tagSTGOPTIONS *,void * *,_GUID const &,void * *);
	long (* StgOpenStorage)(unsigned short const *,IStorage *,unsigned long,unsigned short * *,unsigned long,IStorage * *);
	long (* StgOpenStorageOnILockBytes)(ILockBytes *,IStorage *,unsigned long,unsigned short * *,unsigned long,IStorage * *);
	long (* StringFromGUID2)(_GUID const &,unsigned short *,int);
	void (* CoFreeUnusedLibraries)();
	void (* CoTaskMemFree)(void *);
	void (* CoUninitialize)();
	void * (* CoTaskMemAlloc)(unsigned long);
};

namespace OLEAUT32
{
	UnbindStruct * rgUnbind;
	int (* DosDateTimeToVariantTime)(unsigned short,unsigned short,double *);
	int (* SystemTimeToVariantTime)(_SYSTEMTIME *,double *);
	int (* VariantTimeToSystemTime)(double,_SYSTEMTIME *);
	long (* LoadTypeLib)(unsigned short const *,ITypeLib * *);
	long (* QueryPathOfRegTypeLib)(_GUID const &,unsigned short,unsigned short,unsigned long,unsigned short * *);
	long (* RegisterTypeLib)(ITypeLib *,unsigned short *,unsigned short *);
	long (* SafeArrayAccessData)(tagSAFEARRAY *,void * *);
	long (* SafeArrayDestroy)(tagSAFEARRAY *);
	long (* SafeArrayPutElement)(tagSAFEARRAY *,long *,void *);
	long (* SafeArrayUnaccessData)(tagSAFEARRAY *);
	long (* UnRegisterTypeLib)(_GUID const &,unsigned short,unsigned short,unsigned long,tagSYSKIND);
	long (* VarI4FromR8)(double,long *);
	long (* VariantChangeType)(tagVARIANT *,tagVARIANT *,unsigned short,unsigned short);
	long (* VariantClear)(tagVARIANT *);
	tagSAFEARRAY * (* SafeArrayCreate)(unsigned short,unsigned int,tagSAFEARRAYBOUND *);
	unsigned int (* SysStringLen)(unsigned short const *);
	unsigned short * (* SysAllocString)(unsigned short const *);
	unsigned short * (* SysAllocStringLen)(unsigned short const *,unsigned int);
	void (* SysFreeString)(unsigned short const *);
	void (* VariantInit)(tagVARIANT *);
};

struct OperationTree
{
	OperationTree();
};

namespace PCACLI
{
	unsigned long (* PcaNotifyMsiInstall)(unsigned short const *,unsigned short const *,unsigned short const *,unsigned long,unsigned long);
};

struct PMSIHANDLE
{
	PMSIHANDLE();
	unsigned long * operator&();
	void operator=(unsigned long);
};

struct PMsiSharedCursor
{
	~PMsiSharedCursor();
};

namespace PROPSYS
{
	long (* PSGetPropertyKeyFromName)(unsigned short const *,_tagpropertykey *);
};

struct Queue<AWRITEDATA *>
{
	AWRITEDATA * Remove();
	bool Add(AWRITEDATA *);
};

struct Queue<unsigned char *>
{
	bool Add(unsigned char *);
	unsigned char * Last();
	unsigned char * Remove();
};

namespace RPCRT4
{
	long (* I_RpcBindingInqLocalClientPID)(void *,unsigned long *);
};

namespace RSTRTMGR
{
	unsigned long (* RmAddFilter)(unsigned long,unsigned short const *,_RM_UNIQUE_PROCESS *,unsigned short const *,_RM_FILTER_ACTION);
	unsigned long (* RmEndSession)(unsigned long);
	unsigned long (* RmGetList)(unsigned long,unsigned int *,unsigned int *,_RM_PROCESS_INFO * const,unsigned long *);
	unsigned long (* RmRegisterResources)(unsigned long,unsigned int,unsigned short const * * const,unsigned int,_RM_UNIQUE_PROCESS * const,unsigned int,unsigned short const * * const);
	unsigned long (* RmRestart)(unsigned long,unsigned long,void (*)(unsigned int));
	unsigned long (* RmShutdown)(unsigned long,unsigned long,void (*)(unsigned int));
	unsigned long (* RmStartSession)(unsigned long *,unsigned long,unsigned short *);
};

namespace SFC
{
	UnbindStruct * rgUnbind;
	int (* SfcInstallProtectedFiles)(void *,unsigned short const *,int,unsigned short const *,unsigned short const *,int (*)(_FILEINSTALL_STATUS *,unsigned __int64),unsigned __int64);
	int (* SfcIsFileProtected)(void *,unsigned short const *);
	int (* SfcIsKeyProtected)(HKEY__ *,unsigned short const *,unsigned long);
	void (* SfcClose)(void *);
};

namespace SHELL32
{
	UnbindStruct * rgUnbind;
	int (* SHGetPathFromIDListW)(_ITEMIDLIST const *,unsigned short *);
	long (* DllGetVersion)(_DLLVERSIONINFO *);
	long (* SHCreateItemFromParsingName)(unsigned short const *,IBindCtx *,_GUID const &,void * *);
	long (* SHGetFolderPathW)(HWND__ *,int,void *,unsigned long,unsigned short *);
	long (* SHGetKnownFolderPath)(_GUID const &,unsigned long,void *,unsigned short * *);
	long (* SHGetMalloc)(IMalloc * *);
	long (* SHGetPropertyStoreForWindow)(HWND__ *,_GUID const &,void * *);
	long (* SHGetPropertyStoreFromParsingName)(unsigned short const *,IBindCtx *,GETPROPERTYSTOREFLAGS,_GUID const &,void * *);
	long (* SHGetSpecialFolderLocation)(HWND__ *,int,_ITEMIDLIST * *);
	long (* SHRemoveLocalizedName)(unsigned short const *);
	long (* SHSetLocalizedName)(unsigned short const *,unsigned short const *,int);
	void (* SHChangeNotify)(long,unsigned int,void const *,void const *);
};

namespace SHLWAPI
{
	int (* UrlIsW)(unsigned short const *,URLIS);
	long (* PathCreateFromUrlW)(unsigned short const *,unsigned short *,unsigned long *,unsigned long);
	long (* UrlCanonicalizeW)(unsigned short const *,unsigned short *,unsigned long *,unsigned long);
	long (* UrlCombineW)(unsigned short const *,unsigned short const *,unsigned short *,unsigned long *,unsigned long);
	long (* UrlGetPartW)(unsigned short const *,unsigned short *,unsigned long *,unsigned long,unsigned long);
};

namespace SRCLIENT
{
	int (* SRSetRestorePointW)(_RESTOREPTINFOW *,_SMGRSTATUS *);
};

namespace SXS
{
	long (* CreateAssemblyCache)(IAssemblyCache * *,unsigned long);
	long (* CreateAssemblyNameObject)(IAssemblyName * *,unsigned short const *,unsigned long,void *);
};

class SrpLib
{
	SrpLib();
	static SrpLib const & Get();
};

namespace TSAPPCMP
{
	int (* TermsrvLogInstallIniFileEx)(unsigned short const *);
	long (* IsMachineInTSMode)(int *);
	long (* TermServPrepareAppInstallDueMSI)();
	long (* TermServProcessAppInstallDueMSI)(unsigned char);
	long (* TermSrvMSIOkToRun)(int,unsigned short const *,unsigned short const *,unsigned short const *,unsigned long,int *,unsigned int *);
	long (* TermSrvMSISetState)(int,unsigned int);
	void (* TermsrvCheckNewIniFiles)();
};

struct TableDefn
{
	TableDefn();
	~TableDefn();
};

namespace USER32
{
	int (* AllowSetForegroundWindow)(unsigned long);
	int (* ChangeWindowMessageFilter)(unsigned int,unsigned long);
	int (* ChangeWindowMessageFilterEx)(HWND__ *,unsigned int,unsigned long,void *);
	int (* RecordShutdownReason)(_SHUTDOWN_REASON *);
};

namespace USERENV
{
	UnbindStruct * rgUnbind;
	int (* CreateEnvironmentBlock)(void * *,void *,int);
	int (* DestroyEnvironmentBlock)(void *);
	int (* GetUserProfileDirectory)(void *,unsigned short *,unsigned long *);
};

namespace VERSION
{
	UnbindStruct * rgUnbind;
	int (* GetFileVersionInfoW)(unsigned short const *,unsigned long,unsigned long,void *);
	int (* VerQueryValueW)(void * const,unsigned short const *,void * *,unsigned int *);
	unsigned long (* GetFileVersionInfoSizeW)(unsigned short const *,unsigned long *);
};

struct VolumeCost
{
	VolumeCost(unsigned short const *,unsigned __int64,int,int);
};

namespace WINHTTP
{
	int (* WinHttpCloseHandle)(void *);
	int (* WinHttpCrackUrl)(unsigned short const *,unsigned long,unsigned long,URL_COMPONENTS *);
	int (* WinHttpGetIEProxyConfigForCurrentUser)(WINHTTP_CURRENT_USER_IE_PROXY_CONFIG *);
	int (* WinHttpGetProxyForUrl)(void *,unsigned short const *,WINHTTP_AUTOPROXY_OPTIONS *,WINHTTP_PROXY_INFO *);
	int (* WinHttpQueryAuthSchemes)(void *,unsigned long *,unsigned long *,unsigned long *);
	int (* WinHttpQueryDataAvailable)(void *,unsigned long *);
	int (* WinHttpQueryHeaders)(void *,unsigned long,unsigned short const *,void *,unsigned long *,unsigned long *);
	int (* WinHttpReadData)(void *,void *,unsigned long,unsigned long *);
	int (* WinHttpReceiveResponse)(void *,void *);
	int (* WinHttpSendRequest)(void *,unsigned short const *,unsigned long,unsigned short const *,unsigned long,unsigned long,unsigned __int64);
	int (* WinHttpSetCredentials)(void *,unsigned long,unsigned long,unsigned short const *,unsigned short const *,void *);
	int (* WinHttpSetOption)(void *,unsigned long,void *,unsigned long);
	void * (* WinHttpConnect)(void *,unsigned short const *,unsigned short,unsigned long);
	void * (* WinHttpOpen)(unsigned short const *,unsigned long,unsigned short const *,unsigned short const *,unsigned long);
	void * (* WinHttpOpenRequest)(void *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const * *,unsigned long);
};

namespace WINSTA
{
	int (* WinStationBroadcastSystemMessage)(void *,int,unsigned long,unsigned long,unsigned long,unsigned long *,unsigned long,unsigned __int64,__int64,long *);
	int (* WinStationGetTermSrvCountersValue)(void *,unsigned long,void *);
};

namespace WINTRUST
{
	_CRYPT_PROVIDER_CERT * (* WTHelperGetProvCertFromChain)(_CRYPT_PROVIDER_SGNR *,unsigned long);
	_CRYPT_PROVIDER_DATA * (* WTHelperProvDataFromStateData)(void *);
	_CRYPT_PROVIDER_SGNR * (* WTHelperGetProvSignerFromChain)(_CRYPT_PROVIDER_DATA *,unsigned long,int,unsigned long);
	long (* WinVerifyTrust)(HWND__ *,_GUID *,_WINTRUST_DATA *);
};

namespace WLDP
{
	long (* WldpGetLockdownPolicy)(_WLDP_HOST_INFORMATION *,unsigned long *,unsigned long);
};

class XMLBlob
{
	unsigned int EnumCore(unsigned long,IXMLDOMNode *,IXMLDOMElement *,unsigned short const *,IXMLDOMElement * *,IMsiString const * &);
	unsigned int ParseCore();
public:
	unsigned int EnumObsoletedPatch(unsigned long,IMsiString const * &);
	unsigned int EnumSequenceData(unsigned long,CSequenceData *);
	unsigned int EnumTransformInfo(unsigned long,CTransformInfo *);
	unsigned int Is30Patch(bool &);
	unsigned int ParseBlob(unsigned short const *);
	unsigned int ParseFile(unsigned short const *);
	~XMLBlob();
};

struct bitarray<2>
{
	bitarray<2> operator&(bitarray<2> const &);
	bitarray<2> operator|(bitarray<2> const &);
	int operator!=(bitarray<2> const &);
	int operator==(bitarray<2> const &);
	operator int();
};

struct stFolder
{
	stFolder();
	~stFolder();
};

struct strFolderPairs
{
	static bool IsValidSwapAttrib(int);
	strFolderPairs();
	strFolderPairs(unsigned short const *,unsigned short const *);
	strFolderPairs(unsigned short const *,unsigned short const *,int);
	~strFolderPairs();
};

<unnamed-type-rgPrivilegeLUIDs> * rgPrivilegeLUIDs;
Bool ConvertPathName(unsigned short const *,CTempBufferRef<unsigned short> &);
Bool ConvertValueFromString(IMsiString const &,CTempBufferRef<char> &,aeConvertTypes &);
Bool ConvertValueToString(CTempBufferRef<char> &,IMsiString const * &,aeConvertTypes);
Bool CreateMsiVolumeFromLabel(unsigned short const *,idtEnum,IMsiServices *,IMsiVolume * &);
Bool ExpandPath(unsigned short const *,CAPITempBufferRef<unsigned short> &,unsigned short const *);
Bool ExtractURLServer(unsigned short const *,IMsiString const * &,IMsiString const * &);
Bool FFeaturesInstalled(IMsiEngine &,Bool);
Bool FFileExists(unsigned short const *,unsigned long *,Bool);
Bool FGetTTFTitle(unsigned short const *,IMsiString const * &);
Bool FGetTTFVersion(unsigned short const *,unsigned long &,unsigned long &);
Bool FMediaSourceColumn(IMsiEngine &);
Bool FTestNoPowerdown();
Bool GetClientInformation(IMsiServices &,unsigned short const *,unsigned short const *,IMsiString const * &,IMsiString const * &);
Bool GetExpandedProductInfo(unsigned short const *,unsigned short const *,CTempBufferRef<unsigned short> &,bool);
Bool GetInfoEx(unsigned short const *,unsigned short const *,tagMSIINSTALLCONTEXT,bool,unsigned short const *,CTempBufferRef<unsigned short> &);
Bool GetLangIDArrayFromIDString(unsigned short const *,unsigned short * const,int,int &);
Bool GetPatchInfo(unsigned short const *,unsigned short const *,CTempBufferRef<unsigned short> &);
Bool GetProductInfo(unsigned short const *,unsigned short const *,CTempBufferRef<unsigned short> &);
Bool GetShortcutTarget(unsigned short const *,unsigned short *,unsigned short *,unsigned short *);
Bool IniKeyExists(IMsiPath *,unsigned short const *,unsigned short const *,unsigned short const *);
Bool IsCachedPackage(IMsiEngine &,IMsiString const &,Bool,unsigned short const *);
Bool IsTerminalServerInstalled();
Bool IsTerminalServerSKU();
Bool MapSourceCharToIsf(unsigned short,isfEnum &);
Bool MsiCloseSysHandle(void *);
Bool MsiRegisterSysHandle(void *);
Bool PackGUID(char const *,char *,unsigned long,ipgEnum);
Bool PackGUID(unsigned short const *,unsigned short *,unsigned long,ipgEnum);
Bool ParseVersionString(unsigned short const *,unsigned long &,unsigned long &);
Bool ProcessCommandLine(unsigned short const *,IMsiString const * *,IMsiString const * *,IMsiString const * *,IMsiString const * *,IMsiString const * *,IMsiString const * *,IMsiString const *,IMsiString const * *,Bool,IMsiString const * *,IMsiEngine *,bool);
Bool ProductHasBeenPublished(IMsiServices &,unsigned short const *,unsigned short const *);
Bool PutHandleData(IMsiCursor *,int,__int64);
Bool PutObjectDataProc(IMsiData const *,unsigned int *);
Bool ResolveSource(char const *,unsigned int,CAPITempBufferRef<char> &,Bool,HWND__ *);
Bool ResolveSource(unsigned short const *,unsigned int,CAPITempBufferRef<unsigned short> &,Bool,HWND__ *);
Bool StartFdiImpersonating(bool);
Bool ThreadLogActionEnd(CActionThreadData *,unsigned long);
Bool UnpackGUID(char const *,char *,unsigned long,ipgEnum);
Bool UnpackGUID(unsigned short const *,unsigned short *,unsigned long,ipgEnum);
Bool ValidatePackage(CAPITempBufferRef<char> &,CAPITempBufferRef<char> &);
Bool ValidatePackage(CAPITempBufferRef<unsigned short> &,CAPITempBufferRef<unsigned short> &);
Bool g_fLogAppend;
Bool g_fShortFileNames;
CAPITempBuffer<ThreadIdImpersonate,5> g_rgThreadIdImpersonate;
CAPITempBuffer<unsigned short,1> g_rgchBannerText;
CAPITempBuffer<unsigned short,1> g_rgchFatalException;
CAPITempBuffer<unsigned short,1> g_rgchFatalOutOfMemory;
CAPITempBuffer<unsigned short,1> g_rgchFatalTimedOut;
CAPITempBuffer<unsigned short,1> g_rgchScriptInProgress;
CAPITempBuffer<unsigned short,1> g_rgchTimeRemaining;
CAPITempBuffer<unsigned short,260> (* SpecialFolders)[2];
CAPITempBuffer<unsigned short,261> g_rgchLogFile;
CActionEntry const * const rgcae;
CActionThreadData * g_pActionThreadHead;
CAutoApiFactory g_AutoInstallFactory;
CAutoInstall * CreateAutoInstall();
CBasicUI g_BasicUI;
CEnumStateManager * g_pesmStateManager;
CHandle g_ohThread;
CInstallerFactory g_InstallerFactory;
CModuleFactory * g_rgcfModule;
CMsiAPIMessage g_message;
CMsiAPIMessageRec g_messageRec;
CMsiConfigurationManager * g_piConfigManager;
CMsiCustomAction * g_pCustomActionContext;
CMsiCustomActionManager * GetCustomActionManager(IMsiEngine *);
CMsiCustomActionManager * GetCustomActionManager(ibtBinaryType,bool,bool &);
CMsiDataWrapper * CreateMsiDataWrapper(IUnknown *);
CMsiEmbeddedUIManager * g_pEmbeddedUI;
CMsiHandle * CreateEmptyHandle(int);
CMsiMalloc vMalloc;
CMsiObjectPool g_objPool;
CMsiRecord * * rgRecordCache;
CMsiStringLive const g_MsiStringDate;
CMsiStringLive const g_MsiStringTime;
CMsiStringNull const g_MsiStringNull;
COfflineSystem g_OfflineSystem;
CRFSCachedSourceInfo g_RFSSourceCache;
CResolveSource * g_prsRecacheResolveSource;
CScriptSite * CreateScriptSite(_GUID const &,IDispatch *,HWND__ *,unsigned short);
CSecurityDescription * GetPerUserBaselineCacheSD();
CVariant g_varEmpty;
CWin64DualFolders g_Win64DualFolders;
ERF g_erf;
EnumEntityList * g_pEnumAssemblies;
EnumEntityList * g_pEnumComponentAllClients;
EnumEntityList * g_pEnumComponentClients;
EnumEntityList * g_pEnumComponentQualifiers;
EnumEntityList * g_pEnumComponents;
EnumEntityList * g_pEnumPatchesEx;
EnumEntityList * g_pEnumProducts;
EnumEntityList * g_pEnumProductsEx;
EnumEntityList * g_pEnumSourceMediaDisks;
EnumEntityList * g_pEnumSources;
FDIServerCommand CheckFDIs();
FDIServerCommand WaitCommand(FDIServerResponse);
FDIServerResponse g_fdirCallbackError;
FDIShared * g_pFDIs;
HFONT__ * MsiCreateFont(unsigned int);
HINSTANCE__ * GetMsgDll(unsigned short);
HINSTANCE__ * LoadSelfAgain();
HINSTANCE__ * LoadSystemLibrary(unsigned short const *);
HINSTANCE__ * g_hInstance;
HINSTANCE__ * g_hMsgInstance;
IDispatch * CreateAutoEngineEx(unsigned long,unsigned long,unsigned long);
IMsiConfigurationManager * CreateConfigManagerAsServer();
IMsiConfigurationManager * CreateConfigurationManager();
IMsiCustomAction * CreateCustomAction();
IMsiData const * GetObjectDataProc(int);
IMsiEngine * CreateEngine(IMsiDatabase &);
IMsiEngine * CreateEngine(IMsiStorage *,IMsiDatabase *,CMsiEngine *,int);
IMsiEngine * GetEngineFromHandle(unsigned long);
IMsiExecute * CreateExecutor(IMsiConfigurationManager &,IMsiMessage &,IMsiDirectoryManager *,irlEnum,unsigned int,HKEY__ * *);
IMsiMalloc * piMalloc;
IMsiRecord & CreateRecord(unsigned int);
IMsiRecord * ApplyTransform(IMsiDatabase &,IMsiStorage &,int,bool,PatchTransformState *,IMsiCursor *,bool);
IMsiRecord * AreAssembliesEqual(IMsiString const &,IMsiString const &,iatAssemblyType,bool &);
IMsiRecord * CheckLanguageIDStringAgainstArray(unsigned short const *,iclEnum &,unsigned short * const,int);
IMsiRecord * CreateDatabase(IMsiStorage &,Bool,IMsiServices &,IMsiDatabase * &);
IMsiRecord * CreateDatabase(unsigned short const *,idoEnum,IMsiServices &,IMsiDatabase * &);
IMsiRecord * CreateFileHandle(unsigned short const *,bool,CHandle &);
IMsiRecord * CreateFileStream(unsigned short const *,Bool,IMsiStream * &);
IMsiRecord * CreateMsiFileCopy(ictEnum,IMsiServices *,IMsiStorage *,IMsiFileCopy * &);
IMsiRecord * CreateMsiFilePath(unsigned short const *,IMsiServices *,IMsiPath * &,IMsiString const * &);
IMsiRecord * CreateMsiPath(unsigned short const *,IMsiServices *,IMsiPath * &);
IMsiRecord * CreateMsiStorage(ILockBytes *,IMsiStorage * &);
IMsiRecord * CreateMsiStorage(IMsiStream &,IMsiStorage * &);
IMsiRecord * CreateMsiStorage(unsigned short const *,ismEnum,IMsiStorage * &);
IMsiRecord * CreateMsiView(CMsiDatabase &,IMsiServices &,unsigned short const *,ivcEnum,IMsiView * &);
IMsiRecord * CreateMsiVolume(unsigned short const *,IMsiServices *,IMsiVolume * &);
IMsiRecord * CreateMsiVolume(unsigned short const *,IMsiString const * &,IMsiServices *,IMsiVolume * &);
IMsiRecord * CreatePatchUninstallAssemblyTable(CMsiEngine *,IMsiDatabase &);
IMsiRecord * CreatePatchUninstallComponentTable(CMsiEngine *,IMsiDatabase &);
IMsiRecord * CreatePatchUninstallDirectoryTable(CMsiEngine *,IMsiDatabase &);
IMsiRecord * CreatePatchUninstallShortcutTable(CMsiEngine *,IMsiDatabase &);
IMsiRecord * CreateScriptEnumerator(unsigned short const *,IMsiServices &,IEnumMsiRecord * &);
IMsiRecord * CreateStringEnumerator(IMsiString const * *,unsigned long,IEnumMsiString * &);
IMsiRecord * DetermineShortcutFolderPath(IMsiEngine &,IMsiString const &,bool &,IMsiString const * &);
IMsiRecord * EnsureShortcutExtension(MsiString &,IMsiServices &);
IMsiRecord * ExpandShellFolderTransformPath(IMsiString const &,IMsiString const * &,IMsiServices &);
IMsiRecord * ExtractServerInformation(unsigned short const *,IMsiString const * &,IMsiString const * &);
IMsiRecord * ExtractUnvalidatedFileName(unsigned short const *,Bool,IMsiString const * &);
IMsiRecord * FindFusionAssemblyFolder(IMsiServices &,CMsiCustomActionManager *,IMsiString const &,iatAssemblyType,IMsiPath * &,IMsiString const * *);
IMsiRecord * FindMatchingShellFolder(IMsiEngine &,IMsiPath &,Bool,bool &,int &,int &);
IMsiRecord * FindNonDisabledPvtComponents(IMsiEngine &,unsigned short const * const,bool &);
IMsiRecord * FindSDDL(IMsiEngine &,IMsiView &,MsiString &);
IMsiRecord * GenerateSD(IMsiEngine &,IMsiView &,IMsiStream * &);
IMsiRecord * GetComponentPath(IMsiServices &,CMsiCustomActionManager *,unsigned short const *,IMsiString const &,IMsiString const &,IMsiRecord * &,iaaAppAssignment *);
IMsiRecord * GetCurrentMinAndMaxPatchDiskID(CMediaTable &,CPatchPackageTable &,int &,int &);
IMsiRecord * GetCurrentMinAndMaxPatchSequence(CMediaTable &,int,int &,int &);
IMsiRecord * GetDarwinDescriptorOptimizationFlag(IMsiEngine &,IMsiString const &,bool,int *);
IMsiRecord * GetEmbeddedCabinetInfo(IMsiEngine &,unsigned short const *,IMsiString const * *,IMsiString const * *);
IMsiRecord * GetExternalCabinetInfo(IMsiEngine &,unsigned short const *,unsigned short const *,IMsiString const * *,IMsiStream * &,IMsiStream * &);
IMsiRecord * GetFileInstallState(IMsiEngine &,IMsiRecord &,IMsiRecord *,unsigned int *,Bool *,ifsEnum *,bool,bool,int *);
IMsiRecord * GetMinMaxPatchValues(CMediaTable &,CPatchPackageTable &,int &,int &,int &,int &);
IMsiRecord * GetModuleUsage(IMsiString const &,IEnumMsiRecord * &,IMsiServices &,CDetectApps * &);
IMsiRecord * GetObjectSignatureInformation(IMsiEngine &,IMsiString const &,IMsiString const &,IMsiStream * &,IMsiStream * &);
IMsiRecord * GetPatchIdAndTransformsFromPatchStorage(IMsiStorage *,IMsiString const * *,IMsiString const * *);
IMsiRecord * GetProductClients(IMsiServices &,unsigned short const *,IMsiString const * &);
IMsiRecord * GetProductSourcePathRelativeToParent(IMsiEngine &,IMsiString const * &);
IMsiRecord * GetPropertyAfterTransform(IMsiDatabase &,IMsiStorage &,int,IMsiString const &,IMsiString const * &);
IMsiRecord * GetPropertyFromDatabase(unsigned short const *,IMsiString const &,IMsiString const &,IMsiString const &,IMsiString const * &);
IMsiRecord * GetRelativeSourcePath(IMsiDirectoryManager &,MsiString &);
IMsiRecord * GetSecureSecurityDescriptor(IMsiServices &,IMsiStream * &,bool);
IMsiRecord * GetServerPath(IMsiServices &,bool,bool,IMsiString const * &);
IMsiRecord * GetSharedDLLCount(IMsiServices &,unsigned short const *,ibtBinaryType,IMsiString const * &);
IMsiRecord * GetSharedDLLCountForMsiRegistrations(IMsiServices &,IMsiEngine &,IMsiString const &,IMsiString const &,int &);
IMsiRecord * GetSourceTypeFromPackage(IMsiServices &,IMsiPath &,IMsiString const &,IMsiString const &,unsigned short const *,IMsiDatabase *,int &);
IMsiRecord * GetSourcedir(IMsiDirectoryManager &,IMsiPath * &);
IMsiRecord * GetSourcedir(IMsiDirectoryManager &,IMsiString const * &);
IMsiRecord * GetTransformErrorConditions(IMsiString const &,IMsiStorage &,int *);
IMsiRecord * HasShortcutExtension(MsiString &,IMsiServices &,Bool &);
IMsiRecord * InitializeTransforms(IMsiDatabase &,IMsiStorage *,IMsiEngine &,IMsiServices &,IMsiString const &,IMsiString const &,IMsiString const &,IMsiString const &,unsigned short,bool,IMsiString const &,Bool,IMsiString const * *,bool,bool,PatchTransformState *,int *,unsigned short const *,unsigned short const *,unsigned short const *,IMsiString const * *,tsEnum *,IMsiString const * *,IMsiString const * *,IMsiString const * *,ieiEnum *,IMsiString const * *);
IMsiRecord * IsFolderRemovable(IMsiServices *,IMsiPath &,Bool,Bool &);
IMsiRecord * IsFolderRemovableInternal(IMsiRegKey *,IMsiPath &,Bool,Bool &);
IMsiRecord * LoadTableAndCursor(IMsiDatabase &,unsigned short const *,bool,bool,IMsiTable * &,IMsiCursor * &,unsigned short const *,int *,unsigned short const *,int *);
IMsiRecord * LoadTransformViewTable(IMsiDatabase &,IMsiStorage &,unsigned short const *,IMsiRecord *,int,IMsiCursor * &,IMsiTable * *,bool,bool);
IMsiRecord * LockdownPath(unsigned short const *,bool);
IMsiRecord * LookupSid(IMsiEngine &,IMsiString const &,IMsiStream * &);
IMsiRecord * OpenAndValidateChildStorageRec(unsigned short const *,stEnum,IMsiServices &,IMsiStorage * &,bool,unsigned short const *,unsigned short const *,SAFER_LEVEL_HANDLE__ * *);
IMsiRecord * OpenAndValidateMsiStorageRec(unsigned short const *,stEnum,IMsiServices &,IMsiStorage * &,bool,unsigned short const *,SAFER_LEVEL_HANDLE__ * *);
IMsiRecord * OpenMediaView(IMsiEngine &,IMsiView * &,IMsiString const * &);
IMsiRecord * PostAssemblyError(unsigned short const *,long,unsigned short const *,unsigned short const *,unsigned short const *,iatAssemblyType);
IMsiRecord * PostError(int);
IMsiRecord * PostError(int,IMsiString const &);
IMsiRecord * PostError(int,IMsiString const &,IMsiString const &);
IMsiRecord * PostError(int,IMsiString const &,IMsiString const &,IMsiString const &);
IMsiRecord * PostError(int,IMsiString const &,IMsiString const &,IMsiString const &,IMsiString const &);
IMsiRecord * PostError(int,IMsiString const &,IMsiString const &,IMsiString const &,IMsiString const &,bool);
IMsiRecord * PostError(int,IMsiString const &,IMsiString const &,int);
IMsiRecord * PostError(int,IMsiString const &,IMsiString const &,int,int,bool);
IMsiRecord * PostError(int,IMsiString const &,int);
IMsiRecord * PostError(int,IMsiString const &,int,int);
IMsiRecord * PostError(int,int);
IMsiRecord * PostError(int,int,unsigned short const *);
IMsiRecord * PostError(int,unsigned short const *);
IMsiRecord * PostError(int,unsigned short const *,int);
IMsiRecord * PostError(int,unsigned short const *,unsigned short const *);
IMsiRecord * PostError(int,unsigned short const *,unsigned short const *,int);
IMsiRecord * PostError(int,unsigned short const *,unsigned short const *,unsigned short const *);
IMsiRecord * PostError(int,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *);
IMsiRecord * PostOutOfDiskSpaceError(int,unsigned short const *,int,unsigned __int64);
IMsiRecord * PostPatchTransformFixup(IMsiCursor &,CMediaTable &,CFileTable &,CPatchTable &,CPatchPackageTable &,int,int &,int &);
IMsiRecord * PostRecord(int);
IMsiRecord * PostRecord(int,int);
IMsiRecord * PostScriptError(int,unsigned short const *,CScriptSite *);
IMsiRecord * PrePackageTransformFixup(IMsiCursor &,CMediaTable &,CFileTable &,CPatchTable &,CPatchPackageTable &,int &,int &,int &,int &);
IMsiRecord * PrePatchTransformFixup(IMsiCursor &,CMediaTable &,CPatchTable &,CPatchPackageTable &,int &,int &,int &,int &,int &);
IMsiRecord * RemoveIsolateEntriesForDisabledComponent(IMsiEngine &,unsigned short const * const);
IMsiRecord * ResolveSource(IMsiServices *,unsigned short const *,unsigned int,IMsiString const * &,IMsiString const * &,Bool,HWND__ *,bool,Bool);
IMsiRecord * SetLastUsedSource(HWND__ *,unsigned short const *,unsigned short const *,Bool,bool);
IMsiRecord * SetLastUsedSourceCore(IMsiServices &,HWND__ *,unsigned short const *,unsigned short const *,Bool,Bool,IMsiString const * *,IMsiString const * *,IMsiString const * *,IMsiString const * *,IMsiString const * *,IMsiString const * *,bool,bool,bool *);
IMsiRecord * SetSharedDLLCount(IMsiServices &,unsigned short const *,ibtBinaryType,IMsiString const &);
IMsiRecord * SplitPath(unsigned short const *,IMsiString const * *,IMsiString const * *);
IMsiRecord * UnregisterFolder(IMsiServices *,IMsiPath &);
IMsiRecord * UnregisterFolderInternal(IMsiRegKey *,IMsiPath &);
IMsiRecord * UnserializeRecord(IMsiServices &,int,char const *);
IMsiRecord * g_piUnhandledError;
IMsiRegKey * g_piSharedDllsRegKey;
IMsiRegKey * g_piSharedDllsRegKey32;
IMsiRemoteAPI * CreateMsiRemoteAPI();
IMsiServer * CreateMsiServer();
IMsiServer * CreateMsiServerProxy();
IMsiServer * CreateMsiServerProxyFromRemote(IMsiServer &);
IMsiServices * CreateServices();
IMsiServices * LoadServices();
IMsiServices * g_piSharedServices;
IMsiStream * CreateStreamOnMemory(char const *,unsigned int);
IMsiString const & ComposeDescriptor(IMsiString const &,IMsiString const &,IMsiString const &,bool);
IMsiString const & CompositeKey(IMsiString const &,IMsiString const &);
IMsiString const & CreateCanonicalProductVersionString(unsigned __int64);
IMsiString const & CreateMsiString(unsigned short const &);
IMsiString const & CreateVersionString(unsigned long,unsigned long);
IMsiString const & DateTimeToString(int);
IMsiString const & FormatText(IMsiString const &,Bool,Bool,int (*)(unsigned short const *,int,CTempBufferRef<unsigned short> &,Bool &,Bool &,Bool &,IUnknown *),IUnknown *,int (*)[2],int *);
IMsiString const & FormatTextEx(IMsiString const &,IMsiEngine &,bool);
IMsiString const & FormatTextSFN(IMsiString const &,IMsiEngine &,int (* const)[2],int &,bool);
IMsiString const & FormatUser(IMsiEngine &,IMsiString const &,IMsiString const &);
IMsiString const & GetComponentWithDarwinDescriptorOptimizationFlag(IMsiEngine &,IMsiString const &,IMsiString const &,bool);
IMsiString const & GetDebugErrorString(int);
IMsiString const & GetDiskLabel(IMsiServices &,unsigned int,unsigned short const *);
IMsiString const & GetErrorTableString(IMsiDatabase *,unsigned short,int);
IMsiString const & GetInstallerMessage(unsigned int);
IMsiString const & GetMsiDirectory();
IMsiString const & GetPackedGUID(unsigned short const *);
IMsiString const & GetProperty(IMsiCursor &,IMsiString const &);
IMsiString const & GetRegistryKeyPath(IMsiEngine &,IMsiRecord const &,Bool,ibtBinaryType);
IMsiString const & GetSFN(IMsiString const &,IMsiRecord &,int);
IMsiString const & GetServiceDisplayNameW(IMsiString const &,IMsiString const &);
IMsiString const & GetSourcePathForRollback(IMsiString const &);
IMsiString const & GetTempDirectory();
IMsiString const & ParsePropertyName(unsigned short const * &,Bool);
IMsiString const & ParsePropertyValue(unsigned short const * &);
IMsiString const & PatchIDToSourceProp(unsigned short const *);
IMsiString const & TrimPath(unsigned short const *);
IMsiString const * CreateStringStrRef(unsigned short const *,unsigned int,IMsiString const *);
IUnknown * (*const * const rgFactory)();
IUnknown * CreateCOMInterface(_GUID const &);
IUnknown * CreateEngine();
IUnknown * CreateExecutor();
IUnknown * CreateMessageHandler();
IUnknown * CreateServicesAsService();
IUnknown * FindMsiHandle(unsigned long,int);
MsiDate GetCurrentDateTime();
MsiUIMessageContext g_MessageContext;
PatchInstallTableInfo * rgstPatchInstallTableInfo;
PolicyEntry * g_pPolicyTable;
ProductPropertyA const * const g_ProductPropertyTableA;
ProductPropertyW const * FindProperty(unsigned short const *,ptPropertyType);
ProductPropertyW const * const g_ProductPropertyTableW;
RCCI * mpCparamRcci;
SC_HANDLE__ * GetServiceHandle(IMsiString const &,IMsiString const &,unsigned long);
ShellFolder const * const rgAllUsersProfileShellFolders;
ShellFolder const * const rgPersonalProfileShellFolders;
ShellFolder const * const rgShellFolders;
TRI CompareTokenUserSID(void *,void *);
TRI ElevatedCredentialsPromptRequired(IMsiString const &,IMsiDatabase &,int,iuiEnum,bool,bool,bool,bool,iioEnum,int,bool,int,bool,bool *);
TRI IsTokenAHavePrivilegesOfTokenB(void *,void *);
TRI IsTokenAMemberOfAndHavePrivilegesAsTokenB(void *,void *);
TRI IsTokenAMemberOfTokenBGroups(void *,void *);
TRI RunningAsLocalSystem();
TRI ServiceActionOrderCausesReboot(IMsiEngine &);
TRI ServiceUpdateCausesReboot(IMsiEngine &,unsigned short const *);
TableInfo * rgstPatchUninstallCustomActionTableInfo;
UniqueThreadID MsiGetCurrentThreadId();
_FILETIME GetCurrentFileTime();
_GUID * WinSqmStartSession(_GUID *,unsigned long,unsigned long);
_GUID const * const rgCLSID;
_LARGE_INTEGER g_liPerfFreq;
_LARGE_INTEGER liZero;
_MSI_ACTION MapInstallTypeToMsiAction(iitEnum);
_PRIVILEGE_MAP * rgPrivilegeMap;
_RTL_CRITICAL_SECTION g_csEnumLock;
_RTL_CRITICAL_SECTION g_csEnumStateManagerLock;
_RTL_CRITICAL_SECTION g_csImpersonationLock;
_RTL_CRITICAL_SECTION g_csLUIDLock;
_RTL_CRITICAL_SECTION g_csMessageDll;
_RTL_CRITICAL_SECTION g_csPolicyTableLock;
_RTL_CRITICAL_SECTION g_csRecacheResolveSourceLock;
_RTL_CRITICAL_SECTION g_csSharedServicesLock;
_RTL_CRITICAL_SECTION g_csThreadImpersonationLock;
_RTL_CRITICAL_SECTION g_csTransactionLock;
_RTL_CRITICAL_SECTION g_csWriteLog;
_RTL_CRITICAL_SECTION vcsHeap;
__int64 (*BindFail_ADVAPI32(char const *,__int64 (**)()))();
__int64 (*BindFail_APPHELP(char const *,__int64 (**)()))();
__int64 (*BindFail_CRYPT32(char const *,__int64 (**)()))();
__int64 (*BindFail_CSCDLL(char const *,__int64 (**)()))();
__int64 (*BindFail_FAULTREP(char const *,__int64 (**)()))();
__int64 (*BindFail_KERNEL32(char const *,__int64 (**)()))();
__int64 (*BindFail_KERNELBASE(char const *,__int64 (**)()))();
__int64 (*BindFail_NETAPI32(char const *,__int64 (**)()))();
__int64 (*BindFail_NTDLL(char const *,__int64 (**)()))();
__int64 (*BindFail_ODBCCP32(char const *,__int64 (**)()))();
__int64 (*BindFail_OLEAUT32(char const *,__int64 (**)()))();
__int64 (*BindFail_PCACLI(char const *,__int64 (**)()))();
__int64 (*BindFail_PROPSYS(char const *,__int64 (**)()))();
__int64 (*BindFail_RPCRT4(char const *,__int64 (**)()))();
__int64 (*BindFail_RSTRTMGR(char const *,__int64 (**)()))();
__int64 (*BindFail_SFC(char const *,__int64 (**)()))();
__int64 (*BindFail_SHLWAPI(char const *,__int64 (**)()))();
__int64 (*BindFail_TSAPPCMP(char const *,__int64 (**)()))();
__int64 (*BindFail_USER32(char const *,__int64 (**)()))();
__int64 (*BindFail_WINSTA(char const *,__int64 (**)()))();
__int64 (*BindFail_WINTRUST(char const *,__int64 (**)()))();
__int64 (*BindFail_WLDP(char const *,__int64 (**)()))();
__int64 (*BindOpt_ADVAPI32(char const *,__int64 (**)(),__int64 (*)()))();
__int64 (*BindOpt_COMCTL32(char const *,__int64 (**)(),__int64 (*)()))();
__int64 (*BindOpt_KERNEL32(char const *,__int64 (**)(),__int64 (*)()))();
__int64 (*BindOpt_SFC(char const *,__int64 (**)(),__int64 (*)()))();
__int64 (*BindOpt_SHELL32(char const *,__int64 (**)(),__int64 (*)()))();
__int64 (*BindOpt_SRCLIENT(char const *,__int64 (**)(),__int64 (*)()))();
__int64 (*Bind_ADVAPI32(char const *,__int64 (**)()))();
__int64 (*Bind_APPHELP(char const *,__int64 (**)()))();
__int64 (*Bind_COMCTL32(char const *,__int64 (**)()))();
__int64 (*Bind_COMDLG32(char const *,__int64 (**)()))();
__int64 (*Bind_FUSION(char const *,__int64 (**)()))();
__int64 (*Bind_KERNEL32(char const *,__int64 (**)()))();
__int64 (*Bind_MPR(char const *,__int64 (**)()))();
__int64 (*Bind_MSCOREE(char const *,__int64 (**)()))();
__int64 (*Bind_MSPATCHA(char const *,__int64 (**)()))();
__int64 (*Bind_NTDLL(char const *,__int64 (**)()))();
__int64 (*Bind_OLE32(char const *,__int64 (**)()))();
__int64 (*Bind_OLEAUT32(char const *,__int64 (**)()))();
__int64 (*Bind_SHELL32(char const *,__int64 (**)()))();
__int64 (*Bind_SXS(char const *,__int64 (**)()))();
__int64 (*Bind_TSAPPCMP(char const *,__int64 (**)()))();
__int64 (*Bind_USER32(char const *,__int64 (**)()))();
__int64 (*Bind_USERENV(char const *,__int64 (**)()))();
__int64 (*Bind_VERSION(char const *,__int64 (**)()))();
__int64 (*Bind_WINHTTP(char const *,__int64 (**)()))();
__int64 (*_WinSqmGetProc(char const *))();
__int64 CopyFileW(FDINOTIFICATION *);
__int64 CreateDestinationFile(unsigned int);
__int64 HiddenWindowProc(HWND__ *,unsigned int,unsigned __int64,__int64);
__int64 ProgressProc(HWND__ *,unsigned int,unsigned __int64,__int64);
__int64 fdinotify(FDINOTIFICATIONTYPE,FDINOTIFICATION *);
__int64 pfnopen(char *,int,int);
apEnum AcceptProduct(unsigned short const *,bool,bool,bool,bool);
bitarray<2> const ipqTokAdd;
bitarray<2> const ipqTokAlter;
bitarray<2> const ipqTokAndOp;
bitarray<2> const ipqTokAs;
bitarray<2> const ipqTokBy;
bitarray<2> const ipqTokChar;
bitarray<2> const ipqTokCharacter;
bitarray<2> const ipqTokClose;
bitarray<2> const ipqTokComma;
bitarray<2> const ipqTokCreate;
bitarray<2> const ipqTokDelete;
bitarray<2> const ipqTokDistinct;
bitarray<2> const ipqTokDot;
bitarray<2> const ipqTokDrop;
bitarray<2> const ipqTokEnd;
bitarray<2> const ipqTokEqual;
bitarray<2> const ipqTokFree;
bitarray<2> const ipqTokFrom;
bitarray<2> const ipqTokGreater;
bitarray<2> const ipqTokGreaterEq;
bitarray<2> const ipqTokHold;
bitarray<2> const ipqTokId;
bitarray<2> const ipqTokIdQuotes;
bitarray<2> const ipqTokInsert;
bitarray<2> const ipqTokInt;
bitarray<2> const ipqTokInteger;
bitarray<2> const ipqTokInto;
bitarray<2> const ipqTokIs;
bitarray<2> const ipqTokKey;
bitarray<2> const ipqTokLess;
bitarray<2> const ipqTokLessEq;
bitarray<2> const ipqTokLiteralI;
bitarray<2> const ipqTokLiteralS;
bitarray<2> const ipqTokLocalizable;
bitarray<2> const ipqTokLong;
bitarray<2> const ipqTokLongChar;
bitarray<2> const ipqTokNotEq;
bitarray<2> const ipqTokNotop;
bitarray<2> const ipqTokNull;
bitarray<2> const ipqTokObject;
bitarray<2> const ipqTokOpen;
bitarray<2> const ipqTokOrOp;
bitarray<2> const ipqTokOrder;
bitarray<2> const ipqTokParam;
bitarray<2> const ipqTokPrimary;
bitarray<2> const ipqTokQuotes;
bitarray<2> const ipqTokSelect;
bitarray<2> const ipqTokSet;
bitarray<2> const ipqTokShort;
bitarray<2> const ipqTokStar;
bitarray<2> const ipqTokTable;
bitarray<2> const ipqTokTemporary;
bitarray<2> const ipqTokUnknown;
bitarray<2> const ipqTokUpdate;
bitarray<2> const ipqTokValues;
bitarray<2> const ipqTokVarChar;
bitarray<2> const ipqTokWhere;
bitarray<2> const ipqTokWhiteSpace;
bool AdjustTokenPrivileges(unsigned short const * *,int,bool,unsigned long,_TOKEN_PRIVILEGES *,unsigned long *);
bool ApplyTransforms(void *,unsigned long,IMsiServices &,IMsiDatabase &,IMsiPath &);
bool AreComponentRulesEnforced(IMsiEngine &);
bool ClearInProgressInformation();
bool CompareUpgradeVersions(unsigned int,unsigned int,unsigned int);
bool ComposeDriverKeywordList(IMsiRecord &,unsigned short * *,int &);
bool CompressStreamName(unsigned short const *,unsigned short *,int);
bool ConvertUserStringToSidString(unsigned short const *,unsigned short * *);
bool CreateLog(unsigned short const *,bool,bool);
bool DetectVersionLaunchCondition(IMsiEngine &,int *,int *);
bool DetermineLongFileNameOnly(unsigned short const *,CTempBufferRef<unsigned short> &);
bool DisablePrivilegesFromMap(void *,unsigned long);
bool EnableAndMapDisabledPrivileges(void *,unsigned long &);
bool EnsureTableCore(IMsiDatabase &,unsigned short const *,IMsiTable * &,stTableColumnDescriptor const *,unsigned int,IMsiCursor * *);
bool FCheckDatabaseCell(void *,unsigned long,IMsiDatabase &,unsigned short const *);
bool FDeleteFolder(unsigned short const *);
bool FDiagnosticModeSet(int);
bool FDriveTypeRequiresImpersonation(idtEnum);
bool FFileIsCompressed(int,int);
bool FFindNextCharOrSquare(unsigned short const * &,unsigned short);
bool FIsCustomActionThread(UniqueThreadID);
bool FIsMatchingAppCompatEntry(void *,unsigned long,IMsiString const &,iacpAppCompatTransformApplyPoint,unsigned long *,unsigned long *,IMsiEngine &,IMsiDatabase &);
bool FIsNetworkVolume(unsigned short const *);
bool FIsRegistryOrAssemblyKeyPath(IMsiString const &,bool);
bool FIsSecurityDescriptorOwnedBy(void *,void *);
bool FMutexExists(unsigned short const *,void * &);
bool FProductRegisteredForAUser(unsigned short const *);
bool FSourceIsAllowed(IMsiServices &,bool,unsigned short const *,unsigned short const *,Bool);
bool FSourceIsLFN(int,IMsiPath &);
bool FTTCSeek(void *,unsigned int);
bool FVersionedFile(IMsiString const &,IMsiCursor *,int,int);
bool FVolumeRequiresImpersonation(IMsiVolume &);
bool FindMarker(unsigned short const *,unsigned short,unsigned short,bool *,unsigned long *);
bool FinishTransformsLoop(bool,unsigned int,int,int);
bool GenerateSDFromSDDL(IMsiString const &,IMsiStream * &);
bool GetImpersonationFromPath(unsigned short const *);
bool GetLangIDArrayFromActualFile(CAPITempBufferRef<unsigned char> &,unsigned short const *,unsigned short * const,int,int &);
bool GetLangIDArrayFromBuffer(CAPITempBufferRef<unsigned char> &,unsigned short * const,int,int &);
bool GetLastUsedSourceType(IMsiServices &,unsigned short const *,isfEnum &);
bool GetNextSystemGuid(unsigned short *);
bool GetProductProperty(IMsiDatabase *,unsigned short *,IMsiString const * &);
bool GetScreenCenterCoord(HWND__ *,int &,int &,int &,int &);
bool GetSdbDataNames(void *,unsigned long,CTempBufferRef<unsigned char> &);
bool GetSourceTypeFromFlags(unsigned long,isfEnum &);
bool GetSourceTypeFromPath(IMsiServices &,unsigned short const *,isfEnum &);
bool GetTestFlag(int);
bool GetTransformTempDir(IMsiServices &,IMsiPath * &);
bool GetVersionString(unsigned long,unsigned long,IMsiString const * &);
bool HasProperEnumExPermissions(unsigned short const *);
bool ImpersonateCore(ImpersonationType,int *,bool *);
bool ImpersonateElevAdmin(void * *);
bool InSafeMode();
bool IncreaseRegistryQuota(unsigned int);
bool IsAdmin();
bool IsClientPrivileged(unsigned short const *);
bool IsCurrentUser(unsigned short const *);
bool IsDomainJoined(bool *);
bool IsFilePatchTarget(IMsiStream &,IMsiPath &,unsigned short const *);
bool IsGUID(unsigned short const *);
bool IsImpersonating(bool);
bool IsInstallingFromTSClient(unsigned short const *);
bool IsInteractiveWindowStation();
bool IsLocalSystemSid(unsigned short const *);
bool IsLocalSystemToken(void *);
bool IsLoggingModeSet(tagINSTALLOGMODE);
bool IsPatchAppliedToProduct(unsigned short const *,unsigned short const *,unsigned short const *,iaaAppAssignment,bool);
bool IsPrimaryTokenSystemOrService();
bool IsProductInstalledOrAdvertised(unsigned short const *,unsigned short const *,iaaAppAssignment);
bool IsRemoteAdminTSInstalled();
bool IsRetryableError(int);
bool IsStringField(IMsiRecord &,unsigned int);
bool IsSystemClient(IMsiString const &);
bool IsThreadSafeForSessionImpersonation();
bool IsTokenOnTerminalServerConsole(void *);
bool IsURL(unsigned short const *,bool &);
bool LoadCurrentUserKey(bool);
bool LogRecord(IMsiRecord &);
bool MakeFullSystemPath(unsigned short const *,unsigned short *,unsigned __int64);
bool MakeFusionPath(unsigned short const *,unsigned short *,unsigned __int64);
bool MsiConvertFileUrlToFilePath(unsigned short const *,unsigned short *,unsigned long *,unsigned long);
bool MsiExpandEnvironmentStrings(char const *,CAPITempBufferRef<char> &);
bool MsiExpandEnvironmentStrings(unsigned short const *,CAPITempBufferRef<unsigned short> &);
bool MsiExpandEnvironmentStrings(unsigned short const *,CTempBufferRef<unsigned short> &);
bool MsiExpandEnvironmentStrings(unsigned short const *,IMsiString const * &);
bool MsiGetDiskFreeSpace(unsigned short const *,unsigned __int64 &,unsigned __int64 &,unsigned int &,idtEnum,Bool);
bool MsiGetEnvironmentVariable(unsigned short const *,CAPITempBufferRef<unsigned short> &);
bool MsiGetEnvironmentVariable(unsigned short const *,CTempBufferRef<unsigned short> &);
bool MsiGetFileSecurity(unsigned short const *,unsigned long,CTempBufferRef<unsigned char> &,unsigned long &);
bool MsiGetTempPath(unsigned long,unsigned short *);
bool MsiSetFileSize(void *,unsigned int,unsigned long *);
bool MsiSwitchLanguage(unsigned int &,unsigned short &);
bool OnlyOneBitSet(int);
bool PatchWasRoamed(iaaAppAssignment,unsigned short const *,unsigned short const *,unsigned short const *);
bool PopulateDefaultValuesInPolicyTable();
bool PopulatePolicyTable();
bool PostScriptWriteError(IMsiMessage &);
bool PrepareHydraRegistryKeyMapping(bool);
bool PreparePrivilegeLUIDs();
bool ProcessColumns(ipcolColumnTypes,void *,unsigned long,IMsiDatabase &,IMsiTable &,IMsiCursor &,unsigned short const *);
bool ProductVersionStringToUInt64(unsigned short const *,unsigned __int64 &);
bool PropertyIsAllowed(unsigned short const *,unsigned short const *);
bool RefCountedTokenPrivilegesCore(itkpEnum,bool);
bool ReleaseTransformViewTable(IMsiDatabase &,unsigned short const *);
bool ReportInstallCrashToWER(_EXCEPTION_POINTERS *);
bool ResolveSDDL(IMsiString const &,unsigned short * *);
bool SafeForDangerousSourceActions(unsigned short const *,bool);
bool SeekToEndOfFile(void *,_LARGE_INTEGER *);
bool SetInteractiveSynchronizeRightsForSID(unsigned char *,bool);
bool SetTestFlags();
bool ShouldCheckCRC(bool,iisEnum,int);
bool ShouldGoToEventLog(imtEnum);
bool ShouldLogCmdLine();
bool StartImpersonating();
bool StopImpersonateCore(ImpersonationType,int *);
bool SwapSystem32(unsigned short *,unsigned short);
bool TestLaunchCondition(IMsiEngine &,IMsiView &);
bool TokenIsUniqueSystemToken(void *);
bool UpdateSaferLevelInMessageContext(SAFER_LEVEL_HANDLE__ *);
bool UseRemappedElevatedProxies();
bool ValidateStorageClass(IStorage &,ivscEnum);
bool VerifyProduct(iaaAppAssignment,unsigned short const *,HKEY__ * &,HKEY__ * &,IMsiString const * &,IMsiString const * &);
bool VerifySDDLText(IMsiString const &,int *);
bool WriteLog(unsigned short const *);
bool WriteLogToDisk(unsigned short const *);
bool WriteLogToMemory(unsigned short const *);
bool WriteScriptRecord(CScriptGenerate *,ixoEnum,IMsiRecord &,bool,IMsiMessage &);
bool fProductExistInContext(unsigned short const *,unsigned short const *,tagMSIINSTALLCONTEXT,tagINSTALLSTATE &,bool &);
bool g_bHKCUIsSystem;
bool g_fFlushEachLine;
bool g_fRunScriptElevated;
bool g_fThreadImpersonationArray;
bool g_fWinNT64;
bool g_fWoW;
char * AllocateMemoryStream(unsigned int,IMsiStream * &);
char * SerializeRecord(IMsiRecord const *,IMsiServices *,int *);
iaaAppAssignment iaaFromMsiInstallContext(tagMSIINSTALLCONTEXT);
icfvEnum CompareVersLight(unsigned long,unsigned long,unsigned long,unsigned long);
icfvEnum CompareVersions(unsigned long,unsigned long,unsigned long,unsigned long);
icrCompareResult MsiCompareSignatureCertificates(IMsiStream *,_CERT_CONTEXT const *,IMsiString const &);
icrCompareResult MsiCompareSignatureHashes(IMsiStream *,_CRYPTOAPI_BLOB &,IMsiString const &);
icscEnum CheckShareCSCStatus(isfEnum,unsigned short const *);
icsrCheckSignatureResult MsiVerifyNonPackageSignature(IMsiString const &,void *,IMsiStream &,IMsiStream *,long &);
idtEnum AdtFromSysDriveType(int);
idtEnum MsiGetDriveType(unsigned short const *);
idtEnum MsiGetPathDriveType(unsigned short const *,bool);
ieMessageEnum GetMessageOffset(unsigned short const *);
ieiEnum GetPatchMetadataProperty(IMsiTable &,IMsiString const &,IMsiString const &,IMsiString const * &);
ieiEnum IsValidPatchStorage(IMsiStorage &);
ieiEnum MapStorageErrorToInitializeReturn(IMsiRecord *);
ieiEnum ProcessLanguage(IMsiString const &,IMsiString const &,IMsiServices &,Bool,bool,unsigned short &,unsigned short &);
iesEnum Admin(IMsiEngine &);
iesEnum Advertise(IMsiEngine &);
iesEnum AllocateRegistrySpace(IMsiEngine &);
iesEnum AppSearch(IMsiEngine &);
iesEnum BindImage(IMsiEngine &);
iesEnum CCPSearch(IMsiEngine &);
iesEnum CollectUserInfo(IMsiEngine &);
iesEnum CostFinalize(IMsiEngine &);
iesEnum CostInitialize(IMsiEngine &);
iesEnum CreateFolders(IMsiEngine &);
iesEnum CreatePublishProductRecord(IMsiEngine &,bool,IMsiRecord * &);
iesEnum CreateShortcuts(IMsiEngine &);
iesEnum DeleteServices(IMsiEngine &);
iesEnum DisableRollback(IMsiEngine &);
iesEnum DoODBCFolders(IMsiEngine &,unsigned short const *,unsigned short const *,unsigned long (*)(int,unsigned short const *,unsigned short const *,unsigned short *,unsigned short,unsigned short *,unsigned short,unsigned long *,ibtBinaryType),IMsiString const * &);
iesEnum DuplicateFiles(IMsiEngine &);
iesEnum ExecuteAction(IMsiEngine &);
iesEnum ExecuteChangeMedia(IMsiEngine &,IMsiRecord &,IMsiRecord &,IMsiString const &,unsigned int,IMsiString const &);
iesEnum FileCost(IMsiEngine &);
iesEnum FindRelatedProducts(IMsiEngine &);
iesEnum ForceReboot(IMsiEngine &);
iesEnum GetForeignSourceList(IMsiEngine &,IMsiString const &,IMsiString const * &);
iesEnum Install(IMsiEngine &);
iesEnum InstallAdminPackage(IMsiEngine &);
iesEnum InstallExecute(IMsiEngine &);
iesEnum InstallExecuteAgain(IMsiEngine &);
iesEnum InstallFiles(IMsiEngine &);
iesEnum InstallFinalize(IMsiEngine &);
iesEnum InstallInitialize(IMsiEngine &);
iesEnum InstallODBC(IMsiEngine &);
iesEnum InstallSFPCatalogFile(IMsiEngine &);
iesEnum InstallValidate(IMsiEngine &);
iesEnum IsolateComponents(IMsiEngine &);
iesEnum LaunchConditions(IMsiEngine &);
iesEnum MapErrorReturnToAction(unsigned int);
iesEnum MigrateFeatureStates(IMsiEngine &);
iesEnum MoveFiles(IMsiEngine &);
iesEnum MsiPublishAssemblies(IMsiEngine &);
iesEnum MsiUnpublishAssemblies(IMsiEngine &);
iesEnum PatchFiles(IMsiEngine &);
iesEnum PlaceIconFiles(IMsiEngine &);
iesEnum ProcessAssembliesInfo(IMsiEngine &,int);
iesEnum ProcessClassInfo(IMsiEngine &,int);
iesEnum ProcessComPlusInfo(IMsiEngine &,int);
iesEnum ProcessComponents(IMsiEngine &);
iesEnum ProcessComponentsInfo(IMsiEngine &,int);
iesEnum ProcessExtensionInfo(IMsiEngine &,int);
iesEnum ProcessFeaturesInfo(IMsiEngine &,pfiStates);
iesEnum ProcessMIMEInfo(IMsiEngine &,int);
iesEnum ProcessProgIdInfo(IMsiEngine &,int);
iesEnum ProcessProgIdInfoExt(IMsiEngine &,int);
iesEnum ProcessShortcutInfo(IMsiEngine &,int,Bool);
iesEnum ProcessTypeLibraryInfo(IMsiEngine &,int);
iesEnum PublishComponents(IMsiEngine &);
iesEnum PublishFeatures(IMsiEngine &);
iesEnum PublishProduct(IMsiEngine &);
iesEnum PublishSourceList(IMsiEngine &,IMsiString const &,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *);
iesEnum RMCCPSearch(IMsiEngine &);
iesEnum RegisterClassInfo(IMsiEngine &);
iesEnum RegisterComPlus(IMsiEngine &);
iesEnum RegisterExtensionInfo(IMsiEngine &);
iesEnum RegisterFonts(IMsiEngine &);
iesEnum RegisterMIMEInfo(IMsiEngine &);
iesEnum RegisterProduct(IMsiEngine &);
iesEnum RegisterProgIdInfo(IMsiEngine &);
iesEnum RegisterTypeLibraries(IMsiEngine &);
iesEnum RegisterUser(IMsiEngine &);
iesEnum RemoveDuplicateFiles(IMsiEngine &);
iesEnum RemoveEnvironmentStrings(IMsiEngine &);
iesEnum RemoveExistingProducts(IMsiEngine &);
iesEnum RemoveFiles(IMsiEngine &);
iesEnum RemoveFolder(IMsiPath &,Bool,Bool,IMsiConfigurationManager *,IMsiServices *,IMsiMessage &);
iesEnum RemoveFolders(IMsiEngine &);
iesEnum RemoveForeignFilesOrFolders(IMsiEngine &,Bool);
iesEnum RemoveForeignFoldersCore(IMsiEngine &,IMsiTable &,IMsiPath *);
iesEnum RemoveIniValues(IMsiEngine &);
iesEnum RemoveODBC(IMsiEngine &);
iesEnum RemoveRegistryValues(IMsiEngine &);
iesEnum RemoveShortcuts(IMsiEngine &);
iesEnum ResolveSource(IMsiEngine &);
iesEnum RunUIOrExecuteSequence(IMsiEngine &,unsigned short const *,unsigned short const *,unsigned short const *);
iesEnum ScheduleReboot(IMsiEngine &);
iesEnum ScheduledCustomAction(IMsiRecord &,IMsiString const &,unsigned short,IMsiMessage &,bool,bool,_GUID const *,_GUID const *);
iesEnum SelfRegModules(IMsiEngine &);
iesEnum SelfUnregModules(IMsiEngine &);
iesEnum Sequence(IMsiEngine &);
iesEnum ServiceConfigure(IMsiEngine &);
iesEnum ServiceInstall(IMsiEngine &);
iesEnum SetODBCFolders(IMsiEngine &);
iesEnum StartServices(IMsiEngine &);
iesEnum StopServices(IMsiEngine &);
iesEnum UnpublishComponents(IMsiEngine &);
iesEnum UnpublishFeatures(IMsiEngine &);
iesEnum UnpublishPreviousAssembly(IMsiEngine &,iatAssemblyType,IMsiString const &,IMsiString const &,IMsiString const &,IMsiString const &,bool);
iesEnum UnpublishProduct(IMsiEngine &);
iesEnum UnregisterClassInfo(IMsiEngine &);
iesEnum UnregisterComPlus(IMsiEngine &);
iesEnum UnregisterExtensionInfo(IMsiEngine &);
iesEnum UnregisterFonts(IMsiEngine &);
iesEnum UnregisterMIMEInfo(IMsiEngine &);
iesEnum UnregisterProgIdInfo(IMsiEngine &);
iesEnum UnregisterTypeLibraries(IMsiEngine &);
iesEnum ValidateProductID(IMsiEngine &);
iesEnum WriteEnvironmentStrings(IMsiEngine &);
iesEnum WriteIniValues(IMsiEngine &);
iesEnum WriteRegistryValues(IMsiEngine &);
iesSaferResult VerifyMsiObjectAgainstSAFER(IMsiServices &,IMsiStorage *,unsigned short const *,unsigned short const *,stEnum,bool,SAFER_LEVEL_HANDLE__ * *);
ietEnum MapErrorToTransactionAction(unsigned int);
ievtEnum ValidateTransform(IMsiServices &,IMsiStorage &,IMsiString const &,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short,int &,bool,unsigned short const *,bool,int *,IMsiRecord * &);
ievtEnum ValidateTransformCore(IMsiString const &,IMsiString const &,int,IMsiRecord * &,unsigned short,int,unsigned short const *,IMsiString const &,unsigned short const *,IMsiString const &,unsigned short const *,IMsiString const &);
ifiEnum GetAllFileVersionInfo(unsigned short const *,unsigned long *,unsigned long *,unsigned short * const,int,int *,Bool,bool);
iitEnum GetInstallType(bool,bool,bool,bool,bool);
ilmEnum DetermineLockPermissionsMode(IMsiEngine &);
imsEnum PromptUserForSource(IMsiRecord &);
int * g_rgiDefaultValues;
int AddAdminFullControlToRegKey(HKEY__ *);
int AddRefObjectData(int);
int AllocateAndInitializeUserSid(unsigned short const *,void * *,unsigned long &);
int ApplyPatch(unsigned short const *,unsigned short const *,int,unsigned short const *);
int ApplyPatchesEx(unsigned short const *,unsigned short const *,unsigned short const *);
int ApplyPatchesOnSingleInstanceWithSorter(CPatchesSorter &,unsigned short const *,IMsiRecord const *,unsigned long *);
int ApplyPatchesWithSorter(CPatchesSorter &,IMsiRecord const *);
int CloseFileInfo(FDINOTIFICATION *);
int CompareLangIDs(void const *,void const *);
int CompareLangName(void const *,void const *);
int ConfigureOrReinstallFeatureOrProduct(unsigned short const *,unsigned short const *,tagINSTALLSTATE,unsigned long,int,iuiEnum,unsigned short const *,iioEnum);
int CreateAndRunEngine(ireEnum,unsigned short const *,unsigned short const *,unsigned short const *,CMsiEngine *,iioEnum,IMsiRecord const *);
int CreateInitializedEngine(unsigned short const *,unsigned short const *,unsigned short const *,int,iuiEnum,IMsiStorage *,IMsiDatabase *,CMsiEngine *,iioEnum,IMsiEngine * &,SAFER_LEVEL_HANDLE__ *,IMsiRecord const *);
int CustomRemoteScriptAction(bool,int,IMsiEngine *,IDispatch *,IMsiString const &,IMsiString const &,bool,UniqueThreadID,IMsiRecord * *);
int DecomposeDescriptor(char const *,bool,char *,char *,char *,unsigned long *,unsigned long *,bool *);
int DecomposeDescriptor(unsigned short const *,bool,unsigned short *,unsigned short *,unsigned short *,unsigned long *,unsigned long *,bool *);
int EnumFontProc(tagENUMLOGFONTEXW *,tagNEWTEXTMETRICEXW *,int,__int64);
int EnumVersionResLangProc(HINSTANCE__ *,unsigned short const *,unsigned short const *,unsigned short,__int64);
int EnumVersionResNameProc(HINSTANCE__ *,unsigned short const *,unsigned short *,__int64);
int FreeServices();
int GetInstallModeFlags(IMsiEngine &,int);
int GetInstallerMessage(unsigned int,unsigned short *,int);
int GetIntegerValue(unsigned short const *,Bool *);
int GetPackageFullPath(char const *,CAPITempBufferRef<char> &,plEnum &,Bool);
int GetPackageFullPath(unsigned short const *,CAPITempBufferRef<unsigned short> &,plEnum &,Bool);
int GetPropSize(int,char const *);
int GetShimFlags(void *,unsigned long);
int GrabExecuteMutex(CMutex &);
int GrabMutex(unsigned short const *,unsigned long,void * &);
int HeapMemAlloc(void * *,int);
int IStrComp(unsigned short const *,unsigned short const *);
int LiveDate(unsigned short *,unsigned int);
int LiveTime(unsigned short *,unsigned int);
int LocalURTMakeFusionFullPath(unsigned short const *,unsigned short *,unsigned __int64);
int MakeAdminRegKeyOwner(HKEY__ *,unsigned short const *);
int MsiCanonicalizeUrl(unsigned short const *,unsigned short *,unsigned long *,unsigned long);
int MsiCombineUrl(unsigned short const *,unsigned short const *,unsigned short *,unsigned long *,unsigned long);
int MsiWinHttpGetProxy(void *,void *,unsigned short const *,WINHTTP_PROXY_INFO * *);
int MsiWinHttpGetSelectedAuthScheme(void *,unsigned long *);
int MsiWinHttpSendRequestAndReceiveResponse(void *,void *,unsigned short const *,unsigned long *);
int MsiWinHttpSetCredentials(void *,unsigned long,unsigned long,unsigned short const *,unsigned short const *);
int MsiWinHttpSetNextProxy(void *,void *,WINHTTP_PROXY_INFO *);
int MsiWinHttpSetProxy(void *,void *,WINHTTP_PROXY_INFO *);
int NextCabinet(FDINOTIFICATION *);
int QsortCompForInt(void const *,void const *);
int RemoveSharedDllCountToken(MsiString &);
int RemoveSharedDllCountToken<unsigned short>(unsigned short *,unsigned long *);
int RunServerSideInstall(ireEnum,unsigned short const *,unsigned short const *,unsigned short const *,iioEnum,IMsiServices &,IMsiRecord const *);
int SetLastErrorRecord(IMsiRecord *);
int UncompressStreamName(unsigned short const *,unsigned short *);
int g_cSharedServices;
int g_cWaitTimeout;
int g_dmDiagnosticMode;
int g_fSysHandleLock;
int g_iACP;
int g_iMajorVersion;
int g_iMinorVersion;
int g_iServicePackLevel;
int g_iTestFlags;
int g_iUITicksStep;
int g_iUIWaitTick;
int g_iWindowsBuild;
int pfnclose(__int64);
ipsPatchStateEnum ipsEnumFromPatchState(tagMSIPATCHSTATE);
iptEnum PathType(unsigned short const *);
iuiEnum GetStandardUILevel();
long (* OpenRootStorage)(unsigned short const *,ismEnum,IStorage * *);
long (* RegCreateKeyAPI)(HKEY__ *,unsigned short const *,unsigned long,unsigned short *,unsigned long,unsigned long,_SECURITY_ATTRIBUTES *,HKEY__ * *,unsigned long *);
long (* RegOpenKeyAPI)(HKEY__ *,unsigned short const *,unsigned long,unsigned long,HKEY__ * *);
long AicGetTokenForMSI(HWND__ *,unsigned short const *,_MSI_ACTION,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned long,unsigned short const * *,unsigned short const * *,unsigned long,int,void *,void * *);
long CreateAutoEnum(CAutoArgs &,MSI_AUTO_OBJID,long,unsigned short const *,unsigned short const *,long,long);
long CustomActionExceptionFilter(_EXCEPTION_POINTERS *);
long EnumMediaDisks(CAutoArgs &,unsigned short const *,unsigned short const *,tagMSIINSTALLCONTEXT,unsigned long);
long FIsKeySystemOrAdminOwned(HKEY__ *,bool &);
long GetFileSignatureInformation(unsigned short const *,unsigned long,_CERT_CONTEXT const * *,unsigned char *,unsigned long *);
long GetOrSetSourceInfo(CAutoArgs &,unsigned short const *,unsigned short const *,tagMSIINSTALLCONTEXT,unsigned long);
long GetPublishKeyByUser(unsigned short const *,iaaAppAssignment,HKEY__ * &,HKEY__ * &,IMsiString const * &,IMsiString const * &);
long GetSafeArrayOfCLSIDs(unsigned short *,tagSAFEARRAY * *);
long InitPropVariantFromString(unsigned short const *,tagPROPVARIANT *);
long InstallEngineExceptionFilter(_EXCEPTION_POINTERS *);
long InstallPromptForElevatedCredentials(IMsiDatabase &,iitEnum,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned long,unsigned short const * *,unsigned short const * *);
long MsiRegEnumValueW(HKEY__ *,unsigned long,CAPITempBufferRef<unsigned short> &,unsigned long *,unsigned long *,unsigned long *,CAPITempBufferRef<unsigned short> &,unsigned long *);
long MsiRegQueryValueExA(HKEY__ *,char const *,unsigned long *,unsigned long *,CAPITempBufferRef<char> &,unsigned long *);
long MsiRegQueryValueExW(HKEY__ *,unsigned short const *,unsigned long *,unsigned long *,CAPITempBufferRef<unsigned short> &,unsigned long *);
long OfflineOpenRootStorage(unsigned short const *,ismEnum,IStorage * *);
long OfflineRegCreateKey(HKEY__ *,unsigned short const *,unsigned long,unsigned short *,unsigned long,unsigned long,_SECURITY_ATTRIBUTES *,HKEY__ * *,unsigned long *);
long OfflineRegOpenKey(HKEY__ *,unsigned short const *,unsigned long,unsigned long,HKEY__ * *);
long ProcessTypeLibraryCore(unsigned short const *,unsigned long,unsigned short const *,unsigned short const *,bool,int *);
long PromptForElevatedCredentials(HWND__ *,void *,iitEnum,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned long,unsigned short const * *,unsigned short const * *,void * *);
long QueryInstanceCount();
long RealOpenRootStorage(unsigned short const *,ismEnum,IStorage * *);
long RemoveApplicationIfExists(ICOMAdminCatalog *,unsigned short * &);
long RunScriptAction(int,IDispatch *,MsiString,MsiString,unsigned short,HWND__ *,int &,IMsiRecord * *);
long SetMinProxyBlanketIfAnonymousImpLevel(IUnknown *);
long StringCbCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCbCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCbPrintfExW(unsigned short *,unsigned __int64,unsigned short * *,unsigned __int64 *,unsigned long,unsigned short const *,...);
long StringCbPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long StringCchCatA(char *,unsigned __int64,char const *);
long StringCchCatNW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCopyA(char *,unsigned __int64,char const *);
long StringCchCopyNA(char *,unsigned __int64,char const *,unsigned __int64);
long StringCchCopyNW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64);
long StringCchCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchLengthA(char const *,unsigned __int64,unsigned __int64 *);
long StringCchLengthW(unsigned short const *,unsigned __int64,unsigned __int64 *);
long StringCchPrintfA(char *,unsigned __int64,char const *,...);
long StringCchPrintfExW(unsigned short *,unsigned __int64,unsigned short * *,unsigned __int64 *,unsigned long,unsigned short const *,...);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long StringToDword(unsigned short const *,int,unsigned long *);
long WERCustomActionExceptionFilter(_EXCEPTION_POINTERS *);
long g_cInstances;
long g_cNoPowerdown;
long g_cNoScreenSaver;
long pfnseek(__int64,long,int);
rrkEnum MapAuthoredRegRootKeyToRootEnum(int);
scEnum g_scServerContext;
short LocalSQLInstallerError(unsigned short,unsigned long *,unsigned short *,unsigned short,unsigned short *,ibtBinaryType);
tagINSTALLSTATE GetComponentClientState(char const *,char const *,char const *,CAPITempBufferRef<char> &,unsigned long &,iaaAppAssignment *);
tagINSTALLSTATE GetComponentClientState(unsigned short const *,unsigned short const *,unsigned short const *,CAPITempBufferRef<unsigned short> &,unsigned long &,iaaAppAssignment *);
tagINSTALLSTATE GetComponentPath(char const *,char const *,char const *,CMsiCustomActionManager *,CAPITempBufferRef<char> &,bool,bool,CRFSCachedSourceInfo &,int,char const *,unsigned long,int *);
tagINSTALLSTATE GetComponentPath(unsigned short const *,unsigned short const *,unsigned short const *,CMsiCustomActionManager *,CAPITempBufferRef<unsigned short> &,bool,bool,CRFSCachedSourceInfo &,int,unsigned short const *,unsigned long,int *);
tagINSTALLSTATE GetComponentPathEx(unsigned short const *,unsigned short const *,unsigned short const *,tagMSIINSTALLCONTEXT,unsigned short *,unsigned long *);
tagINSTALLSTATE GetComponentPathInternal(char const *,char const *,char const *,CMsiCustomActionManager *,char *,unsigned long *,bool,bool,CRFSCachedSourceInfo &,int,char const *,unsigned long,char *,unsigned long *,unsigned long *,int *,iaaAppAssignment);
tagINSTALLSTATE GetComponentPathInternal(unsigned short const *,unsigned short const *,unsigned short const *,CMsiCustomActionManager *,unsigned short *,unsigned long *,bool,bool,CRFSCachedSourceInfo &,int,unsigned short const *,unsigned long,unsigned short *,unsigned long *,unsigned long *,int *,iaaAppAssignment);
tagINSTALLSTATE GetFusionPath(unsigned short const *,unsigned short *,unsigned long *,CAPITempBufferRef<unsigned short> &,int,iatAssemblyType,unsigned short *,unsigned long);
tagINSTALLSTATE GetProductState(unsigned short const *,Bool,Bool &,Bool &);
tagINSTALLSTATE MapInternalInstallState(iisEnum);
tagINSTALLSTATE QueryFeatureStatePacked(char const *,char const *,char const *,char const *,int,bool,bool,CRFSCachedSourceInfo &,iaaAppAssignment,iaaAppAssignment *,bool,tagINSTALLSTATE);
tagINSTALLSTATE QueryFeatureStatePacked(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,int,bool,bool,CRFSCachedSourceInfo &,iaaAppAssignment,iaaAppAssignment *,bool,tagINSTALLSTATE);
tagINSTALLSTATE UseFeaturePacked(char const *,char const *,bool);
tagINSTALLSTATE UseFeaturePacked(unsigned short const *,unsigned short const *,bool);
tagINSTALLSTATE _GetComponentPath(char const *,CMsiCustomActionManager *,char *,unsigned long *,int,char const *,bool,bool,unsigned long *,CRFSCachedSourceInfo &,int *);
tagINSTALLSTATE _GetComponentPath(unsigned short const *,CMsiCustomActionManager *,unsigned short *,unsigned long *,int,unsigned short const *,bool,bool,unsigned long *,CRFSCachedSourceInfo &,int *);
tagMSIDBERROR MapViewGetErrorReturnToError(iveEnum);
tagMSIINSTALLCONTEXT MsiInstallContextFromiaa(iaaAppAssignment);
tagTokenPrivilegesRefCount * g_pTokenPrivilegesRefCount;
unsigned __int64 GetInt64ValueFromHexSz(unsigned short const *);
unsigned char CleanupTempPackagesInternal(IMsiServices *,IMsiMessage &);
unsigned char g_bProductType;
unsigned int AddAttributeToElement(IXMLDOMElement *,unsigned short const *,unsigned short const *);
unsigned int ChangeSid(unsigned short const *,unsigned short const *,unsigned short const *);
unsigned int CheckAllHandlesClosed(bool,UniqueThreadID);
unsigned int CloseMsiHandle(unsigned long,UniqueThreadID);
unsigned int CreateChildElement(IXMLDOMDocument *,unsigned short const *,unsigned short const *,IXMLDOMElement *,IXMLDOMElement * *);
unsigned int CreateChildElementWithText(IXMLDOMDocument *,unsigned short const *,unsigned short const *,unsigned short const *,IXMLDOMElement *,IXMLDOMElement * *);
unsigned int DeleteCache(HKEY__ *,unsigned short *,unsigned long,DELETEDATA_TYPE);
unsigned int DeleteRegTree(HKEY__ *,unsigned short const *);
unsigned int DoAdvertiseProduct(unsigned short const *,unsigned short const *,unsigned short const *,idapEnum,unsigned short,unsigned long,unsigned long);
unsigned int DoAdvertiseScript(char const *,unsigned long,HKEY__ * *,int);
unsigned int DoAdvertiseScriptW(unsigned short const *,unsigned long,HKEY__ * *,int);
unsigned int DoCoInitialize();
unsigned int EnumAndProccess(HKEY__ *,unsigned short const *,unsigned int (*)(HKEY__ *,unsigned short *,unsigned long,DELETEDATA_TYPE),DELETEDATA_TYPE);
unsigned int EnumAssemblies(unsigned long,char const *,unsigned long,char *,unsigned long *,char *,unsigned long *);
unsigned int EnumAssemblies(unsigned long,unsigned short const *,unsigned long,unsigned short *,unsigned long *,unsigned short *,unsigned long *);
unsigned int EnumClientsEx(unsigned short const *,unsigned short const *,unsigned long,unsigned long,unsigned short * const,tagMSIINSTALLCONTEXT *,unsigned short *,unsigned long *);
unsigned int EnumComponentsEx(unsigned short const *,unsigned long,unsigned long,unsigned short * const,tagMSIINSTALLCONTEXT *,unsigned short *,unsigned long *);
unsigned int EnumInfo(unsigned long,char *,unsigned long,eetEnumerationType,char const *);
unsigned int EnumInfo(unsigned long,unsigned short *,unsigned long,eetEnumerationType,unsigned short const *);
unsigned int EnumPatchesEx(unsigned short const *,unsigned short const *,unsigned long,unsigned long,unsigned long,unsigned short * const,unsigned short * const,tagMSIINSTALLCONTEXT *,unsigned short *,unsigned long *,tagMSIPATCHSTATE *);
unsigned int EnumProductsEx(unsigned short const *,unsigned short const *,unsigned long,unsigned long,bool,unsigned short * const,tagMSIINSTALLCONTEXT *,unsigned short *,unsigned long *,tagINSTALLSTATE *);
unsigned int EnumSources(bool,unsigned short const *,unsigned short const *,unsigned long,unsigned long,unsigned long,unsigned long *,unsigned short *,unsigned long *,unsigned short *,unsigned long *);
unsigned int ExtractPatchTransformInfo(IMsiDatabase *,IMsiStorage *,IMsiString const &,IMsiString const &,int *,IMsiString const * *,IMsiString const * *,IMsiString const * *,IMsiString const * *,IMsiString const * *,unsigned short *);
unsigned int ExtractXMLBlob(unsigned short const *,IMsiServices &,CAPITempBufferRef<unsigned short> &);
unsigned int FillBufferA(IMsiString const *,char *,unsigned long *);
unsigned int FillBufferA(unsigned short const *,unsigned int,char *,unsigned long *);
unsigned int FillBufferW(IMsiString const *,unsigned short *,unsigned long *);
unsigned int FillBufferW(unsigned short const *,unsigned int,unsigned short *,unsigned long *);
unsigned int GetAttributeFromNode(IXMLDOMNode *,unsigned short const *,IMsiString const * *);
unsigned int GetChildElement(IXMLDOMNode *,IXMLDOMElement *,unsigned short const *,IMsiString const * *,IXMLDOMElement * *);
unsigned int GetGlobalEnumReadyForAccess(EnumEntityList * &);
unsigned int GetInfo(char const *,char const *,iaaAppAssignment,ptPropertyType,char const *,char *,unsigned long *,bool,tagINSTALLSTATE);
unsigned int GetInfo(unsigned short const *,unsigned short const *,iaaAppAssignment,ptPropertyType,unsigned short const *,unsigned short *,unsigned long *,bool,tagINSTALLSTATE);
unsigned int GetIntegerPolicyValue(iePolicyIndex,Bool,Bool *);
unsigned int GetLoggedOnUserCount();
unsigned int GetNextProductForKey(iaaAppAssignment,unsigned short const *,unsigned short const *,unsigned short *,unsigned int,bool);
unsigned int GetNextProductFromUserUnmanagedHive(unsigned short const *,unsigned short const *,unsigned short *,unsigned int,bool,bool *);
unsigned int GetNextUserInstalledProduct(unsigned short const *,unsigned short const *,unsigned short *,unsigned int,bool *);
unsigned int GetPackageCodeAndLanguageFromStorage(IMsiStorage &,unsigned short *,unsigned short *);
unsigned int GetPatchMetadataProperty(IMsiDatabase &,IMsiString const &,IMsiString const &,IMsiString const * &);
unsigned int GetProductCodeFromPackage(unsigned short const *,unsigned short *);
unsigned int GetProductListFromPatch(IMsiServices &,unsigned short const *,IMsiString const * &,IMsiString const * &,IMsiString const * &);
unsigned int GetStateManagerReadyForAccess();
unsigned int GetTag(IXMLDOMNode *,IMsiString const * *);
unsigned int GetTypeLibVersion(unsigned short const *,bool);
unsigned int IsProductManaged(unsigned short const *,bool &);
unsigned int LowerSharedDLLRefCount(HKEY__ *,unsigned short *,unsigned long,DELETEDATA_TYPE);
unsigned int MapActionReturnToError(iesEnum,unsigned long);
unsigned int MapInitializeReturnToUINT(ieiEnum);
unsigned int MapInstallActionReturnToError(iesEnum);
unsigned int MapString(IMsiDatabase &,IMsiDatabase &,unsigned int);
unsigned int MsiGetCodepage(int);
unsigned int MsiGetSystemDataCodepage();
unsigned int MsiGetSystemDirectory(unsigned short *,unsigned int,int);
unsigned int OpenAndValidateMsiStorage(unsigned short const *,stEnum,IMsiServices &,IMsiStorage * &,bool,unsigned short const *,SAFER_LEVEL_HANDLE__ * *);
unsigned int PatchCacheNotifySidChange(unsigned short const *,unsigned short const *);
unsigned int ProductVersionStringToInt(unsigned short const *);
unsigned int ProvideComponent(char const *,char const *,char const *,unsigned long,char *,unsigned long *,bool,CRFSCachedSourceInfo &);
unsigned int ProvideComponent(unsigned short const *,unsigned short const *,unsigned short const *,unsigned long,unsigned short *,unsigned long *,bool,CRFSCachedSourceInfo &);
unsigned int ProvideComponentFromDescriptor(char const *,unsigned long,char *,unsigned long *,unsigned long *,bool,bool);
unsigned int ProvideComponentFromDescriptor(unsigned short const *,unsigned long,unsigned short *,unsigned long *,unsigned long *,bool,bool);
unsigned int RemoveNullsFromString(IMsiString const &,IMsiString const * &);
unsigned int RemovePatches(unsigned short const *,unsigned short const *,tagINSTALLTYPE,unsigned short const *);
unsigned int RunEngine(ireEnum,unsigned short const *,unsigned short const *,unsigned short const *,iuiEnum,iioEnum,IMsiRecord const *);
unsigned int SequencingAPICoreW(IMsiString const &,unsigned short const *,unsigned short const *,tagMSIINSTALLCONTEXT,unsigned short const *,bool,IMsiServices *,unsigned long,tagMSIPATCHSEQUENCEINFOW *);
unsigned int SourceListGetInfo(unsigned short const *,unsigned short const *,unsigned long,unsigned long,unsigned short const *,unsigned short *,unsigned long *,CMsiSourceList *,bool);
unsigned int SourceListSetInfoInternal(unsigned short const *,unsigned short const *,tagMSIINSTALLCONTEXT,unsigned long,unsigned short const *,unsigned short const *);
unsigned int g_uiReturnCode;
unsigned int iColumnBit(int);
unsigned int pfnread(__int64,void *,unsigned int);
unsigned int pfnwrite(__int64,void *,unsigned int);
unsigned long AicpCreateBindingHandle(unsigned short *,int,void * *);
unsigned long AicpStartAIS(unsigned long);
unsigned long AppendStringToTempBuffer(CAPITempBufferRef<unsigned short> &,unsigned short const *,unsigned __int64);
unsigned long AppendStringToTempBufferN(CAPITempBufferRef<unsigned short> &,unsigned short const *,unsigned __int64);
unsigned long CallCustomDllEntrypoint(iesEnum (*)(unsigned long),bool,unsigned long);
unsigned long CleanupEEUIOnChangeOfOwnerThread(void *);
unsigned long CopyTempDatabase(unsigned short const *,IMsiString const * &,Bool &,IMsiString const * &,IMsiServices &,stEnum,Bool &,Bool);
unsigned long CreateCustomActionContext(int,IMsiString const &,IMsiString const &,unsigned short,IMsiMessage &);
unsigned long CreateMsiHandle(IUnknown *,int);
unsigned long CreateMsiProductHandle(IMsiEngine *);
unsigned long CreatePerUserFileLockMutex(unsigned short const *,void *,void * &);
unsigned long CustomExeThread(CActionThreadData *);
unsigned long CustomRemoteDllThread(CActionThreadData *);
unsigned long CustomRemoteScriptThread(CActionThreadData *);
unsigned long DownloadUrlFile(unsigned short const *,IMsiString const * &,bool &,int);
unsigned long EnumInstalledUsers(unsigned int,char *,unsigned long);
unsigned long EnumInstalledUsers(unsigned int,unsigned short *,unsigned long);
unsigned long EnumNewPatchesForSpecificInstance(IMsiServices *,unsigned short const *,iaaAppAssignment,unsigned int &,unsigned short *);
unsigned long EnumPatchesForSpecificInstance(unsigned short const *,unsigned short const *,iaaAppAssignment,unsigned long,unsigned short *,tagMSIPATCHSTATE *,CAPITempBufferRef<unsigned short> &,bool,unsigned long);
unsigned long EnumPatchesInternal(unsigned short const *,unsigned long,unsigned short *,unsigned long *,CAPITempBufferRef<unsigned short> &,bool,unsigned long);
unsigned long ExtractTargetProducts(unsigned short const *,IMsiString const * &,IMsiString const * &,IMsiString const * &);
unsigned long GetAdminSID(char * *);
unsigned long GetAppliedPatchInfo(iaaAppAssignment,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,CAPITempBufferRef<unsigned short> &);
unsigned long GetAppliedPatchInfoInternal(iaaAppAssignment,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,CAPITempBufferRef<unsigned short> &);
unsigned long GetAppliedPatchInfoInternal(iaaAppAssignment,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,CAPITempBufferRef<unsigned short> &,CRegHandle &);
unsigned long GetComponentStateEx(unsigned short const *,unsigned short const *,tagMSIINSTALLCONTEXT,unsigned short const *,tagINSTALLSTATE *);
unsigned long GetCurrentUserSID(CAPITempBufferRef<unsigned char> &);
unsigned long GetCurrentUserStringSID(CAPITempBufferRef<unsigned short> &);
unsigned long GetCurrentUserStringSID(IMsiString const * &);
unsigned long GetCurrentUserToken(void * &,bool &);
unsigned long GetFeatureStateEx(unsigned short const *,unsigned short const *,tagMSIINSTALLCONTEXT,unsigned short const *,tagINSTALLSTATE *);
unsigned long GetInfoEx(unsigned short const *,unsigned short const *,tagMSIINSTALLCONTEXT,bool,unsigned short const *,unsigned short *,unsigned long *);
unsigned long GetInstalledUserDataKeySz(unsigned short const *,char * const,unsigned long);
unsigned long GetInstalledUserDataKeySzByAssignmentType(iaaAppAssignment,char const *,char * const,unsigned long);
unsigned long GetInstalledUserDataKeySzByAssignmentType(iaaAppAssignment,unsigned short const *,unsigned short * const,unsigned long);
unsigned long GetInstalledUserDataKeySzByProduct(char const *,char * const,unsigned long,iaaAppAssignment,iaaAppAssignment *);
unsigned long GetLocalSystemSID(char * *);
unsigned long GetLockdownSecurityAttributes(_SECURITY_ATTRIBUTES &,bool);
unsigned long GetMD5HashFromFile(unsigned short const *,unsigned long * const,Bool,unsigned long *);
unsigned long GetMD5HashFromFileHandle(void *,unsigned long * const);
unsigned long GetPatchCacheRootDirectory(bool,CAPITempBufferRef<unsigned short> &,unsigned short const *);
unsigned long GetProductAssignmentType(char const *,iaaAppAssignment &);
unsigned long GetProductAssignmentType(unsigned short const *,iaaAppAssignment &);
unsigned long GetPropertyW(unsigned long,unsigned short const *,CAPITempBufferRef<unsigned short> &);
unsigned long GetSecureHiddenSecurityDescriptor(char * *,unsigned int *,Bool);
unsigned long GetSecureSecurityDescriptor(char * *,unsigned int *,Bool,bool);
unsigned long GetSecurityDescriptor(char *,unsigned long &,sdSecurityDescriptor,Bool);
unsigned long GetSecurityInformation(void *);
unsigned long GetStringSid(void * const,CAPITempBufferRef<unsigned short> &);
unsigned long GetTTFFieldFromFile(CHandle &,unsigned short,unsigned short,unsigned short,bool,unsigned int,CAPITempBufferRef<unsigned short> &);
unsigned long GetTokenInformation(void *,_TOKEN_INFORMATION_CLASS,void * *);
unsigned long GetUsageKeySecurityDescriptor(char * *,unsigned int *);
unsigned long GetUserSID(void *,char * const);
unsigned long GetUserSid(unsigned short const *,unsigned int,CAPITempBufferRef<unsigned short> &);
unsigned long IncrementFeatureUsagePackedA(char const *,char const *);
unsigned long IncrementFeatureUsagePackedW(unsigned short const *,unsigned short const *);
unsigned long LocalSQLConfigDataSource(HWND__ *,unsigned short,unsigned short const *,unsigned short const *,unsigned long,ibtBinaryType);
unsigned long LocalSQLConfigDriver(HWND__ *,unsigned short,unsigned short const *,unsigned short const *,unsigned short *,unsigned short,unsigned short *,ibtBinaryType);
unsigned long LocalSQLInstallDriverEx(int,unsigned short const *,unsigned short const *,unsigned short *,unsigned short,unsigned short *,unsigned short,unsigned long *,ibtBinaryType);
unsigned long LocalSQLInstallDriverManager(unsigned short *,unsigned short,unsigned short *,ibtBinaryType);
unsigned long LocalSQLInstallTranslatorEx(int,unsigned short const *,unsigned short const *,unsigned short *,unsigned short,unsigned short *,unsigned short,unsigned long *,ibtBinaryType);
unsigned long LocalSQLRemoveDriver(unsigned short const *,int,unsigned long *,ibtBinaryType);
unsigned long LocalSQLRemoveDriverManager(unsigned long *,ibtBinaryType);
unsigned long LocalSQLRemoveTranslator(unsigned short const *,unsigned long *,ibtBinaryType);
unsigned long LocalSdbQueryData(void *,unsigned long,unsigned short const *,unsigned long *,CTempBufferRef<unsigned char> &,unsigned long *);
unsigned long MSI_HRESULT_TO_WIN32(long);
unsigned long MsiGetFileAttributesEx(unsigned short const *,unsigned long *,unsigned __int64 *,_FILETIME *,_FILETIME *,_FILETIME *);
unsigned long MsiGetFileVersionInfoSize(unsigned short *,unsigned long *);
unsigned long MsiRegCreate64bitKey(HKEY__ *,unsigned short const *,unsigned long,unsigned short *,unsigned long,unsigned long,_SECURITY_ATTRIBUTES *,HKEY__ * *,unsigned long *);
unsigned long MsiRegOpen64bitKey(HKEY__ *,unsigned short const *,unsigned long,unsigned long,HKEY__ * *);
unsigned long MsiSetFileTime(unsigned short const *,_FILETIME *);
unsigned long MsiSetFileTime(void *,_FILETIME *,bool);
unsigned long MsiSyncFileTimes(void *,void *,bool);
unsigned long MsiWinHttpGetAutoLogonLevel();
unsigned long NestedInstallThread(CActionThreadData *);
unsigned long OpenAdvertisedFeatureKeyPacked(char const *,CRegHandle &,bool,iaaAppAssignment,iaaAppAssignment *);
unsigned long OpenAdvertisedPatchKeyPacked(char const *,CRegHandle &,bool,iaaAppAssignment,iaaAppAssignment *);
unsigned long OpenAdvertisedPatchKeyPacked(unsigned short const *,CRegHandle &,bool,iaaAppAssignment,iaaAppAssignment *);
unsigned long OpenAdvertisedProductKey(char const *,CRegHandle &,bool,iaaAppAssignment *);
unsigned long OpenAdvertisedProductKey(unsigned short const *,CRegHandle &,bool,iaaAppAssignment *);
unsigned long OpenAdvertisedProductKeyPacked(char const *,CRegHandle &,bool,iaaAppAssignment,iaaAppAssignment *);
unsigned long OpenAdvertisedProductKeyPacked(unsigned short const *,CRegHandle &,bool,iaaAppAssignment,iaaAppAssignment *);
unsigned long OpenAdvertisedSubKey(char const *,char const *,CRegHandle &,bool,iaaAppAssignment,iaaAppAssignment *);
unsigned long OpenAdvertisedSubKey(unsigned short const *,unsigned short const *,CRegHandle &,bool,iaaAppAssignment,iaaAppAssignment *);
unsigned long OpenAdvertisedSubKeyPacked(char const *,char const *,CRegHandle &,bool,iaaAppAssignment,iaaAppAssignment *);
unsigned long OpenAdvertisedSubKeyPacked(unsigned short const *,unsigned short const *,CRegHandle &,bool,iaaAppAssignment,iaaAppAssignment *);
unsigned long OpenEnumedUserInstalledComponentKey(unsigned int,char const *,CRegHandle &);
unsigned long OpenEnumedUserInstalledComponentKey(unsigned int,unsigned short const *,CRegHandle &);
unsigned long OpenEnumedUserInstalledKeyPacked(unsigned int,char const *,char const *,CRegHandle &);
unsigned long OpenEnumedUserInstalledKeyPacked(unsigned int,unsigned short const *,unsigned short const *,CRegHandle &);
unsigned long OpenEnumedUserInstalledProductInstallPropertiesKey(unsigned int,char const *,CRegHandle &);
unsigned long OpenEnumedUserInstalledProductInstallPropertiesKey(unsigned int,unsigned short const *,CRegHandle &);
unsigned long OpenEnumedUserInstalledProductInstallPropertiesKeyPacked(unsigned int,char const *,CRegHandle &);
unsigned long OpenEnumedUserInstalledProductInstallPropertiesKeyPacked(unsigned int,unsigned short const *,CRegHandle &);
unsigned long OpenInstalledComponentKeyForEnumeration(unsigned int,char const *,CRegHandle &);
unsigned long OpenInstalledComponentKeyForEnumeration(unsigned int,unsigned short const *,CRegHandle &);
unsigned long OpenInstalledComponentKeyPacked(char const *,char const *,char const *,CRegHandle &,bool,iaaAppAssignment);
unsigned long OpenInstalledComponentKeyPacked(unsigned short const *,unsigned short const *,unsigned short const *,CRegHandle &,bool,iaaAppAssignment);
unsigned long OpenInstalledFeatureKey(unsigned short const *,CRegHandle &,bool);
unsigned long OpenInstalledFeatureKeyPacked(char const *,char const *,CRegHandle &,bool,iaaAppAssignment,iaaAppAssignment *);
unsigned long OpenInstalledFeatureKeyPacked(unsigned short const *,unsigned short const *,CRegHandle &,bool,iaaAppAssignment,iaaAppAssignment *);
unsigned long OpenInstalledFeatureUsageKey(char const *,CRegHandle &,bool,unsigned long);
unsigned long OpenInstalledFeatureUsageKey(unsigned short const *,CRegHandle &,bool,unsigned long);
unsigned long OpenInstalledFeatureUsageKeyPacked(char const *,CRegHandle &,bool,unsigned long);
unsigned long OpenInstalledFeatureUsageKeyPacked(unsigned short const *,CRegHandle &,bool,unsigned long);
unsigned long OpenInstalledPatchKeyPacked(char const *,char const *,CRegHandle &,bool,iaaAppAssignment &);
unsigned long OpenInstalledPatchKeyPacked(unsigned short const *,unsigned short const *,CRegHandle &,bool,iaaAppAssignment &);
unsigned long OpenInstalledPatchKeyPackedByAssignmentType(char const *,iaaAppAssignment,char const *,CRegHandle &,bool);
unsigned long OpenInstalledPatchKeyPackedByAssignmentType(unsigned short const *,iaaAppAssignment,unsigned short const *,CRegHandle &,bool);
unsigned long OpenInstalledPerProductPatchesKeyPackedByAssignmentType(unsigned short const *,iaaAppAssignment,unsigned short const *,CRegHandle &,bool);
unsigned long OpenInstalledProductInstallPropertiesKey(char const *,CRegHandle &,bool);
unsigned long OpenInstalledProductInstallPropertiesKey(unsigned short const *,CRegHandle &,bool);
unsigned long OpenInstalledProductInstallPropertiesKeyPacked(char const *,char const *,CRegHandle &,bool);
unsigned long OpenInstalledProductInstallPropertiesKeyPacked(unsigned short const *,unsigned short const *,CRegHandle &,bool);
unsigned long OpenInstalledProductKeyPackedByAssignmentType(unsigned short const *,iaaAppAssignment,unsigned short const *,CRegHandle &,bool);
unsigned long OpenInstalledProductPatchesKey(unsigned short const *,unsigned short const *,CRegHandle &,bool);
unsigned long OpenInstalledProductTransformsKey(unsigned short const *,CRegHandle &,bool);
unsigned long OpenInstalledUserDataSubKeyPacked(char const *,char const *,char const *,CRegHandle &,bool,unsigned long,iaaAppAssignment,iaaAppAssignment *);
unsigned long OpenInstalledUserDataSubKeyPacked(unsigned short const *,unsigned short const *,unsigned short const *,CRegHandle &,bool,unsigned long,iaaAppAssignment,iaaAppAssignment *);
unsigned long OpenPolicyKey(HKEY__ * *,int);
unsigned long OpenSourceListKeyW(unsigned short const *,Bool,CRegHandle &,Bool,bool);
unsigned long OpenSpecificInstalledComponentKey(iaaAppAssignment,char const *,CRegHandle &,bool);
unsigned long OpenSpecificInstalledComponentKey(iaaAppAssignment,unsigned short const *,CRegHandle &,bool);
unsigned long OpenSpecificSourceListKeyPacked(char const *,char const *,iaaAppAssignment,Bool,CRegHandle &,Bool,bool);
unsigned long OpenSpecificSourceListKeyPacked(unsigned short const *,unsigned short const *,iaaAppAssignment,Bool,CRegHandle &,Bool,bool);
unsigned long OpenSpecificUsersAdvertisedSubKeyPacked(iaaAppAssignment,char const *,char const *,char const *,CRegHandle &,bool);
unsigned long OpenSpecificUsersAdvertisedSubKeyPacked(iaaAppAssignment,unsigned short const *,unsigned short const *,unsigned short const *,CRegHandle &,bool);
unsigned long OpenSpecificUsersSourceListKeyPacked(iaaAppAssignment,bool,unsigned short const *,unsigned short const *,CRegHandle &,Bool,bool &,bool &,bool *,bool);
unsigned long OpenSpecificUsersWritableAdvertisedProductOrPatchKey(iaaAppAssignment,bool,unsigned short const *,unsigned short const *,CRegHandle &,bool,bool *);
unsigned long OpenUserKey(HKEY__ * *,bool,unsigned long);
unsigned long OpenUserToken(void * &,bool *);
unsigned long OpenWritableAdvertisedProductKey(unsigned short const *,CRegHandle &,bool);
unsigned long ResolveSourceWorkerThread(void *);
unsigned long SafeFillOutputBufferW(unsigned short *,unsigned long *,CAPITempBufferRef<unsigned short> &);
unsigned long ShlwapiUrlHrToWin32Error(long);
unsigned long ShutdownAppsThreadStart(void *);
unsigned long SourceListAddSource(unsigned short const *,unsigned short const *,isrcEnum,unsigned short const *);
unsigned long SourceListClearByType(unsigned short const *,unsigned short const *,isrcEnum);
unsigned long SourceListClearLastUsed(unsigned short const *,unsigned short const *);
unsigned long SourceListUpdateInternal(bool,unsigned short const *,unsigned short const *,tagMSIINSTALLCONTEXT,unsigned long,unsigned long,unsigned short const *,unsigned short const *,unsigned long,iSrcOpEnum);
unsigned long StartFDIServer(void *);
unsigned long TransferData(IMsiString const &,unsigned short *,unsigned long *);
unsigned long UlExtractTTFVersionFromSz(unsigned short const *);
unsigned long ValidateSource(char const *,unsigned int,bool,CAPITempBufferRef<char> &,bool &);
unsigned long ValidateSource(unsigned short const *,unsigned int,bool,CAPITempBufferRef<unsigned short> &,bool &);
unsigned long WERGetFullSharedMemoryName(void *,unsigned short *,unsigned long);
unsigned long WaitOnClientProcessThread(void *);
unsigned long WinHttpDownloadUrlFile(unsigned short const *,IMsiString const * &,int);
unsigned long WinSqmEventWrite(_EVENT_DESCRIPTOR const *,unsigned long,_EVENT_DATA_DESCRIPTOR *);
unsigned long g_dwImpersonationSlot;
unsigned long g_dwLogMode;
unsigned long g_dwThreadImpersonationSlot;
unsigned long g_samRead;
unsigned long iesEnumToDWORD(iesEnum);
unsigned short * AeTrimString(unsigned short *);
unsigned short * AllocateString(unsigned int,Bool,IMsiString const * &);
unsigned short * szRegCLSID;
unsigned short * szRegDescription;
unsigned short * szRegFilePath;
unsigned short * szRegProgId;
unsigned short ExtractDriveLetter(unsigned short const *);
unsigned short SkipWhiteSpace(unsigned short const * &);
unsigned short const * * g_rgszPatchStateLogStrings;
unsigned short const * * pszTOKEN_PRIVILEGES_SD_READ;
unsigned short const * * pszTOKEN_PRIVILEGES_SD_WRITE;
unsigned short const * * rgszAllowedProperties;
unsigned short const * * rgszPropsToPassToNested;
unsigned short const * * rgszRegData;
unsigned short const * * rgszixo;
unsigned short const * const * const rgszDescription;
unsigned short const * const * const rgszProgId;
unsigned short const * const szPendingFileRenameOperationsValue;
unsigned short const * const szSessionManagerKey;
unsigned short g_wArchitecture;
unsigned short g_wPackagePlatform;
urtEnum g_urtLoadFromURTTemp;
void * AllocObject(unsigned __int64);
void * CreateDiskPromptMutex();
void * MsiCreateFileWithUserAccessCheck(unsigned short const *,_SECURITY_ATTRIBUTES *,unsigned long,bool,ielfEnum);
void * OpenFontFile(unsigned short const *,bool &,unsigned int &);
void * OpenSecuredTempFile(bool,unsigned short *);
void * g_hCleanupEEUIThread;
void * g_hEndTransactionEvent;
void * g_hFDIInterfaceEvent;
void * g_hFDIServerEvent;
void * g_hPowerRequest;
void * operator new(unsigned __int64);
void * pfnalloc(unsigned long);
void AddOpToList(int &,CTempBufferRef<int> &,int);
void AppendSeparator(MsiString &,isfEnum);
void ApplySharedDllCountToken(MsiString &);
void BuildFullRegKey(HKEY__ * const,unsigned short const *,ibtBinaryType,IMsiString const * &);
void CheckOldObsoletedPatches(IMsiString const &,unsigned short const *,int,int,CComPointer<IMsiCursor> &,IMsiCursor *,int,int,int,int,int);
void CleanupEmbeddedUI(bool);
void ClearEmptyTree(HKEY__ *,unsigned short const *,int);
void ClearNoPowerdown();
void ConvertMsiStringToStream(IMsiString const &,IMsiStream &);
void CopyRecordStringsToRecord(IMsiRecord const &,IMsiRecord &);
void CopyStreamToString(IMsiStream &,IMsiString const * &);
void CreateCabinetStreamList(IMsiEngine &,IMsiString const * &);
void CreateCustomActionManager(bool);
void DateTimeToString(int,unsigned short *,unsigned long);
void DebugCustomActionMsg();
void DebugDumpDirectoryTable(IMsiTable &,bool,int,int,int,int);
void DebugDumpIxo(ixoEnum,IMsiRecord &);
void DebugString(int,unsigned short,int,char const *,char const *,char const *,char const *,char const *,char const *,char const *,unsigned long,void *);
void DebugString(int,unsigned short,int,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned long,void *);
void DestroyMsiVolumeList(bool);
void DestroyScriptSite(CScriptSite * &);
void DoClose();
void DoOpenCabinet();
void DumpEnvironment(unsigned short const *);
void EnableScreenSaver(bool);
void FillProgressRecord(IMsiRecord *,int,__int64,__int64);
void Finish();
void FormatEventLogData(unsigned short const *,IMsiString const * &,unsigned int);
void FormatSegment(unsigned short const *,unsigned short const *,CTempBufferRef<unsigned short> &,int &,Bool,Bool &,Bool &,Bool &,int (*)(unsigned short const *,int,CTempBufferRef<unsigned short> &,Bool &,Bool &,Bool &,IUnknown *),IUnknown *,int (*)[2],int *);
void FreeGlobals();
void FreeMsiMalloc(bool);
void FreeObject(void *);
void FreePolicyTable();
void GetStringPolicyValue(iePolicyIndex,Bool,CAPITempBufferRef<unsigned short> &);
void GetTempDirectory(CAPITempBufferRef<unsigned short> &);
void GetVersionInfo(int *,int *,int *,int *,bool *,unsigned short *,unsigned char *,bool *);
void GetWindowTitles(IMsiRecord *,IMsiRecord * *);
void HandleError();
void HeapMemFree(void *);
void InitializeModule();
void InitializeMsiMalloc();
void LocalDebugOutput(unsigned short const *,int,CMsiCustomActionManager *);
void MainEventLoop();
void MsiDestroyFont(HFONT__ * &);
void PopulateDomainBasedAllowLockdownMediaDefault();
void RemoveObjectData(int);
void ReportToEventLogCoreW(unsigned short,unsigned short,unsigned long,void *,unsigned short,unsigned long,unsigned short const * *,void *);
void ReportToEventLogW(unsigned short,int,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned long,void *);
void ResetCachedPolicyValuesW();
void ResolveComponentPathForLogging(CAPITempBufferRef<char> &);
void ResolveComponentPathForLogging(CAPITempBufferRef<unsigned short> &);
void RetrieveNumberFormat(_numberfmtW *);
void SetDiagnosticMode();
void SetEngineInitialImpersonationCount();
void SetNoPowerdown();
void SetProcessorProperty(IMsiCursor &,isppEnum);
void SetUnhandledError(IMsiRecord *);
void SetWindowAppUserModelID(HWND__ *,unsigned short const *);
void StopFdiImpersonating(bool);
void StopImpersonating(bool);
void TerminateModule();
void ThreadLogActionReturn(CActionThreadData *,unsigned long);
void Unbind(UnbindStruct *,HINSTANCE__ * &,int &,bool &);
void UnbindLibraries();
void WaitForCustomActionThreads(IMsiEngine *,Bool,IMsiMessage &);
void WinSqmAddToStream(_GUID *,unsigned long,unsigned long,_SQM_STREAM_ENTRY *);
void WinSqmEndSession(_GUID *);
void _WinSqmDWORDEvent(_EVENT_DESCRIPTOR const *,_GUID *,unsigned long,unsigned long);
void operator delete(void *);
void pfnfree(void *);
