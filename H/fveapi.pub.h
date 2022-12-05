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

class <lambda_aa194dc0bf891154933407eb98fb868a>
{
	static void <lambda_invoker_cdecl>(void *);
};

class <lambda_fee8cea507d2413a58be13acfb66740a>
{
	static void <lambda_invoker_cdecl>(void *);
};

namespace ATL
{
	struct CComBSTR
	{
		long Append(unsigned short const *,int);
	};

};

struct CDropImpersonation
{
	long Drop();
	~CDropImpersonation();
};

class CFveApi
{
	_BDE_SQM_VOLUME_TYPE SqmGetVolumeType();
	int AllowDraManagement();
	int AllowNkpManagement();
	int AllowReseal(CScopedPolicyRedirector *);
	int IdentificationFieldMatch();
	long CreateDeviceLockoutStateEntry(unsigned long,unsigned long,unsigned long,_FVE_DEVICE_LOCKOUT_STATE * *);
	long CreateFat32DiscoveryVolumeImage(unsigned __int64,unsigned __int64,bool,void * *,unsigned __int64 *);
	long CreateNbp(_CERT_CONTEXT const *);
	long CreateNkp(_CERT_CONTEXT const *);
	long CreateTemporaryFile(void * *,unsigned short *);
	long FindNbpCert(void *,unsigned long,unsigned char *,_CERT_CONTEXT const * *);
	long GetDEInitializedInThisBootSessionKeyPath(unsigned short *,unsigned long);
	long GetDeviceLockoutState(_FVE_DEVICE_LOCKOUT_STATE * *,unsigned long *);
	long GetDiscoveryVolumeGroupPolicy(unsigned short *,unsigned long);
	long GetDiscoveryVolumeServiceInfo(bool *,unsigned long *,bool *,bool *);
	long GetFileNamesForDiscoveryVolume(_DISCOVERY_VOLUME_FILE_INFORMATION *,unsigned __int64,unsigned __int64 *);
	long GetFileNamesFromDirectory(unsigned short const *,_DISCOVERY_VOLUME_FILE_INFORMATION *,unsigned __int64,unsigned __int64 *);
	long GetGuidRecognitionStructure(_FVE_GUID_RECOGNITION *);
	long GetInvalidatedProtector(_FVE_DATUM_VMK_INFO const *,_FVE_INVALIDATED_PROTECTOR * *);
	long GetNkpProperties(_FVE_DATUM_KEY * *,void * *,int *);
	long GetRegistryLockoutCounter(_FVE_DEVICE_LOCKOUT_COUNTER_TPM *,bool);
	long GetThumbprintString(unsigned char *,unsigned long,unsigned short * *);
	long GpCheckForFipsConflicts();
	long GpCheckForRecoveryKeyGpConflicts();
	long GpCheckForStartupOptionsConflicts();
	long GpCheckForTpmLessConflicts();
	long GpCheckOnAddAuthFixedDataVolume(_FVE_AUTH_INFORMATION const *);
	long GpCheckOnAddAuthOsVolume(_FVE_AUTH_INFORMATION const *);
	long GpCheckOnAddAuthRecoveryProtectors(_FVE_AUTH_INFORMATION const *,unsigned short const *,unsigned short const *,bool,bool);
	long GpCheckOnAddAuthRemovableDataVolume(_FVE_AUTH_INFORMATION const *);
	long GpCheckOnAddAuthTpmProtectors(_FVE_AUTH_INFORMATION const *);
	long GpCheckOnAddAuthUserCertificatePolicy(_FVE_AUTH_INFORMATION const *,unsigned long);
	long GpCheckOnAddAuthVolumeTypeDependent(_FVE_AUTH_INFORMATION const *);
	long GpCheckOnDisable();
	long GpCheckPassphraseComplexity(unsigned short const *,bool);
	long GpCheckPassphraseInInformationPolicy(_FVE_AUTH_INFORMATION const *);
	long GpCheckPrebootInputAllowedOnDevice(int);
	long IncrementDeviceLockoutCounter(_FVE_DEVICE_LOCKOUT_COUNTER_HDR *,bool);
	long InitFat32DiscoveryVolume(bool,_FVE_ACTION2 *);
	long InitNativeVolume(_FVE_ACTION2 *);
	long InvalidateProtectors(_FVE_DATASET *,_FVE_NONCE *,_FVE_DATUM_KEY const *);
	long InvalidateVmkInfo(_FVE_DATASET *,_FVE_NONCE *,_FVE_DATUM_VMK_INFO const *,_FVE_DATUM_KEY const *);
	long IsDatumRecoveryDatum(_FVE_DATUM_VMK_INFO const *,unsigned long,int *);
	long IsNbpSupported();
	long IsNkpSupported();
	long IsPreBootPinExceptionApplicableAndAllowed(unsigned short const *,int *);
	long LogEventADPasswordBackupExists(_FVE_EVENT_LOG const *);
	long LogEventADPasswordBackupFailed(_FVE_EVENT_LOG const *);
	long LogEventADPasswordBackupSuccess(_FVE_EVENT_LOG const *);
	long LogEventDRAManagementFailed(_FVE_EVENT_LOG const *);
	long LogEventDRAManagementNotSupported(_FVE_EVENT_LOG const *);
	long LogEventDRAProtectorCreateFailed(_FVE_EVENT_LOG const *);
	long LogEventDRAProtectorCreated(_FVE_EVENT_LOG const *);
	long LogEventDRAProtectorRemoved(_FVE_EVENT_LOG const *);
	long LogEventRecoveryBadCodeId(_FVE_EVENT_LOG const *);
	long LogEventRecoveryBadCodeOption(_FVE_EVENT_LOG const *);
	long LogEventRecoverySimple(_FVE_EVENT_LOG const *);
	long LogSuccessfulTpmBindingRefresh();
	long PrepareNetworkProtectorSessionKeys(_FVE_DATUM_KEY *,void *,int,unsigned char * *,unsigned short *);
	long ReadBootSector(unsigned char * *);
	long ReadDeviceLockoutCounter(_FVE_DEVICE_LOCKOUT_COUNTER_HDR *,bool);
	long ReadFromFile(void *,unsigned __int64,void *,unsigned long);
	long RecoverInvalidatedProtectors(_FVE_DATASET *,_FVE_DATUM_KEY const *);
	long RecoverInvalidatedVmkInfo(_FVE_DATUM_VMK_INFO const *,_FVE_DATUM_KEY const *,_FVE_DATUM_VMK_INFO * *);
	long RemoveUnmatchedNetworkProtectorAuthInfo(int,void *,unsigned long,unsigned long,unsigned long,int *,int *,_GUID *);
	long ReopenWritable(unsigned short * *);
	long ReserveDeviceLockoutCounter(unsigned long,_FVE_DEVICE_LOCKOUT_STATE * *);
	long ResumeProtection();
	long RevertToLegacyStructure(_FVE_DEVICE_LOCKOUT_STATE const *,_FVE_DEVICE_LOCKOUT_STATE_V1 * *);
	long RewriteNkpSessionKeyFile(unsigned char * *,unsigned short);
	long SetDiscoveryVolumeDirtyBit();
	long SetDiscoveryVolumeServiceInfo(unsigned char *,unsigned long,bool);
	long UpgradeLegacyStructure(_FVE_DEVICE_LOCKOUT_STATE_V1 const *,unsigned short,_FVE_DEVICE_LOCKOUT_STATE * *);
	long ValidateDeviceLockoutCounter(_FVE_DEVICE_LOCKOUT_COUNTER_HDR *);
	long WrapVmkInfoInPublicKeyInfo(_FVE_DATUM_VMK_INFO const *,_FVE_DATUM_KEY const *,_FVE_NONCE *,_FVE_DATUM_PUBLIC_KEY_INFO * *);
	static long FindNkpCert(void *,_CERT_CONTEXT const * *);
	static long GetExternalKeyAuthInfo(_FVE_AUTH_INFORMATION * *,unsigned __int64 *);
	static long GetFveVolumeHandleForPartition(unsigned short const *,void * *);
	static long ValidateNetworkProtectorCert(_CERT_CONTEXT const *);
	unsigned long SqmLogGpValue(unsigned short const *,void *);
	unsigned long SqmLogReadGpValue(unsigned short const *,unsigned short const *,unsigned long *);
	unsigned long SqmLogSysGpValue(unsigned short const *,void *);
	void MarkDEInitializedInThisBootSession();
	void SqmLogInitVolume();
	void SqmLogKpCreate(unsigned long);
	void SqmLogVolumeProvisionEvent(bool,bool);
	void SqmOnDeleteClearKey(unsigned long);
	void SqmOnProtectorAdd(_FVE_AUTH_INFORMATION const *,bool);
protected:
	long AttemptDriverAutoUnlockFromWinRE();
	long AttemptUserAutoUnlock();
	long CheckDEInitPrerequisites();
	long CheckWcosDEInitPrerequisites();
	long ChooseProtectionType(unsigned long,bool *,bool *);
	long ConversionEncryptHelper(int,unsigned long);
	long EDriveSupportedInBoot(bool *);
	long EnsureDEProtectorsAllowedByGP();
	long GetAutoUnlockKeyFromWinRE(CFveApiBase *,unsigned short const *,_GUID *,_FVE_DATUM_KEY * *);
	long GetEowGuidRecognitionStructure(_FVE_EOW_GUID_RECOGNITION *);
	long InitVolumeEDrv(_FVE_ACTION2 *);
	long StoreTrustedWimData(bool);
	static long GetAutoUnlockExternalInfoDatumFromWinRE(unsigned short const *,_GUID const *,_FVE_DATUM_EXTERNAL_INFO *,unsigned long);
	virtual long ReadDiscoveryVolumeData(unsigned __int64,unsigned char *,unsigned long);
	virtual long ReadFromVolume(unsigned __int64,void *,unsigned long);
	virtual long WriteDiscoveryVolumeData(unsigned __int64,unsigned char const *,unsigned long);
	void SqmLogEDriveConfig(bool,bool,_BDE_SQM_EHDD_CONFIG_FO_CAUSE);
public:
	CFveApi(unsigned long);
	long AddAuthMethodInformation(_FVE_AUTH_INFORMATION const *,_GUID *,bool);
	long AddAuthMethodSid(unsigned short const *,void *,unsigned short,_GUID *);
	long ApplyGroupPolicy();
	long ApplyNkpCertChanges();
	long AttemptAADBackup(_FVE_DATUM_VMK_INFO *);
	long AttemptAutoUnlock();
	long BackupRecoveryInformationToEnterprise(_GUID const *,bool,_FVEAPI_BACKUP_FILTER,bool);
	long BindDataVolume(_GUID const *);
	long BindDataVolumeDpapi(_GUID const *);
	long BindDataVolumeDriver(CFveApi *,_GUID const *);
	long BindDataVolumeInternal(_FVE_DATUM_EXTERNAL_INFO const *);
	long BuildBackupInformationToSendToAD(_FVE_DATUM_VMK_INFO const *,bool,_ADA_FVE_INFO * *);
	long CanStandardUsersChangePassphraseByProxy(int *);
	long CanUseDriverBasedBinding(CFveApi *,int *);
	long CheckAuthMethodsSupported(unsigned long,_FVE_AUTH_ELEMENT * *,unsigned long);
	long CheckDataOnlyPolicy(bool,bool,bool *);
	long CheckForWinRe(bool *);
	long ConversionEncryptEx(unsigned long);
	long ConversionEncryptPendingRebootEx(unsigned long);
	long DecrementClearKeyCounter();
	long DecryptRegKey(HKEY__ *,unsigned short const *,unsigned short const *,void * *,unsigned __int64 *);
	long DeleteAuthMethod(_GUID const *,bool);
	long DisableDeviceLockoutState();
	long EncryptRegKeyData(unsigned char const *,unsigned __int64,_CRYPTOAPI_BLOB *);
	long EnsureAmkVolumeHasAutoUnlockMasterKey(CFveApi *);
	long GenerateCommonName(_FVE_DATUM_VMK_INFO const *,unsigned short *,int);
	long GenerateNbp(unsigned long,unsigned char *);
	long GenerateNkpSessionKeys();
	long GetClearKeyCounter(unsigned long *);
	long GetCurrentDiscoveryVolumeVersion(unsigned long *);
	long GetDefaultDescription(_FVE_DATUM_UNICODE * *);
	long GetDescription(unsigned short *,unsigned __int64,unsigned __int64 *);
	long GetDeviceLockoutData(unsigned char *,unsigned long *);
	long GetSecureBootBindingState(_FVE_SECUREBOOT_BINDING_STATE *);
	long GpCheckOnAddAuthMethodInformation(_FVE_AUTH_INFORMATION const *);
	long GpCheckOnInitVolume();
	long GpCheckPassphrasePolicy(unsigned short const *);
	long GpGetDVUpdateOnCreatorsDomain(bool *);
	long GpGetNoBitLockerToGoReader(bool *);
	long InitVolume(unsigned short const *,unsigned long);
	long InitVolumeHelper(unsigned __int64,_FVE_ACTION2 *);
	long InitializeDeviceEncryption(unsigned long);
	long IsDeviceLockable(unsigned long);
	long IsDeviceLockedOut(int *);
	long IsHybridVolume(bool *);
	long KeyManagement(unsigned long,unsigned long *);
	long LockDevice();
	long LogRecoveryReason(unsigned long,unsigned short const *,unsigned long);
	long NeedsDiscoveryVolumeUpdate(bool *);
	long RecoverInvalidatedProtectors();
	long RecycleVmk();
	long RefreshTpmBindings();
	long RegenerateNbpSessionKey();
	long ResetTpmDictionaryAttackParameters();
	long ServiceDiscoveryVolume();
	long SetDescription(unsigned short const *,bool);
	long StoreEncryptedRegKeyData(_GUID const *,_CRYPTOAPI_BLOB *,_CRYPTOAPI_BLOB *);
	long UnbindAllDataVolume();
	long UnbindDataVolume();
	long UpdateDeviceLockoutState(unsigned char *,unsigned long,unsigned long);
	long UpdatePin(unsigned short const *,_GUID const *);
	long ValidateDeviceLockoutState();
	long ValidateExistingPassphrase(int *,_GUID *,unsigned short const *);
	long ValidateExistingPin(int *,_GUID *,unsigned short const *);
	static long CanStandardUsersChangePin(int *);
	static long CheckTpmCapability(_FVE_TPM_CAPS *);
	static long CheckTpmCapabilityForEfi(_FVE_TPM_CAPS *);
	static long CheckTpmCapabilityForPcat(_FVE_TPM_CAPS *);
	static long CheckVersionSupportsAuthElements(unsigned short,unsigned long,_FVE_AUTH_ELEMENT * *);
	static long CheckVersionSupportsAuthFlags(unsigned short,unsigned long);
	static long DraCertPresentInRegistry(int *);
	static long EscrowEncryptedRecoveryKeyForRetailUnlock(unsigned char *,unsigned long);
	static long GetAmkVolume(unsigned long,bool,CFveApi * *);
	static long GetBootVolume(unsigned long,bool,CFveApi * *);
	static long GetCertificateHash(_CERT_CONTEXT const *,void * *,unsigned long *);
	static long GetExternalKeyBlob(unsigned char * *,unsigned long *);
	static long GetVolumeMountPoint(unsigned short const *,unsigned short *,unsigned long);
	virtual int LoadStringW(unsigned int,int,unsigned short *);
	virtual long AttemptADBackup(_FVE_DATUM_VMK_INFO const *,_ADA_GP_OPTIONS const *);
	virtual long LogEvent(_FVE_EVENT_LOG const *);
};

