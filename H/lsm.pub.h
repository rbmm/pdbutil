class AuthzWrapper
{
	int InitAuthzFuncPointers();
public:
	AuthzWrapper();
	int AuthziFreeAuditEventType(AUTHZ_AUDIT_EVENT_TYPE_HANDLE__ *);
	int AuthziInitializeAuditEvent(unsigned long,AUTHZ_RESOURCE_MANAGER_HANDLE__ *,AUTHZ_AUDIT_EVENT_TYPE_HANDLE__ *,_AUDIT_PARAMS *,AUTHZ_AUDIT_QUEUE_HANDLE__ *,unsigned long,unsigned short *,unsigned short *,unsigned short *,unsigned short *,AUTHZ_AUDIT_EVENT_HANDLE__ * *);
	int AuthziInitializeAuditParamsWithRM(unsigned long,AUTHZ_RESOURCE_MANAGER_HANDLE__ *,_AUDIT_PARAMS *,_LUID,unsigned short const *,unsigned short const *,unsigned short const *);
	int Init();
	~AuthzWrapper();
};

struct AutoProviderRegistrar
{
	AutoProviderRegistrar(void (*)(),void (*)());
	~AutoProviderRegistrar();
};

class CAsyncNotifyParams
{
	static void staticCancelAsyncNotification(_RPC_ASYNC_STATE *,void *,_RPC_ASYNC_EVENT);
public:
	long Initialize(IPublicNotification *);
	long UnsubscribeFromNotifications();
	virtual void OnEventsAvailable(IPublicNotification *,unsigned long);
	virtual void TestCancel(IPublicNotification *);
	virtual ~CAsyncNotifyParams();
};

struct CAutoExclusiveLock
{
	CAutoExclusiveLock(CResource &);
	~CAutoExclusiveLock();
};

struct CAutoSetActivityId
{
	CAutoSetActivityId(_GUID *);
};

struct CAutoSharedLock
{
	~CAutoSharedLock();
};

struct CCSLock
{
	long Initialize(unsigned long);
};

struct CCSLockEx
{
	CCSLockEx(unsigned long);
	~CCSLockEx();
};

class CChkMacroETWLoggerT<CEmptyType>
{
	static CEtwProviderT<void> g_chkMacroETWProvider;
};

class CConnectionManagerItem
{
	long DisconnectMySession(_SERVICE_NOTIFY_2W *);
public:
	CConnectionManagerItem(_GUID const &,unsigned short const *,long *);
	long DisableInstance();
	long GetInstance(IConnectionManager * *,int);
	long NotifyCMgrServiceStatusChange(_SERVICE_NOTIFY_2W *);
	long OpenServiceHandle();
	long RegisterWaitForServiceStateChange();
	long StartInstance(ISessionManager *);
	long StopInstance();
	static void ServiceStatusChangeCallback(void *);
	virtual ~CConnectionManagerItem();
};

class CContainerHelper
{
	static int GetAllowAllListenerInContainer();
};

struct CConvertibleLock
{
	CConvertibleLock(CResource &,CConvertibleLock::LOCK_TYPE);
};

class CCsrMgr
{
	long CreateLpcPort();
	long CreatePortSecurityDescriptor(void * *);
	static void staticLpcWorker(_TP_CALLBACK_INSTANCE *,void *,_TP_ALPC *);
	void HandleLpcConnectionRequest(_PORT_MESSAGE *);
	void LpcWorker();
public:
	CCsrMgr(long *);
	virtual long StartCsr(long *,unsigned short const *,void * *,void * *,ICsrPipe * *,ICsrEventSink *);
	virtual long StopCsr(long);
	virtual long SystemShutdownStarted();
	virtual ~CCsrMgr();
};

