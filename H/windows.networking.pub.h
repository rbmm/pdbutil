class <lambda_5f1dd388c03885d19ee806198d2ac5ef>
{
	static int <lambda_invoker_cdecl>(_RTL_RUN_ONCE *,void *,void * *);
};

class AcceptOperationImpl
{
	long CheckAcceptedSocketAccess();
	long CreateStreamSocketPrivate(SocketHandle *,StreamSocketServer * *);
	long InitializeConnectedStreamSocket(StreamSocketServer *,SocketHandle *);
	long IoCompletedCore(long,Windows::Networking::Sockets::IStreamSocketListener *);
	long StartReceivingCore();
	long StartReceivingInternal();
	unsigned char IsAcceptPosted();
	void CompletePendingAccept();
	void NotifyQueuedConnectedSockets(void *);
	void NotifyQueuedConnectedSocketsCore();
public:
	long AddConnectionReceiveEvent(Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::StreamSocketListener *,Windows::Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs *> *,EventRegistrationToken *);
	long QueueConnectedSocket(SocketHandle *);
	long RuntimeClassInitialize(Windows::Networking::Sockets::Internal::ISocketContext *,unsigned short,SocketHandle *,Windows::Internal::GitEventSourceSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::StreamSocketListener *,Windows::Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2> > *,unsigned long);
	long StartReceiving();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long IoCompleted(long,unsigned int,IInspectable *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~AcceptOperationImpl();
};

struct AutoHINTERNET
{
	struct InternetHandle
	{
		unsigned long Release();
	};

