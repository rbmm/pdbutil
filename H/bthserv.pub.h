namespace Microsoft
{
	namespace Bluetooth
	{
		namespace Services
		{
			namespace BthServ
			{
				class BthServDeviceRefresher
				{
					long RefreshBrServicesForDevice(BluetoothBRAddress const &);
					static void RefreshBrServicesCallBack(_TP_CALLBACK_INSTANCE *,void *,_TP_WORK *);
				};

				_BLUETOOTH_SDP_RECORD * BthpInnerRecord(_BLUETOOTH_SDP_RECORD *,void *,unsigned long *);
				_BLUETOOTH_SDP_RECORD * BthpNextRecord(_BLUETOOTH_SDP_RECORD *,void *);
				_BLUETOOTH_SDP_RECORD * BthpNextRecordSequence(_BLUETOOTH_SDP_RECORD *,void *,unsigned long *);
				int BluetoothFindBrowseGroupClose(void *);
				int BluetoothFindClassIdClose(void *);
				int BluetoothFindNextBrowseGroup(void *,_GUID *);
				int BluetoothFindNextClassId(void *,_GUID *);
				int BluetoothFindNextRadio(void *,void * *);
				int BluetoothFindNextService(void *,_BLUETOOTH_SERVICE_RECORD *);
				int BluetoothFindRadioClose(void *);
				int BluetoothFindServiceClose(void *);
				int BthpExtractPNPAttributes(unsigned long,unsigned char *,unsigned long,void *);
				int BthpIsInPBGifPresent(void *,_BLUETOOTH_DEVICE_INFO const *,_BLUETOOTH_SERVICE_RECORD *);
				int BthpIsIncomingSSPsAllowed(unsigned long);
				int BthpIsRecordSizeValid(_BLUETOOTH_SDP_RECORD *,void *);
				int BthpNextServiceCallback(unsigned long,unsigned char *,unsigned long,void *);
				int BthpTransposeAndExtendBytes(_BLUETOOTH_SDP_RECORD *,void *,unsigned long *);
				int BthpTransposeToUUID(_BLUETOOTH_SDP_RECORD *,void *,_GUID *);
				long BthpFindAndStampPnpInfoFromServiceSearch(_BLUETOOTH_DEVICE_INFO const *);
				unsigned char BthpIsTopOfServiceGroup(void *,_BLUETOOTH_DEVICE_INFO const *,_GUID);
				unsigned long BluetoothEnumerateLocalServices(void *,unsigned long *,_BLUETOOTH_LOCAL_SERVICE_ENTRY *);
				unsigned long BluetoothGetLocalServiceInfo(void *,_GUID const *,unsigned long,_BLUETOOTH_LOCAL_SERVICE_INFO *);
				unsigned long BluetoothSdpGetAttributeValue(unsigned char *,unsigned long,unsigned short,_SDP_ELEMENT_DATA *);
				unsigned long BluetoothSdpGetContainerElementData(unsigned char *,unsigned long,void * *,_SDP_ELEMENT_DATA *);
				unsigned long BluetoothSdpGetElementData(unsigned char *,unsigned long,_SDP_ELEMENT_DATA *);
				unsigned long BluetoothSdpGetString(unsigned char *,unsigned long,_SDP_STRING_TYPE_DATA *,unsigned short,unsigned short *,unsigned long *);
				unsigned long BluetoothSetLocalServiceInfo(void *,_GUID const *,unsigned long,_BLUETOOTH_LOCAL_SERVICE_INFO const *);
				unsigned long BthpEnableAllServices(void *,_BLUETOOTH_DEVICE_INFO const *);
				unsigned long BthpFindSDPPriLangServiceName(_BLUETOOTH_SERVICE_RECORD const *,char *,unsigned long);
				unsigned long BthpFindServiceInstanceId(void *,_BLUETOOTH_DEVICE_INFO const *,_GUID const *,char const *,unsigned long,unsigned short *,unsigned long);
				unsigned long BthpRemoveDeviceInstance(void *,_BLUETOOTH_ADDRESS,_GUID const *,unsigned short const *);
				unsigned long BthpRemoveLocalDeviceInstance(void *,_GUID const *,int);
				unsigned long BthpSetServiceStateEx(void *,_BLUETOOTH_DEVICE_INFO const *,unsigned long,_GUID const *,unsigned long,void *,unsigned char,unsigned char,unsigned char,unsigned char);
				unsigned long FindNextOpenVCOMPort(unsigned long *);
				unsigned long GetLangBaseInfo(IMultiLanguage2 *,unsigned char *,unsigned long,unsigned short *,unsigned short *);
				unsigned long InstallIncomingComPort(_BLUETOOTH_DEVICE_INFO const *,unsigned long);
				void * BluetoothFindFirstServiceEx(_BLUETOOTH_SDP_SEARCH_PARAMS const *,_BLUETOOTH_SERVICE_RECORD *,BTH_SDP_QUERY_TYPE);
				void * BluetoothFindFirstServiceInternal(_BLUETOOTH_SDP_SEARCH_PARAMS const *,_BLUETOOTH_SERVICE_RECORD *,_BTHSERV_QUERY_TYPE);
				void * BthpFindFirstService(void *,_BLUETOOTH_SDP_SEARCH_PARAMS const *,_BLUETOOTH_SERVICE_RECORD *,_BTHSERV_QUERY_TYPE);
				void BthpFindPnpInfo(void *,_BLUETOOTH_DEVICE_INFO const *,_BTH_PNP_INFO *,int);
			};

		};

	};

	namespace WRL
	{
		namespace Details
		{
			void RaiseException(long,unsigned long);
		};

		namespace Wrappers
		{
			struct CriticalSection
			{
				~CriticalSection();
			};

			class HandleT<SdpTreeTraits>
			{
			protected:
				virtual bool InternalClose();
			};

		};

	};

};

