namespace ATL
{
	struct CComPtr<IMusDialogHandler>
	{
		~CComPtr<IMusDialogHandler>();
	};

	struct CComPtr<IServiceProvider>
	{
		~CComPtr<IServiceProvider>();
	};

	struct CComPtr<IStream>
	{
		~CComPtr<IStream>();
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

	struct CComPtr<IWpnAppEndpoint2>
	{
		~CComPtr<IWpnAppEndpoint2>();
	};

	struct CComPtr<IWpnAppEndpoint>
	{
		~CComPtr<IWpnAppEndpoint>();
	};

	struct CComPtr<IWpnPlatform>
	{
		~CComPtr<IWpnPlatform>();
	};

	struct CComPtr<IXmlReader>
	{
		~CComPtr<IXmlReader>();
	};

};

struct CCoInit
{
	~CCoInit();
};

struct EnvironmentUtil
{
	static int IsConvergedUpdateStackEnabled();
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

class InteractiveToast
{
protected:
	static MusUxRestartDeferralReasonProperty const * const uxDeferReasonMap;
	static MusUxToastProperty const * const uxToastMap;
	static MusUxToastTemplateProperty const * const uxToastTemplateMap;
	static long BuildForcedReminderToastPayload(unsigned long,MusUxToastProperty const *,IUsoSession *,bool,UxElementArgs,unsigned short * *);
	static long BuildLowDiskToastPayload(unsigned long,MusUxToastProperty const *,IUsoSession *,bool,UxElementArgs,unsigned short * *);
	static long BuildNotifyUpdatesToastPayload(unsigned long,MusUxToastProperty const *,IUsoSession *,bool,UxElementArgs,unsigned short * *);
	static long BuildRebootFailedToastPayload(unsigned long,MusUxToastProperty const *,IUsoSession *,bool,UxElementArgs,unsigned short * *);
	static long BuildRebootImminentToastPayload(unsigned long,MusUxToastProperty const *,IUsoSession *,bool,UxElementArgs,unsigned short * *);
	static long BuildRebootWarningToastPayload(unsigned long,MusUxToastProperty const *,IUsoSession *,bool,UxElementArgs,unsigned short * *);
	static long BuildSnoozeToastPayload(unsigned long,MusUxToastProperty const *,IUsoSession *,bool,UxElementArgs,unsigned short * *);
	static long GetScheduledRebootTime(unsigned long,IUsoSession *,_SYSTEMTIME *);
	static long PostToast(unsigned long,MusUxState,MusUxToastProperty const *,IUsoSession *,bool);
public:
	static bool IsFeatureUpdate(IUsoSession *);
	static long DisplayToast(unsigned long,MusUxState,IUsoSession *,unsigned long *);
	static long InvokeRestartNow();
	static long InvokeUsoScheduleReboot(IUsoSession *);
	static long LaunchSettingsToScheduleReboot(IUsoSession *);
	static long RegisterClassW();
	static long ScheduleInteractiveReboot(IUsoSession *,unsigned short const *);
	static long SnoozeReboot(IUsoSession *,unsigned short const *);
	static unsigned short const * const engagedLaunchSettingsToScheduleRebootUri;
	static unsigned short const * const engagedScheduleRebootUri;
	static unsigned short const * const engagedSnoozeReminderUri;
	static unsigned short const * const toastForcedReminder;
	static unsigned short const * const toastLowDisk;
	static unsigned short const * const toastRebootFailed;
	static unsigned short const * const toastRebootImminent;
	static unsigned short const * const toastRebootWarning;
	static unsigned short const * const toastReminder;
	static unsigned short const * const userResponseFixIssues;
	static unsigned short const * const userResponsePickTime;
	static unsigned short const * const userResponseRestartAsPlanned;
	static unsigned short const * const userResponseRestartLater;
	static unsigned short const * const userResponseRestartNow;
	static unsigned short const * const userResponseSnooze;
	static unsigned short const * const windowsUpdateHomePageUri;
	static unsigned short const * const windowsUpdateRestartNowUri;
};

typedef struct NOTIFICATION_USER_INPUT_DATA {
	LPCWSTR Key;
	LPCWSTR Value;
} NOTIFICATION_USER_INPUT_DATA;

struct InteractiveToastActivationHandler
{
	virtual long Activate(unsigned short const *,unsigned short const *,NOTIFICATION_USER_INPUT_DATA const *,unsigned long);
};

struct LoggingUtil
{
	static void LogRebootScheduledTelemetryEvent(IUsoSession *,_TlgProvider_t const * const,_SYSTEMTIME,DefaultRebootUxState,unsigned short const *,int,int,int);
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

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,INotificationActivationCallback>
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

