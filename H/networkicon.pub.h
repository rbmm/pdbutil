class <lambda_037632331c4023176d9e9862f9e2cbee>
{
	static <lambda_invoker_cdecl>();
};

struct <lambda_073feab8f227e1f006139d005e705fdf>
{
	~<lambda_073feab8f227e1f006139d005e705fdf>();
};

struct <lambda_397cd64e8bf0800bdc535bd59c0dd482>
{
	~<lambda_397cd64e8bf0800bdc535bd59c0dd482>();
};

struct <lambda_5b466eb8a9a42f2f9915c9a278531277>
{
	~<lambda_5b466eb8a9a42f2f9915c9a278531277>();
};

struct <lambda_96e3bbe75d194682a42a99f6c2722570>
{
	~<lambda_96e3bbe75d194682a42a99f6c2722570>();
};

class <lambda_aa9c0487d03626e62003d4c0e970ee3c>
{
	static <lambda_invoker_cdecl>();
};

struct <lambda_ac8e174acb041fefc9289cd8ef98dacb>
{
	~<lambda_ac8e174acb041fefc9289cd8ef98dacb>();
};

struct <lambda_aff9dd1032eaaebd8553e81bda11cdec>
{
	~<lambda_aff9dd1032eaaebd8553e81bda11cdec>();
};

struct <lambda_b70241e9b5ebaad244db3e52d52cab17>
{
	operator()(unsigned short * const,unsigned short const * const,unsigned __int64,unsigned __int64,unsigned short);
};

class <lambda_c1f91f5cb25c308fe8cb3956f67bfb7f>
{
	static <lambda_invoker_cdecl>();
};

struct <lambda_c346012d7f80ea4e3f9f2805d04338d5>
{
	~<lambda_c346012d7f80ea4e3f9f2805d04338d5>();
};

struct <lambda_d55d75ad6ddc2b865b2c0133d1125b18>
{
	~<lambda_d55d75ad6ddc2b865b2c0133d1125b18>();
};

class <lambda_d68a6c94ba081d310e1a4ac878577515>
{
	static <lambda_invoker_cdecl>(winrt::Windows::Foundation::IActivationFactory const &);
};

class <lambda_d93655bd33d44513d4ad201382c30aa7>
{
	static long <lambda_invoker_cdecl>(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
};

namespace Glyphs
{
	unsigned short const * const AirplaneMode;
	unsigned short const * const CellularRoamingOverlay;
	unsigned short const * const CellularSignal1Bar;
	unsigned short const * const CellularSignal2Bars;
	unsigned short const * const CellularSignal3Bars;
	unsigned short const * const CellularSignal4Bars;
	unsigned short const * const CellularSignal5Bars;
	unsigned short const * const Ethernet;
	unsigned short const * const NetworkConnected;
	unsigned short const * const NetworkOffline;
	unsigned short const * const Wifi1Bar;
	unsigned short const * const Wifi2Bars;
	unsigned short const * const Wifi3Bars;
	unsigned short const * const Wifi4Bars;
};

struct NetworkIconLogger
{
	static _tlgProvider_t const * Provider();
};

struct NetworkIconTelemetry
{
	class AddProviderForCategory
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		static void IconProviderInitialized<winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconProvider &>(winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconProvider &);
		void StartActivity(unsigned int,bool);
		~AddProviderForCategory();
	};

	class DeterminePreferredProvider
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		static void AirplaneModeActiveAndPreferred();
		static void NlmPreferredInterface<_GUID &>(_GUID &);
		void StartActivity();
		~DeterminePreferredProvider();
	};

	class NetworkIconInitialize
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		static void NLMInitialized();
		static void NetworkUXManagerInitialized();
		static void TooltipComponentInitialized<bool const &>(bool const &);
		void StartActivity(bool);
		~NetworkIconInitialize();
	};

	class NetworkIconQueryInitialState
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity(bool,unsigned __int64);
		~NetworkIconQueryInitialState();
	};

	class RebuildTooltipCache
	{
	protected:
		virtual bool WasAlreadyReportedToTelemetry(long);
		virtual void StopActivity();
	public:
		void StartActivity();
		void Stop(_GUID const &,bool,unsigned int);
		~RebuildTooltipCache();
	};

	static void AddCategoryEventReceived<winrt::guid const &>(winrt::guid const &);
	static void AirplaneModeInitialized<winrt::guid &>(winrt::guid &);
	static void AirplaneModeQueryState<bool &>(bool &);
	static void AirplaneModeUpdateReceived<bool &,bool &>(bool &,bool &);
	static void CellularDataStatusInitialized<winrt::guid &>(winrt::guid &);
	static void EthernetInitialized<winrt::guid &>(winrt::guid &);
	static void FallbackTelemetryCallback(bool,wil::FailureInfo const &);
	static void IconRefreshRequested<bool &,winrt::guid &>(bool &,winrt::guid &);
	static void NetworkIconProviderIsActive<winrt::guid &,bool &>(winrt::guid &,bool &);
	static void NetworkIconProviderIsResponsibleForInterface<winrt::guid const &,winrt::guid const &,bool &,bool &>(winrt::guid const &,winrt::guid const &,bool &,bool &);
	static void NetworkIconProviderQueryInitialState<winrt::guid &>(winrt::guid &);
	static void NetworkIconProviderSendIconUpdate<winrt::guid &,bool &>(winrt::guid &,bool &);
	static void RemoveCategoryEventReceived<winrt::guid const &>(winrt::guid const &);
	static void TooltipAirplaneModeChanged<bool &>(bool &);
	static void TooltipRasServiceStarted();
	static void TooltipRefreshRequested();
	static void WiFiInitialized<winrt::guid &>(winrt::guid &);
	virtual void OnErrorReported(bool,wil::FailureInfo const &);
};

namespace NetworkingTriageScenario
{
	struct GetConnected
	{
		static void UXViewIconChangedEvent(GetConnected::RequiredFields const &,unsigned short const *,_GUID const &);
	};

	char const * EnumToString(NetworkingTriageScenario::EventSources);
};

class _TlgActivityBase<wil::ActivityBase<NetworkIconLogger,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<NetworkIconLogger,_TlgReflectorTag_Param0IsProviderType>,0,4>
{
protected:
	~_TlgActivityBase<wil::ActivityBase<NetworkIconLogger,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<NetworkIconLogger,_TlgReflectorTag_Param0IsProviderType>,0,4>();
};

class _TlgActivityBase<wil::ActivityBase<NetworkIconLogger,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<NetworkIconLogger,_TlgReflectorTag_Param0IsProviderType>,0,5>
{
protected:
	~_TlgActivityBase<wil::ActivityBase<NetworkIconLogger,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<NetworkIconLogger,_TlgReflectorTag_Param0IsProviderType>,0,5>();
};

namespace std
{
	struct _Alloc_construct_ptr<allocator<_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *>,void *> > >
	{
		~_Alloc_construct_ptr<allocator<_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *>,void *> > >();
	};

	struct _Alloc_construct_ptr<allocator<_List_node<winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIcon::NetworkIconProviderData,void *> > >
	{
		~_Alloc_construct_ptr<allocator<_List_node<winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIcon::NetworkIconProviderData,void *> > >();
	};

	class _Hash<_Umap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,char const *,_Uhash_compare<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,hash<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,equal_to<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *> >,0> >
	{
		struct _Clear_guard
		{
			~_Clear_guard();
		};

		struct _Range_eraser
		{
			void _Bump_erased();
		};