struct SdpStack
{
	long Push(_SDP_NODE *,unsigned long,_LIST_ENTRY *);
};

namespace Windows
{
	namespace Internal
	{
		namespace Bluetooth
		{
			namespace BthLEPrepairing
			{
				class BthLEPrepairingController
				{
					long ProcessDeviceMatch(BthLEPrepairingDevice *);
					long StartInternal(void *);
					long StopInternal();
					static void s_PairingWorkerCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_WORK *);
					void ResetPairingState();
				public:
					long ProcessAdvertisementEvent(_BTH_HCI_LE_ADVERTISEMENT_DATA const *);
					long ProcessFilterEvent(_BTH_LE_CONTROLLER_DEVICE_MONITOR_EVENT const *);
					long Start(void *);
					long Stop();
					virtual ~BthLEPrepairingController();
				};

				class BthLEPrepairingDevice
				{
					struct PairedDeviceQueryContext
					{
						~PairedDeviceQueryContext();
					};

					long FinalizePairing();
					long FinishOobPairing();
					long IncomingLEOobPairing();
					long SelectCeremony();
					long WaitForDafQueryEvent();
					static void s_EnumCeremoniesCompleteCallback(unsigned long,_CEREMONY const *,void *,long);
					static void s_FinalizeCompleteCallback(_DAF_ASSOCIATION_STATUS,void *,long);
					static void s_OnIgnoreTimer(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
					static void s_PairedDeviceQueryCallback(HDEVQUERY__ *,void *,_DEV_QUERY_RESULT_ACTION_DATA const *);
					static void s_RemoveAssociationCallback(void *,long);
					void CleanupPreviousAssociations();
				public:
					long Start();
					long Stop();
				};

				class BthLEPrepairingDeviceMonitor
				{
				protected:
					BthLEPrepairingDevice * GetDeviceFromAdvertisement(_BTH_HCI_LE_ADVERTISEMENT_DATA const *);
				public:
					BthLEPrepairingDevice * ShouldPairDeviceFromAdvertisement(_BTH_HCI_LE_ADVERTISEMENT_DATA const *);
					BthLEPrepairingDevice * ShouldPairDeviceFromMonitorEvent(_BTH_LE_CONTROLLER_DEVICE_MONITOR_EVENT const *);
				};

			};

		};

	};

};