			long CreateClassFactory<SimpleClassFactory<InteractiveToastActivationHandler,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
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

		struct SimpleClassFactory<InteractiveToastActivationHandler,0>
		{
			virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
		};

	};

};

struct MusStringUtil
{
	static long FormatMessageFromStringAlloc(unsigned short * *,unsigned short const *,...);
};

struct MusToastNotification
{
	static long BuildToastPayload(unsigned int,unsigned int,unsigned short const *,unsigned long,bool,unsigned short * *);
	static long Display(unsigned int,unsigned int,unsigned short const *,unsigned long,bool,bool);
	static long PostToastNotification(unsigned int,unsigned int,unsigned short const *,unsigned long,bool,bool);
	static long RemoveToastNotification(unsigned int);
	static unsigned short const * const sc_szSystemPackageName;
	static unsigned short const * const sc_szWUAppId;
	static unsigned short const * const sc_szWUGroup;
	static unsigned short const * const sc_szWUTag;
};

class MusUxStateAction
{
	static char const * EnhancedEngagedResponseToString(unsigned long);
	static void SendDialogDisplayedEvent(unsigned short const *,MusUxState,unsigned long,bool,tagUsoUpdateIdentifier);
	static void SendDialogToBeDisplayedEvent(unsigned short const *,IUsoSession *,MusUxState);
protected:
	static MusUxEnhandedEngagedDialogProperty const * const musUxDialogMap;
	static MusUxNotificationProperty const * const sc_rgMusUxNotificationMap;
	static char const * const * const allNotificationUxStates;
	static char const * const * const allRebootUxStates;
	static long GetMgmtUpdatePolicy(IUsoSession *,MgmtUpdatePolicy *);
public:
	static long DisplayDialog(unsigned long,MusUxState,unsigned long,IUsoSession *,unsigned long *);
	static long DisplayMusUxState(unsigned long,MusUxState,IUsoSession *,unsigned long *);
	static long FindMusUxState(unsigned short const *,MusUxState *);
	static long GetLastRebootAttemptTime(IUsoSession *,_SYSTEMTIME *);
	static long GetScheduledRebootTime(unsigned long,IUsoSession *,_SYSTEMTIME *);
	static long LaunchEnhancedEngagedRebootReminderDialog(IUsoSession *,unsigned long,tagUxDialogInfo,MusUxRebootTimeType,unsigned long *,MusUxState);
	static long LaunchNotificationDialog(MusUxState,unsigned long,unsigned long *);
	static long LaunchRebootActiveHoursForcedReminderDialog(unsigned long,unsigned long,IUsoSession *,unsigned long *);
	static long LaunchRebootActiveHoursForcedWarningDialog(unsigned long,IUsoSession *,unsigned long *);
	static long LaunchRebootActiveHoursImminentDialog(unsigned long,IUsoSession *,unsigned long *);
	static long LaunchRebootActiveHoursUserSelectedDialog(unsigned long,IUsoSession *,unsigned long *);
	static long LaunchRebootAllowSchedulingFirstReminderDialog(unsigned long *);
	static long LaunchRebootAllowSchedulingRebootFailedDialog(IUsoSession *,unsigned long *);
	static long LaunchRebootAllowSchedulingSecondReminderDialog(unsigned long *);
	static long LaunchRebootAllowSchedulingThirdReminderDialog(unsigned long *);
	static long LaunchRebootAllowSchedulingWarningDialog(unsigned long,IUsoSession *,unsigned long *);
	static long LaunchRebootEngagedFourthReminderDialog(unsigned long *);
	static long LaunchRebootImminentDialog(unsigned long,IUsoSession *,unsigned long *);
	static long LaunchRebootPostponeMgmtDialog(unsigned long,IUsoSession *,unsigned long *);
	static long LaunchRebootWarningDialog(unsigned long,IUsoSession *,unsigned long *);
	static long LaunchSettingsPage(unsigned short const *,bool);
	static long LoadConfigString(UxElementArgs,unsigned int,unsigned short * *);
	static long ShowToastRebootReminder(unsigned long,unsigned int,unsigned int,IUsoSession *);
	static unsigned short const * const sc_szSettingsUpdateMainPageUri;
	static unsigned short const * const sc_szSettingsUpdateRestartOptionPageUri;
};

struct NotificationUxLogging
{
	static _TlgProvider_t const * Provider();
};

class NotificationUxTelemetry
{
protected:
	static NotificationUxTelemetry * Instance();
public:
	void ActiveHoursRebootImminentDialogDisplayed_(unsigned long,tagUsoUpdateIdentifier);
	void ActiveHoursUserScheduledRebootDialogDisplayed_(unsigned long,tagUsoUpdateIdentifier);
	void EngagedRebootFailedDialogDisplayed_(unsigned long,bool,tagUsoUpdateIdentifier);
	void EngagedRebootFirstReminderDialogDisplayed_(unsigned long,bool,tagUsoUpdateIdentifier);
	void EngagedRebootForcedReminderDialogDisplayed_(unsigned long,tagUsoUpdateIdentifier);
	void EngagedRebootFourthReminderDialogDisplayed_(unsigned long,bool,tagUsoUpdateIdentifier);
	void EngagedRebootSecondReminderDialogDisplayed_(unsigned long,bool,tagUsoUpdateIdentifier);
	void EngagedRebootThirdReminderDialogDisplayed_(unsigned long,bool,tagUsoUpdateIdentifier);
	void EngagedRebootUserScheduledRebootDialogDisplayed_(unsigned long,bool,tagUsoUpdateIdentifier);
	void EnhancedEngagedForcedWarningDialogDisplayed_(unsigned short const *,unsigned long,char const *,tagUsoUpdateIdentifier);
	void EnhancedEngagedRebooForcedPrecursorDialogDisplayed_(unsigned short const *,unsigned long,char const *,tagUsoUpdateIdentifier);
	void EnhancedEngagedRebootAcceptAutoDialogDisplayed_(unsigned short const *,unsigned long,char const *,tagUsoUpdateIdentifier);
	void EnhancedEngagedRebootFailedDialogDisplayed_(unsigned short const *,unsigned long,char const *,tagUsoUpdateIdentifier);
	void EnhancedEngagedRebootFirstReminderDialogDisplayed_(unsigned short const *,unsigned long,char const *,tagUsoUpdateIdentifier);
	void EnhancedEngagedRebootImminentDialogDisplayed_(unsigned short const *,unsigned long,char const *,tagUsoUpdateIdentifier);
	void EnhancedEngagedRebootSecondReminderDialogDisplayed_(unsigned short const *,unsigned long,char const *,tagUsoUpdateIdentifier);
	void EnhancedEngagedRebootThirdReminderDialogDisplayed_(unsigned short const *,unsigned long,char const *,tagUsoUpdateIdentifier);
	void ForcedRebootReminderDialogDisplayed_(tagUsoUpdateIdentifier);
	void NotificationToBeDisplayed_(unsigned long,char const *,unsigned long,char const *,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,int,int,unsigned short const *,_SYSTEMTIME,tagUsoUpdateIdentifier);
	void RebootReminderToastDisplayed_();
	void RebootWithUXCalled_(long);
	void ResponseFromNotificationUx_(long);
	void ToastNotificationDisplayed_(unsigned int,int,tagUsoUpdateIdentifier);
	void ToastNotificationResponse_(unsigned short const *,unsigned short const *,unsigned short const *,int);
	void UpdateModalDialogLaunched_();
	void UpdateToastLaunched_();
};

struct NotificationUxTracelogging
{
	static void InvalidNotificationUxState(unsigned int);
	static void NotificationUxLaunched(unsigned short const *);
	static void ToastNotificationCallFailed(long);
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
	static long GetEnforcedAuPolicy(IUsoSession *,NormalizedPolicy *);
	static long GetMgmtNotificationPolicies(IUsoSession *,MgmtUpdatePolicy *);
	static long GetMgmtUpdatePolicy(IUsoSession *,_TlgProvider_t const * const,MgmtUpdatePolicy *);
	static long GetPolicyStatus(IUsoSession *,NormalizedPolicy,UpdatePolicyStatus *,PolicyStore *);
	static long GetPolicyValue(IUsoSession *,NormalizedPolicy,UpdatePolicyStatus *,tagVARIANT *,PolicyStore *);
	static unsigned long const * const msc_AutoRestartNotificationSchdInMinsValidSet;
	static unsigned long const * const msc_RestartWarnRemindSchdInHoursValidSet;
	static unsigned long const * const msc_RestartWarnSchdInMinsValidSet;
};

class RebootHelper
{
	static long RebootWithFlags(unsigned long,unsigned long);
protected:
	static long ShellReboot();
public:
	static long AdjustProcessPrivilege(unsigned long,bool);
	static long RebootSystemWithUX();
};

class RebootTimeUtility
{
	static unsigned short const * const c_szFlightPendingCommit;
	static unsigned short const * const c_szFlightRebootTime;
	static unsigned short const * const c_szUpdateRebootTime;
public:
	static int IsFlightPendingCommit();
	static long GetLastRebootMarkedTime(bool,_FILETIME *);
};

class RegistryManager
{
protected:
	static unsigned short const * const * const c_rgszUpdateRegKeyName;
public:
	static long GetRegDword(HKEY__ *,unsigned short const *,unsigned short const *,unsigned long *);
	static long GetRegQword(HKEY__ *,unsigned short const *,unsigned short const *,unsigned __int64 *);
	static long GetRegistryKeyName(RegistryKeyTypes,unsigned short *,unsigned __int64);
	static long GetStringRegKey(HKEY__ *,unsigned short const *,unsigned short const *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	static long GetStringRegKey(HKEY__ *,unsigned short const *,unsigned short const *,unsigned short *,unsigned long *);
	static long OpenRegKey(RegistryKeyTypes,unsigned long,bool,HKEY__ * *);
	static long RegValueExists(HKEY__ *,unsigned short const *,unsigned short const *,int *);
	static long SetRegDword(HKEY__ *,unsigned short const *,unsigned short const *,unsigned long);
};

class SettingUtil
{
protected:
	static unsigned short const * const msc_szUxSchedulePickerOptionName;
public:
	static DefaultRebootUxState GetDefaultRebootUxState(_FILETIME,_SYSTEMTIME,IUsoSession *,_TlgProvider_t const * const,bool);
	static DefaultRebootUxState GetEnhancedEngagedRebootUxState(_FILETIME,_SYSTEMTIME,IUsoSession *,_TlgProvider_t const * const);
	static bool IsDeviceTimeOutsideRebootBounds(_FILETIME,_FILETIME,unsigned long,_TlgProvider_t const * const);
	static int IsRebootScheduledByUser(IUsoSession *);
	static long GetEngagedRestartPolicy(IUsoSession *,_TlgProvider_t const * const,EngagedRestartPolicy *);
	static long SetSchedulePickerOption(IUsoSession *,SchedulePickerOption);
	static unsigned long GetAutoRebootMaxValidDays(IUsoSession *,_TlgProvider_t const * const);
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
	static long AddHoursToFileTime(unsigned long,_FILETIME,_FILETIME *);
	static long AddHoursToSystemTime(unsigned long,_SYSTEMTIME,_SYSTEMTIME *);
	static long AddMinutesToSystemTime(unsigned long,_SYSTEMTIME,_SYSTEMTIME *);
	static long GetMinutesBetweenFileTimes(_FILETIME,_FILETIME,unsigned long *);
	static long GetMinutesBetweenSystemTimes(_SYSTEMTIME,_SYSTEMTIME,unsigned long *);
	static long SubtractMinutesFromFileTime(unsigned long,_FILETIME,_FILETIME *);
	static long SubtractMinutesFromSystemTime(unsigned long,_SYSTEMTIME,_SYSTEMTIME *);
	static unsigned __int64 FileTimeToULongLong(_FILETIME);
};

struct TrustHelper
{
	static long VerifyCertificateChain(_CERT_CHAIN_CONTEXT const *);
	static long VerifyFile(unsigned short const *);
};

class UXElementStore
{
	struct UXStringValueElement
	{
		~UXStringValueElement();
	};

