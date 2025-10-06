enum class EActivationFunction {
    Linear = 0,
    ReLU = 1,
    LeakyReLU = 2,
    Tanh = 3,
    Sigmoid = 4,
    EActivationFunction_MAX = 5,
};

enum class EArchetype {
    Asian = 0,
    Black = 1,
    Caucasian = 2,
    Hispanic = 3,
    Alien = 4,
    Other = 5,
    EArchetype_MAX = 6,
};

enum class EAutomaticRadius {
    On = 0,
    Off = 1,
    EAutomaticRadius_MAX = 2,
};

enum class EDNADataLayer {
    None = 0,
    Descriptor = 1,
    Definition = 3,
    Behavior = 7,
    Geometry = 11,
    GeometryWithoutBlendShapes = 19,
    MachineLearnedBehavior = 35,
    RBFBehavior = 71,
    All = 111,
    EDNADataLayer_MAX = 112,
};

enum class EDirection {
    Left = 0,
    Right = 1,
    Up = 2,
    Down = 3,
    Front = 4,
    Back = 5,
    EDirection_MAX = 6,
};

enum class EGender {
    Male = 0,
    Female = 1,
    Other = 2,
    EGender_MAX = 3,
};

enum class ELodUpdateOption {
    LOD0Only = 0,
    LOD1AndHigher = 1,
    All = 2,
    ELodUpdateOption_MAX = 3,
};

enum class ERigLogicCalculationType {
    Scalar = 0,
    SSE = 1,
    AVX = 2,
    NEON = 3,
    AnyVector = 4,
    ERigLogicCalculationType_MAX = 5,
};

enum class ERigLogicRotationOrder {
    XYZ = 0,
    XZY = 1,
    YXZ = 2,
    YZX = 3,
    ZXY = 4,
    ZYX = 5,
    ERigLogicRotationOrder_MAX = 6,
};

enum class ERigLogicRotationType {
    None = 0,
    EulerAngles = 3,
    Quaternions = 4,
    ERigLogicRotationType_MAX = 5,
};

enum class ERigLogicScaleType {
    None = 0,
    Vector = 3,
    ERigLogicScaleType_MAX = 4,
};

enum class ERigLogicTranslationType {
    None = 0,
    Vector = 3,
    ERigLogicTranslationType_MAX = 4,
};

enum class ERotationRepresentation {
    EulerAngles = 0,
    Quaternion = 1,
    ERotationRepresentation_MAX = 2,
};

enum class ERotationUnit {
    Degrees = 0,
    Radians = 1,
    ERotationUnit_MAX = 2,
};

enum class EScaleRepresentation {
    Vector = 0,
    EScaleRepresentation_MAX = 1,
};

enum class ETranslationRepresentation {
    Vector = 0,
    ETranslationRepresentation_MAX = 1,
};

enum class ETranslationUnit {
    CM = 0,
    M = 1,
    ETranslationUnit_MAX = 2,
};

enum class ETwistAxis {
    X = 0,
    Y = 1,
    Z = 2,
    ETwistAxis_MAX = 3,
};

