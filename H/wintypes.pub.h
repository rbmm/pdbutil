class <lambda_0ae89f7ca77040da3af7dd229dfecfb4>
{
	static long <lambda_invoker_cdecl>(__WIL__WNF_STATE_NAME,unsigned long,__WIL__WNF_TYPE_ID *,void *,void const *,unsigned long);
};

class <lambda_152aa9d2a3a0648fa2fa7fcef514b376>
{
	static void <lambda_invoker_cdecl>(void *);
};

class <lambda_1ad7ecfab602a777ecf020873216a663>
{
	static void <lambda_invoker_cdecl>(void *);
};

class <lambda_5f1dd388c03885d19ee806198d2ac5ef>
{
	static int <lambda_invoker_cdecl>(_RTL_RUN_ONCE *,void *,void * *);
};

class <lambda_b05be2b7f58bb98d9a071a78273bf63b>
{
	static void <lambda_invoker_cdecl>();
};

struct <lambda_b70241e9b5ebaad244db3e52d52cab17>
{
	void operator()(unsigned short * const,unsigned short const * const,unsigned __int64,unsigned __int64,unsigned short);
};

namespace ATL
{
	struct CComAllocator
	{
		static void * Allocate(unsigned __int64);
	};

	struct CComHeapPtr<HSTRING__ *>
	{
		~CComHeapPtr<HSTRING__ *>();
	};

	struct CComHeapPtr<unsigned char>
	{
		~CComHeapPtr<unsigned char>();
	};

	struct CComPtr<IMetaDataDispenserEx>
	{
		~CComPtr<IMetaDataDispenserEx>();
	};

	struct CComPtr<IMetaDataImport2>
	{
		~CComPtr<IMetaDataImport2>();
	};

	struct CHeapPtr<wchar_t,CCRTAllocator>
	{
		bool Allocate(unsigned __int64);
		~CHeapPtr<wchar_t,CCRTAllocator>();
	};

	struct CHeapPtrBase<HSTRING__ *,CComAllocator>
	{
		bool AllocateBytes(unsigned __int64);
	};

	struct CSimpleArray<ObjectLibrary::OpaqueString,CSimpleArrayEqualHelper<ObjectLibrary::OpaqueString> >
	{
		ObjectLibrary::OpaqueString & operator[](int);
		ObjectLibrary::OpaqueString const & operator[](int);
		int Add(ObjectLibrary::OpaqueString const &);
		~CSimpleArray<ObjectLibrary::OpaqueString,CSimpleArrayEqualHelper<ObjectLibrary::OpaqueString> >();
	};

	struct CSimpleArray<int,CSimpleArrayEqualHelper<int> >
	{
		int & operator[](int);
	};

	void _AtlRaiseException(unsigned long,unsigned long);
};

struct ApiInformation
{
	static TrustLevel InternalGetTrustLevelStatic();
	static long CheckApiContractVersion(unsigned short const *,unsigned short,unsigned short,bool,unsigned char *);
	static wchar_t const * InternalGetRuntimeClassNameStatic();
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long IsApiContractPresentByMajor(HSTRING__ *,unsigned short,unsigned char *);
	virtual long IsApiContractPresentByMajorAndMinor(HSTRING__ *,unsigned short,unsigned short,unsigned char *);
	virtual long IsEnumNamedValuePresent(HSTRING__ *,HSTRING__ *,unsigned char *);
	virtual long IsEventPresent(HSTRING__ *,HSTRING__ *,unsigned char *);
	virtual long IsMethodPresent(HSTRING__ *,HSTRING__ *,unsigned char *);
	virtual long IsMethodPresentWithArity(HSTRING__ *,HSTRING__ *,unsigned int,unsigned char *);
	virtual long IsPropertyPresent(HSTRING__ *,HSTRING__ *,unsigned char *);
	virtual long IsReadOnlyPropertyPresent(HSTRING__ *,HSTRING__ *,unsigned char *);
	virtual long IsTypePresent(HSTRING__ *,unsigned char *);
	virtual long IsWriteablePropertyPresent(HSTRING__ *,HSTRING__ *,unsigned char *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct AutoStubBias<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool> >
{
	~AutoStubBias<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool> >();
};

struct AutoStubBias<Windows::Foundation::IAsyncOperation<unsigned int>,Windows::Foundation::IAsyncOperationCompletedHandler<unsigned int> >
{
	~AutoStubBias<Windows::Foundation::IAsyncOperation<unsigned int>,Windows::Foundation::IAsyncOperationCompletedHandler<unsigned int> >();
};

struct AutoStubBias<Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer *,unsigned int>,Windows::Foundation::IAsyncOperationProgressHandler<Windows::Storage::Streams::IBuffer *,unsigned int> >
{
	AutoStubBias<Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer *,unsigned int>,Windows::Foundation::IAsyncOperationProgressHandler<Windows::Storage::Streams::IBuffer *,unsigned int> >(IRpcOptions *,Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer *,unsigned int> *,Windows::Foundation::IAsyncOperationProgressHandler<Windows::Storage::Streams::IBuffer *,unsigned int> *);
	~AutoStubBias<Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer *,unsigned int>,Windows::Foundation::IAsyncOperationProgressHandler<Windows::Storage::Streams::IBuffer *,unsigned int> >();
};

struct AutoStubBias<Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer *,unsigned int>,Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Storage::Streams::IBuffer *,unsigned int> >
{
	AutoStubBias<Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer *,unsigned int>,Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Storage::Streams::IBuffer *,unsigned int> >(IRpcOptions *,Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer *,unsigned int> *,Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Storage::Streams::IBuffer *,unsigned int> *);
	~AutoStubBias<Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer *,unsigned int>,Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Storage::Streams::IBuffer *,unsigned int> >();
};

class CBufferMarshaler
{
	static long _IStream_Write(IStream *,void const *,unsigned long);
	static void * _inModulePointer();
public:
	CBufferMarshaler();
	virtual long DisconnectObject(unsigned long);
	virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
	virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
	virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
	virtual long ReleaseMarshalData(IStream *);
	virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
};

class CBufferProxy
{
	static long _CreateBufferFromMarshalData(IStream *,_GUID const &,void * *);
	static long _IStream_Read(IStream *,void *,unsigned long);
public:
	CBufferProxy();
	virtual long DisconnectObject(unsigned long);
	virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
	virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
	virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
	virtual long ReleaseMarshalData(IStream *);
	virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
};

class CEventEnumerator
{
protected:
	virtual long _Enumerate(void * *,unsigned int *,unsigned long,unsigned long *);
public:
	virtual ~CEventEnumerator();
};

class CMetadataEnumeratorT<unsigned int,IMetaDataImport2>
{
	struct iterator
	{
		iterator & operator++();
	};

protected:
	bool Enumerate(void * *,unsigned int *,unsigned long,unsigned long *);
public:
	virtual ~CMetadataEnumeratorT<unsigned int,IMetaDataImport2>();
};

class CMethodEnumerator
{
protected:
	virtual long _Enumerate(void * *,unsigned int *,unsigned long,unsigned long *);
public:
	virtual ~CMethodEnumerator();
};

class CMethodParameterEnumerator
{
protected:
	virtual long _Enumerate(void * *,unsigned int *,unsigned long,unsigned long *);
public:
	virtual ~CMethodParameterEnumerator();
};

class CPropertyEnumerator
{
protected:
	virtual long _Enumerate(void * *,unsigned int *,unsigned long,unsigned long *);
public:
	virtual ~CPropertyEnumerator();
};

class CTypeFieldEnumerator
{
protected:
	virtual long _Enumerate(void * *,unsigned int *,unsigned long,unsigned long *);
public:
	virtual ~CTypeFieldEnumerator();
};

struct ComBaseProvider
{
	static void FallbackTelemetryCallback(bool,wil::FailureInfo const &);
};

namespace Details
{
	bool CheckWellKnownContract(unsigned short const *,unsigned short,unsigned short,bool,bool *);
	bool IsContractVersionSupported(unsigned short,unsigned short,unsigned int,bool);
	long IsPropertyPresent(HSTRING__ *,HSTRING__ *,Details::ApiInformationPropertyType,unsigned char *);
};

class FileExistenceChecksCache
{
	FileExistenceChecksCache();
	static FileExistenceChecksCache * s_pFileExistenceChecksCacheInstance;
	static _RTL_RUN_ONCE s_initOnce;
	static int _ConstructFileExistenceChecksCacheIfNecessary(_RTL_RUN_ONCE *,void *,void * *);
public:
	bool DoesFileExist(unsigned short const *);
};

class GUIDParser
{
	static bool IsHexDigit(wchar_t);
	static long TryParseGUIDWithDashes(wchar_t const *,_GUID *);
	static long TryParseGUIDWithHexFormat(wchar_t const *,_GUID *);
	static long TryParseGUIDWithNoStyle(wchar_t const *,_GUID *);
	static long TryParseHexValue(wchar_t const *,int,int *,unsigned long *);
	static long TryParseHexValueExact(wchar_t const *,int,unsigned long *);
	static void EatAllWhitespace(wchar_t *,unsigned __int64);
public:
	static long TryGUIDToString(_GUID const *,wchar_t *,unsigned __int64);
	static long TryParseGUID(wchar_t const *,_GUID *);
};

struct IInspectable
{
	IInspectable();
};

struct InMemoryPropertyStoreActivationFactory<Windows::Foundation::Collections::InMemoryPropertyStore>
{
	virtual long ActivateInstance(IInspectable * *);
};

struct InMemoryPropertyStoreActivationFactory<Windows::Foundation::Collections::StringStore>
{
	virtual long ActivateInstance(IInspectable * *);
};

struct InMemoryPropertyStoreActivationFactory<Windows::Foundation::Collections::ValueSet>
{
	virtual long ActivateInstance(IInspectable * *);
};

struct MapElement
{
	MapElement(unsigned short const *,IMetaDataImport2 *);
	~MapElement();
};

struct MarshalByValueValueSet
{
	MarshalByValueValueSet();
	long RuntimeClassInitialize();
	virtual long Clear();
	virtual long DisconnectObject(unsigned long);
	virtual long First(Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *> * *);
	virtual long GetIids(unsigned long *,_GUID * *);
	virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
	virtual long GetRuntimeClassName(HSTRING__ * *);
	virtual long GetTrustLevel(TrustLevel *);
	virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
	virtual long GetView(Windows::Foundation::Collections::IMapView<HSTRING__ *,IInspectable *> * *);
	virtual long HasKey(HSTRING__ *,unsigned char *);
	virtual long Insert(HSTRING__ *,IInspectable *,unsigned char *);
	virtual long Lookup(HSTRING__ *,IInspectable * *);
	virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ReleaseMarshalData(IStream *);
	virtual long Remove(HSTRING__ *);
	virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
	virtual long add_MapChanged(Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,IInspectable *> *,EventRegistrationToken *);
	virtual long get_Mode(Windows::Foundation::Collections::Detail::MarshalMode *);
	virtual long get_Size(unsigned int *);
	virtual long put_Mode(Windows::Foundation::Collections::Detail::MarshalMode);
	virtual long remove_MapChanged(EventRegistrationToken);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class MetaDataImportersLRUCache
{
	MetaDataImportersLRUCache();
	bool _IsFilePathCached(unsigned short const *);
	long _AddNewFilePathToList(unsigned short const *);
	long _GetNewMetaDataImporter(IMetaDataDispenserEx *,unsigned short const *,IMetaDataImport2 * *);
	long _RemoveLeastRecentlyUsedItemIfListIsFull();
	static MetaDataImportersLRUCache * s_pMetaDataImportersLRUCacheInstance;
	static _RTL_RUN_ONCE s_initOnce;
	static int _ConstructLRUCacheIfNecessary(_RTL_RUN_ONCE *,void *,void * *);
public:
	long GetMetaDataImporter(IMetaDataDispenserEx *,unsigned short const *,IMetaDataImport2 * *);
};

class MetadataFilesHashMap
{
	MapElement * FindElement(unsigned short const *);
	static _RTL_GENERIC_COMPARE_RESULTS GenericMapCompare(_RTL_AVL_TABLE *,void *,void *);
	static void * GenericMapAllocate(_RTL_AVL_TABLE *,unsigned long);
	static void GenericMapFree(_RTL_AVL_TABLE *,void *);
	void RemoveElement(MapElement *);
public:
	long Insert(unsigned short const *,IMetaDataImport2 *);
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

		struct ActivationFactory<Implements<FtmBase,Windows::Foundation::IDeferralFactory>,Details::Nil,Details::Nil,0>
		{
			virtual long ActivateInstance(IInspectable * *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct ActivationFactory<Implements<FtmBase,Windows::Foundation::IMemoryBufferFactory>,Details::Nil,Details::Nil,0>
		{
			virtual long ActivateInstance(IInspectable * *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct ActivationFactory<Implements<FtmBase,Windows::Foundation::Metadata::IApiInformationStatics>,Details::Nil,Details::Nil,0>
		{
			virtual long ActivateInstance(IInspectable * *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct ActivationFactory<Implements<FtmBase,Windows::Storage::Streams::IBufferFactory>,Windows::Storage::Streams::IBufferStatics,Details::Nil,0>
		{
			virtual long ActivateInstance(IInspectable * *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct ActivationFactory<Implements<FtmBase,Windows::Storage::Streams::IDataReaderFactory>,Windows::Storage::Streams::IDataReaderStatics,Details::Nil,0>
		{
			virtual long ActivateInstance(IInspectable * *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct ActivationFactory<Implements<FtmBase,Windows::Storage::Streams::IDataWriterFactory>,IActivationFactory,Details::Nil,0>
		{
			virtual long ActivateInstance(IInspectable * *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct ActivationFactory<Implements<RuntimeClassFlags<3>,Windows::Foundation::IPropertyValueStatics,CloakedIid<IMarshal>,CloakedIid<IAgileObject> >,Details::Nil,Details::Nil,0>
		{
			virtual long ActivateInstance(IInspectable * *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct AgileActivationFactory<Windows::Foundation::IDeferralFactory,Details::Nil,Details::Nil,0>
		{
			AgileActivationFactory<Windows::Foundation::IDeferralFactory,Details::Nil,Details::Nil,0>();
		};

		struct AgileActivationFactory<Windows::Foundation::IMemoryBufferFactory,Details::Nil,Details::Nil,0>
		{
			AgileActivationFactory<Windows::Foundation::IMemoryBufferFactory,Details::Nil,Details::Nil,0>();
		};

		struct AgileActivationFactory<Windows::Foundation::Metadata::IApiInformationStatics,Details::Nil,Details::Nil,0>
		{
			AgileActivationFactory<Windows::Foundation::Metadata::IApiInformationStatics,Details::Nil,Details::Nil,0>();
		};

		struct AgileActivationFactory<Windows::Storage::Streams::IBufferFactory,Windows::Storage::Streams::IBufferStatics,Details::Nil,0>
		{
			AgileActivationFactory<Windows::Storage::Streams::IBufferFactory,Windows::Storage::Streams::IBufferStatics,Details::Nil,0>();
		};

		struct AgileActivationFactory<Windows::Storage::Streams::IDataReaderFactory,Windows::Storage::Streams::IDataReaderStatics,Details::Nil,0>
		{
			AgileActivationFactory<Windows::Storage::Streams::IDataReaderFactory,Windows::Storage::Streams::IDataReaderStatics,Details::Nil,0>();
		};

		struct AgileActivationFactory<Windows::Storage::Streams::IDataWriterFactory,IActivationFactory,Details::Nil,0>
		{
			AgileActivationFactory<Windows::Storage::Streams::IDataWriterFactory,IActivationFactory,Details::Nil,0>();
		};

		struct AgileEventSource<Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,HSTRING__ *>,InvokeModeOptions<-2> >
		{
			long Add(Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,HSTRING__ *> *,EventRegistrationToken *);
		};

		struct ClassFactory<Details::Nil,Details::Nil,Details::Nil,0>
		{
			virtual long LockServer(int);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct ComPtr<Details::EventTargetArray>
		{
			ComPtr<Details::EventTargetArray> & operator=(ComPtr<Details::EventTargetArray> const &);
			ComPtr<Details::EventTargetArray> & operator=(Details::EventTargetArray *);
			void Attach(Details::EventTargetArray *);
			~ComPtr<Details::EventTargetArray>();
		};

		class ComPtr<IActivationFactory>
		{
		protected:
			unsigned long InternalRelease();
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

		class ComPtr<IAsyncInfo>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			long As<Windows::Foundation::IAsyncOperation<bool> >(Details::ComPtrRef<ComPtr<Windows::Foundation::IAsyncOperation<bool> > >);
			long As<Windows::Foundation::IAsyncOperation<unsigned int> >(Details::ComPtrRef<ComPtr<Windows::Foundation::IAsyncOperation<unsigned int> > >);
			long As<Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer *,unsigned int> >(Details::ComPtrRef<ComPtr<Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer *,unsigned int> > >);
			~ComPtr<IAsyncInfo>();
		};

		class ComPtr<IGlobalInterfaceTable>
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
			long As<IAsyncInfo>(Details::ComPtrRef<ComPtr<IAsyncInfo> >);
			long As<Windows::Foundation::Collections::IPropertySet>(Details::ComPtrRef<ComPtr<Windows::Foundation::Collections::IPropertySet> >);
			~ComPtr<IInspectable>();
		};

		class ComPtr<IMarshal>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IMetaDataImport2>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IMetaDataImport2>();
		};

		struct ComPtr<IRpcOptions>
		{
			~ComPtr<IRpcOptions>();
		};

		class ComPtr<IRuntimeBroker>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IUnknown>
		{
		protected:
			unsigned long InternalRelease();
		public:
			ComPtr<IUnknown>();
			long As<Windows::Foundation::IPropertyValue>(Details::ComPtrRef<ComPtr<Windows::Foundation::IPropertyValue> >);
			~ComPtr<IUnknown>();
		};

		struct ComPtr<MarshalByValueValueSet>
		{
			~ComPtr<MarshalByValueValueSet>();
		};

		class ComPtr<Windows::Foundation::Collections::Detail::IPropertySetSerializer>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::Collections::Detail::IPropertySetSerializer>();
		};

		class ComPtr<Windows::Foundation::Collections::Detail::IStreamSerializerForMarshaling>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::Collections::Detail::IStreamSerializerForMarshaling>();
		};

		class ComPtr<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,HSTRING__ *> *> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,HSTRING__ *> *> >();
		};

		class ComPtr<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *> >();
		};

		class ComPtr<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,unsigned char> *> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,unsigned char> *> >();
		};

		class ComPtr<Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,HSTRING__ *> *> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,HSTRING__ *> *> >();
		};

		struct ComPtr<Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *> >
		{
			ComPtr<Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *> > & operator=(Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *> *);
			~ComPtr<Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *> >();
		};

		class ComPtr<Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,unsigned char> *> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,unsigned char> *> >();
		};

		class ComPtr<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,HSTRING__ *> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,HSTRING__ *> >();
		};

		class ComPtr<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> >
		{
		protected:
			void InternalAddRef();
		public:
			~ComPtr<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> >();
		};

		class ComPtr<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,unsigned char> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,unsigned char> >();
		};

		class ComPtr<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> >();
		};

		class ComPtr<Windows::Foundation::Collections::IMapView<HSTRING__ *,HSTRING__ *> >
		{
		protected:
			void InternalAddRef();
		};

		class ComPtr<Windows::Foundation::Collections::IMapView<HSTRING__ *,IInspectable *> >
		{
		protected:
			void InternalAddRef();
		};

		class ComPtr<Windows::Foundation::Collections::IMapView<HSTRING__ *,unsigned char> >
		{
		protected:
			void InternalAddRef();
		};

		class ComPtr<Windows::Foundation::Collections::IPropertySet>
		{
		protected:
			unsigned long InternalRelease();
		public:
			long As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> >(Details::ComPtrRef<ComPtr<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> > >);
			~ComPtr<Windows::Foundation::Collections::IPropertySet>();
		};

		class ComPtr<Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> > >
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,0,0> > >
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> > >
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned char>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > > >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned char>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > > >();
		};

		class ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> > >
		{
		protected:
			unsigned long InternalRelease();
		public:
			ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> > > & operator=(ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> > > const &);
			void Attach(Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> > *);
			~ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> > >();
		};

		class ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::Chunk>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::Chunk>();
		};

		struct ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::ChunkView>
		{
			ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::ChunkView> & operator=(ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::ChunkView> const &);
			~ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::ChunkView>();
		};

		class ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,0,0> > >
		{
		protected:
			unsigned long InternalRelease();
		public:
			ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,0,0> > > & operator=(ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,0,0> > > const &);
			void Attach(Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,0,0> > *);
			~ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,0,0> > >();
		};

		class ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,0,0> >::Chunk>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,0,0> >::Chunk>();
		};

		struct ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,0,0> >::ChunkView>
		{
			ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,0,0> >::ChunkView> & operator=(ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,0,0> >::ChunkView> const &);
			~ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,0,0> >::ChunkView>();
		};

		class ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> > >
		{
		protected:
			unsigned long InternalRelease();
		public:
			ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> > > & operator=(ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> > > const &);
			void Attach(Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> > *);
			~ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> > >();
		};

		class ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::Chunk>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::Chunk>();
		};

		struct ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::ChunkView>
		{
			ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::ChunkView> & operator=(ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::ChunkView> const &);
			~ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::ChunkView>();
		};

		class ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned char>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > > >
		{
		protected:
			unsigned long InternalRelease();
		public:
			ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned char>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > > > & operator=(ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned char>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > > > const &);
			void Attach(Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned char>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > > *);
			~ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned char>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > > >();
		};

		class ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned char>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > >::Chunk>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned char>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > >::Chunk>();
		};

		struct ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned char>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > >::ChunkView>
		{
			ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned char>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > >::ChunkView> & operator=(ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned char>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > >::ChunkView> const &);
			~ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned char>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > >::ChunkView>();
		};

		class ComPtr<Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1> >
		{
		protected:
			unsigned long InternalRelease();
		};

		struct ComPtr<Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,0> >
		{
			~ComPtr<Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,0> >();
		};

		class ComPtr<Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,1> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,1> >();
		};

