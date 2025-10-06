enum class EAgentComponentState {
    None = 0,
    EntityPendingCreation = 1,
    EntityCreated = 2,
    PuppetPendingInitialization = 3,
    PuppetInitialized = 4,
    PuppetPaused = 5,
    PuppetPendingReplication = 6,
    PuppetReplicatedOrphan = 7,
    EAgentComponentState_MAX = 8,
};

enum class ESpawnRequestStatus {
    None = 0,
    Pending = 1,
    Processing = 2,
    Succeeded = 3,
    Failed = 4,
    RetryPending = 5,
    ESpawnRequestStatus_MAX = 6,
};

