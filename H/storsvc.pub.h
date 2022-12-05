namespace ATL
{
	struct CComBSTR
	{
		~CComBSTR();
	};

	struct CComPtr<IKnownFolderManager>
	{
		~CComPtr<IKnownFolderManager>();
	};

	struct CComPtr<IPMApplicationInfo2>
	{
		~CComPtr<IPMApplicationInfo2>();
	};

	struct CComPtr<IPMApplicationInfo>
	{
		~CComPtr<IPMApplicationInfo>();
	};

	struct CComPtr<IPMApplicationInfoEnumerator>
	{
		~CComPtr<IPMApplicationInfoEnumerator>();
	};

	struct CComPtr<IPMDeploymentManager2>
	{
		~CComPtr<IPMDeploymentManager2>();
	};

	struct CComPtr<IPMEnumerationManager>
	{
		~CComPtr<IPMEnumerationManager>();
	};

	struct CComPtr<ISharedProtectionPoints>
	{
		~CComPtr<ISharedProtectionPoints>();
	};

	struct CComPtr<IShellItem>
	{
		~CComPtr<IShellItem>();
	};

	struct CComPtr<IShellItemArray>
	{
		~CComPtr<IShellItemArray>();
	};

	struct CComPtr<IShellLibrary>
	{
		~CComPtr<IShellLibrary>();
	};

	struct CComPtr<IWindowsUpdateAgentInfo>
	{
		~CComPtr<IWindowsUpdateAgentInfo>();
	};

};

struct CAutoHandle<void *>
{
	~CAutoHandle<void *>();
};

class CBatterySqm
{
	void LogNonStreamData(unsigned long);
	void LogStreamData();
public:
	void DeInit();
	void Init();
	void Record(unsigned long,int);
};

struct CCleanupPolicy
{
	virtual long CleanupItem();
	virtual ~CCleanupPolicy();
};

struct CTSmartObj<void *,CAutoHandle_Policy<void *> >
{
	~CTSmartObj<void *,CAutoHandle_Policy<void *> >();
};

class CTreeWalker
{
	long EnumeratePatchCaches();
	long GetFolderPath(void *,__int64,unsigned long *,unsigned short *,_LARGE_INTEGER *,unsigned long);
	long PrepareProductInfo(HKEY__ *,unsigned short const *);
	long _DeleteAlternateStream(unsigned short *,unsigned long,unsigned __int64);
	void FindMediaLibraryFolderSuggestions();
	void UpdateParentAllocationSize(__int64,bool,unsigned long,unsigned __int64,unsigned long *,std::map<int,unsigned __int64,std::less<int>,std::allocator<std::pair<int const ,unsigned __int64> > > *,VALID_LIBRARY_TYPE *,std::map<VALID_LIBRARY_TYPE,unsigned int,std::less<VALID_LIBRARY_TYPE>,std::allocator<std::pair<VALID_LIBRARY_TYPE const ,unsigned int> > > *);
	void _GetFoldersForLibraries(void *,__int64,FOLDER_USAGE &,std::list<FoundFolderInfo,std::allocator<FoundFolderInfo> > &,std::list<FoundFolderInfo,std::allocator<FoundFolderInfo> > &,std::list<FoundFolderInfo,std::allocator<FoundFolderInfo> > &);
	void _ReturnInterestingFolderIds(__int64,FOLDER_USAGE,int,std::list<__int64,std::allocator<__int64> > *);
public:
	int ProcessFileNames(_FILE_LAYOUT_ENTRY *,unsigned __int64,unsigned __int64);
	long AddDesktopAppFolders();
	long GetDebugInfo(unsigned long,_MAP_DBG_ENTRY *);
	long GetTopFolders(_DATA_TYPE_NODE,unsigned long,_STORAGE_TOP_FOLDER *,unsigned long *);
	long PopulateWellKnownPaths(unsigned short const *);
	long ProcessFileAllocation(_FILE_LAYOUT_NAME_ENTRY *,unsigned __int64,unsigned __int64,unsigned __int64,unsigned long,unsigned long);
	long QueryFileId(unsigned short const *,__int64 *);
	long QueryFileLayout(unsigned short *);
	static unsigned long _ProcessFileLayoutsThreadProc(void *);
	void FindFirstQueryFileLayout(unsigned short const *,unsigned __int64,unsigned long);
	void FixupUnresolvedReferences();
	void Init(unsigned short const *,bool,bool,bool *);
	void PopulateWellKnownExtensions();
	void ResolveTopMostParentId(__int64);
	~CTreeWalker();
};