		_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *>,void *> * _Unchecked_erase(_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *>,void *> *,_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *>,void *> * const);
	protected:
		_Hash<_Umap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,char const *,_Uhash_compare<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,hash<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,equal_to<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *> >,0> >(_Uhash_compare<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,hash<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,equal_to<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > const &,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *> > const &);
		_Hash_find_last_result<_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *>,void *> *> _Find_last<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,unsigned __int64);
		_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *>,void *> * _Insert_new_node_before(unsigned __int64,_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *>,void *> * const,_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *>,void *> * const);
		unsigned __int64 _Desired_grow_bucket_count(unsigned __int64);
		void _Forced_rehash(unsigned __int64);
	public:
		pair<_List_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *> > > >,bool> emplace<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *> const &>(pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *> const &);
		void insert(initializer_list<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *> >);
		~_Hash<_Umap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,char const *,_Uhash_compare<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,hash<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,equal_to<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *> >,0> >();
	};

	struct _Hash_vec<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *> > > > > >
	{
		void _Assign_grow(unsigned __int64,_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *> > > >);
		~_Hash_vec<allocator<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *> > > > > >();
	};

	struct _List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *>,void *>
	{
		static void _Free_non_head<allocator<_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *>,void *> > >(allocator<_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *>,void *> > &,_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *>,void *> *);
		static void _Freenode<allocator<_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *>,void *> > >(allocator<_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *>,void *> > &,_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *>,void *> *);
	};

	struct _List_node<winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIcon::NetworkIconProviderData,void *>
	{
		static void _Freenode<allocator<_List_node<winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIcon::NetworkIconProviderData,void *> > >(allocator<_List_node<winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIcon::NetworkIconProviderData,void *> > &,_List_node<winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIcon::NetworkIconProviderData,void *> *);
	};

	struct _List_node_emplace_op2<allocator<_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *>,void *> > >
	{
		~_List_node_emplace_op2<allocator<_List_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *>,void *> > >();
	};

	struct _List_node_emplace_op2<allocator<_List_node<winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIcon::NetworkIconProviderData,void *> > >
	{
		~_List_node_emplace_op2<allocator<_List_node<winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIcon::NetworkIconProviderData,void *> > >();
	};

	struct _Optional_destruct_base<winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIcon::NetworkIconProviderData,0>
	{
		~_Optional_destruct_base<winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIcon::NetworkIconProviderData,0>();
	};

	struct _Uhash_compare<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,hash<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,equal_to<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
		bool operator()<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		unsigned __int64 operator()<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
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

	struct bad_optional_access
	{
		bad_optional_access(bad_optional_access const &);
		virtual char const * what();
		virtual ~bad_optional_access();
	};

	class basic_string<char,char_traits<char>,allocator<char> >
	{
		basic_string<char,char_traits<char>,allocator<char> > & _Reallocate_for<<lambda_66f57f934f28d61049862f64df852ff0>,char const *>(unsigned __int64,<lambda_66f57f934f28d61049862f64df852ff0>,char const *);
	public:
		basic_string<char,char_traits<char>,allocator<char> > & assign(char const * const,unsigned __int64);
		basic_string<char,char_traits<char>,allocator<char> >(char const * const);
		~basic_string<char,char_traits<char>,allocator<char> >();
	};

	class basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >
	{
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & _Reallocate_for<<lambda_05cef1f6fdf474c9f3ed207deba0f73b>,unsigned short const *>(unsigned __int64,<lambda_05cef1f6fdf474c9f3ed207deba0f73b>,unsigned short const *);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & _Reallocate_grow_by<<lambda_7030d12a21dba11210293044e97fe9c7>,unsigned short const *,unsigned __int64>(unsigned __int64,<lambda_7030d12a21dba11210293044e97fe9c7>,unsigned short const *,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & _Reallocate_grow_by<<lambda_b70241e9b5ebaad244db3e52d52cab17>,unsigned __int64,unsigned short>(unsigned __int64,<lambda_b70241e9b5ebaad244db3e52d52cab17>,unsigned __int64,unsigned short);
		unsigned __int64 _Calculate_growth(unsigned __int64);
	public:
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & assign(unsigned short const * const,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(unsigned short const * const);
		void resize(unsigned __int64,unsigned short);
		~basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >();
	};

	struct exception
	{
		exception(exception const &);
		virtual char const * what();
	};

	struct exception_ptr
	{
		~exception_ptr();
	};

	namespace experimental
	{
		namespace coroutine_traits<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipComponent *>
		{
			struct promise_type
			{
				virtual ~promise_type();
			};

		};

		namespace coroutine_traits<winrt::fire_and_forget,unique_ptr<winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipComponent,default_delete<winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipComponent> > >
		{
			struct promise_type
			{
				void unhandled_exception();
			};

		};

		namespace coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIcon *,bool,winrt::guid>
		{
			struct promise_type
			{
				void unhandled_exception();
			};

		};

		namespace coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIcon *>
		{
			struct promise_type
			{
				void unhandled_exception();
			};

		};

		namespace coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipComponent *>
		{
			struct promise_type
			{
				suspend_never final_suspend();
				void unhandled_exception();
			};

		};

	};

	struct invalid_argument
	{
		invalid_argument(invalid_argument const &);
		virtual ~invalid_argument();
	};

	struct list<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *> > >
	{
		~list<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *> > >();
	};

	struct list<winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIcon::NetworkIconProviderData,allocator<winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIcon::NetworkIconProviderData> >
	{
		~list<winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIcon::NetworkIconProviderData,allocator<winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIcon::NetworkIconProviderData> >();
	};

	struct logic_error
	{
		logic_error(logic_error const &);
	};

	struct optional<winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIcon::NetworkIconProviderData>
	{
		unsigned char & value( ?? ::Z winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIcon::NetworkIconProviderData::&, ?? );
		~optional<winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIcon::NetworkIconProviderData>();
	};

	struct pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *>
	{
		pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *><unsigned short const (&)[1],char const (&)[1],0>(unsigned short const (&)[1],char const (&)[1]);
		pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *><unsigned short const * const &,char const (&)[10],0>(unsigned short const * const &,char const (&)[10]);
		pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *><unsigned short const * const &,char const (&)[13],0>(unsigned short const * const &,char const (&)[13]);
		pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *><unsigned short const * const &,char const (&)[15],0>(unsigned short const * const &,char const (&)[15]);
		pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *><unsigned short const * const &,char const (&)[17],0>(unsigned short const * const &,char const (&)[17]);
		pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *><unsigned short const * const &,char const (&)[19],0>(unsigned short const * const &,char const (&)[19]);
		pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *><unsigned short const * const &,char const (&)[20],0>(unsigned short const * const &,char const (&)[20]);
		pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *><unsigned short const * const &,char const (&)[23],0>(unsigned short const * const &,char const (&)[23]);
		pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *><unsigned short const * const &,char const (&)[9],0>(unsigned short const * const &,char const (&)[9]);
		~pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *>();
	};

	struct unique_ptr<winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipComponent,default_delete<winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipComponent> >
	{
		~unique_ptr<winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipComponent,default_delete<winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipComponent> >();
	};

	struct unique_ptr<winrt::impl::threadpool_resume,default_delete<winrt::impl::threadpool_resume> >
	{
		~unique_ptr<winrt::impl::threadpool_resume,default_delete<winrt::impl::threadpool_resume> >();
	};

	struct unordered_map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,char const *,hash<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,equal_to<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *> > >
	{
		unordered_map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,char const *,hash<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,equal_to<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *> > >(initializer_list<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *> >);
	};

	class vector<winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipCacheEntry,allocator<winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipCacheEntry> >
	{
		void _Change_array(winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipCacheEntry * const,unsigned __int64,unsigned __int64);
		void _Tidy();
	};

	bool _Traits_equal<char_traits<unsigned short> >(unsigned short const * const,unsigned __int64,unsigned short const * const,unsigned __int64);
	nothrow_t const std::nothrow;
	std::basic_string<char,std::char_traits<char>,std::allocator<char> > _UIntegral_to_string<char,unsigned __int64>(unsigned __int64);
	unsigned __int64 _Get_size_of_n<32>(unsigned __int64);
	void * _Allocate<16,_Default_allocate_traits,0>(unsigned __int64);
	void _Deallocate<16,0>(void *,unsigned __int64);
	void _Destroy_range<allocator<winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipCacheEntry> >(winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipCacheEntry *,winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipCacheEntry * const,std::allocator<winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipCacheEntry> &);
	void _Destroy_range<winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> *,winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> *>(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> *,winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> * const);
	void _Destroy_range<winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconEventHandler *,winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconEventHandler *>(winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconEventHandler *,winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconEventHandler * const);
	void _Destroy_range<winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconProviderEventHandler *,winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconProviderEventHandler *>(winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconProviderEventHandler *,winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconProviderEventHandler * const);
	void _Throw_bad_array_new_length();
	void _Xlen_string();
	void fill<_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *> > > > *,_List_unchecked_iterator<_List_val<_List_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,char const *> > > > >(std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,char const *> > > > * const,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,char const *> > > > * const,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,char const *> > > > const &);
	void swap<winrt::weak_ref<winrt::Windows::Networking::UX::INetworkUXManager>,0>(winrt::weak_ref<winrt::Windows::Networking::UX::INetworkUXManager> &,winrt::weak_ref<winrt::Windows::Networking::UX::INetworkUXManager> &);
	winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipCacheEntry * _Uninitialized_move<winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipCacheEntry *,allocator<winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipCacheEntry> >(winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipCacheEntry * const,winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipCacheEntry * const,winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipCacheEntry *,std::allocator<winrt::Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipCacheEntry> &);
};

namespace wil
{
	class ActivityBase<NetworkIconLogger,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<NetworkIconLogger,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<NetworkIconLogger,_TlgReflectorTag_Param0IsProviderType>();
		};

	protected:
		void Destroy();
	public:
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void Stop(long);
		void zInternalStop();
		~ActivityBase<NetworkIconLogger,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>();
	};

	class ActivityBase<NetworkIconLogger,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>
	{
		struct ActivityData<NetworkIconLogger,_TlgReflectorTag_Param0IsProviderType>
		{
			bool SetStopResult(long,long *);
			~ActivityData<NetworkIconLogger,_TlgReflectorTag_Param0IsProviderType>();
		};

	protected:
		void Destroy();
		void EnsureWatchingCurrentThread();
	public:
		ActivityBase<NetworkIconLogger,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(char const *,bool);
		_GUID const * zInternalRelatedId();
		virtual bool NotifyFailure(FailureInfo const &);
		void IgnoreCurrentThread();
		void Stop(long);
		void zInternalStart();
		void zInternalStop();
		~ActivityBase<NetworkIconLogger,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>();
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

	struct critical_section
	{
		~critical_section();
	};

	namespace details
	{
		class ThreadFailureCallbackHolder
		{
			static long volatile s_telemetryId;
		public:
			static bool GetThreadContext(FailureInfo *,ThreadFailureCallbackHolder *,char *,unsigned __int64);
			static void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
			void StartWatching();
			void StopWatching();
			~ThreadFailureCallbackHolder();
		};

		namespace in1diag3
		{
			long Log_CaughtException(void *,unsigned int,char const *);
			long Log_Hr(void *,unsigned int,char const *,long);
			long Return_GetLastError(void *,unsigned int,char const *);
			long Return_NtStatus(void *,unsigned int,char const *,long);
			void FailFast_Unexpected(void *,unsigned int,char const *);
			void Return_Hr(void *,unsigned int,char const *,long);
			void Throw_Win32(void *,unsigned int,char const *,unsigned long);
			void _FailFastImmediate_Unexpected();
			void _FailFast_GetLastError(void *,unsigned int,char const *);
			void _Log_Hr(void *,unsigned int,char const *,long);
			void _Throw_GetLastError(void *,unsigned int,char const *);
			void _Throw_Hr(void *,unsigned int,char const *,long);
			void _Throw_Win32(void *,unsigned int,char const *,unsigned long);
		};

		class shared_buffer
		{
			void assign(long *,unsigned __int64);
		public:
			bool create(void const *,unsigned __int64);
			void reset();
		};

		struct shared_object<ActivityBase<NetworkIconLogger,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<NetworkIconLogger,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct shared_object<ActivityBase<NetworkIconLogger,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<NetworkIconLogger,_TlgReflectorTag_Param0IsProviderType> >
		{
			void reset();
		};

		struct static_lazy<NetworkIconLogger>
		{
			struct Completer
			{
				~Completer();
			};

			NetworkIconLogger * get(void (*)());
		};

		namespace static_lazy<NetworkIconTelemetry>
		{
			struct Completer
			{
				~Completer();
			};

		};

		struct static_lazy<NetworkingTriageScenario::GetConnected>
		{
			struct Completer
			{
				~Completer();
			};

			NetworkingTriageScenario::GetConnected * get(void (*)());
		};

		struct wnf_subscription_state<empty_wnf_state>
		{
			virtual ~wnf_subscription_state<empty_wnf_state>();
		};

		bool GetModuleInformation(void *,unsigned int *,char *,unsigned __int64);
		bool g_processShutdownInProgress;
		bool g_resultMessageCallbackSet;
		char const * (* ?? g_pfnGetModuleName)();
		char const * GetCurrentModuleName();
		details::ResultStatus ReportFailure_CaughtExceptionCommon<1>(void *,unsigned int,char const *,char const *,char const *,void *,unsigned short *,unsigned __int64,SupportedExceptions);
		details::ResultStatus ReportFailure_CaughtExceptionCommon<2>(void *,unsigned int,char const *,char const *,char const *,void *,unsigned short *,unsigned __int64,SupportedExceptions);
		details::ResultStatus ResultFromCaughtExceptionInternal(unsigned short *,unsigned __int64,bool *);
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
		long RecognizeCaughtExceptionFromCallback(unsigned short *,unsigned __int64);
		long ReportFailure_CaughtException<1>(void *,unsigned int,char const *,char const *,char const *,void *,SupportedExceptions);
		long ReportFailure_CaughtException<2>(void *,unsigned int,char const *,char const *,char const *,void *,SupportedExceptions);
		long ReportFailure_GetLastErrorHr<1>(void *,unsigned int,char const *,char const *,char const *,void *);
		long ReportFailure_NtStatus<1>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		long ReportFailure_Win32<0>(void *,unsigned int,char const *,char const *,char const *,void *,unsigned long);
		long ResultFromCaughtException_CppWinRt(unsigned short *,unsigned __int64,bool *);
		long RtlDisownModuleHeapAllocation(void *,void *);
		long StringCchPrintfA(char *,unsigned __int64,char const *,...);
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
		void FormatNtStatusMsg(long,unsigned short *,unsigned long);
		void FreeProcessHeap(void *);
		void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
		void LogFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,details::ResultStatus const &,unsigned short const *,bool,unsigned short *,unsigned __int64,char *,unsigned __int64,FailureInfo *);
		void MaybeGetExceptionString(ResultException const &,unsigned short *,unsigned __int64);
		void MaybeGetExceptionString(std::exception const &,unsigned short *,unsigned __int64);
		void MaybeGetExceptionString(winrt::hresult_error const &,unsigned short *,unsigned __int64);
		void MicrosoftInternalNotifyFailure(FailureInfo *);
		void ReleaseMutex(void *);
		void ReportFailure_Base<0,0>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Base<1,0>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Base<2,0>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Base<3,0>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Hr<0>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		void ReportFailure_Hr<1>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		void ReportFailure_Hr<2>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		void ReportFailure_Hr<3>(void *,unsigned int,char const *,char const *,char const *,void *,long);
		void ReportFailure_NoReturn<0>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_NoReturn<3>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Return<1>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Return<2>(void *,unsigned int,char const *,char const *,char const *,void *,details::ResultStatus const &,unsigned short const *,details::ReportFailureOptions);
		void Rethrow();
		void ThrowResultExceptionInternal(FailureInfo const &);
		void WilDynamicLoadRaiseFailFastException(_EXCEPTION_RECORD *,_CONTEXT *,unsigned long);
		void WilFailFast(FailureInfo const &);
		void WilRaiseFailFastException(_EXCEPTION_RECORD *,_CONTEXT *,unsigned long);
		void delete_wnf_subscription_state(details::wnf_subscription_state_base *);
	};

	namespace details_abi
	{
		struct ProcessLocalStorage<ProcessLocalData>
		{
			~ProcessLocalStorage<ProcessLocalData>();
		};

		struct ProcessLocalStorageData<ProcessLocalData>
		{
			static long Acquire(char const *,ProcessLocalStorageData<ProcessLocalData> * *);
			void Release();
			~ProcessLocalStorageData<ProcessLocalData>();
		};

		class SemaphoreValue
		{
			long CreateFromValueInternal(unsigned short const *,bool,unsigned __int64);
			static long GetValueFromSemaphore(void *,long *);
			static long TryGetValueInternal(unsigned short const *,bool,unsigned __int64 *,bool *);
		public:
			~SemaphoreValue();
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

		details_abi::ProcessLocalStorage<details_abi::ProcessLocalData> * g_pProcessLocalData;
		details_abi::ThreadLocalData * GetThreadLocalDataCache(bool);
	};

	struct last_error_context
	{
		~last_error_context();
	};

	WilFailureReportFlags g_moduleFailureReportFlags;
	bool (* ?? g_pfnIsDebuggerPresent)();
	bool (* ?? g_pfnWilFailFast)(wil::FailureInfo const &);
	bool g_fBreakOnFailure;
	bool g_fIsDebuggerPresent;
	int winrt_to_hresult(void *);
	long (* ?? g_pfnResultFromCaughtException)();
	long GetFailureLogString(unsigned short *,unsigned __int64,wil::FailureInfo const &);
	void ThrowResultException(wil::FailureInfo const &);
	void winrt_throw_hresult(unsigned int,char const *,char const *,void *,winrt::hresult);
};

