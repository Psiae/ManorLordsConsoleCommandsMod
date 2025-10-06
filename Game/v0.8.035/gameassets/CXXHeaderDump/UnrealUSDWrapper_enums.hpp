enum class EGeometryCacheImport {
    Never = 0,
    OnLoad = 1,
    OnSave = 2,
    EGeometryCacheImport_MAX = 3,
};

enum class EUsdDefaultKind {
    None = 0,
    Model = 1,
    Component = 2,
    Group = 4,
    Assembly = 8,
    Subcomponent = 16,
    EUsdDefaultKind_MAX = 17,
};

enum class EUsdInitialLoadSet {
    LoadAll = 0,
    LoadNone = 1,
    EUsdInitialLoadSet_MAX = 2,
};

enum class EUsdInterpolationType {
    Held = 0,
    Linear = 1,
    EUsdInterpolationType_MAX = 2,
};

enum class EUsdListPosition {
    FrontOfPrependList = 0,
    BackOfPrependList = 1,
    FrontOfAppendList = 2,
    BackOfAppendList = 3,
    EUsdListPosition_MAX = 4,
};

enum class EUsdLoadPolicy {
    UsdLoadWithDescendants = 0,
    UsdLoadWithoutDescendants = 1,
    EUsdLoadPolicy_MAX = 2,
};

enum class EUsdPurpose {
    Default = 0,
    Proxy = 1,
    Render = 2,
    Guide = 4,
    EUsdPurpose_MAX = 5,
};

enum class EUsdRootMotionHandling {
    NoAdditionalRootMotion = 0,
    UseMotionFromSkelRoot = 1,
    UseMotionFromSkeleton = 2,
    EUsdRootMotionHandling_MAX = 3,
};