	long CheckIfScenarioApplicable(XmlReader *,unsigned long);
	long ExtractCurrentScenario(XmlReader *);
	long ExtractValues(XmlReader *,unsigned long,UXElementType);
	long GetFilePath(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	long GetImageFilePath(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	long GetUserLocale(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	long GetXmlFilePath(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	static UXElementStore::ElementTypeTag const * const elementTypeToXmlTagMap;
	static UXElementStore::ScenarioTag const * const scenarioToXmlTagMap;
	static unsigned short const * const campaignElementName;
	static unsigned short const * const friendlyNameAttributeName;
	static unsigned short const * const idAttributeName;
	static unsigned short const * const settingsErrorStyle;
	static unsigned short const * const stringValueElementName;
	static unsigned short const * const styleElementName;
public:
	UXElementStore();
	long GetStringValue(UXElementType,unsigned long,unsigned short const * *);
	long Initialize(UXScenario,_TlgProvider_t const * const);
};

class UnpHelper
{
	static unsigned short const * const campaignGuidRegValue;
public:
	static long GetCampaignGuid(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
};

class UpdateUtil
{
protected:
	static ErrorState GetErrorStateFromUpdateStatusInfo(tagUpdateStatusInfo const &);
	static ErrorState const * const gc_rgErrorPriority;
	static unsigned short const * const sc_szUxFirstEnhancedUxStateTime;
	static unsigned short const * const sc_szUxLastAttemptedRebootTime;
	static unsigned short const * const sc_szUxLastToastAction;
	static unsigned short const * const sc_szUxRebootConfirmedByUser;
	static unsigned short const * const sc_szUxRebootScheduledByUser;
	static unsigned short const * const sc_szUxScheduledRebootTime;
public:
	static bool IsDirectToEngagedRebootEnabled(IUsoSession *,_TlgProvider_t const * const);
	static bool IsFeatureUpdate(IUsoUpdate *,_TlgProvider_t const * const);
	static bool IsFeatureUpdatePending(IUsoSession *,bool,_TlgProvider_t const * const);
	static long GetETag(_TlgProvider_t const * const,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	static long GetFirstEnhancedUxStateTime(IUsoSession *,_FILETIME *);
	static long GetLastToastAction(unsigned long *);
	static long GetRestartRequiredUpdateIdentifiers(IUsoSession *,_TlgProvider_t const * const,std::vector<tagUsoUpdateIdentifier,std::allocator<tagUsoUpdateIdentifier> > &);
	static long GetScheduledRebootFailed(IUsoSession *,unsigned short const *,short *,_SYSTEMTIME *);
	static long GetScheduledRebootTime(IUsoSession *,_SYSTEMTIME *);
	static long GetUpdatePayloadInfo(IUsoUpdateCollection *,PayloadInfo *,_TlgProvider_t const * const,IUsoSession *,unsigned long);
	static long SetLastToastAction(unsigned long);
	static long SetRebootScheduledByUser(IUsoSession *,short);
	static long SetScheduledRebootTime(IUsoSession *,_SYSTEMTIME);
	static unsigned long GetRebootScheduleMaxValidDays(IUsoSession *);
	static unsigned short const * const sc_szUxAutoAcceptShownToUser;
	static unsigned short const * const sc_szUxScheduledRebootFailed;
	static void GetEnhancedEngagedSettings(IUsoSession *,_TlgProvider_t const * const,EnhancedEngagedSettings *);
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

	struct _Ptr_base<unsigned char>
	{
		void _Reset0(unsigned char *,_Ref_count_base *);
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

	struct _System_error_category
	{
		virtual basic_string<char,char_traits<char>,allocator<char> > message(int);
		virtual char const * name();
		virtual error_condition default_error_condition(int);
	};

	class _Tree<_Tmap_traits<unsigned int,UXElementStore::UXStringValueElement,less<unsigned int>,allocator<pair<unsigned int const ,UXElementStore::UXStringValueElement> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned int const ,UXElementStore::UXStringValueElement> > > > _Insert_at<pair<unsigned int const ,UXElementStore::UXStringValueElement> &,_Tree_node<pair<unsigned int const ,UXElementStore::UXStringValueElement>,void *> *>(bool,_Tree_node<pair<unsigned int const ,UXElementStore::UXStringValueElement>,void *> *,pair<unsigned int const ,UXElementStore::UXStringValueElement> &,_Tree_node<pair<unsigned int const ,UXElementStore::UXStringValueElement>,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned int const ,UXElementStore::UXStringValueElement> > > >,bool> _Insert_nohint<pair<unsigned int const ,UXElementStore::UXStringValueElement> &,_Tree_node<pair<unsigned int const ,UXElementStore::UXStringValueElement>,void *> *>(bool,pair<unsigned int const ,UXElementStore::UXStringValueElement> &,_Tree_node<pair<unsigned int const ,UXElementStore::UXStringValueElement>,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<unsigned int const ,UXElementStore::UXStringValueElement>,void *> *);
		void _Erase(_Tree_node<pair<unsigned int const ,UXElementStore::UXStringValueElement>,void *> *);
	public:
		~_Tree<_Tmap_traits<unsigned int,UXElementStore::UXStringValueElement,less<unsigned int>,allocator<pair<unsigned int const ,UXElementStore::UXStringValueElement> >,0> >();
	};

	class _Tree<_Tmap_traits<unsigned int,UXElementStore::UXStyleElement,less<unsigned int>,allocator<pair<unsigned int const ,UXElementStore::UXStyleElement> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned int const ,UXElementStore::UXStyleElement> > > > _Insert_at<pair<unsigned int const ,UXElementStore::UXStyleElement> &,_Tree_node<pair<unsigned int const ,UXElementStore::UXStyleElement>,void *> *>(bool,_Tree_node<pair<unsigned int const ,UXElementStore::UXStyleElement>,void *> *,pair<unsigned int const ,UXElementStore::UXStyleElement> &,_Tree_node<pair<unsigned int const ,UXElementStore::UXStyleElement>,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned int const ,UXElementStore::UXStyleElement> > > >,bool> _Insert_nohint<pair<unsigned int const ,UXElementStore::UXStyleElement> &,_Tree_node<pair<unsigned int const ,UXElementStore::UXStyleElement>,void *> *>(bool,pair<unsigned int const ,UXElementStore::UXStyleElement> &,_Tree_node<pair<unsigned int const ,UXElementStore::UXStyleElement>,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<unsigned int const ,UXElementStore::UXStyleElement>,void *> *);
		void _Erase(_Tree_node<pair<unsigned int const ,UXElementStore::UXStyleElement>,void *> *);
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<unsigned int const ,UXElementStore::UXStringValueElement>,allocator<pair<unsigned int const ,UXElementStore::UXStringValueElement> > > >
	{
		_Tree_node<pair<unsigned int const ,UXElementStore::UXStringValueElement>,void *> * _Buyheadnode();
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<unsigned int const ,UXElementStore::UXStyleElement>,allocator<pair<unsigned int const ,UXElementStore::UXStyleElement> > > >
	{
		_Tree_node<pair<unsigned int const ,UXElementStore::UXStyleElement>,void *> * _Buyheadnode();
	};

	struct _Tree_buy<pair<unsigned int const ,UXElementStore::UXStringValueElement>,allocator<pair<unsigned int const ,UXElementStore::UXStringValueElement> > >
	{
		_Tree_node<pair<unsigned int const ,UXElementStore::UXStringValueElement>,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<unsigned int const ,UXElementStore::UXStringValueElement>,void *> *);
	};

	struct _Tree_buy<pair<unsigned int const ,UXElementStore::UXStyleElement>,allocator<pair<unsigned int const ,UXElementStore::UXStyleElement> > >
	{
		_Tree_node<pair<unsigned int const ,UXElementStore::UXStyleElement>,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<unsigned int const ,UXElementStore::UXStyleElement>,void *> *);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<unsigned int const ,UXElementStore::UXStringValueElement>,void *> > >
	{
		void deallocate(_Tree_node<pair<unsigned int const ,UXElementStore::UXStringValueElement>,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<unsigned int const ,UXElementStore::UXStyleElement>,void *> > >
	{
		void deallocate(_Tree_node<pair<unsigned int const ,UXElementStore::UXStyleElement>,void *> *,unsigned __int64);
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
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & append(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,unsigned __int64,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & append(unsigned __int64,unsigned short);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & append(unsigned short const *,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & assign(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,unsigned __int64,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & assign(unsigned short const *,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & erase(unsigned __int64,unsigned __int64);
		int compare(unsigned __int64,unsigned __int64,unsigned short const *,unsigned __int64);
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

	struct map<unsigned int,UXElementStore::UXStringValueElement,less<unsigned int>,allocator<pair<unsigned int const ,UXElementStore::UXStringValueElement> > >
	{
		~map<unsigned int,UXElementStore::UXStringValueElement,less<unsigned int>,allocator<pair<unsigned int const ,UXElementStore::UXStringValueElement> > >();
	};

	struct num_put<char,back_insert_iterator<basic_string<char,char_traits<char>,allocator<char> > > >
	{
		static locale::id id;
	};

	struct num_put<unsigned short,back_insert_iterator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
		static locale::id id;
	};

	struct pair<unsigned int,UXElementStore::UXStringValueElement>
	{
		~pair<unsigned int,UXElementStore::UXStringValueElement>();
	};

	class shared_ptr<unsigned char>
	{
		void _Resetp<unsigned char>(unsigned char *);
	public:
		shared_ptr<unsigned char> & operator=(shared_ptr<unsigned char> const &);
		~shared_ptr<unsigned char>();
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

		bool (* g_pfnGetModuleInformation)(void *,unsigned int *,char *,unsigned __int64);
		bool K32GetModuleInformation(void *,unsigned int *,char *,unsigned __int64);
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
Microsoft::WRL::ComPtr<Microsoft::WRL::SimpleClassFactory<InteractiveToastActivationHandler,0> > g_toastFactory;
Microsoft::WRL::Details::CreatorMap const __object_InteractiveToastActivationHandler_COM;
Microsoft::WRL::Details::FactoryCache __objectFactory__InteractiveToastActivationHandler_COM;
TelemetryManager g_TelemetryManager;
_GUID const MicrosoftWindowsNotificationUxControlGuid;
int IsEmptyOrNullString(unsigned short const *);
long AppendString(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &,unsigned short const * const);
long AssignString(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
long AssignString(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &,unsigned short const * const);
long CombineStringsWithSeparator(unsigned short const *,unsigned short const *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &,unsigned __int64,unsigned short);
long EncodeBase64W(unsigned char const *,int,unsigned short * *);
long GetWUDeviceID(_GUID *);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long StringCchVPrintfW(unsigned short *,unsigned __int64,unsigned short const *,char *);
long StringToGuid(unsigned short const *,_GUID *);
long WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Foundation::IAsyncOperation<bool> >(Windows::Foundation::IAsyncOperation<bool> *,tagCOWAIT_FLAGS,void *);
long __CxxUnhandledExceptionFilter(_EXCEPTION_POINTERS *);
unsigned long g_toastFactoryCookie;
unsigned short const * const RuntimeClass_Windows_Foundation_Uri;
unsigned short const * const RuntimeClass_Windows_System_Launcher;
unsigned short const * const gc_szBrokerArgEngagedRebootReminder;
unsigned short const * const gc_szBrokerArgForcedReboot;
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
unsigned short const * const gc_szUxArgReboot;
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
void * operator new[](unsigned __int64,std::nothrow_t const &);
void _com_issue_error(long);
void _com_raise_error(long,IErrorInfo *);
void operator delete(void *);
void operator delete(void *,std::nothrow_t const &);