namespace winrt
{
	namespace Windows
	{
		namespace Foundation
		{
			struct AsyncActionCompletedHandler
			{
				AsyncActionCompletedHandler<impl::disconnect_aware_handler<impl::await_adapter<IAsyncAction> > >(impl::disconnect_aware_handler<impl::await_adapter<IAsyncAction> >);
				operator()(IAsyncAction const &,AsyncStatus const &);
				~AsyncActionCompletedHandler();
			};

			namespace Collections
			{
				struct IVector<Networking::UX::IAvailableNetwork>
				{
					~IVector<Networking::UX::IAvailableNetwork>();
				};

				struct IVector<Networking::UX::IUXCategory>
				{
					~IVector<Networking::UX::IUXCategory>();
				};

			};

			struct EventHandler<IInspectable>
			{
				operator()(IInspectable const &,IInspectable const &);
				~EventHandler<IInspectable>();
			};

			struct IActivationFactory
			{
				Networking::UX::UXManager ActivateInstance<Networking::UX::UXManager>();
				~IActivationFactory();
			};

			struct IAsyncAction
			{
				~IAsyncAction();
			};

			struct IAsyncInfo
			{
				~IAsyncInfo();
			};

			struct IInspectable
			{
				~IInspectable();
			};

			class IUnknown
			{
				void add_ref();
				void unconditional_release_ref();
			public:
				IUnknown & operator=(IUnknown const &);
			};

			bool operator==(Foundation::IUnknown const &,Foundation::IUnknown const &);
		};

		namespace Internal
		{
			namespace UI
			{
				namespace NetworkUX
				{
					namespace NetworkIcon
					{
						struct IIconData
						{
							~IIconData();
						};

						struct INetworkIcon
						{
							~INetworkIcon();
						};

						struct INetworkIconProvider
						{
							~INetworkIconProvider();
						};

						struct IconData
						{
							~IconData();
						};

						struct NetworkIconEventHandler
						{
							operator()(bool,IconData const &);
							~NetworkIconEventHandler();
						};

						struct NetworkIconProviderEventHandler
						{
							operator()(bool,guid const &);
							~NetworkIconProviderEventHandler();
						};

						namespace factory_implementation
						{
							struct NetworkIcon
							{
								virtual Foundation::TrustLevel GetTrustLevel();
							};

						};

						namespace implementation
						{
							class AirplaneModeIconProvider
							{
								virtual void AirplaneModeEventHandler(bool,bool);
								virtual void QueryState();
							public:
								AirplaneModeIconProvider(Networking::UX::INetworkUXManager const &);
								virtual ~AirplaneModeIconProvider();
							};

							class CellularDataStatusIconProvider
							{
								virtual void QueryState();
								virtual void RefreshIcon();
								virtual void UXCategoryEventHandler(Networking::UX::ChangeEventType const &,guid const &);
							public:
								CellularDataStatusIconProvider(Networking::UX::INetworkUXManager const &,Networking::UX::IUXCategory const &);
								virtual ~CellularDataStatusIconProvider();
							};

							class EthernetIconProvider
							{
								virtual void QueryState();
								virtual void UXCategoryEventHandler(Networking::UX::ChangeEventType const &,guid const &);
							public:
								EthernetIconProvider(Networking::UX::INetworkUXManager const &,Networking::UX::IUXCategory const &);
								virtual ~EthernetIconProvider();
							};

							struct IconData
							{
								IconData(hstring const &,hstring const &,hstring const &,hstring const &,hstring const &);
								virtual ~IconData();
							};

							class NetworkIcon
							{
								struct NetworkIconProviderData
								{
									NetworkIconProviderData(INetworkIconProvider const &,event_token const &);
									~NetworkIconProviderData();
								};

								INetworkIconProvider GetPreferredIconProvider();
								bool TryInitializeTooltipComponent(Networking::UX::IUXManager const &,Networking::UX::INetworkUXManager const &,agile_ref<INetworkListManagerPrivate> const &);
								fire_and_forget RequestIconRefresh(bool,guid);
								fire_and_forget RequestTooltipRefresh();
								void AddProviderForCategory(Networking::UX::IUXCategory const &,bool);
								void IconProviderEventHandler(bool,guid const &);
								void InitializeAirplaneModeProvider();
								void InitializeCategoryProviders();
								void InitializeNetworkUXManager();
								void RefreshIcon(bool,guid const &);
								void RefreshTooltip();
								void TooltipEventHandler(Foundation::IInspectable const &,Foundation::IInspectable const &);
								void UXCategoryEventHandler(Networking::UX::ChangeEventType const &,guid const &);
							public:
								IconData GetIcon();
								NetworkIcon(bool);
								virtual ~NetworkIcon();
								void QueryInitialState();
							};

							class NetworkIconProviderBase
							{
							protected:
								NetworkIconProviderBase(hstring const &,hstring const &,hstring const &);
								virtual void RefreshIcon();
								void LogIconUpdate(bool);
								void SendIconUpdate(bool);
							public:
								virtual IconData GetIconData();
								virtual bool IsActive();
								virtual bool IsResponsibleForInterface(guid const &,bool);
								virtual event_token NetworkIconProviderEvent(NetworkIconProviderEventHandler const &);
								virtual guid GetGuid();
								virtual unsigned long GetIfType();
								virtual void AirplaneModeEventHandler(bool,bool);
								virtual void NetworkIconProviderEvent(event_token const &);
								virtual void QueryInitialState(bool);
								virtual void UXCategoryEventHandler(Networking::UX::ChangeEventType const &,guid const &);
								virtual ~NetworkIconProviderBase();
							};

							struct TooltipCache
							{
								hstring ToString(hstring const &,hstring const &,hstring const &,hstring const &,hstring const &,hstring const &,hstring const &);
								~TooltipCache();
							};

							struct TooltipCacheBuilder
							{
								void AddCacheEntry(_GUID const &,NetworkConnectivityStatus,hstring const &,InterfaceType,CaptivePortalState,VpnType,bool);
								~TooltipCacheBuilder();
							};

							class TooltipComponent
							{
								Foundation::IAsyncAction InitializeAsync();
								Foundation::IAsyncAction UninitializeAsync();
								bool RebuildTooltipCache(wil::write_lock_required);
								fire_and_forget AirplaneModeChanged();
								fire_and_forget AvailableNetworksChanged();
								fire_and_forget NlmOrUXCategoryChanged();
								fire_and_forget RasServiceStarted();
								static void RasServiceChangedHandler(unsigned long,void *);
								virtual long OnNetworkGlobalStateChanged();
								void AirplaneModeEventHandler(bool,bool);
								void AvailableNetworkEventHandler(Networking::UX::IUXCategory const &,Networking::UX::ChangeEventType,guid const &);
								void UXCategoryEventHandler(Networking::UX::ChangeEventType,guid const &);
							public:
								TooltipComponent(Networking::UX::IUXManager const &,Networking::UX::INetworkUXManager const &,agile_ref<INetworkListManagerPrivate> const &);
								hstring GetTooltip();
								static fire_and_forget final_release(std::unique_ptr<TooltipComponent,std::default_delete<TooltipComponent> >);
								virtual ~TooltipComponent();
							};

							class WiFiIconProvider
							{
								virtual void QueryState();
								virtual void RefreshIcon();
								virtual void UXCategoryEventHandler(Networking::UX::ChangeEventType const &,guid const &);
								void QueryStateWiFi();
							public:
								WiFiIconProvider(Networking::UX::INetworkUXManager const &,Networking::UX::IUXCategory const &);
								virtual ~WiFiIconProvider();
							};

