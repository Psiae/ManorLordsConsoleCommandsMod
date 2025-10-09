enum class EAimMode {
    AimAtTarget = 0,
    OrientToTarget = 1,
    MAX = 2,
};

enum class EApplyTransformMode {
    Override = 0,
    Additive = 1,
    Max = 2,
};

enum class ECRSimConstraintType {
    Distance = 0,
    DistanceFromA = 1,
    DistanceFromB = 2,
    Plane = 3,
    ECRSimConstraintType_MAX = 4,
};

enum class ECRSimPointForceType {
    Direction = 0,
    ECRSimPointForceType_MAX = 1,
};

enum class ECRSimSoftCollisionType {
    Plane = 0,
    Sphere = 1,
    Cone = 2,
    ECRSimSoftCollisionType_MAX = 3,
};

enum class EConnectorType {
    Primary = 0,
    Secondary = 1,
    EConnectorType_MAX = 2,
};

enum class EConstraintInterpType {
    Average = 0,
    Shortest = 1,
    Max = 2,
};

enum class EControlRigComponentMapDirection {
    Input = 0,
    Output = 1,
    EControlRigComponentMapDirection_MAX = 2,
};

enum class EControlRigComponentSpace {
    WorldSpace = 0,
    ActorSpace = 1,
    ComponentSpace = 2,
    RigSpace = 3,
    LocalSpace = 4,
    Max = 5,
};

enum class EControlRigCurveAlignment {
    Front = 0,
    Stretched = 1,
    EControlRigCurveAlignment_MAX = 2,
};

namespace EControlRigDrawHierarchyMode {
    enum Type {
        Axes = 0,
        Max = 1,
    };
}

enum class EControlRigFKRigExecuteMode {
    Replace = 0,
    Additive = 1,
    Direct = 2,
    Max = 3,
};

enum class EControlRigInteractionType {
    None = 0,
    Translate = 1,
    Rotate = 2,
    Scale = 4,
    All = 7,
    EControlRigInteractionType_MAX = 8,
};

enum class EControlRigModifyBoneMode {
    OverrideLocal = 0,
    OverrideGlobal = 1,
    AdditiveLocal = 2,
    AdditiveGlobal = 3,
    Max = 4,
};

enum class EControlRigSetKey {
    DoNotCare = 0,
    Always = 1,
    Never = 2,
    EControlRigSetKey_MAX = 3,
};

enum class EControlRigTestDataPlaybackMode {
    Live = 0,
    ReplayInputs = 1,
    GroundTruth = 2,
    Max = 3,
};

enum class EControlRigVectorKind {
    Direction = 0,
    Location = 1,
    EControlRigVectorKind_MAX = 2,
};

enum class EModularRigNotification {
    ModuleAdded = 0,
    ModuleRenamed = 1,
    ModuleRemoved = 2,
    ModuleReparented = 3,
    ConnectionChanged = 4,
    ModuleConfigValueChanged = 5,
    ModuleShortNameChanged = 6,
    InteractionBracketOpened = 7,
    InteractionBracketClosed = 8,
    InteractionBracketCanceled = 9,
    Max = 10,
};

enum class EModularRigResolveState {
    Success = 0,
    Error = 1,
    Max = 2,
};

enum class EMovieSceneControlRigSpaceType {
    Parent = 0,
    World = 1,
    ControlRig = 2,
    EMovieSceneControlRigSpaceType_MAX = 3,
};

enum class ERigBoneType {
    Imported = 0,
    User = 1,
    ERigBoneType_MAX = 2,
};

enum class ERigControlAnimationType {
    AnimationControl = 0,
    AnimationChannel = 1,
    ProxyControl = 2,
    VisualCue = 3,
    ERigControlAnimationType_MAX = 4,
};

enum class ERigControlAxis {
    X = 0,
    Y = 1,
    Z = 2,
    ERigControlAxis_MAX = 3,
};

enum class ERigControlTransformChannel {
    TranslationX = 0,
    TranslationY = 1,
    TranslationZ = 2,
    Pitch = 3,
    Yaw = 4,
    Roll = 5,
    ScaleX = 6,
    ScaleY = 7,
    ScaleZ = 8,
    ERigControlTransformChannel_MAX = 9,
};