class CFveApiBase
{
	long AddAppHashEntry(void *,unsigned short,_FVE_DATUM_VALIDATION_ENTRY *,unsigned short *);
	long CheckOSVolumeForRequiredProtectors();
	long CommitChangesHelper(bool);
	long GpCheckForRequiredProtectorsFixed();
	long GpCheckForRequiredProtectorsOs();
	long GpCheckForRequiredProtectorsRemovable();
	long GpCheckForRequiredProtectorsVolumeTypeDependent();
	long GpCheckForRequiredPublicKeyProtectors(unsigned short const *,unsigned short const *);
	long GpCheckForRequiredRecoveryKeyProtectors(unsigned short const *,unsigned short const *,int);
	long GpCheckForRequiredTpmStartupProtectors();
	void DeleteAllMembers();
	void DeletePartMembers();
	void EventLogCleanup();
	void InitAllMembers(unsigned long);
	void SqmCheckLogUnlockOnNonPremium();
	void SqmLogUnlockFailure(long);
protected:
	long CheckOpenWrite();
	long CreateDpapiNgAuthElementFromProtectorInfo(_FVE_DPAPI_NG_INFO const *,_FVE_AUTH_ELEMENT * *);
	long CreateDpapiNgPublicKeyInfo(_FVE_DATUM_KEY const *,_FVE_AUTH_DPAPI_NG const *,_FVE_DATUM_PUBLIC_KEY_INFO * *);
	long DeviceIoctlEDrv(unsigned long,void *,unsigned long,void *,unsigned long,unsigned long *);
	long EventLogInit();
	long FindDpapiNgInfoByGuid(_GUID const *,_FVE_DPAPI_NG_INFO * *);
	long FsVolIoctl(unsigned long,unsigned long,void *,unsigned long,void *,unsigned long,unsigned long *);
	long GetAuthElementFromInformation(_FVE_AUTH_INFORMATION const *,unsigned long,bool *,_FVE_AUTH_ELEMENT * *);
	long GetBandProperties(bool,bool *,bool *,bool *,bool *,char *);
	long GetCertTypeFromAuthInfo(_FVE_AUTH_INFORMATION const *,unsigned long *);
	long GetClearKeyFlags(unsigned short *);
	long GetDpapiNgKeyFromVmkInfo(_FVE_DATUM_VMK_INFO const *,_FVE_DATUM_KEY * *);
	long GetPolicy(CFvePolicy * *);
	long GetSidFromDpapiNgInfo(_FVE_DPAPI_NG_INFO const *,void * *);
	long GetWinRELogFilePath(unsigned short *,unsigned __int64);
	long InitSectorSize();
	long IsClearKeyFlagSet(unsigned long,int *);
	long IsEDrive();
	long LockVolumeEDrv();
	long RemoveDEVolumeFromDEManagement();
	long SupportsEDrv(bool *);
	long UnlockVolumeEDrv(_FVE_DATUM_KEY *);
	long WinREEventLogInit();
	static _FVE_LIB_CALLBACKS _Callbacks;
	static _RTL_CRITICAL_SECTION _GlobalLock;
	static long ArePinCharactersValid(unsigned short const *,bool,bool *);
	static long CheckForRecoveryObject(bool *);
	static long CreateDpapiNgAuthElementFromDescriptor(unsigned short const *,unsigned short,_FVE_AUTH_ELEMENT * *);
	static long CreateDpapiNgInfo(unsigned short,unsigned char const *,unsigned short,_FVE_DPAPI_NG_INFO * *);
	static long GetAssociatedOs(void *,_GUID *);
	static long GetCurrentOsGuid(void *,_GUID *);
	static long GetDpapiNgInfoFromPublicKeyInfo(_FVE_DATUM_PUBLIC_KEY_INFO const *,_FVE_DPAPI_NG_INFO * *);
	static long IsAssociatedOS(void *,_GUID *,_GUID *,unsigned char *);
	static long OidToWStr(char const *,unsigned short * *);
	static long ReadRegDwordConditional(unsigned short const *,unsigned short const *,unsigned long,int,unsigned long *);
	static unsigned long _TlsIndex;
	static void * _ProcessHeap;
	unsigned long GetConversionStatusFromFveState();
	virtual bool IsDeviceOpen();
	virtual bool IsSystemFlagSetForVolume();
	virtual bool IsVolumeAmk();
	virtual long CheckDpapiNgInfoForSid(_FVE_DPAPI_NG_INFO const *,void *,unsigned short * *);
	virtual long DeviceClose();
	virtual long DeviceIoctl(unsigned long,void *,unsigned long,void *,unsigned long,unsigned long *);
	virtual long DeviceOpen(unsigned short const *,unsigned long,unsigned long);
	virtual long DpapiNgProtectKey(unsigned short const *,_FVE_DATUM_KEY const *,unsigned char * *,unsigned long *);
	virtual long DpapiNgUnprotectKey(unsigned char const *,unsigned long,_FVE_DATUM_KEY * *);
	virtual long FlushFileBuffers(void *);
	virtual long GetProtectionDescriptorFromDpapiNgInfo(_FVE_DPAPI_NG_INFO const *,unsigned short * *);
	virtual long GetVolumeInformationW();
	virtual long GetVolumeLabel(unsigned short *,unsigned __int64);
	virtual long GetVolumeName(unsigned short * *);
	virtual long IsVolumeDynamic();
	virtual long IsVolumeHidden();
	virtual long IsVolumeRecovery();
	virtual long IsVolumeSystem();
	virtual long LockDismountFileSystem(bool);
	virtual long MountFileSystem();
	virtual long ReadFipsSetting(unsigned char *);
	virtual long ReadRegString(unsigned short const *,unsigned short const *,unsigned long,unsigned short *);
	virtual long UnlockFileSystem();
	virtual long WorksetHasClearKey(bool *);
	virtual long WriteBlocks(unsigned __int64,unsigned long,void *);
	virtual ~CFveApiBase();
	void FillEventDataWithDriveLetter(_EVENT_DATA_DESCRIPTOR *,unsigned short * const);
	void FillEventDataWithVolumePath(_EVENT_DATA_DESCRIPTOR *);
public:
	CFveApiBase(_FVEAPI_OBJECT_TYPE,unsigned long);
	_FVE_NONCE * GetAndUseNonce();
	bool HasAnyKey();
	bool HasAutoUnlockMasterKey();
	bool HasExternalKey();
	bool HasNonTpmSecureKey();
	bool HasObfuscatedKey();
	bool HasPBKDF2PasswordKey();
	bool HasPassphraseKey();
	bool HasPasswordKey();
	bool HasPossibleSecureBootKey();
	bool HasSpecificTpmOnlyKey();
	bool HasSpecificTpmPlusStartupKey();
	bool HasTpmPlusPinKey();
	bool HasTpmPlusStartupKey();
	bool HasTpmSecureKey();
	bool HasUserCertificateKey();
	long AllocateAndGetAuthInformation(_FVE_AUTH_INFORMATION const *,unsigned __int64,_FVE_AUTH_INFORMATION * *,unsigned __int64 *);
	long CanPinExceptionPolicyBeApplied(int *);
	long CheckADRecoveryInfoBackupPolicy(_ADA_GP_OPTIONS *);
	long CheckAmkVolumeSafeToBind(CFveApiBase *);
	long CheckAutoUnlockEnabled();
	long CheckInited();
	long CheckOpened(bool);
	long CheckRecoveryPasswordBackupStatus(bool *);
	long Close();
	long CreateTpmContext(CFveTpm * *);
	long DecryptDataWithPrivateKey(unsigned __int64,unsigned __int64,unsigned __int64,unsigned char *,unsigned short,unsigned char *,unsigned short *);
	long DecryptDatumWithAMK(_FVE_DATUM_AESCCM_ENC const *,_FVE_DATUM * *);
	long DecryptIntermediateKey(unsigned __int64,unsigned __int64,unsigned __int64,_FVE_DATUM_VMK_INFO *,_FVE_DATUM_KEY * *);
	long DecryptIntermediateKeySecretAgreement(unsigned __int64,_FVE_DATUM_EXPORTED_PUBLIC_KEY *,_GUID,_FVE_DATUM_KEY * *);
	long DeriveIntermediateKey(void *,_FVE_DATUM_KEY * *,_FVE_DATUM_ASYM_ENC_BLOB * *,_FVE_DATUM_EXPORTED_PUBLIC_KEY * *);
	long DeriveIntermediateKeySecretAgreement(void *,_GUID,_FVE_DATUM_KEY * *,_FVE_DATUM_EXPORTED_PUBLIC_KEY * *,_FVE_DATUM_EXPORTED_PUBLIC_KEY * *);
	long DisableAuthentication();
	long EnableRawAccess(bool,bool);
	long EncryptDataWithPublicKey(void *,unsigned char *,unsigned short,unsigned char *,unsigned short *);
	long EnsureWeHaveAutoUnlockMasterKey(bool *);
	long EnsureWeHaveVmkAndFvek();
	long EraseAll(unsigned short,unsigned short);
	long EraseDrive(bool);
	long ExportPublicKey(void *,unsigned char *,unsigned short *);
	long FindKeyPriorityRangeWithDeleteOption(unsigned short,unsigned short,unsigned short,unsigned short,bool);
	long GetAuthMethodGuids(_GUID *,unsigned int,unsigned int *);
	long GetAuthMethodInformation(_FVE_AUTH_INFORMATION *,unsigned __int64,unsigned __int64 *);
	long GetAuthMethodSid(void *,_GUID *,unsigned long *);
	long GetAuthMethodSidInformation(_GUID const *,unsigned short *,void * *);
	long GetDataSet(unsigned char *,unsigned __int64,unsigned __int64 *);
	long GetFveMethod(int *);
	long GetFveMethodEDrv(int *,unsigned short *);
	long GetFvekType(unsigned short *);
	long GetIdentificationField(unsigned short *,unsigned __int64,_FVE_DATUM_KEY const *,unsigned __int64 *);
	long GetIdentificationField(unsigned short *,unsigned __int64,unsigned __int64 *);
	long GetIdentity(_GUID *);
	long GetIntermediateKey(unsigned __int64,unsigned __int64,unsigned __int64,unsigned long,_FVE_DATUM_VMK_INFO *,_FVE_DATUM_KEY * *);
	long GetKeyPackage(_GUID const *,unsigned char *,unsigned __int64,unsigned __int64 *);
	long GetKeyUsage(unsigned __int64,unsigned long *);
	long GetRecoveryPasswordBackupInformation(_GUID const *,unsigned short *);
	long GetSecureBootValidationInfo(_FVE_DATUM_VALIDATION_INFO * *);
	long GetStandardValidationInfo(_FVE_DATUM_VALIDATION_INFO * *);
	long GetStatus(_FVE_STATUS_V8 *);
	long GetUndefinedStartupOptionValue(unsigned long *);
	long GetUnlockAccessPolicy(_FVE_DATUM_KEY const *,_FVE_AUTH_INFORMATION const *,int *);
	long GetUseAdvancedStartup(int *);
	long GetVmk();
	long GpCheckForRdvTurnOn();
	long GpCheckForRequiredProtectors();
	long IsActionAllowed(unsigned long);
	long IsAnyDataVolumesBound(unsigned long *);
	long IsVolumeConvertable();
	long LicenseCheck(unsigned short const *);
	long LockVolume(bool);
	long LockVolumeHelper(bool);
	long LogEventSecureBootWithVariableName(_FVE_EVENT_LOG const *);
	long LogEventTpmSeal(_FVE_EVENT_LOG const *);
	long LogEventWithAlgorithmName(_FVE_EVENT_LOG const *);
	long LogEventWithBasicData(_FVE_EVENT_LOG const *,unsigned long);
	long LogEventWithErrorCodeData(_FVE_EVENT_LOG const *);
	long LogEventWithKeyLengthData(_FVE_EVENT_LOG const *);
	long LogEventWithRawPayload(_FVE_EVENT_LOG const *);
	long LogSimpleEvent(_FVE_EVENT_LOG const *);
	long LogSimpleEventWithErrorCode(_FVE_EVENT_LOG const *);
	long MapFveMethodToFvekType(int,unsigned short *);
	long MapFvekTypeToFveMethod(unsigned short,int *);
	long NotifyVolumeAfterFormat();
	long OkToEnableSecurityPerPolicy();
	long OkToEnableSecurityPerPolicyHelper();
	long OkToEncryptPerPolicy();
	long OkToUseNonFipsRecoveryPasswordPerPolicy();
	long Open(unsigned short const *,unsigned long,bool);
	long PerformAction(unsigned long);
	long PerformAction(unsigned long,unsigned short,_FVE_ACTION *);
	long PerformAction2(unsigned long,unsigned char,_FVE_ACTION2 const *);
	long PerformActionEDrv(unsigned long);
	long PerformActionEDrv(unsigned long,unsigned short,_FVE_ACTION *);
	long PerformROAction(unsigned long);
	long PerformROAction(unsigned long,unsigned short,_FVE_ACTION *);
	long PerformROAction2(unsigned long,_FVE_ACTION2 *);
	long PremiumOrPreInstallLicenseCheck();
	long PrepareNonce();
	long PublishDeviceEncryptionSupportState(_FVE_DE_SUPPORT const *);
	long QueryDeviceEncryptionSupport(_FVE_DE_SUPPORT *);
	long ReOpen();
	long RecalculateOffsetsAndMoveMetadata();
	long RecycleAutoUnlockMasterKey();
	long RecycleFvek(bool);
	long ResolveVolumeMountName();
	long RevertVolume();
	long SaveRecoveryPasswordBackupFlag(_GUID const *,_FVE_AUTH_ELEMENT const *);
	long SelectBestRecoveryPasswordByBackupInformation(_GUID *);
	long SelfHeal();
	long SetFveMethod(int);
	long SetIdentificationField(unsigned short const *,bool);
	long SetRecoveryPasswordBackupInformation(_GUID const *,unsigned short,unsigned short,unsigned short,unsigned char *);
	long StoreObfuscatedKey();
	long StoreValidationData(bool);
	long StoreValidationDataForAppEx(void *,_GUID const *,eFveBootApplicationPolicy,unsigned short,_FVE_DATUM_VALIDATION_ENTRY *,unsigned short *,bool);
	long UnlockVolume(_FVE_AUTH_INFORMATION const *,bool,void (*)(void const *),bool *);
	long UnlockVolumeAuthMethodSid(_GUID const *);
	long UnlockWithKey(_FVE_DATUM_KEY *,int);
	long UpdateBandIdBcd();
	long UpdateStatus();
	long UpgradeDrive();
	long VerifyBindDataVolume(bool,bool *,_GUID *);
	long VerifyBindDataVolumeDpapi(bool *,_GUID *);
	long VerifyBindDataVolumeDriver(bool *,_GUID *);
	static int LibraryInit();
	static long AuthElementFromPassPhrase(unsigned short const *,_FVE_AUTH_ELEMENT *);
	static long AuthElementFromPin(unsigned short const *,_FVE_AUTH_ELEMENT *,bool);
	static long AuthElementFromRecoveryPassword(unsigned short const *,_FVE_AUTH_ELEMENT *);
	static long AuthElementGetExternalKeyBytes(_FVE_AUTH_INFORMATION const *,void * *,unsigned long *);
	static long AuthElementGetKeyFileName(_FVE_AUTH_INFORMATION const *,unsigned short *,unsigned __int64);
	static long AuthElementReadExternalKey(unsigned short const *,_FVE_AUTH_INFORMATION *,unsigned __int64,unsigned __int64 *);
	static long AuthElementToRecoveryPassword(_FVE_AUTH_ELEMENT const *,unsigned short *,unsigned __int64);
	static long AuthElementWriteExternalKey(unsigned short const *,_FVE_AUTH_INFORMATION const *);
	static long BuildVolumeCdoPath(_FVE_DEVICE_TYPE,unsigned long,unsigned short * *);
	static long CheckADRecoveryInfoBackupPolicyByVolumeType(eFveVolumeType,_ADA_GP_OPTIONS *);
	static long CheckADRecoveryInfoBackupPolicyEx(_ADA_GP_OPTIONS *,_ADA_GP_OPTIONS *,_ADA_GP_OPTIONS *);
	static long CheckVolumeNameDriveLetter(unsigned short const *,unsigned long,unsigned short *);
	static long CheckVolumeNameGuid(unsigned short const *,unsigned long,unsigned short const * *);
	static long CheckVolumeNameMountPoint(unsigned short const *,unsigned short * *);
	static long ConcatAllocString(unsigned short * *,...);
	static long CopyString(unsigned short const *,unsigned short * *);
	static long DevicePathToVolumeGuidName(unsigned short const *,unsigned short * *);
	static long FastFree(void *);
	static long FlagsToProtectorType(unsigned long,_FVE_PROTECTOR_TYPE *);
	static long FveDeSyncCompletionChangeCallback(_WNF_STATE_NAME,unsigned long,_WNF_TYPE_ID *,void *,void const *,unsigned long);
	static long FveQueryDeNotInitialized(unsigned char *,unsigned long *);
	static long FveQueryDeNotInitializedImpl(int *);
	static long FveQueryImpl(_FVE_QUERY_TYPE,unsigned char *,unsigned long,unsigned char *,unsigned long *);
	static long FveQueryVolumes(_FVE_QUERY_TYPE,unsigned char *,unsigned long *);
	static long FveQueryWcosSecurityInfo(unsigned char *,unsigned long,unsigned char *,unsigned long *);
	static long FveQueryWcosSecurityInfoImpl(_FVE_WCOS_SEQURITY_INFO_REQUEST *,_FVE_WCOS_SEQURITY_INFO_RESPONSE *);
	static long GetAssociatedOsInfo(_BCDE_DEVICE * *,unsigned short * *);
	static long GetBcdAppImageHash(void *,unsigned char *,unsigned short);
	static long GetBcdElementData(void *,unsigned long,void * *,unsigned long *);
	static long GetImageFileHash(unsigned short const *,unsigned short const *,unsigned char *,unsigned short);
	static long GetUseRecoverySettings(int *,int *,int *);
	static long GpCheckPinLength(unsigned short const *);
	static long ImportRsaPublicKey(unsigned char *,unsigned short,void * *);
	static long IsDeviceCdRom(unsigned short const *,bool *);
	static long IsDeviceFloppy(unsigned short const *,bool *);
	static long IsFipsFlagSet(unsigned __int64,bool *);
	static long OkToExportKey();
	static long ProtectorTypeToFlags(_FVE_PROTECTOR_TYPE,unsigned long *);
	static long ResolveCsvRedirectedVolumeName(unsigned short const *,unsigned short * *);
	static long ResolveVolumeName(unsigned short const *,unsigned long,unsigned short * *);
	static long SidToNCryptDescriptor(void *,unsigned short,unsigned short * *);
	static long VolumeHandleToCdoInfo(void *,_FVE_DEVICE_TYPE *,unsigned long *,unsigned short * *);
	static long VolumeHandleToDevicePath(void *,unsigned short * *);
	static long VolumeNameToCdoInfo(unsigned short const *,_FVE_DEVICE_TYPE *,unsigned long *,unsigned short * *);
	static long VolumeNameToDevicePath(unsigned short const *,unsigned short * *);
	static long VolumeNameToDriveLetter(unsigned short const *,unsigned short *);
	static long VolumeNameToVolumeGuidName(unsigned short const *,unsigned short * *);
	static long WriteBytesToFile(unsigned short const *,void *,unsigned long);
	static void * FastAlloc(unsigned __int64);
	static void * ZeroAlloc(unsigned __int64);
	static void LibraryCleanup();
	static void ZeroFreeWithHeapSize(void *);
	virtual long ConversionDecryptEx(unsigned long);
	virtual long ConversionPause();
	virtual long ConversionResume();
	virtual long ConversionStop(unsigned char);
	virtual long FsVolumeClose(void *);
	virtual long FsVolumeCloseNoCache(void *);
	virtual long FsVolumeOpen(void * *);
	virtual long FsVolumeOpenNoCache(unsigned long,void * *);
	virtual long IsVolumeClustered();
	virtual long LogEvent(_FVE_EVENT_LOG const *);
	virtual long SetPagefileFlagIfOsVolume();
	void SetExtendedFlagsBasedOnState(unsigned long,unsigned __int64 *);
	void SetFlagsBasedOnState(unsigned long *);
};

