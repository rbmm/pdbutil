class <lambda_0374aa0a5d1201b2358c6bce99369c58>
{
	static <lambda_invoker_cdecl>(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
};

struct <lambda_057488ec2a114cea6fb77af5c8c7453a>
{
	operator()(char const *,unsigned short &,unsigned short);
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

class <lambda_23ccd371bd23b4ef0b63f9b72858141d>
{
	static <lambda_invoker_cdecl>();
};

struct <lambda_23da9268e2a0d8a8175eb928cd1af10c>
{
	operator()();
};

class <lambda_43317e6270080a062ba8777d7d709349>
{
	static long <lambda_invoker_cdecl>(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
};

class <lambda_5035b992506f4af81a770c5842624510>
{
	static <lambda_invoker_cdecl>(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
};

class <lambda_5f1dd388c03885d19ee806198d2ac5ef>
{
	static int <lambda_invoker_cdecl>(_RTL_RUN_ONCE *,void *,void * *);
};

class <lambda_68b940e28cd3372c665d10dd26427313>
{
	static <lambda_invoker_cdecl>();
};

class <lambda_6d06f265fa78a56f9dca2a1b8c432f39>
{
	static <lambda_invoker_cdecl>();
};

class <lambda_6e5cbadb812f508bf94441933f2cbc15>
{
	static long <lambda_invoker_cdecl>(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
};

struct <lambda_868f43637e8409a46b7fdcb03681968d>
{
	long operator()();
};

class <lambda_a14e49ce427a1853f087bba834558a2c>
{
	static long <lambda_invoker_cdecl>(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
};

class <lambda_a8e7baa2fca040c17c3e795f3590cb07>
{
	static <lambda_invoker_cdecl>();
};

class <lambda_aa194dc0bf891154933407eb98fb868a>
{
	static <lambda_invoker_cdecl>(void *);
};

class <lambda_ab0b23ad2a897ce1521ad0996f104e42>
{
	static <lambda_invoker_cdecl>();
};

class <lambda_b8c2ef79593884acf0a3b4b50311ef8d>
{
	static <lambda_invoker_cdecl>();
};

struct <lambda_be982950011ed8101469015f8f3d0dc0>
{
	bool operator()();
};

struct <lambda_c86cf0f6600b9e335c894cf2dafdfc27>
{
	long operator()();
};

class <lambda_d51448ba32f8ef42e59400edd4566183>
{
	static <lambda_invoker_cdecl>(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
};

class <lambda_d93655bd33d44513d4ad201382c30aa7>
{
	static long <lambda_invoker_cdecl>(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
};

class <lambda_dfda98d6fe16770407f231f3eaeabe31>
{
	static <lambda_invoker_cdecl>();
};

struct <lambda_e310e4ff2a3ebef09573d43873316abf>
{
	long operator()();
};

struct <lambda_e564b76d63fce7a9913429af641fdb6c>
{
	long operator()();
};

class <lambda_f4f399956d11c6d8f03f278f9f46900d>
{
	static <lambda_invoker_cdecl>();
};

class <lambda_fee8cea507d2413a58be13acfb66740a>
{
	static <lambda_invoker_cdecl>(void *);
};

struct AgileGitPtr
{
	long Revoke();
};

struct AutoProviderRegistrar
{
	AutoProviderRegistrar(void (*)(),void (*)());
	~AutoProviderRegistrar();
};

struct AutoStubBias<IUnknown,Windows::Internal::INilDelegate>
{
	AutoStubBias<IUnknown,Windows::Internal::INilDelegate>(IRpcOptions *,IUnknown *,Windows::Internal::INilDelegate *);
	~AutoStubBias<IUnknown,Windows::Internal::INilDelegate>();
};

struct AutoStubBias<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler>
{
	~AutoStubBias<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler>();
};

struct AutoStubBias<Windows::Foundation::IAsyncOperation<HSTRING__ *>,Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING__ *> >
{
	~AutoStubBias<Windows::Foundation::IAsyncOperation<HSTRING__ *>,Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING__ *> >();
};

struct CAudioPlaybackEventCallback
{
	CAudioPlaybackEventCallback();
	long RuntimeClassInitialize(Windows::Internal::AsyncDeferral<Windows::Internal::CNoResult>);
	virtual long OnMarkerRendered(__int64);
	virtual long OnNewState(_CAudioPlaybackState);
	virtual long OnReplayIterationCompleted();
	virtual ~CAudioPlaybackEventCallback();
};

struct CAutoHandle<HKEY__ *>
{
	~CAutoHandle<HKEY__ *>();
};

class CAutoLogonManager
{
	int _IsAutoLogonModeLockHeld();
	long _GetAutoLogonCredential(unsigned short *,unsigned long,unsigned short *,unsigned long,unsigned short *,unsigned long);
	long _GetRegistryAutoLogonCredential(unsigned short *,unsigned long,unsigned short *,unsigned long,unsigned short *,unsigned long);
	long _GetSerializationConnectedAutoLogon(_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *);
	long _GetSerializationUnlockLogon(_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *);
	void _UpdateAutoLogonMode(int,int,int);
public:
	CAutoLogonManager();
	virtual HRESULT IgnoreAutoLogonMode() = 0;
	virtual BOOL IsAutoLogonMode() = 0;
	virtual BOOL IsSingleUserNoPasswordAutoLogonMode() = 0;
	virtual BOOL IsAutoLogonNotSingleUserNoPasswordMode() = 0;
	virtual BOOL IsSystemAutoLogon() = 0;
	virtual HRESULT UpdateAutoLogonDefaultSID() = 0;
	virtual HRESULT ResetAutoLogonSetting() = 0;
	virtual HRESULT ClearSystemAutoLogonSetting() = 0;
	virtual HRESULT GetAutoLogonCredential(_Out_ PWSTR*, _Out_ PWSTR*, _Out_ PWSTR*) = 0;
	virtual BOOL IsSingleUser() = 0;
	virtual HRESULT GetSerializedAutoLogonCredential(ICredProviderCredentialSerialization * *) = 0;

	void GetAutoLogonStatus();
};

struct CAutoMemPtr<CFirstLogonAnimation>
{
	~CAutoMemPtr<CFirstLogonAnimation>();
};

class CBaseRPCTimeout
{
	static void s_Callback(void *,unsigned char);
public:
	void Disarm();
};

struct CCicCategory
{
	void Init(unsigned short *,_GUID const &);
};

struct CCredentialProviderSerialization
{
	CCredentialProviderSerialization();
	virtual long GetAuthenticationPackage(unsigned long *);
	virtual long GetCredentialContext(unsigned short * *);
	virtual long GetCredentialProviderCLSID(_GUID *);
	virtual long GetSerialization(unsigned long *,unsigned char * *);
	virtual long GetSerializationFlags(SERIALIZATION_FLAGS *);
	virtual ~CCredentialProviderSerialization();
};

class CFSIAAsyncAction
{
	long _BeginFSIAIfNecessary(CFirstLogonAnimation * *);
	long _LaunchFSIA(CFirstLogonAnimation * *);
	long _WaitForFSIAEvents(CFirstLogonAnimation *);
	void _FSIABackgroundThreadProc();
public:
	CFSIAAsyncAction();
	long RuntimeClassInitialize(IAutoLogonManager *,Windows::Internal::UI::Logon::Controller::IUserSettingManager *,Windows::Internal::UI::Logon::Controller::ILogonUX *,unsigned char,Windows::Internal::UI::Logon::Controller::LogonUIState);
	long UpdateTimeout(unsigned long);
	virtual long GetResults();
	virtual long OnStart();
	virtual long get_Completed(Windows::Foundation::IAsyncActionCompletedHandler * *);
	virtual long put_Completed(Windows::Foundation::IAsyncActionCompletedHandler *);
	virtual void OnCancel();
	virtual void OnClose();
	virtual ~CFSIAAsyncAction();
};

struct CFirstLogonAnimation
{
	void * GetShellEvent();
	void RequestEndFirstLogonAnimation();
	void TerminateFirstLogonAnimation();
	~CFirstLogonAnimation();
};

class CFirstSignInAnimation
{
	bool _IsAnimationInProgress();
public:
	CFirstSignInAnimation();
	static TrustLevel InternalGetTrustLevel();
	static unsigned short const * InternalGetRuntimeClassName();
	virtual long CancelAnimation();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long StartAnimation(IInspectable *,Windows::Internal::UI::Logon::Controller::IUserSettingManager *,Windows::Internal::UI::Logon::Controller::ILogonUX *,unsigned char,Windows::Internal::UI::Logon::Controller::LogonUIState);
	virtual long StopAnimationAsync(unsigned long,Windows::Foundation::IAsyncAction * *);
	virtual long get_IsAnimationInProgress(unsigned char *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CHardwareDetection
{
protected:
	static CHardwareDetection::HardwareState _s_HardwareState;
	static unsigned int _s_uKeyboardCount;
public:
	static CHardwareDetection::HardwareState s_GetState();
	static unsigned int s_GetPhysicalKeyboardCount(void *);
};

struct CImmersiveColor
{
	static unsigned long GetColor(IMMERSIVE_COLOR_TYPE);
};

struct CInputDllEnumRegBase
{
	CInputDllEnumRegBase(HKEY__ *,unsigned short const *);
};

struct CInputDllEnumRegKey
{
	long Next(unsigned short *,unsigned long);
	~CInputDllEnumRegKey();
};

struct CInputDllRegKey
{
	long Close();
	long Create(HKEY__ *,unsigned short const *,unsigned short *,unsigned long,unsigned long,_SECURITY_ATTRIBUTES *,unsigned long *);
	long EnumKey(unsigned long,unsigned short *,unsigned long);
	long Open(HKEY__ *,unsigned short const *,unsigned long);
	long RecurseDeleteKey(unsigned short const *,int);
	virtual long QueryValue(unsigned long &,unsigned short const *);
	virtual long QueryValueCch(unsigned short *,unsigned short const *,unsigned long);
};

struct CInputList
{
	CInputList(unsigned int);
	InputContainer * GetNextEmptyEntry();
};

class CLanguageProfileHelper
{
	static long GetUserInputMethodString(void *,bool,unsigned short * *);
	static void * CreateUserSid(unsigned short const *);
public:
	static bool IsUserInputMethodLoadingEnabled();
	static void SetPerUserInputMethods(unsigned short const *,unsigned short * *);
};

struct CList<CLanguageAssemblyList *>
{
	long Add(CLanguageAssemblyList *);
	long Delete(CListEntry<CLanguageAssemblyList *> *);
	~CList<CLanguageAssemblyList *>();
};

struct CList<SortOrderItem *>
{
	long Add(SortOrderItem *);
	long Delete(CListEntry<SortOrderItem *> *);
	long QuickSort(int (*)(void *,void *));
	long QuickSortImpl(CListEntry<SortOrderItem *> * *,CListEntry<SortOrderItem *> *,CListEntry<SortOrderItem *> * *,int (*)(void *,void *));
	~CList<SortOrderItem *>();
};

struct CListEntry<CLanguageAssemblyList *>
{
	long Delete();
};

struct CListEntry<SortOrderItem *>
{
	long Delete();
};

struct CLocalMemPtr<void>
{
	~CLocalMemPtr<void>();
};

class CLockAction
{
	bool IsDefaultLockApp();
	long _CacheLockAppHostInstance(ILockAppHost *);
	long _CleanupLockAppShownWatchdogTimer();
	long _CreateGDIRenderedDCompSurface(IDCompositionDevice2 *,int,int,unsigned long,bool,IDCompositionSurface * *);
	long _CreateLockAppShownWatchdogTimer(unsigned __int64);
	long _CreateTransitionFromLockAppWatchdog();
	long _EnsureDevice(IDCompositionDesktopDevicePartner * *);
	long _EnsureLockAppHost(ILockAppHost * *);
	long _InitializeDCompDeviceSupport(IDXGIDevice1 * *);
	long _SubscribeToPowerSettingNotifications();
	long _SuspendOrResumeLockAppShownWatchdogTimer(bool);
	long _SyncBackstopVisualToLogonVisual();
	static long volatile _s_lockGlobalCookie;
	static short s_numberOfConsecutiveUnlocksIfLockAppDidntShow;
	static unsigned long _s_PowerSettingDisplayNotificationCallback(void *,unsigned long,void *);
	static void _s_LockAppShownWatchdogTimerExpired(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
	static void _s_TransitionFromLockAppWatchdogTimerExpired(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
	static void _s_UnlockIfLockAppDidntShowWatchdogTimerExpired(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
	void ResetWnfSubscriptions();
	void UnboostLockAppHost();
	void UnboostLogonUI();
	void _CleanupCachedLockAppHost(bool);
	void _CleanupSharedVisual();
	void _CleanupThumbnail();
	void _CreateTransitionFromLockAppWnfSubscription();
	void _OnLockAppShownWatchdogTimerExpired(bool);
	void _OnTransitionFromLockAppWatchdogTimerExpired();
	void _OnUnlockIfLockAppDidntShowWatchdogTimerExpired();
public:
	CLockAction();
	long RuntimeClassInitialize(HSTRING__ *,HSTRING__ *,HSTRING__ *,LockActionArgs *,ILockAppHost *,void *,CRefCountedObject<LockScreenCpuBooster> *,CRefCountedObject<LockScreenIOBooster> *);
	virtual long CheckCompletion();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetResults(HSTRING__ * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long HandleEvent(LockAppHostEvent,LockAppHostEventArg);
	virtual long OnStart();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SyncBackstop();
	virtual long TriggerUnlock();
	virtual long UpdateSharedVisual(void *);
	virtual long add_UserActivity(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::Logon::Controller::ILockInfo *,Windows::Internal::UI::Logon::Controller::LockActivity> *,EventRegistrationToken *);
	virtual long get_Completed(Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING__ *> * *);
	virtual long get_DomainName(HSTRING__ * *);
	virtual long get_FriendlyName(HSTRING__ * *);
	virtual long get_IsLostMode(unsigned char *);
	virtual long get_LostModeMessage(HSTRING__ * *);
	virtual long get_RequireSecureGesture(unsigned char *);
	virtual long get_RequireSecureGestureString(HSTRING__ * *);
	virtual long get_ShowSpeedBump(unsigned char *);
	virtual long get_SpeedBumpString(HSTRING__ * *);
	virtual long get_UserName(HSTRING__ * *);
	virtual long get_VisualOwner(Windows::Internal::UI::Logon::Controller::LockDisplayOwner *);
	virtual long put_Completed(Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING__ *> *);
	virtual long remove_UserActivity(EventRegistrationToken);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void OnCancel();
	virtual void OnClose();
	virtual ~CLockAction();
};

class CLockAppHostDataConsumer
{
	static void _s_OnEvent(void *,unsigned char);
	static void _s_OnSharedVisualUpdate(void *,unsigned char);
public:
	CLockAppHostDataConsumer();
	long Initialize(_GUID,ILockAppHostDataCallback *,ILockAppHostDataSharedVisualCallback *);
	~CLockAppHostDataConsumer();
};

class CLockHost
{
	bool _CheckNotificationPolicy();
	long _EnsureLockAppHost(LockAppType,ILockAppHost * *);
	long _ShutdownLockAppHost();
	static TRIBIT _s_tbOSDeviceIsLockable;
	static bool _s_IsBitlockerEnabledForOSPartition();
	static bool _s_IsEncryptProviderEnabledForOSPartition();
	static long _s_GetSecureGestureString(HSTRING__ * *);
	static long _s_GetSpeedBumpString(HSTRING__ * *);
	static void _s_OnProcessClose(void *,unsigned char);
	void _CleanupLockAppHost(LockAppHostShutdownOptions);
	void _HandleLockAppHostClosed();
public:
	CLockHost();
	static TrustLevel InternalGetTrustLevel();
	static unsigned short const * InternalGetRuntimeClassName();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long LockAsync(Windows::Internal::UI::Logon::Controller::LockOptions,HSTRING__ *,HSTRING__ *,HSTRING__ *,HSTRING__ *,unsigned char *,Windows::Internal::UI::Logon::Controller::IUnlockTrigger * *);
	virtual long OnBioFeedbackUpdate(Windows::Internal::UI::Logon::CredProvData::BioFeedbackState,HSTRING__ *,HSTRING__ *);
	virtual long PreShutdown();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset();
	virtual long ShowWebDialogAsync(HSTRING__ *,Windows::Internal::UI::Logon::Controller::IWebDialogDismissTrigger * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~CLockHost();
};

class CLogonController
{
	Windows::Internal::UI::Logon::Controller::LogonUIInformation _WinRTLogonInformationFromWLUIInformation(_WLUI_INFORMATION);
	Windows::Internal::UI::Logon::Controller::LogonUISecurityOptions _WinRTSecurityOptionsFromWLUISecurity(_WLUI_SECURITY_OPTIONS);
	Windows::Internal::UI::Logon::Controller::LogonUIState _WinRTLogonStateFromWLUIState(_WLUI_STATE);
	bool _ForcePPISharedMode();
	bool _IsPowerTransitionState(Windows::Internal::UI::Logon::Controller::LogonUIState);
	long _BlockOnCompletionAndGetResultsWithAbort<HSTRING__ *,HSTRING__ * *>(Windows::Foundation::IAsyncOperation<HSTRING__ *> *,HSTRING__ * *,int *);
	long _BlockOnCompletionAndGetResultsWithAbort<Windows::Internal::UI::Logon::Controller::LogonUISecurityOptionsResult *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Internal::UI::Logon::Controller::ILogonUISecurityOptionsResult> > >(Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Logon::Controller::LogonUISecurityOptionsResult *> *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Internal::UI::Logon::Controller::ILogonUISecurityOptionsResult> >,int *);
	long _BlockOnCompletionAndGetResultsWithAbort<Windows::Internal::UI::Logon::Controller::MessageDisplayResult *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Internal::UI::Logon::Controller::IMessageDisplayResult> > >(Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Logon::Controller::MessageDisplayResult *> *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Internal::UI::Logon::Controller::IMessageDisplayResult> >,int *);
	long _BlockOnCompletionAndGetResultsWithAbort<Windows::Internal::UI::Logon::Controller::ReportCredentialsData *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Internal::UI::Logon::Controller::IReportCredentialsData> > >(Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Logon::Controller::ReportCredentialsData *> *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Internal::UI::Logon::Controller::IReportCredentialsData> >,int *);
	long _BlockOnCompletionAndGetResultsWithAbort<Windows::Internal::UI::Logon::Controller::RequestCredentialsData *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Internal::UI::Logon::Controller::IRequestCredentialsData> > >(Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Logon::Controller::RequestCredentialsData *> *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Internal::UI::Logon::Controller::IRequestCredentialsData> >,int *);
	long _BlockOnCompletionAndGetResultsWithAbort<Windows::Internal::UI::Logon::Controller::TerminalServiceDisconnectResult *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Internal::UI::Logon::Controller::ITerminalServiceDisconnectResult> > >(Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Logon::Controller::TerminalServiceDisconnectResult *> *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Internal::UI::Logon::Controller::ITerminalServiceDisconnectResult> >,int *);
	long _BlockOnCompletionAndGetResultsWithAbort<unsigned int,unsigned int *>(Windows::Foundation::IAsyncOperation<unsigned int> *,unsigned int *,int *);
	long _CancelFirstSignInAnimationIfRunning();
	long _CheckOperationAborted(IAsyncInfo *,int *);
	long _DelayLock(Windows::Internal::UI::Logon::Controller::LockOptions,bool,bool,unsigned __int64,unsigned short const *,unsigned short const *,int *);
	long _EnsureBioFeedbackUX(Windows::Internal::UI::Logon::Controller::IBioFeedbackUX * *);
	long _EnsureBlockedShutdownUX(Windows::Internal::UI::Logon::Controller::IBlockedShutdownResolverUX * *);
	long _EnsureFSIA();
	long _EnsureLockHost();
	long _EnsureLogonUX(Windows::Internal::UI::Logon::Controller::ILogonUX * *);
	long _EnsureSoundPlayer();
	long _EnsureSystemCredentialManager(Windows::Internal::SystemManagedAccount::Logon::ISystemManagedAccountCredential * *);
	long _EnsureTSPickerUX();
	long _GetCandidateAccountCredential(_CRED_PROV_CREDENTIAL *);
	long _GetWindowContainer(IInspectable * *);
	long _HideBlockedShutdownUI();
	long _HideLogonUI();
	long _Initialize(unsigned long,unsigned long,unsigned long,unsigned long);
	long _IsOOBEAutoLogon(bool *);
	long _IsSIDSystemManagedAccount(HSTRING__ *,bool *);
	long _IsSystemManagedAccountLoggedIntoHomeScenario(bool *);
	long _IsSystemManagedAutologonSet(bool *);
	long _Lock(Windows::Internal::UI::Logon::Controller::LogonUIRequestReason,Windows::Internal::UI::Logon::Controller::LockOptions,bool,bool,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,bool *);
	long _ResultMaskFromSecurityOptionsResult(Windows::Internal::UI::Logon::Controller::ILogonUISecurityOptionsResult *,unsigned int *);
	long _SetLockScreenActive(bool,bool,bool);
	long _SetLockScreenActiveLockHeld(bool,bool,bool);
	long _Teardown();
	long _TransformCredentialReportResult(Windows::Internal::UI::Logon::Controller::IReportCredentialsData *,unsigned short * *,_WLUI_CREDPROV_RESPONSE *);
	long _TransformCredentialRequestResult(Windows::Internal::UI::Logon::Controller::IRequestCredentialsData *,_CRED_PROV_CREDENTIAL *,unsigned int *,unsigned int *,unsigned short * *,unsigned short * *);
	long _TransformCredentialSerialization(ICredProviderCredentialSerialization *,_CRED_PROV_CREDENTIAL *,unsigned short * *);
	long _TransitionToRunning(unsigned long,IAsyncInfo *,int *);
	long _TransitionToScheduling(unsigned long *);
	unsigned int _ResultMaskFromShutdownChoice(Windows::Internal::UI::Logon::Controller::LogonUIShutdownChoice);
	virtual ~CLogonController();
	void _CancelPowerTransition();
	void _ShowCursor(bool);
	void _TransitionToNone(unsigned long);
	void _WriteReportResult(_WLUI_REQUEST_REASON,long,unsigned short const *,unsigned short const *,unsigned short const *);
public:
	CLogonController();
	virtual long Abort();
	virtual long ClearUIState();
	virtual long DelayLockSecure(_WLUI_REQUEST_FLAGS,unsigned __int64,unsigned short const *,int *);
	virtual long DelayLocked(_WLUI_REQUEST_FLAGS,unsigned short const *,unsigned __int64,unsigned short const *,int *);
	virtual long DisplayLockSecure(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,_WLUI_REQUEST_FLAGS,int *);
	virtual long DisplayLocked(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,_WLUI_REQUEST_FLAGS);
	virtual long DisplayMessage(unsigned short const *,unsigned short const *,unsigned int,unsigned int *,int *);
	virtual long DisplayRequestCredentialsError(long,long,unsigned short const *,unsigned short const *,unsigned int,unsigned int *,int *);
	virtual long DisplaySecurityOptions(_WLUI_SECURITY_OPTIONS *,unsigned int *,int *);
	virtual long DisplaySequentialLogonPrompt(unsigned short const *,unsigned int,unsigned int *,int *);
	virtual long DisplayStatus(unsigned short const *,_WLUI_STATE,int *);
	virtual long DisplayStatusOnCredentialPage(_WLUI_REQUEST_REASON,_WLUI_REQUEST_FLAGS,unsigned short const *,unsigned short const *,_WLUI_STATE,int *);
	virtual long DisplayTSDisconnectOptions(unsigned long,unsigned long *,unsigned long,unsigned long *,unsigned long *,int *);
	virtual long DisplayTSDisconnectUI(unsigned long,unsigned long *,int,unsigned int *,int *,int *);
	virtual long DisplayTSReconnectUI(unsigned long,unsigned long *,unsigned int *,int *);
	virtual long DisplayWelcome(_WLUI_REQUEST_FLAGS,unsigned short const *,int *,int *);
	virtual long DoModal(unsigned long,unsigned long,unsigned long,unsigned long);
	virtual long FinishOperation(_WLUI_INFORMATION,unsigned long,int *);
	virtual long GetShutdownResolverInfo(int *,int *,unsigned long *);
	virtual long InformLogonUI(_WLUI_INFORMATION,_WLUI_STATE,_WLUI_REASON);
	virtual long Invoke(Windows::Internal::UI::Logon::Controller::IBlockedShutdownResolverUX *,Windows::Internal::UI::Logon::Controller::BlockedShutdownResolution);
	virtual long Invoke(Windows::Internal::UI::Logon::Controller::ILockInfo *,Windows::Internal::UI::Logon::Controller::LockActivity);
	virtual long Invoke(Windows::Internal::UI::Logon::Controller::IUserSettingManager *,IInspectable *);
	virtual long NotifyIsReadyForDesktopSwitch();
	virtual long OnBioFeedbackUpdate(Windows::Internal::UI::Logon::CredProvData::BioFeedbackState,HSTRING__ *,HSTRING__ *);
	virtual long OnReturnToLockRequested();
	virtual long OnShutdownBlockingAppAdded(tagSHUTDOWN_BLOCK_DESCRIPTION *,bool);
	virtual long OnShutdownBlockingAppRemoved(unsigned int);
	virtual long PrepareWebDialog(unsigned short const *);
	virtual long PromptForCredentials(unsigned long,_CREDUI_CONTEXT,CREDUI_INFO_INTERNAL_CONTEXT,unsigned long,unsigned long,unsigned char *,unsigned long,int,unsigned long,unsigned char * *,unsigned long *,int *,unsigned long *,unsigned long *);
	virtual long ReleaseContext();
	virtual long ReportResult(_WLUI_REQUEST_REASON,long,long,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short * *,_WLUI_CREDPROV_RESPONSE *,int *);
	virtual long RequestCredentials(_WLUI_REQUEST_REASON,_WLUI_REQUEST_FLAGS,unsigned short const *,_CRED_PROV_CREDENTIAL *,unsigned int *,unsigned short * *,unsigned short * *,int *);
	virtual long Shutdown();
	virtual long WaitForLockScreenDismiss(int *,int *);
	virtual long WaitForWebDialogComplete(int *);
	virtual long get_CurrentLogonUIState(Windows::Internal::UI::Logon::Controller::LogonUIState *);
};

class CLogonDwmWnfDumpRequestListener
{
protected:
	virtual void Callback(DwmWnfDiagnosticEvent::DwmDumpRequestPayload const &);
};

struct CMessageDisplayResult
{
	CMessageDisplayResult();
	static TrustLevel InternalGetTrustLevel();
	static unsigned short const * InternalGetRuntimeClassName();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_ResultCode(unsigned int *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CMessageDisplayResultFactory
{
	CMessageDisplayResultFactory();
	virtual long ActivateInstance(IInspectable * *);
	virtual long CreateMessageDisplayResult(unsigned int,Windows::Internal::UI::Logon::Controller::IMessageDisplayResult * *);
};

class CProcessStateManager
{
	Windows::Internal::UI::Logon::Controller::LogonErrorRedirectorResponse _WinRTRedirectorResponseFromClassicCom(_LOGON_ERROR_REDIRECTOR_RESPONSE);
	bool _GetUserTypeWithSid(HSTRING__ *,Windows::Internal::UI::Logon::CredProvData::UserAccountKind *);
	bool _QueryEmbeddedAutoLogonPolicy();
	bool _UpdateLockScreenStateLockHeld(bool,Windows::Internal::UI::Logon::Controller::LockActivity);
	long _GetColorDataForUser(HSTRING__ *,CUserColorData * *);
	long _InitializeDisplayState();
	long _IsUserAssignedAccess(bool *);
	long _OnCredentialResetActivityChange(unsigned char);
	long _OnReturnToLockRequested();
	long _RunDelayedInit();
	long _SetUserSid(HSTRING__ *,bool);
	long _UpdateDisplayState(_MONITOR_DISPLAY_STATE);
	void _ApplyDefaultColors(bool);
	void _InitializeColors();
	void _InitializeEmbeddedPolicy();
	void _InitializeOobeZDPRebootRequired();
	void _InitializeSessionData();
	void _InitializeUserSid();
	void _LoadAccessibilitySettingsForUser(HSTRING__ *);
	void _RefreshActiveUserSettings();
	void _ResetUserSwitchState();
	void _SetPerUserColors();
	void _SetPerUserColorsForHighContrast();
	void _UpdatePerUserHighContrastSetting(bool);
	void _WriteColorKeysIfNecessary(unsigned short const *);
protected:
	virtual ~CProcessStateManager();
public:
	CProcessStateManager();
	bool IsDelayLocked();
	bool IsFirstSignInAnimationDisabled();
	bool IsHighContrastOn();
	bool IsLoggedOnUserSidPresent();
	bool ShouldHideAutoLogonUI(CProcessStateManager::CacheBehavior);
	long EnsureAutoLaunchProviderFromLockScreenDismissFlagClear();
	long RuntimeClassInitialize(IAutoLogonManager *,IBlockedShutdownDataConsumer *,IReturnToLockListener *);
	long SetCurrentLogonUIRequestReason(Windows::Internal::UI::Logon::Controller::LogonUIRequestReason);
	long SetIsAcceptingCreds(bool);
	long SetIsDelayLocked(bool);
	long SetIsFirstLogonAfterSignOut(unsigned char);
	long SetIsFullScreenMessageActive(bool);
	long SetIsSessionTearingDown(bool);
	long SetWinLogonReason(_WLUI_REASON);
	long UpdateLockScreenState(bool,Windows::Internal::UI::Logon::Controller::LockActivity);
	long UpdateLockScreenState(bool,bool,Windows::Internal::UI::Logon::Controller::LockActivity);
	unsigned short GetSessionLangID();
	virtual long CancelUserSwitch();
	virtual long GetUserAccountKind(HSTRING__ *,Windows::Internal::UI::Logon::CredProvData::UserAccountKind *);
	virtual long IsUserSwitchingAllowed(Windows::Internal::UI::Logon::Controller::LogonUIRequestReason,unsigned char *);
	virtual long OnBeginPainting();
	virtual long OnColorSchemeChange();
	virtual long OnDesktopSwitch();
	virtual long OnDisplayStateChange(_MONITOR_DISPLAY_STATE);
	virtual long OnHighContrastChange();
	virtual long OnLidStateChange(bool);
	virtual long OnLowPowerStateChange(bool);
	virtual long OnSessionDisconnected();
	virtual long OnShutdownBlockingAppAdded(tagSHUTDOWN_BLOCK_DESCRIPTION *,bool);
	virtual long OnShutdownBlockingAppRemoved(unsigned int);
	virtual long OnSuspendResume(bool);
	virtual long OnUserPresenceChange(_USER_ACTIVITY_PRESENCE);
	virtual long RedirectLogonError(long,long,HSTRING__ *,HSTRING__ *,unsigned int,unsigned int *,Windows::Internal::UI::Logon::Controller::LogonErrorRedirectorResponse *);
	virtual long RedirectMessage(HSTRING__ *,HSTRING__ *,unsigned int,unsigned int *,Windows::Internal::UI::Logon::Controller::LogonErrorRedirectorResponse *);
	virtual long RedirectStatus(HSTRING__ *,Windows::Internal::UI::Logon::Controller::LogonErrorRedirectorResponse *);
	virtual long add_CaretWidthChanged(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::Logon::Controller::IUserSettingManager *,IInspectable *> *,EventRegistrationToken *);
	virtual long add_ColorSetChanged(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::Logon::Controller::IUserSettingManager *,IInspectable *> *,EventRegistrationToken *);
	virtual long add_DisplayStateChanged(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::Logon::CredProvData::IDisplayStateProvider *,Windows::Internal::UI::Logon::CredProvData::DisplayStateFlags> *,EventRegistrationToken *);
	virtual long add_HighContrastChanged(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::Logon::Controller::IUserSettingManager *,IInspectable *> *,EventRegistrationToken *);
	virtual long add_IsTransparencyEnabledChanged(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::Logon::Controller::IUserSettingManager *,IInspectable *> *,EventRegistrationToken *);
	virtual long add_LowPowerStateChanged(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::Logon::Controller::IUserSettingManager *,IInspectable *> *,EventRegistrationToken *);
	virtual long add_SessionDisconnected(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::Logon::Controller::IUserSettingManager *,IInspectable *> *,EventRegistrationToken *);
	virtual long add_SlideToShutdownDetected(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::Logon::Controller::IUserSettingManager *,IInspectable *> *,EventRegistrationToken *);
	virtual long add_TextScaleChanged(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::Logon::Controller::IUserSettingManager *,IInspectable *> *,EventRegistrationToken *);
	virtual long get_BackgroundColor(Windows::UI::Color *);
	virtual long get_CaretWidth(int *);
	virtual long get_CurrentInputProfile(HSTRING__ * *);
	virtual long get_CurrentLogonUIRequestReason(unsigned long *);
	virtual long get_DisplayState(Windows::Internal::UI::Logon::CredProvData::DisplayStateFlags *);
	virtual long get_EmbeddedSKUPolicy(Windows::Internal::UI::Logon::Controller::EmbeddedSKUPolicyFlags *);
	virtual long get_ForegroundColor(Windows::UI::Color *);
	virtual long get_IsAudioHIDEnabled(unsigned char *);
	virtual long get_IsFirstBoot(unsigned char *);
	virtual long get_IsFirstLogonAfterSignOutOrSwitchUser(unsigned char *);
	virtual long get_IsLockScreenAllowed(unsigned char *);
	virtual long get_IsLoggedOnUserSidPresent(unsigned char *);
	virtual long get_IsLowMemoryDevice(unsigned char *);
	virtual long get_IsLowPowerState(unsigned char *);
	virtual long get_IsOobeZDPRebootRequired(unsigned char *);
	virtual long get_IsRedirectMode(unsigned char *);
	virtual long get_IsSwitchUser(unsigned char *);
	virtual long get_IsTransparencyEnabled(unsigned char *);
	virtual long get_IsUserAssignedAccess(unsigned char *);
	virtual long get_LangID(unsigned short *);
	virtual long get_LastLoggedOnUserSid(HSTRING__ * *);
	virtual long get_ShouldAnimateLogonBackgroundImage(unsigned char *);
	virtual long get_ShouldLaunchFirstLogonAnimation(unsigned char *);
	virtual long get_ShouldLaunchFirstSignInAnimationInUserSession(unsigned char *);
	virtual long get_ShowAccentColorInsteadOfLogonBackgroundImage(unsigned char *);
	virtual long get_TelemetryDataProvider(Windows::Internal::UI::Logon::CredProvData::ITelemetryDataProvider * *);
	virtual long get_TextScale(int *);
	virtual long get_UserSid(HSTRING__ * *);
	virtual long get_UserTheme(Windows::Internal::UI::Logon::Controller::UserTheme *);
	virtual long put_IsLockScreenAllowed(unsigned char);
	virtual long put_ShouldLaunchFirstSignInAnimationInUserSession(unsigned char);
	virtual long put_UserSid(HSTRING__ *);
	virtual long remove_CaretWidthChanged(EventRegistrationToken);
	virtual long remove_ColorSetChanged(EventRegistrationToken);
	virtual long remove_DisplayStateChanged(EventRegistrationToken);
	virtual long remove_HighContrastChanged(EventRegistrationToken);
	virtual long remove_IsTransparencyEnabledChanged(EventRegistrationToken);
	virtual long remove_LowPowerStateChanged(EventRegistrationToken);
	virtual long remove_SessionDisconnected(EventRegistrationToken);
	virtual long remove_SlideToShutdownDetected(EventRegistrationToken);
	virtual long remove_TextScaleChanged(EventRegistrationToken);
	void EnsureInputProfile();
	void RecordSuccessfulLogon(unsigned short const *,unsigned short const *,unsigned short const *);
	void RecordSuccessfulUnlock(unsigned short const *,unsigned short const *,unsigned short const *);
	void ResetIsBoot();
	void ResolveBlockedShutdown(Windows::Internal::UI::Logon::Controller::BlockedShutdownResolution);
	void SetUserSelectionRequired();
	void SetUserSwitch(bool);
	void Shutdown();
};

struct CRPCTimeout
{
	CRPCTimeout(unsigned long);
};

struct CRefCountedObject<Windows::Internal::String>
{
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CReportCredentialsData
{
	CReportCredentialsData();
	static TrustLevel InternalGetTrustLevel();
	static unsigned short const * InternalGetRuntimeClassName();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Message(HSTRING__ * *);
	virtual long get_Response(Windows::Internal::UI::Logon::Controller::LogonUICredProvResponse *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~CReportCredentialsData();
};

struct CReportCredentialsDataFactory
{
	CReportCredentialsDataFactory();
	virtual long ActivateInstance(IInspectable * *);
	virtual long CreateReportCredentialsData(Windows::Internal::UI::Logon::Controller::LogonUICredProvResponse,HSTRING__ *,Windows::Internal::UI::Logon::Controller::IReportCredentialsData * *);
};

struct CRequestCredentialData
{
	CRequestCredentialData();
	static TrustLevel InternalGetTrustLevel();
	static unsigned short const * InternalGetRuntimeClassName();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Credential(Windows::Internal::UI::Logon::CredProvData::ICredentialSerialization * *);
	virtual long get_ShutdownChoice(Windows::Internal::UI::Logon::Controller::LogonUIShutdownChoice *);
	virtual long get_WebDialogUri(HSTRING__ * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~CRequestCredentialData();
};

struct CRequestCredentialsDataFactory
{
	CRequestCredentialsDataFactory();
	virtual long ActivateInstance(IInspectable * *);
	virtual long CreateRequestCredentialsData(Windows::Internal::UI::Logon::CredProvData::ICredentialSerialization *,Windows::Internal::UI::Logon::Controller::LogonUIShutdownChoice,HSTRING__ *,Windows::Internal::UI::Logon::Controller::IRequestCredentialsData * *);
};

struct CSASHardwareDetection
{
	static CSASHardwareDetection::HardwareButtonCombinationAsSASGesture s_GetHardwareButtonAvailability();
};

struct CSecureLockAction
{
	CSecureLockAction();
	long RuntimeClassInitialize(HSTRING__ *,HSTRING__ *,HSTRING__ *,LockActionArgs *);
	virtual long CheckCompletion();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetResults(HSTRING__ * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long OnLockActivity(Windows::Internal::UI::Logon::Controller::LockActivity);
	virtual long OnStart();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SyncBackstop();
	virtual long TriggerUnlock();
	virtual long add_UserActivity(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::Logon::Controller::ILockInfo *,Windows::Internal::UI::Logon::Controller::LockActivity> *,EventRegistrationToken *);
	virtual long get_Completed(Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING__ *> * *);
	virtual long get_DomainName(HSTRING__ * *);
	virtual long get_FriendlyName(HSTRING__ * *);
	virtual long get_IsLostMode(unsigned char *);
	virtual long get_LostModeMessage(HSTRING__ * *);
	virtual long get_RequireSecureGesture(unsigned char *);
	virtual long get_RequireSecureGestureString(HSTRING__ * *);
	virtual long get_ShowSpeedBump(unsigned char *);
	virtual long get_SpeedBumpString(HSTRING__ * *);
	virtual long get_UserName(HSTRING__ * *);
	virtual long get_VisualOwner(Windows::Internal::UI::Logon::Controller::LockDisplayOwner *);
	virtual long put_Completed(Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING__ *> *);
	virtual long remove_UserActivity(EventRegistrationToken);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void OnCancel();
	virtual void OnClose();
	virtual ~CSecureLockAction();
};

class CServer
{
	static Microsoft::WRL::WeakRef s_wpSingleton;
	static unsigned long s_dwTestClientProcessId;
	static unsigned long s_dwWnfState0;
	static unsigned long s_dwWnfState1;
public:
	CServer();
	long Start(IWinLogonRPC *,unsigned long,unsigned long,unsigned long);
	static long RPCSingleton(unsigned char,IWinLogonRPC * *);
	virtual long GetRPCCallback(unsigned char,IInspectable * *);
	void Stop();
};

struct CShutdownBlockingApp
{
	CShutdownBlockingApp();
	long RuntimeClassInitialize(tagSHUTDOWN_BLOCK_DESCRIPTION *,unsigned char,DEVICE_SCALE_FACTOR);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_BlockReason(HSTRING__ * *);
	virtual long get_Caption(HSTRING__ * *);
	virtual long get_Icon(Windows::Storage::Streams::IRandomAccessStream * *);
	virtual long get_Id(unsigned int *);
	virtual long get_IsBlocking(unsigned char *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~CShutdownBlockingApp();
};

class CSortOrder
{
	CListEntry<SortOrderItem *> * FindAssemblySortOrder(InputContainer *,CList<SortOrderItem *> *);
	static int CompareSortOrder(void *,void *);
public:
	void AddAssemblyItem(InputContainer *);
	void AddLanguage(unsigned short);
	void Clear();
	void RemoveAssemblyItem(InputContainer *);
	~CSortOrder();
};

class CTCoAllocPolicy
{
	static unsigned __int64 _CoTaskMemSize(void *);
public:
	static long Alloc(void *,unsigned long,unsigned __int64,void * *);
	static long Realloc(void *,unsigned long,void *,unsigned __int64,void * *);
};

struct CTSimpleArray<Microsoft::WRL::ComPtr<CUserColorData>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CUserColorData> >,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CUserColorData> >,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CUserColorData> > >
{
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
};

struct CTSimpleArray<Microsoft::WRL::ComPtr<IPropertyStore>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPropertyStore> >,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPropertyStore> >,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPropertyStore> > >
{
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
	void RemoveAll();
};

struct CTSimpleArray<Microsoft::WRL::ComPtr<Windows::Internal::UI::Logon::CredProvData::IDispatchEvent>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<Windows::Internal::UI::Logon::CredProvData::IDispatchEvent> >,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<Windows::Internal::UI::Logon::CredProvData::IDispatchEvent> >,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<Windows::Internal::UI::Logon::CredProvData::IDispatchEvent> > >
{
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
};

struct CUserColorData
{
	CUserColorData();
	IMMERSIVE_COLOR_PREFERENCE GetColorPreference();
	bool IsHighContrast();
	int ApplyColorsToSystem();
	long RuntimeClassInitialize(HKEY__ * const);
	long RuntimeClassInitialize(HSTRING__ *);
	void UpdateHighContrastState(bool);
};

class CUserSettingChangeMonitor
{
	static __int64 s_WndProc(HWND__ *,unsigned int,unsigned __int64,__int64);
	static unsigned long s_PowerSuspendResumeCallback(void *,unsigned long,void *);
	void _LogBSDRAppAddedTelemetry(tagSHUTDOWN_BLOCK_DESCRIPTION *,bool);
	void _LogBSDRAppRemovedTelemetry(unsigned int);
	void _MonitorThreadProc();
	void _OnBSDRMessage(unsigned __int64,__int64);
	void _OnDesktopSwitch();
	void _OnPowerMessage(unsigned __int64,__int64);
	void _OnSettingChange(unsigned __int64,__int64);
	void _OnSuspendResume(unsigned long);
public:
	CUserSettingChangeMonitor();
	long RuntimeClassInitialize();
	virtual ~CUserSettingChangeMonitor();
	void ResolveBlockedShutdown(Windows::Internal::UI::Logon::Controller::BlockedShutdownResolution);
	void StartListening(IUserSettingChangeCallback *,HSTRING__ *);
	void StopListening();
};

struct CVoidStructArray
{
	int Insert(int,int);
	void * Append(int);
};

class CWebDialogAction
{
	long _CacheLockAppHostInstance(ILockAppHost *);
	long _EnsureDevice(IDCompositionDesktopDevicePartner * *);
	long _EnsureLockAppHost(ILockAppHost * *);
	long _InitializeDCompDeviceSupport(IDXGIDevice1 * *);
	long _SyncBackstopVisualToLogonVisual();
	void _CleanupCachedLockAppHost();
	void _CleanupSharedVisual();
	void _CleanupThumbnail();
public:
	CWebDialogAction();
	long RuntimeClassInitialize(HSTRING__ *,ILockAppHost *,void *);
	virtual long DismissWebDialog();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetResults();
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long HandleEvent(LockAppHostEvent,LockAppHostEventArg);
	virtual long OnStart();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SyncBackstop();
	virtual long UpdateSharedVisual(void *);
	virtual long get_Completed(Windows::Foundation::IAsyncActionCompletedHandler * *);
	virtual long put_Completed(Windows::Foundation::IAsyncActionCompletedHandler *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void OnCancel();
	virtual void OnClose();
	virtual ~CWebDialogAction();
};

struct CandidateAccountManagerPolicy
{
	static int IsAutoAadConnectEnabled();
};

struct CandidateAccountManagerPolicyTraceProvider
{
	static void PolicyEnabled<unsigned short const (&)[15]>(unsigned short const (&)[15]);
};

namespace CredProvPolicy
{
	bool IsPrimaryUserForEduEnvironment();
	bool IsPrimaryUserForEduEnvironmentWithoutPrimaryUserSet();
	bool IsPrimaryUserSet();
};

namespace CredProvUtils
{
	long GetLogonUIKeyPath(unsigned short * *);
};

struct DatVPrepTelemetry
{
	class DoDatVPrepRS
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~DoDatVPrepRS();
	};

	static wil::ActivityThreadWatcher WatchCurrentThread(char const *);
};

struct DefaultSelector
{
	DefaultSelector();
	long RuntimeClassInitialize(Windows::Internal::UI::Logon::Controller::IUserSettingManager *,Windows::Internal::UI::Logon::Controller::LogonUIRequestReason);
	virtual long AllowAutoSubmitOnSelection(Windows::Internal::UI::Logon::CredProvData::IUser *,unsigned char *);
	virtual long get_DefaultUserSid(HSTRING__ * *);
	virtual long get_ExcludedProviders(Windows::Foundation::Collections::IVectorView<_GUID> * *);
	virtual long get_OtherUserPreferredProviders(Windows::Foundation::Collections::IVectorView<_GUID> * *);
	virtual long get_PreferredProviders(Windows::Foundation::Collections::IVectorView<_GUID> * *);
	virtual long get_UseLastLoggedOnProvider(unsigned char *);
	virtual ~DefaultSelector();
};

namespace DwmWnfDiagnosticEvent
{
	struct CDwmWnfDumpRequestListener
	{
		CDwmWnfDumpRequestListener();
	};

	namespace Details
	{
		long GetCurrentProcessVersionInfo(unsigned short *,unsigned int);
	};

	long AddCurrentProcessToWerReport(_GUID const &,_WER_DUMP_TYPE,DwmWnfDiagnosticEvent::DwmWnfDiagnosticEventDumpMetadata const &);
};

struct EventDispatcher
{
	EventDispatcher();
	virtual long DispatchEvent(Windows::Internal::UI::Logon::CredProvData::IDispatchEvent *);
	void Process();
	void StopDispatching(bool);
};

struct IAutoLogonManager
{
	IAutoLogonManager();
};

struct IBlockedShutdownDataConsumer
{
	IBlockedShutdownDataConsumer();
};

struct ICredProviderCredentialSerialization
{
	ICredProviderCredentialSerialization();
};

struct IInspectable
{
	IInspectable();
};

struct ILogonUI
{
	ILogonUI();
};

struct IReturnToLockListener
{
	IReturnToLockListener();
};

struct IUnknown
{
	IUnknown();
};

struct IUserSettingChangeCallback
{
	IUserSettingChangeCallback();
};

struct IWeakReferenceSource
{
	IWeakReferenceSource();
};

struct IWinLogonRPC
{
	IWinLogonRPC();
};

struct InputTraceLoggingTelemetry
{
	class ActivateInputProfile
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned short const *);
		~ActivateInputProfile();
	};

	class InstallLayoutOrTipPrivate
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned short const *,unsigned long);
		~InstallLayoutOrTipPrivate();
	};

	class InstallLayoutOrTipPrivateWorker
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~InstallLayoutOrTipPrivateWorker();
	};

	static void PreloadRegKeyChangedEvent(unsigned short const *,unsigned short const *,unsigned short const *);
};

struct InstallLayoutOrTipPrivateHelpers
{
	static InputContainer * FindImeInList(CInputList &,unsigned short,unsigned short const *,unsigned short const *);
	static bool IsKeyboardHiddenDummyLayout(unsigned short,unsigned long,CInputDllRegKey &);
	static bool IsTfCatTip(unsigned short *);
	static bool IsValidKeyboard(unsigned long,CInputDllRegKey &);
	static bool OpenRegistryKeys(CInputDllRegKey &,CInputDllRegKey &,CInputDllRegKey &,CInputDllRegKey &,CInputDllRegKey &,CInputDllRegKey &,CInputDllRegKey &,CInputDllRegKey &,CInputDllRegKey &,bool);
	static bool OpenRegistryKeysForEnum(CInputDllRegKey &,CInputDllRegKey &,CInputDllRegKey &,CInputDllRegKey &,CInputDllRegKey &,CInputDllRegKey &);
	static void CalculateKeyboardSubstituteLayoutForEntry(unsigned long,InputContainer *,CInputList &);
	static void DisableIme(unsigned short,unsigned short *,unsigned short *,CInputList &,CInputList &,bool);
	static void DisableKeyboard(unsigned short,unsigned long,CInputList &,bool);
	static void EnableIme(unsigned short,unsigned short *,unsigned short *,CInputList &,CInputList &,bool,CInputDllRegKey &,CInputDllRegKey &,CInputDllRegKey &);
	static void EnableKeyboard(unsigned short,unsigned long,bool,CInputList &,bool,CInputDllRegKey &,CInputDllRegKey &);
	static void EnumCtfRegistry(CInputList &,CInputDllRegKey &,bool,bool,bool);
	static void ReadKeyboardRegistry(CInputList &,CInputDllRegKey &,CInputDllRegKey &,CInputDllRegKey &,CInputDllRegKey &);
	static void ReadSortOrder(CInputDllRegKey &,CInputDllRegKey &,CSortOrder &);
	static void SetDefaultKeyboard(HKL__ *);
	static void UnloadKeyboards(CInputList &);
	static void ValidateImeListAndAddMissingEntries(CInputList &,CInputDllRegKey &);
	static void WriteImeRegistry(CInputList &,CInputDllRegKey &);
	static void WriteKeyboardRegistry(CInputList &,bool,CInputDllRegKey &,CInputDllRegKey &,CInputDllRegKey &);
	static void WriteKeyboardToRegistry(InputContainer *,unsigned long,CInputDllRegKey &,CInputDllRegKey &);
	static void WriteSortOrder(CInputDllRegKey &,CInputDllRegKey &,CSortOrder &);
};

struct LockActionArgs
{
	~LockActionArgs();
};

namespace LockAppHelpers
{
	bool DoesLockScreenInputDesktopSupportUwpLockApp(unsigned long,unsigned short *);
};

class LockAppHostData
{
	static long _GetObjectName(unsigned short const *,_GUID const &,unsigned short *,unsigned __int64);
};

struct LockScreenCpuBooster
{
	~LockScreenCpuBooster();
};

struct LogonControllerLogger
{
	static _tlgProvider_t const * Provider();
};

class LogonControllerTelemetry
{
	class CLanguageProfileHelper_SetPerUserInputMethods_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLanguageProfileHelper_SetPerUserInputMethods_Activity();
	};

	class CLockAction_HandleEvent
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned int,unsigned int);
		~CLockAction_HandleEvent();
	};

	class CLockAction_OnStart_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLockAction_OnStart_Activity();
	};

	class CLockAction_RuntimeClassInitialize_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLockAction_RuntimeClassInitialize_Activity();
	};

	class CLockAction_SyncBackstop_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLockAction_SyncBackstop_Activity();
	};

	class CLockAction_TriggerUnlock_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLockAction_TriggerUnlock_Activity();
	};

	class CLockAction__CacheLockAppHostInstance_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLockAction__CacheLockAppHostInstance_Activity();
	};

	class CLockAction__CleanupLockAppShownWatchdogTimer_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLockAction__CleanupLockAppShownWatchdogTimer_Activity();
	};

	class CLockAction__CreateGDIRenderedDCompSurface_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLockAction__CreateGDIRenderedDCompSurface_Activity();
	};

	class CLockAction__CreateLockAppShownWatchdogTimer_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLockAction__CreateLockAppShownWatchdogTimer_Activity();
	};

	class CLockAction__CreateTransitionFromLockAppWatchdog_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLockAction__CreateTransitionFromLockAppWatchdog_Activity();
	};

	class CLockAction__CreateTransitionFromLockAppWnfSubscription_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLockAction__CreateTransitionFromLockAppWnfSubscription_Activity();
	};

	class CLockAction__EnsureDevice_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLockAction__EnsureDevice_Activity();
	};

	class CLockAction__EnsureLockAppHost_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLockAction__EnsureLockAppHost_Activity();
	};

	class CLockAction__InitializeDCompDeviceSupport_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLockAction__InitializeDCompDeviceSupport_Activity();
	};

	class CLockAction__OnLockAppShownWatchdogTimerExpired_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLockAction__OnLockAppShownWatchdogTimerExpired_Activity();
	};

	class CLockAction__OnUnlockIfLockAppDidntShowWatchdogTimerExpired_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLockAction__OnUnlockIfLockAppDidntShowWatchdogTimerExpired_Activity();
	};

	class CLockAction__SuspendOrResumeLockAppShownWatchdogTimer_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(bool,bool,bool,bool,bool);
		~CLockAction__SuspendOrResumeLockAppShownWatchdogTimer_Activity();
	};

	class CLockAction__SyncBackstopVisualToLogonVisual_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLockAction__SyncBackstopVisualToLogonVisual_Activity();
	};

	class CLockAction__s_LockAppShownWatchdogTimerExpired_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLockAction__s_LockAppShownWatchdogTimerExpired_Activity();
	};

	class CLockAction__s_PowerSettingDisplayNotificationCallback_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLockAction__s_PowerSettingDisplayNotificationCallback_Activity();
	};

	class CLockAction__s_TransitionFromLockAppWatchdogTimerExpired_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLockAction__s_TransitionFromLockAppWatchdogTimerExpired_Activity();
	};

	class CLockHost_LockAsync_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLockHost_LockAsync_Activity();
	};

	class CLockHost_OnBioFeedbackUpdate_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLockHost_OnBioFeedbackUpdate_Activity();
	};

	class CLockHost_PreShutdown_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLockHost_PreShutdown_Activity();
	};

	class CLockHost_Reset_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLockHost_Reset_Activity();
	};

	class CLockHost_ShowWebDialogAsync_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLockHost_ShowWebDialogAsync_Activity();
	};

	class CLockHost__EnsureLockAppHost_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLockHost__EnsureLockAppHost_Activity();
	};

	class CLockHost__ShutdownLockAppHost_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLockHost__ShutdownLockAppHost_Activity();
	};

	class CLogonController_Abort_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
	};

	class CLogonController_DelayLockSecure_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLogonController_DelayLockSecure_Activity();
	};

	class CLogonController_DelayLocked_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLogonController_DelayLocked_Activity();
	};

	class CLogonController_DisplayLockSecure_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLogonController_DisplayLockSecure_Activity();
	};

	class CLogonController_DisplayLocked_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLogonController_DisplayLocked_Activity();
	};

	class CLogonController_DisplayMessage_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLogonController_DisplayMessage_Activity();
	};

	class CLogonController_DisplayRequestCredentialsError_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLogonController_DisplayRequestCredentialsError_Activity();
	};

	class CLogonController_DisplaySecurityOptions_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLogonController_DisplaySecurityOptions_Activity();
	};

	class CLogonController_DisplaySequentialLogonPrompt_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLogonController_DisplaySequentialLogonPrompt_Activity();
	};

	class CLogonController_DisplayStatusOnCredentialPage_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLogonController_DisplayStatusOnCredentialPage_Activity();
	};

	class CLogonController_DisplayStatus_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
	};

	class CLogonController_DisplayTSDisconnectOptions_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLogonController_DisplayTSDisconnectOptions_Activity();
	};

	class CLogonController_DisplayTSDisconnectUI_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLogonController_DisplayTSDisconnectUI_Activity();
	};

	class CLogonController_DisplayTSReconnectUI_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLogonController_DisplayTSReconnectUI_Activity();
	};

	class CLogonController_DisplayWelcome_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLogonController_DisplayWelcome_Activity();
	};

	class CLogonController_DoModal_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
	};

	class CLogonController_FinishOperation_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLogonController_FinishOperation_Activity();
	};

	class CLogonController_GetShutdownResolverInfo_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLogonController_GetShutdownResolverInfo_Activity();
	};

	class CLogonController_InformLogonUI_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLogonController_InformLogonUI_Activity();
	};

	class CLogonController_NotifyIsReadyForDesktopSwitch_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLogonController_NotifyIsReadyForDesktopSwitch_Activity();
	};

	class CLogonController_PrepareWebDialog_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLogonController_PrepareWebDialog_Activity();
	};

	class CLogonController_PromptForCredentials_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLogonController_PromptForCredentials_Activity();
	};

	class CLogonController_ReleaseContext_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLogonController_ReleaseContext_Activity();
	};

	class CLogonController_ReportResult_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLogonController_ReportResult_Activity();
	};

	class CLogonController_RequestCredentials_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLogonController_RequestCredentials_Activity();
	};

	class CLogonController_Shutdown_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLogonController_Shutdown_Activity();
	};

	class CLogonController_WaitForLockScreenDismiss_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLogonController_WaitForLockScreenDismiss_Activity();
	};

	class CLogonController_WaitForWebDialogComplete_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CLogonController_WaitForWebDialogComplete_Activity();
	};

	class CWebDialogAction_DismissWebDialog_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CWebDialogAction_DismissWebDialog_Activity();
	};

	class CWebDialogAction_HandleEvent
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned int,unsigned int);
		~CWebDialogAction_HandleEvent();
	};

	class CWebDialogAction_OnStart_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CWebDialogAction_OnStart_Activity();
	};

	class CWebDialogAction_RuntimeClassInitialize_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CWebDialogAction_RuntimeClassInitialize_Activity();
	};

	class CWebDialogAction_SyncBackstop_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CWebDialogAction_SyncBackstop_Activity();
	};

	class CWebDialogAction__CacheLockAppHostInstance_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CWebDialogAction__CacheLockAppHostInstance_Activity();
	};

	class CWebDialogAction__EnsureDevice_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CWebDialogAction__EnsureDevice_Activity();
	};

	class CWebDialogAction__EnsureLockAppHost_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CWebDialogAction__EnsureLockAppHost_Activity();
	};

	class CWebDialogAction__InitializeDCompDeviceSupport_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CWebDialogAction__InitializeDCompDeviceSupport_Activity();
	};

	class CWebDialogAction__SyncBackstopVisualToLogonVisual_Activity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~CWebDialogAction__SyncBackstopVisualToLogonVisual_Activity();
	};

	class ProcessStartup
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
	};