							Networking::UX::IUXCategory FindInterface(Foundation::Collections::IVector<Networking::UX::IUXCategory> const &,_GUID const &);
							hstring GetInterfaceName(_GUID const &,Networking::UX::IUXCategory const &,INetworkListManagerPrivate *);
							implementation::WiFiAvailableNetworkStatus WiFiCategoryHasAvailableNetworks(Networking::UX::IUXCategory const &);
						};

					};

				};

			};

		};

		namespace Networking
		{
			namespace UX
			{
				struct AirplaneModeEventHandler
				{
					~AirplaneModeEventHandler();
				};

				struct AvailableNetworkEventHandler
				{
					~AvailableNetworkEventHandler();
				};

				struct INetworkUXManager
				{
					~INetworkUXManager();
				};

				struct IUXCategory
				{
					~IUXCategory();
				};

				struct IUXManager
				{
					~IUXManager();
				};

				struct UXCategoryEventHandler
				{
					~UXCategoryEventHandler();
				};

			};

		};

	};

	struct agile_ref<INetworkListManagerPrivate>
	{
		com_ptr<INetworkListManagerPrivate> get();
		~agile_ref<INetworkListManagerPrivate>();
	};

	class com_ptr<IConnectionPoint>
	{
		void unconditional_release_ref();
	public:
		~com_ptr<IConnectionPoint>();
	};

	class com_ptr<IConnectionPointContainer>
	{
		void unconditional_release_ref();
	public:
		~com_ptr<IConnectionPointContainer>();
	};

	class com_ptr<IEnumNetworkInterfacePrivate>
	{
		void unconditional_release_ref();
	public:
		~com_ptr<IEnumNetworkInterfacePrivate>();
	};

	class com_ptr<INetworkListManagerPrivate>
	{
		void unconditional_release_ref();
	public:
		~com_ptr<INetworkListManagerPrivate>();
	};

	class com_ptr<INetworkPrivate>
	{
		void unconditional_release_ref();
	public:
		INetworkPrivate * * put();
		~com_ptr<INetworkPrivate>();
	};

	class com_ptr<IPropertyBag>
	{
		void unconditional_release_ref();
	public:
		~com_ptr<IPropertyBag>();
	};

	class com_ptr<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIcon>
	{
		void unconditional_release_ref();
	public:
		~com_ptr<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIcon>();
	};

	class com_ptr<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIconProviderBase>
	{
		void unconditional_release_ref();
	public:
		~com_ptr<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIconProviderBase>();
	};

	class com_ptr<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipComponent>
	{
		void unconditional_release_ref();
	public:
		~com_ptr<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipComponent>();
	};

	class com_ptr<impl::IAgileObject>
	{
		void unconditional_release_ref();
	};

	class com_ptr<impl::IAgileReference>
	{
		void unconditional_release_ref();
	public:
		impl::IAgileReference * * put();
		~com_ptr<impl::IAgileReference>();
	};

	class com_ptr<impl::IContextCallback>
	{
		void unconditional_release_ref();
	};

	class com_ptr<impl::IErrorInfo>
	{
		void unconditional_release_ref();
	public:
		impl::IErrorInfo * * put();
	};

	class com_ptr<impl::IGlobalInterfaceTable>
	{
		void unconditional_release_ref();
	public:
		impl::IGlobalInterfaceTable * * put();
	};

	class com_ptr<impl::ILanguageExceptionErrorInfo2>
	{
		void unconditional_release_ref();
	};

	class com_ptr<impl::IMarshal>
	{
		void unconditional_release_ref();
	};

	class com_ptr<impl::IRestrictedErrorInfo>
	{
		void unconditional_release_ref();
	};

	class com_ptr<impl::IWeakReference>
	{
		void unconditional_release_ref();
	public:
		impl::IWeakReference * * put();
		~com_ptr<impl::IWeakReference>();
	};

	class com_ptr<impl::IWeakReferenceSource>
	{
		void unconditional_release_ref();
	public:
		impl::IWeakReferenceSource * * put();
		~com_ptr<impl::IWeakReferenceSource>();
	};

	class com_ptr<impl::abi<Windows::Foundation::IActivationFactory,void>::type>
	{
		void unconditional_release_ref();
	public:
		impl::abi<Windows::Foundation::IActivationFactory,void>::type * * put();
	};

	class com_ptr<impl::abi<Windows::Foundation::IUnknown,void>::type>
	{
		void unconditional_release_ref();
	public:
		impl::abi<Windows::Foundation::IUnknown,void>::type * * put();
	};

	class com_ptr<impl::event_array<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> > >
	{
		void unconditional_release_ref();
	public:
		~com_ptr<impl::event_array<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> > >();
	};

	class com_ptr<impl::event_array<Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconEventHandler> >
	{
		void unconditional_release_ref();
	public:
		~com_ptr<impl::event_array<Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconEventHandler> >();
	};

	class com_ptr<impl::event_array<Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconProviderEventHandler> >
	{
		void unconditional_release_ref();
	public:
		~com_ptr<impl::event_array<Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconProviderEventHandler> >();
	};

	class com_ptr<impl::weak_ref<1,1> >
	{
		void unconditional_release_ref();
	public:
		impl::weak_ref<1,1> * * put();
	};

	struct enable_await_cancellation
	{
		~enable_await_cancellation();
	};

	class event<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> >
	{
		event_token get_token(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const &);
	public:
		event_token add(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const &);
		void remove(event_token);
		~event<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> >();
	};

	class event<Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconEventHandler>
	{
		event_token get_token(Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconEventHandler const &);
	public:
		event_token add(Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconEventHandler const &);
		void operator()<bool,Windows::Internal::UI::NetworkUX::NetworkIcon::IconData>(bool const &,Windows::Internal::UI::NetworkUX::NetworkIcon::IconData const &);
		void remove(event_token);
		~event<Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconEventHandler>();
	};

	class event<Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconProviderEventHandler>
	{
		event_token get_token(Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconProviderEventHandler const &);
	public:
		event_token add(Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconProviderEventHandler const &);
		void operator()<bool,guid>(bool const &,guid const &);
		void remove(event_token);
	};

	struct guid
	{
		guid<1>(_GUID const &);
	};

	struct handle_type<impl::bstr_traits>
	{
		unsigned short * * put();
		void close();
	};

	struct handle_type<impl::heap_traits>
	{
		unsigned short * * put();
		void close();
	};

	struct handle_type<impl::hstring_traits>
	{
		impl::hstring_header * * put();
		void attach(impl::hstring_header *);
		void close();
	};

	struct hresult_access_denied
	{
		hresult_access_denied(hresult_access_denied const &);
		~hresult_access_denied();
	};

	struct hresult_canceled
	{
		hresult_canceled(hresult_canceled const &);
		~hresult_canceled();
	};

	struct hresult_changed_state
	{
		hresult_changed_state(hresult_changed_state const &);
		~hresult_changed_state();
	};

	struct hresult_class_not_available
	{
		hresult_class_not_available(hresult_class_not_available const &);
		~hresult_class_not_available();
	};

	struct hresult_class_not_registered
	{
		hresult_class_not_registered(hresult_class_not_registered const &);
		~hresult_class_not_registered();
	};

	class hresult_error
	{
		static int fallback_RoOriginateLanguageException(int,void *,void *);
		void originate(hresult,void *);
	public:
		hresult to_abi();
		hresult_error(hresult);
		hresult_error(hresult,param::hstring const &);
		hresult_error(hresult,take_ownership_from_abi_t);
		hresult_error(hresult_error const &);
		hstring message();
		~hresult_error();
	};

	struct hresult_illegal_delegate_assignment
	{
		hresult_illegal_delegate_assignment(hresult_illegal_delegate_assignment const &);
		~hresult_illegal_delegate_assignment();
	};

	struct hresult_illegal_method_call
	{
		hresult_illegal_method_call(hresult_illegal_method_call const &);
		~hresult_illegal_method_call();
	};

	struct hresult_illegal_state_change
	{
		hresult_illegal_state_change(hresult_illegal_state_change const &);
		~hresult_illegal_state_change();
	};

	struct hresult_invalid_argument
	{
		hresult_invalid_argument(hresult_invalid_argument const &);
		~hresult_invalid_argument();
	};

	struct hresult_no_interface
	{
		hresult_no_interface(hresult_no_interface const &);
		~hresult_no_interface();
	};

	struct hresult_not_implemented
	{
		hresult_not_implemented(hresult_not_implemented const &);
		~hresult_not_implemented();
	};

	struct hresult_out_of_bounds
	{
		hresult_out_of_bounds(hresult_out_of_bounds const &);
		~hresult_out_of_bounds();
	};

	struct hresult_wrong_thread
	{
		hresult_wrong_thread(hresult_wrong_thread const &);
		~hresult_wrong_thread();
	};

	struct hstring
	{
		hstring & operator=(unsigned short const * const);
		hstring(hstring const &);
		hstring(std::basic_string_view<unsigned short,std::char_traits<unsigned short> > const &);
		hstring(unsigned short const *);
		hstring(unsigned short const *,unsigned int);
		operator std::basic_string_view<unsigned short,std::char_traits<unsigned short> >();
		unsigned short const * c_str();
		~hstring();
	};

	namespace impl
	{
		struct agile_ref_fallback
		{
			virtual int QueryInterface(guid const &,void * *);
			virtual int Resolve(guid const &,void * *);
			virtual unsigned int AddRef();
			virtual unsigned int Release();
			~agile_ref_fallback();
		};

		struct atomic_ref_count
		{
			unsigned int operator--();
		};

		struct await_adapter<Windows::Foundation::IAsyncAction>
		{
			await_suspend(std::experimental::coroutine_handle<void>);
		};

		namespace collection_version
		{
			struct iterator_type
			{
				void check_version(collection_version const &);
			};

		};

		struct consume_Windows_Foundation_Collections_IVector<Windows::Foundation::Collections::IVector<Windows::Networking::UX::IUXCategory>,Windows::Networking::UX::IUXCategory>
		{
			GetAt(unsigned int);
			Size();
		};

		struct consume_Windows_Foundation_IAsyncAction<Windows::Foundation::IAsyncAction>
		{
			Completed(Windows::Foundation::AsyncActionCompletedHandler const &);
			GetResults();
		};

		struct consume_Windows_Foundation_IAsyncInfo<Windows::Foundation::IAsyncAction>
		{
			Status();
		};

		struct consume_Windows_Internal_UI_NetworkUX_NetworkIcon_IIconData<Windows::Internal::UI::NetworkUX::NetworkIcon::IIconData>
		{
			BaseText();
			OverlayText();
			UnderlayText();
		};

		struct consume_Windows_Internal_UI_NetworkUX_NetworkIcon_INetworkIconProvider<Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconProvider>
		{
			GetGuid();
			GetIconData();
			GetIfType();
			IsActive();
			NetworkIconProviderEvent(Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconProviderEventHandler const &);
			QueryInitialState(bool);
		};

