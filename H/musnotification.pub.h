namespace ATL
{
	struct CAtlException
	{
		CAtlException(long);
	};

	struct CComBSTR
	{
		~CComBSTR();
	};

	struct CComCriticalSection
	{
		long Init();
	};

	struct CComPtr<IAction>
	{
		~CComPtr<IAction>();
	};

	struct CComPtr<IActionCollection>
	{
		~CComPtr<IActionCollection>();
	};

	struct CComPtr<IExecAction>
	{
		~CComPtr<IExecAction>();
	};

	struct CComPtr<IMaintenanceSettings>
	{
		~CComPtr<IMaintenanceSettings>();
	};

	struct CComPtr<IRegisteredTask>
	{
		~CComPtr<IRegisteredTask>();
	};

	struct CComPtr<ITaskDefinition>
	{
		~CComPtr<ITaskDefinition>();
	};

	struct CComPtr<ITaskSettings3>
	{
		~CComPtr<ITaskSettings3>();
	};

	struct CComPtr<ITaskSettings>
	{
		~CComPtr<ITaskSettings>();
	};

	struct CComPtr<IUpdateSessionOrchestrator>
	{
		~CComPtr<IUpdateSessionOrchestrator>();
	};

	struct CComPtr<IUsoSession>
	{
		~CComPtr<IUsoSession>();
	};

	struct CComPtr<IUsoUpdate>
	{
		~CComPtr<IUsoUpdate>();
	};

	struct CComPtr<IUsoUpdateCollection>
	{
		~CComPtr<IUsoUpdateCollection>();
	};

	void AtlThrowImpl(long);
};

class ActiveHoursUtil
{
protected:
	static int IsValidInputToScheduleReboot(_SYSTEMTIME);
	static unsigned short const * const msc_rebootOutsideOfActiveHours;
public:
	static long GetActiveHoursIntervalLimit(MusActiveHoursScenario,IUsoSession *,unsigned short *);
	static long GetDeviceActiveHours(IUsoSession *,_TlgProvider_t const * const,MusActiveHoursScenario,unsigned short *,unsigned short *);
	static long GetNextRebootNotificationTime(IUsoSession *,_TlgProvider_t const * const,MusActiveHoursScenario,bool,_SYSTEMTIME,unsigned long,_SYSTEMTIME *);
	static long GetNextRebootTime(IUsoSession *,_TlgProvider_t const * const,MusActiveHoursScenario,bool,_SYSTEMTIME,_SYSTEMTIME *);
	static long IsCurrentTimeInActiveHoursRange(IUsoSession *,_TlgProvider_t const * const,MusActiveHoursScenario,unsigned short,unsigned short,int *);
	static long StoreActiveHourStates(IUsoSession *,_TlgProvider_t const * const,bool,unsigned short,unsigned short,MusActiveHoursScenario);
};

struct BatteryUtil
{
	static bool IsBatterySaverEnabled();
	static bool IsOnACPower();
};

struct BrokerLogHelper
{
	static long StartLogTracing();
	static unsigned short const * const sc_szTelemetryNameBroker;
};

struct CCoInit
{
	~CCoInit();
};

struct ConfigUtil
{
	static long CheckIfUserLoggedInWhenMgmtPolicySet(int *);
};

class EngagedReboot
{
protected:
	static MusUxState GetEngagedRebootNotificationState(RebootTransitionArgs);
	static long LaunchSettingsWithUserScheduledReboot(RebootTransitionArgs,unsigned short const *);
	static long PostponeForcedReboot(RebootTransitionArgs);
	static long ProcessUserResponse(unsigned long,RebootTransitionArgs);
	static long ScheduleRebootFailedDialog(RebootTransitionArgs,unsigned long);
	static long ShowRebootFailedDialog(RebootTransitionArgs);
	static long SnoozeForcedReboot(RebootTransitionArgs,unsigned long);
	static unsigned long GetSecondReminderInDays(RebootTransitionArgs);
public:
	static RebootStateAction const * const sc_rgRebootActionMap;
	static int EvaluatEngagedRebootCondition(RebootTransitionArgs);
	static int EvaluateForcedRebootCondition(RebootTransitionArgs);
	static long CreateInstance(RebootWorkflowBase * *);
	static long ExecuteEngagedReboot(RebootTransitionArgs);
	static long ExecuteEngagedRestartReminder(RebootTransitionArgs);
	static long ExecuteForcedReboot(RebootTransitionArgs);
	static long ExecuteReboot(RebootTransitionArgs);
	static long ExecuteStateAction(RebootState,RebootTransitionArgs);
	static long PostponeRebootDialog(RebootTransitionArgs);
	static long ScheduleForcedRestart(RebootTransitionArgs);
	static long ScheduleNextForcedReboot(RebootTransitionArgs);
	static long ScheduleRebootDialog(RebootTransitionArgs);
	static long ShowRebootDialog(RebootTransitionArgs);
	static long ShowRebootDialogOnLogon(RebootTransitionArgs);
	static unsigned long GetLastReminderLimitInDays(RebootTransitionArgs);
	static unsigned short const * const restartOptionPageUri;
	virtual long OnEngagedRebootReminder();
	virtual long OnFirstReadyToReboot();
	virtual long OnForceRebootDevice();
	virtual long OnForceRebootReminder();
	virtual long OnForceRebootRetry();
	virtual long OnLogonRebootDialog();
	virtual long OnRebootDevice();
	virtual long OnRebootDialog();
	virtual long ShowRebootUpdateResults();
};

class EnumMap
{
protected:
	static char const * const * const msc_pcszAttentionRequiredReasons;
	static char const * const * const msc_pcszCategoryTypes;
};

struct EnvironmentUtil
{
	static int IsConvergedUpdateStackEnabled();
};

class ExtendedReboot
{
protected:
	static MusUxState GetEngagedRebootDialogState(RebootTransitionArgs);
	static MusUxState GetRebootDialogState(RebootTransitionArgs);
	static bool ShouldShowAutoRebootFailedNotification(RebootTransitionArgs);
	static long ExecuteRebootState(RebootTransitionArgs);
	static long ProcessAutoRebootFailed(RebootTransitionArgs);
	static long ProcessUserResponse(unsigned long,RebootTransitionArgs);
	static long ScheduleAutoDialog(RebootTransitionArgs,_SYSTEMTIME);
	static long ScheduleAutoDialogInWaitMode(RebootTransitionArgs,unsigned long);
	static long ScheduleAutoRebootDialog(RebootTransitionArgs);
	static long ScheduleReboot(unsigned short const *,RebootTransitionArgs,unsigned long,bool);
	static long ScheduleUltimateForcedReboot(RebootTransitionArgs);
	static long ShowRebootFailedNotification(RebootTransitionArgs);
	static long ShowRebootNotification(RebootTransitionArgs,bool);
public:
	static RebootStateAction const * const rebootActionMap;
	static long CreateInstance(RebootWorkflowBase * *);
	static long ExecuteAutoReboot(RebootTransitionArgs);
	static long ExecuteEnhancedAutoReboot(RebootTransitionArgs,UxRebootType);
	static long ExecuteIntermediateAutoReboot(RebootTransitionArgs);
	static long ExecuteSoftForceReboot(RebootTransitionArgs);
	static long ExecuteStateAction(RebootState,RebootTransitionArgs);
	static long ExecuteUltimateAutoReboot(RebootTransitionArgs);
	static long ExecuteUltimateForcedReboot(RebootTransitionArgs);
	static long OnEngagedReboot(RebootTransitionArgs);
	static long OnEnterAutoReboot(RebootTransitionArgs);
	static long OnForcedReboot(RebootTransitionArgs);
	static long OnUltimateForcedReboot(RebootTransitionArgs);
	static long OnUserAcceptAutoReboot(RebootTransitionArgs);
	static long ShowRebootDialog(RebootTransitionArgs);
	static long ShowRebootDialogOnLogon(RebootTransitionArgs);
	virtual long OnEngagedRebootReminder();
	virtual long OnFirstReadyToReboot();
	virtual long OnForceRebootDevice();
	virtual long OnForceRebootReminder();
	virtual long OnForceRebootRetry();
	virtual long OnLogonRebootDialog();
	virtual long OnRebootDevice();
	virtual long OnRebootDialog();
	virtual long ShowRebootUpdateResults();
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
	static long GetRootDirectory(tagUSODirectory,unsigned short *,unsigned __int64);
	static long RecursiveCreateDirectory(unsigned short const *);
};

