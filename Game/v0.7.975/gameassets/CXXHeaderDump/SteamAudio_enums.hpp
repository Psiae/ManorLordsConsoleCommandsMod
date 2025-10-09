enum class EIplAudioEngine {
    UNREAL = 0,
    EIplAudioEngine_MAX = 1,
};

enum class EIplConvolutionType {
    PHONON = 0,
    TRUEAUDIONEXT = 1,
    EIplConvolutionType_MAX = 2,
};

enum class EIplDirectOcclusionMethod {
    RAYCAST = 0,
    VOLUMETRIC = 1,
    EIplDirectOcclusionMethod_MAX = 2,
};

enum class EIplDirectOcclusionMode {
    NONE = 0,
    DIRECTOCCLUSION_NOTRANSMISSION = 1,
    DIRECTOCCLUSION_TRANSMISSIONBYVOLUME = 2,
    DIRECTOCCLUSION_TRANSMISSIONBYFREQUENCY = 3,
    EIplDirectOcclusionMode_MAX = 4,
};

enum class EIplHrtfInterpolationMethod {
    NEAREST = 0,
    BILINEAR = 1,
    EIplHrtfInterpolationMethod_MAX = 2,
};

enum class EIplRayTracerType {
    PHONON = 0,
    EMBREE = 1,
    RADEONRAYS = 2,
    EIplRayTracerType_MAX = 3,
};

enum class EIplSimulationType {
    REALTIME = 0,
    BAKED = 1,
    DISABLED = 2,
    EIplSimulationType_MAX = 3,
};

enum class EIplSpatializationMethod {
    PANNING = 0,
    HRTF = 1,
    EIplSpatializationMethod_MAX = 2,
};

enum class EPhononMaterial {
    GENERIC = 0,
    BRICK = 1,
    CONCRETE = 2,
    CERAMIC = 3,
    GRAVEL = 4,
    CARPET = 5,
    GLASS = 6,
    PLASTER = 7,
    WOOD = 8,
    METAL = 9,
    ROCK = 10,
    CUSTOM = 11,
    EPhononMaterial_MAX = 12,
};

enum class EPhononProbeMobility {
    STATIC = 0,
    DYNAMIC = 1,
    EPhononProbeMobility_MAX = 2,
};

enum class EPhononProbePlacementStrategy {
    CENTROID = 0,
    UNIFORM_FLOOR = 1,
    EPhononProbePlacementStrategy_MAX = 2,
};

enum class EQualitySettings {
    LOW = 0,
    MEDIUM = 1,
    HIGH = 2,
    CUSTOM = 3,
    EQualitySettings_MAX = 4,
};

