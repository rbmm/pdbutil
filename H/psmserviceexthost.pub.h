namespace ATL
{
	struct CComPtr<ExecutionModel::BaseResourceSet>
	{
		CComPtr<ExecutionModel::BaseResourceSet>();
		~CComPtr<ExecutionModel::BaseResourceSet>();
	};

	struct CComPtr<ResourceManagerServerProxy>
	{
		CComPtr<ResourceManagerServerProxy>();
		~CComPtr<ResourceManagerServerProxy>();
	};

	class CComPtrBase<ExecutionModel::BaseResourceSet>
	{
	protected:
		CComPtrBase<ExecutionModel::BaseResourceSet>(ExecutionModel::BaseResourceSet *);
	public:
		void Attach(ExecutionModel::BaseResourceSet *);
	};

	IUnknown * AtlComPtrAssign(IUnknown * *,IUnknown *);
};

struct CBackgroundAccessStateChangedListener
{
	CBackgroundAccessStateChangedListener();
	virtual long BackgroundAccessStateChanged(unsigned short const *,unsigned short const *,BACKGROUND_ACCESS_STATE);
};

namespace ExecutionModel
{
	class BaseResourceSet
	{
		bool HigherPriorityPending(unsigned long,_ResourceInfo const *,Priority::Enum);
		long CheckPoolResources(unsigned long,_ResourceInfo const *,unsigned long,bool,bool *,bool *,utl::list<ATL::CComPtr<BaseResourceSet>,utl::allocator<ATL::CComPtr<BaseResourceSet> > > *);
		long CheckResourceAvailability(unsigned long,_ResourceInfo *,unsigned long,Priority::Enum,PendType::Enum,bool *,bool *,utl::list<ATL::CComPtr<BaseResourceSet>,utl::allocator<ATL::CComPtr<BaseResourceSet> > > *);
		long InitializeResource(_ResourceInfo const *);
		long RecursiveVisit(BaseResourceSet::Action,unsigned long,_ResourceInfo *,unsigned long,bool,bool *,bool *,utl::list<ATL::CComPtr<BaseResourceSet>,utl::allocator<ATL::CComPtr<BaseResourceSet> > > *,BaseResourceSet *);
		static long AddToListPrioritized(utl::list<ATL::CComPtr<BaseResourceSet>,utl::allocator<ATL::CComPtr<BaseResourceSet> > > *,BaseResourceSet *,bool);
		void CheckAllPendingRequests();
		void RevokeResourceList(utl::list<ATL::CComPtr<BaseResourceSet>,utl::allocator<ATL::CComPtr<BaseResourceSet> > > *,Priority::Enum,_RM_REVOKE_REASON_INTERNAL);
	protected:
		void ReleaseResourcesAndCheckPendingRequests();
		void ReturnResourceToParent(ResourceType::Enum,unsigned __int64);
	public:
		BaseResourceSet();
		long AcquireResources(_RM_ACTIVITY_HOST *,unsigned long,_ResourceInfo const *,Priority::Enum,unsigned long,_RM_REVOKE_REASON_INTERNAL,PendType::Enum,bool *,_RM_ACQUIRE_PEND_POLICY,ExternalResourceSet *);
		virtual bool HasLowerPrecedenceThan(_ResourceInfo *,unsigned long);
		virtual bool IsApplicationAcquired();
		virtual long CheckAccess(unsigned long,_ResourceInfo const *);
		virtual long OnAccessLost();
		virtual long OnHostFrozen();
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long ReleaseResourcesInternal(unsigned long);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
		virtual ~BaseResourceSet();
	};

	class ExternalResourceSet
	{
		ExternalResourceSet();
		bool CheckSetWatchdogTimer();
		static bool IsDebuggerAttached(unsigned long);
		static long ResourceSetFactory(ExternalResourceSet * *);
		static void WatchdogTimerCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
		void CancelWatchdogTimer();
		void QueueMessage(ExternalResourceNotificationType::Enum,ResourceType::Enum,unsigned long);
		void RunWatchdog();
	public:
		long GetNextMessage(ExternalResourceNotification *);
		static long AvailabilityCheck(ResourceManager *,BaseResourceSet *,unsigned long,_ResourceInfo *,Priority::Enum,unsigned long,bool *);
		static long CreateInstance(BaseResourceSet *,unsigned long,_ResourceInfo *,Priority::Enum,unsigned long,unsigned __int64,void *,bool,unsigned long,PendType::Enum,bool,_RM_ACTIVITY_HOST *,bool *,ExternalResourceSet * *);
		static void ResolveUnknownExternalResourcePriorities(ResourceManager *,unsigned long,unsigned long,_ResourceInfo *,_RM_ACTIVITY_HOST *);
		static void ResolveUnknownExternalResourcePriotiesFromResourceSets(ResourceManager *,unsigned long,unsigned long,_ResourceInfo *,_RM_ACTIVITY_HOST *);
		virtual bool HasLowerPrecedenceThan(_ResourceInfo *,unsigned long);
		virtual bool IsApplicationAcquired();
		virtual long CheckAccess(unsigned long,_ResourceInfo const *);
		virtual long OnAccessLost();
		virtual long OnHostFrozen();
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
		void ReleaseResourcesWithoutNotify();
		void Revoke(_RM_REVOKE_REASON_INTERNAL);
	};

	class ResourceManager
	{
	protected:
		static void CheckPendingRequestsThreadpoolCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_WORK *);
	public:
		Priority::Enum get_MaximumPriortyToRelease();
		ResourceManager();
		bool ResourceSetUsesEstimation(_ResourceSetInfo const *,unsigned short const *);
		int IsForegroundProcess(unsigned long);
		long AcquireResourceSet(_ResourceSetInfo const *,_RM_PARTITION *,void *,IResourceSetCallback *,void *,unsigned short const *,_RM_SID *,unsigned long,unsigned long,unsigned __int64,unsigned long,_RM_ACTIVATOR *,bool *,ResourceSet *,unsigned __int64,ResourceSet * *);
		long AddCommitMemoryWnfStates(unsigned long,_RM_SID *,_LARGE_INTEGER *,_LARGE_INTEGER *);
		long ApplyResourceSetWithoutEnforcement(ResourceSet *,unsigned long,_RM_ACTIVITY_HOST * *);
		long ApplyResourceSet_Legacy(ResourceSet *,unsigned long,_RM_ACTIVITY_HOST * *);
		long ApplyResourceSet_Modern(ResourceSet *,_RM_ACTIVITY_HOST * *);
		long ApplyTerminalResourceSet(unsigned long);
		long CommitMemoryLimitChange(_RM_PSM_HOST_INFO *,unsigned __int64,unsigned __int64);
		long CreatePendingRequestWorkItems();
		long CreateTerminalResourceSetFromResourceSetInfo(_ResourceSetInfo,_RM_PARTITION *,unsigned short const *,_RM_SID *,unsigned long,unsigned long,unsigned __int64,ResourceSet * *);
		long GetMemoryRequirementEstimateFromRegistry(_ResourceSetInfo *,unsigned short const *,unsigned long,unsigned __int64 *);
		long GetProcessMemoryCaps(unsigned long,unsigned __int64 *,unsigned __int64 *);
		long GetResourceManagementValue(unsigned long,unsigned long,unsigned __int64 *);
		long GetResourceSetFromHandle(ResourceHandle__ *,ExternalResourceSet * *);
		long InitResourcesFromRegisteredDlls();
		long Initialize(_RM_SERVICE_GLOBALS *,ModernResourceEnforcer *);
		long InitializePools();
		long ReadSettings();
		long RegisterCommitMemoryWnfStates(unsigned long,void *,_LARGE_INTEGER *,_LARGE_INTEGER *);
		long RmAccessCheckEx(ResourceType::Enum,unsigned long,unsigned char);
		long RmAccessCheckWithLockHeld(ResourceType::Enum,unsigned long,unsigned char);
		long RmAcquireResources(unsigned long,_ResourceInfo *,Priority::Enum,unsigned long,unsigned __int64,void *,unsigned long,PendType::Enum,bool,bool *,ResourceHandle__ * *);
		long RmAvailabilityCheck(unsigned long,_ResourceInfo *,Priority::Enum,unsigned long);
		long RmGetNotification(ResourceHandle__ *,ExternalResourceNotification *);
		long RmReleaseResources(ResourceHandle__ *);
		long UpdateMemoryUsageEstimates(ResourceSet *,unsigned __int64 *);
		static __int64 ReadPriorityValue(HKEY__ *,unsigned short const *,Priority::Enum *);
		static long CreateCommitMemoryWnfStates(_RM_SID *,_WNF_STATE_NAME *,_WNF_STATE_NAME *);
		virtual long GetPSMInfo(unsigned long,_RM_PSM_HOST_INFO *);
		virtual long MemoryLimitNotification(unsigned short const *,_RM_SID *,unsigned long,unsigned long,unsigned __int64);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long RmRegisterResource(RmResourceType,unsigned long,bool);
		virtual long UpdateCommitMemoryLevel(_RM_ACTIVITY_HOST *,_RM_COMMIT_LEVEL,_RM_COMMIT_LEVEL);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
		virtual void HostStateNotification(unsigned short const *,_RM_SID *,unsigned long,unsigned long * const,unsigned __int64 * const,unsigned long,_PSM_INTERNAL_HOST_STATE);
		void ApplyExternalResourcePriorities(_RM_ACTIVITY_HOST *);
		void CheckPendingInternalResourceRequestsAsync();
		void ForceReleaseExternalResources(unsigned long);
		void HostApplyExternalResourcePriorities(_RM_ACTIVITY_HOST *);
		void LogTimedOutRevocationRequests();
		void OnApplicationTerminated(_RM_PSM_HOST_INFO *);
		void OnProcessTerminated(unsigned long);
		void ReadRedirectedEstimationKey(HKEY__ *);
		void RemoveExternalResources(unsigned long,_RM_ACTIVITY_HOST *);
		void RemoveIoCountersFromCirculation(unsigned __int64,BaseResourceSet *);
		void ReplenishIoCounterPool(unsigned __int64);
		void Rundown();
		void SetMainPoolSizes(unsigned long *);
		void TransitionResources(ResourceSet *,ResourceSet *);
		~ResourceManager();
	};

	struct ResourcePolicyEngineHelper
	{
		static long ConvertPolicyToResourceSetInfo(RmResourceSetType,_ResourcePolicyDetails const *,_ResourceSetInfo *);
		static unsigned long GetLegacyPriorityForActivityPriority(unsigned char);
	};

	class ResourceSet
	{
		ResourceSet();
		static long ResourceSetFactory(unsigned __int64,BaseResourceSet *,_RM_PARTITION *,void *,_RM_ACTIVATOR *,ResourceSet * *);
		void CheckUpdatePendStats(unsigned long,unsigned long);
		void LogPendingEnd();
	protected:
		void ResetPriorities();
		void SetTransitionalPriorities(Priority::Enum,Priority::Enum);
	public:
		long AcquireInternalResources(PendType::Enum,bool *);
		long Apply(unsigned long);
		long CreateTerminalResourceSet(ResourceSet * *);
		long EvaluatePoolResourceRequest(PendType::Enum,bool *,utl::list<ATL::CComPtr<BaseResourceSet>,utl::allocator<ATL::CComPtr<BaseResourceSet> > > *,_RM_REVOKE_POLICY *);
		long EvaluateResourceRequest(unsigned __int64,PendType::Enum,_RM_RESOURCE_USAGE_LIMITS *,_RM_SYSTEM_MEMORY_METRICS *,_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *,bool *,bool *);
		long GetResourceSetInfo(_ResourceSetInfo * *);
		long HasMemoryForFGSharing(unsigned __int64,unsigned char);
		long SetExternalResourcePriorities(unsigned long,_ResourceInfo * const);
		long TriggerOnCommitWarningCallback();
		static long CreateInstance(BaseResourceSet *,_ResourceSetInfo const *,_RM_PARTITION *,void *,IResourceSetCallback *,void *,_RM_ACTIVITY_HOST *,unsigned short const *,_RM_SID *,unsigned long,unsigned long,unsigned __int64,_RM_REVOKE_REASON_INTERNAL,_RM_ACTIVATOR *,ResourceSet *,unsigned __int64,ResourceSet * *);
		static long ProcessPendingRequestList(_RM_PARTITION *,void *);
		unsigned __int64 GetEnforcedMemoryCap();
		unsigned __int64 GetReportedMemoryCap();
		virtual long NotifyPendingResourceSetTransition(_ResourceSetInfo *);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual long ReleaseResourcesInternal(unsigned long);
		virtual long UpdateImportanceAndResourceLimits(_RM_ACTIVITY_IMPORTANCE *,_RM_RESOURCE_LIMITS *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
		void CompleteAcquire(unsigned long);
		void LogRundownEvent();
		void PerformReleaseResources(unsigned long);
		void Revoke(_RM_REVOKE_ACTION,_RM_REVOKE_REASON_INTERNAL,unsigned __int64,ResourceSet *);
	};

	struct ResourceSetType
	{
		static bool HasMemoryUsageHistory(ResourceSetType::Enum);
	};

	class TerminalResourceSetCallback
	{
		void RevokeWorker();
	public:
		static void RevokeWorkerCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_WORK *);
		virtual long OnAcquired(void *);
		virtual long OnCommitWarning(void *);
		virtual long OnOutOfMemory(void *);
		virtual long OnRelease(void *,_RM_REVOKE_MESSAGE);
		virtual long QueryInterface(_GUID const &,void * *);
		virtual unsigned long AddRef();
		virtual unsigned long Release();
	};

	struct _ResourceInfo
	{
		_ResourceInfo();
	};

	struct _ResourceSetInfo
	{
		_ResourceSetInfo();
		bool IsFrozen();
		bool IsPaused();
		long SetAmount(ResourceType::Enum,unsigned __int64);
		unsigned __int64 GetAmount(ResourceType::Enum);
	};

	long CreateResourceManager(_RM_SERVICE_GLOBALS *,ModernResourceEnforcer *,ExecutionModel::ResourceManager * *);
	unsigned short const * const * const ResourceSetTypeName;
	void CopyRmResourceSetInfoToResourceSetInfo(RmResourceSetInfo const *,ExecutionModel::_ResourceSetInfo *);
	void RmpResourceSetPropertiesToResourceSetInfo(_RM_RESOURCE_SET_PROPERTIES *,ExecutionModel::_ResourceSetInfo *);
	void RmpResourceSetPropertyOverridesToResourceSetInfo(_RM_RESOURCE_SET_PROPERTIES *,ExecutionModel::_ResourceSetInfo *);
};

struct HAM_ACTIVITY_RM_CONTEXT
{
	unsigned long SynchronizeWithTerminationNeeded();
	virtual long OnAcquired(void *);
	virtual long OnCommitWarning(void *);
	virtual long OnOutOfMemory(void *);
	virtual long OnRelease(void *,_RM_REVOKE_MESSAGE);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	void PendReasonChanged(unsigned __int64,_HAM_PEND_STATE);
};