		struct consume_Windows_Networking_UX_INetworkUXManager<Windows::Networking::UX::INetworkUXManager>
		{
			GetAirplaneMode(bool &,bool &);
			GetUXCategories(Windows::Networking::UX::NetworkMediaType const &);
			GetUXCategory(guid const &);
		};

		struct consume_Windows_Networking_UX_IUXCategory<Windows::Networking::UX::IUXCategory>
		{
			AvailableNetworkList();
			ConnectionName();
			Connectivity();
			Id();
			IsParentOfVirtualAdapter(guid const &,bool &);
			MediaType();
			SignalStrengthBar();
		};

		struct consume_Windows_Networking_UX_IUXManager<Windows::Networking::UX::IUXManager>
		{
			GetNetworkUXManagerForSpecificMediaTypes(param::vector_view<Windows::Networking::UX::NetworkMediaType> const &,bool);
		};

		struct delegate<Windows::Foundation::AsyncActionCompletedHandler,<lambda_cc934bcfcfb2415fd654dddf326e340e> >
		{
			virtual int Invoke(void *,int);
		};

		struct delegate<Windows::Foundation::AsyncActionCompletedHandler,disconnect_aware_handler<await_adapter<Windows::Foundation::IAsyncAction> > >
		{
			virtual int Invoke(void *,int);
		};

		struct delegate<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable>,<lambda_5b466eb8a9a42f2f9915c9a278531277> >
		{
			virtual int Invoke(void *,void *);
		};

		struct delegate<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable>,<lambda_bdd03f877925d36d83d9de4a84c76bc9> >
		{
			virtual int Invoke(void *,void *);
		};

		struct delegate<Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconEventHandler,<lambda_dbe35245596551214d978de66bb8cd07> >
		{
			virtual int Invoke(bool,void *);
		};

		struct delegate<Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconProviderEventHandler,<lambda_9e087f375672d960376cef1bc4479c1e> >
		{
			virtual int Invoke(bool,guid);
		};

		struct delegate<Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconProviderEventHandler,<lambda_d55d75ad6ddc2b865b2c0133d1125b18> >
		{
			virtual int Invoke(bool,guid);
		};

		struct delegate<Windows::Networking::UX::AirplaneModeEventHandler,<lambda_397cd64e8bf0800bdc535bd59c0dd482> >
		{
			virtual int Invoke(bool,bool);
		};

		struct delegate<Windows::Networking::UX::AirplaneModeEventHandler,<lambda_c346012d7f80ea4e3f9f2805d04338d5> >
		{
			virtual int Invoke(bool,bool);
		};

		struct delegate<Windows::Networking::UX::AvailableNetworkEventHandler,<lambda_073feab8f227e1f006139d005e705fdf> >
		{
			virtual int Invoke(void *,int,guid);
		};

		struct delegate<Windows::Networking::UX::UXCategoryEventHandler,<lambda_96e3bbe75d194682a42a99f6c2722570> >
		{
			virtual int Invoke(int,guid);
		};

		struct delegate<Windows::Networking::UX::UXCategoryEventHandler,<lambda_ac8e174acb041fefc9289cd8ef98dacb> >
		{
			virtual int Invoke(int,guid);
		};

		struct delegate<Windows::Networking::UX::UXCategoryEventHandler,<lambda_aff9dd1032eaaebd8553e81bda11cdec> >
		{
			virtual int Invoke(int,guid);
		};

		class disconnect_aware_handler<await_adapter<Windows::Foundation::IAsyncAction> >
		{
			void Complete();
		public:
			~disconnect_aware_handler<await_adapter<Windows::Foundation::IAsyncAction> >();
		};

		struct error_info_fallback
		{
			error_info_fallback(int,void *);
			virtual int GetDescription(unsigned short * *);
			virtual int GetErrorDetails(unsigned short * *,int *,unsigned short * *,unsigned short * *);
			virtual int GetGUID(guid *);
			virtual int GetHelpContext(unsigned int *);
			virtual int GetHelpFile(unsigned short * *);
			virtual int GetReference(unsigned short * *);
			virtual int GetSource(unsigned short * *);
			virtual int QueryInterface(guid const &,void * *);
			virtual unsigned int AddRef();
			virtual unsigned int Release();
			~error_info_fallback();
		};

		struct factory_count_guard
		{
			~factory_count_guard();
		};

		struct fast_iterator<Windows::Foundation::Collections::IVector<Windows::Networking::UX::IUXCategory> >
		{
			Windows::Networking::UX::IUXCategory operator*();
		};

		struct heap_implements<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::IconData>
		{
			heap_implements<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::IconData>(hstring const &,hstring const &,hstring const &);
			heap_implements<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::IconData>(hstring const &,hstring const &,hstring const &,hstring const &,hstring const &);
		};

		struct implements_delegate<Windows::Foundation::AsyncActionCompletedHandler,<lambda_cc934bcfcfb2415fd654dddf326e340e> >
		{
			virtual int QueryInterface(guid const &,void * *);
			virtual unsigned int AddRef();
			virtual unsigned int Release();
			~implements_delegate<Windows::Foundation::AsyncActionCompletedHandler,<lambda_cc934bcfcfb2415fd654dddf326e340e> >();
		};

		struct implements_delegate<Windows::Foundation::AsyncActionCompletedHandler,disconnect_aware_handler<await_adapter<Windows::Foundation::IAsyncAction> > >
		{
			virtual int QueryInterface(guid const &,void * *);
			virtual unsigned int AddRef();
			virtual unsigned int Release();
			~implements_delegate<Windows::Foundation::AsyncActionCompletedHandler,disconnect_aware_handler<await_adapter<Windows::Foundation::IAsyncAction> > >();
		};

		struct implements_delegate<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable>,<lambda_5b466eb8a9a42f2f9915c9a278531277> >
		{
			virtual int QueryInterface(guid const &,void * *);
			virtual unsigned int AddRef();
			virtual unsigned int Release();
			~implements_delegate<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable>,<lambda_5b466eb8a9a42f2f9915c9a278531277> >();
		};

		struct implements_delegate<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable>,<lambda_bdd03f877925d36d83d9de4a84c76bc9> >
		{
			virtual int QueryInterface(guid const &,void * *);
			virtual unsigned int AddRef();
			virtual unsigned int Release();
			~implements_delegate<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable>,<lambda_bdd03f877925d36d83d9de4a84c76bc9> >();
		};

		struct implements_delegate<Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconEventHandler,<lambda_dbe35245596551214d978de66bb8cd07> >
		{
			virtual int QueryInterface(guid const &,void * *);
			virtual unsigned int AddRef();
			virtual unsigned int Release();
			~implements_delegate<Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconEventHandler,<lambda_dbe35245596551214d978de66bb8cd07> >();
		};

		struct implements_delegate<Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconProviderEventHandler,<lambda_9e087f375672d960376cef1bc4479c1e> >
		{
			virtual int QueryInterface(guid const &,void * *);
			virtual unsigned int AddRef();
			virtual unsigned int Release();
			~implements_delegate<Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconProviderEventHandler,<lambda_9e087f375672d960376cef1bc4479c1e> >();
		};

		struct implements_delegate<Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconProviderEventHandler,<lambda_d55d75ad6ddc2b865b2c0133d1125b18> >
		{
			virtual int QueryInterface(guid const &,void * *);
			virtual unsigned int AddRef();
			virtual unsigned int Release();
			~implements_delegate<Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconProviderEventHandler,<lambda_d55d75ad6ddc2b865b2c0133d1125b18> >();
		};

		struct implements_delegate<Windows::Networking::UX::AirplaneModeEventHandler,<lambda_397cd64e8bf0800bdc535bd59c0dd482> >
		{
			virtual int QueryInterface(guid const &,void * *);
			virtual unsigned int AddRef();
			virtual unsigned int Release();
			~implements_delegate<Windows::Networking::UX::AirplaneModeEventHandler,<lambda_397cd64e8bf0800bdc535bd59c0dd482> >();
		};

		struct implements_delegate<Windows::Networking::UX::AirplaneModeEventHandler,<lambda_c346012d7f80ea4e3f9f2805d04338d5> >
		{
			virtual int QueryInterface(guid const &,void * *);
			virtual unsigned int AddRef();
			virtual unsigned int Release();
			~implements_delegate<Windows::Networking::UX::AirplaneModeEventHandler,<lambda_c346012d7f80ea4e3f9f2805d04338d5> >();
		};

		struct implements_delegate<Windows::Networking::UX::AvailableNetworkEventHandler,<lambda_073feab8f227e1f006139d005e705fdf> >
		{
			virtual int QueryInterface(guid const &,void * *);
			virtual unsigned int AddRef();
			virtual unsigned int Release();
			~implements_delegate<Windows::Networking::UX::AvailableNetworkEventHandler,<lambda_073feab8f227e1f006139d005e705fdf> >();
		};

		struct implements_delegate<Windows::Networking::UX::UXCategoryEventHandler,<lambda_96e3bbe75d194682a42a99f6c2722570> >
		{
			virtual int QueryInterface(guid const &,void * *);
			virtual unsigned int AddRef();
			virtual unsigned int Release();
			~implements_delegate<Windows::Networking::UX::UXCategoryEventHandler,<lambda_96e3bbe75d194682a42a99f6c2722570> >();
		};

		struct implements_delegate<Windows::Networking::UX::UXCategoryEventHandler,<lambda_ac8e174acb041fefc9289cd8ef98dacb> >
		{
			virtual int QueryInterface(guid const &,void * *);
			virtual unsigned int AddRef();
			virtual unsigned int Release();
			~implements_delegate<Windows::Networking::UX::UXCategoryEventHandler,<lambda_ac8e174acb041fefc9289cd8ef98dacb> >();
		};

		struct implements_delegate<Windows::Networking::UX::UXCategoryEventHandler,<lambda_aff9dd1032eaaebd8553e81bda11cdec> >
		{
			virtual int QueryInterface(guid const &,void * *);
			virtual unsigned int AddRef();
			virtual unsigned int Release();
			~implements_delegate<Windows::Networking::UX::UXCategoryEventHandler,<lambda_aff9dd1032eaaebd8553e81bda11cdec> >();
		};

		struct notify_awaiter<Windows::Foundation::IAsyncAction>
		{
			UNKNOWN await_suspend<std::experimental::coroutine_traits<fire_and_forget,std::unique_ptr<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipComponent,std::default_delete<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipComponent> > >::promise_type>(std::experimental::coroutine_handle<std::experimental::coroutine_traits<fire_and_forget,std::unique_ptr<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipComponent,std::default_delete<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipComponent> > >::promise_type>);
			~notify_awaiter<Windows::Foundation::IAsyncAction>();
		};