struct LoggingUtil
{
	static void LogRebootScheduledTelemetryEvent(IUsoSession *,_TlgProvider_t const * const,_SYSTEMTIME,DefaultRebootUxState,unsigned short const *,int,int,int);
};

namespace Microsoft
{
	namespace WRL
	{
		struct ComPtr<IActivationFactory>
		{
			~ComPtr<IActivationFactory>();
		};

		struct ComPtr<IAsyncInfo>
		{
			~ComPtr<IAsyncInfo>();
		};

		struct ComPtr<Windows::Foundation::IAsyncOperation<bool> >
		{
			~ComPtr<Windows::Foundation::IAsyncOperation<bool> >();
		};

		struct ComPtr<Windows::Foundation::IUriRuntimeClass>
		{
			~ComPtr<Windows::Foundation::IUriRuntimeClass>();
		};

		struct ComPtr<Windows::Foundation::IUriRuntimeClassFactory>
		{
			~ComPtr<Windows::Foundation::IUriRuntimeClassFactory>();
		};

		struct ComPtr<Windows::System::ILauncherStatics>
		{
			~ComPtr<Windows::System::ILauncherStatics>();
		};

		namespace Details
		{
			struct ModuleBase
			{
				static ModuleBase * module_;
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

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

	};

};

struct MusBrokerMain
{
	static long CreateInstance(MusBrokerMain * *);
	static long DoAction();
};

struct MusTaskUtils
{
	static long CreateNotificationLogonTask(unsigned short const *,unsigned short const *,unsigned short const *);
	static long CreateSingleExecNotificationTask(unsigned short const *,unsigned short const *,_SYSTEMTIME,short);
	static long CreateUpdateResultsTaskSchedule();
	static long GetTaskTime(unsigned short * const,_SYSTEMTIME *);
};

struct NotificationFactory
{
	static long ProcessNotification(unsigned short const *,InputActionRequest const *);
};

struct NotificationLogging
{
	static _TlgProvider_t const * Provider();
};

class NotificationTelemetry
{
protected:
	static NotificationTelemetry * Instance();
public:
	static void DataMigrationStatus<char const (&)[26]>(char const (&)[26]);
	static void DataMigrationStatus<char const (&)[33]>(char const (&)[33]);
	static void ForcedRestartReminderVisible<unsigned long &>(unsigned long &);
	static void McsDeferredRebootReasonACPowerNeeded();
	static void MgmtPolicyDisabledNotifications<int &>(int &);
	static void RebootRequestReasonsToIgnore<unsigned long &>(unsigned long &);
	static void UxBrokerExpectedNextState<char const (&)[14]>(char const (&)[14]);
	static void UxBrokerExpectedNextState<char const (&)[20]>(char const (&)[20]);
	static void UxBrokerExpectedNextState<char const (&)[27]>(char const (&)[27]);
	static void UxBrokerExpectedNextState<char const (&)[28]>(char const (&)[28]);
	static void UxBrokerExpectedNextState<char const (&)[46]>(char const (&)[46]);
	static void UxBrokerExpectedNextState<char const (&)[7]>(char const (&)[7]);
	static void UxBrokerFirstReadyToReboot();
	static void UxBrokerLaunched<unsigned short const * &>(unsigned short const * &);
	static void UxBrokerMgmtEngagedRestartState<bool &,bool &,bool &,unsigned long &,unsigned long &,unsigned long &>(bool &,bool &,bool &,unsigned long &,unsigned long &,unsigned long &);
	static void UxBrokerMgmtNotificationState<int &,int &,unsigned long &,unsigned long &,unsigned long &,unsigned long &>(int &,int &,unsigned long &,unsigned long &,unsigned long &,unsigned long &);
	static void UxBrokerMgmtState<int &,int &,int &,int &,int &,int &,unsigned short &,unsigned long &>(int &,int &,int &,int &,int &,int &,unsigned short &,unsigned long &);
	static void UxBrokerRebootResults<long &>(long &);
	static void UxBrokerScheduledTask<unsigned short const * &,unsigned short const * &>(unsigned short const * &,unsigned short const * &);
	static void UxBrokerWorkflow<char const (&)[12],unsigned short const * &>(char const (&)[12],unsigned short const * &);
	static void UxBrokerWorkflow<char const (&)[20],unsigned short const * &>(char const (&)[20],unsigned short const * &);
	static void UxBrokerWorkflow<char const (&)[22],unsigned short const * &>(char const (&)[22],unsigned short const * &);
	static void UxBrokerWorkflow<char const (&)[25],unsigned short const * &>(char const (&)[25],unsigned short const * &);
	static void UxBrokerWorkflow<char const (&)[27],unsigned short const * &>(char const (&)[27],unsigned short const * &);
	static void UxBrokerWorkflow<char const (&)[45],unsigned short const * &>(char const (&)[45],unsigned short const * &);
	static void UxBrokerWorkflow<char const (&)[61],unsigned short const * &>(char const (&)[61],unsigned short const * &);
	void DisplayNotificationUxState_(unsigned int,unsigned int);
	void EnhancedEngagedUxState_(unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,int,int,tagUsoUpdateIdentifier,unsigned short const *,_FILETIME);
	void RebootRequiredButNoScheduleExists_();
	void ShowUpdateResultsAfterReboot_();
	void UpdateRebootInvoked_(tagUsoUpdateIdentifier);
	void UpdateUxBatterySaverEnabled_();
	void UpdateUxUserNotLoggedIn_();
	void UpdateUxUserProcessLaunchFailed_(unsigned short const *);
	void UpdateUxUserProcessLaunched_(unsigned short const *);
	void UpdateUxUserProcessTimeout_(unsigned short const *);
};

class NotificationTelemetryCore
{
protected:
	static NotificationTelemetryCore * Instance();
public:
	void DeviceRebootNoLongerNeeded_();
};

struct NotificationTracelogging
{
	static void McsApiDeferredRebootReason(unsigned int);
	static void RebootStateActionNotFound(unsigned int);
	static void UxBrokerLaunchNotification(char const *);
	static void UxBrokerMessage(char const *);
	static void UxBrokerNextUxStateNotFound(unsigned int);
};

class PolicyUtil
{
protected:
	static bool IsGPAutoInstallConfigured(IUsoSession *);
	static long IsNormalizedAuPolicyConfigured(IUsoSession *,UpdatePolicy_UpdateOptions_Value,UpdatePolicy_AllowAutoUpdate_Value,UpdatePolicyStatus *,PolicyStore *);
	static long IsPolicyConfiguredHelper(IUsoSession *,UpdatePolicy,unsigned long,UpdatePolicyStatus *,PolicyStore *);
public:
	static bool IsPolicyConfigured(IUsoSession *,NormalizedPolicy);
	static bool IsPolicyEnabledForGPAllowAutoUpdate(IUsoSession *,NormalizedPolicy);
	static long GetAutoRestartCountdownMinutes(IUsoSession *,unsigned long *);
	static long GetEnforcedAuPolicy(IUsoSession *,NormalizedPolicy *);
	static long GetMgmtNotificationPolicies(IUsoSession *,MgmtUpdatePolicy *);
	static long GetMgmtUpdatePolicy(IUsoSession *,_TlgProvider_t const * const,MgmtUpdatePolicy *);
	static long GetNextMaintenanceRebootTime(_SYSTEMTIME *);
	static long GetNextRebootSystemTime(unsigned short,unsigned short,_SYSTEMTIME,_SYSTEMTIME *);
	static long GetPolicyActiveHoursMaxRange(IUsoSession *,unsigned short *);
	static long GetPolicyStatus(IUsoSession *,NormalizedPolicy,UpdatePolicyStatus *,PolicyStore *);
	static long GetPolicyValue(IUsoSession *,NormalizedPolicy,UpdatePolicyStatus *,tagVARIANT *,PolicyStore *);
	static unsigned long const * const msc_AutoRestartNotificationSchdInMinsValidSet;
	static unsigned long const * const msc_RestartWarnRemindSchdInHoursValidSet;
	static unsigned long const * const msc_RestartWarnSchdInMinsValidSet;
};

class PowerStateManager
{
	void CreatePDCTask();
	void ReleasePDCTask();
public:
	virtual void AllowSystemSleepMode();
	virtual void PreventSystemSleepMode(unsigned short *);
	virtual ~PowerStateManager();
};

class PowerStateManagerWithGuard
{
	static unsigned long PreventSleepGuardTimer(void *);
public:
	PowerStateManagerWithGuard();
	virtual void AllowSystemSleepMode();
	virtual void PreventSystemSleepMode(unsigned short *);
	virtual void PreventSystemSleepMode(unsigned short *,std::function<bool ()>);
	virtual ~PowerStateManagerWithGuard();
};

class PresenceUtil
{
protected:
	static long QueryPowerSetting(_GUID const *,void *,unsigned long);
public:
	static long IsUserPresent(bool *);
};

class RebootActiveHoursAutomatic
{
protected:
	static int IsDeviceReadyForReboot(RebootTransitionArgs);
	static long ProcessUserResponse(unsigned long,RebootTransitionArgs);
	static long ScheduleForceReboot(RebootTransitionArgs);
	static unsigned long GetAutoRestartCountdownInMinutes(RebootTransitionArgs);
	static unsigned long GetForceRestartReminderCountdownInMinutes(RebootTransitionArgs);
	static unsigned long GetForceRestartWarningCountdownInMinutes(RebootTransitionArgs);
public:
	static RebootStateAction const * const sc_rgRebootActionMap;
	static int EvaluateForcedRebootCondition(RebootTransitionArgs);
	static int EvaluateNoRebootWithLoggedInUsersPolicySet(RebootTransitionArgs);
	static int EvaluatePreRebootCondition(RebootTransitionArgs);
	static int EvaluateUserInitiatedRebootCondition(RebootTransitionArgs);
	static long CreateInstance(RebootWorkflowBase * *);
	static long ExecuteForcedReboot(RebootTransitionArgs);
	static long ExecuteInteractiveReboot(RebootTransitionArgs);
	static long ExecuteReboot(RebootTransitionArgs);
	static long ExecuteStateAction(RebootState,RebootTransitionArgs);
	static long PostponeRebootDialog(RebootTransitionArgs);
	static long ScheduleForcedRestartReminder(RebootTransitionArgs);
	static long ScheduleForcedRestartRetry(RebootTransitionArgs);
	static long ScheduleReboot(RebootTransitionArgs);
	static long ScheduleRebootDialog(RebootTransitionArgs);
	static long ShowRebootDialog(RebootTransitionArgs);
	static long ShowRebootDialogOnLogon(RebootTransitionArgs);
	virtual long OnFirstReadyToReboot();
	virtual long OnForceRebootDevice();
	virtual long OnForceRebootReminder();
	virtual long OnForceRebootRetry();
	virtual long OnLogonRebootDialog();
	virtual long OnRebootDevice();
	virtual long OnRebootDialog();
	virtual long ShowRebootUpdateResults();
};

class RebootStateHelper
{
protected:
	static long DidDataMigrationSucceed(RebootTransitionArgs,int *);
public:
	static bool IsDevicePresenting();
	static bool IsRebootOutsideOfActiveHours(RebootTransitionArgs,_SYSTEMTIME);
	static bool IsSystemNeededReasonIgnoredTestHook();
	static int EvaluateDefaultCondition(RebootTransitionArgs);
	static int EvaluateRebootFailedCondition(RebootTransitionArgs);
	static int EvaluateRebootRequiredCondition(RebootTransitionArgs);
	static int EvaluateScheduledRebootExistsCondition(RebootTransitionArgs);
	static int EvaluateUserLoggedInCondition(RebootTransitionArgs);
	static int IsDeviceReadyForReboot(RebootTransitionArgs);
	static int IsRebootScheduled();
	static int IsRebootScheduledInTheFuture(RebootTransitionArgs,_SYSTEMTIME *);
	static int IsRebootTimeForced(RebootTransitionArgs,_SYSTEMTIME,unsigned long);
	static int IsUserActive();
	static int IsValidTimeToReboot(_SYSTEMTIME,MusActiveHoursScenario,RebootTransitionArgs);
	static int IsValidTimeToShowRebootNotificationOnLogon(RebootTransitionArgs,unsigned long,unsigned long *);
	static long InvokeUSOReboot(UxRebootType,RebootTransitionArgs);
	static long IsRebootTimeMatchingScheduledTime(IUsoSession *,int *);
	static long IsRestartForced(_FILETIME,IUsoSession *,MgmtUpdatePolicy,int *);
	static long LaunchSettingsPage(unsigned short const *);
	static long MarkRebootTaskLaunch(IUsoSession *);
	static long MarkRebootUXLaunch(IUsoSession *);
	static long RescheduleForceReboot(RebootTransitionArgs);
	static long ScheduleForcedReminder(RebootTransitionArgs);
	static long ScheduleLogonRebootDialog(RebootTransitionArgs);
	static long ScheduleRebootIn5Minutes(RebootTransitionArgs);
	static long ScheduleSoftForcedRestart(RebootTransitionArgs);
	static long SetUXRebootState(IUsoSession *,tagUXRebootState);
	static long ShowMgmtUpdateResults(RebootTransitionArgs);
	static long ShowUpdateResults(RebootTransitionArgs);
	static long ShowUpdateResultsNotification(RebootTransitionArgs);
	static unsigned long GetDefaultIgnorableReasons(RebootTransitionArgs);
	static unsigned long GetEngagedRebootConfigValue(unsigned short const *,unsigned long,unsigned long);
	static void LogDeferRestartReason(unsigned long);
};

class RebootTimeUtility
{
	static unsigned short const * const c_szFirstOccurenceReadyToReboot;
	static unsigned short const * const c_szFlightPendingCommit;
	static unsigned short const * const c_szFlightRebootTime;
	static unsigned short const * const c_szUpdateRebootTime;
public:
	static int IsFlightPendingCommit();
	static long DeleteFirstOccurenceReadyToReboot();
	static long DeleteLastRebootMarkedTime(bool);
	static long GetLastRebootMarkedTime(bool,_FILETIME *);
};

struct RebootUtil
{
	static bool UseToastReminders();
	static long CheckTaskScheduleExists(unsigned short const *,int *);
	static long GetScheduledRebootTime(int *,_SYSTEMTIME *);
	static unsigned short const * const sc_szUxArgFirstOccurenceReadyToReboot;
	static void ResetRebootVariables(IUsoSession *);
};

class RebootWorkflowBase
{
protected:
	RebootWorkflowBase();
public:
	static long SendEnhancedEngagedUxStateEvent(RebootTransitionArgs);
	virtual long DoAction(unsigned short const *,InputActionRequest const *,bool,bool);
	virtual long OnEngagedRebootReminder();
	virtual long OnForceRebootDevice();
	virtual long OnForceRebootReminder();
	virtual long OnForceRebootRetry();
	virtual long OnLogonMigrationFailedDialog();
	virtual long OnLogonReadyToReboot();
	virtual long OnLogonRebootDevice();
	virtual long OnLogonRebootDialog();
	virtual long OnLogonRebootReminder();
	virtual long OnRebootDialog();
	virtual long OnRebootReminder();
};

class RebootWorkflowFactory
{
protected:
	static long DoRebootGhostToastAction(IUsoSession *);
	static long LogActiveHours(IUsoSession *,MusActiveHoursScenario);
public:
	static long CreateRebootWorkflowBase(IUsoSession *,MgmtUpdatePolicy,UpdateCategoryType,unsigned short const *,RebootWorkflowBase * *,bool *,bool *);
	static long ProcessReboot(unsigned short const *,InputActionRequest const *);
};

struct RebootWorkflowMandatory
{
	static RebootStateAction const * const sc_rgRebootActionMap;
	static long CreateInstance(RebootWorkflowBase * *);
	static long ExecuteReboot(RebootTransitionArgs);
	static long ExecuteStateAction(RebootState,RebootTransitionArgs);
	static long ShowRebootDialog(RebootTransitionArgs);
	static long ShowRebootDialogOnLogon(RebootTransitionArgs);
	virtual long OnFirstReadyToReboot();
	virtual long OnLogonRebootDialog();
	virtual long OnRebootDevice();
	virtual long ShowRebootUpdateResults();
};

class RebootWorkflowMgmtUpdates
{
protected:
	static int IsValidTimeToRebootAtMaintenanceTime(RebootTransitionArgs);
	static int IsValidTimeToRebootAtScheduledTime(RebootTransitionArgs);
public:
	static RebootStateAction const * const sc_rgRebootActionMap;
	static int EvaluateScheduledTimeNoUXPolicy(RebootTransitionArgs);
	static int IsCountdownPolicySetToExecuteReboot(RebootTransitionArgs);
	static int IsCountdownPolicySetToScheduleReboot(RebootTransitionArgs);
	static long CreateInstance(RebootWorkflowBase * *);
	static long ExecuteAutoRestartCountdownPolicy(RebootTransitionArgs);
	static long ExecuteForcedReboot(RebootTransitionArgs);
	static long ExecuteScheduledTimeNoUXPolicy(RebootTransitionArgs);
	static long ExecuteStateAction(RebootState,RebootTransitionArgs);
	static long RescheduleReboot(RebootTransitionArgs);
	static long ScheduleNoUxReboot(RebootTransitionArgs);
	static long ScheduleRebootPostpone(RebootTransitionArgs);
	static long ShowRebootDialogOnLogon(RebootTransitionArgs);
	static long ShowRebootImminentDialog(RebootTransitionArgs);
	virtual long OnFirstReadyToReboot();
	virtual long OnForceRebootDevice();
	virtual long OnLogonRebootDialog();
	virtual long OnRebootDevice();
	virtual long ShowRebootUpdateResults();
};

class RegistryManager
{
protected:
	static unsigned short const * const * const c_rgszUpdateRegKeyName;
public:
	static long DeleteRegValue(HKEY__ *,unsigned short const *,unsigned short const *);
	static long GetRegDword(HKEY__ *,unsigned short const *,unsigned short const *,unsigned long *);
	static long GetRegQword(HKEY__ *,unsigned short const *,unsigned short const *,unsigned __int64 *);
	static long GetRegistryKeyName(RegistryKeyTypes,unsigned short *,unsigned __int64);
	static long GetStringRegKey(HKEY__ *,unsigned short const *,unsigned short const *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	static long GetStringRegKey(HKEY__ *,unsigned short const *,unsigned short const *,unsigned short *,unsigned long *);
	static long OpenRegKey(RegistryKeyTypes,unsigned long,bool,HKEY__ * *);
	static long RegValueExists(HKEY__ *,unsigned short const *,unsigned short const *,int *);
	static long SetRegDword(HKEY__ *,unsigned short const *,unsigned short const *,unsigned long);
};

struct SchedUtil
{
	static long GetRebootCountdownMinutes(_SYSTEMTIME,unsigned long *);
};

class SettingUtil
{
protected:
	static unsigned short const * const msc_szUxActiveHoursEnd;
	static unsigned short const * const msc_szUxActiveHoursStart;
	static unsigned short const * const msc_szUxRestartNotificationsAllowed;
	static unsigned short const * const msc_szUxSchedulePickerOptionName;
public:
	static DefaultRebootUxState GetDefaultRebootUxState(_FILETIME,_SYSTEMTIME,IUsoSession *,_TlgProvider_t const * const,bool);
	static DefaultRebootUxState GetEnhancedEngagedRebootUxState(_FILETIME,_SYSTEMTIME,IUsoSession *,_TlgProvider_t const * const);
	static bool IsDeviceTimeOutsideRebootBounds(_FILETIME,_FILETIME,unsigned long,_TlgProvider_t const * const);
	static int IsRebootScheduledByUser(IUsoSession *);
	static long GetActiveHoursEnd(unsigned long *);
	static long GetActiveHoursStart(unsigned long *);
	static long GetEngagedRestartPolicy(IUsoSession *,_TlgProvider_t const * const,EngagedRestartPolicy *);
	static long GetRestartNotificationsAllowed(bool *);
	static long SetActiveHoursEnd(unsigned long);
	static long SetActiveHoursStart(unsigned long);
	static long SetSchedulePickerOption(IUsoSession *,SchedulePickerOption);
	static unsigned long GetAutoRebootMaxValidDays(IUsoSession *,_TlgProvider_t const * const);
};

class TaskManager
{
	static long CreateExecAction(ITaskDefinition *,IExecAction * *);
	static long CreateLogonTrigger(ITaskDefinition *,unsigned short const *,ILogonTrigger * *);
	static long CreateTimeTaskHelper(unsigned short * const,_SYSTEMTIME,unsigned short * const,unsigned short * const,short,short,unsigned long,unsigned long,short,short,_TlgProvider_t const * const);
	static long CreateTimeTrigger(ITaskDefinition *,ITimeTrigger * *);
	static long EnsureTaskFolderExists(ITaskService *,unsigned short const *);
	static long GetTaskService(ITaskService * *);
	static long LogTaskModification(IRegisteredTask *,TaskModificationType,_TlgProvider_t const * const);
	static long RegisterTask(ITaskService *,ITaskDefinition *,unsigned short * const,short,_TlgProvider_t const * const);
	static long SetTaskAction(ITaskDefinition *,unsigned short * const,unsigned short * const);
	static long SetTaskPrincipal(ITaskDefinition *);
	static long SetTaskSettings(ITaskDefinition *,short,short,short,short,short,short,short);
	static long SetTaskTrigger(ITaskDefinition *,_SYSTEMTIME,unsigned long,unsigned long,short);
	static long SetTriggerRepetition(ITrigger *,unsigned long,unsigned long);
	static long SetTriggerTime(ITrigger *,_SYSTEMTIME);
	static unsigned short const * const c_szInteractiveId;
	static unsigned short const * const c_szLogonDelay;
	static unsigned short const * const c_szMusNotificationExePath;
	static unsigned short const * const c_szRootPath;
	static unsigned short const * const c_szSecDis;
	static unsigned short const * const c_szSystemId;
public:
	static long CreateLogonTask(unsigned short * const,unsigned short * const,unsigned short * const,short,unsigned short const *,_TlgProvider_t const * const);
	static long CreateSingleExecTimeTask(unsigned short * const,_SYSTEMTIME,unsigned short * const,unsigned short * const,short,short,short,_TlgProvider_t const * const,short);
	static long EnableTask(unsigned short const *,short,_TlgProvider_t const * const);
	static long GetMusNotificationExePath(unsigned short *,unsigned long);
	static long GetRegisteredTask(unsigned short * const,IRegisteredTask * *);
	static long RemoveTask(unsigned short const *,_TlgProvider_t const * const);
};

class TelemetryManager
{
	long SetupLogFiles(unsigned short const *,unsigned short *,unsigned __int64 *);
public:
	TelemetryManager();
	long EnableTracing(unsigned __int64);
	long FlushTraceW();
	long StartTracing(_GUID,unsigned short const *,unsigned short const *,unsigned __int64,bool,unsigned long);
	long StopTracing();
	static unsigned long const sc_dwDefaultMaxTraceFileSizeInKB;
	~TelemetryManager();
};

struct TimeHelper
{
	static _FILETIME ULongLongToFileTime(unsigned __int64);
	static long AddDaysToFileTime(unsigned long,_FILETIME,_FILETIME *);
	static long AddDaysToSystemTime(unsigned long,_SYSTEMTIME,_SYSTEMTIME *);
	static long AddHoursToFileTime(unsigned long,_FILETIME,_FILETIME *);
	static long AddHoursToSystemTime(unsigned long,_SYSTEMTIME,_SYSTEMTIME *);
	static long AddMinutesToSystemTime(unsigned long,_SYSTEMTIME,_SYSTEMTIME *);
	static long ConvertLocalDateToUTC(double,_SYSTEMTIME *);
	static long GetDaysBetweenFileTimes(_FILETIME,_FILETIME,unsigned long *);
	static long GetDaysBetweenSystemTimes(_SYSTEMTIME,_SYSTEMTIME,unsigned long *);
	static long GetMinutesBetweenFileTimes(_FILETIME,_FILETIME,unsigned long *);
	static long GetMinutesBetweenSystemTimes(_SYSTEMTIME,_SYSTEMTIME,unsigned long *);
	static long SetSystemTimeHourAndMin(unsigned short,unsigned short,_SYSTEMTIME,_SYSTEMTIME *);
	static long SubtractMinutesFromFileTime(unsigned long,_FILETIME,_FILETIME *);
	static long SubtractMinutesFromSystemTime(unsigned long,_SYSTEMTIME,_SYSTEMTIME *);
	static unsigned __int64 FileTimeToULongLong(_FILETIME);
	static unsigned __int64 SystemTimeToULongLong(_SYSTEMTIME);
};

class UpToDateStatusHelper
{
protected:
	static UXUpToDateStatus const * const sc_rgUXUpToDateStatusMap;
	static unsigned short const * const sc_szUxLastUpToDateRecalcTime;
public:
	static long GetLastUpToDateRecalcTime(IUsoSession *,_SYSTEMTIME *);
	static long RecalcUpToDateStatus(InputActionRequest const *);
	static long SetLastUpToDateRecalcTime(IUsoSession *,_SYSTEMTIME);
};

class UpdateNotification
{
protected:
	static bool IsDisplayNeeded(InputActionRequest const *,MusUxState,unsigned long);
	static bool IsNotificationSkipped(InputActionRequest const *,MusUxState,unsigned long);
	static long DisplayNotification(InputActionRequest const *,MusUxState);
	static long GetLastNotificationDisplayed(IUsoSession *,MusUxState *);
	static long GetLastNotificationDisplayedTime(IUsoSession *,_SYSTEMTIME *);
	static long ProcessUpdateNotification(InputActionRequest const *);
	static long ProcessUpdateNotificationOnUserLogon(InputActionRequest const *);
	static long ScheduleNextNotification(unsigned long,_SYSTEMTIME);
	static long SetLastNotificationDisplayed(IUsoSession *,MusUxState);
	static long SetLastNotificationDisplayedTime(IUsoSession *,_SYSTEMTIME);
	static unsigned short const * const sc_szUxLastNotificationDisplayed;
	static unsigned short const * const sc_szUxLastNotificationDisplayedTime;
public:
	static long DoAction(unsigned short const *,InputActionRequest const *);
};

class UpdateUtil
{
protected:
	static ErrorState GetErrorStateFromUpdateStatusInfo(tagUpdateStatusInfo const &);
	static ErrorState const * const gc_rgErrorPriority;
	static unsigned short const * const sc_szUxFirstEnhancedUxStateTime;
	static unsigned short const * const sc_szUxForceRebootReminderNeeded;
	static unsigned short const * const sc_szUxForcedReminderDisplayed;
	static unsigned short const * const sc_szUxLastAttemptedRebootTime;
	static unsigned short const * const sc_szUxLastReadyToRebootGhostToastTime;
	static unsigned short const * const sc_szUxRebootConfirmedByUser;
	static unsigned short const * const sc_szUxRebootScheduledByUser;
	static unsigned short const * const sc_szUxScheduledRebootTime;
public:
	static bool IsDirectToEngagedRebootEnabled(IUsoSession *,_TlgProvider_t const * const);
	static bool IsFeatureUpdate(IUsoUpdate *,_TlgProvider_t const * const);
	static bool IsFeatureUpdatePending(IUsoSession *,bool,_TlgProvider_t const * const);
	static long GetConfirmRebootByUser(IUsoSession *,short *);
	static long GetETag(_TlgProvider_t const * const,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	static long GetFirstEnhancedUxStateTime(IUsoSession *,_FILETIME *);
	static long GetForceRebootReminderNeeded(IUsoSession *,short *);
	static long GetForcedReminderDisplayed(IUsoSession *,short *);
	static long GetRestartRequiredUpdateIdentifiers(IUsoSession *,_TlgProvider_t const * const,std::vector<tagUsoUpdateIdentifier,std::allocator<tagUsoUpdateIdentifier> > &);
	static long GetScheduledRebootFailed(IUsoSession *,unsigned short const *,short *,_SYSTEMTIME *);
	static long GetScheduledRebootTime(IUsoSession *,_SYSTEMTIME *);
	static long GetUpdateErrorFirstFireTime(IUsoUpdateCollection *,ErrorState,_FILETIME *);
	static long GetUpdatePayloadInfo(IUsoUpdateCollection *,PayloadInfo *,_TlgProvider_t const * const,IUsoSession *,unsigned long);
	static long SetAutoAcceptShownToUser(IUsoSession *,short);
	static long SetConfirmRebootByUser(IUsoSession *,short);
	static long SetForceRebootReminderNeeded(IUsoSession *,short);
	static long SetForcedReminderDisplayed(IUsoSession *,short);
	static long SetLastReadyToRebootGhostToastTime(IUsoSession *,_SYSTEMTIME);
	static long SetRebootScheduledByUser(IUsoSession *,short);
	static long SetScheduledRebootFailed(IUsoSession *,unsigned short const *,short,_SYSTEMTIME);
	static long SetScheduledRebootTime(IUsoSession *,_SYSTEMTIME);
	static unsigned long GetRebootScheduleMaxValidDays(IUsoSession *);
	static unsigned short const * const sc_szUxAutoAcceptShownToUser;
	static unsigned short const * const sc_szUxAutoScheduledRebootFailed;
	static unsigned short const * const sc_szUxScheduledRebootFailed;
	static void GetEnhancedEngagedSettings(IUsoSession *,_TlgProvider_t const * const,EnhancedEngagedSettings *);
};

class UserProcess
{
protected:
	static long GetNotificationCommandLineArguments(MusUxState,unsigned long,unsigned short *,unsigned __int64 *);
	static long GetUserTokenForLoggedInUser(void * *);
	static long LaunchDialogProcess(void *,MusUxState,unsigned long,_STARTUPINFOW,unsigned long,unsigned long *);
	static long LaunchDialogProcessOnWindowsMobile(MusUxState,unsigned long,unsigned long,unsigned long *);
	static long LaunchToastProcess(void *,MusUxState,_STARTUPINFOW,unsigned long);
	static long LaunchToastProcessOnWindowsMobile(MusUxState,unsigned long);
	static long LaunchUxAsUser(bool,MusUxState,unsigned long,unsigned long,bool,unsigned long,unsigned long *);
	static unsigned short const * const sc_szMusNotificationUxExe;
public:
	static long IsUserSessionActive(bool *,bool *,unsigned long *);
	static long ShowRebootNotificationDialog(MusUxState,unsigned long,bool,unsigned long,unsigned long *);
	static long ShowToast(MusUxState,unsigned long,bool);
	static long ShowUpdateNotificationDialog(MusUxState);
};

class UsoConfiguration
{
	static unsigned long GetConfiguration(unsigned short const *,unsigned long,unsigned long,unsigned long);
	static unsigned short const * const c_szDataMigrationValueName;
	static unsigned short const * const c_szEnableEngagedReboot;
	static unsigned short const * const c_szIgnoreActiveUserBeforeRestart;
	static unsigned short const * const c_szMuServiceDefault;
	static unsigned short const * const c_szPPIUpdateValueName;
	static unsigned short const * const c_szRequireACPowerCheckBeforeDownload;
	static unsigned short const * const c_szRequireACPowerCheckBeforeRestart;
	static unsigned short const * const c_szRequireACPowerCheckBeforeStaging;
	static unsigned short const * const c_szScanTypeValueName;
	static unsigned short const * const c_szServicingStackValueName;
	static unsigned short const * const c_szUseOneCoreOOBENotificationValueName;
public:
	static bool IsConfigurationSet(UsoConfigurations);
};

struct UsoUtil
{
	static long GetUxAttentionRequiredReason(IUsoSession *,ErrorState,UxAttentionRequiredReason *);
};

class UxStateMachine
{
protected:
	static UxStateTransition const * const sc_rgTransUxStateTransitions;
	static UxTransitionCondition const * const sc_rgUxStateTransitionConditionMap;
	static int EvaluateUxDefaultTransitionCondition(unsigned long,UxTransitionConditionParameters,_FILETIME,unsigned long *);
	static int EvaluateUxLowUptimeTransitionCondition(unsigned long,UxTransitionConditionParameters,_FILETIME,unsigned long *);
	static int EvaluateUxOneShotUpdateTransitionCondition(unsigned long,UxTransitionConditionParameters,_FILETIME,unsigned long *);
	static long GetDefaultTransitionConditionParameters(InputActionRequest const *,MusUxState,UxTransitionConditionParameters *);
public:
	static long FindNextUxState(MusUxState,InputActionRequest const *,MusUxState *,unsigned long *);
};

struct WaaSHelper
{
	static bool IsFeatureUpdatePending(IUsoSession *);
	static bool IsWaaSUXAllowedByUUP(IUsoSession *);
	static long DaysSinceUUPFallbackChanged(IUsoSession *,unsigned long *);
};

class WnfSubscriberT<DuMigration::MigrationComplete>
{
protected:
	static long CallbackWrapper(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
public:
	virtual ~WnfSubscriberT<DuMigration::MigrationComplete>();
};

class _bstr_t
{
	void _Free();
public:
	_bstr_t(unsigned short const *);
	~_bstr_t();
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

struct exception
{
	exception(exception const &);
};

namespace std
{
	struct _Error_objects<int>
	{
		static _Generic_error_category _Generic_object;
		static _Iostream_error_category _Iostream_object;
		static _System_error_category _System_object;
	};

