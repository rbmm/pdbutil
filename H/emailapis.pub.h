namespace ATL
{
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

	struct CComCriticalSection
	{
		long Init();
	};

	struct CComModule
	{
		long GetClassObject(_GUID const &,_GUID const &,void * *);
		virtual long UpdateRegistryFromResourceD(unsigned int,int,_ATL_REGMAP_ENTRY *);
		virtual long UpdateRegistryFromResourceD(unsigned short const *,int,_ATL_REGMAP_ENTRY *);
		virtual long UpdateRegistryFromResourceS(unsigned int,int,_ATL_REGMAP_ENTRY *);
		virtual long UpdateRegistryFromResourceS(unsigned short const *,int,_ATL_REGMAP_ENTRY *);
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
	};

	class CTempBuffer<unsigned short,1024,CCRTAllocator>
	{
		void AllocateHeap(unsigned __int64);
		void FreeHeap();
	};

	class CTempBuffer<unsigned short,256,CCRTAllocator>
	{
		void AllocateHeap(unsigned __int64);
		void FreeHeap();
	};

	ATL::CAtlBaseModule _AtlBaseModule;
	ATL::CAtlComModule _AtlComModule;
	ATL::CAtlWinModule _AtlWinModule;
	long AtlComModuleGetClassObject(ATL::_ATL_COM_MODULE70 *,_GUID const &,_GUID const &,void * *);
	long AtlHresultFromLastError();
	long AtlHresultFromWin32(unsigned long);
	void AtlThrowImpl(long);
	void _AtlRaiseException(unsigned long,unsigned long);
};

struct ActionCallback
{
	virtual long Invoke(Windows::Foundation::IAsyncAction *,ABI::Windows::Foundation::AsyncStatus);
};

namespace AppConnection
{
	long GetAppServiceConnection(unsigned short const *,Windows::ApplicationModel::Contracts::Internal::AppConnectionTriggerType,Windows::ApplicationModel::AppService::IAppServiceConnection * *);
	long GetContainerId(Windows::Foundation::Collections::IPropertySet *,UdmItemType,HSTRING__ * *);
	long InitializeAppProviderRequest(UdmSessionHandle *,unsigned int,UdmObjectId,unsigned char,Windows::Foundation::Collections::IPropertySet * *);
	long SendMessageAndWaitForResponse(Windows::Foundation::Collections::IPropertySet *,Windows::ApplicationModel::Contracts::Internal::AppConnectionTriggerType,unsigned short const *,Windows::ApplicationModel::AppService::IAppServiceConnection *,Windows::Foundation::Collections::IPropertySet * *);
	long SendMessageAndWaitForResponse(Windows::Foundation::Collections::IPropertySet *,Windows::ApplicationModel::Contracts::Internal::AppConnectionTriggerType,unsigned short const *,Windows::Foundation::Collections::IPropertySet * *);
	long SendMessageAndWaitForResponse(Windows::Foundation::Collections::IPropertySet *,Windows::ApplicationModel::Contracts::Internal::AppConnectionTriggerType,unsigned short const *,unsigned char *);
	long ValidateRequest(UdmSessionHandle *,unsigned short const *,Windows::Foundation::Collections::IPropertySet *,UdmObjectId *);
};

struct BiasHelper<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,1>
{
	static AutoStubBias<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler> CreateBias(IRpcOptions *,Windows::Foundation::IAsyncAction *,Windows::Foundation::IAsyncActionCompletedHandler *);
};

struct BiasHelper<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailFolder *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Email::EmailFolder *>,1>
{
	static AutoStubBias<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailFolder *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Email::EmailFolder *> > CreateBias(IRpcOptions *,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailFolder *> *,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Email::EmailFolder *> *);
};

struct BiasHelper<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessage *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Email::EmailMessage *>,1>
{
	static AutoStubBias<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessage *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Email::EmailMessage *> > CreateBias(IRpcOptions *,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessage *> *,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Email::EmailMessage *> *);
};

struct BiasHelper<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,1>
{
	static AutoStubBias<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool> > CreateBias(IRpcOptions *,Windows::Foundation::IAsyncOperation<bool> *,Windows::Foundation::IAsyncOperationCompletedHandler<bool> *);
};

class ChangeTrackBase
{
protected:
	long _StartOrReset(int);
public:
	long AcceptChangesThrough(unsigned __int64);
	long get_IsTracking(unsigned char *);
};

class DataProviderConnectionBase
{
protected:
	long Start();
	virtual ~DataProviderConnectionBase();
};

struct DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequestEventArgs,EmailMailboxDeleteFolderRequestEventArgsImpl,EmailMailboxDeleteFolderRequestImpl>
{
	long Initialize(Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs *,UdmSessionHandle *,unsigned short const *);
};

struct DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequestEventArgs,EmailMailboxDownloadMessageRequestEventArgsImpl,EmailMailboxDownloadMessageRequestImpl>
{
	long Initialize(Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs *,UdmSessionHandle *,unsigned short const *);
};

struct DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequestEventArgs,EmailMailboxEmptyFolderRequestEventArgsImpl,EmailMailboxEmptyFolderRequestImpl>
{
	long Initialize(Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs *,UdmSessionHandle *,unsigned short const *);
};

struct DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequestEventArgs,EmailMailboxForwardMeetingRequestEventArgsImpl,EmailMailboxForwardMeetingRequestImpl>
{
	long Initialize(Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs *,UdmSessionHandle *,unsigned short const *);
};

struct DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequestEventArgs,EmailMailboxGetAutoReplySettingsRequestEventArgsImpl,EmailMailboxGetAutoReplySettingsRequestImpl>
{
	long Initialize(Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs *,UdmSessionHandle *,unsigned short const *);
};

struct DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequestEventArgs,EmailMailboxMoveFolderRequestEventArgsImpl,EmailMailboxMoveFolderRequestImpl>
{
	long Initialize(Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs *,UdmSessionHandle *,unsigned short const *);
};

struct DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequestEventArgs,EmailMailboxProposeNewTimeForMeetingRequestEventArgsImpl,EmailMailboxProposeNewTimeForMeetingRequestImpl>
{
	long Initialize(Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs *,UdmSessionHandle *,unsigned short const *);
};

struct DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequestEventArgs,EmailMailboxResolveRecipientsRequestEventArgsImpl,EmailMailboxResolveRecipientsRequestImpl>
{
	long Initialize(Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs *,UdmSessionHandle *,unsigned short const *);
};

struct DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequestEventArgs,EmailMailboxServerSearchReadBatchRequestEventArgsImpl,EmailMailboxServerSearchReadBatchRequestImpl>
{
	long Initialize(Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs *,UdmSessionHandle *,unsigned short const *);
};

struct DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequestEventArgs,EmailMailboxSetAutoReplySettingsRequestEventArgsImpl,EmailMailboxSetAutoReplySettingsRequestImpl>
{
	long Initialize(Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs *,UdmSessionHandle *,unsigned short const *);
};

struct DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequestEventArgs,EmailMailboxSyncManagerSyncRequestEventArgsImpl,EmailMailboxSyncManagerSyncRequestImpl>
{
	long Initialize(Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs *,UdmSessionHandle *,unsigned short const *);
};

struct DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequestEventArgs,EmailMailboxUpdateMeetingResponseRequestEventArgsImpl,EmailMailboxUpdateMeetingResponseRequestImpl>
{
	long Initialize(Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs *,UdmSessionHandle *,unsigned short const *);
};

struct DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequestEventArgs,EmailMailboxValidateCertificatesRequestEventArgsImpl,EmailMailboxValidateCertificatesRequestImpl>
{
	long Initialize(Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs *,UdmSessionHandle *,unsigned short const *);
};

struct EmailAttachmentFactoryImpl
{
	virtual long ActivateInstance(IInspectable * *);
	virtual long Create(HSTRING__ *,Windows::Storage::Streams::IRandomAccessStreamReference *,HSTRING__ *,Windows::ApplicationModel::Email::IEmailAttachment * *);
	virtual long Create(HSTRING__ *,Windows::Storage::Streams::IRandomAccessStreamReference *,Windows::ApplicationModel::Email::IEmailAttachment * *);
};

