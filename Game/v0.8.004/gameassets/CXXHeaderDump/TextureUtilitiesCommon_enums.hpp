enum class ETextureImportFloatingPointFormat {
    HDR_F16 = 0,
    HDRCompressed_BC6 = 1,
    HDR_F32_or_F16 = 2,
    PreviousDefault = 0,
    ETextureImportFloatingPointFormat_MAX = 3,
};

enum class ETextureImportPNGInfill {
    Default = 0,
    Never = 1,
    OnlyOnBinaryTransparency = 2,
    Always = 3,
    ETextureImportPNGInfill_MAX = 4,
};

