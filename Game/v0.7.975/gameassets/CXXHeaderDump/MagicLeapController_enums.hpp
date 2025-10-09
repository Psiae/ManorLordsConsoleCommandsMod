enum class EMagicLeapControllerHapticIntensity {
    Low = 0,
    Medium = 1,
    High = 2,
    EMagicLeapControllerHapticIntensity_MAX = 3,
};

enum class EMagicLeapControllerHapticPattern {
    None = 0,
    Click = 1,
    Bump = 2,
    DoubleClick = 3,
    Buzz = 4,
    Tick = 5,
    ForceDown = 6,
    ForceUp = 7,
    ForceDwell = 8,
    SecondForceDown = 9,
    EMagicLeapControllerHapticPattern_MAX = 10,
};

enum class EMagicLeapControllerLEDColor {
    BrightMissionRed = 0,
    PastelMissionRed = 1,
    BrightFloridaOrange = 2,
    PastelFloridaOrange = 3,
    BrightLunaYellow = 4,
    PastelLunaYellow = 5,
    BrightNebulaPink = 6,
    PastelNebulaPink = 7,
    BrightCosmicPurple = 8,
    PastelCosmicPurple = 9,
    BrightMysticBlue = 10,
    PastelMysticBlue = 11,
    BrightCelestialBlue = 12,
    PastelCelestialBlue = 13,
    BrightShaggleGreen = 14,
    PastelShaggleGreen = 15,
    EMagicLeapControllerLEDColor_MAX = 16,
};

enum class EMagicLeapControllerLEDEffect {
    RotateCW = 0,
    RotateCCW = 1,
    Pulse = 2,
    PaintCW = 3,
    PaintCCW = 4,
    Blink = 5,
    EMagicLeapControllerLEDEffect_MAX = 6,
};

enum class EMagicLeapControllerLEDPattern {
    None = 0,
    Clock01 = 1,
    Clock02 = 2,
    Clock03 = 3,
    Clock04 = 4,
    Clock05 = 5,
    Clock06 = 6,
    Clock07 = 7,
    Clock08 = 8,
    Clock09 = 9,
    Clock10 = 10,
    Clock11 = 11,
    Clock12 = 12,
    Clock01_07 = 13,
    Clock02_08 = 14,
    Clock03_09 = 15,
    Clock04_10 = 16,
    Clock05_11 = 17,
    Clock06_12 = 18,
    EMagicLeapControllerLEDPattern_MAX = 19,
};

enum class EMagicLeapControllerLEDSpeed {
    Slow = 0,
    Medium = 1,
    Fast = 2,
    EMagicLeapControllerLEDSpeed_MAX = 3,
};

enum class EMagicLeapControllerTrackingMode {
    InputService = 0,
    CoordinateFrameUID = 1,
    EMagicLeapControllerTrackingMode_MAX = 2,
};

enum class EMagicLeapControllerType {
    None = 0,
    Device = 1,
    MobileApp = 2,
    EMagicLeapControllerType_MAX = 3,
};

enum class EMagicLeapTouchpadGestureDirection {
    None = 0,
    Up = 1,
    Down = 2,
    Left = 3,
    Right = 4,
    In = 5,
    Out = 6,
    Clockwise = 7,
    CounterClockwise = 8,
    EMagicLeapTouchpadGestureDirection_MAX = 9,
};

enum class EMagicLeapTouchpadGestureType {
    None = 0,
    Tap = 1,
    ForceTapDown = 2,
    ForceTapUp = 3,
    ForceDwell = 4,
    SecondForceDown = 5,
    LongHold = 6,
    RadialScroll = 7,
    Swipe = 8,
    Scroll = 9,
    Pinch = 10,
    EMagicLeapTouchpadGestureType_MAX = 11,
};