		struct produce<Windows::Internal::UI::NetworkUX::NetworkIcon::factory_implementation::NetworkIcon,Windows::Foundation::IActivationFactory>
		{
			produce<Windows::Internal::UI::NetworkUX::NetworkIcon::factory_implementation::NetworkIcon,Windows::Foundation::IActivationFactory>();
			virtual int ActivateInstance(void * *);
		};

		struct produce<Windows::Internal::UI::NetworkUX::NetworkIcon::factory_implementation::NetworkIcon,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconFactory>
		{
			produce<Windows::Internal::UI::NetworkUX::NetworkIcon::factory_implementation::NetworkIcon,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconFactory>();
			virtual int CreateInstance(bool,void * *);
		};

		struct produce<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::IconData,Windows::Internal::UI::NetworkUX::NetworkIcon::IIconData>
		{
			produce<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::IconData,Windows::Internal::UI::NetworkUX::NetworkIcon::IIconData>();
			virtual int get_AltText(void * *);
			virtual int get_BaseText(void * *);
			virtual int get_OverlayText(void * *);
			virtual int get_ToolTipText(void * *);
			virtual int get_UnderlayText(void * *);
		};

		struct produce<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIcon,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIcon>
		{
			virtual int GetIcon(void * *);
			virtual int QueryInitialState();
			virtual int add_NetworkIconEvent(void *,event_token *);
			virtual int remove_NetworkIconEvent(event_token);
		};

		struct produce<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIconProviderBase,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconProvider>
		{
			produce<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIconProviderBase,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconProvider>();
			virtual int GetGuid(guid *);
			virtual int GetIconData(void * *);
			virtual int GetIfType(unsigned int *);
			virtual int IsActive(bool *);
			virtual int IsResponsibleForInterface(guid,bool,bool *);
			virtual int QueryInitialState(bool);
			virtual int add_NetworkIconProviderEvent(void *,event_token *);
			virtual int remove_NetworkIconProviderEvent(event_token);
		};

		struct produce<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkStatusStaticIconProvider,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconProvider>
		{
			produce<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkStatusStaticIconProvider,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconProvider>();
			virtual int GetGuid(guid *);
			virtual int GetIconData(void * *);
			virtual int GetIfType(unsigned int *);
			virtual int IsActive(bool *);
			virtual int IsResponsibleForInterface(guid,bool,bool *);
			virtual int QueryInitialState(bool);
			virtual int add_NetworkIconProviderEvent(void *,event_token *);
			virtual int remove_NetworkIconProviderEvent(event_token);
		};

		struct produce<std::experimental::coroutine_traits<Windows::Foundation::IAsyncAction,Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipComponent *>::promise_type,Windows::Foundation::IAsyncAction>
		{
			virtual int GetResults();
			virtual int get_Completed(void * *);
			virtual int put_Completed(void *);
		};

		struct produce<std::experimental::coroutine_traits<Windows::Foundation::IAsyncAction,Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipComponent *>::promise_type,Windows::Foundation::IAsyncInfo>
		{
			virtual int Cancel();
			virtual int Close();
			virtual int get_ErrorCode(hresult *);
			virtual int get_Id(unsigned int *);
			virtual int get_Status(int *);
		};

		struct produce_base<Windows::Internal::UI::NetworkUX::NetworkIcon::factory_implementation::NetworkIcon,Windows::Foundation::IActivationFactory,void>
		{
			produce_base<Windows::Internal::UI::NetworkUX::NetworkIcon::factory_implementation::NetworkIcon,Windows::Foundation::IActivationFactory,void>();
			virtual int GetIids(unsigned int *,guid * *);
			virtual int GetRuntimeClassName(void * *);
			virtual int GetTrustLevel(Windows::Foundation::TrustLevel *);
			virtual int QueryInterface(guid const &,void * *);
			virtual unsigned int AddRef();
			virtual unsigned int Release();
		};

		struct produce_base<Windows::Internal::UI::NetworkUX::NetworkIcon::factory_implementation::NetworkIcon,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconFactory,void>
		{
			produce_base<Windows::Internal::UI::NetworkUX::NetworkIcon::factory_implementation::NetworkIcon,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconFactory,void>();
			virtual int GetIids(unsigned int *,guid * *);
			virtual int GetRuntimeClassName(void * *);
			virtual int GetTrustLevel(Windows::Foundation::TrustLevel *);
			virtual int QueryInterface(guid const &,void * *);
			virtual unsigned int AddRef();
			virtual unsigned int Release();
		};

		struct produce_base<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::IconData,Windows::Internal::UI::NetworkUX::NetworkIcon::IIconData,void>
		{
			produce_base<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::IconData,Windows::Internal::UI::NetworkUX::NetworkIcon::IIconData,void>();
			virtual int GetIids(unsigned int *,guid * *);
			virtual int GetRuntimeClassName(void * *);
			virtual int GetTrustLevel(Windows::Foundation::TrustLevel *);
			virtual int QueryInterface(guid const &,void * *);
			virtual unsigned int AddRef();
			virtual unsigned int Release();
		};

		struct produce_base<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIcon,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIcon,void>
		{
			virtual int GetIids(unsigned int *,guid * *);
			virtual int GetRuntimeClassName(void * *);
			virtual int GetTrustLevel(Windows::Foundation::TrustLevel *);
			virtual int QueryInterface(guid const &,void * *);
			virtual unsigned int AddRef();
			virtual unsigned int Release();
		};

		struct produce_base<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIconProviderBase,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconProvider,void>
		{
			produce_base<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIconProviderBase,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconProvider,void>();
			virtual int GetIids(unsigned int *,guid * *);
			virtual int GetRuntimeClassName(void * *);
			virtual int GetTrustLevel(Windows::Foundation::TrustLevel *);
			virtual int QueryInterface(guid const &,void * *);
			virtual unsigned int AddRef();
			virtual unsigned int Release();
		};

		struct produce_base<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkStatusStaticIconProvider,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconProvider,void>
		{
			produce_base<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkStatusStaticIconProvider,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconProvider,void>();
			virtual int GetIids(unsigned int *,guid * *);
			virtual int GetRuntimeClassName(void * *);
			virtual int GetTrustLevel(Windows::Foundation::TrustLevel *);
			virtual int QueryInterface(guid const &,void * *);
			virtual unsigned int AddRef();
			virtual unsigned int Release();
		};

		struct produce_base<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipComponent,Windows::Foundation::IInspectable,void>
		{
			virtual int GetIids(unsigned int *,guid * *);
			virtual int GetRuntimeClassName(void * *);
			virtual int GetTrustLevel(Windows::Foundation::TrustLevel *);
			virtual int QueryInterface(guid const &,void * *);
			virtual unsigned int AddRef();
			virtual unsigned int Release();
		};

		struct produce_base<std::experimental::coroutine_traits<Windows::Foundation::IAsyncAction,Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipComponent *>::promise_type,Windows::Foundation::IAsyncAction,void>
		{
			virtual int GetIids(unsigned int *,guid * *);
			virtual int GetRuntimeClassName(void * *);
			virtual int GetTrustLevel(Windows::Foundation::TrustLevel *);
			virtual int QueryInterface(guid const &,void * *);
			virtual unsigned int AddRef();
			virtual unsigned int Release();
		};

		struct produce_base<std::experimental::coroutine_traits<Windows::Foundation::IAsyncAction,Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipComponent *>::promise_type,Windows::Foundation::IAsyncInfo,void>
		{
			virtual int GetIids(unsigned int *,guid * *);
			virtual int GetRuntimeClassName(void * *);
			virtual int GetTrustLevel(Windows::Foundation::TrustLevel *);
			virtual int QueryInterface(guid const &,void * *);
			virtual unsigned int AddRef();
			virtual unsigned int Release();
		};

		struct producer<Windows::Internal::UI::NetworkUX::NetworkIcon::factory_implementation::NetworkIcon,Windows::Foundation::IActivationFactory,void>
		{
			producer<Windows::Internal::UI::NetworkUX::NetworkIcon::factory_implementation::NetworkIcon,Windows::Foundation::IActivationFactory,void>();
		};

		struct producer<Windows::Internal::UI::NetworkUX::NetworkIcon::factory_implementation::NetworkIcon,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconFactory,void>
		{
			producer<Windows::Internal::UI::NetworkUX::NetworkIcon::factory_implementation::NetworkIcon,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconFactory,void>();
		};

		struct producer<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::IconData,Windows::Internal::UI::NetworkUX::NetworkIcon::IIconData,void>
		{
			producer<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::IconData,Windows::Internal::UI::NetworkUX::NetworkIcon::IIconData,void>();
		};

		struct producer<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIconProviderBase,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconProvider,void>
		{
			producer<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIconProviderBase,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconProvider,void>();
		};

		struct producer<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkStatusStaticIconProvider,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconProvider,void>
		{
			producer<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkStatusStaticIconProvider,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconProvider,void>();
		};

		struct producer_convert<Windows::Internal::UI::NetworkUX::NetworkIcon::factory_implementation::NetworkIcon,Windows::Foundation::IActivationFactory,void>
		{
			producer_convert<Windows::Internal::UI::NetworkUX::NetworkIcon::factory_implementation::NetworkIcon,Windows::Foundation::IActivationFactory,void>();
		};

		struct producer_convert<Windows::Internal::UI::NetworkUX::NetworkIcon::factory_implementation::NetworkIcon,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconFactory,void>
		{
			producer_convert<Windows::Internal::UI::NetworkUX::NetworkIcon::factory_implementation::NetworkIcon,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconFactory,void>();
		};

		struct producer_convert<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::IconData,Windows::Internal::UI::NetworkUX::NetworkIcon::IconData,void>
		{
			producer_convert<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::IconData,Windows::Internal::UI::NetworkUX::NetworkIcon::IconData,void>();
		};

		struct producer_convert<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIconProviderBase,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconProvider,void>
		{
			producer_convert<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIconProviderBase,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconProvider,void>();
		};

		struct producer_convert<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkStatusStaticIconProvider,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconProvider,void>
		{
			producer_convert<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkStatusStaticIconProvider,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconProvider,void>();
		};

		struct producer_ref<Windows::Foundation::IAsyncAction>
		{
			~producer_ref<Windows::Foundation::IAsyncAction>();
		};

		struct producers_base<Windows::Internal::UI::NetworkUX::NetworkIcon::factory_implementation::NetworkIcon,std::tuple<Windows::Foundation::IActivationFactory,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconFactory> >
		{
			producers_base<Windows::Internal::UI::NetworkUX::NetworkIcon::factory_implementation::NetworkIcon,std::tuple<Windows::Foundation::IActivationFactory,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconFactory> >();
		};

		struct producers_base<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::IconData,std::tuple<Windows::Internal::UI::NetworkUX::NetworkIcon::IconData> >
		{
			producers_base<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::IconData,std::tuple<Windows::Internal::UI::NetworkUX::NetworkIcon::IconData> >();
		};

		struct producers_base<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIconProviderBase,std::tuple<Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconProvider> >
		{
			producers_base<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIconProviderBase,std::tuple<Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconProvider> >();
		};

