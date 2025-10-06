enum class ELandscapePatchPriorityInitialization {
    AcquireHighest = 0,
    KeepOriginal = 1,
    SmallIncrement = 2,
    ELandscapePatchPriorityInitialization_MAX = 3,
};

enum class ELandscapeTextureHeightPatchEncoding {
    ZeroToOne = 0,
    WorldUnits = 1,
    NativePackedHeight = 2,
    ELandscapeTextureHeightPatchEncoding_MAX = 3,
};

enum class ELandscapeTextureHeightPatchZeroHeightMeaning {
    PatchZ = 0,
    LandscapeZ = 1,
    WorldZero = 2,
    ELandscapeTextureHeightPatchZeroHeightMeaning_MAX = 3,
};

enum class ELandscapeTexturePatchBlendMode {
    AlphaBlend = 0,
    Additive = 1,
    Min = 2,
    Max = 3,
};

enum class ELandscapeTexturePatchFalloffMode {
    Circle = 0,
    RoundedRectangle = 1,
    ELandscapeTexturePatchFalloffMode_MAX = 2,
};

enum class ELandscapeTexturePatchSourceMode {
    None = 0,
    InternalTexture = 1,
    TextureBackedRenderTarget = 2,
    TextureAsset = 3,
    ELandscapeTexturePatchSourceMode_MAX = 4,
};

