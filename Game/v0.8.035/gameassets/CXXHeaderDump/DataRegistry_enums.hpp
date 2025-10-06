enum class EDataRegistryAcquireStatus {
    NotStarted = 0,
    WaitingForInitialAcquire = 1,
    InitialAcquireFinished = 2,
    WaitingForResources = 3,
    AcquireFinished = 4,
    AcquireError = 5,
    DoesNotExist = 6,
    EDataRegistryAcquireStatus_MAX = 7,
};

enum class EDataRegistryAvailability {
    DoesNotExist = 0,
    Unknown = 1,
    Remote = 2,
    OnDisk = 3,
    LocalAsset = 4,
    PreCached = 5,
    EDataRegistryAvailability_MAX = 6,
};

enum class EDataRegistrySubsystemGetItemResult {
    Found = 0,
    NotFound = 1,
    EDataRegistrySubsystemGetItemResult_MAX = 2,
};

enum class EMetaDataRegistrySourceAssetUsage {
    NoAssets = 0,
    SearchAssets = 1,
    RegisterAssets = 2,
    SearchAndRegisterAssets = 3,
    EMetaDataRegistrySourceAssetUsage_MAX = 4,
};

