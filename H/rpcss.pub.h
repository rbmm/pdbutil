struct ActivationProperties
{
	ActivationProperties();
	long AddSerializableIfs(SerializableProperty *);
	long GetPropertyInfo(_GUID const &,void * *);
	long ReturnClass(_GUID const &,SerializableProperty *);
	long UnSerializeCallBack(_GUID const &,SerializableProperty * *);
	virtual long DisconnectObject(unsigned long);
	virtual long GetCatalogObject(_GUID const &,void * *);
	virtual long GetLocalBlob(void * *);
	virtual long GetMarshalFlags(unsigned long *);
	virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
	virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
	virtual long GetUnserialized(_GUID const &,void * *,unsigned long *,unsigned long *);
	virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ReleaseMarshalData(IStream *);
	virtual long SetDestCtx(unsigned long);
	virtual long SetLocalBlob(void *);
	virtual long SetMarshalFlags(unsigned long);
	virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~ActivationProperties();
	void SetSerializableIfs(unsigned long,SerializableProperty *);
};

struct ActivationPropertiesIn
{
	ActivationPropertiesIn(int);
	long GetContextInfo(ContextInfo * *);
	long GetInstantiationInfo(InstantiationInfo * *);
	long GetPersistInfo(InstanceInfo * *);
	long GetSecurityInfo(SecurityInfo * *);
	long GetServerLocationInfo(ServerLocationInfo * *);
	long GetSpecialProperties(SpecialProperties * *);
	long GetWinRTActivationProperties(WinRTActivationProperties * *);
	virtual long AddRequestedIIDs(unsigned long,_GUID *);
	virtual long DelegateCIAndGetCF(IUnknown *,IActivationPropertiesOut * *,IClassFactory * *);
	virtual long DelegateCreateInstance(IUnknown *,IActivationPropertiesOut * *);
	virtual long DelegateGetClassObject(IActivationPropertiesOut * *);
	virtual long GetActivationFlags(unsigned long *);
	virtual long GetActivationID(_GUID *);
	virtual long GetCOMVersion(tagCOMVERSION *);
	virtual long GetClass(_GUID const &,SerializableProperty * *,int,int *);
	virtual long GetClassInfoW(_GUID const &,void * *);
	virtual long GetClientToken(void * *);
	virtual long GetClsctx(unsigned long *);
	virtual long GetClsid(_GUID *);
	virtual long GetDestCtx(unsigned long *);
	virtual long GetIndex(int *);
	virtual long GetRequestedIIDs(unsigned long *,_GUID * *);
	virtual long GetReturnActivationProperties(ActivationPropertiesOut * *);
	virtual long GetReturnActivationProperties(IUnknown *,IActivationPropertiesOut * *);
	virtual long GetStage(tagACTIVATION_STAGE *);
	virtual long PrivGetReturnActivationProperties(IPrivActivationPropertiesOut * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetActivationFlags(unsigned long);
	virtual long SetClassInfo(IUnknown *);
	virtual long SetClsctx(unsigned long);
	virtual long SetConstructFromFile(unsigned short *,unsigned long);
	virtual long SetContextInfo(IContext *,IContext *);
	virtual long SetStageAndIndex(tagACTIVATION_STAGE,int);
	virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~ActivationPropertiesIn();
};

struct ActivationPropertiesOut
{
	struct OutSerializer
	{
		long ClearOutSerializer();
		virtual long GetCLSID(_GUID *);
		virtual long GetSize(void *,unsigned long *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long SerializableQueryInterface(_GUID const &,void * *);
		virtual long Serialize(void *);
		virtual long UnSerialize(void *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
		void ClearObject();
		void UnmarshalAtIndex(unsigned long,bool);
	};

	ActivationPropertiesOut(int);
	virtual long Clear();
	virtual long GetActivationID(_GUID *);
	virtual long GetClass(_GUID const &,SerializableProperty * *,int,int *);
	virtual long GetMarshalledResults(unsigned long *,_GUID * *,long * *,tagMInterfacePointer * * *);
	virtual long GetObjectInterface(_GUID const &,unsigned long,void * *);
	virtual long GetObjectInterfaces(unsigned long,unsigned long,tagMULTI_QI *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RemoveRequestedIIDs(unsigned long,_GUID *);
	virtual long SetMarshalledResults(unsigned long,_GUID *,long *,tagMInterfacePointer * *);
	virtual long SetObjectInterfaces(unsigned long,_GUID *,IUnknown *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~ActivationPropertiesOut();
};

struct AutoBlob
{
	long Initialize(tagBLOB const &);
	~AutoBlob();
};

class BuiltInClassCache
{
	static void DeleteTree(_RTL_SPLAY_LINKS *);
};

class CAccessInfo
{
	void * IdentifyAccessWorker(SecurityDescriptorOwner,unsigned int,void * *,unsigned long *);
public:
	void * IdentifyAccess(SecurityDescriptorOwner,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long);
	~CAccessInfo();
};

struct CAcidPackageSidKey
{
	int ConstCompare(CTableKey const &);
	long Initialize(HSTRING__ *,HSTRING__ *,void *);
	virtual int Compare(CTableKey &);
	virtual unsigned long Hash();
	~CAcidPackageSidKey();
};

struct CActivatableClassData
{
	CActivatableClassData(HSTRING__ *,HSTRING__ *,CToken *,unsigned __int64,IComClassInfo *,long *);
	long Load(unsigned long);
	virtual CNamedObject * ServerInitializedEvent(void *);
	virtual CNamedObject * ServerRegisterEvent(void *);
	virtual long LaunchActivatorServer(CToken *,unsigned short const *,unsigned long,ActivationPropertiesIn *,unsigned long,int,int,unsigned short const *,unsigned long,void * *,unsigned long *,int *);
	virtual long LaunchRunAsServer(CToken *,int,ActivationPropertiesIn *,unsigned long,unsigned long,unsigned short const *,unsigned __int64,unsigned __int64,_GUID const *,CToken *,tagBLOB *,void *,void *,void *,void * *,unsigned long *,void * *,int *);
	virtual long LaunchService(CToken *,int,unsigned long,unsigned long *);
	virtual void GetIdentifierStringForLogging(HSTRING__ * *);
	virtual ~CActivatableClassData();
	void FillKernelWinRTLaunchInfo(KernelWinRTLaunchInfo *);
};

struct CActivatableClassReg
{
	CActivatableClassReg(HSTRING__ *,HSTRING__ *,unsigned long,long *);
};

struct CActivationState
{
	CActivationState(_GUID,unsigned long,unsigned long,void *);
	~CActivationState();
};

struct CActivationStateList
{
	unsigned long QueryPIDForActivation(unsigned long,_GUID);
	void Insert(CActivationState *);
	void Remove(CActivationState *);
	void ZeroPID(unsigned long);
};

class CAddrExclusionMgr
{
	int IsExcludedAddress(unsigned short *);
public:
	long BuildExclusionDSA(tagDUALSTRINGARRAY *,tagDUALSTRINGARRAY * *);
	long EnableDisableDynamicTracking(int);
	long GetExclusionList(unsigned long *,unsigned short * * *);
	long SetExclusionList(unsigned long,unsigned short * *);
};

class CAddrRefreshMgr
{
	static void TimerCallbackFn(void *,unsigned char);
	void CheckForIPV6Installed();
	void RegisterForAddrChangesHelper(CAddrRefreshMgr::_ADDRESS_CHANGE_DATA *);
	void WSAStartupHelper();
public:
	int IsIPV6Installed();
	void RegisterForAddressChanges();
};

struct CAppidData
{
	CAppidData(unsigned short *,CToken *,unsigned __int64);
	CNamedObject * ServerInitializedEvent();
	CNamedObject * ServerRegisterEvent();
	int CertifyServer(CProcess *);
	int IsInteractiveUser();
	long Load(IComProcessInfo *,unsigned long);
	tagPreferredServerBitness GetPreferredServerBitness();
	tagRunAsType GetRunAsType();
	void Purge();
	~CAppidData();
};

class CBList
{
	void * Remove(unsigned long);
public:
	CBList(unsigned short);
	int Member(void *);
	long Insert(void *);
	void * Remove(void *);
	~CBList();
};

struct CBListIterator
{
	CBListIterator(CBList *);
	void * Next();
	void RemoveCurrent();
};

struct CCache
{
	long AddElement(unsigned long,unsigned char *,unsigned short,unsigned short *,IUnknown *,IUnknown * *);
	long AddElement(unsigned long,unsigned short,unsigned char * *,unsigned short const *,unsigned short *,IUnknown *,IUnknown * *);
	long Flush(unsigned short);
	long GetElement(unsigned long,unsigned char *,unsigned short,unsigned short *,IUnknown * *);
	long GetElement(unsigned long,unsigned short,unsigned char * *,unsigned short const *,unsigned short *,IUnknown * *);
};

class CClassData
{
	int IsAppidInExemptList(HKEY__ *,int *);
	int RegisterProcessWithPsmAndResume(_PROCESS_INFORMATION *,int);
	int RegisterProcessWithPsmForAttribution(_PROCESS_INFORMATION *);
	long AddAppPathsToEnv(unsigned short *,unsigned long,unsigned short * *);
	long AddDebugEnvironmentBlock(unsigned short *,unsigned short *,unsigned short * *);
	long DuplicateAndAdjustInteractiveUserTokenILIfNecessary(CToken *,void * *);
	long GetAAASaferToken(CToken *,void * *);
	long GetLaunchCommandLine(unsigned short * *);
protected:
	CClassData(CToken *,unsigned __int64,IComClassInfo *);
	long LoadCommonData(unsigned long);
public:
	CNamedObject * ServerLaunchMutex(_ACTIVATION_PARAMS *);
	_SECURITY_DESCRIPTOR * LaunchPermission();
	bool IsFullTrustActivateAsPackage();
	bool IsUserService();
	int CertifyServer(CProcess *);
	int ExemptAppFromActivationSecurityCheck(int);
	int HasActivateAsPackage();
	int HasRunAs();
	int IsComplusProxyApplication();
	int IsInteractiveUser();
	int LaunchOrActivationAllowed(void *,int,int,int,unsigned long,CToken *,unsigned long,CToken *);
	long IsEnabledRemote();
	long LaunchDebugger(CToken *,unsigned long,unsigned long,unsigned __int64,unsigned short const *,_PROCESS_INFORMATION *);
	long PrivilegedLaunchActivatorServer(CToken *,unsigned short *,unsigned long,int,unsigned long,int,unsigned short *,unsigned long,void * *,unsigned long *,int *);
	long PrivilegedLaunchIsActivateAsIUAllowed(CToken *,int);
	long PrivilegedLaunchRunAsServer(CToken *,int,unsigned long,unsigned long,unsigned long,unsigned short *,unsigned __int64,unsigned __int64,_GUID const *,void *,tagBLOB *,void *,void *,void *,void * *,unsigned long *,void * *,int *);
	long PrivilegedLaunchService(CToken *,unsigned long,unsigned long *);
	long SetPsmActivationType(CToken *,ActivationPropertiesIn *);
	static long LoadKernelActivatableClassData(KernelWinRTLaunchInfo,CToken *,unsigned __int64,CClassData * *);
	static long LoadKernelClsidData(tagKernelLaunchInfo,CToken *,unsigned __int64,CClassData * *);
	tagRunAsType GetRunAsType();
	unsigned long AppIDFlags();
	unsigned short * RunAsDomain();
	unsigned short * RunAsUser();
	unsigned short * Service();
	virtual ~CClassData();
	void Purge();
};

struct CClassicComClassData
{
	CClassicComClassData(_GUID const &,CToken *,unsigned __int64,IComClassInfo *);
	long Load(unsigned long);
	virtual CNamedObject * ServerInitializedEvent(void *);
	virtual CNamedObject * ServerRegisterEvent(void *);
	virtual long LaunchActivatorServer(CToken *,unsigned short const *,unsigned long,ActivationPropertiesIn *,unsigned long,int,int,unsigned short const *,unsigned long,void * *,unsigned long *,int *);
	virtual long LaunchRunAsServer(CToken *,int,ActivationPropertiesIn *,unsigned long,unsigned long,unsigned short const *,unsigned __int64,unsigned __int64,_GUID const *,CToken *,tagBLOB *,void *,void *,void *,void * *,unsigned long *,void * *,int *);
	virtual long LaunchService(CToken *,int,unsigned long,unsigned long *);
	virtual void GetIdentifierStringForLogging(HSTRING__ * *);
	void FillKernelLaunchInfo(tagKernelLaunchInfo *);
};

struct CClassicComServerTable
{
	CClassicComServerTable(long &,EnumEntryType);
	CClassicComServerTableEntry * Create(_GUID &);
	CClassicComServerTableEntry * GetOrCreate(_GUID &);
	CClassicComServerTableEntry * Lookup(_GUID &);
};

class CClassicComServerTableEntry
{
	virtual void * GetSIDForServerIdentity();
	virtual void AddEntryToProcess(CServerListEntry *);
	virtual void GetIdentifierStringForLogging(HSTRING__ * *);
public:
	CClassicComServerTableEntry(long &,_GUID *,EnumEntryType);
	virtual unsigned long Release();
	virtual void AddRef();
};

struct CClientOid
{
	void ClientRelease();
};

struct CClientOxid
{
	CClientOxid(unsigned __int64 &,CMid *,unsigned short,unsigned short *,CProcess *);
	long GetInfo(tagOXID_INFO *);
	long UpdateInfo(tagOXID_INFO const *);
	virtual unsigned long Release();
	virtual void Reference();
	virtual ~CClientOxid();
};

struct CClientSet
{
	CClientSet(CMid *,CToken *);
	CPListElement * Remove();
	long PingServer();
	void FinalClientSetCleanup();
	void Insert();
};

class CComCatalog
{
	long GetClassInfoInternal(unsigned long,IUserToken *,_GUID const &,_GUID const &,void * *,void *);
	long GetProcessInfoInternal(unsigned long,IUserToken *,_GUID const &,_GUID const &,void * *);
	long GetProxyStubCLSIDFromPackageScopedCatalog(unsigned long,_GUID const &,IComCatalogInternal *,_GUID *);
	long GetProxyStubClassInfoFromPackageScopedCatalog(unsigned long,_GUID const &,IComCatalogInternal *,CCache *,_GUID const &,void * *);
	long GetRuntimeClassInfoFromPackageScopedCatalog(unsigned long,IUserToken *,unsigned short const *,unsigned short const *,KnownClsidAndScope const *,int,IComCatalogInternal *,CCache *,_GUID const &,void * *,IComCatalogSCM *);
	long GetServerInfoFromPackageScopedCatalog(unsigned long,IUserToken *,unsigned short const *,unsigned short const *,IComCatalogInternal *,CCache *,_GUID const &,void * *,IComCatalogSCM *);
	long TryToLoadCLB();
	static bool MatchServerArchitectureAndExclusiveRegViewFlag(IUnknown *,unsigned long);
	static int ComPlusEnabled();
	static long CheckForRefresh(IUserToken *,IUnknown *,CCache *);
	static long CreateNoClassInfo(IUserToken *,_GUID const &,_GUID const &,void * *);
	static long HashAndSizeString(unsigned short const *,unsigned long *,unsigned short *);
	static long InitializeReadCache();
	static std::atomic<int> ms_fComPlusCatalogsResolved;
	static std::atomic<int> ms_fComPlusEnabled;
	static std::atomic<int> ms_fComPlusEnabledInitialized;
	static std::atomic<int> ms_fInitialized;
	static unsigned long FlagsForCacheKey(unsigned long);
public:
	CComCatalog();
	long DeInit();
	long InitializeCatalogIfNeccessary();
	virtual HKEY__ * GetHKCR();
	virtual bool IsTypeLibRegistered(_GUID const &,HSTRING__ *,unsigned long);
	virtual long FlushCache();
	virtual long FlushIdleEntries();
	virtual long GetApplicationInfo(IUserToken *,_GUID const &,_GUID const &,void * *);
	virtual long GetApplicationInfo(IUserToken *,_GUID const &,_GUID const &,void * *,void *);
	virtual long GetApplicationInfo(_GUID const &,_GUID const &,void * *);
	virtual long GetApplicationInfoForExe(IUserToken *,unsigned short *,_GUID const &,void * *);
	virtual long GetApplicationInfoForExe(unsigned short *,_GUID const &,void * *);
	virtual long GetAutoConvertTo(_GUID const &,_GUID *);
	virtual long GetClassInfoByApplication(_GUID const &,_GUID const &,_GUID const &,_GUID const &,void * *);
	virtual long GetClassInfoByApplication(unsigned long,IUserToken *,_GUID const &,_GUID const &,_GUID const &,_GUID const &,void * *,void *);
	virtual long GetClassInfoByPartition(_GUID const &,_GUID const &,_GUID const &,void * *);
	virtual long GetClassInfoByPartition(unsigned long,IUserToken *,_GUID const &,_GUID const &,_GUID const &,void * *,void *);
	virtual long GetClassInfoFromProgId(IUserToken *,unsigned short *,_GUID const &,void * *);
	virtual long GetClassInfoFromProgId(IUserToken *,unsigned short *,_GUID const &,void * *,void *);
	virtual long GetClassInfoFromProgId(unsigned short *,_GUID const &,void * *);
	virtual long GetClassInfoW(_GUID const &,_GUID const &,void * *);
	virtual long GetClassInfoW(unsigned long,IUserToken *,_GUID const &,_GUID const &,void * *);
	virtual long GetClassInfoW(unsigned long,IUserToken *,_GUID const &,_GUID const &,void * *,void *);
	virtual long GetCounterpartIid(_GUID const &,bool,_GUID *);
	virtual long GetHelpDirectory(_GUID const &,unsigned long,unsigned long,unsigned long,HSTRING__ * *);
	virtual long GetIidProxyStubRegistrationInfo(_GUID const &,HSTRING__ * *,UniversalMarshalerType *,_GUID *);
	virtual long GetIidTypeLibRegistrationInfo(_GUID const &,HSTRING__ * *);
	virtual long GetInterfaceInfo(IUserToken *,_GUID const &,_GUID const &,void * *);
	virtual long GetInterfaceInfo(IUserToken *,_GUID const &,_GUID const &,void * *,void *);
	virtual long GetInterfaceInfo(_GUID const &,_GUID const &,void * *);
	virtual long GetNativeRegistryCatalog(_GUID const &,void * *);
	virtual long GetNonNativeRegistryCatalog(_GUID const &,void * *);
	virtual long GetPackagedComClassIdIterator(IPackagedComClassIdIterator * *);
	virtual long GetPackagedComProgIdIterator(IPackagedComProgIdIterator * *);
	virtual long GetPackagedProxyStubClassInfo(_GUID const &,HSTRING__ *,IComClassInfo * *);
	virtual long GetProcessInfo(IUserToken *,_GUID const &,_GUID const &,void * *,void *);
	virtual long GetProcessInfo(_GUID const &,_GUID const &,void * *);
	virtual long GetProcessInfo(unsigned long,IUserToken *,_GUID const &,_GUID const &,void * *);
	virtual long GetProxyStubCLSIDForInterface(unsigned long,_GUID const &,unsigned short const *,_GUID *);
	virtual long GetRetQueueInfo(IUserToken *,unsigned short *,_GUID const &,void * *);
	virtual long GetRetQueueInfo(unsigned short *,_GUID const &,void * *);
	virtual long GetRuntimeClassInfo(unsigned long,IUserToken *,unsigned short const *,unsigned short const *,KnownClsidAndScope const *,int,_GUID const &,void * *,IComCatalogSCM *);
	virtual long GetServerGroupInfo(IUserToken *,_GUID const &,_GUID const &,void * *);
	virtual long GetServerGroupInfo(_GUID const &,_GUID const &,void * *);
	virtual long GetServerInfo(unsigned long,IUserToken *,unsigned short const *,unsigned short const *,_GUID const &,void * *,IComCatalogSCM *);
	virtual long GetTreatAsClass(_GUID const &,_GUID *);
	virtual long GetTypeLibPath(_GUID const &,unsigned long,unsigned long,bool,unsigned long,HSTRING__ * *,unsigned long *,unsigned long *);
	virtual long GetTypeLibRegistrationIterator(ITypeLibRegistrationIterator * *);
	virtual long GetTypeLibrary(IUserToken *,_GUID const &,_GUID const &,void * *);
	virtual long GetTypeLibrary(_GUID const &,_GUID const &,void * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RefreshComPlusEnabled();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	void FlushProviderCaches();
	~CComCatalog();
};

class CComClassInfo
{
	long GetDarwinIdentifier(int,HKEY__ *,unsigned short const *,unsigned short * *);
	long GetExeArchitectureFromRegString(unsigned short const *,unsigned long *);
	long GetPathFromDarwinDescriptor(int,unsigned short *,unsigned short * *);
	long Initialize(HKEY__ *,HKEY__ *,IUserToken *,int,HKEY__ *,unsigned long,int,IComCatalogSCM *,bool,bool,bool,bool,bool,unsigned long);
	long InitializeForInprocActivations(int,HKEY__ *,bool,bool);
	long InitializeForOutOfProcActivations(int,IUserToken *,HKEY__ *,unsigned long,IComCatalogSCM *,bool,bool,bool,bool,unsigned long);
	long InitializeInprocHandlers(HKEY__ *,bool);
	long InitializeLUAAndDisplaySettings(HKEY__ *);
	long InitializeLocalServer(int,HKEY__ *,bool,unsigned long);
	long InitializeSurrogateInfo(HKEY__ *,tagProcessType,bool,bool,unsigned long);
	long InitializeThreadingModel(HKEY__ *);
public:
	CComClassInfo(RegistrationSource);
	long FinalConstruct(IUserToken *,HKEY__ *,_GUID const *,unsigned short *,HKEY__ *,unsigned long,HKEY__ *,unsigned long,int,unsigned long,IComCatalogSCM *,bool,bool,bool,bool,bool,bool,unsigned long,bool,unsigned short);
	virtual long CanBeCached(int *);
	virtual long GetBinaryName(unsigned short * *);
	virtual long GetClassContext(tagCLSCTX,tagCLSCTX *);
	virtual long GetClassNameW(unsigned short const * *);
	virtual long GetConfiguredClsid(_GUID * *);
	virtual long GetDeployingPackageName(unsigned short const * *);
	virtual long GetDisplayName(unsigned short * *);
	virtual long GetExecutionPackageName(unsigned short const * *);
	virtual long GetIconReference(unsigned short * *);
	virtual long GetImplementedClsid(_GUID * *);
	virtual long GetLUAEnabledSetting(int *);
	virtual long GetLocalServerType(tagLocalServerType *);
	virtual long GetModulePath(tagCLSCTX,unsigned short * *);
	virtual long GetOutofprocServerBinaryArchitecture(unsigned long *);
	virtual long GetPreferredServerBitness(unsigned long *);
	virtual long GetProcess(_GUID const &,void * *);
	virtual long GetProgId(unsigned short * *);
	virtual long GetRemoteServerName(unsigned short * *);
	virtual long GetServerExecutable(unsigned short * *);
	virtual long GetSource(RegistrationSource *);
	virtual long GetSurrogateCommandLine(unsigned short * *);
	virtual long GetThreadingModel(ThreadingModel *);
	virtual long GetUserSettings(int *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RefreshNeeded(IUserToken *,int *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	~CComClassInfo();
};

class CComNoClassInfo
{
	void InitializeChangeDetection(IUserToken *);
public:
	CComNoClassInfo(IUserToken *,_GUID const &);
	CComNoClassInfo(IUserToken *,_GUID const &,unsigned short *);
	CComNoClassInfo(IUserToken *,unsigned short *);
	virtual long CanBeCached(int *);
	virtual long GetClassContext(tagCLSCTX,tagCLSCTX *);
	virtual long GetConfiguredClsid(_GUID * *);
	virtual long GetImplementedClsid(_GUID * *);
	virtual long GetModulePath(tagCLSCTX,unsigned short * *);
	virtual long GetProgId(unsigned short * *);
	virtual long GetThreadingModel(ThreadingModel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RefreshNeeded(IUserToken *,int *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CComProcessInfo
{
	static int m_fGotLegacyLevels;
	static unsigned long m_dwLegacyAuthenticationLevel;
	static unsigned long m_dwLegacyImpersonationLevel;
public:
	CComProcessInfo(RegistrationSource);
	long FinalConstruct(IUserToken *,_GUID const &,unsigned short *,HKEY__ *,HKEY__ *,int,bool,bool,bool,bool,bool,bool,bool,bool,bool,bool);
	virtual int IsFromMachineHive();
	virtual long CanBeCached(int *);
	virtual long GetAccessPermission(void * *,unsigned long *);
	virtual long GetActivateAtStorage(int *);
	virtual long GetAppIDFlags(unsigned long *);
	virtual long GetApplicationId(unsigned short const * *);
	virtual long GetAuthenticationLevel(unsigned long *);
	virtual long GetCommandPathAndDebug(int *,unsigned short * *);
	virtual long GetDeployingPackageName(unsigned short const * *);
	virtual long GetExecutionPackageName(unsigned short const * *);
	virtual long GetImpersonationLevel(unsigned long *);
	virtual long GetLaunchPermission(void * *,unsigned long *);
	virtual long GetMGOTFlags(unsigned long *);
	virtual long GetPreferredServerBitness(unsigned long *);
	virtual long GetProcessId(_GUID * *);
	virtual long GetProcessMitigationPolicy(tagBLOB *);
	virtual long GetProcessName(unsigned short * *);
	virtual long GetProcessType(tagProcessType *);
	virtual long GetROTFlags(unsigned long *);
	virtual long GetRemoteServerName(unsigned short * *);
	virtual long GetRunAsType(tagRunAsType *);
	virtual long GetRunAsUser(unsigned short * *);
	virtual long GetSaferTrustLevel(unsigned long *);
	virtual long GetServiceName(unsigned short * *);
	virtual long GetServiceParameters(unsigned short * *);
	virtual long GetSource(RegistrationSource *);
	virtual long GetSurrogatePath(unsigned short * *);
	virtual long GetSurrogateServerExecutable(unsigned short * *);
	virtual long GetUserSettings(int *);
	virtual long IsUserService(int *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RefreshNeeded(IUserToken *,int *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	~CComProcessInfo();
};

class CComRegCatalog
{
	long CheckForceHKLMForAppID(HKEY__ *,int *);
	long CheckForceHKLMForCLSID(HKEY__ *,HKEY__ *,int *);
protected:
	static long OpenKeyInViewHelper(HKEY__ *,unsigned short const *,unsigned long,unsigned long,unsigned short,HKEY__ * *);
public:
	virtual HKEY__ * GetHKCR();
	virtual long GetClassInfoFromProgId(IUserToken *,unsigned short *,_GUID const &,void * *,void *);
	virtual long GetClassInfoW(unsigned long,IUserToken *,_GUID const &,_GUID const &,void * *,void *);
	virtual long GetProcessInfo(IUserToken *,_GUID const &,_GUID const &,void * *,void *);
	virtual long GetProcessInfoInternal(unsigned long,IUserToken *,_GUID const &,_GUID const &,void * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CComSxSCatalog
{
	virtual long GetClassInfoFromProgId(IUserToken *,unsigned short *,_GUID const &,void * *,void *);
	virtual long GetClassInfoW(unsigned long,IUserToken *,_GUID const &,_GUID const &,void * *,void *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CComSxSClassInfo
{
	CComSxSClassInfo(void *,_GUID const &,_ACTIVATION_CONTEXT_DATA_COM_SERVER_REDIRECTION const *,unsigned long,void *,unsigned long);
	virtual long GetClassContext(tagCLSCTX,tagCLSCTX *);
	virtual long GetConfiguredClsid(_GUID * *);
	virtual long GetImplementedClsid(_GUID * *);
	virtual long GetModulePath(tagCLSCTX,unsigned short * *);
	virtual long GetProgId(unsigned short * *);
	virtual long GetThreadingModel(ThreadingModel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CDualStringArray
{
	unsigned long Release();
};

class CFastBH
{
	long CreateFromBindingHandle(void *,_RPC_BINDING_HANDLE_SECURITY_V1_W *,_GUID *);
	long CreateFromBindingString(unsigned short const *,_RPC_BINDING_HANDLE_SECURITY_V1_W *,_GUID *);
public:
	long GetOrCreate(unsigned short const *,_RPC_BINDING_HANDLE_SECURITY_V1_W *,_GUID *,void * *);
	long GetOrCreate(void *,_RPC_BINDING_HANDLE_SECURITY_V1_W *,_GUID *,void * *);
};

struct CGuidStr
{
	CGuidStr(_GUID const *);
};

struct CGuidTable
{
	CGuidTableEntry * Lookup(_GUID const *);
};

struct CGuidTableEntry
{
	CGuidTableEntry(_GUID const *);
};

struct CHashTable
{
	CHashTable(long &,unsigned int);
	CTableElement * Lookup(CTableKey &);
	CTableElement * Remove(CTableKey &);
	void Add(CTableElement *);
	void Remove(CTableElement *);
	~CHashTable();
};

struct CIPAddrs
{
	void DecRefCount();
};

struct CId2Key
{
	CId2Key(unsigned __int64,unsigned __int64);
	virtual int Compare(CTableKey &);
	virtual unsigned long Hash();
};

struct CId2TableElement
{
	CId2TableElement(unsigned __int64,unsigned __int64);
	virtual int Compare(CTableElement const *);
	virtual int Compare(CTableKey &);
	virtual unsigned long Hash();
};

struct CId3Key
{
	virtual int Compare(CTableKey &);
	virtual unsigned long Hash();
};

struct CId3TableElement
{
	virtual int Compare(CTableElement const *);
	virtual int Compare(CTableKey &);
	virtual unsigned long Hash();
};

struct CIdKey
{
	CIdKey(unsigned __int64);
	virtual int Compare(CTableKey &);
	virtual unsigned long Hash();
};

struct CIdTableElement
{
	CIdTableElement(unsigned __int64);
	virtual int Compare(CTableElement const *);
	virtual int Compare(CTableKey &);
	virtual unsigned long Hash();
};

struct CListBase<1>
{
	CListBase<1>();
	CListElement * Remove(CListElement *);
	void Insert(CListElement *);
	~CListBase<1>();
};

struct CListElement
{
	CListElement();
	~CListElement();
};

struct CMachineBinding
{
	CMachineBinding(void *,void *,unsigned short,unsigned short,unsigned long,_COAUTHINFO *,long &);
	int Equal(void *,unsigned short,unsigned long,_COAUTHINFO *);
	long GetMarshaledTargetInfo(unsigned long *,unsigned char * *);
	long SetMarshaledTargetInfo(unsigned long,unsigned char *);
	virtual ~CMachineBinding();
};

class CMachineName
{
	CIPAddrs * MergeAddresses();
	CIPAddrs * QueryAddresses();
	int BuildVector(CMachineName::_ADDRESS_QUERY_DATA *,int);
	int CompareDynamicLocalHostNames(unsigned short *);
	int CompareHardCodedLocalHostNames(unsigned short *);
	int QueryAddressesSpecific(CMachineName::_ADDRESS_QUERY_DATA *);
	static int IsIPV4AddressGlobal(sockaddr *);
	static int IsIPV6AddressGlobal(sockaddr *);
	void CopySrcVectorToTargetVector(NetworkAddressVector *,NetworkAddressVector *,unsigned long *,unsigned long,unsigned short * *,unsigned short * *);
	void InitAQD(CMachineName::_ADDRESS_QUERY_DATA *,int);
	void SetComputerNameHelper(_COMPUTER_NAME_FORMAT,unsigned short * *);
	void SetNetBIOSName();
public:
	CIPAddrs * GetIPAddrs();
	CMachineName();
	int Compare(unsigned short *);
};

struct CMid
{
	CMid(tagDUALSTRINGARRAY *,int,unsigned __int64,int *);
	long GetBinding(void * *);
	long MakeBinding(unsigned short *,void * *);
	long SetMarshaledTargetInfo(unsigned long,unsigned char *);
	unsigned short * PrintableName();
	virtual int Compare(CTableElement const *);
	virtual int Compare(CTableKey &);
	virtual unsigned long Hash();
};

struct CMidKey
{
	virtual int Compare(CTableKey &);
	virtual unsigned long Hash();
};

struct CMutexLock
{
	~CMutexLock();
};

struct CMutexSem2
{
	int FInit();
};

struct CNameKey
{
	CNameKey(unsigned short *,CNamedObject::OBJTYPE);
	virtual int Compare(CTableKey &);
	virtual unsigned long Hash();
	~CNameKey();
};

class CNamedObject
{
	CNamedObject(void *,CNamedObject::OBJTYPE);
public:
	static CNamedObject * Create(CNamedObject::OBJTYPE,unsigned short *);
	virtual int Compare(CTableElement const *);
	virtual int Compare(CTableKey &);
	virtual unsigned long Hash();
	virtual unsigned long Release();
};

struct CNamedObjectTable
{
	CNamedObject * GetNamedObject(unsigned short *,CNamedObject::OBJTYPE);
	CNamedObjectTable(long &);
};

struct CNoEnum
{
	virtual long Clone(IEnumUnknown * *);
	virtual long Next(unsigned long,IUnknown * *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset();
	virtual long Skip(unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CObjexPPing
{
	virtual int NextCall(PROTSEQINFO *);
	virtual void ReleaseCall(PROTSEQINFO *);
};

struct COleStaticMutexSem
{
	long Init();
	~COleStaticMutexSem();
};

struct CPList
{
	CListElement * MaybeRemoveMin(CTime &);
	CPList(long &,unsigned long);
	CPListElement * Remove(CPListElement *);
	int PeekMin(CTime &);
	void Insert(CPListElement *);
	~CPList();
};

class CPackagedComCatalog
{
	struct CClassRegistration
	{
		virtual long CanBeCached(int *);
		virtual long GetApplicationName(HSTRING__ * *);
		virtual long GetClassContext(tagCLSCTX,tagCLSCTX *);
		virtual long GetClassNameW(unsigned short const * *);
		virtual long GetConfiguredClsid(_GUID * *);
		virtual long GetConversionReadWritable(HSTRING__ * *);
		virtual long GetConversionReadable(HSTRING__ * *);
		virtual long GetDataFormats(HSTRING__ * *);
		virtual long GetDefaultFormatName(HSTRING__ * *);
		virtual long GetDefaultIcon(HSTRING__ * *);
		virtual long GetDeployingPackageName(unsigned short const * *);
		virtual long GetDisplayName(HSTRING__ * *);
		virtual long GetExecutionPackageName(unsigned short const * *);
		virtual long GetImplementedCategories(Windows::Foundation::Collections::IMapView<HSTRING__ *,IInspectable *> * *);
		virtual long GetImplementedClsid(_GUID * *);
		virtual long GetLocalServerType(tagLocalServerType *);
		virtual long GetMiscStatusAspects(Windows::Foundation::Collections::IMapView<HSTRING__ *,IInspectable *> * *);
		virtual long GetMiscStatusDefault(HSTRING__ * *);
		virtual long GetModulePath(tagCLSCTX,unsigned short * *);
		virtual long GetProcess(_GUID const &,void * *);
		virtual long GetProgId(unsigned short * *);
		virtual long GetServerExecutable(unsigned short * *);
		virtual long GetShortDisplayName(HSTRING__ * *);
		virtual long GetSource(RegistrationSource *);
		virtual long GetSurrogateCommandLine(unsigned short * *);
		virtual long GetThreadingModel(ThreadingModel *);
		virtual long GetToolboxBitmap32(HSTRING__ * *);
		virtual long GetVerbs(Windows::Foundation::Collections::IMapView<HSTRING__ *,IInspectable *> * *);
		virtual long IsInsertable(bool *);
		virtual long RefreshNeeded(IUserToken *,int *);
		virtual ~CClassRegistration();
	};

	struct CPackagedComClassIdIterator
	{
		CPackagedComClassIdIterator();
		long RuntimeClassInitialize();
		long RuntimeClassInitialize(CPackagedComClassIdIterator const &);
		virtual long Clone(IPackagedComClassIdIterator * *);
		virtual long Next(_GUID *);
		virtual long Reset();
	};

	struct CPackagedComProgIdIterator
	{
		CPackagedComProgIdIterator();
		long RuntimeClassInitialize();
		virtual long Next(HSTRING__ * *,_GUID *);
	};

	struct CPackagedComProxyStubClassInfo
	{
		CPackagedComProxyStubClassInfo(_GUID const &,OpaqueString &);
		virtual long GetClassContext(tagCLSCTX,tagCLSCTX *);
		virtual long GetConfiguredClsid(_GUID * *);
		virtual long GetImplementedClsid(_GUID * *);
		virtual long GetModulePath(tagCLSCTX,unsigned short * *);
		virtual long GetThreadingModel(ThreadingModel *);
	};

	class CPackagedComTypeLibRegistration
	{
		long GetPackagedFilePathAsBStr(OpaqueString const &,unsigned short * *);
		long OpaqueStringToBStr(OpaqueString const &,unsigned short * *);
	public:
		virtual long GetDisplayName(unsigned short * *);
		virtual long GetFlags(unsigned long *);
		virtual long GetGuid(_GUID *);
		virtual long GetHelpDir(unsigned short * *);
		virtual long GetLcid(unsigned long *);
		virtual long GetVersion(unsigned short * *);
		virtual long GetWin32Path(unsigned short * *);
		virtual long GetWin64Path(unsigned short * *);
	};

	class CPackagedComTypeLibRegistrationIterator
	{
		long NextTypeLibHandle();
		long NextTypeLibId();
	public:
		CPackagedComTypeLibRegistrationIterator();
		long RuntimeClassInitialize();
		long RuntimeClassInitialize(CPackagedComTypeLibRegistrationIterator const &);
		virtual long Clone(ITypeLibRegistrationIterator * *);
		virtual long Next(ITypeLibRegistration * *);
		virtual long Reset();
		virtual ~CPackagedComTypeLibRegistrationIterator();
	};

	struct CServerRegistration
	{
		OpaqueString GetCommandLineW();
		OpaqueString GetExecutableAbsolutePath();
		bool HasSystemSurrogate();
		virtual long CanBeCached(int *);
		virtual long GetAccessPermission(void * *,unsigned long *);
		virtual long GetApplicationId(unsigned short const * *);
		virtual long GetDeployingPackageName(unsigned short const * *);
		virtual long GetExecutionPackageName(unsigned short const * *);
		virtual long GetLaunchPermission(void * *,unsigned long *);
		virtual long GetProcessId(_GUID * *);
		virtual long GetProcessName(unsigned short * *);
		virtual long GetProcessType(tagProcessType *);
		virtual long GetRunAsType(tagRunAsType *);
		virtual long GetSource(RegistrationSource *);
		virtual long GetSurrogatePath(unsigned short * *);
		virtual long RefreshNeeded(IUserToken *,int *);
		virtual ~CServerRegistration();
	};

	struct TypeLibVersionLocaleIdPairLifetimeTraits
	{
		static long Construct(PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair *,PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair const &);
	};

	struct TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate
	{
		long operator()(PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair const &,PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair const &,bool *);
	};

	static long CalculateClassBinaryAndCommandLineProperties(IUserTokenInternal *,OpaqueString const &,_GUID const &,ComClassRegistrationEntryProperties const &,CPackagedComCatalog::CServerRegistration const *,OpaqueString &,CPackagedComCatalog::ExecutablePathAndCommandLine &);
	static long CalculateServerBinaryAndCommandLineProperties(IUserTokenInternal *,OpaqueString const &,ComServerRegistrationEntryProperties const &,CPackagedComCatalog::ExecutablePathAndCommandLine &);
	static long CalculateServerExecutionPackage(IUserTokenInternal *,OpaqueString const &,ComServerRegistrationEntryProperties const &,OpaqueString &);
	static long ConstructCommandLine(OpaqueString const &,OpaqueString const &,OpaqueString &);
	static long GetClassInfoFromProgIdWorker(IPackagedComCatalogContext *,unsigned short const *,_GUID const &,void * *);
	static long GetClassInfoWorker(tagCLSCTX,IUserTokenInternal *,IPackagedComCatalogContext *,OpaqueString const &,bool,_GUID const &,_GUID const &,void * *);
	static long GetInstalledPackagesContainingEntry<ComClassRegistrationEntryProperties>(PackageListBuffer &,IUserTokenInternal *,IPackagedComCatalogContext *,_GUID const &,unsigned __int64,PACKAGE_INFO const *);
	static long GetInstalledPackagesContainingEntry<ComInterfaceRegistrationEntryProperties>(PackageListBuffer &,IUserTokenInternal *,IPackagedComCatalogContext *,_GUID const &,unsigned __int64,PACKAGE_INFO const *);
	static long GetInstalledPackagesContainingEntry<ComProgIdRegistrationEntryProperties>(PackageListBuffer &,IUserTokenInternal *,IPackagedComCatalogContext *,HSTRING__ *,unsigned __int64,PACKAGE_INFO const *);
	static long GetInstalledPackagesContainingEntry<ComTypeLibVersionRegistrationEntryProperties>(PackageListBuffer &,IUserTokenInternal *,IPackagedComCatalogContext *,_GUID const &,unsigned __int64,PACKAGE_INFO const *);
	static long GetPackagedFilePath(OpaqueString const &,OpaqueString const &,OpaqueString &);
	static long GetPackagedSystemMetadataFilePath(OpaqueString const &,OpaqueString const &,OpaqueString &);
	static long GetProcessInfoWorker(IUserTokenInternal *,IPackagedComCatalogContext *,OpaqueString const &,_GUID const &,_GUID const &,void * *);
	static long GetServerRegistration(IUserTokenInternal *,IPackagedComCatalogContext *,OpaqueString const &,unsigned int,CPackagedComCatalog::CServerRegistration * *);
	static long GetSystemFilePath(unsigned long,HSTRING__ *,OpaqueString &);
	static long GetTreatAsClassWorker(IUserTokenInternal *,IPackagedComCatalogContext *,OpaqueString const &,bool,_GUID const &,_GUID *,HSTRING__ * *);
	static long GetTypeLibPathFromProperties(ComTypeLibVersionRegistrationEntryProperties const &,OpaqueString const &,HSTRING__ * *);
	static long ParseTypeLibVersionString(HSTRING__ *,CPackagedComCatalog::TypeLibVersion *);
	static long ReadHighestTypeLibVersionEntry(ComTypeLibVersionRegistrationEntryProperties &,IPackagedComCatalogContext *,OpaqueString const &,_GUID const &,CPackagedComCatalog::TypeLibVersion,bool,CPackagedComCatalog::TypeLibVersion *);
	static long ReadTypeLibVersionEntry(ComTypeLibVersionRegistrationEntryProperties &,IPackagedComCatalogContext *,OpaqueString const &,_GUID const &,OpaqueString const &);
	static long ResolveAndReadEntry<ComClassRegistrationEntryProperties,long (*)(OpaqueString const &,ComClassRegistrationEntryProperties const &,bool *)>(ComClassRegistrationEntryProperties &,HSTRING__ * *,IUserTokenInternal *,IPackagedComCatalogContext *,_GUID const &,unsigned short const *,long (*)(OpaqueString const &,ComClassRegistrationEntryProperties const &,bool *));
	static long ResolveAndReadEntry<ComInterfaceRegistrationEntryProperties,long (*)(OpaqueString const &,ComInterfaceRegistrationEntryProperties const &,bool *)>(ComInterfaceRegistrationEntryProperties &,HSTRING__ * *,IUserTokenInternal *,IPackagedComCatalogContext *,_GUID const &,unsigned short const *,long (*)(OpaqueString const &,ComInterfaceRegistrationEntryProperties const &,bool *));
	static long ResolveAndReadEntry<ComProgIdRegistrationEntryProperties,long (*)(OpaqueString const &,ComProgIdRegistrationEntryProperties const &,bool *)>(ComProgIdRegistrationEntryProperties &,HSTRING__ * *,IUserTokenInternal *,IPackagedComCatalogContext *,HSTRING__ *,unsigned short const *,long (*)(OpaqueString const &,ComProgIdRegistrationEntryProperties const &,bool *));
	static long ResolveAndReadEntry<ComTreatAsClassRegistrationEntryProperties,long (*)(OpaqueString const &,ComTreatAsClassRegistrationEntryProperties const &,bool *)>(ComTreatAsClassRegistrationEntryProperties &,HSTRING__ * *,IUserTokenInternal *,IPackagedComCatalogContext *,_GUID const &,unsigned short const *,long (*)(OpaqueString const &,ComTreatAsClassRegistrationEntryProperties const &,bool *));
	static long ResolveAndReadTypeLibVersionEntry(ComTypeLibVersionRegistrationEntryProperties &,HSTRING__ * *,_GUID const &,CPackagedComCatalog::TypeLibVersion,unsigned long,bool,CPackagedComCatalog::TypeLibVersion *);
	static long ValidateClassRegistrationProperties(OpaqueString const &,_GUID const &,ComClassRegistrationEntryProperties const &,CPackagedComCatalog::CServerRegistration *);
	static long ValidateInterfaceRegistrationProperties(OpaqueString const &,_GUID const &,ComInterfaceRegistrationEntryProperties const &);
	static long ValidateServerRegistrationProperties(OpaqueString const &,unsigned int,ComServerRegistrationEntryProperties const &);
	static long ValidateTypeLibVersionRegistrationProperties(OpaqueString const &,_GUID const &,OpaqueString const &,ComTypeLibVersionRegistrationEntryProperties const &);
	static unsigned short const * GetDisplayName<ComClassRegistrationEntryProperties>(ComClassRegistrationEntryProperties const &);
	static unsigned short const * GetDisplayName<ComServerRegistrationEntryProperties>(ComServerRegistrationEntryProperties const &);
	static unsigned short const * GetDisplayName<ComTreatAsClassRegistrationEntryProperties>(ComTreatAsClassRegistrationEntryProperties const &);
	static void LogReadEntryResult(long,ComClassRegistrationEntryProperties const &,OpaqueString const &,_GUID const &,ComClassRegistrationEntryPropertyFlags,ComClassRegistrationEntryPropertyFlags);
	static void LogReadEntryResult(long,ComInterfaceRegistrationEntryProperties const &,OpaqueString const &,_GUID const &,ComInterfaceRegistrationEntryPropertyFlags,ComInterfaceRegistrationEntryPropertyFlags);
	static void LogReadEntryResult(long,ComProgIdRegistrationEntryProperties const &,OpaqueString const &,HSTRING__ *,ComProgIdRegistrationEntryPropertyFlags,ComProgIdRegistrationEntryPropertyFlags);
	static void LogReadEntryResult(long,ComProxyStubRegistrationEntryProperties const &,OpaqueString const &,_GUID const &,ComProxyStubRegistrationEntryPropertyFlags,ComProxyStubRegistrationEntryPropertyFlags);
	static void LogReadEntryResult(long,ComServerRegistrationEntryProperties const &,OpaqueString const &,unsigned int,ComServerRegistrationEntryPropertyFlags,ComServerRegistrationEntryPropertyFlags);
	static void LogReadEntryResult(long,ComTreatAsClassRegistrationEntryProperties const &,OpaqueString const &,_GUID const &,ComTreatAsClassRegistrationEntryPropertyFlags,ComTreatAsClassRegistrationEntryPropertyFlags);
	static void LogReadEntryResult(long,ComTypeLibVersionRegistrationEntryProperties const &,OpaqueString const &,_GUID const &,OpaqueString const &,ComTypeLibVersionRegistrationEntryPropertyFlags,ComTypeLibVersionRegistrationEntryPropertyFlags);
public:
	CPackagedComCatalog(bool);
	long GetProxyStubDllPath(IPackagedComCatalogContext *,_GUID const &,OpaqueString const &,OpaqueString &);
	long GetTypeLibPathForInterface(ComInterfaceRegistrationEntryProperties const &,IPackagedComCatalogContext *,OpaqueString const &,HSTRING__ * *);
	virtual bool IsTypeLibRegistered(_GUID const &,HSTRING__ *,unsigned long);
	virtual long GetAutoConvertTo(_GUID const &,_GUID *);
	virtual long GetClassInfoFromProgId(IUserToken *,unsigned short *,_GUID const &,void * *,void *);
	virtual long GetClassInfoW(unsigned long,IUserToken *,_GUID const &,_GUID const &,void * *,void *);
	virtual long GetCounterpartIid(_GUID const &,bool,_GUID *);
	virtual long GetHelpDirectory(_GUID const &,unsigned long,unsigned long,unsigned long,HSTRING__ * *);
	virtual long GetIidProxyStubRegistrationInfo(_GUID const &,HSTRING__ * *,UniversalMarshalerType *,_GUID *);
	virtual long GetIidTypeLibRegistrationInfo(_GUID const &,HSTRING__ * *);
	virtual long GetPackagedComClassIdIterator(IPackagedComClassIdIterator * *);
	virtual long GetPackagedComProgIdIterator(IPackagedComProgIdIterator * *);
	virtual long GetPackagedProxyStubClassInfo(_GUID const &,HSTRING__ *,IComClassInfo * *);
	virtual long GetProcessInfo(IUserToken *,_GUID const &,_GUID const &,void * *,void *);
	virtual long GetTreatAsClass(_GUID const &,_GUID *);
	virtual long GetTypeLibPath(_GUID const &,unsigned long,unsigned long,bool,unsigned long,HSTRING__ * *,unsigned long *,unsigned long *);
	virtual long GetTypeLibRegistrationIterator(ITypeLibRegistrationIterator * *);
};

struct CParallelPing
{
	long Ping();
	void Reset();
	void ServerAliveWork(_RPC_ASYNC_STATE *,long);
};

class CPingSetQuotaManager
{
	static unsigned long _dwPerUserPingSetQuota;
public:
	CPingSetQuotaManager(long &);
	int IsUserQuotaExceeded(void *);
	int ManageQuotaForUser(void *,int);
};

class CPrivateHiveCatalog
{
protected:
	virtual bool IgnoreRunAsInteractiveUser();
	virtual bool RegistrationsArePackaged();
	virtual bool SelectDllHostBitnessBasedOnDllBitness();
	virtual bool Supports16BitRegistrations();
	virtual bool SupportsActivateAtStorage();
	virtual bool SupportsApplicationId();
	virtual bool SupportsDarwinId();
	virtual bool SupportsForceHKLM();
	virtual bool SupportsGetProgId();
	virtual bool SupportsLUAAndDisplaySettings();
	virtual bool SupportsLoadUserSettings();
	virtual bool SupportsPreferredServerBitness();
	virtual bool SupportsProcessMitigationPolicy();
	virtual bool SupportsROTAppIDAndMGOTFlags();
	virtual bool SupportsRemoteServerName();
	virtual bool SupportsSRPTrustLevel();
	virtual long GetComRootKeyForUserToken(IUserToken *,HKEY__ * *);
	virtual long OpenKeyInOtherView(HKEY__ *,unsigned short const *,unsigned long,HKEY__ * *);
	virtual unsigned long CatalogFlagsForAppID();
	virtual unsigned long ExpectedOutofprocServerBinaryArchitecture();
	virtual unsigned long GetViewFlagFor(CComRegCatalog::WhichView);
	virtual unsigned short GetWowArchitectureFor(CComRegCatalog::WhichView);
	virtual void ReleaseComRootKeyForUserToken(IUserToken *);
};

class CProcess
{
	static void AsyncRpcNotification(_RPC_ASYNC_STATE *,void *,_RPC_ASYNC_EVENT);
	static void AsyncRundownReturnNotification(_RPC_ASYNC_STATE *,void *,_RPC_ASYNC_EVENT);
	void BindingsUpdateNotify(unsigned __int64,tagDUALSTRINGARRAY *,tagDUALSTRINGARRAY *,long);
	void FlagsOff(unsigned long);
	void FlagsOn(unsigned long);
	void RundownOidNotify(CServerOxid *,unsigned long,CServerOid * * const,unsigned char * const,long);
public:
	CProcess(CToken * &,unsigned short *,unsigned short *,unsigned long,unsigned long,__MIDL_ILocalObjectExporter_0001 *,long &);
	int IsPSMSuspended();
	int IsProcessTerminated();
	int RemoveOxid(CServerOxid *);
	int ServerTCPPortOpen(void *,int);
	int SetProcessHandle(void *,unsigned long);
	long ActivateProcess(_PSM_ACTIVATE_BACKGROUND_TYPE);
	long AddOxid(CServerOxid *);
	long ControlTracing(int);
	long CreateAndSetFastRundownTimer();
	long CreateBindingHandle(tagDUALSTRINGARRAY *);
	long GetConsoleHandles(unsigned __int64,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)> > > &,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)> > > &,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)> > > &);
	long GetServerAddresssForIPID(_GUID,unsigned __int64 *);
	long GetServerAddresssFromIPIDEntry(_GUID,unsigned __int64,void *,unsigned __int64 *,unsigned __int64 *,unsigned __int64 *,bool *);
	long GetServerIPIDForProxy(unsigned __int64,_GUID *);
	long NotifyNewFDT(unsigned __int64);
	long ProcessBindings(tagDUALSTRINGARRAY *,tagDUALSTRINGARRAY *);
	long RegisterConsoleHandles(void *,void *,void *,unsigned __int64 *);
	long RegisterRacActivationToken(void *,unsigned __int64 *);
	long RundownOids(void *,CServerOxid *,unsigned long,CServerOid * * const);
	long SetAppID(_GUID);
	long SetSCMProcessInfo(void *);
	long UpdateResolverBindings(unsigned __int64,tagDUALSTRINGARRAY *);
	long UseProtseqIfNeeded(unsigned short,unsigned short * const);
	static CProcess * Lookup(unsigned long);
	static void FastRundownAllProcesses();
	static void FastRundownTimerCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
	tagDUALSTRINGARRAY * GetLocalBindings();
	tagDUALSTRINGARRAY * GetRemoteBindings();
	tagScmProcessRegistration * GetProcessReg();
	tagScmProcessRegistration * RemoveProcessReg();
	virtual ~CProcess();
	void * GetBindingHandleCopy();
	void AddActivatableClassReg(HSTRING__ *,HSTRING__ *,unsigned long);
	void AddClassReg(_GUID &,unsigned long);
	void FastRundownProcess();
	void RemoveClassReg(unsigned long);
	void RevokeClassRegs();
	void Rundown();
	void RundownPotentialProxyOIDs();
	void SetProcessReadyState(unsigned long);
	void SetProcessReg(tagScmProcessRegistration *);
};

struct CProcessIdTable
{
	void AddIfNecessary(CProcess *);
};

class CProcessSecret
{
	static COleStaticMutexSem s_SecretLock;
	static _GUID s_guidOle32Secret;
	static int s_fSecretInit;
public:
	long GetProcessSecret(_GUID *);
	long VerifyMatchingSecret(_GUID);
};

struct CRandomNumberGenerator
{
	long GenerateRandomNumber(unsigned char *,unsigned long);
};

struct CReferencedObject
{
	virtual unsigned long Release();
	virtual void Reference();
};

class CRegistryWatcher
{
	void Cleanup();
public:
	CRegistryWatcher(HKEY__ *,unsigned short const *);
	long Register();
	static void PolicyCallbackFn(void *,unsigned char);
	static void TimerCallbackFn(void *,unsigned char);
};

struct CRemActPPing
{
	virtual int NextCall(PROTSEQINFO *);
	virtual void ReleaseCall(PROTSEQINFO *);
};

class CRemoteMachine
{
	long GetAuthnLevel(_ACTIVATION_PARAMS *,unsigned long *);
public:
	CMachineBinding * LookupBinding(void *,unsigned short,unsigned long,_COAUTHINFO *);
	CRemoteMachine(unsigned short *,unsigned short *);
	long Activate(_ACTIVATION_PARAMS *,unsigned short *);
	long PickAuthnAndActivate(_ACTIVATION_PARAMS *,unsigned short *,void * *,unsigned short,unsigned long,unsigned short,long *);
	unsigned long Release();
	void FlushBindings();
	void FlushBindingsNoLock();
	void InsertBinding(void *,void *,unsigned short,unsigned short,unsigned long,unsigned char *,unsigned long,_COAUTHINFO *);
	void RemoveBinding(CMachineBinding *);
};

class CRemoteMachineList
{
	void RemoveOldestCacheElement();
public:
	CRemoteMachine * GetOrAdd(unsigned short *);
	long FlushSpecificBindings(unsigned short *);
	void TryToFlushIdleOrTooOldElements();
};

struct CRpcEEInfo
{
	static long GetCurrentEEInfo(CRpcEEInfo * *);
};

struct CRpcEEInfoFailure
{
	virtual unsigned __int64 GetEEInfoSize();
	virtual unsigned long GetEEInfoType();
	virtual void * GetEEInfo();
	virtual void AddRef();
	virtual void Release();
};

struct CRpcEEInfoMissing
{
	virtual unsigned __int64 GetEEInfoSize();
	virtual unsigned long GetEEInfoType();
	virtual void * GetEEInfo();
	virtual void AddRef();
	virtual void Release();
};

struct CRpcEEInfoNative
{
	static long LoadEEInfoNative(tagRPC_ERROR_ENUM_HANDLE *,CRpcEEInfo * *);
	virtual unsigned __int64 GetEEInfoSize();
	virtual unsigned long GetEEInfoType();
	virtual void * GetEEInfo();
	virtual void AddRef();
	virtual void Release();
};

class CRpcEEInfoTextual
{
	long AppendParamInfo(int,tagRPC_EE_INFO_PARAM *);
	long AppendRecordInfo(unsigned long,tagRPC_EXTENDED_ERROR_INFO *);
	long InitStringBuffer();
	long ParseEEInfo(tagRPC_ERROR_ENUM_HANDLE *);
public:
	static long LoadEEInfoTextual(tagRPC_ERROR_ENUM_HANDLE *,CRpcEEInfo * *);
	virtual unsigned __int64 GetEEInfoSize();
	virtual unsigned long GetEEInfoType();
	virtual void * GetEEInfo();
	virtual void AddRef();
	virtual void Release();
};

struct CRpcSecurityCallback
{
	long GetMarshaledTargetInfo(unsigned long *,unsigned char * *);
};

class CRpcSecurityCallbackManager
{
	static void RpcSecurityCallbackFunction(void *);
	void StoreCallbackResult(unsigned short);
	void StoreMarshaledTargetInfo(unsigned long,unsigned char *);
public:
	CRpcSecurityCallbackManager(long &);
	int GetSecurityContextDetailsAndTurnOffCallback(void *,unsigned short *,unsigned long *,unsigned char * *);
	int RegisterForRpcAuthSvcCallBack(void *);
};

class CSCMProcessControl
{
	long FillInSCMProcessInfo(CProcess *,int,__MIDL___MIDL_itf_activate_0000_0010_0004 * *);
	long FindAppOrClass(_GUID const &,CClassicComServerTable *,IEnumSCMProcessInfo * *);
public:
	static long CopySCMProcessInfo(__MIDL___MIDL_itf_activate_0000_0010_0004 *,__MIDL___MIDL_itf_activate_0000_0010_0004 * *);
	static long FreeSCMProcessInfoPriv(__MIDL___MIDL_itf_activate_0000_0010_0004 * *);
	virtual long FindApplication(_GUID const &,IEnumSCMProcessInfo * *);
	virtual long FindClass(_GUID const &,IEnumSCMProcessInfo * *);
	virtual long FindProcess(unsigned long,__MIDL___MIDL_itf_activate_0000_0010_0004 * *);
	virtual long FreeSCMProcessInfo(__MIDL___MIDL_itf_activate_0000_0010_0004 * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ResumeApplication(_GUID const &);
	virtual long ResumeClass(_GUID const &);
	virtual long ResumeProcess(unsigned long);
	virtual long RetireApplication(_GUID const &);
	virtual long RetireClass(_GUID const &);
	virtual long RetireProcess(unsigned long);
	virtual long SuspendApplication(_GUID const &);
	virtual long SuspendClass(_GUID const &);
	virtual long SuspendProcess(unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CSCMProcessEnumerator
{
	CSCMProcessEnumerator(CSCMProcessEnumerator *,long *);
	long AddProcess(__MIDL___MIDL_itf_activate_0000_0010_0004 *);
	virtual long Clone(IEnumSCMProcessInfo * *);
	virtual long Next(unsigned long,__MIDL___MIDL_itf_activate_0000_0010_0004 * *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset();
	virtual long Skip(unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CSCMProfileCache
{
	struct CProfileCacheEntry
	{
		static long LoadAndCreate(void *,unsigned short *,CProfileCacheEntry * *);
		~CProfileCacheEntry();
	};

	long LookupBySID(void *,_GUID *,unsigned short * *);
	static void ProcessExited(void *,unsigned char);
public:
	CSCMProfileCache();
	long GetOrLoadProfile(void *,_GUID *,unsigned short * *);
	long ReleaseProfile(_GUID);
	long ReleaseProfileOnProcessExit(void *,_GUID);
};

struct CScmActivator
{
	virtual long CreateInstance(IUnknown *,IActivationPropertiesIn *,IActivationPropertiesOut * *);
	virtual long GetClassObject(IActivationPropertiesIn *,IActivationPropertiesOut * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CScmHashIter
{
	CScmHashEntry * FindNextBucketWithEntry();
public:
	CScmHashEntry * GetNext();
};

struct CScmHashTable
{
	CScmHashEntry * Lookup(unsigned long,void *);
	CScmHashTable(unsigned long);
	int RemoveEntry(unsigned long,CScmHashEntry *);
	void SetAt(unsigned long,CScmHashEntry *);
	~CScmHashTable();
};

class CScmMgot
{
	CScmMgotEntry * GetMgotEntry(CToken *,unsigned short *,_MnkEqBuf *,_GUID const &);
public:
	long EnumRunning(CProcess *,unsigned short *,_GUID const &,_MgotNameList * *);
	long GetObject(CProcess *,unsigned short *,_MnkEqBuf *,_GUID const &,tagInterfaceData * *,int *);
	long Register(CProcess *,unsigned short *,_MnkEqBuf *,_GUID const &,tagInterfaceData *,unsigned long,_MgotScmToken *);
	long Revoke(CProcess *,_MgotScmToken *,tagInterfaceData * *,int *);
};

struct CScmMgotEntry
{
	virtual bool GetAllowAnyClient();
	virtual unsigned long GetProcessID();
	virtual void RevokeSelfForProcessExit(int *);
};

class CScmRot
{
	CScmRotEntry * GetEntryFromScmReg(_SCMREGKEY *);
public:
	CScmRot(long &,unsigned short *);
	long EnumRunning(CToken *,unsigned short *,_MkInterfaceList * *,bool);
	long GetObject(CToken *,unsigned short *,unsigned long,_MnkEqBuf *,_SCMREGKEY *,tagInterfaceData * *,int *,bool);
	long GetTimeOfLastChange(CToken *,unsigned short *,_MnkEqBuf *,_FILETIME *,bool);
	long IsRunning(CToken *,unsigned short *,_MnkEqBuf *,bool);
	long NoteChangeTime(_SCMREGKEY *,_FILETIME *);
	long Register(CProcess *,unsigned short *,_MnkEqBuf *,tagInterfaceData *,tagInterfaceData *,_FILETIME *,unsigned long,unsigned long,_SCMREGKEY *);
	long Revoke(CProcess *,_SCMREGKEY *,tagInterfaceData * *,tagInterfaceData * *,int *);
};

struct CScmRotEntry
{
	virtual bool GetAllowAnyClient();
	virtual int IsValid(unsigned long);
	virtual unsigned long GetProcessID();
	virtual void RevokeSelfForProcessExit(int *);
};

class CScmRotMgotEntryBase
{
protected:
	CScmRotMgotEntryBase(unsigned long,unsigned long,_MnkEqBuf *,CToken *,unsigned short *,tagInterfaceData *,bool);
	virtual ~CScmRotMgotEntryBase();
public:
	virtual int IsEqual(void *,unsigned int);
	virtual int IsValid(unsigned long);
	void Release();
};

struct CSecDescriptor
{
	void DecRefCount();
};

struct CServerListEntry
{
	CServerListEntry(CServerTableEntry *,CProcess *,_GUID,unsigned char,unsigned char,unsigned char,int,unsigned long,unsigned long,unsigned short const *,bool,long &);
	bool MatchArchitecture(unsigned long,unsigned long,unsigned long);
	int CallServer(_ACTIVATION_PARAMS *,int,long *);
	int EnsureRpcHandle(int);
	int IsSharedPpleServer();
	int MatchDesktopWinRTBrokerToken(CToken *,unsigned long);
	int MatchHostId(CToken *,unsigned __int64);
	long Match(CToken *,int,int,unsigned short *,int,long,long,unsigned long,_PSM_ACTIVATE_BACKGROUND_TYPE,unsigned long,unsigned long,unsigned __int64,unsigned __int64,_GUID const &,CToken *,unsigned short const *,void * *,unsigned long,unsigned long,unsigned long);
	static long GetAaaAsUserMatchToken(CToken *,void * *);
	static long GetPerAppBrokerMatchToken(CToken *,unsigned long,unsigned __int64,bool,void * *);
	virtual ~CServerListEntry();
};

struct CServerOid
{
	CPListElement * Remove();
	virtual unsigned long Release();
	virtual void Reference();
	virtual ~CServerOid();
	void Insert();
	void InsertInFastRundownList();
	void RemoveFromFastRundownList();
	void SetPinned(int);
};

struct CServerOidPList
{
	CServerOid * RemoveEligibleOid(CTime &);
	CServerOid * RemoveEligibleOidWithMatchingOxid(CTime &,CServerOxid *);
	void ResetAllOidTimeouts();
};

class CServerOxid
{
	long EnsureRundownHandle();
	static unsigned long RundownHelperThreadProc(void *);
protected:
	void ProcessRelease();
	void ProcessRundownResultsInternal(int,unsigned long,CServerOid * * const,unsigned char * const);
public:
	CServerOxid(CProcess *,tagOXID_INFO const *,unsigned __int64);
	long GetInfo(tagOXID_INFO *,int);
	long GetRemoteInfo(void *,tagOXID_INFO *,unsigned short,unsigned short * const);
	long LazyUseProtseq(unsigned short,unsigned short * const);
	long MoveServerOIDToFastRundownList(CServerOid *);
	void DeleteFastRundownOids();
	void FastRundownOids();
	void RemoveFastRundownOid(CServerOid *);
	void RundownOids(unsigned long,CServerOid * * const,int);
};

class CServerSet
{
	int ValidateObjects(int);
public:
	int CheckAndUpdateSequenceNumber(unsigned short);
	int Ping(int);
	int Rundown();
	int ShouldRundown();
	long AddObject(unsigned __int64 &);
};

struct CServerSetTable
{
	CServerSet * Allocate(unsigned short,void *,int,unsigned __int64 &);
	CServerSet * Lookup(unsigned __int64);
	CServerSetTable(long &);
	int RundownSetIfNeeded(unsigned __int64);
	unsigned __int64 CheckForRundowns();
	void RundownStoppedVm(unsigned short const *);
};

class CServerTableEntry
{
	void RetireAllServers();
	void SetSuspendOnAllServers(int);
protected:
	CServerTableEntry(long &,EnumEntryType);
	~CServerTableEntry();
public:
	int CallRunningServer(_ACTIVATION_PARAMS *,unsigned long,long,CClassData *,long *);
	int LookupServer(unsigned long,CServerListEntry * *);
	int RegisterHandles(CServerListEntry *,CProcess *);
	int WaitForDllhostServer(CClassData *,void *,_ACTIVATION_PARAMS *,unsigned long &,long,int);
	int WaitForLocalServer(void *,CClassData *,unsigned long &,int);
	int WaitForService(CClassData *,CToken *,void *,int);
	int WaitForServiceStopped(CClassData *,CToken *);
	long LookupServer(CToken *,int,int,unsigned short *,unsigned long,long,long,unsigned long,_PSM_ACTIVATE_BACKGROUND_TYPE,unsigned long,unsigned long,unsigned __int64,unsigned __int64,_GUID const &,CToken *,unsigned short const *,unsigned long,unsigned long,CServerListEntry * *);
	long RegisterServer(CProcess *,_GUID,CClassData *,CAppidData *,unsigned char,int,unsigned long,unsigned long *);
	long ServerExists(_ACTIVATION_PARAMS *,CClassData *,int *);
	long StartServerAndWait(_ACTIVATION_PARAMS *,CClassData *,long &,int);
	long WaitForInitCompleted(CServerListEntry *,CClassData *);
	void RevokeServer(CProcess *,unsigned long);
	void RevokeServer(tagScmProcessRegistration *);
	void UnsuspendServer(unsigned long);
};

struct CSessionUserToken
{
	CSessionUserToken(void *,unsigned long,long &);
	static long GetOrCreateUserTokenForSession(unsigned long,void * *);
	static long GetSessionUserTokenCacheDetails(unsigned long *,tagSessionUserTokenCacheEntry * *);
	void * GetTokenHandle();
};

struct CSharedLock
{
	CSharedLock(long &);
	int HeldExclusive();
	void ConvertToExclusive();
	void LockExclusive();
	void LockShared();
	void Unlock();
	void UnlockShared();
	~CSharedLock();
};

struct CSurrogateList
{
	CSurrogateListEntry * Lookup(CToken *,int,int,unsigned short *,unsigned short *,unsigned short const *,unsigned long);
	int RemoveMatchingEntry(CServerListEntry *);
	void Insert(CSurrogateListEntry *);
};

struct CSurrogateListEntry
{
	CSurrogateListEntry(unsigned short *,CServerListEntry *);
	int LoadDll(_ACTIVATION_PARAMS *,int,long *);
	int Match(CToken *,int,int,unsigned short *,unsigned short *,unsigned short const *,unsigned long);
};

class CSuspendMonitor
{
	static void SuspendResiliencyCallback(_SUSPEND_RESILIENCY_TYPE,_SUSPEND_RESILIENCY_STATE,void *);
	void OnResume();
	void OnSuspend();
public:
	bool EnterRemoteServerPing();
	long Start();
	void ExitRemoteServerPing();
};

class CSystemRegistryCatalog
{
protected:
	virtual bool IgnoreRunAsInteractiveUser();
	virtual bool RegistrationsArePackaged();
	virtual bool SelectDllHostBitnessBasedOnDllBitness();
	virtual bool Supports16BitRegistrations();
	virtual bool SupportsActivateAtStorage();
	virtual bool SupportsApplicationId();
	virtual bool SupportsDarwinId();
	virtual bool SupportsForceHKLM();
	virtual bool SupportsGetProgId();
	virtual bool SupportsLUAAndDisplaySettings();
	virtual bool SupportsLoadUserSettings();
	virtual bool SupportsPreferredServerBitness();
	virtual bool SupportsProcessMitigationPolicy();
	virtual bool SupportsROTAppIDAndMGOTFlags();
	virtual bool SupportsRemoteServerName();
	virtual bool SupportsSRPTrustLevel();
	virtual long GetComRootKeyForUserToken(IUserToken *,HKEY__ * *);
	virtual long OpenKeyInOtherView(HKEY__ *,unsigned short const *,unsigned long,HKEY__ * *);
	virtual unsigned long CatalogFlagsForAppID();
	virtual unsigned long ExpectedOutofprocServerBinaryArchitecture();
	virtual unsigned long GetViewFlagFor(CComRegCatalog::WhichView);
	virtual unsigned short GetWowArchitectureFor(CComRegCatalog::WhichView);
	virtual void ReleaseComRootKeyForUserToken(IUserToken *);
};

class CTableElement
{
protected:
	CTableElement * Insert(CTableElement *);
	CTableElement * RemoveMatching(CTableKey &,CTableElement * *);
public:
	CTableElement();
	virtual ~CTableElement();
	void FailFastIfDeleted();
};

struct CTaskThreadStateList
{
	void Insert(CTaskThreadState *);
};

struct CTestBindingPPing
{
	virtual int NextCall(PROTSEQINFO *);
	virtual void ReleaseCall(PROTSEQINFO *);
};

class CThreadStack
{
	int GetCurrentProcessDefaultStackCommit();
};

struct CTime
{
	unsigned long Wait(unsigned long,_TP_TIMER *,void *);
	void Sleep(_TP_TIMER *,void *);
};

struct CToken
{
	bool IsFullTrustInteractiveUser();
	bool IsInteractiveUser();
	bool IsUserContextForThisToken(unsigned __int64);
	int IsLocalService();
	int IsLocalSystem();
	int IsNetworkService();
	int IsTokenElevationLevelLower(CToken *);
	int IsTokenILLower(CToken *);
	int IsTokenILLowerThanDefaultLabel();
	int MatchModifiedLuid(_LUID);
	long CompareCapabilitySids(CToken *,bool);
	long CompareCapabilitySids(unsigned short const *,bool);
	long CompareElevationLevel(CToken *);
	long CompareIntegrityLevels(CToken *);
	long ComparePackageNames(CToken *);
	long ComparePackageSids(CToken *);
	long ComparePackageSids(void *,bool);
	long CompareSaferLevels(void *);
	long CompareToken(void *);
	long CompareTokenGroups(void *);
	long CompareTokenILToDefaultLabel(TokenILToDefaultLabelComparison *);
	long CompareTokenIdentity(CToken *);
	long CompareTokenIdentity(void *);
	long GetAppUserModelId(unsigned int *,unsigned short *);
	long GetElevated(int *);
	long GetElevationLevel(_TOKEN_ELEVATION_TYPE *);
	long GetLowBoxSecurityDescriptor(void * *);
	long GetPsmActivationType(_PSM_ACTIVATE_BACKGROUND_TYPE *);
	long GetTokenILValue(unsigned long *);
	long HasSysAppId(int *);
	long ImplicitlyActivateClassicAAAServersAsIU(bool *);
	long IsInDesignMode(int *);
	long IsPackageSideLoaded(bool *);
	long TraceCapabilitySids();
	static _TOKEN_GROUPS * GetTokenGroups(void *);
	static long GetGroupsAndPrivileges(void *,_TOKEN_GROUPS_AND_PRIVILEGES * *);
	static long GetLogonIDSid(void *,void * *);
	unsigned long GetSessionId();
	virtual long GetIntegritySID(unsigned char * *,unsigned short *);
	virtual long GetPackageName(unsigned short * *);
	virtual long GetPrivateHiveComRootKey(HKEY__ * *);
	virtual long GetTokenIntegrityLevel(_TOKEN_MANDATORY_LABEL * *);
	virtual long GetUserClassesRootKey(HKEY__ * *);
	virtual long GetUserSid(unsigned char * *,unsigned short *);
	virtual long GetUserSoftwareClassesKey(HKEY__ * *);
	virtual long GetUserToken(void * *);
	virtual long Impersonate(int,int *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ReleasePrivateHiveComRootKey();
	virtual long ReleaseUserClassesRootKey();
	virtual long ReleaseUserSoftwareClassesKey();
	virtual long Revert(int);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CUserPingSetCount
{
	int IsEqual(void *);
};

class CWIPTable
{
	CWIPDragDropOp * GetDragDropForProcess(CProcess *);
	CWIPDragDropOp * GetDragDropForSession(unsigned long);
	WIPForcedDT * GetFDTForProcess(CProcess *);
	WIPForcedDT * GetFDTForSession(unsigned long);
	int IsFDTVisibleToClient(CToken *,CToken *);
	long EnforceNotAppContainerForClipboard(CProcess *);
	long EnforceSameAppContainerForDragDrop(CProcess *,CProcess *);
	unsigned __int64 Grow();
public:
	CWIPTable();
	int DragDropActiveForSession(unsigned long);
	long AddEntry(unsigned __int64,tagSTDOBJREF const *,tagOXID_INFO const *,int,unsigned long,CProcess *,unsigned __int64 *);
	long BeginDragDrop(CProcess *);
	long EndDragDrop(CProcess *);
	long GetEntry(unsigned __int64,unsigned __int64,int,unsigned long,CProcess *,tagSTDOBJREF *,tagOXID_INFO *);
	long RegisterForcedDropTargetWindow(CProcess *,unsigned __int64);
	long RevokeForcedDropTargetWindow(CProcess *,unsigned __int64);
	void RunDown(void *);
	~CWIPTable();
};

struct CWinRTActivationStoreCatalog
{
	struct CActivatableClassPropertiesHelper
	{
		CActivatableClassPropertiesHelper(Windows::Foundation::RegistrationScope);
		long GetActivationType(Windows::Foundation::ActivationType &);
		long GetAttributes(EntryPropertyStore &);
		long GetDllPath(ExpandableString &);
		long GetServerName(OpaqueString &);
		long GetThreadingModel(Windows::Foundation::ThreadingType &);
		long ReadActivatableClassRegistrationEntry(IActivationCatalogContext *,RegistrationStoreContext::ActivatableClassHandleDetail *);
	};

	struct CDebugInformationPropertiesHelper
	{
		long GetDebugEnvironment(MultiString &);
		long GetDebuggerCommandLine(ExpandableString &);
	};

	struct CProxyStubClassInfo
	{
		CProxyStubClassInfo();
		long FinalConstruct(unsigned long,_GUID const &,unsigned short const *,IActivationCatalogContext *,RegistrationStoreContext::ProxyStubHandleDetail *);
		virtual long CanBeCached(int *);
		virtual long GetApplication(_GUID const &,void * *);
		virtual long GetClassContext(tagCLSCTX,tagCLSCTX *);
		virtual long GetClassNameW(unsigned short const * *);
		virtual long GetConfiguredClsid(_GUID * *);
		virtual long GetCustomActivatorClsids(tagACTIVATION_STAGE,_GUID * *);
		virtual long GetCustomActivatorCount(tagACTIVATION_STAGE,unsigned long *);
		virtual long GetCustomActivators(tagACTIVATION_STAGE,ISystemActivator * * *);
		virtual long GetImplementedClsid(_GUID * *);
		virtual long GetLocalServerType(tagLocalServerType *);
		virtual long GetModulePath(tagCLSCTX,unsigned short * *);
		virtual long GetProcess(_GUID const &,void * *);
		virtual long GetProgId(unsigned short * *);
		virtual long GetRemoteServerName(unsigned short * *);
		virtual long GetSurrogateCommandLine(unsigned short * *);
		virtual long GetThreadingModel(ThreadingModel *);
		virtual long GetTypeInfo(_GUID const &,void * *);
		virtual long GetVersionNumber(unsigned long *,unsigned long *);
		virtual long IsComPlusConfiguredClass(int *);
		virtual long Lock();
		virtual long MustRunInClientContext(int *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long RefreshNeeded(IUserToken *,int *);
		virtual long Unlock();
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	struct CRuntimeClassInfo
	{
		CRuntimeClassInfo();
		long FinalConstruct(unsigned long,IUserToken *,unsigned short const *,unsigned short const *,_GUID const &,IWinRTCatalogInternal *,IActivationCatalogContext *,RegistrationStoreContext::ActivatableClassHandleDetail *,bool);
		virtual long CanBeCached(int *);
		virtual long GetActivatableClassId(HSTRING__ * *);
		virtual long GetActivateAsUser(unsigned long *);
		virtual long GetActivateInSharedBroker(int *);
		virtual long GetActivationType(unsigned long *);
		virtual long GetAttributes(_GUID const &,void * *);
		virtual long GetClassContext(tagCLSCTX,tagCLSCTX *);
		virtual long GetClassNameW(unsigned short const * *);
		virtual long GetClsid(_GUID *);
		virtual long GetConfiguredClsid(_GUID * *);
		virtual long GetDeployingPackageName(unsigned short const * *);
		virtual long GetDllPath(unsigned short * *);
		virtual long GetExecutionPackageName(HSTRING__ * *);
		virtual long GetImplementedClsid(_GUID * *);
		virtual long GetImplementedInterfaces(unsigned long *,_GUID * *);
		virtual long GetLocalServerType(tagLocalServerType *);
		virtual long GetModulePath(tagCLSCTX,unsigned short * *);
		virtual long GetPermissions(void * *);
		virtual long GetPreferredServerBitness(unsigned long *);
		virtual long GetProcess(_GUID const &,void * *);
		virtual long GetRegistrationScope(unsigned long *);
		virtual long GetRemoteServerName(unsigned short * *);
		virtual long GetServerExecutable(unsigned short * *);
		virtual long GetServerInfo(IWinRTServerInfo * *);
		virtual long GetServerName(unsigned short * *);
		virtual long GetSource(RegistrationSource *);
		virtual long GetThreadingModel(ThreadingModel *);
		virtual long GetThreadingModel(unsigned long *);
		virtual long GetTrustLevel(unsigned long *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long RefreshNeeded(IUserToken *,int *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
		~CRuntimeClassInfo();
	};

	class CServerInfo
	{
		static _GUID s_guidProcessId;
	public:
		CServerInfo();
		long FinalConstruct(unsigned long,IUserToken *,unsigned short const *,unsigned short const *,IComCatalogSCM *,IActivationCatalogContext *,RegistrationStoreContext::ServerHandleDetail *,RegistrationStoreContext::DebugInformationHandleDetail *,bool);
		virtual long CanBeCached(int *);
		virtual long GetAccessPermission(void * *,unsigned long *);
		virtual long GetActivatableClasses(unsigned short * *,unsigned long *);
		virtual long GetAppIDFlags(unsigned long *);
		virtual long GetAppIdMapping(_GUID * *);
		virtual long GetAppUserModelID(unsigned short * *);
		virtual long GetApplicationId(unsigned short const * *);
		virtual long GetAttributes(_GUID const &,void * *);
		virtual long GetAuthenticationLevel(unsigned long *);
		virtual long GetCommandLineW(unsigned short * *,int *);
		virtual long GetDebugEnvironment(unsigned short * *,unsigned long *);
		virtual long GetDebuggerCommandLine(unsigned short * *);
		virtual long GetDeployingPackageName(unsigned short const * *);
		virtual long GetExePath(unsigned short * *);
		virtual long GetExecutionPackageName(unsigned short const * *);
		virtual long GetExplicitPsmActivationType(unsigned long *);
		virtual long GetIdentity(unsigned short * *);
		virtual long GetIdentityType(unsigned long *);
		virtual long GetImpersonationLevel(unsigned long *);
		virtual long GetInstancing(unsigned long *);
		virtual long GetLaunchPermission(void * *,unsigned long *);
		virtual long GetMGOTFlags(unsigned long *);
		virtual long GetModuleType(tagCoModuleType *);
		virtual long GetPermissions(void * *);
		virtual long GetProcessId(_GUID * *);
		virtual long GetProcessName(unsigned short * *);
		virtual long GetProcessType(tagProcessType *);
		virtual long GetQuotedExePath(unsigned short * *);
		virtual long GetROTFlags(unsigned long *);
		virtual long GetRegistrationScope(unsigned long *);
		virtual long GetRunAsType(tagRunAsType *);
		virtual long GetRunAsUser(unsigned short * *);
		virtual long GetRunFullTrust(int *);
		virtual long GetSaferTrustLevel(unsigned long *);
		virtual long GetServerName(unsigned short * *);
		virtual long GetServerType(unsigned long *);
		virtual long GetServiceName(unsigned short * *);
		virtual long GetServiceParameters(unsigned short * *);
		virtual long GetSource(RegistrationSource *);
		virtual long IsUserService(int *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long RefreshNeeded(IUserToken *,int *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
		~CServerInfo();
	};

	struct CServerInfoPropertiesHelper
	{
		CServerInfoPropertiesHelper(Windows::Foundation::RegistrationScope);
		long GetActivatableClasses(MultiString &);
		long GetAttributes(EntryPropertyStore &);
		long GetCommandLineW(ExpandableString &);
		long GetExePath(ExpandableString &);
		long GetIdentityType(Windows::Foundation::IdentityType &);
		long GetPermissions(SecurityDescriptor * *);
		long ReadServerRegistrationEntry(IActivationCatalogContext *,RegistrationStoreContext::ServerHandleDetail *);
	};

	virtual long GetClassInfoW(unsigned long,IUserToken *,_GUID const &,_GUID const &,void * *,void *);
	virtual long GetProxyStubCLSIDForInterface(unsigned long,_GUID const &,unsigned short const *,_GUID *);
	virtual long GetProxyStubClassInfo(unsigned long,_GUID const &,unsigned short const *,_GUID const &,void * *);
	virtual long GetRuntimeClassInfo(unsigned long,IUserToken *,unsigned short const *,unsigned short const *,KnownClsidAndScope const *,int,_GUID const &,void * *,IComCatalogSCM *);
	virtual long GetServerInfo(unsigned long,IUserToken *,unsigned short const *,unsigned short const *,_GUID const &,void * *,IComCatalogSCM *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CWinRTServerData
{
	CWinRTServerData(IWinRTServerInfo *,CToken *,unsigned __int64);
	int CertifyServer(CProcess *);
	long Load();
	tagPreferredServerBitness GetPreferredServerBitness();
	tagRunAsType GetRunAsType();
	void Purge();
};

struct CWinRTServerTable
{
	CWinRTServerTableEntry * Create(HSTRING__ *,HSTRING__ *,void *);
	CWinRTServerTableEntry * GetOrCreate(HSTRING__ *,HSTRING__ *,void *);
	CWinRTServerTableEntry * Lookup(HSTRING__ *,HSTRING__ *,void *);
};

class CWinRTServerTableEntry
{
	virtual void * GetSIDForServerIdentity();
	virtual void AddEntryToProcess(CServerListEntry *);
	virtual void GetIdentifierStringForLogging(HSTRING__ * *);
public:
	CWinRTServerTableEntry(long &,HSTRING__ *,HSTRING__ *,void *);
	virtual int Compare(CTableElement const *);
	virtual int Compare(CTableKey &);
	virtual unsigned long Hash();
	virtual unsigned long Release();
	virtual void AddRef();
};

namespace ComBlob
{
	long DuplicateBlob(tagBLOB *,tagBLOB * *);
	void DeleteBlob(tagBLOB *);
};

struct ComClassRegistrationEntryProperties
{
	ComClassRegistrationEntryProperties();
	~ComClassRegistrationEntryProperties();
};

struct ComProxyStubRegistrationEntryProperties
{
	~ComProxyStubRegistrationEntryProperties();
};

struct ComServerRegistrationEntryProperties
{
	~ComServerRegistrationEntryProperties();
};

struct ComTrace
{
	static void Failure<wil::FailureInfo const &>(wil::FailureInfo const &);
	void Error_(long,unsigned short const *,wil::DiagnosticsInfo const &);
	void Failure_(wil::FailureInfo const &);
	void Warning_(long,unsigned short const *,wil::DiagnosticsInfo const &);
};

struct ComTypeLibVersionRegistrationEntryProperties
{
	ComTypeLibVersionRegistrationEntryProperties & operator=(ComTypeLibVersionRegistrationEntryProperties const &);
	~ComTypeLibVersionRegistrationEntryProperties();
};

struct ConsoleHandlesStorage
{
	~ConsoleHandlesStorage();
};

struct ContextInfo
{
	long GetInternalClientContext(CObjectContext * *);
	long GetInternalPrototypeContext(CObjectContext * *);
	virtual long GetCLSID(_GUID *);
	virtual long GetClientContext(IContext * *);
	virtual long GetPrototypeContext(IContext * *);
	virtual long GetSize(void *,unsigned long *);
	virtual long IsClientContextOK(int *);
	virtual long OverrideTargetContext(_GUID const &);
	virtual long PrototypeExists(int *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SerializableQueryInterface(_GUID const &,void * *);
	virtual long Serialize(void *);
	virtual long SetClientContext(IContext *);
	virtual long SetClientContextNotOK();
	virtual long SetPrototypeContext(IContext *);
	virtual long UnSerialize(void *);
	virtual long UnSerializeCallBack(_GUID const &,ISerializable * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~ContextInfo();
};

struct CookieToValueMap<ConsoleHandlesStorage>
{
	long Add(ConsoleHandlesStorage,unsigned __int64 *);
	long GetAndRemove(unsigned __int64,ConsoleHandlesStorage &);
	void Remove(unsigned __int64);
};

struct EntryPropertyStore
{
	long ForceToMemory();
	long GetIsEmpty(bool *);
};

class EventPoolEntry
{
	static EventPoolEntry::InitState s_initState;
	static _SLIST_HEADER s_eventPool;
public:
	static EventPoolEntry * CreatePoolEntry(int);
	static int ThreadInit();
	static void DeletePoolEntry(EventPoolEntry *);
	static void ThreadCleanup();
};

struct ExtensionActivationContextProperties
{
	virtual long GetCLSID(_GUID *);
	virtual long GetComponentProcessId(_GUID *);
	virtual long GetConsoleHandlesId(unsigned __int64 *);
	virtual long GetHostId(unsigned __int64 *);
	virtual long GetLpacAttributes(tagBLOB * *);
	virtual long GetRacActivationTokenId(unsigned __int64 *);
	virtual long GetSize(void *,unsigned long *);
	virtual long GetUserContext(unsigned __int64 *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SerializableQueryInterface(_GUID const &,void * *);
	virtual long Serialize(void *);
	virtual long SetComponentProcessId(_GUID const &);
	virtual long SetConsoleHandlesId(unsigned __int64);
	virtual long SetHostId(unsigned __int64);
	virtual long SetLpacAttributes(tagBLOB *);
	virtual long SetRacActivationTokenId(unsigned __int64);
	virtual long SetUserContext(unsigned __int64);
	virtual long UnSerialize(void *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

namespace FeatureDevelopmentProperties
{
	struct PropertyScopeState
	{
		PropertyScopeState();
		~PropertyScopeState();
	};

	struct PropertyState<bool>
	{
		PropertyState<bool>();
	};

	struct PropertyState<unsigned int>
	{
		PropertyState<unsigned int>();
	};

	FeatureDevelopmentProperties::BoolPropertyDescriptor const * const g_aBoolPropertyDescriptors;
	bool IsDefinitiveKeyPresenceResult(long);
	bool Query(FeatureDevelopmentProperties::BoolProperty,bool *);
	long OpenPerApplicationUserModelIdSubkey(RegistryKey const &,RegistryKey &);
	long OpenPerExeSubkey(RegistryKey const &,RegistryKey &);
	long OpenPerPackageFamilySubkey(RegistryKey const &,RegistryKey &);
	long OpenSelfKey(RegistryKey const &,RegistryKey &);
	void InitializeTopLevelKeyInHKCU();
	void InitializeTopLevelKeyInHKLM();
};

struct GenericCoTaskMemStream
{
	GenericCoTaskMemStream(unsigned long);
	virtual IStream * Clone();
};

struct GenericStream
{
	GenericStream(tagInterfaceData *);
	GenericStream(unsigned long);
	virtual IStream * Clone();
	virtual ~GenericStream();
};

struct GenericStreamBase<IMarshalingStream,AllocationWrapper>
{
	virtual long Clone(IStream * *);
	virtual long Commit(unsigned long);
	virtual long CopyTo(IStream *,_ULARGE_INTEGER,_ULARGE_INTEGER *,_ULARGE_INTEGER *);
	virtual long GetBuffer(unsigned long *,unsigned char * *);
	virtual long GetCopy(unsigned char *);
	virtual long GetLength(unsigned long *);
	virtual long GetOrCreateBuffer(unsigned long,unsigned long *,unsigned char * *);
	virtual long LockRegion(_ULARGE_INTEGER,_ULARGE_INTEGER,unsigned long);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Read(void *,unsigned long,unsigned long *);
	virtual long Revert();
	virtual long Seek(_LARGE_INTEGER,unsigned long,_ULARGE_INTEGER *);
	virtual long SetBuffer(unsigned long,unsigned char *);
	virtual long SetCopyAlignment(unsigned long);
	virtual long SetPosition(unsigned long,unsigned long);
	virtual long SetSize(_ULARGE_INTEGER);
	virtual long Stat(tagSTATSTG *,unsigned long);
	virtual long UnlockRegion(_ULARGE_INTEGER,_ULARGE_INTEGER,unsigned long);
	virtual long Write(void const *,unsigned long,unsigned long *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~GenericStreamBase<IMarshalingStream,AllocationWrapper>();
};

struct GenericStreamBase<IStream,AllocationWrapper>
{
	virtual long Clone(IStream * *);
	virtual long Commit(unsigned long);
	virtual long CopyTo(IStream *,_ULARGE_INTEGER,_ULARGE_INTEGER *,_ULARGE_INTEGER *);
	virtual long GetBuffer(unsigned long *,unsigned char * *);
	virtual long GetCopy(unsigned char *);
	virtual long GetLength(unsigned long *);
	virtual long GetOrCreateBuffer(unsigned long,unsigned long *,unsigned char * *);
	virtual long LockRegion(_ULARGE_INTEGER,_ULARGE_INTEGER,unsigned long);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Read(void *,unsigned long,unsigned long *);
	virtual long Revert();
	virtual long Seek(_LARGE_INTEGER,unsigned long,_ULARGE_INTEGER *);
	virtual long SetBuffer(unsigned long,unsigned char *);
	virtual long SetCopyAlignment(unsigned long);
	virtual long SetPosition(unsigned long,unsigned long);
	virtual long SetSize(_ULARGE_INTEGER);
	virtual long Stat(tagSTATSTG *,unsigned long);
	virtual long UnlockRegion(_ULARGE_INTEGER,_ULARGE_INTEGER,unsigned long);
	virtual long Write(void const *,unsigned long,unsigned long *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~GenericStreamBase<IStream,AllocationWrapper>();
	void AssignSerializedInterface(tagInterfaceData * *);
};

struct GenericStreamBase<IStream,CoTaskMemAllocAllocator>
{
	virtual long Clone(IStream * *);
	virtual long Commit(unsigned long);
	virtual long CopyTo(IStream *,_ULARGE_INTEGER,_ULARGE_INTEGER *,_ULARGE_INTEGER *);
	virtual long GetBuffer(unsigned long *,unsigned char * *);
	virtual long GetCopy(unsigned char *);
	virtual long GetLength(unsigned long *);
	virtual long GetOrCreateBuffer(unsigned long,unsigned long *,unsigned char * *);
	virtual long LockRegion(_ULARGE_INTEGER,_ULARGE_INTEGER,unsigned long);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Read(void *,unsigned long,unsigned long *);
	virtual long Revert();
	virtual long Seek(_LARGE_INTEGER,unsigned long,_ULARGE_INTEGER *);
	virtual long SetBuffer(unsigned long,unsigned char *);
	virtual long SetCopyAlignment(unsigned long);
	virtual long SetPosition(unsigned long,unsigned long);
	virtual long SetSize(_ULARGE_INTEGER);
	virtual long Stat(tagSTATSTG *,unsigned long);
	virtual long UnlockRegion(_ULARGE_INTEGER,_ULARGE_INTEGER,unsigned long);
	virtual long Write(void const *,unsigned long,unsigned long *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~GenericStreamBase<IStream,CoTaskMemAllocAllocator>();
};

struct IClassClassicInfo2Impl
{
	virtual long GetServerExecutable(unsigned short * *);
};

struct IClassClassicInfo3Impl
{
	virtual long GetBinaryName(unsigned short * *);
	virtual long GetDisplayName(unsigned short * *);
	virtual long GetExecutionPackageName(unsigned short const * *);
	virtual long GetIconReference(unsigned short * *);
	virtual long GetLUAEnabledSetting(int *);
	virtual long GetOutofprocServerBinaryArchitecture(unsigned long *);
	virtual long GetPreferredServerBitness(unsigned long *);
	virtual long GetUserSettings(int *);
};

struct IClassClassicInfoImpl
{
	virtual long GetLocalServerType(tagLocalServerType *);
	virtual long GetProcess(_GUID const &,void * *);
	virtual long GetRemoteServerName(unsigned short * *);
	virtual long GetSurrogateCommandLine(unsigned short * *);
};

struct IComCatalogInternalImpl
{
	virtual long FlushCache();
	virtual long GetApplicationInfo(IUserToken *,_GUID const &,_GUID const &,void * *,void *);
	virtual long GetApplicationInfoForExe(IUserToken *,unsigned short *,_GUID const &,void * *,void *);
	virtual long GetClassInfoFromProgId(IUserToken *,unsigned short *,_GUID const &,void * *,void *);
	virtual long GetClassInfoW(unsigned long,IUserToken *,_GUID const &,_GUID const &,void * *,void *);
	virtual long GetInterfaceInfo(IUserToken *,_GUID const &,_GUID const &,void * *,void *);
	virtual long GetProcessInfo(IUserToken *,_GUID const &,_GUID const &,void * *,void *);
	virtual long GetRetQueueInfo(IUserToken *,unsigned short *,_GUID const &,void * *,void *);
	virtual long GetServerGroupInfo(IUserToken *,_GUID const &,_GUID const &,void * *,void *);
	virtual long GetTypeLibrary(IUserToken *,_GUID const &,_GUID const &,void * *,void *);
};

struct IComClassInfoImpl
{
	virtual long GetApplication(_GUID const &,void * *);
	virtual long GetClassNameW(unsigned short const * *);
	virtual long GetCustomActivatorClsids(tagACTIVATION_STAGE,_GUID * *);
	virtual long GetCustomActivatorCount(tagACTIVATION_STAGE,unsigned long *);
	virtual long GetCustomActivators(tagACTIVATION_STAGE,ISystemActivator * * *);
	virtual long GetProgId(unsigned short * *);
	virtual long GetTypeInfo(_GUID const &,void * *);
	virtual long GetVersionNumber(unsigned long *,unsigned long *);
	virtual long IsComPlusConfiguredClass(int *);
	virtual long Lock();
	virtual long MustRunInClientContext(int *);
	virtual long Unlock();
};

struct IComProcessInfoImplBase<IComProcessInfo3>
{
	virtual long GetActivateAtStorage(int *);
	virtual long GetAppIDFlags(unsigned long *);
	virtual long GetApplicationId(unsigned short const * *);
	virtual long GetAuthenticationCapabilities(unsigned long *);
	virtual long GetAuthenticationLevel(unsigned long *);
	virtual long GetCommandPathAndDebug(int *,unsigned short * *);
	virtual long GetEndpoints(unsigned long *,tagDCOM_ENDPOINT * *);
	virtual long GetExecutionPackageName(unsigned short const * *);
	virtual long GetImpersonationLevel(unsigned long *);
	virtual long GetLaunchPermission(void * *,unsigned long *);
	virtual long GetMGOTFlags(unsigned long *);
	virtual long GetManifestLocation(unsigned short * *);
	virtual long GetPreferredServerBitness(unsigned long *);
	virtual long GetProcessMitigationPolicy(tagBLOB *);
	virtual long GetProcessName(unsigned short * *);
	virtual long GetROTFlags(unsigned long *);
	virtual long GetRemoteServerName(unsigned short * *);
	virtual long GetRunAsUser(unsigned short * *);
	virtual long GetSaferTrustLevel(unsigned long *);
	virtual long GetServiceName(unsigned short * *);
	virtual long GetServiceParameters(unsigned short * *);
	virtual long GetSurrogatePath(unsigned short * *);
	virtual long GetSurrogateServerExecutable(unsigned short * *);
	virtual long GetUserSettings(int *);
	virtual long IsUserService(int *);
	virtual long SendsProcessEvents(int *);
};

struct IProcessServerInfoImpl
{
	virtual long EnumApplications(IEnumUnknown * *);
	virtual long EnumRetQueues(IEnumUnknown * *);
	virtual long GetCrmLogFileName(unsigned short * *);
	virtual long GetShutdownIdleTime(unsigned long *);
};

struct InstanceInfo
{
	virtual long GetCLSID(_GUID *);
	virtual long GetFile(unsigned short * *,unsigned long *);
	virtual long GetIfdROT(tagMInterfacePointer * *);
	virtual long GetSize(void *,unsigned long *);
	virtual long GetStorage(IStorage * *);
	virtual long GetStorageIFD(tagMInterfacePointer * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SerializableQueryInterface(_GUID const &,void * *);
	virtual long Serialize(void *);
	virtual long SetFile(unsigned short *,unsigned long);
	virtual long SetIfdROT(tagMInterfacePointer *);
	virtual long SetStorage(IStorage *);
	virtual long SetStorageIFD(tagMInterfacePointer *);
	virtual long UnSerialize(void *);
	virtual long UnSerializeCallBack(_GUID const &,ISerializable * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~InstanceInfo();
};

struct InstantiationInfo
{
	long AddRequestedIIDs(unsigned long,_GUID *);
	virtual long GetCLSID(_GUID *);
	virtual long GetSize(void *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SerializableQueryInterface(_GUID const &,void * *);
	virtual long Serialize(void *);
	virtual long UnSerialize(void *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~InstantiationInfo();
};

struct KeyRefreshInfo
{
	KeyRefreshInfo();
	void Clear();
	~KeyRefreshInfo();
};

struct LockEntry
{
	static int ThreadCleanup(void *);
	static void * ThreadInit(unsigned long);
};

namespace Microsoft
{
	namespace WRL
	{
		struct ComPtr<CPackagedComCatalog::CPackagedComClassIdIterator>
		{
			void Attach(CPackagedComCatalog::CPackagedComClassIdIterator *);
		};

		struct ComPtr<CPackagedComCatalog::CPackagedComTypeLibRegistrationIterator>
		{
			void Attach(CPackagedComCatalog::CPackagedComTypeLibRegistrationIterator *);
		};

		class ComPtr<IActivationCatalogContext>
		{
		protected:
			unsigned long InternalRelease();
		public:
			long As<IDebugInformationContext>(Details::ComPtrRef<ComPtr<IDebugInformationContext> >);
		};

		class ComPtr<ICacheRefresh>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IClassClassicInfo3>
		{
		protected:
			unsigned long InternalRelease();
		};

		struct ComPtr<IComCatalogInternal>
		{
			long As<IPackagedComClassCatalogInternal>(Details::ComPtrRef<ComPtr<IPackagedComClassCatalogInternal> >);
			long As<IPackagedComProxyStubCatalogInternal>(Details::ComPtrRef<ComPtr<IPackagedComProxyStubCatalogInternal> >);
			long As<ITypeLibCatalogInternal>(Details::ComPtrRef<ComPtr<ITypeLibCatalogInternal> >);
		};

		class ComPtr<IComCatalogTreatAsClass>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IComClassInfo>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IDebugInformationContext>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IExtensionActivationContextProperties>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IMarshal>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IPackagedComCatalogContext>
		{
		protected:
			unsigned long InternalRelease();
		public:
			ComPtr<IPackagedComCatalogContext> & operator=(ComPtr<IPackagedComCatalogContext> const &);
		};

		class ComPtr<IPackagedComClassCatalogInternal>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IPackagedComProxyStubCatalogInternal>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IRegistration>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ITypeLib>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ITypeLibCatalogInternal>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IUnknown>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<IUnknown> & operator=(ComPtr<IUnknown> const &);
			long As<IComClassInfo>(Details::ComPtrRef<ComPtr<IComClassInfo> >);
		};

		class ComPtr<IUserTokenInternal>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IWinRTRuntimeClassInfo>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IWinRTServerInfo>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *> >
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> *> >
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *> >
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> *> >
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> >
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::Collections::IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> >
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> >
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::Collections::IMapView<HSTRING__ *,IInspectable *> >
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		};

		class ComPtr<Windows::Foundation::Collections::IMapView<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> >
		{
		protected:
			void InternalAddRef();
		};

		class ComPtr<Windows::Foundation::Collections::Internal::HashMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameHashFunction,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits> > >
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits> > >
		{
		protected:
			unsigned long InternalRelease();
		public:
			ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits> > > & operator=(ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits> > > const &);
			void Attach(Windows::Foundation::Collections::Internal::NaiveSplitView<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits> > *);
		};

		class ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits> >::Chunk>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::Collections::Internal::SimpleKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,0> >
		{
		protected:
			unsigned long InternalRelease();
		};

		namespace Details
		{
			class ImplementsHelper<RuntimeClassFlags<2>,1,IClassClassicInfo2Impl,IClassClassicInfo3Impl,IComClassCategoryInfo,IOleClassInfo,ICacheRefresh,IRegistration>
			{
			protected:
				long CanCastToHelper<0>(_GUID const &,void * *,bool *);
			};

			struct ModuleBase
			{
				static ModuleBase * module_;
			};

			class RuntimeClassBaseT<1>
			{
			protected:
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> *> > >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> *> > *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> > >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> > *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> *> > >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> *> > *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMapView<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> *> > >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMapView<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> *> > *,_GUID const &,void * *);
			};

			class RuntimeClassBaseT<2>
			{
			protected:
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ChainInterfaces<IComProcessInfoImpl<IComProcessInfo3>,IComProcessInfo2,IComProcessInfo,Nil,Nil,Nil,Nil,Nil,Nil,Nil>,IProcessServerInfoImpl,ICacheRefresh,IRegistration> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ChainInterfaces<IComProcessInfoImpl<IComProcessInfo3>,IComProcessInfo2,IComProcessInfo,Nil,Nil,Nil,Nil,Nil,Nil,Nil>,IProcessServerInfoImpl,ICacheRefresh,IRegistration> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IComClassInfoImpl,IClassClassicInfoImpl,IClassClassicInfo2Impl,IClassClassicInfo3Impl,IComClassCategoryInfo,IOleClassInfo,ICacheRefresh,IRegistration> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IComClassInfoImpl,IClassClassicInfoImpl,IClassClassicInfo2Impl,IClassClassicInfo3Impl,IComClassCategoryInfo,IOleClassInfo,ICacheRefresh,IRegistration> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ITypeLibRegistration,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ITypeLibRegistration,FtmBase> *,_GUID const &,void * *);
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> *> >
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> *> >();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> >
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> >();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> *> >
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> *> >();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMapView<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> *> >
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMapView<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> *> >();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ChainInterfaces<IComProcessInfoImpl<IComProcessInfo3>,IComProcessInfo2,IComProcessInfo,Nil,Nil,Nil,Nil,Nil,Nil,Nil>,IProcessServerInfoImpl,ICacheRefresh,IRegistration>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IComCatalogInternalImpl,IComCatalogTreatAsClass,IPackagedComProxyStubCatalogInternal,IPackagedComClassCatalogInternal,ITypeLibCatalogInternal>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IComClassInfoImpl,IClassClassicInfoImpl,IClassClassicInfo2Impl,IClassClassicInfo3Impl,IComClassCategoryInfo,IOleClassInfo,ICacheRefresh,IRegistration>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IComClassInfoImpl,IClassClassicInfoImpl>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IPackagedComClassIdIterator>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IPackagedComProgIdIterator>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ITypeLibRegistration,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ITypeLibRegistrationIterator>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IWeakReference>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct WeakReferenceImpl
			{
				WeakReferenceImpl(IUnknown *);
				virtual long Resolve(_GUID const &,IInspectable * *);
			};

			ComPtr<CPackagedComCatalog::CPackagedComProxyStubClassInfo> Make<CPackagedComCatalog::CPackagedComProxyStubClassInfo,_GUID const &,OpaqueString &>(_GUID const &,OpaqueString &);
			ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits> >::ChunkView> Make<Windows::Foundation::Collections::Internal::NaiveSplitView<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits> >::ChunkView,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate &>(CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate &);
			Details::WeakReferenceImpl * CreateWeakReference(IUnknown *);
			long MakeAndInitialize<CPackagedComCatalog::CPackagedComClassIdIterator,IPackagedComClassIdIterator,CPackagedComCatalog::CPackagedComClassIdIterator &>(IPackagedComClassIdIterator * *,CPackagedComCatalog::CPackagedComClassIdIterator &);
			long MakeAndInitialize<CPackagedComCatalog::CPackagedComTypeLibRegistrationIterator,ITypeLibRegistrationIterator,CPackagedComCatalog::CPackagedComTypeLibRegistrationIterator &>(ITypeLibRegistrationIterator * *,CPackagedComCatalog::CPackagedComTypeLibRegistrationIterator &);
		};

		struct FtmBase
		{
			virtual long DisconnectObject(unsigned long);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
		};

		struct RuntimeClass<RuntimeClassFlags<2>,IComClassInfoImpl,IClassClassicInfoImpl,IClassClassicInfo2Impl,IClassClassicInfo3Impl,IComClassCategoryInfo,IOleClassInfo,ICacheRefresh,IRegistration>
		{
			RuntimeClass<RuntimeClassFlags<2>,IComClassInfoImpl,IClassClassicInfoImpl,IClassClassicInfo2Impl,IClassClassicInfo3Impl,IComClassCategoryInfo,IOleClassInfo,ICacheRefresh,IRegistration>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,ITypeLibRegistration,FtmBase>
		{
			RuntimeClass<RuntimeClassFlags<2>,ITypeLibRegistration,FtmBase>();
		};

		struct RuntimeClass<Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> *> >
		{
			RuntimeClass<Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> *> >();
		};

		struct RuntimeClass<Windows::Foundation::Collections::IMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> *> >
		{
			RuntimeClass<Windows::Foundation::Collections::IMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> *> >();
		};

		struct RuntimeClass<Windows::Foundation::Collections::IMapView<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> *> >
		{
			RuntimeClass<Windows::Foundation::Collections::IMapView<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> *> >();
		};

		namespace Wrappers
		{
			namespace Details
			{
				class SyncLockExclusive
				{
					void InternalUnlock();
				};

				class SyncLockShared
				{
					void InternalUnlock();
				};

				int CompareStringOrdinal(HSTRING__ *,HSTRING__ *);
			};

			struct HString
			{
				long Set(HSTRING__ * const &);
				long Set(unsigned short const *,unsigned int);
				long Set<39>(unsigned short (&)[39]);
				long Set<unsigned short *>(unsigned short * const &,Details::Dummy);
				long Set<unsigned short const *>(unsigned short const * const &,Details::Dummy);
			};

			class HStringReference
			{
				static unsigned int AddOne(unsigned int);
				void CreateReference(unsigned short const *,unsigned int,unsigned int);
			public:
				HStringReference<39>(unsigned short (&)[39]);
			};

			class HandleT<HandleTraits::EventTraits>
			{
			protected:
				virtual bool InternalClose();
			public:
				void Close();
			};

			class HandleT<HandleTraits::HANDLENullTraits>
			{
			protected:
				virtual bool InternalClose();
			};

		};

	};

};

namespace ObjectLibrary
{
	namespace Details
	{
		class AddGeneralTypeIdentityHelper<CCtxCall,AddTypeIdentityLayersBuilder<CCtxCall,MixinBase<CCtxCall,Mixins_BaseForwarderLayer<ForwardedBases<CBaseCall,ICallFrameWalker,IServerCall> > >,ForwardedBases<CBaseCall,ICallFrameWalker,IServerCall> >::AddTypeIdLayerHelper<MixinBase<CCtxCall,Mixins_BaseForwarderLayer<ForwardedBases<CBaseCall,ICallFrameWalker,IServerCall> > >,PolymorphicType<OneOf<CCtxCall,CSyncClientCall,AsyncComClientCall,WinrtAsyncClientCall,SyncServerCall,AsyncComServerCall,WinrtAsyncServerCall>,CBaseCall,Nil> >,0>
		{
			static GeneralTypeIdentity const s_generalTypeIdentity;
		};

		class ContainerOf_MruCacheImplementationLayer<MruCacheImplementationOptions<RegistrationChangeDetection::PerUserCacheInformation,5>,RegistrationChangeDetection::PerUserCacheInformationCache,ContainerOf_LockingLayer<RegistrationChangeDetection::PerUserCacheInformationCache,ContainerOf_ReferencesToElementsLayer<ReferencesToElementsOptions<RegistrationChangeDetection::PerUserCacheInformation,0>,RegistrationChangeDetection::PerUserCacheInformationCache,MixinBase<RegistrationChangeDetection::PerUserCacheInformationCache,Mixins_NilBaseForwarderLayer> > > >
		{
			ReferencedPtr<RegistrationChangeDetection::PerUserCacheInformation> AddEntry(ReferencedPtr<RegistrationChangeDetection::PerUserCacheInformation>);
		public:
			ReferencedPtr<RegistrationChangeDetection::PerUserCacheInformation> Find<LockableHelper<RegistrationChangeDetection::PerUserCacheInformationCache,ContainerOf_MruCacheImplementationLayer<MruCacheImplementationOptions<RegistrationChangeDetection::PerUserCacheInformation,5>,RegistrationChangeDetection::PerUserCacheInformationCache,ContainerOf_LockingLayer<RegistrationChangeDetection::PerUserCacheInformationCache,ContainerOf_ReferencesToElementsLayer<ReferencesToElementsOptions<RegistrationChangeDetection::PerUserCacheInformation,0>,RegistrationChangeDetection::PerUserCacheInformationCache,MixinBase<RegistrationChangeDetection::PerUserCacheInformationCache,Mixins_NilBaseForwarderLayer> > > > >::LockWrapper,RegistrationChangeDetection::ComparableSid>(LockableHelper<RegistrationChangeDetection::PerUserCacheInformationCache,ContainerOf_MruCacheImplementationLayer<MruCacheImplementationOptions<RegistrationChangeDetection::PerUserCacheInformation,5>,RegistrationChangeDetection::PerUserCacheInformationCache,ContainerOf_LockingLayer<RegistrationChangeDetection::PerUserCacheInformationCache,ContainerOf_ReferencesToElementsLayer<ReferencesToElementsOptions<RegistrationChangeDetection::PerUserCacheInformation,0>,RegistrationChangeDetection::PerUserCacheInformationCache,MixinBase<RegistrationChangeDetection::PerUserCacheInformationCache,Mixins_NilBaseForwarderLayer> > > > >::LockWrapper const &,RegistrationChangeDetection::ComparableSid const &,void *);
			void Remove<LockableHelper<RegistrationChangeDetection::PerUserCacheInformationCache,ContainerOf_MruCacheImplementationLayer<MruCacheImplementationOptions<RegistrationChangeDetection::PerUserCacheInformation,5>,RegistrationChangeDetection::PerUserCacheInformationCache,ContainerOf_LockingLayer<RegistrationChangeDetection::PerUserCacheInformationCache,ContainerOf_ReferencesToElementsLayer<ReferencesToElementsOptions<RegistrationChangeDetection::PerUserCacheInformation,0>,RegistrationChangeDetection::PerUserCacheInformationCache,MixinBase<RegistrationChangeDetection::PerUserCacheInformationCache,Mixins_NilBaseForwarderLayer> > > > >::LockWrapper>(LockableHelper<RegistrationChangeDetection::PerUserCacheInformationCache,ContainerOf_MruCacheImplementationLayer<MruCacheImplementationOptions<RegistrationChangeDetection::PerUserCacheInformation,5>,RegistrationChangeDetection::PerUserCacheInformationCache,ContainerOf_LockingLayer<RegistrationChangeDetection::PerUserCacheInformationCache,ContainerOf_ReferencesToElementsLayer<ReferencesToElementsOptions<RegistrationChangeDetection::PerUserCacheInformation,0>,RegistrationChangeDetection::PerUserCacheInformationCache,MixinBase<RegistrationChangeDetection::PerUserCacheInformationCache,Mixins_NilBaseForwarderLayer> > > > >::LockWrapper const &,RegistrationChangeDetection::PerUserCacheInformation &,void *);
			void Remove<RegistrationChangeDetection::PerUserCacheInformation>(RegistrationChangeDetection::PerUserCacheInformation &,void *);
		};

		struct LockableHelper<Nil,AddAllocation<AllocationOptions<PrivMemAllocator,0,Nil>,Nil,Nil> >
		{
			struct LockWrapper
			{
				~LockWrapper();
			};

			LockWrapper LockableHelper<Nil,AddAllocation<AllocationOptions<PrivMemAllocator,0,Nil>,Nil,Nil> >::Lock();
		};

		namespace LockableHelper<RegistrationChangeDetection::PerUserCacheInformationCache,ContainerOf_MruCacheImplementationLayer<MruCacheImplementationOptions<RegistrationChangeDetection::PerUserCacheInformation,5>,RegistrationChangeDetection::PerUserCacheInformationCache,ContainerOf_LockingLayer<RegistrationChangeDetection::PerUserCacheInformationCache,ContainerOf_ReferencesToElementsLayer<ReferencesToElementsOptions<RegistrationChangeDetection::PerUserCacheInformation,0>,RegistrationChangeDetection::PerUserCacheInformationCache,MixinBase<RegistrationChangeDetection::PerUserCacheInformationCache,Mixins_NilBaseForwarderLayer> > > > >
		{
			struct LockWrapper
			{
				~LockWrapper();
			};

		};

		void LogicalError(long,void const *);
	};

	class IComReferenceCounting
	{
		virtual void Dummy();
	};

	struct ReferencedPtr<RegistrationChangeDetection::PerUserCacheInformation>
	{
		ReferencedPtr<RegistrationChangeDetection::PerUserCacheInformation>();
		~ReferencedPtr<RegistrationChangeDetection::PerUserCacheInformation>();
	};

};

struct OpaqueDataInfo
{
	long CopyOpaqueData(tagOpaqueData *,tagOpaqueData *,unsigned long,int);
	virtual long AddOpaqueData(tagOpaqueData *);
	virtual long DeleteOpaqueData(_GUID const &);
	virtual long GetAllOpaqueData(tagOpaqueData * *);
	virtual long GetCLSID(_GUID *);
	virtual long GetOpaqueData(_GUID const &,tagOpaqueData * *);
	virtual long GetOpaqueDataCount(unsigned long *);
	virtual long GetSize(void *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SerializableQueryInterface(_GUID const &,void * *);
	virtual long Serialize(void *);
	virtual long SetParent(ISerializableParent *);
	virtual long UnSerialize(void *);
	virtual long UnSerializeCallBack(_GUID const &,ISerializable * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct OpaqueString
{
	OpaqueString & operator=(OpaqueString const &);
	OpaqueString(OpaqueString const &);
};

struct Optional<OpaqueString>
{
	OpaqueString GetValueOrDefault(OpaqueString const &);
};

struct PackageIdAndInstallOrder
{
	PackageIdAndInstallOrder();
	~PackageIdAndInstallOrder();
};

class PackageListBuffer
{
	long GrowDynamicBuffer();
public:
	PackageIdAndInstallOrder * RemoveAt(PackageIdAndInstallOrder *);
	PackageListBuffer();
	long AddPackage(OpaqueString const &,unsigned int);
	long Clone(PackageListBuffer &);
	void Reset();
	~PackageListBuffer();
};

struct ProcessIdentity
{
	ProcessIdentity();
	long GetApplicationUserModelId(unsigned int,unsigned short *);
	long GetPackageFamilyName(unsigned int,unsigned short *);
	~ProcessIdentity();
};

struct ProcessToken
{
	ProcessToken();
	bool IsAppContainer();
	bool IsUserHiveOk();
	~ProcessToken();
};

namespace RegistrationChangeDetection
{
	struct NotificationChecker
	{
		long RegisterNotification(ObjectLibrary::Details::LockableHelper<ObjectLibrary::Details::Nil,ObjectLibrary::AddAllocation<ObjectLibrary::AllocationOptions<PrivMemAllocator,0,ObjectLibrary::Details::Nil>,ObjectLibrary::Details::Nil,ObjectLibrary::Details::Nil> >::LockWrapper const &);
	};

	class PerUserCacheInformation
	{
		long CheckForNoHive(IUserTokenInternal *);
		long CheckForRefresh(IUserToken *,bool *);
	public:
		PerUserCacheInformation(void *);
		long EnsurePopulated(IUserToken *,bool *);
		virtual bool RefreshNeeded(IUserToken *,unsigned __int64);
	};

	bool RefreshNeeded(unsigned __int64);
	long GetPerUserCacheInformation(IUserToken *,unsigned __int64 *,RegistrationChangeDetection::IPerUserCacheInformation * *);
	long InitializeForCombaseIfNecessary();
	long InitializeForRpcssIfNecessary();
	unsigned __int64 GetSequence();
};

class RegistryKey
{
	long ReadStringValueWorker<128>(unsigned short const *,unsigned long,HSTRING__ * *,bool *);
	static long StaticOpen(HKEY__ *,unsigned short const *,unsigned long,HKEY__ * *);
	static long StaticOpenCurrentUser(unsigned long,HKEY__ * *);
	static long StaticOpenProcessUserLocalSettingsKey(unsigned long,HKEY__ * *);
public:
	long GetValue(unsigned short const *,unsigned short const *,unsigned long,unsigned long *,void *,unsigned long *);
	long QueryValue(unsigned short const *,unsigned long *,void *,unsigned long *);
	long ReadDWORDValue(unsigned short const *,unsigned long *);
	void Close();
};

class RegistryPathWatcher
{
	long OpenDeepestExistingDecendent(RegistryKey &,unsigned short *);
	static long OpenKeyIfExists(RegistryKey &,RegistryKey const &,unsigned short const *);
public:
	bool MayHaveChanged();
	long RegisterNotification(int,unsigned long);
};

class ResourceStrings
{
	struct ResourceStringStorage
	{
		~ResourceStringStorage();
	};

	static Microsoft::WRL::Wrappers::SRWLock s_initializationLock;
	static std::unique_ptr<ResourceStrings::ResourceStringStorage,std::default_delete<ResourceStrings::ResourceStringStorage> > s_spResourceStrings;
	static unsigned short const * const s_defaultRCAccess;
	static unsigned short const * const s_defaultRCActivate;
	static unsigned short const * const s_defaultRCApplicationSpecific;
	static unsigned short const * const s_defaultRCDefault;
	static unsigned short const * const s_defaultRCLRPCAddress;
	static unsigned short const * const s_defaultRCLaunch;
	static unsigned short const * const s_defaultRCLaunchAndActivate;
	static unsigned short const * const s_defaultRCLimits;
	static unsigned short const * const s_defaultRCLocal;
	static unsigned short const * const s_defaultRCMachineDefault;
	static unsigned short const * const s_defaultRCRemote;
	static unsigned short const * const s_defaultRCUnavailable;
	static void LoadResourceStringAndCopyIntoHeapMemory(HINSTANCE__ *,unsigned short,std::unique_ptr<unsigned short [0],std::default_delete<unsigned short [0]> > &);
	static void LoadResourceStrings();
public:
	static unsigned short const * Access();
	static unsigned short const * Activate();
	static unsigned short const * ApplicationSpecific();
	static unsigned short const * Launch();
	static unsigned short const * LaunchAndActivate();
	static unsigned short const * Local();
	static unsigned short const * MachineDefault();
	static unsigned short const * Remote();
	static unsigned short const * Unavailable();
};

class RoVariant
{
	RoVariant(IInspectable *,bool,bool);
public:
	~RoVariant();
};

namespace RpcssTestLog
{
	void Log(unsigned short,...);
	void LogWithRelatedProcess(unsigned long,unsigned short,...);
	void LogWithRelatedProcesses<2>(unsigned long const (&)[2],unsigned short,...);
};

struct ScmReplyInfo
{
	virtual long GetCLSID(_GUID *);
	virtual long GetRemoteReplyInfo(_REMOTE_REPLY_SCM_INFO * *);
	virtual long GetResolverInfo(_PRIV_RESOLVER_INFO * *);
	virtual long GetSize(void *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset();
	virtual long SerializableQueryInterface(_GUID const &,void * *);
	virtual long Serialize(void *);
	virtual long SetRemoteReplyInfo(_REMOTE_REPLY_SCM_INFO *);
	virtual long SetResolverInfo(_PRIV_RESOLVER_INFO *);
	virtual long UnSerialize(void *);
	virtual long UnSerializeCallBack(_GUID const &,ISerializable * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~ScmReplyInfo();
	void freeRemoteReplyInfo();
	void freeResolverInfo();
};

struct ScmRequestInfo
{
	virtual long GetCLSID(_GUID *);
	virtual long GetRemoteRequestInfo(_REMOTE_REQUEST_SCM_INFO * *);
	virtual long GetScmInfo(_PRIV_SCM_INFO * *);
	virtual long GetSize(void *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset();
	virtual long SerializableQueryInterface(_GUID const &,void * *);
	virtual long Serialize(void *);
	virtual long SetRemoteRequestInfo(_REMOTE_REQUEST_SCM_INFO *);
	virtual long SetScmInfo(_PRIV_SCM_INFO *);
	virtual long UnSerialize(void *);
	virtual long UnSerializeCallBack(_GUID const &,ISerializable * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~ScmRequestInfo();
	void freeRemoteRequest(_REMOTE_REQUEST_SCM_INFO *);
	void freeScmInfo(_PRIV_SCM_INFO *);
};

class SecurityInfo
{
	long DoCoAuthIdentityFixup();
	long DoPostUnserializeCoAuthFixup();
	static void SecureStringFree(unsigned short *,unsigned __int64);
public:
	static void freeCOAUTHIDENTITY(_COAUTHIDENTITY *);
	static void freeCOAUTHINFO(_COAUTHINFO *);
	static void freeCOSERVERINFO(_COSERVERINFO *);
	virtual long GetAuthIdentity(_COAUTHIDENTITY * *);
	virtual long GetAuthnFlags(unsigned long *);
	virtual long GetAuthnLevel(unsigned long *);
	virtual long GetAuthnSvc(unsigned long *);
	virtual long GetAuthzSvc(unsigned long *);
	virtual long GetCLSID(_GUID *);
	virtual long GetCOSERVERINFO(_COSERVERINFO * *);
	virtual long GetCapabilities(unsigned long *);
	virtual long GetImpLevel(unsigned long *);
	virtual long GetServerPrincipalName(unsigned short * *);
	virtual long GetSize(void *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset();
	virtual long SerializableQueryInterface(_GUID const &,void * *);
	virtual long Serialize(void *);
	virtual long SetAuthIdentity(_COAUTHIDENTITY *);
	virtual long SetAuthnFlags(unsigned long);
	virtual long SetAuthnLevel(unsigned long);
	virtual long SetAuthnSvc(unsigned long);
	virtual long SetAuthzSvc(unsigned long);
	virtual long SetCOAUTHINFO(_COAUTHINFO *);
	virtual long SetCOSERVERINFO(_COSERVERINFO *);
	virtual long SetCapabilities(unsigned long);
	virtual long SetImpLevel(unsigned long);
	virtual long SetServerPrincipalName(unsigned short *);
	virtual long UnSerialize(void *);
	virtual long UnSerializeCallBack(_GUID const &,ISerializable * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~SecurityInfo();
};

struct SerializableProperty
{
	virtual long SetParent(ISerializableParent *);
};

struct Serializer
{
	long GetSizingHandle(void *);
	long InitStream(IStream *,unsigned long &,unsigned long,void * &);
	long SetPosition(unsigned long);
	unsigned long Release();
	~Serializer();
};

struct ServerLocationInfo
{
	virtual long GetApartment(unsigned long *);
	virtual long GetCLSID(_GUID *);
	virtual long GetContext(IObjContext * *);
	virtual long GetProcess(unsigned long *,unsigned long *);
	virtual long GetRemoteServerName(unsigned short * *);
	virtual long GetSize(void *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SerializableQueryInterface(_GUID const &,void * *);
	virtual long Serialize(void *);
	virtual long SetApartment(unsigned long);
	virtual long SetContext(IObjContext *);
	virtual long SetProcess(unsigned long,unsigned long);
	virtual long SetRemoteServerName(unsigned short *);
	virtual long UnSerialize(void *);
	virtual long UnSerializeCallBack(_GUID const &,ISerializable * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~ServerLocationInfo();
};

struct ServerMachineRegistrationEntryProperties
{
	~ServerMachineRegistrationEntryProperties();
};

struct SpecialProperties
{
	virtual long FlagClear(unsigned long);
	virtual long FlagQuery(unsigned long);
	virtual long FlagSet(unsigned long);
	virtual long GetCLSID(_GUID *);
	virtual long GetClientImpersonating(int *);
	virtual long GetDefaultAuthenticationLevel(unsigned long *);
	virtual long GetLUARunLevel(unsigned long *,unsigned __int64 *);
	virtual long GetOrigClsctx(unsigned long *);
	virtual long GetPartitionId(_GUID *);
	virtual long GetProcessRequestType(unsigned long *);
	virtual long GetServerPid(unsigned long *);
	virtual long GetServiceId(unsigned long *);
	virtual long GetSessionId(unsigned long *,int *);
	virtual long GetSessionId2(unsigned long *,int *,int *);
	virtual long GetSize(void *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SerializableQueryInterface(_GUID const &,void * *);
	virtual long Serialize(void *);
	virtual long SetClientImpersonating(int);
	virtual long SetDefaultAuthenticationLevel(unsigned long);
	virtual long SetLUARunLevel(unsigned long,unsigned __int64);
	virtual long SetOrigClsctx(unsigned long);
	virtual long SetPartitionId(_GUID const &);
	virtual long SetProcessRequestType(unsigned long);
	virtual long SetServerPid(unsigned long);
	virtual long SetServiceId(unsigned long);
	virtual long SetSessionId(unsigned long,int,int);
	virtual long UnSerialize(void *);
	virtual long UnSerializeCallBack(_GUID const &,ISerializable * *);
	virtual long UnsetServerPid();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class StringCache
{
	static void FreeStoredString(unsigned short const *);
public:
	void TryPutValue(unsigned __int64,unsigned short const *);
};

struct UserContextProperties
{
	virtual long GetCLSID(_GUID *);
	virtual long GetSize(void *,unsigned long *);
	virtual long GetUserContext(unsigned __int64 *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SerializableQueryInterface(_GUID const &,void * *);
	virtual long Serialize(void *);
	virtual long SetUserContext(unsigned __int64);
	virtual long UnSerialize(void *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct WinRTActivationProperties
{
	virtual long GetActivatableClassId(HSTRING__ * *);
	virtual long GetCLSID(_GUID *);
	virtual long GetPackageFullName(HSTRING__ * *);
	virtual long GetSize(void *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SerializableQueryInterface(_GUID const &,void * *);
	virtual long Serialize(void *);
	virtual long SetActivatableClassId(HSTRING__ *);
	virtual long SetPackageFullName(HSTRING__ *);
	virtual long UnSerialize(void *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

namespace Windows
{
	namespace Foundation
	{
		namespace Collections
		{
			namespace Detail
			{
				long _IteratorGetMany<IIterator_impl<IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> *,1>,IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> *>(IIterator_impl<IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> *,1> *,unsigned int,IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> * *,unsigned int *);
			};

			struct IIterator_impl<IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> *,1>
			{
				virtual long GetMany(unsigned int,IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> * *,unsigned int *);
			};

			namespace Internal
			{
				class HashMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameHashFunction,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits,DefaultLifetimeTraits<unsigned int>,DefaultHashMapOptions<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits> >
				{
					class Iterator
					{
						long EnsureVersionMatches();
					public:
						Iterator(HashMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameHashFunction,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits,DefaultLifetimeTraits<unsigned int>,DefaultHashMapOptions<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits> > *);
						virtual long GetIids(unsigned long *,_GUID * *);
						virtual long GetMany(unsigned int,IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> * * const,unsigned int *);
						virtual long GetRuntimeClassName(HSTRING__ * *);
						virtual long GetTrustLevel(TrustLevel *);
						virtual long MoveNext(unsigned char *);
						virtual long QueryInterface(_GUID const &,void * *);
						virtual long get_Current(IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> * *);
						virtual long get_HasCurrent(unsigned char *);
						virtual unsigned long AddRef();
						virtual unsigned long Release();
					};

					class View
					{
						long EnsureVersionMatches();
					public:
						View(HashMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameHashFunction,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits,DefaultLifetimeTraits<unsigned int>,DefaultHashMapOptions<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits> > *,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate);
						virtual long First(IIterator<IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> *> * *);
						virtual long GetIids(unsigned long *,_GUID * *);
						virtual long GetRuntimeClassName(HSTRING__ * *);
						virtual long GetTrustLevel(TrustLevel *);
						virtual long HasKey(PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned char *);
						virtual long Lookup(PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int *);
						virtual long QueryInterface(_GUID const &,void * *);
						virtual long Split(IMapView<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> * *,IMapView<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> * *);
						virtual long get_Size(unsigned int *);
						virtual unsigned long AddRef();
						virtual unsigned long Release();
					};

					long EnsureInitialized();
					long Initialize();
					static void _Free(XWinRT::XHashMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,HashMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameHashFunction,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits,DefaultLifetimeTraits<unsigned int>,DefaultHashMapOptions<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits> >::KeyTraits,XWinRT::CElementTraits<unsigned int> > *);
					void _EraseAll(XWinRT::XHashMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,HashMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameHashFunction,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits,DefaultLifetimeTraits<unsigned int>,DefaultHashMapOptions<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits> >::KeyTraits,XWinRT::CElementTraits<unsigned int> > *);
				public:
					HashMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameHashFunction,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits,DefaultLifetimeTraits<unsigned int>,DefaultHashMapOptions<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits> >(CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameHashFunction const &,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate const &,HashMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameHashFunction,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits,DefaultLifetimeTraits<unsigned int>,DefaultHashMapOptions<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits> >::permission);
					static long Make(CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameHashFunction const &,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate const &,HashMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameHashFunction,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits,DefaultLifetimeTraits<unsigned int>,DefaultHashMapOptions<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits> > * *);
					virtual long Clear();
					virtual long First(IIterator<IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> *> * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long GetView(IMapView<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> * *);
					virtual long HasKey(PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned char *);
					virtual long Insert(PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,unsigned char *);
					virtual long Lookup(PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long Remove(PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct HashMapOptions<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits,0,0,0>
				{
					static long RaiseEvent(...);
				};

				class NaiveSplitView<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits,DefaultLifetimeTraits<unsigned int>,DefaultHashMapOptions<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits> >
				{
					class Chunk
					{
						virtual void dummy();
					};

					struct ChunkElementIterator
					{
						virtual long GetIids(unsigned long *,_GUID * *);
						virtual long GetRuntimeClassName(HSTRING__ * *);
						virtual long GetTrustLevel(TrustLevel *);
						virtual long MoveNext(unsigned char *);
						virtual long QueryInterface(_GUID const &,void * *);
						virtual long get_Current(IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> * *);
						virtual long get_HasCurrent(unsigned char *);
						virtual unsigned long AddRef();
						virtual unsigned long Release();
					};

					struct ChunkView
					{
						long Initialize(IIterator<IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> *> *);
						virtual long First(IIterator<IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> *> * *);
						virtual long GetIids(unsigned long *,_GUID * *);
						virtual long GetRuntimeClassName(HSTRING__ * *);
						virtual long GetTrustLevel(TrustLevel *);
						virtual long HasKey(PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned char *);
						virtual long Lookup(PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int *);
						virtual long QueryInterface(_GUID const &,void * *);
						virtual long Split(IMapView<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> * *,IMapView<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> * *);
						virtual long get_Size(unsigned int *);
						virtual unsigned long AddRef();
						virtual unsigned long Release();
					};

					class SplitIterator
					{
						long EnsureForced();
					public:
						SplitIterator(NaiveSplitView<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits,DefaultLifetimeTraits<unsigned int>,DefaultHashMapOptions<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits> > *);
						virtual long GetIids(unsigned long *,_GUID * *);
						virtual long GetRuntimeClassName(HSTRING__ * *);
						virtual long GetTrustLevel(TrustLevel *);
						virtual long MoveNext(unsigned char *);
						virtual long QueryInterface(_GUID const &,void * *);
						virtual long get_Current(IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> * *);
						virtual long get_HasCurrent(unsigned char *);
						virtual unsigned long AddRef();
						virtual unsigned long Release();
					};

					long EnsureInitialized();
					long Force();
					long Initialize(IMapView<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> *);
				public:
					NaiveSplitView<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits,DefaultLifetimeTraits<unsigned int>,DefaultHashMapOptions<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits> >(CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate const &,NaiveSplitView<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits,DefaultLifetimeTraits<unsigned int>,DefaultHashMapOptions<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits> >::permission);
					static long Split(IMapView<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> *,IMapView<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> * *,IMapView<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> * *,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate const &);
					virtual long First(IIterator<IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> *> * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long HasKey(PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned char *);
					virtual long Lookup(PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long Split(IMapView<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> * *,IMapView<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> * *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				class SimpleKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits,DefaultLifetimeTraits<unsigned int>,0>
				{
					long Initialize(PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair const &,unsigned int const &);
				public:
					SimpleKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits,DefaultLifetimeTraits<unsigned int>,0>(SimpleKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits,DefaultLifetimeTraits<unsigned int>,0>::permission);
					static long Make(PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair const &,unsigned int const &,SimpleKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits,DefaultLifetimeTraits<unsigned int>,0> * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Key(PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair *);
					virtual long get_Value(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

			};

		};

		long ActivateInstance<Microsoft::WRL::ComPtr<Collections::IMap<HSTRING__ *,IInspectable *> > >(HSTRING__ *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Foundation::Collections::IMap<HSTRING__ *,IInspectable *> > >);
	};

};

namespace XWinRT
{
	struct ComLock
	{
		ComLock(bool);
	};

	namespace FakeStl
	{
		void swap<XHashMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,Windows::Foundation::Collections::Internal::HashMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameHashFunction,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits> >::KeyTraits,CElementTraits<unsigned int> > >(XHashMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,Windows::Foundation::Collections::Internal::HashMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameHashFunction,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits> >::KeyTraits,CElementTraits<unsigned int> > &,XHashMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,Windows::Foundation::Collections::Internal::HashMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameHashFunction,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits> >::KeyTraits,CElementTraits<unsigned int> > &);
	};

	namespace SecureVersionTag
	{
		struct Tag
		{
			long Release();
		};

		struct TagManager
		{
			long ChangeVersion();
		};

	};

	struct SerializingLockPolicy
	{
		static detail::LockHolder<ComLock,detail::AcquireRead> Read(ComLock &,long *);
		static detail::LockHolder<ComLock,detail::AcquireWrite> Write(ComLock &,long *);
	};

	class XHashMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,Windows::Foundation::Collections::Internal::HashMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameHashFunction,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits> >::KeyTraits,CElementTraits<unsigned int> >
	{
		long CreateNode(PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair const &,unsigned int,unsigned int,XHashMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,Windows::Foundation::Collections::Internal::HashMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameHashFunction,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits> >::KeyTraits,CElementTraits<unsigned int> >::CNode * *);
		long FreeNode(XHashMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,Windows::Foundation::Collections::Internal::HashMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameHashFunction,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits> >::KeyTraits,CElementTraits<unsigned int> >::CNode *);
		long GetNode(PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair const &,unsigned int &,unsigned int &,XHashMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,Windows::Foundation::Collections::Internal::HashMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameHashFunction,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits> >::KeyTraits,CElementTraits<unsigned int> >::CNode * &,XHashMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,Windows::Foundation::Collections::Internal::HashMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameHashFunction,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits> >::KeyTraits,CElementTraits<unsigned int> >::CNode * *);
		long NewNode(PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair const &,unsigned int,unsigned int,XHashMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,Windows::Foundation::Collections::Internal::HashMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameHashFunction,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits> >::KeyTraits,CElementTraits<unsigned int> >::CNode * *);
		unsigned int PickSize(unsigned __int64);
		void FreePlexes();
		void UpdateRehashThresholds();
	public:
		TXPOSITION * GetStartPosition();
		XHashMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,Windows::Foundation::Collections::Internal::HashMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameHashFunction,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits> >::KeyTraits,CElementTraits<unsigned int> >(void *,unsigned int,float,float,float,unsigned int);
		long InitHashTable(unsigned int,bool,bool *);
		long Lookup(PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair const &,XHashMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,Windows::Foundation::Collections::Internal::HashMap<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameHashFunction,CPackagedComCatalog::TypeLibVersionLocaleIdPairRegistryNameEqualityPredicate,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int,CPackagedComCatalog::TypeLibVersionLocaleIdPairLifetimeTraits> >::KeyTraits,CElementTraits<unsigned int> >::CPair * *);
		long Rehash(unsigned int);
		long RemoveAll();
		long RemoveAtPos(TXPOSITION *);
		long SetAt(PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair const &,unsigned int,TXPOSITION * *);
	};

	namespace detail
	{
		struct ReentrancyGuard<0>
		{
			ReentrancyGuard<0>(...);
		};

	};

};

struct _ACTIVATION_PARAMS
{
	~_ACTIVATION_PARAMS();
};

namespace std
{
	struct unique_ptr<RegistryPathWatcher,default_delete<RegistryPathWatcher> >
	{
		~unique_ptr<RegistryPathWatcher,default_delete<RegistryPathWatcher> >();
	};

	struct unique_ptr<ResourceStrings::ResourceStringStorage,default_delete<ResourceStrings::ResourceStringStorage> >
	{
		~unique_ptr<ResourceStrings::ResourceStringStorage,default_delete<ResourceStrings::ResourceStringStorage> >();
	};

	struct unique_ptr<unsigned char,PrivMemDeleter>
	{
		~unique_ptr<unsigned char,PrivMemDeleter>();
	};

	std::pair<PackageIdAndInstallOrder *,PackageIdAndInstallOrder *> _Partition_by_median_guess_unchecked<PackageIdAndInstallOrder *,bool (*)(PackageIdAndInstallOrder const &,PackageIdAndInstallOrder const &)>(PackageIdAndInstallOrder *,PackageIdAndInstallOrder *,bool (*&)(PackageIdAndInstallOrder const &,PackageIdAndInstallOrder const &));
	void _Guess_median_unchecked<PackageIdAndInstallOrder *,bool (*)(PackageIdAndInstallOrder const &,PackageIdAndInstallOrder const &)>(PackageIdAndInstallOrder *,PackageIdAndInstallOrder *,PackageIdAndInstallOrder *,bool (*&)(PackageIdAndInstallOrder const &,PackageIdAndInstallOrder const &));
	void _Insertion_sort_unchecked<PackageIdAndInstallOrder *,bool (*)(PackageIdAndInstallOrder const &,PackageIdAndInstallOrder const &)>(PackageIdAndInstallOrder *,PackageIdAndInstallOrder *,bool (*&)(PackageIdAndInstallOrder const &,PackageIdAndInstallOrder const &));
	void _Make_heap_unchecked<PackageIdAndInstallOrder *,bool (*)(PackageIdAndInstallOrder const &,PackageIdAndInstallOrder const &)>(PackageIdAndInstallOrder *,PackageIdAndInstallOrder *,bool (*&)(PackageIdAndInstallOrder const &,PackageIdAndInstallOrder const &));
	void _Med3_unchecked<PackageIdAndInstallOrder *,bool (*)(PackageIdAndInstallOrder const &,PackageIdAndInstallOrder const &)>(PackageIdAndInstallOrder *,PackageIdAndInstallOrder *,PackageIdAndInstallOrder *,bool (*&)(PackageIdAndInstallOrder const &,PackageIdAndInstallOrder const &));
	void _Reverse_unchecked<ObjectLibrary::ReferencedPtr<RegistrationChangeDetection::PerUserCacheInformation> *>(ObjectLibrary::ReferencedPtr<RegistrationChangeDetection::PerUserCacheInformation> *,ObjectLibrary::ReferencedPtr<RegistrationChangeDetection::PerUserCacheInformation> *);
	void _Sort_heap_unchecked<PackageIdAndInstallOrder *,bool (*)(PackageIdAndInstallOrder const &,PackageIdAndInstallOrder const &)>(PackageIdAndInstallOrder *,PackageIdAndInstallOrder *,bool (*&)(PackageIdAndInstallOrder const &,PackageIdAndInstallOrder const &));
	void _Sort_unchecked1<PackageIdAndInstallOrder *,__int64,bool (*)(PackageIdAndInstallOrder const &,PackageIdAndInstallOrder const &)>(PackageIdAndInstallOrder *,PackageIdAndInstallOrder *,__int64,bool (*&)(PackageIdAndInstallOrder const &,PackageIdAndInstallOrder const &));
	void swap<ObjectLibrary::ReferencedPtr<RegistrationChangeDetection::PerUserCacheInformation>,void>(ObjectLibrary::ReferencedPtr<RegistrationChangeDetection::PerUserCacheInformation> &,ObjectLibrary::ReferencedPtr<RegistrationChangeDetection::PerUserCacheInformation> &);
};

namespace utl
{
	class _Tree<unsigned __int64,pair<unsigned __int64 const ,ConsoleHandlesStorage>,less<unsigned __int64>,allocator<pair<unsigned __int64 const ,ConsoleHandlesStorage> >,0>
	{
		_TreeNode<pair<unsigned __int64 const ,ConsoleHandlesStorage> > * _LowerBoundNonEmpty<unsigned __int64>(unsigned __int64 const &);
		pair<_TreeIt<pair<unsigned __int64 const ,ConsoleHandlesStorage> >,bool> _EmplaceImpl(integral_constant<bool,0>,_TreeNode<pair<unsigned __int64 const ,ConsoleHandlesStorage> > *,_TreeNode<pair<unsigned __int64 const ,ConsoleHandlesStorage> > *);
		pair<_TreeNode<pair<unsigned __int64 const ,ConsoleHandlesStorage> > *,bool> _FindInsertionPointUniqueUpper(_TreeNode<pair<unsigned __int64 const ,ConsoleHandlesStorage> > * &,unsigned __int64 const &);
	};

	class _TreeNodeHeader<pair<unsigned __int64 const ,ConsoleHandlesStorage> >
	{
		_TreeNode<pair<unsigned __int64 const ,ConsoleHandlesStorage> > * _NodeRotate(bool,bool,bool);
		_TreeNode<pair<unsigned __int64 const ,ConsoleHandlesStorage> > * _NodeRotateNonRoot(bool,bool,bool);
	public:
		_TreeNode<pair<unsigned __int64 const ,ConsoleHandlesStorage> > * _Traverse(bool);
		void _HeadInsertNode(_TreeNode<pair<unsigned __int64 const ,ConsoleHandlesStorage> > *,bool,_TreeNode<pair<unsigned __int64 const ,ConsoleHandlesStorage> > *);
		void _HeadUnlinkNode(_TreeNode<pair<unsigned __int64 const ,ConsoleHandlesStorage> > *);
	};

	void * _TreeSentinel;
};

namespace wil
{
	class Feature<__WilFeatureTraits_Feature_PerAppRuntimeBroker>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
		static wil_details_CachedFeatureEnabledState GetCurrentFeatureEnabledState(bool,wil_details_CachedHasNotificationState *);
	};

	struct IterableRangeNoThrow<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>
	{
		struct IterableIteratorNoThrow
		{
			IterableRangeNoThrow<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>::IterableIteratorNoThrow & operator++();
		};

		IterableRangeNoThrow<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>(Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *> *,long *);
	};

	struct IterableRangeNoThrow<Windows::Foundation::Collections::IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> *>
	{
		struct IterableIteratorNoThrow
		{
			IterableRangeNoThrow<Windows::Foundation::Collections::IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> *>::IterableIteratorNoThrow & operator++();
		};

		IterableRangeNoThrow<Windows::Foundation::Collections::IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> *>(Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<PackagedComCatalog::Internal::TypeLibVersionLocaleIdPair,unsigned int> *> *,long *);
	};

	class TraceLoggingProvider
	{
		virtual bool NotifyFailure(FailureInfo const &);
	protected:
		virtual void Initialize();
		virtual void OnErrorReported(bool,FailureInfo const &);
		virtual ~TraceLoggingProvider();
		void ReportTelemetryFailure(FailureInfo const &);
		void ReportTraceLoggingFailure(FailureInfo const &);
	};

	namespace details
	{
		struct DestroyThreadPoolTimer<0>
		{
			static void Destroy(_TP_TIMER *);
		};

		class EnabledStateManager
		{
			void EnsureSubscribedToStateChangesUnderLock();
			void RecordCachedUsageUnderLock();
		public:
			void EnsureSubscribedToUsageFlush(void (*)(void *));
			void OnStateChange();
			void OnTimer();
			void QueueBackgroundUsageReporting(unsigned int,wil_details_FeaturePropertyCache &);
			void SubscribeFeaturePropertyCacheToEnabledStateChanges(wil_details_FeaturePropertyCache *,wil_FeatureChangeTime);
		};

		class FeatureStateManager
		{
			bool EnsureStateData();
			void EnsureSubscribedToProcessWideUsageFlushUnderLock();
		public:
			FeatureStateManager();
			void RecordFeatureUsage(unsigned int,wil_details_ServiceReportingKind,unsigned __int64);
			void SubscribeToEnabledStateChanges(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
			void SubscribeToUsageFlush(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *));
			~FeatureStateManager();
		};

		class ThreadFailureCallbackHolder
		{
			static long volatile s_telemetryId;
		public:
			static bool GetThreadContext(FailureInfo *,ThreadFailureCallbackHolder *,char *,unsigned __int64);
			static void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
		};

		namespace in1diag3
		{
			long Return_GetLastError(void *,unsigned int,char const *);
			long Return_GetLastErrorMsg(void *,unsigned int,char const *,char const *,...);
			long Return_NtStatus(void *,unsigned int,char const *,long);
			long Return_Win32(void *,unsigned int,char const *,unsigned long);
			void FailFast_Unexpected(void *,unsigned int,char const *);
			void FailFast_UnexpectedMsg(void *,unsigned int,char const *,char const *,...);
			void Return_Hr(void *,unsigned int,char const *,long);
			void Return_Hr_NoOriginate(void *,unsigned int,char const *,long);
			void _FailFastImmediate_Unexpected();
			void _FailFast_GetLastError(void *,unsigned int,char const *);
			void _FailFast_Unexpected(void *,unsigned int,char const *);
			void _Log_Hr(void *,unsigned int,char const *,long);
		};

		struct static_lazy<ComTrace>
		{
			struct Completer
			{
				~Completer();
			};

			void cleanup();
		};

		FEATURE_ENABLED_STATE WilApiImpl_GetFeatureEnabledState(unsigned int,FEATURE_CHANGE_TIME);
		bool GetModuleInformation(void *,unsigned int *,char *,unsigned __int64);
		bool IsFeatureConfigured(wil_FeatureState *,unsigned int,bool,wil_FeatureStore);
		bool g_processShutdownInProgress;
		bool g_resultMessageCallbackSet;
		char const * (* g_pfnGetModuleName)();
		char const * GetCurrentModuleName();
		details_abi::ProcessLocalStorage<details_abi::ProcessLocalData> g_processLocalData;
		details_abi::ThreadLocalStorage<details::ThreadFailureCallbackHolder *> * g_pThreadFailureCallbacks;
		details_abi::ThreadLocalStorage<details::ThreadFailureCallbackHolder *> g_threadFailureCallbacks;
		int RecordException(long);
		int RecordFailFast(long);
		int RecordLog(long);
		int RecordReturn(long);
		long GetLastErrorFailHr();
		long NtStatusToHr(long);
		long ReportFailure_GetLastErrorHr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		long ReportFailure_GetLastErrorHrMsg(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,char const *,char *);
		long ReportFailure_NtStatus(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long);
		long ReportFailure_Win32(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,unsigned long);
		shutdown_aware_object<details::EnabledStateManager> g_enabledStateManager;
		shutdown_aware_object<details::FeatureStateManager> g_featureStateManager;
		unsigned __int64 ResultStringSize(char const *);
		unsigned __int64 ResultStringSize(unsigned short const *);
		unsigned char (* g_pfnRtlDllShutdownInProgress)();
		unsigned char * WriteResultString<char const *>(unsigned char *,unsigned char *,char const *,char const * *);
		unsigned char * WriteResultString<unsigned short const *>(unsigned char *,unsigned char *,unsigned short const *,unsigned short const * *);
		unsigned char RtlDllShutdownInProgress();
		unsigned long (* g_pfnRtlNtStatusToDosErrorNoTeb)(long);
		unsigned long GetLastErrorFail(void *,unsigned int,char const *,char const *,char const *,void *);
		unsigned long ReportFailure_GetLastError(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		unsigned long RtlNtStatusToDosErrorNoTeb(long);
		unsigned short * LogStringPrintf(unsigned short *,unsigned short const *,unsigned short const *,...);
		void (* g_pfnDebugBreak)();
		void (* g_pfnGetContextAndNotifyFailure)(FailureInfo *,char *,unsigned __int64);
		void (* g_pfnLoggingCallback)(FailureInfo const &);
		void (* g_pfnOriginateCallback)(FailureType,long);
		void (* g_pfnTelemetryCallback)(bool,FailureInfo const &);
		void (* g_pfnThrowResultException)(FailureInfo const &);
		void CloseHandle(void *);
		void DebugBreak();
		void FreeProcessHeap(void *);
		void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
		void LogFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,bool,unsigned short *,unsigned __int64,char *,unsigned __int64,FailureInfo *);
		void RecordFeatureUsageCallback(unsigned int,wil_details_FeaturePropertyCache *,wil_details_RecordUsageResult *);
		void ReleaseMutex(void *);
		void ReportFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Hr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long);
		void ReportFailure_HrMsg(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,char const *,char *);
		void ReportFailure_Msg(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,char const *,char *);
		void WilApiImpl_RecordFeatureUsage(unsigned int,unsigned int,unsigned int,char const *);
		void WilApiImpl_SubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
		void WilApiImpl_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
		void WilApi_RecordFeatureUsage(unsigned int,unsigned int,unsigned int,char const *);
		void WilApi_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
	};

	namespace details_abi
	{
		class FeatureStateData
		{
			void RetrieveUsageUnderLock(UsageIndexes &);
		public:
			bool RecordFeatureUsage(unsigned int,wil_details_ServiceReportingKind,unsigned __int64);
			void ProcessShutdown();
			void RecordUsage();
		};

		struct ProcessLocalStorage<ProcessLocalData>
		{
			ProcessLocalData * GetShared();
			~ProcessLocalStorage<ProcessLocalData>();
		};

		struct ProcessLocalStorageData<FeatureStateData>
		{
			static long Acquire(char const *,ProcessLocalStorageData<FeatureStateData> * *);
			void Release();
		};

		struct ProcessLocalStorageData<ProcessLocalData>
		{
			static long Acquire(char const *,ProcessLocalStorageData<ProcessLocalData> * *);
			void Release();
			~ProcessLocalStorageData<ProcessLocalData>();
		};

		class RawUsageIndex
		{
			bool RecordUsageInternal(void *,unsigned __int64,void *,unsigned __int64,unsigned int);
			unsigned char * FindInsertionPointOrIncrement(UsageIndexProperty &,unsigned char *,void *,unsigned __int64,unsigned int);
			unsigned char * LowerBound(unsigned char *,unsigned __int64,void *,unsigned __int64);
		public:
			RawUsageIndex(unsigned short,unsigned short,CountSize,unsigned short,CountSize);
			bool Iterate(wistd::function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>);
			bool RecordUsage(void *,unsigned __int64,void *,unsigned __int64,unsigned int);
			void SetBuffer(void *,unsigned __int64,unsigned __int64);
			void Swap(RawUsageIndex &);
		};

		class SemaphoreValue
		{
			long CreateFromValueInternal(unsigned short const *,bool,unsigned __int64);
			static long GetValueFromSemaphore(void *,long *);
			static long TryGetValueInternal(unsigned short const *,bool,unsigned __int64 *,bool *);
		public:
			static long TryGetPointer(unsigned short const *,void * *);
			void Destroy();
		};

		struct SubscriptionList
		{
			SubscriptionList();
			void OnSignaled(srwlock &);
			void SubscribeUnderLock(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
			void Unsubscribe(srwlock &,FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
		};

		struct ThreadLocalData
		{
			void SetLastError(FailureInfo const &);
		};

		struct ThreadLocalFailureInfo
		{
			void Set(FailureInfo const &,unsigned int);
		};

		struct ThreadLocalStorage<details::ThreadFailureCallbackHolder *>
		{
			~ThreadLocalStorage<details::ThreadFailureCallbackHolder *>();
		};

		struct UsageIndexProperty
		{
			bool Read(unsigned char * &,unsigned char *);
			bool Write(unsigned char * &,unsigned char *);
			int Compare(void *,unsigned __int64);
			unsigned __int64 GetSize();
			void UpdateCount(unsigned int);
		};

		struct UsageIndexes
		{
			UsageIndexes();
			void Record();
			~UsageIndexes();
		};

		struct heap_buffer
		{
			bool ensure(unsigned __int64);
			bool push_back(void const *,unsigned __int64);
			bool reserve(unsigned __int64);
		};

		details_abi::ProcessLocalStorage<details_abi::ProcessLocalData> * g_pProcessLocalData;
		details_abi::ThreadLocalData * GetThreadLocalDataCache(bool);
		void RecordWnfUsageIndex(__WIL__WNF_STATE_NAME const *,unsigned __int64,details_abi::RawUsageIndex const &);
	};

	struct shutdown_aware_object<details::EnabledStateManager>
	{
		shutdown_aware_object<details::EnabledStateManager>();
		~shutdown_aware_object<details::EnabledStateManager>();
	};

	struct shutdown_aware_object<details::FeatureStateManager>
	{
		shutdown_aware_object<details::FeatureStateManager>();
		~shutdown_aware_object<details::FeatureStateManager>();
	};

	struct unique_any_array_ptr<PACKAGE_INFO,PrivMemDeleter,empty_deleter>
	{
		void reset();
	};

	bool (* g_pfnIsDebuggerPresent)();
	bool ProcessShutdownInProgress();
	bool g_fBreakOnFailure;
	bool g_fIsDebuggerPresent;
	long GetFailureLogString(unsigned short *,unsigned __int64,wil::FailureInfo const &);
};

namespace wistd
{
	class _Func_class<bool,void *,unsigned __int64,void *,unsigned __int64,unsigned int,_Nil,_Nil>
	{
	protected:
		void _Tidy();
	};

};

BuiltInClassCache * s_pCacheBuiltInClassInfo;
BuiltInClassCache * s_pCacheInboxAppClassInfo;
CActivationStateList * gActivationStateList;
CAddrExclusionMgr gAddrExclusionMgr;
CAddrRefreshMgr gAddrRefreshMgr;
CBList * gpProcessList;
CCache * s_pCacheApplicationInfo;
CCache * s_pCacheClassInfo;
CCache * s_pCacheInboxAppProxyStubClassInfo;
CCache * s_pCacheInboxAppRuntimeClassInfo;
CCache * s_pCacheInboxAppServerInfo;
CCache * s_pCachePerUserProxyStubClassInfo;
CCache * s_pCachePerUserRuntimeClassInfo;
CCache * s_pCachePerUserServerInfo;
CCache * s_pCacheProcessInfo;
CCache * s_pCacheProgID;
CCache * s_pCacheWinRTRuntimeClassInfo;
CCache * s_pCacheWinRTServerInfo;
CClassicComServerTable * gpClassTable;
CClassicComServerTable * gpProcessTable;
CComSxSCatalog * g_pSxSCatalogObject;
CDualStringArray * gpdsaMyBindings;
CFastBH * g_fbhActKernel;
CHashTable * gpClientOidTable;
CHashTable * gpClientOxidTable;
CHashTable * gpClientSetTable;
CHashTable * gpMidTable;
CHashTable * gpServerOidTable;
CHashTable * gpServerOxidTable;
CListBase<1> * gpFastRundownOidList;
CListBase<1> * gpServerPinnedOidList;
CListBase<1> * gpSessionUserTokenList;
CListBase<1> * gpTokenList;
CMachineName gMachineName;
CMid * gpLocalCMid;
CNamedObjectTable * gpNamedObjectTable;
COM_CATALOG_CACHE_SECTION * g_pCatalogCache;
COM_CATALOG_CACHE_SECTION * s_pReadCatalogCache;
CPList * gpClientOxidPList;
CPList * gpClientSetLocalPList;
CPList * gpClientSetRemotePList;
CPingSetQuotaManager * gpPingSetQuotaManager;
CProcess * CheckLocalSecurity(void *,void *);
CProcess * ReferenceProcess(void *,int);
CProcessIdTable * gpProcessIdTable;
CProcessSecret gProcessSecret;
CRandomNumberGenerator gRNG;
CRegistryWatcher * gpRegistryWatcher;
CRegistryWatcher * gpRegistryWatcherPolicy;
CRemoteMachineList * gpRemoteMachineList;
CRpcEEInfoFailure gEEFailure;
CRpcEEInfoMissing gEEMissing;
CRpcSecurityCallbackManager * gpCRpcSecurityCallbackMgr;
CSCMProfileCache gProfileCache;
CScmActivator gScmActivator;
CScmMgot * gpscmmgot;
CScmRot * gpscmrot;
CScmRotMgotEntryBase * GetRotMgotEntryFromTable(int,CToken *,unsigned short *,_MnkEqBuf *,unsigned long,CScmHashTable *,bool);
CSecDescriptor * GetDefaultAccessRestrictions();
CSecDescriptor * GetDefaultLaunchPermissions();
CSecDescriptor * GetDefaultLaunchRestrictions();
CSecDescriptor * gpDefaultAccessRestrictionsSD;
CSecDescriptor * gpDefaultLaunchPermissionsSD;
CSecDescriptor * gpDefaultLaunchRestrictionsSD;
CSecDescriptor * gpNoRegAccessPermissionsSD;
CSecDescriptor * gpNoRegAccessRestrictionsSD;
CSecDescriptor * gpNoRegLaunchPermissionsSD;
CSecDescriptor * gpNoRegLaunchRestrictionsSD;
CServerOidPList * gpServerOidPList;
CServerSetTable * gpServerSetTable;
CSharedLock * gpClassLock;
CSharedLock * gpClientLock;
CSharedLock * gpProcessListLock;
CSharedLock * gpProcessLock;
CSharedLock * gpRemoteMachineLock;
CSharedLock * gpServerLock;
CSurrogateList * gpSurrogateList;
CSuspendMonitor gSuspendMonitor;
CTaskThreadState * InitializeTaskThreadState();
CTaskThreadStateList * gTaskThreadStateList;
CThreadStack gThrdStack;
CWIPTable gWIPTbl;
CWinRTServerTable * gpActivatableClassTable;
CacheElement * CallidCache;
FEATURE_ENABLED_STATE (* g_wil_details_apiGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME);
FEATURE_ENABLED_STATE (* g_wil_details_internalGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME);
HINSTANCE__ * g_wil_details_ntdllModuleHandle;
HINSTANCE__ * wil_details_GetNtDllModuleHandle();
HKEY__ * s_hOle;
HKEY__ * s_hOlePolicy;
IComCatalog * gpCatalog;
IRpcssTestLogger * g_pTestLogger;
Microsoft::WRL::Wrappers::SRWLock gSessionUserTokenListLock;
PACKAGE_INFO * g_packageInfo;
PROTSEQ_INFO * gaProtseqInfo;
PWR_STATE gPowerState;
ProcessIdentity g_processIdentity;
ProcessToken g_processToken;
SC_HANDLE__ * g_hServiceController;
SRunAsCache gRunAsFree;
SRunAsCache gRunAsHead;
SRunAsCacheReference gRunAsRefFree;
SRunAsCacheReference gRunAsRefHead;
TrackRegistry * g_TrackRegistry;
_GENERIC_MAPPING sGenericMapping;
_GUID * s_aChannelHook;
_GUID g_appIdToDebug;
_GUID g_clsidToDebug;
_RPC_IF_ID gifidOjectExporter;
_RTL_CRITICAL_SECTION gTokenCS;
_RTL_CRITICAL_SECTION g_OleMutexCreationSem;
_RTL_CRITICAL_SECTION g_catLock;
_RTL_CRITICAL_SECTION g_csConnectStateService;
_RTL_CRITICAL_SECTION gcsFastProcessLock;
_RTL_CRITICAL_SECTION gcsTokenLock;
_SERVICE_TABLE_ENTRYW * gaServiceEntryTable;
_STARTUP_SID * gStartupSids;
_WNF_USER_SUBSCRIPTION * gSessionUserChangeSubscription;
__MIDL_ILocalObjectExporter_0002 * s_aClientSvc;
__MIDL_ILocalObjectExporter_0002 * s_aRpcssSvc;
__WIL_RTL_SRWLOCK g_wil_details_testFeatureStateLock;
__int64 GetWinRTActivationStoreSequence();
__int64 const * const SIZING_HANDLE_COMMON_BUFFER;
__type_info_node __type_info_root_node;
bool CompareSidAndAttributeArrays(_SID_AND_ATTRIBUTES *,unsigned long,_SID_AND_ATTRIBUTES *,unsigned long,bool);
bool CurlyStringToGUID(unsigned short const *,_GUID *);
bool DisablePackagePrivateHiveProvider();
bool IsOxidInfoConsistent(bool,unsigned long,unsigned long);
bool IsValidMultiSz(tagBLOB const &);
bool MoreRecentlyInstalled(PackageIdAndInstallOrder const &,PackageIdAndInstallOrder const &);
bool PackageNamesMatch(unsigned short const *,unsigned short const *);
bool RotEntryIsTrusted(CScmRotMgotEntryBase *,CToken *);
bool RotMgotEntryIsAccessible(CScmRotMgotEntryBase *,CToken *,unsigned short *);
bool StringToGUID(unsigned short const *,_GUID *);
bool UseNewCatalogCacheBehavior();
int ActivateAtStorage(_ACTIVATION_PARAMS *,CClassData *,long *);
int ActivateRemote(_ACTIVATION_PARAMS *,CClassData *,long *);
int AllocateCallId(_GUID &);
int AllocateId(unsigned __int64 *);
int CheckForAccess(void *,_SECURITY_DESCRIPTOR *,unsigned long,void *);
int CheckLocalCall(void *);
int CreateSids(void * *,void * *,void * *,void * *,void * *,void * *);
int DoPerAppBrokerInstancingDefaultForActivationConfigurationCheck(_RTL_RUN_ONCE *,void *,void * *);
int DsaValid(tagDUALSTRINGARRAY const *);
int DuplicateTokenAsPrimary(void *,void *,int,void * *);
int EqualAuthInfo(_COAUTHINFO *,_COAUTHINFO *);
int GUIDFromString(unsigned short const *,_GUID *);
int GetActiveSessionID(unsigned long *);
int GetClientServerSvcs(unsigned long *,__MIDL_ILocalObjectExporter_0002 * *,unsigned long *,unsigned short * *);
int GetLegacySecurity(unsigned short * *);
int GetTextualSid(void *,unsigned short *,unsigned long *);
int HexStringToDword(unsigned short const * &,unsigned long &,int,unsigned short);
int InlineIsEqualGUID(_GUID const &,_GUID const &);
int IsAllowedDCOMProtocol(void *);
int IsBrokenRefCount(_GUID *);
int IsProcessTerminated(void *);
int IsSACLPresentInSecurityDescriptor(_SECURITY_DESCRIPTOR *);
int IsServiceStopping(_ACTIVATION_PARAMS *,CClassData *);
int IsValidCOMSecurityDescriptor(_SECURITY_DESCRIPTOR_RELATIVE const *,int *);
int IsWorkstationOS();
int LaunchOrActivationAllowed(void *,HSTRING__ *,_SECURITY_DESCRIPTOR *,int,int,int,unsigned long,CToken *,unsigned long,CToken *,CClassData *);
int LookupObjectInROT(_ACTIVATION_PARAMS *,long *);
int MoveFastRundownOidsFromGlobalListToServerOXIDList();
int ReadRegistryIntegerValue(HKEY__ *,unsigned short *,unsigned long *);
int RetrievePIDForLocalClient(void *,unsigned long *);
int RundownOidsHelper(CTime *,CServerOxid *);
int ValidAuthnSvc(tagDUALSTRINGARRAY const *,unsigned short);
int VerifyNewProcess(unsigned long);
int fListenOnInternet;
int fListened;
int gRunningInRPCSS;
int g_breakOnServerCertificationFailure;
int g_breakOnServerExecFailure;
int g_debugActivatableClasses;
int g_fInitCrit;
int g_wil_details_preventOnDemandStagingConfigReads;
int gbDynamicIPChangesEnabled;
int gbSAFERAAAChecksEnabled;
int gbSAFERROTChecksEnabled;
int gfAddACToRestrictions;
int gfCheckActivationSecurity;
int gfEnableEELogging;
int gfEnableTracing;
int gfIssueActivationRpcAtIdentify;
int gfLogEEInfoAsNative;
int gfRegisteredAuthInfo;
int gfUseRunAsTokenCache;
int s_fAccessRestrictionsViaPolicy;
int s_fBreakOnSilencedServerExceptions;
int s_fCatchServerExceptions;
int s_fDCOMSCMBreakOnUnexpectedActivationErrors;
int s_fEnableDCOMHTTP;
int s_fEnableOldModalLoop;
int s_fLaunchRestrictionsViaPolicy;
int s_fMutualAuth;
int s_fSecureRefs;
int wStringFromGUID2(_GUID const &,unsigned short *,int);
int wUUIDFromString(unsigned short const *,_GUID *);
int wil_HasFeatureTestState(unsigned int,wil_FeatureEnabledState *);
int wil_QueryFeatureState(wil_FeatureState *,unsigned int,int,wil_FeatureStore,int *);
int wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(wil_details_FeaturePropertyCache *,unsigned int,wil_details_ServiceReportingKind,unsigned int,unsigned __int64);
int wil_details_HasTestState(unsigned int,wil_details_FeatureTestStateKind,wil_details_FeatureTestState *);
int wil_details_ModifyFeatureData(wil_details_FeaturePropertyCache *,int (*)(wil_details_FeaturePropertyCache *,void *),void *);
int wil_details_SetEnabledAndHasNotificationStateCallback(wil_details_FeaturePropertyCache *,void *);
int wil_details_SetHasNotificationStateCallback(wil_details_FeaturePropertyCache *,void *);
int wil_details_SetPropertyCacheOpportunityCallback(wil_details_FeaturePropertyCache *,void *);
int wil_details_SetPropertyCacheUsageCallback(wil_details_FeaturePropertyCache *,void *);
int wil_details_SetPropertyFlagCallback(wil_details_FeaturePropertyCache *,void *);
int wil_details_StagingConfigFeature_HasUniqueState(wil_details_StagingConfigFeature const *);
int wil_details_StagingConfig_AreAnyFeaturesConfigured(wil_details_StagingConfig *);
int wil_details_StagingConfig_QueryFeatureState(wil_details_StagingConfig *,wil_FeatureState *,unsigned int,int);
long (* g_wil_details_pfnNtQueryWnfStateData)(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long (* g_wil_details_pfnNtUpdateWnfStateData)(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long (* g_wil_details_pfnRtlSubscribeWnfStateChangeNotification)(__WIL__WNF_USER_SUBSCRIPTION * *,__WIL__WNF_STATE_NAME,unsigned long,long (*)(__WIL__WNF_STATE_NAME,unsigned long,__WIL__WNF_TYPE_ID *,void *,void const *,unsigned long),void *,__WIL__WNF_TYPE_ID *,unsigned long,unsigned long);
long (* g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion)(__WIL__WNF_USER_SUBSCRIPTION *);
long (* pfnCLSIDFromOle1Class)(unsigned short const *,_GUID *,int);
long (* pfnCoGetMarshalSizeMax)(unsigned long *,_GUID const &,IUnknown *,unsigned long,void *,unsigned long);
long (* pfnCoMarshalInterface)(IStream *,_GUID const &,IUnknown *,unsigned long,void *,unsigned long);
long (* pfnCoReleaseMarshalData)(IStream *);
long (* pfnCoUnmarshalInterface)(IStream *,_GUID const &,void * *);
long ActPropsMarshalHelper(IActivationProperties *,_GUID const &,unsigned long,unsigned long,tagMInterfacePointer * *);
long ActivateFromProperties(IActivationPropertiesIn *,IActivationPropertiesOut * *);
long ActivateFromPropertiesPreamble(ActivationPropertiesIn *,IActivationPropertiesOut * *,_ACTIVATION_PARAMS *);
long Activation(_ACTIVATION_PARAMS *);
long AddAceToSecurityDescriptor(void *,unsigned short const *,CSecDescriptor * *);
long AdjustRunAsTokenDefaultDacl(void *,void *);
long AppModelPolicy_GetPolicy_Internal(void *,AppModelPolicy_Type,AppModelPolicy_PolicyValue *,_PS_PKG_CLAIM *,unsigned __int64 *);
long CalcIfdSize(tagInterfaceData *,unsigned __int64 *);
long CalculateActParamsClassInfo(_ACTIVATION_PARAMS *);
long CalculateActivationSessionID(CClassData *,_ACTIVATION_PARAMS *);
long CallNewRemoteActivation(void *,unsigned short,_ACTIVATION_PARAMS *,unsigned short *,unsigned short *,long *);
long CallOldRemoteActivation(void *,unsigned short,_ACTIVATION_PARAMS *,unsigned short *,unsigned short *,long *);
long CallRemoteMachine(void *,unsigned short,_ACTIVATION_PARAMS *,unsigned short *,unsigned short *,int,tagCOMVERSION,long *);
long CertifyFullTrustActivateAsPackageServer(CProcess *,unsigned short *,unsigned short const *,unsigned short const *,unsigned short const *);
long CertifyNonFullTrustActivateAsPackageServer(CProcess *,unsigned short const *);
long CertifyPerAppBrokerServer(unsigned short const *,CToken *,unsigned long,bool);
long CertifyServerWithDesktopWinRTBrokerClaim(unsigned short const *,CToken *,unsigned long);
long CheckClientDCOMVersion(tagCOMVERSION);
long CheckForClsid(IUserToken *,_GUID const *,int *);
long CheckForProgID(IUserToken *,unsigned short const *,int *);
long CheckRefresh(IUserToken *,int,KeyRefreshInfo const &,int *);
long ComputeNewResolverBindings();
long ConnectStateService();
long ControlTracingForAllProcess(int);
long ConvertToRemote(tagDUALSTRINGARRAY *,tagDUALSTRINGARRAY * *);
long CopyAuthIdentity(_COAUTHIDENTITY *,_COAUTHIDENTITY * *);
long CopyAuthInfo(_COAUTHINFO *,_COAUTHINFO * *);
long CopyMyOrBindings(tagDUALSTRINGARRAY * *,unsigned __int64 *);
long CreateFileMonikerComparisonBuffer(unsigned short *,unsigned char *,unsigned long,unsigned long *);
long CreatePartitionCache(unsigned __int64,unsigned short const *);
long CreatePartitionCacheLock(unsigned __int64,unsigned short const *);
long CreateRemoteBinding(unsigned short *,int,void * *);
long DoesTokenHaveApplicationIdAttribute(void *,bool *);
long DuplicateAndSetTokenClaim(void *,unsigned short const *,_TOKEN_SECURITY_ATTRIBUTE_V1 *,void * *);
long DuplicateAndSetTokenStringClaim(void *,unsigned short const *,unsigned short const *,void * *);
long DuplicatePWSTR(unsigned short const *,unsigned short * &);
long DuplicateQuotedPWSTR(unsigned short const *,unsigned short * &);
long EnforceStateServiceCaller(void *,void *);
long EnsureScmMgot();
long EvaluateExtensionActivationContextProperties(IExtensionActivationContextProperties *,ActivationPropertiesIn *,_ACTIVATION_PARAMS *);
long ExpandPWSTR(unsigned short const *,unsigned short * &);
long FindExeComponent(unsigned __int64,unsigned short *,unsigned long,unsigned short *);
long GetApplicationIdFromToken(void *,unsigned short * *);
long GetBinding(unsigned short *,void * *);
long GetBindingToOr(unsigned short *,void * *);
long GetDesktopWinRTBrokerClaimValueFromToken(void *,unsigned short *);
long GetEffectiveClsid(_GUID &,CProcess *,bool,CClassData * *);
long GetElevated(void *,int *);
long GetHostIdFromToken(void *,unsigned __int64 *);
long GetIFDFromInterface(IUnknown *,_GUID const &,unsigned long,unsigned long,tagMInterfacePointer * *);
long GetInstalledPackageFullNameFromMainPackageFamilyName(IUserTokenInternal *,unsigned short const *,HSTRING__ * *,PackageFamilyErrorDetails *);
long GetInstalledPackageFullNameFromPackageFamilyName(IUserTokenInternal *,unsigned short const *,unsigned int,HSTRING__ * *,PackageFamilyErrorDetails *);
long GetInteractiveUserTokenForCallerRequest(CToken *,unsigned short const *,unsigned __int64,unsigned long,bool,void * *);
long GetKeyRefreshInfo(HKEY__ *,KeyRefreshInfo *);
long GetLifecycleManagerInfo(void *,int *,int *);
long GetMachineName(unsigned __int64,unsigned short *,unsigned long,unsigned short *,int);
long GetMachineNameFromUNC(unsigned __int64,unsigned short *,unsigned long,unsigned short *);
long GetOptionalPackagesForMainPackage(IUserTokenInternal *,unsigned short const *,unsigned __int64 *,PACKAGE_INFO * *);
long GetOptionalPackagesFromPackageInfo(_PACKAGE_INFO_REFERENCE *,unsigned __int64 *,PACKAGE_INFO * *);
long GetPackageNameFromToken(void *,unsigned short * *);
long GetPackageSidFromToken(void *,void * *);
long GetPackagedComCatalogObject(bool,_GUID const &,void * *);
long GetPathForServer(unsigned __int64,unsigned short *,unsigned long,unsigned short *,unsigned short * *);
long GetPerAppBrokerToken(CToken *,unsigned long,unsigned __int64,bool,bool,void * *);
long GetPrivateHiveCatalogObject(_GUID const &,void * *);
long GetPsmTokenHelper(void *,unsigned long,unsigned long,unsigned short const *,unsigned short const *,_GUID const *,void * *,long *);
long GetRegCatalogObject(_GUID const &,void * *,unsigned long,unsigned short);
long GetRegistrySecurityDescriptor(HKEY__ *,unsigned short const *,_SECURITY_DESCRIPTOR * *,unsigned long *);
long GetRegistryStringValue(HKEY__ *,unsigned short const *,unsigned short const *,unsigned long,unsigned short * *);
long GetServerPath(unsigned short *,unsigned short * *);
long GetSessionUserTokenWithDesktopWinRTBrokerClaimAdded(unsigned long,unsigned short const *,void * *);
long GetStringBinding(unsigned short *,unsigned short *,tagDUALSTRINGARRAY * *);
long GetSxSCatalogObject(_GUID const &,void * *);
long GetTokenIntegrityLevel(void *,_TOKEN_INFORMATION_CLASS,_TOKEN_MANDATORY_LABEL * *);
long GetTokenPackageSid(void *,_TOKEN_APPCONTAINER_INFORMATION *);
long GetTokenSecurityAttributeInformation(void *,unsigned short const *,_TOKEN_SECURITY_ATTRIBUTES_INFORMATION * *);
long GetUnmodifiedLogonTokenOfClientTokenUser(void *,void * *);
long GetUserContextFromActivationProperties(ActivationPropertiesIn *,int,unsigned __int64 *);
long GetUserServiceNameIfAvailable(IUnknown *,unsigned short const *,CToken *,unsigned __int64,unsigned short * *);
long GetUserSidForSession(unsigned long,void * *);
long GetUserTokenForSession(unsigned long,void * *);
long GetUserTokenForSessionWithPossibleCacheLookup(unsigned short const *,unsigned long,void * *);
long GetUserTokenWithPsmClaimsAdded(CToken *,void *,bool,void * *);
long GetWinRTActivationStoreCatalogObject(Windows::Foundation::RegistrationScope,_GUID const &,void * *);
long HandleChildAppContainerActivation(_ACTIVATION_PARAMS *,CClassData *);
long IObjectExporterSecCallback(void *,void *);
long InitScmRot();
long InitTLS();
long InitializeCacheSection();
long InitializeCatalogCacheValues();
long InitializeCatalogIfNecessary();
long InitializeStateServiceGlobalState();
long InitializeStateServiceLogonSid(void *);
long InitializeWaits();
long IsAllowListedCLSID(_GUID const &,bool *);
long IsAllowedToActivateAsUser(void *,unsigned __int64);
long IsAsUserActivationAllowed(CClassData *,CToken *,unsigned __int64,bool *);
long IsDeveloperLicenseInstalled(int *);
long IsFromMachineHive(HKEY__ *,int *);
long IsLocalSystemAccount(unsigned short const *,unsigned short const *,int *);
long IsLowPrivilegeServiceAccount(unsigned short const *,unsigned short const *,int *);
long IsPortOpenInternal(unsigned short *,unsigned long,int *);
long IsSideLoadedPackage(unsigned short const *,bool *);
long IsTCPPortOpen(void *,unsigned short *,_GUID,unsigned long,int *);
long IsTokenAppContainer(void *,int *);
long IsTokenChildAppContainer(void *,int *);
long IsUIAccessToken(void *,int *);
long IsUserHiveOK(void *,int *);
long IsUserService(unsigned short const *,bool *);
long LazyInitScmMgot();
long LocalInterfaceOnlySecCallback(void *,void *);
long LookupActivatableClassData(HSTRING__ *,HSTRING__ *,IComClassInfo *,CToken *,unsigned __int64,unsigned long,CClassData * *);
long LookupAppidData(_GUID const &,CToken *,unsigned __int64,unsigned long,CAppidData * *);
long LookupClsidData(_GUID &,IComClassInfo *,CToken *,unsigned __int64,unsigned long,CClassData * *);
long LookupOrCreateTokenForRPCClient(void *,int,CToken * *,int *);
long LookupOrCreateTokenFromHandle(void *,CToken * *);
long LookupTokenByLuid(_LUID,CToken * *);
long LookupWinRTServerData(unsigned short const *,CToken *,unsigned __int64,CWinRTServerData * *);
long MakeProcessActive(CProcess *);
long NegotiateDCOMVersion_Client(tagCOMVERSION *);
long NegotiateDCOMVersion_Server(tagCOMVERSION,tagCOMVERSION *);
long OnWNFNotification(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
long OnWNFNotificationNoAction(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
long OpenPackageInfo(IUserTokenInternal *,unsigned short const *,_PACKAGE_INFO_REFERENCE * *);
long PerformDeferredPackageRegistrationForClassIfNecessary(IComClassInfo *,IUserTokenInternal *,int *);
long PerformScmStage(tagACTIVATION_STAGE,_ACTIVATION_PARAMS *,tagMInterfacePointer *,tagMInterfacePointer * *);
long PrivGetRPCSSInfo(_GUID const &,_GUID const &,void * *);
long PrivilegedGetUserSidForSession(unsigned long,void * *);
long ProcessInitializationFinished(CProcess *);
long QueryProcessArchitecture(unsigned long,unsigned long *);
long QueryProcessArchitectureInternal(unsigned long,unsigned long *);
long ReferenceEntry(SRunAsCache *);
long RegHelpSuspendImpersonate(void * *);
long RegOpenCurrentUserLocalSettings(unsigned long,HKEY__ * *);
long ReleaseIFD(tagMInterfacePointer *);
long RemoteActivationCall(_ACTIVATION_PARAMS *,unsigned short *);
long RemoteInterfaceOnlySecCallback(void *,void *);
long ResolveORInfo(_ACTIVATION_PARAMS *);
long RoundTo8(unsigned __int64 *);
long RunAsCache(unsigned long,void * &,SRunAsCache * *);
long SizeMnkEqBufForRotEntry(_MnkEqBuf *,unsigned __int64 *);
long StartListeningIfNecessary();
long StartTraceSession(unsigned short const *,unsigned __int64 *);
long StringCbCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCbCopyExW(unsigned short *,unsigned __int64,unsigned short const *,unsigned short * *,unsigned __int64 *,unsigned long);
long StringCbCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCbPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long StringCchCatA(char *,unsigned __int64,char const *);
long StringCchCatExW(unsigned short *,unsigned __int64,unsigned short const *,unsigned short * *,unsigned __int64 *,unsigned long);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCopyA(char *,unsigned __int64,char const *);
long StringCchCopyExW(unsigned short *,unsigned __int64,unsigned short const *,unsigned short * *,unsigned __int64 *,unsigned long);
long StringCchCopyNW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64);
long StringCchCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchLengthA(char const *,unsigned __int64,unsigned __int64 *);
long StringCchLengthW(unsigned short const *,unsigned __int64,unsigned __int64 *);
long StringCchPrintfA(char *,unsigned __int64,char const *,...);
long StringCchPrintfExW(unsigned short *,unsigned __int64,unsigned short * *,unsigned __int64 *,unsigned long,unsigned short const *,...);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long StringCchVPrintfW(unsigned short *,unsigned __int64,unsigned short const *,char *);
long SuspendImpersonate(void * *);
long TestBindingGetHandle(unsigned short *,void * *);
long TranslateShareName(unsigned short *,unsigned short * *);
long UShortAdd(unsigned short,unsigned short,unsigned short *);
long ValidateAndDoFixups(tagInterfaceData *,tagInterfaceData * *);
long ValidateCatalogSecurityDescriptor(unsigned long,_SECURITY_DESCRIPTOR_RELATIVE const *,bool,unsigned short const *);
long ValidateObjRef(tagInterfaceData *,unsigned long,_GUID const *);
long ValidateObjRefExtension(tagInterfaceData *,unsigned long,unsigned long,tagOBJREF &);
long VerifyAuthIdentity(_COAUTHIDENTITY *);
long VerifyCallerHAsAccessToProcess(CToken *,unsigned long,unsigned long,int *);
long VerifyCallerIsAdministrator(CToken *,int *);
long dsaAllocateAndCopy(tagDUALSTRINGARRAY * *,tagDUALSTRINGARRAY *);
long gRegisterKey;
long gThreadToken;
long g_bInSCM;
long s_cChannelHook;
long wStringFromUUID(_GUID const &,unsigned short *);
long wil_details_NtQueryWnfStateData(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long wil_details_NtUpdateWnfStateData(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long wil_details_RtlSubscribeWnfStateChangeNotification(__WIL__WNF_USER_SUBSCRIPTION * *,__WIL__WNF_STATE_NAME,unsigned long,long (*)(__WIL__WNF_STATE_NAME,unsigned long,__WIL__WNF_TYPE_ID *,void *,void const *,unsigned long),void *,__WIL__WNF_TYPE_ID *,unsigned long,unsigned long);
long wil_details_StagingConfig_FireNotification(wil_details_StagingConfig *,unsigned int,unsigned short);
long wil_details_StagingConfig_Load(wil_details_StagingConfig *,wil_FeatureStore,unsigned __int64,void *,int);
tagDUALSTRINGARRAY * CompressStringArrayAndAddIPAddrs(tagDUALSTRINGARRAY *);
tagDUALSTRINGARRAY * gpdsaFullBindings;
tagInterfaceData * AllocateAndCopy(tagInterfaceData *);
unsigned __int64 comtraceSessionHandle;
unsigned __int64 gLocalMid;
unsigned __int64 g_dwResolverBindingsID;
unsigned __int64 gdwTimeOfLastLowPowerEpochExit;
unsigned char * gpbKernelHintArray;
unsigned int g_packageInfoCount;
unsigned long AllocateReservedIdsInternal(unsigned long,unsigned __int64 * const,unsigned long *);
unsigned long CalculateSpinCount();
unsigned long CommonServiceMain(unsigned long,unsigned short * * const);
unsigned long ComplexPingInternal(void *,unsigned __int64 *,unsigned short,unsigned long,unsigned long,unsigned __int64 * const,unsigned __int64 * const,unsigned short *);
unsigned long ConvertActivationFlagsToMatchFlags(unsigned long);
unsigned long FindSvc(unsigned short,unsigned short *,unsigned long);
unsigned long GetActivationFailureLoggingLevel();
unsigned long GetArchitecturePointerSizeInBytes(unsigned long);
unsigned long GetCatalogClientFlagForProcess(unsigned long);
unsigned long GetCatalogExclusiveRegViewFlagForProcess(unsigned long);
unsigned long GetCatalogExclusiveRegViewFlagFromActivationFlags(unsigned long);
unsigned long GetNativeArchitecture();
unsigned long GetSessionId2(void *);
unsigned long HashSid(void *);
unsigned long InitRunAsCache();
unsigned long InitializeSystemSecurityDescriptors();
unsigned long ReadSecurityDescriptor(HKEY__ *,unsigned short *,bool,bool,CSecDescriptor * *);
unsigned long ReadSecurityDescriptorFromSDDL(HKEY__ *,unsigned short *,bool,CSecDescriptor * *);
unsigned long ReadSecurityDescriptorHelper(_SECURITY_DESCRIPTOR_RELATIVE *,bool,bool,CSecDescriptor * *);
unsigned long ReadStringValue(HKEY__ *,unsigned short *,unsigned short * *);
unsigned long ResolveClientOXID(void *,unsigned __int64 *,tagDUALSTRINGARRAY *,unsigned short,unsigned short *,tagOXID_INFO *,unsigned __int64 *,int,unsigned short,unsigned long,unsigned char *,int *,unsigned long *,unsigned char * *,unsigned short *);
unsigned long ScmRotHash(unsigned char *,unsigned long,unsigned long);
unsigned long ServerAllocateOIDsInternal(CProcess *,unsigned __int64 *,unsigned long,unsigned __int64 * const,unsigned long,unsigned __int64 * const,unsigned long *);
unsigned long ServiceHandler(unsigned long,unsigned long,void *,void *);
unsigned long SizeOfMultiSz(unsigned short *);
unsigned long dsaCompare(tagDUALSTRINGARRAY *,tagDUALSTRINGARRAY *);
unsigned long dsaHash(tagDUALSTRINGARRAY *);
unsigned long gLockTlsIdx;
unsigned long gNextThreadID;
unsigned long gRunAsRefCounter;
unsigned long g_GLBOPT_RoFlags;
unsigned long g_RpcssSQM;
unsigned long g_dwComSpinCount;
unsigned long g_dwStateServicePID;
unsigned long gdwActivationFailureLoggingLevel;
unsigned long gdwCacheableFlags;
unsigned long gdwCallFailureLoggingLevel;
unsigned long gdwInvalidSecurityDescriptorLoggingLevel;
unsigned long gdwMaxActivationRetriesPerServer;
unsigned long gdwRemoteBindingHandleCacheIdleTimeout;
unsigned long gdwRemoteBindingHandleCacheMaxLifetime;
unsigned long gdwRemoteBindingHandleCacheMaxSize;
unsigned long gdwRudeProfileUnloads;
unsigned long gdwTimeoutOnResume;
unsigned long gdwTimeoutPeriodForStaleMids;
unsigned long s_cClientSvc;
unsigned long s_cRpcssSvc;
unsigned long s_cServerSvc;
unsigned long s_dwDCOMSCMRemoteCallFlags;
unsigned long s_dwLegacySecurityLen;
unsigned long s_lAuthnLevel;
unsigned long s_lImpLevel;
unsigned long volatile gServerStartSecondChanceTimeout;
unsigned long volatile gServerStartTimeout;
unsigned short * CharUpperStub(unsigned short *);
unsigned short * ExtractMachineName(unsigned short *);
unsigned short * FindMatchingProtseq(unsigned short *,unsigned short,unsigned short *);
unsigned short * GetClientNetworkAddress(void *);
unsigned short * aMyProtseqs;
unsigned short * g_activatableClassToDebug;
unsigned short * gpwstrProtseqs;
unsigned short * gwszInitialDNSName;
unsigned short * s_aServerSvc;
unsigned short * s_pLegacySecurity;
unsigned short * wszRunAsWinstaDesktop;
unsigned short FindMatchingProtseq(unsigned short,unsigned short * const,unsigned short *);
unsigned short MillisecondsToSeconds(unsigned long);
unsigned short cMyProtseqs;
unsigned short const * const RuntimeClass_Windows_Foundation_Collections_PropertySet;
unsigned short const * const g_wszClsidTemplate;
unsigned short const * const g_wszDllHost;
unsigned short const * const g_wszDllHostSlashProcessId;
unsigned short const * const g_wszEmbedding;
unsigned short const * const g_wszEmptyString;
unsigned short const * const g_wszInteractive_User;
unsigned short const * const g_wszLocalService;
unsigned short const * const g_wszProcessId;
unsigned short const * const g_wszRunAs;
unsigned short const * const g_wszSlashProcessId;
unsigned short const * const g_wszThreadingModel;
unsigned short g_usBaseFastRundownTimeoutInterval;
unsigned short g_usBasePingInterval;
unsigned short g_usBaseTimeoutInterval;
void (* g_wil_details_apiRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_apiSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_apiUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_internalRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_internalSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_internalUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_pfnFeatureLoggingHook)(unsigned int,FEATURE_LOGGED_TRAITS const *,FEATURE_ERROR const *,int,wil_ReportingKind const *,wil_VariantReportingKind const *,unsigned char,unsigned __int64);
void (* g_wil_details_recordFeatureUsage)(unsigned int,wil_details_FeaturePropertyCache *,wil_details_RecordUsageResult *);
void * CreateLogonSid();
void * CreateSharedFileMapping(unsigned short *,unsigned long,unsigned long,void *,void *,unsigned long,void * *,int *);
void * GetRunAsToken(unsigned long,unsigned short *,unsigned short *,unsigned short *,int,void *);
void * GetUserSid(void *);
void * OpenSharedFileMapping(unsigned short *,unsigned long,void * *,unsigned long);
void * gSidAnonymous;
void * gSidDCOMUsers;
void * gSidDefaultLabel;
void * gSidDefaultSystemManaged;
void * gSidLocal;
void * gSidLocalSystem;
void * gSidOwnerRights;
void * gSidPerfLoggingUsers;
void * gSidService;
void * g_hComCacheMapping;
void * g_hHeap;
void * g_hPartitionCacheFileMapping;
void * g_hRpcActKernel;
void * g_hStateServiceProcess;
void * g_hmutexPartitionCacheLock;
void * ghKernelRotSm;
void * ghPowerNotify;
void * psidLaunchServiceSid;
void * psidStateServiceLogonSid;
void * psidStateServiceSid;
void * s_hChannelHook;
void * s_hReadCatalogCache;
void AsyncMidReleaseTimerCallback(void *,unsigned char);
void BreakOnDebuggedActivatableClassId(unsigned short const *);
void BreakOnDebuggedClsid(_GUID const &);
void BreakOnUnexpectedActivationErrors(_GUID const *,long);
void CleanupClientServerSvcs(unsigned long,__MIDL_ILocalObjectExporter_0002 *,unsigned long,unsigned short *);
void CleanupTLS();
void ComTraceHr(long,char const *,char const *,int,unsigned short const *,...);
void ComTraceMessage(long,char const *,char const *,int,TraceLevel,unsigned short const *,...);
void ComTraceMessageT<CBList *,void *>(char const *,char const *,int,TraceLevel,unsigned short const *,CBList *,void *);
void ComTraceMessageT<CClientOid *,unsigned __int64,unsigned __int64,unsigned __int64,unsigned __int64,unsigned __int64>(char const *,char const *,int,TraceLevel,unsigned short const *,CClientOid *,unsigned __int64,unsigned __int64,unsigned __int64,unsigned __int64,unsigned __int64);
void ComTraceMessageT<CClientOxid *,unsigned __int64,unsigned __int64,unsigned short const *,unsigned short>(char const *,char const *,int,TraceLevel,unsigned short const *,CClientOxid *,unsigned __int64,unsigned __int64,unsigned short const *,unsigned short);
void ComTraceMessageT<CClientOxid *,unsigned __int64>(char const *,char const *,int,TraceLevel,unsigned short const *,CClientOxid *,unsigned __int64);
void ComTraceMessageT<CClientSet *,unsigned __int64,long>(char const *,char const *,int,TraceLevel,unsigned short const *,CClientSet *,unsigned __int64,long);
void ComTraceMessageT<CClientSet *,unsigned __int64,unsigned __int64>(char const *,char const *,int,TraceLevel,unsigned short const *,CClientSet *,unsigned __int64,unsigned __int64);
void ComTraceMessageT<CClientSet *,unsigned __int64,unsigned short *,long>(char const *,char const *,int,TraceLevel,unsigned short const *,CClientSet *,unsigned __int64,unsigned short *,long);
void ComTraceMessageT<CClientSet *,unsigned __int64,unsigned short *,unsigned long,unsigned long>(char const *,char const *,int,TraceLevel,unsigned short const *,CClientSet *,unsigned __int64,unsigned short *,unsigned long,unsigned long);
void ComTraceMessageT<CClientSet *,unsigned __int64,unsigned short *>(char const *,char const *,int,TraceLevel,unsigned short const *,CClientSet *,unsigned __int64,unsigned short *);
void ComTraceMessageT<CHashTable *,CTableElement *>(char const *,char const *,int,TraceLevel,unsigned short const *,CHashTable *,CTableElement *);
void ComTraceMessageT<CId2Key *,unsigned __int64,unsigned __int64>(char const *,char const *,int,TraceLevel,unsigned short const *,CId2Key *,unsigned __int64,unsigned __int64);
void ComTraceMessageT<CId2TableElement *,unsigned __int64,unsigned __int64>(char const *,char const *,int,TraceLevel,unsigned short const *,CId2TableElement *,unsigned __int64,unsigned __int64);
void ComTraceMessageT<CId3Key *,unsigned __int64,unsigned __int64,unsigned __int64>(char const *,char const *,int,TraceLevel,unsigned short const *,CId3Key *,unsigned __int64,unsigned __int64,unsigned __int64);
void ComTraceMessageT<CId3TableElement *,unsigned __int64,unsigned __int64,unsigned __int64>(char const *,char const *,int,TraceLevel,unsigned short const *,CId3TableElement *,unsigned __int64,unsigned __int64,unsigned __int64);
void ComTraceMessageT<CListBase<1> *,CListElement *>(char const *,char const *,int,TraceLevel,unsigned short const *,CListBase<1> *,CListElement *);
void ComTraceMessageT<CMid *,unsigned __int64>(char const *,char const *,int,TraceLevel,unsigned short const *,CMid *,unsigned __int64);
void ComTraceMessageT<CPList *,CPListElement *,unsigned long,unsigned long>(char const *,char const *,int,TraceLevel,unsigned short const *,CPList *,CPListElement *,unsigned long,unsigned long);
void ComTraceMessageT<CPList *,CPListElement *>(char const *,char const *,int,TraceLevel,unsigned short const *,CPList *,CPListElement *);
void ComTraceMessageT<CProcess *,unsigned long,unsigned short *,_GUID *,unsigned long,long>(char const *,char const *,int,TraceLevel,unsigned short const *,CProcess *,unsigned long,unsigned short *,_GUID *,unsigned long,long);
void ComTraceMessageT<CProcess *,unsigned long,unsigned short *,_GUID *,unsigned long>(char const *,char const *,int,TraceLevel,unsigned short const *,CProcess *,unsigned long,unsigned short *,_GUID *,unsigned long);
void ComTraceMessageT<CProcess *,unsigned long,unsigned short *,_GUID *>(char const *,char const *,int,TraceLevel,unsigned short const *,CProcess *,unsigned long,unsigned short *,_GUID *);
void ComTraceMessageT<CProcess *,unsigned long,unsigned short *,long>(char const *,char const *,int,TraceLevel,unsigned short const *,CProcess *,unsigned long,unsigned short *,long);
void ComTraceMessageT<CProcess *,unsigned long,unsigned short *,unsigned __int64>(char const *,char const *,int,TraceLevel,unsigned short const *,CProcess *,unsigned long,unsigned short *,unsigned __int64);
void ComTraceMessageT<CProcess *,unsigned long,unsigned short *,unsigned long,unsigned long>(char const *,char const *,int,TraceLevel,unsigned short const *,CProcess *,unsigned long,unsigned short *,unsigned long,unsigned long);
void ComTraceMessageT<CProcess *,unsigned long,unsigned short *,unsigned long>(char const *,char const *,int,TraceLevel,unsigned short const *,CProcess *,unsigned long,unsigned short *,unsigned long);
void ComTraceMessageT<CProcess *,unsigned long,unsigned short *,unsigned short *>(char const *,char const *,int,TraceLevel,unsigned short const *,CProcess *,unsigned long,unsigned short *,unsigned short *);
void ComTraceMessageT<CProcess *,unsigned long,unsigned short *,unsigned short const *,unsigned long>(char const *,char const *,int,TraceLevel,unsigned short const *,CProcess *,unsigned long,unsigned short *,unsigned short const *,unsigned long);
void ComTraceMessageT<CProcess *,unsigned long,unsigned short *,unsigned short>(char const *,char const *,int,TraceLevel,unsigned short const *,CProcess *,unsigned long,unsigned short *,unsigned short);
void ComTraceMessageT<CProcess *,unsigned long,unsigned short *>(char const *,char const *,int,TraceLevel,unsigned short const *,CProcess *,unsigned long,unsigned short *);
void ComTraceMessageT<CProcess *,unsigned long,unsigned short const *,long>(char const *,char const *,int,TraceLevel,unsigned short const *,CProcess *,unsigned long,unsigned short const *,long);
void ComTraceMessageT<CProcess *,unsigned long,unsigned short const *,unsigned __int64,long>(char const *,char const *,int,TraceLevel,unsigned short const *,CProcess *,unsigned long,unsigned short const *,unsigned __int64,long);
void ComTraceMessageT<CProcess *,unsigned long,unsigned short const *,unsigned __int64,unsigned __int64,unsigned __int64,unsigned __int64>(char const *,char const *,int,TraceLevel,unsigned short const *,CProcess *,unsigned long,unsigned short const *,unsigned __int64,unsigned __int64,unsigned __int64,unsigned __int64);
void ComTraceMessageT<CProcess *,unsigned long,unsigned short const *,unsigned __int64,unsigned __int64,unsigned __int64>(char const *,char const *,int,TraceLevel,unsigned short const *,CProcess *,unsigned long,unsigned short const *,unsigned __int64,unsigned __int64,unsigned __int64);
void ComTraceMessageT<CProcess *,unsigned long,unsigned short const *,unsigned __int64,unsigned __int64>(char const *,char const *,int,TraceLevel,unsigned short const *,CProcess *,unsigned long,unsigned short const *,unsigned __int64,unsigned __int64);
void ComTraceMessageT<CProcess *,unsigned long,unsigned short const *,unsigned __int64>(char const *,char const *,int,TraceLevel,unsigned short const *,CProcess *,unsigned long,unsigned short const *,unsigned __int64);
void ComTraceMessageT<CProcess *,unsigned long,unsigned short const *,void *>(char const *,char const *,int,TraceLevel,unsigned short const *,CProcess *,unsigned long,unsigned short const *,void *);
void ComTraceMessageT<CProcess *,unsigned long,unsigned short const *>(char const *,char const *,int,TraceLevel,unsigned short const *,CProcess *,unsigned long,unsigned short const *);
void ComTraceMessageT<CScmMgot *,CScmMgotEntry *,void *>(char const *,char const *,int,TraceLevel,unsigned short const *,CScmMgot *,CScmMgotEntry *,void *);
void ComTraceMessageT<CServerOid *,unsigned __int64,CServerOxid *,unsigned __int64>(char const *,char const *,int,TraceLevel,unsigned short const *,CServerOid *,unsigned __int64,CServerOxid *,unsigned __int64);
void ComTraceMessageT<CServerOid *,unsigned __int64,unsigned __int64>(char const *,char const *,int,TraceLevel,unsigned short const *,CServerOid *,unsigned __int64,unsigned __int64);
void ComTraceMessageT<CServerOidPList *,unsigned __int64,unsigned __int64,unsigned long,unsigned long>(char const *,char const *,int,TraceLevel,unsigned short const *,CServerOidPList *,unsigned __int64,unsigned __int64,unsigned long,unsigned long);
void ComTraceMessageT<CServerOidPList *,unsigned __int64,unsigned __int64>(char const *,char const *,int,TraceLevel,unsigned short const *,CServerOidPList *,unsigned __int64,unsigned __int64);
void ComTraceMessageT<CServerOxid *,long>(char const *,char const *,int,TraceLevel,unsigned short const *,CServerOxid *,long);
void ComTraceMessageT<CServerOxid *,unsigned __int64,long>(char const *,char const *,int,TraceLevel,unsigned short const *,CServerOxid *,unsigned __int64,long);
void ComTraceMessageT<CServerOxid *,unsigned __int64,unsigned __int64>(char const *,char const *,int,TraceLevel,unsigned short const *,CServerOxid *,unsigned __int64,unsigned __int64);
void ComTraceMessageT<CServerOxid *,unsigned __int64,unsigned long,unsigned short *>(char const *,char const *,int,TraceLevel,unsigned short const *,CServerOxid *,unsigned __int64,unsigned long,unsigned short *);
void ComTraceMessageT<CServerSet *,long>(char const *,char const *,int,TraceLevel,unsigned short const *,CServerSet *,long);
void ComTraceMessageT<CServerSet *,unsigned __int64>(char const *,char const *,int,TraceLevel,unsigned short const *,CServerSet *,unsigned __int64);
void ComTraceMessageT<CTableElement *,CTableElement *,CTableElement *,CTableElement *>(char const *,char const *,int,TraceLevel,unsigned short const *,CTableElement *,CTableElement *,CTableElement *,CTableElement *);
void ComTraceMessageT<CTableElement *,CTableElement *,CTableElement *>(char const *,char const *,int,TraceLevel,unsigned short const *,CTableElement *,CTableElement *,CTableElement *);
void ComTraceMessageT<CTableElement *,CTableElement *>(char const *,char const *,int,TraceLevel,unsigned short const *,CTableElement *,CTableElement *);
void ComTraceMessageT<CToken *,void *,unsigned __int64,unsigned __int64,void *>(char const *,char const *,int,TraceLevel,unsigned short const *,CToken *,void *,unsigned __int64,unsigned __int64,void *);
void ComTraceMessageT<CToken *,void *,unsigned __int64,unsigned __int64>(char const *,char const *,int,TraceLevel,unsigned short const *,CToken *,void *,unsigned __int64,unsigned __int64);
void ComTraceMessageT<_GUID *,long>(char const *,char const *,int,TraceLevel,unsigned short const *,_GUID *,long);
void ComTraceMessageT<int,unsigned char,unsigned char>(char const *,char const *,int,TraceLevel,unsigned short const *,int,unsigned char,unsigned char);
void ComTraceMessageT<long,long>(char const *,char const *,int,TraceLevel,unsigned short const *,long,long);
void ComTraceMessageT<long,unsigned __int64>(char const *,char const *,int,TraceLevel,unsigned short const *,long,unsigned __int64);
void ComTraceMessageT<long,unsigned long>(char const *,char const *,int,TraceLevel,unsigned short const *,long,unsigned long);
void ComTraceMessageT<long,unsigned short const *>(char const *,char const *,int,TraceLevel,unsigned short const *,long,unsigned short const *);
void ComTraceMessageT<long>(char const *,char const *,int,TraceLevel,unsigned short const *,long);
void ComTraceMessageT<unsigned __int64,CServerOxid *>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned __int64,CServerOxid *);
void ComTraceMessageT<unsigned __int64,unsigned __int64,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned __int64,unsigned __int64,long);
void ComTraceMessageT<unsigned __int64,unsigned __int64,unsigned short,unsigned short const *>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned __int64,unsigned __int64,unsigned short,unsigned short const *);
void ComTraceMessageT<unsigned __int64,unsigned __int64>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned __int64,unsigned __int64);
void ComTraceMessageT<unsigned __int64,unsigned long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned __int64,unsigned long);
void ComTraceMessageT<unsigned __int64,unsigned short *>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned __int64,unsigned short *);
void ComTraceMessageT<unsigned __int64,unsigned short,unsigned long,unsigned long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned __int64,unsigned short,unsigned long,unsigned long);
void ComTraceMessageT<unsigned long,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned long,long);
void ComTraceMessageT<unsigned long,unsigned long,unsigned short const *>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned long,unsigned long,unsigned short const *);
void ComTraceMessageT<unsigned long,unsigned long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned long,unsigned long);
void ComTraceMessageT<unsigned long,unsigned short *,unsigned __int64,CProcess *,CProcess *,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned long,unsigned short *,unsigned __int64,CProcess *,CProcess *,long);
void ComTraceMessageT<unsigned long,unsigned short *,unsigned __int64,unsigned __int64,unsigned __int64,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned long,unsigned short *,unsigned __int64,unsigned __int64,unsigned __int64,long);
void ComTraceMessageT<unsigned long,unsigned short *,unsigned __int64,unsigned long,unsigned long,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned long,unsigned short *,unsigned __int64,unsigned long,unsigned long,long);
void ComTraceMessageT<unsigned long,unsigned short *,unsigned __int64,unsigned short *,unsigned short *,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned long,unsigned short *,unsigned __int64,unsigned short *,unsigned short *,long);
void ComTraceMessageT<unsigned long,unsigned short *,unsigned short *,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned long,unsigned short *,unsigned short *,long);
void ComTraceMessageT<unsigned long,unsigned short *,unsigned short *,unsigned short *,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned long,unsigned short *,unsigned short *,unsigned short *,long);
void ComTraceMessageT<unsigned long,unsigned short *,void *,unsigned long,unsigned short *,void *,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned long,unsigned short *,void *,unsigned long,unsigned short *,void *,long);
void ComTraceMessageT<unsigned long,unsigned short const *,unsigned __int64>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned long,unsigned short const *,unsigned __int64);
void ComTraceMessageT<unsigned short *,CClientSet *,unsigned __int64>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short *,CClientSet *,unsigned __int64);
void ComTraceMessageT<unsigned short *,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short *,long);
void ComTraceMessageT<unsigned short *,unsigned long,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short *,unsigned long,long);
void ComTraceMessageT<unsigned short *,unsigned long,unsigned long,unsigned long,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short *,unsigned long,unsigned long,unsigned long,long);
void ComTraceMessageT<unsigned short *,unsigned long,unsigned short *,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short *,unsigned long,unsigned short *,long);
void ComTraceMessageT<unsigned short *,unsigned long,unsigned short *>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short *,unsigned long,unsigned short *);
void ComTraceMessageT<unsigned short *,unsigned long,unsigned short const *,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short *,unsigned long,unsigned short const *,long);
void ComTraceMessageT<unsigned short *,unsigned long,unsigned short const *,unsigned long,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short *,unsigned long,unsigned short const *,unsigned long,long);
void ComTraceMessageT<unsigned short *,unsigned long,unsigned short const *,unsigned long,unsigned short *,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short *,unsigned long,unsigned short const *,unsigned long,unsigned short *,long);
void ComTraceMessageT<unsigned short *,unsigned long,unsigned short const *,unsigned short *,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short *,unsigned long,unsigned short const *,unsigned short *,long);
void ComTraceMessageT<unsigned short *,unsigned long,unsigned short const *,unsigned short *,unsigned long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short *,unsigned long,unsigned short const *,unsigned short *,unsigned long);
void ComTraceMessageT<unsigned short *,unsigned long,unsigned short const *>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short *,unsigned long,unsigned short const *);
void ComTraceMessageT<unsigned short *,unsigned long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short *,unsigned long);
void ComTraceMessageT<unsigned short *,unsigned short *,int,unsigned long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short *,unsigned short *,int,unsigned long);
void ComTraceMessageT<unsigned short *,unsigned short *,long,int>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short *,unsigned short *,long,int);
void ComTraceMessageT<unsigned short *,unsigned short *,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short *,unsigned short *,long);
void ComTraceMessageT<unsigned short *,unsigned short *,unsigned long,unsigned long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short *,unsigned short *,unsigned long,unsigned long);
void ComTraceMessageT<unsigned short *,unsigned short *,unsigned long,unsigned short *,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short *,unsigned short *,unsigned long,unsigned short *,long);
void ComTraceMessageT<unsigned short *,unsigned short *,unsigned long,unsigned short *>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short *,unsigned short *,unsigned long,unsigned short *);
void ComTraceMessageT<unsigned short *,unsigned short *,unsigned long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short *,unsigned short *,unsigned long);
void ComTraceMessageT<unsigned short *,unsigned short *,unsigned short *,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short *,unsigned short *,unsigned short *,long);
void ComTraceMessageT<unsigned short *,unsigned short *,unsigned short *,unsigned long,unsigned short *,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short *,unsigned short *,unsigned short *,unsigned long,unsigned short *,long);
void ComTraceMessageT<unsigned short *,unsigned short *,unsigned short *,unsigned long,unsigned short *>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short *,unsigned short *,unsigned short *,unsigned long,unsigned short *);
void ComTraceMessageT<unsigned short *,unsigned short *,unsigned short *,unsigned short *,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short *,unsigned short *,unsigned short *,unsigned short *,long);
void ComTraceMessageT<unsigned short *,unsigned short *,unsigned short const *,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short *,unsigned short *,unsigned short const *,long);
void ComTraceMessageT<unsigned short *,unsigned short *>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short *,unsigned short *);
void ComTraceMessageT<unsigned short *,unsigned short const *,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short *,unsigned short const *,long);
void ComTraceMessageT<unsigned short *,unsigned short const *,unsigned __int64,unsigned long,unsigned short const *,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short *,unsigned short const *,unsigned __int64,unsigned long,unsigned short const *,long);
void ComTraceMessageT<unsigned short *,unsigned short const *,unsigned long,unsigned short const *,int,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short *,unsigned short const *,unsigned long,unsigned short const *,int,long);
void ComTraceMessageT<unsigned short *,unsigned short const *,unsigned long,unsigned short const *,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short *,unsigned short const *,unsigned long,unsigned short const *,long);
void ComTraceMessageT<unsigned short *,unsigned short const *,unsigned long,unsigned short const *,unsigned long,unsigned short *,long,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short *,unsigned short const *,unsigned long,unsigned short const *,unsigned long,unsigned short *,long,long);
void ComTraceMessageT<unsigned short *,unsigned short const *,unsigned long,unsigned short const *,unsigned short *,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short *,unsigned short const *,unsigned long,unsigned short const *,unsigned short *,long);
void ComTraceMessageT<unsigned short *,unsigned short const *,unsigned short *,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short *,unsigned short const *,unsigned short *,long);
void ComTraceMessageT<unsigned short *,unsigned short const *,unsigned short const *,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short *,unsigned short const *,unsigned short const *,long);
void ComTraceMessageT<unsigned short *,unsigned short const *>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short *,unsigned short const *);
void ComTraceMessageT<unsigned short const *,_GUID const *,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short const *,_GUID const *,long);
void ComTraceMessageT<unsigned short const *,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short const *,long);
void ComTraceMessageT<unsigned short const *,unsigned int,unsigned int,unsigned int>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short const *,unsigned int,unsigned int,unsigned int);
void ComTraceMessageT<unsigned short const *,unsigned int,unsigned short const *>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short const *,unsigned int,unsigned short const *);
void ComTraceMessageT<unsigned short const *,unsigned int>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short const *,unsigned int);
void ComTraceMessageT<unsigned short const *,unsigned long,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short const *,unsigned long,long);
void ComTraceMessageT<unsigned short const *,unsigned long,unsigned long,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short const *,unsigned long,unsigned long,long);
void ComTraceMessageT<unsigned short const *,unsigned long,unsigned long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short const *,unsigned long,unsigned long);
void ComTraceMessageT<unsigned short const *,unsigned long,unsigned short const *,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short const *,unsigned long,unsigned short const *,long);
void ComTraceMessageT<unsigned short const *,unsigned long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short const *,unsigned long);
void ComTraceMessageT<unsigned short const *,unsigned short *,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short const *,unsigned short *,long);
void ComTraceMessageT<unsigned short const *,unsigned short *,unsigned int,unsigned int>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short const *,unsigned short *,unsigned int,unsigned int);
void ComTraceMessageT<unsigned short const *,unsigned short *,unsigned long,int,unsigned short *,unsigned short *,unsigned short *,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short const *,unsigned short *,unsigned long,int,unsigned short *,unsigned short *,unsigned short *,long);
void ComTraceMessageT<unsigned short const *,unsigned short *,unsigned long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short const *,unsigned short *,unsigned long);
void ComTraceMessageT<unsigned short const *,unsigned short *,unsigned short *,unsigned long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short const *,unsigned short *,unsigned short *,unsigned long);
void ComTraceMessageT<unsigned short const *,unsigned short *,unsigned short *,unsigned short *,unsigned long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short const *,unsigned short *,unsigned short *,unsigned short *,unsigned long);
void ComTraceMessageT<unsigned short const *,unsigned short *,unsigned short const *,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short const *,unsigned short *,unsigned short const *,long);
void ComTraceMessageT<unsigned short const *,unsigned short *,unsigned short const *,unsigned int,unsigned int>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short const *,unsigned short *,unsigned short const *,unsigned int,unsigned int);
void ComTraceMessageT<unsigned short const *,unsigned short *,unsigned short const *>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short const *,unsigned short *,unsigned short const *);
void ComTraceMessageT<unsigned short const *,unsigned short *>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short const *,unsigned short *);
void ComTraceMessageT<unsigned short const *,unsigned short const *,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short const *,unsigned short const *,long);
void ComTraceMessageT<unsigned short const *,unsigned short const *,unsigned int,unsigned int>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short const *,unsigned short const *,unsigned int,unsigned int);
void ComTraceMessageT<unsigned short const *,unsigned short const *,unsigned long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short const *,unsigned short const *,unsigned long);
void ComTraceMessageT<unsigned short const *,unsigned short const *,unsigned short *,unsigned short const *>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short *,unsigned short const *);
void ComTraceMessageT<unsigned short const *,unsigned short const *,unsigned short *>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short *);
void ComTraceMessageT<unsigned short const *,unsigned short const *,unsigned short const *,long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,long);
void ComTraceMessageT<unsigned short const *,unsigned short const *,unsigned short const *,unsigned short *,unsigned short *,unsigned long,unsigned long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short *,unsigned short *,unsigned long,unsigned long);
void ComTraceMessageT<unsigned short const *,unsigned short const *,unsigned short const *>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *);
void ComTraceMessageT<unsigned short const *,unsigned short const *>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short const *,unsigned short const *);
void ComTraceMessageT<unsigned short,unsigned long>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short,unsigned long);
void ComTraceMessageT<unsigned short,unsigned short *,unsigned short *>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short,unsigned short *,unsigned short *);
void ComTraceMessageT<unsigned short,unsigned short *>(char const *,char const *,int,TraceLevel,unsigned short const *,unsigned short,unsigned short *);
void ComTraceNtStatus(long,char const *,char const *,int,unsigned short const *,...);
void ComTraceWinError(long,char const *,char const *,int,unsigned short const *,...);
void DealWithLowPowerEpochEntryEvent();
void DealWithLowPowerEpochExitEvent(bool);
void DealWithPowerStatusEvent(unsigned long,void *);
void DoAsyncMidRelease(CMid *,unsigned long);
void FindReference(unsigned __int64,SRunAsCacheReference * *,SRunAsCacheReference * *);
void FormatTraceMessage(unsigned short *,unsigned __int64,unsigned short const *,char *);
void FreeCallId(int);
void FreeServerOids(CProcess *,unsigned long,unsigned __int64 * const);
void FreeWinrtAsyncCallResponseBlock(__MIDL_XmitDefs_0010 *);
void GUIDToString(_GUID const *,unsigned short *);
void GetCurrentBindingsAndID(unsigned __int64 *,CDualStringArray * *);
void GetLatestPackageFullNameForLogging(IUserTokenInternal *,unsigned short const *,unsigned int,unsigned short *);
void HandlePingSetsOnResume();
void InitMarshalling();
void InitPingInterval(unsigned short);
void InitializePartitionCacheMetricsFromRegistry(unsigned short *,unsigned short *,unsigned short *);
void InitializeTracing(unsigned short const *);
void InitializeVistaEventIfNeeded();
void KernelServiceMain(unsigned long,unsigned short * * const);
void LogAccessFailed(void *,IUserToken *,HSTRING__ *,_GUID *,_GUID *,unsigned long,void *,int,tagEventLogModes,tagEventLogSD);
void LogComPlusRemoteDisabled(unsigned long,_GUID const &);
void LogDebuggerStartError(HSTRING__ *,unsigned long,CToken *,unsigned short *);
void LogDesktopAppxComActivationResult(long,IUserTokenInternal *,unsigned short const *,unsigned short const *,unsigned long,unsigned short const *);
void LogInvalidSecurityDescriptor(_GUID *,unsigned long,tagEventLogSD);
void LogRegisterTimeout(HSTRING__ *,unsigned long,CToken *);
void LogRemoteSideFailure(_GUID *,unsigned long,unsigned short *,unsigned short *,long);
void LogRemoteSideUnavailable(_ACTIVATION_PARAMS *,unsigned short *);
void LogRunAsServerStartError(HSTRING__ *,unsigned long,CToken *,unsigned short *,unsigned short *,unsigned short *);
void LogServerStartError(HSTRING__ *,unsigned long,CToken *,unsigned short *);
void LogServiceStartError(HSTRING__ *,unsigned long,CToken *,unsigned short *,unsigned short *,unsigned long);
void LogServiceStopError(HSTRING__ *,unsigned long,CToken *,unsigned short *);
void LowPowerEpochExitTimerCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
void NotifyCOMOnResume();
void NotifyCOMOnSuspend();
void PingLocalSets(CTime &);
void PushCurrentBindings();
void ReadDynamicIPChangesKeys();
void ReadEELoggingKeys();
void ReadPermissions(HKEY__ *);
void ReadRemoteActivationKeys();
void ReadRemoteBindingHandleCacheKeys();
void ReadSAFERKeys();
void RegHelpResumeImpersonate(void *);
void RegistryChanged(_TP_CALLBACK_INSTANCE *,void *,_TP_WAIT *,long);
void ReleaseProcess(CProcess *);
void RemoveAndDeleteOrphanedFastRundownOidsInGlobalList(CServerOxid *);
void ResumeImpersonate(void *);
void ResumeTimerCallback(void *,unsigned char);
void RpcssTestLogWorker(unsigned long,unsigned long const *,unsigned short,char *);
void SCMRemoveRegistration(tagScmProcessRegistration *);
void ScmServiceMain(unsigned long,unsigned short * * const);
void ServerAliveAPC(_RPC_ASYNC_STATE *,void *,_RPC_ASYNC_EVENT);
void ServiceMain(unsigned long,unsigned short * * const);
void SetDefaultAccessRestrictions(CSecDescriptor *);
void SetDefaultLaunchPermissions(CSecDescriptor *);
void SetDefaultLaunchRestrictions(CSecDescriptor *);
void SetLegacySecurity(unsigned short *,unsigned long);
void TaskOrWorkerThreadTimerCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
void TraceInteractiveUserUnmodifiedLogonTokenMismatch(unsigned short const *,void *,CToken *);
void TraceTokenGroupsAndPrivileges(_TOKEN_GROUPS_AND_PRIVILEGES *);
void TraceTokenIdentityMismatch(unsigned short const *,unsigned short const *,unsigned short const *,void *,CToken *);
void TryToCreateNewTaskThread();
void UnreferenceEntry(SRunAsCacheReference *,SRunAsCacheReference *);
void UpdateChannelHooks(long *,_GUID * *);
void __empty_global_delete(void *,unsigned __int64);
void __global_delete(void *,unsigned __int64);
void __scrt_initialize_type_info();
void __scrt_uninitialize_type_info();
void dsaProtocolMerge(tagDUALSTRINGARRAY *,tagDUALSTRINGARRAY * *);
void operator delete(void *);
void operator delete(void *,unsigned __int64);
void operator delete[](void *);
void operator delete[](void *,unsigned __int64);
wil_StagingConfig * g_wil_details_stagingConfigForMachine;
wil_StagingConfig * g_wil_details_stagingConfigForUser;
wil_details_FeatureTestState * g_wil_details_testStates;
wil_details_RecordUsageResult wil_details_RecordUsageInPropertyCache(wil_details_FeaturePropertyCache *,wil_details_ServiceReportingKind,unsigned int,unsigned int);
