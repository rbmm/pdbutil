namespace ATL
{
	struct CAtlBaseModule
	{
		CAtlBaseModule();
		static bool m_bInitFailed;
		~CAtlBaseModule();
	};

	struct CAtlComModule
	{
		CAtlComModule();
		void ExecuteObjectMain(bool);
		~CAtlComModule();
	};

	struct CAtlModule
	{
		long UpdateRegistryFromResourceS(unsigned int,int,_ATL_REGMAP_ENTRY *);
		static _GUID m_libid;
		virtual long GetGITPtr(IGlobalInterfaceTable * *);
		virtual long GetLockCount();
		virtual long Lock();
		virtual long Unlock();
		void Term();
	};

	struct CAtlModuleT<CRCMModule>
	{
		virtual long AddCommonRGSReplacements(IRegistrarBase *);
	};

	struct CAtlWinModule
	{
		CAtlWinModule();
		~CAtlWinModule();
	};

	struct CComAggObject<CRemoteConnectionManager>
	{
		CComAggObject<CRemoteConnectionManager>(void *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
		virtual ~CComAggObject<CRemoteConnectionManager>();
	};

	struct CComClassFactory
	{
		virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
		virtual long LockServer(int);
	};

	struct CComClassFactorySingleton<CRemoteConnectionManager>
	{
		virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
	};

	struct CComContainedObject<CRemoteConnectionManager>
	{
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	struct CComCreator2<CComCreator<CComObject<CRemoteConnectionManager> >,CComCreator<CComAggObject<CRemoteConnectionManager> > >
	{
		static long CreateInstance(void *,_GUID const &,void * *);
	};

	struct CComCreator<CComAggObject<CRemoteConnectionManager> >
	{
		static long CreateInstance(void *,_GUID const &,void * *);
	};

	struct CComCreator<CComObject<CRemoteConnectionManager> >
	{
		static long CreateInstance(void *,_GUID const &,void * *);
	};

	struct CComCreator<CComObjectNoLock<CComClassFactorySingleton<CRemoteConnectionManager> > >
	{
		static long CreateInstance(void *,_GUID const &,void * *);
	};

	struct CComCriticalSection
	{
		long Init();
	};

	struct CComObject<CRemoteConnectionManager>
	{
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
		virtual ~CComObject<CRemoteConnectionManager>();
	};

	struct CComObjectCached<CRemoteConnectionManager>
	{
		static long CreateInstance(CComObjectCached<CRemoteConnectionManager> * *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	struct CComObjectNoLock<CComClassFactorySingleton<CRemoteConnectionManager> >
	{
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	struct CComObjectRootBase
	{
		static _ATL_CATMAP_ENTRY const * GetCategoryMap();
		static void ObjectMain(bool);
	};

	struct CExpansionVector
	{
		int Add(unsigned short const *,unsigned short const *);
		long ClearReplacements();
	};

	struct CRegKey
	{
		long Close();
		long Create(HKEY__ *,unsigned short const *,unsigned short *,unsigned long,unsigned long,_SECURITY_ATTRIBUTES *,unsigned long *);
		long DeleteSubKey(unsigned short const *);
		long Open(HKEY__ *,unsigned short const *,unsigned long);
		long RecurseDeleteKey(unsigned short const *);
		long SetMultiStringValue(unsigned short const *,unsigned short const *);
	};

	class CRegObject
	{
	protected:
		long RegisterFromResource(unsigned short const *,unsigned short const *,unsigned short const *,int);
	public:
		virtual long AddReplacement(unsigned short const *,unsigned short const *);
		virtual long ClearReplacements();
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
		virtual ~CRegObject();
	};

	class CRegParser
	{
		struct CParseBuffer
		{
			int Append(unsigned short const *,int);
		};

	protected:
		int CanForceRemoveKey(unsigned short const *);
		int HasSubKeys(HKEY__ *);
		long AddValue(CRegKey &,unsigned short const *,unsigned short *);
		long NextToken(unsigned short *);
		long RegisterSubkeys(unsigned short *,HKEY__ *,int,int);
		long SkipAssignment(unsigned short *);
		static int VTFromRegType(unsigned short const *,unsigned short &);
		static unsigned short * StrChrW(unsigned short *,unsigned short);
		static unsigned short const * const * const rgszNeverDelete;
		void SkipWhiteSpace();
	public:
		long PreProcessBuffer(unsigned short *,unsigned short * *);
		long RegisterBuffer(unsigned short *,int);
	};

	struct CSimpleArray<unsigned short,CSimpleArrayEqualHelper<unsigned short> >
	{
		void RemoveAll();
	};

	struct CSimpleMap<unsigned short *,unsigned short *,CExpansionVectorEqualHelper>
	{
		int Add(unsigned short * const &,unsigned short * const &);
		unsigned short * & GetValueAt(int);
		void RemoveAll();
	};

	class CTempBuffer<unsigned char,256,CCRTAllocator>
	{
		void AllocateHeap(unsigned __int64);
		void FreeHeap();
	};

	class CTempBuffer<unsigned short,1024,CCRTAllocator>
	{
		void AllocateHeap(unsigned __int64);
		void FreeHeap();
	};

	class CTempBuffer<unsigned short,256,CCRTAllocator>
	{
		void AllocateHeap(unsigned __int64);
		void FreeHeap();
	};

	namespace _ATL_SAFE_ALLOCA_IMPL
	{
		struct CAtlSafeAllocBufferManager<CCRTAllocator>
		{
			~CAtlSafeAllocBufferManager<CCRTAllocator>();
		};

	};

	ATL::CAtlBaseModule _AtlBaseModule;
	ATL::CAtlComModule _AtlComModule;
	ATL::CAtlModule * _pAtlModule;
	ATL::CAtlWinModule _AtlWinModule;
	int AtlCrtErrorCheck(int);
	int InlineIsEqualUnknown(_GUID const &);
	long AtlComModuleGetClassObject(ATL::_ATL_COM_MODULE70 *,_GUID const &,_GUID const &,void * *);
	long AtlHresultFromLastError();
	long AtlHresultFromWin32(unsigned long);
	unsigned __int64 AtlMultiplyThrow<unsigned __int64>(unsigned __int64,unsigned __int64);
	void AtlCallTermFunc(ATL::_ATL_MODULE70 *);
	void AtlThrowImpl(long);
};

struct CArbRequestNode
{
	CArbRequestNode(CArbRequestSerializer *,long,IUserName *,long *);
	long GetUserNameW(IUserName * *);
};

class CArbRequestSerializer
{
	long GrabLock(long);
	long ReleaseLock(long);
public:
	CArbRequestSerializer(long *);
	virtual int FindUserArbitrationNode(IUserName *);
	virtual int RemoveAllArbitrationNodes();
	virtual int RemoveSessionArbitrationNode(long);
	virtual int RemoveUserArbitrationNode(IUserName *);
	virtual long AbortPendingRequests();
	virtual long GetSessionInProgress(long *);
	virtual long LockArbitrator(ITSSession *,IUserName *);
	virtual long LockArbitratorForReconnect(ITSSession *,ITerminal *,IUserName *,int);
	virtual long UnlockArbitrator(ITSSession *);
	virtual ~CArbRequestSerializer();
};

struct CAudit
{
	CAudit(unsigned short const *,long *);
	virtual long LogError(unsigned int,long);
	virtual long LogEvent(unsigned int,unsigned short,unsigned short const * *,unsigned int,void *,unsigned int);
	virtual long LogFailure(unsigned short,unsigned int,long);
	virtual ~CAudit();
};

struct CAutoExclusiveLock
{
	CAutoExclusiveLock(CResource &);
	~CAutoExclusiveLock();
};

struct CAutoImpersonate
{
	int Impersonate();
};

struct CAutoSetActivityId
{
	CAutoSetActivityId(_GUID *);
};

struct CAutoSharedLock
{
	~CAutoSharedLock();
};

struct CAutologonPassword
{
	static long Retrieve(unsigned short * const,unsigned short const *);
	static long Store(unsigned short const *,unsigned short const *);
};

struct CAutoreconnectInfo
{
	virtual long GetExpirationTime(_LARGE_INTEGER *);
	virtual long SetExpirationTime(_LARGE_INTEGER *);
	virtual ~CAutoreconnectInfo();
};

struct CCSLock
{
	long Initialize(unsigned long);
};

struct CCachedTerminalInfo
{
	CCachedTerminalInfo(ITerminal *,long *);
	long AccessCheckEx(unsigned long,long,int);
	long GetSecurityDescriptor(void * *,unsigned long *);
	long GetTerminal(ITerminal * *);
	long SetSecurityDescriptor(void *);
	virtual ~CCachedTerminalInfo();
};

struct CComUtils
{
	static long CoCreateInSession(unsigned long,_GUID const &,unsigned long,_GUID const &,void * *);
};

class CConnectionEx
{
	struct CRDPCallback
	{
		virtual long BrokenConnection(unsigned long,unsigned long);
		virtual long DisplayIOCtl(_WTS_DISPLAY_IOCTL *);
		virtual long GetConnectionId(unsigned long *);
		virtual long InvokeTargetShadow(unsigned short *,unsigned long,unsigned char *,unsigned long,unsigned char *,unsigned long,unsigned char *,unsigned long,unsigned char *,unsigned long,unsigned short *);
		virtual long OnReady();
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long RedrawWindow(_WTS_SMALL_RECT *);
		virtual long ShadowHotKey();
		virtual long StopScreenUpdates();
		virtual long StopShadow();
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	long CreateRemoteFXObject();
	long MergeUserConfig(_WINSTATIONCLIENTW *,_WINSTATIONDOCONNECTMSG *);
	long NotifyUserAuthenticated(ITSLicense *);
	virtual long MergeUserSettings(int,_POLICY_TS_USER *,_USERCONFIGW *,_USERCONFIGW *,_USERCONFIGW *,int *,int *);
	void GetConnectionGUIDFromProtocol(_GUID *);
public:
	CConnectionEx(unsigned short const * const,_GUID const &,_GUID const &,RdpListenerTypeEnum,IWRdsProtocolConnection *,_WRDS_CONNECTION_SETTINGS *,IListener *,IWRdsProtocolConnectionCallback * *,long *);
	long CacheLastInputTime();
	long ReadSSL(_SSLINFO *);
	long SetMaxMonitors(_MONITORCONFIG *);
	virtual TSLicenseState GetNextProtocolState(TSLicenseState);
	virtual _WDCONFIGW * GetWdConfig();
	virtual _WINSTATIONCONFIG2W * GetWinstationConfig();
	virtual _WINSTATIONCONFIGW * GetConfigData();
	virtual int CanDynamicReconnect();
	virtual int IsSubDesktop();
	virtual int MustResetDisplay();
	virtual int SupportFastReconnect();
	virtual long Accept();
	virtual long AccessCheck();
	virtual long AssignSession(ITSSession *,void *);
	virtual long AuthenticateClientToSession(long *);
	virtual long AutoReconnectResetLastInputTime(unsigned __int64);
	virtual long Close();
	virtual long Connect(unsigned long,_ICA_STACK_ADDRESS *);
	virtual long ConnectNotify(long);
	virtual long CreateDynamicVirtualChannel(char *,unsigned long,int,unsigned long,void * *);
	virtual long CreateStaticVirtualChannel(char *,void * *);
	virtual long DeletePassword();
	virtual long DisconnectNotify();
	virtual long DoConnect();
	virtual long DoDisconnect(unsigned long);
	virtual long GetAutoReconnectInfo(int,_TS_AUTORECONNECTINFO *);
	virtual long GetClearTextUserPassword(_UNICODE_STRING *);
	virtual long GetClientData(_WINSTATIONCLIENTW *,unsigned long);
	virtual long GetClientRandom(unsigned char *,unsigned long,unsigned long *);
	virtual long GetConnectingUser(IUserName * *,int *);
	virtual long GetConnectionEventLogActivityGUID(_GUID *);
	virtual long GetConnectionGUID(_GUID *);
	virtual long GetConnectionId(unsigned long *);
	virtual long GetConnectionNumber();
	virtual long GetConnectionProperty(_GUID const &,unsigned long *,__PROPERTY_VALUE *);
	virtual long GetDeviceId(unsigned char *,unsigned long,unsigned long *,unsigned long *);
	virtual long GetLastInputTime(_LARGE_INTEGER *);
	virtual long GetLicenseContext(void * *);
	virtual long GetLicenseType(_GUID *);
	virtual long GetLicenseValidationInformation(void *);
	virtual long GetParentSessionId(long *);
	virtual long GetPassthruStack(IStack * *);
	virtual long GetProtocolClassGuid(__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0004 *,_GUID *);
	virtual long GetProtocolGUID(_GUID *);
	virtual long GetProtocolStatus(__MIDL_RCMPublic_0006,_PROTOCOLSTATUSEX *);
	virtual long GetSecurityDescriptor(unsigned char * *,unsigned long *);
	virtual long GetSecurityFilterClientCerts(_TS_SECURITY_FILTER_CLIENT_CERTS * *,unsigned long *);
	virtual long GetSecurityFilterClientToken(int,void * *);
	virtual long GetSecurityFilterIdentificationClientToken(int,void * *);
	virtual long GetStackContext(void * *);
	virtual long GetTerminalChannels(void * *,void * *,void * *,void * *,void * *,void * *);
	virtual long GetUserCredentials(_TS_CREDENTIAL *);
	virtual long InitCommonSessionData();
	virtual long InitializeClientData(_WINSTATIONCLIENTW *,_WINSTATIONDOCONNECTMSG *);
	virtual long IsFrontAuthUsed(int *);
	virtual long IsUserAllowedToLogon(long,void *,unsigned short *,unsigned short *);
	virtual long Listen(IListener *,IConnection * *,int *);
	virtual long LogonNotify(IUserName *);
	virtual long NotifyCommandProcessCreated(unsigned short * const);
	virtual long PreCreate();
	virtual long ProcessData(ITSLicense *);
	virtual long QueryLoadBalancingInfo(void *,unsigned long,unsigned long *);
	virtual long QueryModuleData(void *,unsigned long,void *,unsigned long,unsigned long *);
	virtual long QueryThinwireModuleData(void *,unsigned long,unsigned long *);
	virtual long QueryVirtualChannelModuleData(unsigned char *,unsigned long,void *,unsigned long,unsigned long *);
	virtual long RedirectClient(void *,unsigned long,unsigned long *);
	virtual long RedirectLogonBeginPainting();
	virtual long RedirectLogonError(long,long,unsigned short const *,unsigned short const *,unsigned int,unsigned int *);
	virtual long RedirectLogonMessage(unsigned short const *,unsigned short const *,unsigned int,unsigned int *);
	virtual long RedirectLogonStatus(unsigned short const *,unsigned int *);
	virtual long RegisterHotKey(_ICA_STACK_HOTKEY *);
	virtual long SendAutoReconnectStatus();
	virtual long SendLogonErrorInfoToClient(unsigned long,long);
	virtual long SendSessionArbitration(long,_TS_WINLOGON_REQUEST *);
	virtual long SendUserInfoToClient(IUserName *);
	virtual long SessionArbitrationEnumeration(void *,int,long *,unsigned long *);
	virtual long SetChildSessionIdInParentSession();
	virtual long SetConfigData(IUserName *,_WINSTATIONCONFIGW *,_WINSTATIONCLIENTW *);
	virtual long SetConnectionProperty(_GUID const &,__PROPERTY_VALUE *);
	virtual long SetErrorInfo(unsigned long,int);
	virtual long SetStatus(unsigned long);
	virtual long StackIoControlWhileLocking(unsigned long,void *,unsigned long,void *,unsigned long,unsigned long *);
	virtual long StackLock();
	virtual long StackUnlock();
	virtual long StartShadow(unsigned short *,long,unsigned char,unsigned short);
	virtual long StartShadow2();
	virtual long StopShadow();
	virtual long StopShadow2();
	virtual long TargetShadow(unsigned char *,unsigned long,unsigned char *,unsigned long,unsigned char *,unsigned long,unsigned char *,unsigned long,unsigned short *);
	virtual long Verify(_GUID const &,unsigned long,__PROPERTY_VALUE *,unsigned long,__PROPERTY_VALUE *);
	virtual long VideoConfigurationCheck();
	virtual long getClientWTSSockAddr(_WTS_SOCKADDR *);
	virtual long getName(unsigned short * const);
	virtual long getRemoteAddress(sockaddr_in6 *);
	virtual long getShadowClient(IShadowClient * *);
	virtual long getShadowTarget(IShadowTarget * *);
	virtual unsigned long GetIoctlCode(TSLicenseState);
	virtual void RdpExtMemFree(unsigned char *);
	virtual ~CConnectionEx();
};

class CConnectionHandlerItem
{
	class CConnHandlerKeepAliveObject
	{
		void Cleanup();
	public:
		CConnHandlerKeepAliveObject(CConnectionHandlerItem *);
		virtual long OnShutdown();
		virtual ~CConnHandlerKeepAliveObject();
	};

	long OpenHandlerRegistryKey(CRegistry &);
	void HandlerTerminated();
public:
	CConnectionHandlerItem(IRCMConnectionDispatchManager *,unsigned short *,long *);
	long LoadChildSessionListenerHandler();
	long LoadHandler();
	long RefreshHandler();
	long Uninitialize();
	virtual ~CConnectionHandlerItem();
};

struct CConnectionLastInputTime
{
	CConnectionLastInputTime(unsigned __int64,unsigned long,long *);
};

struct CConnectionRequest
{
	virtual long GetRemoteTerminal(IRemoteTerminal * *);
	virtual long SendLogonErrorInfoToClient(unsigned long,long);
};

class CContainerHelper
{
	static int GetAllowAllListenerInContainer();
public:
	static int IsProcessRunningInContainer();
};

struct CCredentialsFactory
{
	static long GetInstanceOfPasswordCredentials(unsigned short const *,unsigned short const *,unsigned short const *,ICredentials * *);
	static long GetInstanceOfSecFilterCredentials(unsigned char *,unsigned long,unsigned long,int,ICredentials * *);
	static long GetInstanceOfSmartCardCredentials(unsigned short const *,ICredentials * *);
};

struct CCriticalSection
{
	CCriticalSection(unsigned long);
};

struct CDCOMFact
{
	CDCOMFact();
	virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
	virtual long LockServer(int);
};

struct CDefPolicy
{
	CDefPolicy(_GUID);
	virtual long Activate();
	virtual long Deactivate(int);
	virtual long DeleteProtocolContext(void *);
	virtual long Disconnect(CLicenseData &);
	virtual long DoMinimalHandshake(void * *,unsigned char * *,unsigned long *,unsigned char * *,unsigned long *,TSLicenseState *,unsigned long *);
	virtual long GetDeviceIdAsString(void *,unsigned short *,unsigned long *);
	virtual long GetDeviceIdFromProtocolContext(void *,unsigned char *,unsigned long *);
	virtual long Load();
	virtual long Logoff(CLicenseData &);
	virtual long Logon(CLicenseData &);
	virtual long ProcessData(void * *,unsigned char * *,unsigned long *,unsigned char * *,unsigned long *,TSLicenseState *,unsigned long *);
	virtual long Query(int *);
	virtual long Reconnect(CLicenseData &);
	virtual long Unload();
	virtual long UserAuthenticated(void *,unsigned short const *,unsigned short const *);
	virtual unsigned long GetId();
	virtual ~CDefPolicy();
};

struct CDefTSNotifySink
{
	CDefTSNotifySink();
	virtual long OnConnected(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnCreated(__PTSSessInfo *);
	virtual long OnCsrConnected(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnCsrDisconnected(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnCsrInitialized(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnDesktopLock(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnDesktopUnlock(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnDestroyed(__PTSSessInfo *);
	virtual long OnDisconnected(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,ITerminal *);
	virtual long OnEndShell(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnLogoff(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnLogon(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnPreConnect(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,ITerminal *);
	virtual long OnSessionArbitration(__PTSSessInfo *,IUserName *);
	virtual long OnShadowStart(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnShadowStop(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnStartSSAsUser(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnStartShell(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnStopSSAsUser(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnTerminated(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long QueryInterface(_GUID const &,void * *);
};

class CDefaultConnectionHandler
{
	long FindUserSessionToReconnect(IRemoteTerminal *,IConnection *,DynArray<long,unsigned long> &);
public:
	CDefaultConnectionHandler();
	long AttempFastReconnectToExistingSession(IConnection *,IRemoteTerminal *);
	long AttemptAutoReconnect(IConnection *,IRemoteTerminal *);
	long AttemptSDRedirect(IConnection *,TS_LOAD_BALANCE_INFO_EX *,IRemoteTerminal *);
	long AttemptSDRedirectReconnect(IConnection *,IRemoteTerminal *);
	long LoadSDArbHandler(ISessionArbitrationHelperEx * *);
	virtual long GetInstanceOfSessionArbitration(ISessionArbitration * *);
	virtual long HandleConnection(IConnectionRequest *,ITerminal * *);
	virtual long Initialize(ISessionManager *,IConnectionManager *,ITSEventDispatcher *,IHealthStatus *);
	virtual long Refresh();
	virtual long ServiceStatusChange(__MIDL_IConnectionHandler_0001);
	virtual long Uninitialize();
};

struct CDefaultSessionArbitrationFilter
{
	CDefaultSessionArbitrationFilter(ITSSession *,long *);
	CDefaultSessionArbitrationFilter(unsigned short * const,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0004,_GUID const &,long *);
	static long GetInstanceOfDefaultSessionArbitrationFilter(ITSSession *,ISessionEnumFilter * *);
	static long GetInstanceOfDefaultSessionArbitrationFilter(unsigned short * const,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0004,_GUID const &,ISessionEnumFilter * *);
	virtual long Test(ITSSession *);
};

class CDefaultSessionArbitrationHelper
{
	long GetRequestDialogObject(long,void * *);
public:
	CDefaultSessionArbitrationHelper();
	virtual long EnumSessions(__MIDL___MIDL_itf_sessarbitrationhelper_0000_0000_0001,unsigned long *,_TS_SESSION_INFORMATION_0 * *,ISessionEnumFilter *);
	virtual long EnumSessions(__MIDL___MIDL_itf_sessarbitrationhelper_0000_0000_0001,unsigned long *,long * *,ISessionEnumFilter *);
	virtual long GetInstanceOfWinlogonReply(_TS_WINLOGON_REPLY *,CWinlogonReply * *);
	virtual long GetInstanceOfWinlogonRequest(WINLOGON_ACTION_CODE,unsigned long,long *,unsigned long,CWinlogonRequest * *);
	virtual long Initialize(IUserName *,IUserName *);
	virtual long IsAppServer(int *);
	virtual long IsSingleSessionPerUserEnabled(int *);
	virtual long QuerySessionLimit(int,long,int *);
	virtual long Session_GetSession(ITSSession * *);
	virtual long Session_IsConsoleSession(int *);
	virtual long Sessions_DisconnectSession(_TS_SESSION_INFORMATION_0 *);
	virtual long Sessions_IsSessionActive(_TS_SESSION_INFORMATION_0 *,int *);
	virtual long Sessions_LogoffSession(_TS_SESSION_INFORMATION_0 *);
	virtual long Sessions_ReconnectToSession(_TS_SESSION_INFORMATION_0 *);
	virtual long Sessions_SendRequestToSession(_TS_SESSION_INFORMATION_0 *,unsigned long *);
	virtual long User_GetUser(IUserName * *);
	virtual long User_IsAdmin(int *);
};

struct CDisconnectTimerCallback
{
	virtual long OnTimerExpired();
};

class CDoSConnections
{
	static _SYSTEMTIME _LastLoggedDelayConnection;
	static int IsSbRedirector();
	static long _MaxOutstandingConnections;
	static long _OutstandingConnections;
	static void * _hConnectEvent;
	static void SetMaxOutstandingConnections();
public:
	static int CanProceedConnections(unsigned short const *);
	static void DecrementOutstandingConnections();
};

struct CEnfLicenseManager
{
	CEnfLicenseManager(IEnforcementCore *,long *);
	virtual int IsSessionLicensed(long,CTSLicense * *);
	virtual long AddLicense(CTSLicense *,long);
	virtual long GetInstanceOfLicense(_GUID,ITSLicense * *);
	virtual long HandleHeartBeat(unsigned long,unsigned long);
	virtual long InvalidateLicense(long);
	virtual long RemoveLicense(long);
	virtual void CleanupLicenseList();
};

class CEnfPolicyManager
{
	long AddPolicy(_GUID,HINSTANCE__ *,ITSLicensePolicy *);
	long FindPolicyByType(_GUID,ITSLicensePolicy * *);
	long FindPolicyItem(_GUID,CEnfPolicyManager::CPolicyItem * *);
	void CleanupPolicyList();
public:
	CEnfPolicyManager(long,long *);
	virtual long ChangePolicy(_GUID,unsigned long);
	virtual long DecrementSessionCount(_GUID);
	virtual long DeleteLicenseContext(_GUID,void *);
	virtual long GetInstanceOfPolicy(_GUID,ITSLicensePolicy * *);
	virtual long IncrementSessionCount(_GUID);
	virtual long QueryPolicy(_GUID,int *,int *);
	virtual long RefreshSessionLimit(long);
	virtual long SetPolicyId(unsigned long);
};

struct CEnfRpcHelper
{
	CEnfRpcHelper(long *);
	virtual long EnumeratePolicies(unsigned long * *,unsigned long *);
	virtual long GetCurrentPolicy(unsigned long *);
	virtual long GetPolicyInfo(unsigned long,LCPOLICYINFOGENERIC *);
	virtual long IsCallerAdmin();
	virtual long SetCurrentPolicy(unsigned long);
};

struct CEnfTrace
{
	CEnfTrace();
	void RecordEvent(TSENF_ACTION,TSENF_SOURCE,TSENF_EVENT);
	void RecordEvent(TSENF_ACTION,TSENF_SOURCE,TSENF_EVENT,TSENF_IGNORE_REASON);
	void RecordEvent(TSENF_ACTION,TSENF_SOURCE,TSENF_EVENT,long,_GUID);
	void RecordEvent(TSENF_ACTION,TSENF_SOURCE,TSENF_EVENT,long,_GUID,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	void RecordEvent(TSENF_ACTION,TSENF_SOURCE,TSENF_EVENT,long,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,TSLicenseState,unsigned long);
	~CEnfTrace();
};

struct CEnforcementCore
{
	struct CSessionMonitor
	{
		virtual long OnConnected(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	CEnforcementCore(long *);
	long LicenseExistingSessions();
	virtual HINSTANCE__ * GetHModule();
	virtual long CompleteEnfRequest();
	virtual long DeleteLicenseContext(void *);
	virtual long GetInstanceOfLicenseManager(IEnfLicenseManager * *);
	virtual long GetInstanceOfPolicyManager(IEnfPolicyManager * *);
	virtual long GetInstanceOfRpcHelper(IEnfRpcHelper * *);
	virtual long GetInstanceOfTSLicense(_GUID &,ITSLicense * *);
	virtual long GetInstanceOfTSLicenseInternal(_GUID &,ITSLicense * *);
	virtual long GetLicenseContext(ITSLicense *,void * *);
	virtual long GetLicenseType(unsigned long,_GUID *);
	virtual long GetSessionBeingSerialized(long *);
	virtual long Initialize(ISessionManager *,IExternalEventDispatcher *);
	virtual long NotifySerializer(ITSSession *);
	virtual long QueryPolicy(_GUID,int *);
	virtual long SerializeArbRequest(ITSSession *,IUserName *);
	virtual long SerializeSessionReconnect(ITSSession *,ITerminal *,int);
	virtual long Start();
	virtual long StartEnfRequest();
	virtual long Stop();
	virtual ~CEnforcementCore();
};

class CEventDispatcher
{
	struct CEventListEntry
	{
		CEventListEntry(CEventDispatcher *);
		long Queue(__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0002,long,_LIST_ENTRY *);
		virtual long GetEventHit(__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0002 *,long *);
		virtual long WaitForSessionEvent(unsigned long);
		virtual ~CEventListEntry();
	};

	struct CForwardSink
	{
		virtual long OnConnected(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnCreated(__PTSSessInfo *);
		virtual long OnCsrConnected(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnCsrDisconnected(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnCsrInitialized(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnDesktopLock(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnDesktopUnlock(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnDestroyed(__PTSSessInfo *);
		virtual long OnDisconnected(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,ITerminal *);
		virtual long OnEndShell(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnLogoff(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnLogon(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnPreConnect(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,ITerminal *);
		virtual long OnSessionArbitration(__PTSSessInfo *,IUserName *);
		virtual long OnShadowStart(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnShadowStop(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnStartSSAsUser(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnStartShell(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnStopSSAsUser(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnTerminated(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	class CSinkEntry
	{
		struct CAdviseCookie
		{
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		void Unadvise();
	public:
		virtual ~CSinkEntry();
	};

	long TestForEvent(__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0002,__PTSSessInfo *);
public:
	CEventDispatcher(long *);
	virtual long Advise(ITSNotifySink *,IUnknown * *);
	virtual long QueueWaitForSessionEvent(__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0002,long,ITSEventDispatcher_ITSEvent * *);
	virtual long WaitForSessionEvent(__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0002 *,long *,unsigned long);
	virtual long WaitForSessionState(__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,long,unsigned long);
	virtual ~CEventDispatcher();
};

struct CEventDispatcherTrace
{
	CEventDispatcherTrace(char const *,unsigned long);
	virtual long GetErrorLogDetail(unsigned long,char *,unsigned long);
	virtual ~CEventDispatcherTrace();
};

struct CExecSessionApps
{
	class CEventSink
	{
		long ExecApps(ITSSession *);
		long SignalVirtualChannelEvents(int,ITSSession *,long);
	public:
		virtual long OnConnected(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnDisconnected(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,ITerminal *);
		virtual long OnLogon(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnShadowStart(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnShadowStop(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	CExecSessionApps();
	long Initialize();
};

struct CGenericOpsMonitor
{
	CGenericOpsMonitor(_EVENT_DESCRIPTOR,char const *,unsigned long);
	virtual void TimerExpired();
	virtual ~CGenericOpsMonitor();
};

struct CGenericTrace
{
	CGenericTrace(unsigned long,char const *,char const *);
	virtual long GetErrorLogDetail(unsigned long,char *,unsigned long);
	virtual ~CGenericTrace();
};

struct CGenericTraceEx
{
	CGenericTraceEx(char const *,unsigned long,char const *,...);
	virtual long GetErrorLogDetail(unsigned long,char *,unsigned long);
	virtual ~CGenericTraceEx();
};

class CGraphicsGlobalContext
{
	virtual long Initialize();
	virtual long Terminate();
public:
	static long CreateInstance(IWRdsGraphicsGlobalContextPrivate * *);
	virtual long CreateGraphicsServiceInstance(unsigned long,unsigned long,_GUID *,unsigned short const *,IWRdsGraphicsPrivate * *);
	virtual long GetHybridSessionConfiguration(int *);
	virtual long NonDelegatingQueryInterface(_GUID const &,void * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CHardcodedListenerConfig
{
	static RdpListenerTypeEnum ListenerTypeFromProtoName(unsigned short const *);
	static long GetSSLInfo(unsigned short const *,_SSLINFO *);
};

class CHelper
{
	static long WTSConvertProtocolCounters(_WTS_PROTOCOL_COUNTERS *,_PROTOCOLCOUNTERS *);
public:
	static int IsResetLastInputTimeOnAutoReconnect();
	static long AddStorageForComponent(_GUID const &,ITSUnknown *);
	static long CacheLastInputTimeForSession(unsigned long,unsigned __int64,unsigned long);
	static long ConvertPolicySettingsToWRdsSetting(_WRDS_SETTINGS *,_POLICY_TS_MACHINE *);
	static long ConvertUserConfigToWRdsConnectionSetting(_WRDS_CONNECTION_SETTINGS *,_USERCONFIGW *,unsigned long);
	static long ConvertWRdsConnectionSettingToUserConfig(_USERCONFIGW *,_WRDS_CONNECTION_SETTINGS *);
	static long ConvertWRdsConnectionSettingToWinStationClient(_WINSTATIONCLIENTW *,_WINSTATIONDOCONNECTMSG *,_WRDS_CONNECTION_SETTINGS *);
	static long ConvertWRdsSettingToPolicySettings(_POLICY_TS_MACHINE *,_WRDS_SETTINGS *);
	static long ConvertWRdsSettingToUserConfig(_POLICY_TS_USER *,_USERCONFIGW *,_WRDS_SETTINGS *);
	static long ConvertWTSClientDataToWRdsConnectionSetting(_WRDS_CONNECTION_SETTINGS *,_WTS_CLIENT_DATA *);
	static long DeleteCachedLastInputTimeForSession(unsigned long);
	static long FindGlassSession(ITSSession * *,ITerminal * *);
	static long GetCachedLastInputTimeForSession(unsigned long,unsigned __int64 *,unsigned long *);
	static long GetGlobalDispatcher(ITSEventDispatcher * *);
	static long GetSessionAutoReconnectFlag(ITSSession *,int *);
	static long GetSessionDispatcher(ITSSession *,ITSEventDispatcher * *);
	static long GetSessionList(ISessionList * *);
	static long GetStorageForComponent(_GUID const &,ITSUnknown * *);
	static long GetStorageForSession(long,int,ITSObjectStorage * *);
	static long GetStorageForSessionObject(ITSSession *,int,ITSObjectStorage * *);
	static long GetUserNameDomain(ITSSession *,unsigned short * *,unsigned short * *);
	static long LogErrorEvent(unsigned int,long);
	static long LogEvent(unsigned int,unsigned short,unsigned short,unsigned short const * *);
	static long RemoveStorageForComponent(_GUID const &);
	static long SetSessionAutoReconnectFlag(ITSSession *,int);
	static long ShowMessageBox(unsigned long,unsigned short *,unsigned short *,unsigned long,unsigned long,unsigned long *,int,int);
	static long UALInstrument(sockaddr_storage,unsigned short const *);
	static long WTSConvertProtocolStatusData(_WTS_PROTOCOL_STATUS *,_PROTOCOLSTATUSEX *);
	static long WTSConvertTimeZoneData(_WTS_TIME_ZONE_INFORMATION *,_TS_TIME_ZONE_INFORMATION *);
	static long WTSConvertWTSSockAddrToSockAddrStorage(_WTS_SOCKADDR *,sockaddr_storage *);
};

class CHybridHandler
{
	int IsIncomingSameUser(ITSSession *,IUserName *);
	long AskForDisconnectPermission(ITSSession *,IRemoteTerminal *,IConnection *,IUserName *);
	long AutoReconnect(IConnection *,ITSSession *,IHybridTerminal *,int *);
	long CreateHybridTerminal(IRemoteTerminal *,ITerminal *,IHybridTerminal * *);
	long GetRequestDialogObject(long,void * *);
	long GetUserCredential(IConnection *,IUserName * *);
	long LogDeniedEvent(ITSSession *,IConnection *,unsigned short *,unsigned short *,unsigned short *);
public:
	CHybridHandler(long *);
	virtual long GetInstanceOfSessionArbitration(ISessionArbitration * *);
	virtual long HandleConnection(IConnectionRequest *,ITerminal * *);
	virtual long Initialize(ISessionManager *,IConnectionManager *,ITSEventDispatcher *,IHealthStatus *);
	virtual long NotifyConnectionCompleted(IHybridTerminal *);
	virtual long Refresh();
	virtual long ServiceStatusChange(__MIDL_IConnectionHandler_0001);
	virtual long Uninitialize();
};

class CHybridTeminal
{
	virtual long NonDelegatingQueryInterface(_GUID const &,void * *);
public:
	CHybridTeminal(IHybridConnectionHandler *,ITerminal *,IRemoteTerminal *,long *);
	virtual long AuthenticateClientToSession(long *);
	virtual long CompareInitialProgram(int *);
	virtual long Connected(ITSSession *);
	virtual long CreateDynamicVirtualChannel(char *,unsigned long,int,unsigned long,void * *);
	virtual long CreateStaticVirtualChannel(char *,void * *);
	virtual long DisableConnectionCompleteNotify();
	virtual long Disconnected(ITSSession *);
	virtual long DoConnect(_TERMINAL_CONNECTMSG *,ITSSession *,unsigned __int64,unsigned long);
	virtual long DoDisconnect(unsigned long);
	virtual long DoTerminate();
	virtual long GetActivityId(_GUID *);
	virtual long GetAutoReconnectInfo(ITSUnknown * *);
	virtual long GetClientAddress(unsigned short * const);
	virtual long GetClientData(unsigned char *,unsigned long);
	virtual long GetClientName(unsigned short * const);
	virtual long GetClientTimeZone(IUserName *,_TS_DYNAMIC_TIME_ZONE_INFORMATION *);
	virtual long GetConfigData(unsigned char *,unsigned long);
	virtual long GetConnection(IConnection * *);
	virtual long GetConnectionProperty(_GUID const &,unsigned long *,__PROPERTY_VALUE *);
	virtual long GetGlassTerminal(ITerminal * *);
	virtual long GetInputHandles(void * *,void * *);
	virtual long GetLastInputTime(_LARGE_INTEGER *);
	virtual long GetLicenseContext(void * *);
	virtual long GetLicenseType(_GUID *);
	virtual long GetLicenseValidationInformation(void *);
	virtual long GetNumMonitors(unsigned int *);
	virtual long GetParent(unsigned short * const,long *);
	virtual long GetProtocolName(unsigned short * const);
	virtual long GetProtocolStatus(__MIDL_RCMPublic_0006,_PROTOCOLSTATUSEX *);
	virtual long GetRunEnum(int *);
	virtual long GetSecurityDescriptor(unsigned char * *,unsigned long *);
	virtual long GetSecurityFilterClientCerts(_TS_SECURITY_FILTER_CLIENT_CERTS * *,unsigned long *);
	virtual long GetSecurityFilterClientToken(int,void * *);
	virtual long GetSessionInitialProgram(unsigned short * const);
	virtual long GetTerminalInformation(unsigned short * const,unsigned char * *,unsigned long *);
	virtual long GetTerminalName(unsigned short * const);
	virtual long GetTerminalType(_GUID *,unsigned long *);
	virtual long GetTerminalTypeExtended(_GUID *,unsigned long *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0004 *,_GUID *);
	virtual long GetUserCredentials(_TS_CREDENTIAL *);
	virtual long GetWdConfig(unsigned char *,unsigned long);
	virtual long IsAdminSession(int *);
	virtual long IsNewSessionAllowInDrain(void *);
	virtual long IsUserAllowedToLogon(IUserName *);
	virtual long LoggedOn(IUserName *);
	virtual long NotifyCommandProcessCreated(unsigned short * const);
	virtual long PrepareForSessionArbitration(IUserName *);
	virtual long QueryStackModuleData(unsigned char *,unsigned long,void *,unsigned long,unsigned long *);
	virtual long QueryStackVirtualChannelModuleData(unsigned char *,unsigned long,void *,unsigned long,unsigned long *);
	virtual long RedirectLogonBeginPainting();
	virtual long RedirectLogonError(long,long,unsigned short const *,unsigned short const *,unsigned int,unsigned int *);
	virtual long RedirectLogonMessage(unsigned short const *,unsigned short const *,unsigned int,unsigned int *);
	virtual long RedirectLogonStatus(unsigned short const *,unsigned int *);
	virtual long SendLogonErrorInfoToClient(unsigned long,long);
	virtual long SendUserInfoToClient(IUserName *);
	virtual long SessionArbitrationEnumeration(void *,int,long *,unsigned long *);
	virtual long SetPrevIntialProgram();
	virtual long SetRunEnum(int);
	virtual long SetSecurityDescriptor(unsigned char *,unsigned long);
	virtual long StartShadow(unsigned short *,long,unsigned char,unsigned short);
	virtual long StartShadow2();
	virtual long StopShadow();
	virtual long StopShadow2();
	virtual long TargetShadow(unsigned char *,unsigned long,unsigned char *,unsigned long,unsigned char *,unsigned long,unsigned char *,unsigned long,unsigned short *);
	virtual long getInitialCommandProcess(unsigned short *,unsigned long *);
	virtual long getShadowClient(IShadowClient * *);
	virtual long getShadowTarget(IShadowTarget * *);
	virtual ~CHybridTeminal();
};

struct CIdleTimerCallback
{
	long TimeFromLastInput(unsigned long *);
	virtual long OnTimerExpired();
	void Reset(int);
};

class CImpersonate
{
	long CheckCurrentContext(void *);
public:
	long ImpersonateUser(IUserName *);
	long ImpersonateUser(void *);
	long StopImpersonating();
};

struct CLicenseData
{
	CLicenseData(ITSSession *,CTSLicense *);
	virtual long GetLicenseContext(void * *);
	virtual long GetLicensePtr(CTSLicense * *);
	virtual long GetLicenseState(TSLicenseState *);
	virtual long GetSessionId(long *);
	virtual long GetSessionState(__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001 *);
	virtual long SetLicenseContext(void *);
	virtual long SetLicenseState(TSLicenseState);
};

struct CLicenseList
{
	CLicenseList(long *);
	long Add(CTSLicense *,long);
	long Destroy();
	long Find(long,CTSLicense * *);
	long Remove(long);
	virtual ~CLicenseList();
};

class CListTree<CConnectionHandlerItem>
{
protected:
	int ReleaseItemPtr(CConnectionHandlerItem * *);
	static _RTL_GENERIC_COMPARE_RESULTS staticCompareEntry(_RTL_GENERIC_TABLE *,void *,void *);
	static void * staticAllocateEntry(_RTL_GENERIC_TABLE *,unsigned long);
	static void staticFreeEntry(_RTL_GENERIC_TABLE *,void *);
public:
	int GetNextEntry(int,CConnectionHandlerItem * *);
	long Add(CConnectionHandlerItem *,int);
};

class CListTree<CSessionToHelperItem>
{
protected:
	static _RTL_GENERIC_COMPARE_RESULTS staticCompareEntry(_RTL_GENERIC_TABLE *,void *,void *);
	static void * staticAllocateEntry(_RTL_GENERIC_TABLE *,unsigned long);
	static void staticFreeEntry(_RTL_GENERIC_TABLE *,void *);
public:
	long Add(CSessionToHelperItem *,int);
};

class CListTree<CStoredItem>
{
protected:
	static _RTL_GENERIC_COMPARE_RESULTS staticCompareEntry(_RTL_GENERIC_TABLE *,void *,void *);
	static void * staticAllocateEntry(_RTL_GENERIC_TABLE *,unsigned long);
	static void staticFreeEntry(_RTL_GENERIC_TABLE *,void *);
public:
	int Lookup(CStoredItem *,CStoredItem * *);
	long Add(CStoredItem *,int);
	void RemoveAll();
};

class CListTree<CTSRpcClientTrackerMgr::CTSRpcClient>
{
protected:
	int ReleaseItemPtr(CTSRpcClientTrackerMgr::CTSRpcClient * *);
	static _RTL_GENERIC_COMPARE_RESULTS staticCompareEntry(_RTL_GENERIC_TABLE *,void *,void *);
	static void * staticAllocateEntry(_RTL_GENERIC_TABLE *,unsigned long);
	static void staticFreeEntry(_RTL_GENERIC_TABLE *,void *);
public:
	void RemoveAll();
};

class CListTree<IListenerItem>
{
protected:
	int ReleaseItemPtr(IListenerItem * *);
	static _RTL_GENERIC_COMPARE_RESULTS staticCompareEntry(_RTL_GENERIC_TABLE *,void *,void *);
	static void * staticAllocateEntry(_RTL_GENERIC_TABLE *,unsigned long);
	static void staticFreeEntry(_RTL_GENERIC_TABLE *,void *);
public:
	int GetNextEntry(int,IListenerItem * *);
};

class CListTree<IProtocolManager>
{
protected:
	static _RTL_GENERIC_COMPARE_RESULTS staticCompareEntry(_RTL_GENERIC_TABLE *,void *,void *);
	static void * staticAllocateEntry(_RTL_GENERIC_TABLE *,unsigned long);
	static void staticFreeEntry(_RTL_GENERIC_TABLE *,void *);
public:
	int GetNextEntry(int,IProtocolManager * *);
	long Add(IProtocolManager *,int);
	void RemoveAll();
};

class CListenerEx
{
	struct CListenerCallback
	{
		virtual long OnConnected(IWRdsProtocolConnection *,_WRDS_CONNECTION_SETTINGS *,IWRdsProtocolConnectionCallback * *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long ValidateLogonCert(unsigned short const *,unsigned __int64 *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	struct TRANSFER_THREAD_INFO
	{
		TRANSFER_THREAD_INFO(CListenerEx *,IConnection *);
		~TRANSFER_THREAD_INFO();
	};

	long CleanupListener();
	long ConnectionCallback(IWRdsProtocolConnection *,_WRDS_CONNECTION_SETTINGS *,IWRdsProtocolConnectionCallback * *);
	long InitializeSecurityDescriptor(unsigned char *,unsigned long);
	long ResetConnectionsFromListener();
	long SpawnTransferWorkItem(IConnection *);
	static unsigned long staticScheduleListenerStop(void *);
	static unsigned long staticTransferWorkItem(void *);
	void CleanupTransferWorkItems(int,int);
public:
	CListenerEx(IRemoteConnectionManager *,unsigned short const * const,_GUID const &,_GUID const &,IWRdsProtocolListener *,long *);
	CListenerEx(unsigned short const * const);
	virtual int operator<(IListener &);
	virtual int operator==(IListener &);
	virtual int operator>(IListener &);
	virtual long AccessCheck(unsigned long);
	virtual long AccessCheck(void *,unsigned long);
	virtual long DecrementActiveConnections();
	virtual long GetProtocolListener(IUnknown * *);
	virtual long GetRedirectAuthInfo(_GUID *,unsigned char * *,unsigned long *,unsigned short * *,unsigned char * *,unsigned long *);
	virtual long GetSecurityDescriptor(unsigned char * *,unsigned long *);
	virtual long IncrementActiveConnections(long *);
	virtual long LockFromConnection();
	virtual long Start();
	virtual long Stop();
	virtual long StopAccepting();
	virtual long UnlockFromConnection();
	virtual long getName(unsigned short *,unsigned long);
	virtual long isListening();
	virtual unsigned long GetMaxProtocolListenerConnectionCount();
	virtual ~CListenerEx();
};

struct CListenerNotifySink
{
	long Initialize();
	virtual long OnConnected(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnDisconnected(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,ITerminal *);
	virtual long OnLogon(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnTerminated(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
};

struct CLogonTimerCallback
{
	virtual long OnTimerExpired();
};

class CObjectAccessTracker<IListener,5000>
{
	long GetCallerSessionId(unsigned long *);
public:
	CObjectAccessTracker<IListener,5000>(char const *,IListener *,ITSRpcClientTrackerMgr *,long *);
	static long GetInstanceOfObject(char const *,IListener *,ITSRpcClientTrackerMgr *,CObjectAccessTracker<IListener,5000> * *);
	virtual ~CObjectAccessTracker<IListener,5000>();
};

struct CObjectTracker
{
	void AddObject(_LIST_ENTRY *);
	void RemoveObject(_LIST_ENTRY *);
};

struct CObjectTrackerEnum
{
	virtual int IsEmpty();
	virtual int Next();
	virtual void GetObjectW(CTSObject<IUnknown> * *);
	virtual void LockEnum();
	virtual void Reset();
	virtual void UnlockEnum();
};

class COpsMonitorBase
{
	static void * g_OpsMonitorTimeQueue;
protected:
	static void WaitForTimerCallback(void *,unsigned char);
public:
	virtual long StartWaiting(unsigned long);
	virtual long StopWaiting();
	virtual void TimerExpired();
};

class CPasswordCredentials
{
	long PreparePasswordLogonInfo(void * *,unsigned long *);
	void Free();
public:
	CPasswordCredentials();
	long Initialize(unsigned short const *,unsigned short const *,unsigned short const *);
	virtual long GetClearTextPassword(_UNICODE_STRING *);
	virtual long GetCredentials(_TS_CREDENTIAL *);
};

struct CProcessUtils
{
	long ConcatenateTSAllProcInfo(_TS_ALL_PROCESSES_INFO_NT6 *,unsigned long,_TS_ALL_PROCESSES_INFO_NT6 *,unsigned long,_TS_ALL_PROCESSES_INFO_NT6 * *,unsigned long *,long *);
	long ConvertSysProcInfoToTSAllProcInfo(_SYSTEM_PROCESS_INFORMATION *,unsigned long,_TS_ALL_PROCESSES_INFO_NT6 * *,unsigned long *,long *);
	long GetSessionProcessInformation(long,_SYSTEM_PROCESS_INFORMATION * *,unsigned long *,long *);
	long GetSidFromProcessId(void *,_LARGE_INTEGER,void * *,unsigned long *,long *);
	void FreeTSAllProcInfo(_TS_ALL_PROCESSES_INFO_NT6 *,unsigned long);
};

class CProtocolExMgr
{
	long InsertNotificationWorkItem(__PTSSessInfo *,SESSION_EVENT_CLASS);
	long NotificationWorker();
	long NotifyAllManagers(_TS_STATE_CHANGE *,_GUID &,long);
	long NotifySession(ITSSession *,_TS_STATE_CHANGE *);
	long NotifySession(_GUID &,long,_TS_STATE_CHANGE *);
	long StopNotificationWorker();
	static unsigned long staticNotificationWorker(void *);
public:
	CProtocolExMgr(ISessionManager *,long *);
	long CreateListener(IRemoteConnectionManager *,IWRdsProtocolSettings *,unsigned short const * const,_GUID const &,_GUID const &,IListenerItem * *);
	long NotifyAllSessions(_TS_STATE_CHANGE *);
	long NotifyServiceStateChange(__SERVICESTATECHANGE *);
	long NotifySettingsChange(_WRDS_SETTINGS *);
	long Stop();
	virtual long OnConnected(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnCreated(__PTSSessInfo *);
	virtual long OnDesktopLock(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnDesktopUnlock(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnDestroyed(__PTSSessInfo *);
	virtual long OnDisconnected(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,ITerminal *);
	virtual long OnEndShell(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnLogoff(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnLogon(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnStartSSAsUser(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnStartShell(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnStopSSAsUser(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnTerminated(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual ~CProtocolExMgr();
};

struct CProtocolManager
{
	CProtocolManager(_GUID);
	virtual int operator<(IProtocolManager &);
	virtual int operator==(IProtocolManager &);
	virtual int operator>(IProtocolManager &);
	virtual long CreateListener(IRemoteConnectionManager *,unsigned short const * const,_GUID const &,IListenerItem * *);
	virtual long GetProtocolGuid(_GUID *);
	virtual long Initialize(IWRdsProtocolSettings *,_WRDS_SETTINGS *);
	virtual long NotifyServiceStateChange(__SERVICESTATECHANGE *);
	virtual long NotifySessionOfServiceState(RCM_SERVICE_STATE,_GUID,long);
	virtual long NotifySessionOfSessionState(SESSION_EVENT_CLASS,_GUID,long);
	virtual long NotifySettingsChange(_WRDS_SETTINGS *);
	virtual ~CProtocolManager();
};

class CRCMConnDispatchManager
{
	long Cleanup();
	long FindConnectionHandler(_GUID const &,CConnectionHandlerItem * *);
	long FindConnectionHandler(unsigned short *,CConnectionHandlerItem * *);
	long IsConnectionDenied(_GUID *,int *);
	long LoadChildSessionListenerHandlers(_FILETIME *);
	long LoadConnectionHandler(unsigned short *,CConnectionHandlerItem * *);
	long RefreshConnectionHandlerList();
	long StartSession(ITSSession *,IRemoteTerminal *);
public:
	CRCMConnDispatchManager(long *);
	virtual long GetInstanceOfSessionArbitration(_GUID *,ISessionArbitration * *);
	virtual long HandleConnection(IConnection *,int *,int);
	virtual long ServiceStatusChange(__MIDL_IConnectionHandler_0001);
	virtual long Start();
	virtual long Stop();
	virtual long UnloadConnectionHandler(_GUID const &);
	virtual ~CRCMConnDispatchManager();
};

class CRCMEventDispatch
{
	struct CEventSink
	{
		virtual long OnConnected(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnCreated(__PTSSessInfo *);
		virtual long OnCsrConnected(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnCsrDisconnected(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnCsrInitialized(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnDesktopLock(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnDesktopUnlock(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnDestroyed(__PTSSessInfo *);
		virtual long OnDisconnected(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,ITerminal *);
		virtual long OnEndShell(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnLogoff(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnLogon(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnPreConnect(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,ITerminal *);
		virtual long OnSessionArbitration(__PTSSessInfo *,IUserName *);
		virtual long OnShadowStart(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnShadowStop(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnStartSSAsUser(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnStartShell(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnStopSSAsUser(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnTerminated(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	long DestroySessionDispatch(__PTSSessInfo *);
public:
	CRCMEventDispatch();
	long Initialize(ITSEventDispatcher *);
	virtual long GetGlobalDispatcher(ITSEventDispatcher * *);
	virtual long GetSessionDispatcher(ITSSession *,ITSEventDispatcher * *);
	virtual long Stop();
	virtual ~CRCMEventDispatch();
};

class CRCMLegacyRpc
{
	static int fEncryptRPCTraffic;
	static long staticRCMLegacyRpcSecurityCallback(void *,void *);
public:
	CRCMLegacyRpc();
	static int fRpcShuttingDown;
	virtual long Start();
	virtual long Stop();
	void AddWinSta(CWinstaDll *);
};

struct CRCMModule
{
	CRCMModule();
	long InitServer(_GUID &);
	virtual ~CRCMModule();
};

class CRCMPrivateRpc
{
	static long staticRCMAdminRpcSecurityCallback(void *,void *);
	static long staticRCMPrivateRpcSecurityCallback(void *,void *);
	static long staticRpcSecurityCallback(void *,int);
public:
	CRCMPrivateRpc();
	virtual long Start();
	virtual long Stop();
};

class CRCMPublicRpc
{
	static int staticRunLocalOnly;
	static long staticRCMPublicRpcSecurityCallback(void *,int);
	static long staticRCMPublicRpcSecurityCallbackLocalOnly(void *,void *);
	static long staticRCMPublicRpcSecurityCallbackRemote(void *,void *);
public:
	CRCMPublicRpc();
	virtual long Start();
	virtual long StartRemote();
	virtual long Stop();
	virtual long StopRemote();
};

class CRegistry
{
	unsigned long ReadReg(unsigned short const *,unsigned char * *,unsigned long *,unsigned long);
public:
	unsigned long GetNextMultiStringValue(unsigned short * *);
	unsigned long GetNextSubKey(unsigned short * *,unsigned long *);
	unsigned long OpenKey(HKEY__ *,unsigned short const *,unsigned long,unsigned short const *);
	unsigned long ReadRegDWord(unsigned short const *,unsigned long *);
	unsigned long ReadRegString(unsigned short const *,unsigned short * *,unsigned long *);
	virtual ~CRegistry();
	void ReleaseMemory();
};

class CRemoteConnectionManager
{
	struct CListenersList
	{
		CListenersList();
		long AddListener(IListenerItem *);
		long Disable();
		long Stop();
		virtual long GetList(IListener * *,unsigned long *);
		virtual long GetListenerByName(unsigned short const * const,IListener * *);
		virtual long GetNumEntries(unsigned long *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long RemoveListener(IListener *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	struct CRemoteConnectionManagerSink
	{
		CRemoteConnectionManagerSink();
		long Initialize(CRemoteConnectionManager *);
		virtual long OnCsrDisconnected(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnDestroyed(__PTSSessInfo *);
		virtual ~CRemoteConnectionManagerSink();
		void CleanupStorageForSession(__PTSSessInfo *);
	};

	long GetProtocolExtension(unsigned short const *,int *,_GUID *);
	long ReadMachineGroupPolicy();
	long RemoveStaleListener();
	long RemoveStorageForSession(long);
	long StartStopChildSessionListener();
	long StartStopDependentServices(int);
	long StartVMBusListener();
	long SupplementalCredentialOperation(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned long);
	long UALStart();
	long UALStop();
	virtual long UALInstrument(sockaddr_storage,unsigned short const *);
public:
	CRemoteConnectionManager();
	int IsAllowNonRDPStack();
	long ChangeRCMReadyEventState(int);
	long FinalConstruct();
	static long UpdateRegistry(int);
	virtual int IsAllowFastReconnect();
	virtual int IsCPUFairshareActive();
	virtual int IsResetLastTimeoutOnAutoReconnect();
	virtual int IsUALInstrumentationNeeded();
	virtual long AddSupplementalAccount(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *);
	virtual long Disable();
	virtual long GetCachedInstanceOfSessionList(ISessionList * *);
	virtual long GetComponentStorage(ITSObjectStorage * *);
	virtual long GetExternalEventDispatcher(IExternalEventDispatcher * *);
	virtual long GetGraphicsGlobalContext(IWRdsGraphicsGlobalContextPrivate * *);
	virtual long GetInstanceOfAudit(IAudit * *);
	virtual long GetInstanceOfConnection(unsigned short const * const,_GUID const &,_GUID const &,IWRdsProtocolConnection *,_WRDS_CONNECTION_SETTINGS *,IListener *,IWRdsProtocolConnectionCallback * *,IConnection * *);
	virtual long GetInstanceOfConnectionDispatchManager(IConnectionDispatchManager * *);
	virtual long GetInstanceOfEnforcementCore(IEnforcementCore * *);
	virtual long GetInstanceOfExtension(unsigned short const *,IWsx * *);
	virtual long GetInstanceOfListenersList(IListenersList * *);
	virtual long GetInstanceOfRemoteTerminal(IConnection *,ITerminal * *);
	virtual long GetInstanceOfSessionArbitration(_GUID *,ISessionArbitration * *);
	virtual long GetInstanceOfSessionManager(ISessionManager * *);
	virtual long GetInstanceOfShadowTarget(ITSSession *,IShadowTarget * *);
	virtual long GetListenerSettings(unsigned short *,_WINSTATIONCONFIG2W *,unsigned long);
	virtual long GetMaxSessionCount();
	virtual long GetRpcClientTrackerMgr(ITSRpcClientTrackerMgr * *);
	virtual long GetSettings(_WRDS_SETTING_TYPE,_WRDS_SETTING_LEVEL,_WRDS_SETTINGS *);
	virtual long GetStorageForSession(long,int,ITSObjectStorage * *);
	virtual long GetUniqueConnectionId(unsigned long *);
	virtual long Initialize(ISessionManager *,ITSEventDispatcher *);
	virtual long MergeMachineGroupPolicy(_USERCONFIGW *,_WINSTATIONCREATEW *);
	virtual long MergeSettings(_WRDS_SETTINGS *,_WRDS_CONNECTION_SETTING_LEVEL,_WRDS_CONNECTION_SETTINGS *);
	virtual long MergeUserSettings(int,_POLICY_TS_USER *,_USERCONFIGW *,_USERCONFIGW *,_USERCONFIGW *,int *,int *);
	virtual long ReleaseUniqueConnectionId(unsigned long);
	virtual long RemoveSupplementalAccount(unsigned short const *,unsigned short const *);
	virtual long ReplaceSupplementalAccount(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *);
	virtual long ServiceStop();
	virtual long Start();
	virtual long Stop();
	virtual unsigned char IsInDrain();
	virtual unsigned char IsServiceStopStarted();
	virtual ~CRemoteConnectionManager();
	void UpdateResetLastTimeoutOnAutoReconnect();
};

class CRemoteTerminal
{
	long AdditionalAccessCheckForAdminConnection(IUserName *);
	long CacheTerminalInfo();
	long IsAdminConnection(int *);
	long RemoveTerminalInfo();
	long UpdateConfig(IUserName *,unsigned long);
	virtual long NonDelegatingQueryInterface(_GUID const &,void * *);
public:
	CRemoteTerminal(IConnection *,long *);
	virtual long AuthenticateClientToSession(long *);
	virtual long CompareInitialProgram(int *);
	virtual long Connected(ITSSession *);
	virtual long CreateDynamicVirtualChannel(char *,unsigned long,int,unsigned long,void * *);
	virtual long CreateStaticVirtualChannel(char *,void * *);
	virtual long Disconnected(ITSSession *);
	virtual long DoConnect(_TERMINAL_CONNECTMSG *,ITSSession *,unsigned __int64,unsigned long);
	virtual long DoDisconnect(unsigned long);
	virtual long DoTerminate();
	virtual long GetActivityId(_GUID *);
	virtual long GetAutoReconnectInfo(ITSUnknown * *);
	virtual long GetClientAddress(unsigned short * const);
	virtual long GetClientData(unsigned char *,unsigned long);
	virtual long GetClientName(unsigned short * const);
	virtual long GetClientTimeZone(IUserName *,_TS_DYNAMIC_TIME_ZONE_INFORMATION *);
	virtual long GetConfigData(unsigned char *,unsigned long);
	virtual long GetConnection(IConnection * *);
	virtual long GetConnectionProperty(_GUID const &,unsigned long *,__PROPERTY_VALUE *);
	virtual long GetInputHandles(void * *,void * *);
	virtual long GetLastInputTime(_LARGE_INTEGER *);
	virtual long GetLicenseContext(void * *);
	virtual long GetLicenseType(_GUID *);
	virtual long GetLicenseValidationInformation(void *);
	virtual long GetNumMonitors(unsigned int *);
	virtual long GetParent(unsigned short * const,long *);
	virtual long GetProtocolName(unsigned short * const);
	virtual long GetProtocolStatus(__MIDL_RCMPublic_0006,_PROTOCOLSTATUSEX *);
	virtual long GetRunEnum(int *);
	virtual long GetSecurityDescriptor(unsigned char * *,unsigned long *);
	virtual long GetSecurityFilterClientCerts(_TS_SECURITY_FILTER_CLIENT_CERTS * *,unsigned long *);
	virtual long GetSecurityFilterClientToken(int,void * *);
	virtual long GetSessionInitialProgram(unsigned short * const);
	virtual long GetTerminalInformation(unsigned short * const,unsigned char * *,unsigned long *);
	virtual long GetTerminalName(unsigned short * const);
	virtual long GetTerminalType(_GUID *,unsigned long *);
	virtual long GetTerminalTypeExtended(_GUID *,unsigned long *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0004 *,_GUID *);
	virtual long GetUserCredentials(_TS_CREDENTIAL *);
	virtual long GetWdConfig(unsigned char *,unsigned long);
	virtual long IsAdminSession(int *);
	virtual long IsNewSessionAllowInDrain(void *);
	virtual long IsUserAllowedToLogon(IUserName *);
	virtual long LoggedOn(IUserName *);
	virtual long NotifyCommandProcessCreated(unsigned short * const);
	virtual long PrepareForSessionArbitration(IUserName *);
	virtual long QueryStackModuleData(unsigned char *,unsigned long,void *,unsigned long,unsigned long *);
	virtual long QueryStackVirtualChannelModuleData(unsigned char *,unsigned long,void *,unsigned long,unsigned long *);
	virtual long RedirectLogonBeginPainting();
	virtual long RedirectLogonError(long,long,unsigned short const *,unsigned short const *,unsigned int,unsigned int *);
	virtual long RedirectLogonMessage(unsigned short const *,unsigned short const *,unsigned int,unsigned int *);
	virtual long RedirectLogonStatus(unsigned short const *,unsigned int *);
	virtual long SendLogonErrorInfoToClient(unsigned long,long);
	virtual long SendUserInfoToClient(IUserName *);
	virtual long SessionArbitrationEnumeration(void *,int,long *,unsigned long *);
	virtual long SetPrevIntialProgram();
	virtual long SetRunEnum(int);
	virtual long SetSecurityDescriptor(unsigned char *,unsigned long);
	virtual long StartShadow(unsigned short *,long,unsigned char,unsigned short);
	virtual long StartShadow2();
	virtual long StopShadow();
	virtual long StopShadow2();
	virtual long TargetShadow(unsigned char *,unsigned long,unsigned char *,unsigned long,unsigned char *,unsigned long,unsigned char *,unsigned long,unsigned short *);
	virtual long getInitialCommandProcess(unsigned short *,unsigned long *);
	virtual long getShadowClient(IShadowClient * *);
	virtual long getShadowTarget(IShadowTarget * *);
	virtual ~CRemoteTerminal();
};

struct CResource
{
	long Initialize();
};

struct CRpcCallTrace
{
	CRpcCallTrace(int,char const *);
	virtual long GetErrorLogDetail(unsigned long,char *,unsigned long);
	virtual ~CRpcCallTrace();
};

struct CRpcUtils
{
	static int IsLocalCall();
	static long FreePropertyValue(__PROPERTY_VALUE *);
	static long GetClientToken(void * *,int);
	static long GetSessionFromRpcClientId(ITSSession * *);
	static long MIDL_mem_dup(unsigned char * *,unsigned char * const,unsigned long);
};

class CSLQuery
{
	static int bAppServerAllowed;
	static int bFUSEnabled;
	static int bInitialized;
	static int bMultimonAllowed;
	static int bRemoteConnAllowed;
	static int bServerSku;
	static long lMaxUserSessions;
	static unsigned long ulMaxDebugSessions;
public:
	static long GetInitialProgram(_GUID,unsigned long,unsigned short *);
	static long GetMaxSessions(_GUID,long *);
	static long GetUserSessionLimit(long *);
	static long Initialize();
	static long IsAppServerInstalled(int *);
	static long IsLicenseTypeLocalOnly(_GUID &,int *);
	static long IsServerSku(int *);
};

class CSecFilterCredentials
{
	void Free();
public:
	long Initialize(unsigned char *,unsigned long,unsigned long,int);
	virtual long GetClearTextPassword(_UNICODE_STRING *);
	virtual long GetCredentials(_TS_CREDENTIAL *);
};

class CSecretStorage
{
	static long CreateStorageKey(HKEY__ * *);
public:
	long Retrieve(unsigned char *,unsigned long *);
	long Store(unsigned char *,unsigned long);
};

struct CSecurityUtils
{
	static long AllocateAndInitProtectedUnicodeString(_UNICODE_STRING *,unsigned short const *,unsigned long);
	static long GetAuthenticationPackageId(unsigned long *);
	static long ReProtectUnicodeString(_UNICODE_STRING *);
};

class CService
{
protected:
	int UpdateServiceStatus(unsigned long,unsigned long,unsigned long,unsigned long);
	long Advertise(int);
	long ServiceStopCleanupObjects();
	long WaitForReadyMiscThread();
	static unsigned long staticMiscThread(void *);
	static unsigned short const * const SERVICE_NAME;
	static void staticHandler(unsigned long);
	static void staticStopServiceCallback(void *,unsigned char);
	void ControlHandler(unsigned long);
	void Shutdown();
public:
	long Start();
	long Stop();
};

class CSessionArbitrationDesktop
{
	long EnumerateSessionsUsingProtocolExtension(IRemoteTerminal *,IUserName *,long * *,unsigned long *);
	long GetSessionsToDisconnect(long * *,unsigned long *);
	long GetSessionsToReconnect(long * *,unsigned long *);
	long HandleDisconnectRefusedDialogResponse();
	long HandleFirstCall();
	long HandleReconnectDialogResponse();
	long HandleSessionBumpingDialogResponse();
	long PrepareContinueRequest();
	long PrepareDisconnectBumpingRequest();
	long PrepareDisconnectRefusedRequest(long);
	long PrepareReconnectRequest(long *,unsigned long);
	long PrepareRequest(WINLOGON_ACTION_CODE,unsigned long,long *,unsigned long);
	long PrepareTerminateRequest();
	long PrepareTerminateRequest(long);
	long TryToCreateNewSession();
	long TryToDisconnectSession(long,int,int *);
	long TryToLogoffSession(long);
	long TryToProceedWithLogon();
	long TryToReconnectToSession(long);
	unsigned char IsNewLogonExceptionSpecified();
	virtual long QuerySessionLimit(int,long,int *);
public:
	CSessionArbitrationDesktop();
	virtual long GetRequestForWinlogon(_TS_WINLOGON_REQUEST *,int *);
	virtual long Initialize(IUserName *,IUserName *);
	virtual long SetWinlogonReply(_TS_WINLOGON_REPLY *);
	virtual ~CSessionArbitrationDesktop();
};

class CSessionArbitrationHelper
{
	int IgnoreConsoleSessionPolicyInForce();
	long Copy(DynArray<long,unsigned long> &,long * *,unsigned long *);
	long FindSessionById(long,ITSSession * *);
public:
	CSessionArbitrationHelper(IUserName *,IUserName *);
	int Sessions_IsConsoleSession(long);
	virtual long GetInstanceOfWinlogonReply(_TS_WINLOGON_REPLY *,CWinlogonReply * *);
	virtual long GetInstanceOfWinlogonRequest(WINLOGON_ACTION_CODE,unsigned long,long *,unsigned long,CWinlogonRequest * *);
	virtual long IsAppServer(int *);
	virtual long IsSingleSessionPerUserEnabled(int *);
	virtual long Session_GetSession(ITSSession * *);
	virtual long Session_IsConsoleSession(int *);
	virtual long Sessions_DisconnectSession(long);
	virtual long Sessions_EnumActiveAndDisconnectedSessions(long * *,unsigned long *);
	virtual long Sessions_EnumActiveSessions(long * *,unsigned long *);
	virtual long Sessions_EnumDisconnectedUserSessions(long * *,unsigned long *,ISessionEnumFilter *);
	virtual long Sessions_EnumUserSessions(long * *,unsigned long *,ISessionEnumFilter *);
	virtual long Sessions_IsActiveSession(long,int *);
	virtual long Sessions_LogoffSession(ITSEventDispatcher *,long);
	virtual long Sessions_ReconnectToSession(long);
	virtual long User_GetSessionId(long *);
	virtual long User_GetUser(IUserName * *);
	virtual long User_IsAdmin(int *);
};

class CSessionArbitrationHelperMgr
{
	long AddSessionListToCache(unsigned long,_TS_SESSION_INFORMATION_0 *,ISessionArbitrationHelper *);
	long AddSessionListToCache(unsigned long,long *,ISessionArbitrationHelper *);
	long ArbitrationListToSessionIdList(DynArray<long,unsigned long> *,unsigned long *,long * *);
	long EmptySessionToArbitrationHelperList();
	long GetSessionFromHelper(__MIDL___MIDL_itf_sessarbitrationhelper_0000_0000_0001,DynArray<long,unsigned long> *,ISessionEnumFilter *);
	long InitializeHelperAndAddToList(ISessionArbitrationHelper *,IUserName *,IUserName *);
	long LoadArbitrationHelper(CRegistry &,ISessionArbitrationHelper * *);
public:
	CSessionArbitrationHelperMgr(long *);
	virtual long GetArbitrationHelperForSession(_TS_SESSION_INFORMATION_0 *,ISessionArbitrationHelper * *);
	virtual long GetInstanceOfWinlogonReply(_TS_WINLOGON_REPLY *,CWinlogonReply * *);
	virtual long GetInstanceOfWinlogonRequest(WINLOGON_ACTION_CODE,unsigned long,long *,unsigned long,CWinlogonRequest * *);
	virtual long GetSessionForArbitration(__MIDL___MIDL_itf_sessarbitrationhelper_0000_0000_0001,unsigned long *,long * *,ISessionEnumFilter *);
	virtual long Initialize(IUserName *,IUserName *);
	virtual long IsAppServer(int *);
	virtual long IsSingleSessionPerUserEnabled(int *);
	virtual long Session_GetSession(ITSSession * *);
	virtual long Session_IsConsoleSession(int *);
	virtual long Sessions_DisconnectSession(_TS_SESSION_INFORMATION_0 *);
	virtual long Sessions_EnumActiveAndDisconnectedSessions(long * *,unsigned long *,ISessionEnumFilter *);
	virtual long Sessions_EnumActiveSessions(long * *,unsigned long *,ISessionEnumFilter *);
	virtual long Sessions_EnumDisconnectedUserSessions(long * *,unsigned long *,ISessionEnumFilter *);
	virtual long Sessions_EnumUserSessions(long * *,unsigned long *,ISessionEnumFilter *);
	virtual long Sessions_IsActiveSession(_TS_SESSION_INFORMATION_0 *,int *);
	virtual long Sessions_LogoffSession(_TS_SESSION_INFORMATION_0 *);
	virtual long Sessions_ReconnectToSession(_TS_SESSION_INFORMATION_0 *);
	virtual long Sessions_SendRequestToSession(_TS_SESSION_INFORMATION_0 *,unsigned long *);
	virtual long User_GetUser(IUserName * *);
	virtual long User_IsAdmin(int *);
	virtual ~CSessionArbitrationHelperMgr();
};

class CSessionKey
{
	long InitializeKey(unsigned char *,unsigned long);
	static unsigned long GetSessionKeyExpiryPeriod();
public:
	CSessionKey(unsigned char *,unsigned long);
	int Equals(CSessionKey const &);
	int IsExpired();
	virtual ~CSessionKey();
};

struct CSessionToHelperItem
{
	CSessionToHelperItem(_TS_SESSION_INFORMATION_0 &,ISessionArbitrationHelper *,long *);
	CSessionToHelperItem(long,ISessionArbitrationHelper *,long *);
	virtual ~CSessionToHelperItem();
};

class CShadowEx
{
	long IsSameCaller(ITSSession *);
public:
	CShadowEx(IWRdsProtocolConnection *,long,_SHADOWCLASS);
	virtual long RevertShadowState();
	virtual long StartShadow(unsigned short *,long,unsigned char,unsigned short,IWRdsProtocolShadowCallback *);
	virtual long StopShadow();
	virtual long TargetShadow(unsigned char *,unsigned long,unsigned char *,unsigned long,unsigned char *,unsigned long,unsigned char *,unsigned long,unsigned short *);
};

class CSmartCardCredentials
{
	long PrepareSmartCardLogonInfo(void * *,unsigned long *);
	void Free();
public:
	long Initialize(unsigned short const *);
	virtual long GetClearTextPassword(_UNICODE_STRING *);
	virtual long GetCredentials(_TS_CREDENTIAL *);
};

struct CStoredItem
{
	CStoredItem(_GUID const &,ITSUnknown *);
};

struct CTSCryptUtils
{
	long ExportSymmetrictKey(unsigned char * *,unsigned long *);
	long GenerateSymmetricKey(unsigned short const *);
	static long SerializeCertificate(_CERT_CONTEXT const *,unsigned char * *,unsigned long *);
	void Clear();
};

struct CTSLSSoftEnforceTimerCallback
{
	virtual long OnTimerExpired();
};

struct CTSLicense
{
	struct CEventSink
	{
		virtual long OnConnected(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnDisconnected(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,ITerminal *);
		virtual long OnLogoff(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnLogon(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnTerminated(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	struct CMonitor
	{
		long Cleanup();
		long OpenSenderProcess(unsigned long,void * *);
		long Verify(unsigned long);
	};

	CTSLicense(IEnfLicenseManager *,_GUID,long *);
	virtual long Associate(ITSSession *,ITSEventDispatcher *);
	virtual long Cleanup();
	virtual long Consume();
	virtual long GetDeviceIdAsString(unsigned short *,unsigned long *);
	virtual long GetLicenseContext(void * *);
	virtual long GetSessionId(long *);
	virtual long GetSessionPtr(ITSSession * *);
	virtual long GetState(TSLicenseState *);
	virtual long HandleHeartBeat(unsigned long);
	virtual long NotifyUserAuthenticated(IUserName *);
	virtual long ProcessData(unsigned char * *,unsigned long *,unsigned char * *,unsigned long *,TSLicenseState *,unsigned long *);
	virtual long Redeem();
	virtual long SetContext(void *);
	virtual long SetState(TSLicenseState);
	virtual long StopMonitor();
	virtual long TerminateSession();
	virtual long Unadvise();
	virtual ~CTSLicense();
};

struct CTSObject
{
	virtual int IsValid();
	virtual long Initialize();
	virtual long Terminate();
};

struct CTSObject<IArbRequestSerializer>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSObject<IClassFactory>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSObject<IConnectionHandler>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSObject<IEnfLicenseManager>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSObject<IEnfPolicyManager>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSObject<IEnfRpcHelper>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSObject<IEnforcementCore>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSObject<IHealthStatus>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSObject<IHybridConnectionHandler>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSObject<IRCMConnectionDispatchManager>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSObject<IRCMConnectionRequest>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSObject<ISessionArbitration>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSObject<ISessionArbitrationHelper>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSObject<ISessionEnumFilter>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSObject<ITSEventDispatcher>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSObject<ITSEventDispatcher_ITSEvent>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSObject<ITSLicense>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSObject<ITSLicensePolicy>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSObject<ITSObjectStorage>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSObject<ITSRpcClientTrackerMgr>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSObject<ITSUnknown>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSObject<IUnknown>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSObject<IUserConfig>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSObject<IUserName>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSObjectStorage
{
	CTSObjectStorage(char const *,char const *,long,long *);
	virtual long Add(_GUID const &,ITSUnknown *);
	virtual long Get(_GUID const &,ITSUnknown * *);
	virtual long GetNumElements(unsigned long *);
	virtual long Remove(_GUID const &);
	virtual long RemoveAll();
	virtual ~CTSObjectStorage();
};

struct CTSPrivateObject<IArbRequestSerializer>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<IAudit>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<IClassFactory>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<IConnection>
{
	CTSPrivateObject<IConnection>(char const *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<IConnectionHandler>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<ICredentials>
{
	CTSPrivateObject<ICredentials>(char const *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<IEnfLicenseManager>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<IEnfPolicyManager>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<IEnfRpcHelper>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<IEnforcementCore>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<IExternalEventDispatcher>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<IHealthStatus>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<IHybridConnectionHandler>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<IHybridTerminal>
{
	CTSPrivateObject<IHybridTerminal>(char const *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<IListenerItem>
{
	CTSPrivateObject<IListenerItem>(char const *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<IProtocolManager>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<IRCMConnectionDispatchManager>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<IRCMConnectionRequest>
{
	CTSPrivateObject<IRCMConnectionRequest>(char const *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<IRCMLegacyRpc>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<IRCMPrivateRpc>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<IRCMPublicRpc>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<IRemoteTerminal>
{
	CTSPrivateObject<IRemoteTerminal>(char const *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<ISessionArbitration>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<ISessionArbitrationHelper>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<ISessionEnumFilter>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<IShadowEx>
{
	CTSPrivateObject<IShadowEx>(char const *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<ITSEventDispatcher>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<ITSEventDispatcher_ITSEvent>
{
	CTSPrivateObject<ITSEventDispatcher_ITSEvent>(char const *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<ITSLicense>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<ITSLicensePolicy>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<ITSNotifySink>
{
	CTSPrivateObject<ITSNotifySink>(char const *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<ITSObjectStorage>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<ITSRpcClientTrackerMgr>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<ITSUnknown>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CTSPrivateObject<IUnknown>
{
	unsigned long InternalRelease();
public:
	CTSPrivateObject<IUnknown>(char const *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<IUserConfig>
{
	CTSPrivateObject<IUserConfig>(char const *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<IUserName>
{
	CTSPrivateObject<IUserName>(char const *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<IWsxPrivate>
{
	CTSPrivateObject<IWsxPrivate>(char const *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSRCMObjectStorage
{
	virtual long Add(_GUID const &,ITSUnknown *);
};

struct CTSRemoteTerminalTrace
{
	CTSRemoteTerminalTrace(char const *,CRemoteTerminal *);
	virtual long GetErrorLogDetail(unsigned long,char *,unsigned long);
	virtual ~CTSRemoteTerminalTrace();
};

struct CTSRpcClientTrackerMgr
{
	struct CTSRpcClient
	{
		long Initialize(void *);
	};

	CTSRpcClientTrackerMgr(long *);
	virtual long ReleaseTracker(unsigned __int64);
	virtual long TrackCaller(long,unsigned __int64 *);
};

class CTSSecurityDescriptor
{
protected:
	long CreateDefault(void * *);
	long GetCurrentProcessSid(void * *);
	long GetSDValueFromRegistry(unsigned short const *,unsigned short const *,unsigned char * *,unsigned long *);
public:
	long AccessCheck(unsigned long);
	long AccessCheck(void *,unsigned long);
	long AddUserAce(void *,unsigned long);
	long CopyDescriptor(void *);
	long Initialize(unsigned short const *,void *);
	long InitializeFromBlob(void *);
	virtual ~CTSSecurityDescriptor();
};

class CTSSessionInformation
{
	int CompareStringIgnoreCase(unsigned short const *,unsigned short const *);
	long DuplicateSessionInfo(unsigned long,unsigned short *,unsigned short *);
public:
	~CTSSessionInformation();
};

class CTSSessionSecurityDescriptor
{
protected:
	long CreateAppContainerSD();
	long IsSameSessionId(void *,long,int *);
public:
	long AccessCheck(void *,long,unsigned long,int);
	virtual ~CTSSessionSecurityDescriptor();
};

class CTSTimer
{
	CTSTimer(CTSTimerManager *);
public:
	long Cancel();
	long Start(unsigned long,ITimerCallback *);
};

struct CTSTimerCallback
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CTSTimerHandler
{
	struct CTimerNotifySink
	{
		virtual long OnConnected(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnDisconnected(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,ITerminal *);
		virtual long OnLogon(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnTerminated(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	CTSTimerHandler();
	int ShouldApplyRemoteTimeoutsToGlass(ITSSession *);
	long AssignEventDispatcher();
	long SetSession(ITSSession *);
	static long GetTimerHandlerForSession(CTSTimerHandler * *);
public:
	int GetLSCALState();
	long Stop();
	static long GetRemoteTerminal(ITSSession *,IRemoteTerminal * *);
	static long InitializeTimerHandlerForSession(ITSSession *,CTSTimerManager *);
	static long InitializeTimerHandlerForSessionTest(CTSTimerHandler * *,ITSSession *,CTSTimerManager *);
	virtual long NonDelegatingQueryInterface(_GUID const &,void * *);
	virtual ~CTSTimerHandler();
};

class CTSTimerHandlerManager
{
	struct CTimerManagerNotifySink
	{
		virtual long OnCreated(__PTSSessInfo *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	CTSTimerHandlerManager(long &);
	long InitializeTimerHandlerForSessionList(ISessionList *);
public:
	long Start();
	long Stop();
	static long GetInstanceOfTimerHandlerManager(CTSTimerHandlerManager * *);
};

class CTSTimerHandlerStorage
{
	virtual long NonDelegatingQueryInterface(_GUID const &,void * *);
public:
	CTSTimerHandlerStorage(long *);
	long AddHandlerForSession(unsigned long,CTSTimerHandler *);
	long RemoveHandlerForSession(unsigned long,CTSTimerHandler * *);
	virtual ~CTSTimerHandlerStorage();
	void ReleaseAllTimerHandler();
};

class CTSTimerInfo
{
	long CreateTimers(CTSTimerManager *);
	long GetNextActionForIdleTimer(long &,int &);
	long InitializeCallbacks();
public:
	long CancelLicensingSoftEnforcementTimer();
	long CancelLogonTimers();
	long GetGlassSessionDisconnectTimeout(unsigned long *);
	long InitializeGlassTimers(CTSTimerHandler *);
	long InitializeTimers(CTSTimerHandler *);
	long SetTimeoutValues(ITSSession *);
	long StartDisconnectTimer();
	long StartLicensingSoftEnforcementTimer(unsigned long);
	long StartLogonTimers();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CTSTimerManager
{
	CTSTimerManager(long &);
	long AddTimer(CTSTimer *);
	long RemoveTimer(CTSTimer *);
public:
	long GetInstanceOfTimer(CTSTimer * *);
	long Stop();
	static long GetInstanceOfTimerManager(CTSTimerManager * *);
	static unsigned long staticTimerThread(void *);
	virtual ~CTSTimerManager();
};

struct CTSUnknown
{
	virtual long NonDelegatingQueryInterface(_GUID const &,void * *);
	virtual unsigned long NonDelegatingAddRef();
	virtual unsigned long NonDelegatingRelease();
};

struct CTSUnknown<IHybridTerminal>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSUnknown<IRemoteTerminal>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

class CTSUnknown<ITSUnknown>
{
protected:
	CTSUnknown<ITSUnknown>(char const *,ITSUnknown *);
public:
	virtual long NonDelegatingQueryInterface(_GUID const &,void * *);
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSUnknown<IUserConfig>
{
	virtual long NonDelegatingQueryInterface(_GUID const &,void * *);
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSUnknown<IWsxPrivate>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTerminalOpsMonitor
{
	CTerminalOpsMonitor(long,char const *);
	virtual void TimerExpired();
	virtual ~CTerminalOpsMonitor();
};

class CTerminalSupportManager
{
	long ChangeTerminalPreference(ITSSession *,long,ITerminal *,unsigned long);
	long SetPreference(long,IRemoteTerminal *,unsigned long);
public:
	long Start();
	static long GetInstanceofTerminalPreferenceManager(CTerminalSupportManager * *);
	virtual long OnConnected(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnDisconnected(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,ITerminal *);
	virtual long OnLogon(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnPreConnect(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,ITerminal *);
};

class CTraceBase
{
	static int g_bEnabled;
	static unsigned long g_CreatorFunctionTLSIndex;
	static unsigned long g_NextShortActivityID;
	static unsigned long g_TLSIndex;
protected:
	static long IsTraceEnabled(int *);
public:
	CTraceBase(unsigned long,char const *,int);
	static long Destroy();
	static long GetThreadCurrentOperationTrace(CTraceBase * *);
	static long Initialize();
	static long ResetThreadCurrentOperationTrace(CTraceBase *,char const *);
	virtual int IsInheritID();
	virtual unsigned long GetComponentID();
	virtual unsigned long GetTraceID();
	virtual void GetTraceID(_GUID *);
	virtual ~CTraceBase();
};

class CUniqueIdMap
{
	long Resize(unsigned long);
public:
	long ReleaseId(unsigned long);
};

class CUserConfig
{
	static int IsIgnoreRegUserConfigError(_GUID *);
	unsigned long LoadConfigFromDC(int,unsigned short *,unsigned short *,unsigned short *,_USERCONFIGW *,unsigned long,unsigned long *);
public:
	virtual long GetConfig(_USERCONFIGW *);
	virtual long UpdateConfig(IUserName *,_GUID *);
	virtual long UpdateConfigFromLM();
};

struct CUserConfigMonitor
{
	CUserConfigMonitor(_EVENT_DESCRIPTOR,unsigned short *,unsigned short *,char const *,unsigned long);
	virtual void TimerExpired();
	virtual ~CUserConfigMonitor();
};

class CUserName
{
	long InitializeInternetName();
	long InitializeUserName(void *);
	long ResolveUserName(void *);
public:
	CUserName();
	virtual long DuplicateTokenInPid(unsigned long,unsigned __int64 *);
	virtual long GetDomainStr(unsigned short * *);
	virtual long GetInternetPrincipalStr(unsigned short * *);
	virtual long GetInternetProviderStr(unsigned short * *);
	virtual long GetLogonSid(_SID * *);
	virtual long GetOriginalToken(unsigned __int64 *,unsigned long *);
	virtual long GetSessionId(long *);
	virtual long GetToken(void * *);
	virtual long GetUserSid(_SID * *);
	virtual long GetUserStr(unsigned short * *);
	virtual long Initialize(unsigned __int64,int);
	virtual long IsAdmin(int *);
	virtual long IsConnectedUser(int *);
	virtual long IsEqual(IUserName *);
	virtual ~CUserName();
};

class CUserProfile
{
	static long AssembleThePath(unsigned short *,IUserName *,unsigned short * *);
	static long CheckAccessToDirectory(void *,unsigned short const *);
	static long CopyHomeDrive(unsigned short const *,unsigned short * *);
	static long CopyThePath(unsigned short const *,unsigned short * *);
	static long CreateHomeDrectory(IUserName *,unsigned short *);
	static long CutOffTrailingSpace(unsigned short *,unsigned __int64 *);
	static long GetFileSecurityW(unsigned short const *,void * *);
	static long GetPolicyHomeDir(unsigned short * *,unsigned short * *);
	static long GetPolicyProfile(unsigned short * *,int *);
	static long GetPolicyValue(unsigned short const *,unsigned short const *,int *);
	static long GetPolicyValue(unsigned short const *,unsigned short const *,unsigned long,unsigned short * *);
	static long ReportHomeDirectoryFailed(IUserName *);
	static long ReportProfileFailed(IUserName *);
	static long UserHasExplicitAccess(void *,_ACL *);
	static long VerifyThePath(IUserName *,unsigned short *,unsigned long);
public:
	static long staticGenerateProfilePaths(IUserName *,_USERCONFIGW *,unsigned short * *,unsigned short * *,unsigned short * *);
};

class CUtils
{
	static int bIsAppCompat;
	static int bIsClientSKU;
	static long IsTokenSid(void *,void *);
	static void * pAdminSid;
	static void * pAnonymousSid;
	static void * pAppContainerSid;
	static void * pLPACCapabilitySid;
	static void * pNetworkServiceSid;
	static void * pRdsMsSid;
	static void * pSystemSid;
public:
	static __MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0003 MapTerminalClassToDefaultSessionType(__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0004);
	static char const * GetStateName(__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	static int AbsoluteToSelfRelativeSD(void *,void * *,unsigned long *);
	static int AreLegacySettingshonored();
	static int IsKernelDebuggerAttached();
	static int IsRedirector();
	static int IsSDPerfOptimized();
	static int IsTerminalCompatibleToSession(__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0003,_GUID const &,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0004,_GUID const &,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0003 *,_GUID *);
	static int SelfRelativeToAbsoluteSD(void *,void * *,unsigned long *);
	static long AddAceToSecurityDescriptor(void * *,unsigned long,void *,unsigned char);
	static long AllocateAndInitUnicodeString(_UNICODE_STRING *,unsigned short const *,unsigned long);
	static long ConvertUuidToString(_GUID *,unsigned long,unsigned short *);
	static long CreateAdminSid(void * *);
	static long CreateAppContainerSid(void * *);
	static long CreateLPACCapabilitySid(void * *);
	static long CreateNetworkServiceSid(void * *);
	static long CreateSystemSid(void * *);
	static long GetAllowFastReconnect(int *);
	static long GetComputerNameW(unsigned short *,unsigned long *);
	static long GetDrainMode(unsigned long *);
	static long GetInstanceOfSessionManager(ISessionManager * *);
	static long GetInstanceOfUserName(IUserName * *);
	static long GetProtocolTerminalClass(unsigned short const *,_GUID *);
	static long GetUserSessionId(void *,long *);
	static long Initialize();
	static long IsAppServerInstalled(int &);
	static long IsCallerAdmin();
	static long IsCallerAnonymous();
	static long IsCallerSystem();
	static long IsChildSessionsPolicyEnabled(int *);
	static long IsSingleSessionPerUser(int *);
	static long StartServiceW(unsigned short const *,unsigned long,int);
	static long StopService(unsigned short const *,unsigned long);
	static long ValidTerminalToGeneric(_GUID const &,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0004,_GUID const &,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0003 *,_GUID *);
	static long ValidTerminalToHybrid(_GUID const &,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0004,_GUID const &,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0003 *);
	static void CleanupSD(void *);
	static void DebugBreakIfAskedEx(unsigned short *,unsigned short *);
	static void Destroy();
	static void FreeSessionInformation(unsigned long,_TS_SESSION_INFORMATION_0 *);
};

struct CWPPConfig
{
	long Initialize();
	long Refresh();
};

class CWPPLoggerConfig
{
	long StartTraceW();
	long StopTraceW();
	void Cleanup();
public:
	CWPPLoggerConfig();
	long ReadTraceConfig();
	long Refresh();
	unsigned char IsEnabled();
	unsigned char IsTraceToDebugger();
	~CWPPLoggerConfig();
};

struct CWPPLoggerGuidConfig
{
	CWPPLoggerGuidConfig();
	long ReadTraceConfig();
	long Refresh(unsigned __int64);
	~CWPPLoggerGuidConfig();
};

struct CWinlogonReply
{
	virtual long GetResult(unsigned long *);
	virtual long GetSelectedSessionId(long *);
};

struct CWinlogonRequest
{
	int operator==(CWinlogonRequest &);
	long Initialize(WINLOGON_ACTION_CODE,unsigned long,long *,unsigned long);
	virtual long CopyRequest(_TS_WINLOGON_REQUEST *);
	virtual long GetActionCode(WINLOGON_ACTION_CODE *);
	virtual long GetFlags(unsigned long *);
	virtual long GetNumberOfSessions(unsigned long *);
};

struct CWinstaDll
{
	unsigned char Connect(unsigned long,unsigned long,unsigned short *,unsigned char);
	unsigned char Disconnect(unsigned long,unsigned char);
	unsigned char GetProcessSid(unsigned long,_FILETIME,unsigned char *,unsigned long *);
	unsigned char GetTermSrvCounters(unsigned long,_TS_COUNTER *);
	unsigned char LogonIdFromName(unsigned short *,unsigned long *);
	unsigned char NameFromLogonId(unsigned long,unsigned short *);
	unsigned char QueryInformation(unsigned long,_WINSTATIONINFOCLASS,void *,unsigned long,unsigned long *);
	unsigned char Reset(unsigned long,unsigned char);
	unsigned char SendMessageW(unsigned long,unsigned short *,unsigned long,unsigned short *,unsigned long,unsigned long,unsigned long,unsigned long *,unsigned char);
	unsigned char SessionEnumerate(_SESSIONIDW * *,unsigned long *);
	unsigned char ShadowTarget(unsigned long,_WINSTATIONCONFIG2W *,_ICA_STACK_ADDRESS *,void *,unsigned long,void *,unsigned long,void *,unsigned long);
	unsigned char WaitSystemEvent(unsigned long,unsigned long *);
	virtual ~CWinstaDll();
};

struct CWsx
{
	virtual long AssignSessionID(long);
	virtual long AuthenticateClientToSession(long *);
	virtual long AutomationVerification(AUTOMATION_VERIFICATION_CLASS,void *,unsigned long);
	virtual long BrokenConnection(void *,_ICA_BROKEN_CONNECTION *);
	virtual long CdmConnect(long,void *);
	virtual long CdmDisconnect(long,void *);
	virtual long Destroy(_GUID *);
	virtual long DoConnect(long);
	virtual long DoDisconnect(long,unsigned long,void *);
	virtual long Escape(INFO_TYPE,void *,unsigned long,void *,unsigned long,unsigned long *);
	virtual long GetConnectionProperty(_GUID const &,unsigned long *,__PROPERTY_VALUE *);
	virtual long GetContext(void * *);
	virtual long GetStackContext(void * *);
	virtual long Initialize(_GUID *,unsigned long);
	virtual long InitializeClientData(unsigned long,void *,void *,void *,unsigned char *,unsigned long,_USERCONFIGW *,unsigned short *,unsigned short *,unsigned short *,_WINSTATIONDOCONNECTMSG *);
	virtual long IsUserAllowedToLogon(long,void *,unsigned short *,unsigned short *,_POLICY_TS_MACHINE *,_WINSTATIONCONFIGW *);
	virtual long LogonNotify(long,void *,unsigned short const *,unsigned short const *);
	virtual long NonDelegatingQueryInterface(_GUID const &,void * *);
	virtual long OpenDynamicVirtualChannel(void *,char *,unsigned long *,void * *);
	virtual long OpenVirtualChannel(void *,_CHANNELCLASS,char *,void * *);
	virtual long SendAutoReconnectStatus();
	virtual long SendStatusInfo(unsigned long);
	virtual long ServiceShutdownSaveContextData(_GUID *);
	virtual long ServiceStartRestoreData(_GUID *,long);
	virtual long SessionArbitrationEnumeration(void *,int,long *,unsigned long *);
	virtual long SetErrorInfo(unsigned long,int);
	virtual long SetVirtualChannelSecurity(void *,_USERCONFIGW *);
	virtual long ShadowAccessCheck(_ICA_STACK_ADDRESS *,void *,int,_SHADOWCLASS *);
	virtual long StackIoControl(void *,void *,unsigned long,void *,unsigned long,void *,unsigned long,unsigned long *);
	virtual long UpdateUserConfig(void *,unsigned char *,unsigned long);
	virtual long Verify(_GUID const &,unsigned long,__PROPERTY_VALUE *,unsigned long,__PROPERTY_VALUE *);
	virtual unsigned short const * GetDllName();
	virtual ~CWsx();
};

class CWsxDll
{
	long LoadWsxDll(unsigned short const *);
public:
	CWsxDll(CWsxMgr *,unsigned short const *,long *);
	virtual ~CWsxDll();
};

struct CWsxMgr
{
	CWsxMgr();
	long GetInstanceOfExtension(unsigned short const *,IWsx * *);
	long Initialize();
	long NotifyWsxSessionStateChange(ITSSession *,long,SESSION_EVENT_CLASS);
	long RemoveSavedWsxContextForSession(unsigned long);
	long SaveWsxForSession(unsigned long,IWsx *);
	virtual long OnConnected(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnCreated(__PTSSessInfo *);
	virtual long OnDesktopLock(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnDesktopUnlock(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnDestroyed(__PTSSessInfo *);
	virtual long OnDisconnected(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,ITerminal *);
	virtual long OnEndShell(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnLogoff(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnLogon(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnStartSSAsUser(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnStartShell(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnStopSSAsUser(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnTerminated(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual ~CWsxMgr();
	void Destroy();
};

class CrimsonHelper
{
	static CrimsonHelper s_instance;
	unsigned long RaiseEventInternal(_EVENT_DESCRIPTOR const &,unsigned long,_EVENT_DATA_DESCRIPTOR * const);
public:
	CrimsonHelper();
	unsigned long RaiseEvent<long,IUserName *>(_EVENT_DESCRIPTOR const &,long,IUserName *);
	unsigned long RaiseEvent<unsigned short *,_GUID>(_EVENT_DESCRIPTOR const &,unsigned short *,_GUID);
	unsigned long RaiseEvent<unsigned short *,long,unsigned __int64,unsigned __int64>(_EVENT_DESCRIPTOR const &,unsigned short *,long,unsigned __int64,unsigned __int64);
	unsigned long RaiseEvent<unsigned short *,long,unsigned __int64>(_EVENT_DESCRIPTOR const &,unsigned short *,long,unsigned __int64);
	unsigned long RaiseEvent<unsigned short *,unsigned short *,unsigned long>(_EVENT_DESCRIPTOR const &,unsigned short *,unsigned short *,unsigned long);
	unsigned long RaiseEvent<unsigned short *,unsigned short *,unsigned short *>(_EVENT_DESCRIPTOR const &,unsigned short *,unsigned short *,unsigned short *);
	unsigned long RaiseEvent<unsigned short *>(_EVENT_DESCRIPTOR const &,unsigned short *);
	unsigned long RaiseEvent<unsigned short const *,_GUID>(_EVENT_DESCRIPTOR const &,unsigned short const *,_GUID);
	unsigned long RaiseEvent<unsigned short const *,unsigned short const *,long,unsigned long>(_EVENT_DESCRIPTOR const &,unsigned short const *,unsigned short const *,long,unsigned long);
	unsigned long RaiseEvent<unsigned short const *>(_EVENT_DESCRIPTOR const &,unsigned short const *);
	~CrimsonHelper();
};

class DynArray<SmartArray<CEventDispatcher,long>::CCleanType,long>
{
protected:
	virtual int Grow(long);
public:
	virtual int Add(SmartArray<CEventDispatcher,long>::CCleanType &);
	virtual int AddAt(long,SmartArray<CEventDispatcher,long>::CCleanType &);
	virtual int GetAt(long,SmartArray<CEventDispatcher,long>::CCleanType *);
	virtual long GetArraySize();
	virtual long GetSize();
	virtual void SetSize(long);
};

class DynArray<SmartArray<CTSLicense,long>::CCleanType,long>
{
protected:
	virtual int Grow(long);
public:
	virtual int Add(SmartArray<CTSLicense,long>::CCleanType &);
	virtual int AddAt(long,SmartArray<CTSLicense,long>::CCleanType &);
	virtual int GetAt(long,SmartArray<CTSLicense,long>::CCleanType *);
	virtual long GetArraySize();
	virtual long GetSize();
	virtual void SetSize(long);
};

class DynArray<SmartArray<CTSTimerHandler,unsigned long>::CCleanType,unsigned long>
{
protected:
	virtual int Grow(unsigned long);
public:
	virtual int Add(SmartArray<CTSTimerHandler,unsigned long>::CCleanType &);
	virtual int AddAt(unsigned long,SmartArray<CTSTimerHandler,unsigned long>::CCleanType &);
	virtual int GetAt(unsigned long,SmartArray<CTSTimerHandler,unsigned long>::CCleanType *);
	virtual unsigned long GetArraySize();
	virtual unsigned long GetSize();
	virtual void SetSize(unsigned long);
};

class DynArray<SmartArray<CWsxDll,unsigned int>::CCleanType,unsigned int>
{
protected:
	virtual int Grow(unsigned int);
public:
	virtual int Add(SmartArray<CWsxDll,unsigned int>::CCleanType &);
	virtual int AddAt(unsigned int,SmartArray<CWsxDll,unsigned int>::CCleanType &);
	virtual int GetAt(unsigned int,SmartArray<CWsxDll,unsigned int>::CCleanType *);
	virtual unsigned int GetArraySize();
	virtual unsigned int GetSize();
	virtual void SetSize(unsigned int);
};

class DynArray<SmartArray<ISessionArbitrationHelper,unsigned long>::CCleanType,unsigned long>
{
protected:
	virtual int Grow(unsigned long);
public:
	virtual int Add(SmartArray<ISessionArbitrationHelper,unsigned long>::CCleanType &);
	virtual int AddAt(unsigned long,SmartArray<ISessionArbitrationHelper,unsigned long>::CCleanType &);
	virtual int GetAt(unsigned long,SmartArray<ISessionArbitrationHelper,unsigned long>::CCleanType *);
	virtual unsigned long GetArraySize();
	virtual unsigned long GetSize();
	virtual void SetSize(unsigned long);
};

class DynArray<SmartArray<ITSObjectStorage,long>::CCleanType,long>
{
protected:
	virtual int Grow(long);
public:
	virtual int Add(SmartArray<ITSObjectStorage,long>::CCleanType &);
	virtual int AddAt(long,SmartArray<ITSObjectStorage,long>::CCleanType &);
	virtual int GetAt(long,SmartArray<ITSObjectStorage,long>::CCleanType *);
	virtual long GetArraySize();
	virtual long GetSize();
	virtual void SetSize(long);
};

class DynArray<long,unsigned long>
{
protected:
	virtual int Grow(unsigned long);
public:
	virtual int Add(long &);
	virtual int AddAt(unsigned long,long &);
	virtual int GetAt(unsigned long,long *);
	virtual unsigned long GetArraySize();
	virtual unsigned long GetSize();
	virtual void SetSize(unsigned long);
};

struct FixedQueue
{
	bool Push(unsigned long,unsigned long *);
};

struct IConnectionDispatchManager
{
	static long GetInstanceOfConnectionDispatchManager(IConnectionDispatchManager * *);
};

struct IEnforcementCore
{
	static long GetInstanceOfEnforcementCore(IEnforcementCore * *);
};

struct IExternalEventDispatcher
{
	static long GetInstanceOf(ITSEventDispatcher *,IExternalEventDispatcher * *);
};

struct IHybridTerminal
{
	static long GetInstanceOfObject(IHybridConnectionHandler *,ITerminal *,IRemoteTerminal *,IHybridTerminal * *);
};

struct IRCMLegacyRpc
{
	static long GetInstanceOfRCMLegacyRpc(IRCMLegacyRpc * *);
};

struct IRCMPrivateRpc
{
	static long GetInstanceOfRCMPrivateRpc(IRCMPrivateRpc * *);
};

struct IRCMPublicRpc
{
	static long GetInstanceOfRCMPublicRpc(IRCMPublicRpc * *);
};

struct ITSRpcClientTrackerMgr
{
	static long GetInstanceOfObject(ITSRpcClientTrackerMgr * *);
};

struct IUserConfig
{
	static long GetInstanceOfUserConfig(IUserConfig * *);
};

struct SP<unsigned char,SP_HLOCAL<unsigned char> >
{
	unsigned char * GetPtrAs<unsigned char>();
	unsigned long * GetPtrAs<unsigned long>();
	void Attach(unsigned char *);
	void Reset();
};

struct SmartArray<CEventDispatcher,long>
{
	int AddAt(long,CEventDispatcher *);
	int GetAt(long,CEventDispatcher * *);
	void Empty();
	~SmartArray<CEventDispatcher,long>();
};

struct SmartArray<CTSLicense,long>
{
	int AddAt(long,CTSLicense *);
	int GetAt(long,CTSLicense * *);
	~SmartArray<CTSLicense,long>();
};

struct SmartArray<CTSTimerHandler,unsigned long>
{
	int AddAt(unsigned long,CTSTimerHandler *);
	int GetAt(unsigned long,CTSTimerHandler * *);
	void Empty();
};

struct SmartArray<CWsxDll,unsigned int>
{
	int GetAt(unsigned int,CWsxDll * *);
};

struct SmartArray<ISessionArbitrationHelper,unsigned long>
{
	int GetAt(unsigned long,ISessionArbitrationHelper * *);
};

struct SmartArray<ITSObjectStorage,long>
{
	int AddAt(long,ITSObjectStorage *);
	int GetAt(long,ITSObjectStorage * *);
	void Empty();
};

struct SmartHANDLE
{
	void operator=(void *);
};

struct SmartPtr<CAutoreconnectInfo>
{
	SmartPtr<CAutoreconnectInfo>(CAutoreconnectInfo *);
};

struct SmartPtr<CCachedTerminalInfo>
{
	SmartPtr<CCachedTerminalInfo> & operator=(CCachedTerminalInfo *);
	~SmartPtr<CCachedTerminalInfo>();
};

struct SmartPtr<CConnectionHandlerItem>
{
	SmartPtr<CConnectionHandlerItem> & operator=(CConnectionHandlerItem *);
	~SmartPtr<CConnectionHandlerItem>();
};

struct SmartPtr<CConnectionLastInputTime>
{
	~SmartPtr<CConnectionLastInputTime>();
};

struct SmartPtr<CDCOMFact>
{
	SmartPtr<CDCOMFact> & operator=(CDCOMFact *);
	~SmartPtr<CDCOMFact>();
};

struct SmartPtr<CDefaultSessionArbitrationFilter>
{
	SmartPtr<CDefaultSessionArbitrationFilter> & operator=(CDefaultSessionArbitrationFilter *);
};

struct SmartPtr<CEventDispatcher::CSinkEntry>
{
	SmartPtr<CEventDispatcher::CSinkEntry> & operator=(CEventDispatcher::CSinkEntry *);
};

struct SmartPtr<CEventDispatcher>
{
	SmartPtr<CEventDispatcher> & operator=(CEventDispatcher *);
	SmartPtr<CEventDispatcher>(CEventDispatcher *);
};

struct SmartPtr<CExecSessionApps>
{
	SmartPtr<CExecSessionApps> & operator=(CExecSessionApps *);
};

struct SmartPtr<CLicenseList>
{
	SmartPtr<CLicenseList> & operator=(CLicenseList *);
	~SmartPtr<CLicenseList>();
};

struct SmartPtr<CListenerEx>
{
	SmartPtr<CListenerEx> & operator=(CListenerEx *);
};

struct SmartPtr<CListenerNotifySink>
{
	SmartPtr<CListenerNotifySink> & operator=(CListenerNotifySink *);
};

struct SmartPtr<CProtocolExMgr>
{
	SmartPtr<CProtocolExMgr> & operator=(CProtocolExMgr *);
};

struct SmartPtr<CRemoteConnectionManager::CRemoteConnectionManagerSink>
{
	SmartPtr<CRemoteConnectionManager::CRemoteConnectionManagerSink> & operator=(CRemoteConnectionManager::CRemoteConnectionManagerSink *);
	~SmartPtr<CRemoteConnectionManager::CRemoteConnectionManagerSink>();
};

struct SmartPtr<CRemoteConnectionManager>
{
	SmartPtr<CRemoteConnectionManager> & operator=(CRemoteConnectionManager *);
};

struct SmartPtr<CSessionArbitrationHelper>
{
	SmartPtr<CSessionArbitrationHelper> & operator=(CSessionArbitrationHelper *);
};

struct SmartPtr<CSessionKey>
{
	SmartPtr<CSessionKey> & operator=(CSessionKey *);
	~SmartPtr<CSessionKey>();
};

struct SmartPtr<CStoredItem>
{
	~SmartPtr<CStoredItem>();
};

struct SmartPtr<CTSTimer>
{
	SmartPtr<CTSTimer> & operator=(CTSTimer *);
};

struct SmartPtr<CTSTimerHandler>
{
	SmartPtr<CTSTimerHandler> & operator=(CTSTimerHandler *);
	SmartPtr<CTSTimerHandler>(CTSTimerHandler *);
	~SmartPtr<CTSTimerHandler>();
};

struct SmartPtr<CTSTimerHandlerManager>
{
	SmartPtr<CTSTimerHandlerManager> & operator=(CTSTimerHandlerManager *);
	~SmartPtr<CTSTimerHandlerManager>();
};

struct SmartPtr<CTSTimerHandlerStorage>
{
	SmartPtr<CTSTimerHandlerStorage> & operator=(CTSTimerHandlerStorage *);
	~SmartPtr<CTSTimerHandlerStorage>();
};

struct SmartPtr<CTSTimerManager>
{
	SmartPtr<CTSTimerManager> & operator=(CTSTimerManager *);
	~SmartPtr<CTSTimerManager>();
};

struct SmartPtr<CTerminalSupportManager>
{
	SmartPtr<CTerminalSupportManager> & operator=(CTerminalSupportManager *);
	~SmartPtr<CTerminalSupportManager>();
};

struct SmartPtr<CWinlogonReply>
{
	SmartPtr<CWinlogonReply> & operator=(CWinlogonReply *);
};

struct SmartPtr<CWinlogonRequest>
{
	SmartPtr<CWinlogonRequest> & operator=(CWinlogonRequest *);
};

struct SmartPtr<CWsxDll>
{
	SmartPtr<CWsxDll> & operator=(CWsxDll *);
	~SmartPtr<CWsxDll>();
};

struct SmartPtr<CWsxMgr>
{
	SmartPtr<CWsxMgr> & operator=(CWsxMgr *);
	~SmartPtr<CWsxMgr>();
};

struct SmartPtr<IArbRequestSerializer>
{
	SmartPtr<IArbRequestSerializer> & operator=(IArbRequestSerializer *);
	~SmartPtr<IArbRequestSerializer>();
};

struct SmartPtr<IAudit>
{
	SmartPtr<IAudit> & operator=(IAudit *);
	~SmartPtr<IAudit>();
};

struct SmartPtr<IClassFactory>
{
	~SmartPtr<IClassFactory>();
};

struct SmartPtr<IConnection>
{
	SmartPtr<IConnection> & operator=(IConnection *);
};

struct SmartPtr<IConnectionDispatchManager>
{
	~SmartPtr<IConnectionDispatchManager>();
};

struct SmartPtr<ICredentials>
{
	SmartPtr<ICredentials> & operator=(ICredentials *);
	~SmartPtr<ICredentials>();
};

struct SmartPtr<IEnfLicenseManager>
{
	SmartPtr<IEnfLicenseManager> & operator=(IEnfLicenseManager *);
	SmartPtr<IEnfLicenseManager>(IEnfLicenseManager *);
	~SmartPtr<IEnfLicenseManager>();
};

struct SmartPtr<IEnfPolicyManager>
{
	SmartPtr<IEnfPolicyManager> & operator=(IEnfPolicyManager *);
	~SmartPtr<IEnfPolicyManager>();
};

struct SmartPtr<IEnfRpcHelper>
{
	SmartPtr<IEnfRpcHelper> & operator=(IEnfRpcHelper *);
	~SmartPtr<IEnfRpcHelper>();
};

struct SmartPtr<IEnforcementCore>
{
	~SmartPtr<IEnforcementCore>();
};

struct SmartPtr<IExternalEventDispatcher>
{
	SmartPtr<IExternalEventDispatcher> & operator=(IExternalEventDispatcher *);
	~SmartPtr<IExternalEventDispatcher>();
};

struct SmartPtr<IGlassTerminal>
{
	~SmartPtr<IGlassTerminal>();
};

struct SmartPtr<IHealthStatus>
{
	SmartPtr<IHealthStatus> & operator=(IHealthStatus *);
	~SmartPtr<IHealthStatus>();
};

struct SmartPtr<IHybridConnectionHandler>
{
	SmartPtr<IHybridConnectionHandler> & operator=(IHybridConnectionHandler *);
};

struct SmartPtr<IHybridTerminal>
{
	~SmartPtr<IHybridTerminal>();
};

struct SmartPtr<IListener>
{
	SmartPtr<IListener> & operator=(IListener *);
	SmartPtr<IListener>();
	SmartPtr<IListener>(IListener *);
	~SmartPtr<IListener>();
};

struct SmartPtr<IListenerItem>
{
	SmartPtr<IListenerItem> & operator=(IListenerItem *);
	~SmartPtr<IListenerItem>();
};

struct SmartPtr<IListenersList>
{
	~SmartPtr<IListenersList>();
};

struct SmartPtr<IProtocolManager>
{
	SmartPtr<IProtocolManager> & operator=(IProtocolManager *);
	~SmartPtr<IProtocolManager>();
};

struct SmartPtr<IRCMConnectionRequest>
{
	~SmartPtr<IRCMConnectionRequest>();
};

struct SmartPtr<IRdpSessionAgent>
{
	~SmartPtr<IRdpSessionAgent>();
};

struct SmartPtr<IRemoteConnectionManager>
{
	~SmartPtr<IRemoteConnectionManager>();
};

struct SmartPtr<IRemoteTerminal>
{
	SmartPtr<IRemoteTerminal> & operator=(IRemoteTerminal *);
	SmartPtr<IRemoteTerminal>(IRemoteTerminal *);
};

struct SmartPtr<IRestrictedCalls>
{
	~SmartPtr<IRestrictedCalls>();
};

struct SmartPtr<ISessionArbitrationHelper>
{
	SmartPtr<ISessionArbitrationHelper>(ISessionArbitrationHelper *);
};

struct SmartPtr<ISessionDialog>
{
	~SmartPtr<ISessionDialog>();
};

struct SmartPtr<ISessionEnum>
{
	SmartPtr<ISessionEnum> & operator=(ISessionEnum *);
	~SmartPtr<ISessionEnum>();
};

struct SmartPtr<ISessionEnumFilter>
{
	~SmartPtr<ISessionEnumFilter>();
};

struct SmartPtr<ISessionList>
{
	SmartPtr<ISessionList> & operator=(ISessionList *);
	~SmartPtr<ISessionList>();
};

struct SmartPtr<ISessionManager>
{
	SmartPtr<ISessionManager> & operator=(ISessionManager *);
	SmartPtr<ISessionManager>(ISessionManager *);
	~SmartPtr<ISessionManager>();
};

struct SmartPtr<IShadowEx>
{
	SmartPtr<IShadowEx> & operator=(IShadowEx *);
	~SmartPtr<IShadowEx>();
};

struct SmartPtr<IShadowPipe>
{
	~SmartPtr<IShadowPipe>();
};

struct SmartPtr<IShadowTarget>
{
	SmartPtr<IShadowTarget> & operator=(IShadowTarget *);
	~SmartPtr<IShadowTarget>();
};

struct SmartPtr<ITSEventDispatcher>
{
	~SmartPtr<ITSEventDispatcher>();
};

struct SmartPtr<ITSEventDispatcher_ITSEvent>
{
	~SmartPtr<ITSEventDispatcher_ITSEvent>();
};

struct SmartPtr<ITSLicense>
{
	~SmartPtr<ITSLicense>();
};

struct SmartPtr<ITSLicensePolicy>
{
	SmartPtr<ITSLicensePolicy> & operator=(ITSLicensePolicy *);
	~SmartPtr<ITSLicensePolicy>();
};

struct SmartPtr<ITSObjectStorage>
{
	SmartPtr<ITSObjectStorage> & operator=(ITSObjectStorage *);
	~SmartPtr<ITSObjectStorage>();
};

struct SmartPtr<ITSRpcClientTrackerMgr>
{
	SmartPtr<ITSRpcClientTrackerMgr> & operator=(ITSRpcClientTrackerMgr *);
	~SmartPtr<ITSRpcClientTrackerMgr>();
};

struct SmartPtr<ITSSession>
{
	SmartPtr<ITSSession> & operator=(ITSSession *);
	~SmartPtr<ITSSession>();
};

struct SmartPtr<ITSSessionAttribute>
{
	~SmartPtr<ITSSessionAttribute>();
};

struct SmartPtr<ITSUnknown>
{
	~SmartPtr<ITSUnknown>();
};

struct SmartPtr<ITerminal>
{
	SmartPtr<ITerminal> & operator=(ITerminal *);
	SmartPtr<ITerminal>(ITerminal *);
	~SmartPtr<ITerminal>();
};

struct SmartPtr<ITimerCallback>
{
	SmartPtr<ITimerCallback> & operator=(ITimerCallback *);
	~SmartPtr<ITimerCallback>();
};

struct SmartPtr<IUnknown>
{
	SmartPtr<IUnknown> & operator=(IUnknown *);
};

struct SmartPtr<IUserConfig>
{
	~SmartPtr<IUserConfig>();
};

struct SmartPtr<IUserName>
{
	SmartPtr<IUserName> & operator=(IUserName *);
	SmartPtr<IUserName>(IUserName *);
	~SmartPtr<IUserName>();
};

struct SmartPtr<IWRdsConnectionRdp>
{
	SmartPtr<IWRdsConnectionRdp> & operator=(IWRdsConnectionRdp *);
};

struct SmartPtr<IWRdsGraphicsGlobalContextPrivate>
{
	SmartPtr<IWRdsGraphicsGlobalContextPrivate> & operator=(IWRdsGraphicsGlobalContextPrivate *);
	~SmartPtr<IWRdsGraphicsGlobalContextPrivate>();
};

struct SmartPtr<IWRdsGraphicsPrivate>
{
	SmartPtr<IWRdsGraphicsPrivate> & operator=(IWRdsGraphicsPrivate *);
};

struct SmartPtr<IWRdsProtocolConnection>
{
	~SmartPtr<IWRdsProtocolConnection>();
};

struct SmartPtr<IWRdsProtocolListener>
{
	SmartPtr<IWRdsProtocolListener> & operator=(IWRdsProtocolListener *);
	~SmartPtr<IWRdsProtocolListener>();
};

struct SmartPtr<IWRdsProtocolLogonErrorRedirector>
{
	SmartPtr<IWRdsProtocolLogonErrorRedirector> & operator=(IWRdsProtocolLogonErrorRedirector *);
};

struct SmartPtr<IWRdsProtocolManager>
{
	SmartPtr<IWRdsProtocolManager> & operator=(IWRdsProtocolManager *);
};

struct SmartPtr<IWRdsProtocolShadowConnection>
{
	~SmartPtr<IWRdsProtocolShadowConnection>();
};

struct SmartPtr<IWTSConnectionPrivate>
{
	SmartPtr<IWTSConnectionPrivate> & operator=(IWTSConnectionPrivate *);
	~SmartPtr<IWTSConnectionPrivate>();
};

struct SmartPtr<IWorkerTerminal>
{
	~SmartPtr<IWorkerTerminal>();
};

struct SmartPtr<IWsx>
{
	~SmartPtr<IWsx>();
};

class TCntPtr<CGraphicsGlobalContext>
{
	void SafeRelease();
};

ATL::_ATL_OBJMAP_ENTRY30 __objMap_CRemoteConnectionManager;
CEnfTrace g_EnfTraceDump;
CEnforcementCore * g_pEnfCore;
CObjectTracker * g_pObjectTracker;
CRCMLegacyRpc * g_pRCMLegacyRpc;
CRCMModule _AtlModule;
CService _Service;
_GUID const IID_SessionKey;
char (* g_DbgTrace)[80];
char const * const _TRACE_PREFIX;
int CompareSessionLogonTime(void const *,void const *);
int DoesVMNeedLicensing();
int ForceConsoleShadow(ITerminal *);
int InlineIsEqualGUID(_GUID const &,_GUID const &);
int IsIA64AdminLimitMode();
int IsLicensingRegistrySet(unsigned short *,unsigned short *);
int IsRAILSession(ITSSession *);
int IsRDPProtocol(_GUID);
int IsRemoteTerminal(ITerminal *);
int IsVMAddedToACollection();
int g_bCaptureObjectStackTrace;
int g_bDebugSpew;
int ocslen(unsigned short const *);
long ApplyTSAllowPolicyToInitialProgram(IConnection *,_USERCONFIGW *,unsigned short * *,int *);
long CGraphicsFactory__StartGraphicsServices();
long CheckCallerIdentity(void *);
long CreateRDFilterObjectInSession(unsigned long,ITSRDSettings * *);
long DisconnectUser(ITSSession *,unsigned long);
long DuplicateHandleInPidKMode(void *,unsigned long,void * *);
long GenerateConstrainedGuid(_GUID *,unsigned long);
long GetConnectionPropertyForDevice(_GUID const &,unsigned long *,__PROPERTY_VALUE *,_WINSTATIONCONFIG2W *);
long GetInstanceOfLicenseManager(IEnforcementCore *,IEnfLicenseManager * *);
long GetInstanceOfPolicyManager(long,IEnfPolicyManager * *);
long GetInstanceOfRemoteConnectionManager(IRemoteConnectionManager * *);
long GetInstanceOfSerializer(IArbRequestSerializer * *);
long GetMemoryMappedImageName(void *,unsigned short *);
long GetObjectEnum(IObjectTrackerEnum * *);
long GetSessionAgent(unsigned long,IRdpSessionAgent * *);
long GetSessionDeviceId(IRemoteTerminal *,unsigned char *,unsigned long,unsigned long *,unsigned long *);
long GetSessionModules(IRemoteTerminal *,int,int,unsigned char *,unsigned long,unsigned long *,unsigned long *);
long GetSessionVirtualChannelData(IRemoteTerminal *,unsigned char *,unsigned long,unsigned char *,unsigned long,unsigned long *,unsigned long *);
long GetSessionWDConfig(IRemoteTerminal *,unsigned char *,unsigned long,unsigned long *,unsigned long *);
long GetUserConfigOfSession(ITSSession *,_WINSTATIONCONFIGW *);
long InitializeRpcInterface(IEnfRpcHelper * *);
long IsConsole(ITSSession *,int &);
long IsResetingOnBrokenConnection(ITSSession *,int &);
long LoadExternalPolicy(int,HINSTANCE__ * *,ITSLicensePolicy * *);
long LogoffUser(ITSSession *,unsigned long);
long RCMRpcPrologueEx(unsigned long,unsigned long,int,ITerminal * *,ITSSession * *,int *);
long ReadRegDWORD(unsigned short *,unsigned short *,unsigned long *);
long StringCbCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCbLengthW(unsigned short const *,unsigned __int64,unsigned __int64 *);
long StringCbPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCopyNW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64);
long StringCchCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchLengthW(unsigned short const *,unsigned __int64,unsigned __int64 *);
long StringCchPrintfA(char *,unsigned __int64,char const *,...);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long TermsrvSecurityCallback(void *,void *);
long VerifyHeartBeatSender(void *);
long VerifyImage(unsigned short *);
long WarnIdleUserSync(ITSSession *,int,int *);
long WarnUser(ITSSession *,TS_TIMER_TYPE,int,unsigned long *);
unsigned char ValidWireBuffer(_WINSTATIONINFOCLASS,void *,unsigned long);
unsigned long g_DbgTracePos;
unsigned long g_DebugSpewTraceLevel;
unsigned long g_DebugTraceComponent;
unsigned long g_EnableSoftEnforcement;
unsigned long g_RpcContext;
unsigned long g_TSLSSoftEnforcementTime;
unsigned short * gSubDesktopInitProg;
void * MemoryAlloc(unsigned __int64);
void * operator new(unsigned __int64);
void * operator new[](unsigned __int64);
void EnumeratePipeCallback(void *,unsigned char *,_VMBUS_PIPE_CHANNEL_INFO *,_GUID const *);
void MemoryFree(void *);
void PingEventCallback(void *,unsigned char);
void ServiceMain(unsigned long,unsigned short * *);
void SvchostPushServiceGlobals(_SVCHOST_GLOBAL_DATA *);
void _DbgPrintMessage(int,char const *,...);
void operator delete(void *);
void operator delete[](void *);
