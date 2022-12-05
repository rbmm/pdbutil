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
	virtual unsigned int GetRemovedIndex();
};

struct CCommandLinkClickedJob
{
	virtual void Do(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &);
};

struct CCredentialFieldChangeArray
{
	long Add(CCredentialFieldChangeInfo *);
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
	long EvaluateJobPriority(CCredentialProviderBioEventsJob const *,bool *);
	virtual void Do(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &);
};

struct CCredentialProviderEventsJob
{
	virtual void Do(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &);
};

class CCredentialProviderFramework
{
	long _CheckInitialized();
	long _FormatGreeting(_GREETING_TYPE,bool,unsigned short const *,unsigned short * *);
	long _GetDesktopGreetingFromSID(_GREETING_TYPE,void *,unsigned short * *);
	long _GetFriendlyUserNameMobile(unsigned short * *);
	long _GetMobileGreeting(_GREETING_TYPE,unsigned short * *);
public:
	CCredentialProviderFramework();
	virtual long AdviseCredProvsAsync();
	virtual long AdviseCredentialAsync(unsigned int,unsigned int,HWND__ *);
	virtual long BioFeedbackVisualStateChanged(unsigned __int64,_CREDENTIAL_PROVIDER_FEEDBACK_VISUAL_STATE,unsigned short const *);
	virtual long BioFeedbackVisualStateChangedWithPriority(unsigned __int64,_CREDENTIAL_PROVIDER_FEEDBACK_VISUAL_STATE,unsigned short const *,_BIO_FEEDBACK_PRIORITY);
	virtual long BuildUserTileAsync(_CREDENTIAL_PROVIDER_USAGE_SCENARIO);
	virtual long CancelBioFeedbackVisualState(unsigned __int64);
	virtual long CheckProviderAvailability(_CREDENTIAL_PROVIDER_USAGE_SCENARIO,unsigned long,unsigned short const *,int *);
	virtual long CredentialsChanged(unsigned __int64);
	virtual long DisconnectCredentialsAsync();
	virtual long EnumerateAllCredentialsAsync();
	virtual long EnumerateTilesForProviderAsync(unsigned int,CREDENTIALSCHANGED_STATE);
	virtual long FormatGreeting(_GREETING_TYPE,void *,unsigned short * *);
	virtual long FormatGreetingForCredentialProviderUser(_GREETING_TYPE,ICredentialProviderUser *,unsigned short * *);
	virtual long GetAutoLogonManager(IAutoLogonManager * *);
	virtual long GetPicturePasswordSerializationAsync(unsigned int,unsigned int,IQueryContinueWithStatus *,IInspectable *);
	virtual long GetSerializationAsync(unsigned int,unsigned int,IQueryContinueWithStatus *);
	virtual long InitializeAsync(CREDENTIAL_SCENARIO,IAutoLogonManager *,ICredProvFrameworkCallback *,unsigned short);
	virtual long OnCommandLinkClickedAsync(unsigned int,unsigned int,unsigned long);
	virtual long OnThreadInitComplete();
	virtual long OnThreadInitError(long);
	virtual long ReportResultAsync(unsigned int,long,long,unsigned short const *,unsigned short const *,unsigned short const *);
	virtual long RequestLockScreenDismiss(unsigned __int64);
	virtual long RequestVisibilityChange(unsigned __int64);
	virtual long ResetBioFeedbackJobState();
	virtual long SelectCredentialAsync(unsigned int,unsigned int,TILE_SELECTION_FLAGS);
	virtual long SetCheckboxValueAsync(unsigned int,unsigned int,unsigned long,int);
	virtual long SetComboBoxValueAsync(unsigned int,unsigned int,unsigned long,unsigned long);
	virtual long SetDisplayStateAsync(_CREDENTIAL_PROVIDER_DISPLAY_STATE_FLAGS);
	virtual long SetProviderGroup();
	virtual long SetStringDataAsync(unsigned int,unsigned int,unsigned long,unsigned short const *);
	virtual long Shutdown();
	virtual long StartCredProvsAsync(_CREDENTIAL_PROVIDER_USAGE_SCENARIO,unsigned long,_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *,_GUID const *,unsigned char const *,unsigned int);
	virtual long UnadviseCredProvsAsync();
	virtual long UnadviseCredentialAsync(unsigned int,unsigned int);
};