namespace Microsoft
{
	namespace WRL
	{
		namespace Details
		{
			struct ModuleBase
			{
				static ModuleBase * module_;
			};

			class RuntimeClassBaseT<3>
			{
			protected:
				static long AsIID<RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,IBackgroundAccessStateChangeHandler> >(RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,IBackgroundAccessStateChangeHandler> *,_GUID const &,void * *);
			};

			struct RuntimeClassImpl<RuntimeClassFlags<2>,1,0,0,IWeakReference>
			{
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
			};

			struct RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,IBackgroundAccessStateChangeHandler>
			{
				virtual long GetIids(unsigned long *,_GUID * *);
				virtual long GetRuntimeClassName(HSTRING__ * *);
				virtual long GetTrustLevel(TrustLevel *);
				virtual long GetWeakReference(IWeakReference * *);
				virtual long QueryInterface(_GUID const &,void * *);
				virtual unsigned long AddRef();
				virtual unsigned long Release();
				virtual ~RuntimeClassImpl<RuntimeClassFlags<3>,1,1,0,IBackgroundAccessStateChangeHandler>();
			};

			struct WeakReferenceImpl
			{
				WeakReferenceImpl(IUnknown *);
				virtual long Resolve(_GUID const &,IInspectable * *);
			};

			long MakeAndInitialize<CBackgroundAccessStateChangedListener,IBackgroundAccessStateChangeHandler,_HOST_ACTIVITY_MANAGER * &,unsigned long &>(IBackgroundAccessStateChangeHandler * *,_HOST_ACTIVITY_MANAGER * &,unsigned long &);
		};

	};

};

class ModernResourceEnforcer
{
protected:
	EnforcerApplicationState * CreateApplicationState(unsigned short const *,_RM_SID *,unsigned long,unsigned long,unsigned __int64);
	EnforcerApplicationState * FindApplicationState(unsigned short const *,_RM_SID *,unsigned long,unsigned long,unsigned __int64);
	ModernResourceEnforcer();
	long Init(_PSM_EXT_INTERNAL_FUNCTION_TABLE4 *);
	static void NotificationWorkCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_WORK *);
	virtual long PsmQueryApplicationProperties(unsigned short const *,_RM_SID *,unsigned long,unsigned long,unsigned __int64,unsigned long *,unsigned __int64 *,unsigned __int64 *,unsigned __int64 *,_PSM_APPLICATION_PRIORITY *,unsigned __int64 *);
	virtual long PsmSetApplicationProperties(unsigned short const *,_RM_SID *,unsigned long,unsigned long,unsigned __int64,unsigned long *,unsigned __int64 *,unsigned __int64 *,unsigned __int64 *,_PSM_APPLICATION_PRIORITY *,unsigned __int64 *);
	virtual ~ModernResourceEnforcer();
	void HandleAcquireReleaseGroupSchedulingOwnership(unsigned short const *,_RM_SID *,unsigned long,unsigned long,unsigned __int64,void *,bool);
	void HandlePsmHostEmpty(unsigned short const *,_RM_SID *,unsigned long,unsigned long,unsigned __int64);
	void ProcessWorkItem(ModernResourceEnforcer::ModernResourceEnforcerWorkItem *);
public:
	long SetApplicationPriority(_RM_ACTIVITY_HOST *,_PSM_APPLICATION_PRIORITY *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	void ApplicationStateNotification(_RM_SID *,unsigned long,unsigned short const *,unsigned long * const,unsigned __int64 * const,unsigned long,void *,_PSM_INTERNAL_HOST_STATE);
	void MemoryLimitNotification(_RM_SID *,unsigned long,unsigned short const *,unsigned long,unsigned __int64);
};