class CFveApiEnum
{
	long EnumNextDevType();
	long EnumNextVolume();
protected:
	virtual ~CFveApiEnum();
public:
	CFveApiEnum(_FVE_FIND_DATA_V1 *);
	long EnumNext(_FVE_FIND_DATA_V1 *);
	virtual long GetVolumeName(unsigned short * *);
};

class CFveApiHandle
{
protected:
	CFveApiHandle(_FVEAPI_OBJECT_TYPE);
	virtual ~CFveApiHandle();
public:
	long GetHandleFromObject(void * *);
	static long GetLockObjectFromHandleImpl(_FVEAPI_OBJECT_TYPE,void *,void * *);
	static void ReleaseLockedObjectImpl(_FVEAPI_OBJECT_TYPE,CFveApiHandle *);
	virtual long Release();
};

struct CFveApiWrapper
{
	static long AddRecoveryPassword(void *,unsigned short *,unsigned short *,_GUID *);
};

class CFveBcdSettingParser
{
	static bool AreStringsEqual(unsigned short const *,unsigned short const *);
	static bool BcdElementAppliesToApp(eFveBootApplicationPolicy,unsigned long);
	static long ParseBcdSettingStringTokens(unsigned short const *,unsigned short * *,unsigned short * *);
public:
	long ParseBcdSettingFriendlyName(eFveBootApplicationPolicy,unsigned short const *,unsigned long *);
	long ParseSetting(unsigned short const *,PARSED_BCD_SETTING *);
	long ParseSettingList(MULTI_STRING_ARRAY const *,PARSED_BCD_SETTING * *,unsigned __int64 *);
	static CFveBcdSettingParser::BCD_APP_TYPE_MAP const * const c_AppTypeMap;
	static long ParseBcdSettingHex(unsigned short const *,unsigned long *);
};

class CFveBcdSettings
{
protected:
	long CustomizeIgnoredBcdSettingsPerPolicy(eFveBootApplicationPolicy,unsigned long *,unsigned __int64,_ELEMENT_ENTRY const *,unsigned __int64,unsigned long * *,unsigned __int64 *);
	long ReadBcdSettingsList(eFveGpMultiStrSetting,_ELEMENT_ENTRY const *,unsigned __int64,PARSED_BCD_SETTING * *,unsigned __int64 *);
	static bool IsSecurityCriticalSettingForApp(eFveBootApplicationPolicy,PARSED_BCD_SETTING const *,unsigned __int64,unsigned long);
public:
	long GetIgnoredBcdSettings(eFveBootApplicationPolicy,_ELEMENT_ENTRY const *,unsigned __int64,unsigned long * *,unsigned __int64 *,int *);
	static long GetDefaultIgnoredBcdSettings(eFveBootApplicationPolicy,eFveGpEnhancedBcdProfile,unsigned long * *,unsigned __int64 *);
	static unsigned long const * const c_DefaultEnhancedBcdIgnoreSettingsCommon;
	static unsigned long const * const c_DefaultEnhancedBcdIgnoreSettingsMemTest;
	static unsigned long const * const c_DefaultEnhancedBcdIgnoreSettingsOsLoader;
	static unsigned long const * const c_DefaultEnhancedBcdIgnoreSettingsOsResume;
	static unsigned long const * const c_DefaultEnhancedBcdIgnoreSettingsWimHash;
	static unsigned long const * const c_DefaultLegacyBcdExclusionsCommon;
	static unsigned long const * const c_DefaultLegacyBcdExclusionsMemTest;
	static unsigned long const * const c_DefaultLegacyBcdExclusionsOSLoader;
	static unsigned long const * const c_DefaultLegacyBcdExclusionsOSResume;
};

struct CFveDriveType
{
	static long GetFveVolumePath(unsigned short const *,unsigned short *,unsigned long);
};

struct CFveEncryptionSettings
{
	long GetFveEncryptionMethod(unsigned long *,int *);
};

class CFveHardwareEncryptionSettings
{
	static long IsAlgorithmInList(unsigned short *,unsigned __int64,unsigned short const *,int *);
	virtual long GetAllowSoftwareEncryptionFailoverSetting(eFveGpDwSetting *);
	virtual long GetAllowSoftwareEncryptionFailoverSettingValue(int,int *,int *);
	virtual long GetAllowedHardwareEncryptionAlgorithmsSetting(eFveGpStrSetting *);
	virtual long GetAllowedHardwareEncryptionAlgorithmsSettingValue(unsigned short * *,unsigned __int64 *,int *);
	virtual long GetHardwareEncryptionConfiguredSetting(eFveGpDwSetting *);
	virtual long GetHardwareEncryptionConfiguredSettingValue(eFveGpConfigurationState *,int *);
	virtual long GetRestrictHardwareEncryptionAlgorithmsSetting(eFveGpDwSetting *);
	virtual long GetRestrictHardwareEncryptionAlgorithmsSettingValue(int,int *,int *);
public:
	virtual long AllowHardwareEncryption(int *,int *);
	virtual long AllowSoftwareEncryptionFailover(int *,int *);
	virtual long AllowedHardwareEncryptionAlgorithm(unsigned short const *,int *,int *);
	virtual long RestrictHardwareEncryptionAlgorithms(int *,int *);
};

class CFvePassphraseSettings
{
	long DwordToPassphraseComplexity(unsigned long,eFveGpPassphraseComplexity *);
	long DwordToUsePassphrase(unsigned long,eFveGpUsePassphrase *);
public:
	long GetPassphraseComplexityRequirement(eFveGpPassphraseComplexity *,int *);
	long GetUsePassphrasePolicy(eFveGpUsePassphrase *,int *);
};

struct CFvePolicy
{
	virtual long AllowedHardwareEncryptionAlgorithm(unsigned short const *,int *,int *);
	virtual long Init(eFveVolumeType);
	virtual long IsRecoveryKeyAllowed(int *,int *);
	virtual long IsRecoveryKeyRequired(int *,int *);
	virtual long IsRecoveryPasswordAllowed(int *,int *);
	virtual long IsRecoveryPasswordRequired(int *,int *);
	~CFvePolicy();
};

struct CFvePolicyImpl
{
	CFvePolicyImpl();
	long GetMinimumPassphraseLength(unsigned long *,int *);
	long IsPassphraseProtectorAllowed(int *,int *);
	virtual long AllowedHardwareEncryptionAlgorithm(unsigned short const *,int *,int *);
	virtual long Init(eFveVolumeType);
	virtual long IsRecoveryKeyAllowed(int *,int *);
	virtual long IsRecoveryKeyRequired(int *,int *);
	~CFvePolicyImpl();
};

