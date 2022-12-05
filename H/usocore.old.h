class <lambda_fb40eba3ed4191bbdfa3c2a7727a0d91>
{
	static void <lambda_invoker_cdecl>(localeinfo_struct * *);
};

namespace ATL
{
	struct CAtlException
	{
		CAtlException(long);
	};

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

	struct CAutoVectorPtr<unsigned short>
	{
		~CAutoVectorPtr<unsigned short>();
	};

	struct CComAutoCriticalSection
	{
		~CComAutoCriticalSection();
	};

	struct CComAutoDeleteCriticalSection
	{
		~CComAutoDeleteCriticalSection();
	};

	struct CComBSTR
	{
		~CComBSTR();
	};

	struct CComCritSecLock<CComAutoCriticalSection>
	{
		~CComCritSecLock<CComAutoCriticalSection>();
	};

	struct CComCriticalSection
	{
		long Init();
	};

	struct CComModule
	{
		virtual long UpdateRegistryFromResourceD(unsigned int,int,_ATL_REGMAP_ENTRY *);
		virtual long UpdateRegistryFromResourceD(unsigned short const *,int,_ATL_REGMAP_ENTRY *);
		virtual long UpdateRegistryFromResourceS(unsigned int,int,_ATL_REGMAP_ENTRY *);
		virtual long UpdateRegistryFromResourceS(unsigned short const *,int,_ATL_REGMAP_ENTRY *);
	};

