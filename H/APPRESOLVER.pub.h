namespace ARI
{
	namespace ProcessToken
	{
		struct AutoSysAppId
		{
			long GetAppUserModelId(unsigned int,unsigned int *,unsigned short *);
		};

		namespace SysAppId
		{
			long Open(void *,_TOKEN_SECURITY_ATTRIBUTES_INFORMATION * *,_TOKEN_SECURITY_ATTRIBUTE_V1 const * *,bool *);
		};

	};

	void AutoPtrAriHeapDeallocate<_TOKEN_SECURITY_ATTRIBUTES_INFORMATION>(_TOKEN_SECURITY_ATTRIBUTES_INFORMATION *);
};

struct AR_CACHE_HEADER
{
	long _GetLanguageList(unsigned short * *);
};

namespace ATL
{
	struct CAtlException
	{
		CAtlException(long);
	};

	struct CComBSTR
	{
		long Append(unsigned short const *);
		~CComBSTR();
	};

	struct CComPtr<CAppResolverCacheManager>
	{
		~CComPtr<CAppResolverCacheManager>();
	};

	struct CComPtr<IXMLDOMNode>
	{
		~CComPtr<IXMLDOMNode>();
	};

	struct CComVariant
	{
		~CComVariant();
	};

	void AtlThrowImpl(long);
};

class ActivityTracker
{
	long _AddAppData(HKEY__ *,unsigned short const *,unsigned short const *,unsigned int,_FILETIME const &);
	long _AddAppSubKey(HKEY__ *,unsigned short const *,unsigned short const *,unsigned int,_FILETIME const &);
	long _AddJumpListData(HKEY__ *,ActivityTracker::RecentItemData const &);
	long _AddRecentItemSubKey(HKEY__ *,ActivityTracker::RecentItemData const &);
	long _GetShellLinkArguments(IShellLinkW *,unsigned short * *);
	long _GetShellLinkDisplayName(IShellLinkW *,unsigned short * *);
	long _IsRecentItemTracked(HKEY__ *,ActivityTracker::RecentItemData const &,bool *);
	long _OpenAppSubKey(HKEY__ *,unsigned short const *,HKEY__ * *);
	long _RemoveAcAceFromKey(HKEY__ *,unsigned short const *);
	long _UpdateJumpList(HKEY__ *,unsigned short const *);
public:
	virtual long AddAppLaunch(unsigned short const *,unsigned short const *);
	virtual long UpdateJumpListForApp(unsigned short const *);
};

struct AgileGitPtr
{
	long Initialize(_GUID const &,IUnknown *);
};

class AppLifecycleReconciler
{
	struct PinMigrationContext
	{
		~PinMigrationContext();
	};

	long MigrateStartPin(AppLifecycleReconciler::PinMigrationContext &,WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *,WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *);
	long MigrateTaskbarPin(AppLifecycleReconciler::PinMigrationContext &,WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *,WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *);
	long OnMainPackageInstalled(Windows::ApplicationModel::IPackage *);
	long OnPackageInstalling(Windows::ApplicationModel::IPackageInstallingEventArgs *);
	long OnPackageUninstalling(Windows::ApplicationModel::IPackageUninstallingEventArgs *);
	long TryGetKnownIdentifierForMigrationElement(AppLifecycleReconciler::PinMigrationContext &,Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> *,WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier * *);
	long TryPerformDesktopAppPinMigration(AppLifecycleReconciler::PinMigrationContext &,Windows::Internal::StateRepository::IApplication *);
	static bool IsMainPackage(Windows::ApplicationModel::IPackage *);
	static long GetAumidFromUnifiedTileId(WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *,HSTRING__ * *);
	static long NotifyAppsFolderOfInstalledApp(HSTRING__ *);
	static long TryUnpinUninstalledPackageFromTaskbar(Windows::ApplicationModel::IPackage *);
	virtual ~AppLifecycleReconciler();
public:
	long RuntimeClassInitialize(IAppUsageEventSink *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

namespace AppResolverCacheHelpers
{
	bool IsMatchingShortcut(void const *,CCacheShortcut const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *);
	long GetSqmableNames(CCacheShortcut const *,void const *,unsigned short * *,unsigned short * *);
};

struct AppResolverLogging
{
	static _TlgProvider_t const * Provider();
};

struct AppResolverTelemetry
{
	class ARCBuilder_ScanFoldersAndCreateNewCache
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~ARCBuilder_ScanFoldersAndCreateNewCache();
	};

	class ARCM_RefreshCache
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(START_MENU_REFRESH_CACHE_FLAGS);
		~ARCM_RefreshCache();
	};

	class ARCManager_CortanaJumplistChangedForItem
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
	};

	class ARCManager_RegisterForDiskNotifications
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void RootNotificationRegistrationFailed<int &,long &>(int &,long &);
		void StartActivity();
	};

	class ActivityTracker_AppLaunch
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned short const *);
	};

	class ActivityTracker_JumpListChange
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned short const *);
	};

	class AppLifecycleReconcilerInitialize
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
	};

	class AppLifecycleReconcilerOnPackageInstalling
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
	};

	class AppLifecycleReconcilerOnPackageUninstalling
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
	};

	class AppUsageReconcilerAllRanksHaveChanged
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
	};

	class AppUsageReconcilerPromoteAppsToTopOfFrequentList
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
	};

	class AppUsageReconcilerRankChangedForApp
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
	};

	class AppUsageReconcilerUpdateAppUsageForTrackedApps
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
	};

	class GetStartPinContextMenuCommand
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
	};

	class PinUserCreatedItemToStart
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
	};

	class UPTM_CreateUserPinnedTileShortcut
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		UPTM_CreateUserPinnedTileShortcut(UPTM_CreateUserPinnedTileShortcut const &);
		void StartActivity();
		~UPTM_CreateUserPinnedTileShortcut();
	};

	class UPTM_DeleteUserPinnedTileShortcut
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~UPTM_DeleteUserPinnedTileShortcut();
	};

	static void ARCManager_CommittingNewAppResolverCache<long &>(long &);
	static void AppLifecycleReconcilerDesktopPinMigrationCandidateEnumerationComplete<Microsoft::WRL::ComPtr<WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier> &>(Microsoft::WRL::ComPtr<WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier> &);
	static void AppLifecycleReconcilerDesktopPinMigrationTileAlreadyPinnedToStart();
	static void AppLifecycleReconcilerDesktopPinMigrationTileAlreadyPinnedToTaskbar();
	static void AppResolver_CacheLanguageChanged();
	static void TAR_PublishAppResovlerScannedEvent<long &>(long &);
	static wil::ActivityThreadWatcher WatchCurrentThread(char const *);
};

