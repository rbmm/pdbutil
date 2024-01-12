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

class <lambda_6d06f265fa78a56f9dca2a1b8c432f39>
{
	static <lambda_invoker_cdecl>();
};

class <lambda_a676b6f833048f08e2388fed22221e12>
{
	static long <lambda_invoker_cdecl>(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
};

class <lambda_aa194dc0bf891154933407eb98fb868a>
{
	static <lambda_invoker_cdecl>(void *);
};

class <lambda_d51448ba32f8ef42e59400edd4566183>
{
	static <lambda_invoker_cdecl>(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
};

class <lambda_fee8cea507d2413a58be13acfb66740a>
{
	static <lambda_invoker_cdecl>(void *);
};

struct CAdminNameCompare
{
	int Compare(Microsoft::WRL::ComPtr<IPropertyStore> const &,Microsoft::WRL::ComPtr<IPropertyStore> const &);
};

struct CAdviseCredProvsJob
{
	virtual void Do(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &);
};

struct CAdviseCredentialJob
{
	virtual void Do(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &);
};

struct CBuildUserTileJob
{
	virtual void Do(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &);
};

struct CComboBoxDeleteItem
{
	CComboBoxDeleteItem();
	virtual unsigned int GetRemovedIndex();
};

struct CCommandLinkClickedJob
{
	virtual void Do(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &);
};

struct CCredentialFieldChangeArray
{
	virtual long GetAt(unsigned int,_GUID const &,void * *);
	virtual long GetCount(unsigned int *);
};

struct CCredentialFieldChangeInfo
{
	virtual CREDENTIAL_FIELD_CHANGE_TYPE GetChangeType();
	virtual long GetChangeContext(_GUID const &,void * *);
	virtual unsigned int GetFieldIndex();
};

struct CCredentialProviderBioEventsJob
{
	CCredentialProviderBioEventsJob(_CREDENTIAL_PROVIDER_FEEDBACK_VISUAL_STATE,unsigned short const *,unsigned short const *,_BIO_FEEDBACK_PRIORITY,unsigned __int64,ICredProvFrameworkCallback *);
	long EvaluateJobPriority(CCredentialProviderBioEventsJob const *,bool *);
	virtual void Do(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &);
	virtual ~CCredentialProviderBioEventsJob();
};

struct CCredentialProviderEventsJob
{
	virtual void Do(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &);
};

class CCredentialProviderFramework
{
	long _CheckInitialized();
	long _FormatGreeting(_GREETING_TYPE,unsigned short const *,void *,int,int,int,unsigned short * *);
	long _FormatGreetingForCredentialProviderUserInternal(_GREETING_TYPE,ICredentialProviderUser *,int,int,unsigned short * *);
	long _FormatGreetingInternal(_GREETING_TYPE,void *,int,int,int,unsigned short * *);
	long _GetDesktopGreetingFromSID(_GREETING_TYPE,void *,int,int,int,unsigned short * *);
	long _GetGreetingRegkeyPath(unsigned short * const,unsigned short * *);
	long _GetGreetingTime(unsigned short * const,unsigned long *);
	void _GetGreetingTimeOfTheDayBasedOnTime(void *,int,CCredentialProviderFramework::GreetingTimeOfTheDay *);
	void _GetTimeOfTheDay(unsigned short,CCredentialProviderFramework::GreetingTimeOfTheDay *);
	void _SetGreetingTime(unsigned short * const,unsigned long);
public:
	CCredentialProviderFramework();
	virtual long AdviseCredProvsAsync();
	virtual long AdviseCredentialAsync(unsigned int,unsigned int,HWND__ *);
	virtual long BioFeedbackVisualStateChanged(unsigned __int64,_CREDENTIAL_PROVIDER_FEEDBACK_VISUAL_STATE,unsigned short const *,unsigned short const *);
	virtual long BioFeedbackVisualStateChangedWithPriority(unsigned __int64,_CREDENTIAL_PROVIDER_FEEDBACK_VISUAL_STATE,unsigned short const *,unsigned short const *,_BIO_FEEDBACK_PRIORITY);
	virtual long BuildUserTileAsync(_CREDENTIAL_PROVIDER_USAGE_SCENARIO);
	virtual long CancelBioFeedbackVisualState(unsigned __int64);
	virtual long CheckProviderAvailability(_CREDENTIAL_PROVIDER_USAGE_SCENARIO,unsigned long,unsigned short const *,int *);
	virtual long CredentialsChanged(unsigned __int64);
	virtual long DisconnectCredentialsAsync();
	virtual long EnumerateAllCredentialsAsync();
	virtual long EnumerateTilesForProviderAsync(unsigned int,CREDENTIALSCHANGED_STATE);
	virtual long FormatGreeting(_GREETING_TYPE,void *,unsigned short * *);
	virtual long FormatGreetingBasedOnTime(_GreetingParameters *,unsigned short * *);
	virtual long FormatGreetingForCredentialProviderUser(_GREETING_TYPE,ICredentialProviderUser *,unsigned short * *);
	virtual long FormatGreetingForCredentialProviderUserBasedOnTime(_GreetingParameters *,unsigned short * *);
	virtual long GetAutoLogonManager(IAutoLogonManager * *);
	virtual long GetPicturePasswordSerializationAsync(unsigned int,unsigned int,IQueryContinueWithStatus *,IInspectable *);
	virtual long GetSerializationAsync(unsigned int,unsigned int,IQueryContinueWithStatus *);
	virtual long InitializeAsync(CREDENTIAL_SCENARIO,SUPPORTED_UI_FEATURE_FLAGS,IAutoLogonManager *,ICredProvFrameworkCallback *,unsigned short);
	virtual long OnCommandLinkClickedAsync(unsigned int,unsigned int,unsigned long);
	virtual long OnThreadInitComplete();
	virtual long OnThreadInitError(long);
	virtual long OnWebDialogVisibilityChangeAsync(unsigned int,unsigned int,int);
	virtual long QuerySupportedUIFeatures(SUPPORTED_UI_FEATURE_FLAGS *);
	virtual long ReportResultAsync(unsigned int,long,long,unsigned short const *,unsigned short const *,unsigned short const *);
	virtual long RequestLockScreenDismiss(unsigned __int64);
	virtual long RequestOptionExpansion(unsigned __int64);
	virtual long RequestSignInUIVisible(unsigned __int64);
	virtual long RequestVisibilityChange(unsigned __int64);
	virtual long ResetBioFeedbackJobState();
	virtual long SelectCredentialAsync(unsigned int,unsigned int,TILE_SELECTION_FLAGS);
	virtual long SetCheckboxValueAsync(unsigned int,unsigned int,unsigned long,int);
	virtual long SetComboBoxValueAsync(unsigned int,unsigned int,unsigned long,unsigned long);
	virtual long SetDisplayStateAsync(_CREDENTIAL_PROVIDER_DISPLAY_STATE_FLAGS);
	virtual long SetProviderGroup();
	virtual long SetStringDataAsync(unsigned int,unsigned int,unsigned long,unsigned short const *);
	virtual long SetUserSuggestionAsync(unsigned short const *);
	virtual long Shutdown();
	virtual long StartCredProvsAsync(_CREDENTIAL_PROVIDER_USAGE_SCENARIO,unsigned long,_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *,_GUID const *,unsigned char const *,unsigned int,unsigned short const *);
	virtual long UnadviseCredProvsAsync();
	virtual long UnadviseCredentialAsync(unsigned int,unsigned int);
	virtual ~CCredentialProviderFramework();
};

struct CCredentialProviderRequestLockScreenDismissJob
{
	virtual void Do(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &);
};

struct CCredentialProviderRequestOptionExpansionJob
{
	virtual void Do(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &);
};

struct CCredentialProviderRequestSignInUXJob
{
	virtual void Do(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &);
};

struct CCredentialProviderRequestVisibilityChangeJob
{
	virtual void Do(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &);
};

struct CCredentialProviderSerialization
{
	CCredentialProviderSerialization();
	long RuntimeClassInitialize(_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION const &,SERIALIZATION_FLAGS,unsigned short const *);
	virtual long GetAuthenticationPackage(unsigned long *);
	virtual long GetCredentialContext(unsigned short * *);
	virtual long GetCredentialProviderCLSID(_GUID *);
	virtual long GetSerialization(unsigned long *,unsigned char * *);
	virtual long GetSerializationFlags(SERIALIZATION_FLAGS *);
	virtual ~CCredentialProviderSerialization();
};

struct CCredentialProviderSetProviderGroupJob
{
	virtual void Do(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &);
};

class CCredentialProviderThread
{
	long _CreateCredentialProviders();
	long _CreateCredentialProvidersFromRegKey(unsigned short const *,bool);
	long _WaitUntilThreadTerminates(unsigned long);
	static unsigned long _sThreadProc(void *);
	virtual ~CCredentialProviderThread();
	void _ReleaseCredentialProviders();
	void _vThreadProc();
public:
	CCredentialProviderThread();
	long CreateThread(CCredentialProviderThread::CreateThreadFlags,unsigned short,IThreadInit *,CUniqueIdGenerator *);
	long PostJobToThread(CJob<CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &> *);
	virtual long NotifyDisplayStateChange(_CREDENTIAL_PROVIDER_DISPLAY_STATE_FLAGS);
	virtual long NotifyReadyForSerialization(unsigned int,unsigned int);
	virtual long NotifySelectionChange(_GUID const &,unsigned short const *);
	void ReleaseThread();
};

struct CCredentialProviderUser
{
	virtual long GetProviderID(_GUID *);
	virtual long GetSid(unsigned short * *);
	virtual long GetStringValue(_tagpropertykey const &,unsigned short * *);
	virtual long GetValue(_tagpropertykey const &,tagPROPVARIANT *);
};

class CCredentialProviderUserArray
{
protected:
	long GetLockedSessionUser();
public:
	CCredentialProviderUserArray();
	long RuntimeClassInitialize(_CREDENTIAL_PROVIDER_USAGE_SCENARIO,unsigned long,IAutoLogonManager *);
	virtual long GetAccountOptions(CREDENTIAL_PROVIDER_ACCOUNT_OPTIONS *);
	virtual long GetAt(unsigned long,ICredentialProviderUser * *);
	virtual long GetCount(unsigned long *);
	virtual long RemoveAll();
	virtual long RemoveAt(unsigned long);
	virtual long SetProviderFilter(_GUID const &);
	virtual long SetProviderFilters(_GUID *,unsigned long);
	void SetAccountOptions(CREDENTIAL_PROVIDER_ACCOUNT_OPTIONS);
};

struct CCredentialTileChangeInfo
{
	CCredentialTileChangeInfo();
	virtual CREDENTIAL_TILE_CHANGE_TYPE GetChangeType();
};

class CCredentialTileData
{
	long _NotifyCredentialEvent(unsigned int,CREDENTIAL_FIELD_CHANGE_TYPE,IUnknown *);
	void UpdateEventCallback(bool);
protected:
	virtual ~CCredentialTileData();
public:
	CCredentialTileData();
	int IsEventCallbackDisabled();
	long DoRequestSerialization();
	long GetCredential(ICredentialProviderCredential * *);
	long GetIndexFromFieldId(unsigned long,unsigned int *);
	long OnWebDialogVisibilityChange(int);
	long SetSelected(bool,int *);
	long SetUserSuggestion(unsigned short const *);
	virtual int DoesCredentialSupportIHMAutomaticInvoke();
	virtual int DoesTileAssignPrimaryUser();
	virtual int IsConnectedUser();
	virtual int IsEmptyTile();
	virtual int IsPLAPTile();
	virtual int IsPictureLoginMode();
	virtual int IsTileVisible();
	virtual int IsV2CredProv();
	virtual int ShouldEnableCredUISubmitButton();
	virtual int ShouldShowCredUISubmitButton();
	virtual long AppendFieldComboBoxItem(ICredentialProviderCredential *,unsigned long,unsigned short const *);
	virtual long BeginFieldUpdates();
	virtual long DeleteFieldComboBoxItem(ICredentialProviderCredential *,unsigned long,unsigned long);
	virtual long EndFieldUpdates();
	virtual long GetClsid(_GUID *);
	virtual long GetCredProviderLogoBitmap(HBITMAP__ * *);
	virtual long GetCredProviderLogoBitmapStream(_GUID const &,void * *);
	virtual long GetCredProviderLogoLabel(unsigned short * *);
	virtual long GetCredentialMethod(_CREDENTIAL_METHOD_FLAGS *);
	virtual long GetFieldAt(unsigned int,IFieldData * *);
	virtual long GetUIMode(_CREDENTIAL_PROVIDER_CREDENTIAL_UI_MODE *);
	virtual long GetUserSid(unsigned short * *);
	virtual long GetWebDialogUrl(unsigned short * *);
	virtual long OnCreatingWindow(HWND__ * *);
	virtual long RequestSelection();
	virtual long RequestSerialization();
	virtual long RequestVisibilityChange();
	virtual long RequestWebDialogVisibilityChange(ICredentialProviderCredential *,int);
	virtual long SetAccessibilityTextForField(ICredentialProviderCredential *,unsigned long,unsigned short const *);
	virtual long SetCredUISubmitButtonState(int,int,int);
	virtual long SetFieldBitmap(ICredentialProviderCredential *,unsigned long,HBITMAP__ *);
	virtual long SetFieldBitmapBuffer(ICredentialProviderCredential *,unsigned long,unsigned long,unsigned char const *);
	virtual long SetFieldCheckbox(ICredentialProviderCredential *,unsigned long,int,unsigned short const *);
	virtual long SetFieldComboBoxSelectedItem(ICredentialProviderCredential *,unsigned long,unsigned long);
	virtual long SetFieldInteractiveState(ICredentialProviderCredential *,unsigned long,_CREDENTIAL_PROVIDER_FIELD_INTERACTIVE_STATE);
	virtual long SetFieldOptions(ICredentialProviderCredential *,unsigned long,CREDENTIAL_PROVIDER_CREDENTIAL_FIELD_OPTIONS);
	virtual long SetFieldState(ICredentialProviderCredential *,unsigned long,_CREDENTIAL_PROVIDER_FIELD_STATE);
	virtual long SetFieldString(ICredentialProviderCredential *,unsigned long,unsigned short const *);
	virtual long SetFieldSubmitButton(ICredentialProviderCredential *,unsigned long,unsigned long);
	virtual long SetRawAccessibilityViewForField(ICredentialProviderCredential *,unsigned long,int);
	virtual long SetTextFieldMaxLength(ICredentialProviderCredential *,unsigned long,unsigned long);
	virtual long SetUIMode(_CREDENTIAL_PROVIDER_CREDENTIAL_UI_MODE);
	virtual long SwitchCredentialProvider(_GUID const &);
	virtual unsigned int GetCredentialId();
	virtual unsigned int GetFieldCount();
	virtual unsigned int GetProviderId();
	void Unadvise();
};

struct CCredentialTileDataArray
{
	long GetAt(unsigned int,CCredentialTileData * *);
	unsigned __int64 GetSize();
	virtual long GetAt(unsigned int,_GUID const &,void * *);
	virtual long GetCount(unsigned int *);
};

struct CDisconnectCredentialsJob
{
	virtual void Do(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &);
};

namespace CEnumCredentialProviderUsers
{
	bool s_fIsCloudDomainJoined();
	long CallCloudAPPackage(unsigned long,void *,unsigned long *,void * *);
	long s_CreatePropStoreFromFullNameAndSid(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,bool,IPropertyStore * *);
	long s_EnumInternetUsers(_GUID const &,CCoSimpleArray<Microsoft::WRL::ComPtr<IPropertyStore>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPropertyStore> > > *);
	long s_EnumLastLoggedonUser(CCoSimpleArray<Microsoft::WRL::ComPtr<IPropertyStore>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPropertyStore> > > *);
	long s_EnumLogonUsers(CCoSimpleArray<Microsoft::WRL::ComPtr<IPropertyStore>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPropertyStore> > > *);
	long s_EnumerateCurrentUser(CCoSimpleArray<Microsoft::WRL::ComPtr<IPropertyStore>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPropertyStore> > > *);
	long s_EnumerateInSessionUser(bool,unsigned long,CCoSimpleArray<Microsoft::WRL::ComPtr<IPropertyStore>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPropertyStore> > > *);
	long s_EnumerateLocalAdmins(CCoSimpleArray<Microsoft::WRL::ComPtr<IPropertyStore>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPropertyStore> > > *,bool *);
	long s_GetUserEnumGP(bool *,bool *);
	long s_HasConnectedUser(bool *);
	long s_LookupAccountName(unsigned short const *,void * *,unsigned short * *);
	long s_LookupInternetDisplayName(_GUID const &,void *,unsigned short * *);
	long s_LookupInternetName(void *,bool,unsigned short * *);
};

struct CEnumerateAllCredentialsJob
{
	CEnumerateAllCredentialsJob(CUniqueIdGenerator *,ICredProvFrameworkCallback *);
	virtual void Do(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &);
	virtual ~CEnumerateAllCredentialsJob();
};

class CFieldData
{
	bool _FieldHasWriteableValue();
public:
	bool IsTouchKeyboardAutoInvokeEnabled();
	long AppendComboBoxItem(unsigned short const *);
	long SetAccessibilityText(unsigned short const *);
	long SetCheckbox(bool,unsigned short const *);
	long SetTextFieldMaxLength(unsigned long);
	virtual _CREDENTIAL_PROVIDER_FIELD_TYPE GetFieldType();
	virtual int HasBitmapValue();
	virtual int HasCheckboxValue();
	virtual int HasComboBoxValue();
	virtual int HasStringValue();
	virtual int HasSubmitButtonValue();
	virtual int HasWritableStringValue();
	virtual int IsAccessibilityViewRaw();
	virtual int IsButtonStyledLink();
	virtual int IsEmailAddress();
	virtual int IsHidden();
	virtual int IsImageFieldLogo();
	virtual int IsInteractiveStateDisabled();
	virtual int IsInteractiveStateFocused();
	virtual int IsInteractiveStateReadOnly();
	virtual int IsKeyFocusable();
	virtual int IsLogonUserNameEditField();
	virtual int IsNumbersOnly();
	virtual int IsPasswordRevealEnabled();
	virtual int IsStandaloneSubmitButton();
	virtual int IsVisibleInDeselectedTile();
	virtual int IsVisibleInSelectedTile();
	virtual int IsVisibleOnlyWhenSelected();
	virtual int ShouldShowEnglishKeyboard();
	virtual long GetAccessibilityText(unsigned short * *);
	virtual long GetBitmapCopy(HBITMAP__ * *);
	virtual long GetBitmapSource(HBITMAP__ * *);
	virtual long GetBitmapStream(_GUID const &,void * *);
	virtual long GetCheckboxChecked(int *);
	virtual long GetCheckboxLabel(unsigned short * *);
	virtual long GetComboBoxItem(unsigned int,unsigned short * *);
	virtual long GetComboboxItemCount(unsigned int *);
	virtual long GetComboboxSelectedItem(int *);
	virtual long GetFieldLabel(unsigned short * *);
	virtual long GetFieldTypeGuid(_GUID *);
	virtual long GetIndexforFieldAdjacentToSubmitButton(unsigned int *);
	virtual long GetString(unsigned short * *);
	virtual long GetTextFieldMaxLength(unsigned long *);
	virtual unsigned long GetFieldID();
	virtual void SetIsFieldImageLogo();
	void DeleteComboBoxItem(unsigned long);
	void SetBitmapBuffer(unsigned long,unsigned char const *);
	void SetBitmapData(HBITMAP__ *);
	void SetComboBoxSelectedItem(unsigned long);
	void SetOptions(CREDENTIAL_PROVIDER_CREDENTIAL_FIELD_OPTIONS,CREDENTIAL_PROVIDER_CREDENTIAL_FIELD_OPTIONS *);
	void SetRawAccessibilityView(bool);
	void SetSubmitButtonAdjacentTo(unsigned long);
};

struct CGetEnumeratedTilesJob
{
	CGetEnumeratedTilesJob(unsigned int,CUniqueIdGenerator *,ICredProvFrameworkCallback *,CREDENTIALSCHANGED_STATE);
	virtual void Do(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &);
	virtual ~CGetEnumeratedTilesJob();
};

class CGetSerializationJob
{
protected:
	void AdjustVisibility(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &,Microsoft::WRL::ComPtr<CCredentialTileData> &,unsigned short const *,_GUID);
public:
	CGetSerializationJob(unsigned int,unsigned int,ICredProvFrameworkCallback *,IQueryContinueWithStatus *,ICredentialProviderJobBuilder *);
	virtual void Do(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &);
	virtual ~CGetSerializationJob();
};

class CJobQueue<CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &>
{
	bool DoJobInternal(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &,bool);
	long _Initialize(CJobQueueCallback *);
	virtual ~CJobQueue<CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &>();
public:
	long PostJob(CJob<CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &> *);
};

class CJobQueueEventCallback
{
protected:
	virtual ~CJobQueueEventCallback();
public:
	long Initialize(void *);
	virtual bool Signal();
};

class CLastLoggedOnUsername
{
	virtual long SetLastLoggedOnUsername(unsigned short const *);
};

struct CLogonStatusHelper
{
	CLogonStatusHelper();
	virtual long GetLogonStatusString(int,unsigned short const *,unsigned short * *);
};

struct COptionsChangeInfo
{
	COptionsChangeInfo();
	virtual CREDENTIAL_PROVIDER_CREDENTIAL_FIELD_OPTIONS GetChangedOptions();
};

class CPLAPQueryContinueWithStatus
{
	long _GetCallback(IQueryContinueWithStatus * *);
protected:
	virtual ~CPLAPQueryContinueWithStatus();
public:
	CPLAPQueryContinueWithStatus();
	virtual long QueryContinue();
	virtual long SetStatusMessage(unsigned short const *);
	void DetachCallback();
};

struct CPicturePasswordGetSerializationJob
{
	virtual void Do(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &);
};

struct CProviderData
{
	long GetCredentialDataAt(unsigned int,CCredentialTileData * *);
	void SetCredentialTilesVisibility(bool);
	void UnAdviseCredentials();
};

struct CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT
{
	void RemoveStaleItemsForProvider(unsigned int);
	~CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT();
};

struct CReadOnlyRandomAccessStream
{
	CReadOnlyRandomAccessStream();
	long RuntimeClassInitialize(Windows::Storage::Streams::IRandomAccessStream *);
	virtual long CloneStream(Windows::Storage::Streams::IRandomAccessStream * *);
	virtual long Close();
	virtual long FlushAsync(Windows::Foundation::IAsyncOperation<bool> * *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetInputStreamAt(unsigned __int64,Windows::Storage::Streams::IInputStream * *);
	virtual long GetOutputStreamAt(unsigned __int64,Windows::Storage::Streams::IOutputStream * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ReadAsync(Windows::Storage::Streams::IBuffer *,unsigned int,Windows::Storage::Streams::InputStreamOptions,Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer *,unsigned int> * *);
	virtual long Seek(unsigned __int64);
	virtual long WriteAsync(Windows::Storage::Streams::IBuffer *,Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int> * *);
	virtual long get_CanRead(unsigned char *);
	virtual long get_CanWrite(unsigned char *);
	virtual long get_Position(unsigned __int64 *);
	virtual long get_Size(unsigned __int64 *);
	virtual long put_Size(unsigned __int64);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CReferenceCounted
{
	void Release();
};

struct CReportResultJob
{
	CReportResultJob(unsigned int,long,long,unsigned short const *,unsigned short const *,unsigned short const *,ICredProvFrameworkCallback *);
	virtual void Do(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &);
	virtual ~CReportResultJob();
};

struct CRequestSerializationJob
{
	virtual void Do(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &);
};

class CSelectCredentialJob
{
	long ShowCdplGuidance(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &,_GUID &);
public:
	CSelectCredentialJob(TILE_SELECTION_FLAGS,unsigned int,unsigned int,ICredProvFrameworkCallback *,ICredentialProviderBioEvents *);
	virtual void Do(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &);
};

struct CSetCheckboxValueJob
{
	virtual void Do(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &);
};

struct CSetComboBoxValueJob
{
	virtual void Do(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &);
};

struct CSetDisplayStateJob
{
	virtual void Do(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &);
};

struct CSetStringDataJob
{
	virtual void Do(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &);
	virtual ~CSetStringDataJob();
};

struct CSetUserSuggestionJob
{
	virtual void Do(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &);
};

struct CSimplePointerArray<CJob<CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &>,CTContainer_PolicyRelease<CJob<CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &> >,CSimpleArrayStandardCompareHelper<CJob<CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &> *> >
{
	void RemoveAndReleaseAll();
};

class CStartCredProvsJob
{
	long _GetStartedCredentialProviderCLSIDs(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &,CCoSimpleArray<_GUID,4294967294,CSimpleArrayStandardCompareHelper<_GUID> > *);
	virtual ~CStartCredProvsJob();
	void _StartCredProvsForUsageScenario(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &,_CREDENTIAL_PROVIDER_USAGE_SCENARIO);
public:
	long Initialize(_CREDENTIAL_PROVIDER_USAGE_SCENARIO,unsigned long,_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION const *,_GUID const *,unsigned char const *,unsigned int,unsigned short const *,ICredProvFrameworkCallback *);
	virtual void Do(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &);
};

struct CSystemSettings
{
	virtual long EnableRemoteConnections(int);
	virtual long IsCloudDomainMember(int *);
	virtual long IsDomainMember(int *);
	virtual long IsLogonWallpaperShown(int *);
	virtual long IsRemoteConnectionsEnabled(int *);
	virtual long IsSafeMode(int *);
};

class CTCoAllocPolicy
{
	static unsigned __int64 _CoTaskMemSize(void *);
public:
	static long Alloc(void *,unsigned long,unsigned __int64,void * *);
	static long Realloc(void *,unsigned long,void *,unsigned __int64,void * *);
};

struct CTSimpleArray<CJob<CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &> *,4294967294,CTPolicyCoTaskMem<CJob<CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &> *>,CSimpleArrayStandardCompareHelper<CJob<CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &> *>,CSimpleArrayStandardMergeHelper<CJob<CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &> *> >
{
	long RemoveAt(unsigned __int64);
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
	void RemoveAll();
};

struct CTSimpleArray<CREDENTIAL_CHANGED_EVENT_QUEUE_ENTRY,4294967294,CTPolicyCoTaskMem<CREDENTIAL_CHANGED_EVENT_QUEUE_ENTRY>,CSimpleArrayStandardCompareHelper<CREDENTIAL_CHANGED_EVENT_QUEUE_ENTRY>,CSimpleArrayStandardMergeHelper<CREDENTIAL_CHANGED_EVENT_QUEUE_ENTRY> >
{
	long RemoveAt(unsigned __int64);
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
};

struct CTSimpleArray<Microsoft::WRL::ComPtr<CCredentialFieldChangeInfo>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CCredentialFieldChangeInfo> >,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CCredentialFieldChangeInfo> >,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CCredentialFieldChangeInfo> > >
{
	long _Add<Microsoft::WRL::ComPtr<CCredentialFieldChangeInfo> const &>(Microsoft::WRL::ComPtr<CCredentialFieldChangeInfo> const &,unsigned __int64 *);
};

struct CTSimpleArray<Microsoft::WRL::ComPtr<CCredentialTileData>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CCredentialTileData> >,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CCredentialTileData> >,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CCredentialTileData> > >
{
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
	void RemoveAll();
};

struct CTSimpleArray<Microsoft::WRL::ComPtr<CProviderData>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CProviderData> >,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CProviderData> >,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CProviderData> > >
{
	void RemoveAll();
};

struct CTSimpleArray<Microsoft::WRL::ComPtr<CUserTileData>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CUserTileData> >,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CUserTileData> >,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CUserTileData> > >
{
	long _AddSortedEx<CUserTileDataCompareHelper,Microsoft::WRL::ComPtr<CUserTileData> const &>(CUserTileDataCompareHelper const &,Microsoft::WRL::ComPtr<CUserTileData> const &,unsigned __int64 *);
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
};

struct CTSimpleArray<Microsoft::WRL::ComPtr<IPropertyStore>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPropertyStore> >,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPropertyStore> >,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPropertyStore> > >
{
	long RemoveAt(unsigned __int64);
	long SortEx<CAdminNameCompare>(CAdminNameCompare const &);
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
	void RemoveAll();
	void _MergeSort<CAdminNameCompare>(CAdminNameCompare const &,unsigned __int64,unsigned __int64);
	void _MergeThem<CAdminNameCompare>(CAdminNameCompare const &,unsigned __int64,unsigned __int64);
};

struct CTSimpleArray<_GUID,4294967294,CTPolicyCoTaskMem<_GUID>,CSimpleArrayStandardCompareHelper<_GUID>,CSimpleArrayStandardMergeHelper<_GUID> >
{
	long RemoveAt(unsigned __int64);
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
	void RemoveAll();
};

struct CTSimpleArray<unsigned short *,4294967294,CTPolicyCoTaskMem<unsigned short *>,CSimpleArrayCaseInsensitiveOrdinalStringCompareHelper,CSimpleArrayStandardMergeHelper<unsigned short *> >
{
	long _EnsureCapacity(unsigned __int64,unsigned __int64);
	void RemoveAll();
};

struct CTSimpleFixedArray<Microsoft::WRL::ComPtr<CUserTileData>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CUserTileData> > >
{
	long GetAt(unsigned __int64,Microsoft::WRL::ComPtr<CUserTileData> &);
};

struct CTSimpleFixedArray<Microsoft::WRL::ComPtr<IPropertyStore>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPropertyStore> > >
{
	long GetAt(unsigned __int64,Microsoft::WRL::ComPtr<IPropertyStore> &);
};

class CUserTileData
{
protected:
	virtual ~CUserTileData();
public:
	CUserTileData();
	CUserTileData(EMPTY_USER_TILE_TYPE);
	long RuntimeClassInitialize(ICredentialProviderUser *,unsigned short const *,bool);
	long SetAutoLogonSid(unsigned short const *);
	virtual int IsBuiltInGuest();
	virtual int IsLocalNoPasswordUser();
	virtual int IsLoggedIn();
	virtual int ShouldShowDomainUsername();
	virtual long GetAutoLogonSid(unsigned short * *);
	virtual long GetDisplayName(unsigned short * *);
	virtual long GetEmailAddress(unsigned short * *);
	virtual long GetEmptyTileType(EMPTY_USER_TILE_TYPE *);
	virtual long GetLastLoggedOnProvider(_GUID *);
	virtual long GetLogonStatusString(unsigned short * *);
	virtual long GetQualifiedUsername(unsigned short * *);
	virtual long GetSid(unsigned short * *);
	virtual long SetDisplayName(unsigned short const *);
	void SetShouldShowDomainUsername(bool);
};

class CUserTileDataArray
{
protected:
	virtual ~CUserTileDataArray();
public:
	long Add(CUserTileData *);
	long AddSorted(CUserTileData *);
	long GetAt(unsigned int,CUserTileData * *);
	virtual long GetAt(unsigned int,_GUID const &,void * *);
	virtual long GetCount(unsigned int *);
};

struct CUserTileDataCompareHelper
{
	int Compare(Microsoft::WRL::ComPtr<CUserTileData> const &,Microsoft::WRL::ComPtr<CUserTileData> const &);
};

struct CWebDialogVisibilityChangeJob
{
	virtual void Do(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &);
};

struct CandidateAccountManagerPolicy
{
	static int IsAutoAadConnectEnabled();
	static int IsCachedSessionEnabled();
};

struct CandidateAccountManagerPolicyTraceProvider
{
	static void PolicyEnabled<unsigned short const (&)[13]>(unsigned short const (&)[13]);
	static void PolicyEnabled<unsigned short const (&)[15]>(unsigned short const (&)[15]);
};

class CertificateUtil
{
	static long GuidStringFromByteArray(unsigned char const *,unsigned long,unsigned short * *);
public:
	static _CERT_EXTENSION * FindExtensionByOid(char const *,_CERT_CONTEXT const *);
	static long DoesExtensionWithValueExist(char const *,unsigned short const *,_CERT_OID_VALUE_TYPE,_CERT_CONTEXT const *,int *);
	static long FindAllCertificatesByOidValue(_CERTFICATE_LOCATION,char const * * const,unsigned short const * * const,_CERT_OID_VALUE_TYPE * const,unsigned long,_CERT_CONTEXT const * * const,unsigned long *);
	static long FindExtensionGuidValueByOid(char const *,_CERT_CONTEXT const *,unsigned short * *);
	static long FindExtensionStrValueByOid(char const *,_CERT_CONTEXT const *,unsigned short * *);
	static long GetCertificateThumbprint(_CERT_CONTEXT const *,unsigned short * *);
	static long GetCertificateThumbprintBytes(_CERT_CONTEXT const *,unsigned char * *,unsigned long *);
	static void FreeCertificates(_CERT_CONTEXT const * * const,unsigned long);
};

namespace CredProvPolicy
{
	bool IsPrimaryUserForEduEnvironment();
	bool IsPrimaryUserForEduEnvironmentWithoutPrimaryUserSet();
	bool IsPrimaryUserSet();
	void WriteKeyLastLoggedOnUserIsPrimary();
};

namespace CredProvUtils
{
	long GetLastLoggedOnCredProvider(_GUID *);
	long GetLastLoggedOnCredProviderForSession(unsigned long,_GUID *);
	long GetLastLoggedOnInfo(unsigned short const *,unsigned short * *);
	long GetLastLoggedOnInfoForSession(unsigned long,unsigned short const *,unsigned short * *);
	long GetLogonUIKeyPath(unsigned short * *);
	void WriteKeysToIgnoreWriteForLastLoggedOnUserInfo();
};

struct DeviceRegistrationStateApi
{
	static long GetJoinCertificate(unsigned short const *,_JOIN_TYPE,INFO_KIND,_CERT_CONTEXT const * *,int *);
};

class Logger
{
	static long FormatString(unsigned short * &,unsigned short const *,char *);
	static long Trace(_TRACE_LEVEL,unsigned short const *,char *);
public:
	static long TraceCritical(unsigned short const *,...);
	static long TraceError(unsigned short const *,...);
	static long TraceInformation(unsigned short const *,...);
	static long TraceVerbose(unsigned short const *,...);
	static long TraceWarning(unsigned short const *,...);
	static long WriteNullOrEmptyParameterFailureEvent(unsigned short const *,unsigned short const *);
	static long WriteRegistryFailureEvent(unsigned long,unsigned short const *,unsigned short const *,unsigned short const *);
	static long WriteRegistryFailureEventEx(unsigned long,unsigned short const *,unsigned short const *,...);
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

		class ComPtr<CCredentialProviderSerialization>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<CCredentialProviderThread>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		};

		class ComPtr<CCredentialProviderUserArray>
		{
		protected:
			unsigned long InternalRelease();
		public:
			void Attach(CCredentialProviderUserArray *);
		};

		class ComPtr<CCredentialTileData>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<CFieldData>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<CPLAPQueryContinueWithStatus>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<CProviderData>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<CProviderData> & operator=(ComPtr<CProviderData> const &);
		};

		class ComPtr<CReadOnlyRandomAccessStream>
		{
		protected:
			unsigned long InternalRelease();
		public:
			void Attach(CReadOnlyRandomAccessStream *);
		};

		class ComPtr<CUniqueIdGenerator>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		};