struct CCredentialProviderRequestLockScreenDismissJob
{
	virtual void Do(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &);
};

struct CCredentialProviderRequestVisibilityChangeJob
{
	virtual void Do(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &);
};

struct CCredentialProviderSerialization
{
	virtual long GetAuthenticationPackage(unsigned long *);
	virtual long GetCredentialProviderCLSID(_GUID *);
	virtual long GetSerialization(unsigned long *,unsigned char * *);
	virtual long GetSerializationFlags(SERIALIZATION_FLAGS *);
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
	virtual ~CCredentialProviderUserArray();
public:
	CCredentialProviderUserArray();
	long Clone(CCredentialProviderUserArray * *);
	long RuntimeClassInitialize(_CREDENTIAL_PROVIDER_USAGE_SCENARIO,unsigned long,IAutoLogonManager *);
	virtual long GetAccountOptions(CREDENTIAL_PROVIDER_ACCOUNT_OPTIONS *);
	virtual long GetAt(unsigned long,ICredentialProviderUser * *);
	virtual long GetCount(unsigned long *);
	virtual long SetProviderFilter(_GUID const &);
	virtual long SetProviderFilters(_GUID *,unsigned long);
};

struct CCredentialTileChangeInfo
{
	virtual CREDENTIAL_TILE_CHANGE_TYPE GetChangeType();
};

class CCredentialTileData
{
	long _NotifyCredentialEvent(unsigned int,CREDENTIAL_FIELD_CHANGE_TYPE,IUnknown *);
	long _NotifyDisplayStateChange();
protected:
	virtual ~CCredentialTileData();
public:
	CCredentialTileData();
	long AddField(CFieldData *);
	long DoRequestSerialization();
	long GetCredential(ICredentialProviderCredential * *);
	long GetCredentialUnconditionally(ICredentialProviderCredential * *);
	long GetIndexFromFieldId(unsigned long,unsigned int *);
	long SetSelected(bool,int *);
	virtual int DoesCredentialSupportIHMAutomaticInvoke();
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
	virtual long GetFieldAt(unsigned int,IFieldData * *);
	virtual long GetUIMode(_CREDENTIAL_PROVIDER_CREDENTIAL_UI_MODE *);
	virtual long GetUserSid(unsigned short * *);
	virtual long OnCreatingWindow(HWND__ * *);
	virtual long RequestSelection();
	virtual long RequestSerialization();
	virtual long RequestVisibilityChange();
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
	virtual long SetTextFieldMaxLength(ICredentialProviderCredential *,unsigned long,unsigned long);
	virtual long SetUIMode(_CREDENTIAL_PROVIDER_CREDENTIAL_UI_MODE);
	virtual long SwitchCredentialProvider(_GUID const &);
	virtual unsigned int GetCredentialId();
	virtual unsigned int GetFieldCount();
	virtual unsigned int GetProviderId();
	void Unadvise();
};

class CCredentialTileDataArray
{
protected:
	virtual ~CCredentialTileDataArray();
public:
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
	bool s_ShouldEnumerate();
	bool s_fIsCloudDomainJoined();
	bool s_fIsDomainJoined();
	long s_CreatePropStoreFromFullNameAndSid(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,bool,IPropertyStore * *);
	long s_EnumLastLoggedonUser(CCoSimpleArray<Microsoft::WRL::ComPtr<IPropertyStore>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPropertyStore> > > *);
	long s_EnumLogonUsers(CCoSimpleArray<Microsoft::WRL::ComPtr<IPropertyStore>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPropertyStore> > > *);
	long s_EnumerateCurrentUser(CCoSimpleArray<Microsoft::WRL::ComPtr<IPropertyStore>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPropertyStore> > > *);
	long s_EnumerateInSessionUser(bool,unsigned long,CCoSimpleArray<Microsoft::WRL::ComPtr<IPropertyStore>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPropertyStore> > > *);
	long s_EnumerateLocalAdmins(CCoSimpleArray<Microsoft::WRL::ComPtr<IPropertyStore>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPropertyStore> > > *,bool *);
	long s_HasConnectedUser(bool *);
	long s_LookupAccountName(unsigned short const *,void * *,unsigned short * *);
	long s_LookupInternetName(void *,bool,unsigned short * *);
};