class CFvePolicyReader
{
	long GetKeyForGpLocation(eFveGpSettingsLocation,HKEY__ * *,unsigned short const * *);
	long ResetRootPolicyKeys();
	static unsigned short const * GetFirstMultiString(unsigned short const *);
	static unsigned short const * GetNextMultiString(unsigned short const *);
	void CloseRootPolicyKeys();
	void UnloadVolumePolicy();
public:
	virtual long ReadBinary(eFveGpBinSetting,unsigned char * *,unsigned __int64 *);
	virtual long ReadDword(eFveGpDwSetting,unsigned long *);
	virtual long ReadMultiString(eFveGpMultiStrSetting,MULTI_STRING_ARRAY *);
	virtual long ReadString(eFveGpStrSetting,unsigned short * *,unsigned __int64 *);
	virtual long UsePolicyFromVolume(unsigned short const *);
	virtual unsigned long AddRef();
	virtual unsigned long Release();
};

class CFvePolicySettings
{
protected:
	long ReadPolicyBool(int,eFveGpDwSetting,int *,int *);
	long ReadPolicyConfigurationState(int,eFveGpDwSetting,eFveGpConfigurationState *,int *);
	long ReadPolicyDword(eFveGpDwSetting,unsigned long *,int *);
	long ReadPolicyPermission(int,eFveGpDwSetting,eFveGpPermission *,int *);
	static long DwordToBool(unsigned long,int *);
	static long DwordToConfigurationState(unsigned long,eFveGpConfigurationState *);
	static long DwordToPermission(unsigned long,eFveGpPermission *);
	static long GetDefaultPolicyDword(eFveGpDwSetting,unsigned long *);
	static long GetDefaultPolicyString(eFveGpStrSetting,unsigned short * *,unsigned __int64 *);
	static long ReadMDMPolicyInt(unsigned short const *,unsigned short const *,int *,int *);
public:
	static void FreeMultiStringArray(MULTI_STRING_ARRAY *);
	~CFvePolicySettings();
};

class CFveRecoverySettings
{
	virtual long GetRecoveryConfiguredSetting(eFveGpDwSetting *);
	virtual long GetRecoveryConfiguredSettingValue(eFveGpConfigurationState *,int *);
	virtual long GetRecoveryKeySetting(eFveGpDwSetting *);
	virtual long GetRecoveryKeySettingValue(int,eFveGpPermission *,int *);
public:
	long UseRecoveryPassword(eFveGpPermission *,int *);
	virtual long GetAutoResealSetting(int *,int *);
	virtual long UseRecoveryKey(eFveGpPermission *,int *);
};

class CFveSys
{
	CFveSys(void *,_FVE_DEVICE_TYPE,unsigned long,unsigned short *,unsigned long);
	static CFveSys * _ClassList;
	static _RTL_CRITICAL_SECTION _ListLock;
	static long FindRefOrCreateFveSys(_FVE_DEVICE_TYPE,unsigned long,unsigned short *,unsigned long,CFveSys * *);
	static long volatile _Cleanedup;
	static long volatile _Initialized;
public:
	long GetUserFlags(unsigned long *);
	long SetOrClearUserFlags(unsigned long,int);
	static long FveSysHandleOpen(_FVE_DEVICE_TYPE,unsigned long,unsigned short *,unsigned long,void * *);
	static void FveSysCleanup();
	static void FveSysInit();
	virtual long GetVolumeName(unsigned short * *);
	virtual long Release();
	void RemoveFromClassList();
};

class CFveTpm
{
	static long _CopyByteDataToMember(unsigned char * &,unsigned long &,unsigned char const *,unsigned long);
	void Cleanup();
protected:
	long BuildPcrs(unsigned long);
	long CheckSecureBootPolicyOptionEnabled(unsigned long,bool,bool *);
	long CreateDebugEventEntry(unsigned char *,unsigned int,unsigned short,unsigned short,unsigned long,CFveTpm::_FVE_DEBUG_EVENT_ENTRY * *);
	long GetEFIBootmgrPCRValue(_TPM_API_HASH_DATA20 *);
	long GetEfiVariable(_GUID const *,unsigned short const *,bool,unsigned char * *,unsigned long *);
	long GetFilteredTcgLogForPcrBitmap(unsigned long,unsigned char * *,unsigned long *);
	long GetPcatBootmgrPCRValue(_TPM_API_HASH_DATA20 *);
	long GetPcrProfileForSeal(unsigned long const *,unsigned long *,CFveTpm::ePcrBitmapSource *);
	long GetPcrValue(unsigned int,_TPM_API_PCR_INFO20 *);
	long GetSecureBootPCRValue(_TPM_API_HASH_DATA20 const *,_TPM_API_HASH_DATA20 const *,_TPM_API_HASH_DATA20 const *,_TPM_API_HASH_DATA20 const *,_TPM_API_HASH_DATA20 const *,_TPM_API_HASH_DATA20 *);
	long GetUMCIDebugVariable(bool *);
	long UpdateDebugEventListAndPredict(CFveTpm::_FVE_ALLOWED_DEBUG_EVENT const *,unsigned long,_LIST_ENTRY *,CFveTpmSoftwarePCR &);
	long ValidateEfiAuthorityEvents(_WBCL_Iterator *,CFveTpmSoftwarePCR &,CFveTpmSoftwarePCR &,int,int,int);
	long ValidateNextTrEEVariableEvent(_WBCL_Iterator *,_GUID const *,unsigned short const *,unsigned char const *,unsigned long,_TPM_API_HASH_DATA20 *);
	long ValidateOptionalUEFIDebugEvents(_WBCL_Iterator *,CFveTpmSoftwarePCR &,CFveTpmSoftwarePCR &);
	long ValidatePreviousEfiAuthorityIsPresentInImageSecurityDatabase();
	long ValidateSeparatorEvents(_WBCL_Iterator *,CFveTpmSoftwarePCR &,CFveTpmSoftwarePCR &,unsigned long,unsigned long,unsigned char * *);
	long ValidateSignatureDatabaseContainsSignature(unsigned char const *,unsigned long,unsigned char const *,unsigned long);
	long ValidateTrEEOSLoaderAuthorityEventIsMicrosoftAuthority(_WBCL_Iterator *,_TPM_API_HASH_DATA20 *);
	long ValidateUEFIActionEvent(_WBCL_Iterator *,CFveTpm::_FVE_ALLOWED_DEBUG_EVENT const *,unsigned long,CFveTpm::_FVE_DEBUG_EVENT_ENTRY * *,unsigned char * *);
	static long CheckTpmIsOwned(HTPMCONTEXT__ *);
	static long GetEFIBootMgrFilePathFromBCD(unsigned short *,unsigned long);
	static long GetEFIBootMgrFilePathSyspart(unsigned short *,unsigned long);
	static long ValidateChainContextContainsSignature(_CERT_CHAIN_CONTEXT const *,unsigned char const *,unsigned long);
	static long ValidateSignerIsNt5(_CERT_CONTEXT const *);
	static void SqmOnTpmSeal(unsigned long,CFveTpm::ePcrBitmapSource);
	virtual bool CheckValidateAgainstActualPcr7Value();
	virtual long CheckAllowNonMicrosoftEFIApplications(bool *);
	virtual long CheckAllowUMCIDebugOption(bool *);
	virtual long GetEfiVariableTrEEHash(_GUID const *,unsigned short const *,_TPM_API_HASH_DATA20 *,bool);
	virtual long GetNextTcgEventForPcr(_WBCL_Iterator *,unsigned int,unsigned char * *);
	virtual long GetNextTrEEPcrEvent(_WBCL_Iterator *,unsigned char * *);
	virtual long GetTcgLog();
	virtual long ValidateEfiVariableEvent(_WBCL_Iterator *,unsigned long,_GUID const *,unsigned short const *,unsigned char const *,unsigned long,_TPM_API_HASH_DATA20 *,unsigned char * *);
	virtual long ValidateOSLoaderAuthorityIsForWindowsBootmgr(unsigned char const *,unsigned long);
	virtual long ValidateSeparatorEvent(_WBCL_Iterator *,_TPM_API_HASH_DATA20 *,unsigned char * *);
	virtual void LogFailedValidationOfSecureBootTcgLog();
public:
	CFveTpm();
	CFveTpm(IFveEventLogger *,CFvePolicy const *,bool);
	long Bindings();
	long CheckSecureBootForBitLocker(CFveTpm::BitLockerSecureBootEvalState *,_TPM_API_HASH_DATA20 *);
	long CheckSecureBootForWcosDe();
	long PcrScan(unsigned int,unsigned int *);
	long Seal(unsigned char const *,unsigned __int64,unsigned long const *,unsigned long *,unsigned char const *,unsigned __int64,unsigned char *,unsigned __int64,unsigned __int64 *);
	long SetCallerSuppliedPcrBitmap(unsigned long);
	static _GUID const EfiGlobalNamespace;
	static _GUID const EfiSecurityNamespace;
	static _GUID const MicrosoftSecureBootNamespace;
	static long CheckTpmIsSrkAuthZero(HTPMCONTEXT__ *,unsigned char *);
	static long CheckTpmPresence(int *);
	static long GetEFIBootMgrFilePath(unsigned short *,unsigned long);
	static unsigned char const * const SecureBootOnVariableHash;
	static unsigned char const * const SecureBootOnVariableHash20;
	static unsigned char const * const SeparatorHashValue0;
	static unsigned char const * const SeparatorHashValue020;
	static unsigned char const * const SeparatorHashValueF;
	static unsigned char const * const SeparatorHashValueF20;
	static unsigned char const SecureBootOnValue;
	static unsigned long const SeparatorValue0;
	static unsigned long const SeparatorValueF;
};

struct CFveTpmSoftwarePCR
{
	long Extend(_TPM_API_HASH_DATA20 const *);
	long ShaHash(void const *,unsigned long,unsigned short,unsigned char *);
	~CFveTpmSoftwarePCR();
};

struct CNgscbScopedPrivilege
{
	long AcquirePrivileges(long *,unsigned long);
	void ReleasePrivilege();
};

struct CScopedPolicyRedirector
{
	long RedirectFvePolicy(CFvePolicy *,unsigned short const *);
};

struct FveAADKeyDeleteRequest
{
	long CheckDeviceForAADDelete();
	static long DeleteAsyncRequest(void * *,unsigned long);
	static long ParseRecoveryKeyDeleteInfo(void * *,unsigned long,_FVE_AAD_DELETE_INFO *,_FVE_AAD_DELETE_REQUEST *);
	virtual long CreateAndSavePersistentRequest(void *,unsigned long);
	virtual long Execute();
	virtual long LoadAndCreateRequest(void *,unsigned long);
	virtual void LogReqSaveFailureEvent(long);
};

struct FveBcdUtil
{
	static long GetBcdElementData(void *,unsigned long,void * *,unsigned long *);
	static long GetBcdElementData<unsigned __int64>(void *,unsigned long,unsigned __int64 *);
};

struct FveClientKeyRotationRequest
{
	FveClientKeyRotationRequest();
	virtual long CreateAndSavePersistentRequest(void *,unsigned long);
	virtual long Execute();
	virtual long LoadAndCreateRequest(void *,unsigned long);
	virtual void LogReqSaveFailureEvent(long);
};

class FveCounterClaim
{
	static long GetAvailableDeviceLockCounters(unsigned long *);
public:
	static _TPM_API_HASH_DATA const c_DeviceLockCounterAuth;
	static long ClaimDeviceLockCounter(unsigned long);
	static long CreateDeviceLockCounterByLabel(unsigned long,bool);
};

struct FveDomain
{
	static long CheckIsDeviceAzureJoined(bool *,bool *);
	static long GetDomainInfo(bool *,_GUID *);
};

struct FvePersistentRequest
{
	long DeletePersistentRequest();
	long SaveRequest(void *,unsigned long);
	static long BuildPersistentRequestFilePath(unsigned short const *,_GUID,unsigned short *,unsigned long);
	static long Create(unsigned short const *,_FVE_REQUEST_TYPE,_GUID,FvePersistentRequest * *);
	static long CreateSVIRequestFolder(unsigned short const *,_FVE_REQUEST_TYPE);
	static long GetFolderName(_FVE_REQUEST_TYPE,unsigned short *,unsigned long);
};

struct FveRequest
{
	FveRequest();
	long Initialize(unsigned short const *,_FVE_REQUEST_TYPE);
	static long Create(unsigned short const *,_FVE_REQUEST_TYPE,FveRequest * *);
	void ResolveVolumeMountName();
};

struct FveServerKeyRotationRequest
{
	virtual long Execute();
};

struct FveTpmCounter
{
	static long ClaimDeviceLockCounter(unsigned long *);
	static long IncrementDeviceLockCounter(unsigned long,unsigned __int64 *);
	static long ReadDeviceLockCounter(unsigned long,unsigned __int64 *);
};

struct SP<unsigned char,SP_HLOCAL<unsigned char> >
{
	void Reset();
};

struct TpmContext
{
	long Create();
	~TpmContext();
};

struct exception
{
	exception(char const * const &);
	exception(char const * const &,int);
	exception(exception const &);
	virtual char const * what();
	virtual ~exception();
};

namespace std
{
	struct _Error_objects<int>
	{
		static _Generic_error_category _Generic_object;
		static _Iostream_error_category _Iostream_object;
		static _System_error_category _System_object;
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

	struct _System_error_category
	{
		virtual basic_string<char,char_traits<char>,allocator<char> > message(int);
		virtual char const * name();
		virtual error_condition default_error_condition(int);
	};

	struct bad_alloc
	{
		bad_alloc();
		bad_alloc(bad_alloc const &);
		virtual ~bad_alloc();
	};

	struct basic_string<char,char_traits<char>,allocator<char> >
	{
		basic_string<char,char_traits<char>,allocator<char> > & assign(basic_string<char,char_traits<char>,allocator<char> > const &,unsigned __int64,unsigned __int64);
		basic_string<char,char_traits<char>,allocator<char> > & assign(char const *,unsigned __int64);
		basic_string<char,char_traits<char>,allocator<char> > & erase(unsigned __int64,unsigned __int64);
		void _Copy(unsigned __int64,unsigned __int64);
		void _Tidy(bool,unsigned __int64);
		void _Xlen();
		void _Xran();
	};

	struct error_category
	{
		virtual bool equivalent(error_code const &,int);
		virtual bool equivalent(int,error_condition const &);
		virtual error_condition default_error_condition(int);
	};

