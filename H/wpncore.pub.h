class AFCListener
{
protected:
	long Cleanup();
	long OnCDPUserServiceReady();
	static long RegisterWithAFC(Microsoft::Windows::Internal::PushNotifications::Owner<unsigned int,std::chrono::duration<__int64,std::ratio<1,1> > >::WeakRef &,AFCListener *);
public:
	AFCListener();
	virtual long OnActivityCreated(ICDPActivity *);
	virtual long OnActivityDismissed(ICDPActivity *);
	virtual long OnActivityUpdated(ICDPActivity *);
	virtual long RuntimeClassInitialize(NotificationPlatform *);
	virtual ~AFCListener();
	void Refresh();
};

namespace ARI
{
	namespace ProcessToken
	{
		struct AutoSysAppId
		{
			long Close();
		};

		namespace SysAppId
		{
			long GetAppUserModelId(_TOKEN_SECURITY_ATTRIBUTE_V1 const *,unsigned int,unsigned int *,unsigned short *);
			long GetPackageFamilyName(_TOKEN_SECURITY_ATTRIBUTE_V1 const *,unsigned int,unsigned int *,unsigned short *);
			long GetPackageRelativeApplicationId(_TOKEN_SECURITY_ATTRIBUTE_V1 const *,unsigned int,unsigned int *,unsigned short *);
			long Open(void *,_TOKEN_SECURITY_ATTRIBUTES_INFORMATION * *,_TOKEN_SECURITY_ATTRIBUTE_V1 const * *,bool *);
		};

	};

	void Free(void *);
};

class AppEndpoint
{
	long AddScheduledNotification(unsigned short const *,unsigned short const *,Microsoft::Windows::Internal::PushNotifications::ScheduledNotification,_GUID *);
	long CancelToastInternal(unsigned short const *,unsigned long);
	long CheckCloudCapabilities(unsigned short const *,unsigned short const *);
	long CheckForWnpProtocolUpgrade(WPN_CHANNEL_INFO *,bool *);
	long CheckSettingEnabled(unsigned short const *,unsigned short const *,unsigned long,int *,unsigned long *);
	long ClearNotificationsInternal(unsigned short const *,unsigned short const *,unsigned long);
	long ClearUserNotifications(bool,unsigned long);
	long CloseChannelInternal(unsigned short const *,unsigned short const *,unsigned short const *);
	long CreateChannelRequestHelper(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,IWpnChannelRequest *,bool *,bool *,bool *);
	long CreateChannelRequestInternal(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,IWpnChannelRequest *);
	long CreateEventForApp(WpnBackgroundTriggerType,unsigned short const *,unsigned short const *,_GUID *);
	long CreateEventForAppInternal(WpnBackgroundTriggerType,unsigned short const *,unsigned short const *,_GUID *);
	long DeleteEventForAppInternal(unsigned short const *,unsigned short const *,_GUID const *);
	long Disconnect();
	long DoCallbackWithCachedUri(unsigned short const *,unsigned short const *,IWpnChannelRequest *,WPN_CHANNEL_INFO *);
	long EnableNotificationQueueInternal(unsigned short const *,unsigned short const *,int);
	long GetAllToasts(_WPN_TOAST_NOTIFICATION * *,unsigned long *);
	long GetAppToastMirroringSettingHelper(unsigned short const *,int,int *);
	long GetAppToastMuteSettingHelper(unsigned short const *,int *);
	long GetScheduledNotifications(Microsoft::Windows::Internal::PushNotifications::ScheduledNotificationList &,unsigned short const *,unsigned short const *);
	long Initialize(unsigned short const *);
	long PostNotificationHelper(Notification *,TransientNotificationDetails *,__MIDL___MIDL_itf_wpnplatform_0000_0004_0004,IWpnToastFeedback *);
	long PostNotificationInternal(Notification *,TransientNotificationDetails *,__MIDL___MIDL_itf_wpnplatform_0000_0004_0004,IWpnToastFeedback *);
	long QueryConnectionStatusInternal(unsigned short const *,unsigned short const *,int *);
	long RegisterDesktopApplicationIfApplicable(unsigned short const *,unsigned short const *,__MIDL___MIDL_itf_wpnplatform_0000_0004_0004,bool *,INotificationHandler * *);
	long RemoveNotificationsInternal(unsigned short const *,unsigned short const *,unsigned long,unsigned short const *,unsigned short const *);
	long RemoveScheduledNotification(unsigned short const *,unsigned short const *,Microsoft::Windows::Internal::PushNotifications::ScheduledNotificationCookie);
	long SetAppToastMirroringSettingHelper(unsigned short const *,int,int);
	long SetAppToastMuteSettingHelper(unsigned short const *,int);
	long SetSinkInternal(AppEndpoint::InternalSink,unsigned short const *,unsigned short const *);
	long UseCachedChannelUri(WPN_CHANNEL_INFO *,bool *);
public:
	virtual long AddScheduledTile(unsigned short const *,unsigned short const *,_WPN_SCHEDULED_TILE *,_GUID *);
	virtual long AddScheduledToast(unsigned short const *,unsigned short const *,_WPN_SCHEDULED_TOAST *,_GUID *);
	virtual long CancelToast(unsigned short const *,unsigned long);
	virtual long ClearNotifications(unsigned short const *,unsigned short const *,unsigned long);
	virtual long ClearUserNotification(unsigned long);
	virtual long ClearUserNotifications();
	virtual long CloseChannel(unsigned short const *,unsigned short const *,unsigned short const *);
	virtual long CreateChannelRequest(unsigned short const *,unsigned short const *,IWpnChannelRequest *);
	virtual long CreateEventForApp(unsigned short const *,unsigned short const *,_GUID *);
	virtual long CreateNotificationChangedEventForApp(unsigned short const *,unsigned short const *,unsigned long,_GUID *);
	virtual long CreatePhoneLegacyChannelRequest(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,IWpnChannelRequest *);
	virtual long CreateSecondaryChannelRequest(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,IWpnChannelRequest *);
	virtual long CreateToastActionEventForApp(unsigned short const *,unsigned short const *,_GUID *);
	virtual long CreateToastHistoryChangedEventForApp(unsigned short const *,unsigned short const *,_GUID *);
	virtual long DeleteEventForApp(unsigned short const *,unsigned short const *,_GUID const *);
	virtual long DeleteNotificationChangedEventForApp(unsigned short const *,unsigned short const *,_GUID const *);
	virtual long DeleteToastHistoryChangedEventForApp(unsigned short const *,unsigned short const *,_GUID const *);
	virtual long EnableNotificationQueue(unsigned short const *,unsigned short const *,int);
	virtual long GetAllNotifications(unsigned short const *,INotificationCollection * *);
	virtual long GetAppToastMirroringMasterSetting(int *);
	virtual long GetAppToastMirroringSetting(unsigned short const *,int,int *);
	virtual long GetAppToastMuteSetting(unsigned short const *,int *);
	virtual long GetNotificationsForApp(unsigned short const *,unsigned short const *,INotificationCollection * *);
	virtual long GetScheduledTiles(unsigned short const *,unsigned short const *,_WPN_SCHEDULED_TILE_LIST * *);
	virtual long GetScheduledToasts(unsigned short const *,unsigned short const *,_WPN_SCHEDULED_TOAST_LIST * *);
	virtual long GetToastsForApp(unsigned short const *,unsigned short const *,_WPN_TOAST_NOTIFICATION * *,unsigned long *,_WPN_TOAST_NOTIFICATION_CONDENSED * *,unsigned long *);
	virtual long GetUserNotification(unsigned long,_WPN_USER_NOTIFICATION *);
	virtual long GetUserNotifications(unsigned long,_WPN_USER_NOTIFICATION * *,unsigned long *);
	virtual long PostNotification(unsigned short const *,unsigned short const *,unsigned long,__MIDL___MIDL_itf_wpnplatform_0000_0004_0004,unsigned short const *,unsigned short const *,unsigned short const *,_WPN_FILE_TIME,unsigned long,int,unsigned short const *,IWpnToastFeedback *,_GUID *,int,unsigned long *);
	virtual long PostNotification2(unsigned short const *,unsigned short const *,unsigned long,__MIDL___MIDL_itf_wpnplatform_0000_0004_0004,unsigned short const *,unsigned short const *,unsigned short const *,_WPN_FILE_TIME,unsigned long,int,unsigned short const *,IWpnToastFeedback *,_GUID *,int,unsigned long,unsigned short const *,unsigned long *);
	virtual long PostNotification3(IWpnNotification *,ITransientNotificationDetails *,__MIDL___MIDL_itf_wpnplatform_0000_0004_0004,IWpnToastFeedback *,unsigned long *);
	virtual long QueryConnectionStatus(unsigned short const *,unsigned short const *,int *);
	virtual long QuerySettings(unsigned short const *,unsigned short const *,unsigned long,int *,unsigned long *);
	virtual long RegisterNotificationSink(unsigned short const *,IWpnNotificationFeedback *);
	virtual long RemoveNotifications(unsigned short const *,unsigned short const *,unsigned long,unsigned short const *,unsigned short const *);
	virtual long RemoveScheduledTile(unsigned short const *,unsigned short const *,_GUID);
	virtual long RemoveScheduledToast(unsigned short const *,unsigned short const *,_GUID);
	virtual long ResetPeriodicUpdate(unsigned short const *,unsigned short const *,unsigned long,int);
	virtual long SetAppToastMirroringMasterSetting(int);
	virtual long SetAppToastMirroringSetting(unsigned short const *,int,int);
	virtual long SetAppToastMuteSetting(unsigned short const *,int);
	virtual long SetConnectionStatusSink(unsigned short const *,unsigned short const *,IWpnConnectionStatusSink *);
	virtual long SetNotificationSink(unsigned short const *,unsigned short const *,IWpnNotificationSink *);
	virtual long SetPeriodicUpdate(unsigned short const *,unsigned short const *,unsigned long,unsigned short const * *,unsigned int,__MIDL___MIDL_itf_wpnplatform_0000_0004_0003,_WPN_FILE_TIME,int);
	virtual long UpdateNotificationData(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,IWpnNotificationData *);
	virtual long ValidateApp(unsigned short const *,unsigned short const *);
};

struct AppInfoCallback
{
	long GetAppList(__MIDL___MIDL_itf_wpnplatform_0000_0023_0002 * *);
	virtual long NextAppEntry(WPN_APPDB_APP_ENTRY *);
};

struct ApplicationResumeWork
{
	long SetAppUserModelId(unsigned short const *);
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
	virtual ~ApplicationResumeWork();
};

class ApplicationStateChangeHandler
{
	virtual ~ApplicationStateChangeHandler();
public:
	ApplicationStateChangeHandler();
	long StartProcessingChanges();
	virtual long OnApplicationStateChanged(unsigned short const *,PLM_STATE_CHANGE);
	void StopProcessingChanges();
};

struct AssetCollection
{
	AssetCollection();
	virtual long add_Asset(IHandlerAsset *);
	virtual long get_At(unsigned long,IHandlerAsset * *);
	virtual long get_Count(unsigned long *);
	void AddAsset(unsigned short const *,unsigned short const *,unsigned short const *);
};

struct AutoAddToCache
{
	AutoAddToCache(std::shared_ptr<Database>,char const *);
	void AddToCache();
	void Reset();
	~AutoAddToCache();
};

class BackgroundActivation
{
	long AddPersistedItem(WpnBackgroundTriggerType,void *,_GUID const *,IAppInfo *);
	long AddToBrokerInfra(WpnBackgroundTriggerType,unsigned short const *,unsigned short const *,unsigned long,_GUID *);
	long AddToList(WpnBackgroundTriggerType,unsigned short const *,_GUID const &);
	long CreateActivationBiEvent(WpnBackgroundTriggerType,unsigned short const *,unsigned short const *,unsigned long,_GUID *);
	long DeleteBiEvent(_GUID const *,_LIST_ENTRY *);
	long GetEventTypeGuid(WpnBackgroundTriggerType,_GUID * const);
	long LoadPersistedEvents(WpnBackgroundTriggerType);
	long UnblockRawNotificationDelivery(unsigned short const *);
protected:
	virtual long ActivateWorkItem(WpnBackgroundTriggerType,unsigned short const *,void *,unsigned long,unsigned long,_GUID const *);
public:
	long ActivateRawNotificationWorkItem(INotificationHandler *,Notification *,_GUID);
	long ActivateToastActionWorkItem(unsigned short const *,unsigned short const *,unsigned short const * *,unsigned long);
	long ActivateToastHistoryChangedWorkItem(unsigned short const *,ToastHistoryChangedTypeEnum);
	long DeleteEventForApp(unsigned short const *,_GUID const *);
	long DeleteEventsForApp(unsigned short const *);
	long Initialize(NotificationPlatform *,bool);
	virtual ~BackgroundActivation();
};

class BackgroundApplicationPolicyManager
{
	long InitializeWnfCallbacks();
	long OnWnfEvent(_WNF_STATE_NAME * const,void const *);
	long QuietHoursUpdate(_BI_SESSION_QUIET_MODE_NOTIFICATION * const);
	long SubmitUnblockToastWork();
public:
	int IsQuietHours(int *);
	static long WnfCallback(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
	virtual ~BackgroundApplicationPolicyManager();
};

class BinaryStatusSet
{
	long CreateBuffer(unsigned int,unsigned int *,unsigned short * *);
public:
	long Expand(unsigned int);
	long GetFree(unsigned int *);
	long Init(unsigned int);
	long SetFree(unsigned int);
	long SetUsed(unsigned int);
	void CommitExpansion();
	void RevertExpansion();
	~BinaryStatusSet();
};

class BlockedRawChannels
{
	long BlockUnblockHelper(unsigned short const *,int,int);
	long RemoveChannel(unsigned short const *);
public:
	long BlockChannel(unsigned short const *);
	long UnblockChannel(unsigned short const *,int);
	long UnblockChannelForApplication(unsigned short const *);
	virtual ~BlockedRawChannels();
};

class CBaseRPCTimeout
{
	static void s_Callback(void *,unsigned char);
public:
	void Disarm();
};

struct CRPCTimeout
{
	CRPCTimeout(unsigned long);
	~CRPCTimeout();
};

struct CSimplePointerArrayCoTaskMem<unsigned short,CSimpleArrayStandardCompareHelper<unsigned short *> >
{
	~CSimplePointerArrayCoTaskMem<unsigned short,CSimpleArrayStandardCompareHelper<unsigned short *> >();
};

class CTCoAllocPolicy
{
	static unsigned __int64 _CoTaskMemSize(void *);
public:
	static long Alloc(void *,unsigned long,unsigned __int64,void * *);
	static long Realloc(void *,unsigned long,void *,unsigned __int64,void * *);
};

struct CTSimpleArray<unsigned short *,4294967294,CTPolicyCoTaskMem<unsigned short *>,CSimpleArrayStandardCompareHelper<unsigned short *>,CSimpleArrayStandardMergeHelper<unsigned short *> >
{
	void RemoveAll();
};

class CToastBackgroundActivation
{
	bool CleanupTimer(CToastHistoryChangeTimer *);
	long SetTimer(unsigned short const *,ToastHistoryChangedTypeEnum,int);
	static void ToastTimerCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
	void DeleteAllTimers();
protected:
	virtual void OnTriggerBackgroundTask(CToastHistoryChangeTimer *);
public:
	CToastBackgroundActivation();
	long Shutdown();
	virtual ~CToastBackgroundActivation();
};

struct CToastHistoryChangeTimer
{
	long CancelTimer();
	long DeleteTimer();
	long SetTimer(void (*)(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *));
	void ExecuteBackgroundTask(BackgroundActivation *);
};

struct CacheEntry
{
	~CacheEntry();
};

class CacheManager
{
	int IsCacheExpired(_FILETIME *);
	long CreateCacheContainer(unsigned short const *);
	long CreateCacheDirectory(unsigned short const *);
	long GetCachePath(unsigned short *,unsigned long *);
	long RefreshTotalCacheSize();
	unsigned short * GetPrefixedUrl(unsigned short const *,unsigned __int64 *);
	void BuildFileList(_LIST_ENTRY *);
	void FillImageCacheInfo(_LIST_ENTRY *,unsigned __int64 *);
	void ScavengeGarbage(_LIST_ENTRY *);
	void ScheduleIdleTask();
	void UpdateEntry(unsigned short const *,unsigned long,CacheEntry *);
public:
	long Initialize(unsigned short const *,unsigned long,ThreadPool *,ITileQueueManager *,IPlatformConfigurationProvider *);
	virtual long ClearAll();
	virtual long ClearApp(unsigned short const *);
	virtual long CreateEntry(unsigned short const *,unsigned long,unsigned long,unsigned long,unsigned short const *,unsigned short const *,_FILETIME *);
	virtual long DeleteEntry(unsigned short const *);
	virtual long GetLocalPath(unsigned short const *,unsigned short *);
	virtual long LookupUrl(unsigned short const *,unsigned long,unsigned short const *,unsigned short * *,int *,unsigned long *,int *);
	virtual void Scavenge();
	virtual ~CacheManager();
};

class CacheMetadataStorage
{
	long GetKeyNameFromUrl(unsigned short const *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	long GetUrlCacheEntryInfo(RegistryHelper *,CacheEntry &);
public:
	long CommitUrlCacheEntry(unsigned short const *,unsigned short const *,_FILETIME,unsigned long,unsigned long,unsigned short const *,unsigned long);
	long CreateUrlCacheContainer(unsigned short const *,unsigned short const *,unsigned short const *,unsigned long);
	long CreateUrlCacheEntry(unsigned short const *,unsigned short const *,unsigned short *);
	long DeleteUrlCacheEntry(unsigned short const *,unsigned short const *);
	long FindFirstUrlCacheEntry(CacheEntry &,void * &,bool &);
	long FindNextUrlCacheEntry(CacheEntry &,void * &,bool &);
	long GetUrlCacheEntryInfo(unsigned short const *,CacheEntry &);
	long SetUrlCacheEntryInfo(unsigned short const *,CacheEntry *);
	virtual ~CacheMetadataStorage();
};

namespace CallerIdentity
{
	bool g_fRuntimeBrokerProcessIdInitialize;
	long GetCallerProcessImageName(unsigned short *,unsigned long *);
	long GetCallingProcessAppId(unsigned short * *);
	long GetCallingProcessHandle(unsigned long,RUNTIMEBROKER_CALLERIDENTITY_CHECK,void * *);
	long GetPackageFullNameFromProcess(void *,unsigned short * *);
	long GetPackageInfoFromCurrentProcess(unsigned int,unsigned int *,PACKAGE_INFO * *);
	long GetPackageInfoFromPackageFullName(unsigned short const *,unsigned int,unsigned int *,PACKAGE_INFO * *);
	long GetPackageInfoFromPackageFullNameWithoutInProcessCache(unsigned short const *,unsigned int,unsigned int *,PACKAGE_INFO * *);
	long GetProcessAppId(void *,unsigned short * *);
	unsigned long g_dwRuntimeBrokerProcessId;
	void _EnsureRuntimeBrokerPID();
};

class ChannelRequestCompleteWork
{
protected:
	long AddChannelToTable(unsigned short const *,int,_WPN_FILE_TIME *,int *,unsigned long *);
public:
	long SetChannel(unsigned short const *);
	long SetCookie(unsigned long);
	long SetServerUri(unsigned short const *);
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
	virtual ~ChannelRequestCompleteWork();
};

struct ChannelRequests
{
	struct ChannelRequestInternal
	{
		ChannelRequestInternal & operator=(ChannelRequestInternal const &);
		~ChannelRequestInternal();
	};

	ChannelRequests();
	long AddRequest(IWpnChannelRequest *,unsigned short const *,int,int,unsigned long *);
	long CheckRequestPending(unsigned short const *,int *);
	long GetAndRemoveRequest(unsigned long,IWpnChannelRequest * *,unsigned short * *,int *,int *);
	long RemoveRequest(unsigned long);
};

struct CleanupBITSJobsWork
{
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
	virtual ~CleanupBITSJobsWork();
};

class ClearAllImageWork
{
	static long volatile s_ClearAllThreadRunning;
public:
	static long SubmitClearAllImageWork(NotificationPlatform *);
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
};

struct ClearAppToastRolloverWork
{
	long SetAppUserModelId(unsigned short const *);
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
	virtual ~ClearAppToastRolloverWork();
};

struct ClearAppToastsWork
{
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
	virtual ~ClearAppToastsWork();
};

struct ClearToastWork
{
	long Initialize(__MIDL___MIDL_itf_wpnplatform_0000_0014_0005 const *,unsigned long);
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
	virtual ~ClearToastWork();
};

struct ConfigureBatchingWork
{
	long SetBatchingState(__MIDL___MIDL_itf_wpntypes_0000_0000_0005);
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
};

struct ConfigureNotificationDeliveryWork
{
	ConfigureNotificationDeliveryWork();
	long GetAppUserModelId(unsigned short *,unsigned short * *);
	long SetChannelId(unsigned short const *);
	long SetEnabled(short);
	long SetPlatform(NotificationPlatform *);
	long SetType(__MIDL___MIDL_itf_wpntypes_0000_0000_0003);
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
	virtual ~ConfigureNotificationDeliveryWork();
};

struct ConfigureNotificationPolicyWork
{
	long SetEnabled(short);
	long SetType(__MIDL___MIDL_itf_wpntypes_0000_0000_0003);
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
};

class ConfigurePowerSaverWork
{
	void Reconnect();
	void UpdateServerExemptionList();
public:
	virtual bool Merge(ThrottledWorkItem *);
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
};

struct ConnectWork
{
	ConnectWork(ConnectionManagerPtr &,IResourceManager *,unsigned long);
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
};

class ConnectionManagerCallback
{
	long CreateAckResponse(__MIDL___MIDL_itf_wpntypes_0000_0000_0006,INotificationAckResponse * *);
	long GetAckResponse(INotificationHandler *,INotificationAckResponse * *);
	long GetHandlerFromChannelId(unsigned short const *,INotificationHandler * *);
	long SubmitConnectionStatusWork(__MIDL___MIDL_itf_wpninternal_0000_0000_0001);
	long SubmitNotificationAvailableWork(std::unique_ptr<NotificationDeliveryTransaction,std::default_delete<NotificationDeliveryTransaction> > &);
	static long CreateNotificationDeliveryTransaction(INotificationHandler *,NotificationPlatform *,unsigned long,double,unsigned short const *,unsigned __int64,__MIDL___MIDL_itf_wpntypes_0000_0000_0003,__MIDL___MIDL_itf_wpntypes_0000_0000_0004,double,unsigned short const *,unsigned short const *,unsigned short const *,unsigned long,int,unsigned short const *,unsigned char *,unsigned int,int,std::unordered_map<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::hash<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >,std::equal_to<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >,std::allocator<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > > &,std::unique_ptr<NotificationDeliveryTransaction,std::default_delete<NotificationDeliveryTransaction> > &);
protected:
	virtual long GetThreadPool(ThreadPool * *);
public:
	virtual long OnChannelReceived(long,long,unsigned short *,unsigned short *,double);
	virtual long OnConnectionChanged(__MIDL___MIDL_itf_wpninternal_0000_0000_0001);
	virtual long OnNotificationReceived(INotificationDataPackage *,INotificationAckResponse * *);
};

struct ConnectionManagerPtr
{
	long Initialize(NotificationPlatform *);
	operator bool();
	virtual ~ConnectionManagerPtr();
	void RefreshConnectionManager();
	void Reset();
	wil::com_ptr_t<IWpnInternalConnectionManager,wil::err_exception_policy> Get();
};

struct ConnectionStatusWork
{
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
};

class DataChangedEvent
{
	long InvokeCondensedToastChangedEvent(DataChangedEventType,INotificationCollection *);
	long InvokeToastChangedEvent(DataChangedEventType,WpnToastDismissReason,INotificationCollection *,WpnMirroringBehavior);
	long ScheduleToastClearedCallback(WpnToastDismissReason,INotificationCollection *,WpnMirroringBehavior);
	long ScheduleToastRolloverClearedCallback(unsigned short const *,INotificationCollection *);
public:
	DataChangedEvent();
	virtual long Invoke(DataChangedEventType,INotificationCollection *,WpnToastDismissReason,WpnMirroringBehavior);
};

class Database
{
	static Database::JournalMode StringToJournalMode(char const *);
	static Database::Synchronous StringToSynchronous(char const *);
	static char const * JournalModeToString(Database::JournalMode);
	static unsigned int CheckBusyStatements(sqlite3 *,bool);
public:
	static void CheckStatements(sqlite3 *);
	static void dal_exec(sqlite3 *,char const *,int (*)(void *,int,char * *,char * *),void *,char * *);
	static void dal_prepare_v2(sqlite3 *,char const *,int,sqlite3_stmt * *,char const * *);
	std::basic_string<char,std::char_traits<char>,std::allocator<char> > GetPragmaText(char const *);
	std::shared_ptr<Statement> ExecuteGetPragma(char const *,char const *);
	std::shared_ptr<Statement> Prepare(char const *);
	std::shared_ptr<Statement> PrepareFromCache(char const *);
	void AddToCache(std::shared_ptr<Statement>);
	void Close();
	void Commit();
	void Execute(char const *);
	void Open(char const *,Database::OpenFlags);
	void Open(unsigned short const *,Database::OpenFlags);
	void Rollback();
	void SetFileChunkSize(int);
	void SetJournalMode(Database::JournalMode);
	void SetLockingMode(Database::LockingMode);
	void SetPragma(char const *,__int64);
	void SetPragma(char const *,bool);
	void SetPragma(char const *,char const *);
	void SetSynchronous(Database::Synchronous);
	void SetWalFilesPersistence(char const *,Database::WalFilesPersistence);
	~Database();
};

class DatabaseMigrationHelper
{
	long MigrateBadge(INotificationHandler *);
	long MigrateCondensedToasts(INotificationHandler *);
	long MigrateTiles(INotificationHandler *);
	long MigrateToasts(INotificationHandler *);
public:
	DatabaseMigrationHelper(TileQueueManager *,INotificationDatabase *,IPlatformConfigurationProvider *);
	long Migrate();
	static long SetMigrationToCompleted(unsigned short const *);
	virtual long NextAppEntry(WPN_APPDB_APP_ENTRY *);
};

class DatabaseTQMAdaptor
{
	NotificationSource SourceFromOperation(OperationType);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > GetNotificationTypeName(__MIDL___MIDL_itf_wpntypes_0000_0000_0003);
	void AddRegistration(unsigned short const *,unsigned short const *,unsigned long,unsigned char *);
	void FillCoCondensedToastNotification(IWpnNotification *,_WPN_TOAST_NOTIFICATION_CONDENSED *);
	void FillCoToastNotification(IWpnNotification *,_WPN_TOAST_NOTIFICATION *);
	void FillCondensedToastNotification(IWpnNotification *,_WPN_TOAST_NOTIFICATION_CONDENSED *);
	void FillToastNotification(IWpnNotification *,_WPN_TOAST_NOTIFICATION *);
	void GetCoCondensedToastList(INotificationCollection *,_WPN_TOAST_NOTIFICATION_CONDENSED * *,unsigned long *);
	void GetCoToastList(INotificationCollection *,_WPN_TOAST_NOTIFICATION * *,unsigned long *);
	void GetCondensedToastList(INotificationCollection *,_WPN_TOAST_NOTIFICATION_CONDENSED * *,unsigned long *);
	void GetToastList(INotificationCollection *,_WPN_TOAST_NOTIFICATION * *,unsigned long *);
	void UpdateRegistration(unsigned short const *,unsigned short const *,unsigned long,unsigned long,_GUID const *,unsigned char *,INotificationHandler *);
public:
	virtual int ValidChannelsExist();
	virtual long AttachSessionToApp(unsigned short const *,unsigned long,unsigned long);
	virtual long CheckNotificationValidity(unsigned short const *,unsigned int,unsigned long *,int *);
	virtual long ClearAll();
	virtual long ClearTile(__MIDL___MIDL_itf_wpntypes_0000_0000_0003,unsigned short const *,unsigned long *);
	virtual long ClearToast(unsigned short const *,unsigned long,OperationType,__MIDL___MIDL_itf_wpnplatform_0000_0004_0006);
	virtual long ClearToastRolloverForApp(unsigned short const *);
	virtual long ClearToastsForApp(unsigned short const *,OperationType);
	virtual long CreateChannel(unsigned short const *,WPN_CHANNEL_INFO *);
	virtual long DetachSession(unsigned long);
	virtual long DetachSessionFromApp(unsigned short const *,unsigned long);
	virtual long DisableSetting(unsigned short const *,unsigned long);
	virtual long EnableSetting(unsigned short const *,unsigned long);
	virtual long EnumerateAll(IAppInfoCallback *);
	virtual long GetAppEntry(unsigned short const *,APPENTRY_LOCK_FLAGS,AppEntry * *);
	virtual long GetChannelForApp(unsigned short const *,WPN_CHANNEL_INFO *);
	virtual long GetCondencedToastsForApp(unsigned short const *,_WPN_TOAST_NOTIFICATION_CONDENSED * *,unsigned long *);
	virtual long GetSetting(unsigned short const *,unsigned long *);
	virtual long GetToastsForApp(unsigned short const *,_WPN_TOAST_NOTIFICATION * *,unsigned long *);
	virtual long LookupChannel(char const *,unsigned short * *,unsigned long *);
	virtual long ProcessNewNotification(WPN_NOTIFICATION *,unsigned long *);
	virtual long QueryPackageFullName(unsigned short const *,unsigned short * *);
	virtual long QueryPhoneVoipAgentId(unsigned short const *,_GUID *);
	virtual long QueryWNFEventName(unsigned short const *,unsigned char *);
	virtual long Register(unsigned short const *,unsigned short const *,unsigned long);
	virtual long RegisterPhoneVoip(unsigned short const *,_GUID const *);
	virtual long RegisterSystem(unsigned short const *,unsigned short const *,unsigned long,unsigned char *);
	virtual long RemoveChannel(unsigned short const *);
	virtual long RemoveToasts(unsigned short const *,unsigned short const *,unsigned short const *,OperationType);
	virtual long RequestAllCondensedToastNotificationsTest(_WPN_TOAST_NOTIFICATION_CONDENSED * *,unsigned long *);
	virtual long RequestAllToastNotifications(_WPN_TOAST_NOTIFICATION * *,unsigned long *,unsigned short const * * *,unsigned long *);
	virtual long RequestNotification(WPN_NOTIFICATION_REQUEST *);
	virtual long RetrieveAumIdsForPackage(unsigned short const *,std::vector<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > &);
	virtual long SwitchPrivilege(WPN_INSTANCE_PRIVILEGE);
	virtual long Unregister(unsigned short const *);
	virtual long UnregisterPhoneVoip(unsigned short const *);
	virtual long Update(unsigned short const *,unsigned short const *,unsigned long);
	virtual long UpdateChannel(unsigned short const *,WPN_CHANNEL_INFO *);
	virtual unsigned long GetNotificationTrackingId();
	virtual void DefragPersistentBuffer();
	virtual void IncrementTBT(unsigned __int64);
	virtual void QueryTBT(unsigned __int64 *);
	virtual void RemoveExpiredToasts();
	virtual void ResetTBT();
	virtual ~DatabaseTQMAdaptor();
};

class DebuggerSupportManager
{
	WPN_INSTANCE_TYPE IdentifyInstanceType(unsigned short const *);
	int TakeGlobalLockAcrossSessions(unsigned short const *);
public:
	virtual bool CheckForFullPrivilege();
	virtual void GetConfiguration(WPN_INSTANCE_TYPE *,WPN_INSTANCE_PRIVILEGE *);
	virtual ~DebuggerSupportManager();
};

struct DefaultPlatformConfigurationProvider
{
	virtual unsigned short const * GetRegistryRoot();
	virtual unsigned short const * GetRegistryRootForApplications();
	virtual unsigned short const * GetRegistryRootForFirstRun();
	virtual unsigned short const * GetRootPath();
};

class DefaultPlatformInstanceProvider
{
protected:
	static Microsoft::WRL::ComPtr<DefaultPlatformInstanceProvider> s_platformInstanceProvider;
	static Microsoft::WRL::ComPtr<DefaultPlatformInstanceProvider> s_platformInstanceProviderWeak;
	static Microsoft::WRL::Wrappers::CriticalSection s_platformInstanceProviderLock;
};

struct DisconnectWork
{
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
};

struct DownloadLaunchHelper
{
	long AddUrlToJob(unsigned int,unsigned long,unsigned short const *,unsigned short const *);
	long CreateJob(unsigned short const *,int,int,unsigned long,unsigned int,unsigned int *);
	void AssignDownloadSlotToJob(unsigned int,unsigned int);
	void InvalidateJob(unsigned int);
	void LaunchJobs(IImageDownload *,IImageRequest *);
	~DownloadLaunchHelper();
};

class DownloadTaskManager
{
	WPN_DOWNLOAD_TASK * LookupJob(_GUID const &);
	int ProcessJobSuccess(WPN_DOWNLOAD_TASK *,_GUID *,IBackgroundCopyJob *);
	long RetrieveBITS(IBackgroundCopyManager * *);
	long ScheduleBITSJob(unsigned int,__MIDL_IBackgroundCopyJob_0001,unsigned short const *,int,unsigned int,WPN_IMAGE_DOWNLOAD_ENTRY *,WPN_DOWNLOAD_TASK *,unsigned int);
	unsigned short MapDayMonthToWord(unsigned short const *);
	virtual ~DownloadTaskManager();
	void CleanOrphanJobs();
	void ConvertHttpExpiryToFiletime(IDM_HTTP_HEADER_PARSER_STATE_SET *,_FILETIME *);
	void ConvertHttpMaxAgeToFiletime(IDM_HTTP_HEADER_PARSER_STATE_SET *,_FILETIME *);
	void LogFailure(IBackgroundCopyError *,unsigned long,int,long);
	void ParseHttpHeader(IBackgroundCopyFile *,_FILETIME *);
	void ProcessHttpHeader(IBackgroundCopyJob *,unsigned int,WPN_IMAGE_DOWNLOAD_RESULT *);
	void ProcessJobError(WPN_DOWNLOAD_TASK *,_GUID *,IBackgroundCopyError *);
public:
	DownloadTaskManager();
	virtual long AcquireJobSlot(int,unsigned long,unsigned int *);
	virtual long CancelPendingTileJobs();
	virtual long CheckJobIsValid(_GUID *,int *);
	virtual long GetLaunchedTileJobs(unsigned int *,_GUID * *);
	virtual long Initialize(IImageDownloadSink *,IPdcController *);
	virtual long JobError(IBackgroundCopyJob *,IBackgroundCopyError *);
	virtual long JobModification(IBackgroundCopyJob *,unsigned long);
	virtual long JobTransferred(IBackgroundCopyJob *);
	virtual long LaunchJob(unsigned int,int,int,unsigned long,unsigned short const *,unsigned int,WPN_IMAGE_DOWNLOAD_ENTRY *,unsigned int);
	virtual long LazyCancelJobs(unsigned int,_GUID *);
	virtual long Shutdown();
};

struct DownloadTaskManagerFactory
{
	virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
	virtual long LockServer(int);
};

class EnergySaverAllowlistManager
{
	bool isPackageSpecialExempted(unsigned short const *,BACKGROUND_ACCESS_STATE);
	static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > GetPackageFamilyNameFromPackageFullName(unsigned short const *);
	static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > GetUserSidString();
	void UpdateServerExemptionList();
public:
	EnergySaverAllowlistManager();
	long IsAppAllowListed(unsigned short const *,int *);
	long RefreshEnergySaverAllowList();
	long RuntimeClassInitialize(NotificationPlatform *);
	long Shutdown();
	long get_AppAllowList(std::vector<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > &);
	virtual long BackgroundAccessStateChanged(unsigned short const *,unsigned short const *,BACKGROUND_ACCESS_STATE);
	virtual ~EnergySaverAllowlistManager();
};

struct ExpiredScheduledTileWork
{
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
	virtual ~ExpiredScheduledTileWork();
	void Add(_GUID *);
};

class GlobalSettingsImpl
{
	WPN_SETTING_POLICY PolicyLevelToWpnPolicy(PolicyLevel);
	bool IsToastCallbackRegistered(unsigned long *);
	long CleanupToastCallbacks(int *);
	long InitializeV2ProtocolEnableTimeStamp();
	long SubmitUpdateSettingsWork(GlobalSetting);
	void CheckSetting(GlobalSetting,unsigned long *,PolicyLevel *);
	void InitializeMirroringSetting();
	void InitializeMobileBroadbandSettings();
	void InitializePlatformGroupPolicySettings();
	void InitializePlatformPolicies();
	void InitializePlatformSettings();
	void InitializeToastWakeupTime();
	void LoadSettings(HKEY__ *,unsigned short const *,unsigned short const * *,unsigned __int64,unsigned long * *,unsigned __int64);
	void SqmAllowVoIPScreenOnSetting();
public:
	GlobalSettingsImpl();
	static unsigned short const * (* s_PlatformPolicies)[10];
	static unsigned short const * * s_PlatformPolicyKeys;
	static unsigned short const * * s_PlatformSettings;
	virtual long CheckMobileBroadbandPolicies(int *);
	virtual long Initialize();
	virtual long InvokeMobileBroadbandCallback();
	virtual long InvokeSettingsCallback(GlobalSetting);
	virtual long QueryToastWakeup(_WPN_FILE_TIME *);
	virtual long RefreshGroupPolicy();
	virtual long RegisterCallback(GlobalSetting,IWpnSettingCallback *,unsigned long *);
	virtual long SetToastWakeup(_WPN_FILE_TIME);
	virtual long UnregisterCallback(unsigned long);
	virtual long get_AppGrowthCount(unsigned short *);
	virtual long get_BatchingMode(unsigned long *);
	virtual long get_ConnectOnStartup(unsigned long *);
	virtual long get_DisableConnectionInLowPowerState(bool *);
	virtual long get_EnableFwdToCdp(bool *);
	virtual long get_ForegroundDownloadTimeout(unsigned long *);
	virtual long get_ImageCacheMaxSize(unsigned long *);
	virtual long get_InitialAppCount(unsigned short *);
	virtual long get_MirroringEnabledStatus(bool *);
	virtual long get_MobileBroadbandDates(_WPN_FILE_TIME *,_WPN_FILE_TIME *,WPN_MBB_DATE_SOURCE *);
	virtual long get_RequestChannelTimeout(unsigned long *);
	virtual long get_Setting(GlobalSetting,unsigned long *,PolicyLevel *);
	virtual long get_TileMaxDownloadSlot(unsigned long *);
	virtual long get_ToastMaxDownloadSlot(unsigned long *);
	virtual long get_UriCacheTime(unsigned long *);
	virtual long get_V2ProtocolEnableTimeStamp(_WPN_FILE_TIME *);
	virtual long put_MirroringEnabledStatus(bool);
	virtual long put_MobileBroadbandLastResetDate(_WPN_FILE_TIME);
	virtual long put_MobileBroadbandNextResetDate(_WPN_FILE_TIME,WPN_MBB_DATE_SOURCE);
	virtual long put_Setting(GlobalSetting,unsigned long,PolicyLevel);
	virtual void ClearToastWakeup();
};

class GroupPolicyHandler
{
	long SubmitConfigureNotificationPolicyWork(__MIDL___MIDL_itf_wpntypes_0000_0000_0003);
public:
	long WindowMessageCallback(unsigned __int64,__int64);
};

struct HandlerAsset
{
	HandlerAsset();
	long RuntimeClassInitialize(IHandlerAsset *);
	long RuntimeClassInitialize(unsigned short const *,unsigned short const *,unsigned short const *);
	virtual long get_AssetKey(unsigned short * *);
	virtual long get_AssetValue(unsigned short * *);
	virtual long get_HandlerKey(unsigned short * *);
};

struct IGlobalSettings
{
	virtual ~IGlobalSettings();
};

struct IPersistenceManager
{
	virtual ~IPersistenceManager();
};

struct IResourceManager
{
	virtual ~IResourceManager();
};

struct IStatistics
{
	virtual ~IStatistics();
};

class IdleTaskEndpointImpl
{
	virtual ~IdleTaskEndpointImpl();
public:
	IdleTaskEndpointImpl(IPlatformConfigurationProvider *);
	virtual long FlushNotificationData(int);
	virtual long Invoke();
};

struct ImageDownloadCompleteWork
{
	long SetResultSet(unsigned long,WPN_IMAGE_DOWNLOAD_RESULT *);
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
	virtual ~ImageDownloadCompleteWork();
};

struct ImageDownloadSink
{
	virtual long ImageDownloadComplete(unsigned short const *,int,unsigned __int64,unsigned long,WPN_IMAGE_DOWNLOAD_RESULT *);
};

class ImageRequestManager
{
	int ProcessNextUrl(unsigned char,unsigned short,DownloadLaunchHelper *,WPN_IMAGE_REQUEST_ENTRY *,unsigned int,int *);
	int ProcessToastInitialBatch(unsigned int,WPN_TOAST_IMAGE_REQUEST *);
	int ProcessToastNextUrl(DownloadLaunchHelper *,TOAST_IMAGE_REQUEST_ENTRY *);
	long CheckUrl(unsigned short const *);
	long InvokeCallbackHelper(WpnCallbackReference *,unsigned long,__MIDL___MIDL_itf_wpnplatform_0000_0010_0004 *);
	long ProcessNextRequest(DownloadLaunchHelper *);
	void CleanupTileImageUrl(unsigned long,WPN_TILE_IMAGE_REQUEST *);
	void FinishRequestEntryWithAPIError(WPN_IMAGE_REQUEST_ENTRY *,long);
	void FinishRequestEntryWithInternetIncapable(WPN_IMAGE_REQUEST_ENTRY *);
	void FinishTileUrlEntryWithComplete(unsigned __int64,long,unsigned long,unsigned short *);
	void FinishToastUrlEntryWithComplete(unsigned __int64,long,unsigned long,unsigned short *);
	void FinishUrlEntryWithComplete(WpnCallbackReference *,long,unsigned long,unsigned int,unsigned long,unsigned short *,WPN_IMAGE_REQUEST_ENTRY *);
	void InvokeCallback(WpnCallbackReference *,WPN_IMAGE_REQUEST_ENTRY *,unsigned long);
	void InvokeCallbackUrl(WpnCallbackReference *,WPN_IMAGE_REQUEST_ENTRY *,WPN_IMAGE_URL_ENTRY *,unsigned long);
	void ProcessInitialBatch();
	void ProcessInitialUrlEntry(TILE_IMAGE_DOWNLOAD_IDENTIFIER,WPN_IMAGE_REQUEST_ENTRY *);
	void ProcessRequestEntryWithPowerSave(WPN_IMAGE_REQUEST_ENTRY *);
	void ProcessToastNextRequest(DownloadLaunchHelper *);
	void ScheduleNextRequest();
public:
	ImageRequestManager(NotificationPlatform *);
	long CancelTileJobs();
	long Initialize();
	virtual bool QueryImageDownloadStatus(bool *);
	virtual long CancelPendingAndScheduleNext(unsigned int,_GUID *);
	virtual long ImageDownloadCompleted(unsigned short const *,int,__int64,unsigned int,WPN_IMAGE_DOWNLOAD_RESULT *);
	virtual long InitiateTileRequest(WPN_TILE_IMAGE_REQUEST *);
	virtual long InitiateToastRequest(WPN_TOAST_IMAGE_REQUEST *);
	virtual unsigned long GenerateTicket();
	virtual void Shutdown();
	~ImageRequestManager();
};

class ImageUrlHash
{
	long CreateNewUrlEntry(unsigned short const *,unsigned __int64,int,unsigned __int64,WPN_IMAGE_URL_HASH_ENTRY * *);
	long InitializeHashBucket(WPN_IMAGE_URL_HASH_BUCKET * *);
	long Lookup(unsigned short const *,int,WPN_IMAGE_URL_HASH_ENTRY * *);
	unsigned int GetHash(unsigned short const *,unsigned __int64 *);
	void CleanupUrlEntry(WPN_IMAGE_URL_HASH_ENTRY *);
public:
	int CommitDownload(unsigned short const *,int);
	int IsBeingProcessed(unsigned short const *,int *);
	long CreateOrAddRef(unsigned short const *,int,unsigned __int64);
	void Complete(IImageCache *,unsigned short const *,unsigned long,unsigned short const *,long,unsigned long,unsigned short *,_FILETIME *,unsigned int *,WPN_IMAGE_URL_REQUEST_REFERENCE * *);
	void RemoveRef(unsigned short const *,int,unsigned __int64);
	void RevertDownload(unsigned short const *);
	void RevertLeftOverFromTile();
	~ImageUrlHash();
};

struct InitialPollUrlWork
{
	InitialPollUrlWork();
	long SetAppUserModelId(unsigned short const *);
	long SetPackageFullName(unsigned short const *);
	long SetUrls(unsigned int,unsigned short const * *);
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
	virtual ~InitialPollUrlWork();
};

class LaunchIdleTaskWork
{
	long RegisterIdleTask(ITaskFolder *,IRegisteredTask * *);
public:
	LaunchIdleTaskWork();
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
	virtual ~LaunchIdleTaskWork();
};

struct LazyImageDownloadCancelWork
{
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
	virtual ~LazyImageDownloadCancelWork();
};

namespace Microsoft
{
	namespace WRL
	{
		class ComPtr<AFCListener>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<AFCListener>();
		};

		struct ComPtr<AppEndpoint>
		{
			~ComPtr<AppEndpoint>();
		};

		class ComPtr<ApplicationStateChangeHandler>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ApplicationStateChangeHandler>();
		};

		struct ComPtr<AssetCollection>
		{
			~ComPtr<AssetCollection>();
		};

		class ComPtr<DataChangedEvent>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<DataChangedEvent>();
		};

		class ComPtr<DefaultPlatformConfigurationProvider>
		{
		protected:
			unsigned long InternalRelease();
		public:
			void Attach(DefaultPlatformConfigurationProvider *);
		};

		class ComPtr<DefaultPlatformInstanceProvider>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<DownloadTaskManager>
		{
		protected:
			unsigned long InternalRelease();
		public:
			void Attach(DownloadTaskManager *);
			~ComPtr<DownloadTaskManager>();
		};

		struct ComPtr<EnergySaverAllowlistManager>
		{
			~ComPtr<EnergySaverAllowlistManager>();
		};

		class ComPtr<HandlerAsset>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			void Attach(HandlerAsset *);
			~ComPtr<HandlerAsset>();
		};

		class ComPtr<IActivationFactory>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IActivationFactory>();
		};

		class ComPtr<IAgileReference>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IAgileReference>();
		};

		class ComPtr<IBackgroundAccessManagerFactory>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IBackgroundAccessManagerFactory>();
		};

		struct ComPtr<IBackgroundAccessManagerService>
		{
			~ComPtr<IBackgroundAccessManagerService>();
		};

		class ComPtr<IBackgroundCopyFile5>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IBackgroundCopyFile5>();
		};

		class ComPtr<IBackgroundCopyFile>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IBackgroundCopyFile>();
		};

		class ComPtr<IBackgroundCopyJob2>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IBackgroundCopyJob2>();
		};

		class ComPtr<IBackgroundCopyJob5>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IBackgroundCopyJob5>();
		};

		class ComPtr<IBackgroundCopyJob>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IBackgroundCopyJob>();
		};

		class ComPtr<IBackgroundCopyManager>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IBackgroundCopyManager>();
		};

		class ComPtr<ICDPActivity>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ICDPActivity>();
		};

		class ComPtr<ICDPActivityAsset>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ICDPActivityAsset>();
		};

		class ComPtr<ICDPActivityStore>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ICDPActivityStore>();
		};

		class ComPtr<ICDPAppId>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ICDPAppId>();
		};

		struct ComPtr<ICDPUserServiceNotificationCallback>
		{
			~ComPtr<ICDPUserServiceNotificationCallback>();
		};

		class ComPtr<ICDPUserServiceNotificationClient>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ICDPUserServiceNotificationClient>();
		};

		class ComPtr<ICallingProcessInfo>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IConnectionManagerCallbacks2>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IConnectionManagerCallbacks2>();
		};

		class ComPtr<IConnectionManagerFactory>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IConnectionManagerFactory>();
		};

		class ComPtr<IConnectionPoint>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IConnectionPoint>();
		};

		class ComPtr<IConnectionPointContainer>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IConnectionPointContainer>();
		};

		class ComPtr<IConnectionProvider2>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IConnectionProvider2>();
		};

		class ComPtr<IConnectionProvider>
		{
		protected:
			unsigned long InternalRelease();
		public:
			long As<IConnectionProvider2>(Details::ComPtrRef<ComPtr<IConnectionProvider2> >);
			~ComPtr<IConnectionProvider>();
		};

		struct ComPtr<IDataChanged>
		{
			ComPtr<IDataChanged> & operator=(IDataChanged *);
		};

		class ComPtr<IEnumBackgroundCopyFiles>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IEnumBackgroundCopyFiles>();
		};

		class ComPtr<IGlobalInterfaceTable>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			~ComPtr<IGlobalInterfaceTable>();
		};

		class ComPtr<IHandlerAsset>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IHandlerAsset>();
		};

		struct ComPtr<IHandlerAssetCollection>
		{
			~ComPtr<IHandlerAssetCollection>();
		};

		class ComPtr<IImageDownload>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IImageDownload>();
		};

		class ComPtr<IImageDownloadSink>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IImageDownloadSink>();
		};

		class ComPtr<IInspectable>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IMarshal>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IMrtResourceManager>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IMrtResourceManager>();
		};

		struct ComPtr<INotificationAckResponse>
		{
			~ComPtr<INotificationAckResponse>();
		};

		class ComPtr<INotificationCollection>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<INotificationCollection>();
		};

		class ComPtr<INotificationDatabase>
		{
		protected:
			unsigned long InternalRelease();
		public:
			ComPtr<INotificationDatabase> & operator=(INotificationDatabase *);
			~ComPtr<INotificationDatabase>();
		};

		class ComPtr<INotificationHandler>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<INotificationHandler> & operator=(INotificationHandler *);
			~ComPtr<INotificationHandler>();
		};

		class ComPtr<INotificationHandlerCollection>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<INotificationHandlerCollection>();
		};

		class ComPtr<INotificationHandlerSettings>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<INotificationHandlerSettings>();
		};

		class ComPtr<INotificationModifier>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<INotificationModifier>();
		};

		class ComPtr<INotificationSettingsEnumerator>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<INotificationSettingsEnumerator>();
		};

		class ComPtr<IPdcController>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IPdcController>();
		};

		class ComPtr<IPlatformConfigurationProvider>
		{
		protected:
			unsigned long InternalRelease();
		public:
			ComPtr<IPlatformConfigurationProvider> & operator=(IPlatformConfigurationProvider *);
			~ComPtr<IPlatformConfigurationProvider>();
		};

		class ComPtr<IProcessLifetimeManagerControl>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IProcessLifetimeManagerControl>();
		};

		class ComPtr<IResourceContext3>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IResourceContext3>();
		};

		class ComPtr<IResourceContext>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IResourceContext>();
		};

		class ComPtr<IResourceMap>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IResourceMap>();
		};

		class ComPtr<IServiceProvider>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IServiceProvider>();
		};

		class ComPtr<IStream>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<IStream> & operator=(IStream *);
			void Attach(IStream *);
			~ComPtr<IStream>();
		};

		class ComPtr<IThreadRefWithEvent>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IThreadRefWithEvent>();
		};

		class ComPtr<ITileInfo2>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ITileInfo2>();
		};

		class ComPtr<ITileInfo>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ITileInfo>();
		};

		class ComPtr<ITileInfoEnumerator>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ITileInfoEnumerator>();
		};

		class ComPtr<IUnknown>
		{
		protected:
			unsigned long InternalRelease();
		public:
			long As<IUnknown>(Details::ComPtrRef<ComPtr<IUnknown> >);
			~ComPtr<IUnknown>();
		};

		class ComPtr<IUri>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IUri>();
		};

		class ComPtr<IWNSChannelDetails>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<IWNSChannelDetails> & operator=(IWNSChannelDetails *);
			~ComPtr<IWNSChannelDetails>();
		};

		class ComPtr<IWpnAppEndpoint2>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IWpnAppEndpoint2>();
		};

		class ComPtr<IWpnAppEndpoint3>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IWpnAppEndpoint3>();
		};

		class ComPtr<IWpnAppEndpoint>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IWpnAppEndpoint>();
		};

		struct ComPtr<IWpnIdleTaskEndpoint>
		{
			~ComPtr<IWpnIdleTaskEndpoint>();
		};

		class ComPtr<IWpnInternalConnectionManager2>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IWpnInternalConnectionManager>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IWpnInternalConnectionManager>();
		};

		struct ComPtr<IWpnMirroringAccountSwitcher>
		{
			~ComPtr<IWpnMirroringAccountSwitcher>();
		};

		class ComPtr<IWpnNotification>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			long As<INotificationModifier>(Details::ComPtrRef<ComPtr<INotificationModifier> >);
			void Attach(IWpnNotification *);
			~ComPtr<IWpnNotification>();
		};

		struct ComPtr<IWpnNotificationData>
		{
			~ComPtr<IWpnNotificationData>();
		};

		struct ComPtr<IWpnNotificationFeedback>
		{
			~ComPtr<IWpnNotificationFeedback>();
		};

		class ComPtr<IWpnNotificationSink2>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IWpnNotificationSink2>();
		};

		class ComPtr<IWpnPlatform>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IWpnPlatform>();
		};

		struct ComPtr<IWpnPresentationEndpoint>
		{
			~ComPtr<IWpnPresentationEndpoint>();
		};

		class ComPtr<IWpnPresentationTileSink2>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IWpnPresentationTileSink2>();
		};

		class ComPtr<IWpnPresentationTileSink>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IWpnPresentationTileSink>();
		};

		class ComPtr<IWpnPresentationToastMetadataSink2>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IWpnPresentationToastMetadataSink2>();
		};

		class ComPtr<IWpnPresentationToastSink>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IWpnPresentationToastSink>();
		};

		class ComPtr<IWpnPrivateSettings>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IWpnPrivateSettings>();
		};

		struct ComPtr<IWpnRegistrationEndpoint>
		{
			~ComPtr<IWpnRegistrationEndpoint>();
		};

		struct ComPtr<IWpnSettingsEndpoint2>
		{
			~ComPtr<IWpnSettingsEndpoint2>();
		};

		class ComPtr<IWpnSettingsEndpoint>
		{
		protected:
			unsigned long InternalRelease();
		public:
			long As<IWpnSettingsEndpoint2>(Details::ComPtrRef<ComPtr<IWpnSettingsEndpoint2> >);
			~ComPtr<IWpnSettingsEndpoint>();
		};

		struct ComPtr<IWpnTestEndpoint>
		{
			~ComPtr<IWpnTestEndpoint>();
		};

		class ComPtr<IXmlReader>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IXmlReader>();
		};

		class ComPtr<IXmlWriter>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IXmlWriter>();
		};

		struct ComPtr<IdleTaskEndpointImpl>
		{
			void Attach(IdleTaskEndpointImpl *);
			~ComPtr<IdleTaskEndpointImpl>();
		};

		struct ComPtr<MirroringAccountSwitcher>
		{
			void Attach(MirroringAccountSwitcher *);
			~ComPtr<MirroringAccountSwitcher>();
		};

		class ComPtr<NetworkStatusChangedSink>
		{
		protected:
			unsigned long InternalRelease();
		public:
			void Attach(NetworkStatusChangedSink *);
			~ComPtr<NetworkStatusChangedSink>();
		};

		class ComPtr<Notification>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<Notification> & operator=(Notification *);
			void Attach(Notification *);
			~ComPtr<Notification>();
		};

		struct ComPtr<NotificationCollection>
		{
			~ComPtr<NotificationCollection>();
		};

		class ComPtr<NotificationHandler>
		{
		protected:
			unsigned long InternalRelease();
		public:
			void Attach(NotificationHandler *);
			~ComPtr<NotificationHandler>();
		};

		struct ComPtr<NotificationHandlerCollection>
		{
			~ComPtr<NotificationHandlerCollection>();
		};

		class ComPtr<NotificationSettings>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			void Attach(NotificationSettings *);
			~ComPtr<NotificationSettings>();
		};

		class ComPtr<PlatformFactory>
		{
		protected:
			unsigned long InternalRelease();
		public:
			void Attach(PlatformFactory *);
			~ComPtr<PlatformFactory>();
		};

		struct ComPtr<PresentationEndpointFacade>
		{
			void Attach(PresentationEndpointFacade *);
			~ComPtr<PresentationEndpointFacade>();
		};

		class ComPtr<SqliteDatabase>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			~ComPtr<SqliteDatabase>();
		};

		class ComPtr<SystemPlatformFactory>
		{
		protected:
			unsigned long InternalRelease();
		};

		struct ComPtr<TestEndpoint>
		{
			void Attach(TestEndpoint *);
			~ComPtr<TestEndpoint>();
		};

		class ComPtr<ThreadPool>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<ThreadPool> & operator=(ThreadPool *);
			~ComPtr<ThreadPool>();
		};

		class ComPtr<ThrottledThreadPool>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ThrottledThreadPool>();
		};

		class ComPtr<TransientNotificationDetails>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<TransientNotificationDetails> & operator=(TransientNotificationDetails *);
			void Attach(TransientNotificationDetails *);
			~ComPtr<TransientNotificationDetails>();
		};

		class ComPtr<WNSChannelDetails>
		{
		protected:
			unsigned long InternalRelease();
		public:
			void Attach(WNSChannelDetails *);
			~ComPtr<WNSChannelDetails>();
		};

		class ComPtr<Windows::ApplicationModel::IAppDisplayInfo>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::ApplicationModel::IAppDisplayInfo>();
		};

		class ComPtr<Windows::ApplicationModel::IAppInfo>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::ApplicationModel::IAppInfo>();
		};

		class ComPtr<Windows::ApplicationModel::Internal::IAppInfoInternalStatics>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::ApplicationModel::Internal::IAppInfoInternalStatics>();
		};

		class ComPtr<Windows::Foundation::Collections::Detail::IPropertySetSerializer>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> >
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::Collections::IPropertySet>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::Collections::IVectorView<Windows::Internal::StateRepository::Application *> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::Internal::StateRepository::Application *> >();
		};

		class ComPtr<Windows::Foundation::Collections::IVectorView<Windows::Internal::StateRepository::Package *> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::Internal::StateRepository::Package *> >();
		};

		class ComPtr<Windows::Foundation::IPropertyValueStatics>
		{
		protected:
			unsigned long InternalRelease();
		};

		struct ComPtr<Windows::Foundation::IReference<Windows::Foundation::DateTime> >
		{
			~ComPtr<Windows::Foundation::IReference<Windows::Foundation::DateTime> >();
		};

		class ComPtr<Windows::Internal::ComTaskPool::CThread>
		{
		protected:
			unsigned long InternalRelease();
		public:
			void Attach(Windows::Internal::ComTaskPool::CThread *);
			~ComPtr<Windows::Internal::ComTaskPool::CThread>();
		};

		class ComPtr<Windows::Internal::IComPoolTask>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::IComPoolTask>();
		};

		class ComPtr<Windows::Internal::StateRepository::IApplication>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::StateRepository::IApplication>();
		};

		class ComPtr<Windows::Internal::StateRepository::IApplicationStatics>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::StateRepository::IApplicationStatics>();
		};

		class ComPtr<Windows::Internal::StateRepository::IPackage>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::StateRepository::IPackage>();
		};

		class ComPtr<Windows::Internal::StateRepository::IPackageStatics>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::StateRepository::IPackageStatics>();
		};

		class ComPtr<Windows::Networking::Connectivity::IConnectionProfile>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Networking::Connectivity::IConnectionProfile>();
		};

		class ComPtr<Windows::Networking::Connectivity::INetworkInformationStatics>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Networking::Connectivity::INetworkInformationStatics>();
		};

		class ComPtr<Windows::Storage::Streams::IBuffer>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Storage::Streams::IBuffer>();
		};

		class ComPtr<Windows::Storage::Streams::IBufferByteAccess>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Storage::Streams::IBufferByteAccess>();
		};

		class ComPtr<Windows::System::IUser>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::System::IUser>();
		};

		class ComPtr<Windows::System::Internal::ISignInStateManager>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::System::Internal::ISignInStateManager>();
		};

		class ComPtr<Windows::System::Internal::IUserManagerStatics>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::System::Internal::IUserManagerStatics>();
		};

		class ComPtr<WindowsPushNotificationPlatform>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<WindowsPushNotificationPlatform>();
		};

		class ComPtr<WindowsPushNotificationSystemPlatform>
		{
		protected:
			unsigned long InternalRelease();
		public:
			long AsIID(_GUID const &,ComPtr<IUnknown> *);
			~ComPtr<WindowsPushNotificationSystemPlatform>();
		};

		struct ComPtr<WpnConnectionManager>
		{
			void Attach(WpnConnectionManager *);
			~ComPtr<WpnConnectionManager>();
		};

		class ComPtr<WpnConnectionProviderSink>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<WpnConnectionProviderSink>();
		};

		class ComPtr<WpnNotificationData>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<WpnNotificationData> & operator=(WpnNotificationData *);
			void Attach(WpnNotificationData *);
			~ComPtr<WpnNotificationData>();
		};

		namespace Details
		{
			struct MakeAllocator<AppEndpoint>
			{
				~MakeAllocator<AppEndpoint>();
			};

			struct MakeAllocator<DataChangedEvent>
			{
				~MakeAllocator<DataChangedEvent>();
			};

			struct MakeAllocator<DownloadTaskManager>
			{
				~MakeAllocator<DownloadTaskManager>();
			};

			struct MakeAllocator<EnergySaverAllowlistManager>
			{
				~MakeAllocator<EnergySaverAllowlistManager>();
			};

			struct MakeAllocator<HandlerAsset>
			{
				~MakeAllocator<HandlerAsset>();
			};

			struct MakeAllocator<IdleTaskEndpointImpl>
			{
				~MakeAllocator<IdleTaskEndpointImpl>();
			};

			struct MakeAllocator<MirroringAccountSwitcher>
			{
				~MakeAllocator<MirroringAccountSwitcher>();
			};

			struct MakeAllocator<Notification>
			{
				~MakeAllocator<Notification>();
			};

			struct MakeAllocator<NotificationHandler>
			{
				~MakeAllocator<NotificationHandler>();
			};

			struct MakeAllocator<NotificationSettings>
			{
				~MakeAllocator<NotificationSettings>();
			};

			struct MakeAllocator<NotificationSettingsEnumerator>
			{
				~MakeAllocator<NotificationSettingsEnumerator>();
			};

			struct MakeAllocator<PresentationEndpointFacade>
			{
				~MakeAllocator<PresentationEndpointFacade>();
			};

			struct MakeAllocator<TestEndpoint>
			{
				~MakeAllocator<TestEndpoint>();
			};

			struct MakeAllocator<ThreadPool>
			{
				~MakeAllocator<ThreadPool>();
			};

			struct MakeAllocator<ThrottledThreadPool>
			{
				~MakeAllocator<ThrottledThreadPool>();
			};

			struct MakeAllocator<TransientNotificationDetails>
			{
				~MakeAllocator<TransientNotificationDetails>();
			};

			struct MakeAllocator<WNSChannelDetails>
			{
				~MakeAllocator<WNSChannelDetails>();
			};

			struct MakeAllocator<WindowsPushNotificationPlatform>
			{
				~MakeAllocator<WindowsPushNotificationPlatform>();
			};

			struct MakeAllocator<WpnConnectionManager>
			{
				~MakeAllocator<WpnConnectionManager>();
			};

			struct MakeAllocator<WpnConnectionManagerFactory>
			{
				~MakeAllocator<WpnConnectionManagerFactory>();
			};

			struct MakeAllocator<WpnNotificationData>
			{
				~MakeAllocator<WpnNotificationData>();
			};

			struct ModuleBase
			{
				static ModuleBase * module_;
			};

			class RuntimeClassBaseT<2>
			{
			protected:
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,FtmBase,IBackgroundCopyCallback,IImageDownload> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,FtmBase,IBackgroundCopyCallback,IImageDownload> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,FtmBase,IWpnNotification,INotificationModifier> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,FtmBase,IWpnNotification,INotificationModifier> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IWpnInternalConnectionManager,IWpnInternalConnectionManager2,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IWpnInternalConnectionManager,IWpnInternalConnectionManager2,FtmBase> *,_GUID const &,void * *);
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ChainInterfaces<IWpnAppEndpoint3,IWpnAppEndpoint2,IWpnAppEndpoint,Nil,Nil,Nil,Nil,Nil,Nil,Nil>,IWpnPhoneAppEndpoint,IFastRundown>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,FtmBase,IBackgroundCopyCallback,IImageDownload>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,FtmBase,IDataChanged>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,FtmBase,IHandlerAsset>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,FtmBase,IHandlerAssetCollection>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,FtmBase,INotificationCollection>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,FtmBase,INotificationDatabase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,FtmBase,INotificationHandler>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,FtmBase,INotificationHandlerCollection>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,FtmBase,INotificationHandlerSettings>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,FtmBase,INotificationSettingsEnumerator>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,FtmBase,ITransientNotificationDetails>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,FtmBase,IWNSChannelDetails>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,FtmBase,IWpnNotification,INotificationModifier>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,FtmBase,IWpnNotificationData>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,FtmBase,IWpnPlatform,IWpnPlatformInternal,IServiceProvider>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,FtmBase,IWpnPresentationEndpoint,IWpnPresentationEndpoint2,IWpnMrtHelper,IConnectionPoint,IWpnAssetsEndpoint,IFastRundown>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,FtmBase,IWpnSettingsEndpoint,IWpnPrivateSettings,IWpnSettingsEndpoint2,IFastRundown>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IApplicationStateChangeHandler>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IBackgroundAccessStateChangeHandler>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ICDPActivityStoreCallback,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ICDPUserServiceNotificationCallback>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IClassFactory>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IConnectionManagerCallbacks2>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IConnectionManagerFactory,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IConnectionProviderEvents,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IImageDownloadSink>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,INotificationAckResponse>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IPdcController>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IPlatformConfigurationProvider>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IUnknown>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IWpnIdleTaskEndpoint>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IWpnInternalConnectionManager,IWpnInternalConnectionManager2,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IWpnMirroringAccountSwitcher,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IWpnRegistrationEndpoint,IWpnPollingUrlTempCache,IWpnSystemRegistrationEndpoint,IWpnPhoneRegistrationEndpoint,IWpnPackageRegistrationEndpoint,IWpnRegistrationEndpoint2,IFastRundown>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IWpnTestEndpoint>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Networking::Connectivity::INetworkStatusChangedEventHandler>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			ComPtr<IdleTaskEndpointImpl> Make<IdleTaskEndpointImpl,IPlatformConfigurationProvider * &>(IPlatformConfigurationProvider * &);
			ComPtr<MirroringAccountSwitcher> Make<MirroringAccountSwitcher,IPlatformConfigurationProvider * &>(IPlatformConfigurationProvider * &);
			ComPtr<PresentationEndpointFacade> Make<PresentationEndpointFacade,IPlatformConfigurationProvider * &>(IPlatformConfigurationProvider * &);
			ComPtr<SettingsEndpointFacade> Make<SettingsEndpointFacade,IPlatformConfigurationProvider * &>(IPlatformConfigurationProvider * &);
			ComPtr<TestEndpoint> Make<TestEndpoint,IPlatformConfigurationProvider * &>(IPlatformConfigurationProvider * &);
			ComPtr<WpnConnectionManager> Make<WpnConnectionManager,IConnectionManagerCallbacks2 * &,Windows::Internal::PushNotifications::ConnectionMultiplexer * &>(IConnectionManagerCallbacks2 * &,Windows::Internal::PushNotifications::ConnectionMultiplexer * &);
			ComPtr<WpnConnectionManager> Make<WpnConnectionManager,Windows::Internal::PushNotifications::ConnectionMultiplexer * &>(Windows::Internal::PushNotifications::ConnectionMultiplexer * &);
			long MakeAndInitialize<ConnectionManagerCallback,IConnectionManagerCallbacks2,NotificationPlatform * &>(IConnectionManagerCallbacks2 * *,NotificationPlatform * &);
			long MakeAndInitialize<EnergySaverAllowlistManager,EnergySaverAllowlistManager,NotificationPlatform * &>(EnergySaverAllowlistManager * *,NotificationPlatform * &);
			long MakeAndInitialize<HandlerAsset,HandlerAsset,IHandlerAsset * &>(HandlerAsset * *,IHandlerAsset * &);
			long MakeAndInitialize<HandlerAsset,HandlerAsset,unsigned short const * &,unsigned short const * &,unsigned short const * &>(HandlerAsset * *,unsigned short const * &,unsigned short const * &,unsigned short const * &);
			long MakeAndInitialize<Notification,Notification,Notification::Initializer &>(Notification * *,Notification::Initializer &);
			long MakeAndInitialize<Notification,Notification,unsigned long &,IWpnNotification * &>(Notification * *,unsigned long &,IWpnNotification * &);
			long MakeAndInitialize<NotificationSettings,NotificationSettings,unsigned short const * &>(NotificationSettings * *,unsigned short const * &);
			long MakeAndInitialize<PdcNetworkController,IPdcController,NotificationPlatform * &>(IPdcController * *,NotificationPlatform * &);
			long MakeAndInitialize<TransientNotificationDetails,TransientNotificationDetails,ITransientNotificationDetails * &>(TransientNotificationDetails * *,ITransientNotificationDetails * &);
			long MakeAndInitialize<WNSChannelDetails,IWNSChannelDetails,unsigned short const * &,char (&)[65],char (&)[2049],_FILETIME &,_FILETIME &>(Details::ComPtrRef<ComPtr<IWNSChannelDetails> >,unsigned short const * &,char (&)[65],char (&)[2049],_FILETIME &,_FILETIME &);
			long MakeAndInitialize<WNSChannelDetails,IWNSChannelDetails,unsigned short const * &,char (&)[65],char (&)[2049],_FILETIME &,_FILETIME &>(IWNSChannelDetails * *,unsigned short const * &,char (&)[65],char (&)[2049],_FILETIME &,_FILETIME &);
			long MakeAndInitialize<WpnConnectionProviderSink,WpnConnectionProviderSink,Windows::Internal::PushNotifications::ConnectionStateMachine * const &>(WpnConnectionProviderSink * *,Windows::Internal::PushNotifications::ConnectionStateMachine * const &);
			long MakeAndInitialize<WpnNotificationData,WpnNotificationData,IWpnNotificationData * &>(WpnNotificationData * *,IWpnNotificationData * &);
			long MakeAndInitialize<WpnNotificationData,WpnNotificationData,unsigned long &>(WpnNotificationData * *,unsigned long &);
		};

		class FtmBase
		{
		protected:
			long CanCastTo(_GUID const &,void * *);
		public:
			FtmBase();
			virtual long DisconnectObject(unsigned long);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
		};

		struct RuntimeClass<RuntimeClassFlags<2>,ChainInterfaces<IWpnAppEndpoint3,IWpnAppEndpoint2,IWpnAppEndpoint,Details::Nil,Details::Nil,Details::Nil,Details::Nil,Details::Nil,Details::Nil,Details::Nil>,IWpnPhoneAppEndpoint,IFastRundown>
		{
			virtual ~RuntimeClass<RuntimeClassFlags<2>,ChainInterfaces<IWpnAppEndpoint3,IWpnAppEndpoint2,IWpnAppEndpoint,Details::Nil,Details::Nil,Details::Nil,Details::Nil,Details::Nil,Details::Nil,Details::Nil>,IWpnPhoneAppEndpoint,IFastRundown>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,FtmBase,IBackgroundCopyCallback,IImageDownload>
		{
			virtual ~RuntimeClass<RuntimeClassFlags<2>,FtmBase,IBackgroundCopyCallback,IImageDownload>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,FtmBase,IDataChanged>
		{
			virtual ~RuntimeClass<RuntimeClassFlags<2>,FtmBase,IDataChanged>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,FtmBase,INotificationHandlerSettings>
		{
			virtual ~RuntimeClass<RuntimeClassFlags<2>,FtmBase,INotificationHandlerSettings>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,FtmBase,IWpnNotificationData>
		{
			virtual ~RuntimeClass<RuntimeClassFlags<2>,FtmBase,IWpnNotificationData>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,FtmBase,IWpnPresentationEndpoint,IWpnPresentationEndpoint2,IWpnMrtHelper,IConnectionPoint,IWpnAssetsEndpoint,IFastRundown>
		{
			RuntimeClass<RuntimeClassFlags<2>,FtmBase,IWpnPresentationEndpoint,IWpnPresentationEndpoint2,IWpnMrtHelper,IConnectionPoint,IWpnAssetsEndpoint,IFastRundown>();
			virtual ~RuntimeClass<RuntimeClassFlags<2>,FtmBase,IWpnPresentationEndpoint,IWpnPresentationEndpoint2,IWpnMrtHelper,IConnectionPoint,IWpnAssetsEndpoint,IFastRundown>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,FtmBase,IWpnSettingsEndpoint,IWpnPrivateSettings,IWpnSettingsEndpoint2,IFastRundown>
		{
			RuntimeClass<RuntimeClassFlags<2>,FtmBase,IWpnSettingsEndpoint,IWpnPrivateSettings,IWpnSettingsEndpoint2,IFastRundown>();
			virtual ~RuntimeClass<RuntimeClassFlags<2>,FtmBase,IWpnSettingsEndpoint,IWpnPrivateSettings,IWpnSettingsEndpoint2,IFastRundown>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,IApplicationStateChangeHandler>
		{
			virtual ~RuntimeClass<RuntimeClassFlags<2>,IApplicationStateChangeHandler>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,IBackgroundAccessStateChangeHandler>
		{
			virtual ~RuntimeClass<RuntimeClassFlags<2>,IBackgroundAccessStateChangeHandler>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,ICDPActivityStoreCallback,FtmBase>
		{
			virtual ~RuntimeClass<RuntimeClassFlags<2>,ICDPActivityStoreCallback,FtmBase>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,IClassFactory>
		{
			RuntimeClass<RuntimeClassFlags<2>,IClassFactory>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,IUnknown>
		{
			RuntimeClass<RuntimeClassFlags<2>,IUnknown>();
			virtual ~RuntimeClass<RuntimeClassFlags<2>,IUnknown>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,IWpnIdleTaskEndpoint>
		{
			RuntimeClass<RuntimeClassFlags<2>,IWpnIdleTaskEndpoint>();
			virtual ~RuntimeClass<RuntimeClassFlags<2>,IWpnIdleTaskEndpoint>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,IWpnInternalConnectionManager,IWpnInternalConnectionManager2,FtmBase>
		{
			RuntimeClass<RuntimeClassFlags<2>,IWpnInternalConnectionManager,IWpnInternalConnectionManager2,FtmBase>();
			virtual ~RuntimeClass<RuntimeClassFlags<2>,IWpnInternalConnectionManager,IWpnInternalConnectionManager2,FtmBase>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,IWpnMirroringAccountSwitcher,FtmBase>
		{
			RuntimeClass<RuntimeClassFlags<2>,IWpnMirroringAccountSwitcher,FtmBase>();
			virtual ~RuntimeClass<RuntimeClassFlags<2>,IWpnMirroringAccountSwitcher,FtmBase>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,IWpnTestEndpoint>
		{
			RuntimeClass<RuntimeClassFlags<2>,IWpnTestEndpoint>();
			virtual ~RuntimeClass<RuntimeClassFlags<2>,IWpnTestEndpoint>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>
		{
			RuntimeClass<RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>();
		};

		namespace Wrappers
		{
			struct CriticalSection
			{
				Details::SyncLockCriticalSection Lock();
				~CriticalSection();
			};

			namespace Details
			{
				class SyncLockCriticalSection
				{
					void InternalUnlock();
				public:
					~SyncLockCriticalSection();
				};

			};

			struct HString
			{
				~HString();
			};

			class HStringReference
			{
				static unsigned int AddOne(unsigned int);
				void CreateReference(unsigned short const *,unsigned int,unsigned int);
			public:
				HStringReference<unsigned short *>(unsigned short * const &,Details::Dummy);
				HStringReference<unsigned short const *>(unsigned short const * const &,Details::Dummy);
				~HStringReference();
			};

			struct RoInitializeWrapper
			{
				~RoInitializeWrapper();
			};

		};

	};

	namespace Windows
	{
		namespace Internal
		{
			namespace PushNotifications
			{
				struct ActivityParseResult
				{
					~ActivityParseResult();
				};

				class CPTransactionRequestManager
				{
					struct TimerContext
					{
						virtual ~TimerContext();
					};

					long IncrementTransactionId();
					long QueueRequest(ChannelRequestContext,unsigned long);
					void BufferRequest(ChannelRequestInternal);
					void ClearAllUserContexts();
					void ClearBufferedRequestsForUser(unsigned __int64);
					void ProcessBufferedRequests(std::vector<ChannelRequestInternal,std::allocator<ChannelRequestInternal> > const &);
					void RequestChannelInternal(ChannelRequestInternal);
					void RequestCompleted(long,unsigned __int64,long,unsigned short const *,unsigned short const *,double);
				public:
					CPTMode GetModeForUser(unsigned __int64);
					CPTransactionRequestManager(ConnectionStateMachine * const);
					void Clear();
					void ClearUserContext(unsigned __int64);
					void ConfigureBatching(__MIDL___MIDL_itf_wpntypes_0000_0000_0005);
					void ConfigureNotificationDelivery(unsigned __int64,unsigned short const *,__MIDL___MIDL_itf_wpntypes_0000_0000_0003,short);
					void ConfigureNotificationPolicy(unsigned __int64,__MIDL___MIDL_itf_wpntypes_0000_0000_0003,short);
					void OnChannelReceived(unsigned __int64,long,unsigned short const *,unsigned short const *,double);
					void RenewChannel(unsigned __int64,unsigned short const *,unsigned short const *,unsigned long,unsigned long,long);
					void RenewSecondaryChannel(unsigned __int64,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned long,unsigned long,long);
					void RequestChannel(unsigned __int64,unsigned short const *,unsigned long,unsigned long,long);
					void RequestSecondaryChannel(unsigned __int64,unsigned short const *,unsigned short const *,unsigned short const *,unsigned long,unsigned long,long);
					void RequestTimeout(long);
					void RevokeChannel(unsigned __int64,unsigned short const *);
					void SendBatteryExemptionList(unsigned __int64,unsigned short const * *,unsigned long);
					void SetModeForUser(unsigned __int64,CPTMode);
					~CPTransactionRequestManager();
				};

				class Callback
				{
					struct ScopedCallbackHandle
					{
						WRL::ComPtr<IConnectionManagerCallbacks2> operator->();
						~ScopedCallbackHandle();
					};

					void DecrementNumRunning();
				public:
					Callback(IConnectionManagerCallbacks2 *);
					virtual ~Callback();
				};

				class ChannelRequestInternal
				{
					ChannelRequestInternal(ChannelRequestInternal::ChannelRequestType,unsigned __int64,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned long,unsigned long,long);
				public:
					ChannelRequestInternal(unsigned __int64,unsigned short const *,unsigned long,unsigned long,long);
					ChannelRequestInternal(unsigned __int64,unsigned short const *,unsigned short const *,unsigned long,unsigned long,long);
					ChannelRequestInternal(unsigned __int64,unsigned short const *,unsigned short const *,unsigned short const *,unsigned long,unsigned long,long);
					ChannelRequestInternal(unsigned __int64,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned long,unsigned long,long);
					~ChannelRequestInternal();
				};

				struct CleanupWork
				{
					~CleanupWork();
				};

				struct ClientRegistration
				{
					Callback::ScopedCallbackHandle GetCallback(unsigned __int64);
					RegistrationToken Add(unsigned __int64,IConnectionManagerCallbacks2 *);
					_NotificationUser GetUser(unsigned __int64);
					std::vector<Callback::ScopedCallbackHandle,std::allocator<Callback::ScopedCallbackHandle> > GetCallbacks();
					void Remove(RegistrationToken const &);
					~ClientRegistration();
				};

				struct ComImpersonateCaller
				{
					~ComImpersonateCaller();
				};

				struct ConnectionMultiplexer
				{
					ConnectionMultiplexer();
					void OnChannelReceived(long,unsigned __int64,long,unsigned short const *,unsigned short const *,double);
					void OnConnectionChanged(unsigned __int64,__MIDL___MIDL_itf_wpninternal_0000_0000_0001);
					void OnDisconnected();
					void OnNotificationReceived(unsigned short const *,INotificationDataPackage *,INotificationAckResponse * *);
					void RenewChannel(RegistrationToken const &,unsigned short const *,unsigned short const *,unsigned long,unsigned long,long);
					void RenewSecondaryChannel(RegistrationToken const &,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned long,unsigned long,long);
					void RequestChannel(RegistrationToken const &,unsigned short const *,unsigned long,unsigned long,long);
					void RequestSecondaryChannel(RegistrationToken const &,unsigned short const *,unsigned short const *,unsigned short const *,unsigned long,unsigned long,long);
				};

				struct ConnectionProviderConfig
				{
					static ConnectionProviderConfig Load();
				};

				struct ConnectionProviderLoader
				{
					ConnectionProviderLoader(ConnectionStateMachine *);
					WRL::ComPtr<IConnectionProvider> Get();
					virtual ~ConnectionProviderLoader();
				};

				class ConnectionStateMachine
				{
					ConnectionStateMachine::State CurrentState();
					_TP_WORK * LoadConnectionProvider();
					__MIDL___MIDL_itf_wpntypes_0000_0000_0008 GetUserBindStatus(unsigned __int64);
					void AddUser(_NotificationUser);
					void Disconnect(unsigned int);
					void DoConnect(_NotificationUser,unsigned int);
					void DoDisconnect();
					void OnConnectFailed(bool);
					void OnConnected();
					void RemoveUser(_NotificationUser);
					void VerifyConnected();
				public:
					ConnectionStateMachine(ConnectionMultiplexer *);
					__MIDL___MIDL_itf_wpninternal_0000_0000_0001 GetStatus(unsigned __int64);
					static void CleanupWnfSubscription(_TP_CALLBACK_INSTANCE *,void *,_TP_WORK *);
					void Connect(_NotificationUser,unsigned int);
					void Disconnect(_NotificationUser,unsigned long);
					void OnConnectionChanged(__MIDL___MIDL_itf_wpntypes_0000_0000_0001);
					~ConnectionStateMachine();
				};

				struct CriticalSection
				{
					~CriticalSection();
				};

				struct DiagTrackQueue
				{
					DiagTrackQueue(unsigned __int64 const &);
					void Remove(unsigned __int64);
					~DiagTrackQueue();
				};

				struct DismissActivityWork
				{
					DismissActivityWork(NotificationPlatform *,ICDPActivity *);
					virtual long Invoke();
					virtual long ValidateParameters();
					virtual unsigned short const * GetWorkItemName();
					virtual ~DismissActivityWork();
				};

				struct LockWpnCoreDll
				{
					~LockWpnCoreDll();
				};

				struct MirroringAccount
				{
					MirroringAccount(unsigned short const *);
					void ChangeAccount(unsigned short const *,WPN_MIRRORING_ACCOUNT_TYPE);
				};

				struct MirroringAccountData
				{
					~MirroringAccountData();
				};

				struct MirroringAccountSwitchWork
				{
					virtual long Invoke();
					virtual ~MirroringAccountSwitchWork();
				};

				struct MirroringAccountTransaction
				{
					MirroringAccountTransaction(unsigned short const *);
					~MirroringAccountTransaction();
				};

				struct NotificationPlatformHandle
				{
					struct LegacyPlatGetter
					{
						NotificationPlatformPtr Get();
					};

					NotificationPlatformHandle(IPlatformConfigurationProvider *,bool);
					NotificationPlatformPtr Get();
					void Initialize();
					~NotificationPlatformHandle();
				};

				struct NotificationPlatformPtr
				{
					NotificationPlatform * Get();
					NotificationPlatformPtr(Owner<std::unique_ptr<NotificationPlatform,std::default_delete<NotificationPlatform> >,std::chrono::duration<__int64,std::ratio<1,1> > >::WeakRef &);
					NotificationPlatformPtr(std::shared_ptr<NotificationPlatform> const &);
					operator bool();
					~NotificationPlatformPtr();
				};

				struct NtRegistryTransaction
				{
					~NtRegistryTransaction();
				};

				class Owner<std::unique_ptr<NotificationPlatform,std::default_delete<NotificationPlatform> >,std::chrono::duration<__int64,std::ratio<1,1> > >
				{
					class OwnerRef
					{
						Owner<std::unique_ptr<NotificationPlatform,std::default_delete<NotificationPlatform> >,std::chrono::duration<__int64,std::ratio<1,1> > >::StrongRef Lock();
					};

					struct WeakRef
					{
						~WeakRef();
					};

					void DestroyShared();
				public:
					Owner<std::unique_ptr<NotificationPlatform,std::default_delete<NotificationPlatform> >,std::chrono::duration<__int64,std::ratio<1,1> > >(std::chrono::duration<__int64,std::ratio<1,1> >);
					Owner<std::unique_ptr<NotificationPlatform,std::default_delete<NotificationPlatform> >,std::chrono::duration<__int64,std::ratio<1,1> > >::StrongRef MakeShared();
					~Owner<std::unique_ptr<NotificationPlatform,std::default_delete<NotificationPlatform> >,std::chrono::duration<__int64,std::ratio<1,1> > >();
				};

				class Owner<unsigned int,std::chrono::duration<__int64,std::ratio<1,1> > >
				{
					class OwnerRef
					{
						Owner<unsigned int,std::chrono::duration<__int64,std::ratio<1,1> > >::StrongRef Lock();
					};

					struct StrongRef
					{
						~StrongRef();
					};

					void DestroyShared();
				public:
					Owner<unsigned int,std::chrono::duration<__int64,std::ratio<1,1> > >(std::chrono::duration<__int64,std::ratio<1,1> >);
					Owner<unsigned int,std::chrono::duration<__int64,std::ratio<1,1> > >::StrongRef MakeShared();
				};

				struct ReconnectTimer
				{
					bool StartIfNotRunning();
					static unsigned long CalculateReconnectTimerLength(unsigned long);
					void TimerExpired();
					~ReconnectTimer();
				};

				struct RegistrationEntry
				{
					~RegistrationEntry();
				};

				class ToastHelper
				{
					static long AddImageResource(ICDPActivity *,unsigned short const *,unsigned short const *);
					static long GetResolvedText(unsigned short const *,unsigned short const *,IMrtHelper *,unsigned short * *);
					static long ReadAttributes(IXmlReader *,std::map<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::less<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >,std::allocator<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > > &);
					static long WriteAttributes(IXmlWriter *,std::map<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::less<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >,std::allocator<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > > &);
					static std::basic_string<char,std::char_traits<char>,std::allocator<char> > ApplyMetadata(char const *,WpnNotificationData *);
					static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > ResolveImageAttributeValue(unsigned short const *,unsigned short const *,IMrtHelper *,unsigned short * *);
					static void AddWpnAppLogo(ICDPActivity *,unsigned short const *,unsigned short const *,IMrtHelper *,NotificationPlatform *);
				public:
					static ActivityParseResult TryParseActivityForIds(unsigned char const *,unsigned int);
					static WRL::ComPtr<ICDPActivity> MakeActivityFromToast(ICDPActivity *,unsigned int,NotificationPlatform *,unsigned short const *,char const *,char const *,char const *,unsigned char *,unsigned int,WpnNotificationData *);
					static bool VerifyToastPayloadMirroringSupport(unsigned char *,unsigned int);
					static long GetAppTitle(unsigned short const *,wistd::unique_ptr<char,wil::process_heap_deleter> &);
					static std::vector<char,std::allocator<char> > LoadFromStream(IStream *);
					static std::vector<char,std::allocator<char> > ResolveAssetsAndDecoratePayload(unsigned int,_FILETIME * const,ICDPActivity *,unsigned short const *,IMrtHelper *,unsigned char *,unsigned int);
					static void DismissActivities(_WPN_TOAST_NOTIFICATION *,unsigned long);
					static void RemoveNotificationUsingActivity(NotificationPlatform *,ICDPActivity *);
				};

				struct WindowsRuntime
				{
					~WindowsRuntime();
				};

				PushNotifications::MirroringAccountData GetPersistedMirroringAccount(unsigned short const *);
				PushNotifications::Owner<std::unique_ptr<NotificationPlatform,std::default_delete<NotificationPlatform> >,std::chrono::duration<__int64,std::ratio<1,1> > > s_thePlatform;
				PushNotifications::Owner<std::unique_ptr<NotificationPlatform,std::default_delete<NotificationPlatform> >,std::chrono::duration<__int64,std::ratio<1,1> > >::WeakRef CreateNotificationPlatform(IPlatformConfigurationProvider *);
				PushNotifications::SetPeriodicUpdateParams CreatePeriodicUpdateParams(unsigned short const *,unsigned short const *,unsigned long,unsigned short const * *,unsigned int,__MIDL___MIDL_itf_wpnplatform_0000_0004_0003,_WPN_FILE_TIME,int);
				bool IsAppInStateRepo(unsigned short const *);
				bool IsDefaultSystemManagedAccount(void *);
				bool IsTokenLocalSystem(void *);
				long GetAumIdsFromPackage(unsigned short const *,std::list<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > &);
				std::chrono::duration<__int64,std::ratio<1,1> > c_platformShutdownTimeout;
				unsigned __int64 GetUserIdForCaller();
				unsigned __int64 GetUserIdForSelf();
				unsigned __int64 GetUserIdForToken(void *);
				void AddScheduledNotificationHelper(NotificationPlatform *,unsigned short const *,unsigned short const *,PushNotifications::ScheduledNotification,_GUID *);
				void CleanupTimerQueue(void *);
				void ReconnectTimerCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
				void SetReconnectTimer(_TP_TIMER *,unsigned long,unsigned long);
				void TimeoutHandler(void *,unsigned char);
				wil::srwlock s_platformLock;
			};

			struct XmlLiteHelper
			{
				static WRL::ComPtr<IXmlReader> MakeXmlReaderFromByteArray(unsigned char const *,unsigned long,unsigned short const *,unsigned int,int);
				static WRL::ComPtr<IXmlWriter> MakeXmlWriter(IStream *,unsigned int);
			};

		};

	};

};

struct MirrorDataUpdateWork
{
	MirrorDataUpdateWork(unsigned short const *,unsigned long,unsigned short const *,NotificationPlatform *);
	virtual bool Merge(ThrottledWorkItem *);
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
	virtual ~MirrorDataUpdateWork();
};

class MirroringAccountSwitcher
{
	void ValidateArguments(unsigned short const *,unsigned short const *,WPN_MIRRORING_ACCOUNT_TYPE);
public:
	MirroringAccountSwitcher(IPlatformConfigurationProvider *);
	virtual long SetMirroringAccount(unsigned short const *,unsigned short const *,WPN_MIRRORING_ACCOUNT_TYPE);
};

class MobileBroadbandHandler
{
	MobileBroadbandHandler();
	long CalculateNextResetDate(_WPN_FILE_TIME *);
	long GetBillingCycle(Windows::Networking::Connectivity::IConnectionProfile *,_WPN_FILE_TIME *);
	long GetNetworkCost(Windows::Networking::Connectivity::IConnectionProfile *,MobileBroadbandNetworkCost *,int *);
	long Initialize();
	long ResetMobileBroadbandAccounting();
	long SubmitConfigureNotificationPolicyWork(__MIDL___MIDL_itf_wpntypes_0000_0000_0003);
	long SubmitUpdateImageDownloadPolicyWork();
	long SubmitUpdateMobileBroadbandCapWork();
	void SetLastResetDate(IGlobalSettings *);
	void SetMobileBroadbandTimer(_TP_TIMER *,_WPN_FILE_TIME * const,int);
	void UnregisterNetworkStatusCallback(Windows::Networking::Connectivity::INetworkInformationStatics *);
	void UpdateBillingCycle(_WPN_FILE_TIME * const,_WPN_FILE_TIME *,int *);
protected:
	static void TimerProcessing(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
public:
	long InitializeState(Windows::Networking::Connectivity::INetworkInformationStatics *);
	long RegisterDelegate(Windows::Networking::Connectivity::INetworkInformationStatics *);
	static long CreateInstance(NotificationPlatform *,MobileBroadbandHandler * *);
	virtual void AddRef();
	virtual void NetworkStatusChanged();
	virtual void ReleaseRef();
	virtual ~MobileBroadbandHandler();
	void GetNetworkCost(MobileBroadbandNetworkCost *,int *);
};

class MrtHelper
{
	long ConvertFileUriToFilePath(unsigned short const *,unsigned short * *);
	void InitializeMRTResource(unsigned short const *,unsigned short const *,DEVICE_SCALE_FACTOR,__MIDL___MIDL_itf_wpnplatform_0000_0016_0001,IMrtResourceManager * *,IResourceMap * *);
public:
	virtual long ResolveMsAppDataPath(unsigned short const *,unsigned short const *,unsigned short * *);
	virtual long ResolveMsAppxPath(unsigned short const *,unsigned short const *,unsigned short const *,DEVICE_SCALE_FACTOR,__MIDL___MIDL_itf_wpnplatform_0000_0016_0001,unsigned short * *);
	virtual long ResolveTextLanguage(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short * *);
};

class NetworkStatusChangedSink
{
	virtual ~NetworkStatusChangedSink();
public:
	NetworkStatusChangedSink();
	virtual long Invoke(IInspectable *);
	void ClearCallback();
};

class Notification
{
	long SetDefaultExpiry(unsigned __int64);
	long SetMaxExpiry(unsigned __int64);
	void PopulatePayloadVector();
public:
	Notification();
	_FILETIME get_expiry();
	long RuntimeClassInitialize(Notification::Initializer &);
	long RuntimeClassInitialize(unsigned long,IWpnNotification *);
	long RuntimeClassInitialize(unsigned long,unsigned short const *,unsigned short const *,IStream *,unsigned short const *,unsigned short const *,_FILETIME,_FILETIME,NotificationSource);
	virtual long get_ActivityId(_GUID *);
	virtual long get_ArrivalTime(_FILETIME *);
	virtual long get_Data(IWpnNotificationData * *);
	virtual long get_Expiry(_FILETIME *);
	virtual long get_Group(unsigned short * *);
	virtual long get_HandlerKey(unsigned short * *);
	virtual long get_Id(unsigned long *);
	virtual long get_NotificationSource(NotificationSource *);
	virtual long get_NotificationType(unsigned short * *);
	virtual long get_Payload(IStream * *);
	virtual long get_Tag(unsigned short * *);
	virtual long get_isExpiryValid(int *);
	virtual long put_Id(unsigned long);
	virtual long put_NotificationSource(NotificationSource);
	virtual ~Notification();
	void get_data(WpnNotificationData * *);
};

struct NotificationAckResponse
{
	virtual long get_AckHresult();
	virtual long get_AckStatus(__MIDL___MIDL_itf_wpntypes_0000_0000_0006 *);
	virtual long get_AppExemptionList(unsigned short * * *,unsigned int *);
};

class NotificationAvailableWork
{
	long ActivatePhoneVoipAgent(unsigned short const *);
	long BlockChannel();
	long BlockNotificationType();
	long CheckNotificationHandlerSettingsEnabledForParent(INotificationHandler *,unsigned short const *,bool,PolicyLevel *);
	long CheckPrivilege();
	long DeliverCloudNotification();
	long DeliverLocalNotification();
	long DeliverPhoneLegacyNotification(unsigned short const *);
	long ExecuteClearAllAction();
	long ExecuteDeliverAction();
	long ExecuteRemoveAction();
	long ProcessChannel();
	long RevokeChannel();
	void LogSettingsDropped(long,unsigned short const *,PolicyLevel);
public:
	NotificationAvailableWork(std::unique_ptr<NotificationDeliveryTransaction,std::default_delete<NotificationDeliveryTransaction> > &,NotificationPlatform *);
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
	virtual ~NotificationAvailableWork();
};

struct NotificationCollection
{
	long add_Notification(IWpnNotification *);
	virtual long get_At(unsigned long,IWpnNotification * *);
	virtual long get_Count(unsigned long *);
};

struct NotificationDeliveryTransaction
{
	NotificationDeliveryTransaction(INotificationHandler *,Notification *,TransientNotificationDetails *,bool,__MIDL___MIDL_itf_wpntypes_0000_0000_0004,unsigned short const *);
	unsigned short const * get_PackageFullName();
};

struct NotificationHandler
{
	NotificationHandler();
	long RuntimeClassInitialize(unsigned short const *,unsigned short const *,unsigned short const *,INotificationHandlerSettings *,IWNSChannelDetails *,IStream *,unsigned __int64,unsigned short const *);
	virtual long get_AppType(unsigned short * *);
	virtual long get_ChannelDetails(IWNSChannelDetails * *);
	virtual long get_HandlerKey(unsigned short * *);
	virtual long get_ParentId(unsigned short * *);
	virtual long get_Settings(INotificationHandlerSettings * *);
	virtual long get_SystemPropertySet(IStream * *);
	virtual long get_WNFEventName(unsigned __int64 *);
	virtual long get_WNSId(unsigned short * *);
	virtual long put_ChannelDetails(IWNSChannelDetails *);
	virtual long put_SystemPropertySet(IStream *);
};

struct NotificationHandlerCollection
{
	NotificationHandlerCollection();
	long add_Handler(INotificationHandler *);
	virtual long get_At(unsigned long,INotificationHandler * *);
	virtual long get_Count(unsigned long *);
};

class NotificationListenerBackgroundActivation
{
	long SetTimer();
	static void TimerCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
protected:
	void TriggerBackgroundTasks();
public:
	NotificationListenerBackgroundActivation();
	long NotificationChanged();
};

class NotificationPlatform
{
	struct PdcHelper
	{
		long Activate(PDC_ACTIVITY_TYPE,PDC_ACTIVATE_SCENARIO,void * *);
		~PdcHelper();
	};

	long DeleteMMF();
	long InitializeDatabase();
	long InitializePackageCatalogListener();
	long IsMMFPresent(int *);
	long IsToastSettingsBroken(INotificationHandler *,int *);
	long LoadAppsFromRegistry(bool);
	long MigrateDatabase(WPN_INSTANCE_PRIVILEGE);
	long RecoverToastSettingsIfBroken(INotificationHandler *);
public:
	NotificationPlatform();
	bool IsOutlookAumId(unsigned short const *);
	bool IsOutlookQuirkEnabled();
	int CheckPrivilege();
	long CheckNotificationHandlerSettingsEnabled(INotificationHandler *,unsigned short const *,unsigned short const *,bool,PolicyLevel *);
	long Connect();
	long DisableOutlookQuirk();
	long Disconnect();
	long GetPeriodicUpdate(IPeriodicUpdate * *);
	long Initialize(IPlatformConfigurationProvider *);
	long InitializeCdp();
	long IsCloudConnectionRequired(int *);
	long PollAtBoot();
	long RestoreOutlookSecondaryTileCapabilties();
	long ShutdownCdp();
	virtual ~NotificationPlatform();
	void AttachMembers(IPlatformConfigurationProvider *);
};

struct NotificationSettings
{
	NotificationSettings();
	long RuntimeClassInitialize(unsigned short const *);
	virtual long get_HandlerKey(unsigned short * *);
	virtual long get_Setting(unsigned short const *,int *);
	virtual long get_SettingsEnumerator(INotificationSettingsEnumerator * *);
	virtual long put_Setting(unsigned short const *,int);
};

struct NotificationSettingsEnumerator
{
	virtual long get_Next(unsigned short * *,int *);
};

struct NotificationUpdateDataWork
{
	NotificationUpdateDataWork(unsigned short const *,unsigned long,unsigned short const *,WpnNotificationData *,NotificationPlatform *);
	virtual bool Merge(ThrottledWorkItem *);
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
	virtual ~NotificationUpdateDataWork();
};

class OnConnectedScheduler
{
	OnConnectedScheduler();
	long RegisterNetworkStatusCallback(Windows::Networking::Connectivity::INetworkInformationStatics *);
	void CleanupWorkItems();
	void UnregisterNetworkStatusCallback(Windows::Networking::Connectivity::INetworkInformationStatics *);
public:
	long ScheduleWorkItemOnConnected(WorkItem *);
	static long CreateInstance(Windows::Networking::Connectivity::INetworkInformationStatics *,IResourceManager *,ThreadPool *,OnConnectedScheduler * *);
	virtual void AddRef();
	virtual void NetworkStatusChanged();
	virtual void ReleaseRef();
};

struct PackageAppMapping
{
	long ValidateAppInPackage(unsigned short const *,unsigned short const *);
};

namespace PayloadPropertyNames
{
	unsigned short const * const ContentEncoding;
	unsigned short const * const CryptSalt;
	unsigned short const * const DecryptKey;
	unsigned short const * const NotificationData;
	unsigned short const * const SecondaryChannelId;
};

struct PdcNetworkController
{
	virtual long Activate(void * *);
	virtual long DeActivate(void *);
};

class PeriodicUpdateManager
{
	int CheckURLIsValid(unsigned short const *);
	long RemoveHelper(unsigned short const *,__MIDL___MIDL_itf_wpntypes_0000_0000_0003,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	long RetrieveHttpHeader(void *,unsigned short const *,unsigned short * *);
	long RetrieveNotification(unsigned short const *,unsigned long,char *,unsigned long *,unsigned long *,unsigned short * *,unsigned short * *,unsigned short * *);
	long SetupTimer(_WPN_FILE_TIME,__MIDL___MIDL_itf_wpnplatform_0000_0004_0003,_WPN_TIMER_PERSISTENCE *,_GUID *);
	static long UnpackPersistedEvent(_GUID,void *,_PERSISTED_PERIODIC_UPDATE * *,int *);
	void CleanupTimer(_GUID,_WPN_TIMER_PERSISTENCE *);
	void PostNotificationInternal(unsigned short const *,unsigned long,unsigned short const *,unsigned short const *,unsigned short const *,_WPN_FILE_TIME,_GUID const *,unsigned long *);
public:
	long Initialize(NotificationPlatform *);
	static TimerBrokerHelper * s_Timer;
	virtual int ValidUpdateEntriesExist();
	virtual long CleanupApp(unsigned short const *);
	virtual long PostNotification(unsigned short const *,unsigned short const *,unsigned short const *,__MIDL___MIDL_itf_wpntypes_0000_0000_0003,_GUID const *);
	virtual long Reset(unsigned short const *,__MIDL___MIDL_itf_wpntypes_0000_0000_0003);
	virtual long Set(unsigned short const *,__MIDL___MIDL_itf_wpntypes_0000_0000_0003,unsigned int,unsigned short const * *,__MIDL___MIDL_itf_wpnplatform_0000_0004_0003,_WPN_FILE_TIME,unsigned short *);
	virtual long TimerFired(_GUID const *);
	virtual long TriggerUpdateAtBoot();
};

class PersistenceManager
{
	long AllocateAppHeader(unsigned short,WPN_PERSISTENCE_APP_BUFFER *);
	long CreateHeaderBuffer(unsigned long,unsigned short,WPN_APPDB_REG_HEADER * *);
	long GrowExistingBuffer();
	long InitializeMMF(WPN_INSTANCE_PRIVILEGE);
	long OpenMMF(WPN_INSTANCE_PRIVILEGE,WPN_MMF_HANDLE *,int *);
	long OpenMigrationMMF(unsigned short const *,unsigned short,WPN_MMF_HANDLE *);
	long OpenRegistry(WPN_INSTANCE_PRIVILEGE);
	unsigned short GetAppGrowthCount();
	unsigned short GetInitialAppCount();
	void ScheduleIdleTask();
	void Shutdown(WPN_INSTANCE_PRIVILEGE);
	void ShutdownMMF();
public:
	PersistenceManager(NotificationPlatform *);
	virtual long FlushNotificationData(int);
	virtual long GetNewPersistentAppBuffer(unsigned int,WPN_PERSISTENCE_APP_BUFFER *);
	virtual long Initialize(WPN_INSTANCE_PRIVILEGE);
	virtual long LoadMMFFromMigration();
	virtual long MarkUsedPersistentAppBuffer(WPN_PERSISTENCE_APP_BUFFER *);
	virtual long MigrateBuffer(unsigned short const *,unsigned short const *,WPN_MMF_HANDLE *,void * *);
	virtual long PrepareBufferMigration(unsigned short,WPN_MMF_HANDLE *,unsigned short *,void * *);
	virtual long SwitchPrivilege(WPN_INSTANCE_PRIVILEGE);
	virtual void * GetBuffer(PERSISTENCE_BUFFER_TYPE);
	virtual void BeginUpdateAppHeader(int);
	virtual void CreateFreeListFromMigration();
	virtual void EndUpdateAppHeader(int);
	virtual void FreePersistentAppBuffer(WPN_PERSISTENCE_APP_BUFFER *);
	virtual void LockBuffer(PERSISTENCE_BUFFER_LOCK);
	virtual void MigrateAppBuffer(WPN_MMF_HANDLE *,void *,WPN_PERSISTENCE_APP_BUFFER *);
	virtual void RetrieveAppBuffer(WPN_PERSISTENCE_APP_BUFFER *);
	virtual void SwitchToExpandedBuffer();
	virtual void UnlockBuffer(PERSISTENCE_BUFFER_LOCK);
	virtual ~PersistenceManager();
};

class PlatformFactory
{
protected:
	virtual ~PlatformFactory();
public:
	PlatformFactory();
	virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
	virtual long LockServer(int);
};

struct PollAtBootWork
{
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
};

class PollingAppDataList
{
	long PopulateRoamingData(_PERSISTED_PERIODIC_UPDATE * const,unsigned int,__MIDL___MIDL_itf_wpnplatform_0000_0017_0001 *);
public:
	long AddPollingDataToList(_PERSISTED_PERIODIC_UPDATE *);
	long GetPollingDataList(IWpnSettingsEndpoint *,__MIDL___MIDL_itf_wpnplatform_0000_0024_0001 * *);
};

struct PollingUrlRegistrationCache
{
	long ApplyAndRemoveFromCache(unsigned short const *,unsigned short const *);
	long CachePollingEntry(__MIDL___MIDL_itf_wpnplatform_0000_0017_0001 * const);
	virtual ~PollingUrlRegistrationCache();
};

class PowerManagementHandler
{
	PowerManagementHandler();
	long HandleAcPowerChange(POWERBROADCAST_SETTING *);
	long HandleMonitorSettingChange(POWERBROADCAST_SETTING *);
	long HandlePowerSettingChange(POWERBROADCAST_SETTING *);
	long OnBatterySaverStateChange(unsigned long);
	long OnLowPowerStateChange(LowPowerState);
	long OnMonitorPowerChange(MonitorState);
	long SubmitConfigureBatchingWork(__MIDL___MIDL_itf_wpntypes_0000_0000_0005);
	long SubmitConfigurePowerSaverWork();
	long SubscribeToAcPowerEvent();
	long SubscribeToBackgroundActivitySuspendedWnf();
	long SubscribeToBatterySaverWnf();
	long SubscribeToLowPowerEvent();
	long SubscribeToMonitorPowerEvent();
	long UpdateBatchingState(__MIDL___MIDL_itf_wpntypes_0000_0000_0005);
	static unsigned long AcPowerCallback(void *,unsigned long,void *);
	static unsigned long MonitorSettingCallback(void *,unsigned long,void *);
	static unsigned long PowerSettingCallback(void *,unsigned long,void *);
public:
	long StartPowerMonitor();
	long StopPowerMonitor();
	long UpdateServerBatchingState(__MIDL___MIDL_itf_wpntypes_0000_0000_0005);
	long UpdateServerPowerSaverState();
	static long BatterySaverStateChangeProc(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
	static long CreateInstance(NotificationPlatform *,PowerManagementHandler * *);
	virtual ~PowerManagementHandler();
};

struct PresentationEndpointCleanupWork
{
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
};

class PresentationEndpointFacade
{
	virtual ~PresentationEndpointFacade();
public:
	PresentationEndpointFacade(IPlatformConfigurationProvider *);
	virtual long ActivateToastActionTrigger(unsigned short const *,unsigned short const *,unsigned short const * *,unsigned long);
	virtual long Advise(IUnknown *,unsigned long *);
	virtual long EnumConnections(IEnumConnections * *);
	virtual long GetAssetsFromHandler(unsigned short const *,IHandlerAssetCollection * *);
	virtual long GetConnectionInterface(_GUID *);
	virtual long GetConnectionPointContainer(IConnectionPointContainer * *);
	virtual long QueryAppSetting(unsigned short const *,unsigned long *);
	virtual long QueryQuietHours(int *,int *);
	virtual long ResolveMsAppDataPath(unsigned short const *,unsigned short const *,unsigned short * *);
	virtual long ResolveMsAppxPath(unsigned short const *,unsigned short const *,unsigned short const *,DEVICE_SCALE_FACTOR,__MIDL___MIDL_itf_wpnplatform_0000_0016_0001,unsigned short * *);
	virtual long ResolveTextLanguage(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short * *);
	virtual long TileCloseSession(unsigned long);
	virtual long TileCreateSession(unsigned long *);
	virtual long TileRequestNotification(__MIDL___MIDL_itf_wpnplatform_0000_0014_0002 const *,unsigned long);
	virtual long TileRequestResource(__MIDL___MIDL_itf_wpnplatform_0000_0010_0002,__MIDL___MIDL_itf_wpnplatform_0000_0014_0004 const *,unsigned long);
	virtual long TileRequestResourceForeground(__MIDL___MIDL_itf_wpnplatform_0000_0010_0002,__MIDL___MIDL_itf_wpnplatform_0000_0014_0004 const *,unsigned long);
	virtual long TileUpdateSession(unsigned long,__MIDL___MIDL_itf_wpnplatform_0000_0014_0001 const *,unsigned long);
	virtual long ToastClearAppNotifications(unsigned short const *);
	virtual long ToastClearNotification(__MIDL___MIDL_itf_wpnplatform_0000_0014_0005 const *,unsigned long);
	virtual long ToastClearRollover(unsigned short const *);
	virtual long ToastCloseSession(unsigned long);
	virtual long ToastCreateSession(IWpnPresentationToastSink *,unsigned long *);
	virtual long ToastReportStatus(unsigned short const *,unsigned long,unsigned long,long,unsigned short const *);
	virtual long ToastRequestAllNotifications(unsigned long);
	virtual long ToastSuppress(unsigned short const *);
	virtual long ToastUnblockAll();
	virtual long Unadvise(unsigned long);
};

class PresentationEndpointImpl
{
	long BlockToastsForAppId(Microsoft::Windows::Internal::PushNotifications::NotificationPlatformPtr &,unsigned short const *);
	long UnblockToastsForEachApp(Microsoft::Windows::Internal::PushNotifications::NotificationPlatformPtr &);
public:
	long ActivateToastActionTrigger(Microsoft::Windows::Internal::PushNotifications::NotificationPlatformPtr &,unsigned short const *,unsigned short const *,unsigned short const * *,unsigned long);
	long Advise(IUnknown *,unsigned long *);
	long GetAssetsFromHandler(Microsoft::Windows::Internal::PushNotifications::NotificationPlatformPtr &,unsigned short const *,IHandlerAssetCollection * *);
	long Initialize();
	long QueryAppSetting(Microsoft::Windows::Internal::PushNotifications::NotificationPlatformPtr &,unsigned short const *,unsigned long *);
	long TileCloseSession(Microsoft::Windows::Internal::PushNotifications::NotificationPlatformPtr &,unsigned long);
	long TileCreateSession(Microsoft::Windows::Internal::PushNotifications::NotificationPlatformPtr &,unsigned long *);
	long TileRequestNotification(Microsoft::Windows::Internal::PushNotifications::NotificationPlatformPtr &,__MIDL___MIDL_itf_wpnplatform_0000_0014_0002 const *,unsigned long);
	long TileRequestResource(Microsoft::Windows::Internal::PushNotifications::NotificationPlatformPtr &,__MIDL___MIDL_itf_wpnplatform_0000_0010_0002,__MIDL___MIDL_itf_wpnplatform_0000_0014_0004 const *,unsigned long,bool);
	long TileUpdateSession(Microsoft::Windows::Internal::PushNotifications::NotificationPlatformPtr &,unsigned long,__MIDL___MIDL_itf_wpnplatform_0000_0014_0001 const *,unsigned long);
	long ToastClearAppNotifications(Microsoft::Windows::Internal::PushNotifications::NotificationPlatformPtr &,unsigned short const *);
	long ToastClearNotification(Microsoft::Windows::Internal::PushNotifications::NotificationPlatformPtr &,__MIDL___MIDL_itf_wpnplatform_0000_0014_0005 const *,unsigned long);
	long ToastClearRollover(Microsoft::Windows::Internal::PushNotifications::NotificationPlatformPtr &,unsigned short const *);
	long ToastCloseSession(Microsoft::Windows::Internal::PushNotifications::NotificationPlatformPtr &,unsigned long);
	long ToastCreateSession(Microsoft::Windows::Internal::PushNotifications::NotificationPlatformPtr &,IWpnPresentationToastSink *,unsigned long *);
	long ToastReportStatus(Microsoft::Windows::Internal::PushNotifications::NotificationPlatformPtr &,unsigned short const *,unsigned long,unsigned long,long,unsigned short const *);
	long ToastRequestAllNotifications(Microsoft::Windows::Internal::PushNotifications::NotificationPlatformPtr &,unsigned long);
	virtual long ResolveMsAppDataPath(Microsoft::Windows::Internal::PushNotifications::NotificationPlatformPtr &,unsigned short const *,unsigned short const *,unsigned short * *);
	virtual long ResolveMsAppxPath(Microsoft::Windows::Internal::PushNotifications::NotificationPlatformPtr &,unsigned short const *,unsigned short const *,unsigned short const *,DEVICE_SCALE_FACTOR,__MIDL___MIDL_itf_wpnplatform_0000_0016_0001,unsigned short * *);
	virtual long ResolveTextLanguage(Microsoft::Windows::Internal::PushNotifications::NotificationPlatformPtr &,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short * *);
	void Cleanup(Microsoft::Windows::Internal::PushNotifications::NotificationPlatformPtr &);
};

struct PropertySetHelper
{
	long Initialize();
	long Serialize(Windows::Storage::Streams::IBuffer * *);
	long SetValue<HSTRING__ *>(unsigned short const *,HSTRING__ *);
	~PropertySetHelper();
};

struct RaiseClearedCallbackWork
{
	long SetAppUserModelId(unsigned short const *);
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
	virtual ~RaiseClearedCallbackWork();
};

struct RaiseToastClearedCallbackWork
{
	long Initialize(_WPN_TOAST_NOTIFICATION *,unsigned long,WpnMirroringBehavior);
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
	virtual ~RaiseToastClearedCallbackWork();
};

struct RaiseToastRolloverClearedCallbackWork
{
	long Initialize(NotificationPlatform *,unsigned short const *,INotificationCollection *);
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
	virtual ~RaiseToastRolloverClearedCallbackWork();
};

struct ReconnectWork
{
	ReconnectWork(ConnectionManagerPtr &,IResourceManager *,unsigned long);
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
};

struct RegisterApplicationChangeHandlerWork
{
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
	virtual ~RegisterApplicationChangeHandlerWork();
};

class RegistrationEndpointFacade
{
	Microsoft::Windows::Internal::PushNotifications::NotificationPlatformPtr Initialize();
public:
	virtual long CachePollingEntry(__MIDL___MIDL_itf_wpnplatform_0000_0017_0001 *);
	virtual long GetRegisteredAssetsForHandler(unsigned short const *,IHandlerAssetCollection * *);
	virtual long GetRegisteredHandler(unsigned short const *,INotificationHandler * *);
	virtual long GetRegisteredHandlersFromParent(unsigned short const *,INotificationHandlerCollection * *);
	virtual long GetRegisteredHandlersFromParentWithCapability(unsigned short const *,unsigned short const *,INotificationHandlerCollection * *);
	virtual long RegisterApplication(unsigned short const *,unsigned short const *,unsigned int,WPN_APP_TYPE);
	virtual long RegisterHandler(INotificationHandler *,IHandlerAssetCollection *);
	virtual long RegisterSystemApplication(unsigned short const *,unsigned short const *,unsigned int,unsigned long,unsigned char *);
	virtual long RemovePhoneVoipRegistration(unsigned short const *);
	virtual long UnregisterApplication(unsigned short const *);
	virtual long UnregisterByPackage(unsigned short const *);
	virtual long UnregisterHandler(unsigned short const *);
	virtual long UnregisterSystemApplication(unsigned short const *);
	virtual long UpdateHandlerCapabilities(INotificationHandlerSettings *,int);
	virtual long UpdatePhoneVoipRegistration(unsigned short const *,_GUID const *);
	virtual long UpdateRegistration(unsigned short const *,unsigned short const *,unsigned int,WPN_APP_TYPE);
};

class RegistrationEndpointImpl
{
	static bool AppListContainsHandlerKey(std::list<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > &,unsigned short const *);
	static int IsNonSystemApplication(NotificationPlatform *,unsigned short const *);
	static long MigrateSecondaryTileHelper(NotificationPlatform *,unsigned short const *,INotificationHandlerCollection *,std::list<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > &);
	static long MigrateSecondaryTilesForParent(NotificationPlatform *,INotificationHandler *);
	static long ScheduleClearedCallback(NotificationPlatform *,unsigned short const *);
	static long UnblockRawChannelForApp(NotificationPlatform *,unsigned short const *);
public:
	static long CachePollingEntry(NotificationPlatform *,__MIDL___MIDL_itf_wpnplatform_0000_0017_0001 *);
	static long GetRegisteredAssetsForHandler(NotificationPlatform *,unsigned short const *,IHandlerAssetCollection * *);
	static long GetRegisteredHandler(NotificationPlatform *,unsigned short const *,INotificationHandler * *);
	static long GetRegisteredHandlersFromParent(NotificationPlatform *,unsigned short const *,INotificationHandlerCollection * *);
	static long GetRegisteredHandlersFromParentWithCapability(NotificationPlatform *,unsigned short const *,unsigned short const *,INotificationHandlerCollection * *);
	static long RegisterApplication(NotificationPlatform *,unsigned short const *,unsigned short const *,unsigned int,WPN_APP_TYPE);
	static long RegisterHandler(NotificationPlatform *,INotificationHandler *,IHandlerAssetCollection *);
	static long RegisterSystemApplication(NotificationPlatform *,unsigned short const *,unsigned short const *,unsigned int,unsigned long,unsigned char *);
	static long RemovePhoneVoipRegistration(NotificationPlatform *,unsigned short const *);
	static long UnregisterApplication(NotificationPlatform *,unsigned short const *);
	static long UnregisterByPackage(NotificationPlatform *,unsigned short const *);
	static long UnregisterHandler(NotificationPlatform *,unsigned short const *);
	static long UnregisterSystemApplication(NotificationPlatform *,unsigned short const *);
	static long UpdateHandlerCapabilities(NotificationPlatform *,INotificationHandlerSettings *,int);
	static long UpdatePhoneVoipRegistration(NotificationPlatform *,unsigned short const *,_GUID const *);
	static long UpdateRegistration(NotificationPlatform *,unsigned short const *,unsigned short const *,unsigned int,WPN_APP_TYPE);
};

struct RegistryHelper
{
	long CreateSubKey(unsigned short const *,std::unique_ptr<RegistryHelper,std::default_delete<RegistryHelper> > &,unsigned long,unsigned long);
	long OpenSubKey(unsigned short const *,std::unique_ptr<RegistryHelper,std::default_delete<RegistryHelper> > &,unsigned long,unsigned long);
	long OpenSubKeyByIndex(unsigned long,std::unique_ptr<RegistryHelper,std::default_delete<RegistryHelper> > &);
	long ReadBinaryValue(unsigned short const *,unsigned char *,unsigned long *);
	long ReadDWORDValue(unsigned short const *,unsigned long &);
	long ReadStringValue(unsigned short const *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	long WriteDWORDValue(unsigned short const *,unsigned long);
	long WriteStringValue(unsigned short const *,unsigned short const *);
	static long Create(HKEY__ *,unsigned short const *,unsigned long,std::unique_ptr<RegistryHelper,std::default_delete<RegistryHelper> > &);
	static long Delete(std::unique_ptr<RegistryHelper,std::default_delete<RegistryHelper> > &);
};

class RequestChannelWork
{
	long InvokeFailedRequestWork(long);
public:
	long SetAppServerKey(unsigned short const *);
	long SetChannelId(unsigned short const *);
	long SetCookie(unsigned long);
	long SetPackageFamilyName(unsigned short const *);
	long SetSecondaryChannelId(unsigned short const *);
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
	virtual ~RequestChannelWork();
};

class RequestNotificationWork
{
	long FillNotifications(INotificationCollection *,__MIDL___MIDL_itf_wpnplatform_0000_0010_0001);
	long RaiseCallback();
public:
	long Initialize(ITileQueueManager *,unsigned long,__MIDL___MIDL_itf_wpnplatform_0000_0014_0002 const *,WpnCallbackReference *);
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
	virtual ~RequestNotificationWork();
};

struct RequestResourceWork
{
	long Initialize(IImageRequest *,__MIDL___MIDL_itf_wpnplatform_0000_0010_0002,unsigned long,unsigned long,__MIDL___MIDL_itf_wpnplatform_0000_0014_0004 const *,bool,WpnCallbackReference *);
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
	virtual ~RequestResourceWork();
};

class ResourceManagerImpl
{
	ResourceManagerImpl();
	long BlockTileNotifications();
	long InitializeMobileBroadbandHandler();
	long InitializeNetworkInformation();
	long InitializeOnConnectedScheduler();
	static long InvokeIdleTask();
	void Shutdown();
protected:
	static __int64 WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	static long RunMessageLoop(void *);
	static void BackgroundProcessing(_TP_CALLBACK_INSTANCE *,void *,_TP_WORK *);
public:
	static long DeviceACWnfCallback(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
	static long UserPresenceWnfCallback(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
	virtual PowerSaverState EvaluatePowerState();
	virtual bool IsAllowListUploadEnabled();
	virtual bool IsDeviceInLowPowerState();
	virtual long Initialize();
	virtual long InitializeBackgroundProcessing();
	virtual long InitializeMobileBroadbandMonitoring();
	virtual long IsAppAllowListed(unsigned short const *,int *);
	virtual long IsBackgroundActivitySuspended(bool *);
	virtual long IsConnectedToInternet(int *);
	virtual long IsDeviceInAcMode(bool *);
	virtual long IsDeviceInBatterySaverMode(bool *);
	virtual long IsMonitorDisplayOn(bool *);
	virtual long RefreshEnergySaverAllowList();
	virtual long ReportAndCheckDownloadUsage(unsigned short const *,int,__MIDL___MIDL_itf_wpntypes_0000_0000_0003,unsigned long,unsigned __int64);
	virtual long ScheduleWorkItemOnConnected(WorkItem *);
	virtual long SubscribeToIdleStateChangeWnfEvent();
	virtual long UnblockAllChannels();
	virtual long UnblockChannel(unsigned short const *,__MIDL___MIDL_itf_wpntypes_0000_0000_0003);
	virtual long UnsubscribeFromIdleStateChangeWnfEvent();
	virtual long UpdateServerBatchingState(__MIDL___MIDL_itf_wpntypes_0000_0000_0005);
	virtual long UpdateServerPowerSaverState();
	virtual long get_AppAllowList(std::vector<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > &);
	virtual void GetClientBatchingState(__MIDL___MIDL_itf_wpntypes_0000_0000_0005 *);
	virtual void GetNetworkCost(MobileBroadbandNetworkCost *,int *);
	virtual void MarkAllowListForUpload();
	virtual void Reset();
	virtual void ResetAllowListForUpload();
	virtual void UninitializeBackgroundProcessing();
	virtual ~ResourceManagerImpl();
};

struct RevokeChannelWork
{
	long SetChannelId(unsigned short const *);
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
	virtual ~RevokeChannelWork();
};

class RunningApps
{
	RunningApps::_TOASTSLISTITEM * GetToastCallback(unsigned long);
	long CallSinkHelper(Notification *,TransientNotificationDetails *,IWpnNotificationSink *);
	long CreateGit();
	long DeleteToastItem(RunningApps::_TOASTSLISTITEM *);
	long IsAppAllowedToReceiveCallback(unsigned short const *,int *,int *);
public:
	long AddCallbackForNotificationStatus(IWpnNotificationFeedback *);
	long AddCallbackForToast(int,int,unsigned long,IWpnToastFeedback *);
	long ApplicationHasSink(unsigned short const *,int *);
	long CallAppSink(Notification *,TransientNotificationDetails *);
	long CallConnectionStatusSink(int);
	long CallNotificationFeedback(__MIDL___MIDL_itf_wpnplatform_0000_0004_0002,unsigned long);
	long SetAppSink(unsigned short const *,IWpnNotificationSink *);
	long SetConnectionStatusSink(unsigned short const *,IWpnConnectionStatusSink *);
	long ToastStatus(NotificationPlatform *,unsigned long,unsigned long,long,unsigned short const *);
	long ToastStatusSync(unsigned long,__MIDL___MIDL_itf_wpnplatform_0000_0004_0001,long,unsigned short const *);
	static long CallToastFeedback(RunningApps::_TOASTSLISTITEM *,__MIDL___MIDL_itf_wpnplatform_0000_0004_0001,long,unsigned short const *);
	virtual ~RunningApps();
};

struct SP<unsigned char,SP_HLOCAL<unsigned char> >
{
	void Attach(unsigned char *);
	void Reset();
};

class ScheduledTileManager
{
	long LoadPersistentEvents(unsigned long,_GUID *,void *,int,ExpiredScheduledTileWork *);
	long PostScheduledNotification(ScheduledTileManager::_PERSISTED_TILE *);
	long ProcessLatchedEvents(_GUID,_ULARGE_INTEGER,unsigned short const *,ExpiredScheduledTileWork *,int *);
	long SetupTimer(_ULARGE_INTEGER,ScheduledTileManager::_PERSISTED_TILE *,_GUID *);
	static long UnpackPersistedEvent(_GUID,void *,ScheduledTileManager::_PERSISTED_TILE * *,int *);
	static void MigrateToVersionedTile(ScheduledTileManager::_PERSISTED_TILE *,ScheduledTileManager::_PERSISTED_TILE_V1 *);
	void CleanupTimer(_GUID,_WPN_TIMER_PERSISTENCE *);
public:
	ScheduledTileManager();
	long Initialize(NotificationPlatform *);
	static TimerBrokerHelper * s_Timer;
	virtual long Add(NotificationPlatform *,unsigned short *,unsigned short const *,_WPN_SCHEDULED_TILE *,_GUID *);
	virtual long CleanupApp(unsigned short const *);
	virtual long GetScheduledForApp(unsigned short const *,_WPN_SCHEDULED_TILE_LIST * *);
	virtual long ProcessExpired(_GUID *);
	virtual long Remove(_GUID);
	virtual long TimerFired(_GUID const *);
	~ScheduledTileManager();
};

class ScheduledToasts
{
	long RemoveHelper(_GUID,int);
	long SubscribeAndAddToList(_WNF_STATE_NAME,_GUID,_GUID,unsigned short const *,unsigned short *);
	static long PostScheduledNotification(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,_GUID const *,__int64,_GUID *,int,int);
	static long TimerIsExpired(ScheduledToasts::_PERSISTEDTOAST *,int,int *);
	static long UnpackPersistedEvent(_GUID,void *,ScheduledToasts::_PERSISTEDTOAST * *,int *);
	static long WnfCallback(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
	static void MigrateFromV3ToV4(ScheduledToasts::_PERSISTEDTOAST *,ScheduledToasts::_PERSISTEDTOAST_V3 *);
	static void MigratePersistedToast(ScheduledToasts::_PERSISTEDTOAST *,unsigned char *,unsigned long);
public:
	long Add(NotificationPlatform *,unsigned short *,unsigned short const *,_WPN_SCHEDULED_TOAST *,_GUID *);
	long GetToastsForApp(unsigned short const *,_WPN_SCHEDULED_TOAST_LIST * *);
	long Initialize(NotificationPlatform *);
	long RemoveByAppId(unsigned short const *);
	void Uninitialize();
};

struct SebEvents
{
	long GetDisplayOnEvent(_GUID *);
	long GetInternetAvailableEvent(_GUID *);
};

class SendExemptionListWork
{
	std::vector<unsigned short const *,std::allocator<unsigned short const *> > ConvertToRawArray(std::vector<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > &);
	void Reconnect();
public:
	virtual bool Merge(ThrottledWorkItem *);
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
};

class SessionManager
{
	long ForwardNotificationToAFC(Notification *,TransientNotificationDetails *);
	long IsAppRunning(Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short> > const &,int *);
	long NotifyAFCAboutDismiss(_WPN_TOAST_NOTIFICATION *,unsigned long);
	long NotifyListenerOfRemoval(INotificationCollection *);
	long SetParentHandlerToastStorageCapability(INotificationHandler *);
	long TileSessionLoop(std::function<long (TileSession *)>);
	long ToastSessionLoop(std::function<long (ToastSession *)>);
	std::vector<std::shared_ptr<TileSession>,std::allocator<std::shared_ptr<TileSession> > > GetTileSessions();
	std::vector<std::shared_ptr<ToastSession>,std::allocator<std::shared_ptr<ToastSession> > > GetToastSessions();
public:
	SessionManager();
	virtual long CancelToast(unsigned short const *,unsigned long);
	virtual long ClearAll();
	virtual long ClearAllTilesAndBadges();
	virtual long ClearAllToasts(unsigned short const *,OperationType);
	virtual long ClearTile(__MIDL___MIDL_itf_wpntypes_0000_0000_0003,unsigned short const *);
	virtual long ClearTile(unsigned short const *,unsigned short const *);
	virtual long CloseTileSession(void *,unsigned long);
	virtual long CloseToastSession(void *,unsigned long);
	virtual long CompletedToastRequest(unsigned long,INotificationCollection *,INotificationHandlerCollection *);
	virtual long CreateTileSession(void *,unsigned long,IGlobalInterfaceTable *,unsigned short const *,unsigned short const *,unsigned long *);
	virtual long CreateToastSession(void *,unsigned long,IGlobalInterfaceTable *,unsigned short const *,unsigned short const *,unsigned long *);
	virtual long Deliver(Notification *,INotificationHandler *,TransientNotificationDetails *);
	virtual long Deliver(WPN_NOTIFICATION *);
	virtual long DetachTileEndpoint(void *);
	virtual long DetachToastEndpoint(void *);
	virtual long GetToastSession(unsigned long,ToastSession * *);
	virtual long RaiseAppChangedCallback(unsigned short const *);
	virtual long RaiseClearedCallback(__MIDL___MIDL_itf_wpntypes_0000_0000_0003,unsigned short const *);
	virtual long RaiseTileClearedCallback(unsigned short const *,unsigned short const *);
	virtual long RaiseToastClearedCallback(_WPN_TOAST_NOTIFICATION *,unsigned long,WpnMirroringBehavior);
	virtual long RaiseToastRolloverClearedCallback(unsigned short const *,INotificationCollection *);
	virtual long RemoveToasts(unsigned short const *,unsigned short const *,unsigned short const *,OperationType);
	virtual long UpdateImageDownloadPolicy(int);
	virtual long UpdateNotificationData(unsigned short const *,unsigned long,unsigned short const *,WpnNotificationData *);
	virtual long UpdateTileImageDownloadPolicy(int);
	virtual long UpdateTileSession(void *,unsigned long,unsigned long,__MIDL___MIDL_itf_wpnplatform_0000_0014_0001 const *);
	void Shutdown();
	~SessionManager();
};

class SettingsEndpointFacade
{
	Microsoft::Windows::Internal::PushNotifications::NotificationPlatformPtr Initialize();
	virtual ~SettingsEndpointFacade();
public:
	SettingsEndpointFacade(IPlatformConfigurationProvider *);
	virtual long ChangeAppSetting(unsigned short const *,WPN_SETTING_TYPE,int);
	virtual long ChangeAppSetting(unsigned short const *,unsigned short const *,int);
	virtual long ChangeEnergySaverSetting(int);
	virtual long ChangeGlobalSetting(WPN_SETTING_TYPE,int);
	virtual long ChangeMobileBroadbandCap(unsigned long);
	virtual long ClearTiles();
	virtual long GetPollingAppsInPackage(unsigned short const *,__MIDL___MIDL_itf_wpnplatform_0000_0024_0001 * *);
	virtual long GetSettingsFromHandler(unsigned short const *,INotificationHandlerSettings * *);
	virtual long PopulateCapableApps(WPN_SETTING_TYPE,__MIDL___MIDL_itf_wpnplatform_0000_0023_0002 * *);
	virtual long PopulateCapableAppsInPackage(WPN_SETTING_TYPE,unsigned short const *,__MIDL___MIDL_itf_wpnplatform_0000_0023_0002 * *);
	virtual long QueryAppSetting(unsigned short const *,WPN_SETTING_TYPE,int *);
	virtual long QueryEnergySaverSetting(int *);
	virtual long QueryGlobalSetting(WPN_SETTING_TYPE,int *,WPN_SETTING_POLICY *);
	virtual long QueryMobileBroadbandCap(unsigned long *);
	virtual long QueryMobileBroadbandDates(_WPN_FILE_TIME *,_WPN_FILE_TIME *,WPN_MBB_DATE_SOURCE *);
	virtual long QueryMobileBroadbandUsage(unsigned __int64 *);
	virtual long QueryToastWakeupTime(_WPN_FILE_TIME *);
	virtual long RegisterSettingCallback(WPN_SETTING_TYPE,IWpnSettingCallback *,unsigned long *);
	virtual long ScheduleSettingsSync(unsigned short const *,unsigned short const *);
	virtual long SetToastWakeupTime(_WPN_FILE_TIME);
	virtual long UnblockAllChannels();
	virtual long UnregisterSettingCallback(unsigned long);
	virtual long WakeupToasts();
};

class SettingsEndpointImpl
{
	static long ApplyAudioSettingsQuirk(NotificationPlatform *,unsigned short const *);
	static long CheckMobileBroadbandPolicies(NotificationPlatform *,int *);
	static long InvokeImageDownloadPolicyCallback(NotificationPlatform *);
	static long InvokeMobileBroadbandCallback(NotificationPlatform *);
	static long MigrateTileCycleProperties(NotificationPlatform *);
	static long UnblockType(NotificationPlatform *,__MIDL___MIDL_itf_wpntypes_0000_0000_0003);
	static void ChangeAppSettingImpl(NotificationPlatform *,unsigned short const *,unsigned short const *,int);
public:
	static bool IsAppInPackage(unsigned short const *,unsigned short const *);
	static long ChangeAppSetting(NotificationPlatform *,unsigned short const *,WPN_SETTING_TYPE,int);
	static long ChangeAppSetting(NotificationPlatform *,unsigned short const *,unsigned short const *,int);
	static long ChangeEnergySaverSetting(NotificationPlatform *,int);
	static long ChangeGlobalSetting(NotificationPlatform *,WPN_SETTING_TYPE,int);
	static long ChangeMobileBroadbandCap(NotificationPlatform *,unsigned long);
	static long ClearTiles(NotificationPlatform *);
	static long GetPollingAppsInPackage(IWpnSettingsEndpoint *,unsigned short const *,__MIDL___MIDL_itf_wpnplatform_0000_0024_0001 * *);
	static long GetSettingsFromHandler(NotificationPlatform *,unsigned short const *,INotificationHandlerSettings * *);
	static long PopulateCapableApps(NotificationPlatform *,WPN_SETTING_TYPE,__MIDL___MIDL_itf_wpnplatform_0000_0023_0002 * *);
	static long PopulateCapableAppsInPackage(NotificationPlatform *,WPN_SETTING_TYPE,unsigned short const *,__MIDL___MIDL_itf_wpnplatform_0000_0023_0002 * *);
	static long QueryAppSetting(NotificationPlatform *,unsigned short const *,WPN_SETTING_TYPE,int *);
	static long QueryEnergySaverSetting(NotificationPlatform *,int *);
	static long QueryGlobalSetting(NotificationPlatform *,WPN_SETTING_TYPE,int *,WPN_SETTING_POLICY *);
	static long QueryMobileBroadbandCap(NotificationPlatform *,unsigned long *);
	static long QueryMobileBroadbandDates(NotificationPlatform *,_WPN_FILE_TIME *,_WPN_FILE_TIME *,WPN_MBB_DATE_SOURCE *);
	static long QueryMobileBroadbandUsage(NotificationPlatform *,unsigned __int64 *);
	static long QueryToastWakeupTime(NotificationPlatform *,_WPN_FILE_TIME *);
	static long RegisterSettingCallback(NotificationPlatform *,WPN_SETTING_TYPE,IWpnSettingCallback *,unsigned long *);
	static long ScheduleSettingsSync(unsigned short const *,unsigned short const *);
	static long SetToastWakeupTime(NotificationPlatform *,_WPN_FILE_TIME);
	static long UnblockAllChannels(NotificationPlatform *);
	static long WakeupToasts(NotificationPlatform *);
	static void UnregisterCallbacks(NotificationPlatform *,unsigned long,unsigned long);
};

class SqliteDatabase
{
	IWpnNotification * FindReplacement(IWpnNotification *);
	IWpnNotification * ProcessRollover(unsigned short const *,unsigned short const *);
	bool BuildHandler(Statement *,INotificationHandler * *);
	bool BuildNotification(Statement *,bool,Notification * *);
	bool ValidateDB();
	long AddNewHandlerImpl(INotificationHandler *);
	long CompareHandlerKey(unsigned short const *,unsigned short const *);
	long FillReplacementExplicitId(IWpnNotification *,IWpnNotification *);
	long ParseSettingsFromRegistry(unsigned short *,unsigned short const *,NotificationSettings * *);
	long SelectNotification(unsigned long,IWpnNotification * *);
	long SelectNotificationUsingActivityId(_GUID,IWpnNotification * *);
	long UpdateHandlerImpl(INotificationHandler *);
	static void RepairCorruption_Reindex(SqliteDatabase *);
	static void RepairCorruption_StartOver(SqliteDatabase *);
	std::vector<char,std::allocator<char> > ReadRegAnsiString(unsigned short const *,unsigned short const *);
	std::vector<unsigned short,std::allocator<unsigned short> > ReadRegString(unsigned short const *,unsigned short const *);
	virtual long DeleteNotification(unsigned short const *,unsigned long,bool,NotificationSource,WpnToastDismissReason);
	void BackupAsset(IHandlerAsset *);
	void BackupChannel(IWNSChannelDetails *);
	void BackupHandler(INotificationHandler *);
	void DumpBackup();
	void InsertHandler(INotificationHandler *);
	void InsertNotification(IWpnNotification *);
	void InsertNotificationData(unsigned long,IWpnNotificationData *);
	void InsertRolloverNotification(IWpnNotification *);
	void InsertSettings(INotificationHandlerSettings *);
	void ProcessChannelExpiry();
	void ProcessExpiry();
	void PutTypeLimit(unsigned short const *,unsigned int);
	void ReloadBackup();
	void RemoveChannelBackup(unsigned short const *);
	void RepairCorruption();
	void SetBackupDumpComplete();
	void SetupLimits();
	void UpdateHandlerInternal(INotificationHandler *);
	void WriteRegAnsiString(HKEY__ *,unsigned short const *,char const *);
	void WriteRegString(HKEY__ *,unsigned short const *,unsigned short const *);
public:
	Microsoft::WRL::ComPtr<AssetCollection> GetAssetsForHandlerKey(unsigned short const *);
	SqliteDatabase();
	long SelectNotifications(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,INotificationCollection * *);
	unsigned int GetNotificationTypeLimit(unsigned short const *);
	virtual long AddAssetForHandler(unsigned short const *,IHandlerAsset *);
	virtual long AddAssetsForHandler(unsigned short const *,IHandlerAssetCollection *);
	virtual long AddNewHandler(INotificationHandler *);
	virtual long AddNewNotification(IWpnNotification *,IWpnNotification * *,int *);
	virtual long ClearAllNotifications(unsigned short const *,NotificationSource);
	virtual long ClearNotificationOverflow(unsigned short const *,unsigned short const *,NotificationSource);
	virtual long ClearNotificationsForHandler(unsigned short const *,unsigned short const *,NotificationSource,WpnMirroringBehavior);
	virtual long Connect(unsigned short const *);
	virtual long DeleteAssetsForHandler(unsigned short const *);
	virtual long DeleteHandler(unsigned short const *);
	virtual long DeleteNotification(unsigned short const *,unsigned long,NotificationSource,WpnToastDismissReason);
	virtual long DeleteNotificationUsingActivityId(_GUID,NotificationSource);
	virtual long Disconnect();
	virtual long GetAllHandlers(INotificationHandlerCollection * *);
	virtual long GetAllHandlersFromParent(unsigned short const *,unsigned short const *,INotificationHandlerCollection * *);
	virtual long GetAllImmersiveHandlersForPackage(unsigned short const *,INotificationHandlerCollection * *);
	virtual long GetChannelForHandler(unsigned short const *,IWNSChannelDetails * *);
	virtual long GetHandlerDetails(unsigned short const *,INotificationHandler * *);
	virtual long GetHandlerFromChannel(char const *,INotificationHandler * *);
	virtual long GetHandlersWithNotifications(unsigned short const *,INotificationHandlerCollection * *);
	virtual long GetMetadata(unsigned short const *,unsigned __int64 *);
	virtual long IncrementMetadata(unsigned short const *,unsigned __int64);
	virtual long IsNotificationValid(unsigned short const *,unsigned long,int *);
	virtual long RemoveChannel(unsigned short const *);
	virtual long RemoveNotifications(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,NotificationSource);
	virtual long RequestAllNotifications(unsigned short const *,INotificationCollection * *);
	virtual long RequestAssetsForHandler(unsigned short const *,IHandlerAssetCollection * *);
	virtual long RequestNotificationWithTagGroup(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,IWpnNotification * *);
	virtual long RequestNotificationsForHandler(unsigned short const *,unsigned short const *,unsigned long,INotificationCollection * *);
	virtual long SetDataChangedEvent(IDataChanged *);
	virtual long SetMetadata(unsigned short const *,unsigned __int64);
	virtual long UpdateHandler(INotificationHandler *);
	virtual long UpdateNotificationActivityId(unsigned long,_GUID *);
	virtual long UpdateNotificationData(unsigned long,IWpnNotificationData *);
	virtual long UpdateSettings(INotificationHandlerSettings *);
	virtual long ValidChannelExists(int *);
	virtual long WriteChannel(unsigned short const *,IWNSChannelDetails *);
	virtual ~SqliteDatabase();
	void GetNotificationById(unsigned short const *,unsigned long,Notification * *);
};

struct Statement
{
	_GUID GetColumnGuid(int);
	__int64 GetColumnInt64(int);
	bool FetchRow();
	int GetColumnInt32(int);
	static long dal_step(sqlite3_stmt *);
	static void dal_finalize(sqlite3_stmt *);
	static void dal_reset(sqlite3_stmt *);
	std::basic_string<char,std::char_traits<char>,std::allocator<char> > GetColumnText(int);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > GetColumnText16(int);
	std::vector<unsigned char,std::allocator<unsigned char> > GetColumnBlob(int);
	void Bind(int,char const *);
	void Bind(int,int);
	void Bind(int,unsigned short const *);
	void BindNull(int);
	void FetchNoRow();
	void Finalize();
	~Statement();
};

struct StatementCache
{
	StatementCache();
	std::shared_ptr<Statement> Get(char const *);
	void Add(std::shared_ptr<Statement>);
	~StatementCache();
};

struct StatementCacheEntry
{
	~StatementCacheEntry();
};

class StatisticsManager
{
	StatisticsManager(NotificationPlatform *);
	long GetSrumProvider(IWpnSrumProvider * *);
	long LogNetworkAttribution(unsigned short const *,unsigned short const *,unsigned short,unsigned __int64,unsigned short);
	unsigned long CapStatistic(unsigned __int64);
	void UninitializeSrumProvider();
public:
	static long CreateInstance(NotificationPlatform *,StatisticsManager * *);
	virtual long IncrementUsage(unsigned short const *,__MIDL___MIDL_itf_wpntypes_0000_0000_0003,int,int,unsigned __int64);
	virtual long QueryGlobalUsage(WPN_GLOBAL_STATISTIC_TYPE,unsigned __int64 *);
	virtual long ResetGlobalUsage(WPN_GLOBAL_STATISTIC_TYPE);
	virtual unsigned long GetTimeConnected();
	virtual void TrackBatchingEnd();
	virtual void TrackBatchingStart();
	virtual void TrackConnectionEnd();
	virtual void TrackConnectionStart();
	virtual void TrackIdleEnd();
	virtual void TrackIdleStart();
};

class SystemPlatformFactory
{
protected:
	virtual ~SystemPlatformFactory();
public:
	virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
	virtual long LockServer(int);
};

class TestEndpoint
{
	virtual ~TestEndpoint();
public:
	TestEndpoint(IPlatformConfigurationProvider *);
	virtual long ToastRequestAllCondensed(_WPN_TOAST_NOTIFICATION_CONDENSED * *,unsigned long *);
};

class ThreadPool
{
	long InvokeNextItem();
	static void ThreadPoolProc(_TP_CALLBACK_INSTANCE *,void *,_TP_WORK *);
	void WriteTelemetry();
	void WriteTelemetryDetailed();
public:
	ThreadPool();
	long Submit(WorkItem *);
	virtual ~ThreadPool();
	void Shutdown();
};

class ThrottledThreadPool
{
	long InvokeItem(ThrottledWorkItem *);
	static void ThreadPoolProc(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
public:
	ThrottledThreadPool();
	long Submit(ThrottledWorkItem *,unsigned long);
	virtual ~ThrottledThreadPool();
	void Shutdown();
};

struct ThrottledWorkItem
{
	virtual ~ThrottledWorkItem();
};

struct TileCloseSessionWork
{
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
};

namespace TileDataLayer
{
	namespace Migration
	{
		namespace Statics
		{
			bool IsMigrationDoneForUser(HKEY__ *,unsigned short const * const);
		};

	};

};

class TileQueueManager
{
	struct REQUEST_ENTRY
	{
		static int SortRequest(REQUEST_ENTRY *,REQUEST_ENTRY *);
	};

	int CreateInclusionMap(WPN_APPDB_APP_ENTRY *,unsigned long,unsigned long *,unsigned long,unsigned long,unsigned long,unsigned int,unsigned int *,int *);
	int ValidateAppStorage(WPN_APPDB_APP_ENTRY *);
	long AllocatePersistentAppData(unsigned short const *,WPN_APPDB_APP_ENTRY *,WPN_APPDB_APP_ENTRY * *);
	long CoCopyCondensedToastNotification(WPN_APPDB_APP_ENTRY *,unsigned long,_WPN_TOAST_NOTIFICATION_CONDENSED *);
	long CoCopyToastNotification(WPN_APPDB_APP_ENTRY *,unsigned long,_WPN_TOAST_NOTIFICATION *);
	long CreateAppEntry(unsigned short const *,unsigned long,WPN_APPDB_APP_ENTRY * *);
	long CreateAppHashEntry(WPN_APPDB_APP_ENTRY *);
	long CreateChannelHashEntry(char const *,WPN_APPDB_APP_ENTRY *,APPENTRY_LOCK_FLAGS);
	long CreateHashEntry<char const *>(WPN_APPDB_HASH_BUCKET *,char const *,unsigned int,APPENTRY_LOCK_FLAGS,WPN_APPDB_APP_ENTRY *);
	long CreateHashEntry<unsigned short *>(WPN_APPDB_HASH_BUCKET *,unsigned short *,unsigned int,APPENTRY_LOCK_FLAGS,WPN_APPDB_APP_ENTRY *);
	long FillCondensedToastNotificationTest(WPN_APPDB_APP_ENTRY *,unsigned long,_WPN_TOAST_NOTIFICATION_CONDENSED *);
	long FillToastNotification(WPN_APPDB_APP_ENTRY *,unsigned long,__MIDL___MIDL_itf_wpnplatform_0000_0004_0006,_WPN_TOAST_NOTIFICATION *);
	long FreeAppEntry(WPN_APPDB_APP_ENTRY *,int);
	long GetHash<char>(char const *,unsigned int,unsigned int *,unsigned int *);
	long GetHash<unsigned short>(unsigned short const *,unsigned int,unsigned int *,unsigned int *);
	long InitializePersistentBufferHeader(WPN_APPDB_APP_ENTRY *,unsigned short const *,unsigned long,unsigned short const *,unsigned char *);
	long InitialzeHashBucket(WPN_APPDB_HASH_BUCKET * *);
	long InternalInitialize(WPN_INSTANCE_PRIVILEGE);
	long InternalRegister(unsigned short const *,unsigned short const *,unsigned long,int,unsigned char *);
	long InternalUnregister(unsigned short const *);
	long InternalUpdate(unsigned short const *,unsigned short const *,unsigned long);
	long LoadAppHeader(unsigned short,unsigned short,WPN_APPDB_APP_HEADER *,WPN_APPDB_APP_DATA *,int);
	long LoadDB(WPN_INSTANCE_PRIVILEGE,WPN_APPDB_REG_HEADER *,WPN_APPDB_HEADER *);
	long LookupAppHashEntry(unsigned short const *,APPENTRY_LOCK_FLAGS,WPN_APPDB_APP_ENTRY * *);
	long LookupChannelHashEntry(char const *,APPENTRY_LOCK_FLAGS,WPN_APPDB_APP_ENTRY * *);
	long LookupHashEntry<char const *>(WPN_APPDB_HASH_BUCKET *,char const *,unsigned int,APPENTRY_LOCK_FLAGS,WPN_APPDB_APP_ENTRY * *);
	long LookupHashEntry<unsigned short const *>(WPN_APPDB_HASH_BUCKET *,unsigned short const *,unsigned int,APPENTRY_LOCK_FLAGS,WPN_APPDB_APP_ENTRY * *);
	long PopulateInboxApps();
	long PopulatePreinstallApps();
	long ProcessRequestEntry(unsigned int,WPN_APPDB_APP_ENTRY *,WPN_NOTIFICATION_REQUEST *,unsigned __int64);
	long RemoveAppHashEntry(unsigned short const *,WPN_APPDB_APP_ENTRY * *);
	long RemoveChannelHashEntry(char const *,APPENTRY_LOCK_FLAGS,WPN_APPDB_APP_ENTRY * *);
	long RemoveHashEntry<char const *>(WPN_APPDB_HASH_BUCKET *,char const *,unsigned int,APPENTRY_LOCK_FLAGS,WPN_APPDB_APP_ENTRY * *);
	long RemoveHashEntry<unsigned short const *>(WPN_APPDB_HASH_BUCKET *,unsigned short const *,unsigned int,APPENTRY_LOCK_FLAGS,WPN_APPDB_APP_ENTRY * *);
	long RequestCondensedToastNotificationWithPrivilegeTest(_WPN_TOAST_NOTIFICATION_CONDENSED * *,unsigned long *);
	long RequestNotificationWithPrivilege(WPN_NOTIFICATION_REQUEST *);
	long RequestNotificationWithoutPrivilege(WPN_NOTIFICATION_REQUEST *);
	long RequestToastNotificationWithPrivilege(_WPN_TOAST_NOTIFICATION * *,unsigned long *,unsigned short const * * *,unsigned long *);
	unsigned short CalcTotalAppCount();
	void CreateCondensedToastQueueAccessOrder(WPN_APPDB_APP_ENTRY *,QUEUE_ACCESS_ORDER_TYPE,unsigned int *,unsigned int *);
	void CreateQueueAccessOrder(WPN_APPDB_APP_ENTRY *,QUEUE_ACCESS_ORDER_TYPE,unsigned int *,unsigned int *);
	void CreateToastQueueAccessOrder(WPN_APPDB_APP_ENTRY *,QUEUE_ACCESS_ORDER_TYPE,unsigned int *,unsigned int *);
	void InitializePersistentBufferData(WPN_APPDB_APP_ENTRY *);
	void LoadNotificationIdCache();
	void SaveNotificationIdCache(WPN_APPDB_APP_ENTRY *);
	void ShutdownDB(WPN_INSTANCE_PRIVILEGE);
	void SyncWithPersistentBuffer();
	void UpdateBadgeNotificationIdCache(WPN_APPDB_APP_ENTRY *);
	void UpdateTileFlyoutNotificationIdCache(WPN_APPDB_APP_ENTRY *);
	void UpdateTileNotificationIdCache(WPN_APPDB_APP_ENTRY *);
	void UpdateToastNotificationIdCache(WPN_APPDB_APP_ENTRY *);
public:
	TileQueueManager(NotificationPlatform *,IPersistenceManager *,DataChangedEvent *,IDebuggerSupport *);
	long Initialize();
	virtual int ValidChannelsExist();
	virtual long AttachSessionToApp(unsigned short const *,unsigned long,unsigned long);
	virtual long CheckNotificationValidity(unsigned short const *,unsigned int,unsigned long *,int *);
	virtual long ClearAll();
	virtual long ClearTile(__MIDL___MIDL_itf_wpntypes_0000_0000_0003,unsigned short const *,unsigned long *);
	virtual long ClearToast(unsigned short const *,unsigned long,OperationType,__MIDL___MIDL_itf_wpnplatform_0000_0004_0006);
	virtual long ClearToastRolloverForApp(unsigned short const *);
	virtual long ClearToastsForApp(unsigned short const *,OperationType);
	virtual long CreateChannel(unsigned short const *,WPN_CHANNEL_INFO *);
	virtual long DetachSession(unsigned long);
	virtual long DetachSessionFromApp(unsigned short const *,unsigned long);
	virtual long DisableSetting(unsigned short const *,unsigned long);
	virtual long EnableSetting(unsigned short const *,unsigned long);
	virtual long EnumerateAll(IAppInfoCallback *);
	virtual long GetAppEntry(unsigned short const *,APPENTRY_LOCK_FLAGS,AppEntry * *);
	virtual long GetChannelForApp(unsigned short const *,WPN_CHANNEL_INFO *);
	virtual long GetCondencedToastsForApp(unsigned short const *,_WPN_TOAST_NOTIFICATION_CONDENSED * *,unsigned long *);
	virtual long GetSetting(unsigned short const *,unsigned long *);
	virtual long GetToastsForApp(unsigned short const *,_WPN_TOAST_NOTIFICATION * *,unsigned long *);
	virtual long LookupChannel(char const *,unsigned short * *,unsigned long *);
	virtual long ProcessNewNotification(WPN_NOTIFICATION *,unsigned long *);
	virtual long QueryPackageFullName(unsigned short const *,unsigned short * *);
	virtual long QueryPhoneVoipAgentId(unsigned short const *,_GUID *);
	virtual long QueryWNFEventName(unsigned short const *,unsigned char *);
	virtual long Register(unsigned short const *,unsigned short const *,unsigned long);
	virtual long RegisterPhoneVoip(unsigned short const *,_GUID const *);
	virtual long RegisterSystem(unsigned short const *,unsigned short const *,unsigned long,unsigned char *);
	virtual long RemoveChannel(unsigned short const *);
	virtual long RemoveToasts(unsigned short const *,unsigned short const *,unsigned short const *,OperationType);
	virtual long RequestAllCondensedToastNotificationsTest(_WPN_TOAST_NOTIFICATION_CONDENSED * *,unsigned long *);
	virtual long RequestAllToastNotifications(_WPN_TOAST_NOTIFICATION * *,unsigned long *,unsigned short const * * *,unsigned long *);
	virtual long RequestNotification(WPN_NOTIFICATION_REQUEST *);
	virtual long RetrieveAumIdsForPackage(unsigned short const *,std::vector<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > &);
	virtual long SwitchPrivilege(WPN_INSTANCE_PRIVILEGE);
	virtual long Unregister(unsigned short const *);
	virtual long UnregisterPhoneVoip(unsigned short const *);
	virtual long Update(unsigned short const *,unsigned short const *,unsigned long);
	virtual long UpdateChannel(unsigned short const *,WPN_CHANNEL_INFO *);
	virtual unsigned long GetNotificationTrackingId();
	virtual void DefragPersistentBuffer();
	virtual void IncrementTBT(unsigned __int64);
	virtual void QueryTBT(unsigned __int64 *);
	virtual void RemoveExpiredToasts();
	virtual void ResetTBT();
	~TileQueueManager();
};

class TileSession
{
	struct SubscriptionEntry
	{
		~SubscriptionEntry();
	};

	TileDeliveryType DeliveryTypeFromNotificationTypeName(unsigned short const *);
	bool IsAppSubscribed(unsigned short const *,TileDeliveryType);
	bool IsWildCardEnabled(TileDeliveryType);
	long DeliverInternal(Notification *,TransientNotificationDetails *);
	long GetTypeCode(unsigned short const *,__MIDL___MIDL_itf_wpnplatform_0000_0010_0001 *);
	long RaiseClearedCallbackInternal(__MIDL___MIDL_itf_wpntypes_0000_0000_0003,unsigned short const *);
	long RaiseClearedCallbackInternal(unsigned short const *,unsigned short const *);
	void AddAppSubscription(unsigned short const *,TileDeliveryType);
	void RemoveAppSubscription(unsigned short const *,TileDeliveryType);
	void UpdateWildCard(TileDeliveryType);
public:
	TileSession();
	long Close(void *);
	long Open(void *,unsigned long,IGlobalInterfaceTable *,unsigned short const *,unsigned short const *);
	long RaiseAppChangedCallback(unsigned short const *);
	long RaiseImageDownloadPolicyCallback(int);
	long Update(void *,unsigned long,__MIDL___MIDL_itf_wpnplatform_0000_0014_0001 const *);
	virtual long Deliver(Notification *,TransientNotificationDetails *);
	virtual long Deliver(WPN_NOTIFICATION *);
	virtual long RaiseClearedCallback(__MIDL___MIDL_itf_wpntypes_0000_0000_0003,unsigned short const *);
	virtual long RaiseClearedCallback(unsigned short const *,unsigned short const *);
	~TileSession();
};

class TimerBrokerHelper
{
	static long TimerWnfCallback(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
public:
	TimerBrokerHelper(ITimerBrokerCallback *,NotificationPlatform *);
	long AddToList(_WPN_TIMER_PERSISTENCE *,_GUID const *,unsigned __int64,int);
	long GetExpiredIdListForApp(unsigned short const *,unsigned __int64,unsigned int *,_GUID * *);
	long GetPersistenceIdListForAll(unsigned int *,_GUID * *);
	long GetPersistenceIdListForApp(unsigned short const *,unsigned int *,_GUID * *);
	long Remove(_GUID,int,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	long RemoveAllForApp(unsigned short const *);
	long SubscribeAll();
	void Uninitialize();
};

struct ToastCloseSessionWork
{
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
};

struct ToastFeedbackWork
{
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
	virtual ~ToastFeedbackWork();
};

class ToastForwardingWork
{
	bool IsMirroringEnabled(unsigned short const *,ICDPActivityStore *,WnsCPLog::WnsAFCToastForwarding &);
	void ForwardNotificationToAFC(WnsCPLog::WnsAFCToastForwarding &);
	void ParsePayloadAndStoreActivityId();
public:
	ToastForwardingWork(NotificationPlatform *,Notification *,TransientNotificationDetails *);
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
	virtual ~ToastForwardingWork();
};

struct ToastRequestNotificationWork
{
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
};

class ToastSession
{
	long PopulatePFN(unsigned short const *,unsigned short * *);
public:
	ToastSession();
	long Close(void *);
	long Open(void *,unsigned long,IGlobalInterfaceTable *,unsigned short const *,unsigned short const *);
	virtual long Cancel(unsigned short const *,unsigned long);
	virtual long Deliver(Notification *,TransientNotificationDetails *,IWpnNotification *,int,int);
	virtual long Deliver(unsigned short *,WPN_NOTIFICATION *);
	virtual long NotificationDataUpdated(unsigned short const *,unsigned long,WpnNotificationData *);
	virtual long RaiseToastClearedCallback(INotificationCollection *);
	virtual long RaiseToastClearedCallback(_WPN_TOAST_NOTIFICATION *,unsigned long);
	virtual long RaiseToastRolloverClearedCallback(unsigned short const *);
	virtual long ToastRequestCompleted(INotificationCollection *,INotificationHandlerCollection *);
	virtual long ToastRequestCompleted(_WPN_TOAST_NOTIFICATION *,unsigned long,unsigned short const * *,unsigned long);
};

class ToastWakeupTimerManager
{
protected:
	static void TimerProcessing(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
public:
	void CancelWakeupTimer();
	void SetWakeupTimer(_FILETIME);
};

struct TransientNotificationDetails
{
	TransientNotificationDetails();
	long RuntimeClassInitialize(ITransientNotificationDetails *);
	long RuntimeClassInitialize(unsigned long,unsigned short const *,int,unsigned short const *,int,int,_GUID,_GUID,WpnToastNotificationPriority);
	virtual long get_CrossDeviceMatchId(unsigned short * *);
	virtual long get_HasServerCacheRollover(int *);
	virtual long get_IsMirroringDisabled(int *);
	virtual long get_MessageId(_GUID *);
	virtual long get_OfflineBundleId(unsigned short * *);
	virtual long get_OfflineCacheCount(unsigned long *);
	virtual long get_Priority(WpnToastNotificationPriority *);
	virtual long get_RecurrenceId(_GUID *);
	virtual long get_SuppressPopup(int *);
	virtual long get_TimerId(_GUID *);
	virtual long put_MessageId(_GUID *);
	virtual long put_TimerId(_GUID *);
	virtual ~TransientNotificationDetails();
};

struct UpdateImageDownloadPolicyWork
{
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
};

struct UpdateMobileBroadbandCapWork
{
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
};

struct UpdateSettingsWork
{
	virtual long Invoke();
	virtual long ValidateParameters();
	virtual unsigned short const * GetWorkItemName();
};

struct UserSessionHandler
{
	long WindowMessageCallback(unsigned __int64,__int64);
	static long CreateInstance(NotificationPlatform *,UserSessionHandler * *);
};

struct WNSChannelDetails
{
	WNSChannelDetails();
	long RuntimeClassInitialize(unsigned short const *,char const *,char const *,_FILETIME,_FILETIME);
	virtual long get_ChannelId(char * *);
	virtual long get_ChannelUri(char * *);
	virtual long get_CreatedTime(_FILETIME *);
	virtual long get_Expiry(_FILETIME *);
	virtual long get_HandlerKey(unsigned short * *);
	virtual ~WNSChannelDetails();
};

class WPNHttpHeaderParser
{
	int ProcessToken(unsigned short *,IDM_HTTP_HEADER_PARSER_STATE *);
	static IDM_HTTP_HEADER_PARSER_ENTRY * g_HeaderNameTable;
	static unsigned short * g_CacheControlSep;
	static unsigned short * g_ContentTypeSep;
	static unsigned short * g_ExpirySep;
	static unsigned short * g_HeaderNameSep;
public:
	long Parse(unsigned int,IDM_HTTP_HEADER_PARSER_STATE_SET *,unsigned short *);
};

struct WPN_DOWNLOAD_TASK
{
	WPN_DOWNLOAD_TASK();
	~WPN_DOWNLOAD_TASK();
};

struct WPN_IMAGE_REQUEST_ENTRY
{
	void Cleanup();
};

struct WPN_MMF_HANDLE
{
	~WPN_MMF_HANDLE();
};

struct WPN_TILE_IMAGE_REQUEST
{
	long Initialize(unsigned long,unsigned long,__MIDL___MIDL_itf_wpnplatform_0000_0014_0004 const *,bool,WpnCallbackReference *);
	void Cleanup();
};

struct WPN_TOAST_IMAGE_REQUEST
{
	long Initialize(unsigned long,__MIDL___MIDL_itf_wpnplatform_0000_0014_0004 const *,WpnCallbackReference *);
	void Cleanup();
};

namespace Windows
{
	namespace Foundation
	{
		long ActivateInstance<Microsoft::WRL::ComPtr<Collections::IPropertySet> >(HSTRING__ *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Foundation::Collections::IPropertySet> >);
		long GetActivationFactory<Microsoft::WRL::ComPtr<Internal::StateRepository::IApplicationStatics> >(HSTRING__ *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Internal::StateRepository::IApplicationStatics> >);
		long GetActivationFactory<Microsoft::WRL::ComPtr<Internal::StateRepository::IPackageStatics> >(HSTRING__ *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Internal::StateRepository::IPackageStatics> >);
	};

	namespace Internal
	{
		class ComTaskPool
		{
			class CThread
			{
				long _CreateThreadRef(long *,IUnknown * *);
				long _WaitForThreadUpdate(unsigned long);
				static HINSTANCE__ * s_ExecuteThreadProc(void *);
				static unsigned long s_ThreadProc(void *);
				static void s_CheckForDeadlockTimerCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
				static void s_ThreadPoolCallback(_TP_CALLBACK_INSTANCE *,void *);
				void _DispatchMessage(tagMSG *);
				void _ThreadProc();
			public:
				CThread(TaskApartment,TaskOptions);
				bool Eligible(TaskApartment,TaskOptions);
				long StartThread();
				long StartThreadWithFallback();
				long WaitForThreadStart();
				long _StartThreadCommon();
				void CheckForDeadlock();
			};

			struct TaskData
			{
				TaskData(TaskApartment,TaskOptions,unsigned long,IComPoolTask *);
			};

			struct TaskList
			{
				void Clear();
			};

			static ComTaskPool::CThread * s_pThreadList;
			static ComTaskPool::TaskList s_taskFloodingList;
			static _RTL_SRWLOCK s_rwLock;
			static bool s_RunNested(TaskApartment,TaskOptions);
			static bool s_TryRemoveThread(ComTaskPool::CThread *,bool);
			static bool volatile s_fCanReuseThreads;
			static bool volatile s_fWaitForMoreTasks;
			static long s_GetTaskPoolTlsSlot(unsigned long *);
			static long s_QueuePoolTask(TaskApartment,TaskOptions,unsigned long,IComPoolTask *);
			static long s_QueuePoolTaskUnderLock(void *,TaskApartment,TaskOptions,unsigned long,IComPoolTask *,ComTaskPool::TaskList *,ComTaskPool::CThread * *);
			static unsigned long volatile s_cThreadsStarting;
			static unsigned long volatile s_dwThreadIdReuse;
			static void * s_hEventCache;
			static void s_AttachAndRecoverTask(ComTaskPool::TaskData *);
			static void s_ClearOrGetNextTask(ComTaskPool::CThread *);
		public:
			static long RunTask(TaskApartment,TaskOptions,unsigned long,unsigned long,IComPoolTask *,IUnknown * *);
		};

		namespace Details
		{
			struct Git
			{
				Git();
				long Acquire();
				~Git();
			};

			Details::Git _git;
		};

		struct GitPtrImpl<GitPtr>
		{
			long CopyLocal<IBackgroundCopyManager>(Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IBackgroundCopyManager> >);
			long Revoke();
			virtual bool IsInitialized();
		};

		class NativeString<CoTaskMemPolicy<unsigned short> >
		{
			bool _IsOnlyWhitespace();
			long _EnsureCapacity(unsigned __int64);
			long _Initialize(unsigned short const *,unsigned __int64);
			void _EnsureCount();
			void _Free();
		public:
			int CompareOrdinalIgnoreCase(unsigned short const *,unsigned __int64);
			long Concat(unsigned short const *);
			long CopyTo(unsigned short * *);
			long Initialize(NativeString<CoTaskMemPolicy<unsigned short> > const &);
			long InitializeFormat(unsigned short const *,...);
			~NativeString<CoTaskMemPolicy<unsigned short> >();
		};

		struct StringReference
		{
			StringReference<45>(unsigned short const (&)[45]);
			StringReference<51>(unsigned short const (&)[51]);
		};

	};

};

struct WindowsPushNotificationPlatform
{
	WindowsPushNotificationPlatform();
	long RuntimeClassInitialize(IPlatformConfigurationProvider *);
	virtual long CreateAppEndpoint(IWpnAppEndpoint * *);
	virtual long CreateIdleTaskEndpoint(IWpnIdleTaskEndpoint * *);
	virtual long CreatePresentationEndpoint(IWpnPresentationEndpoint * *);
	virtual long CreateRegistrationEndpoint(IWpnRegistrationEndpoint * *);
	virtual long CreateSettingsEndpoint(IWpnSettingsEndpoint * *);
	virtual long CreateTestEndpoint(IWpnTestEndpoint * *);
	virtual long CreateWpnMirroringAccountSwitcher(IWpnMirroringAccountSwitcher * *);
	virtual long InitializePlatform();
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long Shutdown();
	virtual ~WindowsPushNotificationPlatform();
};

struct WnsCPLog
{
	class WnsAFCToastForwarding
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned __int64,_GUID,unsigned short const *);
		void Stop(_GUID const &);
		void StopDueToSettings1(bool,bool,int);
		void StopDueToSettings2(bool,bool,bool);
		void StopDueToWin32App(long);
		~WnsAFCToastForwarding();
	};

	class WnsCDPDismissActivities
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~WnsCDPDismissActivities();
	};

	class WnsCDPDismissActivityWork
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~WnsCDPDismissActivityWork();
	};

	class WnsCDPOnCDPUserServiceReady
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~WnsCDPOnCDPUserServiceReady();
	};

	class WnsCMChannelRequestExpired
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(long);
		~WnsCMChannelRequestExpired();
	};

	class WnsCMConfigureBatching
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned __int64,unsigned int);
		~WnsCMConfigureBatching();
	};

	class WnsCMConfigureNotificationDelivery
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned __int64,unsigned short const *,unsigned int,short);
		~WnsCMConfigureNotificationDelivery();
	};

	class WnsCMConfigureNotificationPolicy
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned __int64,unsigned int,short);
		~WnsCMConfigureNotificationPolicy();
	};

	class WnsCMConnect
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned __int64,unsigned long);
		~WnsCMConnect();
	};

	class WnsCMCreate
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned __int64);
		~WnsCMCreate();
	};

	class WnsCMDestroy
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned __int64);
		~WnsCMDestroy();
	};

	class WnsCMDisconnect
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned __int64,unsigned long);
		~WnsCMDisconnect();
	};

	class WnsCMRegisterCallback
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~WnsCMRegisterCallback();
	};

	class WnsCMRenewChannel
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned __int64,unsigned short const *,unsigned short const *,unsigned long,unsigned long,long);
		~WnsCMRenewChannel();
	};

	class WnsCMRequestChannel
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned __int64,unsigned short const *,unsigned long,unsigned long,long);
		~WnsCMRequestChannel();
	};

	class WnsCMRevokeChannel
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned __int64,unsigned short const *);
		~WnsCMRevokeChannel();
	};

	class WnsCMSendBatteryExemptionList
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned int);
		~WnsCMSendBatteryExemptionList();
	};

	class WnsCMStatus
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned __int64);
		~WnsCMStatus();
	};

	class WnsCPTBufferRequest
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned __int64,int,long);
		~WnsCPTBufferRequest();
	};

	class WnsCPTClearAllUserContexts
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~WnsCPTClearAllUserContexts();
	};

	class WnsCPTClearBufferedRequestsForUser
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned __int64);
		~WnsCPTClearBufferedRequestsForUser();
	};

	class WnsCPTClearContextForUser
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned __int64);
		~WnsCPTClearContextForUser();
	};

	class WnsCPTSetModeForUser
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned __int64,int);
		~WnsCPTSetModeForUser();
	};

	class WnsMuxInit
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~WnsMuxInit();
	};

	class WnsMuxMakeCM
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~WnsMuxMakeCM();
	};

	class WnsMuxShutdown
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~WnsMuxShutdown();
	};

	class WnsPlatCMRefresh
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~WnsPlatCMRefresh();
	};

	class WnsReconnectTimerExpired
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~WnsReconnectTimerExpired();
	};

	class WnsSinkAdviseCP
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~WnsSinkAdviseCP();
	};

	class WnsSinkChannelReceived
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(long,unsigned __int64,unsigned short const *,unsigned short const *);
		~WnsSinkChannelReceived();
	};

	class WnsSinkChannelReceivedEx
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(long,unsigned __int64,unsigned short const *,unsigned short const *,long);
		~WnsSinkChannelReceivedEx();
	};

	class WnsSinkChannelRenewed
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(long,unsigned __int64,unsigned short const *,unsigned short const *,long);
		~WnsSinkChannelRenewed();
	};

	class WnsSinkConnectionChanged
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned int);
		~WnsSinkConnectionChanged();
	};

	class WnsSinkNotificationBatchCompleted
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(long,long);
	};

	class WnsSinkNotificationDeliveryChanged
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(long,unsigned __int64,long);
	};

	class WnsSinkNotificationPolicyChanged
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(long,unsigned __int64,long);
	};

	class WnsSinkNotificationReceived
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~WnsSinkNotificationReceived();
	};

	class WnsSinkUnadviseCP
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~WnsSinkUnadviseCP();
	};

	class WnsSinkUserAdded
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned __int64,long);
		~WnsSinkUserAdded();
	};

	class WnsSinkUserRemoved
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned __int64,long);
	};

	static void WnsCMUserSessionProxyReplaced<unsigned __int64 &>(unsigned __int64 &);
	static void WnsConnectEventTimeout();
	static void WnsConnectFailed<unsigned int &>(unsigned int &);
	static void WnsConnectSucceeded();
	static void WnsDoConnectForUserId<unsigned __int64 &>(unsigned __int64 &);
	static void WnsOnChannelReceived<unsigned __int64 &,long &,unsigned short const * &,unsigned short const * &>(unsigned __int64 &,long &,unsigned short const * &,unsigned short const * &);
	static void WnsOnChannelReceivedEx(unsigned __int64,long,unsigned short const *,unsigned short const *,long);
	static void WnsPlatNotificationDelivered<unsigned __int64 &>(unsigned __int64 &);
	static void WnsPlatNotificationPdcActivated<unsigned __int64 &>(unsigned __int64 &);
	static void WnsReconnectTimerCleared();
	static void WnsReconnectTimerExpiryIgnored();
	static void WnsReconnectTimerSet<__int64 &>(__int64 &);
	static void WnsRenewChannel(long,unsigned short const *,unsigned short const *);
	static void WnsRequestChannel(long,unsigned short const *);
	static void WnsRevokeChannel(long,unsigned short const *,long);
	static void WnsWaitForConnect<unsigned __int64 &>(unsigned __int64 &);
};

struct WorkItem
{
	virtual ~WorkItem();
};

struct WpnCallbackReference
{
	void Move(WpnCallbackReference *);
	void Release();
	void Set(IGlobalInterfaceTable *,unsigned long);
	~WpnCallbackReference();
};

class WpnConnectionManager
{
	virtual ~WpnConnectionManager();
	void VerifyCallerUserId();
public:
	WpnConnectionManager(IConnectionManagerCallbacks2 *,Microsoft::Windows::Internal::PushNotifications::ConnectionMultiplexer *);
	WpnConnectionManager(Microsoft::Windows::Internal::PushNotifications::ConnectionMultiplexer *);
	virtual long ConfigureBatching(__MIDL___MIDL_itf_wpntypes_0000_0000_0005);
	virtual long ConfigureNotificationDelivery(unsigned short *,__MIDL___MIDL_itf_wpntypes_0000_0000_0003,short);
	virtual long ConfigureNotificationPolicy(__MIDL___MIDL_itf_wpntypes_0000_0000_0003,short);
	virtual long Connect(unsigned long);
	virtual long Disconnect();
	virtual long RegisterCallback(IConnectionManagerCallbacks2 *);
	virtual long RenewChannel(unsigned short *,unsigned short *,unsigned long,unsigned long,long);
	virtual long RenewSecondaryChannel(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned long,unsigned long,long);
	virtual long RequestChannel(unsigned short *,unsigned long,unsigned long,long);
	virtual long RequestSecondaryChannel(unsigned short const *,unsigned short const *,unsigned short const *,unsigned long,unsigned long,long);
	virtual long RevokeChannel(unsigned short *);
	virtual long SendBatteryExemptionList(unsigned short const * *,unsigned long);
	virtual long get_ConnectionManagerStatus(__MIDL___MIDL_itf_wpninternal_0000_0000_0001 *);
};

class WpnConnectionManagerFactory
{
	static Microsoft::Windows::Internal::PushNotifications::ConnectionMultiplexer * s_theMux;
	static wil::srwlock s_muxLock;
public:
	static long Initialize();
	static long Shutdown();
	virtual long CreateConnectionManager(IConnectionManagerCallbacks2 *,IWpnInternalConnectionManager * *);
	virtual long CreateConnectionManager2(IWpnInternalConnectionManager * *);
};

class WpnConnectionProviderSink
{
protected:
	virtual ~WpnConnectionProviderSink();
public:
	WpnConnectionProviderSink();
	long AdviseConnectionProvider(IConnectionProvider *);
	long UnadviseConnectionProvider(IConnectionProvider *);
	virtual long OnAddUserCompleted(unsigned __int64,long);
	virtual long OnBatchCompleted(long,long);
	virtual long OnChannelReceived(long,unsigned __int64,unsigned short *,unsigned short *,double);
	virtual long OnChannelReceivedEx(long,unsigned __int64,unsigned short *,unsigned short *,double,long);
	virtual long OnChannelRenewed(long,unsigned __int64,unsigned short *,unsigned short *,double,long);
	virtual long OnChannelRevoked(long,unsigned __int64,unsigned short *,unsigned short *,double,long);
	virtual long OnConnectionChanged(__MIDL___MIDL_itf_wpntypes_0000_0000_0001);
	virtual long OnNotificationDeliveryChanged(long,unsigned __int64,long);
	virtual long OnNotificationPolicyChanged(long,unsigned __int64,long);
	virtual long OnNotificationReceived(unsigned short const *,INotificationDataPackage *,INotificationAckResponse * *);
	virtual long OnRemoveUserCompleted(unsigned __int64,long);
};

namespace WpnDatabaseHelpers
{
	__MIDL___MIDL_itf_wpntypes_0000_0000_0003 NotificationTypeFromName(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >);
	bool IsPackageInternetCapable(unsigned short const *);
	long BuildSystemPropertySet(_GUID,IStream * *);
	long ChangeSourceInNotificationCollection(NotificationSource,INotificationCollection *);
	long FilterNotificationCollectionByType(INotificationCollection *,unsigned short const *,INotificationCollection * *);
	long GetAppTypeFlagFromName(unsigned short const *,WPN_APP_TYPE *);
	long GetAppTypeNameFromFlag(WPN_APP_TYPE,unsigned short * *);
	long GetAppUserModelId(IWpnNotification *,unsigned short * *);
	long GetPackageFullName(unsigned short const *,unsigned short * *);
	long GetSettingMaskFromObject(INotificationHandlerSettings *,WPN_SETTING_TYPE *);
	long GetSettingObjectFromMask(WPN_SETTING_TYPE,unsigned short const *,WPN_SETTING_TYPE,INotificationHandlerSettings * *);
	long GetSettingTypeFromHandler(INotificationHandler *,unsigned long *);
	long ParseSystemPropertySet(IStream *,_GUID *);
	std::vector<unsigned char,std::allocator<unsigned char> > VectorFromStream(IStream *);
	unsigned short const * NotificationTypeNameFromValue(__MIDL___MIDL_itf_wpntypes_0000_0000_0003);
};

struct WpnNotificationData
{
	WpnNotificationData();
	long RuntimeClassInitialize(IWpnNotificationData *);
	virtual long get_At(unsigned long,unsigned short * *,unsigned short * *);
	virtual long get_Count(unsigned long *);
	virtual long get_Value(unsigned short const *,unsigned short * *);
	virtual long get_Version(unsigned long *);
	virtual long put_Value(unsigned short const *,unsigned short const *);
	virtual ~WpnNotificationData();
	void Merge(WpnNotificationData *);
};

class WpnTelemetryAggregator
{
	struct HandlerWithType
	{
		HandlerWithType(HandlerWithType const &);
		bool operator==(HandlerWithType const &);
		~HandlerWithType();
	};

	struct HandlerWithTypeHash
	{
		unsigned __int64 operator()(HandlerWithType const &);
	};

	std::unordered_map<WpnTelemetryAggregator::HandlerWithType,unsigned int,WpnTelemetryAggregator::HandlerWithTypeHash,std::equal_to<WpnTelemetryAggregator::HandlerWithType>,std::allocator<std::pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> > > SwapEventsMap();
	void Dump(std::unordered_map<WpnTelemetryAggregator::HandlerWithType,unsigned int,WpnTelemetryAggregator::HandlerWithTypeHash,std::equal_to<WpnTelemetryAggregator::HandlerWithType>,std::allocator<std::pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> > >);
public:
	WpnTelemetryAggregator(unsigned short const *);
	bool AddEventCount(unsigned short const *,unsigned short const *,unsigned short const *);
	~WpnTelemetryAggregator();
};

struct _TlgActivityBase<wil::ActivityBase<WnsCPTracelogger,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WnsCPTracelogger,_TlgReflectorTag_Param0IsProviderType>,0,5>
{
	void zInternalStart();
};

class _TlgActivityBase<wil::ActivityBase<WnsCPTracelogger,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WnsCPTracelogger,_TlgReflectorTag_Param0IsProviderType>,35184372088832,5>
{
protected:
	~_TlgActivityBase<wil::ActivityBase<WnsCPTracelogger,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WnsCPTracelogger,_TlgReflectorTag_Param0IsProviderType>,35184372088832,5>();
public:
	void zInternalStart();
};

struct _TlgActivityBase<wil::ActivityBase<WnsCPTracelogger,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WnsCPTracelogger,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>
{
	void zInternalStart();
};

namespace std
{
	struct _Bt_state_t<char const *>
	{
		_Bt_state_t<char const *>(_Bt_state_t<char const *> const &);
		~_Bt_state_t<char const *>();
	};

	struct _Buf<char>
	{
		void _Insert(char);
	};

	class _Builder<_String_const_iterator<_String_val<_Simple_types<char> > >,char,regex_traits<char> >
	{
		_Node_base * _Link_node(_Node_base *);
		_Node_base * _New_node(_Node_type);
		void _Add_char_to_array(char);
		void _Add_char_to_bitmap(char);
		void _Add_elts(_Node_class<char,regex_traits<char> > *,short,bool);
		void _Char_to_elts(_String_const_iterator<_String_val<_Simple_types<char> > >,_String_const_iterator<_String_val<_Simple_types<char> > >,__int64,_Sequence<char> * *);
	public:
		_Node_base * _Begin_assert_group(bool);
		_Node_base * _Begin_capture_group(unsigned int);
		_Node_base * _Begin_if(_Node_base *);
		bool _Beg_expr();
		void _Add_char(char);
		void _Add_class();
		void _Add_equiv(_String_const_iterator<_String_val<_Simple_types<char> > >,_String_const_iterator<_String_val<_Simple_types<char> > >,__int64);
		void _Add_range(char,char);
		void _Add_rep(int,int,bool);
		void _End_group(_Node_base *);
	};

	struct _Compressed_pair<_Wrap_alloc<allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,_Deque_val<_Deque_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,1>
	{
		~_Compressed_pair<_Wrap_alloc<allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,_Deque_val<_Deque_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,1>();
	};

	struct _Fac_tidy_reg_t
	{
		~_Fac_tidy_reg_t();
	};

	struct _Facetptr<codecvt<char,char,_Mbstatet> >
	{
		static locale::facet const * const _Psave;
	};

	struct _Facetptr<collate<char> >
	{
		static locale::facet const * const _Psave;
	};

	struct _Facetptr<ctype<char> >
	{
		static locale::facet const * const _Psave;
	};

	struct _Generic_error_category
	{
		virtual basic_string<char,char_traits<char>,allocator<char> > message(int);
		virtual char const * name();
	};

	class _Hash<_Umap_traits<WpnTelemetryAggregator::HandlerWithType,unsigned int,_Uhash_compare<WpnTelemetryAggregator::HandlerWithType,WpnTelemetryAggregator::HandlerWithTypeHash,equal_to<WpnTelemetryAggregator::HandlerWithType> >,allocator<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> >,0> >
	{
	protected:
		pair<_List_iterator<_List_val<_List_simple_types<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> > > >,bool> _Insert<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> &,_List_unchecked_iterator<_List_val<_List_simple_types<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> > > > >(pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> &,_List_unchecked_iterator<_List_val<_List_simple_types<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> > > >);
		void _Copy(_Hash<_Umap_traits<WpnTelemetryAggregator::HandlerWithType,unsigned int,_Uhash_compare<WpnTelemetryAggregator::HandlerWithType,WpnTelemetryAggregator::HandlerWithTypeHash,equal_to<WpnTelemetryAggregator::HandlerWithType> >,allocator<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> >,0> > const &);
		void _Init(unsigned __int64);
	public:
		_Hash<_Umap_traits<WpnTelemetryAggregator::HandlerWithType,unsigned int,_Uhash_compare<WpnTelemetryAggregator::HandlerWithType,WpnTelemetryAggregator::HandlerWithTypeHash,equal_to<WpnTelemetryAggregator::HandlerWithType> >,allocator<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> >,0> >(_Uhash_compare<WpnTelemetryAggregator::HandlerWithType,WpnTelemetryAggregator::HandlerWithTypeHash,equal_to<WpnTelemetryAggregator::HandlerWithType> > const &,allocator<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> > const &);
		_List_iterator<_List_val<_List_simple_types<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> > > > erase(_List_const_iterator<_List_val<_List_simple_types<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> > > >);
		_List_iterator<_List_val<_List_simple_types<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> > > > lower_bound(WpnTelemetryAggregator::HandlerWithType const &);
		void clear();
		void swap(_Hash<_Umap_traits<WpnTelemetryAggregator::HandlerWithType,unsigned int,_Uhash_compare<WpnTelemetryAggregator::HandlerWithType,WpnTelemetryAggregator::HandlerWithTypeHash,equal_to<WpnTelemetryAggregator::HandlerWithType> >,allocator<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> >,0> > &);
	};

	class _Hash<_Umap_traits<_TP_TIMER *,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> >,_Uhash_compare<_TP_TIMER *,hash<_TP_TIMER *>,equal_to<_TP_TIMER *> >,allocator<pair<_TP_TIMER * const,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> > > >,0> >
	{
	protected:
		_List_unchecked_iterator<_List_val<_List_simple_types<pair<_TP_TIMER * const,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> > > > > > _End(unsigned __int64);
		pair<_List_iterator<_List_val<_List_simple_types<pair<_TP_TIMER * const,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> > > > > >,bool> _Insert<pair<_TP_TIMER * const,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> > > &,_List_unchecked_iterator<_List_val<_List_simple_types<pair<_TP_TIMER * const,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> > > > > > >(pair<_TP_TIMER * const,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> > > &,_List_unchecked_iterator<_List_val<_List_simple_types<pair<_TP_TIMER * const,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> > > > > >);
		void _Init(unsigned __int64);
	public:
		_List_iterator<_List_val<_List_simple_types<pair<_TP_TIMER * const,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> > > > > > erase(_List_const_iterator<_List_val<_List_simple_types<pair<_TP_TIMER * const,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> > > > > >);
		pair<_List_iterator<_List_val<_List_simple_types<pair<_TP_TIMER * const,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> > > > > >,_List_iterator<_List_val<_List_simple_types<pair<_TP_TIMER * const,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> > > > > > > equal_range(_TP_TIMER * const &);
		unsigned __int64 erase(_TP_TIMER * const &);
		void clear();
	};

	class _Hash<_Umap_traits<basic_string<char,char_traits<char>,allocator<char> >,StatementCacheEntry,_Uhash_compare<basic_string<char,char_traits<char>,allocator<char> >,hash<basic_string<char,char_traits<char>,allocator<char> > >,equal_to<basic_string<char,char_traits<char>,allocator<char> > > >,allocator<pair<basic_string<char,char_traits<char>,allocator<char> > const ,StatementCacheEntry> >,0> >
	{
	protected:
		_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<char,char_traits<char>,allocator<char> > const ,StatementCacheEntry> > > > _End(unsigned __int64);
		pair<_List_iterator<_List_val<_List_simple_types<pair<basic_string<char,char_traits<char>,allocator<char> > const ,StatementCacheEntry> > > >,bool> _Insert<pair<basic_string<char,char_traits<char>,allocator<char> > const ,StatementCacheEntry> &,_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<char,char_traits<char>,allocator<char> > const ,StatementCacheEntry> > > > >(pair<basic_string<char,char_traits<char>,allocator<char> > const ,StatementCacheEntry> &,_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<char,char_traits<char>,allocator<char> > const ,StatementCacheEntry> > > >);
		void _Init(unsigned __int64);
	public:
		_List_iterator<_List_val<_List_simple_types<pair<basic_string<char,char_traits<char>,allocator<char> > const ,StatementCacheEntry> > > > erase(_List_const_iterator<_List_val<_List_simple_types<pair<basic_string<char,char_traits<char>,allocator<char> > const ,StatementCacheEntry> > > >);
		_List_iterator<_List_val<_List_simple_types<pair<basic_string<char,char_traits<char>,allocator<char> > const ,StatementCacheEntry> > > > lower_bound(basic_string<char,char_traits<char>,allocator<char> > const &);
	};

	class _Hash<_Umap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_Uhash_compare<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,hash<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,equal_to<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,0> >
	{
	protected:
		_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > _End(unsigned __int64);
		pair<_List_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >,bool> _Insert<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > >(pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >);
		void _Init(unsigned __int64);
	public:
		_Hash<_Umap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_Uhash_compare<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,hash<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,equal_to<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,0> >(_Uhash_compare<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,hash<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,equal_to<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > const &,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > const &);
		_List_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > erase(_List_const_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >);
		_List_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > lower_bound(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
	};

	class _Hash<_Umap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,int,_Uhash_compare<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,hash<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,equal_to<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> >,0> >
	{
	protected:
		pair<_List_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > > >,bool> _Insert<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> &,_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > > > >(pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> &,_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > > >);
		void _Init(unsigned __int64);
	public:
		_Hash<_Umap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,int,_Uhash_compare<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,hash<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,equal_to<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> >,0> >(_Uhash_compare<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,hash<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,equal_to<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > const &,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > const &);
		_List_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > > > erase(_List_const_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > > >);
		_List_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > > > lower_bound(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
	};

	class _Hash<_Umap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> >,_Uhash_compare<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,hash<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,equal_to<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > > >,0> >
	{
	protected:
		_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > > > > > _End(unsigned __int64);
		pair<_List_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > > > > >,bool> _Insert<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > > &,_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > > > > > >(pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > > &,_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > > > > >);
		void _Init(unsigned __int64);
	public:
		_List_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > > > > > erase(_List_const_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > > > > >);
		_List_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > > > > > lower_bound(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		pair<_List_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > > > > >,_List_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > > > > > > equal_range(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		unsigned __int64 erase(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
	};

	class _Hash<_Umap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,unsigned int,_Uhash_compare<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,hash<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,equal_to<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned int> >,0> >
	{
	protected:
		_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned int> > > > _End(unsigned __int64);
		pair<_List_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned int> > > >,bool> _Insert<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned int> &,_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned int> > > > >(pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned int> &,_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned int> > > >);
		void _Init(unsigned __int64);
	public:
		_List_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned int> > > > erase(_List_const_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned int> > > >);
		_List_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned int> > > > lower_bound(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
	};

	class _Hash<_Umap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,unsigned long,_Uhash_compare<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,hash<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,equal_to<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> >,0> >
	{
	protected:
		_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > > > _End(unsigned __int64);
		pair<_List_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > > >,bool> _Insert<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> &,_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > > > >(pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> &,_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > > >);
		void _Init(unsigned __int64);
	public:
		_Hash<_Umap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,unsigned long,_Uhash_compare<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,hash<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,equal_to<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> >,0> >(_Uhash_compare<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,hash<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,equal_to<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > const &,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > const &);
		_List_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > > > erase(_List_const_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > > >);
		_List_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > > > lower_bound(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		~_Hash<_Umap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,unsigned long,_Uhash_compare<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,hash<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,equal_to<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> >,0> >();
	};

	class _Hash<_Umap_traits<long,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext,_Uhash_compare<long,hash<long>,equal_to<long> >,allocator<pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext> >,0> >
	{
	protected:
		_List_unchecked_iterator<_List_val<_List_simple_types<pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext> > > > _End(unsigned __int64);
		pair<_List_iterator<_List_val<_List_simple_types<pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext> > > >,bool> _Insert<pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext> &,_List_unchecked_iterator<_List_val<_List_simple_types<pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext> > > > >(pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext> &,_List_unchecked_iterator<_List_val<_List_simple_types<pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext> > > >);
		void _Init(unsigned __int64);
	public:
		_List_iterator<_List_val<_List_simple_types<pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext> > > > erase(_List_const_iterator<_List_val<_List_simple_types<pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext> > > >);
	};

	class _Hash<_Umap_traits<unsigned __int64,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> >,_Uhash_compare<unsigned __int64,hash<unsigned __int64>,equal_to<unsigned __int64> >,allocator<pair<unsigned __int64 const ,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > >,0> >
	{
	protected:
		_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned __int64 const ,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > > > > _End(unsigned __int64);
		pair<_List_iterator<_List_val<_List_simple_types<pair<unsigned __int64 const ,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > > > >,bool> _Insert<pair<unsigned __int64 const ,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > &,_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned __int64 const ,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > > > > >(pair<unsigned __int64 const ,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > &,_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned __int64 const ,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > > > >);
		void _Init(unsigned __int64);
	public:
		_Hash<_Umap_traits<unsigned __int64,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> >,_Uhash_compare<unsigned __int64,hash<unsigned __int64>,equal_to<unsigned __int64> >,allocator<pair<unsigned __int64 const ,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > >,0> >(_Uhash_compare<unsigned __int64,hash<unsigned __int64>,equal_to<unsigned __int64> > const &,allocator<pair<unsigned __int64 const ,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > > const &);
		_List_iterator<_List_val<_List_simple_types<pair<unsigned __int64 const ,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > > > > erase(_List_const_iterator<_List_val<_List_simple_types<pair<unsigned __int64 const ,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > > > >);
	};

	class _Hash<_Umap_traits<unsigned long,ChannelRequests::ChannelRequestInternal,_Uhash_compare<unsigned long,hash<unsigned long>,equal_to<unsigned long> >,allocator<pair<unsigned long const ,ChannelRequests::ChannelRequestInternal> >,0> >
	{
	protected:
		_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,ChannelRequests::ChannelRequestInternal> > > > _End(unsigned __int64);
		pair<_List_iterator<_List_val<_List_simple_types<pair<unsigned long const ,ChannelRequests::ChannelRequestInternal> > > >,bool> _Insert<pair<unsigned long const ,ChannelRequests::ChannelRequestInternal> &,_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,ChannelRequests::ChannelRequestInternal> > > > >(pair<unsigned long const ,ChannelRequests::ChannelRequestInternal> &,_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,ChannelRequests::ChannelRequestInternal> > > >);
		void _Init(unsigned __int64);
	public:
		_List_iterator<_List_val<_List_simple_types<pair<unsigned long const ,ChannelRequests::ChannelRequestInternal> > > > erase(_List_const_iterator<_List_val<_List_simple_types<pair<unsigned long const ,ChannelRequests::ChannelRequestInternal> > > >);
		pair<_List_iterator<_List_val<_List_simple_types<pair<unsigned long const ,ChannelRequests::ChannelRequestInternal> > > >,_List_iterator<_List_val<_List_simple_types<pair<unsigned long const ,ChannelRequests::ChannelRequestInternal> > > > > equal_range(unsigned long const &);
		unsigned __int64 erase(unsigned long const &);
	};

	class _Hash<_Umap_traits<unsigned long,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_Uhash_compare<unsigned long,hash<unsigned long>,equal_to<unsigned long> >,allocator<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,0> >
	{
	protected:
		_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > _End(unsigned __int64);
		pair<_List_iterator<_List_val<_List_simple_types<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >,bool> _Insert<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > >(pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >);
		void _Init(unsigned __int64);
	public:
		_Hash<_Umap_traits<unsigned long,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_Uhash_compare<unsigned long,hash<unsigned long>,equal_to<unsigned long> >,allocator<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,0> >(_Uhash_compare<unsigned long,hash<unsigned long>,equal_to<unsigned long> > const &,allocator<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > const &);
		_List_iterator<_List_val<_List_simple_types<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > erase(_List_const_iterator<_List_val<_List_simple_types<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >);
		~_Hash<_Umap_traits<unsigned long,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_Uhash_compare<unsigned long,hash<unsigned long>,equal_to<unsigned long> >,allocator<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,0> >();
	};

	class _Hash<_Umap_traits<unsigned long,shared_ptr<TileSession>,_Uhash_compare<unsigned long,hash<unsigned long>,equal_to<unsigned long> >,allocator<pair<unsigned long const ,shared_ptr<TileSession> > >,0> >
	{
	protected:
		_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<TileSession> > > > > _End(unsigned __int64);
		pair<_List_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<TileSession> > > > >,bool> _Insert<pair<unsigned long const ,shared_ptr<TileSession> > &,_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<TileSession> > > > > >(pair<unsigned long const ,shared_ptr<TileSession> > &,_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<TileSession> > > > >);
		void _Init(unsigned __int64);
	public:
		_List_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<TileSession> > > > > erase(_List_const_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<TileSession> > > > >);
		pair<_List_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<TileSession> > > > >,_List_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<TileSession> > > > > > equal_range(unsigned long const &);
		unsigned __int64 erase(unsigned long const &);
		void clear();
	};

	class _Hash<_Umap_traits<unsigned long,shared_ptr<ToastSession>,_Uhash_compare<unsigned long,hash<unsigned long>,equal_to<unsigned long> >,allocator<pair<unsigned long const ,shared_ptr<ToastSession> > >,0> >
	{
	protected:
		_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<ToastSession> > > > > _End(unsigned __int64);
		pair<_List_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<ToastSession> > > > >,bool> _Insert<pair<unsigned long const ,shared_ptr<ToastSession> > &,_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<ToastSession> > > > > >(pair<unsigned long const ,shared_ptr<ToastSession> > &,_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<ToastSession> > > > >);
		void _Init(unsigned __int64);
	public:
		_Hash<_Umap_traits<unsigned long,shared_ptr<ToastSession>,_Uhash_compare<unsigned long,hash<unsigned long>,equal_to<unsigned long> >,allocator<pair<unsigned long const ,shared_ptr<ToastSession> > >,0> >(_Uhash_compare<unsigned long,hash<unsigned long>,equal_to<unsigned long> > const &,allocator<pair<unsigned long const ,shared_ptr<ToastSession> > > const &);
		_List_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<ToastSession> > > > > erase(_List_const_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<ToastSession> > > > >);
		pair<_List_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<ToastSession> > > > >,_List_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<ToastSession> > > > > > equal_range(unsigned long const &);
		unsigned __int64 erase(unsigned long const &);
		void clear();
	};

	class _Hash<_Uset_traits<TileSession::SubscriptionEntry,_Uhash_compare<TileSession::SubscriptionEntry,TileSession::SubscriptionEntryHash,equal_to<TileSession::SubscriptionEntry> >,allocator<TileSession::SubscriptionEntry>,0> >
	{
	protected:
		_List_unchecked_const_iterator<_List_val<_List_simple_types<TileSession::SubscriptionEntry> >,_Iterator_base0> _End(unsigned __int64);
		pair<_List_const_iterator<_List_val<_List_simple_types<TileSession::SubscriptionEntry> > >,bool> _Insert<TileSession::SubscriptionEntry &,_List_unchecked_const_iterator<_List_val<_List_simple_types<TileSession::SubscriptionEntry> >,_Iterator_base0> >(TileSession::SubscriptionEntry &,_List_unchecked_const_iterator<_List_val<_List_simple_types<TileSession::SubscriptionEntry> >,_Iterator_base0>);
		pair<_List_const_iterator<_List_val<_List_simple_types<TileSession::SubscriptionEntry> > >,bool> _Insert<TileSession::SubscriptionEntry const &,_List_unchecked_const_iterator<_List_val<_List_simple_types<TileSession::SubscriptionEntry> >,_Iterator_base0> >(TileSession::SubscriptionEntry const &,_List_unchecked_const_iterator<_List_val<_List_simple_types<TileSession::SubscriptionEntry> >,_Iterator_base0>);
		void _Check_size();
		void _Init(unsigned __int64);
		void _Insert_bucket(_List_unchecked_const_iterator<_List_val<_List_simple_types<TileSession::SubscriptionEntry> >,_Iterator_base0>,_List_unchecked_const_iterator<_List_val<_List_simple_types<TileSession::SubscriptionEntry> >,_Iterator_base0>,unsigned __int64);
		void _Reinsert();
	public:
		_Hash<_Uset_traits<TileSession::SubscriptionEntry,_Uhash_compare<TileSession::SubscriptionEntry,TileSession::SubscriptionEntryHash,equal_to<TileSession::SubscriptionEntry> >,allocator<TileSession::SubscriptionEntry>,0> >(_Uhash_compare<TileSession::SubscriptionEntry,TileSession::SubscriptionEntryHash,equal_to<TileSession::SubscriptionEntry> > const &,allocator<TileSession::SubscriptionEntry> const &);
		_List_const_iterator<_List_val<_List_simple_types<TileSession::SubscriptionEntry> > > erase(_List_const_iterator<_List_val<_List_simple_types<TileSession::SubscriptionEntry> > >);
		_List_const_iterator<_List_val<_List_simple_types<TileSession::SubscriptionEntry> > > lower_bound(TileSession::SubscriptionEntry const &);
		pair<_List_const_iterator<_List_val<_List_simple_types<TileSession::SubscriptionEntry> > >,_List_const_iterator<_List_val<_List_simple_types<TileSession::SubscriptionEntry> > > > equal_range(TileSession::SubscriptionEntry const &);
		pair<_List_const_iterator<_List_val<_List_simple_types<TileSession::SubscriptionEntry> > >,bool> emplace<TileSession::SubscriptionEntry &>(TileSession::SubscriptionEntry &);
		void clear();
	};

	class _Hash<_Uset_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_Uhash_compare<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,hash<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,equal_to<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,0> >
	{
	protected:
		_List_unchecked_const_iterator<_List_val<_List_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,_Iterator_base0> _End(unsigned __int64);
		pair<_List_const_iterator<_List_val<_List_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >,bool> _Insert<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > &,_List_unchecked_const_iterator<_List_val<_List_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,_Iterator_base0> >(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > &,_List_unchecked_const_iterator<_List_val<_List_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,_Iterator_base0>);
		pair<_List_const_iterator<_List_val<_List_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >,bool> _Insert<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,_List_unchecked_const_iterator<_List_val<_List_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,_Iterator_base0> >(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,_List_unchecked_const_iterator<_List_val<_List_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,_Iterator_base0>);
		void _Check_size();
		void _Init(unsigned __int64);
		void _Insert_bucket(_List_unchecked_const_iterator<_List_val<_List_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,_Iterator_base0>,_List_unchecked_const_iterator<_List_val<_List_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,_Iterator_base0>,unsigned __int64);
		void _Reinsert();
	public:
		_Hash<_Uset_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_Uhash_compare<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,hash<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,equal_to<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,0> >(_Uhash_compare<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,hash<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,equal_to<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > const &,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > const &);
		_List_const_iterator<_List_val<_List_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > erase(_List_const_iterator<_List_val<_List_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >);
		_List_const_iterator<_List_val<_List_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > lower_bound(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		pair<_List_const_iterator<_List_val<_List_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >,_List_const_iterator<_List_val<_List_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > equal_range(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		unsigned __int64 erase(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		void swap(_Hash<_Uset_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_Uhash_compare<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,hash<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,equal_to<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,0> > &);
	};

	struct _List_alloc<_List_base_types<Microsoft::Windows::Internal::PushNotifications::DiagTrackQueue::DiagTrackContext,allocator<Microsoft::Windows::Internal::PushNotifications::DiagTrackQueue::DiagTrackContext> > >
	{
		_List_node<Microsoft::Windows::Internal::PushNotifications::DiagTrackQueue::DiagTrackContext,void *> * _Buynode0(_List_node<Microsoft::Windows::Internal::PushNotifications::DiagTrackQueue::DiagTrackContext,void *> *,_List_node<Microsoft::Windows::Internal::PushNotifications::DiagTrackQueue::DiagTrackContext,void *> *);
	};

	struct _List_alloc<_List_base_types<TileSession::SubscriptionEntry,allocator<TileSession::SubscriptionEntry> > >
	{
		_List_node<TileSession::SubscriptionEntry,void *> * _Buynode0(_List_node<TileSession::SubscriptionEntry,void *> *,_List_node<TileSession::SubscriptionEntry,void *> *);
	};

	struct _List_alloc<_List_base_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >
	{
		_List_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> * _Buynode0(_List_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> *,_List_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> *);
	};

	struct _List_alloc<_List_base_types<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int>,allocator<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> > > >
	{
		_List_node<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int>,void *> * _Buynode0(_List_node<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int>,void *> *,_List_node<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int>,void *> *);
	};

	struct _List_alloc<_List_base_types<pair<_TP_TIMER * const,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> > >,allocator<pair<_TP_TIMER * const,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> > > > > >
	{
		_List_node<pair<_TP_TIMER * const,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> > >,void *> * _Buynode0(_List_node<pair<_TP_TIMER * const,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> > >,void *> *,_List_node<pair<_TP_TIMER * const,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> > >,void *> *);
	};

	struct _List_alloc<_List_base_types<pair<basic_string<char,char_traits<char>,allocator<char> > const ,StatementCacheEntry>,allocator<pair<basic_string<char,char_traits<char>,allocator<char> > const ,StatementCacheEntry> > > >
	{
		_List_node<pair<basic_string<char,char_traits<char>,allocator<char> > const ,StatementCacheEntry>,void *> * _Buynode0(_List_node<pair<basic_string<char,char_traits<char>,allocator<char> > const ,StatementCacheEntry>,void *> *,_List_node<pair<basic_string<char,char_traits<char>,allocator<char> > const ,StatementCacheEntry>,void *> *);
	};

	struct _List_alloc<_List_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >
	{
		_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> * _Buynode0(_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *,_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
	};

	struct _List_alloc<_List_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > > >
	{
		_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> * _Buynode0(_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> *,_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> *);
	};

	struct _List_alloc<_List_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > > > > >
	{
		_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > >,void *> * _Buynode0(_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > >,void *> *,_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > >,void *> *);
	};

	struct _List_alloc<_List_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned int>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned int> > > >
	{
		_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned int>,void *> * _Buynode0(_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned int>,void *> *,_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned int>,void *> *);
	};

	struct _List_alloc<_List_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > > >
	{
		_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long>,void *> * _Buynode0(_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long>,void *> *,_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long>,void *> *);
	};

	struct _List_alloc<_List_base_types<pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext>,allocator<pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext> > > >
	{
		_List_node<pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext>,void *> * _Buynode0(_List_node<pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext>,void *> *,_List_node<pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext>,void *> *);
	};

	struct _List_alloc<_List_base_types<pair<unsigned __int64 const ,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > >,allocator<pair<unsigned __int64 const ,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > > > >
	{
		_List_node<pair<unsigned __int64 const ,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > >,void *> * _Buynode0(_List_node<pair<unsigned __int64 const ,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > >,void *> *,_List_node<pair<unsigned __int64 const ,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > >,void *> *);
	};

	struct _List_alloc<_List_base_types<pair<unsigned long const ,ChannelRequests::ChannelRequestInternal>,allocator<pair<unsigned long const ,ChannelRequests::ChannelRequestInternal> > > >
	{
		_List_node<pair<unsigned long const ,ChannelRequests::ChannelRequestInternal>,void *> * _Buynode0(_List_node<pair<unsigned long const ,ChannelRequests::ChannelRequestInternal>,void *> *,_List_node<pair<unsigned long const ,ChannelRequests::ChannelRequestInternal>,void *> *);
	};

	struct _List_alloc<_List_base_types<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >
	{
		_List_node<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> * _Buynode0(_List_node<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *,_List_node<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
	};

	struct _List_alloc<_List_base_types<pair<unsigned long const ,shared_ptr<TileSession> >,allocator<pair<unsigned long const ,shared_ptr<TileSession> > > > >
	{
		_List_node<pair<unsigned long const ,shared_ptr<TileSession> >,void *> * _Buynode0(_List_node<pair<unsigned long const ,shared_ptr<TileSession> >,void *> *,_List_node<pair<unsigned long const ,shared_ptr<TileSession> >,void *> *);
	};

	struct _List_alloc<_List_base_types<pair<unsigned long const ,shared_ptr<ToastSession> >,allocator<pair<unsigned long const ,shared_ptr<ToastSession> > > > >
	{
		_List_node<pair<unsigned long const ,shared_ptr<ToastSession> >,void *> * _Buynode0(_List_node<pair<unsigned long const ,shared_ptr<ToastSession> >,void *> *,_List_node<pair<unsigned long const ,shared_ptr<ToastSession> >,void *> *);
	};

	struct _List_alloc<_List_base_types<unique_ptr<WorkItem,default_delete<WorkItem> >,allocator<unique_ptr<WorkItem,default_delete<WorkItem> > > > >
	{
		_List_node<unique_ptr<WorkItem,default_delete<WorkItem> >,void *> * _Buynode0(_List_node<unique_ptr<WorkItem,default_delete<WorkItem> >,void *> *,_List_node<unique_ptr<WorkItem,default_delete<WorkItem> >,void *> *);
	};

	struct _List_alloc<_List_base_types<unsigned long,allocator<unsigned long> > >
	{
		_List_node<unsigned long,void *> * _Buynode0(_List_node<unsigned long,void *> *,_List_node<unsigned long,void *> *);
	};

	struct _List_buy<TileSession::SubscriptionEntry,allocator<TileSession::SubscriptionEntry> >
	{
		_List_node<TileSession::SubscriptionEntry,void *> * _Buynode<TileSession::SubscriptionEntry &>(_List_node<TileSession::SubscriptionEntry,void *> *,_List_node<TileSession::SubscriptionEntry,void *> *,TileSession::SubscriptionEntry &);
		void _Freenode(_List_node<TileSession::SubscriptionEntry,void *> *);
	};

	struct _List_buy<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
		void _Freenode(_List_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> *);
	};

	struct _List_buy<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int>,allocator<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> > >
	{
		_List_node<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int>,void *> * _Buynode<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> const &>(_List_node<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int>,void *> *,_List_node<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int>,void *> *,pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> const &);
		void _Freenode(_List_node<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int>,void *> *);
	};

	struct _List_buy<pair<_TP_TIMER * const,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> > >,allocator<pair<_TP_TIMER * const,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> > > > >
	{
		void _Freenode(_List_node<pair<_TP_TIMER * const,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> > >,void *> *);
	};

	struct _List_buy<pair<basic_string<char,char_traits<char>,allocator<char> > const ,StatementCacheEntry>,allocator<pair<basic_string<char,char_traits<char>,allocator<char> > const ,StatementCacheEntry> > >
	{
		void _Freenode(_List_node<pair<basic_string<char,char_traits<char>,allocator<char> > const ,StatementCacheEntry>,void *> *);
	};

	struct _List_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >
	{
		void _Freenode(_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
	};

	struct _List_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > >
	{
		void _Freenode(_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> *);
	};

	struct _List_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > > > >
	{
		void _Freenode(_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > >,void *> *);
	};

	struct _List_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned int>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned int> > >
	{
		void _Freenode(_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned int>,void *> *);
	};

	struct _List_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > >
	{
		_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long>,void *> * _Buynode<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> const &>(_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long>,void *> *,_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long>,void *> *,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> const &);
		void _Freenode(_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long>,void *> *);
	};

	struct _List_buy<pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext>,allocator<pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext> > >
	{
		_List_node<pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext>,void *> * _Buynode<long &,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext &>(_List_node<pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext>,void *> *,_List_node<pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext>,void *> *,long &,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext &);
	};

	struct _List_buy<pair<unsigned __int64 const ,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > >,allocator<pair<unsigned __int64 const ,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > > >
	{
		void _Freenode(_List_node<pair<unsigned __int64 const ,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > >,void *> *);
	};

	struct _List_buy<pair<unsigned long const ,ChannelRequests::ChannelRequestInternal>,allocator<pair<unsigned long const ,ChannelRequests::ChannelRequestInternal> > >
	{
		void _Freenode(_List_node<pair<unsigned long const ,ChannelRequests::ChannelRequestInternal>,void *> *);
	};

	struct _List_buy<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >
	{
		_List_node<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> * _Buynode<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > const &>(_List_node<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *,_List_node<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *,pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > const &);
		void _Freenode(_List_node<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
	};

	struct _List_buy<pair<unsigned long const ,shared_ptr<TileSession> >,allocator<pair<unsigned long const ,shared_ptr<TileSession> > > >
	{
		void _Freenode(_List_node<pair<unsigned long const ,shared_ptr<TileSession> >,void *> *);
	};

	struct _List_buy<pair<unsigned long const ,shared_ptr<ToastSession> >,allocator<pair<unsigned long const ,shared_ptr<ToastSession> > > >
	{
		void _Freenode(_List_node<pair<unsigned long const ,shared_ptr<ToastSession> >,void *> *);
	};

	struct _List_buy<unique_ptr<WorkItem,default_delete<WorkItem> >,allocator<unique_ptr<WorkItem,default_delete<WorkItem> > > >
	{
		void _Freenode(_List_node<unique_ptr<WorkItem,default_delete<WorkItem> >,void *> *);
	};

	class _Matcher<char const *,char,regex_traits<char>,char const *>
	{
		bool _Better_match();
		bool _Do_class(_Node_base *);
		bool _Do_if(_Node_if *);
		bool _Do_rep(_Node_rep *,bool,int);
		bool _Do_rep0(_Node_rep *,bool);
		bool _Is_wbound();
		bool _Match_pat(_Node_base *);
	public:
		_Matcher<char const *,char,regex_traits<char>,char const *>(char const *,char const *,regex_traits<char> const &,_Root_node *,unsigned int,regex_constants::syntax_option_type,regex_constants::match_flag_type);
		bool _Match<allocator<sub_match<char const *> > >(match_results<char const *,allocator<sub_match<char const *> > > *,bool);
		char const * _Skip(char const *,char const *,_Node_base *);
		~_Matcher<char const *,char,regex_traits<char>,char const *>();
	};

	struct _Node_class<char,regex_traits<char> >
	{
		void _Tidy(_Sequence<char> *);
	};

	class _Parser<_String_const_iterator<_String_val<_Simple_types<char> > >,char,regex_traits<char> >
	{
		_Prs_ret _ClassAtom();
		_Prs_ret _ClassEscape(bool);
		bool _Alternative();
		bool _CharacterClassEscape(bool);
		bool _CharacterEscape();
		bool _DecimalDigits();
		bool _Do_ffn(char);
		bool _IsIdentityEscape();
		bool _Is_esc();
		bool _Wrapped_disjunction();
		int _Do_digits(int,int);
		void _AtomEscape();
		void _CharacterClass();
		void _ClassRanges();
		void _Disjunction();
		void _Do_assert_group(bool);
		void _Do_capture_group();
		void _Do_ex_class(_Meta_type);
		void _Do_noncapture_group();
		void _HexDigits(int);
		void _Next();
		void _Quantifier();
		void _Trans();
	public:
		_Parser<_String_const_iterator<_String_val<_Simple_types<char> > >,char,regex_traits<char> >(regex_traits<char> const &,_String_const_iterator<_String_val<_Simple_types<char> > >,_String_const_iterator<_String_val<_Simple_types<char> > >,regex_constants::syntax_option_type);
		_Root_node * _Compile();
		~_Parser<_String_const_iterator<_String_val<_Simple_types<char> > >,char,regex_traits<char> >();
	};

	struct _Ptr_base<Database>
	{
		void _Reset0(Database *,_Ref_count_base *);
	};

	struct _Ptr_base<Microsoft::Windows::Internal::PushNotifications::Owner<unique_ptr<NotificationPlatform,default_delete<NotificationPlatform> >,chrono::duration<__int64,ratio<1,1> > >::OwnerRef>
	{
		void _Reset0(Microsoft::Windows::Internal::PushNotifications::Owner<unique_ptr<NotificationPlatform,default_delete<NotificationPlatform> >,chrono::duration<__int64,ratio<1,1> > >::OwnerRef *,_Ref_count_base *);
	};

	struct _Ptr_base<Microsoft::Windows::Internal::PushNotifications::Owner<unsigned int,chrono::duration<__int64,ratio<1,1> > >::OwnerRef>
	{
		void _Reset0(Microsoft::Windows::Internal::PushNotifications::Owner<unsigned int,chrono::duration<__int64,ratio<1,1> > >::OwnerRef *,_Ref_count_base *);
	};

	struct _Ptr_base<NotificationPlatform>
	{
		void _Reset0(NotificationPlatform *,_Ref_count_base *);
	};

	struct _Ptr_base<TileSession>
	{
		void _Reset0(TileSession *,_Ref_count_base *);
	};

	struct _Ptr_base<ToastSession>
	{
		void _Reset0(ToastSession *,_Ref_count_base *);
	};

	class _Ref_count<Microsoft::Windows::Internal::PushNotifications::Owner<unique_ptr<NotificationPlatform,default_delete<NotificationPlatform> >,chrono::duration<__int64,ratio<1,1> > >::OwnerRef>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count<Microsoft::Windows::Internal::PushNotifications::Owner<unsigned int,chrono::duration<__int64,ratio<1,1> > >::OwnerRef>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	struct _Ref_count_base
	{
		virtual void * _Get_deleter(type_info const &);
		virtual ~_Ref_count_base();
		void _Decref();
		void _Decwref();
	};

	class _Ref_count_obj<Database>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<Statement>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<TileSession>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<ToastSession>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	struct _Regex_traits<char>
	{
		basic_string<char,char_traits<char>,allocator<char> > transform_primary<_String_const_iterator<_String_val<_Simple_types<char> > > >(_String_const_iterator<_String_val<_Simple_types<char> > >,_String_const_iterator<_String_val<_Simple_types<char> > >);
		basic_string<char,char_traits<char>,allocator<char> > transform_primary<char *>(char *,char *);
		bool isctype(char,short);
		char translate(char);
		short lookup_classname<_String_const_iterator<_String_val<_Simple_types<char> > > >(_String_const_iterator<_String_val<_Simple_types<char> > >,_String_const_iterator<_String_val<_Simple_types<char> > >,bool);
	};

	struct _String_alloc<_String_base_types<char,allocator<char> > >
	{
		~_String_alloc<_String_base_types<char,allocator<char> > >();
	};

	struct _String_alloc<_String_base_types<unsigned short,allocator<unsigned short> > >
	{
		~_String_alloc<_String_base_types<unsigned short,allocator<unsigned short> > >();
	};

	class _System_error
	{
		static basic_string<char,char_traits<char>,allocator<char> > _Makestr(error_code,basic_string<char,char_traits<char>,allocator<char> >);
	protected:
		_System_error(error_code,basic_string<char,char_traits<char>,allocator<char> > const &);
	public:
		_System_error(_System_error const &);
	};

	struct _Tgt_state_t<char const *>
	{
		_Tgt_state_t<char const *> & operator=(_Tgt_state_t<char const *> const &);
		_Tgt_state_t<char const *>();
		_Tgt_state_t<char const *>(_Tgt_state_t<char const *> const &);
		~_Tgt_state_t<char const *>();
	};

	class _Tree<_Tmap_traits<_TP_TIMER *,CToastHistoryChangeTimer *,less<_TP_TIMER *>,allocator<pair<_TP_TIMER * const,CToastHistoryChangeTimer *> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_TP_TIMER * const,CToastHistoryChangeTimer *> > > > _Insert_at<pair<_TP_TIMER * const,CToastHistoryChangeTimer *> &,_Tree_node<pair<_TP_TIMER * const,CToastHistoryChangeTimer *>,void *> *>(bool,_Tree_node<pair<_TP_TIMER * const,CToastHistoryChangeTimer *>,void *> *,pair<_TP_TIMER * const,CToastHistoryChangeTimer *> &,_Tree_node<pair<_TP_TIMER * const,CToastHistoryChangeTimer *>,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_TP_TIMER * const,CToastHistoryChangeTimer *> > > > _Insert_hint<pair<_TP_TIMER * const,CToastHistoryChangeTimer *> &,_Tree_node<pair<_TP_TIMER * const,CToastHistoryChangeTimer *>,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<_TP_TIMER * const,CToastHistoryChangeTimer *> > > >,pair<_TP_TIMER * const,CToastHistoryChangeTimer *> &,_Tree_node<pair<_TP_TIMER * const,CToastHistoryChangeTimer *>,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_TP_TIMER * const,CToastHistoryChangeTimer *> > > >,bool> _Insert_nohint<pair<_TP_TIMER * const,CToastHistoryChangeTimer *> &,_Tree_node<pair<_TP_TIMER * const,CToastHistoryChangeTimer *>,void *> *>(bool,pair<_TP_TIMER * const,CToastHistoryChangeTimer *> &,_Tree_node<pair<_TP_TIMER * const,CToastHistoryChangeTimer *>,void *> *);
		void _Erase(_Tree_node<pair<_TP_TIMER * const,CToastHistoryChangeTimer *>,void *> *);
		void _Lrotate(_Tree_node<pair<_TP_TIMER * const,CToastHistoryChangeTimer *>,void *> *);
		void _Rrotate(_Tree_node<pair<_TP_TIMER * const,CToastHistoryChangeTimer *>,void *> *);
	public:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_TP_TIMER * const,CToastHistoryChangeTimer *> > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<_TP_TIMER * const,CToastHistoryChangeTimer *> > > >);
		void clear();
	};

	class _Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,CToastHistoryChangeTimer *,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,CToastHistoryChangeTimer *> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,CToastHistoryChangeTimer *> > > > _Insert_at<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,CToastHistoryChangeTimer *> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,CToastHistoryChangeTimer *>,void *> *>(bool,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,CToastHistoryChangeTimer *>,void *> *,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,CToastHistoryChangeTimer *> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,CToastHistoryChangeTimer *>,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,CToastHistoryChangeTimer *> > > > _Insert_hint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,CToastHistoryChangeTimer *> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,CToastHistoryChangeTimer *>,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,CToastHistoryChangeTimer *> > > >,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,CToastHistoryChangeTimer *> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,CToastHistoryChangeTimer *>,void *> *);
		pair<_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,CToastHistoryChangeTimer *> > > >,_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,CToastHistoryChangeTimer *> > > > > _Eqrange<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,CToastHistoryChangeTimer *> > > >,bool> _Insert_nohint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,CToastHistoryChangeTimer *> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,CToastHistoryChangeTimer *>,void *> *>(bool,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,CToastHistoryChangeTimer *> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,CToastHistoryChangeTimer *>,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,CToastHistoryChangeTimer *>,void *> *);
		void _Erase(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,CToastHistoryChangeTimer *>,void *> *);
		void _Lrotate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,CToastHistoryChangeTimer *>,void *> *);
		void _Rrotate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,CToastHistoryChangeTimer *>,void *> *);
	public:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,CToastHistoryChangeTimer *> > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,CToastHistoryChangeTimer *> > > >);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,CToastHistoryChangeTimer *> > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,CToastHistoryChangeTimer *> > > >,_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,CToastHistoryChangeTimer *> > > >);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,CToastHistoryChangeTimer *> > > > find(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		unsigned __int64 erase(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		void clear();
	};

	class _Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > _Insert_at<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *>(bool,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > _Insert_hint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
		pair<_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >,_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > > _Eqrange<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >,bool> _Insert_nohint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *>(bool,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
		void _Erase(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
		void _Lrotate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
		void _Rrotate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
	public:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >,_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > find(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		unsigned __int64 erase(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
	};

	class _Tree<_Tmap_traits<unsigned __int64,Microsoft::Windows::Internal::PushNotifications::RegistrationEntry,less<unsigned __int64>,allocator<pair<unsigned __int64 const ,Microsoft::Windows::Internal::PushNotifications::RegistrationEntry> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned __int64 const ,Microsoft::Windows::Internal::PushNotifications::RegistrationEntry> > > > _Insert_at<pair<unsigned __int64 const ,Microsoft::Windows::Internal::PushNotifications::RegistrationEntry> &,_Tree_node<pair<unsigned __int64 const ,Microsoft::Windows::Internal::PushNotifications::RegistrationEntry>,void *> *>(bool,_Tree_node<pair<unsigned __int64 const ,Microsoft::Windows::Internal::PushNotifications::RegistrationEntry>,void *> *,pair<unsigned __int64 const ,Microsoft::Windows::Internal::PushNotifications::RegistrationEntry> &,_Tree_node<pair<unsigned __int64 const ,Microsoft::Windows::Internal::PushNotifications::RegistrationEntry>,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned __int64 const ,Microsoft::Windows::Internal::PushNotifications::RegistrationEntry> > > >,bool> _Insert_nohint<pair<unsigned __int64 const ,Microsoft::Windows::Internal::PushNotifications::RegistrationEntry> &,_Tree_node<pair<unsigned __int64 const ,Microsoft::Windows::Internal::PushNotifications::RegistrationEntry>,void *> *>(bool,pair<unsigned __int64 const ,Microsoft::Windows::Internal::PushNotifications::RegistrationEntry> &,_Tree_node<pair<unsigned __int64 const ,Microsoft::Windows::Internal::PushNotifications::RegistrationEntry>,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<unsigned __int64 const ,Microsoft::Windows::Internal::PushNotifications::RegistrationEntry>,void *> *);
		void _Erase(_Tree_node<pair<unsigned __int64 const ,Microsoft::Windows::Internal::PushNotifications::RegistrationEntry>,void *> *);
		void _Lrotate(_Tree_node<pair<unsigned __int64 const ,Microsoft::Windows::Internal::PushNotifications::RegistrationEntry>,void *> *);
		void _Rrotate(_Tree_node<pair<unsigned __int64 const ,Microsoft::Windows::Internal::PushNotifications::RegistrationEntry>,void *> *);
	public:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned __int64 const ,Microsoft::Windows::Internal::PushNotifications::RegistrationEntry> > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<unsigned __int64 const ,Microsoft::Windows::Internal::PushNotifications::RegistrationEntry> > > >);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned __int64 const ,Microsoft::Windows::Internal::PushNotifications::RegistrationEntry> > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<unsigned __int64 const ,Microsoft::Windows::Internal::PushNotifications::RegistrationEntry> > > >,_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<unsigned __int64 const ,Microsoft::Windows::Internal::PushNotifications::RegistrationEntry> > > >);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned __int64 const ,Microsoft::Windows::Internal::PushNotifications::RegistrationEntry> > > > find(unsigned __int64 const &);
	};

	struct _Tree_comp_alloc<_Tmap_traits<_TP_TIMER *,CToastHistoryChangeTimer *,less<_TP_TIMER *>,allocator<pair<_TP_TIMER * const,CToastHistoryChangeTimer *> >,0> >
	{
		_Tree_node<pair<_TP_TIMER * const,CToastHistoryChangeTimer *>,void *> * _Buyheadnode();
		_Tree_node<pair<_TP_TIMER * const,CToastHistoryChangeTimer *>,void *> * _Buynode0();
	};

	struct _Tree_comp_alloc<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,CToastHistoryChangeTimer *,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,CToastHistoryChangeTimer *> >,0> >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,CToastHistoryChangeTimer *>,void *> * _Buyheadnode();
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,CToastHistoryChangeTimer *>,void *> * _Buynode0();
	};

	struct _Tree_comp_alloc<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,0> >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> * _Buyheadnode();
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> * _Buynode0();
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> * _Buynode<unsigned short const * &,unsigned short const * &>(unsigned short const * &,unsigned short const * &);
	};

	struct _Tree_comp_alloc<_Tmap_traits<unsigned __int64,Microsoft::Windows::Internal::PushNotifications::RegistrationEntry,less<unsigned __int64>,allocator<pair<unsigned __int64 const ,Microsoft::Windows::Internal::PushNotifications::RegistrationEntry> >,0> >
	{
		_Tree_node<pair<unsigned __int64 const ,Microsoft::Windows::Internal::PushNotifications::RegistrationEntry>,void *> * _Buyheadnode();
		_Tree_node<pair<unsigned __int64 const ,Microsoft::Windows::Internal::PushNotifications::RegistrationEntry>,void *> * _Buynode0();
	};

	struct _Uhash_compare<TileSession::SubscriptionEntry,TileSession::SubscriptionEntryHash,equal_to<TileSession::SubscriptionEntry> >
	{
		bool operator()(TileSession::SubscriptionEntry const &,TileSession::SubscriptionEntry const &);
	};

	struct _Uhash_compare<basic_string<char,char_traits<char>,allocator<char> >,hash<basic_string<char,char_traits<char>,allocator<char> > >,equal_to<basic_string<char,char_traits<char>,allocator<char> > > >
	{
		bool operator()(basic_string<char,char_traits<char>,allocator<char> > const &,basic_string<char,char_traits<char>,allocator<char> > const &);
	};

	struct _Uhash_compare<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,hash<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,equal_to<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
		bool operator()(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
	};

	struct _Vb_reference<_Wrap_alloc<allocator<unsigned int> > >
	{
		_Vb_reference<_Wrap_alloc<allocator<unsigned int> > > & operator=(bool);
	};

	struct _Vb_val<allocator<bool> >
	{
		~_Vb_val<allocator<bool> >();
	};

	struct _Wrap_alloc<allocator<unique_ptr<ClearToastWork::SmartToastRequestControl,default_delete<ClearToastWork::SmartToastRequestControl> > > >
	{
		void destroy<unique_ptr<ClearToastWork::SmartToastRequestControl,default_delete<ClearToastWork::SmartToastRequestControl> > >(unique_ptr<ClearToastWork::SmartToastRequestControl,default_delete<ClearToastWork::SmartToastRequestControl> > *);
	};

	struct _Wrap_alloc<allocator<unique_ptr<vector<_WPN_NOTIFICATION_METADATA_PAIR,allocator<_WPN_NOTIFICATION_METADATA_PAIR> >,default_delete<vector<_WPN_NOTIFICATION_METADATA_PAIR,allocator<_WPN_NOTIFICATION_METADATA_PAIR> > > > > >
	{
		void destroy<unique_ptr<vector<_WPN_NOTIFICATION_METADATA_PAIR,allocator<_WPN_NOTIFICATION_METADATA_PAIR> >,default_delete<vector<_WPN_NOTIFICATION_METADATA_PAIR,allocator<_WPN_NOTIFICATION_METADATA_PAIR> > > > >(unique_ptr<vector<_WPN_NOTIFICATION_METADATA_PAIR,allocator<_WPN_NOTIFICATION_METADATA_PAIR> >,default_delete<vector<_WPN_NOTIFICATION_METADATA_PAIR,allocator<_WPN_NOTIFICATION_METADATA_PAIR> > > > *);
	};

	struct bad_alloc
	{
		bad_alloc();
		bad_alloc(bad_alloc const &);
		virtual ~bad_alloc();
	};

	struct bad_array_new_length
	{
		bad_array_new_length();
		bad_array_new_length(bad_array_new_length const &);
		virtual ~bad_array_new_length();
	};

	struct bad_cast
	{
		bad_cast(bad_cast const &);
		virtual ~bad_cast();
	};

	class basic_filebuf<char,char_traits<char> >
	{
		void _Reset_back();
		void _Set_back();
	protected:
		bool _Endwrite();
		virtual basic_streambuf<char,char_traits<char> > * setbuf(char *,__int64);
		virtual fpos<_Mbstatet> seekoff(__int64,int,int);
		virtual fpos<_Mbstatet> seekpos(fpos<_Mbstatet>,int);
		virtual int overflow(int);
		virtual int pbackfail(int);
		virtual int sync();
		virtual int uflow();
		virtual int underflow();
		virtual void imbue(locale const &);
		void _Init(_iobuf *,basic_filebuf<char,char_traits<char> >::_Initfl);
		void _Initcvt(codecvt<char,char,_Mbstatet> const *);
	public:
		basic_filebuf<char,char_traits<char> > * close();
		basic_filebuf<char,char_traits<char> >(_iobuf *);
		virtual void _Lock();
		virtual void _Unlock();
		virtual ~basic_filebuf<char,char_traits<char> >();
	};

	struct basic_fstream<char,char_traits<char> >
	{
		basic_fstream<char,char_traits<char> >();
		virtual ~basic_fstream<char,char_traits<char> >();
		void open(unsigned short const *,int,int);
	};

	struct basic_ifstream<char,char_traits<char> >
	{
		basic_ifstream<char,char_traits<char> >(char const *,int,int);
		virtual ~basic_ifstream<char,char_traits<char> >();
	};

	namespace basic_ostream<char,char_traits<char> >
	{
		struct _Sentry_base
		{
			~_Sentry_base();
		};

		struct sentry
		{
			sentry(basic_ostream<char,char_traits<char> > &);
			~sentry();
		};

	};

	namespace basic_ostream<unsigned short,char_traits<unsigned short> >
	{
		struct _Sentry_base
		{
			~_Sentry_base();
		};

		struct sentry
		{
			sentry(basic_ostream<unsigned short,char_traits<unsigned short> > &);
			~sentry();
		};

	};

	struct basic_ostringstream<char,char_traits<char>,allocator<char> >
	{
		basic_ostringstream<char,char_traits<char>,allocator<char> >(int);
		virtual ~basic_ostringstream<char,char_traits<char>,allocator<char> >();
	};

	struct basic_ostringstream<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >
	{
		basic_ostringstream<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(int);
		virtual ~basic_ostringstream<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >();
	};

	class basic_regex<char,regex_traits<char> >
	{
		void _Tidy();
	public:
		basic_regex<char,regex_traits<char> ><char_traits<char>,allocator<char> >(basic_string<char,char_traits<char>,allocator<char> > const &,regex_constants::syntax_option_type);
		~basic_regex<char,regex_traits<char> >();
	};

	class basic_streambuf<char,char_traits<char> >
	{
	protected:
		virtual __int64 showmanyc();
		virtual __int64 xsgetn(char *,__int64);
		virtual __int64 xsputn(char const *,__int64);
		virtual basic_streambuf<char,char_traits<char> > * setbuf(char *,__int64);
		virtual int sync();
		virtual int uflow();
		virtual void imbue(locale const &);
	public:
		virtual void _Lock();
		virtual void _Unlock();
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
	};

	struct basic_string<char,char_traits<char>,allocator<char> >
	{
		basic_string<char,char_traits<char>,allocator<char> > & append(char const * const,unsigned __int64);
		basic_string<char,char_traits<char>,allocator<char> > & append(unsigned __int64,char);
		basic_string<char,char_traits<char>,allocator<char> > & assign(char const * const,unsigned __int64);
		basic_string<char,char_traits<char>,allocator<char> >(basic_string<char,char_traits<char>,allocator<char> > const &);
		basic_string<char,char_traits<char>,allocator<char> >(char const * const);
		basic_string<char,char_traits<char>,allocator<char> >(char const * const,unsigned __int64);
		basic_string<char,char_traits<char>,allocator<char> >(unsigned __int64,char);
		unsigned __int64 _Calculate_growth(unsigned __int64);
		void _Construct_lv_contents(basic_string<char,char_traits<char>,allocator<char> > const &);
		void _Tidy_deallocate();
		void push_back(char);
		~basic_string<char,char_traits<char>,allocator<char> >();
	};

	struct basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >
	{
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & append(unsigned __int64,unsigned short);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & append(unsigned short const * const,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & assign(unsigned short const * const,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & operator=(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & replace(unsigned __int64,unsigned __int64,unsigned short const * const,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(unsigned short const * const);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(unsigned short const * const,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> ><unsigned short *,void>(unsigned short *,unsigned short *,allocator<unsigned short> const &);
		int compare(unsigned short const * const);
		static void _Xlen();
		unsigned __int64 _Calculate_growth(unsigned __int64);
		unsigned __int64 find(unsigned short const * const,unsigned __int64);
		unsigned short const * c_str();
		void _Construct_lv_contents(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		void _Tidy_deallocate();
		~basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >();
	};

	class basic_stringbuf<char,char_traits<char>,allocator<char> >
	{
	protected:
		virtual fpos<_Mbstatet> seekoff(__int64,int,int);
		virtual fpos<_Mbstatet> seekpos(fpos<_Mbstatet>,int);
		virtual int overflow(int);
		virtual int pbackfail(int);
		virtual int underflow();
		void _Tidy();
	public:
		basic_string<char,char_traits<char>,allocator<char> > str();
		virtual ~basic_stringbuf<char,char_traits<char>,allocator<char> >();
	};

	class basic_stringbuf<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >
	{
	protected:
		virtual fpos<_Mbstatet> seekoff(__int64,int,int);
		virtual fpos<_Mbstatet> seekpos(fpos<_Mbstatet>,int);
		virtual unsigned short overflow(unsigned short);
		virtual unsigned short pbackfail(unsigned short);
		virtual unsigned short underflow();
		void _Tidy();
	public:
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > str();
		virtual ~basic_stringbuf<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >();
	};

	namespace chrono
	{
		struct steady_clock
		{
			static time_point<steady_clock,duration<__int64,ratio<1,1000000000> > > now();
		};

	};

	class collate<char>
	{
	protected:
		virtual basic_string<char,char_traits<char>,allocator<char> > do_transform(char const *,char const *);
		virtual int do_compare(char const *,char const *,char const *,char const *);
		virtual long do_hash(char const *,char const *);
	public:
		static unsigned __int64 _Getcat(locale::facet const * *,locale const *);
	};

	struct condition_variable
	{
		cv_status wait_until(unique_lock<mutex> &,xtime const *);
		~condition_variable();
	};

	struct default_delete<BackgroundActivation>
	{
		void operator()(BackgroundActivation *);
	};

	struct default_delete<BackgroundApplicationPolicyManager>
	{
		void operator()(BackgroundApplicationPolicyManager *);
	};

	struct default_delete<BlockedRawChannels>
	{
		void operator()(BlockedRawChannels *);
	};

	struct default_delete<CacheMetadataStorage>
	{
		void operator()(CacheMetadataStorage *);
	};

	struct default_delete<DatabaseTQMAdaptor>
	{
		void operator()(DatabaseTQMAdaptor *);
	};

	struct default_delete<IDebuggerSupport>
	{
		void operator()(IDebuggerSupport *);
	};

	struct default_delete<IGlobalSettings>
	{
		void operator()(IGlobalSettings *);
	};

	struct default_delete<IImageCache>
	{
		void operator()(IImageCache *);
	};

	struct default_delete<IResourceManager>
	{
		void operator()(IResourceManager *);
	};

	struct default_delete<IStatistics>
	{
		void operator()(IStatistics *);
	};

	struct default_delete<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext>
	{
		void operator()(Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext *);
	};

	struct default_delete<Microsoft::Windows::Internal::PushNotifications::Callback>
	{
		void operator()(Microsoft::Windows::Internal::PushNotifications::Callback *);
	};

	struct default_delete<Microsoft::Windows::Internal::PushNotifications::ConnectionProviderLoader>
	{
		void operator()(Microsoft::Windows::Internal::PushNotifications::ConnectionProviderLoader *);
	};

	struct default_delete<NotificationAvailableWork>
	{
		void operator()(NotificationAvailableWork *);
	};

	struct default_delete<PackageAppMapping>
	{
		void operator()(PackageAppMapping *);
	};

	struct default_delete<PackageCatalogListener>
	{
		void operator()(PackageCatalogListener *);
	};

	struct default_delete<PersistenceManager>
	{
		void operator()(PersistenceManager *);
	};

	struct default_delete<PollingUrlRegistrationCache>
	{
		void operator()(PollingUrlRegistrationCache *);
	};

	struct default_delete<RaiseToastClearedCallbackWork>
	{
		void operator()(RaiseToastClearedCallbackWork *);
	};

	struct default_delete<RaiseToastRolloverClearedCallbackWork>
	{
		void operator()(RaiseToastRolloverClearedCallbackWork *);
	};

	struct default_delete<RegistryHelper>
	{
		void operator()(RegistryHelper *);
	};

	struct default_delete<RunningApps>
	{
		void operator()(RunningApps *);
	};

	struct default_delete<ScheduledToasts>
	{
		void operator()(ScheduledToasts *);
	};

	struct default_delete<SebEvents>
	{
		void operator()(SebEvents *);
	};

	struct default_delete<StatisticsManager>
	{
		void operator()(StatisticsManager *);
	};

	struct default_delete<ThrottledWorkItem>
	{
		void operator()(ThrottledWorkItem *);
	};

	struct default_delete<ToastRequestNotificationWork>
	{
		void operator()(ToastRequestNotificationWork *);
	};

	struct default_delete<WorkItem>
	{
		void operator()(WorkItem *);
	};

	class deque<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
	protected:
		void _Growmap(unsigned __int64);
		void _Tidy();
	public:
		void pop_back();
		void push_back(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
	};

	struct error_category
	{
		virtual bool equivalent(error_code const &,int);
		virtual bool equivalent(int,error_condition const &);
		virtual error_condition default_error_condition(int);
	};

	struct exception
	{
		exception(exception const &);
		virtual char const * what();
	};

	struct exception_ptr
	{
		~exception_ptr();
	};

	struct function<long (TileSession *)>
	{
		~function<long (TileSession *)>();
	};

	struct function<long (ToastSession *)>
	{
		~function<long (ToastSession *)>();
	};

	struct list<Microsoft::Windows::Internal::PushNotifications::DiagTrackQueue::DiagTrackContext,allocator<Microsoft::Windows::Internal::PushNotifications::DiagTrackQueue::DiagTrackContext> >
	{
		void clear();
	};

	struct list<TileSession::SubscriptionEntry,allocator<TileSession::SubscriptionEntry> >
	{
		_List_iterator<_List_val<_List_simple_types<TileSession::SubscriptionEntry> > > erase(_List_const_iterator<_List_val<_List_simple_types<TileSession::SubscriptionEntry> > >);
		void clear();
		~list<TileSession::SubscriptionEntry,allocator<TileSession::SubscriptionEntry> >();
	};

	struct list<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
		_List_iterator<_List_val<_List_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > erase(_List_const_iterator<_List_val<_List_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >);
		void clear();
		~list<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >();
	};

	struct list<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int>,allocator<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> > >
	{
		_List_iterator<_List_val<_List_simple_types<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> > > > erase(_List_const_iterator<_List_val<_List_simple_types<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> > > >);
		void _Incsize(unsigned __int64);
		void clear();
		~list<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int>,allocator<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> > >();
	};

	struct list<pair<_TP_TIMER * const,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> > >,allocator<pair<_TP_TIMER * const,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> > > > >
	{
		_List_iterator<_List_val<_List_simple_types<pair<_TP_TIMER * const,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> > > > > > erase(_List_const_iterator<_List_val<_List_simple_types<pair<_TP_TIMER * const,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> > > > > >);
		void clear();
		~list<pair<_TP_TIMER * const,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> > >,allocator<pair<_TP_TIMER * const,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> > > > >();
	};

	struct list<pair<basic_string<char,char_traits<char>,allocator<char> > const ,StatementCacheEntry>,allocator<pair<basic_string<char,char_traits<char>,allocator<char> > const ,StatementCacheEntry> > >
	{
		_List_iterator<_List_val<_List_simple_types<pair<basic_string<char,char_traits<char>,allocator<char> > const ,StatementCacheEntry> > > > erase(_List_const_iterator<_List_val<_List_simple_types<pair<basic_string<char,char_traits<char>,allocator<char> > const ,StatementCacheEntry> > > >);
		void clear();
		~list<pair<basic_string<char,char_traits<char>,allocator<char> > const ,StatementCacheEntry>,allocator<pair<basic_string<char,char_traits<char>,allocator<char> > const ,StatementCacheEntry> > >();
	};

	struct list<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >
	{
		_List_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > erase(_List_const_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >);
		void _Incsize(unsigned __int64);
		~list<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >();
	};

	struct list<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > >
	{
		_List_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > > > erase(_List_const_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > > >);
		void _Incsize(unsigned __int64);
		void clear();
		~list<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > >();
	};

	struct list<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > > > >
	{
		_List_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > > > > > erase(_List_const_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > > > > >);
		void clear();
		~list<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > > > >();
	};

	struct list<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned int>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned int> > >
	{
		_List_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned int> > > > erase(_List_const_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned int> > > >);
		~list<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned int>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned int> > >();
	};

	struct list<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > >
	{
		_List_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > > > erase(_List_const_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > > >);
		void _Incsize(unsigned __int64);
		~list<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > >();
	};

	struct list<pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext>,allocator<pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext> > >
	{
		_List_iterator<_List_val<_List_simple_types<pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext> > > > erase(_List_const_iterator<_List_val<_List_simple_types<pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext> > > >);
		void clear();
		~list<pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext>,allocator<pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext> > >();
	};

	struct list<pair<unsigned __int64 const ,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > >,allocator<pair<unsigned __int64 const ,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > > >
	{
		_List_iterator<_List_val<_List_simple_types<pair<unsigned __int64 const ,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > > > > erase(_List_const_iterator<_List_val<_List_simple_types<pair<unsigned __int64 const ,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > > > >);
		~list<pair<unsigned __int64 const ,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > >,allocator<pair<unsigned __int64 const ,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > > >();
	};

	struct list<pair<unsigned long const ,ChannelRequests::ChannelRequestInternal>,allocator<pair<unsigned long const ,ChannelRequests::ChannelRequestInternal> > >
	{
		_List_iterator<_List_val<_List_simple_types<pair<unsigned long const ,ChannelRequests::ChannelRequestInternal> > > > erase(_List_const_iterator<_List_val<_List_simple_types<pair<unsigned long const ,ChannelRequests::ChannelRequestInternal> > > >);
		void clear();
		~list<pair<unsigned long const ,ChannelRequests::ChannelRequestInternal>,allocator<pair<unsigned long const ,ChannelRequests::ChannelRequestInternal> > >();
	};

	struct list<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >
	{
		_List_iterator<_List_val<_List_simple_types<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > erase(_List_const_iterator<_List_val<_List_simple_types<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >);
		void _Incsize(unsigned __int64);
		~list<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >();
	};

	struct list<pair<unsigned long const ,shared_ptr<TileSession> >,allocator<pair<unsigned long const ,shared_ptr<TileSession> > > >
	{
		_List_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<TileSession> > > > > erase(_List_const_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<TileSession> > > > >);
		void clear();
		~list<pair<unsigned long const ,shared_ptr<TileSession> >,allocator<pair<unsigned long const ,shared_ptr<TileSession> > > >();
	};

	struct list<pair<unsigned long const ,shared_ptr<ToastSession> >,allocator<pair<unsigned long const ,shared_ptr<ToastSession> > > >
	{
		_List_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<ToastSession> > > > > erase(_List_const_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<ToastSession> > > > >);
		void clear();
		~list<pair<unsigned long const ,shared_ptr<ToastSession> >,allocator<pair<unsigned long const ,shared_ptr<ToastSession> > > >();
	};

	struct list<unique_ptr<WorkItem,default_delete<WorkItem> >,allocator<unique_ptr<WorkItem,default_delete<WorkItem> > > >
	{
		void clear();
		~list<unique_ptr<WorkItem,default_delete<WorkItem> >,allocator<unique_ptr<WorkItem,default_delete<WorkItem> > > >();
	};

	struct list<unsigned long,allocator<unsigned long> >
	{
		~list<unsigned long,allocator<unsigned long> >();
	};

	struct locale
	{
		struct facet
		{
			virtual _Facet_base * _Decref();
			virtual void _Incref();
		};

		basic_string<char,char_traits<char>,allocator<char> > name();
		locale::facet const * _Getfacet(unsigned __int64);
		~locale();
	};

	struct lock_guard<mutex>
	{
		~lock_guard<mutex>();
	};

	struct map<_TP_TIMER *,CToastHistoryChangeTimer *,less<_TP_TIMER *>,allocator<pair<_TP_TIMER * const,CToastHistoryChangeTimer *> > >
	{
		~map<_TP_TIMER *,CToastHistoryChangeTimer *,less<_TP_TIMER *>,allocator<pair<_TP_TIMER * const,CToastHistoryChangeTimer *> > >();
	};

	struct map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,CToastHistoryChangeTimer *,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,CToastHistoryChangeTimer *> > >
	{
		~map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,CToastHistoryChangeTimer *,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,CToastHistoryChangeTimer *> > >();
	};

	struct map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >
	{
		~map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >();
	};

	struct match_results<char const *,allocator<sub_match<char const *> > >
	{
		sub_match<char const *> const & operator[](unsigned __int64);
		~match_results<char const *,allocator<sub_match<char const *> > >();
	};

	struct mutex
	{
		~mutex();
	};

	struct pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >
	{
		~pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >();
	};

	struct pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long>
	{
		~pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long>();
	};

	struct pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >
	{
		~pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >();
	};

	struct pair<unsigned long const ,shared_ptr<TileSession> >
	{
		~pair<unsigned long const ,shared_ptr<TileSession> >();
	};

	struct pair<unsigned long const ,shared_ptr<ToastSession> >
	{
		~pair<unsigned long const ,shared_ptr<ToastSession> >();
	};

	struct recursive_mutex
	{
		~recursive_mutex();
	};

	struct regex_traits<char>
	{
		~regex_traits<char>();
	};

	struct runtime_error
	{
		runtime_error(runtime_error const &);
	};

	struct shared_ptr<Database>
	{
		shared_ptr<Database>(shared_ptr<Database> const &);
		~shared_ptr<Database>();
	};

	class shared_ptr<Microsoft::Windows::Internal::PushNotifications::Owner<unique_ptr<NotificationPlatform,default_delete<NotificationPlatform> >,chrono::duration<__int64,ratio<1,1> > >::OwnerRef>
	{
		void _Resetp<Microsoft::Windows::Internal::PushNotifications::Owner<unique_ptr<NotificationPlatform,default_delete<NotificationPlatform> >,chrono::duration<__int64,ratio<1,1> > >::OwnerRef>(Microsoft::Windows::Internal::PushNotifications::Owner<unique_ptr<NotificationPlatform,default_delete<NotificationPlatform> >,chrono::duration<__int64,ratio<1,1> > >::OwnerRef *);
	};

	class shared_ptr<Microsoft::Windows::Internal::PushNotifications::Owner<unsigned int,chrono::duration<__int64,ratio<1,1> > >::OwnerRef>
	{
		void _Resetp<Microsoft::Windows::Internal::PushNotifications::Owner<unsigned int,chrono::duration<__int64,ratio<1,1> > >::OwnerRef>(Microsoft::Windows::Internal::PushNotifications::Owner<unsigned int,chrono::duration<__int64,ratio<1,1> > >::OwnerRef *);
	public:
		shared_ptr<Microsoft::Windows::Internal::PushNotifications::Owner<unsigned int,chrono::duration<__int64,ratio<1,1> > >::OwnerRef>(shared_ptr<Microsoft::Windows::Internal::PushNotifications::Owner<unsigned int,chrono::duration<__int64,ratio<1,1> > >::OwnerRef> const &);
	};

	struct shared_ptr<NotificationPlatform>
	{
		shared_ptr<NotificationPlatform>(shared_ptr<NotificationPlatform> const &);
		~shared_ptr<NotificationPlatform>();
	};

	struct shared_ptr<Statement>
	{
		shared_ptr<Statement> & operator=(shared_ptr<Statement> const &);
		shared_ptr<Statement>(shared_ptr<Statement> const &);
		~shared_ptr<Statement>();
	};

	struct shared_ptr<TileSession>
	{
		shared_ptr<TileSession> & operator=(shared_ptr<TileSession> const &);
		shared_ptr<TileSession>(shared_ptr<TileSession> const &);
		~shared_ptr<TileSession>();
	};

	struct shared_ptr<ToastSession>
	{
		shared_ptr<ToastSession> & operator=(shared_ptr<ToastSession> const &);
		shared_ptr<ToastSession>(shared_ptr<ToastSession> const &);
		~shared_ptr<ToastSession>();
	};

	struct stack<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,deque<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >
	{
		~stack<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,deque<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >();
	};

	struct system_error
	{
		system_error(error_code);
		system_error(system_error const &);
		virtual ~system_error();
	};

	struct unique_lock<mutex>
	{
		unique_lock<mutex>(mutex &);
		~unique_lock<mutex>();
	};

	struct unique_lock<recursive_mutex>
	{
		unique_lock<recursive_mutex>(recursive_mutex &);
		~unique_lock<recursive_mutex>();
	};

	struct unique_ptr<BackgroundActivation,default_delete<BackgroundActivation> >
	{
		~unique_ptr<BackgroundActivation,default_delete<BackgroundActivation> >();
	};

	struct unique_ptr<BackgroundApplicationPolicyManager,default_delete<BackgroundApplicationPolicyManager> >
	{
		~unique_ptr<BackgroundApplicationPolicyManager,default_delete<BackgroundApplicationPolicyManager> >();
	};

	struct unique_ptr<BlockedRawChannels,default_delete<BlockedRawChannels> >
	{
		~unique_ptr<BlockedRawChannels,default_delete<BlockedRawChannels> >();
	};

	struct unique_ptr<CacheManager,default_delete<CacheManager> >
	{
		~unique_ptr<CacheManager,default_delete<CacheManager> >();
	};

	struct unique_ptr<ChannelRequests,default_delete<ChannelRequests> >
	{
		~unique_ptr<ChannelRequests,default_delete<ChannelRequests> >();
	};

	struct unique_ptr<ClearToastWork::SmartToastRequestControl,default_delete<ClearToastWork::SmartToastRequestControl> >
	{
		~unique_ptr<ClearToastWork::SmartToastRequestControl,default_delete<ClearToastWork::SmartToastRequestControl> >();
	};

	struct unique_ptr<ConfigurePowerSaverWork,default_delete<ConfigurePowerSaverWork> >
	{
		~unique_ptr<ConfigurePowerSaverWork,default_delete<ConfigurePowerSaverWork> >();
	};

	struct unique_ptr<ConnectWork,default_delete<ConnectWork> >
	{
		~unique_ptr<ConnectWork,default_delete<ConnectWork> >();
	};

	struct unique_ptr<DatabaseMigrationHelper,default_delete<DatabaseMigrationHelper> >
	{
		~unique_ptr<DatabaseMigrationHelper,default_delete<DatabaseMigrationHelper> >();
	};

	struct unique_ptr<DatabaseTQMAdaptor,default_delete<DatabaseTQMAdaptor> >
	{
		~unique_ptr<DatabaseTQMAdaptor,default_delete<DatabaseTQMAdaptor> >();
	};

	struct unique_ptr<DebuggerSupportManager,default_delete<DebuggerSupportManager> >
	{
		~unique_ptr<DebuggerSupportManager,default_delete<DebuggerSupportManager> >();
	};

	struct unique_ptr<DisconnectWork,default_delete<DisconnectWork> >
	{
		~unique_ptr<DisconnectWork,default_delete<DisconnectWork> >();
	};

	struct unique_ptr<IDebuggerSupport,default_delete<IDebuggerSupport> >
	{
		~unique_ptr<IDebuggerSupport,default_delete<IDebuggerSupport> >();
	};

	struct unique_ptr<IGlobalSettings,default_delete<IGlobalSettings> >
	{
		~unique_ptr<IGlobalSettings,default_delete<IGlobalSettings> >();
	};

	struct unique_ptr<IImageCache,default_delete<IImageCache> >
	{
		~unique_ptr<IImageCache,default_delete<IImageCache> >();
	};

	struct unique_ptr<IResourceManager,default_delete<IResourceManager> >
	{
		~unique_ptr<IResourceManager,default_delete<IResourceManager> >();
	};

	struct unique_ptr<IStatistics,default_delete<IStatistics> >
	{
		~unique_ptr<IStatistics,default_delete<IStatistics> >();
	};

	struct unique_ptr<ImageRequestManager,default_delete<ImageRequestManager> >
	{
		~unique_ptr<ImageRequestManager,default_delete<ImageRequestManager> >();
	};

	struct unique_ptr<LaunchIdleTaskWork,default_delete<LaunchIdleTaskWork> >
	{
		~unique_ptr<LaunchIdleTaskWork,default_delete<LaunchIdleTaskWork> >();
	};

	struct unique_ptr<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext,default_delete<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext> >
	{
		~unique_ptr<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext,default_delete<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext> >();
	};

	struct unique_ptr<Microsoft::Windows::Internal::PushNotifications::Callback,default_delete<Microsoft::Windows::Internal::PushNotifications::Callback> >
	{
		~unique_ptr<Microsoft::Windows::Internal::PushNotifications::Callback,default_delete<Microsoft::Windows::Internal::PushNotifications::Callback> >();
	};

	struct unique_ptr<Microsoft::Windows::Internal::PushNotifications::ConnectionProviderLoader,default_delete<Microsoft::Windows::Internal::PushNotifications::ConnectionProviderLoader> >
	{
		~unique_ptr<Microsoft::Windows::Internal::PushNotifications::ConnectionProviderLoader,default_delete<Microsoft::Windows::Internal::PushNotifications::ConnectionProviderLoader> >();
	};

	struct unique_ptr<Microsoft::Windows::Internal::PushNotifications::DismissActivityWork,default_delete<Microsoft::Windows::Internal::PushNotifications::DismissActivityWork> >
	{
		~unique_ptr<Microsoft::Windows::Internal::PushNotifications::DismissActivityWork,default_delete<Microsoft::Windows::Internal::PushNotifications::DismissActivityWork> >();
	};

	struct unique_ptr<Microsoft::Windows::Internal::PushNotifications::MirroringAccount,default_delete<Microsoft::Windows::Internal::PushNotifications::MirroringAccount> >
	{
		~unique_ptr<Microsoft::Windows::Internal::PushNotifications::MirroringAccount,default_delete<Microsoft::Windows::Internal::PushNotifications::MirroringAccount> >();
	};

	struct unique_ptr<Microsoft::Windows::Internal::PushNotifications::MirroringAccountSwitchWork,default_delete<Microsoft::Windows::Internal::PushNotifications::MirroringAccountSwitchWork> >
	{
		~unique_ptr<Microsoft::Windows::Internal::PushNotifications::MirroringAccountSwitchWork,default_delete<Microsoft::Windows::Internal::PushNotifications::MirroringAccountSwitchWork> >();
	};

	struct unique_ptr<Microsoft::Windows::Internal::PushNotifications::Owner<unsigned int,chrono::duration<__int64,ratio<1,1> > >,default_delete<Microsoft::Windows::Internal::PushNotifications::Owner<unsigned int,chrono::duration<__int64,ratio<1,1> > > > >
	{
		~unique_ptr<Microsoft::Windows::Internal::PushNotifications::Owner<unsigned int,chrono::duration<__int64,ratio<1,1> > >,default_delete<Microsoft::Windows::Internal::PushNotifications::Owner<unsigned int,chrono::duration<__int64,ratio<1,1> > > > >();
	};

	struct unique_ptr<MirrorDataUpdateWork,default_delete<MirrorDataUpdateWork> >
	{
		~unique_ptr<MirrorDataUpdateWork,default_delete<MirrorDataUpdateWork> >();
	};

	struct unique_ptr<MrtHelper,default_delete<MrtHelper> >
	{
		~unique_ptr<MrtHelper,default_delete<MrtHelper> >();
	};

	struct unique_ptr<NotificationAvailableWork,default_delete<NotificationAvailableWork> >
	{
		~unique_ptr<NotificationAvailableWork,default_delete<NotificationAvailableWork> >();
	};

	struct unique_ptr<NotificationDeliveryTransaction,default_delete<NotificationDeliveryTransaction> >
	{
		~unique_ptr<NotificationDeliveryTransaction,default_delete<NotificationDeliveryTransaction> >();
	};

	struct unique_ptr<NotificationPlatform,default_delete<NotificationPlatform> >
	{
		~unique_ptr<NotificationPlatform,default_delete<NotificationPlatform> >();
	};

	struct unique_ptr<NotificationUpdateDataWork,default_delete<NotificationUpdateDataWork> >
	{
		~unique_ptr<NotificationUpdateDataWork,default_delete<NotificationUpdateDataWork> >();
	};

	struct unique_ptr<PackageAppMapping,default_delete<PackageAppMapping> >
	{
		~unique_ptr<PackageAppMapping,default_delete<PackageAppMapping> >();
	};

	struct unique_ptr<PackageCatalogListener,default_delete<PackageCatalogListener> >
	{
		~unique_ptr<PackageCatalogListener,default_delete<PackageCatalogListener> >();
	};

	struct unique_ptr<PeriodicUpdateManager,default_delete<PeriodicUpdateManager> >
	{
		~unique_ptr<PeriodicUpdateManager,default_delete<PeriodicUpdateManager> >();
	};

	struct unique_ptr<PersistenceManager,default_delete<PersistenceManager> >
	{
		~unique_ptr<PersistenceManager,default_delete<PersistenceManager> >();
	};

	struct unique_ptr<PollingUrlRegistrationCache,default_delete<PollingUrlRegistrationCache> >
	{
		~unique_ptr<PollingUrlRegistrationCache,default_delete<PollingUrlRegistrationCache> >();
	};

	struct unique_ptr<RaiseToastClearedCallbackWork,default_delete<RaiseToastClearedCallbackWork> >
	{
		~unique_ptr<RaiseToastClearedCallbackWork,default_delete<RaiseToastClearedCallbackWork> >();
	};

	struct unique_ptr<RaiseToastRolloverClearedCallbackWork,default_delete<RaiseToastRolloverClearedCallbackWork> >
	{
		~unique_ptr<RaiseToastRolloverClearedCallbackWork,default_delete<RaiseToastRolloverClearedCallbackWork> >();
	};

	struct unique_ptr<ReconnectWork,default_delete<ReconnectWork> >
	{
		~unique_ptr<ReconnectWork,default_delete<ReconnectWork> >();
	};

	struct unique_ptr<RegistryHelper,default_delete<RegistryHelper> >
	{
		~unique_ptr<RegistryHelper,default_delete<RegistryHelper> >();
	};

	struct unique_ptr<RequestChannelWork,default_delete<RequestChannelWork> >
	{
		~unique_ptr<RequestChannelWork,default_delete<RequestChannelWork> >();
	};

	struct unique_ptr<RunningApps,default_delete<RunningApps> >
	{
		~unique_ptr<RunningApps,default_delete<RunningApps> >();
	};

	struct unique_ptr<ScheduledTileManager,default_delete<ScheduledTileManager> >
	{
		~unique_ptr<ScheduledTileManager,default_delete<ScheduledTileManager> >();
	};

	struct unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> >
	{
		~unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> >();
	};

	struct unique_ptr<ScheduledToasts,default_delete<ScheduledToasts> >
	{
		~unique_ptr<ScheduledToasts,default_delete<ScheduledToasts> >();
	};

	struct unique_ptr<SebEvents,default_delete<SebEvents> >
	{
		~unique_ptr<SebEvents,default_delete<SebEvents> >();
	};

	struct unique_ptr<SendExemptionListWork,default_delete<SendExemptionListWork> >
	{
		~unique_ptr<SendExemptionListWork,default_delete<SendExemptionListWork> >();
	};

	struct unique_ptr<SessionManager,default_delete<SessionManager> >
	{
		~unique_ptr<SessionManager,default_delete<SessionManager> >();
	};

	struct unique_ptr<StatisticsManager,default_delete<StatisticsManager> >
	{
		~unique_ptr<StatisticsManager,default_delete<StatisticsManager> >();
	};

	struct unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> >
	{
		~unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> >();
	};

	struct unique_ptr<TileQueueManager,default_delete<TileQueueManager> >
	{
		~unique_ptr<TileQueueManager,default_delete<TileQueueManager> >();
	};

	struct unique_ptr<ToastForwardingWork,default_delete<ToastForwardingWork> >
	{
		~unique_ptr<ToastForwardingWork,default_delete<ToastForwardingWork> >();
	};

	struct unique_ptr<ToastRequestNotificationWork,default_delete<ToastRequestNotificationWork> >
	{
		~unique_ptr<ToastRequestNotificationWork,default_delete<ToastRequestNotificationWork> >();
	};

	struct unique_ptr<ToastWakeupTimerManager,default_delete<ToastWakeupTimerManager> >
	{
		~unique_ptr<ToastWakeupTimerManager,default_delete<ToastWakeupTimerManager> >();
	};

	struct unique_ptr<WPNHttpHeaderParser,default_delete<WPNHttpHeaderParser> >
	{
		~unique_ptr<WPNHttpHeaderParser,default_delete<WPNHttpHeaderParser> >();
	};

	struct unique_ptr<WPN_NOTIFICATION_REQUEST_ENTRY,default_delete<WPN_NOTIFICATION_REQUEST_ENTRY> >
	{
		~unique_ptr<WPN_NOTIFICATION_REQUEST_ENTRY,default_delete<WPN_NOTIFICATION_REQUEST_ENTRY> >();
	};

	struct unique_ptr<WorkItem,default_delete<WorkItem> >
	{
		~unique_ptr<WorkItem,default_delete<WorkItem> >();
	};

	struct unique_ptr<WpnTelemetryAggregator,default_delete<WpnTelemetryAggregator> >
	{
		~unique_ptr<WpnTelemetryAggregator,default_delete<WpnTelemetryAggregator> >();
	};

	struct unique_ptr<_WPN_TOAST_NOTIFICATION,default_delete<_WPN_TOAST_NOTIFICATION> >
	{
		~unique_ptr<_WPN_TOAST_NOTIFICATION,default_delete<_WPN_TOAST_NOTIFICATION> >();
	};

	struct unique_ptr<char,SqliteDeleter>
	{
		~unique_ptr<char,SqliteDeleter>();
	};

	struct unique_ptr<vector<_WPN_NOTIFICATION_METADATA_PAIR,allocator<_WPN_NOTIFICATION_METADATA_PAIR> >,default_delete<vector<_WPN_NOTIFICATION_METADATA_PAIR,allocator<_WPN_NOTIFICATION_METADATA_PAIR> > > >
	{
		~unique_ptr<vector<_WPN_NOTIFICATION_METADATA_PAIR,allocator<_WPN_NOTIFICATION_METADATA_PAIR> >,default_delete<vector<_WPN_NOTIFICATION_METADATA_PAIR,allocator<_WPN_NOTIFICATION_METADATA_PAIR> > > >();
	};

	struct unordered_map<WpnTelemetryAggregator::HandlerWithType,unsigned int,WpnTelemetryAggregator::HandlerWithTypeHash,equal_to<WpnTelemetryAggregator::HandlerWithType>,allocator<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> > >
	{
		unordered_map<WpnTelemetryAggregator::HandlerWithType,unsigned int,WpnTelemetryAggregator::HandlerWithTypeHash,equal_to<WpnTelemetryAggregator::HandlerWithType>,allocator<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> > >();
		~unordered_map<WpnTelemetryAggregator::HandlerWithType,unsigned int,WpnTelemetryAggregator::HandlerWithTypeHash,equal_to<WpnTelemetryAggregator::HandlerWithType>,allocator<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> > >();
	};

	struct unordered_map<_TP_TIMER *,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> >,hash<_TP_TIMER *>,equal_to<_TP_TIMER *>,allocator<pair<_TP_TIMER * const,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> > > > >
	{
		~unordered_map<_TP_TIMER *,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> >,hash<_TP_TIMER *>,equal_to<_TP_TIMER *>,allocator<pair<_TP_TIMER * const,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> > > > >();
	};

	struct unordered_map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,hash<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,equal_to<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >
	{
		unordered_map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,hash<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,equal_to<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >();
	};

	struct unordered_map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,int,hash<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,equal_to<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > >
	{
		unordered_map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,int,hash<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,equal_to<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > >();
		~unordered_map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,int,hash<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,equal_to<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > >();
	};

	struct unordered_map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,unsigned int,hash<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,equal_to<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned int> > >
	{
		~unordered_map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,unsigned int,hash<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,equal_to<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned int> > >();
	};

	struct unordered_map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,unsigned long,hash<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,equal_to<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > >
	{
		unordered_map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,unsigned long,hash<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,equal_to<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > >(initializer_list<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> >);
		~unordered_map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,unsigned long,hash<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,equal_to<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > >();
	};

	struct unordered_map<long,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext,hash<long>,equal_to<long>,allocator<pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext> > >
	{
		~unordered_map<long,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext,hash<long>,equal_to<long>,allocator<pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext> > >();
	};

	struct unordered_map<unsigned __int64,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> >,hash<unsigned __int64>,equal_to<unsigned __int64>,allocator<pair<unsigned __int64 const ,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > > >
	{
		~unordered_map<unsigned __int64,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> >,hash<unsigned __int64>,equal_to<unsigned __int64>,allocator<pair<unsigned __int64 const ,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > > >();
	};

	struct unordered_map<unsigned long,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,hash<unsigned long>,equal_to<unsigned long>,allocator<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >
	{
		unordered_map<unsigned long,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,hash<unsigned long>,equal_to<unsigned long>,allocator<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >(initializer_list<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >);
		~unordered_map<unsigned long,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,hash<unsigned long>,equal_to<unsigned long>,allocator<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >();
	};

	struct unordered_map<unsigned long,shared_ptr<TileSession>,hash<unsigned long>,equal_to<unsigned long>,allocator<pair<unsigned long const ,shared_ptr<TileSession> > > >
	{
		~unordered_map<unsigned long,shared_ptr<TileSession>,hash<unsigned long>,equal_to<unsigned long>,allocator<pair<unsigned long const ,shared_ptr<TileSession> > > >();
	};

	struct unordered_set<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,hash<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,equal_to<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
		unordered_set<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,hash<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,equal_to<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >();
		~unordered_set<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,hash<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,equal_to<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >();
	};

	class vector<Microsoft::WRL::ComPtr<HandlerAsset>,allocator<Microsoft::WRL::ComPtr<HandlerAsset> > >
	{
		void _Change_array(Microsoft::WRL::ComPtr<HandlerAsset> * const,unsigned __int64,unsigned __int64);
	public:
		void emplace_back<Microsoft::WRL::ComPtr<HandlerAsset> &>(Microsoft::WRL::ComPtr<HandlerAsset> &);
	};

	class vector<Microsoft::WRL::ComPtr<INotificationHandler>,allocator<Microsoft::WRL::ComPtr<INotificationHandler> > >
	{
		void _Change_array(Microsoft::WRL::ComPtr<INotificationHandler> * const,unsigned __int64,unsigned __int64);
	};

	struct vector<Microsoft::WRL::ComPtr<IWpnNotification>,allocator<Microsoft::WRL::ComPtr<IWpnNotification> > >
	{
		void emplace_back<Microsoft::WRL::ComPtr<IWpnNotification> const &>(Microsoft::WRL::ComPtr<IWpnNotification> const &);
		~vector<Microsoft::WRL::ComPtr<IWpnNotification>,allocator<Microsoft::WRL::ComPtr<IWpnNotification> > >();
	};

	class vector<Microsoft::Windows::Internal::PushNotifications::Callback::ScopedCallbackHandle,allocator<Microsoft::Windows::Internal::PushNotifications::Callback::ScopedCallbackHandle> >
	{
		void _Change_array(Microsoft::Windows::Internal::PushNotifications::Callback::ScopedCallbackHandle * const,unsigned __int64,unsigned __int64);
		void _Reallocate_exactly(unsigned __int64);
		void _Tidy();
	public:
		~vector<Microsoft::Windows::Internal::PushNotifications::Callback::ScopedCallbackHandle,allocator<Microsoft::Windows::Internal::PushNotifications::Callback::ScopedCallbackHandle> >();
	};

	class vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> >
	{
		void _Change_array(Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal * const,unsigned __int64,unsigned __int64);
	public:
		~vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> >();
	};

	class vector<_List_unchecked_const_iterator<_List_val<_List_simple_types<TileSession::SubscriptionEntry> >,_Iterator_base0>,_Wrap_alloc<allocator<_List_unchecked_const_iterator<_List_val<_List_simple_types<TileSession::SubscriptionEntry> >,_Iterator_base0> > > >
	{
		bool _Buy(unsigned __int64);
		void _Reallocate_exactly(unsigned __int64);
	public:
		void assign(unsigned __int64,_List_unchecked_const_iterator<_List_val<_List_simple_types<TileSession::SubscriptionEntry> >,_Iterator_base0> const &);
		~vector<_List_unchecked_const_iterator<_List_val<_List_simple_types<TileSession::SubscriptionEntry> >,_Iterator_base0>,_Wrap_alloc<allocator<_List_unchecked_const_iterator<_List_val<_List_simple_types<TileSession::SubscriptionEntry> >,_Iterator_base0> > > >();
	};

	class vector<_List_unchecked_const_iterator<_List_val<_List_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,_Iterator_base0>,_Wrap_alloc<allocator<_List_unchecked_const_iterator<_List_val<_List_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,_Iterator_base0> > > >
	{
		bool _Buy(unsigned __int64);
		void _Reallocate_exactly(unsigned __int64);
	public:
		void assign(unsigned __int64,_List_unchecked_const_iterator<_List_val<_List_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,_Iterator_base0> const &);
		~vector<_List_unchecked_const_iterator<_List_val<_List_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,_Iterator_base0>,_Wrap_alloc<allocator<_List_unchecked_const_iterator<_List_val<_List_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,_Iterator_base0> > > >();
	};

	class vector<_List_unchecked_iterator<_List_val<_List_simple_types<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> > > >,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> > > > > > >
	{
		void _Reallocate_exactly(unsigned __int64);
		void _Tidy();
	public:
		void assign(unsigned __int64,_List_unchecked_iterator<_List_val<_List_simple_types<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> > > > const &);
		~vector<_List_unchecked_iterator<_List_val<_List_simple_types<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> > > >,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> > > > > > >();
	};

	class vector<_List_unchecked_iterator<_List_val<_List_simple_types<pair<_TP_TIMER * const,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> > > > > >,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<_TP_TIMER * const,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> > > > > > > > >
	{
		bool _Buy(unsigned __int64);
		void _Reallocate_exactly(unsigned __int64);
	public:
		void assign(unsigned __int64,_List_unchecked_iterator<_List_val<_List_simple_types<pair<_TP_TIMER * const,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> > > > > > const &);
		~vector<_List_unchecked_iterator<_List_val<_List_simple_types<pair<_TP_TIMER * const,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> > > > > >,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<_TP_TIMER * const,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> > > > > > > > >();
	};

	class vector<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<char,char_traits<char>,allocator<char> > const ,StatementCacheEntry> > > >,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<char,char_traits<char>,allocator<char> > const ,StatementCacheEntry> > > > > > >
	{
		bool _Buy(unsigned __int64);
		void _Reallocate_exactly(unsigned __int64);
	public:
		void assign(unsigned __int64,_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<char,char_traits<char>,allocator<char> > const ,StatementCacheEntry> > > > const &);
		~vector<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<char,char_traits<char>,allocator<char> > const ,StatementCacheEntry> > > >,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<char,char_traits<char>,allocator<char> > const ,StatementCacheEntry> > > > > > >();
	};

	class vector<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > > > >
	{
		bool _Buy(unsigned __int64);
		void _Reallocate_exactly(unsigned __int64);
	public:
		void assign(unsigned __int64,_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > const &);
		~vector<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > > > >();
	};

	class vector<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > > >,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > > > > > >
	{
		bool _Buy(unsigned __int64);
		void _Reallocate_exactly(unsigned __int64);
	public:
		void assign(unsigned __int64,_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > > > const &);
		~vector<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > > >,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > > > > > >();
	};

	class vector<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > > > > >,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > > > > > > > >
	{
		bool _Buy(unsigned __int64);
		void _Reallocate_exactly(unsigned __int64);
	public:
		void assign(unsigned __int64,_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > > > > > const &);
		~vector<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > > > > >,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > > > > > > > >();
	};

	class vector<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned int> > > >,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned int> > > > > > >
	{
		bool _Buy(unsigned __int64);
		void _Reallocate_exactly(unsigned __int64);
	public:
		void assign(unsigned __int64,_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned int> > > > const &);
		~vector<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned int> > > >,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned int> > > > > > >();
	};

	class vector<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > > >,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > > > > > >
	{
		bool _Buy(unsigned __int64);
		void _Reallocate_exactly(unsigned __int64);
	public:
		void assign(unsigned __int64,_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > > > const &);
		~vector<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > > >,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > > > > > >();
	};

	class vector<_List_unchecked_iterator<_List_val<_List_simple_types<pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext> > > >,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext> > > > > > >
	{
		bool _Buy(unsigned __int64);
		void _Reallocate_exactly(unsigned __int64);
	public:
		void assign(unsigned __int64,_List_unchecked_iterator<_List_val<_List_simple_types<pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext> > > > const &);
		~vector<_List_unchecked_iterator<_List_val<_List_simple_types<pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext> > > >,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext> > > > > > >();
	};

	class vector<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned __int64 const ,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > > > >,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned __int64 const ,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > > > > > > >
	{
		bool _Buy(unsigned __int64);
		void _Reallocate_exactly(unsigned __int64);
	public:
		void assign(unsigned __int64,_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned __int64 const ,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > > > > const &);
		~vector<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned __int64 const ,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > > > >,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned __int64 const ,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > > > > > > >();
	};

	class vector<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,ChannelRequests::ChannelRequestInternal> > > >,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,ChannelRequests::ChannelRequestInternal> > > > > > >
	{
		bool _Buy(unsigned __int64);
		void _Reallocate_exactly(unsigned __int64);
	public:
		void assign(unsigned __int64,_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,ChannelRequests::ChannelRequestInternal> > > > const &);
		~vector<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,ChannelRequests::ChannelRequestInternal> > > >,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,ChannelRequests::ChannelRequestInternal> > > > > > >();
	};

	class vector<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > > > >
	{
		bool _Buy(unsigned __int64);
		void _Reallocate_exactly(unsigned __int64);
	public:
		void assign(unsigned __int64,_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > const &);
		~vector<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > > > >();
	};

	class vector<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<TileSession> > > > >,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<TileSession> > > > > > > >
	{
		bool _Buy(unsigned __int64);
		void _Reallocate_exactly(unsigned __int64);
	public:
		void assign(unsigned __int64,_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<TileSession> > > > > const &);
		~vector<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<TileSession> > > > >,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<TileSession> > > > > > > >();
	};

	class vector<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<ToastSession> > > > >,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<ToastSession> > > > > > > >
	{
		bool _Buy(unsigned __int64);
		void _Reallocate_exactly(unsigned __int64);
	public:
		void assign(unsigned __int64,_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<ToastSession> > > > > const &);
		~vector<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<ToastSession> > > > >,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<ToastSession> > > > > > > >();
	};

	class vector<_Loop_vals_t,allocator<_Loop_vals_t> >
	{
		void _Change_array(_Loop_vals_t * const,unsigned __int64,unsigned __int64);
	public:
		~vector<_Loop_vals_t,allocator<_Loop_vals_t> >();
	};

	class vector<_Tgt_state_t<char const *>::_Grp_t,allocator<_Tgt_state_t<char const *>::_Grp_t> >
	{
		bool _Buy(unsigned __int64);
		unsigned __int64 _Calculate_growth(unsigned __int64);
		void _Assign_range<_Tgt_state_t<char const *>::_Grp_t *>(_Tgt_state_t<char const *>::_Grp_t *,_Tgt_state_t<char const *>::_Grp_t *,forward_iterator_tag);
		void _Change_array(_Tgt_state_t<char const *>::_Grp_t * const,unsigned __int64,unsigned __int64);
		void _Tidy();
	public:
		vector<_Tgt_state_t<char const *>::_Grp_t,allocator<_Tgt_state_t<char const *>::_Grp_t> >(vector<_Tgt_state_t<char const *>::_Grp_t,allocator<_Tgt_state_t<char const *>::_Grp_t> > const &);
	};

	class vector<_WPN_NOTIFICATION_METADATA_PAIR,allocator<_WPN_NOTIFICATION_METADATA_PAIR> >
	{
		void _Change_array(_WPN_NOTIFICATION_METADATA_PAIR * const,unsigned __int64,unsigned __int64);
		void _Reallocate_exactly(unsigned __int64);
	public:
		void reserve(unsigned __int64);
		~vector<_WPN_NOTIFICATION_METADATA_PAIR,allocator<_WPN_NOTIFICATION_METADATA_PAIR> >();
	};

	class vector<_WPN_TOAST_NOTIFICATION,allocator<_WPN_TOAST_NOTIFICATION> >
	{
		void _Change_array(_WPN_TOAST_NOTIFICATION * const,unsigned __int64,unsigned __int64);
		void _Tidy();
	public:
		~vector<_WPN_TOAST_NOTIFICATION,allocator<_WPN_TOAST_NOTIFICATION> >();
	};

	class vector<__MIDL___MIDL_itf_wpnplatform_0000_0010_0003,allocator<__MIDL___MIDL_itf_wpnplatform_0000_0010_0003> >
	{
		unsigned __int64 _Calculate_growth(unsigned __int64);
		void _Change_array(__MIDL___MIDL_itf_wpnplatform_0000_0010_0003 * const,unsigned __int64,unsigned __int64);
	public:
		~vector<__MIDL___MIDL_itf_wpnplatform_0000_0010_0003,allocator<__MIDL___MIDL_itf_wpnplatform_0000_0010_0003> >();
	};

	class vector<basic_string<char,char_traits<char>,allocator<char> >,allocator<basic_string<char,char_traits<char>,allocator<char> > > >
	{
		void _Range_construct_or_tidy<basic_string<char,char_traits<char>,allocator<char> > const *>(basic_string<char,char_traits<char>,allocator<char> > const *,basic_string<char,char_traits<char>,allocator<char> > const *,forward_iterator_tag);
		void _Tidy();
	public:
		vector<basic_string<char,char_traits<char>,allocator<char> >,allocator<basic_string<char,char_traits<char>,allocator<char> > > >(initializer_list<basic_string<char,char_traits<char>,allocator<char> > >,allocator<basic_string<char,char_traits<char>,allocator<char> > > const &);
		~vector<basic_string<char,char_traits<char>,allocator<char> >,allocator<basic_string<char,char_traits<char>,allocator<char> > > >();
	};

	class vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
		unsigned __int64 _Calculate_growth(unsigned __int64);
		void _Change_array(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > * const,unsigned __int64,unsigned __int64);
		void _Destroy(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *);
	public:
		void emplace_back<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > &>(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > &);
		void emplace_back<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &>(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		void emplace_back<unsigned short const * &>(unsigned short const * &);
		~vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >();
	};

	struct vector<bool,allocator<bool> >
	{
		_Vb_iterator<_Wrap_alloc<allocator<unsigned int> > > _Insert_n(_Vb_const_iterator<_Wrap_alloc<allocator<unsigned int> > >,unsigned __int64,bool const &);
		_Vb_iterator<_Wrap_alloc<allocator<unsigned int> > > _Make_iter(_Vb_const_iterator<_Wrap_alloc<allocator<unsigned int> > >);
		_Vb_iterator<_Wrap_alloc<allocator<unsigned int> > > end();
		_Vb_iterator<_Wrap_alloc<allocator<unsigned int> > > erase(_Vb_const_iterator<_Wrap_alloc<allocator<unsigned int> > >,_Vb_const_iterator<_Wrap_alloc<allocator<unsigned int> > >);
		unsigned __int64 _Insert_x(_Vb_const_iterator<_Wrap_alloc<allocator<unsigned int> > >,unsigned __int64);
		vector<bool,allocator<bool> > & operator=(vector<bool,allocator<bool> > const &);
		void _Trim(unsigned __int64);
		void resize(unsigned __int64,bool);
		~vector<bool,allocator<bool> >();
	};

	class vector<char,allocator<char> >
	{
		bool _Buy(unsigned __int64);
		unsigned __int64 _Calculate_growth(unsigned __int64);
		void _Change_array(char * const,unsigned __int64,unsigned __int64);
		void _Range_construct_or_tidy<char *>(char *,char *,forward_iterator_tag);
		void _Range_construct_or_tidy<char const *>(char const *,char const *,forward_iterator_tag);
		void _Reallocate_exactly(unsigned __int64);
		void _Tidy();
	public:
		~vector<char,allocator<char> >();
	};

	class vector<shared_ptr<TileSession>,allocator<shared_ptr<TileSession> > >
	{
		void _Tidy();
	public:
		void emplace_back<shared_ptr<TileSession> &>(shared_ptr<TileSession> &);
		~vector<shared_ptr<TileSession>,allocator<shared_ptr<TileSession> > >();
	};

	class vector<shared_ptr<ToastSession>,allocator<shared_ptr<ToastSession> > >
	{
		void _Change_array(shared_ptr<ToastSession> * const,unsigned __int64,unsigned __int64);
	public:
		void emplace_back<shared_ptr<ToastSession> &>(shared_ptr<ToastSession> &);
		~vector<shared_ptr<ToastSession>,allocator<shared_ptr<ToastSession> > >();
	};

	class vector<sub_match<char const *>,allocator<sub_match<char const *> > >
	{
		void _Change_array(sub_match<char const *> * const,unsigned __int64,unsigned __int64);
	};

	class vector<unique_ptr<ClearToastWork::SmartToastRequestControl,default_delete<ClearToastWork::SmartToastRequestControl> >,allocator<unique_ptr<ClearToastWork::SmartToastRequestControl,default_delete<ClearToastWork::SmartToastRequestControl> > > >
	{
		void _Change_array(unique_ptr<ClearToastWork::SmartToastRequestControl,default_delete<ClearToastWork::SmartToastRequestControl> > * const,unsigned __int64,unsigned __int64);
	};

	class vector<unique_ptr<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext,default_delete<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext> >,allocator<unique_ptr<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext,default_delete<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext> > > >
	{
		void _Change_array(unique_ptr<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext,default_delete<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext> > * const,unsigned __int64,unsigned __int64);
	public:
		_Vector_iterator<_Vector_val<_Simple_types<unique_ptr<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext,default_delete<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext> > > > > erase(_Vector_const_iterator<_Vector_val<_Simple_types<unique_ptr<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext,default_delete<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext> > > > >);
		_Vector_iterator<_Vector_val<_Simple_types<unique_ptr<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext,default_delete<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext> > > > > erase(_Vector_const_iterator<_Vector_val<_Simple_types<unique_ptr<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext,default_delete<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext> > > > >,_Vector_const_iterator<_Vector_val<_Simple_types<unique_ptr<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext,default_delete<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext> > > > >);
		~vector<unique_ptr<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext,default_delete<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext> >,allocator<unique_ptr<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext,default_delete<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext> > > >();
	};

	class vector<unique_ptr<vector<_WPN_NOTIFICATION_METADATA_PAIR,allocator<_WPN_NOTIFICATION_METADATA_PAIR> >,default_delete<vector<_WPN_NOTIFICATION_METADATA_PAIR,allocator<_WPN_NOTIFICATION_METADATA_PAIR> > > >,allocator<unique_ptr<vector<_WPN_NOTIFICATION_METADATA_PAIR,allocator<_WPN_NOTIFICATION_METADATA_PAIR> >,default_delete<vector<_WPN_NOTIFICATION_METADATA_PAIR,allocator<_WPN_NOTIFICATION_METADATA_PAIR> > > > > >
	{
		void _Change_array(unique_ptr<vector<_WPN_NOTIFICATION_METADATA_PAIR,allocator<_WPN_NOTIFICATION_METADATA_PAIR> >,default_delete<vector<_WPN_NOTIFICATION_METADATA_PAIR,allocator<_WPN_NOTIFICATION_METADATA_PAIR> > > > * const,unsigned __int64,unsigned __int64);
	public:
		~vector<unique_ptr<vector<_WPN_NOTIFICATION_METADATA_PAIR,allocator<_WPN_NOTIFICATION_METADATA_PAIR> >,default_delete<vector<_WPN_NOTIFICATION_METADATA_PAIR,allocator<_WPN_NOTIFICATION_METADATA_PAIR> > > >,allocator<unique_ptr<vector<_WPN_NOTIFICATION_METADATA_PAIR,allocator<_WPN_NOTIFICATION_METADATA_PAIR> >,default_delete<vector<_WPN_NOTIFICATION_METADATA_PAIR,allocator<_WPN_NOTIFICATION_METADATA_PAIR> > > > > >();
	};

	class vector<unsigned char,allocator<unsigned char> >
	{
		bool _Buy(unsigned __int64);
		void _Change_array(unsigned char * const,unsigned __int64,unsigned __int64);
		void _Range_construct_or_tidy<unsigned char *>(unsigned char *,unsigned char *,forward_iterator_tag);
		void _Tidy();
	public:
		vector<unsigned char,allocator<unsigned char> >(unsigned __int64,allocator<unsigned char> const &);
		~vector<unsigned char,allocator<unsigned char> >();
	};

	class vector<unsigned int,allocator<bool> >
	{
		bool _Buy(unsigned __int64);
		unsigned __int64 _Calculate_growth(unsigned __int64);
		void _Assign_range<unsigned int *>(unsigned int *,unsigned int *,forward_iterator_tag);
		void _Change_array(unsigned int * const,unsigned __int64,unsigned __int64);
		void _Tidy();
	public:
		vector<unsigned int,allocator<bool> >(unsigned __int64,unsigned int const &,allocator<bool> const &);
		vector<unsigned int,allocator<bool> >(vector<unsigned int,allocator<bool> > const &);
	};

	class vector<unsigned long,allocator<unsigned long> >
	{
		void _Change_array(unsigned long * const,unsigned __int64,unsigned __int64);
	public:
		void emplace_back<unsigned long const &>(unsigned long const &);
		~vector<unsigned long,allocator<unsigned long> >();
	};

	class vector<unsigned short const *,allocator<unsigned short const *> >
	{
		void _Change_array(unsigned short const * * const,unsigned __int64,unsigned __int64);
		void _Reallocate_exactly(unsigned __int64);
	public:
		~vector<unsigned short const *,allocator<unsigned short const *> >();
	};

	class vector<unsigned short,allocator<unsigned short> >
	{
		void _Change_array(unsigned short * const,unsigned __int64,unsigned __int64);
		void _Tidy();
	public:
		vector<unsigned short,allocator<unsigned short> >(unsigned __int64,allocator<unsigned short> const &);
		~vector<unsigned short,allocator<unsigned short> >();
	};

	Microsoft::WRL::ComPtr<HandlerAsset> * _Uninitialized_move_al_unchecked<Microsoft::WRL::ComPtr<HandlerAsset> *,Microsoft::WRL::ComPtr<HandlerAsset> *,allocator<Microsoft::WRL::ComPtr<HandlerAsset> > >(Microsoft::WRL::ComPtr<HandlerAsset> *,Microsoft::WRL::ComPtr<HandlerAsset> *,Microsoft::WRL::ComPtr<HandlerAsset> *,std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<HandlerAsset> > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	Microsoft::WRL::ComPtr<INotificationHandler> * _Uninitialized_move_al_unchecked<Microsoft::WRL::ComPtr<INotificationHandler> *,Microsoft::WRL::ComPtr<INotificationHandler> *,allocator<Microsoft::WRL::ComPtr<INotificationHandler> > >(Microsoft::WRL::ComPtr<INotificationHandler> *,Microsoft::WRL::ComPtr<INotificationHandler> *,Microsoft::WRL::ComPtr<INotificationHandler> *,std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<INotificationHandler> > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	Microsoft::WRL::ComPtr<IWpnNotification> * _Uninitialized_move_al_unchecked<Microsoft::WRL::ComPtr<IWpnNotification> *,Microsoft::WRL::ComPtr<IWpnNotification> *,allocator<Microsoft::WRL::ComPtr<IWpnNotification> > >(Microsoft::WRL::ComPtr<IWpnNotification> *,Microsoft::WRL::ComPtr<IWpnNotification> *,Microsoft::WRL::ComPtr<IWpnNotification> *,std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<IWpnNotification> > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	Microsoft::Windows::Internal::PushNotifications::Callback::ScopedCallbackHandle * _Uninitialized_move_al_unchecked<Microsoft::Windows::Internal::PushNotifications::Callback::ScopedCallbackHandle *,Microsoft::Windows::Internal::PushNotifications::Callback::ScopedCallbackHandle *,allocator<Microsoft::Windows::Internal::PushNotifications::Callback::ScopedCallbackHandle> >(Microsoft::Windows::Internal::PushNotifications::Callback::ScopedCallbackHandle *,Microsoft::Windows::Internal::PushNotifications::Callback::ScopedCallbackHandle *,Microsoft::Windows::Internal::PushNotifications::Callback::ScopedCallbackHandle *,std::_Wrap_alloc<std::allocator<Microsoft::Windows::Internal::PushNotifications::Callback::ScopedCallbackHandle> > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal * _Uninitialized_move_al_unchecked<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal *,Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal *,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> >(Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal *,Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal *,Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal *,std::_Wrap_alloc<std::allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	__MIDL___MIDL_itf_wpnplatform_0000_0010_0003 * _Uninitialized_value_construct_n1<__MIDL___MIDL_itf_wpnplatform_0000_0010_0003 *,unsigned __int64,allocator<__MIDL___MIDL_itf_wpnplatform_0000_0010_0003> >(__MIDL___MIDL_itf_wpnplatform_0000_0010_0003 *,unsigned __int64,std::_Wrap_alloc<std::allocator<__MIDL___MIDL_itf_wpnplatform_0000_0010_0003> > &,std::integral_constant<bool,0>);
	bool _Lookup_range<char>(unsigned int,std::_Buf<char> const *);
	bool _Regex_search1<char const *,allocator<sub_match<char const *> >,char,regex_traits<char>,char const *>(char const *,char const *,std::match_results<char const *,std::allocator<std::sub_match<char const *> > > *,std::basic_regex<char,std::regex_traits<char> > const &,std::regex_constants::match_flag_type,char const *);
	bool _Traits_equal<char_traits<unsigned short> >(unsigned short const * const,unsigned __int64,unsigned short const * const,unsigned __int64);
	char const * _Cmp_chrange<char const *,char const *,_Cmp_collate<regex_traits<char> > >(char const *,char const *,char const *,char const *,std::_Cmp_collate<std::regex_traits<char> >);
	char const * _Cmp_chrange<char const *,char const *,_Cmp_icase<regex_traits<char> > >(char const *,char const *,char const *,char const *,std::_Cmp_icase<std::regex_traits<char> >);
	char const * _Compare<char const *,char const *,regex_traits<char> >(char const *,char const *,char const *,char const *,std::regex_traits<char> const &,std::regex_constants::syntax_option_type);
	char const * _Lookup_coll<char const *,char>(char const *,char const *,std::_Sequence<char> const *);
	int _Immortalize_impl<_Generic_error_category>(void *,void *,void * *);
	int _Traits_compare<char_traits<unsigned short> >(unsigned short const * const,unsigned __int64,unsigned short const * const,unsigned __int64);
	nothrow_t const std::nothrow;
	std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<TileSession::SubscriptionEntry> >,std::_Iterator_base0> * _Uninit_alloc_fill_n1<_List_unchecked_const_iterator<_List_val<_List_simple_types<TileSession::SubscriptionEntry> >,_Iterator_base0> *,unsigned __int64,_Wrap_alloc<allocator<_List_unchecked_const_iterator<_List_val<_List_simple_types<TileSession::SubscriptionEntry> >,_Iterator_base0> > > >(std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<TileSession::SubscriptionEntry> >,std::_Iterator_base0> *,unsigned __int64,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<TileSession::SubscriptionEntry> >,std::_Iterator_base0> const &,std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<TileSession::SubscriptionEntry> >,std::_Iterator_base0> > > > &,std::integral_constant<bool,0>);
	std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<TileSession::SubscriptionEntry> >,std::_Iterator_base0> * _Uninitialized_move_al_unchecked<_List_unchecked_const_iterator<_List_val<_List_simple_types<TileSession::SubscriptionEntry> >,_Iterator_base0> *,_List_unchecked_const_iterator<_List_val<_List_simple_types<TileSession::SubscriptionEntry> >,_Iterator_base0> *,_Wrap_alloc<allocator<_List_unchecked_const_iterator<_List_val<_List_simple_types<TileSession::SubscriptionEntry> >,_Iterator_base0> > > >(std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<TileSession::SubscriptionEntry> >,std::_Iterator_base0> *,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<TileSession::SubscriptionEntry> >,std::_Iterator_base0> *,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<TileSession::SubscriptionEntry> >,std::_Iterator_base0> *,std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<TileSession::SubscriptionEntry> >,std::_Iterator_base0> > > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > >,std::_Iterator_base0> * _Uninit_alloc_fill_n1<_List_unchecked_const_iterator<_List_val<_List_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,_Iterator_base0> *,unsigned __int64,_Wrap_alloc<allocator<_List_unchecked_const_iterator<_List_val<_List_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,_Iterator_base0> > > >(std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > >,std::_Iterator_base0> *,unsigned __int64,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > >,std::_Iterator_base0> const &,std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > >,std::_Iterator_base0> > > > &,std::integral_constant<bool,0>);
	std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > >,std::_Iterator_base0> * _Uninitialized_move_al_unchecked<_List_unchecked_const_iterator<_List_val<_List_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,_Iterator_base0> *,_List_unchecked_const_iterator<_List_val<_List_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,_Iterator_base0> *,_Wrap_alloc<allocator<_List_unchecked_const_iterator<_List_val<_List_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,_Iterator_base0> > > >(std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > >,std::_Iterator_base0> *,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > >,std::_Iterator_base0> *,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > >,std::_Iterator_base0> *,std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > >,std::_Iterator_base0> > > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> > > > * _Uninit_alloc_fill_n1<_List_unchecked_iterator<_List_val<_List_simple_types<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> > > > *,unsigned __int64,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> > > > > > >(std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> > > > *,unsigned __int64,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> > > > const &,std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> > > > > > > &,std::integral_constant<bool,0>);
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> > > > * _Uninitialized_move_al_unchecked<_List_unchecked_iterator<_List_val<_List_simple_types<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> > > > *,_List_unchecked_iterator<_List_val<_List_simple_types<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> > > > *,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> > > > > > >(std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> > > > *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> > > > *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> > > > *,std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<WpnTelemetryAggregator::HandlerWithType const ,unsigned int> > > > > > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<_TP_TIMER * const,std::unique_ptr<ThrottledWorkItem,std::default_delete<ThrottledWorkItem> > > > > > * _Uninit_alloc_fill_n1<_List_unchecked_iterator<_List_val<_List_simple_types<pair<_TP_TIMER * const,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> > > > > > *,unsigned __int64,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<_TP_TIMER * const,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> > > > > > > > >(std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<_TP_TIMER * const,std::unique_ptr<ThrottledWorkItem,std::default_delete<ThrottledWorkItem> > > > > > *,unsigned __int64,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<_TP_TIMER * const,std::unique_ptr<ThrottledWorkItem,std::default_delete<ThrottledWorkItem> > > > > > const &,std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<_TP_TIMER * const,std::unique_ptr<ThrottledWorkItem,std::default_delete<ThrottledWorkItem> > > > > > > > > &,std::integral_constant<bool,0>);
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<_TP_TIMER * const,std::unique_ptr<ThrottledWorkItem,std::default_delete<ThrottledWorkItem> > > > > > * _Uninitialized_move_al_unchecked<_List_unchecked_iterator<_List_val<_List_simple_types<pair<_TP_TIMER * const,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> > > > > > *,_List_unchecked_iterator<_List_val<_List_simple_types<pair<_TP_TIMER * const,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> > > > > > *,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<_TP_TIMER * const,unique_ptr<ThrottledWorkItem,default_delete<ThrottledWorkItem> > > > > > > > >(std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<_TP_TIMER * const,std::unique_ptr<ThrottledWorkItem,std::default_delete<ThrottledWorkItem> > > > > > *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<_TP_TIMER * const,std::unique_ptr<ThrottledWorkItem,std::default_delete<ThrottledWorkItem> > > > > > *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<_TP_TIMER * const,std::unique_ptr<ThrottledWorkItem,std::default_delete<ThrottledWorkItem> > > > > > *,std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<_TP_TIMER * const,std::unique_ptr<ThrottledWorkItem,std::default_delete<ThrottledWorkItem> > > > > > > > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext> > > > * _Uninit_alloc_fill_n1<_List_unchecked_iterator<_List_val<_List_simple_types<pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext> > > > *,unsigned __int64,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext> > > > > > >(std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext> > > > *,unsigned __int64,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext> > > > const &,std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext> > > > > > > &,std::integral_constant<bool,0>);
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext> > > > * _Uninitialized_move_al_unchecked<_List_unchecked_iterator<_List_val<_List_simple_types<pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext> > > > *,_List_unchecked_iterator<_List_val<_List_simple_types<pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext> > > > *,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext> > > > > > >(std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext> > > > *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext> > > > *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext> > > > *,std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<long const ,Microsoft::Windows::Internal::PushNotifications::ChannelRequestContext> > > > > > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StatementCacheEntry> > > > * _Uninit_alloc_fill_n1<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<char,char_traits<char>,allocator<char> > const ,StatementCacheEntry> > > > *,unsigned __int64,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<char,char_traits<char>,allocator<char> > const ,StatementCacheEntry> > > > > > >(std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StatementCacheEntry> > > > *,unsigned __int64,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StatementCacheEntry> > > > const &,std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StatementCacheEntry> > > > > > > &,std::integral_constant<bool,0>);
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StatementCacheEntry> > > > * _Uninitialized_move_al_unchecked<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<char,char_traits<char>,allocator<char> > const ,StatementCacheEntry> > > > *,_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<char,char_traits<char>,allocator<char> > const ,StatementCacheEntry> > > > *,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<char,char_traits<char>,allocator<char> > const ,StatementCacheEntry> > > > > > >(std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StatementCacheEntry> > > > *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StatementCacheEntry> > > > *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StatementCacheEntry> > > > *,std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char> > const ,StatementCacheEntry> > > > > > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,int> > > > * _Uninit_alloc_fill_n1<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > > > *,unsigned __int64,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > > > > > >(std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,int> > > > *,unsigned __int64,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,int> > > > const &,std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,int> > > > > > > &,std::integral_constant<bool,0>);
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,int> > > > * _Uninitialized_move_al_unchecked<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > > > *,_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > > > *,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > > > > > >(std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,int> > > > *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,int> > > > *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,int> > > > *,std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,int> > > > > > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > > > * _Uninit_alloc_fill_n1<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > *,unsigned __int64,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > > > >(std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > > > *,unsigned __int64,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > > > const &,std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > > > > > > &,std::integral_constant<bool,0>);
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > > > * _Uninitialized_move_al_unchecked<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > *,_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > *,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > > > >(std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > > > *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > > > *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > > > *,std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > > > > > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,std::unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,std::default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > > > > > * _Uninit_alloc_fill_n1<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > > > > > *,unsigned __int64,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > > > > > > > >(std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,std::unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,std::default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > > > > > *,unsigned __int64,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,std::unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,std::default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > > > > > const &,std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,std::unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,std::default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > > > > > > > > &,std::integral_constant<bool,0>);
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,std::unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,std::default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > > > > > * _Uninitialized_move_al_unchecked<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > > > > > *,_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > > > > > *,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > > > > > > > >(std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,std::unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,std::default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > > > > > *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,std::unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,std::default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > > > > > *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,std::unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,std::default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > > > > > *,std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,std::unique_ptr<ScheduledTileManager::_LATCHED_TILE_LIST,std::default_delete<ScheduledTileManager::_LATCHED_TILE_LIST> > > > > > > > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,unsigned int> > > > * _Uninit_alloc_fill_n1<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned int> > > > *,unsigned __int64,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned int> > > > > > >(std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,unsigned int> > > > *,unsigned __int64,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,unsigned int> > > > const &,std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,unsigned int> > > > > > > &,std::integral_constant<bool,0>);
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,unsigned int> > > > * _Uninitialized_move_al_unchecked<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned int> > > > *,_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned int> > > > *,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned int> > > > > > >(std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,unsigned int> > > > *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,unsigned int> > > > *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,unsigned int> > > > *,std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,unsigned int> > > > > > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,unsigned long> > > > * _Uninit_alloc_fill_n1<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > > > *,unsigned __int64,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > > > > > >(std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,unsigned long> > > > *,unsigned __int64,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,unsigned long> > > > const &,std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,unsigned long> > > > > > > &,std::integral_constant<bool,0>);
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,unsigned long> > > > * _Uninitialized_move_al_unchecked<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > > > *,_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > > > *,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned long> > > > > > >(std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,unsigned long> > > > *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,unsigned long> > > > *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,unsigned long> > > > *,std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,unsigned long> > > > > > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const ,std::vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,std::allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > > > > * _Uninit_alloc_fill_n1<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned __int64 const ,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > > > > *,unsigned __int64,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned __int64 const ,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > > > > > > >(std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const ,std::vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,std::allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > > > > *,unsigned __int64,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const ,std::vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,std::allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > > > > const &,std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const ,std::vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,std::allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > > > > > > > &,std::integral_constant<bool,0>);
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const ,std::vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,std::allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > > > > * _Uninitialized_move_al_unchecked<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned __int64 const ,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > > > > *,_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned __int64 const ,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > > > > *,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned __int64 const ,vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > > > > > > >(std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const ,std::vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,std::allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > > > > *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const ,std::vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,std::allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > > > > *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const ,std::vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,std::allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > > > > *,std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const ,std::vector<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal,std::allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > > > > > > > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const ,ChannelRequests::ChannelRequestInternal> > > > * _Uninit_alloc_fill_n1<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,ChannelRequests::ChannelRequestInternal> > > > *,unsigned __int64,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,ChannelRequests::ChannelRequestInternal> > > > > > >(std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const ,ChannelRequests::ChannelRequestInternal> > > > *,unsigned __int64,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const ,ChannelRequests::ChannelRequestInternal> > > > const &,std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const ,ChannelRequests::ChannelRequestInternal> > > > > > > &,std::integral_constant<bool,0>);
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const ,ChannelRequests::ChannelRequestInternal> > > > * _Uninitialized_move_al_unchecked<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,ChannelRequests::ChannelRequestInternal> > > > *,_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,ChannelRequests::ChannelRequestInternal> > > > *,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,ChannelRequests::ChannelRequestInternal> > > > > > >(std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const ,ChannelRequests::ChannelRequestInternal> > > > *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const ,ChannelRequests::ChannelRequestInternal> > > > *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const ,ChannelRequests::ChannelRequestInternal> > > > *,std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const ,ChannelRequests::ChannelRequestInternal> > > > > > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const ,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > > > * _Uninit_alloc_fill_n1<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > *,unsigned __int64,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > > > >(std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const ,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > > > *,unsigned __int64,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const ,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > > > const &,std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const ,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > > > > > > &,std::integral_constant<bool,0>);
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const ,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > > > * _Uninitialized_move_al_unchecked<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > *,_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > *,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > > > >(std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const ,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > > > *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const ,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > > > *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const ,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > > > *,std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const ,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > > > > > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const ,std::shared_ptr<TileSession> > > > > * _Uninit_alloc_fill_n1<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<TileSession> > > > > *,unsigned __int64,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<TileSession> > > > > > > >(std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const ,std::shared_ptr<TileSession> > > > > *,unsigned __int64,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const ,std::shared_ptr<TileSession> > > > > const &,std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const ,std::shared_ptr<TileSession> > > > > > > > &,std::integral_constant<bool,0>);
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const ,std::shared_ptr<TileSession> > > > > * _Uninitialized_move_al_unchecked<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<TileSession> > > > > *,_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<TileSession> > > > > *,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<TileSession> > > > > > > >(std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const ,std::shared_ptr<TileSession> > > > > *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const ,std::shared_ptr<TileSession> > > > > *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const ,std::shared_ptr<TileSession> > > > > *,std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const ,std::shared_ptr<TileSession> > > > > > > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const ,std::shared_ptr<ToastSession> > > > > * _Uninit_alloc_fill_n1<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<ToastSession> > > > > *,unsigned __int64,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<ToastSession> > > > > > > >(std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const ,std::shared_ptr<ToastSession> > > > > *,unsigned __int64,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const ,std::shared_ptr<ToastSession> > > > > const &,std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const ,std::shared_ptr<ToastSession> > > > > > > > &,std::integral_constant<bool,0>);
	std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const ,std::shared_ptr<ToastSession> > > > > * _Uninitialized_move_al_unchecked<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<ToastSession> > > > > *,_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<ToastSession> > > > > *,_Wrap_alloc<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<unsigned long const ,shared_ptr<ToastSession> > > > > > > >(std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const ,std::shared_ptr<ToastSession> > > > > *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const ,std::shared_ptr<ToastSession> > > > > *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const ,std::shared_ptr<ToastSession> > > > > *,std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const ,std::shared_ptr<ToastSession> > > > > > > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	std::_Loop_vals_t * _Uninitialized_value_construct_n1<_Loop_vals_t *,unsigned __int64,allocator<_Loop_vals_t> >(std::_Loop_vals_t *,unsigned __int64,std::_Wrap_alloc<std::allocator<std::_Loop_vals_t> > &,std::integral_constant<bool,0>);
	std::_Tgt_state_t<char const *>::_Grp_t * _Copy_unchecked<_Tgt_state_t<char const *>::_Grp_t *,_Tgt_state_t<char const *>::_Grp_t *>(std::_Tgt_state_t<char const *>::_Grp_t *,std::_Tgt_state_t<char const *>::_Grp_t *,std::_Tgt_state_t<char const *>::_Grp_t *);
	std::_Tgt_state_t<char const *>::_Grp_t * _Uninitialized_value_construct_n1<_Tgt_state_t<char const *>::_Grp_t *,unsigned __int64,allocator<_Tgt_state_t<char const *>::_Grp_t> >(std::_Tgt_state_t<char const *>::_Grp_t *,unsigned __int64,std::_Wrap_alloc<std::allocator<std::_Tgt_state_t<char const *>::_Grp_t> > &,std::integral_constant<bool,0>);
	std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > _Copy_backward_unchecked<_Vb_iterator<_Wrap_alloc<allocator<unsigned int> > >,_Vb_iterator<_Wrap_alloc<allocator<unsigned int> > > >(std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > >,std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > >,std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > >,std::_General_ptr_iterator_tag);
	std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > > _Copy_unchecked1<_Vb_iterator<_Wrap_alloc<allocator<unsigned int> > >,_Vb_iterator<_Wrap_alloc<allocator<unsigned int> > > >(std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > >,std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > >,std::_Vb_iterator<std::_Wrap_alloc<std::allocator<unsigned int> > >,std::_General_ptr_iterator_tag);
	std::back_insert_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > _Format_default<char const *,allocator<sub_match<char const *> >,char const *,back_insert_iterator<basic_string<char,char_traits<char>,allocator<char> > > >(std::match_results<char const *,std::allocator<std::sub_match<char const *> > > const &,std::back_insert_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,char const *,char const *,std::regex_constants::match_flag_type);
	std::back_insert_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > _Format_sed<char const *,allocator<sub_match<char const *> >,char const *,back_insert_iterator<basic_string<char,char_traits<char>,allocator<char> > > >(std::match_results<char const *,std::allocator<std::sub_match<char const *> > > const &,std::back_insert_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,char const *,char const *,std::regex_constants::match_flag_type);
	std::back_insert_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > _Regex_replace1<back_insert_iterator<basic_string<char,char_traits<char>,allocator<char> > >,char const *,regex_traits<char>,char,char_traits<char>,allocator<char> >(std::back_insert_iterator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >,char const *,char const *,std::basic_regex<char,std::regex_traits<char> > const &,std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &,std::regex_constants::match_flag_type);
	std::basic_ostream<char,std::char_traits<char> > & operator<<<char_traits<char> >(std::basic_ostream<char,std::char_traits<char> > &,char const *);
	std::basic_ostream<char,std::char_traits<char> > & operator<<<char_traits<char> >(std::basic_ostream<char,std::char_traits<char> > &,char);
	std::basic_ostream<unsigned short,std::char_traits<unsigned short> > & operator<<<unsigned short,char_traits<unsigned short> >(std::basic_ostream<unsigned short,std::char_traits<unsigned short> > &,unsigned short const *);
	std::basic_string<char,std::char_traits<char>,std::allocator<char> > * _Uninitialized_copy_al_unchecked<basic_string<char,char_traits<char>,allocator<char> > const *,basic_string<char,char_traits<char>,allocator<char> > *,allocator<basic_string<char,char_traits<char>,allocator<char> > > >(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const *,std::basic_string<char,std::char_traits<char>,std::allocator<char> > const *,std::basic_string<char,std::char_traits<char>,std::allocator<char> > *,std::_Wrap_alloc<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	std::basic_string<char,std::char_traits<char>,std::allocator<char> > * _Uninitialized_move_al_unchecked<basic_string<char,char_traits<char>,allocator<char> > *,basic_string<char,char_traits<char>,allocator<char> > *,allocator<basic_string<char,char_traits<char>,allocator<char> > > >(std::basic_string<char,std::char_traits<char>,std::allocator<char> > *,std::basic_string<char,std::char_traits<char>,std::allocator<char> > *,std::basic_string<char,std::char_traits<char>,std::allocator<char> > *,std::_Wrap_alloc<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > * _Uninitialized_move_al_unchecked<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::_Wrap_alloc<std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > * _Uninitialized_value_construct_n1<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,unsigned __int64,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,unsigned __int64,std::_Wrap_alloc<std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > &,std::integral_constant<bool,0>);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > operator+<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
	std::codecvt<char,char,_Mbstatet> const & use_facet<codecvt<char,char,_Mbstatet> >(std::locale const &);
	std::collate<char> const & use_facet<collate<char> >(std::locale const &);
	std::ctype<char> const & use_facet<ctype<char> >(std::locale const &);
	std::shared_ptr<TileSession> * _Uninitialized_move_al_unchecked<shared_ptr<TileSession> *,shared_ptr<TileSession> *,allocator<shared_ptr<TileSession> > >(std::shared_ptr<TileSession> *,std::shared_ptr<TileSession> *,std::shared_ptr<TileSession> *,std::_Wrap_alloc<std::allocator<std::shared_ptr<TileSession> > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	std::shared_ptr<ToastSession> * _Uninitialized_move_al_unchecked<shared_ptr<ToastSession> *,shared_ptr<ToastSession> *,allocator<shared_ptr<ToastSession> > >(std::shared_ptr<ToastSession> *,std::shared_ptr<ToastSession> *,std::shared_ptr<ToastSession> *,std::_Wrap_alloc<std::allocator<std::shared_ptr<ToastSession> > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	std::sub_match<char const *> * _Uninitialized_move_al_unchecked<sub_match<char const *> *,sub_match<char const *> *,allocator<sub_match<char const *> > >(std::sub_match<char const *> *,std::sub_match<char const *> *,std::sub_match<char const *> *,std::_Wrap_alloc<std::allocator<std::sub_match<char const *> > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	std::sub_match<char const *> * _Uninitialized_value_construct_n1<sub_match<char const *> *,unsigned __int64,allocator<sub_match<char const *> > >(std::sub_match<char const *> *,unsigned __int64,std::_Wrap_alloc<std::allocator<std::sub_match<char const *> > > &,std::integral_constant<bool,0>);
	std::unique_ptr<ClearToastWork::SmartToastRequestControl,std::default_delete<ClearToastWork::SmartToastRequestControl> > * _Uninitialized_move_al_unchecked<unique_ptr<ClearToastWork::SmartToastRequestControl,default_delete<ClearToastWork::SmartToastRequestControl> > *,unique_ptr<ClearToastWork::SmartToastRequestControl,default_delete<ClearToastWork::SmartToastRequestControl> > *,allocator<unique_ptr<ClearToastWork::SmartToastRequestControl,default_delete<ClearToastWork::SmartToastRequestControl> > > >(std::unique_ptr<ClearToastWork::SmartToastRequestControl,std::default_delete<ClearToastWork::SmartToastRequestControl> > *,std::unique_ptr<ClearToastWork::SmartToastRequestControl,std::default_delete<ClearToastWork::SmartToastRequestControl> > *,std::unique_ptr<ClearToastWork::SmartToastRequestControl,std::default_delete<ClearToastWork::SmartToastRequestControl> > *,std::_Wrap_alloc<std::allocator<std::unique_ptr<ClearToastWork::SmartToastRequestControl,std::default_delete<ClearToastWork::SmartToastRequestControl> > > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	std::unique_ptr<ConnectWork,std::default_delete<ConnectWork> > make_unique<ConnectWork,ConnectionManagerPtr &,IResourceManager * &,unsigned long &,void>(ConnectionManagerPtr &,IResourceManager * &,unsigned long &);
	std::unique_ptr<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext,std::default_delete<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext> > * _Uninitialized_move_al_unchecked<unique_ptr<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext,default_delete<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext> > *,unique_ptr<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext,default_delete<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext> > *,allocator<unique_ptr<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext,default_delete<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext> > > >(std::unique_ptr<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext,std::default_delete<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext> > *,std::unique_ptr<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext,std::default_delete<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext> > *,std::unique_ptr<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext,std::default_delete<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext> > *,std::_Wrap_alloc<std::allocator<std::unique_ptr<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext,std::default_delete<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext> > > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	std::unique_ptr<Microsoft::Windows::Internal::PushNotifications::DismissActivityWork,std::default_delete<Microsoft::Windows::Internal::PushNotifications::DismissActivityWork> > make_unique<Microsoft::Windows::Internal::PushNotifications::DismissActivityWork,NotificationPlatform * &,ICDPActivity * &,void>(NotificationPlatform * &,ICDPActivity * &);
	std::unique_ptr<NotificationAvailableWork,std::default_delete<NotificationAvailableWork> > make_unique<NotificationAvailableWork,unique_ptr<NotificationDeliveryTransaction,default_delete<NotificationDeliveryTransaction> > &,NotificationPlatform * &,void>(std::unique_ptr<NotificationDeliveryTransaction,std::default_delete<NotificationDeliveryTransaction> > &,NotificationPlatform * &);
	std::unique_ptr<ReconnectWork,std::default_delete<ReconnectWork> > make_unique<ReconnectWork,ConnectionManagerPtr &,IResourceManager * &,unsigned long &,void>(ConnectionManagerPtr &,IResourceManager * &,unsigned long &);
	std::unique_ptr<SendExemptionListWork,std::default_delete<SendExemptionListWork> > make_unique<SendExemptionListWork,NotificationPlatform * &,unsigned int const &,void>(NotificationPlatform * &,unsigned int const &);
	std::unique_ptr<std::vector<_WPN_NOTIFICATION_METADATA_PAIR,std::allocator<_WPN_NOTIFICATION_METADATA_PAIR> >,std::default_delete<std::vector<_WPN_NOTIFICATION_METADATA_PAIR,std::allocator<_WPN_NOTIFICATION_METADATA_PAIR> > > > * _Uninitialized_move_al_unchecked<unique_ptr<vector<_WPN_NOTIFICATION_METADATA_PAIR,allocator<_WPN_NOTIFICATION_METADATA_PAIR> >,default_delete<vector<_WPN_NOTIFICATION_METADATA_PAIR,allocator<_WPN_NOTIFICATION_METADATA_PAIR> > > > *,unique_ptr<vector<_WPN_NOTIFICATION_METADATA_PAIR,allocator<_WPN_NOTIFICATION_METADATA_PAIR> >,default_delete<vector<_WPN_NOTIFICATION_METADATA_PAIR,allocator<_WPN_NOTIFICATION_METADATA_PAIR> > > > *,allocator<unique_ptr<vector<_WPN_NOTIFICATION_METADATA_PAIR,allocator<_WPN_NOTIFICATION_METADATA_PAIR> >,default_delete<vector<_WPN_NOTIFICATION_METADATA_PAIR,allocator<_WPN_NOTIFICATION_METADATA_PAIR> > > > > >(std::unique_ptr<std::vector<_WPN_NOTIFICATION_METADATA_PAIR,std::allocator<_WPN_NOTIFICATION_METADATA_PAIR> >,std::default_delete<std::vector<_WPN_NOTIFICATION_METADATA_PAIR,std::allocator<_WPN_NOTIFICATION_METADATA_PAIR> > > > *,std::unique_ptr<std::vector<_WPN_NOTIFICATION_METADATA_PAIR,std::allocator<_WPN_NOTIFICATION_METADATA_PAIR> >,std::default_delete<std::vector<_WPN_NOTIFICATION_METADATA_PAIR,std::allocator<_WPN_NOTIFICATION_METADATA_PAIR> > > > *,std::unique_ptr<std::vector<_WPN_NOTIFICATION_METADATA_PAIR,std::allocator<_WPN_NOTIFICATION_METADATA_PAIR> >,std::default_delete<std::vector<_WPN_NOTIFICATION_METADATA_PAIR,std::allocator<_WPN_NOTIFICATION_METADATA_PAIR> > > > *,std::_Wrap_alloc<std::allocator<std::unique_ptr<std::vector<_WPN_NOTIFICATION_METADATA_PAIR,std::allocator<_WPN_NOTIFICATION_METADATA_PAIR> >,std::default_delete<std::vector<_WPN_NOTIFICATION_METADATA_PAIR,std::allocator<_WPN_NOTIFICATION_METADATA_PAIR> > > > > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	unsigned __int64 _Hash_bytes(unsigned char const *,unsigned __int64);
	unsigned __int64 stoull(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,unsigned __int64 *,int);
	unsigned int * _Copy_unchecked<unsigned int *,unsigned int *>(unsigned int *,unsigned int *,unsigned int *);
	unsigned int * _Uninit_alloc_fill_n1<unsigned int *,unsigned __int64,allocator<unsigned int> >(unsigned int *,unsigned __int64,unsigned int const &,std::_Wrap_alloc<std::allocator<unsigned int> > &,std::integral_constant<bool,0>);
	unsigned short * _UIntegral_to_buff<unsigned short,unsigned __int64>(unsigned short *,unsigned __int64);
	unsigned short * _UIntegral_to_buff<unsigned short,unsigned int>(unsigned short *,unsigned int);
	void * _Allocate(unsigned __int64,unsigned __int64,bool);
	void _Calculate_loop_simplicity(std::_Node_base *,std::_Node_base *,std::_Node_rep *);
	void _Deallocate(void *,unsigned __int64,unsigned __int64);
	void _Destroy_node(std::_Node_base *,std::_Node_base *);
	void _Destroy_range<allocator<Microsoft::WRL::ComPtr<HandlerAsset> >,Microsoft::WRL::ComPtr<HandlerAsset> *>(Microsoft::WRL::ComPtr<HandlerAsset> *,Microsoft::WRL::ComPtr<HandlerAsset> *,std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<HandlerAsset> > > &);
	void _Destroy_range<allocator<Microsoft::WRL::ComPtr<INotificationHandler> >,Microsoft::WRL::ComPtr<INotificationHandler> *>(Microsoft::WRL::ComPtr<INotificationHandler> *,Microsoft::WRL::ComPtr<INotificationHandler> *,std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<INotificationHandler> > > &);
	void _Destroy_range<allocator<Microsoft::WRL::ComPtr<IWpnNotification> >,Microsoft::WRL::ComPtr<IWpnNotification> *>(Microsoft::WRL::ComPtr<IWpnNotification> *,Microsoft::WRL::ComPtr<IWpnNotification> *,std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<IWpnNotification> > > &);
	void _Destroy_range<allocator<Microsoft::Windows::Internal::PushNotifications::Callback::ScopedCallbackHandle>,Microsoft::Windows::Internal::PushNotifications::Callback::ScopedCallbackHandle *>(Microsoft::Windows::Internal::PushNotifications::Callback::ScopedCallbackHandle *,Microsoft::Windows::Internal::PushNotifications::Callback::ScopedCallbackHandle *,std::_Wrap_alloc<std::allocator<Microsoft::Windows::Internal::PushNotifications::Callback::ScopedCallbackHandle> > &);
	void _Destroy_range<allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal>,Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal *>(Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal *,Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal *,std::_Wrap_alloc<std::allocator<Microsoft::Windows::Internal::PushNotifications::ChannelRequestInternal> > &);
	void _Destroy_range<allocator<basic_string<char,char_traits<char>,allocator<char> > >,basic_string<char,char_traits<char>,allocator<char> > *>(std::basic_string<char,std::char_traits<char>,std::allocator<char> > *,std::basic_string<char,std::char_traits<char>,std::allocator<char> > *,std::_Wrap_alloc<std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > &);
	void _Destroy_range<allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *>(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::_Wrap_alloc<std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > &);
	void _Destroy_range<allocator<shared_ptr<TileSession> >,shared_ptr<TileSession> *>(std::shared_ptr<TileSession> *,std::shared_ptr<TileSession> *,std::_Wrap_alloc<std::allocator<std::shared_ptr<TileSession> > > &);
	void _Destroy_range<allocator<shared_ptr<ToastSession> >,shared_ptr<ToastSession> *>(std::shared_ptr<ToastSession> *,std::shared_ptr<ToastSession> *,std::_Wrap_alloc<std::allocator<std::shared_ptr<ToastSession> > > &);
	void _Destroy_range<allocator<unique_ptr<ClearToastWork::SmartToastRequestControl,default_delete<ClearToastWork::SmartToastRequestControl> > >,unique_ptr<ClearToastWork::SmartToastRequestControl,default_delete<ClearToastWork::SmartToastRequestControl> > *>(std::unique_ptr<ClearToastWork::SmartToastRequestControl,std::default_delete<ClearToastWork::SmartToastRequestControl> > *,std::unique_ptr<ClearToastWork::SmartToastRequestControl,std::default_delete<ClearToastWork::SmartToastRequestControl> > *,std::_Wrap_alloc<std::allocator<std::unique_ptr<ClearToastWork::SmartToastRequestControl,std::default_delete<ClearToastWork::SmartToastRequestControl> > > > &);
	void _Destroy_range<allocator<unique_ptr<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext,default_delete<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext> > >,unique_ptr<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext,default_delete<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext> > *>(std::unique_ptr<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext,std::default_delete<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext> > *,std::unique_ptr<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext,std::default_delete<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext> > *,std::_Wrap_alloc<std::allocator<std::unique_ptr<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext,std::default_delete<Microsoft::Windows::Internal::PushNotifications::CPTransactionRequestManager::TimerContext> > > > &);
	void _Destroy_range<allocator<unique_ptr<vector<_WPN_NOTIFICATION_METADATA_PAIR,allocator<_WPN_NOTIFICATION_METADATA_PAIR> >,default_delete<vector<_WPN_NOTIFICATION_METADATA_PAIR,allocator<_WPN_NOTIFICATION_METADATA_PAIR> > > > >,unique_ptr<vector<_WPN_NOTIFICATION_METADATA_PAIR,allocator<_WPN_NOTIFICATION_METADATA_PAIR> >,default_delete<vector<_WPN_NOTIFICATION_METADATA_PAIR,allocator<_WPN_NOTIFICATION_METADATA_PAIR> > > > *>(std::unique_ptr<std::vector<_WPN_NOTIFICATION_METADATA_PAIR,std::allocator<_WPN_NOTIFICATION_METADATA_PAIR> >,std::default_delete<std::vector<_WPN_NOTIFICATION_METADATA_PAIR,std::allocator<_WPN_NOTIFICATION_METADATA_PAIR> > > > *,std::unique_ptr<std::vector<_WPN_NOTIFICATION_METADATA_PAIR,std::allocator<_WPN_NOTIFICATION_METADATA_PAIR> >,std::default_delete<std::vector<_WPN_NOTIFICATION_METADATA_PAIR,std::allocator<_WPN_NOTIFICATION_METADATA_PAIR> > > > *,std::_Wrap_alloc<std::allocator<std::unique_ptr<std::vector<_WPN_NOTIFICATION_METADATA_PAIR,std::allocator<_WPN_NOTIFICATION_METADATA_PAIR> >,std::default_delete<std::vector<_WPN_NOTIFICATION_METADATA_PAIR,std::allocator<_WPN_NOTIFICATION_METADATA_PAIR> > > > > > &);
	void _Facet_Register(std::_Facet_base *);
	void swap<Microsoft::Windows::Internal::PushNotifications::RegistrationEntry,void>(Microsoft::Windows::Internal::PushNotifications::RegistrationEntry &,Microsoft::Windows::Internal::PushNotifications::RegistrationEntry &);
	xtime _To_xtime<__int64,ratio<1,1> >(std::chrono::duration<__int64,std::ratio<1,1> > const &);
};

namespace wil
{
	class ActivityBase<WnsCPTracelogger,1,0,5,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<WnsCPTracelogger,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<WnsCPTracelogger,_TlgReflectorTag_Param0IsProviderType>();
		};

		void ReportStopActivity(long);
	protected:
		void Destroy();
	public:
		ActivityBase<WnsCPTracelogger,1,0,5,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void Stop(long);
		void zInternalStart();
		void zInternalStop();
		~ActivityBase<WnsCPTracelogger,1,0,5,_TlgReflectorTag_Param0IsProviderType>();
	};

	class ActivityBase<WnsCPTracelogger,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<WnsCPTracelogger,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<WnsCPTracelogger,_TlgReflectorTag_Param0IsProviderType>();
		};

	protected:
		void Destroy();
	public:
		ActivityBase<WnsCPTracelogger,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void Stop(long);
		void zInternalStart();
		void zInternalStop();
		~ActivityBase<WnsCPTracelogger,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>();
	};

	class ActivityBase<WnsCPTracelogger,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<WnsCPTracelogger,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<WnsCPTracelogger,_TlgReflectorTag_Param0IsProviderType>();
		};

	protected:
		void Destroy();
	public:
		ActivityBase<WnsCPTracelogger,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void Stop(long);
		void zInternalStart();
		void zInternalStop();
		~ActivityBase<WnsCPTracelogger,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>();
	};

	class Feature<__WilFeatureTraits_Feature_MultiUserSupport>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_NotificationForwarding>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_WnsAnalogUserService>
	{
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_WnsPowerSaver>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_WpnDEHReplacement>
	{
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_WpnLifetimeMgmt>
	{
		static void ReportUsageToService(bool,ReportingKind,unsigned __int64);
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	struct ResultException
	{
		ResultException(ResultException const &);
		virtual char const * what();
		virtual ~ResultException();
	};

	struct StoredFailureInfo
	{
		void SetFailureInfo(FailureInfo const &);
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

	struct com_ptr_t<IAgileReference,err_exception_policy>
	{
		~com_ptr_t<IAgileReference,err_exception_policy>();
	};

	struct com_ptr_t<IInspectable,err_exception_policy>
	{
		~com_ptr_t<IInspectable,err_exception_policy>();
	};

	struct com_ptr_t<IWpnInternalConnectionManager,err_exception_policy>
	{
		~com_ptr_t<IWpnInternalConnectionManager,err_exception_policy>();
	};

	struct com_ptr_t<Windows::Management::Deployment::Internal::IPackageManagerInternal,err_exception_policy>
	{
		~com_ptr_t<Windows::Management::Deployment::Internal::IPackageManagerInternal,err_exception_policy>();
	};

	struct critical_section
	{
		~critical_section();
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
			void StartWatching();
			void StopWatching();
		};

		namespace in1diag3
		{
			bool Log_HrIfFalseMsg(void *,unsigned int,char const *,long,bool,char const *,...);
			bool Log_HrIfMsg(void *,unsigned int,char const *,long,bool,char const *,...);
			bool Throw_GetLastErrorIfFalseMsg(void *,unsigned int,char const *,bool,char const *,...);
			bool Throw_HrIfFalseMsg(void *,unsigned int,char const *,long,bool,char const *,...);
			bool Throw_HrIfMsg(void *,unsigned int,char const *,long,bool,char const *,...);
			int Log_IfWin32BoolFalseMsg(void *,unsigned int,char const *,int,char const *,...);
			long Log_CaughtException(void *,unsigned int,char const *);
			long Log_CaughtExceptionMsg(void *,unsigned int,char const *,char const *,...);
			long Log_Hr(void *,unsigned int,char const *,long);
			long Log_IfFailedMsg(void *,unsigned int,char const *,long,char const *,...);
			long Return_CaughtException(void *,unsigned int,char const *);
			long Return_CaughtExceptionMsg(void *,unsigned int,char const *,char const *,...);
			long Return_GetLastError(void *,unsigned int,char const *);
			long Return_NtStatus(void *,unsigned int,char const *,long);
			long Return_Win32(void *,unsigned int,char const *,unsigned long);
			long Throw_IfFailedMsg(void *,unsigned int,char const *,long,char const *,...);
			void FailFast_Unexpected(void *,unsigned int,char const *);
			void Return_Hr(void *,unsigned int,char const *,long);
			void Return_HrMsg(void *,unsigned int,char const *,long,char const *,...);
			void Return_Hr_NoOriginate(void *,unsigned int,char const *,long);
			void Throw_GetLastError(void *,unsigned int,char const *);
			void Throw_Hr(void *,unsigned int,char const *,long);
			void Throw_HrMsg(void *,unsigned int,char const *,long,char const *,...);
			void _FailFastImmediate_Unexpected();
			void _FailFast_GetLastError(void *,unsigned int,char const *);
			void _FailFast_Hr(void *,unsigned int,char const *,long);
			void _FailFast_Unexpected(void *,unsigned int,char const *);
			void _Log_Hr(void *,unsigned int,char const *,long);
			void _Log_NtStatus(void *,unsigned int,char const *,long);
			void _Log_Win32(void *,unsigned int,char const *,unsigned long);
			void _Throw_GetLastError(void *,unsigned int,char const *);
			void _Throw_Hr(void *,unsigned int,char const *,long);
			void _Throw_NtStatus(void *,unsigned int,char const *,long);
			void _Throw_NullAlloc(void *,unsigned int,char const *);
			void _Throw_Win32(void *,unsigned int,char const *,unsigned long);
		};

		struct out_param_t<std::unique_ptr<IGlobalSettings,std::default_delete<IGlobalSettings> > >
		{
			~out_param_t<std::unique_ptr<IGlobalSettings,std::default_delete<IGlobalSettings> > >();
		};

		struct out_param_t<std::unique_ptr<IResourceManager,std::default_delete<IResourceManager> > >
		{
			~out_param_t<std::unique_ptr<IResourceManager,std::default_delete<IResourceManager> > >();
		};

		struct out_param_t<std::unique_ptr<StatisticsManager,std::default_delete<StatisticsManager> > >
		{
			~out_param_t<std::unique_ptr<StatisticsManager,std::default_delete<StatisticsManager> > >();
		};

		class shared_buffer
		{
			void assign(long *,unsigned __int64);
		public:
			bool create(void const *,unsigned __int64);
			void reset();
		};

		struct shared_object<ActivityBase<WnsCPTracelogger,1,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WnsCPTracelogger,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct shared_object<ActivityBase<WnsCPTracelogger,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WnsCPTracelogger,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct shared_object<ActivityBase<WnsCPTracelogger,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WnsCPTracelogger,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct static_lazy<WnsCPTracelogger>
		{
			struct Completer
			{
				~Completer();
			};

			void cleanup();
		};

		struct wnf_subscription_state<int>
		{
			virtual ~wnf_subscription_state<int>();
		};

		struct wnf_subscription_state<unsigned int>
		{
			virtual ~wnf_subscription_state<unsigned int>();
		};

		struct wnf_subscription_state<unsigned long>
		{
			virtual ~wnf_subscription_state<unsigned long>();
		};

		struct wnf_subscription_state_base
		{
			virtual ~wnf_subscription_state_base();
		};

		FEATURE_ENABLED_STATE WilApiImpl_GetFeatureEnabledState(unsigned int,FEATURE_CHANGE_TIME);
		FEATURE_ENABLED_STATE WilApi_GetFeatureEnabledState(unsigned int,FEATURE_CHANGE_TIME);
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
		long RecognizeCaughtExceptionFromCallback(unsigned short *,unsigned __int64);
		long ReportFailure_CaughtException(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,SupportedExceptions);
		long ReportFailure_CaughtExceptionCommon(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,unsigned short *,unsigned __int64,SupportedExceptions);
		long ReportFailure_CaughtExceptionMsg(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,char const *,char *);
		long ReportFailure_GetLastErrorHr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		long ReportFailure_NtStatus(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long);
		long ReportFailure_Win32(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,unsigned long);
		long ResultFromCaughtExceptionInternal(unsigned short *,unsigned __int64,bool *);
		long StringCchPrintfA(char *,unsigned __int64,char const *,...);
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
		unsigned long ReportFailure_GetLastErrorMsg(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,char const *,char *);
		unsigned long RtlNtStatusToDosErrorNoTeb(long);
		unsigned short * LogStringPrintf(unsigned short *,unsigned short const *,unsigned short const *,...);
		void (* g_pfnDebugBreak)();
		void (* g_pfnGetContextAndNotifyFailure)(FailureInfo *,char *,unsigned __int64);
		void (* g_pfnLoggingCallback)(FailureInfo const &);
		void (* g_pfnOriginateCallback)(FailureType,long);
		void (* g_pfnRethrow)();
		void (* g_pfnTelemetryCallback)(bool,FailureInfo const &);
		void (* g_pfnThrowResultException)(FailureInfo const &);
		void CloseHandle(void *);
		void DebugBreak();
		void FreeProcessHeap(void *);
		void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
		void LogFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,bool,unsigned short *,unsigned __int64,char *,unsigned __int64,FailureInfo *);
		void MaybeGetExceptionString(ResultException const &,unsigned short *,unsigned __int64);
		void MaybeGetExceptionString(std::exception const &,unsigned short *,unsigned __int64);
		void OriginateError(FailureType,long);
		void PrintLoggingMessage(unsigned short *,unsigned __int64,char const *,char *);
		void RecordFeatureUsageCallback(unsigned int,wil_details_FeaturePropertyCache *,wil_details_RecordUsageResult *);
		void ReleaseMutex(void *);
		void ReportFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Hr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long);
		void ReportFailure_HrMsg(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,char const *,char *);
		void ReportFailure_Msg(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,char const *,char *);
		void ResetEvent(void *);
		void Rethrow();
		void SetEvent(void *);
		void ThrowResultExceptionInternal(FailureInfo const &);
		void WilApiImpl_RecordFeatureUsage(unsigned int,unsigned int,unsigned int,char const *);
		void WilApiImpl_SubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
		void WilApiImpl_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
		void WilApi_RecordFeatureUsage(unsigned int,unsigned int,unsigned int,char const *);
		void WilApi_SubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
		void WilApi_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
		void delete_wnf_subscription_state(details::wnf_subscription_state_base *);
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
			~ProcessLocalStorage<ProcessLocalData>();
		};

		struct ProcessLocalStorageData<FeatureStateData>
		{
			static long Acquire(char const *,ProcessLocalStorageData<FeatureStateData> * *);
			~ProcessLocalStorageData<FeatureStateData>();
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
			~RawUsageIndex();
		};

		class SemaphoreValue
		{
			long CreateFromValueInternal(unsigned short const *,bool,unsigned __int64);
			static long GetValueFromSemaphore(void *,long *);
			static long TryGetValueInternal(unsigned short const *,bool,unsigned __int64 *,bool *);
		public:
			static long TryGetPointer(unsigned short const *,void * *);
			void Destroy();
			~SemaphoreValue();
		};

		struct SubscriptionList
		{
			SubscriptionList();
			void OnSignaled(srwlock &);
			void SubscribeUnderLock(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
			void Unsubscribe(srwlock &,FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
			~SubscriptionList();
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
			details::ThreadFailureCallbackHolder * * GetLocal(bool);
			~ThreadLocalStorage<details::ThreadFailureCallbackHolder *>();
		};

		struct UsageIndexProperty
		{
			bool AddToCount(unsigned int);
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

	bool (* g_pfnIsDebuggerPresent)();
	bool ProcessShutdownInProgress();
	bool g_fBreakOnFailure;
	bool g_fIsDebuggerPresent;
	long (* g_pfnResultFromCaughtException)();
	long GetFailureLogString(unsigned short *,unsigned __int64,wil::FailureInfo const &);
	long ResultFromCaughtException();
	long wnf_query_nothrow<int>(_WNF_STATE_NAME const &,bool *,int *,wil::WNF_CHANGE_STAMP_STRUCT *);
	long wnf_query_nothrow<unsigned int>(_WNF_STATE_NAME const &,bool *,unsigned int *,wil::WNF_CHANGE_STAMP_STRUCT *);
	void SetResultLoggingCallback(void (*)(wil::FailureInfo const &));
	wil::com_ptr_t<IAgileReference,wil::err_exception_policy> com_agile_query<IWpnChannelRequest * &>(IWpnChannelRequest * &,AgileReferenceOptions);
	wil::com_ptr_t<Windows::Management::Deployment::Internal::IPackageManagerInternal,wil::err_exception_policy> ActivateInstance<Windows::Management::Deployment::Internal::IPackageManagerInternal>(unsigned short const *);
};

namespace wistd
{
	class _Func_class<bool,void *,unsigned __int64,void *,unsigned __int64,unsigned int,_Nil,_Nil>
	{
	protected:
		void _Tidy();
	};

	class _Func_class<void,int const &,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
	protected:
		void _Tidy();
	public:
		~_Func_class<void,int const &,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	class _Func_class<void,unsigned int const &,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
	protected:
		void _Tidy();
	public:
		~_Func_class<void,unsigned int const &,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	class _Func_class<void,unsigned long const &,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
	protected:
		void _Tidy();
	public:
		~_Func_class<void,unsigned long const &,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>
	{
		~function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>();
	};

	struct function<void (int const &)>
	{
		~function<void (int const &)>();
	};

	struct function<void (unsigned int const &)>
	{
		~function<void (unsigned int const &)>();
	};

	struct unique_ptr<TileDataLayer::Migration::ITdlMigration,default_delete<TileDataLayer::Migration::ITdlMigration> >
	{
		~unique_ptr<TileDataLayer::Migration::ITdlMigration,default_delete<TileDataLayer::Migration::ITdlMigration> >();
	};

	struct unique_ptr<char,wil::process_heap_deleter>
	{
		~unique_ptr<char,wil::process_heap_deleter>();
	};

	struct unique_ptr<unsigned short [0],default_delete<unsigned short [0]> >
	{
		~unique_ptr<unsigned short [0],default_delete<unsigned short [0]> >();
	};

	struct unique_ptr<unsigned short,wil::process_heap_deleter>
	{
		~unique_ptr<unsigned short,wil::process_heap_deleter>();
	};

};

APPTYPE_MAP * c_appTypeMap;
FEATURE_ENABLED_STATE (* g_wil_details_apiGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME);
FEATURE_ENABLED_STATE (* g_wil_details_internalGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME);
GlobalSettingMap * s_GlobalSettingMapTable;
HINSTANCE__ * g_Module;
HINSTANCE__ * g_wil_details_ntdllModuleHandle;
HINSTANCE__ * wil_details_GetNtDllModuleHandle();
Microsoft::WRL::ComPtr<IWpnInternalConnectionManager> CreateConnectionManager();
SETTING_MAP * c_settingMap;
_RTL_CRITICAL_SECTION g_CritSec;
__MIDL___MIDL_itf_wpnplatform_0000_0004_0003 WpnConvertMinutesToRecurrence(unsigned int);
__WIL_RTL_SRWLOCK g_wil_details_testFeatureStateLock;
__type_info_node __type_info_root_node;
bool IsDeviceFamilyMobile();
bool IsDeviceFamilyXbox();
bool IsMultiUserSupported();
bool _TlgGuidIsZero(_GUID const &);
int FInternalParseHttpDate(_FILETIME *,_SYSTEMTIME *,char const *);
int InlineIsEqualGUID(_GUID const &,_GUID const &);
int WpnCheckTimeIsExpired(_FILETIME);
int _snprintf_s<100>(char (&)[100],unsigned __int64,char const *,...);
int _snprintf_s<200>(char (&)[200],unsigned __int64,char const *,...);
int g_wil_details_preventOnDemandStagingConfigReads;
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
long CreateConnectionManagerFactory(IConnectionManagerFactory * *);
long CreateEndpoint<AppEndpoint,IWpnAppEndpoint>(IWpnAppEndpoint * *,IPlatformConfigurationProvider *,IPlatformInstanceProvider *);
long CreateEndpoint<IdleTaskEndpointImpl,IWpnIdleTaskEndpoint>(IWpnIdleTaskEndpoint * *,IPlatformConfigurationProvider *,IPlatformInstanceProvider *);
long CreateEndpoint<MirroringAccountSwitcher,IWpnMirroringAccountSwitcher>(IWpnMirroringAccountSwitcher * *,IPlatformConfigurationProvider *,IPlatformInstanceProvider *);
long CreateEndpoint<PresentationEndpointFacade,IWpnPresentationEndpoint>(IWpnPresentationEndpoint * *,IPlatformConfigurationProvider *,IPlatformInstanceProvider *);
long CreateEndpoint<RegistrationEndpointFacade,IWpnRegistrationEndpoint>(IWpnRegistrationEndpoint * *,IPlatformConfigurationProvider *,IPlatformInstanceProvider *);
long CreateEndpoint<SettingsEndpointFacade,IWpnSettingsEndpoint>(IWpnSettingsEndpoint * *,IPlatformConfigurationProvider *,IPlatformInstanceProvider *);
long CreateEndpoint<TestEndpoint,IWpnTestEndpoint>(IWpnTestEndpoint * *,IPlatformConfigurationProvider *,IPlatformInstanceProvider *);
long CreateGlobalSettings(NotificationPlatform *,IGlobalSettings * *);
long CreateWindowsPushNotificationPlatform(IPlatformConfigurationProvider *);
long DoNotifyAFCAboutDismiss(_WPN_TOAST_NOTIFICATION *,unsigned long);
long FromNotificationMirroring(unsigned long,WpnNotificationMirroring *);
long GetCurrentUserToken(void * *);
long GetServiceProvider(IServiceProvider * *);
long InitializeWindowsPushNotificationPlatform(IPlatformInstanceProvider *);
long IsModernAppRunning(IAppInfo *,unsigned short const *,int *,int *);
long LogAppEndpointError(unsigned short const *,long,unsigned short const *);
long ParseAppUserModelId(unsigned short const *,unsigned short * *,unsigned short * *);
long ParseAppUserModelId(unsigned short const *,unsigned short *,unsigned __int64,unsigned short *,unsigned __int64);
long PopDiagTrackTrigger(unsigned __int64);
long RecursiveCreateDirectory(unsigned short const *);
long RecursiveCreateDirectory(unsigned short const *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
long RenameOpenFile(void *,unsigned short const *);
long ReplaceOpenDbFile(void *,void *,unsigned short const *);
long ResultFromKnownLastError();
long ShutdownConnectionManagerFactory();
long ShutdownWindowsPushNotificationPlatform();
long StringCchCopyA(char *,unsigned __int64,char const *);
long StringCchCopyNExW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64,unsigned short * *,unsigned __int64 *,unsigned long);
long StringCchCopyNW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64);
long StringCchCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchLengthA(char const *,unsigned __int64,unsigned __int64 *);
long StringCchLengthW(unsigned short const *,unsigned __int64,unsigned __int64 *);
long StringCchPrintfExW(unsigned short *,unsigned __int64,unsigned short * *,unsigned __int64 *,unsigned long,unsigned short const *,...);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long StringCchVPrintfW(unsigned short *,unsigned __int64,unsigned short const *,char *);
long WpnByteArrayToWStr(unsigned char *,unsigned long,unsigned short * *);
long WpnCalculateNextDueTime(_FILETIME,__MIDL___MIDL_itf_wpnplatform_0000_0004_0003,_WPN_FILE_TIME *);
long WpnCleanupPreinstalledRegistrationInformation(IPlatformConfigurationProvider *);
long WpnCoTaskStrCpy(unsigned short const *,unsigned short * *);
long WpnDowncaseStr(unsigned short const *,unsigned short * *);
long WpnEnumerateRegistrationInformation(IPlatformConfigurationProvider *,HKEY__ *,unsigned int *,WPN_REGISTRATION_INFO * *);
long WpnGetApplicationRegistrationInformation(HKEY__ *,unsigned short const *,WPN_REGISTRATION_INFO *);
long WpnGetCurrentProcessIntegrityLevel(unsigned long *);
long WpnGetUserSid(void *,unsigned long);
long WpnRegLoadDWord(HKEY__ *,unsigned short const *,unsigned long *);
long WpnRegLoadQWord(HKEY__ *,unsigned short const *,_ULARGE_INTEGER *);
long WpnRegWriteDWord(HKEY__ *,unsigned short const *,unsigned short const *,unsigned long);
long WpnRegWriteQWord(HKEY__ *,unsigned short const *,unsigned short const *,_ULARGE_INTEGER);
long WpnStrCpy(unsigned short const *,unsigned short * *);
long WpnStrCpyA(char const *,char * *);
long WpnUtf16ToUtf8(unsigned short const *,char * *);
long WpnUtf8ToUtf16(char const *,unsigned short * *);
long WpnValidateGroup(unsigned short const *);
long WpnValidateTag(unsigned short const *);
long _AllocStringWorker<CTCoAllocPolicy>(void *,unsigned long,unsigned short const *,unsigned __int64,unsigned __int64,unsigned short * *);
long g_Count;
long g_nQueuedTileCleanups;
long g_nQueuedTileCloses;
long wil_details_NtQueryWnfStateData(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long wil_details_NtUpdateWnfStateData(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long wil_details_RtlSubscribeWnfStateChangeNotification(__WIL__WNF_USER_SUBSCRIPTION * *,__WIL__WNF_STATE_NAME,unsigned long,long (*)(__WIL__WNF_STATE_NAME,unsigned long,__WIL__WNF_TYPE_ID *,void *,void const *,unsigned long),void *,__WIL__WNF_TYPE_ID *,unsigned long,unsigned long);
long wil_details_StagingConfig_FireNotification(wil_details_StagingConfig *,unsigned int,unsigned short);
long wil_details_StagingConfig_Load(wil_details_StagingConfig *,wil_FeatureStore,unsigned __int64,void *,int);
std::basic_string<char,std::char_traits<char>,std::allocator<char> > EscapeDataA(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
std::basic_string<char,std::char_traits<char>,std::allocator<char> > Utf16ToUtf8(unsigned short const *);
unsigned __int64 GetUserIdForContext(void *);
unsigned int WpnConvertRecurrenceToMinute(__MIDL___MIDL_itf_wpnplatform_0000_0004_0003);
unsigned long MapDayMonthToDword(char const *);
unsigned short const * * g_BITSJobDisplayNames;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_AppInfo;
unsigned short const * const RuntimeClass_Windows_Foundation_Collections_ValueSet;
unsigned short const * const RuntimeClass_Windows_Foundation_PropertyValue;
unsigned short const * const RuntimeClass_Windows_Internal_StateRepository_Application;
unsigned short const * const RuntimeClass_Windows_Internal_StateRepository_Package;
unsigned short const * const RuntimeClass_Windows_Management_Deployment_Internal_PackageManagerInternal;
unsigned short const * const RuntimeClass_Windows_Networking_Connectivity_NetworkInformation;
unsigned short const * const RuntimeClass_Windows_System_Internal_UserManager;
void (* g_wil_details_apiRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_apiSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_apiUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_internalRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_internalSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_internalUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_pfnFeatureLoggingHook)(unsigned int,FEATURE_LOGGED_TRAITS const *,FEATURE_ERROR const *,int,wil_ReportingKind const *,wil_VariantReportingKind const *,unsigned char,unsigned __int64);
void (* g_wil_details_recordFeatureUsage)(unsigned int,wil_details_FeaturePropertyCache *,wil_details_RecordUsageResult *);
void * MemoryAlloc(unsigned __int64);
void * operator new(unsigned __int64);
void * operator new(unsigned __int64,std::nothrow_t const &);
void * operator new[](unsigned __int64);
void * operator new[](unsigned __int64,std::nothrow_t const &);
void BindStream(Statement *,int,IStream *);
void FailureLoggingCallback(wil::FailureInfo const &);
void MemoryFree(void *);
void PdcActivatorNullCallback(void *,_PDC_ACTIVATOR_ERROR_DETAIL,void *,void *);
void WinSqmCreateStringStreamEntryEx(_SQM_STREAM_ENTRY_EX *,unsigned short const *);
void WpnDebugInitTrace(unsigned long,unsigned short const *,unsigned short const *,int,long);
void WpnDebugTrace(unsigned long,unsigned short const *,unsigned short const *,int,long);
void WpnSqmChannelRequest(unsigned short const *,unsigned short const *,_WpnSqmChannelRequestType,long,int,unsigned long);
void WpnSqmConnectionUsage(unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned __int64,unsigned __int64);
void WpnSqmMobileBroadbandTileCap(unsigned long,_WPN_FILE_TIME,WPN_MBB_DATE_SOURCE);
void WpnSqmNotificationImageDownload(unsigned short const *,unsigned short const *,unsigned long,unsigned long,_WpnSqmDownloadImageType,_WpnSqmNotificationType,unsigned long,long);
void WpnSqmSettingsChanged(unsigned short const *,unsigned short const *,_WpnSqmSettingScopeType,_WpnSqmSettingValueType,_WpnSqmSettingType);
void WpnSqmSettingsUXToggleChanged(_WpnSettingsToggleType,_WpnSettingsUXType,unsigned long);
void _TlgWriteActivityAutoStop<0,5>(_TlgProvider_t const *,_GUID const *);
void _TlgWriteActivityAutoStop<35184372088832,5>(_TlgProvider_t const *,_GUID const *);
void _TlgWriteActivityAutoStop<70368744177664,5>(_TlgProvider_t const *,_GUID const *);
void __ArrayUnwind(void *,unsigned __int64,unsigned __int64,void (*)(void *));
void __scrt_initialize_type_info();
void __scrt_throw_std_bad_alloc();
void __scrt_throw_std_bad_array_new_length();
void __scrt_uninitialize_type_info();
void operator delete(void *);
void operator delete(void *,std::nothrow_t const &);
void operator delete(void *,unsigned __int64);
void operator delete(void *,void *);
void operator delete[](void *);
void operator delete[](void *,std::nothrow_t const &);
void operator delete[](void *,unsigned __int64);
void wil_details_FeaturePropertyCache_ReportUsageToService(wil_details_FeaturePropertyCache *,unsigned int,FEATURE_LOGGED_TRAITS const *,int,wil_ReportingKind,unsigned __int64);
wil_StagingConfig * g_wil_details_stagingConfigForMachine;
wil_StagingConfig * g_wil_details_stagingConfigForUser;
wil_details_FeatureTestState * g_wil_details_testStates;
wil_details_RecordUsageResult wil_details_RecordUsageInPropertyCache(wil_details_FeaturePropertyCache *,wil_details_ServiceReportingKind,unsigned int,unsigned int);
wistd::unique_ptr<char,wil::process_heap_deleter> ConvertUtf16ToUtf8(unsigned short const *);
wistd::unique_ptr<unsigned short,wil::process_heap_deleter> ConvertUtf8ToUtf16(char const *);
