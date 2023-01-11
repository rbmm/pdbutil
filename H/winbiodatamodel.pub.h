struct <lambda_0233246d2c2a21939103a87218a4ff18>
{
	long operator()();
};

class <lambda_0374aa0a5d1201b2358c6bce99369c58>
{
	static <lambda_invoker_cdecl>(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
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

class <lambda_5f1dd388c03885d19ee806198d2ac5ef>
{
	static int <lambda_invoker_cdecl>(_RTL_RUN_ONCE *,void *,void * *);
};

struct <lambda_888b9e124e0e320b4fef27b4a0a4ff88>
{
	long operator()();
};

class <lambda_a14e49ce427a1853f087bba834558a2c>
{
	static long <lambda_invoker_cdecl>(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
};

class <lambda_aa194dc0bf891154933407eb98fb868a>
{
	static <lambda_invoker_cdecl>(void *);
};

class <lambda_b96c4bdfce3f93d6d1f75ab6011aa178>
{
	static long <lambda_invoker_cdecl>(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
};

struct <lambda_d238da5d5fe11907b879177da7308094>
{
	operator()();
};

class <lambda_d2e8a5c1635eae93043c5ac85e166060>
{
	static <lambda_invoker_cdecl>();
};

class <lambda_d51448ba32f8ef42e59400edd4566183>
{
	static <lambda_invoker_cdecl>(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
};

struct <lambda_efb10ec704eb3d3cf689e1db449700fb>
{
	operator()();
};

class <lambda_fc95286691617d48d351d068b91491d9>
{
	static <lambda_invoker_cdecl>();
};

class <lambda_fee8cea507d2413a58be13acfb66740a>
{
	static <lambda_invoker_cdecl>(void *);
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
			long OpenTokenForProcess(void *,void * *);
			void CloseToken(void *);
		};

	};

	_TOKEN_SECURITY_ATTRIBUTES_INFORMATION * Allocate<_TOKEN_SECURITY_ATTRIBUTES_INFORMATION>(unsigned __int64);
	void Free(void *);
};

struct AgileGitPtr
{
	long CopyLocal(_GUID const &,void * *);
};

struct AutoStubBias<IUnknown,Windows::Internal::INilDelegate>
{
	~AutoStubBias<IUnknown,Windows::Internal::INilDelegate>();
};

struct AutoStubBias<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler>
{
	~AutoStubBias<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler>();
};

struct AutoStubBias<Windows::Foundation::IAsyncOperation<Windows::Internal::SecurityKeyEnrollment::SecurityKeyContext *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::SecurityKeyEnrollment::SecurityKeyContext *> >
{
	~AutoStubBias<Windows::Foundation::IAsyncOperation<Windows::Internal::SecurityKeyEnrollment::SecurityKeyContext *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::SecurityKeyEnrollment::SecurityKeyContext *> >();
};

struct AutoStubBias<Windows::Foundation::IAsyncOperation<Windows::Internal::SecurityKeyEnrollment::SecurityKeyFingerprintEnrollmentResult *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::SecurityKeyEnrollment::SecurityKeyFingerprintEnrollmentResult *> >
{
	~AutoStubBias<Windows::Foundation::IAsyncOperation<Windows::Internal::SecurityKeyEnrollment::SecurityKeyFingerprintEnrollmentResult *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::SecurityKeyEnrollment::SecurityKeyFingerprintEnrollmentResult *> >();
};

struct AutoStubBias<Windows::Foundation::IAsyncOperation<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::SecurityKeyPinOperationInfo *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::SecurityKeyPinOperationInfo *> >
{
	~AutoStubBias<Windows::Foundation::IAsyncOperation<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::SecurityKeyPinOperationInfo *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::SecurityKeyPinOperationInfo *> >();
};

struct AutoStubBias<Windows::Foundation::IAsyncOperation<Windows::Internal::UI::BioEnrollment::DataModel::UserVerificationInfo *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::BioEnrollment::DataModel::UserVerificationInfo *> >
{
	~AutoStubBias<Windows::Foundation::IAsyncOperation<Windows::Internal::UI::BioEnrollment::DataModel::UserVerificationInfo *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::BioEnrollment::DataModel::UserVerificationInfo *> >();
};

struct AutoStubBias<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool> >
{
	~AutoStubBias<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool> >();
};

class BaseEnrollmentManager
{
	long _PostOpenSessionInitialization();
	long _VerifyUserBackgroundProc(HWND__ *,Windows::Internal::CMarshaledInterfaceResult<Windows::Internal::UI::BioEnrollment::DataModel::IUserVerificationInfo> &);
	void _StopEnrollingActivity(bool,bool);
protected:
	long _CancelEnrollmentInternal(bool);
	long _DisplayCatastrophicError(long);
	long _EnrollDiscard(unsigned long);
	long _GetSelectedSensorSubtype(unsigned long *);
	long _HStringFromResource(unsigned int,HSTRING__ * *);
	long _InvokeEnrollmentCompleted();
	long _InvokeEnrollmentError(long);
	long _InvokeEnrollmentPhaseReset();
	long _InvokeUnderHandleLock(std::function<long (unsigned long,unsigned long)>);
	long _OnEnumerationComplete(_WINBIO_ASYNC_RESULT const *);
	long _OpenWinbioSessionAndFramework();
	long _SetSelectedSensorUnit(unsigned long);
	unsigned char _GetBiometricSubType();
	unsigned long _GetSelectedSensorUnitId();
	virtual long v_CancelEnrollment();
	virtual long v_OnEnrollmentCompleted();
	virtual long v_OnEnumerationComplete(long);
	virtual long v_OnError(long);
	virtual long v_ProcessAsyncResult(_WINBIO_ASYNC_RESULT const *,bool *);
	virtual long v_SetSelectedSensorUnit(unsigned long);
	virtual long v_StartEnrollment();
	virtual long v_StartIdentify();
	virtual void v_StopEnrollingActivity(bool,bool);
	virtual ~BaseEnrollmentManager();
	void _CloseWinbioSessionAndFramework(bool);
	void _ReleaseWinBioResources(bool);
	void _SetBiometricSubType(unsigned char);
public:
	BaseEnrollmentManager();
	long Initialize(Windows::Internal::UI::BioEnrollment::DataModel::IUIThreadEventDispatcher *,Windows::Internal::UI::BioEnrollment::DataModel::EnrollmentKind,Windows::Internal::UI::BioEnrollment::DataModel::EnrollmentContext);
	virtual long CancelEnrollment();
	virtual long ProcessAsyncResult(_WINBIO_ASYNC_RESULT const *);
	virtual long StartEnrollment();
	virtual long StartIdentify();
	virtual long VerifyUserAsync(Windows::Foundation::IAsyncOperation<Windows::Internal::UI::BioEnrollment::DataModel::UserVerificationInfo *> * *);
	virtual long add_EnrollmentCompleted(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSession *,IInspectable *> *,EventRegistrationToken *);
	virtual long add_EnrollmentError(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSession *,Windows::Internal::UI::BioEnrollment::DataModel::SuspendErrorStateInfo *> *,EventRegistrationToken *);
	virtual long add_EnrollmentPhaseReset(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSession *,IInspectable *> *,EventRegistrationToken *);
	virtual long get_EnrollmentContext(Windows::Internal::UI::BioEnrollment::DataModel::EnrollmentContext *);
	virtual long get_EnrollmentInProgress(unsigned char *);
	virtual long remove_EnrollmentCompleted(EventRegistrationToken);
	virtual long remove_EnrollmentError(EventRegistrationToken);
	virtual long remove_EnrollmentPhaseReset(EventRegistrationToken);
};

struct BiasHelper<IUnknown,Windows::Internal::INilDelegate,1>
{
	static AutoStubBias<IUnknown,Windows::Internal::INilDelegate> CreateBias(IRpcOptions *,IUnknown *,Windows::Internal::INilDelegate *);
};

struct BiasHelper<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,1>
{
	static AutoStubBias<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler> CreateBias(IRpcOptions *,Windows::Foundation::IAsyncAction *,Windows::Foundation::IAsyncActionCompletedHandler *);
};

class BioEnrollBroker
{
	long GetModalExperienceManagerDesktop(Windows::Internal::Shell::ModalExperience::IModalWindowExperienceManager * *);
	long GetModalExperienceManagerMobile(Windows::Internal::Shell::ModalExperience::IModalWindowExperienceManager * *);
	long ShowAsyncThreadProc(Windows::Internal::AsyncStage,long,Windows::Internal::CBasicResult<Windows::Internal::UI::BioEnrollment::DataModel::EnrollmentReturnResult,2> &,BioEnrollmentInstance *);
	long ShowEnrollmentBaseAsync(Windows::Internal::UI::BioEnrollment::DataModel::EnrollmentKind,Windows::Internal::UI::BioEnrollment::DataModel::EnrollmentStyle,Windows::Foundation::Rect,Windows::Internal::UI::BioEnrollment::DataModel::EnrollmentContext,unsigned int,Windows::Foundation::IAsyncOperation<Windows::Internal::UI::BioEnrollment::DataModel::EnrollmentReturnResult> * *);
public:
	static TrustLevel InternalGetTrustLevel();
	static unsigned short const * InternalGetRuntimeClassName();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ShowEnrollmentAsync(Windows::Internal::UI::BioEnrollment::DataModel::EnrollmentKind,Windows::Internal::UI::BioEnrollment::DataModel::EnrollmentContext,unsigned int,Windows::Foundation::IAsyncOperation<Windows::Internal::UI::BioEnrollment::DataModel::EnrollmentReturnResult> * *);
	virtual long ShowOOBEEnrollmentAsync(Windows::Internal::UI::BioEnrollment::DataModel::EnrollmentKind,Windows::Internal::UI::BioEnrollment::DataModel::EnrollmentStyle,Windows::Foundation::Rect,Windows::Internal::UI::BioEnrollment::DataModel::EnrollmentContext,unsigned int,Windows::Foundation::IAsyncOperation<Windows::Internal::UI::BioEnrollment::DataModel::EnrollmentReturnResult> * *);
	virtual long UpdateWindowLocation(Windows::Foundation::Rect);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct BioEnrollRetailDemo
{
	static TrustLevel InternalGetTrustLevel();
	static unsigned short const * InternalGetRuntimeClassName();
	virtual long AddPinCredentialToDemoAccount();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class BioEnrollmentInstance
{
	long CleanupTemplates();
	long CleanupTemplatesForConsistency();
	long DismissAndComplete(bool,bool);
	long HandleExternalClose();
public:
	BioEnrollmentInstance();
	long RuntimeClassInitialize(bool,Windows::Internal::UI::BioEnrollment::DataModel::EnrollmentStyle,Windows::Internal::UI::BioEnrollment::DataModel::EnrollmentKind,Windows::Foundation::Rect,Windows::Internal::UI::BioEnrollment::DataModel::EnrollmentContext,unsigned int,Windows::Internal::Shell::ModalExperience::IModalWindowExperienceManager *);
	long Start(Windows::Internal::AsyncDeferral<Windows::Internal::CBasicResult<Windows::Internal::UI::BioEnrollment::DataModel::EnrollmentReturnResult,2> >);
	virtual long Complete(unsigned char,unsigned char);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long Invoke(Windows::Internal::Shell::ModalExperience::IModalWindowExperienceManager *,Windows::Internal::Shell::ModalExperience::IModalExperienceEventArgs *);
	virtual long OnBiometricCommitted();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long add_CloseRequested(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::Broker::BioEnrollmentActivationArgs *,IInspectable *> *,EventRegistrationToken *);
	virtual long get_Arguments(HSTRING__ * *);
	virtual long get_EnrollmentContext(Windows::Internal::UI::BioEnrollment::DataModel::EnrollmentContext *);
	virtual long get_EnrollmentKind(Windows::Internal::UI::BioEnrollment::DataModel::EnrollmentKind *);
	virtual long get_EnrollmentStyle(Windows::Internal::UI::BioEnrollment::DataModel::EnrollmentStyle *);
	virtual long get_IsMobileSKU(unsigned char *);
	virtual long get_TileId(HSTRING__ * *);
	virtual long remove_CloseRequested(EventRegistrationToken);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~BioEnrollmentInstance();
};

class CActivatedEventArgsBase
{
	virtual long v_GetActivationKind(HSTRING__ *,Windows::ApplicationModel::Activation::ActivationKind *);
protected:
	virtual ~CActivatedEventArgsBase();
public:
	CActivatedEventArgsBase();
	virtual long Initialize(unsigned __int64,HSTRING__ *,Windows::ApplicationModel::Activation::ApplicationExecutionState,unsigned char,unsigned char,unsigned __int64,_GUID);
	virtual long InitializeViewDependent(Windows::ApplicationModel::Activation::ApplicationExecutionState,int,Windows::ApplicationModel::Activation::ISplashScreen *,unsigned char);
	virtual long get_ActivationManagerActivityId(_GUID *);
	virtual long get_ActivationManagerId(unsigned __int64 *);
	virtual long get_ActivationValueSetReference(IInspectable * *);
	virtual long get_IsForegroundActivation(unsigned char *);
	virtual long get_IsHolographic(unsigned char *);
	virtual long get_Kind(Windows::ApplicationModel::Activation::ActivationKind *);
	virtual long get_PreviousExecutionState(Windows::ApplicationModel::Activation::ApplicationExecutionState *);
	virtual long get_SplashScreen(Windows::ApplicationModel::Activation::ISplashScreen * *);
	virtual long get_User(Windows::System::IUser * *);
	virtual long get_UserContext(unsigned __int64 *);
	virtual long put_ActivationValueSetReference(IInspectable *);
	virtual long put_UserContext(unsigned __int64);
};

class CActivatedEventArgsWithViewIdBase
{
protected:
	virtual ~CActivatedEventArgsWithViewIdBase();
public:
	CActivatedEventArgsWithViewIdBase();
	virtual long get_ActivationViewSwitcher(Windows::UI::ViewManagement::IActivationViewSwitcher * *);
	virtual long get_CurrentlyShownApplicationViewId(int *);
	virtual long get_Properties(Windows::ApplicationModel::Activation::MultiviewActivationProperties *);
	virtual long get_ViewSwitcher(Windows::UI::ViewManagement::IActivationViewSwitcher * *);
	virtual long put_ActivationViewSwitcher(Windows::UI::ViewManagement::IActivationViewSwitcher *);
	virtual long put_Properties(Windows::ApplicationModel::Activation::MultiviewActivationProperties);
};

class CMarshaledInterface
{
	long _Unmarshal(_GUID const &,void * *,bool);
};

class CTCoAllocPolicy
{
	static unsigned __int64 _CoTaskMemSize(void *);
};

struct CTSimpleArray<_WINBIO_UNIT_SCHEMA,4294967294,CTPolicyCoTaskMem<_WINBIO_UNIT_SCHEMA>,CSimpleArrayStandardCompareHelper<_WINBIO_UNIT_SCHEMA>,CSimpleArrayStandardMergeHelper<_WINBIO_UNIT_SCHEMA> >
{
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
};

namespace CallerIdentity
{
	bool g_fRuntimeBrokerProcessIdInitialize;
	long CheckCallerCapability(unsigned short const *,bool *);
	long CheckCapabilityFromImpersonationToken(void *,unsigned short const *,bool *);
	long CheckCapabilityFromProcessHandle(void *,unsigned short const *,bool *);
	long GetCallingProcessAppId(unsigned short * *);
	long GetCallingProcessHandle(unsigned long,RUNTIMEBROKER_CALLERIDENTITY_CHECK,void * *);
	long GetCallingProcessHandle(unsigned long,void * *);
	long GetCoreApplicationForCallingProcess(_GUID const &,void * *);
	long GetCoreWindowForCallingThread(_GUID const &,void * *);
	long GetCoreWindowForCurrentThread(_GUID const &,void * *);
	long GetCoreWindowHandleForCallingThread(HWND__ * *);
	long GetCoreWindowHandleForCurrentThread(HWND__ * *);
	long GetImpersonationTokenFromProcess(void *,unsigned long,void * *);
	long GetProcessAppId(void *,unsigned short * *);
	long IsProcessAppContainer(void *,bool *);
	unsigned long g_dwRuntimeBrokerProcessId;
	void _EnsureRuntimeBrokerPID();
};

namespace CloudExperienceHostBroker
{
	namespace Hello
	{
		struct HelloEnrollmentManager
		{
			HelloEnrollmentManager();
			static TrustLevel InternalGetTrustLevel();
			static unsigned short const * InternalGetRuntimeClassName();
			virtual long CleanupEnrollmentAsync(Windows::Foundation::IAsyncAction * *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetSupportedEnrollmentKindsAsync(Windows::Foundation::IAsyncOperation<EnrollmentFlags> * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual long ReportBioDataStorageConsentResponse(unsigned char);
			virtual long ShowEnrollmentAsync(EnrollmentFlags,EnrollmentPersonality,Windows::Foundation::Rect,Windows::Foundation::IAsyncOperation<EnrollmentResult> * *);
			virtual long UpdateWindowLocation(Windows::Foundation::Rect);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~HelloEnrollmentManager();
		};

		struct HelloEnrollmentManagerFactoryImpl
		{
			static TrustLevel InternalGetTrustLevel();
			static unsigned short const * InternalGetRuntimeClassName();
		};

		struct HelloEnrollmentManagerFactoryStatics
		{
			HelloEnrollmentManagerFactoryStatics();
			virtual long GetHelloEnrollmentManager(Windows::System::IUser *,IHelloEnrollmentManager * *);
		};

		struct HelloEnrollmentManagerForUser
		{
			HelloEnrollmentManagerForUser();
			long RuntimeClassInitialize(Windows::System::IUser *);
			virtual long CleanupEnrollmentAsync(Windows::Foundation::IAsyncAction * *);
			virtual long GetSupportedEnrollmentKindsAsync(Windows::Foundation::IAsyncOperation<EnrollmentFlags> * *);
			virtual long ReportBioDataStorageConsentResponse(unsigned char);
			virtual long ShowEnrollmentAsync(EnrollmentFlags,EnrollmentPersonality,Windows::Foundation::Rect,Windows::Foundation::IAsyncOperation<EnrollmentResult> * *);
			virtual long UpdateWindowLocation(Windows::Foundation::Rect);
			virtual ~HelloEnrollmentManagerForUser();
		};

		Microsoft::WRL::Details::CreatorMap const __object_HelloEnrollmentManager;
		Microsoft::WRL::Details::CreatorMap const __object_HelloEnrollmentManagerFactoryImpl;
		Microsoft::WRL::Details::FactoryCache __objectFactory__HelloEnrollmentManager;
		Microsoft::WRL::Details::FactoryCache __objectFactory__HelloEnrollmentManagerFactoryImpl;
		unsigned short const * const CleanupEnrollmentAsyncActionName;
		unsigned short const * const GetSupportedEnrollmentKindsAsyncOperationName;
		unsigned short const * const ShowEnrollmentAsyncOperationName;
		unsigned short const * const UserCleanupEnrollmentAsyncActionName;
		unsigned short const * const UserGetSupportedEnrollmentKindsAsyncOperationName;
		unsigned short const * const UserShowEnrollmentAsyncOperationName;
	};

};

class FaceEnrollmentManager
{
	long _InvokeEnrollmentStateUpdate(Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceEnrollmentState,HSTRING__ *,unsigned int,Windows::Foundation::Rect,Windows::Foundation::Point * const,Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceSensorType,bool,Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo * const);
	long _KillEnrollmentProcessTimerThread();
	long _KillEnrollmentStateUpdateTimerThread();
	long _ProcessEnrollBeginResult(_WINBIO_ASYNC_RESULT const *);
	long _ProcessEnrollCaptureResult(_WINBIO_ASYNC_RESULT const *);
	long _ProcessEnrollCommitResult(_WINBIO_ASYNC_RESULT const *);
	long _ProcessEnrollDiscardResult(_WINBIO_ASYNC_RESULT const *);
	long _ProcessEnrollSelectResult(_WINBIO_ASYNC_RESULT const *);
	long _ProcessGetPropertyExtendedEnrollmentStatusResult(_WINBIO_ASYNC_RESULT const *);
	long _ProcessGetPropertyResult(_WINBIO_ASYNC_RESULT const *);
	long _ProcessMonitorPresenceResult(_WINBIO_ASYNC_RESULT const *);
	long _RestartEnrollment();
	long _SendQueryEnrollmentFramesCapturedRequest();
	long _StartMonitorPresence();
	long _UpdateEnrollmentState();
	virtual ~FaceEnrollmentManager();
	void _KillAllTimerThread();
	void _StartEnrollmentStatisticsActivity();
	void _StopEnrollmentStatisticsActivity();
protected:
	virtual long v_CancelEnrollment();
	virtual long v_OnEnrollmentCompleted();
	virtual long v_OnEnumerationComplete(long);
	virtual long v_OnError(long);
	virtual long v_ProcessAsyncResult(_WINBIO_ASYNC_RESULT const *,bool *);
	virtual long v_StartEnrollment();
	virtual void v_StopEnrollingActivity(bool,bool);
public:
	FaceEnrollmentManager();
	long RuntimeClassInitialize(Windows::Internal::UI::BioEnrollment::DataModel::IUIThreadEventDispatcher *,Windows::Internal::UI::BioEnrollment::DataModel::EnrollmentContext);
	virtual long PauseCapture();
	virtual long RestartCapture();
	virtual long ResumeCapture(unsigned char *);
	virtual long SetErrorState(long);
	virtual long add_EnrollmentStateUpdated(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::Face::IFaceEnrollmentStateManager *,Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceEnrollmentStateInfo *> *,EventRegistrationToken *);
	virtual long get_CapturesNeededToCompleteEnrollment(unsigned int *);
	virtual long get_EnrollmentPhase(Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceEnrollmentPhase *);
	virtual long get_EnrollmentState(Windows::Internal::UI::BioEnrollment::DataModel::Face::IFaceEnrollmentStateInfo * *);
	virtual long get_ErrorState(Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceErrorState *);
	virtual long get_SensorInfo(Windows::Internal::UI::BioEnrollment::DataModel::Face::IFaceSensorInfo * *);
	virtual long remove_EnrollmentStateUpdated(EventRegistrationToken);
};

struct FaceEnrollmentStateData
{
	FaceEnrollmentStateData();
	long RuntimeClassInitialize(Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceEnrollmentState,HSTRING__ *,unsigned int,Windows::Foundation::Rect,Windows::Foundation::Point * const,Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceSensorType,unsigned char,Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo * const);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_BoundingBox(Windows::Foundation::Rect *);
	virtual long get_CompletedCaptures(unsigned int *);
	virtual long get_EnrollmentState(Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceEnrollmentState *);
	virtual long get_FacePoints(Windows::Foundation::Collections::IVectorView<Windows::Foundation::Point> * *);
	virtual long get_Message(HSTRING__ * *);
	virtual long get_SensorType(Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceSensorType *);
	virtual long get_StageColorInfos(Windows::Foundation::Collections::IVectorView<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo> * *);
	virtual long get_StageInfoComputed(unsigned char *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~FaceEnrollmentStateData();
};

struct FaceSensorData
{
	FaceSensorData();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_ColorId(HSTRING__ * *);
	virtual long get_InfraredId(HSTRING__ * *);
	virtual long get_InfraredSensorRotationAngle(unsigned int *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~FaceSensorData();
};

class FingerprintEnrollmentManager
{
	Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::FingerprintCaptureType _GetCurrentCaptureType();
	long _DisplayBadCapture(unsigned long);
	long _GetCurrentProgressTextResourceId(Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::FingerprintSensorKind,Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::FingerprintCaptureType,unsigned int,unsigned int &);
	long _HandleCapture(_WINBIO_ASYNC_RESULT const *);
	long _HandleEnumerateOperation(_WINBIO_ASYNC_RESULT const *);
	long _HandleGetProperty(_WINBIO_ASYNC_RESULT const *);
	long _HandleIdentifyOperation(_WINBIO_ASYNC_RESULT const *);
	long _InvokeEnrollmentStateUpdate();
	long _InvokeSensorInfoUpdate();
	long _LoadExtendedFingerprintSensorInfo(unsigned short (*)[256]);
protected:
	virtual long v_OnEnrollmentCompleted();
	virtual long v_OnError(long);
	virtual long v_ProcessAsyncResult(_WINBIO_ASYNC_RESULT const *,bool *);
	virtual long v_SetSelectedSensorUnit(unsigned long);
	virtual long v_StartEnrollment();
	virtual long v_StartIdentify();
public:
	FingerprintEnrollmentManager();
	long RuntimeClassInitialize(Windows::Internal::UI::BioEnrollment::DataModel::IUIThreadEventDispatcher *,Windows::Internal::UI::BioEnrollment::DataModel::EnrollmentContext);
	virtual long ResumeCapture();
	virtual long add_EnrollmentStateUpdated(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IFingerprintEnrollmentStateManager *,Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::FingerprintEnrollmentStateInfo *> *,EventRegistrationToken *);
	virtual long add_SensorInfoUpdated(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IFingerprintEnrollmentStateManager *,Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::FingerprintSensorInfo *> *,EventRegistrationToken *);
	virtual long get_EnrollmentState(Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IFingerprintEnrollmentStateInfo * *);
	virtual long get_SensorInfo(Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IFingerprintSensorInfo * *);
	virtual long remove_EnrollmentStateUpdated(EventRegistrationToken);
	virtual long remove_SensorInfoUpdated(EventRegistrationToken);
	virtual ~FingerprintEnrollmentManager();
};

struct FingerprintEnrollmentStateData
{
	FingerprintEnrollmentStateData();
	long RuntimeClassInitialize(Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::FingerprintEnrollmentState,Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::FingerprintCaptureType,unsigned int,HSTRING__ *,HSTRING__ *,HSTRING__ *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_CaptureType(Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::FingerprintCaptureType *);
	virtual long get_CompletedCaptures(unsigned int *);
	virtual long get_EnrollmentState(Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::FingerprintEnrollmentState *);
	virtual long get_ErrorMessage(HSTRING__ * *);
	virtual long get_InfoMessage(HSTRING__ * *);
	virtual long get_InstructionMessage(HSTRING__ * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~FingerprintEnrollmentStateData();
};

struct FingerprintSensorData
{
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Button(Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::FingerprintSensorButton *);
	virtual long get_Kind(Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::FingerprintSensorKind *);
	virtual long get_Location(Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::FingerprintSensorLocation *);
	virtual long get_MaxRequiredCaptures(unsigned int *);
	virtual long get_Shape(Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::FingerprintSensorShape *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class IrisEnrollmentManager
{
	bool _ProcessRejectReasons(unsigned long,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IrisEnrollmentState *,unsigned int *);
	long ProcessEnrollmentProgress(_WINBIO_EXTENDED_ENROLLMENT_STATUS *);
	long _DispatchEnrollmentUIUpdateRequestChangedEvent();
	long _HandleEnrollBegin(_WINBIO_ASYNC_RESULT const *);
	long _HandleEnrollCapture(_WINBIO_ASYNC_RESULT const *);
	long _InvokeEnrollmentStateUpdate();
	long _PauseCapture();
	long _ProcessEnrollRejectDetail(unsigned long);
	long _ProcessGetPropertyExtendedEnrollmentStatusResult(_WINBIO_ASYNC_RESULT const *);
	long _ProcessGetPropertyExtendedSensorInfoResult(_WINBIO_ASYNC_RESULT const *);
	long _ProcessNewRequestedEnrollmentUIGridPoint(Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentUIGridPoint *);
	long _SendQueryEnrollmentStatusRequest();
	long _SetAndProcessErrorState(long,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IrisErrorState);
	long _SetErrorStateInternal(long,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IrisErrorState);
	virtual void OnClose();
protected:
	long _CheckValidStateForApiCall();
	virtual long v_OnEnrollmentCompleted();
	virtual long v_OnEnumerationComplete(long);
	virtual long v_OnError(long);
	virtual long v_ProcessAsyncResult(_WINBIO_ASYNC_RESULT const *,bool *);
	virtual long v_StartEnrollment();
public:
	IrisEnrollmentManager();
	virtual long ResetEnrollmentPhase();
	virtual long ResumeCapture();
	virtual long SetErrorState(long);
	virtual long UpdateOrientation(unsigned char);
	virtual long add_CapturePausedAndEnrollmentUIUpdateRequested(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentStateManager *,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IrisEnrollmentUIUpdateRequest *> *,EventRegistrationToken *);
	virtual long add_EnrollmentStateUpdated(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentStateManager *,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IrisEnrollmentStateInfo *> *,EventRegistrationToken *);
	virtual long get_EnrollmentState(Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentStateInfo * *);
	virtual long get_EnrollmentUIUpdateRequest(Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentUIUpdateRequest * *);
	virtual long get_ErrorState(Windows::Internal::UI::BioEnrollment::DataModel::Iris::IrisErrorState *);
	virtual long get_IRBoundingBox(Windows::Foundation::Rect *);
	virtual long get_IRSupportedOrientation(Windows::Internal::UI::BioEnrollment::DataModel::Orientation *);
	virtual long remove_CapturePausedAndEnrollmentUIUpdateRequested(EventRegistrationToken);
	virtual long remove_EnrollmentStateUpdated(EventRegistrationToken);
	virtual ~IrisEnrollmentManager();
};

struct IrisEnrollmentStateData
{
	IrisEnrollmentStateData();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_EnrollmentState(Windows::Internal::UI::BioEnrollment::DataModel::Iris::IrisEnrollmentState *);
	virtual long get_Message(HSTRING__ * *);
	virtual long get_PercentComplete(unsigned int *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~IrisEnrollmentStateData();
};

struct IrisEnrollmentUIGridPointData
{
	long RuntimeClassInitialize(unsigned short,unsigned int,double,double,double);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Index(unsigned short *);
	virtual long get_PercentComplete(unsigned int *);
	virtual long get_X(double *);
	virtual long get_Y(double *);
	virtual long get_Z(double *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct IrisEnrollmentUIUpdateRequestData
{
	IrisEnrollmentUIUpdateRequestData();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_RequestedUIGridPoint(Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentUIGridPoint * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~IrisEnrollmentUIUpdateRequestData();
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

		struct ActivationFactory<Implements<FtmBase,CloudExperienceHostBroker::Hello::IHelloEnrollmentManagerFactoryStatics>,Details::Nil,Details::Nil,0>
		{
			virtual long ActivateInstance(IInspectable * *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		class AgileRef
		{
		protected:
			long InternalResolve(_GUID const &,void * *);
		public:
			AgileRef();
			~AgileRef();
		};

		struct ClassFactory<Details::Nil,Details::Nil,Details::Nil,0>
		{
			ClassFactory<Details::Nil,Details::Nil,Details::Nil,0>();
			virtual long LockServer(int);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		class ComPtr<BioEnrollBroker>
		{
		protected:
			void InternalAddRef();
		public:
			~ComPtr<BioEnrollBroker>();
		};

		class ComPtr<BioEnrollmentInstance>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			~ComPtr<BioEnrollmentInstance>();
		};

		struct ComPtr<CMarshaledInterface::CMarshalStream>
		{
			ComPtr<CMarshaledInterface::CMarshalStream> & operator=(ComPtr<CMarshaledInterface::CMarshalStream> const &);
		};

		class ComPtr<CloudExperienceHostBroker::Hello::HelloEnrollmentManager>
		{
		protected:
			void InternalAddRef();
		public:
			~ComPtr<CloudExperienceHostBroker::Hello::HelloEnrollmentManager>();
		};

		class ComPtr<CloudExperienceHostBroker::Hello::HelloEnrollmentManagerForUser>
		{
		protected:
			void InternalAddRef();
		public:
			~ComPtr<CloudExperienceHostBroker::Hello::HelloEnrollmentManagerForUser>();
		};

		class ComPtr<CloudExperienceHostBroker::Hello::IHelloEnrollmentManager>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<CloudExperienceHostBroker::Hello::IHelloEnrollmentManager>();
		};

		class ComPtr<Details::EventTargetArray>
		{
		protected:
			void InternalAddRef();
		public:
			ComPtr<Details::EventTargetArray> & operator=(ComPtr<Details::EventTargetArray> const &);
			ComPtr<Details::EventTargetArray> & operator=(Details::EventTargetArray *);
			void Attach(Details::EventTargetArray *);
			~ComPtr<Details::EventTargetArray>();
		};

		class ComPtr<FaceEnrollmentManager>
		{
		protected:
			void InternalAddRef();
		public:
			~ComPtr<FaceEnrollmentManager>();
		};

		struct ComPtr<FaceEnrollmentStateData>
		{
			void Attach(FaceEnrollmentStateData *);
		};

		class ComPtr<FingerprintEnrollmentManager>
		{
		protected:
			void InternalAddRef();
		public:
			~ComPtr<FingerprintEnrollmentManager>();
		};

		class ComPtr<IAgileObject>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IAgileReference>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IApplicationDesignModeSettingsPriv>
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
			long As<IUnknown>(Details::ComPtrRef<ComPtr<IUnknown> >);
			long As<Windows::Foundation::IAsyncAction>(Details::ComPtrRef<ComPtr<Windows::Foundation::IAsyncAction> >);
			long As<Windows::Foundation::IAsyncOperation<Windows::Internal::SecurityKeyEnrollment::SecurityKeyContext *> >(Details::ComPtrRef<ComPtr<Windows::Foundation::IAsyncOperation<Windows::Internal::SecurityKeyEnrollment::SecurityKeyContext *> > >);
			long As<Windows::Foundation::IAsyncOperation<Windows::Internal::SecurityKeyEnrollment::SecurityKeyFingerprintEnrollmentResult *> >(Details::ComPtrRef<ComPtr<Windows::Foundation::IAsyncOperation<Windows::Internal::SecurityKeyEnrollment::SecurityKeyFingerprintEnrollmentResult *> > >);
			long As<Windows::Foundation::IAsyncOperation<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::SecurityKeyPinOperationInfo *> >(Details::ComPtrRef<ComPtr<Windows::Foundation::IAsyncOperation<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::SecurityKeyPinOperationInfo *> > >);
			long As<Windows::Foundation::IAsyncOperation<Windows::Internal::UI::BioEnrollment::DataModel::UserVerificationInfo *> >(Details::ComPtrRef<ComPtr<Windows::Foundation::IAsyncOperation<Windows::Internal::UI::BioEnrollment::DataModel::UserVerificationInfo *> > >);
			long As<Windows::Foundation::IAsyncOperation<bool> >(Details::ComPtrRef<ComPtr<Windows::Foundation::IAsyncOperation<bool> > >);
			~ComPtr<IAsyncInfo>();
		};

		class ComPtr<ICallingProcessInfo>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IComputerAccounts>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IComputerAccounts>();
		};

		class ComPtr<ICoreWindowInterop>
		{
		protected:
			unsigned long InternalRelease();
		};

		struct ComPtr<IGlobalOptions>
		{
			~ComPtr<IGlobalOptions>();
		};

		class ComPtr<IInspectable>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			long As<Windows::Foundation::IPropertyValue>(Details::ComPtrRef<ComPtr<Windows::Foundation::IPropertyValue> >);
			~ComPtr<IInspectable>();
		};

		class ComPtr<IMarshal>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IOOBEBioEnrollment>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IOOBEBioEnrollment>();
		};

		class ComPtr<IOOBEBrokerManager>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IOOBEBrokerManager>();
		};

		class ComPtr<IPropertyStore>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IRestrictedErrorInfo>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IRetailDemoPinEnrollment>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IRetailDemoPinEnrollment>();
		};

		class ComPtr<IRpcOptions>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IRpcOptions>();
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
		};

		class ComPtr<IUnknown>
		{
		protected:
			unsigned long InternalRelease();
		public:
			ComPtr<IUnknown> & operator=(IUnknown *);
			ComPtr<IUnknown>();
			~ComPtr<IUnknown>();
		};

		class ComPtr<IWinBioAsyncCallback>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IWinBioAsyncCallback>();
		};

		class ComPtr<IrisEnrollmentManager>
		{
		protected:
			void InternalAddRef();
		public:
			~ComPtr<IrisEnrollmentManager>();
		};

		class ComPtr<SecurityKeyEnrollmentManager>
		{
		protected:
			void InternalAddRef();
		public:
			~ComPtr<SecurityKeyEnrollmentManager>();
		};

		class ComPtr<WinBioCallbackHandler>
		{
		protected:
			unsigned long InternalRelease();
		};

		struct ComPtr<WinBioEnrollmentSessionFactory>
		{
			void Attach(WinBioEnrollmentSessionFactory *);
		};

		class ComPtr<Windows::ApplicationModel::Activation::ISplashScreen>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		};

		class ComPtr<Windows::ApplicationModel::Core::ICoreApplicationPrivate>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::Collections::IIterable<Windows::Foundation::Point> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::Collections::IIterable<Windows::Foundation::Point> >();
		};

		class ComPtr<Windows::Foundation::Collections::IIterable<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::Collections::IIterable<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo> >();
		};

		class ComPtr<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> >();
		};

		class ComPtr<Windows::Foundation::Collections::IPropertySet>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::Collections::IPropertySet>();
		};

		class ComPtr<Windows::Foundation::Collections::Internal::AgileVector<Windows::Foundation::Point,PointEqualityPredicate,PointLifetimeTraits,0> >
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::Collections::Internal::AgileVector<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,StageInfoEqualityPredicate,StageInfoLifetimeTraits,0> >
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::Foundation::Point,Windows::Foundation::Collections::Internal::Vector<Windows::Foundation::Point,PointEqualityPredicate,PointLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Foundation::Point,0,1,0> >,PointLifetimeTraits,XWinRT::IntVersionTag,1> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::Foundation::Point,Windows::Foundation::Collections::Internal::Vector<Windows::Foundation::Point,PointEqualityPredicate,PointLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Foundation::Point,0,1,0> >,PointLifetimeTraits,XWinRT::IntVersionTag,1> >();
		};

		class ComPtr<Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,Windows::Foundation::Collections::Internal::Vector<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,StageInfoEqualityPredicate,StageInfoLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0,1,0> >,StageInfoLifetimeTraits,XWinRT::IntVersionTag,1> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,Windows::Foundation::Collections::Internal::Vector<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,StageInfoEqualityPredicate,StageInfoLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0,1,0> >,StageInfoLifetimeTraits,XWinRT::IntVersionTag,1> >();
		};

		class ComPtr<Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::Foundation::Point,Windows::Foundation::Collections::Internal::Vector<Windows::Foundation::Point,PointEqualityPredicate,PointLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Foundation::Point,0,1,0> >,PointLifetimeTraits,XWinRT::IntVersionTag,1> >
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,Windows::Foundation::Collections::Internal::Vector<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,StageInfoEqualityPredicate,StageInfoLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0,1,0> >,StageInfoLifetimeTraits,XWinRT::IntVersionTag,1> >
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::IAsyncAction>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::IAsyncAction>();
		};

		class ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<Windows::Foundation::IAsyncActionCompletedHandler> & operator=(Windows::Foundation::IAsyncActionCompletedHandler *);
			~ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>();
		};

		class ComPtr<Windows::Foundation::IAsyncOperation<Windows::Internal::SecurityKeyEnrollment::SecurityKeyContext *> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::IAsyncOperation<Windows::Internal::SecurityKeyEnrollment::SecurityKeyContext *> >();
		};