	struct length_error
	{
		length_error(char const *);
		length_error(length_error const &);
		virtual ~length_error();
	};

	struct logic_error
	{
		logic_error(logic_error const &);
	};

	struct num_put<char,back_insert_iterator<basic_string<char,char_traits<char>,allocator<char> > > >
	{
		static locale::id id;
	};

	struct num_put<wchar_t,back_insert_iterator<basic_string<wchar_t,char_traits<wchar_t>,allocator<wchar_t> > > >
	{
		static locale::id id;
	};

	struct numpunct<char>
	{
		static locale::id id;
	};

	struct numpunct<wchar_t>
	{
		static locale::id id;
	};

	struct out_of_range
	{
		out_of_range(char const *);
		out_of_range(out_of_range const &);
		virtual ~out_of_range();
	};

	char const * _Syserror_map(int);
	char const * _Winerror_map(int);
	nothrow_t const std::nothrow;
	void _Xbad_alloc();
	void _Xlength_error(char const *);
	void _Xout_of_range(char const *);
};

namespace tpm12class
{
	class TPMW82B_BUFFER
	{
	protected:
		virtual long Clear(unsigned char);
		virtual long Deserialize();
		virtual long Serialize();
		virtual long Validate(unsigned char);
	public:
		TPMW82B_BUFFER();
		long Allocate(unsigned __int64);
		long Append(TPMW82B_BUFFER const *);
		long CopyFrom(unsigned char const *,unsigned __int64);
		virtual long Decode(unsigned short *);
		virtual ~TPMW82B_BUFFER();
	};

	class TPMW8L_PCR_SELECTION
	{
	protected:
		virtual long Clear(unsigned char);
		virtual long Deserialize();
		virtual long Serialize();
		virtual long Validate(unsigned char);
	public:
		TPMW8L_PCR_SELECTION();
		virtual long Decode(unsigned short *);
		virtual ~TPMW8L_PCR_SELECTION();
	};

	class TPMW8S_CREATION_DATA
	{
	protected:
		virtual long Clear(unsigned char);
		virtual long Deserialize();
		virtual long Serialize();
		virtual long Validate(unsigned char);
	public:
		TPMW8S_CREATION_DATA();
		virtual long Decode(unsigned short *);
		virtual ~TPMW8S_CREATION_DATA();
	};

	class TPMW8S_NV_PUBLIC
	{
	protected:
		virtual long Clear(unsigned char);
		virtual long Deserialize();
		virtual long Serialize();
		virtual long Validate(unsigned char);
	public:
		TPMW8S_NV_PUBLIC();
		virtual long Decode(unsigned short *);
		virtual ~TPMW8S_NV_PUBLIC();
	};

	class TPMW8S_PCR_SELECTION
	{
		TPMW8S_PCR_SELECTION();
	protected:
		virtual long Clear(unsigned char);
		virtual long Deserialize();
		virtual long Serialize();
		virtual long Validate(unsigned char);
	public:
		static TPMW8S_PCR_SELECTION * Create(unsigned __int64);
		virtual long Decode(unsigned short *);
		virtual ~TPMW8S_PCR_SELECTION();
	};

	class TPMW8S_SENSITIVE_CREATE
	{
	protected:
		virtual long Clear(unsigned char);
		virtual long Deserialize();
		virtual long Serialize();
		virtual long Validate(unsigned char);
	public:
		TPMW8S_SENSITIVE_CREATE();
		virtual long Decode(unsigned short *);
		virtual ~TPMW8S_SENSITIVE_CREATE();
	};

	class TPMW8T_ECC_SCHEME
	{
	protected:
		virtual long Clear(unsigned char);
		virtual long Deserialize();
		virtual long Serialize();
		virtual long Validate(unsigned char);
	public:
		virtual long Decode(unsigned short *);
		virtual ~TPMW8T_ECC_SCHEME();
	};

	class TPMW8T_KDF_SCHEME
	{
	protected:
		virtual long Clear(unsigned char);
		virtual long Deserialize();
		virtual long Serialize();
		virtual long Validate(unsigned char);
	public:
		virtual long Decode(unsigned short *);
		virtual ~TPMW8T_KDF_SCHEME();
	};

	class TPMW8T_KEYEDHASH_SCHEME
	{
	protected:
		virtual long Clear(unsigned char);
		virtual long Deserialize();
		virtual long Serialize();
		virtual long Validate(unsigned char);
	public:
		virtual long Decode(unsigned short *);
		virtual ~TPMW8T_KEYEDHASH_SCHEME();
	};

	class TPMW8T_PUBLIC
	{
	protected:
		virtual long Clear(unsigned char);
		virtual long Deserialize();
		virtual long Serialize();
		virtual long Validate(unsigned char);
	public:
		TPMW8T_PUBLIC();
		virtual long Decode(unsigned short *);
		virtual ~TPMW8T_PUBLIC();
	};

	class TPMW8T_RSA_SCHEME
	{
	protected:
		virtual long Clear(unsigned char);
		virtual long Deserialize();
		virtual long Serialize();
		virtual long Validate(unsigned char);
	public:
		virtual long Decode(unsigned short *);
		virtual ~TPMW8T_RSA_SCHEME();
	};

	class TPMW8T_SYM_DEF
	{
	protected:
		virtual long Clear(unsigned char);
		virtual long Deserialize();
		virtual long Serialize();
		virtual long Validate(unsigned char);
	public:
		TPMW8T_SYM_DEF();
		virtual long Decode(unsigned short *);
		virtual ~TPMW8T_SYM_DEF();
	};

	class TPMW8T_SYM_DEF_OBJECT
	{
	protected:
		virtual long Clear(unsigned char);
		virtual long Deserialize();
		virtual long Serialize();
		virtual long Validate(unsigned char);
	public:
		virtual long Decode(unsigned short *);
		virtual ~TPMW8T_SYM_DEF_OBJECT();
	};

	class TPMW8T_TK
	{
	protected:
		virtual long Clear(unsigned char);
		virtual long Deserialize();
		virtual long Serialize();
		virtual long Validate(unsigned char);
	public:
		TPMW8T_TK();
		virtual long Decode(unsigned short *);
		virtual ~TPMW8T_TK();
	};

	class TPMW8_AUTH_PROVIDER
	{
		long CalcParamEncryptionKey(TPMW82B_BUFFER *,TPMW82B_BUFFER *,TPMW82B_BUFFER *,TPMW82B_BUFFER *);
		long CalcSessionKey(TPMW82B_BUFFER *,TPMW82B_BUFFER *);
		long KDFa(unsigned short,TPMW82B_BUFFER *,char *,TPMW82B_BUFFER *,TPMW82B_BUFFER *,unsigned int,TPMW82B_BUFFER *);
		long SymSign(unsigned char,TPMW82B_BUFFER *,TPMW82B_BUFFER *,TPMW82B_BUFFER *,unsigned char,TPMW82B_BUFFER *);
	public:
		TPMW8_AUTH_PROVIDER();
		TPMW8_AUTH_PROVIDER(TPMW82B_BUFFER const *);
		virtual long Decode(unsigned short *);
		virtual ~TPMW8_AUTH_PROVIDER();
	};

	class TPMW8_COMMAND
	{
	protected:
		long DecryptFirstRspParameter(TPMW8_SESSION *);
		long EncryptFirstParameter(TPMW8_SESSION *);
		virtual long Clear(unsigned char);
		virtual long Deserialize();
		virtual long Finalize(unsigned char);
		virtual long Serialize();
		virtual long Validate(unsigned char);
	public:
		TPMW8_COMMAND();
		long AddHandle(unsigned int,TPMW82B_BUFFER *);
		long AddSessions();
		long DecodeHandle(unsigned short *,unsigned short *,unsigned int,TPMW82B_BUFFER *);
		long Execute(void *);
		long Get(unsigned char *,unsigned int,unsigned int *);
		long GetParameterSize();
		long Set(unsigned char const *,unsigned int);
		virtual long DecodeAuthorizationsRqu(unsigned short *);
		virtual long DecodeAuthorizationsRsp(unsigned short *);
		virtual long DecodeParameterSizeRsp(unsigned short *);
		virtual long DecodeRqu(unsigned short *);
		virtual long DecodeRsp(unsigned short *);
		virtual ~TPMW8_COMMAND();
	};

	class TPMW8_Create
	{
	protected:
		virtual long Clear(unsigned char);
		virtual long Deserialize();
		virtual long Serialize();
		virtual long Validate(unsigned char);
	public:
		TPMW8_Create();
		virtual long DecodeRqu(unsigned short *);
		virtual long DecodeRsp(unsigned short *);
		virtual ~TPMW8_Create();
	};

	class TPMW8_FlushContext
	{
	protected:
		virtual long Clear(unsigned char);
		virtual long Deserialize();
		virtual long Serialize();
		virtual long Validate(unsigned char);
	public:
		TPMW8_FlushContext();
		virtual long DecodeRqu(unsigned short *);
		virtual long DecodeRsp(unsigned short *);
	};

	class TPMW8_GetCapability
	{
	protected:
		virtual long Clear(unsigned char);
		virtual long Deserialize();
		virtual long Serialize();
		virtual long Validate(unsigned char);
	public:
		virtual long DecodeRqu(unsigned short *);
		virtual long DecodeRsp(unsigned short *);
		virtual ~TPMW8_GetCapability();
	};

	class TPMW8_NV_DefineSpace
	{
	protected:
		virtual long Clear(unsigned char);
		virtual long Deserialize();
		virtual long Serialize();
		virtual long Validate(unsigned char);
	public:
		TPMW8_NV_DefineSpace();
		virtual long DecodeRqu(unsigned short *);
		virtual long DecodeRsp(unsigned short *);
		virtual ~TPMW8_NV_DefineSpace();
	};

	class TPMW8_NV_Increment
	{
	protected:
		virtual long Clear(unsigned char);
		virtual long Deserialize();
		virtual long Serialize();
		virtual long Validate(unsigned char);
	public:
		TPMW8_NV_Increment();
		virtual long DecodeRqu(unsigned short *);
		virtual long DecodeRsp(unsigned short *);
		virtual ~TPMW8_NV_Increment();
	};

	class TPMW8_NV_Read
	{
	protected:
		virtual long Clear(unsigned char);
		virtual long Deserialize();
		virtual long Serialize();
		virtual long Validate(unsigned char);
	public:
		TPMW8_NV_Read();
		virtual long DecodeRqu(unsigned short *);
		virtual long DecodeRsp(unsigned short *);
		virtual ~TPMW8_NV_Read();
	};

	class TPMW8_NV_ReadPublic
	{
	protected:
		virtual long Clear(unsigned char);
		virtual long Deserialize();
		virtual long Serialize();
		virtual long Validate(unsigned char);
	public:
		TPMW8_NV_ReadPublic();
		virtual long DecodeRqu(unsigned short *);
		virtual long DecodeRsp(unsigned short *);
		virtual ~TPMW8_NV_ReadPublic();
	};

	class TPMW8_PCR_Read
	{
	protected:
		virtual long Clear(unsigned char);
		virtual long Deserialize();
		virtual long Serialize();
		virtual long Validate(unsigned char);
	public:
		virtual long DecodeRqu(unsigned short *);
		virtual long DecodeRsp(unsigned short *);
		virtual ~TPMW8_PCR_Read();
	};

	class TPMW8_PolicyAuthValue
	{
	protected:
		virtual long Clear(unsigned char);
		virtual long Deserialize();
		virtual long Serialize();
		virtual long Validate(unsigned char);
	public:
		virtual long DecodeRqu(unsigned short *);
		virtual long DecodeRsp(unsigned short *);
	};

	class TPMW8_PolicyGetDigest
	{
	protected:
		virtual long Clear(unsigned char);
		virtual long Deserialize();
		virtual long Serialize();
		virtual long Validate(unsigned char);
	public:
		virtual long DecodeRqu(unsigned short *);
		virtual long DecodeRsp(unsigned short *);
		virtual ~TPMW8_PolicyGetDigest();
	};

	class TPMW8_PolicyPCR
	{
	protected:
		virtual long Clear(unsigned char);
		virtual long Deserialize();
		virtual long Serialize();
		virtual long Validate(unsigned char);
	public:
		TPMW8_PolicyPCR();
		virtual long DecodeRqu(unsigned short *);
		virtual long DecodeRsp(unsigned short *);
		virtual ~TPMW8_PolicyPCR();
	};

	class TPMW8_ReadPublic
	{
	protected:
		virtual long Clear(unsigned char);
		virtual long Deserialize();
		virtual long Serialize();
		virtual long Validate(unsigned char);
	public:
		TPMW8_ReadPublic();
		virtual long DecodeRqu(unsigned short *);
		virtual long DecodeRsp(unsigned short *);
		virtual ~TPMW8_ReadPublic();
	};

	class TPMW8_SESSION
	{
	protected:
		long Clear(unsigned char);
		long InitNonceCaller();
	public:
		TPMW8_SESSION(TPMW8_AUTH_PROVIDER *);
		long AddSession(TpmDataObject *);
		long Authenticate(TpmDataObject *);
		long Create(void *);
		long Decode(unsigned short *);
		long Refresh();
		long Release();
		virtual long DecodeRqu(unsigned short *);
		virtual long DecodeRsp(unsigned short *);
		virtual long Validate(TpmDataObject *);
		virtual ~TPMW8_SESSION();
	};

	class TPMW8_StartAuthSession
	{
	protected:
		virtual long Clear(unsigned char);
		virtual long Deserialize();
		virtual long Serialize();
		virtual long Validate(unsigned char);
	public:
		TPMW8_StartAuthSession();
		virtual long DecodeRqu(unsigned short *);
		virtual long DecodeRsp(unsigned short *);
		virtual ~TPMW8_StartAuthSession();
	};