protected:
	void Create();
public:
	static bool IsEnabled(unsigned char,unsigned __int64);
	static void AbortingDueToConsecutiveLockAppShownFailures();
	static void AutoLogonAfterOOBE();
	static void BlockedShutdownStartupFailure(long);
	static void BlockedShutdown_BlockingAppRemoved<unsigned int &,unsigned int const &>(unsigned int &,unsigned int const &);
	static void BlockedShutdown_ForcedBySharedCart();
	static void BlockedShutdown_ForcedByShellShutdown();
	static void CLockAction__OnTransitionFromLockAppWatchdogTimerExpired<bool const &>(bool const &);
	static void CandidateSessionAutoLogon();
	static void CompleteTransitionToCredEntry();
	static void DelayLockDismissed();
	static void DesktopLockHostActivationBackedOff();
	static void FSIAForceLaunched();
	static void FSIAIgnoredForZDPOrNoAutologon();
	static void FSIALaunchedInLogonUI();
	static void FSIAScheduledForExplorerLaunch();
	static void FSIASuppressed();
	static void FailedToLaunchLockAppBecauseExplorerIsNotRunning();
	static void FallbackTelemetryCallback(bool,wil::FailureInfo const &);
	static void FirstSignInAnimationCancelRequested<bool const &>(bool const &);
	static void FirstSignInAnimationStartRequested<bool const &>(bool const &);
	static void FirstSignInAnimationStopRequested<bool const &>(bool const &);
	static void FirstSignInAnimationTimeoutUpdated<unsigned long &>(unsigned long &);
	static void LidStateChanged<bool const &>(bool const &);
	static void LockActionCanceled();
	static void LockActionUpdateSharedVisualFailure(long);
	static void LockAppDidntDismiss();
	static void LockAppHostShutdownFailure(long);
	static void LockAppShownWatchdogNotStartedBecauseLockAppShownWasDetected();
	static void LockAppShownWatchdogTimerDisabled();
	static void LowPowerStateChanged<bool const &>(bool const &);
	static void PublishedLockScreenActiveWNF<unsigned long &>(unsigned long &);
	static void RPCTimeoutToLockScreenFailure(long);
	static void RPCTimeoutToShowWebDialogFailure(long);
	static void RequestingCredsAfterRecovery();
	static void SecurityOptions_OptionSelected<unsigned int &>(unsigned int &);
	static void SignInFailure<long &,long &>(long &,long &);
	static void SilentTSAutoLogon();
	static void SuspendResumeStateChanged<unsigned long &>(unsigned long &);
	static void SystemManagedAccountLogin();
	static void TSDisconnectOptions_OptionSelected<unsigned int &>(unsigned int &);
	static void UnlockIfLockAppDidntShowWatchdogTimerDisabled();
	static void UnlockingDueToLockAppShownNotReceivedInTimeAllotted();
	static void UnlockingFromLockAction();
	static void User_Interaction_Requested();
	static void WebDialogActionCanceled();
	void LockActionHandleFailedEvent_(LockAppHostEvent);
	void LockOnDesktop_(long,bool,unsigned int,bool);
};

