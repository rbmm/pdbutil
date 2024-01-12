class <lambda_0374aa0a5d1201b2358c6bce99369c58>
{
	static <lambda_invoker_cdecl>(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
};

struct <lambda_057488ec2a114cea6fb77af5c8c7453a>
{
	operator()(char const *,unsigned short &,unsigned short);
};

class <lambda_08f1c82b29815a719613edbe5441fd5f>
{
	static <lambda_invoker_cdecl>();
};

class <lambda_120d0c6b51dc644cb63ed5c7fc62f6c3>
{
	static <lambda_invoker_cdecl>();
};

class <lambda_152aa9d2a3a0648fa2fa7fcef514b376>
{
	static <lambda_invoker_cdecl>(void *);
};

class <lambda_1ad7ecfab602a777ecf020873216a663>
{
	static <lambda_invoker_cdecl>(void *);
};

class <lambda_5035b992506f4af81a770c5842624510>
{
	static <lambda_invoker_cdecl>(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
};

class <lambda_6d06f265fa78a56f9dca2a1b8c432f39>
{
	static <lambda_invoker_cdecl>();
};

class <lambda_a4f1c41dec224e2dc3606d5418c79a84>
{
	static <lambda_invoker_cdecl>();
};

class <lambda_aa194dc0bf891154933407eb98fb868a>
{
	static <lambda_invoker_cdecl>(void *);
};

class <lambda_d51448ba32f8ef42e59400edd4566183>
{
	static <lambda_invoker_cdecl>(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
};

class <lambda_f797ced12571d8b6384b94fd58acdc96>
{
	static <lambda_invoker_cdecl>();
};

class <lambda_fee8cea507d2413a58be13acfb66740a>
{
	static <lambda_invoker_cdecl>(void *);
};

struct AutoProviderRegistrar
{
	AutoProviderRegistrar(void (*)(),void (*)());
	~AutoProviderRegistrar();
};

class CDataStoreObject
{
protected:
	virtual unsigned long Initialize();
	virtual ~CDataStoreObject();
};

class CEasPolicySettings
{
	static CEasPolicySettings EasPolicySettings;
};

class CFveAutoPtr
{
	void Free();
public:
	unsigned long ClearAllFailedCounts();
	unsigned long GetFailedCountForSID(void *,unsigned long *);
	unsigned long Initialize(int,int *);
	unsigned long SetFailedCountForSID(void *,unsigned long,int *);
	unsigned long ValidateLockoutState(int *);
};

class CGlobalStore
{
	static unsigned long CopySwitchUserLogonInfoIntoContiguousBuffer(CGlobalStore::_SWITCH_USER_LOGON_INFO *,unsigned short const *,unsigned short const *,_MSV1_0_INTERACTIVE_PROFILE *,unsigned __int64,unsigned short const *,_CRED_PROV_CREDENTIAL *,void *,CGlobalStore::_SWITCH_USER_LOGON_INFO *);
	unsigned long FetchHKLMSoftwareWinlogon();
	void FreeInternalSwitchUserLogonInfo(CGlobalStore::_INTERNAL_SWITCH_USER_LOGON_INFO * *);
	void SetInternalSwitchUserLogonInfo(CGlobalStore::_INTERNAL_SWITCH_USER_LOGON_INFO,CGlobalStore::_INTERNAL_SWITCH_USER_LOGON_INFO *);
public:
	CGlobalStore();
	long GetGlobalTraceLoggingActivity(TraceLoggingActivity<&_tlgProvider_t const * const g_WinlogonProvider,70368744177664,5,_TlgReflectorTag_Param0IsHProvider> * *);
	long SetCredentialContext(unsigned short const *,CGlobalStore::CredentialContextType);
	long SetMsv10ProcessOptions(unsigned char,unsigned long);
	long StartGlobalTraceLoggingActivity(WinLogonActivityType);
	long StopAndDeleteGlobalTraceLoggingActivity(unsigned long,WinLogonActivityStopReason,WinLogonActivityType,int,int,int,unsigned long,int);
	static unsigned long DeserializeSwitchUserLogonInfo(unsigned char *,CGlobalStore::_SWITCH_USER_LOGON_INFO *);
	static unsigned long GetSizeSwitchUserLogonInfo(CGlobalStore::_SWITCH_USER_LOGON_INFO *);
	static void UpdateProfileBufferInternalPointers(_MSV1_0_INTERACTIVE_PROFILE *,unsigned __int64,unsigned long);
	unsigned long GetKerberosPackage(unsigned long *);
	unsigned long GetLogoffFlags();
	unsigned long GetLsaHandle(void * *);
	unsigned long GetMsv10Package(unsigned long *);
	unsigned long GetNegotiatePackage(unsigned long *);
	unsigned long IsKnownAuthenticationPackage(unsigned long,int *);
	unsigned long RegAllocAndQueryWinlogonSZ(unsigned short const *,unsigned short * *);
	unsigned long RegQueryWinlogonDWORD(unsigned short const *,unsigned long);
	unsigned long ReportApplicationEvent(unsigned short,unsigned long,unsigned long,void *,unsigned long,...);
	unsigned long SetCredentials(_CRED_PROV_CREDENTIAL *);
	unsigned long SetPostSwitchUserLogonInfo(CGlobalStore::_INTERNAL_SWITCH_USER_LOGON_INFO);
	unsigned long SetPreSwitchUserLogonInfo(CGlobalStore::_INTERNAL_SWITCH_USER_LOGON_INFO);
	unsigned long SetSwitchUserLogonInfo(CGlobalStore::_SWITCH_USER_LOGON_INFO *);
	unsigned long SetWebDialogUri(unsigned short const *);
	virtual unsigned long Initialize();
	virtual ~CGlobalStore();
	void * GetNotifyConfig(int,unsigned short const *);
	void FreeCredentialContext(CGlobalStore::CredentialContextType);
	void FreeCredentials();
	void FreeSwitchUserLogonInfo();
	void FreeSwitchUserTokenHandle();
	void FreeWebDialogUri();
	void SetLogoffFlags(unsigned long);
};

class CMachine
{
	unsigned long FetchMachineName();
public:
	CMachine();
	int IsAuditingLogFull();
	int IsDomainMember();
	int IsPPIEdition();
	int IsSecurePPIEdition();
	int IsSiHostIntegrationEnabled();
	unsigned long GetLastLogonInfoPolicy(int);
	unsigned long GetMachinePolicy(unsigned short const *,unsigned long);
	unsigned long GetName(unsigned short *,unsigned long *);
	unsigned long RegQueryDWORD(unsigned short const *,unsigned short const *,unsigned long,unsigned long *);
	virtual unsigned long Initialize();
	virtual ~CMachine();
};

class CSession
{
	_SESSIONTYPE QueryRemoteSessionType();
public:
	CSession();
	_DESKTOPID GetLockScreenDesktop(_WLSM_GLOBAL_CONTEXT *);
	int IsBoundToConsole();
	int IsDwmRequiredInSession();
	int IsLogonFromUnlockEnabled(void *);
	int IsRemoteLuidLogon();
	int IsShellRequiredInSession();
	int SetUserSwitchLogonInfoCollectedSyncEvent();
	static int GetDesktopName(HDESK__ *,unsigned short * *);
	unsigned long CreatePrimaryTerminal(_LUID *,int);
	unsigned long CreateScreenSaverDesktop(void *);
	unsigned long CreateUserSwitchLogonInfoCollectedSyncEvent();
	unsigned long GetInactivitySettings(_INACTIVITY_SETTINGS *);
	unsigned long GetLogonDialogTimeout(void *,int);
	unsigned long Initialize(CGlobalStore *);
	unsigned long SetInactivitySettings(_INACTIVITY_SETTINGS);
	unsigned long SetUserDesktopSecurity(_DESKTOPID,void *);
	unsigned long SubscribeForWnfNotifications();
	unsigned long TerminateAtJob();
	virtual ~CSession();
	void * GetAccessibilityJobObject(int);
	void AsyncSwitchDesktop(_DESKTOPID,unsigned long);
	void AsyncTurnOffMonitor();
	void CaptureInputDesktopForLockScreen();
	void DestroyScreenSaverDesktop();
	void InitializeDeviceEncryption();
	void PerformDelayedSwitchToApplicationDesktop(void *,int);
	void ResetAutoLock(CSession::AutoLockStopReason,unsigned long);
	void RestartNtuserInactivityTimer(void *);
	void SetAutoLock(CSession::AutoLockType,CSession::AutoLockStartReason);
	void SetInputDesktopCapturedBeforeLockAction(bool);
	void SetInputDesktopForLockScreenCaptured(bool);
	void SetSessionLocked(int);
	void SetShellStartupCompleteOrTimedOut(int);
	void SwitchDesktop(_DESKTOPID,int *,unsigned long,unsigned long);
	void WaitForAsyncSwitchDesktop();
	void WaitForMonitorOffThread();
	void WaitForUserSwitchLogonInfoCollectedSyncEvent();
};

struct CTraceCollector
{
	CTraceCollector();
	long EscalateScenario(unsigned long,bool);
	virtual unsigned long Initialize();
	virtual ~CTraceCollector();
	void HandleTraceCollectorHotKey(void *);
};

class CUser
{
	int IsGoodbyeAllowed();
	long SubscribeForDisplayRequestActivity();
	long SubscribeForUserPresenceMonitoring();
	static void LogonHoursActionCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
	static void LogonHoursWarningCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
	static void StartDeferredPostAuthenticationWorkTimerCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
	static void UserPresenceCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
	static void WinlogonKeyChangedCallback(void *,unsigned char);
	unsigned long LoadUserEnvironmentFromRegistry(unsigned short const *,CUser::_ENV_PASS,void * *);
	unsigned long LogonHoursTakeAction();
	unsigned long SetElevatedToken();
	unsigned long SetIsAdminFlag();
	unsigned long UpdateUserEnvironment(void * *);
	unsigned long UpdateUserNames();
	void CleanUp();
	void GetUserPresenceMonitorConfiguration(unsigned __int64 *,int *);
	void InitializeBalloonReminderEvents();
	void InitializeEventsAndTimers(void * *,void * *,_TP_WAIT * *,_TP_WAIT * *,unsigned short const *,void (*)(_TP_CALLBACK_INSTANCE *,void *,_TP_WAIT *,long));
	void StartUserPresencePollingUnderLock();
	void StopUserPresencePollingUnderLock();
	void TracePwdExpiryNotfn(CUser::PwdExpNotfnState,unsigned long,unsigned short *);
public:
	CUser();
	int IsCachedLogon();
	int IsLockWorkstationDisabled();
	int IsTaskMgrDisabled();
	int ShouldReportCachedLogon(unsigned long);
	int TestPrivilege(unsigned long,int);
	long ConfirmCredKeyAvailablePostProfileLoad(int *);
	long GetPwdResetInfo(_FILETIME *,unsigned short * *);
	unsigned int FilterSecurityOptions(unsigned int,_LSA_USER_ACCOUNT_TYPE);
	unsigned long AddUserToBNO(unsigned long);
	unsigned long ApplyLogonHoursRestrictions();
	unsigned long CreatePreNotifyEnvironment(unsigned short * *);
	unsigned long CreateProcessW(unsigned short const *,unsigned short *,unsigned long,_STARTUPINFOW *,_PROCESS_INFORMATION *,int);
	unsigned long CreateUserEnvironment(int,void * *);
	unsigned long GenerateLogoffInitiatedAudit();
	unsigned long GetUserSidString(unsigned short *,unsigned long);
	unsigned long ImpersonateUser(int);
	unsigned long Initialize(CGlobalStore *,CSession *,int);
	unsigned long InitializeLogonData(void *,_LUID,void *,_MSV1_0_INTERACTIVE_PROFILE *,ProfileSource,_FILETIME const &,_QUOTA_LIMITS *);
	unsigned long OpenHKeyCurrentUser();
	unsigned long RegQueryDWORD(unsigned short const *,unsigned short const *,unsigned long,unsigned long *);
	unsigned long RegQuerySZ(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short *,unsigned long);
	unsigned long RegSetDWORD(unsigned short const *,unsigned short const *,unsigned long);
	unsigned long RetrieveLastLogonInfo();
	unsigned long SetDomainName(unsigned short const *);
	unsigned long SetMprLogonScripts(unsigned short *);
	unsigned long SetSamCompatibleUserName(unsigned short const *);
	unsigned long SetUserName(unsigned short const *);
	unsigned long StartWinlogonRegistryKeyListener();
	unsigned long StopImpersonating();
	unsigned long UpdateLogonDataOnReconnect();
	unsigned long UpdateLogonDataOnUnlock(_MSV1_0_INTERACTIVE_PROFILE *,_FILETIME const &,_QUOTA_LIMITS *);
	unsigned short * GetLastLogonInfoMessage();
	void DeactivateLogonHoursTimers();
	void LogoffCleanup();
	void NotifyPasswordExpirationIfNecessary();
	void RestoreNetworkConnections(unsigned long);
	void StartDeferredPostAuthenticationWork();
	void StartUserPresencePolling(bool);
	void StopDeferredPostAuthenticationWork();
	void StopUserPresencePolling(bool);
	void StopWinlogonRegistryKeyListener();
};

struct CandidateAccountManagerPolicy
{
	static int IsAutoAadConnectEnabled();
	static int IsCachedSessionEnabled();
	static int IsSequentialLogonEnforced();
	static int IsSharedPCMode();
};

struct CandidateAccountManagerPolicyTraceProvider
{
	static void PolicyEnabled<unsigned short const (&)[13]>(unsigned short const (&)[13]);
	static void PolicyEnabled<unsigned short const (&)[15]>(unsigned short const (&)[15]);
};

namespace CreativeFramework
{
	namespace Policy
	{
		bool IsContentDeliveryPolicyEnforced();
	};

};

struct EncryptHandle
{
	static long CreateEncryptHandle(EncryptHandle * *,EncryptHandlerType);
	static void DestroyEncryptHandle(EncryptHandle *);
};

class InProcEncryptHandle
{
	virtual long _Initialize();
public:
	virtual long EasCloseVolume(void *);
	virtual long EasDisableDeviceLockoutState(void *);
	virtual long EasGetDeviceLockoutData(void *,unsigned char *,unsigned long *);
	virtual long EasIsDeviceLockable(void *);
	virtual long EasLockDevice(void *);
	virtual long EasOpenVolume(unsigned short const *,int,void * *);
	virtual long EasQueryProtectionStatus(_EasEncryptProvProtectionStatus_ *,long *);
	virtual long EasUpdateDeviceLockoutState(void *,unsigned char *,unsigned long);
	virtual long EasValidateDeviceLockoutState(void *);
	virtual ~InProcEncryptHandle();
};

namespace LockAppHelpers
{
	unsigned long SetLockScreenInputDesktop(unsigned short const *);
};

namespace Microsoft
{
	namespace Diagnostics
	{
		struct UtcApiWrapper
		{
			long DownloadLatestSettingsForNamespace2(unsigned short const *,unsigned short const *,int,int,int,unsigned int);
			long EscalateScenarioEx(unsigned short const *,unsigned short const *,int,int,__MIDL_UtcApiStructures_0004,unsigned long,unsigned short const * *,unsigned short const * *,UtcApiWrapper::AutoEscalationResultsList &);
			long Initialize(unsigned long);
			~UtcApiWrapper();
		};

	};

	namespace WRL
	{
		class ComPtr<Windows::Internal::AssignedAccess::IAssignedAccessUserInfo>
		{
		protected:
			unsigned long InternalRelease();
		};

		namespace Wrappers
		{
			class HStringReference
			{
				void CreateReference(unsigned short const *,unsigned int,unsigned int);
			};

		};

	};

};

namespace OOBE
{
	namespace CompleteTime
	{
		namespace details
		{
			long GetOOBECompleteKey(HKEY__ * *);
		};

	};

	namespace Health
	{
		namespace details
		{
			struct HealthTrackingInfo
			{
				long ToString(unsigned short * *);
			};

			struct OOBEHealthTracker
			{
				OOBEHealthTracker();
				static void HandleEvent<14,long>(long);
				static void HandleEvent<26,bool>(bool);
			};

			class OOBEScenarioEvents
			{
				long Evaluate();
				long GetImageIdentifier(unsigned short * *);
				void ReadInfo(HealthInfoHeader &,int,bool &,bool &,unsigned short const *);
				void SetHealthEventValueMember<bool>(bool &,bool const &);
				void SetHealthEventValueMember<int>(int &,int const &);
				void SetHealthEventValueMember<long>(long &,long const &);
			public:
				~OOBEScenarioEvents();
			};

		};

	};

};

class OutOfProcEncryptHandle
{
	long HResultFromRpcException(long);
	long WepHostClientInitializeRPC();
	virtual long _Initialize();
public:
	virtual long EasCloseVolume(void *);
	virtual long EasDisableDeviceLockoutState(void *);
	virtual long EasGetDeviceLockoutData(void *,unsigned char *,unsigned long *);
	virtual long EasIsDeviceLockable(void *);
	virtual long EasLockDevice(void *);
	virtual long EasOpenVolume(unsigned short const *,int,void * *);
	virtual long EasQueryProtectionStatus(_EasEncryptProvProtectionStatus_ *,long *);
	virtual long EasUpdateDeviceLockoutState(void *,unsigned char *,unsigned long);
	virtual long EasValidateDeviceLockoutState(void *);
	virtual ~OutOfProcEncryptHandle();
};

struct SH<void *,SH_HANDLE>
{
	void Reset();
};

struct SP<unsigned char,SP_HLOCAL<unsigned char> >
{
	void Attach(unsigned char *);
	void Reset();
};

struct SP<unsigned char,SP_MEM<unsigned char> >
{
	void Reset();
};

struct SP<unsigned long,SP_MEM<unsigned long> >
{
	void Reset();
};

struct SP<unsigned short *,SP_MEM<unsigned short *> >
{
	void Reset();
};

struct SP<unsigned short,SP_MEM<unsigned short> >
{
	void Reset();
};

namespace SystemManagedAccountUtil
{
	long GenerateComplexPassword(unsigned short * *);
	long GenerateComplexSuffix(unsigned short * *);
	long ScrambleString(Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short> > &);
	long ValidatePassword(unsigned short const *);
};

namespace TLV
{
	void Base64Encode<129>(unsigned char const *,unsigned __int64,char (&)[129]);
};

struct Timer
{
	unsigned __int64 Stop();
	unsigned long ElapsedULONG();
};

class TraceLoggingCorrelationVector
{
	bool ToStringImpl(unsigned __int64,char *);
public:
	TraceLoggingCorrelationVector();
};

class UsoCommitHelper
{
	static long RemoveCommitStatusKey();
public:
	static long IsShutdownAfterUpdateSetAndClearKey(int *,tagShutdownScenarios *);
	static long SetAndModifyShutdownFlags(unsigned long,unsigned long &);
};

namespace WARBIRD
{
	WARBIRD::_MODULE_INFO * g_arModuleInfo;
	void * * g_FuncAddress;
};

namespace WARBIRD_DELAY_LOAD
{
	HBITMAP__ * CreateCompatibleBitmap(HDC__ *,int,int);
	HBITMAP__ * CreateDIBSection(HDC__ *,tagBITMAPINFO const *,unsigned int,void * *,void *,unsigned long);
	HBRUSH__ * CreateSolidBrush(unsigned long);
	HDC__ * CreateCompatibleDC(HDC__ *);
	HDC__ * GetDC(HWND__ *);
	HDC__ * GetDCEx(HWND__ *,HRGN__ *,unsigned long);
	HDESK__ * GetThreadDesktop(unsigned long);
	HFONT__ * CreateFontIndirectW(tagLOGFONTW const *);
	HMONITOR__ * MonitorFromWindow(HWND__ *,unsigned long);
	HWINSTA__ * GetProcessWindowStation();
	HWND__ * GetDesktopWindow();
	int BitBlt(HDC__ *,int,int,int,int,HDC__ *,int,int,unsigned long);
	int DeleteDC(HDC__ *);
	int DeleteObject(void *);
	int DrawTextExW(HDC__ *,unsigned short *,int,tagRECT *,unsigned int,tagDRAWTEXTPARAMS *);
	int EnumDisplaySettingsW(unsigned short const *,unsigned long,_devicemodeW *);
	int FillRect(HDC__ *,tagRECT const *,HBRUSH__ *);
	int GdiAlphaBlend(HDC__ *,int,int,int,int,HDC__ *,int,int,int,int,_BLENDFUNCTION);
	int GdiGradientFill(HDC__ *,_TRIVERTEX *,unsigned long,void *,unsigned long,unsigned long);
	int GetDIBits(HDC__ *,HBITMAP__ *,unsigned int,unsigned int,void *,tagBITMAPINFO *,unsigned int);
	int GetDeviceCaps(HDC__ *,int);
	int GetLocaleInfoEx(unsigned short const *,unsigned long,unsigned short *,int);
	int GetMonitorInfoW(HMONITOR__ *,tagMONITORINFO *);
	int GetObjectW(void *,int,void *);
	int GetSystemMetrics(int);
	int GetUserObjectInformationW(void *,int,void *,unsigned long,unsigned long *);
	int GetUserPreferredUILanguages(unsigned long,unsigned long *,unsigned short *,unsigned long *);
	int InvalidateRect(HWND__ *,tagRECT const *,int);
	int LCIDToLocaleName(unsigned long,unsigned short *,int,unsigned long);
	int LogicalToPhysicalPointForPerMonitorDPI(HWND__ *,tagPOINT *);
	int MulDiv(int,int,int);
	int MultiByteToWideChar(unsigned int,unsigned long,char const *,int,unsigned short *,int);
	int OffsetRect(tagRECT *,int,int);
	int RedrawWindow(HWND__ *,tagRECT const *,HRGN__ *,unsigned int);
	int ReleaseDC(HWND__ *,HDC__ *);
	int SetBkMode(HDC__ *,int);
	int SystemParametersInfoW(unsigned int,unsigned int,void *,unsigned int);
	unsigned __int64 GetTickCount64();
	unsigned long GetSysColor(int);
	unsigned long LocaleNameToLCID(unsigned short const *,unsigned long);
	unsigned long SetTextColor(HDC__ *,unsigned long);
	unsigned long SleepEx(unsigned long,int);
	void * GetCurrentObject(HDC__ *,unsigned int);
	void * GetStockObject(int);
	void * SelectObject(HDC__ *,void *);
};

namespace Windows
{
	namespace Foundation
	{
		long ActivateInstance<Internal::AssignedAccess::IAssignedAccessManager>(HSTRING__ *,Internal::AssignedAccess::IAssignedAccessManager * *);
	};

	namespace Internal
	{
		namespace AssignedAccess
		{
			class AAManagerHelper
			{
				long GetAssignedAccessConfiguration(IAssignedAccessConfiguration * *);
				long GetAssignedAccessTypeForUserWithGroup(unsigned short const *,AssignedAccessType *);
				long GetAssignedAccessTypeForUserWithoutGroup(unsigned short const *,AssignedAccessType *);
			public:
				AAManagerHelper();
			};

			class AssignedAccessConfigStoreHelper
			{
				unsigned long GetStoreVersion();
			};

			class AssignedAccessConfigStoreV0
			{
				bool IsValidProfile(HKEY__ *);
				virtual bool DoesGroupConfigExistInStore();
				virtual bool DoesProfileExistInStore(unsigned short const *);
				virtual bool IsGlobalProfileConfiguredInStore();
				virtual unsigned long GetVersion();
			public:
				static wistd::unique_ptr<AssignedAccessConfigStoreBase,wistd::default_delete<AssignedAccessConfigStoreBase> > CreateInstance();
			};

			class AssignedAccessConfigStoreV1
			{
				virtual bool DoesGroupConfigExistInStore();
				virtual bool DoesProfileExistInStore(unsigned short const *);
				virtual bool IsGlobalProfileConfiguredInStore();
				virtual unsigned long GetVersion();
			protected:
				virtual bool Initialize();
			public:
				static wistd::unique_ptr<AssignedAccessConfigStoreBase,wistd::default_delete<AssignedAccessConfigStoreBase> > CreateInstance();
			};

			class AssignedAccessConfigStoreV2
			{
				virtual bool IsGlobalProfileConfiguredInStore();
				virtual unsigned long GetVersion();
			public:
				static wistd::unique_ptr<AssignedAccessConfigStoreBase,wistd::default_delete<AssignedAccessConfigStoreBase> > CreateInstance();
			};

		};

		class NativeString<CoTaskMemPolicy<unsigned short> >
		{
			long _Concat(unsigned short const *,unsigned __int64);
			long _EnsureCapacity(unsigned __int64);
			long _Initialize(unsigned short const *,unsigned __int64);
			void _EnsureCount();
			void _Free();
		public:
			long InitializeFormat(unsigned short const *,...);
		};

		class NativeString<LocalMemPolicy<unsigned short> >
		{
			long _InitializeFromRegistry(HKEY__ *,unsigned short const *,bool);
			void _Free();
		};

	};

};

struct WinlogonProvider
{
	class AuthenticateUser
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		AuthenticateUser();
		void StartActivity();
		void Stop(long,long);
		~AuthenticateUser();
	};

	class ShouldLogoffOtherUsers
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		void Stop(bool);
		~ShouldLogoffOtherUsers();
	};

	static _tlgProvider_t const * Provider();
	static bool IsEnabled(unsigned char,unsigned __int64);
	static void ConsumeCacheSessionFailed<unsigned long &>(unsigned long &);
	static void CreateUserSwitchLogonInfoCollectedSyncEventWasWaiting();
	static void DisconnectCandidateUserSessionOnInactivity();
	static void DwmpNotifyUserLogon<long &>(long &);
	static void DwmpTerminateSessionProcess<long &>(long &);
	static void FallbackTelemetryCallback(bool,wil::FailureInfo const &);
	static void ForceLogOffAadUserAsDpApiCredKeyDecryptionFailed<unsigned long &>(unsigned long &);
	static void UserSessionBusyWithBlockedSubscriber<unsigned long &,unsigned int &,unsigned short (&)[260],int &,unsigned long &>(unsigned long &,unsigned int &,unsigned short (&)[260],int &,unsigned long &);
	static void UserSwitchRecievedLsmEvent();
	static void UserSwitchReturnedToWelcomeLockscreen();
	static void WaitForUserSwitchLogonInfoCollectedSyncEvent<unsigned long &,unsigned long &>(unsigned long &,unsigned long &);
	static void WinStationGetRestrictedLogonInfo<unsigned long &>(unsigned long &);
	static void WinStationIsBoundToCacheTerminal<unsigned long &>(unsigned long &);
	static void WluiDelayLocked_WaitForDismiss<unsigned long &>(unsigned long &);
	static void WluiDisplayLocked_WaitForDismiss<unsigned long &>(unsigned long &);
	static void WluiDisplayWelcome_WaitForDismiss<unsigned long &>(unsigned long &);
	static void WluiSecureDelayLocked_WaitForDismiss<unsigned long &>(unsigned long &);
	static void WluiSecureDisplayLocked_WaitForDismiss<unsigned long &>(unsigned long &);
	void ShouldShutdownAfterUpdate_(long,bool,unsigned long);
	void TraceCollectedWhenLocked_(TraceLoggingCorrelationVector *,long,bool);
	void TraceCollectionOverLockStarted_(TraceLoggingCorrelationVector *);
};

class _TlgActivityBase<wil::ActivityBase<WinlogonProvider,1,140737488355328,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WinlogonProvider,_TlgReflectorTag_Param0IsProviderType>,140737488355328,5>
{
protected:
	~_TlgActivityBase<wil::ActivityBase<WinlogonProvider,1,140737488355328,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WinlogonProvider,_TlgReflectorTag_Param0IsProviderType>,140737488355328,5>();
};

struct _TlgCVGetter
{
	_TlgCVGetter(TraceLoggingCorrelationVector *);
};

struct exception
{
	exception(exception const &);
};

namespace std
{
	nothrow_t const std::nothrow;
};

namespace wil
{
	class ActivityBase<WinlogonProvider,1,140737488355328,5,16777216,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<WinlogonProvider,_TlgReflectorTag_Param0IsProviderType>
		{
			long SetUnhandledException();
			~ActivityData<WinlogonProvider,_TlgReflectorTag_Param0IsProviderType>();
		};

	protected:
		void Destroy();
	public:
		ActivityBase<WinlogonProvider,1,140737488355328,5,16777216,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void zInternalStart();
		void zInternalStop();
		~ActivityBase<WinlogonProvider,1,140737488355328,5,16777216,_TlgReflectorTag_Param0IsProviderType>();
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

	struct ThreadErrorContext
	{
		bool GetCaughtExceptionError(FailureInfo &,DiagnosticsInfo const *,long);
	};

	class TraceLoggingProvider
	{
		virtual bool NotifyFailure(FailureInfo const &);
	protected:
		bool IsEnabled_(unsigned char,unsigned __int64);
		virtual void Initialize();
		virtual void OnErrorReported(bool,FailureInfo const &);
		virtual ~TraceLoggingProvider();
		void Register(_tlgProvider_t const * const,void (*)(_GUID const *,unsigned long,unsigned char,unsigned __int64,unsigned __int64,_EVENT_FILTER_DESCRIPTOR *,void *));
		void ReportTelemetryFailure(FailureInfo const &);
		void ReportTraceLoggingFailure(FailureInfo const &);
	};

	struct com_ptr_t<IUpdateSessionOrchestrator,err_returncode_policy>
	{
		~com_ptr_t<IUpdateSessionOrchestrator,err_returncode_policy>();
	};

	struct com_ptr_t<IUxUpdateManager,err_returncode_policy>
	{
		~com_ptr_t<IUxUpdateManager,err_returncode_policy>();
	};

	struct com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::AssignedAccess::AssignedAccessUserInfo *>,err_returncode_policy>
	{
		~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::AssignedAccess::AssignedAccessUserInfo *>,err_returncode_policy>();
	};

	struct com_ptr_t<Windows::Internal::AssignedAccess::IAssignedAccessConfiguration,err_returncode_policy>
	{
		~com_ptr_t<Windows::Internal::AssignedAccess::IAssignedAccessConfiguration,err_returncode_policy>();
	};

	struct com_ptr_t<Windows::Internal::AssignedAccess::IAssignedAccessManager,err_returncode_policy>
	{
		~com_ptr_t<Windows::Internal::AssignedAccess::IAssignedAccessManager,err_returncode_policy>();
	};

	struct com_ptr_t<Windows::Internal::AssignedAccess::IAssignedAccessUserInfo,err_returncode_policy>
	{
		~com_ptr_t<Windows::Internal::AssignedAccess::IAssignedAccessUserInfo,err_returncode_policy>();
	};

	struct cotaskmem_secure_deleter
	{
		void operator()<unsigned short>(unsigned short *);
	};

	namespace details
	{
		struct DestroyThreadPoolTimer<SystemThreadPoolMethods,0>
		{
			static void Destroy(_TP_TIMER *);
		};

		class EnabledStateManager
		{
			unsigned int EnsureSubscribedToFeatureConfigurationChangesImpl();
			void RecordCachedUsageUnderLock();
		public:
			void OnStateChange();
			void OnTimer();
			void SubscribeFeatureStateCacheToConfigurationChanges(wil_details_FeatureStateCache *,wil_FeatureChangeTime,unsigned int);
			~EnabledStateManager();
		};

		struct FeatureFunctorHost
		{
			FeatureFunctorHost(unsigned int,DiagnosticsInfo const &);
			virtual long ExceptionThrown(void *);
			virtual long Run(IFunctor &);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_AutomaticSignOnLockSetting>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_ContentDeliveryPolicyRestrictions>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_EnableMPR>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_HotKeyTraceCollection>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_LockBugFix_CheckUwpLockAppRequirements>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_LogonWebHostAdditionalMenus>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			bool __private_IsEnabled();
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_NWMTest1>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_ReportLoggedOnCompleted>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_SyncDpapiCredKeyToUserProfile>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_UserSwitchTokenSwap>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureStateManager
		{
			bool EnsureStateData();
			void EnsureSubscribedToProcessWideUsageFlushUnderLock();
		public:
			FeatureStateManager();
			void FlushUsage();
			void QueueBackgroundSRUMUsageReporting(unsigned int,unsigned short,unsigned int);
			void RecordFeatureError(unsigned int,FEATURE_ERROR const &);
			void SubscribeToUsageFlush(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *));
			~FeatureStateManager();
		};

		struct StagingFailureInformation
		{
			StagingFailureInformation(FailureInfo const &,DiagnosticsInfo const &,void *);
		};

		struct StoredCallContextInfo
		{
			void ClearMessage();
		};

		class ThreadFailureCallbackHolder
		{
			static long volatile s_telemetryId;
		public:
			ThreadFailureCallbackHolder(IFailureCallback *,CallContextInfo *,bool);
			static bool GetThreadContext(FailureInfo *,ThreadFailureCallbackHolder *,char *,unsigned __int64);
			static void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
			void StartWatching();
			void StopWatching();
		};

		namespace in1diag3
		{
			long Log_Hr(void *,unsigned int,char const *,long);
			long Return_GetLastError(void *,unsigned int,char const *);
			long Return_NtStatus(void *,unsigned int,char const *,long);
			long Return_Win32(void *,unsigned int,char const *,unsigned long);
			void FailFastImmediate_Unexpected();
			void FailFast_Unexpected(void *,unsigned int,char const *);
			void Return_Hr(void *,unsigned int,char const *,long);
			void _FailFastImmediate_Unexpected();
			void _FailFast_GetLastError(void *,unsigned int,char const *);
			void _FailFast_Hr(void *,unsigned int,char const *,long);
			void _FailFast_Unexpected(void *,unsigned int,char const *);
			void _Log_Hr(void *,unsigned int,char const *,long);
			void _Log_NtStatus(void *,unsigned int,char const *,long);
			void _Log_NullAlloc(void *,unsigned int,char const *);
			void _Log_Win32(void *,unsigned int,char const *,unsigned long);
		};

		class shared_buffer
		{
			void assign(long *,unsigned __int64);
		public:
			bool create(void const *,unsigned __int64);
			void reset();
		};

		struct shared_object<ActivityBase<WinlogonProvider,1,140737488355328,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WinlogonProvider,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct static_lazy<CandidateAccountManagerPolicyTraceProvider>
		{
			struct Completer
			{
				~Completer();
			};

			CandidateAccountManagerPolicyTraceProvider * get(void (*)());
		};

		struct static_lazy<FeatureLogging>
		{
			struct Completer
			{
				~Completer();
			};

			FeatureLogging * get(void (*)());
		};

		struct static_lazy<OOBEHealthLogging>
		{
			struct Completer
			{
				~Completer();
			};

			OOBEHealthLogging * get(void (*)());
		};

		struct static_lazy<WinlogonNotifyProvider>
		{
			struct Completer
			{
				~Completer();
			};

			WinlogonNotifyProvider * get(void (*)());
		};

		struct static_lazy<WinlogonProvider>
		{
			struct Completer
			{
				~Completer();
			};

			WinlogonProvider * get(void (*)());
		};

		FEATURE_ENABLED_STATE WilApiImpl_GetFeatureEnabledState(unsigned int,FEATURE_CHANGE_TIME,int *);
		FEATURE_ENABLED_STATE WilApi_GetFeatureEnabledState(unsigned int,FEATURE_CHANGE_TIME,int *);
		bool (* ?? g_pfnGetModuleInformation)(void *,unsigned int *,char *,unsigned __int64);
		bool GetModuleInformation(void *,unsigned int *,char *,unsigned __int64);
		bool GetModuleInformationFromAddress(void *,unsigned int *,char *,unsigned __int64);
		bool g_processShutdownInProgress;
		bool g_resultMessageCallbackSet;
		char const * (* ?? g_pfnGetModuleName)();
		char const * GetCurrentModuleName();
		details::ResultStatus ReportFailure_CaughtExceptionCommon<2>(void *,unsigned int,char const *,char const *,char const *,void *,unsigned short *,unsigned __int64,SupportedExceptions);
		details::ResultStatus ResultFromCaughtExceptionInternal(unsigned short *,unsigned __int64,bool *);
		details_abi::ProcessLocalStorage<details_abi::ProcessLocalData> g_processLocalData;
		details_abi::ThreadLocalStorage<details::ThreadFailureCallbackHolder *> * g_pThreadFailureCallbacks;
		details_abi::ThreadLocalStorage<details::ThreadFailureCallbackHolder *> g_threadFailureCallbacks;
		int RecordException(long);
		int RecordFailFast(long);
		int RecordLog(long);
		int RecordReturn(long);
		int ReportUsageToServiceDirect(wil_details_FeatureReportingCache *,unsigned int,int,int,wil_details_ServiceReportingKind,unsigned int,unsigned __int64,unsigned char);
		long (* ?? g_pfnRtlDisownModuleHeapAllocation)(void *,void *);
		long (* g_pfnRunFunctorWithExceptionFilter)(details::IFunctor &,details::IFunctorHost &,void *);
		long GetLastErrorFailHr();
		long HrToNtStatus(long);
		long NtStatusToHr(long);
		long RecognizeCaughtExceptionFromCallback(unsigned short *,unsigned __int64);
		long ReportFailure_GetLastErrorHr<1>(void *,unsigned int,char const *,char const *,char const *,void *);
		long ReportFailure_NtStatus<1>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		long ReportFailure_NtStatus<2>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		long ReportFailure_Win32<1>(void *,unsigned int,char const *,char const *,char const *,void *,unsigned long);
		long ReportFailure_Win32<2>(void *,unsigned int,char const *,char const *,char const *,void *,unsigned long);
		long RtlDisownModuleHeapAllocation(void *,void *);
		long RunFunctor(details::IFunctor &,details::IFunctorHost &);
		long RunFunctorWithExceptionFilter(details::IFunctor &,details::IFunctorHost &,void *);
		long StringCchPrintfA(char *,unsigned __int64,char const *,...);
		shutdown_aware_object<details::EnabledStateManager> g_enabledStateManager;
		shutdown_aware_object<details::FeatureStateManager> g_featureStateManager;
		unsigned __int64 ResultStringSize(char const *);
		unsigned __int64 ResultStringSize(unsigned short const *);
		unsigned char (* ?? g_pfnDllShutdownInProgress)();
		unsigned char * WriteResultString<char const *>(unsigned char *,unsigned char *,char const *,char const * *);
		unsigned char * WriteResultString<unsigned short const *>(unsigned char *,unsigned char *,unsigned short const *,unsigned short const * *);
		unsigned char RtlDllShutdownInProgress();
		unsigned long (* ?? g_pfnRtlNtStatusToDosErrorNoTeb)(long);
		unsigned long GetLastErrorFail(void *,unsigned int,char const *,char const *,char const *,void *);
		unsigned long ReportFailure_GetLastError<3>(void *,unsigned int,char const *,char const *,char const *,void *);
		unsigned long RtlNtStatusToDosErrorNoTeb(long);
		unsigned short * LogStringPrintf(unsigned short *,unsigned short const *,unsigned short const *,...);
		void (* ?? g_pfnDebugBreak)();
		void (* ?? g_pfnFailfastWithContextCallback)(FailureInfo const &);
		void (* ?? g_pfnGetContextAndNotifyFailure)(FailureInfo *,char *,unsigned __int64);
		void (* ?? g_pfnLoggingCallback)(FailureInfo const &);
		void (* ?? g_pfnNotifyFailure)(FailureInfo *);
		void (* ?? g_pfnOriginateCallback)(FailureInfo const &);
		void (* ?? g_pfnTelemetryCallback)(bool,FailureInfo const &);
		void (* g_pfnFormatNtStatusMsg)(long,unsigned short *,unsigned long);
		void (* g_pfnRaiseFailFastException)(_EXCEPTION_RECORD *,_CONTEXT *,unsigned long);
		void (* g_pfnRethrow)();
		void (* g_pfnThrowResultException)(FailureInfo const &);
		void * ProcessHeapAlloc(unsigned long,unsigned __int64);
		void CloseHandle(void *);
		void DebugBreak();
		void FeatureLoggingHook(unsigned int,FEATURE_LOGGED_TRAITS const *,FEATURE_ERROR const *,int,wil_ReportingKind const *,wil_VariantReportingKind const *,unsigned char,unsigned __int64);
		void FormatNtStatusMsg(long,unsigned short *,unsigned long);
		void FreeProcessHeap(void *);
		void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
		void LogFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,details::ResultStatus const &,unsigned short const *,bool,unsigned short *,unsigned __int64,char *,unsigned __int64,FailureInfo *);
		void MaybeGetExceptionString(ResultException const &,unsigned short *,unsigned __int64);
		void MaybeGetExceptionString(exception const &,unsigned short *,unsigned __int64);
		void MicrosoftInternalNotifyFailure(FailureInfo *);
		void RecordFeatureUsageCallback(unsigned int,wil_details_ServiceReportingKind,unsigned int,wil_details_FeatureReportingCache *,wil_details_RecordUsageResult *);
		void RecordSRUMFeatureUsage(unsigned int,unsigned int,unsigned int);
		void ReleaseMutex(void *);
		void ReportFailure_Base<1,0>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Base<2,0>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Base<3,0>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Hr<1>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		void ReportFailure_Hr<2>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		void ReportFailure_Hr<3>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		void ReportFailure_NoReturn<3>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Return<1>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Return<2>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFeatureCaughtException(ThreadErrorContext &,unsigned int,DiagnosticsInfo const &,void *);
		void ReportUsageToService(wil_details_FeatureReportingCache *,unsigned int,int,int,FEATURE_LOGGED_TRAITS const *,int,wil_ReportingKind,unsigned __int64);
		void Rethrow();
		void ThrowResultExceptionInternal(FailureInfo const &);
		void WilApiImpl_RecordFeatureError(unsigned int,FEATURE_ERROR const *);
		void WilApiImpl_RecordFeatureUsage(unsigned int,unsigned int,unsigned int,char const *);
		void WilApiImpl_SubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
		void WilApiImpl_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
		void WilApi_RecordFeatureUsage(unsigned int,unsigned int,unsigned int,char const *);
		void WilApi_SubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
		void WilApi_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
		void WilDynamicLoadRaiseFailFastException(_EXCEPTION_RECORD *,_CONTEXT *,unsigned long);
		void WilFailFast(FailureInfo const &);
		void WilRaiseFailFastException(_EXCEPTION_RECORD *,_CONTEXT *,unsigned long);
	};

	namespace details_abi
	{
		class FeatureStateData
		{
			void RetrieveUsageUnderLock(UsageIndexes &);
		public:
			bool RecordFeatureError(unsigned int,FEATURE_ERROR const &);
			void ProcessShutdown();
			void RecordUsage();
			~FeatureStateData();
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

		struct SerializedFailure
		{
			static bool Serialize(FEATURE_ERROR const &,unsigned __int64 *,void *,unsigned __int64);
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
			bool GetCaughtExceptionError(FailureInfo &,unsigned int,DiagnosticsInfo const *,long,void *);
			bool GetLastError(FailureInfo &,unsigned int,long);
			void Clear();
			void SetLastError(FailureInfo const &);
		};

		struct ThreadLocalFailureInfo
		{
			void Get(FailureInfo &);
			void Set(FailureInfo const &,unsigned int);
		};

		struct ThreadLocalStorage<ThreadLocalData>
		{
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

	struct last_error_context
	{
		~last_error_context();
	};

	struct manually_managed_shutdown_aware_object<details::EnabledStateManager>
	{
		void construct();
		void destroy();
	};

	struct manually_managed_shutdown_aware_object<details::FeatureStateManager>
	{
		void destroy();
	};

	struct vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Internal::AssignedAccess::AssignedAccessUserInfo *> >
	{
		void get_at_current(unsigned int);
	};

	WilFailureReportFlags g_moduleFailureReportFlags;
	bool (* ?? g_pfnIsDebuggerPresent)();
	bool (* ?? g_pfnWilFailFast)(wil::FailureInfo const &);
	bool ProcessShutdownInProgress();
	bool g_fBreakOnFailure;
	bool g_fIsDebuggerPresent;
	bool is_default_system_managed_account(unsigned short const *);
	long (* ?? g_pfnResultFromCaughtException)();
	long GetFailureLogString(unsigned short *,unsigned __int64,wil::FailureInfo const &);
	long ResultFromCaughtException();
	void RethrowCaughtException();
	wil::details::out_param_t<wistd::unique_ptr<unsigned short [0],wil::cotaskmem_secure_deleter> > out_param<wistd::unique_ptr<unsigned short [0],cotaskmem_secure_deleter> >(wistd::unique_ptr<unsigned short [0],wil::cotaskmem_secure_deleter> &);
};

namespace wistd
{
	namespace __function
	{
		struct __func<<lambda_6166c63e326ec22a386edc375e0b06c9>,long (unsigned short *,unsigned __int64,unsigned __int64 *)>
		{
			virtual void __clone(__base<long (unsigned short *,unsigned __int64,unsigned __int64 *)> *);
			virtual void __move(__base<long (unsigned short *,unsigned __int64,unsigned __int64 *)> *);
			virtual void destroy();
		};

		struct __func<<lambda_8db0ce862824541f40dfb767113f1e28>,bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>
		{
			virtual void __clone(__base<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)> *);
			virtual void __move(__base<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)> *);
			virtual void destroy();
		};

	};

	struct function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>
	{
		~function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>();
	};

	struct function<long (unsigned short *,unsigned __int64,unsigned __int64 *)>
	{
		long operator()(unsigned short *,unsigned __int64,unsigned __int64 *);
		~function<long (unsigned short *,unsigned __int64,unsigned __int64 *)>();
	};

	struct unique_ptr<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase,default_delete<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase> >
	{
		~unique_ptr<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase,default_delete<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase> >();
	};

};

;
AssignedAccessType GetAssignedAccessType(void *);
Diagnostics_Status g_Diagnostics_Status;
FEATURE_ENABLED_STATE (* g_wil_details_apiGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME,int *);
FEATURE_ENABLED_STATE (* g_wil_details_internalGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME,int *);
HINSTANCE__ * g_wil_details_kernelbaseModuleHandle;
HINSTANCE__ * g_wil_details_ntdllModuleHandle;
HINSTANCE__ * wil_details_GetKernelBaseModuleHandle();
HINSTANCE__ * wil_details_GetNtDllModuleHandle();
LibraryInitLock g_lockObject;
_LIST_ENTRY JobManagerList;
_LOCKOUT_DATA s_xLockoutData;
_MYACELIST * CreateAceList(unsigned long);
_NOTIFICATION_INFORMATION g_WarbirdNotificationInformation;
_PROVIDER_DATA gProvData;
_REG_CHANGE * WinlogonSetupChanges;
_RTL_CRITICAL_SECTION * g_pTSJobCallbackLock;
_RTL_CRITICAL_SECTION JobManagerLock;
_RTL_CRITICAL_SECTION g_HungNotificationListLock;
_RTL_CRITICAL_SECTION g_LogoffThreadCritSec;
_RTL_CRITICAL_SECTION g_csNamedEscape;
_RTL_RESOURCE g_EvalLock;
_StateMachineSignal const * * g_rpWLGeneric_Signals;
_StateMachineSignal g_xAction_Failed_Signal;
_StateMachineSignal g_xAction_Succeeded_Signal;
_StateMachineSignal g_xLogoff_NtUserCompleted_Signal;
_StateMachineSignal g_xMPR_Notify_Signal;
_StateMachineSignal g_xSecure_LuaEnd_Signal;
_StateMachineSignal g_xSecure_LuaReady_Signal;
_StateMachineSignal g_xSecure_LuaStart_Signal;
_StateMachineSignal g_xSecure_Request_Signal;
_StateMachineSignal g_xTS_Disconnected_Signal;
_StateMachineSignal g_xTS_NoUnlockReconnect_Signal;
_StateMachineSignal g_xTS_PreConnect_Signal;
_StateMachineSignal g_xTS_Reconnected_Signal;
_StateMachineSignal g_xTS_RevertBack_Signal;
_StateMachineSignal g_xTS_SessionCreateFailed_Signal;
_StateMachineSignal g_xWLGeneric_App_Launcher_Signal;
_StateMachineSignal g_xWLGeneric_ChangeIsAlreadyDone_Signal;
_StateMachineSignal g_xWLGeneric_ChangePassword_Signal;
_StateMachineSignal g_xWLGeneric_Input_Timeout_Signal;
_StateMachineSignal g_xWLGeneric_LogonUI_Cancel_Signal;
_StateMachineSignal g_xWLGeneric_LogonUI_Ok_Signal;
_StateMachineSignal g_xWLGeneric_LogonUI_WebUnlock_Signal;
_StateMachineSignal g_xWLGeneric_NoRetryAllowed_Signal;
_StateMachineSignal g_xWLGeneric_NoRetryAndDisconnect_Signal;
_StateMachineSignal g_xWLGeneric_SasDisabled_Signal;
_StateMachineSignal g_xWinsrv_AccessNotify_Signal;
_StateMachineSignal g_xWinsrv_DwmControl_Signal;
_StateMachineSignal g_xWinsrv_Kill_Scrnsaver_Signal;
_StateMachineSignal g_xWinsrv_Lock_Signal;
_StateMachineSignal g_xWinsrv_LogoffNotify_Signal;
_StateMachineSignal g_xWinsrv_PowerMsgHide_Signal;
_StateMachineSignal g_xWinsrv_PowerMsgShow_Signal;
_StateMachineSignal g_xWinsrv_PowerResumeShow_Signal;
_StateMachineSignal g_xWinsrv_Sas_Signal;
_StateMachineSignal g_xWinsrv_ShellRestart_Signal;
_StateMachineSignal g_xWinsrv_Timeout_Signal;
_StateMachineSignal g_xWinsrv_WinL_Signal;
_StateMachineSignal g_xWl_CloudPasswordExpired_Signal;
_StateMachineSignal g_xWl_CredsAreStale_Signal;
_StateMachineSignal g_xWl_DelayedSwitchDesktop_Signal;
_StateMachineSignal g_xWl_DifferentCredsAreRequired_Signal;
_StateMachineSignal g_xWl_DisplayOff_Signal;
_StateMachineSignal g_xWl_DisplayOn_Signal;
_StateMachineSignal g_xWl_HubScreen_Signal;
_StateMachineSignal g_xWl_LogonFromUnlock_Signal;
_StateMachineSignal g_xWl_NTLMIsDisabled_Signal;
_StateMachineSignal g_xWl_ReconnectionUpdate_Signal;
_StateMachineSignal g_xWl_ShellReadyOrTimedOut_Signal;
_StateMachineState const * * g_rpWLGeneric_States;
_StateMachineState g_xWLGeneric_AbortPendingLockRequest_State;
_StateMachineState g_xWLGeneric_AbortPendingLuaRequest_State;
_StateMachineState g_xWLGeneric_AccessNotifyAsSystem_State;
_StateMachineState g_xWLGeneric_AccessNotifyAsUser_State;
_StateMachineState g_xWLGeneric_AccessNotify_State;
_StateMachineState g_xWLGeneric_AppLauncher_State;
_StateMachineState g_xWLGeneric_Authenticating_State;
_StateMachineState g_xWLGeneric_CAD_Return_State;
_StateMachineState g_xWLGeneric_CAD_State;
_StateMachineState g_xWLGeneric_ChangeLogon_ReportResult_State;
_StateMachineState g_xWLGeneric_ChangeUnlock_ReportResult_State;
_StateMachineState g_xWLGeneric_Change_ReportResult_State;
_StateMachineState g_xWLGeneric_ChangingLogonPassword_State;
_StateMachineState g_xWLGeneric_ChangingPassword_State;
_StateMachineState g_xWLGeneric_ChangingUnlockPassword_State;
_StateMachineState g_xWLGeneric_CloudPasswordExpiredReminder_State;
_StateMachineState g_xWLGeneric_CompleteLockRequest_State;
_StateMachineState g_xWLGeneric_CredsAreStaleReminder_State;
_StateMachineState g_xWLGeneric_DelayLock_DisplayOffHandler_State;
_StateMachineState g_xWLGeneric_DelayLock_DisplayOnHandler_State;
_StateMachineState g_xWLGeneric_DelayLock_State;
_StateMachineState g_xWLGeneric_DelayedSwitchDesktop_State;
_StateMachineState g_xWLGeneric_DifferentCredsAreRequiredReminder_State;
_StateMachineState g_xWLGeneric_DisplayLegalNotice_State;
_StateMachineState g_xWLGeneric_DisplayLegalNotice_Unlock_State;
_StateMachineState g_xWLGeneric_DwmControl_State;
_StateMachineState g_xWLGeneric_FindDestinationSession_State;
_StateMachineState g_xWLGeneric_FindDestinationSession_Unlock_State;
_StateMachineState g_xWLGeneric_HandleSecureLuaBeforeShell_State;
_StateMachineState g_xWLGeneric_InitiateDisconnect_State;
_StateMachineState g_xWLGeneric_InitiateForceLogoff_State;
_StateMachineState g_xWLGeneric_InitiateLock_On_Resume_State;
_StateMachineState g_xWLGeneric_InitiateLock_State;
_StateMachineState g_xWLGeneric_Killing_Scrnsaver_Locked_State;
_StateMachineState g_xWLGeneric_Killing_Scrnsaver_Logged_On_State;
_StateMachineState g_xWLGeneric_Killing_Scrnsaver_Welcome_State;
_StateMachineState g_xWLGeneric_LockScreen_State;
_StateMachineState g_xWLGeneric_Locked_Disconnected_State;
_StateMachineState g_xWLGeneric_Locked_Hibernating_State;
_StateMachineState g_xWLGeneric_Locked_Reconnect_State;
_StateMachineState g_xWLGeneric_Locked_Resume_State;
_StateMachineState g_xWLGeneric_Locked_Return_State;
_StateMachineState g_xWLGeneric_Locked_State;
_StateMachineState g_xWLGeneric_Logged_On_Disconnected_State;
_StateMachineState g_xWLGeneric_Logged_On_Hibernating_State;
_StateMachineState g_xWLGeneric_Logged_On_Reconnect_State;
_StateMachineState g_xWLGeneric_Logged_On_Resume_State;
_StateMachineState g_xWLGeneric_Logged_On_State;
_StateMachineState g_xWLGeneric_Logging_Off_State;
_StateMachineState g_xWLGeneric_LogoffNotify_State;
_StateMachineState g_xWLGeneric_Logon_Checking_LastLogonPolicy_State;
_StateMachineState g_xWLGeneric_Logon_Checking_LastLogonPolicy_Unlock_State;
_StateMachineState g_xWLGeneric_Logon_ReportFailedResult_State;
_StateMachineState g_xWLGeneric_Logon_ReportLastLogon_State;
_StateMachineState g_xWLGeneric_Logon_ReportLastLogon_Unlock_State;
_StateMachineState g_xWLGeneric_Logon_ReportSuccessResult_State;
_StateMachineState g_xWLGeneric_Logon_ReportSuccessResult_Unlock_State;
_StateMachineState g_xWLGeneric_MPRChangeLogonNotify_State;
_StateMachineState g_xWLGeneric_MPRChangeNotify_State;
_StateMachineState g_xWLGeneric_MPRChangeUnlockNotify_State;
_StateMachineState g_xWLGeneric_MPRLogonNotify_State;
_StateMachineState g_xWLGeneric_MPRLogonNotify_Unlock_State;
_StateMachineState g_xWLGeneric_NTLMIsDisabledReminder_State;
_StateMachineState g_xWLGeneric_No_Unlock_DisconnectedLock_State;
_StateMachineState g_xWLGeneric_No_Unlock_Disconnected_State;
_StateMachineState g_xWLGeneric_No_Unlock_Reconnect_State;
_StateMachineState g_xWLGeneric_NotifyCreateSession_State;
_StateMachineState g_xWLGeneric_NotifyEndShell_State;
_StateMachineState g_xWLGeneric_NotifyLogon_State;
_StateMachineState g_xWLGeneric_NotifyStartShell_State;
_StateMachineState g_xWLGeneric_NotifyTerminateSession_State;
_StateMachineState g_xWLGeneric_PostChangeActions_State;
_StateMachineState g_xWLGeneric_PostUnlockActions_State;
_StateMachineState g_xWLGeneric_PowerTransition_Locked_State;
_StateMachineState g_xWLGeneric_PowerTransition_Logged_On_State;
_StateMachineState g_xWLGeneric_PowerTransition_ShowResumeMsg_State;
_StateMachineState g_xWLGeneric_PowerTransition_Welcome_State;
_StateMachineState g_xWLGeneric_PseudoLogging_Off1_State;
_StateMachineState g_xWLGeneric_PseudoLogging_Off2_State;
_StateMachineState g_xWLGeneric_ReadyForSecureLua_State;
_StateMachineState g_xWLGeneric_ReconnectionUpdate_State;
_StateMachineState g_xWLGeneric_Request_Change_Credz_State;
_StateMachineState g_xWLGeneric_Request_LogonChange_Credz_State;
_StateMachineState g_xWLGeneric_Request_Logon_Credz_Return_State;
_StateMachineState g_xWLGeneric_Request_Logon_Credz_State;
_StateMachineState g_xWLGeneric_Request_UnlockChange_Credz_State;
_StateMachineState g_xWLGeneric_Request_Unlock_Credz_Return_State;
_StateMachineState g_xWLGeneric_Request_Unlock_Credz_State;
_StateMachineState g_xWLGeneric_Request_Web_Unlock_Credz_State;
_StateMachineState g_xWLGeneric_SecureCredUI_Operation_State;
_StateMachineState g_xWLGeneric_SequentialLogonPrompt_State;
_StateMachineState g_xWLGeneric_SequentialLogonPrompt_Unlock_State;
_StateMachineState g_xWLGeneric_SequentialUnlockPrompt_State;
_StateMachineState g_xWLGeneric_ShellRestart_State;
_StateMachineState g_xWLGeneric_ShellStartup_State;
_StateMachineState g_xWLGeneric_StartSecureLua_State;
_StateMachineState g_xWLGeneric_Start_State;
_StateMachineState g_xWLGeneric_TO_Disconnected_State;
_StateMachineState g_xWLGeneric_TimeoutHandler_Locked_State;
_StateMachineState g_xWLGeneric_TimeoutHandler_Logged_On_State;
_StateMachineState g_xWLGeneric_TimeoutHandler_Welcome_State;
_StateMachineState g_xWLGeneric_Unlock_Checking_LastLogonPolicy_State;
_StateMachineState g_xWLGeneric_Unlock_LogonUser_State;
_StateMachineState g_xWLGeneric_Unlock_ReportFailedResult_State;
_StateMachineState g_xWLGeneric_Unlock_ReportLastLogon_State;
_StateMachineState g_xWLGeneric_Unlock_ReportSuccessResult_State;
_StateMachineState g_xWLGeneric_Unlocking_State;
_StateMachineState g_xWLGeneric_WaitForDisconnectAfterFailedAuth_State;
_StateMachineState g_xWLGeneric_Welcome_Hibernating_State;
_StateMachineState g_xWLGeneric_Welcome_Return_State;
_StateMachineState g_xWLGeneric_Welcome_State;
_StateMachineTransition * g_xWLGeneric_AbortPendingLockRequest_Transition;
_StateMachineTransition * g_xWLGeneric_AbortPendingLuaRequest_Transition;
_StateMachineTransition * g_xWLGeneric_AccessNotifyAsSystem_Transition;
_StateMachineTransition * g_xWLGeneric_AccessNotifyAsUser_Transition;
_StateMachineTransition * g_xWLGeneric_AccessNotify_Transition;
_StateMachineTransition * g_xWLGeneric_AppLauncher_Transition;
_StateMachineTransition * g_xWLGeneric_Authenticating_Transition;
_StateMachineTransition * g_xWLGeneric_CAD_Return_Transition;
_StateMachineTransition * g_xWLGeneric_CAD_Transition;
_StateMachineTransition * g_xWLGeneric_ChangeLogon_ReportResult_Transition;
_StateMachineTransition * g_xWLGeneric_ChangeUnlock_ReportResult_Transition;
_StateMachineTransition * g_xWLGeneric_Change_ReportResult_Transition;
_StateMachineTransition * g_xWLGeneric_ChangingLogonPassword_Transition;
_StateMachineTransition * g_xWLGeneric_ChangingPassword_Transition;
_StateMachineTransition * g_xWLGeneric_ChangingUnlockPassword_Transition;
_StateMachineTransition * g_xWLGeneric_CloudPasswordExpiredReminder_Transition;
_StateMachineTransition * g_xWLGeneric_CompleteLockRequest_Transition;
_StateMachineTransition * g_xWLGeneric_CredsAreStaleReminder_Transition;
_StateMachineTransition * g_xWLGeneric_DelayLock_DisplayOffHandler_Transition;
_StateMachineTransition * g_xWLGeneric_DelayLock_DisplayOnHandler_Transition;
_StateMachineTransition * g_xWLGeneric_DelayLock_Transition;
_StateMachineTransition * g_xWLGeneric_DelayedSwitchDesktop_Transition;
_StateMachineTransition * g_xWLGeneric_DifferentCredsAreRequiredReminder_Transition;
_StateMachineTransition * g_xWLGeneric_DisplayLegalNotice_Transition;
_StateMachineTransition * g_xWLGeneric_DisplayLegalNotice_Unlock_Transition;
_StateMachineTransition * g_xWLGeneric_DwmControl_Transition;
_StateMachineTransition * g_xWLGeneric_FindDestinationSession_Transition;
_StateMachineTransition * g_xWLGeneric_FindDestinationSession_Unlock_Transition;
_StateMachineTransition * g_xWLGeneric_HandleSecureLuaBeforeShell_Transition;
_StateMachineTransition * g_xWLGeneric_InitiateDisconnect_Transition;
_StateMachineTransition * g_xWLGeneric_InitiateForceLogoff_Transition;
_StateMachineTransition * g_xWLGeneric_InitiateLock_On_Resume_Transition;
_StateMachineTransition * g_xWLGeneric_InitiateLock_Transition;
_StateMachineTransition * g_xWLGeneric_Killing_Scrnsaver_Locked_Transition;
_StateMachineTransition * g_xWLGeneric_Killing_Scrnsaver_Logged_On_Transition;
_StateMachineTransition * g_xWLGeneric_Killing_Scrnsaver_Welcome_Transition;
_StateMachineTransition * g_xWLGeneric_LockScreen_Transition;
_StateMachineTransition * g_xWLGeneric_Locked_Disconnected_Transition;
_StateMachineTransition * g_xWLGeneric_Locked_Hibernating_Transition;
_StateMachineTransition * g_xWLGeneric_Locked_Reconnect_Transition;
_StateMachineTransition * g_xWLGeneric_Locked_Resume_Transition;
_StateMachineTransition * g_xWLGeneric_Locked_Return_Transition;
_StateMachineTransition * g_xWLGeneric_Locked_Transition;
_StateMachineTransition * g_xWLGeneric_Logged_On_Disconnected_Transition;
_StateMachineTransition * g_xWLGeneric_Logged_On_Hibernating_Transition;
_StateMachineTransition * g_xWLGeneric_Logged_On_Reconnect_Transition;
_StateMachineTransition * g_xWLGeneric_Logged_On_Resume_Transition;
_StateMachineTransition * g_xWLGeneric_Logged_On_Transition;
_StateMachineTransition * g_xWLGeneric_Logging_Off_Transition;
_StateMachineTransition * g_xWLGeneric_LogoffNotify_Transition;
_StateMachineTransition * g_xWLGeneric_Logon_Checking_LastLogonPolicy_Transition;
_StateMachineTransition * g_xWLGeneric_Logon_Checking_LastLogonPolicy_Unlock_Transition;
_StateMachineTransition * g_xWLGeneric_Logon_ReportFailedResult_Transition;
_StateMachineTransition * g_xWLGeneric_Logon_ReportLastLogon_Transition;
_StateMachineTransition * g_xWLGeneric_Logon_ReportLastLogon_Unlock_Transition;
_StateMachineTransition * g_xWLGeneric_Logon_ReportSuccessResult_Transition;
_StateMachineTransition * g_xWLGeneric_Logon_ReportSuccessResult_Unlock_Transition;
_StateMachineTransition * g_xWLGeneric_MPRChangeLogonNotify_Transition;
_StateMachineTransition * g_xWLGeneric_MPRChangeNotify_Transition;
_StateMachineTransition * g_xWLGeneric_MPRChangeUnlockNotify_Transition;
_StateMachineTransition * g_xWLGeneric_MPRLogonNotify_Transition;
_StateMachineTransition * g_xWLGeneric_MPRLogonNotify_Unlock_Transition;
_StateMachineTransition * g_xWLGeneric_NTLMIsDisabledReminder_Transition;
_StateMachineTransition * g_xWLGeneric_No_Unlock_DisconnectedLock_Transition;
_StateMachineTransition * g_xWLGeneric_No_Unlock_Disconnected_Transition;
_StateMachineTransition * g_xWLGeneric_No_Unlock_Reconnect_Transition;
_StateMachineTransition * g_xWLGeneric_NotifyCreateSession_Transition;
_StateMachineTransition * g_xWLGeneric_NotifyEndShell_Transition;
_StateMachineTransition * g_xWLGeneric_NotifyLogon_Transition;
_StateMachineTransition * g_xWLGeneric_NotifyStartShell_Transition;
_StateMachineTransition * g_xWLGeneric_NotifyTerminateSession_Transition;
_StateMachineTransition * g_xWLGeneric_PostChangeActions_Transition;
_StateMachineTransition * g_xWLGeneric_PostUnlockActions_Transition;
_StateMachineTransition * g_xWLGeneric_PowerTransition_Locked_Transition;
_StateMachineTransition * g_xWLGeneric_PowerTransition_Logged_On_Transition;
_StateMachineTransition * g_xWLGeneric_PowerTransition_ShowResumeMsg_Transition;
_StateMachineTransition * g_xWLGeneric_PowerTransition_Welcome_Transition;
_StateMachineTransition * g_xWLGeneric_PseudoLogging_Off1_Transition;
_StateMachineTransition * g_xWLGeneric_PseudoLogging_Off2_Transition;
_StateMachineTransition * g_xWLGeneric_ReadyForSecureLua_Transition;
_StateMachineTransition * g_xWLGeneric_ReconnectionUpdate_Transition;
_StateMachineTransition * g_xWLGeneric_Request_Change_Credz_Transition;
_StateMachineTransition * g_xWLGeneric_Request_LogonChange_Credz_Transition;
_StateMachineTransition * g_xWLGeneric_Request_Logon_Credz_Return_Transition;
_StateMachineTransition * g_xWLGeneric_Request_Logon_Credz_Transition;
_StateMachineTransition * g_xWLGeneric_Request_UnlockChange_Credz_Transition;
_StateMachineTransition * g_xWLGeneric_Request_Unlock_Credz_Return_Transition;
_StateMachineTransition * g_xWLGeneric_Request_Unlock_Credz_Transition;
_StateMachineTransition * g_xWLGeneric_Request_Web_Unlock_Credz_Transition;
_StateMachineTransition * g_xWLGeneric_SecureCredUI_Operation_Transition;
_StateMachineTransition * g_xWLGeneric_SequentialLogonPrompt_Transition;
_StateMachineTransition * g_xWLGeneric_SequentialLogonPrompt_Unlock_Transition;
_StateMachineTransition * g_xWLGeneric_SequentialUnlockPrompt_Transition;
_StateMachineTransition * g_xWLGeneric_ShellRestart_Transition;
_StateMachineTransition * g_xWLGeneric_ShellStartup_Transition;
_StateMachineTransition * g_xWLGeneric_StartSecureLua_Transition;
_StateMachineTransition * g_xWLGeneric_Start_Transition;
_StateMachineTransition * g_xWLGeneric_TO_Disconnected_Transition;
_StateMachineTransition * g_xWLGeneric_TimeoutHandler_Locked_Transition;
_StateMachineTransition * g_xWLGeneric_TimeoutHandler_Logged_On_Transition;
_StateMachineTransition * g_xWLGeneric_TimeoutHandler_Welcome_Transition;
_StateMachineTransition * g_xWLGeneric_Unlock_Checking_LastLogonPolicy_Transition;
_StateMachineTransition * g_xWLGeneric_Unlock_LogonUser_Transition;
_StateMachineTransition * g_xWLGeneric_Unlock_ReportFailedResult_Transition;
_StateMachineTransition * g_xWLGeneric_Unlock_ReportLastLogon_Transition;
_StateMachineTransition * g_xWLGeneric_Unlock_ReportSuccessResult_Transition;
_StateMachineTransition * g_xWLGeneric_Unlocking_Transition;
_StateMachineTransition * g_xWLGeneric_WaitForDisconnectAfterFailedAuth_Transition;
_StateMachineTransition * g_xWLGeneric_Welcome_Hibernating_Transition;
_StateMachineTransition * g_xWLGeneric_Welcome_Return_Transition;
_StateMachineTransition * g_xWLGeneric_Welcome_Transition;
_WINLOGON_JOB * g_pJob;
_WLSM_GLOBAL_CONTEXT xGlobalContext;
_WNF_STATE_NAME _wnfState;
_WNF_USER_SUBSCRIPTION * _wnfSubscription;
bool IsAdmin(void *);
bool IsAutoLogonAfterCredentialReset();
bool IsBoundToCacheTerminal();
bool IsCredentialReset();
bool IsDifferentUserLoggedOn(void * const,unsigned long,CandidateUserPhase);
bool IsOOBETransitionUXVisible();
bool IsTestSigningEnabled();
bool IsUserOOBE();
bool IsUserOOBELanguageChoicePending();
bool LaunchUmfdHostWithVirtualAccountAsync();
bool OneTimeInitialize();
bool ShouldDisconnectOnLock(_WLSM_GLOBAL_CONTEXT *);
bool ShouldLoadAadCredKeyFromProfile(_WLSM_GLOBAL_CONTEXT *);
bool ShouldLogoffOtherUsers(bool,CUser *);
bool _tlgGuidIsZero(_GUID const &);
bool gUmfdHostThreadProcExecuted;
int (* g_pfnNamedEscape)(HDC__ *,unsigned short *,int,int,char const *,int,char *);
int AllocAndGetAlternateShell(unsigned short * *);
int AllocAndGetRemoteSessionInitialCommandForRestart(_WLSM_GLOBAL_CONTEXT *,unsigned short * *,unsigned char *);
int AllowSAS();
int AreVisibleLogoffScriptsSet(_WLSM_GLOBAL_CONTEXT *);
int AsyncLogoffSupportIsLogoffInProgress();
int AttemptAADConnect(_WLSM_GLOBAL_CONTEXT *,void *,bool,_LUID,void *);
int AttemptSequentialLogon(_WLSM_GLOBAL_CONTEXT *,void *);
int BuildEnvironmentPath(void * *,unsigned short const *,unsigned short const *);
int CallCheckForHiberbootRpc(unsigned char,unsigned char);
int ChangeToken(void *,_SID_AND_ATTRIBUTES *,void * *);
int ClaimSetupLaunch();
int CompareSIDs(void *,void *);
int FetchAutoLogonCredentials(_WLSM_GLOBAL_CONTEXT *,unsigned short *,unsigned long,int *,unsigned short *,unsigned long,unsigned short *,unsigned long);
int FindEASLockOutEntryForSID(_USER_COUNT_ENTRY *,unsigned long,void *,int *);
int FoundDebugger(unsigned short *,int);
int GetProcessBaseName(void *,unsigned short *,unsigned long);
int GetTiToken(void * *);
int GetTokenInformationWithAlloc(void *,_TOKEN_INFORMATION_CLASS,void * *,unsigned long *);
int IsHiberboot(unsigned long);
int IsLockScreenDisabled(_WLSM_GLOBAL_CONTEXT *,int);
int IsLockScreenSlideshowAutoLockDisabled(_WLSM_GLOBAL_CONTEXT *);
int IsMiniNTMode();
int IsNoLogonUIMode(_WLSM_GLOBAL_CONTEXT *);
int IsProcInSysProcs(unsigned __int64,void *);
int IsSASRequired(_WLSM_GLOBAL_CONTEXT *);
int IsSetupAvailable();
int IsSetupInProgress();
int IsUserManagerServiceAvailable();
int IsUserStillActive(unsigned __int64);
int JobManagerIsStarted;
int LaunchUmfdHostWithCurrentTokenUnconditional();
int LockoutHandleFailedLogon(_LARGE_INTEGER *,int,int);
int Parse_Cmdline(unsigned short const *,unsigned short * *,unsigned short *,int *,int *);
int SetProcessPriority();
int SetUserEnvironmentVariable(void * *,unsigned short const *,unsigned short const *,int);
int ShouldAllowLockScreenOverRemoteSessionForCurrentUser(_WLSM_GLOBAL_CONTEXT *);
int ShouldDisconnectOnSleep();
int ShouldSetupExecute();
int ShowLogonUIWindowEnumWindowsCallbackProc(HWND__ *,__int64);
int TerminateJob(_WINLOGON_JOB *,unsigned long);
int TestTokenPrivilege(void *,unsigned long);
int ValidateAndUnmarshalTicketLogonInfo(void *,unsigned long);
int ValidateScreenSaver(_WLSM_GLOBAL_CONTEXT *,SCREEN_SAVER_DATA *);
int WMsgGetSwitchUserLogonInfoHandler(unsigned short const *,void * *,unsigned long *,unsigned char * *,_RPC_ASYNC_STATE *,long *);
int WMsgKMessageHandler(unsigned long,unsigned long,_RPC_ASYNC_STATE *,long *);
int WMsgMessageHandler(unsigned long,unsigned long,_RPC_ASYNC_STATE *,long *);
int WMsgNotifyHandler(unsigned long,unsigned long,unsigned short const *,_RPC_ASYNC_STATE *,long *);
int WMsgPSPHandler(unsigned long,tagPOWERSTATEPARAMS *,_RPC_ASYNC_STATE *,long *);
int WMsgReconnectionUpdateHandler(_RECONNECTION_UPDATE_INFO *,_RPC_ASYNC_STATE *,long *);
int WaitForJob(_WINLOGON_JOB *,unsigned long);
int WinlogonDebugSetup;
int WlAccessibilityOnWin32KMessage(_WLSM_GLOBAL_CONTEXT *,unsigned long);
int g_SafeToSwitch;
int g_bInitialized;
int g_fExecuteSetup;
int g_fLaunchedFirstLogonAnimation;
int g_fLogoffTimingDataRelevant;
int g_fResolverShown;
int g_fResolverUserClicked;
int g_fRunSetup;
int g_fSessionEndEventRequired;
int g_fShellStartupReached;
int g_fShutdownResolverDisabled;
int g_fWinPEMode;
int wil_RtlStagingConfig_QueryFeatureState(wil_FeatureState *,unsigned int,int,int *);
long (* g_wil_details_pfnNtQueryWnfStateData)(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long (* g_wil_details_pfnNtUpdateWnfStateData)(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long CreateProcThreadAttributeList(_SECURITY_CAPABILITIES *,_WIN32K_SYSCALL_FILTER *,_PROC_THREAD_ATTRIBUTE_LIST * *);
long DisplayRequestActivityWNFCallback(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
long EasEngineGetPolicies(int,void *,unsigned long,unsigned long *,_tagEASPolicy * *);
long GetRedirectionKeyPath(unsigned short const *,unsigned short const *,unsigned short * *);
long GetRegValueOrDefault(unsigned short const *,unsigned short const *,unsigned long,unsigned long *);
long HandleSessionBusyOptions(_WLSM_GLOBAL_CONTEXT *,void *,unsigned long,unsigned long);
long LogonUmfdAccountAndSetTokenIntegrityLevel(void * *);
long MapUmfdVirtualAccount();
long MyUnhandledExceptionFilter(_EXCEPTION_POINTERS *);
long OnWNFNotification(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
long OnWNFNotificationNoAction(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
long PublishWnfNotificationForTraceCollection(unsigned long,unsigned short const *);
long RemoveTokenPrivileges();
long RtlULongLongSub(unsigned __int64,unsigned __int64,unsigned __int64 *);
long SetCamCxhOnlyUser(int,unsigned short const *);
long SetKernelIntegrityLabel(void *,_MANDATORY_LEVEL);
long StringCbCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCbLengthW(unsigned short const *,unsigned __int64,unsigned __int64 *);
long StringCbPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCopyA(char *,unsigned __int64,char const *);
long StringCchCopyNExW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64,unsigned short * *,unsigned __int64 *,unsigned long);
long StringCchCopyNW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64);
long StringCchCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchLengthW(unsigned short const *,unsigned __int64,unsigned __int64 *);
long StringCchPrintfA(char *,unsigned __int64,char const *,...);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long StringCchVPrintfW(unsigned short *,unsigned __int64,unsigned short const *,char *);
long ULongLongMult(unsigned __int64,unsigned __int64,unsigned __int64 *);
long _AllocStringWorker<CTCoAllocPolicy>(void *,unsigned long,unsigned short const *,unsigned __int64,unsigned __int64,unsigned short * *);
long _GetBuiltInProvidersPolicies(unsigned long,unsigned long,_tagEASPolicy *,unsigned long *,_tagEASPolicy * *);
long _ReadPolicies(void *,unsigned long *,_tagEASPolicy * *);
long _RegValueToVariant(unsigned long,unsigned long,unsigned char const *,tagPROPVARIANT *);
long __CxxUnhandledExceptionFilter(_EXCEPTION_POINTERS *);
long _myVariantClear(tagPROPVARIANT *);
long _myVariantCopy(tagPROPVARIANT *,tagPROPVARIANT *);
long wil_RtlStagingConfig_RecordFeatureUsage(unsigned int,unsigned int,int);
long wil_details_NtQueryWnfStateData(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long wil_details_NtUpdateWnfStateData(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long wil_details_WriteSRUMWnfUsageBuffer(wil::details_abi::heap_vector<wil_details_FeatureUsageSRUM> *);
unsigned __int64 g_TraceRegHandle;
unsigned __int64 g_WarbirdPaintInitTime;
unsigned __int64 g_ulLogoffEndTick;
unsigned __int64 g_ulLogoffStartTick;
unsigned __int64 roundUpAddress(unsigned __int64);
unsigned __int64 s_WppLogger;
unsigned char MprIsProtectedUser(_WLSM_GLOBAL_CONTEXT *,int);
unsigned char WinStationDisconnectWrapper(_WLSM_GLOBAL_CONTEXT *,void *,unsigned long,unsigned char);
unsigned char g_fIgnoreLockEvent;
unsigned char g_fLockConsoleOnWake;
unsigned char g_fNeedLockIgnoreEvent;
unsigned long * g_dwPasswordProvPolicies;
unsigned long * g_xWLGeneric_AppLauncher_ResetSignals;
unsigned long * g_xWLGeneric_Authenticating_ResetSignals;
unsigned long * g_xWLGeneric_CAD_ResetSignals;
unsigned long * g_xWLGeneric_ChangingLogonPassword_ResetSignals;
unsigned long * g_xWLGeneric_ChangingPassword_ResetSignals;
unsigned long * g_xWLGeneric_ChangingUnlockPassword_ResetSignals;
unsigned long * g_xWLGeneric_DelayLock_ResetSignals;
unsigned long * g_xWLGeneric_DisplayLegalNotice_ResetSignals;
unsigned long * g_xWLGeneric_DisplayLegalNotice_Unlock_ResetSignals;
unsigned long * g_xWLGeneric_FindDestinationSession_ResetSignals;
unsigned long * g_xWLGeneric_FindDestinationSession_Unlock_ResetSignals;
unsigned long * g_xWLGeneric_InitiateDisconnect_ResetSignals;
unsigned long * g_xWLGeneric_Killing_Scrnsaver_Locked_ResetSignals;
unsigned long * g_xWLGeneric_Killing_Scrnsaver_Logged_On_ResetSignals;
unsigned long * g_xWLGeneric_LockScreen_ResetSignals;
unsigned long * g_xWLGeneric_Locked_Hibernating_ResetSignals;
unsigned long * g_xWLGeneric_Locked_Reconnect_ResetSignals;
unsigned long * g_xWLGeneric_Locked_ResetSignals;
unsigned long * g_xWLGeneric_Logged_On_Hibernating_ResetSignals;
unsigned long * g_xWLGeneric_Logged_On_Reconnect_ResetSignals;
unsigned long * g_xWLGeneric_Logged_On_ResetSignals;
unsigned long * g_xWLGeneric_Logged_On_Resume_ResetSignals;
unsigned long * g_xWLGeneric_No_Unlock_Reconnect_ResetSignals;
unsigned long * g_xWLGeneric_NotifyStartShell_ResetSignals;
unsigned long * g_xWLGeneric_PostChangeActions_ResetSignals;
unsigned long * g_xWLGeneric_PostUnlockActions_ResetSignals;
unsigned long * g_xWLGeneric_PowerTransition_Locked_ResetSignals;
unsigned long * g_xWLGeneric_ReconnectionUpdate_ResetSignals;
unsigned long * g_xWLGeneric_Request_Change_Credz_ResetSignals;
unsigned long * g_xWLGeneric_Request_LogonChange_Credz_ResetSignals;
unsigned long * g_xWLGeneric_Request_Logon_Credz_ResetSignals;
unsigned long * g_xWLGeneric_Request_UnlockChange_Credz_ResetSignals;
unsigned long * g_xWLGeneric_Request_Unlock_Credz_ResetSignals;
unsigned long * g_xWLGeneric_Request_Web_Unlock_Credz_ResetSignals;
unsigned long * g_xWLGeneric_SecureCredUI_Operation_ResetSignals;
unsigned long * g_xWLGeneric_SequentialLogonPrompt_ResetSignals;
unsigned long * g_xWLGeneric_SequentialLogonPrompt_Unlock_ResetSignals;
unsigned long * g_xWLGeneric_SequentialUnlockPrompt_ResetSignals;
unsigned long * g_xWLGeneric_ShellRestart_ResetSignals;
unsigned long * g_xWLGeneric_ShellStartup_ResetSignals;
unsigned long * g_xWLGeneric_StartSecureLua_ResetSignals;
unsigned long * g_xWLGeneric_TO_Disconnected_ResetSignals;
unsigned long * g_xWLGeneric_TimeoutHandler_Locked_ResetSignals;
unsigned long * g_xWLGeneric_TimeoutHandler_Logged_On_ResetSignals;
unsigned long * g_xWLGeneric_TimeoutHandler_Welcome_ResetSignals;
unsigned long * g_xWLGeneric_Unlock_LogonUser_ResetSignals;
unsigned long * g_xWLGeneric_Unlock_ReportFailedResult_ResetSignals;
unsigned long * g_xWLGeneric_Unlocking_ResetSignals;
unsigned long * g_xWLGeneric_Welcome_Hibernating_ResetSignals;
unsigned long * g_xWLGeneric_Welcome_ResetSignals;
unsigned long AbortBlockedThread(_WLSM_GLOBAL_CONTEXT *,void *);
unsigned long AceListSetWinstaSecurity(HWINSTA__ *,void *,int);
unsigned long AllocAndRegQuery(HKEY__ *,unsigned short const *,unsigned short * *,unsigned long *);
unsigned long AsyncLogoff(unsigned long);
unsigned long AsyncLogoffSupportInit();
unsigned long AuthenticateUser(_WLSM_GLOBAL_CONTEXT *,_SECURITY_LOGON_TYPE,void *,_CRED_PROV_CREDENTIAL *,_LUID *,void * *,_QUOTA_LIMITS *,void * *,unsigned long *,long *,long *,int *);
unsigned long BuildRpcBinding(_NOTIFICATION_COMPONENT *);
unsigned long CallNotificationSubscriber(_NOTIFICATION_COMPONENT *,WLNOTIFICATION_ID,_WLN_CLIENT_PARAMS *,unsigned short *,unsigned short *);
unsigned long Change_ReportResult(_StateMachineCallContext *,int);
unsigned long ChangingPassword(_StateMachineCallContext *,int);
unsigned long CheckThirdPartyStatus(int *);
unsigned long ConnectToSubscriber(_NOTIFICATION_CLIENT_DEF *,_NOTIFICATION_COMPONENT *,int,unsigned long *,int *,_NOTIFICATION_COMPONENT * *);
unsigned long CreateBackupRestoreWizard(unsigned short const *,void *,unsigned short,_WIZARD_CONTEXT * *);
unsigned long CreateEnvironment(void * *);
unsigned long CreateLowPrivilegedTokenForScreenSaver(_WLSM_GLOBAL_CONTEXT *,void * *);
unsigned long CustomParseLookupName(unsigned short const *,unsigned short * *);
unsigned long DeleteRegPath();
unsigned long DisplayDisconnectRefusedMessage(_WLSM_GLOBAL_CONTEXT *,unsigned long);
unsigned long DisplayLegalNotices(_WLSM_GLOBAL_CONTEXT *);
unsigned long DisplayWaitDisconnectStatusMessage(_WLSM_GLOBAL_CONTEXT *,unsigned long);
unsigned long EASApplyLogonPolicy(void *,unsigned long,unsigned long,void *,unsigned long,long,CFveAutoPtr *,void *,int *);
unsigned long EASTamperingDetected(CFveAutoPtr *,int *);
unsigned long ExecuteSetup(void *);
unsigned long ExpandUserEnvironmentStrings(void *,unsigned short const *,unsigned short *,unsigned long);
unsigned long FixGroupMembership();
unsigned long GetInputDesktopNameEx(HDESK__ *,unsigned short * *);
unsigned long GetLegalNotices(unsigned short const *,_LEGALINFO *);
unsigned long GetLogonHoursExtension(CUser *,int);
unsigned long GetSwitchUserCredentials(_WLSM_GLOBAL_CONTEXT *,_CRED_PROV_CREDENTIAL *);
unsigned long GetUnMarshalledUserName(unsigned short const *,int *,unsigned short * *);
unsigned long GetUserDisplayName(_WLSM_GLOBAL_CONTEXT *,unsigned short *,unsigned short *,unsigned short * *,unsigned __int64 *,unsigned short * *,unsigned __int64 *);
unsigned long HandleBackupRestoreWizard(_StateMachineCallContext *,unsigned short const *,void *,unsigned short);
unsigned long HandlePowerRequestFromLogonUI(_WLSM_GLOBAL_CONTEXT *,unsigned int,LogonUIPowerButtonSource,int *);
unsigned long HandleSecurePrompting(unsigned long,_CREDUI_CONTEXT,CREDUI_INFO_INTERNAL_CONTEXT,unsigned long,unsigned long,unsigned char *,unsigned long,int,unsigned long,unsigned char * *,unsigned long *,int *,unsigned long *,unsigned long *);
unsigned long HandleSecurityOptions(_StateMachineCallContext *,unsigned int);
unsigned long HandleShutdownConfirmation(_WLSM_GLOBAL_CONTEXT *,unsigned long,unsigned long,unsigned short *);
unsigned long InitializeCustomThreadPool();
unsigned long InitializeData(_WLSM_GLOBAL_CONTEXT *);
unsigned long InternalInitiateShutdown(unsigned char,unsigned long,unsigned long,unsigned short *,int);
unsigned long InternalNotifyExecute(void *,WLNOTIFICATION_ID,_WLN_CLIENT_PARAMS *,void (*)(void *,unsigned short const *),void *,unsigned short *);
unsigned long IsFirstInteractiveSession(int *);
unsigned long IsServiceExpectedToStart(_NOTIFICATION_CLIENT_DEF *,_NOTIFICATION_COMPONENT *,int *,int *);
unsigned long IsSessionConfigEmpty(_WLSM_GLOBAL_CONTEXT *,int *);
unsigned long JobManagerInitialize();
unsigned long LaunchNewCandidateUseSession(_WLSM_GLOBAL_CONTEXT *);
unsigned long LaunchUmfdHostWithVirtualAccountThreadProc(void *);
unsigned long LogoffFlagsToShutdownFlags(unsigned long);
unsigned long Logon_ReportSuccessResult(_StateMachineCallContext *,int);
unsigned long MprChangeNotifyHelper(_WLSM_GLOBAL_CONTEXT *,int);
unsigned long MprConvertSmartCardToInteractive(_WLSM_GLOBAL_CONTEXT *,int,void * *,unsigned long *);
unsigned long MprLogonNotifyHelper(_WLSM_GLOBAL_CONTEXT *,int);
unsigned long NotifySetEnvironmentVariable(unsigned short * *,unsigned short const *,unsigned short const *);
unsigned long NotifySetEnvironmentVariableUnicode(unsigned short * *,unsigned short const *,_UNICODE_STRING *);
unsigned long NtChangePassword(CHANGE_PASSWORD_DATA *,long *,long *,_DOMAIN_PASSWORD_INFORMATION *);
unsigned long NumSysProcs;
unsigned long PackEASLockoutData(_USER_COUNT_ENTRY *,unsigned long,unsigned char * *,unsigned long *);
unsigned long PerformEmergencyShutdown(unsigned char);
unsigned long PowerSettingLockConsoleOnWakeCallback(void *,unsigned long,void *);
unsigned long ProviderChangePassword(CHANGE_PASSWORD_DATA *,long *,long *,_DOMAIN_PASSWORD_INFORMATION *);
unsigned long PseudoLogging_Off(_WLSM_GLOBAL_CONTEXT *);
unsigned long ReadFromRegistry(unsigned short * const);
unsigned long ReportAuditingLog(_WLSM_GLOBAL_CONTEXT *,unsigned long);
unsigned long ReportLastLogon(_StateMachineCallContext *,int);
unsigned long ReportResult(_WLSM_GLOBAL_CONTEXT *,_WLUI_REQUEST_REASON,int,unsigned short * *,_WLUI_CREDPROV_RESPONSE *);
unsigned long RequestCredentials(_WLSM_GLOBAL_CONTEXT *,_WLUI_REQUEST_REASON,_WLUI_REQUEST_FLAGS,_CRED_PROV_CREDENTIAL *,_CRED_PROV_CREDENTIAL *,unsigned int *,int *);
unsigned long Request_Change_Credz(_StateMachineCallContext *,int);
unsigned long RestoreConnections(void *);
unsigned long RunScreenSaver(_WLSM_GLOBAL_CONTEXT *,SCREEN_SAVER_DATA *,_WINLOGON_JOB * *);
unsigned long SetDefaultWinstaSecurity(HWINSTA__ *,void * *);
unsigned long SetSessionIdOnTokenAndLinkedToken(void *,unsigned long);
unsigned long SetShellInformation(_WLSM_GLOBAL_CONTEXT *,unsigned short *,void *);
unsigned long SetUserIntegrityLabel(void *,_MANDATORY_LEVEL);
unsigned long SetWinlogonDesktopSecurity(HDESK__ *);
unsigned long SetupBasicEnvironment(void * *);
unsigned long ShutdownWindowsWorker(_SHUTDOWN_ACTION,int,unsigned long *);
unsigned long ShutdownWindowsWrapper(_WLSM_GLOBAL_CONTEXT *,unsigned long);
unsigned long StartLogonUI(_WLSM_GLOBAL_CONTEXT *);
unsigned long StartProcessInJob(_PROCESS_INFORMATION *,unsigned long,_WINLOGON_JOB * *);
unsigned long SuspendComputer(int,int,int,int);
unsigned long ToInitialize();
unsigned long ToResetIRTimeout();
unsigned long ToResetTimeout();
unsigned long ToSetIRTimeout(unsigned long,_StateMachineSignalData);
unsigned long ToSetTimeout(unsigned long,_StateMachineSignalData);
unsigned long ToUninitialize();
unsigned long UnpackEASLockoutData(unsigned char *,unsigned long,_USER_COUNT_ENTRY * *,unsigned long *,unsigned long *);
unsigned long UpdateEnvironment(void * *);
unsigned long ValidateSessionIdOnTokenAndLinkedToken(void *,unsigned long,int *);
unsigned long ValidateSigning(unsigned short const *,int);
unsigned long WLGeneric_Authenticating_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_CAD_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_ChangeLogon_ReportResult_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_ChangeUnlock_ReportResult_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_Change_ReportResult_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_ChangingLogonPassword_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_ChangingPassword_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_ChangingUnlockPassword_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_DelayLock_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_DisplayLegalNotice_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_DisplayLegalNotice_Unlock_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_FindDestinationSession_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_FindDestinationSession_Unlock_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_InitiateLock_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_InitiateLock_On_Resume_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_Killing_Scrnsaver_Locked_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_Killing_Scrnsaver_Logged_On_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_Killing_Scrnsaver_Welcome_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_LockScreen_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_Locked_Disconnected_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_Locked_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_Locked_Hibernating_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_Locked_Reconnect_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_Locked_Resume_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_Logged_On_Disconnected_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_Logged_On_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_Logged_On_Hibernating_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_Logged_On_Reconnect_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_Logged_On_Resume_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_Logging_Off_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_Logon_ReportFailedResult_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_Logon_ReportLastLogon_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_Logon_ReportLastLogon_Unlock_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_Logon_ReportSuccessResult_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_Logon_ReportSuccessResult_Unlock_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_MPRChangeLogonNotify_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_MPRChangeNotify_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_MPRChangeUnlockNotify_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_MPRLogonNotify_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_MPRLogonNotify_Unlock_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_No_Unlock_DisconnectedLock_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_No_Unlock_Disconnected_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_No_Unlock_Reconnect_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_NotifyCreateSession_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_NotifyEndShell_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_NotifyLogon_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_NotifyStartShell_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_NotifyTerminateSession_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_PostUnlockActions_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_PowerTransition_Locked_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_PowerTransition_Logged_On_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_PowerTransition_Welcome_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_PseudoLogging_Off1_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_PseudoLogging_Off2_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_ReconnectionUpdate_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_Request_Change_Credz_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_Request_LogonChange_Credz_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_Request_Logon_Credz_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_Request_UnlockChange_Credz_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_Request_Unlock_Credz_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_Request_Web_Unlock_Credz_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_SecureCredUI_Operation_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_SequentialLogonPrompt_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_SequentialLogonPrompt_Unlock_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_SequentialUnlockPrompt_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_ShellStartup_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_StartSecureLua_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_Start_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_TimeoutHandler_Locked_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_TimeoutHandler_Logged_On_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_TimeoutHandler_Welcome_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_Unlock_LogonUser_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_Unlock_ReportFailedResult_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_Unlock_ReportLastLogon_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_Unlock_ReportSuccessResult_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_Unlocking_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_WaitForDisconnectAfterFailedAuth_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_Welcome_Execute(_StateMachineCallContext *);
unsigned long WLGeneric_Welcome_Hibernating_Execute(_StateMachineCallContext *);
unsigned long WLMemSize(void const *);
unsigned long WMsgClntInitialize(_WLSM_GLOBAL_CONTEXT *,int);
unsigned long WMsgClntTerminate();
unsigned long WaitForBackupRestoreWizard(_WIZARD_CONTEXT *);
unsigned long WaitForServiceToStart(_NOTIFICATION_CLIENT_DEF *,_NOTIFICATION_COMPONENT *,unsigned long);
unsigned long WinLogonBootShell(int);
unsigned long WinLogonSetup(int *,int *,_SHUTDOWN_ACTION *);
unsigned long WlAccessibilityCreateSessionKeyWithPermissions(_WLSM_GLOBAL_CONTEXT *,HKEY__ * *);
unsigned long WlAccessibilityOnBoot(_WLSM_GLOBAL_CONTEXT *);
unsigned long WlAccessibilityOnCtrlWinEnter(_WLSM_GLOBAL_CONTEXT *,int);
unsigned long WlAccessibilityOnDesktopSwitch(_WLSM_GLOBAL_CONTEXT *,int);
unsigned long WlAccessibilityOnDisconnect(_WLSM_GLOBAL_CONTEXT *);
unsigned long WlAccessibilityOnDisplaySwitch(_WLSM_GLOBAL_CONTEXT *,int);
unsigned long WlAccessibilityOnLogoff(_WLSM_GLOBAL_CONTEXT *);
unsigned long WlAccessibilityOnLogon(_WLSM_GLOBAL_CONTEXT *,int);
unsigned long WlAccessibilityOnReconnect(_WLSM_GLOBAL_CONTEXT *,int);
unsigned long WlAccessibilityOnShutdown(_WLSM_GLOBAL_CONTEXT *);
unsigned long WlAccessibilityOnSlideToShutDown(_WLSM_GLOBAL_CONTEXT *,int);
unsigned long WlAccessibilityOnStartOSK(_WLSM_GLOBAL_CONTEXT *,int);
unsigned long WlAccessibilityOnTabletLaunchAT(_WLSM_GLOBAL_CONTEXT *,int);
unsigned long WlAccessibilityOnWinPlus(_WLSM_GLOBAL_CONTEXT *,int);
unsigned long WlAccessibilityOnWinU(_WLSM_GLOBAL_CONTEXT *,int);
unsigned long WlAccessibilityStartShortcutTool(_WLSM_GLOBAL_CONTEXT *,int);
unsigned long WlAccessibilityStartShortcutToolDuringSetup(_WLSM_GLOBAL_CONTEXT *);
unsigned long WlAccessibilitypAclKeyForUser(HKEY__ *,void *);
unsigned long WlAccessibilitypCompareConfiguration(HKEY__ *,HKEY__ *);
unsigned long WlAccessibilitypConstructSATKeyName(unsigned long,unsigned short * *);
unsigned long WlAccessibilitypCopyConfiguration(HKEY__ *,HKEY__ *,unsigned short const *);
unsigned long WlAccessibilitypCopyConfigurationSettings(HKEY__ *,HKEY__ *,bool);
unsigned long WlAccessibilitypCopyRegTreeWithoutACLs(HKEY__ *,HKEY__ *,bool);
unsigned long WlAccessibilitypCreateSATKey(int,unsigned long,unsigned long,HKEY__ * *);
unsigned long WlAccessibilitypDeleteSATKey(unsigned long);
unsigned long WlAccessibilitypDuplicateKeyValues(HKEY__ *,HKEY__ *);
unsigned long WlAccessibilitypStartProcessInAtJob(_WLSM_GLOBAL_CONTEXT *,unsigned short const *,unsigned long,int,void * *);
unsigned long WlDisplayMessage(unsigned short const *,unsigned short const *,unsigned int,unsigned int *);
unsigned long WlDisplayMessageByResourceId(unsigned int,unsigned int,unsigned int,unsigned int *,CUser *);
unsigned long WlDisplayPowerMessageStatus(_WLSM_GLOBAL_CONTEXT *,POWER_ACTION,_SYSTEM_POWER_STATE,int);
unsigned long WlDisplayStatus(unsigned short const *,_WLUI_STATE,unsigned long);
unsigned long WlDisplayStatusByResourceId(unsigned int,_WLUI_STATE,unsigned long,CUser *);
unsigned long WlRemindersDisplay(WlReminderType,void *,void *,int);
unsigned long WlRemindersTerminate(WlReminderType);
unsigned long WlRemindersiAddPostShell(_tagSHELLREMINDER *);
unsigned long WlRemindersiDisplayNow(SHELLREMINDER_PRIV *,WlReminderType,void * *);
unsigned long WlStateMachineInitialize();
unsigned long WlStateMachineSetSignal(unsigned long,_StateMachineSignalData *);
unsigned long WluiAbortUIThread(void *);
unsigned long WluiDisplayTSDisconnectOptionsList(unsigned long,unsigned long *,unsigned long,unsigned long *,unsigned long *);
unsigned long WluiDisplayTSDisconnectOptionsMessage(unsigned long,unsigned long *,unsigned long,unsigned long *,unsigned long *);
unsigned long WluiDisplayTSDisconnectUI(unsigned long,unsigned long *,int,unsigned int *,int *);
unsigned long WluiDisplayTSReconnectUI(unsigned long,unsigned long *,unsigned int *);
unsigned long WppGrowBuf(void * *,unsigned long);
unsigned long WppStart(unsigned char,unsigned long);
unsigned long g_AttachProcessId;
unsigned long g_BreakinProcessId;
unsigned long g_FadeDelay;
unsigned long g_WinlogonStage;
unsigned long g_dwCreateSessionRet;
unsigned long g_dwRefCount;
unsigned long g_dwResolverWaitTime;
unsigned long s_VerbosityLevel;
unsigned long s_WppControlLevel;
unsigned long s_WppManualOverride;
unsigned short * * SysProcs;
unsigned short * * TempCommandLineToArgvW(unsigned short const *,int *);
unsigned short * AllocAndExpandEnvironmentStrings(unsigned short const *);
unsigned short * AllocAndLoadString(unsigned int,CUser *);
unsigned short * AllocAndLoadStringHelper(unsigned int);
unsigned short * AllocServerName(_UNICODE_STRING *);
unsigned short * GetFriendlyName();
unsigned short * MyFormatMessage(unsigned long);
unsigned short * Parameters;
unsigned short * g_wszDefaultShellCommand;
unsigned short * g_wszRestartShellCommand;
unsigned short * gwszUmfdAccountName;
unsigned short * s_WppBackupFileName;
unsigned short * s_WppLogFileName;
unsigned short * s_WppLogSessionName;
unsigned short WluipCopyToUnicodeString(unsigned short *,unsigned short *,_UNICODE_STRING *);
unsigned short const * const RuntimeClass_Windows_Internal_AssignedAccess_AssignedAccessManager;
void (* g_Uninitialize)();
void (* g_pFnLog)(unsigned long,unsigned short *);
void (* g_wil_details_RecordSRUMFeatureUsage)(unsigned int,unsigned int,unsigned int);
void (* g_wil_details_apiRecordFeatureError)(unsigned int,FEATURE_ERROR const *);
void (* g_wil_details_apiRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_apiSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_apiUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_internalRecordFeatureError)(unsigned int,FEATURE_ERROR const *);
void (* g_wil_details_internalRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_internalSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_internalUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_pfnFeatureLoggingHook)(unsigned int,FEATURE_LOGGED_TRAITS const *,FEATURE_ERROR const *,int,wil_ReportingKind const *,wil_VariantReportingKind const *,unsigned char,unsigned __int64);
void (* g_wil_details_realtimeFeatureUsageHook)(unsigned int,unsigned int,unsigned char);
void * GetNextProcessFromJob(void *);
void * MemoryAlloc(unsigned __int64);
void * ServerReadyEvent;
void * UHHeapAlloc(unsigned __int64);
void * WLAlloc(unsigned __int64);
void * g_hLogoffEvent;
void * g_hPowerNotification;
void * g_hTSJobCallbackWaitHandle;
void * operator new(unsigned __int64);
void * operator new(unsigned __int64,std::nothrow_t const &);
void AlternateCredentialsRequiredEventCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_WAIT *,long);
void AsyncLogoffCb(void *,unsigned char);
void AsyncLogoffSupportSetUser(void *);
void AsyncLogoffSupportUninit();
void Checking_LastLogonPolicy(_StateMachineCallContext *,int);
void CleanupAutoLogonCredentials(_WLSM_GLOBAL_CONTEXT *,unsigned long,bool);
void CleanupCredentialContextReg();
void CleanupCustomThreadPool();
void CleanupData(_WLSM_GLOBAL_CONTEXT *);
void CleanupLogon(_WLSM_GLOBAL_CONTEXT *);
void CleanupSysProcs();
void CleanupUnlock(_WLSM_GLOBAL_CONTEXT *);
void CloudPasswordExpiredReminderEventCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_WAIT *,long);
void ConstructInitialMessageForSubscriber(_NOTIFICATION_CLIENT_DEF *,_NOTIFICATION_COMPONENT *,unsigned short *,unsigned long);
void CredsStaleReminderEventCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_WAIT *,long);
void DbgPrintfW(unsigned long,unsigned short const *,...);
void DeletepJob(_WINLOGON_JOB * *,int);
void DisplayMessage_Callback(void *,unsigned short const *);
void EasEngineLogFunction(unsigned long,unsigned short *);
void ExecuteNamedEscape(tagUMFD_WINLOGON_ESCAPE_ARGUMENT *);
void FixAdvapiHKEYCache();
void FontLoaderWorkerCallback(_TP_CALLBACK_INSTANCE *,void *);
void ForceLogoffOtherUsers(void * const,unsigned long,CandidateUserPhase,int *);
void FreeHeap<_KERB_S4U_LOGON *>(_KERB_S4U_LOGON *);
void FreeHeap<_TOKEN_USER *>(_TOKEN_USER *);
void FreeHeap<unsigned short *>(unsigned short *);
void FreeRpcBinding(_NOTIFICATION_COMPONENT *);
void GetSubscriberDisplayName(_NOTIFICATION_CLIENT_DEF *,_NOTIFICATION_COMPONENT *);
void HungSubscriberWarningCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
void InitiateDisconnectWorkerCallback(_TP_CALLBACK_INSTANCE *,void *);
void JobManagerCallback(void *,unsigned char);
void JobManagerUninitialize();
void LogonHoursDisplayWarning(CUser *,unsigned long,unsigned long);
void MemoryFree(void *);
void MonitorOffWorkerCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_WORK *);
void MprCancelNotification();
void NTLMIsDisabledReminderEventCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_WAIT *,long);
void NotifyCallback(void *);
void NotifyPowerMgmt(unsigned char);
void NotifyScreenSaverStarted(_WLSM_GLOBAL_CONTEXT *,int);
void NotifyScreenSaverStopped(_WLSM_GLOBAL_CONTEXT *,int);
void NotifyUserPresenceOnDesktopForDMAProtection(int,_WLSM_GLOBAL_CONTEXT *);
void PerformDelayedSwitchToApplicationDesktopCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_WAIT *,long);
void PerformDelayedSwitchToApplicationDesktopPerformanceCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_WAIT *,long);
void PerformPostOOBEWorkIfNecessary(_WLSM_GLOBAL_CONTEXT *);
void PrepareSetupExecution(unsigned short *,unsigned long,unsigned long *);
void ProcessWluiResponse(_WLUI_REQUEST_REASON,long,long,_WLUI_CREDPROV_RESPONSE *);
void ReadCredentialContextReg(_WLSM_GLOBAL_CONTEXT *);
void ReadSysProcsFromRegistry();
void RecordBlackboxInfo(unsigned short const *,int,_WLSM_GLOBAL_CONTEXT *);
void RecordHungSubscribersIntoBlackbox(_NOTIFICATION_CLIENT_DEF *,int);
void RecordLastLogoffEndTime();
void ReportBootGoodThread(void *);
void ResumePowerTransitions();
void SQMBitLockerIfNeeded();
void ServiceNotifyCallback(void *);
void SetCredentialContextReg(unsigned short const *);
void SetSetupExitCode(unsigned long *);
void SetSetupShutdownAction(int *,_SHUTDOWN_ACTION *);
void SetSetupShutdownActionWorker(int *,int *,_SHUTDOWN_ACTION *);
void SetupCreateSplashScreen(HDESK__ *);
void SetupDestroySplashScreen();
void ShutdownWindowsWorkerThread(_TP_CALLBACK_INSTANCE *,void *);
void SleepWorkerCallback(_TP_CALLBACK_INSTANCE *,void *);
void SmartCardUnlockRequiredEventCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_WAIT *,long);
void SortEASLockoutData(_USER_COUNT_ENTRY *,unsigned long);
void StopAndReleaseTimer(_TP_TIMER * *);
void StopOobeLoggingElevatedOperations();
void StopTraceCollectionCallBack(_TP_CALLBACK_INSTANCE *,void *,_TP_WAIT *,long);
void SuspendPowerTransitions();
void SwitchDesktopWorkerCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_WORK *);
void TSJobCallback(void *,unsigned char);
void TransferCredentialsWorkerThread(_TP_CALLBACK_INSTANCE *,void *);
void UnlockWindowStationAndStartAccessibilityApps(_WLSM_GLOBAL_CONTEXT *);
void UpdateRegistryItem(_REG_CHANGE *);
void WLEventWrite(_EVENT_DESCRIPTOR const &);
void WLEventWrite(_EVENT_DESCRIPTOR const &,unsigned long);
void WLEventWrite(_EVENT_DESCRIPTOR const &,unsigned long,unsigned long);
void WLEventWrite(_EVENT_DESCRIPTOR const &,unsigned long,unsigned long,unsigned short const *);
void WLEventWrite(_EVENT_DESCRIPTOR const &,unsigned long,unsigned short const *);
void WLEventWrite(_EVENT_DESCRIPTOR const &,unsigned long,unsigned short const *,unsigned short const *);
void WLEventWrite(_EVENT_DESCRIPTOR const &,unsigned short const *);
void WLEventWrite(_EVENT_DESCRIPTOR const &,void *,unsigned short const *,unsigned short const *);
void WLEventWriteStartStopScenario(bool,_EVENT_DESCRIPTOR const &,_GUID const &,unsigned long);
void WLEventWriteStartStopScenario(bool,_EVENT_DESCRIPTOR const &,_GUID const &,unsigned long,unsigned long,unsigned long,unsigned long);
void WLEventWriteWinSqmUserSessionChange(_EVENT_DESCRIPTOR const &,unsigned long,void *);
void WLFree(void * *);
void WLGeneric_AbortPendingLockRequest_Enter(_StateMachineCallContext *);
void WLGeneric_AbortPendingLuaRequest_Enter(_StateMachineCallContext *);
void WLGeneric_AccessNotifyAsSystem_Enter(_StateMachineCallContext *);
void WLGeneric_AccessNotifyAsUser_Enter(_StateMachineCallContext *);
void WLGeneric_AccessNotify_Enter(_StateMachineCallContext *);
void WLGeneric_AppLauncher_Enter(_StateMachineCallContext *);
void WLGeneric_CAD_Exit(_StateMachineCallContext *);
void WLGeneric_CAD_Return_Enter(_StateMachineCallContext *);
void WLGeneric_ChangeLogon_ReportResult_Exit(_StateMachineCallContext *);
void WLGeneric_ChangeUnlock_ReportResult_Exit(_StateMachineCallContext *);
void WLGeneric_Change_ReportResult_Exit(_StateMachineCallContext *);
void WLGeneric_CloudPasswordExpiredReminder_Enter(_StateMachineCallContext *);
void WLGeneric_CompleteLockRequest_Enter(_StateMachineCallContext *);
void WLGeneric_CredsAreStaleReminder_Enter(_StateMachineCallContext *);
void WLGeneric_DelayLock_DisplayOffHandler_Enter(_StateMachineCallContext *);
void WLGeneric_DelayLock_DisplayOnHandler_Enter(_StateMachineCallContext *);
void WLGeneric_DelayLock_Exit(_StateMachineCallContext *);
void WLGeneric_DelayedSwitchDesktop_Enter(_StateMachineCallContext *);
void WLGeneric_DifferentCredsAreRequiredReminder_Enter(_StateMachineCallContext *);
void WLGeneric_DisplayLegalNotice_Exit(_StateMachineCallContext *);
void WLGeneric_DisplayLegalNotice_Unlock_Exit(_StateMachineCallContext *);
void WLGeneric_DwmControl_Enter(_StateMachineCallContext *);
void WLGeneric_FindDestinationSession_Exit(_StateMachineCallContext *);
void WLGeneric_FindDestinationSession_Unlock_Exit(_StateMachineCallContext *);
void WLGeneric_HandleSecureLuaBeforeShell_Enter(_StateMachineCallContext *);
void WLGeneric_InitiateDisconnect_Enter(_StateMachineCallContext *);
void WLGeneric_InitiateForceLogoff_Enter(_StateMachineCallContext *);
void WLGeneric_LockScreen_Exit(_StateMachineCallContext *);
void WLGeneric_Locked_Disconnected_Exit(_StateMachineCallContext *);
void WLGeneric_Locked_Exit(_StateMachineCallContext *);
void WLGeneric_Locked_Hibernating_Exit(_StateMachineCallContext *);
void WLGeneric_Locked_Resume_Exit(_StateMachineCallContext *);
void WLGeneric_Locked_Return_Enter(_StateMachineCallContext *);
void WLGeneric_Logged_On_Disconnected_Exit(_StateMachineCallContext *);
void WLGeneric_Logged_On_Exit(_StateMachineCallContext *);
void WLGeneric_Logged_On_Hibernating_Exit(_StateMachineCallContext *);
void WLGeneric_Logged_On_Resume_Exit(_StateMachineCallContext *);
void WLGeneric_LogoffNotify_Enter(_StateMachineCallContext *);
void WLGeneric_Logon_Checking_LastLogonPolicy_Enter(_StateMachineCallContext *);
void WLGeneric_Logon_Checking_LastLogonPolicy_Unlock_Enter(_StateMachineCallContext *);
void WLGeneric_Logon_ReportFailedResult_Exit(_StateMachineCallContext *);
void WLGeneric_Logon_ReportLastLogon_Exit(_StateMachineCallContext *);
void WLGeneric_Logon_ReportLastLogon_Unlock_Exit(_StateMachineCallContext *);
void WLGeneric_Logon_ReportSuccessResult_Exit(_StateMachineCallContext *);
void WLGeneric_Logon_ReportSuccessResult_Unlock_Exit(_StateMachineCallContext *);
void WLGeneric_MPRChangeLogonNotify_Exit(_StateMachineCallContext *);
void WLGeneric_MPRChangeNotify_Exit(_StateMachineCallContext *);
void WLGeneric_MPRChangeUnlockNotify_Exit(_StateMachineCallContext *);
void WLGeneric_MPRLogonNotify_Exit(_StateMachineCallContext *);
void WLGeneric_MPRLogonNotify_Unlock_Exit(_StateMachineCallContext *);
void WLGeneric_NTLMIsDisabledReminder_Enter(_StateMachineCallContext *);
void WLGeneric_No_Unlock_DisconnectedLock_Exit(_StateMachineCallContext *);
void WLGeneric_No_Unlock_Disconnected_Exit(_StateMachineCallContext *);
void WLGeneric_NotifyCreateSession_Exit(_StateMachineCallContext *);
void WLGeneric_NotifyLogon_Exit(_StateMachineCallContext *);
void WLGeneric_NotifyStartShell_Exit(_StateMachineCallContext *);
void WLGeneric_PostChangeActions_Enter(_StateMachineCallContext *);
void WLGeneric_PowerTransition_ShowResumeMsg_Enter(_StateMachineCallContext *);
void WLGeneric_ReadyForSecureLua_Enter(_StateMachineCallContext *);
void WLGeneric_Request_Change_Credz_Exit(_StateMachineCallContext *);
void WLGeneric_Request_LogonChange_Credz_Exit(_StateMachineCallContext *);
void WLGeneric_Request_Logon_Credz_Exit(_StateMachineCallContext *);
void WLGeneric_Request_Logon_Credz_Return_Enter(_StateMachineCallContext *);
void WLGeneric_Request_UnlockChange_Credz_Exit(_StateMachineCallContext *);
void WLGeneric_Request_Unlock_Credz_Exit(_StateMachineCallContext *);
void WLGeneric_Request_Unlock_Credz_Return_Enter(_StateMachineCallContext *);
void WLGeneric_Request_Web_Unlock_Credz_Exit(_StateMachineCallContext *);
void WLGeneric_SecureCredUI_Operation_Exit(_StateMachineCallContext *);
void WLGeneric_SequentialLogonPrompt_Exit(_StateMachineCallContext *);
void WLGeneric_SequentialLogonPrompt_Unlock_Exit(_StateMachineCallContext *);
void WLGeneric_SequentialUnlockPrompt_Exit(_StateMachineCallContext *);
void WLGeneric_ShellRestart_Enter(_StateMachineCallContext *);
void WLGeneric_ShellStartup_Exit(_StateMachineCallContext *);
void WLGeneric_StartSecureLua_Exit(_StateMachineCallContext *);
void WLGeneric_Start_Exit(_StateMachineCallContext *);
void WLGeneric_TO_Disconnected_Enter(_StateMachineCallContext *);
void WLGeneric_TimeoutHandler_Locked_Exit(_StateMachineCallContext *);
void WLGeneric_TimeoutHandler_Logged_On_Exit(_StateMachineCallContext *);
void WLGeneric_TimeoutHandler_Welcome_Exit(_StateMachineCallContext *);
void WLGeneric_Unlock_Checking_LastLogonPolicy_Enter(_StateMachineCallContext *);
void WLGeneric_Unlock_LogonUser_Exit(_StateMachineCallContext *);
void WLGeneric_Unlock_ReportFailedResult_Exit(_StateMachineCallContext *);
void WLGeneric_Unlock_ReportLastLogon_Exit(_StateMachineCallContext *);
void WLGeneric_Unlock_ReportSuccessResult_Exit(_StateMachineCallContext *);
void WLGeneric_WaitForDisconnectAfterFailedAuth_Exit(_StateMachineCallContext *);
void WLGeneric_Welcome_Exit(_StateMachineCallContext *);
void WLGeneric_Welcome_Hibernating_Exit(_StateMachineCallContext *);
void WLGeneric_Welcome_Return_Enter(_StateMachineCallContext *);
void WMsgDisplayOffHandler(int);
void WaitForBootshRunOnceComplete();
void WaitForInactivityExecuteThread(_StateMachineCallContext *);
void WlAccessibilitySessionSwitchPreSwitch(_WLSM_GLOBAL_CONTEXT *);
void WlAccessibilitySessionSwitchToPostSwitch(_WLSM_GLOBAL_CONTEXT *);
void WlAccessibilitySwitchDesktop(_WLSM_GLOBAL_CONTEXT *,_DESKTOPID,unsigned long,unsigned long);
void WlInactivityGetEASSettings(_WLSM_GLOBAL_CONTEXT *,unsigned long *);
void WlInactivityTimeoutHandler(_WLSM_GLOBAL_CONTEXT *,unsigned long);
void WlInactivityTimeoutHandler_Locked(_WLSM_GLOBAL_CONTEXT *,unsigned long);
void WlInactivityTimeoutHandler_Logged_On(_WLSM_GLOBAL_CONTEXT *,unsigned long);
void WlInactivityTimeoutHandler_Logged_On_Hibernating(_WLSM_GLOBAL_CONTEXT *);
void WlInactivityTimeoutHandler_Welcome(_WLSM_GLOBAL_CONTEXT *,unsigned long);
void WlLoadInactivitySettings(_WLSM_GLOBAL_CONTEXT *,_INACTIVITY_SETTINGS *);
void WlLockGetDelayLockInterval(_WLSM_GLOBAL_CONTEXT *,unsigned long *);
void WlLockGetDelayLockSettings(_WLSM_GLOBAL_CONTEXT *,unsigned long *);
void WlRemindersTerminateWorkerCallback(_TP_CALLBACK_INSTANCE *,void *);
void WlStateMachine_Execute_SetContext(_StateMachineCallContext *,void *);
void WlStateMachine_Exit_GetContext(_StateMachineCallContext *,void * *);
void WlStateMachine_Exit_SetContext(_StateMachineCallContext *,void *);
void WlpPeriodicBreak(void *,unsigned char);
void WluiiDestroySharedEvents();
void WppFreeBuf(void * *);
void _FreePolicies(unsigned long,_tagEASPolicy *);
void _tlgWriteActivityAutoStop<0,4>(_tlgProvider_t const *,_GUID const *);
void _tlgWriteActivityAutoStop<140737488355328,5>(_tlgProvider_t const *,_GUID const *);
void _tlgWriteActivityAutoStop<70368744177664,5>(_tlgProvider_t const *,_GUID const *);
void operator delete(void *);
void wil_StagingConfig_LogStagedFeatureUsage(unsigned int,unsigned int,unsigned char);
void wil_details_FeatureReporting_IncrementOpportunityInCache(wil_details_FeatureReportingCache *,wil_details_ServiceReportingKind,unsigned int,wil_details_RecordUsageResult *);
void wil_details_FeatureReporting_IncrementUsageInCache(wil_details_FeatureReportingCache *,wil_details_ServiceReportingKind,unsigned int,wil_details_RecordUsageResult *);
wil_details_RecordUsageResult wil_details_FeatureReporting_RecordUsageInCache(wil_details_FeatureReportingCache *,wil_details_ServiceReportingKind,unsigned int,unsigned int);
