namespace ATL
{
	struct CComModule
	{
		void Term();
	};

	struct CComObject<CDot3SSODialogSink>
	{
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	struct CComPtr<IXMLDOMDocument2>
	{
		~CComPtr<IXMLDOMDocument2>();
	};

	_GUID GUID_ATLVer30;
	long AtlModuleInit(ATL::_ATL_MODULE *,ATL::_ATL_OBJMAP_ENTRY *,HINSTANCE__ *);
	void AtlThrowImpl(long);
	void _AtlRaiseException(unsigned long,unsigned long);
};

struct CDot3SSODialogSink
{
	long DispatchMediaUiRequest(_GUID const *,_GUID const *,unsigned short * const);
	static long WnfMediaUiRequestCallback(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
	unsigned long StartSubscribeWnfUiRequest();
	void BatchProcessUIRequests(int *);
	void StopSubscribeWnfUiRequest();
	~CDot3SSODialogSink();
};

struct CInteractiveUIRequest
{
	CInteractiveUIRequest(_GUID const *,HWND__ * const,unsigned short * const);
	unsigned long DisplayInteractiveUI(int *,int *);
};

struct CLockedUIRequestQueue<CInteractiveUIRequest *>
{
	virtual ~CLockedUIRequestQueue<CInteractiveUIRequest *>();
};

class CMediaUiRequestSubscriber
{
	class CAutoReleaseLock
	{
		~CAutoReleaseLock();
	};