struct CEnumerateAllCredentialsJob
{
	virtual void Do(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &);
};

class CFieldData
{
	bool _FieldHasWriteableValue();
public:
	CFieldData();
	long AppendComboBoxItem(unsigned short const *);
	long SetCheckbox(bool,unsigned short const *);
	long SetString(unsigned short const *);
	virtual _CREDENTIAL_PROVIDER_FIELD_TYPE GetFieldType();
	virtual int HasBitmapValue();
	virtual int HasCheckboxValue();
	virtual int HasComboBoxValue();
	virtual int HasStringValue();
	virtual int HasSubmitButtonValue();
	virtual int HasWritableStringValue();
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
	void SetBitmapBuffer(unsigned long,unsigned char const *);
	void SetBitmapData(HBITMAP__ *);
	void SetOptions(CREDENTIAL_PROVIDER_CREDENTIAL_FIELD_OPTIONS,CREDENTIAL_PROVIDER_CREDENTIAL_FIELD_OPTIONS *);
};

struct CGetEnumeratedTilesJob
{
	virtual void Do(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &);
};

class CGetSerializationJob
{
protected:
	void AdjustVisibility(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &,Microsoft::WRL::ComPtr<CCredentialTileData> &,unsigned short const *,_GUID);
public:
	CGetSerializationJob(unsigned int,unsigned int,ICredProvFrameworkCallback *,IQueryContinueWithStatus *,ICredentialProviderJobBuilder *);
	virtual void Do(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &);
};

class CJobQueue<CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &>
{
	bool DoJobInternal(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &,bool);
public:
	long PostJob(CJob<CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &> *);
};

struct CJobQueueEventCallback
{
	virtual bool Signal();
};

class CLastLoggedOnUsername
{
	virtual long SetLastLoggedOnUsername(unsigned short const *);
};

struct CLogonStatusHelper
{
	virtual long GetLogonStatusString(int,unsigned short const *,unsigned short * *);
};

struct COptionsChangeInfo
{
	virtual CREDENTIAL_PROVIDER_CREDENTIAL_FIELD_OPTIONS GetChangedOptions();
};

class CPLAPQueryContinueWithStatus
{
	long _GetCallback(IQueryContinueWithStatus * *);
protected:
	virtual ~CPLAPQueryContinueWithStatus();
public:
	virtual long QueryContinue();
	virtual long SetStatusMessage(unsigned short const *);
};

struct CPicturePasswordGetSerializationJob
{
	virtual void Do(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &);
};

