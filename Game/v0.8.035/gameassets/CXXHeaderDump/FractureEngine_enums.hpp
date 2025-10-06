enum class EConvexHullSimplifyMethod {
    MeshQSlim = 0,
    AngleTolerance = 1,
    EConvexHullSimplifyMethod_MAX = 2,
};

enum class EFixTinyGeoGeometrySelectionMethod {
    VolumeCubeRoot = 0,
    RelativeVolume = 1,
    EFixTinyGeoGeometrySelectionMethod_MAX = 2,
};

enum class EFixTinyGeoMergeType {
    MergeGeometry = 0,
    MergeClusters = 1,
    EFixTinyGeoMergeType_MAX = 2,
};

enum class EFixTinyGeoNeighborSelectionMethod {
    LargestNeighbor = 0,
    NearestCenter = 1,
    EFixTinyGeoNeighborSelectionMethod_MAX = 2,
};

enum class EFixTinyGeoUseBoneSelection {
    NoEffect = 0,
    AlsoMergeSelected = 1,
    OnlyMergeSelected = 2,
    EFixTinyGeoUseBoneSelection_MAX = 3,
};

enum class EFractureBrickBondEnum {
    Dataflow_FractureBrickBond_Stretcher = 0,
    Dataflow_FractureBrickBond_Stack = 1,
    Dataflow_FractureBrickBond_English = 2,
    Dataflow_FractureBrickBond_Header = 3,
    Dataflow_FractureBrickBond_Flemish = 4,
    Dataflow_FractureBrickBond_MAX = 5,
};

enum class EMeshCutterCutDistribution {
    SingleCut = 0,
    UniformRandom = 1,
    Grid = 2,
    EMeshCutterCutDistribution_MAX = 3,
};

enum class ENonUniformSamplingDistributionMode {
    ENonUniformSamplingDistributionMode_Uniform = 0,
    ENonUniformSamplingDistributionMode_Smaller = 1,
    ENonUniformSamplingDistributionMode_Larger = 2,
    ENonUniformSamplingDistributionMode_MAX = 3,
};

enum class ENonUniformSamplingWeightMode {
    ENonUniformSamplingWeightMode_WeightToRadius = 0,
    ENonUniformSamplingWeightMode_FilledWeightToRadius = 1,
    ENonUniformSamplingWeightMode_WeightedRandom = 2,
    ENonUniformSamplingWeightMode_MAX = 3,
};

