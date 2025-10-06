enum class ESmartObjectChangeReason {
    None = 0,
    OnEvent = 1,
    OnTagAdded = 2,
    OnTagRemoved = 3,
    OnClaimed = 4,
    OnOccupied = 5,
    OnReleased = 6,
    OnSlotEnabled = 7,
    OnSlotDisabled = 8,
    OnObjectEnabled = 9,
    OnObjectDisabled = 10,
    OnComponentBound = 11,
    OnComponentUnbound = 12,
    ESmartObjectChangeReason_MAX = 13,
};

enum class ESmartObjectClaimPriority {
    None = 0,
    Low = 1,
    BelowNormal = 2,
    Normal = 3,
    AboveNormal = 4,
    High = 5,
    MIN = 0,
    MAX = 5,
};

enum class ESmartObjectCollectionRegistrationResult {
    Failed_InvalidCollection = 0,
    Failed_AlreadyRegistered = 1,
    Failed_NotFromPersistentLevel = 2,
    Succeeded = 3,
    ESmartObjectCollectionRegistrationResult_MAX = 4,
};

enum class ESmartObjectEntrancePriority {
    Lowest = 0,
    Lower = 1,
    Low = 2,
    BelowNormal = 3,
    Normal = 4,
    AboveNormal = 5,
    High = 6,
    Higher = 7,
    Highest = 8,
    MIN = 0,
    MAX = 8,
};

enum class ESmartObjectSlotNavigationLocationType {
    Entry = 0,
    Exit = 1,
    ESmartObjectSlotNavigationLocationType_MAX = 2,
};

enum class ESmartObjectSlotShape {
    Circle = 0,
    Rectangle = 1,
    ESmartObjectSlotShape_MAX = 2,
};

enum class ESmartObjectSlotState {
    Invalid = 0,
    Free = 1,
    Claimed = 2,
    Occupied = 3,
    Disabled = 4,
    ESmartObjectSlotState_MAX = 5,
};

enum class ESmartObjectTagFilteringPolicy {
    NoFilter = 0,
    Combine = 1,
    Override = 2,
    ESmartObjectTagFilteringPolicy_MAX = 3,
};

enum class ESmartObjectTagMergingPolicy {
    Combine = 0,
    Override = 1,
    ESmartObjectTagMergingPolicy_MAX = 2,
};

enum class ESmartObjectTraceType {
    ByChannel = 0,
    ByProfile = 1,
    ByObjectTypes = 2,
    ESmartObjectTraceType_MAX = 3,
};

enum class ETrySpawnActorIfDehydrated {
    No = 0,
    Yes = 1,
    ETrySpawnActorIfDehydrated_MAX = 2,
};

enum class FSmartObjectSlotEntrySelectionMethod {
    First = 0,
    NearestToSearchLocation = 1,
    FSmartObjectSlotEntrySelectionMethod_MAX = 2,
};

