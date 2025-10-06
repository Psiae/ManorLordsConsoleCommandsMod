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

