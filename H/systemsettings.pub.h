namespace ARI
{
	namespace ProcessToken
	{
		struct AutoSysAppId
		{
			long GetAppUserModelId(unsigned int,unsigned int *,unsigned short *);
		};

		namespace SysAppId
		{
			long Open(void *,_TOKEN_SECURITY_ATTRIBUTES_INFORMATION * *,_TOKEN_SECURITY_ATTRIBUTE_V1 const * *,bool *);
		};

	};

	void AutoPtrAriHeapDeallocate<_TOKEN_SECURITY_ATTRIBUTES_INFORMATION>(_TOKEN_SECURITY_ATTRIBUTES_INFORMATION *);
};

struct AgileGitPtr
{
	long CopyLocal(_GUID const &,void * *);
	long Initialize(_GUID const &,IUnknown *);
};

struct AutoStubBias<IUnknown,Windows::Internal::INilDelegate>
{
	~AutoStubBias<IUnknown,Windows::Internal::INilDelegate>();
};

struct AutoStubBias<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler>
{
	~AutoStubBias<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler>();
};

struct AutoStubBias<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<SystemSettings::DataModel::SettingsExtensionApp *> *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<SystemSettings::DataModel::SettingsExtensionApp *> *> >
{
	~AutoStubBias<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<SystemSettings::DataModel::SettingsExtensionApp *> *>,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<SystemSettings::DataModel::SettingsExtensionApp *> *> >();
};

struct AutoStubBias<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool> >
{
	~AutoStubBias<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool> >();
};

struct BiasHelper<IUnknown,Windows::Internal::INilDelegate,1>
{
	static AutoStubBias<IUnknown,Windows::Internal::INilDelegate> CreateBias(IRpcOptions *,IUnknown *,Windows::Internal::INilDelegate *);
};

struct CCoSimpleArray<MAPPEDSETTING,4294967294,CSimpleArrayStandardCompareHelper<MAPPEDSETTING> >
{
	~CCoSimpleArray<MAPPEDSETTING,4294967294,CSimpleArrayStandardCompareHelper<MAPPEDSETTING> >();
};

struct CTCoAllocPolicy
{
	static long Realloc(void *,unsigned long,void *,unsigned __int64,void * *);
};

struct CTSimpleArray<MAPPEDSETTING,4294967294,CTPolicyCoTaskMem<MAPPEDSETTING>,CSimpleArrayStandardCompareHelper<MAPPEDSETTING>,CSimpleArrayStandardMergeHelper<MAPPEDSETTING> >
{
	long Add(MAPPEDSETTING const &,unsigned __int64 *);
};

namespace CallerIdentity
{
	bool IsShellExperienceAppId(unsigned short const *);
	bool g_fRuntimeBrokerProcessIdInitialize;
	long CheckCallerCapability(unsigned short const *,bool *);
	long CheckCapabilityFromProcessHandle(void *,unsigned short const *,bool *);
	long GetCallingProcessAppId(unsigned short * *);
	long GetCallingProcessHandle(unsigned long,RUNTIMEBROKER_CALLERIDENTITY_CHECK,void * *);
	long GetImpersonationTokenFromProcess(void *,unsigned long,void * *);
	long GetProcessAppId(void *,unsigned short * *);
	unsigned long g_dwRuntimeBrokerProcessId;
	void _EnsureRuntimeBrokerPID();
};

namespace Concurrency
{
	struct cancellation_token
	{
		~cancellation_token();
	};

	namespace details
	{
		struct _CancellationTokenState
		{
			void _DeregisterCallback(_CancellationTokenRegistration *);
		};

		struct _ContextCallback
		{
			~_ContextCallback();
		};

		struct _DefaultPPLTaskScheduler
		{
			class _PPLTaskChore
			{
				static void _Callback(void *);
			};

			virtual void schedule(void (*)(void *),void *);
		};

		struct _ExceptionHolder
		{
			~_ExceptionHolder();
		};

		class _RefCounter
		{
		protected:
			virtual void _Destroy();
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

		struct _TaskWorkItemRAIILogger
		{
			~_TaskWorkItemRAIILogger();
		};

		struct _Task_impl<long>
		{
			_Task_impl<long>(_CancellationTokenState *,scheduler_ptr);
			virtual bool _CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<_ExceptionHolder> const &);
			virtual ~_Task_impl<long>();
		};

		struct _Task_impl_base
		{
			bool _CancelWithException(std::exception_ptr const &);
			virtual ~_Task_impl_base();
			void _RegisterCancellation(std::weak_ptr<_Task_impl_base>);
			void _RunTaskContinuations();
			void _ScheduleTask(_TaskProcHandle *,_TaskInliningMode);
		};

	};

	struct scheduler_ptr
	{
		~scheduler_ptr();
	};

	struct task_options
	{
		~task_options();
	};

	std::shared_ptr<Concurrency::scheduler_interface> const & get_ambient_scheduler();
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