struct CProviderData
{
	long AddCredentialData(CCredentialTileData *);
	long GetProvider(ICredentialProvider * *);
	long RuntimeClassInitialize(unsigned int,ICredentialProvider *,_GUID const &,bool);
	void ClearCredentialData();
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

struct CReportResultJob
{
	CReportResultJob(unsigned int,long,long,unsigned short const *,unsigned short const *,unsigned short const *,ICredProvFrameworkCallback *);
	virtual void Do(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &);
};

struct CRequestSerializationJob
{
	virtual void Do(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &);
};

struct CSelectCredentialJob
{
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
};

struct CSimplePointerArray<CJob<CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &>,CTContainer_PolicyRelease<CJob<CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &> >,CSimpleArrayStandardCompareHelper<CJob<CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &> *> >
{
	~CSimplePointerArray<CJob<CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &>,CTContainer_PolicyRelease<CJob<CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &> >,CSimpleArrayStandardCompareHelper<CJob<CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &> *> >();
};

class CStartCredProvsJob
{
	void _StartCredProvsForUsageScenario(CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &,_CREDENTIAL_PROVIDER_USAGE_SCENARIO);
public:
	long Initialize(_CREDENTIAL_PROVIDER_USAGE_SCENARIO,unsigned long,_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION const *,_GUID const *,unsigned char const *,unsigned int,ICredProvFrameworkCallback *);
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

struct CTCoAllocPolicy
{
	static long Alloc(void *,unsigned long,unsigned __int64,void * *);
	static long Realloc(void *,unsigned long,void *,unsigned __int64,void * *);
};

struct CTSimpleArray<CJob<CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &> *,4294967294,CTPolicyCoTaskMem<CJob<CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &> *>,CSimpleArrayStandardCompareHelper<CJob<CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &> *>,CSimpleArrayStandardMergeHelper<CJob<CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &> *> >
{
	long EnsureCapacity(unsigned __int64);
};

struct CTSimpleArray<Microsoft::WRL::ComPtr<CProviderData>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CProviderData> >,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CProviderData> >,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CProviderData> > >
{
	long Add(Microsoft::WRL::ComPtr<CProviderData> const &,unsigned __int64 *);
};

struct CTSimpleArray<Microsoft::WRL::ComPtr<CUserTileData>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CUserTileData> >,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CUserTileData> >,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CUserTileData> > >
{
	long EnsureCapacity(unsigned __int64);
};

struct CTSimpleArray<Microsoft::WRL::ComPtr<IPropertyStore>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPropertyStore> >,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPropertyStore> >,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPropertyStore> > >
{
	long Add(Microsoft::WRL::ComPtr<IPropertyStore> const &,unsigned __int64 *);
	void _MergeSort<CAdminNameCompare>(CAdminNameCompare const &,unsigned __int64,unsigned __int64);
	void _MergeThem<CAdminNameCompare>(CAdminNameCompare const &,unsigned __int64,unsigned __int64);
};

struct CTSimpleArray<_GUID,4294967294,CTPolicyCoTaskMem<_GUID>,CSimpleArrayStandardCompareHelper<_GUID>,CSimpleArrayStandardMergeHelper<_GUID> >
{
	long Add(_GUID const &,unsigned __int64 *);
};

struct CTSimpleArray<unsigned short *,4294967294,CTPolicyCoTaskMem<unsigned short *>,CSimpleArrayCaseInsensitiveOrdinalStringCompareHelper,CSimpleArrayStandardMergeHelper<unsigned short *> >
{
	long Add(unsigned short * const &,unsigned __int64 *);
};

class CUserTileData
{
protected:
	virtual ~CUserTileData();
public:
	CUserTileData();
	long RuntimeClassInitialize(ICredentialProviderUser *,unsigned short const *,bool);
	virtual int IsBuiltInGuest();
	virtual int IsLocalNoPasswordUser();
	virtual int IsLoggedIn();
	virtual int ShouldShowDomainUsername();
	virtual long GetAutoLogonSid(unsigned short * *);
	virtual long GetDisplayName(unsigned short * *);
	virtual long GetEmailAddress(unsigned short * *);
	virtual long GetLastLoggedOnProvider(_GUID *);
	virtual long GetLogonStatusString(unsigned short * *);
	virtual long GetQualifiedUsername(unsigned short * *);
	virtual long GetSid(unsigned short * *);
	virtual long SetDisplayName(unsigned short const *);
};

class CUserTileDataArray
{
protected:
	virtual ~CUserTileDataArray();
public:
	long Add(CUserTileData *);
	long AddSorted(CUserTileData *);
	virtual long GetAt(unsigned int,_GUID const &,void * *);
	virtual long GetCount(unsigned int *);
};

struct CUserTileDataCompareHelper
{
	int Compare(Microsoft::WRL::ComPtr<CUserTileData> const &,Microsoft::WRL::ComPtr<CUserTileData> const &);
};

struct CertificateUtil
{
	static _CERT_EXTENSION * FindExtensionByOid(char const *,_CERT_CONTEXT const *);
	static long DoesExtensionWithValueExist(char const *,unsigned short const *,_CERT_CONTEXT const *,int *);
	static long FindAllCertificatesByOidValue(_CERTFICATE_LOCATION,char const *,unsigned short const *,_CERT_CONTEXT const * * const,unsigned long *);
	static long FindExtensionStrValueByOid(char const *,_CERT_CONTEXT const *,unsigned short * *);
};

struct DeviceRegistrationStateApi
{
	static long GetJoinCertificate(unsigned short const *,_JOIN_TYPE,INFO_KIND,_CERT_CONTEXT const * *);
	static long IsJoined(unsigned short const *,_JOIN_TYPE,int *,int *,_CERT_CONTEXT const * *);
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
	static long WriteRegistryFailureEvent(unsigned long);
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