class LogonSound
{
	bool _HasLogonUICheckedAlready();
	bool _HasPlayedAlready();
	bool _SessionSupportsLogonSound();
	long _InitializeAudioPlayer();
	long _PlayLogoffSound(SoundScenario,Windows::Internal::CNoResult &);
	long _PlayLogonSoundFromLogonUI(IInspectable *);
	virtual ~LogonSound();
public:
	LogonSound();
	long PlayLogonSoundIfNecessary(IInspectable *);
	long ResetLogonSound();
	long StartLogoffSound(SoundScenario);
	long WaitForLogoffSound(unsigned int);
};

namespace LogonSoundHelpers
{
	class LogonSoundPlayer
	{
		long _InitializeAudioPlayer();
		static unsigned long _PlaySoundWorkItemFromLogonUIProc(void *);
		static unsigned long _SoundInitializationWorkItemProc(void *);
		void _PlayLogonSound();
	public:
		LogonSoundPlayer();
		long PlayLogonUILogonSound();
		~LogonSoundPlayer();
	};

	TRIBIT GetConfigSetting();
	TRIBIT RegQueryBoolValueFromHKLM(unsigned short const *,unsigned short const *);
	long EnsureLogonSoundKeyExists();
};

namespace Microsoft
{
	namespace WRL
	{
		struct ActivationFactory<Details::Nil,Details::Nil,Details::Nil,0>
		{
			ActivationFactory<Details::Nil,Details::Nil,Details::Nil,0>();
			virtual long ActivateInstance(IInspectable * *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct ActivationFactory<Windows::Internal::UI::Logon::Controller::ILogonUISecurityOptionsResultFactory,FtmBase,Details::Nil,0>
		{
			virtual long ActivateInstance(IInspectable * *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct ActivationFactory<Windows::Internal::UI::Logon::Controller::IMessageDisplayResultFactory,FtmBase,Details::Nil,0>
		{
			virtual long ActivateInstance(IInspectable * *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct ActivationFactory<Windows::Internal::UI::Logon::Controller::IReportCredentialsDataFactory,FtmBase,Details::Nil,0>
		{
			virtual long ActivateInstance(IInspectable * *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct ActivationFactory<Windows::Internal::UI::Logon::Controller::IRequestCredentialsDataFactory,FtmBase,Details::Nil,0>
		{
			virtual long ActivateInstance(IInspectable * *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct AgileRef
		{
			AgileRef();
			Details::ComPtrRef<AgileRef> operator&();
			long CopyTo(_GUID const &,IUnknown * *);
			~AgileRef();
		};

		struct ClassFactory<Details::Nil,Details::Nil,Details::Nil,0>
		{
			virtual long LockServer(int);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct ComPtr<CAudioPlaybackEventCallback>
		{
			~ComPtr<CAudioPlaybackEventCallback>();
		};

		class ComPtr<CAutoLogonManager>
		{
		protected:
			unsigned long InternalRelease();
		};

		struct ComPtr<CCredentialProviderSerialization>
		{
			~ComPtr<CCredentialProviderSerialization>();
		};

		class ComPtr<CFSIAAsyncAction>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			~ComPtr<CFSIAAsyncAction>();
		};

		struct ComPtr<CLockAction>
		{
			void Attach(CLockAction *);
			~ComPtr<CLockAction>();
		};

		class ComPtr<CLogonController>
		{
		protected:
			void InternalAddRef();
		};

		struct ComPtr<CMessageDisplayResultFactory>
		{
			~ComPtr<CMessageDisplayResultFactory>();
		};

		class ComPtr<CProcessStateManager>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		};

		class ComPtr<CRefCountedObject<LockScreenCpuBooster> >
		{
		protected:
			void InternalAddRef();
		};

		class ComPtr<CRefCountedObject<LockScreenIOBooster> >
		{
		protected:
			void InternalAddRef();
		};

		class ComPtr<CRefCountedObject<Windows::Internal::String> >
		{
		protected:
			void InternalAddRef();
		public:
			~ComPtr<CRefCountedObject<Windows::Internal::String> >();
		};

		struct ComPtr<CReportCredentialsData>
		{
			~ComPtr<CReportCredentialsData>();
		};

		struct ComPtr<CReportCredentialsDataFactory>
		{
			~ComPtr<CReportCredentialsDataFactory>();
		};

		struct ComPtr<CRequestCredentialData>
		{
			~ComPtr<CRequestCredentialData>();
		};

		struct ComPtr<CRequestCredentialsDataFactory>
		{
			~ComPtr<CRequestCredentialsDataFactory>();
		};

		struct ComPtr<CSecureLockAction>
		{
			~ComPtr<CSecureLockAction>();
		};

		class ComPtr<CServer>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		};

		struct ComPtr<CShutdownBlockingApp>
		{
			~ComPtr<CShutdownBlockingApp>();
		};

		class ComPtr<CUserColorData>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<CUserColorData> & operator=(ComPtr<CUserColorData> const &);
			void Attach(CUserColorData *);
		};

		class ComPtr<CUserSettingChangeMonitor>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		};

		class ComPtr<CWebDialogAction>
		{
		protected:
			unsigned long InternalRelease();
		};

		struct ComPtr<DefaultSelector>
		{
			~ComPtr<DefaultSelector>();
		};

		class ComPtr<Details::EventTargetArray>
		{
		protected:
			unsigned long InternalRelease();
		public:
			ComPtr<Details::EventTargetArray> & operator=(ComPtr<Details::EventTargetArray> const &);
			ComPtr<Details::EventTargetArray> & operator=(Details::EventTargetArray *);
			void Attach(Details::EventTargetArray *);
		};

		class ComPtr<IAgileReference>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IAsyncInfo>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			long As<Windows::Foundation::IAsyncAction>(Details::ComPtrRef<ComPtr<Windows::Foundation::IAsyncAction> >);
			long As<Windows::Foundation::IAsyncOperation<HSTRING__ *> >(Details::ComPtrRef<ComPtr<Windows::Foundation::IAsyncOperation<HSTRING__ *> > >);
			~ComPtr<IAsyncInfo>();
		};

		struct ComPtr<IAudioPlayer>
		{
			ComPtr<IAudioPlayer> & operator=(ComPtr<IAudioPlayer> const &);
		};

		struct ComPtr<IAudioPlayerFacade>
		{
			ComPtr<IAudioPlayerFacade> & operator=(ComPtr<IAudioPlayerFacade> const &);
			~ComPtr<IAudioPlayerFacade>();
		};

		class ComPtr<IAudioSource>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IAutoLogonManager>
		{
		protected:
			unsigned long InternalRelease();
		public:
			ComPtr<IAutoLogonManager> & operator=(IAutoLogonManager *);
			Details::ComPtrRef<ComPtr<IAutoLogonManager> > operator&();
			~ComPtr<IAutoLogonManager>();
		};

		class ComPtr<IBlockedShutdownDataConsumer>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<IBlockedShutdownDataConsumer> & operator=(ComPtr<IBlockedShutdownDataConsumer> const &);
		};

		class ComPtr<IComputerAccounts>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ICredProviderCredentialSerialization>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<ICredProviderCredentialSerialization>();
		};

		class ComPtr<ID3D11Device>
		{
		protected:
			unsigned long InternalRelease();
		public:
			long As<IDXGIDevice1>(Details::ComPtrRef<ComPtr<IDXGIDevice1> >);
		};

		class ComPtr<ID3D11DeviceContext>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IDCompositionDesktopDevice>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IDCompositionDesktopDevicePartner>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IDCompositionDevice>
		{
		protected:
			unsigned long InternalRelease();
		public:
			long As<IDCompositionDesktopDevicePartner>(Details::ComPtrRef<ComPtr<IDCompositionDesktopDevicePartner> >);
		};

		class ComPtr<IDCompositionSurface>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IDCompositionTarget>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IDCompositionVirtualSurface>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IDCompositionVisual2>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IDCompositionVisual>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IDXGIDevice1>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IDXGISurface1>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IGatherManagerAdmin3>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IGatherManagerAdmin3>();
		};

		class ComPtr<IGlobalOptions>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IGlobalOptions>();
		};