struct _variant_t
{
	~_variant_t();
};

namespace std
{
	struct _List_alloc<_List_base_types<Microsoft::Bluetooth::BluetoothBRAddress,allocator<Microsoft::Bluetooth::BluetoothBRAddress> > >
	{
		_List_node<Microsoft::Bluetooth::BluetoothBRAddress,void *> * _Buynode0(_List_node<Microsoft::Bluetooth::BluetoothBRAddress,void *> *,_List_node<Microsoft::Bluetooth::BluetoothBRAddress,void *> *);
	};

	struct _List_alloc<_List_base_types<Windows::Internal::Bluetooth::BthLEPrepairing::BthLEPrepairingDevice *,allocator<Windows::Internal::Bluetooth::BthLEPrepairing::BthLEPrepairingDevice *> > >
	{
		_List_node<Windows::Internal::Bluetooth::BthLEPrepairing::BthLEPrepairingDevice *,void *> * _Buynode0(_List_node<Windows::Internal::Bluetooth::BthLEPrepairing::BthLEPrepairingDevice *,void *> *,_List_node<Windows::Internal::Bluetooth::BthLEPrepairing::BthLEPrepairingDevice *,void *> *);
	};

	struct _List_buy<Microsoft::Bluetooth::BluetoothBRAddress,allocator<Microsoft::Bluetooth::BluetoothBRAddress> >
	{
		_List_node<Microsoft::Bluetooth::BluetoothBRAddress,void *> * _Buynode<Microsoft::Bluetooth::BluetoothBRAddress const &>(_List_node<Microsoft::Bluetooth::BluetoothBRAddress,void *> *,_List_node<Microsoft::Bluetooth::BluetoothBRAddress,void *> *,Microsoft::Bluetooth::BluetoothBRAddress const &);
	};