		namespace Details
		{
			class ImplementsHelper<RuntimeClassFlags<2>,1,ChainInterfaces<ICredentialProviderCredentialEvents5,ICredentialProviderCredentialEvents4,ICredentialProviderCredentialEvents3,ICredentialProviderCredentialEvents2,ICredentialProviderCredentialEvents,Nil,Nil,Nil,Nil,Nil>,ICredentialProviderCredentialUIModeEvents,ICredentialProviderCredentialCredUISubmitButtonEvents,ICredentialProviderCredentialSwitchProviderEvents,ICredentialProviderCredentialTileDataEvents,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<2>,1,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<2>,1,ICredentialProviderEvents,ICredentialProviderBioEvents,IGreetingFormatter,ICredentialProviderTileDataEvents,ICredentialProviderJobBuilder,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,0,IInspectable,ICredProviderCredentialSerialization,IWeakReferenceSource,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,Windows::Storage::Streams::IInputStream,Windows::Storage::Streams::IOutputStream,Windows::Foundation::IClosable,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
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

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,ChainInterfaces<ICredentialProviderUserArray2,ICredentialProviderUserArray,Nil,Nil,Nil,Nil,Nil,Nil,Nil,Nil>,FtmBase>
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

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::Security::Authentication::Web::GetDefaultSignInAccountResult *>,FtmBase>
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

			struct WeakReferenceImpl
			{
				virtual long Resolve(_GUID const &,IInspectable * *);
			};

			long CreateClassFactory<SimpleClassFactory<CCredentialProviderFramework,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateClassFactory<SimpleClassFactory<CLastLoggedOnUsername,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateClassFactory<SimpleClassFactory<CLogonStatusHelper,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateClassFactory<SimpleClassFactory<CSystemSettings,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long GetCacheEntry(Details::ModuleBase *,unsigned int *,_GUID const &,Details::CreatorMap const *,IUnknown * *);
			long MakeAndInitialize<CComboBoxDeleteItem,IUnknown,unsigned long &>(Details::ComPtrRef<ComPtr<IUnknown> >,unsigned long &);
			long MakeAndInitialize<CPLAPQueryContinueWithStatus,CPLAPQueryContinueWithStatus,IQueryContinueWithStatus * &>(Details::ComPtrRef<ComPtr<CPLAPQueryContinueWithStatus> >,IQueryContinueWithStatus * &);
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
	unsigned __int64 Stop();
	void Start(unsigned short const *,_GUID const &,unsigned int);
};

class RegistrationCertStatus
{
	static long GetCertificate(_CERTFICATE_LOCATION,char const *,unsigned short const *,INFO_KIND,_CERT_CONTEXT const * *);
public:
	static long GetDeviceCertificate(INFO_KIND,_CERT_CONTEXT const * *);
};

struct TraceLoggingCorrelationVector
{
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
		public:
			long ConcatFormat(unsigned short const *,...);
			long CopyTo(unsigned short * *);
			long Initialize(HINSTANCE__ *,unsigned int);
			long Initialize(HKEY__ *,unsigned short const *);
			long Initialize(HKEY__ *,unsigned short const *,unsigned short const *);
			long InitializeFormat(unsigned short const *,...);
			long InitializeFormat(unsigned short const *,char *);
			long InitializeMessage(unsigned short const *,char *);
			long InitializeResMessage(HINSTANCE__ *,int,...);
		};