	long AddInterfaceStateSubscription(_WNF_STATE_NAME);
	long DoSubscribe(long (*)(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long),void *);
	long InterfaceMappingCallback(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
	long UiRequestStateCallbackWrapper(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
	static long InterfaceMappingCallbackThunk(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
	static long InvalidClientCallback(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
	static long UiRequestStateCallbackWrapperThunk(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
public:
	CMediaUiRequestSubscriber(MappingStateMediaType);
	long Unsubscribe();
};

struct CSmartCoInitialize
{
	~CSmartCoInitialize();
};

struct CXcSmartCoInit
{
	unsigned long Init();
};

struct exception
{
	exception(char const * const &,int);
	exception(exception const &);
	virtual char const * what();
};

namespace std
{
	struct _String_base
	{
		static void _Xlen();
		static void _Xran();
	};

	class _Tree<_Tmap_traits<_WNF_STATE_NAME,_WNF_USER_SUBSCRIPTION *,WnfStateNameCompare,allocator<pair<_WNF_STATE_NAME const ,_WNF_USER_SUBSCRIPTION *> >,0> >
	{
		struct iterator
		{
			iterator & operator++();
			iterator & operator--();
		};

	protected:
		_Tree<_Tmap_traits<_WNF_STATE_NAME,_WNF_USER_SUBSCRIPTION *,WnfStateNameCompare,allocator<pair<_WNF_STATE_NAME const ,_WNF_USER_SUBSCRIPTION *> >,0> >::iterator _Insert(bool,_Tree_nod<_Tmap_traits<_WNF_STATE_NAME,_WNF_USER_SUBSCRIPTION *,WnfStateNameCompare,allocator<pair<_WNF_STATE_NAME const ,_WNF_USER_SUBSCRIPTION *> >,0> >::_Node *,pair<_WNF_STATE_NAME const ,_WNF_USER_SUBSCRIPTION *> const &);
		_Tree_nod<_Tmap_traits<_WNF_STATE_NAME,_WNF_USER_SUBSCRIPTION *,WnfStateNameCompare,allocator<pair<_WNF_STATE_NAME const ,_WNF_USER_SUBSCRIPTION *> >,0> >::_Node * _Buynode();
		_Tree_nod<_Tmap_traits<_WNF_STATE_NAME,_WNF_USER_SUBSCRIPTION *,WnfStateNameCompare,allocator<pair<_WNF_STATE_NAME const ,_WNF_USER_SUBSCRIPTION *> >,0> >::_Node * _Buynode(_Tree_nod<_Tmap_traits<_WNF_STATE_NAME,_WNF_USER_SUBSCRIPTION *,WnfStateNameCompare,allocator<pair<_WNF_STATE_NAME const ,_WNF_USER_SUBSCRIPTION *> >,0> >::_Node *,_Tree_nod<_Tmap_traits<_WNF_STATE_NAME,_WNF_USER_SUBSCRIPTION *,WnfStateNameCompare,allocator<pair<_WNF_STATE_NAME const ,_WNF_USER_SUBSCRIPTION *> >,0> >::_Node *,_Tree_nod<_Tmap_traits<_WNF_STATE_NAME,_WNF_USER_SUBSCRIPTION *,WnfStateNameCompare,allocator<pair<_WNF_STATE_NAME const ,_WNF_USER_SUBSCRIPTION *> >,0> >::_Node *,pair<_WNF_STATE_NAME const ,_WNF_USER_SUBSCRIPTION *> const &,char);
		void _Erase(_Tree_nod<_Tmap_traits<_WNF_STATE_NAME,_WNF_USER_SUBSCRIPTION *,WnfStateNameCompare,allocator<pair<_WNF_STATE_NAME const ,_WNF_USER_SUBSCRIPTION *> >,0> >::_Node *);
	public:
		_Tree<_Tmap_traits<_WNF_STATE_NAME,_WNF_USER_SUBSCRIPTION *,WnfStateNameCompare,allocator<pair<_WNF_STATE_NAME const ,_WNF_USER_SUBSCRIPTION *> >,0> >::iterator erase(_Tree<_Tmap_traits<_WNF_STATE_NAME,_WNF_USER_SUBSCRIPTION *,WnfStateNameCompare,allocator<pair<_WNF_STATE_NAME const ,_WNF_USER_SUBSCRIPTION *> >,0> >::iterator);
		_Tree<_Tmap_traits<_WNF_STATE_NAME,_WNF_USER_SUBSCRIPTION *,WnfStateNameCompare,allocator<pair<_WNF_STATE_NAME const ,_WNF_USER_SUBSCRIPTION *> >,0> >::iterator find(_WNF_STATE_NAME const &);
		_Tree<_Tmap_traits<_WNF_STATE_NAME,_WNF_USER_SUBSCRIPTION *,WnfStateNameCompare,allocator<pair<_WNF_STATE_NAME const ,_WNF_USER_SUBSCRIPTION *> >,0> >::iterator insert(_Tree<_Tmap_traits<_WNF_STATE_NAME,_WNF_USER_SUBSCRIPTION *,WnfStateNameCompare,allocator<pair<_WNF_STATE_NAME const ,_WNF_USER_SUBSCRIPTION *> >,0> >::iterator,pair<_WNF_STATE_NAME const ,_WNF_USER_SUBSCRIPTION *> const &);
		~_Tree<_Tmap_traits<_WNF_STATE_NAME,_WNF_USER_SUBSCRIPTION *,WnfStateNameCompare,allocator<pair<_WNF_STATE_NAME const ,_WNF_USER_SUBSCRIPTION *> >,0> >();
	};

	struct allocator<_Tree_nod<_Tmap_traits<_WNF_STATE_NAME,_WNF_USER_SUBSCRIPTION *,WnfStateNameCompare,allocator<pair<_WNF_STATE_NAME const ,_WNF_USER_SUBSCRIPTION *> >,0> >::_Node>
	{
		void deallocate(_Tree_nod<_Tmap_traits<_WNF_STATE_NAME,_WNF_USER_SUBSCRIPTION *,WnfStateNameCompare,allocator<pair<_WNF_STATE_NAME const ,_WNF_USER_SUBSCRIPTION *> >,0> >::_Node *,unsigned __int64);
	};

	class bad_alloc
	{
	protected:
		virtual void _Doraise();
	public:
		bad_alloc();
		bad_alloc(bad_alloc const &);
		bad_alloc(char const *);
		virtual ~bad_alloc();
	};

	class basic_string<char,char_traits<char>,allocator<char>,_STL70>
	{
	protected:
		void _Copy(unsigned __int64,unsigned __int64);
		void _Tidy(bool,unsigned __int64);
	public:
		basic_string<char,char_traits<char>,allocator<char>,_STL70> & assign(basic_string<char,char_traits<char>,allocator<char>,_STL70> const &,unsigned __int64,unsigned __int64);
		basic_string<char,char_traits<char>,allocator<char>,_STL70> & assign(char const *,unsigned __int64);
		basic_string<char,char_traits<char>,allocator<char>,_STL70> & erase(unsigned __int64,unsigned __int64);
		basic_string<char,char_traits<char>,allocator<char>,_STL70>(char const *);
		~basic_string<char,char_traits<char>,allocator<char>,_STL70>();
	};

	class deque<CInteractiveUIRequest *,allocator<CInteractiveUIRequest *> >
	{
	protected:
		static void _Xlen();
		void _Growmap(unsigned __int64);
	};

	class length_error
	{
	protected:
		virtual void _Doraise();
	public:
		length_error(basic_string<char,char_traits<char>,allocator<char>,_STL70> const &);
		length_error(length_error const &);
		virtual ~length_error();
	};

	class logic_error
	{
	protected:
		virtual void _Doraise();
	public:
		logic_error(basic_string<char,char_traits<char>,allocator<char>,_STL70> const &);
		logic_error(logic_error const &);
		virtual char const * what();
		virtual ~logic_error();
	};

	class out_of_range
	{
	protected:
		virtual void _Doraise();
	public:
		out_of_range(basic_string<char,char_traits<char>,allocator<char>,_STL70> const &,_STL70 *);
		out_of_range(out_of_range const &);
		virtual ~out_of_range();
	};

	char const * const _bad_alloc_Message;
	nothrow_t const std::nothrow;
};

ATL::CComModule _Module;
_GENERIC_BINDING_ROUTINE_PAIR const * const BindingRoutines;
_MIDL_STUBLESS_PROXY_INFO const winlan_ProxyInfo;
_MIDL_STUB_DESC const winlan_StubDesc;
_NDR64_CONFORMANT_STRING_FORMAT const __midl_frag142;
_NDR64_CONTEXT_HANDLE_FORMAT const __midl_frag13;
_NDR64_CONTEXT_HANDLE_FORMAT const __midl_frag176;
_NDR64_CONTEXT_HANDLE_FORMAT const __midl_frag9;
_NDR64_POINTER_FORMAT const __midl_frag115;
_NDR64_POINTER_FORMAT const __midl_frag136;
_NDR64_POINTER_FORMAT const __midl_frag137;
_NDR64_POINTER_FORMAT const __midl_frag140;
_NDR64_POINTER_FORMAT const __midl_frag141;
_NDR64_POINTER_FORMAT const __midl_frag161;
_NDR64_POINTER_FORMAT const __midl_frag17;
_NDR64_POINTER_FORMAT const __midl_frag18;
_NDR64_POINTER_FORMAT const __midl_frag180;
_NDR64_POINTER_FORMAT const __midl_frag181;
_NDR64_POINTER_FORMAT const __midl_frag53;
_NDR64_POINTER_FORMAT const __midl_frag54;
_PLAP_UI_PARAMS * g_pPlapUIParams;
__midl_frag100_t const __midl_frag100;
__midl_frag101_t const __midl_frag101;
__midl_frag103_t const __midl_frag103;
__midl_frag108_t const __midl_frag108;
__midl_frag112_t const __midl_frag112;
__midl_frag116_t const __midl_frag116;
__midl_frag11_t const __midl_frag11;
__midl_frag120_t const __midl_frag120;
__midl_frag127_t const __midl_frag127;
__midl_frag128_t const __midl_frag128;
__midl_frag129_t const __midl_frag129;
__midl_frag131_t const __midl_frag131;
__midl_frag138_t const __midl_frag138;
__midl_frag139_t const __midl_frag139;
__midl_frag153_t const __midl_frag153;
__midl_frag158_t const __midl_frag158;
__midl_frag15_t const __midl_frag15;
__midl_frag166_t const __midl_frag166;
__midl_frag171_t const __midl_frag171;
__midl_frag172_t const __midl_frag172;
__midl_frag175_t const __midl_frag175;
__midl_frag182_t const __midl_frag182;
__midl_frag183_t const __midl_frag183;
__midl_frag19_t const __midl_frag19;
__midl_frag20_t const __midl_frag20;
__midl_frag21_t const __midl_frag21;
__midl_frag22_t const __midl_frag22;
__midl_frag24_t const __midl_frag24;
__midl_frag2_t const __midl_frag2;
__midl_frag31_t const __midl_frag31;
__midl_frag32_t const __midl_frag32;
__midl_frag35_t const __midl_frag35;
__midl_frag39_t const __midl_frag39;
__midl_frag41_t const __midl_frag41;
__midl_frag45_t const __midl_frag45;
__midl_frag51_t const __midl_frag51;
__midl_frag55_t const __midl_frag55;
__midl_frag56_t const __midl_frag56;
__midl_frag57_t const __midl_frag57;
__midl_frag60_t const __midl_frag60;
__midl_frag69_t const __midl_frag69;
__midl_frag77_t const __midl_frag77;
__midl_frag86_t const __midl_frag86;
__midl_frag90_t const __midl_frag90;
__midl_frag94_t const __midl_frag94;
__midl_frag95_t const __midl_frag95;
__midl_frag96_t const __midl_frag96;
__midl_frag99_t const __midl_frag99;
_lan_MIDL_PROC_FORMAT_STRING const lan__MIDL_ProcFormatString;
_lan_MIDL_TYPE_FORMAT_STRING const lan__MIDL_TypeFormatString;
long StringCchCopyW(unsigned short *,unsigned __int64,unsigned short const *);
unsigned char const __midl_frag160;
unsigned char const __midl_frag184;
unsigned char const __midl_frag187;
unsigned int RunInteractiveUIThread(void *);
unsigned long AllocateLANMemory(unsigned __int64,void * *);
unsigned long ClientCreateContext(_DOT3_CLIENT_CONTEXT * *);
unsigned long ClientDestroyContext(_DOT3_CLIENT_CONTEXT *);
unsigned long ClientGetNotification(_DOT3_CLIENT_CONTEXT *);
unsigned long ClientRegisterNotification(_DOT3_CLIENT_CONTEXT *,unsigned long,int,void (*)(_L2_NOTIFICATION_DATA *,void *),void *,unsigned long *);
unsigned long ClientUnregisterNotification(_DOT3_CLIENT_CONTEXT *,unsigned long *);
unsigned long Dot3HlpInitializeInteractiveUI(HWND__ *,_GUID *,void *,void *,int *,void * *);
unsigned long Dot3SendUIResponse(_GUID *,_DOT3_UI_REQUEST *,_DOT3_UI_RESPONSE *);
unsigned long NotificationApcThreadProc(void *);
unsigned long XcCreateSchemaCollection(_XC_SCHEMA_LOCATION const *,unsigned long,unsigned short const *,IXMLDOMSchemaCollection * *);
unsigned long XcCreateXmlDoc(unsigned short const *,IXMLDOMSchemaCollection *,IXMLDOMDocument2 * *);
unsigned long XcGetLoadError(IXMLDOMDocument2 *);
unsigned long XcGetNodeDWORDValue(IXMLDOMNode *,unsigned short const *,unsigned long *,unsigned long,unsigned long,int,unsigned long,int *);
unsigned long XcGetNodeEnumValue(IXMLDOMNode *,unsigned short const *,_XC_STRING_VALUE_MAPPING const *,unsigned long,unsigned long *,int,unsigned long,int *);
unsigned long XcGetNodeTypedValue(IXMLDOMNode *,unsigned short const *,tagVARIANT *);
unsigned long XcGetNodes(IXMLDOMNode *,unsigned short const *,IXMLDOMNodeList * *,long *);
unsigned long XcGetSingleNode(IXMLDOMNode *,unsigned short const *,IXMLDOMNode * *);
unsigned long XcLoadXml(IXMLDOMDocument2 *,unsigned short const *,int *);
unsigned long XlpParseDot3MsmSettings(IXMLDOMNode *,_DOT3_MSM_PROFILE *);
unsigned long XoParseOnexProfile(IXMLDOMNode *,_ONEX_CONNECTION_PROFILE * *,unsigned long *);
unsigned long XopParseEapConfig(IXMLDOMNode *,_ONEX_CONNECTION_PROFILE * *,unsigned long *);
unsigned long XopParseSingleSignOn(IXMLDOMNode *,_ONEX_CONNECTION_PROFILE *,unsigned long *);
unsigned short * g_strBinding;
unsigned short * g_strBindingHlp;
void (*const * const ExprEvalRoutines)(_MIDL_STUB_MESSAGE *);
void * Xc_Process_user_allocate(unsigned __int64);
void * g_hHandleTable;
void * operator new(unsigned __int64);
void * operator new(unsigned __int64,std::nothrow_t const &);
void * operator new[](unsigned __int64);
void AtlAssignNoThrow(ATL::CComVariant &,unsigned short const *);
void ClientRpcCallback(_RPC_ASYNC_STATE *,void *,_RPC_ASYNC_EVENT);
void Dot3IPAddressChangeCallback(void *,_MIB_UNICASTIPADDRESS_ROW *,_MIB_NOTIFICATION_TYPE);
void FreeLANMemory(void *);
void Xc_Process_user_free(void *);
void operator delete(void *);
void operator delete(void *,std::nothrow_t const &);
void operator delete[](void *);
