enum class EFollicleMaskChannel {
    R = 0,
    G = 1,
    B = 2,
    A = 3,
    EFollicleMaskChannel_MAX = 4,
};

enum class EGroomBasisType {
    NoBasis = 0,
    BezierBasis = 1,
    BsplineBasis = 2,
    CatmullromBasis = 3,
    HermiteBasis = 4,
    PowerBasis = 5,
    EGroomBasisType_MAX = 6,
};

enum class EGroomBindingAsyncProperties {
    None = 0,
    GroomBindingType = 1,
    Groom = 2,
    SourceSkeletalMesh = 4,
    TargetSkeletalMesh = 8,
    SourceGeometryCache = 16,
    TargetGeometryCache = 32,
    NumInterpolationPoints = 64,
    MatchingSection = 128,
    GroupInfos = 256,
    HairGroupResources = 512,
    HairGroupPlatformData = 1024,
    All = -1,
    EGroomBindingAsyncProperties_MAX = 1025,
};

enum class EGroomBindingMeshType {
    SkeletalMesh = 0,
    GeometryCache = 1,
    EGroomBindingMeshType_MAX = 2,
};

enum class EGroomBindingType {
    NoneBinding = 0,
    Rigid = 1,
    Skinning = 2,
    EGroomBindingType_MAX = 3,
};

enum class EGroomCacheAttributes {
    None = 0,
    Position = 1,
    Width = 2,
    Color = 4,
    PositionWidth = 3,
    PositionColor = 5,
    WidthColor = 5,
    PositionWidthColor = 7,
    EGroomCacheAttributes_MAX = 8,
};

enum class EGroomCacheImportType {
    None = 0,
    Strands = 1,
    Guides = 2,
    All = 3,
    EGroomCacheImportType_MAX = 4,
};

enum class EGroomCacheType {
    None = 0,
    Strands = 1,
    Guides = 2,
    EGroomCacheType_MAX = 3,
};

enum class EGroomCurveType {
    Cubic = 0,
    Linear = 1,
    VariableOrder = 2,
    EGroomCurveType_MAX = 3,
};

enum class EGroomGeometryType {
    Strands = 0,
    Cards = 1,
    Meshes = 2,
    EGroomGeometryType_MAX = 3,
};

enum class EGroomGuideType {
    Imported = 0,
    Generated = 1,
    Rigged = 2,
    EGroomGuideType_MAX = 3,
};

enum class EGroomInterpolationQuality {
    Low = 0,
    Medium = 1,
    High = 2,
    Unknown = 3,
    EGroomInterpolationQuality_MAX = 4,
};

enum class EGroomInterpolationType {
    None = 0,
    RigidTransform = 2,
    OffsetTransform = 4,
    SmoothTransform = 8,
    EGroomInterpolationType_MAX = 9,
};

enum class EGroomInterpolationWeight {
    Parametric = 0,
    Root = 1,
    Index = 2,
    Unknown = 3,
    EGroomInterpolationWeight_MAX = 4,
};

enum class EGroomLODMode {
    Default = 0,
    Manual = 1,
    Auto = 2,
    EGroomLODMode_MAX = 3,
};

enum class EGroomNiagaraSolvers {
    None = 0,
    CosseratRods = 2,
    AngularSprings = 4,
    CustomSolver = 8,
    EGroomNiagaraSolvers_MAX = 9,
};

enum class EGroomOverrideType {
    Auto = 0,
    Enable = 1,
    Disable = 2,
    EGroomOverrideType_MAX = 3,
};

enum class EGroomStrandsSize {
    None = 0,
    Size2 = 2,
    Size4 = 4,
    Size8 = 8,
    Size16 = 16,
    Size32 = 32,
    EGroomStrandsSize_MAX = 33,
};

enum class EHairAtlasTextureType {
    Depth = 0,
    Tangent = 1,
    Attribute = 2,
    Coverage = 3,
    AuxilaryData = 4,
    Material = 5,
    EHairAtlasTextureType_MAX = 6,
};

enum class EHairCardsGuideType {
    Generated = 0,
    GuideBased = 1,
    EHairCardsGuideType_MAX = 2,
};

enum class EHairCardsSourceType {
    Procedural = 0,
    Imported = 1,
    EHairCardsSourceType_MAX = 2,
};

enum class EHairInterpolationQuality {
    Low = 0,
    Medium = 1,
    High = 2,
    Unknown = 3,
    EHairInterpolationQuality_MAX = 4,
};

enum class EHairInterpolationWeight {
    Parametric = 0,
    Root = 1,
    Index = 2,
    Distance = 3,
    Unknown = 4,
    EHairInterpolationWeight_MAX = 5,
};

enum class EHairTextureLayout {
    Layout0 = 0,
    Layout1 = 1,
    Layout2 = 2,
    Layout3 = 3,
    EHairTextureLayout_MAX = 4,
};

enum class EStrandsTexturesMeshType {
    Static = 0,
    Skeletal = 1,
    EStrandsTexturesMeshType_MAX = 2,
};

enum class EStrandsTexturesTraceType {
    TraceInside = 0,
    TraceOuside = 1,
    TraceBidirectional = 2,
    EStrandsTexturesTraceType_MAX = 3,
};