		struct NativeString<LocalMemPolicy<unsigned short> >
		{
			long Initialize(HKEY__ *,unsigned short const *);
		};

	};

};

namespace std
{
	nothrow_t const std::nothrow;
};

namespace wil
{
	namespace details
	{
		class ThreadFailureCallbackHolder
		{
			static long volatile s_telemetryId;
		public:
			static bool GetThreadContext(FailureInfo *,ThreadFailureCallbackHolder *,char *,unsigned __int64);
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
		long GetLastErrorFailHr();
		long ReportFailure_GetLastErrorHr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		unsigned char (* g_pfnRtlDllShutdownInProgress)();
		unsigned char * WriteResultString<char const *>(unsigned char *,unsigned char *,char const *,char const * *);
		unsigned char RtlDllShutdownInProgress();
		unsigned long ReportFailure_GetLastError(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		unsigned short * LogStringPrintf(unsigned short *,unsigned short const *,unsigned short const *,...);
		void (* g_pfnDebugBreak)();
		void (* g_pfnGetContextAndNotifyFailure)(FailureInfo *,char *,unsigned __int64);
		void (* g_pfnLoggingCallback)(FailureInfo const &);
		void (* g_pfnOriginateCallback)(FailureType,long);
		void (* g_pfnTelemetryCallback)(bool,FailureInfo const &);
		void (* g_pfnThrowResultException)(FailureInfo const &);
		void DebugBreak();
		void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
		void LogFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,bool,unsigned short *,unsigned __int64,char *,unsigned __int64,FailureInfo *);
		void ReportFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Hr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long);
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
			static long GetValueFromSemaphore(void *,long *);
			static long TryGetValueInternal(unsigned short const *,bool,unsigned __int64 *,bool *);
		};

		struct ThreadLocalData
		{
			void SetLastError(FailureInfo const &);
			~ThreadLocalData();
		};

		struct ThreadLocalFailureInfo
		{
			void Set(FailureInfo const &,unsigned int);
		};

		details_abi::ProcessLocalStorage<details_abi::ProcessLocalData> * g_pProcessLocalData;
		details_abi::ThreadLocalData * GetThreadLocalDataCache(bool);
	};

	bool (* g_pfnIsDebuggerPresent)();
	bool g_fBreakOnFailure;
	bool g_fIsDebuggerPresent;
	long GetFailureLogString(unsigned short *,unsigned __int64,wil::FailureInfo const &);
};