	struct CComObject<ServiceClassFactoryT<UpdateSessionOrchestrator> >
	{
		static long CreateInstance(CComObject<ServiceClassFactoryT<UpdateSessionOrchestrator> > * *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	struct CComPtr<CComObject<ServiceClassFactoryT<UpdateSessionOrchestrator> > >
	{
		~CComPtr<CComObject<ServiceClassFactoryT<UpdateSessionOrchestrator> > >();
	};

	struct CComPtr<IAction>
	{
		~CComPtr<IAction>();
	};

	struct CComPtr<IActionCollection>
	{
		~CComPtr<IActionCollection>();
	};

	struct CComPtr<ICategory>
	{
		~CComPtr<ICategory>();
	};

	struct CComPtr<ICategoryCollection>
	{
		~CComPtr<ICategoryCollection>();
	};

	struct CComPtr<IConfigManager2>
	{
		~CComPtr<IConfigManager2>();
	};

	struct CComPtr<IEventTrigger>
	{
		~CComPtr<IEventTrigger>();
	};

	struct CComPtr<IExecAction>
	{
		~CComPtr<IExecAction>();
	};

	struct CComPtr<IFlightSettingsAPIBroker>
	{
		~CComPtr<IFlightSettingsAPIBroker>();
	};

	struct CComPtr<IHashStream>
	{
		~CComPtr<IHashStream>();
	};

	struct CComPtr<IInstallationResult>
	{
		~CComPtr<IInstallationResult>();
	};

	struct CComPtr<IMaintenanceSettings>
	{
		~CComPtr<IMaintenanceSettings>();
	};

	struct CComPtr<IRegisteredTask>
	{
		~CComPtr<IRegisteredTask>();
	};

	struct CComPtr<IRegisteredTaskCollection>
	{
		~CComPtr<IRegisteredTaskCollection>();
	};

	struct CComPtr<IStream>
	{
		~CComPtr<IStream>();
	};

	struct CComPtr<ISystemInformation>
	{
		~CComPtr<ISystemInformation>();
	};

	struct CComPtr<ITaskDefinition>
	{
		~CComPtr<ITaskDefinition>();
	};

	struct CComPtr<ITaskFolder>
	{
		~CComPtr<ITaskFolder>();
	};

	struct CComPtr<ITaskService>
	{
		~CComPtr<ITaskService>();
	};

	struct CComPtr<ITaskSettings3>
	{
		~CComPtr<ITaskSettings3>();
	};

	struct CComPtr<ITaskSettings>
	{
		~CComPtr<ITaskSettings>();
	};

	struct CComPtr<ITrigger>
	{
		~CComPtr<ITrigger>();
	};

	struct CComPtr<ITriggerCollection>
	{
		~CComPtr<ITriggerCollection>();
	};

	struct CComPtr<IUpdate2>
	{
		~CComPtr<IUpdate2>();
	};

	struct CComPtr<IUpdate>
	{
		~CComPtr<IUpdate>();
	};

	struct CComPtr<IUpdateCollection>
	{
		~CComPtr<IUpdateCollection>();
	};

	struct CComPtr<IUpdateDeserializer>
	{
		~CComPtr<IUpdateDeserializer>();
	};

	struct CComPtr<IUpdateHistoryEntry3>
	{
		~CComPtr<IUpdateHistoryEntry3>();
	};

	struct CComPtr<IUpdateHistoryEntry>
	{
		~CComPtr<IUpdateHistoryEntry>();
	};

	struct CComPtr<IUpdateHistoryEntryCollection>
	{
		~CComPtr<IUpdateHistoryEntryCollection>();
	};

	struct CComPtr<IUpdateIdentity>
	{
		~CComPtr<IUpdateIdentity>();
	};

	struct CComPtr<IUpdateInstallationResult>
	{
		~CComPtr<IUpdateInstallationResult>();
	};

	struct CComPtr<IUpdateInstaller4>
	{
		~CComPtr<IUpdateInstaller4>();
	};

	struct CComPtr<IUpdateInstaller5>
	{
		~CComPtr<IUpdateInstaller5>();
	};

	struct CComPtr<IUpdateInstaller>
	{
		~CComPtr<IUpdateInstaller>();
	};

	struct CComPtr<IUpdateInternalConfiguration>
	{
		~CComPtr<IUpdateInternalConfiguration>();
	};

	struct CComPtr<IUpdateInternalProperty>
	{
		~CComPtr<IUpdateInternalProperty>();
	};

	struct CComPtr<IUpdateSearcher>
	{
		~CComPtr<IUpdateSearcher>();
	};

	struct CComPtr<IUpdateSerializer>
	{
		~CComPtr<IUpdateSerializer>();
	};

	struct CComPtr<IUpdateServiceManager2>
	{
		~CComPtr<IUpdateServiceManager2>();
	};

	struct CComPtr<IUpdateServiceRegistration>
	{
		~CComPtr<IUpdateServiceRegistration>();
	};

	struct CComPtr<IUpdateSession3>
	{
		~CComPtr<IUpdateSession3>();
	};

	struct CComPtr<IUsoLusPolicyUtil>
	{
		~CComPtr<IUsoLusPolicyUtil>();
	};

	struct CComPtr<IUsoLusPolicyUtilInternal>
	{
		~CComPtr<IUsoLusPolicyUtilInternal>();
	};

	struct CComPtr<IUsoSessionInternal>
	{
		CComPtr<IUsoSessionInternal>();
		~CComPtr<IUsoSessionInternal>();
	};

	struct CComPtr<IUsoUpdate>
	{
		~CComPtr<IUsoUpdate>();
	};

	struct CComPtr<IUsoUpdateCollection>
	{
		~CComPtr<IUsoUpdateCollection>();
	};

	struct CComPtr<IUsoUpdateHistoryEntry>
	{
		~CComPtr<IUsoUpdateHistoryEntry>();
	};

	struct CComPtr<IUsoUpdateHistoryEntryCollection>
	{
		~CComPtr<IUsoUpdateHistoryEntryCollection>();
	};

	struct CComPtr<IXmlReader>
	{
		~CComPtr<IXmlReader>();
	};

	struct CComPtr<IXmlWriter>
	{
		~CComPtr<IXmlWriter>();
	};

	struct CComPtrBase<IUsoSession>
	{
		~CComPtrBase<IUsoSession>();
	};

	struct CComSafeArray<unsigned char,17>
	{
		long SetAt(long,unsigned char const &,int);
		~CComSafeArray<unsigned char,17>();
	};

	struct CComVariant
	{
		~CComVariant();
	};

	struct CExpansionVector
	{
		int Add(unsigned short const *,unsigned short const *);
		long ClearReplacements();
		~CExpansionVector();
	};

	struct CRegKey
	{
		long DeleteSubKey(unsigned short const *);
		long RecurseDeleteKey(unsigned short const *);
		~CRegKey();
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
			~CParseBuffer();
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

	struct CSimpleMap<unsigned short *,unsigned short *,CExpansionVectorEqualHelper>
	{
		~CSimpleMap<unsigned short *,unsigned short *,CExpansionVectorEqualHelper>();
	};

	class CTempBuffer<unsigned char,256,CCRTAllocator>
	{
		void AllocateHeap(unsigned __int64);
		void FreeHeap();
	public:
		~CTempBuffer<unsigned char,256,CCRTAllocator>();
	};

	class CTempBuffer<unsigned short,1024,CCRTAllocator>
	{
		void AllocateHeap(unsigned __int64);
		void FreeHeap();
	public:
		~CTempBuffer<unsigned short,1024,CCRTAllocator>();
	};

	class CTempBuffer<unsigned short,256,CCRTAllocator>
	{
		void AllocateHeap(unsigned __int64);
		void FreeHeap();
	public:
		~CTempBuffer<unsigned short,256,CCRTAllocator>();
	};

	namespace _ATL_SAFE_ALLOCA_IMPL
	{
		struct CAtlSafeAllocBufferManager<CCRTAllocator>
		{
			~CAtlSafeAllocBufferManager<CCRTAllocator>();
		};

	};

	ATL::CAtlBaseModule _AtlBaseModule;
	ATL::CAtlModule * _pAtlModule;
	ATL::CAtlWinModule _AtlWinModule;
	ATL::CComModule * _pModule;
	int Base64Encode(unsigned char const *,int,char *,int *,unsigned long);
	int Base64EncodeGetRequiredLength(int,unsigned long);
	long AtlHresultFromLastError();
	long AtlHresultFromWin32(unsigned long);
	void AtlThrowImpl(long);
	void _AtlRaiseException(unsigned long,unsigned long);
};

struct AgileGitPtr
{
	long Initialize(_GUID const &,IUnknown *);
};

struct AutoMoveToEndOfElement
{
	AutoMoveToEndOfElement(XmlReader *,bool);
	void MarkEndOfElementReached();
	~AutoMoveToEndOfElement();
};

struct BatteryUtil
{
	static bool IsOnACPower();
	static long GetBatteryLevel(unsigned long *);
};

class CBaseRPCTimeout
{
	static void s_Callback(void *,unsigned char);
};

struct CClassFactory
{
	virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
	virtual long LockServer(int);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct CCoInit
{
	~CCoInit();
};

class CUSOCorrelationVector
{
	static unsigned short const * const sc_szProgressedRootCorrelationVector;
	static unsigned short const * const sc_szRootCorrelationVector;
	static unsigned short const * const sc_szUpdateCorrelationVector;
public:
	CUSOCorrelationVector();
	void GenerateRootCorrelationVector(IUsoSessionInternal *,char *);
	void GetRootCorrelationVector(IUsoSessionInternal *,char *);
	void ProgressUpdateCorrelationVector(IUsoSessionInternal *,IUpdate *,CorrelationVectorAction,bool,char *);
	void SetCorrelationVectorUpdateProperty(IUsoSessionInternal *,IUpdate *,bool);
	~CUSOCorrelationVector();
};

namespace Concurrency
{
	namespace streams
	{
		struct basic_istream<unsigned char>
		{
			basic_istream<unsigned char>(streambuf<unsigned char>);
			streambuf<unsigned char> streambuf();
			~basic_istream<unsigned char>();
		};

		struct basic_ostream<unsigned char>
		{
			basic_ostream<unsigned char>(streambuf<unsigned char>);
			pplx::task<void> close();
			pplx::task<void> close(std::exception_ptr);
			~basic_ostream<unsigned char>();
		};

		struct bytestream
		{
			static basic_istream<unsigned char> open_istream<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >(std::basic_string<char,std::char_traits<char>,std::allocator<char> >);
		};

		struct container_buffer<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >
		{
			virtual ~container_buffer<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >();
		};

		struct container_buffer<std::vector<unsigned char,std::allocator<unsigned char> > >
		{
			container_buffer<std::vector<unsigned char,std::allocator<unsigned char> > >(int);
			virtual ~container_buffer<std::vector<unsigned char,std::allocator<unsigned char> > >();
		};

		struct container_stream<std::vector<unsigned char,std::allocator<unsigned char> > >
		{
			static basic_istream<unsigned char> open_istream(std::vector<unsigned char,std::allocator<unsigned char> >);
		};

		namespace details
		{
			class basic_container_buffer<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >
			{
				unsigned __int64 read(char *,unsigned __int64,bool);
				unsigned __int64 write(char const *,unsigned __int64);
			protected:
				virtual bool acquire(char * &,unsigned __int64 &);
				virtual bool can_seek();
				virtual bool has_size();
				virtual char * _alloc(unsigned __int64);
				virtual int _sbumpc();
				virtual int _sgetc();
				virtual pplx::task<bool> _sync();
				virtual pplx::task<int> _bumpc();
				virtual pplx::task<int> _getc();
				virtual pplx::task<int> _nextc();
				virtual pplx::task<int> _putc(char);
				virtual pplx::task<int> _ungetc();
				virtual pplx::task<unsigned __int64> _getn(char *,unsigned __int64);
				virtual pplx::task<unsigned __int64> _putn(char const *,unsigned __int64);
				virtual std::fpos<int> getpos(int);
				virtual std::fpos<int> seekoff(__int64,int,int);
				virtual std::fpos<int> seekpos(std::fpos<int>,int);
				virtual unsigned __int64 _scopy(char *,unsigned __int64);
				virtual unsigned __int64 buffer_size(int);
				virtual unsigned __int64 in_avail();
				virtual unsigned __int64 size();
				virtual void _commit(unsigned __int64);
				virtual void release(char *,unsigned __int64);
				virtual void set_buffer_size(unsigned __int64,int);
			public:
				virtual ~basic_container_buffer<std::basic_string<char,std::char_traits<char>,std::allocator<char> > >();
			};

			class basic_container_buffer<std::vector<unsigned char,std::allocator<unsigned char> > >
			{
				unsigned __int64 read(unsigned char *,unsigned __int64,bool);
				unsigned __int64 write(unsigned char const *,unsigned __int64);
			protected:
				virtual bool acquire(unsigned char * &,unsigned __int64 &);
				virtual bool can_seek();
				virtual bool has_size();
				virtual long _sbumpc();
				virtual long _sgetc();
				virtual pplx::task<bool> _sync();
				virtual pplx::task<long> _bumpc();
				virtual pplx::task<long> _getc();
				virtual pplx::task<long> _nextc();
				virtual pplx::task<long> _putc(unsigned char);
				virtual pplx::task<long> _ungetc();
				virtual pplx::task<unsigned __int64> _getn(unsigned char *,unsigned __int64);
				virtual pplx::task<unsigned __int64> _putn(unsigned char const *,unsigned __int64);
				virtual std::fpos<int> getpos(int);
				virtual std::fpos<int> seekoff(__int64,int,int);
				virtual std::fpos<int> seekpos(std::fpos<int>,int);
				virtual unsigned __int64 _scopy(unsigned char *,unsigned __int64);
				virtual unsigned __int64 buffer_size(int);
				virtual unsigned __int64 in_avail();
				virtual unsigned __int64 size();
				virtual unsigned char * _alloc(unsigned __int64);
				virtual void _commit(unsigned __int64);
				virtual void release(unsigned char *,unsigned __int64);
				virtual void set_buffer_size(unsigned __int64,int);
			public:
				virtual ~basic_container_buffer<std::vector<unsigned char,std::allocator<unsigned char> > >();
			};

			class basic_producer_consumer_buffer<unsigned char>
			{
				struct _request
				{
					~_request();
				};

				unsigned __int64 read(unsigned char *,unsigned __int64,bool);
				unsigned __int64 write(unsigned char const *,unsigned __int64);
				virtual pplx::task<void> _close_write();
				void enqueue_request(basic_producer_consumer_buffer<unsigned char>::_request);
				void fulfill_outstanding();
				void update_read_head(unsigned __int64);
			protected:
				virtual long _sbumpc();
				virtual long _sgetc();
				virtual pplx::task<bool> _sync();
				virtual pplx::task<long> _bumpc();
				virtual pplx::task<long> _getc();
				virtual pplx::task<long> _nextc();
				virtual pplx::task<long> _putc(unsigned char);
				virtual pplx::task<long> _ungetc();
				virtual pplx::task<unsigned __int64> _getn(unsigned char *,unsigned __int64);
				virtual pplx::task<unsigned __int64> _putn(unsigned char const *,unsigned __int64);
				virtual unsigned __int64 _scopy(unsigned char *,unsigned __int64);
				virtual unsigned __int64 _sgetn(unsigned char *,unsigned __int64);
			public:
				basic_producer_consumer_buffer<unsigned char>(unsigned __int64);
				virtual bool acquire(unsigned char * &,unsigned __int64 &);
				virtual bool can_seek();
				virtual bool has_size();
				virtual std::fpos<int> getpos(int);
				virtual std::fpos<int> seekoff(__int64,int,int);
				virtual std::fpos<int> seekpos(std::fpos<int>,int);
				virtual unsigned __int64 buffer_size(int);
				virtual unsigned __int64 in_avail();
				virtual unsigned char * _alloc(unsigned __int64);
				virtual void _commit(unsigned __int64);
				virtual void release(unsigned char *,unsigned __int64);
				virtual void set_buffer_size(unsigned __int64,int);
				virtual ~basic_producer_consumer_buffer<unsigned char>();
			};

			struct basic_streambuf<char>
			{
				virtual ~basic_streambuf<char>();
			};

			struct basic_streambuf<unsigned char>
			{
				virtual ~basic_streambuf<unsigned char>();
			};

			class streambuf_state_manager<char>
			{
				pplx::task<bool> create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool (bool)>,int);
				pplx::task<int> create_exception_checked_task<int>(pplx::task<int>,std::function<bool (int)>,int);
				pplx::task<int> create_exception_checked_value_task<int>(int const &);
				pplx::task<unsigned __int64> create_exception_checked_task<unsigned __int64>(pplx::task<unsigned __int64>,std::function<bool (unsigned __int64)>,int);
				pplx::task<unsigned __int64> create_exception_checked_value_task<unsigned __int64>(unsigned __int64 const &);
			protected:
				virtual pplx::task<unsigned __int64> _putn(char const *,unsigned __int64,bool);
				virtual pplx::task<void> _close_read();
				virtual pplx::task<void> _close_write();
			public:
				virtual bool can_read();
				virtual bool can_write();
				virtual bool is_eof();
				virtual bool is_open();
				virtual char * alloc(unsigned __int64);
				virtual int sbumpc();
				virtual int sgetc();
				virtual pplx::task<int> bumpc();
				virtual pplx::task<int> getc();
				virtual pplx::task<int> nextc();
				virtual pplx::task<int> putc(char);
				virtual pplx::task<int> ungetc();
				virtual pplx::task<unsigned __int64> getn(char *,unsigned __int64);
				virtual pplx::task<unsigned __int64> putn(char const *,unsigned __int64);
				virtual pplx::task<unsigned __int64> putn_nocopy(char const *,unsigned __int64);
				virtual pplx::task<void> close(int);
				virtual pplx::task<void> close(int,std::exception_ptr);
				virtual pplx::task<void> sync();
				virtual std::exception_ptr exception();
				virtual unsigned __int64 scopy(char *,unsigned __int64);
				virtual unsigned __int64 size();
				virtual void commit(unsigned __int64);
				virtual ~streambuf_state_manager<char>();
			};

			class streambuf_state_manager<unsigned char>
			{
				pplx::task<bool> create_exception_checked_task<bool>(pplx::task<bool>,std::function<bool (bool)>,int);
				pplx::task<long> create_exception_checked_task<long>(pplx::task<long>,std::function<bool (long)>,int);
				pplx::task<long> create_exception_checked_value_task<long>(long const &);
				pplx::task<unsigned __int64> create_exception_checked_task<unsigned __int64>(pplx::task<unsigned __int64>,std::function<bool (unsigned __int64)>,int);
				pplx::task<unsigned __int64> create_exception_checked_value_task<unsigned __int64>(unsigned __int64 const &);
			protected:
				virtual pplx::task<unsigned __int64> _putn(unsigned char const *,unsigned __int64,bool);
				virtual pplx::task<void> _close_read();
				virtual pplx::task<void> _close_write();
			public:
				virtual bool can_read();
				virtual bool can_write();
				virtual bool is_eof();
				virtual bool is_open();
				virtual long sbumpc();
				virtual long sgetc();
				virtual pplx::task<long> bumpc();
				virtual pplx::task<long> getc();
				virtual pplx::task<long> nextc();
				virtual pplx::task<long> putc(unsigned char);
				virtual pplx::task<long> ungetc();
				virtual pplx::task<unsigned __int64> getn(unsigned char *,unsigned __int64);
				virtual pplx::task<unsigned __int64> putn(unsigned char const *,unsigned __int64);
				virtual pplx::task<unsigned __int64> putn_nocopy(unsigned char const *,unsigned __int64);
				virtual pplx::task<void> close(int);
				virtual pplx::task<void> close(int,std::exception_ptr);
				virtual pplx::task<void> sync();
				virtual std::exception_ptr exception();
				virtual unsigned __int64 scopy(unsigned char *,unsigned __int64);
				virtual unsigned __int64 size();
				virtual unsigned char * alloc(unsigned __int64);
				virtual void commit(unsigned __int64);
				virtual ~streambuf_state_manager<unsigned char>();
			};

		};

		struct producer_consumer_buffer<unsigned char>
		{
			producer_consumer_buffer<unsigned char>(unsigned __int64);
			virtual ~producer_consumer_buffer<unsigned char>();
		};

		struct streambuf<char>
		{
			virtual bool acquire(char * &,unsigned __int64 &);
			virtual bool can_read();
			virtual bool can_seek();
			virtual bool can_write();
			virtual bool has_size();
			virtual bool is_eof();
			virtual bool is_open();
			virtual char * alloc(unsigned __int64);
			virtual int sbumpc();
			virtual int sgetc();
			virtual pplx::task<int> bumpc();
			virtual pplx::task<int> getc();
			virtual pplx::task<int> nextc();
			virtual pplx::task<int> putc(char);
			virtual pplx::task<int> ungetc();
			virtual pplx::task<unsigned __int64> getn(char *,unsigned __int64);
			virtual pplx::task<unsigned __int64> putn(char const *,unsigned __int64);
			virtual pplx::task<unsigned __int64> putn_nocopy(char const *,unsigned __int64);
			virtual pplx::task<void> close(int);
			virtual pplx::task<void> close(int,std::exception_ptr);
			virtual pplx::task<void> sync();
			virtual std::exception_ptr exception();
			virtual std::fpos<int> getpos(int);
			virtual std::fpos<int> seekoff(__int64,int,int);
			virtual std::fpos<int> seekpos(std::fpos<int>,int);
			virtual unsigned __int64 buffer_size(int);
			virtual unsigned __int64 in_avail();
			virtual unsigned __int64 scopy(char *,unsigned __int64);
			virtual unsigned __int64 size();
			virtual void commit(unsigned __int64);
			virtual void release(char *,unsigned __int64);
			virtual void set_buffer_size(unsigned __int64,int);
			virtual ~streambuf<char>();
		};

		struct streambuf<unsigned char>
		{
			virtual bool acquire(unsigned char * &,unsigned __int64 &);
			virtual bool can_read();
			virtual bool can_seek();
			virtual bool can_write();
			virtual bool has_size();
			virtual bool is_eof();
			virtual bool is_open();
			virtual long sbumpc();
			virtual long sgetc();
			virtual pplx::task<long> bumpc();
			virtual pplx::task<long> getc();
			virtual pplx::task<long> nextc();
			virtual pplx::task<long> putc(unsigned char);
			virtual pplx::task<long> ungetc();
			virtual pplx::task<unsigned __int64> getn(unsigned char *,unsigned __int64);
			virtual pplx::task<unsigned __int64> putn(unsigned char const *,unsigned __int64);
			virtual pplx::task<unsigned __int64> putn_nocopy(unsigned char const *,unsigned __int64);
			virtual pplx::task<void> close(int);
			virtual pplx::task<void> close(int,std::exception_ptr);
			virtual pplx::task<void> sync();
			virtual std::exception_ptr exception();
			virtual std::fpos<int> getpos(int);
			virtual std::fpos<int> seekoff(__int64,int,int);
			virtual std::fpos<int> seekpos(std::fpos<int>,int);
			virtual unsigned __int64 buffer_size(int);
			virtual unsigned __int64 in_avail();
			virtual unsigned __int64 scopy(unsigned char *,unsigned __int64);
			virtual unsigned __int64 size();
			virtual unsigned char * alloc(unsigned __int64);
			virtual void commit(unsigned __int64);
			virtual void release(unsigned char *,unsigned __int64);
			virtual void set_buffer_size(unsigned __int64,int);
			virtual ~streambuf<unsigned char>();
		};

	};

};

struct ContextSwitch
{
	~ContextSwitch();
};

class CoreMigrationHelper
{
	static unsigned short const * const sc_szMigratorVersionKey;
	static unsigned short const * const sc_szUxBranchReadinessLevel;
	static unsigned short const * const sc_szUxDeferUpgrade;
public:
	static bool IsDeferUpgradePresent();
	static long GetStoredMigratorVersion(RegistryKeyTypes,unsigned long *,unsigned long);
	static long MigrateDeferUpgradeToBranchReadiness();
	static long MigrateDwordRegValue(HKEY__ *,unsigned short const *,HKEY__ *,unsigned short const *,unsigned short const *);
	static long MigrateStringRegValue(HKEY__ *,unsigned short const *,HKEY__ *,unsigned short const *,unsigned short const *);
	static long StoreMigratorVersion(RegistryKeyTypes,unsigned long);
};

class CoreMigratorV1
{
	static long MigrateBuildInfoKeys(unsigned short const *,RegistryKeyTypes);
public:
	static long Migrate();
};

class DeferManager
{
protected:
	static bool CanIgnoreExecutionState(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	static long CheckDeferReasons(unsigned long const &,DeferScenario const &,unsigned long *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	static long GetPowerRequestDetails(_DIAGNOSTIC_BUFFER const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	static long GetPowerRequestDetails(_REASON_BUFFER const *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	static void LogDeferReasons(unsigned long const &,unsigned long const &,unsigned long const &,DeferScenario const &);
public:
	static long CheckIfUSOTaskWokeMachine(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,bool &);
	static long IsRestartAcceptable(unsigned long const &,unsigned long *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
};

class FileManager
{
	static long RecursiveScanDirectory(unsigned short const *,long (*const)(DIRECTORY_SCAN_STATE,unsigned short const *,_WIN32_FIND_DATAW const *,void const *),void *,bool);
	static long RemoveDirectoryTree(unsigned short const *,unsigned long);
	static unsigned short const * const * const c_rgpszDirectoryName;
	static unsigned short const * const * const c_rgpszFileName;
	static unsigned short const * const c_szDUSharedDirectory;
	static unsigned short const * const c_szUSOPrivateDirectory;
	static unsigned short const * const c_szUSOSharedDirectory;
public:
	static long BuildPath(unsigned short *,unsigned __int64,unsigned short const *,unsigned short const *);
	static long CatPath(unsigned short *,unsigned __int64,unsigned short const *);
	static long CreateDirectoryW(tagUSODirectory,unsigned short *,unsigned __int64,unsigned short const *,bool);
	static long Delete(DIRECTORY_SCAN_STATE,unsigned short const *,_WIN32_FIND_DATAW const *,void const *);
	static long GetFilePath(tagUSOFilePath,unsigned short *,unsigned __int64);
	static long GetLastWriteTime(unsigned short const *,_FILETIME &);
	static long GetRootDirectory(tagUSODirectory,unsigned short *,unsigned __int64);
	static long RecursiveCreateDirectory(unsigned short const *);
	static long RecursiveRemoveDirectoryEx(unsigned short const *,bool);
	static long RemoveDirectoryW(tagUSODirectory,unsigned short const *);
};

struct HashUtility
{
	HashUtility();
	long CloseAlgorithmProvider();
	long FinishHash(unsigned char *,unsigned long);
	long HashData(unsigned char *,unsigned long);
	long Initialize(unsigned short const *);
	long OpenAlgorithmProvider(unsigned short const *);
	long Release();
	static long Base64EncodeValue(unsigned char const *,unsigned long,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	static long CalculateBufferHash(unsigned char *,unsigned long,unsigned short const *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	static long CalculateBufferHash(unsigned char *,unsigned long,unsigned short const *,std::shared_ptr<unsigned char> *,unsigned long *);
	~HashUtility();
};

class LegacyUpdateNode
{
	long ExtractBundleRef(XmlReader *);
	long ExtractBundleRefs(XmlReader *);
	long ExtractContentUrl(XmlReader *);
	long ExtractDestinationFilePath(XmlReader *);
	long ExtractDigestAlgorithm(XmlReader *);
	long ExtractDigestBlob(XmlReader *);
	long ExtractExtendedMetadata(XmlReader *);
	long ExtractExtendedProperties(XmlReader *);
	long ExtractIsBundle(XmlReader *);
	long ExtractIsLeaf(XmlReader *);
	long ExtractMetadataXml(XmlReader *);
	long ExtractServerFileName(XmlReader *);
	long ExtractServerFileSize(XmlReader *);
	long ExtractUpdateAttributes(XmlReader *);
public:
	virtual long ExtractNode(XmlReader *);
	virtual long GetNodeStruct(_LEGACY_UPDATE_INFO *);
};

class LegacyUpdateStore
{
	long AddApplicableUpdateToMaps(std::shared_ptr<LegacyUpdateNode>);
	long AddUpdateToMaps(std::shared_ptr<LegacyUpdateNode>);
	long ExtractCoreMetadataTable(XmlReader *);
	long HasValidHash();
	long IsUpdateApplicable(std::shared_ptr<LegacyUpdateNode>,int *);
	long ReadFromFile(unsigned short const *,std::basic_string<char,std::char_traits<char>,std::allocator<char> > *);
public:
	long LoadUpdateStore();
	static long GetUpdateStoreFileName(unsigned short *,unsigned long);
	virtual long FreeUpdateInfo(_LEGACY_UPDATE_INFO);
	virtual long FreeUpdateInfoArray(_LEGACY_UPDATE_INFO *,unsigned long);
	virtual long GetAllUpdateInfo(unsigned long,_LEGACY_UPDATE_INFO *,unsigned long *);
	virtual long GetUpdateExProperty(_GUID,long,unsigned short const *,tagVARIANT *);
	virtual long GetUpdateInfoCount(unsigned long *);
	~LegacyUpdateStore();
};

class LusPolicyUtil
{
protected:
	LusPolicyUtil();
	long InitializeStoreMutex();
public:
	static IUnknown * CreateInstance();
	virtual long ClearSettings();
	virtual long Flush();
	virtual long GetCachedLusPolicyValue(unsigned short const *,tagVARIANT *,unsigned long *);
	virtual long GetSetting(unsigned short const *,tagVARIANT *);
	virtual long PersistSetting(unsigned short const *,tagVARIANT);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

namespace Microsoft
{
	namespace WRL
	{
		struct ComPtr<Windows::Internal::Flighting::IClientAttributes>
		{
			~ComPtr<Windows::Internal::Flighting::IClientAttributes>();
		};

		struct ComPtr<Windows::Internal::Flighting::ICommonTargetingAttributesFactory>
		{
			~ComPtr<Windows::Internal::Flighting::ICommonTargetingAttributesFactory>();
		};

		namespace Details
		{
			struct ModuleBase
			{
				static ModuleBase * module_;
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IUnknown>
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

		};

		namespace Wrappers
		{
			struct HString
			{
				~HString();
			};

		};

	};

};

class PauseUpdatesUtility
{
	static unsigned short const * const msc_pauseFeatureUpdatesEndTime;
	static unsigned short const * const msc_pauseFeatureUpdatesStartTime;
	static unsigned short const * const msc_pauseQualityUpdatesEndTime;
	static unsigned short const * const msc_pauseQualityUpdatesStartTime;
	static unsigned short const * const msc_pauseUpdatesExpiryTime;
public:
	static bool AreUpdatesPaused();
	static long GetPauseUpdatesExpiryTimeRegValue(_FILETIME *);
	static long GetPauseUpdatesStartTimeRegValue(_FILETIME *);
	static long RemovePauseUpdatesRegValues();
};

class PowerStateManager
{
	void CreatePDCTask();
	void ReleasePDCTask();
public:
	virtual void AllowSystemSleepMode();
	virtual void PreventSystemSleepMode(unsigned short *);
	virtual ~PowerStateManager();
};

class PowerStateManagerWithGuard
{
	static unsigned long PreventSleepGuardTimer(void *);
public:
	PowerStateManagerWithGuard();
	virtual void AllowSystemSleepMode();
	virtual void PreventSystemSleepMode(unsigned short *);
	virtual void PreventSystemSleepMode(unsigned short *,std::function<bool ()>);
	virtual ~PowerStateManagerWithGuard();
};

class PresenceUtil
{
protected:
	static long QueryPowerSetting(_GUID const *,void *,unsigned long);
public:
	static long IsPhoneCallOngoing(bool *);
	static long IsUserPresent(bool *);
};

class RebootHelper
{
	static long RebootWithFlags(unsigned long,unsigned long);
protected:
	static long ShellReboot();
public:
	static long AdjustProcessPrivilege(unsigned long,bool);
	static long GetShutdownFlyoutOptions(unsigned long *);
	static long RebootSystem();
	static long SetShutdownFlyoutOptions(unsigned long);
};

class RebootTimeUtility
{
	static unsigned short const * const c_szFlightCommitted;
	static unsigned short const * const c_szFlightRebootTime;
	static unsigned short const * const c_szRebootRequired;
	static unsigned short const * const c_szUpdateRebootTime;
public:
	static bool IsRebootPending();
	static long DeleteLastRebootMarkedTime(bool);
	static long SetFlightCommitted(bool);
	static long SetLastRebootMarkedTime(bool);
};

class RegistryManager
{
protected:
	static unsigned short const * const * const c_rgszUpdateRegKeyName;
public:
	static long DeleteRegChildren(HKEY__ *,unsigned short const *);
	static long DeleteRegTree(HKEY__ *,unsigned short const *);
	static long DeleteRegValue(HKEY__ *,unsigned short const *,unsigned short const *);
	static long DumpRegistryKey(_iobuf *,HKEY__ *,unsigned short const *,bool);
	static long GetRegDword(HKEY__ *,unsigned short const *,unsigned short const *,unsigned long *);
	static long GetRegQword(HKEY__ *,unsigned short const *,unsigned short const *,unsigned __int64 *);
	static long GetRegistryKeyName(RegistryKeyTypes,unsigned short *,unsigned __int64);
	static long GetStringRegKey(HKEY__ *,unsigned short const *,unsigned short const *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	static long GetStringRegKey(HKEY__ *,unsigned short const *,unsigned short const *,unsigned short *,unsigned long *);
	static long GetSubkeyList(HKEY__ *,unsigned short const *,std::vector<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > &);
	static long OpenRegKey(RegistryKeyTypes,unsigned long,bool,HKEY__ * *);
	static long RegValueExists(HKEY__ *,unsigned short const *,unsigned short const *,int *);
	static long SetRegDword(HKEY__ *,unsigned short const *,unsigned short const *,unsigned long);
	static long SetRegQword(HKEY__ *,unsigned short const *,unsigned short const *,unsigned __int64);
	static long SetStringRegKey(HKEY__ *,unsigned short const *,unsigned short const *,unsigned short const *);
};

struct SH<void *,SH_HANDLE>
{
	void Reset();
};

struct SP<unsigned char,SP_HLOCAL<unsigned char> >
{
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

struct ServiceClassFactoryT<UpdateSessionOrchestrator>
{
	virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
	virtual long LockServer(int);
	virtual ~ServiceClassFactoryT<UpdateSessionOrchestrator>();
};

namespace SystemSettings
{
	namespace FlightSettingsAPI
	{
		class FlightSettings
		{
			static bool m_requireOnlineValidation;
		public:
			long DoFlightSettingsValidation();
		};

		class FlightSettingsAPITelemetryClass
		{
		protected:
			static FlightSettingsAPITelemetryClass * Instance();
		public:
			virtual void Initialize();
			void GetRingName_(long,unsigned short *);
			void StaticLibAsyncValidationFailed_(long);
			void StaticLibCoCreateInstanceFailed_(long);
		};

		struct FlightSettingsAPITelemetryProvider
		{
			static _TlgProvider_t const * Provider();
		};

	};

};

namespace TLV
{
	std::nothrow_t const nothrow;
	void Base64Encode<129>(unsigned char const *,unsigned __int64,char (&)[129]);
};

class TaskManager
{
	static long CreateARRUXTask(_TlgProvider_t const * const);
	static long CreateExecAction(ITaskDefinition *,IExecAction * *);
	static long CreateLogonTrigger(ITaskDefinition *,unsigned short const *,ILogonTrigger * *);
	static long CreateRebootUXTask(_TlgProvider_t const * const);
	static long CreateTimeTaskHelper(unsigned short * const,_SYSTEMTIME,unsigned short * const,unsigned short * const,short,short,unsigned long,unsigned long,short,short,_TlgProvider_t const * const);
	static long CreateTimeTrigger(ITaskDefinition *,ITimeTrigger * *);
	static long EnsureTaskFolderExists(ITaskService *,unsigned short const *);
	static long GetActionArgFromTask(ITaskDefinition *,unsigned short * *);
	static long GetLatestRunningTaskWithArg(unsigned short const *,IRegisteredTask * *);
	static long GetTaskService(ITaskService * *);
	static long LogTaskModification(IRegisteredTask *,TaskModificationType,_TlgProvider_t const * const);
	static long RegisterTask(ITaskService *,ITaskDefinition *,unsigned short * const,short,_TlgProvider_t const * const);
	static long ReregisterTask(ITaskDefinition *,unsigned short * const,short,_TlgProvider_t const * const);
	static long SetTaskAction(ITaskDefinition *,unsigned short * const,unsigned short * const);
	static long SetTaskPrincipal(ITaskDefinition *);
	static long SetTaskSettings(ITaskDefinition *,short,short,short,short,short,short,short);
	static long SetTaskTrigger(ITaskDefinition *,_SYSTEMTIME,unsigned long,unsigned long,short);
	static long SetTriggerRepetition(ITrigger *,unsigned long,unsigned long);
	static long SetTriggerTime(ITrigger *,_SYSTEMTIME);
	static unsigned char const * const c_wnfAttentionRequired;
	static unsigned char const * const c_wnfRebootRequired;
	static unsigned short const * const c_szInteractiveId;
	static unsigned short const * const c_szLogonDelay;
	static unsigned short const * const c_szMusNotificationExePath;
	static unsigned short const * const c_szRootPath;
	static unsigned short const * const c_szSecDis;
	static unsigned short const * const c_szSystemId;
public:
	static long AddSystemRestoreTriggerToScanTask(_TlgProvider_t const * const);
	static long CreateLogonTask(unsigned short * const,unsigned short * const,unsigned short * const,short,unsigned short const *,_TlgProvider_t const * const);
	static long CreateMaintenanceScanInstallTask(_TlgProvider_t const * const);
	static long CreateMaintenanceTask(unsigned short * const,unsigned short * const,unsigned short * const,short,short,short,short,_TlgProvider_t const * const);
	static long CreateSingleExecTimeTask(unsigned short * const,_SYSTEMTIME,unsigned short * const,unsigned short * const,short,short,short,_TlgProvider_t const * const,short);
	static long EnableTask(unsigned short const *,short,_TlgProvider_t const * const);
	static long GetMusNotificationExePath(unsigned short *,unsigned long);
	static long GetRegisteredTask(unsigned short * const,IRegisteredTask * *);
	static long LogTaskRunning(unsigned short const *,_TlgProvider_t const * const);
	static long RemoveTask(unsigned short const *,_TlgProvider_t const * const);
	static long UpdateTaskInterval(unsigned short * const,unsigned short * const,short,_TlgProvider_t const * const);
	static void SetupStaticTasks(_TlgProvider_t const * const);
};

class TaskSchedulerUtil
{
protected:
	static unsigned short const * const * const sc_rgRebootTaskArgs;
	virtual ~TaskSchedulerUtil();
public:
	static IUnknown * CreateInstance();
	virtual long CreateLogonUpdateResultsTask();
	virtual long CreateSingleExecRebootTask(tagRebootTaskType,_SYSTEMTIME,short);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class TelMergeWrapper
{
	static TelMergeWrapper s_tmwSingleton;
};

class TelemetryManager
{
	long SetupLogFiles(unsigned short const *,unsigned short *,unsigned __int64 *);
public:
	TelemetryManager();
	long EnableTracing(unsigned __int64);
	long FlushTraceW();
	long StartTracing(_GUID,unsigned short const *,unsigned short const *,unsigned __int64,bool,unsigned long);
	long StopTracing();
	static unsigned long const sc_dwDefaultMaxTraceFileSizeInKB;
	~TelemetryManager();
};

class ThreadAndIOPriorityHelper
{
	long ChangeThreadAndIoPriority(int,unsigned long);
public:
	ThreadAndIOPriorityHelper();
	long LowerThreadAndIOPriority();
	~ThreadAndIOPriorityHelper();
};

struct TimeHelper
{
	static _FILETIME ULongLongToFileTime(unsigned __int64);
	static bool IsSameDate(double const &,double const &);
	static long AddHoursToFileTime(unsigned long,_FILETIME,_FILETIME *);
	static long AddMinutesToSystemTime(unsigned long,_SYSTEMTIME,_SYSTEMTIME *);
	static long ConvertLocalDateToUTC(double,_SYSTEMTIME *);
	static long GetDaysBetweenFileTimes(_FILETIME,_FILETIME,unsigned long *);
	static long GetDaysBetweenSystemTimes(_SYSTEMTIME,_SYSTEMTIME,unsigned long *);
	static long GetMinutesBetweenFileTimes(_FILETIME,_FILETIME,unsigned long *);
	static long GetMinutesBetweenSystemTimes(_SYSTEMTIME,_SYSTEMTIME,unsigned long *);
	static long MinsSinceFileTime(_FILETIME,bool,unsigned long *);
	static long UnitsBetweenFileTimes(_FILETIME,_FILETIME,unsigned __int64,unsigned long *);
	static unsigned __int64 FileTimeToULongLong(_FILETIME);
	static unsigned __int64 SystemTimeToULongLong(_SYSTEMTIME);
};

class TraceLoggingCorrelationVector
{
	bool ToStringImpl(unsigned __int64,char *);
	static TraceLoggingCorrelationVector::CvVersion ValidateImpl(char const *,bool);
	unsigned __int64 IncrementImpl();
	void CreateCvFromGuid<12>(_GUID);
	void CreateCvFromGuid<16>(_GUID);
public:
	static TraceLoggingCorrelationVector * Extend(char const *,bool);
	static TraceLoggingCorrelationVector * Set(char const *,bool);
};

struct UpdateHelper
{
	static UpdateScenarioType GetScenarioType(IUsoSessionInternal *);
	static UpdateScenarioType GetScenarioTypeFromSessionGuid(_GUID);
	static bool IsDeserializationFailureSimulated();
	static bool IsFlightUpdate(IUpdate *);
	static bool IsUUPFallBackSet();
	static int IsRebootRequired(IUpdate *);
	static long AreEntriesEqual(IUpdate *,IUpdateHistoryEntry *,bool *);
	static long GetUpdateIdentifier(IUpdate *,tagUsoUpdateIdentifier *);
	static long GetUpdateIdentifier(IUpdateHistoryEntry *,tagUsoUpdateIdentifier *);
	static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > GetFlightID(IUpdate *);
	static unsigned short const * const OSUpgradeRegistryPath;
	static unsigned short const * const UUPFallBackRegistryKey;
};

struct UpdateInfo
{
	~UpdateInfo();
};

class UpdateNode
{
	long ExtractExtendedProperties(XmlReader *);
	long ExtractUpdateAttributes(XmlReader *);
	long WriteUpdateAttributes(XmlWriter *);
public:
	long ExtractNode(XmlReader *);
	long GetNode(UpdateInfo *);
	long SetNode(UpdateInfo const &);
};

class UpdateSessionManager
{
	long CreateUpdateSession(_GUID);
	long LoadPersistedSessions();
	static long UpdatePersistSessionKey(_GUID,bool);
public:
	UpdateSessionManager();
	long DoMainSessionLoop();
	long GetCurrentActiveUpdateSessions(ATL::CComPtr<IUsoSessionInternal> * *,unsigned long *);
	long GetUpdateSession(_GUID,IUsoSessionInternal * *);
	long RegisterActiveSession(_GUID);
	long UnregisterActiveSession(_GUID);
	static unsigned long MainSessionLoopThreadProc(void *);
	void FreeUpdateSessions(ATL::CComPtr<IUsoSessionInternal> *);
};

class UpdateSessionOrchestrator
{
	long ReadLiteStackBuildInfo(RegistryKeyTypes,_PHONEBUILDINFO *);
	static UpdateSessionOrchestrator * s_pOrchestrator;
protected:
	long Initialize();
public:
	static long HandlePreShutdown();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual long CreateTaskSchedulerUtil(IUsoTaskSchedulerUtil * *);
	virtual long CreateUpdateSession(tagUpdateSessionType,IUsoSession * *);
	virtual long GetCurrentActiveUpdateSessions(IUsoSession * * *,unsigned long *);
	virtual long GetSourceBuildInfo(_PHONEBUILDINFO *);
	virtual long GetTargetBuildInfo(_PHONEBUILDINFO *);
	virtual long LogTaskRunning(unsigned short const *);
};

class UpdateStateEngine
{
	bool HasStateProperty(tagUpdateState,unsigned long);
	long RegisterHandler(_GUID);
public:
	long DoMainEngineLoop(IUsoSessionInternal *);
	long Initialize();
};

class UpdateStore
{
	long AcquireUpdateStoreMutex();
	long AddSessionVariable(tagSessionVariablePersistType,std::shared_ptr<VariantNode>);
	long AddUpdate(std::shared_ptr<UpdateNode>);
	long ExtractSessionVariablesTable(XmlReader *);
	long ExtractUpdateStore(unsigned short const *);
	long ExtractUpdatesTable(XmlReader *);
	long GenerateUpdateStoreFilePath(tagUSOFilePath,unsigned short *,unsigned __int64);
	long HasValidHash(unsigned short const *);
	long LoadUpdateStore();
	long ReadFromFile(unsigned short const *,std::basic_string<char,std::char_traits<char>,std::allocator<char> > *);
	long RestoreDefaultStore();
	long WriteLastSessionVariablesTable(XmlWriter *);
	long WriteSessionVariablesTable(XmlWriter *);
	long WriteUpdateStore(unsigned short const *);
	long WriteUpdatesTable(XmlWriter *);
	static long EnsureStoreDirCreated();
	void UnloadUpdatesTable();
public:
	UpdateStore();
	long AddUpdateInfo(UpdateInfo const &);
	long DeleteAllUpdateInfo();
	long DeleteSessionVariable(unsigned short const *,tagSessionVariablePersistType);
	long DeleteUpdateInfo(UpdateIdentity const &);
	long FlushStore();
	long GetSessionVariable(unsigned short const *,tagSessionVariablePersistType,tagVARIANT *);
	long GetUpdateExProperty(UpdateIdentity const &,unsigned short const *,tagVARIANT *);
	long Initialize(_GUID);
	long RotateTransientSessionVariables();
	long SetSessionVariable(unsigned short const *,tagSessionVariablePersistType,tagVARIANT);
	long SetUpdateExProperty(UpdateIdentity const &,unsigned short const *,tagVARIANT);
};

class UsoConfiguration
{
	static unsigned long GetConfiguration(unsigned short const *,unsigned long,unsigned long,unsigned long);
	static unsigned short const * const c_szDataMigrationValueName;
	static unsigned short const * const c_szEnableEngagedReboot;
	static unsigned short const * const c_szIgnoreActiveUserBeforeRestart;
	static unsigned short const * const c_szMuServiceDefault;
	static unsigned short const * const c_szPPIUpdateValueName;
	static unsigned short const * const c_szRegValueEnableUUPScan;
	static unsigned short const * const c_szRequireACPowerCheckBeforeDownload;
	static unsigned short const * const c_szRequireACPowerCheckBeforeRestart;
	static unsigned short const * const c_szRequireACPowerCheckBeforeStaging;
	static unsigned short const * const c_szScanTypeValueName;
	static unsigned short const * const c_szServicingStackValueName;
	static unsigned short const * const c_szUseOneCoreOOBENotificationValueName;
public:
	static bool IsConfigurationSet(UsoConfigurations);
	static bool IsUUPRegKeySet();
};

namespace UsoFileStream
{
	class FileStream
	{
		FileStream(void *,int);
		~FileStream();
	public:
		static long CreateStreamOnFile(unsigned short const *,IStream * *,int);
		virtual long Clone(IStream * *);
		virtual long Commit(unsigned long);
		virtual long CopyTo(IStream *,_ULARGE_INTEGER,_ULARGE_INTEGER *,_ULARGE_INTEGER *);
		virtual long EndHash(unsigned short * *);
		virtual long FreeHash(unsigned short *);
		virtual long InitializeHash(unsigned short const *);
		virtual long LockRegion(_ULARGE_INTEGER,_ULARGE_INTEGER,unsigned long);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long Read(void *,unsigned long,unsigned long *);
		virtual long Revert();
		virtual long Seek(_LARGE_INTEGER,unsigned long,_ULARGE_INTEGER *);
		virtual long SetSize(_ULARGE_INTEGER);
		virtual long StartHash();
		virtual long Stat(tagSTATSTG *,unsigned long);
		virtual long UnlockRegion(_ULARGE_INTEGER,_ULARGE_INTEGER,unsigned long);
		virtual long Write(void const *,unsigned long,unsigned long *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

};

class UsoMedic
{
protected:
	static bool ReadBooleanSessionVariable(IUsoSession *,unsigned short const *);
	static unsigned __int64 ReadULongLongSessionVariable(IUsoSession *,unsigned short const *);
	static unsigned long ReadDWordSessionVariable(IUsoSession *,unsigned short const *);
	static unsigned long ReadULongSessionVariable(IUsoSession *,unsigned short const *);
public:
	static long SetMedicDeferred(IUsoSessionInternal *,UsoMedicState,unsigned int);
	static long SetMedicSuccess(IUsoSessionInternal *,UsoMedicState);
	static long SetMedicSystemState(IUsoSessionInternal *,UsoMedicState);
	static void ReadAndUploadStoreDiagnostics(IUsoSession *);
};

struct UsoMigrationManager
{
	static long Migrate();
};

class UsoSession
{
	struct UpdateStateExt
	{
		UpdateStateExt & operator=(UpdateStateExt const &);
		~UpdateStateExt();
	};

protected:
	UsoSession();
	bool CurrentTimeIsInsideActiveHours();
	bool IsActiveHoursConfigured();
	bool IsRebootOutsideActiveHours();
	bool IsRebootTriggeredByTask();
	bool IsUXRebootStateChanged();
	long AcquireMutexForDUICRegistry();
	long AddFeatureIdsToUserInstallableRegPath(unsigned short const * *,unsigned int,HKEY__ *);
	long AddJsonStringToSessionVariable(unsigned short const *);
	long AddUpdateDownloadSize(IUpdate *,unsigned __int64 *,unsigned __int64 *);
	long AddUpdateInstallSize(IUpdate *,unsigned __int64 *,unsigned __int64 *);
	long AddUpdateToStore(IUpdate *,_GUID);
	long CachePolicyValue(EnterprisePolicy,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	long CachePolicyValue(UpdatePolicy,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	long CombineFeatureIdsToJsonString(std::vector<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	long CommitAndRebootForFullServicingStack();
	long CommitAndRebootForFullServicingStackWithLoggedOnUser();
	long CommitAndRebootForLiteServicingStack();
	long CommitUpdate(IUpdateCollection *);
	long CreateUsoUpdateCollection(IUpdateCollection *,IUsoUpdateCollection * *);
	long CreateWuaUpdateSession();
	long ExtractUpdateIdentity(IUpdate *,UpdateIdentity *);
	long GenerateCallerToken(void * *,bool);
	long GetApplicableUpdatesInternal(IUpdateCollection * *,bool);
	long GetBoolSessionVariable(unsigned short const *,tagSessionVariablePersistType,bool,short,short *);
	long GetRebootResultForFullServicingStack(long *);
	long GetRebootResultForLiteServicingStack(long *);
	long InitializeActiveSessionVariables();
	long InvokeWuApiOnNewThread(UsoSession::UsoSessionFunc);
	long IsUpdateFromService(UpdateIdentity,_GUID,bool &);
	long NotifyTrayIcon(tagUpToDateStatus);
	long RegisterServiceWithWU(_GUID,bool);
	long RemoveUpdateFromStoreForService(IUpdate *,_GUID);
	long ResumeBlockedUpdates();
	long RevertPendingUpdates();
	long SetBoolSessionVariable(unsigned short const *,tagSessionVariablePersistType,short);
	long SetNextState(UsoSession::UpdateStateExt const &);
	long StartAction(tagUpdateState,bool,bool);
	long UpdateAutoScanInterval();
	long WriteUpdateInfoToRegistry(UpdateInfo *);
	static bool IsUserLoggedIn();
	static long CreateUsoUpdateHistoryEntryCollection(IUpdateHistoryEntryCollection *,IUsoUpdateHistoryEntryCollection * *);
	static long GetMostPreferredLoggedOnSessionToken(void * *);
	static long WriteLiteStackBuildInfo(RegistryKeyTypes);
	static unsigned short const * * sc_allowedHistoryApplicationIds;
	static void LogStartScanCaller();
	virtual ~UsoSession();
	void CheckSessionTimeOut();
	void LoadPersistedInfo();
	void LoadPersistedUpdate(UpdateInfo *);
	void LogCommitResult(IUpdateCollection *,long,unsigned long);
	void LogExecutionStateReasonTelemetryEventForAllUpdates(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
	void LogInitiatingRebootEvent();
	void LogRebootFailedEvent(long,unsigned long,unsigned long);
	void RefreshRebootStatus();
	void RefreshUpdateCollection();
	void SetDeserializationFailure(UpdateInfo *);
	void Uninitialize();
	void UploadStoreDiagnostics();
	void ValidateAndRestoreRebootTask();
public:
	long CommitAtPreShutdown();
	long Initialize(_GUID,UpdateSessionManager *,UpdateStateEngine *,void *);
	static IUnknown * CreateInstance();
	static unsigned long WuApiThreadProc(void *);
	virtual long AbortSession();
	virtual long AddOptionalFeatures(unsigned short const * *,unsigned int,unsigned short const *);
	virtual long CleanUsoSharedDataFolder();
	virtual long ClearPauseUpdatesFlag();
	virtual long CompleteUpdateSession();
	virtual long CreateUpdateDownloader(IUpdateDownloader * *);
	virtual long CreateUpdateInstaller(IUpdateInstaller * *);
	virtual long CreateUpdateSearcher(IUpdateSearcher * *);
	virtual long FlushStore();
	virtual long FreeServiceArray(_GUID *);
	virtual long GetAllApplicableUpdates(IUpdateCollection * *);
	virtual long GetAllUpdates(IUpdateCollection * *);
	virtual long GetApplicableServices(unsigned long *,_GUID * *);
	virtual long GetApplicableUpdates(_GUID,IUpdateCollection * *);
	virtual long GetCachedLusPolicyValue(unsigned short const *,tagVARIANT *,unsigned long *);
	virtual long GetCachedPolicy(unsigned long,tagVARIANT *,unsigned long *,unsigned long *);
	virtual long GetCachedPolicyValue(unsigned long,tagVARIANT *,unsigned long *);
	virtual long GetCachedSettingValue(unsigned long,tagVARIANT *);
	virtual long GetEnterpriseCachedPolicy(unsigned long,tagVARIANT *,unsigned long *,unsigned long *);
	virtual long GetEnterpriseCachedPolicyValue(unsigned long,tagVARIANT *,unsigned long *);
	virtual long GetEnterprisePolicy_IsWUfBEnabled(int *);
	virtual long GetEvent(tagUsoEventType,void * *);
	virtual long GetIsWaaSOutOfDate(int *);
	virtual long GetNextStateToRun(tagUpdateState *);
	virtual long GetPermanentSessionVariable(unsigned short const *,tagVARIANT *);
	virtual long GetRebootResult(long *);
	virtual long GetSessionProperty(unsigned long,tagVARIANT *);
	virtual long GetSessionVariable(unsigned short const *,tagSessionVariablePersistType,tagVARIANT *);
	virtual long GetSessionVariable(unsigned short const *,tagVARIANT *);
	virtual long GetShutdownOptions(unsigned long *,unsigned long *);
	virtual long GetTotalHistoryCount(unsigned long *);
	virtual long GetUXRebootState(tagUXRebootState *);
	virtual long GetUpdateExProperty(IUpdate *,unsigned short const *,tagVARIANT *);
	virtual long GetUpdateHistory(unsigned long,unsigned long,IUsoUpdateHistoryEntryCollection * *);
	virtual long GetUpdatePayloadSize(tagUsoUpdatePayloadType,unsigned __int64 *,unsigned __int64 *);
	virtual long GetUpdateStatusInfo(IUpdate *,tagUpdateStatusInfo *);
	virtual long GetUsoSharedDataFolder(unsigned short * *);
	virtual long HandlePreShutdown();
	virtual long IsRestartAllowed(unsigned long,int *);
	virtual long OptInToMuService();
	virtual long PauseUpdates();
	virtual long PrepareDUICSession();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RebootToCompleteInstall(unsigned long,unsigned long *);
	virtual long RefreshPolicyCacheValuesAndConfiguration();
	virtual long RefreshSettings();
	virtual long RefreshShutdownFlyout(unsigned long);
	virtual long RegisterService(_GUID);
	virtual long RemoveApplicableUpdatesFromService(_GUID);
	virtual long ResumeUpdates();
	virtual long ScheduleReboot(unsigned short const *,_SYSTEMTIME);
	virtual long SetApplicableUpdates(_GUID,IUpdateCollection *);
	virtual long SetPermanentSessionVariable(unsigned short const *,tagVARIANT);
	virtual long SetSessionProperty(unsigned long,tagVARIANT);
	virtual long SetSessionVariable(unsigned short const *,tagSessionVariablePersistType,tagVARIANT);
	virtual long SetSessionVariable(unsigned short const *,tagVARIANT);
	virtual long SetSessionVariableAndUpdateUXState(unsigned short const *,tagVARIANT);
	virtual long SetUpdateExProperty(IUpdate *,unsigned short const *,tagVARIANT);
	virtual long SetUpdateStatusInfo(IUpdate *,tagUpdateStatusInfo);
	virtual long StartDownload(short);
	virtual long StartInstall(short);
	virtual long StartPostInstall();
	virtual long StartScan(short,short);
	virtual long TransitionToNextState(tagUpdateState *);
	virtual long UsoCollectTroubleshootingFiles(unsigned long,unsigned short *,unsigned long);
	virtual long UsoDisableUserInstallableContent(unsigned short const *,unsigned short const *,unsigned short const *);
	virtual long UsoEnableUserInstallableContent(unsigned short const *,unsigned short const *,unsigned short const *);
	virtual long WaitUntilSessionThreadTerminates(unsigned long);
	virtual long WriteSourceBuildInfo();
	virtual long WriteTargetBuildInfo();
	virtual long get_AllUpdates(IUsoUpdateCollection * *);
	virtual long get_ApplicableUpdates(unsigned long,IUsoUpdateCollection * *);
	virtual long get_AttentionRequiredReason(tagAttentionRequiredReason *);
	virtual long get_CallerToken(void * *);
	virtual long get_CanPause(int *);
	virtual long get_CurrentState(tagUpdateState *);
	virtual long get_IsExternalCaller(short *);
	virtual long get_IsInteractiveSession(short *);
	virtual long get_IsMsUpdateServiceOnly(short *);
	virtual long get_LastErrorInfo(tagUpdateErrorInfo *);
	virtual long get_LastUpdateCheckTime(_FILETIME *);
	virtual long get_LastUpdateInstallTime(_FILETIME *);
	virtual long get_OptInToMU(short *);
	virtual long get_RebootRequired(short *);
	virtual long get_RebootResult(long *);
	virtual long get_UpToDateStatus(tagUpToDateStatus *);
	virtual long get_UpdateProgress(tagUpdateProgress *);
	virtual long get_UpdateSessionType(_GUID *);
	virtual long get_UsoSharedDataFolder(unsigned short * *);
	virtual long put_AttentionRequiredReason(tagAttentionRequiredReason);
	virtual long put_InstallAtShutdown(short);
	virtual long put_LastError(long);
	virtual long put_LastUpdateCheckTime(_FILETIME);
	virtual long put_LastUpdateInstallTime(_FILETIME);
	virtual long put_NextState(tagUpdateState);
	virtual long put_OptInToMU(short);
	virtual long put_RebootRequired(short);
	virtual long put_UpToDateStatus(tagUpToDateStatus);
	virtual long put_UpdateProgress(tagUpdateProgress);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct UsoSessionWrapper
{
	UsoSessionWrapper(IUsoSession *);
	virtual long AddOptionalFeatures(unsigned short const * *,unsigned int,unsigned short const *);
	virtual long CleanUsoSharedDataFolder();
	virtual long GetCachedLusPolicyValue(unsigned short const *,tagVARIANT *,unsigned long *);
	virtual long GetCachedPolicy(unsigned long,tagVARIANT *,unsigned long *,unsigned long *);
	virtual long GetCachedPolicyValue(unsigned long,tagVARIANT *,unsigned long *);
	virtual long GetCachedSettingValue(unsigned long,tagVARIANT *);
	virtual long GetEnterpriseCachedPolicy(unsigned long,tagVARIANT *,unsigned long *,unsigned long *);
	virtual long GetEnterpriseCachedPolicyValue(unsigned long,tagVARIANT *,unsigned long *);
	virtual long GetEnterprisePolicy_IsWUfBEnabled(int *);
	virtual long GetIsWaaSOutOfDate(int *);
	virtual long GetPermanentSessionVariable(unsigned short const *,tagVARIANT *);
	virtual long GetSessionProperty(unsigned long,tagVARIANT *);
	virtual long GetSessionVariable(unsigned short const *,tagVARIANT *);
	virtual long GetTotalHistoryCount(unsigned long *);
	virtual long GetUXRebootState(tagUXRebootState *);
	virtual long GetUpdateHistory(unsigned long,unsigned long,IUsoUpdateHistoryEntryCollection * *);
	virtual long GetUpdatePayloadSize(tagUsoUpdatePayloadType,unsigned __int64 *,unsigned __int64 *);
	virtual long IsRestartAllowed(unsigned long,int *);
	virtual long PauseUpdates();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long RebootToCompleteInstall(unsigned long,unsigned long *);
	virtual long RefreshSettings();
	virtual long ResumeUpdates();
	virtual long ScheduleReboot(unsigned short const *,_SYSTEMTIME);
	virtual long SetPermanentSessionVariable(unsigned short const *,tagVARIANT);
	virtual long SetSessionProperty(unsigned long,tagVARIANT);
	virtual long SetSessionVariable(unsigned short const *,tagVARIANT);
	virtual long SetSessionVariableAndUpdateUXState(unsigned short const *,tagVARIANT);
	virtual long StartDownload(short);
	virtual long StartInstall(short);
	virtual long StartPostInstall();
	virtual long StartScan(short,short);
	virtual long UsoCollectTroubleshootingFiles(unsigned long,unsigned short *,unsigned long);
	virtual long UsoDisableUserInstallableContent(unsigned short const *,unsigned short const *,unsigned short const *);
	virtual long UsoEnableUserInstallableContent(unsigned short const *,unsigned short const *,unsigned short const *);
	virtual long get_AllUpdates(IUsoUpdateCollection * *);
	virtual long get_ApplicableUpdates(unsigned long,IUsoUpdateCollection * *);
	virtual long get_AttentionRequiredReason(tagAttentionRequiredReason *);
	virtual long get_CanPause(int *);
	virtual long get_CurrentState(tagUpdateState *);
	virtual long get_IsInteractiveSession(short *);
	virtual long get_LastErrorInfo(tagUpdateErrorInfo *);
	virtual long get_LastUpdateCheckTime(_FILETIME *);
	virtual long get_LastUpdateInstallTime(_FILETIME *);
	virtual long get_OptInToMU(short *);
	virtual long get_RebootRequired(short *);
	virtual long get_RebootResult(long *);
	virtual long get_UpToDateStatus(tagUpToDateStatus *);
	virtual long get_UpdateProgress(tagUpdateProgress *);
	virtual long get_UpdateSessionType(_GUID *);
	virtual long get_UsoSharedDataFolder(unsigned short * *);
	virtual long put_OptInToMU(short);
	virtual long put_UpToDateStatus(tagUpToDateStatus);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class UsoSettings
{
protected:
	long GetCTACQueryString(unsigned short const *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	long GetDeviceClass(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	long GetDeviceId(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	long GetETag(bool,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	long GetOsVersion(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	long GetQuery(unsigned short const *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	long GetSampleId(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	long GetSystemPreferredUILanguage(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	long MapWinhttpStatusToHresult(unsigned long);
	long ParseJson(unsigned short const *,std::map<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,_variant_t,std::less<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >,std::allocator<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,_variant_t> > > *);
	static unsigned short const * const * const c_rgszSettingName;
public:
	long DownloadSettings(bool,unsigned short const *,std::map<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,_variant_t,std::less<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >,std::allocator<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,_variant_t> > > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,unsigned long *);
	long GetSettingName(Setting_Value,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	long PersistETag(unsigned short const *);
	long SaveNextDownloadTime(unsigned long);
	long ShouldDownload(bool *);
	~UsoSettings();
};

class UsoTroubleshooting
{
	long CollectDataMigrationStateLogs(_iobuf *);
	long CollectRegistryDumps();
	long CopyFileCollectionIfExists(unsigned short const *,unsigned short const *,bool,bool,std::basic_ofstream<unsigned short,std::char_traits<unsigned short> > *,unsigned long *);
	long CopyFileIfExists(unsigned short const *,unsigned short const *,bool,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	long CreateLogForTaskFolder(unsigned short const *,unsigned short const *);
	long DumpMetadata();
	long DumpRegKeyList(_iobuf *,HKEY__ *,HKEY__ *);
	long FlushEtwSessions(std::map<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,int,std::less<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >,std::allocator<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,int> > >,bool);
	long GatherAllFilesInUSOFolder(tagUSODirectory);
	long GatherEtwSessionFiles(unsigned long);
	long GatherFilesToCollect();
	long GatherStaticFiles(unsigned long);
	static long CreateCabFile(unsigned long,unsigned short const *,unsigned short const *);
	static long DumpInstalledPackages();
};

class UsoUpdate
{
	long CalculateUpdateClassificationAndCategorization();
protected:
	UsoUpdate(IUpdate *,IUsoSessionInternal *);
	long WuIdentityToUsoIdentity(IUpdateIdentity *,tagUsoUpdateIdentifier *);
	virtual ~UsoUpdate();
public:
	virtual long AcceptEula();
	virtual long GetExProperty(unsigned short *,tagVARIANT *);
	virtual long GetInternalProperty(tagUpdatePropertyType,tagVARIANT *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long SetExProperty(unsigned short *,tagVARIANT);
	virtual long get_Categorization(tagUpdateCategorization *);
	virtual long get_Classification(tagUpdateClassification *);
	virtual long get_Deadline(tagVARIANT *);
	virtual long get_Description(unsigned short * *);
	virtual long get_EulaAccepted(short *);
	virtual long get_EulaText(unsigned short * *);
	virtual long get_InstallSize(unsigned __int64 *);
	virtual long get_LastDeploymentChangeTime(double *);
	virtual long get_MaxDownloadSize(unsigned __int64 *);
	virtual long get_MinDownloadSize(unsigned __int64 *);
	virtual long get_MoreInfoUrls(unsigned short * * *,long *);
	virtual long get_SupportUrl(unsigned short * *);
	virtual long get_Title(unsigned short * *);
	virtual long get_UpdateId(tagUsoUpdateIdentifier *);
	virtual long get_UpdateStatusInfo(tagUpdateStatusInfo *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class UsoUpdateCollection
{
protected:
	virtual ~UsoUpdateCollection();
public:
	long AddToTail(IUsoUpdate *);
	virtual long Clear();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Remove(unsigned long);
	virtual long get_Count(unsigned long *);
	virtual long get_Item(unsigned long,IUsoUpdate * *);
	virtual long get__NewEnum(IUnknown * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class UsoUpdateEnhancedTraceLogging
{
protected:
	void Create();
public:
	static _TlgProvider_t const * Provider();
};

class UsoUpdateHistoryEntry
{
	UsoUpdateHistoryEntry(IUpdateHistoryEntry3 *);
	long WuIdentityToUsoIdentity(IUpdateIdentity *,tagUsoUpdateIdentifier *);
	virtual ~UsoUpdateHistoryEntry();
public:
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long get_Classification(tagHistoryClassification *);
	virtual long get_ClientApplicationID(unsigned short * *);
	virtual long get_Count(unsigned long *);
	virtual long get_Date(double *);
	virtual long get_Description(unsigned short * *);
	virtual long get_HResult(long *);
	virtual long get_MoreInfoUrls(unsigned short * * *,long *);
	virtual long get_Operation(tagUsoUpdateOperation *);
	virtual long get_ResultCode(tagUsoOperationResultCode *);
	virtual long get_SupportUrl(unsigned short * *);
	virtual long get_Title(unsigned short * *);
	virtual long get_UpdateId(tagUsoUpdateIdentifier *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class UsoUpdateHistoryEntryCollection
{
protected:
	virtual ~UsoUpdateHistoryEntryCollection();
public:
	long AddToTail(IUsoUpdateHistoryEntry *);
	virtual long Clear();
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long Remove(unsigned long);
	virtual long get_Count(unsigned long *);
	virtual long get_Item(unsigned long,IUsoUpdateHistoryEntry * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class UsoUpdateTraceLogging
{
protected:
	static UsoUpdateTraceLogging * Instance();
	virtual void Initialize();
public:
	static void CommitFailed(_GUID,long);
	static void CompletingUpdateSession(_GUID,unsigned short const *);
	static void CorrelationVectorGeneration(unsigned short const *);
	static void CorrelationVectorProcessed(char const *);
	static void CorrelationVectorProgression(unsigned short const *);
	static void LrpQueriedInfoCount(unsigned long);
	static void LrpUpdateInfoCount(unsigned long);
	static void LrpUpdatesToReport(unsigned __int64);
	static void StartDownloadApiCalled(int);
	static void StartInstallApiCalled(int);
	static void StartScanApiCalled(int,int);
	static void TokenCached(unsigned long);
	static void UpdateLoadFailed(_GUID,long);
	static void UpdateRebootNotRequired(_GUID);
	static void UpdateStateTransition(unsigned short const *,unsigned short const *);
	static void UsoServiceStopError(long);
	static void UsoSetFlightPendingCommitError(long);
	static void UsoSettingsDownloadFailed(char const *,long);
};

struct VariantNode
{
	long ExtractNode(XmlReader *);
	long SetNode(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,tagVARIANT);
	long WriteNode(XmlWriter *);
};

struct WaaSHelper
{
	static bool IsFeatureUpdatePending(IUsoSession *);
	static bool IsWaaSUXAllowedByUUP(IUsoSession *);
	static long DaysSinceUUPFallbackChanged(IUsoSession *,unsigned long *);
};

namespace Windows
{
	namespace Internal
	{
		class ComTaskPool
		{
			struct CGitLifetimeExtension
			{
				void Init();
			};

			class CThread
			{
				long _CreateThreadRef(long *,IUnknown * *);
				long _WaitForThreadUpdate(unsigned long);
				static HINSTANCE__ * s_ExecuteThreadProc(void *);
				static unsigned long s_ThreadProc(void *);
				static void s_CheckForDeadlockTimerCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
				static void s_ThreadPoolCallback(_TP_CALLBACK_INSTANCE *,void *);
				void _ThreadProc();
			public:
				long StartThread();
				long StartThreadWithFallback();
				long _StartThreadCommon();
			};

			static ComTaskPool::CThread * s_pThreadList;
			static ComTaskPool::TaskList s_taskFloodingList;
			static _RTL_SRWLOCK s_rwLock;
			static bool s_TryRemoveThread(ComTaskPool::CThread *,bool);
			static bool volatile s_fCanReuseThreads;
			static bool volatile s_fWaitForMoreTasks;
			static long s_GetTaskPoolTlsSlot(unsigned long *);
			static long s_QueuePoolTask(TaskApartment,TaskOptions,unsigned long,IComPoolTask *);
			static long s_QueuePoolTaskUnderLock(void *,TaskApartment,TaskOptions,unsigned long,IComPoolTask *,ComTaskPool::TaskList *,ComTaskPool::CThread * *);
			static unsigned long volatile s_cThreadsStarting;
			static unsigned long volatile s_dwThreadIdReuse;
			static void * s_hEventCache;
			static void s_AttachAndRecoverTask(ComTaskPool::TaskData *);
		};

	};

};

struct WnfPublisherT<char>
{
	virtual ~WnfPublisherT<char>();
};

class WnfSubscriberT<char>
{
protected:
	static long CallbackWrapper(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
public:
	WnfSubscriberT<char>(_WNF_STATE_NAME const &);
	virtual ~WnfSubscriberT<char>();
};

class XmlReader
{
	long DuplicateString(unsigned short const *,unsigned int,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	long GetNextNode(XmlNodeType *);
public:
	XmlReader();
	bool IsEmptyElement();
	bool IsEndElement();
	long GetLocalName(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
	long GetLocalName(unsigned short const * *,unsigned int *);
	long GetNodeText(unsigned short const * *,unsigned int *);
	long GetValue(unsigned short const * *,unsigned int *);
	long GetValueAsDWORD(unsigned long *);
	long Init(IStream *);
	long MoveToEndOfCurrentElement(bool);
	long MoveToFirstAttribute();
	long MoveToNextAttribute();
	long ValidateCurrentLocalName(unsigned short const *,bool);
	long ValidateElement(bool);
	long ValidateElement(unsigned short const *,bool,bool);
	~XmlReader();
};

struct XmlWriter
{
	XmlWriter();
	long Flush();
	long Init(IStream *);
	long WriteAttribute(unsigned short const *,_GUID);
	long WriteAttribute(unsigned short const *,int);
	long WriteAttribute(unsigned short const *,unsigned long);
	long WriteAttribute(unsigned short const *,unsigned short const *);
	long WriteElement(unsigned short const *,unsigned short const *);
	long WriteEndDocument();
	long WriteEndElement();
	long WriteStartDocument();
	long WriteStartElement(unsigned short const *);
	long WriteString(unsigned short const *);
	~XmlWriter();
};

class _bstr_t
{
	void _Free();
public:
	_bstr_t(unsigned short const *);
	~_bstr_t();
};

struct _com_error
{
	_com_error(_com_error const &);
	_com_error(long,IErrorInfo *,bool);
	virtual ~_com_error();
};

namespace _com_util
{
	char * ConvertBSTRToString(unsigned short *);
	unsigned short * ConvertStringToBSTR(char const *);
};

struct _variant_t
{
	operator bool();
	~_variant_t();
};

struct bad_cast
{
	bad_cast(bad_cast const &);
	virtual ~bad_cast();
};

struct exception
{
	exception(exception const &);
	virtual char const * what();
};

namespace msl
{
	namespace safeint3
	{
		struct SafeIntException
		{
			SafeIntException(SafeIntError);
		};

		namespace SafeIntInternal
		{
			struct SafeIntExceptionHandler<SafeIntException>
			{
				static void SafeIntOnOverflow();
			};

		};

	};

};

namespace pplx
{
	struct _Continuation_func_transformer<bool,void>
	{
		static std::function<unsigned char (bool)> _Perform(std::function<void (bool)>);
	};

	struct _Continuation_func_transformer<task<bool>,void>
	{
		static std::function<unsigned char (task<bool>)> _Perform(std::function<void (task<bool>)>);
	};

	struct _Continuation_func_transformer<task<long>,void>
	{
		static std::function<unsigned char (task<long>)> _Perform(std::function<void (task<long>)>);
	};

	struct _Continuation_func_transformer<task<unsigned __int64>,void>
	{
		static std::function<unsigned char (task<unsigned __int64>)> _Perform(std::function<void (task<unsigned __int64>)>);
	};

	struct _Continuation_func_transformer<task<void>,void>
	{
		static std::function<unsigned char (task<void>)> _Perform(std::function<void (task<void>)>);
	};

	struct _Continuation_func_transformer<unsigned __int64,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >
	{
		static std::function<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > (unsigned __int64)> _Perform(std::function<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > (unsigned __int64)>);
	};

	struct _Continuation_func_transformer<unsigned char,void>
	{
		static std::function<unsigned char (unsigned char)> _Perform(std::function<void (unsigned char)>);
	};

	struct _Continuation_func_transformer<void,task<void> >
	{
		static std::function<task<void> (unsigned char)> _Perform(std::function<task<void> ()>);
	};

	struct _Continuation_func_transformer<void,void>
	{
		static std::function<unsigned char (unsigned char)> _Perform(std::function<void ()>);
	};

	struct _Init_func_transformer<void>
	{
		static std::function<unsigned char ()> _Perform(std::function<void ()>);
	};

	struct _pplx_g_sched_t
	{
		std::shared_ptr<scheduler_interface> get_scheduler();
	};

	struct cancellation_token
	{
		~cancellation_token();
	};

	struct cancellation_token_registration
	{
		~cancellation_token_registration();
	};

	struct cancellation_token_source
	{
		void cancel();
		~cancellation_token_source();
	};

	namespace details
	{
		struct _AutoDeleter<_TaskProcHandle>
		{
			~_AutoDeleter<_TaskProcHandle>();
		};

		class _CancellationTokenRegistration
		{
			void _Invoke();
		protected:
			virtual ~_CancellationTokenRegistration();
		};

		struct _CancellationTokenState
		{
			struct TokenRegistrationContainer
			{
				~TokenRegistrationContainer();
			};

			void _DeregisterCallback(_CancellationTokenRegistration *);
			void _RegisterCallback(_CancellationTokenRegistration *);
		};

		struct _ExceptionHolder
		{
			~_ExceptionHolder();
		};

		struct _PPLTaskHandle<unsigned char,task<unsigned char>::_ContinuationTaskHandle<void,void,std::function<void (task<void>)>,std::integral_constant<bool,1>,_TypeSelectorNoAsync>,_ContinuationTaskHandleBase>
		{
			virtual std::shared_ptr<_Task_impl_base> _GetTaskImplBase();
			virtual void invoke();
			virtual ~_PPLTaskHandle<unsigned char,task<unsigned char>::_ContinuationTaskHandle<void,void,std::function<void (task<void>)>,std::integral_constant<bool,1>,_TypeSelectorNoAsync>,_ContinuationTaskHandleBase>();
		};

		class _RefCounter
		{
		protected:
			virtual void _Destroy();
		public:
			long _Release();
			virtual ~_RefCounter();
		};

		struct _ResultHolder<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >
		{
			~_ResultHolder<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >();
		};

		struct _ResultHolder<web::http::http_response>
		{
			~_ResultHolder<web::http::http_response>();
		};

		struct _ResultHolder<web::json::value>
		{
			~_ResultHolder<web::json::value>();
		};

		struct _Scheduler_Param
		{
			static void DefaultWorkCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_WORK *);
		};

		struct _TaskCollectionImpl
		{
			static void _RunTask(void (*)(void *),void *,_TaskInliningMode);
			~_TaskCollectionImpl();
		};

		struct _TaskCreationCallstack
		{
			~_TaskCreationCallstack();
		};

		struct _TaskProcHandle
		{
			static void _RunChoreBridge(void *);
		};

		struct _TaskProcThunk
		{
			struct _Holder
			{
				~_Holder();
			};

			static void _Bridge(void *);
		};

		struct _Task_impl<bool>
		{
			virtual bool _CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<_ExceptionHolder> const &);
			virtual ~_Task_impl<bool>();
		};

		struct _Task_impl<int>
		{
			virtual bool _CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<_ExceptionHolder> const &);
			virtual ~_Task_impl<int>();
		};

		struct _Task_impl<long>
		{
			virtual bool _CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<_ExceptionHolder> const &);
			virtual ~_Task_impl<long>();
		};

		struct _Task_impl<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >
		{
			virtual bool _CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<_ExceptionHolder> const &);
			virtual ~_Task_impl<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >();
			void _FinalizeAndRunContinuations(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >);
		};

		struct _Task_impl<unsigned __int64>
		{
			virtual bool _CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<_ExceptionHolder> const &);
			virtual ~_Task_impl<unsigned __int64>();
		};

		struct _Task_impl<unsigned char>
		{
			virtual bool _CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<_ExceptionHolder> const &);
			virtual ~_Task_impl<unsigned char>();
			void _FinalizeAndRunContinuations(unsigned char);
		};

		struct _Task_impl<web::http::http_response>
		{
			virtual bool _CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<_ExceptionHolder> const &);
			virtual ~_Task_impl<web::http::http_response>();
			void _FinalizeAndRunContinuations(web::http::http_response);
		};

		struct _Task_impl<web::json::value>
		{
			virtual bool _CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<_ExceptionHolder> const &);
			virtual ~_Task_impl<web::json::value>();
		};

		struct _Task_impl_base
		{
			_Task_impl_base(_CancellationTokenState *,scheduler_ptr);
			bool _CancelWithException(std::exception_ptr const &);
			static void _AsyncInit<bool,bool>(std::shared_ptr<_Task_impl<bool> > const &,task<bool> const &);
			static void _AsyncInit<long,long>(std::shared_ptr<_Task_impl<long> > const &,task<long> const &);
			static void _AsyncInit<unsigned __int64,unsigned __int64>(std::shared_ptr<_Task_impl<unsigned __int64> > const &,task<unsigned __int64> const &);
			static void _AsyncInit<unsigned char,void>(std::shared_ptr<_Task_impl<unsigned char> > const &,task<void> const &);
			task_group_status _Wait();
			virtual ~_Task_impl_base();
			void _RegisterCancellation(std::weak_ptr<_Task_impl_base>);
			void _RunTaskContinuations();
			void _ScheduleContinuation(_ContinuationTaskHandleBase *);
			void _ScheduleTask(_TaskProcHandle *,_TaskInliningMode);
		};

		struct _WhenAllImpl<void,task<void> *>
		{
			static task<void> _Perform(task_options const &,task<void> *,task<void> *);
		};

		struct critical_section_impl
		{
			~critical_section_impl();
		};

		struct event_impl
		{
			event_impl();
			~event_impl();
		};

		namespace platform
		{
			void InitializeCriticalSection(_RTL_CRITICAL_SECTION *);
		};

		struct windows_scheduler
		{
			virtual void schedule(void (*)(void *),void *);
		};

		std::integral_constant<bool,0> _IsCallable<task_completion_event<bool> >(task_completion_event<bool>,...);
		std::integral_constant<bool,0> _IsCallable<task_completion_event<int> >(task_completion_event<int>,...);
		std::integral_constant<bool,0> _IsCallable<task_completion_event<long> >(task_completion_event<long>,...);
		std::integral_constant<bool,0> _IsCallable<task_completion_event<unsigned __int64> >(task_completion_event<unsigned __int64>,...);
		std::integral_constant<bool,0> _IsCallable<task_completion_event<unsigned char> >(task_completion_event<unsigned char>,...);
		std::integral_constant<bool,0> _IsCallable<task_completion_event<void> >(task_completion_event<void>,...);
		std::integral_constant<bool,0> _IsCallable<task_completion_event<web::http::http_response> >(task_completion_event<web::http::http_response>,...);
		void _JoinAllTokens_Add(cancellation_token_source const &,details::_CancellationTokenState *);
	};

	struct invalid_operation
	{
		invalid_operation();
		invalid_operation(char const *);
		invalid_operation(invalid_operation const &);
		virtual char const * what();
		virtual ~invalid_operation();
	};

	struct scheduler_ptr
	{
		~scheduler_ptr();
	};

	struct scoped_lock<details::_Spin_lock>
	{
		~scoped_lock<details::_Spin_lock>();
	};

	struct scoped_lock<details::critical_section_impl>
	{
		~scoped_lock<details::critical_section_impl>();
	};

	struct scoped_lock<details::recursive_lock_impl>
	{
		~scoped_lock<details::recursive_lock_impl>();
	};

	struct task<bool>
	{
		bool get();
		task<bool><task_completion_event<bool> >(task_completion_event<bool>,task_options const &);
		void _CreateImpl(details::_CancellationTokenState *,scheduler_ptr);
		void _SetImpl(std::shared_ptr<details::_Task_impl<bool> > const &);
		~task<bool>();
	};

	struct task<int>
	{
		task<int><task_completion_event<int> >(task_completion_event<int>,task_options const &);
		void _CreateImpl(details::_CancellationTokenState *,scheduler_ptr);
		~task<int>();
	};

	struct task<long>
	{
		long get();
		task<long><task_completion_event<long> >(task_completion_event<long>,task_options const &);
		void _CreateImpl(details::_CancellationTokenState *,scheduler_ptr);
		void _SetImpl(std::shared_ptr<details::_Task_impl<long> > const &);
		~task<long>();
	};

	struct task<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >
	{
		void _CreateImpl(details::_CancellationTokenState *,scheduler_ptr);
		~task<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >();
	};

	struct task<unsigned __int64>
	{
		task<unsigned __int64><task_completion_event<unsigned __int64> >(task_completion_event<unsigned __int64>,task_options const &);
		unsigned __int64 get();
		void _CreateImpl(details::_CancellationTokenState *,scheduler_ptr);
		void _SetImpl(std::shared_ptr<details::_Task_impl<unsigned __int64> > const &);
		~task<unsigned __int64>();
	};

	class task<unsigned char>
	{
		struct _ContinuationTaskHandle<void,void,std::function<void (task<void>)>,std::integral_constant<bool,1>,details::_TypeSelectorNoAsync>
		{
			virtual ~_ContinuationTaskHandle<void,void,std::function<void (task<void>)>,std::integral_constant<bool,1>,details::_TypeSelectorNoAsync>();
			void _Perform();
		};

		task<void> _ThenImpl<void,std::function<void (task<void>)> >(std::function<void (task<void>)> const &,details::_CancellationTokenState *,task_continuation_context const &,scheduler_ptr,details::_TaskCreationCallstack,details::_TaskInliningMode);
		task<void> _ThenImpl<void,std::function<void (task<void>)> >(std::function<void (task<void>)> const &,task_options const &);
		void _TaskInitNoFunctor(task_completion_event<unsigned char> &);
	public:
		task<unsigned char><task_completion_event<unsigned char> >(task_completion_event<unsigned char>,task_options const &);
		void _CreateImpl(details::_CancellationTokenState *,scheduler_ptr);
		~task<unsigned char>();
	};

	struct task<void>
	{
		task<void> then<std::function<void (task<void>)> >(std::function<void (task<void>)> const &,task_options);
		task<void><task_completion_event<void> >(task_completion_event<void>,task_options const &);
		void _CreateImpl(details::_CancellationTokenState *,scheduler_ptr);
		void _SetImpl(std::shared_ptr<details::_Task_impl<unsigned char> > const &);
		void get();
		~task<void>();
	};

	struct task<web::http::http_response>
	{
		task<web::http::http_response><task_completion_event<web::http::http_response> >(task_completion_event<web::http::http_response>,task_options const &);
		web::http::http_response get();
		~task<web::http::http_response>();
	};

	struct task<web::json::value>
	{
		void _CreateImpl(details::_CancellationTokenState *,scheduler_ptr);
		web::json::value get();
		~task<web::json::value>();
	};

	struct task_canceled
	{
		task_canceled();
		task_canceled(task_canceled const &);
		virtual char const * what();
		virtual ~task_canceled();
	};

	class task_completion_event<bool>
	{
		bool _CancelInternal();
	public:
		bool set(bool);
		bool set_exception(std::exception_ptr);
		task_completion_event<bool>();
		task_completion_event<bool>(task_completion_event<bool> const &);
		~task_completion_event<bool>();
	};

	class task_completion_event<int>
	{
		bool _CancelInternal();
	public:
		bool set(int);
		bool set_exception(std::exception_ptr);
		task_completion_event<int>();
		task_completion_event<int>(task_completion_event<int> const &);
		~task_completion_event<int>();
	};

	class task_completion_event<long>
	{
		bool _CancelInternal();
	public:
		bool set(long);
		bool set_exception(std::exception_ptr);
		task_completion_event<long>();
		task_completion_event<long>(task_completion_event<long> const &);
		~task_completion_event<long>();
	};

	class task_completion_event<unsigned __int64>
	{
		bool _CancelInternal();
	public:
		bool set(unsigned __int64);
		bool set_exception(std::exception_ptr);
		task_completion_event<unsigned __int64>();
		task_completion_event<unsigned __int64>(task_completion_event<unsigned __int64> const &);
		~task_completion_event<unsigned __int64>();
	};

	class task_completion_event<unsigned char>
	{
		bool _CancelInternal();
	public:
		bool _Cancel<std::exception_ptr>(std::exception_ptr,details::_TaskCreationCallstack const &);
		bool _Cancel<std::shared_ptr<details::_ExceptionHolder> >(std::shared_ptr<details::_ExceptionHolder>,details::_TaskCreationCallstack const &);
		bool set(unsigned char);
		task_completion_event<unsigned char>();
		task_completion_event<unsigned char>(task_completion_event<unsigned char> const &);
		~task_completion_event<unsigned char>();
	};

	struct task_completion_event<void>
	{
		bool set_exception(std::exception_ptr);
		~task_completion_event<void>();
	};

	class task_completion_event<web::http::http_response>
	{
		bool _CancelInternal();
	public:
		bool set(web::http::http_response);
		bool set_exception(std::exception_ptr);
		task_completion_event<web::http::http_response>();
		task_completion_event<web::http::http_response>(task_completion_event<web::http::http_response> const &);
		~task_completion_event<web::http::http_response>();
	};

	struct task_options
	{
		task_options();
		~task_options();
	};

	pplx::task<bool> create_task<task_completion_event<bool> >(pplx::task_completion_event<bool>,pplx::task_options);
	pplx::task<bool> task_from_exception<bool,std::exception_ptr>(std::exception_ptr,pplx::task_options const &);
	pplx::task<bool> task_from_result<bool>(bool,pplx::task_options const &);
	pplx::task<int> create_task<task_completion_event<int> >(pplx::task_completion_event<int>,pplx::task_options);
	pplx::task<int> task_from_exception<int,std::exception_ptr>(std::exception_ptr,pplx::task_options const &);
	pplx::task<int> task_from_result<int>(int,pplx::task_options const &);
	pplx::task<long> create_task<task_completion_event<long> >(pplx::task_completion_event<long>,pplx::task_options);
	pplx::task<long> task_from_exception<long,std::exception_ptr>(std::exception_ptr,pplx::task_options const &);
	pplx::task<long> task_from_result<long>(long,pplx::task_options const &);
	pplx::task<unsigned __int64> create_task<task_completion_event<unsigned __int64> >(pplx::task_completion_event<unsigned __int64>,pplx::task_options);
	pplx::task<unsigned __int64> task_from_exception<unsigned __int64,std::exception_ptr>(std::exception_ptr,pplx::task_options const &);
	pplx::task<unsigned __int64> task_from_result<unsigned __int64>(unsigned __int64,pplx::task_options const &);
	pplx::task<void> create_task<task_completion_event<void> >(pplx::task_completion_event<void>,pplx::task_options);
	pplx::task<void> operator&&(pplx::task<void> const &,pplx::task<void> const &);
	pplx::task<void> task_from_exception<void,std::exception_ptr>(std::exception_ptr,pplx::task_options const &);
	pplx::task<void> task_from_result(pplx::task_options const &);
	pplx::task<web::http::http_response> create_task<task_completion_event<web::http::http_response> >(pplx::task_completion_event<web::http::http_response>,pplx::task_options);
};

namespace std
{
	class _Builder<unsigned short const *,unsigned short,regex_traits<unsigned short> >
	{
		_Node_base * _New_node(_Node_type);
		void _Add_char_to_array(unsigned short);
		void _Char_to_elts(unsigned short const *,unsigned short const *,__int64,_Sequence<unsigned short> * *);
	public:
		_Node_base * _Begin_assert_group(bool);
		_Node_base * _Begin_if(_Node_base *);
		void _Add_char(unsigned short);
		void _Add_char_to_class(unsigned short);
		void _Add_class();
		void _Add_equiv(unsigned short const *,unsigned short const *,__int64);
		void _Add_named_class(short);
		void _Add_range(unsigned short,unsigned short);
		void _Add_rep(int,int,bool);
		void _Discard_pattern();
		void _End_group(_Node_base *);
	};

	struct _Error_objects<int>
	{
		static _Generic_error_category _Generic_object;
		static _Iostream_error_category _Iostream_object;
		static _System_error_category _System_object;
	};

	struct _Facetptr<codecvt<unsigned short,char,int> >
	{
		static locale::facet const * const _Psave;
	};

	struct _Facetptr<collate<unsigned short> >
	{
		static locale::facet const * const _Psave;
	};

	struct _Facetptr<ctype<unsigned short> >
	{
		static locale::facet const * const _Psave;
	};

	struct _Func_base<pplx::task<void>,unsigned char,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		virtual ~_Func_base<pplx::task<void>,unsigned char,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_base<unsigned char,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		virtual ~_Func_base<unsigned char,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_base<unsigned char,bool,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		virtual ~_Func_base<unsigned char,bool,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_base<unsigned char,pplx::task<bool>,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		virtual ~_Func_base<unsigned char,pplx::task<bool>,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_base<unsigned char,pplx::task<int>,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		virtual ~_Func_base<unsigned char,pplx::task<int>,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_base<unsigned char,pplx::task<long>,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		virtual ~_Func_base<unsigned char,pplx::task<long>,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_base<unsigned char,pplx::task<unsigned __int64>,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		virtual ~_Func_base<unsigned char,pplx::task<unsigned __int64>,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_base<unsigned char,pplx::task<void>,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		virtual ~_Func_base<unsigned char,pplx::task<void>,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_base<unsigned char,unsigned char,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		virtual ~_Func_base<unsigned char,unsigned char,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_base<void,pplx::task<void>,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		virtual ~_Func_base<void,pplx::task<void>,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_class<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,unsigned __int64,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		~_Func_class<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,unsigned __int64,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_class<bool,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		~_Func_class<bool,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_class<bool,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		~_Func_class<bool,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_class<bool,bool,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		~_Func_class<bool,bool,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_class<bool,int,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		~_Func_class<bool,int,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_class<bool,long,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		~_Func_class<bool,long,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_class<bool,unsigned __int64,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		~_Func_class<bool,unsigned __int64,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_class<pplx::task<void>,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		~_Func_class<pplx::task<void>,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_class<pplx::task<void>,unsigned char,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		~_Func_class<pplx::task<void>,unsigned char,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_class<unsigned char,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		~_Func_class<unsigned char,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_class<unsigned char,bool,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		~_Func_class<unsigned char,bool,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_class<unsigned char,pplx::task<bool>,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		unsigned char operator()(pplx::task<bool>);
		~_Func_class<unsigned char,pplx::task<bool>,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_class<unsigned char,pplx::task<int>,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		~_Func_class<unsigned char,pplx::task<int>,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_class<unsigned char,pplx::task<long>,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		~_Func_class<unsigned char,pplx::task<long>,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_class<unsigned char,pplx::task<unsigned __int64>,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		unsigned char operator()(pplx::task<unsigned __int64>);
		~_Func_class<unsigned char,pplx::task<unsigned __int64>,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_class<unsigned char,pplx::task<void>,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		unsigned char operator()(pplx::task<void>);
		~_Func_class<unsigned char,pplx::task<void>,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_class<unsigned char,unsigned char,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		~_Func_class<unsigned char,unsigned char,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_class<void,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		~_Func_class<void,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_class<void,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		~_Func_class<void,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_class<void,bool,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		~_Func_class<void,bool,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_class<void,pplx::task<bool>,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		void operator()(pplx::task<bool>);
		~_Func_class<void,pplx::task<bool>,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_class<void,pplx::task<int>,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		~_Func_class<void,pplx::task<int>,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_class<void,pplx::task<long>,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		~_Func_class<void,pplx::task<long>,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_class<void,pplx::task<unsigned __int64>,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		void operator()(pplx::task<unsigned __int64>);
		~_Func_class<void,pplx::task<unsigned __int64>,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_class<void,pplx::task<void>,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		void operator()(pplx::task<void>);
		~_Func_class<void,pplx::task<void>,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_class<void,unsigned char,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		~_Func_class<void,unsigned char,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_class<void,void *,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		~_Func_class<void,void *,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_class<void,void *,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		~_Func_class<void,void *,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	struct _Func_class<web::json::value,unsigned __int64,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		~_Func_class<web::json::value,unsigned __int64,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>();
	};

	class _Func_impl<_Callable_fun<bool (*const)(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &),0>,allocator<_Func_class<bool,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil> >,bool,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		virtual void _Delete_this(bool);
		virtual void const * _Get();
	public:
		virtual _Func_base<bool,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil> * _Copy(void *);
		virtual _Func_base<bool,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil> * _Move(void *);
		virtual bool _Do_call(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		virtual type_info const & _Target_type();
	};

	class _Func_impl<_Callable_obj<<lambda_2168ee8ffed455914286439d169b3077>,0>,allocator<_Func_class<void,void *,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil> >,void,void *,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil>
	{
		virtual void _Delete_this(bool);
		virtual void const * _Get();
	public:
		virtual _Func_base<void,void *,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil> * _Copy(void *);
		virtual _Func_base<void,void *,_Nil,_Nil,_Nil,_Nil,_Nil,_Nil> * _Move(void *);
		virtual type_info const & _Target_type();
	};

	struct _Generic_error_category
	{
		virtual basic_string<char,char_traits<char>,allocator<char> > message(int);
		virtual char const * name();
	};

	struct _Iostream_error_category
	{
		virtual basic_string<char,char_traits<char>,allocator<char> > message(int);
		virtual char const * name();
	};

	struct _List_alloc<0,_List_base_types<LegacyUpdate,allocator<LegacyUpdate> > >
	{
		_List_node<LegacyUpdate,void *> * _Buynode0(_List_node<LegacyUpdate,void *> *,_List_node<LegacyUpdate,void *> *);
	};

	struct _List_alloc<0,_List_base_types<_LEGACY_UPDATE_INFO,allocator<_LEGACY_UPDATE_INFO> > >
	{
		_List_node<_LEGACY_UPDATE_INFO,void *> * _Buynode0(_List_node<_LEGACY_UPDATE_INFO,void *> *,_List_node<_LEGACY_UPDATE_INFO,void *> *);
	};

	struct _List_buy<LegacyUpdate,allocator<LegacyUpdate> >
	{
		_List_node<LegacyUpdate,void *> * _Buynode<LegacyUpdate const &>(_List_node<LegacyUpdate,void *> *,_List_node<LegacyUpdate,void *> *,LegacyUpdate const &);
	};

	struct _List_buy<_LEGACY_UPDATE_INFO,allocator<_LEGACY_UPDATE_INFO> >
	{
		_List_node<_LEGACY_UPDATE_INFO,void *> * _Buynode<_LEGACY_UPDATE_INFO const &>(_List_node<_LEGACY_UPDATE_INFO,void *> *,_List_node<_LEGACY_UPDATE_INFO,void *> *,_LEGACY_UPDATE_INFO const &);
	};

	class _Parser<unsigned short const *,unsigned short,regex_traits<unsigned short> >
	{
		_Prs_ret _ClassAtom();
		_Prs_ret _ClassEscape(bool);
		bool _Alternative();
		bool _CharacterClassEscape(bool);
		bool _CharacterEscape();
		bool _IdentityEscape();
		bool _Wrapped_disjunction();
		int _Do_digits(int,int);
		void _AtomEscape();
		void _CharacterClass();
		void _Disjunction();
		void _Do_capture_group();
		void _Do_ex_class(_Meta_type);
		void _Error(regex_constants::error_type);
		void _Quantifier();
		void _Trans();
	public:
		_Root_node * _Compile();
		~_Parser<unsigned short const *,unsigned short,regex_traits<unsigned short> >();
	};

	struct _Ptr_base<pplx::details::_Task_impl_base>
	{
		void _Reset(pplx::details::_Task_impl_base *,_Ref_count_base *);
	};

	struct _Ptr_base<unsigned char>
	{
		void _Reset0(unsigned char *,_Ref_count_base *);
	};

	struct _Ptr_base<web::http::http_pipeline_stage>
	{
		void _Reset(web::http::http_pipeline_stage *,_Ref_count_base *);
	};

	class _Ref_count<Concurrency::streams::details::basic_container_buffer<basic_string<char,char_traits<char>,allocator<char> > > >
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count<Concurrency::streams::details::basic_container_buffer<vector<unsigned char,allocator<unsigned char> > > >
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count<LegacyUpdateNode>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count<UpdateNode>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count<VariantNode>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count<pplx::details::_Task_impl<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count<pplx::details::_Task_impl<bool> >
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count<pplx::details::_Task_impl<int> >
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count<pplx::details::_Task_impl<long> >
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count<pplx::details::_Task_impl<unsigned __int64> >
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count<pplx::details::_Task_impl<unsigned char> >
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count<pplx::details::_Task_impl<web::json::value> >
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count<unsigned char>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count<web::http::http_pipeline>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	struct _Ref_count_base
	{
		virtual void * _Get_deleter(type_info const &);
		virtual ~_Ref_count_base();
		void _Decref();
	};

	class _Ref_count_obj<Concurrency::streams::details::basic_istream_helper<unsigned char> >
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<Concurrency::streams::details::basic_ostream_helper<unsigned char> >
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char> >
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<pplx::details::_ExceptionHolder>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<pplx::details::_Task_completion_event_impl<bool> >
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<pplx::details::_Task_completion_event_impl<int> >
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<pplx::details::_Task_completion_event_impl<long> >
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<pplx::details::_Task_completion_event_impl<unsigned __int64> >
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<pplx::details::_Task_completion_event_impl<unsigned char> >
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<pplx::details::_Task_completion_event_impl<web::http::http_response> >
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<pplx::details::_Task_impl<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	public:
		_Ref_count_obj<pplx::details::_Task_impl<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > ><pplx::details::_CancellationTokenState * &,pplx::scheduler_ptr &>(pplx::details::_CancellationTokenState * &,pplx::scheduler_ptr &);
	};

	class _Ref_count_obj<pplx::details::_Task_impl<bool> >
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	public:
		_Ref_count_obj<pplx::details::_Task_impl<bool> ><pplx::details::_CancellationTokenState * &,pplx::scheduler_ptr &>(pplx::details::_CancellationTokenState * &,pplx::scheduler_ptr &);
	};

	class _Ref_count_obj<pplx::details::_Task_impl<int> >
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	public:
		_Ref_count_obj<pplx::details::_Task_impl<int> ><pplx::details::_CancellationTokenState * &,pplx::scheduler_ptr &>(pplx::details::_CancellationTokenState * &,pplx::scheduler_ptr &);
	};

	class _Ref_count_obj<pplx::details::_Task_impl<long> >
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	public:
		_Ref_count_obj<pplx::details::_Task_impl<long> ><pplx::details::_CancellationTokenState * &,pplx::scheduler_ptr &>(pplx::details::_CancellationTokenState * &,pplx::scheduler_ptr &);
	};

	class _Ref_count_obj<pplx::details::_Task_impl<unsigned __int64> >
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	public:
		_Ref_count_obj<pplx::details::_Task_impl<unsigned __int64> ><pplx::details::_CancellationTokenState * &,pplx::scheduler_ptr &>(pplx::details::_CancellationTokenState * &,pplx::scheduler_ptr &);
	};

	class _Ref_count_obj<pplx::details::_Task_impl<unsigned char> >
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	public:
		_Ref_count_obj<pplx::details::_Task_impl<unsigned char> ><pplx::details::_CancellationTokenState * &,pplx::scheduler_ptr &>(pplx::details::_CancellationTokenState * &,pplx::scheduler_ptr &);
	};

	class _Ref_count_obj<pplx::details::_Task_impl<web::http::http_response> >
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	public:
		_Ref_count_obj<pplx::details::_Task_impl<web::http::http_response> ><pplx::details::_CancellationTokenState * &,pplx::scheduler_ptr &>(pplx::details::_CancellationTokenState * &,pplx::scheduler_ptr &);
	};

	class _Ref_count_obj<pplx::details::_Task_impl<web::json::value> >
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	public:
		_Ref_count_obj<pplx::details::_Task_impl<web::json::value> ><pplx::details::_CancellationTokenState * &,pplx::scheduler_ptr &>(pplx::details::_CancellationTokenState * &,pplx::scheduler_ptr &);
	};

	class _Ref_count_obj<pplx::details::windows_scheduler>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<web::http::client::details::http_network_handler>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<web::http::client::details::winhttp_client>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<web::http::details::_http_request>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<web::http::details::_http_response>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<web::http::oauth1::details::oauth1_handler>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<web::http::oauth2::details::oauth2_handler>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Regex_traits<unsigned short>
	{
		static _Cl_names<unsigned short> const * const _Names;
	public:
		collate<unsigned short> const * _Getcoll();
		ctype<unsigned short> const * _Getctype();
		short lookup_classname<unsigned short const *>(unsigned short const *,unsigned short const *,bool);
		unsigned short translate(unsigned short);
	};

	class _Rng_from_urng<unsigned int,mersenne_twister_engine<unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> >
	{
		unsigned int _Get_bits();
	};

	struct _System_error_category
	{
		virtual basic_string<char,char_traits<char>,allocator<char> > message(int);
		virtual char const * name();
		virtual error_condition default_error_condition(int);
	};

	class _Tree<_Tmap_traits<LegacyUpdate,shared_ptr<LegacyUpdateNode>,less<LegacyUpdate>,allocator<pair<LegacyUpdate const ,shared_ptr<LegacyUpdateNode> > >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<LegacyUpdate const ,shared_ptr<LegacyUpdateNode> > > > > _Insert_at<pair<LegacyUpdate const ,shared_ptr<LegacyUpdateNode> > &,_Tree_node<pair<LegacyUpdate const ,shared_ptr<LegacyUpdateNode> >,void *> *>(bool,_Tree_node<pair<LegacyUpdate const ,shared_ptr<LegacyUpdateNode> >,void *> *,pair<LegacyUpdate const ,shared_ptr<LegacyUpdateNode> > &,_Tree_node<pair<LegacyUpdate const ,shared_ptr<LegacyUpdateNode> >,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<LegacyUpdate const ,shared_ptr<LegacyUpdateNode> > > > >,bool> _Insert_nohint<pair<LegacyUpdate const ,shared_ptr<LegacyUpdateNode> > &,_Tree_node<pair<LegacyUpdate const ,shared_ptr<LegacyUpdateNode> >,void *> *>(bool,pair<LegacyUpdate const ,shared_ptr<LegacyUpdateNode> > &,_Tree_node<pair<LegacyUpdate const ,shared_ptr<LegacyUpdateNode> >,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<LegacyUpdate const ,shared_ptr<LegacyUpdateNode> >,void *> *);
		void _Erase(_Tree_node<pair<LegacyUpdate const ,shared_ptr<LegacyUpdateNode> >,void *> *);
	};

	class _Tree<_Tmap_traits<UpdateIdentity,shared_ptr<UpdateNode>,less<UpdateIdentity>,allocator<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > > > > _Insert_at<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > &,_Tree_node<pair<UpdateIdentity const ,shared_ptr<UpdateNode> >,void *> *>(bool,_Tree_node<pair<UpdateIdentity const ,shared_ptr<UpdateNode> >,void *> *,pair<UpdateIdentity const ,shared_ptr<UpdateNode> > &,_Tree_node<pair<UpdateIdentity const ,shared_ptr<UpdateNode> >,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > > > > _Insert_hint<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > &,_Tree_node<pair<UpdateIdentity const ,shared_ptr<UpdateNode> >,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > > > >,pair<UpdateIdentity const ,shared_ptr<UpdateNode> > &,_Tree_node<pair<UpdateIdentity const ,shared_ptr<UpdateNode> >,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > > > >,bool> _Insert_nohint<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > &,_Tree_node<pair<UpdateIdentity const ,shared_ptr<UpdateNode> >,void *> *>(bool,pair<UpdateIdentity const ,shared_ptr<UpdateNode> > &,_Tree_node<pair<UpdateIdentity const ,shared_ptr<UpdateNode> >,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<UpdateIdentity const ,shared_ptr<UpdateNode> >,void *> *);
		void _Erase(_Tree_node<pair<UpdateIdentity const ,shared_ptr<UpdateNode> >,void *> *);
	public:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > > > >);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > > > >,_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > > > >);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > > > > find(UpdateIdentity const &);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > > > > lower_bound(UpdateIdentity const &);
		unsigned __int64 erase(UpdateIdentity const &);
	};

	class _Tree<_Tmap_traits<_GUID,ATL::CComPtr<IUpdateCollection>,less<_GUID>,allocator<pair<_GUID const ,ATL::CComPtr<IUpdateCollection> > >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,ATL::CComPtr<IUpdateCollection> > > > > _Insert_at<pair<_GUID const ,ATL::CComPtr<IUpdateCollection> > &,_Tree_node<pair<_GUID const ,ATL::CComPtr<IUpdateCollection> >,void *> *>(bool,_Tree_node<pair<_GUID const ,ATL::CComPtr<IUpdateCollection> >,void *> *,pair<_GUID const ,ATL::CComPtr<IUpdateCollection> > &,_Tree_node<pair<_GUID const ,ATL::CComPtr<IUpdateCollection> >,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,ATL::CComPtr<IUpdateCollection> > > > > _Insert_hint<pair<_GUID const ,ATL::CComPtr<IUpdateCollection> > &,_Tree_node<pair<_GUID const ,ATL::CComPtr<IUpdateCollection> >,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,ATL::CComPtr<IUpdateCollection> > > > >,pair<_GUID const ,ATL::CComPtr<IUpdateCollection> > &,_Tree_node<pair<_GUID const ,ATL::CComPtr<IUpdateCollection> >,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,ATL::CComPtr<IUpdateCollection> > > > >,bool> _Insert_nohint<pair<_GUID const ,ATL::CComPtr<IUpdateCollection> > &,_Tree_node<pair<_GUID const ,ATL::CComPtr<IUpdateCollection> >,void *> *>(bool,pair<_GUID const ,ATL::CComPtr<IUpdateCollection> > &,_Tree_node<pair<_GUID const ,ATL::CComPtr<IUpdateCollection> >,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<_GUID const ,ATL::CComPtr<IUpdateCollection> >,void *> *);
		void _Erase(_Tree_node<pair<_GUID const ,ATL::CComPtr<IUpdateCollection> >,void *> *);
	public:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,ATL::CComPtr<IUpdateCollection> > > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,ATL::CComPtr<IUpdateCollection> > > > >);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,ATL::CComPtr<IUpdateCollection> > > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,ATL::CComPtr<IUpdateCollection> > > > >,_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,ATL::CComPtr<IUpdateCollection> > > > >);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,ATL::CComPtr<IUpdateCollection> > > > > find(_GUID const &);
		void clear();
	};

	class _Tree<_Tmap_traits<_GUID,ATL::CComPtr<IUsoSessionInternal>,less<_GUID>,allocator<pair<_GUID const ,ATL::CComPtr<IUsoSessionInternal> > >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,ATL::CComPtr<IUsoSessionInternal> > > > > _Insert_at<pair<_GUID const ,ATL::CComPtr<IUsoSessionInternal> > &,_Tree_node<pair<_GUID const ,ATL::CComPtr<IUsoSessionInternal> >,void *> *>(bool,_Tree_node<pair<_GUID const ,ATL::CComPtr<IUsoSessionInternal> >,void *> *,pair<_GUID const ,ATL::CComPtr<IUsoSessionInternal> > &,_Tree_node<pair<_GUID const ,ATL::CComPtr<IUsoSessionInternal> >,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,ATL::CComPtr<IUsoSessionInternal> > > > > _Insert_hint<pair<_GUID const ,ATL::CComPtr<IUsoSessionInternal> > &,_Tree_node<pair<_GUID const ,ATL::CComPtr<IUsoSessionInternal> >,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,ATL::CComPtr<IUsoSessionInternal> > > > >,pair<_GUID const ,ATL::CComPtr<IUsoSessionInternal> > &,_Tree_node<pair<_GUID const ,ATL::CComPtr<IUsoSessionInternal> >,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,ATL::CComPtr<IUsoSessionInternal> > > > >,bool> _Insert_nohint<pair<_GUID const ,ATL::CComPtr<IUsoSessionInternal> > &,_Tree_node<pair<_GUID const ,ATL::CComPtr<IUsoSessionInternal> >,void *> *>(bool,pair<_GUID const ,ATL::CComPtr<IUsoSessionInternal> > &,_Tree_node<pair<_GUID const ,ATL::CComPtr<IUsoSessionInternal> >,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<_GUID const ,ATL::CComPtr<IUsoSessionInternal> >,void *> *);
		void _Erase(_Tree_node<pair<_GUID const ,ATL::CComPtr<IUsoSessionInternal> >,void *> *);
	public:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,ATL::CComPtr<IUsoSessionInternal> > > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,ATL::CComPtr<IUsoSessionInternal> > > > >);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,ATL::CComPtr<IUsoSessionInternal> > > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,ATL::CComPtr<IUsoSessionInternal> > > > >,_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<_GUID const ,ATL::CComPtr<IUsoSessionInternal> > > > >);
		unsigned __int64 erase(_GUID const &);
	};

	class _Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_variant_t,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> > > > _Insert_at<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> *>(bool,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> *,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> > > >,bool> _Insert_nohint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> *>(bool,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> *);
		void _Erase(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> *);
	public:
		_Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_variant_t,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> >,0> >(less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > const &,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> > const &);
		void swap(_Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_variant_t,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> >,0> > &);
		~_Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_variant_t,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> >,0> >();
	};

	class _Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > _Insert_at<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *>(bool,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > _Insert_hint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >,bool> _Insert_nohint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *>(bool,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
		void _Erase(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
	public:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > lower_bound(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
	};

	class _Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::http::http_headers::_case_insensitive_cmp,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > _Insert_at<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *>(bool,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > _Insert_hint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> * _Copy_nodes<integral_constant<bool,0> >(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *,integral_constant<bool,0>);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >,bool> _Insert_nohint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *>(bool,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
		void _Erase(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
		void _Tidy();
	public:
		_Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::http::http_headers::_case_insensitive_cmp,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,0> > & operator=(_Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::http::http_headers::_case_insensitive_cmp,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,0> > const &);
		_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > find(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
	};

	class _Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,int,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > > > _Insert_at<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> *>(bool,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> *,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> *);
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> * _Copy_nodes<integral_constant<bool,0> >(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> *,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> *,integral_constant<bool,0>);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > > >,bool> _Insert_nohint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> *>(bool,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> *);
		void _Erase(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> *);
		void _Tidy();
	public:
		_Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,int,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> >,0> >(_Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,int,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> >,0> > const &,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > const &);
	};

	class _Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,shared_ptr<VariantNode>,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > > > > _Insert_at<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> >,void *> *>(bool,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> >,void *> *,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> >,void *> *);
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> >,void *> * _Copy_nodes<integral_constant<bool,0> >(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> >,void *> *,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> >,void *> *,integral_constant<bool,0>);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > > > >,bool> _Insert_nohint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> >,void *> *>(bool,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> >,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> >,void *> *);
		void _Erase(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> >,void *> *);
	public:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > > > >);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > > > >,_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > > > >);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > > > > find(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		unsigned __int64 erase(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		void clear();
	};

	class _Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,tagVARIANT,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,tagVARIANT> >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,tagVARIANT> > > > _Insert_at<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,tagVARIANT> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,tagVARIANT>,void *> *>(bool,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,tagVARIANT>,void *> *,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,tagVARIANT> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,tagVARIANT>,void *> *);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,tagVARIANT> > > > _Insert_hint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,tagVARIANT> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,tagVARIANT>,void *> *>(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,tagVARIANT> > > >,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,tagVARIANT> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,tagVARIANT>,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,tagVARIANT> > > >,bool> _Insert_nohint<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,tagVARIANT> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,tagVARIANT>,void *> *>(bool,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,tagVARIANT> &,_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,tagVARIANT>,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,tagVARIANT>,void *> *);
		void _Erase(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,tagVARIANT>,void *> *);
	public:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,tagVARIANT> > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,tagVARIANT> > > >);
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,tagVARIANT> > > > find(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		~_Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,tagVARIANT,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,tagVARIANT> >,0> >();
	};

	class _Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >,0> >
	{
	protected:
		void _Erase(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >,void *> *);
	public:
		~_Tree<_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >,0> >();
	};

	class _Tree<_Tmap_traits<int,shared_ptr<LegacyUpdateNode>,less<int>,allocator<pair<int const ,shared_ptr<LegacyUpdateNode> > >,0> >
	{
	protected:
		_Tree_iterator<_Tree_val<_Tree_simple_types<pair<int const ,shared_ptr<LegacyUpdateNode> > > > > _Insert_at<pair<int const ,shared_ptr<LegacyUpdateNode> > &,_Tree_node<pair<int const ,shared_ptr<LegacyUpdateNode> >,void *> *>(bool,_Tree_node<pair<int const ,shared_ptr<LegacyUpdateNode> >,void *> *,pair<int const ,shared_ptr<LegacyUpdateNode> > &,_Tree_node<pair<int const ,shared_ptr<LegacyUpdateNode> >,void *> *);
		pair<_Tree_iterator<_Tree_val<_Tree_simple_types<pair<int const ,shared_ptr<LegacyUpdateNode> > > > >,bool> _Insert_nohint<pair<int const ,shared_ptr<LegacyUpdateNode> > &,_Tree_node<pair<int const ,shared_ptr<LegacyUpdateNode> >,void *> *>(bool,pair<int const ,shared_ptr<LegacyUpdateNode> > &,_Tree_node<pair<int const ,shared_ptr<LegacyUpdateNode> >,void *> *);
		void _Destroy_if_not_nil(_Tree_node<pair<int const ,shared_ptr<LegacyUpdateNode> >,void *> *);
		void _Erase(_Tree_node<pair<int const ,shared_ptr<LegacyUpdateNode> >,void *> *);
	};

	class _Tree<_Tset_traits<shared_ptr<function<void (char const &)> >,less<shared_ptr<function<void (char const &)> > >,allocator<shared_ptr<function<void (char const &)> > >,0> >
	{
	protected:
		void _Erase(_Tree_node<shared_ptr<function<void (char const &)> >,void *> *);
	public:
		_Tree_const_iterator<_Tree_val<_Tree_simple_types<shared_ptr<function<void (char const &)> > > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<shared_ptr<function<void (char const &)> > > > >);
		_Tree_const_iterator<_Tree_val<_Tree_simple_types<shared_ptr<function<void (char const &)> > > > > erase(_Tree_const_iterator<_Tree_val<_Tree_simple_types<shared_ptr<function<void (char const &)> > > > >,_Tree_const_iterator<_Tree_val<_Tree_simple_types<shared_ptr<function<void (char const &)> > > > >);
		void clear();
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<LegacyUpdate const ,shared_ptr<LegacyUpdateNode> >,allocator<pair<LegacyUpdate const ,shared_ptr<LegacyUpdateNode> > > > >
	{
		_Tree_node<pair<LegacyUpdate const ,shared_ptr<LegacyUpdateNode> >,void *> * _Buyheadnode();
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<UpdateIdentity const ,shared_ptr<UpdateNode> >,allocator<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > > > >
	{
		_Tree_node<pair<UpdateIdentity const ,shared_ptr<UpdateNode> >,void *> * _Buyheadnode();
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<_GUID const ,ATL::CComPtr<IUpdateCollection> >,allocator<pair<_GUID const ,ATL::CComPtr<IUpdateCollection> > > > >
	{
		_Tree_node<pair<_GUID const ,ATL::CComPtr<IUpdateCollection> >,void *> * _Buyheadnode();
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<_GUID const ,ATL::CComPtr<IUsoSessionInternal> >,allocator<pair<_GUID const ,ATL::CComPtr<IUsoSessionInternal> > > > >
	{
		_Tree_node<pair<_GUID const ,ATL::CComPtr<IUsoSessionInternal> >,void *> * _Buyheadnode();
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> > > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> * _Buyheadnode();
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> * _Buyheadnode();
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> * _Buyheadnode();
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > > > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> >,void *> * _Buyheadnode();
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,tagVARIANT>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,tagVARIANT> > > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,tagVARIANT>,void *> * _Buyheadnode();
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >,void *> * _Buyheadnode();
	};

	struct _Tree_alloc<0,_Tree_base_types<pair<int const ,shared_ptr<LegacyUpdateNode> >,allocator<pair<int const ,shared_ptr<LegacyUpdateNode> > > > >
	{
		_Tree_node<pair<int const ,shared_ptr<LegacyUpdateNode> >,void *> * _Buyheadnode();
	};

	struct _Tree_alloc<0,_Tree_base_types<shared_ptr<function<void (char const &)> >,allocator<shared_ptr<function<void (char const &)> > > > >
	{
		_Tree_node<shared_ptr<function<void (char const &)> >,void *> * _Buyheadnode();
		_Wrap_alloc<allocator<_Tree_node<shared_ptr<function<void (char const &)> >,void *> > > _Getal();
	};

	struct _Tree_buy<pair<LegacyUpdate const ,shared_ptr<LegacyUpdateNode> >,allocator<pair<LegacyUpdate const ,shared_ptr<LegacyUpdateNode> > > >
	{
		_Tree_node<pair<LegacyUpdate const ,shared_ptr<LegacyUpdateNode> >,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<LegacyUpdate const ,shared_ptr<LegacyUpdateNode> >,void *> *);
	};

	struct _Tree_buy<pair<UpdateIdentity const ,shared_ptr<UpdateNode> >,allocator<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > > >
	{
		_Tree_node<pair<UpdateIdentity const ,shared_ptr<UpdateNode> >,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<UpdateIdentity const ,shared_ptr<UpdateNode> >,void *> *);
	};

	struct _Tree_buy<pair<_GUID const ,ATL::CComPtr<IUpdateCollection> >,allocator<pair<_GUID const ,ATL::CComPtr<IUpdateCollection> > > >
	{
		_Tree_node<pair<_GUID const ,ATL::CComPtr<IUpdateCollection> >,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<_GUID const ,ATL::CComPtr<IUpdateCollection> >,void *> *);
	};

	struct _Tree_buy<pair<_GUID const ,ATL::CComPtr<IUsoSessionInternal> >,allocator<pair<_GUID const ,ATL::CComPtr<IUsoSessionInternal> > > >
	{
		_Tree_node<pair<_GUID const ,ATL::CComPtr<IUsoSessionInternal> >,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<_GUID const ,ATL::CComPtr<IUsoSessionInternal> >,void *> *);
	};

	struct _Tree_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> *);
	};

	struct _Tree_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> * _Buynode0();
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> * _Buynode<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &>(pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > &);
		void _Freenode0(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *);
	};

	struct _Tree_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> * _Buynode0();
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> * _Buynode<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> &>(pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> &);
		void _Freenode0(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> *);
	};

	struct _Tree_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> >,void *> * _Buynode0();
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> >,void *> * _Buynode<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > &>(pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > &);
		void _Freenode0(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> >,void *> *);
	};

	struct _Tree_buy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,tagVARIANT>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,tagVARIANT> > >
	{
		_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,tagVARIANT>,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,tagVARIANT>,void *> *);
	};

	struct _Tree_buy<pair<int const ,shared_ptr<LegacyUpdateNode> >,allocator<pair<int const ,shared_ptr<LegacyUpdateNode> > > >
	{
		_Tree_node<pair<int const ,shared_ptr<LegacyUpdateNode> >,void *> * _Buynode0();
		void _Freenode0(_Tree_node<pair<int const ,shared_ptr<LegacyUpdateNode> >,void *> *);
	};

	struct _Tree_comp<0,_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,int,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> >,0> >
	{
		~_Tree_comp<0,_Tmap_traits<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,int,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> >,0> >();
	};

	struct _Vb_iterator<_Wrap_alloc<allocator<unsigned int> > >
	{
		_Vb_iterator<_Wrap_alloc<allocator<unsigned int> > > operator+(__int64);
	};

	struct _Vb_val<allocator<bool> >
	{
		~_Vb_val<allocator<bool> >();
	};

	struct _Vector_alloc<0,_Vec_base_types<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >
	{
		_Wrap_alloc<allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > _Getal();
	};

	struct _Vector_alloc<0,_Vec_base_types<unsigned char,allocator<unsigned char> > >
	{
		_Wrap_alloc<allocator<unsigned char> > _Getal();
	};

	struct _Vector_alloc<0,_Vec_base_types<unsigned short,allocator<unsigned short> > >
	{
		_Wrap_alloc<allocator<unsigned short> > _Getal();
	};

	struct _Wrap_alloc<allocator<ATL::CComPtr<IUsoUpdate> > >
	{
		void deallocate(ATL::CComPtr<IUsoUpdate> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<ATL::CComPtr<IUsoUpdateHistoryEntry> > >
	{
		void deallocate(ATL::CComPtr<IUsoUpdateHistoryEntry> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_GUID> >
	{
		void deallocate(_GUID *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_List_node<LegacyUpdate,void *> > >
	{
		void deallocate(_List_node<LegacyUpdate,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_List_node<_LEGACY_UPDATE_INFO,void *> > >
	{
		void deallocate(_List_node<_LEGACY_UPDATE_INFO,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<LegacyUpdate const ,shared_ptr<LegacyUpdateNode> >,void *> > >
	{
		void deallocate(_Tree_node<pair<LegacyUpdate const ,shared_ptr<LegacyUpdateNode> >,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<UpdateIdentity const ,shared_ptr<UpdateNode> >,void *> > >
	{
		void deallocate(_Tree_node<pair<UpdateIdentity const ,shared_ptr<UpdateNode> >,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<_GUID const ,ATL::CComPtr<IUpdateCollection> >,void *> > >
	{
		void deallocate(_Tree_node<pair<_GUID const ,ATL::CComPtr<IUpdateCollection> >,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<_GUID const ,ATL::CComPtr<IUsoSessionInternal> >,void *> > >
	{
		void deallocate(_Tree_node<pair<_GUID const ,ATL::CComPtr<IUsoSessionInternal> >,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> > >
	{
		void deallocate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t>,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> > >
	{
		void deallocate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> > >
	{
		void deallocate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int>,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> >,void *> > >
	{
		void deallocate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> >,void *> *,unsigned __int64);
		void destroy<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > >(pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > *);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,tagVARIANT>,void *> > >
	{
		void deallocate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,tagVARIANT>,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >,void *> > >
	{
		void deallocate(_Tree_node<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<pair<int const ,shared_ptr<LegacyUpdateNode> >,void *> > >
	{
		void deallocate(_Tree_node<pair<int const ,shared_ptr<LegacyUpdateNode> >,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<_Tree_node<shared_ptr<function<void (char const &)> >,void *> > >
	{
		void deallocate(_Tree_node<shared_ptr<function<void (char const &)> >,void *> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
		void deallocate(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::json::value> > >
	{
		void deallocate(pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::json::value> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<shared_ptr<pplx::details::_Task_impl<bool> > > >
	{
		void deallocate(shared_ptr<pplx::details::_Task_impl<bool> > *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<shared_ptr<pplx::details::_Task_impl<int> > > >
	{
		void deallocate(shared_ptr<pplx::details::_Task_impl<int> > *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<shared_ptr<pplx::details::_Task_impl<long> > > >
	{
		void deallocate(shared_ptr<pplx::details::_Task_impl<long> > *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<shared_ptr<pplx::details::_Task_impl<unsigned __int64> > > >
	{
		void deallocate(shared_ptr<pplx::details::_Task_impl<unsigned __int64> > *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<shared_ptr<pplx::details::_Task_impl<unsigned char> > > >
	{
		void deallocate(shared_ptr<pplx::details::_Task_impl<unsigned char> > *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<shared_ptr<pplx::details::_Task_impl<web::http::http_response> > > >
	{
		void deallocate(shared_ptr<pplx::details::_Task_impl<web::http::http_response> > *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<shared_ptr<web::http::http_pipeline_stage> > >
	{
		void deallocate(shared_ptr<web::http::http_pipeline_stage> *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<unsigned char> >
	{
		void deallocate(unsigned char *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<unsigned int> >
	{
		void deallocate(unsigned int *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<unsigned short const *> >
	{
		void deallocate(unsigned short const * *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<unsigned short> >
	{
		void deallocate(unsigned short *,unsigned __int64);
	};

	struct _Wrap_alloc<allocator<web::json::value> >
	{
		void deallocate(web::json::value *,unsigned __int64);
	};

	struct bad_alloc
	{
		bad_alloc();
		bad_alloc(bad_alloc const &);
		virtual ~bad_alloc();
	};

	struct bad_weak_ptr
	{
		bad_weak_ptr(bad_weak_ptr const &);
		bad_weak_ptr(char const *);
		virtual char const * what();
		virtual ~bad_weak_ptr();
	};

	class basic_filebuf<unsigned short,char_traits<unsigned short> >
	{
	protected:
		bool _Endwrite();
		virtual basic_streambuf<unsigned short,char_traits<unsigned short> > * setbuf(unsigned short *,__int64);
		virtual fpos<int> seekoff(__int64,int,int);
		virtual fpos<int> seekpos(fpos<int>,int);
		virtual int sync();
		virtual unsigned short overflow(unsigned short);
		virtual unsigned short pbackfail(unsigned short);
		virtual unsigned short uflow();
		virtual unsigned short underflow();
		virtual void imbue(locale const &);
	public:
		virtual ~basic_filebuf<unsigned short,char_traits<unsigned short> >();
	};

	struct basic_ios<char,char_traits<char> >
	{
		virtual void _Add_vtordisp1();
	};

	struct basic_ios<unsigned short,char_traits<unsigned short> >
	{
		virtual void _Add_vtordisp1();
		virtual void _Add_vtordisp2();
	};

	struct basic_istringstream<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >
	{
		basic_istringstream<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,int);
	};

	namespace basic_ostream<char,char_traits<char> >
	{
		struct _Sentry_base
		{
			~_Sentry_base();
		};

		struct sentry
		{
			sentry(basic_ostream<char,char_traits<char> > &);
			~sentry();
		};

	};

	struct basic_ostream<unsigned short,char_traits<unsigned short> >
	{
		struct _Sentry_base
		{
			~_Sentry_base();
		};

		struct sentry
		{
			sentry(basic_ostream<unsigned short,char_traits<unsigned short> > &);
			~sentry();
		};

		basic_ostream<unsigned short,char_traits<unsigned short> > & operator<<(unsigned short);
	};

	struct basic_ostringstream<char,char_traits<char>,allocator<char> >
	{
		basic_string<char,char_traits<char>,allocator<char> > str();
	};

	struct basic_ostringstream<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >
	{
		basic_ostringstream<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(int);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > str();
	};

	struct basic_regex<unsigned short,regex_traits<unsigned short> >
	{
		~basic_regex<unsigned short,regex_traits<unsigned short> >();
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

	class basic_streambuf<unsigned short,char_traits<unsigned short> >
	{
	protected:
		virtual __int64 showmanyc();
		virtual __int64 xsgetn(unsigned short *,__int64);
		virtual __int64 xsputn(unsigned short const *,__int64);
		virtual basic_streambuf<unsigned short,char_traits<unsigned short> > * setbuf(unsigned short *,__int64);
		virtual int sync();
		virtual unsigned short uflow();
		virtual void imbue(locale const &);
	public:
		virtual void _Lock();
		virtual void _Unlock();
	};

	struct basic_string<char,char_traits<char>,allocator<char> >
	{
		basic_string<char,char_traits<char>,allocator<char> > & append(basic_string<char,char_traits<char>,allocator<char> > const &,unsigned __int64,unsigned __int64);
		basic_string<char,char_traits<char>,allocator<char> > & append(char const *,unsigned __int64);
		basic_string<char,char_traits<char>,allocator<char> > & append(unsigned __int64,char);
		basic_string<char,char_traits<char>,allocator<char> > & assign(basic_string<char,char_traits<char>,allocator<char> > const &,unsigned __int64,unsigned __int64);
		basic_string<char,char_traits<char>,allocator<char> > & assign(char const *,unsigned __int64);
		basic_string<char,char_traits<char>,allocator<char> > & erase(unsigned __int64,unsigned __int64);
		basic_string<char,char_traits<char>,allocator<char> > & insert(unsigned __int64,basic_string<char,char_traits<char>,allocator<char> > const &,unsigned __int64,unsigned __int64);
		basic_string<char,char_traits<char>,allocator<char> >();
		basic_string<char,char_traits<char>,allocator<char> >(char const *);
		bool _Grow(unsigned __int64,bool);
		unsigned __int64 find(char const *,unsigned __int64);
		void _Copy(unsigned __int64,unsigned __int64);
		void _Tidy(bool,unsigned __int64);
		void _Xlen();
		void _Xran();
		void push_back(char);
		~basic_string<char,char_traits<char>,allocator<char> >();
	};

	struct basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >
	{
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & append(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,unsigned __int64,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & append(unsigned __int64,unsigned short);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & append(unsigned short const *,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & assign(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,unsigned __int64,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & assign(unsigned short const *,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & assign(unsigned short const *,unsigned short const *);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & erase(unsigned __int64,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & insert(unsigned __int64,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,unsigned __int64,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & insert(unsigned __int64,unsigned __int64,unsigned short);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & insert(unsigned __int64,unsigned short const *);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & operator=(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & replace(unsigned __int64,unsigned __int64,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &,unsigned __int64,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & replace(unsigned __int64,unsigned __int64,unsigned short const *,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > substr(unsigned __int64,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >();
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(unsigned short const *);
		bool _Grow(unsigned __int64,bool);
		int compare(unsigned __int64,unsigned __int64,unsigned short const *,unsigned __int64);
		unsigned __int64 find(unsigned short const *,unsigned __int64,unsigned __int64);
		unsigned __int64 find_first_of(unsigned short const *,unsigned __int64);
		unsigned __int64 find_first_of(unsigned short const *,unsigned __int64,unsigned __int64);
		unsigned short const * c_str();
		void _Construct<_String_iterator<_String_val<_Simple_types<unsigned short> > > >(_String_iterator<_String_val<_Simple_types<unsigned short> > >,_String_iterator<_String_val<_Simple_types<unsigned short> > >,forward_iterator_tag);
		void _Copy(unsigned __int64,unsigned __int64);
		void _Swap_bx(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > &);
		void _Tidy(bool,unsigned __int64);
		void _Xlen();
		void _Xran();
		~basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >();
	};

	class basic_stringbuf<char,char_traits<char>,allocator<char> >
	{
	protected:
		virtual fpos<int> seekoff(__int64,int,int);
		virtual fpos<int> seekpos(fpos<int>,int);
		virtual int overflow(int);
		virtual int pbackfail(int);
		virtual int underflow();
	public:
		virtual ~basic_stringbuf<char,char_traits<char>,allocator<char> >();
	};

	class basic_stringbuf<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >
	{
	protected:
		virtual fpos<int> seekoff(__int64,int,int);
		virtual fpos<int> seekpos(fpos<int>,int);
		virtual unsigned short overflow(unsigned short);
		virtual unsigned short pbackfail(unsigned short);
		virtual unsigned short underflow();
		void _Init(unsigned short const *,unsigned __int64,int);
	public:
		virtual ~basic_stringbuf<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >();
	};

	class collate<unsigned short>
	{
	protected:
		virtual basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > do_transform(unsigned short const *,unsigned short const *);
		virtual int do_compare(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *);
		virtual long do_hash(unsigned short const *,unsigned short const *);
	public:
		static unsigned __int64 _Getcat(locale::facet const * *,locale const *);
	};

	class deque<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_request,allocator<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_request> >
	{
	protected:
		void _Growmap(unsigned __int64);
		void _Xlen();
	public:
		~deque<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_request,allocator<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_request> >();
	};

	class deque<shared_ptr<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block>,allocator<shared_ptr<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block> > >
	{
	protected:
		void _Growmap(unsigned __int64);
		void _Tidy();
		void _Xlen();
	public:
		shared_ptr<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block> & back();
		~deque<shared_ptr<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block>,allocator<shared_ptr<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block> > >();
	};

	class deque<shared_ptr<web::http::client::details::request_context>,allocator<shared_ptr<web::http::client::details::request_context> > >
	{
	protected:
		void _Growmap(unsigned __int64);
		void _Xlen();
	public:
		~deque<shared_ptr<web::http::client::details::request_context>,allocator<shared_ptr<web::http::client::details::request_context> > >();
	};

	class enable_shared_from_this<Concurrency::streams::details::streambuf_state_manager<char> >
	{
	protected:
		~enable_shared_from_this<Concurrency::streams::details::streambuf_state_manager<char> >();
	public:
		shared_ptr<Concurrency::streams::details::streambuf_state_manager<char> > shared_from_this();
	};

	class enable_shared_from_this<Concurrency::streams::details::streambuf_state_manager<unsigned char> >
	{
	protected:
		~enable_shared_from_this<Concurrency::streams::details::streambuf_state_manager<unsigned char> >();
	public:
		shared_ptr<Concurrency::streams::details::streambuf_state_manager<unsigned char> > shared_from_this();
	};

	class enable_shared_from_this<web::http::details::_http_request>
	{
	protected:
		~enable_shared_from_this<web::http::details::_http_request>();
	};

	struct error_category
	{
		virtual bool equivalent(error_code const &,int);
		virtual bool equivalent(int,error_condition const &);
		virtual error_condition default_error_condition(int);
	};

	struct error_code
	{
		basic_string<char,char_traits<char>,allocator<char> > message();
	};

	struct exception_ptr
	{
		static exception_ptr _Copy_exception(void *,void const *);
		~exception_ptr();
	};

	struct function<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > (unsigned __int64)>
	{
		~function<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > (unsigned __int64)>();
	};

	struct function<bool ()>
	{
		function<bool ()> & operator=(function<bool ()> &);
		~function<bool ()>();
	};

	struct function<bool (basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &)>
	{
		~function<bool (basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &)>();
	};

	struct function<bool (bool)>
	{
		~function<bool (bool)>();
	};

	struct function<bool (int)>
	{
		~function<bool (int)>();
	};

	struct function<bool (long)>
	{
		~function<bool (long)>();
	};

	struct function<bool (unsigned __int64)>
	{
		~function<bool (unsigned __int64)>();
	};

	struct function<pplx::task<void> ()>
	{
		~function<pplx::task<void> ()>();
	};

	struct function<pplx::task<void> (unsigned char)>
	{
		~function<pplx::task<void> (unsigned char)>();
	};

	struct function<unsigned char ()>
	{
		~function<unsigned char ()>();
	};

	struct function<unsigned char (bool)>
	{
		~function<unsigned char (bool)>();
	};

	struct function<unsigned char (pplx::task<bool>)>
	{
		~function<unsigned char (pplx::task<bool>)>();
	};

	struct function<unsigned char (pplx::task<int>)>
	{
		~function<unsigned char (pplx::task<int>)>();
	};

	struct function<unsigned char (pplx::task<long>)>
	{
		~function<unsigned char (pplx::task<long>)>();
	};

	struct function<unsigned char (pplx::task<unsigned __int64>)>
	{
		~function<unsigned char (pplx::task<unsigned __int64>)>();
	};

	struct function<unsigned char (pplx::task<void>)>
	{
		~function<unsigned char (pplx::task<void>)>();
	};

	struct function<unsigned char (unsigned char)>
	{
		~function<unsigned char (unsigned char)>();
	};

	struct function<void ()>
	{
		~function<void ()>();
	};

	struct function<void (bool)>
	{
		~function<void (bool)>();
	};

	struct function<void (pplx::task<bool>)>
	{
		~function<void (pplx::task<bool>)>();
	};

	struct function<void (pplx::task<int>)>
	{
		~function<void (pplx::task<int>)>();
	};

	struct function<void (pplx::task<long>)>
	{
		~function<void (pplx::task<long>)>();
	};

	struct function<void (pplx::task<unsigned __int64>)>
	{
		~function<void (pplx::task<unsigned __int64>)>();
	};

	struct function<void (pplx::task<void>)>
	{
		~function<void (pplx::task<void>)>();
	};

	struct function<void (unsigned char)>
	{
		~function<void (unsigned char)>();
	};

	struct function<web::json::value (unsigned __int64)>
	{
		~function<web::json::value (unsigned __int64)>();
	};

	struct invalid_argument
	{
		invalid_argument(char const *);
		invalid_argument(invalid_argument const &);
		virtual ~invalid_argument();
	};

	struct list<LegacyUpdate,allocator<LegacyUpdate> >
	{
		~list<LegacyUpdate,allocator<LegacyUpdate> >();
	};

	struct list<_LEGACY_UPDATE_INFO,allocator<_LEGACY_UPDATE_INFO> >
	{
		~list<_LEGACY_UPDATE_INFO,allocator<_LEGACY_UPDATE_INFO> >();
	};

	struct locale
	{
		struct facet
		{
			virtual _Facet_base * _Decref();
			virtual void _Incref();
		};

		basic_string<char,char_traits<char>,allocator<char> > name();
		~locale();
	};

	struct logic_error
	{
		logic_error(char const *);
		logic_error(logic_error const &);
		virtual ~logic_error();
	};

	struct map<UpdateIdentity,shared_ptr<UpdateNode>,less<UpdateIdentity>,allocator<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > > >
	{
		shared_ptr<UpdateNode> & operator[](UpdateIdentity const &);
		~map<UpdateIdentity,shared_ptr<UpdateNode>,less<UpdateIdentity>,allocator<pair<UpdateIdentity const ,shared_ptr<UpdateNode> > > >();
	};

	struct map<_GUID,ATL::CComPtr<IUpdateCollection>,less<_GUID>,allocator<pair<_GUID const ,ATL::CComPtr<IUpdateCollection> > > >
	{
		ATL::CComPtr<IUpdateCollection> & operator[](_GUID const &);
		~map<_GUID,ATL::CComPtr<IUpdateCollection>,less<_GUID>,allocator<pair<_GUID const ,ATL::CComPtr<IUpdateCollection> > > >();
	};

	struct map<_GUID,ATL::CComPtr<IUsoSessionInternal>,less<_GUID>,allocator<pair<_GUID const ,ATL::CComPtr<IUsoSessionInternal> > > >
	{
		ATL::CComPtr<IUsoSessionInternal> & operator[](_GUID const &);
		~map<_GUID,ATL::CComPtr<IUsoSessionInternal>,less<_GUID>,allocator<pair<_GUID const ,ATL::CComPtr<IUsoSessionInternal> > > >();
	};

	struct map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_variant_t,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> > >
	{
		~map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_variant_t,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,_variant_t> > >();
	};

	struct map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >
	{
		~map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >();
	};

	struct map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::http::http_headers::_case_insensitive_cmp,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >
	{
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & operator[](basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::http::http_headers::_case_insensitive_cmp,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >();
		~map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::http::http_headers::_case_insensitive_cmp,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > >();
	};

	struct map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,int,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > >
	{
		~map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,int,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,int> > >();
	};

	struct map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,shared_ptr<VariantNode>,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > > >
	{
		map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,shared_ptr<VariantNode>,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > > >();
		~map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,shared_ptr<VariantNode>,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,shared_ptr<VariantNode> > > >();
	};

	struct map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,tagVARIANT,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,tagVARIANT> > >
	{
		tagVARIANT & operator[](basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &);
		~map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,tagVARIANT,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,tagVARIANT> > >();
	};

	struct map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > >
	{
		~map<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >,less<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const ,vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > > > >();
	};

	struct map<int,shared_ptr<LegacyUpdateNode>,less<int>,allocator<pair<int const ,shared_ptr<LegacyUpdateNode> > > >
	{
		~map<int,shared_ptr<LegacyUpdateNode>,less<int>,allocator<pair<int const ,shared_ptr<LegacyUpdateNode> > > >();
	};

	struct num_put<char,back_insert_iterator<basic_string<char,char_traits<char>,allocator<char> > > >
	{
		static locale::id id;
	};

	struct num_put<unsigned short,back_insert_iterator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
		static locale::id id;
	};

	struct pair<LegacyUpdate,shared_ptr<LegacyUpdateNode> >
	{
		~pair<LegacyUpdate,shared_ptr<LegacyUpdateNode> >();
	};

	struct pair<UpdateIdentity,shared_ptr<UpdateNode> >
	{
		~pair<UpdateIdentity,shared_ptr<UpdateNode> >();
	};

	struct pair<_GUID,ATL::CComPtr<IUpdateCollection> >
	{
		~pair<_GUID,ATL::CComPtr<IUpdateCollection> >();
	};

	struct pair<_GUID,ATL::CComPtr<IUsoSessionInternal> >
	{
		~pair<_GUID,ATL::CComPtr<IUsoSessionInternal> >();
	};

	struct pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_variant_t>
	{
		~pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,_variant_t>();
	};

	struct pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >
	{
		~pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >();
	};

	struct pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,int>
	{
		~pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,int>();
	};

	struct pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,shared_ptr<VariantNode> >
	{
		~pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,shared_ptr<VariantNode> >();
	};

	struct pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,tagVARIANT>
	{
		~pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,tagVARIANT>();
	};

	struct pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::json::value>
	{
		~pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::json::value>();
	};

	struct pair<int,shared_ptr<LegacyUpdateNode> >
	{
		~pair<int,shared_ptr<LegacyUpdateNode> >();
	};

	struct queue<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_request,deque<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_request,allocator<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_request> > >
	{
		~queue<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_request,deque<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_request,allocator<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_request> > >();
	};

	struct range_error
	{
		range_error(char const *);
		range_error(range_error const &);
		virtual ~range_error();
	};

	struct regex_traits<unsigned short>
	{
		~regex_traits<unsigned short>();
	};

	struct runtime_error
	{
		runtime_error(char const *);
		runtime_error(runtime_error const &);
		virtual ~runtime_error();
	};

	class shared_ptr<Concurrency::streams::details::basic_container_buffer<basic_string<char,char_traits<char>,allocator<char> > > >
	{
		void _Resetp<Concurrency::streams::details::basic_container_buffer<basic_string<char,char_traits<char>,allocator<char> > > >(Concurrency::streams::details::basic_container_buffer<basic_string<char,char_traits<char>,allocator<char> > > *);
	};

	class shared_ptr<Concurrency::streams::details::basic_container_buffer<vector<unsigned char,allocator<unsigned char> > > >
	{
		void _Resetp<Concurrency::streams::details::basic_container_buffer<vector<unsigned char,allocator<unsigned char> > > >(Concurrency::streams::details::basic_container_buffer<vector<unsigned char,allocator<unsigned char> > > *);
	};

	struct shared_ptr<Concurrency::streams::details::basic_istream_helper<unsigned char> >
	{
		shared_ptr<Concurrency::streams::details::basic_istream_helper<unsigned char> >(shared_ptr<Concurrency::streams::details::basic_istream_helper<unsigned char> > const &);
		~shared_ptr<Concurrency::streams::details::basic_istream_helper<unsigned char> >();
	};

	struct shared_ptr<Concurrency::streams::details::basic_ostream_helper<unsigned char> >
	{
		shared_ptr<Concurrency::streams::details::basic_ostream_helper<unsigned char> >(shared_ptr<Concurrency::streams::details::basic_ostream_helper<unsigned char> > const &);
		~shared_ptr<Concurrency::streams::details::basic_ostream_helper<unsigned char> >();
	};

	struct shared_ptr<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char> >
	{
		~shared_ptr<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char> >();
	};

	class shared_ptr<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block>
	{
		void _Resetp<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block>(Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block *);
	public:
		shared_ptr<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block>(shared_ptr<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block> const &);
		void _Resetp0<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block>(Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block *,_Ref_count_base *);
		~shared_ptr<Concurrency::streams::details::basic_producer_consumer_buffer<unsigned char>::_block>();
	};

	struct shared_ptr<Concurrency::streams::details::basic_streambuf<char> >
	{
		shared_ptr<Concurrency::streams::details::basic_streambuf<char> >(shared_ptr<Concurrency::streams::details::basic_streambuf<char> > const &);
		~shared_ptr<Concurrency::streams::details::basic_streambuf<char> >();
	};

	struct shared_ptr<Concurrency::streams::details::basic_streambuf<unsigned char> >
	{
		shared_ptr<Concurrency::streams::details::basic_streambuf<unsigned char> >(shared_ptr<Concurrency::streams::details::basic_streambuf<unsigned char> > const &);
		~shared_ptr<Concurrency::streams::details::basic_streambuf<unsigned char> >();
	};

	struct shared_ptr<Concurrency::streams::details::streambuf_state_manager<char> >
	{
		shared_ptr<Concurrency::streams::details::streambuf_state_manager<char> >(shared_ptr<Concurrency::streams::details::streambuf_state_manager<char> > const &);
		~shared_ptr<Concurrency::streams::details::streambuf_state_manager<char> >();
	};

	struct shared_ptr<Concurrency::streams::details::streambuf_state_manager<unsigned char> >
	{
		shared_ptr<Concurrency::streams::details::streambuf_state_manager<unsigned char> >(shared_ptr<Concurrency::streams::details::streambuf_state_manager<unsigned char> > const &);
		~shared_ptr<Concurrency::streams::details::streambuf_state_manager<unsigned char> >();
	};

	class shared_ptr<LegacyUpdateNode>
	{
		void _Resetp<LegacyUpdateNode>(LegacyUpdateNode *);
	public:
		shared_ptr<LegacyUpdateNode>(shared_ptr<LegacyUpdateNode> const &);
		~shared_ptr<LegacyUpdateNode>();
	};

	class shared_ptr<UpdateNode>
	{
		void _Resetp<UpdateNode>(UpdateNode *);
	public:
		shared_ptr<UpdateNode>(shared_ptr<UpdateNode> const &);
		~shared_ptr<UpdateNode>();
	};

	class shared_ptr<VariantNode>
	{
		void _Resetp<VariantNode>(VariantNode *);
	public:
		shared_ptr<VariantNode>(shared_ptr<VariantNode> const &);
		~shared_ptr<VariantNode>();
	};

	struct shared_ptr<pplx::details::_ExceptionHolder>
	{
		shared_ptr<pplx::details::_ExceptionHolder> & operator=(shared_ptr<pplx::details::_ExceptionHolder> const &);
		shared_ptr<pplx::details::_ExceptionHolder>(shared_ptr<pplx::details::_ExceptionHolder> const &);
		~shared_ptr<pplx::details::_ExceptionHolder>();
	};

	struct shared_ptr<pplx::details::_Task_completion_event_impl<bool> >
	{
		~shared_ptr<pplx::details::_Task_completion_event_impl<bool> >();
	};

	struct shared_ptr<pplx::details::_Task_completion_event_impl<int> >
	{
		~shared_ptr<pplx::details::_Task_completion_event_impl<int> >();
	};

	struct shared_ptr<pplx::details::_Task_completion_event_impl<long> >
	{
		~shared_ptr<pplx::details::_Task_completion_event_impl<long> >();
	};

	struct shared_ptr<pplx::details::_Task_completion_event_impl<unsigned __int64> >
	{
		~shared_ptr<pplx::details::_Task_completion_event_impl<unsigned __int64> >();
	};

	struct shared_ptr<pplx::details::_Task_completion_event_impl<unsigned char> >
	{
		~shared_ptr<pplx::details::_Task_completion_event_impl<unsigned char> >();
	};

	struct shared_ptr<pplx::details::_Task_completion_event_impl<web::http::http_response> >
	{
		~shared_ptr<pplx::details::_Task_completion_event_impl<web::http::http_response> >();
	};

	class shared_ptr<pplx::details::_Task_impl<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
		void _Resetp<pplx::details::_Task_impl<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >(pplx::details::_Task_impl<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > *);
	public:
		shared_ptr<pplx::details::_Task_impl<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >(shared_ptr<pplx::details::_Task_impl<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > > const &);
		~shared_ptr<pplx::details::_Task_impl<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >();
	};

	class shared_ptr<pplx::details::_Task_impl<bool> >
	{
		void _Resetp<pplx::details::_Task_impl<bool> >(pplx::details::_Task_impl<bool> *);
	public:
		shared_ptr<pplx::details::_Task_impl<bool> >(shared_ptr<pplx::details::_Task_impl<bool> > const &);
		~shared_ptr<pplx::details::_Task_impl<bool> >();
	};

	class shared_ptr<pplx::details::_Task_impl<int> >
	{
		void _Resetp<pplx::details::_Task_impl<int> >(pplx::details::_Task_impl<int> *);
	public:
		shared_ptr<pplx::details::_Task_impl<int> >(shared_ptr<pplx::details::_Task_impl<int> > const &);
		~shared_ptr<pplx::details::_Task_impl<int> >();
	};

	class shared_ptr<pplx::details::_Task_impl<long> >
	{
		void _Resetp<pplx::details::_Task_impl<long> >(pplx::details::_Task_impl<long> *);
	public:
		shared_ptr<pplx::details::_Task_impl<long> >(shared_ptr<pplx::details::_Task_impl<long> > const &);
		~shared_ptr<pplx::details::_Task_impl<long> >();
	};

	class shared_ptr<pplx::details::_Task_impl<unsigned __int64> >
	{
		void _Resetp<pplx::details::_Task_impl<unsigned __int64> >(pplx::details::_Task_impl<unsigned __int64> *);
	public:
		shared_ptr<pplx::details::_Task_impl<unsigned __int64> >(shared_ptr<pplx::details::_Task_impl<unsigned __int64> > const &);
		~shared_ptr<pplx::details::_Task_impl<unsigned __int64> >();
	};

	class shared_ptr<pplx::details::_Task_impl<unsigned char> >
	{
		void _Resetp<pplx::details::_Task_impl<unsigned char> >(pplx::details::_Task_impl<unsigned char> *);
	public:
		shared_ptr<pplx::details::_Task_impl<unsigned char> >(shared_ptr<pplx::details::_Task_impl<unsigned char> > const &);
		~shared_ptr<pplx::details::_Task_impl<unsigned char> >();
	};

	struct shared_ptr<pplx::details::_Task_impl<web::http::http_response> >
	{
		shared_ptr<pplx::details::_Task_impl<web::http::http_response> >(shared_ptr<pplx::details::_Task_impl<web::http::http_response> > const &);
		~shared_ptr<pplx::details::_Task_impl<web::http::http_response> >();
	};

	class shared_ptr<pplx::details::_Task_impl<web::json::value> >
	{
		void _Resetp<pplx::details::_Task_impl<web::json::value> >(pplx::details::_Task_impl<web::json::value> *);
	public:
		~shared_ptr<pplx::details::_Task_impl<web::json::value> >();
	};

	struct shared_ptr<pplx::details::_Task_impl_base>
	{
		~shared_ptr<pplx::details::_Task_impl_base>();
	};

	struct shared_ptr<pplx::details::windows_scheduler>
	{
		~shared_ptr<pplx::details::windows_scheduler>();
	};

	struct shared_ptr<pplx::scheduler_interface>
	{
		shared_ptr<pplx::scheduler_interface>(shared_ptr<pplx::scheduler_interface> const &);
		~shared_ptr<pplx::scheduler_interface>();
	};

	class shared_ptr<unsigned char>
	{
		void _Resetp<unsigned char>(unsigned char *);
	public:
		shared_ptr<unsigned char> & operator=(shared_ptr<unsigned char> const &);
		~shared_ptr<unsigned char>();
	};

	struct shared_ptr<web::http::client::details::_http_client_communicator>
	{
		~shared_ptr<web::http::client::details::_http_client_communicator>();
	};

	struct shared_ptr<web::http::client::details::http_network_handler>
	{
		void _Resetp0<web::http::client::details::http_network_handler>(web::http::client::details::http_network_handler *,_Ref_count_base *);
		~shared_ptr<web::http::client::details::http_network_handler>();
	};

	struct shared_ptr<web::http::client::details::request_context>
	{
		shared_ptr<web::http::client::details::request_context>(shared_ptr<web::http::client::details::request_context> const &);
		~shared_ptr<web::http::client::details::request_context>();
	};

	struct shared_ptr<web::http::client::details::winhttp_client>
	{
		~shared_ptr<web::http::client::details::winhttp_client>();
	};

	struct shared_ptr<web::http::details::_http_request>
	{
		shared_ptr<web::http::details::_http_request>(shared_ptr<web::http::details::_http_request> const &);
		~shared_ptr<web::http::details::_http_request>();
	};

	struct shared_ptr<web::http::details::_http_response>
	{
		shared_ptr<web::http::details::_http_response>(shared_ptr<web::http::details::_http_response> const &);
		~shared_ptr<web::http::details::_http_response>();
	};

	class shared_ptr<web::http::http_pipeline>
	{
		void _Resetp<web::http::http_pipeline>(web::http::http_pipeline *);
	public:
		~shared_ptr<web::http::http_pipeline>();
	};

	struct shared_ptr<web::http::http_pipeline_stage>
	{
		shared_ptr<web::http::http_pipeline_stage> & operator=(shared_ptr<web::http::http_pipeline_stage> const &);
		~shared_ptr<web::http::http_pipeline_stage>();
	};

	struct shared_ptr<web::http::oauth1::details::oauth1_handler>
	{
		~shared_ptr<web::http::oauth1::details::oauth1_handler>();
	};

	struct shared_ptr<web::http::oauth1::experimental::oauth1_config>
	{
		shared_ptr<web::http::oauth1::experimental::oauth1_config>(shared_ptr<web::http::oauth1::experimental::oauth1_config> const &);
		~shared_ptr<web::http::oauth1::experimental::oauth1_config>();
	};

	struct shared_ptr<web::http::oauth2::details::oauth2_handler>
	{
		~shared_ptr<web::http::oauth2::details::oauth2_handler>();
	};

	struct shared_ptr<web::http::oauth2::experimental::oauth2_config>
	{
		shared_ptr<web::http::oauth2::experimental::oauth2_config>(shared_ptr<web::http::oauth2::experimental::oauth2_config> const &);
		~shared_ptr<web::http::oauth2::experimental::oauth2_config>();
	};

	struct system_error
	{
		system_error(system_error const &);
		virtual ~system_error();
	};

	struct unique_ptr<TraceLoggingCorrelationVector,default_delete<TraceLoggingCorrelationVector> >
	{
		~unique_ptr<TraceLoggingCorrelationVector,default_delete<TraceLoggingCorrelationVector> >();
	};

	struct unique_ptr<UpdateStore,default_delete<UpdateStore> >
	{
		~unique_ptr<UpdateStore,default_delete<UpdateStore> >();
	};

	struct unique_ptr<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::details::zero_memory_deleter>
	{
		~unique_ptr<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::details::zero_memory_deleter>();
	};

	struct unique_ptr<char [0],default_delete<char [0]> >
	{
		~unique_ptr<char [0],default_delete<char [0]> >();
	};

	struct unique_ptr<char,default_delete<char> >
	{
		~unique_ptr<char,default_delete<char> >();
	};

	struct unique_ptr<unsigned char [0],default_delete<unsigned char [0]> >
	{
		~unique_ptr<unsigned char [0],default_delete<unsigned char [0]> >();
	};

	struct unique_ptr<unsigned short [0],default_delete<unsigned short [0]> >
	{
		~unique_ptr<unsigned short [0],default_delete<unsigned short [0]> >();
	};

	struct unique_ptr<void *,WnfSubscriberT<char>::HandleDeleter>
	{
		~unique_ptr<void *,WnfSubscriberT<char>::HandleDeleter>();
	};

	struct unique_ptr<web::http::details::_http_server_context,default_delete<web::http::details::_http_server_context> >
	{
		~unique_ptr<web::http::details::_http_server_context,default_delete<web::http::details::_http_server_context> >();
	};

	struct unique_ptr<web::json::details::_Array,default_delete<web::json::details::_Array> >
	{
		~unique_ptr<web::json::details::_Array,default_delete<web::json::details::_Array> >();
	};

	struct unique_ptr<web::json::details::_Boolean,default_delete<web::json::details::_Boolean> >
	{
		~unique_ptr<web::json::details::_Boolean,default_delete<web::json::details::_Boolean> >();
	};

	struct unique_ptr<web::json::details::_Number,default_delete<web::json::details::_Number> >
	{
		~unique_ptr<web::json::details::_Number,default_delete<web::json::details::_Number> >();
	};

	struct unique_ptr<web::json::details::_Object,default_delete<web::json::details::_Object> >
	{
		~unique_ptr<web::json::details::_Object,default_delete<web::json::details::_Object> >();
	};

	struct unique_ptr<web::json::details::_String,default_delete<web::json::details::_String> >
	{
		~unique_ptr<web::json::details::_String,default_delete<web::json::details::_String> >();
	};

	class unique_ptr<web::json::details::_Value,default_delete<web::json::details::_Value> >
	{
		void _Delete();
	};

	class vector<ATL::CComPtr<IUsoUpdate>,allocator<ATL::CComPtr<IUsoUpdate> > >
	{
	protected:
		void _Reallocate(unsigned __int64);
		void _Xlen();
	};

	class vector<ATL::CComPtr<IUsoUpdateHistoryEntry>,allocator<ATL::CComPtr<IUsoUpdateHistoryEntry> > >
	{
	protected:
		void _Reallocate(unsigned __int64);
		void _Xlen();
	};

	class vector<_GUID,allocator<_GUID> >
	{
	protected:
		void _Reallocate(unsigned __int64);
		void _Xlen();
	public:
		void push_back(_GUID const &);
		~vector<_GUID,allocator<_GUID> >();
	};

	class vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
	protected:
		void _Reallocate(unsigned __int64);
		void _Reserve(unsigned __int64);
		void _Xlen();
	public:
		~vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >();
	};

	struct vector<bool,allocator<bool> >
	{
		_Vb_iterator<_Wrap_alloc<allocator<unsigned int> > > _Insert_n(_Vb_const_iterator<_Wrap_alloc<allocator<unsigned int> > >,unsigned __int64,bool const &);
		_Vb_iterator<_Wrap_alloc<allocator<unsigned int> > > erase(_Vb_const_iterator<_Wrap_alloc<allocator<unsigned int> > >,_Vb_const_iterator<_Wrap_alloc<allocator<unsigned int> > >);
		unsigned __int64 _Insert_x(_Vb_const_iterator<_Wrap_alloc<allocator<unsigned int> > >,unsigned __int64);
		void _Xlen();
		void resize(unsigned __int64,bool);
		~vector<bool,allocator<bool> >();
	};

	class vector<char,allocator<char> >
	{
	protected:
		void _Tidy();
	public:
		vector<char,allocator<char> > & operator=(vector<char,allocator<char> > const &);
		vector<char,allocator<char> >(vector<char,allocator<char> > const &);
	};

	class vector<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::json::value>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::json::value> > >
	{
	protected:
		void _Reallocate(unsigned __int64);
		void _Reserve(unsigned __int64);
		void _Tidy();
		void _Xlen();
	public:
		vector<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::json::value>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::json::value> > >(vector<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::json::value>,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::json::value> > > const &);
	};

	class vector<shared_ptr<pplx::details::_Task_impl<bool> >,allocator<shared_ptr<pplx::details::_Task_impl<bool> > > >
	{
	protected:
		void _Destroy(shared_ptr<pplx::details::_Task_impl<bool> > *,shared_ptr<pplx::details::_Task_impl<bool> > *);
		void _Reallocate(unsigned __int64);
		void _Xlen();
	public:
		void push_back(shared_ptr<pplx::details::_Task_impl<bool> > const &);
		~vector<shared_ptr<pplx::details::_Task_impl<bool> >,allocator<shared_ptr<pplx::details::_Task_impl<bool> > > >();
	};

	class vector<shared_ptr<pplx::details::_Task_impl<int> >,allocator<shared_ptr<pplx::details::_Task_impl<int> > > >
	{
	protected:
		void _Destroy(shared_ptr<pplx::details::_Task_impl<int> > *,shared_ptr<pplx::details::_Task_impl<int> > *);
		void _Reallocate(unsigned __int64);
		void _Xlen();
	public:
		void push_back(shared_ptr<pplx::details::_Task_impl<int> > const &);
		~vector<shared_ptr<pplx::details::_Task_impl<int> >,allocator<shared_ptr<pplx::details::_Task_impl<int> > > >();
	};

	class vector<shared_ptr<pplx::details::_Task_impl<long> >,allocator<shared_ptr<pplx::details::_Task_impl<long> > > >
	{
	protected:
		void _Destroy(shared_ptr<pplx::details::_Task_impl<long> > *,shared_ptr<pplx::details::_Task_impl<long> > *);
		void _Reallocate(unsigned __int64);
		void _Xlen();
	public:
		void push_back(shared_ptr<pplx::details::_Task_impl<long> > const &);
		~vector<shared_ptr<pplx::details::_Task_impl<long> >,allocator<shared_ptr<pplx::details::_Task_impl<long> > > >();
	};

	class vector<shared_ptr<pplx::details::_Task_impl<unsigned __int64> >,allocator<shared_ptr<pplx::details::_Task_impl<unsigned __int64> > > >
	{
	protected:
		void _Destroy(shared_ptr<pplx::details::_Task_impl<unsigned __int64> > *,shared_ptr<pplx::details::_Task_impl<unsigned __int64> > *);
		void _Reallocate(unsigned __int64);
		void _Xlen();
	public:
		void push_back(shared_ptr<pplx::details::_Task_impl<unsigned __int64> > const &);
		~vector<shared_ptr<pplx::details::_Task_impl<unsigned __int64> >,allocator<shared_ptr<pplx::details::_Task_impl<unsigned __int64> > > >();
	};

	class vector<shared_ptr<pplx::details::_Task_impl<unsigned char> >,allocator<shared_ptr<pplx::details::_Task_impl<unsigned char> > > >
	{
	protected:
		void _Destroy(shared_ptr<pplx::details::_Task_impl<unsigned char> > *,shared_ptr<pplx::details::_Task_impl<unsigned char> > *);
		void _Reallocate(unsigned __int64);
		void _Xlen();
	public:
		void push_back(shared_ptr<pplx::details::_Task_impl<unsigned char> > const &);
		~vector<shared_ptr<pplx::details::_Task_impl<unsigned char> >,allocator<shared_ptr<pplx::details::_Task_impl<unsigned char> > > >();
	};

	class vector<shared_ptr<pplx::details::_Task_impl<web::http::http_response> >,allocator<shared_ptr<pplx::details::_Task_impl<web::http::http_response> > > >
	{
	protected:
		void _Destroy(shared_ptr<pplx::details::_Task_impl<web::http::http_response> > *,shared_ptr<pplx::details::_Task_impl<web::http::http_response> > *);
		void _Reallocate(unsigned __int64);
		void _Xlen();
	public:
		void push_back(shared_ptr<pplx::details::_Task_impl<web::http::http_response> > const &);
		~vector<shared_ptr<pplx::details::_Task_impl<web::http::http_response> >,allocator<shared_ptr<pplx::details::_Task_impl<web::http::http_response> > > >();
	};

	class vector<shared_ptr<web::http::http_pipeline_stage>,allocator<shared_ptr<web::http::http_pipeline_stage> > >
	{
	protected:
		void _Reallocate(unsigned __int64);
		void _Xlen();
	public:
		~vector<shared_ptr<web::http::http_pipeline_stage>,allocator<shared_ptr<web::http::http_pipeline_stage> > >();
	};

	class vector<unsigned char,allocator<unsigned char> >
	{
	protected:
		_Vector_iterator<_Vector_val<_Simple_types<unsigned char> > > _Insert_n(_Vector_const_iterator<_Vector_val<_Simple_types<unsigned char> > >,unsigned __int64,unsigned char const &);
		void _Reallocate(unsigned __int64);
		void _Tidy();
		void _Xlen();
	public:
		_Vector_iterator<_Vector_val<_Simple_types<unsigned char> > > erase(_Vector_const_iterator<_Vector_val<_Simple_types<unsigned char> > >,_Vector_const_iterator<_Vector_val<_Simple_types<unsigned char> > >);
		void resize(unsigned __int64);
		~vector<unsigned char,allocator<unsigned char> >();
	};

	class vector<unsigned int,allocator<bool> >
	{
	protected:
		_Vector_iterator<_Vector_val<_Simple_types<unsigned int> > > _Insert_n(_Vector_const_iterator<_Vector_val<_Simple_types<unsigned int> > >,unsigned __int64,unsigned int const &);
		void _Tidy();
		void _Xlen();
	public:
		void _Construct_n(unsigned __int64,unsigned int const *);
	};

	class vector<unsigned short const *,allocator<unsigned short const *> >
	{
	protected:
		void _Reallocate(unsigned __int64);
		void _Reserve(unsigned __int64);
		void _Xlen();
	public:
		~vector<unsigned short const *,allocator<unsigned short const *> >();
	};

	class vector<unsigned short,allocator<unsigned short> >
	{
	protected:
		void _Reallocate(unsigned __int64);
		void _Tidy();
		void _Xlen();
	public:
		void _Construct<unsigned short *>(unsigned short *,unsigned short *);
		void _Construct<unsigned short const *>(unsigned short const *,unsigned short const *);
		void _Insert<unsigned short *>(_Vector_const_iterator<_Vector_val<_Simple_types<unsigned short> > >,unsigned short *,unsigned short *,forward_iterator_tag);
		void _Insert<unsigned short const *>(_Vector_const_iterator<_Vector_val<_Simple_types<unsigned short> > >,unsigned short const *,unsigned short const *,forward_iterator_tag);
		void push_back(unsigned short const &);
		void resize(unsigned __int64);
		~vector<unsigned short,allocator<unsigned short> >();
	};

	class vector<void *,allocator<void *> >
	{
	protected:
		void _Tidy();
		void _Xlen();
	public:
		vector<void *,allocator<void *> > & operator=(vector<void *,allocator<void *> > const &);
		vector<void *,allocator<void *> >(vector<void *,allocator<void *> > const &);
	};

	class vector<web::json::value,allocator<web::json::value> >
	{
	protected:
		void _Reallocate(unsigned __int64);
		void _Tidy();
		void _Xlen();
	public:
		vector<web::json::value,allocator<web::json::value> >(vector<web::json::value,allocator<web::json::value> > const &);
		void resize(unsigned __int64);
		~vector<web::json::value,allocator<web::json::value> >();
	};

	struct weak_ptr<pplx::details::_Task_impl_base>
	{
		shared_ptr<pplx::details::_Task_impl_base> lock();
		~weak_ptr<pplx::details::_Task_impl_base>();
	};

	ATL::CComPtr<IUsoUpdate> * _Uninit_move<ATL::CComPtr<IUsoUpdate> *,ATL::CComPtr<IUsoUpdate> *,allocator<ATL::CComPtr<IUsoUpdate> >,ATL::CComPtr<IUsoUpdate> >(ATL::CComPtr<IUsoUpdate> *,ATL::CComPtr<IUsoUpdate> *,ATL::CComPtr<IUsoUpdate> *,std::_Wrap_alloc<std::allocator<ATL::CComPtr<IUsoUpdate> > > &,ATL::CComPtr<IUsoUpdate> *,std::_Nonscalar_ptr_iterator_tag);
	ATL::CComPtr<IUsoUpdateHistoryEntry> * _Uninit_move<ATL::CComPtr<IUsoUpdateHistoryEntry> *,ATL::CComPtr<IUsoUpdateHistoryEntry> *,allocator<ATL::CComPtr<IUsoUpdateHistoryEntry> >,ATL::CComPtr<IUsoUpdateHistoryEntry> >(ATL::CComPtr<IUsoUpdateHistoryEntry> *,ATL::CComPtr<IUsoUpdateHistoryEntry> *,ATL::CComPtr<IUsoUpdateHistoryEntry> *,std::_Wrap_alloc<std::allocator<ATL::CComPtr<IUsoUpdateHistoryEntry> > > &,ATL::CComPtr<IUsoUpdateHistoryEntry> *,std::_Nonscalar_ptr_iterator_tag);
	_GUID * _Uninit_move<_GUID *,_GUID *,allocator<_GUID>,_GUID>(_GUID *,_GUID *,_GUID *,std::_Wrap_alloc<std::allocator<_GUID> > &,_GUID *,std::_Nonscalar_ptr_iterator_tag);
	char * _Uninit_copy<_Vector_const_iterator<_Vector_val<_Simple_types<char> > >,char *,allocator<char> >(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<char> > >,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<char> > >,char *,std::_Wrap_alloc<std::allocator<char> > &,std::_Nonscalar_ptr_iterator_tag);
	nothrow_t const std::nothrow;
	std::_String_iterator<std::_String_val<std::_Simple_types<unsigned short> > > transform<_String_iterator<_String_val<_Simple_types<unsigned short> > >,_String_iterator<_String_val<_Simple_types<unsigned short> > >,unsigned short (*)(unsigned short)>(std::_String_iterator<std::_String_val<std::_Simple_types<unsigned short> > >,std::_String_iterator<std::_String_val<std::_Simple_types<unsigned short> > >,std::_String_iterator<std::_String_val<std::_Simple_types<unsigned short> > >,unsigned short (*)(unsigned short));
	std::basic_ostream<char,std::char_traits<char> > & operator<<<char_traits<char> >(std::basic_ostream<char,std::char_traits<char> > &,char const *);
	std::basic_ostream<unsigned short,std::char_traits<unsigned short> > & operator<<<unsigned short,char_traits<unsigned short> >(std::basic_ostream<unsigned short,std::char_traits<unsigned short> > &,char const *);
	std::basic_ostream<unsigned short,std::char_traits<unsigned short> > & operator<<<unsigned short,char_traits<unsigned short> >(std::basic_ostream<unsigned short,std::char_traits<unsigned short> > &,unsigned short const *);
	std::basic_ostream<unsigned short,std::char_traits<unsigned short> > & operator<<<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(std::basic_ostream<unsigned short,std::char_traits<unsigned short> > &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > * _Uninit_move<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::_Wrap_alloc<std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::_Nonscalar_ptr_iterator_tag);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > operator+<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > operator+<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,unsigned short const *);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > operator+<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(unsigned short const *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > to_wstring(unsigned long);
	std::codecvt<unsigned short,char,int> const & use_facet<codecvt<unsigned short,char,int> >(std::locale const &);
	std::collate<unsigned short> const & use_facet<collate<unsigned short> >(std::locale const &);
	std::ctype<unsigned short> const & use_facet<ctype<unsigned short> >(std::locale const &);
	std::exception_ptr make_exception_ptr<web::http::http_exception>(web::http::http_exception);
	std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *> _Unguarded_partition<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *>(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,web::json::value> * _Uninit_copy<_Vector_const_iterator<_Vector_val<_Simple_types<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::json::value> > > >,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::json::value> *,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::json::value> > >(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,web::json::value> > > >,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,web::json::value> > > >,std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,web::json::value> *,std::_Wrap_alloc<std::allocator<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,web::json::value> > > &,std::_Nonscalar_ptr_iterator_tag);
	std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,web::json::value> * _Uninit_move<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::json::value> *,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::json::value> *,allocator<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::json::value> >,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::json::value> >(std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,web::json::value> *,std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,web::json::value> *,std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,web::json::value> *,std::_Wrap_alloc<std::allocator<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,web::json::value> > > &,std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,web::json::value> *,std::_Nonscalar_ptr_iterator_tag);
	std::pair<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,web::json::value> *,std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,web::json::value> *> _Unguarded_partition<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::json::value> *,bool (*)(pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::json::value> const &,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::json::value> const &)>(std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,web::json::value> *,std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,web::json::value> *,bool (*)(std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,web::json::value> const &,std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,web::json::value> const &));
	std::shared_ptr<pplx::details::_ExceptionHolder> make_shared<pplx::details::_ExceptionHolder,exception_ptr &,pplx::details::_TaskCreationCallstack const &>(std::exception_ptr &,pplx::details::_TaskCreationCallstack const &);
	std::shared_ptr<pplx::details::_Task_impl<bool> > * _Uninit_move<shared_ptr<pplx::details::_Task_impl<bool> > *,shared_ptr<pplx::details::_Task_impl<bool> > *,allocator<shared_ptr<pplx::details::_Task_impl<bool> > >,shared_ptr<pplx::details::_Task_impl<bool> > >(std::shared_ptr<pplx::details::_Task_impl<bool> > *,std::shared_ptr<pplx::details::_Task_impl<bool> > *,std::shared_ptr<pplx::details::_Task_impl<bool> > *,std::_Wrap_alloc<std::allocator<std::shared_ptr<pplx::details::_Task_impl<bool> > > > &,std::shared_ptr<pplx::details::_Task_impl<bool> > *,std::_Nonscalar_ptr_iterator_tag);
	std::shared_ptr<pplx::details::_Task_impl<int> > * _Uninit_move<shared_ptr<pplx::details::_Task_impl<int> > *,shared_ptr<pplx::details::_Task_impl<int> > *,allocator<shared_ptr<pplx::details::_Task_impl<int> > >,shared_ptr<pplx::details::_Task_impl<int> > >(std::shared_ptr<pplx::details::_Task_impl<int> > *,std::shared_ptr<pplx::details::_Task_impl<int> > *,std::shared_ptr<pplx::details::_Task_impl<int> > *,std::_Wrap_alloc<std::allocator<std::shared_ptr<pplx::details::_Task_impl<int> > > > &,std::shared_ptr<pplx::details::_Task_impl<int> > *,std::_Nonscalar_ptr_iterator_tag);
	std::shared_ptr<pplx::details::_Task_impl<long> > * _Uninit_move<shared_ptr<pplx::details::_Task_impl<long> > *,shared_ptr<pplx::details::_Task_impl<long> > *,allocator<shared_ptr<pplx::details::_Task_impl<long> > >,shared_ptr<pplx::details::_Task_impl<long> > >(std::shared_ptr<pplx::details::_Task_impl<long> > *,std::shared_ptr<pplx::details::_Task_impl<long> > *,std::shared_ptr<pplx::details::_Task_impl<long> > *,std::_Wrap_alloc<std::allocator<std::shared_ptr<pplx::details::_Task_impl<long> > > > &,std::shared_ptr<pplx::details::_Task_impl<long> > *,std::_Nonscalar_ptr_iterator_tag);
	std::shared_ptr<pplx::details::_Task_impl<unsigned __int64> > * _Uninit_move<shared_ptr<pplx::details::_Task_impl<unsigned __int64> > *,shared_ptr<pplx::details::_Task_impl<unsigned __int64> > *,allocator<shared_ptr<pplx::details::_Task_impl<unsigned __int64> > >,shared_ptr<pplx::details::_Task_impl<unsigned __int64> > >(std::shared_ptr<pplx::details::_Task_impl<unsigned __int64> > *,std::shared_ptr<pplx::details::_Task_impl<unsigned __int64> > *,std::shared_ptr<pplx::details::_Task_impl<unsigned __int64> > *,std::_Wrap_alloc<std::allocator<std::shared_ptr<pplx::details::_Task_impl<unsigned __int64> > > > &,std::shared_ptr<pplx::details::_Task_impl<unsigned __int64> > *,std::_Nonscalar_ptr_iterator_tag);
	std::shared_ptr<pplx::details::_Task_impl<unsigned char> > * _Uninit_move<shared_ptr<pplx::details::_Task_impl<unsigned char> > *,shared_ptr<pplx::details::_Task_impl<unsigned char> > *,allocator<shared_ptr<pplx::details::_Task_impl<unsigned char> > >,shared_ptr<pplx::details::_Task_impl<unsigned char> > >(std::shared_ptr<pplx::details::_Task_impl<unsigned char> > *,std::shared_ptr<pplx::details::_Task_impl<unsigned char> > *,std::shared_ptr<pplx::details::_Task_impl<unsigned char> > *,std::_Wrap_alloc<std::allocator<std::shared_ptr<pplx::details::_Task_impl<unsigned char> > > > &,std::shared_ptr<pplx::details::_Task_impl<unsigned char> > *,std::_Nonscalar_ptr_iterator_tag);
	std::shared_ptr<pplx::details::_Task_impl<web::http::http_response> > * _Uninit_move<shared_ptr<pplx::details::_Task_impl<web::http::http_response> > *,shared_ptr<pplx::details::_Task_impl<web::http::http_response> > *,allocator<shared_ptr<pplx::details::_Task_impl<web::http::http_response> > >,shared_ptr<pplx::details::_Task_impl<web::http::http_response> > >(std::shared_ptr<pplx::details::_Task_impl<web::http::http_response> > *,std::shared_ptr<pplx::details::_Task_impl<web::http::http_response> > *,std::shared_ptr<pplx::details::_Task_impl<web::http::http_response> > *,std::_Wrap_alloc<std::allocator<std::shared_ptr<pplx::details::_Task_impl<web::http::http_response> > > > &,std::shared_ptr<pplx::details::_Task_impl<web::http::http_response> > *,std::_Nonscalar_ptr_iterator_tag);
	std::shared_ptr<web::http::client::details::http_network_handler> static_pointer_cast<web::http::client::details::http_network_handler,web::http::http_pipeline_stage>(std::shared_ptr<web::http::http_pipeline_stage> const &);
	std::shared_ptr<web::http::details::_http_request> make_shared<web::http::details::_http_request,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > const &>(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
	std::shared_ptr<web::http::details::_http_response> make_shared<web::http::details::_http_response>();
	std::shared_ptr<web::http::http_pipeline_stage> * _Uninit_move<shared_ptr<web::http::http_pipeline_stage> *,shared_ptr<web::http::http_pipeline_stage> *,allocator<shared_ptr<web::http::http_pipeline_stage> >,shared_ptr<web::http::http_pipeline_stage> >(std::shared_ptr<web::http::http_pipeline_stage> *,std::shared_ptr<web::http::http_pipeline_stage> *,std::shared_ptr<web::http::http_pipeline_stage> *,std::_Wrap_alloc<std::allocator<std::shared_ptr<web::http::http_pipeline_stage> > > &,std::shared_ptr<web::http::http_pipeline_stage> *,std::_Nonscalar_ptr_iterator_tag);
	unsigned short * rotate<unsigned short *>(unsigned short *,unsigned short *,unsigned short *);
	void * * _Uninit_copy<_Vector_const_iterator<_Vector_val<_Simple_types<void *> > >,void * *,allocator<void *> >(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<void *> > >,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<void *> > >,void * *,std::_Wrap_alloc<std::allocator<void *> > &,std::_Nonscalar_ptr_iterator_tag);
	void _Facet_Register(std::_Facet_base *);
	void _Insertion_sort1<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	void _Insertion_sort1<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::json::value> *,bool (*)(pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::json::value> const &,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::json::value> const &),pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::json::value> >(std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,web::json::value> *,std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,web::json::value> *,bool (*)(std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,web::json::value> const &,std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,web::json::value> const &),std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,web::json::value> *);
	void _Med3<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *>(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	void _Med3<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::json::value> *,bool (*)(pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::json::value> const &,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::json::value> const &)>(std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,web::json::value> *,std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,web::json::value> *,std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,web::json::value> *,bool (*)(std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,web::json::value> const &,std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,web::json::value> const &));
	void _Rotate<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::json::value> *>(std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,web::json::value> *,std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,web::json::value> *,std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,web::json::value> *,std::random_access_iterator_tag);
	void _Sort<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,__int64>(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,__int64);
	void _Sort<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::json::value> *,__int64,bool (*)(pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::json::value> const &,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::json::value> const &)>(std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,web::json::value> *,std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,web::json::value> *,__int64,bool (*)(std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,web::json::value> const &,std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,web::json::value> const &));
	void _Uninit_def_fill_n<web::json::value *,unsigned __int64,allocator<web::json::value>,web::json::value>(web::json::value *,unsigned __int64,std::_Wrap_alloc<std::allocator<web::json::value> > &,web::json::value *,std::_Nonscalar_ptr_iterator_tag);
	void iter_swap<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *>(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	void iter_swap<pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::json::value> *,pair<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,web::json::value> *>(std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,web::json::value> *,std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,web::json::value> *);
	web::json::value * _Uninit_copy<_Vector_const_iterator<_Vector_val<_Simple_types<web::json::value> > >,web::json::value *,allocator<web::json::value> >(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<web::json::value> > >,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<web::json::value> > >,web::json::value *,std::_Wrap_alloc<std::allocator<web::json::value> > &,std::_Nonscalar_ptr_iterator_tag);
	web::json::value * _Uninit_move<web::json::value *,web::json::value *,allocator<web::json::value>,web::json::value>(web::json::value *,web::json::value *,web::json::value *,std::_Wrap_alloc<std::allocator<web::json::value> > &,web::json::value *,std::_Nonscalar_ptr_iterator_tag);
};

namespace utility
{
	namespace conversions
	{
		std::basic_string<char,std::char_traits<char>,std::allocator<char> > to_utf8string(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
		std::basic_string<char,std::char_traits<char>,std::allocator<char> > utf16_to_utf8(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
		std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > latin1_to_utf16(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
		std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > print_string<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
		std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > print_string<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,std::locale const &);
		std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > print_string<unsigned __int64>(unsigned __int64 const &,std::locale const &);
		std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > print_string<unsigned short [17]>(unsigned short const (&)[17]);
		std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > print_string<unsigned short [8]>(unsigned short const (&)[8]);
		std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > print_string<unsigned short const *>(unsigned short const * const &);
		std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > utf8_to_utf16(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
	};

	namespace details
	{
		struct scoped_c_thread_locale
		{
			static localeinfo_struct * c_locale();
		};

		struct windows_category_impl
		{
			virtual char const * name();
			virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > message(int);
			virtual std::error_condition default_error_condition(int);
		};

		pplx::details::critical_section_impl g_c_localeLock;
		std::error_category const & windows_category();
		std::system_error create_system_error(unsigned long);
		std::unique_ptr<localeinfo_struct *,void (*)(localeinfo_struct * *)> g_c_locale;
		std::unique_ptr<web::json::details::_Array,std::default_delete<web::json::details::_Array> > make_unique<web::json::details::_Array>();
		std::unique_ptr<web::json::details::_Boolean,std::default_delete<web::json::details::_Boolean> > make_unique<web::json::details::_Boolean,bool &>(bool &);
		std::unique_ptr<web::json::details::_Null,std::default_delete<web::json::details::_Null> > make_unique<web::json::details::_Null>();
		std::unique_ptr<web::json::details::_Number,std::default_delete<web::json::details::_Number> > make_unique<web::json::details::_Number,__int64 &>(__int64 &);
		std::unique_ptr<web::json::details::_Number,std::default_delete<web::json::details::_Number> > make_unique<web::json::details::_Number,double &>(double &);
		std::unique_ptr<web::json::details::_Number,std::default_delete<web::json::details::_Number> > make_unique<web::json::details::_Number,unsigned __int64 &>(unsigned __int64 &);
		std::unique_ptr<web::json::details::_Object,std::default_delete<web::json::details::_Object> > make_unique<web::json::details::_Object,bool &>(bool &);
	};

	class nonce_generator
	{
		static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const c_allowed_chars;
	public:
		std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > generate();
	};

};

namespace web
{
	class credentials
	{
		std::unique_ptr<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,details::zero_memory_deleter> decrypt();
	public:
		~credentials();
	};

	namespace details
	{
		struct uri_components
		{
			std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > join();
			uri_components();
			uri_components(uri_components const &);
			~uri_components();
		};

		namespace uri_parser
		{
			bool inner_parse(unsigned short const *,unsigned short const * *,unsigned short const * *,unsigned short const * *,unsigned short const * *,unsigned short const * *,unsigned short const * *,int *,unsigned short const * *,unsigned short const * *,unsigned short const * *,unsigned short const * *,unsigned short const * *,unsigned short const * *);
			bool parse(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,uri_components &);
		};

		struct win32_encryption
		{
			~win32_encryption();
		};

	};

	namespace http
	{
		namespace client
		{
			namespace details
			{
				class _http_client_communicator
				{
					void open_and_send_request(std::shared_ptr<request_context> const &);
					void push_request(std::shared_ptr<request_context> const &);
				public:
					virtual ~_http_client_communicator();
				};

				struct http_network_handler
				{
					http_network_handler(uri const &,http_client_config const &);
					virtual pplx::task<http_response> propagate(http_request);
				};

				class request_context
				{
				protected:
					virtual void finish();
				public:
					Concurrency::streams::streambuf<unsigned char> _get_writebuffer();
					virtual Concurrency::streams::streambuf<unsigned char> _get_readbuffer();
					virtual void report_exception(std::exception_ptr);
					virtual ~request_context();
					void complete_request(unsigned __int64);
					void report_error(unsigned long,std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
					void report_error(unsigned long,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
				};

				class winhttp_client
				{
					static bool handle_authentication_failure(void *,winhttp_request_context *,unsigned long);
					static void _multiple_segment_write_data(winhttp_request_context *);
					static void _transfer_encoding_chunked_write_data(winhttp_request_context *);
					static void completion_callback(void *,unsigned __int64,unsigned long,void *,unsigned long);
					static void read_next_response_chunk(winhttp_request_context *,unsigned long,bool);
					void _start_request_send(winhttp_request_context *,unsigned __int64);
				protected:
					virtual unsigned long open();
					virtual void send_request(std::shared_ptr<request_context> const &);
				public:
					winhttp_client(uri,http_client_config);
				};

				class winhttp_request_context
				{
					winhttp_request_context(std::shared_ptr<_http_client_communicator> const &,http_request const &);
				protected:
					virtual void finish();
				public:
					static std::shared_ptr<request_context> create_request_context(std::shared_ptr<_http_client_communicator> const &,http_request const &);
					virtual Concurrency::streams::streambuf<unsigned char> _get_readbuffer();
					virtual void cleanup();
				};

				void verify_uri(uri const &);
			};

			class http_client
			{
				void build_pipeline(uri const &,http_client_config const &);
			public:
				pplx::task<http_response> request(http_request,pplx::cancellation_token const &);
				~http_client();
			};

			struct http_client_config
			{
				http_client_config();
				http_client_config(http_client_config const &);
				~http_client_config();
			};

		};

		namespace details
		{
			struct _http_request
			{
				_http_request(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >);
				uri relative_uri();
				virtual std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > to_string();
				virtual ~_http_request();
			};

			struct _http_response
			{
				virtual std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > to_string();
			};

			struct charset_types
			{
				static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ascii;
				static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const latin1;
				static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const usascii;
				static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const utf16;
				static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const utf16be;
				static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const utf16le;
				static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const utf8;
			};

			struct http_msg_base
			{
				http_msg_base();
				json::value _extract_json(bool);
				std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > extract_string(bool);
				std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > parse_and_check_content_type(bool,std::function<bool (std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &)> const &);
				unsigned __int64 _get_content_length();
				virtual std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > to_string();
				virtual void _complete(unsigned __int64,std::exception_ptr const &);
				virtual ~http_msg_base();
				void _prepare_to_receive_data();
				void set_body(Concurrency::streams::basic_istream<unsigned char> const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
				void set_outstream(Concurrency::streams::basic_ostream<unsigned char> const &,bool);
			};

			struct mime_types
			{
				static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const application_atom_xml;
				static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const application_http;
				static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const application_javascript;
				static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const application_json;
				static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const application_octetstream;
				static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const application_x_www_form_urlencoded;
				static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const application_xjavascript;
				static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const application_xjson;
				static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const application_xml;
				static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const boundary;
				static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const form_data;
				static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const message_http;
				static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const multipart_form_data;
				static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const text;
				static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const text_javascript;
				static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const text_json;
				static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const text_plain;
				static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const text_plain_utf16;
				static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const text_plain_utf16le;
				static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const text_plain_utf8;
				static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const text_xjavascript;
				static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const text_xjson;
			};

			bool is_content_type_json(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
			bool is_content_type_one_of(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
			bool is_content_type_textual(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
			std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > convert_utf16_to_string_t(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >);
			std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > convert_utf16_to_utf16(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >);
			std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > convert_utf16be_to_string_t(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,bool);
			std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > convert_utf16be_to_utf16le(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,bool);
			std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > convert_utf16le_to_string_t(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,bool);
			std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > get_default_charset(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
			std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > get_default_reason_phrase(unsigned short);
			void parse_content_type_and_charset(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
			void trim_whitespace(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
		};

		struct header_names
		{
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const accept;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const accept_charset;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const accept_encoding;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const accept_language;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const accept_ranges;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const age;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const allow;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const authorization;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const cache_control;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const connection;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const content_disposition;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const content_encoding;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const content_language;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const content_length;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const content_location;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const content_md5;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const content_range;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const content_type;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const date;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const etag;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const expect;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const expires;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const from;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const host;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const if_match;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const if_modified_since;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const if_none_match;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const if_range;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const if_unmodified_since;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const last_modified;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const location;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const max_forwards;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const pragma;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const proxy_authenticate;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const proxy_authorization;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const range;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const referer;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const retry_after;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const server;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const te;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const trailer;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const transfer_encoding;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const upgrade;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const user_agent;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const vary;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const via;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const warning;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const www_authenticate;
		};

		struct http_exception
		{
			http_exception(http_exception const &);
			http_exception(int,std::error_category const &);
			http_exception(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
			virtual char const * what();
			virtual ~http_exception();
		};

		class http_headers
		{
			bool bind_impl<unsigned __int64>(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,unsigned __int64 &);
		public:
			bool has(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
			void add<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
			void add<unsigned short [17]>(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,unsigned short const (&)[17]);
			void add<unsigned short [8]>(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,unsigned short const (&)[8]);
			void add<unsigned short const *>(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,unsigned short const * const &);
			void set_content_length(unsigned __int64);
			~http_headers();
		};

		struct http_pipeline
		{
			static std::shared_ptr<http_pipeline> create_pipeline(std::shared_ptr<http_pipeline_stage> const &);
			void append(std::shared_ptr<http_pipeline_stage> const &);
		};

		struct http_pipeline_stage
		{
			virtual ~http_pipeline_stage();
		};

		struct http_request
		{
			pplx::task<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > extract_string(bool);
			uri absolute_uri();
			void set_body(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >);
			~http_request();
		};

		struct http_response
		{
			http_response();
			pplx::task<json::value> extract_json(bool);
			~http_response();
		};

		struct http_status_to_phrase
		{
			~http_status_to_phrase();
		};

		struct inline_continuation
		{
			~inline_continuation();
		};

		struct methods
		{
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const CONNECT;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const DEL;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const GET;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const HEAD;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const MERGE;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const OPTIONS;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const PATCH;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const POST;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const PUT;
			static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const TRCE;
		};

		namespace oauth1
		{
			namespace details
			{
				struct oauth1_handler
				{
					virtual pplx::task<http_response> propagate(http_request);
				};

				struct oauth1_state
				{
					oauth1_state(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >);
					~oauth1_state();
				};

				struct oauth1_strings
				{
					static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const callback;
					static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const callback_confirmed;
					static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const consumer_key;
					static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const nonce;
					static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const realm;
					static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const signature;
					static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const signature_method;
					static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const timestamp;
					static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const token;
					static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const token_secret;
					static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const verifier;
					static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const version;
				};

			};

			namespace experimental
			{
				class oauth1_config
				{
					static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > _build_base_string_uri(uri const &);
					static std::vector<unsigned char,std::allocator<unsigned char> > _hmac_sha1(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
					std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > _build_key();
					std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > _build_normalized_parameters(uri,details::oauth1_state const &);
					std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > _build_signature(http_request,details::oauth1_state);
					void _authenticate_request(http_request &);
					void _authenticate_request(http_request &,details::oauth1_state);
				public:
					std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > _build_hmac_sha1_signature(http_request,details::oauth1_state);
					std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > _build_signature_base_string(http_request,details::oauth1_state);
				};

				struct oauth1_exception
				{
					oauth1_exception(oauth1_exception const &);
					oauth1_exception(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >);
					virtual char const * what();
					virtual ~oauth1_exception();
				};

				struct oauth1_methods
				{
					static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const hmac_sha1;
					static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const plaintext;
				};

			};

		};

		namespace oauth2
		{
			namespace details
			{
				struct oauth2_handler
				{
					virtual pplx::task<http_response> propagate(http_request);
				};

			};

			namespace experimental
			{
				class oauth2_config
				{
					void _authenticate_request(http_request &);
				};

			};

		};

	};

	namespace json
	{
		namespace details
		{
			class JSON_Parser<unsigned short>
			{
				struct Token
				{
					~Token();
				};

				bool CompleteNumberLiteral(unsigned short,JSON_Parser<unsigned short>::Token &);
				std::unique_ptr<_Value,std::default_delete<_Value> > _ParseArray(JSON_Parser<unsigned short>::Token &);
				std::unique_ptr<_Value,std::default_delete<_Value> > _ParseObject(JSON_Parser<unsigned short>::Token &);
				std::unique_ptr<_Value,std::default_delete<_Value> > _ParseValue(JSON_Parser<unsigned short>::Token &);
			protected:
				bool handle_unescape_char(JSON_Parser<unsigned short>::Token &);
			public:
				void GetNextToken(JSON_Parser<unsigned short>::Token &);
			};

			class JSON_StringParser<unsigned short>
			{
			protected:
				virtual bool CompleteComment(JSON_Parser<unsigned short>::Token &);
				virtual bool CompleteStringLiteral(JSON_Parser<unsigned short>::Token &);
				virtual unsigned short NextCharacter();
				virtual unsigned short PeekCharacter();
			};

			class _Array
			{
			protected:
				virtual void format(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
				virtual void format(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
			public:
				virtual array & as_array();
				virtual array const & as_array();
				virtual std::unique_ptr<_Value,std::default_delete<_Value> > _copy_value();
				virtual unsigned __int64 size();
				virtual value & index(unsigned __int64);
				virtual value::value_type type();
				virtual void serialize_impl(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
				virtual void serialize_impl(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
			};

			class _Boolean
			{
			protected:
				virtual void format(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
				virtual void format(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
			public:
				virtual bool as_bool();
				virtual std::unique_ptr<_Value,std::default_delete<_Value> > _copy_value();
				virtual value::value_type type();
			};

			struct _Null
			{
				virtual std::unique_ptr<_Value,std::default_delete<_Value> > _copy_value();
				virtual value::value_type type();
			};

			class _Number
			{
			protected:
				virtual void format(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
				virtual void format(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
			public:
				virtual bool is_double();
				virtual bool is_integer();
				virtual double as_double();
				virtual int as_integer();
				virtual number const & as_number();
				virtual std::unique_ptr<_Value,std::default_delete<_Value> > _copy_value();
				virtual value::value_type type();
			};

			class _Object
			{
				unsigned __int64 get_reserve_size();
				void format_impl<unsigned short>(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
			protected:
				virtual void format(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
				virtual void format(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
			public:
				virtual bool has_field(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
				virtual object & as_object();
				virtual object const & as_object();
				virtual std::unique_ptr<_Value,std::default_delete<_Value> > _copy_value();
				virtual unsigned __int64 size();
				virtual value & index(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
				virtual value::value_type type();
				virtual void serialize_impl(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
				virtual void serialize_impl(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
			};

			class _String
			{
			protected:
				virtual void format(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
				virtual void format(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
			public:
				virtual std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const & as_string();
				virtual std::unique_ptr<_Value,std::default_delete<_Value> > _copy_value();
				virtual value::value_type type();
				virtual void serialize_impl(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
				virtual void serialize_impl(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
			};

			class _Value
			{
			protected:
				virtual void format(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
				virtual void format(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
			public:
				virtual array & as_array();
				virtual array const & as_array();
				virtual bool as_bool();
				virtual bool has_field(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
				virtual bool is_double();
				virtual bool is_integer();
				virtual double as_double();
				virtual int as_integer();
				virtual number const & as_number();
				virtual object & as_object();
				virtual object const & as_object();
				virtual std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const & as_string();
				virtual std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > to_string();
				virtual unsigned __int64 size();
				virtual value & index(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
				virtual value & index(unsigned __int64);
				virtual value const & cnst_index(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
				virtual value const & cnst_index(unsigned __int64);
				virtual value get_element(unsigned __int64);
				virtual value get_field(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
				virtual value::value_type type();
				virtual void serialize_impl(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
				virtual void serialize_impl(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
				virtual ~_Value();
			};

			struct json_error_category_impl
			{
				virtual char const * name();
				virtual std::basic_string<char,std::char_traits<char>,std::allocator<char> > message(int);
			};

			bool g_keep_json_object_unsorted;
			json_error_category_impl const & details::json_error_category();
			void CreateException<JSON_Parser<unsigned short>::Token>(details::JSON_Parser<unsigned short>::Token const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
			void append_escape_string<char>(std::basic_string<char,std::char_traits<char>,std::allocator<char> > &,std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &);
			void append_escape_string<unsigned short>(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
			void format_string(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,std::basic_string<char,std::char_traits<char>,std::allocator<char> > &);
			void format_string(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &);
		};

		struct json_exception
		{
			json_exception(json_exception const &);
			json_exception(unsigned short const * const &);
			virtual char const * what();
			virtual ~json_exception();
		};

		class object
		{
			static bool compare_pairs(std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,value> const &,std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,value> const &);
			std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,value> > > > find_by_key(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
			std::_Vector_iterator<std::_Vector_val<std::_Simple_types<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,value> > > > find_insert_location(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
		};

		class value
		{
			value(std::unique_ptr<details::_Value,std::default_delete<details::_Value> >);
		public:
			static value parse(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
			static value parse(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,std::error_code &);
			value & at(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
			value & operator=(value const &);
			value();
			~value();
		};

	};

	class uri
	{
		static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > encode_impl(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,std::function<bool (int)> const &);
	public:
		static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > decode(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
		static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > encode_data_string(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
		static std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > encode_uri(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,uri::components::component);
		static std::map<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::less<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >,std::allocator<std::pair<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const ,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > > split_query(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
		uri & operator=(uri const &);
		uri resource();
		uri(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
		uri(unsigned short const *);
		~uri();
	};

	struct uri_builder
	{
		uri to_uri();
		uri_builder & append(uri const &);
		uri_builder & append_path(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,bool);
		uri_builder & append_query(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,bool);
		uri_builder & append_query<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,bool);
		uri_builder & set_fragment(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,bool);
		uri_builder & set_path(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,bool);
		uri_builder & set_query(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &,bool);
		~uri_builder();
	};

	struct uri_exception
	{
		uri_exception(std::basic_string<char,std::char_traits<char>,std::allocator<char> >);
		uri_exception(uri_exception const &);
		virtual char const * what();
		virtual ~uri_exception();
	};

	struct web_proxy
	{
		web_proxy(web_proxy const &);
		~web_proxy();
	};

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
		StoredFailureInfo(StoredFailureInfo const &);
		void SetFailureInfo(FailureInfo const &);
	};

	class TraceLoggingProvider
	{
		virtual bool NotifyFailure(FailureInfo const &);
	protected:
		virtual void Initialize();
		virtual void OnErrorReported(bool,FailureInfo const &);
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
			static void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
		};

		namespace in1diag3
		{
			long Return_GetLastError(void *,unsigned int,char const *);
			void FailFast_Unexpected(void *,unsigned int,char const *);
			void Return_Hr(void *,unsigned int,char const *,long);
			void Return_Hr_NoOriginate(void *,unsigned int,char const *,long);
			void _FailFastImmediate_Unexpected();
			void _FailFast_GetLastError(void *,unsigned int,char const *);
			void _Log_Hr(void *,unsigned int,char const *,long);
		};

		struct shared_buffer
		{
			bool create(void const *,unsigned __int64);
		};

		struct static_lazy<UsoUpdateTraceLogging>
		{
			UsoUpdateTraceLogging * get(void (*)());
		};

		bool (* g_pfnGetModuleInformation)(void *,unsigned int *,char *,unsigned __int64);
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
		long (* g_pfnRunFunctorWithExceptionFilter)(details::IFunctor &,details::IFunctorHost &,void *);
		long GetLastErrorFailHr();
		long GetLastErrorFailHr(void *,unsigned int,char const *,char const *,char const *,void *);
		long RecognizeCaughtExceptionFromCallback(unsigned short *,unsigned __int64);
		long ReportFailure_GetLastErrorHr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		long ResultFromCaughtExceptionInternal(unsigned short *,unsigned __int64,bool *);
		long RunFunctorWithExceptionFilter(details::IFunctor &,details::IFunctorHost &,void *);
		long StringCchPrintfA(char *,unsigned __int64,char const *,...);
		unsigned char (* g_pfnRtlDllShutdownInProgress)();
		unsigned char * WriteResultString<char const *>(unsigned char *,unsigned char *,char const *,char const * *);
		unsigned char * WriteResultString<unsigned short const *>(unsigned char *,unsigned char *,unsigned short const *,unsigned short const * *);
		unsigned char RtlDllShutdownInProgress();
		unsigned long (* g_pfnRtlNtStatusToDosErrorNoTeb)(long);
		unsigned long ReportFailure_GetLastError(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		unsigned long RtlNtStatusToDosErrorNoTeb(long);
		unsigned short * LogStringPrintf(unsigned short *,unsigned short const *,unsigned short const *,...);
		void (* g_pfnDebugBreak)();
		void (* g_pfnFailFastInLoaderCallout)();
		void (* g_pfnGetContextAndNotifyFailure)(FailureInfo *,char *,unsigned __int64);
		void (* g_pfnLoggingCallback)(FailureInfo const &);
		void (* g_pfnOriginateCallback)(FailureType,long);
		void (* g_pfnRethrow)();
		void (* g_pfnTelemetryCallback)(bool,FailureInfo const &);
		void (* g_pfnThrowResultException)(FailureInfo const &);
		void DebugBreak();
		void FailFastInLoaderCallout();
		void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
		void LogFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,bool,unsigned short *,unsigned __int64,char *,unsigned __int64,FailureInfo *);
		void ReportFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Hr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long);
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
			long CreateFromValueInternal(unsigned short const *,bool,unsigned __int64);
			static long GetValueFromSemaphore(void *,long *);
			static long TryGetValueInternal(unsigned short const *,bool,unsigned __int64 *,bool *);
		public:
			static long TryGetPointer(unsigned short const *,void * *);
			~SemaphoreValue();
		};

		struct ThreadLocalData
		{
			bool EnsureAllocated(bool);
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
			~ThreadLocalStorage<details::ThreadFailureCallbackHolder *>();
		};

		details_abi::ProcessLocalStorage<details_abi::ProcessLocalData> * g_pProcessLocalData;
		details_abi::ThreadLocalData * GetThreadLocalDataCache(bool);
	};

	bool (* g_pfnIsDebuggerPresent)();
	bool g_fBreakOnFailure;
	bool g_fIsDebuggerPresent;
	bool g_fResultOutputDebugString;
	bool g_fResultThrowPlatformException;
	long (* g_pfnResultFromCaughtException)();
	long GetFailureLogString(unsigned short *,unsigned __int64,wil::FailureInfo const &);
	void SetLastError(wil::FailureInfo const &);
};

ATL::CComModule _Module;
HINSTANCE__ * g_hinstDmCmnUtils;
HINSTANCE__ * g_hinstDmIso8601Utils;
HINSTANCE__ * g_wil_details_ntdllModuleHandle;
Microsoft::WRL::Wrappers::CriticalSection PDCLock;
TelemetryManager g_TelemetryManager;
_GUID const FOLDERID_WP_SharedData;
_GUID const GUID_OTAGamingDriver;
_GUID const GUID_OTAOS;
_GUID const GUID_OTAUserInstallable;
_GUID const GUID_OTCOS;
_GUID const MicrosoftWindowsUpdateOrchestratorControlGuid;
_GUID const USO_SERVICE_MU;
_variant_t vtMissing;
char * c_szLegacyUpdateStoreHashTagEnd;
char * c_szLegacyUpdateStoreHashTagStart;
char * c_szUpdateStoreHashTagEnd;
char * c_szUpdateStoreHashTagStart;
char * gc_aszTemplateStoreXml;
int IsEmptyOrNullString(unsigned short const *);
int IsFlightPendingCommit();
int IsInstallAtShutdown();
int IsUsoServiceRunning();
int SafeCompareString(unsigned short const *,unsigned short const *);
int powerPDCCount;
long AppendString(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &,unsigned short const * const);
long AssignString(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > const &);
long AssignString(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &,unsigned short const * const);
long CheckAndClearSleepAtRestart(bool &);
long CoAllocArray<unsigned short *>(unsigned long,unsigned __int64,unsigned short * * *);
long CombineStringsWithSeparator(unsigned short const *,unsigned short const *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > &,unsigned __int64,unsigned short);
long ConnectCallback(tagComCallData *);
long CreateAndRegisterClassFactory();
long CreateInstallAtShutdownKey();
long CreateRebootRequiredKey();
long DeleteRebootRequiredKey();
long DisconnectCallback(tagComCallData *);
long DuplicateUpdateFileInfo(_LEGACY_UPDATE_FILE_INFO const &,_LEGACY_UPDATE_FILE_INFO *);
long DuplicateUpdateInfo(_LEGACY_UPDATE_INFO const &,_LEGACY_UPDATE_INFO *);
long EncodeBase64W(unsigned char const *,int,unsigned short * *);
long ExtractBooleanFromNode(XmlReader *,int *);
long ExtractStringFromNode(XmlReader *,unsigned short * *);
long GetUpdateBundlesToReport(LegacyUpdateStore &,std::list<_LEGACY_UPDATE_INFO,std::allocator<_LEGACY_UPDATE_INFO> > &);
long GetWUDeviceID(_GUID *);
long GuidToBSTR(unsigned short * *,_GUID const *);
long GuidToString(unsigned short *,unsigned __int64,_GUID const *);
long InitializeService(void *);
long MarkInstallAtShutdown();
long OtaUpdatesPerSkuGetUpdateResults(_TlgProvider_t const *,long *,bool *);
long ReportUpdateFromWindowsPhone81IfNeeded();
long RevokeClassFactory();
long ScheduleMigration();
long SetFlightPendingCommit(int);
long SetPostUpdateUXCompleteFlag(bool);
long SetSleepAtRestartKey(unsigned long);
long StringCbLengthW(unsigned short const *,unsigned __int64,unsigned __int64 *);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long StringCchVPrintfW(unsigned short *,unsigned __int64,unsigned short const *,char *);
long StringToGuid(unsigned short const *,_GUID *);
long StringToWString(std::basic_string<char,std::char_traits<char>,std::allocator<char> > const &,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
long TroubleshootingPerSkuCollectFiles(unsigned long,unsigned short *,unsigned long,_TlgProvider_t const *);
long UninitializeService();
long UpdateServiceStatus(unsigned long,unsigned long,unsigned long);
std::array<signed char,128> _hexval;
std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > _to_base64(unsigned char const *,unsigned __int64);
unsigned long HandlePreShutdown(void *);
unsigned short const * const RuntimeClass_Windows_Internal_Flighting_ClientAttributes;
unsigned short const * const gc_szBrokerArgEngagedRebootReminder;
unsigned short const * const gc_szBrokerArgForcedReboot;
unsigned short const * const gc_szBrokerArgForcedRebootReminder;
unsigned short const * const gc_szBrokerArgForcedRebootRetry;
unsigned short const * const gc_szBrokerArgLogonRebootResults;
unsigned short const * const gc_szBrokerArgReboot;
unsigned short const * const gc_szBrokerArgRebootDialog;
unsigned short const * const gc_szBrokerArgRebootReminder;
unsigned short const * const gc_szBrokerLogonUpdateResultsSchedule;
unsigned short const * const gc_szBrokerRebootSchedule;
unsigned short const * const gc_szIconArgNotifyTrayIcon;
unsigned short const * const gc_szNotificationUpdateRebootImminentSchedule;
unsigned short const * const gc_szNotificationUpdateRebootReminderSchedule;
unsigned short const * const gc_szNotificationUpdateRebootSchedule;
unsigned short const * const gc_szUxArgReboot;
unsigned short const * const sc_szLegacyUpdateTransitionState;
void * operator new(unsigned __int64);
void * operator new(unsigned __int64,std::nothrow_t const &);
void * operator new[](unsigned __int64);
void * operator new[](unsigned __int64,std::nothrow_t const &);
void * powerPDCHandle;
void DumpRegByte(_iobuf *,unsigned short const *,unsigned long,unsigned char const *,unsigned long);
void DumpRegMultiSz(_iobuf *,unsigned short const *,unsigned short const *,unsigned long);
void DumpRegQword(_iobuf *,unsigned short const *,_ULARGE_INTEGER);
void EnableUpdateLogging();
void FlushLog();
void FreeUpdateInfoStruct(_LEGACY_UPDATE_INFO const &);
void InitiatePreShutdown();
void InitiateStop();
void ServiceMain(unsigned long,unsigned short * * const);
void SvchostPushServiceGlobals(_SVCHOST_GLOBAL_DATA *);
void UpdateServiceStartType(unsigned long);
void UsoLogCommitFailedTelemetryEvent(long);
void UsoLogDeferReasonTelemetryEvent(unsigned long const &,unsigned long const &,long const &);
void UsoLogDisplayNeededReasonTelemetryEvent(EventScenario,UpdateScenarioType,_GUID,long,unsigned short const *,char const *,bool,tagUXRebootState);
void UsoLogFlightInapplicableTelemetryEvent(_GUID,UpdateScenarioType,long,long,char const *,bool,unsigned short const *);
void UsoLogGameModeReasonTelemetryEvent(unsigned short const *,long const &);
void UsoLogInitiatingRebootTelemetryEvent(_GUID,UpdateScenarioType,long,char const *,unsigned short const *,bool,bool,tagUXRebootState);
void UsoLogInstallCommitFailedTelemetryEvent(EventScenario,UpdateScenarioType,_GUID,long,long,int,unsigned long,char const *,unsigned short const *,bool,bool,tagUXRebootState);
void UsoLogInstallRebootDeferredTelemetryEvent(EventScenario,UpdateScenarioType,unsigned long,int,unsigned long,char const *,bool,tagUXRebootState);
void UsoLogInstallRebootStartedTelemetryEvent(EventScenario,UpdateScenarioType,_GUID,long,int,unsigned long,int,unsigned long,char const *,unsigned short const *,bool,bool,tagUXRebootState);
void UsoLogLusPolicySetEvent(unsigned short const *,unsigned short const *,unsigned long);
void UsoLogPauseStartTelemetryEvent(_SYSTEMTIME,long,long);
void UsoLogPauseStopTelemetryEvent(unsigned long,long);
void UsoLogPostInstallTelemetryEvent(EventScenario,_GUID,long,long,_GUID,unsigned long);
void UsoLogPowerMenuOptionsChangedEvent(unsigned long,unsigned long,unsigned long);
void UsoLogPreShutdownStartTelemetryEvent();
void UsoLogRebootFailedTelemetryEvent(_GUID,UpdateScenarioType,long,long,unsigned long,unsigned long,char const *,unsigned short const *,bool,tagUXRebootState);
void UsoLogRebootTaskRestoredTelemetryEvent();
void UsoLogRefreshPolicyCacheValuesTelemetryEvent(unsigned short const *,long);
void UsoLogRefreshSettingsTelemetryEvent(unsigned short const *,long);
void UsoLogStoreDiagnosticsTelemetryEvent(USODiagnosticsFields const *);
void UsoLogSystemNeededReasonTelemetryEvent(EventScenario,UpdateScenarioType,_GUID,long,unsigned short const *,char const *,bool,tagUXRebootState);
void UsoLogTestIdTelemetryEvent();
void UsoLogTrace(unsigned short const *,...);
void UsoLogUpdateCacheFlushFailed(long);
void UsoLogUpdateCacheLoadFailed(long);
void UsoLogUsoSessionTelemetryEvent(EventScenario,UpdateScenarioType,long,long,_GUID,_GUID,int);
void __ArrayUnwind(void *,unsigned __int64,int,void (*)(void *));
void _com_issue_error(long);
void _com_raise_error(long,IErrorInfo *);
void operator delete(void *);
void operator delete(void *,std::nothrow_t const &);
void operator delete(void *,void *);
void operator delete[](void *);
