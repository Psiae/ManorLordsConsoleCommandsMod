enum class EWaveTableBitDepth {
    PCM_16 = 0,
    IEEE_Float = 1,
    COUNT = 2,
    EWaveTableBitDepth_MAX = 3,
};

enum class EWaveTableCurve {
    Linear = 0,
    Linear_Inv = 1,
    Exp = 2,
    Exp_Inverse = 3,
    Log = 4,
    Sin = 5,
    Sin_Full = 6,
    SCurve = 7,
    Shared = 8,
    Custom = 9,
    File = 10,
    Count = 11,
    EWaveTableCurve_MAX = 12,
};

enum class EWaveTableResolution {
    None = 0,
    Res_8 = 3,
    Res_16 = 4,
    Res_32 = 5,
    Res_64 = 6,
    Res_128 = 7,
    Res_256 = 8,
    Res_512 = 9,
    Res_1024 = 10,
    Res_2048 = 11,
    Res_4096 = 12,
    Res_Max = 12,
    Maximum = 13,
    EWaveTableResolution_MAX = 14,
};

enum class EWaveTableSamplingMode {
    FixedSampleRate = 0,
    FixedResolution = 1,
    COUNT = 2,
    EWaveTableSamplingMode_MAX = 3,
};