struct ResourceManagerServerProxy
{
	long Handle_RM_AcquireResourceSet(void *,RmResourceSetInfo *,unsigned char,unsigned short const *,unsigned char *,unsigned long,unsigned long,unsigned long,unsigned __int64,unsigned long,int *,unsigned __int64,unsigned __int64 *);
	long Handle_RM_ConnectToServer(void *,void * *,_WNF_STATE_NAME *);
	long Handle_RM_DisconnectFromServer(void * *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class ResourceSetCallback
{
	long SendData(void *,_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_TYPE,_RM_REVOKE_MESSAGE *);
public:
	virtual long OnAcquired(void *);
	virtual long OnCommitWarning(void *);
	virtual long OnOutOfMemory(void *);
	virtual long OnRelease(void *,_RM_REVOKE_MESSAGE);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct ResourceSetCallbackThunk
{
	virtual long OnAcquired(void *);
	virtual long OnCommitWarning(void *);
	virtual long OnOutOfMemory(void *);
	virtual long OnRelease(void *,_RM_REVOKE_MESSAGE);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

struct RmpRpExtResourceManagerThunk
{
	virtual long AcquireResourceSet(ExecutionModel::ResourceSetType::Enum,ExecutionModel::IResourceSetCallback *,_GUID const *,bool *,ExecutionModel::IResourceSet *,ExecutionModel::IResourceSet * *);
	virtual long AcquireResourceSet(ExecutionModel::_ResourceSetInfo *,ExecutionModel::IResourceSetCallback *,_GUID const *,bool *,ExecutionModel::IResourceSet *,ExecutionModel::IResourceSet * *);
	virtual long AcquireResourceSet(ExecutionModel::_ResourceSetInfo *,ExecutionModel::IResourceSetCallback *,void *,unsigned short const *,void *,unsigned long,unsigned long,unsigned __int64,bool *,ExecutionModel::IResourceSet *,ExecutionModel::IResourceSet * *);
	virtual long AcquireResourceSetFromSponsorProcess(ExecutionModel::ResourceSetType::Enum,ExecutionModel::IResourceSetCallback *,void *,unsigned short const *,void *,unsigned long,unsigned long,unsigned __int64,unsigned long,bool *,ExecutionModel::IResourceSet *,ExecutionModel::IResourceSet * *);
	virtual long AcquireResourceSetFromSponsorProcess(ExecutionModel::_ResourceSetInfo *,ExecutionModel::IResourceSetCallback *,void *,unsigned short const *,void *,unsigned long,unsigned long,unsigned __int64,unsigned long,bool *,ExecutionModel::IResourceSet *,ExecutionModel::IResourceSet * *);
	virtual long ApplyTerminalResourceSet(unsigned long);
	virtual long CreateTerminalResourceSet(ExecutionModel::ResourceSetType::Enum,ExecutionModel::IResourceSet * *);
	virtual long CreateTerminalResourceSet(ExecutionModel::_ResourceSetInfo *,ExecutionModel::IResourceSet * *);
	virtual long IsKillable(unsigned long,bool *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ReleaseResourceSet(ExecutionModel::IResourceSet *);
	virtual long RmGetResourceSetTypePolicy(RmResourceSetType,RmResourceSetInfo *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
	virtual void OnProcessTerminated(unsigned long);
};

struct RmpRpExtResourceSetThunk
{
	static long AcquireResourceSet(_RM_SERVICE_GLOBALS *,ExecutionModel::_ResourceSetInfo *,ExecutionModel::IResourceSetCallback *,void *,unsigned short const *,void *,unsigned long,unsigned long,unsigned __int64,unsigned long,ExecutionModel::IResourceSet *,bool *,ExecutionModel::IResourceSet * *);
	virtual bool IsApplied();
	virtual bool IsReleased();
	virtual bool IsValid();
	virtual long Apply();
	virtual long Apply(unsigned long);
	virtual long CreateTerminalResourceSet(ExecutionModel::IResourceSet * *);
	virtual long ForceReleaseResources();
	virtual long GetResourceSetInfo(ExecutionModel::_ResourceSetInfo * *);
	virtual long NotifyPendingResourceSetTransition(ExecutionModel::ResourceSetType::Enum);
	virtual long NotifyPendingResourceSetTransition(ExecutionModel::_ResourceSetInfo *);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual long ReduceExternalResourcePriorities(unsigned long,ExecutionModel::_ResourceInfo * const);
	virtual long ReleaseResources();
	virtual long ResetExternalResourcePriorities();
	virtual long SetExternalResourcePriorities(unsigned long,ExecutionModel::_ResourceInfo * const);
	virtual long UpdateImportanceAndResourceLimits(_RM_ACTIVITY_IMPORTANCE *,_RM_RESOURCE_LIMITS *);
	virtual unsigned __int64 GetId();
	virtual unsigned long AddRef();
	virtual unsigned long GetPid();
	virtual unsigned long Release();
	virtual void SetAutoRelease(bool);
};

struct RmpRpsResourceSetCallback
{
	virtual long OnAcquired(void *);
	virtual long OnCommitWarning(void *);
	virtual long OnOutOfMemory(void *);
	virtual long OnRelease(void *,_RM_REVOKE_MESSAGE);
	virtual long QueryInterface(_GUID const &,void * *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

namespace std
{
	nothrow_t const std::nothrow;
};

namespace utl
{
	class _HashTable<ExecutionModel::ResourceHandle__ *,pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet> >,hash<ExecutionModel::ResourceHandle__ *>,equal_to<ExecutionModel::ResourceHandle__ *>,allocator<pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet> > >,0>
	{
		_DlistIt<_HashNode<pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet> > > > _InsertNode(_HashNode<pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet> > > *,_HashNode<pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet> > > *,unsigned __int64);
		bool _FindKey(_DlistConstIt<_HashNode<pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet> > > >,ExecutionModel::ResourceHandle__ * const &,unsigned __int64,_HashNode<pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet> > > * *);
		bool _Rehash(unsigned char);
		pair<_DlistIt<_HashNode<pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet> > > >,bool> _EmplaceImpl(integral_constant<bool,0>,_DlistConstIt<_HashNode<pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet> > > >,_HashNode<pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet> > > *);
		void _EqualRangeImpl<ExecutionModel::ResourceHandle__ *>(integral_constant<bool,0>,ExecutionModel::ResourceHandle__ * const &,_DlistIt<_HashNode<pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet> > > > &,_DlistIt<_HashNode<pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet> > > > &,unsigned __int64 &);
		void _InitBuckets();
	public:
		_DlistIt<_HashNode<pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet> > > > erase(_DlistConstIt<_HashNode<pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet> > > >,_DlistConstIt<_HashNode<pair<ExecutionModel::ResourceHandle__ * const,ATL::CComPtr<ExecutionModel::ExternalResourceSet> > > >);
	};

	class _HashTable<_RM_PSM_HOST_INFO,pair<_RM_PSM_HOST_INFO const ,EnforcerApplicationState>,hash<_RM_PSM_HOST_INFO>,equal_to<_RM_PSM_HOST_INFO>,allocator<pair<_RM_PSM_HOST_INFO const ,EnforcerApplicationState> >,0>
	{
		_DlistIt<_HashNode<pair<_RM_PSM_HOST_INFO const ,EnforcerApplicationState> > > _InsertNode(_HashNode<pair<_RM_PSM_HOST_INFO const ,EnforcerApplicationState> > *,_HashNode<pair<_RM_PSM_HOST_INFO const ,EnforcerApplicationState> > *,unsigned __int64);
		bool _FindKey(_DlistConstIt<_HashNode<pair<_RM_PSM_HOST_INFO const ,EnforcerApplicationState> > >,_RM_PSM_HOST_INFO const &,unsigned __int64,_HashNode<pair<_RM_PSM_HOST_INFO const ,EnforcerApplicationState> > * *);
		bool _Rehash(unsigned char);
		pair<_DlistIt<_HashNode<pair<_RM_PSM_HOST_INFO const ,EnforcerApplicationState> > >,bool> _EmplaceImpl(integral_constant<bool,0>,_DlistConstIt<_HashNode<pair<_RM_PSM_HOST_INFO const ,EnforcerApplicationState> > >,_HashNode<pair<_RM_PSM_HOST_INFO const ,EnforcerApplicationState> > *);
		void _EqualRangeImpl<_RM_PSM_HOST_INFO>(integral_constant<bool,0>,_RM_PSM_HOST_INFO const &,_DlistIt<_HashNode<pair<_RM_PSM_HOST_INFO const ,EnforcerApplicationState> > > &,_DlistIt<_HashNode<pair<_RM_PSM_HOST_INFO const ,EnforcerApplicationState> > > &,unsigned __int64 &);
		void _InitBuckets();
	public:
		_DlistIt<_HashNode<pair<_RM_PSM_HOST_INFO const ,EnforcerApplicationState> > > erase(_DlistConstIt<_HashNode<pair<_RM_PSM_HOST_INFO const ,EnforcerApplicationState> > >,_DlistConstIt<_HashNode<pair<_RM_PSM_HOST_INFO const ,EnforcerApplicationState> > >);
	};

	class _HashTable<_RM_PSM_HOST_INFO,pair<_RM_PSM_HOST_INFO const ,ExecutionModel::ResourceManager::CommitMemoryWnfStates>,hash<_RM_PSM_HOST_INFO>,equal_to<_RM_PSM_HOST_INFO>,allocator<pair<_RM_PSM_HOST_INFO const ,ExecutionModel::ResourceManager::CommitMemoryWnfStates> >,0>
	{
		_DlistIt<_HashNode<pair<_RM_PSM_HOST_INFO const ,ExecutionModel::ResourceManager::CommitMemoryWnfStates> > > _InsertNode(_HashNode<pair<_RM_PSM_HOST_INFO const ,ExecutionModel::ResourceManager::CommitMemoryWnfStates> > *,_HashNode<pair<_RM_PSM_HOST_INFO const ,ExecutionModel::ResourceManager::CommitMemoryWnfStates> > *,unsigned __int64);
		bool _FindKey(_DlistConstIt<_HashNode<pair<_RM_PSM_HOST_INFO const ,ExecutionModel::ResourceManager::CommitMemoryWnfStates> > >,_RM_PSM_HOST_INFO const &,unsigned __int64,_HashNode<pair<_RM_PSM_HOST_INFO const ,ExecutionModel::ResourceManager::CommitMemoryWnfStates> > * *);
		bool _Rehash(unsigned char);
		pair<_DlistIt<_HashNode<pair<_RM_PSM_HOST_INFO const ,ExecutionModel::ResourceManager::CommitMemoryWnfStates> > >,bool> _EmplaceImpl(integral_constant<bool,0>,_DlistConstIt<_HashNode<pair<_RM_PSM_HOST_INFO const ,ExecutionModel::ResourceManager::CommitMemoryWnfStates> > >,_HashNode<pair<_RM_PSM_HOST_INFO const ,ExecutionModel::ResourceManager::CommitMemoryWnfStates> > *);
		void _EqualRangeImpl<_RM_PSM_HOST_INFO>(integral_constant<bool,0>,_RM_PSM_HOST_INFO const &,_DlistIt<_HashNode<pair<_RM_PSM_HOST_INFO const ,ExecutionModel::ResourceManager::CommitMemoryWnfStates> > > &,_DlistIt<_HashNode<pair<_RM_PSM_HOST_INFO const ,ExecutionModel::ResourceManager::CommitMemoryWnfStates> > > &,unsigned __int64 &);
		void _InitBuckets();
	public:
		_DlistIt<_HashNode<pair<_RM_PSM_HOST_INFO const ,ExecutionModel::ResourceManager::CommitMemoryWnfStates> > > erase(_DlistConstIt<_HashNode<pair<_RM_PSM_HOST_INFO const ,ExecutionModel::ResourceManager::CommitMemoryWnfStates> > >,_DlistConstIt<_HashNode<pair<_RM_PSM_HOST_INFO const ,ExecutionModel::ResourceManager::CommitMemoryWnfStates> > >);
		pair<_DlistIt<_HashNode<pair<_RM_PSM_HOST_INFO const ,ExecutionModel::ResourceManager::CommitMemoryWnfStates> > >,bool> emplace<_RM_PSM_HOST_INFO &,ExecutionModel::ResourceManager::CommitMemoryWnfStates &>(_RM_PSM_HOST_INFO &,ExecutionModel::ResourceManager::CommitMemoryWnfStates &);
	};

	class basic_string<unsigned short,char_traits<unsigned short>,allocator<unsigned short> >
	{
		_ContainerAllocation<allocator<unsigned short> > _GrowAlloc(unsigned __int64);
		void _Reinit(_ContainerAllocation<allocator<unsigned short> > &,unsigned __int64);
	public:
		bool append(unsigned short const *);
		bool append(unsigned short const *,unsigned __int64);
		bool assign(unsigned short const *);
		bool assign(unsigned short const *,unsigned __int64);
	};

	struct construct<_RM_PSM_HOST_INFO>
	{
		bool operator()<_RM_PSM_HOST_INFO,_RM_PSM_HOST_INFO &>(_RM_PSM_HOST_INFO *,_RM_PSM_HOST_INFO &);
	};

	struct equal_to<_RM_PSM_HOST_INFO>
	{
		bool operator()(_RM_PSM_HOST_INFO const &,_RM_PSM_HOST_INFO const &);
	};

	struct hash<_RM_PSM_HOST_INFO>
	{
		unsigned __int64 operator()(_RM_PSM_HOST_INFO const &);
	};

	struct list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet> > >
	{
		void clear();
	};

};

ATL::CComPtr<ResourceManagerServerProxy> g_pProxy;
ExecutionModel::DeviceTier::Enum RmpGetDeviceTier();
ExecutionModel::ResourceManager * g_pResourceManager;
ExecutionModel::ResourceSet * RmpActivityHostEnumerateResourceSetGetFirst(_RM_ACTIVITY_HOST *,unsigned long,_RM_RESOURCE_SET_CATEGORY);
ExecutionModel::ResourceSet * RmpActivityHostEnumerateResourceSetGetNext(_RM_ACTIVITY_HOST_RESOURCE_SET_ENUMERATION_CONTEXT *);
ExecutionModel::ResourceSet * RmpActivityHostFindProcessResourceSet(_RM_SERVICE_GLOBALS *,unsigned long);
ExecutionModel::ResourceSet * RmpActivityHostGetNextResourceSetInList(ExecutionModel::ResourceSet *);
MicrosoftTelemetryAssertTriggeredNode * g_MicrosoftTelemetryAssertsTriggeredList;
_CEM_LOCK RmpGlobalLock;
_HAM_ACTIVITY * HampActFindForClient(_HAM_CLIENT_CONTEXT *,unsigned __int64);
_HAM_ACTIVITY * HampHostGetFirstActivity(_RM_HAM_ACTIVITY_HOST *);
_HAM_ACTIVITY * HampHostGetNextActivity(_HAM_ACTIVITY *);
_HAM_DEPENDENCY_ACTION HampActGetDependencyAction(_HAM_ACTIVITY *,unsigned long);
_HAM_HOST_DEPENDENCY * HampDepGroupFindFirstDependencyForHost(_HAM_DEPENDENCY_GROUP *,_RM_HAM_ACTIVITY_HOST *);
_HAM_HOST_DEPENDENCY * HampDepGroupFindHostDependency(_HAM_DEPENDENCY_GROUP *,_HAM_HOST_DEPENDENCY_ID *);
_HAM_HOST_DEPENDENCY * HampDepGroupGetNextDependency(_HAM_HOST_DEPENDENCY *);
_HAM_PACKAGE * HampPkgFindPackage(_HOST_ACTIVITY_MANAGER *,_HAM_PACKAGE_INFO *);
_RM_ACTIVITY_ENFORCEMENT_INFO * RmpQoSGetEarliestHostInfo(_RM_QOS_CONTEXT *);
_RM_ACTIVITY_HOST * RmpPsmAppFamilyEnumerateActivityHostGetNext(_RM_PSM_APP_FAMILY_ACTIVITY_HOST_ENUMERATION_CONTEXT *);
_RM_CPU_SET_ALLOCATION * RmpCpuSetManagerFindAllocation(_RM_CPU_SET_MANAGER *,unsigned __int64);
_RM_CPU_SET_PROCESS * RmpCpuSetManagerFindProcess(_RM_CPU_SET_MANAGER *,void *);
_RM_EXECUTION_SPEED RmpResourceSetGetExecutionSpeed(ExecutionModel::ResourceSet *);
_RM_GAME_MODE_RECIPIENT_PROCESS * RmpGameModeFindRecipientProcessById(_RM_GAME_MODE_CONTEXT *,unsigned long);
_RM_HAM_ACTIVITY_HOST * HampAppGetFirstHost(_HAM_APPLICATION *);
_RM_HAM_ACTIVITY_HOST * HampAppGetFirstLiveHost(_HAM_APPLICATION *,_LIST_ENTRY *);
_RM_HAM_ACTIVITY_HOST * HampDepGroupGetNextHost(_RM_HAM_ACTIVITY_HOST *);
_RM_HAM_ACTIVITY_HOST * HampPkgGetFirstHost(_HAM_PACKAGE *);
_RM_HAM_ACTIVITY_HOST * HampPkgGetNextHost(_RM_HAM_ACTIVITY_HOST *);
_RM_HAM_ACTIVITY_HOST * RmHamHostReference(_RM_HAM_ACTIVITY_HOST *);
_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE RmpMemoryMonitorGetIdealTimerState(_RM_SYSTEM_STATE);
_RM_OBJECT_HEADER * RmpObjectTableEnumerationGetNext(_RM_OBJECT_TABLE_ENUMERATION_CONTEXT *);
_RM_OPTIMIZATION_STATE HampHostComputeDesiredPsmState(_RM_HAM_ACTIVITY_HOST *,unsigned long);
_RM_OPTIMIZATION_STATE RmpPolicyComputeDesiredEmptyState(_RM_POLICY *,_RM_ACTIVITY_HOST *,_RM_EMPTY_POLICY);
_RM_OPTIMIZATION_STATE RmpPolicyComputeDesiredState(_RM_ACTIVITY_HOST *);
_RM_OPTIMIZATION_STATE RmpPolicyGetDesiredEmptyOptimizationsForHost(_RM_POLICY *,_RM_ACTIVITY_HOST *);
_RM_PARTITION * RmpPartitionTableFindActivePartition(_RM_PARTITION_TABLE *,void *);
_RM_PARTITION * RmpPartitionTableFindPartitionInternal(_RM_PARTITION_TABLE *,void *,unsigned long);
_RM_POLICY_DIGEST RmpPolicyDigestCompute(ExecutionModel::ResourceSet *);
_RM_POLICY_DIGEST RmpPolicyDigestMerge(_RM_POLICY_DIGEST,_RM_POLICY_DIGEST);
_RM_PSM_APP_FAMILY * RmpPsmAppFamilyTableFind(_RM_SERVICE_GLOBALS *,_RM_PSM_APP_FAMILY_ID *);
_RM_REMEDIATION_STATUS RmpMemoryMonitorCheckAndApplyLazyEmptyPolicy(_RM_MEMORY_MONITOR_DATA *,_RM_RESOURCE_USAGE_LIMITS *);
_RM_REMEDIATION_STATUS RmpMemoryMonitorCheckMetricsAndRemediateSingleStep(_RM_MEMORY_MONITOR_DATA *,_RM_RESOURCE_USAGE_LIMITS *,_RM_RESOURCE_USAGE_LEVEL *);
_RM_REMEDIATION_STATUS RmpMemoryMonitorCommitSaveAndRevokeExtraActivities(_RM_MEMORY_MONITOR_DATA *,_RM_SYSTEM_MEMORY_METRICS *,_RM_SYSTEM_MEMORY_METRICS *);
_RM_REMEDIATION_STATUS RmpMemoryMonitorEmptySystemStore(_RM_MEMORY_MONITOR_DATA *,_RM_SYSTEM_MEMORY_METRICS *,_RM_SYSTEM_MEMORY_METRICS *);
_RM_REMEDIATION_STATUS RmpMemoryMonitorEmptyWorkingSets(_RM_MEMORY_MONITOR_DATA *,_RM_SYSTEM_MEMORY_METRICS *,_RM_SYSTEM_MEMORY_METRICS *,unsigned long);
_RM_REMEDIATION_STATUS RmpMemoryMonitorRevokeAnyHost(_RM_MEMORY_MONITOR_DATA *,_RM_SYSTEM_MEMORY_METRICS *,_RM_SYSTEM_MEMORY_METRICS *,_RM_RESOURCE_USAGE_LIMITS *);
_RM_REMEDIATION_STATUS RmpMemoryMonitorRevokeExtraActivities(_RM_MEMORY_MONITOR_DATA *,unsigned __int64);
_RM_RESOURCE_SET * RmpActivityHostGetForegroundSet(_RM_ACTIVITY_HOST *);
_RM_RESOURCE_SET * RmpActivityHostGetSponsorSet(_RM_ACTIVITY_HOST *);
_RM_RESOURCE_SET * RmpActivityHostTryGetPpleResourceSet(_RM_ACTIVITY_HOST *);
_RM_RESOURCE_SET * RmpResourceSetTableEnumerationGetNext(_RM_RS_ENUMERATION_CONTEXT *);
_RM_SERVICE_GLOBALS * RmSvcGlobals;
_RM_SERVICE_GLOBALS RmpSvcGlobals;
_RM_WNF_TEST_FLAGS RmWnfTestFlags;
_RTL_SRWLOCK g_MicrosoftTelemetryAssertLock;
_SYSTEM_STATE_TRACKER_WNF * TrackedWnfs;
_WNF_STATE_NAME SstpTargetWnfStateName;
_WNF_STATE_NAME StateChangedWnfName;
__int64 volatile NextDependencyGroupId;
int InlineIsEqualGUID(_GUID const &,_GUID const &);
int RmpMemoryMonitorCompareActivityHostMetricsForLargeHostAndEmpty(_RM_ACTIVITY_HOST_METRICS *,_RM_ACTIVITY_HOST_METRICS *);
int RmpMemoryMonitorCompareActivityHostsForCommitSave(void const *,void const *);
int RmpMemoryMonitorCompareActivityHostsForEmpty(void const *,void const *);
int RmpPolicyCompareActivityHostsByPriorityAndCommitEx(_RM_POLICY_RECLAIM_CONTEXT *,_RM_ACTIVITY_HOST_METRICS const *,_RM_ACTIVITY_HOST_METRICS const *);
int RmpPolicyCompareActivityHostsByPriorityAndCommitQSortThunk(void *,void const *,void const *);
long CreateModernResourceEnforcer(_PSM_EXT_INTERNAL_FUNCTION_TABLE4 *,ModernResourceEnforcer * *);
long HamSrvAddDependency(_HAM_CLIENT_CONTEXT *,void *,void *);
long HamSrvCloseActivity(_HAM_CLIENT_CONTEXT *,unsigned __int64);
long HamSrvCompleteExtendedExecution(_HAM_CLIENT_CONTEXT *,unsigned __int64);
long HamSrvConnect(_HOST_ACTIVITY_MANAGER *,unsigned long,_RM_SID *,unsigned long,_HAM_CLIENT_TYPE,_HAM_CLIENT_CONTEXT * *);
long HamSrvCreateActivity(_HAM_CLIENT_CONTEXT *,unsigned short const *,unsigned char *,unsigned long,unsigned long,unsigned long,unsigned __int64,_HAM_ACTIVITY_PROPERTIES *,unsigned __int64 *);
long HamSrvCreateActivityForProcess(_HAM_CLIENT_CONTEXT *,void *,_HAM_ACTIVITY_PROPERTIES *,unsigned __int64 *,unsigned char *);
long HamSrvCreateExtendedExecution(_HAM_CLIENT_CONTEXT *,_HAM_EXTENDED_EXECUTION_REASON,unsigned short const *,unsigned __int64 *);
long HamSrvIsHostHamManaged(_HAM_CLIENT_CONTEXT *,unsigned char *);
long HamSrvRegisterProcess(_HOST_ACTIVITY_MANAGER *,void *,void *,_PSM_APP_IDENTITY *,unsigned __int64,unsigned long);
long HamSrvRemoveDependency(_HAM_CLIENT_CONTEXT *,void *,void *);
long HamSrvStartActivityAsync(_HAM_CLIENT_CONTEXT *,unsigned __int64,_HAM_ACTIVITY_START_TYPE,_HAM_ACTIVITY_PROPERTIES *);
long HamSrvStartExtendedExecutionAsync(_HAM_CLIENT_CONTEXT *,unsigned __int64);
long HamSrvStopActivity(_HAM_CLIENT_CONTEXT *,unsigned __int64);
long HamSrvTerminateActivityHost(_HAM_CLIENT_CONTEXT *,unsigned __int64,_HAM_ACTIVITY_HOST_TERMINATE_TYPE,_HAM_TERMINATE_REASON);
long HampActBeginStateChange(_HAM_ACTIVITY *,_HAM_ACTIVITY_STATE);
long HampActClose(_HAM_ACTIVITY *);
long HampActCompareByHandle(void *,void *);
long HampActCreate(_HAM_CLIENT_CONTEXT *,_HOST_ACTIVITY_MANAGER *,_RM_HAM_ACTIVITY_HOST *,_HAM_ACTIVITY_PROPERTIES *,_HAM_ACTIVITY_DEPENDENCY_TYPE,_HAM_ACTIVITY * *);
long HampActNotifyRmStarted(_HAM_ACTIVITY *);
long HampActStartAsync(_HAM_ACTIVITY *);
long HampActStop(_HAM_ACTIVITY *);
long HampActTerminate(_HAM_ACTIVITY *,_HAM_ACTIVITY_HOST_TERMINATE_TYPE,_HAM_TERMINATE_REASON);
long HampAppCompareByIdentity(void *,void *);
long HampAppCreate(_HAM_PACKAGE *,_RM_PSM_KEY *,_HAM_APPLICATION * *);
long HampAppFindOrCreate(_HOST_ACTIVITY_MANAGER *,_RM_PSM_KEY *,_HAM_PACKAGE_INFO *,_HAM_APPLICATION * *);
long HampClientAllocateState(_HAM_CLIENT_CONTEXT *,_RM_SID *);
long HampClientCreate(_HOST_ACTIVITY_MANAGER *,unsigned long,_RM_SID *,unsigned long,_HAM_CLIENT_TYPE,_HAM_CLIENT_CONTEXT * *);
long HampDepGroupAddDependency(_HAM_DEPENDENCY_GROUP *,_HOST_ACTIVITY_MANAGER *,void *,void *);
long HampDepGroupCompareHostDependencyForHost(void *,_RTL_BALANCED_NODE *);
long HampDepGroupCompareHostDependencyForRbTree(void *,_RTL_BALANCED_NODE *);
long HampDepGroupCompareHostForRbTree(void *,_RTL_BALANCED_NODE *);
long HampDepGroupCreate(_HAM_DEPENDENCY_GROUP * *);
long HampDepGroupProcessActionForActivity(_HAM_ACTIVITY *,_HAM_DEPENDENCY_ACTION);
long HampDepGroupProcessActionForGroup(_HAM_DEPENDENCY_GROUP *,_HAM_DEPENDENCY_ACTION);
long HampDepGroupRemoveDependency(_HAM_DEPENDENCY_GROUP *,void *,void *);
long HampDepGroupRunStateChangeWorkerIteration(_HAM_DEPENDENCY_GROUP *);
long HampHostAddPpleDependency(_RM_HAM_ACTIVITY_HOST *,_RM_HAM_ACTIVITY_HOST *);
long HampHostAllocateState(_RM_HAM_ACTIVITY_HOST *,_TP_CALLBACK_ENVIRON_V3 *);
long HampHostCheckCompletePackageInsertion(_RM_HAM_ACTIVITY_HOST *);
long HampHostCompletePackageInsertion(_RM_HAM_ACTIVITY_HOST *);
long HampHostDepAllocateState(_HAM_HOST_DEPENDENCY *,unsigned long,unsigned long);
long HampHostFindOrCreate(_HOST_ACTIVITY_MANAGER *,_RM_PSM_HOST_INFO *,_RM_HAM_ACTIVITY_HOST * *);
long HampHostRegisterProcess(_RM_HAM_ACTIVITY_HOST *,void *,void *,_PSM_APP_IDENTITY *,unsigned __int64,unsigned long);
long HampManagerStart(_HOST_ACTIVITY_MANAGER *);
long HampManagerSystemStateChanged(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
long HampPkgCompareByIdentity(void *,void *);
long HampPkgCompareInfo(_HAM_PACKAGE_INFO *,_HAM_PACKAGE_INFO *);
long HampPkgCreate(_HOST_ACTIVITY_MANAGER *,_HAM_PACKAGE_INFO *,_HAM_PACKAGE * *);
long HampPkgFindOrCreate(_HOST_ACTIVITY_MANAGER *,_HAM_PACKAGE_INFO *,_HAM_PACKAGE * *);
long HampPkgHandleBackgroundAccessStateChange(_HOST_ACTIVITY_MANAGER *,_HAM_PACKAGE_INFO *,BACKGROUND_ACCESS_STATE);
long HampPkgQueryBackgroundAccessState(_HAM_PACKAGE *);
long HampRmContextAcquireResourceSet(HAM_ACTIVITY_RM_CONTEXT *,_HAM_ACTIVITY_RESOURCE_SET_TYPE);
long HampRmContextAllocateState(HAM_ACTIVITY_RM_CONTEXT *);
long HampRmContextCreate(_HAM_ACTIVITY *,void * *);
long HampRmHostInfoToPackageInfo(_RM_PSM_HOST_INFO *,_HAM_PACKAGE_INFO *);
long HampRpGetActivityResourceSetInfo(void *,_HAM_ACTIVITY_PROPERTIES *,_HAM_ACTIVITY_RESOURCE_SET_TYPE,ExecutionModel::_ResourceSetInfo *);
long HampSessionAllocateState(_HOST_ACTIVITY_MANAGER *,_HAM_SESSION *);
long HampSessionCheckBackgroundAccessAllowed(_HAM_SESSION *,_HAM_PACKAGE_INFO *,BACKGROUND_ACCESS_STATE *);
long HampSessionCompareById(void *,void *);
long HampSessionCreate(_HOST_ACTIVITY_MANAGER *,unsigned long,_HAM_SESSION * *);
long HampSessionFindOrCreate(_HOST_ACTIVITY_MANAGER *,unsigned long,_HAM_SESSION * *);
long HampSystemActivationClientActivate(void *,_PDC_ACTIVATION_PARAMETERS const *,void *,PDC_ACTIVITY_TYPE,unsigned short const *,unsigned long,void * *,_PDC_ACTIVATOR_ERROR_DETAIL *);
long HampSystemActivationClientRenewActivation(void *,_PDC_ACTIVATION_PARAMETERS const *,_PDC_ACTIVATOR_ERROR_DETAIL *);
long HampUtilCompareHostIds(unsigned __int64,unsigned __int64);
long HampUtilGetAumidFromPsmKey(unsigned short const *,unsigned long *,unsigned short *);
long HampUtilValidateAndCapturePsmInformation(_RM_PSM_HOST_INFO *,unsigned short const *,unsigned char *,unsigned long,unsigned long,unsigned long,unsigned __int64);
long InitializeResourceManagerServerProxy(_RM_SERVICE_GLOBALS *,ResourceManagerServerProxy * *);
long RmGameModeCpuSetManagerAcquireExplicitCpuSets(void *,void *,unsigned long,unsigned __int64,unsigned __int64 *);
long RmGameModeCpuSetManagerCreateClientContext(void *,unsigned long,void * *);
long RmGameModeCpuSetManagerRegisterProcessWithAllocation(void *,void *,void *,unsigned __int64,unsigned __int64 *);
long RmGameModeCpuSetManagerReleaseAllocation(void *,void *,unsigned __int64);
long RmGameModeCpuSetManagerReleaseProcessRegistration(void *,void *,unsigned __int64);
long RmHamFindHostByPid(_RM_SERVICE_GLOBALS *,unsigned long,_RM_HAM_ACTIVITY_HOST * *);
long RmHamFindOrCreateActivityHost(_RM_SERVICE_GLOBALS *,_RM_PSM_HOST_INFO *,_HAM_APPLICATION *,_RM_PARTITION *,_RM_ACTIVITY_HOST * *);
long RmHamFindOrCreateHost(_RM_SERVICE_GLOBALS *,_RM_PSM_HOST_INFO *,_RM_HAM_ACTIVITY_HOST * *);
long RmSrvAcquireResourceSet(_RM_SERVICE_GLOBALS *,ExecutionModel::_ResourceSetInfo *,ExecutionModel::IResourceSetCallback *,void *,unsigned short const *,void *,unsigned long,unsigned long,unsigned __int64,unsigned long,unsigned __int64,unsigned __int64,_RM_ACTIVATOR *,bool *);
long RmSrvApplyTerminalResourceSet(_RM_SERVICE_GLOBALS *,unsigned long);
long RmSrvCpuSetManagerAcquireCpuSets(_RM_CPU_SET_CLIENT_CONTEXT *,_RM_CPU_SET_REQUEST_INFORMATION *,unsigned __int64 *,_WNF_STATE_NAME *);
long RmSrvCpuSetManagerCreateClientContext(_RM_SERVICE_GLOBALS *,unsigned long,void * *);
long RmSrvCpuSetManagerRegisterProcessWithAllocation(_RM_CPU_SET_CLIENT_CONTEXT *,void *,unsigned __int64,unsigned __int64 *);
long RmSrvCpuSetManagerReleaseAllocation(_RM_CPU_SET_CLIENT_CONTEXT *,unsigned __int64);
long RmSrvCpuSetManagerReleaseProcessRegistration(_RM_CPU_SET_CLIENT_CONTEXT *,unsigned __int64);
long RmSrvCreateTerminalResourceSetFromResourceSetInfo(_RM_SERVICE_GLOBALS *,ExecutionModel::_ResourceSetInfo *,unsigned __int64 *);
long RmSrvGameModeDisableForRegisteredProcess(_RM_SERVICE_GLOBALS *,void *);
long RmSrvGameModeGetLargestValidResourceRequest(_RM_SERVICE_GLOBALS *,_RM_GAME_MODE_RESOURCE_REQUEST *);
long RmSrvGameModeReenableForRegisteredProcess(_RM_SERVICE_GLOBALS *,void *);
long RmSrvGameModeRegisterProcess(_RM_SERVICE_GLOBALS *,void *,_RM_GAME_MODE_RESOURCE_REQUEST *,unsigned long);
long RmSrvGameModeUnregisterProcess(_RM_SERVICE_GLOBALS *,void *);
long RmSrvHostNotificationSubscribe(_RM_ACTIVATOR *,unsigned __int64,unsigned __int64 *);
long RmSrvHostNotificationUnsubscribe(_RM_ACTIVATOR *,unsigned __int64);
long RmSrvHostTrySetCommitTargetForPple(_RM_SERVICE_GLOBALS *,unsigned __int64,unsigned long,unsigned __int64);
long RmSrvOnProcessTerminated(_RM_SERVICE_GLOBALS *,unsigned long);
long RmSrvResourceSetApply(_RM_SERVICE_GLOBALS *,unsigned __int64,unsigned long);
long RmSrvResourceSetCreateTerminalSet(_RM_SERVICE_GLOBALS *,unsigned __int64,unsigned __int64 *);
long RmSrvResourceSetExternalResourcePriorities(_RM_SERVICE_GLOBALS *,unsigned __int64,unsigned long,ExecutionModel::_ResourceInfo *);
long RmSrvResourceSetIsApplied(_RM_SERVICE_GLOBALS *,unsigned __int64,unsigned long *);
long RmSrvResourceSetNotifyPendingCommitLimitChange(_RM_SERVICE_GLOBALS *,unsigned __int64,unsigned __int64);
long RmSrvResourceSetReleaseResources(_RM_SERVICE_GLOBALS *,unsigned __int64,unsigned long);
long RmSrvResourceSetSetAutoRelease(_RM_SERVICE_GLOBALS *,unsigned __int64,unsigned long);
long RmSrvResourceSetUpdateProperties(_RM_SERVICE_GLOBALS *,unsigned __int64,_RM_ACTIVITY_IMPORTANCE *,_RM_RESOURCE_LIMITS *);
long RmpActivatorRegister(_RM_SERVICE_GLOBALS *,_RM_SID *,unsigned long,_RM_ACTIVATOR * *);
long RmpActivatorSubscribeForNotifications(_RM_ACTIVATOR *,_RM_ACTIVITY_HOST *,unsigned __int64 *);
long RmpActivatorUnsubscribeFromNotifications(_RM_ACTIVATOR *,unsigned __int64);
long RmpActivityHostActOnProcesses(_RM_ACTIVITY_HOST *,unsigned long,unsigned long,long (*)(_RM_ACTIVITY_HOST *,void *,unsigned long,void *),void *);
long RmpActivityHostAllocateAndInitialize(_RM_SERVICE_GLOBALS *,_RM_PARTITION *,_RM_PSM_HOST_INFO *,unsigned long,_RM_ACTIVITY_HOST * *);
long RmpActivityHostAllocateModuleState(_RM_SERVICE_GLOBALS *);
long RmpActivityHostApplyEnforcementSettings(_RM_ACTIVITY_HOST *,_RM_ENFORCEMENT_SETTINGS *,unsigned long);
long RmpActivityHostApplyExecutionSpeed(_RM_ACTIVITY_HOST *,_RM_ENFORCEMENT_SETTINGS *);
long RmpActivityHostApplyLimits(_RM_ACTIVITY_HOST *,_RM_ENFORCEMENT_SETTINGS *);
long RmpActivityHostCheckAndUpdateGpuInterference(_RM_ACTIVITY_HOST *,unsigned long);
long RmpActivityHostCommitDebtCallback(_RM_ACTIVITY_HOST *,void *,unsigned long,void *);
long RmpActivityHostCommitSavingsCallback(_RM_ACTIVITY_HOST *,void *,unsigned long,void *);
long RmpActivityHostComputeAndApplyEnforcementSettings(_RM_ACTIVITY_HOST *);
long RmpActivityHostCreateHostProcess(_RM_SERVICE_GLOBALS *,_RM_PARTITION *,_RM_PROCESS_INFO *,_RM_ACTIVITY_HOST * *);
long RmpActivityHostCreateHostPsm(_RM_SERVICE_GLOBALS *,_RM_PARTITION *,_RM_PSM_HOST_INFO *,unsigned long,_RM_ACTIVITY_HOST * *);
long RmpActivityHostDecommitOfferedMemory(_RM_ACTIVITY_HOST *,_RM_OFFERED_DECOMMIT_INFO *);
long RmpActivityHostDecommitOfferedMemoryCommitSaveCallback(_RM_ACTIVITY_HOST *,void *,unsigned long,void *);
long RmpActivityHostDecommitOfferedMemoryDxgCallback(_RM_ACTIVITY_HOST *,void *,unsigned long,void *);
long RmpActivityHostFindByHostId(_RM_SERVICE_GLOBALS *,unsigned __int64,_RM_ACTIVITY_HOST * *);
long RmpActivityHostFindByTypeAndIdentifier(_RM_SERVICE_GLOBALS *,_RM_ACTIVITY_HOST_TYPE,_RM_ACTIVITY_HOST_IDENTIFIER *,_RM_ACTIVITY_HOST * *);
long RmpActivityHostGetPsmProcessList(_RM_ACTIVITY_HOST *,unsigned __int64 * *,unsigned long *);
long RmpActivityHostIsGpuInterfering(_RM_ACTIVITY_HOST *,unsigned char *);
long RmpActivityHostPublishCommitLimit(_RM_ACTIVITY_HOST *,unsigned __int64,unsigned long);
long RmpActivityHostQueryByPidOrPsmInfo(_RM_SERVICE_GLOBALS *,unsigned long,_RM_ACTIVITY_HOST * *);
long RmpActivityHostQueryCommit(_RM_ACTIVITY_HOST *,unsigned __int64 *,unsigned __int64 *,unsigned __int64 *);
long RmpActivityHostQueryCommitDebt(_RM_ACTIVITY_HOST *,unsigned __int64 *);
long RmpActivityHostQueryEffectivePriority(_RM_ACTIVITY_HOST *,unsigned __int64,ExecutionModel::Priority::Enum *);
long RmpActivityHostQueryGpuInterferenceCounter(_RM_ACTIVITY_HOST *,unsigned __int64 *);
long RmpActivityHostQueryOfferedMemory(_RM_ACTIVITY_HOST *,unsigned __int64 *);
long RmpActivityHostQueryOfferedMemoryCommitSaveCallback(_RM_ACTIVITY_HOST *,void *,unsigned long,void *);
long RmpActivityHostQueryOfferedMemoryDxgCallback(_RM_ACTIVITY_HOST *,void *,unsigned long,void *);
long RmpActivityHostQueryProcessListForMetrics(_RM_ACTIVITY_HOST_METRICS *,unsigned long,_RM_PROCESS_ID_HOST_METRICS_PAIR * *,unsigned long *);
long RmpActivityHostQueryRawTypeSpecificCommit(_RM_ACTIVITY_HOST *,unsigned __int64 *);
long RmpActivityHostSetStoreHighMemoryPriority(_RM_ACTIVITY_HOST *);
long RmpActivityHostSetStoreHighMemoryPriorityProcessCallback(_RM_ACTIVITY_HOST *,void *,unsigned long,void *);
long RmpActivityHostTrySetCommitTargetForPple(_RM_ACTIVITY_HOST *,unsigned __int64);
long RmpAllocateAllModuleState(ModernResourceEnforcer *,_RM_SERVICE_GLOBALS *);
long RmpArrayGrow<_RM_PARTITION *>(_RM_PARTITION * * *,unsigned long *,unsigned long);
long RmpArrayGrow<_RM_PROCESS_ID_HOST_METRICS_PAIR>(_RM_PROCESS_ID_HOST_METRICS_PAIR * *,unsigned long *,unsigned long);
long RmpArrayGrow<_RM_RESOURCE_SET *>(_RM_RESOURCE_SET * * *,unsigned long *,unsigned long);
long RmpArrayInsertAtEnd<_RM_RESOURCE_SET *>(_RM_RESOURCE_SET * * *,unsigned long *,unsigned long *,_RM_RESOURCE_SET *);
long RmpCommitThresholdsScaleToTarget(_RM_COMMIT_THRESHOLDS *,unsigned __int64,_RM_COMMIT_THRESHOLDS *);
long RmpCommitValuesAdd(unsigned __int64,unsigned __int64,unsigned __int64 *);
long RmpCommitValuesMultiply(unsigned __int64,unsigned __int64,unsigned __int64 *);
long RmpCommitValuesSubtract(unsigned __int64,unsigned __int64,unsigned __int64 *);
long RmpCoreApiConnectToRmServer(_RM_SID *,unsigned long,_RM_ACTIVATOR * *,_WNF_STATE_NAME *);
long RmpCoreApiQueryHostMemoryLimitValues(_RM_SERVICE_GLOBALS *,unsigned __int64,unsigned __int64 *,_RM_ACTIVITY_HOST_CALLBACK_TYPE *);
long RmpCoreApiSetHostLimits(_RM_ACTIVATOR *,unsigned __int64,_RM_RESOURCE_LIMITS *);
long RmpCpuSetManagerAcquireCpuSets(_RM_CPU_SET_CLIENT_CONTEXT *,_RM_CPU_SET_REQUEST_INFORMATION *,unsigned long,_RM_CPU_SET_ALLOCATION * *);
long RmpCpuSetManagerAllocateObjectsForAllocation(_RM_CPU_SET_ALLOCATION *);
long RmpCpuSetManagerAllocateObjectsForProcess(void *,_RM_CPU_SET_PROCESS *);
long RmpCpuSetManagerAllocateState(_RM_SERVICE_GLOBALS *);
long RmpCpuSetManagerApplySystemAllowedMask(_RM_CPU_SET_MANAGER *);
long RmpCpuSetManagerAudioCpuWnfCallback(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
long RmpCpuSetManagerCheckRequestSatisfiability(_RM_CPU_SET_MANAGER *,_RM_CPU_SET_REQUEST_INFORMATION *,unsigned long);
long RmpCpuSetManagerCreateClientContext(_RM_CPU_SET_MANAGER *,unsigned long,_RM_CPU_SET_CLIENT_CONTEXT * *);
long RmpCpuSetManagerCreateProcessRegistration(_RM_CPU_SET_CLIENT_CONTEXT *,_RM_CPU_SET_PROCESS *,_RM_CPU_SET_ALLOCATION *,_RM_CPU_SET_PROCESS_REGISTRATION * *);
long RmpCpuSetManagerPublishAllocationState(_RM_CPU_SET_ALLOCATION *);
long RmpCpuSetManagerRegisterProcessWithAllocation(_RM_CPU_SET_CLIENT_CONTEXT *,void *,_RM_CPU_SET_ALLOCATION *,_RM_CPU_SET_PROCESS_REGISTRATION * *);
long RmpCpuSetManagerResetValidMask(_RM_CPU_SET_MANAGER *);
long RmpCpuSetManagerSetProcessDefaultMaskForGameMode(_RM_CPU_SET_PROCESS_REGISTRATION *,unsigned long);
long RmpEmPriorityCompare(ExecutionModel::Priority::Enum,ExecutionModel::Priority::Enum);
long RmpEnforcementApplyForegroundBoost(_RM_ACTIVITY_HOST *,void *,unsigned long,void *);
long RmpEnforcementApplyLimitsProcessHost(_RM_ACTIVITY_HOST *,_RM_ENFORCEMENT_SETTINGS *);
long RmpEnforcementApplyPowerBoost(unsigned long);
long RmpEnforcementEmptyProcess(_RM_ACTIVITY_HOST *,void *,unsigned long,void *);
long RmpEnforcementInfoInitializeCommon(_RM_ACTIVITY_HOST *);
long RmpEnforcementInfoInitializeProcess(_RM_ACTIVITY_HOST *,unsigned long,void *);
long RmpEnforcementUpdateSwapState(_RM_ACTIVITY_HOST *,unsigned long);
long RmpEnforcerContextAllocateState(ModernResourceEnforcer *,_RM_SERVICE_GLOBALS *);
long RmpGameModeAcquireCpuSetAllocation(_RM_GAME_MODE_CONTEXT *,_RM_GAME_MODE_RECIPIENT_PROCESS *);
long RmpGameModeAllocateObjectsForRecipientProcess(_RM_GAME_MODE_RECIPIENT_PROCESS *,void *);
long RmpGameModeAllocateState(_RM_GAME_MODE_CONTEXT *);
long RmpGameModeDisableForRegisteredProcess(_RM_GAME_MODE_CONTEXT *,void *);
long RmpGameModeReenableForRegisteredProcess(_RM_GAME_MODE_CONTEXT *,void *);
long RmpGameModeRegisterProcess(_RM_GAME_MODE_CONTEXT *,void *,_RM_GAME_MODE_RESOURCE_REQUEST *);
long RmpGameModeTryApplyCpuSetAllocation(_RM_GAME_MODE_CONTEXT *,_RM_GAME_MODE_RECIPIENT_PROCESS *);
long RmpGameModeTryApplyGraphicsPriority(_RM_GAME_MODE_CONTEXT *,_RM_GAME_MODE_RECIPIENT_PROCESS *);
long RmpGameModeTryApplyPriorityClass(_RM_GAME_MODE_CONTEXT *,_RM_GAME_MODE_RECIPIENT_PROCESS *);
long RmpGameModeTryApplySystemExtensionPolicy(_RM_GAME_MODE_CONTEXT *,_RM_GAME_MODE_RECIPIENT_PROCESS *);
long RmpGameModeUnregisterProcess(_RM_GAME_MODE_CONTEXT *,void *);
long RmpGetResourceManagerRegistryOverrides(_RM_RUNTIME_CONFIGURATION *,_RM_RUNTIME_CONFIGURATION *);
long RmpHamFindOrCreateDependencyGroup(_RM_SERVICE_GLOBALS *,_RM_PSM_HOST_INFO *,_HAM_DEPENDENCY_GROUP * *,_RM_HAM_ACTIVITY_HOST * *,unsigned long *,unsigned long *);
long RmpHamQueryActivityHostPartition(_RM_SERVICE_GLOBALS *,_RM_PSM_HOST_INFO *,_RM_PARTITION * *);
long RmpHandleMemoryWarning(_RM_ACTIVITY_HOST *);
long RmpHostSubscriptionCompareForRtlTree(void *,_RTL_BALANCED_NODE *);
long RmpLogTerminationForWerCallback(_RM_ACTIVITY_HOST *,void *,unsigned long,void *);
long RmpLookupDefAppsAccount(_RM_SERVICE_GLOBALS *);
long RmpLookupDefaultSystemManagedAccount(_RM_SERVICE_GLOBALS *);
long RmpMemoryMonitorAllocateState(_RM_MEMORY_MONITOR_DATA *);
long RmpMemoryMonitorInstanceOnSystemStateChanged(_RM_PARTITION *,void *);
long RmpMemoryMonitorStartThread(_RM_MEMORY_MONITOR_DATA *);
long RmpObjectTableAllocateState(_RM_OBJECT_TABLE *);
long RmpObjectTableFindObjectByHandle(_RM_OBJECT_TABLE *,unsigned __int64 *,_RM_OBJECT_HEADER * *);
long RmpObjectTableFindObjectByHandleWithLock(_RM_OBJECT_TABLE *,unsigned __int64 *,_RM_OBJECT_HEADER * *);
long RmpOfferLazyDecommitCheckQueueWork(_RM_SERVICE_GLOBALS *);
long RmpOfferLazyDecommitQueuePartitionHosts(_RM_PARTITION *,void *);
long RmpPartitionAddRemoveHost(_RM_PARTITION *,long,unsigned long);
long RmpPartitionStart(_RM_PARTITION *,void *,unsigned __int64);
long RmpPartitionTableActOnActivePartitions(_RM_PARTITION_TABLE *,unsigned long,long (*)(_RM_PARTITION *,void *),void *);
long RmpPartitionTableFindOrCreatePartition(_RM_PARTITION_TABLE *,void *,_RM_PARTITION * *);
long RmpPolicyResizeScratchBuffers(_RM_POLICY_WORK_BUFFER *,unsigned long,unsigned long);
long RmpPowerBoostContextAllocateState(_RM_SERVICE_GLOBALS *);
long RmpPowerBoostEnableDisable(_RM_SERVICE_GLOBALS *,unsigned long);
long RmpPsmAppFamilyAddActivityHost(_RM_PSM_APP_FAMILY *,_RM_ACTIVITY_HOST *);
long RmpPsmAppFamilyTableFindByHostInfo(_RM_SERVICE_GLOBALS *,_RM_PSM_HOST_INFO *,_RM_PSM_APP_FAMILY * *);
long RmpPsmAppFamilyTableFindOrCreate(_RM_SERVICE_GLOBALS *,_RM_PSM_HOST_INFO *,_RM_PSM_APP_FAMILY * *);
long RmpPsmAppFamilyTableTryRemoveActivityHost(_RM_ACTIVITY_HOST *);
long RmpPsmAppFamilyTryRemoveActivityHost(_RM_PSM_APP_FAMILY *,_RM_ACTIVITY_HOST *);
long RmpQoSEnableDisableForHost(_RM_ACTIVITY_HOST *,unsigned long);
long RmpQoSSetForHost(_RM_QOS_CONTEXT *,_RM_ACTIVITY_HOST *,unsigned long);
long RmpResourceSetAddExplicitDonor(_RM_RESOURCE_SET *,unsigned long,unsigned long);
long RmpResourceSetAddForegroundDonor(_RM_RESOURCE_SET *,unsigned long);
long RmpResourceSetAddPpleDonors(_RM_RESOURCE_SET *,unsigned long);
long RmpResourceSetAddRecipient(_RM_RESOURCE_SET *,_RM_RESOURCE_SET *,unsigned long);
long RmpResourceSetCheckAddPpleRecipient(_RM_RESOURCE_SET *);
long RmpResourceSetEstablishSponsorship(_RM_RESOURCE_SET *,unsigned long);
long RmpResourceSetIsEligibleForCustomTarget(_RM_RESOURCE_SET *,unsigned __int64);
long RmpResourceSetTableFindById(_RM_OBJECT_TABLE *,unsigned __int64,_RM_RESOURCE_SET * *);
long RmpResourceSetTableFindEmSetById(_RM_OBJECT_TABLE *,unsigned __int64,ExecutionModel::ResourceSet * *);
long RmpResourceSetTransition(_RM_RESOURCE_SET *,_RM_RESOURCE_SET *);
long RmpResourceSetTransitionSponsorships(_RM_RESOURCE_SET *,_RM_RESOURCE_SET *);
long RmpResourceSetTrySetPpleTarget(_RM_RESOURCE_SET *,unsigned __int64,unsigned long);
long RmpRpExtSetHostLimit(unsigned __int64,unsigned __int64,_RM_RESOURCE_LIMITS *);
long RmpRpExtStart(_RM_RESOURCE_POLICY_CONTEXT *,_RM_SERVICE_GLOBALS *);
long RmpRsEnforcedThresholdsCheckCreate(_RM_RESOURCE_SET *,_RM_COMMIT_THRESHOLDS *,_RM_RS_ENFORCEMENT_CONTEXT * *);
long RmpStartAllModules(_RM_SERVICE_GLOBALS *);
long RmpSystemApplyPsmPriorityToHost(_RM_ACTIVITY_HOST *,_PSM_APPLICATION_PRIORITY);
long RmpSystemChangePsmApplicationState(_RM_ACTIVITY_HOST *,_PSM_APPLICATION_STATE);
long RmpSystemDuplicateHandle(void *,unsigned long,void * *);
long RmpSystemFreezeHostJob(_RM_ACTIVITY_HOST *,unsigned char);
long RmpSystemGetProcessPsmInfo(unsigned long,_RM_PSM_HOST_INFO *);
long RmpSystemIsActivityHostTooLargeForSwap(_RM_ACTIVITY_HOST_METRICS *,unsigned long,unsigned long *);
long RmpSystemNotificationContextStart(_RM_SERVICE_GLOBALS *);
long RmpSystemNotificationInputFocusChangeCallback(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
long RmpSystemOpenProcess(void * *,unsigned long,unsigned long);
long RmpSystemPriorityBoostThreadBegin();
long RmpSystemQueryActivityHostPeakPrivateCommit(_RM_ACTIVITY_HOST *,unsigned __int64 *);
long RmpSystemQueryActivityHostRawCommit(_RM_ACTIVITY_HOST *,unsigned __int64 *,unsigned __int64 *);
long RmpSystemQueryCompressionProcessPrivateWorkingSet(unsigned __int64 *);
long RmpSystemQueryMemUtilMetricsForHosts(_RM_ACTIVITY_HOST_METRICS *,unsigned long,unsigned short);
long RmpSystemQueryPackagePartitions(unsigned short const *,unsigned __int64,void * *,void * *,unsigned long *);
long RmpSystemReferenceHostWithPsm(_RM_ACTIVITY_HOST *,void * *);
long RmpSystemSetActivityHostQoS(_RM_ACTIVITY_HOST *,unsigned long);
long RmpSystemSetProcessAllowedCpuSets(void *,unsigned __int64 *);
long RmpSystemSetProcessConstrainedCpuSets(void *,unsigned char);
long RmpSystemSetProcessDefaultCpuSets(void *,unsigned __int64 *);
long RmpSystemSetSystemAllowedCpuSets(unsigned __int64 *);
long RmpSystemTerminateHost(_RM_ACTIVITY_HOST *,unsigned long);
long RmpSystemTerminateModernHost(unsigned short const *,unsigned long,unsigned long,unsigned __int64,_BI_TERMINATE_HOST_ACTION);
long RmpSystemTrimCompressionProcessPrivateWorkingSet(unsigned __int64);
long RmpTelemetryContextStart(_RM_SERVICE_GLOBALS *);
long RmpTelemetryLogPartitionState(_RM_PARTITION *,void *);
long RmpUtilCreateSecurityDescriptorForApplicationWnf(_RM_SID *,void * *);
long RmpUtilCreateWnfStateNameForApplicationClient(_RM_SID *,unsigned long,_WNF_STATE_NAME *);
long RmpValidateAndCaptureUserSid(void *,unsigned long,unsigned long,_RM_SID *,_RM_SID * *);
long RmpWnfCreateStateNameForIpcEx(_RM_SID *,_RM_SID *,unsigned long,unsigned long,_WNF_STATE_NAME *);
long SstpHandleDplKeysStateChange(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
long SstpHandlePoEnergySaverStateChange(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
long SstpHandlePoPowerStateChange(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
long SstpHandlePoScenarioChange(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
long SstpHandleShellSuspendBgActivityChange(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
long SstpHandleThermalLimitingStateChange(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
long SstpOnStateChanged(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
long SstpStart(_SYSTEM_STATE_TRACKER *);
long SstpStateChangeTriage(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
long StringCchCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
unsigned __int64 * HampNextHandleValues;
unsigned __int64 HamObjectIdGenerate(_HAM_OBJECT_TYPE);
unsigned __int64 RmpActivityHostComputeCommitLimit(_RM_ACTIVITY_HOST *);
unsigned __int64 RmpActivityHostIdentifierHash(_RM_ACTIVITY_HOST_IDENTIFIER *,_RM_ACTIVITY_HOST_TYPE);
unsigned __int64 RmpPageSize;
unsigned __int64 RmpPolicyGetHostCommitForReclaim(_RM_RECLAIM_POLICY,_RM_ACTIVITY_HOST_METRICS const *);
unsigned __int64 RmpPsmAppFamilyIdHash(_RM_PSM_APP_FAMILY_ID *);
unsigned __int64 RmpResourceSetGetHostId(_RM_RESOURCE_SET *);
unsigned char HampHostCheckQueueTerminateWorker(_RM_HAM_ACTIVITY_HOST *,unsigned char);
unsigned char RmpActivityHostIsPple(_RM_ACTIVITY_HOST *);
unsigned char RmpCpuSetManagerIsGameModeRequestSatisfiable(_RM_CPU_SET_MANAGER *,unsigned long,unsigned long,unsigned __int64);
unsigned char RmpGameModeIsRecipientProcessPrimary(_RM_GAME_MODE_RECIPIENT_PROCESS *);
unsigned char RmpGameModeIsResourceRequestValid(_RM_SERVICE_GLOBALS *,_RM_GAME_MODE_RESOURCE_REQUEST *);
unsigned char RmpMemoryMonitorActiveLowPriFilterCallback(_RM_ACTIVITY_HOST *,void *);
unsigned char RmpMemoryMonitorCheckEvent(void *);
unsigned char RmpMemoryMonitorCheckPeriod(unsigned long,unsigned long);
unsigned char RmpMemoryMonitorEmptyPolicyFilterCallback(_RM_ACTIVITY_HOST *,void *);
unsigned char RmpMemoryMonitorIsLargeAppTerminationTarget(_RM_ACTIVITY_HOST *,_RM_ACTIVITY_HOST_METRICS *);
unsigned char RmpPolicyActivityHostIsValidEmptyTarget(_RM_ACTIVITY_HOST *);
unsigned char RmpPolicyFilterActivityHostWithFlags(_RM_ACTIVITY_HOST *,void *);
unsigned char RmpPolicyGenerateReclaimListForCommit(_RM_PARTITION *,_RM_POLICY_WORK_BUFFER *,_RM_ACTIVITY_HOST *,unsigned __int64,ExecutionModel::Priority::Enum,_RM_REVOKE_POLICY);
unsigned char RmpPolicyIsActivityHostSwappable(_RM_ACTIVITY_HOST *);
unsigned char RmpResourceSetIsCommitSaveEligible(ExecutionModel::_ResourceSetInfo const *);
unsigned char RmpSystemIsCpuSetControlDelegated();
unsigned char RmpSystemIsProcessInApplication(_RM_ACTIVITY_HOST *,void *);
unsigned long HampActCanBeInvalidated(_HAM_ACTIVITY *);
unsigned long HampActIsAllowed(_HAM_ACTIVITY *);
unsigned long HampActIsAllowedInSystemState(_HAM_ACTIVITY *,_SYSTEM_STATE_TRACKER_SYSTEM_STATE *);
unsigned long HampDepGroupIsCurrentThreadWorker(_HAM_DEPENDENCY_GROUP *);
unsigned long HampDepGroupLockAndReferenceMembers(_HAM_DEPENDENCY_GROUP *,_HAM_DEPENDENCY_WORKER_CONTEXT *);
unsigned long HampDepGroupTryEnterStateChange(_HAM_DEPENDENCY_GROUP *,unsigned __int64 *);
unsigned long HampHostCheckQueueStateWorker(_RM_HAM_ACTIVITY_HOST *,unsigned long);
unsigned long HampHostShouldTerminate(_RM_HAM_ACTIVITY_HOST *);
unsigned long HampLockTrackerId;
unsigned long HampUtilAreActivityPropertiesValid(_RM_PSM_HOST_INFO *,_HAM_ACTIVITY_PROPERTIES *);
unsigned long HampUtilCheckAndSanitizeActivityProperties(_HAM_ACTIVITY_PROPERTIES *);
unsigned long RmHamHostReferenceUnsafe(_RM_HAM_ACTIVITY_HOST *);
unsigned long RmpActivityHostCanDelete(_RM_ACTIVITY_HOST *);
unsigned long RmpActivityHostCheckQueueWork(_RM_ACTIVITY_HOST *,unsigned long);
unsigned long RmpActivityHostGetResourceSetCount(_RM_ACTIVITY_HOST *,unsigned long);
unsigned long RmpActivityHostIsForegroundBoostAppliedOrPending(_RM_ACTIVITY_HOST *);
unsigned long RmpActivityHostIsJobFrozen(_RM_ACTIVITY_HOST *);
unsigned long RmpActivityHostIsRevocable(_RM_ACTIVITY_HOST *);
unsigned long RmpActivityHostIsRunnable(_RM_ACTIVITY_HOST *,unsigned long);
unsigned long RmpArrayRemoveElement<_RM_RESOURCE_SET *>(_RM_RESOURCE_SET * *,unsigned long *,_RM_RESOURCE_SET *);
unsigned long RmpCpuSetManagerFindProcessComparator(_RTL_HASH_ENTRY *,void *);
unsigned long RmpCpuSetManagerGetSystemReserveTarget(_RM_CPU_SET_MANAGER *);
unsigned long RmpEmptyWorkerWaitForCompleteOrAbort(_RM_ACTIVITY_HOST *);
unsigned long RmpEnforcementEmptyProcessAndLog(_RM_ACTIVITY_HOST *,void *,unsigned long,unsigned long,unsigned long);
unsigned long RmpEnforcementIsHostAllowedToInSwap(_RM_ACTIVITY_HOST *,_RM_ENFORCER_CONTEXT *);
unsigned long RmpEnforcerJobCompletionThread(void *);
unsigned long RmpGetPoolSizesForDeviceTier(unsigned long *);
unsigned long RmpGpuMonitorIsGpuBusy(_RM_GPU_MONITOR *);
unsigned long RmpImportanceIsValidForConfiguration(_RM_ACTIVITY_IMPORTANCE,_RM_POLICY_CUSTOMIZATION_FLAGS);
unsigned long RmpMemoryMonitorGenerateHostListAndRevoke(_RM_PARTITION *,_RM_ACTIVITY_HOST_METRIC,unsigned __int64,_RM_REVOKE_POLICY,_RM_REVOKE_REASON_INTERNAL,_RM_ACTIVITY_HOST_REMEDIATION_GROUP *);
unsigned long RmpMemoryMonitorWaitForEvents(_RM_MEMORY_MONITOR_DATA *,unsigned long,unsigned long,_RM_MEMORY_MONITOR_EVENT *);
unsigned long RmpMemoryMonitorWorker(void *);
unsigned long RmpPartitionTablePartitionExists(_RM_PARTITION_TABLE *,void *,unsigned long);
unsigned long RmpPolicyGetActiveSessionCount(_RM_POLICY_WORK_BUFFER *);
unsigned long RmpPolicyIsHostCommitSaveEligible(_RM_POLICY *,_RM_ACTIVITY_HOST *,unsigned long);
unsigned long RmpPolicyTryGetRevokeAction(ExecutionModel::ResourceSet *,_RM_REVOKE_POLICY,_RM_REVOKE_ACTION *);
unsigned long RmpPsmAppFamilyCompareForHashTable(_RTL_HASH_ENTRY *,void *);
unsigned long RmpResourceCheckDestroyPartitionForAcquire(_RM_RESOURCE_SET *);
unsigned long RmpResourceSetInfoIsValid(ExecutionModel::_ResourceSetInfo const *);
unsigned long RmpResourceSetIsValidPredecessor(ExecutionModel::ResourceSet *,_RM_ACTIVITY_HOST *);
unsigned long RmpRsEnforcedThresholdsAreNecessary(_RM_RESOURCE_SET *,_RM_RESOURCE_SET *,_RM_COMMIT_THRESHOLDS *);
unsigned long RmpSystemIsSdBusBased();
unsigned long RmpSystemNotificationPowerCallback(void *,unsigned long,void *);
unsigned long RmpUtilIsProcessLive(unsigned long);
unsigned short const * RmpGetDeviceTierNameEx(ExecutionModel::DeviceTier::Enum);
void * GlobalSystemStateTracker;
void * operator new(unsigned __int64);
void * operator new(unsigned __int64,std::nothrow_t const &);
void * operator new[](unsigned __int64);
void HamRmHostLogRundownEvents(_RM_HAM_ACTIVITY_HOST *);
void HamSrvDisconnect(_HAM_CLIENT_CONTEXT *);
void HampActAddToClient(_HAM_ACTIVITY *);
void HampActCheckEnterDependencyWorker(_HAM_ACTIVITY *);
void HampActDestroy(_CEM_RC_OBJECT *);
void HampActEndStateChange(_HAM_ACTIVITY *,unsigned long);
void HampActInitialize(_HAM_ACTIVITY_DEPENDENCY_TYPE,_HOST_ACTIVITY_MANAGER *,_HAM_ACTIVITY_PROPERTIES *,_RM_HAM_ACTIVITY_HOST *,_HAM_ACTIVITY *);
void HampActInsert(_HAM_ACTIVITY *);
void HampActInvalidateAndNotify(_HAM_ACTIVITY *);
void HampActPdcActivationCallback(void *,_PDC_ACTIVATOR_ERROR_DETAIL,void *,void *);
void HampActRemoveFromClient(_HAM_ACTIVITY *);
void HampActRequestStop(_HAM_ACTIVITY *,_HAM_ACTIVITY_STOP_REQUEST_TYPE);
void HampActivityPropertiesInitialize(unsigned short const *,unsigned short const *,_HAM_ACTIVITY_PROPERTIES *);
void HampAppAcquireLockExclusive(_HAM_APPLICATION *);
void HampAppAcquireLockShared(_HAM_APPLICATION *);
void HampAppDestroy(_CEM_RC_OBJECT *);
void HampAppInitialize(_HAM_PACKAGE *,_RM_PSM_KEY *,_HAM_APPLICATION *);
void HampAppIssueStateChangeNotification(_HAM_APPLICATION *,_HAM_EXTERNAL_APPLICATION_STATE);
void HampAppReleaseLockExclusive(_HAM_APPLICATION *);
void HampAppReleaseLockShared(_HAM_APPLICATION *);
void HampAppTryChangeExternalState(_HAM_APPLICATION *,_HAM_EXTERNAL_APPLICATION_STATE);
void HampClientAcquireLockExclusive(_HAM_CLIENT_CONTEXT *);
void HampClientDestroy(_HAM_CLIENT_CONTEXT *);
void HampClientInitialize(unsigned long,unsigned long,_HAM_CLIENT_TYPE,_HAM_CLIENT_CONTEXT *);
void HampClientInsert(_HAM_CLIENT_CONTEXT *,_HOST_ACTIVITY_MANAGER *);
void HampClientPkgDestroy(_CEM_RC_OBJECT *);
void HampClientReleaseLockExclusive(_HAM_CLIENT_CONTEXT *);
void HampClientRemove(_HAM_CLIENT_CONTEXT *);
void HampDepGroupAcquireLockExclusive(_HAM_DEPENDENCY_GROUP *);
void HampDepGroupAddHost(_HAM_DEPENDENCY_GROUP *,_RM_HAM_ACTIVITY_HOST *);
void HampDepGroupAddRemoveResourceWaiter(_HAM_DEPENDENCY_GROUP *,long);
void HampDepGroupDereference(_HAM_DEPENDENCY_GROUP *);
void HampDepGroupDereferenceMembers(_HAM_DEPENDENCY_WORKER_CONTEXT *);
void HampDepGroupEvaluateDependencies(_HAM_DEPENDENCY_GROUP *,_LIST_ENTRY *,_HAM_DEPENDENCY_WORKER_CONTEXT *);
void HampDepGroupInitialize(_HAM_DEPENDENCY_GROUP *);
void HampDepGroupQueueWorker(_HAM_DEPENDENCY_GROUP *);
void HampDepGroupReleaseLockExclusive(_HAM_DEPENDENCY_GROUP *);
void HampDepGroupRemoveHost(_HAM_DEPENDENCY_GROUP *,_RM_HAM_ACTIVITY_HOST *);
void HampDepGroupRunStateChangeWorker(_HAM_DEPENDENCY_GROUP *);
void HampDepGroupSetOwner(_HAM_DEPENDENCY_GROUP *,_RM_HAM_ACTIVITY_HOST *,_HOST_ACTIVITY_MANAGER *);
void HampDepGroupStateWorker(_TP_CALLBACK_INSTANCE *,void *,_TP_WORK *);
void HampDepGroupUnlockMembers(_HAM_DEPENDENCY_WORKER_CONTEXT *);
void HampDepGroupWaitEnterStateChange(_HAM_DEPENDENCY_GROUP *);
void HampExtendedExecutionComputePolicy(_RM_PSM_HOST_INFO *,_HAM_EXTENDED_EXECUTION_REASON,unsigned short const *,_HAM_ACTIVITY_PROPERTIES *);
void HampHostAcquireLockExclusiveEx(_RM_HAM_ACTIVITY_HOST *,unsigned long);
void HampHostAcquireLockShared(_RM_HAM_ACTIVITY_HOST *);
void HampHostCheckTerminate(_RM_HAM_ACTIVITY_HOST *);
void HampHostComputeActivityCounters(_RM_HAM_ACTIVITY_HOST *);
void HampHostDepCleanup(_HAM_HOST_DEPENDENCY *);
void HampHostDepDestroy(_HAM_HOST_DEPENDENCY *);
void HampHostDepInitialize(_RM_HAM_ACTIVITY_HOST *,_RM_HAM_ACTIVITY_HOST *,_HAM_HOST_DEPENDENCY *);
void HampHostDepProcessExitCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_WAIT *,long);
void HampHostEvaluatePendState(_RM_HAM_ACTIVITY_HOST *);
void HampHostInitialize(unsigned long,_RM_PSM_HOST_INFO *,_RM_HAM_ACTIVITY_HOST *);
void HampHostNotifyZeroProcess(_RM_HAM_ACTIVITY_HOST *);
void HampHostQueueTerminate(_RM_HAM_ACTIVITY_HOST *,_HAM_ACTIVITY_HOST_TERMINATE_TYPE,_HAM_TERMINATE_REASON,_HAM_CLIENT_CONTEXT *);
void HampHostReleaseLockExclusiveEx(_RM_HAM_ACTIVITY_HOST *,unsigned long);
void HampHostReleaseLockShared(_RM_HAM_ACTIVITY_HOST *);
void HampHostResourceTimerCallback(void *,void *);
void HampHostRevokeQuiesceExtension(_RM_HAM_ACTIVITY_HOST *);
void HampHostRundown(_RM_HAM_ACTIVITY_HOST *);
void HampHostUpdateQuiesceState(_RM_HAM_ACTIVITY_HOST *,unsigned __int64 *,unsigned __int64 *);
void HampManagerAcquireLockExclusive(_HOST_ACTIVITY_MANAGER *);
void HampManagerAcquireLockShared(_HOST_ACTIVITY_MANAGER *);
void HampManagerInitialize(_HOST_ACTIVITY_MANAGER *);
void HampManagerIssueStateChangeNotifications(_HOST_ACTIVITY_MANAGER *,unsigned long,_HAM_STATE_CHANGE_NOTIFICATION_PAYLOAD *);
void HampManagerReleaseLockExclusive(_HOST_ACTIVITY_MANAGER *);
void HampManagerReleaseLockShared(_HOST_ACTIVITY_MANAGER *);
void HampManagerRemoveDependencyGroup(_HOST_ACTIVITY_MANAGER *);
void HampManagerRundown(_HOST_ACTIVITY_MANAGER *);
void HampPkgAcquireLockExclusive(_HAM_PACKAGE *);
void HampPkgAcquireLockShared(_HAM_PACKAGE *);
void HampPkgDestroy(_CEM_RC_OBJECT *);
void HampPkgDisableServicing(_HAM_PACKAGE *);
void HampPkgEnterInsertion(_HAM_PACKAGE *);
void HampPkgFindOrInsertApplication(_HAM_PACKAGE *,_HAM_APPLICATION *,_HAM_APPLICATION * *);
void HampPkgInitialize(_HOST_ACTIVITY_MANAGER *,_HAM_PACKAGE_INFO *,_HAM_SESSION *,_HAM_PACKAGE *);
void HampPkgIssueStateChangeNotification(_HAM_PACKAGE *,_HAM_EXTERNAL_APPLICATION_STATE);
void HampPkgReleaseLockExclusive(_HAM_PACKAGE *);
void HampPkgReleaseLockShared(_HAM_PACKAGE *);
void HampPkgUpdateApplicationStateCounters(_HAM_PACKAGE *,_HAM_EXTERNAL_APPLICATION_STATE,_HAM_EXTERNAL_APPLICATION_STATE);
void HampPkgWaitForInitializationComplete(_HAM_PACKAGE *);
void HampRmContextDestroy(void *);
void HampRmContextStopActivity(void *);
void HampSessionDestroy(_CEM_RC_OBJECT *);
void HampSystemActivationClientDeactivate(void *);
void HampSystemIssueActivityCallback(_HAM_CLIENT_CONTEXT *,_HAM_ACTIVITY_CALLBACK_PAYLOAD *);
void HampTerminateHostWorker(_TP_CALLBACK_INSTANCE *,void *,_TP_WORK *);
void HampUtilStartLockTracking(_CEM_LOCK_TRACKER *);
void LogQueryApplicationProperties(long,unsigned short const *,_RM_SID *,unsigned long,unsigned long,unsigned __int64,unsigned long *,unsigned __int64 *,unsigned __int64 *,unsigned __int64 *,_PSM_APPLICATION_PRIORITY *,unsigned __int64 *);
void RmHamEnforcementEmptySignalAbort(_RM_HAM_ACTIVITY_HOST *);
void RmHamHostStateWorker(_TP_CALLBACK_INSTANCE *,void *,_TP_WORK *);
void RmHamHostStateWorkerWaitForQuiesce(_RM_HAM_ACTIVITY_HOST *,unsigned __int64 *,unsigned __int64 *);
void RmpAcquireGlobalLock();
void RmpActivatorCleanup(_RM_ACTIVATOR *);
void RmpActivityHostAddResourceSet(_RM_ACTIVITY_HOST *,ExecutionModel::ResourceSet *,_RM_RESOURCE_SET_CATEGORY);
void RmpActivityHostAddToRemediationGroup(_RM_ACTIVITY_HOST *,_RM_ACTIVITY_HOST_REMEDIATION_GROUP *);
void RmpActivityHostAddToTables(_RM_ACTIVITY_HOST *);
void RmpActivityHostAggregateCommitValues(_RM_ACTIVITY_HOST *);
void RmpActivityHostAggregateHamCommitValues(_RM_ACTIVITY_HOST *);
void RmpActivityHostAggregateMemUtilMetricsByProcess(_RM_PROCESS_ID_HOST_METRICS_PAIR *,unsigned long,_MEMUTIL_PROCESS_METRICS *,unsigned short);
void RmpActivityHostAggregateResourceSetCommitValues(ExecutionModel::ResourceSet *,_RM_COMMIT_THRESHOLDS *,_RM_COMMIT_THRESHOLDS *,unsigned __int64 *,unsigned __int64 *);
void RmpActivityHostApplyResourceSet(_RM_ACTIVITY_HOST *,ExecutionModel::ResourceSet *);
void RmpActivityHostCheckQueueDelete(_RM_ACTIVITY_HOST *);
void RmpActivityHostCleanupCommonState(_RM_ACTIVITY_HOST *);
void RmpActivityHostCleanupModule(_RM_SERVICE_GLOBALS *);
void RmpActivityHostCleanupRemediationGroup(_RM_ACTIVITY_HOST_REMEDIATION_GROUP *);
void RmpActivityHostCommitUseUpdateWorker(_TP_CALLBACK_INSTANCE *,void *,_TP_WORK *);
void RmpActivityHostCompleteInitialization(_RM_ACTIVITY_HOST *);
void RmpActivityHostComputeCommitEstimate(unsigned __int64,unsigned __int64,unsigned __int64 *,unsigned __int64 *);
void RmpActivityHostComputeEnforcementSettings(_RM_ACTIVITY_HOST *,unsigned __int64,_RM_COMMIT_LEVEL *,_RM_ENFORCEMENT_SETTINGS *);
void RmpActivityHostDelete(_RM_ACTIVITY_HOST *);
void RmpActivityHostFinalCleanup(_RM_ACTIVITY_HOST *);
void RmpActivityHostGetCommitThresholds(_RM_ACTIVITY_HOST *,unsigned __int64,unsigned __int64 *,unsigned __int64 *,unsigned __int64 *);
void RmpActivityHostGetTracingId(_RM_ACTIVITY_HOST *,_RM_ACTIVITY_HOST_TRACING_ID *);
void RmpActivityHostPopulateMetrics(_RM_POLICY_WORK_BUFFER *,unsigned short,ExecutionModel::Priority::Enum);
void RmpActivityHostPopulateRunnabilitySettings(_RM_ACTIVITY_HOST *,_RM_ENFORCEMENT_SETTINGS *);
void RmpActivityHostRelease(_RM_ACTIVITY_HOST *);
void RmpActivityHostRemoveFromRemediationGroup(_RM_ACTIVITY_HOST *,unsigned char);
void RmpActivityHostRemoveFromTables(_RM_ACTIVITY_HOST *);
void RmpActivityHostRemoveResourceSet(_RM_ACTIVITY_HOST *,ExecutionModel::ResourceSet *,_RM_RESOURCE_SET_CATEGORY);
void RmpActivityHostResourceSetsChanged(_RM_ACTIVITY_HOST *,unsigned long);
void RmpActivityHostRevokeResourceSets(_RM_ACTIVITY_HOST *,_RM_REVOKE_POLICY,_RM_REVOKE_REASON_INTERNAL,ExecutionModel::ResourceSet *);
void RmpActivityHostSetAggregateCommitValues(_RM_ACTIVITY_HOST *,_RM_COMMIT_THRESHOLDS *,_RM_COMMIT_THRESHOLDS *,unsigned __int64,unsigned __int64);
void RmpActivityHostSetCommitSavings(_RM_ACTIVITY_HOST *,unsigned long);
void RmpActivityHostUnapplyResourceSet(_RM_ACTIVITY_HOST *,ExecutionModel::ResourceSet *,unsigned long);
void RmpActivityHostUpdateCommitUseAsync(_RM_ACTIVITY_HOST *);
void RmpActivityHostUpdateCommitUseState(_RM_ACTIVITY_HOST *,unsigned __int64,_RM_COMMIT_LEVEL);
void RmpActivityHostUpdateDigests(_RM_ACTIVITY_HOST *,unsigned long);
void RmpActivityHostUpdateImportance(_RM_ACTIVITY_HOST *,unsigned long);
void RmpActivityHostZeroProcessNotification(_RM_ACTIVITY_HOST *);
void RmpCommitThresholdsAdd(_RM_COMMIT_THRESHOLDS *,_RM_COMMIT_THRESHOLDS *,_RM_COMMIT_THRESHOLDS *);
void RmpCommitThresholdsMultiplyByValue(_RM_COMMIT_THRESHOLDS *,unsigned __int64,_RM_COMMIT_THRESHOLDS *);
void RmpCommitThresholdsSubtractValue(_RM_COMMIT_THRESHOLDS *,unsigned __int64);
void RmpCommitValuesDivide(unsigned __int64,unsigned __int64,unsigned __int64 *);
void RmpCopyMemUtilHostMetrics(_RM_ACTIVITY_HOST_METRICS *,_RM_ACTIVITY_HOST_METRICS *);
void RmpCpuSetManagerAcquireSetsForAllocation(_RM_CPU_SET_MANAGER *,_RM_CPU_SET_ALLOCATION *,unsigned long,_RM_CPU_SET_REQUEST_INFORMATION *);
void RmpCpuSetManagerApplyAllPolicyChanges(_RM_CPU_SET_MANAGER *);
void RmpCpuSetManagerApplyProcessPolicy(_RM_CPU_SET_MANAGER *,_RM_CPU_SET_PROCESS *);
void RmpCpuSetManagerDestroyProcess(_RM_CPU_SET_MANAGER *,_RM_CPU_SET_PROCESS *);
void RmpCpuSetManagerGetGameModeRequestLimits(_RM_CPU_SET_MANAGER *,unsigned long,unsigned long *,unsigned __int64 *);
void RmpCpuSetManagerInitializeAllocation(_RM_CPU_SET_MANAGER *,_RM_CPU_SET_ALLOCATION *);
void RmpCpuSetManagerInitializeProcessRegistration(_RM_CPU_SET_PROCESS_REGISTRATION *);
void RmpCpuSetManagerInsertAllocation(_RM_CPU_SET_CLIENT_CONTEXT *,_RM_CPU_SET_ALLOCATION *);
void RmpCpuSetManagerInsertProcess(_RM_CPU_SET_MANAGER *,_RM_CPU_SET_PROCESS *);
void RmpCpuSetManagerInsertProcessRegistration(_RM_CPU_SET_CLIENT_CONTEXT *,_RM_CPU_SET_PROCESS *,_RM_CPU_SET_ALLOCATION *,_RM_CPU_SET_PROCESS_REGISTRATION *);
void RmpCpuSetManagerInvalidateAllocation(_RM_CPU_SET_MANAGER *,_RM_CPU_SET_ALLOCATION *);
void RmpCpuSetManagerInvalidateProcessRegistration(_RM_CPU_SET_MANAGER *,_RM_CPU_SET_PROCESS_REGISTRATION *);
void RmpCpuSetManagerMarkProcessDirty(_RM_CPU_SET_MANAGER *,_RM_CPU_SET_PROCESS *);
void RmpCpuSetManagerPopulateCpuSetIdsFromAllocation(_RM_CPU_SET_ALLOCATION *,unsigned long *,unsigned long *);
void RmpCpuSetManagerReleaseAllProcessorsFromAllocation(_RM_CPU_SET_MANAGER *,_RM_CPU_SET_ALLOCATION *);
void RmpCpuSetManagerReleaseAllocation(_RM_CPU_SET_ALLOCATION *);
void RmpCpuSetManagerReleaseClientContext(_RM_CPU_SET_CLIENT_CONTEXT *);
void RmpCpuSetManagerReleaseProcessRegistrationEx(_RM_CPU_SET_MANAGER *,_RM_CPU_SET_PROCESS_REGISTRATION *,unsigned long);
void RmpCpuSetManagerRemoveRegistrationFromAllocation(_RM_CPU_SET_MANAGER *,_RM_CPU_SET_PROCESS_REGISTRATION *);
void RmpCpuSetManagerSweepInvalidAllocations(_RM_CPU_SET_MANAGER *);
void RmpEmptyWorkerCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_WORK *);
void RmpEmptyWorkerCleanup(_RM_EMPTY_WORKER_CONTEXT *);
void RmpEmptyWorkerRun(_RM_ACTIVITY_HOST *,_RM_OPTIMIZATION_STATE);
void RmpEnforcementOptimizeHost(_RM_ACTIVITY_HOST *,_RM_OPTIMIZATION_STATE);
void RmpEnforcementUnoptimizeHost(_RM_ACTIVITY_HOST *,_RM_ENFORCER_CONTEXT *,_RM_OPTIMIZATION_STATE);
void RmpEnforcementWaitForInSwapTurn(_RM_ACTIVITY_HOST *,_RM_ENFORCER_CONTEXT *);
void RmpEnforcementWorkerSynchronize(_RM_ACTIVITY_HOST *);
void RmpEnforcerContextInitialize(_RM_RUNTIME_CONFIGURATION *,_RM_SERVICE_GLOBALS *);
void RmpEnforcerContextRundown(_RM_SERVICE_GLOBALS *);
void RmpGameModeAcquireAndApplyRecipientResources(_RM_GAME_MODE_CONTEXT *,_RM_GAME_MODE_RECIPIENT_PROCESS *);
void RmpGameModeAcquireGlobalResources(_RM_GAME_MODE_CONTEXT *,_LIST_ENTRY *);
void RmpGameModeAddRecipientToAuxiliaryList(_RM_GAME_MODE_RECIPIENT_PROCESS *);
void RmpGameModeApplyGlobalPolicies(_RM_GAME_MODE_CONTEXT *);
void RmpGameModeApplyNewRecipientPolicies(_RM_GAME_MODE_CONTEXT *,_LIST_ENTRY *);
void RmpGameModeCancelRecipientProcessThreadpoolWait(_RM_GAME_MODE_RECIPIENT_PROCESS *);
void RmpGameModeDereferenceRecipientProcess(_RM_GAME_MODE_RECIPIENT_PROCESS *);
void RmpGameModeInitialize(_RM_SERVICE_GLOBALS *,_RM_GAME_MODE_CONTEXT *);
void RmpGameModeInsertRecipientProcess(_RM_GAME_MODE_RECIPIENT_PROCESS *);
void RmpGameModeNotifyExtensionRecipientsPresent(_RM_GAME_MODE_CONTEXT *,unsigned char);
void RmpGameModePolicyWorker(_TP_CALLBACK_INSTANCE *,void *,_TP_WORK *);
void RmpGameModeQueuePolicyWorkerWithLock(_RM_GAME_MODE_CONTEXT *);
void RmpGameModeRecipientProcessTerminationCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_WAIT *,long);
void RmpGameModeReleaseCpuSetAllocation(_RM_GAME_MODE_CONTEXT *,_RM_GAME_MODE_RECIPIENT_PROCESS *);
void RmpGameModeReleaseUnusedGlobalResources(_RM_GAME_MODE_CONTEXT *);
void RmpGameModeRemoveRecipientProcess(_RM_GAME_MODE_RECIPIENT_PROCESS *);
void RmpGameModeRundown(_RM_GAME_MODE_CONTEXT *);
void RmpGameModeRundownRecipientProcessTreeCallback(_RTL_BALANCED_NODE *,void *);
void RmpGameModeUnapplyAndReleaseRecipientResources(_RM_GAME_MODE_CONTEXT *,_RM_GAME_MODE_RECIPIENT_PROCESS *);
void RmpGameModeUnapplyCpuSetAllocation(_RM_GAME_MODE_CONTEXT *,_RM_GAME_MODE_RECIPIENT_PROCESS *);
void RmpGameModeUnapplyGraphicsPriority(_RM_GAME_MODE_CONTEXT *,_RM_GAME_MODE_RECIPIENT_PROCESS *);
void RmpGameModeUnapplyPriorityClass(_RM_GAME_MODE_CONTEXT *,_RM_GAME_MODE_RECIPIENT_PROCESS *);
void RmpGameModeUnapplySystemExtensionPolicy(_RM_GAME_MODE_CONTEXT *,_RM_GAME_MODE_RECIPIENT_PROCESS *);
void RmpGetEstimationKeyFromPsmKey(unsigned short const *,_RM_PSM_KEY *);
void RmpGetResourceManagerRuntimeConfiguration(_RM_RUNTIME_CONFIGURATION *);
void RmpGpuMonitorDisable(_RM_GPU_MONITOR *);
void RmpGpuMonitorDisableForHost(_RM_ACTIVITY_HOST *);
void RmpGpuMonitorEnable(_RM_GPU_MONITOR *);
void RmpGpuMonitorEnableForHost(_RM_ACTIVITY_HOST *);
void RmpGpuMonitorTimerCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
void RmpHostSubscriptionCleanup(_RM_HOST_SUBSCRIPTION *,unsigned long);
void RmpHostSubscriptionDeleteForRtlTree(_RTL_BALANCED_NODE *,void *);
void RmpInitializeAllModules(_RM_RUNTIME_CONFIGURATION *,_RM_SERVICE_GLOBALS *);
void RmpInitializePsmApplicationProperties(unsigned long *,unsigned __int64 *,unsigned __int64 *,unsigned __int64 *,_PSM_APPLICATION_PRIORITY *,unsigned __int64 *,unsigned char,_PSM_APPLICATION_PROPERTIES *);
void RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy(_RM_MEMORY_MONITOR_DATA *,_RM_RESOURCE_USAGE_LIMITS *);
void RmpMemoryMonitorCheckQueueDecommitRepurposedMemory(_RM_MEMORY_MONITOR_DATA *);
void RmpMemoryMonitorEmptyPolicyActOnHosts(_RM_MEMORY_MONITOR_DATA *,_RM_ACTIVITY_HOST_METRICS *,unsigned long,unsigned __int64,unsigned long,_RM_ACTIVITY_HOST_REMEDIATION_GROUP *,unsigned char *,unsigned char *);
void RmpMemoryMonitorEmptyPolicyProcessHostArray(_RM_ACTIVITY_HOST_METRICS *,unsigned long,unsigned long);
void RmpMemoryMonitorRebootIfAble(_RM_MEMORY_MONITOR_DATA *,_RM_RESOURCE_USAGE_LIMITS *);
void RmpMemoryMonitorSetTimer(_RM_MEMORY_MONITOR_DATA *,_RM_MEMORY_MONITOR_PERIODIC_TIMER_STATE,_RM_RESOURCE_USAGE_LEVEL);
void RmpMemoryMonitorSetTimerIfEnabled(_RM_MEMORY_MONITOR_DATA *,_RM_RESOURCE_USAGE_LEVEL);
void RmpMemoryMonitorTimerCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
void RmpMemoryMonitorUpdateMemoryUsageLevel(_RM_MEMORY_MONITOR_DATA *,_RM_RESOURCE_USAGE_LEVEL);
void RmpObjectAddRef(_RM_OBJECT_HEADER *);
void RmpObjectRelease(_RM_OBJECT_HEADER *);
void RmpObjectTableAddObject(_RM_OBJECT_TABLE *,_RM_OBJECT_HEADER *);
void RmpObjectTableAddObjectWithLock(_RM_OBJECT_TABLE *,_RM_OBJECT_HEADER *);
void RmpObjectTableCleanup(_RM_OBJECT_TABLE *);
void RmpObjectTableEnumerationBegin(_RM_OBJECT_TABLE *,_RM_OBJECT_TABLE_ENUMERATION_CONTEXT *);
void RmpObjectTableEnumerationEnd(_RM_OBJECT_TABLE_ENUMERATION_CONTEXT *);
void RmpObjectTableInitialize(_RM_OBJECT_TABLE *);
void RmpObjectTableRemoveObject(_RM_OBJECT_TABLE *,_RM_OBJECT_HEADER *);
void RmpOfferLazyDecommitWorkerCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_WORK *);
void RmpPartitionCleanup(_RM_PARTITION *);
void RmpPartitionInitialize(_RM_SERVICE_GLOBALS *,_RM_PARTITION *);
void RmpPartitionRelease(_RM_PARTITION *);
void RmpPartitionRevokeAllSets(_RM_PARTITION *,ExecutionModel::ResourceSet *);
void RmpPartitionTableRemovePartition(_RM_PARTITION_TABLE *,_RM_PARTITION *);
void RmpPolicyComputeUsageLimits(_RM_USAGE_LIMIT_SETTINGS *,_RM_REMEDIATION_ACTIONS *,_RM_SYSTEM_MEMORY_METRICS *,unsigned __int64,_RM_RESOURCE_USAGE_LIMITS *);
void RmpPolicyEnsureMetricsForAcquire(_RM_PARTITION *,_RM_SYSTEM_MEMORY_METRICS *);
void RmpPolicyGenerateHostListForPopulate(_RM_PARTITION *,_RM_POLICY_WORK_BUFFER *,unsigned char (*)(_RM_ACTIVITY_HOST *,void *),void *);
void RmpPolicyGetCurrentUsageLimits(_RM_PARTITION *,_RM_USAGE_LIMIT_SETTINGS *,_RM_REMEDIATION_ACTIONS *,_RM_RESOURCE_USAGE_LIMITS *,_RM_SYSTEM_MEMORY_METRICS *);
void RmpPolicyInitializeRevokeContext(_RM_PARTITION *,utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet> > > *,ExecutionModel::ResourceSet *,ExecutionModel::Priority::Enum,_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *);
void RmpPolicyPopulateActivityHostMetrics(_RM_PARTITION *,ExecutionModel::Priority::Enum,_RM_POLICY_WORK_BUFFER *,unsigned short,unsigned char (*)(_RM_ACTIVITY_HOST *,void *),void *);
void RmpPolicyPopulateFastCommitUse(_RM_SYSTEM_MEMORY_METRICS *,_RM_POLICY_WORK_BUFFER *);
void RmpPolicyPrepareToCheckMetrics(_RM_PARTITION *,_RM_POLICY *,_RM_RESOURCE_USAGE_LIMITS *,_RM_SYSTEM_MEMORY_METRICS *);
void RmpPolicyReclaimContextInitialize(_RM_PARTITION *,_RM_POLICY_WORK_BUFFER *,unsigned __int64,_RM_REVOKE_POLICY,_RM_POLICY_RECLAIM_CONTEXT *);
void RmpPolicyReclaimHostList(_RM_POLICY_WORK_BUFFER *,_RM_REVOKE_POLICY,_RM_REVOKE_REASON_INTERNAL,ExecutionModel::ResourceSet *,_RM_ACTIVITY_HOST_REMEDIATION_GROUP *);
void RmpPolicyRevokeResourceSetsForAcquire(_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT *);
void RmpPolicyRevokeResourceSetsForPoolAcquire(utl::list<ATL::CComPtr<ExecutionModel::BaseResourceSet>,utl::allocator<ATL::CComPtr<ExecutionModel::BaseResourceSet> > > *,_RM_REVOKE_REASON_INTERNAL,_RM_REVOKE_POLICY,ExecutionModel::Priority::Enum,ExecutionModel::ResourceSet *);
void RmpPowerBoostArmWatchdog(_RM_POWERBOOST_CONTEXT *);
void RmpPowerBoostWatchdogCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
void RmpPsmAppFamilyIdInitialize(unsigned short const *,_RM_SID *,unsigned long,_RM_PSM_APP_FAMILY_ID *);
void RmpPsmAppFamilyTableAdd(_RM_SERVICE_GLOBALS *,_RM_PSM_APP_FAMILY *);
void RmpPsmAppFamilyTableCheckDelete(_RM_SERVICE_GLOBALS *,_RM_PSM_APP_FAMILY *);
void RmpPsmAppInstanceIdInitialize(_RM_PSM_HOST_INFO *,unsigned short const *,void *,unsigned long,unsigned long,unsigned __int64);
void RmpQoSCheckHostsSetTimer(_RM_QOS_CONTEXT *,unsigned __int64);
void RmpQoSEnableWatchdogForHost(_RM_QOS_CONTEXT *,_RM_ACTIVITY_HOST *,unsigned __int64);
void RmpQoSRundown(_RM_QOS_CONTEXT *);
void RmpQoSWatchdogCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
void RmpReleaseGlobalLock();
void RmpResourceSetCleanup(_RM_RESOURCE_SET *);
void RmpResourceSetGetEnforcedCommitThresholds(_RM_RESOURCE_SET *,_RM_COMMIT_THRESHOLDS *);
void RmpResourceSetGetReportedCommitThresholds(_RM_RESOURCE_SET *,_RM_COMMIT_THRESHOLDS *);
void RmpResourceSetReleaseResources(_RM_RESOURCE_SET *);
void RmpResourceSetRemoveAllDonors(_RM_RESOURCE_SET *);
void RmpResourceSetRemoveAllRecipients(_RM_RESOURCE_SET *);
void RmpResourceSetRemoveRecipient(_RM_RESOURCE_SET *,_RM_RESOURCE_SET *,unsigned long);
void RmpResourceSetUpdateDonatedCommmit(_RM_RESOURCE_SET *,unsigned long);
void RmpResourceSetUpdateElasticRecipient(_RM_RESOURCE_SET *);
void RmpResourceSetUpdateReceivedCommit(_RM_RESOURCE_SET *,unsigned __int64);
void RmpRmSidInitialize(_RM_SID *,void *);
void RmpRsEnforcedThresholdsArmTimer(_RM_RS_ENFORCEMENT_CONTEXT *);
void RmpRsEnforcedThresholdsCheckTransition(_RM_RESOURCE_SET *,_RM_COMMIT_THRESHOLDS *,_RM_RS_ENFORCEMENT_CONTEXT *);
void RmpRsEnforcedThresholdsDisarmCheckDestroy(_RM_RS_ENFORCEMENT_CONTEXT *);
void RmpRsEnforcedThresholdsTimerCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
void RmpSystemDereferenceHostWithPsm(_RM_ACTIVITY_HOST *,void *);
void RmpSystemEnableAsyncInSwap();
void RmpSystemMemoryMetricsQuery(_RM_PARTITION *,_RM_SYSTEM_MEMORY_METRICS *);
void RmpSystemNotifyGameModeExtensionStateChange(void *,unsigned char);
void RmpSystemPublishGlobalGameModeState(unsigned long);
void RmpSystemResourceTimerSet(_RM_HAM_ACTIVITY_HOST *,unsigned __int64);
void RmpSystemTerminatePsmHost(_RM_HAM_ACTIVITY_HOST *);
void RmpTelemetrySetTimer(_RM_SERVICE_GLOBALS *,unsigned long,unsigned long);
void RmpTelemetryTimerCallback(_TP_CALLBACK_INSTANCE *,void *,_TP_TIMER *);
void RmpUnserializePsmApplicationProperties(_PSM_APPLICATION_PROPERTIES *,unsigned long *,unsigned __int64 *,unsigned __int64 *,unsigned __int64 *,_PSM_APPLICATION_PRIORITY *,unsigned __int64 *);
void RmpUtilCheckStartLockTracking(unsigned long *,_CEM_LOCK_TRACKER *);
void RmpWnfPublishMessageToClientStateNameWorker(_TP_CALLBACK_INSTANCE *,void *,_TP_WORK *);
void SstpPublish(_SYSTEM_STATE_TRACKER * const);
void SstpRundown(_SYSTEM_STATE_TRACKER *);
void operator delete(void *);
void operator delete(void *,std::nothrow_t const &);
void operator delete[](void *);