		class ComPtr<Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned char>,0> >
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,HSTRING__ *> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,HSTRING__ *> >();
		};

		class ComPtr<Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,IInspectable *> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,IInspectable *> >();
		};

		struct ComPtr<Windows::Foundation::Collections::ValueSet>
		{
			long As<Windows::Foundation::Collections::IPropertySet>(Details::ComPtrRef<ComPtr<Windows::Foundation::Collections::IPropertySet> >);
			~ComPtr<Windows::Foundation::Collections::ValueSet>();
		};

		struct ComPtr<Windows::Foundation::Diagnostics::CRuntimeBrokerErrorSettings>
		{
			~ComPtr<Windows::Foundation::Diagnostics::CRuntimeBrokerErrorSettings>();
		};

		class ComPtr<Windows::Foundation::IAsyncOperation<bool> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::IAsyncOperation<bool> >();
		};

		class ComPtr<Windows::Foundation::IAsyncOperation<unsigned int> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::IAsyncOperation<unsigned int> >();
		};

		class ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<bool> >
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			~ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<bool> >();
		};

		class ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<unsigned int> >
		{
		protected:
			void InternalAddRef();
		public:
			~ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<unsigned int> >();
		};

		class ComPtr<Windows::Foundation::IAsyncOperationProgressHandler<Windows::Storage::Streams::IBuffer *,unsigned int> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::IAsyncOperationProgressHandler<Windows::Storage::Streams::IBuffer *,unsigned int> >();
		};

		struct ComPtr<Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer *,unsigned int> >
		{
			long As<IInspectable>(Details::ComPtrRef<ComPtr<IInspectable> >);
			~ComPtr<Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer *,unsigned int> >();
		};

		class ComPtr<Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int> >();
		};

		class ComPtr<Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Storage::Streams::IBuffer *,unsigned int> >
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			~ComPtr<Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Storage::Streams::IBuffer *,unsigned int> >();
		};

		struct ComPtr<Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<unsigned int,unsigned int> >
		{
			~ComPtr<Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<unsigned int,unsigned int> >();
		};

		class ComPtr<Windows::Foundation::IMemoryBufferByteAccess>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Foundation::IMemoryBufferReference>
		{
		protected:
			unsigned long InternalRelease();
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

		class ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Foundation::IMemoryBufferReference *,IInspectable *> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::ITypedEventHandler<Windows::Foundation::IMemoryBufferReference *,IInspectable *> >();
		};

		struct ComPtr<Windows::Foundation::MemoryBuffer>
		{
			void Attach(Windows::Foundation::MemoryBuffer *);
		};

		struct ComPtr<Windows::Foundation::ValueFactory>
		{
			void Attach(Windows::Foundation::ValueFactory *);
		};

		struct ComPtr<Windows::Internal::Detail::ContinuationCallback<Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer *,unsigned int>,Windows::Storage::Streams::DataReader::StreamReadContinuation> >
		{
			~ComPtr<Windows::Internal::Detail::ContinuationCallback<Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer *,unsigned int>,Windows::Storage::Streams::DataReader::StreamReadContinuation> >();
		};

		struct ComPtr<Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,HSTRING__ *>,Windows::Internal::GitPtr,2> >
		{
			~ComPtr<Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,HSTRING__ *>,Windows::Internal::GitPtr,2> >();
		};

		struct ComPtr<Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,IInspectable *>,Windows::Internal::GitPtr,2> >
		{
			~ComPtr<Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,IInspectable *>,Windows::Internal::GitPtr,2> >();
		};

		struct ComPtr<Windows::Internal::PutBackInputStream>
		{
			~ComPtr<Windows::Internal::PutBackInputStream>();
		};

		struct ComPtr<Windows::Storage::Streams::DataReader>
		{
			~ComPtr<Windows::Storage::Streams::DataReader>();
		};

		struct ComPtr<Windows::Storage::Streams::DataWriter>
		{
			~ComPtr<Windows::Storage::Streams::DataWriter>();
		};

		class ComPtr<Windows::Storage::Streams::IBuffer>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<Windows::Storage::Streams::IBuffer> & operator=(Windows::Storage::Streams::IBuffer *);
			long As<Windows::Storage::Streams::IBufferByteAccess>(Details::ComPtrRef<ComPtr<Windows::Storage::Streams::IBufferByteAccess> >);
			~ComPtr<Windows::Storage::Streams::IBuffer>();
		};

		class ComPtr<Windows::Storage::Streams::IBufferByteAccess>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Storage::Streams::IBufferByteAccess>();
		};

		class ComPtr<Windows::Storage::Streams::IBufferFactory>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Storage::Streams::IDataReader>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Storage::Streams::IDataReader>();
		};

		class ComPtr<Windows::Storage::Streams::IDataReaderFactory>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Storage::Streams::IDataReaderFactory>();
		};

		class ComPtr<Windows::Storage::Streams::IDataReaderStatics>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Storage::Streams::IDataReaderStatics>();
		};

		class ComPtr<Windows::Storage::Streams::IDataWriter>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Storage::Streams::IDataWriter>();
		};

		class ComPtr<Windows::Storage::Streams::IInputStream>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			long As<Windows::Foundation::IClosable>(Details::ComPtrRef<ComPtr<Windows::Foundation::IClosable> >);
			~ComPtr<Windows::Storage::Streams::IInputStream>();
		};

		class ComPtr<Windows::Storage::Streams::IOutputStream>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Storage::Streams::IOutputStream>();
		};

		class ComPtr<Windows::Storage::Streams::IPutBackInputStream>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Storage::Streams::IPutBackInputStream>();
		};

		class ComPtr<Windows::Storage::Streams::IRandomAccessStream>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Storage::Streams::IRandomAccessStream>();
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

			struct EventTargetArray
			{
				EventTargetArray();
				long RuntimeClassInitialize(unsigned __int64);
				void AddTail(IUnknown *,void *);
			};

			class ImplementsHelper<RuntimeClassFlags<13>,0,IActivationFactory,Implements<FtmBase,Windows::Foundation::IDeferralFactory>,Nil,Nil,Nil>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<13>,0,IActivationFactory,Implements<FtmBase,Windows::Foundation::IMemoryBufferFactory>,Nil,Nil,Nil>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<13>,0,IActivationFactory,Implements<FtmBase,Windows::Foundation::Metadata::IApiInformationStatics>,Nil,Nil,Nil>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<13>,0,IActivationFactory,Implements<FtmBase,Windows::Storage::Streams::IBufferFactory>,Windows::Storage::Streams::IBufferStatics,Nil,Nil>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<13>,0,IActivationFactory,Implements<FtmBase,Windows::Storage::Streams::IDataReaderFactory>,Windows::Storage::Streams::IDataReaderStatics,Nil,Nil>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<13>,0,IActivationFactory,Implements<FtmBase,Windows::Storage::Streams::IDataWriterFactory>,IActivationFactory,Nil,Nil>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<13>,0,IActivationFactory,Implements<RuntimeClassFlags<3>,Windows::Foundation::IPropertyValueStatics,CloakedIid<IMarshal>,CloakedIid<IAgileObject> >,Nil,Nil,Nil>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<13>,0,IActivationFactory,Nil,Nil,Nil,Nil>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<13>,1,ImplementsMarker<Implements<FtmBase,Windows::Storage::Streams::IBufferFactory> >,Windows::Storage::Streams::IBufferStatics,Nil,Nil>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<13>,1,ImplementsMarker<Implements<FtmBase,Windows::Storage::Streams::IDataReaderFactory> >,Windows::Storage::Streams::IDataReaderStatics,Nil,Nil>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<13>,1,ImplementsMarker<Implements<FtmBase,Windows::Storage::Streams::IDataWriterFactory> >,IActivationFactory,Nil,Nil>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<19>,1,CloakedIid<IMarshal>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			struct ImplementsHelper<RuntimeClassFlags<1>,0,ImplementsMarker<Implements<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>,Windows::Foundation::Collections::IObservableMap<HSTRING__ *,IInspectable *> > >,IWeakReferenceSource,FtmBase>
			{
				ImplementsHelper<RuntimeClassFlags<1>,0,ImplementsMarker<Implements<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>,Windows::Foundation::Collections::IObservableMap<HSTRING__ *,IInspectable *> > >,IWeakReferenceSource,FtmBase>();
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,ImplementsMarker<Windows::Foundation::Collections::InMemoryPropertyStore_Impl<0> >,IWeakReferenceSource>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,Windows::Foundation::Collections::IMapView<HSTRING__ *,IInspectable *>,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *> >
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,IWeakReferenceSource,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,IWeakReferenceSource,IInspectable,Windows::Foundation::IClosable,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,HSTRING__ *> *>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>,Windows::Foundation::Collections::IObservableMap<HSTRING__ *,IInspectable *>,Windows::Foundation::Collections::IPropertySet,Windows::Foundation::Collections::Detail::IMarshalingBehaviorControl,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,unsigned char> *> >
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,IWeakReferenceSource,Windows::Storage::Streams::IPutBackInputStream,Windows::Foundation::IClosable>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,IWeakReferenceSource>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,HSTRING__ *> *>,Windows::Foundation::Collections::IObservableMap<HSTRING__ *,HSTRING__ *>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>,Windows::Foundation::Collections::IObservableMap<HSTRING__ *,IInspectable *> >
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>,Windows::Foundation::Collections::IObservableMap<HSTRING__ *,IInspectable *>,Windows::Foundation::Collections::IPropertySet,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>,Windows::Foundation::Collections::IObservableMap<HSTRING__ *,IInspectable *>,Windows::Foundation::Collections::IPropertySet>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IPropertySet,Windows::Foundation::Collections::Detail::IMarshalingBehaviorControl,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,Windows::Foundation::IClosable,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IMarshal>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IClosable,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IReference<HSTRING__ *>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IReference<Windows::Foundation::DateTime>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IReference<Windows::Foundation::Point>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IReference<Windows::Foundation::Rect>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IReference<Windows::Foundation::Size>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IReference<Windows::Foundation::TimeSpan>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IReference<__int64>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IReference<bool>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IReference<double>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IReference<float>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IReference<int>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IReference<short>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IReference<unsigned char>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IReference<unsigned short>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IReference<wchar_t>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IReferenceArray<HSTRING__ *>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IReferenceArray<IInspectable *>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IReferenceArray<Windows::Foundation::DateTime>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IReferenceArray<Windows::Foundation::Point>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IReferenceArray<Windows::Foundation::Rect>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IReferenceArray<Windows::Foundation::Size>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IReferenceArray<Windows::Foundation::TimeSpan>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IReferenceArray<_GUID>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IReferenceArray<__int64>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IReferenceArray<bool>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IReferenceArray<double>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IReferenceArray<float>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IReferenceArray<int>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IReferenceArray<short>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IReferenceArray<unsigned __int64>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IReferenceArray<unsigned char>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IReferenceArray<unsigned int>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IReferenceArray<unsigned short>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Foundation::IReferenceArray<wchar_t>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,Windows::Foundation::IClosable,CloakedIid<Windows::Foundation::IMemoryBufferByteAccess>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,Windows::Foundation::IReference<_GUID>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,Windows::Foundation::IReference<unsigned __int64>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,Windows::Foundation::IReference<unsigned int>,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			struct MakeAllocator<MarshalByValueValueSet>
			{
				~MakeAllocator<MarshalByValueValueSet>();
			};

			struct MakeAllocator<SimpleSealedActivationFactory<Windows::Foundation::Diagnostics::CRuntimeBrokerErrorSettings,0> >
			{
				~MakeAllocator<SimpleSealedActivationFactory<Windows::Foundation::Diagnostics::CRuntimeBrokerErrorSettings,0> >();
			};

			struct MakeAllocator<Windows::Foundation::Diagnostics::CRuntimeBrokerErrorSettings>
			{
				~MakeAllocator<Windows::Foundation::Diagnostics::CRuntimeBrokerErrorSettings>();
			};

			struct MakeAllocator<Windows::Foundation::ValueFactory>
			{
				~MakeAllocator<Windows::Foundation::ValueFactory>();
			};

			struct MakeAllocator<Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,HSTRING__ *>,Windows::Internal::GitPtr,2> >
			{
				~MakeAllocator<Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,HSTRING__ *>,Windows::Internal::GitPtr,2> >();
			};

			struct MakeAllocator<Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,IInspectable *>,Windows::Internal::GitPtr,2> >
			{
				~MakeAllocator<Windows::Internal::Details::GitInvokeHelper<Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,IInspectable *>,Windows::Internal::GitPtr,2> >();
			};

			struct MakeAllocator<Windows::Storage::Streams::DataReader>
			{
				~MakeAllocator<Windows::Storage::Streams::DataReader>();
			};

			struct MakeAllocator<Windows::Storage::Streams::DataWriter>
			{
				~MakeAllocator<Windows::Storage::Streams::DataWriter>();
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
				static long AsIID<ActivationFactory<Implements<FtmBase,Windows::Foundation::IDeferralFactory>,Nil,Nil,0> >(ActivationFactory<Implements<FtmBase,Windows::Foundation::IDeferralFactory>,Nil,Nil,0> *,_GUID const &,void * *);
			};

			class RuntimeClassBaseT<1>
			{
			protected:
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Implements<Windows::Foundation::Collections::IMap<HSTRING__ *,HSTRING__ *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,HSTRING__ *> *>,Windows::Foundation::Collections::IObservableMap<HSTRING__ *,HSTRING__ *> >,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Implements<Windows::Foundation::Collections::IMap<HSTRING__ *,HSTRING__ *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,HSTRING__ *> *>,Windows::Foundation::Collections::IObservableMap<HSTRING__ *,HSTRING__ *> >,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Implements<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>,Windows::Foundation::Collections::IObservableMap<HSTRING__ *,IInspectable *> >,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Implements<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>,Windows::Foundation::Collections::IObservableMap<HSTRING__ *,IInspectable *> >,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::Detail::IPropertySetSerializer,Windows::Foundation::Collections::Detail::IPropertySetStreamSerializerForMarshaling,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::Detail::IPropertySetSerializer,Windows::Foundation::Collections::Detail::IPropertySetStreamSerializerForMarshaling,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IDeferral,Windows::Foundation::IClosable,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IDeferral,Windows::Foundation::IClosable,FtmBase> *,_GUID const &,void * *);
			};

			class RuntimeClassBaseT<3>
			{
			protected:
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IMemoryBufferReference,Windows::Foundation::IClosable,CloakedIid<Windows::Foundation::IMemoryBufferByteAccess>,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IMemoryBufferReference,Windows::Foundation::IClosable,CloakedIid<Windows::Foundation::IMemoryBufferByteAccess>,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<Windows::Foundation::Size>,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<Windows::Foundation::Size>,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<_GUID>,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<_GUID>,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<unsigned __int64>,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<unsigned __int64>,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<unsigned int>,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<unsigned int>,FtmBase> *,_GUID const &,void * *);
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

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Implements<Windows::Foundation::Collections::IMap<HSTRING__ *,HSTRING__ *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,HSTRING__ *> *>,Windows::Foundation::Collections::IObservableMap<HSTRING__ *,HSTRING__ *> >,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Implements<Windows::Foundation::Collections::IMap<HSTRING__ *,HSTRING__ *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,HSTRING__ *> *>,Windows::Foundation::Collections::IObservableMap<HSTRING__ *,HSTRING__ *> >,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Implements<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>,Windows::Foundation::Collections::IObservableMap<HSTRING__ *,IInspectable *> >,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Implements<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>,Windows::Foundation::Collections::IObservableMap<HSTRING__ *,IInspectable *> >,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::Detail::IPropertySetSerializer,Windows::Foundation::Collections::Detail::IPropertySetStreamSerializerForMarshaling,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::Detail::IPropertySetSerializer,Windows::Foundation::Collections::Detail::IPropertySetStreamSerializerForMarshaling,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,HSTRING__ *> *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,HSTRING__ *> *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *> >
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *> >();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,unsigned char> *> >
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,unsigned char> *> >();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,HSTRING__ *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,HSTRING__ *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> >
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> >();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,unsigned char> >
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,unsigned char> >();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>,Windows::Foundation::Collections::IObservableMap<HSTRING__ *,IInspectable *> >
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>,Windows::Foundation::Collections::IObservableMap<HSTRING__ *,IInspectable *> >();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>,Windows::Foundation::Collections::IObservableMap<HSTRING__ *,IInspectable *>,Windows::Foundation::Collections::IPropertySet,Windows::Foundation::Collections::Detail::IMarshalingBehaviorControl,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>,Windows::Foundation::Collections::IObservableMap<HSTRING__ *,IInspectable *>,Windows::Foundation::Collections::IPropertySet,Windows::Foundation::Collections::Detail::IMarshalingBehaviorControl,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMap<HSTRING__ *,unsigned char>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,unsigned char> *> >
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMap<HSTRING__ *,unsigned char>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,unsigned char> *> >();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMapChangedEventArgs<HSTRING__ *> >
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMapChangedEventArgs<HSTRING__ *> >();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMapView<HSTRING__ *,HSTRING__ *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,HSTRING__ *> *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMapView<HSTRING__ *,HSTRING__ *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,HSTRING__ *> *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMapView<HSTRING__ *,IInspectable *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *> >
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMapView<HSTRING__ *,IInspectable *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *> >();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMapView<HSTRING__ *,IInspectable *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMapView<HSTRING__ *,IInspectable *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMapView<HSTRING__ *,unsigned char>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,unsigned char> *> >
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMapView<HSTRING__ *,unsigned char>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,unsigned char> *> >();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::InMemoryPropertyStore_Impl<0> >
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::InMemoryPropertyStore_Impl<0> >();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::InMemoryPropertyStore_Impl<1> >
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::InMemoryPropertyStore_Impl<1> >();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::StringStore_Impl>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::StringStore_Impl>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Diagnostics::IErrorReportingSettings,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Diagnostics::IErrorReportingSettings,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IDeferral,Windows::Foundation::IClosable,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IDeferral,Windows::Foundation::IClosable,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Storage::Streams::IDataReader,IInspectable,Windows::Foundation::IClosable,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Storage::Streams::IDataReader,IInspectable,Windows::Foundation::IClosable,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Storage::Streams::IDataWriter,IInspectable,Windows::Foundation::IClosable,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Storage::Streams::IDataWriter,IInspectable,Windows::Foundation::IClosable,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Storage::Streams::IInputStream,Windows::Storage::Streams::IPutBackInputStream,Windows::Foundation::IClosable>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Storage::Streams::IInputStream,Windows::Storage::Streams::IPutBackInputStream,Windows::Foundation::IClosable>();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,CloakedIid<IMarshal>,FtmBase>
			{
			protected:
				unsigned long InternalAddRef();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IMarshal,FtmBase>
			{
			protected:
				unsigned long InternalAddRef();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IUnknown,FtmBase>
			{
			protected:
				unsigned long InternalAddRef();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IUnknown>
			{
			protected:
				unsigned long InternalAddRef();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IWeakReference>
			{
			protected:
				unsigned long InternalAddRef();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,HSTRING__ *>,FtmBase> >
			{
			protected:
				unsigned long InternalAddRef();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,IInspectable *>,FtmBase> >
			{
			protected:
				unsigned long InternalAddRef();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,FtmBase> >
			{
			protected:
				unsigned long InternalAddRef();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationProgressHandler<Windows::Storage::Streams::IBuffer *,unsigned int>,FtmBase> >
			{
			protected:
				unsigned long InternalAddRef();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Storage::Streams::IBuffer *,unsigned int>,FtmBase> >
			{
			protected:
				unsigned long InternalAddRef();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Implements<RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<unsigned int,unsigned int>,FtmBase> >
			{
			protected:
				unsigned long InternalAddRef();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,HSTRING__ *>,FtmBase>
			{
			protected:
				unsigned long InternalAddRef();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,IInspectable *> >
			{
			protected:
				unsigned long InternalAddRef();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,IInspectable *>,FtmBase>
			{
			protected:
				unsigned long InternalAddRef();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::Foundation::IMemoryBufferReference *,IInspectable *>,FtmBase>
			{
			protected:
				unsigned long InternalAddRef();
			public:
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IMemoryBuffer,Windows::Foundation::IClosable,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IMemoryBuffer,Windows::Foundation::IClosable,FtmBase>();
			};

			class RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IMemoryBufferReference,Windows::Foundation::IClosable,CloakedIid<Windows::Foundation::IMemoryBufferByteAccess>,FtmBase>
			{
			protected:
				unsigned long InternalAddRef();
				unsigned long InternalRelease();
			public:
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IMemoryBufferReference,Windows::Foundation::IClosable,CloakedIid<Windows::Foundation::IMemoryBufferByteAccess>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<HSTRING__ *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<HSTRING__ *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<Windows::Foundation::DateTime>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<Windows::Foundation::DateTime>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<Windows::Foundation::Point>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<Windows::Foundation::Point>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<Windows::Foundation::Rect>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<Windows::Foundation::Rect>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<Windows::Foundation::Size>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<Windows::Foundation::Size>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<Windows::Foundation::TimeSpan>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<Windows::Foundation::TimeSpan>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<_GUID>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<_GUID>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<__int64>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<__int64>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<bool>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<bool>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<double>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<double>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<float>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<float>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<int>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<int>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<short>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<short>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<unsigned __int64>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<unsigned __int64>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<unsigned char>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<unsigned char>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<unsigned int>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<unsigned int>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<unsigned short>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<unsigned short>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<wchar_t>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReference<wchar_t>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<HSTRING__ *>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<HSTRING__ *>,Windows::Foundation::Detail::SimpleArrayMarshaler>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<IInspectable *>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<IInspectable *>,Windows::Foundation::Detail::SimpleArrayMarshaler>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<Windows::Foundation::DateTime>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<Windows::Foundation::DateTime>,Windows::Foundation::Detail::SimpleArrayMarshaler>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<Windows::Foundation::Point>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<Windows::Foundation::Point>,Windows::Foundation::Detail::SimpleArrayMarshaler>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<Windows::Foundation::Rect>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<Windows::Foundation::Rect>,Windows::Foundation::Detail::SimpleArrayMarshaler>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<Windows::Foundation::Size>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<Windows::Foundation::Size>,Windows::Foundation::Detail::SimpleArrayMarshaler>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<Windows::Foundation::TimeSpan>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<Windows::Foundation::TimeSpan>,Windows::Foundation::Detail::SimpleArrayMarshaler>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<_GUID>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<_GUID>,Windows::Foundation::Detail::SimpleArrayMarshaler>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<__int64>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<__int64>,Windows::Foundation::Detail::SimpleArrayMarshaler>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<bool>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<bool>,Windows::Foundation::Detail::SimpleArrayMarshaler>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<double>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<double>,Windows::Foundation::Detail::SimpleArrayMarshaler>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<float>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<float>,Windows::Foundation::Detail::SimpleArrayMarshaler>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<int>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<int>,Windows::Foundation::Detail::SimpleArrayMarshaler>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<short>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<short>,Windows::Foundation::Detail::SimpleArrayMarshaler>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<unsigned __int64>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<unsigned __int64>,Windows::Foundation::Detail::SimpleArrayMarshaler>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<unsigned char>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<unsigned char>,Windows::Foundation::Detail::SimpleArrayMarshaler>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<unsigned int>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<unsigned int>,Windows::Foundation::Detail::SimpleArrayMarshaler>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<unsigned short>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<unsigned short>,Windows::Foundation::Detail::SimpleArrayMarshaler>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<wchar_t>,Windows::Foundation::Detail::SimpleArrayMarshaler>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,Windows::Foundation::IPropertyValue,Windows::Foundation::IReferenceArray<wchar_t>,Windows::Foundation::Detail::SimpleArrayMarshaler>();
			};

			class StaticStorage<DefaultModule<1>,0,int>
			{
				static StaticStorage<DefaultModule<1>,0,int> instance_;
			public:
				~StaticStorage<DefaultModule<1>,0,int>();
			};

			struct StrongReference
			{
				unsigned long IncrementStrongReference();
			};

			struct WeakReferenceImpl
			{
				WeakReferenceImpl(IUnknown *);
				virtual long Resolve(_GUID const &,IInspectable * *);
			};

			ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::ChunkView> Make<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::ChunkView,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *> &>(Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *> &);
			ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,0,0> >::ChunkView> Make<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,0,0> >::ChunkView,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *> &>(Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *> &);
			ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::ChunkView> Make<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::ChunkView,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *> &>(Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *> &);
			ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned char>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > >::ChunkView> Make<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned char>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > >::ChunkView,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *> &>(Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *> &);
			ComPtr<Windows::Foundation::MemoryBuffer> Make<Windows::Foundation::MemoryBuffer,Windows::Storage::Streams::IBuffer * &>(Windows::Storage::Streams::IBuffer * &);
			ComPtr<Windows::Storage::Streams::CBuffer<Windows::Storage::Streams::CBuffer_StandardCleanup,Windows::Storage::Streams::DefaultMarshaler> > Make<Windows::Storage::Streams::CBuffer<Windows::Storage::Streams::CBuffer_StandardCleanup,Windows::Storage::Streams::DefaultMarshaler>,unsigned int &,unsigned int &,unsigned char * &,Windows::Storage::Streams::CBuffer_StandardCleanup &>(unsigned int &,unsigned int &,unsigned char * &,Windows::Storage::Streams::CBuffer_StandardCleanup &);
			Details::WeakReferenceImpl * CreateWeakReference(IUnknown *);
			bool TerminateMap(Details::ModuleBase *,wchar_t const *,bool);
			long CreateActivationFactory<ApiInformation>(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<InMemoryPropertyStoreActivationFactory<Windows::Foundation::Collections::InMemoryPropertyStore> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<InMemoryPropertyStoreActivationFactory<Windows::Foundation::Collections::StringStore> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<InMemoryPropertyStoreActivationFactory<Windows::Foundation::Collections::ValueSet> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<SimpleSealedActivationFactory<Windows::Foundation::Diagnostics::CRuntimeBrokerErrorSettings,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<Windows::Foundation::DeferralFactory>(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<Windows::Foundation::MemoryBufferFactory>(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<Windows::Foundation::ValueFactory>(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<Windows::Storage::Streams::BufferFactory>(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<Windows::Storage::Streams::DataReaderFactory>(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<Windows::Storage::Streams::DataWriterFactory>(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateAgileHelper<Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,HSTRING__ *> >(Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,HSTRING__ *> *,Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,HSTRING__ *> * *);
			long CreateClassFactory<SimpleClassFactory<CBufferProxy,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateClassFactory<SimpleClassFactory<MarshalByValueValueSet,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateClassFactory<SimpleClassFactory<Windows::Foundation::ValueFactory,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long GetActivationFactory<1>(Details::ModuleBase *,wchar_t const *,HSTRING__ *,IActivationFactory * *);
			long MakeAndInitialize<EventTargetArray,EventTargetArray,unsigned __int64 &>(Details::EventTargetArray * *,unsigned __int64 &);
			long MakeAndInitialize<Windows::Foundation::DeferralImpl,Windows::Foundation::IDeferral,Windows::Foundation::IDeferralCompletedHandler * &>(Windows::Foundation::IDeferral * *,Windows::Foundation::IDeferralCompletedHandler * &);
			unsigned long SafeUnknownDecrementReference(long volatile &);
			unsigned long SafeUnknownIncrementReference(long volatile &);
			void RaiseException(long,unsigned long);
		};

		struct ErrorPropagationPolicyTraits<-1>
		{
			static long FireCompletionErrorPropagationPolicyFilter(long,IUnknown *,void *);
			static long FireProgressErrorPropagationPolicyFilter(long,IUnknown *,void *);
		};

		class EventSource<Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,HSTRING__ *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,HSTRING__ *> *,void *,EventRegistrationToken *);
			long DoInvoke<<lambda_0acda7181bd430a28a7c7f1c06c1cda8> >(<lambda_0acda7181bd430a28a7c7f1c06c1cda8>);
			long DoInvoke<<lambda_89f37ec5591b5e693640dda25fa1c438> >(<lambda_89f37ec5591b5e693640dda25fa1c438>);
		public:
			EventSource<Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,HSTRING__ *>,InvokeModeOptions<-2> >();
			long Remove(EventRegistrationToken);
		};

		class EventSource<Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,IInspectable *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,IInspectable *> *,void *,EventRegistrationToken *);
			long DoInvoke<<lambda_3099c3d7cd65a088218cc842d2f57648> >(<lambda_3099c3d7cd65a088218cc842d2f57648>);
			long DoInvoke<<lambda_8286d2aefcbf7b0d717eb6156a5ce4db> >(<lambda_8286d2aefcbf7b0d717eb6156a5ce4db>);
			long DoInvoke<<lambda_8f2ec51d5a7f318201adba25c6395b4b> >(<lambda_8f2ec51d5a7f318201adba25c6395b4b>);
		public:
			EventSource<Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,IInspectable *>,InvokeModeOptions<-2> >();
			long InvokeAll<Windows::Foundation::Collections::IObservableMap<HSTRING__ *,IInspectable *> *,Windows::Foundation::Collections::Internal::MapChangedEventArgs<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > *>(Windows::Foundation::Collections::IObservableMap<HSTRING__ *,IInspectable *> *,Windows::Foundation::Collections::Internal::MapChangedEventArgs<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > *);
			long Remove(EventRegistrationToken);
		};

		class EventSource<Windows::Foundation::ITypedEventHandler<Windows::Foundation::IMemoryBufferReference *,IInspectable *>,InvokeModeOptions<-2> >
		{
			long AddInternal(Windows::Foundation::ITypedEventHandler<Windows::Foundation::IMemoryBufferReference *,IInspectable *> *,void *,EventRegistrationToken *);
			long DoInvoke<<lambda_9852638d54fb8982a2f32d51bfb4cc39> >(<lambda_9852638d54fb8982a2f32d51bfb4cc39>);
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

		struct InvokeTraits<-2>
		{
			static long InvokeDelegates<<lambda_0acda7181bd430a28a7c7f1c06c1cda8>,Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,HSTRING__ *> >(<lambda_0acda7181bd430a28a7c7f1c06c1cda8>,Details::EventTargetArray *,EventSource<Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,HSTRING__ *>,InvokeModeOptions<-2> > *);
			static long InvokeDelegates<<lambda_3099c3d7cd65a088218cc842d2f57648>,Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,IInspectable *> >(<lambda_3099c3d7cd65a088218cc842d2f57648>,Details::EventTargetArray *,EventSource<Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,IInspectable *>,InvokeModeOptions<-2> > *);
			static long InvokeDelegates<<lambda_8286d2aefcbf7b0d717eb6156a5ce4db>,Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,IInspectable *> >(<lambda_8286d2aefcbf7b0d717eb6156a5ce4db>,Details::EventTargetArray *,EventSource<Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,IInspectable *>,InvokeModeOptions<-2> > *);
			static long InvokeDelegates<<lambda_89f37ec5591b5e693640dda25fa1c438>,Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,HSTRING__ *> >(<lambda_89f37ec5591b5e693640dda25fa1c438>,Details::EventTargetArray *,EventSource<Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,HSTRING__ *>,InvokeModeOptions<-2> > *);
			static long InvokeDelegates<<lambda_8f2ec51d5a7f318201adba25c6395b4b>,Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,IInspectable *> >(<lambda_8f2ec51d5a7f318201adba25c6395b4b>,Details::EventTargetArray *,EventSource<Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,IInspectable *>,InvokeModeOptions<-2> > *);
			static long InvokeDelegates<<lambda_9852638d54fb8982a2f32d51bfb4cc39>,Windows::Foundation::ITypedEventHandler<Windows::Foundation::IMemoryBufferReference *,IInspectable *> >(<lambda_9852638d54fb8982a2f32d51bfb4cc39>,Details::EventTargetArray *,EventSource<Windows::Foundation::ITypedEventHandler<Windows::Foundation::IMemoryBufferReference *,IInspectable *>,InvokeModeOptions<-2> > *);
		};

		class Module<1,Details::DefaultModule<1> >
		{
			static bool StaticInitialize();
			static bool isInitialized;
		protected:
			static _RTL_RUN_ONCE initOnceInProc_;
		public:
			static Details::DefaultModule<1> & Create();
			virtual long RegisterCOMObject(wchar_t const *,_GUID *,IClassFactory * *,unsigned long *,unsigned int);
			virtual long RegisterWinRTObject(wchar_t const *,wchar_t const * *,<unnamed-type-RO_REGISTRATION_COOKIE> * *,unsigned int);
			virtual long UnregisterCOMObject(wchar_t const *,unsigned long *,unsigned int);
			virtual long UnregisterWinRTObject(wchar_t const *,<unnamed-type-RO_REGISTRATION_COOKIE> *);
			virtual unsigned long DecrementObjectCount();
			virtual unsigned long IncrementObjectCount();
			virtual ~Module<1,Details::DefaultModule<1> >();
		};

		struct RuntimeClass<Implements<Windows::Foundation::Collections::IMap<HSTRING__ *,HSTRING__ *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,HSTRING__ *> *>,Windows::Foundation::Collections::IObservableMap<HSTRING__ *,HSTRING__ *> >,FtmBase>
		{
			RuntimeClass<Implements<Windows::Foundation::Collections::IMap<HSTRING__ *,HSTRING__ *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,HSTRING__ *> *>,Windows::Foundation::Collections::IObservableMap<HSTRING__ *,HSTRING__ *> >,FtmBase>();
		};

		struct RuntimeClass<RuntimeClassFlags<19>,Windows::Storage::Streams::IBuffer,CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,CloakedIid<IMarshal>,FtmBase>
		{
			RuntimeClass<RuntimeClassFlags<19>,Windows::Storage::Streams::IBuffer,CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,CloakedIid<IMarshal>,FtmBase>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,IUnknown,FtmBase>
		{
			RuntimeClass<RuntimeClassFlags<2>,IUnknown,FtmBase>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,IUnknown>
		{
			RuntimeClass<RuntimeClassFlags<2>,IUnknown>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,Implements<RuntimeClassFlags<2>,Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,HSTRING__ *>,FtmBase> >
		{
			RuntimeClass<RuntimeClassFlags<2>,Implements<RuntimeClassFlags<2>,Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,HSTRING__ *>,FtmBase> >();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,Implements<RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Storage::Streams::IBuffer *,unsigned int>,FtmBase> >
		{
			RuntimeClass<RuntimeClassFlags<2>,Implements<RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Storage::Streams::IBuffer *,unsigned int>,FtmBase> >();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,HSTRING__ *>,FtmBase>
		{
			virtual ~RuntimeClass<RuntimeClassFlags<2>,Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,HSTRING__ *>,FtmBase>();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,IInspectable *> >
		{
			RuntimeClass<RuntimeClassFlags<2>,Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,IInspectable *> >();
		};

		struct RuntimeClass<RuntimeClassFlags<2>,Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,IInspectable *>,FtmBase>
		{
			virtual ~RuntimeClass<RuntimeClassFlags<2>,Windows::Foundation::Collections::MapChangedEventHandler<HSTRING__ *,IInspectable *>,FtmBase>();
		};

		struct RuntimeClass<Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,HSTRING__ *> *>,FtmBase>
		{
			RuntimeClass<Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,HSTRING__ *> *>,FtmBase>();
		};

		struct RuntimeClass<Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *> >
		{
			RuntimeClass<Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *> >();
		};

		struct RuntimeClass<Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>,FtmBase>
		{
			RuntimeClass<Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>,FtmBase>();
		};

		struct RuntimeClass<Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,unsigned char> *> >
		{
			RuntimeClass<Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,unsigned char> *> >();
		};

		struct RuntimeClass<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>,Windows::Foundation::Collections::IObservableMap<HSTRING__ *,IInspectable *> >
		{
			RuntimeClass<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>,Windows::Foundation::Collections::IObservableMap<HSTRING__ *,IInspectable *> >();
		};

		struct RuntimeClass<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>,Windows::Foundation::Collections::IObservableMap<HSTRING__ *,IInspectable *>,Windows::Foundation::Collections::IPropertySet,Windows::Foundation::Collections::Detail::IMarshalingBehaviorControl,FtmBase>
		{
			RuntimeClass<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>,Windows::Foundation::Collections::IObservableMap<HSTRING__ *,IInspectable *>,Windows::Foundation::Collections::IPropertySet,Windows::Foundation::Collections::Detail::IMarshalingBehaviorControl,FtmBase>();
		};

		struct RuntimeClass<Windows::Foundation::Collections::IMap<HSTRING__ *,unsigned char>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,unsigned char> *> >
		{
			RuntimeClass<Windows::Foundation::Collections::IMap<HSTRING__ *,unsigned char>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,unsigned char> *> >();
		};

		struct RuntimeClass<Windows::Foundation::Collections::IMapView<HSTRING__ *,HSTRING__ *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,HSTRING__ *> *>,FtmBase>
		{
			RuntimeClass<Windows::Foundation::Collections::IMapView<HSTRING__ *,HSTRING__ *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,HSTRING__ *> *>,FtmBase>();
		};

		struct RuntimeClass<Windows::Foundation::Collections::IMapView<HSTRING__ *,IInspectable *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *> >
		{
			RuntimeClass<Windows::Foundation::Collections::IMapView<HSTRING__ *,IInspectable *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *> >();
		};

		struct RuntimeClass<Windows::Foundation::Collections::IMapView<HSTRING__ *,IInspectable *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>,FtmBase>
		{
			RuntimeClass<Windows::Foundation::Collections::IMapView<HSTRING__ *,IInspectable *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>,FtmBase>();
		};

		struct RuntimeClass<Windows::Foundation::Collections::IMapView<HSTRING__ *,unsigned char>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,unsigned char> *> >
		{
			RuntimeClass<Windows::Foundation::Collections::IMapView<HSTRING__ *,unsigned char>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,unsigned char> *> >();
		};

		struct RuntimeClass<Windows::Foundation::Collections::InMemoryPropertyStore_Impl<0> >
		{
			RuntimeClass<Windows::Foundation::Collections::InMemoryPropertyStore_Impl<0> >();
		};

		struct RuntimeClass<Windows::Foundation::Collections::InMemoryPropertyStore_Impl<1> >
		{
			RuntimeClass<Windows::Foundation::Collections::InMemoryPropertyStore_Impl<1> >();
		};

		struct RuntimeClass<Windows::Foundation::Collections::StringStore_Impl>
		{
			RuntimeClass<Windows::Foundation::Collections::StringStore_Impl>();
		};

		struct RuntimeClass<Windows::Storage::Streams::IDataReader,IInspectable,Windows::Foundation::IClosable,FtmBase>
		{
			virtual ~RuntimeClass<Windows::Storage::Streams::IDataReader,IInspectable,Windows::Foundation::IClosable,FtmBase>();
		};

		struct RuntimeClass<Windows::Storage::Streams::IDataWriter,IInspectable,Windows::Foundation::IClosable,FtmBase>
		{
			RuntimeClass<Windows::Storage::Streams::IDataWriter,IInspectable,Windows::Foundation::IClosable,FtmBase>();
			virtual ~RuntimeClass<Windows::Storage::Streams::IDataWriter,IInspectable,Windows::Foundation::IClosable,FtmBase>();
		};

		struct SimpleActivationFactory<Windows::Foundation::Diagnostics::CRuntimeBrokerErrorSettings,0>
		{
			virtual long ActivateInstance(IInspectable * *);
		};

		struct SimpleClassFactory<CBufferProxy,0>
		{
			virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
		};

		struct SimpleClassFactory<MarshalByValueValueSet,0>
		{
			virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
		};

		struct SimpleClassFactory<Windows::Foundation::ValueFactory,0>
		{
			virtual long CreateInstance(IUnknown *,_GUID const &,void * *);
		};

		namespace Wrappers
		{
			namespace Details
			{
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
				~HString();
			};

			class HStringReference
			{
				void CreateReference(unsigned short const *,unsigned int,unsigned int);
			public:
				HStringReference<unsigned short const *>(unsigned short const * const &,Details::Dummy);
				~HStringReference();
			};

			struct SRWLock
			{
				~SRWLock();
			};

		};

		Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics * gCausality;
		_RTL_RUN_ONCE gCausalityInitOnce;
	};

};

namespace ObjectLibrary
{
	struct OpaqueString
	{
		~OpaqueString();
	};

};

class RoVariant
{
	struct Accessor
	{
		long GetChar16(wchar_t *);
		long GetDateTime(Windows::Foundation::DateTime *);
		long GetDouble(double *);
		long GetGuid(_GUID *);
		long GetInt16(short *);
		long GetInt32(int *);
		long GetInt64(__int64 *);
		long GetPoint(Windows::Foundation::Point *);
		long GetRect(Windows::Foundation::Rect *);
		long GetSingle(float *);
		long GetSize(Windows::Foundation::Size *);
		long GetString(HSTRING__ * *);
		long GetTimeSpan(Windows::Foundation::TimeSpan *);
		long GetUInt16(unsigned short *);
		long GetUInt32(unsigned int *);
		long GetUInt64(unsigned __int64 *);
		long GetUInt8(unsigned char *);
		long get_Type(Windows::Foundation::PropertyType *);
	};

	struct OutRef
	{
		~OutRef();
	};

	RoVariant(IInspectable *,bool,bool);
public:
	~RoVariant();
};

class TypeNameTokenizer
{
	bool IsWhitespace(unsigned short);
	bool TrimThenFetchAndCompareNextCharIfAny(unsigned short);
	long ParseNonParameterizedType();
	long ParseParameterizedType();
	void SkipWhitespace();
};

namespace Windows
{
	namespace Foundation
	{
		namespace Collections
		{
			namespace Detail
			{
				class PropertySetSerializer
				{
				protected:
					static long DeserializeKeyValue(IMap<HSTRING__ *,IInspectable *> *,IPropertyValueStatics *,Storage::Streams::IDataReader *);
					static long DeserializeWorker(IPropertySet *,Storage::Streams::IDataReader *,bool);
					static long SerializeKeyValue(IIterator<IKeyValuePair<HSTRING__ *,IInspectable *> *> *,IPropertyValueStatics *,Storage::Streams::IDataWriter *,bool);
					static long SerializeWorker(IPropertySet *,Storage::Streams::IDataWriter *,bool);
				public:
					virtual long Deserialize(IPropertySet *,Storage::Streams::IBuffer *);
					virtual long DeserializeForMarshaling(IPropertySet *,Storage::Streams::IDataReader *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long Serialize(IPropertySet *,Storage::Streams::IBuffer * *);
					virtual long SerializeForMarshaling(IPropertySet *,Storage::Streams::IDataWriter *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				class PropertyValueSerializer
				{
				protected:
					static bool IsInspectableSerializable(IInspectable *);
					static long DeserializeInspectableValue(Storage::Streams::IDataReader *,IInspectable * *);
					static long DeserializePropertySetValue(Storage::Streams::IDataReader *,IInspectable * *);
					static long SerializeInspectableValue(Storage::Streams::IDataWriter *,IInspectable *,bool);
					static long SerializePropertySetValue(Storage::Streams::IDataWriter *,IPropertySet *);
				public:
					static bool IsSerializable(IInspectable *);
					static long Deserialize(Storage::Streams::IDataReader *,IPropertyValueStatics *,IInspectable * *);
					static long Serialize(Storage::Streams::IDataWriter *,IInspectable *,bool);
				};

				struct PropertyValueTraits<1025>
				{
					static long CreatePropertyValue(unsigned char const *,unsigned int,IPropertyValueStatics *,IInspectable * *);
					static long ReadPropertyValue(Storage::Streams::IDataReader *,IPropertyValueStatics *,IInspectable * *);
				};

				struct PropertyValueTraits<1026>
				{
					static long CreatePropertyValue(short const *,unsigned int,IPropertyValueStatics *,IInspectable * *);
				};

				struct PropertyValueTraits<1027>
				{
					static long CreatePropertyValue(unsigned short const *,unsigned int,IPropertyValueStatics *,IInspectable * *);
				};

				struct PropertyValueTraits<1028>
				{
					static long CreatePropertyValue(int const *,unsigned int,IPropertyValueStatics *,IInspectable * *);
				};

				struct PropertyValueTraits<1029>
				{
					static long CreatePropertyValue(unsigned int const *,unsigned int,IPropertyValueStatics *,IInspectable * *);
				};

				struct PropertyValueTraits<1030>
				{
					static long CreatePropertyValue(__int64 const *,unsigned int,IPropertyValueStatics *,IInspectable * *);
				};

				struct PropertyValueTraits<1031>
				{
					static long CreatePropertyValue(unsigned __int64 const *,unsigned int,IPropertyValueStatics *,IInspectable * *);
				};

				struct PropertyValueTraits<1032>
				{
					static long CreatePropertyValue(float const *,unsigned int,IPropertyValueStatics *,IInspectable * *);
				};

				struct PropertyValueTraits<1033>
				{
					static long CreatePropertyValue(double const *,unsigned int,IPropertyValueStatics *,IInspectable * *);
				};

				struct PropertyValueTraits<1034>
				{
					static long CreatePropertyValue(wchar_t const *,unsigned int,IPropertyValueStatics *,IInspectable * *);
				};

				struct PropertyValueTraits<1035>
				{
					static long CreatePropertyValue(unsigned char const *,unsigned int,IPropertyValueStatics *,IInspectable * *);
				};

				struct PropertyValueTraits<1036>
				{
					static long CreatePropertyValue(HSTRING__ * const *,unsigned int,IPropertyValueStatics *,IInspectable * *);
					static long ReadPropertyValue(Storage::Streams::IDataReader *,IPropertyValueStatics *,IInspectable * *);
				};

				struct PropertyValueTraits<1038>
				{
					static long CreatePropertyValue(DateTime const *,unsigned int,IPropertyValueStatics *,IInspectable * *);
				};

				struct PropertyValueTraits<1039>
				{
					static long CreatePropertyValue(TimeSpan const *,unsigned int,IPropertyValueStatics *,IInspectable * *);
				};

				struct PropertyValueTraits<1040>
				{
					static long CreatePropertyValue(_GUID const *,unsigned int,IPropertyValueStatics *,IInspectable * *);
				};

				struct PropertyValueTraits<1041>
				{
					static long CreatePropertyValue(Point const *,unsigned int,IPropertyValueStatics *,IInspectable * *);
				};

				struct PropertyValueTraits<1042>
				{
					static long CreatePropertyValue(Size const *,unsigned int,IPropertyValueStatics *,IInspectable * *);
				};

				struct PropertyValueTraits<1043>
				{
					static long CreatePropertyValue(Rect const *,unsigned int,IPropertyValueStatics *,IInspectable * *);
				};

				struct PropertyValueTraits<10>
				{
					static long CreatePropertyValue(wchar_t const &,IPropertyValueStatics *,IInspectable * *);
				};

				struct PropertyValueTraits<11>
				{
					static long CreatePropertyValue(unsigned char const &,IPropertyValueStatics *,IInspectable * *);
				};

				struct PropertyValueTraits<12>
				{
					static long ReadValue(Storage::Streams::IDataReader *,HSTRING__ * *);
					static long WriteValue(Storage::Streams::IDataWriter *,HSTRING__ *);
				};

				struct PropertyValueTraits<14>
				{
					static long CreatePropertyValue(DateTime const &,IPropertyValueStatics *,IInspectable * *);
				};

				struct PropertyValueTraits<15>
				{
					static long CreatePropertyValue(TimeSpan const &,IPropertyValueStatics *,IInspectable * *);
				};

				struct PropertyValueTraits<16>
				{
					static long CreatePropertyValue(_GUID const &,IPropertyValueStatics *,IInspectable * *);
				};

				struct PropertyValueTraits<17>
				{
					static long CreatePropertyValue(Point const &,IPropertyValueStatics *,IInspectable * *);
					static long ReadValue(Storage::Streams::IDataReader *,Point *);
					static long WriteValue(Storage::Streams::IDataWriter *,Point);
				};

				struct PropertyValueTraits<18>
				{
					static long CreatePropertyValue(Size const &,IPropertyValueStatics *,IInspectable * *);
					static long ReadValue(Storage::Streams::IDataReader *,Size *);
					static long WriteValue(Storage::Streams::IDataWriter *,Size);
				};

				struct PropertyValueTraits<19>
				{
					static long CreatePropertyValue(Rect const &,IPropertyValueStatics *,IInspectable * *);
					static long ReadValue(Storage::Streams::IDataReader *,Rect *);
					static long WriteValue(Storage::Streams::IDataWriter *,Rect);
				};

				struct PropertyValueTraits<1>
				{
					static long CreatePropertyValue(unsigned char const &,IPropertyValueStatics *,IInspectable * *);
				};

				struct PropertyValueTraits<2>
				{
					static long CreatePropertyValue(short const &,IPropertyValueStatics *,IInspectable * *);
				};

				struct PropertyValueTraits<3>
				{
					static long CreatePropertyValue(unsigned short const &,IPropertyValueStatics *,IInspectable * *);
				};

				struct PropertyValueTraits<4>
				{
					static long CreatePropertyValue(int const &,IPropertyValueStatics *,IInspectable * *);
				};

				struct PropertyValueTraits<6>
				{
					static long CreatePropertyValue(__int64 const &,IPropertyValueStatics *,IInspectable * *);
				};

				struct PropertyValueTraits<7>
				{
					static long CreatePropertyValue(unsigned __int64 const &,IPropertyValueStatics *,IInspectable * *);
				};

				struct PropertyValueTraits<8>
				{
					static long CreatePropertyValue(float const &,IPropertyValueStatics *,IInspectable * *);
				};

				struct PropertyValueTraits<9>
				{
					static long CreatePropertyValue(double const &,IPropertyValueStatics *,IInspectable * *);
					static long UnboxPropertyValue(IInspectable *,double *);
				};

				struct PropertyValueTraitsLimits
				{
					static long CheckBufferOverrun(Storage::Streams::IDataReader *,unsigned int);
				};

				long CreatePropertyValueStatics(IPropertyValueStatics * *);
				long ReadArrayPropertyValue<1026>(Storage::Streams::IDataReader *,IPropertyValueStatics *,IInspectable * *);
				long ReadArrayPropertyValue<1027>(Storage::Streams::IDataReader *,IPropertyValueStatics *,IInspectable * *);
				long ReadArrayPropertyValue<1028>(Storage::Streams::IDataReader *,IPropertyValueStatics *,IInspectable * *);
				long ReadArrayPropertyValue<1029>(Storage::Streams::IDataReader *,IPropertyValueStatics *,IInspectable * *);
				long ReadArrayPropertyValue<1030>(Storage::Streams::IDataReader *,IPropertyValueStatics *,IInspectable * *);
				long ReadArrayPropertyValue<1031>(Storage::Streams::IDataReader *,IPropertyValueStatics *,IInspectable * *);
				long ReadArrayPropertyValue<1032>(Storage::Streams::IDataReader *,IPropertyValueStatics *,IInspectable * *);
				long ReadArrayPropertyValue<1033>(Storage::Streams::IDataReader *,IPropertyValueStatics *,IInspectable * *);
				long ReadArrayPropertyValue<1034>(Storage::Streams::IDataReader *,IPropertyValueStatics *,IInspectable * *);
				long ReadArrayPropertyValue<1035>(Storage::Streams::IDataReader *,IPropertyValueStatics *,IInspectable * *);
				long ReadArrayPropertyValue<1038>(Storage::Streams::IDataReader *,IPropertyValueStatics *,IInspectable * *);
				long ReadArrayPropertyValue<1039>(Storage::Streams::IDataReader *,IPropertyValueStatics *,IInspectable * *);
				long ReadArrayPropertyValue<1040>(Storage::Streams::IDataReader *,IPropertyValueStatics *,IInspectable * *);
				long ReadArrayPropertyValue<1041>(Storage::Streams::IDataReader *,IPropertyValueStatics *,IInspectable * *);
				long ReadArrayPropertyValue<1042>(Storage::Streams::IDataReader *,IPropertyValueStatics *,IInspectable * *);
				long ReadArrayPropertyValue<1043>(Storage::Streams::IDataReader *,IPropertyValueStatics *,IInspectable * *);
				long WriteArrayPropertyValue<1025>(Storage::Streams::IDataWriter *,IInspectable *);
				long WriteArrayPropertyValue<1026>(Storage::Streams::IDataWriter *,IInspectable *);
				long WriteArrayPropertyValue<1027>(Storage::Streams::IDataWriter *,IInspectable *);
				long WriteArrayPropertyValue<1028>(Storage::Streams::IDataWriter *,IInspectable *);
				long WriteArrayPropertyValue<1029>(Storage::Streams::IDataWriter *,IInspectable *);
				long WriteArrayPropertyValue<1030>(Storage::Streams::IDataWriter *,IInspectable *);
				long WriteArrayPropertyValue<1031>(Storage::Streams::IDataWriter *,IInspectable *);
				long WriteArrayPropertyValue<1032>(Storage::Streams::IDataWriter *,IInspectable *);
				long WriteArrayPropertyValue<1033>(Storage::Streams::IDataWriter *,IInspectable *);
				long WriteArrayPropertyValue<1034>(Storage::Streams::IDataWriter *,IInspectable *);
				long WriteArrayPropertyValue<1035>(Storage::Streams::IDataWriter *,IInspectable *);
				long WriteArrayPropertyValue<1036>(Storage::Streams::IDataWriter *,IInspectable *);
				long WriteArrayPropertyValue<1038>(Storage::Streams::IDataWriter *,IInspectable *);
				long WriteArrayPropertyValue<1039>(Storage::Streams::IDataWriter *,IInspectable *);
				long WriteArrayPropertyValue<1040>(Storage::Streams::IDataWriter *,IInspectable *);
				long WriteArrayPropertyValue<1041>(Storage::Streams::IDataWriter *,IInspectable *);
				long WriteArrayPropertyValue<1042>(Storage::Streams::IDataWriter *,IInspectable *);
				long WriteArrayPropertyValue<1043>(Storage::Streams::IDataWriter *,IInspectable *);
				long WriteSinglePropertyValue<16>(Storage::Streams::IDataWriter *,IInspectable *);
				long WriteSinglePropertyValue<19>(Storage::Streams::IDataWriter *,IInspectable *);
				long WriteSinglePropertyValue<7>(Storage::Streams::IDataWriter *,IInspectable *);
				long _IteratorGetMany<IIterator_impl<IKeyValuePair<HSTRING__ *,HSTRING__ *> *,1>,IKeyValuePair<HSTRING__ *,HSTRING__ *> *>(IIterator_impl<IKeyValuePair<HSTRING__ *,HSTRING__ *> *,1> *,unsigned int,IKeyValuePair<HSTRING__ *,HSTRING__ *> * *,unsigned int *);
				long _IteratorGetMany<IIterator_impl<IKeyValuePair<HSTRING__ *,IInspectable *> *,1>,IKeyValuePair<HSTRING__ *,IInspectable *> *>(IIterator_impl<IKeyValuePair<HSTRING__ *,IInspectable *> *,1> *,unsigned int,IKeyValuePair<HSTRING__ *,IInspectable *> * *,unsigned int *);
				long _IteratorGetMany<IIterator_impl<IKeyValuePair<HSTRING__ *,unsigned char> *,1>,IKeyValuePair<HSTRING__ *,unsigned char> *>(IIterator_impl<IKeyValuePair<HSTRING__ *,unsigned char> *,1> *,unsigned int,IKeyValuePair<HSTRING__ *,unsigned char> * *,unsigned int *);
			};

			struct IIterator_impl<IKeyValuePair<HSTRING__ *,HSTRING__ *> *,1>
			{
				virtual long GetMany(unsigned int,IKeyValuePair<HSTRING__ *,HSTRING__ *> * *,unsigned int *);
			};

			struct IIterator_impl<IKeyValuePair<HSTRING__ *,IInspectable *> *,1>
			{
				virtual long GetMany(unsigned int,IKeyValuePair<HSTRING__ *,IInspectable *> * *,unsigned int *);
			};

			struct IIterator_impl<IKeyValuePair<HSTRING__ *,unsigned char> *,1>
			{
				virtual long GetMany(unsigned int,IKeyValuePair<HSTRING__ *,unsigned char> * *,unsigned int *);
			};

			struct InMemoryPropertyStore
			{
				static TrustLevel InternalGetTrustLevel();
				static wchar_t const * InternalGetRuntimeClassName();
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct InMemoryPropertyStoreNonAgile
			{
				InMemoryPropertyStoreNonAgile();
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct InMemoryPropertyStore_Impl<0>
			{
				long Initialize();
				virtual long Clear();
				virtual long First(IIterator<IKeyValuePair<HSTRING__ *,IInspectable *> *> * *);
				virtual long GetView(IMapView<HSTRING__ *,IInspectable *> * *);
				virtual long HasKey(HSTRING__ *,unsigned char *);
				virtual long Insert(HSTRING__ *,IInspectable *,unsigned char *);
				virtual long Lookup(HSTRING__ *,IInspectable * *);
				virtual long Remove(HSTRING__ *);
				virtual long add_MapChanged(MapChangedEventHandler<HSTRING__ *,IInspectable *> *,EventRegistrationToken *);
				virtual long get_Size(unsigned int *);
				virtual long remove_MapChanged(EventRegistrationToken);
			};

			struct InMemoryPropertyStore_Impl<1>
			{
				InMemoryPropertyStore_Impl<1>();
				long Initialize();
				virtual long Clear();
				virtual long First(IIterator<IKeyValuePair<HSTRING__ *,IInspectable *> *> * *);
				virtual long GetView(IMapView<HSTRING__ *,IInspectable *> * *);
				virtual long HasKey(HSTRING__ *,unsigned char *);
				virtual long Insert(HSTRING__ *,IInspectable *,unsigned char *);
				virtual long Lookup(HSTRING__ *,IInspectable * *);
				virtual long Remove(HSTRING__ *);
				virtual long add_MapChanged(MapChangedEventHandler<HSTRING__ *,IInspectable *> *,EventRegistrationToken *);
				virtual long get_Size(unsigned int *);
				virtual long remove_MapChanged(EventRegistrationToken);
				~InMemoryPropertyStore_Impl<1>();
			};

			namespace Internal
			{
				class HashMap<HSTRING__ *,HSTRING__ *,DefaultHash<HSTRING__ *>,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,HashMapOptions<HSTRING__ *,HSTRING__ *,DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >
				{
					class Iterator
					{
						long EnsureVersionMatches();
					public:
						Iterator(HashMap<HSTRING__ *,HSTRING__ *,DefaultHash<HSTRING__ *>,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,HashMapOptions<HSTRING__ *,HSTRING__ *,DefaultLifetimeTraits<HSTRING__ *>,1,1,0> > *);
						virtual long GetIids(unsigned long *,_GUID * *);
						virtual long GetMany(unsigned int,IKeyValuePair<HSTRING__ *,HSTRING__ *> * * const,unsigned int *);
						virtual long GetRuntimeClassName(HSTRING__ * *);
						virtual long GetTrustLevel(TrustLevel *);
						virtual long MoveNext(unsigned char *);
						virtual long QueryInterface(_GUID const &,void * *);
						virtual long get_Current(IKeyValuePair<HSTRING__ *,HSTRING__ *> * *);
						virtual long get_HasCurrent(unsigned char *);
						virtual unsigned long AddRef();
						virtual unsigned long Release();
					};

					class View
					{
						long EnsureVersionMatches();
					public:
						View(HashMap<HSTRING__ *,HSTRING__ *,DefaultHash<HSTRING__ *>,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,HashMapOptions<HSTRING__ *,HSTRING__ *,DefaultLifetimeTraits<HSTRING__ *>,1,1,0> > *,DefaultEqualityPredicate<HSTRING__ *>);
						virtual long First(IIterator<IKeyValuePair<HSTRING__ *,HSTRING__ *> *> * *);
						virtual long GetIids(unsigned long *,_GUID * *);
						virtual long GetRuntimeClassName(HSTRING__ * *);
						virtual long GetTrustLevel(TrustLevel *);
						virtual long HasKey(HSTRING__ *,unsigned char *);
						virtual long Lookup(HSTRING__ *,HSTRING__ * *);
						virtual long QueryInterface(_GUID const &,void * *);
						virtual long Split(IMapView<HSTRING__ *,HSTRING__ *> * *,IMapView<HSTRING__ *,HSTRING__ *> * *);
						virtual long get_Size(unsigned int *);
						virtual unsigned long AddRef();
						virtual unsigned long Release();
					};

					long EnsureInitialized();
					static void _Free(XWinRT::XHashMap<HSTRING__ *,HSTRING__ *,HashMap<HSTRING__ *,HSTRING__ *,DefaultHash<HSTRING__ *>,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,HashMapOptions<HSTRING__ *,HSTRING__ *,DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::KeyTraits,XWinRT::CElementTraits<HSTRING__ *> > *);
					void _EraseAll(XWinRT::XHashMap<HSTRING__ *,HSTRING__ *,HashMap<HSTRING__ *,HSTRING__ *,DefaultHash<HSTRING__ *>,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,HashMapOptions<HSTRING__ *,HSTRING__ *,DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::KeyTraits,XWinRT::CElementTraits<HSTRING__ *> > *);
				protected:
					virtual ~HashMap<HSTRING__ *,HSTRING__ *,DefaultHash<HSTRING__ *>,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,HashMapOptions<HSTRING__ *,HSTRING__ *,DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >();
				public:
					HashMap<HSTRING__ *,HSTRING__ *,DefaultHash<HSTRING__ *>,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,HashMapOptions<HSTRING__ *,HSTRING__ *,DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >(DefaultHash<HSTRING__ *> const &,DefaultEqualityPredicate<HSTRING__ *> const &,HashMap<HSTRING__ *,HSTRING__ *,DefaultHash<HSTRING__ *>,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,HashMapOptions<HSTRING__ *,HSTRING__ *,DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::permission);
					static long Make(DefaultHash<HSTRING__ *> const &,DefaultEqualityPredicate<HSTRING__ *> const &,HashMap<HSTRING__ *,HSTRING__ *,DefaultHash<HSTRING__ *>,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,HashMapOptions<HSTRING__ *,HSTRING__ *,DefaultLifetimeTraits<HSTRING__ *>,1,1,0> > * *);
					virtual long Clear();
					virtual long First(IIterator<IKeyValuePair<HSTRING__ *,HSTRING__ *> *> * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long GetView(IMapView<HSTRING__ *,HSTRING__ *> * *);
					virtual long HasKey(HSTRING__ *,unsigned char *);
					virtual long Insert(HSTRING__ *,HSTRING__ *,unsigned char *);
					virtual long Lookup(HSTRING__ *,HSTRING__ * *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long Remove(HSTRING__ *);
					virtual long add_MapChanged(MapChangedEventHandler<HSTRING__ *,HSTRING__ *> *,EventRegistrationToken *);
					virtual long get_Size(unsigned int *);
					virtual long remove_MapChanged(EventRegistrationToken);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				class HashMap<HSTRING__ *,IInspectable *,DefaultHash<HSTRING__ *>,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<IInspectable *>,HashMapOptions<HSTRING__ *,IInspectable *,DefaultLifetimeTraits<HSTRING__ *>,1,0,0> >
				{
					class Iterator
					{
						long EnsureVersionMatches();
					public:
						Iterator(HashMap<HSTRING__ *,IInspectable *,DefaultHash<HSTRING__ *>,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<IInspectable *>,HashMapOptions<HSTRING__ *,IInspectable *,DefaultLifetimeTraits<HSTRING__ *>,1,0,0> > *);
						virtual long GetIids(unsigned long *,_GUID * *);
						virtual long GetMany(unsigned int,IKeyValuePair<HSTRING__ *,IInspectable *> * * const,unsigned int *);
						virtual long GetRuntimeClassName(HSTRING__ * *);
						virtual long GetTrustLevel(TrustLevel *);
						virtual long MoveNext(unsigned char *);
						virtual long QueryInterface(_GUID const &,void * *);
						virtual long get_Current(IKeyValuePair<HSTRING__ *,IInspectable *> * *);
						virtual long get_HasCurrent(unsigned char *);
						virtual unsigned long AddRef();
						virtual unsigned long Release();
					};

					class View
					{
						long EnsureVersionMatches();
					public:
						View(HashMap<HSTRING__ *,IInspectable *,DefaultHash<HSTRING__ *>,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<IInspectable *>,HashMapOptions<HSTRING__ *,IInspectable *,DefaultLifetimeTraits<HSTRING__ *>,1,0,0> > *,DefaultEqualityPredicate<HSTRING__ *>);
						virtual long First(IIterator<IKeyValuePair<HSTRING__ *,IInspectable *> *> * *);
						virtual long GetIids(unsigned long *,_GUID * *);
						virtual long GetRuntimeClassName(HSTRING__ * *);
						virtual long GetTrustLevel(TrustLevel *);
						virtual long HasKey(HSTRING__ *,unsigned char *);
						virtual long Lookup(HSTRING__ *,IInspectable * *);
						virtual long QueryInterface(_GUID const &,void * *);
						virtual long Split(IMapView<HSTRING__ *,IInspectable *> * *,IMapView<HSTRING__ *,IInspectable *> * *);
						virtual long get_Size(unsigned int *);
						virtual unsigned long AddRef();
						virtual unsigned long Release();
					};

					long EnsureInitialized();
					static void _Free(XWinRT::XHashMap<HSTRING__ *,IInspectable *,HashMap<HSTRING__ *,IInspectable *,DefaultHash<HSTRING__ *>,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<IInspectable *>,HashMapOptions<HSTRING__ *,IInspectable *,DefaultLifetimeTraits<HSTRING__ *>,1,0,0> >::KeyTraits,XWinRT::CElementTraits<IInspectable *> > *);
					void _EraseAll(XWinRT::XHashMap<HSTRING__ *,IInspectable *,HashMap<HSTRING__ *,IInspectable *,DefaultHash<HSTRING__ *>,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<IInspectable *>,HashMapOptions<HSTRING__ *,IInspectable *,DefaultLifetimeTraits<HSTRING__ *>,1,0,0> >::KeyTraits,XWinRT::CElementTraits<IInspectable *> > *);
				protected:
					virtual ~HashMap<HSTRING__ *,IInspectable *,DefaultHash<HSTRING__ *>,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<IInspectable *>,HashMapOptions<HSTRING__ *,IInspectable *,DefaultLifetimeTraits<HSTRING__ *>,1,0,0> >();
				public:
					HashMap<HSTRING__ *,IInspectable *,DefaultHash<HSTRING__ *>,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<IInspectable *>,HashMapOptions<HSTRING__ *,IInspectable *,DefaultLifetimeTraits<HSTRING__ *>,1,0,0> >(DefaultHash<HSTRING__ *> const &,DefaultEqualityPredicate<HSTRING__ *> const &,HashMap<HSTRING__ *,IInspectable *,DefaultHash<HSTRING__ *>,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<IInspectable *>,HashMapOptions<HSTRING__ *,IInspectable *,DefaultLifetimeTraits<HSTRING__ *>,1,0,0> >::permission);
					static long Make(DefaultHash<HSTRING__ *> const &,DefaultEqualityPredicate<HSTRING__ *> const &,HashMap<HSTRING__ *,IInspectable *,DefaultHash<HSTRING__ *>,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<IInspectable *>,HashMapOptions<HSTRING__ *,IInspectable *,DefaultLifetimeTraits<HSTRING__ *>,1,0,0> > * *);
					virtual long Clear();
					virtual long First(IIterator<IKeyValuePair<HSTRING__ *,IInspectable *> *> * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long GetView(IMapView<HSTRING__ *,IInspectable *> * *);
					virtual long HasKey(HSTRING__ *,unsigned char *);
					virtual long Insert(HSTRING__ *,IInspectable *,unsigned char *);
					virtual long Lookup(HSTRING__ *,IInspectable * *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long Remove(HSTRING__ *);
					virtual long add_MapChanged(MapChangedEventHandler<HSTRING__ *,IInspectable *> *,EventRegistrationToken *);
					virtual long get_Size(unsigned int *);
					virtual long remove_MapChanged(EventRegistrationToken);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				class HashMap<HSTRING__ *,IInspectable *,DefaultHash<HSTRING__ *>,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<IInspectable *>,HashMapOptions<HSTRING__ *,IInspectable *,DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >
				{
					class Iterator
					{
						long EnsureVersionMatches();
					public:
						virtual long GetIids(unsigned long *,_GUID * *);
						virtual long GetMany(unsigned int,IKeyValuePair<HSTRING__ *,IInspectable *> * * const,unsigned int *);
						virtual long GetRuntimeClassName(HSTRING__ * *);
						virtual long GetTrustLevel(TrustLevel *);
						virtual long MoveNext(unsigned char *);
						virtual long QueryInterface(_GUID const &,void * *);
						virtual long get_Current(IKeyValuePair<HSTRING__ *,IInspectable *> * *);
						virtual long get_HasCurrent(unsigned char *);
						virtual unsigned long AddRef();
						virtual unsigned long Release();
					};

					class View
					{
						long EnsureVersionMatches();
					public:
						virtual long First(IIterator<IKeyValuePair<HSTRING__ *,IInspectable *> *> * *);
						virtual long GetIids(unsigned long *,_GUID * *);
						virtual long GetRuntimeClassName(HSTRING__ * *);
						virtual long GetTrustLevel(TrustLevel *);
						virtual long HasKey(HSTRING__ *,unsigned char *);
						virtual long Lookup(HSTRING__ *,IInspectable * *);
						virtual long QueryInterface(_GUID const &,void * *);
						virtual long Split(IMapView<HSTRING__ *,IInspectable *> * *,IMapView<HSTRING__ *,IInspectable *> * *);
						virtual long get_Size(unsigned int *);
						virtual unsigned long AddRef();
						virtual unsigned long Release();
					};

					long EnsureInitialized();
					static void _Free(XWinRT::XHashMap<HSTRING__ *,XWinRT::detail::GitStorageType<IInspectable>,HashMap<HSTRING__ *,IInspectable *,DefaultHash<HSTRING__ *>,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<IInspectable *>,HashMapOptions<HSTRING__ *,IInspectable *,DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable> > > *);
					void _EraseAll(XWinRT::XHashMap<HSTRING__ *,XWinRT::detail::GitStorageType<IInspectable>,HashMap<HSTRING__ *,IInspectable *,DefaultHash<HSTRING__ *>,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<IInspectable *>,HashMapOptions<HSTRING__ *,IInspectable *,DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable> > > *);
				public:
					virtual long Clear();
					virtual long First(IIterator<IKeyValuePair<HSTRING__ *,IInspectable *> *> * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long GetView(IMapView<HSTRING__ *,IInspectable *> * *);
					virtual long HasKey(HSTRING__ *,unsigned char *);
					virtual long Insert(HSTRING__ *,IInspectable *,unsigned char *);
					virtual long Lookup(HSTRING__ *,IInspectable * *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long Remove(HSTRING__ *);
					virtual long add_MapChanged(MapChangedEventHandler<HSTRING__ *,IInspectable *> *,EventRegistrationToken *);
					virtual long get_Size(unsigned int *);
					virtual long remove_MapChanged(EventRegistrationToken);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				class HashMap<HSTRING__ *,unsigned char,DefaultHash<HSTRING__ *>,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<unsigned char>,DefaultHashMapOptions<HSTRING__ *,unsigned char,DefaultLifetimeTraits<HSTRING__ *> > >
				{
					class Iterator
					{
						long EnsureVersionMatches();
					public:
						Iterator(HashMap<HSTRING__ *,unsigned char,DefaultHash<HSTRING__ *>,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<unsigned char>,DefaultHashMapOptions<HSTRING__ *,unsigned char,DefaultLifetimeTraits<HSTRING__ *> > > *);
						virtual long GetIids(unsigned long *,_GUID * *);
						virtual long GetMany(unsigned int,IKeyValuePair<HSTRING__ *,unsigned char> * * const,unsigned int *);
						virtual long GetRuntimeClassName(HSTRING__ * *);
						virtual long GetTrustLevel(TrustLevel *);
						virtual long MoveNext(unsigned char *);
						virtual long QueryInterface(_GUID const &,void * *);
						virtual long get_Current(IKeyValuePair<HSTRING__ *,unsigned char> * *);
						virtual long get_HasCurrent(unsigned char *);
						virtual unsigned long AddRef();
						virtual unsigned long Release();
					};

					class View
					{
						long EnsureVersionMatches();
					public:
						View(HashMap<HSTRING__ *,unsigned char,DefaultHash<HSTRING__ *>,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<unsigned char>,DefaultHashMapOptions<HSTRING__ *,unsigned char,DefaultLifetimeTraits<HSTRING__ *> > > *,DefaultEqualityPredicate<HSTRING__ *>);
						virtual long First(IIterator<IKeyValuePair<HSTRING__ *,unsigned char> *> * *);
						virtual long GetIids(unsigned long *,_GUID * *);
						virtual long GetRuntimeClassName(HSTRING__ * *);
						virtual long GetTrustLevel(TrustLevel *);
						virtual long HasKey(HSTRING__ *,unsigned char *);
						virtual long Lookup(HSTRING__ *,unsigned char *);
						virtual long QueryInterface(_GUID const &,void * *);
						virtual long Split(IMapView<HSTRING__ *,unsigned char> * *,IMapView<HSTRING__ *,unsigned char> * *);
						virtual long get_Size(unsigned int *);
						virtual unsigned long AddRef();
						virtual unsigned long Release();
					};

					long EnsureInitialized();
					static void _Free(XWinRT::XHashMap<HSTRING__ *,unsigned char,HashMap<HSTRING__ *,unsigned char,DefaultHash<HSTRING__ *>,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<unsigned char>,DefaultHashMapOptions<HSTRING__ *,unsigned char,DefaultLifetimeTraits<HSTRING__ *> > >::KeyTraits,XWinRT::CElementTraits<unsigned char> > *);
					void _EraseAll(XWinRT::XHashMap<HSTRING__ *,unsigned char,HashMap<HSTRING__ *,unsigned char,DefaultHash<HSTRING__ *>,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<unsigned char>,DefaultHashMapOptions<HSTRING__ *,unsigned char,DefaultLifetimeTraits<HSTRING__ *> > >::KeyTraits,XWinRT::CElementTraits<unsigned char> > *);
				public:
					HashMap<HSTRING__ *,unsigned char,DefaultHash<HSTRING__ *>,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<unsigned char>,DefaultHashMapOptions<HSTRING__ *,unsigned char,DefaultLifetimeTraits<HSTRING__ *> > >(DefaultHash<HSTRING__ *> const &,DefaultEqualityPredicate<HSTRING__ *> const &,HashMap<HSTRING__ *,unsigned char,DefaultHash<HSTRING__ *>,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<unsigned char>,DefaultHashMapOptions<HSTRING__ *,unsigned char,DefaultLifetimeTraits<HSTRING__ *> > >::permission);
					virtual long Clear();
					virtual long First(IIterator<IKeyValuePair<HSTRING__ *,unsigned char> *> * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long GetView(IMapView<HSTRING__ *,unsigned char> * *);
					virtual long HasKey(HSTRING__ *,unsigned char *);
					virtual long Insert(HSTRING__ *,unsigned char,unsigned char *);
					virtual long Lookup(HSTRING__ *,unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long Remove(HSTRING__ *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct HashMapOptions<HSTRING__ *,HSTRING__ *,DefaultLifetimeTraits<HSTRING__ *>,1,1,0>
				{
					static long RaiseEvent(XWinRT::detail::ReentrancyGuard<1> &,GitEventSource<MapChangedEventHandler<HSTRING__ *,HSTRING__ *>,Microsoft::WRL::InvokeModeOptions<-2> > &,IObservableMap<HSTRING__ *,HSTRING__ *> *,CollectionChange,HSTRING__ *);
				};

				struct HashMapOptions<HSTRING__ *,IInspectable *,DefaultLifetimeTraits<HSTRING__ *>,1,0,0>
				{
					static long RaiseEvent(XWinRT::detail::ReentrancyGuard<1> &,Microsoft::WRL::EventSource<MapChangedEventHandler<HSTRING__ *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2> > &,IObservableMap<HSTRING__ *,IInspectable *> *,CollectionChange,HSTRING__ *);
				};

				struct HashMapOptions<HSTRING__ *,IInspectable *,DefaultLifetimeTraits<HSTRING__ *>,1,1,0>
				{
					static long RaiseEvent(XWinRT::detail::ReentrancyGuard<1> &,GitEventSource<MapChangedEventHandler<HSTRING__ *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2> > &,IObservableMap<HSTRING__ *,IInspectable *> *,CollectionChange,HSTRING__ *);
				};

				struct HashMapOptions<HSTRING__ *,unsigned char,DefaultLifetimeTraits<HSTRING__ *>,0,0,0>
				{
					static long RaiseEvent(...);
				};

				struct MapChangedEventArgs<HSTRING__ *,DefaultLifetimeTraits<HSTRING__ *> >
				{
					MapChangedEventArgs<HSTRING__ *,DefaultLifetimeTraits<HSTRING__ *> >(CollectionChange);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_CollectionChange(CollectionChange *);
					virtual long get_Key(HSTRING__ * *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				class NaiveSplitView<HSTRING__ *,HSTRING__ *,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,HashMapOptions<HSTRING__ *,HSTRING__ *,DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >
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
						virtual long get_Current(IKeyValuePair<HSTRING__ *,HSTRING__ *> * *);
						virtual long get_HasCurrent(unsigned char *);
						virtual unsigned long AddRef();
						virtual unsigned long Release();
					};

					struct ChunkView
					{
						long Initialize(IIterator<IKeyValuePair<HSTRING__ *,HSTRING__ *> *> *);
						virtual long First(IIterator<IKeyValuePair<HSTRING__ *,HSTRING__ *> *> * *);
						virtual long GetIids(unsigned long *,_GUID * *);
						virtual long GetRuntimeClassName(HSTRING__ * *);
						virtual long GetTrustLevel(TrustLevel *);
						virtual long HasKey(HSTRING__ *,unsigned char *);
						virtual long Lookup(HSTRING__ *,HSTRING__ * *);
						virtual long QueryInterface(_GUID const &,void * *);
						virtual long Split(IMapView<HSTRING__ *,HSTRING__ *> * *,IMapView<HSTRING__ *,HSTRING__ *> * *);
						virtual long get_Size(unsigned int *);
						virtual unsigned long AddRef();
						virtual unsigned long Release();
					};

					class SplitIterator
					{
						long EnsureForced();
					public:
						SplitIterator(NaiveSplitView<HSTRING__ *,HSTRING__ *,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,HashMapOptions<HSTRING__ *,HSTRING__ *,DefaultLifetimeTraits<HSTRING__ *>,1,1,0> > *);
						virtual long GetIids(unsigned long *,_GUID * *);
						virtual long GetRuntimeClassName(HSTRING__ * *);
						virtual long GetTrustLevel(TrustLevel *);
						virtual long MoveNext(unsigned char *);
						virtual long QueryInterface(_GUID const &,void * *);
						virtual long get_Current(IKeyValuePair<HSTRING__ *,HSTRING__ *> * *);
						virtual long get_HasCurrent(unsigned char *);
						virtual unsigned long AddRef();
						virtual unsigned long Release();
					};

					long EnsureInitialized();
					long Force();
					long Initialize(IMapView<HSTRING__ *,HSTRING__ *> *);
					long IterateOnChunks<<lambda_2bed7443519e714ae6f27ff7c6c0c6d2>,<lambda_8fd53b4ff9dd1390026105b0523502b1> >(<lambda_2bed7443519e714ae6f27ff7c6c0c6d2>,<lambda_8fd53b4ff9dd1390026105b0523502b1>);
					long IterateOnChunks<<lambda_da15cba1c171350df0715a27c9c7bc9b>,<lambda_6a673930184ab4efdbab8b810a3e6d2b> >(<lambda_da15cba1c171350df0715a27c9c7bc9b>,<lambda_6a673930184ab4efdbab8b810a3e6d2b>);
				public:
					NaiveSplitView<HSTRING__ *,HSTRING__ *,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,HashMapOptions<HSTRING__ *,HSTRING__ *,DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >(DefaultEqualityPredicate<HSTRING__ *> const &,NaiveSplitView<HSTRING__ *,HSTRING__ *,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,HashMapOptions<HSTRING__ *,HSTRING__ *,DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::permission);
					static long Split(IMapView<HSTRING__ *,HSTRING__ *> *,IMapView<HSTRING__ *,HSTRING__ *> * *,IMapView<HSTRING__ *,HSTRING__ *> * *,DefaultEqualityPredicate<HSTRING__ *> const &);
					virtual long First(IIterator<IKeyValuePair<HSTRING__ *,HSTRING__ *> *> * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long HasKey(HSTRING__ *,unsigned char *);
					virtual long Lookup(HSTRING__ *,HSTRING__ * *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long Split(IMapView<HSTRING__ *,HSTRING__ *> * *,IMapView<HSTRING__ *,HSTRING__ *> * *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				class NaiveSplitView<HSTRING__ *,IInspectable *,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<IInspectable *>,HashMapOptions<HSTRING__ *,IInspectable *,DefaultLifetimeTraits<HSTRING__ *>,1,0,0> >
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
						virtual long get_Current(IKeyValuePair<HSTRING__ *,IInspectable *> * *);
						virtual long get_HasCurrent(unsigned char *);
						virtual unsigned long AddRef();
						virtual unsigned long Release();
					};

					struct ChunkView
					{
						long Initialize(IIterator<IKeyValuePair<HSTRING__ *,IInspectable *> *> *);
						virtual long First(IIterator<IKeyValuePair<HSTRING__ *,IInspectable *> *> * *);
						virtual long GetIids(unsigned long *,_GUID * *);
						virtual long GetRuntimeClassName(HSTRING__ * *);
						virtual long GetTrustLevel(TrustLevel *);
						virtual long HasKey(HSTRING__ *,unsigned char *);
						virtual long Lookup(HSTRING__ *,IInspectable * *);
						virtual long QueryInterface(_GUID const &,void * *);
						virtual long Split(IMapView<HSTRING__ *,IInspectable *> * *,IMapView<HSTRING__ *,IInspectable *> * *);
						virtual long get_Size(unsigned int *);
						virtual unsigned long AddRef();
						virtual unsigned long Release();
					};

					class SplitIterator
					{
						long EnsureForced();
					public:
						SplitIterator(NaiveSplitView<HSTRING__ *,IInspectable *,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<IInspectable *>,HashMapOptions<HSTRING__ *,IInspectable *,DefaultLifetimeTraits<HSTRING__ *>,1,0,0> > *);
						virtual long GetIids(unsigned long *,_GUID * *);
						virtual long GetRuntimeClassName(HSTRING__ * *);
						virtual long GetTrustLevel(TrustLevel *);
						virtual long MoveNext(unsigned char *);
						virtual long QueryInterface(_GUID const &,void * *);
						virtual long get_Current(IKeyValuePair<HSTRING__ *,IInspectable *> * *);
						virtual long get_HasCurrent(unsigned char *);
						virtual unsigned long AddRef();
						virtual unsigned long Release();
					};

					long EnsureInitialized();
					long Force();
					long Initialize(IMapView<HSTRING__ *,IInspectable *> *);
					long IterateOnChunks<<lambda_3d4243aeac1e84613a22e16f25157b73>,<lambda_df22acfef833b13450ec4e95e0054730> >(<lambda_3d4243aeac1e84613a22e16f25157b73>,<lambda_df22acfef833b13450ec4e95e0054730>);
					long IterateOnChunks<<lambda_8cfe8a9f44d93fc2c89c73ab79a8696d>,<lambda_93c03426aa27c5186fc130407c6bf574> >(<lambda_8cfe8a9f44d93fc2c89c73ab79a8696d>,<lambda_93c03426aa27c5186fc130407c6bf574>);
				public:
					NaiveSplitView<HSTRING__ *,IInspectable *,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<IInspectable *>,HashMapOptions<HSTRING__ *,IInspectable *,DefaultLifetimeTraits<HSTRING__ *>,1,0,0> >(DefaultEqualityPredicate<HSTRING__ *> const &,NaiveSplitView<HSTRING__ *,IInspectable *,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<IInspectable *>,HashMapOptions<HSTRING__ *,IInspectable *,DefaultLifetimeTraits<HSTRING__ *>,1,0,0> >::permission);
					static long Split(IMapView<HSTRING__ *,IInspectable *> *,IMapView<HSTRING__ *,IInspectable *> * *,IMapView<HSTRING__ *,IInspectable *> * *,DefaultEqualityPredicate<HSTRING__ *> const &);
					virtual long First(IIterator<IKeyValuePair<HSTRING__ *,IInspectable *> *> * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long HasKey(HSTRING__ *,unsigned char *);
					virtual long Lookup(HSTRING__ *,IInspectable * *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long Split(IMapView<HSTRING__ *,IInspectable *> * *,IMapView<HSTRING__ *,IInspectable *> * *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				class NaiveSplitView<HSTRING__ *,IInspectable *,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<IInspectable *>,HashMapOptions<HSTRING__ *,IInspectable *,DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >
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
						virtual long get_Current(IKeyValuePair<HSTRING__ *,IInspectable *> * *);
						virtual long get_HasCurrent(unsigned char *);
						virtual unsigned long AddRef();
						virtual unsigned long Release();
					};

					struct ChunkView
					{
						long Initialize(IIterator<IKeyValuePair<HSTRING__ *,IInspectable *> *> *);
						virtual long First(IIterator<IKeyValuePair<HSTRING__ *,IInspectable *> *> * *);
						virtual long GetIids(unsigned long *,_GUID * *);
						virtual long GetRuntimeClassName(HSTRING__ * *);
						virtual long GetTrustLevel(TrustLevel *);
						virtual long HasKey(HSTRING__ *,unsigned char *);
						virtual long Lookup(HSTRING__ *,IInspectable * *);
						virtual long QueryInterface(_GUID const &,void * *);
						virtual long Split(IMapView<HSTRING__ *,IInspectable *> * *,IMapView<HSTRING__ *,IInspectable *> * *);
						virtual long get_Size(unsigned int *);
						virtual unsigned long AddRef();
						virtual unsigned long Release();
					};

					class SplitIterator
					{
						long EnsureForced();
					public:
						SplitIterator(NaiveSplitView<HSTRING__ *,IInspectable *,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<IInspectable *>,HashMapOptions<HSTRING__ *,IInspectable *,DefaultLifetimeTraits<HSTRING__ *>,1,1,0> > *);
						virtual long GetIids(unsigned long *,_GUID * *);
						virtual long GetRuntimeClassName(HSTRING__ * *);
						virtual long GetTrustLevel(TrustLevel *);
						virtual long MoveNext(unsigned char *);
						virtual long QueryInterface(_GUID const &,void * *);
						virtual long get_Current(IKeyValuePair<HSTRING__ *,IInspectable *> * *);
						virtual long get_HasCurrent(unsigned char *);
						virtual unsigned long AddRef();
						virtual unsigned long Release();
					};

					long EnsureInitialized();
					long Force();
					long Initialize(IMapView<HSTRING__ *,IInspectable *> *);
					long IterateOnChunks<<lambda_3b5ec179f6c5aa0d1c893ad977cd1d1d>,<lambda_ce207e427cba55e2a2142ad3b43c2908> >(<lambda_3b5ec179f6c5aa0d1c893ad977cd1d1d>,<lambda_ce207e427cba55e2a2142ad3b43c2908>);
					long IterateOnChunks<<lambda_6fc5cd8d10857f4a7b66334a66607fce>,<lambda_4ca0312fac6eb2a8a0c5ecadaf1896d4> >(<lambda_6fc5cd8d10857f4a7b66334a66607fce>,<lambda_4ca0312fac6eb2a8a0c5ecadaf1896d4>);
				public:
					NaiveSplitView<HSTRING__ *,IInspectable *,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<IInspectable *>,HashMapOptions<HSTRING__ *,IInspectable *,DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >(DefaultEqualityPredicate<HSTRING__ *> const &,NaiveSplitView<HSTRING__ *,IInspectable *,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<IInspectable *>,HashMapOptions<HSTRING__ *,IInspectable *,DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::permission);
					static long Split(IMapView<HSTRING__ *,IInspectable *> *,IMapView<HSTRING__ *,IInspectable *> * *,IMapView<HSTRING__ *,IInspectable *> * *,DefaultEqualityPredicate<HSTRING__ *> const &);
					virtual long First(IIterator<IKeyValuePair<HSTRING__ *,IInspectable *> *> * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long HasKey(HSTRING__ *,unsigned char *);
					virtual long Lookup(HSTRING__ *,IInspectable * *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long Split(IMapView<HSTRING__ *,IInspectable *> * *,IMapView<HSTRING__ *,IInspectable *> * *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				class NaiveSplitView<HSTRING__ *,unsigned char,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<unsigned char>,DefaultHashMapOptions<HSTRING__ *,unsigned char,DefaultLifetimeTraits<HSTRING__ *> > >
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
						virtual long get_Current(IKeyValuePair<HSTRING__ *,unsigned char> * *);
						virtual long get_HasCurrent(unsigned char *);
						virtual unsigned long AddRef();
						virtual unsigned long Release();
					};

					struct ChunkView
					{
						long Initialize(IIterator<IKeyValuePair<HSTRING__ *,unsigned char> *> *);
						virtual long First(IIterator<IKeyValuePair<HSTRING__ *,unsigned char> *> * *);
						virtual long GetIids(unsigned long *,_GUID * *);
						virtual long GetRuntimeClassName(HSTRING__ * *);
						virtual long GetTrustLevel(TrustLevel *);
						virtual long HasKey(HSTRING__ *,unsigned char *);
						virtual long Lookup(HSTRING__ *,unsigned char *);
						virtual long QueryInterface(_GUID const &,void * *);
						virtual long Split(IMapView<HSTRING__ *,unsigned char> * *,IMapView<HSTRING__ *,unsigned char> * *);
						virtual long get_Size(unsigned int *);
						virtual unsigned long AddRef();
						virtual unsigned long Release();
					};

					class SplitIterator
					{
						long EnsureForced();
					public:
						SplitIterator(NaiveSplitView<HSTRING__ *,unsigned char,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<unsigned char>,DefaultHashMapOptions<HSTRING__ *,unsigned char,DefaultLifetimeTraits<HSTRING__ *> > > *);
						virtual long GetIids(unsigned long *,_GUID * *);
						virtual long GetRuntimeClassName(HSTRING__ * *);
						virtual long GetTrustLevel(TrustLevel *);
						virtual long MoveNext(unsigned char *);
						virtual long QueryInterface(_GUID const &,void * *);
						virtual long get_Current(IKeyValuePair<HSTRING__ *,unsigned char> * *);
						virtual long get_HasCurrent(unsigned char *);
						virtual unsigned long AddRef();
						virtual unsigned long Release();
					};

					long EnsureInitialized();
					long Force();
					long Initialize(IMapView<HSTRING__ *,unsigned char> *);
					long IterateOnChunks<<lambda_017e9474e2b13143148cc01251c78bd7>,<lambda_585ef251e9571adc79b474b01edd8dd4> >(<lambda_017e9474e2b13143148cc01251c78bd7>,<lambda_585ef251e9571adc79b474b01edd8dd4>);
					long IterateOnChunks<<lambda_ac5bec43cc458f3162c20b1534ca33d5>,<lambda_d8cbaac0df1b387ea8fa2ac2a1f148f7> >(<lambda_ac5bec43cc458f3162c20b1534ca33d5>,<lambda_d8cbaac0df1b387ea8fa2ac2a1f148f7>);
				public:
					NaiveSplitView<HSTRING__ *,unsigned char,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<unsigned char>,DefaultHashMapOptions<HSTRING__ *,unsigned char,DefaultLifetimeTraits<HSTRING__ *> > >(DefaultEqualityPredicate<HSTRING__ *> const &,NaiveSplitView<HSTRING__ *,unsigned char,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<unsigned char>,DefaultHashMapOptions<HSTRING__ *,unsigned char,DefaultLifetimeTraits<HSTRING__ *> > >::permission);
					static long Split(IMapView<HSTRING__ *,unsigned char> *,IMapView<HSTRING__ *,unsigned char> * *,IMapView<HSTRING__ *,unsigned char> * *,DefaultEqualityPredicate<HSTRING__ *> const &);
					virtual long First(IIterator<IKeyValuePair<HSTRING__ *,unsigned char> *> * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long HasKey(HSTRING__ *,unsigned char *);
					virtual long Lookup(HSTRING__ *,unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long Split(IMapView<HSTRING__ *,unsigned char> * *,IMapView<HSTRING__ *,unsigned char> * *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				class SimpleKeyValuePair<HSTRING__ *,HSTRING__ *,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,1>
				{
					long Initialize(HSTRING__ * const &,HSTRING__ * const &);
				public:
					SimpleKeyValuePair<HSTRING__ *,HSTRING__ *,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,1>(SimpleKeyValuePair<HSTRING__ *,HSTRING__ *,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,1>::permission);
					static long Make(HSTRING__ * const &,HSTRING__ * const &,SimpleKeyValuePair<HSTRING__ *,HSTRING__ *,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,1> * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Key(HSTRING__ * *);
					virtual long get_Value(HSTRING__ * *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				class SimpleKeyValuePair<HSTRING__ *,IInspectable *,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<IInspectable *>,0>
				{
					long Initialize(HSTRING__ * const &,IInspectable * const &);
				public:
					static long Make(HSTRING__ * const &,IInspectable * const &,SimpleKeyValuePair<HSTRING__ *,IInspectable *,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<IInspectable *>,0> * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Key(HSTRING__ * *);
					virtual long get_Value(IInspectable * *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				class SimpleKeyValuePair<HSTRING__ *,IInspectable *,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<IInspectable *>,1>
				{
					long Initialize(HSTRING__ * const &,XWinRT::detail::GitStorageType<IInspectable> const &);
				public:
					SimpleKeyValuePair<HSTRING__ *,IInspectable *,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<IInspectable *>,1>(SimpleKeyValuePair<HSTRING__ *,IInspectable *,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<IInspectable *>,1>::permission);
					static long Make(HSTRING__ * const &,XWinRT::detail::GitStorageType<IInspectable> const &,SimpleKeyValuePair<HSTRING__ *,IInspectable *,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<IInspectable *>,1> * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Key(HSTRING__ * *);
					virtual long get_Value(IInspectable * *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				class SimpleKeyValuePair<HSTRING__ *,unsigned char,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<unsigned char>,0>
				{
					long Initialize(HSTRING__ * const &,unsigned char const &);
				public:
					SimpleKeyValuePair<HSTRING__ *,unsigned char,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<unsigned char>,0>(SimpleKeyValuePair<HSTRING__ *,unsigned char,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<unsigned char>,0>::permission);
					static long Make(HSTRING__ * const &,unsigned char const &,SimpleKeyValuePair<HSTRING__ *,unsigned char,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<unsigned char>,0> * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Key(HSTRING__ * *);
					virtual long get_Value(unsigned char *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

			};

			struct StringStore
			{
				StringStore();
				static TrustLevel InternalGetTrustLevel();
				static wchar_t const * InternalGetRuntimeClassName();
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct StringStore_Impl
			{
				long Initialize();
				virtual long Clear();
				virtual long First(IIterator<IKeyValuePair<HSTRING__ *,HSTRING__ *> *> * *);
				virtual long GetView(IMapView<HSTRING__ *,HSTRING__ *> * *);
				virtual long HasKey(HSTRING__ *,unsigned char *);
				virtual long Insert(HSTRING__ *,HSTRING__ *,unsigned char *);
				virtual long Lookup(HSTRING__ *,HSTRING__ * *);
				virtual long Remove(HSTRING__ *);
				virtual long add_MapChanged(MapChangedEventHandler<HSTRING__ *,HSTRING__ *> *,EventRegistrationToken *);
				virtual long get_Size(unsigned int *);
				virtual long remove_MapChanged(EventRegistrationToken);
				~StringStore_Impl();
			};

			struct ValueSet
			{
				ValueSet();
				static TrustLevel InternalGetTrustLevel();
				static wchar_t const * InternalGetRuntimeClassName();
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long Insert(HSTRING__ *,IInspectable *,unsigned char *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

		};

		struct DeferralFactory
		{
			virtual long Create(IDeferralCompletedHandler *,IDeferral * *);
		};

		class DeferralImpl
		{
			void InvokeCompletedHandler();
		public:
			DeferralImpl();
			static TrustLevel InternalGetTrustLevel();
			static wchar_t const * InternalGetRuntimeClassName();
			virtual long Close();
			virtual long Complete();
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		namespace Detail
		{
			class IPropertyValueRawAccess
			{
				long InspectableArrayGetMarshalSizeMaxHelper(unsigned long,unsigned long,unsigned long *);
				long InspectableArrayMarshalInterfaceHelper(IStream *,unsigned long,unsigned long);
			public:
				bool IsInterfaceSupported(_GUID const &);
				long IPVRA_GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
				long IPVRA_GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
				long IPVRA_MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			};

			long AdvanceStreamOverStringArrayData(IStream *);
			long AllocArray<DateTime>(unsigned int,DateTime * *);
			long AllocArray<HSTRING__ *>(unsigned int,HSTRING__ * * *);
			long AllocArray<Point>(unsigned int,Point * *);
			long AllocArray<Rect>(unsigned int,Rect * *);
			long AllocArray<Size>(unsigned int,Size * *);
			long AllocArray<TimeSpan>(unsigned int,TimeSpan * *);
			long AllocArray<_GUID>(unsigned int,_GUID * *);
			long AllocArray<__int64>(unsigned int,__int64 * *);
			long AllocArray<double>(unsigned int,double * *);
			long AllocArray<float>(unsigned int,float * *);
			long AllocArray<int>(unsigned int,int * *);
			long AllocArray<short>(unsigned int,short * *);
			long AllocArray<unsigned __int64>(unsigned int,unsigned __int64 * *);
			long AllocArray<unsigned char>(unsigned int,unsigned char * *);
			long AllocArray<unsigned int>(unsigned int,unsigned int * *);
			long AllocArray<unsigned short>(unsigned int,unsigned short * *);
			long AllocArray<wchar_t>(unsigned int,wchar_t * *);
			long CalculateDisplacementOverArrayData<DateTime>(IStream *,_LARGE_INTEGER *);
			long CalculateDisplacementOverArrayData<Point>(IStream *,_LARGE_INTEGER *);
			long CalculateDisplacementOverArrayData<Rect>(IStream *,_LARGE_INTEGER *);
			long CalculateDisplacementOverArrayData<Size>(IStream *,_LARGE_INTEGER *);
			long CalculateDisplacementOverArrayData<TimeSpan>(IStream *,_LARGE_INTEGER *);
			long CalculateDisplacementOverArrayData<_GUID>(IStream *,_LARGE_INTEGER *);
			long CalculateDisplacementOverArrayData<__int64>(IStream *,_LARGE_INTEGER *);
			long CalculateDisplacementOverArrayData<double>(IStream *,_LARGE_INTEGER *);
			long CalculateDisplacementOverArrayData<float>(IStream *,_LARGE_INTEGER *);
			long CalculateDisplacementOverArrayData<int>(IStream *,_LARGE_INTEGER *);
			long CalculateDisplacementOverArrayData<short>(IStream *,_LARGE_INTEGER *);
			long CalculateDisplacementOverArrayData<unsigned __int64>(IStream *,_LARGE_INTEGER *);
			long CalculateDisplacementOverArrayData<unsigned char>(IStream *,_LARGE_INTEGER *);
			long CalculateDisplacementOverArrayData<unsigned int>(IStream *,_LARGE_INTEGER *);
			long CalculateDisplacementOverArrayData<unsigned short>(IStream *,_LARGE_INTEGER *);
			long CalculateDisplacementOverArrayData<wchar_t>(IStream *,_LARGE_INTEGER *);
			long CheckCreateArrayArguments<unsigned char const >(unsigned int,unsigned char const *,IInspectable * *);
			long CheckOutParam<DateTime *>(DateTime * *);
			long CheckOutParam<DateTime>(DateTime *);
			long CheckOutParam<HSTRING__ * *>(HSTRING__ * * *);
			long CheckOutParam<HSTRING__ *>(HSTRING__ * *);
			long CheckOutParam<IInspectable * *>(IInspectable * * *);
			long CheckOutParam<Point *>(Point * *);
			long CheckOutParam<Point>(Point *);
			long CheckOutParam<Rect *>(Rect * *);
			long CheckOutParam<Rect>(Rect *);
			long CheckOutParam<Size *>(Size * *);
			long CheckOutParam<Size>(Size *);
			long CheckOutParam<TimeSpan *>(TimeSpan * *);
			long CheckOutParam<TimeSpan>(TimeSpan *);
			long CheckOutParam<_GUID *>(_GUID * *);
			long CheckOutParam<_GUID>(_GUID *);
			long CheckOutParam<__int64 *>(__int64 * *);
			long CheckOutParam<__int64>(__int64 *);
			long CheckOutParam<double *>(double * *);
			long CheckOutParam<double>(double *);
			long CheckOutParam<float *>(float * *);
			long CheckOutParam<float>(float *);
			long CheckOutParam<int *>(int * *);
			long CheckOutParam<int>(int *);
			long CheckOutParam<short *>(short * *);
			long CheckOutParam<short>(short *);
			long CheckOutParam<unsigned __int64 *>(unsigned __int64 * *);
			long CheckOutParam<unsigned __int64>(unsigned __int64 *);
			long CheckOutParam<unsigned char *>(unsigned char * *);
			long CheckOutParam<unsigned char>(unsigned char *);
			long CheckOutParam<unsigned int *>(unsigned int * *);
			long CheckOutParam<unsigned int>(unsigned int *);
			long CheckOutParam<unsigned short *>(unsigned short * *);
			long CheckOutParam<unsigned short>(unsigned short *);
			long CheckOutParam<wchar_t *>(wchar_t * *);
			long CheckOutParam<wchar_t>(wchar_t *);
			long ConvertArray<DateTime *,DateTime>(Detail::TypeTag<DateTime *>,unsigned int,Internal::GitPtrSupportsAgile<IInspectable> *,unsigned int *,DateTime * *,Detail::bool_t<0>);
			long ConvertArray<HSTRING__ * *,HSTRING__ *>(Detail::TypeTag<HSTRING__ * *>,unsigned int,Internal::GitPtrSupportsAgile<IInspectable> *,unsigned int *,HSTRING__ * * *,Detail::bool_t<0>);
			long ConvertArray<Point *,Point>(Detail::TypeTag<Point *>,unsigned int,Internal::GitPtrSupportsAgile<IInspectable> *,unsigned int *,Point * *,Detail::bool_t<0>);
			long ConvertArray<Rect *,Rect>(Detail::TypeTag<Rect *>,unsigned int,Internal::GitPtrSupportsAgile<IInspectable> *,unsigned int *,Rect * *,Detail::bool_t<0>);
			long ConvertArray<Size *,Size>(Detail::TypeTag<Size *>,unsigned int,Internal::GitPtrSupportsAgile<IInspectable> *,unsigned int *,Size * *,Detail::bool_t<0>);
			long ConvertArray<TimeSpan *,TimeSpan>(Detail::TypeTag<TimeSpan *>,unsigned int,Internal::GitPtrSupportsAgile<IInspectable> *,unsigned int *,TimeSpan * *,Detail::bool_t<0>);
			long ConvertArray<_GUID *,_GUID>(Detail::TypeTag<_GUID *>,unsigned int,Internal::GitPtrSupportsAgile<IInspectable> *,unsigned int *,_GUID * *,Detail::bool_t<0>);
			long ConvertArray<__int64 *,__int64>(Detail::TypeTag<__int64 *>,unsigned int,Internal::GitPtrSupportsAgile<IInspectable> *,unsigned int *,__int64 * *,Detail::bool_t<0>);
			long ConvertArray<__int64,double *,double>(Detail::TypeTag<double *>,unsigned int,__int64 *,unsigned int *,double * *,Detail::bool_t<1>);
			long ConvertArray<__int64,float *,float>(Detail::TypeTag<float *>,unsigned int,__int64 *,unsigned int *,float * *,Detail::bool_t<1>);
			long ConvertArray<__int64,int *,int>(Detail::TypeTag<int *>,unsigned int,__int64 *,unsigned int *,int * *,Detail::bool_t<1>);
			long ConvertArray<__int64,short *,short>(Detail::TypeTag<short *>,unsigned int,__int64 *,unsigned int *,short * *,Detail::bool_t<1>);
			long ConvertArray<__int64,unsigned __int64 *,unsigned __int64>(Detail::TypeTag<unsigned __int64 *>,unsigned int,__int64 *,unsigned int *,unsigned __int64 * *,Detail::bool_t<1>);
			long ConvertArray<__int64,unsigned char *,unsigned char>(Detail::TypeTag<unsigned char *>,unsigned int,__int64 *,unsigned int *,unsigned char * *,Detail::bool_t<1>);
			long ConvertArray<__int64,unsigned int *,unsigned int>(Detail::TypeTag<unsigned int *>,unsigned int,__int64 *,unsigned int *,unsigned int * *,Detail::bool_t<1>);
			long ConvertArray<__int64,unsigned short *,unsigned short>(Detail::TypeTag<unsigned short *>,unsigned int,__int64 *,unsigned int *,unsigned short * *,Detail::bool_t<1>);
			long ConvertArray<bool *,unsigned char>(Detail::TypeTag<bool *>,unsigned int,Internal::GitPtrSupportsAgile<IInspectable> *,unsigned int *,unsigned char * *,Detail::bool_t<0>);
			long ConvertArray<double *,double>(Detail::TypeTag<double *>,unsigned int,Internal::GitPtrSupportsAgile<IInspectable> *,unsigned int *,double * *,Detail::bool_t<0>);
			long ConvertArray<double,__int64 *,__int64>(Detail::TypeTag<__int64 *>,unsigned int,double *,unsigned int *,__int64 * *,Detail::bool_t<1>);
			long ConvertArray<double,float *,float>(Detail::TypeTag<float *>,unsigned int,double *,unsigned int *,float * *,Detail::bool_t<1>);
			long ConvertArray<double,int *,int>(Detail::TypeTag<int *>,unsigned int,double *,unsigned int *,int * *,Detail::bool_t<1>);
			long ConvertArray<double,short *,short>(Detail::TypeTag<short *>,unsigned int,double *,unsigned int *,short * *,Detail::bool_t<1>);
			long ConvertArray<double,unsigned __int64 *,unsigned __int64>(Detail::TypeTag<unsigned __int64 *>,unsigned int,double *,unsigned int *,unsigned __int64 * *,Detail::bool_t<1>);
			long ConvertArray<double,unsigned char *,unsigned char>(Detail::TypeTag<unsigned char *>,unsigned int,double *,unsigned int *,unsigned char * *,Detail::bool_t<1>);
			long ConvertArray<double,unsigned int *,unsigned int>(Detail::TypeTag<unsigned int *>,unsigned int,double *,unsigned int *,unsigned int * *,Detail::bool_t<1>);
			long ConvertArray<double,unsigned short *,unsigned short>(Detail::TypeTag<unsigned short *>,unsigned int,double *,unsigned int *,unsigned short * *,Detail::bool_t<1>);
			long ConvertArray<float *,float>(Detail::TypeTag<float *>,unsigned int,Internal::GitPtrSupportsAgile<IInspectable> *,unsigned int *,float * *,Detail::bool_t<0>);
			long ConvertArray<float,__int64 *,__int64>(Detail::TypeTag<__int64 *>,unsigned int,float *,unsigned int *,__int64 * *,Detail::bool_t<1>);
			long ConvertArray<float,double *,double>(Detail::TypeTag<double *>,unsigned int,float *,unsigned int *,double * *,Detail::bool_t<1>);
			long ConvertArray<float,int *,int>(Detail::TypeTag<int *>,unsigned int,float *,unsigned int *,int * *,Detail::bool_t<1>);
			long ConvertArray<float,short *,short>(Detail::TypeTag<short *>,unsigned int,float *,unsigned int *,short * *,Detail::bool_t<1>);
			long ConvertArray<float,unsigned __int64 *,unsigned __int64>(Detail::TypeTag<unsigned __int64 *>,unsigned int,float *,unsigned int *,unsigned __int64 * *,Detail::bool_t<1>);
			long ConvertArray<float,unsigned char *,unsigned char>(Detail::TypeTag<unsigned char *>,unsigned int,float *,unsigned int *,unsigned char * *,Detail::bool_t<1>);
			long ConvertArray<float,unsigned int *,unsigned int>(Detail::TypeTag<unsigned int *>,unsigned int,float *,unsigned int *,unsigned int * *,Detail::bool_t<1>);
			long ConvertArray<float,unsigned short *,unsigned short>(Detail::TypeTag<unsigned short *>,unsigned int,float *,unsigned int *,unsigned short * *,Detail::bool_t<1>);
			long ConvertArray<int *,int>(Detail::TypeTag<int *>,unsigned int,Internal::GitPtrSupportsAgile<IInspectable> *,unsigned int *,int * *,Detail::bool_t<0>);
			long ConvertArray<int,__int64 *,__int64>(Detail::TypeTag<__int64 *>,unsigned int,int *,unsigned int *,__int64 * *,Detail::bool_t<1>);
			long ConvertArray<int,double *,double>(Detail::TypeTag<double *>,unsigned int,int *,unsigned int *,double * *,Detail::bool_t<1>);
			long ConvertArray<int,float *,float>(Detail::TypeTag<float *>,unsigned int,int *,unsigned int *,float * *,Detail::bool_t<1>);
			long ConvertArray<int,short *,short>(Detail::TypeTag<short *>,unsigned int,int *,unsigned int *,short * *,Detail::bool_t<1>);
			long ConvertArray<int,unsigned __int64 *,unsigned __int64>(Detail::TypeTag<unsigned __int64 *>,unsigned int,int *,unsigned int *,unsigned __int64 * *,Detail::bool_t<1>);
			long ConvertArray<int,unsigned char *,unsigned char>(Detail::TypeTag<unsigned char *>,unsigned int,int *,unsigned int *,unsigned char * *,Detail::bool_t<1>);
			long ConvertArray<int,unsigned int *,unsigned int>(Detail::TypeTag<unsigned int *>,unsigned int,int *,unsigned int *,unsigned int * *,Detail::bool_t<1>);
			long ConvertArray<int,unsigned short *,unsigned short>(Detail::TypeTag<unsigned short *>,unsigned int,int *,unsigned int *,unsigned short * *,Detail::bool_t<1>);
			long ConvertArray<short *,short>(Detail::TypeTag<short *>,unsigned int,Internal::GitPtrSupportsAgile<IInspectable> *,unsigned int *,short * *,Detail::bool_t<0>);
			long ConvertArray<short,__int64 *,__int64>(Detail::TypeTag<__int64 *>,unsigned int,short *,unsigned int *,__int64 * *,Detail::bool_t<1>);
			long ConvertArray<short,double *,double>(Detail::TypeTag<double *>,unsigned int,short *,unsigned int *,double * *,Detail::bool_t<1>);
			long ConvertArray<short,float *,float>(Detail::TypeTag<float *>,unsigned int,short *,unsigned int *,float * *,Detail::bool_t<1>);
			long ConvertArray<short,int *,int>(Detail::TypeTag<int *>,unsigned int,short *,unsigned int *,int * *,Detail::bool_t<1>);
			long ConvertArray<short,unsigned __int64 *,unsigned __int64>(Detail::TypeTag<unsigned __int64 *>,unsigned int,short *,unsigned int *,unsigned __int64 * *,Detail::bool_t<1>);
			long ConvertArray<short,unsigned char *,unsigned char>(Detail::TypeTag<unsigned char *>,unsigned int,short *,unsigned int *,unsigned char * *,Detail::bool_t<1>);
			long ConvertArray<short,unsigned int *,unsigned int>(Detail::TypeTag<unsigned int *>,unsigned int,short *,unsigned int *,unsigned int * *,Detail::bool_t<1>);
			long ConvertArray<short,unsigned short *,unsigned short>(Detail::TypeTag<unsigned short *>,unsigned int,short *,unsigned int *,unsigned short * *,Detail::bool_t<1>);
			long ConvertArray<unsigned __int64 *,unsigned __int64>(Detail::TypeTag<unsigned __int64 *>,unsigned int,Internal::GitPtrSupportsAgile<IInspectable> *,unsigned int *,unsigned __int64 * *,Detail::bool_t<0>);
			long ConvertArray<unsigned __int64,__int64 *,__int64>(Detail::TypeTag<__int64 *>,unsigned int,unsigned __int64 *,unsigned int *,__int64 * *,Detail::bool_t<1>);
			long ConvertArray<unsigned __int64,double *,double>(Detail::TypeTag<double *>,unsigned int,unsigned __int64 *,unsigned int *,double * *,Detail::bool_t<1>);
			long ConvertArray<unsigned __int64,float *,float>(Detail::TypeTag<float *>,unsigned int,unsigned __int64 *,unsigned int *,float * *,Detail::bool_t<1>);
			long ConvertArray<unsigned __int64,int *,int>(Detail::TypeTag<int *>,unsigned int,unsigned __int64 *,unsigned int *,int * *,Detail::bool_t<1>);
			long ConvertArray<unsigned __int64,short *,short>(Detail::TypeTag<short *>,unsigned int,unsigned __int64 *,unsigned int *,short * *,Detail::bool_t<1>);
			long ConvertArray<unsigned __int64,unsigned char *,unsigned char>(Detail::TypeTag<unsigned char *>,unsigned int,unsigned __int64 *,unsigned int *,unsigned char * *,Detail::bool_t<1>);
			long ConvertArray<unsigned __int64,unsigned int *,unsigned int>(Detail::TypeTag<unsigned int *>,unsigned int,unsigned __int64 *,unsigned int *,unsigned int * *,Detail::bool_t<1>);
			long ConvertArray<unsigned __int64,unsigned short *,unsigned short>(Detail::TypeTag<unsigned short *>,unsigned int,unsigned __int64 *,unsigned int *,unsigned short * *,Detail::bool_t<1>);
			long ConvertArray<unsigned char *,unsigned char>(Detail::TypeTag<unsigned char *>,unsigned int,Internal::GitPtrSupportsAgile<IInspectable> *,unsigned int *,unsigned char * *,Detail::bool_t<0>);
			long ConvertArray<unsigned char,double *,double>(Detail::TypeTag<double *>,unsigned int,unsigned char *,unsigned int *,double * *,Detail::bool_t<1>);
			long ConvertArray<unsigned char,float *,float>(Detail::TypeTag<float *>,unsigned int,unsigned char *,unsigned int *,float * *,Detail::bool_t<1>);
			long ConvertArray<unsigned int *,unsigned int>(Detail::TypeTag<unsigned int *>,unsigned int,Internal::GitPtrSupportsAgile<IInspectable> *,unsigned int *,unsigned int * *,Detail::bool_t<0>);
			long ConvertArray<unsigned int,double *,double>(Detail::TypeTag<double *>,unsigned int,unsigned int *,unsigned int *,double * *,Detail::bool_t<1>);
			long ConvertArray<unsigned int,float *,float>(Detail::TypeTag<float *>,unsigned int,unsigned int *,unsigned int *,float * *,Detail::bool_t<1>);
			long ConvertArray<unsigned int,int *,int>(Detail::TypeTag<int *>,unsigned int,unsigned int *,unsigned int *,int * *,Detail::bool_t<1>);
			long ConvertArray<unsigned int,short *,short>(Detail::TypeTag<short *>,unsigned int,unsigned int *,unsigned int *,short * *,Detail::bool_t<1>);
			long ConvertArray<unsigned int,unsigned char *,unsigned char>(Detail::TypeTag<unsigned char *>,unsigned int,unsigned int *,unsigned int *,unsigned char * *,Detail::bool_t<1>);
			long ConvertArray<unsigned int,unsigned short *,unsigned short>(Detail::TypeTag<unsigned short *>,unsigned int,unsigned int *,unsigned int *,unsigned short * *,Detail::bool_t<1>);
			long ConvertArray<unsigned short *,unsigned short>(Detail::TypeTag<unsigned short *>,unsigned int,Internal::GitPtrSupportsAgile<IInspectable> *,unsigned int *,unsigned short * *,Detail::bool_t<0>);
			long ConvertArray<unsigned short,double *,double>(Detail::TypeTag<double *>,unsigned int,unsigned short *,unsigned int *,double * *,Detail::bool_t<1>);
			long ConvertArray<unsigned short,float *,float>(Detail::TypeTag<float *>,unsigned int,unsigned short *,unsigned int *,float * *,Detail::bool_t<1>);
			long ConvertArray<unsigned short,short *,short>(Detail::TypeTag<short *>,unsigned int,unsigned short *,unsigned int *,short * *,Detail::bool_t<1>);
			long ConvertArray<unsigned short,unsigned char *,unsigned char>(Detail::TypeTag<unsigned char *>,unsigned int,unsigned short *,unsigned int *,unsigned char * *,Detail::bool_t<1>);
			long ConvertArray<wchar_t *,wchar_t>(Detail::TypeTag<wchar_t *>,unsigned int,Internal::GitPtrSupportsAgile<IInspectable> *,unsigned int *,wchar_t * *,Detail::bool_t<0>);
			long ConvertGUIDtoString(_GUID const &,HSTRING__ * *);
			long ConvertScalar<__int64,double>(__int64,double *,Detail::bool_t<1>);
			long ConvertScalar<__int64,float>(__int64,float *,Detail::bool_t<1>);
			long ConvertScalar<__int64,int>(__int64,int *,Detail::bool_t<1>);
			long ConvertScalar<__int64,short>(__int64,short *,Detail::bool_t<1>);
			long ConvertScalar<__int64,unsigned __int64>(__int64,unsigned __int64 *,Detail::bool_t<1>);
			long ConvertScalar<__int64,unsigned char>(__int64,unsigned char *,Detail::bool_t<1>);
			long ConvertScalar<__int64,unsigned int>(__int64,unsigned int *,Detail::bool_t<1>);
			long ConvertScalar<__int64,unsigned short>(__int64,unsigned short *,Detail::bool_t<1>);
			long ConvertScalar<double,__int64>(double,__int64 *,Detail::bool_t<1>);
			long ConvertScalar<double,float>(double,float *,Detail::bool_t<1>);
			long ConvertScalar<double,int>(double,int *,Detail::bool_t<1>);
			long ConvertScalar<double,short>(double,short *,Detail::bool_t<1>);
			long ConvertScalar<double,unsigned __int64>(double,unsigned __int64 *,Detail::bool_t<1>);
			long ConvertScalar<double,unsigned char>(double,unsigned char *,Detail::bool_t<1>);
			long ConvertScalar<double,unsigned int>(double,unsigned int *,Detail::bool_t<1>);
			long ConvertScalar<double,unsigned short>(double,unsigned short *,Detail::bool_t<1>);
			long ConvertScalar<float,__int64>(float,__int64 *,Detail::bool_t<1>);
			long ConvertScalar<float,double>(float,double *,Detail::bool_t<1>);
			long ConvertScalar<float,int>(float,int *,Detail::bool_t<1>);
			long ConvertScalar<float,short>(float,short *,Detail::bool_t<1>);
			long ConvertScalar<float,unsigned __int64>(float,unsigned __int64 *,Detail::bool_t<1>);
			long ConvertScalar<float,unsigned char>(float,unsigned char *,Detail::bool_t<1>);
			long ConvertScalar<float,unsigned int>(float,unsigned int *,Detail::bool_t<1>);
			long ConvertScalar<float,unsigned short>(float,unsigned short *,Detail::bool_t<1>);
			long ConvertScalar<int,__int64>(int,__int64 *,Detail::bool_t<1>);
			long ConvertScalar<int,double>(int,double *,Detail::bool_t<1>);
			long ConvertScalar<int,float>(int,float *,Detail::bool_t<1>);
			long ConvertScalar<int,short>(int,short *,Detail::bool_t<1>);
			long ConvertScalar<int,unsigned __int64>(int,unsigned __int64 *,Detail::bool_t<1>);
			long ConvertScalar<int,unsigned char>(int,unsigned char *,Detail::bool_t<1>);
			long ConvertScalar<int,unsigned int>(int,unsigned int *,Detail::bool_t<1>);
			long ConvertScalar<int,unsigned short>(int,unsigned short *,Detail::bool_t<1>);
			long ConvertScalar<short,__int64>(short,__int64 *,Detail::bool_t<1>);
			long ConvertScalar<short,double>(short,double *,Detail::bool_t<1>);
			long ConvertScalar<short,float>(short,float *,Detail::bool_t<1>);
			long ConvertScalar<short,int>(short,int *,Detail::bool_t<1>);
			long ConvertScalar<short,unsigned __int64>(short,unsigned __int64 *,Detail::bool_t<1>);
			long ConvertScalar<short,unsigned char>(short,unsigned char *,Detail::bool_t<1>);
			long ConvertScalar<short,unsigned int>(short,unsigned int *,Detail::bool_t<1>);
			long ConvertScalar<short,unsigned short>(short,unsigned short *,Detail::bool_t<1>);
			long ConvertScalar<unsigned __int64,__int64>(unsigned __int64,__int64 *,Detail::bool_t<1>);
			long ConvertScalar<unsigned __int64,double>(unsigned __int64,double *,Detail::bool_t<1>);
			long ConvertScalar<unsigned __int64,float>(unsigned __int64,float *,Detail::bool_t<1>);
			long ConvertScalar<unsigned __int64,int>(unsigned __int64,int *,Detail::bool_t<1>);
			long ConvertScalar<unsigned __int64,short>(unsigned __int64,short *,Detail::bool_t<1>);
			long ConvertScalar<unsigned __int64,unsigned char>(unsigned __int64,unsigned char *,Detail::bool_t<1>);
			long ConvertScalar<unsigned __int64,unsigned int>(unsigned __int64,unsigned int *,Detail::bool_t<1>);
			long ConvertScalar<unsigned __int64,unsigned short>(unsigned __int64,unsigned short *,Detail::bool_t<1>);
			long ConvertScalar<unsigned char,double>(unsigned char,double *,Detail::bool_t<1>);
			long ConvertScalar<unsigned char,float>(unsigned char,float *,Detail::bool_t<1>);
			long ConvertScalar<unsigned int,double>(unsigned int,double *,Detail::bool_t<1>);
			long ConvertScalar<unsigned int,float>(unsigned int,float *,Detail::bool_t<1>);
			long ConvertScalar<unsigned int,int>(unsigned int,int *,Detail::bool_t<1>);
			long ConvertScalar<unsigned int,short>(unsigned int,short *,Detail::bool_t<1>);
			long ConvertScalar<unsigned int,unsigned char>(unsigned int,unsigned char *,Detail::bool_t<1>);
			long ConvertScalar<unsigned int,unsigned short>(unsigned int,unsigned short *,Detail::bool_t<1>);
			long ConvertScalar<unsigned short,double>(unsigned short,double *,Detail::bool_t<1>);
			long ConvertScalar<unsigned short,float>(unsigned short,float *,Detail::bool_t<1>);
			long ConvertScalar<unsigned short,short>(unsigned short,short *,Detail::bool_t<1>);
			long ConvertScalar<unsigned short,unsigned char>(unsigned short,unsigned char *,Detail::bool_t<1>);
			long Generic_ArrayCopy<IInspectable *,IInspectable * const *,Internal::GitPtrSupportsAgile<IInspectable> *>(unsigned __int64,IInspectable * const *,Internal::GitPtrSupportsAgile<IInspectable> *);
			long Generic_ArrayCopy<IInspectable *,Internal::GitPtrSupportsAgile<IInspectable> *,IInspectable * *>(unsigned __int64,Internal::GitPtrSupportsAgile<IInspectable> *,IInspectable * *);
			long Generic_CloneArray<HSTRING__ *,HSTRING__ * const *,HSTRING__ * * *>(unsigned int,HSTRING__ * const *,HSTRING__ * * *);
			long Generic_CloneArray<IInspectable *,IInspectable * const *,Internal::GitPtrSupportsAgile<IInspectable> * *>(unsigned int,IInspectable * const *,Internal::GitPtrSupportsAgile<IInspectable> * *);
			long Generic_CloneArray<IInspectable *,Internal::GitPtrSupportsAgile<IInspectable> *,IInspectable * * *>(unsigned int,Internal::GitPtrSupportsAgile<IInspectable> *,IInspectable * * *);
			long GetValue<unsigned char>(Detail::TypeTag<unsigned char>,IInspectable *,unsigned char *);
			long MakeArray<DateTime,DateTime>(Detail::TypeTag<DateTime *>,unsigned int,DateTime const *,IInspectable * *);
			long MakeArray<HSTRING__ *,HSTRING__ *>(Detail::TypeTag<HSTRING__ * *>,unsigned int,HSTRING__ * const *,IInspectable * *);
			long MakeArray<IInspectable *,IInspectable *>(Detail::TypeTag<IInspectable * *>,unsigned int,IInspectable * const *,IInspectable * *);
			long MakeArray<Point,Point>(Detail::TypeTag<Point *>,unsigned int,Point const *,IInspectable * *);
			long MakeArray<Rect,Rect>(Detail::TypeTag<Rect *>,unsigned int,Rect const *,IInspectable * *);
			long MakeArray<Size,Size>(Detail::TypeTag<Size *>,unsigned int,Size const *,IInspectable * *);
			long MakeArray<TimeSpan,TimeSpan>(Detail::TypeTag<TimeSpan *>,unsigned int,TimeSpan const *,IInspectable * *);
			long MakeArray<_GUID,_GUID>(Detail::TypeTag<_GUID *>,unsigned int,_GUID const *,IInspectable * *);
			long MakeArray<__int64,__int64>(Detail::TypeTag<__int64 *>,unsigned int,__int64 const *,IInspectable * *);
			long MakeArray<bool,unsigned char>(Detail::TypeTag<bool *>,unsigned int,unsigned char const *,IInspectable * *);
			long MakeArray<double,double>(Detail::TypeTag<double *>,unsigned int,double const *,IInspectable * *);
			long MakeArray<float,float>(Detail::TypeTag<float *>,unsigned int,float const *,IInspectable * *);
			long MakeArray<int,int>(Detail::TypeTag<int *>,unsigned int,int const *,IInspectable * *);
			long MakeArray<short,short>(Detail::TypeTag<short *>,unsigned int,short const *,IInspectable * *);
			long MakeArray<unsigned __int64,unsigned __int64>(Detail::TypeTag<unsigned __int64 *>,unsigned int,unsigned __int64 const *,IInspectable * *);
			long MakeArray<unsigned char,unsigned char>(Detail::TypeTag<unsigned char *>,unsigned int,unsigned char const *,IInspectable * *);
			long MakeArray<unsigned int,unsigned int>(Detail::TypeTag<unsigned int *>,unsigned int,unsigned int const *,IInspectable * *);
			long MakeArray<unsigned short,unsigned short>(Detail::TypeTag<unsigned short *>,unsigned int,unsigned short const *,IInspectable * *);
			long MakeArray<wchar_t,wchar_t>(Detail::TypeTag<wchar_t *>,unsigned int,wchar_t const *,IInspectable * *);
			long MakeScalar<double,double>(Detail::TypeTag<double>,double,IInspectable * *);
			long MakeScalar<float,float>(Detail::TypeTag<float>,float,IInspectable * *);
			long MakeScalar<unsigned char,bool>(Detail::TypeTag<bool>,unsigned char,IInspectable * *);
			long UnpackFromStreamAndCreate<DateTime,DateTime>(Detail::TypeTag<DateTime *>,IStream *,IInspectable * *);
			long UnpackFromStreamAndCreate<Point,Point>(Detail::TypeTag<Point *>,IStream *,IInspectable * *);
			long UnpackFromStreamAndCreate<Rect,Rect>(Detail::TypeTag<Rect *>,IStream *,IInspectable * *);
			long UnpackFromStreamAndCreate<Size,Size>(Detail::TypeTag<Size *>,IStream *,IInspectable * *);
			long UnpackFromStreamAndCreate<TimeSpan,TimeSpan>(Detail::TypeTag<TimeSpan *>,IStream *,IInspectable * *);
			long UnpackFromStreamAndCreate<_GUID,_GUID>(Detail::TypeTag<_GUID *>,IStream *,IInspectable * *);
			long UnpackFromStreamAndCreate<__int64,__int64>(Detail::TypeTag<__int64 *>,IStream *,IInspectable * *);
			long UnpackFromStreamAndCreate<double,double>(Detail::TypeTag<double *>,IStream *,IInspectable * *);
			long UnpackFromStreamAndCreate<float,float>(Detail::TypeTag<float *>,IStream *,IInspectable * *);
			long UnpackFromStreamAndCreate<int,int>(Detail::TypeTag<int *>,IStream *,IInspectable * *);
			long UnpackFromStreamAndCreate<short,short>(Detail::TypeTag<short *>,IStream *,IInspectable * *);
			long UnpackFromStreamAndCreate<unsigned __int64,unsigned __int64>(Detail::TypeTag<unsigned __int64 *>,IStream *,IInspectable * *);
			long UnpackFromStreamAndCreate<unsigned char,bool>(Detail::TypeTag<bool *>,IStream *,IInspectable * *);
			long UnpackFromStreamAndCreate<unsigned char,unsigned char>(Detail::TypeTag<unsigned char *>,IStream *,IInspectable * *);
			long UnpackFromStreamAndCreate<unsigned int,unsigned int>(Detail::TypeTag<unsigned int *>,IStream *,IInspectable * *);
			long UnpackFromStreamAndCreate<unsigned short,unsigned short>(Detail::TypeTag<unsigned short *>,IStream *,IInspectable * *);
			long UnpackFromStreamAndCreate<wchar_t,wchar_t>(Detail::TypeTag<wchar_t *>,IStream *,IInspectable * *);
			long UnpackStringFromStream(IStream *,HSTRING__ * *);
		};

		namespace Diagnostics
		{
			class CRuntimeBrokerErrorSettings
			{
				long EnsureInit();
				long Init();
				static int InitOnceFunction(_RTL_RUN_ONCE *,void *,void * *);
			public:
				CRuntimeBrokerErrorSettings();
				static TrustLevel InternalGetTrustLevel();
				static wchar_t const * InternalGetRuntimeClassName();
				virtual long GetErrorOptions(ErrorOptions *);
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual long SetErrorOptions(ErrorOptions);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~CRuntimeBrokerErrorSettings();
			};

			struct IErrorReportingSettings
			{
				IErrorReportingSettings();
			};

		};

		struct IDeferral
		{
			IDeferral();
		};

		namespace Marshal
		{
			InitOnce::ExecuteOnce g_initSecret;
			long VerifySecret(IStream *);
			long WriteSecret(IStream *);
			unsigned char * g_rgbSecretBlock;
		};

		struct MemoryBuffer
		{
			MemoryBuffer(Storage::Streams::IBuffer *);
			static TrustLevel InternalGetTrustLevel();
			static wchar_t const * InternalGetRuntimeClassName();
			virtual long Close();
			virtual long CreateReference(IMemoryBufferReference * *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct MemoryBufferFactory
		{
			virtual long Create(unsigned int,IMemoryBuffer * *);
		};

		struct MemoryBufferReference
		{
			MemoryBufferReference(Storage::Streams::IBuffer *,bool);
			virtual long Close();
			virtual long GetBuffer(unsigned char * *,unsigned int *);
			virtual long add_Closed(ITypedEventHandler<IMemoryBufferReference *,IInspectable *> *,EventRegistrationToken *);
			virtual long get_Capacity(unsigned int *);
			virtual long remove_Closed(EventRegistrationToken);
			virtual ~MemoryBufferReference();
		};

		struct PlaceholderPropertyValue
		{
			static TrustLevel InternalGetTrustLevel();
			static wchar_t const * InternalGetRuntimeClassName();
		};

		class Value<ValueArray<DateTime> >
		{
			virtual IUnknown * RawCOMSelf();
			virtual long DisconnectObject(unsigned long);
			virtual long GetBoolean(unsigned char *);
			virtual long GetBooleanArray(unsigned int *,unsigned char * *);
			virtual long GetChar16(wchar_t *);
			virtual long GetChar16Array(unsigned int *,wchar_t * *);
			virtual long GetDateTime(DateTime *);
			virtual long GetDateTimeArray(unsigned int *,DateTime * *);
			virtual long GetDouble(double *);
			virtual long GetDoubleArray(unsigned int *,double * *);
			virtual long GetGuid(_GUID *);
			virtual long GetGuidArray(unsigned int *,_GUID * *);
			virtual long GetInspectableArray(unsigned int *,IInspectable * * *);
			virtual long GetInt16(short *);
			virtual long GetInt16Array(unsigned int *,short * *);
			virtual long GetInt32(int *);
			virtual long GetInt32Array(unsigned int *,int * *);
			virtual long GetInt64(__int64 *);
			virtual long GetInt64Array(unsigned int *,__int64 * *);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetPoint(Point *);
			virtual long GetPointArray(unsigned int *,Point * *);
			virtual long GetRect(Rect *);
			virtual long GetRectArray(unsigned int *,Rect * *);
			virtual long GetSingle(float *);
			virtual long GetSingleArray(unsigned int *,float * *);
			virtual long GetSize(Size *);
			virtual long GetSizeArray(unsigned int *,Size * *);
			virtual long GetString(HSTRING__ * *);
			virtual long GetStringArray(unsigned int *,HSTRING__ * * *);
			virtual long GetTimeSpan(TimeSpan *);
			virtual long GetTimeSpanArray(unsigned int *,TimeSpan * *);
			virtual long GetUInt16(unsigned short *);
			virtual long GetUInt16Array(unsigned int *,unsigned short * *);
			virtual long GetUInt32(unsigned int *);
			virtual long GetUInt32Array(unsigned int *,unsigned int * *);
			virtual long GetUInt64(unsigned __int64 *);
			virtual long GetUInt64Array(unsigned int *,unsigned __int64 * *);
			virtual long GetUInt8(unsigned char *);
			virtual long GetUInt8Array(unsigned int *,unsigned char * *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			virtual long get_IsNumericScalar(unsigned char *);
			virtual long get_Type(PropertyType *);
		};

		class Value<ValueArray<HSTRING__ *> >
		{
			virtual IUnknown * RawCOMSelf();
			virtual long DisconnectObject(unsigned long);
			virtual long GetBoolean(unsigned char *);
			virtual long GetBooleanArray(unsigned int *,unsigned char * *);
			virtual long GetChar16(wchar_t *);
			virtual long GetChar16Array(unsigned int *,wchar_t * *);
			virtual long GetDateTime(DateTime *);
			virtual long GetDateTimeArray(unsigned int *,DateTime * *);
			virtual long GetDouble(double *);
			virtual long GetDoubleArray(unsigned int *,double * *);
			virtual long GetGuid(_GUID *);
			virtual long GetGuidArray(unsigned int *,_GUID * *);
			virtual long GetInspectableArray(unsigned int *,IInspectable * * *);
			virtual long GetInt16(short *);
			virtual long GetInt16Array(unsigned int *,short * *);
			virtual long GetInt32(int *);
			virtual long GetInt32Array(unsigned int *,int * *);
			virtual long GetInt64(__int64 *);
			virtual long GetInt64Array(unsigned int *,__int64 * *);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetPoint(Point *);
			virtual long GetPointArray(unsigned int *,Point * *);
			virtual long GetRect(Rect *);
			virtual long GetRectArray(unsigned int *,Rect * *);
			virtual long GetSingle(float *);
			virtual long GetSingleArray(unsigned int *,float * *);
			virtual long GetSize(Size *);
			virtual long GetSizeArray(unsigned int *,Size * *);
			virtual long GetString(HSTRING__ * *);
			virtual long GetStringArray(unsigned int *,HSTRING__ * * *);
			virtual long GetTimeSpan(TimeSpan *);
			virtual long GetTimeSpanArray(unsigned int *,TimeSpan * *);
			virtual long GetUInt16(unsigned short *);
			virtual long GetUInt16Array(unsigned int *,unsigned short * *);
			virtual long GetUInt32(unsigned int *);
			virtual long GetUInt32Array(unsigned int *,unsigned int * *);
			virtual long GetUInt64(unsigned __int64 *);
			virtual long GetUInt64Array(unsigned int *,unsigned __int64 * *);
			virtual long GetUInt8(unsigned char *);
			virtual long GetUInt8Array(unsigned int *,unsigned char * *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			virtual long get_IsNumericScalar(unsigned char *);
			virtual long get_Type(PropertyType *);
		};

		class Value<ValueArray<IInspectable *> >
		{
			virtual IUnknown * RawCOMSelf();
			virtual long DisconnectObject(unsigned long);
			virtual long GetBoolean(unsigned char *);
			virtual long GetBooleanArray(unsigned int *,unsigned char * *);
			virtual long GetChar16(wchar_t *);
			virtual long GetChar16Array(unsigned int *,wchar_t * *);
			virtual long GetDateTime(DateTime *);
			virtual long GetDateTimeArray(unsigned int *,DateTime * *);
			virtual long GetDouble(double *);
			virtual long GetDoubleArray(unsigned int *,double * *);
			virtual long GetGuid(_GUID *);
			virtual long GetGuidArray(unsigned int *,_GUID * *);
			virtual long GetInspectableArray(unsigned int *,IInspectable * * *);
			virtual long GetInt16(short *);
			virtual long GetInt16Array(unsigned int *,short * *);
			virtual long GetInt32(int *);
			virtual long GetInt32Array(unsigned int *,int * *);
			virtual long GetInt64(__int64 *);
			virtual long GetInt64Array(unsigned int *,__int64 * *);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetPoint(Point *);
			virtual long GetPointArray(unsigned int *,Point * *);
			virtual long GetRect(Rect *);
			virtual long GetRectArray(unsigned int *,Rect * *);
			virtual long GetSingle(float *);
			virtual long GetSingleArray(unsigned int *,float * *);
			virtual long GetSize(Size *);
			virtual long GetSizeArray(unsigned int *,Size * *);
			virtual long GetString(HSTRING__ * *);
			virtual long GetStringArray(unsigned int *,HSTRING__ * * *);
			virtual long GetTimeSpan(TimeSpan *);
			virtual long GetTimeSpanArray(unsigned int *,TimeSpan * *);
			virtual long GetUInt16(unsigned short *);
			virtual long GetUInt16Array(unsigned int *,unsigned short * *);
			virtual long GetUInt32(unsigned int *);
			virtual long GetUInt32Array(unsigned int *,unsigned int * *);
			virtual long GetUInt64(unsigned __int64 *);
			virtual long GetUInt64Array(unsigned int *,unsigned __int64 * *);
			virtual long GetUInt8(unsigned char *);
			virtual long GetUInt8Array(unsigned int *,unsigned char * *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			virtual long get_IsNumericScalar(unsigned char *);
			virtual long get_Type(PropertyType *);
		};

		class Value<ValueArray<Point> >
		{
			virtual IUnknown * RawCOMSelf();
			virtual long DisconnectObject(unsigned long);
			virtual long GetBoolean(unsigned char *);
			virtual long GetBooleanArray(unsigned int *,unsigned char * *);
			virtual long GetChar16(wchar_t *);
			virtual long GetChar16Array(unsigned int *,wchar_t * *);
			virtual long GetDateTime(DateTime *);
			virtual long GetDateTimeArray(unsigned int *,DateTime * *);
			virtual long GetDouble(double *);
			virtual long GetDoubleArray(unsigned int *,double * *);
			virtual long GetGuid(_GUID *);
			virtual long GetGuidArray(unsigned int *,_GUID * *);
			virtual long GetInspectableArray(unsigned int *,IInspectable * * *);
			virtual long GetInt16(short *);
			virtual long GetInt16Array(unsigned int *,short * *);
			virtual long GetInt32(int *);
			virtual long GetInt32Array(unsigned int *,int * *);
			virtual long GetInt64(__int64 *);
			virtual long GetInt64Array(unsigned int *,__int64 * *);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetPoint(Point *);
			virtual long GetPointArray(unsigned int *,Point * *);
			virtual long GetRect(Rect *);
			virtual long GetRectArray(unsigned int *,Rect * *);
			virtual long GetSingle(float *);
			virtual long GetSingleArray(unsigned int *,float * *);
			virtual long GetSize(Size *);
			virtual long GetSizeArray(unsigned int *,Size * *);
			virtual long GetString(HSTRING__ * *);
			virtual long GetStringArray(unsigned int *,HSTRING__ * * *);
			virtual long GetTimeSpan(TimeSpan *);
			virtual long GetTimeSpanArray(unsigned int *,TimeSpan * *);
			virtual long GetUInt16(unsigned short *);
			virtual long GetUInt16Array(unsigned int *,unsigned short * *);
			virtual long GetUInt32(unsigned int *);
			virtual long GetUInt32Array(unsigned int *,unsigned int * *);
			virtual long GetUInt64(unsigned __int64 *);
			virtual long GetUInt64Array(unsigned int *,unsigned __int64 * *);
			virtual long GetUInt8(unsigned char *);
			virtual long GetUInt8Array(unsigned int *,unsigned char * *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			virtual long get_IsNumericScalar(unsigned char *);
			virtual long get_Type(PropertyType *);
		};

		class Value<ValueArray<Rect> >
		{
			virtual IUnknown * RawCOMSelf();
			virtual long DisconnectObject(unsigned long);
			virtual long GetBoolean(unsigned char *);
			virtual long GetBooleanArray(unsigned int *,unsigned char * *);
			virtual long GetChar16(wchar_t *);
			virtual long GetChar16Array(unsigned int *,wchar_t * *);
			virtual long GetDateTime(DateTime *);
			virtual long GetDateTimeArray(unsigned int *,DateTime * *);
			virtual long GetDouble(double *);
			virtual long GetDoubleArray(unsigned int *,double * *);
			virtual long GetGuid(_GUID *);
			virtual long GetGuidArray(unsigned int *,_GUID * *);
			virtual long GetInspectableArray(unsigned int *,IInspectable * * *);
			virtual long GetInt16(short *);
			virtual long GetInt16Array(unsigned int *,short * *);
			virtual long GetInt32(int *);
			virtual long GetInt32Array(unsigned int *,int * *);
			virtual long GetInt64(__int64 *);
			virtual long GetInt64Array(unsigned int *,__int64 * *);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetPoint(Point *);
			virtual long GetPointArray(unsigned int *,Point * *);
			virtual long GetRect(Rect *);
			virtual long GetRectArray(unsigned int *,Rect * *);
			virtual long GetSingle(float *);
			virtual long GetSingleArray(unsigned int *,float * *);
			virtual long GetSize(Size *);
			virtual long GetSizeArray(unsigned int *,Size * *);
			virtual long GetString(HSTRING__ * *);
			virtual long GetStringArray(unsigned int *,HSTRING__ * * *);
			virtual long GetTimeSpan(TimeSpan *);
			virtual long GetTimeSpanArray(unsigned int *,TimeSpan * *);
			virtual long GetUInt16(unsigned short *);
			virtual long GetUInt16Array(unsigned int *,unsigned short * *);
			virtual long GetUInt32(unsigned int *);
			virtual long GetUInt32Array(unsigned int *,unsigned int * *);
			virtual long GetUInt64(unsigned __int64 *);
			virtual long GetUInt64Array(unsigned int *,unsigned __int64 * *);
			virtual long GetUInt8(unsigned char *);
			virtual long GetUInt8Array(unsigned int *,unsigned char * *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			virtual long get_IsNumericScalar(unsigned char *);
			virtual long get_Type(PropertyType *);
		};

		class Value<ValueArray<Size> >
		{
			virtual IUnknown * RawCOMSelf();
			virtual long DisconnectObject(unsigned long);
			virtual long GetBoolean(unsigned char *);
			virtual long GetBooleanArray(unsigned int *,unsigned char * *);
			virtual long GetChar16(wchar_t *);
			virtual long GetChar16Array(unsigned int *,wchar_t * *);
			virtual long GetDateTime(DateTime *);
			virtual long GetDateTimeArray(unsigned int *,DateTime * *);
			virtual long GetDouble(double *);
			virtual long GetDoubleArray(unsigned int *,double * *);
			virtual long GetGuid(_GUID *);
			virtual long GetGuidArray(unsigned int *,_GUID * *);
			virtual long GetInspectableArray(unsigned int *,IInspectable * * *);
			virtual long GetInt16(short *);
			virtual long GetInt16Array(unsigned int *,short * *);
			virtual long GetInt32(int *);
			virtual long GetInt32Array(unsigned int *,int * *);
			virtual long GetInt64(__int64 *);
			virtual long GetInt64Array(unsigned int *,__int64 * *);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetPoint(Point *);
			virtual long GetPointArray(unsigned int *,Point * *);
			virtual long GetRect(Rect *);
			virtual long GetRectArray(unsigned int *,Rect * *);
			virtual long GetSingle(float *);
			virtual long GetSingleArray(unsigned int *,float * *);
			virtual long GetSize(Size *);
			virtual long GetSizeArray(unsigned int *,Size * *);
			virtual long GetString(HSTRING__ * *);
			virtual long GetStringArray(unsigned int *,HSTRING__ * * *);
			virtual long GetTimeSpan(TimeSpan *);
			virtual long GetTimeSpanArray(unsigned int *,TimeSpan * *);
			virtual long GetUInt16(unsigned short *);
			virtual long GetUInt16Array(unsigned int *,unsigned short * *);
			virtual long GetUInt32(unsigned int *);
			virtual long GetUInt32Array(unsigned int *,unsigned int * *);
			virtual long GetUInt64(unsigned __int64 *);
			virtual long GetUInt64Array(unsigned int *,unsigned __int64 * *);
			virtual long GetUInt8(unsigned char *);
			virtual long GetUInt8Array(unsigned int *,unsigned char * *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			virtual long get_IsNumericScalar(unsigned char *);
			virtual long get_Type(PropertyType *);
		};

		class Value<ValueArray<TimeSpan> >
		{
			virtual IUnknown * RawCOMSelf();
			virtual long DisconnectObject(unsigned long);
			virtual long GetBoolean(unsigned char *);
			virtual long GetBooleanArray(unsigned int *,unsigned char * *);
			virtual long GetChar16(wchar_t *);
			virtual long GetChar16Array(unsigned int *,wchar_t * *);
			virtual long GetDateTime(DateTime *);
			virtual long GetDateTimeArray(unsigned int *,DateTime * *);
			virtual long GetDouble(double *);
			virtual long GetDoubleArray(unsigned int *,double * *);
			virtual long GetGuid(_GUID *);
			virtual long GetGuidArray(unsigned int *,_GUID * *);
			virtual long GetInspectableArray(unsigned int *,IInspectable * * *);
			virtual long GetInt16(short *);
			virtual long GetInt16Array(unsigned int *,short * *);
			virtual long GetInt32(int *);
			virtual long GetInt32Array(unsigned int *,int * *);
			virtual long GetInt64(__int64 *);
			virtual long GetInt64Array(unsigned int *,__int64 * *);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetPoint(Point *);
			virtual long GetPointArray(unsigned int *,Point * *);
			virtual long GetRect(Rect *);
			virtual long GetRectArray(unsigned int *,Rect * *);
			virtual long GetSingle(float *);
			virtual long GetSingleArray(unsigned int *,float * *);
			virtual long GetSize(Size *);
			virtual long GetSizeArray(unsigned int *,Size * *);
			virtual long GetString(HSTRING__ * *);
			virtual long GetStringArray(unsigned int *,HSTRING__ * * *);
			virtual long GetTimeSpan(TimeSpan *);
			virtual long GetTimeSpanArray(unsigned int *,TimeSpan * *);
			virtual long GetUInt16(unsigned short *);
			virtual long GetUInt16Array(unsigned int *,unsigned short * *);
			virtual long GetUInt32(unsigned int *);
			virtual long GetUInt32Array(unsigned int *,unsigned int * *);
			virtual long GetUInt64(unsigned __int64 *);
			virtual long GetUInt64Array(unsigned int *,unsigned __int64 * *);
			virtual long GetUInt8(unsigned char *);
			virtual long GetUInt8Array(unsigned int *,unsigned char * *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			virtual long get_IsNumericScalar(unsigned char *);
			virtual long get_Type(PropertyType *);
		};

		class Value<ValueArray<_GUID> >
		{
			virtual IUnknown * RawCOMSelf();
			virtual long DisconnectObject(unsigned long);
			virtual long GetBoolean(unsigned char *);
			virtual long GetBooleanArray(unsigned int *,unsigned char * *);
			virtual long GetChar16(wchar_t *);
			virtual long GetChar16Array(unsigned int *,wchar_t * *);
			virtual long GetDateTime(DateTime *);
			virtual long GetDateTimeArray(unsigned int *,DateTime * *);
			virtual long GetDouble(double *);
			virtual long GetDoubleArray(unsigned int *,double * *);
			virtual long GetGuid(_GUID *);
			virtual long GetGuidArray(unsigned int *,_GUID * *);
			virtual long GetInspectableArray(unsigned int *,IInspectable * * *);
			virtual long GetInt16(short *);
			virtual long GetInt16Array(unsigned int *,short * *);
			virtual long GetInt32(int *);
			virtual long GetInt32Array(unsigned int *,int * *);
			virtual long GetInt64(__int64 *);
			virtual long GetInt64Array(unsigned int *,__int64 * *);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetPoint(Point *);
			virtual long GetPointArray(unsigned int *,Point * *);
			virtual long GetRect(Rect *);
			virtual long GetRectArray(unsigned int *,Rect * *);
			virtual long GetSingle(float *);
			virtual long GetSingleArray(unsigned int *,float * *);
			virtual long GetSize(Size *);
			virtual long GetSizeArray(unsigned int *,Size * *);
			virtual long GetString(HSTRING__ * *);
			virtual long GetStringArray(unsigned int *,HSTRING__ * * *);
			virtual long GetTimeSpan(TimeSpan *);
			virtual long GetTimeSpanArray(unsigned int *,TimeSpan * *);
			virtual long GetUInt16(unsigned short *);
			virtual long GetUInt16Array(unsigned int *,unsigned short * *);
			virtual long GetUInt32(unsigned int *);
			virtual long GetUInt32Array(unsigned int *,unsigned int * *);
			virtual long GetUInt64(unsigned __int64 *);
			virtual long GetUInt64Array(unsigned int *,unsigned __int64 * *);
			virtual long GetUInt8(unsigned char *);
			virtual long GetUInt8Array(unsigned int *,unsigned char * *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			virtual long get_IsNumericScalar(unsigned char *);
			virtual long get_Type(PropertyType *);
		};

		class Value<ValueArray<__int64> >
		{
			virtual IUnknown * RawCOMSelf();
			virtual long DisconnectObject(unsigned long);
			virtual long GetBoolean(unsigned char *);
			virtual long GetBooleanArray(unsigned int *,unsigned char * *);
			virtual long GetChar16(wchar_t *);
			virtual long GetChar16Array(unsigned int *,wchar_t * *);
			virtual long GetDateTime(DateTime *);
			virtual long GetDateTimeArray(unsigned int *,DateTime * *);
			virtual long GetDouble(double *);
			virtual long GetDoubleArray(unsigned int *,double * *);
			virtual long GetGuid(_GUID *);
			virtual long GetGuidArray(unsigned int *,_GUID * *);
			virtual long GetInspectableArray(unsigned int *,IInspectable * * *);
			virtual long GetInt16(short *);
			virtual long GetInt16Array(unsigned int *,short * *);
			virtual long GetInt32(int *);
			virtual long GetInt32Array(unsigned int *,int * *);
			virtual long GetInt64(__int64 *);
			virtual long GetInt64Array(unsigned int *,__int64 * *);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetPoint(Point *);
			virtual long GetPointArray(unsigned int *,Point * *);
			virtual long GetRect(Rect *);
			virtual long GetRectArray(unsigned int *,Rect * *);
			virtual long GetSingle(float *);
			virtual long GetSingleArray(unsigned int *,float * *);
			virtual long GetSize(Size *);
			virtual long GetSizeArray(unsigned int *,Size * *);
			virtual long GetString(HSTRING__ * *);
			virtual long GetStringArray(unsigned int *,HSTRING__ * * *);
			virtual long GetTimeSpan(TimeSpan *);
			virtual long GetTimeSpanArray(unsigned int *,TimeSpan * *);
			virtual long GetUInt16(unsigned short *);
			virtual long GetUInt16Array(unsigned int *,unsigned short * *);
			virtual long GetUInt32(unsigned int *);
			virtual long GetUInt32Array(unsigned int *,unsigned int * *);
			virtual long GetUInt64(unsigned __int64 *);
			virtual long GetUInt64Array(unsigned int *,unsigned __int64 * *);
			virtual long GetUInt8(unsigned char *);
			virtual long GetUInt8Array(unsigned int *,unsigned char * *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			virtual long get_IsNumericScalar(unsigned char *);
			virtual long get_Type(PropertyType *);
		};

		class Value<ValueArray<bool> >
		{
			virtual IUnknown * RawCOMSelf();
			virtual long DisconnectObject(unsigned long);
			virtual long GetBoolean(unsigned char *);
			virtual long GetBooleanArray(unsigned int *,unsigned char * *);
			virtual long GetChar16(wchar_t *);
			virtual long GetChar16Array(unsigned int *,wchar_t * *);
			virtual long GetDateTime(DateTime *);
			virtual long GetDateTimeArray(unsigned int *,DateTime * *);
			virtual long GetDouble(double *);
			virtual long GetDoubleArray(unsigned int *,double * *);
			virtual long GetGuid(_GUID *);
			virtual long GetGuidArray(unsigned int *,_GUID * *);
			virtual long GetInspectableArray(unsigned int *,IInspectable * * *);
			virtual long GetInt16(short *);
			virtual long GetInt16Array(unsigned int *,short * *);
			virtual long GetInt32(int *);
			virtual long GetInt32Array(unsigned int *,int * *);
			virtual long GetInt64(__int64 *);
			virtual long GetInt64Array(unsigned int *,__int64 * *);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetPoint(Point *);
			virtual long GetPointArray(unsigned int *,Point * *);
			virtual long GetRect(Rect *);
			virtual long GetRectArray(unsigned int *,Rect * *);
			virtual long GetSingle(float *);
			virtual long GetSingleArray(unsigned int *,float * *);
			virtual long GetSize(Size *);
			virtual long GetSizeArray(unsigned int *,Size * *);
			virtual long GetString(HSTRING__ * *);
			virtual long GetStringArray(unsigned int *,HSTRING__ * * *);
			virtual long GetTimeSpan(TimeSpan *);
			virtual long GetTimeSpanArray(unsigned int *,TimeSpan * *);
			virtual long GetUInt16(unsigned short *);
			virtual long GetUInt16Array(unsigned int *,unsigned short * *);
			virtual long GetUInt32(unsigned int *);
			virtual long GetUInt32Array(unsigned int *,unsigned int * *);
			virtual long GetUInt64(unsigned __int64 *);
			virtual long GetUInt64Array(unsigned int *,unsigned __int64 * *);
			virtual long GetUInt8(unsigned char *);
			virtual long GetUInt8Array(unsigned int *,unsigned char * *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			virtual long get_IsNumericScalar(unsigned char *);
			virtual long get_Type(PropertyType *);
		};

		class Value<ValueArray<double> >
		{
			virtual IUnknown * RawCOMSelf();
			virtual long DisconnectObject(unsigned long);
			virtual long GetBoolean(unsigned char *);
			virtual long GetBooleanArray(unsigned int *,unsigned char * *);
			virtual long GetChar16(wchar_t *);
			virtual long GetChar16Array(unsigned int *,wchar_t * *);
			virtual long GetDateTime(DateTime *);
			virtual long GetDateTimeArray(unsigned int *,DateTime * *);
			virtual long GetDouble(double *);
			virtual long GetDoubleArray(unsigned int *,double * *);
			virtual long GetGuid(_GUID *);
			virtual long GetGuidArray(unsigned int *,_GUID * *);
			virtual long GetInspectableArray(unsigned int *,IInspectable * * *);
			virtual long GetInt16(short *);
			virtual long GetInt16Array(unsigned int *,short * *);
			virtual long GetInt32(int *);
			virtual long GetInt32Array(unsigned int *,int * *);
			virtual long GetInt64(__int64 *);
			virtual long GetInt64Array(unsigned int *,__int64 * *);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetPoint(Point *);
			virtual long GetPointArray(unsigned int *,Point * *);
			virtual long GetRect(Rect *);
			virtual long GetRectArray(unsigned int *,Rect * *);
			virtual long GetSingle(float *);
			virtual long GetSingleArray(unsigned int *,float * *);
			virtual long GetSize(Size *);
			virtual long GetSizeArray(unsigned int *,Size * *);
			virtual long GetString(HSTRING__ * *);
			virtual long GetStringArray(unsigned int *,HSTRING__ * * *);
			virtual long GetTimeSpan(TimeSpan *);
			virtual long GetTimeSpanArray(unsigned int *,TimeSpan * *);
			virtual long GetUInt16(unsigned short *);
			virtual long GetUInt16Array(unsigned int *,unsigned short * *);
			virtual long GetUInt32(unsigned int *);
			virtual long GetUInt32Array(unsigned int *,unsigned int * *);
			virtual long GetUInt64(unsigned __int64 *);
			virtual long GetUInt64Array(unsigned int *,unsigned __int64 * *);
			virtual long GetUInt8(unsigned char *);
			virtual long GetUInt8Array(unsigned int *,unsigned char * *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			virtual long get_IsNumericScalar(unsigned char *);
			virtual long get_Type(PropertyType *);
		};

		class Value<ValueArray<float> >
		{
			virtual IUnknown * RawCOMSelf();
			virtual long DisconnectObject(unsigned long);
			virtual long GetBoolean(unsigned char *);
			virtual long GetBooleanArray(unsigned int *,unsigned char * *);
			virtual long GetChar16(wchar_t *);
			virtual long GetChar16Array(unsigned int *,wchar_t * *);
			virtual long GetDateTime(DateTime *);
			virtual long GetDateTimeArray(unsigned int *,DateTime * *);
			virtual long GetDouble(double *);
			virtual long GetDoubleArray(unsigned int *,double * *);
			virtual long GetGuid(_GUID *);
			virtual long GetGuidArray(unsigned int *,_GUID * *);
			virtual long GetInspectableArray(unsigned int *,IInspectable * * *);
			virtual long GetInt16(short *);
			virtual long GetInt16Array(unsigned int *,short * *);
			virtual long GetInt32(int *);
			virtual long GetInt32Array(unsigned int *,int * *);
			virtual long GetInt64(__int64 *);
			virtual long GetInt64Array(unsigned int *,__int64 * *);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetPoint(Point *);
			virtual long GetPointArray(unsigned int *,Point * *);
			virtual long GetRect(Rect *);
			virtual long GetRectArray(unsigned int *,Rect * *);
			virtual long GetSingle(float *);
			virtual long GetSingleArray(unsigned int *,float * *);
			virtual long GetSize(Size *);
			virtual long GetSizeArray(unsigned int *,Size * *);
			virtual long GetString(HSTRING__ * *);
			virtual long GetStringArray(unsigned int *,HSTRING__ * * *);
			virtual long GetTimeSpan(TimeSpan *);
			virtual long GetTimeSpanArray(unsigned int *,TimeSpan * *);
			virtual long GetUInt16(unsigned short *);
			virtual long GetUInt16Array(unsigned int *,unsigned short * *);
			virtual long GetUInt32(unsigned int *);
			virtual long GetUInt32Array(unsigned int *,unsigned int * *);
			virtual long GetUInt64(unsigned __int64 *);
			virtual long GetUInt64Array(unsigned int *,unsigned __int64 * *);
			virtual long GetUInt8(unsigned char *);
			virtual long GetUInt8Array(unsigned int *,unsigned char * *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			virtual long get_IsNumericScalar(unsigned char *);
			virtual long get_Type(PropertyType *);
		};

		class Value<ValueArray<int> >
		{
			virtual IUnknown * RawCOMSelf();
			virtual long DisconnectObject(unsigned long);
			virtual long GetBoolean(unsigned char *);
			virtual long GetBooleanArray(unsigned int *,unsigned char * *);
			virtual long GetChar16(wchar_t *);
			virtual long GetChar16Array(unsigned int *,wchar_t * *);
			virtual long GetDateTime(DateTime *);
			virtual long GetDateTimeArray(unsigned int *,DateTime * *);
			virtual long GetDouble(double *);
			virtual long GetDoubleArray(unsigned int *,double * *);
			virtual long GetGuid(_GUID *);
			virtual long GetGuidArray(unsigned int *,_GUID * *);
			virtual long GetInspectableArray(unsigned int *,IInspectable * * *);
			virtual long GetInt16(short *);
			virtual long GetInt16Array(unsigned int *,short * *);
			virtual long GetInt32(int *);
			virtual long GetInt32Array(unsigned int *,int * *);
			virtual long GetInt64(__int64 *);
			virtual long GetInt64Array(unsigned int *,__int64 * *);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetPoint(Point *);
			virtual long GetPointArray(unsigned int *,Point * *);
			virtual long GetRect(Rect *);
			virtual long GetRectArray(unsigned int *,Rect * *);
			virtual long GetSingle(float *);
			virtual long GetSingleArray(unsigned int *,float * *);
			virtual long GetSize(Size *);
			virtual long GetSizeArray(unsigned int *,Size * *);
			virtual long GetString(HSTRING__ * *);
			virtual long GetStringArray(unsigned int *,HSTRING__ * * *);
			virtual long GetTimeSpan(TimeSpan *);
			virtual long GetTimeSpanArray(unsigned int *,TimeSpan * *);
			virtual long GetUInt16(unsigned short *);
			virtual long GetUInt16Array(unsigned int *,unsigned short * *);
			virtual long GetUInt32(unsigned int *);
			virtual long GetUInt32Array(unsigned int *,unsigned int * *);
			virtual long GetUInt64(unsigned __int64 *);
			virtual long GetUInt64Array(unsigned int *,unsigned __int64 * *);
			virtual long GetUInt8(unsigned char *);
			virtual long GetUInt8Array(unsigned int *,unsigned char * *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			virtual long get_IsNumericScalar(unsigned char *);
			virtual long get_Type(PropertyType *);
		};

		class Value<ValueArray<short> >
		{
			virtual IUnknown * RawCOMSelf();
			virtual long DisconnectObject(unsigned long);
			virtual long GetBoolean(unsigned char *);
			virtual long GetBooleanArray(unsigned int *,unsigned char * *);
			virtual long GetChar16(wchar_t *);
			virtual long GetChar16Array(unsigned int *,wchar_t * *);
			virtual long GetDateTime(DateTime *);
			virtual long GetDateTimeArray(unsigned int *,DateTime * *);
			virtual long GetDouble(double *);
			virtual long GetDoubleArray(unsigned int *,double * *);
			virtual long GetGuid(_GUID *);
			virtual long GetGuidArray(unsigned int *,_GUID * *);
			virtual long GetInspectableArray(unsigned int *,IInspectable * * *);
			virtual long GetInt16(short *);
			virtual long GetInt16Array(unsigned int *,short * *);
			virtual long GetInt32(int *);
			virtual long GetInt32Array(unsigned int *,int * *);
			virtual long GetInt64(__int64 *);
			virtual long GetInt64Array(unsigned int *,__int64 * *);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetPoint(Point *);
			virtual long GetPointArray(unsigned int *,Point * *);
			virtual long GetRect(Rect *);
			virtual long GetRectArray(unsigned int *,Rect * *);
			virtual long GetSingle(float *);
			virtual long GetSingleArray(unsigned int *,float * *);
			virtual long GetSize(Size *);
			virtual long GetSizeArray(unsigned int *,Size * *);
			virtual long GetString(HSTRING__ * *);
			virtual long GetStringArray(unsigned int *,HSTRING__ * * *);
			virtual long GetTimeSpan(TimeSpan *);
			virtual long GetTimeSpanArray(unsigned int *,TimeSpan * *);
			virtual long GetUInt16(unsigned short *);
			virtual long GetUInt16Array(unsigned int *,unsigned short * *);
			virtual long GetUInt32(unsigned int *);
			virtual long GetUInt32Array(unsigned int *,unsigned int * *);
			virtual long GetUInt64(unsigned __int64 *);
			virtual long GetUInt64Array(unsigned int *,unsigned __int64 * *);
			virtual long GetUInt8(unsigned char *);
			virtual long GetUInt8Array(unsigned int *,unsigned char * *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			virtual long get_IsNumericScalar(unsigned char *);
			virtual long get_Type(PropertyType *);
		};

		class Value<ValueArray<unsigned __int64> >
		{
			virtual IUnknown * RawCOMSelf();
			virtual long DisconnectObject(unsigned long);
			virtual long GetBoolean(unsigned char *);
			virtual long GetBooleanArray(unsigned int *,unsigned char * *);
			virtual long GetChar16(wchar_t *);
			virtual long GetChar16Array(unsigned int *,wchar_t * *);
			virtual long GetDateTime(DateTime *);
			virtual long GetDateTimeArray(unsigned int *,DateTime * *);
			virtual long GetDouble(double *);
			virtual long GetDoubleArray(unsigned int *,double * *);
			virtual long GetGuid(_GUID *);
			virtual long GetGuidArray(unsigned int *,_GUID * *);
			virtual long GetInspectableArray(unsigned int *,IInspectable * * *);
			virtual long GetInt16(short *);
			virtual long GetInt16Array(unsigned int *,short * *);
			virtual long GetInt32(int *);
			virtual long GetInt32Array(unsigned int *,int * *);
			virtual long GetInt64(__int64 *);
			virtual long GetInt64Array(unsigned int *,__int64 * *);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetPoint(Point *);
			virtual long GetPointArray(unsigned int *,Point * *);
			virtual long GetRect(Rect *);
			virtual long GetRectArray(unsigned int *,Rect * *);
			virtual long GetSingle(float *);
			virtual long GetSingleArray(unsigned int *,float * *);
			virtual long GetSize(Size *);
			virtual long GetSizeArray(unsigned int *,Size * *);
			virtual long GetString(HSTRING__ * *);
			virtual long GetStringArray(unsigned int *,HSTRING__ * * *);
			virtual long GetTimeSpan(TimeSpan *);
			virtual long GetTimeSpanArray(unsigned int *,TimeSpan * *);
			virtual long GetUInt16(unsigned short *);
			virtual long GetUInt16Array(unsigned int *,unsigned short * *);
			virtual long GetUInt32(unsigned int *);
			virtual long GetUInt32Array(unsigned int *,unsigned int * *);
			virtual long GetUInt64(unsigned __int64 *);
			virtual long GetUInt64Array(unsigned int *,unsigned __int64 * *);
			virtual long GetUInt8(unsigned char *);
			virtual long GetUInt8Array(unsigned int *,unsigned char * *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			virtual long get_IsNumericScalar(unsigned char *);
			virtual long get_Type(PropertyType *);
		};

		class Value<ValueArray<unsigned char> >
		{
			virtual IUnknown * RawCOMSelf();
			virtual long DisconnectObject(unsigned long);
			virtual long GetBoolean(unsigned char *);
			virtual long GetBooleanArray(unsigned int *,unsigned char * *);
			virtual long GetChar16(wchar_t *);
			virtual long GetChar16Array(unsigned int *,wchar_t * *);
			virtual long GetDateTime(DateTime *);
			virtual long GetDateTimeArray(unsigned int *,DateTime * *);
			virtual long GetDouble(double *);
			virtual long GetDoubleArray(unsigned int *,double * *);
			virtual long GetGuid(_GUID *);
			virtual long GetGuidArray(unsigned int *,_GUID * *);
			virtual long GetInspectableArray(unsigned int *,IInspectable * * *);
			virtual long GetInt16(short *);
			virtual long GetInt16Array(unsigned int *,short * *);
			virtual long GetInt32(int *);
			virtual long GetInt32Array(unsigned int *,int * *);
			virtual long GetInt64(__int64 *);
			virtual long GetInt64Array(unsigned int *,__int64 * *);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetPoint(Point *);
			virtual long GetPointArray(unsigned int *,Point * *);
			virtual long GetRect(Rect *);
			virtual long GetRectArray(unsigned int *,Rect * *);
			virtual long GetSingle(float *);
			virtual long GetSingleArray(unsigned int *,float * *);
			virtual long GetSize(Size *);
			virtual long GetSizeArray(unsigned int *,Size * *);
			virtual long GetString(HSTRING__ * *);
			virtual long GetStringArray(unsigned int *,HSTRING__ * * *);
			virtual long GetTimeSpan(TimeSpan *);
			virtual long GetTimeSpanArray(unsigned int *,TimeSpan * *);
			virtual long GetUInt16(unsigned short *);
			virtual long GetUInt16Array(unsigned int *,unsigned short * *);
			virtual long GetUInt32(unsigned int *);
			virtual long GetUInt32Array(unsigned int *,unsigned int * *);
			virtual long GetUInt64(unsigned __int64 *);
			virtual long GetUInt64Array(unsigned int *,unsigned __int64 * *);
			virtual long GetUInt8(unsigned char *);
			virtual long GetUInt8Array(unsigned int *,unsigned char * *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			virtual long get_IsNumericScalar(unsigned char *);
			virtual long get_Type(PropertyType *);
		};

		class Value<ValueArray<unsigned int> >
		{
			virtual IUnknown * RawCOMSelf();
			virtual long DisconnectObject(unsigned long);
			virtual long GetBoolean(unsigned char *);
			virtual long GetBooleanArray(unsigned int *,unsigned char * *);
			virtual long GetChar16(wchar_t *);
			virtual long GetChar16Array(unsigned int *,wchar_t * *);
			virtual long GetDateTime(DateTime *);
			virtual long GetDateTimeArray(unsigned int *,DateTime * *);
			virtual long GetDouble(double *);
			virtual long GetDoubleArray(unsigned int *,double * *);
			virtual long GetGuid(_GUID *);
			virtual long GetGuidArray(unsigned int *,_GUID * *);
			virtual long GetInspectableArray(unsigned int *,IInspectable * * *);
			virtual long GetInt16(short *);
			virtual long GetInt16Array(unsigned int *,short * *);
			virtual long GetInt32(int *);
			virtual long GetInt32Array(unsigned int *,int * *);
			virtual long GetInt64(__int64 *);
			virtual long GetInt64Array(unsigned int *,__int64 * *);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetPoint(Point *);
			virtual long GetPointArray(unsigned int *,Point * *);
			virtual long GetRect(Rect *);
			virtual long GetRectArray(unsigned int *,Rect * *);
			virtual long GetSingle(float *);
			virtual long GetSingleArray(unsigned int *,float * *);
			virtual long GetSize(Size *);
			virtual long GetSizeArray(unsigned int *,Size * *);
			virtual long GetString(HSTRING__ * *);
			virtual long GetStringArray(unsigned int *,HSTRING__ * * *);
			virtual long GetTimeSpan(TimeSpan *);
			virtual long GetTimeSpanArray(unsigned int *,TimeSpan * *);
			virtual long GetUInt16(unsigned short *);
			virtual long GetUInt16Array(unsigned int *,unsigned short * *);
			virtual long GetUInt32(unsigned int *);
			virtual long GetUInt32Array(unsigned int *,unsigned int * *);
			virtual long GetUInt64(unsigned __int64 *);
			virtual long GetUInt64Array(unsigned int *,unsigned __int64 * *);
			virtual long GetUInt8(unsigned char *);
			virtual long GetUInt8Array(unsigned int *,unsigned char * *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			virtual long get_IsNumericScalar(unsigned char *);
			virtual long get_Type(PropertyType *);
		};

		class Value<ValueArray<unsigned short> >
		{
			virtual IUnknown * RawCOMSelf();
			virtual long DisconnectObject(unsigned long);
			virtual long GetBoolean(unsigned char *);
			virtual long GetBooleanArray(unsigned int *,unsigned char * *);
			virtual long GetChar16(wchar_t *);
			virtual long GetChar16Array(unsigned int *,wchar_t * *);
			virtual long GetDateTime(DateTime *);
			virtual long GetDateTimeArray(unsigned int *,DateTime * *);
			virtual long GetDouble(double *);
			virtual long GetDoubleArray(unsigned int *,double * *);
			virtual long GetGuid(_GUID *);
			virtual long GetGuidArray(unsigned int *,_GUID * *);
			virtual long GetInspectableArray(unsigned int *,IInspectable * * *);
			virtual long GetInt16(short *);
			virtual long GetInt16Array(unsigned int *,short * *);
			virtual long GetInt32(int *);
			virtual long GetInt32Array(unsigned int *,int * *);
			virtual long GetInt64(__int64 *);
			virtual long GetInt64Array(unsigned int *,__int64 * *);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetPoint(Point *);
			virtual long GetPointArray(unsigned int *,Point * *);
			virtual long GetRect(Rect *);
			virtual long GetRectArray(unsigned int *,Rect * *);
			virtual long GetSingle(float *);
			virtual long GetSingleArray(unsigned int *,float * *);
			virtual long GetSize(Size *);
			virtual long GetSizeArray(unsigned int *,Size * *);
			virtual long GetString(HSTRING__ * *);
			virtual long GetStringArray(unsigned int *,HSTRING__ * * *);
			virtual long GetTimeSpan(TimeSpan *);
			virtual long GetTimeSpanArray(unsigned int *,TimeSpan * *);
			virtual long GetUInt16(unsigned short *);
			virtual long GetUInt16Array(unsigned int *,unsigned short * *);
			virtual long GetUInt32(unsigned int *);
			virtual long GetUInt32Array(unsigned int *,unsigned int * *);
			virtual long GetUInt64(unsigned __int64 *);
			virtual long GetUInt64Array(unsigned int *,unsigned __int64 * *);
			virtual long GetUInt8(unsigned char *);
			virtual long GetUInt8Array(unsigned int *,unsigned char * *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			virtual long get_IsNumericScalar(unsigned char *);
			virtual long get_Type(PropertyType *);
		};

		class Value<ValueArray<wchar_t> >
		{
			virtual IUnknown * RawCOMSelf();
			virtual long DisconnectObject(unsigned long);
			virtual long GetBoolean(unsigned char *);
			virtual long GetBooleanArray(unsigned int *,unsigned char * *);
			virtual long GetChar16(wchar_t *);
			virtual long GetChar16Array(unsigned int *,wchar_t * *);
			virtual long GetDateTime(DateTime *);
			virtual long GetDateTimeArray(unsigned int *,DateTime * *);
			virtual long GetDouble(double *);
			virtual long GetDoubleArray(unsigned int *,double * *);
			virtual long GetGuid(_GUID *);
			virtual long GetGuidArray(unsigned int *,_GUID * *);
			virtual long GetInspectableArray(unsigned int *,IInspectable * * *);
			virtual long GetInt16(short *);
			virtual long GetInt16Array(unsigned int *,short * *);
			virtual long GetInt32(int *);
			virtual long GetInt32Array(unsigned int *,int * *);
			virtual long GetInt64(__int64 *);
			virtual long GetInt64Array(unsigned int *,__int64 * *);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetPoint(Point *);
			virtual long GetPointArray(unsigned int *,Point * *);
			virtual long GetRect(Rect *);
			virtual long GetRectArray(unsigned int *,Rect * *);
			virtual long GetSingle(float *);
			virtual long GetSingleArray(unsigned int *,float * *);
			virtual long GetSize(Size *);
			virtual long GetSizeArray(unsigned int *,Size * *);
			virtual long GetString(HSTRING__ * *);
			virtual long GetStringArray(unsigned int *,HSTRING__ * * *);
			virtual long GetTimeSpan(TimeSpan *);
			virtual long GetTimeSpanArray(unsigned int *,TimeSpan * *);
			virtual long GetUInt16(unsigned short *);
			virtual long GetUInt16Array(unsigned int *,unsigned short * *);
			virtual long GetUInt32(unsigned int *);
			virtual long GetUInt32Array(unsigned int *,unsigned int * *);
			virtual long GetUInt64(unsigned __int64 *);
			virtual long GetUInt64Array(unsigned int *,unsigned __int64 * *);
			virtual long GetUInt8(unsigned char *);
			virtual long GetUInt8Array(unsigned int *,unsigned char * *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			virtual long get_IsNumericScalar(unsigned char *);
			virtual long get_Type(PropertyType *);
		};

		class Value<ValueScalar<DateTime> >
		{
			virtual IUnknown * RawCOMSelf();
			virtual long DisconnectObject(unsigned long);
			virtual long GetBoolean(unsigned char *);
			virtual long GetBooleanArray(unsigned int *,unsigned char * *);
			virtual long GetChar16(wchar_t *);
			virtual long GetChar16Array(unsigned int *,wchar_t * *);
			virtual long GetDateTime(DateTime *);
			virtual long GetDateTimeArray(unsigned int *,DateTime * *);
			virtual long GetDouble(double *);
			virtual long GetDoubleArray(unsigned int *,double * *);
			virtual long GetGuid(_GUID *);
			virtual long GetGuidArray(unsigned int *,_GUID * *);
			virtual long GetInspectableArray(unsigned int *,IInspectable * * *);
			virtual long GetInt16(short *);
			virtual long GetInt16Array(unsigned int *,short * *);
			virtual long GetInt32(int *);
			virtual long GetInt32Array(unsigned int *,int * *);
			virtual long GetInt64(__int64 *);
			virtual long GetInt64Array(unsigned int *,__int64 * *);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetPoint(Point *);
			virtual long GetPointArray(unsigned int *,Point * *);
			virtual long GetRect(Rect *);
			virtual long GetRectArray(unsigned int *,Rect * *);
			virtual long GetSingle(float *);
			virtual long GetSingleArray(unsigned int *,float * *);
			virtual long GetSize(Size *);
			virtual long GetSizeArray(unsigned int *,Size * *);
			virtual long GetString(HSTRING__ * *);
			virtual long GetStringArray(unsigned int *,HSTRING__ * * *);
			virtual long GetTimeSpan(TimeSpan *);
			virtual long GetTimeSpanArray(unsigned int *,TimeSpan * *);
			virtual long GetUInt16(unsigned short *);
			virtual long GetUInt16Array(unsigned int *,unsigned short * *);
			virtual long GetUInt32(unsigned int *);
			virtual long GetUInt32Array(unsigned int *,unsigned int * *);
			virtual long GetUInt64(unsigned __int64 *);
			virtual long GetUInt64Array(unsigned int *,unsigned __int64 * *);
			virtual long GetUInt8(unsigned char *);
			virtual long GetUInt8Array(unsigned int *,unsigned char * *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			virtual long get_IsNumericScalar(unsigned char *);
			virtual long get_Type(PropertyType *);
		};

		class Value<ValueScalar<HSTRING__ *> >
		{
			virtual IUnknown * RawCOMSelf();
			virtual long DisconnectObject(unsigned long);
			virtual long GetBoolean(unsigned char *);
			virtual long GetBooleanArray(unsigned int *,unsigned char * *);
			virtual long GetChar16(wchar_t *);
			virtual long GetChar16Array(unsigned int *,wchar_t * *);
			virtual long GetDateTime(DateTime *);
			virtual long GetDateTimeArray(unsigned int *,DateTime * *);
			virtual long GetDouble(double *);
			virtual long GetDoubleArray(unsigned int *,double * *);
			virtual long GetGuid(_GUID *);
			virtual long GetGuidArray(unsigned int *,_GUID * *);
			virtual long GetInspectableArray(unsigned int *,IInspectable * * *);
			virtual long GetInt16(short *);
			virtual long GetInt16Array(unsigned int *,short * *);
			virtual long GetInt32(int *);
			virtual long GetInt32Array(unsigned int *,int * *);
			virtual long GetInt64(__int64 *);
			virtual long GetInt64Array(unsigned int *,__int64 * *);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetPoint(Point *);
			virtual long GetPointArray(unsigned int *,Point * *);
			virtual long GetRect(Rect *);
			virtual long GetRectArray(unsigned int *,Rect * *);
			virtual long GetSingle(float *);
			virtual long GetSingleArray(unsigned int *,float * *);
			virtual long GetSize(Size *);
			virtual long GetSizeArray(unsigned int *,Size * *);
			virtual long GetString(HSTRING__ * *);
			virtual long GetStringArray(unsigned int *,HSTRING__ * * *);
			virtual long GetTimeSpan(TimeSpan *);
			virtual long GetTimeSpanArray(unsigned int *,TimeSpan * *);
			virtual long GetUInt16(unsigned short *);
			virtual long GetUInt16Array(unsigned int *,unsigned short * *);
			virtual long GetUInt32(unsigned int *);
			virtual long GetUInt32Array(unsigned int *,unsigned int * *);
			virtual long GetUInt64(unsigned __int64 *);
			virtual long GetUInt64Array(unsigned int *,unsigned __int64 * *);
			virtual long GetUInt8(unsigned char *);
			virtual long GetUInt8Array(unsigned int *,unsigned char * *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			virtual long get_IsNumericScalar(unsigned char *);
			virtual long get_Type(PropertyType *);
		};

		class Value<ValueScalar<Point> >
		{
			virtual IUnknown * RawCOMSelf();
			virtual long DisconnectObject(unsigned long);
			virtual long GetBoolean(unsigned char *);
			virtual long GetBooleanArray(unsigned int *,unsigned char * *);
			virtual long GetChar16(wchar_t *);
			virtual long GetChar16Array(unsigned int *,wchar_t * *);
			virtual long GetDateTime(DateTime *);
			virtual long GetDateTimeArray(unsigned int *,DateTime * *);
			virtual long GetDouble(double *);
			virtual long GetDoubleArray(unsigned int *,double * *);
			virtual long GetGuid(_GUID *);
			virtual long GetGuidArray(unsigned int *,_GUID * *);
			virtual long GetInspectableArray(unsigned int *,IInspectable * * *);
			virtual long GetInt16(short *);
			virtual long GetInt16Array(unsigned int *,short * *);
			virtual long GetInt32(int *);
			virtual long GetInt32Array(unsigned int *,int * *);
			virtual long GetInt64(__int64 *);
			virtual long GetInt64Array(unsigned int *,__int64 * *);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetPoint(Point *);
			virtual long GetPointArray(unsigned int *,Point * *);
			virtual long GetRect(Rect *);
			virtual long GetRectArray(unsigned int *,Rect * *);
			virtual long GetSingle(float *);
			virtual long GetSingleArray(unsigned int *,float * *);
			virtual long GetSize(Size *);
			virtual long GetSizeArray(unsigned int *,Size * *);
			virtual long GetString(HSTRING__ * *);
			virtual long GetStringArray(unsigned int *,HSTRING__ * * *);
			virtual long GetTimeSpan(TimeSpan *);
			virtual long GetTimeSpanArray(unsigned int *,TimeSpan * *);
			virtual long GetUInt16(unsigned short *);
			virtual long GetUInt16Array(unsigned int *,unsigned short * *);
			virtual long GetUInt32(unsigned int *);
			virtual long GetUInt32Array(unsigned int *,unsigned int * *);
			virtual long GetUInt64(unsigned __int64 *);
			virtual long GetUInt64Array(unsigned int *,unsigned __int64 * *);
			virtual long GetUInt8(unsigned char *);
			virtual long GetUInt8Array(unsigned int *,unsigned char * *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			virtual long get_IsNumericScalar(unsigned char *);
			virtual long get_Type(PropertyType *);
		};

		class Value<ValueScalar<Rect> >
		{
			virtual IUnknown * RawCOMSelf();
			virtual long DisconnectObject(unsigned long);
			virtual long GetBoolean(unsigned char *);
			virtual long GetBooleanArray(unsigned int *,unsigned char * *);
			virtual long GetChar16(wchar_t *);
			virtual long GetChar16Array(unsigned int *,wchar_t * *);
			virtual long GetDateTime(DateTime *);
			virtual long GetDateTimeArray(unsigned int *,DateTime * *);
			virtual long GetDouble(double *);
			virtual long GetDoubleArray(unsigned int *,double * *);
			virtual long GetGuid(_GUID *);
			virtual long GetGuidArray(unsigned int *,_GUID * *);
			virtual long GetInspectableArray(unsigned int *,IInspectable * * *);
			virtual long GetInt16(short *);
			virtual long GetInt16Array(unsigned int *,short * *);
			virtual long GetInt32(int *);
			virtual long GetInt32Array(unsigned int *,int * *);
			virtual long GetInt64(__int64 *);
			virtual long GetInt64Array(unsigned int *,__int64 * *);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetPoint(Point *);
			virtual long GetPointArray(unsigned int *,Point * *);
			virtual long GetRect(Rect *);
			virtual long GetRectArray(unsigned int *,Rect * *);
			virtual long GetSingle(float *);
			virtual long GetSingleArray(unsigned int *,float * *);
			virtual long GetSize(Size *);
			virtual long GetSizeArray(unsigned int *,Size * *);
			virtual long GetString(HSTRING__ * *);
			virtual long GetStringArray(unsigned int *,HSTRING__ * * *);
			virtual long GetTimeSpan(TimeSpan *);
			virtual long GetTimeSpanArray(unsigned int *,TimeSpan * *);
			virtual long GetUInt16(unsigned short *);
			virtual long GetUInt16Array(unsigned int *,unsigned short * *);
			virtual long GetUInt32(unsigned int *);
			virtual long GetUInt32Array(unsigned int *,unsigned int * *);
			virtual long GetUInt64(unsigned __int64 *);
			virtual long GetUInt64Array(unsigned int *,unsigned __int64 * *);
			virtual long GetUInt8(unsigned char *);
			virtual long GetUInt8Array(unsigned int *,unsigned char * *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			virtual long get_IsNumericScalar(unsigned char *);
			virtual long get_Type(PropertyType *);
		};

		class Value<ValueScalar<Size> >
		{
			virtual IUnknown * RawCOMSelf();
			virtual long DisconnectObject(unsigned long);
			virtual long GetBoolean(unsigned char *);
			virtual long GetBooleanArray(unsigned int *,unsigned char * *);
			virtual long GetChar16(wchar_t *);
			virtual long GetChar16Array(unsigned int *,wchar_t * *);
			virtual long GetDateTime(DateTime *);
			virtual long GetDateTimeArray(unsigned int *,DateTime * *);
			virtual long GetDouble(double *);
			virtual long GetDoubleArray(unsigned int *,double * *);
			virtual long GetGuid(_GUID *);
			virtual long GetGuidArray(unsigned int *,_GUID * *);
			virtual long GetInspectableArray(unsigned int *,IInspectable * * *);
			virtual long GetInt16(short *);
			virtual long GetInt16Array(unsigned int *,short * *);
			virtual long GetInt32(int *);
			virtual long GetInt32Array(unsigned int *,int * *);
			virtual long GetInt64(__int64 *);
			virtual long GetInt64Array(unsigned int *,__int64 * *);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetPoint(Point *);
			virtual long GetPointArray(unsigned int *,Point * *);
			virtual long GetRect(Rect *);
			virtual long GetRectArray(unsigned int *,Rect * *);
			virtual long GetSingle(float *);
			virtual long GetSingleArray(unsigned int *,float * *);
			virtual long GetSize(Size *);
			virtual long GetSizeArray(unsigned int *,Size * *);
			virtual long GetString(HSTRING__ * *);
			virtual long GetStringArray(unsigned int *,HSTRING__ * * *);
			virtual long GetTimeSpan(TimeSpan *);
			virtual long GetTimeSpanArray(unsigned int *,TimeSpan * *);
			virtual long GetUInt16(unsigned short *);
			virtual long GetUInt16Array(unsigned int *,unsigned short * *);
			virtual long GetUInt32(unsigned int *);
			virtual long GetUInt32Array(unsigned int *,unsigned int * *);
			virtual long GetUInt64(unsigned __int64 *);
			virtual long GetUInt64Array(unsigned int *,unsigned __int64 * *);
			virtual long GetUInt8(unsigned char *);
			virtual long GetUInt8Array(unsigned int *,unsigned char * *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			virtual long get_IsNumericScalar(unsigned char *);
			virtual long get_Type(PropertyType *);
		};

		class Value<ValueScalar<TimeSpan> >
		{
			virtual IUnknown * RawCOMSelf();
			virtual long DisconnectObject(unsigned long);
			virtual long GetBoolean(unsigned char *);
			virtual long GetBooleanArray(unsigned int *,unsigned char * *);
			virtual long GetChar16(wchar_t *);
			virtual long GetChar16Array(unsigned int *,wchar_t * *);
			virtual long GetDateTime(DateTime *);
			virtual long GetDateTimeArray(unsigned int *,DateTime * *);
			virtual long GetDouble(double *);
			virtual long GetDoubleArray(unsigned int *,double * *);
			virtual long GetGuid(_GUID *);
			virtual long GetGuidArray(unsigned int *,_GUID * *);
			virtual long GetInspectableArray(unsigned int *,IInspectable * * *);
			virtual long GetInt16(short *);
			virtual long GetInt16Array(unsigned int *,short * *);
			virtual long GetInt32(int *);
			virtual long GetInt32Array(unsigned int *,int * *);
			virtual long GetInt64(__int64 *);
			virtual long GetInt64Array(unsigned int *,__int64 * *);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetPoint(Point *);
			virtual long GetPointArray(unsigned int *,Point * *);
			virtual long GetRect(Rect *);
			virtual long GetRectArray(unsigned int *,Rect * *);
			virtual long GetSingle(float *);
			virtual long GetSingleArray(unsigned int *,float * *);
			virtual long GetSize(Size *);
			virtual long GetSizeArray(unsigned int *,Size * *);
			virtual long GetString(HSTRING__ * *);
			virtual long GetStringArray(unsigned int *,HSTRING__ * * *);
			virtual long GetTimeSpan(TimeSpan *);
			virtual long GetTimeSpanArray(unsigned int *,TimeSpan * *);
			virtual long GetUInt16(unsigned short *);
			virtual long GetUInt16Array(unsigned int *,unsigned short * *);
			virtual long GetUInt32(unsigned int *);
			virtual long GetUInt32Array(unsigned int *,unsigned int * *);
			virtual long GetUInt64(unsigned __int64 *);
			virtual long GetUInt64Array(unsigned int *,unsigned __int64 * *);
			virtual long GetUInt8(unsigned char *);
			virtual long GetUInt8Array(unsigned int *,unsigned char * *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			virtual long get_IsNumericScalar(unsigned char *);
			virtual long get_Type(PropertyType *);
		};

		class Value<ValueScalar<_GUID> >
		{
			virtual IUnknown * RawCOMSelf();
			virtual long DisconnectObject(unsigned long);
			virtual long GetBoolean(unsigned char *);
			virtual long GetBooleanArray(unsigned int *,unsigned char * *);
			virtual long GetChar16(wchar_t *);
			virtual long GetChar16Array(unsigned int *,wchar_t * *);
			virtual long GetDateTime(DateTime *);
			virtual long GetDateTimeArray(unsigned int *,DateTime * *);
			virtual long GetDouble(double *);
			virtual long GetDoubleArray(unsigned int *,double * *);
			virtual long GetGuid(_GUID *);
			virtual long GetGuidArray(unsigned int *,_GUID * *);
			virtual long GetInspectableArray(unsigned int *,IInspectable * * *);
			virtual long GetInt16(short *);
			virtual long GetInt16Array(unsigned int *,short * *);
			virtual long GetInt32(int *);
			virtual long GetInt32Array(unsigned int *,int * *);
			virtual long GetInt64(__int64 *);
			virtual long GetInt64Array(unsigned int *,__int64 * *);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetPoint(Point *);
			virtual long GetPointArray(unsigned int *,Point * *);
			virtual long GetRect(Rect *);
			virtual long GetRectArray(unsigned int *,Rect * *);
			virtual long GetSingle(float *);
			virtual long GetSingleArray(unsigned int *,float * *);
			virtual long GetSize(Size *);
			virtual long GetSizeArray(unsigned int *,Size * *);
			virtual long GetString(HSTRING__ * *);
			virtual long GetStringArray(unsigned int *,HSTRING__ * * *);
			virtual long GetTimeSpan(TimeSpan *);
			virtual long GetTimeSpanArray(unsigned int *,TimeSpan * *);
			virtual long GetUInt16(unsigned short *);
			virtual long GetUInt16Array(unsigned int *,unsigned short * *);
			virtual long GetUInt32(unsigned int *);
			virtual long GetUInt32Array(unsigned int *,unsigned int * *);
			virtual long GetUInt64(unsigned __int64 *);
			virtual long GetUInt64Array(unsigned int *,unsigned __int64 * *);
			virtual long GetUInt8(unsigned char *);
			virtual long GetUInt8Array(unsigned int *,unsigned char * *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			virtual long get_IsNumericScalar(unsigned char *);
			virtual long get_Type(PropertyType *);
		};

		class Value<ValueScalar<__int64> >
		{
			virtual IUnknown * RawCOMSelf();
			virtual long DisconnectObject(unsigned long);
			virtual long GetBoolean(unsigned char *);
			virtual long GetBooleanArray(unsigned int *,unsigned char * *);
			virtual long GetChar16(wchar_t *);
			virtual long GetChar16Array(unsigned int *,wchar_t * *);
			virtual long GetDateTime(DateTime *);
			virtual long GetDateTimeArray(unsigned int *,DateTime * *);
			virtual long GetDouble(double *);
			virtual long GetDoubleArray(unsigned int *,double * *);
			virtual long GetGuid(_GUID *);
			virtual long GetGuidArray(unsigned int *,_GUID * *);
			virtual long GetInspectableArray(unsigned int *,IInspectable * * *);
			virtual long GetInt16(short *);
			virtual long GetInt16Array(unsigned int *,short * *);
			virtual long GetInt32(int *);
			virtual long GetInt32Array(unsigned int *,int * *);
			virtual long GetInt64(__int64 *);
			virtual long GetInt64Array(unsigned int *,__int64 * *);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetPoint(Point *);
			virtual long GetPointArray(unsigned int *,Point * *);
			virtual long GetRect(Rect *);
			virtual long GetRectArray(unsigned int *,Rect * *);
			virtual long GetSingle(float *);
			virtual long GetSingleArray(unsigned int *,float * *);
			virtual long GetSize(Size *);
			virtual long GetSizeArray(unsigned int *,Size * *);
			virtual long GetString(HSTRING__ * *);
			virtual long GetStringArray(unsigned int *,HSTRING__ * * *);
			virtual long GetTimeSpan(TimeSpan *);
			virtual long GetTimeSpanArray(unsigned int *,TimeSpan * *);
			virtual long GetUInt16(unsigned short *);
			virtual long GetUInt16Array(unsigned int *,unsigned short * *);
			virtual long GetUInt32(unsigned int *);
			virtual long GetUInt32Array(unsigned int *,unsigned int * *);
			virtual long GetUInt64(unsigned __int64 *);
			virtual long GetUInt64Array(unsigned int *,unsigned __int64 * *);
			virtual long GetUInt8(unsigned char *);
			virtual long GetUInt8Array(unsigned int *,unsigned char * *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			virtual long get_IsNumericScalar(unsigned char *);
			virtual long get_Type(PropertyType *);
		};

		class Value<ValueScalar<bool> >
		{
			virtual IUnknown * RawCOMSelf();
			virtual long DisconnectObject(unsigned long);
			virtual long GetBoolean(unsigned char *);
			virtual long GetBooleanArray(unsigned int *,unsigned char * *);
			virtual long GetChar16(wchar_t *);
			virtual long GetChar16Array(unsigned int *,wchar_t * *);
			virtual long GetDateTime(DateTime *);
			virtual long GetDateTimeArray(unsigned int *,DateTime * *);
			virtual long GetDouble(double *);
			virtual long GetDoubleArray(unsigned int *,double * *);
			virtual long GetGuid(_GUID *);
			virtual long GetGuidArray(unsigned int *,_GUID * *);
			virtual long GetInspectableArray(unsigned int *,IInspectable * * *);
			virtual long GetInt16(short *);
			virtual long GetInt16Array(unsigned int *,short * *);
			virtual long GetInt32(int *);
			virtual long GetInt32Array(unsigned int *,int * *);
			virtual long GetInt64(__int64 *);
			virtual long GetInt64Array(unsigned int *,__int64 * *);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetPoint(Point *);
			virtual long GetPointArray(unsigned int *,Point * *);
			virtual long GetRect(Rect *);
			virtual long GetRectArray(unsigned int *,Rect * *);
			virtual long GetSingle(float *);
			virtual long GetSingleArray(unsigned int *,float * *);
			virtual long GetSize(Size *);
			virtual long GetSizeArray(unsigned int *,Size * *);
			virtual long GetString(HSTRING__ * *);
			virtual long GetStringArray(unsigned int *,HSTRING__ * * *);
			virtual long GetTimeSpan(TimeSpan *);
			virtual long GetTimeSpanArray(unsigned int *,TimeSpan * *);
			virtual long GetUInt16(unsigned short *);
			virtual long GetUInt16Array(unsigned int *,unsigned short * *);
			virtual long GetUInt32(unsigned int *);
			virtual long GetUInt32Array(unsigned int *,unsigned int * *);
			virtual long GetUInt64(unsigned __int64 *);
			virtual long GetUInt64Array(unsigned int *,unsigned __int64 * *);
			virtual long GetUInt8(unsigned char *);
			virtual long GetUInt8Array(unsigned int *,unsigned char * *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			virtual long get_IsNumericScalar(unsigned char *);
			virtual long get_Type(PropertyType *);
		};

		class Value<ValueScalar<double> >
		{
			virtual IUnknown * RawCOMSelf();
			virtual long DisconnectObject(unsigned long);
			virtual long GetBoolean(unsigned char *);
			virtual long GetBooleanArray(unsigned int *,unsigned char * *);
			virtual long GetChar16(wchar_t *);
			virtual long GetChar16Array(unsigned int *,wchar_t * *);
			virtual long GetDateTime(DateTime *);
			virtual long GetDateTimeArray(unsigned int *,DateTime * *);
			virtual long GetDouble(double *);
			virtual long GetDoubleArray(unsigned int *,double * *);
			virtual long GetGuid(_GUID *);
			virtual long GetGuidArray(unsigned int *,_GUID * *);
			virtual long GetInspectableArray(unsigned int *,IInspectable * * *);
			virtual long GetInt16(short *);
			virtual long GetInt16Array(unsigned int *,short * *);
			virtual long GetInt32(int *);
			virtual long GetInt32Array(unsigned int *,int * *);
			virtual long GetInt64(__int64 *);
			virtual long GetInt64Array(unsigned int *,__int64 * *);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetPoint(Point *);
			virtual long GetPointArray(unsigned int *,Point * *);
			virtual long GetRect(Rect *);
			virtual long GetRectArray(unsigned int *,Rect * *);
			virtual long GetSingle(float *);
			virtual long GetSingleArray(unsigned int *,float * *);
			virtual long GetSize(Size *);
			virtual long GetSizeArray(unsigned int *,Size * *);
			virtual long GetString(HSTRING__ * *);
			virtual long GetStringArray(unsigned int *,HSTRING__ * * *);
			virtual long GetTimeSpan(TimeSpan *);
			virtual long GetTimeSpanArray(unsigned int *,TimeSpan * *);
			virtual long GetUInt16(unsigned short *);
			virtual long GetUInt16Array(unsigned int *,unsigned short * *);
			virtual long GetUInt32(unsigned int *);
			virtual long GetUInt32Array(unsigned int *,unsigned int * *);
			virtual long GetUInt64(unsigned __int64 *);
			virtual long GetUInt64Array(unsigned int *,unsigned __int64 * *);
			virtual long GetUInt8(unsigned char *);
			virtual long GetUInt8Array(unsigned int *,unsigned char * *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			virtual long get_IsNumericScalar(unsigned char *);
			virtual long get_Type(PropertyType *);
		};

		class Value<ValueScalar<float> >
		{
			virtual IUnknown * RawCOMSelf();
			virtual long DisconnectObject(unsigned long);
			virtual long GetBoolean(unsigned char *);
			virtual long GetBooleanArray(unsigned int *,unsigned char * *);
			virtual long GetChar16(wchar_t *);
			virtual long GetChar16Array(unsigned int *,wchar_t * *);
			virtual long GetDateTime(DateTime *);
			virtual long GetDateTimeArray(unsigned int *,DateTime * *);
			virtual long GetDouble(double *);
			virtual long GetDoubleArray(unsigned int *,double * *);
			virtual long GetGuid(_GUID *);
			virtual long GetGuidArray(unsigned int *,_GUID * *);
			virtual long GetInspectableArray(unsigned int *,IInspectable * * *);
			virtual long GetInt16(short *);
			virtual long GetInt16Array(unsigned int *,short * *);
			virtual long GetInt32(int *);
			virtual long GetInt32Array(unsigned int *,int * *);
			virtual long GetInt64(__int64 *);
			virtual long GetInt64Array(unsigned int *,__int64 * *);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetPoint(Point *);
			virtual long GetPointArray(unsigned int *,Point * *);
			virtual long GetRect(Rect *);
			virtual long GetRectArray(unsigned int *,Rect * *);
			virtual long GetSingle(float *);
			virtual long GetSingleArray(unsigned int *,float * *);
			virtual long GetSize(Size *);
			virtual long GetSizeArray(unsigned int *,Size * *);
			virtual long GetString(HSTRING__ * *);
			virtual long GetStringArray(unsigned int *,HSTRING__ * * *);
			virtual long GetTimeSpan(TimeSpan *);
			virtual long GetTimeSpanArray(unsigned int *,TimeSpan * *);
			virtual long GetUInt16(unsigned short *);
			virtual long GetUInt16Array(unsigned int *,unsigned short * *);
			virtual long GetUInt32(unsigned int *);
			virtual long GetUInt32Array(unsigned int *,unsigned int * *);
			virtual long GetUInt64(unsigned __int64 *);
			virtual long GetUInt64Array(unsigned int *,unsigned __int64 * *);
			virtual long GetUInt8(unsigned char *);
			virtual long GetUInt8Array(unsigned int *,unsigned char * *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			virtual long get_IsNumericScalar(unsigned char *);
			virtual long get_Type(PropertyType *);
		};

		class Value<ValueScalar<int> >
		{
			virtual IUnknown * RawCOMSelf();
			virtual long DisconnectObject(unsigned long);
			virtual long GetBoolean(unsigned char *);
			virtual long GetBooleanArray(unsigned int *,unsigned char * *);
			virtual long GetChar16(wchar_t *);
			virtual long GetChar16Array(unsigned int *,wchar_t * *);
			virtual long GetDateTime(DateTime *);
			virtual long GetDateTimeArray(unsigned int *,DateTime * *);
			virtual long GetDouble(double *);
			virtual long GetDoubleArray(unsigned int *,double * *);
			virtual long GetGuid(_GUID *);
			virtual long GetGuidArray(unsigned int *,_GUID * *);
			virtual long GetInspectableArray(unsigned int *,IInspectable * * *);
			virtual long GetInt16(short *);
			virtual long GetInt16Array(unsigned int *,short * *);
			virtual long GetInt32(int *);
			virtual long GetInt32Array(unsigned int *,int * *);
			virtual long GetInt64(__int64 *);
			virtual long GetInt64Array(unsigned int *,__int64 * *);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetPoint(Point *);
			virtual long GetPointArray(unsigned int *,Point * *);
			virtual long GetRect(Rect *);
			virtual long GetRectArray(unsigned int *,Rect * *);
			virtual long GetSingle(float *);
			virtual long GetSingleArray(unsigned int *,float * *);
			virtual long GetSize(Size *);
			virtual long GetSizeArray(unsigned int *,Size * *);
			virtual long GetString(HSTRING__ * *);
			virtual long GetStringArray(unsigned int *,HSTRING__ * * *);
			virtual long GetTimeSpan(TimeSpan *);
			virtual long GetTimeSpanArray(unsigned int *,TimeSpan * *);
			virtual long GetUInt16(unsigned short *);
			virtual long GetUInt16Array(unsigned int *,unsigned short * *);
			virtual long GetUInt32(unsigned int *);
			virtual long GetUInt32Array(unsigned int *,unsigned int * *);
			virtual long GetUInt64(unsigned __int64 *);
			virtual long GetUInt64Array(unsigned int *,unsigned __int64 * *);
			virtual long GetUInt8(unsigned char *);
			virtual long GetUInt8Array(unsigned int *,unsigned char * *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			virtual long get_IsNumericScalar(unsigned char *);
			virtual long get_Type(PropertyType *);
		};

		class Value<ValueScalar<short> >
		{
			virtual IUnknown * RawCOMSelf();
			virtual long DisconnectObject(unsigned long);
			virtual long GetBoolean(unsigned char *);
			virtual long GetBooleanArray(unsigned int *,unsigned char * *);
			virtual long GetChar16(wchar_t *);
			virtual long GetChar16Array(unsigned int *,wchar_t * *);
			virtual long GetDateTime(DateTime *);
			virtual long GetDateTimeArray(unsigned int *,DateTime * *);
			virtual long GetDouble(double *);
			virtual long GetDoubleArray(unsigned int *,double * *);
			virtual long GetGuid(_GUID *);
			virtual long GetGuidArray(unsigned int *,_GUID * *);
			virtual long GetInspectableArray(unsigned int *,IInspectable * * *);
			virtual long GetInt16(short *);
			virtual long GetInt16Array(unsigned int *,short * *);
			virtual long GetInt32(int *);
			virtual long GetInt32Array(unsigned int *,int * *);
			virtual long GetInt64(__int64 *);
			virtual long GetInt64Array(unsigned int *,__int64 * *);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetPoint(Point *);
			virtual long GetPointArray(unsigned int *,Point * *);
			virtual long GetRect(Rect *);
			virtual long GetRectArray(unsigned int *,Rect * *);
			virtual long GetSingle(float *);
			virtual long GetSingleArray(unsigned int *,float * *);
			virtual long GetSize(Size *);
			virtual long GetSizeArray(unsigned int *,Size * *);
			virtual long GetString(HSTRING__ * *);
			virtual long GetStringArray(unsigned int *,HSTRING__ * * *);
			virtual long GetTimeSpan(TimeSpan *);
			virtual long GetTimeSpanArray(unsigned int *,TimeSpan * *);
			virtual long GetUInt16(unsigned short *);
			virtual long GetUInt16Array(unsigned int *,unsigned short * *);
			virtual long GetUInt32(unsigned int *);
			virtual long GetUInt32Array(unsigned int *,unsigned int * *);
			virtual long GetUInt64(unsigned __int64 *);
			virtual long GetUInt64Array(unsigned int *,unsigned __int64 * *);
			virtual long GetUInt8(unsigned char *);
			virtual long GetUInt8Array(unsigned int *,unsigned char * *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			virtual long get_IsNumericScalar(unsigned char *);
			virtual long get_Type(PropertyType *);
		};

		class Value<ValueScalar<unsigned __int64> >
		{
			virtual IUnknown * RawCOMSelf();
			virtual long DisconnectObject(unsigned long);
			virtual long GetBoolean(unsigned char *);
			virtual long GetBooleanArray(unsigned int *,unsigned char * *);
			virtual long GetChar16(wchar_t *);
			virtual long GetChar16Array(unsigned int *,wchar_t * *);
			virtual long GetDateTime(DateTime *);
			virtual long GetDateTimeArray(unsigned int *,DateTime * *);
			virtual long GetDouble(double *);
			virtual long GetDoubleArray(unsigned int *,double * *);
			virtual long GetGuid(_GUID *);
			virtual long GetGuidArray(unsigned int *,_GUID * *);
			virtual long GetInspectableArray(unsigned int *,IInspectable * * *);
			virtual long GetInt16(short *);
			virtual long GetInt16Array(unsigned int *,short * *);
			virtual long GetInt32(int *);
			virtual long GetInt32Array(unsigned int *,int * *);
			virtual long GetInt64(__int64 *);
			virtual long GetInt64Array(unsigned int *,__int64 * *);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetPoint(Point *);
			virtual long GetPointArray(unsigned int *,Point * *);
			virtual long GetRect(Rect *);
			virtual long GetRectArray(unsigned int *,Rect * *);
			virtual long GetSingle(float *);
			virtual long GetSingleArray(unsigned int *,float * *);
			virtual long GetSize(Size *);
			virtual long GetSizeArray(unsigned int *,Size * *);
			virtual long GetString(HSTRING__ * *);
			virtual long GetStringArray(unsigned int *,HSTRING__ * * *);
			virtual long GetTimeSpan(TimeSpan *);
			virtual long GetTimeSpanArray(unsigned int *,TimeSpan * *);
			virtual long GetUInt16(unsigned short *);
			virtual long GetUInt16Array(unsigned int *,unsigned short * *);
			virtual long GetUInt32(unsigned int *);
			virtual long GetUInt32Array(unsigned int *,unsigned int * *);
			virtual long GetUInt64(unsigned __int64 *);
			virtual long GetUInt64Array(unsigned int *,unsigned __int64 * *);
			virtual long GetUInt8(unsigned char *);
			virtual long GetUInt8Array(unsigned int *,unsigned char * *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			virtual long get_IsNumericScalar(unsigned char *);
			virtual long get_Type(PropertyType *);
		};

		class Value<ValueScalar<unsigned char> >
		{
			virtual IUnknown * RawCOMSelf();
			virtual long DisconnectObject(unsigned long);
			virtual long GetBoolean(unsigned char *);
			virtual long GetBooleanArray(unsigned int *,unsigned char * *);
			virtual long GetChar16(wchar_t *);
			virtual long GetChar16Array(unsigned int *,wchar_t * *);
			virtual long GetDateTime(DateTime *);
			virtual long GetDateTimeArray(unsigned int *,DateTime * *);
			virtual long GetDouble(double *);
			virtual long GetDoubleArray(unsigned int *,double * *);
			virtual long GetGuid(_GUID *);
			virtual long GetGuidArray(unsigned int *,_GUID * *);
			virtual long GetInspectableArray(unsigned int *,IInspectable * * *);
			virtual long GetInt16(short *);
			virtual long GetInt16Array(unsigned int *,short * *);
			virtual long GetInt32(int *);
			virtual long GetInt32Array(unsigned int *,int * *);
			virtual long GetInt64(__int64 *);
			virtual long GetInt64Array(unsigned int *,__int64 * *);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetPoint(Point *);
			virtual long GetPointArray(unsigned int *,Point * *);
			virtual long GetRect(Rect *);
			virtual long GetRectArray(unsigned int *,Rect * *);
			virtual long GetSingle(float *);
			virtual long GetSingleArray(unsigned int *,float * *);
			virtual long GetSize(Size *);
			virtual long GetSizeArray(unsigned int *,Size * *);
			virtual long GetString(HSTRING__ * *);
			virtual long GetStringArray(unsigned int *,HSTRING__ * * *);
			virtual long GetTimeSpan(TimeSpan *);
			virtual long GetTimeSpanArray(unsigned int *,TimeSpan * *);
			virtual long GetUInt16(unsigned short *);
			virtual long GetUInt16Array(unsigned int *,unsigned short * *);
			virtual long GetUInt32(unsigned int *);
			virtual long GetUInt32Array(unsigned int *,unsigned int * *);
			virtual long GetUInt64(unsigned __int64 *);
			virtual long GetUInt64Array(unsigned int *,unsigned __int64 * *);
			virtual long GetUInt8(unsigned char *);
			virtual long GetUInt8Array(unsigned int *,unsigned char * *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			virtual long get_IsNumericScalar(unsigned char *);
			virtual long get_Type(PropertyType *);
		};

		class Value<ValueScalar<unsigned int> >
		{
			virtual IUnknown * RawCOMSelf();
			virtual long DisconnectObject(unsigned long);
			virtual long GetBoolean(unsigned char *);
			virtual long GetBooleanArray(unsigned int *,unsigned char * *);
			virtual long GetChar16(wchar_t *);
			virtual long GetChar16Array(unsigned int *,wchar_t * *);
			virtual long GetDateTime(DateTime *);
			virtual long GetDateTimeArray(unsigned int *,DateTime * *);
			virtual long GetDouble(double *);
			virtual long GetDoubleArray(unsigned int *,double * *);
			virtual long GetGuid(_GUID *);
			virtual long GetGuidArray(unsigned int *,_GUID * *);
			virtual long GetInspectableArray(unsigned int *,IInspectable * * *);
			virtual long GetInt16(short *);
			virtual long GetInt16Array(unsigned int *,short * *);
			virtual long GetInt32(int *);
			virtual long GetInt32Array(unsigned int *,int * *);
			virtual long GetInt64(__int64 *);
			virtual long GetInt64Array(unsigned int *,__int64 * *);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetPoint(Point *);
			virtual long GetPointArray(unsigned int *,Point * *);
			virtual long GetRect(Rect *);
			virtual long GetRectArray(unsigned int *,Rect * *);
			virtual long GetSingle(float *);
			virtual long GetSingleArray(unsigned int *,float * *);
			virtual long GetSize(Size *);
			virtual long GetSizeArray(unsigned int *,Size * *);
			virtual long GetString(HSTRING__ * *);
			virtual long GetStringArray(unsigned int *,HSTRING__ * * *);
			virtual long GetTimeSpan(TimeSpan *);
			virtual long GetTimeSpanArray(unsigned int *,TimeSpan * *);
			virtual long GetUInt16(unsigned short *);
			virtual long GetUInt16Array(unsigned int *,unsigned short * *);
			virtual long GetUInt32(unsigned int *);
			virtual long GetUInt32Array(unsigned int *,unsigned int * *);
			virtual long GetUInt64(unsigned __int64 *);
			virtual long GetUInt64Array(unsigned int *,unsigned __int64 * *);
			virtual long GetUInt8(unsigned char *);
			virtual long GetUInt8Array(unsigned int *,unsigned char * *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			virtual long get_IsNumericScalar(unsigned char *);
			virtual long get_Type(PropertyType *);
		};

		class Value<ValueScalar<unsigned short> >
		{
			virtual IUnknown * RawCOMSelf();
			virtual long DisconnectObject(unsigned long);
			virtual long GetBoolean(unsigned char *);
			virtual long GetBooleanArray(unsigned int *,unsigned char * *);
			virtual long GetChar16(wchar_t *);
			virtual long GetChar16Array(unsigned int *,wchar_t * *);
			virtual long GetDateTime(DateTime *);
			virtual long GetDateTimeArray(unsigned int *,DateTime * *);
			virtual long GetDouble(double *);
			virtual long GetDoubleArray(unsigned int *,double * *);
			virtual long GetGuid(_GUID *);
			virtual long GetGuidArray(unsigned int *,_GUID * *);
			virtual long GetInspectableArray(unsigned int *,IInspectable * * *);
			virtual long GetInt16(short *);
			virtual long GetInt16Array(unsigned int *,short * *);
			virtual long GetInt32(int *);
			virtual long GetInt32Array(unsigned int *,int * *);
			virtual long GetInt64(__int64 *);
			virtual long GetInt64Array(unsigned int *,__int64 * *);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetPoint(Point *);
			virtual long GetPointArray(unsigned int *,Point * *);
			virtual long GetRect(Rect *);
			virtual long GetRectArray(unsigned int *,Rect * *);
			virtual long GetSingle(float *);
			virtual long GetSingleArray(unsigned int *,float * *);
			virtual long GetSize(Size *);
			virtual long GetSizeArray(unsigned int *,Size * *);
			virtual long GetString(HSTRING__ * *);
			virtual long GetStringArray(unsigned int *,HSTRING__ * * *);
			virtual long GetTimeSpan(TimeSpan *);
			virtual long GetTimeSpanArray(unsigned int *,TimeSpan * *);
			virtual long GetUInt16(unsigned short *);
			virtual long GetUInt16Array(unsigned int *,unsigned short * *);
			virtual long GetUInt32(unsigned int *);
			virtual long GetUInt32Array(unsigned int *,unsigned int * *);
			virtual long GetUInt64(unsigned __int64 *);
			virtual long GetUInt64Array(unsigned int *,unsigned __int64 * *);
			virtual long GetUInt8(unsigned char *);
			virtual long GetUInt8Array(unsigned int *,unsigned char * *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			virtual long get_IsNumericScalar(unsigned char *);
			virtual long get_Type(PropertyType *);
		};

		class Value<ValueScalar<wchar_t> >
		{
			virtual IUnknown * RawCOMSelf();
			virtual long DisconnectObject(unsigned long);
			virtual long GetBoolean(unsigned char *);
			virtual long GetBooleanArray(unsigned int *,unsigned char * *);
			virtual long GetChar16(wchar_t *);
			virtual long GetChar16Array(unsigned int *,wchar_t * *);
			virtual long GetDateTime(DateTime *);
			virtual long GetDateTimeArray(unsigned int *,DateTime * *);
			virtual long GetDouble(double *);
			virtual long GetDoubleArray(unsigned int *,double * *);
			virtual long GetGuid(_GUID *);
			virtual long GetGuidArray(unsigned int *,_GUID * *);
			virtual long GetInspectableArray(unsigned int *,IInspectable * * *);
			virtual long GetInt16(short *);
			virtual long GetInt16Array(unsigned int *,short * *);
			virtual long GetInt32(int *);
			virtual long GetInt32Array(unsigned int *,int * *);
			virtual long GetInt64(__int64 *);
			virtual long GetInt64Array(unsigned int *,__int64 * *);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetPoint(Point *);
			virtual long GetPointArray(unsigned int *,Point * *);
			virtual long GetRect(Rect *);
			virtual long GetRectArray(unsigned int *,Rect * *);
			virtual long GetSingle(float *);
			virtual long GetSingleArray(unsigned int *,float * *);
			virtual long GetSize(Size *);
			virtual long GetSizeArray(unsigned int *,Size * *);
			virtual long GetString(HSTRING__ * *);
			virtual long GetStringArray(unsigned int *,HSTRING__ * * *);
			virtual long GetTimeSpan(TimeSpan *);
			virtual long GetTimeSpanArray(unsigned int *,TimeSpan * *);
			virtual long GetUInt16(unsigned short *);
			virtual long GetUInt16Array(unsigned int *,unsigned short * *);
			virtual long GetUInt32(unsigned int *);
			virtual long GetUInt32Array(unsigned int *,unsigned int * *);
			virtual long GetUInt64(unsigned __int64 *);
			virtual long GetUInt64Array(unsigned int *,unsigned __int64 * *);
			virtual long GetUInt8(unsigned char *);
			virtual long GetUInt8Array(unsigned int *,unsigned char * *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
			virtual long get_IsNumericScalar(unsigned char *);
			virtual long get_Type(PropertyType *);
		};

		class ValueArray<DateTime>
		{
		protected:
			long _GetArray(Detail::TypeTag<DateTime *>,unsigned int *,DateTime * *);
			virtual PropertyType RawType();
			virtual long RawWriteSelf(IStream *,unsigned long *);
			virtual long get_Value(unsigned int *,DateTime * *);
			virtual unsigned int RawLength();
			virtual void * RawPtr();
		public:
			ValueArray<DateTime>();
			long SetArray(unsigned int,DateTime const *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~ValueArray<DateTime>();
		};

		class ValueArray<HSTRING__ *>
		{
		protected:
			long _GetArray(Detail::TypeTag<HSTRING__ * *>,unsigned int *,HSTRING__ * * *);
			virtual PropertyType RawType();
			virtual long RawWriteSelf(IStream *,unsigned long *);
			virtual long get_Value(unsigned int *,HSTRING__ * * *);
			virtual unsigned int RawLength();
			virtual void * RawPtr();
		public:
			ValueArray<HSTRING__ *>();
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~ValueArray<HSTRING__ *>();
		};

		class ValueArray<IInspectable *>
		{
		protected:
			long _GetArray(Detail::TypeTag<IInspectable * *>,unsigned int *,IInspectable * * *);
			virtual PropertyType RawType();
			virtual long RawWriteSelf(IStream *,unsigned long *);
			virtual long get_Value(unsigned int *,IInspectable * * *);
			virtual unsigned int RawLength();
			virtual void * RawPtr();
		public:
			ValueArray<IInspectable *>();
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~ValueArray<IInspectable *>();
		};

		class ValueArray<Point>
		{
		protected:
			long _GetArray(Detail::TypeTag<Point *>,unsigned int *,Point * *);
			virtual PropertyType RawType();
			virtual long RawWriteSelf(IStream *,unsigned long *);
			virtual long get_Value(unsigned int *,Point * *);
			virtual unsigned int RawLength();
			virtual void * RawPtr();
		public:
			ValueArray<Point>();
			long SetArray(unsigned int,Point const *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~ValueArray<Point>();
		};

		class ValueArray<Rect>
		{
		protected:
			long _GetArray(Detail::TypeTag<Rect *>,unsigned int *,Rect * *);
			virtual PropertyType RawType();
			virtual long RawWriteSelf(IStream *,unsigned long *);
			virtual long get_Value(unsigned int *,Rect * *);
			virtual unsigned int RawLength();
			virtual void * RawPtr();
		public:
			ValueArray<Rect>();
			long SetArray(unsigned int,Rect const *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~ValueArray<Rect>();
		};

		class ValueArray<Size>
		{
		protected:
			long _GetArray(Detail::TypeTag<Size *>,unsigned int *,Size * *);
			virtual PropertyType RawType();
			virtual long RawWriteSelf(IStream *,unsigned long *);
			virtual long get_Value(unsigned int *,Size * *);
			virtual unsigned int RawLength();
			virtual void * RawPtr();
		public:
			ValueArray<Size>();
			long SetArray(unsigned int,Size const *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~ValueArray<Size>();
		};

		class ValueArray<TimeSpan>
		{
		protected:
			long _GetArray(Detail::TypeTag<TimeSpan *>,unsigned int *,TimeSpan * *);
			virtual PropertyType RawType();
			virtual long RawWriteSelf(IStream *,unsigned long *);
			virtual long get_Value(unsigned int *,TimeSpan * *);
			virtual unsigned int RawLength();
			virtual void * RawPtr();
		public:
			ValueArray<TimeSpan>();
			long SetArray(unsigned int,TimeSpan const *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~ValueArray<TimeSpan>();
		};

		class ValueArray<_GUID>
		{
		protected:
			long _GetArray(Detail::TypeTag<_GUID *>,unsigned int *,_GUID * *);
			virtual PropertyType RawType();
			virtual long RawWriteSelf(IStream *,unsigned long *);
			virtual long get_Value(unsigned int *,_GUID * *);
			virtual unsigned int RawLength();
			virtual void * RawPtr();
		public:
			ValueArray<_GUID>();
			long SetArray(unsigned int,_GUID const *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~ValueArray<_GUID>();
		};

		class ValueArray<__int64>
		{
		protected:
			long _GetArray(Detail::TypeTag<__int64 *>,unsigned int *,__int64 * *);
			virtual PropertyType RawType();
			virtual long RawWriteSelf(IStream *,unsigned long *);
			virtual long get_Value(unsigned int *,__int64 * *);
			virtual unsigned int RawLength();
			virtual void * RawPtr();
		public:
			ValueArray<__int64>();
			long SetArray(unsigned int,__int64 const *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~ValueArray<__int64>();
		};

		class ValueArray<bool>
		{
		protected:
			long _GetArray(Detail::TypeTag<bool *>,unsigned int *,unsigned char * *);
			virtual PropertyType RawType();
			virtual long RawWriteSelf(IStream *,unsigned long *);
			virtual long get_Value(unsigned int *,unsigned char * *);
			virtual unsigned int RawLength();
			virtual void * RawPtr();
		public:
			ValueArray<bool>();
			long SetArray(unsigned int,unsigned char const *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~ValueArray<bool>();
		};

		class ValueArray<double>
		{
		protected:
			long _GetArray(Detail::TypeTag<double *>,unsigned int *,double * *);
			virtual PropertyType RawType();
			virtual long RawWriteSelf(IStream *,unsigned long *);
			virtual long get_Value(unsigned int *,double * *);
			virtual unsigned int RawLength();
			virtual void * RawPtr();
		public:
			ValueArray<double>();
			long SetArray(unsigned int,double const *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~ValueArray<double>();
		};

		class ValueArray<float>
		{
		protected:
			long _GetArray(Detail::TypeTag<float *>,unsigned int *,float * *);
			virtual PropertyType RawType();
			virtual long RawWriteSelf(IStream *,unsigned long *);
			virtual long get_Value(unsigned int *,float * *);
			virtual unsigned int RawLength();
			virtual void * RawPtr();
		public:
			ValueArray<float>();
			long SetArray(unsigned int,float const *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~ValueArray<float>();
		};

		class ValueArray<int>
		{
		protected:
			long _GetArray(Detail::TypeTag<int *>,unsigned int *,int * *);
			virtual PropertyType RawType();
			virtual long RawWriteSelf(IStream *,unsigned long *);
			virtual long get_Value(unsigned int *,int * *);
			virtual unsigned int RawLength();
			virtual void * RawPtr();
		public:
			ValueArray<int>();
			long SetArray(unsigned int,int const *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~ValueArray<int>();
		};

		class ValueArray<short>
		{
		protected:
			long _GetArray(Detail::TypeTag<short *>,unsigned int *,short * *);
			virtual PropertyType RawType();
			virtual long RawWriteSelf(IStream *,unsigned long *);
			virtual long get_Value(unsigned int *,short * *);
			virtual unsigned int RawLength();
			virtual void * RawPtr();
		public:
			ValueArray<short>();
			long SetArray(unsigned int,short const *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~ValueArray<short>();
		};

		class ValueArray<unsigned __int64>
		{
		protected:
			long _GetArray(Detail::TypeTag<unsigned __int64 *>,unsigned int *,unsigned __int64 * *);
			virtual PropertyType RawType();
			virtual long RawWriteSelf(IStream *,unsigned long *);
			virtual long get_Value(unsigned int *,unsigned __int64 * *);
			virtual unsigned int RawLength();
			virtual void * RawPtr();
		public:
			ValueArray<unsigned __int64>();
			long SetArray(unsigned int,unsigned __int64 const *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~ValueArray<unsigned __int64>();
		};

		class ValueArray<unsigned char>
		{
		protected:
			long _GetArray(Detail::TypeTag<unsigned char *>,unsigned int *,unsigned char * *);
			long _GetArray<__int64 *,__int64>(Detail::TypeTag<__int64 *>,unsigned int *,__int64 * *);
			long _GetArray<int *,int>(Detail::TypeTag<int *>,unsigned int *,int * *);
			long _GetArray<short *,short>(Detail::TypeTag<short *>,unsigned int *,short * *);
			long _GetArray<unsigned __int64 *,unsigned __int64>(Detail::TypeTag<unsigned __int64 *>,unsigned int *,unsigned __int64 * *);
			long _GetArray<unsigned int *,unsigned int>(Detail::TypeTag<unsigned int *>,unsigned int *,unsigned int * *);
			long _GetArray<unsigned short *,unsigned short>(Detail::TypeTag<unsigned short *>,unsigned int *,unsigned short * *);
			virtual PropertyType RawType();
			virtual long RawWriteSelf(IStream *,unsigned long *);
			virtual long get_Value(unsigned int *,unsigned char * *);
			virtual unsigned int RawLength();
			virtual void * RawPtr();
		public:
			ValueArray<unsigned char>();
			long SetArray(unsigned int,unsigned char const *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~ValueArray<unsigned char>();
		};

		class ValueArray<unsigned int>
		{
		protected:
			long _GetArray(Detail::TypeTag<unsigned int *>,unsigned int *,unsigned int * *);
			long _GetArray<__int64 *,__int64>(Detail::TypeTag<__int64 *>,unsigned int *,__int64 * *);
			long _GetArray<unsigned __int64 *,unsigned __int64>(Detail::TypeTag<unsigned __int64 *>,unsigned int *,unsigned __int64 * *);
			virtual PropertyType RawType();
			virtual long RawWriteSelf(IStream *,unsigned long *);
			virtual long get_Value(unsigned int *,unsigned int * *);
			virtual unsigned int RawLength();
			virtual void * RawPtr();
		public:
			ValueArray<unsigned int>();
			long SetArray(unsigned int,unsigned int const *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~ValueArray<unsigned int>();
		};

		class ValueArray<unsigned short>
		{
		protected:
			long _GetArray(Detail::TypeTag<unsigned short *>,unsigned int *,unsigned short * *);
			long _GetArray<__int64 *,__int64>(Detail::TypeTag<__int64 *>,unsigned int *,__int64 * *);
			long _GetArray<int *,int>(Detail::TypeTag<int *>,unsigned int *,int * *);
			long _GetArray<unsigned __int64 *,unsigned __int64>(Detail::TypeTag<unsigned __int64 *>,unsigned int *,unsigned __int64 * *);
			long _GetArray<unsigned int *,unsigned int>(Detail::TypeTag<unsigned int *>,unsigned int *,unsigned int * *);
			virtual PropertyType RawType();
			virtual long RawWriteSelf(IStream *,unsigned long *);
			virtual long get_Value(unsigned int *,unsigned short * *);
			virtual unsigned int RawLength();
			virtual void * RawPtr();
		public:
			ValueArray<unsigned short>();
			long SetArray(unsigned int,unsigned short const *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~ValueArray<unsigned short>();
		};

		class ValueArray<wchar_t>
		{
		protected:
			long _GetArray(Detail::TypeTag<wchar_t *>,unsigned int *,wchar_t * *);
			virtual PropertyType RawType();
			virtual long RawWriteSelf(IStream *,unsigned long *);
			virtual long get_Value(unsigned int *,wchar_t * *);
			virtual unsigned int RawLength();
			virtual void * RawPtr();
		public:
			ValueArray<wchar_t>();
			long SetArray(unsigned int,wchar_t const *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~ValueArray<wchar_t>();
		};

		class ValueFactory
		{
			long InspectableArrayReleaseMarshalDataHelper(IStream *);
			long InspectableArrayUnmarshalInterfaceHelper(IStream *,IInspectable * *);
			virtual long ActivateInstance(IInspectable * *);
			virtual long CreateBoolean(unsigned char,IInspectable * *);
			virtual long CreateBooleanArray(unsigned int,unsigned char const *,IInspectable * *);
			virtual long CreateChar16(wchar_t,IInspectable * *);
			virtual long CreateChar16Array(unsigned int,wchar_t const *,IInspectable * *);
			virtual long CreateDateTime(DateTime,IInspectable * *);
			virtual long CreateDateTimeArray(unsigned int,DateTime const *,IInspectable * *);
			virtual long CreateDouble(double,IInspectable * *);
			virtual long CreateDoubleArray(unsigned int,double const *,IInspectable * *);
			virtual long CreateEmpty(IInspectable * *);
			virtual long CreateGuid(_GUID,IInspectable * *);
			virtual long CreateGuidArray(unsigned int,_GUID const *,IInspectable * *);
			virtual long CreateInspectable(IInspectable *,IInspectable * *);
			virtual long CreateInspectableArray(unsigned int,IInspectable * const *,IInspectable * *);
			virtual long CreateInt16(short,IInspectable * *);
			virtual long CreateInt16Array(unsigned int,short const *,IInspectable * *);
			virtual long CreateInt32(int,IInspectable * *);
			virtual long CreateInt32Array(unsigned int,int const *,IInspectable * *);
			virtual long CreateInt64(__int64,IInspectable * *);
			virtual long CreateInt64Array(unsigned int,__int64 const *,IInspectable * *);
			virtual long CreatePoint(Point,IInspectable * *);
			virtual long CreatePointArray(unsigned int,Point const *,IInspectable * *);
			virtual long CreateRect(Rect,IInspectable * *);
			virtual long CreateRectArray(unsigned int,Rect const *,IInspectable * *);
			virtual long CreateSingle(float,IInspectable * *);
			virtual long CreateSingleArray(unsigned int,float const *,IInspectable * *);
			virtual long CreateSize(Size,IInspectable * *);
			virtual long CreateSizeArray(unsigned int,Size const *,IInspectable * *);
			virtual long CreateString(HSTRING__ *,IInspectable * *);
			virtual long CreateStringArray(unsigned int,HSTRING__ * const *,IInspectable * *);
			virtual long CreateTimeSpan(TimeSpan,IInspectable * *);
			virtual long CreateTimeSpanArray(unsigned int,TimeSpan const *,IInspectable * *);
			virtual long CreateUInt16(unsigned short,IInspectable * *);
			virtual long CreateUInt16Array(unsigned int,unsigned short const *,IInspectable * *);
			virtual long CreateUInt32(unsigned int,IInspectable * *);
			virtual long CreateUInt32Array(unsigned int,unsigned int const *,IInspectable * *);
			virtual long CreateUInt64(unsigned __int64,IInspectable * *);
			virtual long CreateUInt64Array(unsigned int,unsigned __int64 const *,IInspectable * *);
			virtual long CreateUInt8(unsigned char,IInspectable * *);
			virtual long CreateUInt8Array(unsigned int,unsigned char const *,IInspectable * *);
			virtual long DisconnectObject(unsigned long);
			virtual long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
			virtual long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
			virtual long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			virtual long ReleaseMarshalData(IStream *);
			virtual long UnmarshalInterface(IStream *,_GUID const &,void * *);
		public:
			ValueFactory();
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
		};

		class ValueScalar<DateTime>
		{
		protected:
			long _GetScalar(Detail::TypeTag<DateTime>,DateTime *);
			virtual PropertyType RawType();
			virtual long RawWriteSelf(IStream *,unsigned long *);
			virtual long get_Value(DateTime *);
			virtual unsigned int RawLength();
			virtual void * RawPtr();
		public:
			ValueScalar<DateTime>();
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~ValueScalar<DateTime>();
		};

		class ValueScalar<HSTRING__ *>
		{
		protected:
			virtual PropertyType RawType();
			virtual long RawWriteSelf(IStream *,unsigned long *);
			virtual long get_Value(HSTRING__ * *);
			virtual unsigned int RawLength();
			virtual void * RawPtr();
		public:
			ValueScalar<HSTRING__ *>();
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~ValueScalar<HSTRING__ *>();
		};

		class ValueScalar<Point>
		{
		protected:
			long _GetScalar(Detail::TypeTag<Point>,Point *);
			virtual PropertyType RawType();
			virtual long RawWriteSelf(IStream *,unsigned long *);
			virtual long get_Value(Point *);
			virtual unsigned int RawLength();
			virtual void * RawPtr();
		public:
			ValueScalar<Point>();
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~ValueScalar<Point>();
		};

		class ValueScalar<Rect>
		{
		protected:
			long _GetScalar(Detail::TypeTag<Rect>,Rect *);
			virtual PropertyType RawType();
			virtual long RawWriteSelf(IStream *,unsigned long *);
			virtual long get_Value(Rect *);
			virtual unsigned int RawLength();
			virtual void * RawPtr();
		public:
			ValueScalar<Rect>();
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~ValueScalar<Rect>();
		};

		class ValueScalar<Size>
		{
		protected:
			long _GetScalar(Detail::TypeTag<Size>,Size *);
			virtual PropertyType RawType();
			virtual long RawWriteSelf(IStream *,unsigned long *);
			virtual long get_Value(Size *);
			virtual unsigned int RawLength();
			virtual void * RawPtr();
		public:
			ValueScalar<Size>();
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~ValueScalar<Size>();
		};

		class ValueScalar<TimeSpan>
		{
		protected:
			long _GetScalar(Detail::TypeTag<TimeSpan>,TimeSpan *);
			virtual PropertyType RawType();
			virtual long RawWriteSelf(IStream *,unsigned long *);
			virtual long get_Value(TimeSpan *);
			virtual unsigned int RawLength();
			virtual void * RawPtr();
		public:
			ValueScalar<TimeSpan>();
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~ValueScalar<TimeSpan>();
		};

		class ValueScalar<_GUID>
		{
		protected:
			long _GetScalar(Detail::TypeTag<_GUID>,_GUID *);
			virtual PropertyType RawType();
			virtual long RawWriteSelf(IStream *,unsigned long *);
			virtual long get_Value(_GUID *);
			virtual unsigned int RawLength();
			virtual void * RawPtr();
		public:
			ValueScalar<_GUID>();
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~ValueScalar<_GUID>();
		};

		class ValueScalar<__int64>
		{
		protected:
			long _GetScalar(Detail::TypeTag<__int64>,__int64 *);
			virtual PropertyType RawType();
			virtual long RawWriteSelf(IStream *,unsigned long *);
			virtual long get_Value(__int64 *);
			virtual unsigned int RawLength();
			virtual void * RawPtr();
		public:
			ValueScalar<__int64>();
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~ValueScalar<__int64>();
		};

		class ValueScalar<bool>
		{
		protected:
			virtual PropertyType RawType();
			virtual long RawWriteSelf(IStream *,unsigned long *);
			virtual long get_Value(unsigned char *);
			virtual unsigned int RawLength();
			virtual void * RawPtr();
		public:
			ValueScalar<bool>();
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~ValueScalar<bool>();
		};

		class ValueScalar<double>
		{
		protected:
			virtual PropertyType RawType();
			virtual long RawWriteSelf(IStream *,unsigned long *);
			virtual long get_Value(double *);
			virtual unsigned int RawLength();
			virtual void * RawPtr();
		public:
			ValueScalar<double>();
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~ValueScalar<double>();
		};

		class ValueScalar<float>
		{
		protected:
			long _GetScalar(Detail::TypeTag<float>,float *);
			virtual PropertyType RawType();
			virtual long RawWriteSelf(IStream *,unsigned long *);
			virtual long get_Value(float *);
			virtual unsigned int RawLength();
			virtual void * RawPtr();
		public:
			ValueScalar<float>();
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~ValueScalar<float>();
		};

		class ValueScalar<int>
		{
		protected:
			virtual PropertyType RawType();
			virtual long RawWriteSelf(IStream *,unsigned long *);
			virtual long get_Value(int *);
			virtual unsigned int RawLength();
			virtual void * RawPtr();
		public:
			ValueScalar<int>();
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~ValueScalar<int>();
		};

		class ValueScalar<short>
		{
		protected:
			long _GetScalar(Detail::TypeTag<short>,short *);
			virtual PropertyType RawType();
			virtual long RawWriteSelf(IStream *,unsigned long *);
			virtual long get_Value(short *);
			virtual unsigned int RawLength();
			virtual void * RawPtr();
		public:
			ValueScalar<short>();
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~ValueScalar<short>();
		};

		class ValueScalar<unsigned __int64>
		{
		protected:
			virtual PropertyType RawType();
			virtual long RawWriteSelf(IStream *,unsigned long *);
			virtual long get_Value(unsigned __int64 *);
			virtual unsigned int RawLength();
			virtual void * RawPtr();
		public:
			ValueScalar<unsigned __int64>();
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~ValueScalar<unsigned __int64>();
		};

		class ValueScalar<unsigned char>
		{
		protected:
			long _GetScalar(Detail::TypeTag<unsigned char>,unsigned char *);
			virtual PropertyType RawType();
			virtual long RawWriteSelf(IStream *,unsigned long *);
			virtual long get_Value(unsigned char *);
			virtual unsigned int RawLength();
			virtual void * RawPtr();
		public:
			ValueScalar<unsigned char>();
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~ValueScalar<unsigned char>();
		};

		class ValueScalar<unsigned int>
		{
		protected:
			virtual PropertyType RawType();
			virtual long RawWriteSelf(IStream *,unsigned long *);
			virtual long get_Value(unsigned int *);
			virtual unsigned int RawLength();
			virtual void * RawPtr();
		public:
			ValueScalar<unsigned int>();
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~ValueScalar<unsigned int>();
		};

		class ValueScalar<unsigned short>
		{
		protected:
			long _GetScalar(Detail::TypeTag<unsigned short>,unsigned short *);
			virtual PropertyType RawType();
			virtual long RawWriteSelf(IStream *,unsigned long *);
			virtual long get_Value(unsigned short *);
			virtual unsigned int RawLength();
			virtual void * RawPtr();
		public:
			ValueScalar<unsigned short>();
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~ValueScalar<unsigned short>();
		};

		class ValueScalar<wchar_t>
		{
		protected:
			long _GetScalar(Detail::TypeTag<wchar_t>,wchar_t *);
			virtual PropertyType RawType();
			virtual long RawWriteSelf(IStream *,unsigned long *);
			virtual long get_Value(wchar_t *);
			virtual unsigned int RawLength();
			virtual void * RawPtr();
		public:
			ValueScalar<wchar_t>();
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~ValueScalar<wchar_t>();
		};

	};

	namespace Internal
	{
		struct BufferContents
		{
			BufferContents & operator=(BufferContents const &);
			long CopyFromContentsToInternalOffset(unsigned int,BufferContents const &);
			long Create(unsigned int);
			long GetInternalBuffer(unsigned int,unsigned int,unsigned int,Storage::Streams::IBuffer * *);
			long Initialize(Storage::Streams::IBuffer *);
			long ReserveFreeSpace(unsigned int);
			long Restore(BufferContents *);
			void ShiftData();
			~BufferContents();
		};

		struct CancelClosePassthrough<Promise<Storage::Streams::IBuffer *,Microsoft::WRL::Details::Nil> >
		{
			void operator()(Promise<Storage::Streams::IBuffer *,Microsoft::WRL::Details::Nil>,bool);
		};

		struct CancelClosePassthrough<Promise<unsigned char,Microsoft::WRL::Details::Nil> >
		{
			void operator()(Promise<unsigned char,Microsoft::WRL::Details::Nil>,bool);
		};

		struct CancelClosePassthrough<Promise<unsigned int,Microsoft::WRL::Details::Nil> >
		{
			void operator()(Promise<unsigned int,Microsoft::WRL::Details::Nil>,bool);
		};

		struct ComTraits<Storage::Streams::IBuffer *>
		{
			static long Construct(Storage::Streams::IBuffer * *,Storage::Streams::IBuffer *);
		};

		namespace Detail
		{
			struct ContinuationCallbackWrapper<Foundation::IAsyncOperationWithProgress<Storage::Streams::IBuffer *,unsigned int>,Storage::Streams::DataReader::StreamReadContinuation>
			{
				~ContinuationCallbackWrapper<Foundation::IAsyncOperationWithProgress<Storage::Streams::IBuffer *,unsigned int>,Storage::Streams::DataReader::StreamReadContinuation>();
			};

			Storage::Streams::ByteOrder const g_c_platformEndian;
		};

		namespace Details
		{
			struct Git
			{
				Git();
				long Acquire();
			};

			struct GitInvokeHelper<Foundation::Collections::MapChangedEventHandler<HSTRING__ *,HSTRING__ *>,GitPtr,2>
			{
				GitInvokeHelper<Foundation::Collections::MapChangedEventHandler<HSTRING__ *,HSTRING__ *>,GitPtr,2>();
				virtual long Invoke(Foundation::Collections::IObservableMap<HSTRING__ *,HSTRING__ *> *,Foundation::Collections::IMapChangedEventArgs<HSTRING__ *> *);
			};

			struct GitInvokeHelper<Foundation::Collections::MapChangedEventHandler<HSTRING__ *,IInspectable *>,GitPtr,2>
			{
				GitInvokeHelper<Foundation::Collections::MapChangedEventHandler<HSTRING__ *,IInspectable *>,GitPtr,2>();
				virtual long Invoke(Foundation::Collections::IObservableMap<HSTRING__ *,IInspectable *> *,Foundation::Collections::IMapChangedEventArgs<HSTRING__ *> *);
			};

			struct GitInvokeHelper<Foundation::ITypedEventHandler<Foundation::IMemoryBufferReference *,IInspectable *>,GitPtrSupportsAgile<Foundation::ITypedEventHandler<Foundation::IMemoryBufferReference *,IInspectable *> >,2>
			{
				GitInvokeHelper<Foundation::ITypedEventHandler<Foundation::IMemoryBufferReference *,IInspectable *>,GitPtrSupportsAgile<Foundation::ITypedEventHandler<Foundation::IMemoryBufferReference *,IInspectable *> >,2>();
				virtual long Invoke(Foundation::IMemoryBufferReference *,IInspectable *);
			};

			Details::Git _git;
			long CreateGitHelper<Foundation::Collections::MapChangedEventHandler<HSTRING__ *,HSTRING__ *>,GitPtr>(Foundation::Collections::MapChangedEventHandler<HSTRING__ *,HSTRING__ *> *,Foundation::Collections::MapChangedEventHandler<HSTRING__ *,HSTRING__ *> * *);
			long CreateGitHelper<Foundation::Collections::MapChangedEventHandler<HSTRING__ *,IInspectable *>,GitPtr>(Foundation::Collections::MapChangedEventHandler<HSTRING__ *,IInspectable *> *,Foundation::Collections::MapChangedEventHandler<HSTRING__ *,IInspectable *> * *);
			long CreateGitHelper<Foundation::ITypedEventHandler<Foundation::IMemoryBufferReference *,IInspectable *>,GitPtrSupportsAgile<Foundation::ITypedEventHandler<Foundation::IMemoryBufferReference *,IInspectable *> > >(Foundation::ITypedEventHandler<Foundation::IMemoryBufferReference *,IInspectable *> *,Foundation::ITypedEventHandler<Foundation::IMemoryBufferReference *,IInspectable *> * *);
		};

		struct GitEventSource<Foundation::Collections::MapChangedEventHandler<HSTRING__ *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2> >
		{
			long Add(Foundation::Collections::MapChangedEventHandler<HSTRING__ *,IInspectable *> *,EventRegistrationToken *);
		};

		struct GitEventSourceSupportsAgile<Foundation::ITypedEventHandler<Foundation::IMemoryBufferReference *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2> >
		{
			long Add(Foundation::ITypedEventHandler<Foundation::IMemoryBufferReference *,IInspectable *> *,EventRegistrationToken *);
		};

		struct GitPtr
		{
			GitPtr();
			virtual ~GitPtr();
		};

		class GitPtrImpl<GitPtr>
		{
		protected:
			long Localize(_GUID const &,void * *);
		public:
			long CopyLocal<IRuntimeBroker>(Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IRuntimeBroker> >);
			long CopyLocal<Storage::Streams::IInputStream>(Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Storage::Streams::IInputStream> >);
			long CopyLocal<Storage::Streams::IOutputStream>(Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Storage::Streams::IOutputStream> >);
			long Initialize<IInspectable>(IInspectable *);
			long Revoke();
			virtual bool IsInitialized();
		};

		struct GitPtrSupportsAgile<Foundation::IAsyncOperationCompletedHandler<bool> >
		{
			long CopyLocal<Foundation::IAsyncOperationCompletedHandler<bool> >(Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Foundation::IAsyncOperationCompletedHandler<bool> > >);
			long Initialize<Foundation::IAsyncOperationCompletedHandler<bool> >(Foundation::IAsyncOperationCompletedHandler<bool> *);
		};

		struct GitPtrSupportsAgile<Foundation::IAsyncOperationProgressHandler<Storage::Streams::IBuffer *,unsigned int> >
		{
			long CopyLocal<Foundation::IAsyncOperationProgressHandler<Storage::Streams::IBuffer *,unsigned int> >(Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Foundation::IAsyncOperationProgressHandler<Storage::Streams::IBuffer *,unsigned int> > >);
			long Initialize<Foundation::IAsyncOperationProgressHandler<Storage::Streams::IBuffer *,unsigned int> >(Foundation::IAsyncOperationProgressHandler<Storage::Streams::IBuffer *,unsigned int> *);
		};

		struct GitPtrSupportsAgile<Foundation::IAsyncOperationWithProgressCompletedHandler<Storage::Streams::IBuffer *,unsigned int> >
		{
			long CopyLocal<Foundation::IAsyncOperationWithProgressCompletedHandler<Storage::Streams::IBuffer *,unsigned int> >(Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Foundation::IAsyncOperationWithProgressCompletedHandler<Storage::Streams::IBuffer *,unsigned int> > >);
			long Initialize<Foundation::IAsyncOperationWithProgressCompletedHandler<Storage::Streams::IBuffer *,unsigned int> >(Foundation::IAsyncOperationWithProgressCompletedHandler<Storage::Streams::IBuffer *,unsigned int> *);
		};

		struct GitPtrSupportsAgile<IInspectable>
		{
			long CopyLocal<IInspectable>(Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IInspectable> >);
		};

		struct Holder<Storage::Streams::IBuffer *>
		{
			long Put(Storage::Streams::IBuffer * const &);
			~Holder<Storage::Streams::IBuffer *>();
		};

		struct Promise<Storage::Streams::IBuffer *,Microsoft::WRL::Details::Nil>
		{
			void PutResult(Storage::Streams::IBuffer *);
			~Promise<Storage::Streams::IBuffer *,Microsoft::WRL::Details::Nil>();
		};

		struct Promise<Storage::Streams::IBuffer *,unsigned int>
		{
			~Promise<Storage::Streams::IBuffer *,unsigned int>();
		};

		struct Promise<unsigned char,Microsoft::WRL::Details::Nil>
		{
			~Promise<unsigned char,Microsoft::WRL::Details::Nil>();
		};

		struct Promise<unsigned int,Microsoft::WRL::Details::Nil>
		{
			Promise<unsigned int,Microsoft::WRL::Details::Nil>(Promise<unsigned int,Microsoft::WRL::Details::Nil> const &);
			void Canceled();
			void PutResult(unsigned int);
			~Promise<unsigned int,Microsoft::WRL::Details::Nil>();
		};

		struct PutBackInputStream
		{
			PutBackInputStream(Storage::Streams::IInputStream *);
			static long Make(Storage::Streams::IBuffer *,Storage::Streams::IInputStream *,Storage::Streams::IPutBackInputStream * *);
			virtual long Close();
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long PutBack(Storage::Streams::IBuffer *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual long ReadAsync(Storage::Streams::IBuffer *,unsigned int,Storage::Streams::InputStreamOptions,Foundation::IAsyncOperationWithProgress<Storage::Streams::IBuffer *,unsigned int> * *);
			virtual long UnPutBack(Storage::Streams::IBuffer * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct PutBackReadAsyncContinuation
		{
			void operator()(long,Foundation::IAsyncOperationWithProgress<Storage::Streams::IBuffer *,unsigned int> *,ABI::Windows::Foundation::AsyncStatus);
			~PutBackReadAsyncContinuation();
		};

		struct String
		{
			~String();
		};

		struct StringBuilder
		{
			long BeginConstruction(unsigned int);
			long EndConstruction(HSTRING__ * *);
		};

		struct StringReference
		{
			StringReference(StringReference const &);
			StringReference(unsigned short const *,unsigned int);
		};

		_RTL_RUN_ONCE s_bIsEnvironmentCheckDone;
		long ReadPrimitive<_GUID>(Internal::BufferContents &,Storage::Streams::ByteOrder,_GUID *,bool);
		long ReadPrimitive<double>(Internal::BufferContents &,Storage::Streams::ByteOrder,double *,bool);
		long ReadPrimitive<float>(Internal::BufferContents &,Storage::Streams::ByteOrder,float *,bool);
		long ReadPrimitive<unsigned char>(Internal::BufferContents &,Storage::Streams::ByteOrder,unsigned char *,bool);
		long WritePrimitive<Foundation::DateTime>(Foundation::DateTime,Storage::Streams::ByteOrder,Internal::BufferContents &,bool);
		long WritePrimitive<Foundation::TimeSpan>(Foundation::TimeSpan,Storage::Streams::ByteOrder,Internal::BufferContents &,bool);
		long WritePrimitive<_GUID>(_GUID,Storage::Streams::ByteOrder,Internal::BufferContents &,bool);
		long WritePrimitive<double>(double,Storage::Streams::ByteOrder,Internal::BufferContents &,bool);
		long WritePrimitive<float>(float,Storage::Streams::ByteOrder,Internal::BufferContents &,bool);
		long WritePrimitive<short>(short,Storage::Streams::ByteOrder,Internal::BufferContents &,bool);
		long WritePrimitive<unsigned char>(unsigned char,Storage::Streams::ByteOrder,Internal::BufferContents &,bool);
		long WritePrimitive<unsigned short>(unsigned short,Storage::Streams::ByteOrder,Internal::BufferContents &,bool);
		void ContinueWith<Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>,Storage::Streams::DataWriter::StreamWriteContinuation>(Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int> *,Storage::Streams::DataWriter::StreamWriteContinuation);
		void MemReverse<__int64>(__int64 *);
		void MemReverse<double>(double *);
		void MemReverse<float>(float *);
		void MemReverse<int>(int *);
		void MemReverse<unsigned __int64>(unsigned __int64 *);
		void MemReverseArray<unsigned short>(unsigned __int64,unsigned short *);
	};

	namespace Storage
	{
		namespace Streams
		{
			struct Buffer
			{
				static TrustLevel InternalGetTrustLevel();
				static wchar_t const * InternalGetRuntimeClassName();
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct BufferFactory
			{
				virtual long Create(unsigned int,IBuffer * *);
				virtual long CreateCopyFromMemoryBuffer(Foundation::IMemoryBuffer *,IBuffer * *);
				virtual long CreateMemoryBufferOverIBuffer(IBuffer *,Foundation::IMemoryBuffer * *);
			};

			struct CBuffer<CBuffer_StandardCleanup,DefaultMarshaler>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class CBuffer_Impl<CBuffer_StandardCleanup,DefaultMarshaler>
			{
			protected:
				virtual ~CBuffer_Impl<CBuffer_StandardCleanup,DefaultMarshaler>();
			public:
				CBuffer_Impl<CBuffer_StandardCleanup,DefaultMarshaler>(unsigned int,unsigned int,unsigned char *,CBuffer_StandardCleanup);
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

			struct DataReader
			{
				struct StreamReadContinuation
				{
					void operator()(long,Foundation::IAsyncOperationWithProgress<IBuffer *,unsigned int> *,ABI::Windows::Foundation::AsyncStatus);
					~StreamReadContinuation();
				};

				long SetInputStream(IInputStream *);
				static TrustLevel InternalGetTrustLevel();
				static wchar_t const * InternalGetRuntimeClassName();
				virtual long Close();
				virtual long DetachBuffer(IBuffer * *);
				virtual long DetachStream(IInputStream * *);
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long LoadAsync(unsigned int,Foundation::IAsyncOperation<unsigned int> * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual long ReadBoolean(unsigned char *);
				virtual long ReadBuffer(unsigned int,IBuffer * *);
				virtual long ReadByte(unsigned char *);
				virtual long ReadBytes(unsigned int,unsigned char *);
				virtual long ReadDateTime(Foundation::DateTime *);
				virtual long ReadDouble(double *);
				virtual long ReadGuid(_GUID *);
				virtual long ReadInt16(short *);
				virtual long ReadInt32(int *);
				virtual long ReadInt64(__int64 *);
				virtual long ReadSingle(float *);
				virtual long ReadString(unsigned int,HSTRING__ * *);
				virtual long ReadTimeSpan(Foundation::TimeSpan *);
				virtual long ReadUInt16(unsigned short *);
				virtual long ReadUInt32(unsigned int *);
				virtual long ReadUInt64(unsigned __int64 *);
				virtual long get_ByteOrder(ByteOrder *);
				virtual long get_InputStreamOptions(InputStreamOptions *);
				virtual long get_UnconsumedBufferLength(unsigned int *);
				virtual long get_UnicodeEncoding(UnicodeEncoding *);
				virtual long put_ByteOrder(ByteOrder);
				virtual long put_InputStreamOptions(InputStreamOptions);
				virtual long put_UnicodeEncoding(UnicodeEncoding);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct DataReaderFactory
			{
				virtual long ActivateInstance(IInspectable * *);
				virtual long CreateDataReader(IInputStream *,IDataReader * *);
				virtual long FromBuffer(IBuffer *,IDataReader * *);
			};

			struct DataWriter
			{
				struct StreamWriteContinuation
				{
					void operator()(long,Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int> *,ABI::Windows::Foundation::AsyncStatus);
					~StreamWriteContinuation();
				};

				DataWriter();
				static TrustLevel InternalGetTrustLevel();
				static wchar_t const * InternalGetRuntimeClassName();
				virtual long Close();
				virtual long DetachBuffer(IBuffer * *);
				virtual long DetachStream(IOutputStream * *);
				virtual long FlushAsync(Foundation::IAsyncOperation<bool> * *);
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long MeasureString(HSTRING__ *,unsigned int *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual long StoreAsync(Foundation::IAsyncOperation<unsigned int> * *);
				virtual long WriteBoolean(unsigned char);
				virtual long WriteBuffer(IBuffer *);
				virtual long WriteBufferRange(IBuffer *,unsigned int,unsigned int);
				virtual long WriteByte(unsigned char);
				virtual long WriteBytes(unsigned int,unsigned char const *);
				virtual long WriteDateTime(Foundation::DateTime);
				virtual long WriteDouble(double);
				virtual long WriteGuid(_GUID);
				virtual long WriteInt16(short);
				virtual long WriteInt32(int);
				virtual long WriteInt64(__int64);
				virtual long WriteSingle(float);
				virtual long WriteString(HSTRING__ *,unsigned int *);
				virtual long WriteTimeSpan(Foundation::TimeSpan);
				virtual long WriteUInt16(unsigned short);
				virtual long WriteUInt32(unsigned int);
				virtual long WriteUInt64(unsigned __int64);
				virtual long get_ByteOrder(ByteOrder *);
				virtual long get_UnicodeEncoding(UnicodeEncoding *);
				virtual long get_UnstoredBufferLength(unsigned int *);
				virtual long put_ByteOrder(ByteOrder);
				virtual long put_UnicodeEncoding(UnicodeEncoding);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct DataWriterFactory
			{
				virtual long ActivateInstance(IInspectable * *);
				virtual long CreateDataWriter(IOutputStream *,IDataWriter * *);
			};

			class DefaultMarshaler
			{
				long _EnsureInit();
			public:
				long GetMarshalSizeMax(_GUID const &,void *,unsigned long,void *,unsigned long,unsigned long *);
				long GetUnmarshalClass(_GUID const &,void *,unsigned long,void *,unsigned long,_GUID *);
				long MarshalInterface(IStream *,_GUID const &,void *,unsigned long,void *,unsigned long);
			};

			long CBuffer_Allocate(unsigned int,Streams::IBuffer * *);
			long CreateDataWriter(Streams::IOutputStream *,Streams::IDataWriter * *);
			long MakeBufferRuntimeClass(unsigned int,Streams::IBuffer * *);
			long MakeCBuffer<CBuffer_StandardCleanup>(unsigned int,unsigned int,unsigned char *,Streams::CBuffer_StandardCleanup,Streams::IBuffer * *);
		};

	};

};

namespace XWinRT
{
	struct AutoValue<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> >
	{
		AutoValue<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> ><HSTRING__ *>(HSTRING__ * const &,long *);
		~AutoValue<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> >();
	};

	struct ComLock
	{
		ComLock(bool);
	};

	namespace FakeStl
	{
		void swap<XHashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::KeyTraits,CElementTraits<HSTRING__ *> > >(XHashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::KeyTraits,CElementTraits<HSTRING__ *> > &,XHashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::KeyTraits,CElementTraits<HSTRING__ *> > &);
		void swap<XHashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,0,0> >::KeyTraits,CElementTraits<IInspectable *> > >(XHashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,0,0> >::KeyTraits,CElementTraits<IInspectable *> > &,XHashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,0,0> >::KeyTraits,CElementTraits<IInspectable *> > &);
		void swap<XHashMap<HSTRING__ *,detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::KeyTraits,CElementTraits<detail::GitStorageType<IInspectable> > > >(XHashMap<HSTRING__ *,detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::KeyTraits,CElementTraits<detail::GitStorageType<IInspectable> > > &,XHashMap<HSTRING__ *,detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::KeyTraits,CElementTraits<detail::GitStorageType<IInspectable> > > &);
		void swap<XHashMap<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned char>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > >::KeyTraits,CElementTraits<unsigned char> > >(XHashMap<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned char>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > >::KeyTraits,CElementTraits<unsigned char> > &,XHashMap<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned char>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > >::KeyTraits,CElementTraits<unsigned char> > &);
	};

	struct InterfaceLifetimeTraits
	{
		static long Construct<IInspectable>(IInspectable * *,IInspectable *);
		static long Construct<IInspectable>(detail::GitStorageType<IInspectable> *,detail::GitStorageType<IInspectable>);
		static void Destroy<IInspectable>(IInspectable * *);
	};

	namespace SecureVersionTag
	{
		struct Tag
		{
			long Release();
		};

		struct TagManager
		{
			long ChangeVersion();
			long Initialize();
		};

	};

	struct SerializingLockPolicy
	{
		static detail::LockHolder<ComLock,detail::AcquireRead> Read(ComLock &,long *);
		static detail::LockHolder<ComLock,detail::AcquireWrite> Write(ComLock &,long *);
	};

	struct StringEquals
	{
		long operator()(HSTRING__ *,HSTRING__ *,bool *);
	};

	struct StringHash
	{
		long operator()(HSTRING__ *,unsigned int *);
	};

	class XHashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::KeyTraits,CElementTraits<HSTRING__ *> >
	{
		long FreeNode(XHashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::KeyTraits,CElementTraits<HSTRING__ *> >::CNode *);
		long GetNode(HSTRING__ * const &,unsigned int &,unsigned int &,XHashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::KeyTraits,CElementTraits<HSTRING__ *> >::CNode * &,XHashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::KeyTraits,CElementTraits<HSTRING__ *> >::CNode * *);
		unsigned int PickSize(unsigned __int64);
		void FreePlexes();
		void UpdateRehashThresholds();
	public:
		TXPOSITION * GetStartPosition();
		XHashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::KeyTraits,CElementTraits<HSTRING__ *> >(void *,unsigned int,float,float,float,unsigned int);
		long InitHashTable(unsigned int,bool,bool *);
		long Lookup(HSTRING__ * const &,XHashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::KeyTraits,CElementTraits<HSTRING__ *> >::CPair * *);
		long Rehash(unsigned int);
		long RemoveAll();
		long RemoveAtPos(TXPOSITION *);
	};

	class XHashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,0,0> >::KeyTraits,CElementTraits<IInspectable *> >
	{
		long FreeNode(XHashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,0,0> >::KeyTraits,CElementTraits<IInspectable *> >::CNode *);
		long GetNode(HSTRING__ * const &,unsigned int &,unsigned int &,XHashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,0,0> >::KeyTraits,CElementTraits<IInspectable *> >::CNode * &,XHashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,0,0> >::KeyTraits,CElementTraits<IInspectable *> >::CNode * *);
		long NewNode(HSTRING__ * const &,unsigned int,unsigned int,XHashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,0,0> >::KeyTraits,CElementTraits<IInspectable *> >::CNode * *);
		unsigned int PickSize(unsigned __int64);
		void FreePlexes();
		void UpdateRehashThresholds();
	public:
		TXPOSITION * GetStartPosition();
		XHashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,0,0> >::KeyTraits,CElementTraits<IInspectable *> >(void *,unsigned int,float,float,float,unsigned int);
		long InitHashTable(unsigned int,bool,bool *);
		long Lookup(HSTRING__ * const &,XHashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,0,0> >::KeyTraits,CElementTraits<IInspectable *> >::CPair * *);
		long Rehash(unsigned int);
		long RemoveAll();
		long RemoveAtPos(TXPOSITION *);
	};

	class XHashMap<HSTRING__ *,detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::KeyTraits,CElementTraits<detail::GitStorageType<IInspectable> > >
	{
		long FreeNode(XHashMap<HSTRING__ *,detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::KeyTraits,CElementTraits<detail::GitStorageType<IInspectable> > >::CNode *);
		long GetNode(HSTRING__ * const &,unsigned int &,unsigned int &,XHashMap<HSTRING__ *,detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::KeyTraits,CElementTraits<detail::GitStorageType<IInspectable> > >::CNode * &,XHashMap<HSTRING__ *,detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::KeyTraits,CElementTraits<detail::GitStorageType<IInspectable> > >::CNode * *);
		unsigned int PickSize(unsigned __int64);
		void FreePlexes();
		void UpdateRehashThresholds();
	public:
		TXPOSITION * GetStartPosition();
		XHashMap<HSTRING__ *,detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::KeyTraits,CElementTraits<detail::GitStorageType<IInspectable> > >(void *,unsigned int,float,float,float,unsigned int);
		long InitHashTable(unsigned int,bool,bool *);
		long Lookup(HSTRING__ * const &,XHashMap<HSTRING__ *,detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,1,1,0> >::KeyTraits,CElementTraits<detail::GitStorageType<IInspectable> > >::CPair * *);
		long Rehash(unsigned int);
		long RemoveAll();
		long RemoveAtPos(TXPOSITION *);
	};

	class XHashMap<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned char>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > >::KeyTraits,CElementTraits<unsigned char> >
	{
		long CreateNode(HSTRING__ * const &,unsigned int,unsigned int,XHashMap<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned char>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > >::KeyTraits,CElementTraits<unsigned char> >::CNode * *);
		long FreeNode(XHashMap<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned char>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > >::KeyTraits,CElementTraits<unsigned char> >::CNode *);
		long GetNode(HSTRING__ * const &,unsigned int &,unsigned int &,XHashMap<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned char>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > >::KeyTraits,CElementTraits<unsigned char> >::CNode * &,XHashMap<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned char>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > >::KeyTraits,CElementTraits<unsigned char> >::CNode * *);
		long NewNode(HSTRING__ * const &,unsigned int,unsigned int,XHashMap<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned char>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > >::KeyTraits,CElementTraits<unsigned char> >::CNode * *);
		unsigned int PickSize(unsigned __int64);
		void FreePlexes();
		void UpdateRehashThresholds();
	public:
		TXPOSITION * GetStartPosition();
		XHashMap<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned char>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > >::KeyTraits,CElementTraits<unsigned char> >(void *,unsigned int,float,float,float,unsigned int);
		long InitHashTable(unsigned int,bool,bool *);
		long Lookup(HSTRING__ * const &,XHashMap<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned char>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > >::KeyTraits,CElementTraits<unsigned char> >::CPair * *);
		long Rehash(unsigned int);
		long RemoveAll();
		long RemoveAtPos(TXPOSITION *);
		long SetAt(HSTRING__ * const &,unsigned char,TXPOSITION * *);
	};

	struct XPlex
	{
		static XPlex * Create(XPlex * &,unsigned __int64,unsigned __int64);
		void FreeDataChain();
	};

	namespace detail
	{
		namespace GitStorageType<IInspectable>
		{
			struct ReferencedGitCookie
			{
				long Localize(IInspectable * *);
				unsigned long Release();
			};

		};

		struct LockHolder<SRWLock,AcquireWrite>
		{
			~LockHolder<SRWLock,AcquireWrite>();
		};

		struct ReentrancyGuard<0>
		{
			ReentrancyGuard<0>(...);
		};

		struct ReentrancyGuard<1>
		{
			ReentrancyGuard<1> & operator=(ReentrancyGuard<1>);
			ReentrancyGuard<1>(long,long volatile *);
			long const hr();
		};

	};

};

struct auto_disableWow64FsRedirection
{
	auto_disableWow64FsRedirection();
	~auto_disableWow64FsRedirection();
};

namespace std
{
	struct _Compressed_pair<allocator<unsigned short>,_String_val<_Simple_types<unsigned short> >,1>
	{
		~_Compressed_pair<allocator<unsigned short>,_String_val<_Simple_types<unsigned short> >,1>();
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

	class basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >
	{
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & _Reallocate_for<<lambda_05cef1f6fdf474c9f3ed207deba0f73b>,unsigned short const *>(unsigned __int64,<lambda_05cef1f6fdf474c9f3ed207deba0f73b>,unsigned short const *);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & _Reallocate_grow_by<<lambda_7030d12a21dba11210293044e97fe9c7>,unsigned short const *,unsigned __int64>(unsigned __int64,<lambda_7030d12a21dba11210293044e97fe9c7>,unsigned short const *,unsigned __int64);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & _Reallocate_grow_by<<lambda_b70241e9b5ebaad244db3e52d52cab17>,unsigned __int64,unsigned short>(unsigned __int64,<lambda_b70241e9b5ebaad244db3e52d52cab17>,unsigned __int64,unsigned short);
		static void _Xlen();
		unsigned __int64 _Calculate_growth(unsigned __int64);
	public:
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & append(unsigned __int64,unsigned short);
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >(unsigned short const * const);
		~basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >();
	};

	struct exception
	{
		exception(exception const &);
		virtual char const * what();
	};

	struct length_error
	{
		length_error(length_error const &);
		virtual ~length_error();
	};

	struct logic_error
	{
		logic_error(logic_error const &);
	};

	nothrow_t const std::nothrow;
	void swap<Windows::Internal::BufferContents,void>(Windows::Internal::BufferContents &,Windows::Internal::BufferContents &);
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
		void ReportTelemetryFailure(FailureInfo const &);
		void ReportTraceLoggingFailure(FailureInfo const &);
	};

	struct com_ptr_t<Windows::Foundation::Collections::Detail::IPropertySetSerializer,err_exception_policy>
	{
		~com_ptr_t<Windows::Foundation::Collections::Detail::IPropertySetSerializer,err_exception_policy>();
	};

	struct com_ptr_t<Windows::Storage::Streams::IBuffer,err_exception_policy>
	{
		~com_ptr_t<Windows::Storage::Streams::IBuffer,err_exception_policy>();
	};

	struct com_ptr_t<Windows::Storage::Streams::IBuffer,err_failfast_policy>
	{
		com_ptr_t<Windows::Storage::Streams::IBufferByteAccess,err_failfast_policy> query<Windows::Storage::Streams::IBufferByteAccess>();
		~com_ptr_t<Windows::Storage::Streams::IBuffer,err_failfast_policy>();
	};

	struct com_ptr_t<Windows::Storage::Streams::IBufferByteAccess,err_failfast_policy>
	{
		~com_ptr_t<Windows::Storage::Streams::IBufferByteAccess,err_failfast_policy>();
	};

	namespace details
	{
		struct DestroyThreadPoolTimer<SystemThreadPoolMethods,0>
		{
			static void Destroy(_TP_TIMER *);
		};

		class FeatureStateManager
		{
			bool EnsureStateData();
			bool EnsureSubscribedToStateChangesUnderLock();
			void EnsureSubscribedToProcessWideUsageFlushUnderLock();
		public:
			void OnStateChange();
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
			void FailFast_Unexpected(void *,unsigned int,char const *);
			void Return_Hr(void *,unsigned int,char const *,long);
			void _FailFastImmediate_Unexpected();
			void _FailFast_GetLastError(void *,unsigned int,char const *);
			void _FailFast_Hr(void *,unsigned int,char const *,long);
			void _FailFast_Unexpected(void *,unsigned int,char const *);
			void _Log_Hr(void *,unsigned int,char const *,long);
		};

		class shared_buffer
		{
			void assign(long *,unsigned __int64);
		public:
			bool create(void const *,unsigned __int64);
			void reset();
		};

		struct static_lazy<ComBaseProvider>
		{
			struct Completer
			{
				~Completer();
			};

			ComBaseProvider * get(void (*)());
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
		long NtStatusToHr(long);
		long RecognizeCaughtExceptionFromCallback(wchar_t *,unsigned __int64);
		long ReportFailure_CaughtException(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,SupportedExceptions);
		long ReportFailure_CaughtExceptionCommon(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,wchar_t *,unsigned __int64,SupportedExceptions);
		long ReportFailure_GetLastErrorHr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		long ResultFromCaughtExceptionInternal(wchar_t *,unsigned __int64,bool *);
		long ResultFromCaughtException_CppWinRt(wchar_t *,unsigned __int64,bool *);
		long RtlDisownModuleHeapAllocation(void *,void *);
		long StringCchPrintfA(char *,unsigned __int64,char const *,...);
		shutdown_aware_object<details::FeatureStateManager> g_featureStateManager;
		unsigned __int64 ResultStringSize(char const *);
		unsigned __int64 ResultStringSize(wchar_t const *);
		unsigned char (* g_pfnDllShutdownInProgress)();
		unsigned char * WriteResultString<char const *>(unsigned char *,unsigned char *,char const *,char const * *);
		unsigned char * WriteResultString<wchar_t const *>(unsigned char *,unsigned char *,wchar_t const *,wchar_t const * *);
		unsigned char RtlDllShutdownInProgress();
		unsigned long (* g_pfnRtlNtStatusToDosErrorNoTeb)(long);
		unsigned long GetLastErrorFail(void *,unsigned int,char const *,char const *,char const *,void *);
		unsigned long ReportFailure_GetLastError(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		unsigned long RtlNtStatusToDosErrorNoTeb(long);
		void (* g_pfnDebugBreak)();
		void (* g_pfnGetContextAndNotifyFailure)(FailureInfo *,char *,unsigned __int64);
		void (* g_pfnLoggingCallback)(FailureInfo const &);
		void (* g_pfnOriginateCallback)(FailureInfo const &);
		void (* g_pfnRaiseFailFastException)(_EXCEPTION_RECORD *,_CONTEXT *,unsigned long);
		void (* g_pfnRethrow)();
		void (* g_pfnTelemetryCallback)(bool,FailureInfo const &);
		void (* g_pfnThrowResultException)(FailureInfo const &);
		void * ProcessHeapAlloc(unsigned long,unsigned __int64);
		void CloseHandle(void *);
		void DebugBreak();
		void FreeProcessHeap(void *);
		void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
		void LogFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,wchar_t const *,bool,wchar_t *,unsigned __int64,char *,unsigned __int64,FailureInfo *);
		void MaybeGetExceptionString(ResultException const &,wchar_t *,unsigned __int64);
		void MaybeGetExceptionString(std::exception const &,wchar_t *,unsigned __int64);
		void MaybeGetExceptionString(winrt::hresult_error const &,wchar_t *,unsigned __int64);
		void RecordSRUMFeatureUsage(unsigned int,unsigned int,unsigned int);
		void ReleaseMutex(void *);
		void ReportFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,wchar_t const *,details::ReportFailureOptions);
		void ReportFailure_Hr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long);
		void Rethrow();
		void ThrowResultExceptionInternal(FailureInfo const &);
		void UnregisterWilFeatureConfigurationChange(void *);
		void UnsubscribeProcessWideUsageFlush(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
		void UnsubscribeWilWnf(__WIL__WNF_USER_SUBSCRIPTION *);
		void WilApiImpl_RecordFeatureUsage(unsigned int,unsigned int,unsigned int,char const *);
		void WilApiImpl_SubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
		void WilApiImpl_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
		void WilApi_RecordFeatureUsage(unsigned int,unsigned int,unsigned int,char const *);
		void WilDynamicLoadRaiseFailFastException(_EXCEPTION_RECORD *,_CONTEXT *,unsigned long);
		void WilFailFast(FailureInfo const &);
		void WilRaiseFailFastException(_EXCEPTION_RECORD *,_CONTEXT *,unsigned long);
		wchar_t * LogStringPrintf(wchar_t *,wchar_t const *,wchar_t const *,...);
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
			~RawUsageIndex();
		};

		class SemaphoreValue
		{
			long CreateFromValueInternal(wchar_t const *,bool,unsigned __int64);
			static long GetValueFromSemaphore(void *,long *);
			static long TryGetValueInternal(wchar_t const *,bool,unsigned __int64 *,bool *);
		public:
			static long TryGetPointer(wchar_t const *,void * *);
			void Destroy();
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

	struct manually_managed_shutdown_aware_object<details::FeatureStateManager>
	{
		void construct();
		void destroy();
	};

	bool (* g_pfnIsDebuggerPresent)();
	bool (* g_pfnWilFailFast)(wil::FailureInfo const &);
	bool ProcessShutdownInProgress();
	bool g_fBreakOnFailure;
	bool g_fIsDebuggerPresent;
	int winrt_to_hresult(void *);
	long (* g_pfnResultFromCaughtException)();
	long GetFailureLogString(wchar_t *,unsigned __int64,wil::FailureInfo const &);
	long stream_read_nothrow(ISequentialStream *,void *,unsigned long);
	long stream_write_nothrow(ISequentialStream *,void const *,unsigned long);
	void SetResultTelemetryFallback(void (*)(bool,wil::FailureInfo const &));
};

namespace winrt
{
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

	class com_ptr<impl::abi<Windows::Foundation::IUnknown,void>::type>
	{
		void unconditional_release_ref();
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

	class hresult_error
	{
		void originate(hresult,void *);
	public:
		hresult to_abi();
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

	namespace impl
	{
		struct guid_storage<IAgileObject>
		{
			static guid const value;
		};

		struct guid_storage<ILanguageExceptionErrorInfo2>
		{
			static guid const value;
		};

		struct guid_storage<IMarshal>
		{
			static guid const value;
		};

		struct guid_storage<Windows::Foundation::IActivationFactory>
		{
			static guid const value;
		};

		struct guid_storage<Windows::Foundation::IGuidHelperStatics>
		{
			static guid const value;
		};

		struct guid_storage<Windows::Foundation::IInspectable>
		{
			static guid const value;
		};

		struct guid_storage<Windows::Foundation::IUnknown>
		{
			static guid const value;
		};

		struct hstring_builder
		{
			hstring to_hstring();
			~hstring_builder();
		};

		struct produce<Windows::Foundation::factory_implementation::GuidHelper,Windows::Foundation::IActivationFactory>
		{
			virtual int ActivateInstance(void * *);
		};

		struct produce<Windows::Foundation::factory_implementation::GuidHelper,Windows::Foundation::IGuidHelperStatics>
		{
			virtual int CreateNewGuid(guid *);
			virtual int Equals(guid const &,guid const &,bool *);
			virtual int get_Empty(guid *);
		};

		struct produce_base<Windows::Foundation::factory_implementation::GuidHelper,Windows::Foundation::IActivationFactory,void>
		{
			virtual int GetIids(unsigned int *,guid * *);
			virtual int GetRuntimeClassName(void * *);
			virtual int GetTrustLevel(Windows::Foundation::TrustLevel *);
			virtual int QueryInterface(guid const &,void * *);
			virtual unsigned int AddRef();
			virtual unsigned int Release();
		};

		struct produce_base<Windows::Foundation::factory_implementation::GuidHelper,Windows::Foundation::IGuidHelperStatics,void>
		{
			virtual int GetIids(unsigned int *,guid * *);
			virtual int GetRuntimeClassName(void * *);
			virtual int GetTrustLevel(Windows::Foundation::TrustLevel *);
			virtual int QueryInterface(guid const &,void * *);
			virtual unsigned int AddRef();
			virtual unsigned int Release();
		};

		class root_implements<Windows::Foundation::factory_implementation::GuidHelper,Windows::Foundation::IActivationFactory,Windows::Foundation::IGuidHelperStatics>
		{
			int query_interface(guid const &,void * *);
			virtual Windows::Foundation::TrustLevel GetTrustLevel();
		protected:
			int NonDelegatingGetIids(unsigned int *,guid * *);
			int NonDelegatingGetRuntimeClassName(void * *);
			int NonDelegatingGetTrustLevel(Windows::Foundation::TrustLevel *);
			virtual int query_interface_tearoff(guid const &,void * *);
		};

		struct uncloaked_iids<interface_list<Windows::Foundation::IActivationFactory,Windows::Foundation::IGuidHelperStatics> >
		{
			static std::array<guid,2> const value;
		};

		hresult const error_access_denied;
		hresult const error_canceled;
		hresult const error_changed_state;
		hresult const error_class_not_available;
		hresult const error_fail;
		hresult const error_illegal_delegate_assignment;
		hresult const error_illegal_method_call;
		hresult const error_illegal_state_change;
		hresult const error_invalid_argument;
		hresult const error_no_interface;
		hresult const error_not_implemented;
		hresult const error_out_of_bounds;
		hresult const error_wrong_thread;
		hstring trim_hresult_message(wchar_t const * const,unsigned int);
	};

	class implements<Windows::Foundation::factory_implementation::GuidHelper,Windows::Foundation::IActivationFactory,Windows::Foundation::IGuidHelperStatics>
	{
		virtual impl::abi<Windows::Foundation::IUnknown,void>::type * get_unknown();
	public:
		virtual impl::abi<Windows::Foundation::IInspectable,void>::type * find_inspectable();
		virtual std::pair<unsigned int,guid const *> get_local_iids();
		virtual void * find_interface(guid const &);
	};

	void throw_hresult(winrt::hresult);
	winrt::hresult to_hresult();
	winrt::hstring to_hstring<char const *,void>(char const * const &);
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

};

HINSTANCE__ * g_wil_details_ntdllModuleHandle;
HINSTANCE__ * wil_details_GetNtDllModuleHandle();
Microsoft::WRL::Details::CreatorMap const __object_ApiInformation;
Microsoft::WRL::Details::CreatorMap const __object_Buffer;
Microsoft::WRL::Details::CreatorMap const __object_CBufferProxy_COM;
Microsoft::WRL::Details::CreatorMap const __object_CRuntimeBrokerErrorSettings;
Microsoft::WRL::Details::CreatorMap const __object_DataReader;
Microsoft::WRL::Details::CreatorMap const __object_DataWriter;
Microsoft::WRL::Details::CreatorMap const __object_DeferralImpl;
Microsoft::WRL::Details::CreatorMap const __object_InMemoryPropertyStore;
Microsoft::WRL::Details::CreatorMap const __object_MarshalByValueValueSet_COM;
Microsoft::WRL::Details::CreatorMap const __object_MemoryBuffer;
Microsoft::WRL::Details::CreatorMap const __object_PlaceholderPropertyValue;
Microsoft::WRL::Details::CreatorMap const __object_StringStore;
Microsoft::WRL::Details::CreatorMap const __object_ValueFactory_COM;
Microsoft::WRL::Details::CreatorMap const __object_ValueSet;
Microsoft::WRL::Details::FactoryCache __objectFactory__ApiInformation;
Microsoft::WRL::Details::FactoryCache __objectFactory__Buffer;
Microsoft::WRL::Details::FactoryCache __objectFactory__CBufferProxy_COM;
Microsoft::WRL::Details::FactoryCache __objectFactory__CRuntimeBrokerErrorSettings;
Microsoft::WRL::Details::FactoryCache __objectFactory__DataReader;
Microsoft::WRL::Details::FactoryCache __objectFactory__DataWriter;
Microsoft::WRL::Details::FactoryCache __objectFactory__DeferralImpl;
Microsoft::WRL::Details::FactoryCache __objectFactory__InMemoryPropertyStore;
Microsoft::WRL::Details::FactoryCache __objectFactory__MarshalByValueValueSet_COM;
Microsoft::WRL::Details::FactoryCache __objectFactory__MemoryBuffer;
Microsoft::WRL::Details::FactoryCache __objectFactory__PlaceholderPropertyValue;
Microsoft::WRL::Details::FactoryCache __objectFactory__StringStore;
Microsoft::WRL::Details::FactoryCache __objectFactory__ValueFactory_COM;
Microsoft::WRL::Details::FactoryCache __objectFactory__ValueSet;
MicrosoftTelemetryAssertTriggeredNode * g_MicrosoftTelemetryAssertsTriggeredList;
TYPE_CLASSIFICATION GetTypeClassification(unsigned short const *);
_GUID const CLSID_PropertyValueFactory;
_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
_RTL_SRWLOCK g_MicrosoftTelemetryAssertLock;
__type_info_node __type_info_root_node;
bool SecureCompareBuffer(unsigned char * const,unsigned char * const,unsigned __int64);
int (* winrt_to_hresult_handler)(void *);
int GetProcessExeDirInitOnceCallback(_RTL_RUN_ONCE *,void *,void * *);
int InlineIsEqualGUID(_GUID const &,_GUID const &);
long (* g_wil_details_pfnNtQueryWnfStateData)(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long (* g_wil_details_pfnNtUpdateWnfStateData)(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long (* g_wil_details_pfnRtlNotifyFeatureUsage)(_RTL_FEATURE_USAGE_REPORT *);
long (* g_wil_details_pfnRtlRegisterFeatureConfigurationChangeNotification)(void (*)(void *),void *,unsigned __int64 *,void * *);
long (* g_wil_details_pfnRtlSubscribeWnfStateChangeNotification)(__WIL__WNF_USER_SUBSCRIPTION * *,__WIL__WNF_STATE_NAME,unsigned long,long (*)(__WIL__WNF_STATE_NAME,unsigned long,__WIL__WNF_TYPE_ID *,void *,void const *,unsigned long),void *,__WIL__WNF_TYPE_ID *,unsigned long,unsigned long);
long (* g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion)(__WIL__WNF_USER_SUBSCRIPTION *);
long AppendTrailingSlash(unsigned short const *,unsigned __int64,unsigned short *);
long DetermineListOfMetaDataDirs(unsigned short const *,HSTRING__ * const,unsigned long,HSTRING__ * const *,ATL::CSimpleArray<ObjectLibrary::OpaqueString,ATL::CSimpleArrayEqualHelper<ObjectLibrary::OpaqueString> > *);
long DetermineListOfMetaDataDirsForThirdPartyNamespaces(unsigned long,HSTRING__ * const *,ATL::CSimpleArray<ObjectLibrary::OpaqueString,ATL::CSimpleArrayEqualHelper<ObjectLibrary::OpaqueString> > *);
long DetermineListOfMetaDataDirsForWindowsNamespaces(HSTRING__ * const,ATL::CSimpleArray<ObjectLibrary::OpaqueString,ATL::CSimpleArrayEqualHelper<ObjectLibrary::OpaqueString> > *);
long EnumerateSubNamespaces(Windows::Internal::StringReference,ATL::CSimpleArray<ObjectLibrary::OpaqueString,ATL::CSimpleArrayEqualHelper<ObjectLibrary::OpaqueString> > const &,unsigned long *,HSTRING__ * * *);
long EnumerateSubNamespacesInDir(Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned char>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,unsigned char,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > > > &,unsigned short const *,unsigned short const *,ATL::CSimpleArray<ObjectLibrary::OpaqueString,ATL::CSimpleArrayEqualHelper<ObjectLibrary::OpaqueString> > *);
long EnumerateTopLevelNamespaces(ATL::CSimpleArray<ObjectLibrary::OpaqueString,ATL::CSimpleArrayEqualHelper<ObjectLibrary::OpaqueString> > const &,unsigned long *,HSTRING__ * * *);
long ExtractExactCaseNamespaceSegmentFromMetadataFile(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,unsigned __int64,unsigned short *);
long ExtractUpperCaseNamespaceSegmentFromFileName(unsigned short const *,unsigned short const *,unsigned __int64,unsigned short *);
long FindMetaDataFileInDirWithPotentialDirectTypes(unsigned short const *,unsigned short const *,ObjectLibrary::OpaqueString *);
long FindMetaDataFilesWithPotentialDirectTypes(Windows::Internal::StringReference,ATL::CSimpleArray<ObjectLibrary::OpaqueString,ATL::CSimpleArrayEqualHelper<ObjectLibrary::OpaqueString> > const &,unsigned long *,HSTRING__ * * *);
long FindTypeInDirectory(IMetaDataDispenserEx *,unsigned short const *,unsigned short const *,HSTRING__ * *,IMetaDataImport2 * *,unsigned int *);
long FindTypeInDirectoryWithNormalization(IMetaDataDispenserEx *,unsigned short const *,unsigned short const *,HSTRING__ * *,IMetaDataImport2 * *,unsigned int *);
long FindTypeInMetaDataFile(IMetaDataDispenserEx *,unsigned short const *,unsigned short const *,TYPE_RESOLUTION_OPTIONS,IMetaDataImport2 * *,unsigned int *);
long GetMetaDataFileSearchPattern(unsigned short const *,unsigned __int64,unsigned short *);
long GetProcessExeDir(unsigned short const * *);
long ResolveThirdPartyType(IMetaDataDispenserEx *,unsigned short const *,HSTRING__ * *,IMetaDataImport2 * *,unsigned int *);
long ResolveWindowsType(IMetaDataDispenserEx *,unsigned short const *,HSTRING__ * *,IMetaDataImport2 * *,unsigned int *);
long StringCbLengthW(wchar_t const *,unsigned __int64,unsigned __int64 *);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCopyA(char *,unsigned __int64,char const *);
long StringCchCopyExW(unsigned short *,unsigned __int64,unsigned short const *,unsigned short * *,unsigned __int64 *,unsigned long);
long StringCchCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchPrintfExW(unsigned short *,unsigned __int64,unsigned short * *,unsigned __int64 *,unsigned long,unsigned short const *,...);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long StringCchPrintfW(wchar_t *,unsigned __int64,wchar_t const *,...);
long ValidateNameFormat(Windows::Internal::StringReference);
long ValidateParameters(Windows::Internal::StringReference,unsigned long const *,HSTRING__ * * *,unsigned long const *,HSTRING__ * * *);
long wil_RtlStagingConfig_RecordFeatureUsage(unsigned int,unsigned int,int);
long wil_StagingConfig_RecordFeatureUsage(unsigned int,unsigned int,int);
long wil_details_NtQueryWnfStateData(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long wil_details_NtUpdateWnfStateData(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long wil_details_RtlRegisterFeatureConfigurationChangeNotification(void (*)(void *),void *,unsigned __int64 *,void * *);
long wil_details_RtlSubscribeWnfStateChangeNotification(__WIL__WNF_USER_SUBSCRIPTION * *,__WIL__WNF_STATE_NAME,unsigned long,long (*)(__WIL__WNF_STATE_NAME,unsigned long,__WIL__WNF_TYPE_ID *,void *,void const *,unsigned long),void *,__WIL__WNF_TYPE_ID *,unsigned long,unsigned long);
long wil_details_StagingConfig_FireNotification(wil_details_StagingConfig *,unsigned int,unsigned short,int);
long wil_details_StagingConfig_Load(wil_details_StagingConfig *,wil_FeatureStore,unsigned __int64,void *,int);
long wil_details_WriteSRUMWnfUsageBuffer(wil::details_abi::heap_vector<wil_details_FeatureUsageSRUM> *);
unsigned short * AllocateAndCopyString(unsigned short const *);
unsigned short const * const RuntimeClass_Windows_Foundation_Deferral;
unsigned short const * const RuntimeClass_Windows_Foundation_Diagnostics_AsyncCausalityTracer;
unsigned short const * const RuntimeClass_Windows_Foundation_Diagnostics_RuntimeBrokerErrorSettings;
unsigned short const * const RuntimeClass_Windows_Foundation_MemoryBuffer;
unsigned short const * const RuntimeClass_Windows_Storage_Streams_Buffer;
unsigned short const * const RuntimeClass_Windows_Storage_Streams_DataReader;
unsigned short const * const RuntimeClass_Windows_Storage_Streams_DataWriter;
void (* g_wil_details_RecordSRUMFeatureUsage)(unsigned int,unsigned int,unsigned int);
void (* g_wil_details_apiRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_internalRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_internalSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_internalUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_pfnRtlUnregisterFeatureConfigurationChangeNotification)(void *);
void * operator new(unsigned __int64);
void * operator new(unsigned __int64,std::nothrow_t const &);
void * operator new[](unsigned __int64);
void * operator new[](unsigned __int64,std::nothrow_t const &);
void __ArrayUnwind(void *,unsigned __int64,unsigned __int64,void (*)(void *));
void __scrt_initialize_type_info();
void __scrt_throw_std_bad_alloc();
void __scrt_throw_std_bad_array_new_length();
void __scrt_uninitialize_type_info();
void operator delete(void *);
void operator delete(void *,unsigned __int64);
void operator delete(void *,void *);
void operator delete[](void *);
void operator delete[](void *,unsigned __int64);
void wil_details_StagingConfig_Free(wil_details_StagingConfig *);
wchar_t const * const RuntimeClass_Windows_Foundation_Collections_ValueSet;
wchar_t const * const RuntimeClass_Windows_Foundation_Deferral;
wchar_t const * const RuntimeClass_Windows_Foundation_Diagnostics_RuntimeBrokerErrorSettings;
wchar_t const * const RuntimeClass_Windows_Foundation_MemoryBuffer;
wchar_t const * const RuntimeClass_Windows_Foundation_Metadata_ApiInformation;
wchar_t const * const RuntimeClass_Windows_Foundation_PropertyValue;
wchar_t const * const RuntimeClass_Windows_Storage_Streams_Buffer;
wchar_t const * const RuntimeClass_Windows_Storage_Streams_DataReader;
wchar_t const * const RuntimeClass_Windows_Storage_Streams_DataWriter;