HINSTANCE__ * g_wil_details_ntdllModuleHandle;
Microsoft::WRL::Details::CreatorMap const __object_CCredentialProviderFramework_COM;
Microsoft::WRL::Details::CreatorMap const __object_CLastLoggedOnUsername_COM;
Microsoft::WRL::Details::CreatorMap const __object_CLogonStatusHelper_COM;
Microsoft::WRL::Details::CreatorMap const __object_CSystemSettings_COM;
Microsoft::WRL::Details::FactoryCache __objectFactory__CCredentialProviderFramework_COM;
Microsoft::WRL::Details::FactoryCache __objectFactory__CLastLoggedOnUsername_COM;
Microsoft::WRL::Details::FactoryCache __objectFactory__CLogonStatusHelper_COM;
Microsoft::WRL::Details::FactoryCache __objectFactory__CSystemSettings_COM;
_GUID s_clsidDefault;
bool IsDomainControllerMode();
bool IsFlightThresholdUserEnumeration();
bool IsNoPasswordUser(unsigned short const *);
bool QueryEffectiveBOOLSettingHKLMOnly(unsigned short const *,unsigned short const *,unsigned short const *,bool *);
bool RegGetBoolOrDefault(HKEY__ *,unsigned short const *,unsigned short const *,bool);
bool s_FilterMember(IPropertyStore *);
int SafeFree(void *);
long AddFrameToWICBitmap(IWICImagingFactory *,IWICBitmapEncoder *,IWICBitmapSource *,_GUID,EncodingOptions);
long CJobQueueEventCallback_CreateInstance(void *,CJobQueueCallback * *);
long CJobQueue_CreateInstance<CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &>(CJobQueueCallback *,CJobQueue<CREDENTIAL_PROVIDER_THREAD_JOB_CONTEXT const &> * *);
long CoAllocString(unsigned short const *,unsigned short * *);
long CreateReadOnlyRandomAccessStreamFromHBITMAP(HBITMAP__ *,_GUID const &,Windows::Storage::Streams::IRandomAccessStream * *);
long CreateReadOnlyWrapperOnRandomAccessStream(Windows::Storage::Streams::IRandomAccessStream *,Windows::Storage::Streams::IRandomAccessStream * *);
long DeleteLastLoggedonRegkey(unsigned short const *);
long FormatLastLoggedOn(_CREDENTIAL_PROVIDER_USAGE_SCENARIO,unsigned short const *,unsigned short const *,unsigned short * *);
long GetBuiltInGuestSid(unsigned short * *);
long GetCLSIDsFromRegistrySubkeys(HKEY__ *,bool,CCoSimpleArray<_GUID,4294967294,CSimpleArrayStandardCompareHelper<_GUID> > *);
long GetDefaultDomain(unsigned short * *);
long GetFilteredCredentialProviderCLSIDs(_CREDENTIAL_PROVIDER_USAGE_SCENARIO,unsigned long,CCoSimpleArray<_GUID,4294967294,CSimpleArrayStandardCompareHelper<_GUID> > *,CCoSimpleArray<_GUID,4294967294,CSimpleArrayStandardCompareHelper<_GUID> > const &,_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *,CCoSimpleArray<_GUID,4294967294,CSimpleArrayStandardCompareHelper<_GUID> > *);
long GetFriendlyName(unsigned short const *,unsigned short const *,unsigned short * *);
long GetInSessionDisplayname(unsigned short const *,unsigned short * *);
long GetInSessionUserFromRegistry(unsigned long,unsigned short * *,unsigned short * *,unsigned short * *,unsigned short * *);
long GetInSessionUserFromTS(unsigned short * *,unsigned short * *);
long GetLogonDisplayNameByNames(bool,bool,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short * *);
long GetMachineDomainName(unsigned short * *);
long GetMachineName(unsigned short * *);
long GetSamName(unsigned short const *,unsigned short const *,unsigned short * *);
long GetStreamOfWICBitmapSource(IWICImagingFactory *,IWICBitmapSource *,_GUID const &,IStream * *);
long GetTerminalServicesCredential(_CREDENTIAL_PROVIDER_CREDENTIAL_SERIALIZATION *);
long InternalCoWaitForMultipleHandles(unsigned long,unsigned long,unsigned long,void * *,unsigned long *);
long IsBuiltInAdministrator(unsigned short const *,bool *);
long IsLocalMachine(unsigned short const *,bool *);
long KerbInteractiveUnlockLogonPack(_KERB_INTERACTIVE_UNLOCK_LOGON const &,unsigned char * *,unsigned long *);
long LsaOpenLocalSystemPolicy(unsigned long,_SECURITY_QUALITY_OF_SERVICE *,void * *);
long QueryIsDomainMember(bool *);
long RegLoadKeyWinPE(HKEY__ *,unsigned short const *,unsigned short const *,unsigned short const *);
long RegOpenSessionDataKey(unsigned long,unsigned long,HKEY__ * *);
long RemoveExcludedCredentialProviders(CCoSimpleArray<_GUID,4294967294,CSimpleArrayStandardCompareHelper<_GUID> > *);
long ReplaceDotWithMachineName(unsigned short const *,unsigned short * *);
long SHRegGetBOOL(HKEY__ *,unsigned short const *,unsigned short const *,int *);
long StringCat(unsigned short const *,unsigned short const *,unsigned short * *);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCopyNExW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64,unsigned short * *,unsigned __int64 *,unsigned long);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long StringCchVPrintfW(unsigned short *,unsigned __int64,unsigned short const *,char *);
long StringLen(unsigned short const *,unsigned __int64 *);
long UnformatUsername(_CREDENTIAL_PROVIDER_USAGE_SCENARIO,unsigned short const *,unsigned short const *,bool,unsigned short * *,unsigned short * *);
long UnicodeStringStringHijack(unsigned short const *,_UNICODE_STRING *);
long WTSStringToCoTaskMemString(unsigned short *,unsigned __int64,unsigned short * *);
long WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::Security::Authentication::Web::GetDefaultSignInAccountResult *>,Windows::Foundation::IAsyncOperation<Windows::Internal::Security::Authentication::Web::GetDefaultSignInAccountResult *> >(Windows::Foundation::IAsyncOperation<Windows::Internal::Security::Authentication::Web::GetDefaultSignInAccountResult *> *,tagCOWAIT_FLAGS,void *);
long _GetBitmapData(ICredentialProviderCredential *,CFieldData *);
long _GetCheckboxData(ICredentialProviderCredential *,CFieldData *);
long _GetComboBoxData(ICredentialProviderCredential *,CFieldData *);
long _GetFieldData(_CREDENTIAL_PROVIDER_FIELD_DESCRIPTOR * *,unsigned long,CCredentialTileData *,bool);
long _GetFieldState(ICredentialProviderCredential *,CFieldData *);
long _GetStringData(ICredentialProviderCredential *,CFieldData *);
long _GetSubmitButtonData(ICredentialProviderCredential *,CFieldData *,CCredentialTileData *);
long _GetTextFieldMaxLength(ICredentialProviderCredential *,CFieldData *);
long s_CreatePropStoreFromAccount(IPropertyStore *,_GUID const &,IPropertyStore * *);
long s_EnumerateUserFromFullNameAndSid(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,bool,CCoSimpleArray<Microsoft::WRL::ComPtr<IPropertyStore>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPropertyStore> > > *);
long s_FindConnectedUserBySid(void *,bool *,_GUID *,unsigned short * *,unsigned short * *,unsigned short * *);
long s_GetLastLoggedOnUsernameAndSid(unsigned short * *,unsigned short * *,unsigned short * *,unsigned short * *);
long s_GetLastLoggedOnUsernameFromDownlevel(unsigned short * *);
long s_GetLogonStatusString(bool,unsigned short const *,unsigned short * *);
long s_SetUPNNames(IPropertyStore *,unsigned short const *,unsigned short const *,unsigned short const *);
unsigned long RegGetDWORDOrDefault(HKEY__ *,unsigned short const *,unsigned short const *,unsigned long);
unsigned long RegReadStringValue(HKEY__ *,unsigned short const *,unsigned short const *,unsigned short * *);
unsigned long _RegSetKeyValue(HKEY__ *,unsigned short const *,unsigned short const *,unsigned long,void const *,unsigned long);
unsigned short const * const InterfaceName_Windows_Storage_Streams_IRandomAccessStream;
unsigned short const * const RuntimeClass_Windows_Internal_Security_Authentication_Web_TokenBrokerInternal;
void * * IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IComputerAccounts> >(Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IComputerAccounts> >);
void * * IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::Storage::Streams::IRandomAccessStream> >(Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Storage::Streams::IRandomAccessStream> >);
void * SafeAlloc(unsigned __int64);
void * operator new(unsigned __int64);
void * operator new(unsigned __int64,std::nothrow_t const &);
void CoFreeFieldDescriptors(_CREDENTIAL_PROVIDER_FIELD_DESCRIPTOR * *,unsigned long);
void GetDefaultReportResultStatusInfo(long,long,int,unsigned short * *,_CREDENTIAL_PROVIDER_STATUS_ICON *);
void WriteLastLoggedOnUserinfo(unsigned short const *,unsigned short const *,unsigned short const *);
void WriteLoggedOnUserinfo(unsigned short const *,unsigned short const *,unsigned short const *);
void _GetFieldOptions(ICredentialProviderCredential *,CFieldData *);
void _TlgWriteActivityAutoStop<0,5>(_TlgProvider_t const *,_GUID const *);
void _TlgWriteActivityAutoStop<35184372088832,5>(_TlgProvider_t const *,_GUID const *);
void _TlgWriteActivityAutoStop<70368744177664,5>(_TlgProvider_t const *,_GUID const *);
void operator delete(void *);