	struct _Func_class<bool,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		~_Func_class<bool,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Generic_error_category
	{
		virtual basic_string<char,char_traits<char>,allocator<char> > message(int);
		virtual char const * name();
	};

	struct _Iostream_error_category
	{
		virtual basic_string<char,char_traits<char>,allocator<char> > message(int);
		virtual char const * name();
	};

	struct _System_error_category
	{
		virtual basic_string<char,char_traits<char>,allocator<char> > message(int);
		virtual char const * name();
		virtual error_condition default_error_condition(int);
	};

	class _Tree<_Tset_traits<shared_ptr<function<void (DuMigration::MigrationComplete const &)> >,less<shared_ptr<function<void (DuMigration::MigrationComplete const &)> > >,allocator<shared_ptr<function<void (DuMigration::MigrationComplete const &)> > >,0> >
	{
	protected:
		void _Erase(_Tree_node<shared_ptr<function<void (DuMigration::MigrationComplete const &)> >,void *> *);
	};

	struct _Tree_alloc<0,_Tree_base_types<shared_ptr<function<void (DuMigration::MigrationComplete const &)> >,allocator<shared_ptr<function<void (DuMigration::MigrationComplete const &)> > > > >
	{
		_Tree_node<shared_ptr<function<void (DuMigration::MigrationComplete const &)> >,void *> * _Buyheadnode();
	};

