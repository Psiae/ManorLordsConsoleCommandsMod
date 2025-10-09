enum class ERaDistanceRolloffModel {
    LOGARITHMIC = 0,
    LINEAR = 1,
    NONE = 2,
    ERaDistanceRolloffModel_MAX = 3,
};

enum class ERaMaterialName {
    TRANSPARENT = 0,
    ACOUSTIC_CEILING_TILES = 1,
    BRICK_BARE = 2,
    BRICK_PAINTED = 3,
    CONCRETE_BLOCK_COARSE = 4,
    CONCRETE_BLOCK_PAINTED = 5,
    CURTAIN_HEAVY = 6,
    FIBER_GLASS_INSULATION = 7,
    GLASS_THIN = 8,
    GLASS_THICK = 9,
    GRASS = 10,
    LINOLEUM_ON_CONCRETE = 11,
    MARBLE = 12,
    METAL = 13,
    PARQUET_ONCONCRETE = 14,
    PLASTER_ROUGH = 15,
    PLASTER_SMOOTH = 16,
    PLYWOOD_PANEL = 17,
    POLISHED_CONCRETE_OR_TILE = 18,
    SHEETROCK = 19,
    WATER_OR_ICE_SURFACE = 20,
    WOOD_CEILING = 21,
    WOOD_PANEL = 22,
    UNIFORM = 23,
    ERaMaterialName_MAX = 24,
};

enum class ERaQualityMode {
    STEREO_PANNING = 0,
    BINAURAL_LOW = 1,
    BINAURAL_MEDIUM = 2,
    BINAURAL_HIGH = 3,
    ERaQualityMode_MAX = 4,
};

enum class ERaSpatializationMethod {
    STEREO_PANNING = 0,
    HRTF = 1,
    ERaSpatializationMethod_MAX = 2,
};

enum class EResonanceRenderMode {
    StereoPanning = 0,
    BinauralLowQuality = 1,
    BinauralMediumQuality = 2,
    BinauralHighQuality = 3,
    RoomEffectsOnly = 4,
    EResonanceRenderMode_MAX = 5,
};