		class ComPtr<IInspectable>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			long As<ICredProviderCredentialSerialization>(Details::ComPtrRef<ComPtr<ICredProviderCredentialSerialization> >);
			~ComPtr<IInspectable>();
		};

		struct ComPtr<ILockAppHost>
		{
			long As<ILockAppHostSafeguard>(Details::ComPtrRef<ComPtr<ILockAppHostSafeguard> >);
			~ComPtr<ILockAppHost>();
		};

		class ComPtr<ILockAppHostDataCallback>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ILockAppHostSafeguard>
		{
		protected:
			unsigned long InternalRelease();
		};

		struct ComPtr<ILockAppHostServer>
		{
			~ComPtr<ILockAppHostServer>();
		};

		class ComPtr<ILockScreenDirectorPrivate>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ILogonErrorRedirector>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IMarshal>
		{
		protected:
			unsigned long InternalRelease();
		public:
			Details::ComPtrRef<ComPtr<IMarshal> > operator&();
		};

		class ComPtr<IPropertyBag2>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IPropertyStore>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IProxyServerIdentity>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IRestrictedErrorInfo>
		{
		protected:
			unsigned long InternalRelease();
		public:
			Details::ComPtrRef<ComPtr<IRestrictedErrorInfo> > operator&();
		};

		class ComPtr<IReturnToLockListener>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		};

		class ComPtr<IRpcOptions>
		{
		protected:
			unsigned long InternalRelease();
		public:
			Details::ComPtrRef<ComPtr<IRpcOptions> > operator&();
			~ComPtr<IRpcOptions>();
		};

		class ComPtr<IServiceProvider>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IStream>
		{
		protected:
			unsigned long InternalRelease();
		public:
			Details::ComPtrRef<ComPtr<IStream> > operator&();
		};

		class ComPtr<IUnknown>
		{
		protected:
			unsigned long InternalRelease();
		public:
			ComPtr<IUnknown>();
			Details::ComPtrRef<ComPtr<IUnknown> > operator&();
			long As<IMarshal>(Details::ComPtrRef<ComPtr<IMarshal> >);
			~ComPtr<IUnknown>();
		};

