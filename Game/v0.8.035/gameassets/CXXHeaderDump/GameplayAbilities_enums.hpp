namespace EAbilityGenericReplicatedEvent {
    enum Type {
        GenericConfirm = 0,
        GenericCancel = 1,
        InputPressed = 2,
        InputReleased = 3,
        GenericSignalFromClient = 4,
        GenericSignalFromServer = 5,
        GameCustom1 = 6,
        GameCustom2 = 7,
        GameCustom3 = 8,
        GameCustom4 = 9,
        GameCustom5 = 10,
        GameCustom6 = 11,
        MAX = 12,
    };
}

enum class EAbilityTaskNetSyncType {
    BothWait = 0,
    OnlyServerWait = 1,
    OnlyClientWait = 2,
    EAbilityTaskNetSyncType_MAX = 3,
};

enum class EAbilityTaskWaitState {
    WaitingOnGame = 1,
    WaitingOnUser = 2,
    WaitingOnAvatar = 4,
    EAbilityTaskWaitState_MAX = 5,
};

enum class EAttributeBasedFloatCalculationType {
    AttributeMagnitude = 0,
    AttributeBaseValue = 1,
    AttributeBonusMagnitude = 2,
    AttributeMagnitudeEvaluatedUpToChannel = 3,
    EAttributeBasedFloatCalculationType_MAX = 4,
};

namespace EGameplayAbilityActivationMode {
    enum Type {
        Authority = 0,
        NonAuthority = 1,
        Predicting = 2,
        Confirmed = 3,
        Rejected = 4,
        EGameplayAbilityActivationMode_MAX = 5,
    };
}

namespace EGameplayAbilityInputBinds {
    enum Type {
        Ability1 = 0,
        Ability2 = 1,
        Ability3 = 2,
        Ability4 = 3,
        Ability5 = 4,
        Ability6 = 5,
        Ability7 = 6,
        Ability8 = 7,
        Ability9 = 8,
        EGameplayAbilityInputBinds_MAX = 9,
    };
}

namespace EGameplayAbilityInstancingPolicy {
    enum Type {
        NonInstanced = 0,
        InstancedPerActor = 1,
        InstancedPerExecution = 2,
        EGameplayAbilityInstancingPolicy_MAX = 3,
    };
}

namespace EGameplayAbilityNetExecutionPolicy {
    enum Type {
        LocalPredicted = 0,
        LocalOnly = 1,
        ServerInitiated = 2,
        ServerOnly = 3,
        EGameplayAbilityNetExecutionPolicy_MAX = 4,
    };
}

namespace EGameplayAbilityNetSecurityPolicy {
    enum Type {
        ClientOrServer = 0,
        ServerOnlyExecution = 1,
        ServerOnlyTermination = 2,
        ServerOnly = 3,
        EGameplayAbilityNetSecurityPolicy_MAX = 4,
    };
}

namespace EGameplayAbilityReplicationPolicy {
    enum Type {
        ReplicateNo = 0,
        ReplicateYes = 1,
        EGameplayAbilityReplicationPolicy_MAX = 2,
    };
}

namespace EGameplayAbilityTargetingLocationType {
    enum Type {
        LiteralTransform = 0,
        ActorTransform = 1,
        SocketTransform = 2,
        EGameplayAbilityTargetingLocationType_MAX = 3,
    };
}

namespace EGameplayAbilityTriggerSource {
    enum Type {
        GameplayEvent = 0,
        OwnedTagAdded = 1,
        OwnedTagPresent = 2,
        EGameplayAbilityTriggerSource_MAX = 3,
    };
}

namespace EGameplayCueEvent {
    enum Type {
        OnActive = 0,
        WhileActive = 1,
        Executed = 2,
        Removed = 3,
        EGameplayCueEvent_MAX = 4,
    };
}

enum class EGameplayCueNotify_AttachPolicy {
    DoNotAttach = 0,
    AttachToTarget = 1,
    EGameplayCueNotify_MAX = 2,
};

enum class EGameplayCueNotify_EffectPlaySpace {
    WorldSpace = 0,
    CameraSpace = 1,
    EGameplayCueNotify_MAX = 2,
};

enum class EGameplayCueNotify_LocallyControlledPolicy {
    Always = 0,
    LocalOnly = 1,
    NotLocal = 2,
    EGameplayCueNotify_MAX = 3,
};

enum class EGameplayCueNotify_LocallyControlledSource {
    InstigatorActor = 0,
    TargetActor = 1,
    EGameplayCueNotify_MAX = 2,
};

enum class EGameplayCuePayloadType {
    CueParameters = 0,
    FromSpec = 1,
    EGameplayCuePayloadType_MAX = 2,
};

enum class EGameplayEffectAttributeCaptureSource {
    Source = 0,
    Target = 1,
    EGameplayEffectAttributeCaptureSource_MAX = 2,
};