	struct _Wrap_alloc<allocator<_Tree_node<shared_ptr<function<void (DuMigration::MigrationComplete const &)> >,void *> > >
	{
		void deallocate(_Tree_node<shared_ptr<function<void (DuMigration::MigrationComplete const &)> >,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<tagUsoUpdateIdentifier> >
	{
		void deallocate(tagUsoUpdateIdentifier *,unsigned __int64);
	};

	struct basic_string<char,char_traits<char>,allocator<char> >
	{
		basic_string<char,char_traits<char>,allocator<char> > & assign(basic_string<char,char_traits<char>,allocator<char> > const &,unsigned __int64,unsigned __int64);
		basic_string<char,char_traits<char>,allocator<char> > & assign(char const *,unsigned __int64);
		basic_string<char,char_traits<char>,allocator<char> > & erase(unsigned __int64,unsigned __int64);
		void _Copy(unsigned __int64,unsigned __int64);
		void _Tidy(bool,unsigned __int64);
		void _Xlen();
		void _Xran();
	};

	struct basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >
	{
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & append(unsigned __int64,unsigned short);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & assign(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,unsigned __int64,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & erase(unsigned __int64,unsigned __int64);
		void _Copy(unsigned __int64,unsigned __int64);
		void _Tidy(bool,unsigned __int64);
		void _Xlen();
		void _Xran();
		~basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >();
	};

	struct error_category
	{
		virtual bool equivalent(error_code const &,int);
		virtual bool equivalent(int,error_condition const &);
		virtual error_condition default_error_condition(int);
	};

	struct function<bool ()>
	{
		function<bool ()> & operator=(function<bool ()> &);
		~function<bool ()>();
	};

	struct num_put<char,back_insert_iterator<basic_string<char,char_traits<char>,allocator<char> > > >
	{
		static locale::id id;
	};

	struct num_put<unsigned short,back_insert_iterator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
		static locale::id id;
	};

	struct unique_ptr<void *,WnfSubscriberT<DuMigration::MigrationComplete>::HandleDeleter>
	{
		~unique_ptr<void *,WnfSubscriberT<DuMigration::MigrationComplete>::HandleDeleter>();
	};

	class vector<tagUsoUpdateIdentifier,allocator<tagUsoUpdateIdentifier> >
	{
	protected:
		void _Reallocate(unsigned __int64);
		void _Reserve(unsigned __int64);
		void _Xlen();
	public:
		~vector<tagUsoUpdateIdentifier,allocator<tagUsoUpdateIdentifier> >();
	};

	nothrow_t const std::nothrow;
	tagUsoUpdateIdentifier * _Uninit_move<tagUsoUpdateIdentifier *,tagUsoUpdateIdentifier *,allocator<tagUsoUpdateIdentifier>,tagUsoUpdateIdentifier>(tagUsoUpdateIdentifier *,tagUsoUpdateIdentifier *,tagUsoUpdateIdentifier *,std::_Wrap_alloc<std::allocator<tagUsoUpdateIdentifier> > &,tagUsoUpdateIdentifier *,std::_Nonscalar_ptr_iterator_tag);
};

namespace wil
{
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