		class ComPtr<Windows::Foundation::IAsyncOperation<Windows::Internal::SecurityKeyEnrollment::SecurityKeyFingerprintEnrollmentResult *> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			long As<IAsyncInfo>(Details::ComPtrRef<ComPtr<IAsyncInfo> >);
			~ComPtr<Windows::Foundation::IAsyncOperation<Windows::Internal::SecurityKeyEnrollment::SecurityKeyFingerprintEnrollmentResult *> >();
		};

		class ComPtr<Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Auth::Enrollment::EnrollmentUpdateResult *> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Auth::Enrollment::EnrollmentUpdateResult *> >();
		};

		class ComPtr<Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Auth::Enrollment::ICredentialEnrollment *> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Auth::Enrollment::ICredentialEnrollment *> >();
		};

		class ComPtr<Windows::Foundation::IAsyncOperation<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::SecurityKeyPinOperationInfo *> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::IAsyncOperation<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::SecurityKeyPinOperationInfo *> >();
		};

		class ComPtr<Windows::Foundation::IAsyncOperation<Windows::Internal::UI::BioEnrollment::DataModel::UserVerificationInfo *> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::IAsyncOperation<Windows::Internal::UI::BioEnrollment::DataModel::UserVerificationInfo *> >();
		};

		class ComPtr<Windows::Foundation::IAsyncOperation<bool> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::IAsyncOperation<bool> >();
		};

		class ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::SecurityKeyEnrollment::SecurityKeyContext *> >
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			~ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::SecurityKeyEnrollment::SecurityKeyContext *> >();
		};

		class ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::SecurityKeyEnrollment::SecurityKeyFingerprintEnrollmentResult *> >
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			~ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::SecurityKeyEnrollment::SecurityKeyFingerprintEnrollmentResult *> >();
		};

		class ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::SecurityKeyPinOperationInfo *> >
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			~ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::SecurityKeyPinOperationInfo *> >();
		};

		class ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::BioEnrollment::DataModel::UserVerificationInfo *> >
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			~ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::BioEnrollment::DataModel::UserVerificationInfo *> >();
		};

		class ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<bool> >
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			~ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<bool> >();
		};

		class ComPtr<Windows::Foundation::IPropertyValue>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::IPropertyValue>();
		};

		class ComPtr<Windows::Foundation::IPropertyValueStatics>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::IPropertyValueStatics>();
		};

		struct ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Internal::SecurityKeyEnrollment::ISecurityKeyEnrollmentSession *,Windows::Internal::SecurityKeyEnrollment::SecurityKeyEnrollmentArgs *> >
		{
			~ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Internal::SecurityKeyEnrollment::ISecurityKeyEnrollmentSession *,Windows::Internal::SecurityKeyEnrollment::SecurityKeyEnrollmentArgs *> >();
		};

		class ComPtr<Windows::Internal::IAsyncDeferral>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			~ComPtr<Windows::Internal::IAsyncDeferral>();
		};

		class ComPtr<Windows::Internal::IAsyncFireCompletion>
		{
		protected:
			void InternalAddRef();
		};

		class ComPtr<Windows::Internal::INilDelegate>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::INilDelegate>();
		};

		struct ComPtr<Windows::Internal::SecurityKeyEnrollment::ISecurityKeyContext>
		{
			~ComPtr<Windows::Internal::SecurityKeyEnrollment::ISecurityKeyContext>();
		};

		class ComPtr<Windows::Internal::SecurityKeyEnrollment::ISecurityKeyEnrollmentSession>
		{
		protected:
			unsigned long InternalRelease();
		};

		struct ComPtr<Windows::Internal::SecurityKeyEnrollment::ISecurityKeyFingerprintEnrollmentResult>
		{
			~ComPtr<Windows::Internal::SecurityKeyEnrollment::ISecurityKeyFingerprintEnrollmentResult>();
		};

		class ComPtr<Windows::Internal::Shell::ModalExperience::IModalExperienceDefaultOptions>
		{
		protected:
			unsigned long InternalRelease();
		public:
			long As<Windows::Foundation::Collections::IPropertySet>(Details::ComPtrRef<ComPtr<Windows::Foundation::Collections::IPropertySet> >);
			~ComPtr<Windows::Internal::Shell::ModalExperience::IModalExperienceDefaultOptions>();
		};

		class ComPtr<Windows::Internal::Shell::ModalExperience::IModalExperienceManagerStatic>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::Shell::ModalExperience::IModalExperienceManagerStatic>();
		};

		class ComPtr<Windows::Internal::Shell::ModalExperience::IModalWindowExperienceManager>
		{
		protected:
			unsigned long InternalRelease();
		public:
			long As<Windows::Internal::Shell::ModalExperience::IModalWindowExperienceManagerAsUser>(Details::ComPtrRef<ComPtr<Windows::Internal::Shell::ModalExperience::IModalWindowExperienceManagerAsUser> >);
			~ComPtr<Windows::Internal::Shell::ModalExperience::IModalWindowExperienceManager>();
		};

		class ComPtr<Windows::Internal::Shell::ModalExperience::IModalWindowExperienceManagerAsUser>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::Shell::ModalExperience::IModalWindowExperienceManagerAsUser>();
		};

		class ComPtr<Windows::Internal::UI::Auth::Enrollment::IBioCredentialEnrollment>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::UI::Auth::Enrollment::IBioCredentialEnrollment>();
		};

		class ComPtr<Windows::Internal::UI::Auth::Enrollment::ICredentialEnrollment>
		{
		protected:
			unsigned long InternalRelease();
		public:
			long As<Windows::Internal::UI::Auth::Enrollment::IBioCredentialEnrollment>(Details::ComPtrRef<ComPtr<Windows::Internal::UI::Auth::Enrollment::IBioCredentialEnrollment> >);
		};

		class ComPtr<Windows::Internal::UI::Auth::Enrollment::ICredentialEnrollmentManagerStatics>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::UI::Auth::Enrollment::ICredentialEnrollmentManagerStatics>();
		};

		class ComPtr<Windows::Internal::UI::Auth::Enrollment::IEnrollmentUpdateResult>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::UI::Auth::Enrollment::IEnrollmentUpdateResult>();
		};

		class ComPtr<Windows::Internal::UI::BioEnrollment::Broker::IBioEnrollmentActivationArgs>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::UI::BioEnrollment::Broker::IBioEnrollmentActivationArgs>();
		};

		class ComPtr<Windows::Internal::UI::BioEnrollment::Broker::IBioEnrollmentBroker>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Internal::UI::BioEnrollment::Broker::IBioEnrollmentRetailDemo>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::UI::BioEnrollment::Broker::IBioEnrollmentRetailDemo>();
		};

		class ComPtr<Windows::Internal::UI::BioEnrollment::DataModel::Face::IFaceEnrollmentStateInfo>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			~ComPtr<Windows::Internal::UI::BioEnrollment::DataModel::Face::IFaceEnrollmentStateInfo>();
		};

		class ComPtr<Windows::Internal::UI::BioEnrollment::DataModel::Face::IFaceSensorInfo>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IExtendedFingerprintSensorInfoBroker>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IExtendedFingerprintSensorInfoBroker>();
		};

		class ComPtr<Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IFingerprintEnrollmentStateInfo>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			~ComPtr<Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IFingerprintEnrollmentStateInfo>();
		};

		class ComPtr<Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IFingerprintSensorInfo>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			~ComPtr<Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IFingerprintSensorInfo>();
		};

		class ComPtr<Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSession>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			~ComPtr<Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSession>();
		};

		class ComPtr<Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSessionFactory>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSessionFactory>();
		};

		class ComPtr<Windows::Internal::UI::BioEnrollment::DataModel::IFullTrustOOBEBioEnrollmentSessionFactory>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::UI::BioEnrollment::DataModel::IFullTrustOOBEBioEnrollmentSessionFactory>();
		};

		class ComPtr<Windows::Internal::UI::BioEnrollment::DataModel::ISuspendErrorStateInfo>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::UI::BioEnrollment::DataModel::ISuspendErrorStateInfo>();
		};

		struct ComPtr<Windows::Internal::UI::BioEnrollment::DataModel::IUIThreadEventDispatcher>
		{
			ComPtr<Windows::Internal::UI::BioEnrollment::DataModel::IUIThreadEventDispatcher> & operator=(Windows::Internal::UI::BioEnrollment::DataModel::IUIThreadEventDispatcher *);
		};

		class ComPtr<Windows::Internal::UI::BioEnrollment::DataModel::IUserVerificationInfo>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentStateInfo>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			~ComPtr<Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentStateInfo>();
		};

		class ComPtr<Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentUIGridPoint>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			~ComPtr<Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentUIGridPoint>();
		};

		class ComPtr<Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentUIUpdateRequest>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			~ComPtr<Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentUIUpdateRequest>();
		};

		class ComPtr<Windows::Internal::UI::BioEnrollment::DataModel::Pin::IPinEnrollmentManager>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Internal::UI::BioEnrollment::DataModel::Pin::IPinEnrollmentManager>();
		};

		class ComPtr<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyEnrollmentStateManager>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyEnrollmentStateManager><SecurityKeyEnrollmentManager>(SecurityKeyEnrollmentManager *);
			~ComPtr<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyEnrollmentStateManager>();
		};

		class ComPtr<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyFingerprintEnrollmentStateInfo>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			~ComPtr<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyFingerprintEnrollmentStateInfo>();
		};

		class ComPtr<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyPinOperationInfo>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::System::Internal::ISignInStateManager>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::System::Internal::IUserManagerStatics>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::UI::Core::ICoreWindow>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::UI::Core::ICoreWindowStatic>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::UI::ViewManagement::IActivationViewSwitcher>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
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

			struct ComPtrRef<WeakRef>
			{
				operator WeakRef *();
			};

			struct EventTargetArray
			{
				long RuntimeClassInitialize(unsigned __int64);
				virtual ~EventTargetArray();
				void AddTail(IUnknown *,void *);
			};

			class ImplementsHelper<RuntimeClassFlags<13>,0,IActivationFactory,Implements<FtmBase,CloudExperienceHostBroker::Hello::IHelloEnrollmentManagerFactoryStatics>,Nil,Nil,Nil>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<13>,0,IActivationFactory,Nil,Nil,Nil,Nil>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<13>,1,ImplementsMarker<Implements<FtmBase,CloudExperienceHostBroker::Hello::IHelloEnrollmentManagerFactoryStatics> >,Nil,Nil,Nil>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,CloudExperienceHostBroker::Hello::IHelloEnrollmentManager,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,Windows::Foundation::Collections::IIterator<Windows::Foundation::Point>,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,Windows::Foundation::Collections::IIterator<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo>,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,Windows::Internal::SecurityKeyEnrollment::ISecurityKeyEnrollmentArgs,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,Windows::Internal::SecurityKeyEnrollment::ISecurityKeyFingerprintEnrollmentResult,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,Windows::Internal::UI::BioEnrollment::DataModel::Face::IFaceEnrollmentStateInfo,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,Windows::Internal::UI::BioEnrollment::DataModel::Face::IFaceSensorInfo,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IFingerprintEnrollmentStateInfo,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IFingerprintSensorInfo,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSessionFactory,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,Windows::Internal::UI::BioEnrollment::DataModel::IOOBEBioEnrollmentSessionFactory,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,Windows::Internal::UI::BioEnrollment::DataModel::ISuspendErrorStateInfo,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,Windows::Internal::UI::BioEnrollment::DataModel::IUserVerificationInfo,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentStateInfo,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentUIGridPoint,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentUIUpdateRequest,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,Windows::Internal::UI::BioEnrollment::DataModel::Pin::IPinEnrollmentManager,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyFingerprintEnrollmentStateInfo,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyPinOperationInfo,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,IInspectable,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,IWeakReferenceSource,BaseEnrollmentManager>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			public:
				ImplementsHelper<RuntimeClassFlags<1>,1,IWeakReferenceSource,BaseEnrollmentManager>();
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,IWeakReferenceSource,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
				void FillArrayWithIid(unsigned long *,_GUID *);
			public:
				ImplementsHelper<RuntimeClassFlags<1>,1,IWeakReferenceSource,FtmBase>();
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,IWeakReferenceSource,IInspectable,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<Windows::Foundation::Point>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
				void FillArrayWithIid(unsigned long *,_GUID *);
			public:
				ImplementsHelper<RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<Windows::Foundation::Point>,FtmBase>();
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
				void FillArrayWithIid(unsigned long *,_GUID *);
			public:
				ImplementsHelper<RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo>,FtmBase>();
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyEnrollmentStateManager,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,ImplementsMarker<BaseEnrollmentManager> >
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,ImplementsMarker<CActivatedEventArgsBase>,Windows::ApplicationModel::Activation::IApplicationViewActivatedEventArgs,Windows::ApplicationModel::Activation::IViewSwitcherProvider,CloakedIid<Windows::ApplicationModel::Activation::IMultiviewActivationProperties> >
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,ImplementsMarker<FtmBase>,CloudExperienceHostBroker::Hello::IHelloEnrollmentManagerFactoryStatics>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,Windows::ApplicationModel::Activation::IActivatedEventArgs,Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,CloakedIid<Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs>,CloakedIid<Windows::ApplicationModel::Activation::IActivatedEventArgsInternal>,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,CloakedIid<Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs>,CloakedIid<Windows::ApplicationModel::Activation::IActivatedEventArgsInternal>,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<Windows::Foundation::Point>,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo>,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyEnrollmentStateManager,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			struct ImplementsHelper<RuntimeClassFlags<2>,0,ImplementsMarker<Implements<RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::SecurityKeyEnrollment::SecurityKeyFingerprintEnrollmentResult *>,IUnknown> > >
			{
				ImplementsHelper<RuntimeClassFlags<2>,0,ImplementsMarker<Implements<RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::SecurityKeyEnrollment::SecurityKeyFingerprintEnrollmentResult *>,IUnknown> > >();
			};

			struct ImplementsHelper<RuntimeClassFlags<2>,1,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::SecurityKeyEnrollment::SecurityKeyFingerprintEnrollmentResult *>,IUnknown>
			{
				ImplementsHelper<RuntimeClassFlags<2>,1,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::SecurityKeyEnrollment::SecurityKeyFingerprintEnrollmentResult *>,IUnknown>();
			};

			class ImplementsHelper<RuntimeClassFlags<3>,0,ImplementsMarker<Implements<Windows::Internal::UI::BioEnrollment::Broker::IBioEnrollmentActivationArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,CActivatedEventArgsWithViewIdBase> >,IWeakReferenceSource,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ModalExperience::IModalWindowExperienceManager *,Windows::Internal::Shell::ModalExperience::IModalExperienceEventArgs *>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			public:
				virtual ~ImplementsHelper<RuntimeClassFlags<3>,0,ImplementsMarker<Implements<Windows::Internal::UI::BioEnrollment::Broker::IBioEnrollmentActivationArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,CActivatedEventArgsWithViewIdBase> >,IWeakReferenceSource,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ModalExperience::IModalWindowExperienceManager *,Windows::Internal::Shell::ModalExperience::IModalExperienceEventArgs *>,FtmBase>();
			};

			class ImplementsHelper<RuntimeClassFlags<3>,0,Windows::Internal::SecurityKeyEnrollment::ISecurityKeyContext,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,0,Windows::Internal::SecurityKeyEnrollment::ISecurityKeyEnrollmentSession,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,0,Windows::Internal::UI::BioEnrollment::Broker::IBioEnrollmentBroker,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,0,Windows::Internal::UI::BioEnrollment::Broker::IBioEnrollmentRetailDemo,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,0,Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IExtendedFingerprintSensorInfoBroker,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IOOBEBioEnrollment,IWeakReferenceSource,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
				void FillArrayWithIid(unsigned long *,_GUID *);
			public:
				ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,FtmBase>();
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IAsyncAction,Windows::Internal::IAsyncOperationLocal,CloakedIid<Windows::Internal::IAsyncDeferral>,CloakedIid<Windows::Internal::IComPoolTask>,CloakedIid<Windows::Internal::IAsyncFireCompletion> >
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			struct ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IAsyncOperation<Windows::Internal::SecurityKeyEnrollment::SecurityKeyContext *>,Windows::Internal::IAsyncOperationLocal,CloakedIid<Windows::Internal::IAsyncDeferral>,CloakedIid<Windows::Internal::IComPoolTask>,CloakedIid<Windows::Internal::IAsyncFireCompletion> >
			{
				ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IAsyncOperation<Windows::Internal::SecurityKeyEnrollment::SecurityKeyContext *>,Windows::Internal::IAsyncOperationLocal,CloakedIid<Windows::Internal::IAsyncDeferral>,CloakedIid<Windows::Internal::IComPoolTask>,CloakedIid<Windows::Internal::IAsyncFireCompletion> >();
			};

			struct ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IAsyncOperation<Windows::Internal::SecurityKeyEnrollment::SecurityKeyFingerprintEnrollmentResult *>,Windows::Internal::IAsyncOperationLocal,CloakedIid<Windows::Internal::IAsyncDeferral>,CloakedIid<Windows::Internal::IComPoolTask>,CloakedIid<Windows::Internal::IAsyncFireCompletion> >
			{
				ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IAsyncOperation<Windows::Internal::SecurityKeyEnrollment::SecurityKeyFingerprintEnrollmentResult *>,Windows::Internal::IAsyncOperationLocal,CloakedIid<Windows::Internal::IAsyncDeferral>,CloakedIid<Windows::Internal::IComPoolTask>,CloakedIid<Windows::Internal::IAsyncFireCompletion> >();
			};

			struct ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IAsyncOperation<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::SecurityKeyPinOperationInfo *>,Windows::Internal::IAsyncOperationLocal,CloakedIid<Windows::Internal::IAsyncDeferral>,CloakedIid<Windows::Internal::IComPoolTask>,CloakedIid<Windows::Internal::IAsyncFireCompletion> >
			{
				ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IAsyncOperation<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::SecurityKeyPinOperationInfo *>,Windows::Internal::IAsyncOperationLocal,CloakedIid<Windows::Internal::IAsyncDeferral>,CloakedIid<Windows::Internal::IComPoolTask>,CloakedIid<Windows::Internal::IAsyncFireCompletion> >();
			};

			struct ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IAsyncOperation<Windows::Internal::UI::BioEnrollment::DataModel::UserVerificationInfo *>,Windows::Internal::IAsyncOperationLocal,CloakedIid<Windows::Internal::IAsyncDeferral>,CloakedIid<Windows::Internal::IComPoolTask>,CloakedIid<Windows::Internal::IAsyncFireCompletion> >
			{
				ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IAsyncOperation<Windows::Internal::UI::BioEnrollment::DataModel::UserVerificationInfo *>,Windows::Internal::IAsyncOperationLocal,CloakedIid<Windows::Internal::IAsyncDeferral>,CloakedIid<Windows::Internal::IComPoolTask>,CloakedIid<Windows::Internal::IAsyncFireCompletion> >();
			};

			struct ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IAsyncOperation<bool>,Windows::Internal::IAsyncOperationLocal,CloakedIid<Windows::Internal::IAsyncDeferral>,CloakedIid<Windows::Internal::IComPoolTask>,CloakedIid<Windows::Internal::IAsyncFireCompletion> >
			{
				ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IAsyncOperation<bool>,Windows::Internal::IAsyncOperationLocal,CloakedIid<Windows::Internal::IAsyncDeferral>,CloakedIid<Windows::Internal::IComPoolTask>,CloakedIid<Windows::Internal::IAsyncFireCompletion> >();
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ModalExperience::IModalWindowExperienceManager *,Windows::Internal::Shell::ModalExperience::IModalExperienceEventArgs *>,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWinBioAsyncCallback,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,Windows::Foundation::IAsyncAction,Windows::Internal::IAsyncOperationLocal,CloakedIid<Windows::Internal::IAsyncDeferral>,CloakedIid<Windows::Internal::IComPoolTask>,CloakedIid<Windows::Internal::IAsyncFireCompletion> >
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,Windows::Foundation::IAsyncOperation<Windows::Internal::SecurityKeyEnrollment::SecurityKeyContext *>,Windows::Internal::IAsyncOperationLocal,CloakedIid<Windows::Internal::IAsyncDeferral>,CloakedIid<Windows::Internal::IComPoolTask>,CloakedIid<Windows::Internal::IAsyncFireCompletion> >
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			public:
				ImplementsHelper<RuntimeClassFlags<3>,1,Windows::Foundation::IAsyncOperation<Windows::Internal::SecurityKeyEnrollment::SecurityKeyContext *>,Windows::Internal::IAsyncOperationLocal,CloakedIid<Windows::Internal::IAsyncDeferral>,CloakedIid<Windows::Internal::IComPoolTask>,CloakedIid<Windows::Internal::IAsyncFireCompletion> >();
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,Windows::Foundation::IAsyncOperation<Windows::Internal::SecurityKeyEnrollment::SecurityKeyFingerprintEnrollmentResult *>,Windows::Internal::IAsyncOperationLocal,CloakedIid<Windows::Internal::IAsyncDeferral>,CloakedIid<Windows::Internal::IComPoolTask>,CloakedIid<Windows::Internal::IAsyncFireCompletion> >
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			public:
				ImplementsHelper<RuntimeClassFlags<3>,1,Windows::Foundation::IAsyncOperation<Windows::Internal::SecurityKeyEnrollment::SecurityKeyFingerprintEnrollmentResult *>,Windows::Internal::IAsyncOperationLocal,CloakedIid<Windows::Internal::IAsyncDeferral>,CloakedIid<Windows::Internal::IComPoolTask>,CloakedIid<Windows::Internal::IAsyncFireCompletion> >();
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,Windows::Foundation::IAsyncOperation<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::SecurityKeyPinOperationInfo *>,Windows::Internal::IAsyncOperationLocal,CloakedIid<Windows::Internal::IAsyncDeferral>,CloakedIid<Windows::Internal::IComPoolTask>,CloakedIid<Windows::Internal::IAsyncFireCompletion> >
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			public:
				ImplementsHelper<RuntimeClassFlags<3>,1,Windows::Foundation::IAsyncOperation<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::SecurityKeyPinOperationInfo *>,Windows::Internal::IAsyncOperationLocal,CloakedIid<Windows::Internal::IAsyncDeferral>,CloakedIid<Windows::Internal::IComPoolTask>,CloakedIid<Windows::Internal::IAsyncFireCompletion> >();
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,Windows::Foundation::IAsyncOperation<Windows::Internal::UI::BioEnrollment::DataModel::UserVerificationInfo *>,Windows::Internal::IAsyncOperationLocal,CloakedIid<Windows::Internal::IAsyncDeferral>,CloakedIid<Windows::Internal::IComPoolTask>,CloakedIid<Windows::Internal::IAsyncFireCompletion> >
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			public:
				ImplementsHelper<RuntimeClassFlags<3>,1,Windows::Foundation::IAsyncOperation<Windows::Internal::UI::BioEnrollment::DataModel::UserVerificationInfo *>,Windows::Internal::IAsyncOperationLocal,CloakedIid<Windows::Internal::IAsyncDeferral>,CloakedIid<Windows::Internal::IComPoolTask>,CloakedIid<Windows::Internal::IAsyncFireCompletion> >();
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,Windows::Foundation::IAsyncOperation<bool>,Windows::Internal::IAsyncOperationLocal,CloakedIid<Windows::Internal::IAsyncDeferral>,CloakedIid<Windows::Internal::IComPoolTask>,CloakedIid<Windows::Internal::IAsyncFireCompletion> >
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			public:
				ImplementsHelper<RuntimeClassFlags<3>,1,Windows::Foundation::IAsyncOperation<bool>,Windows::Internal::IAsyncOperationLocal,CloakedIid<Windows::Internal::IAsyncDeferral>,CloakedIid<Windows::Internal::IComPoolTask>,CloakedIid<Windows::Internal::IAsyncFireCompletion> >();
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ModalExperience::IModalWindowExperienceManager *,Windows::Internal::Shell::ModalExperience::IModalExperienceEventArgs *>,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,Windows::Internal::IAsyncOperationLocal,CloakedIid<Windows::Internal::IAsyncDeferral>,CloakedIid<Windows::Internal::IComPoolTask>,CloakedIid<Windows::Internal::IAsyncFireCompletion> >
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSession,IWinBioAsyncCallback,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<6>,0,IClassFactory,Nil,Nil,Nil,Nil>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			struct MakeAllocator<BioEnrollBroker>
			{
				~MakeAllocator<BioEnrollBroker>();
			};

			struct MakeAllocator<BioEnrollRetailDemo>
			{
				~MakeAllocator<BioEnrollRetailDemo>();
			};

			struct MakeAllocator<BioEnrollmentInstance>
			{
				~MakeAllocator<BioEnrollmentInstance>();
			};

			struct MakeAllocator<CloudExperienceHostBroker::Hello::HelloEnrollmentManager>
			{
				~MakeAllocator<CloudExperienceHostBroker::Hello::HelloEnrollmentManager>();
			};

			struct MakeAllocator<CloudExperienceHostBroker::Hello::HelloEnrollmentManagerFactoryStatics>
			{
				~MakeAllocator<CloudExperienceHostBroker::Hello::HelloEnrollmentManagerFactoryStatics>();
			};

			struct MakeAllocator<CloudExperienceHostBroker::Hello::HelloEnrollmentManagerForUser>
			{
				~MakeAllocator<CloudExperienceHostBroker::Hello::HelloEnrollmentManagerForUser>();
			};

			struct MakeAllocator<EventTargetArray>
			{
				~MakeAllocator<EventTargetArray>();
			};

			struct MakeAllocator<FaceEnrollmentManager>
			{
				~MakeAllocator<FaceEnrollmentManager>();
			};

			struct MakeAllocator<FaceEnrollmentStateData>
			{
				~MakeAllocator<FaceEnrollmentStateData>();
			};

			struct MakeAllocator<FaceSensorData>
			{
				~MakeAllocator<FaceSensorData>();
			};

			struct MakeAllocator<FingerprintEnrollmentManager>
			{
				~MakeAllocator<FingerprintEnrollmentManager>();
			};

			struct MakeAllocator<FingerprintEnrollmentStateData>
			{
				~MakeAllocator<FingerprintEnrollmentStateData>();
			};

			struct MakeAllocator<FingerprintSensorData>
			{
				~MakeAllocator<FingerprintSensorData>();
			};

			struct MakeAllocator<IrisEnrollmentManager>
			{
				~MakeAllocator<IrisEnrollmentManager>();
			};

			struct MakeAllocator<IrisEnrollmentStateData>
			{
				~MakeAllocator<IrisEnrollmentStateData>();
			};

			struct MakeAllocator<IrisEnrollmentUIGridPointData>
			{
				~MakeAllocator<IrisEnrollmentUIGridPointData>();
			};

			struct MakeAllocator<IrisEnrollmentUIUpdateRequestData>
			{
				~MakeAllocator<IrisEnrollmentUIUpdateRequestData>();
			};

			struct MakeAllocator<OOBEBioEnrollment>
			{
				~MakeAllocator<OOBEBioEnrollment>();
			};

			struct MakeAllocator<OOBEBioEnrollmentSession>
			{
				~MakeAllocator<OOBEBioEnrollmentSession>();
			};

			struct MakeAllocator<PinEnrollmentManager>
			{
				~MakeAllocator<PinEnrollmentManager>();
			};

			struct MakeAllocator<SecurityKeyEnrollmentArgsImpl>
			{
				~MakeAllocator<SecurityKeyEnrollmentArgsImpl>();
			};

			struct MakeAllocator<SecurityKeyEnrollmentManager>
			{
				~MakeAllocator<SecurityKeyEnrollmentManager>();
			};

			struct MakeAllocator<SecurityKeyFingerprintEnrollmentResultImpl>
			{
				~MakeAllocator<SecurityKeyFingerprintEnrollmentResultImpl>();
			};

			struct MakeAllocator<SecurityKeyFingerprintEnrollmentStateData>
			{
				~MakeAllocator<SecurityKeyFingerprintEnrollmentStateData>();
			};

			struct MakeAllocator<SecurityKeyPinOperationInfoImpl>
			{
				~MakeAllocator<SecurityKeyPinOperationInfoImpl>();
			};

			struct MakeAllocator<SecurityKeySession>
			{
				~MakeAllocator<SecurityKeySession>();
			};

			struct MakeAllocator<SelectionContext>
			{
				~MakeAllocator<SelectionContext>();
			};

			struct MakeAllocator<SimpleClassFactory<OOBEBioEnrollment,0> >
			{
				~MakeAllocator<SimpleClassFactory<OOBEBioEnrollment,0> >();
			};

			struct MakeAllocator<SimpleSealedActivationFactory<BioEnrollBroker,0> >
			{
				~MakeAllocator<SimpleSealedActivationFactory<BioEnrollBroker,0> >();
			};

			struct MakeAllocator<SimpleSealedActivationFactory<BioEnrollRetailDemo,0> >
			{
				~MakeAllocator<SimpleSealedActivationFactory<BioEnrollRetailDemo,0> >();
			};

			struct MakeAllocator<SimpleSealedActivationFactory<CloudExperienceHostBroker::Hello::HelloEnrollmentManager,0> >
			{
				~MakeAllocator<SimpleSealedActivationFactory<CloudExperienceHostBroker::Hello::HelloEnrollmentManager,0> >();
			};

			struct MakeAllocator<SimpleSealedActivationFactory<OOBEBioEnrollmentSession,0> >
			{
				~MakeAllocator<SimpleSealedActivationFactory<OOBEBioEnrollmentSession,0> >();
			};

			struct MakeAllocator<SimpleSealedActivationFactory<PinEnrollmentManager,0> >
			{
				~MakeAllocator<SimpleSealedActivationFactory<PinEnrollmentManager,0> >();
			};

			struct MakeAllocator<SimpleSealedActivationFactory<WinBioEnrollmentSessionFactory,0> >
			{
				~MakeAllocator<SimpleSealedActivationFactory<WinBioEnrollmentSessionFactory,0> >();
			};

			struct MakeAllocator<SimpleSealedActivationFactory<Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::ExtendedFingerprintSensorInfoBroker,0> >
			{
				~MakeAllocator<SimpleSealedActivationFactory<Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::ExtendedFingerprintSensorInfoBroker,0> >();
			};

			struct MakeAllocator<SuspendErrorStateData>
			{
				~MakeAllocator<SuspendErrorStateData>();
			};

			struct MakeAllocator<UserVerifyInfo>
			{
				~MakeAllocator<UserVerifyInfo>();
			};

			struct MakeAllocator<WeakReferenceImpl>
			{
				~MakeAllocator<WeakReferenceImpl>();
			};

			struct MakeAllocator<WinBioCallbackHandler>
			{
				~MakeAllocator<WinBioCallbackHandler>();
			};

			struct MakeAllocator<WinBioEnrollmentSessionFactory>
			{
				~MakeAllocator<WinBioEnrollmentSessionFactory>();
			};

			struct MakeAllocator<Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::Foundation::Point,Windows::Foundation::Collections::Internal::Vector<Windows::Foundation::Point,PointEqualityPredicate,PointLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Foundation::Point,0,1,0> >,PointLifetimeTraits,XWinRT::IntVersionTag,1> >
			{
				~MakeAllocator<Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::Foundation::Point,Windows::Foundation::Collections::Internal::Vector<Windows::Foundation::Point,PointEqualityPredicate,PointLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Foundation::Point,0,1,0> >,PointLifetimeTraits,XWinRT::IntVersionTag,1> >();
			};

			struct MakeAllocator<Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,Windows::Foundation::Collections::Internal::Vector<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,StageInfoEqualityPredicate,StageInfoLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0,1,0> >,StageInfoLifetimeTraits,XWinRT::IntVersionTag,1> >
			{
				~MakeAllocator<Windows::Foundation::Collections::Internal::SimpleVectorIterator<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,Windows::Foundation::Collections::Internal::Vector<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,StageInfoEqualityPredicate,StageInfoLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0,1,0> >,StageInfoLifetimeTraits,XWinRT::IntVersionTag,1> >();
			};

			struct MakeAllocator<Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::Foundation::Point,Windows::Foundation::Collections::Internal::Vector<Windows::Foundation::Point,PointEqualityPredicate,PointLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Foundation::Point,0,1,0> >,PointLifetimeTraits,XWinRT::IntVersionTag,1> >
			{
				~MakeAllocator<Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::Foundation::Point,Windows::Foundation::Collections::Internal::Vector<Windows::Foundation::Point,PointEqualityPredicate,PointLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Foundation::Point,0,1,0> >,PointLifetimeTraits,XWinRT::IntVersionTag,1> >();
			};

			struct MakeAllocator<Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,Windows::Foundation::Collections::Internal::Vector<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,StageInfoEqualityPredicate,StageInfoLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0,1,0> >,StageInfoLifetimeTraits,XWinRT::IntVersionTag,1> >
			{
				~MakeAllocator<Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,Windows::Foundation::Collections::Internal::Vector<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,StageInfoEqualityPredicate,StageInfoLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0,1,0> >,StageInfoLifetimeTraits,XWinRT::IntVersionTag,1> >();
			};

			struct MakeAllocator<Windows::Foundation::Collections::Internal::Vector<Windows::Foundation::Point,PointEqualityPredicate,PointLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Foundation::Point,0,1,0> > >
			{
				~MakeAllocator<Windows::Foundation::Collections::Internal::Vector<Windows::Foundation::Point,PointEqualityPredicate,PointLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Foundation::Point,0,1,0> > >();
			};

			struct MakeAllocator<Windows::Foundation::Collections::Internal::Vector<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,StageInfoEqualityPredicate,StageInfoLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0,1,0> > >
			{
				~MakeAllocator<Windows::Foundation::Collections::Internal::Vector<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,StageInfoEqualityPredicate,StageInfoLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0,1,0> > >();
			};

			struct MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<<lambda_c2fd7731c5ae0d37e65ea73be67c0f1b> > >
			{
				~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<<lambda_c2fd7731c5ae0d37e65ea73be67c0f1b> > >();
			};

			struct MakeAllocator<Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::ExtendedFingerprintSensorInfoBroker>
			{
				~MakeAllocator<Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::ExtendedFingerprintSensorInfoBroker>();
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

			struct RuntimeClass<InterfaceListHelper<IActivationFactory,Nil,Nil,Nil,Nil>,RuntimeClassFlags<13>,0,1,0>
			{
				RuntimeClass<InterfaceListHelper<IActivationFactory,Nil,Nil,Nil,Nil>,RuntimeClassFlags<13>,0,1,0>();
			};

			struct RuntimeClass<InterfaceListHelper<IClassFactory,Nil,Nil,Nil,Nil>,RuntimeClassFlags<6>,0,0,0>
			{
				RuntimeClass<InterfaceListHelper<IClassFactory,Nil,Nil,Nil,Nil>,RuntimeClassFlags<6>,0,0,0>();
			};

			class RuntimeClassBaseT<1>
			{
			protected:
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,CloudExperienceHostBroker::Hello::IHelloEnrollmentManager,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,CloudExperienceHostBroker::Hello::IHelloEnrollmentManager,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,CloudExperienceHostBroker::Hello::IHelloEnrollmentManager,IInspectable,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,CloudExperienceHostBroker::Hello::IHelloEnrollmentManager,IInspectable,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Foundation::Point>,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Foundation::Point>,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo>,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo>,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Foundation::Point>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Point>,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Foundation::Point>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Point>,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo>,Windows::Foundation::Collections::IIterable<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo>,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo>,Windows::Foundation::Collections::IIterable<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo>,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::Foundation::Point>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Point>,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::Foundation::Point>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Point>,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo>,Windows::Foundation::Collections::IIterable<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo>,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo>,Windows::Foundation::Collections::IIterable<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo>,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::SecurityKeyEnrollment::ISecurityKeyEnrollmentArgs,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::SecurityKeyEnrollment::ISecurityKeyEnrollmentArgs,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::SecurityKeyEnrollment::ISecurityKeyFingerprintEnrollmentResult,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::SecurityKeyEnrollment::ISecurityKeyFingerprintEnrollmentResult,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Face::IFaceEnrollmentStateInfo,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Face::IFaceEnrollmentStateInfo,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Face::IFaceEnrollmentStateManager,BaseEnrollmentManager> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Face::IFaceEnrollmentStateManager,BaseEnrollmentManager> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Face::IFaceSensorInfo,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Face::IFaceSensorInfo,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IFingerprintEnrollmentStateInfo,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IFingerprintEnrollmentStateInfo,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IFingerprintEnrollmentStateManager,BaseEnrollmentManager> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IFingerprintEnrollmentStateManager,BaseEnrollmentManager> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IFingerprintSensorInfo,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IFingerprintSensorInfo,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSession,Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyEnrollmentStateManager,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSession,Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyEnrollmentStateManager,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSessionFactory,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSessionFactory,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::IOOBEBioEnrollmentSessionFactory,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::IOOBEBioEnrollmentSessionFactory,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::ISuspendErrorStateInfo,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::ISuspendErrorStateInfo,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::IUserVerificationInfo,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::IUserVerificationInfo,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentStateInfo,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentStateInfo,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentStateManager,Windows::Internal::UI::BioEnrollment::DataModel::CClosableBase,BaseEnrollmentManager> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentStateManager,Windows::Internal::UI::BioEnrollment::DataModel::CClosableBase,BaseEnrollmentManager> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentUIGridPoint,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentUIGridPoint,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentUIUpdateRequest,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentUIUpdateRequest,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Pin::IPinEnrollmentManager,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Pin::IPinEnrollmentManager,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyFingerprintEnrollmentStateInfo,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyFingerprintEnrollmentStateInfo,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyPinOperationInfo,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyPinOperationInfo,FtmBase> *,_GUID const &,void * *);
			};

			class RuntimeClassBaseT<2>
			{
			protected:
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::SecurityKeyEnrollment::SecurityKeyContext *>,FtmBase> > >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::SecurityKeyEnrollment::SecurityKeyContext *>,FtmBase> > *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::SecurityKeyEnrollment::SecurityKeyFingerprintEnrollmentResult *>,IUnknown> > >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::SecurityKeyEnrollment::SecurityKeyFingerprintEnrollmentResult *>,IUnknown> > *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::SecurityKeyEnrollment::ISecurityKeyEnrollmentSession *,Windows::Internal::SecurityKeyEnrollment::SecurityKeyEnrollmentArgs *>,FtmBase> > >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::SecurityKeyEnrollment::ISecurityKeyEnrollmentSession *,Windows::Internal::SecurityKeyEnrollment::SecurityKeyEnrollmentArgs *>,FtmBase> > *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Auth::Enrollment::EnrollmentUpdateResult *>,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Auth::Enrollment::EnrollmentUpdateResult *>,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Auth::Enrollment::ICredentialEnrollment *>,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Auth::Enrollment::ICredentialEnrollment *>,FtmBase> *,_GUID const &,void * *);
			};

			class RuntimeClassBaseT<3>
			{
			protected:
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,IOOBEBioEnrollment,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,IOOBEBioEnrollment,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::SecurityKeyEnrollment::ISecurityKeyContext,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::SecurityKeyEnrollment::ISecurityKeyContext,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::SecurityKeyEnrollment::ISecurityKeyEnrollmentSession,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::SecurityKeyEnrollment::ISecurityKeyEnrollmentSession,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::BioEnrollment::Broker::IBioEnrollmentBroker,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::BioEnrollment::Broker::IBioEnrollmentBroker,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::BioEnrollment::Broker::IBioEnrollmentRetailDemo,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::BioEnrollment::Broker::IBioEnrollmentRetailDemo,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IExtendedFingerprintSensorInfoBroker,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IExtendedFingerprintSensorInfoBroker,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::IDispatchEvent> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::IDispatchEvent> *,_GUID const &,void * *);
				static long GetImplementedIIDS<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Implements<Windows::Internal::UI::BioEnrollment::Broker::IBioEnrollmentActivationArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,CActivatedEventArgsWithViewIdBase>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ModalExperience::IModalWindowExperienceManager *,Windows::Internal::Shell::ModalExperience::IModalExperienceEventArgs *>,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Implements<Windows::Internal::UI::BioEnrollment::Broker::IBioEnrollmentActivationArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,CActivatedEventArgsWithViewIdBase>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ModalExperience::IModalWindowExperienceManager *,Windows::Internal::Shell::ModalExperience::IModalExperienceEventArgs *>,FtmBase> *,unsigned long *,_GUID * *);
			};

			class RuntimeClassImpl<RuntimeClassFlags<13>,0,1,0,IActivationFactory,Nil,Nil,Nil,Nil>
			{
			protected:
				RuntimeClassImpl<RuntimeClassFlags<13>,0,1,0,IActivationFactory,Nil,Nil,Nil,Nil>();
			public:
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,CloudExperienceHostBroker::Hello::IHelloEnrollmentManager,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,CloudExperienceHostBroker::Hello::IHelloEnrollmentManager,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,CloudExperienceHostBroker::Hello::IHelloEnrollmentManager,IInspectable,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,CloudExperienceHostBroker::Hello::IHelloEnrollmentManager,IInspectable,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Foundation::Point>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Foundation::Point>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Foundation::Point>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Point>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Foundation::Point>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Point>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo>,Windows::Foundation::Collections::IIterable<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo>,Windows::Foundation::Collections::IIterable<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::Foundation::Point>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Point>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::Foundation::Point>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Point>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo>,Windows::Foundation::Collections::IIterable<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo>,Windows::Foundation::Collections::IIterable<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::SecurityKeyEnrollment::ISecurityKeyEnrollmentArgs,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::SecurityKeyEnrollment::ISecurityKeyEnrollmentArgs,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::SecurityKeyEnrollment::ISecurityKeyFingerprintEnrollmentResult,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::SecurityKeyEnrollment::ISecurityKeyFingerprintEnrollmentResult,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Face::IFaceEnrollmentStateInfo,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Face::IFaceEnrollmentStateInfo,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Face::IFaceEnrollmentStateManager,BaseEnrollmentManager>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Face::IFaceEnrollmentStateManager,BaseEnrollmentManager>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Face::IFaceSensorInfo,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Face::IFaceSensorInfo,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IFingerprintEnrollmentStateInfo,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IFingerprintEnrollmentStateInfo,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IFingerprintEnrollmentStateManager,BaseEnrollmentManager>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IFingerprintEnrollmentStateManager,BaseEnrollmentManager>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IFingerprintSensorInfo,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IFingerprintSensorInfo,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSession,Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyEnrollmentStateManager,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSession,Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyEnrollmentStateManager,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSessionFactory,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSessionFactory,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::IOOBEBioEnrollmentSessionFactory,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::IOOBEBioEnrollmentSessionFactory,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::ISuspendErrorStateInfo,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::ISuspendErrorStateInfo,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::IUserVerificationInfo,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::IUserVerificationInfo,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentStateInfo,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentStateInfo,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentStateManager,Windows::Internal::UI::BioEnrollment::DataModel::CClosableBase,BaseEnrollmentManager>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentStateManager,Windows::Internal::UI::BioEnrollment::DataModel::CClosableBase,BaseEnrollmentManager>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentUIGridPoint,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentUIGridPoint,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentUIUpdateRequest,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentUIUpdateRequest,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Pin::IPinEnrollmentManager,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Pin::IPinEnrollmentManager,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyFingerprintEnrollmentStateInfo,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyFingerprintEnrollmentStateInfo,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyPinOperationInfo,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyPinOperationInfo,FtmBase>();
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

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IWeakReference>
			{
			protected:
				RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IWeakReference>();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IWinBioAsyncCallback>
			{
			protected:
				RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IWinBioAsyncCallback>();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::SecurityKeyEnrollment::SecurityKeyContext *>,FtmBase> >
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::SecurityKeyEnrollment::SecurityKeyFingerprintEnrollmentResult *>,IUnknown> >
			{
			protected:
				RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::SecurityKeyEnrollment::SecurityKeyFingerprintEnrollmentResult *>,IUnknown> >();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::SecurityKeyEnrollment::ISecurityKeyEnrollmentSession *,Windows::Internal::SecurityKeyEnrollment::SecurityKeyEnrollmentArgs *>,FtmBase> >
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Auth::Enrollment::EnrollmentUpdateResult *>,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Auth::Enrollment::ICredentialEnrollment *>,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>
			{
			protected:
				RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,IOOBEBioEnrollment,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,IOOBEBioEnrollment,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Implements<Windows::Internal::UI::BioEnrollment::Broker::IBioEnrollmentActivationArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,CActivatedEventArgsWithViewIdBase>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ModalExperience::IModalWindowExperienceManager *,Windows::Internal::Shell::ModalExperience::IModalExperienceEventArgs *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Implements<Windows::Internal::UI::BioEnrollment::Broker::IBioEnrollmentActivationArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,CActivatedEventArgsWithViewIdBase>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ModalExperience::IModalWindowExperienceManager *,Windows::Internal::Shell::ModalExperience::IModalExperienceEventArgs *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::SecurityKeyEnrollment::ISecurityKeyContext,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::SecurityKeyEnrollment::ISecurityKeyContext,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::SecurityKeyEnrollment::ISecurityKeyEnrollmentSession,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::SecurityKeyEnrollment::ISecurityKeyEnrollmentSession,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::BioEnrollment::Broker::IBioEnrollmentBroker,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::BioEnrollment::Broker::IBioEnrollmentBroker,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::BioEnrollment::Broker::IBioEnrollmentRetailDemo,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::BioEnrollment::Broker::IBioEnrollmentRetailDemo,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IExtendedFingerprintSensorInfoBroker,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IExtendedFingerprintSensorInfoBroker,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::IDispatchEvent>
			{
				RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::IDispatchEvent>();
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Internal::UI::BioEnrollment::DataModel::IDispatchEvent>();
			};

			class RuntimeClassImpl<RuntimeClassFlags<6>,0,0,0,IClassFactory,Nil,Nil,Nil,Nil>
			{
			protected:
				RuntimeClassImpl<RuntimeClassFlags<6>,0,0,0,IClassFactory,Nil,Nil,Nil,Nil>();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct Selector<Implements<RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::SecurityKeyEnrollment::SecurityKeyFingerprintEnrollmentResult *>,IUnknown>,ImplementsHelper<RuntimeClassFlags<2>,0,ImplementsMarker<Implements<RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::SecurityKeyEnrollment::SecurityKeyFingerprintEnrollmentResult *>,IUnknown> > > >
			{
				Selector<Implements<RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::SecurityKeyEnrollment::SecurityKeyFingerprintEnrollmentResult *>,IUnknown>,ImplementsHelper<RuntimeClassFlags<2>,0,ImplementsMarker<Implements<RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::SecurityKeyEnrollment::SecurityKeyFingerprintEnrollmentResult *>,IUnknown> > > >();
			};

			struct Selector<Windows::Internal::UI::BioEnrollment::DataModel::CClosableBase,ImplementsHelper<RuntimeClassFlags<1>,1,ImplementsMarker<Windows::Internal::UI::BioEnrollment::DataModel::CClosableBase>,BaseEnrollmentManager> >
			{
				Selector<Windows::Internal::UI::BioEnrollment::DataModel::CClosableBase,ImplementsHelper<RuntimeClassFlags<1>,1,ImplementsMarker<Windows::Internal::UI::BioEnrollment::DataModel::CClosableBase>,BaseEnrollmentManager> >();
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
			long CreateActivationFactory<CloudExperienceHostBroker::Hello::HelloEnrollmentManagerFactoryStatics>(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<SimpleSealedActivationFactory<BioEnrollBroker,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<SimpleSealedActivationFactory<BioEnrollRetailDemo,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<SimpleSealedActivationFactory<CloudExperienceHostBroker::Hello::HelloEnrollmentManager,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<SimpleSealedActivationFactory<OOBEBioEnrollmentSession,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<SimpleSealedActivationFactory<PinEnrollmentManager,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<SimpleSealedActivationFactory<WinBioEnrollmentSessionFactory,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<SimpleSealedActivationFactory<Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::ExtendedFingerprintSensorInfoBroker,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateClassFactory<SimpleClassFactory<OOBEBioEnrollment,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long GetActivationFactory<1>(Details::ModuleBase *,unsigned short const *,HSTRING__ *,IActivationFactory * *);
			long GetCacheEntry(Details::ModuleBase *,unsigned int *,_GUID const &,Details::CreatorMap const *,IUnknown * *);
			long GetClassObject<1>(Details::ModuleBase *,unsigned short const *,_GUID const &,_GUID const &,void * *);
			long MakeAndInitialize<CloudExperienceHostBroker::Hello::HelloEnrollmentManagerForUser,CloudExperienceHostBroker::Hello::IHelloEnrollmentManager,Windows::System::IUser * &>(CloudExperienceHostBroker::Hello::IHelloEnrollmentManager * *,Windows::System::IUser * &);
			long MakeAndInitialize<EventTargetArray,EventTargetArray,unsigned __int64 &>(Details::EventTargetArray * *,unsigned __int64 &);
			long MakeAndInitialize<IrisEnrollmentUIGridPointData,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentUIGridPoint,unsigned short &,unsigned long &,double &,double &,double &>(Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentUIGridPoint * *,unsigned short &,unsigned long &,double &,double &,double &);
			long MakeAndInitialize<IrisEnrollmentUIUpdateRequestData,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentUIUpdateRequest,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentUIGridPoint * &>(Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentUIUpdateRequest * *,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentUIGridPoint * &);
			unsigned long SafeUnknownDecrementReference(long volatile &);
			unsigned long SafeUnknownIncrementReference(long volatile &);
			void RaiseException(long,unsigned long);
		};

		struct ErrorPropagationPolicyTraits<-1>
		{
			static long FireCompletionErrorPropagationPolicyFilter(long,IUnknown *,void *);
			static long FireProgressErrorPropagationPolicyFilter(long,IUnknown *,void *);
		};

		class EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::SecurityKeyEnrollment::ISecurityKeyEnrollmentSession *,Windows::Internal::SecurityKeyEnrollment::SecurityKeyEnrollmentArgs *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::ITypedEventHandler<Windows::Internal::SecurityKeyEnrollment::ISecurityKeyEnrollmentSession *,Windows::Internal::SecurityKeyEnrollment::SecurityKeyEnrollmentArgs *> *,void *,EventRegistrationToken *);
			long DoInvoke<<lambda_50d3e4d8fbece6a4c9890f7da084ebc4> >(<lambda_50d3e4d8fbece6a4c9890f7da084ebc4>);
		public:
			long Remove(EventRegistrationToken);
			~EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::SecurityKeyEnrollment::ISecurityKeyEnrollmentSession *,Windows::Internal::SecurityKeyEnrollment::SecurityKeyEnrollmentArgs *>,InvokeModeOptions<-2> >();
		};

		class EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::Broker::BioEnrollmentActivationArgs *,IInspectable *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::Broker::BioEnrollmentActivationArgs *,IInspectable *> *,void *,EventRegistrationToken *);
			long DoInvoke<<lambda_9c7ddf01a5e40d352ffc99850bb89d80> >(<lambda_9c7ddf01a5e40d352ffc99850bb89d80>);
		public:
			long Remove(EventRegistrationToken);
			~EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::Broker::BioEnrollmentActivationArgs *,IInspectable *>,InvokeModeOptions<-2> >();
		};

		class EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::Face::IFaceEnrollmentStateManager *,Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceEnrollmentStateInfo *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::Face::IFaceEnrollmentStateManager *,Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceEnrollmentStateInfo *> *,void *,EventRegistrationToken *);
			long DoInvoke<<lambda_3cf3e592cbd1e2d31290be5c1fcb3de0> >(<lambda_3cf3e592cbd1e2d31290be5c1fcb3de0>);
		public:
			long InvokeAll<FaceEnrollmentManager *,Windows::Internal::UI::BioEnrollment::DataModel::Face::IFaceEnrollmentStateInfo *>(FaceEnrollmentManager *,Windows::Internal::UI::BioEnrollment::DataModel::Face::IFaceEnrollmentStateInfo *);
			long Remove(EventRegistrationToken);
			~EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::Face::IFaceEnrollmentStateManager *,Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceEnrollmentStateInfo *>,InvokeModeOptions<-2> >();
		};

		class EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IFingerprintEnrollmentStateManager *,Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::FingerprintEnrollmentStateInfo *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IFingerprintEnrollmentStateManager *,Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::FingerprintEnrollmentStateInfo *> *,void *,EventRegistrationToken *);
			long DoInvoke<<lambda_782fa201292a994fcb44a8e995c36937> >(<lambda_782fa201292a994fcb44a8e995c36937>);
		public:
			long InvokeAll<FingerprintEnrollmentManager *,Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IFingerprintEnrollmentStateInfo *>(FingerprintEnrollmentManager *,Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IFingerprintEnrollmentStateInfo *);
			long Remove(EventRegistrationToken);
			~EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IFingerprintEnrollmentStateManager *,Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::FingerprintEnrollmentStateInfo *>,InvokeModeOptions<-2> >();
		};

		class EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IFingerprintEnrollmentStateManager *,Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::FingerprintSensorInfo *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IFingerprintEnrollmentStateManager *,Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::FingerprintSensorInfo *> *,void *,EventRegistrationToken *);
			long DoInvoke<<lambda_406b7a335f7c58155bda28508fdb1bb5> >(<lambda_406b7a335f7c58155bda28508fdb1bb5>);
		public:
			long InvokeAll<FingerprintEnrollmentManager *,Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IFingerprintSensorInfo *>(FingerprintEnrollmentManager *,Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IFingerprintSensorInfo *);
			long Remove(EventRegistrationToken);
			~EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IFingerprintEnrollmentStateManager *,Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::FingerprintSensorInfo *>,InvokeModeOptions<-2> >();
		};

		class EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSession *,IInspectable *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSession *,IInspectable *> *,void *,EventRegistrationToken *);
			long DoInvoke<<lambda_dba3522e65f0465c320a55a70fcc5793> >(<lambda_dba3522e65f0465c320a55a70fcc5793>);
			long DoInvoke<<lambda_f7ed35340dbe9eb0313051ea5462667d> >(<lambda_f7ed35340dbe9eb0313051ea5462667d>);
		public:
			EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSession *,IInspectable *>,InvokeModeOptions<-2> >();
			long Remove(EventRegistrationToken);
			~EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSession *,IInspectable *>,InvokeModeOptions<-2> >();
		};

		class EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSession *,Windows::Internal::UI::BioEnrollment::DataModel::SuspendErrorStateInfo *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSession *,Windows::Internal::UI::BioEnrollment::DataModel::SuspendErrorStateInfo *> *,void *,EventRegistrationToken *);
			long DoInvoke<<lambda_1689f1ffd4fe05f5475239218313cdda> >(<lambda_1689f1ffd4fe05f5475239218313cdda>);
			long DoInvoke<<lambda_2d3c0ec8f4ba2b37e6c57701ee887e80> >(<lambda_2d3c0ec8f4ba2b37e6c57701ee887e80>);
		public:
			EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSession *,Windows::Internal::UI::BioEnrollment::DataModel::SuspendErrorStateInfo *>,InvokeModeOptions<-2> >();
			long InvokeAll<BaseEnrollmentManager *,Windows::Internal::UI::BioEnrollment::DataModel::ISuspendErrorStateInfo *>(BaseEnrollmentManager *,Windows::Internal::UI::BioEnrollment::DataModel::ISuspendErrorStateInfo *);
			long InvokeAll<SecurityKeyEnrollmentManager *,Windows::Internal::UI::BioEnrollment::DataModel::ISuspendErrorStateInfo *>(SecurityKeyEnrollmentManager *,Windows::Internal::UI::BioEnrollment::DataModel::ISuspendErrorStateInfo *);
			long Remove(EventRegistrationToken);
			~EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSession *,Windows::Internal::UI::BioEnrollment::DataModel::SuspendErrorStateInfo *>,InvokeModeOptions<-2> >();
		};

		class EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentStateManager *,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IrisEnrollmentStateInfo *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentStateManager *,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IrisEnrollmentStateInfo *> *,void *,EventRegistrationToken *);
			long DoInvoke<<lambda_afbc94524d11e3367ca3ec380b5bf60e> >(<lambda_afbc94524d11e3367ca3ec380b5bf60e>);
		public:
			long InvokeAll<IrisEnrollmentManager *,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentStateInfo *>(IrisEnrollmentManager *,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentStateInfo *);
			long Remove(EventRegistrationToken);
			~EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentStateManager *,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IrisEnrollmentStateInfo *>,InvokeModeOptions<-2> >();
		};

		class EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentStateManager *,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IrisEnrollmentUIUpdateRequest *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentStateManager *,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IrisEnrollmentUIUpdateRequest *> *,void *,EventRegistrationToken *);
			long DoInvoke<<lambda_67ead60c450d897f44f773a95c0508fa> >(<lambda_67ead60c450d897f44f773a95c0508fa>);
		public:
			long InvokeAll<IrisEnrollmentManager *,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentUIUpdateRequest *>(IrisEnrollmentManager *,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentUIUpdateRequest *);
			long Remove(EventRegistrationToken);
			~EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentStateManager *,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IrisEnrollmentUIUpdateRequest *>,InvokeModeOptions<-2> >();
		};

		class EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyEnrollmentStateManager *,IInspectable *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyEnrollmentStateManager *,IInspectable *> *,void *,EventRegistrationToken *);
			long DoInvoke<<lambda_25cf7b0fede95c165696c95a4486c005> >(<lambda_25cf7b0fede95c165696c95a4486c005>);
		public:
			EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyEnrollmentStateManager *,IInspectable *>,InvokeModeOptions<-2> >();
			long Remove(EventRegistrationToken);
			~EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyEnrollmentStateManager *,IInspectable *>,InvokeModeOptions<-2> >();
		};

		class EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyEnrollmentStateManager *,Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::SecurityKeyFingerprintEnrollmentStateInfo *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyEnrollmentStateManager *,Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::SecurityKeyFingerprintEnrollmentStateInfo *> *,void *,EventRegistrationToken *);
			long DoInvoke<<lambda_e94a9c3b15628e4589ccd5ce55d980e3> >(<lambda_e94a9c3b15628e4589ccd5ce55d980e3>);
		public:
			long InvokeAll<SecurityKeyEnrollmentManager *,Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyFingerprintEnrollmentStateInfo *>(SecurityKeyEnrollmentManager *,Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyFingerprintEnrollmentStateInfo *);
			long Remove(EventRegistrationToken);
			~EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyEnrollmentStateManager *,Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::SecurityKeyFingerprintEnrollmentStateInfo *>,InvokeModeOptions<-2> >();
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

		class Implements<FtmBase,CloudExperienceHostBroker::Hello::IHelloEnrollmentManagerFactoryStatics>
		{
		protected:
			void FillArrayWithIid(unsigned long *,_GUID *);
		};

		struct Implements<RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::SecurityKeyEnrollment::SecurityKeyFingerprintEnrollmentResult *>,IUnknown>
		{
			Implements<RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::SecurityKeyEnrollment::SecurityKeyFingerprintEnrollmentResult *>,IUnknown>();
		};

		class Implements<RuntimeClassFlags<3>,Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSession,IWinBioAsyncCallback,FtmBase>
		{
		protected:
			void FillArrayWithIid(unsigned long *,_GUID *);
		};

		class Implements<Windows::ApplicationModel::Activation::IActivatedEventArgs,Windows::ApplicationModel::Activation::IActivatedEventArgsWithUser,CloakedIid<Windows::ApplicationModel::Activation::IInitializeActivatedEventArgs>,CloakedIid<Windows::ApplicationModel::Activation::IActivatedEventArgsInternal>,FtmBase>
		{
		protected:
			void FillArrayWithIid(unsigned long *,_GUID *);
		};

		struct InvokeTraits<-2>
		{
			static long InvokeDelegates<<lambda_1689f1ffd4fe05f5475239218313cdda>,Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSession *,Windows::Internal::UI::BioEnrollment::DataModel::SuspendErrorStateInfo *> >(<lambda_1689f1ffd4fe05f5475239218313cdda>,Details::EventTargetArray *,EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSession *,Windows::Internal::UI::BioEnrollment::DataModel::SuspendErrorStateInfo *>,InvokeModeOptions<-2> > *);
			static long InvokeDelegates<<lambda_25cf7b0fede95c165696c95a4486c005>,Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyEnrollmentStateManager *,IInspectable *> >(<lambda_25cf7b0fede95c165696c95a4486c005>,Details::EventTargetArray *,EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyEnrollmentStateManager *,IInspectable *>,InvokeModeOptions<-2> > *);
			static long InvokeDelegates<<lambda_2d3c0ec8f4ba2b37e6c57701ee887e80>,Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSession *,Windows::Internal::UI::BioEnrollment::DataModel::SuspendErrorStateInfo *> >(<lambda_2d3c0ec8f4ba2b37e6c57701ee887e80>,Details::EventTargetArray *,EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSession *,Windows::Internal::UI::BioEnrollment::DataModel::SuspendErrorStateInfo *>,InvokeModeOptions<-2> > *);
			static long InvokeDelegates<<lambda_3cf3e592cbd1e2d31290be5c1fcb3de0>,Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::Face::IFaceEnrollmentStateManager *,Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceEnrollmentStateInfo *> >(<lambda_3cf3e592cbd1e2d31290be5c1fcb3de0>,Details::EventTargetArray *,EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::Face::IFaceEnrollmentStateManager *,Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceEnrollmentStateInfo *>,InvokeModeOptions<-2> > *);
			static long InvokeDelegates<<lambda_406b7a335f7c58155bda28508fdb1bb5>,Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IFingerprintEnrollmentStateManager *,Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::FingerprintSensorInfo *> >(<lambda_406b7a335f7c58155bda28508fdb1bb5>,Details::EventTargetArray *,EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IFingerprintEnrollmentStateManager *,Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::FingerprintSensorInfo *>,InvokeModeOptions<-2> > *);
			static long InvokeDelegates<<lambda_50d3e4d8fbece6a4c9890f7da084ebc4>,Windows::Foundation::ITypedEventHandler<Windows::Internal::SecurityKeyEnrollment::ISecurityKeyEnrollmentSession *,Windows::Internal::SecurityKeyEnrollment::SecurityKeyEnrollmentArgs *> >(<lambda_50d3e4d8fbece6a4c9890f7da084ebc4>,Details::EventTargetArray *,EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::SecurityKeyEnrollment::ISecurityKeyEnrollmentSession *,Windows::Internal::SecurityKeyEnrollment::SecurityKeyEnrollmentArgs *>,InvokeModeOptions<-2> > *);
			static long InvokeDelegates<<lambda_67ead60c450d897f44f773a95c0508fa>,Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentStateManager *,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IrisEnrollmentUIUpdateRequest *> >(<lambda_67ead60c450d897f44f773a95c0508fa>,Details::EventTargetArray *,EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentStateManager *,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IrisEnrollmentUIUpdateRequest *>,InvokeModeOptions<-2> > *);
			static long InvokeDelegates<<lambda_782fa201292a994fcb44a8e995c36937>,Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IFingerprintEnrollmentStateManager *,Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::FingerprintEnrollmentStateInfo *> >(<lambda_782fa201292a994fcb44a8e995c36937>,Details::EventTargetArray *,EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::IFingerprintEnrollmentStateManager *,Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::FingerprintEnrollmentStateInfo *>,InvokeModeOptions<-2> > *);
			static long InvokeDelegates<<lambda_9c7ddf01a5e40d352ffc99850bb89d80>,Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::Broker::BioEnrollmentActivationArgs *,IInspectable *> >(<lambda_9c7ddf01a5e40d352ffc99850bb89d80>,Details::EventTargetArray *,EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::Broker::BioEnrollmentActivationArgs *,IInspectable *>,InvokeModeOptions<-2> > *);
			static long InvokeDelegates<<lambda_afbc94524d11e3367ca3ec380b5bf60e>,Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentStateManager *,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IrisEnrollmentStateInfo *> >(<lambda_afbc94524d11e3367ca3ec380b5bf60e>,Details::EventTargetArray *,EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentStateManager *,Windows::Internal::UI::BioEnrollment::DataModel::Iris::IrisEnrollmentStateInfo *>,InvokeModeOptions<-2> > *);
			static long InvokeDelegates<<lambda_dba3522e65f0465c320a55a70fcc5793>,Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSession *,IInspectable *> >(<lambda_dba3522e65f0465c320a55a70fcc5793>,Details::EventTargetArray *,EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSession *,IInspectable *>,InvokeModeOptions<-2> > *);
			static long InvokeDelegates<<lambda_e94a9c3b15628e4589ccd5ce55d980e3>,Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyEnrollmentStateManager *,Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::SecurityKeyFingerprintEnrollmentStateInfo *> >(<lambda_e94a9c3b15628e4589ccd5ce55d980e3>,Details::EventTargetArray *,EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyEnrollmentStateManager *,Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::SecurityKeyFingerprintEnrollmentStateInfo *>,InvokeModeOptions<-2> > *);
			static long InvokeDelegates<<lambda_f7ed35340dbe9eb0313051ea5462667d>,Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSession *,IInspectable *> >(<lambda_f7ed35340dbe9eb0313051ea5462667d>,Details::EventTargetArray *,EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSession *,IInspectable *>,InvokeModeOptions<-2> > *);
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

		struct RuntimeClass<RuntimeClassFlags<2>,Implements<RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::SecurityKeyEnrollment::SecurityKeyFingerprintEnrollmentResult *>,IUnknown> >
		{
			RuntimeClass<RuntimeClassFlags<2>,Implements<RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::SecurityKeyEnrollment::SecurityKeyFingerprintEnrollmentResult *>,IUnknown> >();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>
		{
			RuntimeClass<RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>();
		};

		struct RuntimeClass<RuntimeClassFlags<3>,Implements<Windows::Internal::UI::BioEnrollment::Broker::IBioEnrollmentActivationArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,CActivatedEventArgsWithViewIdBase>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ModalExperience::IModalWindowExperienceManager *,Windows::Internal::Shell::ModalExperience::IModalExperienceEventArgs *>,FtmBase>
		{
			RuntimeClass<RuntimeClassFlags<3>,Implements<Windows::Internal::UI::BioEnrollment::Broker::IBioEnrollmentActivationArgs,Windows::ApplicationModel::Activation::ILaunchActivatedEventArgs,CActivatedEventArgsWithViewIdBase>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ModalExperience::IModalWindowExperienceManager *,Windows::Internal::Shell::ModalExperience::IModalExperienceEventArgs *>,FtmBase>();
		};

		struct RuntimeClass<RuntimeClassFlags<3>,Windows::Internal::UI::BioEnrollment::DataModel::IDispatchEvent>
		{
			RuntimeClass<RuntimeClassFlags<3>,Windows::Internal::UI::BioEnrollment::DataModel::IDispatchEvent>();
		};

		struct RuntimeClass<Windows::Internal::UI::BioEnrollment::DataModel::Face::IFaceEnrollmentStateManager,BaseEnrollmentManager>
		{
			RuntimeClass<Windows::Internal::UI::BioEnrollment::DataModel::Face::IFaceEnrollmentStateManager,BaseEnrollmentManager>();
		};

		struct RuntimeClass<Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentStateManager,Windows::Internal::UI::BioEnrollment::DataModel::CClosableBase,BaseEnrollmentManager>
		{
			RuntimeClass<Windows::Internal::UI::BioEnrollment::DataModel::Iris::IIrisEnrollmentStateManager,Windows::Internal::UI::BioEnrollment::DataModel::CClosableBase,BaseEnrollmentManager>();
		};

		struct SimpleActivationFactory<BioEnrollBroker,0>
		{
			virtual long ActivateInstance(IInspectable * *);
		};

		struct SimpleActivationFactory<BioEnrollRetailDemo,0>
		{
			virtual long ActivateInstance(IInspectable * *);
		};

		struct SimpleActivationFactory<CloudExperienceHostBroker::Hello::HelloEnrollmentManager,0>
		{
			virtual long ActivateInstance(IInspectable * *);
		};

		struct SimpleActivationFactory<OOBEBioEnrollmentSession,0>
		{
			virtual long ActivateInstance(IInspectable * *);
		};

		struct SimpleActivationFactory<PinEnrollmentManager,0>
		{
			virtual long ActivateInstance(IInspectable * *);
		};

		struct SimpleActivationFactory<WinBioEnrollmentSessionFactory,0>
		{
			virtual long ActivateInstance(IInspectable * *);
		};

		struct SimpleActivationFactory<Windows::Internal::UI::BioEnrollment::DataModel::Fingerprint::ExtendedFingerprintSensorInfoBroker,0>
		{
			virtual long ActivateInstance(IInspectable * *);
		};

		struct SimpleClassFactory<OOBEBioEnrollment,0>
		{
			SimpleClassFactory<OOBEBioEnrollment,0>();
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
				long Set(HSTRING__ * const &);
				long Set(unsigned short const *,unsigned int);
				long Set<260>(unsigned short (&)[260]);
				long Set<unsigned short const *>(unsigned short const * const &,Details::Dummy);
				~HString();
			};

			class HStringReference
			{
				static unsigned int AddOne(unsigned int);
				void CreateReference(unsigned short const *,unsigned int,unsigned int);
			public:
				HStringReference<unsigned short const *>(unsigned short const * const &,Details::Dummy);
				~HStringReference();
			};

			struct SRWLock
			{
				static Details::SyncLockExclusive LockExclusive(_RTL_SRWLOCK *);
				static Details::SyncLockShared LockShared(_RTL_SRWLOCK *);
			};

		};

		Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics * gCausality;
		_RTL_RUN_ONCE gCausalityInitOnce;
		long AsWeak<IInspectable>(IInspectable *,WRL::WeakRef *);
		long AsWeak<Windows::Internal::UI::BioEnrollment::Broker::IBioEnrollmentActivationArgs>(Windows::Internal::UI::BioEnrollment::Broker::IBioEnrollmentActivationArgs *,WRL::WeakRef *);
		long AsWeak<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyEnrollmentStateManager>(Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyEnrollmentStateManager *,WRL::WeakRef *);
	};

};