class CCsrPipe
{
	long DoConnectFromTerminalConnectMsg(_WINSTATIONDOCONNECTMSG *,_TERMINAL_CONNECTMSG *);
	long Initialize(long,void *,void *,ICsrEventSink *);
	long SendGetSystemMetrics(unsigned long,unsigned long *);
	long SendLpcMessage(_WINSTATION_APINUMBER,void *,unsigned int,unsigned long);
public:
	CCsrPipe(CCsrPipe *,long *);
	CCsrPipe(long,void *,void *,ICsrEventSink *,long *);
	long CompleteConnection(void *,_PORT_MESSAGE *,_WINSTATIONAPI_CONNECT_INFO *,int *);
	long NotifyCompleteConnect();
	long OnConnectionClosed();
	long OnGetSMCommand(_WINSTATION_APIMSG *);
	virtual long GetScreenSize(unsigned long *,unsigned long *);
	virtual long SendBroadcastMsg(_WINSTATIONBROADCASTSYSTEMMSG *,unsigned long);
	virtual long SendConnectMsg(_TERMINAL_CONNECTMSG *,void *,unsigned long,int);
	virtual long SendDisconnectMsg(int);
	virtual long SendDisplayIOCtl(_WINSTATIONDISPLAYIOCTLMSG);
	virtual long SendDoMessage(_WINSTATIONSENDMESSAGEMSG *,unsigned long);
	virtual long SendPassthruDisable(unsigned long);
	virtual long SendPassthruEnable(unsigned long);
	virtual long SendRedrawRectangle(_WINSTATIONREDRAWRECTMSG);
	virtual long SendRedrawScreen();
	virtual long SendSessionNotificationMsg(_WINSTATIONSESSIONNOTIFICATIONMSG *);
	virtual long SendShadowCleanup(unsigned char *,unsigned long,unsigned long);
	virtual long SendShadowConnect(_TERMINAL_CONNECTMSG *,unsigned long);
	virtual long SendShadowDisconnect(unsigned long);
	virtual long SendShadowSetup(unsigned long);
	virtual long SendShadowStart(unsigned char *,unsigned long,unsigned long);
	virtual long SendShadowStop(unsigned long);
	virtual long SendStopScreenUpdates();
	virtual long SendTerminate();
	virtual long SendTimeZoneMsg(_WINSTATIONSETDYNAMICTIMEZONE *);
	virtual long SendTimeZoneMsg(_WINSTATIONSETTIMEZONE *);
	virtual long SendWindowsMsg(_WINSTATIONSENDWINDOWMSG *,unsigned long);
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

struct CDefaultSessionArbitrationFilter
{
	CDefaultSessionArbitrationFilter(ITSSession *,long *);
	static long GetInstanceOfDefaultSessionArbitrationFilter(ITSSession *,ISessionEnumFilter * *);
	virtual long Test(ITSSession *);
};

class CEtwProviderT<void>
{
	class CETWApiSet
	{
		void Init();
	};

protected:
	static CEtwProviderT<void>::CETWApiSet g_etwApi;
public:
	long Register(_GUID const &);
	void Unregister();
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
		CSinkEntry(ITSNotifySink *,CEventDispatcher *);
		long GetAdviseCookie(IUnknown * *);
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

struct CGenericOpsMonitor
{
	CGenericOpsMonitor(_EVENT_DESCRIPTOR,char const *,unsigned long);
	virtual void TimerExpired();
	virtual ~CGenericOpsMonitor();
};

class CGlassTerminal
{
	long SetGlassSessionIdInRegistry(ITSSession *);
	static _TP_WORK * staticCreateGlassSessionWork;
	static void staticCreateGlassSession(_TP_CALLBACK_INSTANCE *,void *,_TP_WORK *);
	virtual long NonDelegatingQueryInterface(_GUID const &,void * *);
public:
	static int IsLocalGlassTerminal(ITerminal *);
	static long staticGetInstanceOfGlassTerminal(ITerminal * *);
	virtual long Connected(ITSSession *);
	virtual long Disconnected(ITSSession *);
	virtual long DoConnect(_TERMINAL_CONNECTMSG *,ITSSession *,unsigned __int64,unsigned long);
	virtual long DoDisconnect(unsigned long);
	virtual long DoTerminate();
	virtual long GetActivityId(_GUID *);
	virtual long GetClientAddress(unsigned short * const);
	virtual long GetClientName(unsigned short * const);
	virtual long GetClientTimeZone(IUserName *,_TS_DYNAMIC_TIME_ZONE_INFORMATION *);
	virtual long GetLicenseType(_GUID *);
	virtual long GetParent(unsigned short * const,long *);
	virtual long GetProtocolName(unsigned short * const);
	virtual long GetSecurityDescriptor(unsigned char * *,unsigned long *);
	virtual long GetSessionInitialProgram(unsigned short * const);
	virtual long GetTerminalInformation(unsigned short * const,unsigned char * *,unsigned long *);
	virtual long GetTerminalName(unsigned short * const);
	virtual long GetTerminalType(_GUID *,unsigned long *);
	virtual long GetTerminalTypeExtended(_GUID *,unsigned long *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0004 *,_GUID *);
	virtual long LoggedOn(IUserName *);
	virtual long NotifyCommandProcessCreated(unsigned short * const);
	virtual long PrepareForSessionArbitration(IUserName *);
	virtual long SetSecurityDescriptor(unsigned char *,unsigned long);
	virtual ~CGlassTerminal();
};

class CImpersonate
{
	long CheckCurrentContext(void *);
public:
	long ImpersonateRpcClient();
	long ImpersonateUser(IUserName *);
	long ImpersonateUser(void *);
	long StopImpersonating();
};

class CKernelNotify
{
	long DestroySessionNotify(long);
	long GetNotifyForSession(long,CNtNotifySessionChange * *);
	long InitNotifyForSession(long);
	long NotifySessionStateChanges(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0002,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,void *,unsigned long);
public:
	CKernelNotify(long *);
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
	virtual ~CKernelNotify();
};

class CListTree<CConnectionManagerItem>
{
protected:
	static _RTL_GENERIC_COMPARE_RESULTS staticCompareEntry(_RTL_GENERIC_TABLE *,void *,void *);
	static void * staticAllocateEntry(_RTL_GENERIC_TABLE *,unsigned long);
	static void staticFreeEntry(_RTL_GENERIC_TABLE *,void *);
};

class CListTree<CStoredItem>
{
protected:
	int ReleaseItemPtr(CStoredItem * *);
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
	int Lookup(CTSRpcClientTrackerMgr::CTSRpcClient *,CTSRpcClientTrackerMgr::CTSRpcClient * *);
	long Add(CTSRpcClientTrackerMgr::CTSRpcClient *,int);
	void RemoveAll();
};

class CNtNotifySessionChange
{
	_IO_SESSION_STATE GetIoState(__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
public:
	CNtNotifySessionChange(long,long *);
	long NotifyIoStateChange(unsigned long,__int64,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0002,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,void *,unsigned long);
};

class CObjectAccessTracker<IPublicNotification,5000>
{
	long GetCallerSessionId(unsigned long *);
public:
	CObjectAccessTracker<IPublicNotification,5000>(char const *,IPublicNotification *,ITSRpcClientTrackerMgr *,long *);
	static long GetInstanceOfObject(char const *,IPublicNotification *,ITSRpcClientTrackerMgr *,CObjectAccessTracker<IPublicNotification,5000> * *);
	virtual ~CObjectAccessTracker<IPublicNotification,5000>();
};

class CObjectAccessTracker<ITSSession,5000>
{
	long GetCallerSessionId(unsigned long *);
};

struct CObjectTracker
{
	void AddObject(_LIST_ENTRY *);
	void RemoveObject(_LIST_ENTRY *);
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

class CPolicyMonitor
{
	int IsDenyChildSessions();
	int IsDenyTSConnectionsPolicy();
	int IsSysprepSetupInProgress();
	long DelayInitializeCOM();
	long DisableConnectionManager();
	long PolicyMonitorWorker();
	long StartConnectionManager(int);
	long StartWaitOnRegistry(unsigned long);
	long StopConnectionManager();
	long TestDelayStartConnectionManager();
	static long InitializeSdFromThreadToken(void * *,_ACL * *);
	static long OnNotificationTriggered(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
	static void * hPolicyChangeEvent;
	static void staticPolicyMonitorWorker(_TP_CALLBACK_INSTANCE *,void *,_TP_WORK *);
public:
	CPolicyMonitor(long *);
	virtual ~CPolicyMonitor();
};

class CPrivateRpc
{
	static long staticAdminRpcSecurityCallback(void *,void *);
	static long staticPrivateRpcSecurityCallback(void *,void *);
	static long staticRpcSecurityCallback(void *,int);
	static long volatile numInstances;
public:
	CPrivateRpc();
	virtual long Start();
	virtual long Stop();
};

class CPublicNotification
{
	struct CTSNotifySink
	{
		virtual long OnConnected(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnCreated(__PTSSessInfo *);
		virtual long OnCsrConnected(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnCsrDisconnected(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnCsrInitialized(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnDesktopLock(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnDesktopUnlock(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnDisconnected(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,ITerminal *);
		virtual long OnLogoff(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnLogon(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnShadowStart(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnShadowStop(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long OnTerminated(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	long SendEvent(unsigned long,__PTSSessInfo *);
	void EmptyEventList();
public:
	CPublicNotification(int,unsigned long,long *);
	virtual long GetNumEvents(unsigned long *);
	virtual long GetResult(_SESSION_CHANGE *,unsigned long);
	virtual long Register(long,unsigned long,unsigned long);
	virtual long ResetCallback();
	virtual long SetCallback(IPublicNotificationCallback *);
	virtual long UnRegister();
	virtual ~CPublicNotification();
};

class CPublicRpc
{
	static int bStarted;
	static int staticRunLocalOnly;
	static long staticPublicLocalOnlyRpcSecurityCallback(void *,void *);
	static long staticPublicRpcSecurityCallback(void *,void *);
	static long staticRpcSecurityCallback(void *,void *,int);
	static long volatile numInstances;
public:
	CPublicRpc();
	virtual long Start();
	virtual long StartRemote();
	virtual long Stop();
	virtual long StopRemote();
};

struct CRDSAppXLSMPlugin
{
	CRDSAppXLSMPlugin(long *);
	long Start(ISessionManager *,ITSEventDispatcher *);
	virtual long OnLogoff(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnLogon(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
	virtual long OnSessionArbitration(__PTSSessInfo *,IUserName *);
};

class CRegistry
{
	unsigned long ReadReg(unsigned short const *,unsigned char * *,unsigned long *,unsigned long);
	void * Allocate(unsigned long);
public:
	unsigned long CreateKey(HKEY__ *,unsigned short const *,unsigned long,unsigned long *,_SECURITY_ATTRIBUTES *,unsigned long);
	unsigned long CreateUserKey(unsigned short const *,unsigned long,unsigned long *,_SECURITY_ATTRIBUTES *,unsigned long);
	unsigned long GetNextSubKey(unsigned short * *,unsigned long *);
	unsigned long OpenKey(HKEY__ *,unsigned short const *,unsigned long,unsigned short const *);
	unsigned long OpenUserKey(unsigned short const *,unsigned long);
	unsigned long ReadRegDWord(unsigned short const *,unsigned long *);
	unsigned long RecurseDeleteKey(unsigned short const *);
	virtual ~CRegistry();
	void ReleaseMemory();
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
	static long DuplicateClientToken(void *,void * *);
	static long GetClientSessionId(long *);
	static long GetClientToken(void * *,int);
	static long GetSessionFromRpcClientId(ITSSession * *);
	static long MIDL_str_dup(unsigned short * *,unsigned __int64,unsigned short const *);
	static void DumpRpcCaller(char const *,unsigned long volatile &,_EVENT_DESCRIPTOR const &);
};

class CSCMNotify
{
	long Initialize();
	long QueueEvent(unsigned long,__PTSSessInfo *);
	static void staticSCMNotificationThread(_TP_CALLBACK_INSTANCE *,void *,_TP_WAIT *,long);
	void SCMNotificationWorker();
public:
	CSCMNotify(long *);
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
	virtual ~CSCMNotify();
};

class CSLQuery
{
	static int bAppServerAllowed;
	static int bInitialized;
	static int bServerSku;
	static unsigned long ulMaxDebugSessions;
public:
	static long GetMaxDebugSessions(unsigned long *);
	static long Initialize();
	static long IsChildSessionsEnabled(int *);
};

struct CSafeListTree<CConnectionManagerItem>
{
	int Lookup(CConnectionManagerItem *,CConnectionManagerItem * *);
	long Add(CConnectionManagerItem *);
	long GetAllEntries(SmartArray<CConnectionManagerItem,unsigned long> *);
};

class CService
{
protected:
	long CreateRCMReadyEvent();
	long ResetRegKeyValues();
	long SetTermSrvReadyEvent();
	long Stop();
	long TestDelaySetReadyEvent();
	long TestLSMStarted();
	static unsigned long ServiceCtrlHandler(unsigned long,unsigned long,void *,void *);
public:
	long Initialize();
	long Start();
	static unsigned short const * const SERVICE_NAME;
	~CService();
};

class CServicesSessionFilter
{
	CServicesSessionFilter();
public:
	static long GetInstanceOfServicesSessionFilter(ISessionEnumFilter * *);
	virtual long Test(ITSSession *);
};

struct CServicesTerminal
{
	virtual long Connected(ITSSession *);
	virtual long Disconnected(ITSSession *);
	virtual long DoConnect(_TERMINAL_CONNECTMSG *,ITSSession *,unsigned __int64,unsigned long);
	virtual long DoDisconnect(unsigned long);
	virtual long DoTerminate();
	virtual long GetActivityId(_GUID *);
	virtual long GetClientAddress(unsigned short * const);
	virtual long GetClientName(unsigned short * const);
	virtual long GetClientTimeZone(IUserName *,_TS_DYNAMIC_TIME_ZONE_INFORMATION *);
	virtual long GetLicenseType(_GUID *);
	virtual long GetParent(unsigned short * const,long *);
	virtual long GetProtocolName(unsigned short * const);
	virtual long GetSecurityDescriptor(unsigned char * *,unsigned long *);
	virtual long GetSessionInitialProgram(unsigned short * const);
	virtual long GetTerminalInformation(unsigned short * const,unsigned char * *,unsigned long *);
	virtual long GetTerminalName(unsigned short * const);
	virtual long GetTerminalType(_GUID *,unsigned long *);
	virtual long GetTerminalTypeExtended(_GUID *,unsigned long *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0004 *,_GUID *);
	virtual long LoggedOn(IUserName *);
	virtual long NotifyCommandProcessCreated(unsigned short * const);
	virtual long PrepareForSessionArbitration(IUserName *);
	virtual long SetSecurityDescriptor(unsigned char *,unsigned long);
};

class CSessionArbitrationDefault
{
protected:
	long HandleReconnectDialogResponse();
	long HandleSessionBumpingDialogResponse();
	long LogoffSession(long);
	long PrepareContinueRequest();
	long PrepareReconnectRequest(long *,unsigned long);
	long PrepareRequest(WINLOGON_ACTION_CODE,unsigned long,long *,unsigned long);
	long PrepareTerminateRequest();
	long PrepareTerminateRequest(long);
	long ProceedWithNewSession();
	long TryToReconnectToSession(long);
	virtual long HandleFirstCall();
public:
	CSessionArbitrationDefault();
	virtual long GetRequestForWinlogon(_TS_WINLOGON_REQUEST *,int *);
	virtual long Initialize(IUserName *,IUserName *);
	virtual long SetWinlogonReply(_TS_WINLOGON_REPLY *);
	virtual ~CSessionArbitrationDefault();
};

struct CSessionArbitrationFactory
{
	static long GetInstanceOfSessionArbitration(int,_GUID *,IUserName *,IUserName *,ISessionArbitration * *);
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

class CSessionArbitrationWorker
{
	virtual long HandleFirstCall();
};

struct CSessionList
{
	struct CSessionEnum
	{
		virtual long AddFilter(ISessionEnumFilter *);
		virtual long Enum(ITSSession * *);
		virtual long FilterByLicenseType(_GUID *);
		virtual long FilterByReconCompat(_GUID *);
		virtual long FilterBySessionType(_GUID *);
		virtual long FilterByState(__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,int);
		virtual long FilterByUserName(IUserName *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long Reset();
		virtual long Test(ITSSession *);
	};

	CSessionList(long *);
	long Add(ITSUnknown *);
	long Remove(long);
	virtual long FindSessionById(long,ITSSession * *);
	virtual long GetInstanceOfEnum(ISessionEnum * *);
	virtual ~CSessionList();
};

class CSessionManager
{
	class CRestrictedCalls
	{
		long OpenAndSignalEvent(unsigned short const *,int);
	public:
		virtual long DuplicateHandleInPid(unsigned __int64,unsigned long,unsigned __int64 *,unsigned long);
		virtual long NotifyVCEvents(int,long);
		virtual long PopSecurityDialog(long);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long ValidateLogonCert(unsigned short const *,unsigned __int64 *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	long GetGlobalSettings(unsigned short * const,unsigned long *);
	static long volatile numInstances;
	virtual long GetInstanceOfSessionInternal(ITSSession * *,ITerminal *,ITSUnknown *,long);
	virtual long IgnoreProtocolCompatibility(int *);
public:
	CSessionManager(long *);
	virtual long DisableConnectionManager(_GUID const &);
	virtual long GetAllConnectionManagers(IConnectionManager * * *,unsigned long *);
	virtual long GetInitialConsoleSessionId(long *);
	virtual long GetInstanceOfEventDispatcher(ITSEventDispatcher * *);
	virtual long GetInstanceOfRestrictedCalls(IRestrictedCalls * *);
	virtual long GetInstanceOfSession(ITSSession * *,ITerminal *,ITSUnknown *);
	virtual long GetInstanceOfTSCounters(ITSCounters * *);
	virtual long GetRpcClientTrackerMgr(ITSRpcClientTrackerMgr * *);
	virtual long GetSessionList(ISessionList * *);
	virtual long GetTSInstanceId(unsigned short * const);
	virtual long IsSystemShuttingDown(int *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RegisterWaitForServiceStateChange(_GUID const &);
	virtual long Shutdown();
	virtual long StartConnectionManager(_GUID const &,int);
	virtual long StopConnectionManager(_GUID const &);
	virtual long SystemShutdownStarted();
	virtual ~CSessionManager();
};

class CSessionTerminateHandler
{
	static void staticInitialCommandProcessWaitCallback(void *,unsigned char);
	static void staticWindowManagerProcessWaitCallback(void *,unsigned char);
	static void staticWindowsSubSysProcessWaitCallback(void *,unsigned char);
public:
	long StartWait(ICsrEventSink *,void *,void *,long);
	void StopWait(int);
};

struct CStoredItem
{
	CStoredItem(_GUID const &,ITSUnknown *);
};

class CTSCounters
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

	void StateTransition(ITSSession *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
public:
	CTSCounters(ISessionManager *,long *);
	virtual long getActive(unsigned long *);
	virtual long getDisconnected(unsigned long *);
	virtual long getDisconnections(unsigned long *);
	virtual long getLocalLogons(unsigned long *);
	virtual long getLoggedOn(unsigned long *);
	virtual long getPending(unsigned long *);
	virtual long getReconnections(unsigned long *);
	virtual long getRemoteLogons(unsigned long *);
	virtual long getSession0Logons(unsigned long *);
	virtual long getTerminating(unsigned long *);
	virtual long getTotal(unsigned long *);
	virtual long getTotalLogons(unsigned long *);
};

struct CTSObject<IGlassTerminalPrivate>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSObject<ISessionArbitration>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSObject<ISessionEnumFilter>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSObject<ISessionList>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSObject<ISessionManagerInternal>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSObject<ITSCounters>
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

struct CTSObject<ITSNotifySink>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSObject<ITSObjectStorage>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSObject<ITSPluginMgr>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSObject<ITSRpcClientTrackerMgr>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSObject<ITSSessionAttribute>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSObject<ITSSessionPrivate>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSObject<ITempGlassTerminal>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSObject<ITerminal>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSObject<IUnknown>
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
};

class CTSPerfProvider
{
	static _PERF_COUNTERSET_INSTANCE * pInstance;
	static int bInitialized;
	static long volatile ActiveSessions;
	static long volatile InactiveSessions;
	static long volatile TotalSessions;
public:
	static long Initialize();
	static void Cleanup();
};

class CTSPluginMgr
{
	static __PluginModule * g_LSMPlugin;
public:
	virtual long Destroy();
	virtual long Initialize();
};

struct CTSPrivateObject<ICsrMgr>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<ICsrPipe>
{
	CTSPrivateObject<ICsrPipe>(char const *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<IGlassTerminalPrivate>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<IPrivateRpc>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<IPublicNotification>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<IPublicNotificationCallback>
{
	CTSPrivateObject<IPublicNotificationCallback>(char const *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<IPublicRpc>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<ISessionArbitration>
{
	CTSPrivateObject<ISessionArbitration>(char const *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<ISessionEnum>
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

struct CTSPrivateObject<ISessionList>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<ISessionManagerInternal>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<ITSCounters>
{
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
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<ITSNotifySink>
{
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

struct CTSPrivateObject<ITSPluginMgr>
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

struct CTSPrivateObject<ITSSessionAttribute>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CTSPrivateObject<ITSSessionPrivate>
{
	unsigned long InternalRelease();
public:
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<ITempGlassTerminal>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<ITerminal>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<IUnknown>
{
	CTSPrivateObject<IUnknown>(char const *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<IUserName>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<IWinlogonNotify>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSPrivateObject<IWorkerTerminal>
{
	CTSPrivateObject<IWorkerTerminal>(char const *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CTSRpcClientTrackerMgr
{
	CTSRpcClientTrackerMgr(long *);
	virtual long ReleaseTracker(unsigned __int64);
	virtual long TrackCaller(long,unsigned __int64 *);
};

class CTSSecurityDescriptor
{
protected:
	long CopySource(unsigned short const *,unsigned short * *);
	long CreateDefault(void * *);
	long GetCurrentProcessSid(void * *);
	long GetSDValueFromRegistry(unsigned short const *,unsigned short const *,unsigned char * *,unsigned long *);
public:
	long AccessCheck(unsigned long);
	long AccessCheck(void *,unsigned long);
	long AddUserAce(void *,unsigned long);
	long Initialize(unsigned short const *,void *);
	long InitializeFromBlob(void *);
	long RemoveUserAce(IUserName *);
	virtual ~CTSSecurityDescriptor();
};

struct CTSSendCSRMsgMonitor
{
	CTSSendCSRMsgMonitor(_GUID *,long,ITSSession *,_EVENT_DESCRIPTOR,char const *,unsigned long);
	virtual void TimerExpired();
	virtual ~CTSSendCSRMsgMonitor();
};

class CTSSession
{
	struct CCommonSessionData
	{
		struct CShadowPipe
		{
			virtual long GetScreenSize(unsigned long *,unsigned long *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual long SendPassthruDisable(unsigned long);
			virtual long SendPassthruEnable(unsigned long);
			virtual long SendShadowCleanup(unsigned char *,unsigned long,unsigned long);
			virtual long SendShadowConnect(_TERMINAL_CONNECTMSG *,unsigned long);
			virtual long SendShadowDisconnect(unsigned long);
			virtual long SendShadowSetup(unsigned long);
			virtual long SendShadowStart(unsigned char *,unsigned long,unsigned long);
			virtual long SendShadowStop(unsigned long);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		long Start(ICsrEventSink *,unsigned short const *);
		long Stop();
		virtual long GetCsrssProcessId(unsigned long *);
		virtual long GetId(long *);
		virtual long getShadowPipe(IShadowPipe * *);
		virtual ~CCommonSessionData();
	};

	struct CCsrEventSink
	{
		virtual long OnBrokenConnection(unsigned long,unsigned long);
		virtual long OnCsrssConnect();
		virtual long OnCsrssDisconnect();
		virtual long OnSessionTerminated(ICsrEventSink::SessionTerminateReasonCode);
		virtual long OnShadowHotkey();
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	struct CSessionReconnectController
	{
		long TryApplyTerminalToSession(__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0004,_GUID &);
	};

	struct CState
	{
		__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001 ChangeState(__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0002,unsigned long *,_LARGE_INTEGER *,unsigned long);
		long CheckState(__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0002);
	};

	class CTSSessionAttribute
	{
		void Cleanup();
	public:
		CTSSessionAttribute(_GUID &,long);
		virtual long Add(unsigned char *,unsigned long);
		virtual long Compare(ITSSessionAttribute *,unsigned long *);
		virtual long Get(unsigned char * *,unsigned long *);
		virtual long GetAttributeType(_GUID *);
	};

	int IsSafeToDisconnect(int);
	long AuditEvent(unsigned long,ITerminal *);
	long ConnectToTerminal(ITerminal *,unsigned long,int);
	long DisconnectSession(unsigned long,unsigned long,ITerminal * *);
	long GetSessionDialogObject(void * *);
	long InitializeNotifyInfo(__PTSSessInfo *);
	long LogSessionEvent(_EVENT_DESCRIPTOR const &,ITerminal *);
	long NotifySuperfetch();
	long OnBrokenConnectionEx(unsigned long,unsigned long,unsigned long);
	long OnCsrssConnect();
	long OnCsrssDisconnect();
	long OnSessionTerminated(int);
	long OnShadowStart();
	long OnShadowStop();
	long ReadSecurityDescriptor(unsigned char *,unsigned long);
	long ReleaseNotifyInfo(__PTSSessInfo *);
	long SendSessionNotificationMsg(TSSessionNotification);
	long SetTimeZone();
	long SetTimeZoneInternalNoLock(ICsrPipe *,ITerminal *,IUserName *);
	long TerminateSession(CConvertibleLock &);
	long UpdateDomainUsernameString();
	long WinLogonSendMessage(unsigned long,unsigned long);
	static long ConfigurePerSessionSecurity(long,void *);
	static long staticDecoupledDisconnect(void *,void *);
	virtual long OnBrokenConnection(unsigned long,unsigned long);
	virtual long OnShadowHotkey();
	virtual void SetReconnectTargetId(long);
	void LogFailedTransition(__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0002,long);
public:
	CTSSession(ITSNotifySink *,CSessionList *,ITerminal *,long *,ITSUnknown *,long);
	virtual int IsSessionProtocolCompatible(ITSSession *);
	virtual long AccessCheck(unsigned long,IUserName *);
	virtual long AccessCheckEx(unsigned long,IUserName *,int);
	virtual long Connect(ITSSession *);
	virtual long ConnectTerminal();
	virtual long DeleteSessionAttribute(_GUID *);
	virtual long Disconnect(unsigned long,ITerminal * *);
	virtual long DisconnectEx(unsigned long,unsigned long,ITerminal * *);
	virtual long DisplayIOCtl(unsigned char *,unsigned long);
	virtual long EndSessionArbitration(void *,WINLOGON_ACTION_CODE);
	virtual long GetActivityId(_GUID *);
	virtual long GetCacheCsrPipe(ICsrPipe * *);
	virtual long GetCsrPipe(ICsrPipe * *);
	virtual long GetParent(ITSSession * *);
	virtual long GetParentSessionId(long *);
	virtual long GetProtocol(unsigned long *);
	virtual long GetReconnectId(long *);
	virtual long GetSecurityDescriptor(unsigned short * *,unsigned char * *,unsigned long *);
	virtual long GetSessionAttribute(_GUID *,int,ITSSessionAttribute * *);
	virtual long GetSessionGuid(_GUID *);
	virtual long GetSessionInitialProgram(unsigned short * const);
	virtual long GetTSInstanceId(unsigned short * const);
	virtual long GetTimes(__int64 *,__int64 *,__int64 *);
	virtual long IsDescendant(ITSSession *,int *);
	virtual long IsLockedByLSM(int *);
	virtual long IsServicesAccessAllowed(TServicesSessionAccess *);
	virtual long LockDesktopAndConnect(ITSSession *,ITerminal * *);
	virtual long Logoff(unsigned long);
	virtual long LogoffEx(unsigned long);
	virtual long NonDelegatingQueryInterface(_GUID const &,void * *);
	virtual long OnDesktopLock();
	virtual long OnDesktopUnlock();
	virtual long OnEndShell();
	virtual long OnLogoff();
	virtual long OnLogon(void *);
	virtual long OnStartScreenSaveAsUser();
	virtual long OnStartShell();
	virtual long OnStopScreenSaveAsUser();
	virtual long OnWinlogonCreate();
	virtual long OnWinlogonTerminate();
	virtual long PostWindowMessage(HWND__ *,unsigned int,unsigned __int64,__int64);
	virtual long PrepareForSessionArbitration(void *);
	virtual long Reconnect(ITerminal *,int);
	virtual long ReconnectEx(ITerminal *,unsigned long,int);
	virtual long RedrawRectangle(long,long,long,long);
	virtual long RedrawScreen();
	virtual long SetAllowServicesAccess(TServicesSessionAccess);
	virtual long SetTerminal(ITerminal *);
	virtual long ShowMessageBox(unsigned short const *,unsigned short const *,unsigned long,unsigned long,unsigned long *,int,int);
	virtual long ShowMessageBoxClassic(unsigned short const *,unsigned short const *,unsigned long,unsigned long,unsigned long *,int,int);
	virtual long ShowMessageBoxImmersive(unsigned short const *,unsigned short const *,unsigned long,unsigned long,unsigned long *,int,int);
	virtual long Start(long,unsigned short const *,unsigned long,unsigned char *);
	virtual long StopScreenUpdates();
	virtual long getChildSessionId(long *);
	virtual long getCsrssProcessId(unsigned long *);
	virtual long getCurrentSessionReconnectInfo(__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0003 *,_GUID *);
	virtual long getEventDispatcher(ITSEventDispatcher * *);
	virtual long getId(long *);
	virtual long getSessionType(_GUID *);
	virtual long getShadowPipe(IShadowPipe * *);
	virtual long getState(__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001 *);
	virtual long getTerminal(ITerminal * *);
	virtual long getUserName(IUserName * *);
	virtual long setChildSessionId(long);
	virtual long setShadowEvents(IShadowPipe_IEvents *);
	virtual long setShadowState(int);
	virtual ~CTSSession();
};

class CTSSessionSecurityDescriptor
{
protected:
	long CreateAppContainerSD();
public:
	long AccessCheck(void *,long,unsigned long,int);
	long AddUserAce(IUserName *);
	long Initialize(unsigned short const *,void *);
	virtual ~CTSSessionSecurityDescriptor();
	void * DetachSD();
	void Attach(unsigned short *,void *);
	void AttachSD(void *);
};

struct CTSSessionTrace
{
	CTSSessionTrace(char const *,ITSSession *);
	virtual long GetErrorLogDetail(unsigned long,char *,unsigned long);
	virtual ~CTSSessionTrace();
};

struct CTSTerminalOpsMonitor
{
	CTSTerminalOpsMonitor(_GUID *,long,ITSSession *,_EVENT_DESCRIPTOR,char const *,unsigned long);
	virtual void TimerExpired();
	virtual ~CTSTerminalOpsMonitor();
};

class CTSUnknown<IGlassTerminalPrivate>
{
protected:
	CTSUnknown<IGlassTerminalPrivate>(char const *,ITSUnknown *);
public:
	virtual long NonDelegatingQueryInterface(_GUID const &,void * *);
	virtual long QueryInterface(_GUID const &,void * *);
};

class CTSUnknown<ITSPluginMgr>
{
protected:
	CTSUnknown<ITSPluginMgr>(char const *,ITSUnknown *);
public:
	virtual long NonDelegatingQueryInterface(_GUID const &,void * *);
	virtual long QueryInterface(_GUID const &,void * *);
};

class CTSUnknown<ITSSessionPrivate>
{
protected:
	CTSUnknown<ITSSessionPrivate>(char const *,ITSUnknown *);
public:
	virtual long NonDelegatingQueryInterface(_GUID const &,void * *);
	virtual long QueryInterface(_GUID const &,void * *);
};

class CTSUnknown<ITempGlassTerminal>
{
protected:
	CTSUnknown<ITempGlassTerminal>(char const *,ITSUnknown *);
public:
	virtual long NonDelegatingQueryInterface(_GUID const &,void * *);
	virtual long QueryInterface(_GUID const &,void * *);
};

class CTSUnknown<ITerminal>
{
protected:
	CTSUnknown<ITerminal>(char const *,ITSUnknown *);
public:
	virtual long NonDelegatingQueryInterface(_GUID const &,void * *);
	virtual long QueryInterface(_GUID const &,void * *);
};

struct CTSUnknown<IWorkerTerminal>
{
	virtual long QueryInterface(_GUID const &,void * *);
};

class CTempGlassTerminal
{
	static CCSLockEx g_staticTempGlassCSLock;
	static ITempGlassTerminal * g_staticTempGlassTerminal;
	static long GetInstanceOfObject(__CreateSessionParm *,ITempGlassTerminal * *);
	virtual long NonDelegatingQueryInterface(_GUID const &,void * *);
public:
	CTempGlassTerminal(__CreateSessionParm *,long *);
	virtual long Connected(ITSSession *);
	virtual long Disconnected(ITSSession *);
	virtual long DoConnect(_TERMINAL_CONNECTMSG *,ITSSession *,unsigned __int64,unsigned long);
	virtual long DoDisconnect(unsigned long);
	virtual long DoTerminate();
	virtual long ForceDestroy(unsigned long);
	virtual long GetActivityId(_GUID *);
	virtual long GetClientAddress(unsigned short * const);
	virtual long GetClientName(unsigned short * const);
	virtual long GetClientTimeZone(IUserName *,_TS_DYNAMIC_TIME_ZONE_INFORMATION *);
	virtual long GetLicenseType(_GUID *);
	virtual long GetParent(unsigned short * const,long *);
	virtual long GetProtocolName(unsigned short * const);
	virtual long GetSecurityDescriptor(unsigned char * *,unsigned long *);
	virtual long GetSessionInitialProgram(unsigned short * const);
	virtual long GetTempSession(ITSSession * *);
	virtual long GetTerminalInformation(unsigned short * const,unsigned char * *,unsigned long *);
	virtual long GetTerminalName(unsigned short * const);
	virtual long GetTerminalType(_GUID *,unsigned long *);
	virtual long GetTerminalTypeExtended(_GUID *,unsigned long *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0004 *,_GUID *);
	virtual long LoggedOn(IUserName *);
	virtual long NotifyCommandProcessCreated(unsigned short * const);
	virtual long PrepareForSessionArbitration(IUserName *);
	virtual long SetSecurityDescriptor(unsigned char *,unsigned long);
	virtual long SetTempSession(ITSSession *);
	virtual ~CTempGlassTerminal();
};

struct CTerminalTypeHelper
{
	static int IsSessionCompatible(_GUID,_GUID,int *);
	static long GetSessionSource(_GUID,_SESSIONSOURCE *);
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

struct CUtility
{
	static int IsConsoleSessionCreatedBySmss();
};

class CUtils
{
	static int bIsAppCompat;
	static long AddAccessToDirectoryObjects(void *,unsigned long,void *);
	static long IsTokenSid(void *,void *);
	static unsigned long DecoupledCallback(void *);
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
	static int IsKernelDebuggerAttached();
	static int IsTerminalCompatibleToSession(__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0003,_GUID const &,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0004,_GUID const &,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0003 *,_GUID *);
	static int SelfRelativeToAbsoluteSD(void *,void * *,unsigned long *);
	static int TerminateAllProcessesInSession(unsigned long,unsigned long);
	static long AddAccessToDirectory(unsigned short const *,unsigned long,void *);
	static long AddAceToSecurityDescriptor(void * *,unsigned long,void *,unsigned char);
	static long ConvertUuidToString(_GUID *,unsigned long,unsigned short *);
	static long CopyTSRpcStringToString(_TS_RPC_STRING *,unsigned short * *);
	static long CreateAdminSid(void * *);
	static long CreateAppContainerSid(void * *);
	static long CreateLPACCapabilitySid(void * *);
	static long CreateNetworkServiceSid(void * *);
	static long CreateSystemSid(void * *);
	static long DecoupleCall(long (*)(void *,void *),void *,void *,unsigned long);
	static long EnableChildSessionsCredentialsDelegationPolicy(int);
	static long EnableChildSessionsPolicy(int);
	static long EnableCreateSessionSupport();
	static long GetComputerNameW(unsigned short *,unsigned long *);
	static long GetInstanceOfUserName(IUserName * *);
	static long GetUserSessionId(void *,long *);
	static long Initialize();
	static long IsAppServerInstalled(int &);
	static long IsCallerAdmin();
	static long IsCallerSystem();
	static long IsChildSessionsPolicyEnabled(int *);
	static long StartServiceW(unsigned short const *,unsigned long,int);
	static long ValidTerminalToGeneric(_GUID const &,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0004,_GUID const &,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0003 *,_GUID *);
	static long ValidTerminalToHybrid(_GUID const &,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0004,_GUID const &,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0003 *);
	static void CleanupSD(void *);
	static void DebugBreakIfAskedEx(unsigned short *,unsigned short *);
	static void Destroy();
};

struct CWPPConfig
{
	long Initialize();
	long Refresh();
	~CWPPConfig();
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

class CWinlogonNotify
{
	class CUserEnvironment
	{
		static long staticDeleteEnvVarKey(long);
		static long staticSetEnvVarInRegistry(long,unsigned short const *,unsigned short const *);
	public:
		static long staticDeleteUserEnvironment(ITSSession *);
		static long staticUpdateUserEnvironment(ITSSession *,long,int);
		virtual long OnConnected(__PTSSessInfo *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	static long volatile numInstances;
	static unsigned long staticOnEndShell(void *,_SN_ONENDSHELL_PARAMS *);
	static unsigned long staticOnLock(void *,_SN_ONLOCK_PARAMS *);
	static unsigned long staticOnLogoff(void *,_SN_ONLOGOFF_PARAMS *);
	static unsigned long staticOnLogon(void *,_SN_ONLOGON_PARAMS *);
	static unsigned long staticOnStartScreenSaveAsUser(void *,_SN_ONSTARTSCREENSAVERASUSER_PARAMS *);
	static unsigned long staticOnStartShell(void *,_SN_ONSTARTSHELL_PARAMS *);
	static unsigned long staticOnStopScreenSaveAsUser(void *,_SN_ONSTOPSCREENSAVERASUSER_PARAMS *);
	static unsigned long staticOnUnlock(void *,_SN_ONUNLOCK_PARAMS *);
	static unsigned long staticOnWinlogonCreate(void *,_SN_ONCREATESESSION_PARAMS *);
	static unsigned long staticOnWinlogonTerminate(void *,_SN_ONTERMINATESESSION_PARAMS *);
public:
	CWinlogonNotify(long *);
	virtual void Stop();
	virtual ~CWinlogonNotify();
};

struct CWinlogonReply
{
	virtual long GetResult(unsigned long *);
	virtual long GetSelectedSessionId(long *);
};

struct CWinlogonRequest
{
	long Initialize(WINLOGON_ACTION_CODE,unsigned long,long *,unsigned long);
	virtual long CopyRequest(_TS_WINLOGON_REQUEST *);
	virtual long GetActionCode(WINLOGON_ACTION_CODE *);
	virtual long GetFlags(unsigned long *);
	virtual long GetNumberOfSessions(unsigned long *);
};

class CWorkerTerminal
{
	static long volatile WorkerTerminalCount;
	virtual long NonDelegatingQueryInterface(_GUID const &,void * *);
	void CleanupWorkerTerminal();
public:
	CWorkerTerminal(unsigned char *,unsigned long,unsigned char *,unsigned long,unsigned long,_LUID,long *);
	static long GetInstanceOfWorkerTerminal(unsigned char *,unsigned long,unsigned char *,unsigned long,unsigned long,_LUID,ITerminal * *);
	virtual long Connected(ITSSession *);
	virtual long Disconnected(ITSSession *);
	virtual long DoConnect(_TERMINAL_CONNECTMSG *,ITSSession *,unsigned __int64,unsigned long);
	virtual long DoDisconnect(unsigned long);
	virtual long DoTerminate();
	virtual long GetActivityId(_GUID *);
	virtual long GetClientAddress(unsigned short * const);
	virtual long GetClientName(unsigned short * const);
	virtual long GetClientTimeZone(IUserName *,_TS_DYNAMIC_TIME_ZONE_INFORMATION *);
	virtual long GetGpuLuid(_LUID *);
	virtual long GetLicenseType(_GUID *);
	virtual long GetParent(unsigned short * const,long *);
	virtual long GetProtocolName(unsigned short * const);
	virtual long GetSecurityDescriptor(unsigned char * *,unsigned long *);
	virtual long GetSessionInitialProgram(unsigned short * const);
	virtual long GetTerminalInformation(unsigned short * const,unsigned char * *,unsigned long *);
	virtual long GetTerminalName(unsigned short * const);
	virtual long GetTerminalType(_GUID *,unsigned long *);
	virtual long GetTerminalTypeExtended(_GUID *,unsigned long *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0004 *,_GUID *);
	virtual long GetUserInformation(unsigned char * *,unsigned long *,unsigned char * *,unsigned long *);
	virtual long LoggedOn(IUserName *);
	virtual long NotifyCommandProcessCreated(unsigned short * const);
	virtual long PrepareForSessionArbitration(IUserName *);
	virtual long SetSecurityDescriptor(unsigned char *,unsigned long);
	virtual ~CWorkerTerminal();
};

class CrimsonHelper
{
	static CrimsonHelper s_instance;
	unsigned long RaiseEventInternal(_EVENT_DESCRIPTOR const &,unsigned long,_EVENT_DATA_DESCRIPTOR * const);
public:
	CrimsonHelper();
	unsigned long RaiseEvent<char const *,unsigned short *,unsigned long,unsigned long>(_EVENT_DESCRIPTOR const &,char const *,unsigned short *,unsigned long,unsigned long);
	unsigned long RaiseEvent<char const *,unsigned short const *,unsigned long,unsigned long>(_EVENT_DESCRIPTOR const &,char const *,unsigned short const *,unsigned long,unsigned long);
	unsigned long RaiseEvent<long,long>(_EVENT_DESCRIPTOR const &,long,long);
	unsigned long RaiseEvent<long,unsigned long,unsigned long,unsigned short const *>(_EVENT_DESCRIPTOR const &,long,unsigned long,unsigned long,unsigned short const *);
	unsigned long RaiseEvent<long,unsigned long,unsigned long>(_EVENT_DESCRIPTOR const &,long,unsigned long,unsigned long);
	unsigned long RaiseEvent<unsigned short *,long,unsigned short *>(_EVENT_DESCRIPTOR const &,unsigned short *,long,unsigned short *);
	unsigned long RaiseEvent<unsigned short *,long>(_EVENT_DESCRIPTOR const &,unsigned short *,long);
	unsigned long RaiseEvent<unsigned short const *,long>(_EVENT_DESCRIPTOR const &,unsigned short const *,long);
	unsigned long RaiseEvent<unsigned short const *>(_EVENT_DESCRIPTOR const &,unsigned short const *);
	~CrimsonHelper();
};

class DynArray<SmartArray<CConnectionManagerItem,unsigned long>::CCleanType,unsigned long>
{
protected:
	virtual int Grow(unsigned long);
public:
	virtual int Add(SmartArray<CConnectionManagerItem,unsigned long>::CCleanType &);
	virtual int AddAt(unsigned long,SmartArray<CConnectionManagerItem,unsigned long>::CCleanType &);
	virtual int GetAt(unsigned long,SmartArray<CConnectionManagerItem,unsigned long>::CCleanType *);
	virtual unsigned long GetArraySize();
	virtual unsigned long GetSize();
	virtual void SetSize(unsigned long);
};

class DynArray<SmartArray<CCsrPipe,long>::CCleanType,long>
{
protected:
	virtual int Grow(long);
public:
	virtual int Add(SmartArray<CCsrPipe,long>::CCleanType &);
	virtual int AddAt(long,SmartArray<CCsrPipe,long>::CCleanType &);
	virtual int GetAt(long,SmartArray<CCsrPipe,long>::CCleanType *);
	virtual long GetArraySize();
	virtual long GetSize();
	virtual void SetSize(long);
};

class DynArray<SmartArray<CNtNotifySessionChange,unsigned long>::CCleanType,unsigned long>
{
protected:
	virtual int Grow(unsigned long);
public:
	virtual int Add(SmartArray<CNtNotifySessionChange,unsigned long>::CCleanType &);
	virtual int AddAt(unsigned long,SmartArray<CNtNotifySessionChange,unsigned long>::CCleanType &);
	virtual int GetAt(unsigned long,SmartArray<CNtNotifySessionChange,unsigned long>::CCleanType *);
	virtual unsigned long GetArraySize();
	virtual unsigned long GetSize();
	virtual void SetSize(unsigned long);
};

class DynArray<SmartArray<ISessionEnumFilter,unsigned int>::CCleanType,unsigned int>
{
protected:
	virtual int Grow(unsigned int);
public:
	virtual int Add(SmartArray<ISessionEnumFilter,unsigned int>::CCleanType &);
	virtual int AddAt(unsigned int,SmartArray<ISessionEnumFilter,unsigned int>::CCleanType &);
	virtual int GetAt(unsigned int,SmartArray<ISessionEnumFilter,unsigned int>::CCleanType *);
	virtual unsigned int GetArraySize();
	virtual unsigned int GetSize();
	virtual void SetSize(unsigned int);
};

class DynArray<SmartArray<ITSSession,long>::CCleanType,long>
{
protected:
	virtual int Grow(long);
public:
	virtual int Add(SmartArray<ITSSession,long>::CCleanType &);
	virtual int AddAt(long,SmartArray<ITSSession,long>::CCleanType &);
	virtual int GetAt(long,SmartArray<ITSSession,long>::CCleanType *);
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

class ICsrMgr
{
	static ICsrMgr * pGlobalInstance;
public:
	static long GetInstanceOfCsrMgr(ICsrMgr * *);
};

struct IGlassTerminalPrivate
{
	static long PreCreateGlassReplacementSession(__CreateSessionParm *,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,unsigned long,long *,_GUID *);
};

class IPrivateRpc
{
	static IPrivateRpc * pGlobalInstance;
public:
	static long GetInstanceOfPrivateRpc(IPrivateRpc * *);
};

struct IPublicNotification
{
	static long GetInstanceOfNotification(IPublicNotification * *,unsigned long,int);
};

class IPublicRpc
{
	static IPublicRpc * pGlobalInstance;
public:
	static long GetInstanceOfPublicRpc(IPublicRpc * *);
};

class ISessionManagerInternal
{
	static ISessionManagerInternal * pSMGlobalInstance;
public:
	static long GetInstanceOfSessionManagerInternal(ISessionManagerInternal * *);
	static long OpenNtSessionHandle(long,void * *);
};

struct ITSPluginMgr
{
	static long GetInstanceOfPluginMgr(ITSPluginMgr * *);
};

struct ITSRpcClientTrackerMgr
{
	static long GetInstanceOfObject(ITSRpcClientTrackerMgr * *);
};

struct ITSSessionPrivate
{
	static long GetInstanceOfTSSession(ITSNotifySink *,CSessionList *,ITerminal *,ITSUnknown *,long,ITSSession * *);
};

struct IWinlogonNotify
{
	static long GetInstanceOfWinlogonNotify(IWinlogonNotify * *);
};

struct SP<unsigned char,SP_HLOCAL<unsigned char> >
{
	unsigned char * GetPtrAs<unsigned char>();
	unsigned long * GetPtrAs<unsigned long>();
	void Attach(unsigned char *);
	void Reset();
};

class ServicesSessionAccessTracker
{
	ServicesSessionAccessTracker();
	static ServicesSessionAccessTracker s_instance;
public:
	int IsAccessAllowed();
	~ServicesSessionAccessTracker();
};

struct SmartArray<CConnectionManagerItem,unsigned long>
{
	int GetAt(unsigned long,CConnectionManagerItem * *);
	void Empty();
	~SmartArray<CConnectionManagerItem,unsigned long>();
};

struct SmartArray<CCsrPipe,long>
{
	int AddAt(long,CCsrPipe *);
	int GetAt(long,CCsrPipe * *);
};

struct SmartArray<CNtNotifySessionChange,unsigned long>
{
	int AddAt(unsigned long,CNtNotifySessionChange *);
	int GetAt(unsigned long,CNtNotifySessionChange * *);
};

struct SmartArray<ISessionEnumFilter,unsigned int>
{
	~SmartArray<ISessionEnumFilter,unsigned int>();
};

struct SmartArray<ITSSession,long>
{
	int AddAt(long,ITSSession *);
};

struct SmartHANDLE
{
	void operator=(void *);
};

struct SmartPtr<CConnectionManagerItem>
{
	SmartPtr<CConnectionManagerItem> & operator=(CConnectionManagerItem *);
	~SmartPtr<CConnectionManagerItem>();
};

struct SmartPtr<CCsrPipe>
{
	SmartPtr<CCsrPipe> & operator=(CCsrPipe *);
	~SmartPtr<CCsrPipe>();
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

struct SmartPtr<CKernelNotify>
{
	SmartPtr<CKernelNotify> & operator=(CKernelNotify *);
};

struct SmartPtr<CNtNotifySessionChange>
{
	SmartPtr<CNtNotifySessionChange> & operator=(CNtNotifySessionChange *);
	~SmartPtr<CNtNotifySessionChange>();
};

struct SmartPtr<CSessionArbitrationHelper>
{
	SmartPtr<CSessionArbitrationHelper> & operator=(CSessionArbitrationHelper *);
};

struct SmartPtr<CSessionList>
{
	SmartPtr<CSessionList> & operator=(CSessionList *);
};

struct SmartPtr<CStoredItem>
{
	~SmartPtr<CStoredItem>();
};

struct SmartPtr<CWinlogonReply>
{
	SmartPtr<CWinlogonReply> & operator=(CWinlogonReply *);
};

struct SmartPtr<CWinlogonRequest>
{
	SmartPtr<CWinlogonRequest> & operator=(CWinlogonRequest *);
};

struct SmartPtr<IConnectionManager>
{
	SmartPtr<IConnectionManager> & operator=(IConnectionManager *);
	~SmartPtr<IConnectionManager>();
};

struct SmartPtr<ICsrEventSink>
{
	SmartPtr<ICsrEventSink> & operator=(ICsrEventSink *);
	~SmartPtr<ICsrEventSink>();
};

struct SmartPtr<ICsrMgr>
{
	~SmartPtr<ICsrMgr>();
};

struct SmartPtr<ICsrPipe>
{
	SmartPtr<ICsrPipe> & operator=(ICsrPipe *);
	~SmartPtr<ICsrPipe>();
};

struct SmartPtr<IGlassTerminal>
{
	~SmartPtr<IGlassTerminal>();
};

struct SmartPtr<IPrivateRpc>
{
	SmartPtr<IPrivateRpc> & operator=(IPrivateRpc *);
};

struct SmartPtr<IPublicNotification>
{
	SmartPtr<IPublicNotification> & operator=(IPublicNotification *);
	~SmartPtr<IPublicNotification>();
};

struct SmartPtr<IPublicRpc>
{
	SmartPtr<IPublicRpc> & operator=(IPublicRpc *);
	~SmartPtr<IPublicRpc>();
};

struct SmartPtr<ISessionArbitration>
{
	SmartPtr<ISessionArbitration> & operator=(ISessionArbitration *);
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
	~SmartPtr<ISessionList>();
};

struct SmartPtr<ISessionManager>
{
	SmartPtr<ISessionManager> & operator=(ISessionManager *);
	~SmartPtr<ISessionManager>();
};

struct SmartPtr<ISessionManagerInternal>
{
	SmartPtr<ISessionManagerInternal> & operator=(ISessionManagerInternal *);
	~SmartPtr<ISessionManagerInternal>();
};

struct SmartPtr<ITSEventDispatcher>
{
	~SmartPtr<ITSEventDispatcher>();
};

struct SmartPtr<ITSEventDispatcher_ITSEvent>
{
	~SmartPtr<ITSEventDispatcher_ITSEvent>();
};

struct SmartPtr<ITSNotifySink>
{
	~SmartPtr<ITSNotifySink>();
};

struct SmartPtr<ITSRpcClientTrackerMgr>
{
	SmartPtr<ITSRpcClientTrackerMgr>(ITSRpcClientTrackerMgr *);
	~SmartPtr<ITSRpcClientTrackerMgr>();
};

struct SmartPtr<ITSSession>
{
	SmartPtr<ITSSession> & operator=(ITSSession *);
	SmartPtr<ITSSession>(ITSSession *);
	~SmartPtr<ITSSession>();
};

struct SmartPtr<ITSSessionPrivate>
{
	~SmartPtr<ITSSessionPrivate>();
};

struct SmartPtr<ITempGlassTerminal>
{
	SmartPtr<ITempGlassTerminal> & operator=(ITempGlassTerminal *);
	~SmartPtr<ITempGlassTerminal>();
};

struct SmartPtr<ITerminal>
{
	SmartPtr<ITerminal> & operator=(ITerminal *);
	~SmartPtr<ITerminal>();
};

struct SmartPtr<IUnknown>
{
	SmartPtr<IUnknown> & operator=(IUnknown *);
	~SmartPtr<IUnknown>();
};

struct SmartPtr<IUserName>
{
	SmartPtr<IUserName> & operator=(IUserName *);
	~SmartPtr<IUserName>();
};

struct SmartPtr<IWinlogonNotify>
{
	SmartPtr<IWinlogonNotify> & operator=(IWinlogonNotify *);
	~SmartPtr<IWinlogonNotify>();
};

struct SmartPtr<IWorkerTerminal>
{
	~SmartPtr<IWorkerTerminal>();
};

struct StateTracker<unsigned long>
{
	unsigned long operator=(unsigned long);
};

AuthzWrapper g_authzWrapper;
CObjectTracker * g_pObjectTracker;
CRDSAppXLSMPlugin * g_pAppXPlugin;
CService * _pService;
CWPPConfig g_wppConfig;
HINSTANCE__ * g_hUserEnvDll;
__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001 GetNewState(__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001,__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0002);
__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001 PublicToPrivateState(long);
char (* g_DbgTrace)[80];
char const * * CSR_LPC_NAME;
char const * const _TRACE_PREFIX;
int (* pfn_GetProfileType)(unsigned long *);
int AllowGlassTerminal();
int CompareSessionLogonTime(void const *,void const *);
int IsConsole(ITSSession *);
int IsProcessUserService(void *);
int IsVmBusPresent();
int g_bCaptureObjectStackTrace;
int g_bDebugSpew;
long CheckAccessToSession(ITSSession *,unsigned long,int);
long CheckCallerCredibility(ITSSession *);
long CheckUserPassword(ITSSession *,unsigned short const *);
long GetAppReadinessDirectory(unsigned short *,unsigned __int64);
long GetCommonSessionInformation(void *,long,ITSSession * *);
long GetInstanceOfSessionArbitrator(int,void *,ISessionArbitration * *);
long LogArbitrationForSession(int,void *);
long LsmUnhandledExceptionFilter(_EXCEPTION_POINTERS *);
long NotifySessionArbitrationCompleted(void *,_TS_WINLOGON_REQUEST *);
long PrivateSessionTypeToPublicSessionType(ITSSession *,unsigned long *);
long PrivateToPublicState(__MIDL___MIDL_itf_lsminterfacesdef_0000_0001_0001);
long StringCbLengthW(unsigned short const *,unsigned __int64,unsigned __int64 *);
long StringCbPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long StringCchCopyA(char *,unsigned __int64,char const *);
long StringCchCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchLengthW(unsigned short const *,unsigned __int64,unsigned __int64 *);
long StringCchPrintfA(char *,unsigned __int64,char const *,...);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long TerminateProcesses(unsigned long,unsigned long,unsigned char);
long UserSidToRecoveryFileName(unsigned short const *,unsigned short * *);
unsigned long ControlCallback_tsperf_1(unsigned long,void *,unsigned long);
unsigned long ConvertHRESULT2WIN32(long);
unsigned long g_DbgTracePos;
unsigned long g_DebugSpewTraceLevel;
unsigned long g_DebugTraceComponent;
unsigned short const * * LsmEventNames;
unsigned short const * * LsmStateNames;
unsigned short const * GetLsmEventName(int);
unsigned short const * GetLsmStateName(int);
unsigned short const * GetWTSNotifyNames(unsigned long);
void * MemoryAlloc(unsigned __int64);
void * operator new(unsigned __int64);
void AuditEvent(unsigned long,unsigned short const *,unsigned short const *,unsigned short const *,void *);
void MIDL_free_EXECENVDATAEX(_EXECENVDATAEX *,unsigned long);
void MemoryFree(void *);
void NotifyCallback(void *);
void ServiceMain(unsigned long,unsigned short * *);
void _DbgPrintMessage(int,char const *,...);
void operator delete(void *);
