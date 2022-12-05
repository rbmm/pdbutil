class ARTSmartScheduler
{
	static ARTSmartScheduler::QueryScenario s_currentScenario;
	static ARTSmartScheduler::QueryScenarioTemplateProperty const * const sc_scenarioTemplateMap;
	static bool s_isMachineWakeable;
	static bool s_isSleepSupported;
	static bool s_isValidationRun;
	static long BuildPredictedUsageProfile(std::vector<unsigned char,std::allocator<unsigned char> > &,unsigned long,_SYSTEMTIME *,unsigned long *,ARTSmartScheduler::QueryStatus *);
	static long GetBestInterval(std::vector<unsigned char,std::allocator<unsigned char> > const &,unsigned long,unsigned long,unsigned char,unsigned long,ARTSmartScheduler::InternalQueryResult *);
	static long GetDwordRegValue(unsigned short const *,unsigned long *,bool *);
	static long GetExistingActiveHoursTime(bool,_TlgProvider_t const *,_SYSTEMTIME *);
	static long GetHalfwayResult(ARTSmartScheduler::QueryConfigParams const &,ARTSmartScheduler::QueryResult *,_TlgProvider_t const *);
	static long GetHistoryData(wistd::unique_ptr<_PFIU_HISTORY_ENTRY,wil::process_heap_deleter> &,unsigned long *,_SYSTEMTIME *,unsigned long *);
	static long GetHistoryEntryActiveHoursScore(_PFIU_HISTORY_ENTRY,unsigned long *);
	static long GetHistoryEntryChargeUpdateNotificationScore(_PFIU_HISTORY_ENTRY,unsigned long *);
	static long GetHistoryEntryNotificationScore(_PFIU_HISTORY_ENTRY,unsigned long *);
	static long GetHistoryEntryRebootScore(_PFIU_HISTORY_ENTRY,unsigned long *);
	static long GetIndexOfProfileSystemTime(_SYSTEMTIME,_SYSTEMTIME,unsigned long,unsigned long *);
	static long GetIntervalConfidence(std::vector<unsigned char,std::allocator<unsigned char> > const &,unsigned long,unsigned long,unsigned char *);
	static long GetNextAcceptableInterval(std::vector<unsigned char,std::allocator<unsigned char> > const &,unsigned long,unsigned long,unsigned char,unsigned long,ARTSmartScheduler::InternalQueryResult *);
	static long GetSleepCapabilities(bool,bool *,bool *);
	static long GetTimeRegValue(unsigned short const *,unsigned short const *,_SYSTEMTIME *,bool *);
	static long ReadDelayInMinutes(IUxUpdateManager *,_TlgProvider_t const *);
	static long ReadDurationInMinutes(IUxUpdateManager *,_TlgProvider_t const *);
	static long ReadRequiredConfidence(IUxUpdateManager *,_TlgProvider_t const *);
	static long TranslateResult(ARTSmartScheduler::InternalQueryResult,_SYSTEMTIME,unsigned long,ARTSmartScheduler::QueryStatus,ARTSmartScheduler::QueryType,ARTSmartScheduler::QueryResult *);
	static unsigned char s_requiredConfidence;
	static unsigned long s_delayInMinutes;
	static unsigned long s_durationInMinutes;
	static unsigned short const * const sc_delayInMinutesRegValue;
	static unsigned short const * const sc_durationInMinutesRegValue;
	static unsigned short const * const sc_endHourRegValue;
	static unsigned short const * const sc_endMinuteRegValue;
	static unsigned short const * const sc_nextHourRegValue;
	static unsigned short const * const sc_nextMinuteRegValue;
	static unsigned short const * const sc_requiredConfidenceRegValue;
	static unsigned short const * const sc_startHourRegValue;
	static unsigned short const * const sc_startMinuteRegValue;
	static void SendSSResultTelemetry(ARTSmartScheduler::QueryResult const &,unsigned char,unsigned long,char const *,_TlgProvider_t const *);
	static void SendSSStartTelemetry(ARTSmartScheduler::QueryType,char const *,_TlgProvider_t const *);
public:
	static long GetDefaultConfiguration(ARTSmartScheduler::QueryScenario,ARTSmartScheduler::QueryConfigParams *,_TlgProvider_t const *);
	static long GetNextAcceptableTimeEx(ARTSmartScheduler::QueryConfigParams const &,ARTSmartScheduler::QueryScenario,ARTSmartScheduler::QueryResult *,_TlgProvider_t const *);
	static long GetTimeIntervalConfidence(ARTSmartScheduler::QueryConfigParams const &,ARTSmartScheduler::QueryScenario,ARTSmartScheduler::QueryResult *,_TlgProvider_t const *);
};

namespace ATL
{
	struct CAtlException
	{
		CAtlException(long);
	};

	struct CAtlModule
	{
		long UpdateRegistryFromResourceS(unsigned int,int,_ATL_REGMAP_ENTRY *);
		long UpdateRegistryFromResourceS(unsigned short const *,int,_ATL_REGMAP_ENTRY *);
		virtual long GetGITPtr(IGlobalInterfaceTable * *);
		virtual long GetLockCount();
		virtual long Lock();
		virtual long Unlock();
		virtual ~CAtlModule();
	};

	struct CAtlModuleT<CComModule>
	{
		virtual long AddCommonRGSReplacements(IRegistrarBase *);
	};

	struct CAutoVectorPtr<unsigned short>
	{
		~CAutoVectorPtr<unsigned short>();
	};

	struct CComBSTR
	{
		~CComBSTR();
	};

	struct CComCriticalSection
	{
		long Init();
		~CComCriticalSection();
	};

	struct CComModule
	{
		virtual long UpdateRegistryFromResourceD(unsigned int,int,_ATL_REGMAP_ENTRY *);
		virtual long UpdateRegistryFromResourceD(unsigned short const *,int,_ATL_REGMAP_ENTRY *);
		virtual long UpdateRegistryFromResourceS(unsigned int,int,_ATL_REGMAP_ENTRY *);
		virtual long UpdateRegistryFromResourceS(unsigned short const *,int,_ATL_REGMAP_ENTRY *);
	};

	struct CComPtr<IStream>
	{
		~CComPtr<IStream>();
	};

	struct CComPtr<IUsoUpdateHistoryEntry>
	{
		~CComPtr<IUsoUpdateHistoryEntry>();
	};

	struct CComPtr<IUsoUpdateHistoryEntryCollection>
	{
		~CComPtr<IUsoUpdateHistoryEntryCollection>();
	};

	struct CComPtr<IXmlReader>
	{
		~CComPtr<IXmlReader>();
	};

	struct CExpansionVector
	{
		int Add(unsigned short const *,unsigned short const *);
		long ClearReplacements();
	};

	struct CRegKey
	{
		long DeleteSubKey(unsigned short const *);
		long RecurseDeleteKey(unsigned short const *);
		~CRegKey();
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
			~CParseBuffer();
		};

	protected:
		long AddValue(CRegKey &,unsigned short const *,unsigned short *);
		long NextToken(unsigned short *);
		long RegisterSubkeys(unsigned short *,HKEY__ *,int,int);
		long SkipAssignment(unsigned short *);
		static unsigned short const * const * const rgszNeverDelete;
	public:
		long PreProcessBuffer(unsigned short *,unsigned short * *);
		long RegisterBuffer(unsigned short *,int);
	};

	class CTempBuffer<unsigned char,256,CCRTAllocator>
	{
		void AllocateHeap(unsigned __int64);
		void FreeHeap();
	public:
		~CTempBuffer<unsigned char,256,CCRTAllocator>();
	};

	class CTempBuffer<unsigned short,1024,CCRTAllocator>
	{
		void AllocateHeap(unsigned __int64);
		void FreeHeap();
	public:
		~CTempBuffer<unsigned short,1024,CCRTAllocator>();
	};

	class CTempBuffer<unsigned short,256,CCRTAllocator>
	{
		void AllocateHeap(unsigned __int64);
		void FreeHeap();
	public:
		~CTempBuffer<unsigned short,256,CCRTAllocator>();
	};

	namespace Checked
	{
		void memcpy_s(void *,unsigned __int64,void const *,unsigned __int64);
	};

	namespace _ATL_SAFE_ALLOCA_IMPL
	{
		struct CAtlSafeAllocBufferManager<CCRTAllocator>
		{
			~CAtlSafeAllocBufferManager<CCRTAllocator>();
		};

	};

	ATL::CAtlBaseModule _AtlBaseModule;
	ATL::CAtlModule * _pAtlModule;
	ATL::CAtlWinModule _AtlWinModule;
	ATL::CComModule * _pModule;
	long AtlHresultFromLastError();
	long AtlHresultFromWin32(unsigned long);
	void AtlThrowImpl(long);
	void _AtlRaiseException(unsigned long,unsigned long);
};

class ActiveHoursHelper
{
	static long GetActiveHoursEnd(unsigned long *);
	static long GetActiveHoursStart(unsigned long *);
	static long GetActiveHoursValue(unsigned short const *,unsigned long &);
	static long GetNextActiveHoursTime(bool,_SYSTEMTIME *,_TlgProvider_t const *);
public:
	static long GetDeviceActiveHours(unsigned short *,unsigned short *,_TlgProvider_t const *);
};

class ActiveHoursUtil
{
protected:
	static int IsValidInputToScheduleReboot(_SYSTEMTIME);
	static unsigned short const * const msc_szUxActiveHoursEnd;
	static unsigned short const * const msc_szUxActiveHoursStart;
	static unsigned short const * const sc_smartActiveHoursState;
public:
	static long GetActiveHoursEnd(unsigned long *);
	static long GetActiveHoursIntervalLimit(UxUsoShim *,IUxOneSettings *,unsigned short *);
	static long GetActiveHoursScenarioType(UxUsoShim *,MusActiveHoursScenario *);
	static long GetActiveHoursStart(unsigned long *);
	static long GetDeviceActiveHours(UxUsoShim *,IUxOneSettings *,_TlgProvider_t const * const,unsigned short *,unsigned short *);
	static long GetNextRebootNotificationTime(UxUsoShim *,IUxOneSettings *,_TlgProvider_t const * const,bool,_SYSTEMTIME,unsigned long,_SYSTEMTIME *);
	static long GetNextRebootTime(UxUsoShim *,IUxOneSettings *,_TlgProvider_t const * const,bool,_SYSTEMTIME,_SYSTEMTIME *);
	static long GetNextRebootTimeNoSS(UxUsoShim *,IUxOneSettings *,_TlgProvider_t const * const,bool,_SYSTEMTIME,_SYSTEMTIME *);
	static long GetSmartActiveHoursState(SmartActiveHoursState *);
	static long IsCurrentTimeInActiveHoursRange(UxUsoShim *,IUxOneSettings *,_TlgProvider_t const * const,unsigned short,unsigned short,int *);
	static long SetActiveHoursEnd(UxUsoShim *,unsigned long);
	static long SetActiveHoursEnd(unsigned long);
	static long SetActiveHoursStart(UxUsoShim *,unsigned long);
	static long SetActiveHoursStart(unsigned long);
	static long SetActiveHoursToSuggested(_TlgProvider_t const * const);
	static long SetSmartActiveHoursState(SmartActiveHoursState,_TlgProvider_t const * const,bool);
	static long SetSmartActiveHoursSuggestionState(SmartActiveHoursSuggestionState);
	static long StoreActiveHourStates(UxUsoShim *,unsigned long,unsigned long);
};

struct BatteryUtil
{
	static bool IsBatterySaverEnabled();
};

struct CCoInit
{
	~CCoInit();
};

struct CCoSimpleArray<SystemSettings::DataModel::CSingletonHelper<SystemSettings::Update::MusNotification>::CCallback *,4294967294,CSimpleArrayStandardCompareHelper<SystemSettings::DataModel::CSingletonHelper<SystemSettings::Update::MusNotification>::CCallback *> >
{
	~CCoSimpleArray<SystemSettings::DataModel::CSingletonHelper<SystemSettings::Update::MusNotification>::CCallback *,4294967294,CSimpleArrayStandardCompareHelper<SystemSettings::DataModel::CSingletonHelper<SystemSettings::Update::MusNotification>::CCallback *> >();
};

class CMusUxUsoShimSingleton
{
protected:
	static CMusUxUsoShimSingleton s_mussSingleton;
	void SessionActiveCallback();
public:
	UxUsoShim * GetUxUsoShim();
	long Initialize(std::function<void ()>);
};

struct CTCoAllocPolicy
{
	static long Alloc(void *,unsigned long,unsigned __int64,void * *);
};

class CUxOneSettingsSingleton
{
protected:
	static CUxOneSettingsSingleton s_mussSingleton;
public:
	IUxOneSettings * GetSession();
};

namespace Concurrency
{
	struct _Init_func_transformer<void>
	{
		static std::function<unsigned char ()> _Perform(std::function<void ()>);
	};

	struct cancellation_token
	{
		~cancellation_token();
	};

	namespace details
	{
		struct _CancellationTokenState
		{
			void _DeregisterCallback(_CancellationTokenRegistration *);
		};

		struct _ContextCallback
		{
			void _CallInContext(std::function<void ()>);
			~_ContextCallback();
		};

		struct _DefaultPPLTaskScheduler
		{
			class _PPLTaskChore
			{
				static void _Callback(void *);
			};

			virtual void schedule(void (*)(void *),void *);
		};

		struct _ExceptionHolder
		{
			~_ExceptionHolder();
		};

		class _RefCounter
		{
		protected:
			virtual void _Destroy();
		};

		struct _TaskCollectionBaseImpl
		{
			static void _RunTask(void (*)(void *),void *,_TaskInliningMode);
		};

		struct _TaskCreationCallstack
		{
			~_TaskCreationCallstack();
		};

		struct _TaskProcHandle
		{
			static void _RunChoreBridge(void *);
		};

		struct _TaskProcThunk
		{
			struct _Holder
			{
				~_Holder();
			};

			static void _Bridge(void *);
		};

		struct _TaskWorkItemRAIILogger
		{
			~_TaskWorkItemRAIILogger();
		};

		struct _Task_impl<unsigned char>
		{
			_Task_impl<unsigned char>(_CancellationTokenState *,scheduler_ptr);
			bool _TransitionedToStarted();
			virtual bool _CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<_ExceptionHolder> const &);
			virtual ~_Task_impl<unsigned char>();
			void _FinalizeAndRunContinuations(unsigned char);
		};

		struct _Task_impl_base
		{
			bool _CancelWithException(std::exception_ptr const &);
			virtual ~_Task_impl_base();
			void _RegisterCancellation(std::weak_ptr<_Task_impl_base>);
			void _RunTaskContinuations();
			void _ScheduleTask(_TaskProcHandle *,_TaskInliningMode);
		};

	};

	struct scheduler_ptr
	{
		~scheduler_ptr();
	};

	struct task<unsigned char>
	{
		void _CreateImpl(details::_CancellationTokenState *,scheduler_ptr);
		~task<unsigned char>();
	};

	struct task<void>
	{
		task<void><task_completion_event<void> >(task_completion_event<void>,task_options const &);
	};

	class task_completion_event<unsigned char>
	{
		void _RegisterTask(std::shared_ptr<details::_Task_impl<unsigned char> > const &);
	};

	struct task_completion_event<void>
	{
		~task_completion_event<void>();
	};

	struct task_options
	{
		task_options();
		~task_options();
	};

	Concurrency::task<void> create_task<task_completion_event<void> >(Concurrency::task_completion_event<void>,Concurrency::task_options);
	Concurrency::task<void> task_from_result(Concurrency::task_options const &);
	std::shared_ptr<Concurrency::scheduler_interface> const & get_ambient_scheduler();
};

struct EnvironmentUtil
{
	static bool IsServerSku();
};

class FileManager
{
	static unsigned short const * const * const c_rgpszDirectoryName;
	static unsigned short const * const c_szDUSharedDirectory;
	static unsigned short const * const c_szUSOPrivateDirectory;
	static unsigned short const * const c_szUSOSharedDirectory;
public:
	static long BuildPath(unsigned short *,unsigned __int64,unsigned short const *,unsigned short const *);
	static long CatPath(unsigned short *,unsigned __int64,unsigned short const *);
	static long CreateDirectoryW(tagUSODirectory,unsigned short *,unsigned __int64,unsigned short const *,bool);
	static long GetFileSizeInKB(unsigned short const *,unsigned __int64 &);
	static long GetMatchingFiles(unsigned short const *,unsigned short const *,std::vector<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > *);
	static long GetRootDirectory(tagUSODirectory,unsigned short *,unsigned __int64);
	static long RecursiveCreateDirectory(unsigned short const *);
};

struct FlightingUtil
{
	static long CheckIfMachineIsInFastFlightingRings(bool *);
	static unsigned short const * const sc_FlightRing_Canary;
	static unsigned short const * const sc_FlightRing_MSIT;
	static unsigned short const * const sc_FlightRing_OSG;
	static unsigned short const * const sc_FlightRing_WIF;
};

struct HashUtility
{
	HashUtility();
	long CloseAlgorithmProvider();
	long FinishHash(unsigned char *,unsigned long);
	long HashData(unsigned char *,unsigned long);
	long Initialize(unsigned short const *);
	long OpenAlgorithmProvider(unsigned short const *);
	long Release();
	~HashUtility();
};

struct LoggingUtil
{
	static void LogRebootScheduledTelemetryEvent(UxUsoShim *,IUxOneSettings *,_TlgProvider_t const * const,_SYSTEMTIME,DefaultRebootUxState,unsigned short const *,int,int,int);
	static void LogSmartActiveHoursStateChangeTelemetryEvent(_TlgProvider_t const * const,SmartActiveHoursState,bool);
	static void LogSuggestedActiveHoursUsedTelemetryEvent(_TlgProvider_t const * const,int);
};

namespace Microsoft
{
	namespace WRL
	{
		struct ComPtr<Details::EventTargetArray>
		{
			~ComPtr<Details::EventTargetArray>();
		};

		struct ComPtr<IActivationFactory>
		{
			~ComPtr<IActivationFactory>();
		};

		struct ComPtr<IAgileObject>
		{
			~ComPtr<IAgileObject>();
		};

		struct ComPtr<IAsyncInfo>
		{
			~ComPtr<IAsyncInfo>();
		};

		struct ComPtr<ICoreWindowInterop>
		{
			~ComPtr<ICoreWindowInterop>();
		};

		struct ComPtr<IInspectable>
		{
			~ComPtr<IInspectable>();
		};

		struct ComPtr<IUnknown>
		{
			ComPtr<IUnknown>();
			~ComPtr<IUnknown>();
		};

		struct ComPtr<SystemSettings::DataModel::ISettingItem>
		{
			long AsWeak(WeakRef *);
			~ComPtr<SystemSettings::DataModel::ISettingItem>();
		};

		struct ComPtr<SystemSettings::Update::CGlobalPolicyStringLink>
		{
			~ComPtr<SystemSettings::Update::CGlobalPolicyStringLink>();
		};

		struct ComPtr<SystemSettings::Update::CMusAdvancedSettingsLink>
		{
			~ComPtr<SystemSettings::Update::CMusAdvancedSettingsLink>();
		};

		struct ComPtr<SystemSettings::Update::CMusAllowAutoWindowsUpdateDownloadOverMeteredNetwork>
		{
			~ComPtr<SystemSettings::Update::CMusAllowAutoWindowsUpdateDownloadOverMeteredNetwork>();
		};

		struct ComPtr<SystemSettings::Update::CMusAutoDownloadInstallInfoText>
		{
			~ComPtr<SystemSettings::Update::CMusAutoDownloadInstallInfoText>();
		};

		struct ComPtr<SystemSettings::Update::CMusAutoLogonLink>
		{
			~ComPtr<SystemSettings::Update::CMusAutoLogonLink>();
		};

		struct ComPtr<SystemSettings::Update::CMusAvailableUpdates>
		{
			~ComPtr<SystemSettings::Update::CMusAvailableUpdates>();
		};

		struct ComPtr<SystemSettings::Update::CMusAvailableUpdatesListItem>
		{
			~ComPtr<SystemSettings::Update::CMusAvailableUpdatesListItem>();
		};

		struct ComPtr<SystemSettings::Update::CMusDriverUpdateEnabledCheckBox>
		{
			~ComPtr<SystemSettings::Update::CMusDriverUpdateEnabledCheckBox>();
		};

		struct ComPtr<SystemSettings::Update::CMusDynamicProductAnnouncements>
		{
			~ComPtr<SystemSettings::Update::CMusDynamicProductAnnouncements>();
		};

		struct ComPtr<SystemSettings::Update::CMusDynamicUX>
		{
			~ComPtr<SystemSettings::Update::CMusDynamicUX>();
		};

		struct ComPtr<SystemSettings::Update::CMusExpeditedToggle>
		{
			~ComPtr<SystemSettings::Update::CMusExpeditedToggle>();
		};

		struct ComPtr<SystemSettings::Update::CMusForceRestartStatusArea>
		{
			~ComPtr<SystemSettings::Update::CMusForceRestartStatusArea>();
		};

		struct ComPtr<SystemSettings::Update::CMusGetMeUpToDateAnnouncement>
		{
			~ComPtr<SystemSettings::Update::CMusGetMeUpToDateAnnouncement>();
		};

		struct ComPtr<SystemSettings::Update::CMusIAHAnnouncement>
		{
			~ComPtr<SystemSettings::Update::CMusIAHAnnouncement>();
		};

		struct ComPtr<SystemSettings::Update::CMusMuOptInCheckBox>
		{
			~ComPtr<SystemSettings::Update::CMusMuOptInCheckBox>();
		};

		struct ComPtr<SystemSettings::Update::CMusPauseUpdate>
		{
			~ComPtr<SystemSettings::Update::CMusPauseUpdate>();
		};

		struct ComPtr<SystemSettings::Update::CMusPayloadErrors>
		{
			~ComPtr<SystemSettings::Update::CMusPayloadErrors>();
		};

		struct ComPtr<SystemSettings::Update::CMusRelatedLinksSettingsLink>
		{
			~ComPtr<SystemSettings::Update::CMusRelatedLinksSettingsLink>();
		};

		struct ComPtr<SystemSettings::Update::CMusRelatedTipsSettingsLink>
		{
			~ComPtr<SystemSettings::Update::CMusRelatedTipsSettingsLink>();
		};

		struct ComPtr<SystemSettings::Update::CMusRestartFairWarningNotifications>
		{
			~ComPtr<SystemSettings::Update::CMusRestartFairWarningNotifications>();
		};

		struct ComPtr<SystemSettings::Update::CMusRestartSchedulePicker>
		{
			~ComPtr<SystemSettings::Update::CMusRestartSchedulePicker>();
		};

		struct ComPtr<SystemSettings::Update::CMusRestartStatusArea>
		{
			~ComPtr<SystemSettings::Update::CMusRestartStatusArea>();
		};

		struct ComPtr<SystemSettings::Update::CMusSeekerUpdate>
		{
			~ComPtr<SystemSettings::Update::CMusSeekerUpdate>();
		};

		struct ComPtr<SystemSettings::Update::CMusServiceUnavailableInfoText>
		{
			~ComPtr<SystemSettings::Update::CMusServiceUnavailableInfoText>();
		};

		struct ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem>
		{
			~ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem>();
		};

		struct ComPtr<SystemSettings::Update::CMusSortablePayloadDescriptionListItem>
		{
			~ComPtr<SystemSettings::Update::CMusSortablePayloadDescriptionListItem>();
		};

		struct ComPtr<SystemSettings::Update::CMusUpdateActionButton>
		{
			~ComPtr<SystemSettings::Update::CMusUpdateActionButton>();
		};

		struct ComPtr<SystemSettings::Update::CMusUpdateActiveHoursActionLink>
		{
			~ComPtr<SystemSettings::Update::CMusUpdateActiveHoursActionLink>();
		};

		struct ComPtr<SystemSettings::Update::CMusUpdateActiveHoursLink>
		{
			~ComPtr<SystemSettings::Update::CMusUpdateActiveHoursLink>();
		};

		struct ComPtr<SystemSettings::Update::CMusUpdateActiveHoursRecommendationLink>
		{
			~ComPtr<SystemSettings::Update::CMusUpdateActiveHoursRecommendationLink>();
		};

		struct ComPtr<SystemSettings::Update::CMusUpdateActiveHoursToggle>
		{
			~ComPtr<SystemSettings::Update::CMusUpdateActiveHoursToggle>();
		};

		struct ComPtr<SystemSettings::Update::CMusUpdateAnticipationSettingsLink>
		{
			~ComPtr<SystemSettings::Update::CMusUpdateAnticipationSettingsLink>();
		};

		struct ComPtr<SystemSettings::Update::CMusUpdateCheckOnlineActionLink>
		{
			~ComPtr<SystemSettings::Update::CMusUpdateCheckOnlineActionLink>();
		};

		struct ComPtr<SystemSettings::Update::CMusUpdateDetails>
		{
			~ComPtr<SystemSettings::Update::CMusUpdateDetails>();
		};

		struct ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting>
		{
			~ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting>();
		};

		struct ComPtr<SystemSettings::Update::CMusUpdateErrorArea>
		{
			~ComPtr<SystemSettings::Update::CMusUpdateErrorArea>();
		};

		struct ComPtr<SystemSettings::Update::CMusUpdateEulaActionButton>
		{
			~ComPtr<SystemSettings::Update::CMusUpdateEulaActionButton>();
		};

		struct ComPtr<SystemSettings::Update::CMusUpdateFeatureUpdateDeferDays>
		{
			~ComPtr<SystemSettings::Update::CMusUpdateFeatureUpdateDeferDays>();
		};

		struct ComPtr<SystemSettings::Update::CMusUpdateHistory>
		{
			~ComPtr<SystemSettings::Update::CMusUpdateHistory>();
		};

		struct ComPtr<SystemSettings::Update::CMusUpdateHistoryCategoryDefinition>
		{
			~ComPtr<SystemSettings::Update::CMusUpdateHistoryCategoryDefinition>();
		};

		struct ComPtr<SystemSettings::Update::CMusUpdateHistoryCategoryDriver>
		{
			~ComPtr<SystemSettings::Update::CMusUpdateHistoryCategoryDriver>();
		};

		struct ComPtr<SystemSettings::Update::CMusUpdateHistoryCategoryFeature>
		{
			~ComPtr<SystemSettings::Update::CMusUpdateHistoryCategoryFeature>();
		};

		struct ComPtr<SystemSettings::Update::CMusUpdateHistoryCategoryOther>
		{
			~ComPtr<SystemSettings::Update::CMusUpdateHistoryCategoryOther>();
		};

		struct ComPtr<SystemSettings::Update::CMusUpdateHistoryCategoryQuality>
		{
			~ComPtr<SystemSettings::Update::CMusUpdateHistoryCategoryQuality>();
		};

		struct ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting>
		{
			~ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting>();
		};

		struct ComPtr<SystemSettings::Update::CMusUpdateHistoryLink>
		{
			~ComPtr<SystemSettings::Update::CMusUpdateHistoryLink>();
		};

		struct ComPtr<SystemSettings::Update::CMusUpdateNavigationButton>
		{
			~ComPtr<SystemSettings::Update::CMusUpdateNavigationButton>();
		};

		struct ComPtr<SystemSettings::Update::CMusUpdatePauseUpdate2>
		{
			~ComPtr<SystemSettings::Update::CMusUpdatePauseUpdate2>();
		};

