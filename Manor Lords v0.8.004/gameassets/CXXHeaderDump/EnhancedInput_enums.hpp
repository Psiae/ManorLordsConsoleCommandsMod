enum class EDeadZoneType {
    Axial = 0,
    Radial = 1,
    EDeadZoneType_MAX = 2,
};

enum class EFOVScalingType {
    Standard = 0,
    UE4_BackCompat = 1,
    EFOVScalingType_MAX = 2,
};

enum class EInputActionAccumulationBehavior {
    TakeHighestAbsoluteValue = 0,
    Cumulative = 1,
    EInputActionAccumulationBehavior_MAX = 2,
};

enum class EInputActionValueType {
    Boolean = 0,
    Axis1D = 1,
    Axis2D = 2,
    Axis3D = 3,
    EInputActionValueType_MAX = 4,
};

enum class EInputAxisSwizzle {
    YXZ = 0,
    ZYX = 1,
    XZY = 2,
    YZX = 3,
    ZXY = 4,
    EInputAxisSwizzle_MAX = 5,
};

enum class EInputMappingRebuildType {
    None = 0,
    Rebuild = 1,
    RebuildWithFlush = 2,
    EInputMappingRebuildType_MAX = 3,
};

enum class EMappingQueryIssue {
    NoIssue = 0,
    ReservedByAction = 1,
    HidesExistingMapping = 2,
    HiddenByExistingMapping = 4,
    CollisionWithMappingInSameContext = 8,
    ForcesTypePromotion = 16,
    ForcesTypeDemotion = 32,
    EMappingQueryIssue_MAX = 33,
};

enum class EMappingQueryResult {
    Error_EnhancedInputNotEnabled = 0,
    Error_InputContextNotInActiveContexts = 1,
    Error_InvalidAction = 2,
    NotMappable = 3,
    MappingAvailable = 4,
    EMappingQueryResult_MAX = 5,
};

enum class ENormalizeInputSmoothingType {
    None = 0,
    Lerp = 1,
    Interp_To = 2,
    Interp_Constant_To = 3,
    Interp_Circular_In = 4,
    Interp_Circular_Out = 5,
    Interp_Circular_In_Out = 6,
    Interp_Ease_In = 7,
    Interp_Ease_Out = 8,
    Interp_Ease_In_Out = 9,
    Interp_Expo_In = 10,
    Interp_Expo_Out = 11,
    Interp_Expo_In_Out = 12,
    Interp_Sin_In = 13,
    Interp_Sin_Out = 14,
    Interp_Sin_In_Out = 15,
    ENormalizeInputSmoothingType_MAX = 16,
};

enum class EPlayerMappableKeySettingBehaviors {
    InheritSettingsFromAction = 0,
    OverrideSettings = 1,
    IgnoreSettings = 2,
    EPlayerMappableKeySettingBehaviors_MAX = 3,
};

enum class EPlayerMappableKeySlot {
    First = 0,
    Second = 1,
    Third = 2,
    Fourth = 3,
    Fifth = 4,
    Sixth = 5,
    Seventh = 6,
    Unspecified = 7,
    Max = 8,
};

enum class ETriggerEvent {
    None = 0,
    Triggered = 1,
    Started = 2,
    Ongoing = 4,
    Canceled = 8,
    Completed = 16,
    ETriggerEvent_MAX = 17,
};

enum class ETriggerEventsSupported {
    None = 0,
    Instant = 1,
    Uninterruptible = 2,
    Ongoing = 4,
    All = 7,
    ETriggerEventsSupported_MAX = 8,
};

enum class ETriggerState {
    None = 0,
    Ongoing = 1,
    Triggered = 2,
    ETriggerState_MAX = 3,
};

enum class ETriggerType {
    Explicit = 0,
    Implicit = 1,
    Blocker = 2,
    ETriggerType_MAX = 3,
};