struct EmailAttachmentImpl
{
	EmailAttachmentImpl();
	long RuntimeClassInitialize(HSTRING__ *,HSTRING__ *,Windows::Storage::Streams::IRandomAccessStreamReference *);
	long RuntimeClassInitialize(UdmSessionHandle *,UdmObjectId const &,UdmEmailAttachment const &);
	long ToUdmAttachment(UdmObjectId const &,UdmEmailAttachment *);
	static TrustLevel InternalGetTrustLevel();
	static unsigned short const * InternalGetRuntimeClassName();
	virtual UdmItemType GetType();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_ContentId(HSTRING__ * *);
	virtual long get_ContentLocation(HSTRING__ * *);
	virtual long get_Data(Windows::Storage::Streams::IRandomAccessStreamReference * *);
	virtual long get_DownloadState(Windows::ApplicationModel::Email::EmailAttachmentDownloadState *);
	virtual long get_EstimatedDownloadSizeInBytes(unsigned __int64 *);
	virtual long get_FileName(HSTRING__ * *);
	virtual long get_Id(HSTRING__ * *);
	virtual long get_IsFromBaseMessage(unsigned char *);
	virtual long get_IsInline(unsigned char *);
	virtual long get_MimeType(HSTRING__ * *);
	virtual long put_ContentId(HSTRING__ *);
	virtual long put_ContentLocation(HSTRING__ *);
	virtual long put_Data(Windows::Storage::Streams::IRandomAccessStreamReference *);
	virtual long put_DownloadState(Windows::ApplicationModel::Email::EmailAttachmentDownloadState);
	virtual long put_EstimatedDownloadSizeInBytes(unsigned __int64);
	virtual long put_FileName(HSTRING__ *);
	virtual long put_IsInline(unsigned char);
	virtual long put_MimeType(HSTRING__ *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void * PeekAt(_GUID const &);
};

struct EmailAutoReplyImpl
{
	EmailAutoReplyImpl();
	long GetUdmEmailAutoReply(UdmEmailAutoReply *);
	long RuntimeClassInitialize(UdmEmailAutoReply const &);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Serialize(Windows::Foundation::Collections::IPropertySet * *);
	virtual long get_IsEnabled(unsigned char *);
	virtual long get_Response(HSTRING__ * *);
	virtual long put_IsEnabled(unsigned char);
	virtual long put_Response(HSTRING__ *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailAutoReplySettingsImpl
{
	EmailAutoReplySettingsImpl();
	long RuntimeClassInitialize(UdmEmailAutoReplySettings const &);
	long RuntimeClassInitialize(Windows::Foundation::Collections::IPropertySet *);
	long SetAutoReply(EmailSessionHandle *,UdmObjectId,int *);
	static TrustLevel InternalGetTrustLevel();
	static unsigned short const * InternalGetRuntimeClassName();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Serialize(Windows::Foundation::Collections::IPropertySet * *);
	virtual long get_EndTime(Windows::Foundation::IReference<Windows::Foundation::DateTime> * *);
	virtual long get_InternalReply(Windows::ApplicationModel::Email::IEmailMailboxAutoReply * *);
	virtual long get_IsEnabled(unsigned char *);
	virtual long get_KnownExternalReply(Windows::ApplicationModel::Email::IEmailMailboxAutoReply * *);
	virtual long get_ResponseKind(Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind *);
	virtual long get_StartTime(Windows::Foundation::IReference<Windows::Foundation::DateTime> * *);
	virtual long get_UnknownExternalReply(Windows::ApplicationModel::Email::IEmailMailboxAutoReply * *);
	virtual long put_EndTime(Windows::Foundation::IReference<Windows::Foundation::DateTime> *);
	virtual long put_IsEnabled(unsigned char);
	virtual long put_ResponseKind(Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind);
	virtual long put_StartTime(Windows::Foundation::IReference<Windows::Foundation::DateTime> *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void * PeekAt(_GUID const &);
};

struct EmailConversationBatchImpl
{
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Conversations(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailConversation *> * *);
	virtual long get_Status(Windows::ApplicationModel::Email::EmailBatchStatus *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailConversationImpl
{
	EmailConversationImpl();
	long RuntimeClassInitialize(EmailSessionHandle *,UdmFetchObjectPropsResult *);
	virtual UdmItemType GetType();
	virtual long FindMessagesAsync(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMessage *> *> * *);
	virtual long FindMessagesWithCountAsync(unsigned int,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMessage *> *> * *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_FlagState(Windows::ApplicationModel::Email::EmailFlagState *);
	virtual long get_HasAttachment(unsigned char *);
	virtual long get_Id(HSTRING__ * *);
	virtual long get_Importance(Windows::ApplicationModel::Email::EmailImportance *);
	virtual long get_LastEmailResponseKind(Windows::ApplicationModel::Email::EmailMessageResponseKind *);
	virtual long get_LatestSender(Windows::ApplicationModel::Email::IEmailRecipient * *);
	virtual long get_MailboxId(HSTRING__ * *);
	virtual long get_MessageCount(unsigned int *);
	virtual long get_MostRecentMessageId(HSTRING__ * *);
	virtual long get_MostRecentMessageTime(Windows::Foundation::DateTime *);
	virtual long get_Preview(HSTRING__ * *);
	virtual long get_Subject(HSTRING__ * *);
	virtual long get_UnreadMessageCount(unsigned int *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class EmailConversationReaderImpl
{
	virtual long CreateItemFor(UdmFetchObjectPropsResult *,IInspectable * *);
	virtual long StartEnumeration(__MIDL_UserDataModelService_0002 * *);
public:
	EmailConversationReaderImpl();
	long RuntimeClassInitialize(EmailSessionHandle *,int,UdmObjectId,Windows::ApplicationModel::Email::IEmailQueryOptions *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ReadBatchAsync(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailConversationBatch *> * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailDataProviderBackgroundDetailsFactory
{
	virtual long CreateEventDetailsInstance(unsigned long,unsigned char *,IUnknown *,_GUID const &,void * *);
	virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
};

struct EmailDataProviderConnectionImpl
{
	EmailDataProviderConnectionImpl();
	long OnCreateFolderRequested(Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs *);
	long OnDeleteFolderRequested(Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs *);
	long OnDownloadAttachmentRequested(Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs *);
	long OnDownloadMessageRequested(Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs *);
	long OnEmptyFolderRequested(Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs *);
	long OnForwardMeetingRequested(Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs *);
	long OnGetAutoReplySettingsRequested(Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs *);
	long OnMailboxSyncRequested(Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs *);
	long OnMoveFolderRequested(Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs *);
	long OnProposeNewTimeForMeetingRequested(Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs *);
	long OnResolveRecipientsRequested(Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs *);
	long OnServerSearchReadBatchRequested(Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs *);
	long OnSetAutoReplySettingsRequested(Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs *);
	long OnUpdateMeetingResponseRequested(Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs *);
	long OnValidateCertificatesRequested(Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs *);
	long RuntimeClassInitialize(HSTRING__ *,Windows::ApplicationModel::AppService::IAppServiceConnection *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long InvokeImpl(Windows::ApplicationModel::AppService::IAppServiceRequestReceivedEventArgs *,unsigned int);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Start();
	virtual long add_CreateFolderRequested(Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequestEventArgs *> *,EventRegistrationToken *);
	virtual long add_DeleteFolderRequested(Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequestEventArgs *> *,EventRegistrationToken *);
	virtual long add_DownloadAttachmentRequested(Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequestEventArgs *> *,EventRegistrationToken *);
	virtual long add_DownloadMessageRequested(Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequestEventArgs *> *,EventRegistrationToken *);
	virtual long add_EmptyFolderRequested(Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequestEventArgs *> *,EventRegistrationToken *);
	virtual long add_ForwardMeetingRequested(Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequestEventArgs *> *,EventRegistrationToken *);
	virtual long add_GetAutoReplySettingsRequested(Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequestEventArgs *> *,EventRegistrationToken *);
	virtual long add_MailboxSyncRequested(Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequestEventArgs *> *,EventRegistrationToken *);
	virtual long add_MoveFolderRequested(Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequestEventArgs *> *,EventRegistrationToken *);
	virtual long add_ProposeNewTimeForMeetingRequested(Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequestEventArgs *> *,EventRegistrationToken *);
	virtual long add_ResolveRecipientsRequested(Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequestEventArgs *> *,EventRegistrationToken *);
	virtual long add_ServerSearchReadBatchRequested(Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequestEventArgs *> *,EventRegistrationToken *);
	virtual long add_SetAutoReplySettingsRequested(Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequestEventArgs *> *,EventRegistrationToken *);
	virtual long add_UpdateMeetingResponseRequested(Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequestEventArgs *> *,EventRegistrationToken *);
	virtual long add_ValidateCertificatesRequested(Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequestEventArgs *> *,EventRegistrationToken *);
	virtual long remove_CreateFolderRequested(EventRegistrationToken);
	virtual long remove_DeleteFolderRequested(EventRegistrationToken);
	virtual long remove_DownloadAttachmentRequested(EventRegistrationToken);
	virtual long remove_DownloadMessageRequested(EventRegistrationToken);
	virtual long remove_EmptyFolderRequested(EventRegistrationToken);
	virtual long remove_ForwardMeetingRequested(EventRegistrationToken);
	virtual long remove_GetAutoReplySettingsRequested(EventRegistrationToken);
	virtual long remove_MailboxSyncRequested(EventRegistrationToken);
	virtual long remove_MoveFolderRequested(EventRegistrationToken);
	virtual long remove_ProposeNewTimeForMeetingRequested(EventRegistrationToken);
	virtual long remove_ResolveRecipientsRequested(EventRegistrationToken);
	virtual long remove_ServerSearchReadBatchRequested(EventRegistrationToken);
	virtual long remove_SetAutoReplySettingsRequested(EventRegistrationToken);
	virtual long remove_UpdateMeetingResponseRequested(EventRegistrationToken);
	virtual long remove_ValidateCertificatesRequested(EventRegistrationToken);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void LogError(unsigned short const *,unsigned int,long);
	virtual void LogMissingOpKindError(unsigned short const *);
	virtual ~EmailDataProviderConnectionImpl();
};

struct EmailDataProviderTriggerDetailsImpl
{
	long RuntimeClassInitialize(unsigned long,unsigned char *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Connection(Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailFolderImpl
{
	EmailFolderImpl();
	long RuntimeClassInitialize(EmailSessionHandle *,UdmObjectId const &);
	long RuntimeClassInitialize(EmailSessionHandle *,int,UdmFetchObjectPropsResult *);
	virtual UdmItemType GetType();
	virtual long CreateFolderAsync(HSTRING__ *,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailFolder *> * *);
	virtual long DeleteAsync(Windows::Foundation::IAsyncAction * *);
	virtual long FindChildFoldersAsync(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailFolder *> *> * *);
	virtual long GetConversationReader(Windows::ApplicationModel::Email::IEmailConversationReader * *);
	virtual long GetConversationReaderWithOptions(Windows::ApplicationModel::Email::IEmailQueryOptions *,Windows::ApplicationModel::Email::IEmailConversationReader * *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetMessageAsync(HSTRING__ *,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessage *> * *);
	virtual long GetMessageCountsAsync(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailItemCounts *> * *);
	virtual long GetMessageReader(Windows::ApplicationModel::Email::IEmailMessageReader * *);
	virtual long GetMessageReaderWithOptions(Windows::ApplicationModel::Email::IEmailQueryOptions *,Windows::ApplicationModel::Email::IEmailMessageReader * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SaveMessageAsync(Windows::ApplicationModel::Email::IEmailMessage *,Windows::Foundation::IAsyncAction * *);
	virtual long TryMoveAsync(Windows::ApplicationModel::Email::IEmailFolder *,Windows::Foundation::IAsyncOperation<bool> * *);
	virtual long TryMoveWithNewNameAsync(Windows::ApplicationModel::Email::IEmailFolder *,HSTRING__ *,Windows::Foundation::IAsyncOperation<bool> * *);
	virtual long TrySaveAsync(Windows::Foundation::IAsyncOperation<bool> * *);
	virtual long get_DisplayName(HSTRING__ * *);
	virtual long get_Id(HSTRING__ * *);
	virtual long get_IsSyncEnabled(unsigned char *);
	virtual long get_Kind(Windows::ApplicationModel::Email::EmailSpecialFolderKind *);
	virtual long get_LastSuccessfulSyncTime(Windows::Foundation::DateTime *);
	virtual long get_MailboxId(HSTRING__ * *);
	virtual long get_ParentFolderId(HSTRING__ * *);
	virtual long get_RemoteId(HSTRING__ * *);
	virtual long put_DisplayName(HSTRING__ *);
	virtual long put_IsSyncEnabled(unsigned char);
	virtual long put_LastSuccessfulSyncTime(Windows::Foundation::DateTime);
	virtual long put_RemoteId(HSTRING__ *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void * PeekAt(_GUID const &);
};

class EmailFolderQuery
{
	virtual long CreateItemFor(UdmFetchObjectPropsResult *,IInspectable * *);
	virtual long StartEnumeration(__MIDL_UserDataModelService_0002 * *);
public:
	long GetFoldersAsync(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailFolder *> *> * *);
};

class EmailImplBase
{
protected:
	long DeleteAsyncImpl();
	virtual long CleanupExtraData(UdmItemUpdate *);
	virtual long FillExtraData(UdmItemUpdate *);
	virtual long HandleModifyResult(UdmOperationType,UdmOperationResult *);
	virtual ~EmailImplBase();
public:
	long SaveAsyncImpl(UdmOperationType);
	virtual UdmObjectId GetSelfId();
	virtual long AddProperties(UdmPropertyValue * *,unsigned long *);
};

struct EmailIrmInfoFactoryImpl
{
	virtual long ActivateInstance(IInspectable * *);
	virtual long Create(Windows::Foundation::DateTime,Windows::ApplicationModel::Email::IEmailIrmTemplate *,Windows::ApplicationModel::Email::IEmailIrmInfo * *);
};

struct EmailIrmInfoImpl
{
	EmailIrmInfoImpl();
	long RuntimeClassInitialize(Windows::Foundation::DateTime,Windows::ApplicationModel::Email::IEmailIrmTemplate *,unsigned int);
	static TrustLevel InternalGetTrustLevel();
	static unsigned short const * InternalGetRuntimeClassName();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_CanEdit(unsigned char *);
	virtual long get_CanExtractData(unsigned char *);
	virtual long get_CanForward(unsigned char *);
	virtual long get_CanModifyRecipientsOnResponse(unsigned char *);
	virtual long get_CanPrintData(unsigned char *);
	virtual long get_CanRemoveIrmOnResponse(unsigned char *);
	virtual long get_CanReply(unsigned char *);
	virtual long get_CanReplyAll(unsigned char *);
	virtual long get_ExpirationDate(Windows::Foundation::DateTime *);
	virtual long get_IsIrmOriginator(unsigned char *);
	virtual long get_IsProgramaticAccessAllowed(unsigned char *);
	virtual long get_Template(Windows::ApplicationModel::Email::IEmailIrmTemplate * *);
	virtual long put_CanEdit(unsigned char);
	virtual long put_CanExtractData(unsigned char);
	virtual long put_CanForward(unsigned char);
	virtual long put_CanModifyRecipientsOnResponse(unsigned char);
	virtual long put_CanPrintData(unsigned char);
	virtual long put_CanRemoveIrmOnResponse(unsigned char);
	virtual long put_CanReply(unsigned char);
	virtual long put_CanReplyAll(unsigned char);
	virtual long put_ExpirationDate(Windows::Foundation::DateTime);
	virtual long put_IsIrmOriginator(unsigned char);
	virtual long put_IsProgramaticAccessAllowed(unsigned char);
	virtual long put_Template(Windows::ApplicationModel::Email::IEmailIrmTemplate *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailIrmTemplateFactoryImpl
{
	virtual long ActivateInstance(IInspectable * *);
	virtual long Create(HSTRING__ *,HSTRING__ *,HSTRING__ *,Windows::ApplicationModel::Email::IEmailIrmTemplate * *);
};

struct EmailIrmTemplateImpl
{
	EmailIrmTemplateImpl();
	long RuntimeClassInitialize(unsigned short const *,unsigned short const *,unsigned short const *);
	static TrustLevel InternalGetTrustLevel();
	static unsigned short const * InternalGetRuntimeClassName();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Description(HSTRING__ * *);
	virtual long get_Id(HSTRING__ * *);
	virtual long get_Name(HSTRING__ * *);
	virtual long put_Description(HSTRING__ *);
	virtual long put_Id(HSTRING__ *);
	virtual long put_Name(HSTRING__ *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailItemCountsImpl
{
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Flagged(unsigned int *);
	virtual long get_Important(unsigned int *);
	virtual long get_Total(unsigned int *);
	virtual long get_Unread(unsigned int *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailMailboxActionImpl
{
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_ChangeNumber(unsigned __int64 *);
	virtual long get_Kind(Windows::ApplicationModel::Email::EmailMailboxActionKind *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailMailboxCapabilitiesImpl
{
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_CanCreateFolder(unsigned char *);
	virtual long get_CanDeleteFolder(unsigned char *);
	virtual long get_CanEmptyFolder(unsigned char *);
	virtual long get_CanForwardMeetings(unsigned char *);
	virtual long get_CanGetAndSetExternalAutoReplies(unsigned char *);
	virtual long get_CanGetAndSetInternalAutoReplies(unsigned char *);
	virtual long get_CanMoveFolder(unsigned char *);
	virtual long get_CanProposeNewTimeForMeetings(unsigned char *);
	virtual long get_CanResolveRecipients(unsigned char *);
	virtual long get_CanServerSearchFolders(unsigned char *);
	virtual long get_CanServerSearchMailbox(unsigned char *);
	virtual long get_CanSmartSend(unsigned char *);
	virtual long get_CanUpdateMeetingResponses(unsigned char *);
	virtual long get_CanValidateCertificates(unsigned char *);
	virtual long put_CanCreateFolder(unsigned char);
	virtual long put_CanDeleteFolder(unsigned char);
	virtual long put_CanEmptyFolder(unsigned char);
	virtual long put_CanForwardMeetings(unsigned char);
	virtual long put_CanGetAndSetExternalAutoReplies(unsigned char);
	virtual long put_CanGetAndSetInternalAutoReplies(unsigned char);
	virtual long put_CanMoveFolder(unsigned char);
	virtual long put_CanProposeNewTimeForMeetings(unsigned char);
	virtual long put_CanResolveRecipients(unsigned char);
	virtual long put_CanServerSearchFolders(unsigned char);
	virtual long put_CanServerSearchMailbox(unsigned char);
	virtual long put_CanSmartSend(unsigned char);
	virtual long put_CanUpdateMeetingResponses(unsigned char);
	virtual long put_CanValidateCertificates(unsigned char);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class EmailMailboxChangeImpl
{
protected:
	long _SetActions(unsigned __int64,unsigned long,unsigned __int64 *);
public:
	long RuntimeClassInitialize(EmailSessionHandle *,unsigned __int64,UdmFetchObjectPropsResult *,bool);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_ChangeType(Windows::ApplicationModel::Email::EmailMailboxChangeType *);
	virtual long get_Folder(Windows::ApplicationModel::Email::IEmailFolder * *);
	virtual long get_MailboxActions(Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailMailboxAction *> * *);
	virtual long get_Message(Windows::ApplicationModel::Email::IEmailMessage * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void * PeekAt(_GUID const &);
};

class EmailMailboxChangeReaderImpl
{
protected:
	long ReadBatchImpl(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMailboxChange *> * *);
	virtual long CreateItemFor(UdmFetchObjectPropsResult *,IInspectable * *);
	virtual long StartEnumeration(__MIDL_UserDataModelService_0002 * *);
public:
	long RuntimeClassInitialize(EmailMailboxChangeTrackerImpl *,UdmObjectId,HSTRING__ *,EmailSessionHandle *,bool);
	virtual long AcceptChanges();
	virtual long AcceptChangesThrough(Windows::ApplicationModel::Email::IEmailMailboxChange *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ReadBatchAsync(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMailboxChange *> *> * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailMailboxChangeTrackerImpl
{
	EmailMailboxChangeTrackerImpl();
	long AcceptChangesThrough(Windows::ApplicationModel::Email::IEmailMailboxChange *);
	long RuntimeClassInitialize(EmailSessionHandle *,HSTRING__ *,UdmObjectId,bool);
	virtual long Enable();
	virtual long GetChangeReader(Windows::ApplicationModel::Email::IEmailMailboxChangeReader * *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reset();
	virtual long get_IsTracking(unsigned char *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailMailboxChangedDeferralImpl
{
	virtual long Complete();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailMailboxChangedEventArgsImpl
{
	virtual long GetDeferral(Windows::ApplicationModel::Email::IEmailMailboxChangedDeferral * *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	void WaitForAllOutstandingDeferrals();
};

struct EmailMailboxCreateFolderRequestEventArgsImpl
{
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Request(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequest * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailMailboxCreateFolderRequestImpl
{
	long RuntimeClassInitialize(UdmSessionHandle *,unsigned short const *,Windows::ApplicationModel::AppService::IAppServiceRequest *);
	static long GetResults(Windows::Foundation::Collections::IPropertySet *,UdmObjectId,Windows::ApplicationModel::Email::EmailMailboxCreateFolderStatus *,UdmObjectId *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ReportCompletedAsync(Windows::ApplicationModel::Email::IEmailFolder *,Windows::Foundation::IAsyncAction * *);
	virtual long ReportFailedAsync(Windows::ApplicationModel::Email::EmailMailboxCreateFolderStatus,Windows::Foundation::IAsyncAction * *);
	virtual long get_EmailMailboxId(HSTRING__ * *);
	virtual long get_Name(HSTRING__ * *);
	virtual long get_ParentFolderId(HSTRING__ * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailMailboxCreateFolderResultImpl
{
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Folder(Windows::ApplicationModel::Email::IEmailFolder * *);
	virtual long get_Status(Windows::ApplicationModel::Email::EmailMailboxCreateFolderStatus *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailMailboxDeleteFolderRequestEventArgsImpl
{
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Request(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequest * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailMailboxDeleteFolderRequestImpl
{
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ReportCompletedAsync(Windows::Foundation::IAsyncAction * *);
	virtual long ReportFailedAsync(Windows::ApplicationModel::Email::EmailMailboxDeleteFolderStatus,Windows::Foundation::IAsyncAction * *);
	virtual long get_EmailFolderId(HSTRING__ * *);
	virtual long get_EmailMailboxId(HSTRING__ * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailMailboxDownloadAttachmentRequestEventArgsImpl
{
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Request(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequest * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailMailboxDownloadAttachmentRequestImpl
{
	long RuntimeClassInitialize(UdmSessionHandle *,unsigned short const *,Windows::ApplicationModel::AppService::IAppServiceRequest *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ReportCompletedAsync(Windows::Foundation::IAsyncAction * *);
	virtual long ReportFailedAsync(Windows::Foundation::IAsyncAction * *);
	virtual long get_EmailAttachmentId(HSTRING__ * *);
	virtual long get_EmailMailboxId(HSTRING__ * *);
	virtual long get_EmailMessageId(HSTRING__ * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailMailboxDownloadMessageRequestEventArgsImpl
{
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Request(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequest * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailMailboxDownloadMessageRequestImpl
{
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ReportCompletedAsync(Windows::Foundation::IAsyncAction * *);
	virtual long ReportFailedAsync(Windows::Foundation::IAsyncAction * *);
	virtual long get_EmailMailboxId(HSTRING__ * *);
	virtual long get_EmailMessageId(HSTRING__ * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailMailboxEmptyFolderRequestEventArgsImpl
{
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Request(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequest * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailMailboxEmptyFolderRequestImpl
{
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ReportCompletedAsync(Windows::Foundation::IAsyncAction * *);
	virtual long ReportFailedAsync(Windows::ApplicationModel::Email::EmailMailboxEmptyFolderStatus,Windows::Foundation::IAsyncAction * *);
	virtual long get_EmailFolderId(HSTRING__ * *);
	virtual long get_EmailMailboxId(HSTRING__ * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailMailboxForwardMeetingRequestEventArgsImpl
{
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Request(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequest * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailMailboxForwardMeetingRequestImpl
{
	long RuntimeClassInitialize(UdmSessionHandle *,unsigned short const *,Windows::ApplicationModel::AppService::IAppServiceRequest *);
	static long SendRequest(EmailSessionHandle *,unsigned short const *,UdmObjectId,UdmObjectId,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailRecipient *> *,HSTRING__ *,HSTRING__ *,HSTRING__ *,Windows::ApplicationModel::Email::EmailMessageBodyKind,unsigned char *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ReportCompletedAsync(Windows::Foundation::IAsyncAction * *);
	virtual long ReportFailedAsync(Windows::Foundation::IAsyncAction * *);
	virtual long get_Comment(HSTRING__ * *);
	virtual long get_EmailMailboxId(HSTRING__ * *);
	virtual long get_EmailMessageId(HSTRING__ * *);
	virtual long get_ForwardHeader(HSTRING__ * *);
	virtual long get_ForwardHeaderType(Windows::ApplicationModel::Email::EmailMessageBodyKind *);
	virtual long get_Recipients(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailRecipient *> * *);
	virtual long get_Subject(HSTRING__ * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailMailboxGetAutoReplySettingsRequestEventArgsImpl
{
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Request(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequest * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailMailboxGetAutoReplySettingsRequestImpl
{
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ReportCompletedAsync(Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings *,Windows::Foundation::IAsyncAction * *);
	virtual long ReportFailedAsync(Windows::Foundation::IAsyncAction * *);
	virtual long get_EmailMailboxId(HSTRING__ * *);
	virtual long get_RequestedFormat(Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class EmailMailboxImpl
{
	long ValidateAndGetMeetingProps(Windows::ApplicationModel::Email::IEmailMessage *,UdmObjectId *,Windows::ApplicationModel::Email::IEmailMeetingInfo * *);
	long _LoadEmailAliases();
	long _SaveEmailAliases();
	unsigned short const * GetPackageFamilyName();
public:
	EmailMailboxImpl();
	long RuntimeClassInitialize(EmailSessionHandle *,UdmFetchObjectPropsResult *);
	long RuntimeClassInitialize(EmailSessionHandle *,UdmObjectId const &);
	virtual UdmItemType GetType();
	virtual long ChangeMessageFlagStateAsync(HSTRING__ *,Windows::ApplicationModel::Email::EmailFlagState,Windows::Foundation::IAsyncAction * *);
	virtual long CreateResponseMessageAsync(HSTRING__ *,Windows::ApplicationModel::Email::EmailMessageResponseKind,HSTRING__ *,Windows::ApplicationModel::Email::EmailMessageBodyKind,HSTRING__ *,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessage *> * *);
	virtual long DeleteAsync(Windows::Foundation::IAsyncAction * *);
	virtual long DeleteMessageAsync(HSTRING__ *,Windows::Foundation::IAsyncAction * *);
	virtual long DownloadAttachmentAsync(HSTRING__ *,Windows::Foundation::IAsyncAction * *);
	virtual long DownloadMessageAsync(HSTRING__ *,Windows::Foundation::IAsyncAction * *);
	virtual long GetChangeTracker(HSTRING__ *,Windows::ApplicationModel::Email::IEmailMailboxChangeTracker * *);
	virtual long GetConversationAsync(HSTRING__ *,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailConversation *> * *);
	virtual long GetConversationReader(Windows::ApplicationModel::Email::IEmailConversationReader * *);
	virtual long GetConversationReaderWithOptions(Windows::ApplicationModel::Email::IEmailQueryOptions *,Windows::ApplicationModel::Email::IEmailConversationReader * *);
	virtual long GetFolderAsync(HSTRING__ *,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailFolder *> * *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetMessageAsync(HSTRING__ *,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessage *> * *);
	virtual long GetMessageReader(Windows::ApplicationModel::Email::IEmailMessageReader * *);
	virtual long GetMessageReaderWithOptions(Windows::ApplicationModel::Email::IEmailQueryOptions *,Windows::ApplicationModel::Email::IEmailMessageReader * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetSpecialFolderAsync(Windows::ApplicationModel::Email::EmailSpecialFolderKind,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailFolder *> * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long MarkFolderAsSeenAsync(HSTRING__ *,Windows::Foundation::IAsyncAction * *);
	virtual long MarkFolderSyncEnabledAsync(HSTRING__ *,unsigned char,Windows::Foundation::IAsyncAction * *);
	virtual long MarkMessageAsSeenAsync(HSTRING__ *,Windows::Foundation::IAsyncAction * *);
	virtual long MarkMessageReadAsync(HSTRING__ *,unsigned char,Windows::Foundation::IAsyncAction * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RegisterSyncManagerAsync(Windows::Foundation::IAsyncAction * *);
	virtual long ResolveRecipientsAsync(Windows::Foundation::Collections::IIterable<HSTRING__ *> *,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailRecipientResolutionResult *> *> * *);
	virtual long SaveAsync(Windows::Foundation::IAsyncAction * *);
	virtual long SaveDraftAsync(Windows::ApplicationModel::Email::IEmailMessage *,Windows::Foundation::IAsyncAction * *);
	virtual long SendMessageAsync(Windows::ApplicationModel::Email::IEmailMessage *,Windows::Foundation::IAsyncAction * *);
	virtual long SmartSendMessageAsync(Windows::ApplicationModel::Email::IEmailMessage *,unsigned char,Windows::Foundation::IAsyncAction * *);
	virtual long TryCreateFolderAsync(HSTRING__ *,HSTRING__ *,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailboxCreateFolderResult *> * *);
	virtual long TryDeleteFolderAsync(HSTRING__ *,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailboxDeleteFolderStatus> * *);
	virtual long TryEmptyFolderAsync(HSTRING__ *,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailboxEmptyFolderStatus> * *);
	virtual long TryForwardMeetingAsync(Windows::ApplicationModel::Email::IEmailMessage *,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailRecipient *> *,HSTRING__ *,Windows::ApplicationModel::Email::EmailMessageBodyKind,HSTRING__ *,HSTRING__ *,Windows::Foundation::IAsyncOperation<bool> * *);
	virtual long TryGetAutoReplySettingsAsync(Windows::ApplicationModel::Email::EmailMailboxAutoReplyMessageResponseKind,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailboxAutoReplySettings *> * *);
	virtual long TryMoveFolderAsync(HSTRING__ *,HSTRING__ *,Windows::Foundation::IAsyncOperation<bool> * *);
	virtual long TryMoveFolderWithNewNameAsync(HSTRING__ *,HSTRING__ *,HSTRING__ *,Windows::Foundation::IAsyncOperation<bool> * *);
	virtual long TryMoveMessageAsync(HSTRING__ *,HSTRING__ *,Windows::Foundation::IAsyncOperation<bool> * *);
	virtual long TryProposeNewTimeForMeetingAsync(Windows::ApplicationModel::Email::IEmailMessage *,Windows::Foundation::DateTime,Windows::Foundation::TimeSpan,HSTRING__ *,HSTRING__ *,Windows::Foundation::IAsyncOperation<bool> * *);
	virtual long TrySetAutoReplySettingsAsync(Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings *,Windows::Foundation::IAsyncOperation<bool> * *);
	virtual long TryUpdateMeetingResponseAsync(Windows::ApplicationModel::Email::IEmailMessage *,Windows::ApplicationModel::Email::EmailMeetingResponseType,HSTRING__ *,HSTRING__ *,unsigned char,Windows::Foundation::IAsyncOperation<bool> * *);
	virtual long ValidateCertificatesAsync(Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::Certificate *> *,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailCertificateValidationStatus> *> * *);
	virtual long add_MailboxChanged(Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::EmailMailbox *,Windows::ApplicationModel::Email::EmailMailboxChangedEventArgs *> *,EventRegistrationToken *);
	virtual long get_Capabilities(Windows::ApplicationModel::Email::IEmailMailboxCapabilities * *);
	virtual long get_ChangeTracker(Windows::ApplicationModel::Email::IEmailMailboxChangeTracker * *);
	virtual long get_DisplayName(HSTRING__ * *);
	virtual long get_Id(HSTRING__ * *);
	virtual long get_IsDataEncryptedUnderLock(unsigned char *);
	virtual long get_IsOwnedByCurrentApp(unsigned char *);
	virtual long get_LinkedMailboxId(HSTRING__ * *);
	virtual long get_MailAddress(HSTRING__ * *);
	virtual long get_MailAddressAliases(Windows::Foundation::Collections::IVector<HSTRING__ *> * *);
	virtual long get_NetworkAccountId(HSTRING__ * *);
	virtual long get_NetworkId(HSTRING__ * *);
	virtual long get_OtherAppReadAccess(Windows::ApplicationModel::Email::EmailMailboxOtherAppReadAccess *);
	virtual long get_OtherAppWriteAccess(Windows::ApplicationModel::Email::EmailMailboxOtherAppWriteAccess *);
	virtual long get_Policies(Windows::ApplicationModel::Email::IEmailMailboxPolicies * *);
	virtual long get_SourceDisplayName(HSTRING__ * *);
	virtual long get_SyncManager(Windows::ApplicationModel::Email::IEmailMailboxSyncManager * *);
	virtual long get_UserDataAccountId(HSTRING__ * *);
	virtual long put_DisplayName(HSTRING__ *);
	virtual long put_MailAddress(HSTRING__ *);
	virtual long put_OtherAppReadAccess(Windows::ApplicationModel::Email::EmailMailboxOtherAppReadAccess);
	virtual long put_OtherAppWriteAccess(Windows::ApplicationModel::Email::EmailMailboxOtherAppWriteAccess);
	virtual long remove_MailboxChanged(EventRegistrationToken);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailMailboxMoveFolderRequestEventArgsImpl
{
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Request(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequest * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailMailboxMoveFolderRequestImpl
{
	long RuntimeClassInitialize(UdmSessionHandle *,unsigned short const *,Windows::ApplicationModel::AppService::IAppServiceRequest *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ReportCompletedAsync(Windows::Foundation::IAsyncAction * *);
	virtual long ReportFailedAsync(Windows::Foundation::IAsyncAction * *);
	virtual long get_EmailFolderId(HSTRING__ * *);
	virtual long get_EmailMailboxId(HSTRING__ * *);
	virtual long get_NewFolderName(HSTRING__ * *);
	virtual long get_NewParentFolderId(HSTRING__ * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailMailboxPoliciesImpl
{
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_AllowSmimeSoftCertificates(unsigned char *);
	virtual long get_AllowedSmimeEncryptionAlgorithmNegotiation(Windows::ApplicationModel::Email::EmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation *);
	virtual long get_MustEncryptSmimeMessages(unsigned char *);
	virtual long get_MustSignSmimeMessages(unsigned char *);
	virtual long get_RequiredSmimeEncryptionAlgorithm(Windows::Foundation::IReference<Windows::ApplicationModel::Email::EmailMailboxSmimeEncryptionAlgorithm> * *);
	virtual long get_RequiredSmimeSigningAlgorithm(Windows::Foundation::IReference<Windows::ApplicationModel::Email::EmailMailboxSmimeSigningAlgorithm> * *);
	virtual long put_AllowSmimeSoftCertificates(unsigned char);
	virtual long put_AllowedSmimeEncryptionAlgorithmNegotiation(Windows::ApplicationModel::Email::EmailMailboxAllowedSmimeEncryptionAlgorithmNegotiation);
	virtual long put_MustEncryptSmimeMessages(unsigned char);
	virtual long put_MustSignSmimeMessages(unsigned char);
	virtual long put_RequiredSmimeEncryptionAlgorithm(Windows::Foundation::IReference<Windows::ApplicationModel::Email::EmailMailboxSmimeEncryptionAlgorithm> *);
	virtual long put_RequiredSmimeSigningAlgorithm(Windows::Foundation::IReference<Windows::ApplicationModel::Email::EmailMailboxSmimeSigningAlgorithm> *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailMailboxProposeNewTimeForMeetingRequestEventArgsImpl
{
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Request(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequest * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailMailboxProposeNewTimeForMeetingRequestImpl
{
	long RuntimeClassInitialize(UdmSessionHandle *,unsigned short const *,Windows::ApplicationModel::AppService::IAppServiceRequest *);
	static long SendRequest(EmailSessionHandle *,unsigned short const *,UdmObjectId,UdmObjectId,Windows::Foundation::DateTime,Windows::Foundation::TimeSpan,HSTRING__ *,HSTRING__ *,unsigned char *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ReportCompletedAsync(Windows::Foundation::IAsyncAction * *);
	virtual long ReportFailedAsync(Windows::Foundation::IAsyncAction * *);
	virtual long get_Comment(HSTRING__ * *);
	virtual long get_EmailMailboxId(HSTRING__ * *);
	virtual long get_EmailMessageId(HSTRING__ * *);
	virtual long get_NewDuration(Windows::Foundation::TimeSpan *);
	virtual long get_NewStartTime(Windows::Foundation::DateTime *);
	virtual long get_Subject(HSTRING__ * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class EmailMailboxQuery
{
	virtual long CreateItemFor(UdmFetchObjectPropsResult *,IInspectable * *);
	virtual long StartEnumeration(__MIDL_UserDataModelService_0002 * *);
public:
	long GetMailboxesAsync(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMailbox *> *> * *);
	virtual long GetCountAsync(Windows::Foundation::IAsyncOperation<unsigned int> * *);
};

struct EmailMailboxResolveRecipientsRequestEventArgsImpl
{
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Request(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequest * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailMailboxResolveRecipientsRequestImpl
{
	static long GetResults(Windows::Foundation::Collections::IPropertySet *,unsigned int,Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailRecipientResolutionResult *> * *);
	static long SendRequest(EmailSessionHandle *,unsigned short const *,UdmObjectId,Windows::Foundation::Collections::Internal::AgileVector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0> *,Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailRecipientResolutionResult *> * *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ReportCompletedAsync(Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailRecipientResolutionResult *> *,Windows::Foundation::IAsyncAction * *);
	virtual long ReportFailedAsync(Windows::Foundation::IAsyncAction * *);
	virtual long get_EmailMailboxId(HSTRING__ * *);
	virtual long get_Recipients(Windows::Foundation::Collections::IVectorView<HSTRING__ *> * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailMailboxServerSearchReadBatchRequestEventArgsImpl
{
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Request(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequest * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailMailboxServerSearchReadBatchRequestImpl
{
	long RuntimeClassInitialize(UdmSessionHandle *,unsigned short const *,Windows::ApplicationModel::AppService::IAppServiceRequest *);
	static long SendRequest(Windows::ApplicationModel::AppService::IAppServiceConnection *,UdmSessionHandle *,unsigned short const *,UdmObjectId const &,UdmObjectId const &,unsigned int,ISerializableType *,unsigned int const &,Windows::ApplicationModel::Email::EmailBatchStatus *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ReportCompletedAsync(Windows::Foundation::IAsyncAction * *);
	virtual long ReportFailedAsync(Windows::ApplicationModel::Email::EmailBatchStatus,Windows::Foundation::IAsyncAction * *);
	virtual long SaveMessageAsync(Windows::ApplicationModel::Email::IEmailMessage *,Windows::Foundation::IAsyncAction * *);
	virtual long get_EmailFolderId(HSTRING__ * *);
	virtual long get_EmailMailboxId(HSTRING__ * *);
	virtual long get_Options(Windows::ApplicationModel::Email::IEmailQueryOptions * *);
	virtual long get_SessionId(HSTRING__ * *);
	virtual long get_SuggestedBatchSize(unsigned int *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailMailboxSetAutoReplySettingsRequestEventArgsImpl
{
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Request(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequest * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailMailboxSetAutoReplySettingsRequestImpl
{
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ReportCompletedAsync(Windows::Foundation::IAsyncAction * *);
	virtual long ReportFailedAsync(Windows::Foundation::IAsyncAction * *);
	virtual long get_AutoReplySettings(Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings * *);
	virtual long get_EmailMailboxId(HSTRING__ * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class EmailMailboxSyncManagerImpl
{
	virtual ~EmailMailboxSyncManagerImpl();
public:
	long RuntimeClassInitialize(UdmSessionHandle *,UdmObjectId const &,UdmPropertyBuffer *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SyncAsync(Windows::Foundation::IAsyncOperation<bool> * *);
	virtual long add_SyncStatusChanged(Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::EmailMailboxSyncManager *,IInspectable *> *,EventRegistrationToken *);
	virtual long get_LastAttemptedSyncTime(Windows::Foundation::DateTime *);
	virtual long get_LastSuccessfulSyncTime(Windows::Foundation::DateTime *);
	virtual long get_Status(Windows::ApplicationModel::Email::EmailMailboxSyncStatus *);
	virtual long put_LastAttemptedSyncTime(Windows::Foundation::DateTime);
	virtual long put_LastSuccessfulSyncTime(Windows::Foundation::DateTime);
	virtual long put_Status(Windows::ApplicationModel::Email::EmailMailboxSyncStatus);
	virtual long remove_SyncStatusChanged(EventRegistrationToken);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void * PeekAt(_GUID const &);
};

struct EmailMailboxSyncManagerSyncRequestEventArgsImpl
{
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Request(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequest * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailMailboxSyncManagerSyncRequestImpl
{
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ReportCompletedAsync(Windows::Foundation::IAsyncAction * *);
	virtual long ReportFailedAsync(Windows::Foundation::IAsyncAction * *);
	virtual long get_EmailMailboxId(HSTRING__ * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailMailboxUpdateMeetingResponseRequestEventArgsImpl
{
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Request(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequest * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailMailboxUpdateMeetingResponseRequestImpl
{
	long RuntimeClassInitialize(UdmSessionHandle *,unsigned short const *,Windows::ApplicationModel::AppService::IAppServiceRequest *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ReportCompletedAsync(Windows::Foundation::IAsyncAction * *);
	virtual long ReportFailedAsync(Windows::Foundation::IAsyncAction * *);
	virtual long get_Comment(HSTRING__ * *);
	virtual long get_EmailMailboxId(HSTRING__ * *);
	virtual long get_EmailMessageId(HSTRING__ * *);
	virtual long get_Response(Windows::ApplicationModel::Email::EmailMeetingResponseType *);
	virtual long get_SendUpdate(unsigned char *);
	virtual long get_Subject(HSTRING__ * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailMailboxValidateCertificatesRequestEventArgsImpl
{
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Request(Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequest * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailMailboxValidateCertificatesRequestImpl
{
	static long GetResults(Windows::Foundation::Collections::IPropertySet *,unsigned int,Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailCertificateValidationStatus> * *);
	static long SendRequest(EmailSessionHandle *,unsigned short const *,UdmObjectId,Windows::Foundation::Collections::Internal::AgileVector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,0> *,Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailCertificateValidationStatus> * *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ReportCompletedAsync(Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailCertificateValidationStatus> *,Windows::Foundation::IAsyncAction * *);
	virtual long ReportFailedAsync(Windows::Foundation::IAsyncAction * *);
	virtual long get_Certificates(Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate *> * *);
	virtual long get_EmailMailboxId(HSTRING__ * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailManagerForUserImpl
{
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RequestStoreAsync(Windows::ApplicationModel::Email::EmailStoreAccessType,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailStore *> * *);
	virtual long ShowComposeNewEmailAsync(Windows::ApplicationModel::Email::IEmailMessage *,Windows::Foundation::IAsyncAction * *);
	virtual long get_User(Windows::System::IUser * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

namespace EmailManagerImpl
{
	long RequestStore(Windows::ApplicationModel::Email::EmailStoreAccessType,unsigned long,Windows::System::IUser *,Windows::ApplicationModel::Email::IEmailStore * *);
	long ShowComposeNewEmailImpl(Windows::ApplicationModel::Email::IEmailMessage *,Windows::UI::Core::ICoreDispatcher *,Windows::System::IUser *);
};

struct EmailManagerStaticsImpl
{
	static TrustLevel InternalGetTrustLevelStatic();
	static unsigned short const * InternalGetRuntimeClassNameStatic();
	virtual long GetForUser(Windows::System::IUser *,Windows::ApplicationModel::Email::IEmailManagerForUser * *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RequestStoreAsync(Windows::ApplicationModel::Email::EmailStoreAccessType,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailStore *> * *);
	virtual long ShowComposeNewEmailAsync(Windows::ApplicationModel::Email::IEmailMessage *,Windows::Foundation::IAsyncAction * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailMeetingInfoImpl
{
	EmailMeetingInfoImpl();
	long RuntimeClassInitialize();
	long RuntimeClassInitialize(EmailSessionHandle *,UdmPropertyBuffer const *);
	long SaveToPropertyBuffer(UdmPropertyBuffer *);
	static TrustLevel InternalGetTrustLevel();
	static unsigned short const * InternalGetRuntimeClassName();
	virtual UdmItemType GetType();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_AllowNewTimeProposal(unsigned char *);
	virtual long get_AppointmentOriginalStartTime(Windows::Foundation::IReference<Windows::Foundation::DateTime> * *);
	virtual long get_AppointmentRoamingId(HSTRING__ * *);
	virtual long get_Duration(Windows::Foundation::TimeSpan *);
	virtual long get_IsAllDay(unsigned char *);
	virtual long get_IsReportedOutOfDateByServer(unsigned char *);
	virtual long get_IsResponseRequested(unsigned char *);
	virtual long get_Location(HSTRING__ * *);
	virtual long get_ProposedDuration(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> * *);
	virtual long get_ProposedStartTime(Windows::Foundation::IReference<Windows::Foundation::DateTime> * *);
	virtual long get_Recurrence(Windows::ApplicationModel::Appointments::IAppointmentRecurrence * *);
	virtual long get_RecurrenceStartTime(Windows::Foundation::IReference<Windows::Foundation::DateTime> * *);
	virtual long get_RemoteChangeNumber(unsigned __int64 *);
	virtual long get_StartTime(Windows::Foundation::DateTime *);
	virtual long put_AllowNewTimeProposal(unsigned char);
	virtual long put_AppointmentOriginalStartTime(Windows::Foundation::IReference<Windows::Foundation::DateTime> *);
	virtual long put_AppointmentRoamingId(HSTRING__ *);
	virtual long put_Duration(Windows::Foundation::TimeSpan);
	virtual long put_IsAllDay(unsigned char);
	virtual long put_IsResponseRequested(unsigned char);
	virtual long put_Location(HSTRING__ *);
	virtual long put_ProposedDuration(Windows::Foundation::IReference<Windows::Foundation::TimeSpan> *);
	virtual long put_ProposedStartTime(Windows::Foundation::IReference<Windows::Foundation::DateTime> *);
	virtual long put_Recurrence(Windows::ApplicationModel::Appointments::IAppointmentRecurrence *);
	virtual long put_RecurrenceStartTime(Windows::Foundation::IReference<Windows::Foundation::DateTime> *);
	virtual long put_RemoteChangeNumber(unsigned __int64);
	virtual long put_StartTime(Windows::Foundation::DateTime);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void * PeekAt(_GUID const &);
};

struct EmailMessageBatchImpl
{
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Messages(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMessage *> * *);
	virtual long get_Status(Windows::ApplicationModel::Email::EmailBatchStatus *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class EmailMessageImpl
{
	long InitializeBodyStreams(EmailSessionHandle *,UdmFetchObjectPropsResult *);
	long SaveReferencedObjects();
	long StringToWideStringRandomAccessStreamReference(HSTRING__ *,Windows::Storage::Streams::IRandomAccessStreamReference * *);
	long WideStringRandomAccessStreamReferenceToString(Windows::Storage::Streams::IRandomAccessStreamReference *,HSTRING__ * *);
protected:
	long FillAttachmentData(UdmItemUpdate *);
	long FillRecipientData(UdmItemUpdate *);
	long FillStreamProps(UdmItemUpdate *);
	virtual long CleanupExtraData(UdmItemUpdate *);
	virtual long FillExtraData(UdmItemUpdate *);
	virtual long HandleModifyResult(UdmOperationType,UdmOperationResult *);
public:
	EmailMessageImpl();
	long AttachToParent(EmailSessionHandle *,UdmObjectId const &);
	long RuntimeClassInitialize();
	long RuntimeClassInitialize(EmailSessionHandle *,int,UdmFetchObjectPropsResult *);
	long SaveAsDraftAsync(Windows::Foundation::IAsyncAction * *);
	long SaveAsync(Windows::Foundation::IAsyncAction * *);
	long SaveServerSearchMessageToFolderAsync(Windows::Foundation::IAsyncAction * *);
	long SendMessageAsync(unsigned char,Windows::Foundation::IAsyncAction * *);
	long get_FolderId(UdmObjectId *);
	static TrustLevel InternalGetTrustLevel();
	static unsigned short const * InternalGetRuntimeClassName();
	virtual UdmItemType GetType();
	virtual long GetBodyStream(Windows::ApplicationModel::Email::EmailMessageBodyKind,Windows::Storage::Streams::IRandomAccessStreamReference * *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetBodyStream(Windows::ApplicationModel::Email::EmailMessageBodyKind,Windows::Storage::Streams::IRandomAccessStreamReference *);
	virtual long get_AllowInternetImages(unsigned char *);
	virtual long get_Attachments(Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailAttachment *> * *);
	virtual long get_Bcc(Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailRecipient *> * *);
	virtual long get_Body(HSTRING__ * *);
	virtual long get_CC(Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailRecipient *> * *);
	virtual long get_ChangeNumber(unsigned __int64 *);
	virtual long get_ConversationId(HSTRING__ * *);
	virtual long get_DownloadState(Windows::ApplicationModel::Email::EmailMessageDownloadState *);
	virtual long get_EstimatedDownloadSizeInBytes(unsigned int *);
	virtual long get_FlagState(Windows::ApplicationModel::Email::EmailFlagState *);
	virtual long get_FolderId(HSTRING__ * *);
	virtual long get_HasPartialBodies(unsigned char *);
	virtual long get_Id(HSTRING__ * *);
	virtual long get_Importance(Windows::ApplicationModel::Email::EmailImportance *);
	virtual long get_InResponseToMessageId(HSTRING__ * *);
	virtual long get_IrmInfo(Windows::ApplicationModel::Email::IEmailIrmInfo * *);
	virtual long get_IsDraftMessage(unsigned char *);
	virtual long get_IsRead(unsigned char *);
	virtual long get_IsSeen(unsigned char *);
	virtual long get_IsServerSearchMessage(unsigned char *);
	virtual long get_IsSmartSendable(unsigned char *);
	virtual long get_LastResponseKind(Windows::ApplicationModel::Email::EmailMessageResponseKind *);
	virtual long get_MailboxId(HSTRING__ * *);
	virtual long get_MeetingInfo(Windows::ApplicationModel::Email::IEmailMeetingInfo * *);
	virtual long get_MessageClass(HSTRING__ * *);
	virtual long get_NormalizedSubject(HSTRING__ * *);
	virtual long get_OriginalCodePage(int *);
	virtual long get_Preview(HSTRING__ * *);
	virtual long get_RemoteId(HSTRING__ * *);
	virtual long get_ReplyTo(Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailRecipient *> * *);
	virtual long get_Sender(Windows::ApplicationModel::Email::IEmailRecipient * *);
	virtual long get_SentRepresenting(Windows::ApplicationModel::Email::IEmailRecipient * *);
	virtual long get_SentTime(Windows::Foundation::IReference<Windows::Foundation::DateTime> * *);
	virtual long get_SmimeData(Windows::Storage::Streams::IRandomAccessStreamReference * *);
	virtual long get_SmimeKind(Windows::ApplicationModel::Email::EmailMessageSmimeKind *);
	virtual long get_Subject(HSTRING__ * *);
	virtual long get_To(Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailRecipient *> * *);
	virtual long put_AllowInternetImages(unsigned char);
	virtual long put_Body(HSTRING__ *);
	virtual long put_DownloadState(Windows::ApplicationModel::Email::EmailMessageDownloadState);
	virtual long put_EstimatedDownloadSizeInBytes(unsigned int);
	virtual long put_FlagState(Windows::ApplicationModel::Email::EmailFlagState);
	virtual long put_Importance(Windows::ApplicationModel::Email::EmailImportance);
	virtual long put_IrmInfo(Windows::ApplicationModel::Email::IEmailIrmInfo *);
	virtual long put_IsRead(unsigned char);
	virtual long put_IsSeen(unsigned char);
	virtual long put_LastResponseKind(Windows::ApplicationModel::Email::EmailMessageResponseKind);
	virtual long put_MeetingInfo(Windows::ApplicationModel::Email::IEmailMeetingInfo *);
	virtual long put_MessageClass(HSTRING__ *);
	virtual long put_OriginalCodePage(int);
	virtual long put_Preview(HSTRING__ *);
	virtual long put_RemoteId(HSTRING__ *);
	virtual long put_Sender(Windows::ApplicationModel::Email::IEmailRecipient *);
	virtual long put_SentRepresenting(Windows::ApplicationModel::Email::IEmailRecipient *);
	virtual long put_SentTime(Windows::Foundation::IReference<Windows::Foundation::DateTime> *);
	virtual long put_SmimeData(Windows::Storage::Streams::IRandomAccessStreamReference *);
	virtual long put_SmimeKind(Windows::ApplicationModel::Email::EmailMessageSmimeKind);
	virtual long put_Subject(HSTRING__ *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void * PeekAt(_GUID const &);
	virtual ~EmailMessageImpl();
};

class EmailMessageReaderImpl
{
	virtual long CreateItemFor(UdmFetchObjectPropsResult *,IInspectable * *);
	virtual long GetState(unsigned long *);
	virtual long PreCommonGetMoreLoop(unsigned int);
	virtual long StartEnumeration(__MIDL_UserDataModelService_0002 * *);
public:
	EmailMessageReaderImpl();
	long RuntimeClassInitialize(EmailSessionHandle *,int,UdmObjectId,Windows::ApplicationModel::Email::IEmailQueryOptions *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ReadBatchAsync(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessageBatch *> * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailProvider
{
	static _TlgProvider_t const * Provider();
};

struct EmailQueryOptionsFactoryImpl
{
	virtual long ActivateInstance(IInspectable * *);
	virtual long CreateWithText(HSTRING__ *,Windows::ApplicationModel::Email::IEmailQueryOptions * *);
	virtual long CreateWithTextAndFields(HSTRING__ *,Windows::ApplicationModel::Email::EmailQuerySearchFields,Windows::ApplicationModel::Email::IEmailQueryOptions * *);
};

struct EmailQueryOptionsImpl
{
	EmailQueryOptionsImpl();
	long RuntimeClassInitialize(HSTRING__ *,Windows::ApplicationModel::Email::EmailQuerySearchFields);
	long RuntimeClassInitialize(Windows::Foundation::Collections::IPropertySet *);
	static TrustLevel InternalGetTrustLevel();
	static unsigned short const * InternalGetRuntimeClassName();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Serialize(Windows::Foundation::Collections::IPropertySet * *);
	virtual long get_FolderIds(Windows::Foundation::Collections::IVector<HSTRING__ *> * *);
	virtual long get_Kind(Windows::ApplicationModel::Email::EmailQueryKind *);
	virtual long get_SortDirection(Windows::ApplicationModel::Email::EmailQuerySortDirection *);
	virtual long get_SortProperty(Windows::ApplicationModel::Email::EmailQuerySortProperty *);
	virtual long get_TextSearch(Windows::ApplicationModel::Email::IEmailQueryTextSearch * *);
	virtual long put_Kind(Windows::ApplicationModel::Email::EmailQueryKind);
	virtual long put_SortDirection(Windows::ApplicationModel::Email::EmailQuerySortDirection);
	virtual long put_SortProperty(Windows::ApplicationModel::Email::EmailQuerySortProperty);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailQueryTextSearchImpl
{
	EmailQueryTextSearchImpl();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Serialize(Windows::Foundation::Collections::IPropertySet * *);
	virtual long get_Fields(Windows::ApplicationModel::Email::EmailQuerySearchFields *);
	virtual long get_SearchScope(Windows::ApplicationModel::Email::EmailQuerySearchScope *);
	virtual long get_Text(HSTRING__ * *);
	virtual long put_Fields(Windows::ApplicationModel::Email::EmailQuerySearchFields);
	virtual long put_SearchScope(Windows::ApplicationModel::Email::EmailQuerySearchScope);
	virtual long put_Text(HSTRING__ *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailRecipientFactoryImpl
{
	virtual long ActivateInstance(IInspectable * *);
	virtual long Create(HSTRING__ *,Windows::ApplicationModel::Email::IEmailRecipient * *);
	virtual long CreateWithName(HSTRING__ *,HSTRING__ *,Windows::ApplicationModel::Email::IEmailRecipient * *);
};

struct EmailRecipientImpl
{
	EmailRecipientImpl();
	long RuntimeClassInitialize(unsigned short const *,unsigned short const *);
	static TrustLevel InternalGetTrustLevel();
	static unsigned short const * InternalGetRuntimeClassName();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Serialize(Windows::Foundation::Collections::IPropertySet * *);
	virtual long get_Address(HSTRING__ * *);
	virtual long get_Name(HSTRING__ * *);
	virtual long put_Address(HSTRING__ *);
	virtual long put_Name(HSTRING__ *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void * PeekAt(_GUID const &);
};

struct EmailRecipientResolutionResultImpl
{
	EmailRecipientResolutionResultImpl();
	long RuntimeClassInitialize();
	long RuntimeClassInitialize(UdmEmailRecipientResolutionResult const &);
	long RuntimeClassInitialize(Windows::Foundation::Collections::IPropertySet *);
	static TrustLevel InternalGetTrustLevel();
	static unsigned short const * InternalGetRuntimeClassName();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Serialize(Windows::Foundation::Collections::IPropertySet * *);
	virtual long SetPublicKeys(Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::Certificate *> *);
	virtual long get_PublicKeys(Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate *> * *);
	virtual long get_Status(Windows::ApplicationModel::Email::EmailRecipientResolutionStatus *);
	virtual long put_Status(Windows::ApplicationModel::Email::EmailRecipientResolutionStatus);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailRecipientVector
{
	long ClearChanged();
	long HasChanged(bool *);
	long RuntimeClassInitialize(UdmEmailParticipantKind);
	virtual long ToUdmVector(unsigned int *,auto_struct<UdmEmailParticipant,&void Udm::FreeUdmEmailParticipant(UdmEmailParticipant *)> * *);
};

class EmailSessionHandle
{
protected:
	virtual ~EmailSessionHandle();
public:
	EmailSessionHandle();
	long DeleteObject(UdmObjectId const &);
	long MoveObject(UdmObjectId const &,UdmObjectId const &,unsigned short const *);
	long RuntimeClassInitialize(Windows::System::IUser *);
	long UpdateObject(UdmOperationType,UdmObjectId const &,unsigned long,UdmOperationResult *);
	virtual void * PeekAt(_GUID const &);
};

struct EmailStoreBackgroundDetailsFactory
{
	virtual long CreateEventDetailsInstance(unsigned long,unsigned char *,IUnknown *,_GUID const &,void * *);
	virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
};

struct EmailStoreImpl
{
	virtual long CreateMailboxAsync(HSTRING__ *,HSTRING__ *,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailbox *> * *);
	virtual long CreateMailboxInAccountAsync(HSTRING__ *,HSTRING__ *,HSTRING__ *,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailbox *> * *);
	virtual long FindMailboxesAsync(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMailbox *> *> * *);
	virtual long FindMailboxesForAccountAsync(HSTRING__ *,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMailbox *> *> * *);
	virtual long GetConversationAsync(HSTRING__ *,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailConversation *> * *);
	virtual long GetConversationReader(Windows::ApplicationModel::Email::IEmailConversationReader * *);
	virtual long GetConversationReaderWithOptions(Windows::ApplicationModel::Email::IEmailQueryOptions *,Windows::ApplicationModel::Email::IEmailConversationReader * *);
	virtual long GetFolderAsync(HSTRING__ *,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailFolder *> * *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetMailboxAsync(HSTRING__ *,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMailbox *> * *);
	virtual long GetMessageAsync(HSTRING__ *,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailMessage *> * *);
	virtual long GetMessageReader(Windows::ApplicationModel::Email::IEmailMessageReader * *);
	virtual long GetMessageReaderWithOptions(Windows::ApplicationModel::Email::IEmailQueryOptions *,Windows::ApplicationModel::Email::IEmailMessageReader * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailStoreNotificationTriggerDetailsImpl
{
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct EmailStoreNotificationTriggerImpl
{
	static TrustLevel InternalGetTrustLevel();
	static unsigned short const * InternalGetRuntimeClassName();
	virtual long Create();
	virtual long Delete();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_EventId(_GUID *);
	virtual long get_SqmId(unsigned long *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class EmailTelemetry
{
	class CreateFolderAsync
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
	};

	class ResolveRecipientsAsync
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		void Stop(unsigned int);
	};

protected:
	static EmailTelemetry * Instance();
public:
	static void GetResultsError<unsigned short const * &,char const (&)[100],long &>(unsigned short const * &,char const (&)[100],long &);
	static void GetResultsError<unsigned short const * &,char const (&)[101],long &>(unsigned short const * &,char const (&)[101],long &);
	static void GetResultsError<unsigned short const * &,char const (&)[106],long &>(unsigned short const * &,char const (&)[106],long &);
	static void GetResultsError<unsigned short const * &,char const (&)[109],long &>(unsigned short const * &,char const (&)[109],long &);
	static void GetResultsError<unsigned short const * &,char const (&)[110],long &>(unsigned short const * &,char const (&)[110],long &);
	static void RequestMissingOpKindError<unsigned short const * &>(unsigned short const * &);
	static void RequestParsingError<unsigned short const * &,unsigned int &,long &>(unsigned short const * &,unsigned int &,long &);
	static wil::ActivityThreadWatcher WatchCurrentThread(char const *);
	virtual void OnErrorReported(bool,wil::FailureInfo const &);
	void GetItemTypeHelper_(unsigned short const *,unsigned __int64,unsigned short const *);
	void ReadBatchAsync_(unsigned short const *,unsigned int,unsigned __int64,unsigned int);
	void ReadBatchImpl_(unsigned long);
	void RequestStoreAsync_(int,unsigned __int64);
	void SaveAsync_(unsigned short const *,UdmOperationType,unsigned short const *,unsigned __int64);
	void TrySaveAsync_();
	void UpdateItemAsync_(unsigned short const *,unsigned __int64,unsigned long);
	void UpdateLogEventCount(unsigned long *,unsigned __int64 *,unsigned long *);
};

class EventDeferralBase
{
protected:
	long CompleteDeferral();
};

class EventSessionHandle<IInspectable,IInspectable,Windows::ApplicationModel::Email::EmailMailboxSyncManager>
{
	static void TpCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_WAIT *,long);
	virtual void SendEvent(UdmNotifyStructure *);
	void HandleNotify();
protected:
	virtual long Connect();
	virtual long Disconnect(int *);
public:
	long AddHandler(Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::EmailMailboxSyncManager *,IInspectable *> *,EventRegistrationToken *);
	virtual long ReconnectSession();
	virtual ~EventSessionHandle<IInspectable,IInspectable,Windows::ApplicationModel::Email::EmailMailboxSyncManager>();
};

namespace Microsoft
{
	namespace WRL
	{
		struct ActivationFactory<Details::Nil,Details::Nil,Details::Nil,0>
		{
			virtual long ActivateInstance(IInspectable * *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct ActivationFactory<Implements<FtmBase,Windows::ApplicationModel::Email::IEmailAttachmentFactory>,Windows::ApplicationModel::Email::IEmailAttachmentFactory2,Details::Nil,0>
		{
			virtual long ActivateInstance(IInspectable * *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct ActivationFactory<Implements<FtmBase,Windows::ApplicationModel::Email::IEmailIrmInfoFactory>,Details::Nil,Details::Nil,0>
		{
			virtual long ActivateInstance(IInspectable * *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct ActivationFactory<Implements<FtmBase,Windows::ApplicationModel::Email::IEmailIrmTemplateFactory>,Details::Nil,Details::Nil,0>
		{
			virtual long ActivateInstance(IInspectable * *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct ActivationFactory<Implements<FtmBase,Windows::ApplicationModel::Email::IEmailManagerStatics>,Windows::ApplicationModel::Email::IEmailManagerStatics2,Windows::ApplicationModel::Email::IEmailManagerStatics3,0>
		{
			virtual long ActivateInstance(IInspectable * *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct ActivationFactory<Implements<FtmBase,Windows::ApplicationModel::Email::IEmailQueryOptionsFactory>,Details::Nil,Details::Nil,0>
		{
			virtual long ActivateInstance(IInspectable * *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct ActivationFactory<Implements<FtmBase,Windows::ApplicationModel::Email::IEmailRecipientFactory>,Details::Nil,Details::Nil,0>
		{
			virtual long ActivateInstance(IInspectable * *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct ClassFactory<IBackgroundEventDetailsFactory,Details::Nil,Details::Nil,0>
		{
			virtual long LockServer(int);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct DeferrableEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequestEventArgs,EmailMailboxCreateFolderRequestEventArgsImpl>
		{
			virtual long GetDeferral(Windows::Foundation::IDeferral * *);
		};

		struct DeferrableEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequestEventArgs,EmailMailboxDeleteFolderRequestEventArgsImpl>
		{
			virtual long GetDeferral(Windows::Foundation::IDeferral * *);
		};

		struct DeferrableEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequestEventArgs,EmailMailboxDownloadAttachmentRequestEventArgsImpl>
		{
			virtual long GetDeferral(Windows::Foundation::IDeferral * *);
		};

		struct DeferrableEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequestEventArgs,EmailMailboxDownloadMessageRequestEventArgsImpl>
		{
			virtual long GetDeferral(Windows::Foundation::IDeferral * *);
		};

		struct DeferrableEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequestEventArgs,EmailMailboxEmptyFolderRequestEventArgsImpl>
		{
			virtual long GetDeferral(Windows::Foundation::IDeferral * *);
		};

		struct DeferrableEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequestEventArgs,EmailMailboxForwardMeetingRequestEventArgsImpl>
		{
			virtual long GetDeferral(Windows::Foundation::IDeferral * *);
		};

		struct DeferrableEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequestEventArgs,EmailMailboxGetAutoReplySettingsRequestEventArgsImpl>
		{
			virtual long GetDeferral(Windows::Foundation::IDeferral * *);
		};

		struct DeferrableEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequestEventArgs,EmailMailboxMoveFolderRequestEventArgsImpl>
		{
			virtual long GetDeferral(Windows::Foundation::IDeferral * *);
		};

		struct DeferrableEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequestEventArgs,EmailMailboxProposeNewTimeForMeetingRequestEventArgsImpl>
		{
			virtual long GetDeferral(Windows::Foundation::IDeferral * *);
		};

		struct DeferrableEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequestEventArgs,EmailMailboxResolveRecipientsRequestEventArgsImpl>
		{
			virtual long GetDeferral(Windows::Foundation::IDeferral * *);
		};

		struct DeferrableEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequestEventArgs,EmailMailboxServerSearchReadBatchRequestEventArgsImpl>
		{
			virtual long GetDeferral(Windows::Foundation::IDeferral * *);
		};

		struct DeferrableEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequestEventArgs,EmailMailboxSetAutoReplySettingsRequestEventArgsImpl>
		{
			virtual long GetDeferral(Windows::Foundation::IDeferral * *);
		};

		struct DeferrableEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequestEventArgs,EmailMailboxSyncManagerSyncRequestEventArgsImpl>
		{
			virtual long GetDeferral(Windows::Foundation::IDeferral * *);
		};

		struct DeferrableEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequestEventArgs,EmailMailboxUpdateMeetingResponseRequestEventArgsImpl>
		{
			virtual long GetDeferral(Windows::Foundation::IDeferral * *);
		};

		struct DeferrableEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequestEventArgs,EmailMailboxValidateCertificatesRequestEventArgsImpl>
		{
			virtual long GetDeferral(Windows::Foundation::IDeferral * *);
		};

		struct DelegateTraits<-1>
		{
			static void EnsureStackSnapshot(long);
		};

		namespace Details
		{
			struct EventTargetArray
			{
				long RuntimeClassInitialize(unsigned __int64);
				void AddTail(IUnknown *,void *);
			};

			class ImplementsHelper<RuntimeClassFlags<13>,0,Nil,IActivationFactory,Implements<FtmBase,Windows::ApplicationModel::Email::IEmailAttachmentFactory>,Windows::ApplicationModel::Email::IEmailAttachmentFactory2,Nil,Nil>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<13>,0,Nil,IActivationFactory,Implements<FtmBase,Windows::ApplicationModel::Email::IEmailManagerStatics>,Windows::ApplicationModel::Email::IEmailManagerStatics2,Windows::ApplicationModel::Email::IEmailManagerStatics3,Nil>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,0,Nil,Windows::ApplicationModel::Email::IEmailMailboxSyncManager,IWeakReferenceSource,Windows::ApplicationModel::Email::IEmailMailboxSyncManager2,CloakedIid<SyncManagerBase>,CloakedIid<ITypePeek>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,0,Nil,Windows::ApplicationModel::Email::IEmailMessage,IWeakReferenceSource,Windows::ApplicationModel::Email::IEmailMessage2,Windows::ApplicationModel::Email::IEmailMessage3,Windows::ApplicationModel::Email::IEmailMessage4,CloakedIid<EmailImplBase>,CloakedIid<ITypePeek>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,CloakedIid<EmailImplBase>,CloakedIid<ITypePeek>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,CloakedIid<ITypePeek>,CloakedIid<ISerializableType>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,Windows::ApplicationModel::Email::IEmailMailbox2,Windows::ApplicationModel::Email::IEmailMailbox3,Windows::ApplicationModel::Email::IEmailMailbox4,Windows::ApplicationModel::Email::IEmailMailbox5,CloakedIid<EmailImplBase>,FtmBase>
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

			struct RuntimeClassImpl<RuntimeClassFlags<19>,1,1,0,Windows::Storage::Streams::IBuffer,CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,CloakedIid<IMarshal>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<19>,1,1,0,Windows::Storage::Streams::IBuffer,CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,CloakedIid<IMarshal>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequestEventArgs,EmailMailboxCreateFolderRequestEventArgsImpl,EmailMailboxCreateFolderRequestImpl>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequestEventArgs,EmailMailboxCreateFolderRequestEventArgsImpl,EmailMailboxCreateFolderRequestImpl>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequestEventArgs,EmailMailboxDeleteFolderRequestEventArgsImpl,EmailMailboxDeleteFolderRequestImpl>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequestEventArgs,EmailMailboxDeleteFolderRequestEventArgsImpl,EmailMailboxDeleteFolderRequestImpl>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequestEventArgs,EmailMailboxDownloadAttachmentRequestEventArgsImpl,EmailMailboxDownloadAttachmentRequestImpl>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequestEventArgs,EmailMailboxDownloadAttachmentRequestEventArgsImpl,EmailMailboxDownloadAttachmentRequestImpl>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequestEventArgs,EmailMailboxDownloadMessageRequestEventArgsImpl,EmailMailboxDownloadMessageRequestImpl>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequestEventArgs,EmailMailboxDownloadMessageRequestEventArgsImpl,EmailMailboxDownloadMessageRequestImpl>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequestEventArgs,EmailMailboxEmptyFolderRequestEventArgsImpl,EmailMailboxEmptyFolderRequestImpl>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequestEventArgs,EmailMailboxEmptyFolderRequestEventArgsImpl,EmailMailboxEmptyFolderRequestImpl>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequestEventArgs,EmailMailboxForwardMeetingRequestEventArgsImpl,EmailMailboxForwardMeetingRequestImpl>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequestEventArgs,EmailMailboxForwardMeetingRequestEventArgsImpl,EmailMailboxForwardMeetingRequestImpl>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequestEventArgs,EmailMailboxGetAutoReplySettingsRequestEventArgsImpl,EmailMailboxGetAutoReplySettingsRequestImpl>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequestEventArgs,EmailMailboxGetAutoReplySettingsRequestEventArgsImpl,EmailMailboxGetAutoReplySettingsRequestImpl>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequestEventArgs,EmailMailboxMoveFolderRequestEventArgsImpl,EmailMailboxMoveFolderRequestImpl>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequestEventArgs,EmailMailboxMoveFolderRequestEventArgsImpl,EmailMailboxMoveFolderRequestImpl>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequestEventArgs,EmailMailboxProposeNewTimeForMeetingRequestEventArgsImpl,EmailMailboxProposeNewTimeForMeetingRequestImpl>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequestEventArgs,EmailMailboxProposeNewTimeForMeetingRequestEventArgsImpl,EmailMailboxProposeNewTimeForMeetingRequestImpl>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequestEventArgs,EmailMailboxResolveRecipientsRequestEventArgsImpl,EmailMailboxResolveRecipientsRequestImpl>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequestEventArgs,EmailMailboxResolveRecipientsRequestEventArgsImpl,EmailMailboxResolveRecipientsRequestImpl>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequestEventArgs,EmailMailboxServerSearchReadBatchRequestEventArgsImpl,EmailMailboxServerSearchReadBatchRequestImpl>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequestEventArgs,EmailMailboxServerSearchReadBatchRequestEventArgsImpl,EmailMailboxServerSearchReadBatchRequestImpl>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequestEventArgs,EmailMailboxSetAutoReplySettingsRequestEventArgsImpl,EmailMailboxSetAutoReplySettingsRequestImpl>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequestEventArgs,EmailMailboxSetAutoReplySettingsRequestEventArgsImpl,EmailMailboxSetAutoReplySettingsRequestImpl>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequestEventArgs,EmailMailboxSyncManagerSyncRequestEventArgsImpl,EmailMailboxSyncManagerSyncRequestImpl>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequestEventArgs,EmailMailboxSyncManagerSyncRequestEventArgsImpl,EmailMailboxSyncManagerSyncRequestImpl>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequestEventArgs,EmailMailboxUpdateMeetingResponseRequestEventArgsImpl,EmailMailboxUpdateMeetingResponseRequestImpl>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequestEventArgs,EmailMailboxUpdateMeetingResponseRequestEventArgsImpl,EmailMailboxUpdateMeetingResponseRequestImpl>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequestEventArgs,EmailMailboxValidateCertificatesRequestEventArgsImpl,EmailMailboxValidateCertificatesRequestImpl>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,DataProviderRequestEventArgs<Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequestEventArgs,EmailMailboxValidateCertificatesRequestEventArgsImpl,EmailMailboxValidateCertificatesRequestImpl>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequest,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::DataProvider::IEmailMailboxCreateFolderRequest,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequest,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDeleteFolderRequest,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequest,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadAttachmentRequest,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequest,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::DataProvider::IEmailMailboxDownloadMessageRequest,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequest,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::DataProvider::IEmailMailboxEmptyFolderRequest,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequest,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::DataProvider::IEmailMailboxForwardMeetingRequest,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequest,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::DataProvider::IEmailMailboxGetAutoReplySettingsRequest,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequest,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::DataProvider::IEmailMailboxMoveFolderRequest,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequest,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::DataProvider::IEmailMailboxProposeNewTimeForMeetingRequest,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequest,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::DataProvider::IEmailMailboxResolveRecipientsRequest,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequest,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::DataProvider::IEmailMailboxServerSearchReadBatchRequest,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequest,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSetAutoReplySettingsRequest,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequest,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::DataProvider::IEmailMailboxSyncManagerSyncRequest,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequest,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::DataProvider::IEmailMailboxUpdateMeetingResponseRequest,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequest,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::DataProvider::IEmailMailboxValidateCertificatesRequest,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::IEmailIrmInfo,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::IEmailIrmInfo,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::IEmailItemCounts,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::IEmailItemCounts,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::IEmailMailboxCapabilities,Windows::ApplicationModel::Email::IEmailMailboxCapabilities2,Windows::ApplicationModel::Email::IEmailMailboxCapabilities3,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::IEmailMailboxCapabilities,Windows::ApplicationModel::Email::IEmailMailboxCapabilities2,Windows::ApplicationModel::Email::IEmailMailboxCapabilities3,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::IEmailMailboxPolicies,Windows::ApplicationModel::Email::IEmailMailboxPolicies2,Windows::ApplicationModel::Email::IEmailMailboxPolicies3,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::IEmailMailboxPolicies,Windows::ApplicationModel::Email::IEmailMailboxPolicies2,Windows::ApplicationModel::Email::IEmailMailboxPolicies3,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::IEmailManagerForUser,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Email::IEmailManagerForUser,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<HSTRING__ *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<HSTRING__ *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::ApplicationModel::Email::EmailAttachment *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::ApplicationModel::Email::EmailAttachment *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::ApplicationModel::Email::EmailConversation *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::ApplicationModel::Email::EmailConversation *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::ApplicationModel::Email::EmailFolder *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::ApplicationModel::Email::EmailFolder *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::ApplicationModel::Email::EmailMailbox *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::ApplicationModel::Email::EmailMailbox *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::ApplicationModel::Email::EmailMailboxAction *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::ApplicationModel::Email::EmailMailboxAction *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::ApplicationModel::Email::EmailMailboxChange *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::ApplicationModel::Email::EmailMailboxChange *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::ApplicationModel::Email::EmailMessage *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::ApplicationModel::Email::EmailMessage *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::ApplicationModel::Email::EmailRecipient *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::ApplicationModel::Email::EmailRecipient *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::ApplicationModel::Email::EmailRecipientResolutionResult *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::ApplicationModel::Email::EmailRecipientResolutionResult *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Security::Cryptography::Certificates::Certificate *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Security::Cryptography::Certificates::Certificate *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Storage::Streams::IBuffer *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Storage::Streams::IBuffer *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailAttachment *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailAttachment *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailAttachment *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailAttachment *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailConversation *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailConversation *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailConversation *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailConversation *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailFolder *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailFolder *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailFolder *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailFolder *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailMailbox *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailMailbox *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailMailbox *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailMailbox *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailMailboxAction *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailMailboxAction *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailMailboxAction *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailMailboxAction *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailMailboxChange *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailMailboxChange *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailMailboxChange *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailMailboxChange *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailMessage *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailMessage *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailMessage *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailMessage *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailRecipient *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailRecipient *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailRecipient *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailRecipient *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailRecipientResolutionResult *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailRecipientResolutionResult *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailRecipientResolutionResult *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailRecipientResolutionResult *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::Certificate *>,Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::Certificate *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::Certificate *>,Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::Certificate *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::IIterable<Windows::Storage::Streams::IBuffer *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::IIterable<Windows::Storage::Streams::IBuffer *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailAttachment *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailAttachment *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailAttachment *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailAttachment *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailConversation *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailConversation *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailConversation *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailConversation *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailFolder *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailFolder *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailFolder *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailFolder *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMailbox *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailMailbox *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMailbox *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailMailbox *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMailboxAction *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailMailboxAction *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMailboxAction *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailMailboxAction *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMailboxChange *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailMailboxChange *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMailboxChange *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailMailboxChange *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMessage *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailMessage *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailMessage *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailMessage *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailRecipient *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailRecipient *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailRecipient *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailRecipient *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailRecipientResolutionResult *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailRecipientResolutionResult *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Email::EmailRecipientResolutionResult *>,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailRecipientResolutionResult *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate *>,Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::Certificate *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate *>,Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::Certificate *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::IIterable<Windows::Storage::Streams::IBuffer *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::IIterable<Windows::Storage::Streams::IBuffer *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IReference<Windows::Foundation::DateTime>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IReference<Windows::Foundation::DateTime>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IReference<Windows::Foundation::TimeSpan>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IReference<Windows::Foundation::TimeSpan>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,CloakedIid<QueryResultBase>,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,EventSessionHandle<IInspectable,IInspectable,Windows::ApplicationModel::Email::EmailMailboxSyncManager>,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IEmailRecipientVector,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IServiceListener,FtmBase>
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

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IWeakReference>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::AppService::AppServiceConnection *,Windows::ApplicationModel::AppService::AppServiceRequestReceivedEventArgs *>,FtmBase> >
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequestEventArgs *>,FtmBase> >
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequestEventArgs *>,FtmBase> >
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequestEventArgs *>,FtmBase> >
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequestEventArgs *>,FtmBase> >
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequestEventArgs *>,FtmBase> >
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequestEventArgs *>,FtmBase> >
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequestEventArgs *>,FtmBase> >
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequestEventArgs *>,FtmBase> >
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequestEventArgs *>,FtmBase> >
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequestEventArgs *>,FtmBase> >
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequestEventArgs *>,FtmBase> >
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequestEventArgs *>,FtmBase> >
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequestEventArgs *>,FtmBase> >
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequestEventArgs *>,FtmBase> >
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequestEventArgs *>,FtmBase> >
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::EmailMailbox *,Windows::ApplicationModel::Email::EmailMailboxChangedEventArgs *>,FtmBase> >
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::EmailMailboxSyncManager *,IInspectable *>,FtmBase> >
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::UI::Core::IDispatchedHandler,FtmBase> >
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,UdmSessionHandle,CloakedIid<ITypePeek>,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,UdmSessionHandle,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncActionCompletedHandler>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::AppService::AppServiceResponse *> >
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Email::EmailFolder *> >
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Storage::StorageFile *> >
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Storage::Streams::IRandomAccessStreamWithContentType *> >
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<bool> >
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<unsigned int,unsigned int> >
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IDeferralCompletedHandler>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Background::IEmailStoreNotificationTrigger,Windows::ApplicationModel::Background::IBackgroundTrigger,CloakedIid<Windows::ApplicationModel::Background::IBrokerTriggerBuilder>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Background::IEmailStoreNotificationTrigger,Windows::ApplicationModel::Background::IBackgroundTrigger,CloakedIid<Windows::ApplicationModel::Background::IBrokerTriggerBuilder>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection,CloakedIid<DataProviderConnectionBase>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderConnection,CloakedIid<DataProviderConnectionBase>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderTriggerDetails,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::DataProvider::IEmailDataProviderTriggerDetails,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailAttachment,Windows::ApplicationModel::Email::IEmailAttachment2,CloakedIid<EmailImplBase>,CloakedIid<ITypePeek>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailAttachment,Windows::ApplicationModel::Email::IEmailAttachment2,CloakedIid<EmailImplBase>,CloakedIid<ITypePeek>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailConversation,CloakedIid<EmailImplBase>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailConversation,CloakedIid<EmailImplBase>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailConversationBatch,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailConversationBatch,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailConversationReader,CloakedIid<QueryResultBase>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailConversationReader,CloakedIid<QueryResultBase>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailFolder,CloakedIid<EmailImplBase>,CloakedIid<ITypePeek>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailFolder,CloakedIid<EmailImplBase>,CloakedIid<ITypePeek>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailIrmTemplate,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailIrmTemplate,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailMailbox,Windows::ApplicationModel::Email::IEmailMailbox2,Windows::ApplicationModel::Email::IEmailMailbox3,Windows::ApplicationModel::Email::IEmailMailbox4,Windows::ApplicationModel::Email::IEmailMailbox5,CloakedIid<EmailImplBase>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailMailbox,Windows::ApplicationModel::Email::IEmailMailbox2,Windows::ApplicationModel::Email::IEmailMailbox3,Windows::ApplicationModel::Email::IEmailMailbox4,Windows::ApplicationModel::Email::IEmailMailbox5,CloakedIid<EmailImplBase>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailMailboxAction,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailMailboxAction,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailMailboxAutoReply,CloakedIid<ISerializableType>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailMailboxAutoReply,CloakedIid<ISerializableType>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings,CloakedIid<ITypePeek>,CloakedIid<ISerializableType>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings,CloakedIid<ITypePeek>,CloakedIid<ISerializableType>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailMailboxChange,CloakedIid<ITypePeek>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailMailboxChange,CloakedIid<ITypePeek>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailMailboxChangeReader,CloakedIid<QueryResultBase>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailMailboxChangeReader,CloakedIid<QueryResultBase>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailMailboxChangeTracker,CloakedIid<ChangeTrackBase>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailMailboxChangeTracker,CloakedIid<ChangeTrackBase>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailMailboxChangedDeferral,CloakedIid<EventDeferralBase>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailMailboxChangedDeferral,CloakedIid<EventDeferralBase>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailMailboxChangedEventArgs,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailMailboxChangedEventArgs,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailMailboxCreateFolderResult,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailMailboxCreateFolderResult,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailMailboxSyncManager,Windows::ApplicationModel::Email::IEmailMailboxSyncManager2,CloakedIid<SyncManagerBase>,CloakedIid<ITypePeek>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailMailboxSyncManager,Windows::ApplicationModel::Email::IEmailMailboxSyncManager2,CloakedIid<SyncManagerBase>,CloakedIid<ITypePeek>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailMeetingInfo,Windows::ApplicationModel::Email::IEmailMeetingInfo2,CloakedIid<EmailImplBase>,CloakedIid<ITypePeek>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailMeetingInfo,Windows::ApplicationModel::Email::IEmailMeetingInfo2,CloakedIid<EmailImplBase>,CloakedIid<ITypePeek>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailMessage,Windows::ApplicationModel::Email::IEmailMessage2,Windows::ApplicationModel::Email::IEmailMessage3,Windows::ApplicationModel::Email::IEmailMessage4,CloakedIid<EmailImplBase>,CloakedIid<ITypePeek>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailMessage,Windows::ApplicationModel::Email::IEmailMessage2,Windows::ApplicationModel::Email::IEmailMessage3,Windows::ApplicationModel::Email::IEmailMessage4,CloakedIid<EmailImplBase>,CloakedIid<ITypePeek>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailMessageBatch,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailMessageBatch,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailMessageReader,CloakedIid<QueryResultBase>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailMessageReader,CloakedIid<QueryResultBase>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailQueryOptions,FtmBase,CloakedIid<ISerializableType> >
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailQueryOptions,FtmBase,CloakedIid<ISerializableType> >();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailQueryTextSearch,FtmBase,CloakedIid<ISerializableType> >
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailQueryTextSearch,FtmBase,CloakedIid<ISerializableType> >();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailRecipient,CloakedIid<ITypePeek>,CloakedIid<ISerializableType>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailRecipient,CloakedIid<ITypePeek>,CloakedIid<ISerializableType>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailRecipientResolutionResult,Windows::ApplicationModel::Email::IEmailRecipientResolutionResult2,CloakedIid<ISerializableType>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailRecipientResolutionResult,Windows::ApplicationModel::Email::IEmailRecipientResolutionResult2,CloakedIid<ISerializableType>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailStore,IEmailStoreInternal,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailStore,IEmailStoreInternal,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailStoreNotificationTriggerDetails,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Email::IEmailStoreNotificationTriggerDetails,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Storage::Streams::IRandomAccessStreamReference,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Storage::Streams::IRandomAccessStreamReference,FtmBase>();
			};

			struct WeakReferenceImpl
			{
				virtual long Resolve(_GUID const &,IInspectable * *);
			};

			Details::WeakReferenceImpl * CreateWeakReference(IUnknown *);
			bool TerminateMap(Details::ModuleBase *,unsigned short const *,bool);
			long CreateActivationFactory<EmailAttachmentFactoryImpl>(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<EmailIrmInfoFactoryImpl>(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<EmailIrmTemplateFactoryImpl>(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<EmailManagerStaticsImpl>(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<EmailQueryOptionsFactoryImpl>(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<EmailRecipientFactoryImpl>(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<SimpleSealedActivationFactory<EmailAutoReplySettingsImpl,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<SimpleSealedActivationFactory<EmailMeetingInfoImpl,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<SimpleSealedActivationFactory<EmailMessageImpl,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<SimpleSealedActivationFactory<EmailRecipientResolutionResultImpl,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<SimpleSealedActivationFactory<EmailStoreNotificationTriggerImpl,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateClassFactory<EmailDataProviderBackgroundDetailsFactory>(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateClassFactory<EmailStoreBackgroundDetailsFactory>(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long GetCacheEntry(Details::ModuleBase *,unsigned int *,_GUID const &,Details::CreatorMap const *,IUnknown * *);
			long MakeAndInitialize<EmailAttachmentImpl,EmailAttachmentImpl,EmailSessionHandle * &,UdmObjectId const &,UdmEmailAttachment &>(EmailAttachmentImpl * *,EmailSessionHandle * &,UdmObjectId const &,UdmEmailAttachment &);
			long MakeAndInitialize<EmailAutoReplyImpl,EmailAutoReplyImpl,UdmEmailAutoReply const &>(Details::ComPtrRef<ComPtr<EmailAutoReplyImpl> >,UdmEmailAutoReply const &);
			long MakeAndInitialize<EventTargetArray,EventTargetArray,unsigned __int64 &>(Details::EventTargetArray * *,unsigned __int64 &);
			long MakeAndInitialize<RefGitPtr<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailRecipient *> >,RefGitPtr<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailRecipient *> >,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailRecipient *> * &>(Details::ComPtrRef<ComPtr<RefGitPtr<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailRecipient *> > > >,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailRecipient *> * &);
			long MakeAndInitialize<RefString,RefString,HSTRING__ * &>(Details::ComPtrRef<ComPtr<RefString> >,HSTRING__ * &);
			void RaiseException(long,unsigned long);
		};

		struct ErrorPropagationPolicyTraits<-1>
		{
			static long FireCompletionErrorPropagationPolicyFilter(long,IUnknown *,void *);
		};

		class EventSource<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequestEventArgs *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxCreateFolderRequestEventArgs *> *,void *,EventRegistrationToken *);
		public:
			long Remove(EventRegistrationToken);
		};

		class EventSource<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequestEventArgs *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxDeleteFolderRequestEventArgs *> *,void *,EventRegistrationToken *);
		public:
			long Remove(EventRegistrationToken);
		};

		class EventSource<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequestEventArgs *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadAttachmentRequestEventArgs *> *,void *,EventRegistrationToken *);
		public:
			long Remove(EventRegistrationToken);
		};

		class EventSource<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequestEventArgs *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxDownloadMessageRequestEventArgs *> *,void *,EventRegistrationToken *);
		public:
			long Remove(EventRegistrationToken);
		};

		class EventSource<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequestEventArgs *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxEmptyFolderRequestEventArgs *> *,void *,EventRegistrationToken *);
		public:
			long Remove(EventRegistrationToken);
		};

		class EventSource<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequestEventArgs *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxForwardMeetingRequestEventArgs *> *,void *,EventRegistrationToken *);
		public:
			long Remove(EventRegistrationToken);
		};

		class EventSource<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequestEventArgs *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxGetAutoReplySettingsRequestEventArgs *> *,void *,EventRegistrationToken *);
		public:
			long Remove(EventRegistrationToken);
		};

		class EventSource<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequestEventArgs *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxMoveFolderRequestEventArgs *> *,void *,EventRegistrationToken *);
		public:
			long Remove(EventRegistrationToken);
		};

		class EventSource<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequestEventArgs *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxProposeNewTimeForMeetingRequestEventArgs *> *,void *,EventRegistrationToken *);
		public:
			long Remove(EventRegistrationToken);
		};

		class EventSource<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequestEventArgs *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxResolveRecipientsRequestEventArgs *> *,void *,EventRegistrationToken *);
		public:
			long Remove(EventRegistrationToken);
		};

		class EventSource<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequestEventArgs *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxServerSearchReadBatchRequestEventArgs *> *,void *,EventRegistrationToken *);
		public:
			long Remove(EventRegistrationToken);
		};

		class EventSource<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequestEventArgs *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxSetAutoReplySettingsRequestEventArgs *> *,void *,EventRegistrationToken *);
		public:
			long Remove(EventRegistrationToken);
		};

		class EventSource<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequestEventArgs *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxSyncManagerSyncRequestEventArgs *> *,void *,EventRegistrationToken *);
		public:
			long Remove(EventRegistrationToken);
		};

		class EventSource<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequestEventArgs *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxUpdateMeetingResponseRequestEventArgs *> *,void *,EventRegistrationToken *);
		public:
			long Remove(EventRegistrationToken);
		};

		class EventSource<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequestEventArgs *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::DataProvider::EmailDataProviderConnection *,Windows::ApplicationModel::Email::DataProvider::EmailMailboxValidateCertificatesRequestEventArgs *> *,void *,EventRegistrationToken *);
		public:
			long Remove(EventRegistrationToken);
		};

		struct EventSource<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::EmailMailbox *,Windows::ApplicationModel::Email::EmailMailboxChangedEventArgs *>,InvokeModeOptions<-2> >
		{
			long Remove(EventRegistrationToken);
		};

		struct EventSource<Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::EmailMailboxSyncManager *,IInspectable *>,InvokeModeOptions<-2> >
		{
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
		};

		struct SimpleActivationFactory<EmailAutoReplySettingsImpl,0>
		{
			virtual long ActivateInstance(IInspectable * *);
		};

		struct SimpleActivationFactory<EmailMeetingInfoImpl,0>
		{
			virtual long ActivateInstance(IInspectable * *);
		};

		struct SimpleActivationFactory<EmailMessageImpl,0>
		{
			virtual long ActivateInstance(IInspectable * *);
		};

		struct SimpleActivationFactory<EmailRecipientResolutionResultImpl,0>
		{
			virtual long ActivateInstance(IInspectable * *);
		};

		struct SimpleActivationFactory<EmailStoreNotificationTriggerImpl,0>
		{
			virtual long ActivateInstance(IInspectable * *);
		};

		namespace Wrappers
		{
			struct HStringReference
			{
				HStringReference<unsigned short const *>(unsigned short const * const &,Details::Dummy);
			};

		};

		Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics * gCausality;
		_RTL_RUN_ONCE gCausalityInitOnce;
	};

};

struct OperationCallback<Windows::ApplicationModel::AppService::AppServiceResponse *>
{
	virtual long Invoke(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::AppService::AppServiceResponse *> *,ABI::Windows::Foundation::AsyncStatus);
};

struct OperationCallback<Windows::ApplicationModel::Email::EmailFolder *>
{
	virtual long Invoke(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailFolder *> *,ABI::Windows::Foundation::AsyncStatus);
};

struct OperationCallback<Windows::Storage::StorageFile *>
{
	virtual long Invoke(Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile *> *,ABI::Windows::Foundation::AsyncStatus);
};

struct OperationCallback<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>
{
	virtual long Invoke(Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *> *,ABI::Windows::Foundation::AsyncStatus);
};

struct OperationCallback<bool>
{
	virtual long Invoke(Windows::Foundation::IAsyncOperation<bool> *,ABI::Windows::Foundation::AsyncStatus);
};

class PokeEventSessionHandler<Windows::ApplicationModel::Email::IEmailMailbox,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::EmailMailbox *,Windows::ApplicationModel::Email::EmailMailboxChangedEventArgs *>,EmailMailboxChangedEventArgsImpl>
{
	long ConnectPokeEvents(Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::EmailMailbox *,Windows::ApplicationModel::Email::EmailMailboxChangedEventArgs *> *);
	static void TpCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_WAIT *,long);
	void CallPokeEventDelegates();
	void _Disconnect(int,int *);
public:
	PokeEventSessionHandler<Windows::ApplicationModel::Email::IEmailMailbox,Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::EmailMailbox *,Windows::ApplicationModel::Email::EmailMailboxChangedEventArgs *>,EmailMailboxChangedEventArgsImpl>();
	long AddPokeEventHandler(Windows::Foundation::ITypedEventHandler<Windows::ApplicationModel::Email::EmailMailbox *,Windows::ApplicationModel::Email::EmailMailboxChangedEventArgs *> *,EventRegistrationToken *);
	long EnsureInitialize(Windows::ApplicationModel::Email::IEmailMailbox *,UdmObjectId,int,UdmSessionHandle *);
	virtual long ReconnectSession();
};

struct ProgressCompleteCallback<unsigned int,unsigned int>
{
	virtual long Invoke(Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int> *,ABI::Windows::Foundation::AsyncStatus);
};

namespace PropertySetHelper
{
	long Create(Windows::Foundation::Collections::IPropertySet * *);
	long Insert(Windows::Foundation::Collections::IPropertySet *,unsigned short const *,HSTRING__ *);
	long Insert(Windows::Foundation::Collections::IPropertySet *,unsigned short const *,ISerializableType *);
	long Insert(Windows::Foundation::Collections::IPropertySet *,unsigned short const *,UdmObjectId const &);
	long Insert(Windows::Foundation::Collections::IPropertySet *,unsigned short const *,Windows::Foundation::DateTime);
	long Insert(Windows::Foundation::Collections::IPropertySet *,unsigned short const *,Windows::Storage::Streams::IBuffer *);
	long Insert(Windows::Foundation::Collections::IPropertySet *,unsigned short const *,_GUID const &);
	long Insert(Windows::Foundation::Collections::IPropertySet *,unsigned short const *,unsigned char);
	long Insert(Windows::Foundation::Collections::IPropertySet *,unsigned short const *,unsigned int);
	long Insert(Windows::Foundation::Collections::IPropertySet *,unsigned short const *,unsigned long,unsigned char const *);
	long Insert<Windows::Foundation::DateTime>(Windows::Foundation::Collections::IPropertySet *,unsigned short const *,Windows::Foundation::IReference<Windows::Foundation::DateTime> *);
	long InsertSerializableCollection<Windows::ApplicationModel::Email::EmailRecipientResolutionResult *>(Windows::Foundation::Collections::IPropertySet *,unsigned short const *,Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Email::EmailRecipientResolutionResult *> *);
	long Lookup(Windows::Foundation::Collections::IPropertySet *,unsigned short const *,bool,HSTRING__ * *);
	long Lookup(Windows::Foundation::Collections::IPropertySet *,unsigned short const *,bool,UdmObjectId *);
	long Lookup(Windows::Foundation::Collections::IPropertySet *,unsigned short const *,bool,Windows::Foundation::DateTime *);
	long Lookup(Windows::Foundation::Collections::IPropertySet *,unsigned short const *,bool,Windows::Security::Cryptography::Certificates::ICertificate * *);
	long Lookup(Windows::Foundation::Collections::IPropertySet *,unsigned short const *,bool,unsigned char *);
	long Lookup(Windows::Foundation::Collections::IPropertySet *,unsigned short const *,bool,unsigned int *);
	long Lookup<EmailAutoReplyImpl,EmailAutoReplyImpl>(Windows::Foundation::Collections::IPropertySet *,unsigned short const *,bool,EmailAutoReplyImpl * *);
	long Lookup<EmailAutoReplySettingsImpl,Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings>(Windows::Foundation::Collections::IPropertySet *,unsigned short const *,bool,Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings * *);
	long Lookup<EmailQueryOptionsImpl,Windows::ApplicationModel::Email::IEmailQueryOptions>(Windows::Foundation::Collections::IPropertySet *,unsigned short const *,bool,Windows::ApplicationModel::Email::IEmailQueryOptions * *);
	long Lookup<EmailQueryTextSearchImpl,Windows::ApplicationModel::Email::IEmailQueryTextSearch>(Windows::Foundation::Collections::IPropertySet *,unsigned short const *,bool,Windows::ApplicationModel::Email::IEmailQueryTextSearch * *);
	long Lookup<EmailRecipientImpl,Windows::ApplicationModel::Email::EmailRecipient *>(Windows::Foundation::Collections::IPropertySet *,unsigned short const *,bool,Windows::Foundation::Collections::Internal::AgileVector<Windows::ApplicationModel::Email::EmailRecipient *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Email::EmailRecipient *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Email::EmailRecipient *>,0> * *);
	long Lookup<EmailRecipientImpl,Windows::ApplicationModel::Email::IEmailRecipient>(Windows::Foundation::Collections::IPropertySet *,unsigned short const *,bool,Windows::ApplicationModel::Email::IEmailRecipient * *);
	long Lookup<EmailRecipientResolutionResultImpl,Windows::ApplicationModel::Email::EmailRecipientResolutionResult *>(Windows::Foundation::Collections::IPropertySet *,unsigned short const *,bool,Windows::Foundation::Collections::Internal::AgileVector<Windows::ApplicationModel::Email::EmailRecipientResolutionResult *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Email::EmailRecipientResolutionResult *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Email::EmailRecipientResolutionResult *>,0> * *);
	long Lookup<EmailRecipientResolutionResultImpl,Windows::ApplicationModel::Email::IEmailRecipientResolutionResult>(Windows::Foundation::Collections::IPropertySet *,unsigned short const *,bool,Windows::ApplicationModel::Email::IEmailRecipientResolutionResult * *);
	long Lookup<HSTRING__ *>(Windows::Foundation::Collections::IPropertySet *,unsigned short const *,bool,Windows::Foundation::Collections::Internal::AgileVector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0> * *);
	long Lookup<Windows::Foundation::DateTime>(Windows::Foundation::Collections::IPropertySet *,unsigned short const *,Windows::Foundation::IReference<Windows::Foundation::DateTime> * *);
	long Lookup<Windows::Security::Cryptography::Certificates::Certificate *>(Windows::Foundation::Collections::IPropertySet *,unsigned short const *,bool,Windows::Foundation::Collections::Internal::AgileVector<Windows::Security::Cryptography::Certificates::Certificate *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Cryptography::Certificates::Certificate *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Cryptography::Certificates::Certificate *>,0> * *);
};

class QueryResultBase
{
	long CommonGetMore(unsigned int,utl::vector<Udm::ResultSubset,utl::allocator<Udm::ResultSubset> > *);
	long EnsureEnumeration();
	long GetCountImpl(unsigned int *);
	long _Reposition(unsigned int,Udm::ResultSubset *);
	virtual long PreCommonGetMoreLoop(unsigned int);
protected:
	QueryResultBase();
	long GetItemsImpl<Windows::ApplicationModel::Email::EmailMessage *>(unsigned int,Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailMessage *> * *);
	long GetItemsToFulfill(unsigned int,utl::vector<Microsoft::WRL::ComPtr<IInspectable>,utl::allocator<Microsoft::WRL::ComPtr<IInspectable> > > *);
	long Initialize(UdmSessionHandle *);
	long ProduceResultSet<Windows::ApplicationModel::Email::EmailConversation *>(utl::vector<Microsoft::WRL::ComPtr<IInspectable>,utl::allocator<Microsoft::WRL::ComPtr<IInspectable> > > const &,Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailConversation *> * *);
	long ProduceResultSet<Windows::ApplicationModel::Email::EmailFolder *>(utl::vector<Microsoft::WRL::ComPtr<IInspectable>,utl::allocator<Microsoft::WRL::ComPtr<IInspectable> > > const &,Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailFolder *> * *);
	long ProduceResultSet<Windows::ApplicationModel::Email::EmailMailbox *>(utl::vector<Microsoft::WRL::ComPtr<IInspectable>,utl::allocator<Microsoft::WRL::ComPtr<IInspectable> > > const &,Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailMailbox *> * *);
	long ProduceResultSet<Windows::ApplicationModel::Email::EmailMailboxChange *>(utl::vector<Microsoft::WRL::ComPtr<IInspectable>,utl::allocator<Microsoft::WRL::ComPtr<IInspectable> > > const &,Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailMailboxChange *> * *);
	long ProduceResultSet<Windows::ApplicationModel::Email::EmailMessage *>(utl::vector<Microsoft::WRL::ComPtr<IInspectable>,utl::allocator<Microsoft::WRL::ComPtr<IInspectable> > > const &,Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailMessage *> * *);
	virtual long GetState(unsigned long *);
public:
	~QueryResultBase();
};

struct RpcOptionsHelper
{
	static long GetRpcOptions(IUnknown *,IRpcOptions * *);
};

class SyncManagerSessionHandle<Windows::ApplicationModel::Email::IEmailMailboxSyncManager,Windows::ApplicationModel::Email::EmailMailboxSyncManager,EmailMailboxSyncManagerImpl>
{
	virtual void SendEvent(UdmNotifyStructure *);
protected:
	long UpdateEventSender(UdmNotifyStructure *);
	virtual long Advise();
	virtual long CreateEventW(UdmNotifyStructure *,IInspectable * *);
	virtual long GetUdmNotifyControlTypes(unsigned long,unsigned long *,UdmNotifyControlType *);
	virtual long Unadvise();
public:
	long RuntimeClassInitialize(UdmObjectId const &,EmailMailboxSyncManagerImpl *,UdmSessionHandle *);
	virtual long Connect();
	virtual long ReconnectSession();
	virtual ~SyncManagerSessionHandle<Windows::ApplicationModel::Email::IEmailMailboxSyncManager,Windows::ApplicationModel::Email::EmailMailboxSyncManager,EmailMailboxSyncManagerImpl>();
};

namespace Udm
{
	struct ResultSubset
	{
		~ResultSubset();
	};

	long CopyUdmProperty(UdmPropertyValue const &,UdmPropertyValue *);
	long ReformUdmPropsForMidl(Udm::Vector<UdmPropertyValue> const &,UdmPropertyValue * *);
	void FreeUdmEmailAttachment(UdmEmailAttachment *);
	void FreeUdmEmailAutoReplySettings(UdmEmailAutoReplySettings *);
	void FreeUdmEmailParticipant(UdmEmailParticipant *);
	void FreeUdmEmailQueryOptions(UdmEmailQueryOptions *);
	void FreeUdmEmailRecipientResolutionResult(UdmEmailRecipientResolutionResult *);
	void FreeUdmNotify(UdmNotifyStructure *);
	void FreeUdmOperationResult(UdmOperationResult *);
	void FreeUdmPropVal(UdmPropertyValue *);
	void FreeUdmStreamPropVal(UdmStreamPropertyValue *);
	void MidlFreeUdmEmailAutoReplySettings(UdmEmailAutoReplySettings *);
};

class UdmPropertyBuffer
{
	long _FindValue(unsigned long,int,int *,UdmPropertyValue const * *);
public:
	UdmPropertyValue const * FindValue(unsigned long,int);
	long AddBlock(unsigned long *,UdmPropertyValue * *);
	long AddBlock(unsigned long,UdmPropertyValue *);
	long GetAllProperties(utl::vector<auto_struct<UdmPropertyValue,&void Udm::FreeUdmPropVal(UdmPropertyValue *)>,utl::allocator<auto_struct<UdmPropertyValue,&void Udm::FreeUdmPropVal(UdmPropertyValue *)> > > *);
	long GetSetProperties(utl::vector<auto_struct<UdmPropertyValue,&void Udm::FreeUdmPropVal(UdmPropertyValue *)>,utl::allocator<auto_struct<UdmPropertyValue,&void Udm::FreeUdmPropVal(UdmPropertyValue *)> > > *);
	long MoveAllSetPropertiesToRead();
	long ReadValue(unsigned long,HSTRING__ * *,int,int *);
	long ReadValue(unsigned long,Windows::Foundation::DateTime *,int,int *);
	long ReadValue(unsigned long,Windows::Foundation::TimeSpan *,int,int *);
	long ReadValue(unsigned long,unsigned char *,int,int *);
	long ReadValue(unsigned long,unsigned int *,int,int *);
	long ReadValue<UdmObjectId>(unsigned long,UdmObjectId *);
	long ReadValue<int>(unsigned long,int *,int);
	long ReadValue<unsigned short *>(unsigned long,unsigned short * *,int);
	long RemoveValue(unsigned long);
	long WriteValue(UdmPropertyValue const &);
};

class UdmServiceListener
{
	long _IsServiceRunning(int *);
	static long _ServiceInitializedWnfCallback(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
public:
	virtual void Shutdown();
};

class UdmSessionHandle
{
	long _ShouldRetryRpcCall(long,__MIDL_UserDataModelService_0001 *,int *);
public:
	long EnsureConnectedImpl(unsigned long);
	long GetMorePropsImpl(DataItemWithProps *,Array<unsigned long> const &);
	long InitializeForReconnect();
	static long GetRefPropCodes(UdmItemType,Reference<utl::vector<unsigned long,utl::allocator<unsigned long> > > * *);
	virtual long EnsureConnected();
	virtual long GetObjectProps(UdmObjectId const &,Array<unsigned long> const &,int *,unsigned long *,UdmPropertyValue * *);
	virtual long ReconnectSession();
	virtual ~UdmSessionHandle();
	void Shutdown();
};

class UdmStreamReference
{
protected:
	long OpenStream(Windows::Storage::Streams::IRandomAccessStreamWithContentType * *);
public:
	UdmStreamReference(UdmSessionHandle *,UdmObjectId const &,unsigned long);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long OpenReadAsync(Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *> * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct UserDataApisBaseProvider
{
	static _TlgProvider_t const * Provider();
};

class UserDataApisBaseTelemetry
{
	class ReconnectSession
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(unsigned long);
		~ReconnectSession();
	};

protected:
	static UserDataApisBaseTelemetry * Instance();
public:
	static void ReceiveServiceInitialize<int &>(int &);
	virtual void OnErrorReported(bool,wil::FailureInfo const &);
	void OpenStream_(unsigned long,unsigned short const *);
};

namespace Windows
{
	namespace Foundation
	{
		namespace Collections
		{
			namespace Detail
			{
				void _Cleanup<ApplicationModel::Email::IEmailAttachment,unsigned int>(ApplicationModel::Email::IEmailAttachment * * const,unsigned int);
				void _Cleanup<ApplicationModel::Email::IEmailConversation,unsigned int>(ApplicationModel::Email::IEmailConversation * * const,unsigned int);
				void _Cleanup<ApplicationModel::Email::IEmailFolder,unsigned int>(ApplicationModel::Email::IEmailFolder * * const,unsigned int);
				void _Cleanup<ApplicationModel::Email::IEmailMailbox,unsigned int>(ApplicationModel::Email::IEmailMailbox * * const,unsigned int);
				void _Cleanup<ApplicationModel::Email::IEmailMailboxAction,unsigned int>(ApplicationModel::Email::IEmailMailboxAction * * const,unsigned int);
				void _Cleanup<ApplicationModel::Email::IEmailMailboxChange,unsigned int>(ApplicationModel::Email::IEmailMailboxChange * * const,unsigned int);
				void _Cleanup<ApplicationModel::Email::IEmailMessage,unsigned int>(ApplicationModel::Email::IEmailMessage * * const,unsigned int);
				void _Cleanup<ApplicationModel::Email::IEmailRecipient,unsigned int>(ApplicationModel::Email::IEmailRecipient * * const,unsigned int);
				void _Cleanup<ApplicationModel::Email::IEmailRecipientResolutionResult,unsigned int>(ApplicationModel::Email::IEmailRecipientResolutionResult * * const,unsigned int);
				void _Cleanup<Security::Cryptography::Certificates::ICertificate,unsigned int>(Security::Cryptography::Certificates::ICertificate * * const,unsigned int);
				void _Cleanup<Storage::Streams::IBuffer,unsigned int>(Storage::Streams::IBuffer * * const,unsigned int);
			};

			struct IIterator_impl<HSTRING__ *,1>
			{
				virtual long GetMany(unsigned int,HSTRING__ * *,unsigned int *);
			};

			struct IIterator_impl<Internal::AggregateType<ApplicationModel::Email::EmailAttachment *,ApplicationModel::Email::IEmailAttachment *>,1>
			{
				virtual long GetMany(unsigned int,ApplicationModel::Email::IEmailAttachment * *,unsigned int *);
			};

			struct IIterator_impl<Internal::AggregateType<ApplicationModel::Email::EmailConversation *,ApplicationModel::Email::IEmailConversation *>,1>
			{
				virtual long GetMany(unsigned int,ApplicationModel::Email::IEmailConversation * *,unsigned int *);
			};

			struct IIterator_impl<Internal::AggregateType<ApplicationModel::Email::EmailFolder *,ApplicationModel::Email::IEmailFolder *>,1>
			{
				virtual long GetMany(unsigned int,ApplicationModel::Email::IEmailFolder * *,unsigned int *);
			};

			struct IIterator_impl<Internal::AggregateType<ApplicationModel::Email::EmailMailbox *,ApplicationModel::Email::IEmailMailbox *>,1>
			{
				virtual long GetMany(unsigned int,ApplicationModel::Email::IEmailMailbox * *,unsigned int *);
			};

			struct IIterator_impl<Internal::AggregateType<ApplicationModel::Email::EmailMailboxAction *,ApplicationModel::Email::IEmailMailboxAction *>,1>
			{
				virtual long GetMany(unsigned int,ApplicationModel::Email::IEmailMailboxAction * *,unsigned int *);
			};

			struct IIterator_impl<Internal::AggregateType<ApplicationModel::Email::EmailMailboxChange *,ApplicationModel::Email::IEmailMailboxChange *>,1>
			{
				virtual long GetMany(unsigned int,ApplicationModel::Email::IEmailMailboxChange * *,unsigned int *);
			};

			struct IIterator_impl<Internal::AggregateType<ApplicationModel::Email::EmailMessage *,ApplicationModel::Email::IEmailMessage *>,1>
			{
				virtual long GetMany(unsigned int,ApplicationModel::Email::IEmailMessage * *,unsigned int *);
			};

			struct IIterator_impl<Internal::AggregateType<ApplicationModel::Email::EmailRecipient *,ApplicationModel::Email::IEmailRecipient *>,1>
			{
				virtual long GetMany(unsigned int,ApplicationModel::Email::IEmailRecipient * *,unsigned int *);
			};

			struct IIterator_impl<Internal::AggregateType<ApplicationModel::Email::EmailRecipientResolutionResult *,ApplicationModel::Email::IEmailRecipientResolutionResult *>,1>
			{
				virtual long GetMany(unsigned int,ApplicationModel::Email::IEmailRecipientResolutionResult * *,unsigned int *);
			};

			struct IIterator_impl<Internal::AggregateType<Security::Cryptography::Certificates::Certificate *,Security::Cryptography::Certificates::ICertificate *>,1>
			{
				virtual long GetMany(unsigned int,Security::Cryptography::Certificates::ICertificate * *,unsigned int *);
			};

			struct IIterator_impl<Storage::Streams::IBuffer *,1>
			{
				virtual long GetMany(unsigned int,Storage::Streams::IBuffer * *,unsigned int *);
			};

			struct IVectorView_impl<HSTRING__ *,1>
			{
				virtual long GetMany(unsigned int,unsigned int,HSTRING__ * *,unsigned int *);
			};

			struct IVectorView_impl<Internal::AggregateType<ApplicationModel::Email::EmailAttachment *,ApplicationModel::Email::IEmailAttachment *>,1>
			{
				virtual long GetMany(unsigned int,unsigned int,ApplicationModel::Email::IEmailAttachment * *,unsigned int *);
			};

			struct IVectorView_impl<Internal::AggregateType<ApplicationModel::Email::EmailConversation *,ApplicationModel::Email::IEmailConversation *>,1>
			{
				virtual long GetMany(unsigned int,unsigned int,ApplicationModel::Email::IEmailConversation * *,unsigned int *);
			};

			struct IVectorView_impl<Internal::AggregateType<ApplicationModel::Email::EmailFolder *,ApplicationModel::Email::IEmailFolder *>,1>
			{
				virtual long GetMany(unsigned int,unsigned int,ApplicationModel::Email::IEmailFolder * *,unsigned int *);
			};

			struct IVectorView_impl<Internal::AggregateType<ApplicationModel::Email::EmailMailbox *,ApplicationModel::Email::IEmailMailbox *>,1>
			{
				virtual long GetMany(unsigned int,unsigned int,ApplicationModel::Email::IEmailMailbox * *,unsigned int *);
			};

			struct IVectorView_impl<Internal::AggregateType<ApplicationModel::Email::EmailMailboxAction *,ApplicationModel::Email::IEmailMailboxAction *>,1>
			{
				virtual long GetMany(unsigned int,unsigned int,ApplicationModel::Email::IEmailMailboxAction * *,unsigned int *);
			};

			struct IVectorView_impl<Internal::AggregateType<ApplicationModel::Email::EmailMailboxChange *,ApplicationModel::Email::IEmailMailboxChange *>,1>
			{
				virtual long GetMany(unsigned int,unsigned int,ApplicationModel::Email::IEmailMailboxChange * *,unsigned int *);
			};

			struct IVectorView_impl<Internal::AggregateType<ApplicationModel::Email::EmailMessage *,ApplicationModel::Email::IEmailMessage *>,1>
			{
				virtual long GetMany(unsigned int,unsigned int,ApplicationModel::Email::IEmailMessage * *,unsigned int *);
			};

			struct IVectorView_impl<Internal::AggregateType<ApplicationModel::Email::EmailRecipient *,ApplicationModel::Email::IEmailRecipient *>,1>
			{
				virtual long GetMany(unsigned int,unsigned int,ApplicationModel::Email::IEmailRecipient * *,unsigned int *);
			};

			struct IVectorView_impl<Internal::AggregateType<ApplicationModel::Email::EmailRecipientResolutionResult *,ApplicationModel::Email::IEmailRecipientResolutionResult *>,1>
			{
				virtual long GetMany(unsigned int,unsigned int,ApplicationModel::Email::IEmailRecipientResolutionResult * *,unsigned int *);
			};

			struct IVectorView_impl<Internal::AggregateType<Security::Cryptography::Certificates::Certificate *,Security::Cryptography::Certificates::ICertificate *>,1>
			{
				virtual long GetMany(unsigned int,unsigned int,Security::Cryptography::Certificates::ICertificate * *,unsigned int *);
			};

			struct IVectorView_impl<Storage::Streams::IBuffer *,1>
			{
				virtual long GetMany(unsigned int,unsigned int,Storage::Streams::IBuffer * *,unsigned int *);
			};

			struct IVector_impl<HSTRING__ *,1>
			{
				virtual long GetMany(unsigned int,unsigned int,HSTRING__ * *,unsigned int *);
				virtual long ReplaceAll(unsigned int,HSTRING__ * *);
			};

			struct IVector_impl<Internal::AggregateType<ApplicationModel::Email::EmailAttachment *,ApplicationModel::Email::IEmailAttachment *>,1>
			{
				virtual long GetMany(unsigned int,unsigned int,ApplicationModel::Email::IEmailAttachment * *,unsigned int *);
				virtual long ReplaceAll(unsigned int,ApplicationModel::Email::IEmailAttachment * *);
			};

			struct IVector_impl<Internal::AggregateType<ApplicationModel::Email::EmailConversation *,ApplicationModel::Email::IEmailConversation *>,1>
			{
				virtual long GetMany(unsigned int,unsigned int,ApplicationModel::Email::IEmailConversation * *,unsigned int *);
				virtual long ReplaceAll(unsigned int,ApplicationModel::Email::IEmailConversation * *);
			};

			struct IVector_impl<Internal::AggregateType<ApplicationModel::Email::EmailFolder *,ApplicationModel::Email::IEmailFolder *>,1>
			{
				virtual long GetMany(unsigned int,unsigned int,ApplicationModel::Email::IEmailFolder * *,unsigned int *);
				virtual long ReplaceAll(unsigned int,ApplicationModel::Email::IEmailFolder * *);
			};

			struct IVector_impl<Internal::AggregateType<ApplicationModel::Email::EmailMailbox *,ApplicationModel::Email::IEmailMailbox *>,1>
			{
				virtual long GetMany(unsigned int,unsigned int,ApplicationModel::Email::IEmailMailbox * *,unsigned int *);
				virtual long ReplaceAll(unsigned int,ApplicationModel::Email::IEmailMailbox * *);
			};

			struct IVector_impl<Internal::AggregateType<ApplicationModel::Email::EmailMailboxAction *,ApplicationModel::Email::IEmailMailboxAction *>,1>
			{
				virtual long GetMany(unsigned int,unsigned int,ApplicationModel::Email::IEmailMailboxAction * *,unsigned int *);
				virtual long ReplaceAll(unsigned int,ApplicationModel::Email::IEmailMailboxAction * *);
			};

			struct IVector_impl<Internal::AggregateType<ApplicationModel::Email::EmailMailboxChange *,ApplicationModel::Email::IEmailMailboxChange *>,1>
			{
				virtual long GetMany(unsigned int,unsigned int,ApplicationModel::Email::IEmailMailboxChange * *,unsigned int *);
				virtual long ReplaceAll(unsigned int,ApplicationModel::Email::IEmailMailboxChange * *);
			};

			struct IVector_impl<Internal::AggregateType<ApplicationModel::Email::EmailMessage *,ApplicationModel::Email::IEmailMessage *>,1>
			{
				virtual long GetMany(unsigned int,unsigned int,ApplicationModel::Email::IEmailMessage * *,unsigned int *);
				virtual long ReplaceAll(unsigned int,ApplicationModel::Email::IEmailMessage * *);
			};

			struct IVector_impl<Internal::AggregateType<ApplicationModel::Email::EmailRecipient *,ApplicationModel::Email::IEmailRecipient *>,1>
			{
				virtual long GetMany(unsigned int,unsigned int,ApplicationModel::Email::IEmailRecipient * *,unsigned int *);
				virtual long ReplaceAll(unsigned int,ApplicationModel::Email::IEmailRecipient * *);
			};

			struct IVector_impl<Internal::AggregateType<ApplicationModel::Email::EmailRecipientResolutionResult *,ApplicationModel::Email::IEmailRecipientResolutionResult *>,1>
			{
				virtual long GetMany(unsigned int,unsigned int,ApplicationModel::Email::IEmailRecipientResolutionResult * *,unsigned int *);
				virtual long ReplaceAll(unsigned int,ApplicationModel::Email::IEmailRecipientResolutionResult * *);
			};

			struct IVector_impl<Internal::AggregateType<Security::Cryptography::Certificates::Certificate *,Security::Cryptography::Certificates::ICertificate *>,1>
			{
				virtual long GetMany(unsigned int,unsigned int,Security::Cryptography::Certificates::ICertificate * *,unsigned int *);
				virtual long ReplaceAll(unsigned int,Security::Cryptography::Certificates::ICertificate * *);
			};

			struct IVector_impl<Storage::Streams::IBuffer *,1>
			{
				virtual long GetMany(unsigned int,unsigned int,Storage::Streams::IBuffer * *,unsigned int *);
				virtual long ReplaceAll(unsigned int,Storage::Streams::IBuffer * *);
			};

			namespace Internal
			{
				struct SimpleVectorIterator<ApplicationModel::Email::EmailAttachment *,Vector<ApplicationModel::Email::EmailAttachment *,DefaultEqualityPredicate<ApplicationModel::Email::EmailAttachment *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailAttachment *>,VectorOptions<ApplicationModel::Email::EmailAttachment *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailAttachment *>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorIterator<ApplicationModel::Email::EmailAttachment *,Vector<ApplicationModel::Email::EmailAttachment *,DefaultEqualityPredicate<ApplicationModel::Email::EmailAttachment *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailAttachment *>,VectorOptions<ApplicationModel::Email::EmailAttachment *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailAttachment *>,XWinRT::IntVersionTag,1>(Vector<ApplicationModel::Email::EmailAttachment *,DefaultEqualityPredicate<ApplicationModel::Email::EmailAttachment *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailAttachment *>,VectorOptions<ApplicationModel::Email::EmailAttachment *,0,1,0> > *,SimpleVectorIterator<ApplicationModel::Email::EmailAttachment *,Vector<ApplicationModel::Email::EmailAttachment *,DefaultEqualityPredicate<ApplicationModel::Email::EmailAttachment *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailAttachment *>,VectorOptions<ApplicationModel::Email::EmailAttachment *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailAttachment *>,XWinRT::IntVersionTag,1>::permission);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,ApplicationModel::Email::IEmailAttachment * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long MoveNext(unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Current(ApplicationModel::Email::IEmailAttachment * *);
					virtual long get_HasCurrent(unsigned char *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct SimpleVectorIterator<ApplicationModel::Email::EmailConversation *,Vector<ApplicationModel::Email::EmailConversation *,DefaultEqualityPredicate<ApplicationModel::Email::EmailConversation *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailConversation *>,VectorOptions<ApplicationModel::Email::EmailConversation *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailConversation *>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorIterator<ApplicationModel::Email::EmailConversation *,Vector<ApplicationModel::Email::EmailConversation *,DefaultEqualityPredicate<ApplicationModel::Email::EmailConversation *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailConversation *>,VectorOptions<ApplicationModel::Email::EmailConversation *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailConversation *>,XWinRT::IntVersionTag,1>(Vector<ApplicationModel::Email::EmailConversation *,DefaultEqualityPredicate<ApplicationModel::Email::EmailConversation *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailConversation *>,VectorOptions<ApplicationModel::Email::EmailConversation *,0,1,0> > *,SimpleVectorIterator<ApplicationModel::Email::EmailConversation *,Vector<ApplicationModel::Email::EmailConversation *,DefaultEqualityPredicate<ApplicationModel::Email::EmailConversation *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailConversation *>,VectorOptions<ApplicationModel::Email::EmailConversation *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailConversation *>,XWinRT::IntVersionTag,1>::permission);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,ApplicationModel::Email::IEmailConversation * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long MoveNext(unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Current(ApplicationModel::Email::IEmailConversation * *);
					virtual long get_HasCurrent(unsigned char *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct SimpleVectorIterator<ApplicationModel::Email::EmailFolder *,Vector<ApplicationModel::Email::EmailFolder *,DefaultEqualityPredicate<ApplicationModel::Email::EmailFolder *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailFolder *>,VectorOptions<ApplicationModel::Email::EmailFolder *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailFolder *>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorIterator<ApplicationModel::Email::EmailFolder *,Vector<ApplicationModel::Email::EmailFolder *,DefaultEqualityPredicate<ApplicationModel::Email::EmailFolder *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailFolder *>,VectorOptions<ApplicationModel::Email::EmailFolder *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailFolder *>,XWinRT::IntVersionTag,1>(Vector<ApplicationModel::Email::EmailFolder *,DefaultEqualityPredicate<ApplicationModel::Email::EmailFolder *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailFolder *>,VectorOptions<ApplicationModel::Email::EmailFolder *,0,1,0> > *,SimpleVectorIterator<ApplicationModel::Email::EmailFolder *,Vector<ApplicationModel::Email::EmailFolder *,DefaultEqualityPredicate<ApplicationModel::Email::EmailFolder *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailFolder *>,VectorOptions<ApplicationModel::Email::EmailFolder *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailFolder *>,XWinRT::IntVersionTag,1>::permission);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,ApplicationModel::Email::IEmailFolder * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long MoveNext(unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Current(ApplicationModel::Email::IEmailFolder * *);
					virtual long get_HasCurrent(unsigned char *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct SimpleVectorIterator<ApplicationModel::Email::EmailMailbox *,Vector<ApplicationModel::Email::EmailMailbox *,DefaultEqualityPredicate<ApplicationModel::Email::EmailMailbox *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailbox *>,VectorOptions<ApplicationModel::Email::EmailMailbox *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailbox *>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorIterator<ApplicationModel::Email::EmailMailbox *,Vector<ApplicationModel::Email::EmailMailbox *,DefaultEqualityPredicate<ApplicationModel::Email::EmailMailbox *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailbox *>,VectorOptions<ApplicationModel::Email::EmailMailbox *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailbox *>,XWinRT::IntVersionTag,1>(Vector<ApplicationModel::Email::EmailMailbox *,DefaultEqualityPredicate<ApplicationModel::Email::EmailMailbox *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailbox *>,VectorOptions<ApplicationModel::Email::EmailMailbox *,0,1,0> > *,SimpleVectorIterator<ApplicationModel::Email::EmailMailbox *,Vector<ApplicationModel::Email::EmailMailbox *,DefaultEqualityPredicate<ApplicationModel::Email::EmailMailbox *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailbox *>,VectorOptions<ApplicationModel::Email::EmailMailbox *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailbox *>,XWinRT::IntVersionTag,1>::permission);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,ApplicationModel::Email::IEmailMailbox * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long MoveNext(unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Current(ApplicationModel::Email::IEmailMailbox * *);
					virtual long get_HasCurrent(unsigned char *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct SimpleVectorIterator<ApplicationModel::Email::EmailMailboxAction *,Vector<ApplicationModel::Email::EmailMailboxAction *,DefaultEqualityPredicate<ApplicationModel::Email::EmailMailboxAction *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailboxAction *>,VectorOptions<ApplicationModel::Email::EmailMailboxAction *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailboxAction *>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorIterator<ApplicationModel::Email::EmailMailboxAction *,Vector<ApplicationModel::Email::EmailMailboxAction *,DefaultEqualityPredicate<ApplicationModel::Email::EmailMailboxAction *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailboxAction *>,VectorOptions<ApplicationModel::Email::EmailMailboxAction *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailboxAction *>,XWinRT::IntVersionTag,1>(Vector<ApplicationModel::Email::EmailMailboxAction *,DefaultEqualityPredicate<ApplicationModel::Email::EmailMailboxAction *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailboxAction *>,VectorOptions<ApplicationModel::Email::EmailMailboxAction *,0,1,0> > *,SimpleVectorIterator<ApplicationModel::Email::EmailMailboxAction *,Vector<ApplicationModel::Email::EmailMailboxAction *,DefaultEqualityPredicate<ApplicationModel::Email::EmailMailboxAction *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailboxAction *>,VectorOptions<ApplicationModel::Email::EmailMailboxAction *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailboxAction *>,XWinRT::IntVersionTag,1>::permission);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,ApplicationModel::Email::IEmailMailboxAction * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long MoveNext(unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Current(ApplicationModel::Email::IEmailMailboxAction * *);
					virtual long get_HasCurrent(unsigned char *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct SimpleVectorIterator<ApplicationModel::Email::EmailMailboxChange *,Vector<ApplicationModel::Email::EmailMailboxChange *,DefaultEqualityPredicate<ApplicationModel::Email::EmailMailboxChange *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailboxChange *>,VectorOptions<ApplicationModel::Email::EmailMailboxChange *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailboxChange *>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorIterator<ApplicationModel::Email::EmailMailboxChange *,Vector<ApplicationModel::Email::EmailMailboxChange *,DefaultEqualityPredicate<ApplicationModel::Email::EmailMailboxChange *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailboxChange *>,VectorOptions<ApplicationModel::Email::EmailMailboxChange *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailboxChange *>,XWinRT::IntVersionTag,1>(Vector<ApplicationModel::Email::EmailMailboxChange *,DefaultEqualityPredicate<ApplicationModel::Email::EmailMailboxChange *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailboxChange *>,VectorOptions<ApplicationModel::Email::EmailMailboxChange *,0,1,0> > *,SimpleVectorIterator<ApplicationModel::Email::EmailMailboxChange *,Vector<ApplicationModel::Email::EmailMailboxChange *,DefaultEqualityPredicate<ApplicationModel::Email::EmailMailboxChange *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailboxChange *>,VectorOptions<ApplicationModel::Email::EmailMailboxChange *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailboxChange *>,XWinRT::IntVersionTag,1>::permission);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,ApplicationModel::Email::IEmailMailboxChange * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long MoveNext(unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Current(ApplicationModel::Email::IEmailMailboxChange * *);
					virtual long get_HasCurrent(unsigned char *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct SimpleVectorIterator<ApplicationModel::Email::EmailMessage *,Vector<ApplicationModel::Email::EmailMessage *,DefaultEqualityPredicate<ApplicationModel::Email::EmailMessage *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailMessage *>,VectorOptions<ApplicationModel::Email::EmailMessage *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailMessage *>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorIterator<ApplicationModel::Email::EmailMessage *,Vector<ApplicationModel::Email::EmailMessage *,DefaultEqualityPredicate<ApplicationModel::Email::EmailMessage *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailMessage *>,VectorOptions<ApplicationModel::Email::EmailMessage *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailMessage *>,XWinRT::IntVersionTag,1>(Vector<ApplicationModel::Email::EmailMessage *,DefaultEqualityPredicate<ApplicationModel::Email::EmailMessage *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailMessage *>,VectorOptions<ApplicationModel::Email::EmailMessage *,0,1,0> > *,SimpleVectorIterator<ApplicationModel::Email::EmailMessage *,Vector<ApplicationModel::Email::EmailMessage *,DefaultEqualityPredicate<ApplicationModel::Email::EmailMessage *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailMessage *>,VectorOptions<ApplicationModel::Email::EmailMessage *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailMessage *>,XWinRT::IntVersionTag,1>::permission);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,ApplicationModel::Email::IEmailMessage * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long MoveNext(unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Current(ApplicationModel::Email::IEmailMessage * *);
					virtual long get_HasCurrent(unsigned char *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct SimpleVectorIterator<ApplicationModel::Email::EmailRecipient *,Vector<ApplicationModel::Email::EmailRecipient *,DefaultEqualityPredicate<ApplicationModel::Email::EmailRecipient *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailRecipient *>,VectorOptions<ApplicationModel::Email::EmailRecipient *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailRecipient *>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorIterator<ApplicationModel::Email::EmailRecipient *,Vector<ApplicationModel::Email::EmailRecipient *,DefaultEqualityPredicate<ApplicationModel::Email::EmailRecipient *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailRecipient *>,VectorOptions<ApplicationModel::Email::EmailRecipient *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailRecipient *>,XWinRT::IntVersionTag,1>(Vector<ApplicationModel::Email::EmailRecipient *,DefaultEqualityPredicate<ApplicationModel::Email::EmailRecipient *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailRecipient *>,VectorOptions<ApplicationModel::Email::EmailRecipient *,0,1,0> > *,SimpleVectorIterator<ApplicationModel::Email::EmailRecipient *,Vector<ApplicationModel::Email::EmailRecipient *,DefaultEqualityPredicate<ApplicationModel::Email::EmailRecipient *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailRecipient *>,VectorOptions<ApplicationModel::Email::EmailRecipient *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailRecipient *>,XWinRT::IntVersionTag,1>::permission);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,ApplicationModel::Email::IEmailRecipient * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long MoveNext(unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Current(ApplicationModel::Email::IEmailRecipient * *);
					virtual long get_HasCurrent(unsigned char *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct SimpleVectorIterator<ApplicationModel::Email::EmailRecipientResolutionResult *,Vector<ApplicationModel::Email::EmailRecipientResolutionResult *,DefaultEqualityPredicate<ApplicationModel::Email::EmailRecipientResolutionResult *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailRecipientResolutionResult *>,VectorOptions<ApplicationModel::Email::EmailRecipientResolutionResult *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailRecipientResolutionResult *>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorIterator<ApplicationModel::Email::EmailRecipientResolutionResult *,Vector<ApplicationModel::Email::EmailRecipientResolutionResult *,DefaultEqualityPredicate<ApplicationModel::Email::EmailRecipientResolutionResult *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailRecipientResolutionResult *>,VectorOptions<ApplicationModel::Email::EmailRecipientResolutionResult *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailRecipientResolutionResult *>,XWinRT::IntVersionTag,1>(Vector<ApplicationModel::Email::EmailRecipientResolutionResult *,DefaultEqualityPredicate<ApplicationModel::Email::EmailRecipientResolutionResult *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailRecipientResolutionResult *>,VectorOptions<ApplicationModel::Email::EmailRecipientResolutionResult *,0,1,0> > *,SimpleVectorIterator<ApplicationModel::Email::EmailRecipientResolutionResult *,Vector<ApplicationModel::Email::EmailRecipientResolutionResult *,DefaultEqualityPredicate<ApplicationModel::Email::EmailRecipientResolutionResult *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailRecipientResolutionResult *>,VectorOptions<ApplicationModel::Email::EmailRecipientResolutionResult *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailRecipientResolutionResult *>,XWinRT::IntVersionTag,1>::permission);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,ApplicationModel::Email::IEmailRecipientResolutionResult * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long MoveNext(unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Current(ApplicationModel::Email::IEmailRecipientResolutionResult * *);
					virtual long get_HasCurrent(unsigned char *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct SimpleVectorIterator<HSTRING__ *,Vector<HSTRING__ *,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,VectorOptions<HSTRING__ *,0,1,0> >,DefaultLifetimeTraits<HSTRING__ *>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorIterator<HSTRING__ *,Vector<HSTRING__ *,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,VectorOptions<HSTRING__ *,0,1,0> >,DefaultLifetimeTraits<HSTRING__ *>,XWinRT::IntVersionTag,1>(Vector<HSTRING__ *,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,VectorOptions<HSTRING__ *,0,1,0> > *,SimpleVectorIterator<HSTRING__ *,Vector<HSTRING__ *,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,VectorOptions<HSTRING__ *,0,1,0> >,DefaultLifetimeTraits<HSTRING__ *>,XWinRT::IntVersionTag,1>::permission);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,HSTRING__ * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long MoveNext(unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Current(HSTRING__ * *);
					virtual long get_HasCurrent(unsigned char *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct SimpleVectorIterator<Security::Cryptography::Certificates::Certificate *,Vector<Security::Cryptography::Certificates::Certificate *,DefaultEqualityPredicate<Security::Cryptography::Certificates::Certificate *>,DefaultLifetimeTraits<Security::Cryptography::Certificates::Certificate *>,VectorOptions<Security::Cryptography::Certificates::Certificate *,0,1,0> >,DefaultLifetimeTraits<Security::Cryptography::Certificates::Certificate *>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorIterator<Security::Cryptography::Certificates::Certificate *,Vector<Security::Cryptography::Certificates::Certificate *,DefaultEqualityPredicate<Security::Cryptography::Certificates::Certificate *>,DefaultLifetimeTraits<Security::Cryptography::Certificates::Certificate *>,VectorOptions<Security::Cryptography::Certificates::Certificate *,0,1,0> >,DefaultLifetimeTraits<Security::Cryptography::Certificates::Certificate *>,XWinRT::IntVersionTag,1>(Vector<Security::Cryptography::Certificates::Certificate *,DefaultEqualityPredicate<Security::Cryptography::Certificates::Certificate *>,DefaultLifetimeTraits<Security::Cryptography::Certificates::Certificate *>,VectorOptions<Security::Cryptography::Certificates::Certificate *,0,1,0> > *,SimpleVectorIterator<Security::Cryptography::Certificates::Certificate *,Vector<Security::Cryptography::Certificates::Certificate *,DefaultEqualityPredicate<Security::Cryptography::Certificates::Certificate *>,DefaultLifetimeTraits<Security::Cryptography::Certificates::Certificate *>,VectorOptions<Security::Cryptography::Certificates::Certificate *,0,1,0> >,DefaultLifetimeTraits<Security::Cryptography::Certificates::Certificate *>,XWinRT::IntVersionTag,1>::permission);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,Security::Cryptography::Certificates::ICertificate * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long MoveNext(unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Current(Security::Cryptography::Certificates::ICertificate * *);
					virtual long get_HasCurrent(unsigned char *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct SimpleVectorIterator<Storage::Streams::IBuffer *,Vector<Storage::Streams::IBuffer *,DefaultEqualityPredicate<Storage::Streams::IBuffer *>,DefaultLifetimeTraits<Storage::Streams::IBuffer *>,VectorOptions<Storage::Streams::IBuffer *,0,1,0> >,DefaultLifetimeTraits<Storage::Streams::IBuffer *>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorIterator<Storage::Streams::IBuffer *,Vector<Storage::Streams::IBuffer *,DefaultEqualityPredicate<Storage::Streams::IBuffer *>,DefaultLifetimeTraits<Storage::Streams::IBuffer *>,VectorOptions<Storage::Streams::IBuffer *,0,1,0> >,DefaultLifetimeTraits<Storage::Streams::IBuffer *>,XWinRT::IntVersionTag,1>(Vector<Storage::Streams::IBuffer *,DefaultEqualityPredicate<Storage::Streams::IBuffer *>,DefaultLifetimeTraits<Storage::Streams::IBuffer *>,VectorOptions<Storage::Streams::IBuffer *,0,1,0> > *,SimpleVectorIterator<Storage::Streams::IBuffer *,Vector<Storage::Streams::IBuffer *,DefaultEqualityPredicate<Storage::Streams::IBuffer *>,DefaultLifetimeTraits<Storage::Streams::IBuffer *>,VectorOptions<Storage::Streams::IBuffer *,0,1,0> >,DefaultLifetimeTraits<Storage::Streams::IBuffer *>,XWinRT::IntVersionTag,1>::permission);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,Storage::Streams::IBuffer * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long MoveNext(unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Current(Storage::Streams::IBuffer * *);
					virtual long get_HasCurrent(unsigned char *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct SimpleVectorView<ApplicationModel::Email::EmailAttachment *,Vector<ApplicationModel::Email::EmailAttachment *,DefaultEqualityPredicate<ApplicationModel::Email::EmailAttachment *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailAttachment *>,VectorOptions<ApplicationModel::Email::EmailAttachment *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailAttachment *>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorView<ApplicationModel::Email::EmailAttachment *,Vector<ApplicationModel::Email::EmailAttachment *,DefaultEqualityPredicate<ApplicationModel::Email::EmailAttachment *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailAttachment *>,VectorOptions<ApplicationModel::Email::EmailAttachment *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailAttachment *>,XWinRT::IntVersionTag,1>(Vector<ApplicationModel::Email::EmailAttachment *,DefaultEqualityPredicate<ApplicationModel::Email::EmailAttachment *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailAttachment *>,VectorOptions<ApplicationModel::Email::EmailAttachment *,0,1,0> > *,SimpleVectorView<ApplicationModel::Email::EmailAttachment *,Vector<ApplicationModel::Email::EmailAttachment *,DefaultEqualityPredicate<ApplicationModel::Email::EmailAttachment *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailAttachment *>,VectorOptions<ApplicationModel::Email::EmailAttachment *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailAttachment *>,XWinRT::IntVersionTag,1>::permission);
					virtual long First(IIterator<ApplicationModel::Email::EmailAttachment *> * *);
					virtual long GetAt(unsigned int,ApplicationModel::Email::IEmailAttachment * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,ApplicationModel::Email::IEmailAttachment * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long IndexOf(ApplicationModel::Email::IEmailAttachment *,unsigned int *,unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct SimpleVectorView<ApplicationModel::Email::EmailConversation *,Vector<ApplicationModel::Email::EmailConversation *,DefaultEqualityPredicate<ApplicationModel::Email::EmailConversation *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailConversation *>,VectorOptions<ApplicationModel::Email::EmailConversation *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailConversation *>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorView<ApplicationModel::Email::EmailConversation *,Vector<ApplicationModel::Email::EmailConversation *,DefaultEqualityPredicate<ApplicationModel::Email::EmailConversation *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailConversation *>,VectorOptions<ApplicationModel::Email::EmailConversation *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailConversation *>,XWinRT::IntVersionTag,1>(Vector<ApplicationModel::Email::EmailConversation *,DefaultEqualityPredicate<ApplicationModel::Email::EmailConversation *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailConversation *>,VectorOptions<ApplicationModel::Email::EmailConversation *,0,1,0> > *,SimpleVectorView<ApplicationModel::Email::EmailConversation *,Vector<ApplicationModel::Email::EmailConversation *,DefaultEqualityPredicate<ApplicationModel::Email::EmailConversation *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailConversation *>,VectorOptions<ApplicationModel::Email::EmailConversation *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailConversation *>,XWinRT::IntVersionTag,1>::permission);
					virtual long First(IIterator<ApplicationModel::Email::EmailConversation *> * *);
					virtual long GetAt(unsigned int,ApplicationModel::Email::IEmailConversation * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,ApplicationModel::Email::IEmailConversation * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long IndexOf(ApplicationModel::Email::IEmailConversation *,unsigned int *,unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct SimpleVectorView<ApplicationModel::Email::EmailFolder *,Vector<ApplicationModel::Email::EmailFolder *,DefaultEqualityPredicate<ApplicationModel::Email::EmailFolder *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailFolder *>,VectorOptions<ApplicationModel::Email::EmailFolder *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailFolder *>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorView<ApplicationModel::Email::EmailFolder *,Vector<ApplicationModel::Email::EmailFolder *,DefaultEqualityPredicate<ApplicationModel::Email::EmailFolder *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailFolder *>,VectorOptions<ApplicationModel::Email::EmailFolder *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailFolder *>,XWinRT::IntVersionTag,1>(Vector<ApplicationModel::Email::EmailFolder *,DefaultEqualityPredicate<ApplicationModel::Email::EmailFolder *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailFolder *>,VectorOptions<ApplicationModel::Email::EmailFolder *,0,1,0> > *,SimpleVectorView<ApplicationModel::Email::EmailFolder *,Vector<ApplicationModel::Email::EmailFolder *,DefaultEqualityPredicate<ApplicationModel::Email::EmailFolder *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailFolder *>,VectorOptions<ApplicationModel::Email::EmailFolder *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailFolder *>,XWinRT::IntVersionTag,1>::permission);
					virtual long First(IIterator<ApplicationModel::Email::EmailFolder *> * *);
					virtual long GetAt(unsigned int,ApplicationModel::Email::IEmailFolder * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,ApplicationModel::Email::IEmailFolder * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long IndexOf(ApplicationModel::Email::IEmailFolder *,unsigned int *,unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct SimpleVectorView<ApplicationModel::Email::EmailMailbox *,Vector<ApplicationModel::Email::EmailMailbox *,DefaultEqualityPredicate<ApplicationModel::Email::EmailMailbox *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailbox *>,VectorOptions<ApplicationModel::Email::EmailMailbox *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailbox *>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorView<ApplicationModel::Email::EmailMailbox *,Vector<ApplicationModel::Email::EmailMailbox *,DefaultEqualityPredicate<ApplicationModel::Email::EmailMailbox *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailbox *>,VectorOptions<ApplicationModel::Email::EmailMailbox *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailbox *>,XWinRT::IntVersionTag,1>(Vector<ApplicationModel::Email::EmailMailbox *,DefaultEqualityPredicate<ApplicationModel::Email::EmailMailbox *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailbox *>,VectorOptions<ApplicationModel::Email::EmailMailbox *,0,1,0> > *,SimpleVectorView<ApplicationModel::Email::EmailMailbox *,Vector<ApplicationModel::Email::EmailMailbox *,DefaultEqualityPredicate<ApplicationModel::Email::EmailMailbox *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailbox *>,VectorOptions<ApplicationModel::Email::EmailMailbox *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailbox *>,XWinRT::IntVersionTag,1>::permission);
					virtual long First(IIterator<ApplicationModel::Email::EmailMailbox *> * *);
					virtual long GetAt(unsigned int,ApplicationModel::Email::IEmailMailbox * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,ApplicationModel::Email::IEmailMailbox * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long IndexOf(ApplicationModel::Email::IEmailMailbox *,unsigned int *,unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct SimpleVectorView<ApplicationModel::Email::EmailMailboxAction *,Vector<ApplicationModel::Email::EmailMailboxAction *,DefaultEqualityPredicate<ApplicationModel::Email::EmailMailboxAction *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailboxAction *>,VectorOptions<ApplicationModel::Email::EmailMailboxAction *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailboxAction *>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorView<ApplicationModel::Email::EmailMailboxAction *,Vector<ApplicationModel::Email::EmailMailboxAction *,DefaultEqualityPredicate<ApplicationModel::Email::EmailMailboxAction *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailboxAction *>,VectorOptions<ApplicationModel::Email::EmailMailboxAction *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailboxAction *>,XWinRT::IntVersionTag,1>(Vector<ApplicationModel::Email::EmailMailboxAction *,DefaultEqualityPredicate<ApplicationModel::Email::EmailMailboxAction *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailboxAction *>,VectorOptions<ApplicationModel::Email::EmailMailboxAction *,0,1,0> > *,SimpleVectorView<ApplicationModel::Email::EmailMailboxAction *,Vector<ApplicationModel::Email::EmailMailboxAction *,DefaultEqualityPredicate<ApplicationModel::Email::EmailMailboxAction *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailboxAction *>,VectorOptions<ApplicationModel::Email::EmailMailboxAction *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailboxAction *>,XWinRT::IntVersionTag,1>::permission);
					virtual long First(IIterator<ApplicationModel::Email::EmailMailboxAction *> * *);
					virtual long GetAt(unsigned int,ApplicationModel::Email::IEmailMailboxAction * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,ApplicationModel::Email::IEmailMailboxAction * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long IndexOf(ApplicationModel::Email::IEmailMailboxAction *,unsigned int *,unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct SimpleVectorView<ApplicationModel::Email::EmailMailboxChange *,Vector<ApplicationModel::Email::EmailMailboxChange *,DefaultEqualityPredicate<ApplicationModel::Email::EmailMailboxChange *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailboxChange *>,VectorOptions<ApplicationModel::Email::EmailMailboxChange *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailboxChange *>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorView<ApplicationModel::Email::EmailMailboxChange *,Vector<ApplicationModel::Email::EmailMailboxChange *,DefaultEqualityPredicate<ApplicationModel::Email::EmailMailboxChange *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailboxChange *>,VectorOptions<ApplicationModel::Email::EmailMailboxChange *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailboxChange *>,XWinRT::IntVersionTag,1>(Vector<ApplicationModel::Email::EmailMailboxChange *,DefaultEqualityPredicate<ApplicationModel::Email::EmailMailboxChange *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailboxChange *>,VectorOptions<ApplicationModel::Email::EmailMailboxChange *,0,1,0> > *,SimpleVectorView<ApplicationModel::Email::EmailMailboxChange *,Vector<ApplicationModel::Email::EmailMailboxChange *,DefaultEqualityPredicate<ApplicationModel::Email::EmailMailboxChange *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailboxChange *>,VectorOptions<ApplicationModel::Email::EmailMailboxChange *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailboxChange *>,XWinRT::IntVersionTag,1>::permission);
					virtual long First(IIterator<ApplicationModel::Email::EmailMailboxChange *> * *);
					virtual long GetAt(unsigned int,ApplicationModel::Email::IEmailMailboxChange * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,ApplicationModel::Email::IEmailMailboxChange * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long IndexOf(ApplicationModel::Email::IEmailMailboxChange *,unsigned int *,unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct SimpleVectorView<ApplicationModel::Email::EmailMessage *,Vector<ApplicationModel::Email::EmailMessage *,DefaultEqualityPredicate<ApplicationModel::Email::EmailMessage *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailMessage *>,VectorOptions<ApplicationModel::Email::EmailMessage *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailMessage *>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorView<ApplicationModel::Email::EmailMessage *,Vector<ApplicationModel::Email::EmailMessage *,DefaultEqualityPredicate<ApplicationModel::Email::EmailMessage *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailMessage *>,VectorOptions<ApplicationModel::Email::EmailMessage *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailMessage *>,XWinRT::IntVersionTag,1>(Vector<ApplicationModel::Email::EmailMessage *,DefaultEqualityPredicate<ApplicationModel::Email::EmailMessage *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailMessage *>,VectorOptions<ApplicationModel::Email::EmailMessage *,0,1,0> > *,SimpleVectorView<ApplicationModel::Email::EmailMessage *,Vector<ApplicationModel::Email::EmailMessage *,DefaultEqualityPredicate<ApplicationModel::Email::EmailMessage *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailMessage *>,VectorOptions<ApplicationModel::Email::EmailMessage *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailMessage *>,XWinRT::IntVersionTag,1>::permission);
					virtual long First(IIterator<ApplicationModel::Email::EmailMessage *> * *);
					virtual long GetAt(unsigned int,ApplicationModel::Email::IEmailMessage * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,ApplicationModel::Email::IEmailMessage * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long IndexOf(ApplicationModel::Email::IEmailMessage *,unsigned int *,unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct SimpleVectorView<ApplicationModel::Email::EmailRecipient *,Vector<ApplicationModel::Email::EmailRecipient *,DefaultEqualityPredicate<ApplicationModel::Email::EmailRecipient *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailRecipient *>,VectorOptions<ApplicationModel::Email::EmailRecipient *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailRecipient *>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorView<ApplicationModel::Email::EmailRecipient *,Vector<ApplicationModel::Email::EmailRecipient *,DefaultEqualityPredicate<ApplicationModel::Email::EmailRecipient *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailRecipient *>,VectorOptions<ApplicationModel::Email::EmailRecipient *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailRecipient *>,XWinRT::IntVersionTag,1>(Vector<ApplicationModel::Email::EmailRecipient *,DefaultEqualityPredicate<ApplicationModel::Email::EmailRecipient *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailRecipient *>,VectorOptions<ApplicationModel::Email::EmailRecipient *,0,1,0> > *,SimpleVectorView<ApplicationModel::Email::EmailRecipient *,Vector<ApplicationModel::Email::EmailRecipient *,DefaultEqualityPredicate<ApplicationModel::Email::EmailRecipient *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailRecipient *>,VectorOptions<ApplicationModel::Email::EmailRecipient *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailRecipient *>,XWinRT::IntVersionTag,1>::permission);
					virtual long First(IIterator<ApplicationModel::Email::EmailRecipient *> * *);
					virtual long GetAt(unsigned int,ApplicationModel::Email::IEmailRecipient * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,ApplicationModel::Email::IEmailRecipient * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long IndexOf(ApplicationModel::Email::IEmailRecipient *,unsigned int *,unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct SimpleVectorView<ApplicationModel::Email::EmailRecipientResolutionResult *,Vector<ApplicationModel::Email::EmailRecipientResolutionResult *,DefaultEqualityPredicate<ApplicationModel::Email::EmailRecipientResolutionResult *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailRecipientResolutionResult *>,VectorOptions<ApplicationModel::Email::EmailRecipientResolutionResult *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailRecipientResolutionResult *>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorView<ApplicationModel::Email::EmailRecipientResolutionResult *,Vector<ApplicationModel::Email::EmailRecipientResolutionResult *,DefaultEqualityPredicate<ApplicationModel::Email::EmailRecipientResolutionResult *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailRecipientResolutionResult *>,VectorOptions<ApplicationModel::Email::EmailRecipientResolutionResult *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailRecipientResolutionResult *>,XWinRT::IntVersionTag,1>(Vector<ApplicationModel::Email::EmailRecipientResolutionResult *,DefaultEqualityPredicate<ApplicationModel::Email::EmailRecipientResolutionResult *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailRecipientResolutionResult *>,VectorOptions<ApplicationModel::Email::EmailRecipientResolutionResult *,0,1,0> > *,SimpleVectorView<ApplicationModel::Email::EmailRecipientResolutionResult *,Vector<ApplicationModel::Email::EmailRecipientResolutionResult *,DefaultEqualityPredicate<ApplicationModel::Email::EmailRecipientResolutionResult *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailRecipientResolutionResult *>,VectorOptions<ApplicationModel::Email::EmailRecipientResolutionResult *,0,1,0> >,DefaultLifetimeTraits<ApplicationModel::Email::EmailRecipientResolutionResult *>,XWinRT::IntVersionTag,1>::permission);
					virtual long First(IIterator<ApplicationModel::Email::EmailRecipientResolutionResult *> * *);
					virtual long GetAt(unsigned int,ApplicationModel::Email::IEmailRecipientResolutionResult * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,ApplicationModel::Email::IEmailRecipientResolutionResult * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long IndexOf(ApplicationModel::Email::IEmailRecipientResolutionResult *,unsigned int *,unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct SimpleVectorView<HSTRING__ *,Vector<HSTRING__ *,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,VectorOptions<HSTRING__ *,0,1,0> >,DefaultLifetimeTraits<HSTRING__ *>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorView<HSTRING__ *,Vector<HSTRING__ *,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,VectorOptions<HSTRING__ *,0,1,0> >,DefaultLifetimeTraits<HSTRING__ *>,XWinRT::IntVersionTag,1>(Vector<HSTRING__ *,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,VectorOptions<HSTRING__ *,0,1,0> > *,SimpleVectorView<HSTRING__ *,Vector<HSTRING__ *,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,VectorOptions<HSTRING__ *,0,1,0> >,DefaultLifetimeTraits<HSTRING__ *>,XWinRT::IntVersionTag,1>::permission);
					virtual long First(IIterator<HSTRING__ *> * *);
					virtual long GetAt(unsigned int,HSTRING__ * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,HSTRING__ * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long IndexOf(HSTRING__ *,unsigned int *,unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct SimpleVectorView<Security::Cryptography::Certificates::Certificate *,Vector<Security::Cryptography::Certificates::Certificate *,DefaultEqualityPredicate<Security::Cryptography::Certificates::Certificate *>,DefaultLifetimeTraits<Security::Cryptography::Certificates::Certificate *>,VectorOptions<Security::Cryptography::Certificates::Certificate *,0,1,0> >,DefaultLifetimeTraits<Security::Cryptography::Certificates::Certificate *>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorView<Security::Cryptography::Certificates::Certificate *,Vector<Security::Cryptography::Certificates::Certificate *,DefaultEqualityPredicate<Security::Cryptography::Certificates::Certificate *>,DefaultLifetimeTraits<Security::Cryptography::Certificates::Certificate *>,VectorOptions<Security::Cryptography::Certificates::Certificate *,0,1,0> >,DefaultLifetimeTraits<Security::Cryptography::Certificates::Certificate *>,XWinRT::IntVersionTag,1>(Vector<Security::Cryptography::Certificates::Certificate *,DefaultEqualityPredicate<Security::Cryptography::Certificates::Certificate *>,DefaultLifetimeTraits<Security::Cryptography::Certificates::Certificate *>,VectorOptions<Security::Cryptography::Certificates::Certificate *,0,1,0> > *,SimpleVectorView<Security::Cryptography::Certificates::Certificate *,Vector<Security::Cryptography::Certificates::Certificate *,DefaultEqualityPredicate<Security::Cryptography::Certificates::Certificate *>,DefaultLifetimeTraits<Security::Cryptography::Certificates::Certificate *>,VectorOptions<Security::Cryptography::Certificates::Certificate *,0,1,0> >,DefaultLifetimeTraits<Security::Cryptography::Certificates::Certificate *>,XWinRT::IntVersionTag,1>::permission);
					virtual long First(IIterator<Security::Cryptography::Certificates::Certificate *> * *);
					virtual long GetAt(unsigned int,Security::Cryptography::Certificates::ICertificate * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,Security::Cryptography::Certificates::ICertificate * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long IndexOf(Security::Cryptography::Certificates::ICertificate *,unsigned int *,unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct SimpleVectorView<Storage::Streams::IBuffer *,Vector<Storage::Streams::IBuffer *,DefaultEqualityPredicate<Storage::Streams::IBuffer *>,DefaultLifetimeTraits<Storage::Streams::IBuffer *>,VectorOptions<Storage::Streams::IBuffer *,0,1,0> >,DefaultLifetimeTraits<Storage::Streams::IBuffer *>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorView<Storage::Streams::IBuffer *,Vector<Storage::Streams::IBuffer *,DefaultEqualityPredicate<Storage::Streams::IBuffer *>,DefaultLifetimeTraits<Storage::Streams::IBuffer *>,VectorOptions<Storage::Streams::IBuffer *,0,1,0> >,DefaultLifetimeTraits<Storage::Streams::IBuffer *>,XWinRT::IntVersionTag,1>(Vector<Storage::Streams::IBuffer *,DefaultEqualityPredicate<Storage::Streams::IBuffer *>,DefaultLifetimeTraits<Storage::Streams::IBuffer *>,VectorOptions<Storage::Streams::IBuffer *,0,1,0> > *,SimpleVectorView<Storage::Streams::IBuffer *,Vector<Storage::Streams::IBuffer *,DefaultEqualityPredicate<Storage::Streams::IBuffer *>,DefaultLifetimeTraits<Storage::Streams::IBuffer *>,VectorOptions<Storage::Streams::IBuffer *,0,1,0> >,DefaultLifetimeTraits<Storage::Streams::IBuffer *>,XWinRT::IntVersionTag,1>::permission);
					virtual long First(IIterator<Storage::Streams::IBuffer *> * *);
					virtual long GetAt(unsigned int,Storage::Streams::IBuffer * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,Storage::Streams::IBuffer * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long IndexOf(Storage::Streams::IBuffer *,unsigned int *,unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				class Vector<ApplicationModel::Email::EmailAttachment *,DefaultEqualityPredicate<ApplicationModel::Email::EmailAttachment *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailAttachment *>,VectorOptions<ApplicationModel::Email::EmailAttachment *,0,1,0> >
				{
					long IndexOfInternal(XWinRT::detail::GitStorageType<ApplicationModel::Email::IEmailAttachment> *,unsigned int,ApplicationModel::Email::IEmailAttachment *,unsigned int *,unsigned char *);
					long InsertAtInternal(unsigned int,ApplicationModel::Email::IEmailAttachment *,bool);
					long RemoveAtInternal(unsigned int,bool);
					long ResizeStorage(unsigned int);
					void _EraseAll(XWinRT::detail::GitStorageType<ApplicationModel::Email::IEmailAttachment> * *,unsigned int *);
				public:
					Vector<ApplicationModel::Email::EmailAttachment *,DefaultEqualityPredicate<ApplicationModel::Email::EmailAttachment *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailAttachment *>,VectorOptions<ApplicationModel::Email::EmailAttachment *,0,1,0> >(DefaultEqualityPredicate<ApplicationModel::Email::EmailAttachment *> const &,Vector<ApplicationModel::Email::EmailAttachment *,DefaultEqualityPredicate<ApplicationModel::Email::EmailAttachment *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailAttachment *>,VectorOptions<ApplicationModel::Email::EmailAttachment *,0,1,0> >::permission);
					virtual long Append(ApplicationModel::Email::IEmailAttachment *);
					virtual long Clear();
					virtual long First(IIterator<ApplicationModel::Email::EmailAttachment *> * *);
					virtual long GetAt(unsigned int,ApplicationModel::Email::IEmailAttachment * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,ApplicationModel::Email::IEmailAttachment * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long GetView(IVectorView<ApplicationModel::Email::EmailAttachment *> * *);
					virtual long IndexOf(ApplicationModel::Email::IEmailAttachment *,unsigned int *,unsigned char *);
					virtual long InsertAt(unsigned int,ApplicationModel::Email::IEmailAttachment *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long RemoveAt(unsigned int);
					virtual long RemoveAtEnd();
					virtual long ReplaceAll(unsigned int,ApplicationModel::Email::IEmailAttachment * *);
					virtual long SetAt(unsigned int,ApplicationModel::Email::IEmailAttachment *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				class Vector<ApplicationModel::Email::EmailConversation *,DefaultEqualityPredicate<ApplicationModel::Email::EmailConversation *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailConversation *>,VectorOptions<ApplicationModel::Email::EmailConversation *,0,1,0> >
				{
					long IndexOfInternal(XWinRT::detail::GitStorageType<ApplicationModel::Email::IEmailConversation> *,unsigned int,ApplicationModel::Email::IEmailConversation *,unsigned int *,unsigned char *);
					long InsertAtInternal(unsigned int,ApplicationModel::Email::IEmailConversation *,bool);
					long RemoveAtInternal(unsigned int,bool);
					long ResizeStorage(unsigned int);
					void _EraseAll(XWinRT::detail::GitStorageType<ApplicationModel::Email::IEmailConversation> * *,unsigned int *);
				public:
					virtual long Append(ApplicationModel::Email::IEmailConversation *);
					virtual long Clear();
					virtual long First(IIterator<ApplicationModel::Email::EmailConversation *> * *);
					virtual long GetAt(unsigned int,ApplicationModel::Email::IEmailConversation * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,ApplicationModel::Email::IEmailConversation * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long GetView(IVectorView<ApplicationModel::Email::EmailConversation *> * *);
					virtual long IndexOf(ApplicationModel::Email::IEmailConversation *,unsigned int *,unsigned char *);
					virtual long InsertAt(unsigned int,ApplicationModel::Email::IEmailConversation *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long RemoveAt(unsigned int);
					virtual long RemoveAtEnd();
					virtual long ReplaceAll(unsigned int,ApplicationModel::Email::IEmailConversation * *);
					virtual long SetAt(unsigned int,ApplicationModel::Email::IEmailConversation *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				class Vector<ApplicationModel::Email::EmailFolder *,DefaultEqualityPredicate<ApplicationModel::Email::EmailFolder *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailFolder *>,VectorOptions<ApplicationModel::Email::EmailFolder *,0,1,0> >
				{
					long IndexOfInternal(XWinRT::detail::GitStorageType<ApplicationModel::Email::IEmailFolder> *,unsigned int,ApplicationModel::Email::IEmailFolder *,unsigned int *,unsigned char *);
					long InsertAtInternal(unsigned int,ApplicationModel::Email::IEmailFolder *,bool);
					long RemoveAtInternal(unsigned int,bool);
					long ResizeStorage(unsigned int);
					void _EraseAll(XWinRT::detail::GitStorageType<ApplicationModel::Email::IEmailFolder> * *,unsigned int *);
				public:
					virtual long Append(ApplicationModel::Email::IEmailFolder *);
					virtual long Clear();
					virtual long First(IIterator<ApplicationModel::Email::EmailFolder *> * *);
					virtual long GetAt(unsigned int,ApplicationModel::Email::IEmailFolder * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,ApplicationModel::Email::IEmailFolder * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long GetView(IVectorView<ApplicationModel::Email::EmailFolder *> * *);
					virtual long IndexOf(ApplicationModel::Email::IEmailFolder *,unsigned int *,unsigned char *);
					virtual long InsertAt(unsigned int,ApplicationModel::Email::IEmailFolder *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long RemoveAt(unsigned int);
					virtual long RemoveAtEnd();
					virtual long ReplaceAll(unsigned int,ApplicationModel::Email::IEmailFolder * *);
					virtual long SetAt(unsigned int,ApplicationModel::Email::IEmailFolder *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				class Vector<ApplicationModel::Email::EmailMailbox *,DefaultEqualityPredicate<ApplicationModel::Email::EmailMailbox *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailbox *>,VectorOptions<ApplicationModel::Email::EmailMailbox *,0,1,0> >
				{
					long IndexOfInternal(XWinRT::detail::GitStorageType<ApplicationModel::Email::IEmailMailbox> *,unsigned int,ApplicationModel::Email::IEmailMailbox *,unsigned int *,unsigned char *);
					long InsertAtInternal(unsigned int,ApplicationModel::Email::IEmailMailbox *,bool);
					long RemoveAtInternal(unsigned int,bool);
					long ResizeStorage(unsigned int);
					void _EraseAll(XWinRT::detail::GitStorageType<ApplicationModel::Email::IEmailMailbox> * *,unsigned int *);
				public:
					virtual long Append(ApplicationModel::Email::IEmailMailbox *);
					virtual long Clear();
					virtual long First(IIterator<ApplicationModel::Email::EmailMailbox *> * *);
					virtual long GetAt(unsigned int,ApplicationModel::Email::IEmailMailbox * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,ApplicationModel::Email::IEmailMailbox * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long GetView(IVectorView<ApplicationModel::Email::EmailMailbox *> * *);
					virtual long IndexOf(ApplicationModel::Email::IEmailMailbox *,unsigned int *,unsigned char *);
					virtual long InsertAt(unsigned int,ApplicationModel::Email::IEmailMailbox *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long RemoveAt(unsigned int);
					virtual long RemoveAtEnd();
					virtual long ReplaceAll(unsigned int,ApplicationModel::Email::IEmailMailbox * *);
					virtual long SetAt(unsigned int,ApplicationModel::Email::IEmailMailbox *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				class Vector<ApplicationModel::Email::EmailMailboxAction *,DefaultEqualityPredicate<ApplicationModel::Email::EmailMailboxAction *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailboxAction *>,VectorOptions<ApplicationModel::Email::EmailMailboxAction *,0,1,0> >
				{
					long IndexOfInternal(XWinRT::detail::GitStorageType<ApplicationModel::Email::IEmailMailboxAction> *,unsigned int,ApplicationModel::Email::IEmailMailboxAction *,unsigned int *,unsigned char *);
					long InsertAtInternal(unsigned int,ApplicationModel::Email::IEmailMailboxAction *,bool);
					long RemoveAtInternal(unsigned int,bool);
					long ResizeStorage(unsigned int);
					void _EraseAll(XWinRT::detail::GitStorageType<ApplicationModel::Email::IEmailMailboxAction> * *,unsigned int *);
				public:
					virtual long Append(ApplicationModel::Email::IEmailMailboxAction *);
					virtual long Clear();
					virtual long First(IIterator<ApplicationModel::Email::EmailMailboxAction *> * *);
					virtual long GetAt(unsigned int,ApplicationModel::Email::IEmailMailboxAction * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,ApplicationModel::Email::IEmailMailboxAction * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long GetView(IVectorView<ApplicationModel::Email::EmailMailboxAction *> * *);
					virtual long IndexOf(ApplicationModel::Email::IEmailMailboxAction *,unsigned int *,unsigned char *);
					virtual long InsertAt(unsigned int,ApplicationModel::Email::IEmailMailboxAction *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long RemoveAt(unsigned int);
					virtual long RemoveAtEnd();
					virtual long ReplaceAll(unsigned int,ApplicationModel::Email::IEmailMailboxAction * *);
					virtual long SetAt(unsigned int,ApplicationModel::Email::IEmailMailboxAction *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				class Vector<ApplicationModel::Email::EmailMailboxChange *,DefaultEqualityPredicate<ApplicationModel::Email::EmailMailboxChange *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailMailboxChange *>,VectorOptions<ApplicationModel::Email::EmailMailboxChange *,0,1,0> >
				{
					long IndexOfInternal(XWinRT::detail::GitStorageType<ApplicationModel::Email::IEmailMailboxChange> *,unsigned int,ApplicationModel::Email::IEmailMailboxChange *,unsigned int *,unsigned char *);
					long InsertAtInternal(unsigned int,ApplicationModel::Email::IEmailMailboxChange *,bool);
					long RemoveAtInternal(unsigned int,bool);
					long ResizeStorage(unsigned int);
					void _EraseAll(XWinRT::detail::GitStorageType<ApplicationModel::Email::IEmailMailboxChange> * *,unsigned int *);
				public:
					virtual long Append(ApplicationModel::Email::IEmailMailboxChange *);
					virtual long Clear();
					virtual long First(IIterator<ApplicationModel::Email::EmailMailboxChange *> * *);
					virtual long GetAt(unsigned int,ApplicationModel::Email::IEmailMailboxChange * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,ApplicationModel::Email::IEmailMailboxChange * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long GetView(IVectorView<ApplicationModel::Email::EmailMailboxChange *> * *);
					virtual long IndexOf(ApplicationModel::Email::IEmailMailboxChange *,unsigned int *,unsigned char *);
					virtual long InsertAt(unsigned int,ApplicationModel::Email::IEmailMailboxChange *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long RemoveAt(unsigned int);
					virtual long RemoveAtEnd();
					virtual long ReplaceAll(unsigned int,ApplicationModel::Email::IEmailMailboxChange * *);
					virtual long SetAt(unsigned int,ApplicationModel::Email::IEmailMailboxChange *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				class Vector<ApplicationModel::Email::EmailMessage *,DefaultEqualityPredicate<ApplicationModel::Email::EmailMessage *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailMessage *>,VectorOptions<ApplicationModel::Email::EmailMessage *,0,1,0> >
				{
					long IndexOfInternal(XWinRT::detail::GitStorageType<ApplicationModel::Email::IEmailMessage> *,unsigned int,ApplicationModel::Email::IEmailMessage *,unsigned int *,unsigned char *);
					long InsertAtInternal(unsigned int,ApplicationModel::Email::IEmailMessage *,bool);
					long RemoveAtInternal(unsigned int,bool);
					long ResizeStorage(unsigned int);
					void _EraseAll(XWinRT::detail::GitStorageType<ApplicationModel::Email::IEmailMessage> * *,unsigned int *);
				public:
					virtual long Append(ApplicationModel::Email::IEmailMessage *);
					virtual long Clear();
					virtual long First(IIterator<ApplicationModel::Email::EmailMessage *> * *);
					virtual long GetAt(unsigned int,ApplicationModel::Email::IEmailMessage * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,ApplicationModel::Email::IEmailMessage * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long GetView(IVectorView<ApplicationModel::Email::EmailMessage *> * *);
					virtual long IndexOf(ApplicationModel::Email::IEmailMessage *,unsigned int *,unsigned char *);
					virtual long InsertAt(unsigned int,ApplicationModel::Email::IEmailMessage *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long RemoveAt(unsigned int);
					virtual long RemoveAtEnd();
					virtual long ReplaceAll(unsigned int,ApplicationModel::Email::IEmailMessage * *);
					virtual long SetAt(unsigned int,ApplicationModel::Email::IEmailMessage *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				class Vector<ApplicationModel::Email::EmailRecipient *,DefaultEqualityPredicate<ApplicationModel::Email::EmailRecipient *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailRecipient *>,VectorOptions<ApplicationModel::Email::EmailRecipient *,0,1,0> >
				{
					long IndexOfInternal(XWinRT::detail::GitStorageType<ApplicationModel::Email::IEmailRecipient> *,unsigned int,ApplicationModel::Email::IEmailRecipient *,unsigned int *,unsigned char *);
					long InsertAtInternal(unsigned int,ApplicationModel::Email::IEmailRecipient *,bool);
					long RemoveAtInternal(unsigned int,bool);
					long ResizeStorage(unsigned int);
					void _EraseAll(XWinRT::detail::GitStorageType<ApplicationModel::Email::IEmailRecipient> * *,unsigned int *);
				public:
					Vector<ApplicationModel::Email::EmailRecipient *,DefaultEqualityPredicate<ApplicationModel::Email::EmailRecipient *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailRecipient *>,VectorOptions<ApplicationModel::Email::EmailRecipient *,0,1,0> >(DefaultEqualityPredicate<ApplicationModel::Email::EmailRecipient *> const &,Vector<ApplicationModel::Email::EmailRecipient *,DefaultEqualityPredicate<ApplicationModel::Email::EmailRecipient *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailRecipient *>,VectorOptions<ApplicationModel::Email::EmailRecipient *,0,1,0> >::permission);
					virtual long Append(ApplicationModel::Email::IEmailRecipient *);
					virtual long Clear();
					virtual long First(IIterator<ApplicationModel::Email::EmailRecipient *> * *);
					virtual long GetAt(unsigned int,ApplicationModel::Email::IEmailRecipient * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,ApplicationModel::Email::IEmailRecipient * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long GetView(IVectorView<ApplicationModel::Email::EmailRecipient *> * *);
					virtual long IndexOf(ApplicationModel::Email::IEmailRecipient *,unsigned int *,unsigned char *);
					virtual long InsertAt(unsigned int,ApplicationModel::Email::IEmailRecipient *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long RemoveAt(unsigned int);
					virtual long RemoveAtEnd();
					virtual long ReplaceAll(unsigned int,ApplicationModel::Email::IEmailRecipient * *);
					virtual long SetAt(unsigned int,ApplicationModel::Email::IEmailRecipient *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				class Vector<ApplicationModel::Email::EmailRecipientResolutionResult *,DefaultEqualityPredicate<ApplicationModel::Email::EmailRecipientResolutionResult *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailRecipientResolutionResult *>,VectorOptions<ApplicationModel::Email::EmailRecipientResolutionResult *,0,1,0> >
				{
					long IndexOfInternal(XWinRT::detail::GitStorageType<ApplicationModel::Email::IEmailRecipientResolutionResult> *,unsigned int,ApplicationModel::Email::IEmailRecipientResolutionResult *,unsigned int *,unsigned char *);
					long InsertAtInternal(unsigned int,ApplicationModel::Email::IEmailRecipientResolutionResult *,bool);
					long RemoveAtInternal(unsigned int,bool);
					long ResizeStorage(unsigned int);
					void _EraseAll(XWinRT::detail::GitStorageType<ApplicationModel::Email::IEmailRecipientResolutionResult> * *,unsigned int *);
				public:
					Vector<ApplicationModel::Email::EmailRecipientResolutionResult *,DefaultEqualityPredicate<ApplicationModel::Email::EmailRecipientResolutionResult *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailRecipientResolutionResult *>,VectorOptions<ApplicationModel::Email::EmailRecipientResolutionResult *,0,1,0> >(DefaultEqualityPredicate<ApplicationModel::Email::EmailRecipientResolutionResult *> const &,Vector<ApplicationModel::Email::EmailRecipientResolutionResult *,DefaultEqualityPredicate<ApplicationModel::Email::EmailRecipientResolutionResult *>,DefaultLifetimeTraits<ApplicationModel::Email::EmailRecipientResolutionResult *>,VectorOptions<ApplicationModel::Email::EmailRecipientResolutionResult *,0,1,0> >::permission);
					virtual long Append(ApplicationModel::Email::IEmailRecipientResolutionResult *);
					virtual long Clear();
					virtual long First(IIterator<ApplicationModel::Email::EmailRecipientResolutionResult *> * *);
					virtual long GetAt(unsigned int,ApplicationModel::Email::IEmailRecipientResolutionResult * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,ApplicationModel::Email::IEmailRecipientResolutionResult * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long GetView(IVectorView<ApplicationModel::Email::EmailRecipientResolutionResult *> * *);
					virtual long IndexOf(ApplicationModel::Email::IEmailRecipientResolutionResult *,unsigned int *,unsigned char *);
					virtual long InsertAt(unsigned int,ApplicationModel::Email::IEmailRecipientResolutionResult *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long RemoveAt(unsigned int);
					virtual long RemoveAtEnd();
					virtual long ReplaceAll(unsigned int,ApplicationModel::Email::IEmailRecipientResolutionResult * *);
					virtual long SetAt(unsigned int,ApplicationModel::Email::IEmailRecipientResolutionResult *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				class Vector<HSTRING__ *,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,VectorOptions<HSTRING__ *,0,1,0> >
				{
					long IndexOfInternal(HSTRING__ * *,unsigned int,HSTRING__ *,unsigned int *,unsigned char *);
					long InsertAtInternal(unsigned int,HSTRING__ *,bool);
					long RemoveAtInternal(unsigned int,bool);
					long ResizeStorage(unsigned int);
					static void _Free(HSTRING__ * *,unsigned int);
				public:
					Vector<HSTRING__ *,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,VectorOptions<HSTRING__ *,0,1,0> >(DefaultEqualityPredicate<HSTRING__ *> const &,Vector<HSTRING__ *,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,VectorOptions<HSTRING__ *,0,1,0> >::permission);
					virtual long Append(HSTRING__ *);
					virtual long Clear();
					virtual long First(IIterator<HSTRING__ *> * *);
					virtual long GetAt(unsigned int,HSTRING__ * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,HSTRING__ * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long GetView(IVectorView<HSTRING__ *> * *);
					virtual long IndexOf(HSTRING__ *,unsigned int *,unsigned char *);
					virtual long InsertAt(unsigned int,HSTRING__ *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long RemoveAt(unsigned int);
					virtual long RemoveAtEnd();
					virtual long ReplaceAll(unsigned int,HSTRING__ * *);
					virtual long SetAt(unsigned int,HSTRING__ *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				class Vector<Security::Cryptography::Certificates::Certificate *,DefaultEqualityPredicate<Security::Cryptography::Certificates::Certificate *>,DefaultLifetimeTraits<Security::Cryptography::Certificates::Certificate *>,VectorOptions<Security::Cryptography::Certificates::Certificate *,0,1,0> >
				{
					long IndexOfInternal(XWinRT::detail::GitStorageType<Security::Cryptography::Certificates::ICertificate> *,unsigned int,Security::Cryptography::Certificates::ICertificate *,unsigned int *,unsigned char *);
					long InsertAtInternal(unsigned int,Security::Cryptography::Certificates::ICertificate *,bool);
					long RemoveAtInternal(unsigned int,bool);
					long ResizeStorage(unsigned int);
					void _EraseAll(XWinRT::detail::GitStorageType<Security::Cryptography::Certificates::ICertificate> * *,unsigned int *);
				public:
					Vector<Security::Cryptography::Certificates::Certificate *,DefaultEqualityPredicate<Security::Cryptography::Certificates::Certificate *>,DefaultLifetimeTraits<Security::Cryptography::Certificates::Certificate *>,VectorOptions<Security::Cryptography::Certificates::Certificate *,0,1,0> >(DefaultEqualityPredicate<Security::Cryptography::Certificates::Certificate *> const &,Vector<Security::Cryptography::Certificates::Certificate *,DefaultEqualityPredicate<Security::Cryptography::Certificates::Certificate *>,DefaultLifetimeTraits<Security::Cryptography::Certificates::Certificate *>,VectorOptions<Security::Cryptography::Certificates::Certificate *,0,1,0> >::permission);
					virtual long Append(Security::Cryptography::Certificates::ICertificate *);
					virtual long Clear();
					virtual long First(IIterator<Security::Cryptography::Certificates::Certificate *> * *);
					virtual long GetAt(unsigned int,Security::Cryptography::Certificates::ICertificate * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,Security::Cryptography::Certificates::ICertificate * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long GetView(IVectorView<Security::Cryptography::Certificates::Certificate *> * *);
					virtual long IndexOf(Security::Cryptography::Certificates::ICertificate *,unsigned int *,unsigned char *);
					virtual long InsertAt(unsigned int,Security::Cryptography::Certificates::ICertificate *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long RemoveAt(unsigned int);
					virtual long RemoveAtEnd();
					virtual long ReplaceAll(unsigned int,Security::Cryptography::Certificates::ICertificate * *);
					virtual long SetAt(unsigned int,Security::Cryptography::Certificates::ICertificate *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				class Vector<Storage::Streams::IBuffer *,DefaultEqualityPredicate<Storage::Streams::IBuffer *>,DefaultLifetimeTraits<Storage::Streams::IBuffer *>,VectorOptions<Storage::Streams::IBuffer *,0,1,0> >
				{
					long IndexOfInternal(XWinRT::detail::GitStorageType<Storage::Streams::IBuffer> *,unsigned int,Storage::Streams::IBuffer *,unsigned int *,unsigned char *);
					long InsertAtInternal(unsigned int,Storage::Streams::IBuffer *,bool);
					long RemoveAtInternal(unsigned int,bool);
					long ResizeStorage(unsigned int);
					void _EraseAll(XWinRT::detail::GitStorageType<Storage::Streams::IBuffer> * *,unsigned int *);
				public:
					Vector<Storage::Streams::IBuffer *,DefaultEqualityPredicate<Storage::Streams::IBuffer *>,DefaultLifetimeTraits<Storage::Streams::IBuffer *>,VectorOptions<Storage::Streams::IBuffer *,0,1,0> >(DefaultEqualityPredicate<Storage::Streams::IBuffer *> const &,Vector<Storage::Streams::IBuffer *,DefaultEqualityPredicate<Storage::Streams::IBuffer *>,DefaultLifetimeTraits<Storage::Streams::IBuffer *>,VectorOptions<Storage::Streams::IBuffer *,0,1,0> >::permission);
					virtual long Append(Storage::Streams::IBuffer *);
					virtual long Clear();
					virtual long First(IIterator<Storage::Streams::IBuffer *> * *);
					virtual long GetAt(unsigned int,Storage::Streams::IBuffer * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,Storage::Streams::IBuffer * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long GetView(IVectorView<Storage::Streams::IBuffer *> * *);
					virtual long IndexOf(Storage::Streams::IBuffer *,unsigned int *,unsigned char *);
					virtual long InsertAt(unsigned int,Storage::Streams::IBuffer *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long RemoveAt(unsigned int);
					virtual long RemoveAtEnd();
					virtual long ReplaceAll(unsigned int,Storage::Streams::IBuffer * *);
					virtual long SetAt(unsigned int,Storage::Streams::IBuffer *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct VectorOptions<ApplicationModel::Email::EmailAttachment *,0,1,0>
				{
					static long RaiseEvent(...);
				};

				struct VectorOptions<ApplicationModel::Email::EmailConversation *,0,1,0>
				{
					static long RaiseEvent(...);
				};

				struct VectorOptions<ApplicationModel::Email::EmailFolder *,0,1,0>
				{
					static long RaiseEvent(...);
				};

				struct VectorOptions<ApplicationModel::Email::EmailMailbox *,0,1,0>
				{
					static long RaiseEvent(...);
				};

				struct VectorOptions<ApplicationModel::Email::EmailMailboxAction *,0,1,0>
				{
					static long RaiseEvent(...);
				};

				struct VectorOptions<ApplicationModel::Email::EmailMailboxChange *,0,1,0>
				{
					static long RaiseEvent(...);
				};

				struct VectorOptions<ApplicationModel::Email::EmailMessage *,0,1,0>
				{
					static long RaiseEvent(...);
				};

				struct VectorOptions<ApplicationModel::Email::EmailRecipient *,0,1,0>
				{
					static long RaiseEvent(...);
				};

				struct VectorOptions<ApplicationModel::Email::EmailRecipientResolutionResult *,0,1,0>
				{
					static long RaiseEvent(...);
				};

				struct VectorOptions<HSTRING__ *,0,1,0>
				{
					static long RaiseEvent(...);
				};

				struct VectorOptions<Security::Cryptography::Certificates::Certificate *,0,1,0>
				{
					static long RaiseEvent(...);
				};

				struct VectorOptions<Storage::Streams::IBuffer *,0,1,0>
				{
					static long RaiseEvent(...);
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

			Details::Git _git;
		};

		struct GitPtrSupportsAgile<Foundation::IAsyncActionCompletedHandler>
		{
			long CopyLocal<Foundation::IAsyncActionCompletedHandler>(Foundation::IAsyncActionCompletedHandler * *);
			long CopyLocal<Foundation::IAsyncActionCompletedHandler>(Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Foundation::IAsyncActionCompletedHandler> >);
			long Initialize<Foundation::IAsyncActionCompletedHandler>(Foundation::IAsyncActionCompletedHandler *);
		};

		struct GitPtrSupportsAgile<Foundation::IAsyncOperationCompletedHandler<ApplicationModel::Email::EmailConversation *> >
		{
			long Initialize<Foundation::IAsyncOperationCompletedHandler<ApplicationModel::Email::EmailConversation *> >(Foundation::IAsyncOperationCompletedHandler<ApplicationModel::Email::EmailConversation *> *);
		};

		struct GitPtrSupportsAgile<Foundation::IAsyncOperationCompletedHandler<ApplicationModel::Email::EmailFolder *> >
		{
			long CopyLocal<Foundation::IAsyncOperationCompletedHandler<ApplicationModel::Email::EmailFolder *> >(Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Foundation::IAsyncOperationCompletedHandler<ApplicationModel::Email::EmailFolder *> > >);
			long Initialize<Foundation::IAsyncOperationCompletedHandler<ApplicationModel::Email::EmailFolder *> >(Foundation::IAsyncOperationCompletedHandler<ApplicationModel::Email::EmailFolder *> *);
		};

		struct GitPtrSupportsAgile<Foundation::IAsyncOperationCompletedHandler<ApplicationModel::Email::EmailMailbox *> >
		{
			long Initialize<Foundation::IAsyncOperationCompletedHandler<ApplicationModel::Email::EmailMailbox *> >(Foundation::IAsyncOperationCompletedHandler<ApplicationModel::Email::EmailMailbox *> *);
		};

		struct GitPtrSupportsAgile<Foundation::IAsyncOperationCompletedHandler<ApplicationModel::Email::EmailMessage *> >
		{
			long CopyLocal<Foundation::IAsyncOperationCompletedHandler<ApplicationModel::Email::EmailMessage *> >(Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Foundation::IAsyncOperationCompletedHandler<ApplicationModel::Email::EmailMessage *> > >);
			long Initialize<Foundation::IAsyncOperationCompletedHandler<ApplicationModel::Email::EmailMessage *> >(Foundation::IAsyncOperationCompletedHandler<ApplicationModel::Email::EmailMessage *> *);
		};

		struct GitPtrSupportsAgile<Foundation::IAsyncOperationCompletedHandler<ApplicationModel::Email::EmailStore *> >
		{
			long Initialize<Foundation::IAsyncOperationCompletedHandler<ApplicationModel::Email::EmailStore *> >(Foundation::IAsyncOperationCompletedHandler<ApplicationModel::Email::EmailStore *> *);
		};

		struct GitPtrSupportsAgile<Foundation::IAsyncOperationCompletedHandler<bool> >
		{
			long CopyLocal<Foundation::IAsyncOperationCompletedHandler<bool> >(Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Foundation::IAsyncOperationCompletedHandler<bool> > >);
			long Initialize<Foundation::IAsyncOperationCompletedHandler<bool> >(Foundation::IAsyncOperationCompletedHandler<bool> *);
		};

		_RTL_RUN_ONCE s_bIsEnvironmentCheckDone;
	};

	namespace Storage
	{
		namespace Streams
		{
			struct CBuffer<CBuffer_StandardCleanup,DefaultMarshaler>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct CBuffer<void (*)(void *),DefaultMarshaler>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct CBuffer_Impl<CBuffer_StandardCleanup,DefaultMarshaler>
			{
				virtual long Buffer(unsigned char * *);
				virtual long DisconnectObject(unsigned long);
				virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
				virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
				virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
				virtual long ReleaseMarshalData(IStream *);
				virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
				virtual long get_Capacity(unsigned int *);
				virtual long get_Length(unsigned int *);
				virtual long put_Length(unsigned int);
			};

			class CBuffer_Impl<void (*)(void *),DefaultMarshaler>
			{
			protected:
				virtual ~CBuffer_Impl<void (*)(void *),DefaultMarshaler>();
			public:
				virtual long Buffer(unsigned char * *);
				virtual long DisconnectObject(unsigned long);
				virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
				virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
				virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
				virtual long ReleaseMarshalData(IStream *);
				virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
				virtual long get_Capacity(unsigned int *);
				virtual long get_Length(unsigned int *);
				virtual long put_Length(unsigned int);
			};

			struct DefaultMarshaler
			{
				long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
				long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
				long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			};

		};

	};

};

namespace XWinRT
{
	struct InterfaceLifetimeTraits
	{
		static long Construct<Windows::ApplicationModel::Email::IEmailAttachment>(detail::GitStorageType<Windows::ApplicationModel::Email::IEmailAttachment> *,Windows::ApplicationModel::Email::IEmailAttachment *);
		static long Construct<Windows::ApplicationModel::Email::IEmailConversation>(detail::GitStorageType<Windows::ApplicationModel::Email::IEmailConversation> *,Windows::ApplicationModel::Email::IEmailConversation *);
		static long Construct<Windows::ApplicationModel::Email::IEmailFolder>(detail::GitStorageType<Windows::ApplicationModel::Email::IEmailFolder> *,Windows::ApplicationModel::Email::IEmailFolder *);
		static long Construct<Windows::ApplicationModel::Email::IEmailMailbox>(detail::GitStorageType<Windows::ApplicationModel::Email::IEmailMailbox> *,Windows::ApplicationModel::Email::IEmailMailbox *);
		static long Construct<Windows::ApplicationModel::Email::IEmailMailboxAction>(detail::GitStorageType<Windows::ApplicationModel::Email::IEmailMailboxAction> *,Windows::ApplicationModel::Email::IEmailMailboxAction *);
		static long Construct<Windows::ApplicationModel::Email::IEmailMailboxChange>(detail::GitStorageType<Windows::ApplicationModel::Email::IEmailMailboxChange> *,Windows::ApplicationModel::Email::IEmailMailboxChange *);
		static long Construct<Windows::ApplicationModel::Email::IEmailMessage>(detail::GitStorageType<Windows::ApplicationModel::Email::IEmailMessage> *,Windows::ApplicationModel::Email::IEmailMessage *);
		static long Construct<Windows::ApplicationModel::Email::IEmailRecipient>(detail::GitStorageType<Windows::ApplicationModel::Email::IEmailRecipient> *,Windows::ApplicationModel::Email::IEmailRecipient *);
		static long Construct<Windows::ApplicationModel::Email::IEmailRecipientResolutionResult>(detail::GitStorageType<Windows::ApplicationModel::Email::IEmailRecipientResolutionResult> *,Windows::ApplicationModel::Email::IEmailRecipientResolutionResult *);
		static long Construct<Windows::Security::Cryptography::Certificates::ICertificate>(detail::GitStorageType<Windows::Security::Cryptography::Certificates::ICertificate> *,Windows::Security::Cryptography::Certificates::ICertificate *);
		static long Construct<Windows::Storage::Streams::IBuffer>(detail::GitStorageType<Windows::Storage::Streams::IBuffer> *,Windows::Storage::Streams::IBuffer *);
		static void Destroy<Windows::ApplicationModel::Email::IEmailAttachment>(detail::GitStorageType<Windows::ApplicationModel::Email::IEmailAttachment> *);
		static void Destroy<Windows::ApplicationModel::Email::IEmailConversation>(detail::GitStorageType<Windows::ApplicationModel::Email::IEmailConversation> *);
		static void Destroy<Windows::ApplicationModel::Email::IEmailFolder>(detail::GitStorageType<Windows::ApplicationModel::Email::IEmailFolder> *);
		static void Destroy<Windows::ApplicationModel::Email::IEmailMailbox>(detail::GitStorageType<Windows::ApplicationModel::Email::IEmailMailbox> *);
		static void Destroy<Windows::ApplicationModel::Email::IEmailMailboxAction>(detail::GitStorageType<Windows::ApplicationModel::Email::IEmailMailboxAction> *);
		static void Destroy<Windows::ApplicationModel::Email::IEmailMailboxChange>(detail::GitStorageType<Windows::ApplicationModel::Email::IEmailMailboxChange> *);
		static void Destroy<Windows::ApplicationModel::Email::IEmailMessage>(detail::GitStorageType<Windows::ApplicationModel::Email::IEmailMessage> *);
		static void Destroy<Windows::ApplicationModel::Email::IEmailRecipient>(detail::GitStorageType<Windows::ApplicationModel::Email::IEmailRecipient> *);
		static void Destroy<Windows::ApplicationModel::Email::IEmailRecipientResolutionResult>(detail::GitStorageType<Windows::ApplicationModel::Email::IEmailRecipientResolutionResult> *);
		static void Destroy<Windows::Security::Cryptography::Certificates::ICertificate>(detail::GitStorageType<Windows::Security::Cryptography::Certificates::ICertificate> *);
		static void Destroy<Windows::Storage::Streams::IBuffer>(detail::GitStorageType<Windows::Storage::Streams::IBuffer> *);
	};

	struct StorageTempTraits<detail::GitStorageType<Windows::ApplicationModel::Email::IEmailAttachment>,Windows::ApplicationModel::Email::IEmailAttachment *,detail::GitStorageType<Windows::ApplicationModel::Email::IEmailAttachment>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Email::EmailAttachment *> >
	{
		static long ResolveDemand(detail::GitStorageType<Windows::ApplicationModel::Email::IEmailAttachment> *,Windows::ApplicationModel::Email::IEmailAttachment * *);
	};

	struct StorageTempTraits<detail::GitStorageType<Windows::ApplicationModel::Email::IEmailConversation>,Windows::ApplicationModel::Email::IEmailConversation *,detail::GitStorageType<Windows::ApplicationModel::Email::IEmailConversation>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Email::EmailConversation *> >
	{
		static long ResolveDemand(detail::GitStorageType<Windows::ApplicationModel::Email::IEmailConversation> *,Windows::ApplicationModel::Email::IEmailConversation * *);
	};

	struct StorageTempTraits<detail::GitStorageType<Windows::ApplicationModel::Email::IEmailFolder>,Windows::ApplicationModel::Email::IEmailFolder *,detail::GitStorageType<Windows::ApplicationModel::Email::IEmailFolder>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Email::EmailFolder *> >
	{
		static long ResolveDemand(detail::GitStorageType<Windows::ApplicationModel::Email::IEmailFolder> *,Windows::ApplicationModel::Email::IEmailFolder * *);
	};

	struct StorageTempTraits<detail::GitStorageType<Windows::ApplicationModel::Email::IEmailMailbox>,Windows::ApplicationModel::Email::IEmailMailbox *,detail::GitStorageType<Windows::ApplicationModel::Email::IEmailMailbox>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Email::EmailMailbox *> >
	{
		static long ResolveDemand(detail::GitStorageType<Windows::ApplicationModel::Email::IEmailMailbox> *,Windows::ApplicationModel::Email::IEmailMailbox * *);
	};

	struct StorageTempTraits<detail::GitStorageType<Windows::ApplicationModel::Email::IEmailMailboxAction>,Windows::ApplicationModel::Email::IEmailMailboxAction *,detail::GitStorageType<Windows::ApplicationModel::Email::IEmailMailboxAction>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Email::EmailMailboxAction *> >
	{
		static long ResolveDemand(detail::GitStorageType<Windows::ApplicationModel::Email::IEmailMailboxAction> *,Windows::ApplicationModel::Email::IEmailMailboxAction * *);
	};

	struct StorageTempTraits<detail::GitStorageType<Windows::ApplicationModel::Email::IEmailMailboxChange>,Windows::ApplicationModel::Email::IEmailMailboxChange *,detail::GitStorageType<Windows::ApplicationModel::Email::IEmailMailboxChange>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Email::EmailMailboxChange *> >
	{
		static long ResolveDemand(detail::GitStorageType<Windows::ApplicationModel::Email::IEmailMailboxChange> *,Windows::ApplicationModel::Email::IEmailMailboxChange * *);
	};

	struct StorageTempTraits<detail::GitStorageType<Windows::ApplicationModel::Email::IEmailMessage>,Windows::ApplicationModel::Email::IEmailMessage *,detail::GitStorageType<Windows::ApplicationModel::Email::IEmailMessage>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Email::EmailMessage *> >
	{
		static long ResolveDemand(detail::GitStorageType<Windows::ApplicationModel::Email::IEmailMessage> *,Windows::ApplicationModel::Email::IEmailMessage * *);
	};

	struct StorageTempTraits<detail::GitStorageType<Windows::ApplicationModel::Email::IEmailRecipient>,Windows::ApplicationModel::Email::IEmailRecipient *,detail::GitStorageType<Windows::ApplicationModel::Email::IEmailRecipient>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Email::EmailRecipient *> >
	{
		static long ResolveDemand(detail::GitStorageType<Windows::ApplicationModel::Email::IEmailRecipient> *,Windows::ApplicationModel::Email::IEmailRecipient * *);
	};

	struct StorageTempTraits<detail::GitStorageType<Windows::ApplicationModel::Email::IEmailRecipientResolutionResult>,Windows::ApplicationModel::Email::IEmailRecipientResolutionResult *,detail::GitStorageType<Windows::ApplicationModel::Email::IEmailRecipientResolutionResult>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Email::EmailRecipientResolutionResult *> >
	{
		static long ResolveDemand(detail::GitStorageType<Windows::ApplicationModel::Email::IEmailRecipientResolutionResult> *,Windows::ApplicationModel::Email::IEmailRecipientResolutionResult * *);
	};

	struct StorageTempTraits<detail::GitStorageType<Windows::Security::Cryptography::Certificates::ICertificate>,Windows::Security::Cryptography::Certificates::ICertificate *,detail::GitStorageType<Windows::Security::Cryptography::Certificates::ICertificate>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Cryptography::Certificates::Certificate *> >
	{
		static long ResolveDemand(detail::GitStorageType<Windows::Security::Cryptography::Certificates::ICertificate> *,Windows::Security::Cryptography::Certificates::ICertificate * *);
	};

	struct StorageTempTraits<detail::GitStorageType<Windows::Storage::Streams::IBuffer>,Windows::Storage::Streams::IBuffer *,detail::GitStorageType<Windows::Storage::Streams::IBuffer>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *> >
	{
		static long ResolveDemand(detail::GitStorageType<Windows::Storage::Streams::IBuffer> *,Windows::Storage::Streams::IBuffer * *);
	};

	namespace detail
	{
		struct ReentrancyGuard<0>
		{
			ReentrancyGuard<0>(...);
		};

	};

};

namespace details
{
	class MakeAsyncWorkerBase
	{
		static void Execute(_TP_CALLBACK_INSTANCE *,void *,_TP_WORK *);
	public:
		long StartSelf(_TP_CALLBACK_ENVIRON_V3 *);
	};

	struct Nullable<Windows::Foundation::DateTime>
	{
		virtual long GetIids(unsigned long *,_GUID * *);
		virtual long GetRuntimeClassName(HSTRING__ * *);
		virtual long GetTrustLevel(TrustLevel *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long get_Value(Windows::Foundation::DateTime *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	struct Nullable<Windows::Foundation::TimeSpan>
	{
		virtual long GetIids(unsigned long *,_GUID * *);
		virtual long GetRuntimeClassName(HSTRING__ * *);
		virtual long GetTrustLevel(TrustLevel *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long get_Value(Windows::Foundation::TimeSpan *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

};

namespace std
{
	nothrow_t const std::nothrow;
};

namespace tlx
{
	long append_vsprintf<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short> >(utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short> > &,unsigned short const *,char *);
	long assign_sprintf<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short> >(utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short> > &,unsigned short const *,...);
	void trim_right<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short> >(utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short> > &,unsigned short const *);
};

namespace utl
{
	class _Tree<unsigned long,unsigned long,less<unsigned long>,allocator<unsigned long>,0>
	{
		pair<_TreeConstIt<unsigned long>,bool> _EmplaceImpl(integral_constant<bool,0>,_TreeNode<unsigned long> *,_TreeNode<unsigned long> *);
		void _InsertAt(pair<_TreeNode<unsigned long> *,bool> const &,_TreeNode<unsigned long> *);
	};

	class basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >
	{
		_ContainerAllocation<allocator<unsigned short> > _GrowAlloc(unsigned __int64);
	public:
		bool append(unsigned short const *);
		bool assign(unsigned short const *);
	};

	class vector<Microsoft::WRL::ComPtr<IInspectable>,allocator<Microsoft::WRL::ComPtr<IInspectable> > >
	{
		bool _SetCapacity(unsigned __int64);
	public:
		bool push_back(Microsoft::WRL::ComPtr<IInspectable> const &);
	};

	class vector<Udm::ResultSubset,allocator<Udm::ResultSubset> >
	{
		bool _SetCapacity(unsigned __int64);
	};

	class vector<UdmObjectId,allocator<UdmObjectId> >
	{
		bool _SetCapacity(unsigned __int64);
	public:
		bool push_back(UdmObjectId const &);
	};

	class vector<UdmPropertyValue,allocator<UdmPropertyValue> >
	{
		bool _SetCapacity(unsigned __int64);
	public:
		bool push_back(UdmPropertyValue const &);
	};

	class vector<unsigned long,allocator<unsigned long> >
	{
		bool _SetCapacity(unsigned __int64);
	public:
		bool push_back(unsigned long const &);
	};

	class vector<void *,allocator<void *> >
	{
		bool _SetCapacity(unsigned __int64);
	};

	void * _TreeSentinel;
};

namespace wil
{
	class ActivityBase<EmailProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<EmailProvider,_TlgReflectorTag_Param0IsProviderType>
		{
			~ActivityData<EmailProvider,_TlgReflectorTag_Param0IsProviderType>();
		};

	protected:
		void Destroy();
	public:
		ActivityBase<EmailProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType> & operator=(ActivityBase<EmailProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType> const &);
		ActivityBase<EmailProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(ActivityBase<EmailProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType> const &);
		virtual bool NotifyFailure(FailureInfo const &);
		void Stop(long);
		~ActivityBase<EmailProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>();
	};

	struct ActivityBase<UserDataApisBaseProvider,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<UserDataApisBaseProvider,_TlgReflectorTag_Param0IsProviderType>
		{
			~ActivityData<UserDataApisBaseProvider,_TlgReflectorTag_Param0IsProviderType>();
		};

		virtual bool NotifyFailure(FailureInfo const &);
		void Stop(long);
	};

	struct ActivityThreadWatcher
	{
		ActivityThreadWatcher(details::IFailureCallback *,details::StoredCallContextInfo const &);
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

	namespace details
	{
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
			long Return_GetLastError(void *,unsigned int,char const *);
			long Return_Win32(void *,unsigned int,char const *,unsigned long);
			void FailFast_Unexpected(void *,unsigned int,char const *);
			void Return_Hr(void *,unsigned int,char const *,long);
			void Return_HrMsg_NoOriginate(void *,unsigned int,char const *,long,char const *,...);
			void Return_Hr_NoOriginate(void *,unsigned int,char const *,long);
			void _FailFastImmediate_Unexpected();
			void _FailFast_GetLastError(void *,unsigned int,char const *);
		};

		struct static_lazy<EmailTelemetry>
		{
			void cleanup();
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
		long ReportFailure_Win32(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,unsigned long);
		unsigned char (* g_pfnRtlDllShutdownInProgress)();
		unsigned char * WriteResultString<char const *>(unsigned char *,unsigned char *,char const *,char const * *);
		unsigned char * WriteResultString<unsigned short const *>(unsigned char *,unsigned char *,unsigned short const *,unsigned short const * *);
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
		void ReportFailure_HrMsg(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,char const *,char *);
		void ReportFailure_Msg(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,char const *,char *);
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

		struct ThreadLocalStorage<details::ThreadFailureCallbackHolder *>
		{
			details::ThreadFailureCallbackHolder * * GetLocal(bool);
		};

		details_abi::ProcessLocalStorage<details_abi::ProcessLocalData> * g_pProcessLocalData;
		details_abi::ThreadLocalData * GetThreadLocalDataCache(bool);
	};

	bool (* g_pfnIsDebuggerPresent)();
	bool g_fBreakOnFailure;
	bool g_fIsDebuggerPresent;
	long GetFailureLogString(unsigned short *,unsigned __int64,wil::FailureInfo const &);
	long RemoveDirectoryRecursiveNoThrow(unsigned short const *,wil::RemoveDirectoryOptions);
};

ATL::CComModule _Module;
Array<unsigned long const > GetDefaultPropCodes(UdmItemType);
HINSTANCE__ * g_wil_details_ntdllModuleHandle;
Microsoft::WRL::ComPtr<EmailAttachmentImpl> PeekInnards<EmailAttachmentImpl,Windows::ApplicationModel::Email::IEmailAttachment *>(Windows::ApplicationModel::Email::IEmailAttachment *);
Microsoft::WRL::ComPtr<EmailAutoReplySettingsImpl> PeekInnards<EmailAutoReplySettingsImpl,Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings *>(Windows::ApplicationModel::Email::IEmailMailboxAutoReplySettings *);
Microsoft::WRL::ComPtr<EmailFolderImpl> PeekInnards<EmailFolderImpl,Windows::ApplicationModel::Email::IEmailFolder *>(Windows::ApplicationModel::Email::IEmailFolder *);
Microsoft::WRL::ComPtr<EmailMailboxSyncManagerImpl> PeekInnards<EmailMailboxSyncManagerImpl,Windows::ApplicationModel::Email::IEmailMailboxSyncManager>(Microsoft::WRL::ComPtr<Windows::ApplicationModel::Email::IEmailMailboxSyncManager> const &);
Microsoft::WRL::ComPtr<EmailMeetingInfoImpl> PeekInnards<EmailMeetingInfoImpl,Windows::ApplicationModel::Email::IEmailMeetingInfo>(Microsoft::WRL::ComPtr<Windows::ApplicationModel::Email::IEmailMeetingInfo> const &);
Microsoft::WRL::ComPtr<EmailMessageImpl> PeekInnards<EmailMessageImpl,Windows::ApplicationModel::Email::IEmailMessage *>(Windows::ApplicationModel::Email::IEmailMessage *);
Microsoft::WRL::ComPtr<EmailRecipientImpl> PeekInnards<EmailRecipientImpl,Windows::ApplicationModel::Email::IEmailRecipient *>(Windows::ApplicationModel::Email::IEmailRecipient *);
Microsoft::WRL::Details::CreatorMap const __object_EmailAttachmentImpl;
Microsoft::WRL::Details::CreatorMap const __object_EmailAutoReplySettingsImpl;
Microsoft::WRL::Details::CreatorMap const __object_EmailDataProviderTriggerDetailsImpl_COM;
Microsoft::WRL::Details::CreatorMap const __object_EmailIrmInfoImpl;
Microsoft::WRL::Details::CreatorMap const __object_EmailIrmTemplateImpl;
Microsoft::WRL::Details::CreatorMap const __object_EmailManagerStaticsImpl;
Microsoft::WRL::Details::CreatorMap const __object_EmailMeetingInfoImpl;
Microsoft::WRL::Details::CreatorMap const __object_EmailMessageImpl;
Microsoft::WRL::Details::CreatorMap const __object_EmailQueryOptionsImpl;
Microsoft::WRL::Details::CreatorMap const __object_EmailRecipientImpl;
Microsoft::WRL::Details::CreatorMap const __object_EmailRecipientResolutionResultImpl;
Microsoft::WRL::Details::CreatorMap const __object_EmailStoreNotificationTriggerDetailsImpl_COM;
Microsoft::WRL::Details::CreatorMap const __object_EmailStoreNotificationTriggerImpl;
Microsoft::WRL::Details::FactoryCache __objectFactory__EmailAttachmentImpl;
Microsoft::WRL::Details::FactoryCache __objectFactory__EmailAutoReplySettingsImpl;
Microsoft::WRL::Details::FactoryCache __objectFactory__EmailDataProviderTriggerDetailsImpl_COM;
Microsoft::WRL::Details::FactoryCache __objectFactory__EmailIrmInfoImpl;
Microsoft::WRL::Details::FactoryCache __objectFactory__EmailIrmTemplateImpl;
Microsoft::WRL::Details::FactoryCache __objectFactory__EmailManagerStaticsImpl;
Microsoft::WRL::Details::FactoryCache __objectFactory__EmailMeetingInfoImpl;
Microsoft::WRL::Details::FactoryCache __objectFactory__EmailMessageImpl;
Microsoft::WRL::Details::FactoryCache __objectFactory__EmailQueryOptionsImpl;
Microsoft::WRL::Details::FactoryCache __objectFactory__EmailRecipientImpl;
Microsoft::WRL::Details::FactoryCache __objectFactory__EmailRecipientResolutionResultImpl;
Microsoft::WRL::Details::FactoryCache __objectFactory__EmailStoreNotificationTriggerDetailsImpl_COM;
Microsoft::WRL::Details::FactoryCache __objectFactory__EmailStoreNotificationTriggerImpl;
_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
long AddHeader(utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short> > *,unsigned short const *,int,int *);
long AddPropCodesToSet(Array<unsigned long const > const &,utl::vector<unsigned long,utl::allocator<unsigned long> > *);
long AppendEmailRecipients(utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short> > *,unsigned short const *,Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailRecipient *> *,int *);
long AwaitOperationResult<Windows::ApplicationModel::Email::EmailFolder *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::ApplicationModel::Email::IEmailFolder> > &>(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Email::EmailFolder *> *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::ApplicationModel::Email::IEmailFolder> > &);
long AwaitOperationResult<Windows::Storage::StorageFile *,Windows::Storage::IStorageFile * * &>(Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile *> *,Windows::Storage::IStorageFile * * &);
long AwaitOperationResult<Windows::Storage::Streams::IRandomAccessStreamWithContentType *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Storage::Streams::IRandomAccessStreamWithContentType> > &>(Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *> *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Storage::Streams::IRandomAccessStreamWithContentType> > &);
long AwaitOperationResultWithTimeOut<Windows::ApplicationModel::AppService::AppServiceResponse *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::ApplicationModel::AppService::IAppServiceResponse> > &>(unsigned long,Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::AppService::AppServiceResponse *> *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::ApplicationModel::AppService::IAppServiceResponse> > &);
long CloneIterable<HSTRING__ *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::AgileVector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0> > > >(Windows::Foundation::Collections::IIterable<HSTRING__ *> *,Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::AgileVector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0> > >);
long ConstructMailtoUri(Windows::ApplicationModel::Email::IEmailMessage *,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short> > *);
long CreateUdmBindingHandle(void *,void *,void * *);
long EmailAttachmentToString(Windows::ApplicationModel::DataTransfer::ISharedStorageAccessManagerStatics *,Windows::Storage::IStorageFileStatics *,int,Windows::ApplicationModel::Email::IEmailAttachment *,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short> > *);
long EmailAttachmentsToString(Windows::Foundation::Collections::IVector<Windows::ApplicationModel::Email::EmailAttachment *> *,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short> > *,int *);
long EmailQueryOptionsToUdm(Windows::ApplicationModel::Email::IEmailQueryOptions *,int,UdmObjectId,UdmEmailQueryOptions *);
long EscapeAndAppendString(unsigned short const *,int,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short> > *,int *);
long GetAppTemporaryPath(HSTRING__ * *);
long GetStreamFromRandomAccessStreamReference(Windows::Storage::Streams::IRandomAccessStreamReference *,IStream * *);
long InitializeSyncManager<EmailMailboxSyncManagerImpl,Windows::ApplicationModel::Email::IEmailMailboxSyncManager>(UdmSessionHandle *,UdmObjectId const &,UdmPropertyBuffer *,Windows::ApplicationModel::Email::IEmailMailboxSyncManager * *);
long ItemIdStringFromUdmId(UdmObjectId const &,HSTRING__ * *);
long LoadIrmInfoFromPropertyBuffer(UdmPropertyBuffer *,Windows::ApplicationModel::Email::IEmailIrmInfo * *);
long MakeReferenceValue<Windows::Foundation::DateTime>(Windows::Foundation::DateTime const &,IInspectable * *);
long MakeReferenceValue<Windows::Foundation::DateTime>(Windows::Foundation::DateTime const &,Windows::Foundation::IReference<Windows::Foundation::DateTime> * *);
long ParseUdmAttachmentBlob(EmailSessionHandle *,UDMBLOB const &,UdmObjectId const &,Windows::Foundation::Collections::Internal::AgileVector<Windows::ApplicationModel::Email::EmailAttachment *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::ApplicationModel::Email::EmailAttachment *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::ApplicationModel::Email::EmailAttachment *>,0> *);
long ParseUdmRecipient(unsigned char *,unsigned char * *,Windows::ApplicationModel::Email::IEmailRecipient * *,UdmEmailParticipantKind *);
long ParseUdmRecipientBlob(UDMBLOB const &,EmailRecipientVector *,EmailRecipientVector *,EmailRecipientVector *,EmailRecipientVector *);
long ReadTypeFromBlob<unsigned short *>(unsigned char *,unsigned short * *,unsigned char * *);
long SaveIrmInfoToPropertyBuffer(Windows::ApplicationModel::Email::IEmailIrmInfo *,UdmPropertyBuffer *);
long SmartTruncateEscapedString(unsigned short *,unsigned __int64,unsigned short const *);
long StartAndConnectNoSession(unsigned long,void *,unsigned __int64,void * *);
long StreamToTempFileToken(Windows::ApplicationModel::DataTransfer::ISharedStorageAccessManagerStatics *,Windows::Storage::IStorageFileStatics *,unsigned short const *,unsigned short const *,int,Windows::Storage::Streams::IRandomAccessStreamReference *,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short> > *,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short> > *);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long UdmIdFromItemIdString(HSTRING__ *,UdmObjectId *);
long _Insert(Windows::Foundation::Collections::IPropertySet *,unsigned short const *,IInspectable *);
long _Lookup(Windows::Foundation::Collections::IPropertySet *,unsigned short const *,Windows::Foundation::IPropertyValue * *);
long sm_AsyncOperationCookie;
unsigned short const * const EmailConversationFindMessagesOperationName;
unsigned short const * const EmailConversationReaderReadBatchOperationName;
unsigned short const * const EmailFolderCreateFolderOperationName;
unsigned short const * const EmailFolderDeleteActionName;
unsigned short const * const EmailFolderFindChildFoldersOperationName;
unsigned short const * const EmailFolderGetMessageCountsOperationName;
unsigned short const * const EmailFolderMoveOperationName;
unsigned short const * const EmailFolderSaveMessageActionName;
unsigned short const * const EmailFolderSaveOperationName;
unsigned short const * const EmailMailboxChangeMessageFlagStateActionName;
unsigned short const * const EmailMailboxChangeReaderReadBatchOperationName;
unsigned short const * const EmailMailboxCreateFolderOperationName;
unsigned short const * const EmailMailboxCreateFolderRequestReportCompletedActionName;
unsigned short const * const EmailMailboxCreateFolderRequestReportFailedActionName;
unsigned short const * const EmailMailboxCreateResponseMessageOperationName;
unsigned short const * const EmailMailboxDeleteActionName;
unsigned short const * const EmailMailboxDeleteFolderOperationName;
unsigned short const * const EmailMailboxDeleteFolderRequestReportCompletedActionName;
unsigned short const * const EmailMailboxDeleteFolderRequestReportFailedActionName;
unsigned short const * const EmailMailboxDeleteMessageActionName;
unsigned short const * const EmailMailboxDownloadAttachmentActionName;
unsigned short const * const EmailMailboxDownloadAttachmentRequestReportCompletedActionName;
unsigned short const * const EmailMailboxDownloadAttachmentRequestReportFailedActionName;
unsigned short const * const EmailMailboxDownloadMessageActionName;
unsigned short const * const EmailMailboxDownloadMessageRequestReportCompletedActionName;
unsigned short const * const EmailMailboxDownloadMessageRequestReportFailedActionName;
unsigned short const * const EmailMailboxEmptyFolderRequestReportCompletedActionName;
unsigned short const * const EmailMailboxEmptyFolderRequestReportFailedActionName;
unsigned short const * const EmailMailboxForwardMeetingRequestReportCompletedActionName;
unsigned short const * const EmailMailboxForwardMeetingRequestReportFailedActionName;
unsigned short const * const EmailMailboxGetAutoReplySettingsRequestReportCompletedActionName;
unsigned short const * const EmailMailboxGetAutoReplySettingsRequestReportFailedActionName;
unsigned short const * const EmailMailboxGetConversationOperationName;
unsigned short const * const EmailMailboxGetFolderOperationName;
unsigned short const * const EmailMailboxGetMessageOperationName;
unsigned short const * const EmailMailboxGetSpecialFolderOperationName;
unsigned short const * const EmailMailboxMarkFolderAsSeenActionName;
unsigned short const * const EmailMailboxMarkFolderSyncEnabledActionName;
unsigned short const * const EmailMailboxMarkMessageAsSeenActionName;
unsigned short const * const EmailMailboxMarkMessageReadActionName;
unsigned short const * const EmailMailboxMoveFolderOperationName;
unsigned short const * const EmailMailboxMoveFolderRequestReportCompletedActionName;
unsigned short const * const EmailMailboxMoveFolderRequestReportFailedActionName;
unsigned short const * const EmailMailboxMoveMessageOperationName;
unsigned short const * const EmailMailboxProposeNewTimeForMeetingRequestReportCompletedActionName;
unsigned short const * const EmailMailboxProposeNewTimeForMeetingRequestReportFailedActionName;
unsigned short const * const EmailMailboxRegisterSyncManagerActionName;
unsigned short const * const EmailMailboxResolveRecipientsOperationName;
unsigned short const * const EmailMailboxResolveRecipientsRequestReportCompletedActionName;
unsigned short const * const EmailMailboxResolveRecipientsRequestReportFailedActionName;
unsigned short const * const EmailMailboxSaveActionName;
unsigned short const * const EmailMailboxSaveDraftActionName;
unsigned short const * const EmailMailboxSendMessageActionName;
unsigned short const * const EmailMailboxServerSearchReadBatchRequestReportCompletedActionName;
unsigned short const * const EmailMailboxServerSearchReadBatchRequestReportFailedActionName;
unsigned short const * const EmailMailboxServerSearchReadBatchRequestSaveMessageActionName;
unsigned short const * const EmailMailboxSetAutoReplySettingsRequestReportCompletedActionName;
unsigned short const * const EmailMailboxSetAutoReplySettingsRequestReportFailedActionName;
unsigned short const * const EmailMailboxSyncManagerSyncOperationName;
unsigned short const * const EmailMailboxSyncManagerSyncRequestReportCompletedActionName;
unsigned short const * const EmailMailboxSyncManagerSyncRequestReportFailedActionName;
unsigned short const * const EmailMailboxTryEmptyFolderOperationName;
unsigned short const * const EmailMailboxTryForwardMeetingOperationName;
unsigned short const * const EmailMailboxTryGetAutoReplySettingsOperationName;
unsigned short const * const EmailMailboxTryProposeNewTimeForMeetingOperationName;
unsigned short const * const EmailMailboxTrySetAutoReplySettingsOperationName;
unsigned short const * const EmailMailboxTryUpdateMeetingResponseOperationName;
unsigned short const * const EmailMailboxUpdateMeetingResponseRequestReportCompletedActionName;
unsigned short const * const EmailMailboxUpdateMeetingResponseRequestReportFailedActionName;
unsigned short const * const EmailMailboxValidateCertificatesOperationName;
unsigned short const * const EmailMailboxValidateCertificatesRequestReportCompletedActionName;
unsigned short const * const EmailMailboxValidateCertificatesRequestReportFailedActionName;
unsigned short const * const EmailManagerForUserRequestStoreOperationName;
unsigned short const * const EmailManagerForUserShowComposeNewEmailActionName;
unsigned short const * const EmailManagerRequestStoreOperationName;
unsigned short const * const EmailManagerShowComposeNewEmailActionName;
unsigned short const * const EmailMessageReaderReadBatchOperationName;
unsigned short const * const EmailStoreCreateMailboxOperationName;
unsigned short const * const EmailStoreFindMailboxesOperationName;
unsigned short const * const EmailStoreGetConversationOperationName;
unsigned short const * const EmailStoreGetFolderOperationName;
unsigned short const * const EmailStoreGetMailboxOperationName;
unsigned short const * const EmailStoreGetMessageOperationName;
unsigned short const * const GenericMakeAsyncName;
unsigned short const * const InterfaceName_Windows_Foundation_IAsyncAction;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_AppService_AppServiceConnection;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Background_EmailStoreNotificationTrigger;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_DataTransfer_SharedStorageAccessManager;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailDataProviderConnection;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailDataProviderTriggerDetails;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxCreateFolderRequest;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxCreateFolderRequestEventArgs;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDeleteFolderRequest;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDeleteFolderRequestEventArgs;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDownloadAttachmentRequest;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDownloadAttachmentRequestEventArgs;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDownloadMessageRequest;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxDownloadMessageRequestEventArgs;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxEmptyFolderRequest;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxEmptyFolderRequestEventArgs;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxForwardMeetingRequest;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxForwardMeetingRequestEventArgs;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxGetAutoReplySettingsRequest;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxGetAutoReplySettingsRequestEventArgs;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxMoveFolderRequest;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxMoveFolderRequestEventArgs;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxProposeNewTimeForMeetingRequest;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxProposeNewTimeForMeetingRequestEventArgs;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxResolveRecipientsRequest;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxResolveRecipientsRequestEventArgs;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxServerSearchReadBatchRequest;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxServerSearchReadBatchRequestEventArgs;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxSetAutoReplySettingsRequest;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxSetAutoReplySettingsRequestEventArgs;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxSyncManagerSyncRequest;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxSyncManagerSyncRequestEventArgs;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxUpdateMeetingResponseRequest;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxUpdateMeetingResponseRequestEventArgs;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxValidateCertificatesRequest;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_DataProvider_EmailMailboxValidateCertificatesRequestEventArgs;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_EmailAttachment;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_EmailConversation;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_EmailConversationBatch;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_EmailConversationReader;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_EmailFolder;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_EmailIrmInfo;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_EmailIrmTemplate;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_EmailItemCounts;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_EmailMailbox;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_EmailMailboxAction;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_EmailMailboxAutoReply;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_EmailMailboxAutoReplySettings;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_EmailMailboxCapabilities;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_EmailMailboxChange;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_EmailMailboxChangeReader;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_EmailMailboxChangeTracker;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_EmailMailboxChangedDeferral;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_EmailMailboxChangedEventArgs;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_EmailMailboxCreateFolderResult;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_EmailMailboxPolicies;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_EmailMailboxSyncManager;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_EmailManager;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_EmailManagerForUser;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_EmailMeetingInfo;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_EmailMessage;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_EmailMessageBatch;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_EmailMessageReader;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_EmailQueryOptions;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_EmailQueryTextSearch;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_EmailRecipient;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_EmailRecipientResolutionResult;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_EmailStore;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Email_EmailStoreNotificationTriggerDetails;
unsigned short const * const RuntimeClass_Windows_Foundation_Collections_PropertySet;
unsigned short const * const RuntimeClass_Windows_Foundation_Deferral;
unsigned short const * const RuntimeClass_Windows_Foundation_Diagnostics_AsyncCausalityTracer;
unsigned short const * const RuntimeClass_Windows_Foundation_PropertyValue;
unsigned short const * const RuntimeClass_Windows_Foundation_Uri;
unsigned short const * const RuntimeClass_Windows_Security_Cryptography_Certificates_Certificate;
unsigned short const * const RuntimeClass_Windows_Storage_ApplicationData;
unsigned short const * const RuntimeClass_Windows_Storage_StorageFile;
unsigned short const * const RuntimeClass_Windows_Storage_Streams_Buffer;
unsigned short const * const RuntimeClass_Windows_Storage_Streams_InMemoryRandomAccessStream;
unsigned short const * const RuntimeClass_Windows_Storage_Streams_RandomAccessStreamReference;
unsigned short const * const RuntimeClass_Windows_System_Internal_UserManager;
unsigned short const * const RuntimeClass_Windows_System_Launcher;
unsigned short const * const RuntimeClass_Windows_UI_Core_CoreWindow;
unsigned short const * const UdmStreamReferenceOpenReadActionName;
void * * IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IIterable<HSTRING__ *> > >(Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IIterable<HSTRING__ *> > >);
void * operator new(unsigned __int64);
void * operator new(unsigned __int64,std::nothrow_t const &);
void * operator new[](unsigned __int64);
void * operator new[](unsigned __int64,std::nothrow_t const &);
void _TlgWriteActivityAutoStop<70368744177664,5>(_TlgProvider_t const *,_GUID const *);
void operator delete(void *);
void operator delete(void *,std::nothrow_t const &);
void operator delete[](void *);
