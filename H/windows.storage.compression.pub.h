class <lambda_5f1dd388c03885d19ee806198d2ac5ef>
{
	static int <lambda_invoker_cdecl>(_RTL_RUN_ONCE *,void *,void * *);
};

struct AutoStubBias<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool> >
{
	~AutoStubBias<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool> >();
};

struct AutoStubBias<Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer *,unsigned int>,Windows::Foundation::IAsyncOperationProgressHandler<Windows::Storage::Streams::IBuffer *,unsigned int> >
{
	~AutoStubBias<Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer *,unsigned int>,Windows::Foundation::IAsyncOperationProgressHandler<Windows::Storage::Streams::IBuffer *,unsigned int> >();
};

struct AutoStubBias<Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer *,unsigned int>,Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Storage::Streams::IBuffer *,unsigned int> >
{
	~AutoStubBias<Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer *,unsigned int>,Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Storage::Streams::IBuffer *,unsigned int> >();
};

struct AutoStubBias<Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>,Windows::Foundation::IAsyncOperationProgressHandler<unsigned int,unsigned int> >
{
	~AutoStubBias<Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>,Windows::Foundation::IAsyncOperationProgressHandler<unsigned int,unsigned int> >();
};

struct AutoStubBias<Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>,Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<unsigned int,unsigned int> >
{
	~AutoStubBias<Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int>,Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<unsigned int,unsigned int> >();
};

namespace Microsoft
{
	namespace WRL
	{
		struct ActivationFactory<Windows::Storage::Compression::ICompressorFactory,Details::Nil,Details::Nil,0>
		{
			virtual long ActivateInstance(IInspectable * *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct ActivationFactory<Windows::Storage::Compression::IDecompressorFactory,Details::Nil,Details::Nil,0>
		{
			virtual long ActivateInstance(IInspectable * *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
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
			long As<Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer *,unsigned int> >(Details::ComPtrRef<ComPtr<Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer *,unsigned int> > >);
			long As<Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int> >(Details::ComPtrRef<ComPtr<Windows::Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int> > >);
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

		class ComPtr<IMarshal>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IRestrictedErrorInfo>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<IRpcOptions>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<IRpcOptions>();
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

		class ComPtr<Windows::Foundation::IAsyncOperation<bool> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::IAsyncOperation<bool> >();
		};

		class ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<bool> >
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			~ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<bool> >();
		};

		class ComPtr<Windows::Foundation::IAsyncOperationProgressHandler<Windows::Storage::Streams::IBuffer *,unsigned int> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::IAsyncOperationProgressHandler<Windows::Storage::Streams::IBuffer *,unsigned int> >();
		};

		class ComPtr<Windows::Foundation::IAsyncOperationProgressHandler<unsigned int,unsigned int> >
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Foundation::IAsyncOperationProgressHandler<unsigned int,unsigned int> >();
		};

		class ComPtr<Windows::Foundation::IAsyncOperationWithProgress<Windows::Storage::Streams::IBuffer *,unsigned int> >
		{
		protected:
			unsigned long InternalRelease();
		public:
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

		class ComPtr<Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<unsigned int,unsigned int> >
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			~ComPtr<Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<unsigned int,unsigned int> >();
		};

		class ComPtr<Windows::Foundation::IClosable>
		{
		protected:
			unsigned long InternalRelease();
		};

		struct ComPtr<Windows::Storage::Compression::CompressFlushOperation>
		{
			void Attach(Windows::Storage::Compression::CompressFlushOperation *);
			~ComPtr<Windows::Storage::Compression::CompressFlushOperation>();
		};

		struct ComPtr<Windows::Storage::Compression::CompressWriteOperation>
		{
			void Attach(Windows::Storage::Compression::CompressWriteOperation *);
			~ComPtr<Windows::Storage::Compression::CompressWriteOperation>();
		};

		class ComPtr<Windows::Storage::Compression::CompressorServer>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Storage::Compression::CompressorServer>();
		};

