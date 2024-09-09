enum class ECameraAnimationEasingType {
    Linear = 0,
    Sinusoidal = 1,
    Quadratic = 2,
    Cubic = 3,
    Quartic = 4,
    Quintic = 5,
    Exponential = 6,
    Circular = 7,
    ECameraAnimationEasingType_MAX = 8,
};

enum class ECameraAnimationPlaySpace {
    CameraLocal = 0,
    World = 1,
    UserDefined = 2,
    ECameraAnimationPlaySpace_MAX = 3,
};

enum class ECameraModeLayer {
    Base = 0,
    Main = 1,
    Global = 2,
    Visual = 3,
    User0 = 4,
    User1 = 5,
    User2 = 6,
    ECameraModeLayer_MAX = 7,
};

enum class ECameraNodeFlags {
    None = 0,
    RequiresReset = 1,
    ECameraNodeFlags_MAX = 2,
};

enum class ECameraNodeInstantiationState {
    None = 0,
    HasInstantiations = 1,
    IsInstantiated = 2,
    ECameraNodeInstantiationState_MAX = 3,
};

enum EInitialOscillatorOffset {
    EOO_OffsetRandom = 0,
    EOO_OffsetZero = 1,
    EOO_MAX = 2,
};

enum class EInitialWaveOscillatorOffsetType {
    Random = 0,
    Zero = 1,
    EInitialWaveOscillatorOffsetType_MAX = 2,
};

enum class EOscillatorWaveform {
    SineWave = 0,
    PerlinNoise = 1,
    EOscillatorWaveform_MAX = 2,
};

enum class ESmoothCameraBlendType {
    SmoothStep = 0,
    SmootherStep = 1,
    ESmoothCameraBlendType_MAX = 2,
};