		class ComPtr<CUserTileData>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			void Attach(CUserTileData *);
			~ComPtr<CUserTileData>();
		};

		class ComPtr<CUserTileDataArray>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IAgileReference>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IAutoLogonManager>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<IAutoLogonManager> & operator=(IAutoLogonManager *);
		};

		class ComPtr<IComputerAccounts>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IComputerAccountsEnumerationOption>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IConnectedUser>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IConnectedUserStore>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ICredProvFrameworkCallback>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<ICredProvFrameworkCallback> & operator=(ComPtr<ICredProvFrameworkCallback> const &);
			ComPtr<ICredProvFrameworkCallback> & operator=(ICredProvFrameworkCallback *);
			long As<ICredProvFrameworkCallbackEx>(Details::ComPtrRef<ComPtr<ICredProvFrameworkCallbackEx> >);
		};

		class ComPtr<ICredProvFrameworkCallbackEx>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ICredential2FAHelper>
		{
		protected:
			unsigned long InternalRelease();
		public:
			ComPtr<ICredential2FAHelper> & operator=(ComPtr<ICredential2FAHelper> const &);
		};

		class ComPtr<ICredentialFieldOptionsChangeInfo>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ICredentialMethodInfo>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ICredentialProvider2FAInfo>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ICredentialProvider>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		};

		struct ComPtr<ICredentialProviderBioEvents>
		{
			~ComPtr<ICredentialProviderBioEvents>();
		};

		class ComPtr<ICredentialProviderContext>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ICredentialProviderCredential>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			long As<ICredentialProviderCredentialWithWebDialog>(Details::ComPtrRef<ComPtr<ICredentialProviderCredentialWithWebDialog> >);
			long As<IPicturePasswordCPCPriv>(Details::ComPtrRef<ComPtr<IPicturePasswordCPCPriv> >);
		};

		class ComPtr<ICredentialProviderCredentialForPrimaryUser>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ICredentialProviderCredentialWithDisabledCredUISubmitButton>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ICredentialProviderCredentialWithHiddenCredUISubmitButton>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ICredentialProviderCredentialWithSubmissionOptions>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ICredentialProviderCredentialWithUIMode>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ICredentialProviderCredentialWithWebDialog>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ICredentialProviderFilter>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ICredentialProviderHelper>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ICredentialProviderInstanceFilter>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ICredentialProviderUser>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ICredentialProviderWithSessionContext>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ICredentialProvidersNotification>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ICredentialTileChangeInfo>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ICredentialWithUsernameHint>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IEnumUnknown>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IFieldData>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IGlobalInterfaceTable>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<ILogonStatusHelper>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IMarshal>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IObjectArray>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IPicturePasswordCPCPriv>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IPropertyStore>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		};

		class ComPtr<IQueryContinueWithStatus>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
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
		};

		class ComPtr<IWICBitmapSource>
		{
		protected:
			unsigned long InternalRelease();
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

		struct ComPtr<SimpleClassFactory<CCredentialProviderFramework,0> >
		{
			~ComPtr<SimpleClassFactory<CCredentialProviderFramework,0> >();
		};

		struct ComPtr<SimpleClassFactory<CLastLoggedOnUsername,0> >
		{
			~ComPtr<SimpleClassFactory<CLastLoggedOnUsername,0> >();
		};

		struct ComPtr<SimpleClassFactory<CLogonStatusHelper,0> >
		{
			~ComPtr<SimpleClassFactory<CLogonStatusHelper,0> >();
		};

		struct ComPtr<SimpleClassFactory<CSystemSettings,0> >
		{
			~ComPtr<SimpleClassFactory<CSystemSettings,0> >();
		};

		class ComPtr<Windows::Foundation::IClosable>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Storage::Streams::IInputStream>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Storage::Streams::IRandomAccessStream>
		{
		protected:
			unsigned long InternalRelease();
		};

		namespace Details
		{
			class ImplementsHelper<RuntimeClassFlags<2>,1,ICredentialProviderCredentialSwitchProviderEvents,ICredentialProviderCredentialTileDataEvents,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<2>,1,ICredentialProviderEvents,ICredentialProviderBioEvents,IGreetingFormatter,ICredentialProviderTileDataEvents,ICredentialProviderJobBuilder,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,ICredProviderCredentialSerialization,IWeakReferenceSource,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,Windows::Storage::Streams::IOutputStream,Windows::Foundation::IClosable,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			struct MakeAllocator<CComboBoxDeleteItem>
			{
				~MakeAllocator<CComboBoxDeleteItem>();
			};

			struct MakeAllocator<CCredentialProviderFramework>
			{
				~MakeAllocator<CCredentialProviderFramework>();
			};

			struct MakeAllocator<CCredentialProviderSerialization>
			{
				~MakeAllocator<CCredentialProviderSerialization>();
			};

			struct MakeAllocator<CCredentialProviderThread>
			{
				~MakeAllocator<CCredentialProviderThread>();
			};

			struct MakeAllocator<CCredentialProviderUserArray>
			{
				~MakeAllocator<CCredentialProviderUserArray>();
			};

			struct MakeAllocator<CCredentialTileChangeInfo>
			{
				~MakeAllocator<CCredentialTileChangeInfo>();
			};

			struct MakeAllocator<CLastLoggedOnUsername>
			{
				~MakeAllocator<CLastLoggedOnUsername>();
			};

			struct MakeAllocator<CLogonStatusHelper>
			{
				~MakeAllocator<CLogonStatusHelper>();
			};

			struct MakeAllocator<COptionsChangeInfo>
			{
				~MakeAllocator<COptionsChangeInfo>();
			};

			struct MakeAllocator<CPLAPQueryContinueWithStatus>
			{
				~MakeAllocator<CPLAPQueryContinueWithStatus>();
			};

			struct MakeAllocator<CReadOnlyRandomAccessStream>
			{
				~MakeAllocator<CReadOnlyRandomAccessStream>();
			};

			struct MakeAllocator<CSystemSettings>
			{
				~MakeAllocator<CSystemSettings>();
			};

			struct MakeAllocator<CUniqueIdGenerator>
			{
				~MakeAllocator<CUniqueIdGenerator>();
			};

			struct MakeAllocator<CUserTileDataArray>
			{
				~MakeAllocator<CUserTileDataArray>();
			};

			struct MakeAllocator<SimpleClassFactory<CCredentialProviderFramework,0> >
			{
				~MakeAllocator<SimpleClassFactory<CCredentialProviderFramework,0> >();
			};

			struct MakeAllocator<SimpleClassFactory<CLastLoggedOnUsername,0> >
			{
				~MakeAllocator<SimpleClassFactory<CLastLoggedOnUsername,0> >();
			};

			struct MakeAllocator<SimpleClassFactory<CLogonStatusHelper,0> >
			{
				~MakeAllocator<SimpleClassFactory<CLogonStatusHelper,0> >();
			};

			struct MakeAllocator<SimpleClassFactory<CSystemSettings,0> >
			{
				~MakeAllocator<SimpleClassFactory<CSystemSettings,0> >();
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

			class RuntimeClassBaseT<2>
			{
			protected:
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ChainInterfaces<ICredentialProviderUserArray3,ICredentialProviderUserArray2,ICredentialProviderUserArray,Nil,Nil,Nil,Nil,Nil,Nil,Nil>,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ChainInterfaces<ICredentialProviderUserArray3,ICredentialProviderUserArray2,ICredentialProviderUserArray,Nil,Nil,Nil,Nil,Nil,Nil,Nil>,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ICredentialFieldComboBoxItemRemovedInfo,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ICredentialFieldComboBoxItemRemovedInfo,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ICredentialFieldOptionsChangeInfo,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ICredentialFieldOptionsChangeInfo,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ICredentialProviderUser,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ICredentialProviderUser,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ICredentialTileChangeInfo,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ICredentialTileChangeInfo,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ILogonStatusHelper,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ILogonStatusHelper,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IQueryContinueWithStatus,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IQueryContinueWithStatus,FtmBase> *,_GUID const &,void * *);
			};

			class RuntimeClassBaseT<3>
			{
			protected:
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,ICredProviderCredentialSerialization,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,ICredProviderCredentialSerialization,FtmBase> *,_GUID const &,void * *);
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ChainInterfaces<ICredentialProviderUserArray3,ICredentialProviderUserArray2,ICredentialProviderUserArray,Nil,Nil,Nil,Nil,Nil,Nil,Nil>,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IAuthUILastLoggedOnUsername>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IAuthUISystemSettings>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ICredProvFramework,IThreadInit,ICredentialProviderEvents,ICredentialProviderBioEvents,IGreetingFormatter,ICredentialProviderTileDataEvents,ICredentialProviderJobBuilder,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ICredTileData,ChainInterfaces<ICredentialProviderCredentialEvents5,ICredentialProviderCredentialEvents4,ICredentialProviderCredentialEvents3,ICredentialProviderCredentialEvents2,ICredentialProviderCredentialEvents,Nil,Nil,Nil,Nil,Nil>,ICredentialProviderCredentialUIModeEvents,ICredentialProviderCredentialCredUISubmitButtonEvents,ICredentialProviderCredentialSwitchProviderEvents,ICredentialProviderCredentialTileDataEvents,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ICredentialFieldChangeInfo,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ICredentialFieldComboBoxItemRemovedInfo,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ICredentialFieldOptionsChangeInfo,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ICredentialProviderUser,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ICredentialProvidersNotification,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ICredentialTileChangeInfo,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IFieldData,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ILogonStatusHelper,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ILogonUserTileData,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IObjectArray,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IQueryContinueWithStatus,FtmBase>
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

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Storage::Streams::IRandomAccessStream,Windows::Storage::Streams::IInputStream,Windows::Storage::Streams::IOutputStream,Windows::Foundation::IClosable,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Storage::Streams::IRandomAccessStream,Windows::Storage::Streams::IInputStream,Windows::Storage::Streams::IOutputStream,Windows::Foundation::IClosable,FtmBase>();
			};

			class StaticStorage<DefaultModule<1>,0,int>
			{
				static StaticStorage<DefaultModule<1>,0,int> instance_;
			public:
				~StaticStorage<DefaultModule<1>,0,int>();
			};

			struct WeakReferenceImpl
			{
				WeakReferenceImpl(IUnknown *);
				virtual long Resolve(_GUID const &,IInspectable * *);
			};

			Details::WeakReferenceImpl * CreateWeakReference(IUnknown *);
			bool TerminateMap(Details::ModuleBase *,unsigned short const *,bool);
			long CreateClassFactory<SimpleClassFactory<CCredentialProviderFramework,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateClassFactory<SimpleClassFactory<CLastLoggedOnUsername,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateClassFactory<SimpleClassFactory<CLogonStatusHelper,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateClassFactory<SimpleClassFactory<CSystemSettings,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long GetCacheEntry(Details::ModuleBase *,unsigned int *,_GUID const &,Details::CreatorMap const *,IUnknown * *);
			long MakeAndInitialize<CComboBoxDeleteItem,IUnknown,unsigned long &>(IUnknown * *,unsigned long &);
			long MakeAndInitialize<CPLAPQueryContinueWithStatus,CPLAPQueryContinueWithStatus,IQueryContinueWithStatus * &>(CPLAPQueryContinueWithStatus * *,IQueryContinueWithStatus * &);
			long MakeAndInitialize<CReadOnlyRandomAccessStream,CReadOnlyRandomAccessStream,Windows::Storage::Streams::IRandomAccessStream * &>(CReadOnlyRandomAccessStream * *,Windows::Storage::Streams::IRandomAccessStream * &);
			unsigned long SafeUnknownDecrementReference(long volatile &);
			unsigned long SafeUnknownIncrementReference(long volatile &);
			void RaiseException(long,unsigned long);
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

		struct RuntimeClass<RuntimeClassFlags<2>,ICredProvFramework,IThreadInit,ICredentialProviderEvents,ICredentialProviderBioEvents,IGreetingFormatter,ICredentialProviderTileDataEvents,ICredentialProviderJobBuilder,FtmBase>
		{
			RuntimeClass<RuntimeClassFlags<2>,ICredProvFramework,IThreadInit,ICredentialProviderEvents,ICredentialProviderBioEvents,IGreetingFormatter,ICredentialProviderTileDataEvents,ICredentialProviderJobBuilder,FtmBase>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,ILogonUserTileData,FtmBase>
		{
			RuntimeClass<RuntimeClassFlags<2>,ILogonUserTileData,FtmBase>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,IObjectArray,FtmBase>
		{
			RuntimeClass<RuntimeClassFlags<2>,IObjectArray,FtmBase>();
		};

		struct SimpleClassFactory<CCredentialProviderFramework,0>
		{
			virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
		};

		struct SimpleClassFactory<CLastLoggedOnUsername,0>
		{
			virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
		};

		struct SimpleClassFactory<CLogonStatusHelper,0>
		{
			virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
		};

		struct SimpleClassFactory<CSystemSettings,0>
		{
			virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
		};

	};

};

struct PerformanceMonitor
{
	static void TimerCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
};

class RegistrationCertStatus
{
	static long GetCertificate(_CERTFICATE_LOCATION,char const *,unsigned short const *,unsigned short const *,INFO_KIND,_CERT_CONTEXT const * *);
public:
	static long GetTenantId(_CERT_CONTEXT const *,unsigned short * *,int *);
};

namespace TLV
{
	void Base64Encode<129>(unsigned char const *,unsigned __int64,char (&)[129]);
};

class TraceLoggingCorrelationVector
{
	bool ToStringImpl(unsigned __int64,char *);
	unsigned __int64 IncrementImpl();
public:
	TraceLoggingCorrelationVector();
	bool Increment(char *);
};

namespace Windows
{
	namespace Internal
	{
		class NativeString<CoTaskMemPolicy<unsigned short> >
		{
			long _Concat(unsigned short const *,unsigned __int64);
			long _EnsureCapacity(unsigned __int64);
			long _Initialize(unsigned short const *,unsigned __int64);
			long _InitializeFromRegistry(HKEY__ *,unsigned short const *,bool);
			long _InitializeHelper<<lambda_255728157cf8e92998065ff06efe801f> >(unsigned short const *,char *,<lambda_255728157cf8e92998065ff06efe801f> const &);
			long _InitializeHelper<<lambda_fe718337787c493ce2d833414db25eba> >(unsigned short const *,char *,<lambda_fe718337787c493ce2d833414db25eba> const &);
			void _EnsureCount();
			void _Free();
		public:
			long ConcatFormat(unsigned short const *,...);
			long CopyTo(unsigned short * *);
			long Initialize(HKEY__ *,unsigned short const *,unsigned short const *);
			long Initialize(NativeString<CoTaskMemPolicy<unsigned short> > const &);
			long InitializeFormat(unsigned short const *,...);
			long InitializeResMessage(HINSTANCE__ *,int,...);
			void ReplaceChars(unsigned short,unsigned short);
		};

		class NativeString<LocalMemPolicy<unsigned short> >
		{
			void _Free();
		};

		struct ResourceString
		{
			static bool FindAndSize(HINSTANCE__ *,unsigned int,unsigned short,unsigned short const * *,unsigned short *);
		};

	};

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
		void Register(_tlgProvider_t const * const,void (*)(_GUID const *,unsigned long,unsigned char,unsigned __int64,unsigned __int64,_EVENT_FILTER_DESCRIPTOR *,void *));
		void ReportTelemetryFailure(FailureInfo const &);
		void ReportTraceLoggingFailure(FailureInfo const &);
	};

	struct com_ptr_t<Windows::System::Profile::IEducationSettingsStatics,err_returncode_policy>
	{
		~com_ptr_t<Windows::System::Profile::IEducationSettingsStatics,err_returncode_policy>();
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
			void QueueBackgroundUsageReporting(unsigned int,wil_details_FeatureReportingCache *);
			~EnabledStateManager();
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

		class FeatureImpl<__WilFeatureTraits_Feature_MTestUx13>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			bool __private_IsEnabled(ReportingKind);
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
			static void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
		};

		namespace in1diag3
		{
			long Return_GetLastError(void *,unsigned int,char const *);
			long Return_NtStatus(void *,unsigned int,char const *,long);
			long Return_Win32(void *,unsigned int,char const *,unsigned long);
			void FailFast_Unexpected(void *,unsigned int,char const *);
			void Return_Hr(void *,unsigned int,char const *,long);
			void _FailFastImmediate_Unexpected();
			void _FailFast_GetLastError(void *,unsigned int,char const *);
			void _FailFast_Unexpected(void *,unsigned int,char const *);
			void _Log_Hr(void *,unsigned int,char const *,long);
			void _Log_NtStatus(void *,unsigned int,char const *,long);
		};

		class shared_buffer
		{
			void assign(long *,unsigned __int64);
		public:
			bool create(void const *,unsigned __int64);
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

		struct wnf_subscription_state<_LOCK_SCREEN_TRACE_COLLECTION_WNF_STATE>
		{
			virtual ~wnf_subscription_state<_LOCK_SCREEN_TRACE_COLLECTION_WNF_STATE>();
		};

		FEATURE_ENABLED_STATE WilApiImpl_GetFeatureEnabledState(unsigned int,FEATURE_CHANGE_TIME,int *);
		FEATURE_ENABLED_STATE WilApi_GetFeatureEnabledState(unsigned int,FEATURE_CHANGE_TIME,int *);
		bool GetModuleInformation(void *,unsigned int *,char *,unsigned __int64);
		bool IsFeatureConfigured(wil_FeatureState *,unsigned int,bool,wil_FeatureStore,int *);
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
		int ReportUsageToServiceDirect(wil_details_FeatureReportingCache *,unsigned int,int,int,wil_details_ServiceReportingKind,unsigned int,unsigned __int64,unsigned char);
		long (* ?? g_pfnRtlDisownModuleHeapAllocation)(void *,void *);
		long GetLastErrorFailHr();
		long HrToNtStatus(long);
		long NtStatusToHr(long);
		long ReportFailure_GetLastErrorHr<1>(void *,unsigned int,char const *,char const *,char const *,void *);
		long ReportFailure_NtStatus<1>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		long ReportFailure_NtStatus<2>(void *,unsigned int,char const *,char const *,char const *,void *,long);
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
		unsigned int EnsureSubscribedToFeatureConfigurationChanges();
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
		void ReportUsageToService(wil_details_FeatureReportingCache *,unsigned int,int,int,FEATURE_LOGGED_TRAITS const *,int,wil_ReportingKind,unsigned __int64);
		void Rethrow();
		void ThrowResultExceptionInternal(FailureInfo const &);
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

		struct ProcessLocalStorage<ProcessLocalData>
		{
			ProcessLocalData * GetShared();
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

		struct SubscriptionList
		{
			SubscriptionList();
			void OnSignaled(srwlock &);
			void SubscribeUnderLock(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
			void Unsubscribe(srwlock &,FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
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

	WilFailureReportFlags g_moduleFailureReportFlags;
	bool (* ?? g_pfnIsDebuggerPresent)();
	bool (* ?? g_pfnWilFailFast)(wil::FailureInfo const &);
	bool ProcessShutdownInProgress();
	bool g_fBreakOnFailure;
	bool g_fIsDebuggerPresent;
	long GetFailureLogString(unsigned short *,unsigned __int64,wil::FailureInfo const &);
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

	struct function<void (_LOCK_SCREEN_TRACE_COLLECTION_WNF_STATE const &)>
	{
		~function<void (_LOCK_SCREEN_TRACE_COLLECTION_WNF_STATE const &)>();
	};

	struct unique_ptr<wil::details::wnf_subscription_state<_LOCK_SCREEN_TRACE_COLLECTION_WNF_STATE>,default_delete<wil::details::wnf_subscription_state<_LOCK_SCREEN_TRACE_COLLECTION_WNF_STATE> > >
	{
		~unique_ptr<wil::details::wnf_subscription_state<_LOCK_SCREEN_TRACE_COLLECTION_WNF_STATE>,default_delete<wil::details::wnf_subscription_state<_LOCK_SCREEN_TRACE_COLLECTION_WNF_STATE> > >();
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

FEATURE_ENABLED_STATE (* g_wil_details_apiGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME,int *);
FEATURE_ENABLED_STATE (* g_wil_details_internalGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME,int *);
HINSTANCE__ * g_wil_details_kernelbaseModuleHandle;
HINSTANCE__ * g_wil_details_ntdllModuleHandle;
HINSTANCE__ * wil_details_GetKernelBaseModuleHandle();
HINSTANCE__ * wil_details_GetNtDllModuleHandle();
Microsoft::WRL::Details::CreatorMap const __object_CCredentialProviderFramework_COM;
Microsoft::WRL::Details::CreatorMap const __object_CLastLoggedOnUsername_COM;
Microsoft::WRL::Details::CreatorMap const __object_CLogonStatusHelper_COM;
Microsoft::WRL::Details::CreatorMap const __object_CSystemSettings_COM;
Microsoft::WRL::Details::FactoryCache __objectFactory__CCredentialProviderFramework_COM;
Microsoft::WRL::Details::FactoryCache __objectFactory__CLastLoggedOnUsername_COM;
Microsoft::WRL::Details::FactoryCache __objectFactory__CLogonStatusHelper_COM;
Microsoft::WRL::Details::FactoryCache __objectFactory__CSystemSettings_COM;
SharedModeType GetSharedModeType();
_GUID s_clsidDefault;
bool IsActiveSessionCountLimited();
bool IsSessionRemoteable(bool);
bool _tlgGuidIsZero(_GUID const &);
bool s_FilterMember(IPropertyStore *);
int InlineIsEqualGUID(_GUID const &,_GUID const &);
int SafeFree(void *);
int wil_RtlStagingConfig_QueryFeatureState(wil_FeatureState *,unsigned int,int,int *);
long (* g_wil_details_pfnNtQueryWnfStateData)(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long (* g_wil_details_pfnNtUpdateWnfStateData)(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long AddFrameToWICBitmap(IWICImagingFactory *,IWICBitmapEncoder *,IWICBitmapSource *,_GUID,EncodingOptions);
long CJobQueueEventCallback_CreateInstance(void *,CJobQueueCallback * *);
long CJobQueue_CreateInstance<CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &>(CJobQueueCallback *,CJobQueue<CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &> * *);
long CdplGetIsPolicyEnabledInl(int *);
long ConvertWICBitmapPixelFormat(IWICImagingFactory *,IWICBitmapSource *,_GUID,WICBitmapDitherType,IWICBitmapSource * *);
long CopyStringW(unsigned short const *,unsigned __int64,unsigned short * *);
long CreateReadOnlyRandomAccessStreamFromHBITMAP(HBITMAP__ *,_GUID const &,Windows::Storage::Streams::IRandomAccessStream * *);
long GetCLSIDsFromCommaDelimitedREG_SZ(HKEY__ *,unsigned short const *,unsigned short const *,CCoSimpleArray<_GUID,4294967294,CSimpleArrayStandardCompareHelper<_GUID> > *);
long GetCLSIDsFromRegistrySubkeys(HKEY__ *,bool,CCoSimpleArray<_GUID,4294967294,CSimpleArrayStandardCompareHelper<_GUID> > *);
long GetFilteredCredentialProviderCLSIDs(_CREDENTIAL_PROVIDER_USAGE_SCENARIO,unsigned long,CCoSimpleArray<_GUID,4294967294,CSimpleArrayStandardCompareHelper<_GUID> > *,CCoSimpleArray<_GUID,4294967294,CSimpleArrayStandardCompareHelper<_GUID> > const &,_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *,CCoSimpleArray<_GUID,4294967294,CSimpleArrayStandardCompareHelper<_GUID> > *);
long GetLogonDisplayNameByNames(bool,bool,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short * *);
long GetStreamOfWICBitmapSourceWithOptions(IWICImagingFactory *,IWICBitmapSource *,_GUID const &,_GUID,EncodingOptions,IStream * *);
long GetTerminalServicesCredential(_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *);
long InternalCoWaitForMultipleHandles(unsigned long,unsigned long,unsigned long,void * *,unsigned long *);
long KerbInteractiveUnlockLogonPack(_KERB_INTERACTIVE_UNLOCK_LOGON const &,unsigned char * *,unsigned long *);
long RegLoadKeyWinPE(HKEY__ *,unsigned short const *,unsigned short const *,unsigned short const *);
long RegOpenSessionDataKey(unsigned long,unsigned long,HKEY__ * *);
long RemoveExcludedCredentialProviders(CCoSimpleArray<_GUID,4294967294,CSimpleArrayStandardCompareHelper<_GUID> > *);
long ResultFromKnownLastError();
long SHRegGetDWORD(HKEY__ *,unsigned short const *,unsigned short const *,unsigned long *);
long SHRegSetBOOL(HKEY__ *,unsigned short const *,unsigned short const *,int);
long SHRegSetDWORD(HKEY__ *,unsigned short const *,unsigned short const *,unsigned long);
long SHRegSetString(HKEY__ *,unsigned short const *,unsigned short const *,unsigned short const *);
long StringCat(unsigned short const *,unsigned short const *,unsigned short * *);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCopyA(char *,unsigned __int64,char const *);
long StringCchCopyExW(unsigned short *,unsigned __int64,unsigned short const *,unsigned short * *,unsigned __int64 *,unsigned long);
long StringCchCopyNExW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64,unsigned short * *,unsigned __int64 *,unsigned long);
long StringCchCopyNW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64);
long StringCchCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchLengthW(unsigned short const *,unsigned __int64,unsigned __int64 *);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long StringCchVPrintfW(unsigned short *,unsigned __int64,unsigned short const *,char *);
long UnicodeStringStringHijack(unsigned short const *,_UNICODE_STRING *);
long _GetBitmapData(ICredentialProviderCredential *,CFieldData *);
long _GetCheckboxData(ICredentialProviderCredential *,CFieldData *);
long _GetComboBoxData(ICredentialProviderCredential *,CFieldData *);
long _GetFieldData(_CREDENTIAL_PROVIDER_FIELD_DESCRIPTOR * *,unsigned long,CCredentialTileData *,bool);
long _GetSubmitButtonData(ICredentialProviderCredential *,CFieldData *,CCredentialTileData *);
long s_CreatePropStoreFromAccount(IPropertyStore *,_GUID const &,IPropertyStore * *);
long s_EnumerateUserFromFullNameAndSid(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,bool,CCoSimpleArray<Microsoft::WRL::ComPtr<IPropertyStore>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPropertyStore> > > *);
long s_FindConnectedUserBySid(void *,bool *,_GUID *,unsigned short * *,unsigned short * *,unsigned short * *);
long s_GetLastLoggedOnUsernameAndSid(unsigned short * *,unsigned short * *,unsigned short * *,unsigned short * *);
long s_GetLastLoggedOnUsernameFromDownlevel(unsigned short * *);
long s_GetLogonStatusString(bool,unsigned short const *,unsigned short * *);
long s_SetUPNNames(IPropertyStore *,unsigned short const *,unsigned short const *,unsigned short const *);
long wil_RtlStagingConfig_RecordFeatureUsage(unsigned int,unsigned int,int);
long wil_details_NtQueryWnfStateData(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long wil_details_NtUpdateWnfStateData(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long wil_details_RtlRegisterFeatureConfigurationChangeNotification(void (*)(void *),void *,unsigned __int64 *,void * *);
long wil_details_WriteSRUMWnfUsageBuffer(wil::details_abi::heap_vector<wil_details_FeatureUsageSRUM> *);
unsigned long GetWindowsDirectoryWinPE(unsigned short * *);
unsigned long RegReadStringValue(HKEY__ *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned long,unsigned short * *);
unsigned long _RIDFromSID(void * const);
unsigned long _RegSetKeyValueWithSDDL(HKEY__ *,unsigned short const *,unsigned short const *,unsigned long,void const *,unsigned long,_SECURITY_ATTRIBUTES *);
unsigned short * GetRegValueName(unsigned short const *);
unsigned short const * const InterfaceName_Windows_Storage_Streams_IRandomAccessStream;
unsigned short const * const RuntimeClass_Windows_System_Profile_EducationSettings;
void (* g_wil_details_RecordSRUMFeatureUsage)(unsigned int,unsigned int,unsigned int);
void (* g_wil_details_apiRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_apiSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_apiUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_internalRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_internalSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_internalUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_pfnFeatureLoggingHook)(unsigned int,FEATURE_LOGGED_TRAITS const *,FEATURE_ERROR const *,int,wil_ReportingKind const *,wil_VariantReportingKind const *,unsigned char,unsigned __int64);
void (* g_wil_details_realtimeFeatureUsageHook)(unsigned int,unsigned int,unsigned char);
void * SafeAlloc(unsigned __int64);
void * operator new(unsigned __int64);
void * operator new(unsigned __int64,std::nothrow_t const &);
void * operator new[](unsigned __int64,std::nothrow_t const &);
void _tlgWriteActivityAutoStop<0,5>(_tlgProvider_t const *,_GUID const *);
void _tlgWriteActivityAutoStop<35184372088832,5>(_tlgProvider_t const *,_GUID const *);
void _tlgWriteActivityAutoStop<70368744177664,5>(_tlgProvider_t const *,_GUID const *);
void operator delete(void *);
void wil_StagingConfig_LogStagedFeatureUsage(unsigned int,unsigned int,unsigned char);
void wil_details_FeatureReporting_IncrementOpportunityInCache(wil_details_FeatureReportingCache *,wil_details_ServiceReportingKind,unsigned int,wil_details_RecordUsageResult *);
void wil_details_FeatureReporting_IncrementUsageInCache(wil_details_FeatureReportingCache *,wil_details_ServiceReportingKind,unsigned int,wil_details_RecordUsageResult *);
void wil_details_RecordCachedUsage(unsigned int,wil_details_FeatureReportingCache *,void (*)(unsigned int,unsigned int,unsigned int,char const *));
wil_details_RecordUsageResult wil_details_FeatureReporting_RecordUsageInCache(wil_details_FeatureReportingCache *,wil_details_ServiceReportingKind,unsigned int,unsigned int);
wil_details_ServiceReportingKind wil_details_MapReportingKind(wil_ReportingKind,int);