enum class ERigControlType {
    Bool = 0,
    Float = 1,
    Integer = 2,
    Vector2D = 3,
    Position = 4,
    Scale = 5,
    Rotator = 6,
    Transform = 7,
    TransformNoScale = 8,
    EulerTransform = 9,
    ScaleFloat = 10,
    ERigControlType_MAX = 11,
};

enum class ERigControlValueType {
    Initial = 0,
    Current = 1,
    Minimum = 2,
    Maximum = 3,
    ERigControlValueType_MAX = 4,
};

enum class ERigControlVisibility {
    UserDefined = 0,
    BasedOnSelection = 1,
    ERigControlVisibility_MAX = 2,
};

enum class ERigElementResolveState {
    Unknown = 0,
    InvalidTarget = 1,
    PossibleTarget = 2,
    DefaultTarget = 3,
    Max = 4,
};

enum class ERigElementType {
    None = 0,
    Bone = 1,
    Null = 2,
    Space = 2,
    Control = 4,
    Curve = 8,
    RigidBody = 16,
    Reference = 32,
    Connector = 64,
    Socket = 128,
    First = 1,
    Last = 128,
    All = 255,
    ToResetAfterConstructionEvent = 141,
    ERigElementType_MAX = 256,
};

enum class ERigEvent {
    None = 0,
    RequestAutoKey = 1,
    OpenUndoBracket = 2,
    CloseUndoBracket = 3,
    Max = 4,
};

enum class ERigExecutionType {
    Runtime = 0,
    Editing = 1,
    Max = 2,
};

enum class ERigHierarchyNotification {
    ElementAdded = 0,
    ElementRemoved = 1,
    ElementRenamed = 2,
    ElementSelected = 3,
    ElementDeselected = 4,
    ParentChanged = 5,
    HierarchyReset = 6,
    ControlSettingChanged = 7,
    ControlVisibilityChanged = 8,
    ControlDrivenListChanged = 9,
    ControlShapeTransformChanged = 10,
    ParentWeightsChanged = 11,
    InteractionBracketOpened = 12,
    InteractionBracketClosed = 13,
    ElementReordered = 14,
    ConnectorSettingChanged = 15,
    SocketColorChanged = 16,
    SocketDescriptionChanged = 17,
    SocketDesiredParentChanged = 18,
    HierarchyCopied = 19,
    Max = 20,
};

enum class ERigMetaDataNameSpace {
    None = 0,
    Self = 1,
    Parent = 2,
    Root = 3,
    Last = 4,
    ERigMetaDataNameSpace_MAX = 5,
};

enum class ERigMetadataType {
    Bool = 0,
    BoolArray = 1,
    Float = 2,
    FloatArray = 3,
    Int32 = 4,
    Int32Array = 5,
    Name = 6,
    NameArray = 7,
    Vector = 8,
    VectorArray = 9,
    Rotator = 10,
    RotatorArray = 11,
    Quat = 12,
    QuatArray = 13,
    Transform = 14,
    TransformArray = 15,
    LinearColor = 16,
    LinearColorArray = 17,
    RigElementKey = 18,
    RigElementKeyArray = 19,
    Invalid = 20,
    ERigMetadataType_MAX = 21,
};

enum class ERigSpaceType {
    Global = 0,
    Bone = 1,
    Control = 2,
    Space = 3,
    ERigSpaceType_MAX = 4,
};

enum class ERigSwitchParentMode {
    World = 0,
    DefaultParent = 1,
    ParentItem = 2,
    ERigSwitchParentMode_MAX = 3,
};

enum ERigTransformStackEntryType {
    TransformPose = 0,
    ControlOffset = 1,
    ControlShape = 2,
    CurveValue = 3,
    ERigTransformStackEntryType_MAX = 4,
};

namespace ERigTransformType {
    enum Type {
        InitialLocal = 0,
        CurrentLocal = 1,
        InitialGlobal = 2,
        CurrentGlobal = 3,
        NumTransformTypes = 4,
        ERigTransformType_MAX = 5,
    };
}

enum class ETransformGetterType {
    Initial = 0,
    Current = 1,
    Max = 2,
};

enum class ETransformSpaceMode {
    LocalSpace = 0,
    GlobalSpace = 1,
    BaseSpace = 2,
    BaseJoint = 3,
    Max = 4,
};