		struct ComPtr<SystemSettings::Update::CMusUpdatePolicyInfoSetting>
		{
			~ComPtr<SystemSettings::Update::CMusUpdatePolicyInfoSetting>();
		};

		struct ComPtr<SystemSettings::Update::CMusUpdatePolicyList>
		{
			~ComPtr<SystemSettings::Update::CMusUpdatePolicyList>();
		};

		struct ComPtr<SystemSettings::Update::CMusUpdatePolicyText>
		{
			~ComPtr<SystemSettings::Update::CMusUpdatePolicyText>();
		};

		struct ComPtr<SystemSettings::Update::CMusUpdateQualityUpdateDeferDays>
		{
			~ComPtr<SystemSettings::Update::CMusUpdateQualityUpdateDeferDays>();
		};

		struct ComPtr<SystemSettings::Update::CMusUpdateStatusArea>
		{
			~ComPtr<SystemSettings::Update::CMusUpdateStatusArea>();
		};

		struct ComPtr<SystemSettings::Update::CMusWaaSOutOfDateStatus>
		{
			~ComPtr<SystemSettings::Update::CMusWaaSOutOfDateStatus>();
		};

		struct ComPtr<Windows::ApplicationModel::Resources::Core::IResourceCandidate>
		{
			~ComPtr<Windows::ApplicationModel::Resources::Core::IResourceCandidate>();
		};

		struct ComPtr<Windows::ApplicationModel::Resources::Core::IResourceManager>
		{
			~ComPtr<Windows::ApplicationModel::Resources::Core::IResourceManager>();
		};

		struct ComPtr<Windows::ApplicationModel::Resources::Core::IResourceManagerStatics>
		{
			~ComPtr<Windows::ApplicationModel::Resources::Core::IResourceManagerStatics>();
		};

		struct ComPtr<Windows::ApplicationModel::Resources::Core::IResourceMap>
		{
			~ComPtr<Windows::ApplicationModel::Resources::Core::IResourceMap>();
		};

		struct ComPtr<Windows::ApplicationModel::Resources::Core::Internal::IResourceManagerStaticInternal>
		{
			~ComPtr<Windows::ApplicationModel::Resources::Core::Internal::IResourceManagerStaticInternal>();
		};

		struct ComPtr<Windows::Foundation::Collections::IIterable<IInspectable *> >
		{
			~ComPtr<Windows::Foundation::Collections::IIterable<IInspectable *> >();
		};

		struct ComPtr<Windows::Foundation::Collections::IIterable<SystemSettings::DataModel::ISettingItem *> >
		{
			~ComPtr<Windows::Foundation::Collections::IIterable<SystemSettings::DataModel::ISettingItem *> >();
		};

		struct ComPtr<Windows::Foundation::Collections::IMapView<HSTRING__ *,Windows::ApplicationModel::Resources::Core::ResourceMap *> >
		{
			~ComPtr<Windows::Foundation::Collections::IMapView<HSTRING__ *,Windows::ApplicationModel::Resources::Core::ResourceMap *> >();
		};

		struct ComPtr<Windows::Foundation::Collections::Internal::AgileObservableVector<IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *> > >
		{
			~ComPtr<Windows::Foundation::Collections::Internal::AgileObservableVector<IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *> > >();
		};

		struct ComPtr<Windows::Foundation::Collections::Internal::AgileObservableVector<SystemSettings::DataModel::ISettingItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<SystemSettings::DataModel::ISettingItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::ISettingItem *> > >
		{
			~ComPtr<Windows::Foundation::Collections::Internal::AgileObservableVector<SystemSettings::DataModel::ISettingItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<SystemSettings::DataModel::ISettingItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::ISettingItem *> > >();
		};

		struct ComPtr<Windows::Foundation::Collections::Internal::SimpleVectorIterator<IInspectable *,Windows::Foundation::Collections::Internal::Vector<IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,1,1,0> >,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,XWinRT::IntVersionTag,1> >
		{
			~ComPtr<Windows::Foundation::Collections::Internal::SimpleVectorIterator<IInspectable *,Windows::Foundation::Collections::Internal::Vector<IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,1,1,0> >,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,XWinRT::IntVersionTag,1> >();
		};

		struct ComPtr<Windows::Foundation::Collections::Internal::SimpleVectorIterator<SystemSettings::DataModel::ISettingItem *,Windows::Foundation::Collections::Internal::Vector<SystemSettings::DataModel::ISettingItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<SystemSettings::DataModel::ISettingItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::ISettingItem *>,Windows::Foundation::Collections::Internal::VectorOptions<SystemSettings::DataModel::ISettingItem *,1,1,0> >,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::ISettingItem *>,XWinRT::IntVersionTag,1> >
		{
			~ComPtr<Windows::Foundation::Collections::Internal::SimpleVectorIterator<SystemSettings::DataModel::ISettingItem *,Windows::Foundation::Collections::Internal::Vector<SystemSettings::DataModel::ISettingItem *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<SystemSettings::DataModel::ISettingItem *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::ISettingItem *>,Windows::Foundation::Collections::Internal::VectorOptions<SystemSettings::DataModel::ISettingItem *,1,1,0> >,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::ISettingItem *>,XWinRT::IntVersionTag,1> >();
		};

		struct ComPtr<Windows::Foundation::Collections::VectorChangedEventHandler<IInspectable *> >
		{
			~ComPtr<Windows::Foundation::Collections::VectorChangedEventHandler<IInspectable *> >();
		};

		struct ComPtr<Windows::Foundation::Collections::VectorChangedEventHandler<SystemSettings::DataModel::ISettingItem *> >
		{
			~ComPtr<Windows::Foundation::Collections::VectorChangedEventHandler<SystemSettings::DataModel::ISettingItem *> >();
		};

		struct ComPtr<Windows::Foundation::IAsyncOperation<bool> >
		{
			~ComPtr<Windows::Foundation::IAsyncOperation<bool> >();
		};

		struct ComPtr<Windows::Foundation::IPropertyValue>
		{
			~ComPtr<Windows::Foundation::IPropertyValue>();
		};

		struct ComPtr<Windows::Foundation::IUriRuntimeClass>
		{
			~ComPtr<Windows::Foundation::IUriRuntimeClass>();
		};

		struct ComPtr<Windows::Foundation::IUriRuntimeClassFactory>
		{
			~ComPtr<Windows::Foundation::IUriRuntimeClassFactory>();
		};

		struct ComPtr<Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::Collections::VectorChangedEventHandler<IInspectable *>,Windows::Internal::GitPtr,2> >
		{
			~ComPtr<Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::Collections::VectorChangedEventHandler<IInspectable *>,Windows::Internal::GitPtr,2> >();
		};

		struct ComPtr<Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::Collections::VectorChangedEventHandler<SystemSettings::DataModel::ISettingItem *>,Windows::Internal::GitPtr,2> >
		{
			~ComPtr<Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::Collections::VectorChangedEventHandler<SystemSettings::DataModel::ISettingItem *>,Windows::Internal::GitPtr,2> >();
		};

		struct ComPtr<Windows::System::ILauncherStatics>
		{
			~ComPtr<Windows::System::ILauncherStatics>();
		};

