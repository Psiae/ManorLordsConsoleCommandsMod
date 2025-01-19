enum Default__Enum {
};

enum class EAppMsgCategory {
    Warning = 0,
    Error = 1,
    Success = 2,
    Info = 3,
    EAppMsgCategory_MAX = 4,
};

namespace EAppMsgType {
    enum Type {
        Ok = 0,
        YesNo = 1,
        OkCancel = 2,
        YesNoCancel = 3,
        CancelRetryContinue = 4,
        YesNoYesAllNoAll = 5,
        YesNoYesAllNoAllCancel = 6,
        YesNoYesAll = 7,
        EAppMsgType_MAX = 8,
    };
}

namespace EAppReturnType {
    enum Type {
        No = 0,
        Yes = 1,
        YesAll = 2,
        NoAll = 3,
        Cancel = 4,
        Ok = 5,
        Retry = 6,
        Continue = 7,
        EAppReturnType_MAX = 8,
    };
}

enum class EAutomationEventType {
    Info = 0,
    Warning = 1,
    Error = 2,
    EAutomationEventType_MAX = 3,
};

namespace EAxis {
    enum Type {
        None = 0,
        X = 1,
        Y = 2,
        Z = 3,
        EAxis_MAX = 4,
    };
}

namespace EAxisList {
    enum Type {
        None = 0,
        X = 1,
        Y = 2,
        Z = 4,
        Screen = 8,
        XY = 3,
        XZ = 5,
        YZ = 6,
        XYZ = 7,
        All = 15,
        ZRotation = 6,
        Rotate2D = 8,
        EAxisList_MAX = 16,
    };
}

enum class EDataValidationResult {
    Invalid = 0,
    Valid = 1,
    NotValidated = 2,
    EDataValidationResult_MAX = 3,
};

enum class EDataValidationUsecase {
    None = 0,
    Manual = 1,
    Commandlet = 2,
    Save = 3,
    PreSubmit = 4,
    Script = 5,
    EDataValidationUsecase_MAX = 6,
};

enum class EInputDeviceConnectionState {
    Invalid = 0,
    Unknown = 1,
    Disconnected = 2,
    Connected = 3,
    EInputDeviceConnectionState_MAX = 4,
};

enum class EInputDeviceTriggerMask {
    None = 0,
    Left = 1,
    Right = 2,
    All = 3,
    EInputDeviceTriggerMask_MAX = 4,
};

enum EInterpCurveMode {
    CIM_Linear = 0,
    CIM_CurveAuto = 1,
    CIM_Constant = 2,
    CIM_CurveUser = 3,
    CIM_CurveBreak = 4,
    CIM_CurveAutoClamped = 5,
    CIM_MAX = 6,
};

enum ELifetimeCondition {
    COND_None = 0,
    COND_InitialOnly = 1,
    COND_OwnerOnly = 2,
    COND_SkipOwner = 3,
    COND_SimulatedOnly = 4,
    COND_AutonomousOnly = 5,
    COND_SimulatedOrPhysics = 6,
    COND_InitialOrOwner = 7,
    COND_Custom = 8,
    COND_ReplayOrOwner = 9,
    COND_ReplayOnly = 10,
    COND_SimulatedOnlyNoReplay = 11,
    COND_SimulatedOrPhysicsNoReplay = 12,
    COND_SkipReplay = 13,
    COND_Dynamic = 14,
    COND_Never = 15,
    COND_NetGroup = 16,
    COND_Max = 17,
};

enum class ELocalizedTextSourceCategory {
    Game = 0,
    Engine = 1,
    Editor = 2,
    ELocalizedTextSourceCategory_MAX = 3,
};

namespace ELogTimes {
    enum Type {
        None = 0,
        UTC = 1,
        SinceGStartTime = 2,
        Local = 3,
        ELogTimes_MAX = 4,
    };
}