	class _Tree<_Tmap_traits<unsigned __int64,char *,less<unsigned __int64>,allocator<pair<unsigned __int64 const ,char *> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned __int64 const ,char *> > > > _Insert_at<pair<unsigned __int64 const ,char *> &,_Tree_node<pair<unsigned __int64 const ,char *>,void *> *>(bool,_Tree_node<pair<unsigned __int64 const ,char *>,void *> *,pair<unsigned __int64 const ,char *> &,_Tree_node<pair<unsigned __int64 const ,char *>,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned __int64 const ,char *> > > >,bool> _Insert_nohint<pair<unsigned __int64 const ,char *> &,_Tree_node<pair<unsigned __int64 const ,char *>,void *> *>(bool,pair<unsigned __int64 const ,char *> &,_Tree_node<pair<unsigned __int64 const ,char *>,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<unsigned __int64 const ,char *>,void *> *);
		void _Erase(_Tree_node<pair<unsigned __int64 const ,char *>,void *> *);
	public:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<unsigned __int64 const ,char *> > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<unsigned __int64 const ,char *> > > >);
	};

	class _Tree<_Tset_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,0> >
	{
	protected:
		void _Erase(_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> *);
	};

	struct _Tree_comp_alloc<_Tmap_traits<unsigned __int64,char *,less<unsigned __int64>,allocator<pair<unsigned __int64 const ,char *> >,0> >
	{
		_Tree_node<pair<unsigned __int64 const ,char *>,void *> * _Buyheadnode();
		_Tree_node<pair<unsigned __int64 const ,char *>,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<unsigned __int64 const ,char *>,void *> *);
	};

	struct _Tree_comp_alloc<_Tset_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,0> >
	{
		_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> * _Buyheadnode();
		_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> * _Buynode0();
		void _Freenode0(_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> *);
	};

	struct _Wrap_alloc<allocator<BTHLE_PREPAIRING_ENTRY> >
	{
		void deallocate(BTHLE_PREPAIRING_ENTRY *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_List_node<Microsoft::Bluetooth::BluetoothBRAddress,void *> > >
	{
		void deallocate(_List_node<Microsoft::Bluetooth::BluetoothBRAddress,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_List_node<Windows::Internal::Bluetooth::BthLEPrepairing::BthLEPrepairingDevice *,void *> > >
	{
		void deallocate(_List_node<Windows::Internal::Bluetooth::BthLEPrepairing::BthLEPrepairingDevice *,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> > >
	{
		void deallocate(_Tree_node<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<unsigned __int64 const ,char *>,void *> > >
	{
		void deallocate(_Tree_node<pair<unsigned __int64 const ,char *>,void *> *,unsigned __int64);
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
		static void _Xlen();
		~basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >();
	};

	struct default_delete<Microsoft::Bluetooth::Services::BthServ::BthServDeviceRefresher>
	{
		void operator()(Microsoft::Bluetooth::Services::BthServ::BthServDeviceRefresher *);
	};

	struct exception
	{
		exception(exception const &);
		virtual char const * what();
	};

	struct list<Microsoft::Bluetooth::BluetoothBRAddress,allocator<Microsoft::Bluetooth::BluetoothBRAddress> >
	{
		~list<Microsoft::Bluetooth::BluetoothBRAddress,allocator<Microsoft::Bluetooth::BluetoothBRAddress> >();
	};

	struct list<Windows::Internal::Bluetooth::BthLEPrepairing::BthLEPrepairingDevice *,allocator<Windows::Internal::Bluetooth::BthLEPrepairing::BthLEPrepairingDevice *> >
	{
		~list<Windows::Internal::Bluetooth::BthLEPrepairing::BthLEPrepairingDevice *,allocator<Windows::Internal::Bluetooth::BthLEPrepairing::BthLEPrepairingDevice *> >();
	};

	struct unique_ptr<Windows::Internal::Bluetooth::BthLEPrepairing::BthLEPrepairingDevice,default_delete<Windows::Internal::Bluetooth::BthLEPrepairing::BthLEPrepairingDevice> >
	{
		~unique_ptr<Windows::Internal::Bluetooth::BthLEPrepairing::BthLEPrepairingDevice,default_delete<Windows::Internal::Bluetooth::BthLEPrepairing::BthLEPrepairingDevice> >();
	};

	struct unique_ptr<Windows::Internal::Bluetooth::BthLEPrepairing::BthLEPrepairingDeviceMonitor,default_delete<Windows::Internal::Bluetooth::BthLEPrepairing::BthLEPrepairingDeviceMonitor> >
	{
		~unique_ptr<Windows::Internal::Bluetooth::BthLEPrepairing::BthLEPrepairingDeviceMonitor,default_delete<Windows::Internal::Bluetooth::BthLEPrepairing::BthLEPrepairingDeviceMonitor> >();
	};

	struct unique_ptr<char [0],default_delete<char [0]> >
	{
		~unique_ptr<char [0],default_delete<char [0]> >();
	};

	class vector<BTHLE_PREPAIRING_ENTRY,allocator<BTHLE_PREPAIRING_ENTRY> >
	{
		static void _Xlength();
	public:
		~vector<BTHLE_PREPAIRING_ENTRY,allocator<BTHLE_PREPAIRING_ENTRY> >();
	};

	BTHLE_PREPAIRING_ENTRY * _Uninitialized_value_construct_n1<BTHLE_PREPAIRING_ENTRY *,unsigned __int64,allocator<BTHLE_PREPAIRING_ENTRY> >(BTHLE_PREPAIRING_ENTRY *,unsigned __int64,std::_Wrap_alloc<std::allocator<BTHLE_PREPAIRING_ENTRY> > &,std::integral_constant<bool,0>);
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
		void SetFailureInfo(FailureInfo const &);
	};

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
			long Return_Win32Msg(void *,unsigned int,char const *,unsigned long,char const *,...);
			void FailFast_Unexpected(void *,unsigned int,char const *);
			void Return_Hr(void *,unsigned int,char const *,long);
			void Return_Hr_NoOriginate(void *,unsigned int,char const *,long);
			void Throw_GetLastError(void *,unsigned int,char const *);
			void Throw_Hr(void *,unsigned int,char const *,long);
			void _FailFastImmediate_Unexpected();
			void _FailFast_GetLastError(void *,unsigned int,char const *);
			void _FailFast_Hr(void *,unsigned int,char const *,long);
			void _Throw_GetLastError(void *,unsigned int,char const *);
			void _Throw_Hr(void *,unsigned int,char const *,long);
		};

		struct out_param_ptr_t<Windows::Internal::Bluetooth::BthLEPrepairing::BthLEPrepairingDeviceMonitor * *,std::unique_ptr<Windows::Internal::Bluetooth::BthLEPrepairing::BthLEPrepairingDeviceMonitor,std::default_delete<Windows::Internal::Bluetooth::BthLEPrepairing::BthLEPrepairingDeviceMonitor> > >
		{
			~out_param_ptr_t<Windows::Internal::Bluetooth::BthLEPrepairing::BthLEPrepairingDeviceMonitor * *,std::unique_ptr<Windows::Internal::Bluetooth::BthLEPrepairing::BthLEPrepairingDeviceMonitor,std::default_delete<Windows::Internal::Bluetooth::BthLEPrepairing::BthLEPrepairingDeviceMonitor> > >();
		};

		struct out_param_ptr_t<_DEVPROPERTY * *,wistd::unique_ptr<_DEVPROPERTY,DafMemoryDeleter> >
		{
			~out_param_ptr_t<_DEVPROPERTY * *,wistd::unique_ptr<_DEVPROPERTY,DafMemoryDeleter> >();
		};

		struct out_param_ptr_t<unsigned short * *,wistd::unique_ptr<unsigned short,DafMemoryDeleter> >
		{
			~out_param_ptr_t<unsigned short * *,wistd::unique_ptr<unsigned short,DafMemoryDeleter> >();
		};

		struct shared_buffer
		{
			bool create(void const *,unsigned __int64);
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
		long RecognizeCaughtExceptionFromCallback(unsigned short *,unsigned __int64);
		long ReportFailure_GetLastErrorHr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		long ReportFailure_Win32Msg(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,unsigned long,char const *,char *);
		long ResultFromCaughtExceptionInternal(unsigned short *,unsigned __int64,bool *);
		long StringCchPrintfA(char *,unsigned __int64,char const *,...);
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
		void (* g_pfnRethrow)();
		void (* g_pfnTelemetryCallback)(bool,FailureInfo const &);
		void (* g_pfnThrowResultException)(FailureInfo const &);
		void DebugBreak();
		void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
		void LogFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,bool,unsigned short *,unsigned __int64,char *,unsigned __int64,FailureInfo *);
		void ReportFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Hr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long);
		void ReportFailure_Msg(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,char const *,char *);
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
			static long GetValueFromSemaphore(void *,long *);
			static long TryGetValueInternal(unsigned short const *,bool,unsigned __int64 *,bool *);
		};

		struct ThreadLocalData
		{
			void SetLastError(FailureInfo const &);
			~ThreadLocalData();
		};

		details_abi::ProcessLocalStorage<details_abi::ProcessLocalData> * g_pProcessLocalData;
		details_abi::ThreadLocalData * GetThreadLocalDataCache(bool);
	};

	bool (* g_pfnIsDebuggerPresent)();
	bool g_fBreakOnFailure;
	bool g_fIsDebuggerPresent;
	long (* g_pfnResultFromCaughtException)();
	long GetFailureLogString(unsigned short *,unsigned __int64,wil::FailureInfo const &);
	long ResultFromCaughtException();
	long verify_hresult<long>(long);
};

namespace wistd
{
	struct unique_ptr<_DEVPROPERTY,wil::DafMemoryDeleter>
	{
		~unique_ptr<_DEVPROPERTY,wil::DafMemoryDeleter>();
	};

};

GLOBALS Globals;
HCMNOTIFICATION__ * BthServRegisterHandleNotifications(void *);
HCMNOTIFICATION__ * BthServRegisterInterfaceNotifications();
HINSTANCE__ * g_wil_details_ntdllModuleHandle;
_SDP_NODE * SdppStreamToNode(unsigned char *,unsigned long,_SDP_TREE_ROOT_NODE *,_SDP_NODE *,char *,unsigned char);
__type_info_node __type_info_root_node;
int BthRegisterIoCaps(BTHSERV_AUTHENTICATION_CLIENT *);
int BthServAddAuthenticationClient(void *,unsigned __int64 *,void *,_BLUETOOTH_AUTH_PARAMS const *);
int BthServListenForAsyncEvents(int);
int BthServLocalRadioInsertion(unsigned short const *,int);
int BthServOpenLocalRadio(unsigned short const *);
int BthServSetState(unsigned long);
int OpenWlanApi();
long BthServAuthenticationClientCompare(void *,_RTL_BALANCED_NODE *);
long BthServClientUninstallDevice(void *,unsigned short *);
long BthServRemoveAuthenticationClientByEventHandle(void *,unsigned __int64 *,unsigned __int64);
long DafBthSyncCreateOfflineAep(_GUID const *,_BTH_DEVICE_INFO_V3 *);
long DafBthSyncRemoveAep(unsigned short *);
long DafBthSynchronize(unsigned long *,unsigned long *);
long SdpFA_Search(_SDP_FIND_ATTRIBUTES *,_SdpAttributeRange *,unsigned long,unsigned char *,unsigned long);
long StringCbPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long VerifyAdditionalProtocolList(unsigned char *,unsigned long,unsigned long);
long VerifyLangIdList(unsigned char *,unsigned long,unsigned long);
long VerifyMultipleProtocolLists(unsigned char *,unsigned long,unsigned long);
long VerifyProfileDescriptor(unsigned char *,unsigned long,unsigned long);
long VerifyProtocolList(unsigned char *,unsigned long,unsigned long);
long WalkProfileDescriptor(void *,unsigned char,unsigned long,unsigned char *);
long WalkProtocolSequence(_PROTOCOL_LIST_INFO *,unsigned char,unsigned long,unsigned char *);
unsigned char QueryCurrent80211Channel();
unsigned long BthServAsyncEventsThread(void *);
unsigned long BthServAsyncThread(void *);
unsigned long BthServClientActivateService(void *,unsigned __int64 *,unsigned long,unsigned char * const);
unsigned long BthServClientGetDeviceInfo(void *,_BTHSERV_QUERY_TYPE,unsigned __int64 *,_BLUETOOTH_DEVICE_INFO *);
unsigned long BthServClientGetDeviceList(void *,int,unsigned char,unsigned long,_BLUETOOTH_DEVICE_INFO * const,unsigned long *);
unsigned long BthServClientGetSdpL2cap(void *,unsigned __int64 *,_BTHSERV_QUERY_TYPE,unsigned long,unsigned char *,unsigned long *);
unsigned long BthServClientRemoveSdpRecord(void *,unsigned __int64);
unsigned long BthServClientSetDeviceName(void *,unsigned __int64 *,unsigned short *);
unsigned long BthServClientSetSdpRecord(void *,unsigned long,unsigned char * const,int,unsigned __int64 *);
unsigned long BthServClientUpdateService(void *,unsigned long,unsigned char * const,int);
unsigned long BthServDoClose(void * *,long *,int);
unsigned long BthServEnableDiscoveryForClient(void *,int);
unsigned long BthServEnableIncomingConnectionsForClient(void *,int);
unsigned long BthServGetAuthRequestForClient(void *,_BTHSERV_AUTHENTICATION_REQUEST *);
unsigned long BthServGetL2CapSdpRecords(unsigned __int64 *,_BTHSERV_QUERY_TYPE,unsigned long *,unsigned char *,unsigned long);
unsigned long BthServGetSdpRecords(unsigned __int64,bool,_BTH_SDP_STREAM_RESPONSE * *);
unsigned long BthServGetSdpRecords(unsigned long,void *,unsigned long,_BTH_SDP_STREAM_RESPONSE * *);
unsigned long BthServNotifyAuthenticationClients(_BTHSERV_AUTHENTICATION_CLIENTQUEUE_ENTRY *);
unsigned long BthServOverlappedIoctl(void *,unsigned long,void *,unsigned long,void *,unsigned long,unsigned long *);
unsigned long BthServProcessDeviceChange(HCMNOTIFICATION__ *,void *,_CM_NOTIFY_ACTION,_CM_NOTIFY_EVENT_DATA *,unsigned long);
unsigned long BthServRestoreTemporaryScanState();
unsigned long BthServRetrieveDeviceInfo(unsigned __int64,_BTH_DEVICE_INFO_V3 *);
unsigned long BthServRetrieveDeviceList(_BTH_GET_DEVICE_INFO_EX * *);
unsigned long BthServRpcAuthenticate(void *);
unsigned long BthServSetConnectable(int);
unsigned long BthServSetDiscoverable(int);
unsigned long BthServStartRPC();
unsigned long BthServWalkAuthenticationClientList(BTHSERV_AUTHENTICATIONCLIENTLIST_ENTRY *,_BTHSERV_AUTHENTICATION_CLIENTQUEUE_ENTRY *);
unsigned long ServiceHandlerEx(unsigned long,unsigned long,void *,void *);
void * operator new(unsigned __int64);
void * operator new[](unsigned __int64);
void AutoConfigNotificationCallback(_L2_NOTIFICATION_DATA *,void *);
void AutoConfigServiceStatusChangeCallback(void *);
void BthServBluetoothControlPanelTasksSetState(int);
void BthServCloseDevice();
void BthServCloseLocalRadio(int);
void BthServEnumerateRadios();
void BthServExit();
void BthServFillDeviceInfo(_BTH_DEVICE_INFO_V3 *,_BLUETOOTH_DEVICE_INFO *);
void BthServHandleBRAuthenticationRequestEvent(_BTH_AUTHENTICATION_REQUEST *);
void BthServHandleHCILEAdvertisementEvent(_BTH_HCI_LE_ADVERTISEMENT_DATA * const);
void BthServHandleHCILEMonitorEvent(_BTH_LE_CONTROLLER_DEVICE_MONITOR_EVENT * const);
void BthServHandleLEAuthenticationRequestEvent(_BTH_LE_AUTHENTICATION_REQUEST *);
void BthServHandleRefreshBrServicesEvent(unsigned __int64 const &);
void BthServInterfaceEnumCallback(HDEVQUERY__ *,void *,_DEV_QUERY_RESULT_ACTION_DATA const *);
void BthServPoliciesUpdatedCallback(void *);
void BthServPushPolicies();
void BthServPushPolicyValue(HKEY__ *,BthPolicy);
void BthServRemoveAuthenticationClients(void *);
void BthServRemoveSdpRecords(void *);
void BthServStart();
void BthServStartAutoConfigServiceMonitor();
void BthServStartLEPrepairing();
void BthServStop();
void BthServStopAutoConfigServiceMonitor();
void BthServStopLEPrepairing();
void BthServUnregisterDeviceNotificationCallback(_TP_CALLBACK_INSTANCE *,void *);
void CloseWlanApi();
void ComputeAfhChannelMap(unsigned char *,unsigned long,unsigned char);
void DafBthSyncAepQueryCallback(HDEVQUERY__ *,void *,_DEV_QUERY_RESULT_ACTION_DATA const *);
void DafBthSyncEnumCeremoniesCompleteCallback(unsigned long,_CEREMONY const *,void *,long);
void DafBthSyncFinalizeCompleteCallback(_DAF_ASSOCIATION_STATUS,void *,long);
void DafBthSyncRemoveAepComplete(void *,long);
void InitializeGlobals();
void MonitorAutoConfigService();
void PolicyTimerCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
void ProcessNotification();
void ServiceMain(unsigned long,unsigned short * *);
void __scrt_initialize_type_info();
void __scrt_throw_std_bad_alloc();
void __scrt_throw_std_bad_array_new_length();
void __scrt_uninitialize_type_info();
void operator delete(void *);
void operator delete(void *,unsigned __int64);
void operator delete[](void *);