class AppUsageReconciler
{
	long ClearUsageForTrackedApps();
	long EnsureIdentifierFactories();
	long EnsurePrimaryTileViewStatics();
	long EnsureTileProperties();
	long ReconcileUsageForApp(HSTRING__ *,bool);
	long ReconcileUsageForTrackedApps();
	long TryGetUnifiedTileIdForInstalledApp(HSTRING__ *,WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier * *);
	static long ReconcileUserAssistData(HSTRING__ *,bool,WindowsInternal::CDSProperties::ICDSLocalVolatileTileProperties *);
	static void GetUserAssistInfo(unsigned short const *,unsigned long,tagUEMINFO &);
public:
	virtual long AllRanksHaveChanged();
	virtual long GetGranularUsageData(unsigned short const *,_FILETIME *,unsigned int *,unsigned int *,unsigned long *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRankForApp(unsigned short const *,unsigned int *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long JumplistChangedForApp(unsigned short const *);
	virtual long PromoteAppsToTopOfFrequentList(unsigned short const * *,unsigned int);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RankChangedForApp(unsigned short const *,bool);
	virtual long SetGranularUsageData(unsigned short const *,unsigned int,unsigned int,unsigned long);
	virtual long UpdateAppUsageForTrackedApps();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

namespace Appx
{
	namespace Packaging
	{
		namespace AttributesPrefixed
		{
			unsigned short * AumId;
			unsigned short * ShortcutPath;
		};

		namespace Elements
		{
			unsigned short * DesktopApp;
			unsigned short * DesktopAppMigration;
		};

		namespace ExtensionCategories
		{
			unsigned short * DesktopAppMigration;
		};

	};

};

namespace BitmapHelpers
{
	long PremultiplyAlphaChannelWithCopyIfNecessary(ISharedBitmap *,ISharedBitmap * *);
	long PremultiplyAlphaChannelWithoutCopy(ISharedBitmap *);
	void FillWithSolidColor(HDC__ *,tagRECT const &,unsigned long);
};

class CAppEnumFilter
{
	static CAppEnumFilter::APPRESTRICTIONITEM const * const c_rgAppRestrictionItems;
public:
	static bool IsDefaultProgramsDisabled();
	static bool IsNoRunEnabled();
	static bool IsNoSetFoldersEnabled();
	virtual bool IsAppRestricted(unsigned int);
	virtual unsigned int GetRestrictionIndexForShortcut(_ITEMIDLIST_ABSOLUTE const *);
	virtual void RefreshRestrictionState();
};

struct CAppInfo
{
	virtual long GetPinnableShortcut(IShortcutInfo * *);
	virtual unsigned short const * GetAppID();
};

struct CAppInfoEnumerator
{
	virtual long Next(IAppInfo * *);
};

class CAppInstallHelper
{
	long _Begin(CAppInstallHelper::InstallStage,long);
	long _TryInstallApp(APPREADINESS_TASK_FLAGS);
public:
	virtual long OnBegin(IAppReadinessTask *);
	virtual long OnComplete(IAppReadinessTask *,long);
	virtual long OnProgress(IAppReadinessTask *);
};

class CAppResolver
{
	long GetShortcutPathOrAppIdFromPid(unsigned long,unsigned short *,unsigned int,int *,int *);
	long _CanPinAppImpl(IShellItem *,IShellLinkW *);
	long _CreatePropStoreForLauncherItem(IAppResolverDataLayer *,IShortcutInfo *,_GUID const &,void * *);
	long _CreateShortcutFromProperties(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,IShellItem * *);
	long _GetAppIDForShortcutImpl(IShellLinkW *,IShellItem *,unsigned short * *);
	long _GetBestAppIDForProcess(unsigned long,unsigned short const *,unsigned short * *);
	long _GetItemByAppPath(unsigned short const *,bool,_GUID const &,void * *);
	long _GetRelaunchPropertiesFromPropertyStore(IPropertyStore *,unsigned short * *,unsigned short * *,unsigned short * *,unsigned short * *,int *);
	long _WriteShortcut(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,IShellItem * *);
	static int s_SortShortcutsForBestShortcut(CCacheShortcut const *,CCacheShortcut const *,CCacheInstance *);
	static int s_fIsExplorerProcess;
public:
	virtual long ActivateDesktopTile(unsigned short const *);
	virtual long ActivateDesktopTileWithVerb(unsigned short const *,unsigned short const *);
	virtual long CanPinApp(IShellItem *);
	virtual long CanPinAppShortcut(IShellLinkW *,IShellItem *);
	virtual long EnumCachedItems(_ITEMIDLIST_ABSOLUTE const *,_GUID const &,void * *);
	virtual long EnumItems(START_MENU_APP_ITEMS_FLAGS,_GUID const &,void * *);
	virtual long GenerateShortcutFromItemProperties(IShellItem2 *,IShellItem * *);
	virtual long GenerateShortcutFromWindowProperties(HWND__ *,IShellItem * *);
	virtual long GetAppIDForProcess(unsigned long,unsigned short * *,int *,int *,int *);
	virtual long GetAppIDForShortcut(IShellItem *,unsigned short * *);
	virtual long GetAppIDForShortcutObject(IShellLinkW *,IShellItem *,unsigned short * *);
	virtual long GetAppIDForWindow(HWND__ *,unsigned short * *,int *,int *,int *);
	virtual long GetBestShortcutAndAppIDForAppPath(unsigned short const *,IShellItem * *,unsigned short * *);
	virtual long GetBestShortcutForAppID(unsigned short const *,IShellItem * *);
	virtual long GetDataLayerManager(IAppResolverDataLayerManager * *);
	virtual long GetFullListOfAppIDs(unsigned int *,unsigned short * * *);
	virtual long GetItem(START_MENU_APP_ITEMS_FLAGS,unsigned short const *,_GUID const &,void * *);
	virtual long GetItemByAppPath(unsigned short const *,_GUID const &,void * *);
	virtual long GetLauncherAppIDForItem(IShellItem *,unsigned short * *);
	virtual long GetRelaunchProperties(HWND__ *,unsigned short * *,unsigned short * *,unsigned short * *,unsigned short * *,int *);
	virtual long GetShortcutForAppID(unsigned short const *,IShellItem * *);
	virtual long GetShortcutForProcess(unsigned long,IShellItem * *);
	virtual long GetSqmableNamesForAppID(unsigned short const *,unsigned short * *,unsigned short * *);
	virtual long GetTileDataLayerTranslator(IWin32TileDataLayerTranslator * *);
	virtual long IsCacheMatchingLanguage(int *);
	virtual long OnChangeNotify(unsigned int,long,_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE const *);
	virtual long PauseNotifications();
	virtual long PromoteAppsToTopOfFrequentList(unsigned short const * *,unsigned int);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RefreshCache(START_MENU_REFRESH_CACHE_FLAGS);
	virtual long RegisterARNotify(IAppResolverNotify *);
	virtual long RegisterForNotifications();
	virtual long ReleaseGlobalCacheObject();
	virtual long ResumeNotifications();
	virtual long SetPinToStartOnDiscovery(unsigned short const *,unsigned short const *);
	virtual long UnregisterForNotifications();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CAppResolverCacheBuilder
{
	CCacheShortcut const * _NextFromCacheInDir(CCacheInstance *,CCacheRoot const *,CCacheDir const *);
	bool _IsExcludedDirectory(_ITEMIDLIST_ABSOLUTE const *,IShellFolder *,_ITEMID_CHILD const *,unsigned long);
	long _AddShortcutToCache(CCacheInstance const *,OFFSET<CCacheDir> *,ShortcutInfoRootType,unsigned short const *,IShellFolder *,_ITEMID_CHILD const *,CCacheShortcut const *);
	long _AddUserPinnedShortcutToStart(CCacheShortcut const *,void const * const);
	long _CopyRootFromPreviousCache(CCacheInstance *,IShellFolder *,CCacheRoot const *,OFFSET<CCacheDir> *,ShortcutInfoRootType);
	long _CreateAppInfoFromShortcuts(CDPAWeak<OFFSET<CCacheShortcut> > const &,int,int,OFFSET<CCacheAppInfo> *,OFFSET<CCacheShortcut> const * *);
	long _FindMatchingAppGetAppID(CCacheInstance const *,CCacheShortcut const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short * *);
	long _GetPhoneticForJapanese(unsigned short const *,unsigned short * *);
	long _Initialize(CAppResolverCacheManager *,int);
	long _PopulateCacheStructure(CCacheInstance const *,AR_CACHE_HEADER *);
	long _SaveAppInfosAndShortcuts(AR_CACHE_HEADER *);
	long _TransferShortcutToCache(CCacheInstance *,OFFSET<CCacheDir> *,ShortcutInfoRootType,CCacheShortcut const *);
	long _UpdateRoot(CCacheInstance *,IShellFolder *,ROOTSCANINFO const *,int);
	static int s_CompareShortcutByAppID(OFFSET<CCacheShortcut> const *,OFFSET<CCacheShortcut> const *,void const *);
	static int s_FolderEnumCallback(_ITEMID_CHILD *,CAppResolverCacheBuilder::ENUMFOLDERINFO *);
	static int s_IDListSortCallback(_ITEMID_CHILD const *,_ITEMID_CHILD const *,IShellFolder *);
	static int s_SortByAppIDCallback(OFFSET<CCacheShortcut> const *,OFFSET<CCacheShortcut> const *,void const *);
	void _Cleanup();
	void _FillFolderCache(CCacheInstance *,IShellFolder *,OFFSET<CCacheDir> *,CCacheRoot *,ROOTSCANINFO const *,unsigned short const *,int);
	void _MergeIntoFolderCache(CCacheInstance *,IShellFolder *,CCacheRoot *,OFFSET<CCacheDir> *,ShortcutInfoRootType,unsigned short const *,CDPA<_ITEMID_CHILD,CTContainer_PolicyUnOwned<_ITEMID_CHILD> > *);
	void _SetDerivedAttributes(CCacheShortcut *,void const * const,_ITEMIDLIST_ABSOLUTE const *,ShortcutInfoRootType);
public:
	long ScanFoldersAndCreateNewCache(CAppResolverCacheManager *,unsigned int,ROOTSCANINFO const *,START_MENU_REFRESH_CACHE_FLAGS);
};

class CAppResolverCacheManager
{
	long _EnsureRegisteredForDiskNotifications();
	long _GeneratePinToStartOnDiscoveryKey(unsigned short const *,unsigned short const *,unsigned short * *);
	long _InitializeMemoryMappedCache();
	long _PauseResumeDiskNotifications(bool);
	static CAppResolverCacheManager::ROOTFOLDERINFO const * const c_rgrfi;
	static int _s_UANotifyCB(void *,_GUID const *,unsigned short const *,tagUAEVENT);
	void _UnregisterNotifyAll();
public:
	CAppResolverCacheManager();
	CCacheInstance * GetCacheInstance();
	long GetAppUsageReconciler(IAppUsageReconciler * *);
	long GetNewCache(_GUID const &,IMemoryMappedCache * *,IMemoryMappedHeap * *);
	long GetTDLReconciler(ITileDataLayerAppResolverReconciler * *);
	long Initialize();
	long PromoteAppsToTopOfFrequentList(unsigned short const * *,unsigned int);
	long RefreshCache(START_MENU_REFRESH_CACHE_FLAGS);
	long UpdateCache(START_MENU_REFRESH_CACHE_FLAGS);
	static long GenerateAppIDWorker(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short * *);
	virtual long CanPinUserPinnedItem(unsigned short const *,unsigned short const *);
	virtual long GetDataLayerInstance(IAppResolverDataLayer * *);
	virtual long GetEnumFilter(IAppResolverEnumFilter * *);
	virtual ~CAppResolverCacheManager();
	void OnChangeNotify(unsigned int,long,_ITEMIDLIST_ABSOLUTE const *,_ITEMIDLIST_ABSOLUTE const *);
	void OnItemRelevanceChanged(unsigned short const *);
	void OnJumpListChangeNotify(unsigned short const *);
	void OnRelevanceChanged();
	void RegisterShortcutHotKeys();
};

struct CAppResolverDataLayer
{
	virtual long FindLauncherShortcutForAppID(unsigned short const *,IShortcutInfo * *);
	virtual long FindMatchingShortcut(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,FIND_MATCHING_SHORTCUT_OPTIONS);
	virtual long GetAppInfoEnumerator(IAppInfoEnumerator * *);
	virtual long GetAppInforForAppID(unsigned short const *,IAppInfo * *);
	virtual long GetCacheInstanceRevision(__int64 *);
	virtual long GetShortcutForAppPath(unsigned short const *,IShortcutInfo * *);
	virtual long GetShortcutInfoEnumerator(ShortcutInfoRootType,IShortcutInfoEnumerator * *);
};

class CAppResolverExclusionFilter
{
	bool _IsExcludedExe(unsigned short const *,bool);
	long _InitExcludedDirectories();
	static long s_AppendString(CDPALocalMem<unsigned short> *,unsigned short const *);
	static long s_InitStringList(HKEY__ *,unsigned short const *,CDPALocalMem<unsigned short> *);
public:
	virtual IAppResolverExclusionFilter::ExeExclusionType CheckExeExclusion(unsigned short const *,bool);
	virtual bool IsAppIDBlockedFromTaskbarPinning(unsigned short const *);
	virtual bool IsExcludedDirectory(unsigned short const *);
};

struct CAppResolverFactory
{
	virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
};

struct CAppResolverHelpers
{
	virtual long GenerateAppID(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short * *);
	virtual long GetAppPathFromLink(IShellLinkW *,IShellItem *,unsigned long,unsigned short * *,unsigned short * *,unsigned long *);
};

class CAppResolverLinkParse
{
	long _InitDesktopTileColorFromShellItem(IShellItem *);
	static long _GetStringProperty(IPropertyStore *,_tagpropertykey const &,unsigned short * *);
	static long _GetTargetPath(IShellLinkW *,unsigned long,unsigned short * *,unsigned long *);
	static long _GetThumbnailCacheID(IShellItem *,unsigned __int64 *);
	static long _GetVisualElementProperties(unsigned short const *,unsigned short const *,IPropertyStore * *);
public:
	CAppResolverLinkParse();
	long InitShortcutDataFromLink(IShellLinkW *,IShellItem *);
	long InitTargetInfoFromLink(IShellLinkW *,IShellItem *,bool);
	static long ExpandPath(unsigned short const *,unsigned short * *);
	static long GetAppPathFromLink(IShellLinkW *,IShellItem *,unsigned long,unsigned short * *,unsigned short * *,unsigned long *);
	static long GetInstallPathFromDarwinID(unsigned short const *,unsigned short * *);
	~CAppResolverLinkParse();
};

class CAppResolverNotifyWnd
{
	struct RegisterArgs
	{
		static long Create(unsigned int,_ITEMIDLIST_ABSOLUTE const *,bool,RegisterArgs * *);
	};

	__int64 _WndProc(unsigned int,unsigned __int64,__int64);
	long _OnAssocChangeNotify(void *,unsigned long);
	long _RegisterDiskEventNotification(CAppResolverNotifyWnd::RegisterArgs *);
	static __int64 s_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
public:
	long RegisterDiskEventNotification(_ITEMIDLIST_ABSOLUTE const *,bool,unsigned int *);
	long ScheduleDelayedRefreshCache(START_MENU_REFRESH_CACHE_FLAGS,unsigned long);
	void Destroy();
	~CAppResolverNotifyWnd();
};

class CAppShellFolderBase<CAppsFolderItemIDFactory,3>
{
protected:
	long _AssocCreateItem(_ITEMID_CHILD const *,_GUID const &,void * *);
	long _CompareIDsCanonical(_ITEMID_CHILD const *,_ITEMID_CHILD const *);
	long _CreateViewObject(IShellFolder *,void * *);
	long _GetItemStringProperty(_ITEMID_CHILD const *,_tagpropertykey const &,unsigned short * *);
};

class CAppsFolder
{
	long _CreateChildItemID(unsigned short const *,APPITEM_MODE,_ITEMID_CHILD * *);
	long _CreateSimpleItemID(unsigned short const *,unsigned short const *,_ITEMID_CHILD * *);
	long _EnsureAppResolver();
	long _GetItemMode(_ITEMIDLIST_RELATIVE const *,APPITEM_MODE *);
	long _GetThumbnailAndIconExtractor(_ITEMID_CHILD const *,IBindCtx *,_GUID const &,void * *);
	static long _CreatePropertyStoreForThumbnailCacheId(IPropertyStore *,IPropertyStore * *);
public:
	CAppsFolder();
	long CreateChildItemID(IPropertyStore *,APPITEM_MODE,_ITEMID_CHILD * *);
	long CreateMergedPropertyStore(_ITEMID_CHILD const *,APPS_PROPSTORE_TYPE,_GUID const &,void * *);
	long GetStartMenuAppItemsEnumerator(IEnumObjects * *);
	virtual long BindToObject(_ITEMIDLIST_RELATIVE const *,IBindCtx *,_GUID const &,void * *);
	virtual long BindToStorage(_ITEMIDLIST_RELATIVE const *,IBindCtx *,_GUID const &,void * *);
	virtual long CompareIDs(__int64,_ITEMIDLIST_RELATIVE const *,_ITEMIDLIST_RELATIVE const *);
	virtual long CreateViewObject(HWND__ *,_GUID const &,void * *);
	virtual long EnumObjects(HWND__ *,unsigned long,IEnumIDList * *);
	virtual long EnumSearches(IEnumExtraSearch * *);
	virtual long GetAttributesOf(unsigned int,_ITEMID_CHILD const * const *,unsigned long *);
	virtual long GetClassID(_GUID *);
	virtual long GetCurFolder(_ITEMIDLIST_ABSOLUTE * *);
	virtual long GetDefaultColumn(unsigned long,unsigned long *,unsigned long *);
	virtual long GetDefaultColumnState(unsigned int,unsigned long *);
	virtual long GetDefaultSearchGUID(_GUID *);
	virtual long GetDetailsEx(_ITEMID_CHILD const *,_tagpropertykey const *,tagVARIANT *);
	virtual long GetDetailsOf(_ITEMID_CHILD const *,unsigned int,_SHELLDETAILS *);
	virtual long GetDisplayNameOf(_ITEMID_CHILD const *,unsigned long,_STRRET *);
	virtual long GetExpansionProperties(IPropertyKeyStore * *);
	virtual long GetRealLocations(IShellItemArray * *);
	virtual long GetScopeAndSubQueries(SCOPE_ITEM_DEPTH,SCOPE_ITEM_FLAGS,IScope * *,IShellItemArray * *);
	virtual long GetSearchRoot(IShellItem * *);
	virtual long GetThumbnailHandler(_ITEMID_CHILD const *,IBindCtx *,_GUID const &,void * *);
	virtual long GetUIObjectOf(HWND__ *,unsigned int,_ITEMID_CHILD const * const *,_GUID const &,unsigned int *,void * *);
	virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *);
	virtual long MapColumnToSCID(unsigned int,_tagpropertykey *);
	virtual long ParseDisplayName(HWND__ *,IBindCtx *,unsigned short *,unsigned long *,_ITEMIDLIST_RELATIVE * *,unsigned long *);
	virtual long RemoveBackReferences();
	virtual long SetNameOf(HWND__ *,_ITEMID_CHILD const *,unsigned short const *,unsigned long,_ITEMID_CHILD * *);
	virtual long SetWrapperFolderWeakReference(IShellFolder2 *);
	virtual long Update(IBindCtx *,_ITEMID_CHILD const *,_ITEMID_CHILD * *);
};

struct CAppsFolderEnumIDList
{
	virtual long Clone(IEnumIDList * *);
	virtual long Next(unsigned long,_ITEMID_CHILD * *,unsigned long *);
	virtual long Reset();
	virtual long Skip(unsigned long);
};

struct CAppsFolderPropertyStoreFactory
{
	CAppsFolderPropertyStoreFactory(CAppsFolder *,_ITEMID_CHILD const *,long *);
	virtual long GetPropertyStore(GETPROPERTYSTOREFLAGS,IUnknown *,_GUID const &,void * *);
	virtual long GetPropertyStoreForKeys(_tagpropertykey const *,unsigned int,GETPROPERTYSTOREFLAGS,_GUID const &,void * *);
};

struct CAppsFolderThumbnailProvider
{
	virtual long Extract(HBITMAP__ * *);
	virtual long Extract(unsigned short const *,unsigned int,HICON__ * *,HICON__ * *,unsigned int);
	virtual long GetIconLocation(unsigned int,unsigned short *,unsigned int,int *,unsigned int *);
	virtual long GetLocation(unsigned short *,unsigned long,unsigned long *,tagSIZE const *,unsigned long,unsigned long *);
	virtual long GetThumbnail(unsigned int,HBITMAP__ * *,WTS_ALPHATYPE *);
	virtual long Initialize(IShellItem *,unsigned long);
};

class CAppsFolderVerbExecute
{
	long _DoOpenFileLocation();
	long _GetItemAt(unsigned long,IShellItem2 * *,unsigned long *,_ITEMIDLIST_ABSOLUTE * *,unsigned short * *);
	static CAppsFolderVerbExecute::VERB_ENUM_MAP const * const s_rgVerbStringMap;
public:
	virtual long Execute();
	virtual long GetSelection(_GUID const &,void * *);
	virtual long Initialize(unsigned short const *,IPropertyBag *);
	virtual long SetDirectory(unsigned short const *);
	virtual long SetKeyState(unsigned long);
	virtual long SetNoShowUI(int);
	virtual long SetParameters(unsigned short const *);
	virtual long SetPosition(tagPOINT);
	virtual long SetSelection(IShellItemArray *);
	virtual long SetShowWindow(int);
};

class CCacheAppInfo
{
	CCacheShortcut const * _GetBestShortcut(void const *,OFFSET<CCacheShortcut> const * *,CCacheAppInfo::GetBestShortcutType);
};

class CCacheInstance
{
	long _ValidateCacheObject();
	long _ValidateSignatureOfCacheItems();
	long _VerifyCacheAndSetHeader();
public:
	CCacheAppInfo const * GetAppByIndex(int);
	CCacheRoot const * FindRoot(_ITEMIDLIST_ABSOLUTE const *);
	CCacheShortcut const * FindLauncherShortcutForAppID(unsigned short const *);
	CCacheShortcut const * FindMatchingShortcut(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,FIND_MATCHING_SHORTCUT_OPTIONS);
	CCacheShortcut const * GetLauncherShortcutByIndex(int);
	CCacheShortcut const * GetShortcutByIndex(int);
	long GetLatestCache(IMemoryMappedCacheMgr *,CCacheInstance * *);
	long Release();
	long ValidateCache(bool);
};

struct CCacheShortcut
{
	long CopyFromAnotherInstance(CCacheShortcut const *,void const *,IMemoryMappedHeap *,OFFSET<CCacheDir> *);
	long PopulatePropertyStore(void const *,IPropertyStore *);
	long TransferLinkData(IMemoryMappedHeap *,SHORTCUT_DATA const *,_ITEMID_CHILD const *);
	long Validate(unsigned long,AR_CACHE_HEADER const *);
};

struct CCacheTile
{
	long CopyFromAnotherInstance(CCacheTile const *,void const *,IMemoryMappedHeap *);
	long PopulateLogoProperties(void const *,IPropertyStore *);
	long PopulatePropertyStore(void const *,IPropertyStore *);
	long TransferTileData(TILE_DATA *,IMemoryMappedHeap *);
};

struct CCoSimpleArray<IUnknown *,4294967294,CSimpleArrayStandardCompareHelper<IUnknown *> >
{
	~CCoSimpleArray<IUnknown *,4294967294,CSimpleArrayStandardCompareHelper<IUnknown *> >();
};

struct CCoTaskMemPtr<_ITEMIDLIST_ABSOLUTE>
{
	~CCoTaskMemPtr<_ITEMIDLIST_ABSOLUTE>();
};

struct CCoTaskMemPtr<_ITEMID_CHILD>
{
	~CCoTaskMemPtr<_ITEMID_CHILD>();
};

struct CCoTaskMemPtr<unsigned short>
{
	CCoTaskMemPtr<unsigned short>();
	~CCoTaskMemPtr<unsigned short>();
};

struct CComPropVariant
{
	~CComPropVariant();
};

struct CDPA<CCacheShortcut const ,CTContainer_PolicyUnOwned<CCacheShortcut const > >
{
	~CDPA<CCacheShortcut const ,CTContainer_PolicyUnOwned<CCacheShortcut const > >();
};

struct CDPA<_ITEMID_CHILD,CTContainer_PolicyUnOwned<_ITEMID_CHILD> >
{
	~CDPA<_ITEMID_CHILD,CTContainer_PolicyUnOwned<_ITEMID_CHILD> >();
};

struct CDPALocalMem<unsigned short>
{
	~CDPALocalMem<unsigned short>();
};

struct CDPAWeak<OFFSET<CCacheShortcut> >
{
	~CDPAWeak<OFFSET<CCacheShortcut> >();
};

class CDPA_Base<CCacheShortcut const ,CTContainer_PolicyUnOwned<CCacheShortcut const > >
{
	static int _StandardDestroyCB(CCacheShortcut const *,void *);
};

class CDPA_Base<OFFSET<CCacheShortcut>,CTContainer_PolicyUnOwned<OFFSET<CCacheShortcut> > >
{
	static int _StandardDestroyCB(OFFSET<CCacheShortcut> *,void *);
};

class CDPA_Base<_ITEMID_CHILD,CTContainer_PolicyUnOwned<_ITEMID_CHILD> >
{
	static int _StandardDestroyCB(_ITEMID_CHILD *,void *);
};

class CDPA_Base<unsigned short,CTContainer_PolicyLocalMem>
{
	static int _StandardDestroyCB(unsigned short *,void *);
};

struct CDarwinAd
{
	void CheckInstalled();
};

struct CDefaultUILangugageCache
{
	long GetCachedDefaultUILanguage(unsigned short * *);
};

struct CDesktopOpenExecute
{
	virtual long Execute();
	virtual long SetDirectory(unsigned short const *);
	virtual long SetKeyState(unsigned long);
	virtual long SetNoShowUI(int);
	virtual long SetParameters(unsigned short const *);
	virtual long SetPosition(tagPOINT);
	virtual long SetShowWindow(int);
};

struct CDisplayInfo
{
	virtual long PopulateLogoProperties(IPropertyStore *);
	virtual unsigned int GetBackgroundColor();
	virtual unsigned int GetForegroundColor();
	virtual unsigned int GetTileFlags();
	virtual unsigned short const * GetLogoPath();
	virtual unsigned short const * GetPackageInstallPath();
	virtual unsigned short const * GetTinyLogoPath();
};

struct CDualModeAppOpen
{
	CDualModeAppOpen();
	virtual long BeforeExecute(IExecuteCommand *);
	virtual long Execute();
	virtual long GetMonitor(HMONITOR__ * *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
};

struct CDummyUnknown
{
	virtual long ContextSensitiveHelp(int);
	virtual long GetClassID(_GUID *);
	virtual long GetMode(FOLDER_ENUM_MODE *);
	virtual long GetWindow(HWND__ * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetMode(FOLDER_ENUM_MODE);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CEnumerableObjectCollection
{
protected:
	long Clone(_GUID const &,void * *);
public:
	static long CreateInstance(int,_GUID const &,void * *);
	virtual long AddFromArray(IObjectArray *);
	virtual long AddObject(IUnknown *);
	virtual long Clear();
	virtual long Clone(IEnumObjects * *);
	virtual long Clone(IEnumUnknown * *);
	virtual long GetAt(unsigned int,_GUID const &,void * *);
	virtual long GetCount(unsigned int *);
	virtual long Next(unsigned long,IUnknown * *,unsigned long *);
	virtual long Next(unsigned long,_GUID const &,void * *,unsigned long *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RemoveObjectAt(unsigned int);
	virtual long Reset();
	virtual long Skip(unsigned long);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CExecuteItem
{
	CExecuteItem(IShellItem *);
	long Execute();
	void SetSite(IUnknown *);
	~CExecuteItem();
};

struct CFileSysBindData
{
	virtual long GetFileID(_LARGE_INTEGER *);
	virtual long GetFindData(_WIN32_FIND_DATAW *);
	virtual long GetJunctionCLSID(_GUID *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetFileID(_LARGE_INTEGER);
	virtual long SetFindData(_WIN32_FIND_DATAW const *);
	virtual long SetJunctionCLSID(_GUID const &);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CImmersiveAppOpenExecute
{
	CImmersiveAppOpenExecute();
	virtual long Execute();
	virtual long Initialize(IPropertyStore *);
};

class CImmersiveOpenBase
{
protected:
	long _GetLaunchAppIDAndArguments(CPropertyStoreHelper &,unsigned short * *,unsigned short * *,unsigned short * *,bool *);
	static long s_LaunchImmersiveApp(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,IUnknown *,tagPOINT,ACTIVATEOPTIONSINTERNAL);
public:
	virtual long GetSelection(_GUID const &,void * *);
	virtual long GetValue(AHE_TYPE *);
	virtual long Initialize(unsigned short const *,IPropertyBag *);
	virtual long SetDirectory(unsigned short const *);
	virtual long SetKeyState(unsigned long);
	virtual long SetNoShowUI(int);
	virtual long SetParameters(unsigned short const *);
	virtual long SetPosition(tagPOINT);
	virtual long SetSelection(IShellItemArray *);
	virtual long SetShowWindow(int);
};

class CImmersiveShellComponent
{
protected:
	virtual long v_PublishServices(IServiceProvider *,IProfferService *);
	virtual long v_QueryService(_GUID const &,_GUID const &,void * *);
	virtual long v_ShutdownServices(IProfferService *);
public:
	virtual long PerformDelayedInitialization();
	virtual long PublishServices(IServiceProvider *,IProfferService *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long ShutdownServices(IProfferService *);
	virtual long SubscribeToServices(IServiceProvider *);
	virtual long UnsubscribeFromServices(IServiceProvider *);
};

class CImmersiveShellComponentWithSite
{
protected:
	virtual long v_DelegatingQueryService(_GUID const &,_GUID const &,void * *);
public:
	virtual ~CImmersiveShellComponentWithSite();
};

struct CItemIDFactory<APPITEM,1397772353>
{
	static long GetPropertyFromIDList(_ITEMIDLIST_RELATIVE const *,_tagpropertykey const &,tagPROPVARIANT *);
	static long GetPropertyStorageFromIDList(_ITEMIDLIST_RELATIVE const *,_GUID const &,void * *);
	virtual long SetItemAlloc(IMalloc *);
};

struct CLauncherTelemetry
{
	static wil::ActivityThreadWatcher WatchCurrentThread(char const *);
};

struct CLauncherUIMode
{
	virtual long GetDesktopSwitchPreference(IAM_DESKTOP_SWITCH_OPTION *);
	virtual long GetMonitor(HMONITOR__ * *);
	virtual long GetMonitorPreference(ACTIVATION_MONITOR_PREFERENCE *);
	virtual long GetPlaceModeOption(PLACE_MODE_OPTION *);
	virtual long GetRevertLayoutOption(REVERT_LAYOUT_OPTION *,HWND__ * *);
	virtual long GetSwitchAppFlags(SWITCH_APP_FLAGS *);
	virtual long GetUIMode(EC_HOST_UI_MODE *);
	virtual long QueryService(_GUID const &,_GUID const &,void * *);
	virtual long ShouldShowDownloadUI();
	virtual long ShouldSwitchToDesktop();
	virtual long ShouldWakeOnRPCCalls();
};

class CLocalImageLoader
{
	static bool s_FileIsPreviewTileAsset(unsigned short const *);
	static long s_ValidateFileContents(unsigned short const *,tagSIZE,bool,tagSIZE *,_GUID *);
	static long s_ValidateFileSize(unsigned short const *,unsigned int *);
	static long s_ValidateFilename(unsigned short const *);
public:
	static long s_LoadLocalImage(unsigned short const *,tagSIZE,TILE_IMAGE_LOAD_OPTIONS,ISharedBitmap * *);
};

class CMarshaledInterface
{
	long _Unmarshal(_GUID const &,void * *,bool);
public:
	long Marshal(_GUID const &,IUnknown *,MARSHAL_KIND);
	~CMarshaledInterface();
};

struct CMemString<CMemString_PolicyCoTaskMem>
{
	~CMemString<CMemString_PolicyCoTaskMem>();
};

struct CPinToStartService
{
	long RuntimeClassInitialize();
	virtual long SetPinToStartOnDiscovery(unsigned short const *,unsigned short const *);
};

struct CPropVariant
{
	~CPropVariant();
};

struct CPropertyStoreHelper
{
	CPropertyStoreHelper(IPropertyStore *);
	~CPropertyStoreHelper();
};

struct CPropertyStoreHelperBase<IPropertyStore>
{
	long GetAsIDList<_tagpropertykey>(_tagpropertykey,_ITEMIDLIST_ABSOLUTE * *);
	long GetAsShellItem<_tagpropertykey>(_tagpropertykey,_GUID const &,void * *);
	long GetAsString<_tagpropertykey>(_tagpropertykey,unsigned short * *);
	long GetAsUInt32WithDefault<_tagpropertykey>(_tagpropertykey,unsigned long,unsigned long *);
	long GetString<_tagpropertykey>(_tagpropertykey,unsigned short * *);
	long GetUInt32<_tagpropertykey>(_tagpropertykey,unsigned long *);
	long InitFromItem(IUnknown *,GETPROPERTYSTOREFLAGS,_tagpropertykey const *,unsigned int);
	~CPropertyStoreHelperBase<IPropertyStore>();
};

struct CRefCountedObject<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short> > >
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CReleasePtr<CCacheInstance>
{
	~CReleasePtr<CCacheInstance>();
};

struct CShortcutInfo
{
	virtual _GUID GetToastActivatorCLSID();
	virtual _ITEMIDLIST_ABSOLUTE * CreateFullIDList();
	virtual bool IsEligibleForRecentlyAddedList();
	virtual bool IsExcludedFromAppEnumeration();
	virtual bool IsFolder();
	virtual bool IsInLauncher();
	virtual bool IsPinnable();
	virtual bool IsUserPinned();
	virtual long GetDisplayInfo(IDisplayInfo * *);
	virtual long PopulatePropertyStore(IPropertyStore *);
	virtual unsigned __int64 GetThumbnailCacheID();
	virtual unsigned int GetRestrictionIndex();
	virtual unsigned short const * GetAppID();
	virtual unsigned short const * GetAppPath();
	virtual unsigned short const * GetAppPathEncoded();
	virtual unsigned short const * GetArguments();
	virtual unsigned short const * GetDisplayName();
	virtual unsigned short const * GetSortName();
	virtual unsigned short const * GetSuiteName();
	virtual unsigned short const * GetSuiteSortName();
};

struct CShortcutInfoEnumerator
{
	virtual long Next(IShortcutInfo * *);
};

struct CSimpleHashTable<unsigned long,Microsoft::WRL::ComPtr<ITilePropertyInfo>,CDefaultHashPolicy<unsigned long>,CDefaultKeyCompare<unsigned long>,CDefaultResizePolicy,CDefaultRehashPolicy>
{
	struct HashBucket
	{
		~HashBucket();
	};

	~CSimpleHashTable<unsigned long,Microsoft::WRL::ComPtr<ITilePropertyInfo>,CDefaultHashPolicy<unsigned long>,CDefaultKeyCompare<unsigned long>,CDefaultResizePolicy,CDefaultRehashPolicy>();
};

struct CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>
{
	~CSimpleHashTable<unsigned short const *,Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>();
};

class CSimpleHashTable<unsigned short const *,bool,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>
{
	long _RehashTable(unsigned int);
	static CSimpleHashTable<unsigned short const *,bool,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::HashBucket & s_LookupEntry(CSimpleHashTable<unsigned short const *,bool,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::HashBucket *,unsigned int,unsigned short const * const &);
};

struct CSimplePointerArray<IUnknown,CTContainer_PolicyRelease<IUnknown>,CSimpleArrayStandardCompareHelper<IUnknown *> >
{
	~CSimplePointerArray<IUnknown,CTContainer_PolicyRelease<IUnknown>,CSimpleArrayStandardCompareHelper<IUnknown *> >();
};

struct CSimplePointerArrayCoTaskMem<unsigned short,CSimpleArrayStandardCompareHelper<unsigned short *> >
{
	~CSimplePointerArrayCoTaskMem<unsigned short,CSimpleArrayStandardCompareHelper<unsigned short *> >();
};

struct CStartMenuFolderViewCB
{
	virtual long GetColumnPropertyList(_GUID const &,void * *);
	virtual long GetFolderFlags(FOLDERFLAGS *,FOLDERFLAGS *);
	virtual long GetGroupByProperty(_tagpropertykey *,int *);
	virtual long GetGroupSubsetCount(unsigned int *);
	virtual long GetIconSize(unsigned int *);
	virtual long GetSortColumns(SORTCOLUMN *,unsigned int,unsigned int *);
	virtual long GetViewMode(FOLDERLOGICALVIEWMODE *);
	virtual long MessageSFVCB(unsigned int,unsigned __int64,__int64);
};

struct CStringHashTable<Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare>
{
	void RemoveAll();
	~CStringHashTable<Microsoft::WRL::ComPtr<IStream>,CStringHashPolicy,CStringCompare>();
};

struct CStringHashTable<bool,CStringHashPolicy,CStringCompare>
{
	long AddItem(unsigned short const * const &,bool const &);
	~CStringHashTable<bool,CStringHashPolicy,CStringCompare>();
};

struct CStringHashTable<int,CStringHashPolicy,CStringCompare>
{
	~CStringHashTable<int,CStringHashPolicy,CStringCompare>();
};

struct CSystemSettingsOpenExecute
{
	CSystemSettingsOpenExecute();
	virtual long Execute();
};

struct CTCoAllocPolicy
{
	static long Alloc(void *,unsigned long,unsigned __int64,void * *);
	static long Realloc(void *,unsigned long,void *,unsigned __int64,void * *);
};

struct CTSimpleArray<ActivityTracker::SortingData,4294967294,CTPolicyCoTaskMem<ActivityTracker::SortingData>,CSimpleArrayStandardCompareHelper<ActivityTracker::SortingData>,CSimpleArrayStandardMergeHelper<ActivityTracker::SortingData> >
{
	long Add(ActivityTracker::SortingData const &,unsigned __int64 *);
	void _MergeSort<ActivityTracker::CSortingDataCompare>(ActivityTracker::CSortingDataCompare const &,unsigned __int64,unsigned __int64);
	void _MergeThem<ActivityTracker::CSortingDataCompare>(ActivityTracker::CSortingDataCompare const &,unsigned __int64,unsigned __int64);
};

struct CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *> >
{
	long EnsureCapacity(unsigned __int64);
};

struct CTSmartObj<CCacheInstance *,CTSmartPtr_PolicyComplete<CTContainer_PolicyRelease<CCacheInstance> > >
{
	~CTSmartObj<CCacheInstance *,CTSmartPtr_PolicyComplete<CTContainer_PolicyRelease<CCacheInstance> > >();
};

struct CTSmartPtr<CCacheInstance,CTContainer_PolicyRelease<CCacheInstance> >
{
	~CTSmartPtr<CCacheInstance,CTContainer_PolicyRelease<CCacheInstance> >();
};

struct CThreadRefTaker
{
	virtual ~CThreadRefTaker();
};

struct CThumbnailAndIconExtractorClassic
{
	virtual long ExtractIconW(CPropertyStoreHelper const &,unsigned short const *,unsigned int,HICON__ * *,HICON__ * *,unsigned int,unsigned int);
	virtual long GetIconLocation(CPropertyStoreHelper const &,unsigned int,unsigned short *,unsigned int,int *,unsigned int *);
	virtual long GetThumbnail(CPropertyStoreHelper const &,unsigned int,HBITMAP__ * *);
};

class CThumbnailAndIconExtractorImmersive
{
	long _LoadIcon(CPropertyStoreHelper const &,unsigned short const *,unsigned int,HICON__ * *);
public:
	virtual long ExtractIconW(CPropertyStoreHelper const &,unsigned short const *,unsigned int,HICON__ * *,HICON__ * *,unsigned int,unsigned int);
	virtual long GetIconLocation(CPropertyStoreHelper const &,unsigned int,unsigned short *,unsigned int,int *,unsigned int *);
	virtual long GetThumbnail(CPropertyStoreHelper const &,unsigned int,HBITMAP__ * *);
};

struct CWRLObjectWithGITSite
{
	virtual long GetSite(_GUID const &,void * *);
	virtual long SetSite(IUnknown *);
};

struct CWRLObjectWithSite
{
	virtual long GetSite(_GUID const &,void * *);
	virtual long SetSite(IUnknown *);
};

struct CXMLDOMNode
{
	CXMLDOMNode selectNode(unsigned short const *,int);
	IXMLDOMNode * operator=(IXMLDOMNode *);
	long CreateFromFile(unsigned short const *,_GUID const &);
	long CreateFromStream(IStream *,_GUID const &);
	long getStringAttribute(unsigned short const *,unsigned short * *);
	~CXMLDOMNode();
};

namespace CallerIdentity
{
	long GetCallingProcessHandle(unsigned long,RUNTIMEBROKER_CALLERIDENTITY_CHECK,void * *);
	long GetProcessAppId(void *,unsigned short * *);
};

class DIBVEManifestParser
{
	long _CreateSchemaCollection(IXMLDOMSchemaCollection * *);
	long _TransformDocumentIfNecessary(IXMLDOMDocument *,IXMLDOMDocument * *);
	long _ValidateAllOrNothingAttributes(CXMLDOMNode *);
	long _ValidateDocument(IXMLDOMDocument *);
	static DIBVEManifestParser::MAINFESTPROPERTIES_ALLORNOTHING const * const s_rgAllOrNothingDesktopTiles;
public:
	long Parse(unsigned short const *,IPropertyStore *);
	~DIBVEManifestParser();
};

namespace DataStoreCache
{
	long TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri(HSTRING__ *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	unsigned short const * const c_msResourceUriScheme;
};

class DesktopAppRankProvider
{
	void GetUaInfo(unsigned short const *,tagUEMINFO &);
public:
	virtual long GetGranularUsageData(unsigned short const *,_FILETIME *,unsigned int *,unsigned int *,unsigned long *);
	virtual long GetRankForApp(unsigned short const *,unsigned int *);
	virtual long SetGranularUsageData(unsigned short const *,unsigned int,unsigned int,unsigned long);
};

class GlobalInterfaceTable
{
	static IGlobalInterfaceTable * s_pGlobalInterfaceTable;
	static long s_Retrieve();
};

namespace LauncherPolicy
{
	bool IsLauncherCustomizationDisabledPolicySet();
	bool IsLayoutOverrideGroupCustomizationDisabledPropertySet();
	bool IsStartLayoutPolicyManagerSet(PMPolicyRequestedDataFlags);
};

namespace MRTUtils
{
	long MsAppxUriToFilePath(unsigned short const *,IResourceMap *,PACKAGE_INFO *,unsigned short * *);
	long ProcessMRTFilePath(IMrtResourceManager *,unsigned short const *,DEVICE_SCALE_FACTOR *,TILE_DUI_TEMPLATE const *,TILE_THEME_SELECTOR *,unsigned short const *,unsigned short const *,unsigned short * *,bool *);
	unsigned short const * FindNonMRTImageSubstring(unsigned short const *);
};

namespace Microsoft
{
	namespace WRL
	{
		struct ClassFactory<Details::Nil,Details::Nil,Details::Nil,0>
		{
			virtual long LockServer(int);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct ComPtr<CAppInfoEnumerator>
		{
			~ComPtr<CAppInfoEnumerator>();
		};

		struct ComPtr<CAppInstallHelper>
		{
			~ComPtr<CAppInstallHelper>();
		};

		struct ComPtr<CAppResolverDataLayer>
		{
			~ComPtr<CAppResolverDataLayer>();
		};

		struct ComPtr<CAppsFolderEnumIDList>
		{
			~ComPtr<CAppsFolderEnumIDList>();
		};

		struct ComPtr<CAppsFolderThumbnailProvider>
		{
			~ComPtr<CAppsFolderThumbnailProvider>();
		};

		struct ComPtr<CLauncherUIMode>
		{
			~ComPtr<CLauncherUIMode>();
		};

		struct ComPtr<CMarshaledInterface::CMarshalStream>
		{
			~ComPtr<CMarshaledInterface::CMarshalStream>();
		};

		struct ComPtr<CPinToStartService>
		{
			~ComPtr<CPinToStartService>();
		};

		struct ComPtr<CShortcutInfoEnumerator>
		{
			~ComPtr<CShortcutInfoEnumerator>();
		};

		struct ComPtr<IActivationStoreHelper>
		{
			~ComPtr<IActivationStoreHelper>();
		};

		struct ComPtr<IActivityTracker>
		{
			~ComPtr<IActivityTracker>();
		};

		struct ComPtr<IAgileObject>
		{
			~ComPtr<IAgileObject>();
		};

		struct ComPtr<IAgileReference>
		{
			~ComPtr<IAgileReference>();
		};

		struct ComPtr<IAppInfo>
		{
			~ComPtr<IAppInfo>();
		};

		struct ComPtr<IAppInfoEnumerator>
		{
			~ComPtr<IAppInfoEnumerator>();
		};

		struct ComPtr<IAppReadinessService>
		{
			~ComPtr<IAppReadinessService>();
		};

		struct ComPtr<IAppReadinessTask>
		{
			~ComPtr<IAppReadinessTask>();
		};

		struct ComPtr<IAppResolverDataLayer>
		{
			~ComPtr<IAppResolverDataLayer>();
		};

		struct ComPtr<IAppResolverDataLayerManager>
		{
			~ComPtr<IAppResolverDataLayerManager>();
		};

		struct ComPtr<IAppResolverEnumFilter>
		{
			~ComPtr<IAppResolverEnumFilter>();
		};

		struct ComPtr<IAppResolverExclusionFilter>
		{
			~ComPtr<IAppResolverExclusionFilter>();
		};

		struct ComPtr<IAppResolverPinToStart>
		{
			~ComPtr<IAppResolverPinToStart>();
		};

		struct ComPtr<IAppUsageEventSink>
		{
			~ComPtr<IAppUsageEventSink>();
		};

		struct ComPtr<IAppUsagePromotion>
		{
			~ComPtr<IAppUsagePromotion>();
		};

		struct ComPtr<IAppUsageProvider>
		{
			ComPtr<IAppUsageProvider> & operator=(IAppUsageProvider *);
			~ComPtr<IAppUsageProvider>();
		};

		struct ComPtr<IApplicationResolver2>
		{
			~ComPtr<IApplicationResolver2>();
		};

		struct ComPtr<IBindCtx>
		{
			~ComPtr<IBindCtx>();
		};

		struct ComPtr<IDispatch>
		{
			~ComPtr<IDispatch>();
		};

		struct ComPtr<IEnumFullIDList>
		{
			~ComPtr<IEnumFullIDList>();
		};

		struct ComPtr<IEnumIDList>
		{
			~ComPtr<IEnumIDList>();
		};

		struct ComPtr<IEnumObjects>
		{
			~ComPtr<IEnumObjects>();
		};

		struct ComPtr<IExecuteCommandApplicationHostEnvironment>
		{
			~ComPtr<IExecuteCommandApplicationHostEnvironment>();
		};

		struct ComPtr<IExtractIconW>
		{
			~ComPtr<IExtractIconW>();
		};

		struct ComPtr<IFileSystemBindData>
		{
			~ComPtr<IFileSystemBindData>();
		};

		struct ComPtr<IImmersiveApplicationManager>
		{
			~ComPtr<IImmersiveApplicationManager>();
		};

		struct ComPtr<IImmersiveLauncher>
		{
			~ComPtr<IImmersiveLauncher>();
		};

		struct ComPtr<IImmersiveMonitor>
		{
			~ComPtr<IImmersiveMonitor>();
		};

		struct ComPtr<IImmersiveMonitorManager>
		{
			~ComPtr<IImmersiveMonitorManager>();
		};

		struct ComPtr<IInitializeWithItem>
		{
			~ComPtr<IInitializeWithItem>();
		};

		struct ComPtr<IInspectable>
		{
			~ComPtr<IInspectable>();
		};

		struct ComPtr<ILayoutPreferencesOnAppLaunch>
		{
			~ComPtr<ILayoutPreferencesOnAppLaunch>();
		};

		struct ComPtr<INamedResource>
		{
			~ComPtr<INamedResource>();
		};

		struct ComPtr<IObjectCollection>
		{
			~ComPtr<IObjectCollection>();
		};

		struct ComPtr<IPackageInstallStateStore>
		{
			~ComPtr<IPackageInstallStateStore>();
		};

		struct ComPtr<IPersistFile>
		{
			~ComPtr<IPersistFile>();
		};

		struct ComPtr<IPersistFolder>
		{
			~ComPtr<IPersistFolder>();
		};

		struct ComPtr<IPinToStartService>
		{
			~ComPtr<IPinToStartService>();
		};

		struct ComPtr<IPinnedList>
		{
			~ComPtr<IPinnedList>();
		};

		struct ComPtr<IPropertyStore>
		{
			~ComPtr<IPropertyStore>();
		};

		struct ComPtr<IPropertyStoreFactory>
		{
			~ComPtr<IPropertyStoreFactory>();
		};

		struct ComPtr<IRealmActivationHistory>
		{
			~ComPtr<IRealmActivationHistory>();
		};

		struct ComPtr<IResourceCandidate>
		{
			~ComPtr<IResourceCandidate>();
		};

		struct ComPtr<IServiceProvider>
		{
			~ComPtr<IServiceProvider>();
		};

		struct ComPtr<ISharedBitmap>
		{
			~ComPtr<ISharedBitmap>();
		};

		struct ComPtr<IShellFolder>
		{
			~ComPtr<IShellFolder>();
		};

		struct ComPtr<IShellItem2>
		{
			~ComPtr<IShellItem2>();
		};

		struct ComPtr<IShellItem>
		{
			~ComPtr<IShellItem>();
		};

		struct ComPtr<IShellItemImageFactoryPriv>
		{
			~ComPtr<IShellItemImageFactoryPriv>();
		};

		struct ComPtr<IShellLinkW>
		{
			~ComPtr<IShellLinkW>();
		};

		struct ComPtr<IShellUserAssist>
		{
			~ComPtr<IShellUserAssist>();
		};

		struct ComPtr<IShortcutInfo>
		{
			~ComPtr<IShortcutInfo>();
		};

		struct ComPtr<IShortcutInfoEnumerator>
		{
			~ComPtr<IShortcutInfoEnumerator>();
		};

		struct ComPtr<ISwitchController>
		{
			~ComPtr<ISwitchController>();
		};

		struct ComPtr<IThreadRefWithEvent>
		{
			~ComPtr<IThreadRefWithEvent>();
		};

		struct ComPtr<IThumbnailCache3>
		{
			~ComPtr<IThumbnailCache3>();
		};

		struct ComPtr<IThumbnailCache>
		{
			~ComPtr<IThumbnailCache>();
		};

		struct ComPtr<ITileDataLayerAppResolverReconciler>
		{
			~ComPtr<ITileDataLayerAppResolverReconciler>();
		};

		struct ComPtr<ITileInfo>
		{
			~ComPtr<ITileInfo>();
		};

		struct ComPtr<IUnknown>
		{
			~ComPtr<IUnknown>();
		};

		struct ComPtr<IWICBitmapDecoder>
		{
			~ComPtr<IWICBitmapDecoder>();
		};

		struct ComPtr<IWICBitmapFrameDecode>
		{
			~ComPtr<IWICBitmapFrameDecode>();
		};

		struct ComPtr<IWICImagingFactory>
		{
			~ComPtr<IWICImagingFactory>();
		};

		struct ComPtr<IXMLDOMDocument2>
		{
			~ComPtr<IXMLDOMDocument2>();
		};

		struct ComPtr<IXMLDOMDocument>
		{
			~ComPtr<IXMLDOMDocument>();
		};

		struct ComPtr<IXMLDOMParseError>
		{
			~ComPtr<IXMLDOMParseError>();
		};

		struct ComPtr<IXMLDOMSchemaCollection>
		{
			~ComPtr<IXMLDOMSchemaCollection>();
		};

		struct ComPtr<StartPinUnpinContextMenu>
		{
			~ComPtr<StartPinUnpinContextMenu>();
		};

		struct ComPtr<Windows::Foundation::IPropertyValue>
		{
			~ComPtr<Windows::Foundation::IPropertyValue>();
		};

		struct ComPtr<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::PackageCatalog *,Windows::ApplicationModel::PackageInstallingEventArgs *> >
		{
			~ComPtr<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::PackageCatalog *,Windows::ApplicationModel::PackageInstallingEventArgs *> >();
		};

		struct ComPtr<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::PackageCatalog *,Windows::ApplicationModel::PackageUninstallingEventArgs *> >
		{
			~ComPtr<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::PackageCatalog *,Windows::ApplicationModel::PackageUninstallingEventArgs *> >();
		};

		struct ComPtr<Windows::Internal::ComTaskPool::CThread>
		{
			~ComPtr<Windows::Internal::ComTaskPool::CThread>();
		};

		struct ComPtr<Windows::Internal::IComPoolTask>
		{
			~ComPtr<Windows::Internal::IComPoolTask>();
		};

		struct ComPtr<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection>
		{
			~ComPtr<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection>();
		};

		struct ComPtr<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollectionManager>
		{
			~ComPtr<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollectionManager>();
		};

		struct ComPtr<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::IStartTileCollection>
		{
			~ComPtr<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::IStartTileCollection>();
		};

		struct ComPtr<WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier>
		{
			~ComPtr<WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier>();
		};

		struct ComPtr<WindowsInternal::Shell::UnifiedTile::IWin32UnifiedTileIdentifierFactory>
		{
			~ComPtr<WindowsInternal::Shell::UnifiedTile::IWin32UnifiedTileIdentifierFactory>();
		};

		struct ComPtr<WindowsInternal::Shell::UnifiedTile::Private::IUnifiedTileUserPinHelperStatics>
		{
			~ComPtr<WindowsInternal::Shell::UnifiedTile::Private::IUnifiedTileUserPinHelperStatics>();
		};

		struct DelegateTraits<-1>
		{
			static void EnsureStackSnapshot(long);
		};

		namespace Details
		{
			struct ImplementsHelper<RuntimeClassFlags<2>,0,CImmersiveOpenBase,CWRLObjectWithSite,IInitializeWithPropertyStore>
			{
				~ImplementsHelper<RuntimeClassFlags<2>,0,CImmersiveOpenBase,CWRLObjectWithSite,IInitializeWithPropertyStore>();
			};

			struct ImplementsHelper<RuntimeClassFlags<2>,0,CImmersiveOpenBase,CWRLObjectWithSite>
			{
				~ImplementsHelper<RuntimeClassFlags<2>,0,CImmersiveOpenBase,CWRLObjectWithSite>();
			};

			struct ImplementsHelper<RuntimeClassFlags<2>,0,CImmersiveOpenBase,IExecuteCommandNotify,ILaunchTargetMonitor,IServiceProvider,CWRLObjectWithSite>
			{
				~ImplementsHelper<RuntimeClassFlags<2>,0,CImmersiveOpenBase,IExecuteCommandNotify,ILaunchTargetMonitor,IServiceProvider,CWRLObjectWithSite>();
			};

			class ImplementsHelper<RuntimeClassFlags<2>,0,CWRLObjectWithGITSite,IServiceProvider,IShouldSwitchToDesktop,ILayoutPreferencesOnAppLaunch,IExecuteCommandHost,ILocalCopyDownloadSettings,IWakeOnRPCCalls,ILaunchTargetMonitor,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			public:
				~ImplementsHelper<RuntimeClassFlags<2>,0,CWRLObjectWithGITSite,IServiceProvider,IShouldSwitchToDesktop,ILayoutPreferencesOnAppLaunch,IExecuteCommandHost,ILocalCopyDownloadSettings,IWakeOnRPCCalls,ILaunchTargetMonitor,FtmBase>();
			};

			class ImplementsHelper<RuntimeClassFlags<2>,0,ChainInterfaces<IShellFolder2,IShellFolder,Nil,Nil,Nil,Nil,Nil,Nil,Nil,Nil>,ChainInterfaces<IPersistFolder2,IPersistFolder,IPersist,Nil,Nil,Nil,Nil,Nil,Nil,Nil>,Implements<RuntimeClassFlags<2>,IUpdateIDList,IThumbnailHandlerFactory,IObjectWithBackReferences,IFolderWithSearchRoot>,CAppShellFolderBase<CAppsFolderItemIDFactory,3>,IFolderWithGrepConfiguration,ISetWrapperFolder,IAliasedNamespace>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<2>,1,ILocalCopyDownloadSettings,IWakeOnRPCCalls,ILaunchTargetMonitor,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<2>,1,Implements<RuntimeClassFlags<2>,IUpdateIDList,IThumbnailHandlerFactory,IObjectWithBackReferences,IFolderWithSearchRoot>,CAppShellFolderBase<CAppsFolderItemIDFactory,3>,IFolderWithGrepConfiguration,ISetWrapperFolder,IAliasedNamespace>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IAppUsageProvider,IAppUsagePromotion,IAppUsageEventSink,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			struct MakeAllocator<CAppInfoEnumerator>
			{
				~MakeAllocator<CAppInfoEnumerator>();
			};

			struct MakeAllocator<CAppResolverDataLayer>
			{
				~MakeAllocator<CAppResolverDataLayer>();
			};

			struct MakeAllocator<CAppsFolderEnumIDList>
			{
				~MakeAllocator<CAppsFolderEnumIDList>();
			};

			struct MakeAllocator<CAppsFolderThumbnailProvider>
			{
				~MakeAllocator<CAppsFolderThumbnailProvider>();
			};

			struct MakeAllocator<CPinToStartService>
			{
				~MakeAllocator<CPinToStartService>();
			};

			struct MakeAllocator<CShortcutInfoEnumerator>
			{
				~MakeAllocator<CShortcutInfoEnumerator>();
			};

			struct MakeAllocator<StartPinUnpinContextMenu>
			{
				~MakeAllocator<StartPinUnpinContextMenu>();
			};

			class ModuleBase
			{
				static void * moduleLock_;
			protected:
				static unsigned long volatile objectCount_;
			public:
				static ModuleBase * module_;
				virtual CreatorMap const * * GetFirstEntryPointer();
				virtual CreatorMap const * * GetLastEntryPointer();
				virtual CreatorMap const * * GetMidEntryPointer();
				virtual _RTL_SRWLOCK * GetLock();
				virtual unsigned long GetObjectCount();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,ISharedFactoryHelper,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,ISharedFactoryHelper,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,CImmersiveOpenBase,CWRLObjectWithSite,IInitializeWithPropertyStore>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,CImmersiveOpenBase,CWRLObjectWithSite>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,CImmersiveOpenBase,IExecuteCommandNotify,ILaunchTargetMonitor,IServiceProvider,CWRLObjectWithSite>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IPinToStartService>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,CWRLObjectWithGITSite,IServiceProvider,IShouldSwitchToDesktop,ILayoutPreferencesOnAppLaunch,IExecuteCommandHost,ILocalCopyDownloadSettings,IWakeOnRPCCalls,ILaunchTargetMonitor,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ChainInterfaces<IShellFolder2,IShellFolder,Nil,Nil,Nil,Nil,Nil,Nil,Nil,Nil>,ChainInterfaces<IPersistFolder2,IPersistFolder,IPersist,Nil,Nil,Nil,Nil,Nil,Nil,Nil>,Implements<RuntimeClassFlags<2>,IUpdateIDList,IThumbnailHandlerFactory,IObjectWithBackReferences,IFolderWithSearchRoot>,CAppShellFolderBase<CAppsFolderItemIDFactory,3>,IFolderWithGrepConfiguration,ISetWrapperFolder,IAliasedNamespace>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,FtmBase,IAppResolverHelpers>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IActivityTracker>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IAppInfo>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IAppInfoEnumerator>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IAppReadinessTaskCallback>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IAppResolverDataLayer>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IAppResolverDataLayerManager>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IAppResolverEnumFilter>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IAppResolverExclusionFilter>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IAppUsageProvider>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IContextMenu,IShellExtInit,CWRLObjectWithSite>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IDisplayInfo>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IEnumIDList>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IExecuteCommand,IInitializeCommand,IObjectWithSelection>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IExecuteCommand>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IPersist,IOleWindow>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IPropertyStoreFactory>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IServiceProvider>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IShellFolderViewCB,IFolderViewSettings>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IShortcutInfo>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IShortcutInfoEnumerator>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IThumbnailProvider,IInitializeWithItem,IExtractIconW,IExtractImage>
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

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IUserPinnedTileManager>
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

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::PackageCatalog *,Windows::ApplicationModel::PackageInstallingEventArgs *>,FtmBase> >
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::PackageCatalog *,Windows::ApplicationModel::PackageUninstallingEventArgs *>,FtmBase> >
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

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,IAppUsageReconciler,IAppUsageProvider,IAppUsagePromotion,IAppUsageEventSink,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,IAppUsageReconciler,IAppUsageProvider,IAppUsagePromotion,IAppUsageEventSink,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,IInspectable,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,IInspectable,FtmBase>();
			};

			struct WeakReferenceImpl
			{
				virtual long Resolve(_GUID const &,IInspectable * *);
			};

			Details::WeakReferenceImpl * CreateWeakReference(IUnknown *);
			long CreateClassFactory<CAppResolverFactory>(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateClassFactory<SimpleClassFactory<CAppResolverHelpers,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateClassFactory<SimpleClassFactory<CAppsFolder,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateClassFactory<SimpleClassFactory<CAppsFolderThumbnailProvider,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateClassFactory<SimpleClassFactory<CAppsFolderVerbExecute,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateClassFactory<SimpleClassFactory<CDesktopOpenExecute,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateClassFactory<SimpleClassFactory<CDualModeAppOpen,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateClassFactory<SimpleClassFactory<CImmersiveAppOpenExecute,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateClassFactory<SimpleClassFactory<CPinToStartService,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateClassFactory<SimpleClassFactory<CSystemSettingsOpenExecute,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateClassFactory<SimpleClassFactory<StartPinUnpinContextMenu,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateClassFactory<SimpleClassFactory<UserPinnedTileManager,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long GetCacheEntry(Details::ModuleBase *,unsigned int *,_GUID const &,Details::CreatorMap const *,IUnknown * *);
			long MakeAndInitialize<CAppResolverDataLayer,IAppResolverDataLayer,CCacheInstance * const &>(IAppResolverDataLayer * *,CCacheInstance * const &);
			long MakeAndInitialize<CDisplayInfo,IDisplayInfo,void const * &,CCacheTile const * &>(IDisplayInfo * *,void const * &,CCacheTile const * &);
			long MakeAndInitialize<CShortcutInfo,IShortcutInfo,void const * &,CCacheShortcut * &>(Details::ComPtrRef<ComPtr<IShortcutInfo> >,void const * &,CCacheShortcut * &);
			long MakeAndInitialize<CShortcutInfo,IShortcutInfo,void const * &,CCacheShortcut const * &>(IShortcutInfo * *,void const * &,CCacheShortcut const * &);
			void RaiseException(long,unsigned long);
		};

		struct FtmBase
		{
			FtmBase();
			virtual long DisconnectObject(unsigned long);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
		};

		class Implements<RuntimeClassFlags<2>,IExecuteCommand,IExecuteCommandApplicationHostEnvironment,IInitializeCommand,IObjectWithSelection>
		{
		protected:
			long CanCastTo(_GUID const &,void * *);
		};

		class Module<1,Details::DefaultModule<1> >
		{
			static bool isInitialized;
		public:
			static Details::DefaultModule<1> & GetModule();
			virtual long RegisterCOMObject(unsigned short const *,_GUID *,IClassFactory * *,unsigned long *,unsigned int);
			virtual long RegisterWinRTObject(unsigned short const *,unsigned short const * *,<unnamed-type-RO_REGISTRATION_COOKIE> * *,unsigned int);
			virtual long UnregisterCOMObject(unsigned short const *,unsigned long *,unsigned int);
			virtual long UnregisterWinRTObject(unsigned short const *,<unnamed-type-RO_REGISTRATION_COOKIE> *);
			virtual unsigned long DecrementObjectCount();
			virtual unsigned long IncrementObjectCount();
			virtual ~Module<1,Details::DefaultModule<1> >();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,IAppInfoEnumerator>
		{
			virtual ~RuntimeClass<RuntimeClassFlags<2>,IAppInfoEnumerator>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,IAppResolverDataLayer>
		{
			virtual ~RuntimeClass<RuntimeClassFlags<2>,IAppResolverDataLayer>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,IAppResolverDataLayerManager>
		{
			virtual ~RuntimeClass<RuntimeClassFlags<2>,IAppResolverDataLayerManager>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,IAppResolverExclusionFilter>
		{
			virtual ~RuntimeClass<RuntimeClassFlags<2>,IAppResolverExclusionFilter>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,IShortcutInfoEnumerator>
		{
			virtual ~RuntimeClass<RuntimeClassFlags<2>,IShortcutInfoEnumerator>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,IThumbnailProvider,IInitializeWithItem,IExtractIconW,IExtractImage>
		{
			virtual ~RuntimeClass<RuntimeClassFlags<2>,IThumbnailProvider,IInitializeWithItem,IExtractIconW,IExtractImage>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,IUnknown>
		{
			virtual ~RuntimeClass<RuntimeClassFlags<2>,IUnknown>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>
		{
			RuntimeClass<RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>();
			virtual ~RuntimeClass<RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>();
		};

		struct SimpleClassFactory<CAppResolverHelpers,0>
		{
			virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
		};

		struct SimpleClassFactory<CAppsFolder,0>
		{
			virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
		};

		struct SimpleClassFactory<CAppsFolderThumbnailProvider,0>
		{
			virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
		};

		struct SimpleClassFactory<CAppsFolderVerbExecute,0>
		{
			virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
		};

		struct SimpleClassFactory<CDesktopOpenExecute,0>
		{
			virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
		};

		struct SimpleClassFactory<CDualModeAppOpen,0>
		{
			virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
		};

		struct SimpleClassFactory<CImmersiveAppOpenExecute,0>
		{
			virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
		};

		struct SimpleClassFactory<CPinToStartService,0>
		{
			virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
		};

		struct SimpleClassFactory<CSystemSettingsOpenExecute,0>
		{
			virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
		};

		struct SimpleClassFactory<StartPinUnpinContextMenu,0>
		{
			virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
		};

		struct SimpleClassFactory<UserPinnedTileManager,0>
		{
			virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
		};

		namespace Wrappers
		{
			class ClientDC
			{
			protected:
				virtual bool InternalClose();
			public:
				~ClientDC();
			};

			class CompatibleDC
			{
			protected:
				virtual bool InternalClose();
			public:
				~CompatibleDC();
			};

			struct HStringReference
			{
				HStringReference<11>(unsigned short (&)[11]);
				HStringReference<unsigned short *>(unsigned short * const &,Details::Dummy);
				HStringReference<unsigned short const *>(unsigned short const * const &,Details::Dummy);
				~HStringReference();
			};

			class HandleT<HandleTraits::ClientDCTraits>
			{
			protected:
				virtual bool InternalClose();
			};

			class HandleT<HandleTraits::CompatibleDCTraits>
			{
			protected:
				virtual bool InternalClose();
			};

			class HandleT<HandleTraits::EventTraits>
			{
			protected:
				virtual bool InternalClose();
			};

			class HandleT<HandleTraits::HBITMAPTraits>
			{
			protected:
				virtual bool InternalClose();
			public:
				~HandleT<HandleTraits::HBITMAPTraits>();
			};

		};

		long AsWeak<AppLifecycleReconciler>(AppLifecycleReconciler *,WRL::WeakRef *);
		long AsWeak<AppUsageReconciler>(AppUsageReconciler *,WRL::WeakRef *);
		long AsWeak<ISharedFactoryHelper>(ISharedFactoryHelper *,WRL::WeakRef *);
	};

};

struct OITEMIDLIST_RELATIVE
{
	static long AllocIDList(IMemoryMappedHeap *,_ITEMIDLIST_RELATIVE const *,OITEMIDLIST_RELATIVE *);
};

struct OWSTR
{
	static long AllocString(IMemoryMappedHeap *,unsigned short const *,OWSTR *,unsigned short * *);
};

struct SHORTCUT_DATA
{
	~SHORTCUT_DATA();
};

struct SharedFactoryHelper
{
	virtual long GetApplicationStatics(Windows::Internal::StateRepository::IApplicationStatics * *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTileStore(Windows::Internal::Tiles::ITileStore * *);
	virtual long GetTileViewStatics(Windows::Internal::StateRepository::ITileViewStatics * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long GetUnifiedTileIdentifierStatics(WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifierStatics * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class StartPinUnpinContextMenu
{
	long InvokeCommandImpl(_CMINVOKECOMMANDINFO *);
	long QueryContextMenuImpl(HMENU__ *,unsigned int,unsigned int,unsigned int,unsigned int);
	long _RetrieveShellItemForMenu(IShellItem * *);
public:
	StartPinUnpinContextMenu();
	long RuntimeClassInitialize();
	virtual long GetCommandString(unsigned __int64,unsigned int,unsigned int *,char *,unsigned int);
	virtual long Initialize(_ITEMIDLIST_ABSOLUTE const *,IDataObject *,HKEY__ *);
	virtual long InvokeCommand(_CMINVOKECOMMANDINFO *);
	virtual long QueryContextMenu(HMENU__ *,unsigned int,unsigned int,unsigned int,unsigned int);
};

namespace StartUI
{
	class MRTHelperBase
	{
		long InitializeMRTObjects();
		long Resolve(MRTHelperBase::MRTResolutionType,unsigned short const *,unsigned short * *);
	public:
		~MRTHelperBase();
	};

};

namespace TileDataLayerItemWrappers
{
	class MRTCacheManagerInternal
	{
		static Microsoft::WRL::Wrappers::SRWLock s_MRTCacheLock;
	};

	class TDLTileInfoHelper
	{
		long GetStringMetaProperty(unsigned short const *,unsigned short * *);
		void ClearRetryPropertyTables();
	public:
		TDLTileInfoHelper(ITileInfo *);
		~TDLTileInfoHelper();
	};

	TileDataLayerItemWrappers::<unnamed-type-c_TileStringPropertyIDMap> const * const c_TileStringPropertyIDMap;
};

namespace TileStoreAppsFolder
{
	long GetPackagedAppProperties(unsigned short const *,IPropertyStore * *);
};

namespace TileUtils
{
	long ConvertFileIUriToFilePath(IUri *,unsigned short * *);
	long CreatePackageInfo(unsigned short const *,unsigned char * *);
	long GetLocalizedLogoPath(IPropertyStore *,DEVICE_SCALE_FACTOR *,unsigned short * *);
};

namespace UserAssistImpl
{
	IShellUserAssist * g_cachedUserAssist;
	long GetCachedUserAssist(IShellUserAssist * *);
};

class UserPinnedTileManager
{
	long _CreatePinnedItemImpl(IShellItem *,IShellLinkW *);
public:
	virtual long CreatePinnedItemFromShellItem(IShellItem *);
	virtual long CreatePinnedItemFromShellLink(IShellLinkW *);
	virtual long DeletePinnedItem(ITileInfo *);
	virtual long DeletePinnedItemByAppId(unsigned short const *);
	virtual long Initialize(IVisualElementEnumerator *,ITileManager *);
};

namespace Windows
{
	namespace Foundation
	{
		long ActivateInstance<Microsoft::WRL::ComPtr<Internal::Tiles::ITileQueryFilter> >(HSTRING__ *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Internal::Tiles::ITileQueryFilter> >);
	};

	namespace Internal
	{
		class ComTaskPool
		{
			struct CGitLifetimeExtension
			{
				void Init();
			};

			struct CRemoteTask
			{
				long RuntimeClassInitialize(IComPoolTask *);
				virtual void Run();
			};

			class CThread
			{
				long _CreateThreadRef(long *,IUnknown * *);
				long _WaitForThreadUpdate(unsigned long);
				static HINSTANCE__ * s_ExecuteThreadProc(void *);
				static unsigned long s_ThreadProc(void *);
				static void s_CheckForDeadlockTimerCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
				static void s_ThreadPoolCallback(_TP_CALLBACK_INSTANCE *,void *);
				void _ThreadProc();
			public:
				long StartThread();
				long StartThreadWithFallback();
				long _StartThreadCommon();
			};

			struct TaskList
			{
				void Clear();
			};

			static ComTaskPool::CThread * s_pThreadList;
			static ComTaskPool::TaskList s_taskFloodingList;
			static _RTL_SRWLOCK s_rwLock;
			static bool s_TryRemoveThread(ComTaskPool::CThread *,bool);
			static bool volatile s_fCanReuseThreads;
			static bool volatile s_fWaitForMoreTasks;
			static long s_AddThreadAffineWrapper(IComPoolTask *,IComPoolTask * *);
			static long s_GetTaskPoolTlsSlot(unsigned long *);
			static long s_QueuePoolTask(TaskApartment,TaskOptions,unsigned long,IComPoolTask *);
			static long s_QueuePoolTaskUnderLock(void *,TaskApartment,TaskOptions,unsigned long,IComPoolTask *,ComTaskPool::TaskList *,ComTaskPool::CThread * *);
			static unsigned long volatile s_cThreadsStarting;
			static unsigned long volatile s_dwThreadIdReuse;
			static unsigned long volatile s_dwUniqueCallingContext;
			static void * s_hEventCache;
			static void s_AttachAndRecoverTask(ComTaskPool::TaskData *);
		public:
			static long RunTask(TaskApartment,TaskOptions,unsigned long,unsigned long,IComPoolTask *,IUnknown * *);
		};

		struct MoveOnCopy<NativeString<CoTaskMemPolicy<unsigned short> > >
		{
			~MoveOnCopy<NativeString<CoTaskMemPolicy<unsigned short> > >();
		};

		class NativeString<CoTaskMemPolicy<unsigned short> >
		{
			long _EnsureCapacity(unsigned __int64);
			long _Initialize(unsigned short const *,unsigned __int64);
		public:
			long Concat(unsigned short const *,unsigned __int64);
			long Initialize(HKEY__ *,unsigned short const *);
			long InitializeFormat(unsigned short const *,...);
			~NativeString<CoTaskMemPolicy<unsigned short> >();
		};

		class NativeString<LocalMemPolicy<unsigned short> >
		{
			long _EnsureCapacity(unsigned __int64);
		public:
			long Concat(unsigned short const *);
			~NativeString<LocalMemPolicy<unsigned short> >();
		};

		struct String
		{
			~String();
		};

	};

};

namespace WindowsInternal
{
	namespace Shell
	{
		namespace UnifiedTile
		{
			namespace CuratedTileCollections
			{
				namespace CollectionConstants
				{
					unsigned short const * const c_startTileGridCollectionId;
				};

			};

		};

	};

};

namespace std
{
	struct _Wrap_alloc<allocator<IUnknown *> >
	{
		void deallocate(IUnknown * *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<Microsoft::WRL::ComPtr<IUnknown> > >
	{
		void deallocate(Microsoft::WRL::ComPtr<IUnknown> *,unsigned __int64);
		void destroy<Microsoft::WRL::ComPtr<IUnknown> >(Microsoft::WRL::ComPtr<IUnknown> *);
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

	struct basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >
	{
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & append(unsigned short const * const,unsigned __int64);
		static void _Xlen();
		void reserve(unsigned __int64);
		~basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >();
	};

	struct exception
	{
		exception(exception const &);
		virtual char const * what();
	};

	class vector<IUnknown *,allocator<IUnknown *> >
	{
		static void _Xlength();
		void _Change_array(IUnknown * * const,unsigned __int64,unsigned __int64);
		void _Reallocate_exactly(unsigned __int64);
	public:
		~vector<IUnknown *,allocator<IUnknown *> >();
	};

	class vector<Microsoft::WRL::ComPtr<IUnknown>,allocator<Microsoft::WRL::ComPtr<IUnknown> > >
	{
		static void _Xlength();
	public:
		~vector<Microsoft::WRL::ComPtr<IUnknown>,allocator<Microsoft::WRL::ComPtr<IUnknown> > >();
	};

	Microsoft::WRL::ComPtr<IUnknown> * _Unfancy<Microsoft::WRL::ComPtr<IUnknown> >(Microsoft::WRL::ComPtr<IUnknown> *);
	Microsoft::WRL::ComPtr<IUnknown> * _Uninitialized_move_al_unchecked<Microsoft::WRL::ComPtr<IUnknown> *,Microsoft::WRL::ComPtr<IUnknown> *,allocator<Microsoft::WRL::ComPtr<IUnknown> > >(Microsoft::WRL::ComPtr<IUnknown> *,Microsoft::WRL::ComPtr<IUnknown> *,Microsoft::WRL::ComPtr<IUnknown> *,std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<IUnknown> > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	nothrow_t const std::nothrow;
	void _Destroy_range<allocator<Microsoft::WRL::ComPtr<IUnknown> >,Microsoft::WRL::ComPtr<IUnknown> *>(Microsoft::WRL::ComPtr<IUnknown> *,Microsoft::WRL::ComPtr<IUnknown> *,std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<IUnknown> > > &);
};

namespace wil
{
	class ActivityBase<AppResolverLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<AppResolverLogging,_TlgReflectorTag_Param0IsProviderType>
		{
			~ActivityData<AppResolverLogging,_TlgReflectorTag_Param0IsProviderType>();
		};

	protected:
		void Destroy();
	public:
		ActivityBase<AppResolverLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		virtual bool NotifyFailure(FailureInfo const &);
		void Stop(long);
		void zInternalStart();
		void zInternalStop();
		~ActivityBase<AppResolverLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>();
	};

	class ActivityBase<AppResolverLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<AppResolverLogging,_TlgReflectorTag_Param0IsProviderType>
		{
			~ActivityData<AppResolverLogging,_TlgReflectorTag_Param0IsProviderType>();
		};

		void ReportStopActivity(long);
	protected:
		void Destroy();
	public:
		ActivityBase<AppResolverLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType> & operator=(ActivityBase<AppResolverLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType> const &);
		ActivityBase<AppResolverLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>(ActivityBase<AppResolverLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType> const &);
		virtual bool NotifyFailure(FailureInfo const &);
		void IgnoreCurrentThread();
		void Stop(long);
		~ActivityBase<AppResolverLogging,1,0,5,_TlgReflectorTag_Param0IsProviderType>();
	};

	class ActivityBase<AppResolverLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<AppResolverLogging,_TlgReflectorTag_Param0IsProviderType>
		{
			~ActivityData<AppResolverLogging,_TlgReflectorTag_Param0IsProviderType>();
		};

	protected:
		void Destroy();
	public:
		ActivityBase<AppResolverLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType> & operator=(ActivityBase<AppResolverLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType> const &);
		virtual bool NotifyFailure(FailureInfo const &);
		void IgnoreCurrentThread();
		void Stop(long);
		void zInternalStart();
		~ActivityBase<AppResolverLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>();
	};

	struct ActivityThreadWatcher
	{
		ActivityThreadWatcher(details::IFailureCallback *,details::StoredCallContextInfo const &);
		~ActivityThreadWatcher();
	};

	class Feature<__WilFeatureTraits_Feature_DisableTileDataLayerAppResolverReconciler>
	{
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_FailFastOnRecoverableUnifiedTileModelFailures>
	{
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_PeopleBar>
	{
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_StoreAppUsageDataInCDS>
	{
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_TaskFlowDataEngineTimelineSupport>
	{
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_TileStoreWrites>
	{
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_UseTileStoreAppsFolder>
	{
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_UseTileStoreTransformer>
	{
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	struct PropVariant
	{
		~PropVariant();
	};

	struct PropertyStoreHelper
	{
		PropertyStoreHelper(IPropertyStore *);
		~PropertyStoreHelper();
	};

	struct PropertyStoreHelperBase<IPropertyStore>
	{
		long GetAsString<_tagpropertykey>(_tagpropertykey,unsigned short * *);
		long GetString<_tagpropertykey>(_tagpropertykey,unsigned short * *);
	};

	struct ResultException
	{
		ResultException(FailureInfo const &);
		ResultException(ResultException const &);
		virtual char const * what();
		virtual ~ResultException();
	};

	struct ShellBindContextHelper
	{
		long SetNamedBoolean(unsigned short const *);
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
		void Register(_TlgProvider_t const * const);
		void ReportTelemetryFailure(FailureInfo const &);
		void ReportTraceLoggingFailure(FailureInfo const &);
	};

	struct com_ptr_t<IInspectable,err_returncode_policy>
	{
		~com_ptr_t<IInspectable,err_returncode_policy>();
	};

	namespace details
	{
		struct DummyUnknown
		{
			virtual long ContextSensitiveHelp(int);
			virtual long GetClassID(_GUID *);
			virtual long GetWindow(HWND__ * *);
		};

		class EnabledStateManager
		{
			void RecordCachedUsageUnderLock();
		public:
			void OnStateChange();
			void QueueBackgroundUsageReporting(unsigned int,wil_details_FeaturePropertyCache &);
			void SubscribeFeaturePropertyCacheToEnabledStateChanges(wil_details_FeaturePropertyCache *,wil_FeatureChangeTime);
		};

		class FeatureLogging
		{
		protected:
			static FeatureLogging * Instance();
		};

		class FeatureStateManager
		{
			bool EnsureStateData();
			void EnsureTimerUnderLock();
		public:
			void RecordFeatureUsage(unsigned int,wil_details_ServiceReportingKind,unsigned __int64);
			void SubscribeToUsageFlush(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *));
		};

		class ThreadFailureCallbackHolder
		{
			static long volatile s_telemetryId;
		public:
			static bool GetThreadContext(FailureInfo *,ThreadFailureCallbackHolder *,char *,unsigned __int64);
			~ThreadFailureCallbackHolder();
		};

		namespace in1diag3
		{
			long Log_Hr(void *,unsigned int,char const *,long);
			long Log_IfFailedMsg(void *,unsigned int,char const *,long,char const *,...);
			long Return_CaughtException(void *,unsigned int,char const *);
			long Return_GetLastError(void *,unsigned int,char const *);
			long Return_Win32(void *,unsigned int,char const *,unsigned long);
			void FailFast_Unexpected(void *,unsigned int,char const *);
			void Return_Hr(void *,unsigned int,char const *,long);
			void Return_Hr_NoOriginate(void *,unsigned int,char const *,long);
			void _FailFastImmediate_Unexpected();
			void _FailFast_GetLastError(void *,unsigned int,char const *);
			void _FailFast_Unexpected(void *,unsigned int,char const *);
			void _Log_GetLastError(void *,unsigned int,char const *);
			void _Log_Hr(void *,unsigned int,char const *,long);
			void _Log_NullAlloc(void *,unsigned int,char const *);
			void _Log_Win32(void *,unsigned int,char const *,unsigned long);
			void _Throw_Hr(void *,unsigned int,char const *,long);
			void _Throw_NullAlloc(void *,unsigned int,char const *);
		};

		struct shared_buffer
		{
			bool create(void const *,unsigned __int64);
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
		long RecognizeCaughtExceptionFromCallback(unsigned short *,unsigned __int64);
		long ReportFailure_CaughtException(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,SupportedExceptions);
		long ReportFailure_GetLastErrorHr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		long ReportFailure_Win32(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,unsigned long);
		long ResultFromCaughtExceptionInternal(unsigned short *,unsigned __int64,bool *);
		long StringCchPrintfA(char *,unsigned __int64,char const *,...);
		shutdown_aware_object<details::EnabledStateManager> g_enabledStateManager;
		shutdown_aware_object<details::FeatureStateManager> g_featureStateManager;
		unsigned char (* g_pfnRtlDllShutdownInProgress)();
		unsigned char * WriteResultString<char const *>(unsigned char *,unsigned char *,char const *,char const * *);
		unsigned char * WriteResultString<unsigned short const *>(unsigned char *,unsigned char *,unsigned short const *,unsigned short const * *);
		unsigned char RtlDllShutdownInProgress();
		unsigned long (* g_pfnRtlNtStatusToDosErrorNoTeb)(long);
		unsigned long ReportFailure_GetLastError(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		unsigned long RtlNtStatusToDosErrorNoTeb(long);
		unsigned short * LogStringPrintf(unsigned short *,unsigned short const *,unsigned short const *,...);
		void (* g_pfnDebugBreak)();
		void (* g_pfnGetContextAndNotifyFailure)(FailureInfo *,char *,unsigned __int64);
		void (* g_pfnLoggingCallback)(FailureInfo const &);
		void (* g_pfnOriginateCallback)(FailureType,long);
		void (* g_pfnRethrow)();
		void (* g_pfnTelemetryCallback)(bool,FailureInfo const &);
		void (* g_pfnThrowResultException)(FailureInfo const &);
		void DebugBreak();
		void FeatureLoggingHook(unsigned int,FEATURE_LOGGED_TRAITS const *,FEATURE_ERROR const *,int,wil_ReportingKind const *,wil_VariantReportingKind const *,unsigned char,unsigned __int64);
		void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
		void LogFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,bool,unsigned short *,unsigned __int64,char *,unsigned __int64,FailureInfo *);
		void RecordFeatureUsageCallback(unsigned int,wil_details_FeaturePropertyCache *,wil_details_RecordUsageResult *);
		void ReportFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Hr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long);
		void ReportFailure_HrMsg(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,char const *,char *);
		void ReportFailure_Msg(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,char const *,char *);
		void Rethrow();
		void ThrowResultExceptionInternal(FailureInfo const &);
		void WilApiImpl_RecordFeatureUsage(unsigned int,unsigned int,unsigned int,char const *);
		void WilApiImpl_SubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
		void WilApiImpl_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
	};

	namespace details_abi
	{
		struct FeatureStateData
		{
			void ProcessShutdown();
			void RecordUsage();
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
		};

		class RawUsageIndex
		{
			bool RecordUsageInternal(void *,unsigned __int64,void *,unsigned __int64,unsigned int);
			unsigned char * FindInsertionPointOrIncrement(UsageIndexProperty &,unsigned char *,void *,unsigned __int64,unsigned int);
		public:
			bool RecordUsage(void *,unsigned __int64,void *,unsigned __int64,unsigned int);
			void SetBuffer(void *,unsigned __int64,unsigned __int64);
			void Swap(RawUsageIndex &);
			~RawUsageIndex();
		};

		class SemaphoreValue
		{
			static long GetValueFromSemaphore(void *,long *);
		public:
			long CreateFromPointer(unsigned short const *,void *);
			static long TryGetValue<unsigned __int64>(unsigned short const *,unsigned __int64 *,bool *);
			void Destroy();
			~SemaphoreValue();
		};

		struct SubscriptionList
		{
			void OnSignaled(srwlock &);
			void SubscribeUnderLock(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
			void Unsubscribe(srwlock &,FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
			~SubscriptionList();
		};

		struct ThreadLocalData
		{
			void SetLastError(FailureInfo const &);
			~ThreadLocalData();
		};

		struct ThreadLocalStorage<details::ThreadFailureCallbackHolder *>
		{
			details::ThreadFailureCallbackHolder * * GetLocal(bool);
		};

		struct UsageIndexProperty
		{
			bool Read(unsigned char * &,unsigned char *);
			bool Write(unsigned char * &,unsigned char *);
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
		};

		details_abi::ProcessLocalStorage<details_abi::ProcessLocalData> * g_pProcessLocalData;
		details_abi::ThreadLocalData * GetThreadLocalDataCache(bool);
		void RecordWnfUsageIndex(__WIL__WNF_STATE_NAME const *,unsigned __int64,details_abi::RawUsageIndex const &);
	};

	bool (* g_pfnIsDebuggerPresent)();
	bool g_fBreakOnFailure;
	bool g_fIsDebuggerPresent;
	long (* g_pfnResultFromCaughtException)();
	long GetFailureLogString(unsigned short *,unsigned __int64,wil::FailureInfo const &);
};

namespace wistd
{
	struct function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>
	{
		~function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>();
	};

	void _Xbad_function_call();
};

APPS_PROPSTORE_TYPE LookupStoreTypeFromKey(_tagpropertykey const &);
CScriptAutoDetection g_scriptAutoDetection;
FEATURE_ENABLED_STATE (* g_wil_details_apiGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME);
FEATURE_ENABLED_STATE (* g_wil_details_internalGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME);
HINSTANCE__ * g_wil_details_ntdllModuleHandle;
ICIVERBTOIDMAP const * _CmdIDToMap(unsigned __int64,int,ICIVERBTOIDMAP const *);
Microsoft::WRL::ComPtr<CRefCountedObject<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short> > > > CreateRefCountedObj<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short> > >();
Microsoft::WRL::Details::CreatorMap const __object_CAppResolverHelpers_COM;
Microsoft::WRL::Details::CreatorMap const __object_CAppResolver_COM;
Microsoft::WRL::Details::CreatorMap const __object_CAppsFolderThumbnailProvider_COM;
Microsoft::WRL::Details::CreatorMap const __object_CAppsFolderVerbExecute_COM;
Microsoft::WRL::Details::CreatorMap const __object_CAppsFolder_COM;
Microsoft::WRL::Details::CreatorMap const __object_CDesktopOpenExecute_COM;
Microsoft::WRL::Details::CreatorMap const __object_CDualModeAppOpen_COM;
Microsoft::WRL::Details::CreatorMap const __object_CImmersiveAppOpenExecute_COM;
Microsoft::WRL::Details::CreatorMap const __object_CPinToStartService_COM;
Microsoft::WRL::Details::CreatorMap const __object_CSystemSettingsOpenExecute_COM;
Microsoft::WRL::Details::CreatorMap const __object_StartPinUnpinContextMenu_COM;
Microsoft::WRL::Details::CreatorMap const __object_UserPinnedTileManager_COM;
Microsoft::WRL::Details::FactoryCache __objectFactory__CAppResolverHelpers_COM;
Microsoft::WRL::Details::FactoryCache __objectFactory__CAppResolver_COM;
Microsoft::WRL::Details::FactoryCache __objectFactory__CAppsFolderThumbnailProvider_COM;
Microsoft::WRL::Details::FactoryCache __objectFactory__CAppsFolderVerbExecute_COM;
Microsoft::WRL::Details::FactoryCache __objectFactory__CAppsFolder_COM;
Microsoft::WRL::Details::FactoryCache __objectFactory__CDesktopOpenExecute_COM;
Microsoft::WRL::Details::FactoryCache __objectFactory__CDualModeAppOpen_COM;
Microsoft::WRL::Details::FactoryCache __objectFactory__CImmersiveAppOpenExecute_COM;
Microsoft::WRL::Details::FactoryCache __objectFactory__CPinToStartService_COM;
Microsoft::WRL::Details::FactoryCache __objectFactory__CSystemSettingsOpenExecute_COM;
Microsoft::WRL::Details::FactoryCache __objectFactory__StartPinUnpinContextMenu_COM;
Microsoft::WRL::Details::FactoryCache __objectFactory__UserPinnedTileManager_COM;
_DPA * g_hdpaDarwinAds;
_HIDDENITEMID const * ILFindHiddenIDOn(_ITEMIDLIST_RELATIVE const *,IDLHID,int);
_ITEMIDLIST_RELATIVE * ILAppendHiddenStringW(_ITEMIDLIST_RELATIVE *,IDLHID,unsigned short const *);
_RTL_SRWLOCK g_srwDarwinAdsLock;
_RTL_SRWLOCK s_srwElsServiceLock;
_UFH_STORE_DATA_STATE g_UFHState;
__WIL_RTL_SRWLOCK g_wil_details_testFeatureStateLock;
__type_info_node __type_info_root_node;
bool IsVerbRegistered(IQueryAssociations *,unsigned short const *);
bool IsVerbRegistered(unsigned short const *,unsigned short const *);
int DPA_ILFreeCB<_ITEMID_CHILD>(_ITEMID_CHILD *,void *);
int g_wil_details_preventOnDemandStagingConfigReads;
int s_DarwinAdsDestroyCallback(void *,void *);
int wil_HasFeatureTestState(unsigned int,wil_FeatureEnabledState *);
int wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(wil_details_FeaturePropertyCache *,unsigned int,wil_details_ServiceReportingKind,unsigned int,unsigned __int64);
int wil_details_SetPropertyCacheOpportunityCallback(wil_details_FeaturePropertyCache *,void *);
int wil_details_SetPropertyCacheUsageCallback(wil_details_FeaturePropertyCache *,void *);
int wil_details_StagingConfig_AreAnyFeaturesConfigured(wil_details_StagingConfig *);
int wil_details_StagingConfig_QueryFeatureState(wil_details_StagingConfig *,wil_FeatureState *,unsigned int,int);
long (* g_wil_details_pfnNtQueryWnfStateData)(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long (* g_wil_details_pfnNtUpdateWnfStateData)(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long (* g_wil_details_pfnRtlSubscribeWnfStateChangeNotification)(__WIL__WNF_USER_SUBSCRIPTION * *,__WIL__WNF_STATE_NAME,unsigned long,long (*)(__WIL__WNF_STATE_NAME,unsigned long,__WIL__WNF_TYPE_ID *,void *,void const *,unsigned long),void *,__WIL__WNF_TYPE_ID *,unsigned long,unsigned long);
long (* g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion)(__WIL__WNF_USER_SUBSCRIPTION *);
long AcquireExistingAppResolverCache(CAppResolverCacheManager * *);
long ActivityTracker_CreateInstance(IAppUsageProvider *,IActivityTracker * *);
long AppLifecycleReconciler_CreateInstance(IAppUsageEventSink *,_GUID const &,void * *);
long AppUsageReconciler_CreateInstance(IAppResolverDataLayerManager *,_GUID const &,void * *);
long CCv6s_HeapReallocArray<void *>(void *,unsigned long,void *,unsigned __int64,unsigned __int64,void * * *);
long CompareIDsImpl(IShellFolder2 *,__int64,_ITEMIDLIST_RELATIVE const *,_ITEMIDLIST_RELATIVE const *);
long DataObj_GetIDList(IDataObject *,DATAOBJ_GET_ITEM_FLAGS,_ITEMIDLIST_ABSOLUTE * *);
long DetailsOfFromDetailsEx(IShellFolder2 *,_ITEMID_CHILD const *,unsigned int,_SHELLDETAILS *);
long GenerateAppID(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short * *);
long GetCurrentMRTHash(unsigned __int64,unsigned __int64 *);
long GetIconFromLegacyShortcut(IShellItem *,tagSIZE const &,int,ISharedBitmap * *);
long ILCloneWithHiddenID(_ITEMIDLIST_RELATIVE const *,_HIDDENITEMID const *,_ITEMIDLIST_RELATIVE * *);
long IsCortanaActivityTrackingEnabled(bool *);
long IsPIDLowIL(unsigned long);
long LaunchCortanaApp(unsigned short const *,CortanaAppLaunchType,bool);
long MaybeShowActivationErrorPopupIfCritical(long,PackageOrigin,unsigned short const *,ACTIVATIONERROR_DISMISS_METHOD *);
long ParseAppUserModelId(unsigned short const *,unsigned short * *,unsigned short * *);
long RankProvider_CreateInstance(IAppUsageProvider * *);
long ReadTileDataFromPropertyStore(IPropertyStore *,bool,TILE_DATA *,unsigned short * *);
long SHCreateFileSysBindCtx(_WIN32_FIND_DATAW const *,IBindCtx * *);
long SHGetDetailsOfInfo(HINSTANCE__ *,COLUMN_INFO const *,unsigned int,unsigned int,_SHELLDETAILS *);
long SHGetItemArrayFromDataObj(IDataObject *,tagSTGMEDIUM *,_IDA * *);
long SHGetNameAndFlagsW(_ITEMIDLIST_ABSOLUTE const *,unsigned long,unsigned short *,unsigned int,unsigned long *);
long SHOpenEffectiveToken(unsigned long,int,void * *);
long ScanFoldersAndCreateNewCache(CAppResolverCacheManager *,unsigned int,ROOTSCANINFO const *,START_MENU_REFRESH_CACHE_FLAGS);
long SharedFactoryHelper_EnsureInstance(ISharedFactoryHelper * *);
long SharedMemAllocArray<OFFSET<CCacheShortcut> >(IMemoryMappedHeap *,unsigned long,OFFSET_ARRAY<OFFSET<CCacheShortcut> > *,OFFSET<CCacheShortcut> * *);
long SharedMemAllocObject<CCacheDir>(IMemoryMappedHeap *,OFFSET<CCacheDir> *,CCacheDir * *);
long SharedMemAllocObject<CCacheShortcut>(IMemoryMappedHeap *,OFFSET<CCacheShortcut> *,CCacheShortcut * *);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCopyNExW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64,unsigned short * *,unsigned __int64 *,unsigned long);
long StringCchCopyNW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64);
long StringCchCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long StringCchVPrintfW(unsigned short *,unsigned __int64,unsigned short const *,char *);
long UAQueryEntry(_GUID const *,unsigned short const *,tagUEMINFO *);
long UARegisterNotify(int (*)(void *,_GUID const *,unsigned short const *,tagUAEVENT),void *,int);
long UASetEntry(_GUID const *,unsigned short const *,tagUEMINFO *);
long _AllocStringWorker<CTCoAllocPolicy>(void *,unsigned long,unsigned short const *,unsigned __int64,unsigned __int64,unsigned short * *);
long _GetAppxSmallLogo(IPropertyStore *,CPropertyStoreHelper const &,unsigned short const *,DEVICE_SCALE_FACTOR *,unsigned short * *);
long _GetIDListFromObject(IUnknown *,_ITEMIDLIST_ABSOLUTE * *);
long _GetOutOfPackageSmallLogo(CPropertyStoreHelper const &,unsigned short const *,unsigned short * *);
long _SharedMemStringAllocHelper(IMemoryMappedHeap *,unsigned short const *,OWSTR *);
long s_AddBackgroundColorAndPadBitmap(unsigned int,unsigned long,ISharedBitmap *,ISharedBitmap * *);
long s_AuthorizeShortcutInAppResolver(unsigned short const *,unsigned short const *);
long s_CreateAndPinItemImpl(CMarshaledInterface &,CMarshaledInterface &,bool);
long s_GetNonFileSystemTargetPathFromLink(IShellLinkW *,unsigned short * *);
long s_GetShellLinkAndRelativeNameFromItem(CMarshaledInterface &,IShellLinkW * *,unsigned short * *,unsigned short * *,unsigned short * *);
long s_GetShellLinkAndRelativeNameFromLink(CMarshaledInterface &,IShellLinkW * *,unsigned short * *,unsigned short * *,unsigned short * *);
long wil_details_NtQueryWnfStateData(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long wil_details_NtUpdateWnfStateData(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long wil_details_StagingConfig_FireNotification(wil_details_StagingConfig *,unsigned int,unsigned short);
long wil_details_StagingConfig_Load(wil_details_StagingConfig *,wil_FeatureStore,unsigned __int64,void *,int);
unsigned __int64 const * const CRC64_LOOKUP_TABLE;
unsigned long GetRunFlagsForAppPath(unsigned short const *);
unsigned long UfhpGetTopValue(unsigned long *,HKEY__ *,_UFH_DATA_TYPE);
unsigned long UfhpShortcutListenerRaiseEvent();
unsigned long UfhpUtilityGetAllocMultiSz(unsigned short * *,unsigned long *,unsigned short const *,unsigned short const *,unsigned short const *);
unsigned long UfhpUtilityStoreData(_UFH_DATA_TYPE,unsigned short const *,unsigned short const *,unsigned short const *);
unsigned long UfhpUtilityStoreDeleteAboveQuota(HKEY__ *,_UFH_DATA_TYPE);
unsigned long _RegSetKeyValue(HKEY__ *,unsigned short const *,unsigned short const *,unsigned long,void const *,unsigned long);
unsigned short const * * AcAceEntries;
unsigned short const * const RuntimeClass_WindowsInternal_CDSProperties_CDSTilePropertiesBatched;
unsigned short const * const RuntimeClass_WindowsInternal_Shell_UnifiedTile_CuratedTileCollections_CuratedTileCollectionManager;
unsigned short const * const RuntimeClass_WindowsInternal_Shell_UnifiedTile_Private_UnifiedTileUserPinHelper;
unsigned short const * const RuntimeClass_WindowsInternal_Shell_UnifiedTile_UnifiedTileIdentifier;
unsigned short const * const RuntimeClass_WindowsInternal_Shell_UnifiedTile_UnifiedTileIdentifierExtractor;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_PackageCatalog;
unsigned short const * const RuntimeClass_Windows_Internal_StateRepository_Application;
unsigned short const * const RuntimeClass_Windows_Internal_StateRepository_ApplicationExtension;
unsigned short const * const RuntimeClass_Windows_Internal_StateRepository_PrimaryTileView;
unsigned short const * const RuntimeClass_Windows_Internal_StateRepository_TileView;
unsigned short const * const RuntimeClass_Windows_Internal_Tiles_TileQueryFilter;
unsigned short const * const RuntimeClass_Windows_Internal_Tiles_TileStore;
unsigned short g_cfAsyncFlag_Storage;
unsigned short g_cfHIDA_Storage;
unsigned short g_cfURL_Storage;
void (* g_wil_details_apiRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_apiSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_apiUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_internalRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_internalSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_internalUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_pfnFeatureLoggingHook)(unsigned int,FEATURE_LOGGED_TRAITS const *,FEATURE_ERROR const *,int,wil_ReportingKind const *,wil_VariantReportingKind const *,unsigned char,unsigned __int64);
void (* g_wil_details_recordFeatureUsage)(unsigned int,wil_details_FeaturePropertyCache *,wil_details_RecordUsageResult *);
void * * IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IPropertyStore> >(Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IPropertyStore> >);
void * * IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IServiceProvider> >(Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IServiceProvider> >);
void * * IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IShellItem2> >(Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IShellItem2> >);
void * * IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IShellItem> >(Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IShellItem> >);
void * * IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IShellLinkW> >(Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IShellLinkW> >);
void * * IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IUnknown> >(Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IUnknown> >);
void * operator new(unsigned __int64);
void * operator new(unsigned __int64,IMemoryMappedHeap *,OFFSET<CCacheTile> *);
void * operator new(unsigned __int64,std::nothrow_t const &);
void * operator new<CCacheTile>(unsigned __int64,IMemoryMappedHeap *,OFFSET<CCacheTile> *);
void * operator new[](unsigned __int64,std::nothrow_t const &);
void AppResolverTraceInfo(unsigned short const *,...);
void EncodeCommonRelativePath(unsigned short *,unsigned __int64,unsigned short const *);
void LocalImageLoader_FireResultETW(long,unsigned short const *,unsigned int,unsigned short const *);
void _TlgWriteActivityAutoStop<0,5>(_TlgProvider_t const *,_GUID const *);
void _TlgWriteActivityAutoStop<35184372088832,5>(_TlgProvider_t const *,_GUID const *);
void __scrt_initialize_type_info();
void __scrt_throw_std_bad_alloc();
void __scrt_throw_std_bad_array_new_length();
void __scrt_uninitialize_type_info();
void operator delete(void *);
void operator delete(void *,unsigned __int64);
void operator delete(void *,void *);
void operator delete[](void *);
void wil_details_FeaturePropertyCache_ReportUsageToService(wil_details_FeaturePropertyCache *,unsigned int,FEATURE_LOGGED_TRAITS const *,int,wil_ReportingKind,unsigned __int64);
void wil_details_SetEnabledAndHasNotificationStateProperties(wil_details_FeaturePropertyCache *,wil_details_CachedFeatureEnabledState,wil_details_CachedHasNotificationState);
wil_StagingConfig * g_wil_details_stagingConfigForMachine;
wil_StagingConfig * g_wil_details_stagingConfigForUser;
wil_details_FeatureTestState * g_wil_details_testStates;