	namespace details
	{
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
			void FailFast_Unexpected(void *,unsigned int,char const *);
			void Return_Hr(void *,unsigned int,char const *,long);
			void Return_Hr_NoOriginate(void *,unsigned int,char const *,long);
			void _FailFastImmediate_Unexpected();
			void _FailFast_GetLastError(void *,unsigned int,char const *);
		};

		struct shared_buffer
		{
			bool create(void const *,unsigned __int64);
		};

		struct static_lazy<NotificationTelemetry>
		{
			void cleanup();
		};

		bool (* g_pfnGetModuleInformation)(void *,unsigned int *,char *,unsigned __int64);
		bool GetModuleInformation(void *,unsigned int *,char *,unsigned __int64);
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
		long RecognizeCaughtExceptionFromCallback(unsigned short *,unsigned __int64);
		long ReportFailure_GetLastErrorHr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		long ResultFromCaughtExceptionInternal(unsigned short *,unsigned __int64,bool *);
		long RunFunctorWithExceptionFilter(details::IFunctor &,details::IFunctorHost &,void *);
		long StringCchPrintfA(char *,unsigned __int64,char const *,...);
		unsigned char (* g_pfnRtlDllShutdownInProgress)();
		unsigned char * WriteResultString<char const *>(unsigned char *,unsigned char *,char const *,char const * *);
		unsigned char * WriteResultString<unsigned short const *>(unsigned char *,unsigned char *,unsigned short const *,unsigned short const * *);
		unsigned char RtlDllShutdownInProgress();
		unsigned long (* g_pfnRtlNtStatusToDosErrorNoTeb)(long);
		unsigned long ReportFailure_GetLastError(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		unsigned long RtlNtStatusToDosErrorNoTeb(long);
		unsigned short * LogStringPrintf(unsigned short *,unsigned short const *,unsigned short const *,...);
		void (* g_pfnDebugBreak)();
		void (* g_pfnFailFastInLoaderCallout)();
		void (* g_pfnGetContextAndNotifyFailure)(FailureInfo *,char *,unsigned __int64);
		void (* g_pfnLoggingCallback)(FailureInfo const &);
		void (* g_pfnOriginateCallback)(FailureType,long);
		void (* g_pfnRethrow)();
		void (* g_pfnTelemetryCallback)(bool,FailureInfo const &);
		void (* g_pfnThrowResultException)(FailureInfo const &);
		void DebugBreak();
		void FailFastInLoaderCallout();
		void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
		void LogFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,bool,unsigned short *,unsigned __int64,char *,unsigned __int64,FailureInfo *);
		void ReportFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Hr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long);
		void Rethrow();
		void ThrowResultExceptionInternal(FailureInfo const &);
	};