enum class EGameplayEffectDurationType {
    Instant = 0,
    Infinite = 1,
    HasDuration = 2,
    EGameplayEffectDurationType_MAX = 3,
};

enum class EGameplayEffectGrantedAbilityRemovePolicy {
    CancelAbilityImmediately = 0,
    RemoveAbilityOnEnd = 1,
    DoNothing = 2,
    EGameplayEffectGrantedAbilityRemovePolicy_MAX = 3,
};

enum class EGameplayEffectMagnitudeCalculation {
    ScalableFloat = 0,
    AttributeBased = 1,
    CustomCalculationClass = 2,
    SetByCaller = 3,
    EGameplayEffectMagnitudeCalculation_MAX = 4,
};

enum class EGameplayEffectPeriodInhibitionRemovedPolicy {
    NeverReset = 0,
    ResetPeriod = 1,
    ExecuteAndResetPeriod = 2,
    EGameplayEffectPeriodInhibitionRemovedPolicy_MAX = 3,
};

enum class EGameplayEffectReplicationMode {
    Minimal = 0,
    Mixed = 1,
    Full = 2,
    EGameplayEffectReplicationMode_MAX = 3,
};

enum class EGameplayEffectScopedModifierAggregatorType {
    CapturedAttributeBacked = 0,
    Transient = 1,
    EGameplayEffectScopedModifierAggregatorType_MAX = 2,
};

enum class EGameplayEffectStackingDurationPolicy {
    RefreshOnSuccessfulApplication = 0,
    NeverRefresh = 1,
    EGameplayEffectStackingDurationPolicy_MAX = 2,
};

enum class EGameplayEffectStackingExpirationPolicy {
    ClearEntireStack = 0,
    RemoveSingleStackAndRefreshDuration = 1,
    RefreshDuration = 2,
    EGameplayEffectStackingExpirationPolicy_MAX = 3,
};

enum class EGameplayEffectStackingPeriodPolicy {
    ResetOnSuccessfulApplication = 0,
    NeverReset = 1,
    EGameplayEffectStackingPeriodPolicy_MAX = 2,
};

enum class EGameplayEffectStackingType {
    None = 0,
    AggregateBySource = 1,
    AggregateByTarget = 2,
    EGameplayEffectStackingType_MAX = 3,
};

enum class EGameplayEffectVersion {
    Monolithic = 0,
    Modular53 = 1,
    AbilitiesComponent53 = 2,
    Current = 2,
    EGameplayEffectVersion_MAX = 3,
};

enum class EGameplayModEvaluationChannel {
    Channel0 = 0,
    Channel1 = 1,
    Channel2 = 2,
    Channel3 = 3,
    Channel4 = 4,
    Channel5 = 5,
    Channel6 = 6,
    Channel7 = 7,
    Channel8 = 8,
    Channel9 = 9,
    Channel_MAX = 10,
    EGameplayModEvaluationChannel_MAX = 11,
};

namespace EGameplayModOp {
    enum Type {
        AddBase = 0,
        MultiplyAdditive = 1,
        DivideAdditive = 2,
        MultiplyCompound = 4,
        AddFinal = 5,
        Max = 6,
        Additive = 0,
        Multiplicitive = 1,
        Division = 2,
        Override = 3,
    };
}

namespace EGameplayTagEventType {
    enum Type {
        NewOrRemoved = 0,
        AnyCountChange = 1,
        EGameplayTagEventType_MAX = 2,
    };
}

namespace EGameplayTargetingConfirmation {
    enum Type {
        Instant = 0,
        UserConfirmed = 1,
        Custom = 2,
        CustomMulti = 3,
        EGameplayTargetingConfirmation_MAX = 4,
    };
}

enum class ERepAnimPositionMethod {
    Position = 0,
    CurrentSectionId = 1,
    ERepAnimPositionMethod_MAX = 2,
};

enum class ERootMotionMoveToActorTargetOffsetType {
    AlignFromTargetToSource = 0,
    AlignToTargetForward = 1,
    AlignToWorldSpace = 2,
    ERootMotionMoveToActorTargetOffsetType_MAX = 3,
};

namespace ETargetDataFilterSelf {
    enum Type {
        TDFS_Any = 0,
        TDFS_NoSelf = 1,
        TDFS_NoOthers = 2,
        TDFS_MAX = 3,
    };
}

namespace EWaitAttributeChangeComparison {
    enum Type {
        None = 0,
        GreaterThan = 1,
        LessThan = 2,
        GreaterThanOrEqualTo = 3,
        LessThanOrEqualTo = 4,
        NotEqualTo = 5,
        ExactlyEqualTo = 6,
        MAX = 7,
    };
}

enum class EWaitGameplayTagQueryTriggerCondition {
    WhenTrue = 0,
    WhenFalse = 1,
    EWaitGameplayTagQueryTriggerCondition_MAX = 2,
};