namespace EMouseCursor {
    enum Type {
        None = 0,
        Default = 1,
        TextEditBeam = 2,
        ResizeLeftRight = 3,
        ResizeUpDown = 4,
        ResizeSouthEast = 5,
        ResizeSouthWest = 6,
        CardinalCross = 7,
        Crosshairs = 8,
        Hand = 9,
        GrabHand = 10,
        GrabHandClosed = 11,
        SlashedCircle = 12,
        EyeDropper = 13,
        EMouseCursor_MAX = 14,
    };
}

enum class EOverriddenPropertyOperation {
    None = 0,
    Modified = 1,
    Replace = 2,
    Add = 3,
    Remove = 4,
    EOverriddenPropertyOperation_MAX = 5,
};

enum EPixelFormat {
    PF_Unknown = 0,
    PF_A32B32G32R32F = 1,
    PF_B8G8R8A8 = 2,
    PF_G8 = 3,
    PF_G16 = 4,
    PF_DXT1 = 5,
    PF_DXT3 = 6,
    PF_DXT5 = 7,
    PF_UYVY = 8,
    PF_FloatRGB = 9,
    PF_FloatRGBA = 10,
    PF_DepthStencil = 11,
    PF_ShadowDepth = 12,
    PF_R32_FLOAT = 13,
    PF_G16R16 = 14,
    PF_G16R16F = 15,
    PF_G16R16F_FILTER = 16,
    PF_G32R32F = 17,
    PF_A2B10G10R10 = 18,
    PF_A16B16G16R16 = 19,
    PF_D24 = 20,
    PF_R16F = 21,
    PF_R16F_FILTER = 22,
    PF_BC5 = 23,
    PF_V8U8 = 24,
    PF_A1 = 25,
    PF_FloatR11G11B10 = 26,
    PF_A8 = 27,
    PF_R32_UINT = 28,
    PF_R32_SINT = 29,
    PF_PVRTC2 = 30,
    PF_PVRTC4 = 31,
    PF_R16_UINT = 32,
    PF_R16_SINT = 33,
    PF_R16G16B16A16_UINT = 34,
    PF_R16G16B16A16_SINT = 35,
    PF_R5G6B5_UNORM = 36,
    PF_R8G8B8A8 = 37,
    PF_A8R8G8B8 = 38,
    PF_BC4 = 39,
    PF_R8G8 = 40,
    PF_ATC_RGB = 41,
    PF_ATC_RGBA_E = 42,
    PF_ATC_RGBA_I = 43,
    PF_X24_G8 = 44,
    PF_ETC1 = 45,
    PF_ETC2_RGB = 46,
    PF_ETC2_RGBA = 47,
    PF_R32G32B32A32_UINT = 48,
    PF_R16G16_UINT = 49,
    PF_ASTC_4x4 = 50,
    PF_ASTC_6x6 = 51,
    PF_ASTC_8x8 = 52,
    PF_ASTC_10x10 = 53,
    PF_ASTC_12x12 = 54,
    PF_BC6H = 55,
    PF_BC7 = 56,
    PF_R8_UINT = 57,
    PF_L8 = 58,
    PF_XGXR8 = 59,
    PF_R8G8B8A8_UINT = 60,
    PF_R8G8B8A8_SNORM = 61,
    PF_R16G16B16A16_UNORM = 62,
    PF_R16G16B16A16_SNORM = 63,
    PF_PLATFORM_HDR_0 = 64,
    PF_PLATFORM_HDR_1 = 65,
    PF_PLATFORM_HDR_2 = 66,
    PF_NV12 = 67,
    PF_R32G32_UINT = 68,
    PF_ETC2_R11_EAC = 69,
    PF_ETC2_RG11_EAC = 70,
    PF_R8 = 71,
    PF_B5G5R5A1_UNORM = 72,
    PF_ASTC_4x4_HDR = 73,
    PF_ASTC_6x6_HDR = 74,
    PF_ASTC_8x8_HDR = 75,
    PF_ASTC_10x10_HDR = 76,
    PF_ASTC_12x12_HDR = 77,
    PF_G16R16_SNORM = 78,
    PF_R8G8_UINT = 79,
    PF_R32G32B32_UINT = 80,
    PF_R32G32B32_SINT = 81,
    PF_R32G32B32F = 82,
    PF_R8_SINT = 83,
    PF_R64_UINT = 84,
    PF_R9G9B9EXP5 = 85,
    PF_P010 = 86,
    PF_ASTC_4x4_NORM_RG = 87,
    PF_ASTC_6x6_NORM_RG = 88,
    PF_ASTC_8x8_NORM_RG = 89,
    PF_ASTC_10x10_NORM_RG = 90,
    PF_ASTC_12x12_NORM_RG = 91,
    PF_MAX = 92,
};