		class ComPtr<IUserSettingChangeCallback>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<IUserSettingChangeCallback> & operator=(ComPtr<IUserSettingChangeCallback> const &);
		};

		class ComPtr<IWICBitmap>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IWICBitmapEncoder>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IWICBitmapFrameEncode>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IWICBitmapScaler>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IWICBitmapSource>
		{
		protected:
			unsigned long InternalRelease();
		public:
			ComPtr<IWICBitmapSource> & operator=(IWICBitmapSource *);
		};

		class ComPtr<IWICFormatConverter>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IWICImagingFactory>
		{
		protected:
			unsigned long InternalRelease();
		};

		struct ComPtr<IWeakReference>
		{
			~ComPtr<IWeakReference>();
		};

		struct ComPtr<IWeakReferenceSource>
		{
			~ComPtr<IWeakReferenceSource>();
		};

		class ComPtr<IWinLogonRPC>
		{
		protected:
			unsigned long InternalRelease();
		};

		struct ComPtr<LockActionArgs>
		{
			~ComPtr<LockActionArgs>();
		};

		class ComPtr<LogonSound>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			~ComPtr<LogonSound>();
		};

		class ComPtr<OptionalDependencyProvider>
		{
		protected:
			unsigned long InternalRelease();
		};

		struct ComPtr<SecurityOptionsResultFactory>
		{
			~ComPtr<SecurityOptionsResultFactory>();
		};

		class ComPtr<SilentTSAutologonManager>
		{
		protected:
			unsigned long InternalRelease();
		};

		struct ComPtr<SimpleClassFactory<CLogonController,0> >
		{
			~ComPtr<SimpleClassFactory<CLogonController,0> >();
		};

		struct ComPtr<SimpleSealedActivationFactory<CLockHost,0> >
		{
			~ComPtr<SimpleSealedActivationFactory<CLockHost,0> >();
		};

		class ComPtr<Windows::Foundation::Collections::IIterable<_GUID> >
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::Collections::IVectorView<_GUID> >
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		};

		class ComPtr<Windows::Foundation::Collections::Internal::AgileVector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0> >
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::Collections::Internal::SimpleVectorIterator<_GUID,Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0> >,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,XWinRT::IntVersionTag,1> >
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::Collections::Internal::SimpleVectorView<_GUID,Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0> >,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,XWinRT::IntVersionTag,1> >
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::IAsyncAction>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			Details::ComPtrRef<ComPtr<Windows::Foundation::IAsyncAction> > operator&();
			Windows::Foundation::IAsyncAction * * ReleaseAndGetAddressOf();
			long As<IAsyncInfo>(Details::ComPtrRef<ComPtr<IAsyncInfo> >);
			~ComPtr<Windows::Foundation::IAsyncAction>();
		};

		class ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<Windows::Foundation::IAsyncActionCompletedHandler> & operator=(Windows::Foundation::IAsyncActionCompletedHandler *);
			Details::ComPtrRef<ComPtr<Windows::Foundation::IAsyncActionCompletedHandler> > operator&();
			~ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>();
		};

		class ComPtr<Windows::Foundation::IAsyncOperation<HSTRING__ *> >
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<Windows::Foundation::IAsyncOperation<HSTRING__ *> > & operator=(ComPtr<Windows::Foundation::IAsyncOperation<HSTRING__ *> > const &);
		};

		class ComPtr<Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Logon::Controller::LogonUISecurityOptionsResult *> >
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Logon::Controller::MessageDisplayResult *> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			long As<IAsyncInfo>(Details::ComPtrRef<ComPtr<IAsyncInfo> >);
		};

		class ComPtr<Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Logon::Controller::ReportCredentialsData *> >
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Logon::Controller::RequestCredentialsData *> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			long As<IAsyncInfo>(Details::ComPtrRef<ComPtr<IAsyncInfo> >);
			~ComPtr<Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Logon::Controller::RequestCredentialsData *> >();
		};

		class ComPtr<Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Logon::Controller::TerminalServiceDisconnectResult *> >
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Logon::CredProvData::ReportResultInfo *> >
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::IAsyncOperation<unsigned int> >
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING__ *> >
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		};

		class ComPtr<Windows::Internal::AssignedAccess::IAssignedAccessUserInfo>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Internal::IAsyncDeferral>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		};

		class ComPtr<Windows::Internal::IAsyncFireCompletion>
		{
		protected:
			void InternalAddRef();
		};

		class ComPtr<Windows::Internal::IComPoolTask>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Internal::INilDelegate>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Internal::Shell::Experience::ILockScreenExperienceManager>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Internal::Shell::Experience::IShellExperienceManagerFactory>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Internal::SystemManagedAccount::ISystemManagedAccountInfo>
		{
		protected:
			unsigned long InternalRelease();
		};

		struct ComPtr<Windows::Internal::SystemManagedAccount::Logon::ISystemManagedAccountCredential>
		{
			long As<Windows::Internal::SystemManagedAccount::ISystemManagedAccountInfo>(Details::ComPtrRef<ComPtr<Windows::Internal::SystemManagedAccount::ISystemManagedAccountInfo> >);
			~ComPtr<Windows::Internal::SystemManagedAccount::Logon::ISystemManagedAccountCredential>();
		};

		class ComPtr<Windows::Internal::UI::Logon::Controller::IBioFeedbackListener>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Internal::UI::Logon::Controller::IBioFeedbackUX>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<Windows::Internal::UI::Logon::Controller::IBioFeedbackUX> & operator=(ComPtr<Windows::Internal::UI::Logon::Controller::IBioFeedbackUX> const &);
			ComPtr<Windows::Internal::UI::Logon::Controller::IBioFeedbackUX> & operator=(Windows::Internal::UI::Logon::Controller::IBioFeedbackUX *);
		};

		class ComPtr<Windows::Internal::UI::Logon::Controller::IBlockedShutdownResolverUX>
		{
		protected:
			void InternalAddRef();
		public:
			ComPtr<Windows::Internal::UI::Logon::Controller::IBlockedShutdownResolverUX> & operator=(ComPtr<Windows::Internal::UI::Logon::Controller::IBlockedShutdownResolverUX> const &);
			~ComPtr<Windows::Internal::UI::Logon::Controller::IBlockedShutdownResolverUX>();
		};

		class ComPtr<Windows::Internal::UI::Logon::Controller::ILockInfo>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Internal::UI::Logon::Controller::ILockScreenHost>
		{
		protected:
			unsigned long InternalRelease();
		public:
			ComPtr<Windows::Internal::UI::Logon::Controller::ILockScreenHost> & operator=(ComPtr<Windows::Internal::UI::Logon::Controller::ILockScreenHost> const &);
		};

		class ComPtr<Windows::Internal::UI::Logon::Controller::ILogonUISecurityOptionsResult>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Internal::UI::Logon::Controller::ILogonUX>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<Windows::Internal::UI::Logon::Controller::ILogonUX> & operator=(ComPtr<Windows::Internal::UI::Logon::Controller::ILogonUX> const &);
			ComPtr<Windows::Internal::UI::Logon::Controller::ILogonUX> & operator=(Windows::Internal::UI::Logon::Controller::ILogonUX *);
			~ComPtr<Windows::Internal::UI::Logon::Controller::ILogonUX>();
		};

		class ComPtr<Windows::Internal::UI::Logon::Controller::IMessageDisplayResult>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Internal::UI::Logon::Controller::IRedirectionManager>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Internal::UI::Logon::Controller::IReportCredentialsData>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Internal::UI::Logon::Controller::IRequestCredentialsData>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::UI::Logon::Controller::IRequestCredentialsData>();
		};

		class ComPtr<Windows::Internal::UI::Logon::Controller::IShutdownBlockingApp>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Internal::UI::Logon::Controller::ITerminalServiceDisconnectResult>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Internal::UI::Logon::Controller::IUnlockTrigger>
		{
		protected:
			unsigned long InternalRelease();
		public:
			long As<Windows::Foundation::IAsyncOperation<HSTRING__ *> >(Details::ComPtrRef<ComPtr<Windows::Foundation::IAsyncOperation<HSTRING__ *> > >);
			long As<Windows::Internal::UI::Logon::Controller::ILockInfo>(Details::ComPtrRef<ComPtr<Windows::Internal::UI::Logon::Controller::ILockInfo> >);
		};

		class ComPtr<Windows::Internal::UI::Logon::Controller::IUserSettingManager>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<Windows::Internal::UI::Logon::Controller::IUserSettingManager> & operator=(Windows::Internal::UI::Logon::Controller::IUserSettingManager *);
		};

		class ComPtr<Windows::Internal::UI::Logon::Controller::IWebDialogDismissTrigger>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Internal::UI::Logon::CredProvData::ICredProvDataModelFactory>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Internal::UI::Logon::CredProvData::ICredProvDefaultSelector>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Internal::UI::Logon::CredProvData::ICredentialSerialization>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<Windows::Internal::UI::Logon::CredProvData::ICredentialSerialization> & operator=(Windows::Internal::UI::Logon::CredProvData::ICredentialSerialization *);
			long As<ICredProviderCredentialSerialization>(Details::ComPtrRef<ComPtr<ICredProviderCredentialSerialization> >);
			~ComPtr<Windows::Internal::UI::Logon::CredProvData::ICredentialSerialization>();
		};

		class ComPtr<Windows::Internal::UI::Logon::CredProvData::IDispatchEvent>
		{
		protected:
			void InternalAddRef();
		};

		class ComPtr<Windows::Internal::UI::Logon::CredProvData::IDisplayStateProvider>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		};

		class ComPtr<Windows::Internal::UI::Logon::CredProvData::IReportResultInfo>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Internal::UI::Logon::CredProvData::ITelemetryDataProvider>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Storage::Streams::IRandomAccessStream>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<lockframework::ILockFrameworkBrokerStatics>
		{
		protected:
			unsigned long InternalRelease();
		};

		struct DelegateTraits<-1>
		{
			static void EnsureStackSnapshot(long);
		};

		namespace Details
		{
			struct ComPtrRef<AgileRef>
			{
				operator AgileRef *();
			};

			struct ComPtrRef<ComPtr<Windows::Foundation::IAsyncAction> >
			{
				ComPtrRef<ComPtr<Windows::Foundation::IAsyncAction> >(ComPtr<Windows::Foundation::IAsyncAction> *);
			};

			struct ComPtrRef<WeakRef>
			{
				operator WeakRef *();
			};

			struct EventTargetArray
			{
				EventTargetArray();
				long RuntimeClassInitialize(unsigned __int64);
				void AddTail(IUnknown *,void *);
			};

			class ImplementsHelper<RuntimeClassFlags<13>,0,IActivationFactory,Nil,Nil,Nil,Nil>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<13>,0,IActivationFactory,Windows::Internal::UI::Logon::Controller::ILogonUISecurityOptionsResultFactory,FtmBase,Nil,Nil>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
				unsigned long GetIidCount();
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<13>,0,IActivationFactory,Windows::Internal::UI::Logon::Controller::IMessageDisplayResultFactory,FtmBase,Nil,Nil>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
				unsigned long GetIidCount();
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<13>,0,IActivationFactory,Windows::Internal::UI::Logon::Controller::IReportCredentialsDataFactory,FtmBase,Nil,Nil>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
				unsigned long GetIidCount();
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<13>,0,IActivationFactory,Windows::Internal::UI::Logon::Controller::IRequestCredentialsDataFactory,FtmBase,Nil,Nil>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
				unsigned long GetIidCount();
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,IInspectable,IWeakReferenceSource>
			{
			protected:
				unsigned long GetIidCount();
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,Windows::Foundation::Collections::IIterator<_GUID>,IWeakReferenceSource,FtmBase>
			{
			protected:
				unsigned long GetIidCount();
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,Windows::Foundation::Collections::IVector<_GUID>,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<_GUID>,FtmBase>
			{
			protected:
				unsigned long GetIidCount();
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,Windows::Foundation::Collections::IVectorView<_GUID>,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<_GUID>,FtmBase>
			{
			protected:
				unsigned long GetIidCount();
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,Windows::Internal::UI::Logon::Controller::ILogonUISecurityOptionsResult,IWeakReferenceSource,FtmBase>
			{
			protected:
				unsigned long GetIidCount();
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,Windows::Internal::UI::Logon::Controller::IMessageDisplayResult,IWeakReferenceSource,FtmBase>
			{
			protected:
				unsigned long GetIidCount();
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,Windows::Internal::UI::Logon::Controller::IReportCredentialsData,IWeakReferenceSource,FtmBase>
			{
			protected:
				unsigned long GetIidCount();
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,Windows::Internal::UI::Logon::Controller::IRequestCredentialsData,IWeakReferenceSource,FtmBase>
			{
			protected:
				unsigned long GetIidCount();
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,Windows::Internal::UI::Logon::Controller::IShutdownBlockingApp,IWeakReferenceSource,FtmBase>
			{
			protected:
				unsigned long GetIidCount();
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,IWeakReferenceSource,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<_GUID>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,IWeakReferenceSource>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<2>,0,ImplementsMarker<FtmBase> >
			{
			protected:
				IUnknown * CastToUnknown();
			};

			class ImplementsHelper<RuntimeClassFlags<3>,0,IInspectable,IAutoLogonManager,IWeakReferenceSource,FtmBase>
			{
			protected:
				unsigned long GetIidCount();
			};

			class ImplementsHelper<RuntimeClassFlags<3>,0,IInspectable,ICredProviderCredentialSerialization,IWeakReferenceSource,FtmBase>
			{
			protected:
				unsigned long GetIidCount();
			};

			class ImplementsHelper<RuntimeClassFlags<3>,0,IInspectable,Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::Logon::CredProvData::CredProvDataModel *,Windows::Internal::UI::Logon::CredProvData::CredentialSerialization *>,IWeakReferenceSource,FtmBase>
			{
			protected:
				unsigned long GetIidCount();
			};

			class ImplementsHelper<RuntimeClassFlags<3>,0,Windows::Internal::UI::Logon::Controller::ILockScreenHost,IWeakReferenceSource,Windows::Internal::UI::Logon::Controller::IBioFeedbackListener,FtmBase>
			{
			protected:
				unsigned long GetIidCount();
			};

			class ImplementsHelper<RuntimeClassFlags<3>,0,Windows::Internal::UI::Logon::Controller::ILogonRPCServer,IWeakReferenceSource,FtmBase>
			{
			protected:
				unsigned long GetIidCount();
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,0,Windows::Internal::UI::Logon::Controller::IRedirectionManager,IWeakReferenceSource,Windows::Internal::UI::Logon::Controller::IUserSettingManager,Windows::Internal::UI::Logon::CredProvData::ITelemetryDataProvider,Windows::Internal::UI::Logon::CredProvData::IDisplayStateProvider,IUserSettingChangeCallback,FtmBase>
			{
			protected:
				unsigned long GetIidCount();
			};

			class ImplementsHelper<RuntimeClassFlags<3>,0,Windows::Internal::UI::Logon::CredProvData::ICredProvDefaultSelector,IWeakReferenceSource,FtmBase>
			{
			protected:
				unsigned long GetIidCount();
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,0,Windows::Internal::UI::Logon::CredProvData::IDispatchEvent,IWeakReferenceSource>
			{
			protected:
				unsigned long GetIidCount();
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,0,Windows::Internal::UI::Logon::CredProvData::IOptionalDependencyProvider,IWeakReferenceSource,FtmBase>
			{
			protected:
				unsigned long GetIidCount();
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,0,Windows::Internal::UI::Logon::CredProvData::IUIThreadEventDispatcher,IWeakReferenceSource,FtmBase>
			{
			protected:
				unsigned long GetIidCount();
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,CloakedIid<Windows::Internal::IAsyncDeferral>,CloakedIid<Windows::Internal::IComPoolTask>,CloakedIid<Windows::Internal::IAsyncFireCompletion> >
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IAutoLogonManager,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,ICredProviderCredentialSerialization,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,ILockAppHostDataCallback,ILockAppHostDataSharedVisualCallback>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
				unsigned long GetIidCount();
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IAsyncAction,Windows::Internal::IAsyncOperationLocal,CloakedIid<Windows::Internal::IAsyncDeferral>,CloakedIid<Windows::Internal::IComPoolTask>,CloakedIid<Windows::Internal::IAsyncFireCompletion> >
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Internal::UI::Logon::Controller::IBioFeedbackListener,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,ImplementsMarker<FtmBase> >
			{
			protected:
				unsigned long GetIidCount();
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::Logon::CredProvData::CredProvDataModel *,Windows::Internal::UI::Logon::CredProvData::CredentialSerialization *>,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,Windows::Internal::UI::Logon::Controller::IBioFeedbackListener,IReturnToLockListener,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,Windows::Internal::UI::Logon::CredProvData::IDisplayStateProvider,IUserSettingChangeCallback,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			struct MakeAllocator<CAudioPlaybackEventCallback>
			{
				~MakeAllocator<CAudioPlaybackEventCallback>();
			};

			struct MakeAllocator<CAutoLogonManager>
			{
				~MakeAllocator<CAutoLogonManager>();
			};

			struct MakeAllocator<CCredentialProviderSerialization>
			{
				~MakeAllocator<CCredentialProviderSerialization>();
			};

			struct MakeAllocator<CFSIAAsyncAction>
			{
				~MakeAllocator<CFSIAAsyncAction>();
			};

			struct MakeAllocator<CFirstSignInAnimation>
			{
				~MakeAllocator<CFirstSignInAnimation>();
			};

			struct MakeAllocator<CLockAction>
			{
				~MakeAllocator<CLockAction>();
			};

			struct MakeAllocator<CLockHost>
			{
				~MakeAllocator<CLockHost>();
			};

			struct MakeAllocator<CLogonController>
			{
				~MakeAllocator<CLogonController>();
			};

			struct MakeAllocator<CMessageDisplayResult>
			{
				~MakeAllocator<CMessageDisplayResult>();
			};

			struct MakeAllocator<CMessageDisplayResultFactory>
			{
				~MakeAllocator<CMessageDisplayResultFactory>();
			};

			struct MakeAllocator<CProcessStateManager>
			{
				~MakeAllocator<CProcessStateManager>();
			};

			struct MakeAllocator<CReportCredentialsData>
			{
				~MakeAllocator<CReportCredentialsData>();
			};

			struct MakeAllocator<CReportCredentialsDataFactory>
			{
				~MakeAllocator<CReportCredentialsDataFactory>();
			};

			struct MakeAllocator<CRequestCredentialData>
			{
				~MakeAllocator<CRequestCredentialData>();
			};

			struct MakeAllocator<CRequestCredentialsDataFactory>
			{
				~MakeAllocator<CRequestCredentialsDataFactory>();
			};

			struct MakeAllocator<CSecureLockAction>
			{
				~MakeAllocator<CSecureLockAction>();
			};

			struct MakeAllocator<CShutdownBlockingApp>
			{
				~MakeAllocator<CShutdownBlockingApp>();
			};

			struct MakeAllocator<CUserColorData>
			{
				~MakeAllocator<CUserColorData>();
			};

			struct MakeAllocator<CUserSettingChangeMonitor>
			{
				~MakeAllocator<CUserSettingChangeMonitor>();
			};

			struct MakeAllocator<CWebDialogAction>
			{
				~MakeAllocator<CWebDialogAction>();
			};

			struct MakeAllocator<DefaultSelector>
			{
				~MakeAllocator<DefaultSelector>();
			};

			struct MakeAllocator<EventDispatcher>
			{
				~MakeAllocator<EventDispatcher>();
			};

			struct MakeAllocator<EventTargetArray>
			{
				~MakeAllocator<EventTargetArray>();
			};

			struct MakeAllocator<LogonSound>
			{
				~MakeAllocator<LogonSound>();
			};

			struct MakeAllocator<OptionalDependencyProvider>
			{
				~MakeAllocator<OptionalDependencyProvider>();
			};

			struct MakeAllocator<SecurityOptionsResult>
			{
				~MakeAllocator<SecurityOptionsResult>();
			};

			struct MakeAllocator<SecurityOptionsResultFactory>
			{
				~MakeAllocator<SecurityOptionsResultFactory>();
			};

			struct MakeAllocator<SilentTSAutologonManager>
			{
				~MakeAllocator<SilentTSAutologonManager>();
			};

			struct MakeAllocator<SimpleClassFactory<CLogonController,0> >
			{
				~MakeAllocator<SimpleClassFactory<CLogonController,0> >();
			};

			struct MakeAllocator<SimpleSealedActivationFactory<CFirstSignInAnimation,0> >
			{
				~MakeAllocator<SimpleSealedActivationFactory<CFirstSignInAnimation,0> >();
			};

			struct MakeAllocator<SimpleSealedActivationFactory<CLockHost,0> >
			{
				~MakeAllocator<SimpleSealedActivationFactory<CLockHost,0> >();
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

			class RuntimeClassBaseT<13>
			{
			protected:
				static long AsIID<ActivationFactory<Windows::Internal::UI::Logon::Controller::IReportCredentialsDataFactory,FtmBase,Nil,0> >(ActivationFactory<Windows::Internal::UI::Logon::Controller::IReportCredentialsDataFactory,FtmBase,Nil,0> *,_GUID const &,void * *);
				static long AsIID<ActivationFactory<Windows::Internal::UI::Logon::Controller::IRequestCredentialsDataFactory,FtmBase,Nil,0> >(ActivationFactory<Windows::Internal::UI::Logon::Controller::IRequestCredentialsDataFactory,FtmBase,Nil,0> *,_GUID const &,void * *);
			};

			class RuntimeClassBaseT<1>
			{
			protected:
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,IInspectable> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,IInspectable> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<_GUID>,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<_GUID>,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<_GUID>,Windows::Foundation::Collections::IIterable<_GUID>,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<_GUID>,Windows::Foundation::Collections::IIterable<_GUID>,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<_GUID>,Windows::Foundation::Collections::IIterable<_GUID>,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<_GUID>,Windows::Foundation::Collections::IIterable<_GUID>,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::Logon::Controller::ILogonUISecurityOptionsResult,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::Logon::Controller::ILogonUISecurityOptionsResult,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::Logon::Controller::IMessageDisplayResult,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::Logon::Controller::IMessageDisplayResult,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::Logon::Controller::IShutdownBlockingApp,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::Logon::Controller::IShutdownBlockingApp,FtmBase> *,_GUID const &,void * *);
			};

			class RuntimeClassBaseT<2>
			{
			protected:
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Logon::Controller::LogonUISecurityOptionsResult *>,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Logon::Controller::LogonUISecurityOptionsResult *>,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Logon::Controller::MessageDisplayResult *>,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Logon::Controller::MessageDisplayResult *>,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Logon::Controller::TerminalServiceDisconnectResult *>,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Logon::Controller::TerminalServiceDisconnectResult *>,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<unsigned int>,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<unsigned int>,FtmBase> *,_GUID const &,void * *);
			};

			class RuntimeClassBaseT<3>
			{
			protected:
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,IAutoLogonManager,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,IAutoLogonManager,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,ICredProviderCredentialSerialization,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,ICredProviderCredentialSerialization,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::Logon::CredProvData::CredProvDataModel *,Windows::Internal::UI::Logon::CredProvData::CredentialSerialization *>,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::Logon::CredProvData::CredProvDataModel *,Windows::Internal::UI::Logon::CredProvData::CredentialSerialization *>,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::Controller::IFirstSignInAnimation,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::Controller::IFirstSignInAnimation,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::CredProvData::ICredProvDefaultSelector,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::CredProvData::ICredProvDefaultSelector,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::CredProvData::IDispatchEvent> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::CredProvData::IDispatchEvent> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::CredProvData::IOptionalDependencyProvider,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::CredProvData::IOptionalDependencyProvider,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::CredProvData::IUIThreadEventDispatcher,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::CredProvData::IUIThreadEventDispatcher,FtmBase> *,_GUID const &,void * *);
				static long GetImplementedIIDS<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::Controller::IRedirectionManager,Windows::Internal::UI::Logon::Controller::IUserSettingManager,Windows::Internal::UI::Logon::CredProvData::ITelemetryDataProvider,Windows::Internal::UI::Logon::CredProvData::IDisplayStateProvider,IUserSettingChangeCallback,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::Controller::IRedirectionManager,Windows::Internal::UI::Logon::Controller::IUserSettingManager,Windows::Internal::UI::Logon::CredProvData::ITelemetryDataProvider,Windows::Internal::UI::Logon::CredProvData::IDisplayStateProvider,IUserSettingChangeCallback,FtmBase> *,unsigned long *,_GUID * *);
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,IInspectable>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,IInspectable>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<_GUID>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<_GUID>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<_GUID>,Windows::Foundation::Collections::IIterable<_GUID>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<_GUID>,Windows::Foundation::Collections::IIterable<_GUID>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<_GUID>,Windows::Foundation::Collections::IIterable<_GUID>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<_GUID>,Windows::Foundation::Collections::IIterable<_GUID>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::Logon::Controller::ILogonUISecurityOptionsResult,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::Logon::Controller::ILogonUISecurityOptionsResult,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::Logon::Controller::IMessageDisplayResult,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::Logon::Controller::IMessageDisplayResult,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::Logon::Controller::IReportCredentialsData,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::Logon::Controller::IReportCredentialsData,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::Logon::Controller::IRequestCredentialsData,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::Logon::Controller::IRequestCredentialsData,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::Logon::Controller::IShutdownBlockingApp,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::Logon::Controller::IShutdownBlockingApp,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IAudioPlaybackEvents>
			{
			protected:
				RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IAudioPlaybackEvents>();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IUnknown>
			{
			protected:
				RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IUnknown>();
			public:
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

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncActionCompletedHandler,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING__ *>,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Logon::Controller::LogonUISecurityOptionsResult *>,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Logon::Controller::MessageDisplayResult *>,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Logon::Controller::ReportCredentialsData *>,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Logon::Controller::RequestCredentialsData *>,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Logon::Controller::TerminalServiceDisconnectResult *>,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Logon::CredProvData::ReportResultInfo *> >
			{
			protected:
				RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Logon::CredProvData::ReportResultInfo *> >();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<unsigned int>,FtmBase>
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

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,IAutoLogonManager,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,IAutoLogonManager,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,ICredProviderCredentialSerialization,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,ICredProviderCredentialSerialization,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::Logon::CredProvData::CredProvDataModel *,Windows::Internal::UI::Logon::CredProvData::CredentialSerialization *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::Logon::CredProvData::CredProvDataModel *,Windows::Internal::UI::Logon::CredProvData::CredentialSerialization *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::Controller::IFirstSignInAnimation,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::Controller::IFirstSignInAnimation,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::Controller::ILockScreenHost,Windows::Internal::UI::Logon::Controller::IBioFeedbackListener,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::Controller::ILockScreenHost,Windows::Internal::UI::Logon::Controller::IBioFeedbackListener,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::Controller::ILogonRPCServer,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::Controller::ILogonRPCServer,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::Controller::IRedirectionManager,Windows::Internal::UI::Logon::Controller::IUserSettingManager,Windows::Internal::UI::Logon::CredProvData::ITelemetryDataProvider,Windows::Internal::UI::Logon::CredProvData::IDisplayStateProvider,IUserSettingChangeCallback,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::Controller::IRedirectionManager,Windows::Internal::UI::Logon::Controller::IUserSettingManager,Windows::Internal::UI::Logon::CredProvData::ITelemetryDataProvider,Windows::Internal::UI::Logon::CredProvData::IDisplayStateProvider,IUserSettingChangeCallback,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::CredProvData::ICredProvDefaultSelector,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::CredProvData::ICredProvDefaultSelector,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::CredProvData::IDispatchEvent>
			{
				RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::CredProvData::IDispatchEvent>();
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::CredProvData::IDispatchEvent>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::CredProvData::IOptionalDependencyProvider,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::CredProvData::IOptionalDependencyProvider,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::CredProvData::IUIThreadEventDispatcher,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::Logon::CredProvData::IUIThreadEventDispatcher,FtmBase>();
			};

			class RuntimeClassImpl<RuntimeClassFlags<6>,0,0,0,IClassFactory,Nil,Nil,Nil,Nil>
			{
			protected:
				RuntimeClassImpl<RuntimeClassFlags<6>,0,0,0,IClassFactory,Nil,Nil,Nil,Nil>();
			};

			class StaticStorage<DefaultModule<1>,0,int>
			{
				static StaticStorage<DefaultModule<1>,0,int> instance_;
			public:
				~StaticStorage<DefaultModule<1>,0,int>();
			};

			struct WeakReferenceImpl
			{
				virtual long Resolve(_GUID const &,IInspectable * *);
			};

			ComPtr<Details::WeakReferenceImpl> Make<WeakReferenceImpl,IUnknown * &>(IUnknown * &);
			Details::WeakReferenceImpl * CreateWeakReference(IUnknown *);
			bool TerminateMap(Details::ModuleBase *,unsigned short const *,bool);
			long CreateActivationFactory<CMessageDisplayResultFactory>(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<CReportCredentialsDataFactory>(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<CRequestCredentialsDataFactory>(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<SecurityOptionsResultFactory>(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<SimpleSealedActivationFactory<CFirstSignInAnimation,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<SimpleSealedActivationFactory<CLockHost,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateClassFactory<SimpleClassFactory<CLogonController,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long GetActivationFactory<1>(Details::ModuleBase *,unsigned short const *,HSTRING__ *,IActivationFactory * *);
			long GetCacheEntry(Details::ModuleBase *,unsigned int *,_GUID const &,Details::CreatorMap const *,IUnknown * *);
			long GetClassObject<1>(Details::ModuleBase *,unsigned short const *,_GUID const &,_GUID const &,void * *);
			long MakeAndInitialize<CAudioPlaybackEventCallback,CAudioPlaybackEventCallback,Windows::Internal::AsyncDeferral<Windows::Internal::CNoResult> &>(CAudioPlaybackEventCallback * *,Windows::Internal::AsyncDeferral<Windows::Internal::CNoResult> &);
			long MakeAndInitialize<CCredentialProviderSerialization,ICredProviderCredentialSerialization,_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION &>(ICredProviderCredentialSerialization * *,_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION &);
			long MakeAndInitialize<CMessageDisplayResult,Windows::Internal::UI::Logon::Controller::IMessageDisplayResult,unsigned int &>(Windows::Internal::UI::Logon::Controller::IMessageDisplayResult * *,unsigned int &);
			long MakeAndInitialize<CUserColorData,CUserColorData,CAutoHandle<HKEY__ *> &>(CUserColorData * *,CAutoHandle<HKEY__ *> &);
			long MakeAndInitialize<CUserColorData,CUserColorData,HSTRING__ * &>(CUserColorData * *,HSTRING__ * &);
			long MakeAndInitialize<EventTargetArray,EventTargetArray,unsigned __int64 &>(Details::EventTargetArray * *,unsigned __int64 &);
			unsigned long SafeUnknownDecrementReference(long volatile &);
			unsigned long SafeUnknownIncrementReference(long volatile &);
			void RaiseException(long,unsigned long);
		};

		struct ErrorPropagationPolicyTraits<-1>
		{
			static long FireCompletionErrorPropagationPolicyFilter(long,IUnknown *,void *);
			static long FireProgressErrorPropagationPolicyFilter(long,IUnknown *,void *);
		};

		class EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::Logon::Controller::IUserSettingManager *,IInspectable *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::Logon::Controller::IUserSettingManager *,IInspectable *> *,void *,EventRegistrationToken *);
			long DoInvoke<<lambda_e57e08407f09c4c5aa68ee8233b09626> >(<lambda_e57e08407f09c4c5aa68ee8233b09626>);
		public:
			long Remove(EventRegistrationToken);
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

		class Implements<RuntimeClassFlags<3>,CloakedIid<IMarshal> >
		{
		protected:
			IUnknown * CastToUnknown();
			unsigned long GetIidCount();
			void FillArrayWithIid(unsigned long *,_GUID *);
		};

		struct InvokeTraits<-2>
		{
			static long InvokeDelegates<<lambda_e57e08407f09c4c5aa68ee8233b09626>,Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::Logon::Controller::IUserSettingManager *,IInspectable *> >(<lambda_e57e08407f09c4c5aa68ee8233b09626>,Details::EventTargetArray *,EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::Logon::Controller::IUserSettingManager *,IInspectable *>,InvokeModeOptions<-2> > *);
		};

		class Module<1,Details::DefaultModule<1> >
		{
			static bool isInitialized;
		protected:
			static _RTL_RUN_ONCE initOnceInProc_;
		public:
			static Details::DefaultModule<1> & Create();
			virtual long RegisterCOMObject(unsigned short const *,_GUID *,IClassFactory * *,unsigned long *,unsigned int);
			virtual long RegisterWinRTObject(unsigned short const *,unsigned short const * *,_RO_REGISTRATION_COOKIE * *,unsigned int);
			virtual long UnregisterCOMObject(unsigned short const *,unsigned long *,unsigned int);
			virtual long UnregisterWinRTObject(unsigned short const *,_RO_REGISTRATION_COOKIE *);
			virtual unsigned long DecrementObjectCount();
			virtual unsigned long IncrementObjectCount();
			virtual ~Module<1,Details::DefaultModule<1> >();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,FtmBase>
		{
			RuntimeClass<RuntimeClassFlags<2>,FtmBase>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>
		{
			RuntimeClass<RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>();
		};

		struct RuntimeClass<RuntimeClassFlags<3>,Windows::Internal::UI::Logon::Controller::IRedirectionManager,Windows::Internal::UI::Logon::Controller::IUserSettingManager,Windows::Internal::UI::Logon::CredProvData::ITelemetryDataProvider,Windows::Internal::UI::Logon::CredProvData::IDisplayStateProvider,IUserSettingChangeCallback,FtmBase>
		{
			RuntimeClass<RuntimeClassFlags<3>,Windows::Internal::UI::Logon::Controller::IRedirectionManager,Windows::Internal::UI::Logon::Controller::IUserSettingManager,Windows::Internal::UI::Logon::CredProvData::ITelemetryDataProvider,Windows::Internal::UI::Logon::CredProvData::IDisplayStateProvider,IUserSettingChangeCallback,FtmBase>();
		};

		struct RuntimeClass<RuntimeClassFlags<3>,Windows::Internal::UI::Logon::CredProvData::IDispatchEvent>
		{
			RuntimeClass<RuntimeClassFlags<3>,Windows::Internal::UI::Logon::CredProvData::IDispatchEvent>();
		};

		struct SimpleActivationFactory<CFirstSignInAnimation,0>
		{
			virtual long ActivateInstance(IInspectable * *);
		};

		struct SimpleActivationFactory<CLockHost,0>
		{
			virtual long ActivateInstance(IInspectable * *);
		};

		struct SimpleClassFactory<CLogonController,0>
		{
			virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
		};

		class WeakRef
		{
		protected:
			long InternalResolve(_GUID const &,IInspectable * *);
		public:
			long As<IInspectable>(Details::ComPtrRef<ComPtr<IInspectable> >);
			~WeakRef();
		};

		namespace Wrappers
		{
			namespace Details
			{
				class SyncLockExclusive
				{
					void InternalUnlock();
				public:
					~SyncLockExclusive();
				};

				class SyncLockShared
				{
					void InternalUnlock();
				public:
					~SyncLockShared();
				};

			};

			struct HString
			{
				long Set(HSTRING__ * const &);
				long Set(unsigned short const *,unsigned int);
				long Set<261>(unsigned short (&)[261]);
				long Set<unsigned short const *>(unsigned short const * const &,Details::Dummy);
			};

			class HStringReference
			{
				void CreateReference(unsigned short const *,unsigned int,unsigned int);
			public:
				HStringReference<41>(unsigned short const (&)[41]);
				HStringReference<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short> > >(Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short> > const &,Details::Dummy);
				HStringReference<unsigned short const *>(unsigned short const * const &,Details::Dummy);
				~HStringReference();
			};

			struct SRWLock
			{
				Details::SyncLockExclusive LockExclusive();
			};

		};

		Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics * gCausality;
		_RTL_RUN_ONCE gCausalityInitOnce;
		long AsWeak<CServer>(CServer *,WRL::WeakRef *);
		long AsWeak<Windows::Internal::UI::Logon::Controller::IUnlockTrigger>(Windows::Internal::UI::Logon::Controller::IUnlockTrigger *,WRL::WeakRef *);
		long AsWeak<Windows::Internal::UI::Logon::Controller::IWebDialogDismissTrigger>(Windows::Internal::UI::Logon::Controller::IWebDialogDismissTrigger *,WRL::WeakRef *);
	};

};

struct OptionalDependencyProvider
{
	OptionalDependencyProvider();
	long RuntimeClassInitialize(Windows::Internal::UI::Logon::Controller::LogonUIRequestReason,IInspectable *,Windows::Internal::UI::Logon::Controller::IUserSettingManager *,Windows::Internal::UI::Logon::CredProvData::IDisplayStateProvider *);
	virtual long GetOptionalDependency(Windows::Internal::UI::Logon::CredProvData::OptionalDependencyKind,IInspectable * *);
	virtual ~OptionalDependencyProvider();
};

struct RpcOptionsHelper
{
	static long GetRpcOptions(IUnknown *,bool,IRpcOptions * *);
};

struct SecurityOptionsResult
{
	SecurityOptionsResult();
	static TrustLevel InternalGetTrustLevel();
	static unsigned short const * InternalGetRuntimeClassName();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_SecurityOptionChoice(Windows::Internal::UI::Logon::Controller::LogonUISecurityOptions *);
	virtual long get_ShutdownChoice(Windows::Internal::UI::Logon::Controller::LogonUIShutdownChoice *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct SecurityOptionsResultFactory
{
	SecurityOptionsResultFactory();
	virtual long ActivateInstance(IInspectable * *);
	virtual long CreateSecurityOptionsResult(Windows::Internal::UI::Logon::Controller::LogonUISecurityOptions,Windows::Internal::UI::Logon::Controller::LogonUIShutdownChoice,Windows::Internal::UI::Logon::Controller::ILogonUISecurityOptionsResult * *);
};

class SilentTSAutologonManager
{
	bool CheckIfCredentialThreadStarted();
	long EnsureCredentialThreadStarted();
	long InitCredentialStack(Windows::Internal::UI::Logon::Controller::LogonUIRequestReason,Windows::Internal::UI::Logon::Controller::LogonUIFlags,IInspectable *,Windows::Internal::UI::Logon::Controller::IUserSettingManager *,Windows::Internal::UI::Logon::CredProvData::IDisplayStateProvider *,HSTRING__ *);
	static unsigned long s_CredentialStackStartThreadProc(void *);
	static unsigned long s_CredentialStackThreadProc(void *);
	unsigned long CredentialStackThread();
	void ShutdownCredentialThread();
	void ShutdownCredentialThreadLockHeld();
public:
	SilentTSAutologonManager();
	bool IsSilentTSAutoLogon(Windows::Internal::UI::Logon::Controller::LogonUIRequestReason);
	long ReportTSAutoLogonResult(Windows::Internal::UI::Logon::Controller::LogonUIRequestReason,long,long,HSTRING__ *,unsigned short * *,_WLUI_CREDPROV_RESPONSE *);
	long RequestTSAutoLogonCredential(Windows::Internal::UI::Logon::Controller::LogonUIRequestReason,Windows::Internal::UI::Logon::Controller::LogonUIFlags,Windows::Internal::UI::Logon::Controller::IUserSettingManager *,IInspectable *,Windows::Internal::UI::Logon::CredProvData::IDisplayStateProvider *,unsigned short const *,Windows::Internal::UI::Logon::CredProvData::ICredentialSerialization * *);
	virtual long Invoke(Windows::Internal::UI::Logon::CredProvData::ICredProvDataModel *,Windows::Internal::UI::Logon::CredProvData::ICredentialSerialization *);
	virtual ~SilentTSAutologonManager();
};

namespace Tsf3OverrideUtil
{
	Tsf3OverrideUtil::PolicyStatus IsTsf3OverrideEnabledByGroupPolicy(unsigned short const *,unsigned short const *);
	Tsf3OverrideUtil::PolicyStatus IsTsf3OverrideEnabledByMdm(unsigned short const *);
	Tsf3OverrideUtil::PolicyStatus IsTsf3OverrideEnabledByPolicy(unsigned short const *);
	bool IsRunninOnLogonDesktop();
	bool IsRunninOnWinPE();
	bool IsRunningAsSystem();
	bool IsRunningOnDesktop();
	bool IsRunningOnHub();
	bool IsRunningOnServerSku();
	bool IsTsf3OverrideEnabled(unsigned short const *,unsigned short const *);
	bool IsTsf3OverrideEnabledByUserSetting(unsigned short const *,unsigned short const *);
	bool IsTsf3ProfileSupported(unsigned short const *,unsigned short const *);
	unsigned long GetDeviceFamily();
};

namespace Windows
{
	namespace Foundation
	{
		namespace Collections
		{
			namespace Detail
			{
				long _IteratorGetMany<IIterator_impl<_GUID,1>,_GUID>(IIterator_impl<_GUID,1> *,unsigned int,_GUID *,unsigned int *);
				long _VectorGetMany<IVectorView_impl<_GUID,1>,_GUID>(IVectorView_impl<_GUID,1> *,unsigned int,unsigned int,_GUID *,unsigned int *);
				long _VectorGetMany<IVector_impl<_GUID,1>,_GUID>(IVector_impl<_GUID,1> *,unsigned int,unsigned int,_GUID *,unsigned int *);
				long _VectorReplaceAll<IVector_impl<_GUID,1>,_GUID>(IVector_impl<_GUID,1> *,unsigned int,_GUID *);
			};

			struct IIterable<_GUID>
			{
				IIterable<_GUID>();
			};

			struct IIterator<_GUID>
			{
				IIterator<_GUID>();
			};

			struct IIterator_impl<_GUID,1>
			{
				virtual long GetMany(unsigned int,_GUID *,unsigned int *);
			};

			struct IVector<_GUID>
			{
				IVector<_GUID>();
			};

			struct IVectorView<_GUID>
			{
				IVectorView<_GUID>();
			};

			struct IVectorView_impl<_GUID,1>
			{
				virtual long GetMany(unsigned int,unsigned int,_GUID *,unsigned int *);
			};

			struct IVector_impl<_GUID,1>
			{
				virtual long GetMany(unsigned int,unsigned int,_GUID *,unsigned int *);
				virtual long ReplaceAll(unsigned int,_GUID *);
			};

			namespace Internal
			{
				struct SimpleVectorIterator<_GUID,Vector<_GUID,DefaultEqualityPredicate<_GUID>,DefaultLifetimeTraits<_GUID>,VectorOptions<_GUID,0,1,0> >,DefaultLifetimeTraits<_GUID>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorIterator<_GUID,Vector<_GUID,DefaultEqualityPredicate<_GUID>,DefaultLifetimeTraits<_GUID>,VectorOptions<_GUID,0,1,0> >,DefaultLifetimeTraits<_GUID>,XWinRT::IntVersionTag,1>(Vector<_GUID,DefaultEqualityPredicate<_GUID>,DefaultLifetimeTraits<_GUID>,VectorOptions<_GUID,0,1,0> > *,SimpleVectorIterator<_GUID,Vector<_GUID,DefaultEqualityPredicate<_GUID>,DefaultLifetimeTraits<_GUID>,VectorOptions<_GUID,0,1,0> >,DefaultLifetimeTraits<_GUID>,XWinRT::IntVersionTag,1>::permission);
					static long Make(Vector<_GUID,DefaultEqualityPredicate<_GUID>,DefaultLifetimeTraits<_GUID>,VectorOptions<_GUID,0,1,0> > *,SimpleVectorIterator<_GUID,Vector<_GUID,DefaultEqualityPredicate<_GUID>,DefaultLifetimeTraits<_GUID>,VectorOptions<_GUID,0,1,0> >,DefaultLifetimeTraits<_GUID>,XWinRT::IntVersionTag,1> * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,_GUID *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long MoveNext(unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Current(_GUID *);
					virtual long get_HasCurrent(unsigned char *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct SimpleVectorView<_GUID,Vector<_GUID,DefaultEqualityPredicate<_GUID>,DefaultLifetimeTraits<_GUID>,VectorOptions<_GUID,0,1,0> >,DefaultLifetimeTraits<_GUID>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorView<_GUID,Vector<_GUID,DefaultEqualityPredicate<_GUID>,DefaultLifetimeTraits<_GUID>,VectorOptions<_GUID,0,1,0> >,DefaultLifetimeTraits<_GUID>,XWinRT::IntVersionTag,1>(Vector<_GUID,DefaultEqualityPredicate<_GUID>,DefaultLifetimeTraits<_GUID>,VectorOptions<_GUID,0,1,0> > *,SimpleVectorView<_GUID,Vector<_GUID,DefaultEqualityPredicate<_GUID>,DefaultLifetimeTraits<_GUID>,VectorOptions<_GUID,0,1,0> >,DefaultLifetimeTraits<_GUID>,XWinRT::IntVersionTag,1>::permission);
					virtual long First(IIterator<_GUID> * *);
					virtual long GetAt(unsigned int,_GUID *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,_GUID *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long IndexOf(_GUID,unsigned int *,unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				class Vector<_GUID,DefaultEqualityPredicate<_GUID>,DefaultLifetimeTraits<_GUID>,VectorOptions<_GUID,0,1,0> >
				{
					long IndexOfInternal(_GUID *,unsigned int,_GUID,unsigned int *,unsigned char *);
					long InsertAtInternal(unsigned int,_GUID,bool);
					long RemoveAtInternal(unsigned int,bool);
					long ResizeStorage(unsigned int);
					static void _Free(_GUID *,unsigned int);
					void _EraseAll(_GUID * *,unsigned int *);
				protected:
					virtual ~Vector<_GUID,DefaultEqualityPredicate<_GUID>,DefaultLifetimeTraits<_GUID>,VectorOptions<_GUID,0,1,0> >();
				public:
					Vector<_GUID,DefaultEqualityPredicate<_GUID>,DefaultLifetimeTraits<_GUID>,VectorOptions<_GUID,0,1,0> >(DefaultEqualityPredicate<_GUID> const &,Vector<_GUID,DefaultEqualityPredicate<_GUID>,DefaultLifetimeTraits<_GUID>,VectorOptions<_GUID,0,1,0> >::permission);
					virtual long Append(_GUID);
					virtual long Clear();
					virtual long First(IIterator<_GUID> * *);
					virtual long GetAt(unsigned int,_GUID *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,_GUID *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long GetView(IVectorView<_GUID> * *);
					virtual long IndexOf(_GUID,unsigned int *,unsigned char *);
					virtual long InsertAt(unsigned int,_GUID);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long RemoveAt(unsigned int);
					virtual long RemoveAtEnd();
					virtual long ReplaceAll(unsigned int,_GUID *);
					virtual long SetAt(unsigned int,_GUID);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct VectorOptions<_GUID,0,1,0>
				{
					static long RaiseEvent(...);
				};

			};

		};

		struct IAsyncAction
		{
			IAsyncAction();
		};

		struct IAsyncActionCompletedHandler
		{
			IAsyncActionCompletedHandler();
		};

		struct IAsyncOperation<HSTRING__ *>
		{
			IAsyncOperation<HSTRING__ *>();
		};

		struct IAsyncOperationCompletedHandler<HSTRING__ *>
		{
			IAsyncOperationCompletedHandler<HSTRING__ *>();
		};

		struct IAsyncOperationCompletedHandler<Internal::UI::Logon::Controller::LogonUISecurityOptionsResult *>
		{
			IAsyncOperationCompletedHandler<Internal::UI::Logon::Controller::LogonUISecurityOptionsResult *>();
		};

		struct IAsyncOperationCompletedHandler<Internal::UI::Logon::Controller::MessageDisplayResult *>
		{
			IAsyncOperationCompletedHandler<Internal::UI::Logon::Controller::MessageDisplayResult *>();
		};

		struct IAsyncOperationCompletedHandler<Internal::UI::Logon::Controller::ReportCredentialsData *>
		{
			IAsyncOperationCompletedHandler<Internal::UI::Logon::Controller::ReportCredentialsData *>();
		};

		struct IAsyncOperationCompletedHandler<Internal::UI::Logon::Controller::RequestCredentialsData *>
		{
			IAsyncOperationCompletedHandler<Internal::UI::Logon::Controller::RequestCredentialsData *>();
		};

		struct IAsyncOperationCompletedHandler<Internal::UI::Logon::Controller::TerminalServiceDisconnectResult *>
		{
			IAsyncOperationCompletedHandler<Internal::UI::Logon::Controller::TerminalServiceDisconnectResult *>();
		};

		struct IAsyncOperationCompletedHandler<unsigned int>
		{
			IAsyncOperationCompletedHandler<unsigned int>();
		};

		struct ITypedEventHandler<Internal::UI::Logon::CredProvData::CredProvDataModel *,Internal::UI::Logon::CredProvData::CredentialSerialization *>
		{
			ITypedEventHandler<Internal::UI::Logon::CredProvData::CredProvDataModel *,Internal::UI::Logon::CredProvData::CredentialSerialization *>();
		};

		long ActivateInstance<Internal::AssignedAccess::IAssignedAccessManager>(HSTRING__ *,Internal::AssignedAccess::IAssignedAccessManager * *);
		long ActivateInstance<Internal::UI::Logon::Controller::IBioFeedbackUX>(HSTRING__ *,Internal::UI::Logon::Controller::IBioFeedbackUX * *);
		long ActivateInstance<Internal::UI::Logon::Controller::IBlockedShutdownResolverUX>(HSTRING__ *,Internal::UI::Logon::Controller::IBlockedShutdownResolverUX * *);
		long ActivateInstance<Internal::UI::Logon::Controller::IFirstSignInAnimation>(HSTRING__ *,Internal::UI::Logon::Controller::IFirstSignInAnimation * *);
		long ActivateInstance<Internal::UI::Logon::Controller::ILockScreenHost>(HSTRING__ *,Internal::UI::Logon::Controller::ILockScreenHost * *);
		long ActivateInstance<Internal::UI::Logon::Controller::ILogonUX>(HSTRING__ *,Internal::UI::Logon::Controller::ILogonUX * *);
		long ActivateInstance<Internal::UI::Logon::Controller::ITerminalServiceSessionPickerUX>(HSTRING__ *,Internal::UI::Logon::Controller::ITerminalServiceSessionPickerUX * *);
		long ActivateInstance<Microsoft::WRL::ComPtr<Internal::UI::Logon::Controller::IBlockedShutdownResolverUX> >(HSTRING__ *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Internal::UI::Logon::Controller::IBlockedShutdownResolverUX> >);
		long ActivateInstance<Microsoft::WRL::ComPtr<Internal::UI::Logon::Controller::ILockScreenHost> >(HSTRING__ *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Internal::UI::Logon::Controller::ILockScreenHost> >);
		long ActivateInstance<Microsoft::WRL::ComPtr<Internal::UI::Logon::Controller::ILogonUX> >(HSTRING__ *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Internal::UI::Logon::Controller::ILogonUX> >);
		long GetActivationFactory<System::Profile::IEducationSettingsStatics>(HSTRING__ *,System::Profile::IEducationSettingsStatics * *);
	};

	namespace Internal
	{
		namespace AssignedAccess
		{
			class AAManagerHelper
			{
				long GetAssignedAccessConfiguration(IAssignedAccessConfiguration * *);
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

		struct AsyncDeferral<CNoResult>
		{
			AsyncDeferral<CNoResult>(AsyncDeferral<CNoResult> const &);
			void Complete(long);
		};

		struct CResultBase
		{
			AsyncDeferral<CNoResult> GetDeferral<CNoResult>(CNoResult &);
		};

		struct ComTaskPool
		{
			struct CTaskWrapper<<lambda_c2fd7731c5ae0d37e65ea73be67c0f1b> >
			{
				virtual void Run();
			};

			static ComTaskPool::SThreadData tls_threadData;
		};

		struct ComTaskPoolHandler
		{
			static long _FireCompletion(IAsyncFireCompletion *);
		};

		struct GitPtrSupportsAgile<Foundation::IAsyncActionCompletedHandler>
		{
			long CopyLocal(_GUID const &,void * *);
			long CopyLocal<Foundation::IAsyncActionCompletedHandler>(Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Foundation::IAsyncActionCompletedHandler> >);
			long Initialize<Foundation::IAsyncActionCompletedHandler>(Foundation::IAsyncActionCompletedHandler *);
			long Revoke();
		};

		struct GitPtrSupportsAgile<Foundation::IAsyncOperationCompletedHandler<HSTRING__ *> >
		{
			long Initialize<Foundation::IAsyncOperationCompletedHandler<HSTRING__ *> >(Foundation::IAsyncOperationCompletedHandler<HSTRING__ *> *);
		};

		struct GitPtrSupportsAgile<INilDelegate>
		{
			long Initialize<INilDelegate>(INilDelegate *);
		};

		struct IComPoolTask
		{
			IComPoolTask();
		};

		class NativeString<CoTaskMemPolicy<unsigned short> >
		{
			long _EnsureCapacity(unsigned __int64);
			long _Initialize(unsigned short const *,unsigned __int64);
			long _InitializeFromRegistry(HKEY__ *,unsigned short const *,bool);
			long _InitializeHelper<<lambda_255728157cf8e92998065ff06efe801f> >(unsigned short const *,char *,<lambda_255728157cf8e92998065ff06efe801f> const &);
			void _EnsureCount();
			void _Free();
		public:
			long CopyTo(unsigned short * *);
			long Initialize(HKEY__ *,unsigned short const *,unsigned short const *);
			long Initialize(NativeString<CoTaskMemPolicy<unsigned short> > const &);
			long InitializeFormat(unsigned short const *,...);
			long InitializeResMessage(HINSTANCE__ *,int,...);
			~NativeString<CoTaskMemPolicy<unsigned short> >();
		};

		struct ResourceString
		{
			static bool FindAndSize(HINSTANCE__ *,unsigned int,unsigned short,unsigned short const * *,unsigned short *);
		};

		class String
		{
			long _InitializeHelper(unsigned short const *);
		public:
			long Initialize(HSTRING__ * const &);
		};

		namespace UI
		{
			namespace Logon
			{
				namespace Controller
				{
					struct IBioFeedbackListener
					{
						IBioFeedbackListener();
					};

					struct ILockActivityListener
					{
						ILockActivityListener();
					};

					struct ILockInfo
					{
						ILockInfo();
					};

					struct ILockScreenHost
					{
						ILockScreenHost();
					};

					struct ILogonRPCServer
					{
						ILogonRPCServer();
					};

					struct ILogonUISecurityOptionsResult
					{
						ILogonUISecurityOptionsResult();
					};

					struct ILogonUISecurityOptionsResultFactory
					{
						ILogonUISecurityOptionsResultFactory();
					};

					struct IMessageDisplayResult
					{
						IMessageDisplayResult();
					};

					struct IMessageDisplayResultFactory
					{
						IMessageDisplayResultFactory();
					};

					struct IRedirectionManager
					{
						IRedirectionManager();
					};

					struct IReportCredentialsData
					{
						IReportCredentialsData();
					};

					struct IReportCredentialsDataFactory
					{
						IReportCredentialsDataFactory();
					};

					struct IRequestCredentialsData
					{
						IRequestCredentialsData();
					};

					struct IRequestCredentialsDataFactory
					{
						IRequestCredentialsDataFactory();
					};

					struct IShutdownBlockingApp
					{
						IShutdownBlockingApp();
					};

					struct IUnlockTrigger
					{
						IUnlockTrigger();
					};

					struct IUserSettingManager
					{
						IUserSettingManager();
					};

					struct IWebDialogDismissTrigger
					{
						IWebDialogDismissTrigger();
					};

				};

				namespace CredProvData
				{
					struct ICredProvDefaultSelector
					{
						ICredProvDefaultSelector();
					};

					struct IDisplayStateProvider
					{
						IDisplayStateProvider();
					};

					struct IOptionalDependencyProvider
					{
						IOptionalDependencyProvider();
					};

					struct ITelemetryDataProvider
					{
						ITelemetryDataProvider();
					};

					struct IUIThreadEventDispatcher
					{
						IUIThreadEventDispatcher();
					};

				};

			};

		};

		_RTL_RUN_ONCE s_bIsEnvironmentCheckDone;
	};

	namespace Shell
	{
		class CImmersiveCursor
		{
			bool _EnableMouseInputForCursorSuppression(int);
		public:
			static void DisableCursorSuppression();
		};

	};

};

namespace WinlogonServerTelemetry
{
	class AbortActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~AbortActivity();
	};

	class DelayLockedActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~DelayLockedActivity();
	};

	class DisplayLockedActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~DisplayLockedActivity();
	};

	class DisplayMessageActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~DisplayMessageActivity();
	};

	class DisplayRequestCredentialsErrorActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~DisplayRequestCredentialsErrorActivity();
	};

	class DisplaySecurityOptionsActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~DisplaySecurityOptionsActivity();
	};

	class DisplayStatusActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~DisplayStatusActivity();
	};

	class DisplayStatusOnCredentialPageActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~DisplayStatusOnCredentialPageActivity();
	};

	class DisplayTSDisconnectOptionsActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~DisplayTSDisconnectOptionsActivity();
	};

	class DisplayTSDisconnectUIActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~DisplayTSDisconnectUIActivity();
	};

	class DisplayTSReconnectUIActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~DisplayTSReconnectUIActivity();
	};

	class DisplayWelcomeActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~DisplayWelcomeActivity();
	};

	class FinishOperationActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~FinishOperationActivity();
	};

	class GetShutdownResolverInfoActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~GetShutdownResolverInfoActivity();
	};

	class InformLogonUIActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~InformLogonUIActivity();
	};

	class NotifyIsReadyForDesktopSwitchActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~NotifyIsReadyForDesktopSwitchActivity();
	};

	class PrepareWebDialogActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~PrepareWebDialogActivity();
	};

	class PromptForCredentialsActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~PromptForCredentialsActivity();
	};

	class ReleaseContextActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~ReleaseContextActivity();
	};

	class ReportResultActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~ReportResultActivity();
	};

	class RequestCredentialsActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~RequestCredentialsActivity();
	};

	class SecureDelayLockeddActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~SecureDelayLockeddActivity();
	};

	class SecureDisplayLockedActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~SecureDisplayLockedActivity();
	};

	class ShutdownActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~ShutdownActivity();
	};

	class WaitForUnlockActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~WaitForUnlockActivity();
	};

	class WaitForWebDialogCompleteActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~WaitForWebDialogCompleteActivity();
	};

};

namespace XWinRT
{
	struct SerializingLockPolicy
	{
		static detail::LockHolder<ComLock,detail::AcquireRead> Read(ComLock &,long *);
		static detail::LockHolder<ComLock,detail::AcquireWrite> Write(ComLock &,long *);
	};

	namespace detail
	{
		struct AtomicUpdates
		{
			static long AtomicUpdate<<lambda_76984edf2436eecb2357d4b40807bff7>,<lambda_23da9268e2a0d8a8175eb928cd1af10c> >(unsigned int *,<lambda_76984edf2436eecb2357d4b40807bff7> const &,<lambda_23da9268e2a0d8a8175eb928cd1af10c> const &);
		};

		struct InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0> >,IntVersionTag>
		{
			long Do<<lambda_15daaf7c7e7030d0b3a78e94af69cf5d>,<lambda_373c90731dca3d1fe11cb11fed8a242f> >(Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0> > *,<lambda_15daaf7c7e7030d0b3a78e94af69cf5d> const &,<lambda_373c90731dca3d1fe11cb11fed8a242f> const &);
			long Do<<lambda_b0a544c1d44aa9b573aced31ec308531>,<lambda_7658b44a5f0d50c62de8e639784cd88d> >(Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0> > *,<lambda_b0a544c1d44aa9b573aced31ec308531> const &,<lambda_7658b44a5f0d50c62de8e639784cd88d> const &);
			long Do<<lambda_bda5ad0e11e2f149c77ae46ef8fb39c3>,<lambda_23da9268e2a0d8a8175eb928cd1af10c> >(Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0> > *,<lambda_bda5ad0e11e2f149c77ae46ef8fb39c3> const &,<lambda_23da9268e2a0d8a8175eb928cd1af10c> const &);
			long Do<<lambda_c86cf0f6600b9e335c894cf2dafdfc27>,<lambda_2d37032588f96b19b50da2dc379e15bd> >(Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0> > *,<lambda_c86cf0f6600b9e335c894cf2dafdfc27> const &,<lambda_2d37032588f96b19b50da2dc379e15bd> const &);
			long Do<<lambda_e564b76d63fce7a9913429af641fdb6c>,<lambda_8fb06ac57b33b24abb48652306ce0d52> >(Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0> > *,<lambda_e564b76d63fce7a9913429af641fdb6c> const &,<lambda_8fb06ac57b33b24abb48652306ce0d52> const &);
			long Do<<lambda_e9a58a3287c62afdf601a3c0539168b6>,<lambda_4f3ad254159e2269bc8775181f2043e0> >(Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0> > *,<lambda_e9a58a3287c62afdf601a3c0539168b6> const &,<lambda_4f3ad254159e2269bc8775181f2043e0> const &);
			long Do<<lambda_f7b719287e80387745aecb4ca3f60f4b>,<lambda_b50cbd908a5a8c87cc19515881632ad0> >(Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0> > *,<lambda_f7b719287e80387745aecb4ca3f60f4b> const &,<lambda_b50cbd908a5a8c87cc19515881632ad0> const &);
		};

		struct ReentrancyGuard<0>
		{
			ReentrancyGuard<0>(...);
		};

	};

};

class _TlgActivityBase<wil::ActivityBase<DatVPrepLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<DatVPrepLogging,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>
{
protected:
	~_TlgActivityBase<wil::ActivityBase<DatVPrepLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<DatVPrepLogging,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>();
};

class _TlgActivityBase<wil::ActivityBase<InputTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<InputTraceLogging,_TlgReflectorTag_Param0IsProviderType>,0,5>
{
protected:
	~_TlgActivityBase<wil::ActivityBase<InputTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<InputTraceLogging,_TlgReflectorTag_Param0IsProviderType>,0,5>();
};

class _TlgActivityBase<wil::ActivityBase<LogonControllerLogger,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LogonControllerLogger,_TlgReflectorTag_Param0IsProviderType>,0,5>
{
protected:
	~_TlgActivityBase<wil::ActivityBase<LogonControllerLogger,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LogonControllerLogger,_TlgReflectorTag_Param0IsProviderType>,0,5>();
};

class _TlgActivityBase<wil::ActivityBase<LogonControllerLogger,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LogonControllerLogger,_TlgReflectorTag_Param0IsProviderType>,35184372088832,5>
{
protected:
	~_TlgActivityBase<wil::ActivityBase<LogonControllerLogger,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LogonControllerLogger,_TlgReflectorTag_Param0IsProviderType>,35184372088832,5>();
};

class _TlgActivityBase<wil::ActivityBase<LogonControllerLogger,1,35184372088832,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LogonControllerLogger,_TlgReflectorTag_Param0IsProviderType>,35184372088832,5>
{
protected:
	~_TlgActivityBase<wil::ActivityBase<LogonControllerLogger,1,35184372088832,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LogonControllerLogger,_TlgReflectorTag_Param0IsProviderType>,35184372088832,5>();
};

class _TlgActivityBase<wil::ActivityBase<LogonControllerLogger,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LogonControllerLogger,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>
{
protected:
	~_TlgActivityBase<wil::ActivityBase<LogonControllerLogger,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LogonControllerLogger,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>();
};

class _TlgActivityBase<wil::ActivityBase<WinLogonLogonUIRPCServerLogger,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WinLogonLogonUIRPCServerLogger,_TlgReflectorTag_Param0IsProviderType>,0,5>
{
protected:
	~_TlgActivityBase<wil::ActivityBase<WinLogonLogonUIRPCServerLogger,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WinLogonLogonUIRPCServerLogger,_TlgReflectorTag_Param0IsProviderType>,0,5>();
};

class _TlgActivityBase<wil::ActivityBase<WinLogonLogonUIRPCServerLogger,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WinLogonLogonUIRPCServerLogger,_TlgReflectorTag_Param0IsProviderType>,35184372088832,5>
{
protected:
	~_TlgActivityBase<wil::ActivityBase<WinLogonLogonUIRPCServerLogger,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WinLogonLogonUIRPCServerLogger,_TlgReflectorTag_Param0IsProviderType>,35184372088832,5>();
};

class _TlgActivityBase<wil::ActivityBase<WinLogonLogonUIRPCServerLogger,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WinLogonLogonUIRPCServerLogger,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>
{
protected:
	~_TlgActivityBase<wil::ActivityBase<WinLogonLogonUIRPCServerLogger,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WinLogonLogonUIRPCServerLogger,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>();
};

namespace std
{
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

	struct exception
	{
		exception(exception const &);
		virtual char const * what();
	};

	nothrow_t const std::nothrow;
};

namespace wil
{
	class ActivityBase<DatVPrepLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<DatVPrepLogging,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<DatVPrepLogging,_TlgReflectorTag_Param0IsProviderType>();
		};

	protected:
		void Destroy();
	public:
		ActivityBase<DatVPrepLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void Stop(long);
		void zInternalStop();
		~ActivityBase<DatVPrepLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>();
	};

	class ActivityBase<InputTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<InputTraceLogging,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<InputTraceLogging,_TlgReflectorTag_Param0IsProviderType>();
		};

	protected:
		void Destroy();
		void EnsureWatchingCurrentThread();
	public:
		ActivityBase<InputTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void IgnoreCurrentThread();
		void Stop(long);
		void zInternalStart();
		void zInternalStop();
		~ActivityBase<InputTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>();
	};

	class ActivityBase<LogonControllerLogger,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<LogonControllerLogger,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<LogonControllerLogger,_TlgReflectorTag_Param0IsProviderType>();
		};

	protected:
		void Destroy();
		void EnsureWatchingCurrentThread();
	public:
		ActivityBase<LogonControllerLogger,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void IgnoreCurrentThread();
		void SetRelatedActivityId(_GUID const &);
		void Stop(long);
		void zInternalStart();
		void zInternalStop();
		~ActivityBase<LogonControllerLogger,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>();
	};

	class ActivityBase<LogonControllerLogger,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<LogonControllerLogger,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<LogonControllerLogger,_TlgReflectorTag_Param0IsProviderType>();
		};

	protected:
		void Destroy();
		void EnsureWatchingCurrentThread();
	public:
		ActivityBase<LogonControllerLogger,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void IgnoreCurrentThread();
		void Stop(long);
		void zInternalStart();
		void zInternalStop();
		~ActivityBase<LogonControllerLogger,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>();
	};

	class ActivityBase<LogonControllerLogger,1,35184372088832,5,50331648,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<LogonControllerLogger,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<LogonControllerLogger,_TlgReflectorTag_Param0IsProviderType>();
		};

	protected:
		void Destroy();
	public:
		ActivityBase<LogonControllerLogger,1,35184372088832,5,50331648,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void IgnoreCurrentThread();
		void Stop(long);
		void zInternalStart();
		void zInternalStop();
		~ActivityBase<LogonControllerLogger,1,35184372088832,5,50331648,_TlgReflectorTag_Param0IsProviderType>();
	};

	class ActivityBase<LogonControllerLogger,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<LogonControllerLogger,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<LogonControllerLogger,_TlgReflectorTag_Param0IsProviderType>();
		};

	protected:
		void Destroy();
	public:
		ActivityBase<LogonControllerLogger,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void IgnoreCurrentThread();
		void SetRelatedActivityId(_GUID const &);
		void Stop(long);
		void zInternalStart();
		void zInternalStop();
		~ActivityBase<LogonControllerLogger,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>();
	};

	struct ActivityBase<WinLogonLogonUIRPCServerLogger,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<WinLogonLogonUIRPCServerLogger,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<WinLogonLogonUIRPCServerLogger,_TlgReflectorTag_Param0IsProviderType>();
		};

		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void Stop(long);
		void zInternalStop();
		~ActivityBase<WinLogonLogonUIRPCServerLogger,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>();
	};

	class ActivityBase<WinLogonLogonUIRPCServerLogger,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<WinLogonLogonUIRPCServerLogger,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<WinLogonLogonUIRPCServerLogger,_TlgReflectorTag_Param0IsProviderType>();
		};

	protected:
		void Destroy();
		void EnsureWatchingCurrentThread();
	public:
		ActivityBase<WinLogonLogonUIRPCServerLogger,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void IgnoreCurrentThread();
		void Stop(long);
		void zInternalStart();
		void zInternalStop();
		~ActivityBase<WinLogonLogonUIRPCServerLogger,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>();
	};

	class ActivityBase<WinLogonLogonUIRPCServerLogger,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<WinLogonLogonUIRPCServerLogger,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<WinLogonLogonUIRPCServerLogger,_TlgReflectorTag_Param0IsProviderType>();
		};

	protected:
		void Destroy();
	public:
		ActivityBase<WinLogonLogonUIRPCServerLogger,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void IgnoreCurrentThread();
		void Stop(long);
		void zInternalStart();
		void zInternalStop();
		~ActivityBase<WinLogonLogonUIRPCServerLogger,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>();
	};

	struct ActivityThreadWatcher
	{
		~ActivityThreadWatcher();
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
		bool GetLastError(FailureInfo &,long);
	};

	struct ThreadFailureCache
	{
		virtual bool NotifyFailure(FailureInfo const &);
		~ThreadFailureCache();
	};

	class TraceLoggingProvider
	{
		virtual bool NotifyFailure(FailureInfo const &);
	protected:
		TraceLoggingProvider();
		virtual void Initialize();
		virtual void OnErrorReported(bool,FailureInfo const &);
		virtual ~TraceLoggingProvider();
		void Register(_tlgProvider_t const * const,void (*)(_GUID const *,unsigned long,unsigned char,unsigned __int64,unsigned __int64,_EVENT_FILTER_DESCRIPTOR *,void *));
		void ReportTelemetryFailure(FailureInfo const &);
		void ReportTraceLoggingFailure(FailureInfo const &);
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

	struct com_ptr_t<Windows::System::Profile::IEducationSettingsStatics,err_returncode_policy>
	{
		Windows::System::Profile::IEducationSettingsStatics * * operator&();
		~com_ptr_t<Windows::System::Profile::IEducationSettingsStatics,err_returncode_policy>();
	};

	struct cotaskmem_secure_deleter
	{
		void operator()<unsigned char>(unsigned char *);
		void operator()<unsigned short>(unsigned short *);
		void operator()<void>(void *);
	};

	namespace details
	{
		struct DestroyThreadPoolTimer<SystemThreadPoolMethods,0>
		{
			static void Destroy(_TP_TIMER *);
		};

		struct DestroyThreadPoolWait<0>
		{
			static void Destroy(_TP_WAIT *);
		};

		class EnabledStateManager
		{
			unsigned int EnsureSubscribedToFeatureConfigurationChangesImpl();
			void RecordCachedUsageUnderLock();
		public:
			void EnsureSubscribedToUsageFlush(void (*)(void *));
			void OnStateChange();
			void OnTimer();
			void QueueBackgroundUsageReporting(unsigned int,wil_details_FeatureReportingCache *);
			void SubscribeFeatureStateCacheToConfigurationChanges(wil_details_FeatureStateCache *,wil_FeatureChangeTime,unsigned int);
			~EnabledStateManager();
		};

		class FeatureImpl<__WilFeatureTraits_Feature_ALB>
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

		class FeatureImpl<__WilFeatureTraits_Feature_EnableFedSignInProForEdu>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			bool __private_IsEnabled();
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_FederatedAADWebSignInSV2>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_GIPKOR>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_HVSTest>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_HVSUSSHTest>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			bool __private_IsEnabled();
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_InputServiceLogon>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_InputServiceSecureDesktop>
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

		class FeatureImpl<__WilFeatureTraits_Feature_LockReliability_UnlockIfLockAppDidntShow>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_LogonUINoUpdateUserInput>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_MTestUx13>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			bool __private_IsEnabled(ReportingKind);
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_Servicing_36554195>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_Servicing_WebSignInSafeMode_31423222>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_TSF1Fallback>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_Tsf3ImeExperienceLogon>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_VTest>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_XamlKeyboardLogon>
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
			void SubscribeToEnabledStateChanges(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
			void SubscribeToUsageFlush(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *));
			~FeatureStateManager();
		};

		struct StagingFailureInformation
		{
			StagingFailureInformation(FailureInfo const &,DiagnosticsInfo const &,void *);
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
			bool Log_HrIfMsg(void *,unsigned int,char const *,long,bool,char const *,...);
			long Log_Hr(void *,unsigned int,char const *,long);
			long Log_IfFailedWithExpected(void *,unsigned int,char const *,long,unsigned int,...);
			long Return_GetLastError(void *,unsigned int,char const *);
			long Return_NtStatus(void *,unsigned int,char const *,long);
			long Return_Win32(void *,unsigned int,char const *,unsigned long);
			void FailFast_Hr(void *,unsigned int,char const *,long);
			void FailFast_Unexpected(void *,unsigned int,char const *);
			void Return_Hr(void *,unsigned int,char const *,long);
			void Return_HrMsg(void *,unsigned int,char const *,long,char const *,...);
			void _FailFastImmediate_Unexpected();
			void _FailFast_GetLastError(void *,unsigned int,char const *);
			void _FailFast_Unexpected(void *,unsigned int,char const *);
			void _Log_GetLastError(void *,unsigned int,char const *);
			void _Log_Hr(void *,unsigned int,char const *,long);
			void _Log_NtStatus(void *,unsigned int,char const *,long);
			void _Log_NullAlloc(void *,unsigned int,char const *);
			void _Log_Win32(void *,unsigned int,char const *,unsigned long);
		};

		struct lambda_call<<lambda_1bd91536940bf3b087998438d042a857> >
		{
			~lambda_call<<lambda_1bd91536940bf3b087998438d042a857> >();
		};

		struct registry_watcher_state
		{
			void Release();
			void ReleaseFromCallback(bool);
			~registry_watcher_state();
		};

		class shared_buffer
		{
			void assign(long *,unsigned __int64);
		public:
			bool create(void const *,unsigned __int64);
			void reset();
		};

		struct shared_object<ActivityBase<DatVPrepLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<DatVPrepLogging,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct shared_object<ActivityBase<InputTraceLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<InputTraceLogging,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct shared_object<ActivityBase<LogonControllerLogger,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LogonControllerLogger,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct shared_object<ActivityBase<LogonControllerLogger,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LogonControllerLogger,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct shared_object<ActivityBase<LogonControllerLogger,1,35184372088832,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LogonControllerLogger,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct shared_object<ActivityBase<LogonControllerLogger,1,70368744177664,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityData<LogonControllerLogger,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct shared_object<ActivityBase<WinLogonLogonUIRPCServerLogger,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WinLogonLogonUIRPCServerLogger,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct shared_object<ActivityBase<WinLogonLogonUIRPCServerLogger,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WinLogonLogonUIRPCServerLogger,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct shared_object<ActivityBase<WinLogonLogonUIRPCServerLogger,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WinLogonLogonUIRPCServerLogger,_TlgReflectorTag_Param0IsProviderType> >
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

		struct static_lazy<DatVPrepLogging>
		{
			struct Completer
			{
				~Completer();
			};

			DatVPrepLogging * get(void (*)());
		};

		struct static_lazy<DatVPrepTelemetry>
		{
			struct Completer
			{
				~Completer();
			};

			DatVPrepTelemetry * get(void (*)());
		};

		struct static_lazy<FeatureLogging>
		{
			struct Completer
			{
				~Completer();
			};

			FeatureLogging * get(void (*)());
		};

		struct static_lazy<InputTraceLogging>
		{
			struct Completer
			{
				~Completer();
			};

			InputTraceLogging * get(void (*)());
		};

		struct static_lazy<InputTraceLoggingTelemetry>
		{
			struct Completer
			{
				~Completer();
			};

			InputTraceLoggingTelemetry * get(void (*)());
		};

		namespace static_lazy<LogonControllerLogger>
		{
			struct Completer
			{
				~Completer();
			};

		};

		namespace static_lazy<LogonControllerTelemetry>
		{
			struct Completer
			{
				~Completer();
			};

		};

		struct static_lazy<WinLogonLogonUIRPCServerLogger>
		{
			struct Completer
			{
				~Completer();
			};

			WinLogonLogonUIRPCServerLogger * get(void (*)());
		};

		struct wnf_subscription_state<DwmWnfDiagnosticEvent::DwmDumpRequestPayload>
		{
			virtual ~wnf_subscription_state<DwmWnfDiagnosticEvent::DwmDumpRequestPayload>();
		};

		struct wnf_subscription_state<unsigned int>
		{
			virtual ~wnf_subscription_state<unsigned int>();
		};

		struct wnf_subscription_state<unsigned long>
		{
			virtual ~wnf_subscription_state<unsigned long>();
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
		details_abi::ProcessLocalStorage<details_abi::ProcessLocalData> g_processLocalData;
		details_abi::ThreadLocalStorage<details::ThreadFailureCallbackHolder *> * g_pThreadFailureCallbacks;
		details_abi::ThreadLocalStorage<details::ThreadFailureCallbackHolder *> g_threadFailureCallbacks;
		int RecordException(long);
		int RecordFailFast(long);
		int RecordLog(long);
		int RecordReturn(long);
		long (* ?? g_pfnRtlDisownModuleHeapAllocation)(void *,void *);
		long GetLastErrorFailHr();
		long HrToNtStatus(long);
		long NtStatusToHr(long);
		long ReportFailure_GetLastErrorHr<1>(void *,unsigned int,char const *,char const *,char const *,void *);
		long ReportFailure_NtStatus<1>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		long ReportFailure_NtStatus<2>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		long ReportFailure_Win32<1>(void *,unsigned int,char const *,char const *,char const *,void *,unsigned long);
		long ReportFailure_Win32<2>(void *,unsigned int,char const *,char const *,char const *,void *,unsigned long);
		long RtlDisownModuleHeapAllocation(void *,void *);
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
		unsigned long ReportFailure_GetLastError<2>(void *,unsigned int,char const *,char const *,char const *,void *);
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
		void MicrosoftInternalNotifyFailure(FailureInfo *);
		void PrintLoggingMessage(unsigned short *,unsigned __int64,char const *,char *);
		void RecordSRUMFeatureUsage(unsigned int,unsigned int,unsigned int);
		void ReleaseMutex(void *);
		void ReportFailure_Base<1,0>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Base<2,0>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Base<3,0>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Hr<1>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		void ReportFailure_Hr<2>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		void ReportFailure_Hr<3>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		void ReportFailure_HrMsg<1>(void *,unsigned int,char const *,char const *,char const *,void *,long,char const *,char *);
		void ReportFailure_HrMsg<2>(void *,unsigned int,char const *,char const *,char const *,void *,long,char const *,char *);
		void ReportFailure_NoReturn<3>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Return<1>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Return<2>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFeatureError(long,ThreadErrorContext &,unsigned int,DiagnosticsInfo const &);
		void ReportUsageToService(wil_details_FeatureReportingCache *,unsigned int,int,int,FEATURE_LOGGED_TRAITS const *,int,wil_ReportingKind,unsigned __int64);
		void Rethrow();
		void SetEvent(void *);
		void ThrowResultExceptionInternal(FailureInfo const &);
		void WilApiImpl_RecordFeatureError(unsigned int,FEATURE_ERROR const *);
		void WilApiImpl_RecordFeatureUsage(unsigned int,unsigned int,unsigned int,char const *);
		void WilApiImpl_SubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
		void WilApiImpl_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
		void WilApi_RecordFeatureUsage(unsigned int,unsigned int,unsigned int,char const *);
		void WilApi_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
		void WilDynamicLoadRaiseFailFastException(_EXCEPTION_RECORD *,_CONTEXT *,unsigned long);
		void WilFailFast(FailureInfo const &);
		void WilRaiseFailFastException(_EXCEPTION_RECORD *,_CONTEXT *,unsigned long);
		void delete_wnf_subscription_state(details::wnf_subscription_state_base *);
	};

	namespace details_abi
	{
		class FeatureStateData
		{
			void RetrieveUsageUnderLock(UsageIndexes &);
		public:
			bool RecordFeatureError(unsigned int,FEATURE_ERROR const &);
			bool RecordFeatureUsage(unsigned int,wil_details_ServiceReportingKind,unsigned __int64);
			void ProcessShutdown();
			void RecordUsage();
			~FeatureStateData();
		};

		struct ProcessLocalStorage<ProcessLocalData>
		{
			ProcessLocalData * GetShared();
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
			unsigned char * SkipValues(UsageIndexProperty &,unsigned char *);
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
			~SemaphoreValue();
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
		};

		struct ThreadLocalData
		{
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
			heap_buffer();
		};

		details_abi::ProcessLocalStorage<details_abi::ProcessLocalData> * g_pProcessLocalData;
		details_abi::ThreadLocalData * GetThreadLocalDataCache(bool);
		void RecordWnfUsageIndex(__WIL__WNF_STATE_NAME const *,unsigned __int64,details_abi::RawUsageIndex const &);
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
	long GetFailureLogString(unsigned short *,unsigned __int64,wil::FailureInfo const &);
	long wnf_query_nothrow<unsigned long>(_WNF_STATE_NAME const &,bool *,unsigned long *,wil::WNF_CHANGE_STAMP_STRUCT *);
	void SetLastError(wil::FailureInfo const &);
	void SetResultTelemetryFallback(void (*)(bool,wil::FailureInfo const &),...);
	wistd::unique_ptr<unsigned short [0],wil::cotaskmem_secure_deleter> make_cotaskmem_string_secure_nothrow(unsigned short const *);
};

namespace wistd
{
	struct __compressed_pair<void *,wil::process_heap_deleter>
	{
		wil::process_heap_deleter & second();
	};

	struct __compressed_pair<wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData> *,wil::process_heap_deleter>
	{
		wil::process_heap_deleter & second();
	};

	struct __compressed_pair_elem<wil::process_heap_deleter,1,1>
	{
		wil::process_heap_deleter & __get();
	};

	namespace __function
	{
		struct __func<<lambda_42d7dced1872ed24a4c1197da8e68253>,long (unsigned short *,unsigned __int64,unsigned __int64 *)>
		{
			virtual void __clone(__base<long (unsigned short *,unsigned __int64,unsigned __int64 *)> *);
			virtual void __move(__base<long (unsigned short *,unsigned __int64,unsigned __int64 *)> *);
			virtual void destroy();
		};

		struct __func<<lambda_6497e17d255ebb7b9d1d83bb767cc3dd>,void (DwmWnfDiagnosticEvent::DwmDumpRequestPayload const &)>
		{
			virtual void __clone(__base<void (DwmWnfDiagnosticEvent::DwmDumpRequestPayload const &)> *);
			virtual void __move(__base<void (DwmWnfDiagnosticEvent::DwmDumpRequestPayload const &)> *);
			virtual void destroy();
			virtual void operator()(DwmWnfDiagnosticEvent::DwmDumpRequestPayload const &);
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

	struct function<void ()>
	{
		~function<void ()>();
	};

	struct function<void (unsigned int const &)>
	{
		~function<void (unsigned int const &)>();
	};

	struct unique_ptr<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase,default_delete<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase> >
	{
		~unique_ptr<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase,default_delete<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreBase> >();
	};

	struct unique_ptr<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper,default_delete<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper> >
	{
		~unique_ptr<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper,default_delete<Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper> >();
	};

	struct unique_ptr<unsigned char,localmem_secure_deleter>
	{
		~unique_ptr<unsigned char,localmem_secure_deleter>();
	};

	struct unique_ptr<unsigned char,wil::cotaskmem_secure_deleter>
	{
		~unique_ptr<unsigned char,wil::cotaskmem_secure_deleter>();
	};

	struct unique_ptr<unsigned short [0],wil::cotaskmem_secure_deleter>
	{
		~unique_ptr<unsigned short [0],wil::cotaskmem_secure_deleter>();
	};

	struct unique_ptr<void,wil::cotaskmem_secure_deleter>
	{
		unique_ptr<void,wil::cotaskmem_secure_deleter><1,void>();
		~unique_ptr<void,wil::cotaskmem_secure_deleter>();
	};

	struct unique_ptr<void,wil::process_heap_deleter>
	{
		unique_ptr<void,wil::process_heap_deleter><1,void>();
		void reset(void *);
		wil::process_heap_deleter & get_deleter();
	};

	struct unique_ptr<wil::details::registry_watcher_state,default_delete<wil::details::registry_watcher_state> >
	{
		~unique_ptr<wil::details::registry_watcher_state,default_delete<wil::details::registry_watcher_state> >();
	};

	struct unique_ptr<wil::details::wnf_subscription_state<DwmWnfDiagnosticEvent::DwmDumpRequestPayload>,default_delete<wil::details::wnf_subscription_state<DwmWnfDiagnosticEvent::DwmDumpRequestPayload> > >
	{
		~unique_ptr<wil::details::wnf_subscription_state<DwmWnfDiagnosticEvent::DwmDumpRequestPayload>,default_delete<wil::details::wnf_subscription_state<DwmWnfDiagnosticEvent::DwmDumpRequestPayload> > >();
	};

	struct unique_ptr<wil::details::wnf_subscription_state<unsigned int>,default_delete<wil::details::wnf_subscription_state<unsigned int> > >
	{
		~unique_ptr<wil::details::wnf_subscription_state<unsigned int>,default_delete<wil::details::wnf_subscription_state<unsigned int> > >();
	};

	struct unique_ptr<wil::details::wnf_subscription_state<unsigned long>,default_delete<wil::details::wnf_subscription_state<unsigned long> > >
	{
		~unique_ptr<wil::details::wnf_subscription_state<unsigned long>,default_delete<wil::details::wnf_subscription_state<unsigned long> > >();
	};

	struct unique_ptr<wil::details::wnf_subscription_state<wil::details::empty_wnf_state>,default_delete<wil::details::wnf_subscription_state<wil::details::empty_wnf_state> > >
	{
		~unique_ptr<wil::details::wnf_subscription_state<wil::details::empty_wnf_state>,default_delete<wil::details::wnf_subscription_state<wil::details::empty_wnf_state> > >();
	};

	struct unique_ptr<wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>,wil::process_heap_deleter>
	{
		~unique_ptr<wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>,wil::process_heap_deleter>();
	};

	struct unique_ptr<wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>,wil::process_heap_deleter>
	{
		~unique_ptr<wil::details_abi::ProcessLocalStorageData<wil::details_abi::ProcessLocalData>,wil::process_heap_deleter>();
	};

};

CCicCategory * EnsureCicCategory(unsigned short *,_GUID const &);
CStructArray<tag_GUIDCATEGORYMAP> * g_pGuidCatMap;
CStructArray<tag_SKEYBOARDTOINSTALLITEM> * ParseItemString(unsigned short const *);
FEATURE_ENABLED_STATE (* g_wil_details_apiGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME,int *);
FEATURE_ENABLED_STATE (* g_wil_details_internalGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME,int *);
HINSTANCE__ * g_wil_details_kernelbaseModuleHandle;
HINSTANCE__ * g_wil_details_ntdllModuleHandle;
HINSTANCE__ * wil_details_GetKernelBaseModuleHandle();
HINSTANCE__ * wil_details_GetNtDllModuleHandle();
HKL__ * GetHKLFromLayout(unsigned short,unsigned long);
LibraryInitLock g_lockObject;
Microsoft::WRL::Details::CreatorMap const __object_CFirstSignInAnimation;
Microsoft::WRL::Details::CreatorMap const __object_CLockHost;
Microsoft::WRL::Details::CreatorMap const __object_CLogonController_COM;
Microsoft::WRL::Details::CreatorMap const __object_CMessageDisplayResult;
Microsoft::WRL::Details::CreatorMap const __object_CReportCredentialsData;
Microsoft::WRL::Details::CreatorMap const __object_CRequestCredentialData;
Microsoft::WRL::Details::CreatorMap const __object_SecurityOptionsResult;
Microsoft::WRL::Details::FactoryCache __objectFactory__CFirstSignInAnimation;
Microsoft::WRL::Details::FactoryCache __objectFactory__CLockHost;
Microsoft::WRL::Details::FactoryCache __objectFactory__CLogonController_COM;
Microsoft::WRL::Details::FactoryCache __objectFactory__CMessageDisplayResult;
Microsoft::WRL::Details::FactoryCache __objectFactory__CReportCredentialsData;
Microsoft::WRL::Details::FactoryCache __objectFactory__CRequestCredentialData;
Microsoft::WRL::Details::FactoryCache __objectFactory__SecurityOptionsResult;
SJpegQuantizationTable const * const JpegQuantizationTables;
SharedModeType GetSharedModeType();
Windows::Internal::UI::Logon::Controller::LogonUIFlags WluiFlagsToLogonFlags(_WLUI_REQUEST_FLAGS);
Windows::Internal::UI::Logon::Controller::LogonUIRequestReason WluiRequestReasonToLogonReason(_WLUI_REQUEST_REASON);
_GUID GetFirstRunTelemetryCorrelationId();
_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
_PROVIDER_DATA gProvData;
_RTL_CRITICAL_SECTION g_csCicCategory;
_RTL_RESOURCE g_EvalLock;
__type_info_node __type_info_root_node;
bool EnsureBcp47LangsLibraryIsLoaded();
bool EnsureKernel32LibraryIsLoaded();
bool GetCurrentUserSid(void * *);
bool IsAutoLogonAfterCredentialReset();
bool IsFirstLogonAfterOOBE();
bool IsPreserveSystemAutoLogonSettingRequired();
bool IsSharedPCMode();
bool IsUserLoggedOn();
bool IsUserOOBE();
bool IsWin10S();
bool IsWindowsVersionOrGreaterEx(unsigned short,unsigned short,unsigned short,unsigned short);
bool _AreEASPoliciesBeingEnforced();
bool _IsSystemConfiguredAutoLogon();
bool _tlgGuidIsZero(_GUID const &);
bool g_fInitCritSec;
int ActivateInputProfileWorker(unsigned short const *);
int CLSIDToStringW(_GUID const &,unsigned short *);
int GetTipCategory(unsigned short *,_GUID const &,_GUID *);
int HexStringToDword(unsigned short const * &,unsigned long &,int,unsigned short);
int InlineIsEqualGUID(_GUID const &,_GUID const &);
int InstallLayoutOrTipPrivateWorker(unsigned short const *,unsigned long);
int IsDebuggerPresent(void *);
int IsOS_OS_ANYSERVER();
int IsUserNgcEnrolled(unsigned short const *);
int SHRegValueExists(HKEY__ *,unsigned short const *,unsigned long *);
int SafeCloseHandle(void * *);
int StringToCLSID(unsigned short const *,_GUID *);
int g_bInitialized;
int wil_RtlStagingConfig_QueryFeatureState(wil_FeatureState *,unsigned int,int,int *);
long (* g_wil_details_pfnNtQueryWnfStateData)(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long (* g_wil_details_pfnNtUpdateWnfStateData)(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long AddFrameToWICBitmap(IWICImagingFactory *,IWICBitmapEncoder *,IWICBitmapSource *,_GUID,EncodingOptions);
long CallCloudAPPackage(unsigned long,unsigned char *,unsigned long *,void * *);
long Convert32bppIWICBitmapSourceToHBITMAP(IWICBitmapSource *,HBITMAP__ * *);
long ConvertHBITMAPToWICBitmap(IWICImagingFactory *,HBITMAP__ *,WICBitmapAlphaChannelOption,IWICBitmapSource * *);
long ConvertIWICBitmapSourcePixelFormat(IWICBitmapSource *,_GUID,IWICImagingFactory *,IWICBitmapSource * *);
long ConvertIWICBitmapSourceTo32bppHBITMAP(IWICBitmapSource *,IWICImagingFactory *,HBITMAP__ * *);
long ConvertWICBitmapPixelFormat(IWICImagingFactory *,IWICBitmapSource *,_GUID,WICBitmapDitherType,IWICBitmapSource * *);
long Create32BitHBITMAP(HDC__ *,tagSIZE const *,void * *,HBITMAP__ * *);
long CreateBitmapFromIcon(HICON__ *,int,int,tagSIZE const *,HBITMAP__ * *);
long CreateBitmapFromIconWithAlpha(HICON__ *,int,HBITMAP__ * *);
long EnsureSystemDataRegistryKeyForUser(unsigned short const *,unsigned short const *,SYSTEM_DATA_REGKEY_USER_ACCESS);
long FireOOBEMonitorEvent(OOBEMonitorEvent);
long GetCurrentSessionUserSid(unsigned short * *);
long GetLockAppAndAppType(unsigned short const *,bool,HKEY__ *,bool,LockAppType *,unsigned short * *);
long GetNegoAuthPackageId(unsigned long *);
long GetStreamFromHBITMAP(HBITMAP__ *,BITMAP_VERSION,WTS_STREAMTYPE *,_GUID const &,void * *);
long GetStreamOfWICBitmapSourceWithOptions(IWICImagingFactory *,IWICBitmapSource *,_GUID const &,_GUID,EncodingOptions,IStream * *);
long GetUserNgcWasEnrolled(unsigned short const *,int *);
long GetUserNgcWasEnrolledRegKey(unsigned short const *,int *);
long HRESULTFromLastErrorError();
long HasAccountBeenTriggeredForLocalPasswordLess(unsigned short const *,int *);
long IUnknown_GetServerProcessHandle(IUnknown *,unsigned long,void * *);
long InvokeWithRPCTimeout(void *,long (*)(void *),void *);
long IsAccountCloudPasswordLess(unsigned short const *,int *);
long IsAccountCloudPasswordLessInternal(void * const,_LSA_USER_ACCOUNT_TYPE,int *);
long IsAccountLocalPasswordLess(unsigned short const *,int *);
long IsAccountLocalPasswordLessCandidate(unsigned short const *,int *);
long KerbInteractiveUnlockLogonPack(_KERB_INTERACTIVE_UNLOCK_LOGON const &,unsigned char * *,unsigned long *);
long LaunchFirstLogonAnimationProcess(LogonAnimationFlags,_PROCESS_INFORMATION *);
long OS_DCompositionCreateDevice(IDXGIDevice *,IDCompositionDevice * *,HINSTANCE__ *);
long OS_DCompositionCreateDevice2(IDXGIDevice *,IDCompositionDevice * *,HINSTANCE__ *);
long PlaceCleanContainerFile(unsigned short const *);
long ProcessProfileFolder(unsigned short const *,unsigned short const *);
long ProcessSecondaryFiles(unsigned short const *);
long QueryDevicePasswordLessBuildVersion(DevicePasswordLessBuildVersion *);
long QueryDevicePasswordLessData(PasswordLessDataType,unsigned long *);
long ReadSystemDataRegistryDWORDForUser(void *,unsigned short const *,unsigned short const *,SYSTEM_DATA_REGKEY_USER_ACCESS,unsigned long *);
long RegOpenSessionDataKey(unsigned long,unsigned long,HKEY__ * *);
long ResultFromKnownLastError();
long ResultFromWin32Handle(void *,void * *);
long RtlStringCchCopyUnicodeString(unsigned short *,unsigned __int64,_UNICODE_STRING const *);
long SHRegAllocData(HKEY__ *,unsigned short const *,unsigned short const *,int,void * *,unsigned long *);
long SHRegGetBOOLWithREGSAM(HKEY__ *,unsigned short const *,unsigned short const *,unsigned long,int *);
long SHRegGetDWORD(HKEY__ *,unsigned short const *,unsigned short const *,unsigned long *);
long SHRegSetBOOL(HKEY__ *,unsigned short const *,unsigned short const *,int);
long SHRegSetString(HKEY__ *,unsigned short const *,unsigned short const *,unsigned short const *);
long SetDevicePasswordLessData(PasswordLessDataType,unsigned long);
long SetJpegQuantizationTableOptions(JpegQuantizationTableTypes,IPropertyBag2 *);
long SetUserNgcWasEnrolledRegKey(unsigned short const *);
long StringCbCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCopyA(char *,unsigned __int64,char const *);
long StringCchCopyNExW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64,unsigned short * *,unsigned __int64 *,unsigned long);
long StringCchCopyNW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64);
long StringCchCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long StringCchVPrintfW(unsigned short *,unsigned __int64,unsigned short const *,char *);
long StringToHString(unsigned short const *,HSTRING__ * *);
long ULongLongMult(unsigned __int64,unsigned __int64,unsigned __int64 *);
long UnicodeStringStringHijack(unsigned short const *,_UNICODE_STRING *);
long ValidateLockAppHasExtension(unsigned short const *,unsigned short const *);
long WaitForCompletion<Windows::Foundation::IAsyncActionCompletedHandler,Windows::Foundation::IAsyncAction>(Windows::Foundation::IAsyncAction *,tagCOWAIT_FLAGS,void *);
long WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING__ *>,Windows::Foundation::IAsyncOperation<HSTRING__ *> >(Windows::Foundation::IAsyncOperation<HSTRING__ *> *,tagCOWAIT_FLAGS,void *);
long WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Logon::Controller::LogonUISecurityOptionsResult *>,Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Logon::Controller::LogonUISecurityOptionsResult *> >(Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Logon::Controller::LogonUISecurityOptionsResult *> *,tagCOWAIT_FLAGS,void *);
long WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Logon::Controller::MessageDisplayResult *>,Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Logon::Controller::MessageDisplayResult *> >(Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Logon::Controller::MessageDisplayResult *> *,tagCOWAIT_FLAGS,void *);
long WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Logon::Controller::ReportCredentialsData *>,Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Logon::Controller::ReportCredentialsData *> >(Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Logon::Controller::ReportCredentialsData *> *,tagCOWAIT_FLAGS,void *);
long WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Logon::Controller::RequestCredentialsData *>,Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Logon::Controller::RequestCredentialsData *> >(Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Logon::Controller::RequestCredentialsData *> *,tagCOWAIT_FLAGS,void *);
long WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Logon::Controller::TerminalServiceDisconnectResult *>,Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Logon::Controller::TerminalServiceDisconnectResult *> >(Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Logon::Controller::TerminalServiceDisconnectResult *> *,tagCOWAIT_FLAGS,void *);
long WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<unsigned int>,Windows::Foundation::IAsyncOperation<unsigned int> >(Windows::Foundation::IAsyncOperation<unsigned int> *,tagCOWAIT_FLAGS,void *);
long WeakRefAs<Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Internal::UI::Logon::Controller::IUnlockTrigger> > >(Microsoft::WRL::WeakRef const &,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Internal::UI::Logon::Controller::IUnlockTrigger> >);
long WeakRefAs<Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Internal::UI::Logon::Controller::IWebDialogDismissTrigger> > >(Microsoft::WRL::WeakRef const &,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Internal::UI::Logon::Controller::IWebDialogDismissTrigger> >);
long _AllocArray<unsigned short,CTCoAllocPolicy>(void *,unsigned long,unsigned __int64,unsigned short * *);
long _AllocStringWorker<CTCoAllocPolicy>(void *,unsigned long,unsigned short const *,unsigned __int64,unsigned __int64,unsigned short * *);
long _CreateRedirector(ILogonErrorRedirector * *);
long _CreateRegKeyWithSDDL(HKEY__ *,unsigned short const *,unsigned short const *,SYSTEM_DATA_REGKEY_USER_ACCESS,bool,HKEY__ * *);
long _DoDatVPrepRS();
long _DoesBitmapHaveAlpha(HBITMAP__ *,bool *);
long _EncryptAndMarshal(unsigned short const *,unsigned short * *);
long _EncryptOrDecryptSspiAuthenticationBuffer(bool,unsigned char *,unsigned long,unsigned char * *,unsigned long *);
long _GetRedirectorClsidFromTS(_GUID *);
long _LockStore(int,void * *);
long _ParsePolicies(unsigned long,_tagEASPolicy *,_tagPasswordPolicies *,unsigned long *,unsigned long *,int *);
long _ReadPolicies(void *,unsigned long *,_tagEASPolicy * *);
long _RegValueToVariant(unsigned long,unsigned long,unsigned char const *,tagPROPVARIANT *);
long _ScaleBitmap(HBITMAP__ *,unsigned int,HBITMAP__ * *);
long _WriteSystemDataRegistryDWORDForUser(void *,unsigned short const *,unsigned short const *,SYSTEM_DATA_REGKEY_USER_ACCESS,unsigned long,bool);
long _myVariantClear(tagPROPVARIANT *);
long wil_RtlStagingConfig_RecordFeatureUsage(unsigned int,unsigned int,int);
long wil_details_NtQueryWnfStateData(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long wil_details_NtUpdateWnfStateData(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long wil_details_RtlRegisterFeatureConfigurationChangeNotification(void (*)(void *),void *,unsigned __int64 *,void * *);
long wil_details_WriteSRUMWnfUsageBuffer(wil::details_abi::heap_vector<wil_details_FeatureUsageSRUM> *);
unsigned long DefaultDesktopThreadProc(void *);
unsigned long ReadFromRegistry(unsigned short * const);
unsigned long TransNum(unsigned short const *,unsigned short const * *);
unsigned long _RegSetKeyValueWithSDDL(HKEY__ *,unsigned short const *,unsigned short const *,unsigned long,void const *,unsigned long,_SECURITY_ATTRIBUTES *);
unsigned long g_dwRefCount;
unsigned long volatile g_lCicCategoryInstanceCount;
unsigned short const * GetStringName(PasswordLessDataType);
unsigned short const * StringToCLSIDNonNullTerminate(unsigned short const *,_GUID *);
unsigned short const * const FSIAAsyncAction;
unsigned short const * const LogoffSoundAction;
unsigned short const * const RuntimeClass_Windows_Foundation_Diagnostics_AsyncCausalityTracer;
unsigned short const * const RuntimeClass_Windows_Internal_AssignedAccess_AssignedAccessManager;
unsigned short const * const RuntimeClass_Windows_Internal_SystemManagedAccount_Logon_SystemManagedAccountCredential;
unsigned short const * const RuntimeClass_Windows_Internal_UI_Logon_Controller_BioFeedbackUX;
unsigned short const * const RuntimeClass_Windows_Internal_UI_Logon_Controller_BlockedShutdownResolverUX;
unsigned short const * const RuntimeClass_Windows_Internal_UI_Logon_Controller_ConsoleBlockedShutdownResolver;
unsigned short const * const RuntimeClass_Windows_Internal_UI_Logon_Controller_ConsoleLockScreen;
unsigned short const * const RuntimeClass_Windows_Internal_UI_Logon_Controller_ConsoleLogonUX;
unsigned short const * const RuntimeClass_Windows_Internal_UI_Logon_Controller_FirstSignInAnimation;
unsigned short const * const RuntimeClass_Windows_Internal_UI_Logon_Controller_LockAction;
unsigned short const * const RuntimeClass_Windows_Internal_UI_Logon_Controller_LockScreenHost;
unsigned short const * const RuntimeClass_Windows_Internal_UI_Logon_Controller_LogonUISecurityOptionsResult;
unsigned short const * const RuntimeClass_Windows_Internal_UI_Logon_Controller_LogonUX;
unsigned short const * const RuntimeClass_Windows_Internal_UI_Logon_Controller_MessageDisplayResult;
unsigned short const * const RuntimeClass_Windows_Internal_UI_Logon_Controller_PPILogonUX;
unsigned short const * const RuntimeClass_Windows_Internal_UI_Logon_Controller_ReportCredentialsData;
unsigned short const * const RuntimeClass_Windows_Internal_UI_Logon_Controller_RequestCredentialsData;
unsigned short const * const RuntimeClass_Windows_Internal_UI_Logon_Controller_SecureLockAction;
unsigned short const * const RuntimeClass_Windows_Internal_UI_Logon_Controller_ShutdownBlockingApp;
unsigned short const * const RuntimeClass_Windows_Internal_UI_Logon_Controller_TerminalServiceSessionPickerUX;
unsigned short const * const RuntimeClass_Windows_Internal_UI_Logon_Controller_WebDialogAction;
unsigned short const * const RuntimeClass_Windows_Internal_UI_Logon_CredProvData_CredProvDataModel;
unsigned short const * const RuntimeClass_Windows_System_Profile_EducationSettings;
unsigned short const * const RuntimeClass_lockframework_LockFrameworkBroker;
unsigned short const * const c_WebDialogAsyncAction;
unsigned short const * const c_retailDemoKeyOobeWrite;
unsigned short const * const c_retailDemoValueEnabled;
unsigned short const * const c_szCLSID;
unsigned short const * const c_szCategory;
unsigned short const * const c_szCtfTip;
unsigned short const * const c_szDependentProfileForEnabling;
unsigned short const * const c_szEnable;
unsigned short const * const c_szHiddenDummyLayoutsKey;
unsigned short const * const c_szKeyboardLayout;
unsigned short const * const c_szLangId;
unsigned short const * const c_szLanguageProfile;
unsigned short const * const c_szPreload;
unsigned short const * const c_szPreloadTest;
unsigned short const * const c_szProfile;
unsigned short const * const c_szSoftwareCtfTip;
unsigned short const * const c_szSortOrderAssemblyItem;
unsigned short const * const c_szSortOrderLanguage;
unsigned short const * const c_szSubstituteLayout;
unsigned short const * const c_szSubstitutes;
unsigned short const * const c_szSubstitutesTest;
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
void * * IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAudioPlayer> >(Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IAudioPlayer> >);
void * * IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAudioPlayerFacade> >(Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IAudioPlayerFacade> >);
void * operator new(unsigned __int64);
void * operator new(unsigned __int64,std::nothrow_t const &);
void * operator new[](unsigned __int64,std::nothrow_t const &);
void DbgPrintfW(unsigned long,unsigned short const *,...);
void LogIsAccountPasswordless(unsigned short const *,int,unsigned long,long);
void TlgAggregateInternalProviderCallback(_GUID const *,unsigned long,unsigned char,unsigned __int64,unsigned __int64,_EVENT_FILTER_DESCRIPTOR *,void *);
void TlgAggregateInternalRegisteredProviderEtwCallback(_GUID const *,unsigned long,unsigned char,unsigned __int64,unsigned __int64,_EVENT_FILTER_DESCRIPTOR *,void *);
void _FreePolicies(unsigned long,_tagEASPolicy *);
void _UpdateAutologonSID();
void __ArrayUnwind(void *,unsigned __int64,unsigned __int64,void (*)(void *));
void __scrt_initialize_type_info();
void __scrt_throw_std_bad_alloc();
void __scrt_throw_std_bad_array_new_length();
void __scrt_uninitialize_type_info();
void _tlgWriteActivityAutoStop<0,5>(_tlgProvider_t const *,_GUID const *);
void _tlgWriteActivityAutoStop<35184372088832,5>(_tlgProvider_t const *,_GUID const *);
void _tlgWriteActivityAutoStop<70368744177664,5>(_tlgProvider_t const *,_GUID const *);
void operator delete(void *);
void operator delete(void *,unsigned __int64);
void operator delete[](void *);
void operator delete[](void *,unsigned __int64);
void s_LoadUserColors(unsigned short const *,bool *,IMMERSIVE_COLOR_PREFERENCE *,int *,unsigned long *,unsigned int *,unsigned int);
void wil_StagingConfig_LogStagedFeatureUsage(unsigned int,unsigned int,unsigned char);
void wil_details_FeatureReporting_IncrementOpportunityInCache(wil_details_FeatureReportingCache *,wil_details_ServiceReportingKind,unsigned int,wil_details_RecordUsageResult *);
void wil_details_FeatureReporting_IncrementUsageInCache(wil_details_FeatureReportingCache *,wil_details_ServiceReportingKind,unsigned int,wil_details_RecordUsageResult *);
wil_details_RecordUsageResult wil_details_FeatureReporting_RecordUsageInCache(wil_details_FeatureReportingCache *,wil_details_ServiceReportingKind,unsigned int,unsigned int);