	namespace details_abi
	{
		struct ProcessLocalStorageData<ProcessLocalData>
		{
			static long Acquire(char const *,ProcessLocalStorageData<ProcessLocalData> * *);
			void Release();
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
			~ThreadLocalStorage<details::ThreadFailureCallbackHolder *>();
		};

		details_abi::ProcessLocalStorage<details_abi::ProcessLocalData> * g_pProcessLocalData;
		details_abi::ThreadLocalData * GetThreadLocalDataCache(bool);
	};

	bool (* g_pfnIsDebuggerPresent)();
	bool g_fBreakOnFailure;
	bool g_fIsDebuggerPresent;
	bool g_fResultOutputDebugString;
	bool g_fResultThrowPlatformException;
	long (* g_pfnResultFromCaughtException)();
	long GetFailureLogString(unsigned short *,unsigned __int64,wil::FailureInfo const &);
	void SetLastError(wil::FailureInfo const &);
};

HINSTANCE__ * g_wil_details_ntdllModuleHandle;
Microsoft::WRL::Wrappers::CriticalSection PDCLock;
TelemetryManager g_TelemetryManager;
_GUID const MicrosoftWindowsNotificationBrokerControlGuid;
int IsEmptyOrNullString(unsigned short const *);
int IsFirstOccurrenceOfReadyToReboot(UxAttentionRequiredReason,unsigned short const *);
int powerPDCCount;
long AssignString(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
long GetWUDeviceID(_GUID *);
long OtaUpdatesPerSkuGetDataMigrationResults(int *);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long StringCchVPrintfW(unsigned short *,unsigned __int64,unsigned short const *,char *);
long StringToGuid(unsigned short const *,_GUID *);
long WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Foundation::IAsyncOperation<bool> >(Windows::Foundation::IAsyncOperation<bool> *,tagCOWAIT_FLAGS,void *);
long __CxxUnhandledExceptionFilter(_EXCEPTION_POINTERS *);
unsigned short const * const RuntimeClass_Windows_Foundation_Uri;
unsigned short const * const RuntimeClass_Windows_System_Launcher;
unsigned short const * const gc_szBrokerArgDisplay;
unsigned short const * const gc_szBrokerArgEngagedRebootReminder;
unsigned short const * const gc_szBrokerArgForcedReboot;
unsigned short const * const gc_szBrokerArgForcedRebootReminder;
unsigned short const * const gc_szBrokerArgForcedRebootRetry;
unsigned short const * const gc_szBrokerArgLogonDisplay;
unsigned short const * const gc_szBrokerArgLogonMigrationResults;
unsigned short const * const gc_szBrokerArgLogonReadyToReboot;
unsigned short const * const gc_szBrokerArgLogonReboot;
unsigned short const * const gc_szBrokerArgLogonRebootDialog;
unsigned short const * const gc_szBrokerArgLogonRebootReminder;
unsigned short const * const gc_szBrokerArgLogonRebootResults;
unsigned short const * const gc_szBrokerArgReadyToReboot;
unsigned short const * const gc_szBrokerArgReboot;
unsigned short const * const gc_szBrokerArgRebootDialog;
unsigned short const * const gc_szBrokerArgRebootReminder;
unsigned short const * const gc_szBrokerLogonDisplayUpdateSchedule;
unsigned short const * const gc_szBrokerLogonMigrationResultsSchedule;
unsigned short const * const gc_szBrokerLogonRebootSchedule;
unsigned short const * const gc_szBrokerLogonUpdateResultsSchedule;
unsigned short const * const gc_szBrokerRebootSchedule;
unsigned short const * const gc_szBrokerUpdateIntervalSchedule;
unsigned short const * const gc_szNotifyTrayIconClassName;
unsigned short const * const gc_szNotifyTrayIconWindowName;
unsigned short const * const gc_szUxArgDialogAllowSchedulingFirstReminder;
unsigned short const * const gc_szUxArgDialogAllowSchedulingForcedReminder;
unsigned short const * const gc_szUxArgDialogAllowSchedulingRebootFailed;
unsigned short const * const gc_szUxArgDialogAllowSchedulingSecondReminder;
unsigned short const * const gc_szUxArgDialogAllowSchedulingThirdReminder;
unsigned short const * const gc_szUxArgDialogAllowSchedulingWarning;
unsigned short const * const gc_szUxArgDialogCantDownloadUpdate;
unsigned short const * const gc_szUxArgDialogCantInstallUpdate;
unsigned short const * const gc_szUxArgDialogDataMigrationFailed;
unsigned short const * const gc_szUxArgDialogDownloadAvailable;
unsigned short const * const gc_szUxArgDialogEngagedFourthReminder;
unsigned short const * const gc_szUxArgDialogEnhancedEngagedAutoAcceptReminder;
unsigned short const * const gc_szUxArgDialogEnhancedEngagedFirstReminder;
unsigned short const * const gc_szUxArgDialogEnhancedEngagedForcedPrecursor;
unsigned short const * const gc_szUxArgDialogEnhancedEngagedForcedWarning;
unsigned short const * const gc_szUxArgDialogEnhancedEngagedRebootFailed;
unsigned short const * const gc_szUxArgDialogEnhancedEngagedRebootImminent;
unsigned short const * const gc_szUxArgDialogEnhancedEngagedSecondReminder;
unsigned short const * const gc_szUxArgDialogEnhancedEngagedThirdReminder;
unsigned short const * const gc_szUxArgDialogInstallNeedEula;
unsigned short const * const gc_szUxArgDialogInstallNeedUserAgreement;
unsigned short const * const gc_szUxArgDialogLowUptime;
unsigned short const * const gc_szUxArgDialogRebootActiveHoursForcedReminder;
unsigned short const * const gc_szUxArgDialogRebootActiveHoursForcedWarning;
unsigned short const * const gc_szUxArgDialogRebootActiveHoursImminent;
unsigned short const * const gc_szUxArgDialogRebootActiveHoursUserSelected;
unsigned short const * const gc_szUxArgDialogRebootIPostponeMgmt;
unsigned short const * const gc_szUxArgDialogRebootImminent;
unsigned short const * const gc_szUxArgDialogRebootWarning;
unsigned short const * const gc_szUxArgDialogScheduleUpdate;
unsigned short const * const gc_szUxArgDialogScheduleUpdateFailed;
unsigned short const * const gc_szUxArgToastCompatIssue;
unsigned short const * const gc_szUxArgToastDownloadNeedMoreSpace;
unsigned short const * const gc_szUxArgToastDownloadNeedUserAgreement;
unsigned short const * const gc_szUxArgToastDownloadNeedWifi;
unsigned short const * const gc_szUxArgToastDownloadViaCellularNeedUserAgreement;
unsigned short const * const gc_szUxArgToastEngagedFirstReminder;
unsigned short const * const gc_szUxArgToastEngagedRebootFailed;
unsigned short const * const gc_szUxArgToastEngagedRebootWarning;
unsigned short const * const gc_szUxArgToastEngagedSecondReminder;
unsigned short const * const gc_szUxArgToastEngagedThirdReminder;
unsigned short const * const gc_szUxArgToastInstallBlocked;
unsigned short const * const gc_szUxArgToastInstallNeedEula;
unsigned short const * const gc_szUxArgToastInstallNeedMoreSpace;
unsigned short const * const gc_szUxArgToastLowUptime;
unsigned short const * const gc_szUxArgToastMeteredConnection;
unsigned short const * const gc_szUxArgToastNotifyToDownload;
unsigned short const * const gc_szUxArgToastNotifyToInstall;
unsigned short const * const gc_szUxArgToastPersistentReadyToReboot;
unsigned short const * const gc_szUxArgToastReadyToReboot;
unsigned short const * const gc_szUxArgToastReadyToRebootGhost;
unsigned short const * const gc_szUxArgToastRebootActiveHoursForcedReminder;
unsigned short const * const gc_szUxArgToastRebootActiveHoursImminent;
unsigned short const * const gc_szUxArgToastRebootReminder;
unsigned short const * const gc_szUxArgToastRemoveReadyToReboot;
unsigned short const * const gc_szUxArgToastUpdateFailed;
unsigned short const * const gc_szUxArgToastUpdateSuccessful;
unsigned short const * const gc_szUxArgToastUpdateSuccessfulWithMitigation;
void * operator new(unsigned __int64);
void * operator new(unsigned __int64,std::nothrow_t const &);
void * powerPDCHandle;
void _com_issue_error(long);
void _com_raise_error(long,IErrorInfo *);
void operator delete(void *);