		struct ActivationFactory<Implements<FtmBase,IActivationFactory>,Details::Nil,Details::Nil,0>
		{
			virtual long ActivateInstance(IInspectable * *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct ComPtr<CMarshaledInterface::CMarshalStream>
		{
			~ComPtr<CMarshaledInterface::CMarshalStream>();
		};

		struct ComPtr<Details::EventTargetArray>
		{
			~ComPtr<Details::EventTargetArray>();
		};

		struct ComPtr<IAgileObject>
		{
			~ComPtr<IAgileObject>();
		};

		struct ComPtr<IAgileReference>
		{
			~ComPtr<IAgileReference>();
		};

		struct ComPtr<IAsyncInfo>
		{
			~ComPtr<IAsyncInfo>();
		};

		struct ComPtr<IGlobalOptions>
		{
			~ComPtr<IGlobalOptions>();
		};

		struct ComPtr<IInspectable>
		{
			~ComPtr<IInspectable>();
		};

		struct ComPtr<IMrtResourceManager>
		{
			~ComPtr<IMrtResourceManager>();
		};

		struct ComPtr<IRpcOptions>
		{
			~ComPtr<IRpcOptions>();
		};

		struct ComPtr<IThreadRefWithEvent>
		{
			~ComPtr<IThreadRefWithEvent>();
		};

		struct ComPtr<IUnknown>
		{
			ComPtr<IUnknown>();
			~ComPtr<IUnknown>();
		};

		struct ComPtr<SystemSettings::DataModel::CSettingItem>
		{
			~ComPtr<SystemSettings::DataModel::CSettingItem>();
		};

		struct ComPtr<SystemSettings::DataModel::CSettingItemAndInfoFactory>
		{
			~ComPtr<SystemSettings::DataModel::CSettingItemAndInfoFactory>();
		};

		struct ComPtr<SystemSettings::DataModel::ISettingItem>
		{
			~ComPtr<SystemSettings::DataModel::ISettingItem>();
		};

		struct ComPtr<SystemSettings::DataModel::ISettingItemInfo>
		{
			~ComPtr<SystemSettings::DataModel::ISettingItemInfo>();
		};

		struct ComPtr<SystemSettings::DataModel::ISettingItemTelemetry>
		{
			~ComPtr<SystemSettings::DataModel::ISettingItemTelemetry>();
		};

		struct ComPtr<SystemSettings::DataModel::ISettingsAppNotification>
		{
			~ComPtr<SystemSettings::DataModel::ISettingsAppNotification>();
		};

		struct ComPtr<SystemSettings::DataModel::ISettingsExtensionApp>
		{
			~ComPtr<SystemSettings::DataModel::ISettingsExtensionApp>();
		};

		struct ComPtr<SystemSettings::DataModel::ISettingsExtensionAppLink>
		{
			~ComPtr<SystemSettings::DataModel::ISettingsExtensionAppLink>();
		};

		struct ComPtr<SystemSettings::DataModel::SettingsExtensibilityServer>
		{
			~ComPtr<SystemSettings::DataModel::SettingsExtensibilityServer>();
		};

		struct ComPtr<SystemSettings::DataModel::SettingsExtensionAppLinkServer>
		{
			~ComPtr<SystemSettings::DataModel::SettingsExtensionAppLinkServer>();
		};

		struct ComPtr<SystemSettings::DataModel::SettingsExtensionAppServer>
		{
			~ComPtr<SystemSettings::DataModel::SettingsExtensionAppServer>();
		};

		struct ComPtr<Windows::ApplicationModel::Activation::Private::IApplicationActivationStatics>
		{
			~ComPtr<Windows::ApplicationModel::Activation::Private::IApplicationActivationStatics>();
		};

		struct ComPtr<Windows::Foundation::Collections::IIterable<HSTRING__ *> >
		{
			~ComPtr<Windows::Foundation::Collections::IIterable<HSTRING__ *> >();
		};

		struct ComPtr<Windows::Foundation::Collections::IIterable<SystemSettings::DataModel::SettingsExtensionApp *> >
		{
			~ComPtr<Windows::Foundation::Collections::IIterable<SystemSettings::DataModel::SettingsExtensionApp *> >();
		};

		struct ComPtr<Windows::Foundation::Collections::IIterable<SystemSettings::DataModel::SettingsExtensionAppLink *> >
		{
			~ComPtr<Windows::Foundation::Collections::IIterable<SystemSettings::DataModel::SettingsExtensionAppLink *> >();
		};

		struct ComPtr<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *> >
		{
			~ComPtr<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *> >();
		};

		struct ComPtr<Windows::Foundation::Collections::IIterator<HSTRING__ *> >
		{
			~ComPtr<Windows::Foundation::Collections::IIterator<HSTRING__ *> >();
		};

		struct ComPtr<Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *> >
		{
			~ComPtr<Windows::Foundation::Collections::IIterator<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *> >();
		};

		struct ComPtr<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> >
		{
			~ComPtr<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> >();
		};

		struct ComPtr<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> >
		{
			~ComPtr<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> >();
		};

		struct ComPtr<Windows::Foundation::Collections::IPropertySet>
		{
			~ComPtr<Windows::Foundation::Collections::IPropertySet>();
		};

		struct ComPtr<Windows::Foundation::Collections::IVectorView<Windows::Internal::StateRepository::ApplicationExtension *> >
		{
			~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::Internal::StateRepository::ApplicationExtension *> >();
		};

		struct ComPtr<Windows::Foundation::Collections::Internal::AgileVector<SystemSettings::DataModel::SettingsExtensionApp *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<SystemSettings::DataModel::SettingsExtensionApp *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionApp *>,0> >
		{
			~ComPtr<Windows::Foundation::Collections::Internal::AgileVector<SystemSettings::DataModel::SettingsExtensionApp *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<SystemSettings::DataModel::SettingsExtensionApp *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionApp *>,0> >();
		};

		struct ComPtr<Windows::Foundation::Collections::Internal::AgileVector<SystemSettings::DataModel::SettingsExtensionAppLink *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<SystemSettings::DataModel::SettingsExtensionAppLink *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionAppLink *>,0> >
		{
			~ComPtr<Windows::Foundation::Collections::Internal::AgileVector<SystemSettings::DataModel::SettingsExtensionAppLink *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<SystemSettings::DataModel::SettingsExtensionAppLink *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionAppLink *>,0> >();
		};

		struct ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > > >
		{
			~ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > > >();
		};

		struct ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > >::Chunk>
		{
			~ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > >::Chunk>();
		};

		struct ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > >::ChunkView>
		{
			~ComPtr<Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > >::ChunkView>();
		};

		struct ComPtr<Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,0> >
		{
			~ComPtr<Windows::Foundation::Collections::Internal::SimpleKeyValuePair<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,0> >();
		};

		struct ComPtr<Windows::Foundation::Collections::Internal::SimpleVectorIterator<HSTRING__ *,Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0> >,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,XWinRT::IntVersionTag,1> >
		{
			~ComPtr<Windows::Foundation::Collections::Internal::SimpleVectorIterator<HSTRING__ *,Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0> >,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,XWinRT::IntVersionTag,1> >();
		};

		struct ComPtr<Windows::Foundation::Collections::Internal::SimpleVectorIterator<SystemSettings::DataModel::SettingsExtensionApp *,Windows::Foundation::Collections::Internal::Vector<SystemSettings::DataModel::SettingsExtensionApp *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<SystemSettings::DataModel::SettingsExtensionApp *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionApp *>,Windows::Foundation::Collections::Internal::VectorOptions<SystemSettings::DataModel::SettingsExtensionApp *,0,1,0> >,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionApp *>,XWinRT::IntVersionTag,1> >
		{
			~ComPtr<Windows::Foundation::Collections::Internal::SimpleVectorIterator<SystemSettings::DataModel::SettingsExtensionApp *,Windows::Foundation::Collections::Internal::Vector<SystemSettings::DataModel::SettingsExtensionApp *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<SystemSettings::DataModel::SettingsExtensionApp *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionApp *>,Windows::Foundation::Collections::Internal::VectorOptions<SystemSettings::DataModel::SettingsExtensionApp *,0,1,0> >,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionApp *>,XWinRT::IntVersionTag,1> >();
		};

		struct ComPtr<Windows::Foundation::Collections::Internal::SimpleVectorIterator<SystemSettings::DataModel::SettingsExtensionAppLink *,Windows::Foundation::Collections::Internal::Vector<SystemSettings::DataModel::SettingsExtensionAppLink *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<SystemSettings::DataModel::SettingsExtensionAppLink *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionAppLink *>,Windows::Foundation::Collections::Internal::VectorOptions<SystemSettings::DataModel::SettingsExtensionAppLink *,0,1,0> >,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionAppLink *>,XWinRT::IntVersionTag,1> >
		{
			~ComPtr<Windows::Foundation::Collections::Internal::SimpleVectorIterator<SystemSettings::DataModel::SettingsExtensionAppLink *,Windows::Foundation::Collections::Internal::Vector<SystemSettings::DataModel::SettingsExtensionAppLink *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<SystemSettings::DataModel::SettingsExtensionAppLink *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionAppLink *>,Windows::Foundation::Collections::Internal::VectorOptions<SystemSettings::DataModel::SettingsExtensionAppLink *,0,1,0> >,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionAppLink *>,XWinRT::IntVersionTag,1> >();
		};

		struct ComPtr<Windows::Foundation::IAsyncAction>
		{
			~ComPtr<Windows::Foundation::IAsyncAction>();
		};

		struct ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>
		{
			~ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>();
		};

		struct ComPtr<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<SystemSettings::DataModel::SettingsExtensionApp *> *> >
		{
			~ComPtr<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<SystemSettings::DataModel::SettingsExtensionApp *> *> >();
		};

		struct ComPtr<Windows::Foundation::IAsyncOperation<bool> >
		{
			~ComPtr<Windows::Foundation::IAsyncOperation<bool> >();
		};

		struct ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<SystemSettings::DataModel::SettingsExtensionApp *> *> >
		{
			~ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<SystemSettings::DataModel::SettingsExtensionApp *> *> >();
		};

		struct ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<bool> >
		{
			~ComPtr<Windows::Foundation::IAsyncOperationCompletedHandler<bool> >();
		};

		struct ComPtr<Windows::Foundation::IPropertyValue>
		{
			~ComPtr<Windows::Foundation::IPropertyValue>();
		};

		struct ComPtr<Windows::Internal::ComTaskPool::CThread>
		{
			~ComPtr<Windows::Internal::ComTaskPool::CThread>();
		};

		struct ComPtr<Windows::Internal::IAsyncFireCompletion>
		{
			~ComPtr<Windows::Internal::IAsyncFireCompletion>();
		};

		struct ComPtr<Windows::Internal::IComPoolTask>
		{
			~ComPtr<Windows::Internal::IComPoolTask>();
		};

		struct ComPtr<Windows::Internal::INilDelegate>
		{
			~ComPtr<Windows::Internal::INilDelegate>();
		};

		struct ComPtr<Windows::Internal::StateRepository::IApplication>
		{
			~ComPtr<Windows::Internal::StateRepository::IApplication>();
		};

		struct ComPtr<Windows::Internal::StateRepository::IApplicationExtension>
		{
			~ComPtr<Windows::Internal::StateRepository::IApplicationExtension>();
		};

		struct ComPtr<Windows::Internal::StateRepository::IApplicationExtensionStatics>
		{
			~ComPtr<Windows::Internal::StateRepository::IApplicationExtensionStatics>();
		};

		struct ComPtr<Windows::Internal::StateRepository::IPackage>
		{
			~ComPtr<Windows::Internal::StateRepository::IPackage>();
		};

		namespace Details
		{
			struct EventTargetArray
			{
				long RuntimeClassInitialize(unsigned __int64);
				void AddTail(IUnknown *,void *);
			};

			class ImplementsHelper<RuntimeClassFlags<13>,0,Nil,IActivationFactory,Implements<FtmBase,IActivationFactory>,Nil,Nil,Nil>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,0,Nil,SystemSettings::DataModel::ISettingItem,IWeakReferenceSource,SystemSettings::DataModel::ISettingItemTelemetry,SystemSettings::DataModel::ISettingSyncDataAccess,SystemSettings::DataModel::ISettingsAppNotification>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<1>,1,FtmBase>
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			class ImplementsHelper<RuntimeClassFlags<3>,1,Windows::Internal::IAsyncOperationLocal,CloakedIid<Windows::Internal::IAsyncDeferral>,CloakedIid<Windows::Internal::IComPoolTask>,CloakedIid<Windows::Internal::IAsyncFireCompletion> >
			{
			protected:
				long CanCastTo(_GUID const &,void * *,bool *);
			};

			struct MakeAllocator<SystemSettings::DataModel::CSettingItem>
			{
				~MakeAllocator<SystemSettings::DataModel::CSettingItem>();
			};

			struct MakeAllocator<SystemSettings::DataModel::SettingsExtensionAppLinkServer>
			{
				~MakeAllocator<SystemSettings::DataModel::SettingsExtensionAppLinkServer>();
			};

			struct MakeAllocator<SystemSettings::DataModel::SettingsExtensionAppServer>
			{
				~MakeAllocator<SystemSettings::DataModel::SettingsExtensionAppServer>();
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

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,IInspectable>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,SystemSettings::DataModel::ISettingItem,SystemSettings::DataModel::ISettingItemTelemetry,SystemSettings::DataModel::ISettingSyncDataAccess,SystemSettings::DataModel::ISettingsAppNotification>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,SystemSettings::DataModel::ISettingItemInfo,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,SystemSettings::DataModel::ISettingItemInfo,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,SystemSettings::DataModel::ISettingsBroker,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,SystemSettings::DataModel::ISettingsBroker,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,SystemSettings::DataModel::ISettingsDatabase,SystemSettings::DataModel::ISettingsTestDatabase,ISettingDBCollectionMap,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,SystemSettings::DataModel::ISettingsDatabase,SystemSettings::DataModel::ISettingsTestDatabase,ISettingDBCollectionMap,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,SystemSettings::DataModel::ISettingsEnvironmentDatabase,SystemSettings::Environment::IEnvironmentChangedEventHandler,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,SystemSettings::DataModel::ISettingsEnvironmentDatabase,SystemSettings::Environment::IEnvironmentChangedEventHandler,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,SystemSettings::DataModel::ISettingsExtensibility,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,SystemSettings::DataModel::ISettingsExtensibility,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,SystemSettings::DataModel::ISettingsExtensionApp,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,SystemSettings::DataModel::ISettingsExtensionApp,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,SystemSettings::DataModel::ISettingsExtensionAppLink,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,SystemSettings::DataModel::ISettingsExtensionAppLink,FtmBase>();
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

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<SystemSettings::DataModel::SettingsExtensionApp *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<SystemSettings::DataModel::SettingsExtensionApp *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<SystemSettings::DataModel::SettingsExtensionAppLink *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IIterator<SystemSettings::DataModel::SettingsExtensionAppLink *>,FtmBase>();
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
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>,Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *> >
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
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

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<SystemSettings::DataModel::SettingsExtensionApp *>,Windows::Foundation::Collections::IIterable<SystemSettings::DataModel::SettingsExtensionApp *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<SystemSettings::DataModel::SettingsExtensionApp *>,Windows::Foundation::Collections::IIterable<SystemSettings::DataModel::SettingsExtensionApp *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<SystemSettings::DataModel::SettingsExtensionAppLink *>,Windows::Foundation::Collections::IIterable<SystemSettings::DataModel::SettingsExtensionAppLink *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<SystemSettings::DataModel::SettingsExtensionAppLink *>,Windows::Foundation::Collections::IIterable<SystemSettings::DataModel::SettingsExtensionAppLink *>,FtmBase>();
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

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<SystemSettings::DataModel::SettingsExtensionApp *>,Windows::Foundation::Collections::IIterable<SystemSettings::DataModel::SettingsExtensionApp *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<SystemSettings::DataModel::SettingsExtensionApp *>,Windows::Foundation::Collections::IIterable<SystemSettings::DataModel::SettingsExtensionApp *>,FtmBase>();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<SystemSettings::DataModel::SettingsExtensionAppLink *>,Windows::Foundation::Collections::IIterable<SystemSettings::DataModel::SettingsExtensionAppLink *>,FtmBase>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVectorView<SystemSettings::DataModel::SettingsExtensionAppLink *>,Windows::Foundation::Collections::IIterable<SystemSettings::DataModel::SettingsExtensionAppLink *>,FtmBase>();
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

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct WeakReferenceImpl
			{
				virtual long Resolve(_GUID const &,IInspectable * *);
			};

			Details::WeakReferenceImpl * CreateWeakReference(IUnknown *);
			bool TerminateMap(Details::ModuleBase *,unsigned short const *,bool);
			long CreateActivationFactory<SimpleSealedActivationFactory<SystemSettings::DataModel::CSettingsDatabase,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<SimpleSealedActivationFactory<SystemSettings::DataModel::SettingsBrokerServer,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<SimpleSealedActivationFactory<SystemSettings::DataModel::SettingsExtensibilityServer,0> >(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long CreateActivationFactory<SystemSettings::DataModel::SettingsEnvironmentDatabaseFactory>(unsigned int *,Details::CreatorMap const *,_GUID const &,IUnknown * *);
			long GetCacheEntry(Details::ModuleBase *,unsigned int *,_GUID const &,Details::CreatorMap const *,IUnknown * *);
			long MakeAndInitialize<EventTargetArray,EventTargetArray,unsigned __int64 &>(Details::EventTargetArray * *,unsigned __int64 &);
			void RaiseException(long,unsigned long);
		};

		struct ErrorPropagationPolicyTraits<-1>
		{
			static long FireCompletionErrorPropagationPolicyFilter(long,IUnknown *,void *);
			static long FireProgressErrorPropagationPolicyFilter(long,IUnknown *,void *);
		};

		class EventSource<SystemSettings::DataModel::ISettingsEnvironmentChangedHandler,InvokeModeOptions<-2> >
		{
			long AddInternal(SystemSettings::DataModel::ISettingsEnvironmentChangedHandler *,void *,EventRegistrationToken *);
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

		struct RuntimeClass<SystemSettings::DataModel::ISettingItem,SystemSettings::DataModel::ISettingItemTelemetry,SystemSettings::DataModel::ISettingSyncDataAccess,SystemSettings::DataModel::ISettingsAppNotification>
		{
			virtual ~RuntimeClass<SystemSettings::DataModel::ISettingItem,SystemSettings::DataModel::ISettingItemTelemetry,SystemSettings::DataModel::ISettingSyncDataAccess,SystemSettings::DataModel::ISettingsAppNotification>();
		};

		struct SimpleActivationFactory<SystemSettings::DataModel::CSettingsDatabase,0>
		{
			virtual long ActivateInstance(IInspectable * *);
		};

		struct SimpleActivationFactory<SystemSettings::DataModel::SettingsBrokerServer,0>
		{
			virtual long ActivateInstance(IInspectable * *);
		};

		struct SimpleActivationFactory<SystemSettings::DataModel::SettingsExtensibilityServer,0>
		{
			virtual long ActivateInstance(IInspectable * *);
		};

		namespace Wrappers
		{
			struct HString
			{
				~HString();
			};

			struct HStringReference
			{
				HStringReference<unsigned short const *>(unsigned short const * const &,Details::Dummy);
				~HStringReference();
			};

			class HandleT<Settings::Internal::HandleTraits::GenericHandleTraits>
			{
			protected:
				virtual bool InternalClose();
			public:
				~HandleT<Settings::Internal::HandleTraits::GenericHandleTraits>();
			};

			class HandleT<Settings::Internal::HandleTraits::LibraryHandleTraits>
			{
			protected:
				virtual bool InternalClose();
			public:
				~HandleT<Settings::Internal::HandleTraits::LibraryHandleTraits>();
			};

		};

		Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics * gCausality;
		_RTL_RUN_ONCE gCausalityInitOnce;
	};

};

struct RpcOptionsHelper
{
	static long GetRpcOptions(IUnknown *,IRpcOptions * *);
};

namespace Settings
{
	namespace Internal
	{
		struct CoImpersonateClientWrapper
		{
			~CoImpersonateClientWrapper();
		};

	};

};

struct SettingsDataModelTelemetry
{
	static void FallbackTelemetryCallback(bool,wil::FailureInfo const &);
};

namespace SystemSettings
{
	namespace DataModel
	{
		class AppAccessCheck
		{
			static unsigned short const * const * const s_allowedAppSids;
		public:
			static long IsCallerInAllowedAppList();
		};

		struct CRegistrySettingData
		{
			long Initialize(HSTRING__ *);
		};

		struct CRegistrySettingIdList
		{
			long Initialize();
		};

		class CSettingItem
		{
			long _EnsureHandlerCreated();
			static unsigned long s_releaseHandlerContext;
		public:
			CSettingItem(ISettingItemInfo *);
			virtual long GetCollectionId(HSTRING__ * *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetProperty(HSTRING__ *,IInspectable * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetSyncType(SyncType *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long GetValue(HSTRING__ *,IInspectable * *);
			virtual long Invoke(Windows::UI::Core::ICoreWindow *,Windows::Foundation::Rect);
			virtual long OnSettingsAppResuming();
			virtual long OnSettingsAppSuspending();
			virtual long QueryInterface(_GUID const &,void * *);
			virtual long SetPageSessionId(_GUID);
			virtual long SetProperty(HSTRING__ *,IInspectable *);
			virtual long SetValue(HSTRING__ *,IInspectable *);
			virtual long add_SettingChanged(Windows::Foundation::ITypedEventHandler<IInspectable *,HSTRING__ *> *,EventRegistrationToken *);
			virtual long get_Description(HSTRING__ * *);
			virtual long get_Id(HSTRING__ * *);
			virtual long get_IsApplicable(unsigned char *);
			virtual long get_IsEnabled(unsigned char *);
			virtual long get_IsSetByGroupPolicy(unsigned char *);
			virtual long get_IsUpdating(unsigned char *);
			virtual long get_PageSessionId(_GUID *);
			virtual long get_Type(SettingType *);
			virtual long remove_SettingChanged(EventRegistrationToken);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~CSettingItem();
		};

		struct CSettingItemAndInfoFactory
		{
			long CreateSetting(ISettingItem * *);
		};

		struct CSettingItemInfoInternal
		{
			virtual DescriptionData const * pDescriptionData();
			virtual SettingType Type();
			virtual SyncType SyncType();
			virtual long CreateHandler(ISettingItem * *);
			virtual unsigned short const * CollectionID();
			virtual unsigned short const * Id();
		};

		struct CSettingItemInfoRegistry
		{
			virtual DescriptionData const * pDescriptionData();
			virtual SettingType Type();
			virtual SyncType SyncType();
			virtual long CreateHandler(ISettingItem * *);
			virtual unsigned short const * CollectionID();
			virtual unsigned short const * Id();
		};

		class CSettingsDatabase
		{
			long _EnsureRegistrySettingIdsAreMappped();
			long _EnsureSettingIdInMap(HSTRING__ *,CSettingItemAndInfoFactory * *);
			long _LookupMap(HSTRING__ *,IInspectable * *);
		public:
			long RuntimeClassInitialize();
			static TrustLevel InternalGetTrustLevel();
			static unsigned short const * InternalGetRuntimeClassName();
			virtual long GetCollectionMappedSettings(HSTRING__ *,MAPPEDSETTING * *,unsigned int *);
			virtual long GetFirstSettingId(HSTRING__ * *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetNextSettingId(HSTRING__ * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetSetting(HSTRING__ *,ISettingItem * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		class HangGuard
		{
			static unsigned int s_timeout;
			void TerminateOnHangDetected();
		public:
			~HangGuard();
		};

		struct SettingsBrokerServer
		{
			static TrustLevel InternalGetTrustLevel();
			static unsigned short const * InternalGetRuntimeClassName();
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetSettingsDatabase(IInspectable * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		class SettingsEnvironmentDatabaseFactory
		{
			long TryGetCShellSettingsEnvironment(IInspectable * *);
		public:
			virtual long ActivateInstance(IInspectable * *);
		};

		class SettingsEnvironmentDatabaseServer
		{
			long _TryGetDesktopSettingsEnvironment(long (**)(Environment::SettingsEnvironment * *));
			virtual long Invoke(unsigned short const *);
		public:
			long RuntimeClassInitialize();
			static TrustLevel InternalGetTrustLevel();
			static unsigned short const * InternalGetRuntimeClassName();
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long IsSettingAccessible(HSTRING__ *,unsigned char *);
			virtual long IsSettingApplicable(HSTRING__ *,unsigned char *);
			virtual long IsSettingTextDynamic(HSTRING__ *,unsigned char *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual long add_SettingsEnvironmentChanged(ISettingsEnvironmentChangedHandler *,EventRegistrationToken *);
			virtual long remove_SettingsEnvironmentChanged(EventRegistrationToken);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
			virtual ~SettingsEnvironmentDatabaseServer();
		};

		class SettingsExtensibilityServer
		{
			struct ResourceLookupInfo
			{
				~ResourceLookupInfo();
			};

			long CalculateExtensionAppHash(unsigned __int64 *);
			long ForEachInstalledSettingsApp(std::function<long (Windows::Internal::StateRepository::IApplicationExtension *)>);
			long ForEachItem(IInspectable *,std::function<long (Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> *)>);
			long GetChildMapFromMap(Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> *,unsigned short const *,Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> * *);
			long GetExtensionAppsFilteredAsync(SettingsExtensibilityServer::FilterBy,Windows::Foundation::Collections::IIterable<HSTRING__ *> *,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<SettingsExtensionApp *> *> * *);
			long GetLocalizedStringFromMap(Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> *,SettingsExtensibilityServer::ResourceLookupInfo const &,unsigned short const *,HSTRING__ * *);
			long GetResourceLookupInfo(Windows::Internal::StateRepository::IApplication *,SettingsExtensibilityServer::ResourceLookupInfo &);
			long GetSettingsAppLinkCollection(Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> *,SettingsExtensibilityServer::ResourceLookupInfo const &,HSTRING__ *,std::vector<Microsoft::WRL::ComPtr<ISettingsExtensionAppLink>,std::allocator<Microsoft::WRL::ComPtr<ISettingsExtensionAppLink> > > &);
			long GetSettingsAppPlacement(Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> *,HSTRING__ * *,HSTRING__ * *);
			long GetSettingsAppSearchTerms(Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> *,SettingsExtensibilityServer::ResourceLookupInfo const &,std::vector<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > &);
			long GetSettingsExtensionApp(Windows::Internal::StateRepository::IApplicationExtension *,ISettingsExtensionApp * *);
			long GetStringFromMap(Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> *,unsigned short const *,HSTRING__ * *);
		public:
			long RuntimeClassInitialize();
			static TrustLevel InternalGetTrustLevel();
			static unsigned short const * InternalGetRuntimeClassName();
			virtual long AnyInstalledCategoryAppsAsync(Windows::Foundation::IAsyncOperation<bool> * *);
			virtual long CheckIfInstalledExtensionAppsChangedAsync(Windows::Foundation::IAsyncOperation<bool> * *);
			virtual long GetExtensionAppsAsync(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<SettingsExtensionApp *> *> * *);
			virtual long GetExtensionAppsForPageAsync(Windows::Foundation::Collections::IIterable<HSTRING__ *> *,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<SettingsExtensionApp *> *> * *);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual long SnapshotInstalledExtensionAppsAsync(Windows::Foundation::IAsyncAction * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct SettingsExtensionAppLinkServer
		{
			SettingsExtensionAppLinkServer();
			long RuntimeClassInitialize(unsigned short const *,unsigned short const *,unsigned short const *);
			virtual long ActivateApp();
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual long get_ActivationParameters(HSTRING__ * *);
			virtual long get_Aumid(HSTRING__ * *);
			virtual long get_DisplayName(HSTRING__ * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		struct SettingsExtensionAppServer
		{
			SettingsExtensionAppServer();
			long RuntimeClassInitialize(unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *,std::vector<Microsoft::WRL::ComPtr<ISettingsExtensionAppLink>,std::allocator<Microsoft::WRL::ComPtr<ISettingsExtensionAppLink> > > const &,std::vector<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> >,std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > const &);
			virtual long GetIids(unsigned long *,_GUID * *);
			virtual long GetRuntimeClassName(HSTRING__ * *);
			virtual long GetTrustLevel(TrustLevel *);
			virtual long QueryInterface(_GUID const &,void * *);
			virtual long get_AppLinks(Windows::Foundation::Collections::IVectorView<SettingsExtensionAppLink *> * *);
			virtual long get_AssociatedPageUri(HSTRING__ * *);
			virtual long get_Aumid(HSTRING__ * *);
			virtual long get_DisplayName(HSTRING__ * *);
			virtual long get_SearchTerms(Windows::Foundation::Collections::IVectorView<HSTRING__ *> * *);
			virtual long get_SettingCategory(HSTRING__ * *);
			virtual unsigned long AddRef();
			virtual unsigned long Release();
		};

		long GetRegString(HKEY__ *,unsigned short const *,unsigned short * *);
		long GetSettingTypeFromString(unsigned short const *,DataModel::SettingType *);
		long GetSyncTypeFromString(unsigned short const *,DataModel::SyncType *);
	};

};

namespace Windows
{
	namespace Foundation
	{
		namespace Collections
		{
			namespace Detail
			{
				void _Cleanup<SystemSettings::DataModel::ISettingsExtensionApp,unsigned int>(SystemSettings::DataModel::ISettingsExtensionApp * * const,unsigned int);
				void _Cleanup<SystemSettings::DataModel::ISettingsExtensionAppLink,unsigned int>(SystemSettings::DataModel::ISettingsExtensionAppLink * * const,unsigned int);
			};

			struct IIterator_impl<HSTRING__ *,1>
			{
				virtual long GetMany(unsigned int,HSTRING__ * *,unsigned int *);
			};

			struct IIterator_impl<IKeyValuePair<HSTRING__ *,IInspectable *> *,1>
			{
				virtual long GetMany(unsigned int,IKeyValuePair<HSTRING__ *,IInspectable *> * *,unsigned int *);
			};

			struct IIterator_impl<Internal::AggregateType<SystemSettings::DataModel::SettingsExtensionApp *,SystemSettings::DataModel::ISettingsExtensionApp *>,1>
			{
				virtual long GetMany(unsigned int,SystemSettings::DataModel::ISettingsExtensionApp * *,unsigned int *);
			};

			struct IIterator_impl<Internal::AggregateType<SystemSettings::DataModel::SettingsExtensionAppLink *,SystemSettings::DataModel::ISettingsExtensionAppLink *>,1>
			{
				virtual long GetMany(unsigned int,SystemSettings::DataModel::ISettingsExtensionAppLink * *,unsigned int *);
			};

			struct IVectorView_impl<HSTRING__ *,1>
			{
				virtual long GetMany(unsigned int,unsigned int,HSTRING__ * *,unsigned int *);
			};

			struct IVectorView_impl<Internal::AggregateType<SystemSettings::DataModel::SettingsExtensionApp *,SystemSettings::DataModel::ISettingsExtensionApp *>,1>
			{
				virtual long GetMany(unsigned int,unsigned int,SystemSettings::DataModel::ISettingsExtensionApp * *,unsigned int *);
			};

			struct IVectorView_impl<Internal::AggregateType<SystemSettings::DataModel::SettingsExtensionAppLink *,SystemSettings::DataModel::ISettingsExtensionAppLink *>,1>
			{
				virtual long GetMany(unsigned int,unsigned int,SystemSettings::DataModel::ISettingsExtensionAppLink * *,unsigned int *);
			};

			struct IVector_impl<HSTRING__ *,1>
			{
				virtual long GetMany(unsigned int,unsigned int,HSTRING__ * *,unsigned int *);
				virtual long ReplaceAll(unsigned int,HSTRING__ * *);
			};

			struct IVector_impl<Internal::AggregateType<SystemSettings::DataModel::SettingsExtensionApp *,SystemSettings::DataModel::ISettingsExtensionApp *>,1>
			{
				virtual long GetMany(unsigned int,unsigned int,SystemSettings::DataModel::ISettingsExtensionApp * *,unsigned int *);
				virtual long ReplaceAll(unsigned int,SystemSettings::DataModel::ISettingsExtensionApp * *);
			};

			struct IVector_impl<Internal::AggregateType<SystemSettings::DataModel::SettingsExtensionAppLink *,SystemSettings::DataModel::ISettingsExtensionAppLink *>,1>
			{
				virtual long GetMany(unsigned int,unsigned int,SystemSettings::DataModel::ISettingsExtensionAppLink * *,unsigned int *);
				virtual long ReplaceAll(unsigned int,SystemSettings::DataModel::ISettingsExtensionAppLink * *);
			};

			namespace Internal
			{
				class HashMap<HSTRING__ *,IInspectable *,DefaultHash<HSTRING__ *>,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<IInspectable *>,DefaultHashMapOptions<HSTRING__ *,IInspectable *,DefaultLifetimeTraits<HSTRING__ *> > >
				{
					struct Iterator
					{
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

					struct View
					{
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

					static void _Free(XWinRT::XHashMap<HSTRING__ *,IInspectable *,HashMap<HSTRING__ *,IInspectable *,DefaultHash<HSTRING__ *>,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<IInspectable *>,DefaultHashMapOptions<HSTRING__ *,IInspectable *,DefaultLifetimeTraits<HSTRING__ *> > >::KeyTraits,XWinRT::CElementTraits<IInspectable *> > *);
					void _EraseAll(XWinRT::XHashMap<HSTRING__ *,IInspectable *,HashMap<HSTRING__ *,IInspectable *,DefaultHash<HSTRING__ *>,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<IInspectable *>,DefaultHashMapOptions<HSTRING__ *,IInspectable *,DefaultLifetimeTraits<HSTRING__ *> > >::KeyTraits,XWinRT::CElementTraits<IInspectable *> > *);
				public:
					HashMap<HSTRING__ *,IInspectable *,DefaultHash<HSTRING__ *>,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<IInspectable *>,DefaultHashMapOptions<HSTRING__ *,IInspectable *,DefaultLifetimeTraits<HSTRING__ *> > >(DefaultHash<HSTRING__ *> const &,DefaultEqualityPredicate<HSTRING__ *> const &,HashMap<HSTRING__ *,IInspectable *,DefaultHash<HSTRING__ *>,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<IInspectable *>,DefaultHashMapOptions<HSTRING__ *,IInspectable *,DefaultLifetimeTraits<HSTRING__ *> > >::permission);
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
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct HashMapOptions<HSTRING__ *,IInspectable *,DefaultLifetimeTraits<HSTRING__ *>,0,0,0>
				{
					static long RaiseEvent(...);
				};

				class NaiveSplitView<HSTRING__ *,IInspectable *,DefaultEqualityPredicate<HSTRING__ *>,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<IInspectable *>,DefaultHashMapOptions<HSTRING__ *,IInspectable *,DefaultLifetimeTraits<HSTRING__ *> > >
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

					long Force();
					long Initialize(IMapView<HSTRING__ *,IInspectable *> *);
				public:
					static long Split(IMapView<HSTRING__ *,IInspectable *> *,IMapView<HSTRING__ *,IInspectable *> * *,IMapView<HSTRING__ *,IInspectable *> * *);
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

				struct SimpleKeyValuePair<HSTRING__ *,IInspectable *,DefaultLifetimeTraits<HSTRING__ *>,DefaultLifetimeTraits<IInspectable *>,0>
				{
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

				struct SimpleVectorIterator<SystemSettings::DataModel::SettingsExtensionApp *,Vector<SystemSettings::DataModel::SettingsExtensionApp *,DefaultEqualityPredicate<SystemSettings::DataModel::SettingsExtensionApp *>,DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionApp *>,VectorOptions<SystemSettings::DataModel::SettingsExtensionApp *,0,1,0> >,DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionApp *>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorIterator<SystemSettings::DataModel::SettingsExtensionApp *,Vector<SystemSettings::DataModel::SettingsExtensionApp *,DefaultEqualityPredicate<SystemSettings::DataModel::SettingsExtensionApp *>,DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionApp *>,VectorOptions<SystemSettings::DataModel::SettingsExtensionApp *,0,1,0> >,DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionApp *>,XWinRT::IntVersionTag,1>(Vector<SystemSettings::DataModel::SettingsExtensionApp *,DefaultEqualityPredicate<SystemSettings::DataModel::SettingsExtensionApp *>,DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionApp *>,VectorOptions<SystemSettings::DataModel::SettingsExtensionApp *,0,1,0> > *,SimpleVectorIterator<SystemSettings::DataModel::SettingsExtensionApp *,Vector<SystemSettings::DataModel::SettingsExtensionApp *,DefaultEqualityPredicate<SystemSettings::DataModel::SettingsExtensionApp *>,DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionApp *>,VectorOptions<SystemSettings::DataModel::SettingsExtensionApp *,0,1,0> >,DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionApp *>,XWinRT::IntVersionTag,1>::permission);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,SystemSettings::DataModel::ISettingsExtensionApp * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long MoveNext(unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Current(SystemSettings::DataModel::ISettingsExtensionApp * *);
					virtual long get_HasCurrent(unsigned char *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct SimpleVectorIterator<SystemSettings::DataModel::SettingsExtensionAppLink *,Vector<SystemSettings::DataModel::SettingsExtensionAppLink *,DefaultEqualityPredicate<SystemSettings::DataModel::SettingsExtensionAppLink *>,DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionAppLink *>,VectorOptions<SystemSettings::DataModel::SettingsExtensionAppLink *,0,1,0> >,DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionAppLink *>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorIterator<SystemSettings::DataModel::SettingsExtensionAppLink *,Vector<SystemSettings::DataModel::SettingsExtensionAppLink *,DefaultEqualityPredicate<SystemSettings::DataModel::SettingsExtensionAppLink *>,DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionAppLink *>,VectorOptions<SystemSettings::DataModel::SettingsExtensionAppLink *,0,1,0> >,DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionAppLink *>,XWinRT::IntVersionTag,1>(Vector<SystemSettings::DataModel::SettingsExtensionAppLink *,DefaultEqualityPredicate<SystemSettings::DataModel::SettingsExtensionAppLink *>,DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionAppLink *>,VectorOptions<SystemSettings::DataModel::SettingsExtensionAppLink *,0,1,0> > *,SimpleVectorIterator<SystemSettings::DataModel::SettingsExtensionAppLink *,Vector<SystemSettings::DataModel::SettingsExtensionAppLink *,DefaultEqualityPredicate<SystemSettings::DataModel::SettingsExtensionAppLink *>,DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionAppLink *>,VectorOptions<SystemSettings::DataModel::SettingsExtensionAppLink *,0,1,0> >,DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionAppLink *>,XWinRT::IntVersionTag,1>::permission);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,SystemSettings::DataModel::ISettingsExtensionAppLink * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long MoveNext(unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Current(SystemSettings::DataModel::ISettingsExtensionAppLink * *);
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

				struct SimpleVectorView<SystemSettings::DataModel::SettingsExtensionApp *,Vector<SystemSettings::DataModel::SettingsExtensionApp *,DefaultEqualityPredicate<SystemSettings::DataModel::SettingsExtensionApp *>,DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionApp *>,VectorOptions<SystemSettings::DataModel::SettingsExtensionApp *,0,1,0> >,DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionApp *>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorView<SystemSettings::DataModel::SettingsExtensionApp *,Vector<SystemSettings::DataModel::SettingsExtensionApp *,DefaultEqualityPredicate<SystemSettings::DataModel::SettingsExtensionApp *>,DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionApp *>,VectorOptions<SystemSettings::DataModel::SettingsExtensionApp *,0,1,0> >,DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionApp *>,XWinRT::IntVersionTag,1>(Vector<SystemSettings::DataModel::SettingsExtensionApp *,DefaultEqualityPredicate<SystemSettings::DataModel::SettingsExtensionApp *>,DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionApp *>,VectorOptions<SystemSettings::DataModel::SettingsExtensionApp *,0,1,0> > *,SimpleVectorView<SystemSettings::DataModel::SettingsExtensionApp *,Vector<SystemSettings::DataModel::SettingsExtensionApp *,DefaultEqualityPredicate<SystemSettings::DataModel::SettingsExtensionApp *>,DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionApp *>,VectorOptions<SystemSettings::DataModel::SettingsExtensionApp *,0,1,0> >,DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionApp *>,XWinRT::IntVersionTag,1>::permission);
					virtual long First(IIterator<SystemSettings::DataModel::SettingsExtensionApp *> * *);
					virtual long GetAt(unsigned int,SystemSettings::DataModel::ISettingsExtensionApp * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,SystemSettings::DataModel::ISettingsExtensionApp * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long IndexOf(SystemSettings::DataModel::ISettingsExtensionApp *,unsigned int *,unsigned char *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct SimpleVectorView<SystemSettings::DataModel::SettingsExtensionAppLink *,Vector<SystemSettings::DataModel::SettingsExtensionAppLink *,DefaultEqualityPredicate<SystemSettings::DataModel::SettingsExtensionAppLink *>,DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionAppLink *>,VectorOptions<SystemSettings::DataModel::SettingsExtensionAppLink *,0,1,0> >,DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionAppLink *>,XWinRT::IntVersionTag,1>
				{
					SimpleVectorView<SystemSettings::DataModel::SettingsExtensionAppLink *,Vector<SystemSettings::DataModel::SettingsExtensionAppLink *,DefaultEqualityPredicate<SystemSettings::DataModel::SettingsExtensionAppLink *>,DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionAppLink *>,VectorOptions<SystemSettings::DataModel::SettingsExtensionAppLink *,0,1,0> >,DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionAppLink *>,XWinRT::IntVersionTag,1>(Vector<SystemSettings::DataModel::SettingsExtensionAppLink *,DefaultEqualityPredicate<SystemSettings::DataModel::SettingsExtensionAppLink *>,DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionAppLink *>,VectorOptions<SystemSettings::DataModel::SettingsExtensionAppLink *,0,1,0> > *,SimpleVectorView<SystemSettings::DataModel::SettingsExtensionAppLink *,Vector<SystemSettings::DataModel::SettingsExtensionAppLink *,DefaultEqualityPredicate<SystemSettings::DataModel::SettingsExtensionAppLink *>,DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionAppLink *>,VectorOptions<SystemSettings::DataModel::SettingsExtensionAppLink *,0,1,0> >,DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionAppLink *>,XWinRT::IntVersionTag,1>::permission);
					virtual long First(IIterator<SystemSettings::DataModel::SettingsExtensionAppLink *> * *);
					virtual long GetAt(unsigned int,SystemSettings::DataModel::ISettingsExtensionAppLink * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,SystemSettings::DataModel::ISettingsExtensionAppLink * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long IndexOf(SystemSettings::DataModel::ISettingsExtensionAppLink *,unsigned int *,unsigned char *);
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

				class Vector<SystemSettings::DataModel::SettingsExtensionApp *,DefaultEqualityPredicate<SystemSettings::DataModel::SettingsExtensionApp *>,DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionApp *>,VectorOptions<SystemSettings::DataModel::SettingsExtensionApp *,0,1,0> >
				{
					long IndexOfInternal(XWinRT::detail::GitStorageType<SystemSettings::DataModel::ISettingsExtensionApp> *,unsigned int,SystemSettings::DataModel::ISettingsExtensionApp *,unsigned int *,unsigned char *);
					long InsertAtInternal(unsigned int,SystemSettings::DataModel::ISettingsExtensionApp *,bool);
					long RemoveAtInternal(unsigned int,bool);
					long ResizeStorage(unsigned int);
					void _EraseAll(XWinRT::detail::GitStorageType<SystemSettings::DataModel::ISettingsExtensionApp> * *,unsigned int *);
				public:
					virtual long Append(SystemSettings::DataModel::ISettingsExtensionApp *);
					virtual long Clear();
					virtual long First(IIterator<SystemSettings::DataModel::SettingsExtensionApp *> * *);
					virtual long GetAt(unsigned int,SystemSettings::DataModel::ISettingsExtensionApp * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,SystemSettings::DataModel::ISettingsExtensionApp * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long GetView(IVectorView<SystemSettings::DataModel::SettingsExtensionApp *> * *);
					virtual long IndexOf(SystemSettings::DataModel::ISettingsExtensionApp *,unsigned int *,unsigned char *);
					virtual long InsertAt(unsigned int,SystemSettings::DataModel::ISettingsExtensionApp *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long RemoveAt(unsigned int);
					virtual long RemoveAtEnd();
					virtual long ReplaceAll(unsigned int,SystemSettings::DataModel::ISettingsExtensionApp * *);
					virtual long SetAt(unsigned int,SystemSettings::DataModel::ISettingsExtensionApp *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				class Vector<SystemSettings::DataModel::SettingsExtensionAppLink *,DefaultEqualityPredicate<SystemSettings::DataModel::SettingsExtensionAppLink *>,DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionAppLink *>,VectorOptions<SystemSettings::DataModel::SettingsExtensionAppLink *,0,1,0> >
				{
					long IndexOfInternal(XWinRT::detail::GitStorageType<SystemSettings::DataModel::ISettingsExtensionAppLink> *,unsigned int,SystemSettings::DataModel::ISettingsExtensionAppLink *,unsigned int *,unsigned char *);
					long InsertAtInternal(unsigned int,SystemSettings::DataModel::ISettingsExtensionAppLink *,bool);
					long RemoveAtInternal(unsigned int,bool);
					long ResizeStorage(unsigned int);
					void _EraseAll(XWinRT::detail::GitStorageType<SystemSettings::DataModel::ISettingsExtensionAppLink> * *,unsigned int *);
				public:
					virtual long Append(SystemSettings::DataModel::ISettingsExtensionAppLink *);
					virtual long Clear();
					virtual long First(IIterator<SystemSettings::DataModel::SettingsExtensionAppLink *> * *);
					virtual long GetAt(unsigned int,SystemSettings::DataModel::ISettingsExtensionAppLink * *);
					virtual long GetIids(unsigned long *,_GUID * *);
					virtual long GetMany(unsigned int,unsigned int,SystemSettings::DataModel::ISettingsExtensionAppLink * *,unsigned int *);
					virtual long GetRuntimeClassName(HSTRING__ * *);
					virtual long GetTrustLevel(TrustLevel *);
					virtual long GetView(IVectorView<SystemSettings::DataModel::SettingsExtensionAppLink *> * *);
					virtual long IndexOf(SystemSettings::DataModel::ISettingsExtensionAppLink *,unsigned int *,unsigned char *);
					virtual long InsertAt(unsigned int,SystemSettings::DataModel::ISettingsExtensionAppLink *);
					virtual long QueryInterface(_GUID const &,void * *);
					virtual long RemoveAt(unsigned int);
					virtual long RemoveAtEnd();
					virtual long ReplaceAll(unsigned int,SystemSettings::DataModel::ISettingsExtensionAppLink * *);
					virtual long SetAt(unsigned int,SystemSettings::DataModel::ISettingsExtensionAppLink *);
					virtual long get_Size(unsigned int *);
					virtual unsigned long AddRef();
					virtual unsigned long Release();
				};

				struct VectorOptions<HSTRING__ *,0,1,0>
				{
					static long RaiseEvent(...);
				};

				struct VectorOptions<SystemSettings::DataModel::SettingsExtensionApp *,0,1,0>
				{
					static long RaiseEvent(...);
				};

				struct VectorOptions<SystemSettings::DataModel::SettingsExtensionAppLink *,0,1,0>
				{
					static long RaiseEvent(...);
				};

			};

		};

	};

	namespace Internal
	{
		struct CMarshaledInterfaceResult<Foundation::Collections::IVectorView<SystemSettings::DataModel::SettingsExtensionApp *> >
		{
			long Get(Foundation::Collections::IVectorView<SystemSettings::DataModel::SettingsExtensionApp *> * *);
		};

		class ComTaskPool
		{
			struct CGitLifetimeExtension
			{
				void Init();
			};

			struct CRemoteTask
			{
				long RuntimeClassInitialize(IComPoolTask *);
				virtual void Run();
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

			struct TaskList
			{
				void Clear();
			};

			static ComTaskPool::CThread * s_pThreadList;
			static ComTaskPool::SThreadData tls_threadData;
			static ComTaskPool::TaskList s_taskFloodingList;
			static _RTL_SRWLOCK s_rwLock;
			static bool s_TryRemoveThread(ComTaskPool::CThread *,bool);
			static bool volatile s_fCanReuseThreads;
			static bool volatile s_fWaitForMoreTasks;
			static long s_AddThreadAffineWrapper(IComPoolTask *,IComPoolTask * *);
			static long s_GetTaskPoolTlsSlot(unsigned long *);
			static long s_QueuePoolTask(TaskApartment,TaskOptions,unsigned long,IComPoolTask *);
			static long s_QueuePoolTaskUnderLock(void *,TaskApartment,TaskOptions,unsigned long,IComPoolTask *,ComTaskPool::TaskList *,ComTaskPool::CThread * *);
			static unsigned long volatile s_cThreadsStarting;
			static unsigned long volatile s_dwThreadIdReuse;
			static unsigned long volatile s_dwUniqueCallingContext;
			static void * s_hEventCache;
			static void s_AttachAndRecoverTask(ComTaskPool::TaskData *);
		public:
			static long RunTask(TaskApartment,TaskOptions,unsigned long,unsigned long,IComPoolTask *,IUnknown * *);
		};

		struct ComTaskPoolHandler
		{
			long FireCompletion(IAsyncFireCompletion *);
		};

		namespace Details
		{
			struct Git
			{
				long Acquire();
			};

			Details::Git _git;
		};

		struct GitPtrSupportsAgile<INilDelegate>
		{
			long CopyLocal<INilDelegate>(INilDelegate * *);
			long CopyLocal<INilDelegate>(Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<INilDelegate> >);
			long Initialize<INilDelegate>(INilDelegate *);
		};

		class NativeString<CoTaskMemPolicy<unsigned short> >
		{
			long _EnsureCapacity(unsigned __int64);
		public:
			long Initialize(unsigned short const *);
			~NativeString<CoTaskMemPolicy<unsigned short> >();
		};

		_RTL_RUN_ONCE s_bIsEnvironmentCheckDone;
	};

};

namespace XWinRT
{
	struct AutoValue<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> >
	{
		~AutoValue<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> >();
	};

	struct AutoValue<SystemSettings::DataModel::ISettingsExtensionApp *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionApp *> >
	{
		~AutoValue<SystemSettings::DataModel::ISettingsExtensionApp *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionApp *> >();
	};

	struct AutoValue<SystemSettings::DataModel::ISettingsExtensionAppLink *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionAppLink *> >
	{
		~AutoValue<SystemSettings::DataModel::ISettingsExtensionAppLink *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionAppLink *> >();
	};

	struct AutoValue<detail::GitStorageType<SystemSettings::DataModel::ISettingsExtensionApp>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionApp *> >
	{
		~AutoValue<detail::GitStorageType<SystemSettings::DataModel::ISettingsExtensionApp>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionApp *> >();
	};

	struct AutoValue<detail::GitStorageType<SystemSettings::DataModel::ISettingsExtensionAppLink>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionAppLink *> >
	{
		~AutoValue<detail::GitStorageType<SystemSettings::DataModel::ISettingsExtensionAppLink>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionAppLink *> >();
	};

	struct InterfaceLifetimeTraits
	{
		static long Construct<SystemSettings::DataModel::ISettingsExtensionApp>(detail::GitStorageType<SystemSettings::DataModel::ISettingsExtensionApp> *,SystemSettings::DataModel::ISettingsExtensionApp *);
		static long Construct<SystemSettings::DataModel::ISettingsExtensionAppLink>(detail::GitStorageType<SystemSettings::DataModel::ISettingsExtensionAppLink> *,SystemSettings::DataModel::ISettingsExtensionAppLink *);
		static void Destroy<SystemSettings::DataModel::ISettingsExtensionApp>(detail::GitStorageType<SystemSettings::DataModel::ISettingsExtensionApp> *);
		static void Destroy<SystemSettings::DataModel::ISettingsExtensionAppLink>(detail::GitStorageType<SystemSettings::DataModel::ISettingsExtensionAppLink> *);
	};

	struct StorageTempTraits<detail::GitStorageType<SystemSettings::DataModel::ISettingsExtensionApp>,SystemSettings::DataModel::ISettingsExtensionApp *,detail::GitStorageType<SystemSettings::DataModel::ISettingsExtensionApp>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionApp *> >
	{
		static long ResolveDemand(detail::GitStorageType<SystemSettings::DataModel::ISettingsExtensionApp> *,SystemSettings::DataModel::ISettingsExtensionApp * *);
	};

	struct StorageTempTraits<detail::GitStorageType<SystemSettings::DataModel::ISettingsExtensionAppLink>,SystemSettings::DataModel::ISettingsExtensionAppLink *,detail::GitStorageType<SystemSettings::DataModel::ISettingsExtensionAppLink>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionAppLink *> >
	{
		static long ResolveDemand(detail::GitStorageType<SystemSettings::DataModel::ISettingsExtensionAppLink> *,SystemSettings::DataModel::ISettingsExtensionAppLink * *);
	};

	class XHashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > >::KeyTraits,CElementTraits<IInspectable *> >
	{
		long FreeNode(XHashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > >::KeyTraits,CElementTraits<IInspectable *> >::CNode *);
		long GetNode(HSTRING__ * const &,unsigned int &,unsigned int &,XHashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > >::KeyTraits,CElementTraits<IInspectable *> >::CNode * &,XHashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > >::KeyTraits,CElementTraits<IInspectable *> >::CNode * *);
		long NewNode(HSTRING__ * const &,unsigned int,unsigned int,XHashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > >::KeyTraits,CElementTraits<IInspectable *> >::CNode * *);
		unsigned int PickSize(unsigned __int64);
		void UpdateRehashThresholds();
	public:
		XHashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > >::KeyTraits,CElementTraits<IInspectable *> >(void *,unsigned int,float,float,float,unsigned int);
		XHashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > >::KeyTraits,CElementTraits<IInspectable *> >::CPair * GetNext(TXPOSITION * &);
		long InitHashTable(unsigned int,bool,bool *);
		long Lookup(HSTRING__ * const &,XHashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultHashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *> > >::KeyTraits,CElementTraits<IInspectable *> >::CPair * *);
		long Rehash(unsigned int);
		long RemoveAll();
		long SetAt(HSTRING__ * const &,IInspectable * const &,TXPOSITION * *);
	};

	namespace detail
	{
		struct AbiReference<SystemSettings::DataModel::ISettingsExtensionApp *,GitStorageType<SystemSettings::DataModel::ISettingsExtensionApp>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionApp *> >
		{
			~AbiReference<SystemSettings::DataModel::ISettingsExtensionApp *,GitStorageType<SystemSettings::DataModel::ISettingsExtensionApp>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionApp *> >();
		};

		struct AbiReference<SystemSettings::DataModel::ISettingsExtensionAppLink *,GitStorageType<SystemSettings::DataModel::ISettingsExtensionAppLink>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionAppLink *> >
		{
			~AbiReference<SystemSettings::DataModel::ISettingsExtensionAppLink *,GitStorageType<SystemSettings::DataModel::ISettingsExtensionAppLink>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<SystemSettings::DataModel::SettingsExtensionAppLink *> >();
		};

		struct LockHolder<ComLock,AcquireRead>
		{
			~LockHolder<ComLock,AcquireRead>();
		};

		struct LockHolder<ComLock,AcquireWrite>
		{
			~LockHolder<ComLock,AcquireWrite>();
		};

		struct LockHolder<SRWLock,AcquireWrite>
		{
			~LockHolder<SRWLock,AcquireWrite>();
		};

		struct ReentrancyGuard<0>
		{
			ReentrancyGuard<0>(...);
		};

	};

};

namespace std
{
	struct _Ref_count_base
	{
		virtual void * _Get_deleter(type_info const &);
		virtual ~_Ref_count_base();
	};

	class _Ref_count_obj<Concurrency::details::_ExceptionHolder>
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	class _Ref_count_obj<Concurrency::details::_Task_impl<long> >
	{
		virtual void _Delete_this();
		virtual void _Destroy();
	};

	struct _Wrap_alloc<allocator<Microsoft::WRL::ComPtr<SystemSettings::DataModel::ISettingsExtensionAppLink> > >
	{
		void deallocate(Microsoft::WRL::ComPtr<SystemSettings::DataModel::ISettingsExtensionAppLink> *,unsigned __int64);
		void destroy<Microsoft::WRL::ComPtr<SystemSettings::DataModel::ISettingsExtensionAppLink> >(Microsoft::WRL::ComPtr<SystemSettings::DataModel::ISettingsExtensionAppLink> *);
	};

	struct _Wrap_alloc<allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
		void construct<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,unsigned short const * &>(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,unsigned short const * &);
		void deallocate(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,unsigned __int64);
		void destroy<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *);
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
		basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > & operator=(unsigned short const * const);
		static void _Xlen();
		~basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >();
	};

	struct exception
	{
		exception(exception const &);
		virtual char const * what();
	};

	struct exception_ptr
	{
		exception_ptr(exception_ptr const &);
		void _RethrowException();
		~exception_ptr();
	};

	struct function<long ()>
	{
		~function<long ()>();
	};

	struct function<long (Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> *)>
	{
		~function<long (Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> *)>();
	};

	struct function<long (Windows::Internal::StateRepository::IApplicationExtension *)>
	{
		~function<long (Windows::Internal::StateRepository::IApplicationExtension *)>();
	};

	struct function<void ()>
	{
		~function<void ()>();
	};

	struct lock_guard<mutex>
	{
		~lock_guard<mutex>();
	};

	struct runtime_error
	{
		runtime_error(char const *);
		runtime_error(runtime_error const &);
		virtual ~runtime_error();
	};

	struct shared_ptr<Concurrency::details::_ExceptionHolder>
	{
		~shared_ptr<Concurrency::details::_ExceptionHolder>();
	};

	struct shared_ptr<Concurrency::details::_Task_impl<long> >
	{
		~shared_ptr<Concurrency::details::_Task_impl<long> >();
	};

	struct shared_ptr<Concurrency::details::_Task_impl_base>
	{
		shared_ptr<Concurrency::details::_Task_impl_base>(shared_ptr<Concurrency::details::_Task_impl_base> const &);
		~shared_ptr<Concurrency::details::_Task_impl_base>();
	};

	struct shared_ptr<Concurrency::scheduler_interface>
	{
		shared_ptr<Concurrency::scheduler_interface>(shared_ptr<Concurrency::scheduler_interface> const &);
		~shared_ptr<Concurrency::scheduler_interface>();
	};

	struct unique_lock<mutex>
	{
		~unique_lock<mutex>();
	};

	struct unique_ptr<Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore,default_delete<Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore> >
	{
		~unique_ptr<Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore,default_delete<Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore> >();
	};

	struct unique_ptr<Concurrency::details::_TaskProcHandle,default_delete<Concurrency::details::_TaskProcHandle> >
	{
		~unique_ptr<Concurrency::details::_TaskProcHandle,default_delete<Concurrency::details::_TaskProcHandle> >();
	};

	class vector<Microsoft::WRL::ComPtr<SystemSettings::DataModel::ISettingsExtensionAppLink>,allocator<Microsoft::WRL::ComPtr<SystemSettings::DataModel::ISettingsExtensionAppLink> > >
	{
		static void _Xlength();
		void _Assign_range<Microsoft::WRL::ComPtr<SystemSettings::DataModel::ISettingsExtensionAppLink> *>(Microsoft::WRL::ComPtr<SystemSettings::DataModel::ISettingsExtensionAppLink> *,Microsoft::WRL::ComPtr<SystemSettings::DataModel::ISettingsExtensionAppLink> *,forward_iterator_tag);
		void _Tidy();
	public:
		~vector<Microsoft::WRL::ComPtr<SystemSettings::DataModel::ISettingsExtensionAppLink>,allocator<Microsoft::WRL::ComPtr<SystemSettings::DataModel::ISettingsExtensionAppLink> > >();
	};

	class vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >
	{
		static void _Xlength();
		void _Tidy();
	public:
		void assign<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,void>(basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *);
		void emplace_back<unsigned short const * &>(unsigned short const * &);
		~vector<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >();
	};

	class vector<void *,allocator<void *> >
	{
		bool _Buy(unsigned __int64);
		static void _Xlength();
		void _Tidy();
	public:
		vector<void *,allocator<void *> >(vector<void *,allocator<void *> > const &);
		void assign<void * *,void>(void * *,void * *);
	};

	struct weak_ptr<Concurrency::details::_Task_impl_base>
	{
		~weak_ptr<Concurrency::details::_Task_impl_base>();
	};

	Microsoft::WRL::ComPtr<SystemSettings::DataModel::ISettingsExtensionAppLink> * _Unfancy<Microsoft::WRL::ComPtr<SystemSettings::DataModel::ISettingsExtensionAppLink> >(Microsoft::WRL::ComPtr<SystemSettings::DataModel::ISettingsExtensionAppLink> *);
	Microsoft::WRL::ComPtr<SystemSettings::DataModel::ISettingsExtensionAppLink> * _Uninitialized_copy_al_unchecked<Microsoft::WRL::ComPtr<SystemSettings::DataModel::ISettingsExtensionAppLink> *,Microsoft::WRL::ComPtr<SystemSettings::DataModel::ISettingsExtensionAppLink> *,allocator<Microsoft::WRL::ComPtr<SystemSettings::DataModel::ISettingsExtensionAppLink> > >(Microsoft::WRL::ComPtr<SystemSettings::DataModel::ISettingsExtensionAppLink> *,Microsoft::WRL::ComPtr<SystemSettings::DataModel::ISettingsExtensionAppLink> *,Microsoft::WRL::ComPtr<SystemSettings::DataModel::ISettingsExtensionAppLink> *,std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<SystemSettings::DataModel::ISettingsExtensionAppLink> > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	Microsoft::WRL::ComPtr<SystemSettings::DataModel::ISettingsExtensionAppLink> * _Uninitialized_move_al_unchecked<Microsoft::WRL::ComPtr<SystemSettings::DataModel::ISettingsExtensionAppLink> *,Microsoft::WRL::ComPtr<SystemSettings::DataModel::ISettingsExtensionAppLink> *,allocator<Microsoft::WRL::ComPtr<SystemSettings::DataModel::ISettingsExtensionAppLink> > >(Microsoft::WRL::ComPtr<SystemSettings::DataModel::ISettingsExtensionAppLink> *,Microsoft::WRL::ComPtr<SystemSettings::DataModel::ISettingsExtensionAppLink> *,Microsoft::WRL::ComPtr<SystemSettings::DataModel::ISettingsExtensionAppLink> *,std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<SystemSettings::DataModel::ISettingsExtensionAppLink> > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	nothrow_t const std::nothrow;
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > * _Copy_unchecked1<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *>(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::_General_ptr_iterator_tag);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > * _Unfancy<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > * _Uninitialized_copy_al_unchecked<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::_Wrap_alloc<std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > * _Uninitialized_move_al_unchecked<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *,allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > > >(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::_Wrap_alloc<std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > &,std::_General_ptr_iterator_tag,std::_Any_tag);
	void _Destroy_range<allocator<Microsoft::WRL::ComPtr<SystemSettings::DataModel::ISettingsExtensionAppLink> >,Microsoft::WRL::ComPtr<SystemSettings::DataModel::ISettingsExtensionAppLink> *>(Microsoft::WRL::ComPtr<SystemSettings::DataModel::ISettingsExtensionAppLink> *,Microsoft::WRL::ComPtr<SystemSettings::DataModel::ISettingsExtensionAppLink> *,std::_Wrap_alloc<std::allocator<Microsoft::WRL::ComPtr<SystemSettings::DataModel::ISettingsExtensionAppLink> > > &);
	void _Destroy_range<allocator<basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > >,basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> > *>(std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > *,std::_Wrap_alloc<std::allocator<std::basic_string<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short> > > > &);
	void rethrow_exception(std::exception_ptr);
};

namespace wil
{
	class Feature<__WilFeatureTraits_Feature_SettingsExtensibility>
	{
		static wil_details_CachedFeatureEnabledState GetCachedFeatureEnabledState(bool);
	};

	struct IterableRangeNoThrow<HSTRING__ *>
	{
		~IterableRangeNoThrow<HSTRING__ *>();
	};

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
		class EnabledStateManager
		{
			void RecordCachedUsageUnderLock();
		public:
			void OnStateChange();
			void QueueBackgroundUsageReporting(unsigned int,wil_details_FeaturePropertyCache &);
			void SubscribeFeaturePropertyCacheToEnabledStateChanges(wil_details_FeaturePropertyCache *,wil_FeatureChangeTime);
		};

		class FeatureLogging
		{
		protected:
			static FeatureLogging * Instance();
		};

		class FeatureStateManager
		{
			bool EnsureStateData();
		public:
			void RecordFeatureUsage(unsigned int,wil_details_ServiceReportingKind,unsigned __int64);
			void SubscribeToUsageFlush(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *));
		};

		namespace MapToSmartType<HSTRING__ *,void>
		{
			struct HStringWithRelease
			{
				~HStringWithRelease();
			};

		};

		class ThreadFailureCallbackHolder
		{
			static long volatile s_telemetryId;
		public:
			static bool GetThreadContext(FailureInfo *,ThreadFailureCallbackHolder *,char *,unsigned __int64);
		};

		namespace in1diag3
		{
			long Log_IfFailedMsg(void *,unsigned int,char const *,long,char const *,...);
			long Return_CaughtException(void *,unsigned int,char const *);
			long Return_GetLastError(void *,unsigned int,char const *);
			long Return_GetLastErrorMsg(void *,unsigned int,char const *,char const *,...);
			long Return_NtStatus(void *,unsigned int,char const *,long);
			long Return_Win32(void *,unsigned int,char const *,unsigned long);
			void FailFast_Unexpected(void *,unsigned int,char const *);
			void Return_Hr(void *,unsigned int,char const *,long);
			void Return_HrMsg_NoOriginate(void *,unsigned int,char const *,long,char const *,...);
			void Return_Hr_NoOriginate(void *,unsigned int,char const *,long);
			void _FailFastImmediate_Unexpected();
			void _FailFast_GetLastError(void *,unsigned int,char const *);
			void _FailFast_Unexpected(void *,unsigned int,char const *);
			void _Log_Hr(void *,unsigned int,char const *,long);
		};

		struct shared_buffer
		{
			bool create(void const *,unsigned __int64);
		};

		FEATURE_ENABLED_STATE WilApiImpl_GetFeatureEnabledState(unsigned int,FEATURE_CHANGE_TIME);
		bool GetModuleInformation(void *,unsigned int *,char *,unsigned __int64);
		bool IsFeatureConfigured(wil_FeatureState *,unsigned int,bool,wil_FeatureStore);
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
		long NtStatusToHr(long);
		long RecognizeCaughtExceptionFromCallback(unsigned short *,unsigned __int64);
		long ReportFailure_CaughtException(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,SupportedExceptions);
		long ReportFailure_GetLastErrorHr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		long ReportFailure_GetLastErrorHrMsg(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,char const *,char *);
		long ReportFailure_NtStatus(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long);
		long ReportFailure_Win32(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,unsigned long);
		long ResultFromCaughtExceptionInternal(unsigned short *,unsigned __int64,bool *);
		long StringCchPrintfA(char *,unsigned __int64,char const *,...);
		shutdown_aware_object<details::EnabledStateManager> g_enabledStateManager;
		shutdown_aware_object<details::FeatureStateManager> g_featureStateManager;
		unsigned char (* g_pfnRtlDllShutdownInProgress)();
		unsigned char * WriteResultString<char const *>(unsigned char *,unsigned char *,char const *,char const * *);
		unsigned char * WriteResultString<unsigned short const *>(unsigned char *,unsigned char *,unsigned short const *,unsigned short const * *);
		unsigned char RtlDllShutdownInProgress();
		unsigned long (* g_pfnRtlNtStatusToDosErrorNoTeb)(long);
		unsigned long ReportFailure_GetLastError(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		unsigned long RtlNtStatusToDosErrorNoTeb(long);
		unsigned short * LogStringPrintf(unsigned short *,unsigned short const *,unsigned short const *,...);
		void (* g_pfnDebugBreak)();
		void (* g_pfnGetContextAndNotifyFailure)(FailureInfo *,char *,unsigned __int64);
		void (* g_pfnLoggingCallback)(FailureInfo const &);
		void (* g_pfnOriginateCallback)(FailureType,long);
		void (* g_pfnRethrow)();
		void (* g_pfnTelemetryCallback)(bool,FailureInfo const &);
		void (* g_pfnThrowResultException)(FailureInfo const &);
		void DebugBreak();
		void FeatureLoggingHook(unsigned int,FEATURE_LOGGED_TRAITS const *,FEATURE_ERROR const *,int,wil_ReportingKind const *,wil_VariantReportingKind const *,unsigned char,unsigned __int64);
		void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
		void LogFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,bool,unsigned short *,unsigned __int64,char *,unsigned __int64,FailureInfo *);
		void RecordFeatureUsageCallback(unsigned int,wil_details_FeaturePropertyCache *,wil_details_RecordUsageResult *);
		void ReportFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Hr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long);
		void ReportFailure_HrMsg(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,char const *,char *);
		void ReportFailure_Msg(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,char const *,char *);
		void Rethrow();
		void ThrowResultExceptionInternal(FailureInfo const &);
		void WilApiImpl_RecordFeatureUsage(unsigned int,unsigned int,unsigned int,char const *);
		void WilApiImpl_SubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
		void WilApiImpl_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
	};

	namespace details_abi
	{
		struct FeatureStateData
		{
			void ProcessShutdown();
			void RecordUsage();
		};

		struct ProcessLocalStorageData<FeatureStateData>
		{
			static long Acquire(char const *,ProcessLocalStorageData<FeatureStateData> * *);
			void Release();
		};

		struct ProcessLocalStorageData<ProcessLocalData>
		{
			static long Acquire(char const *,ProcessLocalStorageData<ProcessLocalData> * *);
			void Release();
		};

		class RawUsageIndex
		{
			bool RecordUsageInternal(void *,unsigned __int64,void *,unsigned __int64,unsigned int);
			unsigned char * FindInsertionPointOrIncrement(UsageIndexProperty &,unsigned char *,void *,unsigned __int64,unsigned int);
		public:
			bool RecordUsage(void *,unsigned __int64,void *,unsigned __int64,unsigned int);
			void SetBuffer(void *,unsigned __int64,unsigned __int64);
			void Swap(RawUsageIndex &);
			~RawUsageIndex();
		};

		class SemaphoreValue
		{
			static long GetValueFromSemaphore(void *,long *);
			static long TryGetValueInternal(unsigned short const *,bool,unsigned __int64 *,bool *);
		public:
			long CreateFromPointer(unsigned short const *,void *);
			void Destroy();
		};

		struct SubscriptionList
		{
			void OnSignaled(srwlock &);
			void SubscribeUnderLock(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
			void Unsubscribe(srwlock &,FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
		};

		struct ThreadLocalData
		{
			void SetLastError(FailureInfo const &);
			~ThreadLocalData();
		};

		struct UsageIndexProperty
		{
			bool Read(unsigned char * &,unsigned char *);
			bool Write(unsigned char * &,unsigned char *);
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
		};

		details_abi::ProcessLocalStorage<details_abi::ProcessLocalData> * g_pProcessLocalData;
		details_abi::ThreadLocalData * GetThreadLocalDataCache(bool);
		void RecordWnfUsageIndex(__WIL__WNF_STATE_NAME const *,unsigned __int64,details_abi::RawUsageIndex const &);
	};

	bool (* g_pfnIsDebuggerPresent)();
	bool g_fBreakOnFailure;
	bool g_fIsDebuggerPresent;
	long (* g_pfnResultFromCaughtException)();
	long GetFailureLogString(unsigned short *,unsigned __int64,wil::FailureInfo const &);
	wil::IterableRangeNoThrow<HSTRING__ *> GetRangeNoThrow<HSTRING__ *>(Windows::Foundation::Collections::IIterable<HSTRING__ *> *,long *);
};

namespace wistd
{
	struct function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>
	{
		~function<bool (void *,unsigned __int64,void *,unsigned __int64,unsigned int)>();
	};

	void _Xbad_function_call();
};

FEATURE_ENABLED_STATE (* g_wil_details_apiGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME);
FEATURE_ENABLED_STATE (* g_wil_details_internalGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME);
HINSTANCE__ * g_wil_details_ntdllModuleHandle;
Microsoft::WRL::Details::CreatorMap const __object_CSettingsDatabase;
Microsoft::WRL::Details::CreatorMap const __object_SettingsBrokerServer;
Microsoft::WRL::Details::CreatorMap const __object_SettingsEnvironmentDatabaseServer;
Microsoft::WRL::Details::CreatorMap const __object_SettingsExtensibilityServer;
Microsoft::WRL::Details::FactoryCache __objectFactory__CSettingsDatabase;
Microsoft::WRL::Details::FactoryCache __objectFactory__SettingsBrokerServer;
Microsoft::WRL::Details::FactoryCache __objectFactory__SettingsEnvironmentDatabaseServer;
Microsoft::WRL::Details::FactoryCache __objectFactory__SettingsExtensibilityServer;
_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID;
__WIL_RTL_SRWLOCK g_wil_details_testFeatureStateLock;
__type_info_node __type_info_root_node;
int g_wil_details_preventOnDemandStagingConfigReads;
int wil_QueryFeatureState(wil_FeatureState *,unsigned int,int,wil_FeatureStore,int *);
int wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(wil_details_FeaturePropertyCache *,unsigned int,wil_details_ServiceReportingKind,unsigned int,unsigned __int64);
int wil_details_SetPropertyCacheOpportunityCallback(wil_details_FeaturePropertyCache *,void *);
int wil_details_SetPropertyCacheUsageCallback(wil_details_FeaturePropertyCache *,void *);
int wil_details_StagingConfig_AreAnyFeaturesConfigured(wil_details_StagingConfig *);
int wil_details_StagingConfig_QueryFeatureState(wil_details_StagingConfig *,wil_FeatureState *,unsigned int,int);
long (* g_wil_details_pfnNtQueryWnfStateData)(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long (* g_wil_details_pfnNtUpdateWnfStateData)(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long (* g_wil_details_pfnRtlSubscribeWnfStateChangeNotification)(__WIL__WNF_USER_SUBSCRIPTION * *,__WIL__WNF_STATE_NAME,unsigned long,long (*)(__WIL__WNF_STATE_NAME,unsigned long,__WIL__WNF_TYPE_ID *,void *,void const *,unsigned long),void *,__WIL__WNF_TYPE_ID *,unsigned long,unsigned long);
long (* g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion)(__WIL__WNF_USER_SUBSCRIPTION *);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCopyNExW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64,unsigned short * *,unsigned __int64 *,unsigned long);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long _AllocStringWorker<CTCoAllocPolicy>(void *,unsigned long,unsigned short const *,unsigned __int64,unsigned __int64,unsigned short * *);
long wil_details_NtQueryWnfStateData(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long wil_details_NtUpdateWnfStateData(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long wil_details_StagingConfig_FireNotification(wil_details_StagingConfig *,unsigned int,unsigned short);
long wil_details_StagingConfig_Load(wil_details_StagingConfig *,wil_FeatureStore,unsigned __int64,void *,int);
unsigned short const * const RuntimeClass_SystemSettings_DataModel_SettingsBroker;
unsigned short const * const RuntimeClass_SystemSettings_DataModel_SettingsDatabase;
unsigned short const * const RuntimeClass_SystemSettings_DataModel_SettingsEnvironmentDatabase;
unsigned short const * const RuntimeClass_SystemSettings_DataModel_SettingsExtensibility;
unsigned short const * const RuntimeClass_SystemSettings_DataModel_SettingsExtensionApp;
unsigned short const * const RuntimeClass_SystemSettings_DataModel_SettingsExtensionAppLink;
unsigned short const * const RuntimeClass_Windows_ApplicationModel_Activation_Private_ApplicationActivation;
unsigned short const * const RuntimeClass_Windows_Foundation_Diagnostics_AsyncCausalityTracer;
unsigned short const * const RuntimeClass_Windows_Internal_StateRepository_ApplicationExtension;
unsigned short const * const SnapshotInstalledExtensionAppsActionName;
void (* g_wil_details_apiRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_apiSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_apiUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_internalRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_internalSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_internalUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_pfnFeatureLoggingHook)(unsigned int,FEATURE_LOGGED_TRAITS const *,FEATURE_ERROR const *,int,wil_ReportingKind const *,wil_VariantReportingKind const *,unsigned char,unsigned __int64);
void (* g_wil_details_recordFeatureUsage)(unsigned int,wil_details_FeaturePropertyCache *,wil_details_RecordUsageResult *);
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
void wil_details_SetEnabledAndHasNotificationStateProperties(wil_details_FeaturePropertyCache *,wil_details_CachedFeatureEnabledState,wil_details_CachedHasNotificationState);
wil_StagingConfig * g_wil_details_stagingConfigForMachine;
wil_StagingConfig * g_wil_details_stagingConfigForUser;
wil_details_FeatureTestState * g_wil_details_testStates;