enum class EPropertyAccessChangeNotifyMode {
    Default = 0,
    Never = 1,
    Always = 2,
    EPropertyAccessChangeNotifyMode_MAX = 3,
};

namespace ERangeBoundTypes {
    enum Type {
        Exclusive = 0,
        Inclusive = 1,
        Open = 2,
        ERangeBoundTypes_MAX = 3,
    };
}

namespace ESearchCase {
    enum Type {
        CaseSensitive = 0,
        IgnoreCase = 1,
        ESearchCase_MAX = 2,
    };
}

namespace ESearchDir {
    enum Type {
        FromStart = 0,
        FromEnd = 1,
        ESearchDir_MAX = 2,
    };
}

enum class EUnit {
    Micrometers = 0,
    Millimeters = 1,
    Centimeters = 2,
    Meters = 3,
    Kilometers = 4,
    Inches = 5,
    Feet = 6,
    Yards = 7,
    Miles = 8,
    Lightyears = 9,
    Degrees = 10,
    Radians = 11,
    CentimetersPerSecond = 12,
    MetersPerSecond = 13,
    KilometersPerHour = 14,
    MilesPerHour = 15,
    DegreesPerSecond = 16,
    RadiansPerSecond = 17,
    CentimetersPerSecondSquared = 18,
    MetersPerSecondSquared = 19,
    Celsius = 20,
    Farenheit = 21,
    Kelvin = 22,
    Micrograms = 23,
    Milligrams = 24,
    Grams = 25,
    Kilograms = 26,
    MetricTons = 27,
    Ounces = 28,
    Pounds = 29,
    Stones = 30,
    GramsPerCubicCentimeter = 31,
    GramsPerCubicMeter = 32,
    KilogramsPerCubicCentimeter = 33,
    KilogramsPerCubicMeter = 34,
    Newtons = 35,
    PoundsForce = 36,
    KilogramsForce = 37,
    KilogramCentimetersPerSecondSquared = 38,
    NewtonMeters = 39,
    KilogramCentimetersSquaredPerSecondSquared = 40,
    NewtonSeconds = 41,
    KilogramCentimeters = 42,
    KilogramMeters = 43,
    Hertz = 44,
    Kilohertz = 45,
    Megahertz = 46,
    Gigahertz = 47,
    RevolutionsPerMinute = 48,
    Bytes = 49,
    Kilobytes = 50,
    Megabytes = 51,
    Gigabytes = 52,
    Terabytes = 53,
    Lumens = 54,
    Candela = 55,
    Lux = 56,
    CandelaPerMeter2 = 57,
    ExposureValue = 58,
    Nanoseconds = 59,
    Microseconds = 60,
    Milliseconds = 61,
    Seconds = 62,
    Minutes = 63,
    Hours = 64,
    Days = 65,
    Months = 66,
    Years = 67,
    PixelsPerInch = 68,
    Percentage = 69,
    Multiplier = 70,
    Pascals = 71,
    KiloPascals = 72,
    MegaPascals = 73,
    GigaPascals = 74,
    Unspecified = 75,
    EUnit_MAX = 76,
};