		struct ComPtr<Windows::Storage::Compression::DecompressReadOperation>
		{
			void Attach(Windows::Storage::Compression::DecompressReadOperation *);
			~ComPtr<Windows::Storage::Compression::DecompressReadOperation>();
		};

		class ComPtr<Windows::Storage::Compression::DecompressorServer>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Storage::Compression::DecompressorServer>();
		};

		class ComPtr<Windows::Storage::Compression::WriteListener>
		{
		protected:
			unsigned long InternalRelease();
		};

		class ComPtr<Windows::Storage::Streams::IBuffer>
		{
		protected:
			unsigned long InternalRelease();
			void InternalAddRef();
		public:
			ComPtr<Windows::Storage::Streams::IBuffer>();
			~ComPtr<Windows::Storage::Streams::IBuffer>();
		};

		class ComPtr<Windows::Storage::Streams::IBufferByteAccess>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Storage::Streams::IBufferByteAccess>();
		};

		class ComPtr<Windows::Storage::Streams::IInputStream>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Storage::Streams::IInputStream>();
		};

		class ComPtr<Windows::Storage::Streams::IOutputStream>
		{
		protected:
			unsigned long InternalRelease();
		public:
			~ComPtr<Windows::Storage::Streams::IOutputStream>();
		};

		namespace Details
		{
			struct ComPtrRef<AgileRef>
			{
				operator AgileRef *();
			};

			class ImplementsHelper<RuntimeClassFlags<13>,0,IActivationFactory,Windows::Storage::Compression::ICompressorFactory,Nil,Nil,Nil>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<13>,0,IActivationFactory,Windows::Storage::Compression::IDecompressorFactory,Nil,Nil,Nil>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<19>,0,Windows::Storage::Streams::IBuffer,IWeakReferenceSource,CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,CloakedIid<IMarshal>,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<19>,1,IWeakReferenceSource,CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,CloakedIid<IMarshal>,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,Windows::Foundation::IClosable,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
				void FillArrayWithIid(unsigned long *,_GUID *);
			public:
				ImplementsHelper<RuntimeClassFlags<1>,1,Windows::Foundation::IClosable,FtmBase>();
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,Windows::Storage::Compression::ICompressor,Windows::Foundation::IClosable,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,Windows::Storage::Compression::IDecompressor,Windows::Foundation::IClosable,FtmBase>
			{
			protected:
				void FillArrayWithIid(unsigned long *,_GUID *);
			};

			struct MakeAllocator<WeakReferenceImpl>
			{
				~MakeAllocator<WeakReferenceImpl>();
			};

			struct MakeAllocator<Windows::Storage::Compression::CompressFlushOperation>
			{
				~MakeAllocator<Windows::Storage::Compression::CompressFlushOperation>();
			};

			struct MakeAllocator<Windows::Storage::Compression::CompressWriteOperation>
			{
				~MakeAllocator<Windows::Storage::Compression::CompressWriteOperation>();
			};

			struct MakeAllocator<Windows::Storage::Compression::CompressorFactoryServer>
			{
				~MakeAllocator<Windows::Storage::Compression::CompressorFactoryServer>();
			};

			struct MakeAllocator<Windows::Storage::Compression::CompressorServer>
			{
				~MakeAllocator<Windows::Storage::Compression::CompressorServer>();
			};

			struct MakeAllocator<Windows::Storage::Compression::DecompressReadOperation>
			{
				~MakeAllocator<Windows::Storage::Compression::DecompressReadOperation>();
			};

			struct MakeAllocator<Windows::Storage::Compression::DecompressorFactoryServer>
			{
				~MakeAllocator<Windows::Storage::Compression::DecompressorFactoryServer>();
			};

			struct MakeAllocator<Windows::Storage::Compression::DecompressorServer>
			{
				~MakeAllocator<Windows::Storage::Compression::DecompressorServer>();
			};

			struct MakeAllocator<Windows::Storage::Compression::FlushListener>
			{
				~MakeAllocator<Windows::Storage::Compression::FlushListener>();
			};

			struct MakeAllocator<Windows::Storage::Compression::ReadListener>
			{
				~MakeAllocator<Windows::Storage::Compression::ReadListener>();
			};

			struct MakeAllocator<Windows::Storage::Compression::WriteListener>
			{
				~MakeAllocator<Windows::Storage::Compression::WriteListener>();
			};

			struct MakeAllocator<Windows::Storage::Streams::CBuffer<Windows::Storage::Streams::CBuffer_StandardCleanup,Windows::Storage::Streams::DefaultMarshaler> >
			{
				~MakeAllocator<Windows::Storage::Streams::CBuffer<Windows::Storage::Streams::CBuffer_StandardCleanup,Windows::Storage::Streams::DefaultMarshaler> >();
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

			struct RuntimeClass<InterfaceListHelper<IActivationFactory,Windows::Storage::Compression::ICompressorFactory,Nil,Nil,Nil>,RuntimeClassFlags<13>,0,1,0>
			{
				RuntimeClass<InterfaceListHelper<IActivationFactory,Windows::Storage::Compression::ICompressorFactory,Nil,Nil,Nil>,RuntimeClassFlags<13>,0,1,0>();
			};

			struct RuntimeClass<InterfaceListHelper<IActivationFactory,Windows::Storage::Compression::IDecompressorFactory,Nil,Nil,Nil>,RuntimeClassFlags<13>,0,1,0>
			{
				RuntimeClass<InterfaceListHelper<IActivationFactory,Windows::Storage::Compression::IDecompressorFactory,Nil,Nil,Nil>,RuntimeClassFlags<13>,0,1,0>();
			};

			class RuntimeClassBaseT<19>
			{
			protected:
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<19>,1,1,0,Windows::Storage::Streams::IBuffer,CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,CloakedIid<IMarshal>,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<19>,1,1,0,Windows::Storage::Streams::IBuffer,CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,CloakedIid<IMarshal>,FtmBase> *,_GUID const &,void * *);
			};

			class RuntimeClassBaseT<1>
			{
			protected:
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Storage::Streams::IInputStream,Windows::Storage::Compression::IDecompressor,Windows::Foundation::IClosable,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Storage::Streams::IInputStream,Windows::Storage::Compression::IDecompressor,Windows::Foundation::IClosable,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Storage::Streams::IOutputStream,Windows::Storage::Compression::ICompressor,Windows::Foundation::IClosable,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Storage::Streams::IOutputStream,Windows::Storage::Compression::ICompressor,Windows::Foundation::IClosable,FtmBase> *,_GUID const &,void * *);
			};

			class RuntimeClassBaseT<2>
			{
			protected:
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Storage::Streams::IBuffer *,unsigned int>,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Storage::Streams::IBuffer *,unsigned int>,FtmBase> *,_GUID const &,void * *);
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<unsigned int,unsigned int>,FtmBase> >(RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<unsigned int,unsigned int>,FtmBase> *,_GUID const &,void * *);
			};

			class RuntimeClassImpl<RuntimeClassFlags<13>,0,1,0,IActivationFactory,Windows::Storage::Compression::ICompressorFactory,Nil,Nil,Nil>
			{
			protected:
				RuntimeClassImpl<RuntimeClassFlags<13>,0,1,0,IActivationFactory,Windows::Storage::Compression::ICompressorFactory,Nil,Nil,Nil>();
			public:
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			class RuntimeClassImpl<RuntimeClassFlags<13>,0,1,0,IActivationFactory,Windows::Storage::Compression::IDecompressorFactory,Nil,Nil,Nil>
			{
			protected:
				RuntimeClassImpl<RuntimeClassFlags<13>,0,1,0,IActivationFactory,Windows::Storage::Compression::IDecompressorFactory,Nil,Nil,Nil>();
			public:
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
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

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Storage::Streams::IInputStream,Windows::Storage::Compression::IDecompressor,Windows::Foundation::IClosable,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Storage::Streams::IInputStream,Windows::Storage::Compression::IDecompressor,Windows::Foundation::IClosable,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Storage::Streams::IOutputStream,Windows::Storage::Compression::ICompressor,Windows::Foundation::IClosable,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Storage::Streams::IOutputStream,Windows::Storage::Compression::ICompressor,Windows::Foundation::IClosable,FtmBase>();
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

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Storage::Streams::IBuffer *,unsigned int>,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<unsigned int,unsigned int>,FtmBase>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
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
			ComPtr<Windows::Storage::Streams::CBuffer<Windows::Storage::Streams::CBuffer_StandardCleanup,Windows::Storage::Streams::DefaultMarshaler> > Make<Windows::Storage::Streams::CBuffer<Windows::Storage::Streams::CBuffer_StandardCleanup,Windows::Storage::Streams::DefaultMarshaler>,unsigned int &,unsigned int &,unsigned char * &,Windows::Storage::Streams::CBuffer_StandardCleanup &>(unsigned int &,unsigned int &,unsigned char * &,Windows::Storage::Streams::CBuffer_StandardCleanup &);
			Details::WeakReferenceImpl * CreateWeakReference(IUnknown *);
			bool TerminateMap(Details::ModuleBase *,unsigned short const *,bool);
			long CreateActivationFactory<Windows::Storage::Compression::CompressorFactoryServer>(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<Windows::Storage::Compression::DecompressorFactoryServer>(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long GetActivationFactory<1>(Details::ModuleBase *,unsigned short const *,HSTRING__ *,IActivationFactory * *);
			long GetCacheEntry(Details::ModuleBase *,unsigned int *,_GUID const &,Details::CreatorMap const *,IUnknown * *);
			long GetClassObject<1>(Details::ModuleBase *,unsigned short const *,_GUID const &,_GUID const &,void * *);
			unsigned long SafeUnknownDecrementReference(long volatile &);
			unsigned long SafeUnknownIncrementReference(long volatile &);
		};

		struct ErrorPropagationPolicyTraits<-1>
		{
			static long FireCompletionErrorPropagationPolicyFilter(long,IUnknown *,void *);
			static long FireProgressErrorPropagationPolicyFilter(long,IUnknown *,void *);
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

		namespace Wrappers
		{
			class HStringReference
			{
				void CreateReference(unsigned short const *,unsigned int,unsigned int);
			public:
				HStringReference<unsigned short const *>(unsigned short const * const &,Details::Dummy);
				~HStringReference();
			};

			struct SRWLock
			{
				static Details::SyncLockExclusive LockExclusive(_RTL_SRWLOCK *);
			};

		};

		Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics * gCausality;
		_RTL_RUN_ONCE gCausalityInitOnce;
	};

};

struct RpcOptionsHelper
{
	static long GetRpcOptions(IUnknown *,bool,IRpcOptions * *);
};

namespace Windows
{
	namespace Foundation
	{
		struct IAsyncOperation<bool>
		{
			IAsyncOperation<bool>();
		};

		struct IAsyncOperationWithProgress<Storage::Streams::IBuffer *,unsigned int>
		{
			IAsyncOperationWithProgress<Storage::Streams::IBuffer *,unsigned int>();
		};

		struct IAsyncOperationWithProgress<unsigned int,unsigned int>
		{
			IAsyncOperationWithProgress<unsigned int,unsigned int>();
		};

		struct IAsyncOperationWithProgress_impl<Storage::Streams::IBuffer *,unsigned int>
		{
			IAsyncOperationWithProgress_impl<Storage::Streams::IBuffer *,unsigned int>();
		};

		struct IAsyncOperationWithProgress_impl<unsigned int,unsigned int>
		{
			IAsyncOperationWithProgress_impl<unsigned int,unsigned int>();
		};

		struct IAsyncOperation_impl<Internal::AggregateType<bool,unsigned char> >
		{
			IAsyncOperation_impl<Internal::AggregateType<bool,unsigned char> >();
		};

		long GetActivationFactory<Diagnostics::IAsyncCausalityTracerStatics>(HSTRING__ *,Foundation::Diagnostics::IAsyncCausalityTracerStatics * *);
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

		struct GitPtr
		{
			GitPtr();
		};

		class GitPtrImpl<GitPtr>
		{
		protected:
			long Localize(_GUID const &,void * *);
		public:
			long CopyLocal<Foundation::IClosable>(Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Foundation::IClosable> >);
			long CopyLocal<IAsyncInfo>(Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IAsyncInfo> >);
			long CopyLocal<Storage::Streams::IOutputStream>(Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<Storage::Streams::IOutputStream> >);
			long Revoke();
			virtual bool IsInitialized();
			virtual ~GitPtrImpl<GitPtr>();
		};

		struct GitPtrSupportsAgile<Foundation::IAsyncOperationCompletedHandler<bool> >
		{
			long CopyLocal(_GUID const &,void * *);
		};

		struct GitPtrSupportsAgile<Foundation::IAsyncOperationProgressHandler<Storage::Streams::IBuffer *,unsigned int> >
		{
			long CopyLocal(_GUID const &,void * *);
		};

		struct GitPtrSupportsAgile<Foundation::IAsyncOperationProgressHandler<unsigned int,unsigned int> >
		{
			long CopyLocal(_GUID const &,void * *);
		};

		struct GitPtrSupportsAgile<Foundation::IAsyncOperationWithProgressCompletedHandler<Storage::Streams::IBuffer *,unsigned int> >
		{
			long CopyLocal(_GUID const &,void * *);
		};

		struct GitPtrSupportsAgile<Foundation::IAsyncOperationWithProgressCompletedHandler<unsigned int,unsigned int> >
		{
			long CopyLocal(_GUID const &,void * *);
		};

		_RTL_RUN_ONCE s_bIsEnvironmentCheckDone;
	};

	namespace Storage
	{
		namespace Compression
		{
			struct BufferInfo
			{
				long Initialize(Streams::IBuffer *);
			};

			struct BufferPool
			{
				bool Get(Streams::IBuffer * *);
				long Initialize(unsigned long,unsigned char);
				void Put(Microsoft::WRL::ComPtr<Streams::IBuffer>);
				~BufferPool();
			};

			struct CompressFlushOperation
			{
				CompressFlushOperation(Microsoft::WRL::ComPtr<CompressorServer>,CompressorFlushMode,long);
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetResults(unsigned char *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long OnStart();
				virtual long QueryInterface(_GUID const &,void * *);
				virtual long get_Completed(Foundation::IAsyncOperationCompletedHandler<bool> * *);
				virtual long put_Completed(Foundation::IAsyncOperationCompletedHandler<bool> *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual void OnCancel();
				virtual void OnClose();
				virtual ~CompressFlushOperation();
			};

			class CompressWriteOperation
			{
				void Complete(long,unsigned int);
			public:
				CompressWriteOperation(Microsoft::WRL::ComPtr<CompressorServer>,Microsoft::WRL::ComPtr<Streams::IBuffer>,long);
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetResults(unsigned int *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long OnStart();
				virtual long QueryInterface(_GUID const &,void * *);
				virtual long get_Completed(Foundation::IAsyncOperationWithProgressCompletedHandler<unsigned int,unsigned int> * *);
				virtual long get_Progress(Foundation::IAsyncOperationProgressHandler<unsigned int,unsigned int> * *);
				virtual long put_Completed(Foundation::IAsyncOperationWithProgressCompletedHandler<unsigned int,unsigned int> *);
				virtual long put_Progress(Foundation::IAsyncOperationProgressHandler<unsigned int,unsigned int> *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual void OnCancel();
				virtual void OnClose();
				virtual ~CompressWriteOperation();
			};

			struct CompressorFactoryServer
			{
				virtual long ActivateInstance(IInspectable * *);
				virtual long CreateCompressor(Streams::IOutputStream *,ICompressor * *);
				virtual long CreateCompressorEx(Streams::IOutputStream *,CompressAlgorithm,unsigned int,ICompressor * *);
			};

			class CompressorServer
			{
				long CompressAndQueueWrite(void const *,unsigned long);
				long CreateAsyncFlushOrFinish(Foundation::IAsyncOperation<bool> * *,CompressorFlushMode);
				long DrainIOQueue();
				long IssueUnderlyingFlush();
				long IssueUnderlyingWrite(Microsoft::WRL::ComPtr<Streams::IBuffer>);
				long PrepareForOperation();
				long WaitForBuffer(Streams::IBuffer * *);
				long WriteHeader();
				void OnUnderlyingFlushCompleted(Microsoft::WRL::ComPtr<Foundation::IAsyncOperation<bool> >);
				void OnUnderlyingWriteCompleted(Microsoft::WRL::ComPtr<Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int> >,Microsoft::WRL::ComPtr<Streams::IBuffer>);
				void ReturnBufferToPool(Microsoft::WRL::ComPtr<Streams::IBuffer>);
				void SetError(long);
			public:
				CompressorServer();
				long FlushSync(CompressorFlushMode);
				long Initialize(unsigned long,unsigned int,Streams::IOutputStream *);
				long WriteNonBlock(void const *,unsigned int);
				long WriteSync(void const *,unsigned int,CompressWriteOperation *);
				static TrustLevel InternalGetTrustLevel();
				static unsigned short const * InternalGetRuntimeClassName();
				virtual long Close();
				virtual long DetachStream(Streams::IOutputStream * *);
				virtual long FinishAsync(Foundation::IAsyncOperation<bool> * *);
				virtual long FlushAsync(Foundation::IAsyncOperation<bool> * *);
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual long WriteAsync(Streams::IBuffer *,Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int> * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~CompressorServer();
				void OnOperationCancelled();
			};

			struct ConditionLock
			{
				ConditionLock();
				void Release();
				void Sleep(unsigned long);
				void WakeOne();
			};

			class DecompressReadOperation
			{
				void Complete(long,unsigned int);
			public:
				DecompressReadOperation(Microsoft::WRL::ComPtr<DecompressorServer>,Microsoft::WRL::ComPtr<Streams::IBuffer>,unsigned int,Streams::InputStreamOptions,long);
				bool DoWorkFast();
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetResults(Streams::IBuffer * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long OnStart();
				virtual long QueryInterface(_GUID const &,void * *);
				virtual long get_Completed(Foundation::IAsyncOperationWithProgressCompletedHandler<Streams::IBuffer *,unsigned int> * *);
				virtual long get_Progress(Foundation::IAsyncOperationProgressHandler<Streams::IBuffer *,unsigned int> * *);
				virtual long put_Completed(Foundation::IAsyncOperationWithProgressCompletedHandler<Streams::IBuffer *,unsigned int> *);
				virtual long put_Progress(Foundation::IAsyncOperationProgressHandler<Streams::IBuffer *,unsigned int> *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual void OnCancel();
				virtual void OnClose();
				virtual ~DecompressReadOperation();
			};

			struct DecompressorFactoryServer
			{
				virtual long ActivateInstance(IInspectable * *);
				virtual long CreateDecompressor(Streams::IInputStream *,IDecompressor * *);
			};

			class DecompressorServer
			{
				long GetCompressedBuffer(Streams::IBuffer * *,unsigned int *);
				long IssueUnderlyingRead(Microsoft::WRL::ComPtr<Streams::IBuffer>,unsigned int);
				long ReadHeaderAndInitialize();
				long ReadPartialSync(void *,unsigned int,unsigned int *);
				long ReadScratch(unsigned int,void * *);
				void OnUnderlyingReadCompleted(Microsoft::WRL::ComPtr<Foundation::IAsyncOperationWithProgress<Streams::IBuffer *,unsigned int> >);
				void SetError(long);
			public:
				DecompressorServer();
				long Initialize(Streams::IInputStream *);
				long ReadNonBlock(void *,unsigned int,unsigned int *,Streams::InputStreamOptions);
				long ReadSync(void *,unsigned int,unsigned int *,Streams::InputStreamOptions,DecompressReadOperation *);
				static TrustLevel InternalGetTrustLevel();
				static unsigned short const * InternalGetRuntimeClassName();
				virtual long Close();
				virtual long DetachStream(Streams::IInputStream * *);
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual long ReadAsync(Streams::IBuffer *,unsigned int,Streams::InputStreamOptions,Foundation::IAsyncOperationWithProgress<Streams::IBuffer *,unsigned int> * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~DecompressorServer();
				void OnOperationCancelled();
			};

			struct FlushListener
			{
				virtual long Invoke(Foundation::IAsyncOperation<bool> *,ABI::Windows::Foundation::AsyncStatus);
				virtual ~FlushListener();
				void SetCompressor(Microsoft::WRL::ComPtr<CompressorServer>);
			};

			struct ReadListener
			{
				virtual long Invoke(Foundation::IAsyncOperationWithProgress<Streams::IBuffer *,unsigned int> *,ABI::Windows::Foundation::AsyncStatus);
				virtual ~ReadListener();
				void SetDecompressor(Microsoft::WRL::ComPtr<DecompressorServer>);
			};

			namespace Stream
			{
				Microsoft::WRL::Details::CreatorMap const __object_CompressorServer;
				Microsoft::WRL::Details::CreatorMap const __object_DecompressorServer;
				Microsoft::WRL::Details::FactoryCache __objectFactory__CompressorServer;
				Microsoft::WRL::Details::FactoryCache __objectFactory__DecompressorServer;
			};

			class WorkManager
			{
				static void DoWorkTrampoline<CompressFlushOperation>(_TP_CALLBACK_INSTANCE *,void *,_TP_WORK *);
				static void DoWorkTrampoline<CompressWriteOperation>(_TP_CALLBACK_INSTANCE *,void *,_TP_WORK *);
				static void DoWorkTrampoline<DecompressReadOperation>(_TP_CALLBACK_INSTANCE *,void *,_TP_WORK *);
			public:
				long Initialize();
				long PerformWork<CompressFlushOperation>(CompressFlushOperation *);
				long PerformWork<CompressWriteOperation>(CompressWriteOperation *);
				long PerformWork<DecompressReadOperation>(DecompressReadOperation *);
				~WorkManager();
			};

			struct WriteListener
			{
				WriteListener();
				virtual long Invoke(Foundation::IAsyncOperationWithProgress<unsigned int,unsigned int> *,ABI::Windows::Foundation::AsyncStatus);
				virtual ~WriteListener();
				void SetBuffer(Microsoft::WRL::ComPtr<Streams::IBuffer>);
				void SetCompressor(Microsoft::WRL::ComPtr<CompressorServer>);
			};

		};

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

			class DefaultMarshaler
			{
				long _EnsureInit();
			};

			long CBuffer_Allocate(unsigned int,Streams::IBuffer * *);
			long MakeCBuffer<CBuffer_StandardCleanup>(unsigned int,unsigned int,unsigned char *,Streams::CBuffer_StandardCleanup,Streams::IBuffer * *);
		};

	};

};

namespace std
{
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

	struct exception
	{
		exception(exception const &);
		virtual char const * what();
	};

	nothrow_t const std::nothrow;
};

_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
__type_info_node __type_info_root_node;
int InlineIsEqualGUID(_GUID const &,_GUID const &);
unsigned short const * const RuntimeClass_Windows_Foundation_Diagnostics_AsyncCausalityTracer;
unsigned short const * const RuntimeClass_Windows_Storage_Compression_Compressor;
unsigned short const * const RuntimeClass_Windows_Storage_Compression_Decompressor;
void * operator new(unsigned __int64);
void * operator new(unsigned __int64,std::nothrow_t const &);
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
