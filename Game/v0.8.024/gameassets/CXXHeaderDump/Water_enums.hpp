enum class EBuoyancyEvent {
    EnteredWaterBody = 0,
    ExitedWaterBody = 1,
    EBuoyancyEvent_MAX = 2,
};

enum class EWaterBodyType {
    River = 0,
    Lake = 1,
    Ocean = 2,
    Transition = 3,
    Num = 4,
    EWaterBodyType_MAX = 5,
};

enum class EWaterBrushBlendType {
    AlphaBlend = 0,
    Min = 1,
    Max = 2,
    Additive = 3,
};

enum class EWaterBrushFalloffMode {
    Angle = 0,
    Width = 1,
    EWaterBrushFalloffMode_MAX = 2,
};

enum class EWaterExclusionMode {
    AddWaterBodiesListToExclusion = 0,
    RemoveWaterBodiesListFromExclusion = 1,
    EWaterExclusionMode_MAX = 2,
};

enum class EWaveSpectrumType {
    Phillips = 0,
    PiersonMoskowitz = 1,
    JONSWAP = 2,
    EWaveSpectrumType_MAX = 3,
};