		struct producers_base<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkStatusStaticIconProvider,std::tuple<Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconProvider> >
		{
			producers_base<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkStatusStaticIconProvider,std::tuple<Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconProvider> >();
		};

		class promise_base<std::experimental::coroutine_traits<Windows::Foundation::IAsyncAction,Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipComponent *>::promise_type,Windows::Foundation::IAsyncAction,void>
		{
			struct final_suspend_awaiter
			{
				bool await_suspend(std::experimental::coroutine_handle<void>);
			};

		protected:
			void rethrow_if_failed(Windows::Foundation::AsyncStatus);
		public:
			Windows::Foundation::IAsyncAction get_return_object();
			final_suspend();
			hresult ErrorCode();
			unsigned long Release();
			virtual ~promise_base<std::experimental::coroutine_traits<Windows::Foundation::IAsyncAction,Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipComponent *>::promise_type,Windows::Foundation::IAsyncAction,void>();
			void Cancel();
			void Completed(Windows::Foundation::AsyncActionCompletedHandler const &);
			void unhandled_exception();
		};

		class root_implements<Windows::Internal::UI::NetworkUX::NetworkIcon::factory_implementation::NetworkIcon,Windows::Foundation::IActivationFactory,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconFactory>
		{
			IWeakReferenceSource * make_weak_ref();
			int query_interface(guid const &,void * *);
		protected:
			int NonDelegatingGetRuntimeClassName(void * *);
			int NonDelegatingGetTrustLevel(Windows::Foundation::TrustLevel *);
			unsigned int subtract_reference();
			virtual int query_interface_tearoff(guid const &,void * *);
			virtual ~root_implements<Windows::Internal::UI::NetworkUX::NetworkIcon::factory_implementation::NetworkIcon,Windows::Foundation::IActivationFactory,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconFactory>();
		public:
			unsigned int AddRef();
		};

		class root_implements<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::IconData,Windows::Internal::UI::NetworkUX::NetworkIcon::IconData>
		{
			IWeakReferenceSource * make_weak_ref();
			int query_interface(guid const &,void * *);
		protected:
			int NonDelegatingGetRuntimeClassName(void * *);
			int NonDelegatingGetTrustLevel(Windows::Foundation::TrustLevel *);
			unsigned int subtract_reference();
			virtual Windows::Foundation::TrustLevel GetTrustLevel();
			virtual int query_interface_tearoff(guid const &,void * *);
			virtual ~root_implements<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::IconData,Windows::Internal::UI::NetworkUX::NetworkIcon::IconData>();
		public:
			unsigned int AddRef();
		};

		class root_implements<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIcon,Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIcon>
		{
			IWeakReferenceSource * make_weak_ref();
			int query_interface(guid const &,void * *);
		protected:
			int NonDelegatingGetRuntimeClassName(void * *);
			int NonDelegatingGetTrustLevel(Windows::Foundation::TrustLevel *);
			unsigned int subtract_reference();
			virtual Windows::Foundation::TrustLevel GetTrustLevel();
			virtual int query_interface_tearoff(guid const &,void * *);
			virtual ~root_implements<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIcon,Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIcon>();
			weak_ref<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIcon> get_weak<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIcon>();
		public:
			unsigned int AddRef();
		};

		class root_implements<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIconProviderBase,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconProvider>
		{
			IWeakReferenceSource * make_weak_ref();
			int query_interface(guid const &,void * *);
		protected:
			int NonDelegatingGetRuntimeClassName(void * *);
			int NonDelegatingGetTrustLevel(Windows::Foundation::TrustLevel *);
			unsigned int subtract_reference();
			virtual Windows::Foundation::TrustLevel GetTrustLevel();
			virtual int query_interface_tearoff(guid const &,void * *);
			virtual ~root_implements<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIconProviderBase,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconProvider>();
			weak_ref<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIconProviderBase> get_weak<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIconProviderBase>();
		public:
			unsigned int AddRef();
		};

		class root_implements<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkStatusStaticIconProvider,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconProvider>
		{
			IWeakReferenceSource * make_weak_ref();
			int query_interface(guid const &,void * *);
		protected:
			int NonDelegatingGetRuntimeClassName(void * *);
			int NonDelegatingGetTrustLevel(Windows::Foundation::TrustLevel *);
			unsigned int subtract_reference();
			virtual Windows::Foundation::TrustLevel GetTrustLevel();
			virtual int query_interface_tearoff(guid const &,void * *);
			virtual ~root_implements<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkStatusStaticIconProvider,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconProvider>();
		public:
			unsigned int AddRef();
		};

		class root_implements<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipComponent,Windows::Foundation::IInspectable,INotifyNetworkGlobalStateEventsPrivate>
		{
			IWeakReferenceSource * make_weak_ref();
			int query_interface(guid const &,void * *);
		protected:
			int NonDelegatingGetRuntimeClassName(void * *);
			int NonDelegatingGetTrustLevel(Windows::Foundation::TrustLevel *);
			unsigned int subtract_reference();
			virtual Windows::Foundation::TrustLevel GetTrustLevel();
			virtual int query_interface_tearoff(guid const &,void * *);
			virtual ~root_implements<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipComponent,Windows::Foundation::IInspectable,INotifyNetworkGlobalStateEventsPrivate>();
			weak_ref<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipComponent> get_weak<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipComponent>();
		public:
			unsigned int AddRef();
		};

		class root_implements<std::experimental::coroutine_traits<Windows::Foundation::IAsyncAction,Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipComponent *>::promise_type,Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncInfo>
		{
			IWeakReferenceSource * make_weak_ref();
			int query_interface(guid const &,void * *);
		protected:
			int NonDelegatingGetRuntimeClassName(void * *);
			int NonDelegatingGetTrustLevel(Windows::Foundation::TrustLevel *);
			unsigned int subtract_reference();
			virtual Windows::Foundation::TrustLevel GetTrustLevel();
			virtual int query_interface_tearoff(guid const &,void * *);
			virtual ~root_implements<std::experimental::coroutine_traits<Windows::Foundation::IAsyncAction,Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipComponent *>::promise_type,Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncInfo>();
		public:
			unsigned int AddRef();
		};

		struct runtime_class_name<Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconProvider,void>
		{
			static hstring get();
		};

		struct uncloaked_iids<interface_list<Windows::Foundation::IActivationFactory,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconFactory> >
		{
			static std::array<guid,2> const value;
		};

		struct uncloaked_iids<interface_list<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncInfo> >
		{
			static std::array<guid,2> const value;
		};

		struct uncloaked_iids<interface_list<Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconProvider> >
		{
			static std::array<guid,1> const value;
		};

		struct uncloaked_iids<interface_list<Windows::Internal::UI::NetworkUX::NetworkIcon::IconData> >
		{
			static std::array<guid,1> const value;
		};

		struct uncloaked_iids<interface_list<Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIcon> >
		{
			static std::array<guid,1> const value;
		};

		struct weak_ref<1,1>
		{
			unsigned int decrement_strong();
			virtual int QueryInterface(guid const &,void * *);
			virtual int Resolve(guid const &,void * *);
			virtual unsigned int AddRef();
			virtual unsigned int Release();
		};

		struct weak_source<1,1>
		{
			virtual int GetWeakReference(IWeakReference * *);
			virtual int QueryInterface(guid const &,void * *);
			virtual unsigned int AddRef();
			virtual unsigned int Release();
		};

		UNKNOWN wait_for_completed<Windows::Foundation::IAsyncAction>(Windows::Foundation::IAsyncAction const &,unsigned int);
		Windows::Foundation::AsyncActionCompletedHandler make_agile_delegate<Windows::Foundation::AsyncActionCompletedHandler>(Windows::Foundation::AsyncActionCompletedHandler const &);
		Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> make_agile_delegate<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> >(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const &);
		Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconEventHandler make_agile_delegate<Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconEventHandler>(Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconEventHandler const &);
		Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconProviderEventHandler make_agile_delegate<Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconProviderEventHandler>(Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconProviderEventHandler const &);
		bool invoke<Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconEventHandler,bool,Windows::Internal::UI::NetworkUX::NetworkIcon::IconData>(Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconEventHandler const &,bool const &,Windows::Internal::UI::NetworkUX::NetworkIcon::IconData const &);
		bool invoke<Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconProviderEventHandler,bool,guid>(Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconProviderEventHandler const &,bool const &,guid const &);
		com_ptr<IPropertyBag> as<IPropertyBag,INetworkPrivate,0>(INetworkPrivate *);
		com_ptr<impl::event_array<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> > > make_event_array<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> >(unsigned int);
		com_ptr<impl::event_array<Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconEventHandler> > make_event_array<Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconEventHandler>(unsigned int);
		com_ptr<impl::event_array<Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconProviderEventHandler> > make_event_array<Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconProviderEventHandler>(unsigned int);
		factory_cache_entry<Windows::Networking::UX::UXManager,Windows::Foundation::IActivationFactory>::winrt::factory_cache_entry<Windows::Networking::UX::UXManager,Windows::Foundation::IActivationFactory> factory_cache_entry_v<Windows::Networking::UX::UXManager,Windows::Foundation::IActivationFactory>;
		guid::guid const guid_v<IAgileObject>;
		guid::guid const guid_v<IAgileReference>;
		guid::guid const guid_v<ICallbackWithNoReentrancyToApplicationSTA>;
		guid::guid const guid_v<IConnectionPointContainer>;
		guid::guid const guid_v<IContextCallback>;
		guid::guid const guid_v<IErrorInfo>;
		guid::guid const guid_v<IGlobalInterfaceTable>;
		guid::guid const guid_v<ILanguageExceptionErrorInfo2>;
		guid::guid const guid_v<IMarshal>;
		guid::guid const guid_v<INetworkListManagerPrivate>;
		guid::guid const guid_v<INotifyNetworkGlobalStateEventsPrivate>;
		guid::guid const guid_v<IPropertyBag>;
		guid::guid const guid_v<IRestrictedErrorInfo>;
		guid::guid const guid_v<IWeakReference>;
		guid::guid const guid_v<IWeakReferenceSource>;
		guid::guid const guid_v<Windows::Foundation::AsyncActionCompletedHandler>;
		guid::guid const guid_v<Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> >;
		guid::guid const guid_v<Windows::Foundation::IActivationFactory>;
		guid::guid const guid_v<Windows::Foundation::IAsyncAction>;
		guid::guid const guid_v<Windows::Foundation::IAsyncInfo>;
		guid::guid const guid_v<Windows::Foundation::IInspectable>;
		guid::guid const guid_v<Windows::Foundation::IUnknown>;
		guid::guid const guid_v<Windows::Internal::UI::NetworkUX::NetworkIcon::IIconData>;
		guid::guid const guid_v<Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIcon>;
		guid::guid const guid_v<Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconFactory>;
		guid::guid const guid_v<Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconProvider>;
		guid::guid const guid_v<Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconEventHandler>;
		guid::guid const guid_v<Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIconProviderEventHandler>;
		guid::guid const guid_v<Windows::Networking::UX::AirplaneModeEventHandler>;
		guid::guid const guid_v<Windows::Networking::UX::AvailableNetworkEventHandler>;
		guid::guid const guid_v<Windows::Networking::UX::INetworkUXManager>;
		guid::guid const guid_v<Windows::Networking::UX::IUXCategory>;
		guid::guid const guid_v<Windows::Networking::UX::IUXManager>;
		guid::guid const guid_v<Windows::Networking::UX::UXCategoryEventHandler>;
		hresult const error_access_denied;
		hresult const error_canceled;
		hresult const error_changed_state;
		hresult const error_class_not_available;
		hresult const error_class_not_registered;
		hresult const error_fail;
		hresult const error_illegal_delegate_assignment;
		hresult const error_illegal_method_call;
		hresult const error_illegal_state_change;
		hresult const error_invalid_argument;
		hresult const error_no_interface;
		hresult const error_not_implemented;
		hresult const error_out_of_bounds;
		hresult const error_wrong_thread;
		hresult get_agile_reference(guid const &,void *,void * *);
		hresult get_runtime_activation_factory_impl<1>(param::hstring const &,guid const &,void * *);
		hstring concat_hstring(std::basic_string_view<unsigned short,std::char_traits<unsigned short> > const &,std::basic_string_view<unsigned short,std::char_traits<unsigned short> > const &);
		hstring message_from_hresult(hresult);
		hstring trim_hresult_message(unsigned short const * const,unsigned int);
		impl::hstring_header * create_hstring_on_heap(unsigned short const *,unsigned int);
		impl::hstring_header * duplicate_hstring(impl::hstring_header *);
		impl::shared_hstring_header * precreate_hstring_on_heap(unsigned int);
		int fallback_RoGetActivationFactory(void *,guid const &,void * *);
		int fallback_RoGetAgileReference(unsigned int,guid const &,void *,void * *);
		int fallback_RoTransformError(int,int,void *);
		int make_marshaler(impl::abi<Windows::Foundation::IUnknown,void>::type *,void * *);
		int resume_apartment_callback(impl::com_callback_args *);
		resume_apartment(impl::resume_apartment_context const &,std::experimental::coroutine_handle<void>,int *);
		resume_background(std::experimental::coroutine_handle<void>);
		std::pair<int,int> get_apartment_type();
		void check_status_canceled(Windows::Foundation::AsyncStatus);
		void fallback_RoFailFastWithErrorContext(int);
		void fallback_submit_threadpool_callback(void *,void *);
		void resume_apartment_on_threadpool(com_ptr<impl::IContextCallback> const &,std::experimental::coroutine_handle<void>,int *);
		void resume_apartment_sync(com_ptr<impl::IContextCallback> const &,std::experimental::coroutine_handle<void>,int *);
		void resume_background_callback(void *,void *);
	};

