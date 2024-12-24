enum class ERBFKernelType {
    Gaussian = 0,
    Exponential = 1,
    Linear = 2,
    Cubic = 3,
    Quintic = 4,
    ERBFKernelType_MAX = 5,
};

enum class ERBFQuatDistanceType {
    Euclidean = 0,
    ArcLength = 1,
    SwingAngle = 2,
    TwistAngle = 3,
    ERBFQuatDistanceType_MAX = 4,
};

enum class ERBFVectorDistanceType {
    Euclidean = 0,
    Manhattan = 1,
    ArcLength = 2,
    ERBFVectorDistanceType_MAX = 3,
};

enum class ERigUnitDebugPointMode {
    Point = 0,
    Vector = 1,
    Max = 2,
};

enum class ERigUnitDebugTransformMode {
    Point = 0,
    Axes = 1,
    Box = 2,
    Max = 3,
};

enum class ERigUnitVisualDebugPointMode {
    Point = 0,
    Vector = 1,
    Max = 2,
};

enum class ERigVMAnimEasingType {
    Linear = 0,
    QuadraticEaseIn = 1,
    QuadraticEaseOut = 2,
    QuadraticEaseInOut = 3,
    CubicEaseIn = 4,
    CubicEaseOut = 5,
    CubicEaseInOut = 6,
    QuarticEaseIn = 7,
    QuarticEaseOut = 8,
    QuarticEaseInOut = 9,
    QuinticEaseIn = 10,
    QuinticEaseOut = 11,
    QuinticEaseInOut = 12,
    SineEaseIn = 13,
    SineEaseOut = 14,
    SineEaseInOut = 15,
    CircularEaseIn = 16,
    CircularEaseOut = 17,
    CircularEaseInOut = 18,
    ExponentialEaseIn = 19,
    ExponentialEaseOut = 20,
    ExponentialEaseInOut = 21,
    ElasticEaseIn = 22,
    ElasticEaseOut = 23,
    ElasticEaseInOut = 24,
    BackEaseIn = 25,
    BackEaseOut = 26,
    BackEaseInOut = 27,
    BounceEaseIn = 28,
    BounceEaseOut = 29,
    BounceEaseInOut = 30,
    ERigVMAnimEasingType_MAX = 31,
};

enum class ERigVMBreakpointAction {
    None = 0,
    Resume = 1,
    StepOver = 2,
    StepInto = 3,
    StepOut = 4,
    Max = 5,
};

namespace ERigVMClampSpatialMode {
    enum Type {
        Plane = 0,
        Cylinder = 1,
        Sphere = 2,
        Capsule = 3,
        ERigVMClampSpatialMode_MAX = 4,
    };
}

enum class ERigVMCopyType {
    Default = 0,
    FloatToDouble = 1,
    DoubleToFloat = 2,
    ERigVMCopyType_MAX = 3,
};

namespace ERigVMDrawSettings {
    enum Type {
        Points = 0,
        Lines = 1,
        LineStrip = 2,
        DynamicMesh = 3,
        ERigVMDrawSettings_MAX = 4,
    };
}

enum class ERigVMFunctionArgumentDirection {
    Input = 0,
    Output = 1,
    Invalid = 2,
    ERigVMFunctionArgumentDirection_MAX = 3,
};

enum class ERigVMMemoryType {
    Work = 0,
    Literal = 1,
    External = 2,
    Debug = 3,
    Invalid = 4,
    ERigVMMemoryType_MAX = 5,
};