struct OOBEBioEnrollment
{
	long UserHasPassword(bool *);
	virtual long CreateBioEnrollmentSession(unsigned long,IInspectable * *);
	virtual long DeleteBioTemplates();
	virtual long GetSupportedEnrollmentKinds(unsigned long *);
	virtual long SuppressDelayLock();
};

struct OOBEBioEnrollmentSession
{
	static TrustLevel InternalGetTrustLevel();
	static unsigned short const * InternalGetRuntimeClassName();
	virtual long CreateBioEnrollmentSession(Windows::Internal::UI::BioEnrollment::DataModel::EnrollmentKind,Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSession * *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct PinEnrollmentManager
{
	static TrustLevel InternalGetTrustLevel();
	static unsigned short const * InternalGetRuntimeClassName();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long IsPinEnrolled(unsigned char *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct RpcOptionsHelper
{
	static long GetRpcOptions(IUnknown *,bool,IRpcOptions * *);
};

struct SecurityKeyEnrollmentArgsImpl
{
	SecurityKeyEnrollmentArgsImpl();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_IsFatalError(unsigned char *);
	virtual long get_Message(HSTRING__ * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~SecurityKeyEnrollmentArgsImpl();
};

class SecurityKeyEnrollmentManager
{
	long CancelPinOperation();
	long HStringFromResource(unsigned int,HSTRING__ * *);
	long HandleFingerprintCaptureResult(Windows::Internal::SecurityKeyEnrollment::ISecurityKeyFingerprintEnrollmentResult *);
	long HandlePinOperationResult(Windows::Internal::SecurityKeyEnrollment::SecurityKeyPinOperationResult *,Windows::Internal::CMarshaledInterfaceResult<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyPinOperationInfo> &);
	long NotifyFingerprintEnrollmentCompleted();
	long NotifyFingerprintEnrollmentError();
	long NotifyFingerprintEnrollmentStateChanged();
	long SelectSecurityKeyInternal();
	long UpdateAndNotifyDeviceStateChangedMessage(unsigned short const *);
	long UpdateAndNotifyFatalError();
	long UpdateAndNotifyIsSecurityKeyReady(unsigned char);
public:
	SecurityKeyEnrollmentManager();
	long RuntimeClassInitialize(Windows::Internal::UI::BioEnrollment::DataModel::IUIThreadEventDispatcher *,Windows::Internal::UI::BioEnrollment::DataModel::EnrollmentContext);
	virtual long AuthenticatePin(HSTRING__ *,Windows::Foundation::IAsyncOperation<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::SecurityKeyPinOperationInfo *> * *);
	virtual long CancelEnrollment();
	virtual long ChangePin(HSTRING__ *,HSTRING__ *,Windows::Foundation::IAsyncOperation<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::SecurityKeyPinOperationInfo *> * *);
	virtual long RemoveFingerprint(Windows::Foundation::IAsyncAction * *);
	virtual long ResetSecurityKey(Windows::Foundation::IAsyncOperation<bool> * *);
	virtual long SelectSecurityKey();
	virtual long SetPin(HSTRING__ *,Windows::Foundation::IAsyncOperation<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::SecurityKeyPinOperationInfo *> * *);
	virtual long StartEnrollment();
	virtual long StartIdentify();
	virtual long VerifyUserAsync(Windows::Foundation::IAsyncOperation<Windows::Internal::UI::BioEnrollment::DataModel::UserVerificationInfo *> * *);
	virtual long add_DeviceStateChangedIsFatalErrorUpdated(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyEnrollmentStateManager *,IInspectable *> *,EventRegistrationToken *);
	virtual long add_DeviceStateChangedMessageUpdated(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyEnrollmentStateManager *,IInspectable *> *,EventRegistrationToken *);
	virtual long add_EnrollmentCompleted(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSession *,IInspectable *> *,EventRegistrationToken *);
	virtual long add_EnrollmentError(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSession *,Windows::Internal::UI::BioEnrollment::DataModel::SuspendErrorStateInfo *> *,EventRegistrationToken *);
	virtual long add_EnrollmentPhaseReset(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSession *,IInspectable *> *,EventRegistrationToken *);
	virtual long add_FingerprintEnrollmentStateUpdated(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyEnrollmentStateManager *,Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::SecurityKeyFingerprintEnrollmentStateInfo *> *,EventRegistrationToken *);
	virtual long add_IsSecurityKeyReadyChanged(Windows::Foundation::ITypedEventHandler<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyEnrollmentStateManager *,IInspectable *> *,EventRegistrationToken *);
	virtual long get_DeviceStateChangedIsFatalError(unsigned char *);
	virtual long get_DeviceStateChangedMessage(HSTRING__ * *);
	virtual long get_EnrollmentContext(Windows::Internal::UI::BioEnrollment::DataModel::EnrollmentContext *);
	virtual long get_EnrollmentInProgress(unsigned char *);
	virtual long get_FingerprintEnrollmentState(Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyFingerprintEnrollmentStateInfo * *);
	virtual long get_IsSecurityKeyReady(unsigned char *);
	virtual long get_SecurityKeyFingerprintState(Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::SecurityKeyFingerprintState *);
	virtual long get_SecurityKeyPinState(Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::SecurityKeyPinState *);
	virtual long get_SelectedEnrollmentType(Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::SecurityKeySelectedEnrollmentType *);
	virtual long put_SelectedEnrollmentType(Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::SecurityKeySelectedEnrollmentType);
	virtual long remove_DeviceStateChangedIsFatalErrorUpdated(EventRegistrationToken);
	virtual long remove_DeviceStateChangedMessageUpdated(EventRegistrationToken);
	virtual long remove_EnrollmentCompleted(EventRegistrationToken);
	virtual long remove_EnrollmentError(EventRegistrationToken);
	virtual long remove_EnrollmentPhaseReset(EventRegistrationToken);
	virtual long remove_FingerprintEnrollmentStateUpdated(EventRegistrationToken);
	virtual long remove_IsSecurityKeyReadyChanged(EventRegistrationToken);
	virtual ~SecurityKeyEnrollmentManager();
};

struct SecurityKeyFingerprintEnrollmentResultImpl
{
	SecurityKeyFingerprintEnrollmentResultImpl();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_RemainingSamples(unsigned int *);
	virtual long get_SampleStatus(Windows::Internal::SecurityKeyEnrollment::SecurityKeyFingerprintSampleStatus *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct SecurityKeyFingerprintEnrollmentStateData
{
	SecurityKeyFingerprintEnrollmentStateData();
	long RuntimeClassInitialize(Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::SecurityKeyFingerprintEnrollmentState,Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::SecurityKeyFingerprintSensorKind,unsigned int,HSTRING__ *,HSTRING__ *,HSTRING__ *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_CompletedCaptures(unsigned int *);
	virtual long get_ErrorMessage(HSTRING__ * *);
	virtual long get_FingerprintEnrollmentState(Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::SecurityKeyFingerprintEnrollmentState *);
	virtual long get_InfoMessage(HSTRING__ * *);
	virtual long get_InstructionMessage(HSTRING__ * *);
	virtual long get_SensorKind(Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::SecurityKeyFingerprintSensorKind *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~SecurityKeyFingerprintEnrollmentStateData();
};

namespace SecurityKeyHelpers
{
	long GetSecurityKeyEnrollmentSession(Windows::Internal::SecurityKeyEnrollment::ISecurityKeyEnrollmentSession * *);
};

struct SecurityKeyPinOperationInfoImpl
{
	SecurityKeyPinOperationInfoImpl();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_PinOperationErrorText(HSTRING__ * *);
	virtual long get_PinOperationStatus(Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::SecurityKeyPinOperationStatus *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~SecurityKeyPinOperationInfoImpl();
};

class SecurityKeySession
{
	void ProcessDeviceChangeWnf(_WEBAUTHN_WNF_CTAP_DEVICE_STATE_INFO const &);
	void SelectSecurityKey(void *,Windows::Internal::CMarshaledInterfaceResult<Windows::Internal::SecurityKeyEnrollment::ISecurityKeyContext> &);
public:
	SecurityKeySession();
	long RuntimeClassInitialize();
	virtual long SelectSecurityKeyAsync(Windows::Foundation::IAsyncOperation<Windows::Internal::SecurityKeyEnrollment::SecurityKeyContext *> * *);
	virtual long add_DeviceStateChanged(Windows::Foundation::ITypedEventHandler<Windows::Internal::SecurityKeyEnrollment::ISecurityKeyEnrollmentSession *,Windows::Internal::SecurityKeyEnrollment::SecurityKeyEnrollmentArgs *> *,EventRegistrationToken *);
	virtual long remove_DeviceStateChanged(EventRegistrationToken);
	virtual ~SecurityKeySession();
};

class SelectionContext
{
	Windows::Internal::SecurityKeyEnrollment::SecurityKeyPinOperationResult AuthenticatePin(void *,HSTRING__ *);
	Windows::Internal::SecurityKeyEnrollment::SecurityKeyPinOperationResult ChangePin(void *,HSTRING__ *,HSTRING__ *);
	Windows::Internal::SecurityKeyEnrollment::SecurityKeyPinOperationResult SetPin(void *,HSTRING__ *);
	wil::com_ptr_t<Windows::Internal::SecurityKeyEnrollment::ISecurityKeyFingerprintEnrollmentResult,wil::err_exception_policy> EnrollFingerprint(void *,unsigned char);
public:
	SelectionContext();
	virtual long AuthenticatePinAsync(HSTRING__ *,Windows::Foundation::IAsyncOperation<Windows::Internal::SecurityKeyEnrollment::SecurityKeyPinOperationResult> * *);
	virtual long CancelEnrollFingerprintAsync(Windows::Foundation::IAsyncAction * *);
	virtual long ChangePinAsync(HSTRING__ *,HSTRING__ *,Windows::Foundation::IAsyncOperation<Windows::Internal::SecurityKeyEnrollment::SecurityKeyPinOperationResult> * *);
	virtual long EnrollFingerprintAsync(unsigned char,Windows::Foundation::IAsyncOperation<Windows::Internal::SecurityKeyEnrollment::SecurityKeyFingerprintEnrollmentResult *> * *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RemoveAllFingerprintsAsync(Windows::Foundation::IAsyncAction * *);
	virtual long ResetDeviceAsync(Windows::Foundation::IAsyncOperation<bool> * *);
	virtual long SetPinAsync(HSTRING__ *,Windows::Foundation::IAsyncOperation<Windows::Internal::SecurityKeyEnrollment::SecurityKeyPinOperationResult> * *);
	virtual long get_FingerprintState(Windows::Internal::SecurityKeyEnrollment::SecurityKeyFingerprintState *);
	virtual long get_Kind(Windows::Internal::SecurityKeyEnrollment::SecurityKeyKind *);
	virtual long get_MaxFingerprintCaptureSamples(unsigned int *);
	virtual long get_PinRetriesRemaining(unsigned int *);
	virtual long get_PinState(Windows::Internal::SecurityKeyEnrollment::SecurityKeyPinState *);
	virtual long get_Transport(Windows::Internal::SecurityKeyEnrollment::SecurityKeyTransport *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~SelectionContext();
};

struct SuspendErrorStateData
{
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_IsSuspended(unsigned char *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

namespace UserAwareCallerIdentity
{
	long GetCallingProcessHandle(unsigned long,void * *);
	long GetCallingProcessId(unsigned long *);
	long GetCallingProcessUserContext(unsigned __int64 *);
};

struct UserVerifyInfo
{
	UserVerifyInfo();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_VerificationErrorText(HSTRING__ * *);
	virtual long get_VerificationSucceeded(unsigned char *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~UserVerifyInfo();
};

struct WifiSetting
{
	~WifiSetting();
};

struct WinBioCallbackHandler
{
	long RuntimeClassInitialize(IInspectable *);
	virtual long ProcessAsyncResult(_WINBIO_ASYNC_RESULT const *);
	virtual ~WinBioCallbackHandler();
};

struct WinBioDataModelLogger
{
	static _tlgProvider_t const * Provider();
};

struct WinBioDataModelTelemetry
{
	class EnrollingActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned int,unsigned int,unsigned char);
		void Stop(bool,bool);
		~EnrollingActivity();
	};

	class FaceEnrollmentStatistics
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		void Stop(unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int);
		~FaceEnrollmentStatistics();
	};

	class NgcVerificationActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void NgcFailure<long &>(long &);
		void StartActivity();
		~NgcVerificationActivity();
	};

	class OOBEBioEnrollment_GetSupportedEnrollmentKinds
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void DomainCheck<bool &>(bool &);
		void StartActivity();
		void Stop(unsigned long);
		void UserHasPasswordCheck<bool &>(bool &);
		void WinBioGetDomainLogonSetting<bool &>(bool &);
		void WinBioGetEnabledSetting<bool &>(bool &);
		void WinBioGetEnrolledFactors<unsigned int &>(unsigned int &);
		void WinBioGetLogonSetting<bool &>(bool &);
		~OOBEBioEnrollment_GetSupportedEnrollmentKinds();
	};

	class OOBEHelloEnrollmentManager_GetSupportedEnrollmentKindsAsyncThread
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~OOBEHelloEnrollmentManager_GetSupportedEnrollmentKindsAsyncThread();
	};

	class OOBEHelloEnrollmentManager_RuntimeClassInitialize
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~OOBEHelloEnrollmentManager_RuntimeClassInitialize();
	};

	class VerifyUserAsyncActivity
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		~VerifyUserAsyncActivity();
	};

	static void CancelEnrollmentStart();
	static void CancelEnrollmentStop();
	static void CatastrophicError<long &,unsigned int &>(long &,unsigned int &);
	static void CloseWinbioDataModelStart();
	static void CloseWinbioDataModelStop();
	static void CloseWinbioSessionAndFramework();
	static void EnrollBeginSent();
	static void FaceEnrollCaptureBad<unsigned long &,unsigned long &>(unsigned long &,unsigned long &);
	static void FaceEnrollCaptureGood();
	static void FaceEnrollCaptureInvalidOperation();
	static void FaceEnrollCaptureStatistics<unsigned __int64 &,unsigned __int64 &,unsigned __int64 &,unsigned __int64 &,unsigned __int64 &>(unsigned __int64 &,unsigned __int64 &,unsigned __int64 &,unsigned __int64 &,unsigned __int64 &);
	static void FaceEnrollCaptureUnknownStatus<long const &>(long const &);
	static void FaceEnrollCaptureWaitingIrFrames();
	static void FaceEnrollCommit<long const &>(long const &);
	static void FaceEnrollCommitSent();
	static void FaceEnrollCompleted();
	static void FaceEnrollDiscard<long const &>(long const &);
	static void FaceEnrollFatalError<long const &>(long const &);
	static void FaceEnrollGetPropertyReceived<long const &>(long const &);
	static void FaceEnrollSelect<long const &>(long const &);
	static void FaceEnrollmentStateUpdate<unsigned int &>(unsigned int &);
	static void FaceMonitorPresence<long const &,unsigned long const &>(long const &,unsigned long const &);
	static void FacePauseCapture<bool &>(bool &);
	static void FacePresenceArrive<unsigned __int64 &>(unsigned __int64 &);
	static void FacePresenceDepart<unsigned __int64 &>(unsigned __int64 &);
	static void FaceRestartCapture();
	static void FaceResumeCapture<bool &,bool &>(bool &,bool &);
	static void FaceWinBioGetPropertySent();
	static void FallbackTelemetryCallback(bool,wil::FailureInfo const &);
	static void IrisEnrollBegin<long const &>(long const &);
	static void IrisEnrollCapture<long const &,unsigned long &>(long const &,unsigned long &);
	static void IrisEnrollCommit<long const &>(long const &);
	static void IrisEnrollGetProperty<long const &>(long const &);
	static void IrisEnrollSelect<long const &>(long const &);
	static void IrisPauseCapture();
	static void IrisResumeCapture();
	static void OpenWinbioFrameWorkAndSession();
	static void OpenWinbioFramework();
	static void OpenWinbioSession();
	static void WinbioCancelSent();
	static void WinbioDataModelDestroyed();
};

struct WinBioEnrollmentSessionFactory
{
	static TrustLevel InternalGetTrustLevel();
	static unsigned short const * InternalGetRuntimeClassName();
	virtual long CreateBioEnrollmentSession(Windows::Internal::UI::BioEnrollment::DataModel::IUIThreadEventDispatcher *,Windows::Internal::UI::BioEnrollment::DataModel::EnrollmentKind,Windows::Internal::UI::BioEnrollment::DataModel::EnrollmentContext,Windows::Internal::UI::BioEnrollment::DataModel::IBioEnrollmentSession * *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

namespace Windows
{
	namespace Foundation
	{
		namespace Collections
		{
			namespace Detail
			{
				long _IteratorGetMany<IIterator_impl<Point,1>,Point>(IIterator_impl<Point,1> *,unsigned int,Point *,unsigned int *);
				long _VectorGetMany<IVectorView_impl<Point,1>,Point>(IVectorView_impl<Point,1> *,unsigned int,unsigned int,Point *,unsigned int *);
				long _VectorGetMany<IVector_impl<Point,1>,Point>(IVector_impl<Point,1> *,unsigned int,unsigned int,Point *,unsigned int *);
				long _VectorReplaceAll<IVector_impl<Point,1>,Point>(IVector_impl<Point,1> *,unsigned int,Point *);
			};

			struct IIterable<Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo>
			{
				IIterable<Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo>();
			};

			struct IIterable<Point>
			{
				IIterable<Point>();
			};

			struct IIterable_impl<Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo>
			{
				IIterable_impl<Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo>();
			};

			struct IIterable_impl<Point>
			{
				IIterable_impl<Point>();
			};

			struct IIterator<Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo>
			{
				IIterator<Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo>();
			};

			struct IIterator<Point>
			{
				IIterator<Point>();
			};

			struct IIterator_impl<Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0>
			{
				IIterator_impl<Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0>();
			};

			struct IIterator_impl<Point,1>
			{
				IIterator_impl<Point,1>();
				virtual long GetMany(unsigned int,Point *,unsigned int *);
			};

			struct IVector<Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo>
			{
				IVector<Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo>();
			};

			struct IVector<Point>
			{
				IVector<Point>();
			};

			struct IVectorView<Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo>
			{
				IVectorView<Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo>();
			};

			struct IVectorView<Point>
			{
				IVectorView<Point>();
			};

			struct IVectorView_impl<Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0>
			{
				IVectorView_impl<Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0>();
			};

			struct IVectorView_impl<Point,1>
			{
				IVectorView_impl<Point,1>();
				virtual long GetMany(unsigned int,unsigned int,Point *,unsigned int *);
			};

			struct IVector_impl<Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0>
			{
				IVector_impl<Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0>();
			};

			struct IVector_impl<Point,1>
			{
				IVector_impl<Point,1>();
				virtual long GetMany(unsigned int,unsigned int,Point *,unsigned int *);
				virtual long ReplaceAll(unsigned int,Point *);
			};

			namespace Internal
			{
				struct SimpleVectorIterator<Point,Vector<Point,PointEqualityPredicate,PointLifetimeTraits,VectorOptions<Point,0,1,0> >,PointLifetimeTraits,XWinRT::IntVersionTag,1>
				{
					SimpleVectorIterator<Point,Vector<Point,PointEqualityPredicate,PointLifetimeTraits,VectorOptions<Point,0,1,0> >,PointLifetimeTraits,XWinRT::IntVersionTag,1>(Vector<Point,PointEqualityPredicate,PointLifetimeTraits,VectorOptions<Point,0,1,0> > *,SimpleVectorIterator<Point,Vector<Point,PointEqualityPredicate,PointLifetimeTraits,VectorOptions<Point,0,1,0> >,PointLifetimeTraits,XWinRT::IntVersionTag,1>::permission);
					static long Make(Vector<Point,PointEqualityPredicate,PointLifetimeTraits,VectorOptions<Point,0,1,0> > *,SimpleVectorIterator<Point,Vector<Point,PointEqualityPredicate,PointLifetimeTraits,VectorOptions<Point,0,1,0> >,PointLifetimeTraits,XWinRT::IntVersionTag,1> * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,Point *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long MoveNext(unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Current(Point *);
					virtual long get_HasCurrent(unsigned char *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
					virtual ~SimpleVectorIterator<Point,Vector<Point,PointEqualityPredicate,PointLifetimeTraits,VectorOptions<Point,0,1,0> >,PointLifetimeTraits,XWinRT::IntVersionTag,1>();
				};

				struct SimpleVectorIterator<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,Vector<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,StageInfoEqualityPredicate,StageInfoLifetimeTraits,VectorOptions<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0,1,0> >,StageInfoLifetimeTraits,XWinRT::IntVersionTag,1>
				{
					SimpleVectorIterator<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,Vector<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,StageInfoEqualityPredicate,StageInfoLifetimeTraits,VectorOptions<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0,1,0> >,StageInfoLifetimeTraits,XWinRT::IntVersionTag,1>(Vector<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,StageInfoEqualityPredicate,StageInfoLifetimeTraits,VectorOptions<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0,1,0> > *,SimpleVectorIterator<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,Vector<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,StageInfoEqualityPredicate,StageInfoLifetimeTraits,VectorOptions<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0,1,0> >,StageInfoLifetimeTraits,XWinRT::IntVersionTag,1>::permission);
					static long Make(Vector<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,StageInfoEqualityPredicate,StageInfoLifetimeTraits,VectorOptions<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0,1,0> > *,SimpleVectorIterator<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,Vector<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,StageInfoEqualityPredicate,StageInfoLifetimeTraits,VectorOptions<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0,1,0> >,StageInfoLifetimeTraits,XWinRT::IntVersionTag,1> * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,UI::BioEnrollment::DataModel::Face::FaceStageColorInfo *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long MoveNext(unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Current(UI::BioEnrollment::DataModel::Face::FaceStageColorInfo *);
					virtual long get_HasCurrent(unsigned char *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
					virtual ~SimpleVectorIterator<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,Vector<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,StageInfoEqualityPredicate,StageInfoLifetimeTraits,VectorOptions<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0,1,0> >,StageInfoLifetimeTraits,XWinRT::IntVersionTag,1>();
				};

				struct SimpleVectorView<Point,Vector<Point,PointEqualityPredicate,PointLifetimeTraits,VectorOptions<Point,0,1,0> >,PointLifetimeTraits,XWinRT::IntVersionTag,1>
				{
					SimpleVectorView<Point,Vector<Point,PointEqualityPredicate,PointLifetimeTraits,VectorOptions<Point,0,1,0> >,PointLifetimeTraits,XWinRT::IntVersionTag,1>(Vector<Point,PointEqualityPredicate,PointLifetimeTraits,VectorOptions<Point,0,1,0> > *,SimpleVectorView<Point,Vector<Point,PointEqualityPredicate,PointLifetimeTraits,VectorOptions<Point,0,1,0> >,PointLifetimeTraits,XWinRT::IntVersionTag,1>::permission);
					virtual long First(IIterator<Point> * *);
					virtual long GetAt(unsigned int,Point *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,Point *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long IndexOf(Point,unsigned int *,unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
					virtual ~SimpleVectorView<Point,Vector<Point,PointEqualityPredicate,PointLifetimeTraits,VectorOptions<Point,0,1,0> >,PointLifetimeTraits,XWinRT::IntVersionTag,1>();
				};

				struct SimpleVectorView<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,Vector<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,StageInfoEqualityPredicate,StageInfoLifetimeTraits,VectorOptions<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0,1,0> >,StageInfoLifetimeTraits,XWinRT::IntVersionTag,1>
				{
					SimpleVectorView<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,Vector<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,StageInfoEqualityPredicate,StageInfoLifetimeTraits,VectorOptions<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0,1,0> >,StageInfoLifetimeTraits,XWinRT::IntVersionTag,1>(Vector<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,StageInfoEqualityPredicate,StageInfoLifetimeTraits,VectorOptions<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0,1,0> > *,SimpleVectorView<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,Vector<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,StageInfoEqualityPredicate,StageInfoLifetimeTraits,VectorOptions<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0,1,0> >,StageInfoLifetimeTraits,XWinRT::IntVersionTag,1>::permission);
					virtual long First(IIterator<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo> * *);
					virtual long GetAt(unsigned int,UI::BioEnrollment::DataModel::Face::FaceStageColorInfo *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,UI::BioEnrollment::DataModel::Face::FaceStageColorInfo *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long IndexOf(UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,unsigned int *,unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
					virtual ~SimpleVectorView<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,Vector<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,StageInfoEqualityPredicate,StageInfoLifetimeTraits,VectorOptions<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0,1,0> >,StageInfoLifetimeTraits,XWinRT::IntVersionTag,1>();
				};

				class Vector<Point,PointEqualityPredicate,PointLifetimeTraits,VectorOptions<Point,0,1,0> >
				{
					long IndexOfInternal(Point *,unsigned int,Point,unsigned int *,unsigned char *);
					long InsertAtInternal(unsigned int,Point,bool);
					long RemoveAtInternal(unsigned int,bool);
					long ResizeStorage(unsigned int);
					static void _Free(Point *,unsigned int);
					void _EraseAll(Point * *,unsigned int *);
				protected:
					virtual ~Vector<Point,PointEqualityPredicate,PointLifetimeTraits,VectorOptions<Point,0,1,0> >();
				public:
					Vector<Point,PointEqualityPredicate,PointLifetimeTraits,VectorOptions<Point,0,1,0> >(PointEqualityPredicate const &,Vector<Point,PointEqualityPredicate,PointLifetimeTraits,VectorOptions<Point,0,1,0> >::permission);
					virtual long Append(Point);
					virtual long Clear();
					virtual long First(IIterator<Point> * *);
					virtual long GetAt(unsigned int,Point *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,Point *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long GetView(IVectorView<Point> * *);
					virtual long IndexOf(Point,unsigned int *,unsigned char *);
					virtual long InsertAt(unsigned int,Point);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long RemoveAt(unsigned int);
					virtual long RemoveAtEnd();
					virtual long ReplaceAll(unsigned int,Point *);
					virtual long SetAt(unsigned int,Point);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				class Vector<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,StageInfoEqualityPredicate,StageInfoLifetimeTraits,VectorOptions<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0,1,0> >
				{
					long IndexOfInternal(UI::BioEnrollment::DataModel::Face::FaceStageColorInfo *,unsigned int,UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,unsigned int *,unsigned char *);
					long InsertAtInternal(unsigned int,UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,bool);
					long RemoveAtInternal(unsigned int,bool);
					long ResizeStorage(unsigned int);
					static void _Free(UI::BioEnrollment::DataModel::Face::FaceStageColorInfo *,unsigned int);
					void _EraseAll(UI::BioEnrollment::DataModel::Face::FaceStageColorInfo * *,unsigned int *);
				protected:
					virtual ~Vector<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,StageInfoEqualityPredicate,StageInfoLifetimeTraits,VectorOptions<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0,1,0> >();
				public:
					Vector<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,StageInfoEqualityPredicate,StageInfoLifetimeTraits,VectorOptions<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0,1,0> >(StageInfoEqualityPredicate const &,Vector<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,StageInfoEqualityPredicate,StageInfoLifetimeTraits,VectorOptions<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0,1,0> >::permission);
					virtual long Append(UI::BioEnrollment::DataModel::Face::FaceStageColorInfo);
					virtual long Clear();
					virtual long First(IIterator<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo> * *);
					virtual long GetAt(unsigned int,UI::BioEnrollment::DataModel::Face::FaceStageColorInfo *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,UI::BioEnrollment::DataModel::Face::FaceStageColorInfo *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long GetView(IVectorView<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo> * *);
					virtual long IndexOf(UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,unsigned int *,unsigned char *);
					virtual long InsertAt(unsigned int,UI::BioEnrollment::DataModel::Face::FaceStageColorInfo);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long RemoveAt(unsigned int);
					virtual long RemoveAtEnd();
					virtual long ReplaceAll(unsigned int,UI::BioEnrollment::DataModel::Face::FaceStageColorInfo *);
					virtual long SetAt(unsigned int,UI::BioEnrollment::DataModel::Face::FaceStageColorInfo);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct VectorOptions<Point,0,1,0>
				{
					static long RaiseEvent(...);
				};

				struct VectorOptions<UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0,1,0>
				{
					static long RaiseEvent(...);
				};

			};

		};

		struct IAsyncOperation<Internal::SecurityKeyEnrollment::SecurityKeyContext *>
		{
			IAsyncOperation<Internal::SecurityKeyEnrollment::SecurityKeyContext *>();
		};

		struct IAsyncOperation<Internal::SecurityKeyEnrollment::SecurityKeyFingerprintEnrollmentResult *>
		{
			IAsyncOperation<Internal::SecurityKeyEnrollment::SecurityKeyFingerprintEnrollmentResult *>();
		};

		struct IAsyncOperation<Internal::UI::BioEnrollment::DataModel::SecurityKey::SecurityKeyPinOperationInfo *>
		{
			IAsyncOperation<Internal::UI::BioEnrollment::DataModel::SecurityKey::SecurityKeyPinOperationInfo *>();
		};

		struct IAsyncOperation<Internal::UI::BioEnrollment::DataModel::UserVerificationInfo *>
		{
			IAsyncOperation<Internal::UI::BioEnrollment::DataModel::UserVerificationInfo *>();
		};

		struct IAsyncOperation<bool>
		{
			IAsyncOperation<bool>();
		};

		struct IAsyncOperation_impl<Internal::AggregateType<Internal::SecurityKeyEnrollment::SecurityKeyContext *,Internal::SecurityKeyEnrollment::ISecurityKeyContext *> >
		{
			IAsyncOperation_impl<Internal::AggregateType<Internal::SecurityKeyEnrollment::SecurityKeyContext *,Internal::SecurityKeyEnrollment::ISecurityKeyContext *> >();
		};

		struct IAsyncOperation_impl<Internal::AggregateType<Internal::SecurityKeyEnrollment::SecurityKeyFingerprintEnrollmentResult *,Internal::SecurityKeyEnrollment::ISecurityKeyFingerprintEnrollmentResult *> >
		{
			IAsyncOperation_impl<Internal::AggregateType<Internal::SecurityKeyEnrollment::SecurityKeyFingerprintEnrollmentResult *,Internal::SecurityKeyEnrollment::ISecurityKeyFingerprintEnrollmentResult *> >();
		};

		struct IAsyncOperation_impl<Internal::AggregateType<Internal::UI::BioEnrollment::DataModel::SecurityKey::SecurityKeyPinOperationInfo *,Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyPinOperationInfo *> >
		{
			IAsyncOperation_impl<Internal::AggregateType<Internal::UI::BioEnrollment::DataModel::SecurityKey::SecurityKeyPinOperationInfo *,Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyPinOperationInfo *> >();
		};

		struct IAsyncOperation_impl<Internal::AggregateType<Internal::UI::BioEnrollment::DataModel::UserVerificationInfo *,Internal::UI::BioEnrollment::DataModel::IUserVerificationInfo *> >
		{
			IAsyncOperation_impl<Internal::AggregateType<Internal::UI::BioEnrollment::DataModel::UserVerificationInfo *,Internal::UI::BioEnrollment::DataModel::IUserVerificationInfo *> >();
		};

		struct IAsyncOperation_impl<Internal::AggregateType<bool,unsigned char> >
		{
			IAsyncOperation_impl<Internal::AggregateType<bool,unsigned char> >();
		};

		long ActivateInstance<CloudExperienceHostBroker::Hello::IHelloEnrollmentManager>(HSTRING__ *,CloudExperienceHostBroker::Hello::IHelloEnrollmentManager * *);
		long ActivateInstance<Internal::SecurityKeyEnrollment::ISecurityKeyEnrollmentSession>(HSTRING__ *,Internal::SecurityKeyEnrollment::ISecurityKeyEnrollmentSession * *);
		long ActivateInstance<Internal::Shell::ModalExperience::IModalExperienceDefaultOptions>(HSTRING__ *,Internal::Shell::ModalExperience::IModalExperienceDefaultOptions * *);
		long ActivateInstance<Internal::UI::BioEnrollment::Broker::IBioEnrollmentBroker>(HSTRING__ *,Internal::UI::BioEnrollment::Broker::IBioEnrollmentBroker * *);
		long ActivateInstance<Internal::UI::BioEnrollment::Broker::IBioEnrollmentRetailDemo>(HSTRING__ *,Internal::UI::BioEnrollment::Broker::IBioEnrollmentRetailDemo * *);
		long ActivateInstance<Internal::UI::BioEnrollment::DataModel::Fingerprint::IExtendedFingerprintSensorInfoBroker>(HSTRING__ *,Internal::UI::BioEnrollment::DataModel::Fingerprint::IExtendedFingerprintSensorInfoBroker * *);
		long ActivateInstance<Internal::UI::BioEnrollment::DataModel::IFullTrustOOBEBioEnrollmentSessionFactory>(HSTRING__ *,Internal::UI::BioEnrollment::DataModel::IFullTrustOOBEBioEnrollmentSessionFactory * *);
		long ActivateInstance<Internal::UI::BioEnrollment::DataModel::Pin::IPinEnrollmentManager>(HSTRING__ *,Internal::UI::BioEnrollment::DataModel::Pin::IPinEnrollmentManager * *);
		long ActivateInstance<Microsoft::WRL::ComPtr<Internal::Shell::ModalExperience::IModalExperienceDefaultOptions> >(HSTRING__ *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Internal::Shell::ModalExperience::IModalExperienceDefaultOptions> >);
		long ActivateInstance<Microsoft::WRL::ComPtr<Internal::UI::BioEnrollment::DataModel::Pin::IPinEnrollmentManager> >(HSTRING__ *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Internal::UI::BioEnrollment::DataModel::Pin::IPinEnrollmentManager> >);
		long GetActivationFactory<Diagnostics::IAsyncCausalityTracerStatics>(HSTRING__ *,Foundation::Diagnostics::IAsyncCausalityTracerStatics * *);
	};

	namespace Internal
	{
		struct AsyncCallbackBase<CBasicResult<unsigned char,0> >
		{
			virtual ~AsyncCallbackBase<CBasicResult<unsigned char,0> >();
		};

		struct AsyncCallbackBase<CMarshaledInterfaceResult<SecurityKeyEnrollment::ISecurityKeyContext> >
		{
			virtual ~AsyncCallbackBase<CMarshaledInterfaceResult<SecurityKeyEnrollment::ISecurityKeyContext> >();
		};

		struct AsyncCallbackBase<CMarshaledInterfaceResult<SecurityKeyEnrollment::ISecurityKeyFingerprintEnrollmentResult> >
		{
			virtual ~AsyncCallbackBase<CMarshaledInterfaceResult<SecurityKeyEnrollment::ISecurityKeyFingerprintEnrollmentResult> >();
		};

		struct AsyncCallbackBase<CMarshaledInterfaceResult<UI::BioEnrollment::DataModel::IUserVerificationInfo> >
		{
			virtual ~AsyncCallbackBase<CMarshaledInterfaceResult<UI::BioEnrollment::DataModel::IUserVerificationInfo> >();
		};

		struct AsyncCallbackBase<CMarshaledInterfaceResult<UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyPinOperationInfo> >
		{
			virtual ~AsyncCallbackBase<CMarshaledInterfaceResult<UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyPinOperationInfo> >();
		};

		struct AsyncCallbackBase<CNoResult>
		{
			virtual ~AsyncCallbackBase<CNoResult>();
		};

		struct CMarshaledInterfaceResult<SecurityKeyEnrollment::ISecurityKeyContext>
		{
			long Get(SecurityKeyEnrollment::ISecurityKeyContext * *);
			long Set(SecurityKeyEnrollment::ISecurityKeyContext *);
			void Close();
			~CMarshaledInterfaceResult<SecurityKeyEnrollment::ISecurityKeyContext>();
		};

		struct CMarshaledInterfaceResult<SecurityKeyEnrollment::ISecurityKeyFingerprintEnrollmentResult>
		{
			long Get(SecurityKeyEnrollment::ISecurityKeyFingerprintEnrollmentResult * *);
			void Close();
			~CMarshaledInterfaceResult<SecurityKeyEnrollment::ISecurityKeyFingerprintEnrollmentResult>();
		};

		struct CMarshaledInterfaceResult<UI::BioEnrollment::DataModel::IUserVerificationInfo>
		{
			long Get(UI::BioEnrollment::DataModel::IUserVerificationInfo * *);
			void Close();
			~CMarshaledInterfaceResult<UI::BioEnrollment::DataModel::IUserVerificationInfo>();
		};

		struct CMarshaledInterfaceResult<UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyPinOperationInfo>
		{
			long Get(UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyPinOperationInfo * *);
			void Close();
			~CMarshaledInterfaceResult<UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyPinOperationInfo>();
		};

		struct ComTaskPool
		{
			struct CTaskWrapper<<lambda_c2fd7731c5ae0d37e65ea73be67c0f1b> >
			{
				virtual void Run();
				virtual ~CTaskWrapper<<lambda_c2fd7731c5ae0d37e65ea73be67c0f1b> >();
			};

			static ComTaskPool::SThreadData tls_threadData;
		};

		struct ComTaskPoolHandler
		{
			long Start(IComPoolTask *);
			static long _FireCompletion(IAsyncFireCompletion *);
			void OnComplete();
		};

		struct GitPtrSupportsAgile<Foundation::IAsyncActionCompletedHandler>
		{
			long CopyLocal(_GUID const &,void * *);
			long CopyLocal<Foundation::IAsyncActionCompletedHandler>(Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Foundation::IAsyncActionCompletedHandler> >);
			long Initialize<Foundation::IAsyncActionCompletedHandler>(Foundation::IAsyncActionCompletedHandler *);
			long Revoke();
		};

		struct GitPtrSupportsAgile<Foundation::IAsyncOperationCompletedHandler<SecurityKeyEnrollment::SecurityKeyContext *> >
		{
			long CopyLocal(_GUID const &,void * *);
		};

		struct GitPtrSupportsAgile<Foundation::IAsyncOperationCompletedHandler<SecurityKeyEnrollment::SecurityKeyFingerprintEnrollmentResult *> >
		{
			long CopyLocal(_GUID const &,void * *);
		};

		struct GitPtrSupportsAgile<Foundation::IAsyncOperationCompletedHandler<UI::BioEnrollment::DataModel::SecurityKey::SecurityKeyPinOperationInfo *> >
		{
			long CopyLocal(_GUID const &,void * *);
		};

		struct GitPtrSupportsAgile<Foundation::IAsyncOperationCompletedHandler<UI::BioEnrollment::DataModel::UserVerificationInfo *> >
		{
			long CopyLocal(_GUID const &,void * *);
		};

		struct GitPtrSupportsAgile<Foundation::IAsyncOperationCompletedHandler<bool> >
		{
			long CopyLocal(_GUID const &,void * *);
		};

		struct GitPtrSupportsAgile<INilDelegate>
		{
			long CopyLocal(_GUID const &,void * *);
			long CopyLocal<INilDelegate>(Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<INilDelegate> >);
			long Initialize<INilDelegate>(INilDelegate *);
			long Revoke();
		};

		class NativeString<CoTaskMemPolicy<unsigned short> >
		{
			long _EnsureCapacity(unsigned __int64);
			long _Initialize(unsigned short const *,unsigned __int64);
			long _InitializeHelper<<lambda_fe718337787c493ce2d833414db25eba> >(unsigned short const *,char *,<lambda_fe718337787c493ce2d833414db25eba> const &);
			void _EnsureCount();
			void _Free();
		public:
			long InitializeFormat(unsigned short const *,...);
			~NativeString<CoTaskMemPolicy<unsigned short> >();
		};

		class NativeString<LocalMemPolicy<unsigned short> >
		{
			long _EnsureCapacity(unsigned __int64);
			long _Initialize(unsigned short const *,unsigned __int64);
			void _Free();
		public:
			~NativeString<LocalMemPolicy<unsigned short> >();
		};

		struct ResourceString
		{
			static bool FindAndSize(HINSTANCE__ *,unsigned int,unsigned short,unsigned short const * *,unsigned short *);
		};

		namespace ShellHelpers
		{
			class PropertySetHelper
			{
				long SetPropVal(HSTRING__ *,Foundation::IPropertyValue *);
				long SetValue<unsigned char>(HSTRING__ *,long ( Foundation::IPropertyValueStatics::*)(unsigned char,IInspectable * *),unsigned char);
			public:
				~PropertySetHelper();
			};

		};

		namespace UI
		{
			namespace BioEnrollment
			{
				namespace DataModel
				{
					struct CClosableBase
					{
						CClosableBase();
						virtual long Close();
					};

					namespace Fingerprint
					{
						class ExtendedFingerprintSensorInfoBroker
						{
							FingerprintSensorLocation GetSensorLocation(HKEY__ *);
						public:
							static TrustLevel InternalGetTrustLevel();
							static unsigned short const * InternalGetRuntimeClassName();
							virtual long GetIids(unsigned long *,_GUID * *);
							virtual long GetRuntimeClassName(HSTRING__ * *);
							virtual long GetSensorInfo(HSTRING__ *,FingerprintSensorLocation *,FingerprintSensorShape *,FingerprintSensorButton *);
							virtual long GetTrustLevel(TrustLevel *);
							virtual long QueryInterface(_GUID const &,void * *);
							virtual unsigned long AddRef();
							virtual unsigned long Release();
						};

						Microsoft::WRL::Details::CreatorMap const __object_ExtendedFingerprintSensorInfoBroker;
						Microsoft::WRL::Details::FactoryCache __objectFactory__ExtendedFingerprintSensorInfoBroker;
					};

				};

			};

		};

		_RTL_RUN_ONCE s_bIsEnvironmentCheckDone;
	};

};

namespace XWinRT
{
	struct ComLock
	{
		ComLock(bool);
	};

	struct SerializingLockPolicy
	{
		static detail::LockHolder<ComLock,detail::AcquireRead> Read(ComLock &,long *);
		static detail::LockHolder<ComLock,detail::AcquireWrite> Write(ComLock &,long *);
	};

	namespace detail
	{
		struct AtomicUpdates
		{
			static long AtomicUpdate<<lambda_0734c37b499ae3b03698f7c3d0efc38b>,<lambda_d238da5d5fe11907b879177da7308094> >(unsigned int *,<lambda_0734c37b499ae3b03698f7c3d0efc38b> const &,<lambda_d238da5d5fe11907b879177da7308094> const &);
			static long AtomicUpdate<<lambda_c7efb732ce963d332dcdfe2b2a7ba2ba>,<lambda_efb10ec704eb3d3cf689e1db449700fb> >(unsigned int *,<lambda_c7efb732ce963d332dcdfe2b2a7ba2ba> const &,<lambda_efb10ec704eb3d3cf689e1db449700fb> const &);
		};

		struct InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<Windows::Foundation::Point,PointEqualityPredicate,PointLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Foundation::Point,0,1,0> >,IntVersionTag>
		{
			long Do<<lambda_0250443ec3271177cf160d3ce42411ed>,<lambda_4e4b32ffca2821a9d9786fc9fe3cd3e3> >(Windows::Foundation::Collections::Internal::Vector<Windows::Foundation::Point,PointEqualityPredicate,PointLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Foundation::Point,0,1,0> > *,<lambda_0250443ec3271177cf160d3ce42411ed> const &,<lambda_4e4b32ffca2821a9d9786fc9fe3cd3e3> const &);
			long Do<<lambda_1397f82f43a9d47a5dc6453ec7556ee3>,<lambda_7ec00766b9236c586bde5bdd842737fb> >(Windows::Foundation::Collections::Internal::Vector<Windows::Foundation::Point,PointEqualityPredicate,PointLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Foundation::Point,0,1,0> > *,<lambda_1397f82f43a9d47a5dc6453ec7556ee3> const &,<lambda_7ec00766b9236c586bde5bdd842737fb> const &);
			long Do<<lambda_31a62aaafad5d3ac3dce932e68fcc91a>,<lambda_27ffb9e7eac8b02add6a75423b03cebc> >(Windows::Foundation::Collections::Internal::Vector<Windows::Foundation::Point,PointEqualityPredicate,PointLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Foundation::Point,0,1,0> > *,<lambda_31a62aaafad5d3ac3dce932e68fcc91a> const &,<lambda_27ffb9e7eac8b02add6a75423b03cebc> const &);
			long Do<<lambda_3a74abbd90a3763aff10a5adfd4dbedc>,<lambda_60abd4e22ecc77d7fde3686f187e632e> >(Windows::Foundation::Collections::Internal::Vector<Windows::Foundation::Point,PointEqualityPredicate,PointLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Foundation::Point,0,1,0> > *,<lambda_3a74abbd90a3763aff10a5adfd4dbedc> const &,<lambda_60abd4e22ecc77d7fde3686f187e632e> const &);
			long Do<<lambda_3d680bf235116f02ac92f691011588d4>,<lambda_8296abd7df79f0272bc3f5f20f99613d> >(Windows::Foundation::Collections::Internal::Vector<Windows::Foundation::Point,PointEqualityPredicate,PointLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Foundation::Point,0,1,0> > *,<lambda_3d680bf235116f02ac92f691011588d4> const &,<lambda_8296abd7df79f0272bc3f5f20f99613d> const &);
			long Do<<lambda_888b9e124e0e320b4fef27b4a0a4ff88>,<lambda_9e78e973dbb127c9c008826bb3ca216a> >(Windows::Foundation::Collections::Internal::Vector<Windows::Foundation::Point,PointEqualityPredicate,PointLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Foundation::Point,0,1,0> > *,<lambda_888b9e124e0e320b4fef27b4a0a4ff88> const &,<lambda_9e78e973dbb127c9c008826bb3ca216a> const &);
			long Do<<lambda_b4f6cd64b212e21a55d3b027ed571965>,<lambda_c1b1a72026a860777e3389ee97f934e8> >(Windows::Foundation::Collections::Internal::Vector<Windows::Foundation::Point,PointEqualityPredicate,PointLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Foundation::Point,0,1,0> > *,<lambda_b4f6cd64b212e21a55d3b027ed571965> const &,<lambda_c1b1a72026a860777e3389ee97f934e8> const &);
			long Do<<lambda_bb7a5c7784ab2e3be57b8dbe6c44cc3d>,<lambda_d238da5d5fe11907b879177da7308094> >(Windows::Foundation::Collections::Internal::Vector<Windows::Foundation::Point,PointEqualityPredicate,PointLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Foundation::Point,0,1,0> > *,<lambda_bb7a5c7784ab2e3be57b8dbe6c44cc3d> const &,<lambda_d238da5d5fe11907b879177da7308094> const &);
		};

		struct InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,StageInfoEqualityPredicate,StageInfoLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0,1,0> >,IntVersionTag>
		{
			long Do<<lambda_0233246d2c2a21939103a87218a4ff18>,<lambda_9de8214e267dc5ea05594cbd9e3ef017> >(Windows::Foundation::Collections::Internal::Vector<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,StageInfoEqualityPredicate,StageInfoLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0,1,0> > *,<lambda_0233246d2c2a21939103a87218a4ff18> const &,<lambda_9de8214e267dc5ea05594cbd9e3ef017> const &);
			long Do<<lambda_333740670b8310bdd43a220ceddcf167>,<lambda_f58f0363a7dfe3f1d6ff2632181a3ee9> >(Windows::Foundation::Collections::Internal::Vector<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,StageInfoEqualityPredicate,StageInfoLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0,1,0> > *,<lambda_333740670b8310bdd43a220ceddcf167> const &,<lambda_f58f0363a7dfe3f1d6ff2632181a3ee9> const &);
			long Do<<lambda_6140ddde0591e5244fc24d237a45c795>,<lambda_e56fe76c1a6954eb35561fe12d015ec7> >(Windows::Foundation::Collections::Internal::Vector<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,StageInfoEqualityPredicate,StageInfoLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0,1,0> > *,<lambda_6140ddde0591e5244fc24d237a45c795> const &,<lambda_e56fe76c1a6954eb35561fe12d015ec7> const &);
			long Do<<lambda_699ff5d5a46e194d2b68519eb43f0801>,<lambda_329b6e1d180a10757707941440dcbfad> >(Windows::Foundation::Collections::Internal::Vector<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,StageInfoEqualityPredicate,StageInfoLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0,1,0> > *,<lambda_699ff5d5a46e194d2b68519eb43f0801> const &,<lambda_329b6e1d180a10757707941440dcbfad> const &);
			long Do<<lambda_7a5d7da2011ef4f6f257c354bc172304>,<lambda_0454ec7b1d29609cac7801ad32c7696e> >(Windows::Foundation::Collections::Internal::Vector<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,StageInfoEqualityPredicate,StageInfoLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0,1,0> > *,<lambda_7a5d7da2011ef4f6f257c354bc172304> const &,<lambda_0454ec7b1d29609cac7801ad32c7696e> const &);
			long Do<<lambda_8d9ce49c39e9689aae7f0924cf3acbc9>,<lambda_cc08c738d4050ace69dc7972ba0142a0> >(Windows::Foundation::Collections::Internal::Vector<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,StageInfoEqualityPredicate,StageInfoLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0,1,0> > *,<lambda_8d9ce49c39e9689aae7f0924cf3acbc9> const &,<lambda_cc08c738d4050ace69dc7972ba0142a0> const &);
			long Do<<lambda_d184e051dd9bce7ff2596fecf27a0153>,<lambda_45fce7dab77fec15dd2fe9a944be8415> >(Windows::Foundation::Collections::Internal::Vector<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,StageInfoEqualityPredicate,StageInfoLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0,1,0> > *,<lambda_d184e051dd9bce7ff2596fecf27a0153> const &,<lambda_45fce7dab77fec15dd2fe9a944be8415> const &);
			long Do<<lambda_deb8e9fef7710fb02ae7f1d80276389a>,<lambda_efb10ec704eb3d3cf689e1db449700fb> >(Windows::Foundation::Collections::Internal::Vector<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,StageInfoEqualityPredicate,StageInfoLifetimeTraits,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::UI::BioEnrollment::DataModel::Face::FaceStageColorInfo,0,1,0> > *,<lambda_deb8e9fef7710fb02ae7f1d80276389a> const &,<lambda_efb10ec704eb3d3cf689e1db449700fb> const &);
		};

		struct ReentrancyGuard<0>
		{
			ReentrancyGuard<0>(...);
		};

	};

};

class _TlgActivityBase<wil::ActivityBase<WinBioDataModelLogger,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WinBioDataModelLogger,_TlgReflectorTag_Param0IsProviderType>,0,5>
{
protected:
	~_TlgActivityBase<wil::ActivityBase<WinBioDataModelLogger,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WinBioDataModelLogger,_TlgReflectorTag_Param0IsProviderType>,0,5>();
};

class _TlgActivityBase<wil::ActivityBase<WinBioDataModelLogger,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WinBioDataModelLogger,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>
{
protected:
	~_TlgActivityBase<wil::ActivityBase<WinBioDataModelLogger,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WinBioDataModelLogger,_TlgReflectorTag_Param0IsProviderType>,70368744177664,5>();
};

namespace cereal
{
	struct Exception
	{
		Exception(Exception const &);
		Exception(char const *);
		Exception(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
		virtual ~Exception();
	};

	class JSONInputArchive
	{
		struct Iterator
		{
			tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator> > const & value();
			void search(char const *);
		};

		void search();
	public:
		void startNode();
	};

	struct JSONOutputArchive
	{
		JSONOutputArchive(std::basic_ostream<char,std::char_traits<char> > &,JSONOutputArchive::Options const &);
		virtual ~JSONOutputArchive();
		void finishNode();
		void startNode();
		void writeName();
	};

	class OutputArchive<JSONOutputArchive,0>
	{
		void process<_tip_ReportBioDataStorageConsentResponseTest &>(_tip_ReportBioDataStorageConsentResponseTest &);
		void process<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &>(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
		void process<unsigned int &>(unsigned int &);
	public:
		OutputArchive<JSONOutputArchive,0>(JSONOutputArchive * const);
		virtual ~OutputArchive<JSONOutputArchive,0>();
	};

	namespace detail
	{
		class OutputArchiveBase
		{
			virtual void rtti();
		};

	};

	namespace util
	{
		std::basic_string<char,std::char_traits<char>,std::allocator<char> > wstring_to_string(std::basic_string_view<unsigned short,std::char_traits<unsigned short> > const &);
	};

	void save<JSONOutputArchive,std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > >(cereal::JSONOutputArchive &,std::vector<std::basic_string<char,std::char_traits<char>,std::allocator<char> >,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > > const &);
	void save<JSONOutputArchive,wil::StoredFailureInfo,std::allocator<wil::StoredFailureInfo> >(cereal::JSONOutputArchive &,std::vector<wil::StoredFailureInfo,std::allocator<wil::StoredFailureInfo> > const &);
};

namespace std
{
	struct _Hash<_Umap_traits<char const *,unsigned int,_Uhash_compare<char const *,hash<char const *>,equal_to<char const *> >,allocator<pair<char const * const,unsigned int> >,0> >
	{
		~_Hash<_Umap_traits<char const *,unsigned int,_Uhash_compare<char const *,hash<char const *>,equal_to<char const *> >,allocator<pair<char const * const,unsigned int> >,0> >();
	};

	struct _Hash<_Umap_traits<void const *,unsigned int,_Uhash_compare<void const *,hash<void const *>,equal_to<void const *> >,allocator<pair<void const * const,unsigned int> >,0> >
	{
		~_Hash<_Umap_traits<void const *,unsigned int,_Uhash_compare<void const *,hash<void const *>,equal_to<void const *> >,allocator<pair<void const * const,unsigned int> >,0> >();
	};

	struct _Hash<_Uset_traits<cereal::traits::detail::base_class_id,_Uhash_compare<cereal::traits::detail::base_class_id,cereal::traits::detail::base_class_id_hash,equal_to<cereal::traits::detail::base_class_id> >,allocator<cereal::traits::detail::base_class_id>,0> >
	{
		~_Hash<_Uset_traits<cereal::traits::detail::base_class_id,_Uhash_compare<cereal::traits::detail::base_class_id,cereal::traits::detail::base_class_id_hash,equal_to<cereal::traits::detail::base_class_id> >,allocator<cereal::traits::detail::base_class_id>,0> >();
	};

	struct _Hash<_Uset_traits<unsigned __int64,_Uhash_compare<unsigned __int64,hash<unsigned __int64>,equal_to<unsigned __int64> >,allocator<unsigned __int64>,0> >
	{
		~_Hash<_Uset_traits<unsigned __int64,_Uhash_compare<unsigned __int64,hash<unsigned __int64>,equal_to<unsigned __int64> >,allocator<unsigned __int64>,0> >();
	};

	struct _Hash_vec<allocator<_List_unchecked_const_iterator<_List_val<_List_simple_types<cereal::traits::detail::base_class_id> >,_Iterator_base0> > >
	{
		void _Assign_grow(unsigned __int64,_List_unchecked_const_iterator<_List_val<_List_simple_types<cereal::traits::detail::base_class_id> >,_Iterator_base0>);
		~_Hash_vec<allocator<_List_unchecked_const_iterator<_List_val<_List_simple_types<cereal::traits::detail::base_class_id> >,_Iterator_base0> > >();
	};

	struct _Hash_vec<allocator<_List_unchecked_const_iterator<_List_val<_List_simple_types<unsigned __int64> >,_Iterator_base0> > >
	{
		void _Assign_grow(unsigned __int64,_List_unchecked_const_iterator<_List_val<_List_simple_types<unsigned __int64> >,_Iterator_base0>);
		~_Hash_vec<allocator<_List_unchecked_const_iterator<_List_val<_List_simple_types<unsigned __int64> >,_Iterator_base0> > >();
	};

	struct _Hash_vec<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<char const * const,unsigned int> > > > > >
	{
		void _Assign_grow(unsigned __int64,_List_unchecked_iterator<_List_val<_List_simple_types<pair<char const * const,unsigned int> > > >);
		~_Hash_vec<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<char const * const,unsigned int> > > > > >();
	};

	struct _Hash_vec<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<void const * const,unsigned int> > > > > >
	{
		void _Assign_grow(unsigned __int64,_List_unchecked_iterator<_List_val<_List_simple_types<pair<void const * const,unsigned int> > > >);
		~_Hash_vec<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<void const * const,unsigned int> > > > > >();
	};

	struct _Ref_count_base
	{
		virtual void * _Get_deleter(type_info const &);
		void _Decref();
	};

	class _Ref_count_obj2<tip::details::test_merged_data<_tip_ReportBioDataStorageConsentResponseTest> >
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	struct _Tidy_guard<vector<float,allocator<float> > >
	{
		~_Tidy_guard<vector<float,allocator<float> > >();
	};

	struct allocator<cereal::JSONInputArchive::Iterator>
	{
		void deallocate(cereal::JSONInputArchive::Iterator * const,unsigned __int64);
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

	class basic_string<char,char_traits<char>,allocator<char> >
	{
		basic_string<char,char_traits<char>,allocator<char> > & _Reallocate_for<<lambda_66f57f934f28d61049862f64df852ff0>,char const *>(unsigned __int64,<lambda_66f57f934f28d61049862f64df852ff0>,char const *);
		basic_string<char,char_traits<char>,allocator<char> > & _Reallocate_grow_by<<lambda_e1befb086ad3257e3f042a63030725f7>,unsigned __int64,char>(unsigned __int64,<lambda_e1befb086ad3257e3f042a63030725f7>,unsigned __int64,char);
		basic_string<char,char_traits<char>,allocator<char> > & _Reallocate_grow_by<<lambda_f3a66ab6a0570788f31503db83886f49>,unsigned __int64,char const *,unsigned __int64>(unsigned __int64,<lambda_f3a66ab6a0570788f31503db83886f49>,unsigned __int64,char const *,unsigned __int64);
		unsigned __int64 _Calculate_growth(unsigned __int64);
	public:
		basic_string<char,char_traits<char>,allocator<char> > & append(unsigned __int64,char);
		basic_string<char,char_traits<char>,allocator<char> > & assign(char const * const,unsigned __int64);
		basic_string<char,char_traits<char>,allocator<char> > & insert(unsigned __int64,char const * const,unsigned __int64);
		basic_string<char,char_traits<char>,allocator<char> >(char const * const);
		~basic_string<char,char_traits<char>,allocator<char> >();
	};

	class basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >
	{
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & _Reallocate_for<<lambda_05cef1f6fdf474c9f3ed207deba0f73b>,unsigned short const *>(unsigned __int64,<lambda_05cef1f6fdf474c9f3ed207deba0f73b>,unsigned short const *);
		unsigned __int64 _Calculate_growth(unsigned __int64);
		void _Tidy_deallocate();
	public:
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(unsigned short const * const);
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
	public:
		basic_string<char,char_traits<char>,allocator<char> > str();
		virtual ~basic_stringbuf<char,char_traits<char>,allocator<char> >();
	};

	struct basic_stringstream<char,char_traits<char>,allocator<char> >
	{
		basic_stringstream<char,char_traits<char>,allocator<char> >();
		virtual ~basic_stringstream<char,char_traits<char>,allocator<char> >();
	};

	class deque<unsigned int,allocator<unsigned int> >
	{
		void _Growmap(unsigned __int64);
		void _Xlen();
	public:
		~deque<unsigned int,allocator<unsigned int> >();
	};

	struct exception
	{
		exception(char const * const);
		exception(exception const &);
		virtual char const * what();
		virtual ~exception();
	};

	struct function<long (unsigned long,unsigned long)>
	{
		~function<long (unsigned long,unsigned long)>();
	};

	struct list<cereal::traits::detail::base_class_id,allocator<cereal::traits::detail::base_class_id> >
	{
		~list<cereal::traits::detail::base_class_id,allocator<cereal::traits::detail::base_class_id> >();
	};

	struct list<pair<char const * const,unsigned int>,allocator<pair<char const * const,unsigned int> > >
	{
		~list<pair<char const * const,unsigned int>,allocator<pair<char const * const,unsigned int> > >();
	};

	struct list<pair<void const * const,unsigned int>,allocator<pair<void const * const,unsigned int> > >
	{
		~list<pair<void const * const,unsigned int>,allocator<pair<void const * const,unsigned int> > >();
	};

	struct list<unsigned __int64,allocator<unsigned __int64> >
	{
		~list<unsigned __int64,allocator<unsigned __int64> >();
	};

	struct runtime_error
	{
		runtime_error(runtime_error const &);
	};

	struct shared_ptr<tip::details::test_merged_data<_tip_ReportBioDataStorageConsentResponseTest> >
	{
		void reset();
	};

	struct stack<unsigned int,deque<unsigned int,allocator<unsigned int> > >
	{
		~stack<unsigned int,deque<unsigned int,allocator<unsigned int> > >();
	};

	struct unordered_map<char const *,unsigned int,hash<char const *>,equal_to<char const *>,allocator<pair<char const * const,unsigned int> > >
	{
		~unordered_map<char const *,unsigned int,hash<char const *>,equal_to<char const *>,allocator<pair<char const * const,unsigned int> > >();
	};

	struct unordered_map<void const *,unsigned int,hash<void const *>,equal_to<void const *>,allocator<pair<void const * const,unsigned int> > >
	{
		~unordered_map<void const *,unsigned int,hash<void const *>,equal_to<void const *>,allocator<pair<void const * const,unsigned int> > >();
	};

	struct unordered_set<cereal::traits::detail::base_class_id,cereal::traits::detail::base_class_id_hash,equal_to<cereal::traits::detail::base_class_id>,allocator<cereal::traits::detail::base_class_id> >
	{
		unordered_set<cereal::traits::detail::base_class_id,cereal::traits::detail::base_class_id_hash,equal_to<cereal::traits::detail::base_class_id>,allocator<cereal::traits::detail::base_class_id> >();
		~unordered_set<cereal::traits::detail::base_class_id,cereal::traits::detail::base_class_id_hash,equal_to<cereal::traits::detail::base_class_id>,allocator<cereal::traits::detail::base_class_id> >();
	};

	class vector<cereal::JSONInputArchive::Iterator,allocator<cereal::JSONInputArchive::Iterator> >
	{
		static void _Xlength();
		unsigned __int64 _Calculate_growth(unsigned __int64);
		void _Change_array(cereal::JSONInputArchive::Iterator * const,unsigned __int64,unsigned __int64);
	};

	class vector<float,allocator<float> >
	{
		void _Construct_n<float const &>(unsigned __int64,float const &);
		void _Tidy();
	public:
		vector<float,allocator<float> >(unsigned __int64,float const &,allocator<float> const &);
	};

	struct vector<function<void ()>,allocator<function<void ()> > >
	{
		~vector<function<void ()>,allocator<function<void ()> > >();
	};

	class vector<unsigned char,allocator<unsigned char> >
	{
		static void _Xlength();
		void _Resize<_Value_init_tag>(unsigned __int64,_Value_init_tag const &);
		void _Resize_reallocate<_Value_init_tag>(unsigned __int64,_Value_init_tag const &);
		void _Tidy();
	public:
		~vector<unsigned char,allocator<unsigned char> >();
	};

	cereal::JSONInputArchive::Iterator * _Uninitialized_move<cereal::JSONInputArchive::Iterator *,allocator<cereal::JSONInputArchive::Iterator> >(cereal::JSONInputArchive::Iterator * const,cereal::JSONInputArchive::Iterator * const,cereal::JSONInputArchive::Iterator *,std::allocator<cereal::JSONInputArchive::Iterator> &);
	nothrow_t const std::nothrow;
	std::basic_string<char,std::char_traits<char>,std::allocator<char> > _UIntegral_to_string<char,unsigned int>(unsigned int);
	unsigned __int64 _Get_size_of_n<40>(unsigned __int64);
	unsigned __int64 _Get_size_of_n<8>(unsigned __int64);
	void * _Allocate<16,_Default_allocate_traits,0>(unsigned __int64);
	void _Adjust_manually_vector_aligned(void * &,unsigned __int64 &);
	void _Deallocate<16,0>(void *,unsigned __int64);
	void _Destroy_range<allocator<basic_string<char,char_traits<char>,allocator<char> > > >(std::basic_string<char,std::char_traits<char>,std::allocator<char> > *,std::basic_string<char,std::char_traits<char>,std::allocator<char> > * const,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char> > > &);
	void _Destroy_range<allocator<wil::StoredFailureInfo> >(wil::StoredFailureInfo *,wil::StoredFailureInfo * const,std::allocator<wil::StoredFailureInfo> &);
	void _Throw_bad_array_new_length();
	void _Xlen_string();
	void fill<_List_unchecked_const_iterator<_List_val<_List_simple_types<cereal::traits::detail::base_class_id> >,_Iterator_base0> *,_List_unchecked_const_iterator<_List_val<_List_simple_types<cereal::traits::detail::base_class_id> >,_Iterator_base0> >(std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<cereal::traits::detail::base_class_id> >,std::_Iterator_base0> * const,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<cereal::traits::detail::base_class_id> >,std::_Iterator_base0> * const,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<cereal::traits::detail::base_class_id> >,std::_Iterator_base0> const &);
	void fill<_List_unchecked_const_iterator<_List_val<_List_simple_types<unsigned __int64> >,_Iterator_base0> *,_List_unchecked_const_iterator<_List_val<_List_simple_types<unsigned __int64> >,_Iterator_base0> >(std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64> >,std::_Iterator_base0> * const,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64> >,std::_Iterator_base0> * const,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned __int64> >,std::_Iterator_base0> const &);
	void fill<_List_unchecked_iterator<_List_val<_List_simple_types<pair<char const * const,unsigned int> > > > *,_List_unchecked_iterator<_List_val<_List_simple_types<pair<char const * const,unsigned int> > > > >(std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<char const * const,unsigned int> > > > * const,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<char const * const,unsigned int> > > > * const,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<char const * const,unsigned int> > > > const &);
	void fill<_List_unchecked_iterator<_List_val<_List_simple_types<pair<void const * const,unsigned int> > > > *,_List_unchecked_iterator<_List_val<_List_simple_types<pair<void const * const,unsigned int> > > > >(std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<void const * const,unsigned int> > > > * const,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<void const * const,unsigned int> > > > * const,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<void const * const,unsigned int> > > > const &);
};

namespace tip
{
	namespace details
	{
		class test_common_data<0>
		{
			std::basic_string<char,std::char_traits<char>,std::allocator<char> > data(serialize_options);
			void evaluate_and_report(__int64);
			void update_from_test_info(TestInfo const &);
		public:
			_GUID start();
			void complete();
			void end_update();
			~test_common_data<0>();
		};

		class test_merged_data<_tip_ReportBioDataStorageConsentResponseTest>
		{
			virtual void deserialize(cereal::JSONInputArchive &);
			virtual void evaluate();
			virtual void on_result(TipReportingInfo const &);
			virtual void serialize(cereal::JSONOutputArchive &,serialize_options);
		public:
			static test_info const c_details;
			test_merged_data<_tip_ReportBioDataStorageConsentResponseTest>();
		};

	};

	struct test_data_control<_tip_ReportBioDataStorageConsentResponseTest>
	{
		~test_data_control<_tip_ReportBioDataStorageConsentResponseTest>();
	};

	struct test_state
	{
		~test_state();
	};

	class tip_test<_tip_ReportBioDataStorageConsentResponseTest>
	{
		std::shared_ptr<details::test_merged_data<_tip_ReportBioDataStorageConsentResponseTest> > & ensure_data();
	};

};

namespace tip_rapidjson
{
	struct GenericValue<UTF8<char>,MemoryPoolAllocator<CrtAllocator> >
	{
		GenericValue<UTF8<char>,MemoryPoolAllocator<CrtAllocator> > * Begin();
		GenericValue<UTF8<char>,MemoryPoolAllocator<CrtAllocator> > * End();
		char const * GetString();
	};

	class PrettyWriter<BasicOStreamWrapper<std::basic_ostream<char,std::char_traits<char> > >,UTF8<char>,UTF8<char>,CrtAllocator,2>
	{
	protected:
		void PrettyPrefix(Type);
		void WriteIndent();
	public:
		bool EndArray(unsigned int);
		bool EndObject(unsigned int);
		bool StartArray();
		bool StartObject();
		bool String(char const *,unsigned int,bool);
		~PrettyWriter<BasicOStreamWrapper<std::basic_ostream<char,std::char_traits<char> > >,UTF8<char>,UTF8<char>,CrtAllocator,2>();
	};

	class Writer<BasicOStreamWrapper<std::basic_ostream<char,std::char_traits<char> > >,UTF8<char>,UTF8<char>,CrtAllocator,2>
	{
	protected:
		bool WriteBool(bool);
		bool WriteInt(int);
		bool WriteString(char const *,unsigned int);
	};

	namespace internal
	{
		class Stack<CrtAllocator>
		{
			void Expand<Writer<BasicOStreamWrapper<std::basic_ostream<char,std::char_traits<char> > >,UTF8<char>,UTF8<char>,CrtAllocator,2>::Level>(unsigned __int64);
			void Resize(unsigned __int64);
		public:
			Writer<BasicOStreamWrapper<std::basic_ostream<char,std::char_traits<char> > >,UTF8<char>,UTF8<char>,CrtAllocator,2>::Level * Pop<Writer<BasicOStreamWrapper<std::basic_ostream<char,std::char_traits<char> > >,UTF8<char>,UTF8<char>,CrtAllocator,2>::Level>(unsigned __int64);
			Writer<BasicOStreamWrapper<std::basic_ostream<char,std::char_traits<char> > >,UTF8<char>,UTF8<char>,CrtAllocator,2>::Level * Top<Writer<BasicOStreamWrapper<std::basic_ostream<char,std::char_traits<char> > >,UTF8<char>,UTF8<char>,CrtAllocator,2>::Level>();
		};

		char * u32toa(unsigned int,char *);
	};

};

namespace wil
{
	class ActivityBase<WinBioDataModelLogger,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<WinBioDataModelLogger,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<WinBioDataModelLogger,_TlgReflectorTag_Param0IsProviderType>();
		};

	protected:
		void Destroy();
		void EnsureWatchingCurrentThread();
	public:
		ActivityBase<WinBioDataModelLogger,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void IgnoreCurrentThread();
		void Stop(long);
		void zInternalStart();
		void zInternalStop();
		~ActivityBase<WinBioDataModelLogger,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>();
	};

	class ActivityBase<WinBioDataModelLogger,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<WinBioDataModelLogger,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<WinBioDataModelLogger,_TlgReflectorTag_Param0IsProviderType>();
		};

	protected:
		void Destroy();
		void EnsureWatchingCurrentThread();
	public:
		ActivityBase<WinBioDataModelLogger,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void IgnoreCurrentThread();
		void Stop(long);
		void zInternalStart();
		void zInternalStop();
		~ActivityBase<WinBioDataModelLogger,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>();
	};

	struct PropVariant
	{
		~PropVariant();
	};

	struct PropertyStoreHelper
	{
		~PropertyStoreHelper();
	};

	struct PropertyStoreHelperBase<IPropertyStore>
	{
		long GetBoolean<_tagpropertykey>(_tagpropertykey,bool *);
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
		void InternalInitialize();
	protected:
		virtual void Initialize();
		virtual void OnErrorReported(bool,FailureInfo const &);
		virtual ~TraceLoggingProvider();
		void Register(_tlgProvider_t const * const,void (*)(_GUID const *,unsigned long,unsigned char,unsigned __int64,unsigned __int64,_EVENT_FILTER_DESCRIPTOR *,void *));
		void ReportTelemetryFailure(FailureInfo const &);
		void ReportTraceLoggingFailure(FailureInfo const &);
	};

	struct com_ptr_t<IRestrictedErrorInfo,err_returncode_policy>
	{
		~com_ptr_t<IRestrictedErrorInfo,err_returncode_policy>();
	};

	struct com_ptr_t<IWeakReference,err_exception_policy>
	{
		com_ptr_t<Windows::Internal::SecurityKeyEnrollment::ISecurityKeyEnrollmentSession,err_exception_policy> query<Windows::Internal::SecurityKeyEnrollment::ISecurityKeyEnrollmentSession>();
		~com_ptr_t<IWeakReference,err_exception_policy>();
	};

	struct com_ptr_t<IWeakReferenceSource,err_returncode_policy>
	{
		~com_ptr_t<IWeakReferenceSource,err_returncode_policy>();
	};

	struct com_ptr_t<SecurityKeySession,err_exception_policy>
	{
		com_ptr_t<SecurityKeySession,err_exception_policy>(SecurityKeySession *);
		~com_ptr_t<SecurityKeySession,err_exception_policy>();
	};

	struct com_ptr_t<SelectionContext,err_exception_policy>
	{
		com_ptr_t<SelectionContext,err_exception_policy>(SelectionContext *);
		~com_ptr_t<SelectionContext,err_exception_policy>();
	};

	struct com_ptr_t<Windows::Internal::SecurityKeyEnrollment::ISecurityKeyContext,err_exception_policy>
	{
		~com_ptr_t<Windows::Internal::SecurityKeyEnrollment::ISecurityKeyContext,err_exception_policy>();
	};

	struct com_ptr_t<Windows::Internal::SecurityKeyEnrollment::ISecurityKeyEnrollmentArgs,err_exception_policy>
	{
		~com_ptr_t<Windows::Internal::SecurityKeyEnrollment::ISecurityKeyEnrollmentArgs,err_exception_policy>();
	};

	struct com_ptr_t<Windows::Internal::SecurityKeyEnrollment::ISecurityKeyEnrollmentSession,err_exception_policy>
	{
		~com_ptr_t<Windows::Internal::SecurityKeyEnrollment::ISecurityKeyEnrollmentSession,err_exception_policy>();
	};

	struct com_ptr_t<Windows::Internal::SecurityKeyEnrollment::ISecurityKeyFingerprintEnrollmentResult,err_exception_policy>
	{
		~com_ptr_t<Windows::Internal::SecurityKeyEnrollment::ISecurityKeyFingerprintEnrollmentResult,err_exception_policy>();
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
			void RecordCachedUsageUnderLock();
		public:
			unsigned int EnsureSubscribedToFeatureConfigurationChanges();
			void OnStateChange();
			void OnTimer();
			void QueueBackgroundUsageReporting(unsigned int,wil_details_FeatureReportingCache *);
			~EnabledStateManager();
		};

		class FeatureImpl<__WilFeatureTraits_Feature_BIPAAPIs>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			bool __private_IsEnabled(ReportingKind);
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_Servicing_FingerprintSensorOnKeyboardGlyphs_25587932>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_UnusedBioConsent>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			bool __private_IsEnabled();
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_Usage_Tracking_FaceAuthentication>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		struct FeatureLogging
		{
			static _tlgProvider_t const * Provider();
		};

		class FeatureStateManager
		{
			bool EnsureStateData();
			bool EnsureSubscribedToStateChangesUnderLock();
		public:
			void FlushUsage();
			void QueueBackgroundSRUMUsageReporting(unsigned int,unsigned short,unsigned int);
			void RecordFeatureUsage(unsigned int,wil_details_ServiceReportingKind,unsigned __int64);
			void SubscribeToUsageFlush(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *));
			~FeatureStateManager();
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
			~ThreadFailureCallbackHolder();
		};

		namespace in1diag3
		{
			bool Log_HrIfMsg(void *,unsigned int,char const *,long,bool,char const *,...);
			long Log_Hr(void *,unsigned int,char const *,long);
			long Log_HrMsg(void *,unsigned int,char const *,long,char const *,...);
			long Return_CaughtException(void *,unsigned int,char const *);
			long Return_GetLastError(void *,unsigned int,char const *);
			long Return_NtStatus(void *,unsigned int,char const *,long);
			long Return_Win32(void *,unsigned int,char const *,unsigned long);
			void FailFast_Unexpected(void *,unsigned int,char const *);
			void Return_Hr(void *,unsigned int,char const *,long);
			void Throw_GetLastError(void *,unsigned int,char const *);
			void Throw_Hr(void *,unsigned int,char const *,long);
			void _FailFastImmediate_Unexpected();
			void _FailFast_GetLastError(void *,unsigned int,char const *);
			void _FailFast_Unexpected(void *,unsigned int,char const *);
			void _Log_Hr(void *,unsigned int,char const *,long);
			void _Throw_Hr(void *,unsigned int,char const *,long);
			void _Throw_NullAlloc(void *,unsigned int,char const *);
		};

		class shared_buffer
		{
			void assign(long *,unsigned __int64);
		public:
			bool create(void const *,unsigned __int64);
			void reset();
		};

		struct shared_object<ActivityBase<WinBioDataModelLogger,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WinBioDataModelLogger,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct shared_object<ActivityBase<WinBioDataModelLogger,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WinBioDataModelLogger,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct static_lazy<FeatureLogging>
		{
			struct Completer
			{
				~Completer();
			};

			FeatureLogging * get(void (*)());
		};

		struct static_lazy<WinBioDataModelLogger>
		{
			struct Completer
			{
				~Completer();
			};

			WinBioDataModelLogger * get(void (*)());
		};

		namespace static_lazy<WinBioDataModelTelemetry>
		{
			struct Completer
			{
				~Completer();
			};

		};

		struct wnf_subscription_state<_WEBAUTHN_WNF_CTAP_DEVICE_STATE_INFO>
		{
			virtual ~wnf_subscription_state<_WEBAUTHN_WNF_CTAP_DEVICE_STATE_INFO>();
		};

		struct wnf_subscription_state<unsigned long>
		{
			virtual ~wnf_subscription_state<unsigned long>();
		};

		FEATURE_ENABLED_STATE WilApiImpl_GetFeatureEnabledState(unsigned int,FEATURE_CHANGE_TIME,int *);
		FEATURE_ENABLED_STATE WilApi_GetFeatureEnabledState(unsigned int,FEATURE_CHANGE_TIME,int *);
		bool GetModuleInformation(void *,unsigned int *,char *,unsigned __int64);
		bool IsFeatureConfigured(wil_FeatureState *,unsigned int,bool,wil_FeatureStore,int *);
		bool g_processShutdownInProgress;
		bool g_resultMessageCallbackSet;
		char const * (* ?? g_pfnGetModuleName)();
		char const * GetCurrentModuleName();
		details::ResultStatus ReportFailure_CaughtExceptionCommon<1>(void *,unsigned int,char const *,char const *,char const *,void *,unsigned short *,unsigned __int64,SupportedExceptions);
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
		long GetLastErrorFailHr();
		long HrToNtStatus(long);
		long NtStatusToHr(long);
		long RecognizeCaughtExceptionFromCallback(unsigned short *,unsigned __int64);
		long ReportFailure_CaughtException<1>(void *,unsigned int,char const *,char const *,char const *,void *,SupportedExceptions);
		long ReportFailure_GetLastErrorHr<1>(void *,unsigned int,char const *,char const *,char const *,void *);
		long ReportFailure_NtStatus<1>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		long ReportFailure_Win32<1>(void *,unsigned int,char const *,char const *,char const *,void *,unsigned long);
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
		unsigned long ReportFailure_GetLastError<0>(void *,unsigned int,char const *,char const *,char const *,void *);
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
		void FailfastWithContextCallback(FailureInfo const &);
		void FeatureLoggingHook(unsigned int,FEATURE_LOGGED_TRAITS const *,FEATURE_ERROR const *,int,wil_ReportingKind const *,wil_VariantReportingKind const *,unsigned char,unsigned __int64);
		void FormatNtStatusMsg(long,unsigned short *,unsigned long);
		void FreeProcessHeap(void *);
		void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
		void LogFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,details::ResultStatus const &,unsigned short const *,bool,unsigned short *,unsigned __int64,char *,unsigned __int64,FailureInfo *);
		void MaybeGetExceptionString(ResultException const &,unsigned short *,unsigned __int64);
		void MaybeGetExceptionString(std::exception const &,unsigned short *,unsigned __int64);
		void MicrosoftInternalNotifyFailure(FailureInfo *);
		void RaiseRoOriginateOnWilExceptions(FailureInfo const &);
		void RecordFeatureUsageCallback(unsigned int,wil_details_ServiceReportingKind,unsigned int,wil_details_FeatureReportingCache *,wil_details_RecordUsageResult *);
		void RecordSRUMFeatureUsage(unsigned int,unsigned int,unsigned int);
		void ReleaseMutex(void *);
		void ReportFailure_Base<0,0>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Base<1,0>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Base<2,0>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Base<3,0>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Hr<0>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		void ReportFailure_Hr<1>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		void ReportFailure_Hr<2>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		void ReportFailure_Hr<3>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		void ReportFailure_HrMsg<2>(void *,unsigned int,char const *,char const *,char const *,void *,long,char const *,char *);
		void ReportFailure_Msg<2>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,char const *,char *);
		void ReportFailure_NoReturn<0>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_NoReturn<3>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Return<1>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Return<2>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportUsageToService(wil_details_FeatureReportingCache *,unsigned int,int,int,FEATURE_LOGGED_TRAITS const *,int,wil_ReportingKind,unsigned __int64);
		void ResetEvent(void *);
		void Rethrow();
		void SetEvent(void *);
		void SubscribeFeatureStateCacheToConfigurationChanges(wil_details_FeatureStateCache *,wil_FeatureChangeTime,unsigned int);
		void ThrowResultExceptionInternal(FailureInfo const &);
		void UnsubscribeProcessWideUsageFlush(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
		void WilApiImpl_RecordFeatureUsage(unsigned int,unsigned int,unsigned int,char const *);
		void WilApiImpl_SubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
		void WilApiImpl_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
		void WilApi_RecordFeatureUsage(unsigned int,unsigned int,unsigned int,char const *);
		void WilApi_SubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
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
			bool RecordFeatureUsage(unsigned int,wil_details_ServiceReportingKind,unsigned __int64);
			void ProcessShutdown();
			void RecordUsage();
			~FeatureStateData();
		};

		struct ProcessLocalStorage<FeatureStateData>
		{
			~ProcessLocalStorage<FeatureStateData>();
		};

		struct ProcessLocalStorage<ProcessLocalData>
		{
			~ProcessLocalStorage<ProcessLocalData>();
		};

		struct ProcessLocalStorageData<FeatureStateData>
		{
			static long Acquire(char const *,ProcessLocalStorageData<FeatureStateData> * *);
			void Release();
			~ProcessLocalStorageData<FeatureStateData>();
		};

		struct ProcessLocalStorageData<ProcessLocalData>
		{
			static long Acquire(char const *,ProcessLocalStorageData<ProcessLocalData> * *);
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
			void Clear();
			void SetLastError(FailureInfo const &);
		};

		struct ThreadLocalFailureInfo
		{
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
			~heap_buffer();
		};

		details_abi::ProcessLocalStorage<details_abi::ProcessLocalData> * g_pProcessLocalData;
		details_abi::ThreadLocalData * GetThreadLocalDataCache(bool);
		void RecordWnfUsageIndex(__WIL__WNF_STATE_NAME const *,unsigned __int64,details_abi::RawUsageIndex const &);
	};

	struct last_error_context
	{
		~last_error_context();
	};

	WilFailureReportFlags g_moduleFailureReportFlags;
	bool (* ?? g_pfnIsDebuggerPresent)();
	bool (* ?? g_pfnWilFailFast)(wil::FailureInfo const &);
	bool ProcessShutdownInProgress();
	bool g_fBreakOnFailure;
	bool g_fIsDebuggerPresent;
	long (* ?? g_pfnResultFromCaughtException)();
	long GetFailureLogString(unsigned short *,unsigned __int64,wil::FailureInfo const &);
	long wnf_query_nothrow<unsigned long>(_WNF_STATE_NAME const &,bool *,unsigned long *,wil::WNF_CHANGE_STAMP_STRUCT *);
	void ThrowResultException(wil::FailureInfo const &);
	void save<cereal::JSONOutputArchive>(cereal::JSONOutputArchive &,wil::StoredFailureInfo const &);
	void wnf_publish<unsigned long>(_WNF_STATE_NAME const &,unsigned long const &);
	wistd::unique_ptr<unsigned short [0],wil::cotaskmem_secure_deleter> make_cotaskmem_string_secure(unsigned short const *);
};

namespace wistd
{
	namespace __function
	{
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

	struct function<void (_WEBAUTHN_WNF_CTAP_DEVICE_STATE_INFO const &)>
	{
		~function<void (_WEBAUTHN_WNF_CTAP_DEVICE_STATE_INFO const &)>();
	};

	struct function<void (unsigned long const &)>
	{
		~function<void (unsigned long const &)>();
	};

	struct unique_ptr<unsigned short [0],wil::cotaskmem_secure_deleter>
	{
		~unique_ptr<unsigned short [0],wil::cotaskmem_secure_deleter>();
	};

};

FEATURE_ENABLED_STATE (* g_wil_details_apiGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME,int *);
FEATURE_ENABLED_STATE (* g_wil_details_internalGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME,int *);
HINSTANCE__ * g_wil_details_kernelbaseModuleHandle;
HINSTANCE__ * g_wil_details_ntdllModuleHandle;
HINSTANCE__ * wil_details_GetKernelBaseModuleHandle();
HINSTANCE__ * wil_details_GetNtDllModuleHandle();
Microsoft::WRL::Details::CreatorMap const __object_BioEnrollBroker;
Microsoft::WRL::Details::CreatorMap const __object_BioEnrollRetailDemo;
Microsoft::WRL::Details::CreatorMap const __object_OOBEBioEnrollmentSession;
Microsoft::WRL::Details::CreatorMap const __object_OOBEBioEnrollment_COM;
Microsoft::WRL::Details::CreatorMap const __object_PinEnrollmentManager;
Microsoft::WRL::Details::CreatorMap const __object_WinBioEnrollmentSessionFactory;
Microsoft::WRL::Details::FactoryCache __objectFactory__BioEnrollBroker;
Microsoft::WRL::Details::FactoryCache __objectFactory__BioEnrollRetailDemo;
Microsoft::WRL::Details::FactoryCache __objectFactory__OOBEBioEnrollmentSession;
Microsoft::WRL::Details::FactoryCache __objectFactory__OOBEBioEnrollment_COM;
Microsoft::WRL::Details::FactoryCache __objectFactory__PinEnrollmentManager;
Microsoft::WRL::Details::FactoryCache __objectFactory__WinBioEnrollmentSessionFactory;
_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
__type_info_node __type_info_root_node;
bool IsBackgroundExtensionContract(unsigned short const *);
bool IsFullscreenCXHRunning();
bool IsUserOOBE();
int InlineIsEqualGUID(_GUID const &,_GUID const &);
int wil_RtlStagingConfig_QueryFeatureState(wil_FeatureState *,unsigned int,int,int *);
long (* g_wil_details_pfnNtQueryWnfStateData)(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long (* g_wil_details_pfnNtUpdateWnfStateData)(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long AllocAndCopySid(void *,void * *);
long BlockOnCompletionAndGetResults<Windows::Internal::UI::Auth::Enrollment::EnrollmentUpdateResult *,Windows::Internal::UI::Auth::Enrollment::IEnrollmentUpdateResult>(Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Auth::Enrollment::EnrollmentUpdateResult *> *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Internal::UI::Auth::Enrollment::IEnrollmentUpdateResult> >,tagCOWAIT_FLAGS,void *);
long BlockOnCompletionAndGetResults<Windows::Internal::UI::Auth::Enrollment::ICredentialEnrollment *,Windows::Internal::UI::Auth::Enrollment::ICredentialEnrollment>(Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Auth::Enrollment::ICredentialEnrollment *> *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Internal::UI::Auth::Enrollment::ICredentialEnrollment> >,tagCOWAIT_FLAGS,void *);
long CaptureCurrentUserIdentity(_WINBIO_IDENTITY *);
long CloudExperienceHostCreateOOBEUserObject(_GUID const &,_GUID const &,void * *);
long CreateActivationFactoryRestrictedToCloudExperienceHostApp<Microsoft::WRL::SimpleSealedActivationFactory<CloudExperienceHostBroker::Hello::HelloEnrollmentManager,0> >(unsigned int *,Microsoft::WRL::Details::CreatorMap const *,_GUID const &,IUnknown * *);
long CreateActivationFactoryRestrictedToSettingsApp<Microsoft::WRL::SimpleSealedActivationFactory<BioEnrollBroker,0> >(unsigned int *,Microsoft::WRL::Details::CreatorMap const *,_GUID const &,IUnknown * *);
long CreateWinBioIdentityFromCurrentUser(_WINBIO_IDENTITY &);
long DeleteBioTemplatesForType(unsigned int,_WINBIO_IDENTITY);
long GetCurrentUserSid(void * *);
long GetUserSidFromToken(void * const,unsigned short * *);
long IsCandidateUser(unsigned char *);
long ResultFromKnownLastError();
long ResultFromWin32Bool(int);
long SHRegGetBOOLWithREGSAM(HKEY__ *,unsigned short const *,unsigned short const *,unsigned long,int *);
long SHRegGetDWORD(HKEY__ *,unsigned short const *,unsigned short const *,unsigned long *);
long SHRegSetDWORD(HKEY__ *,unsigned short const *,unsigned short const *,unsigned long);
long SHRegSetFILETIME(HKEY__ *,unsigned short const *,unsigned short const *,_FILETIME const *);
long SetSizeAndPositionInModalExperienceOptions(Windows::Internal::Shell::ModalExperience::IModalExperienceDefaultOptions *,Windows::Foundation::Rect);
long SplitActionAndServiceId(HSTRING__ *,HSTRING__ * *,HSTRING__ * *);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCopyNExW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64,unsigned short * *,unsigned __int64 *,unsigned long);
long StringCchCopyNW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long StringCchVPrintfW(unsigned short *,unsigned __int64,unsigned short const *,char *);
long ULongLongMult(unsigned __int64,unsigned __int64,unsigned __int64 *);
long VerifyCallerHasCapability(unsigned short const *);
long VerifyCallerIsSettingsApp();
long WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Auth::Enrollment::EnrollmentUpdateResult *>,Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Auth::Enrollment::EnrollmentUpdateResult *> >(Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Auth::Enrollment::EnrollmentUpdateResult *> *,tagCOWAIT_FLAGS,void *);
long WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::UI::Auth::Enrollment::ICredentialEnrollment *>,Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Auth::Enrollment::ICredentialEnrollment *> >(Windows::Foundation::IAsyncOperation<Windows::Internal::UI::Auth::Enrollment::ICredentialEnrollment *> *,tagCOWAIT_FLAGS,void *);
long WeakRefAs<Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Internal::UI::BioEnrollment::Broker::IBioEnrollmentActivationArgs> > >(Microsoft::WRL::WeakRef const &,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Internal::UI::BioEnrollment::Broker::IBioEnrollmentActivationArgs> >);
long WeakRefAs<Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyEnrollmentStateManager> > >(Microsoft::WRL::WeakRef const &,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Internal::UI::BioEnrollment::DataModel::SecurityKey::ISecurityKeyEnrollmentStateManager> >);
long wil_details_NtQueryWnfStateData(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long wil_details_NtUpdateWnfStateData(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long wil_details_WriteSRUMWnfUsageBuffer(wil::details_abi::heap_vector<wil_details_FeatureUsageSRUM> *);
unsigned long _RegSetKeyValueWithSDDL(HKEY__ *,unsigned short const *,unsigned short const *,unsigned long,void const *,unsigned long,_SECURITY_ATTRIBUTES *);
unsigned short const * const CancelEnrollFingerprintAction;
unsigned short const * const RemoveAllFingerprintsAction;
unsigned short const * const RuntimeClass_CloudExperienceHostBroker_Hello_HelloEnrollmentManager;
unsigned short const * const RuntimeClass_CloudExperienceHostBroker_Hello_HelloEnrollmentManagerFactory;
unsigned short const * const RuntimeClass_Windows_Foundation_Diagnostics_AsyncCausalityTracer;
unsigned short const * const RuntimeClass_Windows_Foundation_PropertyValue;
unsigned short const * const RuntimeClass_Windows_Internal_SecurityKeyEnrollment_SecurityKeyContext;
unsigned short const * const RuntimeClass_Windows_Internal_SecurityKeyEnrollment_SecurityKeyEnrollmentArgs;
unsigned short const * const RuntimeClass_Windows_Internal_SecurityKeyEnrollment_SecurityKeyFingerprintEnrollmentResult;
unsigned short const * const RuntimeClass_Windows_Internal_Shell_ModalExperience_ModalExperienceManager;
unsigned short const * const RuntimeClass_Windows_Internal_Shell_ModalExperience_ModalExperienceOptions;
unsigned short const * const RuntimeClass_Windows_Internal_UI_Auth_Enrollment_CredentialEnrollmentManager;
unsigned short const * const RuntimeClass_Windows_Internal_UI_BioEnrollment_Broker_BioEnrollmentActivationArgs;
unsigned short const * const RuntimeClass_Windows_Internal_UI_BioEnrollment_Broker_BioEnrollmentBroker;
unsigned short const * const RuntimeClass_Windows_Internal_UI_BioEnrollment_Broker_BioEnrollmentRetailDemo;
unsigned short const * const RuntimeClass_Windows_Internal_UI_BioEnrollment_DataModel_BioEnrollmentSessionFactory;
unsigned short const * const RuntimeClass_Windows_Internal_UI_BioEnrollment_DataModel_Face_FaceEnrollmentStateInfo;
unsigned short const * const RuntimeClass_Windows_Internal_UI_BioEnrollment_DataModel_Face_FaceSensorInfo;
unsigned short const * const RuntimeClass_Windows_Internal_UI_BioEnrollment_DataModel_Fingerprint_ExtendedFingerprintSensorInfoBroker;
unsigned short const * const RuntimeClass_Windows_Internal_UI_BioEnrollment_DataModel_Fingerprint_FingerprintEnrollmentStateInfo;
unsigned short const * const RuntimeClass_Windows_Internal_UI_BioEnrollment_DataModel_Fingerprint_FingerprintSensorInfo;
unsigned short const * const RuntimeClass_Windows_Internal_UI_BioEnrollment_DataModel_FullTrustOOBEBioEnrollmentSessionFactory;
unsigned short const * const RuntimeClass_Windows_Internal_UI_BioEnrollment_DataModel_Iris_IrisEnrollmentStateInfo;
unsigned short const * const RuntimeClass_Windows_Internal_UI_BioEnrollment_DataModel_Iris_IrisEnrollmentUIGridPoint;
unsigned short const * const RuntimeClass_Windows_Internal_UI_BioEnrollment_DataModel_Iris_IrisEnrollmentUIUpdateRequest;
unsigned short const * const RuntimeClass_Windows_Internal_UI_BioEnrollment_DataModel_OOBEBioEnrollmentSessionFactory;
unsigned short const * const RuntimeClass_Windows_Internal_UI_BioEnrollment_DataModel_Pin_PinEnrollmentManager;
unsigned short const * const RuntimeClass_Windows_Internal_UI_BioEnrollment_DataModel_SecurityKey_SecurityKeyFingerprintEnrollmentStateInfo;
unsigned short const * const RuntimeClass_Windows_Internal_UI_BioEnrollment_DataModel_SecurityKey_SecurityKeyPinOperationInfo;
unsigned short const * const RuntimeClass_Windows_Internal_UI_BioEnrollment_DataModel_SuspendErrorStateInfo;
unsigned short const * const RuntimeClass_Windows_Internal_UI_BioEnrollment_DataModel_UserVerificationInfo;
unsigned short const * const RuntimeClass_Windows_System_Internal_UserManager;
unsigned short const * const RuntimeClass_Windows_UI_Core_CoreWindow;
unsigned short const * const ShowEnrollmentOperation;
unsigned short const * const c_szActionServiceDelimiter;
void (* g_wil_details_RecordSRUMFeatureUsage)(unsigned int,unsigned int,unsigned int);
void (* g_wil_details_apiRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_apiSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_apiUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_internalRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_internalSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_internalUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_pfnFeatureLoggingHook)(unsigned int,FEATURE_LOGGED_TRAITS const *,FEATURE_ERROR const *,int,wil_ReportingKind const *,wil_VariantReportingKind const *,unsigned char,unsigned __int64);
void (* g_wil_details_realtimeFeatureUsageHook)(unsigned int,unsigned int,unsigned char);
void * operator new(unsigned __int64);
void * operator new(unsigned __int64,std::nothrow_t const &);
void * operator new[](unsigned __int64,std::nothrow_t const &);
void __ArrayUnwind(void *,unsigned __int64,unsigned __int64,void (*)(void *));
void __scrt_initialize_type_info();
void __scrt_throw_std_bad_alloc();
void __scrt_throw_std_bad_array_new_length();
void __scrt_uninitialize_type_info();
void _tlgWriteActivityAutoStop<0,5>(_tlgProvider_t const *,_GUID const *);
void _tlgWriteActivityAutoStop<70368744177664,5>(_tlgProvider_t const *,_GUID const *);
void operator delete(void *);
void operator delete(void *,std::nothrow_t const &);
void operator delete(void *,unsigned __int64);
void operator delete[](void *);
void operator delete[](void *,unsigned __int64);
void wil_StagingConfig_LogStagedFeatureUsage(unsigned int,unsigned int,unsigned char);
void wil_details_FeatureReporting_IncrementOpportunityInCache(wil_details_FeatureReportingCache *,wil_details_ServiceReportingKind,unsigned int,wil_details_RecordUsageResult *);
void wil_details_FeatureReporting_IncrementUsageInCache(wil_details_FeatureReportingCache *,wil_details_ServiceReportingKind,unsigned int,wil_details_RecordUsageResult *);
void wil_details_RecordCachedUsage(unsigned int,wil_details_FeatureReportingCache *,void (*)(unsigned int,unsigned int,unsigned int,char const *));
wil_details_RecordUsageResult wil_details_FeatureReporting_RecordUsageInCache(wil_details_FeatureReportingCache *,wil_details_ServiceReportingKind,unsigned int,unsigned int);
wil_details_ServiceReportingKind wil_details_MapReportingKind(wil_ReportingKind,int);