	virtual bool IsNull();
};

struct AutoLock
{
	AutoLock(Lock *);
	~AutoLock();
};

struct AutoReaderLock
{
	AutoReaderLock(ReaderWriterLock *);
	~AutoReaderLock();
};

struct AutoStringPtr
{
	bool EqualsIgnoreCase(HSTRING__ *);
	long Initialize(HSTRING__ *);
};

struct AutoWriterLock
{
	AutoWriterLock(ReaderWriterLock *);
};

struct BiasHelper<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,1>
{
	static AutoStubBias<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler> CreateBias(IRpcOptions *,Windows::Foundation::IAsyncAction *,Windows::Foundation::IAsyncActionCompletedHandler *);
};

struct BluetoothHelper
{
	static long EnsureBluetoothAccess();
	static long GetCallerThreadId(unsigned long *);
	static long GetServiceNameType(unsigned short const *,BluetoothServiceNameType *);
	static long ServiceNameToInstance(unsigned __int64,unsigned short const *,_GUID *,unsigned int *);
	static long ServiceNameToPort(unsigned __int64,unsigned short const *,unsigned long *);
};

class BluetoothSocketHandle
{
	long Initialize();
	static long ActivateBroker(IBluetoothBroker * *);
	static unsigned long CMNotificationCallback(HCMNOTIFICATION__ *,void *,_CM_NOTIFY_ACTION,_CM_NOTIFY_EVENT_DATA *,unsigned long);
	virtual ~BluetoothSocketHandle();
public:
	long OpenBackgroundFirewall(unsigned __int64,unsigned char,unsigned long);
	long OpenClientFirewall(unsigned __int64,_GUID const &,unsigned int,unsigned long,unsigned long *);
	long OpenServerFirewall(unsigned __int64,unsigned char,unsigned long);
	static long Create(int,unsigned long,BluetoothSocketHandle * *);
	static long Create(unsigned __int64,BluetoothSocketHandle * *);
	virtual void Close();
};

struct BufferHelper
{
	static long CreateBuffer(unsigned char *,unsigned int,Windows::Storage::Streams::IBuffer * *);
};

struct BufferedInputStream
{
	class BufferedStreamReadOperation
	{
		long CompleteReadOperation();
	protected:
		virtual long OnStart();
		virtual void OnCancel();
		virtual void OnClose();
	public:
		BufferedStreamReadOperation();
		virtual long GetIids(unsigned long *,_GUID * *);
		virtual long GetResults(Windows::Storage::Streams::IBuffer * *);
		virtual long GetRuntimeClassName(HSTRING__ * *);
		virtual long GetTrustLevel(TrustLevel *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long get_Completed(Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Storage::Streams::IBuffer *,unsigned int> * *);
		virtual long get_Progress(Windows::Foundation::IAsyncOperationProgressHandler<Windows::Storage::Streams::IBuffer *,unsigned int> * *);
		virtual long put_Completed(Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Storage::Streams::IBuffer *,unsigned int> *);
		virtual long put_Progress(Windows::Foundation::IAsyncOperationProgressHandler<Windows::Storage::Streams::IBuffer *,unsigned int> *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ReadAsync(Windows::Storage::Streams::IBuffer *,unsigned int,Windows::Storage::Streams::InputStreamOptions,Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer *,unsigned int> * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

namespace CallerIdentity
{
	long IsProcessAppContainer(void *,bool *);
};

class CertificateHelper
{
	static unsigned int const * const CertificateErrorToWininetIgnoreFlagMap;
public:
	static long CreateCertificate(_CERT_CONTEXT const *,Windows::Security::Cryptography::Certificates::ICertificate * *);
	static long ExtractCertificateChainContextFromWininetHandle(void *,bool *,_CERT_CHAIN_CONTEXT const * *);
	static long GetPrivateCertificateContext(Windows::Security::Cryptography::Certificates::ICertificate *,_CERT_CONTEXT const * *);
	static long ParseCertificateInformation(_CERT_CHAIN_CONTEXT const *,unsigned short const *,Windows::Networking::Sockets::SocketSslErrorSeverity *,Windows::Foundation::Collections::Internal::AgileVector<Windows::Security::Cryptography::Certificates::ChainValidationResult,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Cryptography::Certificates::ChainValidationResult>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Cryptography::Certificates::ChainValidationResult>,0> *,Windows::Foundation::Collections::Internal::AgileVector<Windows::Security::Cryptography::Certificates::Certificate *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Cryptography::Certificates::Certificate *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Cryptography::Certificates::Certificate *>,0> *,Windows::Security::Cryptography::Certificates::ICertificate * *);
	static long StringifyCertificateInformation(Windows::Networking::Sockets::SocketSslErrorSeverity,Windows::Foundation::Collections::Internal::AgileVector<Windows::Security::Cryptography::Certificates::ChainValidationResult,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Cryptography::Certificates::ChainValidationResult>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Cryptography::Certificates::ChainValidationResult>,0> *,Windows::Foundation::Collections::Internal::AgileVector<Windows::Security::Cryptography::Certificates::Certificate *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Cryptography::Certificates::Certificate *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Cryptography::Certificates::Certificate *>,0> *,Windows::Security::Cryptography::Certificates::ICertificate *,HSTRING__ * *);
};

class ClosableHelper
{
protected:
	virtual long OnClose();
public:
	static long Close<SocketOutputStream>(Microsoft::WRL::ComPtr<SocketOutputStream> const &);
	virtual long Close();
};

struct CookieHelper
{
	static long CollectCookies(unsigned short const *,HttpHeaderCollection *);
};

class DatagramSocketBindOperationServer
{
protected:
	virtual Windows::Networking::Sockets::Internal::OperationType GetOperationType();
	virtual long OnStart();
	virtual void OnCancel();
public:
	DatagramSocketBindOperationServer();
	long OnGetAddrInfoComplete(addrinfoexW *);
	long RuntimeClassInitialize(DatagramSocketServer *,SocketHandle *,Windows::Networking::IHostName *,HSTRING__ * const);
	virtual Windows::Networking::Sockets::Internal::ISocketContext * GetSocketContext();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetResults();
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Completed(Windows::Foundation::IAsyncActionCompletedHandler * *);
	virtual long put_Completed(Windows::Foundation::IAsyncActionCompletedHandler *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void CompleteAsyncOperation(long);
	virtual ~DatagramSocketBindOperationServer();
};

class DatagramSocketConnectOperationServer
{
protected:
	virtual Windows::Networking::Sockets::Internal::OperationType GetOperationType();
	virtual long OnStart();
	virtual void OnCancel();
public:
	long OnGetAddrInfoComplete(addrinfoexW *);
	long OnSrvRecordQueryComplete(_DNS_QUERY_RESULT *);
	long RuntimeClassInitialize(DatagramSocketServer *,SocketHandle *,Windows::Networking::IHostName *,HSTRING__ * const,Windows::Networking::IHostName *,HSTRING__ * const);
	virtual Windows::Networking::Sockets::Internal::ISocketContext * GetSocketContext();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetResults();
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Completed(Windows::Foundation::IAsyncActionCompletedHandler * *);
	virtual long put_Completed(Windows::Foundation::IAsyncActionCompletedHandler *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~DatagramSocketConnectOperationServer();
};

class DatagramSocketControlImpl
{
	long CheckParentSocketState();
public:
	DatagramSocketControlImpl();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_DontFragment(unsigned char *);
	virtual long get_InboundBufferSizeInBytes(unsigned int *);
	virtual long get_MulticastOnly(unsigned char *);
	virtual long get_OutboundUnicastHopLimit(unsigned char *);
	virtual long get_QualityOfService(Windows::Networking::Sockets::SocketQualityOfService *);
	virtual long put_DontFragment(unsigned char);
	virtual long put_InboundBufferSizeInBytes(unsigned int);
	virtual long put_MulticastOnly(unsigned char);
	virtual long put_OutboundUnicastHopLimit(unsigned char);
	virtual long put_QualityOfService(Windows::Networking::Sockets::SocketQualityOfService);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class DatagramSocketGetOutputStreamOperationImpl
{
	long CreateResultStream(_SOCKADDR_INET *);
	long UpdateIfArray(_SOCKADDR_INET *);
protected:
	virtual long OnStart();
	virtual void OnCancel();
	virtual void OnClose();
public:
	DatagramSocketGetOutputStreamOperationImpl();
	long OnGetAddrInfoComplete(addrinfoexW *);
	long OnSrvRecordQueryComplete(_DNS_QUERY_RESULT *);
	long RuntimeClassInitialize(DatagramSocketServer *,Windows::Networking::IHostName *,HSTRING__ * const,Windows::Networking::IHostName *,HSTRING__ * const,unsigned long);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetResults(Windows::Storage::Streams::IOutputStream * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Completed(Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Storage::Streams::IOutputStream *> * *);
	virtual long put_Completed(Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Storage::Streams::IOutputStream *> *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~DatagramSocketGetOutputStreamOperationImpl();
	void CompleteAsyncOperation(long);
};

struct DatagramSocketInformationImpl
{
	DatagramSocketInformationImpl();
	long SetLocalName(_SOCKADDR_INET *,HSTRING__ *,Windows::Networking::Sockets::SocketQualityOfService);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_LocalAddress(Windows::Networking::IHostName * *);
	virtual long get_LocalPort(HSTRING__ * *);
	virtual long get_RemoteAddress(Windows::Networking::IHostName * *);
	virtual long get_RemotePort(HSTRING__ * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class DatagramSocketInputStream
{
	long ReadAsyncInternal(Windows::Storage::Streams::IBuffer *,unsigned int,Windows::Storage::Streams::InputStreamOptions,Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer *,unsigned int> * *);
public:
	DatagramSocketInputStream(DatagramSocketServer *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ReadAsync(Windows::Storage::Streams::IBuffer *,unsigned int,Windows::Storage::Streams::InputStreamOptions,Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer *,unsigned int> * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~DatagramSocketInputStream();
};

struct DatagramSocketMessageReceivedEventArgsServer
{
	virtual long GetDataReader(Windows::Storage::Streams::IDataReader * *);
	virtual long GetDataStream(Windows::Storage::Streams::IInputStream * *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_LocalAddress(Windows::Networking::IHostName * *);
	virtual long get_RemoteAddress(Windows::Networking::IHostName * *);
	virtual long get_RemotePort(HSTRING__ * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class DatagramSocketReadOperationServer
{
	long IoCompletedCore(long,unsigned int,Windows::Networking::Sockets::IDatagramSocket *);
	long Receive(unsigned char *,unsigned int *);
	static void RemoveMessageReceivedHandler(void *,EventRegistrationToken,void *);
public:
	DatagramSocketReadOperationServer();
	long RuntimeClassInitialize(Windows::Networking::Sockets::Internal::ISocketContext *,SocketHandle *);
	long StartReceiving();
	long add_MessageReceived(Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::DatagramSocket *,Windows::Networking::Sockets::DatagramSocketMessageReceivedEventArgs *> *,unsigned char,EventRegistrationToken *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long IoCompleted(long,unsigned int,IInspectable *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~DatagramSocketReadOperationServer();
	void StopReceiving();
};

class DatagramSocketServer
{
	long AllocateAndGetAdaptersAddresses(AutoArray<char *> &);
	long ApplyAndQueryTransportSettings(_REAL_TIME_NOTIFICATION_SETTING_INPUT *,_REAL_TIME_NOTIFICATION_SETTING_OUTPUT *);
	long BindAsyncInternal(Windows::Networking::IHostName *,HSTRING__ *,Windows::Networking::Connectivity::INetworkAdapter *,Windows::Foundation::IAsyncAction * *);
	long ConnectAsyncInternal(Windows::Networking::IHostName *,HSTRING__ *,Windows::Networking::IHostName *,HSTRING__ *,Windows::Foundation::IAsyncAction * *);
	long ConvertHostNameToSocketAddress(Windows::Networking::IHostName *,_SOCKADDR_INET *);
	long CreateBindOperation(Windows::Networking::IHostName *,HSTRING__ *,Windows::Foundation::IAsyncAction * *);
	long CreateConnectOperation(Windows::Networking::IHostName *,HSTRING__ *,Windows::Networking::IHostName *,HSTRING__ *,Windows::Foundation::IAsyncAction * *);
	long FlushCore();
	long GetOutputStreamAsyncCore(Windows::Networking::IHostName *,HSTRING__ * const,Windows::Networking::IHostName *,HSTRING__ * const,Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IOutputStream *> * *);
	long GetOutputStreamWithEndpointPairAsyncInternal(Windows::Networking::IEndpointPair *,Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IOutputStream *> * *);
	long Initialize(SocketHandle *);
	long JoinMulticastGroupInternal(Windows::Networking::IHostName *);
	long JoinMulticastGroupOnAdapters(sockaddr *,_IP_ADAPTER_ADDRESSES_LH *);
	long PerformTransfer(HSTRING__ *,Windows::Networking::Sockets::ISocketActivityContext *,unsigned char,Windows::Foundation::TimeSpan);
	long PrepareWorkQueue();
	long TransferOwnershipCore(HSTRING__ *,Windows::Networking::Sockets::ISocketActivityContext *,unsigned char,Windows::Foundation::TimeSpan);
protected:
	virtual long OnClose();
public:
	DatagramSocketServer();
	long CheckIsNotMulticastOnly();
	long CopyRtcState(DatagramSocketServer *);
	long InitializeTransferOwnershipState(_GUID);
	long UpdateNames();
	static TrustLevel InternalGetTrustLevel();
	static long MakeDatagramSocket(SocketHandle *,DatagramSocketServer * *);
	static unsigned short const * InternalGetRuntimeClassName();
	virtual long ApplySetting(TRANSPORT_SETTING_ID const *,unsigned long,unsigned char const *,unsigned long *,unsigned char * *);
	virtual long BindEndpointAsync(Windows::Networking::IHostName *,HSTRING__ *,Windows::Foundation::IAsyncAction * *);
	virtual long BindServiceNameAndAdapterAsync(HSTRING__ *,Windows::Networking::Connectivity::INetworkAdapter *,Windows::Foundation::IAsyncAction * *);
	virtual long BindServiceNameAsync(HSTRING__ *,Windows::Foundation::IAsyncAction * *);
	virtual long Cancel();
	virtual long CancelIOAsync(Windows::Foundation::IAsyncAction * *);
	virtual long CancelIoWithoutClosing();
	virtual long CheckConnected();
	virtual long CheckConnecting();
	virtual long CheckListenState();
	virtual long CheckNewState();
	virtual long CheckNotCancellingIo();
	virtual long CheckNotUpgrading();
	virtual long CheckPendingReadOperations();
	virtual long CheckPendingWriteOperations();
	virtual long CompleteDelivery();
	virtual long ConnectAsync(Windows::Networking::IHostName *,HSTRING__ *,Windows::Foundation::IAsyncAction * *);
	virtual long ConnectWithEndpointPairAsync(Windows::Networking::IEndpointPair *,Windows::Foundation::IAsyncAction * *);
	virtual long DecrementPendingWriteOperations();
	virtual long EnableTransferOwnership(_GUID);
	virtual long EnableTransferOwnershipWithConnectedStandbyAction(_GUID,Windows::Networking::Sockets::SocketActivityConnectedStandbyAction);
	virtual long Flush();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetOutputStreamAsync(Windows::Networking::IHostName *,HSTRING__ *,Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IOutputStream *> * *);
	virtual long GetOutputStreamWithEndpointPairAsync(Windows::Networking::IEndpointPair *,Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IOutputStream *> * *);
	virtual long GetQualityOfService(Windows::Networking::Sockets::SocketQualityOfService *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetSocket(Windows::Networking::Sockets::Internal::ISocketHandle * *);
	virtual long GetSocketGuid(_GUID *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long IncrementPendingWriteOperations();
	virtual long JoinMulticastGroup(Windows::Networking::IHostName *);
	virtual long OwnSocketAndClose(Windows::Networking::Sockets::IDatagramSocket * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QuerySetting(TRANSPORT_SETTING_ID const *,unsigned long,unsigned char const *,unsigned long *,unsigned char * *);
	virtual long SetCancellingIo(unsigned char);
	virtual long SetIdleOperationState(Windows::Networking::Sockets::Internal::OperationType);
	virtual long TransferOwnership(HSTRING__ *);
	virtual long TransferOwnershipWithContext(HSTRING__ *,Windows::Networking::Sockets::ISocketActivityContext *);
	virtual long TransferOwnershipWithContextAndKeepAliveTime(HSTRING__ *,Windows::Networking::Sockets::ISocketActivityContext *,Windows::Foundation::TimeSpan);
	virtual long add_MessageReceived(Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::DatagramSocket *,Windows::Networking::Sockets::DatagramSocketMessageReceivedEventArgs *> *,EventRegistrationToken *);
	virtual long get_Control(Windows::Networking::Sockets::IDatagramSocketControl * *);
	virtual long get_Information(Windows::Networking::Sockets::IDatagramSocketInformation * *);
	virtual long get_InputStream(Windows::Storage::Streams::IInputStream * *);
	virtual long get_OutputStream(Windows::Storage::Streams::IOutputStream * *);
	virtual long remove_MessageReceived(EventRegistrationToken);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~DatagramSocketServer();
};

struct DatagramSocketStatics
{
	virtual long ActivateInstance(IInspectable * *);
	virtual long GetEndpointPairsAsync(Windows::Networking::IHostName *,HSTRING__ *,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair *> *> * *);
	virtual long GetEndpointPairsWithSortOptionsAsync(Windows::Networking::IHostName *,HSTRING__ *,Windows::Networking::HostNameSortOptions,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair *> *> * *);
};

class DatagramSocketStreamReadOperationServer
{
protected:
	virtual long OnStart();
	virtual long StartReadOperation(unsigned char *,unsigned int);
	virtual void CompleteOperation();
	virtual void OnApplicationCallbackDone();
public:
	DatagramSocketStreamReadOperationServer(DatagramSocketServer *);
	virtual Windows::Networking::Sockets::Internal::ISocketContext * GetSocketContext();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetResults(Windows::Storage::Streams::IBuffer * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long IoCompleted(long,unsigned int,IInspectable *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Completed(Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Storage::Streams::IBuffer *,unsigned int> * *);
	virtual long get_Progress(Windows::Foundation::IAsyncOperationProgressHandler<Windows::Storage::Streams::IBuffer *,unsigned int> * *);
	virtual long put_Completed(Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Storage::Streams::IBuffer *,unsigned int> *);
	virtual long put_Progress(Windows::Foundation::IAsyncOperationProgressHandler<Windows::Storage::Streams::IBuffer *,unsigned int> *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~DatagramSocketStreamReadOperationServer();
};

class DatagramSocketWriteToOperationServer
{
	long SendNextInterface();
	void CompleteSending(long);
	void ContinueSending();
protected:
	virtual Windows::Networking::Sockets::Internal::OperationType GetOperationType();
	virtual long OnStart();
	virtual void OnCancel();
public:
	DatagramSocketWriteToOperationServer();
	long RuntimeClassInitialize(DatagramSocketWriteToOutputStream *,IoRequestRecord *,Windows::Storage::Streams::IBuffer *);
	virtual Windows::Networking::Sockets::Internal::ISocketContext * GetSocketContext();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetResults(unsigned int *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long IoCompleted(long,unsigned int,IInspectable *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Completed(Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<unsigned int,unsigned int> * *);
	virtual long get_Progress(Windows::Foundation::IAsyncOperationProgressHandler<unsigned int,unsigned int> * *);
	virtual long put_Completed(Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<unsigned int,unsigned int> *);
	virtual long put_Progress(Windows::Foundation::IAsyncOperationProgressHandler<unsigned int,unsigned int> *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void FireCompletionAndReleaseOperation();
	virtual ~DatagramSocketWriteToOperationServer();
};

struct DatagramSocketWriteToOutputStream
{
	long RuntimeClassInitialize(DatagramSocketServer *,unsigned long *,unsigned int,_SOCKADDR_INET *,_SOCKADDR_INET *,HSTRING__ *);
	virtual long FlushAsync(Windows::Foundation::IAsyncOperation<bool> * *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long WriteAsync(Windows::Storage::Streams::IBuffer *,Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int> * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~DatagramSocketWriteToOutputStream();
	void NotifyWriteRequestCompleted(IoRequestRecord *);
};

class DiscoverableSocketBase
{
	long StoreDnsRegistrationDataCore(_DNS_SERVICE_INSTANCE *,unsigned char);
public:
	long GetNcbDnsRegistrationData(_DNS_REGISTRATION_DATA * *);
	long StoreNcbDnsRegistrationData(_DNS_REGISTRATION_DATA *);
	virtual long StoreDnsRegistrationData(Windows::Storage::Streams::IBuffer *,unsigned char);
	void ClearAllDnsRegistrationData();
	void DeRegisterAllPublishedDnsServices();
	~DiscoverableSocketBase();
};

struct DnsHelper
{
	static _DnsRecordW * SortSrvRecords(_DnsRecordW *);
	static long QuerySrvRecord(Windows::Internal::String &,Windows::Internal::String &,unsigned char,DnsQueryContext *,unsigned short * *,_DNS_QUERY_CANCEL *);
	static void DnsServiceInstanceDeRegistrationCallback(unsigned long,void *,_DNS_SERVICE_INSTANCE *);
	static void FreeDnsServiceInstance(_DNS_SERVICE_INSTANCE *);
};

struct EdpHelper
{
	long CreateThreadNetworkContext(Windows::Internal::String const &);
	static long GetEnterpriseIdFromThreadTokenIfSpecified(Windows::Internal::String &);
};

struct ErrorHandler
{
	static long Report(long);
	static long Report(long,unsigned short const *);
	static long Report(long,unsigned short,...);
};

struct EventRegistrationHandleCache
{
	EventRegistrationHandleCache(void *,void (*)(void *,EventRegistrationToken,void *));
	long Add(EventRegistrationToken);
	long Remove(EventRegistrationToken,void *);
	void RemoveAll(void *);
};

class FlushOperation
{
protected:
	virtual long OnStart();
	virtual void OnCancel();
	virtual void OnClose();
public:
	FlushOperation();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetResults(unsigned char *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Completed(Windows::Foundation::IAsyncOperationCompletedHandler<bool> * *);
	virtual long put_Completed(Windows::Foundation::IAsyncOperationCompletedHandler<bool> *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class GetEndpointPairsOperationImpl
{
protected:
	virtual long OnStart();
	virtual void OnCancel();
	virtual void OnClose();
public:
	GetEndpointPairsOperationImpl();
	long OnGetAddrInfoComplete(addrinfoexW *);
	long OnSrvRecordQueryComplete(_DNS_QUERY_RESULT *);
	long RuntimeClassInitialize(GetEndpointPairsSocketType,Windows::Networking::IHostName *,HSTRING__ * const,Windows::Networking::HostNameSortOptions);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetResults(Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair *> * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Completed(Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair *> *> * *);
	virtual long put_Completed(Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair *> *> *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~GetEndpointPairsOperationImpl();
	void CompleteAsyncOperation(long);
};

struct HttpContent
{
	long AttachArray(char const *,unsigned int);
	long Read(char *,unsigned int,unsigned int *);
};

class HttpEventTracing
{
	static IHttpEventProvider * traceEventProvider;
	static void TraceHttpEntityBodyInternal(bool,void *,char *,unsigned int);
public:
	static void TraceHttpEntityBody(bool,void *,HttpContent *);
	static void TraceHttpFailureCompletionCallback(HttpRequest *,long);
	static void TraceHttpProgressCallback(HttpRequest *,Windows::Web::Http::HttpProgress *);
	static void TraceOpenRequest(Windows::Foundation::IUriRuntimeClass *,unsigned short const *,unsigned int);
	static void TraceRequestContextAndHandle(Windows::Foundation::IUriRuntimeClass *,void const *,void const *);
};

struct HttpHeaderCollection
{
	long Add(Windows::Internal::String &,Windows::Internal::String &);
	static unsigned short const * const CookieHeaderName;
};

class HttpHeaderParser
{
	static long Serialize(HttpHeaderCollection *,unsigned short *,unsigned int,unsigned int *);
public:
	static long Parse(unsigned short const *,unsigned int,HttpHeaderCollection *);
	static long Serialize(HttpHeaderCollection *,unsigned char * *,unsigned int *);
	static unsigned char CheckForInvalidCharactersInToken(Windows::Internal::String const &);
	static unsigned char CheckForInvalidCharactersInValue(Windows::Internal::String const &);
	static unsigned char IsTokenCharacter(unsigned short);
};

struct HttpRequest
{
	HttpRequest();
	long GetHeaders(HttpHeaderCollection * *);
	long GetUri(Windows::Foundation::IUriRuntimeClass * *);
	long Initialize(HttpProtocolMethod,Windows::Foundation::IUriRuntimeClass *,unsigned int *,unsigned char);
	long SerializeHeaders(unsigned char,unsigned char * *,unsigned int *);
	long SetUri(Windows::Foundation::IUriRuntimeClass *);
	unsigned long Release();
};

class HttpRequestContext
{
	long ApplyClientCertificate(void *,Windows::Security::Cryptography::Certificates::ICertificate *);
	long ApplyCredential(void *,Windows::Security::Credentials::IPasswordCredential *,HttpRequestContext::CredentialKind);
	long ApplySecurityFlags(void *,unsigned long);
	long CallInternetErrorDlg(unsigned int);
	long CallInternetReadFile(void *,unsigned char *);
	long ConfigureRequestHandle(HttpRequest *,void *);
	long CreateResponseStream();
	long InternetStatusRedirectHelper(void *,unsigned short const *);
	long PostCallbackWithPrompt(unsigned int);
	long ProcessReceivedBytes();
	long SetEnterpriseIdOnRequestHandle(HttpRequest *,void *);
	long UpdateStateMachine(void *,unsigned int,unsigned char *);
	static void InternetStatusCallback(void *,unsigned __int64,unsigned long,void *,unsigned long);
	virtual long CreateRequestHandle(AutoHINTERNET &,HttpRequest *,Windows::Foundation::IUriRuntimeClass *);
	void InternetStatusCallbackCore(void *,unsigned int,void *,unsigned int);
	void InvokeInternetErrorDlg(void *);
	void MarkRequestForResubmit();
	void RaiseCompletionCallback(long);
	void RaiseProgressCallback();
protected:
	virtual ~HttpRequestContext();
public:
	HttpRequestContext();
	long Abort();
	long CallHttpEndRequest(unsigned char *);
	long CallInternetWriteFile(unsigned char *,unsigned int,void (*)(void *,unsigned int,long),void *);
	long RuntimeClassInitialize(HttpSession *,AutoHINTERNET &,HttpRequest *,Windows::Foundation::IUriRuntimeClass *);
	static long ReportWininetError(unsigned int);
};

class HttpRequestError
{
	static Windows::Web::WebErrorStatus MapWin32ErrorToWebErrorStatus(long);
public:
	static Windows::Web::WebErrorStatus MapHResultToWebErrorStatus(long);
	static long MapStatusCodeToHResult(unsigned int);
};

class HttpRequestStream
{
	class WriteOperation
	{
		static void RequestStreamWriteCompletionCallback(void *,unsigned int,long);
		void InvokeRequestStreamWriteCompletionCallback(void *);
	protected:
		virtual long OnStart();
		virtual void OnCancel();
		virtual void OnClose();
	public:
		virtual long GetIids(unsigned long *,_GUID * *);
		virtual long GetResults(unsigned int *);
		virtual long GetRuntimeClassName(HSTRING__ * *);
		virtual long GetTrustLevel(TrustLevel *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long get_Completed(Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<unsigned int,unsigned int> * *);
		virtual long get_Progress(Windows::Foundation::IAsyncOperationProgressHandler<unsigned int,unsigned int> * *);
		virtual long put_Completed(Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<unsigned int,unsigned int> *);
		virtual long put_Progress(Windows::Foundation::IAsyncOperationProgressHandler<unsigned int,unsigned int> *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

protected:
	virtual long OnClose();
public:
	virtual long FlushAsync(Windows::Foundation::IAsyncOperation<bool> * *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long WriteAsync(Windows::Storage::Streams::IBuffer *,Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int> * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class HttpResponseParser
{
	static long HttpQueryBytes(void *,unsigned long,unsigned char * *,unsigned long *);
	static long ParseResponseHeaders(void *,HttpResponse *);
public:
	static long ParseResponse(void *,HttpResponse * *,unsigned __int64 *);
};

class HttpResponseStream
{
	class ReadOperation
	{
		void CompleteAsyncOperation(long);
	protected:
		virtual long OnStart();
		virtual void OnCancel();
		virtual void OnClose();
	public:
		ReadOperation();
		long WininetCompletion(unsigned int,unsigned int);
		virtual long GetIids(unsigned long *,_GUID * *);
		virtual long GetResults(Windows::Storage::Streams::IBuffer * *);
		virtual long GetRuntimeClassName(HSTRING__ * *);
		virtual long GetTrustLevel(TrustLevel *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long get_Completed(Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Storage::Streams::IBuffer *,unsigned int> * *);
		virtual long get_Progress(Windows::Foundation::IAsyncOperationProgressHandler<Windows::Storage::Streams::IBuffer *,unsigned int> * *);
		virtual long put_Completed(Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Storage::Streams::IBuffer *,unsigned int> *);
		virtual long put_Progress(Windows::Foundation::IAsyncOperationProgressHandler<Windows::Storage::Streams::IBuffer *,unsigned int> *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	long CallInternetReadFile(void *);
	static void InternetStatusCallback(void *,unsigned __int64,unsigned long,void *,unsigned long);
	void InvokeWininetCompletion(void *);
protected:
	virtual long OnClose();
public:
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ReadAsync(Windows::Storage::Streams::IBuffer *,unsigned int,Windows::Storage::Streams::InputStreamOptions,Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer *,unsigned int> * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class HttpSession
{
	class MtaReference
	{
		long InitializeCore(void *);
	public:
		static void WinInetCompleteWaitCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_WAIT *,long);
		void Release();
	};

	long GetConnectionHandle(Windows::Foundation::IUriRuntimeClass *,AutoHINTERNET *);
	long Initialize(Windows::Internal::String &,unsigned char,unsigned char);
public:
	HttpSession();
	long AbortRequest(HttpRequest *);
	long MakeRequestAsync(HttpRequest *);
};

class IdProvider
{
	static unsigned int currentId;
};

class IgnorableChainValidationResultVector
{
	static IgnorableChainValidationResultVector::ChainValidationResultData const * const chainValidationResultData;
protected:
	virtual long ValidateInput(Windows::Security::Cryptography::Certificates::ChainValidationResult,unsigned short const *);
public:
	IgnorableChainValidationResultVector();
	static long IterableChainValidationResultToString(Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::ChainValidationResult> *,HSTRING__ * *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct ImpersonationFreeContext
{
	long RemoveImpersonation(Windows::Internal::String *);
	~ImpersonationFreeContext();
};

class MTARefHelper
{
	static void NoOpMethod();
public:
	long Reference();
	void Dereference(_TP_CALLBACK_INSTANCE *);
};

class MediaFoundationLibrary
{
	struct Queue
	{
		long Join(unsigned __int64,void * *);
		long QueueWorkItem(IMFAsyncCallback *);
	};

	static MediaFoundationLibrary library;
public:
	static long GetQueue(Windows::Networking::Sockets::SocketQualityOfService,MediaFoundationLibrary::Queue * *);
};

struct MessageWebSocketControlImpl
{
	MessageWebSocketControlImpl();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_ActualUnsolicitedPongInterval(Windows::Foundation::TimeSpan *);
	virtual long get_ClientCertificate(Windows::Security::Cryptography::Certificates::ICertificate * *);
	virtual long get_DesiredUnsolicitedPongInterval(Windows::Foundation::TimeSpan *);
	virtual long get_MaxMessageSize(unsigned int *);
	virtual long get_MessageType(Windows::Networking::Sockets::SocketMessageType *);
	virtual long get_ReceiveMode(Windows::Networking::Sockets::MessageWebSocketReceiveMode *);
	virtual long put_ClientCertificate(Windows::Security::Cryptography::Certificates::ICertificate *);
	virtual long put_DesiredUnsolicitedPongInterval(Windows::Foundation::TimeSpan);
	virtual long put_MaxMessageSize(unsigned int);
	virtual long put_MessageType(Windows::Networking::Sockets::SocketMessageType);
	virtual long put_ReceiveMode(Windows::Networking::Sockets::MessageWebSocketReceiveMode);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct MessageWebSocketFactory
{
	virtual long ActivateInstance(IInspectable * *);
};

struct MessageWebSocketInformationImpl
{
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct MessageWebSocketMessageReceivedEventArgsServer
{
	MessageWebSocketMessageReceivedEventArgsServer();
	virtual long GetDataReader(Windows::Storage::Streams::IDataReader * *);
	virtual long GetDataStream(Windows::Storage::Streams::IInputStream * *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_IsMessageComplete(unsigned char *);
	virtual long get_MessageType(Windows::Networking::Sockets::SocketMessageType *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class MessageWebSocketReadOperationServer
{
	long FireEvent(MessageWebSocketServer *,long,_HTTP_WEB_SOCKET_BUFFER_TYPE,unsigned char);
	long ProcessReceive(MessageWebSocketServer *,long,unsigned int,_HTTP_WEB_SOCKET_BUFFER_TYPE,void *);
	long ProcessReceivedBytes(MessageWebSocketServer *,long,unsigned int,_HTTP_WEB_SOCKET_BUFFER_TYPE);
	long StartWebSocketReceive(MessageWebSocketServer *);
public:
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long IoCompleted(long,unsigned int,IInspectable *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~MessageWebSocketReadOperationServer();
};

class MessageWebSocketServer
{
	long Initialize();
protected:
	virtual long InternalSetIdleOperationState(Windows::Networking::Sockets::Internal::OperationType);
	virtual long OnConfigureWebSocketHandle(WebSocketHandle *);
	virtual unsigned int GetTraceType();
	virtual void GetAuthenticationCredentials(Windows::Security::Credentials::IPasswordCredential * *,Windows::Security::Credentials::IPasswordCredential * *,Windows::Security::Cryptography::Certificates::ICertificate * *);
	virtual void OnConnected();
public:
	MessageWebSocketServer();
	long SendFrameAsyncInternal(Windows::Storage::Streams::IBuffer *,unsigned char,Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int> * *);
	long UpdatePartialMessageModeAndGetMessageType(unsigned char,Windows::Networking::Sockets::SocketMessageType *);
	static TrustLevel InternalGetTrustLevel();
	static unsigned short const * InternalGetRuntimeClassName();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SendFinalFrameAsync(Windows::Storage::Streams::IBuffer *,Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int> * *);
	virtual long SendNonfinalFrameAsync(Windows::Storage::Streams::IBuffer *,Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int> * *);
	virtual long add_MessageReceived(Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::MessageWebSocket *,Windows::Networking::Sockets::MessageWebSocketMessageReceivedEventArgs *> *,EventRegistrationToken *);
	virtual long add_ServerCustomValidationRequested(Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::MessageWebSocket *,Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs *> *,EventRegistrationToken *);
	virtual long get_Control(Windows::Networking::Sockets::IMessageWebSocketControl * *);
	virtual long get_Information(Windows::Networking::Sockets::IWebSocketInformation * *);
	virtual long remove_MessageReceived(EventRegistrationToken);
	virtual long remove_ServerCustomValidationRequested(EventRegistrationToken);
	virtual unsigned __int64 GetServerCustomValidationRequestedEventSize();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void InvokeServerCustomValidationRequestedEvent(WebSocketServerCustomValidationRequestedEventArgsImpl *);
	virtual ~MessageWebSocketServer();
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

		struct ActivationFactory<Implements<FtmBase,Details::Nil>,Details::Nil,Details::Nil,0>
		{
			virtual long ActivateInstance(IInspectable * *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct ActivationFactory<Implements<FtmBase,Windows::Networking::Sockets::IDatagramSocketStatics>,Details::Nil,Details::Nil,0>
		{
			virtual long ActivateInstance(IInspectable * *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct ActivationFactory<Implements<FtmBase,Windows::Networking::Sockets::ISocketActivityContextFactory>,Details::Nil,Details::Nil,0>
		{
			virtual long ActivateInstance(IInspectable * *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct ActivationFactory<Implements<FtmBase,Windows::Networking::Sockets::ISocketActivityInformationStatics>,Details::Nil,Details::Nil,0>
		{
			virtual long ActivateInstance(IInspectable * *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct ActivationFactory<Implements<FtmBase,Windows::Networking::Sockets::ISocketErrorStatics>,Details::Nil,Details::Nil,0>
		{
			virtual long ActivateInstance(IInspectable * *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct ActivationFactory<Implements<FtmBase,Windows::Networking::Sockets::IStreamSocketStatics>,Details::Nil,Details::Nil,0>
		{
			virtual long ActivateInstance(IInspectable * *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct ActivationFactory<Implements<FtmBase,Windows::Networking::Sockets::IWebSocketErrorStatics>,Details::Nil,Details::Nil,0>
		{
			virtual long ActivateInstance(IInspectable * *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct AgileActivationFactory<Details::Nil,Details::Nil,Details::Nil,0>
		{
			AgileActivationFactory<Details::Nil,Details::Nil,Details::Nil,0>();
		};

		struct ClassFactory<IBackgroundEventDetailsFactory,Details::Nil,Details::Nil,0>
		{
			virtual long LockServer(int);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct ComPtr<WebSocketBase>
		{
			long AsWeak(WeakRef *);
		};

		struct ComPtr<WebSocketConnectOperationServer>
		{
			long AsWeak(WeakRef *);
		};

		struct ComPtr<Windows::Networking::Sockets::IDatagramSocket>
		{
			long AsWeak(WeakRef *);
		};

		struct ComPtr<Windows::Networking::Sockets::IStreamSocket>
		{
			long AsWeak(WeakRef *);
		};

		struct ComPtr<Windows::Networking::Sockets::IStreamSocketListener>
		{
			long AsWeak(WeakRef *);
		};

		struct ComPtr<Windows::Networking::Sockets::IWebSocket>
		{
			long AsWeak(WeakRef *);
		};

		struct ComPtr<Windows::Networking::Sockets::Internal::IIoOperation>
		{
			long AsWeak(WeakRef *);
		};

		struct ComPtr<Windows::Networking::Sockets::Internal::ISocketContext>
		{
			long AsWeak(WeakRef *);
		};

		struct DeferrableEventArgs<Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs,WebSocketServerCustomValidationRequestedEventArgsImpl>
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

			class ImplementsHelper<RuntimeClassFlags<13>,0,IActivationFactory,Implements<FtmBase,Nil>,Nil,Nil,Nil>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<13>,0,IActivationFactory,Implements<FtmBase,Windows::Networking::Sockets::IDatagramSocketStatics>,Nil,Nil,Nil>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<13>,0,IActivationFactory,Implements<FtmBase,Windows::Networking::Sockets::ISocketActivityContextFactory>,Nil,Nil,Nil>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<13>,0,IActivationFactory,Implements<FtmBase,Windows::Networking::Sockets::ISocketActivityInformationStatics>,Nil,Nil,Nil>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<13>,0,IActivationFactory,Implements<FtmBase,Windows::Networking::Sockets::ISocketErrorStatics>,Nil,Nil,Nil>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<13>,0,IActivationFactory,Implements<FtmBase,Windows::Networking::Sockets::IStreamSocketStatics>,Nil,Nil,Nil>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<13>,0,IActivationFactory,Implements<FtmBase,Windows::Networking::Sockets::IWebSocketErrorStatics>,Nil,Nil,Nil>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<19>,0,Windows::Storage::Streams::IBuffer,IWeakReferenceSource,CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,CloakedIid<IMarshal>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,ImplementsMarker<StreamSocketListenerBinderBase>,IWeakReferenceSource>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,Windows::ApplicationModel::Background::IBackgroundTrigger,IWeakReferenceSource,Windows::ApplicationModel::Background::ISocketActivityTrigger,CloakedIid<Windows::ApplicationModel::Background::IBrokerTriggerBuilder>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,Windows::Networking::Sockets::IDatagramSocket,IWeakReferenceSource,Windows::Networking::Sockets::IDatagramSocket2,Windows::Networking::Sockets::IDatagramSocket3,ClosableHelper,DiscoverableSocketBase,FtmBase,Implements<RuntimeClassFlags<3>,CloakedIid<INetworkTransportSettings>,CloakedIid<INotificationTransportSync>,CloakedIid<Windows::Networking::Sockets::Internal::IWinsockContext>,CloakedIid<Windows::Networking::Sockets::Internal::ISocketContext>,CloakedIid<Windows::Networking::Sockets::Internal::IRtcStreamContext>,CloakedIid<Windows::Networking::Sockets::Internal::IDatagramSocketInternal>,CloakedIid<Windows::Networking::Sockets::Internal::ICancellableSocket>,CloakedIid<Windows::Networking::Sockets::Internal::ISocketTelemetryInfo> > >
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,Windows::Networking::Sockets::IDatagramSocketControl,IWeakReferenceSource,Windows::Networking::Sockets::IDatagramSocketControl2,Windows::Networking::Sockets::IDatagramSocketControl3,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,Windows::Networking::Sockets::IStreamSocketListenerControl,IWeakReferenceSource,Windows::Networking::Sockets::IStreamSocketListenerControl2,CloakedIid<Windows::Networking::Sockets::Internal::IStreamSocketListenerControlInternal>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,CloakedIid<Windows::Networking::Sockets::Internal::IWinsockContext>,CloakedIid<Windows::Networking::Sockets::Internal::ISocketContext>,CloakedIid<Windows::Networking::Sockets::Internal::ICancellableSocket>,DiscoverableSocketBase,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,IWeakReferenceSource,ClosableHelper,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,IWeakReferenceSource,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<HSTRING__ *>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,Windows::Networking::Sockets::SocketActivityInformation *> *>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<Windows::Networking::EndpointPair *>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<Windows::Security::Cryptography::Certificates::Certificate *>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Networking::Sockets::IStreamSocketControl2,Windows::Networking::Sockets::IStreamSocketControl3,Windows::Networking::Sockets::IStreamSocketControl4,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,ImplementsMarker<FtmBase>,Implements<RuntimeClassFlags<3>,CloakedIid<INetworkTransportSettings>,CloakedIid<INotificationTransportSync>,CloakedIid<Windows::Networking::Sockets::Internal::IWinsockContext>,CloakedIid<Windows::Networking::Sockets::Internal::ISocketContext>,CloakedIid<Windows::Networking::Sockets::Internal::IRtcStreamContext>,CloakedIid<Windows::Networking::Sockets::Internal::IDatagramSocketInternal>,CloakedIid<Windows::Networking::Sockets::Internal::ICancellableSocket>,CloakedIid<Windows::Networking::Sockets::Internal::ISocketTelemetryInfo> > >
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,ImplementsMarker<WebSocketBase> >
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,ImplementsMarker<WebSocketControlBase>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,0,Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>,IWeakReferenceSource,CloakedIid<Windows::Networking::Sockets::Internal::IIoOperation>,CloakedIid<Windows::Networking::Sockets::Internal::IIoOperation2>,CloakedIid<ISerializedIoOperation>,SocketOperationWithProgressBase<Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<unsigned int,unsigned int>,Windows::Foundation::IAsyncOperationProgressHandler<unsigned int,unsigned int> > >
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,0,Windows::Storage::Streams::IOutputStream,IWeakReferenceSource,ClosableHelper,CloakedIid<IBatchedSender>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,CloakedIid<INetworkTransportSettings>,CloakedIid<INotificationTransportSync>,CloakedIid<Windows::Networking::Sockets::Internal::IRtcSocketContext>,CloakedIid<Windows::Networking::Sockets::Internal::IStreamSocketInterfaceBind>,CloakedIid<Windows::Networking::Sockets::Internal::ICancellableSocket> >
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,CloakedIid<Windows::Networking::Sockets::Internal::IRtcSocketContext>,CloakedIid<Windows::Networking::Sockets::Internal::IKeepAliveManager>,CloakedIid<INetworkTransportSettings>,CloakedIid<INotificationTransportSync>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,CloakedIid<Windows::Networking::Sockets::Internal::ISocketContext>,CloakedIid<Windows::Networking::Sockets::Internal::IRtcStreamContext>,CloakedIid<Windows::Networking::Sockets::Internal::IDatagramSocketInternal>,CloakedIid<Windows::Networking::Sockets::Internal::ICancellableSocket>,CloakedIid<Windows::Networking::Sockets::Internal::ISocketTelemetryInfo> >
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,ImplementsMarker<FtmBase>,Implements<RuntimeClassFlags<3>,CloakedIid<Windows::Networking::Sockets::Internal::IWinsockContext>,CloakedIid<Windows::Networking::Sockets::Internal::ISocketContext>,CloakedIid<Windows::Networking::Sockets::Internal::ISocketSecurityContext>,CloakedIid<Windows::Networking::Sockets::Internal::IRtcStreamContext>,CloakedIid<INetworkTransportSettings>,CloakedIid<INotificationTransportSync>,CloakedIid<Windows::Networking::Sockets::Internal::IRtcSocketContext>,CloakedIid<Windows::Networking::Sockets::Internal::IStreamSocketInterfaceBind>,CloakedIid<Windows::Networking::Sockets::Internal::ICancellableSocket> > >
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

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,CloakedIid<Windows::Networking::Sockets::Internal::IWebSocketOperationContext> >
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,DeferrableEventArgs<Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs,WebSocketServerCustomValidationRequestedEventArgsImpl>,Windows::Foundation::IStringable,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,DeferrableEventArgs<Windows::Networking::Sockets::IWebSocketServerCustomValidationRequestedEventArgs,WebSocketServerCustomValidationRequestedEventArgsImpl>,Windows::Foundation::IStringable,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,StreamSocketConnectorBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,StreamSocketConnectorBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,StreamSocketListenerBinderBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,StreamSocketListenerBinderBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,StreamSocketTcpConnectorBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,StreamSocketTcpConnectorBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,WebSocketInformationBase,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,WebSocketInformationBase,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Background::IBackgroundTask,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Background::IBackgroundTask,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Background::IBackgroundTrigger,Windows::ApplicationModel::Background::ISocketActivityTrigger,CloakedIid<Windows::ApplicationModel::Background::IBrokerTriggerBuilder>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::Background::IBackgroundTrigger,Windows::ApplicationModel::Background::ISocketActivityTrigger,CloakedIid<Windows::ApplicationModel::Background::IBrokerTriggerBuilder>,FtmBase>();
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

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,Windows::Networking::Sockets::SocketActivityInformation *> *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,Windows::Networking::Sockets::SocketActivityInformation *> *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Networking::EndpointPair *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Networking::EndpointPair *>,FtmBase>();
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

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,Windows::Networking::Sockets::SocketActivityInformation *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,Windows::Networking::Sockets::SocketActivityInformation *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMap<HSTRING__ *,Windows::Networking::Sockets::SocketActivityInformation *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,Windows::Networking::Sockets::SocketActivityInformation *> *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMap<HSTRING__ *,Windows::Networking::Sockets::SocketActivityInformation *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,Windows::Networking::Sockets::SocketActivityInformation *> *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMapView<HSTRING__ *,Windows::Networking::Sockets::SocketActivityInformation *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,Windows::Networking::Sockets::SocketActivityInformation *> *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMapView<HSTRING__ *,Windows::Networking::Sockets::SocketActivityInformation *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,Windows::Networking::Sockets::SocketActivityInformation *> *>,FtmBase>();
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

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Networking::EndpointPair *>,Windows::Foundation::Collections::IIterable<Windows::Networking::EndpointPair *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Networking::EndpointPair *>,Windows::Foundation::Collections::IIterable<Windows::Networking::EndpointPair *>,FtmBase>();
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

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair *>,Windows::Foundation::Collections::IIterable<Windows::Networking::EndpointPair *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair *>,Windows::Foundation::Collections::IIterable<Windows::Networking::EndpointPair *>,FtmBase>();
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

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer *,unsigned int>,CloakedIid<Windows::Networking::Sockets::Internal::IIoOperation>,CloakedIid<Windows::Networking::Sockets::Internal::IIoOperation2>,ReadOperationBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer *,unsigned int>,CloakedIid<Windows::Networking::Sockets::Internal::IIoOperation>,CloakedIid<Windows::Networking::Sockets::Internal::IIoOperation2>,ReadOperationBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer *,unsigned int>,CloakedIid<Windows::Networking::Sockets::Internal::IIoOperation>,ReadOperationBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer *,unsigned int>,CloakedIid<Windows::Networking::Sockets::Internal::IIoOperation>,ReadOperationBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>,CloakedIid<Windows::Networking::Sockets::Internal::IIoOperation>,SocketOperationWithProgressBase<Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<unsigned int,unsigned int>,Windows::Foundation::IAsyncOperationProgressHandler<unsigned int,unsigned int> > >
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>,CloakedIid<Windows::Networking::Sockets::Internal::IIoOperation>,SocketOperationWithProgressBase<Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<unsigned int,unsigned int>,Windows::Foundation::IAsyncOperationProgressHandler<unsigned int,unsigned int> > >();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::IDatagramSocket,Windows::Networking::Sockets::IDatagramSocket2,Windows::Networking::Sockets::IDatagramSocket3,ClosableHelper,DiscoverableSocketBase,FtmBase,Implements<RuntimeClassFlags<3>,CloakedIid<INetworkTransportSettings>,CloakedIid<INotificationTransportSync>,CloakedIid<Windows::Networking::Sockets::Internal::IWinsockContext>,CloakedIid<Windows::Networking::Sockets::Internal::ISocketContext>,CloakedIid<Windows::Networking::Sockets::Internal::IRtcStreamContext>,CloakedIid<Windows::Networking::Sockets::Internal::IDatagramSocketInternal>,CloakedIid<Windows::Networking::Sockets::Internal::ICancellableSocket>,CloakedIid<Windows::Networking::Sockets::Internal::ISocketTelemetryInfo> > >
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::IDatagramSocket,Windows::Networking::Sockets::IDatagramSocket2,Windows::Networking::Sockets::IDatagramSocket3,ClosableHelper,DiscoverableSocketBase,FtmBase,Implements<RuntimeClassFlags<3>,CloakedIid<INetworkTransportSettings>,CloakedIid<INotificationTransportSync>,CloakedIid<Windows::Networking::Sockets::Internal::IWinsockContext>,CloakedIid<Windows::Networking::Sockets::Internal::ISocketContext>,CloakedIid<Windows::Networking::Sockets::Internal::IRtcStreamContext>,CloakedIid<Windows::Networking::Sockets::Internal::IDatagramSocketInternal>,CloakedIid<Windows::Networking::Sockets::Internal::ICancellableSocket>,CloakedIid<Windows::Networking::Sockets::Internal::ISocketTelemetryInfo> > >();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::IDatagramSocketControl,Windows::Networking::Sockets::IDatagramSocketControl2,Windows::Networking::Sockets::IDatagramSocketControl3,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::IDatagramSocketControl,Windows::Networking::Sockets::IDatagramSocketControl2,Windows::Networking::Sockets::IDatagramSocketControl3,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::IDatagramSocketInformation,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::IDatagramSocketInformation,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::IDatagramSocketMessageReceivedEventArgs,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::IDatagramSocketMessageReceivedEventArgs,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::IMessageWebSocket,Windows::Networking::Sockets::IMessageWebSocket2,Windows::Networking::Sockets::IMessageWebSocket3,WebSocketBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::IMessageWebSocket,Windows::Networking::Sockets::IMessageWebSocket2,Windows::Networking::Sockets::IMessageWebSocket3,WebSocketBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::IMessageWebSocketControl,Windows::Networking::Sockets::IMessageWebSocketControl2,WebSocketControlBase,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::IMessageWebSocketControl,Windows::Networking::Sockets::IMessageWebSocketControl2,WebSocketControlBase,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs,Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs2,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs,Windows::Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs2,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::ISocketActivityContext,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::ISocketActivityContext,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::ISocketActivityInformation,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::ISocketActivityInformation,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::ISocketActivityTriggerDetails,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::ISocketActivityTriggerDetails,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::IStreamSocketControl,Windows::Networking::Sockets::IStreamSocketControl2,Windows::Networking::Sockets::IStreamSocketControl3,Windows::Networking::Sockets::IStreamSocketControl4,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::IStreamSocketControl,Windows::Networking::Sockets::IStreamSocketControl2,Windows::Networking::Sockets::IStreamSocketControl3,Windows::Networking::Sockets::IStreamSocketControl4,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::IStreamSocketInformation,Windows::Networking::Sockets::IStreamSocketInformation2,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::IStreamSocketInformation,Windows::Networking::Sockets::IStreamSocketInformation2,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::IStreamSocketListener,Windows::Networking::Sockets::IStreamSocketListener2,Windows::Networking::Sockets::IStreamSocketListener3,Windows::Foundation::IClosable,CloakedIid<Windows::Networking::Sockets::Internal::IWinsockContext>,CloakedIid<Windows::Networking::Sockets::Internal::ISocketContext>,CloakedIid<Windows::Networking::Sockets::Internal::ICancellableSocket>,DiscoverableSocketBase,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::IStreamSocketListener,Windows::Networking::Sockets::IStreamSocketListener2,Windows::Networking::Sockets::IStreamSocketListener3,Windows::Foundation::IClosable,CloakedIid<Windows::Networking::Sockets::Internal::IWinsockContext>,CloakedIid<Windows::Networking::Sockets::Internal::ISocketContext>,CloakedIid<Windows::Networking::Sockets::Internal::ICancellableSocket>,DiscoverableSocketBase,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::IStreamSocketListenerConnectionReceivedEventArgs,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::IStreamSocketListenerConnectionReceivedEventArgs,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::IStreamSocketListenerControl,Windows::Networking::Sockets::IStreamSocketListenerControl2,CloakedIid<Windows::Networking::Sockets::Internal::IStreamSocketListenerControlInternal>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::IStreamSocketListenerControl,Windows::Networking::Sockets::IStreamSocketListenerControl2,CloakedIid<Windows::Networking::Sockets::Internal::IStreamSocketListenerControlInternal>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::IStreamSocketListenerInformation,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::IStreamSocketListenerInformation,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::IStreamWebSocket,Windows::Networking::Sockets::IStreamWebSocket2,WebSocketBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::IStreamWebSocket,Windows::Networking::Sockets::IStreamWebSocket2,WebSocketBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::IStreamWebSocketControl,Windows::Networking::Sockets::IStreamWebSocketControl2,WebSocketControlBase,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::IStreamWebSocketControl,Windows::Networking::Sockets::IStreamWebSocketControl2,WebSocketControlBase,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::IWebSocketClosedEventArgs,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::IWebSocketClosedEventArgs,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::Internal::IIoOperation,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::Internal::IIoOperation,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::Internal::ISocketReadBuffer,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Networking::Sockets::Internal::ISocketReadBuffer,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Storage::Streams::IInputStream,ClosableHelper,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Storage::Streams::IInputStream,ClosableHelper,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Storage::Streams::IOutputStream,ClosableHelper,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Storage::Streams::IOutputStream,ClosableHelper,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IBatchedWriter,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IMFAsyncCallback>
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

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::MessageWebSocket *,Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs *>,FtmBase> >
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::StreamWebSocket *,Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs *>,FtmBase> >
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

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::DatagramSocket *,Windows::Networking::Sockets::DatagramSocketMessageReceivedEventArgs *>,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::IWebSocket *,Windows::Networking::Sockets::WebSocketClosedEventArgs *>,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::MessageWebSocket *,Windows::Networking::Sockets::MessageWebSocketMessageReceivedEventArgs *>,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::StreamSocketListener *,Windows::Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs *>,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IAsyncActionCompletedHandler,StreamSocketConnectorBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IAsyncActionCompletedHandler,StreamSocketConnectorBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Networking::Connectivity::ProxyConfiguration *>,StreamSocketTcpConnectorBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Networking::Connectivity::ProxyConfiguration *>,StreamSocketTcpConnectorBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>,CloakedIid<Windows::Networking::Sockets::Internal::IIoOperation>,CloakedIid<Windows::Networking::Sockets::Internal::IIoOperation2>,CloakedIid<ISerializedIoOperation>,SocketOperationWithProgressBase<Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<unsigned int,unsigned int>,Windows::Foundation::IAsyncOperationProgressHandler<unsigned int,unsigned int> > >
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>,CloakedIid<Windows::Networking::Sockets::Internal::IIoOperation>,CloakedIid<Windows::Networking::Sockets::Internal::IIoOperation2>,CloakedIid<ISerializedIoOperation>,SocketOperationWithProgressBase<Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<unsigned int,unsigned int>,Windows::Foundation::IAsyncOperationProgressHandler<unsigned int,unsigned int> > >();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Networking::Sockets::IStreamSocket,Windows::Networking::Sockets::IStreamSocket2,Windows::Networking::Sockets::IStreamSocket3,Windows::Foundation::IClosable,FtmBase,Implements<RuntimeClassFlags<3>,CloakedIid<Windows::Networking::Sockets::Internal::IWinsockContext>,CloakedIid<Windows::Networking::Sockets::Internal::ISocketContext>,CloakedIid<Windows::Networking::Sockets::Internal::ISocketSecurityContext>,CloakedIid<Windows::Networking::Sockets::Internal::IRtcStreamContext>,CloakedIid<INetworkTransportSettings>,CloakedIid<INotificationTransportSync>,CloakedIid<Windows::Networking::Sockets::Internal::IRtcSocketContext>,CloakedIid<Windows::Networking::Sockets::Internal::IStreamSocketInterfaceBind>,CloakedIid<Windows::Networking::Sockets::Internal::ICancellableSocket> > >
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Networking::Sockets::IStreamSocket,Windows::Networking::Sockets::IStreamSocket2,Windows::Networking::Sockets::IStreamSocket3,Windows::Foundation::IClosable,FtmBase,Implements<RuntimeClassFlags<3>,CloakedIid<Windows::Networking::Sockets::Internal::IWinsockContext>,CloakedIid<Windows::Networking::Sockets::Internal::ISocketContext>,CloakedIid<Windows::Networking::Sockets::Internal::ISocketSecurityContext>,CloakedIid<Windows::Networking::Sockets::Internal::IRtcStreamContext>,CloakedIid<INetworkTransportSettings>,CloakedIid<INotificationTransportSync>,CloakedIid<Windows::Networking::Sockets::Internal::IRtcSocketContext>,CloakedIid<Windows::Networking::Sockets::Internal::IStreamSocketInterfaceBind>,CloakedIid<Windows::Networking::Sockets::Internal::ICancellableSocket> > >();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Storage::Streams::IOutputStream,ClosableHelper,CloakedIid<IBatchedSender>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Storage::Streams::IOutputStream,ClosableHelper,CloakedIid<IBatchedSender>,FtmBase>();
			};

			class StaticStorage<DefaultModule<1>,0,int>
			{
				static StaticStorage<DefaultModule<1>,0,int> instance_;
			};

			struct WeakReferenceImpl
			{
				virtual long Resolve(_GUID const &,IInspectable * *);
			};

			Details::WeakReferenceImpl * CreateWeakReference(IUnknown *);
			bool TerminateMap(Details::ModuleBase *,unsigned short const *,bool);
			long CreateActivationFactory<DatagramSocketStatics>(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<MessageWebSocketFactory>(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<SimpleSealedActivationFactory<SocketActivityTriggerImpl,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<SimpleSealedActivationFactory<WebSocketKeepAliveImpl,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<SocketActivityContextFactory>(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<SocketActivityInformationStatics>(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<SocketErrorFactory>(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<StreamSocketListenerFactory>(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<StreamSocketStatics>(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<StreamWebSocketFactory>(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<WebSocketErrorFactory>(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateAgileHelper<Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::MessageWebSocket *,Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs *> >(Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::MessageWebSocket *,Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs *> *,Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::MessageWebSocket *,Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs *> * *);
			long CreateAgileHelper<Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::StreamWebSocket *,Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs *> >(Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::StreamWebSocket *,Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs *> *,Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::StreamWebSocket *,Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs *> * *);
			long CreateClassFactory<SocketActivityTriggerDetailsFactory>(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long GetCacheEntry(Details::ModuleBase *,unsigned int *,_GUID const &,Details::CreatorMap const *,IUnknown * *);
			long MakeAndInitialize<EventTargetArray,EventTargetArray,unsigned __int64 &>(Details::EventTargetArray * *,unsigned __int64 &);
			long MakeAndInitialize<HttpRequestStream::WriteOperation,Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>,void * &,Windows::Storage::Streams::IBuffer * &>(Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int> * *,void * &,Windows::Storage::Streams::IBuffer * &);
			long MakeAndInitialize<SocketActivityContextImpl,SocketActivityContextImpl,unsigned char * &,unsigned long &>(Details::ComPtrRef<ComPtr<SocketActivityContextImpl> >,unsigned char * &,unsigned long &);
			void RaiseException(long,unsigned long);
		};

		struct ErrorPropagationPolicyTraits<-1>
		{
			static long FireCompletionErrorPropagationPolicyFilter(long,IUnknown *,void *);
			static long FireProgressErrorPropagationPolicyFilter(long,IUnknown *,void *);
		};

		struct EventSource<Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::DatagramSocket *,Windows::Networking::Sockets::DatagramSocketMessageReceivedEventArgs *>,InvokeModeOptions<-2> >
		{
			long Remove(EventRegistrationToken);
		};

		class EventSource<Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::IWebSocket *,Windows::Networking::Sockets::WebSocketClosedEventArgs *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::IWebSocket *,Windows::Networking::Sockets::WebSocketClosedEventArgs *> *,void *,EventRegistrationToken *);
		public:
			long Remove(EventRegistrationToken);
		};

		class EventSource<Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::MessageWebSocket *,Windows::Networking::Sockets::MessageWebSocketMessageReceivedEventArgs *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::MessageWebSocket *,Windows::Networking::Sockets::MessageWebSocketMessageReceivedEventArgs *> *,void *,EventRegistrationToken *);
		public:
			long Remove(EventRegistrationToken);
		};

		class EventSource<Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::MessageWebSocket *,Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::MessageWebSocket *,Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs *> *,void *,EventRegistrationToken *);
		public:
			long Remove(EventRegistrationToken);
		};

		class EventSource<Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::StreamSocketListener *,Windows::Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::StreamSocketListener *,Windows::Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs *> *,void *,EventRegistrationToken *);
		public:
			long InvokeAll<Windows::Networking::Sockets::IStreamSocketListener *,StreamSocketListenerConnectionReceivedEventArgsImpl *>(Windows::Networking::Sockets::IStreamSocketListener *,StreamSocketListenerConnectionReceivedEventArgsImpl *);
			long Remove(EventRegistrationToken);
		};

		class EventSource<Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::StreamWebSocket *,Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::StreamWebSocket *,Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs *> *,void *,EventRegistrationToken *);
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

		struct InvokeTraits<-2>
		{
			static long InvokeDelegates<<lambda_14fb2402c8414e5c192e077d15086e26>,Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::MessageWebSocket *,Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs *> >(<lambda_14fb2402c8414e5c192e077d15086e26>,Details::EventTargetArray *,EventSource<Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::MessageWebSocket *,Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs *>,InvokeModeOptions<-2> > *);
			static long InvokeDelegates<<lambda_1b036adbe2aa64e81f483d9c58ec0afd>,Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::DatagramSocket *,Windows::Networking::Sockets::DatagramSocketMessageReceivedEventArgs *> >(<lambda_1b036adbe2aa64e81f483d9c58ec0afd>,Details::EventTargetArray *,EventSource<Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::DatagramSocket *,Windows::Networking::Sockets::DatagramSocketMessageReceivedEventArgs *>,InvokeModeOptions<-2> > *);
			static long InvokeDelegates<<lambda_32db1248e6d69d6619cef5440f5d97d7>,Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::MessageWebSocket *,Windows::Networking::Sockets::MessageWebSocketMessageReceivedEventArgs *> >(<lambda_32db1248e6d69d6619cef5440f5d97d7>,Details::EventTargetArray *,EventSource<Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::MessageWebSocket *,Windows::Networking::Sockets::MessageWebSocketMessageReceivedEventArgs *>,InvokeModeOptions<-2> > *);
			static long InvokeDelegates<<lambda_4cee48c000781aa63e4fba7fefc8c29f>,Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::StreamSocketListener *,Windows::Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs *> >(<lambda_4cee48c000781aa63e4fba7fefc8c29f>,Details::EventTargetArray *,EventSource<Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::StreamSocketListener *,Windows::Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs *>,InvokeModeOptions<-2> > *);
			static long InvokeDelegates<<lambda_818e2accc6adc0916569122d3693477c>,Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::IWebSocket *,Windows::Networking::Sockets::WebSocketClosedEventArgs *> >(<lambda_818e2accc6adc0916569122d3693477c>,Details::EventTargetArray *,EventSource<Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::IWebSocket *,Windows::Networking::Sockets::WebSocketClosedEventArgs *>,InvokeModeOptions<-2> > *);
			static long InvokeDelegates<<lambda_dba84acd137fad51d21f918adb529ba0>,Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::StreamWebSocket *,Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs *> >(<lambda_dba84acd137fad51d21f918adb529ba0>,Details::EventTargetArray *,EventSource<Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::StreamWebSocket *,Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs *>,InvokeModeOptions<-2> > *);
		};

		class Module<1,Details::DefaultModule<1> >
		{
			static bool isInitialized;
		protected:
			static _RTL_RUN_ONCE initOnceInProc_;
		public:
			virtual long RegisterCOMObject(unsigned short const *,_GUID *,IClassFactory * *,unsigned long *,unsigned int);
			virtual long RegisterWinRTObject(unsigned short const *,unsigned short const * *,<unnamed-type-RO_REGISTRATION_COOKIE> * *,unsigned int);
			virtual long UnregisterCOMObject(unsigned short const *,unsigned long *,unsigned int);
			virtual long UnregisterWinRTObject(unsigned short const *,<unnamed-type-RO_REGISTRATION_COOKIE> *);
			virtual unsigned long DecrementObjectCount();
			virtual unsigned long IncrementObjectCount();
		};

		struct RuntimeClass<StreamSocketListenerBinderBase>
		{
			RuntimeClass<StreamSocketListenerBinderBase>();
		};

		struct RuntimeClass<WebSocketInformationBase,FtmBase>
		{
			RuntimeClass<WebSocketInformationBase,FtmBase>();
		};

		struct RuntimeClass<Windows::Foundation::Collections::IMapView<HSTRING__ *,Windows::Networking::Sockets::SocketActivityInformation *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,Windows::Networking::Sockets::SocketActivityInformation *> *>,FtmBase>
		{
			RuntimeClass<Windows::Foundation::Collections::IMapView<HSTRING__ *,Windows::Networking::Sockets::SocketActivityInformation *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,Windows::Networking::Sockets::SocketActivityInformation *> *>,FtmBase>();
		};

		struct RuntimeClass<Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer *,unsigned int>,CloakedIid<Windows::Networking::Sockets::Internal::IIoOperation>,ReadOperationBase>
		{
			RuntimeClass<Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer *,unsigned int>,CloakedIid<Windows::Networking::Sockets::Internal::IIoOperation>,ReadOperationBase>();
		};

		struct RuntimeClass<Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>,CloakedIid<Windows::Networking::Sockets::Internal::IIoOperation>,SocketOperationWithProgressBase<Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<unsigned int,unsigned int>,Windows::Foundation::IAsyncOperationProgressHandler<unsigned int,unsigned int> > >
		{
			RuntimeClass<Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>,CloakedIid<Windows::Networking::Sockets::Internal::IIoOperation>,SocketOperationWithProgressBase<Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<unsigned int,unsigned int>,Windows::Foundation::IAsyncOperationProgressHandler<unsigned int,unsigned int> > >();
		};

		struct RuntimeClass<Windows::Storage::Streams::IInputStream,ClosableHelper,FtmBase>
		{
			RuntimeClass<Windows::Storage::Streams::IInputStream,ClosableHelper,FtmBase>();
		};

		struct RuntimeClass<Windows::Storage::Streams::IOutputStream,ClosableHelper,FtmBase>
		{
			RuntimeClass<Windows::Storage::Streams::IOutputStream,ClosableHelper,FtmBase>();
		};

		struct SimpleActivationFactory<SocketActivityTriggerImpl,0>
		{
			virtual long ActivateInstance(IInspectable * *);
		};

		struct SimpleActivationFactory<WebSocketKeepAliveImpl,0>
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

class NameValueCollection<AutoHINTERNET>
{
	bool FindEntry(HSTRING__ *,NameValueCollection<AutoHINTERNET>::Entry * *);
public:
	long Add(Windows::Internal::String &,AutoHINTERNET &);
	~NameValueCollection<AutoHINTERNET>();
};

class NameValueCollection<AutoStringPtr>
{
	bool FindEntry(HSTRING__ *,NameValueCollection<AutoStringPtr>::Entry * *);
public:
	long Add(Windows::Internal::String &,AutoStringPtr &);
};

struct NcbConnector
{
	long NcbConnect();
	long SBCompleteRetrieveSocket(_GUID *,unsigned short const *);
	long SBCreatePushEnabledContext(_GUID *);
	long SBEnumSockets(_SOCKET_BROKER_ENUM_SOCKET_INFORMATION * *);
	long SBRetrieveContext(_GUID *,unsigned short const *,_SOCKET_BROKER_APP_CONTEXT * *);
	long SBRetrieveSocket(_GUID *,unsigned short const *,unsigned char,_SOCKET_BROKER_RETRIEVE_SOCKET * *);
	long SBTransferOwnership(_GUID *,unsigned short const *,int,int,int,unsigned long,unsigned char,unsigned __int64,unsigned long,_SOCKET_BROKER_APP_CONTEXT *,_SOCKET_BROKER_SSL_CONTEXT *,_DNS_REGISTRATION_DATA *);
};

struct PropertyValueHelper
{
	static long CreateUInt64Property(unsigned __int64,Windows::Foundation::IReference<unsigned __int64> * *);
};

struct ProtocolHelper
{
	static _WA_CONNECTION_DISPATCH const ProtocolDispatch;
	static unsigned __int64 ProtocolQueryConnectionSize();
	static unsigned long ProtocolAbortRequest(_WA_CONNECTION *,unsigned long);
	static unsigned long ProtocolCleanupConnection(_WA_CONNECTION *,unsigned long);
	static unsigned long ProtocolInitializeConnection(_WA_CONNECTION *,unsigned long,_WA_CONNECTION_DISPATCH const *,_WA_CONNECTION_DISPATCH const *);
	static void ProtocolInformationConnection(_WA_CONNECTION *,_WA_CONNECTION_INFORMATION_TYPE,void *,unsigned __int64);
	static void ProtocolTerminateConnection(_WA_CONNECTION *);
};

class ReadOperationBase
{
	long Read();
	void CompleteReadOperation();
protected:
	long GetResultsInternal(Windows::Storage::Streams::IBuffer * *);
	virtual Windows::Networking::Sockets::Internal::OperationType GetOperationType();
	virtual long OnStart();
	virtual long PutOnComplete(Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Storage::Streams::IBuffer *,unsigned int> *);
	virtual void OnApplicationCallbackDone();
	virtual void OnCancel();
	virtual ~ReadOperationBase();
	void IoCompleted(long,unsigned int,unsigned char);
public:
	long Initialize(Windows::Storage::Streams::IBuffer *,unsigned int,Windows::Storage::Streams::InputStreamOptions);
	virtual void FireCompletionAndReleaseOperation();
};

struct RpcOptionsHelper
{
	static long GetRpcOptions(IUnknown *,IRpcOptions * *);
};

struct SerializedOperationQueue<ISerializedIoOperation>
{
	unsigned char TryDequeueOperations();
};

struct SocketActivityContextFactory
{
	virtual long Create(Windows::Storage::Streams::IBuffer *,Windows::Networking::Sockets::ISocketActivityContext * *);
};

class SocketActivityContextImpl
{
	static void BufferCleanup(unsigned char *);
public:
	SocketActivityContextImpl();
	static TrustLevel InternalGetTrustLevel();
	static long CopyBuffer(Windows::Storage::Streams::IBuffer *,Windows::Storage::Streams::IBuffer * *);
	static unsigned short const * InternalGetRuntimeClassName();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Data(Windows::Storage::Streams::IBuffer * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class SocketActivityInformationImpl
{
	long RetrieveContext();
	long RetrieveDatagramSocketPrivate(_SOCKET_BROKER_RETRIEVE_SOCKET *);
	long RetrieveDuplicateSocketHandle(unsigned __int64,unsigned long,int,int,SocketHandle * *);
	long RetrieveStreamSocketListenerPrivate(_SOCKET_BROKER_RETRIEVE_SOCKET *);
	long RetrieveStreamSocketPrivate(_SOCKET_BROKER_RETRIEVE_SOCKET *);
	void FreeSocketBrokerRetrieveSocket(_SOCKET_BROKER_RETRIEVE_SOCKET *);
public:
	SocketActivityInformationImpl();
	long RuntimeClassInitialize(_GUID,HSTRING__ *,Windows::Networking::Sockets::SocketActivityKind);
	static TrustLevel InternalGetTrustLevel();
	static unsigned short const * InternalGetRuntimeClassName();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Context(Windows::Networking::Sockets::ISocketActivityContext * *);
	virtual long get_DatagramSocket(Windows::Networking::Sockets::IDatagramSocket * *);
	virtual long get_Id(HSTRING__ * *);
	virtual long get_SocketKind(Windows::Networking::Sockets::SocketActivityKind *);
	virtual long get_StreamSocket(Windows::Networking::Sockets::IStreamSocket * *);
	virtual long get_StreamSocketListener(Windows::Networking::Sockets::IStreamSocketListener * *);
	virtual long get_TaskId(_GUID *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct SocketActivityInformationStatics
{
	virtual long get_AllSockets(Windows::Foundation::Collections::IMapView<HSTRING__ *,Windows::Networking::Sockets::SocketActivityInformation *> * *);
};

struct SocketActivityTriggerDetailsFactory
{
	virtual long CreateEventDetailsInstance(unsigned long,unsigned char *,IUnknown *,_GUID const &,void * *);
	virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
};

struct SocketActivityTriggerDetailsImpl
{
	long RuntimeClassInitialize(unsigned long,unsigned char *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Reason(Windows::Networking::Sockets::SocketActivityTriggerReason *);
	virtual long get_SocketInformation(Windows::Networking::Sockets::ISocketActivityInformation * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct SocketActivityTriggerImpl
{
	SocketActivityTriggerImpl();
	static TrustLevel InternalGetTrustLevel();
	static unsigned short const * InternalGetRuntimeClassName();
	virtual long Create();
	virtual long Delete();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_EventId(_GUID *);
	virtual long get_IsWakeFromLowPowerSupported(unsigned char *);
	virtual long get_SqmId(unsigned long *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class SocketCancelIoOperationServer
{
	void CancelIoWorker(void *);
protected:
	virtual Windows::Networking::Sockets::Internal::OperationType GetOperationType();
	virtual long OnStart();
	virtual void OnCancel();
public:
	SocketCancelIoOperationServer();
	long RuntimeClassInitialize(Windows::Networking::Sockets::Internal::ICancellableSocket *);
	virtual Windows::Networking::Sockets::Internal::ISocketContext * GetSocketContext();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetResults();
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Completed(Windows::Foundation::IAsyncActionCompletedHandler * *);
	virtual long put_Completed(Windows::Foundation::IAsyncActionCompletedHandler *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class SocketErrorFactory
{
	Windows::Networking::Sockets::SocketErrorStatus GetSocketErrorStatus(long);
public:
	virtual long GetStatus(int,Windows::Networking::Sockets::SocketErrorStatus *);
};

struct SocketErrorImpl
{
	static TrustLevel InternalGetTrustLevel();
	static unsigned short const * InternalGetRuntimeClassName();
};

class SocketFlushOperationServer
{
protected:
	virtual Windows::Networking::Sockets::Internal::OperationType GetOperationType();
	virtual long OnStart();
	virtual void OnCancel();
public:
	SocketFlushOperationServer();
	long RuntimeClassInitialize(Windows::Storage::Streams::IOutputStream *,Windows::Networking::Sockets::Internal::ISocketContext *,IBatchedWriter *);
	virtual Windows::Networking::Sockets::Internal::ISocketContext * GetSocketContext();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetResults(unsigned char *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Completed(Windows::Foundation::IAsyncOperationCompletedHandler<bool> * *);
	virtual long put_Completed(Windows::Foundation::IAsyncOperationCompletedHandler<bool> *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void CompleteOperation(long);
	virtual ~SocketFlushOperationServer();
};

class SocketHandle
{
	long IoctlNoLock(unsigned long,void *,unsigned long,void *,unsigned long,unsigned long *);
	long ReceiveMessageCore(_WSAMSG *,SocketIoContext *,unsigned char *,unsigned int *);
	long SetInterfaceForListenSocketNoLock(unsigned long);
	long SetInterfaceSocketOptionNoLock(int,int,unsigned long);
	long SetSocketOptionDualIpNoLock(int,int,void *,int);
	long SetSocketOptionNoLock(int,int,void *,int);
	long TryGetOverlappedResultNoLock(_OVERLAPPED *,unsigned int *,unsigned int *);
	void FreePrefilledBuffer();
protected:
	SocketHandle(unsigned __int64);
	virtual ~SocketHandle();
public:
	long Accept(SocketHandle *,void *,unsigned long,unsigned long,unsigned long,unsigned long *,SocketIoContext *);
	long BindToAddress(sockaddr *,unsigned int);
	long ClearInterfaceForDatagramSocket();
	long Connect(sockaddr *,unsigned __int64);
	long DisassociateIocp();
	long FlushPendingReads();
	long GetLocalName(sockaddr *,unsigned int *,HSTRING__ * *);
	long GetRemoteName(sockaddr *,unsigned int *,HSTRING__ * *,unsigned short *);
	long GetSocketOption(int,int,void *,int *);
	long Ioctl(unsigned long,void *,unsigned long,void *,unsigned long,unsigned long *);
	long JoinMFQueue(Windows::Networking::Sockets::SocketQualityOfService);
	long Listen();
	long Receive(_WSABUF *,unsigned int,unsigned int *,SocketIoContext *);
	long ReceiveMessage(_WSAMSG *,SocketIoContext *);
	long ReceiveMessageWithInlineCompletions(_WSAMSG *,SocketIoContext *,unsigned char *,unsigned int *);
	long Send(_WSABUF *,unsigned int,unsigned int,SocketIoContext *);
	long SendMessageW(_WSAMSG *,unsigned int,SocketIoContext *);
	long SetDualStackMode();
	long SetExclusiveAddrUse();
	long SetInterfaceForDatagramSocket(unsigned long);
	long SetMulticastPortSharingMode();
	long SetOutboundUnicastHopLimit(unsigned char);
	long SetRealTimeNotificationCapability();
	long SetSocketOption(int,int,void *,int);
	long SetSocketOptionDualIp(int,int,void *,int);
	long SetTcpLoopbackFastPathEnabled();
	long SetWake();
	long SocketTransferOwnership(_GUID,unsigned short const *,int,int,int,unsigned char,unsigned char,Windows::Foundation::TimeSpan,_WA_SSL_EXPORT_SECURITY_CONTEXT *,_DNS_REGISTRATION_DATA *,Windows::Networking::Sockets::ISocketActivityContext *);
	long TransmitPackets(_TRANSMIT_PACKETS_ELEMENT *,unsigned long,unsigned long,SocketIoContext *);
	long TryCancelIO();
	static long Create(int,int,int,unsigned long,SocketHandle * *);
	static long Create(unsigned __int64,SocketHandle * *);
	static long FromSocketContext(Windows::Networking::Sockets::Internal::ISocketContext *,SocketHandle * *);
	static long GetInterfaceIndexFromAdapter(Windows::Networking::Connectivity::INetworkAdapter *,unsigned long *);
	unsigned char IsBound();
	unsigned char IsConnected();
	unsigned char IsValid();
	virtual void Close();
	void Release();
};

struct SocketHelper
{
	static long CheckRemoteHostAccess(Windows::Networking::IHostName *);
	static long CreateDataReaderFactory(Windows::Internal::GitPtrSupportsAgile<Windows::Storage::Streams::IDataReaderStatics> &);
	static long VerifyBuffer(Windows::Storage::Streams::IBuffer *,unsigned int,unsigned char *);
	static unsigned char IsUnicast(_SOCKADDR_INET *);
	static void ApplyProtectionLevelOverrides(Windows::Networking::Sockets::SocketProtectionLevel,Windows::Networking::Sockets::SocketProtectionLevel,unsigned int *);
};

struct SocketIoContext
{
	SocketIoContext();
	long CreateAsyncResultAndGetOverlapped(_OVERLAPPED * *);
	long RuntimeClassInitialize(SocketHandle *,Windows::Networking::Sockets::Internal::ISocketContext *,Windows::Networking::Sockets::Internal::IIoOperation *);
	long RuntimeClassInitialize(Windows::Networking::Sockets::Internal::ISocketContext *,void (*)(void *,unsigned long,unsigned __int64),void *);
	long SetCompletion(long,unsigned int);
	virtual long GetParameters(unsigned long *,unsigned long *);
	virtual long Invoke(IMFAsyncResult *);
	void FreeAsyncResult();
};

struct SocketMediaMode
{
	static SocketMediaMode Instance;
};

class SocketNameResolver
{
	long DnsQueryExForSrvRecord();
	long ResolveAddressInternal(Windows::Networking::IHostName *,Windows::Internal::String &,NameResolutionTarget,unsigned long);
	long StartGetAddrInfoExCore();
	static void DnsQueryExCallback(void *,_DNS_QUERY_RESULT *);
	static void GetAddrInfoExWaitCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_WAIT *,long);
	void CancelDnsQueryEx();
	void CancelGetAddrInfoEx();
	void CleanupGetAddrInfoEx();
	void CompleteGetAddrInfoEx(long);
	void StartGetAddrInfoEx(addrinfoex3 *);
public:
	SocketNameResolver();
	long PrepareAutoReleaseAddressResolution<StreamSocketHybridTcpConnector>(StreamSocketHybridTcpConnector *,NameResolutionTarget,Windows::Networking::IHostName *,Windows::Internal::String &,unsigned long);
	static void AutoReleaseDnsQueryCompleteHandler<StreamSocketHybridTcpConnector>(void *,long,_DNS_QUERY_RESULT *);
	static void AutoReleaseGetAddrInfoCompleteHandler<StreamSocketHybridTcpConnector>(void *,long,addrinfoexW *);
	static void DnsQueryCompleteHandler<DatagramSocketConnectOperationServer>(void *,long,_DNS_QUERY_RESULT *);
	static void DnsQueryCompleteHandler<DatagramSocketGetOutputStreamOperationImpl>(void *,long,_DNS_QUERY_RESULT *);
	static void DnsQueryCompleteHandler<GetEndpointPairsOperationImpl>(void *,long,_DNS_QUERY_RESULT *);
	static void GetAddrInfoCompleteHandler<DatagramSocketBindOperationServer>(void *,long,addrinfoexW *);
	static void GetAddrInfoCompleteHandler<DatagramSocketConnectOperationServer>(void *,long,addrinfoexW *);
	static void GetAddrInfoCompleteHandler<DatagramSocketGetOutputStreamOperationImpl>(void *,long,addrinfoexW *);
	static void GetAddrInfoCompleteHandler<GetEndpointPairsOperationImpl>(void *,long,addrinfoexW *);
	static void GetAddrInfoCompleteHandler<StreamSocketListenerTcpBinder>(void *,long,addrinfoexW *);
	void Cancel();
	void GetResolvedLocalAddress(addrinfoexW *,_SOCKADDR_INET *);
	void Release();
	void StartNameResolution();
};

struct SocketOperationWithProgressBase<Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Storage::Streams::IBuffer *,unsigned int>,Windows::Foundation::IAsyncOperationProgressHandler<Windows::Storage::Streams::IBuffer *,unsigned int> >
{
	virtual long FireCompletion();
	virtual long GetOnProgress(Windows::Foundation::IAsyncOperationProgressHandler<Windows::Storage::Streams::IBuffer *,unsigned int> * *);
	virtual long PutOnProgress(Windows::Foundation::IAsyncOperationProgressHandler<Windows::Storage::Streams::IBuffer *,unsigned int> *);
};

struct SocketOperationWithProgressBase<Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<unsigned int,unsigned int>,Windows::Foundation::IAsyncOperationProgressHandler<unsigned int,unsigned int> >
{
	long FireProgress(unsigned int);
	virtual long FireCompletion();
	virtual long GetOnProgress(Windows::Foundation::IAsyncOperationProgressHandler<unsigned int,unsigned int> * *);
	virtual long PutOnProgress(Windows::Foundation::IAsyncOperationProgressHandler<unsigned int,unsigned int> *);
};

class SocketOutputStream
{
	long InitializeCore(Windows::Networking::Sockets::Internal::ISocketContext *);
	long TcpBatchedSendAsync(_WEB_DATA_CHUNK *,unsigned long,void (*)(void *,unsigned long,unsigned __int64),void *);
	long UdpBatchedSendAsync(_TRANSMIT_PACKETS_ELEMENT *,unsigned long,void (*)(void *,unsigned long,unsigned __int64),void *,_WSAMSG * *);
	long WriteAsyncInternal(Windows::Storage::Streams::IBuffer *,Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int> * *);
	static void AsyncSendCompleteCallback(void *,unsigned long,unsigned __int64);
public:
	SocketOutputStream();
	virtual long FlushAsync(Windows::Foundation::IAsyncOperation<bool> * *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long StartBatchedSend(unsigned long,unsigned long,QueueIterator<IoRequest> *,void (*)(void *,unsigned long,unsigned __int64),void *,unsigned __int64 *);
	virtual long WriteAsync(Windows::Storage::Streams::IBuffer *,Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int> * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~SocketOutputStream();
};

class SocketOutputStreamBatchedWriter
{
	long CaptureIoQueue(SocketOutputStreamBatchedWriter::BatchedSendContext *);
	long CreateFlushRequestAndAddToQueue(IFlushOperation *);
	long StartBatchedSend(SocketOutputStreamBatchedWriter::BatchedSendContext *);
	static void BatchedSendCompleteCallback(void *,unsigned long,unsigned __int64);
	void InvokeSendCompletion(void *);
public:
	virtual long FlushAsync(IFlushOperation *);
	virtual long WriteAsync(unsigned char *,unsigned int,Windows::Networking::Sockets::Internal::IIoOperation *);
};

struct SocketReadBufferServer
{
	virtual long AddAvailableBytes(unsigned int);
	virtual long DetachBuffer();
	virtual long GetBuffer(unsigned int *,unsigned char * *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ResetBuffer();
	virtual long ResizeBuffer(unsigned int);
	virtual long get_AvailableLength(unsigned int *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~SocketReadBufferServer();
};

class SocketWriteOperationServer
{
	long StartCore();
	void CompleteOperation(long);
protected:
	virtual Windows::Networking::Sockets::Internal::OperationType GetOperationType();
	virtual long OnStart();
	virtual void CompleteOperation();
	virtual void OnCancel();
public:
	SocketWriteOperationServer(Windows::Networking::Sockets::Internal::ISocketContext *);
	virtual Windows::Networking::Sockets::Internal::ISocketContext * GetSocketContext();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetResults(unsigned int *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long IoCompleted(long,unsigned int,IInspectable *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Completed(Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<unsigned int,unsigned int> * *);
	virtual long get_Progress(Windows::Foundation::IAsyncOperationProgressHandler<unsigned int,unsigned int> * *);
	virtual long put_Completed(Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<unsigned int,unsigned int> *);
	virtual long put_Progress(Windows::Foundation::IAsyncOperationProgressHandler<unsigned int,unsigned int> *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void FireCompletionAndReleaseOperation();
	virtual ~SocketWriteOperationServer();
};

class Sqm
{
	static int enabled;
	static int volatile initialized;
public:
	static int EnsureInitialized();
	static void OnSslConnection(Windows::Networking::Sockets::SocketProtectionLevel);
};

class StreamSocketBluetoothConnector
{
	long ConnectBluetoothCore();
	static void ConnectWorker(_TP_CALLBACK_INSTANCE *,void *);
protected:
	virtual long StartConnect();
	virtual void OnCancel();
public:
	long RuntimeClassInitialize(Windows::Networking::IHostName *,HSTRING__ * const,Windows::Networking::Sockets::SocketProtectionLevel);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class StreamSocketConnectOperationServer
{
	long ConfigureConnectedSocket();
	long CreateConnector(Windows::Networking::IHostName *,HSTRING__ * const,unsigned long);
	long StoreConnectionInformationAndCompleteOperation();
	static void UpgradeCompleteCallback(void *,unsigned long,unsigned __int64);
	void ConnectComplete(long);
protected:
	virtual Windows::Networking::Sockets::Internal::OperationType GetOperationType();
	virtual long OnStart();
	virtual void OnCancel();
public:
	StreamSocketConnectOperationServer();
	long RuntimeClassInitialize(StreamSocketServer *,Windows::Networking::IHostName *,HSTRING__ * const,Windows::Networking::IHostName *,HSTRING__ * const,Windows::Networking::Sockets::SocketProtectionLevel,unsigned long);
	virtual Windows::Networking::Sockets::Internal::ISocketContext * GetSocketContext();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetResults();
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long Invoke(Windows::Foundation::IAsyncAction *,ABI::Windows::Foundation::AsyncStatus);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Completed(Windows::Foundation::IAsyncActionCompletedHandler * *);
	virtual long put_Completed(Windows::Foundation::IAsyncActionCompletedHandler *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~StreamSocketConnectOperationServer();
};

class StreamSocketConnectorBase
{
protected:
	long SetRemoteInformation(Windows::Networking::IHostName *,HSTRING__ * const);
	virtual long OnStart();
	virtual void OnClose();
	void DereferenceApartment();
public:
	SocketHandle * GetSocketHandle();
	StreamSocketConnectorBase();
	virtual long GetConnectedEndpointName(HSTRING__ * *,HSTRING__ * *);
	virtual long GetResults();
	virtual long get_Completed(Windows::Foundation::IAsyncActionCompletedHandler * *);
	virtual long put_Completed(Windows::Foundation::IAsyncActionCompletedHandler *);
	virtual unsigned char SupportsSsl();
	virtual ~StreamSocketConnectorBase();
	void CompleteAsyncOperation(long);
};

class StreamSocketControlImpl
{
	long CheckParentSocketState(StreamSocketControlImpl::ParentSocketState);
public:
	StreamSocketControlImpl();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_ClientCertificate(Windows::Security::Cryptography::Certificates::ICertificate * *);
	virtual long get_IgnorableServerCertificateErrors(Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::ChainValidationResult> * *);
	virtual long get_KeepAlive(unsigned char *);
	virtual long get_MinProtectionLevel(Windows::Networking::Sockets::SocketProtectionLevel *);
	virtual long get_NoDelay(unsigned char *);
	virtual long get_OutboundBufferSizeInBytes(unsigned int *);
	virtual long get_OutboundUnicastHopLimit(unsigned char *);
	virtual long get_QualityOfService(Windows::Networking::Sockets::SocketQualityOfService *);
	virtual long get_SerializeConnectionAttempts(unsigned char *);
	virtual long put_ClientCertificate(Windows::Security::Cryptography::Certificates::ICertificate *);
	virtual long put_KeepAlive(unsigned char);
	virtual long put_MinProtectionLevel(Windows::Networking::Sockets::SocketProtectionLevel);
	virtual long put_NoDelay(unsigned char);
	virtual long put_OutboundBufferSizeInBytes(unsigned int);
	virtual long put_OutboundUnicastHopLimit(unsigned char);
	virtual long put_QualityOfService(Windows::Networking::Sockets::SocketQualityOfService);
	virtual long put_SerializeConnectionAttempts(unsigned char);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class StreamSocketDirectTcpConnector
{
	long ConnectTcp();
	long ConnectTcpCore(unsigned short const *,unsigned short const *);
	static void ConnectWorker(_TP_CALLBACK_INSTANCE *,void *);
	void CancelConnectWorker(void *);
protected:
	virtual long StartConnect();
	virtual void OnCancel();
public:
	long RuntimeClassInitialize(StreamSocketServer *,_SOCKADDR_INET * const,unsigned short const *,unsigned short const *,unsigned short const *,_DnsRecordW *,unsigned long);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~StreamSocketDirectTcpConnector();
};

class StreamSocketHybridTcpConnector
{
	long CreateAndStartConnectors(unsigned short const *,unsigned short const *,_DnsRecordW *);
	long CreateImmediateProxyConnector(Windows::Networking::IHostName *,HSTRING__ * const,Windows::Networking::IHostName *,HSTRING__ * const);
	long OnGetAddrInfoCompleteCore(addrinfoexW *);
	unsigned char TryGetPortNumber(HSTRING__ * const,unsigned short *);
	void HandleNameResolutionFailure(long);
protected:
	virtual long StartConnect();
	virtual void OnCancel();
public:
	StreamSocketHybridTcpConnector();
	long RuntimeClassInitialize(StreamSocketServer *,Windows::Networking::IHostName *,HSTRING__ * const,Windows::Networking::IHostName *,HSTRING__ * const,unsigned short const *,unsigned long);
	virtual long GetConnectedEndpointName(HSTRING__ * *,HSTRING__ * *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long Invoke(Windows::Foundation::IAsyncAction *,ABI::Windows::Foundation::AsyncStatus);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned char SupportsSsl();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct StreamSocketInformationImpl
{
	StreamSocketInformationImpl();
	long SetConnectionInformation(SocketHandle *,unsigned char,unsigned char,unsigned long,unsigned char *,Windows::Networking::IHostName *,HSTRING__ * const,Windows::Networking::Sockets::SocketQualityOfService);
	long SetServerCertificateInformation(Windows::Networking::Sockets::SocketSslErrorSeverity,Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::ChainValidationResult> *,Windows::Security::Cryptography::Certificates::ICertificate *,Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::Certificate *> *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_BandwidthStatistics(Windows::Networking::Sockets::BandwidthStatistics *);
	virtual long get_LocalAddress(Windows::Networking::IHostName * *);
	virtual long get_LocalPort(HSTRING__ * *);
	virtual long get_ProtectionLevel(Windows::Networking::Sockets::SocketProtectionLevel *);
	virtual long get_RemoteAddress(Windows::Networking::IHostName * *);
	virtual long get_RemoteHostName(Windows::Networking::IHostName * *);
	virtual long get_RemotePort(HSTRING__ * *);
	virtual long get_RemoteServiceName(HSTRING__ * *);
	virtual long get_RoundTripTimeStatistics(Windows::Networking::Sockets::RoundTripTimeStatistics *);
	virtual long get_ServerCertificate(Windows::Security::Cryptography::Certificates::ICertificate * *);
	virtual long get_ServerCertificateErrorSeverity(Windows::Networking::Sockets::SocketSslErrorSeverity *);
	virtual long get_ServerCertificateErrors(Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::ChainValidationResult> * *);
	virtual long get_ServerIntermediateCertificates(Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate *> * *);
	virtual long get_SessionKey(Windows::Storage::Streams::IBuffer * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	void ClearServerCertificateInformation();
};

class StreamSocketInputStream
{
	long ReadAsyncInternal(Windows::Storage::Streams::IBuffer *,unsigned int,Windows::Storage::Streams::InputStreamOptions,Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer *,unsigned int> * *);
public:
	StreamSocketInputStream(StreamSocketServer *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ReadAsync(Windows::Storage::Streams::IBuffer *,unsigned int,Windows::Storage::Streams::InputStreamOptions,Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer *,unsigned int> * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~StreamSocketInputStream();
};

class StreamSocketListenerBinderBase
{
protected:
	long SetListenerInformation(StreamSocketListenerImpl *,Windows::Networking::IHostName *,HSTRING__ * const,Windows::Networking::Sockets::SocketProtectionLevel);
	virtual Windows::Networking::Sockets::Internal::OperationType GetOperationType();
	virtual long OnStart();
public:
	virtual Windows::Networking::Sockets::Internal::ISocketContext * GetSocketContext();
	virtual long GetResults();
	virtual long get_Completed(Windows::Foundation::IAsyncActionCompletedHandler * *);
	virtual long put_Completed(Windows::Foundation::IAsyncActionCompletedHandler *);
	virtual ~StreamSocketListenerBinderBase();
};

class StreamSocketListenerBluetoothBinder
{
	long BindBluetoothCore();
	static void BindWorker(_TP_CALLBACK_INSTANCE *,void *);
protected:
	virtual long StartBind();
	virtual void OnCancel();
public:
	long RuntimeClassInitialize(StreamSocketListenerImpl *,Windows::Networking::IHostName *,HSTRING__ * const,Windows::Networking::Sockets::SocketProtectionLevel);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct StreamSocketListenerConnectionReceivedEventArgsImpl
{
	long RuntimeClassInitialize(long,Windows::Networking::Sockets::IStreamSocket *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Socket(Windows::Networking::Sockets::IStreamSocket * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class StreamSocketListenerControlImpl
{
	long CheckParentSocketState();
public:
	StreamSocketListenerControlImpl();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetConnectedSocketControlProperties(Windows::Networking::Sockets::IStreamSocketControl *);
	virtual long get_KeepAlive(unsigned char *);
	virtual long get_NoDelay(unsigned char *);
	virtual long get_OutboundBufferSizeInBytes(unsigned int *);
	virtual long get_OutboundUnicastHopLimit(unsigned char *);
	virtual long get_QualityOfService(Windows::Networking::Sockets::SocketQualityOfService *);
	virtual long put_KeepAlive(unsigned char);
	virtual long put_NoDelay(unsigned char);
	virtual long put_OutboundBufferSizeInBytes(unsigned int);
	virtual long put_OutboundUnicastHopLimit(unsigned char);
	virtual long put_QualityOfService(Windows::Networking::Sockets::SocketQualityOfService);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct StreamSocketListenerFactory
{
	virtual long ActivateInstance(IInspectable * *);
};

class StreamSocketListenerImpl
{
	long BindAsyncInternal(Windows::Networking::IHostName *,HSTRING__ *,Windows::Networking::Sockets::SocketProtectionLevel,Windows::Networking::Connectivity::INetworkAdapter *,Windows::Foundation::IAsyncAction * *);
	long BindAsyncInternalCore(Windows::Networking::IHostName *,HSTRING__ *,Windows::Networking::Sockets::SocketProtectionLevel,Windows::Networking::Connectivity::INetworkAdapter *,Windows::Foundation::IAsyncAction * *);
	long PerformTransfer(HSTRING__ *,Windows::Networking::Sockets::ISocketActivityContext *);
	long SetSocketHandle(SocketHandle *);
	static void RemoveConnectionHandler(void *,EventRegistrationToken,void *);
public:
	StreamSocketListenerImpl();
	long Initialize();
	long InitializeTransferOwnershipState(_GUID);
	long SetBoundInformation(HSTRING__ *,SocketHandle *);
	static TrustLevel InternalGetTrustLevel();
	static long MakeStreamSocketListener(SocketHandle *,unsigned short,StreamSocketListenerImpl * *);
	static unsigned short const * InternalGetRuntimeClassName();
	virtual long BindEndpointAsync(Windows::Networking::IHostName *,HSTRING__ *,Windows::Foundation::IAsyncAction * *);
	virtual long BindServiceNameAsync(HSTRING__ *,Windows::Foundation::IAsyncAction * *);
	virtual long BindServiceNameWithProtectionLevelAndAdapterAsync(HSTRING__ *,Windows::Networking::Sockets::SocketProtectionLevel,Windows::Networking::Connectivity::INetworkAdapter *,Windows::Foundation::IAsyncAction * *);
	virtual long BindServiceNameWithProtectionLevelAsync(HSTRING__ *,Windows::Networking::Sockets::SocketProtectionLevel,Windows::Foundation::IAsyncAction * *);
	virtual long Cancel();
	virtual long CancelIOAsync(Windows::Foundation::IAsyncAction * *);
	virtual long CancelIoWithoutClosing();
	virtual long CheckConnected();
	virtual long CheckConnecting();
	virtual long CheckListenState();
	virtual long CheckNewState();
	virtual long CheckNotCancellingIo();
	virtual long CheckNotUpgrading();
	virtual long Close();
	virtual long EnableTransferOwnership(_GUID);
	virtual long EnableTransferOwnershipWithConnectedStandbyAction(_GUID,Windows::Networking::Sockets::SocketActivityConnectedStandbyAction);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetQualityOfService(Windows::Networking::Sockets::SocketQualityOfService *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetSocket(Windows::Networking::Sockets::Internal::ISocketHandle * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetCancellingIo(unsigned char);
	virtual long SetIdleOperationState(Windows::Networking::Sockets::Internal::OperationType);
	virtual long TransferOwnership(HSTRING__ *);
	virtual long TransferOwnershipWithContext(HSTRING__ *,Windows::Networking::Sockets::ISocketActivityContext *);
	virtual long add_ConnectionReceived(Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::StreamSocketListener *,Windows::Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs *> *,EventRegistrationToken *);
	virtual long get_Control(Windows::Networking::Sockets::IStreamSocketListenerControl * *);
	virtual long get_Information(Windows::Networking::Sockets::IStreamSocketListenerInformation * *);
	virtual long remove_ConnectionReceived(EventRegistrationToken);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct StreamSocketListenerInformationImpl
{
	StreamSocketListenerInformationImpl();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_LocalPort(HSTRING__ * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class StreamSocketListenerTcpBinder
{
protected:
	virtual long StartBind();
	virtual void OnCancel();
public:
	long OnGetAddrInfoComplete(addrinfoexW *);
	long RuntimeClassInitialize(StreamSocketListenerImpl *,Windows::Networking::IHostName *,HSTRING__ * const,Windows::Networking::Sockets::SocketProtectionLevel,unsigned long);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class StreamSocketProximityConnector
{
	static void ConnectWorker(_TP_CALLBACK_INSTANCE *,void *);
protected:
	virtual long StartConnect();
	virtual void OnCancel();
public:
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class StreamSocketProxyTcpConnector
{
	long HandleProxyDetectionCompletion(ABI::Windows::Foundation::AsyncStatus);
	long HandleProxyRequestCompletionCore(HttpResponse *);
	long ReadNextRemoteEndpointInformation();
	long StartConnectThroughProxyCore();
	long StartProxyDetectionCore();
	static long ConnectHandleCreatedCallback(HttpSession *,void *);
	static void RequestCompleteCallback(HttpRequest *,long,HttpResponse *);
	static void RequestHandleCreatedCallback(HttpRequest *,void *,long *);
	void CancelProxyOperation(Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncOperation<Windows::Networking::Connectivity::ProxyConfiguration *> > const &);
	void StartDetectAndConnectThroughProxy();
protected:
	virtual long StartConnect();
	virtual void OnCancel();
public:
	StreamSocketProxyTcpConnector();
	long ManualStart();
	long RuntimeClassInitialize(unsigned char,_SOCKADDR_INET * const,unsigned short const *,unsigned short const *,unsigned short const *,_DnsRecordW *,unsigned char);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long Invoke(Windows::Foundation::IAsyncOperation<Windows::Networking::Connectivity::ProxyConfiguration *> *,ABI::Windows::Foundation::AsyncStatus);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~StreamSocketProxyTcpConnector();
};

class StreamSocketReadOperationServer
{
	void CompleteSyncRead(void *);
protected:
	virtual long OnStart();
	virtual long StartReadOperation(unsigned char *,unsigned int);
	virtual void CompleteOperation();
	virtual void OnApplicationCallbackDone();
public:
	StreamSocketReadOperationServer(StreamSocketServer *,WebioFacade *);
	virtual Windows::Networking::Sockets::Internal::ISocketContext * GetSocketContext();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetResults(Windows::Storage::Streams::IBuffer * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long IoCompleted(long,unsigned int,IInspectable *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Completed(Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Storage::Streams::IBuffer *,unsigned int> * *);
	virtual long get_Progress(Windows::Foundation::IAsyncOperationProgressHandler<Windows::Storage::Streams::IBuffer *,unsigned int> * *);
	virtual long put_Completed(Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Storage::Streams::IBuffer *,unsigned int> *);
	virtual long put_Progress(Windows::Foundation::IAsyncOperationProgressHandler<Windows::Storage::Streams::IBuffer *,unsigned int> *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~StreamSocketReadOperationServer();
};

class StreamSocketServer
{
	long ApplyAndQueryTransportSettings(_REAL_TIME_NOTIFICATION_SETTING_INPUT *,_REAL_TIME_NOTIFICATION_SETTING_OUTPUT *);
	long CloseInternal(unsigned char);
	long CompleteDeliveryCore();
	long ConnectAsyncInternal(Windows::Networking::IHostName *,HSTRING__ *,Windows::Networking::IHostName *,HSTRING__ *,Windows::Networking::Sockets::SocketProtectionLevel,Windows::Networking::Connectivity::INetworkAdapter *,Windows::Foundation::IAsyncAction * *);
	long CreateConnectOperation(Windows::Networking::IHostName *,HSTRING__ *,Windows::Networking::IHostName *,HSTRING__ *,Windows::Networking::Sockets::SocketProtectionLevel,unsigned long,Windows::Foundation::IAsyncAction * *);
	long CreateUpgradeToSslOperation(Windows::Networking::Sockets::SocketProtectionLevel,Windows::Networking::IHostName *,Windows::Foundation::IAsyncAction * *);
	long FlushCore();
	long Initialize();
	long PerformTransfer(HSTRING__ *,Windows::Networking::Sockets::ISocketActivityContext *,unsigned char,Windows::Foundation::TimeSpan);
	long SetupConnectedSocketHandle(SocketHandle *,unsigned long,unsigned char *,Windows::Networking::IHostName *,HSTRING__ * const);
	long SetupIpStreamSocketHandle(SocketHandle *);
	long TransferOwnershipCore(HSTRING__ *,Windows::Networking::Sockets::ISocketActivityContext *,unsigned char,Windows::Foundation::TimeSpan);
	static void UpgradeSslFromExportedSecurityContextComplete(void *,unsigned long,unsigned __int64);
	void UpgradeSslFromExportedSecurityContextComplete(long);
public:
	StreamSocketServer();
	long InitializeTransferOwnershipState(_GUID);
	long SetStateConnected(WebioFacade *);
	long SetStateUpgraded();
	long SetupSocketHandle(SocketHandle *);
	long SetupSocketHandle(SocketHandle *,unsigned char,unsigned long,unsigned char *,Windows::Networking::IHostName *,HSTRING__ * const);
	static TrustLevel InternalGetTrustLevel();
	static long MakeStreamSocket(StreamSocketServer * *);
	static long MakeStreamSocketWithSocketHandle(unsigned __int64,unsigned long,unsigned char *,unsigned short const *,unsigned short const *,StreamSocketServer * *);
	static unsigned short const * InternalGetRuntimeClassName();
	unsigned char ArePushNotificationsRequired();
	virtual long ApplySetting(TRANSPORT_SETTING_ID const *,unsigned long,unsigned char const *,unsigned long *,unsigned char * *);
	virtual long Cancel();
	virtual long CancelIOAsync(Windows::Foundation::IAsyncAction * *);
	virtual long CancelIoWithoutClosing();
	virtual long CheckConnected();
	virtual long CheckConnecting();
	virtual long CheckListenState();
	virtual long CheckNewState();
	virtual long CheckNotCancellingIo();
	virtual long CheckNotUpgrading();
	virtual long CheckPendingReadOperations();
	virtual long CheckPendingWriteOperations();
	virtual long Close();
	virtual long CompleteDelivery();
	virtual long ConnectAsync(Windows::Networking::IHostName *,HSTRING__ *,Windows::Foundation::IAsyncAction * *);
	virtual long ConnectWithEndpointPairAndProtectionLevelAsync(Windows::Networking::IEndpointPair *,Windows::Networking::Sockets::SocketProtectionLevel,Windows::Foundation::IAsyncAction * *);
	virtual long ConnectWithEndpointPairAsync(Windows::Networking::IEndpointPair *,Windows::Foundation::IAsyncAction * *);
	virtual long ConnectWithProtectionLevelAndAdapterAsync(Windows::Networking::IHostName *,HSTRING__ *,Windows::Networking::Sockets::SocketProtectionLevel,Windows::Networking::Connectivity::INetworkAdapter *,Windows::Foundation::IAsyncAction * *);
	virtual long ConnectWithProtectionLevelAsync(Windows::Networking::IHostName *,HSTRING__ *,Windows::Networking::Sockets::SocketProtectionLevel,Windows::Foundation::IAsyncAction * *);
	virtual long DecrementPendingWriteOperations();
	virtual long EnableTransferOwnership(_GUID);
	virtual long EnableTransferOwnershipWithConnectedStandbyAction(_GUID,Windows::Networking::Sockets::SocketActivityConnectedStandbyAction);
	virtual long EnableUnrestrictedReadWrite();
	virtual long Flush();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetIsTransportReady(unsigned char *);
	virtual long GetQualityOfService(Windows::Networking::Sockets::SocketQualityOfService *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetSocket(Windows::Networking::Sockets::Internal::ISocketHandle * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long IncrementPendingWriteOperations();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long QuerySetting(TRANSPORT_SETTING_ID const *,unsigned long,unsigned char const *,unsigned long *,unsigned char * *);
	virtual long SetCancellingIo(unsigned char);
	virtual long SetIdleOperationState(Windows::Networking::Sockets::Internal::OperationType);
	virtual long TransferOwnership(HSTRING__ *);
	virtual long TransferOwnershipWithContext(HSTRING__ *,Windows::Networking::Sockets::ISocketActivityContext *);
	virtual long TransferOwnershipWithContextAndKeepAliveTime(HSTRING__ *,Windows::Networking::Sockets::ISocketActivityContext *,Windows::Foundation::TimeSpan);
	virtual long UpgradeToSslAsync(Windows::Networking::Sockets::SocketProtectionLevel,Windows::Networking::IHostName *,Windows::Foundation::IAsyncAction * *);
	virtual long get_BoundInterface(Windows::Networking::Connectivity::INetworkAdapter * *);
	virtual long get_Control(Windows::Networking::Sockets::IStreamSocketControl * *);
	virtual long get_Information(Windows::Networking::Sockets::IStreamSocketInformation * *);
	virtual long get_InputStream(Windows::Storage::Streams::IInputStream * *);
	virtual long get_OutputStream(Windows::Storage::Streams::IOutputStream * *);
	virtual long get_SecureProtocols(unsigned int *);
	virtual long put_BoundInterface(Windows::Networking::Connectivity::INetworkAdapter *);
	virtual long put_SecureProtocols(unsigned int);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~StreamSocketServer();
};

struct StreamSocketStatics
{
	virtual long ActivateInstance(IInspectable * *);
	virtual long GetEndpointPairsAsync(Windows::Networking::IHostName *,HSTRING__ *,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair *> *> * *);
	virtual long GetEndpointPairsWithSortOptionsAsync(Windows::Networking::IHostName *,HSTRING__ *,Windows::Networking::HostNameSortOptions,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Networking::EndpointPair *> *> * *);
};

class StreamSocketTcpConnectorBase
{
	long TryMoveToNextRemoteEndpoint(unsigned char *);
protected:
	long GetNextRemoteEndpoint(HSTRING__ * *,HSTRING__ * *);
	long InitializeRemoteAddresses(unsigned short const *,unsigned short const *,_DnsRecordW *);
	virtual long GetConnectedEndpointName(HSTRING__ * *,HSTRING__ * *);
	virtual unsigned char SupportsSsl();
public:
	StreamSocketTcpConnectorBase();
	virtual ~StreamSocketTcpConnectorBase();
};

struct StreamWebSocketControlImpl
{
	StreamWebSocketControlImpl();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_ActualUnsolicitedPongInterval(Windows::Foundation::TimeSpan *);
	virtual long get_ClientCertificate(Windows::Security::Cryptography::Certificates::ICertificate * *);
	virtual long get_DesiredUnsolicitedPongInterval(Windows::Foundation::TimeSpan *);
	virtual long get_NoDelay(unsigned char *);
	virtual long put_ClientCertificate(Windows::Security::Cryptography::Certificates::ICertificate *);
	virtual long put_DesiredUnsolicitedPongInterval(Windows::Foundation::TimeSpan);
	virtual long put_NoDelay(unsigned char);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct StreamWebSocketFactory
{
	virtual long ActivateInstance(IInspectable * *);
};

struct StreamWebSocketInformationImpl
{
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class StreamWebSocketInputStream
{
	long ReadAsyncInternal(Windows::Storage::Streams::IBuffer *,unsigned int,Windows::Storage::Streams::InputStreamOptions,Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer *,unsigned int> * *);
public:
	StreamWebSocketInputStream(StreamWebSocketServer *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ReadAsync(Windows::Storage::Streams::IBuffer *,unsigned int,Windows::Storage::Streams::InputStreamOptions,Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer *,unsigned int> * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~StreamWebSocketInputStream();
};

class StreamWebSocketReadOperationServer
{
protected:
	virtual Windows::Networking::Sockets::Internal::ISocketContext * GetSocketContext();
	virtual long OnStart();
	virtual long StartReadOperation(unsigned char *,unsigned int);
	virtual void CompleteOperation();
	virtual void OnApplicationCallbackDone();
public:
	StreamWebSocketReadOperationServer(StreamWebSocketServer *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetResults(Windows::Storage::Streams::IBuffer * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long IoCompleted(long,unsigned int,IInspectable *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RestartIoOperation();
	virtual long get_Completed(Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Storage::Streams::IBuffer *,unsigned int> * *);
	virtual long get_Progress(Windows::Foundation::IAsyncOperationProgressHandler<Windows::Storage::Streams::IBuffer *,unsigned int> * *);
	virtual long put_Completed(Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Storage::Streams::IBuffer *,unsigned int> *);
	virtual long put_Progress(Windows::Foundation::IAsyncOperationProgressHandler<Windows::Storage::Streams::IBuffer *,unsigned int> *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~StreamWebSocketReadOperationServer();
	void StartIoOperation();
};

class StreamWebSocketServer
{
	long Initialize();
protected:
	virtual long InternalSetIdleOperationState(Windows::Networking::Sockets::Internal::OperationType);
	virtual long OnClose();
	virtual long OnConfigureWebSocketHandle(WebSocketHandle *);
	virtual unsigned int GetTraceType();
	virtual void GetAuthenticationCredentials(Windows::Security::Credentials::IPasswordCredential * *,Windows::Security::Credentials::IPasswordCredential * *,Windows::Security::Cryptography::Certificates::ICertificate * *);
public:
	StreamWebSocketServer();
	static TrustLevel InternalGetTrustLevel();
	static unsigned short const * InternalGetRuntimeClassName();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long add_ServerCustomValidationRequested(Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::StreamWebSocket *,Windows::Networking::Sockets::WebSocketServerCustomValidationRequestedEventArgs *> *,EventRegistrationToken *);
	virtual long get_Control(Windows::Networking::Sockets::IStreamWebSocketControl * *);
	virtual long get_Information(Windows::Networking::Sockets::IWebSocketInformation * *);
	virtual long get_InputStream(Windows::Storage::Streams::IInputStream * *);
	virtual long remove_ServerCustomValidationRequested(EventRegistrationToken);
	virtual unsigned __int64 GetServerCustomValidationRequestedEventSize();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void InvokeServerCustomValidationRequestedEvent(WebSocketServerCustomValidationRequestedEventArgsImpl *);
	virtual ~StreamWebSocketServer();
};

struct StringBuilder
{
	long Append(unsigned short const *,unsigned int);
	long EnsureBufferSpace(unsigned int);
};

class StringUtility
{
	static StringUtility::EncodingWithBom const * const encodingWithBom;
	static _RTL_RUN_ONCE init;
	static int InitializeStatics(_RTL_RUN_ONCE *,void *,void * *);
	static long EnsureInitialized();
	static long GetMultiLanguageInterface(IMultiLanguage2 * *);
	static long MultiByteToWideCharGeneric(unsigned char const *,unsigned int,unsigned int,HSTRING__ * *);
	static long MultiByteToWideCharInternal(unsigned char const *,unsigned int,unsigned int,HSTRING__ * *);
	static long MultiByteToWideCharWithMlang(unsigned char const *,unsigned int,unsigned int,HSTRING__ * *);
	static tagMIMECSETINFO isoLatin1;
public:
	static long DecodeString(tagMIMECSETINFO *,unsigned char const *,unsigned int,HSTRING__ * *);
	static long DuplicateString(unsigned short const *,unsigned short * *);
	static long EncodeString(unsigned int,unsigned short const *,unsigned int,unsigned char * *,unsigned int *);
	static long GetEncodedLength(unsigned int,unsigned short const *,unsigned int,unsigned int *);
	static long HstringToUtf8(HSTRING__ *,char * *,unsigned int *);
	static long Utf8ToHstring(char const *,unsigned int,HSTRING__ * *);
};

struct TcpEstatsHelper
{
	static long CollectBandwidthStatistics(_SOCKADDR_INET *,_SOCKADDR_INET *,Windows::Networking::Sockets::BandwidthStatistics *);
	static long CollectV4BandwidthStatistics(_MIB_TCPROW_LH *,Windows::Networking::Sockets::BandwidthStatistics *);
	static long CollectV4RoundTripTimeStatistics(_MIB_TCPROW_LH *,Windows::Networking::Sockets::RoundTripTimeStatistics *);
	static long CollectV6BandwidthStatistics(_MIB_TCP6ROW *,Windows::Networking::Sockets::BandwidthStatistics *);
	static long CollectV6RoundTripTimeStatistics(_MIB_TCP6ROW *,Windows::Networking::Sockets::RoundTripTimeStatistics *);
};

struct TcpFlushIoAndWaitCompletionHelper
{
	static long Create(TcpFlushIoAndWaitCompletionHelper * *);
	void ConnectionAborted();
	void NotifyPendingIoOperationCompleted();
	void NotifyPendingIoOperationStarted();
};

struct TcpHelper
{
	static _WA_CONNECTION_DISPATCH const TcpDispatch;
	static unsigned __int64 TcpQueryConnectionSize();
	static unsigned long TcpAbortRequest(_WA_CONNECTION *,unsigned long);
	static unsigned long TcpCancelReceive(_WA_CONNECTION *);
	static unsigned long TcpConnectRequest(_WA_CONNECTION *,_WEB_URI *,_WEB_URI *,_WA_DNS_CACHE *,unsigned long,unsigned long,unsigned long,unsigned __int64 *,unsigned char,void *,void (*)(void *,unsigned long,unsigned __int64),void *,_WEB_URI *);
	static unsigned long TcpDisconnectRequest(_WA_CONNECTION *,void (*)(void *,unsigned long,unsigned __int64),void *);
	static unsigned long TcpInitializeConnection(_WA_CONNECTION *,unsigned long,_WA_CONNECTION_DISPATCH const *,_WA_CONNECTION_DISPATCH const *);
	static unsigned long TcpQueryOptionRequest(_WA_CONNECTION *,_WA_CONNECTION_OPTION,void *,unsigned __int64,unsigned __int64 *);
	static unsigned long TcpReceiveRequest(_WA_CONNECTION *,_WEB_DATA_CHUNK *,unsigned long,unsigned long,unsigned __int64 *,void (*)(void *,unsigned long,unsigned __int64),void *);
	static unsigned long TcpReinitializeRequest(_WA_CONNECTION *);
	static unsigned long TcpSendRequest(_WA_CONNECTION *,_WEB_DATA_CHUNK *,unsigned long,void (*)(void *,unsigned long,unsigned __int64),void *);
	static unsigned long TcpSetOptionRequest(_WA_CONNECTION *,_WA_CONNECTION_OPTION,void *,unsigned __int64);
	static void TcpTerminateConnection(_WA_CONNECTION *);
};

class TcpReadRequestCoordinator
{
	long CreateReadRequestAndAddToReadQueue(TcpReadState,unsigned char *,unsigned int,unsigned long,void *,TcpReadRequest * *);
	void DeleteReadFromReadQueue(TcpReadRequest *);
	void UpgradeFailed();
	void UpgradeSucceeded();
public:
	void QueueReadCompletion(TcpReadRequest *,long,unsigned __int64);
};

class ThreadPoolHelper<AcceptOperationImpl>
{
	class AutoReleaseThreadPoolContext
	{
	protected:
		virtual AcceptOperationImpl * GetObjectW();
		virtual void SetObject(AcceptOperationImpl *);
	};

	static void InvokeCompletionWorker(_TP_CALLBACK_INSTANCE *,void *);
};

class ThreadPoolHelper<HttpRequestContext>
{
	class ComThreadPoolContext
	{
	protected:
		virtual HttpRequestContext * GetObjectW();
		virtual void SetObject(HttpRequestContext *);
	};

	static void InvokeCompletionWorker(_TP_CALLBACK_INSTANCE *,void *);
};

class ThreadPoolHelper<HttpRequestStream::WriteOperation>
{
	class ComThreadPoolContext
	{
	protected:
		virtual HttpRequestStream::WriteOperation * GetObjectW();
		virtual void SetObject(HttpRequestStream::WriteOperation *);
	};

	static void InvokeCompletionWorker(_TP_CALLBACK_INSTANCE *,void *);
public:
	static long QueueComWorkItem(HttpRequestStream::WriteOperation *,void ( HttpRequestStream::WriteOperation::*)(void *),void *,RO_INIT_TYPE,unsigned char);
};

class ThreadPoolHelper<HttpResponseStream>
{
	class ComThreadPoolContext
	{
	protected:
		virtual HttpResponseStream * GetObjectW();
		virtual void SetObject(HttpResponseStream *);
	};

	static void InvokeCompletionWorker(_TP_CALLBACK_INSTANCE *,void *);
public:
	static long QueueComWorkItem(HttpResponseStream *,void ( HttpResponseStream::*)(void *),void *,RO_INIT_TYPE,unsigned char);
};

class ThreadPoolHelper<SocketCancelIoOperationServer>
{
	class ComThreadPoolContext
	{
	protected:
		virtual SocketCancelIoOperationServer * GetObjectW();
		virtual void SetObject(SocketCancelIoOperationServer *);
	};

	static void InvokeCompletionWorker(_TP_CALLBACK_INSTANCE *,void *);
};

class ThreadPoolHelper<SocketOutputStreamBatchedWriter>
{
	class PtrThreadPoolContext
	{
	protected:
		virtual SocketOutputStreamBatchedWriter * GetObjectW();
		virtual void SetObject(SocketOutputStreamBatchedWriter *);
	};

	static void InvokeCompletionWorker(_TP_CALLBACK_INSTANCE *,void *);
public:
	static long QueuePtrWorkItem(SocketOutputStreamBatchedWriter *,void ( SocketOutputStreamBatchedWriter::*)(void *),void *,RO_INIT_TYPE,unsigned char);
};

class ThreadPoolHelper<StreamSocketDirectTcpConnector>
{
	class ComThreadPoolContext
	{
	protected:
		virtual StreamSocketDirectTcpConnector * GetObjectW();
		virtual void SetObject(StreamSocketDirectTcpConnector *);
	};

	static void InvokeCompletionWorker(_TP_CALLBACK_INSTANCE *,void *);
};

class ThreadPoolHelper<StreamSocketReadOperationServer>
{
	class ComThreadPoolContext
	{
	protected:
		virtual StreamSocketReadOperationServer * GetObjectW();
		virtual void SetObject(StreamSocketReadOperationServer *);
	};

	static void InvokeCompletionWorker(_TP_CALLBACK_INSTANCE *,void *);
};

class ThreadPoolHelper<UpgradeToSslOperationImpl>
{
	class ComThreadPoolContext
	{
	protected:
		virtual UpgradeToSslOperationImpl * GetObjectW();
		virtual void SetObject(UpgradeToSslOperationImpl *);
	};

	static void InvokeCompletionWorker(_TP_CALLBACK_INSTANCE *,void *);
};

class ThreadPoolHelper<WebioFacade>
{
	class AutoReleaseThreadPoolContext
	{
	protected:
		virtual WebioFacade * GetObjectW();
		virtual void SetObject(WebioFacade *);
	};

	static void InvokeCompletionWorker(_TP_CALLBACK_INSTANCE *,void *);
public:
	static long QueueAutoReleaseWorkItem(WebioFacade *,void ( WebioFacade::*)(void *),void *,RO_INIT_TYPE,unsigned char);
};

class Tracing
{
	static bool initialized;
	static long GetCertificateErrors(Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::ChainValidationResult> *,unsigned int *,unsigned int * *);
	static long GetCertificateThumbprint(Windows::Security::Cryptography::Certificates::ICertificate *,HSTRING__ * *);
	static long GetIntermediateCertificates(Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::Certificate *> *,unsigned int *,unsigned int *,unsigned short * *);
public:
	long ApiExit(unsigned int,unsigned int,long);
	static Tracing SocketsTracing;
	static void TraceFailure(char *,int,long);
	virtual void AddHttpHeader(unsigned short const *,unsigned short const *);
	virtual void FailedToCreateUriWithBaseUri(unsigned short const *,unsigned short const *);
	virtual void Http2Enabled(void const *);
	virtual void HttpFailureCompletionCallback(unsigned short const *,long);
	virtual void HttpProgressCallback(unsigned short const *,Windows::Web::Http::HttpProgress *);
	virtual void HttpRequestCompletedSynchronously(void const *);
	virtual void HttpRequestEntityBody(void const *,unsigned short const *);
	virtual void HttpRequestSent(void const *);
	virtual void HttpResponseEntityBody(void const *,unsigned short const *);
	virtual void HttpResponseOverLimit(void const *,unsigned int,unsigned int);
	virtual void HttpResponseReceived(void const *,unsigned int,unsigned short const *);
	virtual void InternetConnectFailure(unsigned short const *,unsigned int,unsigned int);
	virtual void InternetConnectWithDefaultCredential(unsigned short const *);
	virtual void InternetConnectWithExplicitCredential(unsigned short const *,unsigned short const *);
	virtual void OpenRequest(unsigned short const *,unsigned short const *,unsigned int);
	virtual void OpenRequestFailure(unsigned short const *,unsigned int);
	virtual void ProcessResponseFailure(unsigned int,IAsyncInfo *,unsigned short const *,long);
	virtual void ReceiveHttpResponseFailure(void const *,unsigned int);
	virtual void RequestAborted(void const *);
	virtual void RequestContextAndHandle(void const *,void const *,unsigned short const *);
	virtual void ResubmitRequest(void const *);
	virtual void ReuseConnectionHandle(void const *,unsigned short const *);
	virtual void SetSendReceiveTimeout(void const *,unsigned int);
	virtual void ShowDialogFailure();
	virtual void StartHttpRequest(void const *,unsigned int);
	virtual void StartReceivingHttpResponse(void const *);
	virtual void UriParsingFailure(unsigned short const *);
	virtual void WriteEntityBody(void const *,unsigned int);
	virtual void WriteEntityBodyFailure(void const *,unsigned int);
	void ApiEnter(unsigned int,unsigned int);
	void AsyncOperationFailure(unsigned int,IAsyncInfo *,long);
	void AsyncOperationStartFailure(unsigned int,IAsyncInfo *,long);
	void EventDeliveryFailure(void *,long);
	void IgnorableServerCertificateErrors(Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::ChainValidationResult> *);
	void RtcCompleteDeliveryActiveAndWaiting(unsigned int,unsigned int,unsigned int,unsigned char);
	void RtcCompleteDeliveryClosedAndWaiting(unsigned int,unsigned int);
	void RtcFlushWaiting(unsigned int,unsigned int);
	void ServerCertificateErrors(Windows::Security::Cryptography::Certificates::ICertificate *,Windows::Networking::Sockets::SocketSslErrorSeverity,Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::ChainValidationResult> *,Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::Certificate *> *);
	void StartReceivingFailed(void *,long);
	void TcpConnectionEstablished(void *,unsigned short const *,unsigned short const *,unsigned short const *);
	void WebSocketEventDeliveryFailure(void *,long);
	void Win32ApiFailure(unsigned int,unsigned int);
	void WriteCompleted(unsigned int,IAsyncInfo *,unsigned int);
};

class UpgradeToSslOperationImpl
{
	long StartUpgradeToSslCore();
	void StartUpgradeToSsl(void *);
protected:
	virtual Windows::Networking::Sockets::Internal::OperationType GetOperationType();
	virtual long OnStart();
	virtual void OnCancel();
public:
	UpgradeToSslOperationImpl(StreamSocketServer *);
	static void UpgradeCompleteCallback(void *,unsigned long,unsigned __int64);
	virtual Windows::Networking::Sockets::Internal::ISocketContext * GetSocketContext();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetResults();
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Completed(Windows::Foundation::IAsyncActionCompletedHandler * *);
	virtual long put_Completed(Windows::Foundation::IAsyncActionCompletedHandler *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~UpgradeToSslOperationImpl();
	void UpgradeCompleted(long,unsigned int);
};

struct UriHelper
{
	static long CreateUriFromString(HSTRING__ *,Windows::Foundation::IUriRuntimeClass * *);
	static long GetKnownScheme(Windows::Foundation::IUriRuntimeClass *,UriHelper::KnownScheme *);
	static long GetUriFactory(Windows::Foundation::IUriRuntimeClassFactory * *);
	static unsigned short const * const FtpScheme;
	static unsigned short const * const FtpsScheme;
	static unsigned short const * const HttpScheme;
	static unsigned short const * const RuntimeUriClassId;
	static unsigned short const * const SecureHttpScheme;
	static unsigned short const * const SecureWebSocketScheme;
	static unsigned short const * const WebSocketScheme;
};

class WebSocketBase
{
	struct ReadOperationContext
	{
		virtual long GetIids(unsigned long *,_GUID * *);
		virtual long GetRuntimeClassName(HSTRING__ * *);
		virtual long GetTrustLevel(TrustLevel *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long get_BufferType(unsigned int *);
		virtual long get_Handle(Windows::Networking::Sockets::Internal::IInternalInternetHandle * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	long ConnectAsyncWithOption(Windows::Foundation::IUriRuntimeClass *,WebSocketBase::ConnectMode,Windows::Foundation::IAsyncAction * *);
	long CreateConnectOperation(Windows::Foundation::IUriRuntimeClass *,WebSocketBase::ConnectMode,Windows::Foundation::IAsyncAction * *);
	long CreateNewRequest();
	long ProcessCloseFrame(long,unsigned short *);
	long QueryNotificationStatus(unsigned long *);
	static _RTL_RUN_ONCE init;
	static int InitializeStatics(_RTL_RUN_ONCE *,void *,void * *);
	static long CheckReservedHeader(Windows::Internal::String const &);
	static unsigned short const * const * const reservedHeaders;
	static unsigned short const * const keyHeaderName;
	static unsigned short const * const protocolHeaderName;
	static unsigned short const * const versionHeaderName;
	static void RetryIoAfterReconnectWorkItem(_TP_CALLBACK_INSTANCE *,void *);
	static void StatusCallback(void *,unsigned __int64,unsigned long,void *,unsigned long);
	static void SyncIoCompleted(_TP_CALLBACK_INSTANCE *,void *);
	void CloseWebSocketHandle();
	void CompleteOperation(_HTTP_WEB_SOCKET_ASYNC_RESULT *,WinInetContext *,void *);
	void SetIdleConnectState(WebSocketBase::ConnectMode);
	void StartCloseHandshake(unsigned short,unsigned char *,unsigned int);
protected:
	long ConfigureWebSocketHandle(WebSocketHandle *);
	virtual long OnClose();
	virtual void OnConnected();
public:
	WebSocketBase();
	WebSocketHandle * GetHandle();
	long CheckConnectedOrReconnecting();
	long CompleteSyncRead(Windows::Networking::Sockets::Internal::IIoOperation *,_HTTP_WEB_SOCKET_BUFFER_TYPE,unsigned int);
	long EnqueueIoOperation(ISerializedIoOperation *,EnqueueOperationResult *);
	long InitializeBase(WebSocketControlBase *,WebSocketInformationBase *);
	long ReconnectAsync();
	long RetryIoAfterReconnect(Windows::Networking::Sockets::Internal::IIoOperation *);
	long SetReconnectionCompleted(long,IWeakReference *,Windows::Networking::Sockets::Internal::IIoOperation *);
	long SetStateConnected(HttpSession *,WebSocketHandle *,WinInetContext *);
	long WaitForReconnectAndGetResult();
	static Windows::Internal::String protocolHeaderNameString;
	static long IsSecureWebSocketsUri(HttpRequest *,bool *,Windows::Foundation::IUriRuntimeClass * *);
	unsigned char TryDequeueIoOperation();
	virtual long ApplySetting(TRANSPORT_SETTING_ID const *,unsigned long,unsigned char const *,unsigned long *,unsigned char * *);
	virtual long Cancel();
	virtual long CheckConnected();
	virtual long CheckConnecting();
	virtual long CheckNewState();
	virtual long CheckNotUpgrading();
	virtual long Close();
	virtual long CloseWithStatus(unsigned short,HSTRING__ *);
	virtual long CompleteDelivery();
	virtual long ConnectAsync(Windows::Foundation::IUriRuntimeClass *,Windows::Foundation::IAsyncAction * *);
	virtual long EnableUnrestrictedReadWrite();
	virtual long Flush();
	virtual long GetIsTransportReady(unsigned char *);
	virtual long GetQualityOfService(Windows::Networking::Sockets::SocketQualityOfService *);
	virtual long GetSocket(Windows::Networking::Sockets::Internal::ISocketHandle * *);
	virtual long QuerySetting(TRANSPORT_SETTING_ID const *,unsigned long,unsigned char const *,unsigned long *,unsigned char * *);
	virtual long SendKeepAlive();
	virtual long SetIdleOperationState(Windows::Networking::Sockets::Internal::OperationType);
	virtual long SetRequestHeader(HSTRING__ *,HSTRING__ *);
	virtual long add_Closed(Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::IWebSocket *,Windows::Networking::Sockets::WebSocketClosedEventArgs *> *,EventRegistrationToken *);
	virtual long get_OutputStream(Windows::Storage::Streams::IOutputStream * *);
	virtual long remove_Closed(EventRegistrationToken);
	virtual ~WebSocketBase();
	void SetCurrentReadOperation(Windows::Networking::Sockets::Internal::IIoOperation *);
};

struct WebSocketClosedEventArgsImpl
{
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Code(unsigned short *);
	virtual long get_Reason(HSTRING__ * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class WebSocketConnectOperationServer
{
	long CompleteWebSocketUpgrade(HttpResponse *);
	long CompleteWinInetWebSocketUpgrade(WebSocketHandle * *,WinInetContext * *);
	long UpdateWebTransportInformation(HttpRequest *,bool *);
	static long SendingRequestCallback(HttpRequest *);
	static void HandleCreatedCallback(HttpRequest *,void *,long *);
	static void RequestCompleteCallback(HttpRequest *,long,HttpResponse *);
	void SqmResult(int);
protected:
	virtual Windows::Networking::Sockets::Internal::OperationType GetOperationType();
	virtual long OnStart();
	virtual void OnCancel();
public:
	WebSocketConnectOperationServer(WebSocketBase *);
	long Initialize(HttpRequest *,Windows::Security::Credentials::IPasswordCredential *,Windows::Security::Credentials::IPasswordCredential *,Windows::Security::Cryptography::Certificates::ICertificate *,WebSocketBase::ConnectMode);
	virtual Windows::Networking::Sockets::Internal::ISocketContext * GetSocketContext();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetResults();
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Completed(Windows::Foundation::IAsyncActionCompletedHandler * *);
	virtual long put_Completed(Windows::Foundation::IAsyncActionCompletedHandler *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~WebSocketConnectOperationServer();
};

class WebSocketControlBase
{
protected:
	virtual long CheckParentSocketState();
public:
	long Initialize(Windows::Networking::Sockets::IWebSocket *);
	long PutClientCertificate(Windows::Security::Cryptography::Certificates::ICertificate *);
	long PutDesiredUnsolicitedPongInterval(Windows::Foundation::TimeSpan);
	virtual long get_IgnorableServerCertificateErrors(Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::ChainValidationResult> * *);
	virtual long get_OutboundBufferSizeInBytes(unsigned int *);
	virtual long get_ProxyCredential(Windows::Security::Credentials::IPasswordCredential * *);
	virtual long get_ServerCredential(Windows::Security::Credentials::IPasswordCredential * *);
	virtual long get_SupportedProtocols(Windows::Foundation::Collections::IVector<HSTRING__ *> * *);
	virtual long put_OutboundBufferSizeInBytes(unsigned int);
	virtual long put_ProxyCredential(Windows::Security::Credentials::IPasswordCredential *);
	virtual long put_ServerCredential(Windows::Security::Credentials::IPasswordCredential *);
	virtual unsigned char HasOutboundBufferSizeChanged();
	~WebSocketControlBase();
};

struct WebSocketErrorFactory
{
	virtual long GetStatus(int,Windows::Web::WebErrorStatus *);
};

struct WebSocketErrorImpl
{
	static TrustLevel InternalGetTrustLevel();
	static unsigned short const * InternalGetRuntimeClassName();
};

class WebSocketFlushOperationServer
{
protected:
	virtual Windows::Networking::Sockets::Internal::OperationType GetOperationType();
	virtual long OnStart();
	virtual void CompleteOperation();
	virtual void OnCancel();
public:
	WebSocketFlushOperationServer();
	virtual Windows::Networking::Sockets::Internal::ISocketContext * GetSocketContext();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetResults(unsigned char *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Completed(Windows::Foundation::IAsyncOperationCompletedHandler<bool> * *);
	virtual long get_Status(ABI::Windows::Foundation::AsyncStatus *);
	virtual long put_Completed(Windows::Foundation::IAsyncOperationCompletedHandler<bool> *);
	virtual unsigned char OperationCompleted();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void FireCompletionAndReleaseOperation();
	virtual void StartIoOperation();
	virtual ~WebSocketFlushOperationServer();
	void CompleteOperation(long);
};

struct WebSocketHandle
{
	long Close(unsigned short,unsigned char *,unsigned long);
	long QueryCloseStatus(unsigned short *,char *,unsigned int,unsigned int *);
	long Receive(unsigned char *,unsigned int,unsigned int *,_HTTP_WEB_SOCKET_BUFFER_TYPE *);
	long Send(_HTTP_WEB_SOCKET_BUFFER_TYPE,unsigned char *,unsigned int);
	long SetOption(unsigned long,void *,unsigned int);
	static long FromSocketContext(Windows::Networking::Sockets::Internal::ISocketContext *,WebSocketHandle * *);
	static void * GetRawHandleFromOperationContext(IInspectable *);
	unsigned char IsValid();
	void CloseHandle();
};

struct WebSocketInformationBase
{
	long Initialize(Windows::Networking::Sockets::IWebSocket *);
	long UpdateWebTransportInformation(void *,Windows::Foundation::IUriRuntimeClass *);
	virtual long ToString(HSTRING__ * *);
	virtual long get_BandwidthStatistics(Windows::Networking::Sockets::BandwidthStatistics *);
	virtual long get_LocalAddress(Windows::Networking::IHostName * *);
	virtual long get_Protocol(HSTRING__ * *);
	virtual long get_ServerCertificate(Windows::Security::Cryptography::Certificates::ICertificate * *);
	virtual long get_ServerCertificateErrorSeverity(Windows::Networking::Sockets::SocketSslErrorSeverity *);
	virtual long get_ServerCertificateErrors(Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::ChainValidationResult> * *);
	virtual long get_ServerIntermediateCertificates(Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate *> * *);
	virtual void SetConnectionInformation(Windows::Networking::IHostName *,_SOCKADDR_INET *,_SOCKADDR_INET *);
	~WebSocketInformationBase();
};

struct WebSocketKeepAliveImpl
{
	static TrustLevel InternalGetTrustLevel();
	static unsigned short const * InternalGetRuntimeClassName();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Run(Windows::ApplicationModel::Background::IBackgroundTaskInstance *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~WebSocketKeepAliveImpl();
};

class WebSocketOutputStream
{
	long WriteAsyncInternal(Windows::Storage::Streams::IBuffer *,Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int> * *);
public:
	virtual long FlushAsync(Windows::Foundation::IAsyncOperation<bool> * *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long WriteAsync(Windows::Storage::Streams::IBuffer *,Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int> * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual ~WebSocketOutputStream();
};

struct WebSocketServerCustomValidationRequestedEventArgsImpl
{
	WebSocketServerCustomValidationRequestedEventArgsImpl();
	long RuntimeClassInitialize(WebSocketInformationBase *);
	long WaitForAllOutstandingDeferrals();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Reject();
	virtual long ToString(HSTRING__ * *);
	virtual long get_ServerCertificate(Windows::Security::Cryptography::Certificates::ICertificate * *);
	virtual long get_ServerCertificateErrorSeverity(Windows::Networking::Sockets::SocketSslErrorSeverity *);
	virtual long get_ServerCertificateErrors(Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::ChainValidationResult> * *);
	virtual long get_ServerIntermediateCertificates(Windows::Foundation::Collections::IVectorView<Windows::Security::Cryptography::Certificates::Certificate *> * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class WebSocketWriteOperationServer
{
	long StartCore();
protected:
	virtual Windows::Networking::Sockets::Internal::OperationType GetOperationType();
	virtual long OnStart();
	virtual void CompleteOperation();
	virtual void OnCancel();
public:
	WebSocketWriteOperationServer(WebSocketBase *);
	long Initialize(Windows::Storage::Streams::IBuffer *,Windows::Networking::Sockets::SocketMessageType,unsigned char);
	virtual Windows::Networking::Sockets::Internal::ISocketContext * GetSocketContext();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetResults(unsigned int *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long IoCompleted(long,unsigned int,IInspectable *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RestartIoOperation();
	virtual long get_Completed(Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<unsigned int,unsigned int> * *);
	virtual long get_Progress(Windows::Foundation::IAsyncOperationProgressHandler<unsigned int,unsigned int> * *);
	virtual long get_Status(ABI::Windows::Foundation::AsyncStatus *);
	virtual long put_Completed(Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<unsigned int,unsigned int> *);
	virtual long put_Progress(Windows::Foundation::IAsyncOperationProgressHandler<unsigned int,unsigned int> *);
	virtual unsigned char OperationCompleted();
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void FireCompletionAndReleaseOperation();
	virtual void StartIoOperation();
	virtual ~WebSocketWriteOperationServer();
};

class WebioFacade
{
	long CreateAndInitializeWebioConnection(unsigned int,void *,_WA_SSL_EXPORT_SECURITY_CONTEXT *,void (*)(void *),Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::ChainValidationResult> *,Windows::Security::Cryptography::Certificates::ICertificate *,_WA_CONNECTION * *);
	long CreateAndInitializeWebioConnectionCore(Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::ChainValidationResult> *,Windows::Security::Cryptography::Certificates::ICertificate *,_WA_CONNECTION *);
	long FlushReadsAndWaitForAllIoToComplete(SocketHandle *);
	long GetServerIntermediateCertificates(Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::Certificate *> * *);
	long Initialize(Windows::Networking::Sockets::Internal::ISocketContext *,unsigned short const *);
	long MapCertificateErrorFlags(unsigned int,Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::ChainValidationResult> * *);
	long UpgradeToSslCore(SocketHandle *,Windows::Networking::IHostName *,_WA_SSL_EXPORT_SECURITY_CONTEXT *,void (*)(void *,unsigned long,unsigned __int64),void *,unsigned char,Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::ChainValidationResult> *,Windows::Security::Cryptography::Certificates::ICertificate *,unsigned long);
	static unsigned int const * const certificateErrorMap;
	static void ReleaseConnection(void *);
	void IoOperationCompleted();
public:
	long GetCertificateInformation(Windows::Networking::Sockets::SocketSslErrorSeverity *,Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::ChainValidationResult> * *,Windows::Security::Cryptography::Certificates::ICertificate * *,Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::Certificate *> * *);
	long UpgradeToSsl(SocketHandle *,Windows::Networking::IHostName *,_WA_SSL_EXPORT_SECURITY_CONTEXT *,void (*)(void *,unsigned long,unsigned __int64),void *,unsigned char,Windows::Foundation::Collections::IVector<Windows::Security::Cryptography::Certificates::ChainValidationResult> *,Windows::Security::Cryptography::Certificates::ICertificate *,unsigned long);
	static long Create(Windows::Networking::Sockets::Internal::ISocketContext *,unsigned short const *,WebioFacade * *);
	static long SetClientCertificateCore(_WA_CONNECTION *,Windows::Security::Cryptography::Certificates::ICertificate *);
	static void FreeExportedSecurityContext(_WA_SSL_EXPORT_SECURITY_CONTEXT *);
	static void ReadCompleteCallback(void *,unsigned long,unsigned __int64);
	static void UpgradeToSslCompleteCallback(void *,unsigned long,unsigned __int64);
	static void WriteCompleteCallback(void *,unsigned long,unsigned __int64);
	virtual long InvokeReadCompletion(void *,long,unsigned __int64);
	virtual long InvokeReadRequest(TcpReadRequest *,unsigned __int64 *);
	void Abort();
	void GracefulCloseWorker(void *);
	void UpgradeComplete(long);
};

struct WinVaultHelper
{
	static long GetPassword(Windows::Security::Credentials::IPasswordCredential *,unsigned short * *);
};

namespace Windows
{
	namespace Foundation
	{
		namespace Collections
		{
			namespace Detail
			{
				void _Cleanup<Networking::IEndpointPair,unsigned int>(Networking::IEndpointPair * * const,unsigned int);
				void _Cleanup<Security::Cryptography::Certificates::ICertificate,unsigned int>(Security::Cryptography::Certificates::ICertificate * * const,unsigned int);
			};

			struct IIterator_impl<HSTRING__ *,1>
			{
				virtual long GetMany(unsigned int,HSTRING__ * *,unsigned int *);
			};

			struct IIterator_impl<IKeyValuePair<HSTRING__ *,Networking::Sockets::SocketActivityInformation *> *,1>
			{
				virtual long GetMany(unsigned int,IKeyValuePair<HSTRING__ *,Networking::Sockets::SocketActivityInformation *> * *,unsigned int *);
			};

			struct IIterator_impl<Internal::AggregateType<Networking::EndpointPair *,Networking::IEndpointPair *>,1>
			{
				virtual long GetMany(unsigned int,Networking::IEndpointPair * *,unsigned int *);
			};

			struct IIterator_impl<Internal::AggregateType<Security::Cryptography::Certificates::Certificate *,Security::Cryptography::Certificates::ICertificate *>,1>
			{
				virtual long GetMany(unsigned int,Security::Cryptography::Certificates::ICertificate * *,unsigned int *);
			};

			struct IVectorView_impl<HSTRING__ *,1>
			{
				virtual long GetMany(unsigned int,unsigned int,HSTRING__ * *,unsigned int *);
			};

			struct IVectorView_impl<Internal::AggregateType<Networking::EndpointPair *,Networking::IEndpointPair *>,1>
			{
				virtual long GetMany(unsigned int,unsigned int,Networking::IEndpointPair * *,unsigned int *);
			};

			struct IVectorView_impl<Internal::AggregateType<Security::Cryptography::Certificates::Certificate *,Security::Cryptography::Certificates::ICertificate *>,1>
			{
				virtual long GetMany(unsigned int,unsigned int,Security::Cryptography::Certificates::ICertificate * *,unsigned int *);
			};

			struct IVector_impl<HSTRING__ *,1>
			{
				virtual long GetMany(unsigned int,unsigned int,HSTRING__ * *,unsigned int *);
				virtual long ReplaceAll(unsigned int,HSTRING__ * *);
			};

			struct IVector_impl<Internal::AggregateType<Networking::EndpointPair *,Networking::IEndpointPair *>,1>
			{
				virtual long GetMany(unsigned int,unsigned int,Networking::IEndpointPair * *,unsigned int *);
				virtual long ReplaceAll(unsigned int,Networking::IEndpointPair * *);
			};

			struct IVector_impl<Internal::AggregateType<Security::Cryptography::Certificates::Certificate *,Security::Cryptography::Certificates::ICertificate *>,1>
			{
				virtual long GetMany(unsigned int,unsigned int,Security::Cryptography::Certificates::ICertificate * *,unsigned int *);
				virtual long ReplaceAll(unsigned int,Security::Cryptography::Certificates::ICertificate * *);
			};

			namespace Internal
			{
				class HashMap<HSTRING__ *,Networking::Sockets::SocketActivityInformation *,DefaultHash<HSTRING__ *>,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<Networking::Sockets::SocketActivityInformation *>,HashMapOptions<HSTRING__ *,Networking::Sockets::SocketActivityInformation *,DefaultLifetimeTraits<HSTRING__ *>,0,1,0> >
				{
					struct Iterator
					{
						Iterator(HashMap<HSTRING__ *,Networking::Sockets::SocketActivityInformation *,DefaultHash<HSTRING__ *>,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<Networking::Sockets::SocketActivityInformation *>,HashMapOptions<HSTRING__ *,Networking::Sockets::SocketActivityInformation *,DefaultLifetimeTraits<HSTRING__ *>,0,1,0> > *);
						virtual long GetIids(unsigned long *,_GUID * *);
						virtual long GetMany(unsigned int,IKeyValuePair<HSTRING__ *,Networking::Sockets::SocketActivityInformation *> * * const,unsigned int *);
						virtual long GetRuntimeClassName(HSTRING__ * *);
						virtual long GetTrustLevel(TrustLevel *);
						virtual long MoveNext(unsigned char *);
						virtual long QueryInterface(_GUID const &,void * *);
						virtual long get_Current(IKeyValuePair<HSTRING__ *,Networking::Sockets::SocketActivityInformation *> * *);
						virtual long get_HasCurrent(unsigned char *);
						virtual unsigned long AddRef();
						virtual unsigned long Release();
					};

					struct View
					{
						virtual long First(IIterator<IKeyValuePair<HSTRING__ *,Networking::Sockets::SocketActivityInformation *> *> * *);
						virtual long GetIids(unsigned long *,_GUID * *);
						virtual long GetRuntimeClassName(HSTRING__ * *);
						virtual long GetTrustLevel(TrustLevel *);
						virtual long HasKey(HSTRING__ *,unsigned char *);
						virtual long Lookup(HSTRING__ *,Networking::Sockets::ISocketActivityInformation * *);
						virtual long QueryInterface(_GUID const &,void * *);
						virtual long Split(IMapView<HSTRING__ *,Networking::Sockets::SocketActivityInformation *> * *,IMapView<HSTRING__ *,Networking::Sockets::SocketActivityInformation *> * *);
						virtual long get_Size(unsigned int *);
						virtual unsigned long AddRef();
						virtual unsigned long Release();
					};

					static void _Free(XWinRT::XHashMap<HSTRING__ *,XWinRT::detail::GitStorageType<Networking::Sockets::ISocketActivityInformation>,HashMap<HSTRING__ *,Networking::Sockets::SocketActivityInformation *,DefaultHash<HSTRING__ *>,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<Networking::Sockets::SocketActivityInformation *>,HashMapOptions<HSTRING__ *,Networking::Sockets::SocketActivityInformation *,DefaultLifetimeTraits<HSTRING__ *>,0,1,0> >::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<Networking::Sockets::ISocketActivityInformation> > > *);
					void _EraseAll(XWinRT::XHashMap<HSTRING__ *,XWinRT::detail::GitStorageType<Networking::Sockets::ISocketActivityInformation>,HashMap<HSTRING__ *,Networking::Sockets::SocketActivityInformation *,DefaultHash<HSTRING__ *>,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<Networking::Sockets::SocketActivityInformation *>,HashMapOptions<HSTRING__ *,Networking::Sockets::SocketActivityInformation *,DefaultLifetimeTraits<HSTRING__ *>,0,1,0> >::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<Networking::Sockets::ISocketActivityInformation> > > *);
				public:
					virtual long Clear();
					virtual long First(IIterator<IKeyValuePair<HSTRING__ *,Networking::Sockets::SocketActivityInformation *> *> * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long GetView(IMapView<HSTRING__ *,Networking::Sockets::SocketActivityInformation *> * *);
					virtual long HasKey(HSTRING__ *,unsigned char *);
					virtual long Insert(HSTRING__ *,Networking::Sockets::ISocketActivityInformation *,unsigned char *);
					virtual long Lookup(HSTRING__ *,Networking::Sockets::ISocketActivityInformation * *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long Remove(HSTRING__ *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct HashMapOptions<HSTRING__ *,Networking::Sockets::SocketActivityInformation *,DefaultLifetimeTraits<HSTRING__ *>,0,1,0>
				{
					static long RaiseEvent(...);
				};

				class NaiveSplitView<HSTRING__ *,Networking::Sockets::SocketActivityInformation *,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<Networking::Sockets::SocketActivityInformation *>,HashMapOptions<HSTRING__ *,Networking::Sockets::SocketActivityInformation *,DefaultLifetimeTraits<HSTRING__ *>,0,1,0> >
				{
					class Chunk
					{
						virtual void dummy();
					};

					struct ChunkElementIterator
					{
						virtual long GetIids(unsigned long *,_GUID * *);
						virtual long GetRuntimeClassName(HSTRING__ * *);
						virtual long GetTrustLevel(TrustLevel *);
						virtual long MoveNext(unsigned char *);
						virtual long QueryInterface(_GUID const &,void * *);
						virtual long get_Current(IKeyValuePair<HSTRING__ *,Networking::Sockets::SocketActivityInformation *> * *);
						virtual long get_HasCurrent(unsigned char *);
						virtual unsigned long AddRef();
						virtual unsigned long Release();
					};

					struct ChunkView
					{
						long Initialize(IIterator<IKeyValuePair<HSTRING__ *,Networking::Sockets::SocketActivityInformation *> *> *);
						virtual long First(IIterator<IKeyValuePair<HSTRING__ *,Networking::Sockets::SocketActivityInformation *> *> * *);
						virtual long GetIids(unsigned long *,_GUID * *);
						virtual long GetRuntimeClassName(HSTRING__ * *);
						virtual long GetTrustLevel(TrustLevel *);
						virtual long HasKey(HSTRING__ *,unsigned char *);
						virtual long Lookup(HSTRING__ *,Networking::Sockets::ISocketActivityInformation * *);
						virtual long QueryInterface(_GUID const &,void * *);
						virtual long Split(IMapView<HSTRING__ *,Networking::Sockets::SocketActivityInformation *> * *,IMapView<HSTRING__ *,Networking::Sockets::SocketActivityInformation *> * *);
						virtual long get_Size(unsigned int *);
						virtual unsigned long AddRef();
						virtual unsigned long Release();
					};

					class SplitIterator
					{
						long EnsureForced();
					public:
						virtual long GetIids(unsigned long *,_GUID * *);
						virtual long GetRuntimeClassName(HSTRING__ * *);
						virtual long GetTrustLevel(TrustLevel *);
						virtual long MoveNext(unsigned char *);
						virtual long QueryInterface(_GUID const &,void * *);
						virtual long get_Current(IKeyValuePair<HSTRING__ *,Networking::Sockets::SocketActivityInformation *> * *);
						virtual long get_HasCurrent(unsigned char *);
						virtual unsigned long AddRef();
						virtual unsigned long Release();
					};

					long Force();
					long Initialize(IMapView<HSTRING__ *,Networking::Sockets::SocketActivityInformation *> *);
				public:
					virtual long First(IIterator<IKeyValuePair<HSTRING__ *,Networking::Sockets::SocketActivityInformation *> *> * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long HasKey(HSTRING__ *,unsigned char *);
					virtual long Lookup(HSTRING__ *,Networking::Sockets::ISocketActivityInformation * *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long Split(IMapView<HSTRING__ *,Networking::Sockets::SocketActivityInformation *> * *,IMapView<HSTRING__ *,Networking::Sockets::SocketActivityInformation *> * *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct SimpleKeyValuePair<HSTRING__ *,Networking::Sockets::SocketActivityInformation *,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<Networking::Sockets::SocketActivityInformation *>,1>
				{
					static long Make(HSTRING__ * const &,XWinRT::detail::GitStorageType<Networking::Sockets::ISocketActivityInformation> const &,SimpleKeyValuePair<HSTRING__ *,Networking::Sockets::SocketActivityInformation *,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<Networking::Sockets::SocketActivityInformation *>,1> * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Key(HSTRING__ * *);
					virtual long get_Value(Networking::Sockets::ISocketActivityInformation * *);
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

				struct SimpleVectorIterator<Networking::EndpointPair *,Vector<Networking::EndpointPair *,DefaultEqualityPredicate<Networking::EndpointPair *>,DefaultLifetimeTraits<Networking::EndpointPair *>,VectorOptions<Networking::EndpointPair *,0,1,0> >,DefaultLifetimeTraits<Networking::EndpointPair *>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorIterator<Networking::EndpointPair *,Vector<Networking::EndpointPair *,DefaultEqualityPredicate<Networking::EndpointPair *>,DefaultLifetimeTraits<Networking::EndpointPair *>,VectorOptions<Networking::EndpointPair *,0,1,0> >,DefaultLifetimeTraits<Networking::EndpointPair *>,XWinRT::IntVersionTag,1>(Vector<Networking::EndpointPair *,DefaultEqualityPredicate<Networking::EndpointPair *>,DefaultLifetimeTraits<Networking::EndpointPair *>,VectorOptions<Networking::EndpointPair *,0,1,0> > *,SimpleVectorIterator<Networking::EndpointPair *,Vector<Networking::EndpointPair *,DefaultEqualityPredicate<Networking::EndpointPair *>,DefaultLifetimeTraits<Networking::EndpointPair *>,VectorOptions<Networking::EndpointPair *,0,1,0> >,DefaultLifetimeTraits<Networking::EndpointPair *>,XWinRT::IntVersionTag,1>::permission);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,Networking::IEndpointPair * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long MoveNext(unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Current(Networking::IEndpointPair * *);
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

				struct SimpleVectorView<Networking::EndpointPair *,Vector<Networking::EndpointPair *,DefaultEqualityPredicate<Networking::EndpointPair *>,DefaultLifetimeTraits<Networking::EndpointPair *>,VectorOptions<Networking::EndpointPair *,0,1,0> >,DefaultLifetimeTraits<Networking::EndpointPair *>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorView<Networking::EndpointPair *,Vector<Networking::EndpointPair *,DefaultEqualityPredicate<Networking::EndpointPair *>,DefaultLifetimeTraits<Networking::EndpointPair *>,VectorOptions<Networking::EndpointPair *,0,1,0> >,DefaultLifetimeTraits<Networking::EndpointPair *>,XWinRT::IntVersionTag,1>(Vector<Networking::EndpointPair *,DefaultEqualityPredicate<Networking::EndpointPair *>,DefaultLifetimeTraits<Networking::EndpointPair *>,VectorOptions<Networking::EndpointPair *,0,1,0> > *,SimpleVectorView<Networking::EndpointPair *,Vector<Networking::EndpointPair *,DefaultEqualityPredicate<Networking::EndpointPair *>,DefaultLifetimeTraits<Networking::EndpointPair *>,VectorOptions<Networking::EndpointPair *,0,1,0> >,DefaultLifetimeTraits<Networking::EndpointPair *>,XWinRT::IntVersionTag,1>::permission);
					virtual long First(IIterator<Networking::EndpointPair *> * *);
					virtual long GetAt(unsigned int,Networking::IEndpointPair * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,Networking::IEndpointPair * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long IndexOf(Networking::IEndpointPair *,unsigned int *,unsigned char *);
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

				class Vector<Networking::EndpointPair *,DefaultEqualityPredicate<Networking::EndpointPair *>,DefaultLifetimeTraits<Networking::EndpointPair *>,VectorOptions<Networking::EndpointPair *,0,1,0> >
				{
					long IndexOfInternal(XWinRT::detail::GitStorageType<Networking::IEndpointPair> *,unsigned int,Networking::IEndpointPair *,unsigned int *,unsigned char *);
					long InsertAtInternal(unsigned int,Networking::IEndpointPair *,bool);
					long RemoveAtInternal(unsigned int,bool);
					long ResizeStorage(unsigned int);
					static void _Free(XWinRT::detail::GitStorageType<Networking::IEndpointPair> *,unsigned int);
				public:
					virtual long Append(Networking::IEndpointPair *);
					virtual long Clear();
					virtual long First(IIterator<Networking::EndpointPair *> * *);
					virtual long GetAt(unsigned int,Networking::IEndpointPair * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,Networking::IEndpointPair * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long GetView(IVectorView<Networking::EndpointPair *> * *);
					virtual long IndexOf(Networking::IEndpointPair *,unsigned int *,unsigned char *);
					virtual long InsertAt(unsigned int,Networking::IEndpointPair *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long RemoveAt(unsigned int);
					virtual long RemoveAtEnd();
					virtual long ReplaceAll(unsigned int,Networking::IEndpointPair * *);
					virtual long SetAt(unsigned int,Networking::IEndpointPair *);
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
					static void _Free(XWinRT::detail::GitStorageType<Security::Cryptography::Certificates::ICertificate> *,unsigned int);
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

				struct VectorOptions<HSTRING__ *,0,1,0>
				{
					static long RaiseEvent(...);
				};

				struct VectorOptions<Networking::EndpointPair *,0,1,0>
				{
					static long RaiseEvent(...);
				};

				struct VectorOptions<Security::Cryptography::Certificates::Certificate *,0,1,0>
				{
					static long RaiseEvent(...);
				};

			};

		};

		long ActivateInstance<IBluetoothBroker>(HSTRING__ *,IBluetoothBroker * *);
		long ActivateInstance<IRfcommHelper>(HSTRING__ *,IRfcommHelper * *);
	};

	namespace Internal
	{
		namespace Details
		{
			struct Git
			{
				long Acquire();
			};

			struct GitInvokeHelper<Foundation::ITypedEventHandler<Networking::Sockets::DatagramSocket *,Networking::Sockets::DatagramSocketMessageReceivedEventArgs *>,GitPtrSupportsAgile<Foundation::ITypedEventHandler<Networking::Sockets::DatagramSocket *,Networking::Sockets::DatagramSocketMessageReceivedEventArgs *> >,2>
			{
				virtual long Invoke(Networking::Sockets::IDatagramSocket *,Networking::Sockets::IDatagramSocketMessageReceivedEventArgs *);
			};

			struct GitInvokeHelper<Foundation::ITypedEventHandler<Networking::Sockets::IWebSocket *,Networking::Sockets::WebSocketClosedEventArgs *>,GitPtrSupportsAgile<Foundation::ITypedEventHandler<Networking::Sockets::IWebSocket *,Networking::Sockets::WebSocketClosedEventArgs *> >,2>
			{
				virtual long Invoke(Networking::Sockets::IWebSocket *,Networking::Sockets::IWebSocketClosedEventArgs *);
			};

			struct GitInvokeHelper<Foundation::ITypedEventHandler<Networking::Sockets::MessageWebSocket *,Networking::Sockets::MessageWebSocketMessageReceivedEventArgs *>,GitPtrSupportsAgile<Foundation::ITypedEventHandler<Networking::Sockets::MessageWebSocket *,Networking::Sockets::MessageWebSocketMessageReceivedEventArgs *> >,2>
			{
				virtual long Invoke(Networking::Sockets::IMessageWebSocket *,Networking::Sockets::IMessageWebSocketMessageReceivedEventArgs *);
			};

			struct GitInvokeHelper<Foundation::ITypedEventHandler<Networking::Sockets::StreamSocketListener *,Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs *>,GitPtrSupportsAgile<Foundation::ITypedEventHandler<Networking::Sockets::StreamSocketListener *,Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs *> >,2>
			{
				virtual long Invoke(Networking::Sockets::IStreamSocketListener *,Networking::Sockets::IStreamSocketListenerConnectionReceivedEventArgs *);
			};

			Details::Git _git;
			long CreateGitHelper<Foundation::ITypedEventHandler<Networking::Sockets::IWebSocket *,Networking::Sockets::WebSocketClosedEventArgs *>,GitPtrSupportsAgile<Foundation::ITypedEventHandler<Networking::Sockets::IWebSocket *,Networking::Sockets::WebSocketClosedEventArgs *> > >(Foundation::ITypedEventHandler<Networking::Sockets::IWebSocket *,Networking::Sockets::WebSocketClosedEventArgs *> *,Foundation::ITypedEventHandler<Networking::Sockets::IWebSocket *,Networking::Sockets::WebSocketClosedEventArgs *> * *);
			long CreateGitHelper<Foundation::ITypedEventHandler<Networking::Sockets::MessageWebSocket *,Networking::Sockets::MessageWebSocketMessageReceivedEventArgs *>,GitPtrSupportsAgile<Foundation::ITypedEventHandler<Networking::Sockets::MessageWebSocket *,Networking::Sockets::MessageWebSocketMessageReceivedEventArgs *> > >(Foundation::ITypedEventHandler<Networking::Sockets::MessageWebSocket *,Networking::Sockets::MessageWebSocketMessageReceivedEventArgs *> *,Foundation::ITypedEventHandler<Networking::Sockets::MessageWebSocket *,Networking::Sockets::MessageWebSocketMessageReceivedEventArgs *> * *);
			long CreateGitHelper<Foundation::ITypedEventHandler<Networking::Sockets::StreamSocketListener *,Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs *>,GitPtrSupportsAgile<Foundation::ITypedEventHandler<Networking::Sockets::StreamSocketListener *,Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs *> > >(Foundation::ITypedEventHandler<Networking::Sockets::StreamSocketListener *,Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs *> *,Foundation::ITypedEventHandler<Networking::Sockets::StreamSocketListener *,Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs *> * *);
		};

		struct GitEventSourceSupportsAgile<Foundation::ITypedEventHandler<Networking::Sockets::StreamSocketListener *,Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2> >
		{
			long Add(Foundation::ITypedEventHandler<Networking::Sockets::StreamSocketListener *,Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs *> *,EventRegistrationToken *);
		};

		struct GitPtrSupportsAgile<Foundation::IAsyncActionCompletedHandler>
		{
			long CopyLocal<Foundation::IAsyncActionCompletedHandler>(Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Foundation::IAsyncActionCompletedHandler> >);
			long Initialize<Foundation::IAsyncActionCompletedHandler>(Foundation::IAsyncActionCompletedHandler *);
		};

		struct GitPtrSupportsAgile<Foundation::IAsyncOperationProgressHandler<Storage::Streams::IBuffer *,unsigned int> >
		{
			long Initialize<Foundation::IAsyncOperationProgressHandler<Storage::Streams::IBuffer *,unsigned int> >(Foundation::IAsyncOperationProgressHandler<Storage::Streams::IBuffer *,unsigned int> *);
		};

		struct GitPtrSupportsAgile<Foundation::IAsyncOperationProgressHandler<unsigned int,unsigned int> >
		{
			long Initialize<Foundation::IAsyncOperationProgressHandler<unsigned int,unsigned int> >(Foundation::IAsyncOperationProgressHandler<unsigned int,unsigned int> *);
		};

		struct GitPtrSupportsAgile<Security::Credentials::IPasswordCredential>
		{
			long Initialize<Security::Credentials::IPasswordCredential>(Security::Credentials::IPasswordCredential *);
		};

		struct GitPtrSupportsAgile<Storage::Streams::IBuffer>
		{
			long As<Storage::Streams::IBuffer>(Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Storage::Streams::IBuffer> >);
			long Initialize<Storage::Streams::IBuffer>(Storage::Streams::IBuffer *);
		};

		struct GitPtrSupportsAgile<Storage::Streams::IDataReader>
		{
			long Initialize<Storage::Streams::IDataReader>(Microsoft::WRL::ComPtr<Storage::Streams::IDataReader> const &);
		};

		struct GitPtrSupportsAgile<Storage::Streams::IDataReaderStatics>
		{
			long Initialize<Storage::Streams::IDataReaderStatics>(Storage::Streams::IDataReaderStatics *);
		};

		class String
		{
			long _InitializeHelper(unsigned short const *);
		};

		class StringReference
		{
			void _ConstructorHelper(unsigned short const *);
		};

		_RTL_RUN_ONCE s_bIsEnvironmentCheckDone;
	};

	namespace Storage
	{
		namespace Streams
		{
			struct CBuffer<CBuffer_StandardCleanup,DefaultMarshaler>
			{
				CBuffer<CBuffer_StandardCleanup,DefaultMarshaler>(unsigned int,unsigned int,unsigned char *,CBuffer_StandardCleanup);
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct CBuffer<void (*)(unsigned char *),DefaultMarshaler>
			{
				CBuffer<void (*)(unsigned char *),DefaultMarshaler>(unsigned int,unsigned int,unsigned char *,void (*)(unsigned char *));
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

			class CBuffer_Impl<void (*)(unsigned char *),DefaultMarshaler>
			{
			protected:
				virtual ~CBuffer_Impl<void (*)(unsigned char *),DefaultMarshaler>();
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

			class DefaultMarshaler
			{
				long _EnsureInit();
			};

			long MakeCBuffer<CBuffer_StandardCleanup>(unsigned int,unsigned int,unsigned char *,Streams::CBuffer_StandardCleanup,Streams::IBuffer * *);
			long MakeCBuffer<void (*)(unsigned char *)>(unsigned int,unsigned int,unsigned char *,void (*)(unsigned char *),Streams::IBuffer * *);
		};

	};

};

struct WininetHandleReferenceCounter
{
	void Abort();
	void ReleaseHandleReference();
};

struct WininetHandleReferenceHolder
{
	WininetHandleReferenceHolder(WininetHandleReferenceCounter *);
	~WininetHandleReferenceHolder();
};

struct WinsockHelper
{
	long InitializeWinsock();
	static WinsockHelper Instance;
	static long GetDefaultSendBufferSize(unsigned int *);
	static long MapWinsockError(int);
	static unsigned char IsWildcardAddress(sockaddr *);
	static void ConvertToV4MappedAddressIfNeeded(_SOCKADDR_INET *);
};

namespace XWinRT
{
	struct AutoValue<detail::GitStorageType<Windows::Networking::Sockets::ISocketActivityInformation>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Networking::Sockets::SocketActivityInformation *> >
	{
		AutoValue<detail::GitStorageType<Windows::Networking::Sockets::ISocketActivityInformation>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Networking::Sockets::SocketActivityInformation *> ><Windows::Networking::Sockets::ISocketActivityInformation *>(Windows::Networking::Sockets::ISocketActivityInformation * const &,long *);
	};

	struct InterfaceLifetimeTraits
	{
		static long Construct<Windows::Networking::IEndpointPair>(detail::GitStorageType<Windows::Networking::IEndpointPair> *,Windows::Networking::IEndpointPair *);
		static long Construct<Windows::Security::Cryptography::Certificates::ICertificate>(detail::GitStorageType<Windows::Security::Cryptography::Certificates::ICertificate> *,Windows::Security::Cryptography::Certificates::ICertificate *);
		static void Destroy<Windows::Networking::IEndpointPair>(detail::GitStorageType<Windows::Networking::IEndpointPair> *);
		static void Destroy<Windows::Networking::Sockets::ISocketActivityInformation>(detail::GitStorageType<Windows::Networking::Sockets::ISocketActivityInformation> *);
		static void Destroy<Windows::Security::Cryptography::Certificates::ICertificate>(detail::GitStorageType<Windows::Security::Cryptography::Certificates::ICertificate> *);
	};

	struct StorageTempTraits<detail::GitStorageType<Windows::Networking::IEndpointPair>,Windows::Networking::IEndpointPair *,detail::GitStorageType<Windows::Networking::IEndpointPair>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Networking::EndpointPair *> >
	{
		static long ResolveDemand(detail::GitStorageType<Windows::Networking::IEndpointPair> *,Windows::Networking::IEndpointPair * *);
	};

	struct StorageTempTraits<detail::GitStorageType<Windows::Security::Cryptography::Certificates::ICertificate>,Windows::Security::Cryptography::Certificates::ICertificate *,detail::GitStorageType<Windows::Security::Cryptography::Certificates::ICertificate>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Cryptography::Certificates::Certificate *> >
	{
		static long ResolveDemand(detail::GitStorageType<Windows::Security::Cryptography::Certificates::ICertificate> *,Windows::Security::Cryptography::Certificates::ICertificate * *);
	};

	struct StringEquals
	{
		long operator()(HSTRING__ *,HSTRING__ *,bool *);
	};

	class XHashMap<HSTRING__ *,detail::GitStorageType<Windows::Networking::Sockets::ISocketActivityInformation>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,Windows::Networking::Sockets::SocketActivityInformation *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Networking::Sockets::SocketActivityInformation *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,Windows::Networking::Sockets::SocketActivityInformation *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0> >::KeyTraits,CElementTraits<detail::GitStorageType<Windows::Networking::Sockets::ISocketActivityInformation> > >
	{
		long FreeNode(XHashMap<HSTRING__ *,detail::GitStorageType<Windows::Networking::Sockets::ISocketActivityInformation>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,Windows::Networking::Sockets::SocketActivityInformation *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Networking::Sockets::SocketActivityInformation *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,Windows::Networking::Sockets::SocketActivityInformation *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0> >::KeyTraits,CElementTraits<detail::GitStorageType<Windows::Networking::Sockets::ISocketActivityInformation> > >::CNode *);
		long GetNode(HSTRING__ * const &,unsigned int &,unsigned int &,XHashMap<HSTRING__ *,detail::GitStorageType<Windows::Networking::Sockets::ISocketActivityInformation>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,Windows::Networking::Sockets::SocketActivityInformation *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Networking::Sockets::SocketActivityInformation *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,Windows::Networking::Sockets::SocketActivityInformation *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0> >::KeyTraits,CElementTraits<detail::GitStorageType<Windows::Networking::Sockets::ISocketActivityInformation> > >::CNode * &,XHashMap<HSTRING__ *,detail::GitStorageType<Windows::Networking::Sockets::ISocketActivityInformation>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,Windows::Networking::Sockets::SocketActivityInformation *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Networking::Sockets::SocketActivityInformation *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,Windows::Networking::Sockets::SocketActivityInformation *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0> >::KeyTraits,CElementTraits<detail::GitStorageType<Windows::Networking::Sockets::ISocketActivityInformation> > >::CNode * *);
		long NewNode(HSTRING__ * const &,unsigned int,unsigned int,XHashMap<HSTRING__ *,detail::GitStorageType<Windows::Networking::Sockets::ISocketActivityInformation>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,Windows::Networking::Sockets::SocketActivityInformation *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Networking::Sockets::SocketActivityInformation *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,Windows::Networking::Sockets::SocketActivityInformation *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0> >::KeyTraits,CElementTraits<detail::GitStorageType<Windows::Networking::Sockets::ISocketActivityInformation> > >::CNode * *);
		unsigned int PickSize(unsigned __int64);
		void UpdateRehashThresholds();
	public:
		XHashMap<HSTRING__ *,detail::GitStorageType<Windows::Networking::Sockets::ISocketActivityInformation>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,Windows::Networking::Sockets::SocketActivityInformation *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Networking::Sockets::SocketActivityInformation *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,Windows::Networking::Sockets::SocketActivityInformation *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0> >::KeyTraits,CElementTraits<detail::GitStorageType<Windows::Networking::Sockets::ISocketActivityInformation> > >(void *,unsigned int,float,float,float,unsigned int);
		XHashMap<HSTRING__ *,detail::GitStorageType<Windows::Networking::Sockets::ISocketActivityInformation>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,Windows::Networking::Sockets::SocketActivityInformation *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Networking::Sockets::SocketActivityInformation *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,Windows::Networking::Sockets::SocketActivityInformation *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0> >::KeyTraits,CElementTraits<detail::GitStorageType<Windows::Networking::Sockets::ISocketActivityInformation> > >::CPair * GetNext(TXPOSITION * &);
		long InitHashTable(unsigned int,bool,bool *);
		long Lookup(HSTRING__ * const &,XHashMap<HSTRING__ *,detail::GitStorageType<Windows::Networking::Sockets::ISocketActivityInformation>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,Windows::Networking::Sockets::SocketActivityInformation *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Networking::Sockets::SocketActivityInformation *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,Windows::Networking::Sockets::SocketActivityInformation *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0> >::KeyTraits,CElementTraits<detail::GitStorageType<Windows::Networking::Sockets::ISocketActivityInformation> > >::CPair * *);
		long Rehash(unsigned int);
		long RemoveAll();
		long SetAt(HSTRING__ * const &,detail::GitStorageType<Windows::Networking::Sockets::ISocketActivityInformation> const &,TXPOSITION * *);
	};

	namespace detail
	{
		struct ReentrancyGuard<0>
		{
			ReentrancyGuard<0>(...);
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
		long (* g_pfnRtlDisownModuleHeapAllocation)(void *,void *);
		long GetLastErrorFailHr();
		long ReportFailure_GetLastErrorHr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		unsigned char (* g_pfnDllShutdownInProgress)();
		unsigned long ReportFailure_GetLastError(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		unsigned short * LogStringPrintf(unsigned short *,unsigned short const *,unsigned short const *,...);
		void (* g_pfnDebugBreak)();
		void (* g_pfnGetContextAndNotifyFailure)(FailureInfo *,char *,unsigned __int64);
		void (* g_pfnLoggingCallback)(FailureInfo const &);
		void (* g_pfnOriginateCallback)(FailureInfo const &);
		void (* g_pfnRaiseFailFastException)(_EXCEPTION_RECORD *,_CONTEXT *,unsigned long);
		void (* g_pfnTelemetryCallback)(bool,FailureInfo const &);
		void (* g_pfnThrowResultException)(FailureInfo const &);
		void CloseHandle(void *);
		void DebugBreak();
		void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
		void LogFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,bool,unsigned short *,unsigned __int64,char *,unsigned __int64,FailureInfo *);
		void ReleaseMutex(void *);
		void ReportFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Hr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long);
		void WilDynamicLoadRaiseFailFastException(_EXCEPTION_RECORD *,_CONTEXT *,unsigned long);
		void WilFailFast(FailureInfo const &);
		void WilRaiseFailFastException(_EXCEPTION_RECORD *,_CONTEXT *,unsigned long);
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
		public:
			static long TryGetPointer(unsigned short const *,void * *);
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
	bool (* g_pfnWilFailFast)(wil::FailureInfo const &);
	bool g_fBreakOnFailure;
	bool g_fIsDebuggerPresent;
	long GetFailureLogString(unsigned short *,unsigned __int64,wil::FailureInfo const &);
	void ThrowResultException(wil::FailureInfo const &);
};

HINSTANCE__ * LoadProximityLibrary();
Microsoft::WRL::Details::CreatorMap const __object_DatagramSocketServer;
Microsoft::WRL::Details::CreatorMap const __object_MessageWebSocketServer;
Microsoft::WRL::Details::CreatorMap const __object_SocketActivityContextImpl;
Microsoft::WRL::Details::CreatorMap const __object_SocketActivityInformationImpl;
Microsoft::WRL::Details::CreatorMap const __object_SocketActivityTriggerDetailsImpl_COM;
Microsoft::WRL::Details::CreatorMap const __object_SocketActivityTriggerImpl;
Microsoft::WRL::Details::CreatorMap const __object_SocketErrorImpl;
Microsoft::WRL::Details::CreatorMap const __object_StreamSocketListenerImpl;
Microsoft::WRL::Details::CreatorMap const __object_StreamSocketServer;
Microsoft::WRL::Details::CreatorMap const __object_StreamWebSocketServer;
Microsoft::WRL::Details::CreatorMap const __object_WebSocketErrorImpl;
Microsoft::WRL::Details::CreatorMap const __object_WebSocketKeepAliveImpl;
Microsoft::WRL::Details::FactoryCache __objectFactory__DatagramSocketServer;
Microsoft::WRL::Details::FactoryCache __objectFactory__MessageWebSocketServer;
Microsoft::WRL::Details::FactoryCache __objectFactory__SocketActivityContextImpl;
Microsoft::WRL::Details::FactoryCache __objectFactory__SocketActivityInformationImpl;
Microsoft::WRL::Details::FactoryCache __objectFactory__SocketActivityTriggerDetailsImpl_COM;
Microsoft::WRL::Details::FactoryCache __objectFactory__SocketActivityTriggerImpl;
Microsoft::WRL::Details::FactoryCache __objectFactory__SocketErrorImpl;
Microsoft::WRL::Details::FactoryCache __objectFactory__StreamSocketListenerImpl;
Microsoft::WRL::Details::FactoryCache __objectFactory__StreamSocketServer;
Microsoft::WRL::Details::FactoryCache __objectFactory__StreamWebSocketServer;
Microsoft::WRL::Details::FactoryCache __objectFactory__WebSocketErrorImpl;
Microsoft::WRL::Details::FactoryCache __objectFactory__WebSocketKeepAliveImpl;
_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
_MIDL_STUBLESS_PROXY_INFO const ncbservice_ProxyInfo;
_MIDL_STUB_DESC const ncbservice_StubDesc;
_NDR64_CONFORMANT_STRING_FORMAT const __midl_frag182;
_NDR64_CONTEXT_HANDLE_FORMAT const __midl_frag14;
_NDR64_CONTEXT_HANDLE_FORMAT const __midl_frag18;
_NDR64_CONTEXT_HANDLE_FORMAT const __midl_frag47;
_NDR64_POINTER_FORMAT const __midl_frag106;
_NDR64_POINTER_FORMAT const __midl_frag107;
_NDR64_POINTER_FORMAT const __midl_frag126;
_NDR64_POINTER_FORMAT const __midl_frag127;
_NDR64_POINTER_FORMAT const __midl_frag132;
_NDR64_POINTER_FORMAT const __midl_frag133;
_NDR64_POINTER_FORMAT const __midl_frag149;
_NDR64_POINTER_FORMAT const __midl_frag150;
_NDR64_POINTER_FORMAT const __midl_frag181;
_NDR64_POINTER_FORMAT const __midl_frag65;
_NDR64_POINTER_FORMAT const __midl_frag70;
_NDR64_POINTER_FORMAT const __midl_frag82;
__midl_frag108_t const __midl_frag108;
__midl_frag109_t const __midl_frag109;
__midl_frag111_t const __midl_frag111;
__midl_frag113_t const __midl_frag113;
__midl_frag120_t const __midl_frag120;
__midl_frag129_t const __midl_frag129;
__midl_frag134_t const __midl_frag134;
__midl_frag135_t const __midl_frag135;
__midl_frag136_t const __midl_frag136;
__midl_frag137_t const __midl_frag137;
__midl_frag139_t const __midl_frag139;
__midl_frag146_t const __midl_frag146;
__midl_frag151_t const __midl_frag151;
__midl_frag153_t const __midl_frag153;
__midl_frag156_t const __midl_frag156;
__midl_frag162_t const __midl_frag162;
__midl_frag16_t const __midl_frag16;
__midl_frag175_t const __midl_frag175;
__midl_frag180_t const __midl_frag180;
__midl_frag20_t const __midl_frag20;
__midl_frag28_t const __midl_frag28;
__midl_frag2_t const __midl_frag2;
__midl_frag32_t const __midl_frag32;
__midl_frag37_t const __midl_frag37;
__midl_frag40_t const __midl_frag40;
__midl_frag45_t const __midl_frag45;
__midl_frag49_t const __midl_frag49;
__midl_frag4_t const __midl_frag4;
__midl_frag52_t const __midl_frag52;
__midl_frag5_t const __midl_frag5;
__midl_frag66_t const __midl_frag66;
__midl_frag67_t const __midl_frag67;
__midl_frag71_t const __midl_frag71;
__midl_frag73_t const __midl_frag73;
__midl_frag74_t const __midl_frag74;
__midl_frag76_t const __midl_frag76;
__midl_frag77_t const __midl_frag77;
__midl_frag79_t const __midl_frag79;
__midl_frag80_t const __midl_frag80;
__midl_frag83_t const __midl_frag83;
__midl_frag84_t const __midl_frag84;
__midl_frag88_t const __midl_frag88;
__midl_frag92_t const __midl_frag92;
__midl_frag93_t const __midl_frag93;
__midl_frag95_t const __midl_frag95;
__midl_frag97_t const __midl_frag97;
__midl_frag99_t const __midl_frag99;
_ncbservice_MIDL_PROC_FORMAT_STRING const ncbservice__MIDL_ProcFormatString;
_ncbservice_MIDL_TYPE_FORMAT_STRING const ncbservice__MIDL_TypeFormatString;
long IsProximityHostname(Windows::Networking::IHostName *,bool *);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
unsigned char const __midl_frag105;
unsigned char const __midl_frag178;
unsigned char const __midl_frag183;
unsigned char const __midl_frag6;
unsigned char const __midl_frag63;
unsigned char const __midl_frag81;
unsigned short const * const DatagramSocketBindAsyncOperationName;
unsigned short const * const DatagramSocketConnectAsyncOperationName;
unsigned short const * const InterfaceName_Windows_Foundation_IAsyncAction;
unsigned short const * const InterfaceName_Windows_Networking_Sockets_Internal_IIoOperation;
unsigned short const * const InterfaceName_Windows_Networking_Sockets_Internal_ISocketReadBuffer;
unsigned short const * const InterfaceName_Windows_Networking_Sockets_Internal_IWebSocketOperationContext;
unsigned short const * const InterfaceName_Windows_Storage_Streams_IInputStream;
unsigned short const * const InterfaceName_Windows_Storage_Streams_IOutputStream;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Background_SocketActivityTrigger;
unsigned short const * const RuntimeClass_Windows_Foundation_Deferral;
unsigned short const * const RuntimeClass_Windows_Foundation_Diagnostics_AsyncCausalityTracer;
unsigned short const * const RuntimeClass_Windows_Foundation_PropertyValue;
unsigned short const * const RuntimeClass_Windows_Networking_Connectivity_NetworkInformation;
unsigned short const * const RuntimeClass_Windows_Networking_Sockets_DatagramSocket;
unsigned short const * const RuntimeClass_Windows_Networking_Sockets_DatagramSocketControl;
unsigned short const * const RuntimeClass_Windows_Networking_Sockets_DatagramSocketInformation;
unsigned short const * const RuntimeClass_Windows_Networking_Sockets_DatagramSocketMessageReceivedEventArgs;
unsigned short const * const RuntimeClass_Windows_Networking_Sockets_MessageWebSocket;
unsigned short const * const RuntimeClass_Windows_Networking_Sockets_MessageWebSocketControl;
unsigned short const * const RuntimeClass_Windows_Networking_Sockets_MessageWebSocketInformation;
unsigned short const * const RuntimeClass_Windows_Networking_Sockets_MessageWebSocketMessageReceivedEventArgs;
unsigned short const * const RuntimeClass_Windows_Networking_Sockets_SocketActivityContext;
unsigned short const * const RuntimeClass_Windows_Networking_Sockets_SocketActivityInformation;
unsigned short const * const RuntimeClass_Windows_Networking_Sockets_SocketActivityTriggerDetails;
unsigned short const * const RuntimeClass_Windows_Networking_Sockets_SocketError;
unsigned short const * const RuntimeClass_Windows_Networking_Sockets_StreamSocket;
unsigned short const * const RuntimeClass_Windows_Networking_Sockets_StreamSocketControl;
unsigned short const * const RuntimeClass_Windows_Networking_Sockets_StreamSocketInformation;
unsigned short const * const RuntimeClass_Windows_Networking_Sockets_StreamSocketListener;
unsigned short const * const RuntimeClass_Windows_Networking_Sockets_StreamSocketListenerConnectionReceivedEventArgs;
unsigned short const * const RuntimeClass_Windows_Networking_Sockets_StreamSocketListenerControl;
unsigned short const * const RuntimeClass_Windows_Networking_Sockets_StreamSocketListenerInformation;
unsigned short const * const RuntimeClass_Windows_Networking_Sockets_StreamWebSocket;
unsigned short const * const RuntimeClass_Windows_Networking_Sockets_StreamWebSocketControl;
unsigned short const * const RuntimeClass_Windows_Networking_Sockets_StreamWebSocketInformation;
unsigned short const * const RuntimeClass_Windows_Networking_Sockets_WebSocketClosedEventArgs;
unsigned short const * const RuntimeClass_Windows_Networking_Sockets_WebSocketError;
unsigned short const * const RuntimeClass_Windows_Networking_Sockets_WebSocketKeepAlive;
unsigned short const * const RuntimeClass_Windows_Networking_Sockets_WebSocketServerCustomValidationRequestedEventArgs;
unsigned short const * const RuntimeClass_Windows_Security_Cryptography_Certificates_Certificate;
unsigned short const * const RuntimeClass_Windows_Storage_Streams_DataReader;
unsigned short const * const SocketCancelIoOperationName;
unsigned short const * const StreamSocketConnectAsyncOperationName;
unsigned short const * const StreamSocketConnectorBaseName;
unsigned short const * const StreamSocketListenerBindAsyncOperationName;
unsigned short const * const StreamSocketUpgradeToSslAsyncOperationName;
unsigned short const * const WebSocketConnectAsyncOperationName;
void * operator new(unsigned __int64);
void * operator new(unsigned __int64,std::nothrow_t const &);
void * operator new[](unsigned __int64,std::nothrow_t const &);
void Delete<ConnectedSocketQueue *>(ConnectedSocketQueue *);
void Delete<EventRegistrationHandleCache *>(EventRegistrationHandleCache *);
void Delete<FlushRequest *>(FlushRequest *);
void Delete<HttpContent *>(HttpContent *);
void Delete<HttpContent::Segment *>(HttpContent::Segment *);
void Delete<HttpHeaderCollection *>(HttpHeaderCollection *);
void Delete<IoRequest *>(IoRequest *);
void Delete<IoRequestRecord *>(IoRequestRecord *);
void Delete<NameValueCollection<AutoHINTERNET>::Entry *>(NameValueCollection<AutoHINTERNET>::Entry *);
void Delete<NcbConnector *>(NcbConnector *);
void Delete<SocketOutputStream::BatchedSendContext *>(SocketOutputStream::BatchedSendContext *);
void Delete<SocketOutputStreamBatchedWriter::BatchedSendContext *>(SocketOutputStreamBatchedWriter::BatchedSendContext *);
void Delete<TcpReadRequestCoordinator *>(TcpReadRequestCoordinator *);
void Delete<WinInetContext *>(WinInetContext *);
void Delete<Windows::Internal::GitEventSourceSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::StreamSocketListener *,Windows::Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2> > *>(Windows::Internal::GitEventSourceSupportsAgile<Windows::Foundation::ITypedEventHandler<Windows::Networking::Sockets::StreamSocketListener *,Windows::Networking::Sockets::StreamSocketListenerConnectionReceivedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2> > *);
void Delete<WininetHandleReferenceHolder *>(WininetHandleReferenceHolder *);
void Delete<WriteRequest *>(WriteRequest *);
void DeleteArray<unsigned char *>(unsigned char *);
void ReleasePtr<AutoHINTERNET::InternetHandle *>(AutoHINTERNET::InternetHandle *);
void ReleasePtr<HttpResponse *>(HttpResponse *);
void ReleasePtr<MediaFoundationLibrary::Queue *>(MediaFoundationLibrary::Queue *);
void TraceFailure(char *,int,long);
void operator delete(void *);