enum class ERigVMOpCode {
    Execute_0_Operands = 0,
    Execute_1_Operands = 1,
    Execute_2_Operands = 2,
    Execute_3_Operands = 3,
    Execute_4_Operands = 4,
    Execute_5_Operands = 5,
    Execute_6_Operands = 6,
    Execute_7_Operands = 7,
    Execute_8_Operands = 8,
    Execute_9_Operands = 9,
    Execute_10_Operands = 10,
    Execute_11_Operands = 11,
    Execute_12_Operands = 12,
    Execute_13_Operands = 13,
    Execute_14_Operands = 14,
    Execute_15_Operands = 15,
    Execute_16_Operands = 16,
    Execute_17_Operands = 17,
    Execute_18_Operands = 18,
    Execute_19_Operands = 19,
    Execute_20_Operands = 20,
    Execute_21_Operands = 21,
    Execute_22_Operands = 22,
    Execute_23_Operands = 23,
    Execute_24_Operands = 24,
    Execute_25_Operands = 25,
    Execute_26_Operands = 26,
    Execute_27_Operands = 27,
    Execute_28_Operands = 28,
    Execute_29_Operands = 29,
    Execute_30_Operands = 30,
    Execute_31_Operands = 31,
    Execute_32_Operands = 32,
    Execute_33_Operands = 33,
    Execute_34_Operands = 34,
    Execute_35_Operands = 35,
    Execute_36_Operands = 36,
    Execute_37_Operands = 37,
    Execute_38_Operands = 38,
    Execute_39_Operands = 39,
    Execute_40_Operands = 40,
    Execute_41_Operands = 41,
    Execute_42_Operands = 42,
    Execute_43_Operands = 43,
    Execute_44_Operands = 44,
    Execute_45_Operands = 45,
    Execute_46_Operands = 46,
    Execute_47_Operands = 47,
    Execute_48_Operands = 48,
    Execute_49_Operands = 49,
    Execute_50_Operands = 50,
    Execute_51_Operands = 51,
    Execute_52_Operands = 52,
    Execute_53_Operands = 53,
    Execute_54_Operands = 54,
    Execute_55_Operands = 55,
    Execute_56_Operands = 56,
    Execute_57_Operands = 57,
    Execute_58_Operands = 58,
    Execute_59_Operands = 59,
    Execute_60_Operands = 60,
    Execute_61_Operands = 61,
    Execute_62_Operands = 62,
    Execute_63_Operands = 63,
    Execute_64_Operands = 64,
    Zero = 65,
    BoolFalse = 66,
    BoolTrue = 67,
    Copy = 68,
    Increment = 69,
    Decrement = 70,
    Equals = 71,
    NotEquals = 72,
    JumpAbsolute = 73,
    JumpForward = 74,
    JumpBackward = 75,
    JumpAbsoluteIf = 76,
    JumpForwardIf = 77,
    JumpBackwardIf = 78,
    ChangeType = 79,
    Exit = 80,
    BeginBlock = 81,
    EndBlock = 82,
    ArrayReset = 83,
    ArrayGetNum = 84,
    ArraySetNum = 85,
    ArrayGetAtIndex = 86,
    ArraySetAtIndex = 87,
    ArrayAdd = 88,
    ArrayInsert = 89,
    ArrayRemove = 90,
    ArrayFind = 91,
    ArrayAppend = 92,
    ArrayClone = 93,
    ArrayIterator = 94,
    ArrayUnion = 95,
    ArrayDifference = 96,
    ArrayIntersection = 97,
    ArrayReverse = 98,
    InvokeEntry = 99,
    JumpToBranch = 100,
    Execute = 101,
    RunInstructions = 102,
    Invalid = 103,
    FirstArrayOpCode = 83,
    LastArrayOpCode = 98,
    ERigVMOpCode_MAX = 104,
};

enum class ERigVMParameterType {
    Input = 0,
    Output = 1,
    Invalid = 2,
    ERigVMParameterType_MAX = 3,
};

enum class ERigVMPinDirection {
    Input = 0,
    Output = 1,
    IO = 2,
    Visible = 3,
    Hidden = 4,
    Invalid = 5,
    ERigVMPinDirection_MAX = 6,
};

enum class ERigVMRegisterType {
    Plain = 0,
    String = 1,
    Name = 2,
    Struct = 3,
    Invalid = 4,
    ERigVMRegisterType_MAX = 5,
};

enum class ERigVMSimPointIntegrateType {
    Verlet = 0,
    SemiExplicitEuler = 1,
    ERigVMSimPointIntegrateType_MAX = 2,
};

enum class ERigVMTransformSpace {
    LocalSpace = 0,
    GlobalSpace = 1,
    Max = 2,
};

enum class ERigVMUserWorkflowType {
    Invalid = 0,
    NodeContext = 1,
    PinContext = 2,
    OnPinDefaultChanged = 4,
    All = 7,
    ERigVMUserWorkflowType_MAX = 8,
};

