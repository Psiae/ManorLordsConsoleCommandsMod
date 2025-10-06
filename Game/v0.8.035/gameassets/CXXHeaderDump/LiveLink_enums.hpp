enum class EBoneTransformResolution {
    KeepParent = 0,
    KeepChild = 1,
    Combine = 2,
    EBoneTransformResolution_MAX = 3,
};

enum class ELiveLinkAxis {
    X = 0,
    Y = 1,
    Z = 2,
    XNeg = 3,
    YNeg = 4,
    ZNeg = 5,
    ELiveLinkAxis_MAX = 6,
};

enum class ELiveLinkTimecodeProviderEvaluationType {
    Lerp = 0,
    Nearest = 1,
    Latest = 2,
    ELiveLinkTimecodeProviderEvaluationType_MAX = 3,
};