		namespace Details
		{
			struct EventTargetArray
			{
				long RuntimeClassInitialize(unsigned __int64);
				void AddTail(IUnknown *,void *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,IWeakReferenceSource,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,IWeakReferenceSource,SystemSettings::DataModel::ISettingItemTelemetry,SystemSettings::DataModel::ISettingsAppNotification,SystemSettings::DataModel::ISettingItem2,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			struct MakeAllocator<SystemSettings::Update::CGlobalPolicyStringLink>
			{
				~MakeAllocator<SystemSettings::Update::CGlobalPolicyStringLink>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusAdvancedSettingsLink>
			{
				~MakeAllocator<SystemSettings::Update::CMusAdvancedSettingsLink>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusAllowAutoWindowsUpdateDownloadOverMeteredNetwork>
			{
				~MakeAllocator<SystemSettings::Update::CMusAllowAutoWindowsUpdateDownloadOverMeteredNetwork>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusAutoDownloadInstallInfoText>
			{
				~MakeAllocator<SystemSettings::Update::CMusAutoDownloadInstallInfoText>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusAutoLogonLink>
			{
				~MakeAllocator<SystemSettings::Update::CMusAutoLogonLink>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusAvailableUpdates>
			{
				~MakeAllocator<SystemSettings::Update::CMusAvailableUpdates>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusDriverUpdateEnabledCheckBox>
			{
				~MakeAllocator<SystemSettings::Update::CMusDriverUpdateEnabledCheckBox>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusDynamicProductAnnouncements>
			{
				~MakeAllocator<SystemSettings::Update::CMusDynamicProductAnnouncements>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusDynamicUX>
			{
				~MakeAllocator<SystemSettings::Update::CMusDynamicUX>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusExpeditedToggle>
			{
				~MakeAllocator<SystemSettings::Update::CMusExpeditedToggle>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusForceRestartStatusArea>
			{
				~MakeAllocator<SystemSettings::Update::CMusForceRestartStatusArea>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusGetMeUpToDateAnnouncement>
			{
				~MakeAllocator<SystemSettings::Update::CMusGetMeUpToDateAnnouncement>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusIAHAnnouncement>
			{
				~MakeAllocator<SystemSettings::Update::CMusIAHAnnouncement>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusMuOptInCheckBox>
			{
				~MakeAllocator<SystemSettings::Update::CMusMuOptInCheckBox>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusPauseUpdate>
			{
				~MakeAllocator<SystemSettings::Update::CMusPauseUpdate>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusPayloadErrors>
			{
				~MakeAllocator<SystemSettings::Update::CMusPayloadErrors>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusRelatedLinksSettingsLink>
			{
				~MakeAllocator<SystemSettings::Update::CMusRelatedLinksSettingsLink>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusRelatedTipsSettingsLink>
			{
				~MakeAllocator<SystemSettings::Update::CMusRelatedTipsSettingsLink>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusRestartFairWarningNotifications>
			{
				~MakeAllocator<SystemSettings::Update::CMusRestartFairWarningNotifications>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusRestartSchedulePicker>
			{
				~MakeAllocator<SystemSettings::Update::CMusRestartSchedulePicker>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusRestartStatusArea>
			{
				~MakeAllocator<SystemSettings::Update::CMusRestartStatusArea>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusSeekerUpdate>
			{
				~MakeAllocator<SystemSettings::Update::CMusSeekerUpdate>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusServiceUnavailableInfoText>
			{
				~MakeAllocator<SystemSettings::Update::CMusServiceUnavailableInfoText>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusUpdateActionButton>
			{
				~MakeAllocator<SystemSettings::Update::CMusUpdateActionButton>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusUpdateActiveHoursActionLink>
			{
				~MakeAllocator<SystemSettings::Update::CMusUpdateActiveHoursActionLink>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusUpdateActiveHoursLink>
			{
				~MakeAllocator<SystemSettings::Update::CMusUpdateActiveHoursLink>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusUpdateActiveHoursRecommendationLink>
			{
				~MakeAllocator<SystemSettings::Update::CMusUpdateActiveHoursRecommendationLink>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusUpdateActiveHoursToggle>
			{
				~MakeAllocator<SystemSettings::Update::CMusUpdateActiveHoursToggle>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusUpdateAnticipationSettingsLink>
			{
				~MakeAllocator<SystemSettings::Update::CMusUpdateAnticipationSettingsLink>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusUpdateCheckOnlineActionLink>
			{
				~MakeAllocator<SystemSettings::Update::CMusUpdateCheckOnlineActionLink>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusUpdateDetails>
			{
				~MakeAllocator<SystemSettings::Update::CMusUpdateDetails>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusUpdateErrorArea>
			{
				~MakeAllocator<SystemSettings::Update::CMusUpdateErrorArea>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusUpdateEulaActionButton>
			{
				~MakeAllocator<SystemSettings::Update::CMusUpdateEulaActionButton>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusUpdateFeatureUpdateDeferDays>
			{
				~MakeAllocator<SystemSettings::Update::CMusUpdateFeatureUpdateDeferDays>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusUpdateHistory>
			{
				~MakeAllocator<SystemSettings::Update::CMusUpdateHistory>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusUpdateHistoryCategoryDefinition>
			{
				~MakeAllocator<SystemSettings::Update::CMusUpdateHistoryCategoryDefinition>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusUpdateHistoryCategoryDriver>
			{
				~MakeAllocator<SystemSettings::Update::CMusUpdateHistoryCategoryDriver>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusUpdateHistoryCategoryFeature>
			{
				~MakeAllocator<SystemSettings::Update::CMusUpdateHistoryCategoryFeature>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusUpdateHistoryCategoryOther>
			{
				~MakeAllocator<SystemSettings::Update::CMusUpdateHistoryCategoryOther>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusUpdateHistoryCategoryQuality>
			{
				~MakeAllocator<SystemSettings::Update::CMusUpdateHistoryCategoryQuality>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusUpdateHistoryLink>
			{
				~MakeAllocator<SystemSettings::Update::CMusUpdateHistoryLink>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusUpdateNavigationButton>
			{
				~MakeAllocator<SystemSettings::Update::CMusUpdateNavigationButton>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusUpdatePauseUpdate2>
			{
				~MakeAllocator<SystemSettings::Update::CMusUpdatePauseUpdate2>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusUpdatePolicyList>
			{
				~MakeAllocator<SystemSettings::Update::CMusUpdatePolicyList>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusUpdatePolicyText>
			{
				~MakeAllocator<SystemSettings::Update::CMusUpdatePolicyText>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusUpdateQualityUpdateDeferDays>
			{
				~MakeAllocator<SystemSettings::Update::CMusUpdateQualityUpdateDeferDays>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusUpdateStatusArea>
			{
				~MakeAllocator<SystemSettings::Update::CMusUpdateStatusArea>();
			};

			struct MakeAllocator<SystemSettings::Update::CMusWaaSOutOfDateStatus>
			{
				~MakeAllocator<SystemSettings::Update::CMusWaaSOutOfDateStatus>();
			};

			struct ModuleBase
			{
				static ModuleBase * module_;
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Implements<Windows::Foundation::Collections::IVector<IInspectable *>,Windows::Foundation::Collections::IIterable<IInspectable *>,Windows::Foundation::Collections::IObservableVector<IInspectable *> >,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Implements<Windows::Foundation::Collections::IVector<IInspectable *>,Windows::Foundation::Collections::IIterable<IInspectable *>,Windows::Foundation::Collections::IObservableVector<IInspectable *> >,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Implements<Windows::Foundation::Collections::IVector<SystemSettings::DataModel::ISettingItem *>,Windows::Foundation::Collections::IIterable<SystemSettings::DataModel::ISettingItem *>,Windows::Foundation::Collections::IObservableVector<SystemSettings::DataModel::ISettingItem *> >,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Implements<Windows::Foundation::Collections::IVector<SystemSettings::DataModel::ISettingItem *>,Windows::Foundation::Collections::IIterable<SystemSettings::DataModel::ISettingItem *>,Windows::Foundation::Collections::IObservableVector<SystemSettings::DataModel::ISettingItem *> >,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,SystemSettings::DataModel::ISettingItem,SystemSettings::DataModel::ISettingItemTelemetry,SystemSettings::DataModel::ISettingsAppNotification,SystemSettings::DataModel::ISettingItem2,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,SystemSettings::DataModel::ISettingItem,SystemSettings::DataModel::ISettingItemTelemetry,SystemSettings::DataModel::ISettingsAppNotification,SystemSettings::DataModel::ISettingItem2,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<IInspectable *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<IInspectable *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<SystemSettings::DataModel::ISettingItem *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<SystemSettings::DataModel::ISettingItem *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorChangedEventArgs>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorChangedEventArgs>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<IInspectable *>,Windows::Foundation::Collections::IIterable<IInspectable *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<IInspectable *>,Windows::Foundation::Collections::IIterable<IInspectable *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<SystemSettings::DataModel::ISettingItem *>,Windows::Foundation::Collections::IIterable<SystemSettings::DataModel::ISettingItem *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<SystemSettings::DataModel::ISettingItem *>,Windows::Foundation::Collections::IIterable<SystemSettings::DataModel::ISettingItem *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IUnknown>
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

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::Collections::VectorChangedEventHandler<IInspectable *>,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::Collections::VectorChangedEventHandler<SystemSettings::DataModel::ISettingItem *>,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct WeakReferenceImpl
			{
				virtual long Resolve(_GUID const &,IInspectable * *);
			};

			Details::WeakReferenceImpl * CreateWeakReference(IUnknown *);
			long MakeAndInitialize<EventTargetArray,EventTargetArray,unsigned __int64 &>(Details::EventTargetArray * *,unsigned __int64 &);
			void RaiseException(long,unsigned long);
		};

		class EventSource<Windows::Foundation::Collections::VectorChangedEventHandler<IInspectable *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::Collections::VectorChangedEventHandler<IInspectable *> *,void *,EventRegistrationToken *);
		public:
			long Remove(EventRegistrationToken);
		};

		class EventSource<Windows::Foundation::Collections::VectorChangedEventHandler<SystemSettings::DataModel::ISettingItem *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::Collections::VectorChangedEventHandler<SystemSettings::DataModel::ISettingItem *> *,void *,EventRegistrationToken *);
		public:
			long Remove(EventRegistrationToken);
		};

		class EventSource<Windows::Foundation::ITypedEventHandler<IInspectable *,HSTRING__ *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::ITypedEventHandler<IInspectable *,HSTRING__ *> *,void *,EventRegistrationToken *);
		public:
			long Remove(EventRegistrationToken);
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

		struct WeakRef
		{
			~WeakRef();
		};

		namespace Wrappers
		{
			struct CriticalSection
			{
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

			};

			struct HString
			{
				long Set<unsigned short const *>(unsigned short const * const &,Details::Dummy);
				~HString();
			};

			struct HStringReference
			{
				HStringReference<unsigned short const *>(unsigned short const * const &,Details::Dummy);
				~HStringReference();
			};

			class HandleT<HandleTraits::HANDLENullTraits>
			{
			protected:
				virtual bool InternalClose();
			};

		};

	};

};

struct MusUpdateLogging
{
	static _TlgProvider_t const * Provider();
};

class MusUpdateTelemetry
{
	class UpdateHistoryCategoryDefinitionActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void SendCV(char const *);
		void StartActivity();
		~UpdateHistoryCategoryDefinitionActivity();
	};

protected:
	static MusUpdateTelemetry * Instance();
public:
	static void AcceptAllEulaAndInstallClicked(char const *);
	static void ActiveHoursDialogErrorTextDisplayed(char const *);
	static void ActiveHoursMaxRangePolicyTextDisplayed(char const *);
	static void AutoApproveSeekerQualityUpdatesEnabled<char (&)[129]>(char (&)[129]);
	static void ConnectToWIFIMessageDisplayed(char const *);
	static void DoMicrosoftScanCheckboxClicked<bool &>(bool &,char const *);
	static void DownloadFailedMessageDisplayed(char const *);
	static void DownloadOnMeteredNetworkButtonClicked(char const *);
	static void FeatureUpdateDeferDaysModified<unsigned long &,unsigned long &>(unsigned long &,unsigned long &,char const *);
	static void FeatureUpdatesSoughtByUser<unsigned long &,char (&)[129]>(unsigned long &,char (&)[129]);
	static void HolisticPayloadUxDisplayed<long &>(long &,char const *);
	static void HolisticPayloadUxWithRollbackDisplayed<long &,unsigned long &>(long &,unsigned long &,char const *);
	static void IncludeDriverUpdateCheckboxClicked<bool &>(bool &,char const *);
	static void InstallFailedMessageDisplayed(char const *);
	static void McsRestartNowFailed<unsigned long &>(unsigned long &,char const *);
	static void MicrosoftUpdateCheckboxClicked<bool &>(bool &,char const *);
	static void MusChangeActiveHoursDialogCancelButtonClicked(char const *);
	static void MusChangeActiveHoursDialogSaveButtonClicked(char const *);
	static void MusRestartOptionsPageDisplayed(char const *);
	static void NotEnoughDiskSpaceMessageDisplayed(char const *);
	static void PauseUpdateExpiryDateChanged<_FILETIME &,_FILETIME &>(_FILETIME &,_FILETIME &,char const *);
	static void QualityUpdateDeferDaysModified<unsigned long &,unsigned long &>(unsigned long &,unsigned long &,char const *);
	static void QualityUpdatesSoughtByUser<unsigned long &,char (&)[129]>(unsigned long &,char (&)[129]);
	static void RestartFairWarningNotificationsAllowedClicked<bool &>(bool &,char const *);
	static void RestartNowFailed<long &>(long &,char const *);
	static void SeekerUpdatesDisplayed<char (&)[129]>(char (&)[129]);
	static void ServiceUnavailableMessageDisplayed(char const *);
	static void UpdatesPauseExtendedByUser<unsigned long &>(unsigned long &,char const *);
	static void UpdatesPausedByUser<unsigned long &>(unsigned long &,char const *);
	static void UpdatesResumedByUser(char const *);
	static void UserDoesnotHaveRebootPrivilege(char const *);
	static void UsoLastErrorFromOrchestrator<long &>(long &,char const *);
	static void UsoLastErrorUxDisplayed<long &>(long &,char const *);
	static void ViewConfiguredUpdatePoliciesLinkClicked<unsigned long &>(unsigned long &,char const *);
	static void WaaSOutofDateMessageDisplayed(char const *);
	void ActiveHoursModifiedByUser_(unsigned short,unsigned short);
	void AllowMeteredConnections_(int);
	void CheckForUpdateButtonClicked_(bool const &,bool const &,bool const &);
	void DownloadButtonClicked_();
	void FixIssuesButtonClicked_();
	void InstallButtonClicked_();
	void MusDynamicProductAnnouncementsEnabled_(long,bool);
	void PayloadErrorDisplayed_(tagUsoUpdateIdentifier const &,long);
	void PayloadRollbackErrorDisplayed_(tagUsoUpdateIdentifier const &,long,unsigned long);
	void RebootButtonClicked_(bool);
	void SeekerUpdateApprovedForInstall_(tagUsoUpdateIdentifier const &,bool);
	void SetExpeditedMode_(int,int);
	void UpdateRebootScheduledByUser_(_SYSTEMTIME,SchedulePickerOption);
};

struct MusUpdateTracelogging
{
	static void ActiveUsoSessionChanged(_GUID,_GUID);
	static void ButtonActionInvoked(char const *);
	static void CplProgress(char const *,unsigned int);
	static void DayPickerUpdated(unsigned long);
	static void InitialRebootScheduled(_SYSTEMTIME);
	static void NotSavingInvalidUserSelectedRebootTime(_SYSTEMTIME);
	static void RebootAndCommitFailed(long,unsigned long);
	static void RollbackErrorFound(long,unsigned long,_FILETIME);
	static void UpdateDetailsFailedUpdateDisplayed(_GUID,unsigned int,unsigned short const *,unsigned int,long,_FILETIME);
	static void UpdateHistoryFailedUpdateDisplayed(_GUID,unsigned int,unsigned short const *,unsigned int,_FILETIME,long);
	static void UxStateChanged(char const *,char const *);
	static void WaitForNotifyThreadCompleteFailed(long);
};

class MusUxTelemetryCommon
{
protected:
	static wil::critical_section m_crtiSection;
	static wistd::unique_ptr<TraceLoggingCorrelationVector,wistd::default_delete<TraceLoggingCorrelationVector> > m_correlationVector;
public:
	static long GetCV(TraceLoggingCorrelationVector * *);
};

class MusWOSCSettings
{
	long GetNamedOneSettingsString(tagMusUxOneSettings,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	long GetOneSettingsPayload(bool);
public:
	static long CreateInstance(bool,IUxOneSettings * *);
	static unsigned short const * const * const c_rgszSettingName;
	virtual long DoesOneSettingsValueExist(tagMusUxOneSettings,int *);
	virtual long GetOneSettingsValueBOOL(tagMusUxOneSettings,int *);
	virtual long GetOneSettingsValueBSTR(tagMusUxOneSettings,unsigned short * *);
	virtual long GetOneSettingsValueBYTE(tagMusUxOneSettings,unsigned char *);
	virtual long GetOneSettingsValueDWORD(tagMusUxOneSettings,unsigned long *);
	virtual long GetOneSettingsValueLONG(tagMusUxOneSettings,long *);
	virtual long GetOneSettingsValueLONGLONG(tagMusUxOneSettings,__int64 *);
	virtual long GetOneSettingsValueOrDefaultBOOL(tagMusUxOneSettings,int,int *,int *);
	virtual long GetOneSettingsValueOrDefaultBSTR(tagMusUxOneSettings,unsigned short *,unsigned short * *,int *);
	virtual long GetOneSettingsValueOrDefaultBYTE(tagMusUxOneSettings,unsigned char,unsigned char *,int *);
	virtual long GetOneSettingsValueOrDefaultDWORD(tagMusUxOneSettings,unsigned long,unsigned long *,int *);
	virtual long GetOneSettingsValueOrDefaultLONG(tagMusUxOneSettings,long,long *,int *);
	virtual long GetOneSettingsValueOrDefaultLONGLONG(tagMusUxOneSettings,__int64,__int64 *,int *);
	virtual long GetOneSettingsValueOrDefaultULONGLONG(tagMusUxOneSettings,unsigned __int64,unsigned __int64 *,int *);
	virtual long GetOneSettingsValueOrDefaultWORD(tagMusUxOneSettings,unsigned short,unsigned short *,int *);
	virtual long GetOneSettingsValueULONGLONG(tagMusUxOneSettings,unsigned __int64 *);
	virtual long GetOneSettingsValueWORD(tagMusUxOneSettings,unsigned short *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RefreshOneSettingsCache();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct OneSettingsParsingHelper
{
	static long ParseComplexJsonBasedOnDaysInState(unsigned short const *,unsigned long,unsigned short,tagVARIANT *);
};

class PauseUpdatesUtility
{
	static unsigned short const * const msc_flightSettingsMaxPauseDays;
	static unsigned short const * const msc_pauseFeatureUpdatesEndTime;
	static unsigned short const * const msc_pauseFeatureUpdatesStartTime;
	static unsigned short const * const msc_pauseQualityUpdatesEndTime;
	static unsigned short const * const msc_pauseQualityUpdatesStartTime;
	static unsigned short const * const msc_pauseUpdatesExpiryTime;
public:
	static bool AreUpdatesPaused();
	static long GetMaxDaysAllowToExtendPause(unsigned long,unsigned long *);
	static long GetPauseUpdatesExpiryTime(unsigned long,_FILETIME *);
	static long GetPauseUpdatesExpiryTimeRegValue(_FILETIME *);
	static long GetPauseUpdatesStartTimeRegValue(_FILETIME *);
	static long RemovePauseUpdatesRegValues();
	static long SetPauseUpdatesExpiryTime(_FILETIME);
	static long SetPauseUpdatesStartTime(_FILETIME);
	static unsigned long GetMaxPauseQualityPeriodInDays(unsigned long);
};

class PolicyUtil
{
protected:
	static bool IsGPAutoInstallConfigured(UxUsoShim *);
	static long GetGraceDeadlinePolicyFromTestHooks(GraceDeadlinePolicy *,_TlgProvider_t const * const,bool *);
	static long IsNormalizedAuPolicyConfigured(UxUsoShim *,tagUpdatePolicy_UpdateOptions_Value,tagUpdatePolicy_AllowAutoUpdate_Value,tagUpdatePolicyStatus *,tagPolicyStore *);
	static long IsPolicyConfiguredHelper(UxUsoShim *,tagUpdatePolicy,unsigned long,tagUpdatePolicyStatus *,tagPolicyStore *);
	static std::map<unsigned long,bool,std::less<unsigned long>,std::allocator<std::pair<unsigned long const ,bool> > > const cachedPolicyTemplateMap;
	static unsigned short const * const msc_szFSAutoRestartDeadlinePeriodInDaysForFeatureUpdates;
	static unsigned short const * const msc_szFSAutoRestartDeadlinePeriodInDaysForNonFeatureUpdates;
	static unsigned short const * const msc_szFSWUServer;
public:
	static bool IsPolicyConfigured(UxUsoShim *,NormalizedPolicy);
	static bool IsPolicyConfiguredAndEnabled(UxUsoShim *,NormalizedPolicy);
	static bool IsPolicyConfiguredByInsiderProgram(UxUsoShim *,NormalizedPolicy);
	static bool IsPolicyEnabledForGPAllowAutoUpdate(UxUsoShim *,NormalizedPolicy);
	static int const * const msc_AutoRestartNotificationSchdInMinsValidSet;
	static int const * const msc_RestartWarnRemindSchdInHoursValidSet;
	static int const * const msc_RestartWarnSchdInMinsValidSet;
	static long GetAutoRestartCountdownMinutes(UxUsoShim *,unsigned long *);
	static long GetDeadlineDaysForAutoRestartDeadlinePolicy(UxUsoShim *,_TlgProvider_t const * const,unsigned long *);
	static long GetDeadlineDaysForEngagedPolicy(UxUsoShim *,EngagedRestartPolicy,_TlgProvider_t const * const,unsigned long *);
	static long GetDeadlineDaysForGraceDeadlinePolicy(UxUsoShim *,IUxOneSettings *,_TlgProvider_t const * const,_FILETIME *,unsigned long *);
	static long GetEffectiveDeadline(_FILETIME,bool,unsigned long,unsigned long,_FILETIME,_FILETIME *,bool *,bool *);
	static long GetEnforcedAuPolicy(UxUsoShim *,NormalizedPolicy *);
	static long GetEscalationWindow(_FILETIME,_FILETIME,_FILETIME,unsigned long,unsigned long,RebootEscalationWindow *,bool *,_TlgProvider_t const * const);
	static long GetGraceDeadlinePolicy(UxUsoShim *,IUxOneSettings *,MgmtUpdatePolicy *,_TlgProvider_t const * const,bool *);
	static long GetGraceDeadlineState(UxUsoShim *,IUxOneSettings *,MgmtUpdatePolicy *,_TlgProvider_t const * const);
	static long GetMgmtNotificationPolicies(UxUsoShim *,_TlgProvider_t const * const,MgmtUpdatePolicy *);
	static long GetMgmtUpdatePolicy(UxUsoShim *,IUxOneSettings *,_TlgProvider_t const * const,MgmtUpdatePolicy *);
	static long GetNextMaintenanceRebootTime(_SYSTEMTIME *);
	static long GetOptionsForUpdateNotificationLevelPolicy(UxUsoShim *,_TlgProvider_t const * const,UpdateNotificationOption *);
	static long GetPauseFeatureUpdatesEndTime(UxUsoShim *,_FILETIME *);
	static long GetPauseQualityUpdatesEndTime(UxUsoShim *,_FILETIME *);
	static long GetPolicyActiveHoursEnd(UxUsoShim *,unsigned short *);
	static long GetPolicyActiveHoursMaxRange(UxUsoShim *,unsigned short *);
	static long GetPolicyActiveHoursStart(UxUsoShim *,unsigned short *);
	static long GetPolicyStatus(UxUsoShim *,NormalizedPolicy,tagUpdatePolicyStatus *,tagPolicyStore *);
	static long GetPolicyValue(UxUsoShim *,NormalizedPolicy,tagUpdatePolicyStatus *,tagVARIANT *,tagPolicyStore *);
	static long GetScheduledInstallDay(UxUsoShim *,unsigned short *);
	static long GetScheduledInstallTime(UxUsoShim *,unsigned short *);
	static long GetTransitionDaysForEngagedPolicy(UxUsoShim *,EngagedRestartPolicy,_TlgProvider_t const * const,unsigned long *);
	static long IsAutoRestartDeadlinePolicyConfigured(UxUsoShim *,_TlgProvider_t const * const,bool *);
	static long IsDeadlineDaysForEngagedPolicyApplicable(UxUsoShim *,EngagedRestartPolicy,bool *);
	static long IsDisableAllNotificationsConfigured(UxUsoShim *,_TlgProvider_t const * const,bool *);
	static long IsEngagedEnforcedByPolicy(UxUsoShim *,MgmtUpdatePolicy,bool *);
	static long IsTransitionDaysForEngagedPolicyApplicable(UxUsoShim *,EngagedRestartPolicy,bool *);
	static unsigned long GetTransitionDaysIfEngagedPolicyInEffect(UxUsoShim *,EngagedRestartPolicy,_TlgProvider_t const * const);
};

class RebootTimeUtility
{
	static unsigned short const * const c_szFlightCommitted;
	static unsigned short const * const c_szFlightPendingCommit;
	static unsigned short const * const c_szFlightRebootTime;
	static unsigned short const * const c_szUpdateRebootTime;
public:
	static bool IsFlightCommitted();
	static int IsFlightPendingCommit();
	static long GetLastRebootMarkedTime(MarkedTimeType,_TlgProvider_t const * const,_FILETIME *);
};

class RegistryManager
{
	static long DeleteValueInternal(HKEY__ * const,unsigned short const *,unsigned short const *,unsigned short const *);
	static long GetValueInternal(HKEY__ * const,unsigned short const *,unsigned short const *,unsigned short const *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	static long GetValueInternal(HKEY__ * const,unsigned short const *,unsigned short const *,unsigned short const *,unsigned __int64 &);
	static long GetValueInternal(HKEY__ * const,unsigned short const *,unsigned short const *,unsigned short const *,unsigned long &);
	static long GetValueInternal(HKEY__ * const,unsigned short const *,unsigned short const *,unsigned short const *,unsigned long &,unsigned char *,unsigned long &);
	static long GetValueInternal(HKEY__ * const,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short *,unsigned long &);
	static long SetValueInternal(HKEY__ * const,unsigned short const *,unsigned short const *,unsigned short const *,unsigned long,unsigned char const *,unsigned long);
	static long SetValueInternal(HKEY__ * const,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *);
	static long ValueExistsInternal(HKEY__ * const,unsigned short const *,unsigned short const *,unsigned short const *,bool &);
	static std::map<unsigned short const *,unsigned short const *,std::less<unsigned short const *>,std::allocator<std::pair<unsigned short const * const,unsigned short const *> > > CreateRedirectionMap();
	static std::map<unsigned short const *,unsigned short const *,std::less<unsigned short const *>,std::allocator<std::pair<unsigned short const * const,unsigned short const *> > > s_defaultRedirectionMap;
public:
	static long DeleteHKLMValue(unsigned short const *,unsigned short const *,unsigned short const *);
	static long GetHKLMValue(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short *,unsigned long &);
	static long GetHKLMValue<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >(unsigned short const *,unsigned short const *,unsigned short const *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	static long GetHKLMValue<unsigned __int64>(unsigned short const *,unsigned short const *,unsigned short const *,unsigned __int64 &);
	static long GetHKLMValue<unsigned long>(unsigned short const *,unsigned short const *,unsigned short const *,unsigned long &);
	static long GetHKLMValueOrDefault<unsigned long>(unsigned short const *,unsigned short const *,unsigned short const *,unsigned long &,unsigned long);
	static long GetRedirectedRegistryKeyName(unsigned short const *,unsigned short const *,unsigned short *,unsigned __int64);
	static long HKLMValueExists(unsigned short const *,unsigned short const *,unsigned short const *,bool &);
	static long SetHKLMValue<unsigned long>(unsigned short const *,unsigned short const *,unsigned short const *,unsigned long);
	static long SetHKLMValue<unsigned short *>(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short * const);
};

class SchedUtil
{
protected:
	static SchedUtil::DefaultRebootScheduleEntry const * const sc_mdrseMap;
	static long GetDefaultRebootScheduleTimeActiveHours(UxUsoShim *,IUxOneSettings *,_TlgProvider_t const * const,_FILETIME,_FILETIME,bool,_SYSTEMTIME *);
public:
	static long GetDefaultRebootScheduleTime(UxUsoShim *,IUxOneSettings *,_TlgProvider_t const * const,_FILETIME,_FILETIME,bool,_SYSTEMTIME *);
};

struct SecurityHelper
{
	static bool IsLocalSystem();
	static long CreateSid(void * *,unsigned char,unsigned long,unsigned long);
	static long IsSidInToken(void *,void *,int *);
};

class SettingUtil
{
protected:
	static unsigned short const * const msc_autoRebootLimitInDays;
	static unsigned short const * const msc_insiderProgramEnabled;
	static unsigned short const * const msc_szAllowAutoWindowsUpdateDownloadOverMeteredNetwork;
	static unsigned short const * const msc_szUxDeferFeatureUpdatePeriodInDays;
	static unsigned short const * const msc_szUxDeferQualityUpdatePeriodInDays;
	static unsigned short const * const msc_szUxDoMicrosoftOnlyScan;
	static unsigned short const * const msc_szUxExcludeWUDriversInQualityUpdate;
	static unsigned short const * const msc_szUxIsExpedited;
	static unsigned short const * const msc_szUxOptionValueName;
	static unsigned short const * const msc_szUxRestartFairWarningNotificationsAllowed;
public:
	static DefaultRebootUxState GetDefaultRebootUxState(_FILETIME,_SYSTEMTIME,UxUsoShim *,IUxOneSettings *,_TlgProvider_t const * const,bool);
	static DefaultRebootUxState GetDefaultRebootUxStateEx(_FILETIME,_SYSTEMTIME,UxUsoShim *,IUxOneSettings *,_TlgProvider_t const * const,bool,unsigned long *);
	static DefaultRebootUxState GetEnhancedEngagedRebootUxState(_FILETIME,_SYSTEMTIME,UxUsoShim *,IUxOneSettings *,_TlgProvider_t const * const,unsigned long *);
	static bool IsDeviceInAutoRebootLimit(_FILETIME,UxUsoShim *,IUxOneSettings *,unsigned long,_TlgProvider_t const * const);
	static bool IsDeviceOnLTSB();
	static bool IsDeviceTimeOutsideRebootBounds(_FILETIME,_FILETIME,unsigned long,_TlgProvider_t const * const);
	static bool IsEnhancedEngageRebootEnabled(UxUsoShim *,IUxOneSettings *,_TlgProvider_t const * const);
	static bool IsHomeSku();
	static bool IsWsusConfigured(UxUsoShim *);
	static long GetAutoRebootMaxValidDays(UxUsoShim *,IUxOneSettings *,_TlgProvider_t const * const,unsigned long *);
	static long GetEngagedRestartPolicy(UxUsoShim *,EngagedRestartPolicy *);
	static long GetFeatureUpdateDeferDays(unsigned long *);
	static long GetIsRebootSmartSchedulingOn(UxUsoShim *,IUxOneSettings *,_TlgProvider_t const * const,bool *,bool *,unsigned long *);
	static long GetQualityUpdateDeferDays(unsigned long *);
	static long GetRestartFairWarningNotificationsAllowed(bool *);
	static long IsElevatableAdmin(bool *);
	static long SetIsExpeditedUpdateFlow(bool);
};

struct SmartActiveHoursUtil
{
	static long GetSmartActiveHour(bool,unsigned long *);
	static long GetSmartActiveHoursSuggestionState(SmartActiveHoursSuggestionState *);
	static unsigned short const * const sc_smartActiveHoursEnd;
	static unsigned short const * const sc_smartActiveHoursStart;
	static unsigned short const * const sc_smartActiveHoursSuggestionState;
};

namespace SystemSettings
{
	namespace DataModel
	{
		class CActionSetting
		{
			long _InvokeInternal();
			static CActionSetting::CData s_defaultHandlerData;
		protected:
			virtual long GetActionDescription(IInspectable * *);
			virtual void DoGenericAsyncWork();
		public:
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetProperty(HSTRING__ *,IInspectable * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long Invoke(Windows::UI::Core::ICoreWindow *,Windows::Foundation::Rect);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~CActionSetting();
		};

		struct CAutoWinRtInit
		{
			~CAutoWinRtInit();
		};

		struct CBoolSettingBase<long (*)(SettingDBItem const *,ISettingItem * *)>
		{
			virtual long GetValue(IInspectable * *);
		};

		class CCollectionSettingBase<long (*)(SettingDBItem const *,ISettingItem * *)>
		{
			static CCollectionSettingBase<long (*)(SettingDBItem const *,ISettingItem * *)>::CData s_defaultHandlerData;
		public:
			virtual long GetValue(IInspectable * *);
		};

		class CDataSettingBase<long (*)(SettingDBItem const *,ISettingItem * *)>
		{
			long _SetValue(IInspectable *);
		protected:
			virtual long GetNamedValue(HSTRING__ *,IInspectable * *);
			virtual long GetValue(IInspectable * *);
			virtual long SetNullValue();
			virtual long SetNullValueForUser(HSTRING__ *);
			virtual long SetValue(HSTRING__ *);
			virtual long SetValue(Windows::Foundation::IPropertyValue *);
			virtual long SetValue(bool);
			virtual void DoGenericAsyncWork();
		public:
			CDataSettingBase<long (*)(SettingDBItem const *,ISettingItem * *)>();
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long GetValue(HSTRING__ *,IInspectable * *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual long SetValue(HSTRING__ *,IInspectable *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~CDataSettingBase<long (*)(SettingDBItem const *,ISettingItem * *)>();
		};

		struct CDwordRangeSetting
		{
			virtual long GetValue(HSTRING__ *,IInspectable * *);
			virtual long SetValue(Windows::Foundation::IPropertyValue *);
		};

		class CGenericAsyncHelper<CSettingBase>
		{
			static unsigned long s_GenericAsyncThread(void *);
			void DoAsyncWorkInternal(CSettingBase *);
		public:
			CGenericAsyncHelper<CSettingBase>();
			virtual void SetSkipConcurrentOperations(bool);
			virtual void StartGenericAsyncWork(CSettingBase *);
		};

		class CListSetting
		{
			static CListSetting::CData s_defaultHandlerData;
		protected:
			virtual long GetRestrictionText(IInspectable * *);
		public:
			virtual long GetValue(HSTRING__ *,IInspectable * *);
			virtual ~CListSetting();
		};

		struct CSettingBase
		{
			virtual bool SetIsUpdating(unsigned char);
			virtual long GetInitializationResult();
			virtual long GetIsEnabledForUser(HSTRING__ *,unsigned char *);
			virtual long GetProperty(HSTRING__ *,IInspectable * *);
			virtual long GetValue(HSTRING__ *,IInspectable * *);
			virtual long GetValueForUser(HSTRING__ *,HSTRING__ *,IInspectable * *);
			virtual long Invoke(Windows::UI::Core::ICoreWindow *,Windows::Foundation::Rect);
			virtual long OnSettingsAppResuming();
			virtual long OnSettingsAppSuspending();
			virtual long SetPageSessionId(_GUID);
			virtual long SetProperty(HSTRING__ *,IInspectable *);
			virtual long SetValue(HSTRING__ *,IInspectable *);
			virtual long SetValueForUser(HSTRING__ *,HSTRING__ *,IInspectable *);
			virtual long add_SettingChanged(Windows::Foundation::ITypedEventHandler<IInspectable *,HSTRING__ *> *,EventRegistrationToken *);
			virtual long get_Description(HSTRING__ * *);
			virtual long get_Id(HSTRING__ * *);
			virtual long get_IsApplicable(unsigned char *);
			virtual long get_IsEnabled(unsigned char *);
			virtual long get_IsSetByGroupPolicy(unsigned char *);
			virtual long get_IsUpdating(unsigned char *);
			virtual long get_PageSessionId(_GUID *);
			virtual long get_Type(SettingType *);
			virtual long remove_SettingChanged(EventRegistrationToken);
			virtual ~CSettingBase();
			void OnValueChanged(unsigned short const *);
		};

		class CSingletonHelper<Update::MusNotification>
		{
			struct CCallback
			{
				virtual unsigned short const * GetCallbackName();
			};

			struct LockedCallback
			{
				~LockedCallback();
			};

			static unsigned long s_InitializationThread(void *);
			void _Initialization();
		protected:
			virtual long OnSingletonInit();
			virtual void OnAsyncInitComplete();
			virtual void OnSingletonDeinit();
		public:
			virtual ~CSingletonHelper<Update::MusNotification>();
			void Unregister(CSingletonHelper<Update::MusNotification>::CCallback *);
		};

		class CSingletonHelper<unsigned long>
		{
			struct CCallback
			{
				virtual unsigned short const * GetCallbackName();
			};

			class CNoCallback
			{
				virtual void HandleNotification(unsigned long);
			};

			static unsigned long s_InitializationThread(void *);
			void _Initialization();
		protected:
			virtual long OnSingletonInit();
			virtual void OnAsyncInitComplete();
			virtual void OnSingletonDeinit();
		public:
			virtual ~CSingletonHelper<unsigned long>();
			void Register(CSingletonHelper<unsigned long>::CCallback *);
			void Unregister(CSingletonHelper<unsigned long>::CCallback *);
		};

		class PropValueHelper
		{
			static Microsoft::WRL::Wrappers::CriticalSection _staticsLock;
			static Windows::Foundation::IPropertyValueStatics * _pPVStatics;
			static long _GetPVStatics();
		public:
			static long CreateString(unsigned short const *,IInspectable * *);
		};

		long FormatMessageArgAllocHString(unsigned short const *,HSTRING__ * *,...);
	};

	namespace Update
	{
		struct CGlobalPolicyStringLink
		{
			CGlobalPolicyStringLink();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long GetNamedValue(HSTRING__ *,IInspectable * *);
			virtual long get_Description(HSTRING__ * *);
			virtual long get_IsApplicable(unsigned char *);
			virtual long get_IsUpdating(unsigned char *);
			virtual void HandleNotification(MusNotification);
		};

		class CMusAdvancedSettingsLink
		{
		protected:
			virtual long InitializeState(MusNotification);
			virtual void RaiseValueChangedEvents();
		public:
			CMusAdvancedSettingsLink();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long GetValue(HSTRING__ *,IInspectable * *);
			virtual long get_Description(HSTRING__ * *);
		};

		struct CMusAllowAutoWindowsUpdateDownloadOverMeteredNetwork
		{
			CMusAllowAutoWindowsUpdateDownloadOverMeteredNetwork();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual bool GetValue();
			virtual long GetNamedValue(HSTRING__ *,IInspectable * *);
			virtual long SetValue(bool);
			virtual long get_Description(HSTRING__ * *);
			virtual long get_IsApplicable(unsigned char *);
			virtual long get_IsEnabled(unsigned char *);
			virtual long get_IsUpdating(unsigned char *);
			virtual void HandleNotification(MusNotification);
		};

		class CMusAutoDownloadInstallInfoText
		{
		protected:
			virtual long InitializeState(MusNotification);
			virtual void RaiseValueChangedEvents();
		public:
			CMusAutoDownloadInstallInfoText();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long GetValue(HSTRING__ *,IInspectable * *);
			virtual long get_Description(HSTRING__ * *);
			virtual long get_IsApplicable(unsigned char *);
		};

		struct CMusAutoLogonLink
		{
			CMusAutoLogonLink();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long get_IsApplicable(unsigned char *);
			virtual void HandleNotification(MusNotification);
		};

		class CMusAvailableUpdates
		{
			long InitializeSettingsCollection();
			static CMusAvailableUpdates::UxPropertyEntry const * const sc_rgupeMap;
			static bool AvailableUpdatesCollectionComparator(Microsoft::WRL::ComPtr<CMusSortableDescriptionListItem>,Microsoft::WRL::ComPtr<CMusSortableDescriptionListItem>);
		protected:
			virtual long GetSettingsCollection();
			virtual long InitializeState(MusNotification);
			virtual void InitializeSingletons();
			virtual void RaiseValueChangedEvents();
		public:
			CMusAvailableUpdates();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long GetValue(HSTRING__ *,IInspectable * *);
			virtual long get_Description(HSTRING__ * *);
			virtual long get_IsApplicable(unsigned char *);
		};

		struct CMusAvailableUpdatesListItem
		{
			virtual long GetNamedValue(HSTRING__ *,IInspectable * *);
			virtual long SetValue(bool);
		};

		struct CMusBoolListItem
		{
			CMusBoolListItem();
			virtual long get_Id(HSTRING__ * *);
			virtual long set_Id(unsigned short const *);
			virtual ~CMusBoolListItem();
		};

		struct CMusBoolSetting
		{
			CMusBoolSetting();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual bool GetValue();
			virtual long SetValue(bool);
			virtual long get_Description(HSTRING__ * *);
			virtual long get_IsApplicable(unsigned char *);
			virtual long get_IsEnabled(unsigned char *);
			virtual long set_Description(unsigned short const *);
			virtual long set_IsApplicable(bool);
			virtual long set_IsEnabled(bool);
			virtual ~CMusBoolSetting();
		};

		class CMusCollectionSetting
		{
		protected:
			virtual long GetSettingsCollection();
			void NotifySettingsCollection();
		public:
			CMusCollectionSetting();
			virtual long get_Id(HSTRING__ * *);
			virtual ~CMusCollectionSetting();
		};

		struct CMusDescriptionListItem
		{
			virtual long get_Description(HSTRING__ * *);
			virtual long set_Description(unsigned short const *);
			virtual ~CMusDescriptionListItem();
		};

		struct CMusDisplayStringSetting
		{
			CMusDisplayStringSetting();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long get_Description(HSTRING__ * *);
			virtual ~CMusDisplayStringSetting();
		};

		struct CMusDriverUpdateEnabledCheckBox
		{
			CMusDriverUpdateEnabledCheckBox();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual bool GetValue();
			virtual long GetNamedValue(HSTRING__ *,IInspectable * *);
			virtual long SetValue(bool);
			virtual long get_Description(HSTRING__ * *);
			virtual long get_IsApplicable(unsigned char *);
			virtual long get_IsEnabled(unsigned char *);
			virtual long get_IsUpdating(unsigned char *);
			virtual void HandleNotification(MusNotification);
		};

		class CMusDynamicProductAnnouncements
		{
		protected:
			virtual long InitializeState(MusNotification);
			virtual void RaiseValueChangedEvents();
		public:
			CMusDynamicProductAnnouncements();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long GetNamedValue(HSTRING__ *,IInspectable * *);
			virtual long get_IsApplicable(unsigned char *);
		};

		class CMusDynamicUX
		{
		protected:
			virtual long InitializeState(MusNotification);
			virtual void RaiseValueChangedEvents();
		public:
			CMusDynamicUX();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long GetNamedValue(HSTRING__ *,IInspectable * *);
			virtual long get_IsApplicable(unsigned char *);
		};

		class CMusErrorMapSingleton
		{
		protected:
			bool GetErrorContextResId(long,unsigned int *);
			long GetErrorContextString(long,bool,unsigned long,bool *,HSTRING__ * *);
			static CMusErrorMapSingleton::ErrorMapEntry const * const sc_rgemeEntries;
			static CMusErrorMapSingleton::ErrorMapEntry const * const sc_rgemeFullStackEntries;
			static CMusErrorMapSingleton::ErrorMapEntry const * const sc_rgemeWLANEntries;
			static CMusErrorMapSingleton::ErrorMapEntry const * const sc_rgemeWiFiEntries;
			static std::shared_ptr<CMusErrorMapSingleton> s_memsSingleton;
			static unsigned int const * const sc_rguiErrorArgRequiredResIds;
		public:
			virtual long OnSingletonInit();
			virtual void OnSingletonDeinit();
		};

		class CMusExpeditedToggle
		{
		protected:
			virtual long InitializeState(MusNotification);
			virtual void RaiseValueChangedEvents();
		public:
			CMusExpeditedToggle();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual bool GetValue();
			virtual long GetNamedValue(HSTRING__ *,IInspectable * *);
			virtual long SetValue(bool);
			virtual long get_Description(HSTRING__ * *);
			virtual long get_IsEnabled(unsigned char *);
		};

		class CMusForceRestartStatusArea
		{
		protected:
			virtual long InitializeIsApplicable();
			virtual long InitializeRestartScheduleDescription();
			virtual long InitializeState(MusNotification);
		public:
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long GetValue(HSTRING__ *,IInspectable * *);
			virtual long get_IsApplicable(unsigned char *);
		};

		class CMusGetMeUpToDateAnnouncement
		{
		protected:
			virtual long InitializeState(MusNotification);
			virtual long Invoke(HWND__ *);
			virtual void RaiseValueChangedEvents();
		public:
			CMusGetMeUpToDateAnnouncement();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long GetProperty(HSTRING__ *,IInspectable * *);
			virtual long get_Description(HSTRING__ * *);
			virtual long get_IsApplicable(unsigned char *);
		};

		class CMusIAHAnnouncement
		{
		protected:
			virtual long InitializeState(MusNotification);
			virtual long Invoke(HWND__ *);
			virtual void RaiseValueChangedEvents();
		public:
			CMusIAHAnnouncement();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long GetProperty(HSTRING__ *,IInspectable * *);
			virtual long get_Description(HSTRING__ * *);
			virtual long get_IsApplicable(unsigned char *);
		};

		struct CMusMuOptInCheckBox
		{
			CMusMuOptInCheckBox();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual bool GetValue();
			virtual long GetNamedValue(HSTRING__ *,IInspectable * *);
			virtual long SetValue(bool);
			virtual long get_Description(HSTRING__ * *);
			virtual long get_IsEnabled(unsigned char *);
			virtual long get_IsUpdating(unsigned char *);
			virtual void HandleNotification(MusNotification);
		};

		class CMusOrchModel
		{
		protected:
			long AcceptAllUpdateEulas();
			long ApproveSeekerFeatureUpdateForInstall();
			long ApproveSeekerQualityUpdateForInstall();
			long CreateNotifyPropertyChangedThread(UXUpdateReason,void * *);
			long CreateUpdateResultsTaskSchedule();
			long SingletonInitialize();
			static std::shared_ptr<CMusOrchModel> s_momsSingleton;
			static unsigned long s_NotifyPropertyChangedThreadProc(void *);
			virtual long OnSingletonInit();
			virtual void OnAsyncInitComplete();
			virtual void OnSingletonDeinit();
			void AutoRunUsoStateIfRequired();
			void OrchestratorUpdateCallback(char const &,UXUpdateReason);
			void RollbackErrorInfoInit();
			void SaveInsiderProgramStatus();
			void SingletonDeinitialize();
		public:
			CMusOrchModel();
			bool IsDirectEngagedReboot();
			bool IsDisableUXAccessPolicyEnabled();
			bool IsEngagedRebootAllowedByPolicy();
			bool IsRestartForced();
			bool IsSessionTypeOTC();
			bool IsUSOAvailable();
			bool IsUXCampaignApplicable(UXSurface);
			long DoesRebootScheduleExist(bool *);
			long FixServiceUnavailable();
			long GetDefaultRebootScheduleTime(_SYSTEMTIME *,_FILETIME,_FILETIME);
			long GetMgmtDefaultScheduleTime(_SYSTEMTIME *);
			long GetNextRebootTime(bool,_SYSTEMTIME,_SYSTEMTIME *);
			long GetOptionsForUpdateNotificationLevelPolicy(UpdateNotificationOption *);
			long GetPolicyValue(NormalizedPolicy,tagUpdatePolicyStatus *,tagVARIANT *);
			long GetSeekerUpdatesCounts(unsigned long *,unsigned long *);
			long GetUXElementStoreForSurface(UXSurface,UXElementStore *);
			long GetUpdatePayloadSize(tagUsoUpdatePayloadType,unsigned __int64 *,unsigned __int64 *);
			long GetValidScheduleRange(_FILETIME *,_FILETIME *);
			long GetValidScheduleRangeWithFallback(_FILETIME *,_FILETIME *,bool);
			long InvokeAction(HWND__ *,MusActionType const &);
			long InvokeReboot(bool,unsigned long *);
			long IsActiveHourIntervalValid(unsigned short,unsigned short,bool *);
			long IsAutoApproveSeekerQualityUpdatesEnabled(bool *);
			long IsAutoRestartDeadlinePolicyConfigured(bool *);
			long IsEngagedRestartDeadlinePolicyConfigured(bool *);
			long IsRebootRequired(bool *);
			long LoadDynamicElementById(UXSurface,UXElementType,unsigned int,HSTRING__ * *);
			long LoadStringById(UXSurface,unsigned int,HSTRING__ * *);
			long ResumeUpdates();
			long ScheduleReboot(_SYSTEMTIME);
			long get_ActiveHours(unsigned short *,unsigned short *);
			long get_ActiveHoursIntervalLimit(unsigned short *);
			long get_ApplicableUpdates(std::vector<std::shared_ptr<UxUsoUpdateShim>,std::allocator<std::shared_ptr<UxUsoUpdateShim> > > &);
			long get_ApplicableUpdatesPayloadInfo(PayloadInfo *);
			long get_CanScheduleUpdate(PayloadInfo &,bool *);
			long get_RebootSchedule(_SYSTEMTIME *);
			long get_SchedulePickerOption(SchedulePickerOption *);
			long get_SeekerUpdates(std::vector<std::shared_ptr<UxUsoUpdateShim>,std::allocator<std::shared_ptr<UxUsoUpdateShim> > > &);
			long set_AlwaysAllowDownloadOnMetered(bool);
			static NormalizedPolicy get_EnforcedAuPolicy();
			static UxSettingType get_UpdateUxOption();
			static bool CanPauseUpdates();
			static bool IsFeatureUpdatePausedByPolicy();
			static bool IsGraceDeadlinePolicyConfigured();
			static bool IsInsiderProgramEnabled();
			static bool IsMgmtPolicyValidForSchedulingReboot();
			static bool IsPolicyApplicable(NormalizedPolicy);
			static bool IsPolicyConfigured(NormalizedPolicy);
			static bool IsPolicyConfiguredForPauseUpdates();
			static bool IsPolicyConfiguredToMapToAutomaticReboot();
			static bool IsPolicyEnabled(NormalizedPolicy);
			static bool IsQualityUpdatePausedByPolicy();
			static long PauseUpdates(unsigned long);
			static long get_UpdateHistory(IUsoUpdateHistoryEntryCollection * *);
			static long set_ActiveHoursEnd(unsigned short);
			static long set_ActiveHoursStart(unsigned short);
			static long set_DoMicrosoftScan(bool);
			static long set_OptInToMu(bool);
			static long set_SchedulePickerOption(SchedulePickerOption);
			static std::shared_ptr<CMusOrchModel> GetInstanceShared();
			virtual ~CMusOrchModel();
			void NotifyPropertyChanged(UXUpdateReason);
			void RegisterAndNotify(DataModel::CSingletonHelper<MusNotification>::CCallback *);
		};

		class CMusPauseUpdate
		{
			long InitializeDescription();
			long InitializeResourceMap(bool);
		protected:
			virtual long InitializeState(MusNotification);
			virtual void RaiseValueChangedEvents();
		public:
			CMusPauseUpdate();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long GetPossibleValues(IInspectable * *);
			virtual long GetValue(HSTRING__ *,IInspectable * *);
			virtual long GetValue(IInspectable * *);
			virtual long SetValue(HSTRING__ *);
			virtual long get_Description(HSTRING__ * *);
			virtual long get_IsEnabled(unsigned char *);
			virtual void DoGenericAsyncWork();
		};

		class CMusPayloadErrors
		{
			long InitializeHolisticErrorDescription();
			long InitializeSettingsCollection();
			static CMusPayloadErrors::UxPropertyEntry const * const sc_rgupeMap;
			static bool PayloadErrorsCollectionComparator(Microsoft::WRL::ComPtr<CMusSortableDescriptionListItem>,Microsoft::WRL::ComPtr<CMusSortableDescriptionListItem>);
		protected:
			virtual long GetSettingsCollection();
			virtual long InitializeState(MusNotification);
			virtual void InitializeSingletons();
			virtual void RaiseValueChangedEvents();
		public:
			CMusPayloadErrors();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long GetNamedValue(HSTRING__ *,IInspectable * *);
			virtual long get_Description(HSTRING__ * *);
			virtual long get_IsApplicable(unsigned char *);
		};

		class CMusRelatedLinksSettingsLink
		{
		protected:
			virtual long InitializeState(MusNotification);
			virtual void RaiseValueChangedEvents();
		public:
			CMusRelatedLinksSettingsLink();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long GetNamedValue(HSTRING__ *,IInspectable * *);
		};

		struct CMusRelatedTipsSettingsLink
		{
			CMusRelatedTipsSettingsLink();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long GetNamedValue(HSTRING__ *,IInspectable * *);
			virtual long get_IsApplicable(unsigned char *);
		};

		struct CMusRestartFairWarningNotifications
		{
			CMusRestartFairWarningNotifications();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual bool GetValue();
			virtual long GetNamedValue(HSTRING__ *,IInspectable * *);
			virtual long SetValue(bool);
			virtual long get_Description(HSTRING__ * *);
			virtual long get_IsEnabled(unsigned char *);
			virtual long get_IsUpdating(unsigned char *);
			virtual void HandleNotification(MusNotification);
		};

		class CMusRestartSchedulePicker
		{
		protected:
			bool ShouldPossibleValuesUpdate();
			long GetNumberOfDaysAllowedForScheduling(unsigned long *);
			long InitializeResourceMap(bool);
			long ReleaseResourceMap();
			static unsigned short const * const * const sc_rgpcszAllProperties;
		public:
			CMusRestartSchedulePicker();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long GetPossibleValues(IInspectable * *);
			virtual long GetValue(HSTRING__ *,IInspectable * *);
			virtual long GetValue(IInspectable * *);
			virtual long SetValue(HSTRING__ *);
			virtual long SetValue(HSTRING__ *,IInspectable *);
			virtual long get_Description(HSTRING__ * *);
			virtual long get_IsApplicable(unsigned char *);
			virtual long get_IsEnabled(unsigned char *);
			virtual long get_IsUpdating(unsigned char *);
			virtual void DoGenericAsyncWork();
			virtual void HandleNotification(MusNotification);
		};

		class CMusRestartStatusArea
		{
			bool ShouldUseRebootPolicies();
		protected:
			long GetDefaultRebootScheduleTime(_SYSTEMTIME *);
			static CMusRestartStatusArea::UxPropertyEntry const * const sc_rgupeMap;
			static bool IsRebootScheduleValid(_SYSTEMTIME const &);
			virtual long InitializeIsApplicable();
			virtual long InitializeRestartScheduleDescription();
			virtual long InitializeState(MusNotification);
			virtual void RaiseValueChangedEvents();
		public:
			CMusRestartStatusArea();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long GetValue(HSTRING__ *,IInspectable * *);
			virtual long get_Description(HSTRING__ * *);
			virtual long get_IsApplicable(unsigned char *);
			virtual ~CMusRestartStatusArea();
		};

		class CMusSeekerUpdate
		{
			long InitiateSeekerUpdateTitle();
			static CMusSeekerUpdate::UxPropertyEntry const * const sc_rgupeMap;
		protected:
			virtual long InitializeState(MusNotification);
			virtual long Invoke(HWND__ *);
			virtual void RaiseValueChangedEvents();
		public:
			CMusSeekerUpdate();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long GetProperty(HSTRING__ *,IInspectable * *);
			virtual long get_Description(HSTRING__ * *);
			virtual long get_IsApplicable(unsigned char *);
		};

		class CMusServiceUnavailableInfoText
		{
		protected:
			virtual long InitializeState(MusNotification);
			virtual void RaiseValueChangedEvents();
		public:
			CMusServiceUnavailableInfoText();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long get_Description(HSTRING__ * *);
			virtual long get_IsApplicable(unsigned char *);
		};

		class CMusSettings<CMusBoolSetting>
		{
		protected:
			virtual Concurrency::task<void> InitializeAsync();
			virtual long InitializeState(MusNotification);
			virtual void InitializeSingletons();
			virtual void RaiseValueChangedEvents();
		public:
			CMusSettings<CMusBoolSetting>(UXUpdateReason);
			virtual long get_IsApplicable(unsigned char *);
			virtual void HandleNotification(MusNotification);
			virtual ~CMusSettings<CMusBoolSetting>();
		};

		class CMusSettings<CMusCollectionSetting>
		{
		protected:
			virtual Concurrency::task<void> InitializeAsync();
			virtual long InitializeState(MusNotification);
			virtual void InitializeSingletons();
			virtual void RaiseValueChangedEvents();
		public:
			CMusSettings<CMusCollectionSetting>(UXUpdateReason);
			virtual long get_IsApplicable(unsigned char *);
			virtual void HandleNotification(MusNotification);
			virtual ~CMusSettings<CMusCollectionSetting>();
		};

		class CMusSettings<CMusDisplayStringSetting>
		{
		protected:
			virtual Concurrency::task<void> InitializeAsync();
			virtual long InitializeState(MusNotification);
			virtual void InitializeSingletons();
			virtual void RaiseValueChangedEvents();
		public:
			CMusSettings<CMusDisplayStringSetting>(UXUpdateReason);
			virtual long get_IsApplicable(unsigned char *);
			virtual void HandleNotification(MusNotification);
			virtual ~CMusSettings<CMusDisplayStringSetting>();
		};

		class CMusSettings<DataModel::CActionSetting>
		{
		protected:
			virtual Concurrency::task<void> InitializeAsync();
			virtual long InitializeState(MusNotification);
			virtual void InitializeSingletons();
			virtual void RaiseValueChangedEvents();
		public:
			CMusSettings<DataModel::CActionSetting>(UXUpdateReason);
			virtual long get_IsApplicable(unsigned char *);
			virtual void HandleNotification(MusNotification);
			virtual ~CMusSettings<DataModel::CActionSetting>();
		};

		class CMusSettings<DataModel::CDwordRangeSetting>
		{
		protected:
			virtual Concurrency::task<void> InitializeAsync();
			virtual long InitializeState(MusNotification);
			virtual void InitializeSingletons();
			virtual void RaiseValueChangedEvents();
		public:
			virtual long get_IsApplicable(unsigned char *);
			virtual void HandleNotification(MusNotification);
			virtual ~CMusSettings<DataModel::CDwordRangeSetting>();
		};

		class CMusSettings<DataModel::CListSetting>
		{
		protected:
			virtual Concurrency::task<void> InitializeAsync();
			virtual long InitializeState(MusNotification);
			virtual void InitializeSingletons();
			virtual void RaiseValueChangedEvents();
		public:
			virtual long get_IsApplicable(unsigned char *);
			virtual void HandleNotification(MusNotification);
			virtual ~CMusSettings<DataModel::CListSetting>();
		};

		struct CMusSortablePayloadDescriptionListItem
		{
			CMusSortablePayloadDescriptionListItem();
			long set_ContextDescription(unsigned short const *);
			virtual long GetNamedValue(HSTRING__ *,IInspectable * *);
			virtual ~CMusSortablePayloadDescriptionListItem();
		};

		class CMusUpdateActionButton
		{
			static CMusUpdateActionButton::UxPropertyEntry const * const sc_rgupeMap;
		protected:
			virtual long InitializeState(MusNotification);
			virtual long Invoke(HWND__ *);
			virtual void RaiseValueChangedEvents();
		public:
			CMusUpdateActionButton();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long GetActionDescription(IInspectable * *);
			virtual long GetProperty(HSTRING__ *,IInspectable * *);
			virtual long get_Description(HSTRING__ * *);
			virtual long get_IsApplicable(unsigned char *);
			virtual long get_IsEnabled(unsigned char *);
		};

		class CMusUpdateActiveHoursActionLink
		{
		protected:
			virtual long InitializeState(MusNotification);
			virtual long Invoke(HWND__ *);
			virtual void RaiseValueChangedEvents();
		public:
			CMusUpdateActiveHoursActionLink();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long GetProperty(HSTRING__ *,IInspectable * *);
			virtual long SetProperty(HSTRING__ *,IInspectable *);
			virtual long get_Description(HSTRING__ * *);
			virtual long get_IsApplicable(unsigned char *);
			virtual void DoGenericAsyncWork();
		};

		class CMusUpdateActiveHoursLink
		{
		protected:
			virtual long InitializeState(MusNotification);
			virtual void RaiseValueChangedEvents();
		public:
			CMusUpdateActiveHoursLink();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long GetValue(HSTRING__ *,IInspectable * *);
			virtual long get_Description(HSTRING__ * *);
		};

		class CMusUpdateActiveHoursRecommendationLink
		{
		protected:
			virtual long InitializeState(MusNotification);
			virtual long Invoke(HWND__ *);
			virtual void RaiseValueChangedEvents();
		public:
			CMusUpdateActiveHoursRecommendationLink();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long GetProperty(HSTRING__ *,IInspectable * *);
			virtual long get_Description(HSTRING__ * *);
			virtual long get_IsApplicable(unsigned char *);
		};

		class CMusUpdateActiveHoursToggle
		{
		protected:
			virtual long InitializeState(MusNotification);
			virtual void RaiseValueChangedEvents();
		public:
			CMusUpdateActiveHoursToggle();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual bool GetValue();
			virtual long GetNamedValue(HSTRING__ *,IInspectable * *);
			virtual long SetValue(bool);
			virtual long get_Description(HSTRING__ * *);
			virtual long get_IsEnabled(unsigned char *);
		};

		class CMusUpdateAnticipationSettingsLink
		{
		protected:
			virtual long InitializeState(MusNotification);
			virtual void RaiseValueChangedEvents();
		public:
			CMusUpdateAnticipationSettingsLink();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long GetNamedValue(HSTRING__ *,IInspectable * *);
		};

		class CMusUpdateCheckOnlineActionLink
		{
			static CMusUpdateCheckOnlineActionLink::UxPropertyEntry const * const sc_rgupeMap;
		protected:
			virtual long InitializeState(MusNotification);
			virtual long Invoke(HWND__ *);
			virtual void RaiseValueChangedEvents();
		public:
			CMusUpdateCheckOnlineActionLink();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long get_Description(HSTRING__ * *);
			virtual long get_IsApplicable(unsigned char *);
			virtual long get_IsEnabled(unsigned char *);
		};

		class CMusUpdateDetails
		{
		protected:
			static bool DetailsCollectionComparator(Microsoft::WRL::ComPtr<CMusUpdateDetailsInfoSetting>,Microsoft::WRL::ComPtr<CMusUpdateDetailsInfoSetting>);
			virtual long GetSettingsCollection();
		public:
			CMusUpdateDetails();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long get_IsUpdating(unsigned char *);
			virtual void HandleNotification(MusNotification);
		};

		struct CMusUpdateDetailsInfoSetting
		{
			long SetDetailsInfo(UxUsoUpdateShim *);
			virtual long GetValue(HSTRING__ *,IInspectable * *);
			virtual long get_Description(HSTRING__ * *);
		};

		class CMusUpdateErrorArea
		{
			long GetDiskSpaceString(HSTRING__ * *,MusUxState const &,CMusUpdateErrorArea::DescriptionArgumentType const &);
			long InitializeDescription();
			static CMusUpdateErrorArea::DiskSpaceResourceEntry const * const sc_rgdsreDiskSpaceResourceMap;
			static CMusUpdateErrorArea::RangedDiskSpaceResourceEntry const * const sc_rgrdsreRangedDiskSpaceResourceMap;
			static CMusUpdateErrorArea::UxPropertyEntry const * const sc_rgupeMap;
			static long GetDoubleArgDiskSpaceString(HSTRING__ * *,MusUxState,FloatDiskSize,FloatDiskSize);
			static long GetSingleArgDiskSpaceString(HSTRING__ * *,MusUxState,FloatDiskSize);
		protected:
			virtual long InitializeState(MusNotification);
			virtual void InitializeSingletons();
			virtual void RaiseValueChangedEvents();
		public:
			CMusUpdateErrorArea();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long get_Description(HSTRING__ * *);
			virtual long get_IsApplicable(unsigned char *);
		};

		class CMusUpdateEulaActionButton
		{
		protected:
			static CMusUpdateEulaActionButton::UxPropertyEntry const * const sc_rgupeMap;
			static bool EulaCollectionComparator(Microsoft::WRL::ComPtr<CMusSortableDescriptionListItem>,Microsoft::WRL::ComPtr<CMusSortableDescriptionListItem>);
			virtual long Invoke(HWND__ *);
		public:
			CMusUpdateEulaActionButton();
			long GetSettingsCollection();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long GetActionDescription(IInspectable * *);
			virtual long GetProperty(HSTRING__ *,IInspectable * *);
			virtual long get_Description(HSTRING__ * *);
			virtual long get_IsApplicable(unsigned char *);
			virtual long get_IsUpdating(unsigned char *);
			virtual void HandleNotification(MusNotification);
		};

		class CMusUpdateFeatureUpdateDeferDays
		{
		protected:
			long InitializeResourceMap(bool);
			long ReleaseResourceMap();
		public:
			CMusUpdateFeatureUpdateDeferDays();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long GetPossibleValues(IInspectable * *);
			virtual long GetValue(HSTRING__ *,IInspectable * *);
			virtual long GetValue(IInspectable * *);
			virtual long SetValue(HSTRING__ *);
			virtual long get_Description(HSTRING__ * *);
			virtual long get_IsApplicable(unsigned char *);
			virtual long get_IsEnabled(unsigned char *);
			virtual long get_IsUpdating(unsigned char *);
			virtual void DoGenericAsyncWork();
			virtual void HandleNotification(MusNotification);
			virtual ~CMusUpdateFeatureUpdateDeferDays();
		};

		class CMusUpdateHistory
		{
		protected:
			static bool HistoryCollectionComparator(Microsoft::WRL::ComPtr<CMusUpdateHistoryInfoSetting>,Microsoft::WRL::ComPtr<CMusUpdateHistoryInfoSetting>);
		public:
			CMusUpdateHistory();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long get_Description(HSTRING__ * *);
			virtual long get_IsApplicable(unsigned char *);
			virtual long get_IsUpdating(unsigned char *);
			virtual void HandleNotification(MusNotification);
			virtual ~CMusUpdateHistory();
		};

		class CMusUpdateHistoryCategoryDefinition
		{
		protected:
			virtual long GetSettingsCollection();
		public:
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long GetNamedValue(HSTRING__ *,IInspectable * *);
			virtual long SetValue(bool);
		};

		class CMusUpdateHistoryCategoryDriver
		{
		protected:
			virtual long GetSettingsCollection();
		public:
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long GetNamedValue(HSTRING__ *,IInspectable * *);
			virtual long SetValue(bool);
		};

		class CMusUpdateHistoryCategoryFeature
		{
		protected:
			virtual long GetSettingsCollection();
		public:
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long GetNamedValue(HSTRING__ *,IInspectable * *);
			virtual long SetValue(bool);
		};

		class CMusUpdateHistoryCategoryOther
		{
		protected:
			virtual long GetSettingsCollection();
		public:
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long GetNamedValue(HSTRING__ *,IInspectable * *);
			virtual long SetValue(bool);
		};

		class CMusUpdateHistoryCategoryQuality
		{
		protected:
			virtual long GetSettingsCollection();
		public:
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long GetNamedValue(HSTRING__ *,IInspectable * *);
			virtual long SetValue(bool);
		};

		struct CMusUpdateHistoryInfoSetting
		{
			long SetHistoryInfo(IUsoUpdateHistoryEntry *);
			virtual long GetValue(HSTRING__ *,IInspectable * *);
			virtual long get_Description(HSTRING__ * *);
		};

		struct CMusUpdateHistoryLink
		{
			CMusUpdateHistoryLink();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long GetValue(HSTRING__ *,IInspectable * *);
			virtual long get_Description(HSTRING__ * *);
			virtual long get_IsApplicable(unsigned char *);
			virtual long get_IsUpdating(unsigned char *);
			virtual void HandleNotification(MusNotification);
		};

		class CMusUpdateNavigationButton
		{
			static CMusUpdateNavigationButton::UxPropertyEntry const * const sc_rgupeMap;
		protected:
			virtual long InitializeState(MusNotification);
			virtual void RaiseValueChangedEvents();
		public:
			CMusUpdateNavigationButton();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long GetNamedValue(HSTRING__ *,IInspectable * *);
			virtual long get_Description(HSTRING__ * *);
			virtual long get_IsApplicable(unsigned char *);
		};

		class CMusUpdatePauseUpdate2
		{
		protected:
			virtual long InitializeState(MusNotification);
			virtual long Invoke(HWND__ *);
			virtual void RaiseValueChangedEvents();
		public:
			CMusUpdatePauseUpdate2();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long GetProperty(HSTRING__ *,IInspectable * *);
			virtual long get_IsEnabled(unsigned char *);
		};

		struct CMusUpdatePolicyInfoSetting
		{
			long SetPolicyInfo(Microsoft::WRL::Wrappers::HString *,Microsoft::WRL::Wrappers::HString *,Microsoft::WRL::Wrappers::HString *);
			virtual long GetValue(HSTRING__ *,IInspectable * *);
		};

		class CMusUpdatePolicyList
		{
		protected:
			static CMusUpdatePolicyList::PolicyNameResourceEntry const * const sc_policyNameResourceMap;
			static long GetPolicyNameResourceEntry(CMusUpdatePolicyList::PolicyNameResourceEntry const * *,NormalizedPolicy);
			virtual long GetSettingsCollection();
		public:
			CMusUpdatePolicyList();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long get_Description(HSTRING__ * *);
			virtual long get_IsApplicable(unsigned char *);
			virtual long get_IsUpdating(unsigned char *);
			virtual void HandleNotification(MusNotification);
		};

		struct CMusUpdatePolicyText
		{
			CMusUpdatePolicyText();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long GetNamedValue(HSTRING__ *,IInspectable * *);
			virtual long get_Description(HSTRING__ * *);
			virtual long get_IsApplicable(unsigned char *);
			virtual long get_IsUpdating(unsigned char *);
			virtual void HandleNotification(MusNotification);
		};

		class CMusUpdateQualityUpdateDeferDays
		{
		protected:
			long InitializeResourceMap(bool);
		public:
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long GetPossibleValues(IInspectable * *);
			virtual long GetValue(HSTRING__ *,IInspectable * *);
			virtual long GetValue(IInspectable * *);
			virtual long SetValue(HSTRING__ *);
			virtual long get_Description(HSTRING__ * *);
			virtual long get_IsApplicable(unsigned char *);
			virtual long get_IsEnabled(unsigned char *);
		};

		class CMusUpdateStatusArea
		{
			long GetSubStatusText(IInspectable * *);
			long InitializeDescription();
			static CMusUpdateStatusArea::UxPropertyEntry const * const sc_rgupeMap;
		protected:
			virtual long InitializeState(MusNotification);
			virtual void RaiseValueChangedEvents();
		public:
			CMusUpdateStatusArea();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long GetValue(HSTRING__ *,IInspectable * *);
			virtual long SetValue(unsigned long);
			virtual long get_Description(HSTRING__ * *);
			virtual long get_IsApplicable(unsigned char *);
			virtual unsigned long GetValue();
		};

		class CMusWaaSOutOfDateStatus
		{
			static CMusWaaSOutOfDateStatus::UxPropertyEntry const * const sc_rgupeMap;
		protected:
			virtual long InitializeState(MusNotification);
			virtual void RaiseValueChangedEvents();
		public:
			CMusWaaSOutOfDateStatus();
			static long CreateInstance(DataModel::SettingDBItem const *,DataModel::ISettingItem * *);
			virtual long get_Description(HSTRING__ * *);
			virtual long get_IsApplicable(unsigned char *);
		};

		class EnumMap
		{
		protected:
			static char const * const * const msc_pcszMusActionType;
			static char const * const * const msc_pcszMusUxState;
		};

		struct MusErrorUtil
		{
			static bool GetLatestSetupRollbackError(RollbackErrorInfo *);
			static long ConvertErrorAndLocationCodeToString(long,unsigned long,unsigned short *,unsigned __int64);
			static long ConvertErrorCodeToString(long,unsigned short *,unsigned __int64);
		};

		struct MusResourceUtil
		{
			static bool ShouldUseWlanStringVariant();
			static long LoadResourceStringById(unsigned int,HSTRING__ * *);
		};

		struct MusTimeUtil
		{
			static long GetDaysBetweenFileTimesNormalized(_FILETIME,_FILETIME,unsigned long *);
			static long HoursAndMinToUTCFileTime(unsigned short,unsigned short,_FILETIME *);
		};

		struct UpdateInfoBase
		{
			~UpdateInfoBase();
		};

		TelemetryManager g_TelemetryManager;
	};

};

namespace TLV
{
	void Base64Encode<129>(unsigned char const *,unsigned __int64,char (&)[129]);
};

class TelemetryManager
{
	long SetupLogFiles(unsigned short const *,unsigned short *,unsigned __int64 &);
	static unsigned long const sc_defaultMaxTraceFileSizeInKB;
public:
	TelemetryManager();
	long CleanupOldFiles(unsigned short const *);
	long EnableTracing(unsigned __int64);
	long FlushTraceW();
	long StartTracing(_GUID,unsigned short const *,unsigned short const *,unsigned __int64,bool,unsigned long);
	long StopTracing();
	~TelemetryManager();
};

struct TimeHelper
{
	static _FILETIME ULongLongToFileTime(unsigned __int64);
	static bool IsTargetTimeInFuture(_SYSTEMTIME);
	static long AddDaysToFileTime(unsigned long,_FILETIME,_FILETIME *);
	static long AddDaysToSystemTime(unsigned long,_SYSTEMTIME,_SYSTEMTIME *);
	static long AddHoursToFileTime(unsigned long,_FILETIME,_FILETIME *);
	static long AddHoursToSystemTime(unsigned long,_SYSTEMTIME,_SYSTEMTIME *);
	static long AddMinutesToSystemTime(unsigned long,_SYSTEMTIME,_SYSTEMTIME *);
	static long CompareSystemTime(_SYSTEMTIME const &,_SYSTEMTIME const &);
	static long FileTimeToStringTime(unsigned short *,unsigned __int64,_FILETIME const &,unsigned long);
	static long GetDaysBetweenFileTimes(_FILETIME,_FILETIME,unsigned long *);
	static long GetDaysBetweenSystemTimes(_SYSTEMTIME,_SYSTEMTIME,unsigned long *);
	static long GetMinutesBetweenFileTimes(_FILETIME,_FILETIME,unsigned long *);
	static long GetMinutesBetweenSystemTimes(_SYSTEMTIME,_SYSTEMTIME,unsigned long *);
	static long IsTargetTimeWithinBounds(_FILETIME,_FILETIME,_FILETIME,bool *);
	static long IsTargetTimeWithinBounds(_FILETIME,_FILETIME,_SYSTEMTIME,bool *);
	static long IsTargetTimeWithinDayBounds(_FILETIME,_FILETIME,unsigned long,bool *);
	static long SetFileTimeHourAndMin(unsigned short,unsigned short,_FILETIME,_FILETIME *);
	static long SetSystemTimeHourAndMin(unsigned short,unsigned short,_SYSTEMTIME,_SYSTEMTIME *);
	static long StringTimeToFileTime(unsigned short const *,_FILETIME *,bool);
	static long StringTimeToSystemTime(unsigned short const *,_SYSTEMTIME *,bool);
	static long SubtractMinutesFromFileTime(unsigned long,_FILETIME,_FILETIME *);
	static long SubtractMinutesFromSystemTime(unsigned long,_SYSTEMTIME,_SYSTEMTIME *);
	static long SystemTimeToStringTime(unsigned short *,unsigned __int64,_SYSTEMTIME const &,unsigned long);
	static unsigned __int64 FileTimeToULongLong(_FILETIME);
};

class TraceLoggingCorrelationVector
{
	bool ToStringImpl(unsigned __int64,char *);
	static TraceLoggingCorrelationVector::CvVersion ValidateImpl(char const *,bool);
public:
	TraceLoggingCorrelationVector();
	TraceLoggingCorrelationVector(TraceLoggingCorrelationVectorV1_t);
	TraceLoggingCorrelationVector(TraceLoggingCorrelationVectorV2_t);
	static TraceLoggingCorrelationVector * Set(char const *,bool);
};

class TrustHelper
{
	static long VerifyCertificateChain(_CERT_CHAIN_CONTEXT const *,unsigned long);
public:
	static long VerifyFile(unsigned short const *,bool);
};

class UXElementStore
{
	struct UXStringValueElement
	{
		~UXStringValueElement();
	};

	long CheckIfScenarioApplicable(XmlReader *,unsigned long);
	long ExtractCurrentScenario(UXScenario,XmlReader *);
	long ExtractValues(XmlReader *,unsigned long,UXElementType);
	long GetFilePath(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	long GetImageFilePath(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	long GetUserLocale(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	long GetXmlFilePath(IUxOneSettings *,UXSurface,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	static UXElementStore::ElementTypeTag const * const elementTypeToXmlTagMap;
	static UXElementStore::ScenarioTag const * const scenarioToXmlTagMap;
	static unsigned short const * const campaignElementName;
	static unsigned short const * const friendlyNameAttributeName;
	static unsigned short const * const idAttributeName;
	static unsigned short const * const settingsErrorStyle;
	static unsigned short const * const stringValueElementName;
	static unsigned short const * const styleElementName;
public:
	UXElementStore & operator=(UXElementStore const &);
	UXElementStore();
	long GetStringValue(UXElementType,unsigned long,unsigned short const * *);
	long Initialize(UXScenario,UXSurface,IUxOneSettings *,_TlgProvider_t const * const);
	~UXElementStore();
};

struct UnpSurfaceHelper
{
	static UXScenarioToOneSettingsValueMapItem const * const c_UXScenarioToOneSettingsValueMap;
	static long GetCampaignGuidCSV(IUxOneSettings *,UXSurface,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
};

struct UpdatePolicyHelper
{
	long GetUpdatePolicy(tagUpdatePolicy,tagVARIANT &,bool &);
	static long GetUpdatePolicyHelper(std::unique_ptr<UpdatePolicyHelper,std::default_delete<UpdatePolicyHelper> > &);
};

struct UpdatePolicyReader
{
	static long ReadPolicy(tagUpdatePolicy,tagUpdatePolicyValue_V1 * *);
	static long ReleaseUpdatePolicyValue(tagUpdatePolicyValue_V1 * *);
};

class UpdateUtil
{
protected:
	static ErrorState GetErrorStateFromUpdateStatusInfo(tagUpdateStatusInfo const &);
	static ErrorState const * const gc_rgErrorPriority;
public:
	static bool IsDirectToEngagedRebootEnabled(UxUsoShim *,IUxOneSettings *,_TlgProvider_t const * const);
	static long CanScheduleUpdate(PayloadInfo,UxUsoShim *,IUxOneSettings *,_TlgProvider_t const * const,bool *);
	static long GetEnhancedEngagedSettings(IUxOneSettings *,_TlgProvider_t const * const,EnhancedEngagedSettings *);
	static long GetRestartRequiredUpdateIdentifiers(UxUsoShim *,std::vector<tagUsoUpdateIdentifier,std::allocator<tagUsoUpdateIdentifier> > &);
	static long GetRestartRequiredUpdateIdentifiers(std::vector<std::shared_ptr<UxUsoUpdateShim>,std::allocator<std::shared_ptr<UxUsoUpdateShim> > > &,std::vector<tagUsoUpdateIdentifier,std::allocator<tagUsoUpdateIdentifier> > &);
	static long GetScheduledRebootFailed(UxUsoShim *,bool,short *,_SYSTEMTIME *);
	static long GetScheduledRebootTime(UxUsoShim *,_SYSTEMTIME *,bool *);
	static long GetUpdatePayloadInfo(UxUsoShim *,_TlgProvider_t const * const,PayloadInfo *,unsigned long);
	static long GetUpdatePayloadInfo(std::vector<std::shared_ptr<UxUsoUpdateShim>,std::allocator<std::shared_ptr<UxUsoUpdateShim> > > &,_TlgProvider_t const * const,bool,PayloadInfo *,unsigned long);
	static long SetConfirmRebootByUser(UxUsoShim *,short);
	static long SetRebootScheduledBySmartScheduler(UxUsoShim *,short);
	static long SetScheduledRebootFailed(UxUsoShim *,bool,short,_SYSTEMTIME);
	static unsigned long GetRebootScheduleMaxValidDays(UxUsoShim *,IUxOneSettings *,_TlgProvider_t const * const);
};

class UsoConfiguration
{
	static unsigned long GetConfiguration(unsigned short const *,unsigned long,unsigned long,unsigned long);
	static unsigned short const * const c_szDataMigrationValueName;
	static unsigned short const * const c_szEnableEngagedReboot;
	static unsigned short const * const c_szIgnoreActiveUserBeforeRestart;
	static unsigned short const * const c_szMuServiceDefault;
	static unsigned short const * const c_szPPIUpdateValueName;
	static unsigned short const * const c_szRegValueEnableUUPScan;
	static unsigned short const * const c_szRequireACPowerCheckBeforeDownload;
	static unsigned short const * const c_szRequireACPowerCheckBeforeRestart;
	static unsigned short const * const c_szRequireACPowerCheckBeforeStaging;
	static unsigned short const * const c_szScanTypeValueName;
	static unsigned short const * const c_szServicingStackValueName;
	static unsigned short const * const c_szUseOneCoreOOBENotificationValueName;
public:
	static bool IsConfigurationSet(UsoConfigurations);
	static bool IsUUPRegKeySet();
};

namespace UsoFileStream
{
	class FileStream
	{
		FileStream(void *,int);
		~FileStream();
	public:
		static long CreateStreamOnFile(unsigned short const *,IStream * *,int);
		virtual long Clone(IStream * *);
		virtual long Commit(unsigned long);
		virtual long CopyTo(IStream *,_ULARGE_INTEGER,_ULARGE_INTEGER *,_ULARGE_INTEGER *);
		virtual long EndHash(unsigned short * *);
		virtual long FreeHash(unsigned short *);
		virtual long InitializeHash(unsigned short const *);
		virtual long LockRegion(_ULARGE_INTEGER,_ULARGE_INTEGER,unsigned long);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long Read(void *,unsigned long,unsigned long *);
		virtual long Revert();
		virtual long Seek(_LARGE_INTEGER,unsigned long,_ULARGE_INTEGER *);
		virtual long SetSize(_ULARGE_INTEGER);
		virtual long StartHash();
		virtual long Stat(tagSTATSTG *,unsigned long);
		virtual long UnlockRegion(_ULARGE_INTEGER,_ULARGE_INTEGER,unsigned long);
		virtual long Write(void const *,unsigned long,unsigned long *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

};

struct UsoUpdateEnhancedTraceLogging
{
	static _TlgProvider_t const * Provider();
};

class UxSettingUtil
{
protected:
	static unsigned short const * const msc_uxSchedulePickerOptionName;
public:
	static int IsRebootScheduledByUser(UxUsoShim *);
	static long GetIsExpeditedUpdateFlow(bool *);
	static long LaunchSettingsPage(unsigned short const *,bool);
	static unsigned short const * const sc_settingsUpdateActiveHoursPageUri;
	static unsigned short const * const sc_settingsUpdateAdvancedOptionsPageUri;
	static unsigned short const * const sc_settingsUpdateIsExpedited;
};

struct UxUpdateUtil
{
	static bool IsFeatureUpdate(UxUsoUpdateShim *,_TlgProvider_t const * const);
	static bool IsFeatureUpdatePending(UxUsoShim *,bool,_TlgProvider_t const * const);
	static long GetRebootScheduledByUser(UxUsoShim *,int *);
	static long SetRebootScheduledByUser(UxUsoShim *,int);
};

class UxUsoMoStackShim
{
	long GetMaxUpdateAttentionRequiredReason(tagUpdateAttentionRequiredReason *);
	long GetUpdateLastErrorInfo(tagUpdateErrorInfo *,_FILETIME *);
public:
	long Initialize(wil::com_ptr_t<IMoUsoOrchestrator,wil::err_exception_policy> const &);
	virtual bool IsFlightingEnabled();
	virtual bool IsMoStack();
	virtual long GetAlertStatusTimestamp(_SYSTEMTIME *,int *);
	virtual long GetApplicableSeekerUpdates(std::vector<std::shared_ptr<UxUsoUpdateShim>,std::allocator<std::shared_ptr<UxUsoUpdateShim> > > &);
	virtual long GetApplicableUpdates(std::vector<std::shared_ptr<UxUsoUpdateShim>,std::allocator<std::shared_ptr<UxUsoUpdateShim> > > &);
	virtual long GetApplicableUpdatesCount(unsigned long *,unsigned long *,unsigned long *);
	virtual long GetAttentionRequiredReason(tagAttentionRequiredReason *);
	virtual long GetCachedPolicy(unsigned long,tagVARIANT *,unsigned long *,unsigned long *);
	virtual long GetCanPauseUpdates(int *);
	virtual long GetComplianceDeadlineState(int *,unsigned long *,_FILETIME *);
	virtual long GetCurrentState(tagUpdateState *);
	virtual long GetEnterpriseCachedPolicy(unsigned long,tagVARIANT *,unsigned long *,unsigned long *);
	virtual long GetIsInteractiveSession(short *);
	virtual long GetIsWaaSOutOfDate(int *);
	virtual long GetLastErrorInfo(tagUpdateErrorInfo *);
	virtual long GetLastUpdateCheckTime(_FILETIME *);
	virtual long GetLastUpdateInstallTime(_FILETIME *);
	virtual long GetOptInToMU(int *);
	virtual long GetRebootDeferredReason(unsigned long *,int *);
	virtual long GetRebootRequired(int *);
	virtual long GetRebootResult(long *);
	virtual long GetSeekerSession(bool *,bool *);
	virtual long GetUXRebootState(tagUXRebootState *);
	virtual long GetUpToDateStatus(tagUpToDateStatus *);
	virtual long GetUpToDateStatusTimestamp(_SYSTEMTIME *,int *);
	virtual long GetUpdateHistory(unsigned long,unsigned long,IUsoUpdateHistoryEntryCollection * *);
	virtual long GetUpdatePayloadSize(tagUsoUpdatePayloadType,unsigned __int64 *,unsigned __int64 *);
	virtual long GetUpdateProgress(tagUpdateProgress *);
	virtual long GetUpdateSessionType(_GUID *);
	virtual long GetWarningStatusTimestamp(_SYSTEMTIME *,int *);
	virtual long IsRestartAllowed(unsigned long,int,unsigned long,int *);
	virtual long PauseUpdates(_FILETIME);
	virtual long RebootToCompleteInstall(unsigned long,int,unsigned long *,short,short,unsigned long);
	virtual long ResumeUpdates();
	virtual long SetAllowMeteredNetwork(bool);
	virtual long SetAllowNotificationUx(bool);
	virtual long SetAlwaysAllowMeteredNetwork(bool);
	virtual long SetOptInToMU(int);
	virtual long SetProxyBlanket(unsigned long,unsigned long,unsigned short *,unsigned long,unsigned long,void *,unsigned long);
	virtual long SetRebootTaskLaunch(int);
	virtual long SetRebootUXLaunch(int);
	virtual long SetSeekerSession(bool);
	virtual long SetUXRebootState(tagUXRebootState);
	virtual long SetUpToDateStatus(tagUpToDateStatus);
	virtual long StartDownload(int);
	virtual long StartInstall(int);
	virtual long StartPostInstall();
	virtual long StartScan(int,int,int);
	virtual long UpdateSession();
};

struct UxUsoOldStackShim
{
	long Initialize(wil::com_ptr_t<IUpdateSessionOrchestrator,wil::err_exception_policy> const &);
	virtual bool IsFlightingEnabled();
	virtual bool IsMoStack();
	virtual long GetAlertStatusTimestamp(_SYSTEMTIME *,int *);
	virtual long GetApplicableSeekerUpdates(std::vector<std::shared_ptr<UxUsoUpdateShim>,std::allocator<std::shared_ptr<UxUsoUpdateShim> > > &);
	virtual long GetApplicableUpdates(std::vector<std::shared_ptr<UxUsoUpdateShim>,std::allocator<std::shared_ptr<UxUsoUpdateShim> > > &);
	virtual long GetApplicableUpdatesCount(unsigned long *,unsigned long *,unsigned long *);
	virtual long GetAttentionRequiredReason(tagAttentionRequiredReason *);
	virtual long GetCachedPolicy(unsigned long,tagVARIANT *,unsigned long *,unsigned long *);
	virtual long GetCanPauseUpdates(int *);
	virtual long GetComplianceDeadlineState(int *,unsigned long *,_FILETIME *);
	virtual long GetCurrentState(tagUpdateState *);
	virtual long GetEnterpriseCachedPolicy(unsigned long,tagVARIANT *,unsigned long *,unsigned long *);
	virtual long GetIsInteractiveSession(short *);
	virtual long GetIsWaaSOutOfDate(int *);
	virtual long GetLastErrorInfo(tagUpdateErrorInfo *);
	virtual long GetLastUpdateCheckTime(_FILETIME *);
	virtual long GetLastUpdateInstallTime(_FILETIME *);
	virtual long GetOptInToMU(int *);
	virtual long GetRebootDeferredReason(unsigned long *,int *);
	virtual long GetRebootRequired(int *);
	virtual long GetRebootResult(long *);
	virtual long GetSeekerSession(bool *,bool *);
	virtual long GetUXRebootState(tagUXRebootState *);
	virtual long GetUpToDateStatus(tagUpToDateStatus *);
	virtual long GetUpToDateStatusTimestamp(_SYSTEMTIME *,int *);
	virtual long GetUpdateHistory(unsigned long,unsigned long,IUsoUpdateHistoryEntryCollection * *);
	virtual long GetUpdatePayloadSize(tagUsoUpdatePayloadType,unsigned __int64 *,unsigned __int64 *);
	virtual long GetUpdateProgress(tagUpdateProgress *);
	virtual long GetUpdateSessionType(_GUID *);
	virtual long GetWarningStatusTimestamp(_SYSTEMTIME *,int *);
	virtual long IsRestartAllowed(unsigned long,int,unsigned long,int *);
	virtual long PauseUpdates(_FILETIME);
	virtual long RebootToCompleteInstall(unsigned long,int,unsigned long *,short,short,unsigned long);
	virtual long ResumeUpdates();
	virtual long SetAllowMeteredNetwork(bool);
	virtual long SetAllowNotificationUx(bool);
	virtual long SetAlwaysAllowMeteredNetwork(bool);
	virtual long SetOptInToMU(int);
	virtual long SetProxyBlanket(unsigned long,unsigned long,unsigned short *,unsigned long,unsigned long,void *,unsigned long);
	virtual long SetRebootTaskLaunch(int);
	virtual long SetRebootUXLaunch(int);
	virtual long SetSeekerSession(bool);
	virtual long SetUXRebootState(tagUXRebootState);
	virtual long SetUpToDateStatus(tagUpToDateStatus);
	virtual long StartDownload(int);
	virtual long StartInstall(int);
	virtual long StartPostInstall();
	virtual long StartScan(int,int,int);
	virtual long UpdateSession();
};

struct UxUsoShim
{
	static long CreateInstance(unsigned short const *,std::shared_ptr<UxUsoShim> *);
	static std::map<tagActionUxClass,tagUpdateState,std::less<tagActionUxClass>,std::allocator<std::pair<tagActionUxClass const ,tagUpdateState> > > const sc_actionUxClassToUpdateStateMap;
	static std::map<tagSessionAttentionRequiredReason,tagAttentionRequiredReason,std::less<tagSessionAttentionRequiredReason>,std::allocator<std::pair<tagSessionAttentionRequiredReason const ,tagAttentionRequiredReason> > > const sc_sessionReasonToArReasonMap;
	static std::map<tagUpdateAttentionRequiredReason,tagAttentionRequiredReason,std::less<tagUpdateAttentionRequiredReason>,std::allocator<std::pair<tagUpdateAttentionRequiredReason const ,tagAttentionRequiredReason> > > const sc_updateReasonToArReasonMap;
	virtual long CreateLogonRebootTaskSchedule();
	virtual long CreateMigrationResultsTaskSchedule();
	virtual long CreateRebootTasks(unsigned short const *,_SYSTEMTIME);
	virtual long CreateUpdateLogonNotificationTaskSchedule();
	virtual long CreateUpdateNotificationTaskSchedule(_SYSTEMTIME);
	virtual long CreateUpdateResultsTaskSchedule();
	virtual long DeleteUxStateVariable(tagUxUpdateStateVariable);
	virtual long DidUXRebootTaskWakeUpDevice(int *);
	virtual long DisableRebootTasks();
	virtual long EnableRebootTasks();
	virtual long GetNextRebootTaskRunTime(int *,_SYSTEMTIME *);
	virtual long GetUxStateVariableBOOL(tagUxUpdateStateVariable,int *,int *);
	virtual long GetUxStateVariableDWORD(tagUxUpdateStateVariable,unsigned long *,int *);
	virtual long GetUxStateVariableSYSTEMTIME(tagUxUpdateStateVariable,_SYSTEMTIME *,int *);
	virtual long RemoveLogonRebootTaskSchedule();
	virtual long RemoveMigrationResultsTaskSchedule();
	virtual long RemoveUpdateResultsTaskSchedule();
	virtual long SetUxStateVariableBOOL(tagUxUpdateStateVariable,int);
	virtual long SetUxStateVariableDWORD(tagUxUpdateStateVariable,unsigned long);
	virtual long SetUxStateVariableSYSTEMTIME(tagUxUpdateStateVariable,_SYSTEMTIME);
	~UxUsoShim();
};

struct UxUsoUpdateShim
{
	long ApproveForOptionalInstall();
	long GetUpdateType(UxUpdateType *);
	long get_Description(unsigned short * *);
	long get_EulaAccepted(short *);
	long get_LastDeploymentChangeTime(double *);
	long get_MoreInfoUrls(unsigned short * * *,long *);
	long get_Title(unsigned short * *);
	long get_UpdateId(tagUsoUpdateIdentifier *);
	long get_UpdateStatusInfo(tagUpdateStatusInfo *);
	static long CreateInstance(IMoUsoUpdate *,std::shared_ptr<UxUsoUpdateShim> *);
	static long CreateInstance(IUsoUpdate *,std::shared_ptr<UxUsoUpdateShim> *);
};

namespace Windows
{
	namespace Foundation
	{
		namespace Collections
		{
			namespace Detail
			{
				void _Cleanup<IInspectable,unsigned int>(IInspectable * * const,unsigned int);
				void _Cleanup<SystemSettings::DataModel::ISettingItem,unsigned int>(SystemSettings::DataModel::ISettingItem * * const,unsigned int);
			};

			struct IIterator_impl<IInspectable *,1>
			{
				virtual long GetMany(unsigned int,IInspectable * *,unsigned int *);
			};

			struct IIterator_impl<SystemSettings::DataModel::ISettingItem *,1>
			{
				virtual long GetMany(unsigned int,SystemSettings::DataModel::ISettingItem * *,unsigned int *);
			};

			struct IVectorView_impl<IInspectable *,1>
			{
				virtual long GetMany(unsigned int,unsigned int,IInspectable * *,unsigned int *);
			};

			struct IVectorView_impl<SystemSettings::DataModel::ISettingItem *,1>
			{
				virtual long GetMany(unsigned int,unsigned int,SystemSettings::DataModel::ISettingItem * *,unsigned int *);
			};

			struct IVector_impl<IInspectable *,1>
			{
				virtual long GetMany(unsigned int,unsigned int,IInspectable * *,unsigned int *);
				virtual long ReplaceAll(unsigned int,IInspectable * *);
			};

			struct IVector_impl<SystemSettings::DataModel::ISettingItem *,1>
			{
				virtual long GetMany(unsigned int,unsigned int,SystemSettings::DataModel::ISettingItem * *,unsigned int *);
				virtual long ReplaceAll(unsigned int,SystemSettings::DataModel::ISettingItem * *);
			};

			namespace Internal
			{
				struct SimpleVectorIterator<IInspectable *,Vector<IInspectable *,DefaultEqualityPredicate<IInspectable *>,DefaultLifetimeTraits<IInspectable *>,VectorOptions<IInspectable *,1,1,0> >,DefaultLifetimeTraits<IInspectable *>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorIterator<IInspectable *,Vector<IInspectable *,DefaultEqualityPredicate<IInspectable *>,DefaultLifetimeTraits<IInspectable *>,VectorOptions<IInspectable *,1,1,0> >,DefaultLifetimeTraits<IInspectable *>,XWinRT::IntVersionTag,1>(Vector<IInspectable *,DefaultEqualityPredicate<IInspectable *>,DefaultLifetimeTraits<IInspectable *>,VectorOptions<IInspectable *,1,1,0> > *,SimpleVectorIterator<IInspectable *,Vector<IInspectable *,DefaultEqualityPredicate<IInspectable *>,DefaultLifetimeTraits<IInspectable *>,VectorOptions<IInspectable *,1,1,0> >,DefaultLifetimeTraits<IInspectable *>,XWinRT::IntVersionTag,1>::permission);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,IInspectable * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long MoveNext(unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Current(IInspectable * *);
					virtual long get_HasCurrent(unsigned char *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct SimpleVectorIterator<SystemSettings::DataModel::ISettingItem *,Vector<SystemSettings::DataModel::ISettingItem *,DefaultEqualityPredicate<SystemSettings::DataModel::ISettingItem *>,DefaultLifetimeTraits<SystemSettings::DataModel::ISettingItem *>,VectorOptions<SystemSettings::DataModel::ISettingItem *,1,1,0> >,DefaultLifetimeTraits<SystemSettings::DataModel::ISettingItem *>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorIterator<SystemSettings::DataModel::ISettingItem *,Vector<SystemSettings::DataModel::ISettingItem *,DefaultEqualityPredicate<SystemSettings::DataModel::ISettingItem *>,DefaultLifetimeTraits<SystemSettings::DataModel::ISettingItem *>,VectorOptions<SystemSettings::DataModel::ISettingItem *,1,1,0> >,DefaultLifetimeTraits<SystemSettings::DataModel::ISettingItem *>,XWinRT::IntVersionTag,1>(Vector<SystemSettings::DataModel::ISettingItem *,DefaultEqualityPredicate<SystemSettings::DataModel::ISettingItem *>,DefaultLifetimeTraits<SystemSettings::DataModel::ISettingItem *>,VectorOptions<SystemSettings::DataModel::ISettingItem *,1,1,0> > *,SimpleVectorIterator<SystemSettings::DataModel::ISettingItem *,Vector<SystemSettings::DataModel::ISettingItem *,DefaultEqualityPredicate<SystemSettings::DataModel::ISettingItem *>,DefaultLifetimeTraits<SystemSettings::DataModel::ISettingItem *>,VectorOptions<SystemSettings::DataModel::ISettingItem *,1,1,0> >,DefaultLifetimeTraits<SystemSettings::DataModel::ISettingItem *>,XWinRT::IntVersionTag,1>::permission);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,SystemSettings::DataModel::ISettingItem * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long MoveNext(unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Current(SystemSettings::DataModel::ISettingItem * *);
					virtual long get_HasCurrent(unsigned char *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct SimpleVectorView<IInspectable *,Vector<IInspectable *,DefaultEqualityPredicate<IInspectable *>,DefaultLifetimeTraits<IInspectable *>,VectorOptions<IInspectable *,1,1,0> >,DefaultLifetimeTraits<IInspectable *>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorView<IInspectable *,Vector<IInspectable *,DefaultEqualityPredicate<IInspectable *>,DefaultLifetimeTraits<IInspectable *>,VectorOptions<IInspectable *,1,1,0> >,DefaultLifetimeTraits<IInspectable *>,XWinRT::IntVersionTag,1>(Vector<IInspectable *,DefaultEqualityPredicate<IInspectable *>,DefaultLifetimeTraits<IInspectable *>,VectorOptions<IInspectable *,1,1,0> > *,SimpleVectorView<IInspectable *,Vector<IInspectable *,DefaultEqualityPredicate<IInspectable *>,DefaultLifetimeTraits<IInspectable *>,VectorOptions<IInspectable *,1,1,0> >,DefaultLifetimeTraits<IInspectable *>,XWinRT::IntVersionTag,1>::permission);
					virtual long First(IIterator<IInspectable *> * *);
					virtual long GetAt(unsigned int,IInspectable * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,IInspectable * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long IndexOf(IInspectable *,unsigned int *,unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct SimpleVectorView<SystemSettings::DataModel::ISettingItem *,Vector<SystemSettings::DataModel::ISettingItem *,DefaultEqualityPredicate<SystemSettings::DataModel::ISettingItem *>,DefaultLifetimeTraits<SystemSettings::DataModel::ISettingItem *>,VectorOptions<SystemSettings::DataModel::ISettingItem *,1,1,0> >,DefaultLifetimeTraits<SystemSettings::DataModel::ISettingItem *>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorView<SystemSettings::DataModel::ISettingItem *,Vector<SystemSettings::DataModel::ISettingItem *,DefaultEqualityPredicate<SystemSettings::DataModel::ISettingItem *>,DefaultLifetimeTraits<SystemSettings::DataModel::ISettingItem *>,VectorOptions<SystemSettings::DataModel::ISettingItem *,1,1,0> >,DefaultLifetimeTraits<SystemSettings::DataModel::ISettingItem *>,XWinRT::IntVersionTag,1>(Vector<SystemSettings::DataModel::ISettingItem *,DefaultEqualityPredicate<SystemSettings::DataModel::ISettingItem *>,DefaultLifetimeTraits<SystemSettings::DataModel::ISettingItem *>,VectorOptions<SystemSettings::DataModel::ISettingItem *,1,1,0> > *,SimpleVectorView<SystemSettings::DataModel::ISettingItem *,Vector<SystemSettings::DataModel::ISettingItem *,DefaultEqualityPredicate<SystemSettings::DataModel::ISettingItem *>,DefaultLifetimeTraits<SystemSettings::DataModel::ISettingItem *>,VectorOptions<SystemSettings::DataModel::ISettingItem *,1,1,0> >,DefaultLifetimeTraits<SystemSettings::DataModel::ISettingItem *>,XWinRT::IntVersionTag,1>::permission);
					virtual long First(IIterator<SystemSettings::DataModel::ISettingItem *> * *);
					virtual long GetAt(unsigned int,SystemSettings::DataModel::ISettingItem * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,SystemSettings::DataModel::ISettingItem * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long IndexOf(SystemSettings::DataModel::ISettingItem *,unsigned int *,unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				class Vector<IInspectable *,DefaultEqualityPredicate<IInspectable *>,DefaultLifetimeTraits<IInspectable *>,VectorOptions<IInspectable *,1,1,0> >
				{
					long IndexOfInternal(XWinRT::detail::GitStorageType<IInspectable> *,unsigned int,IInspectable *,unsigned int *,unsigned char *);
					long InsertAtInternal(unsigned int,IInspectable *,bool);
					long RemoveAtInternal(unsigned int,bool);
					long ResizeStorage(unsigned int);
					void _EraseAll(XWinRT::detail::GitStorageType<IInspectable> * *,unsigned int *);
				public:
					Vector<IInspectable *,DefaultEqualityPredicate<IInspectable *>,DefaultLifetimeTraits<IInspectable *>,VectorOptions<IInspectable *,1,1,0> >(DefaultEqualityPredicate<IInspectable *> const &,Vector<IInspectable *,DefaultEqualityPredicate<IInspectable *>,DefaultLifetimeTraits<IInspectable *>,VectorOptions<IInspectable *,1,1,0> >::permission);
					virtual long Append(IInspectable *);
					virtual long Clear();
					virtual long First(IIterator<IInspectable *> * *);
					virtual long GetAt(unsigned int,IInspectable * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,IInspectable * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long GetView(IVectorView<IInspectable *> * *);
					virtual long IndexOf(IInspectable *,unsigned int *,unsigned char *);
					virtual long InsertAt(unsigned int,IInspectable *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long RemoveAt(unsigned int);
					virtual long RemoveAtEnd();
					virtual long ReplaceAll(unsigned int,IInspectable * *);
					virtual long SetAt(unsigned int,IInspectable *);
					virtual long add_VectorChanged(VectorChangedEventHandler<IInspectable *> *,EventRegistrationToken *);
					virtual long get_Size(unsigned int *);
					virtual long remove_VectorChanged(EventRegistrationToken);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				class Vector<SystemSettings::DataModel::ISettingItem *,DefaultEqualityPredicate<SystemSettings::DataModel::ISettingItem *>,DefaultLifetimeTraits<SystemSettings::DataModel::ISettingItem *>,VectorOptions<SystemSettings::DataModel::ISettingItem *,1,1,0> >
				{
					long IndexOfInternal(XWinRT::detail::GitStorageType<SystemSettings::DataModel::ISettingItem> *,unsigned int,SystemSettings::DataModel::ISettingItem *,unsigned int *,unsigned char *);
					long InsertAtInternal(unsigned int,SystemSettings::DataModel::ISettingItem *,bool);
					long RemoveAtInternal(unsigned int,bool);
					long ResizeStorage(unsigned int);
					void _EraseAll(XWinRT::detail::GitStorageType<SystemSettings::DataModel::ISettingItem> * *,unsigned int *);
				public:
					Vector<SystemSettings::DataModel::ISettingItem *,DefaultEqualityPredicate<SystemSettings::DataModel::ISettingItem *>,DefaultLifetimeTraits<SystemSettings::DataModel::ISettingItem *>,VectorOptions<SystemSettings::DataModel::ISettingItem *,1,1,0> >(DefaultEqualityPredicate<SystemSettings::DataModel::ISettingItem *> const &,Vector<SystemSettings::DataModel::ISettingItem *,DefaultEqualityPredicate<SystemSettings::DataModel::ISettingItem *>,DefaultLifetimeTraits<SystemSettings::DataModel::ISettingItem *>,VectorOptions<SystemSettings::DataModel::ISettingItem *,1,1,0> >::permission);
					virtual long Append(SystemSettings::DataModel::ISettingItem *);
					virtual long Clear();
					virtual long First(IIterator<SystemSettings::DataModel::ISettingItem *> * *);
					virtual long GetAt(unsigned int,SystemSettings::DataModel::ISettingItem * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,SystemSettings::DataModel::ISettingItem * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long GetView(IVectorView<SystemSettings::DataModel::ISettingItem *> * *);
					virtual long IndexOf(SystemSettings::DataModel::ISettingItem *,unsigned int *,unsigned char *);
					virtual long InsertAt(unsigned int,SystemSettings::DataModel::ISettingItem *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long RemoveAt(unsigned int);
					virtual long RemoveAtEnd();
					virtual long ReplaceAll(unsigned int,SystemSettings::DataModel::ISettingItem * *);
					virtual long SetAt(unsigned int,SystemSettings::DataModel::ISettingItem *);
					virtual long add_VectorChanged(VectorChangedEventHandler<SystemSettings::DataModel::ISettingItem *> *,EventRegistrationToken *);
					virtual long get_Size(unsigned int *);
					virtual long remove_VectorChanged(EventRegistrationToken);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct VectorChangedEventArgs
				{
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_CollectionChange(CollectionChange *);
					virtual long get_Index(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct VectorOptions<IInspectable *,1,1,0>
				{
					static long RaiseEvent(XWinRT::detail::ReentrancyGuard<1> &,GitEventSource<VectorChangedEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2> > &,IObservableVector<IInspectable *> *,CollectionChange,unsigned int);
				};

				struct VectorOptions<SystemSettings::DataModel::ISettingItem *,1,1,0>
				{
					static long RaiseEvent(XWinRT::detail::ReentrancyGuard<1> &,GitEventSource<VectorChangedEventHandler<SystemSettings::DataModel::ISettingItem *>,Microsoft::WRL::InvokeModeOptions<-2> > &,IObservableVector<SystemSettings::DataModel::ISettingItem *> *,CollectionChange,unsigned int);
				};

			};

		};

	};

	namespace Internal
	{
		namespace Details
		{
			struct Git
			{
				long Acquire();
			};

			struct GitInvokeHelper<Foundation::Collections::VectorChangedEventHandler<IInspectable *>,GitPtr,2>
			{
				virtual long Invoke(Foundation::Collections::IObservableVector<IInspectable *> *,Foundation::Collections::IVectorChangedEventArgs *);
			};

			struct GitInvokeHelper<Foundation::Collections::VectorChangedEventHandler<SystemSettings::DataModel::ISettingItem *>,GitPtr,2>
			{
				virtual long Invoke(Foundation::Collections::IObservableVector<SystemSettings::DataModel::ISettingItem *> *,Foundation::Collections::IVectorChangedEventArgs *);
			};

			Details::Git _git;
			long CreateGitHelper<Foundation::Collections::VectorChangedEventHandler<IInspectable *>,GitPtr>(Foundation::Collections::VectorChangedEventHandler<IInspectable *> *,Foundation::Collections::VectorChangedEventHandler<IInspectable *> * *);
			long CreateGitHelper<Foundation::Collections::VectorChangedEventHandler<SystemSettings::DataModel::ISettingItem *>,GitPtr>(Foundation::Collections::VectorChangedEventHandler<SystemSettings::DataModel::ISettingItem *> *,Foundation::Collections::VectorChangedEventHandler<SystemSettings::DataModel::ISettingItem *> * *);
		};

		struct GitPtrImpl<GitPtr>
		{
			virtual bool IsInitialized();
		};

		class NativeString<CoTaskMemPolicy<unsigned short> >
		{
			long _EnsureCapacity(unsigned __int64);
		public:
			long Initialize(unsigned short const *);
		};

	};

};

class WnfSubscriberT<char>
{
protected:
	static long CallbackWrapper(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
public:
	long AddCallback(std::function<void (char const &)> const &,std::shared_ptr<std::function<void (char const &)> > *);
	long Subscribe(unsigned long);
	virtual ~WnfSubscriberT<char>();
	void RemoveCallback(std::shared_ptr<std::function<void (char const &)> > const &);
};

namespace XWinRT
{
	struct AutoValue<IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *> >
	{
		~AutoValue<IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *> >();
	};

	struct AutoValue<SystemSettings::DataModel::ISettingItem *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::ISettingItem *> >
	{
		~AutoValue<SystemSettings::DataModel::ISettingItem *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::ISettingItem *> >();
	};

	struct AutoValue<detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *> >
	{
		~AutoValue<detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *> >();
	};

	struct AutoValue<detail::GitStorageType<SystemSettings::DataModel::ISettingItem>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::ISettingItem *> >
	{
		~AutoValue<detail::GitStorageType<SystemSettings::DataModel::ISettingItem>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::ISettingItem *> >();
	};

	struct InterfaceLifetimeTraits
	{
		static long Construct<IInspectable>(detail::GitStorageType<IInspectable> *,IInspectable *);
		static long Construct<SystemSettings::DataModel::ISettingItem>(detail::GitStorageType<SystemSettings::DataModel::ISettingItem> *,SystemSettings::DataModel::ISettingItem *);
		static void Destroy<IInspectable>(detail::GitStorageType<IInspectable> *);
		static void Destroy<SystemSettings::DataModel::ISettingItem>(detail::GitStorageType<SystemSettings::DataModel::ISettingItem> *);
	};

	struct StorageTempTraits<detail::GitStorageType<IInspectable>,IInspectable *,detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *> >
	{
		static long ResolveDemand(detail::GitStorageType<IInspectable> *,IInspectable * *);
	};

	struct StorageTempTraits<detail::GitStorageType<SystemSettings::DataModel::ISettingItem>,SystemSettings::DataModel::ISettingItem *,detail::GitStorageType<SystemSettings::DataModel::ISettingItem>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::ISettingItem *> >
	{
		static long ResolveDemand(detail::GitStorageType<SystemSettings::DataModel::ISettingItem> *,SystemSettings::DataModel::ISettingItem * *);
	};

	namespace detail
	{
		struct AbiReference<IInspectable *,GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *> >
		{
			~AbiReference<IInspectable *,GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *> >();
		};

		struct AbiReference<SystemSettings::DataModel::ISettingItem *,GitStorageType<SystemSettings::DataModel::ISettingItem>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::ISettingItem *> >
		{
			~AbiReference<SystemSettings::DataModel::ISettingItem *,GitStorageType<SystemSettings::DataModel::ISettingItem>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::ISettingItem *> >();
		};

		struct LockHolder<ComLock,AcquireRead>
		{
			~LockHolder<ComLock,AcquireRead>();
		};

		struct LockHolder<ComLock,AcquireWrite>
		{
			~LockHolder<ComLock,AcquireWrite>();
		};

		struct ReentrancyGuard<1>
		{
			~ReentrancyGuard<1>();
		};

	};

};

class XmlReader
{
	long DuplicateString(unsigned short const *,unsigned int,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	long GetNextNode(XmlNodeType *);
public:
	XmlReader();
	bool IsEmptyElement();
	bool IsEndElement();
	long GetLocalName(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	long GetNodeText(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	long GetValue(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	long GetValueAsDWORD(unsigned long *);
	long Init(IStream *);
	long MoveToEndOfCurrentElement(bool);
	long MoveToFirstAttribute();
	long MoveToSiblingNode(bool,bool);
	long ValidateCurrentLocalName(unsigned short const *,bool);
	long ValidateElement(bool);
	long ValidateElement(unsigned short const *,bool,bool);
	~XmlReader();
};

struct _com_error
{
	_com_error(_com_error const &);
	_com_error(long,IErrorInfo *,bool);
	virtual ~_com_error();
};

struct _variant_t
{
	~_variant_t();
};

namespace std
{
	struct _Func_class<void,char const &>
	{
		~_Func_class<void,char const &>();
	};

	class _Hash<_Uset_traits<unsigned int,_Uhash_compare<unsigned int,hash<unsigned int>,equal_to<unsigned int> >,allocator<unsigned int>,0> >
	{
	protected:
		pair<_List_const_iterator<_List_val<_List_simple_types<unsigned int> > >,bool> _Insert<unsigned int const &,_List_unchecked_const_iterator<_List_val<_List_simple_types<unsigned int> >,_Iterator_base0> >(unsigned int const &,_List_unchecked_const_iterator<_List_val<_List_simple_types<unsigned int> >,_Iterator_base0>);
		pair<_List_const_iterator<_List_val<_List_simple_types<unsigned int> > >,bool> _Insert<unsigned int const &,_Not_a_node_tag>(unsigned int const &,_Not_a_node_tag);
		void _Check_size();
		void _Destroy_if_node(_List_unchecked_const_iterator<_List_val<_List_simple_types<unsigned int> >,_Iterator_base0>);
		void _Init(unsigned __int64);
	public:
		_List_const_iterator<_List_val<_List_simple_types<unsigned int> > > _Make_iter(_List_unchecked_const_iterator<_List_val<_List_simple_types<unsigned int> >,_Iterator_base0>);
		_List_const_iterator<_List_val<_List_simple_types<unsigned int> > > erase(_List_const_iterator<_List_val<_List_simple_types<unsigned int> > >);
		~_Hash<_Uset_traits<unsigned int,_Uhash_compare<unsigned int,hash<unsigned int>,equal_to<unsigned int> >,allocator<unsigned int>,0> >();
	};

	struct _List_alloc<_List_base_types<unsigned int,allocator<unsigned int> > >
	{
		_List_node<unsigned int,void *> * _Buynode0(_List_node<unsigned int,void *> *,_List_node<unsigned int,void *> *);
	};

	struct _List_buy<unsigned int,allocator<unsigned int> >
	{
		_List_node<unsigned int,void *> * _Buynode<unsigned int const &>(_List_node<unsigned int,void *> *,_List_node<unsigned int,void *> *,unsigned int const &);
	};

	class _Ref_count<UxUsoUpdateShim>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count<function<void (char const &)> >
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count<unsigned char>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	struct _Ref_count_base
	{
		virtual void * _Get_deleter(type_info const &);
	};

	class _Ref_count_obj<Concurrency::details::_ExceptionHolder>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<Concurrency::details::_Task_completion_event_impl<unsigned char> >
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<Concurrency::details::_Task_impl<unsigned char> >
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<SystemSettings::Update::CMusErrorMapSingleton>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<SystemSettings::Update::CMusOrchModel>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<UxUsoMoStackShim>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<UxUsoOldStackShim>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<function<void ()> >
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Tree<_Tmap_traits<long,unsigned int,less<long>,allocator<pair<long const ,unsigned int> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<long const ,unsigned int> > > > _Insert_at<pair<long const ,unsigned int> &,_Tree_node<pair<long const ,unsigned int>,void *> *>(bool,_Tree_node<pair<long const ,unsigned int>,void *> *,pair<long const ,unsigned int> &,_Tree_node<pair<long const ,unsigned int>,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<long const ,unsigned int> > > >,bool> _Insert_nohint<pair<long const ,unsigned int> &,_Tree_node<pair<long const ,unsigned int>,void *> *>(bool,pair<long const ,unsigned int> &,_Tree_node<pair<long const ,unsigned int>,void *> *);
		void _Destroy_if_node(_Tree_node<pair<long const ,unsigned int>,void *> *);
		void _Erase(_Tree_node<pair<long const ,unsigned int>,void *> *);
	public:
		void clear();
	};

	class _Tree<_Tmap_traits<unsigned int,UXElementStore::UXStringValueElement,less<unsigned int>,allocator<pair<unsigned int const ,UXElementStore::UXStringValueElement> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned int const ,UXElementStore::UXStringValueElement> > > > _Insert_at<pair<unsigned int const ,UXElementStore::UXStringValueElement> &,_Tree_node<pair<unsigned int const ,UXElementStore::UXStringValueElement>,void *> *>(bool,_Tree_node<pair<unsigned int const ,UXElementStore::UXStringValueElement>,void *> *,pair<unsigned int const ,UXElementStore::UXStringValueElement> &,_Tree_node<pair<unsigned int const ,UXElementStore::UXStringValueElement>,void *> *);
		_Tree_node<pair<unsigned int const ,UXElementStore::UXStringValueElement>,void *> * _Copy_nodes<_Tree<_Tmap_traits<unsigned int,UXElementStore::UXStringValueElement,less<unsigned int>,allocator<pair<unsigned int const ,UXElementStore::UXStringValueElement> >,0> >::_Copy_tag>(_Tree_node<pair<unsigned int const ,UXElementStore::UXStringValueElement>,void *> *,_Tree_node<pair<unsigned int const ,UXElementStore::UXStringValueElement>,void *> *,_Tree<_Tmap_traits<unsigned int,UXElementStore::UXStringValueElement,less<unsigned int>,allocator<pair<unsigned int const ,UXElementStore::UXStringValueElement> >,0> >::_Copy_tag);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned int const ,UXElementStore::UXStringValueElement> > > >,bool> _Insert_nohint<pair<unsigned int const ,UXElementStore::UXStringValueElement> &,_Tree_node<pair<unsigned int const ,UXElementStore::UXStringValueElement>,void *> *>(bool,pair<unsigned int const ,UXElementStore::UXStringValueElement> &,_Tree_node<pair<unsigned int const ,UXElementStore::UXStringValueElement>,void *> *);
		void _Destroy_if_node(_Tree_node<pair<unsigned int const ,UXElementStore::UXStringValueElement>,void *> *);
		void _Erase(_Tree_node<pair<unsigned int const ,UXElementStore::UXStringValueElement>,void *> *);
	public:
		void clear();
	};

	class _Tree<_Tmap_traits<unsigned int,UXElementStore::UXStyleElement,less<unsigned int>,allocator<pair<unsigned int const ,UXElementStore::UXStyleElement> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned int const ,UXElementStore::UXStyleElement> > > > _Insert_at<pair<unsigned int const ,UXElementStore::UXStyleElement> &,_Tree_node<pair<unsigned int const ,UXElementStore::UXStyleElement>,void *> *>(bool,_Tree_node<pair<unsigned int const ,UXElementStore::UXStyleElement>,void *> *,pair<unsigned int const ,UXElementStore::UXStyleElement> &,_Tree_node<pair<unsigned int const ,UXElementStore::UXStyleElement>,void *> *);
		_Tree_node<pair<unsigned int const ,UXElementStore::UXStyleElement>,void *> * _Copy_nodes<_Tree<_Tmap_traits<unsigned int,UXElementStore::UXStyleElement,less<unsigned int>,allocator<pair<unsigned int const ,UXElementStore::UXStyleElement> >,0> >::_Copy_tag>(_Tree_node<pair<unsigned int const ,UXElementStore::UXStyleElement>,void *> *,_Tree_node<pair<unsigned int const ,UXElementStore::UXStyleElement>,void *> *,_Tree<_Tmap_traits<unsigned int,UXElementStore::UXStyleElement,less<unsigned int>,allocator<pair<unsigned int const ,UXElementStore::UXStyleElement> >,0> >::_Copy_tag);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned int const ,UXElementStore::UXStyleElement> > > >,bool> _Insert_nohint<pair<unsigned int const ,UXElementStore::UXStyleElement> &,_Tree_node<pair<unsigned int const ,UXElementStore::UXStyleElement>,void *> *>(bool,pair<unsigned int const ,UXElementStore::UXStyleElement> &,_Tree_node<pair<unsigned int const ,UXElementStore::UXStyleElement>,void *> *);
		void _Destroy_if_node(_Tree_node<pair<unsigned int const ,UXElementStore::UXStyleElement>,void *> *);
		void _Erase(_Tree_node<pair<unsigned int const ,UXElementStore::UXStyleElement>,void *> *);
	public:
		void clear();
	};

	class _Tree<_Tmap_traits<unsigned long,_variant_t,less<unsigned long>,allocator<pair<unsigned long const ,_variant_t> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned long const ,_variant_t> > > > _Insert_at<pair<unsigned long const ,_variant_t> &,_Tree_node<pair<unsigned long const ,_variant_t>,void *> *>(bool,_Tree_node<pair<unsigned long const ,_variant_t>,void *> *,pair<unsigned long const ,_variant_t> &,_Tree_node<pair<unsigned long const ,_variant_t>,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned long const ,_variant_t> > > >,bool> _Insert_nohint<pair<unsigned long const ,_variant_t> &,_Tree_node<pair<unsigned long const ,_variant_t>,void *> *>(bool,pair<unsigned long const ,_variant_t> &,_Tree_node<pair<unsigned long const ,_variant_t>,void *> *);
		void _Destroy_if_node(_Tree_node<pair<unsigned long const ,_variant_t>,void *> *);
		void _Erase(_Tree_node<pair<unsigned long const ,_variant_t>,void *> *);
	public:
		~_Tree<_Tmap_traits<unsigned long,_variant_t,less<unsigned long>,allocator<pair<unsigned long const ,_variant_t> >,0> >();
	};

	class _Tree<_Tmap_traits<unsigned long,bool,less<unsigned long>,allocator<pair<unsigned long const ,bool> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned long const ,bool> > > > _Insert_at<pair<unsigned long const ,bool> &,_Tree_node<pair<unsigned long const ,bool>,void *> *>(bool,_Tree_node<pair<unsigned long const ,bool>,void *> *,pair<unsigned long const ,bool> &,_Tree_node<pair<unsigned long const ,bool>,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned long const ,bool> > > > _Insert_hint<pair<unsigned long const ,bool> &,_Tree_node<pair<unsigned long const ,bool>,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<unsigned long const ,bool> > > >,pair<unsigned long const ,bool> &,_Tree_node<pair<unsigned long const ,bool>,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned long const ,bool> > > >,bool> _Insert_nohint<pair<unsigned long const ,bool> &,_Tree_node<pair<unsigned long const ,bool>,void *> *>(bool,pair<unsigned long const ,bool> &,_Tree_node<pair<unsigned long const ,bool>,void *> *);
		void _Destroy_if_node(_Tree_node<pair<unsigned long const ,bool>,void *> *);
		void _Erase(_Tree_node<pair<unsigned long const ,bool>,void *> *);
	public:
		~_Tree<_Tmap_traits<unsigned long,bool,less<unsigned long>,allocator<pair<unsigned long const ,bool> >,0> >();
	};

	class _Tree<_Tmap_traits<unsigned short const *,unsigned short const *,less<unsigned short const *>,allocator<pair<unsigned short const * const,unsigned short const *> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned short const * const,unsigned short const *> > > > _Insert_at<pair<unsigned short const * const,unsigned short const *> &,_Tree_node<pair<unsigned short const * const,unsigned short const *>,void *> *>(bool,_Tree_node<pair<unsigned short const * const,unsigned short const *>,void *> *,pair<unsigned short const * const,unsigned short const *> &,_Tree_node<pair<unsigned short const * const,unsigned short const *>,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned short const * const,unsigned short const *> > > > _Insert_hint<pair<unsigned short const * const,unsigned short const *> &,_Tree_node<pair<unsigned short const * const,unsigned short const *>,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<unsigned short const * const,unsigned short const *> > > >,pair<unsigned short const * const,unsigned short const *> &,_Tree_node<pair<unsigned short const * const,unsigned short const *>,void *> *);
		pair<_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<unsigned short const * const,unsigned short const *> > > >,_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<unsigned short const * const,unsigned short const *> > > > > _Eqrange<unsigned short const *>(unsigned short const * const &);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned short const * const,unsigned short const *> > > >,bool> _Insert_nohint<pair<unsigned short const * const,unsigned short const *> &,_Tree_node<pair<unsigned short const * const,unsigned short const *>,void *> *>(bool,pair<unsigned short const * const,unsigned short const *> &,_Tree_node<pair<unsigned short const * const,unsigned short const *>,void *> *);
		void _Destroy_if_node(_Tree_node<pair<unsigned short const * const,unsigned short const *>,void *> *);
		void _Erase(_Tree_node<pair<unsigned short const * const,unsigned short const *>,void *> *);
	public:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned short const * const,unsigned short const *> > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<unsigned short const * const,unsigned short const *> > > >);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned short const * const,unsigned short const *> > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<unsigned short const * const,unsigned short const *> > > >,_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<unsigned short const * const,unsigned short const *> > > >);
		unsigned __int64 count(unsigned short const * const &);
		void clear();
	};

	class _Tree<_Tset_traits<shared_ptr<function<void (char const &)> >,less<shared_ptr<function<void (char const &)> > >,allocator<shared_ptr<function<void (char const &)> > >,0> >
	{
	protected:
		_Tree_const_iterator<_Tree_val<_Tree_simple_types<shared_ptr<function<void (char const &)> > > > > _Insert_at<shared_ptr<function<void (char const &)> > const &,_Not_a_node_tag>(bool,_Tree_node<shared_ptr<function<void (char const &)> >,void *> *,shared_ptr<function<void (char const &)> > const &,_Not_a_node_tag);
		pair<_Tree_const_iterator<_Tree_val<_Tree_simple_types<shared_ptr<function<void (char const &)> > > > >,bool> _Insert_nohint<shared_ptr<function<void (char const &)> > const &,_Not_a_node_tag>(bool,shared_ptr<function<void (char const &)> > const &,_Not_a_node_tag);
		void _Erase(_Tree_node<shared_ptr<function<void (char const &)> >,void *> *);
	public:
		_Tree_const_iterator<_Tree_val<_Tree_simple_types<shared_ptr<function<void (char const &)> > > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<shared_ptr<function<void (char const &)> > > > >,_Tree_const_iterator<_Tree_val<_Tree_simple_types<shared_ptr<function<void (char const &)> > > > >);
	};

	struct _Tree_comp_alloc<_Tmap_traits<long,unsigned int,less<long>,allocator<pair<long const ,unsigned int> >,0> >
	{
		_Tree_node<pair<long const ,unsigned int>,void *> * _Buyheadnode();
		_Tree_node<pair<long const ,unsigned int>,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<long const ,unsigned int>,void *> *);
	};

	struct _Tree_comp_alloc<_Tmap_traits<unsigned int,UXElementStore::UXStringValueElement,less<unsigned int>,allocator<pair<unsigned int const ,UXElementStore::UXStringValueElement> >,0> >
	{
		_Tree_node<pair<unsigned int const ,UXElementStore::UXStringValueElement>,void *> * _Buyheadnode();
		_Tree_node<pair<unsigned int const ,UXElementStore::UXStringValueElement>,void *> * _Buynode0();
		_Tree_node<pair<unsigned int const ,UXElementStore::UXStringValueElement>,void *> * _Buynode<pair<unsigned int const ,UXElementStore::UXStringValueElement> &>(pair<unsigned int const ,UXElementStore::UXStringValueElement> &);
		void _Freenode0(_Tree_node<pair<unsigned int const ,UXElementStore::UXStringValueElement>,void *> *);
	};

	struct _Tree_comp_alloc<_Tmap_traits<unsigned int,UXElementStore::UXStyleElement,less<unsigned int>,allocator<pair<unsigned int const ,UXElementStore::UXStyleElement> >,0> >
	{
		_Tree_node<pair<unsigned int const ,UXElementStore::UXStyleElement>,void *> * _Buyheadnode();
		_Tree_node<pair<unsigned int const ,UXElementStore::UXStyleElement>,void *> * _Buynode0();
		_Tree_node<pair<unsigned int const ,UXElementStore::UXStyleElement>,void *> * _Buynode<pair<unsigned int const ,UXElementStore::UXStyleElement> &>(pair<unsigned int const ,UXElementStore::UXStyleElement> &);
		void _Freenode0(_Tree_node<pair<unsigned int const ,UXElementStore::UXStyleElement>,void *> *);
	};

	struct _Tree_comp_alloc<_Tmap_traits<unsigned long,_variant_t,less<unsigned long>,allocator<pair<unsigned long const ,_variant_t> >,0> >
	{
		_Tree_node<pair<unsigned long const ,_variant_t>,void *> * _Buyheadnode();
		_Tree_node<pair<unsigned long const ,_variant_t>,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<unsigned long const ,_variant_t>,void *> *);
	};

	struct _Tree_comp_alloc<_Tmap_traits<unsigned long,bool,less<unsigned long>,allocator<pair<unsigned long const ,bool> >,0> >
	{
		_Tree_node<pair<unsigned long const ,bool>,void *> * _Buyheadnode();
		_Tree_node<pair<unsigned long const ,bool>,void *> * _Buynode0();
		_Tree_node<pair<unsigned long const ,bool>,void *> * _Buynode<pair<unsigned long const ,bool> const &>(pair<unsigned long const ,bool> const &);
		void _Freenode0(_Tree_node<pair<unsigned long const ,bool>,void *> *);
	};

	struct _Tree_comp_alloc<_Tmap_traits<unsigned short const *,unsigned short const *,less<unsigned short const *>,allocator<pair<unsigned short const * const,unsigned short const *> >,0> >
	{
		_Tree_node<pair<unsigned short const * const,unsigned short const *>,void *> * _Buyheadnode();
		_Tree_node<pair<unsigned short const * const,unsigned short const *>,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<unsigned short const * const,unsigned short const *>,void *> *);
	};

	struct _Tree_comp_alloc<_Tset_traits<shared_ptr<function<void (char const &)> >,less<shared_ptr<function<void (char const &)> > >,allocator<shared_ptr<function<void (char const &)> > >,0> >
	{
		_Tree_node<shared_ptr<function<void (char const &)> >,void *> * _Buyheadnode();
		_Tree_node<shared_ptr<function<void (char const &)> >,void *> * _Buynode0();
		_Tree_node<shared_ptr<function<void (char const &)> >,void *> * _Buynode<shared_ptr<function<void (char const &)> > const &>(shared_ptr<function<void (char const &)> > const &);
		void _Freenode0(_Tree_node<shared_ptr<function<void (char const &)> >,void *> *);
	};

	struct _Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<unsigned long const ,bool> > > >
	{
		_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<unsigned long const ,bool> > > > & operator--();
	};

	struct _Tree_unchecked_const_iterator<_Tree_val<_Tree_simple_types<pair<unsigned short const * const,unsigned short const *> > >,_Iterator_base0>
	{
		_Tree_unchecked_const_iterator<_Tree_val<_Tree_simple_types<pair<unsigned short const * const,unsigned short const *> > >,_Iterator_base0> & operator--();
	};

	struct _Tree_val<_Tree_simple_types<pair<unsigned short const * const,unsigned short const *> > >
	{
		_Tree_node<pair<unsigned short const * const,unsigned short const *>,void *> * _Extract(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<unsigned short const * const,unsigned short const *> > > >);
	};

	struct _Tree_val<_Tree_simple_types<shared_ptr<function<void (char const &)> > > >
	{
		_Tree_node<shared_ptr<function<void (char const &)> >,void *> * _Extract(_Tree_const_iterator<_Tree_val<_Tree_simple_types<shared_ptr<function<void (char const &)> > > > >);
	};

	struct _Uninitialized_backout_al<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
		~_Uninitialized_backout_al<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >();
	};

	struct _Vector_alloc<_Vec_base_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >
	{
		allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > & _Getal();
	};

	struct allocator<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem> >
	{
		void deallocate(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem> * const,unsigned __int64);
	};

	struct allocator<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting> >
	{
		void deallocate(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting> * const,unsigned __int64);
	};

	struct allocator<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting> >
	{
		void deallocate(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting> * const,unsigned __int64);
	};

	struct allocator<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdatePolicyInfoSetting> >
	{
		void deallocate(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdatePolicyInfoSetting> * const,unsigned __int64);
	};

	struct allocator<_List_node<unsigned int,void *> >
	{
		void deallocate(_List_node<unsigned int,void *> * const,unsigned __int64);
	};

	struct allocator<_List_unchecked_const_iterator<_List_val<_List_simple_types<unsigned int> >,_Iterator_base0> >
	{
		void deallocate(_List_unchecked_const_iterator<_List_val<_List_simple_types<unsigned int> >,_Iterator_base0> * const,unsigned __int64);
	};

	struct allocator<_Tree_node<pair<long const ,unsigned int>,void *> >
	{
		void deallocate(_Tree_node<pair<long const ,unsigned int>,void *> * const,unsigned __int64);
	};

	struct allocator<_Tree_node<pair<unsigned int const ,UXElementStore::UXStringValueElement>,void *> >
	{
		void deallocate(_Tree_node<pair<unsigned int const ,UXElementStore::UXStringValueElement>,void *> * const,unsigned __int64);
	};

	struct allocator<_Tree_node<pair<unsigned int const ,UXElementStore::UXStyleElement>,void *> >
	{
		void deallocate(_Tree_node<pair<unsigned int const ,UXElementStore::UXStyleElement>,void *> * const,unsigned __int64);
	};

	struct allocator<_Tree_node<pair<unsigned long const ,_variant_t>,void *> >
	{
		void deallocate(_Tree_node<pair<unsigned long const ,_variant_t>,void *> * const,unsigned __int64);
	};

	struct allocator<_Tree_node<pair<unsigned long const ,bool>,void *> >
	{
		void deallocate(_Tree_node<pair<unsigned long const ,bool>,void *> * const,unsigned __int64);
	};

	struct allocator<_Tree_node<pair<unsigned short const * const,unsigned short const *>,void *> >
	{
		void deallocate(_Tree_node<pair<unsigned short const * const,unsigned short const *>,void *> * const,unsigned __int64);
	};

	struct allocator<_Tree_node<shared_ptr<function<void (char const &)> >,void *> >
	{
		void deallocate(_Tree_node<shared_ptr<function<void (char const &)> >,void *> * const,unsigned __int64);
	};

	struct allocator<_WIN32_FIND_DATAW>
	{
		_WIN32_FIND_DATAW * allocate(unsigned __int64);
		void deallocate(_WIN32_FIND_DATAW * const,unsigned __int64);
	};

	struct allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >
	{
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > * allocate(unsigned __int64);
		void deallocate(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > * const,unsigned __int64);
	};

	struct allocator<shared_ptr<Concurrency::details::_Task_impl<unsigned char> > >
	{
		void deallocate(shared_ptr<Concurrency::details::_Task_impl<unsigned char> > * const,unsigned __int64);
	};

	struct allocator<shared_ptr<UxUsoUpdateShim> >
	{
		void deallocate(shared_ptr<UxUsoUpdateShim> * const,unsigned __int64);
	};

	struct allocator<tagUsoUpdateIdentifier>
	{
		void deallocate(tagUsoUpdateIdentifier * const,unsigned __int64);
	};

	struct allocator<unsigned char>
	{
		void deallocate(unsigned char * const,unsigned __int64);
	};

	struct allocator<unsigned short>
	{
		unsigned short * allocate(unsigned __int64);
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
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & append(unsigned __int64,unsigned short);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & append(unsigned short const * const,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & assign(unsigned short const * const);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & assign(unsigned short const * const,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & operator=(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		static void _Xlen();
		void _Become_small();
		void _Construct_lv_contents(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		void _Tidy_deallocate();
		~basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >();
	};

	struct exception
	{
		exception(exception const &);
		virtual char const * what();
	};

	struct exception_ptr
	{
		exception_ptr(exception_ptr const &);
		void _RethrowException();
		~exception_ptr();
	};

	struct function<unsigned char ()>
	{
		~function<unsigned char ()>();
	};

	struct function<void ()>
	{
		~function<void ()>();
	};

	struct function<void (char const &)>
	{
		~function<void (char const &)>();
	};

	struct list<unsigned int,allocator<unsigned int> >
	{
		~list<unsigned int,allocator<unsigned int> >();
	};

	struct lock_guard<mutex>
	{
		~lock_guard<mutex>();
	};

	struct map<long,unsigned int,less<long>,allocator<pair<long const ,unsigned int> > >
	{
		~map<long,unsigned int,less<long>,allocator<pair<long const ,unsigned int> > >();
	};

	struct map<unsigned int,UXElementStore::UXStringValueElement,less<unsigned int>,allocator<pair<unsigned int const ,UXElementStore::UXStringValueElement> > >
	{
		~map<unsigned int,UXElementStore::UXStringValueElement,less<unsigned int>,allocator<pair<unsigned int const ,UXElementStore::UXStringValueElement> > >();
	};

	struct map<unsigned long,_variant_t,less<unsigned long>,allocator<pair<unsigned long const ,_variant_t> > >
	{
		~map<unsigned long,_variant_t,less<unsigned long>,allocator<pair<unsigned long const ,_variant_t> > >();
	};

	struct map<unsigned short const *,unsigned short const *,less<unsigned short const *>,allocator<pair<unsigned short const * const,unsigned short const *> > >
	{
		~map<unsigned short const *,unsigned short const *,less<unsigned short const *>,allocator<pair<unsigned short const * const,unsigned short const *> > >();
	};

	struct pair<unsigned int,UXElementStore::UXStringValueElement>
	{
		~pair<unsigned int,UXElementStore::UXStringValueElement>();
	};

	struct pair<unsigned long,_variant_t>
	{
		~pair<unsigned long,_variant_t>();
	};

	struct runtime_error
	{
		runtime_error(char const *);
		runtime_error(runtime_error const &);
		virtual ~runtime_error();
	};

	struct shared_ptr<Concurrency::details::_ExceptionHolder>
	{
		~shared_ptr<Concurrency::details::_ExceptionHolder>();
	};

	struct shared_ptr<Concurrency::details::_Task_impl_base>
	{
		~shared_ptr<Concurrency::details::_Task_impl_base>();
	};

	struct shared_ptr<Concurrency::scheduler_interface>
	{
		~shared_ptr<Concurrency::scheduler_interface>();
	};

	struct shared_ptr<SystemSettings::Update::CMusErrorMapSingleton>
	{
		~shared_ptr<SystemSettings::Update::CMusErrorMapSingleton>();
	};

	struct shared_ptr<UxUsoMoStackShim>
	{
		~shared_ptr<UxUsoMoStackShim>();
	};

	struct shared_ptr<UxUsoOldStackShim>
	{
		~shared_ptr<UxUsoOldStackShim>();
	};

	struct shared_ptr<UxUsoShim>
	{
		~shared_ptr<UxUsoShim>();
	};

	class shared_ptr<UxUsoUpdateShim>
	{
		void _Setp<UxUsoUpdateShim>(UxUsoUpdateShim *,integral_constant<bool,0>);
	public:
		shared_ptr<UxUsoUpdateShim> & operator=(shared_ptr<UxUsoUpdateShim> const &);
		~shared_ptr<UxUsoUpdateShim>();
	};

	struct shared_ptr<function<void ()> >
	{
		~shared_ptr<function<void ()> >();
	};

	class shared_ptr<function<void (char const &)> >
	{
		void _Setp<function<void (char const &)> >(function<void (char const &)> *,integral_constant<bool,0>);
	public:
		~shared_ptr<function<void (char const &)> >();
	};

	class shared_ptr<unsigned char>
	{
		void _Setp<unsigned char>(unsigned char *,integral_constant<bool,0>);
	public:
		shared_ptr<unsigned char> & operator=(shared_ptr<unsigned char> const &);
		~shared_ptr<unsigned char>();
	};

	struct unique_lock<mutex>
	{
		~unique_lock<mutex>();
	};

	struct unique_ptr<Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore,default_delete<Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore> >
	{
		~unique_ptr<Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore,default_delete<Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore> >();
	};

	struct unique_ptr<Concurrency::details::_TaskProcHandle,default_delete<Concurrency::details::_TaskProcHandle> >
	{
		~unique_ptr<Concurrency::details::_TaskProcHandle,default_delete<Concurrency::details::_TaskProcHandle> >();
	};

	struct unique_ptr<TraceLoggingCorrelationVector,default_delete<TraceLoggingCorrelationVector> >
	{
		~unique_ptr<TraceLoggingCorrelationVector,default_delete<TraceLoggingCorrelationVector> >();
	};

	struct unique_ptr<UpdatePolicyHelper,default_delete<UpdatePolicyHelper> >
	{
		~unique_ptr<UpdatePolicyHelper,default_delete<UpdatePolicyHelper> >();
	};

	struct unique_ptr<void *,WnfSubscriberT<char>::HandleDeleter>
	{
		~unique_ptr<void *,WnfSubscriberT<char>::HandleDeleter>();
	};

	class vector<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem>,allocator<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem> > >
	{
		static void _Xlength();
		void _Assign_range<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem> *>(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem> *,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem> *,forward_iterator_tag);
		void _Change_array(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem> * const,unsigned __int64,unsigned __int64);
		void _Destroy(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem> *,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem> *);
		void _Tidy();
	public:
		Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem> * _Emplace_reallocate<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem> const &>(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem> * const,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem> const &);
		~vector<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem>,allocator<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem> > >();
	};

	class vector<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting>,allocator<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting> > >
	{
		static void _Xlength();
		void _Destroy(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting> *,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting> *);
	public:
		Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting> * _Emplace_reallocate<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting> const &>(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting> * const,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting> const &);
		~vector<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting>,allocator<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting> > >();
	};

	class vector<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting>,allocator<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting> > >
	{
		static void _Xlength();
		void _Destroy(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting> *,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting> *);
	public:
		Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting> * _Emplace_reallocate<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting> const &>(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting> * const,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting> const &);
		_Vector_iterator<_Vector_val<_Simple_types<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting> > > > erase(_Vector_const_iterator<_Vector_val<_Simple_types<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting> > > >);
		~vector<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting>,allocator<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting> > >();
	};

	class vector<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdatePolicyInfoSetting>,allocator<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdatePolicyInfoSetting> > >
	{
		static void _Xlength();
		void _Destroy(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdatePolicyInfoSetting> *,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdatePolicyInfoSetting> *);
	public:
		Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdatePolicyInfoSetting> * _Emplace_reallocate<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdatePolicyInfoSetting> const &>(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdatePolicyInfoSetting> * const,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdatePolicyInfoSetting> const &);
		~vector<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdatePolicyInfoSetting>,allocator<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdatePolicyInfoSetting> > >();
	};

	class vector<_List_unchecked_const_iterator<_List_val<_List_simple_types<unsigned int> >,_Iterator_base0>,allocator<_List_unchecked_const_iterator<_List_val<_List_simple_types<unsigned int> >,_Iterator_base0> > >
	{
		static void _Xlength();
		void _Reallocate_exactly(unsigned __int64);
	public:
		void assign(unsigned __int64,_List_unchecked_const_iterator<_List_val<_List_simple_types<unsigned int> >,_Iterator_base0> const &);
		~vector<_List_unchecked_const_iterator<_List_val<_List_simple_types<unsigned int> >,_Iterator_base0>,allocator<_List_unchecked_const_iterator<_List_val<_List_simple_types<unsigned int> >,_Iterator_base0> > >();
	};

	class vector<_WIN32_FIND_DATAW,allocator<_WIN32_FIND_DATAW> >
	{
		static void _Xlength();
		void _Change_array(_WIN32_FIND_DATAW * const,unsigned __int64,unsigned __int64);
		void _Tidy();
	public:
		_WIN32_FIND_DATAW & emplace_back<_WIN32_FIND_DATAW const &>(_WIN32_FIND_DATAW const &);
		_WIN32_FIND_DATAW * _Emplace_reallocate<_WIN32_FIND_DATAW const &>(_WIN32_FIND_DATAW * const,_WIN32_FIND_DATAW const &);
		~vector<_WIN32_FIND_DATAW,allocator<_WIN32_FIND_DATAW> >();
	};

	class vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
		static void _Xlength();
		void _Change_array(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > * const,unsigned __int64,unsigned __int64);
		void _Destroy(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *);
		void _Reallocate_exactly(unsigned __int64);
		void _Tidy();
	public:
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > * _Emplace_reallocate<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > &>(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > * const,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > &);
		vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >(vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > const &);
		~vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >();
	};

	class vector<shared_ptr<Concurrency::details::_Task_impl<unsigned char> >,allocator<shared_ptr<Concurrency::details::_Task_impl<unsigned char> > > >
	{
		static void _Xlength();
		void _Change_array(shared_ptr<Concurrency::details::_Task_impl<unsigned char> > * const,unsigned __int64,unsigned __int64);
		void _Destroy(shared_ptr<Concurrency::details::_Task_impl<unsigned char> > *,shared_ptr<Concurrency::details::_Task_impl<unsigned char> > *);
	public:
		shared_ptr<Concurrency::details::_Task_impl<unsigned char> > * _Emplace_reallocate<shared_ptr<Concurrency::details::_Task_impl<unsigned char> > const &>(shared_ptr<Concurrency::details::_Task_impl<unsigned char> > * const,shared_ptr<Concurrency::details::_Task_impl<unsigned char> > const &);
		~vector<shared_ptr<Concurrency::details::_Task_impl<unsigned char> >,allocator<shared_ptr<Concurrency::details::_Task_impl<unsigned char> > > >();
	};

	class vector<shared_ptr<UxUsoUpdateShim>,allocator<shared_ptr<UxUsoUpdateShim> > >
	{
		static void _Xlength();
		void _Assign_range<shared_ptr<UxUsoUpdateShim> *>(shared_ptr<UxUsoUpdateShim> *,shared_ptr<UxUsoUpdateShim> *,forward_iterator_tag);
		void _Destroy(shared_ptr<UxUsoUpdateShim> *,shared_ptr<UxUsoUpdateShim> *);
	public:
		shared_ptr<UxUsoUpdateShim> * _Emplace_reallocate<shared_ptr<UxUsoUpdateShim> const &>(shared_ptr<UxUsoUpdateShim> * const,shared_ptr<UxUsoUpdateShim> const &);
		~vector<shared_ptr<UxUsoUpdateShim>,allocator<shared_ptr<UxUsoUpdateShim> > >();
	};

	class vector<tagUsoUpdateIdentifier,allocator<tagUsoUpdateIdentifier> >
	{
		static void _Xlength();
		void _Change_array(tagUsoUpdateIdentifier * const,unsigned __int64,unsigned __int64);
		void _Reallocate_exactly(unsigned __int64);
	public:
		tagUsoUpdateIdentifier * _Emplace_reallocate<tagUsoUpdateIdentifier const &>(tagUsoUpdateIdentifier * const,tagUsoUpdateIdentifier const &);
		~vector<tagUsoUpdateIdentifier,allocator<tagUsoUpdateIdentifier> >();
	};

	class vector<unsigned char,allocator<unsigned char> >
	{
		static void _Xlength();
	public:
		~vector<unsigned char,allocator<unsigned char> >();
	};

	class vector<void *,allocator<void *> >
	{
		bool _Buy(unsigned __int64);
		static void _Xlength();
		void _Tidy();
	public:
		vector<void *,allocator<void *> >(vector<void *,allocator<void *> > const &);
		void assign<void * *,void>(void * *,void * *);
	};

	struct weak_ptr<Concurrency::details::_Task_impl_base>
	{
		~weak_ptr<Concurrency::details::_Task_impl_base>();
	};

	Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem> * _Insertion_sort_unchecked<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem> *,bool (*)(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem>,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem>)>(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem> *,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem> * const,bool (*)(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem>,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem>));
	Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting> * _Insertion_sort_unchecked<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting> *,bool (*)(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting>,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting>)>(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting> *,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting> * const,bool (*)(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting>,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting>));
	Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting> * _Insertion_sort_unchecked<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting> *,bool (*)(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting>,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting>)>(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting> *,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting> * const,bool (*)(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting>,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting>));
	nothrow_t const std::nothrow;
	piecewise_construct_t const std::piecewise_construct;
	std::_Really_trivial_ptr_iterator_tag _Ptr_move_cat<_WIN32_FIND_DATAW,_WIN32_FIND_DATAW>(_WIN32_FIND_DATAW * const &,_WIN32_FIND_DATAW * const &);
	std::_Really_trivial_ptr_iterator_tag _Ptr_move_cat<unsigned char,unsigned char>(unsigned char * const &,unsigned char * const &);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > * _Move_unchecked1<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *>(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::_General_ptr_iterator_tag);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > operator+<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,unsigned short const * const);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > to_wstring(unsigned long);
	std::pair<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem> *,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem> *> _Partition_by_median_guess_unchecked<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem> *,bool (*)(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem>,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem>)>(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem> *,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem> *,bool (*)(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem>,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem>));
	std::pair<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting> *,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting> *> _Partition_by_median_guess_unchecked<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting> *,bool (*)(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting>,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting>)>(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting> *,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting> *,bool (*)(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting>,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting>));
	std::pair<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting> *,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting> *> _Partition_by_median_guess_unchecked<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting> *,bool (*)(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting>,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting>)>(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting> *,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting> *,bool (*)(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting>,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting>));
	unsigned __int64 _Traits_find<char_traits<unsigned short> >(unsigned short const * const,unsigned __int64,unsigned __int64,unsigned short const * const,unsigned __int64);
	void _Deallocate<16,0>(void *,unsigned __int64);
	void _Med3_unchecked<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem> *,bool (*)(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem>,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem>)>(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem> *,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem> *,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem> *,bool (*)(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem>,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem>));
	void _Med3_unchecked<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting> *,bool (*)(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting>,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting>)>(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting> *,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting> *,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting> *,bool (*)(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting>,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting>));
	void _Med3_unchecked<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting> *,bool (*)(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting>,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting>)>(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting> *,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting> *,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting> *,bool (*)(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting>,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting>));
	void _Sort_unchecked<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem> *,bool (*)(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem>,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem>)>(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem> *,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem> *,__int64,bool (*)(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem>,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem>));
	void _Sort_unchecked<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting> *,bool (*)(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting>,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting>)>(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting> *,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting> *,__int64,bool (*)(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting>,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting>));
	void _Sort_unchecked<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting> *,bool (*)(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting>,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting>)>(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting> *,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting> *,__int64,bool (*)(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting>,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting>));
	void _Xlength_error(char const *);
	void iter_swap<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem> *,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem> *>(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem> *,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusSortableDescriptionListItem> *);
	void iter_swap<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting> *,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting> *>(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting> *,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateDetailsInfoSetting> *);
	void iter_swap<Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting> *,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting> *>(Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting> *,Microsoft::WRL::ComPtr<SystemSettings::Update::CMusUpdateHistoryInfoSetting> *);
	void rethrow_exception(std::exception_ptr);
	void swap<_WIN32_FIND_DATAW,void>(_WIN32_FIND_DATAW &,_WIN32_FIND_DATAW &);
};

namespace wil
{
	struct ActivityBase<MusUpdateLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<MusUpdateLogging,_TlgReflectorTag_Param0IsProviderType>
		{
			~ActivityData<MusUpdateLogging,_TlgReflectorTag_Param0IsProviderType>();
		};

		virtual bool NotifyFailure(FailureInfo const &);
		void Stop(long);
		~ActivityBase<MusUpdateLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>();
	};

	class Feature<__WilFeatureTraits_Feature_GetMeUpToDate>
	{
		static Variant_GetMeUpToDate GetCachedVariantState();
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	public:
		static Variant_GetMeUpToDate __private_GetVariant(VariantReportingKind,bool);
	};

	class Feature<__WilFeatureTraits_Feature_SmartScheduler>
	{
		static Variant_SmartScheduler GetCachedVariantState();
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	public:
		static Variant_SmartScheduler __private_GetVariant(VariantReportingKind,bool);
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
		StoredFailureInfo(StoredFailureInfo const &);
		void SetFailureInfo(FailureInfo const &);
	};

	struct ThreadErrorContext
	{
		~ThreadErrorContext();
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

	struct com_ptr_t<IFlightSettingsAPIBroker,err_returncode_policy>
	{
		~com_ptr_t<IFlightSettingsAPIBroker,err_returncode_policy>();
	};

	struct com_ptr_t<IJsonObject,err_returncode_policy>
	{
		~com_ptr_t<IJsonObject,err_returncode_policy>();
	};

	struct com_ptr_t<IJsonObjectItem,err_returncode_policy>
	{
		~com_ptr_t<IJsonObjectItem,err_returncode_policy>();
	};

	struct com_ptr_t<IJsonValue,err_returncode_policy>
	{
		~com_ptr_t<IJsonValue,err_returncode_policy>();
	};

	struct com_ptr_t<IMoUsoOrchestrator,err_exception_policy>
	{
		~com_ptr_t<IMoUsoOrchestrator,err_exception_policy>();
	};

	struct com_ptr_t<IMoUsoOrchestrator,err_returncode_policy>
	{
		~com_ptr_t<IMoUsoOrchestrator,err_returncode_policy>();
	};

	struct com_ptr_t<IMoUsoUpdate,err_returncode_policy>
	{
		~com_ptr_t<IMoUsoUpdate,err_returncode_policy>();
	};

	struct com_ptr_t<IMoUsoUpdateCollection,err_returncode_policy>
	{
		~com_ptr_t<IMoUsoUpdateCollection,err_returncode_policy>();
	};

	struct com_ptr_t<IUpdateManager,err_returncode_policy>
	{
		~com_ptr_t<IUpdateManager,err_returncode_policy>();
	};

	struct com_ptr_t<IUpdatePolicyReader,err_returncode_policy>
	{
		~com_ptr_t<IUpdatePolicyReader,err_returncode_policy>();
	};

	struct com_ptr_t<IUpdateSessionOrchestrator,err_exception_policy>
	{
		~com_ptr_t<IUpdateSessionOrchestrator,err_exception_policy>();
	};

	struct com_ptr_t<IUpdateSessionOrchestrator,err_returncode_policy>
	{
		~com_ptr_t<IUpdateSessionOrchestrator,err_returncode_policy>();
	};

	struct com_ptr_t<IUsoSession,err_returncode_policy>
	{
		~com_ptr_t<IUsoSession,err_returncode_policy>();
	};

	struct com_ptr_t<IUsoSessionCollection,err_returncode_policy>
	{
		~com_ptr_t<IUsoSessionCollection,err_returncode_policy>();
	};

	struct com_ptr_t<IUsoUpdate,err_returncode_policy>
	{
		~com_ptr_t<IUsoUpdate,err_returncode_policy>();
	};

	struct com_ptr_t<IUsoUpdateCollection,err_returncode_policy>
	{
		~com_ptr_t<IUsoUpdateCollection,err_returncode_policy>();
	};

	struct com_ptr_t<IUxUpdateManager,err_returncode_policy>
	{
		~com_ptr_t<IUxUpdateManager,err_returncode_policy>();
	};

	struct com_ptr_t<MusWOSCSettings,err_returncode_policy>
	{
		~com_ptr_t<MusWOSCSettings,err_returncode_policy>();
	};

	struct com_ptr_t<Windows::Internal::Flighting::OneSettings::IOneSettingsPayload,err_returncode_policy>
	{
		~com_ptr_t<Windows::Internal::Flighting::OneSettings::IOneSettingsPayload,err_returncode_policy>();
	};

	struct com_ptr_t<Windows::Internal::Flighting::OneSettings::IOneSettingsPayloadStatics,err_returncode_policy>
	{
		~com_ptr_t<Windows::Internal::Flighting::OneSettings::IOneSettingsPayloadStatics,err_returncode_policy>();
	};

	namespace details
	{
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
		public:
			void QueueBackgroundSRUMUsageReporting(unsigned int,unsigned short,unsigned int);
			void RecordFeatureUsage(unsigned int,wil_details_ServiceReportingKind,unsigned __int64);
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
			bool Log_HrIfMsg(void *,unsigned int,char const *,long,bool,char const *,...);
			long Log_CaughtException(void *,unsigned int,char const *);
			long Log_Hr(void *,unsigned int,char const *,long);
			long Log_IfFailedMsg(void *,unsigned int,char const *,long,char const *,...);
			long Log_IfFailedWithExpected(void *,unsigned int,char const *,long,unsigned int,...);
			long Return_CaughtException(void *,unsigned int,char const *);
			long Return_GetLastError(void *,unsigned int,char const *);
			long Return_Win32(void *,unsigned int,char const *,unsigned long);
			void FailFast_Unexpected(void *,unsigned int,char const *);
			void Return_Hr(void *,unsigned int,char const *,long);
			void Return_HrMsg(void *,unsigned int,char const *,long,char const *,...);
			void _FailFastImmediate_Unexpected();
			void _FailFast_GetLastError(void *,unsigned int,char const *);
			void _FailFast_Hr(void *,unsigned int,char const *,long);
			void _FailFast_Unexpected(void *,unsigned int,char const *);
			void _Log_GetLastError(void *,unsigned int,char const *);
			void _Log_Hr(void *,unsigned int,char const *,long);
			void _Throw_Hr(void *,unsigned int,char const *,long);
		};

		struct out_param_t<wistd::unique_ptr<TraceLoggingCorrelationVector,wistd::default_delete<TraceLoggingCorrelationVector> > >
		{
			~out_param_t<wistd::unique_ptr<TraceLoggingCorrelationVector,wistd::default_delete<TraceLoggingCorrelationVector> > >();
		};

		struct shared_buffer
		{
			bool create(void const *,unsigned __int64);
		};

		namespace static_lazy<UsoUpdateEnhancedTraceLogging>
		{
			struct Completer
			{
				~Completer();
			};

		};

		FEATURE_ENABLED_STATE WilApiImpl_GetFeatureEnabledState(unsigned int,FEATURE_CHANGE_TIME);
		bool (* g_pfnGetModuleInformation)(void *,unsigned int *,char *,unsigned __int64);
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
		long (* g_pfnRunFunctorWithExceptionFilter)(details::IFunctor &,details::IFunctorHost &,void *);
		long GetLastErrorFailHr();
		long GetLastErrorFailHr(void *,unsigned int,char const *,char const *,char const *,void *);
		long NtStatusToHr(long);
		long RecognizeCaughtExceptionFromCallback(unsigned short *,unsigned __int64);
		long ReportFailure_CaughtException(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,SupportedExceptions);
		long ReportFailure_CaughtExceptionCommon(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,unsigned short *,unsigned __int64,SupportedExceptions);
		long ReportFailure_GetLastErrorHr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		long ReportFailure_Win32(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,unsigned long);
		long ResultFromCaughtExceptionInternal(unsigned short *,unsigned __int64,bool *);
		long RunFunctorWithExceptionFilter(details::IFunctor &,details::IFunctorHost &,void *);
		long StringCchPrintfA(char *,unsigned __int64,char const *,...);
		shutdown_aware_object<details::EnabledStateManager> g_enabledStateManager;
		shutdown_aware_object<details::FeatureStateManager> g_featureStateManager;
		unsigned char (* g_pfnRtlDllShutdownInProgress)();
		unsigned char * WriteResultString<char const *>(unsigned char *,unsigned char *,char const *,char const * *);
		unsigned char * WriteResultString<unsigned short const *>(unsigned char *,unsigned char *,unsigned short const *,unsigned short const * *);
		unsigned char RtlDllShutdownInProgress();
		unsigned int WilApiImpl_GetFeatureVariant(unsigned int,FEATURE_CHANGE_TIME,unsigned int *,int *);
		unsigned long (* g_pfnRtlNtStatusToDosErrorNoTeb)(long);
		unsigned long ReportFailure_GetLastError(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		unsigned long RtlNtStatusToDosErrorNoTeb(long);
		unsigned short * LogStringPrintf(unsigned short *,unsigned short const *,unsigned short const *,...);
		void (* g_pfnDebugBreak)();
		void (* g_pfnFailFastInLoaderCallout)();
		void (* g_pfnGetContextAndNotifyFailure)(FailureInfo *,char *,unsigned __int64);
		void (* g_pfnLoggingCallback)(FailureInfo const &);
		void (* g_pfnOriginateCallback)(FailureInfo const &);
		void (* g_pfnRaiseFailFastException)(_EXCEPTION_RECORD *,_CONTEXT *,unsigned long);
		void (* g_pfnRethrow)();
		void (* g_pfnTelemetryCallback)(bool,FailureInfo const &);
		void (* g_pfnThrowResultException)(FailureInfo const &);
		void DebugBreak();
		void FailFastInLoaderCallout();
		void FeatureLoggingHook(unsigned int,FEATURE_LOGGED_TRAITS const *,FEATURE_ERROR const *,int,wil_ReportingKind const *,wil_VariantReportingKind const *,unsigned char,unsigned __int64);
		void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
		void LogFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,bool,unsigned short *,unsigned __int64,char *,unsigned __int64,FailureInfo *);
		void PrintLoggingMessage(unsigned short *,unsigned __int64,char const *,char *);
		void RecordFeatureUsageCallback(unsigned int,wil_details_ServiceReportingKind,unsigned int,wil_details_FeaturePropertyCache *,wil_details_RecordUsageResult *);
		void RecordSRUMFeatureUsage(unsigned int,unsigned int,unsigned int);
		void ReportFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Hr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long);
		void ReportFailure_HrMsg(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,char const *,char *);
		void ReportFailure_Msg(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,char const *,char *);
		void Rethrow();
		void ThrowResultExceptionInternal(FailureInfo const &);
		void WilApiImpl_RecordFeatureError(unsigned int,FEATURE_ERROR const *);
		void WilApiImpl_RecordFeatureUsage(unsigned int,unsigned int,unsigned int,char const *);
		void WilApiImpl_SubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
		void WilApiImpl_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
		void WilDynamicLoadRaiseFailFastException(_EXCEPTION_RECORD *,_CONTEXT *,unsigned long);
		void WilFailFast(FailureInfo const &);
		void WilRaiseFailFastException(_EXCEPTION_RECORD *,_CONTEXT *,unsigned long);
	};

	namespace details_abi
	{
		struct FeatureStateData
		{
			bool RecordFeatureError(unsigned int,FEATURE_ERROR const &);
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
			long CreateFromValueInternal(unsigned short const *,bool,unsigned __int64);
			static long GetValueFromSemaphore(void *,long *);
			static long TryGetValueInternal(unsigned short const *,bool,unsigned __int64 *,bool *);
		public:
			static long TryGetPointer(unsigned short const *,void * *);
			~SemaphoreValue();
		};

		struct SerializedFailure
		{
			static bool Serialize(FEATURE_ERROR const &,unsigned __int64 *,void *,unsigned __int64);
		};

		struct SubscriptionList
		{
			void OnSignaled(srwlock &);
			void SubscribeUnderLock(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
			void Unsubscribe(srwlock &,FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
		};

		struct ThreadLocalData
		{
			bool EnsureAllocated(bool);
			void Clear();
			void SetLastError(FailureInfo const &);
		};

		struct ThreadLocalFailureInfo
		{
			void Set(FailureInfo const &,unsigned int);
		};

		struct ThreadLocalStorage<ThreadLocalData>
		{
			ThreadLocalData * GetLocal(bool);
			~ThreadLocalStorage<ThreadLocalData>();
		};

		struct ThreadLocalStorage<details::ThreadFailureCallbackHolder *>
		{
			details::ThreadFailureCallbackHolder * * GetLocal(bool);
			~ThreadLocalStorage<details::ThreadFailureCallbackHolder *>();
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
	bool (* g_pfnWilFailFast)(wil::FailureInfo const &);
	bool g_fBreakOnFailure;
	bool g_fIsDebuggerPresent;
	bool g_fResultFailFastUnknownExceptions;
	bool g_fResultOutputDebugString;
	bool g_fResultThrowPlatformException;
	long (* g_pfnResultFromCaughtException)();
	long GetFailureLogString(unsigned short *,unsigned __int64,wil::FailureInfo const &);
	long ResultFromCaughtException();
	long wnf_query_nothrow<_RM_QUIET_MODE_DATA>(_WNF_STATE_NAME const &,bool *,_RM_QUIET_MODE_DATA *,wil::WNF_CHANGE_STAMP_STRUCT *);
	void RethrowCaughtException();
	void SetLastError(wil::FailureInfo const &);
	void ThrowResultException(wil::FailureInfo const &);
};

namespace wistd
{
	struct function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>
	{
		~function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>();
	};

	struct unique_ptr<TraceLoggingCorrelationVector,default_delete<TraceLoggingCorrelationVector> >
	{
		~unique_ptr<TraceLoggingCorrelationVector,default_delete<TraceLoggingCorrelationVector> >();
	};

	struct unique_ptr<_PFIU_HISTORY_ENTRY,wil::process_heap_deleter>
	{
		~unique_ptr<_PFIU_HISTORY_ENTRY,wil::process_heap_deleter>();
	};

	void __throw_bad_function_call();
};

;
ATL::CComModule _Module;
FEATURE_ENABLED_STATE (* g_wil_details_apiGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME);
FEATURE_ENABLED_STATE (* g_wil_details_internalGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME);
HINSTANCE__ * g_hInstance;
HINSTANCE__ * g_wil_details_ntdllModuleHandle;
_GUID const GUID_OTAOS;
_GUID const GUID_OTAUserInstallable;
_GUID const GUID_OTCOS;
_GUID const MicrosoftWindowsUpdateUxControlGuid;
__type_info_node __type_info_root_node;
bool IsEmptyOrNullString(unsigned short const *);
bool IsPrivilegePresentOnToken(void *,_LUID);
bool IsTokenPrivilegeAllowed(void *,_LUID);
int _LUAIsTokenAdmin(void *);
int g_wil_details_preventOnDemandStagingConfigReads;
int wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(wil_details_FeaturePropertyCache *,unsigned int,wil_details_ServiceReportingKind,unsigned int,unsigned __int64);
int wil_details_SetEnabledAndHasNotificationStateCallback(wil_details_FeaturePropertyCache *,void *);
int wil_details_SetPropertyCacheOpportunityCallback(wil_details_FeaturePropertyCache *,void *);
int wil_details_SetPropertyCacheUsageCallback(wil_details_FeaturePropertyCache *,void *);
int wil_details_StagingConfig_AreAnyFeaturesConfigured(wil_details_StagingConfig *);
int wil_details_StagingConfig_QueryFeatureState(wil_details_StagingConfig *,wil_FeatureState *,unsigned int,int);
long (* g_wil_details_pfnNtQueryWnfStateData)(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long (* g_wil_details_pfnNtUpdateWnfStateData)(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long (* g_wil_details_pfnRtlSubscribeWnfStateChangeNotification)(__WIL__WNF_USER_SUBSCRIPTION * *,__WIL__WNF_STATE_NAME,unsigned long,long (*)(__WIL__WNF_STATE_NAME,unsigned long,__WIL__WNF_TYPE_ID *,void *,void const *,unsigned long),void *,__WIL__WNF_TYPE_ID *,unsigned long,unsigned long);
long (* g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion)(__WIL__WNF_USER_SUBSCRIPTION *);
long AppendString(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &,unsigned short const * const);
long AssignString(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
long AssignString(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &,unsigned short const * const);
long CombineStringsWithSeparator(unsigned short const *,unsigned short const *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &,unsigned __int64,unsigned short);
long EncodeBase64W(unsigned char const *,int,unsigned short * *);
long GetResourceStringById(unsigned short const *,Windows::ApplicationModel::Resources::Core::IResourceMap *,HSTRING__ * *);
long GetSystemProfileResourceMap(unsigned short const *,unsigned short const *,Windows::ApplicationModel::Resources::Core::IResourceManager * *,Windows::ApplicationModel::Resources::Core::IResourceMap * *);
long GetWUDeviceID(_GUID *);
long GuidToString(unsigned short *,unsigned __int64,_GUID const *);
long SHOpenEffectiveToken(unsigned long,int,void * *);
long StringCbLengthW(unsigned short const *,unsigned __int64,unsigned __int64 *);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCopyA(char *,unsigned __int64,char const *);
long StringCchCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchPrintfExW(unsigned short *,unsigned __int64,unsigned short * *,unsigned __int64 *,unsigned long,unsigned short const *,...);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long StringCchVPrintfW(unsigned short *,unsigned __int64,unsigned short const *,char *);
long StringToGuid(unsigned short const *,_GUID *);
long TokenizeWString(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,unsigned short const *,std::vector<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > &);
long WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Foundation::IAsyncOperation<bool> >(Windows::Foundation::IAsyncOperation<bool> *,tagCOWAIT_FLAGS,void *);
long wil_details_NtQueryWnfStateData(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long wil_details_NtUpdateWnfStateData(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long wil_details_StagingConfig_FireNotification(wil_details_StagingConfig *,unsigned int,unsigned short,int);
long wil_details_StagingConfig_Load(wil_details_StagingConfig *,wil_FeatureStore,unsigned __int64,void *,int);
long wil_details_WriteSRUMWnfUsageBuffer(wil::details_abi::heap_vector<wil_details_FeatureUsageSRUM> *);
unsigned int (* g_wil_details_apiGetFeatureVariant)(unsigned int,FEATURE_CHANGE_TIME,unsigned int *,int *);
unsigned int (* g_wil_details_internalGetFeatureVariant)(unsigned int,FEATURE_CHANGE_TIME,unsigned int *,int *);
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Resources_Core_ResourceManager;
unsigned short const * const RuntimeClass_Windows_Foundation_PropertyValue;
unsigned short const * const RuntimeClass_Windows_Foundation_Uri;
unsigned short const * const RuntimeClass_Windows_Internal_Flighting_OneSettings_OneSettingsPayload;
unsigned short const * const RuntimeClass_Windows_System_Launcher;
unsigned short const * const gc_propIdActiveHoursMaxRangeText;
unsigned short const * const gc_propIdIsAccessibleChangeActiveHoursLabel;
unsigned short const * const gc_propIdIsAccessibleEndTimeHeaderLabel;
unsigned short const * const gc_propIdIsAccessibleStartTimeHeaderLabel;
unsigned short const * const gc_propIdIsActiveHoursRangePolicyEnabled;
unsigned short const * const gc_propIdIsConfidenceLow;
unsigned short const * const gc_propIdLowConfidence;
unsigned short const * const gc_propIdPolicyActiveHoursMaxRangeText;
unsigned short const * const gc_szActiveHoursButtonSubHeaderText;
unsigned short const * const gc_szAdvancedSettingsButtonSubHeaderText;
unsigned short const * const gc_szAnticipationLinkDescription;
unsigned short const * const gc_szAnticipationLinkHeader;
unsigned short const * const gc_szBrokerArgEngagedRebootReminder;
unsigned short const * const gc_szBrokerArgForcedReboot;
unsigned short const * const gc_szBrokerArgForcedRebootReminder;
unsigned short const * const gc_szBrokerArgForcedRebootRetry;
unsigned short const * const gc_szBrokerArgReboot;
unsigned short const * const gc_szBrokerArgRebootDialog;
unsigned short const * const gc_szDisablePauseUpdateReasonText;
unsigned short const * const gc_szFeatureUpdatePauseExpiryDateText;
unsigned short const * const gc_szGetSeekerUpdateLink;
unsigned short const * const gc_szHasDisablePauseUpdateReasonText;
unsigned short const * const gc_szHasFeatureUpdatePauseExpiryDateText;
unsigned short const * const gc_szHasPauseUpdateExpiryDate;
unsigned short const * const gc_szHasQualityUpdatePauseExpiryDate;
unsigned short const * const gc_szHasSeekerUpdateErrorText;
unsigned short const * const gc_szMoSetupRegValErrorCode;
unsigned short const * const gc_szMoSetupRegValLocationCode;
unsigned short const * const gc_szMoSetupRegValTimeStamp;
unsigned short const * const gc_szNotifyTrayIconClassName;
unsigned short const * const gc_szNotifyTrayIconWindowName;
unsigned short const * const gc_szPauseUntilText;
unsigned short const * const gc_szPauseUpdateButtonHeaderText;
unsigned short const * const gc_szPauseUpdateButtonSubHeaderText;
unsigned short const * const gc_szPauseUpdateExpiryDateText;
unsigned short const * const gc_szPauseUpdateGroupTitleText;
unsigned short const * const gc_szPropIdAcceptEulaButtonDescription;
unsigned short const * const gc_szPropIdAccessibleActionButtonName;
unsigned short const * const gc_szPropIdAccessibleAvailableUpdatesName;
unsigned short const * const gc_szPropIdAccessibleCategoryLabel;
unsigned short const * const gc_szPropIdAccessibleListItemDescription;
unsigned short const * const gc_szPropIdActionDescription;
unsigned short const * const gc_szPropIdActiveHoursActionLinkLabel;
unsigned short const * const gc_szPropIdActiveHoursCurrent;
unsigned short const * const gc_szPropIdActiveHoursDescription;
unsigned short const * const gc_szPropIdActiveHoursDialogErrorText;
unsigned short const * const gc_szPropIdActiveHoursDialogErrorTextVisibility;
unsigned short const * const gc_szPropIdActiveHoursDialogIsSaveEnabled;
unsigned short const * const gc_szPropIdActiveHoursDialogTriggerCancel;
unsigned short const * const gc_szPropIdActiveHoursEndTime;
unsigned short const * const gc_szPropIdActiveHoursRecommendationLink;
unsigned short const * const gc_szPropIdActiveHoursStartTime;
unsigned short const * const gc_szPropIdAnnouncementDescription;
unsigned short const * const gc_szPropIdAnnouncementImage;
unsigned short const * const gc_szPropIdAnnouncementTitle;
unsigned short const * const gc_szPropIdCancelButtonDescription;
unsigned short const * const gc_szPropIdContextDescription;
unsigned short const * const gc_szPropIdDescription;
unsigned short const * const gc_szPropIdDialogHeader;
unsigned short const * const gc_szPropIdDisabelUXDescription;
unsigned short const * const gc_szPropIdDisabelUXDescriptionVisibility;
unsigned short const * const gc_szPropIdDynamicErrorText;
unsigned short const * const gc_szPropIdDynamicLinkText;
unsigned short const * const gc_szPropIdDynamicNormalText;
unsigned short const * const gc_szPropIdDynamicURL;
unsigned short const * const gc_szPropIdErrorDescription;
unsigned short const * const gc_szPropIdFlyoutLink;
unsigned short const * const gc_szPropIdGlobalPolicyConfiguredLink;
unsigned short const * const gc_szPropIdHasActionDescription;
unsigned short const * const gc_szPropIdHasContextDescription;
unsigned short const * const gc_szPropIdHasDynamicErrorText;
unsigned short const * const gc_szPropIdHasDynamicLink;
unsigned short const * const gc_szPropIdHasDynamicNormalText;
unsigned short const * const gc_szPropIdHasErrorDescription;
unsigned short const * const gc_szPropIdHasHolisticErrorDescription;
unsigned short const * const gc_szPropIdHasMoreInfoURL;
unsigned short const * const gc_szPropIdHasMoreInfoURL2;
unsigned short const * const gc_szPropIdHasMoreInfoURL3;
unsigned short const * const gc_szPropIdHasPolicyAsterisk;
unsigned short const * const gc_szPropIdHasProductAnnouncementTitle;
unsigned short const * const gc_szPropIdHasProductAnnouncemntActionURL;
unsigned short const * const gc_szPropIdHasProductAnnouncemntImage;
unsigned short const * const gc_szPropIdHasProductAnnouncmentDescription;
unsigned short const * const gc_szPropIdHasRestartOptionsButton;
unsigned short const * const gc_szPropIdHasRetryLink;
unsigned short const * const gc_szPropIdHasSupportInfoURL;
unsigned short const * const gc_szPropIdHasUpdateSubStatus;
unsigned short const * const gc_szPropIdHeader;
unsigned short const * const gc_szPropIdHolisticErrorDescription;
unsigned short const * const gc_szPropIdIsAlert;
unsigned short const * const gc_szPropIdIsApplicable;
unsigned short const * const gc_szPropIdIsEnabled;
unsigned short const * const gc_szPropIdIsEngagedReboot;
unsigned short const * const gc_szPropIdIsFeatureCommitted;
unsigned short const * const gc_szPropIdIsIndeterminate;
unsigned short const * const gc_szPropIdIsNeutral;
unsigned short const * const gc_szPropIdIsPause;
unsigned short const * const gc_szPropIdIsPickerSelected;
unsigned short const * const gc_szPropIdIsProgressState;
unsigned short const * const gc_szPropIdIsUpToDate;
unsigned short const * const gc_szPropIdIsUpdating;
unsigned short const * const gc_szPropIdIsWarning;
unsigned short const * const gc_szPropIdMinuteIncrement;
unsigned short const * const gc_szPropIdMoreInfoURL;
unsigned short const * const gc_szPropIdMoreInfoURL2;
unsigned short const * const gc_szPropIdMoreInfoURL3;
unsigned short const * const gc_szPropIdNewLink;
unsigned short const * const gc_szPropIdPossibleValues;
unsigned short const * const gc_szPropIdProductAnnouncementDescription;
unsigned short const * const gc_szPropIdProductAnnouncementTitle;
unsigned short const * const gc_szPropIdProductAnnouncemntActionButtonText;
unsigned short const * const gc_szPropIdProductAnnouncemntActionURL;
unsigned short const * const gc_szPropIdProductAnnouncemntImage;
unsigned short const * const gc_szPropIdProductAnnouncemntImageDescription;
unsigned short const * const gc_szPropIdPublishedOn;
unsigned short const * const gc_szPropIdRestartOptionsPageTitleText;
unsigned short const * const gc_szPropIdRestartScheduleDescription;
unsigned short const * const gc_szPropIdRetryLinkDescription;
unsigned short const * const gc_szPropIdScheduledTime;
unsigned short const * const gc_szPropIdShouldShowFUHyperLink;
unsigned short const * const gc_szPropIdStatusDescription;
unsigned short const * const gc_szPropIdSupportInfoURL;
unsigned short const * const gc_szPropIdTargetPage;
unsigned short const * const gc_szPropIdTitle;
unsigned short const * const gc_szPropIdUpdateSettingsGroupTitleText;
unsigned short const * const gc_szPropIdUpdateStatusGroupTitleText;
unsigned short const * const gc_szPropIdUpdateSubStatusText;
unsigned short const * const gc_szPropIdUpdatesCount;
unsigned short const * const gc_szPropIdValue;
unsigned short const * const gc_szQualityUpdatePauseExpiryDateText;
unsigned short const * const gc_szRelatedLinksDescription;
unsigned short const * const gc_szSeekerUXTitleText;
unsigned short const * const gc_szSeekerUpdateErrorText;
unsigned short const * const gc_szStorageLinkHeader;
unsigned short const * const gc_szSystemInfoLinkHeader;
unsigned short const * const gc_szTargetPageStorageSense;
unsigned short const * const gc_szTipsLinkDescription;
unsigned short const * const gc_szTipsLinkHeader;
unsigned short const * const gc_szUpdateHistoryButtonSubHeaderText;
unsigned short const * const gc_szUpdatePolicyExample1Text;
unsigned short const * const gc_szUpdatePolicyExample2Text;
unsigned short const * const gc_szUpdatePolicyExampleDescriptionText;
unsigned short const * const gc_szUpdatePolicyGroupTitleText;
unsigned short const * const gc_szUpdatePolicyLinkLearnMore;
unsigned short const * const gc_szUpdatePolicyName;
unsigned short const * const gc_szUpdatePolicySource;
unsigned short const * const gc_szUpdatePolicyType;
unsigned short const * const gc_szUsoClientId;
void (* g_wil_details_RecordSRUMFeatureUsage)(unsigned int,unsigned int,unsigned int);
void (* g_wil_details_apiRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_apiSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_apiUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_internalRecordFeatureError)(unsigned int,FEATURE_ERROR const *);
void (* g_wil_details_internalRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_internalSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_internalUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_pfnFeatureLoggingHook)(unsigned int,FEATURE_LOGGED_TRAITS const *,FEATURE_ERROR const *,int,wil_ReportingKind const *,wil_VariantReportingKind const *,unsigned char,unsigned __int64);
void (* g_wil_details_recordFeatureUsage)(unsigned int,wil_details_ServiceReportingKind,unsigned int,wil_details_FeaturePropertyCache *,wil_details_RecordUsageResult *);
void * operator new(unsigned __int64);
void * operator new(unsigned __int64,std::nothrow_t const &);
void * operator new[](unsigned __int64);
void * operator new[](unsigned __int64,std::nothrow_t const &);
void _TlgWriteActivityAutoStop<70368744177664,5>(_TlgProvider_t const *,_GUID const *);
void __ArrayUnwind(void *,unsigned __int64,unsigned __int64,void (*)(void *));
void __scrt_initialize_type_info();
void __scrt_throw_std_bad_alloc();
void __scrt_throw_std_bad_array_new_length();
void __scrt_uninitialize_type_info();
void _com_issue_error(long);
void operator delete(void *);
void operator delete(void *,std::nothrow_t const &);
void operator delete(void *,unsigned __int64);
void operator delete(void *,void *);
void operator delete[](void *);
void operator delete[](void *,unsigned __int64);
void wil_details_FeaturePropertyCache_ReportUsageToService(wil_details_FeaturePropertyCache *,unsigned int,FEATURE_LOGGED_TRAITS const *,int,wil_ReportingKind,unsigned __int64);
void wil_details_FeaturePropertyCache_ReportVariantUsageToService(wil_details_FeatureVariantPropertyCache *,unsigned int,FEATURE_LOGGED_TRAITS const *,int,unsigned char,wil_VariantReportingKind,unsigned __int64);