	class TpmDataObject
	{
		long AddDataToBuffer(unsigned char *,unsigned int,unsigned char * *,unsigned int *,unsigned int *);
	protected:
		virtual long Clear(unsigned char);
		virtual long Deserialize();
		virtual long Serialize();
		virtual long Validate(unsigned char);
		void SetStore(TpmDataObject *);
		void UpdateStore(TpmDataObject *);
	public:
		long AddData(unsigned char *,unsigned int);
		long AddData(unsigned char);
		long AddData(unsigned int);
		long AddData(unsigned short);
		long Get(TpmDataObject *);
		long Get(unsigned char *,unsigned int,unsigned int *);
		long Get(unsigned char *,unsigned short,unsigned short *);
		long GetData(unsigned char *);
		long GetData(unsigned char *,unsigned int);
		long GetData(unsigned int *);
		long GetData(unsigned short *);
		long GetDigest(unsigned short *,unsigned char *,unsigned int,unsigned int *);
		long GetHashBuffer(unsigned char *,unsigned int,unsigned int *);
		long PeekDataAtOffset(unsigned int,unsigned char *,unsigned int);
		long PeekDataAtOffset(unsigned int,unsigned short *);
		long Set(TpmDataObject *);
		long Set(TpmDataObject *,unsigned short);
		long SetData(unsigned char *,unsigned int,unsigned int);
		long SetData(unsigned int,unsigned int);
		long SetDataBuffer(unsigned char const *,unsigned int);
		long SetHashData(unsigned char *,unsigned int,unsigned int);
		virtual long Decode(unsigned short *);
	};

};

namespace wil
{
	namespace details
	{
		struct DestroyThreadPoolTimer<SystemThreadPoolMethods,0>
		{
			static void Destroy(_TP_TIMER *);
		};

		class EnabledStateManager
		{
			unsigned int EnsureSubscribedToFeatureConfigurationChangesImpl();
			void RecordCachedUsageUnderLock();
			void RecordCachedUsageUnderLock(EnabledStateManager::CachedUsageData const &);
		public:
			void EnsureSubscribedToUsageFlush(void (*)(void *));
			void OnStateChange();
			void OnTimer();
			void QueueBackgroundUsageReporting(unsigned int,wil_details_FeatureReportingCache *);
			void SubscribeFeatureStateCacheToConfigurationChanges(wil_details_FeatureStateCache *,wil_FeatureChangeTime,unsigned int);
			~EnabledStateManager();
		};

		class FeatureImpl<__WilFeatureTraits_Feature_ClientRecoveryPasswordRotation>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureImpl<__WilFeatureTraits_Feature_SID_Protection_To_L1>
		{
			wil_details_FeatureStateCache GetCachedFeatureEnabledState();
			wil_details_FeatureStateCache GetCurrentFeatureEnabledState(int *);
		public:
			void ReportUsage(bool,ReportingKind,unsigned __int64);
		};

		class FeatureStateManager
		{
			bool EnsureStateData();
			bool EnsureSubscribedToStateChangesUnderLock();
			void EnsureSubscribedToProcessWideUsageFlushUnderLock();
		public:
			void QueueBackgroundSRUMUsageReporting(unsigned int,unsigned short,unsigned int);
			void RecordFeatureUsage(unsigned int,wil_details_ServiceReportingKind,unsigned __int64);
			void SubscribeToEnabledStateChanges(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
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
			void _FailFast_Unexpected(void *,unsigned int,char const *);
			void _Log_Hr(void *,unsigned int,char const *,long);
		};

		FEATURE_ENABLED_STATE WilApiImpl_GetFeatureEnabledState(unsigned int,FEATURE_CHANGE_TIME,int *);
		bool GetModuleInformation(void *,unsigned int *,char *,unsigned __int64);
		bool IsFeatureConfigured(wil_FeatureState *,unsigned int,bool,wil_FeatureStore,int *);
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
		long ReportFailure_GetLastErrorHr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		long RtlDisownModuleHeapAllocation(void *,void *);
		shutdown_aware_object<details::EnabledStateManager> g_enabledStateManager;
		shutdown_aware_object<details::FeatureStateManager> g_featureStateManager;
		unsigned __int64 ResultStringSize(char const *);
		unsigned __int64 ResultStringSize(unsigned short const *);
		unsigned char (* g_pfnDllShutdownInProgress)();
		unsigned char * WriteResultString<char const *>(unsigned char *,unsigned char *,char const *,char const * *);
		unsigned char * WriteResultString<unsigned short const *>(unsigned char *,unsigned char *,unsigned short const *,unsigned short const * *);
		unsigned char RtlDllShutdownInProgress();
		unsigned long (* g_pfnRtlNtStatusToDosErrorNoTeb)(long);
		unsigned long GetLastErrorFail(void *,unsigned int,char const *,char const *,char const *,void *);
		unsigned long ReportFailure_GetLastError(void *,unsigned int,char const *,char const *,char const *,void *,FailureType);
		unsigned long RtlNtStatusToDosErrorNoTeb(long);
		unsigned short * LogStringPrintf(unsigned short *,unsigned short const *,unsigned short const *,...);
		void (* g_pfnDebugBreak)();
		void (* g_pfnGetContextAndNotifyFailure)(FailureInfo *,char *,unsigned __int64);
		void (* g_pfnLoggingCallback)(FailureInfo const &);
		void (* g_pfnOriginateCallback)(FailureInfo const &);
		void (* g_pfnRaiseFailFastException)(_EXCEPTION_RECORD *,_CONTEXT *,unsigned long);
		void (* g_pfnTelemetryCallback)(bool,FailureInfo const &);
		void (* g_pfnThrowResultException)(FailureInfo const &);
		void * ProcessHeapAlloc(unsigned long,unsigned __int64);
		void CloseHandle(void *);
		void DebugBreak();
		void FreeProcessHeap(void *);
		void GetContextAndNotifyFailure(FailureInfo *,char *,unsigned __int64);
		void LogFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,bool,unsigned short *,unsigned __int64,char *,unsigned __int64,FailureInfo *);
		void RecordFeatureUsageCallback(unsigned int,wil_details_ServiceReportingKind,unsigned int,wil_details_FeatureReportingCache *,wil_details_RecordUsageResult *);
		void RecordSRUMFeatureUsage(unsigned int,unsigned int,unsigned int);
		void ReleaseMutex(void *);
		void ReportFailure(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long,unsigned short const *,details::ReportFailureOptions);
		void ReportFailure_Hr(void *,unsigned int,char const *,char const *,char const *,void *,FailureType,long);
		void UnregisterWilFeatureConfigurationChange(void *);
		void UnsubscribeProcessWideUsageFlush(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
		void UnsubscribeWilWnf(__WIL__WNF_USER_SUBSCRIPTION *);
		void WilApiImpl_RecordFeatureUsage(unsigned int,unsigned int,unsigned int,char const *);
		void WilApiImpl_SubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
		void WilApiImpl_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
		void WilApi_RecordFeatureUsage(unsigned int,unsigned int,unsigned int,char const *);
		void WilApi_UnsubscribeFeatureStateChangeNotification(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
		void WilDynamicLoadRaiseFailFastException(_EXCEPTION_RECORD *,_CONTEXT *,unsigned long);
		void WilFailFast(FailureInfo const &);
		void WilRaiseFailFastException(_EXCEPTION_RECORD *,_CONTEXT *,unsigned long);
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
		};

		class SemaphoreValue
		{
			long CreateFromValueInternal(unsigned short const *,bool,unsigned __int64);
			static long GetValueFromSemaphore(void *,long *);
			static long TryGetValueInternal(unsigned short const *,bool,unsigned __int64 *,bool *);
		public:
			static long TryGetPointer(unsigned short const *,void * *);
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
		};

		details_abi::ProcessLocalStorage<details_abi::ProcessLocalData> * g_pProcessLocalData;
		details_abi::ThreadLocalData * GetThreadLocalDataCache(bool);
		void RecordWnfUsageIndex(__WIL__WNF_STATE_NAME const *,unsigned __int64,details_abi::RawUsageIndex const &);
	};