	class implements<Windows::Internal::UI::NetworkUX::NetworkIcon::factory_implementation::NetworkIcon,Windows::Foundation::IActivationFactory,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconFactory>
	{
		virtual impl::abi<Windows::Foundation::IUnknown,void>::type * get_unknown();
	public:
		virtual impl::abi<Windows::Foundation::IInspectable,void>::type * find_inspectable();
		virtual std::pair<unsigned int,guid const *> get_local_iids();
		virtual void * find_interface(guid const &);
	};

	class implements<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::IconData,Windows::Internal::UI::NetworkUX::NetworkIcon::IconData>
	{
		virtual impl::abi<Windows::Foundation::IUnknown,void>::type * get_unknown();
	public:
		virtual impl::abi<Windows::Foundation::IInspectable,void>::type * find_inspectable();
		virtual std::pair<unsigned int,guid const *> get_local_iids();
		virtual void * find_interface(guid const &);
	};

	class implements<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIcon,Windows::Internal::UI::NetworkUX::NetworkIcon::NetworkIcon>
	{
		virtual impl::abi<Windows::Foundation::IUnknown,void>::type * get_unknown();
	public:
		virtual impl::abi<Windows::Foundation::IInspectable,void>::type * find_inspectable();
		virtual std::pair<unsigned int,guid const *> get_local_iids();
		virtual void * find_interface(guid const &);
	};

	class implements<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIconProviderBase,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconProvider>
	{
		virtual hstring GetRuntimeClassName();
		virtual impl::abi<Windows::Foundation::IUnknown,void>::type * get_unknown();
	public:
		virtual impl::abi<Windows::Foundation::IInspectable,void>::type * find_inspectable();
		virtual std::pair<unsigned int,guid const *> get_local_iids();
		virtual void * find_interface(guid const &);
		virtual ~implements<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIconProviderBase,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconProvider>();
	};

	class implements<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkStatusStaticIconProvider,Windows::Internal::UI::NetworkUX::NetworkIcon::INetworkIconProvider>
	{
		virtual hstring GetRuntimeClassName();
		virtual impl::abi<Windows::Foundation::IUnknown,void>::type * get_unknown();
	public:
		virtual impl::abi<Windows::Foundation::IInspectable,void>::type * find_inspectable();
		virtual std::pair<unsigned int,guid const *> get_local_iids();
		virtual void * find_interface(guid const &);
	};

	class implements<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipComponent,Windows::Foundation::IInspectable,INotifyNetworkGlobalStateEventsPrivate>
	{
		virtual hstring GetRuntimeClassName();
		virtual impl::abi<Windows::Foundation::IUnknown,void>::type * get_unknown();
	public:
		com_ptr<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipComponent> get_strong();
		virtual impl::abi<Windows::Foundation::IInspectable,void>::type * find_inspectable();
		virtual long QueryInterface(_GUID const &,void * *);
		virtual std::pair<unsigned int,guid const *> get_local_iids();
		virtual unsigned long AddRef();
		virtual unsigned long Release();
		virtual void * find_interface(guid const &);
		virtual ~implements<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipComponent,Windows::Foundation::IInspectable,INotifyNetworkGlobalStateEventsPrivate>();
	};

	class implements<std::experimental::coroutine_traits<Windows::Foundation::IAsyncAction,Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipComponent *>::promise_type,Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncInfo>
	{
		virtual hstring GetRuntimeClassName();
		virtual impl::abi<Windows::Foundation::IUnknown,void>::type * get_unknown();
	public:
		virtual impl::abi<Windows::Foundation::IInspectable,void>::type * find_inspectable();
		virtual std::pair<unsigned int,guid const *> get_local_iids();
		virtual void * find_interface(guid const &);
	};

	namespace param
	{
		struct hstring
		{
			hstring(std::basic_string_view<unsigned short,std::char_traits<unsigned short> > const &);
		};

	};

	struct slim_lock_guard
	{
		~slim_lock_guard();
	};

	struct weak_ref<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIcon>
	{
		get();
		~weak_ref<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIcon>();
	};

	struct weak_ref<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIconProviderBase>
	{
		get();
		~weak_ref<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::NetworkIconProviderBase>();
	};

	struct weak_ref<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipComponent>
	{
		get();
		~weak_ref<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::TooltipComponent>();
	};

	class weak_ref<Windows::Networking::UX::INetworkUXManager>
	{
		void from_com_ref<Windows::Networking::UX::INetworkUXManager const &>(Windows::Networking::UX::INetworkUXManager const &);
	public:
		get();
		weak_ref<Windows::Networking::UX::INetworkUXManager><Windows::Networking::UX::INetworkUXManager const &,void>(Windows::Networking::UX::INetworkUXManager const &);
	};

	class weak_ref<Windows::Networking::UX::IUXCategory>
	{
		void from_com_ref<Windows::Networking::UX::IUXCategory const &>(Windows::Networking::UX::IUXCategory const &);
	public:
		get();
		weak_ref<Windows::Networking::UX::IUXCategory><Windows::Networking::UX::IUXCategory const &,void>(Windows::Networking::UX::IUXCategory const &);
	};

	UNKNOWN make<Windows::Internal::UI::NetworkUX::NetworkIcon::implementation::IconData,unsigned short const (&)[1],unsigned short const * const &,unsigned short const (&)[1]>(unsigned short const (&)[1],unsigned short const * const &,unsigned short const (&)[1]);
	void * * put_abi(winrt::Windows::Foundation::IUnknown &);
	void terminate();
	void throw_hresult(winrt::hresult);
	void throw_last_error();
	winrt::Windows::Foundation::IActivationFactory get_activation_factory<Windows::Foundation::IActivationFactory>(winrt::param::hstring const &);
	winrt::hresult to_hresult();
	winrt::hstring operator+(winrt::hstring const &,unsigned short const *);
	winrt::hstring operator+(winrt::hstring const &,unsigned short);
	winrt::hstring operator+(winrt::hstring const &,winrt::hstring const &);
	winrt::hstring to_hstring<char const *,0>(char const * const &);
};

namespace wistd
{
	struct function<void ()>
	{
		~function<void ()>();
	};

};

?handler@?3???$invoke@U?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@UTooltipComponent@implementation@NetworkIcon@NetworkUX@UI@Internal@34@$$T@impl@winrt@@YA_NAEBU?$EventHandler@UIInspectable@Foundation@Windows@winrt@@@Foundation@Windows@2@AEBUTooltipComponent@implementation@NetworkIcon@NetworkUX@UI@Internal@52@AEB$$T@Z@4P6AHHHPEAX@_EEA;
GetGlyphFriendlyName(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
HINSTANCE__ * g_NetworkIconHInstance;
HINSTANCE__ * g_wil_details_kernelbaseModuleHandle;
HINSTANCE__ * g_wil_details_ntdllModuleHandle;
HINSTANCE__ * wil_details_GetNtDllModuleHandle();
__type_info_node __type_info_root_node;
bool winrt_can_unload_now();
int (* ?? winrt_activation_handler)(void *,winrt::guid const &,void * *);
int (* ?? winrt_to_hresult_handler)(void *);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
void (* ?? winrt_resume_handler)(void const *);
void (* ?? winrt_suspend_handler)(void const *);
void (* ?? winrt_throw_hresult_handler)(unsigned int,char const *,char const *,void *,winrt::hresult);
void * operator new(unsigned __int64);
void * operator new(unsigned __int64,std::nothrow_t const &);
void * winrt_get_activation_factory(std::basic_string_view<unsigned short,std::char_traits<unsigned short> > const &);
void LogCaughtExceptionIfNotHResult(long);
void __ArrayUnwind(void *,unsigned __int64,unsigned __int64,void (*)(void *));
void __scrt_initialize_type_info();
void __scrt_throw_std_bad_alloc();
void __scrt_throw_std_bad_array_new_length();
void __scrt_uninitialize_type_info();
void _tlgWriteActivityAutoStop<0,4>(_tlgProvider_t const *,_GUID const *);
void _tlgWriteActivityAutoStop<0,5>(_tlgProvider_t const *,_GUID const *);
void operator delete(void *);
void operator delete(void *,unsigned __int64);
winrt::hstring GetResourceString(unsigned int);