struct CleanMgrEmptyCallBack
{
	virtual long PurgeProgress(unsigned __int64,unsigned __int64,unsigned long,unsigned short const *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ScanProgress(unsigned __int64,unsigned long,unsigned short const *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CleanMgrHelper
{
	void _CleanupPlugins();
public:
	CleanMgrHelper();
	long InitializeWithType(unsigned short const *,CLEANMGR_TYPE,unsigned long);
	long Purge(CLEANMGR_TYPE);
	virtual ~CleanMgrHelper();
};

struct CloudFilePolicy
{
	static long UpdateCleanupList(_STORAGE_DEVICE_INFO,std::list<std::shared_ptr<CCleanupPolicy>,std::allocator<std::shared_ptr<CCleanupPolicy> > > &);
	virtual long CleanupItem();
};

struct DeepGetFileSize
{
	long InitDeepGetFileSize(unsigned short const *);
	~DeepGetFileSize();
};

struct DownloadsFolderPolicy
{
	static long UpdateCleanupList(_STORAGE_DEVICE_INFO,std::list<std::shared_ptr<CCleanupPolicy>,std::allocator<std::shared_ptr<CCleanupPolicy> > > &,std::vector<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > &);
	virtual long CleanupItem();
};

struct FOLDER_USAGE
{
	FOLDER_USAGE(FOLDER_USAGE const &);
	FOLDER_USAGE(__int64,unsigned long,unsigned __int64);
	~FOLDER_USAGE();
};

class FileSystemUtility
{
protected:
	long Initialize();
	static int FormatCallback(_FMIFS_PACKET_TYPE,unsigned long,void *);
	static int ScanCallback(_FMIFS_PACKET_TYPE,unsigned long,void *);
public:
	long FormatVolume(wchar_t const *,wchar_t const *,unsigned long);
	long FormatVolumeEx(wchar_t const *,wchar_t const *,unsigned long,unsigned long,wchar_t const *);
	long ScanVolume(unsigned long,wchar_t const *,wchar_t const *,unsigned char,unsigned long,unsigned long *);
	static long CreateFileSystemUtility(FileSystemUtility * *);
	virtual ~FileSystemUtility();
};

struct FoundFolderInfo
{
	~FoundFolderInfo();
};

struct ImageLogger
{
	virtual ~ImageLogger();
	void Log(unsigned __int64,LogLevel,wchar_t const *,...);
};

namespace Microsoft
{
	namespace WRL
	{
		struct ComPtr<IAsyncInfo>
		{
			~ComPtr<IAsyncInfo>();
		};

		struct ComPtr<IEnumShellItems>
		{
			~ComPtr<IEnumShellItems>();
		};

		struct ComPtr<IFileOperation>
		{
			~ComPtr<IFileOperation>();
		};

		struct ComPtr<IFlightSettingsAPIBroker>
		{
			~ComPtr<IFlightSettingsAPIBroker>();
		};

		struct ComPtr<IKnownFolder>
		{
			~ComPtr<IKnownFolder>();
		};

		struct ComPtr<IKnownFolderManager>
		{
			~ComPtr<IKnownFolderManager>();
		};

		struct ComPtr<IMarshal>
		{
			~ComPtr<IMarshal>();
		};

		struct ComPtr<INetworkCostManager>
		{
			~ComPtr<INetworkCostManager>();
		};

		struct ComPtr<IObjectArray>
		{
			~ComPtr<IObjectArray>();
		};

		struct ComPtr<IRegisteredTask>
		{
			~ComPtr<IRegisteredTask>();
		};

		struct ComPtr<IRestrictedErrorInfo>
		{
			~ComPtr<IRestrictedErrorInfo>();
		};

		struct ComPtr<IShellItem2>
		{
			~ComPtr<IShellItem2>();
		};

		struct ComPtr<IShellItem>
		{
			~ComPtr<IShellItem>();
		};

		struct ComPtr<IStorageProviderInfo>
		{
			~ComPtr<IStorageProviderInfo>();
		};

		struct ComPtr<ISyncRootManager>
		{
			~ComPtr<ISyncRootManager>();
		};

		struct ComPtr<ISyncRootManagerPriv>
		{
			~ComPtr<ISyncRootManagerPriv>();
		};

		struct ComPtr<ITaskFolder>
		{
			~ComPtr<ITaskFolder>();
		};

		struct ComPtr<ITaskService>
		{
			~ComPtr<ITaskService>();
		};

		struct ComPtr<IUnknown>
		{
			~ComPtr<IUnknown>();
		};

		struct ComPtr<Windows::ApplicationModel::IPackage>
		{
			~ComPtr<Windows::ApplicationModel::IPackage>();
		};

		struct ComPtr<Windows::ApplicationModel::IPackageId>
		{
			~ComPtr<Windows::ApplicationModel::IPackageId>();
		};

		struct ComPtr<Windows::Data::Json::IJsonObject>
		{
			~ComPtr<Windows::Data::Json::IJsonObject>();
		};

		struct ComPtr<Windows::Data::Json::IJsonValue>
		{
			~ComPtr<Windows::Data::Json::IJsonValue>();
		};

		struct ComPtr<Windows::Data::Json::IJsonValueStatics>
		{
			~ComPtr<Windows::Data::Json::IJsonValueStatics>();
		};

		struct ComPtr<Windows::Foundation::Collections::IIterable<Windows::Management::Deployment::PackageVolume *> >
		{
			~ComPtr<Windows::Foundation::Collections::IIterable<Windows::Management::Deployment::PackageVolume *> >();
		};

		struct ComPtr<Windows::Foundation::Collections::IIterator<Windows::Management::Deployment::PackageVolume *> >
		{
			~ComPtr<Windows::Foundation::Collections::IIterator<Windows::Management::Deployment::PackageVolume *> >();
		};

		struct ComPtr<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package *> >
		{
			~ComPtr<Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Package *> >();
		};

		struct ComPtr<Windows::Foundation::Collections::IVectorView<Windows::System::User *> >
		{
			~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::System::User *> >();
		};

		struct ComPtr<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User *> *> >
		{
			~ComPtr<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User *> *> >();
		};

		struct ComPtr<Windows::Foundation::IAsyncOperation<Windows::Management::Deployment::PackageVolume *> >
		{
			~ComPtr<Windows::Foundation::IAsyncOperation<Windows::Management::Deployment::PackageVolume *> >();
		};

		struct ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Management::Deployment::PackageVolume *> >
		{
			~ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Management::Deployment::PackageVolume *> >();
		};

		struct ComPtr<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult *,Windows::Management::Deployment::DeploymentProgress> >
		{
			~ComPtr<Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult *,Windows::Management::Deployment::DeploymentProgress> >();
		};

		struct ComPtr<Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Management::Deployment::DeploymentResult *,Windows::Management::Deployment::DeploymentProgress> >
		{
			~ComPtr<Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Management::Deployment::DeploymentResult *,Windows::Management::Deployment::DeploymentProgress> >();
		};

		struct ComPtr<Windows::Management::Deployment::IPackageManager3>
		{
			~ComPtr<Windows::Management::Deployment::IPackageManager3>();
		};

		struct ComPtr<Windows::Management::Deployment::IPackageManager>
		{
			~ComPtr<Windows::Management::Deployment::IPackageManager>();
		};

		struct ComPtr<Windows::Management::Deployment::IPackageVolume>
		{
			~ComPtr<Windows::Management::Deployment::IPackageVolume>();
		};

		struct ComPtr<Windows::Management::Deployment::Internal::IPackageManagerInternal>
		{
			~ComPtr<Windows::Management::Deployment::Internal::IPackageManagerInternal>();
		};

		struct ComPtr<Windows::System::IUser>
		{
			~ComPtr<Windows::System::IUser>();
		};

		struct ComPtr<Windows::System::IUserStatics>
		{
			~ComPtr<Windows::System::IUserStatics>();
		};

		struct ComPtr<Windows::System::Internal::ISignInStateManager>
		{
			~ComPtr<Windows::System::Internal::ISignInStateManager>();
		};

		struct DelegateTraits<-1>
		{
			static void EnsureStackSnapshot(long);
		};

		namespace Details
		{
			struct ImplementsHelper<RuntimeClassFlags<2>,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::System::User *> *>,FtmBase>
			{
				~ImplementsHelper<RuntimeClassFlags<2>,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::System::User *> *>,FtmBase>();
			};

			struct ImplementsHelper<RuntimeClassFlags<2>,1,FtmBase>
			{
				~ImplementsHelper<RuntimeClassFlags<2>,1,FtmBase>();
			};

			struct ModuleBase
			{
				static ModuleBase * module_;
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::System::User *> *>,FtmBase>
			{
			protected:
				virtual ~RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::System::User *> *>,FtmBase>();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Management::Deployment::PackageVolume *> >
			{
			protected:
				virtual ~RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Management::Deployment::PackageVolume *> >();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Management::Deployment::DeploymentResult *,Windows::Management::Deployment::DeploymentProgress> >
			{
			protected:
				virtual ~RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Management::Deployment::DeploymentResult *,Windows::Management::Deployment::DeploymentProgress> >();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			void RaiseException(long,unsigned long);
		};

		struct FtmBase
		{
			virtual long DisconnectObject(unsigned long);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			~FtmBase();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::System::User *> *>,FtmBase>
		{
			virtual ~RuntimeClass<RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::System::User *> *>,FtmBase>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Management::Deployment::PackageVolume *> >
		{
			virtual ~RuntimeClass<RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Management::Deployment::PackageVolume *> >();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Management::Deployment::DeploymentResult *,Windows::Management::Deployment::DeploymentProgress> >
		{
			virtual ~RuntimeClass<RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Management::Deployment::DeploymentResult *,Windows::Management::Deployment::DeploymentProgress> >();
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
				struct SyncLockCriticalSection
				{
					~SyncLockCriticalSection();
				};

				struct SyncLockExclusive
				{
					~SyncLockExclusive();
				};

				struct SyncLockShared
				{
					~SyncLockShared();
				};

			};

			struct HString
			{
				~HString();
			};

			struct HStringReference
			{
				HStringReference<39>(unsigned short (&)[39]);
				~HStringReference();
			};

			struct SRWLock
			{
				Details::SyncLockExclusive LockExclusive();
				Details::SyncLockShared LockShared();
			};

		};

	};

};

struct ProductInfo
{
	~ProductInfo();
};

namespace RecursiveUtil
{
	long DeleteCallback(RecursiveUtil::SCAN_STATE,unsigned short const *,_WIN32_FIND_DATAW *,unsigned long);
	long RecursiveScanDirectory(unsigned short const *,unsigned long,int,_FILETIME *);
	void CreateTimeThreshold(unsigned long,_FILETIME *);
};

struct RecycleBinPolicy
{
	static long UpdateCleanupList(_STORAGE_DEVICE_INFO,std::list<std::shared_ptr<CCleanupPolicy>,std::allocator<std::shared_ptr<CCleanupPolicy> > > &);
	virtual long CleanupItem();
};

struct ScanThreadProcParams
{
	~ScanThreadProcParams();
};

class ServiceWatchContext
{
	static int InitServiceWatchOnce(_RTL_RUN_ONCE *,void *,void * *);
	static long StateNotificationCallback(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
	static unsigned long ServiceWatchThreadProc(void *);
};

namespace StorSvc
{
	namespace TreeWalker
	{
		struct RegistryEntry
		{
			~RegistryEntry();
		};

		class RegistryHelper
		{
			static long DeleteVolume(unsigned short,MediaClass,bool,bool);
			static long ReadRegistry(std::list<RegistryEntry,std::allocator<RegistryEntry> > &,MediaClass,bool,bool);
			static long ReadRegistry(std::list<RegistryEntry,std::allocator<RegistryEntry> > &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,bool);
			static long WriteRegistry(std::list<RegistryEntry,std::allocator<RegistryEntry> > const &,MediaClass,bool,bool);
			static long WriteRegistry(std::list<RegistryEntry,std::allocator<RegistryEntry> > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,bool);
			static long WriteTimeStamp(unsigned short,MediaClass,bool,bool);
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > MediaString(MediaClass);
		};

	};

};

struct StorageCleanmgrProvider
{
	static _TlgProvider_t const * Provider();
};

class StorageCleanup
{
	bool IsApplicationRunning(void *);
	long CleanupApplicationTempFolders(_STORAGE_TRIGGER_CLEANUP_PARAMETERS *);
	long CleanupCallExternalAgents(_STORAGE_TRIGGER_CLEANUP_PARAMETERS *);
	long CleanupKnownPaths(_STORAGE_TRIGGER_CLEANUP_PARAMETERS *);
	long CleanupKnownPathsByChamberId(_STORAGE_TRIGGER_CLEANUP_PARAMETERS *,unsigned short const *,int);
	long CleanupPath(_STORAGE_FOLDER_PARAMS *,unsigned short const *);
	static unsigned long TriggerStorageCleanupThreadProc(void *);
protected:
	long CalculateThresholds();
	long RegisterFileChangeNotifications();
	static void FileChangeCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_WAIT *,long);
	static void FileChangeEnableTimerCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
public:
	StorageCleanup();
	long Deinit();
	long Init(StorageNotify *,_STORAGE_DEVICE_TYPE,unsigned short const *);
	long PublishFreeSpaceState(_STORAGE_FREE_SPACE_STATE);
	long PublishTempCleanupState(_STORAGE_TEMP_CLEANUP_STATE);
	long TriggerStorageCleanup(_STORAGE_TRIGGER_CLEANUP_PARAMETERS *);
	static long RunSilentCleanup();
	void CompleteTempDirectoryCleanup();
	~StorageCleanup();
};

namespace StorageHealth
{
	class AlphaFeatureGenerator
	{
		int GetSignalIndex(std::vector<_SignalInfo,std::allocator<_SignalInfo> > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >);
		long AddMissingSignalDays(std::vector<_SignalInfo,std::allocator<_SignalInfo> >,std::vector<_SignalValues,std::allocator<_SignalValues> > &);
		long AddNewSignals(std::vector<_SignalInfo,std::allocator<_SignalInfo> > &,std::vector<_SignalValues,std::allocator<_SignalValues> > &);
		long CombineSrbStatus(std::vector<_SignalInfo,std::allocator<_SignalInfo> > const &,_SignalValues const &,double &);
		void CreateFilterForSignals(std::vector<_SignalInfo,std::allocator<_SignalInfo> > const &,std::vector<bool,std::allocator<bool> > &);
		void GetAllVendorCodes(std::vector<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > &);
	public:
		virtual long Generate(_StorageHealthInput *);
		virtual void GetFeatures(std::vector<Feature,std::allocator<Feature> > &);
		virtual void SetMaxDaysOfSignals(int);
		virtual void SetMinDaysOfSignals(int);
	};

	class BinnedFeatureGenerator
	{
		double CombineSrbStatus(std::vector<_SignalInfo,std::allocator<_SignalInfo> > const &,_SignalValues const &);
		int GetSignalIndex(std::vector<_SignalInfo,std::allocator<_SignalInfo> > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >);
		long AddNewSignals(std::vector<_SignalInfo,std::allocator<_SignalInfo> > &,std::vector<_SignalValues,std::allocator<_SignalValues> > &);
		void CreateFilterForSignals(std::vector<_SignalInfo,std::allocator<_SignalInfo> > const &,std::vector<bool,std::allocator<bool> > &);
	public:
		virtual long Generate(_StorageHealthInput *);
		virtual void GetFeatures(std::vector<Feature,std::allocator<Feature> > &);
		virtual void SetMaxDaysOfSignals(int);
		virtual void SetMinDaysOfSignals(int);
	};

	struct EventListener
	{
		EventListener(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >);
		long FetchEvents(std::vector<void *,std::allocator<void *> > &);
		long GetEventValues(void *,_EVT_RENDER_CONTEXT_FLAGS,std::unique_ptr<_EVT_VARIANT,std::default_delete<_EVT_VARIANT> > &,unsigned long &);
	};

	struct FeatureGeneratorFactory
	{
		std::shared_ptr<FeatureGenerator> GetGenerator(FeatureGenType);
	};

	class OneSettings
	{
		long CloseOpenConnections();
		long CreateQueryString();
		long GetCloudSettings();
		long GetDeviceClass(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
		long GetDeviceId(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
		long GetDeviceSku(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
		long GetEtagFromResponse(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &,unsigned long &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
		long GetEtagHeaderFromRegistry(unsigned short *,unsigned long);
		long GetFlightSettings(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
		long GetOSVersion(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
		long GetUiLocale(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
		long MapWinhttpStatusToHresult(unsigned long);
		long OpenWebRequest(unsigned short const *);
		long ParseJsonBlob(char const *);
		long SaveEtagHeaderToRegistry(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >);
		long UpdateNextRefreshTime();
	public:
		long ForceResetQueryState();
		long GetValue(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
		long Initialize(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,HKEY__ *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >);
		long Query();
	};

	struct PredictorFactory
	{
		std::shared_ptr<Predictor> GetPredictor(PredictionModel,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >);
	};

	class SVMPredictor
	{
		void GetModelWriteOrder(std::vector<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > &);
	public:
		virtual double GetScore();
		virtual long GetModelParamNames(std::vector<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > &);
		virtual long GetModelParams(std::map<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::vector<double,std::allocator<double> >,std::less<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >,std::allocator<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,std::vector<double,std::allocator<double> > > > > &);
		virtual long ParseModelParam(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::vector<double,std::allocator<double> > &);
		virtual long Predict(std::vector<Feature,std::allocator<Feature> > const &);
		virtual long ReadModelFromFile(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::map<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::vector<double,std::allocator<double> >,std::less<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >,std::allocator<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,std::vector<double,std::allocator<double> > > > > &);
		virtual long SetModelParams(std::map<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::vector<double,std::allocator<double> >,std::less<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >,std::allocator<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,std::vector<double,std::allocator<double> > > > >);
		virtual long ValidateFeatures(std::vector<Feature,std::allocator<Feature> > const &);
		virtual long ValidateModel();
		virtual long WriteModelToFile(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::map<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::vector<double,std::allocator<double> >,std::less<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >,std::allocator<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,std::vector<double,std::allocator<double> > > > >);
	};

	class SignalAggregator
	{
		long GetNonPeriodicSignals(std::vector<_SignalValues,std::allocator<_SignalValues> > &,std::vector<_SignalInfo,std::allocator<_SignalInfo> > &,std::vector<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > &);
		long GetPeriodicSignals(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::vector<_SignalInfo,std::allocator<_SignalInfo> > &,std::vector<_SignalValues,std::allocator<_SignalValues> > &);
	public:
		SignalAggregator(int);
		long GetDeviceAge(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,unsigned __int64 &,unsigned __int64 &);
		long GetSignals(std::vector<_StorageHealthInput,std::allocator<_StorageHealthInput> > &);
		virtual ~SignalAggregator();
	};

	struct SignalArchiver
	{
		long Deserialize(std::map<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,_SignalArchiveData,std::less<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >,std::allocator<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,_SignalArchiveData> > > &);
		long Serialize(std::map<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,_SignalArchiveData,std::less<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >,std::allocator<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,_SignalArchiveData> > > const &,unsigned __int64);
	};

	class SmartSignalAggregator
	{
		_SYSTEMTIME GetLatestArchivalTime(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::map<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::map<int,_SYSTEMTIME,std::less<int>,std::allocator<std::pair<int const ,_SYSTEMTIME> > >,std::less<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >,std::allocator<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,std::map<int,_SYSTEMTIME,std::less<int>,std::allocator<std::pair<int const ,_SYSTEMTIME> > > > > > &);
		long AggregateSignals(int,_SYSTEMTIME,std::vector<double,std::allocator<double> > &,std::vector<_SignalValues,std::allocator<_SignalValues> > &);
		long GetDiskGuid(_EVT_VARIANT *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	public:
		long GetParsedSmartAttributes(_EVT_VARIANT *,_TELEMETRY_SMART_STRUCT &);
		long GetSignals(std::map<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::map<int,_SYSTEMTIME,std::less<int>,std::allocator<std::pair<int const ,_SYSTEMTIME> > >,std::less<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >,std::allocator<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,std::map<int,_SYSTEMTIME,std::less<int>,std::allocator<std::pair<int const ,_SYSTEMTIME> > > > > >,std::map<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,_SignalData,std::less<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >,std::allocator<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,_SignalData> > > &);
		virtual ~SmartSignalAggregator();
	};

	class SpErrPerfSignalAggregator
	{
		_SYSTEMTIME GetLatestArchivalTime(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::map<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::map<int,_SYSTEMTIME,std::less<int>,std::allocator<std::pair<int const ,_SYSTEMTIME> > >,std::less<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >,std::allocator<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,std::map<int,_SYSTEMTIME,std::less<int>,std::allocator<std::pair<int const ,_SYSTEMTIME> > > > > > &);
		long AggregateSignals(int,_SYSTEMTIME,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,_DiskInfo &,std::vector<double,std::allocator<double> > &,std::map<int,int,std::less<int>,std::allocator<std::pair<int const ,int> > > &,std::vector<_SignalValues,std::allocator<_SignalValues> > &);
		long GetDiskGuid(_EVT_VARIANT *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
		long GetMiniportName(_EVT_VARIANT *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
		long GetSignalBucketCounts(_EVT_VARIANT *,std::vector<double,std::allocator<double> > &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
		long GetSignalIOCounts(_EVT_VARIANT *,std::vector<double,std::allocator<double> > &);
		long GetSignalMaxLatency(_EVT_VARIANT *,std::vector<double,std::allocator<double> > &);
		long GetSignalMediumAndHardwareErrors(_RAID_TELEMETRY_ERROR_ENTRY *,unsigned int,std::vector<double,std::allocator<double> > &);
		long GetSignalSampledError(_EVT_VARIANT *,unsigned int &,std::unique_ptr<_RAID_TELEMETRY_ERROR_ENTRY,std::default_delete<_RAID_TELEMETRY_ERROR_ENTRY> > &);
		long GetSignalSenseKey(_RAID_TELEMETRY_ERROR_ENTRY *,unsigned int,std::vector<double,std::allocator<double> > &);
		long GetSignalSrbStatus(_RAID_TELEMETRY_ERROR_ENTRY *,unsigned int,std::vector<double,std::allocator<double> > &);
		long GetSignalTotalDeviceFailure(_EVT_VARIANT *,std::vector<double,std::allocator<double> > &);
		long GetVendorId(_EVT_VARIANT *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	public:
		long GetSignals(std::map<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::map<int,_SYSTEMTIME,std::less<int>,std::allocator<std::pair<int const ,_SYSTEMTIME> > >,std::less<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >,std::allocator<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,std::map<int,_SYSTEMTIME,std::less<int>,std::allocator<std::pair<int const ,_SYSTEMTIME> > > > > >,std::map<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,_SignalData,std::less<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >,std::allocator<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,_SignalData> > > &);
		virtual ~SpErrPerfSignalAggregator();
	};

	class StorageHealthHandler
	{
		long GetBootDisk(std::vector<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &,bool &);
	public:
		StorageHealthHandler(PredictionModel);
		long EvaluateHealth();
		~StorageHealthHandler();
	};

	struct StorageHealthScore
	{
		~StorageHealthScore();
	};

	class StorageHealthSettings
	{
		long CompareSettings(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,bool,bool &);
		unsigned long GetSpecifiedSetting(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,unsigned long,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >);
	public:
		StorageHealthSettings();
		bool GetEvaluateHealthEnabledSetting();
		bool IsNetworkConnectionMetered();
		double GetWarningThresholdSetting();
		long CheckAndUpdateModel(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >);
		std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > GetModelFileLocation();
		unsigned long GetMajorModelVersionOnDevice();
	};

	class TimeSeriesFeatureGenerator
	{
		double TACF(int,int,int,double,double,bool,std::vector<_SignalValues,std::allocator<_SignalValues> > &);
		double TVariance(int,int,double,bool,std::vector<_SignalValues,std::allocator<_SignalValues> > &,double &);
		int GetSignalIndex(std::vector<_SignalInfo,std::allocator<_SignalInfo> > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >);
		long AddMissingSignalDays(std::vector<_SignalInfo,std::allocator<_SignalInfo> >,std::vector<_SignalValues,std::allocator<_SignalValues> > &);
		long AddNewSignals(std::vector<_SignalInfo,std::allocator<_SignalInfo> > &,std::vector<_SignalValues,std::allocator<_SignalValues> > &);
		long CombineSrbStatus(std::vector<_SignalInfo,std::allocator<_SignalInfo> > const &,_SignalValues const &,double &);
		void CreateFilterForSignals(std::vector<_SignalInfo,std::allocator<_SignalInfo> > const &,std::vector<bool,std::allocator<bool> > &);
		void GetAllMiniportNames(std::vector<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > &);
		void GetAllVendorCodes(std::vector<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > &);
	public:
		virtual long Generate(_StorageHealthInput *);
		virtual void GetFeatures(std::vector<Feature,std::allocator<Feature> > &);
		virtual void SetMaxDaysOfSignals(int);
		virtual void SetMinDaysOfSignals(int);
	};

	struct _DiskInfo
	{
		~_DiskInfo();
	};

	struct _FeatureInfo
	{
		~_FeatureInfo();
	};

	struct _SignalArchiveData
	{
		_SignalArchiveData & operator=(_SignalArchiveData const &);
		_SignalArchiveData();
		~_SignalArchiveData();
	};

	struct _SignalData
	{
		~_SignalData();
	};

	struct _SignalInfo
	{
		~_SignalInfo();
	};

	struct _SignalValues
	{
		~_SignalValues();
	};

	struct _StorageHealthInput
	{
		~_StorageHealthInput();
	};

};

struct StorageNotify
{
	long CreateState(_WNF_STATE_NAME *,void *);
	long Init(void *);
	long PublishState(_WNF_STATE_NAME,unsigned long,int *);
};

class StorageService
{
protected:
	int CheckPresenceState(_STORAGE_DEVICE_TYPE,unsigned long,_STORAGE_PRESENCE_STATE);
	int IsRemovable(unsigned short *,unsigned short *,int);
	int IsVolumeStatusSet(_STORAGE_DEVICE_TYPE,unsigned long,unsigned long);
	int SupportsAppXInstall(_STORAGE_DEVICE_TYPE,unsigned long);
	long CheckDeviceId(_STORAGE_DEVICE_TYPE,unsigned long);
	long CheckDeviceParameters(_STORAGE_DEVICE_TYPE,unsigned long,unsigned long);
	long CleanUpDifferentPairedDevice(_STORAGE_DEVICE_TYPE,unsigned long);
	long CreateStorageCardDirectory(_STORAGE_DEVICE_TYPE,unsigned long,unsigned short const *,unsigned long,_SECURITY_ATTRIBUTES *,_ACL *);
	long DetermineAppPairingState(_STORAGE_DEVICE_TYPE,unsigned long);
	long DetermineBusType(unsigned short const *,_STORAGE_DEVICE_TYPE,unsigned long);
	long DetermineBusType(unsigned short const *,unsigned long *);
	long DetermineDirtyState(_STORAGE_DEVICE_TYPE,unsigned long);
	long DetermineDisabledState(_STORAGE_DEVICE_TYPE,unsigned long);
	long DetermineFormatState(_STORAGE_DEVICE_TYPE,unsigned long);
	long DetermineIfCardIsDroppingWrites(_STORAGE_DEVICE_TYPE,unsigned long,unsigned char *);
	long DetermineNewCardState(_STORAGE_DEVICE_TYPE,unsigned long);
	long DetermineReadOnlyState(unsigned short const *,_STORAGE_DEVICE_TYPE,unsigned long);
	long EnsureSystemVolumeInformationFolder(_STORAGE_DEVICE_TYPE,unsigned long);
	long GenerateStorageId(_STORAGE_DEVICE_TYPE,unsigned long,unsigned char *,int);
	long GetActiveDeviceInstance(_STORAGE_DEVICE_TYPE,unsigned long,unsigned long *);
	long GetAppMetadataFilePath(_STORAGE_DEVICE_TYPE,unsigned long,unsigned short *);
	long GetDeviceAppPairingId(_GUID *);
	long GetMetadataFilePath(_STORAGE_DEVICE_TYPE,unsigned long,unsigned short *);
	long GetSectorSize(unsigned short const *,unsigned long *);
	long GetStorageCardAppMetadata(_STORAGE_DEVICE_TYPE,unsigned long,_GUID *);
	long GetStorageCardMetadata(_STORAGE_DEVICE_TYPE,unsigned long);
	long InitStorageCardSlot(unsigned long);
	long PairStorageCardForApps(_STORAGE_DEVICE_TYPE,unsigned long,int);
	long ProcessNewStorageCard(unsigned short const *,unsigned short const *,_STORAGE_DEVICE_TYPE,unsigned long);
	long ProvisionStorageCardForLegacyMobile(_STORAGE_DEVICE_TYPE,unsigned long);
	long ProvisionStorageCardForUser(_STORAGE_DEVICE_TYPE,unsigned long,unsigned short *,unsigned short *,unsigned long,_SECURITY_ATTRIBUTES *,_ACL *);
	long RegisterHostControllerHandler();
	long RegisterMountVolumeHandler(void *,HCMNOTIFICATION__ * *);
	long RegisterVolumeHandler();
	long RemoveAppxPackagesAndVolume(Windows::Management::Deployment::IPackageVolume *);
	long RemoveAppxPackagesForCurrentUser(Windows::Management::Deployment::IPackageVolume *);
	long RemoveAppxPackagesForLoggedOnUsers(Windows::Management::Deployment::IPackageVolume *);
	long SetLibraries(unsigned short const *,unsigned long,int);
	long SetStorageCardAppMetadata(_STORAGE_DEVICE_TYPE,unsigned long,_GUID *);
	long SetStorageCardDisabled(_STORAGE_DEVICE_TYPE,unsigned long,unsigned long);
	long SetStorageCardMetadata(_STORAGE_DEVICE_TYPE,unsigned long);
	long SetStorageCardPaths(unsigned short const *,_STORAGE_DEVICE_TYPE,unsigned long);
	long SetWriteAccess(_STORAGE_DEVICE_TYPE,unsigned long,unsigned long);
	long SetWriteAccessLegacyMobile(_STORAGE_DEVICE_TYPE,unsigned long,unsigned long);
	long UpdateAppPairingState(_STORAGE_DEVICE_TYPE,unsigned long,unsigned long);
	long UpdateDismountState(_STORAGE_DEVICE_TYPE,unsigned long,_STORAGE_DISMOUNT_REASON);
	long UpdateMountState(_STORAGE_DEVICE_TYPE,unsigned long);
	long UpdatePresenceState(_STORAGE_DEVICE_TYPE,unsigned long,_STORAGE_PRESENCE_STATE);
	long UpdateVolumeStatus(_STORAGE_DEVICE_TYPE,unsigned long);
	long WaitForMountVolume(unsigned short const *);
	virtual long CreateVolumeList(unsigned long,STORE_ID *);
	virtual long Initialize(unsigned long,STORE_ID *);
	void ChangeServiceStartSettings();
	void ClearStorageCardPaths(_STORAGE_DEVICE_TYPE,unsigned long);
	void InitTempDirectoryCleanup();
	void ProvisionInternalStorage();
	void SetStorageCardPowerPolicy(_STORAGE_DEVICE_TYPE,unsigned long);
public:
	long CompleteInit();
	long Deinit();
	long DismountVolume(_STORAGE_DEVICE_TYPE,unsigned long,unsigned long);
	long FinalizeVolume(_STORAGE_DEVICE_TYPE,unsigned long);
	long FormatVolume(_STORAGE_DEVICE_TYPE,unsigned long,unsigned long);
	long GetStorageDeviceInfo(void *,_STORAGE_DEVICE_TYPE,unsigned long,_STORAGE_DEVICE_INFO *);
	long GetStorageInstanceCount(_STORAGE_DEVICE_TYPE,unsigned long *);
	long GetStoragePolicySettings(_STORAGE_POLICY,unsigned short const *,unsigned long *);
	long GetStorageSettings(_STORAGE_DEVICE_TYPE,unsigned long,_STORAGE_SETTING,unsigned long *);
	long Init(int);
	long MountVolume(_STORAGE_DEVICE_TYPE,unsigned long,unsigned long);
	long ProcessHostControllerChange();
	long ProcessVolumeChange();
	long ProvisionForAppInstall(_STORAGE_DEVICE_TYPE,unsigned long);
	long ResetMountedDevicesRegistryWait();
	long ScanVolume(_STORAGE_DEVICE_TYPE,unsigned long,_STORAGE_SCAN_VOLUME_PARAMS *);
	long SetStoragePolicySettings(_STORAGE_POLICY,unsigned short const *,unsigned long);
	long SetStorageSettings(_STORAGE_DEVICE_TYPE,unsigned long,_STORAGE_SETTING,unsigned long);
	long TriggerStorageCleanup(_STORAGE_TRIGGER_CLEANUP_PARAMETERS *);
	long TriggerStoragePolicies(_STORAGE_TRIGGER_POLICIES_PARAMETERS *);
	static long CreateStorageService(StorageService * *,void (*)(wchar_t const * const),unsigned long,STORE_ID *);
	virtual VolumeTrackerList * GetVolumeList();
	virtual ~StorageService();
	void UpdateSystemReservedSize(unsigned short const *);
};

class StorageUsage
{
	void GetWalker(_STORAGE_DEVICE_TYPE,unsigned long,CTreeWalker * *);
public:
	long CalculateStorageType(_DATA_TYPE_NODE,bool,unsigned __int64 *,unsigned __int64 *);
	long FindNextStorageTypeEx(_DATA_TYPE_NODE,unsigned short const *,unsigned short * *,unsigned __int64 *,unsigned __int64 *,bool);
	long GetDirectorySizeUsingNode(unsigned long,_DATA_TYPE_NODE,CTreeWalker *,unsigned __int64 *,unsigned __int64 *);
	long SetNodeEx(_STORAGE_DEVICE_TYPE,unsigned long,_DATA_TYPE_NODE,unsigned short const *,_STORAGE_SELECTVOL_FLAGS,unsigned __int64 *,unsigned __int64 *);
	void EnsureDirectoryScan(bool *);
};

struct StorageUsageCache
{
	long GetValue(_DATA_TYPE_NODE,unsigned long,unsigned long,_STORAGE_TYPE_CACHE_VALUES *);
	long SetValue(unsigned long,unsigned long,std::pair<_DATA_TYPE_NODE,_STORAGE_TYPE_CACHE_VALUES> &,bool);
	~StorageUsageCache();
};

namespace TLV
{
	std::nothrow_t const nothrow;
	void Base64Encode<129>(unsigned char const *,unsigned __int64,char (&)[129]);
};

struct TemporaryFilePolicy
{
	static long UpdateCleanupList(_STORAGE_DEVICE_INFO,unsigned long,std::list<std::shared_ptr<CCleanupPolicy>,std::allocator<std::shared_ptr<CCleanupPolicy> > > &);
	virtual long CleanupItem();
};

struct TraceLoggingCorrelationVector
{
	bool ToString(char *);
	static TraceLoggingCorrelationVector * Set(char const *,bool);
};

class VolumeTrackerList
{
	long FindDisk(STORE_ID &,_DISK_NODE * *,_DISK_NODE * *);
	long FindDisk(wchar_t const *,_DISK_NODE * *,_DISK_NODE * *);
	virtual ~VolumeTrackerList();
protected:
	long AddVolumes(bool,bool);
	long AddVolumes(wchar_t *,unsigned long,bool,bool);
	long NotifyVolumeArrival(VolumeTrackerVolume *);
public:
	bool MatchesFilteredDiskId(STORE_ID &,STORE_ID &);
	long AddDisk(wchar_t const * const);
	long AddVolume(VolumeTrackerVolume *);
	long GetVolume(STORE_ID,wchar_t const *,VolumeTrackerVolume * *,int);
	long GetVolumeFromPnpPath(wchar_t const *,VolumeTrackerVolume * *,int);
	long PopulateList(bool);
	long RemoveDisk(wchar_t const * const);
	static long CreateVolumeTrackerList(unsigned long,STORE_ID *,VolumeTrackerList * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class VolumeTrackerVolume
{
	long InitializeFromPnpPath(wchar_t const *,bool,bool);
	virtual ~VolumeTrackerVolume();
protected:
	bool IsBasicVolume(void *);
	bool IsValidDriveType(wchar_t const *);
	long CreateTemporaryGuidPath();
	long GetDeviceObjectPath(void *);
	long GetDeviceUniqueId(void *);
	long GetGuidVolumePathFromNativePath();
	long GetMountPathsInternal(wchar_t * *,unsigned __int64 *,unsigned short);
	long GetPartitionInformation();
	long GetVolumeExtentInformation(void *);
	long QueryDeviceInfo(void *,bool);
	void CleanupGuidPath();
	void LogMountPaths(wchar_t const *,unsigned __int64);
	void UpdateAttributes(PARTITION_ATTRIBUTES);
	void UpdateType(PARTITION_TYPE);
public:
	long GetPartitionName(wchar_t *,unsigned long);
	long GetPnpPath(wchar_t *,unsigned long);
	unsigned long GetPnpPathCharacterCount();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct WinOldPolicy
{
	static long UpdateCleanupList(_STORAGE_DEVICE_INFO,unsigned long,std::list<std::shared_ptr<CCleanupPolicy>,std::allocator<std::shared_ptr<CCleanupPolicy> > > &);
	virtual long CleanupItem();
};

namespace Windows
{
	namespace Foundation
	{
		long ActivateInstance<Microsoft::WRL::ComPtr<Management::Deployment::IPackageManager3> >(HSTRING__ *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Management::Deployment::IPackageManager3> >);
		long ActivateInstance<Microsoft::WRL::ComPtr<Management::Deployment::Internal::IPackageManagerInternal> >(HSTRING__ *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Management::Deployment::Internal::IPackageManagerInternal> >);
	};

	namespace Internal
	{
		class NativeString<CoTaskMemPolicy<unsigned short> >
		{
			long _EnsureCapacity(unsigned __int64);
			long _Initialize(unsigned short const *,unsigned __int64);
		public:
			long Concat(NativeString<CoTaskMemPolicy<unsigned short> > const &);
			long InitializeMessage(unsigned short const *,...);
			~NativeString<CoTaskMemPolicy<unsigned short> >();
		};

		struct String
		{
			~String();
		};

	};

	namespace Management
	{
		namespace Deployment
		{
			long WaitForDeploymentOperation(unsigned long,Foundation::IAsyncOperationWithProgress<Deployment::DeploymentResult *,Deployment::DeploymentProgress> *,Foundation::IAsyncOperationProgressHandler<Deployment::DeploymentResult *,Deployment::DeploymentProgress> *,Foundation::IAsyncOperationWithProgressCompletedHandler<Deployment::DeploymentResult *,Deployment::DeploymentProgress> *,Deployment::IDeploymentResult * *);
			long WaitForPackageVolumeOperation(Foundation::IAsyncOperation<Deployment::PackageVolume *> *,Foundation::IAsyncOperationCompletedHandler<Deployment::PackageVolume *> *,Deployment::IPackageVolume * *);
		};

	};

};

class WritePriorityLock
{
	bool WaitOnEvent(void *,long *);
	void EnterLock();
public:
	static long CreateWritePriorityLock(WritePriorityLock * *);
	virtual ~WritePriorityLock();
	void AcquireRead();
	void ReleaseRead();
};

struct auto_HDOLIST
{
	~auto_HDOLIST();
};

struct bad_cast
{
	bad_cast(bad_cast const &);
	virtual ~bad_cast();
};

struct exception
{
	exception(char const * const &);
	exception(char const * const &,int);
	exception(exception const &);
	virtual char const * what();
	virtual ~exception();
};

namespace std
{
	struct _Error_objects<int>
	{
		static _Generic_error_category _Generic_object;
		static _Iostream_error_category _Iostream_object;
		static _System_error_category _System_object;
	};

	struct _Facetptr<codecvt<unsigned short,char,int> >
	{
		static locale::facet const * const _Psave;
	};

	struct _Facetptr<ctype<char> >
	{
		static locale::facet const * const _Psave;
	};

	struct _Facetptr<ctype<unsigned short> >
	{
		static locale::facet const * const _Psave;
	};

	struct _Facetptr<num_put<char,back_insert_iterator<basic_string<char,char_traits<char>,allocator<char> > > > >
	{
		static locale::facet const * const _Psave;
	};

	struct _Facetptr<num_put<unsigned short,back_insert_iterator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >
	{
		static locale::facet const * const _Psave;
	};

	struct _Facetptr<numpunct<char> >
	{
		static locale::facet const * const _Psave;
	};

	struct _Facetptr<numpunct<unsigned short> >
	{
		static locale::facet const * const _Psave;
	};

	struct _Generic_error_category
	{
		virtual basic_string<char,char_traits<char>,allocator<char> > message(int);
		virtual char const * name();
		virtual ~_Generic_error_category();
	};

	struct _Init_locks
	{
		_Init_locks();
		~_Init_locks();
	};

	struct _Iostream_error_category
	{
		virtual basic_string<char,char_traits<char>,allocator<char> > message(int);
		virtual char const * name();
	};

	struct _List_alloc<0,_List_base_types<FileLayoutParam,allocator<FileLayoutParam> > >
	{
		_List_node<FileLayoutParam,void *> * _Buynode0(_List_node<FileLayoutParam,void *> *,_List_node<FileLayoutParam,void *> *);
		~_List_alloc<0,_List_base_types<FileLayoutParam,allocator<FileLayoutParam> > >();
	};

	struct _List_alloc<0,_List_base_types<FoundFolderInfo,allocator<FoundFolderInfo> > >
	{
		_List_node<FoundFolderInfo,void *> * _Buynode0(_List_node<FoundFolderInfo,void *> *,_List_node<FoundFolderInfo,void *> *);
		~_List_alloc<0,_List_base_types<FoundFolderInfo,allocator<FoundFolderInfo> > >();
	};

	struct _List_alloc<0,_List_base_types<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > >
	{
		_List_node<StorSvc::TreeWalker::RegistryEntry,void *> * _Buynode0(_List_node<StorSvc::TreeWalker::RegistryEntry,void *> *,_List_node<StorSvc::TreeWalker::RegistryEntry,void *> *);
		~_List_alloc<0,_List_base_types<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > >();
	};

	struct _List_alloc<0,_List_base_types<__int64,allocator<__int64> > >
	{
		_List_node<__int64,void *> * _Buynode0(_List_node<__int64,void *> *,_List_node<__int64,void *> *);
		~_List_alloc<0,_List_base_types<__int64,allocator<__int64> > >();
	};

	struct _List_alloc<0,_List_base_types<shared_ptr<CCleanupPolicy>,allocator<shared_ptr<CCleanupPolicy> > > >
	{
		_List_node<shared_ptr<CCleanupPolicy>,void *> * _Buynode0(_List_node<shared_ptr<CCleanupPolicy>,void *> *,_List_node<shared_ptr<CCleanupPolicy>,void *> *);
		~_List_alloc<0,_List_base_types<shared_ptr<CCleanupPolicy>,allocator<shared_ptr<CCleanupPolicy> > > >();
	};

	struct _List_buy<FileLayoutParam,allocator<FileLayoutParam> >
	{
		_List_node<FileLayoutParam,void *> * _Buynode<FileLayoutParam const &>(_List_node<FileLayoutParam,void *> *,_List_node<FileLayoutParam,void *> *,FileLayoutParam const &);
		~_List_buy<FileLayoutParam,allocator<FileLayoutParam> >();
	};

	struct _List_buy<FoundFolderInfo,allocator<FoundFolderInfo> >
	{
		~_List_buy<FoundFolderInfo,allocator<FoundFolderInfo> >();
	};

	struct _List_buy<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> >
	{
		_List_node<StorSvc::TreeWalker::RegistryEntry,void *> * _Buynode<StorSvc::TreeWalker::RegistryEntry const &>(_List_node<StorSvc::TreeWalker::RegistryEntry,void *> *,_List_node<StorSvc::TreeWalker::RegistryEntry,void *> *,StorSvc::TreeWalker::RegistryEntry const &);
		~_List_buy<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> >();
	};

	struct _List_buy<__int64,allocator<__int64> >
	{
		_List_node<__int64,void *> * _Buynode<__int64 const &>(_List_node<__int64,void *> *,_List_node<__int64,void *> *,__int64 const &);
		~_List_buy<__int64,allocator<__int64> >();
	};

	struct _List_buy<shared_ptr<CCleanupPolicy>,allocator<shared_ptr<CCleanupPolicy> > >
	{
		_List_node<shared_ptr<CCleanupPolicy>,void *> * _Buynode<shared_ptr<CCleanupPolicy> const &>(_List_node<shared_ptr<CCleanupPolicy>,void *> *,_List_node<shared_ptr<CCleanupPolicy>,void *> *,shared_ptr<CCleanupPolicy> const &);
		~_List_buy<shared_ptr<CCleanupPolicy>,allocator<shared_ptr<CCleanupPolicy> > >();
	};

	struct _Locinfo
	{
		_Locinfo(char const *);
		static void _Locinfo_ctor(_Locinfo *,char const *);
		static void _Locinfo_dtor(_Locinfo *);
		~_Locinfo();
	};

	struct _Lockit
	{
		_Lockit(int);
		~_Lockit();
	};

	struct _Ref_count_base
	{
		virtual void * _Get_deleter(type_info const &);
		virtual ~_Ref_count_base();
	};

	class _Ref_count_obj<CloudFilePolicy>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<DownloadsFolderPolicy>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<RecycleBinPolicy>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<StorageHealth::AlphaFeatureGenerator>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<StorageHealth::BinnedFeatureGenerator>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<StorageHealth::SVMPredictor>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<StorageHealth::TimeSeriesFeatureGenerator>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<TemporaryFilePolicy>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<WinOldPolicy>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	struct _System_error_category
	{
		virtual basic_string<char,char_traits<char>,allocator<char> > message(int);
		virtual char const * name();
		virtual error_condition default_error_condition(int);
	};

	class _Tree<_Tmap_traits<__int64,FOLDER_USAGE,less<__int64>,allocator<pair<__int64 const ,FOLDER_USAGE> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<__int64 const ,FOLDER_USAGE> > > > _Insert_at<pair<__int64 const ,FOLDER_USAGE> &,_Tree_node<pair<__int64 const ,FOLDER_USAGE>,void *> *>(bool,_Tree_node<pair<__int64 const ,FOLDER_USAGE>,void *> *,pair<__int64 const ,FOLDER_USAGE> &,_Tree_node<pair<__int64 const ,FOLDER_USAGE>,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<__int64 const ,FOLDER_USAGE> > > > _Insert_hint<pair<__int64 const ,FOLDER_USAGE> &,_Tree_node<pair<__int64 const ,FOLDER_USAGE>,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<__int64 const ,FOLDER_USAGE> > > >,pair<__int64 const ,FOLDER_USAGE> &,_Tree_node<pair<__int64 const ,FOLDER_USAGE>,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<__int64 const ,FOLDER_USAGE> > > >,bool> _Insert_nohint<pair<__int64 const ,FOLDER_USAGE> &,_Tree_node<pair<__int64 const ,FOLDER_USAGE>,void *> *>(bool,pair<__int64 const ,FOLDER_USAGE> &,_Tree_node<pair<__int64 const ,FOLDER_USAGE>,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<__int64 const ,FOLDER_USAGE>,void *> *);
		void _Erase(_Tree_node<pair<__int64 const ,FOLDER_USAGE>,void *> *);
	public:
		~_Tree<_Tmap_traits<__int64,FOLDER_USAGE,less<__int64>,allocator<pair<__int64 const ,FOLDER_USAGE> >,0> >();
	};

	class _Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,ProductInfo,StringComparatorIgnoreCase,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo> > > > _Insert_at<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo>,void *> *>(bool,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo>,void *> *,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo>,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo> > > > _Insert_hint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo>,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo> > > >,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo>,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo> > > >,bool> _Insert_nohint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo>,void *> *>(bool,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo>,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo>,void *> *);
		void _Erase(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo>,void *> *);
	public:
		~_Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,ProductInfo,StringComparatorIgnoreCase,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo> >,0> >();
	};

	class _Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,StorageHealth::_DiskInfo,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo> > > > _Insert_at<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo>,void *> *>(bool,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo>,void *> *,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo>,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo> > > > _Insert_hint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo>,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo> > > >,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo>,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo> > > >,bool> _Insert_nohint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo>,void *> *>(bool,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo>,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo>,void *> *);
		void _Erase(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo>,void *> *);
	public:
		~_Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,StorageHealth::_DiskInfo,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo> >,0> >();
	};

	class _Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,StorageHealth::_SignalArchiveData,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData> > > > _Insert_at<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData>,void *> *>(bool,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData>,void *> *,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData>,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData> > > > _Insert_hint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData>,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData> > > >,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData>,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData> > > >,bool> _Insert_nohint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData>,void *> *>(bool,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData>,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData>,void *> *);
		void _Erase(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData>,void *> *);
	public:
		void clear();
		~_Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,StorageHealth::_SignalArchiveData,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData> >,0> >();
	};

	class _Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,StorageHealth::_SignalData,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData> > > > _Insert_at<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData>,void *> *>(bool,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData>,void *> *,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData>,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData> > > > _Insert_hint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData>,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData> > > >,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData>,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData> > > >,bool> _Insert_nohint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData>,void *> *>(bool,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData>,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData>,void *> *);
		void _Erase(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData>,void *> *);
	public:
		~_Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,StorageHealth::_SignalData,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData> >,0> >();
	};

	class _Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,__int64,StringComparatorIgnoreCase,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64> > > > _Insert_at<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64>,void *> *>(bool,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64>,void *> *,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64>,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64> > > > _Insert_hint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64>,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64> > > >,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64>,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64> > > >,bool> _Insert_nohint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64>,void *> *>(bool,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64>,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64>,void *> *);
		void _Erase(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64>,void *> *);
	public:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64> > > > find(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		~_Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,__int64,StringComparatorIgnoreCase,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64> >,0> >();
	};

	class _Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > _Insert_at<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *>(bool,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > _Insert_hint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >,bool> _Insert_nohint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *>(bool,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
		void _Erase(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
	public:
		~_Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,0> >();
	};

	class _Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,double,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double> > > > _Insert_at<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double>,void *> *>(bool,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double>,void *> *,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double>,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double> > > > _Insert_hint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double>,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double> > > >,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double>,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double> > > >,bool> _Insert_nohint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double>,void *> *>(bool,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double>,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double>,void *> *);
		void _Erase(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double>,void *> *);
	public:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double> > > > find(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		void clear();
		~_Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,double,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double> >,0> >();
	};

	class _Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,int,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > > > _Insert_at<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> *>(bool,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> *,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > > > _Insert_hint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > > >,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > > >,bool> _Insert_nohint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> *>(bool,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> *);
		void _Erase(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> *);
	public:
		~_Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,int,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> >,0> >();
	};

	class _Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > > >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > > > > > _Insert_at<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > >,void *> *>(bool,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > >,void *> *,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > >,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > > > > > _Insert_hint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > >,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > > > > >,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > >,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > > > > >,bool> _Insert_nohint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > >,void *> *>(bool,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > >,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > >,void *> *);
		void _Erase(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > >,void *> *);
	public:
		~_Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > > >,0> >();
	};

	class _Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > > >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > > > > > _Insert_at<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > >,void *> *>(bool,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > >,void *> *,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > >,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > > > > > _Insert_hint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > >,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > > > > >,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > >,void *> *);
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > >,void *> * _Copy_nodes<integral_constant<bool,0> >(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > >,void *> *,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > >,void *> *,integral_constant<bool,0>);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > > > > >,bool> _Insert_nohint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > >,void *> *>(bool,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > >,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > >,void *> *);
		void _Erase(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > >,void *> *);
		void _Tidy();
	public:
		_Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > > >,0> >(_Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > > >,0> > const &,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > > > const &);
		~_Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > > >,0> >();
	};

	class _Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,unsigned __int64,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64> > > > _Insert_at<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64>,void *> *>(bool,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64>,void *> *,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64>,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64> > > > _Insert_hint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64>,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64> > > >,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64>,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64> > > >,bool> _Insert_nohint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64>,void *> *>(bool,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64>,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64>,void *> *);
		void _Erase(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64>,void *> *);
	public:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64> > > > find(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		void clear();
		~_Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,unsigned __int64,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64> >,0> >();
	};

	class _Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,vector<double,allocator<double> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > > >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > > > > > _Insert_at<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > >,void *> *>(bool,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > >,void *> *,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > >,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > > > > > _Insert_hint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > >,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > > > > >,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > >,void *> *);
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > >,void *> * _Copy_nodes<integral_constant<bool,0> >(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > >,void *> *,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > >,void *> *,integral_constant<bool,0>);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > > > > >,bool> _Insert_nohint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > >,void *> *>(bool,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > >,void *> *);
		void _Copy<integral_constant<bool,0> >(_Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,vector<double,allocator<double> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > > >,0> > const &,integral_constant<bool,0>);
		void _Destroy_if_not_nil(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > >,void *> *);
		void _Erase(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > >,void *> *);
		void _Tidy();
	public:
		_Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,vector<double,allocator<double> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > > >,0> >(_Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,vector<double,allocator<double> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > > >,0> > const &,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > > > const &);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > > > > > find(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		~_Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,vector<double,allocator<double> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > > >,0> >();
	};

	class _Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,vector<unsigned __int64,allocator<unsigned __int64> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > > >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > > > > > _Insert_at<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > >,void *> *>(bool,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > >,void *> *,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > >,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > > > > > _Insert_hint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > >,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > > > > >,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > >,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > > > > >,bool> _Insert_nohint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > >,void *> *>(bool,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > >,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > >,void *> *);
		void _Erase(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > >,void *> *);
	public:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > > > > > begin();
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > > > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > > > > >);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > > > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > > > > >,_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > > > > >);
		~_Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,vector<unsigned __int64,allocator<unsigned __int64> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > > >,0> >();
	};

	class _Tree<_Tmap_traits<int,STORAGE_USAGE,less<int>,allocator<pair<int const ,STORAGE_USAGE> >,0> >
	{
	protected:
		void _Erase(_Tree_node<pair<int const ,STORAGE_USAGE>,void *> *);
	public:
		~_Tree<_Tmap_traits<int,STORAGE_USAGE,less<int>,allocator<pair<int const ,STORAGE_USAGE> >,0> >();
	};

	class _Tree<_Tmap_traits<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<int const ,_SYSTEMTIME> > > > _Insert_at<pair<int const ,_SYSTEMTIME> &,_Tree_node<pair<int const ,_SYSTEMTIME>,void *> *>(bool,_Tree_node<pair<int const ,_SYSTEMTIME>,void *> *,pair<int const ,_SYSTEMTIME> &,_Tree_node<pair<int const ,_SYSTEMTIME>,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<int const ,_SYSTEMTIME> > > > _Insert_hint<pair<int const ,_SYSTEMTIME> &,_Tree_node<pair<int const ,_SYSTEMTIME>,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<int const ,_SYSTEMTIME> > > >,pair<int const ,_SYSTEMTIME> &,_Tree_node<pair<int const ,_SYSTEMTIME>,void *> *);
		_Tree_node<pair<int const ,_SYSTEMTIME>,void *> * _Copy_nodes<integral_constant<bool,0> >(_Tree_node<pair<int const ,_SYSTEMTIME>,void *> *,_Tree_node<pair<int const ,_SYSTEMTIME>,void *> *,integral_constant<bool,0>);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<int const ,_SYSTEMTIME> > > >,bool> _Insert_nohint<pair<int const ,_SYSTEMTIME> &,_Tree_node<pair<int const ,_SYSTEMTIME>,void *> *>(bool,pair<int const ,_SYSTEMTIME> &,_Tree_node<pair<int const ,_SYSTEMTIME>,void *> *);
		void _Copy<integral_constant<bool,0> >(_Tree<_Tmap_traits<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> >,0> > const &,integral_constant<bool,0>);
		void _Destroy_if_not_nil(_Tree_node<pair<int const ,_SYSTEMTIME>,void *> *);
		void _Erase(_Tree_node<pair<int const ,_SYSTEMTIME>,void *> *);
		void _Tidy();
	public:
		_Tree<_Tmap_traits<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> >,0> >(_Tree<_Tmap_traits<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> >,0> > const &,allocator<pair<int const ,_SYSTEMTIME> > const &);
		~_Tree<_Tmap_traits<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> >,0> >();
	};

	class _Tree<_Tmap_traits<int,int,less<int>,allocator<pair<int const ,int> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<int const ,int> > > > _Insert_at<pair<int const ,int> &,_Tree_node<pair<int const ,int>,void *> *>(bool,_Tree_node<pair<int const ,int>,void *> *,pair<int const ,int> &,_Tree_node<pair<int const ,int>,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<int const ,int> > > > _Insert_hint<pair<int const ,int> &,_Tree_node<pair<int const ,int>,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<int const ,int> > > >,pair<int const ,int> &,_Tree_node<pair<int const ,int>,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<int const ,int> > > >,bool> _Insert_nohint<pair<int const ,int> &,_Tree_node<pair<int const ,int>,void *> *>(bool,pair<int const ,int> &,_Tree_node<pair<int const ,int>,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<int const ,int>,void *> *);
		void _Erase(_Tree_node<pair<int const ,int>,void *> *);
	public:
		~_Tree<_Tmap_traits<int,int,less<int>,allocator<pair<int const ,int> >,0> >();
	};

	class _Tree<_Tmap_traits<int,unsigned __int64,less<int>,allocator<pair<int const ,unsigned __int64> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<int const ,unsigned __int64> > > > _Insert_at<pair<int const ,unsigned __int64> &,_Tree_node<pair<int const ,unsigned __int64>,void *> *>(bool,_Tree_node<pair<int const ,unsigned __int64>,void *> *,pair<int const ,unsigned __int64> &,_Tree_node<pair<int const ,unsigned __int64>,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<int const ,unsigned __int64> > > > _Insert_hint<pair<int const ,unsigned __int64> &,_Tree_node<pair<int const ,unsigned __int64>,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<int const ,unsigned __int64> > > >,pair<int const ,unsigned __int64> &,_Tree_node<pair<int const ,unsigned __int64>,void *> *);
		_Tree_node<pair<int const ,unsigned __int64>,void *> * _Copy_nodes<integral_constant<bool,0> >(_Tree_node<pair<int const ,unsigned __int64>,void *> *,_Tree_node<pair<int const ,unsigned __int64>,void *> *,integral_constant<bool,0>);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<int const ,unsigned __int64> > > >,bool> _Insert_nohint<pair<int const ,unsigned __int64> &,_Tree_node<pair<int const ,unsigned __int64>,void *> *>(bool,pair<int const ,unsigned __int64> &,_Tree_node<pair<int const ,unsigned __int64>,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<int const ,unsigned __int64>,void *> *);
		void _Erase(_Tree_node<pair<int const ,unsigned __int64>,void *> *);
		void _Tidy();
	public:
		_Tree<_Tmap_traits<int,unsigned __int64,less<int>,allocator<pair<int const ,unsigned __int64> >,0> >(_Tree<_Tmap_traits<int,unsigned __int64,less<int>,allocator<pair<int const ,unsigned __int64> >,0> > const &,allocator<pair<int const ,unsigned __int64> > const &);
		~_Tree<_Tmap_traits<int,unsigned __int64,less<int>,allocator<pair<int const ,unsigned __int64> >,0> >();
	};

	class _Tree<_Tmap_traits<int,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> >,less<int>,allocator<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > > >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > > > > > _Insert_at<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > > &,_Tree_node<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > >,void *> *>(bool,_Tree_node<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > >,void *> *,pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > > &,_Tree_node<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > >,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > > > > > _Insert_hint<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > > &,_Tree_node<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > >,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > > > > >,pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > > &,_Tree_node<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > >,void *> *);
		_Tree_node<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > >,void *> * _Copy_nodes<integral_constant<bool,0> >(_Tree_node<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > >,void *> *,_Tree_node<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > >,void *> *,integral_constant<bool,0>);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > > > > >,bool> _Insert_nohint<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > > &,_Tree_node<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > >,void *> *>(bool,pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > > &,_Tree_node<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > >,void *> *);
		void _Copy<integral_constant<bool,0> >(_Tree<_Tmap_traits<int,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> >,less<int>,allocator<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > > >,0> > const &,integral_constant<bool,0>);
		void _Destroy_if_not_nil(_Tree_node<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > >,void *> *);
		void _Erase(_Tree_node<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > >,void *> *);
		void _Tidy();
	public:
		_Tree<_Tmap_traits<int,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> >,less<int>,allocator<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > > >,0> >(_Tree<_Tmap_traits<int,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> >,less<int>,allocator<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > > >,0> > const &,allocator<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > > > const &);
		~_Tree<_Tmap_traits<int,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> >,less<int>,allocator<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > > >,0> >();
	};

	class _Tree<_Tmap_traits<unsigned long,unsigned __int64,less<unsigned long>,allocator<pair<unsigned long const ,unsigned __int64> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned long const ,unsigned __int64> > > > _Insert_at<pair<unsigned long const ,unsigned __int64> &,_Tree_node<pair<unsigned long const ,unsigned __int64>,void *> *>(bool,_Tree_node<pair<unsigned long const ,unsigned __int64>,void *> *,pair<unsigned long const ,unsigned __int64> &,_Tree_node<pair<unsigned long const ,unsigned __int64>,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned long const ,unsigned __int64> > > > _Insert_hint<pair<unsigned long const ,unsigned __int64> &,_Tree_node<pair<unsigned long const ,unsigned __int64>,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<unsigned long const ,unsigned __int64> > > >,pair<unsigned long const ,unsigned __int64> &,_Tree_node<pair<unsigned long const ,unsigned __int64>,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned long const ,unsigned __int64> > > >,bool> _Insert_nohint<pair<unsigned long const ,unsigned __int64> &,_Tree_node<pair<unsigned long const ,unsigned __int64>,void *> *>(bool,pair<unsigned long const ,unsigned __int64> &,_Tree_node<pair<unsigned long const ,unsigned __int64>,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<unsigned long const ,unsigned __int64>,void *> *);
		void _Erase(_Tree_node<pair<unsigned long const ,unsigned __int64>,void *> *);
	public:
		~_Tree<_Tmap_traits<unsigned long,unsigned __int64,less<unsigned long>,allocator<pair<unsigned long const ,unsigned __int64> >,0> >();
	};

	class _Tree<_Tmap_traits<unsigned short,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<unsigned short>,allocator<pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > _Insert_at<pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_Tree_node<pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *>(bool,_Tree_node<pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *,pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_Tree_node<pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > _Insert_hint<pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_Tree_node<pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >,pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_Tree_node<pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >,bool> _Insert_nohint<pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_Tree_node<pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *>(bool,pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_Tree_node<pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
		void _Erase(_Tree_node<pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
	public:
		~_Tree<_Tmap_traits<unsigned short,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<unsigned short>,allocator<pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,0> >();
	};

	class _Tree<_Tset_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,0> >
	{
	protected:
		_Tree_const_iterator<_Tree_val<_Tree_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > _Insert_at<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,_Nil>(bool,_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> *,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,_Nil);
		pair<_Tree_const_iterator<_Tree_val<_Tree_simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >,bool> _Insert_nohint<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,_Nil>(bool,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,_Nil);
		void _Erase(_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> *);
	public:
		~_Tree<_Tset_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,0> >();
	};

	class _Tree<_Tset_traits<unsigned __int64,less<unsigned __int64>,allocator<unsigned __int64>,0> >
	{
	protected:
		_Tree_const_iterator<_Tree_val<_Tree_simple_types<unsigned __int64> > > _Insert_at<unsigned __int64 const &,_Nil>(bool,_Tree_node<unsigned __int64,void *> *,unsigned __int64 const &,_Nil);
		pair<_Tree_const_iterator<_Tree_val<_Tree_simple_types<unsigned __int64> > >,bool> _Insert_nohint<unsigned __int64 const &,_Nil>(bool,unsigned __int64 const &,_Nil);
		void _Erase(_Tree_node<unsigned __int64,void *> *);
	public:
		~_Tree<_Tset_traits<unsigned __int64,less<unsigned __int64>,allocator<unsigned __int64>,0> >();
	};

	class _Tree<_Tset_traits<unsigned long,less<unsigned long>,allocator<unsigned long>,0> >
	{
	protected:
		_Tree_const_iterator<_Tree_val<_Tree_simple_types<unsigned long> > > _Insert_at<unsigned long const &,_Nil>(bool,_Tree_node<unsigned long,void *> *,unsigned long const &,_Nil);
		pair<_Tree_const_iterator<_Tree_val<_Tree_simple_types<unsigned long> > >,bool> _Insert_nohint<unsigned long const &,_Nil>(bool,unsigned long const &,_Nil);
		void _Erase(_Tree_node<unsigned long,void *> *);
	public:
		~_Tree<_Tset_traits<unsigned long,less<unsigned long>,allocator<unsigned long>,0> >();
	};

	struct _Tree_alloc<0,_Tree_base_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >
	{
		_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> * _Buyheadnode();
		~_Tree_alloc<0,_Tree_base_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >();
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<__int64 const ,FOLDER_USAGE>,allocator<pair<__int64 const ,FOLDER_USAGE> > > >
	{
		_Tree_node<pair<__int64 const ,FOLDER_USAGE>,void *> * _Buyheadnode();
		~_Tree_alloc<0,_Tree_base_types<pair<__int64 const ,FOLDER_USAGE>,allocator<pair<__int64 const ,FOLDER_USAGE> > > >();
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo> > > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo>,void *> * _Buyheadnode();
		~_Tree_alloc<0,_Tree_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo> > > >();
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo> > > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo>,void *> * _Buyheadnode();
		~_Tree_alloc<0,_Tree_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo> > > >();
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData> > > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData>,void *> * _Buyheadnode();
		~_Tree_alloc<0,_Tree_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData> > > >();
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData> > > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData>,void *> * _Buyheadnode();
		~_Tree_alloc<0,_Tree_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData> > > >();
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64> > > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64>,void *> * _Buyheadnode();
		~_Tree_alloc<0,_Tree_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64> > > >();
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> * _Buyheadnode();
		~_Tree_alloc<0,_Tree_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >();
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double> > > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double>,void *> * _Buyheadnode();
		~_Tree_alloc<0,_Tree_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double> > > >();
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> * _Buyheadnode();
		~_Tree_alloc<0,_Tree_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > > >();
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > > > > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > >,void *> * _Buyheadnode();
		~_Tree_alloc<0,_Tree_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > > > > >();
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > > > > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > >,void *> * _Buyheadnode();
		~_Tree_alloc<0,_Tree_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > > > > >();
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64> > > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64>,void *> * _Buyheadnode();
		~_Tree_alloc<0,_Tree_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64> > > >();
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > > > > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > >,void *> * _Buyheadnode();
		~_Tree_alloc<0,_Tree_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > > > > >();
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > > > > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > >,void *> * _Buyheadnode();
		~_Tree_alloc<0,_Tree_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > > > > >();
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<int const ,STORAGE_USAGE>,allocator<pair<int const ,STORAGE_USAGE> > > >
	{
		_Tree_node<pair<int const ,STORAGE_USAGE>,void *> * _Buyheadnode();
		~_Tree_alloc<0,_Tree_base_types<pair<int const ,STORAGE_USAGE>,allocator<pair<int const ,STORAGE_USAGE> > > >();
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<int const ,_SYSTEMTIME>,allocator<pair<int const ,_SYSTEMTIME> > > >
	{
		_Tree_node<pair<int const ,_SYSTEMTIME>,void *> * _Buyheadnode();
		~_Tree_alloc<0,_Tree_base_types<pair<int const ,_SYSTEMTIME>,allocator<pair<int const ,_SYSTEMTIME> > > >();
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<int const ,int>,allocator<pair<int const ,int> > > >
	{
		_Tree_node<pair<int const ,int>,void *> * _Buyheadnode();
		~_Tree_alloc<0,_Tree_base_types<pair<int const ,int>,allocator<pair<int const ,int> > > >();
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<int const ,unsigned __int64>,allocator<pair<int const ,unsigned __int64> > > >
	{
		_Tree_node<pair<int const ,unsigned __int64>,void *> * _Buyheadnode();
		~_Tree_alloc<0,_Tree_base_types<pair<int const ,unsigned __int64>,allocator<pair<int const ,unsigned __int64> > > >();
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > >,allocator<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > > > > >
	{
		_Tree_node<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > >,void *> * _Buyheadnode();
		~_Tree_alloc<0,_Tree_base_types<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > >,allocator<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > > > > >();
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<unsigned long const ,unsigned __int64>,allocator<pair<unsigned long const ,unsigned __int64> > > >
	{
		_Tree_node<pair<unsigned long const ,unsigned __int64>,void *> * _Buyheadnode();
		~_Tree_alloc<0,_Tree_base_types<pair<unsigned long const ,unsigned __int64>,allocator<pair<unsigned long const ,unsigned __int64> > > >();
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >
	{
		_Tree_node<pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> * _Buyheadnode();
		~_Tree_alloc<0,_Tree_base_types<pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >();
	};

	struct _Tree_alloc<0,_Tree_base_types<unsigned __int64,allocator<unsigned __int64> > >
	{
		_Tree_node<unsigned __int64,void *> * _Buyheadnode();
		~_Tree_alloc<0,_Tree_base_types<unsigned __int64,allocator<unsigned __int64> > >();
	};

	struct _Tree_alloc<0,_Tree_base_types<unsigned long,allocator<unsigned long> > >
	{
		_Tree_node<unsigned long,void *> * _Buyheadnode();
		~_Tree_alloc<0,_Tree_base_types<unsigned long,allocator<unsigned long> > >();
	};

	struct _Tree_buy<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
		_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> * _Buynode0();
		_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> * _Buynode<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &>(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		void _Freenode0(_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> *);
		~_Tree_buy<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >();
	};

	struct _Tree_buy<pair<__int64 const ,FOLDER_USAGE>,allocator<pair<__int64 const ,FOLDER_USAGE> > >
	{
		_Tree_node<pair<__int64 const ,FOLDER_USAGE>,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<__int64 const ,FOLDER_USAGE>,void *> *);
		~_Tree_buy<pair<__int64 const ,FOLDER_USAGE>,allocator<pair<__int64 const ,FOLDER_USAGE> > >();
	};

	struct _Tree_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo> > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo>,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo>,void *> *);
		~_Tree_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo> > >();
	};

	struct _Tree_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo> > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo>,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo>,void *> *);
		~_Tree_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo> > >();
	};

	struct _Tree_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData> > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData>,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData>,void *> *);
		~_Tree_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData> > >();
	};

	struct _Tree_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData> > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData>,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData>,void *> *);
		~_Tree_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData> > >();
	};

	struct _Tree_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64> > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64>,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64>,void *> *);
		~_Tree_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64> > >();
	};

	struct _Tree_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
		~_Tree_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >();
	};

	struct _Tree_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double> > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double>,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double>,void *> *);
		~_Tree_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double> > >();
	};

	struct _Tree_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> *);
		~_Tree_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > >();
	};

	struct _Tree_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > > > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > >,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > >,void *> *);
		~_Tree_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > > > >();
	};

	struct _Tree_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > > > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > >,void *> * _Buynode0();
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > >,void *> * _Buynode<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > > &>(pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > > &);
		void _Freenode0(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > >,void *> *);
		~_Tree_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > > > >();
	};

	struct _Tree_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64> > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64>,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64>,void *> *);
		~_Tree_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64> > >();
	};

	struct _Tree_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > > > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > >,void *> * _Buynode0();
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > >,void *> * _Buynode<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > > &>(pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > > &);
		void _Freenode0(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > >,void *> *);
		~_Tree_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > > > >();
	};

	struct _Tree_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > > > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > >,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > >,void *> *);
		~_Tree_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > > > >();
	};

	struct _Tree_buy<pair<int const ,STORAGE_USAGE>,allocator<pair<int const ,STORAGE_USAGE> > >
	{
		_Tree_node<pair<int const ,STORAGE_USAGE>,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<int const ,STORAGE_USAGE>,void *> *);
		~_Tree_buy<pair<int const ,STORAGE_USAGE>,allocator<pair<int const ,STORAGE_USAGE> > >();
	};

	struct _Tree_buy<pair<int const ,_SYSTEMTIME>,allocator<pair<int const ,_SYSTEMTIME> > >
	{
		_Tree_node<pair<int const ,_SYSTEMTIME>,void *> * _Buynode0();
		_Tree_node<pair<int const ,_SYSTEMTIME>,void *> * _Buynode<pair<int const ,_SYSTEMTIME> &>(pair<int const ,_SYSTEMTIME> &);
		void _Freenode0(_Tree_node<pair<int const ,_SYSTEMTIME>,void *> *);
		~_Tree_buy<pair<int const ,_SYSTEMTIME>,allocator<pair<int const ,_SYSTEMTIME> > >();
	};

	struct _Tree_buy<pair<int const ,int>,allocator<pair<int const ,int> > >
	{
		_Tree_node<pair<int const ,int>,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<int const ,int>,void *> *);
		~_Tree_buy<pair<int const ,int>,allocator<pair<int const ,int> > >();
	};

	struct _Tree_buy<pair<int const ,unsigned __int64>,allocator<pair<int const ,unsigned __int64> > >
	{
		_Tree_node<pair<int const ,unsigned __int64>,void *> * _Buynode0();
		_Tree_node<pair<int const ,unsigned __int64>,void *> * _Buynode<pair<int const ,unsigned __int64> &>(pair<int const ,unsigned __int64> &);
		void _Freenode0(_Tree_node<pair<int const ,unsigned __int64>,void *> *);
		~_Tree_buy<pair<int const ,unsigned __int64>,allocator<pair<int const ,unsigned __int64> > >();
	};

	struct _Tree_buy<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > >,allocator<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > > > >
	{
		_Tree_node<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > >,void *> * _Buynode0();
		_Tree_node<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > >,void *> * _Buynode<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > > &>(pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > > &);
		void _Freenode0(_Tree_node<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > >,void *> *);
		~_Tree_buy<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > >,allocator<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > > > >();
	};

	struct _Tree_buy<pair<unsigned long const ,unsigned __int64>,allocator<pair<unsigned long const ,unsigned __int64> > >
	{
		_Tree_node<pair<unsigned long const ,unsigned __int64>,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<unsigned long const ,unsigned __int64>,void *> *);
		~_Tree_buy<pair<unsigned long const ,unsigned __int64>,allocator<pair<unsigned long const ,unsigned __int64> > >();
	};

	struct _Tree_buy<pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >
	{
		_Tree_node<pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
		~_Tree_buy<pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >();
	};

	struct _Tree_buy<unsigned __int64,allocator<unsigned __int64> >
	{
		_Tree_node<unsigned __int64,void *> * _Buynode0();
		_Tree_node<unsigned __int64,void *> * _Buynode<unsigned __int64 const &>(unsigned __int64 const &);
		void _Freenode0(_Tree_node<unsigned __int64,void *> *);
		~_Tree_buy<unsigned __int64,allocator<unsigned __int64> >();
	};

	struct _Tree_buy<unsigned long,allocator<unsigned long> >
	{
		_Tree_node<unsigned long,void *> * _Buynode0();
		_Tree_node<unsigned long,void *> * _Buynode<unsigned long const &>(unsigned long const &);
		void _Freenode0(_Tree_node<unsigned long,void *> *);
		~_Tree_buy<unsigned long,allocator<unsigned long> >();
	};

	struct _Tree_comp<0,_Tmap_traits<__int64,FOLDER_USAGE,less<__int64>,allocator<pair<__int64 const ,FOLDER_USAGE> >,0> >
	{
		~_Tree_comp<0,_Tmap_traits<__int64,FOLDER_USAGE,less<__int64>,allocator<pair<__int64 const ,FOLDER_USAGE> >,0> >();
	};

	struct _Tree_comp<0,_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,ProductInfo,StringComparatorIgnoreCase,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo> >,0> >
	{
		~_Tree_comp<0,_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,ProductInfo,StringComparatorIgnoreCase,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo> >,0> >();
	};

	struct _Tree_comp<0,_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,StorageHealth::_DiskInfo,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo> >,0> >
	{
		~_Tree_comp<0,_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,StorageHealth::_DiskInfo,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo> >,0> >();
	};

	struct _Tree_comp<0,_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,StorageHealth::_SignalArchiveData,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData> >,0> >
	{
		~_Tree_comp<0,_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,StorageHealth::_SignalArchiveData,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData> >,0> >();
	};

	struct _Tree_comp<0,_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,StorageHealth::_SignalData,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData> >,0> >
	{
		~_Tree_comp<0,_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,StorageHealth::_SignalData,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData> >,0> >();
	};

	struct _Tree_comp<0,_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,__int64,StringComparatorIgnoreCase,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64> >,0> >
	{
		~_Tree_comp<0,_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,__int64,StringComparatorIgnoreCase,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64> >,0> >();
	};

	struct _Tree_comp<0,_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,0> >
	{
		~_Tree_comp<0,_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,0> >();
	};

	struct _Tree_comp<0,_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,double,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double> >,0> >
	{
		~_Tree_comp<0,_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,double,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double> >,0> >();
	};

	struct _Tree_comp<0,_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,int,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> >,0> >
	{
		~_Tree_comp<0,_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,int,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> >,0> >();
	};

	struct _Tree_comp<0,_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > > >,0> >
	{
		~_Tree_comp<0,_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > > >,0> >();
	};

	struct _Tree_comp<0,_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > > >,0> >
	{
		~_Tree_comp<0,_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > > >,0> >();
	};

	struct _Tree_comp<0,_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,unsigned __int64,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64> >,0> >
	{
		~_Tree_comp<0,_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,unsigned __int64,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64> >,0> >();
	};

	struct _Tree_comp<0,_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,vector<double,allocator<double> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > > >,0> >
	{
		~_Tree_comp<0,_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,vector<double,allocator<double> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > > >,0> >();
	};

	struct _Tree_comp<0,_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,vector<unsigned __int64,allocator<unsigned __int64> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > > >,0> >
	{
		~_Tree_comp<0,_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,vector<unsigned __int64,allocator<unsigned __int64> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > > >,0> >();
	};

	struct _Tree_comp<0,_Tmap_traits<int,STORAGE_USAGE,less<int>,allocator<pair<int const ,STORAGE_USAGE> >,0> >
	{
		~_Tree_comp<0,_Tmap_traits<int,STORAGE_USAGE,less<int>,allocator<pair<int const ,STORAGE_USAGE> >,0> >();
	};

	struct _Tree_comp<0,_Tmap_traits<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> >,0> >
	{
		~_Tree_comp<0,_Tmap_traits<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> >,0> >();
	};

	struct _Tree_comp<0,_Tmap_traits<int,int,less<int>,allocator<pair<int const ,int> >,0> >
	{
		~_Tree_comp<0,_Tmap_traits<int,int,less<int>,allocator<pair<int const ,int> >,0> >();
	};

	struct _Tree_comp<0,_Tmap_traits<int,unsigned __int64,less<int>,allocator<pair<int const ,unsigned __int64> >,0> >
	{
		~_Tree_comp<0,_Tmap_traits<int,unsigned __int64,less<int>,allocator<pair<int const ,unsigned __int64> >,0> >();
	};

	struct _Tree_comp<0,_Tmap_traits<int,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> >,less<int>,allocator<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > > >,0> >
	{
		~_Tree_comp<0,_Tmap_traits<int,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> >,less<int>,allocator<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > > >,0> >();
	};

	struct _Tree_comp<0,_Tmap_traits<unsigned long,unsigned __int64,less<unsigned long>,allocator<pair<unsigned long const ,unsigned __int64> >,0> >
	{
		~_Tree_comp<0,_Tmap_traits<unsigned long,unsigned __int64,less<unsigned long>,allocator<pair<unsigned long const ,unsigned __int64> >,0> >();
	};

	struct _Tree_comp<0,_Tmap_traits<unsigned short,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<unsigned short>,allocator<pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,0> >
	{
		~_Tree_comp<0,_Tmap_traits<unsigned short,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<unsigned short>,allocator<pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,0> >();
	};

	struct _Tree_comp<0,_Tset_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,0> >
	{
		~_Tree_comp<0,_Tset_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,0> >();
	};

	struct _Tree_comp<0,_Tset_traits<unsigned __int64,less<unsigned __int64>,allocator<unsigned __int64>,0> >
	{
		~_Tree_comp<0,_Tset_traits<unsigned __int64,less<unsigned __int64>,allocator<unsigned __int64>,0> >();
	};

	struct _Tree_comp<0,_Tset_traits<unsigned long,less<unsigned long>,allocator<unsigned long>,0> >
	{
		~_Tree_comp<0,_Tset_traits<unsigned long,less<unsigned long>,allocator<unsigned long>,0> >();
	};

	struct _Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > > > > >
	{
		_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > > > > > & operator++();
	};

	struct _Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > > > > >
	{
		_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > > > > > & operator++();
	};

	struct _Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > > > > >
	{
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > > > > > operator++(int);
	};

	struct _Tree_unchecked_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > > > >,_Iterator_base0>
	{
		_Tree_unchecked_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > > > >,_Iterator_base0>(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > >,void *> *,_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > > > > const *);
	};

	struct _Vb_val<allocator<bool> >
	{
		~_Vb_val<allocator<bool> >();
	};

	struct _Vector_alloc<0,_Vec_base_types<unsigned short,allocator<unsigned short> > >
	{
		_Wrap_alloc<allocator<unsigned short> > _Getal();
	};

	struct _Wrap_alloc<allocator<StorageHealth::Feature> >
	{
		void deallocate(StorageHealth::Feature *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<StorageHealth::StorageHealthScore> >
	{
		void deallocate(StorageHealth::StorageHealthScore *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<StorageHealth::_SignalInfo> >
	{
		void construct<StorageHealth::_SignalInfo,StorageHealth::_SignalInfo &>(StorageHealth::_SignalInfo *,StorageHealth::_SignalInfo &);
		void construct<StorageHealth::_SignalInfo,StorageHealth::_SignalInfo const &>(StorageHealth::_SignalInfo *,StorageHealth::_SignalInfo const &);
		void deallocate(StorageHealth::_SignalInfo *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<StorageHealth::_SignalValues> >
	{
		void deallocate(StorageHealth::_SignalValues *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<StorageHealth::_StorageHealthInput> >
	{
		void deallocate(StorageHealth::_StorageHealthInput *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<StorageUsage::WalkerMapping *> >
	{
		void deallocate(StorageUsage::WalkerMapping * *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<TrackedDevice> >
	{
		void deallocate(TrackedDevice *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_List_node<FileLayoutParam,void *> > >
	{
		void deallocate(_List_node<FileLayoutParam,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_List_node<FoundFolderInfo,void *> > >
	{
		void deallocate(_List_node<FoundFolderInfo,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_List_node<StorSvc::TreeWalker::RegistryEntry,void *> > >
	{
		void deallocate(_List_node<StorSvc::TreeWalker::RegistryEntry,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_List_node<__int64,void *> > >
	{
		void deallocate(_List_node<__int64,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_List_node<shared_ptr<CCleanupPolicy>,void *> > >
	{
		void deallocate(_List_node<shared_ptr<CCleanupPolicy>,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> > >
	{
		void deallocate(_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<__int64 const ,FOLDER_USAGE>,void *> > >
	{
		void deallocate(_Tree_node<pair<__int64 const ,FOLDER_USAGE>,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo>,void *> > >
	{
		void deallocate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo>,void *> *,unsigned __int64);
		void destroy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo> >(pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo> *);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo>,void *> > >
	{
		void deallocate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo>,void *> *,unsigned __int64);
		void destroy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo> >(pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo> *);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData>,void *> > >
	{
		void deallocate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData>,void *> *,unsigned __int64);
		void destroy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData> >(pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData> *);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData>,void *> > >
	{
		void deallocate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData>,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64>,void *> > >
	{
		void deallocate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64>,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> > >
	{
		void deallocate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double>,void *> > >
	{
		void deallocate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double>,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> > >
	{
		void deallocate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > >,void *> > >
	{
		void deallocate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > >,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > >,void *> > >
	{
		void deallocate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > >,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64>,void *> > >
	{
		void deallocate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64>,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > >,void *> > >
	{
		void deallocate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > >,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > >,void *> > >
	{
		void deallocate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > >,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<int const ,STORAGE_USAGE>,void *> > >
	{
		void deallocate(_Tree_node<pair<int const ,STORAGE_USAGE>,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<int const ,_SYSTEMTIME>,void *> > >
	{
		void deallocate(_Tree_node<pair<int const ,_SYSTEMTIME>,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<int const ,int>,void *> > >
	{
		void deallocate(_Tree_node<pair<int const ,int>,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<int const ,unsigned __int64>,void *> > >
	{
		void deallocate(_Tree_node<pair<int const ,unsigned __int64>,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > >,void *> > >
	{
		void deallocate(_Tree_node<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > >,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<unsigned long const ,unsigned __int64>,void *> > >
	{
		void deallocate(_Tree_node<pair<unsigned long const ,unsigned __int64>,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> > >
	{
		void deallocate(_Tree_node<pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<unsigned __int64,void *> > >
	{
		void deallocate(_Tree_node<unsigned __int64,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<unsigned long,void *> > >
	{
		void deallocate(_Tree_node<unsigned long,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<__int64> >
	{
		void deallocate(__int64 *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
		void deallocate(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<double> >
	{
		void deallocate(double *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<int> >
	{
		void deallocate(int *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<unsigned __int64> >
	{
		void deallocate(unsigned __int64 *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<unsigned short> >
	{
		void deallocate(unsigned short *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<void *> >
	{
		void deallocate(void * *,unsigned __int64);
	};

	struct _Yarn<char>
	{
		_Yarn<char> & operator=(char const *);
		~_Yarn<char>();
	};

	struct _Yarn<unsigned short>
	{
		~_Yarn<unsigned short>();
	};

	struct allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >
	{
		void construct(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		void construct<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > &>(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > &);
	};

	struct allocator<char>
	{
		void construct<char *,char * &>(char * *,char * &);
	};

	struct allocator<unsigned short>
	{
		void construct<unsigned short *,unsigned short * &>(unsigned short * *,unsigned short * &);
	};

	struct bad_alloc
	{
		bad_alloc();
		bad_alloc(bad_alloc const &);
		virtual ~bad_alloc();
	};

	class basic_filebuf<unsigned short,char_traits<unsigned short> >
	{
	protected:
		bool _Endwrite();
		virtual basic_streambuf<unsigned short,char_traits<unsigned short> > * setbuf(unsigned short *,__int64);
		virtual fpos<int> seekoff(__int64,int,int);
		virtual fpos<int> seekpos(fpos<int>,int);
		virtual int sync();
		virtual unsigned short overflow(unsigned short);
		virtual unsigned short pbackfail(unsigned short);
		virtual unsigned short uflow();
		virtual unsigned short underflow();
		virtual void imbue(locale const &);
		void _Initcvt(codecvt<unsigned short,char,int> const *);
	public:
		basic_filebuf<unsigned short,char_traits<unsigned short> > * close();
		basic_filebuf<unsigned short,char_traits<unsigned short> > * open(unsigned short const *,int,int);
		basic_filebuf<unsigned short,char_traits<unsigned short> >(_iobuf *);
		virtual ~basic_filebuf<unsigned short,char_traits<unsigned short> >();
	};

	struct basic_ifstream<unsigned short,char_traits<unsigned short> >
	{
		virtual ~basic_ifstream<unsigned short,char_traits<unsigned short> >();
	};

	class basic_ios<char,char_traits<char> >
	{
	protected:
		void init(basic_streambuf<char,char_traits<char> > *,bool);
	public:
		virtual void _Add_vtordisp1();
		virtual void _Add_vtordisp2();
		virtual ~basic_ios<char,char_traits<char> >();
	};

	class basic_ios<unsigned short,char_traits<unsigned short> >
	{
	protected:
		void init(basic_streambuf<unsigned short,char_traits<unsigned short> > *,bool);
	public:
		unsigned short widen(char);
		virtual void _Add_vtordisp1();
		virtual void _Add_vtordisp2();
		virtual ~basic_ios<unsigned short,char_traits<unsigned short> >();
	};

	struct basic_iostream<char,char_traits<char> >
	{
		virtual ~basic_iostream<char,char_traits<char> >();
	};

	struct basic_iostream<unsigned short,char_traits<unsigned short> >
	{
		virtual ~basic_iostream<unsigned short,char_traits<unsigned short> >();
	};

	struct basic_istream<char,char_traits<char> >
	{
		struct _Sentry_base
		{
			~_Sentry_base();
		};

		struct sentry
		{
			~sentry();
		};

		bool _Ipfx(bool);
		virtual void _Add_vtordisp1();
		virtual ~basic_istream<char,char_traits<char> >();
	};

	struct basic_istream<unsigned short,char_traits<unsigned short> >
	{
		struct _Sentry_base
		{
			~_Sentry_base();
		};

		struct sentry
		{
			~sentry();
		};

		bool _Ipfx(bool);
		virtual void _Add_vtordisp1();
		virtual ~basic_istream<unsigned short,char_traits<unsigned short> >();
	};

	struct basic_ofstream<unsigned short,char_traits<unsigned short> >
	{
		virtual ~basic_ofstream<unsigned short,char_traits<unsigned short> >();
	};

	struct basic_ostream<char,char_traits<char> >
	{
		struct _Sentry_base
		{
			~_Sentry_base();
		};

		struct sentry
		{
			~sentry();
		};

		basic_ostream<char,char_traits<char> > & flush();
		virtual void _Add_vtordisp2();
		virtual ~basic_ostream<char,char_traits<char> >();
		void _Osfx();
	};

	struct basic_ostream<unsigned short,char_traits<unsigned short> >
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

		basic_ostream<unsigned short,char_traits<unsigned short> > & flush();
		virtual void _Add_vtordisp2();
		virtual ~basic_ostream<unsigned short,char_traits<unsigned short> >();
		void _Osfx();
	};

	class basic_streambuf<char,char_traits<char> >
	{
	protected:
		virtual __int64 showmanyc();
		virtual __int64 xsgetn(char *,__int64);
		virtual __int64 xsputn(char const *,__int64);
		virtual basic_streambuf<char,char_traits<char> > * setbuf(char *,__int64);
		virtual fpos<int> seekoff(__int64,int,int);
		virtual fpos<int> seekpos(fpos<int>,int);
		virtual int overflow(int);
		virtual int pbackfail(int);
		virtual int sync();
		virtual int uflow();
		virtual int underflow();
		virtual void imbue(locale const &);
	public:
		int snextc();
		virtual void _Lock();
		virtual void _Unlock();
		virtual ~basic_streambuf<char,char_traits<char> >();
	};

	class basic_streambuf<unsigned short,char_traits<unsigned short> >
	{
	protected:
		basic_streambuf<unsigned short,char_traits<unsigned short> >();
		virtual __int64 showmanyc();
		virtual __int64 xsgetn(unsigned short *,__int64);
		virtual __int64 xsputn(unsigned short const *,__int64);
		virtual basic_streambuf<unsigned short,char_traits<unsigned short> > * setbuf(unsigned short *,__int64);
		virtual fpos<int> seekoff(__int64,int,int);
		virtual fpos<int> seekpos(fpos<int>,int);
		virtual int sync();
		virtual unsigned short overflow(unsigned short);
		virtual unsigned short pbackfail(unsigned short);
		virtual unsigned short uflow();
		virtual unsigned short underflow();
		virtual void imbue(locale const &);
	public:
		unsigned short snextc();
		virtual void _Lock();
		virtual void _Unlock();
		virtual ~basic_streambuf<unsigned short,char_traits<unsigned short> >();
	};

	struct basic_string<char,char_traits<char>,allocator<char> >
	{
		basic_string<char,char_traits<char>,allocator<char> > & append(basic_string<char,char_traits<char>,allocator<char> > const &,unsigned __int64,unsigned __int64);
		basic_string<char,char_traits<char>,allocator<char> > & append(char const *);
		basic_string<char,char_traits<char>,allocator<char> > & append(unsigned __int64,char);
		basic_string<char,char_traits<char>,allocator<char> > & assign(basic_string<char,char_traits<char>,allocator<char> > const &,unsigned __int64,unsigned __int64);
		basic_string<char,char_traits<char>,allocator<char> > & assign(char const *,unsigned __int64);
		basic_string<char,char_traits<char>,allocator<char> > & assign(unsigned __int64,char);
		basic_string<char,char_traits<char>,allocator<char> > & erase(unsigned __int64,unsigned __int64);
		basic_string<char,char_traits<char>,allocator<char> > & insert(unsigned __int64,unsigned __int64,char);
		bool _Grow(unsigned __int64,bool);
		int compare(unsigned __int64,unsigned __int64,char const *);
		unsigned __int64 find_last_not_of(char const *,unsigned __int64);
		void _Construct<_String_iterator<_String_val<_Simple_types<unsigned short> > > >(_String_iterator<_String_val<_Simple_types<unsigned short> > >,_String_iterator<_String_val<_Simple_types<unsigned short> > >,forward_iterator_tag);
		void _Copy(unsigned __int64,unsigned __int64);
		void _Tidy(bool,unsigned __int64);
		void _Xlen();
		void _Xran();
		~basic_string<char,char_traits<char>,allocator<char> >();
	};

	struct basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >
	{
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & append(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,unsigned __int64,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & append(unsigned __int64,unsigned short);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & append(unsigned short const *);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & assign(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,unsigned __int64,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & assign(unsigned __int64,unsigned short);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & assign(unsigned short const *,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & erase(unsigned __int64,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & insert(unsigned __int64,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,unsigned __int64,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & insert(unsigned __int64,unsigned __int64,unsigned short);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > substr(unsigned __int64,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(unsigned short const *);
		bool _Grow(unsigned __int64,bool);
		int compare(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		int compare(unsigned __int64,unsigned __int64,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		int compare(unsigned __int64,unsigned __int64,unsigned short const *,unsigned __int64);
		int compare(unsigned short const *);
		unsigned __int64 find(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,unsigned __int64);
		void _Copy(unsigned __int64,unsigned __int64);
		void _Swap_bx(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > &);
		void _Tidy(bool,unsigned __int64);
		void _Xlen();
		void _Xran();
		~basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >();
	};

	class basic_stringbuf<char,char_traits<char>,allocator<char> >
	{
	protected:
		virtual fpos<int> seekoff(__int64,int,int);
		virtual fpos<int> seekpos(fpos<int>,int);
		virtual int overflow(int);
		virtual int pbackfail(int);
		virtual int underflow();
	public:
		virtual ~basic_stringbuf<char,char_traits<char>,allocator<char> >();
	};

	class basic_stringbuf<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >
	{
	protected:
		virtual fpos<int> seekoff(__int64,int,int);
		virtual fpos<int> seekpos(fpos<int>,int);
		virtual unsigned short overflow(unsigned short);
		virtual unsigned short pbackfail(unsigned short);
		virtual unsigned short underflow();
	public:
		virtual ~basic_stringbuf<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >();
	};

	struct basic_stringstream<char,char_traits<char>,allocator<char> >
	{
		basic_stringstream<char,char_traits<char>,allocator<char> >(basic_string<char,char_traits<char>,allocator<char> > const &,int);
		virtual ~basic_stringstream<char,char_traits<char>,allocator<char> >();
	};

	struct basic_stringstream<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >
	{
		basic_stringstream<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,int);
		virtual ~basic_stringstream<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >();
	};

	struct codecvt<char,char,int>
	{
		static locale::id id;
	};

	class codecvt<unsigned short,char,int>
	{
	protected:
		virtual bool do_always_noconv();
		virtual int do_encoding();
		virtual int do_in(int &,char const *,char const *,char const * &,unsigned short *,unsigned short *,unsigned short * &);
		virtual int do_length(int &,char const *,char const *,unsigned __int64);
		virtual int do_max_length();
		virtual int do_out(int &,unsigned short const *,unsigned short const *,unsigned short const * &,char *,char *,char * &);
		virtual int do_unshift(int &,char *,char *,char * &);
	public:
		static locale::id id;
		static unsigned __int64 _Getcat(locale::facet const * *,locale const *);
	};

	struct codecvt<wchar_t,char,int>
	{
		static locale::id id;
	};

	struct collate<char>
	{
		static locale::id id;
	};

	struct collate<unsigned short>
	{
		static locale::id id;
	};

	struct collate<wchar_t>
	{
		static locale::id id;
	};

	class ctype<char>
	{
	protected:
		virtual char const * do_narrow(char const *,char const *,char,char *);
		virtual char const * do_tolower(char *,char const *);
		virtual char const * do_toupper(char *,char const *);
		virtual char const * do_widen(char const *,char const *,char *);
		virtual char do_narrow(char,char);
		virtual char do_tolower(char);
		virtual char do_toupper(char);
		virtual char do_widen(char);
	public:
		static locale::id id;
		static unsigned __int64 _Getcat(locale::facet const * *,locale const *);
	};

	class ctype<unsigned short>
	{
	protected:
		virtual bool do_is(short,unsigned short);
		virtual char const * do_widen(char const *,char const *,unsigned short *);
		virtual char do_narrow(unsigned short,char);
		virtual unsigned short const * do_is(unsigned short const *,unsigned short const *,short *);
		virtual unsigned short const * do_narrow(unsigned short const *,unsigned short const *,char,char *);
		virtual unsigned short const * do_scan_is(short,unsigned short const *,unsigned short const *);
		virtual unsigned short const * do_scan_not(short,unsigned short const *,unsigned short const *);
		virtual unsigned short const * do_tolower(unsigned short *,unsigned short const *);
		virtual unsigned short const * do_toupper(unsigned short *,unsigned short const *);
		virtual unsigned short do_tolower(unsigned short);
		virtual unsigned short do_toupper(unsigned short);
		virtual unsigned short do_widen(char);
	public:
		static locale::id id;
		static unsigned __int64 _Getcat(locale::facet const * *,locale const *);
	};

	struct ctype<wchar_t>
	{
		static locale::id id;
	};

	struct error_category
	{
		virtual bool equivalent(error_code const &,int);
		virtual bool equivalent(int,error_condition const &);
		virtual error_condition default_error_condition(int);
		virtual ~error_category();
	};

	struct invalid_argument
	{
		invalid_argument(char const *);
		invalid_argument(invalid_argument const &);
		virtual ~invalid_argument();
	};

	class ios_base
	{
		struct failure
		{
			failure(char const *,error_code const &);
			failure(failure const &);
			virtual ~failure();
		};

		static void _Ios_base_dtor(ios_base *);
		void _Tidy();
	public:
		void clear(int,bool);
	};

	struct length_error
	{
		length_error(char const *);
		length_error(length_error const &);
		virtual ~length_error();
	};

	struct list<FileLayoutParam,allocator<FileLayoutParam> >
	{
		~list<FileLayoutParam,allocator<FileLayoutParam> >();
	};

	struct list<FoundFolderInfo,allocator<FoundFolderInfo> >
	{
		~list<FoundFolderInfo,allocator<FoundFolderInfo> >();
	};

	struct list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> >
	{
		_List_iterator<_List_val<_List_simple_types<StorSvc::TreeWalker::RegistryEntry> > > erase(_List_const_iterator<_List_val<_List_simple_types<StorSvc::TreeWalker::RegistryEntry> > >);
		list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> >(list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > const &);
		void _Insert_range<_List_const_iterator<_List_val<_List_simple_types<StorSvc::TreeWalker::RegistryEntry> > > >(_List_unchecked_const_iterator<_List_val<_List_simple_types<StorSvc::TreeWalker::RegistryEntry> >,_Iterator_base0>,_List_const_iterator<_List_val<_List_simple_types<StorSvc::TreeWalker::RegistryEntry> > >,_List_const_iterator<_List_val<_List_simple_types<StorSvc::TreeWalker::RegistryEntry> > >,forward_iterator_tag);
		void _Tidy();
		void clear();
		~list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> >();
	};

	struct list<__int64,allocator<__int64> >
	{
		list<__int64,allocator<__int64> >(list<__int64,allocator<__int64> > const &);
		void _Insert_range<_List_const_iterator<_List_val<_List_simple_types<__int64> > > >(_List_unchecked_const_iterator<_List_val<_List_simple_types<__int64> >,_Iterator_base0>,_List_const_iterator<_List_val<_List_simple_types<__int64> > >,_List_const_iterator<_List_val<_List_simple_types<__int64> > >,forward_iterator_tag);
		void _Tidy();
		void push_back(__int64 const &);
		~list<__int64,allocator<__int64> >();
	};

	struct list<shared_ptr<CCleanupPolicy>,allocator<shared_ptr<CCleanupPolicy> > >
	{
		list<shared_ptr<CCleanupPolicy>,allocator<shared_ptr<CCleanupPolicy> > >();
		void clear();
		void merge<bool (*)(shared_ptr<CCleanupPolicy> const &,shared_ptr<CCleanupPolicy> const &)>(list<shared_ptr<CCleanupPolicy>,allocator<shared_ptr<CCleanupPolicy> > > &,bool (*)(shared_ptr<CCleanupPolicy> const &,shared_ptr<CCleanupPolicy> const &));
		void sort<bool (*)(shared_ptr<CCleanupPolicy> const &,shared_ptr<CCleanupPolicy> const &)>(bool (*)(shared_ptr<CCleanupPolicy> const &,shared_ptr<CCleanupPolicy> const &));
		void splice(_List_const_iterator<_List_val<_List_simple_types<shared_ptr<CCleanupPolicy> > > >,list<shared_ptr<CCleanupPolicy>,allocator<shared_ptr<CCleanupPolicy> > > &);
		~list<shared_ptr<CCleanupPolicy>,allocator<shared_ptr<CCleanupPolicy> > >();
	};

	class locale
	{
		class _Locimp
		{
			static _Locimp * _Clocptr;
			static _Locimp * _New_Locimp(bool);
			static void _Locimp_dtor(_Locimp *);
		};

		class facet
		{
		protected:
			virtual ~facet();
		public:
			virtual _Facet_base * _Decref();
			virtual void _Incref();
		};

		class id
		{
			static int _Id_cnt;
		};

		static locale::_Locimp * _Getgloballocale();
		static locale::_Locimp * _Init(bool);
		static void _Setgloballocale(void *);
	public:
		~locale();
	};

	struct logic_error
	{
		logic_error(logic_error const &);
	};

	struct map<__int64,FOLDER_USAGE,less<__int64>,allocator<pair<__int64 const ,FOLDER_USAGE> > >
	{
		FOLDER_USAGE & operator[](__int64 const &);
		~map<__int64,FOLDER_USAGE,less<__int64>,allocator<pair<__int64 const ,FOLDER_USAGE> > >();
	};

	struct map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,ProductInfo,StringComparatorIgnoreCase,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo> > >
	{
		~map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,ProductInfo,StringComparatorIgnoreCase,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,ProductInfo> > >();
	};

	struct map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,StorageHealth::_DiskInfo,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo> > >
	{
		StorageHealth::_DiskInfo & operator[](basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		~map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,StorageHealth::_DiskInfo,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_DiskInfo> > >();
	};

	struct map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,StorageHealth::_SignalArchiveData,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData> > >
	{
		StorageHealth::_SignalArchiveData & operator[](basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		~map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,StorageHealth::_SignalArchiveData,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalArchiveData> > >();
	};

	struct map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,StorageHealth::_SignalData,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData> > >
	{
		StorageHealth::_SignalData & operator[](basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		~map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,StorageHealth::_SignalData,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,StorageHealth::_SignalData> > >();
	};

	struct map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,__int64,StringComparatorIgnoreCase,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64> > >
	{
		~map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,__int64,StringComparatorIgnoreCase,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64> > >();
	};

	struct map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >
	{
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & operator[](basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		~map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >();
	};

	struct map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,double,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double> > >
	{
		double & operator[](basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		~map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,double,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,double> > >();
	};

	struct map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,int,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > >
	{
		~map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,int,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > >();
	};

	struct map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > > > >
	{
		list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > & operator[](basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		~map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > > > >();
	};

	struct map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > > > >
	{
		map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > & operator[](basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		~map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > > > >();
	};

	struct map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,unsigned __int64,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64> > >
	{
		unsigned __int64 & operator[](basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		~map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,unsigned __int64,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,unsigned __int64> > >();
	};

	struct map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,vector<double,allocator<double> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > > > >
	{
		vector<double,allocator<double> > & operator[](basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		~map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,vector<double,allocator<double> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<double,allocator<double> > > > >();
	};

	struct map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,vector<unsigned __int64,allocator<unsigned __int64> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > > > >
	{
		vector<unsigned __int64,allocator<unsigned __int64> > & operator[](basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		~map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,vector<unsigned __int64,allocator<unsigned __int64> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<unsigned __int64,allocator<unsigned __int64> > > > >();
	};

	struct map<int,STORAGE_USAGE,less<int>,allocator<pair<int const ,STORAGE_USAGE> > >
	{
		~map<int,STORAGE_USAGE,less<int>,allocator<pair<int const ,STORAGE_USAGE> > >();
	};

	struct map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > >
	{
		_SYSTEMTIME & operator[](int const &);
		map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > & operator=(map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > const &);
		~map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > >();
	};

	struct map<int,int,less<int>,allocator<pair<int const ,int> > >
	{
		int & operator[](int const &);
		~map<int,int,less<int>,allocator<pair<int const ,int> > >();
	};

	struct map<int,unsigned __int64,less<int>,allocator<pair<int const ,unsigned __int64> > >
	{
		unsigned __int64 & operator[](int const &);
		~map<int,unsigned __int64,less<int>,allocator<pair<int const ,unsigned __int64> > >();
	};

	struct map<int,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> >,less<int>,allocator<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > > > >
	{
		map<int,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> >,less<int>,allocator<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > > > > & operator=(map<int,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> >,less<int>,allocator<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > > > > const &);
		vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > & operator[](int const &);
		~map<int,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> >,less<int>,allocator<pair<int const ,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > > > >();
	};

	struct map<unsigned long,unsigned __int64,less<unsigned long>,allocator<pair<unsigned long const ,unsigned __int64> > >
	{
		~map<unsigned long,unsigned __int64,less<unsigned long>,allocator<pair<unsigned long const ,unsigned __int64> > >();
	};

	struct map<unsigned short,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<unsigned short>,allocator<pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >
	{
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & operator[](unsigned short const &);
		~map<unsigned short,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<unsigned short>,allocator<pair<unsigned short const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >();
	};

	struct messages<char>
	{
		static locale::id id;
	};

	struct messages<unsigned short>
	{
		static locale::id id;
	};

	struct messages<wchar_t>
	{
		static locale::id id;
	};

	struct money_get<char,istreambuf_iterator<char,char_traits<char> > >
	{
		static locale::id id;
	};

	struct money_get<unsigned short,istreambuf_iterator<unsigned short,char_traits<unsigned short> > >
	{
		static locale::id id;
	};

	struct money_get<wchar_t,istreambuf_iterator<wchar_t,char_traits<wchar_t> > >
	{
		static locale::id id;
	};

	struct money_put<char,ostreambuf_iterator<char,char_traits<char> > >
	{
		static locale::id id;
	};

	struct money_put<unsigned short,ostreambuf_iterator<unsigned short,char_traits<unsigned short> > >
	{
		static locale::id id;
	};

	struct money_put<wchar_t,ostreambuf_iterator<wchar_t,char_traits<wchar_t> > >
	{
		static locale::id id;
	};

	struct moneypunct<char,0>
	{
		static locale::id id;
	};

	struct moneypunct<char,1>
	{
		static locale::id id;
	};

	struct moneypunct<unsigned short,0>
	{
		static locale::id id;
	};

	struct moneypunct<unsigned short,1>
	{
		static locale::id id;
	};

	struct moneypunct<wchar_t,0>
	{
		static locale::id id;
	};

	struct moneypunct<wchar_t,1>
	{
		static locale::id id;
	};

	struct num_get<char,istreambuf_iterator<char,char_traits<char> > >
	{
		static locale::id id;
	};

	struct num_get<unsigned short,istreambuf_iterator<unsigned short,char_traits<unsigned short> > >
	{
		static locale::id id;
	};

	struct num_get<wchar_t,istreambuf_iterator<wchar_t,char_traits<wchar_t> > >
	{
		static locale::id id;
	};

	class num_put<char,back_insert_iterator<basic_string<char,char_traits<char>,allocator<char> > > >
	{
		back_insert_iterator<basic_string<char,char_traits<char>,allocator<char> > > _Fput(back_insert_iterator<basic_string<char,char_traits<char>,allocator<char> > >,ios_base &,char,char const *,unsigned __int64,unsigned __int64,unsigned __int64,unsigned __int64);
		back_insert_iterator<basic_string<char,char_traits<char>,allocator<char> > > _Iput(back_insert_iterator<basic_string<char,char_traits<char>,allocator<char> > >,ios_base &,char,char *,unsigned __int64);
		back_insert_iterator<basic_string<char,char_traits<char>,allocator<char> > > _Put(back_insert_iterator<basic_string<char,char_traits<char>,allocator<char> > >,char const *,unsigned __int64);
		back_insert_iterator<basic_string<char,char_traits<char>,allocator<char> > > _Rep(back_insert_iterator<basic_string<char,char_traits<char>,allocator<char> > >,char,unsigned __int64);
		char * _Ffmt(char *,char,int);
	protected:
		virtual back_insert_iterator<basic_string<char,char_traits<char>,allocator<char> > > do_put(back_insert_iterator<basic_string<char,char_traits<char>,allocator<char> > >,ios_base &,char,__int64);
		virtual back_insert_iterator<basic_string<char,char_traits<char>,allocator<char> > > do_put(back_insert_iterator<basic_string<char,char_traits<char>,allocator<char> > >,ios_base &,char,bool);
		virtual back_insert_iterator<basic_string<char,char_traits<char>,allocator<char> > > do_put(back_insert_iterator<basic_string<char,char_traits<char>,allocator<char> > >,ios_base &,char,double);
		virtual back_insert_iterator<basic_string<char,char_traits<char>,allocator<char> > > do_put(back_insert_iterator<basic_string<char,char_traits<char>,allocator<char> > >,ios_base &,char,long double);
		virtual back_insert_iterator<basic_string<char,char_traits<char>,allocator<char> > > do_put(back_insert_iterator<basic_string<char,char_traits<char>,allocator<char> > >,ios_base &,char,long);
		virtual back_insert_iterator<basic_string<char,char_traits<char>,allocator<char> > > do_put(back_insert_iterator<basic_string<char,char_traits<char>,allocator<char> > >,ios_base &,char,unsigned __int64);
		virtual back_insert_iterator<basic_string<char,char_traits<char>,allocator<char> > > do_put(back_insert_iterator<basic_string<char,char_traits<char>,allocator<char> > >,ios_base &,char,unsigned long);
		virtual back_insert_iterator<basic_string<char,char_traits<char>,allocator<char> > > do_put(back_insert_iterator<basic_string<char,char_traits<char>,allocator<char> > >,ios_base &,char,void const *);
	public:
		static locale::id id;
	};

	struct num_put<char,ostreambuf_iterator<char,char_traits<char> > >
	{
		static locale::id id;
	};

	class num_put<unsigned short,back_insert_iterator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
		back_insert_iterator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > _Fput(back_insert_iterator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,ios_base &,unsigned short,char const *,unsigned __int64,unsigned __int64,unsigned __int64,unsigned __int64);
		back_insert_iterator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > _Iput(back_insert_iterator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,ios_base &,unsigned short,char *,unsigned __int64);
		back_insert_iterator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > _Put(back_insert_iterator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,unsigned short const *,unsigned __int64);
		back_insert_iterator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > _Rep(back_insert_iterator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,unsigned short,unsigned __int64);
		char * _Ffmt(char *,char,int);
	protected:
		virtual back_insert_iterator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > do_put(back_insert_iterator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,ios_base &,unsigned short,__int64);
		virtual back_insert_iterator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > do_put(back_insert_iterator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,ios_base &,unsigned short,bool);
		virtual back_insert_iterator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > do_put(back_insert_iterator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,ios_base &,unsigned short,double);
		virtual back_insert_iterator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > do_put(back_insert_iterator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,ios_base &,unsigned short,long double);
		virtual back_insert_iterator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > do_put(back_insert_iterator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,ios_base &,unsigned short,long);
		virtual back_insert_iterator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > do_put(back_insert_iterator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,ios_base &,unsigned short,unsigned __int64);
		virtual back_insert_iterator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > do_put(back_insert_iterator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,ios_base &,unsigned short,unsigned long);
		virtual back_insert_iterator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > do_put(back_insert_iterator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,ios_base &,unsigned short,void const *);
	public:
		static locale::id id;
	};

	struct num_put<unsigned short,ostreambuf_iterator<unsigned short,char_traits<unsigned short> > >
	{
		static locale::id id;
	};

	struct num_put<wchar_t,back_insert_iterator<basic_string<wchar_t,char_traits<wchar_t>,allocator<wchar_t> > > >
	{
		static locale::id id;
	};

	struct num_put<wchar_t,ostreambuf_iterator<wchar_t,char_traits<wchar_t> > >
	{
		static locale::id id;
	};

	class numpunct<char>
	{
		void _Tidy();
	protected:
		virtual basic_string<char,char_traits<char>,allocator<char> > do_falsename();
		virtual basic_string<char,char_traits<char>,allocator<char> > do_grouping();
		virtual basic_string<char,char_traits<char>,allocator<char> > do_truename();
		virtual char do_decimal_point();
		virtual char do_thousands_sep();
		void _Init(_Locinfo const &,bool);
	public:
		static locale::id id;
		static unsigned __int64 _Getcat(locale::facet const * *,locale const *);
	};

	class numpunct<unsigned short>
	{
		void _Tidy();
	protected:
		virtual basic_string<char,char_traits<char>,allocator<char> > do_grouping();
		virtual basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > do_falsename();
		virtual basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > do_truename();
		virtual unsigned short do_decimal_point();
		virtual unsigned short do_thousands_sep();
		void _Init(_Locinfo const &,bool);
	public:
		static locale::id id;
		static unsigned __int64 _Getcat(locale::facet const * *,locale const *);
	};

	struct numpunct<wchar_t>
	{
		static locale::id id;
	};

	struct out_of_range
	{
		out_of_range(char const *);
		out_of_range(out_of_range const &);
		virtual ~out_of_range();
	};

	struct pair<__int64 const ,FOLDER_USAGE>
	{
		~pair<__int64 const ,FOLDER_USAGE>();
	};

	struct pair<__int64,FOLDER_USAGE>
	{
		~pair<__int64,FOLDER_USAGE>();
	};

	struct pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64>
	{
		~pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,__int64>();
	};

	struct pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,ProductInfo>
	{
		~pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,ProductInfo>();
	};

	struct pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,StorageHealth::_DiskInfo>
	{
		~pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,StorageHealth::_DiskInfo>();
	};

	struct pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,StorageHealth::_SignalArchiveData>
	{
		~pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,StorageHealth::_SignalArchiveData>();
	};

	struct pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,StorageHealth::_SignalData>
	{
		~pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,StorageHealth::_SignalData>();
	};

	struct pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,__int64>
	{
		~pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,__int64>();
	};

	struct pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >
	{
		~pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >();
	};

	struct pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,double>
	{
		~pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,double>();
	};

	struct pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,int>
	{
		~pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,int>();
	};

	struct pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > >
	{
		~pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,list<StorSvc::TreeWalker::RegistryEntry,allocator<StorSvc::TreeWalker::RegistryEntry> > >();
	};

	struct pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > >
	{
		~pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,map<int,_SYSTEMTIME,less<int>,allocator<pair<int const ,_SYSTEMTIME> > > >();
	};

	struct pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,unsigned __int64>
	{
		~pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,unsigned __int64>();
	};

	struct pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,vector<double,allocator<double> > >
	{
		~pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,vector<double,allocator<double> > >();
	};

	struct pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,vector<unsigned __int64,allocator<unsigned __int64> > >
	{
		~pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,vector<unsigned __int64,allocator<unsigned __int64> > >();
	};

	struct pair<int,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > >
	{
		~pair<int,vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > >();
	};

	struct pair<unsigned short,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >
	{
		~pair<unsigned short,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >();
	};

	struct runtime_error
	{
		runtime_error(char const *);
		runtime_error(runtime_error const &);
		virtual ~runtime_error();
	};

	struct set<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
		~set<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >();
	};

	struct set<unsigned __int64,less<unsigned __int64>,allocator<unsigned __int64> >
	{
		~set<unsigned __int64,less<unsigned __int64>,allocator<unsigned __int64> >();
	};

	struct set<unsigned long,less<unsigned long>,allocator<unsigned long> >
	{
		~set<unsigned long,less<unsigned long>,allocator<unsigned long> >();
	};

	struct shared_ptr<CCleanupPolicy>
	{
		~shared_ptr<CCleanupPolicy>();
	};

	struct shared_ptr<CloudFilePolicy>
	{
		~shared_ptr<CloudFilePolicy>();
	};

	struct shared_ptr<DownloadsFolderPolicy>
	{
		~shared_ptr<DownloadsFolderPolicy>();
	};

	struct shared_ptr<RecycleBinPolicy>
	{
		~shared_ptr<RecycleBinPolicy>();
	};

	struct shared_ptr<StorageHealth::AlphaFeatureGenerator>
	{
		~shared_ptr<StorageHealth::AlphaFeatureGenerator>();
	};

	struct shared_ptr<StorageHealth::BinnedFeatureGenerator>
	{
		~shared_ptr<StorageHealth::BinnedFeatureGenerator>();
	};

	struct shared_ptr<StorageHealth::FeatureGenerator>
	{
		~shared_ptr<StorageHealth::FeatureGenerator>();
	};

	struct shared_ptr<StorageHealth::Predictor>
	{
		~shared_ptr<StorageHealth::Predictor>();
	};

	struct shared_ptr<StorageHealth::SVMPredictor>
	{
		~shared_ptr<StorageHealth::SVMPredictor>();
	};

	struct shared_ptr<StorageHealth::TimeSeriesFeatureGenerator>
	{
		~shared_ptr<StorageHealth::TimeSeriesFeatureGenerator>();
	};

	struct shared_ptr<TemporaryFilePolicy>
	{
		~shared_ptr<TemporaryFilePolicy>();
	};

	struct shared_ptr<WinOldPolicy>
	{
		~shared_ptr<WinOldPolicy>();
	};

	struct system_error
	{
		system_error(system_error const &);
		virtual ~system_error();
	};

	struct time_get<char,istreambuf_iterator<char,char_traits<char> > >
	{
		static locale::id id;
	};

	struct time_get<unsigned short,istreambuf_iterator<unsigned short,char_traits<unsigned short> > >
	{
		static locale::id id;
	};

	struct time_get<wchar_t,istreambuf_iterator<wchar_t,char_traits<wchar_t> > >
	{
		static locale::id id;
	};

	struct time_put<char,ostreambuf_iterator<char,char_traits<char> > >
	{
		static locale::id id;
	};

	struct time_put<unsigned short,ostreambuf_iterator<unsigned short,char_traits<unsigned short> > >
	{
		static locale::id id;
	};

	struct time_put<wchar_t,ostreambuf_iterator<wchar_t,char_traits<wchar_t> > >
	{
		static locale::id id;
	};

	struct unique_ptr<StorageHealth::EventListener,default_delete<StorageHealth::EventListener> >
	{
		~unique_ptr<StorageHealth::EventListener,default_delete<StorageHealth::EventListener> >();
	};

	struct unique_ptr<StorageHealth::FeatureGeneratorFactory,default_delete<StorageHealth::FeatureGeneratorFactory> >
	{
		~unique_ptr<StorageHealth::FeatureGeneratorFactory,default_delete<StorageHealth::FeatureGeneratorFactory> >();
	};

	struct unique_ptr<StorageHealth::OneSettings,default_delete<StorageHealth::OneSettings> >
	{
		~unique_ptr<StorageHealth::OneSettings,default_delete<StorageHealth::OneSettings> >();
	};

	struct unique_ptr<StorageHealth::PredictorFactory,default_delete<StorageHealth::PredictorFactory> >
	{
		~unique_ptr<StorageHealth::PredictorFactory,default_delete<StorageHealth::PredictorFactory> >();
	};

	struct unique_ptr<StorageHealth::SignalAggregator,default_delete<StorageHealth::SignalAggregator> >
	{
		~unique_ptr<StorageHealth::SignalAggregator,default_delete<StorageHealth::SignalAggregator> >();
	};

	struct unique_ptr<StorageHealth::SignalArchiver,default_delete<StorageHealth::SignalArchiver> >
	{
		~unique_ptr<StorageHealth::SignalArchiver,default_delete<StorageHealth::SignalArchiver> >();
	};

	struct unique_ptr<StorageHealth::SmartSignalAggregator,default_delete<StorageHealth::SmartSignalAggregator> >
	{
		~unique_ptr<StorageHealth::SmartSignalAggregator,default_delete<StorageHealth::SmartSignalAggregator> >();
	};

	struct unique_ptr<StorageHealth::SpErrPerfSignalAggregator,default_delete<StorageHealth::SpErrPerfSignalAggregator> >
	{
		~unique_ptr<StorageHealth::SpErrPerfSignalAggregator,default_delete<StorageHealth::SpErrPerfSignalAggregator> >();
	};

	struct unique_ptr<StorageHealth::StorageHealthSettings,default_delete<StorageHealth::StorageHealthSettings> >
	{
		~unique_ptr<StorageHealth::StorageHealthSettings,default_delete<StorageHealth::StorageHealthSettings> >();
	};

	struct unique_ptr<StorageHealth::_RAID_TELEMETRY_ERROR_ENTRY,default_delete<StorageHealth::_RAID_TELEMETRY_ERROR_ENTRY> >
	{
		~unique_ptr<StorageHealth::_RAID_TELEMETRY_ERROR_ENTRY,default_delete<StorageHealth::_RAID_TELEMETRY_ERROR_ENTRY> >();
	};

	struct unique_ptr<_EVT_VARIANT,default_delete<_EVT_VARIANT> >
	{
		~unique_ptr<_EVT_VARIANT,default_delete<_EVT_VARIANT> >();
	};

	struct unique_ptr<unsigned short [0],default_delete<unsigned short [0]> >
	{
		~unique_ptr<unsigned short [0],default_delete<unsigned short [0]> >();
	};

	class vector<StorageHealth::Feature,allocator<StorageHealth::Feature> >
	{
	protected:
		void _Reallocate(unsigned __int64);
		void _Tidy();
		void _Xlen();
	public:
		vector<StorageHealth::Feature,allocator<StorageHealth::Feature> > & operator=(vector<StorageHealth::Feature,allocator<StorageHealth::Feature> > const &);
		void push_back(StorageHealth::Feature const &);
		~vector<StorageHealth::Feature,allocator<StorageHealth::Feature> >();
	};

	class vector<StorageHealth::StorageHealthScore,allocator<StorageHealth::StorageHealthScore> >
	{
	protected:
		void _Reallocate(unsigned __int64);
		void _Reserve(unsigned __int64);
		void _Tidy();
		void _Xlen();
	public:
		vector<StorageHealth::StorageHealthScore,allocator<StorageHealth::StorageHealthScore> > & operator=(vector<StorageHealth::StorageHealthScore,allocator<StorageHealth::StorageHealthScore> > const &);
		void push_back(StorageHealth::StorageHealthScore const &);
		~vector<StorageHealth::StorageHealthScore,allocator<StorageHealth::StorageHealthScore> >();
	};

	class vector<StorageHealth::_SignalInfo,allocator<StorageHealth::_SignalInfo> >
	{
	protected:
		void _Destroy(StorageHealth::_SignalInfo *,StorageHealth::_SignalInfo *);
		void _Reallocate(unsigned __int64);
		void _Reserve(unsigned __int64);
		void _Tidy();
		void _Xlen();
	public:
		_Vector_iterator<_Vector_val<_Simple_types<StorageHealth::_SignalInfo> > > erase(_Vector_const_iterator<_Vector_val<_Simple_types<StorageHealth::_SignalInfo> > >,_Vector_const_iterator<_Vector_val<_Simple_types<StorageHealth::_SignalInfo> > >);
		vector<StorageHealth::_SignalInfo,allocator<StorageHealth::_SignalInfo> > & operator=(vector<StorageHealth::_SignalInfo,allocator<StorageHealth::_SignalInfo> > const &);
		vector<StorageHealth::_SignalInfo,allocator<StorageHealth::_SignalInfo> >(vector<StorageHealth::_SignalInfo,allocator<StorageHealth::_SignalInfo> > const &);
		void _Insert<_Array_const_iterator<StorageHealth::_SignalInfo,16> >(_Vector_const_iterator<_Vector_val<_Simple_types<StorageHealth::_SignalInfo> > >,_Array_const_iterator<StorageHealth::_SignalInfo,16>,_Array_const_iterator<StorageHealth::_SignalInfo,16>,forward_iterator_tag);
		void _Insert<_Array_const_iterator<StorageHealth::_SignalInfo,54> >(_Vector_const_iterator<_Vector_val<_Simple_types<StorageHealth::_SignalInfo> > >,_Array_const_iterator<StorageHealth::_SignalInfo,54>,_Array_const_iterator<StorageHealth::_SignalInfo,54>,forward_iterator_tag);
		void _Insert<_Vector_iterator<_Vector_val<_Simple_types<StorageHealth::_SignalInfo> > > >(_Vector_const_iterator<_Vector_val<_Simple_types<StorageHealth::_SignalInfo> > >,_Vector_iterator<_Vector_val<_Simple_types<StorageHealth::_SignalInfo> > >,_Vector_iterator<_Vector_val<_Simple_types<StorageHealth::_SignalInfo> > >,forward_iterator_tag);
		void push_back(StorageHealth::_SignalInfo const &);
		~vector<StorageHealth::_SignalInfo,allocator<StorageHealth::_SignalInfo> >();
	};

	class vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> >
	{
	protected:
		void _Destroy(StorageHealth::_SignalValues *,StorageHealth::_SignalValues *);
		void _Reallocate(unsigned __int64);
		void _Reserve(unsigned __int64);
		void _Tidy();
		void _Xlen();
	public:
		_Vector_iterator<_Vector_val<_Simple_types<StorageHealth::_SignalValues> > > insert<_Vector_iterator<_Vector_val<_Simple_types<StorageHealth::_SignalValues> > > >(_Vector_const_iterator<_Vector_val<_Simple_types<StorageHealth::_SignalValues> > >,_Vector_iterator<_Vector_val<_Simple_types<StorageHealth::_SignalValues> > >,_Vector_iterator<_Vector_val<_Simple_types<StorageHealth::_SignalValues> > >);
		vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > & operator=(vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > const &);
		vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> >(vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> > const &);
		void _Insert<_Vector_iterator<_Vector_val<_Simple_types<StorageHealth::_SignalValues> > > >(_Vector_const_iterator<_Vector_val<_Simple_types<StorageHealth::_SignalValues> > >,_Vector_iterator<_Vector_val<_Simple_types<StorageHealth::_SignalValues> > >,_Vector_iterator<_Vector_val<_Simple_types<StorageHealth::_SignalValues> > >,forward_iterator_tag);
		void push_back(StorageHealth::_SignalValues const &);
		~vector<StorageHealth::_SignalValues,allocator<StorageHealth::_SignalValues> >();
	};

	class vector<StorageHealth::_StorageHealthInput,allocator<StorageHealth::_StorageHealthInput> >
	{
	protected:
		void _Reallocate(unsigned __int64);
		void _Xlen();
	public:
		void push_back(StorageHealth::_StorageHealthInput const &);
		~vector<StorageHealth::_StorageHealthInput,allocator<StorageHealth::_StorageHealthInput> >();
	};

	class vector<StorageUsage::WalkerMapping *,allocator<StorageUsage::WalkerMapping *> >
	{
	protected:
		void _Reallocate(unsigned __int64);
		void _Xlen();
	public:
		~vector<StorageUsage::WalkerMapping *,allocator<StorageUsage::WalkerMapping *> >();
	};

	class vector<TrackedDevice,allocator<TrackedDevice> >
	{
	protected:
		void _Reallocate(unsigned __int64);
		void _Reserve(unsigned __int64);
		void _Xlen();
	public:
		~vector<TrackedDevice,allocator<TrackedDevice> >();
	};

	class vector<__int64,allocator<__int64> >
	{
	protected:
		_Vector_iterator<_Vector_val<_Simple_types<__int64> > > _Insert_n(_Vector_const_iterator<_Vector_val<_Simple_types<__int64> > >,unsigned __int64,__int64 const &);
		void _Reallocate(unsigned __int64);
		void _Reserve(unsigned __int64);
		void _Xlen();
	public:
		~vector<__int64,allocator<__int64> >();
	};

	class vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
	protected:
		void _Destroy(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *);
		void _Reallocate(unsigned __int64);
		void _Reserve(unsigned __int64);
		void _Tidy();
		void _Xlen();
	public:
		vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > & operator=(vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > const &);
		vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >(vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > const &);
		void _Insert<_Vector_iterator<_Vector_val<_Simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >(_Vector_const_iterator<_Vector_val<_Simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >,_Vector_iterator<_Vector_val<_Simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >,_Vector_iterator<_Vector_val<_Simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >,forward_iterator_tag);
		void clear();
		void push_back(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		~vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >();
	};

	struct vector<bool,allocator<bool> >
	{
		vector<bool,allocator<bool> >(unsigned __int64,bool const &);
		~vector<bool,allocator<bool> >();
	};

	class vector<double,allocator<double> >
	{
	protected:
		void _Reallocate(unsigned __int64);
		void _Reserve(unsigned __int64);
		void _Tidy();
		void _Xlen();
	public:
		vector<double,allocator<double> > & operator=(vector<double,allocator<double> > const &);
		vector<double,allocator<double> >(vector<double,allocator<double> > const &);
		void _Construct_n(unsigned __int64,double const *);
		~vector<double,allocator<double> >();
	};

	class vector<int,allocator<int> >
	{
	protected:
		void _Reallocate(unsigned __int64);
		void _Tidy();
		void _Xlen();
	public:
		vector<int,allocator<int> > & operator=(vector<int,allocator<int> > const &);
		vector<int,allocator<int> >(vector<int,allocator<int> > const &);
		void push_back(int const &);
		~vector<int,allocator<int> >();
	};

	class vector<unsigned __int64,allocator<unsigned __int64> >
	{
	protected:
		void _Reallocate(unsigned __int64);
		void _Xlen();
	public:
		void push_back(unsigned __int64 const &);
		~vector<unsigned __int64,allocator<unsigned __int64> >();
	};

	class vector<unsigned int,allocator<bool> >
	{
	protected:
		void _Tidy();
		void _Xlen();
	public:
		void _Construct_n(unsigned __int64,unsigned int const *);
		~vector<unsigned int,allocator<bool> >();
	};

	class vector<unsigned short,allocator<unsigned short> >
	{
	protected:
		void _Reallocate(unsigned __int64);
		void _Tidy();
		void _Xlen();
	public:
		void resize(unsigned __int64);
		~vector<unsigned short,allocator<unsigned short> >();
	};

	class vector<void *,allocator<void *> >
	{
	protected:
		void _Reallocate(unsigned __int64);
		void _Tidy();
		void _Xlen();
	public:
		vector<void *,allocator<void *> > & operator=(vector<void *,allocator<void *> > const &);
		~vector<void *,allocator<void *> >();
	};

	StorageHealth::Feature * _Uninit_copy<StorageHealth::Feature *,StorageHealth::Feature *,allocator<StorageHealth::Feature> >(StorageHealth::Feature *,StorageHealth::Feature *,StorageHealth::Feature *,std::_Wrap_alloc<std::allocator<StorageHealth::Feature> > &,std::_Nonscalar_ptr_iterator_tag);
	StorageHealth::Feature * _Uninit_move<StorageHealth::Feature *,StorageHealth::Feature *,allocator<StorageHealth::Feature>,StorageHealth::Feature>(StorageHealth::Feature *,StorageHealth::Feature *,StorageHealth::Feature *,std::_Wrap_alloc<std::allocator<StorageHealth::Feature> > &,StorageHealth::Feature *,std::_Nonscalar_ptr_iterator_tag);
	StorageHealth::StorageHealthScore * _Copy_impl<StorageHealth::StorageHealthScore *,StorageHealth::StorageHealthScore *>(StorageHealth::StorageHealthScore *,StorageHealth::StorageHealthScore *,StorageHealth::StorageHealthScore *);
	StorageHealth::StorageHealthScore * _Uninit_copy<StorageHealth::StorageHealthScore *,StorageHealth::StorageHealthScore *,allocator<StorageHealth::StorageHealthScore> >(StorageHealth::StorageHealthScore *,StorageHealth::StorageHealthScore *,StorageHealth::StorageHealthScore *,std::_Wrap_alloc<std::allocator<StorageHealth::StorageHealthScore> > &,std::_Nonscalar_ptr_iterator_tag);
	StorageHealth::StorageHealthScore * _Uninit_move<StorageHealth::StorageHealthScore *,StorageHealth::StorageHealthScore *,allocator<StorageHealth::StorageHealthScore>,StorageHealth::StorageHealthScore>(StorageHealth::StorageHealthScore *,StorageHealth::StorageHealthScore *,StorageHealth::StorageHealthScore *,std::_Wrap_alloc<std::allocator<StorageHealth::StorageHealthScore> > &,StorageHealth::StorageHealthScore *,std::_Nonscalar_ptr_iterator_tag);
	StorageHealth::_SignalInfo * _Copy_impl<StorageHealth::_SignalInfo *,StorageHealth::_SignalInfo *>(StorageHealth::_SignalInfo *,StorageHealth::_SignalInfo *,StorageHealth::_SignalInfo *);
	StorageHealth::_SignalInfo * _Uninit_copy<StorageHealth::_SignalInfo *,StorageHealth::_SignalInfo *,allocator<StorageHealth::_SignalInfo> >(StorageHealth::_SignalInfo *,StorageHealth::_SignalInfo *,StorageHealth::_SignalInfo *,std::_Wrap_alloc<std::allocator<StorageHealth::_SignalInfo> > &,std::_Nonscalar_ptr_iterator_tag);
	StorageHealth::_SignalInfo * _Uninit_copy<_Array_const_iterator<StorageHealth::_SignalInfo,16>,StorageHealth::_SignalInfo *,allocator<StorageHealth::_SignalInfo> >(std::_Array_const_iterator<StorageHealth::_SignalInfo,16>,std::_Array_const_iterator<StorageHealth::_SignalInfo,16>,StorageHealth::_SignalInfo *,std::_Wrap_alloc<std::allocator<StorageHealth::_SignalInfo> > &,std::_Nonscalar_ptr_iterator_tag);
	StorageHealth::_SignalInfo * _Uninit_copy<_Array_const_iterator<StorageHealth::_SignalInfo,54>,StorageHealth::_SignalInfo *,allocator<StorageHealth::_SignalInfo> >(std::_Array_const_iterator<StorageHealth::_SignalInfo,54>,std::_Array_const_iterator<StorageHealth::_SignalInfo,54>,StorageHealth::_SignalInfo *,std::_Wrap_alloc<std::allocator<StorageHealth::_SignalInfo> > &,std::_Nonscalar_ptr_iterator_tag);
	StorageHealth::_SignalInfo * _Uninit_copy<_Vector_const_iterator<_Vector_val<_Simple_types<StorageHealth::_SignalInfo> > >,StorageHealth::_SignalInfo *,allocator<StorageHealth::_SignalInfo> >(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<StorageHealth::_SignalInfo> > >,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<StorageHealth::_SignalInfo> > >,StorageHealth::_SignalInfo *,std::_Wrap_alloc<std::allocator<StorageHealth::_SignalInfo> > &,std::_Nonscalar_ptr_iterator_tag);
	StorageHealth::_SignalInfo * _Uninit_copy<_Vector_iterator<_Vector_val<_Simple_types<StorageHealth::_SignalInfo> > >,StorageHealth::_SignalInfo *,allocator<StorageHealth::_SignalInfo> >(std::_Vector_iterator<std::_Vector_val<std::_Simple_types<StorageHealth::_SignalInfo> > >,std::_Vector_iterator<std::_Vector_val<std::_Simple_types<StorageHealth::_SignalInfo> > >,StorageHealth::_SignalInfo *,std::_Wrap_alloc<std::allocator<StorageHealth::_SignalInfo> > &,std::_Nonscalar_ptr_iterator_tag);
	StorageHealth::_SignalInfo * _Uninit_move<StorageHealth::_SignalInfo *,StorageHealth::_SignalInfo *,allocator<StorageHealth::_SignalInfo>,StorageHealth::_SignalInfo>(StorageHealth::_SignalInfo *,StorageHealth::_SignalInfo *,StorageHealth::_SignalInfo *,std::_Wrap_alloc<std::allocator<StorageHealth::_SignalInfo> > &,StorageHealth::_SignalInfo *,std::_Nonscalar_ptr_iterator_tag);
	StorageHealth::_SignalValues * _Uninit_copy<StorageHealth::_SignalValues *,StorageHealth::_SignalValues *,allocator<StorageHealth::_SignalValues> >(StorageHealth::_SignalValues *,StorageHealth::_SignalValues *,StorageHealth::_SignalValues *,std::_Wrap_alloc<std::allocator<StorageHealth::_SignalValues> > &,std::_Nonscalar_ptr_iterator_tag);
	StorageHealth::_SignalValues * _Uninit_copy<_Vector_const_iterator<_Vector_val<_Simple_types<StorageHealth::_SignalValues> > >,StorageHealth::_SignalValues *,allocator<StorageHealth::_SignalValues> >(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<StorageHealth::_SignalValues> > >,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<StorageHealth::_SignalValues> > >,StorageHealth::_SignalValues *,std::_Wrap_alloc<std::allocator<StorageHealth::_SignalValues> > &,std::_Nonscalar_ptr_iterator_tag);
	StorageHealth::_SignalValues * _Uninit_copy<_Vector_iterator<_Vector_val<_Simple_types<StorageHealth::_SignalValues> > >,StorageHealth::_SignalValues *,allocator<StorageHealth::_SignalValues> >(std::_Vector_iterator<std::_Vector_val<std::_Simple_types<StorageHealth::_SignalValues> > >,std::_Vector_iterator<std::_Vector_val<std::_Simple_types<StorageHealth::_SignalValues> > >,StorageHealth::_SignalValues *,std::_Wrap_alloc<std::allocator<StorageHealth::_SignalValues> > &,std::_Nonscalar_ptr_iterator_tag);
	StorageHealth::_SignalValues * _Uninit_move<StorageHealth::_SignalValues *,StorageHealth::_SignalValues *,allocator<StorageHealth::_SignalValues>,StorageHealth::_SignalValues>(StorageHealth::_SignalValues *,StorageHealth::_SignalValues *,StorageHealth::_SignalValues *,std::_Wrap_alloc<std::allocator<StorageHealth::_SignalValues> > &,StorageHealth::_SignalValues *,std::_Nonscalar_ptr_iterator_tag);
	StorageHealth::_StorageHealthInput * _Uninit_move<StorageHealth::_StorageHealthInput *,StorageHealth::_StorageHealthInput *,allocator<StorageHealth::_StorageHealthInput>,StorageHealth::_StorageHealthInput>(StorageHealth::_StorageHealthInput *,StorageHealth::_StorageHealthInput *,StorageHealth::_StorageHealthInput *,std::_Wrap_alloc<std::allocator<StorageHealth::_StorageHealthInput> > &,StorageHealth::_StorageHealthInput *,std::_Nonscalar_ptr_iterator_tag);
	TrackedDevice * _Uninit_move<TrackedDevice *,TrackedDevice *,allocator<TrackedDevice>,TrackedDevice>(TrackedDevice *,TrackedDevice *,TrackedDevice *,std::_Wrap_alloc<std::allocator<TrackedDevice> > &,TrackedDevice *,std::_Nonscalar_ptr_iterator_tag);
	__int64 const _BADOFF;
	_iobuf * _Fiopen(unsigned short const *,int,int);
	_iobuf * _Xfiopen<wchar_t>(wchar_t const *,int,int);
	bool operator==<char,char_traits<char>,allocator<char> >(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &,char const *);
	bool uncaught_exception();
	char const * _Syserror_map(int);
	char const * _Winerror_map(int);
	double * _Uninit_copy<_Vector_const_iterator<_Vector_val<_Simple_types<double> > >,double *,allocator<double> >(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<double> > >,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<double> > >,double *,std::_Wrap_alloc<std::allocator<double> > &,std::_Nonscalar_ptr_iterator_tag);
	double stod(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &,unsigned __int64 *);
	double stod(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,unsigned __int64 *);
	int * _Uninit_copy<_Vector_const_iterator<_Vector_val<_Simple_types<int> > >,int *,allocator<int> >(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<int> > >,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<int> > >,int *,std::_Wrap_alloc<std::allocator<int> > &,std::_Nonscalar_ptr_iterator_tag);
	int stoi(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,unsigned __int64 *,int);
	nothrow_t const std::nothrow;
	std::basic_ostream<unsigned short,std::char_traits<unsigned short> > & operator<<<unsigned short,char_traits<unsigned short> >(std::basic_ostream<unsigned short,std::char_traits<unsigned short> > &,unsigned short const *);
	std::basic_string<char,std::char_traits<char>,std::allocator<char> > operator+<char,char_traits<char>,allocator<char> >(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &,char const *);
	std::basic_string<char,std::char_traits<char>,std::allocator<char> > to_string(long double);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > * _Uninit_copy<_Vector_const_iterator<_Vector_val<_Simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > >,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > >,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::_Wrap_alloc<std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > &,std::_Nonscalar_ptr_iterator_tag);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > * _Uninit_copy<_Vector_iterator<_Vector_val<_Simple_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >(std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > >,std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > >,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::_Wrap_alloc<std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > &,std::_Nonscalar_ptr_iterator_tag);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > * _Uninit_copy<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::_Wrap_alloc<std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > &,std::_Nonscalar_ptr_iterator_tag);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > * _Uninit_move<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::_Wrap_alloc<std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::_Nonscalar_ptr_iterator_tag);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > operator+<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,unsigned short const *);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > to_wstring(int);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > to_wstring(long double);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > to_wstring(unsigned __int64);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > to_wstring(unsigned long);
	std::codecvt<unsigned short,char,int> const & use_facet<codecvt<unsigned short,char,int> >(std::locale const &);
	std::ctype<char> const & use_facet<ctype<char> >(std::locale const &);
	std::ctype<unsigned short> const & use_facet<ctype<unsigned short> >(std::locale const &);
	std::error_code make_error_code(std::io_errc::io_errc);
	std::numpunct<char> const & use_facet<numpunct<char> >(std::locale const &);
	std::numpunct<unsigned short> const & use_facet<numpunct<unsigned short> >(std::locale const &);
	std::pair<StorageHealth::_SignalValues *,StorageHealth::_SignalValues *> _Unguarded_partition<StorageHealth::_SignalValues *,StorageHealth::SortTimeCmp>(StorageHealth::_SignalValues *,StorageHealth::_SignalValues *,StorageHealth::SortTimeCmp);
	std::pair<int *,int *> _Unguarded_partition<int *>(int *,int *);
	std::shared_ptr<CloudFilePolicy> make_shared<CloudFilePolicy>();
	std::shared_ptr<DownloadsFolderPolicy> make_shared<DownloadsFolderPolicy>();
	std::shared_ptr<RecycleBinPolicy> make_shared<RecycleBinPolicy>();
	std::shared_ptr<StorageHealth::AlphaFeatureGenerator> make_shared<StorageHealth::AlphaFeatureGenerator>();
	std::shared_ptr<StorageHealth::BinnedFeatureGenerator> make_shared<StorageHealth::BinnedFeatureGenerator>();
	std::shared_ptr<StorageHealth::SVMPredictor> make_shared<StorageHealth::SVMPredictor>();
	std::shared_ptr<StorageHealth::TimeSeriesFeatureGenerator> make_shared<StorageHealth::TimeSeriesFeatureGenerator>();
	std::shared_ptr<TemporaryFilePolicy> make_shared<TemporaryFilePolicy>();
	unsigned short * _Maklocstr<unsigned short>(char const *,unsigned short *,_Cvtvec const &);
	void _Facet_Register(std::_Facet_base *);
	void _Rotate<StorageHealth::_SignalInfo *>(StorageHealth::_SignalInfo *,StorageHealth::_SignalInfo *,StorageHealth::_SignalInfo *,std::random_access_iterator_tag);
	void _Rotate<StorageHealth::_SignalValues *>(StorageHealth::_SignalValues *,StorageHealth::_SignalValues *,StorageHealth::_SignalValues *,std::random_access_iterator_tag);
	void _Rotate<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *>(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::random_access_iterator_tag);
	void _Sort<StorageHealth::_SignalValues *,__int64,StorageHealth::SortTimeCmp>(StorageHealth::_SignalValues *,StorageHealth::_SignalValues *,__int64,StorageHealth::SortTimeCmp);
	void _Sort<int *,__int64>(int *,int *,__int64);
	void _Xbad_alloc();
	void _Xinvalid_argument(char const *);
	void _Xlength_error(char const *);
	void _Xout_of_range(char const *);
	void iter_swap<StorageHealth::_SignalValues *,StorageHealth::_SignalValues *>(StorageHealth::_SignalValues *,StorageHealth::_SignalValues *);
};

namespace wil
{
	class Feature<__WilFeatureTraits_Feature_AggressiveDehydrationThreshold>
	{
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_StorageServiceFolderSuggestions>
	{
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	class Feature<__WilFeatureTraits_Feature_StorageServiceFolderSuggestionsWriteRegistry>
	{
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	struct ResultException
	{
		ResultException(FailureInfo const &);
		ResultException(ResultException const &);
		virtual char const * what();
		virtual ~ResultException();
	};

	struct StoredFailureInfo
	{
		void SetFailureInfo(FailureInfo const &);
		~StoredFailureInfo();
	};

	class TraceLoggingProvider
	{
		virtual bool NotifyFailure(FailureInfo const &);
	protected:
		virtual void Initialize();
		virtual void OnErrorReported(bool,FailureInfo const &);
		void ReportTelemetryFailure(FailureInfo const &);
		void ReportTraceLoggingFailure(FailureInfo const &);
	};

	struct critical_section
	{
		~critical_section();
	};

	namespace details
	{
		class EnabledStateManager
		{
			void RecordCachedUsageUnderLock();
		public:
			void EnsureSubscribedToUsageFlush(void (*)(void *));
			void OnStateChange();
			void QueueBackgroundUsageReporting(unsigned int,wil_details_FeaturePropertyCache &);
			void SubscribeFeaturePropertyCacheToEnabledStateChanges(wil_details_FeaturePropertyCache *,wil_FeatureChangeTime);
		};

		class FeatureStateManager
		{
			bool EnsureStateData();
			void EnsureSubscribedToProcessWideUsageFlushUnderLock();
		public:
			void RecordFeatureUsage(unsigned int,wil_details_ServiceReportingKind,unsigned __int64);
		};

		class ThreadFailureCallbackHolder
		{
			static long volatile s_telemetryId;
		public:
			static bool GetThreadContext(FailureInfo *,ThreadFailureCallbackHolder *,char *,unsigned __int64);
		};

		namespace in1diag3
		{
			long Return_CaughtException(void *,unsigned int,char const *);
			long Return_GetLastError(void *,unsigned int,char const *);
			long Return_Win32(void *,unsigned int,char const *,unsigned long);
			void FailFast_Unexpected(void *,unsigned int,char const *);
			void Return_Hr(void *,unsigned int,char const *,long);
			void Return_Hr_NoOriginate(void *,unsigned int,char const *,long);
			void _FailFastImmediate_Unexpected();
			void _FailFast_GetLastError(void *,unsigned int,char const *);
			void _FailFast_Hr(void *,unsigned int,char const *,long);
			void _FailFast_Unexpected(void *,unsigned int,char const *);
			void _Throw_Hr(void *,unsigned int,char const *,long);
			void _Throw_NullAlloc(void *,unsigned int,char const *);
		};

		struct shared_buffer
		{
			bool create(void const *,unsigned __int64);
			~shared_buffer();
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
		void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
		void LogFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,bool,unsigned short *,unsigned __int64,char *,unsigned __int64,FailureInfo *);
		void RecordFeatureUsageCallback(unsigned int,wil_details_FeaturePropertyCache *,wil_details_RecordUsageResult *);
		void ReportFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Hr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long);
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
			~FeatureStateData();
		};

		struct ProcessLocalData
		{
			~ProcessLocalData();
		};

		struct ProcessLocalStorage<FeatureStateData>
		{
			~ProcessLocalStorage<FeatureStateData>();
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
			static long TryGetValueInternal(unsigned short const *,bool,unsigned __int64 *,bool *);
		public:
			long CreateFromPointer(unsigned short const *,void *);
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

		struct ThreadLocalStorage<ThreadLocalData>
		{
			~ThreadLocalStorage<ThreadLocalData>();
		};

		struct UsageIndexBuffer<unsigned int,1>
		{
			~UsageIndexBuffer<unsigned int,1>();
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
			~heap_buffer();
		};

		struct heap_vector<SubscriptionList::Subscription>
		{
			~heap_vector<SubscriptionList::Subscription>();
		};

		struct heap_vector<details::EnabledStateManager::CachedFeaturePropertyData>
		{
			~heap_vector<details::EnabledStateManager::CachedFeaturePropertyData>();
		};

		struct heap_vector<details::EnabledStateManager::CachedUsageData>
		{
			~heap_vector<details::EnabledStateManager::CachedUsageData>();
		};

		details_abi::ProcessLocalStorage<details_abi::ProcessLocalData> * g_pProcessLocalData;
		details_abi::ThreadLocalData * GetThreadLocalDataCache(bool);
		void RecordWnfUsageIndex(__WIL__WNF_STATE_NAME const *,unsigned __int64,details_abi::RawUsageIndex const &);
	};

	struct last_error_context
	{
		~last_error_context();
	};

	bool (* g_pfnIsDebuggerPresent)();
	bool g_fBreakOnFailure;
	bool g_fIsDebuggerPresent;
	long (* g_pfnResultFromCaughtException)();
	long GetFailureLogString(unsigned short *,unsigned __int64,wil::FailureInfo const &);
};

namespace wistd
{
	struct _Func_base<bool,void *,unsigned __int64,void *,unsigned __int64,unsigned int,_Nil,_Nil>
	{
		virtual ~_Func_base<bool,void *,unsigned __int64,void *,unsigned __int64,unsigned int,_Nil,_Nil>();
	};

	struct _Func_class<bool,void *,unsigned __int64,void *,unsigned __int64,unsigned int,_Nil,_Nil>
	{
		~_Func_class<bool,void *,unsigned __int64,void *,unsigned __int64,unsigned int,_Nil,_Nil>();
	};

	struct function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>
	{
		~function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>();
	};

	struct unique_ptr<void,wil::process_heap_deleter>
	{
		~unique_ptr<void,wil::process_heap_deleter>();
	};

	struct unique_ptr<wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>,wil::process_heap_deleter>
	{
		~unique_ptr<wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>,wil::process_heap_deleter>();
	};

	struct unique_ptr<wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>,wil::process_heap_deleter>
	{
		~unique_ptr<wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>,wil::process_heap_deleter>();
	};

	void _Xbad_function_call();
};

CBatterySqm g_BatterySqm;
FEATURE_ENABLED_STATE (* g_wil_details_apiGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME);
FEATURE_ENABLED_STATE (* g_wil_details_internalGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME);
HINSTANCE__ * _chamberprofModule;
HINSTANCE__ * g_wil_details_ntdllModuleHandle;
ImageLogger g_DefaultLogger;
KNOWN_FOLDER_INFO * HoloLens_WellKnownUserFolders;
KNOWN_FOLDER_INFO * WellKnownUserFolders;
KNOWN_FOLDER_INFO_MOBILE * HoloLens_WellKnownInternalFolders;
KNOWN_FOLDER_INFO_MOBILE * Mobile_WellKnownExternalFolders;
KNOWN_FOLDER_INFO_MOBILE * Mobile_WellKnownInternalFolders;
KNOWN_PATH_INFO * Others;
StorageService g_StorageService;
_EVENT_TRACE_PROPERTIES * g_pSessionProperties;
_GUID * WpSqmGetSession(_GUID const *);
_GUID GlobalSettingsGroup;
_GUID const g_AppUsageDetailSqmSession;
_GUID const g_AppxDeploymentSqmSession;
_GUID const g_AppxPackageInventorySqmSession;
_GUID const g_DiagSvcSqmSession;
_GUID const g_DiagTrackSqmSession;
_GUID const g_OfficeExcelSqmSession;
_GUID const g_OfficeOneNoteSqmSession;
_GUID const g_OfficePowerPointSqmSession;
_GUID const g_OfficeSharepointSqmSession;
_GUID const g_OfficeWordSqmSession;
_GUID const g_ServicesSqmSession;
_GUID const g_WWAHostSqmSession;
_GUID const g_WpSqmBiWeeklySession;
_GUID const g_WpSqmGlobalSession;
_GUID const g_WpSqmHealthSession;
_GUID const g_WpSqmLondonSession;
_GUID const g_WpSqmOnBootSession;
_LIBRARY_FOLDER_INFO * rgLFI;
_RTL_RUN_ONCE g_initOnce;
_RTL_RUN_ONCE g_initOnceFS;
_RTL_SRWLOCK g_formatVolumeLock;
_RTL_SRWLOCK g_scanVolumeLock;
_RTL_SRWLOCK g_serviceCountLock;
_WNF_USER_SUBSCRIPTION * g_BootCompleteWnfSubscription;
__WIL_RTL_SRWLOCK g_wil_details_testFeatureStateLock;
bool ValidMbrMetadataPartitionExists(void *);
bool g_fRetryGetCriticalPercentage;
int IsVolumeMounted(unsigned short const *);
int g_wil_details_preventOnDemandStagingConfigReads;
int wil_HasFeatureTestState(unsigned int,wil_FeatureEnabledState *);
int wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(wil_details_FeaturePropertyCache *,unsigned int,wil_details_ServiceReportingKind,unsigned int,unsigned __int64);
int wil_details_SetPropertyCacheOpportunityCallback(wil_details_FeaturePropertyCache *,void *);
int wil_details_SetPropertyCacheUsageCallback(wil_details_FeaturePropertyCache *,void *);
int wil_details_StagingConfig_AreAnyFeaturesConfigured(wil_details_StagingConfig *);
int wil_details_StagingConfig_QueryFeatureState(wil_details_StagingConfig *,wil_FeatureState *,unsigned int,int);
long (* NtFsControlFile)(void *,void *,void (*)(void *,_IO_STATUS_BLOCK *,unsigned long),void *,_IO_STATUS_BLOCK *,unsigned long,void *,unsigned long,void *,unsigned long);
long (* NtQueryInformationFile)(void *,_IO_STATUS_BLOCK *,void *,unsigned long,_FILE_INFORMATION_CLASS);
long (* _CPGetChamberRegistryLocation)(unsigned short const *,unsigned long,HKEY__ * *);
long (* g_wil_details_pfnNtQueryWnfStateData)(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long (* g_wil_details_pfnNtUpdateWnfStateData)(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long (* g_wil_details_pfnRtlSubscribeWnfStateChangeNotification)(__WIL__WNF_USER_SUBSCRIPTION * *,__WIL__WNF_STATE_NAME,unsigned long,long (*)(__WIL__WNF_STATE_NAME,unsigned long,__WIL__WNF_TYPE_ID *,void *,void const *,unsigned long),void *,__WIL__WNF_TYPE_ID *,unsigned long,unsigned long);
long (* g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion)(__WIL__WNF_USER_SUBSCRIPTION *);
long AssignDriveLetter(unsigned short const *,unsigned short const *);
long BfAdjustPrivilege(unsigned long,unsigned char,unsigned char *);
long BootBatterySetFlagCallBack(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
long BootCompleteNotificationCallback(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
long CheckCrashDumpSettings(unsigned short const *);
long CompressAndWrite(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> >);
long ConvertDateStringToSystemTime(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,_SYSTEMTIME &);
long CreateResetTelemetry(_GUID *,char (*)[129]);
long CreateResetToken(unsigned long,_GUID const &,char const (&)[129]);
long DismountVolume(void *);
long DoUsnIoctl(wchar_t const *,unsigned long,void *,unsigned long,void *,unsigned long);
long GetDeviceInterfaceList(_GUID,wchar_t * *,unsigned long *);
long GetDiskGeometry(void *,_DISK_GEOMETRY_EX * *,unsigned long *);
long GetDiskLayoutInternal(void * const,_DRIVE_LAYOUT_INFORMATION_EX * *,unsigned long *);
long GetDiskPath(STORE_ID,wchar_t *,unsigned long);
long GetFileSystemFormatAndClusterSize(unsigned short const *,unsigned short const * *,unsigned long *);
long GetPartitionInfo(unsigned short const *,_PARTITION_INFORMATION_EX *);
long GetPath(_STORAGE_DEVICE_TYPE,unsigned long,_GUID,int,unsigned short const *,unsigned short * *);
long GetReservedSize(unsigned short *,unsigned __int64 &);
long GetStorageCardSlotCount(unsigned long *);
long GetStorageSerialNumber(unsigned short const *,unsigned char *);
long GetSystemTimeDiff(_SYSTEMTIME &,_SYSTEMTIME &,unsigned __int64 &);
long GetUserFolder(unsigned short *,unsigned long);
long GetVolumeFromPartitionName(StorageService *,STORE_ID,wchar_t const * const,VolumeTrackerVolume * *);
long GetVolumePathFromVolumeName(unsigned short const *,unsigned short *);
long InitCriticalBatteryShutdown();
long InitResetPhone();
long MbrMetaGetPartitionName(void *,unsigned __int64,wchar_t *,unsigned long);
long MbrMetaGetPartitionOffset(void *,wchar_t const *,unsigned __int64 *);
long OpenDisk(ImageLogger const *,STORE_ID,unsigned long,unsigned long,void * *);
long OpenDisk(STORE_ID,unsigned long,unsigned long,void * *);
long OpenStorageRegKey(HKEY__ *,unsigned short const *,HKEY__ * *);
long OpenVolume(wchar_t const *,unsigned long,unsigned long,void * *);
long PolicyWnfCallback(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
long PublishStorageRegSetting(unsigned short const *,unsigned short const *,unsigned long,void *,int);
long QueryStorageRegSetting(unsigned short const *,unsigned long,void *);
long QueryStorageRegSetting(unsigned short const *,unsigned short const *,unsigned long,void *);
long ReadAndDecompress(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
long ReadMbrMetadataPartition(void *,MBR_META_HEADER * *);
long ReadResetToken(unsigned long *,_GUID *,char (*)[129]);
long SetStorageCardWriteBackCache(unsigned short const *,_GUID,bool);
long SetStorageIdlePowerTimeout(unsigned short const *,unsigned long);
long SetStorageRegSetting(unsigned short const *,unsigned long,void *,int);
long ShellEventsWnfCallback(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
long StateNotificationCallback(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
long StorageSvcReqShutdown(SHUTDOWN_REQUEST_TYPE,unsigned long);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCatW(wchar_t *,unsigned __int64,wchar_t const *);
long StringCchCopyExW(unsigned short *,unsigned __int64,unsigned short const *,unsigned short * *,unsigned __int64 *,unsigned long);
long StringCchCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCopyW(wchar_t *,unsigned __int64,wchar_t const *);
long StringCchPrintfExW(unsigned short *,unsigned __int64,unsigned short * *,unsigned __int64 *,unsigned long,unsigned short const *,...);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long StringCchPrintfW(wchar_t *,unsigned __int64,wchar_t const *,...);
long SvcFrameworkUpdateServiceStatus(unsigned long,unsigned long,unsigned long);
long SvcInitialize(unsigned long,unsigned short * * const);
long SvcRegisterRPCInterface();
long SvcResetPhoneInternal(void *,_BF_SCENARIO,_BF_OPTION,unsigned long,unsigned long);
long SvcUninitialize(long);
long UninitializeService(long);
long VersionSPrintfW(unsigned short *,unsigned __int64,unsigned __int64,unsigned short const *,...);
long WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::System::User *> *>,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User *> *> >(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::System::User *> *> *,tagCOWAIT_FLAGS,void *);
long wil_details_NtQueryWnfStateData(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long wil_details_NtUpdateWnfStateData(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long wil_details_StagingConfig_FireNotification(wil_details_StagingConfig *,unsigned int,unsigned short);
long wil_details_StagingConfig_Load(wil_details_StagingConfig *,wil_FeatureStore,unsigned __int64,void *,int);
unsigned __int64 * UnnamedFileRecordFRNs;
unsigned __int64 g_sessionHandle;
unsigned char UsingEfi;
unsigned char WriteEfi;
unsigned int g_BootCompleteCurrentState;
unsigned long BootBatteryChargingNotificationCallback();
unsigned long GetDiskNumberAndExtent(unsigned short const *,_LARGE_INTEGER *);
unsigned long HostControllerCallback(HCMNOTIFICATION__ *,void *,_CM_NOTIFY_ACTION,_CM_NOTIFY_EVENT_DATA *,unsigned long);
unsigned long MountVolumeCallback(HCMNOTIFICATION__ *,void *,_CM_NOTIFY_ACTION,_CM_NOTIFY_EVENT_DATA *,unsigned long);
unsigned long PowerSettingChange(POWERBROADCAST_SETTING *);
unsigned long VolumeChangeCallback(HCMNOTIFICATION__ *,void *,_CM_NOTIFY_ACTION,_CM_NOTIFY_EVENT_DATA *,unsigned long);
unsigned long g_dwFormatTlsIndex;
unsigned long g_dwScanTlsIndex;
unsigned long g_ulServiceCount;
unsigned long s_CriticalBatteryPercentage;
unsigned short const * * AppsWellKnownPaths;
unsigned short const * * ClassicAppsWellKnownPaths;
unsigned short const * * DefaultWin32Paths;
unsigned short const * * ExcludedRootFolders;
unsigned short const * * MapsDataWellKnownPaths;
unsigned short const * * Mobile_ExcludedRootFolders;
unsigned short const * * SystemWellKnownPaths;
unsigned short const * * TempWellKnownPaths;
unsigned short const * * TempWindowsRollbackKnownPaths;
unsigned short const * const RuntimeClass_Windows_Data_Json_JsonValue;
unsigned short const * const RuntimeClass_Windows_Management_Deployment_Internal_PackageManagerInternal;
unsigned short const * const RuntimeClass_Windows_Management_Deployment_PackageManager;
unsigned short const * const RuntimeClass_Windows_System_Internal_UserManager;
unsigned short const * const RuntimeClass_Windows_System_User;
unsigned short const * const c_retailDemoKeyOobeWrite;
unsigned short const * const c_retailDemoValueEnabled;
void (* g_wil_details_apiRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_apiSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_apiUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_internalRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_internalSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_internalUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_pfnFeatureLoggingHook)(unsigned int,FEATURE_LOGGED_TRAITS const *,FEATURE_ERROR const *,int,wil_ReportingKind const *,wil_VariantReportingKind const *,unsigned char,unsigned __int64);
void (* g_wil_details_recordFeatureUsage)(unsigned int,wil_details_FeaturePropertyCache *,wil_details_RecordUsageResult *);
void * BCDEGlobalSettingsHandle;
void * BCDStore;
void * OpenDiskHandle(unsigned short const *);
void * OpenVolumeHandle(unsigned short const *);
void * operator new(unsigned __int64);
void * operator new(unsigned __int64,std::nothrow_t const &);
void * operator new[](unsigned __int64);
void * operator new[](unsigned __int64,std::nothrow_t const &);
void CalculateTreeDepth(std::map<__int64,FOLDER_USAGE,std::less<__int64>,std::allocator<std::pair<__int64 const ,FOLDER_USAGE> > > &,FOLDER_USAGE &,unsigned int,unsigned int &);
void CleanupTempDirectoryCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_WORK *);
void RegWaitCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_WAIT *,long);
void ResetPhoneBootTokenCheckCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_WORK *);
void ResetPhoneWorkerCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_WORK *);
void SendDriveSpecificTelemetry(unsigned short,unsigned __int64,std::list<__int64,std::allocator<__int64> > &,std::list<__int64,std::allocator<__int64> > &,std::map<__int64,FOLDER_USAGE,std::less<__int64>,std::allocator<std::pair<__int64 const ,FOLDER_USAGE> > > &);
void SendFolderSpecificTelemetry(unsigned short,VALID_LIBRARY_TYPE,std::list<FoundFolderInfo,std::allocator<FoundFolderInfo> > &,std::map<__int64,FOLDER_USAGE,std::less<__int64>,std::allocator<std::pair<__int64 const ,FOLDER_USAGE> > > &);
void ServiceMain(unsigned long,unsigned short * * const);
void StorageServiceInitCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_WORK *);
void SvchostPushServiceGlobals(_SVCHOST_GLOBAL_DATA *);
void TelemetryStorageServiceInit(long);
void TelemetryStorageServiceTreeWalkerDriveStats(unsigned short,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int);
void TelemetryStorageServiceTreeWalkerFolderStats(unsigned short,unsigned short const *,unsigned short const *,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int);
void TimeChangeNotificationCallback(_SERVICE_TIMECHANGE_INFO const *);
void WriteFoldersToRegistry(unsigned short,StorSvc::TreeWalker::MediaClass,std::list<FoundFolderInfo,std::allocator<FoundFolderInfo> > &);
void _Atexit(void (*)());
void _TlgWriteActivityAutoStop<0,5>(_TlgProvider_t const *,_GUID const *);
void _TlgWriteActivityAutoStop<35184372088832,5>(_TlgProvider_t const *,_GUID const *);
void _TlgWriteActivityAutoStop<70368744177664,5>(_TlgProvider_t const *,_GUID const *);
void __ArrayUnwind(void *,unsigned __int64,int,void (*)(void *));
void operator delete(void *);
void operator delete(void *,std::nothrow_t const &);
void operator delete(void *,void *);
void operator delete[](void *);
void operator delete[](void *,std::nothrow_t const &);
void wil_details_FeaturePropertyCache_ReportUsageToService(wil_details_FeaturePropertyCache *,unsigned int,FEATURE_LOGGED_TRAITS const *,int,wil_ReportingKind,unsigned __int64);
void wil_details_SetEnabledAndHasNotificationStateProperties(wil_details_FeaturePropertyCache *,wil_details_CachedFeatureEnabledState,wil_details_CachedHasNotificationState);
wchar_t * GetNextInterfaceElement(wchar_t *,unsigned long,wchar_t *);
wchar_t const * * modulesToCache;
wil::BasicThreadActivity<StorageCleanmgrProvider,70368744177664,5,_TlgReflectorTag_Param0IsProviderType> cleanupactivity;
wil::unique_call<long (*)(),&long RpcRevertToSelf()> AutoRpcImpersonateClient();
wil_StagingConfig * g_wil_details_stagingConfigForMachine;
wil_StagingConfig * g_wil_details_stagingConfigForUser;
wil_details_FeatureTestState * g_wil_details_testStates;