	struct manually_managed_shutdown_aware_object<details::EnabledStateManager>
	{
		void construct();
		void destroy();
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
	long GetFailureLogString(unsigned short *,unsigned __int64,wil::FailureInfo const &);
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

FEATURE_ENABLED_STATE (* g_wil_details_apiGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME,int *);
FEATURE_ENABLED_STATE (* g_wil_details_internalGetFeatureEnabledState)(unsigned int,FEATURE_CHANGE_TIME,int *);
HINSTANCE__ * g_wil_details_ntdllModuleHandle;
HINSTANCE__ * wil_details_GetNtDllModuleHandle();
MicrosoftTelemetryAssertTriggeredNode * g_MicrosoftTelemetryAssertsTriggeredList;
POLICY_REGISTRY_INFO<unsigned long> const * const g_DwSettingMap;
POLICY_REGISTRY_INFO<unsigned short const * *> const * const g_MultiStringSettingMap;
POLICY_REGISTRY_INFO<unsigned short const *> const * const g_StringSettingMap;
TPM_SYMBOLTABLE_ENTRY const * const st_TPMW8A_ALGORITHM;
TPM_SYMBOLTABLE_ENTRY const * const st_TPMW8A_NV;
TPM_SYMBOLTABLE_ENTRY const * const st_TPMW8A_OBJECT;
TPM_SYMBOLTABLE_ENTRY const * const st_TPMW8A_SESSION;
TPM_SYMBOLTABLE_ENTRY const * const st_TPMW8I_YES_NO;
TPM_SYMBOLTABLE_ENTRY const * const st_TPMW8_ALG;
TPM_SYMBOLTABLE_ENTRY const * const st_TPMW8_CAP;
TPM_SYMBOLTABLE_ENTRY const * const st_TPMW8_CC;
TPM_SYMBOLTABLE_ENTRY const * const st_TPMW8_ECC_CURVE;
TPM_SYMBOLTABLE_ENTRY const * const st_TPMW8_NV_INDEX;
TPM_SYMBOLTABLE_ENTRY const * const st_TPMW8_PT;
TPM_SYMBOLTABLE_ENTRY const * const st_TPMW8_RH;
TPM_SYMBOLTABLE_ENTRY const * const st_TPMW8_SE;
TPM_SYMBOLTABLE_ENTRY const * const st_TPMW8_ST;
TPM_SYMBOLTABLE_ENTRY const * const st_TPM_LOCALITY_SELECTION;
TPM_SYMBOLTABLE_ENTRY const * const st_TPM_PCR_NAME;
_FIRMWARE_TYPE GetFirmwareTypeHelper();
_FVE_ASYNC_REQUEST_ENTRY * AsyncRequestMap;
_FVE_PERSISTENT_REQUEST_CONFIG * g_persistentRequestsMap;
_RTL_CRITICAL_SECTION gFveAsyncReqCS;
_RTL_CRITICAL_SECTION gPersistentReqCS;
_RTL_CRITICAL_SECTION gPersistentReqTimerCS;
_RTL_CRITICAL_SECTION gServerRotationStatusCS;
_RTL_RUN_ONCE g_CallbackInitOnce;
_RTL_SRWLOCK g_MicrosoftTelemetryAssertLock;
_RTL_SRWLOCK g_logFileLock;
bool FveDidSetupSuspendBitLocker();
bool HasDupEntry(_FVE_DATUM_VALIDATION_ENTRY *,unsigned short,unsigned short,unsigned long);
bool NgscbGet_TEST_BooleanOverride(unsigned short const *,bool *);
char * TCG_EfiSpecIdEventStruct_Signature_02;
char * TCG_EfiSpecIdEventStruct_Signature_03;
int CheckAndInitCallbacksOnce(_RTL_RUN_ONCE *,void *,void * *);
int FveIsOOBECompleted();
int NgscbHasNonAsciiGraphicCharacters(unsigned short const *);
int wil_QueryFeatureState(wil_FeatureState *,unsigned int,int,wil_FeatureStore,int *,int *);
int wil_RtlStagingConfig_QueryFeatureState(wil_FeatureState *,unsigned int,int,int *);
int wil_StagingConfig_QueryFeatureState(wil_FeatureStore,wil_FeatureState *,unsigned int,int,int *);
int wil_details_FeatureReporting_ReportUsageToServiceDirect(wil_details_FeatureReportingCache *,unsigned int,int,int,wil_details_ServiceReportingKind,unsigned int,unsigned __int64);
int wil_details_StagingConfigFeature_HasUniqueState(wil_details_StagingConfigFeature const *);
int wil_details_StagingConfig_QueryFeatureState(wil_details_StagingConfig *,wil_FeatureState *,unsigned int,int);
long (* g_fpAesCfbDecrypt)(unsigned char *,unsigned int,unsigned char *,unsigned int,unsigned char *,unsigned int,unsigned char *);
long (* g_fpAesCfbEncrypt)(unsigned char *,unsigned int,unsigned char *,unsigned int,unsigned char *,unsigned int,unsigned char *);
long (* g_fpFlushTrace)(unsigned short *,unsigned __int64);
long (* g_fpGetRandom)(unsigned char *,unsigned int);
long (* g_fpHash)(unsigned short *,unsigned char *,unsigned int,unsigned char *,unsigned int,unsigned char *,unsigned int,unsigned int *,unsigned long);
long (* g_wil_details_pfnNtQueryWnfStateData)(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long (* g_wil_details_pfnNtUpdateWnfStateData)(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long (* g_wil_details_pfnRtlNotifyFeatureUsage)(_RTL_FEATURE_USAGE_REPORT *);
long (* g_wil_details_pfnRtlQueryFeatureConfiguration)(unsigned int,_RTL_FEATURE_CONFIGURATION_TYPE,unsigned __int64 *,_RTL_FEATURE_CONFIGURATION *);
long (* g_wil_details_pfnRtlRegisterFeatureConfigurationChangeNotification)(void (*)(void *),void *,unsigned __int64 *,void * *);
long (* g_wil_details_pfnRtlSubscribeWnfStateChangeNotification)(__WIL__WNF_USER_SUBSCRIPTION * *,__WIL__WNF_STATE_NAME,unsigned long,long (*)(__WIL__WNF_STATE_NAME,unsigned long,__WIL__WNF_TYPE_ID *,void *,void const *,unsigned long),void *,__WIL__WNF_TYPE_ID *,unsigned long,unsigned long);
long (* g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion)(__WIL__WNF_USER_SUBSCRIPTION *);
long AdaIsSchemaExtInstalled(int *);
long AdaPutFveRecoveryInformation(_ADA_FVE_INFO const *,unsigned short const *,unsigned short const *);
long AdaRevertAndCheckIsSchemaExtInstalled(int *);
long AdapGetComputerObjectPath(unsigned short * *,bool);
long AdapGetNamingContext(unsigned short const *,unsigned short * *);
long AdapInitializeCOM(bool *);
long AdapIsComImpersonating();
long AdapOpenComputerObject(unsigned short const *,unsigned short const *,_GUID const &,void * *);
long AdapSchemaMayContain(IADs *);
long AdapSchemaSystemMustContain(IADs *);
long AllocatePadFile(__FAT32_VOLUME_DATA *,unsigned __int64 *,unsigned __int64 *,unsigned __int64);
long CheckDeviceForClientKeyRotation();
long CheckImageLength(__FAT32_VOLUME_DATA *);
long CheckSystemVolume();
long CheckVolumeForKeyRotation(void *,bool,bool,bool);
long CreateCoverOrPaddingFile(__FAT32_VOLUME_DATA *,int,unsigned long,unsigned __int64,unsigned __int64);
long CreateDummyFileEntry(unsigned long,_PACKED_DIRENT *);
long CreateFvePersistentRequestObjectInstanceFactory(unsigned short const *,_FVE_REQUEST_TYPE,_GUID *,FvePersistentRequest * *);
long CreateVolumeLabel(__FAT32_VOLUME_DATA *,__FILE_INFO_NODE *);
long EnsureNoBootableCdDvdInserted();
long FatNtTimeToFatTime(_LARGE_INTEGER *,unsigned char,_FAT_TIME_STAMP *,unsigned char *);
long FatSelectNames(__FAT32_VOLUME_DATA *,_STRING *,_UNICODE_STRING *,_STRING *,unsigned char *,unsigned char *,unsigned char *);
long FillInShortNameDirent(_PACKED_DIRENT *,char *,unsigned long,_FILETIME *,_FILETIME *,_FILETIME *,_LARGE_INTEGER,int,int,unsigned long);
long FindOptimalVolumeParameters(__FAT32_VOLUME_DATA *);
long FveAddAsyncRequest(_FVE_REQUEST_TYPE,void *,unsigned long);
long FveAllocCallback(unsigned __int64,void * *);
long FveCertCreateCertInfoFromBuffer(unsigned char *,unsigned short,unsigned long,_FVE_CERT_INFO * *);
long FveCreateBootTcgLogFilesIfNeeded();
long FveCreatePersistentRequestsFolder(unsigned short const *);
long FveCreateTcgLogFile(_FVE_BOOT_LOG_TYPE);
long FveDeletePersistentRequest(unsigned short const *,_FVE_REQUEST_TYPE,_GUID);
long FveFreeCallback(void *);
long FveGenGuidCallback(_GUID *);
long FveGetBootLogFileName(unsigned short *,unsigned long,unsigned char,_FVE_BOOT_LOG_TYPE);
long FveGetBootLogFileNameOnSystem(unsigned short *,unsigned long,_FVE_BOOT_LOG_TYPE);
long FveGetFirmwareType(_FIRMWARE_TYPE *);
long FveGetTimeCallback(unsigned __int64 *);
long FveIsAutoPilotScenario(long (*)(_WNF_STATE_NAME const *,_WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *),long (*)(_UNICODE_STRING *,unsigned long *,void *,unsigned long,unsigned long *),bool *,bool *);
long FveRandomCallback(unsigned char *,unsigned __int64);
long FveSavePersistentRequest(unsigned short const *,_FVE_REQUEST_TYPE,void *,unsigned long);
long FveSealCallback(void *,unsigned char const *,unsigned __int64,unsigned long const *,unsigned long *,unsigned char const *,unsigned __int64,unsigned char *,unsigned __int64,unsigned __int64 *);
long FveTriggerPersistentRequestWNFEvent();
long FveWriteTcgLogFile(_FVE_BOOT_LOG_HEADER const *,unsigned char const *,unsigned long,_FVE_BOOT_LOG_TYPE);
long FveWriteTcgLogForTpmProtector(unsigned char const *,unsigned long,unsigned long,unsigned long,_FVE_BOOT_LOG_TYPE);
long FvepRotateRecoveryPasswords(void *,_GUID *,unsigned long,int,bool *);
long GenGuid(_GUID *);
long GenerateDirentsForFile(__FAT32_VOLUME_DATA *,__FILE_INFO_NODE *);
long GetADBackupRequiredPolicy(bool *,bool *,bool *);
long GetAsyncRequest(_FVE_REQUEST_TYPE,unsigned int &);
long GetBcdElementsList(void *,_GUID const *,_BCD_ELEMENT * *,unsigned long *);
long GetBootVolumeName(unsigned short *,unsigned __int64);
long GetDeviceJoinStatus(_eDeviceJoinStatus *);
long GetLastHresultError();
long GetRecoveryPasswords(void *,_GUID * *,unsigned long *);
long GetSystemPartition(unsigned long,unsigned short *);
long GetSystemRootDir(unsigned long,unsigned short *);
long GetSystemVolume(unsigned long,unsigned short *);
long GetVolumeMountPoint(unsigned short const *,unsigned short *,unsigned long);
long GrantAccessToAuthUsers(unsigned short const *);
long HashComputeImageHash(void *,void const *,unsigned long,unsigned char *,unsigned long *,HASHLIB_CERT_INFO *,unsigned char *);
long HashpEmitExcludeRange<BCRYPT_HASH_CTXT>(BCRYPT_HASH_CTXT *,unsigned long,_EXCLUDE_RANGE * const,unsigned long,_HASHLIB_LOADED_IMAGE *,unsigned long,unsigned long);
long HashpHashMappedBytes<BCRYPT_HASH_CTXT>(BCRYPT_HASH_CTXT *,unsigned long,_HASHLIB_LOADED_IMAGE *,unsigned long,unsigned long);
long HashpImageGetDigestStream<BCRYPT_HASH_CTXT>(BCRYPT_HASH_CTXT *,unsigned long,void const *,unsigned long,unsigned long,long (*)(void *,unsigned long,unsigned long *,void * *,unsigned long *),void *,HASHLIB_CERT_INFO *);
long HashpInitHash(BCRYPT_HASH_CTXT *,unsigned long *);
long HashpParsePEHeader(void const *,unsigned long,unsigned long,unsigned char,long (*)(void *,unsigned long,unsigned long *,void * *,unsigned long *),void *,HASHLIB_CERT_INFO *,_HASHLIB_LOADED_IMAGE *,_EXCLUDE_RANGE * const,unsigned long *);
long HeapAllocateByByteCount<_NGSCB_HSTI_RESULTS>(_NGSCB_HSTI_RESULTS * *,unsigned __int64);
long HeapAllocateByByteCount<_NGSCB_NAME_VALUE_COLLECTION>(_NGSCB_NAME_VALUE_COLLECTION * *,unsigned __int64);
long HeapAllocateByByteCount<char>(char * *,unsigned __int64);
long HeapAllocateByByteCount<unsigned char>(unsigned char * *,unsigned __int64);
long HeapAllocateByByteCount<unsigned short>(unsigned short * *,unsigned __int64);
long I_HashComputeMemoryHash<BCRYPT_HASH_CTXT>(BCRYPT_HASH_CTXT *,unsigned char *,unsigned long,unsigned long,unsigned char *,unsigned long *);
long InitializeVolumeData(__FAT32_VOLUME_DATA *,void *,unsigned __int64,unsigned long,unsigned __int64,unsigned __int64,unsigned long);
long InternalFveIsVolumeEncrypted(void *);
long IsCallerAdmin(bool *);
long IsRecoveryPasswordGroupValid(unsigned short const *,unsigned char *);
long IsRecoveryPasswordValid(unsigned short const *,unsigned char *);
long IsRunningAsElevatedAdmin(bool *);
long IsTerminalFolderRedirection(unsigned short *,bool *);
long IsThreadElevated(bool *);
long IsVolumeVirtual(unsigned short const *,bool *);
long MakeSystemVolumeInformationPath(unsigned short const *,unsigned short const *,unsigned short *,unsigned long);
long NgscbCheckDeviceEncryptionOptedOutForVolume(unsigned short const *,bool *);
long NgscbCheckDmaSecurity(bool *,_NGSCB_HSTI_RESULTS *,_NGSCB_NAME_VALUE_COLLECTION * *);
long NgscbCheckDmaSecurityEx(bool *,_NGSCB_HSTI_RESULTS *,_NGSCB_NAME_VALUE_COLLECTION * *,_NGSCB_NAME_VALUE_COLLECTION * *);
long NgscbCheckHSTIPrerequisitesVerified(bool *,_NGSCB_HSTI_RESULTS *);
long NgscbCheckHSTIPrerequisitesVerifiedEx(bool *,_NGSCB_HSTI_RESULTS *,char const *);
long NgscbCheckIsAOACDevice(bool *);
long NgscbCheckIsHSTIVerified(bool *,_NGSCB_HSTI_RESULTS * *,_NGSCB_HSTI_PARSING_STATUS *);
long NgscbCheckIsUpgradedOS(bool *);
long NgscbCheckParseHSTIResults(unsigned char *,unsigned long,bool *,_NGSCB_HSTI_RESULTS * *,_NGSCB_HSTI_PARSING_STATUS *);
long NgscbCheckPreventDeviceEncryption(bool *);
long NgscbCheckPreventDeviceEncryptionForAad(bool *);
long NgscbDuplicateNameValuePairs(_NGSCB_NAME_VALUE_COLLECTION *,_NGSCB_NAME_VALUE_ENTRY *,unsigned long,_NGSCB_NAME_VALUE_COLLECTION * *,_NGSCB_NAME_VALUE_ENTRY * *);
long NgscbGetCpuVendorA(char * *);
long NgscbGetCpuVendorHash(unsigned short * *);
long NgscbGetCpuVendorW(unsigned short * *);
long NgscbGetDeviceType(NgscbDeviceType *);
long NgscbGetKnownLastErrorHR();
long NgscbGetSha256HashString(unsigned char *,unsigned long,unsigned short * *);
long NgscbGetWinReConfiguration(bool *,unsigned short *,unsigned long);
long NgscbInsertNameValuePair(_NGSCB_NAME_VALUE_COLLECTION *,_NGSCB_NAME_VALUE_ENTRY *,unsigned short const *,unsigned short const *,_NGSCB_NAME_VALUE_COLLECTION * *,_NGSCB_NAME_VALUE_ENTRY * *);
long NgscbIsHostOsOnRoamableDrive(int *);
long NgscbLoadRegistryNameValuePairs(unsigned short const * *,unsigned long,_NGSCB_NAME_VALUE_COLLECTION * *);
long NgscbManageDeviceEncryptionOptOutForVolume(unsigned short const *,NgscbManageDEVolumeOptOutOption);
long NgscbpGetDEOptOutFileName(unsigned short const *,unsigned short *,unsigned __int64);
long PlatformHash(unsigned short *,unsigned char *,unsigned int,unsigned char *,unsigned int,unsigned char *,unsigned int,unsigned int *,unsigned long);
long PrepareFileList(__FAT32_VOLUME_DATA *,_DISCOVERY_VOLUME_FILE_INFORMATION *,unsigned __int64);
long ProcessFilename(__FAT32_VOLUME_DATA *,__FILE_INFO_NODE *);
long RandomData(unsigned char *,unsigned __int64);
long ReadReg32Bit(unsigned short const *,unsigned short const *,unsigned long,unsigned long *);
long ReadRegBinary(unsigned short const *,unsigned short const *,unsigned long,unsigned char *);
long ReadRegMultiString(unsigned short const *,unsigned short const *,unsigned long,unsigned short *);
long ReadRegString(unsigned short const *,unsigned short const *,unsigned long,unsigned short *);
long StringCbCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCbCopyA(char *,unsigned __int64,char const *);
long StringCbCopyNW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64);
long StringCbCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCbLengthA(char const *,unsigned __int64,unsigned __int64 *);
long StringCbLengthW(unsigned short const *,unsigned __int64,unsigned __int64 *);
long StringCbPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long StringCchCatExW(unsigned short *,unsigned __int64,unsigned short const *,unsigned short * *,unsigned __int64 *,unsigned long);
long StringCchCatW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchCopyA(char *,unsigned __int64,char const *);
long StringCchCopyExW(unsigned short *,unsigned __int64,unsigned short const *,unsigned short * *,unsigned __int64 *,unsigned long);
long StringCchCopyNW(unsigned short *,unsigned __int64,unsigned short const *,unsigned __int64);
long StringCchCopyW(unsigned short *,unsigned __int64,unsigned short const *);
long StringCchLengthA(char const *,unsigned __int64,unsigned __int64 *);
long StringCchLengthW(unsigned short const *,unsigned __int64,unsigned __int64 *);
long StringCchPrintfExW(unsigned short *,unsigned __int64,unsigned short * *,unsigned __int64 *,unsigned long,unsigned short const *,...);
long StringCchPrintfW(unsigned short *,unsigned __int64,unsigned short const *,...);
long Tpm12ApiCreateCounter(HTPMCONTEXT__ *,_TPM_API_HASH_DATA const *,_TPM_API_HASH_DATA const *,unsigned int,unsigned int *,unsigned __int64 *);
long Tpm12ApiGetCapability(HTPMCONTEXT__ *,unsigned int,unsigned int,unsigned char *,unsigned int,unsigned int *,unsigned char *);
long Tpm12ApiIncrementCounter(HTPMCONTEXT__ *,_TPM_API_HASH_DATA const *,unsigned int,unsigned int *,unsigned __int64 *);
long Tpm12ApiReadCounter(HTPMCONTEXT__ *,unsigned int,unsigned int *,unsigned __int64 *);
long Tpm12ApiReadCounterByLabel(HTPMCONTEXT__ *,unsigned int,unsigned int *,unsigned __int64 *);
long Tpm12ApiReadPCR(HTPMCONTEXT__ *,_TPM_API_PCR_INFO *);
long Tpm12ApiSealEx(HTPMCONTEXT__ *,unsigned int,_TPM_API_HASH_DATA const *,_TPM_API_HASH_DATA const *,unsigned int,unsigned char const *,unsigned int,unsigned int,_TPM_API_PCR_INFO const *,unsigned int *,unsigned char *);
long TpmApiOpenAlgorithmProvider(void * *,unsigned short const *);
long TpmApiPlatformAesCfbDecrypt(unsigned char *,unsigned int,unsigned char *,unsigned int,unsigned char *,unsigned int,unsigned char *);
long TpmApiPlatformAesCfbEncrypt(unsigned char *,unsigned int,unsigned char *,unsigned int,unsigned char *,unsigned int,unsigned char *);
long TpmApiPlatformGetRandom(unsigned char *,unsigned int);
long TpmApiPlatformHash(unsigned short *,unsigned char *,unsigned int,unsigned char *,unsigned int,unsigned char *,unsigned int,unsigned int *,unsigned long);
long TpmApiRegistryGetAlgorithmProvider(unsigned short * *,unsigned long *);
long TpmApiRegistryGetValue(_UNICODE_STRING *,_UNICODE_STRING *,unsigned long,void *,unsigned long *);
long TpmW8ApiCreateCounter(HTPMCONTEXT__ *,_TPM_API_HASH_DATA const *,_TPM_API_HASH_DATA const *,unsigned int,unsigned int,unsigned int *,unsigned __int64 *);
long TpmW8ApiGetCapability(HTPMCONTEXT__ *,unsigned int,unsigned int,unsigned char *,unsigned int,unsigned int *,unsigned char *);
long TpmW8ApiIncrementCounter(HTPMCONTEXT__ *,_TPM_API_HASH_DATA const *,unsigned int,unsigned int *,unsigned __int64 *);
long TpmW8ApiReadCounter(HTPMCONTEXT__ *,unsigned int,unsigned int *,unsigned __int64 *);
long TpmW8ApiReadPCR20(HTPMCONTEXT__ *,unsigned short,unsigned int,_TPM_API_HASH_DATA20 *);
long TpmW8ApiSealEx(HTPMCONTEXT__ *,unsigned int,_TPM_API_HASH_DATA const *,_TPM_API_HASH_DATA const *,unsigned int,unsigned char const *,unsigned int,unsigned int,_TPM_API_PCR_INFO20 const *,unsigned int *,unsigned char *);
long TraceBufferValue(unsigned short *,unsigned short *,unsigned char *,unsigned int);
long TraceDigestValue(unsigned short *,unsigned short *,unsigned char *,unsigned int,unsigned char);
long TraceDirect(unsigned short *);
long TraceTpmBufferValue(unsigned char,unsigned char *,unsigned int);
long TraceW8ReturnCode(unsigned short *,unsigned int);
long TracepGetBuffer(unsigned short * *,unsigned short * *,unsigned __int64 *,unsigned __int64 *);
long TracepInsertTCGSymbol(unsigned short * *,unsigned short * *,unsigned __int64 *,unsigned __int64 *,TPM_SYMBOLTABLE_ENTRY *,unsigned int,unsigned char);
long UIntPtrToUShort(unsigned __int64,unsigned short *);
long ULongLongMult(unsigned __int64,unsigned __int64,unsigned __int64 *);
long ULongSub(unsigned long,unsigned long,unsigned long *);
long ULongToUShort(unsigned long,unsigned short *);
long UShortAdd(unsigned short,unsigned short,unsigned short *);
long WbclGetCurrentElementDigestSize(_WBCL_Iterator *,unsigned int *);
long WbclGetCurrentElementSize(_WBCL_Iterator *,unsigned int *);
long WriteBootArea(__FAT32_VOLUME_DATA *);
long WriteBuffer(__FAT32_VOLUME_DATA *,unsigned long,unsigned long *);
long WriteDiscoveryFiles(__FAT32_VOLUME_DATA *);
long WriteFat(__FAT32_VOLUME_DATA *);
long WriteReg32Bit(unsigned short const *,unsigned short const *,unsigned long);
long WriteRootDirectory(__FAT32_VOLUME_DATA *);
long wil_RtlStagingConfig_RecordFeatureUsage(unsigned int,unsigned int,int);
long wil_StagingConfig_RecordFeatureUsage(unsigned int,unsigned int,int);
long wil_details_NtQueryWnfStateData(__WIL__WNF_STATE_NAME const *,__WIL__WNF_TYPE_ID const *,void const *,unsigned long *,void *,unsigned long *);
long wil_details_NtUpdateWnfStateData(__WIL__WNF_STATE_NAME const *,void const *,unsigned long,__WIL__WNF_TYPE_ID const *,void const *,unsigned long,unsigned long);
long wil_details_RtlRegisterFeatureConfigurationChangeNotification(void (*)(void *),void *,unsigned __int64 *,void * *);
long wil_details_RtlSubscribeWnfStateChangeNotification(__WIL__WNF_USER_SUBSCRIPTION * *,__WIL__WNF_STATE_NAME,unsigned long,long (*)(__WIL__WNF_STATE_NAME,unsigned long,__WIL__WNF_TYPE_ID *,void *,void const *,unsigned long),void *,__WIL__WNF_TYPE_ID *,unsigned long,unsigned long);
long wil_details_StagingConfig_FireNotification(wil_details_StagingConfig *,unsigned int,unsigned short,int);
long wil_details_StagingConfig_Load(wil_details_StagingConfig *,wil_FeatureStore,unsigned __int64,void *,int);
long wil_details_WriteSRUMWnfUsageBuffer(wil::details_abi::heap_vector<wil_details_FeatureUsageSRUM> *);
unsigned char * DiscVolBootCode;
unsigned char * WbclGetCurrentElementData(_WBCL_Iterator *);
unsigned char * WbclGetCurrentElementDigest(_WBCL_Iterator *);
unsigned char FsRtlIsFatDbcsLegal(_STRING,unsigned char,unsigned char,unsigned char);
unsigned char TpmApiDefaultToExistingProviders();
unsigned char TraceEnabled();
unsigned char g_logFileCreated;
unsigned int (* g_fpW8TpmSubmit)(void *,unsigned char * const,unsigned int,unsigned char *,unsigned int *);
unsigned int TpmApiPlatformW8TbsSubmit(void *,unsigned char * const,unsigned int,unsigned char *,unsigned int *);
unsigned int WbclGetCurrentElementDataSize(_WBCL_Iterator *);
unsigned int WbclGetDigestSizeUnchecked(_WBCL_Iterator *,unsigned short);
unsigned long GetSafeBootMode();
unsigned long InitializeDeEowFreeSpaceCallback(HCMNOTIFICATION__ *,void *,_CM_NOTIFY_ACTION,_CM_NOTIFY_EVENT_DATA *,unsigned long);
unsigned short const * const FveGpAllowSecureBootForIntegrityName;
unsigned short const * const FveGpAllowSoftwareEncryptionFailoverFdvValueName;
unsigned short const * const FveGpAllowSoftwareEncryptionFailoverOsValueName;
unsigned short const * const FveGpAllowSoftwareEncryptionFailoverRdvValueName;
unsigned short const * const FveGpAllowedHardwareEncryptionAlgorithmsFdvValueName;
unsigned short const * const FveGpAllowedHardwareEncryptionAlgorithmsOsValueName;
unsigned short const * const FveGpAllowedHardwareEncryptionAlgorithmsRdvValueName;
unsigned short const * const FveGpAutoResealAfterRecoveryValueName;
unsigned short const * const FveGpBcdAdditionalExcludedSettings;
unsigned short const * const FveGpBcdAdditionalSecurityCriticalSettings;
unsigned short const * const FveGpBcdUseEnhancedProfile;
unsigned short const * const FveGpDataOnlyEncryptionFdvValueName;
unsigned short const * const FveGpDataOnlyEncryptionOsValueName;
unsigned short const * const FveGpDataOnlyEncryptionRdvValueName;
unsigned short const * const FveGpDisableExternalDMAUnderLock;
unsigned short const * const FveGpEnablePreBootInputProtectorsOnSlatesName;
unsigned short const * const FveGpEnablePreBootPinExceptionOnDECapableDevice;
unsigned short const * const FveGpFdvPassphraseComplexityCheckValueName;
unsigned short const * const FveGpFdvPassphraseLengthRequirementMinValueName;
unsigned short const * const FveGpHardwareEncryptionSettingsEnabledFdvValueName;
unsigned short const * const FveGpHardwareEncryptionSettingsEnabledOsValueName;
unsigned short const * const FveGpHardwareEncryptionSettingsEnabledRdvValueName;
unsigned short const * const FveGpMdmEncryptionMethodPolicy;
unsigned short const * const FveGpMdmRootArea;
unsigned short const * const FveGpOsPassphraseAsciiOnlyValueName;
unsigned short const * const FveGpOsPassphraseComplexityCheckValueName;
unsigned short const * const FveGpOsPassphraseLengthRequirementMinValueName;
unsigned short const * const FveGpOsUsePassphraseValueName;
unsigned short const * const FveGpPcr0ValueName;
unsigned short const * const FveGpPcr10ValueName;
unsigned short const * const FveGpPcr11ValueName;
unsigned short const * const FveGpPcr12ValueName;
unsigned short const * const FveGpPcr13ValueName;
unsigned short const * const FveGpPcr14ValueName;
unsigned short const * const FveGpPcr15ValueName;
unsigned short const * const FveGpPcr16ValueName;
unsigned short const * const FveGpPcr17ValueName;
unsigned short const * const FveGpPcr18ValueName;
unsigned short const * const FveGpPcr19ValueName;
unsigned short const * const FveGpPcr1ValueName;
unsigned short const * const FveGpPcr20ValueName;
unsigned short const * const FveGpPcr21ValueName;
unsigned short const * const FveGpPcr22ValueName;
unsigned short const * const FveGpPcr23ValueName;
unsigned short const * const FveGpPcr2ValueName;
unsigned short const * const FveGpPcr3ValueName;
unsigned short const * const FveGpPcr4ValueName;
unsigned short const * const FveGpPcr5ValueName;
unsigned short const * const FveGpPcr6ValueName;
unsigned short const * const FveGpPcr7ValueName;
unsigned short const * const FveGpPcr8ValueName;
unsigned short const * const FveGpPcr9ValueName;
unsigned short const * const FveGpRdvPassphraseComplexityCheckValueName;
unsigned short const * const FveGpRdvPassphraseLengthRequirementMinValueName;
unsigned short const * const FveGpRestrictHardwareEncryptionAlgorithmsFdvValueName;
unsigned short const * const FveGpRestrictHardwareEncryptionAlgorithmsOsValueName;
unsigned short const * const FveGpRestrictHardwareEncryptionAlgorithmsRdvValueName;
unsigned short const * const FveGpStandardUsersDisallowedPinChangeValueName;
unsigned short const * const NGSCB_AUTODE_CHECK_STATUS;
unsigned short const * const NGSCB_AUTODE_HSTI_PREREQS;
unsigned short const * const NGSCB_AUTODE_HSTI_REQUIRED;
unsigned short const * const NGSCB_DMA_DEFAULT_HSTI_SECURITY;
unsigned short const * const NGSCB_DMA_DEFAULT_SAFE_BUSES;
unsigned short const * const NGSCB_DMA_DEFAULT_VULNERABLE_BUSES;
unsigned short const * const NGSCB_DMA_OEM_HSTI_SECURITY;
unsigned short const * const NGSCB_DMA_OEM_SAFE_BUSES;
unsigned short const * const NGSCB_DMA_OEM_VULNERABLE_BUSES;
unsigned short const * const NGSCB_TEST_OVERRIDE_KEY_PATH;
void (* g_fpFreeMemory)(void *);
void (* g_wil_details_RecordSRUMFeatureUsage)(unsigned int,unsigned int,unsigned int);
void (* g_wil_details_apiRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_apiSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_apiUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_internalRecordFeatureUsage)(unsigned int,unsigned int,unsigned int,char const *);
void (* g_wil_details_internalSubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ * *,void (*)(void *),void *);
void (* g_wil_details_internalUnsubscribeFeatureStateChangeNotification)(FEATURE_STATE_CHANGE_SUBSCRIPTION__ *);
void (* g_wil_details_pfnFeatureLoggingHook)(unsigned int,FEATURE_LOGGED_TRAITS const *,FEATURE_ERROR const *,int,wil_ReportingKind const *,wil_VariantReportingKind const *,unsigned char,unsigned __int64);
void (* g_wil_details_pfnRtlUnregisterFeatureConfigurationChangeNotification)(void *);
void (* g_wil_details_recordFeatureUsage)(unsigned int,wil_details_ServiceReportingKind,unsigned int,wil_details_FeatureReportingCache *,wil_details_RecordUsageResult *);
void * (* g_fpGetMemory)(unsigned __int64);
void * MemoryAlloc(unsigned __int64);
void * TpmApiPlatformGetMemory(unsigned __int64);
void * g_DllHandle;
void * operator new(unsigned __int64);
void * operator new(unsigned __int64,std::nothrow_t const &);
void * operator new[](unsigned __int64,std::nothrow_t const &);
void CleanupFileInfoNode(__FILE_INFO_NODE *);
void CleanupVolumeData(__FAT32_VOLUME_DATA *);
void FatEvaluateNameCase(_UNICODE_STRING *,unsigned char *,unsigned char *,unsigned char *);
void FatStringTo8dot3(_STRING,unsigned char (*)[11]);
void FveClearSetupSuspendedBitLockerState();
void FveGlobalLockAcquireCallback(void *,unsigned __int64 *);
void FveGlobalLockReleaseCallback(void *,unsigned __int64 *);
void HashpAddExcludeRange(_EXCLUDE_RANGE * const,unsigned long *,unsigned long,unsigned long);
void HashpFinalizeHash(BCRYPT_HASH_CTXT *,unsigned char *,void * *,unsigned char *,unsigned long);
void HashpPadHash<BCRYPT_HASH_CTXT *>(BCRYPT_HASH_CTXT *,unsigned long,unsigned long);
void MemoryFree(void *);
void TpmApiPlatformFreeMemory(void *);
void operator delete(void *);
void wil_details_FeatureReporting_IncrementOpportunityInCache(wil_details_FeatureReportingCache *,wil_details_ServiceReportingKind,unsigned int,wil_details_RecordUsageResult *);
void wil_details_FeatureReporting_IncrementUsageInCache(wil_details_FeatureReportingCache *,wil_details_ServiceReportingKind,unsigned int,wil_details_RecordUsageResult *);
void wil_details_FeatureReporting_ReportUsageToService(wil_details_FeatureReportingCache *,unsigned int,int,int,FEATURE_LOGGED_TRAITS const *,int,wil_ReportingKind,unsigned __int64);
