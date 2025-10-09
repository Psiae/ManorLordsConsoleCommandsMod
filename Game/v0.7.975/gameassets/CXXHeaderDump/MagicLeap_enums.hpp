enum class CloudStatus {
    CloudStatus_NotDone = 0,
    CloudStatus_Done = 1,
    CloudStatus_MAX = 2,
};

enum class EFocusLostReason {
    EFocusLostReason_Invalid = 0,
    EFocusLostReason_System = 1,
    EFocusLostReason_MAX = 2,
};

enum class EMagicLeapHeadTrackingError {
    None = 0,
    NotEnoughFeatures = 1,
    LowLight = 2,
    Unknown = 3,
    EMagicLeapHeadTrackingError_MAX = 4,
};

enum class EMagicLeapHeadTrackingMapEvent {
    Lost = 0,
    Recovered = 1,
    RecoveryFailed = 2,
    NewSession = 3,
    EMagicLeapHeadTrackingMapEvent_MAX = 4,
};

enum class EMagicLeapHeadTrackingMode {
    PositionAndOrientation = 0,
    Unavailable = 1,
    Unknown = 2,
    EMagicLeapHeadTrackingMode_MAX = 3,
};

enum class EMagicLeapMeshLOD {
    Minimum = 0,
    Medium = 1,
    Maximum = 2,
    EMagicLeapMeshLOD_MAX = 3,
};

enum class EMagicLeapMeshState {
    New = 0,
    Updated = 1,
    Deleted = 2,
    Unchanged = 3,
    EMagicLeapMeshState_MAX = 4,
};

enum class EMagicLeapMeshType {
    Triangles = 0,
    PointCloud = 1,
    EMagicLeapMeshType_MAX = 2,
};

enum class EMagicLeapMeshVertexColorMode {
    None = 0,
    Confidence = 1,
    Block = 2,
    LOD = 3,
    EMagicLeapMeshVertexColorMode_MAX = 4,
};

enum class EMagicLeapRaycastResultState {
    RequestFailed = 0,
    NoCollision = 1,
    HitUnobserved = 2,
    HitObserved = 3,
    EMagicLeapRaycastResultState_MAX = 4,
};

enum class PurchaseType {
    Consumable = 0,
    Nonconsumable = 1,
    Undefined = 2,
    PurchaseType_MAX = 3,
};

