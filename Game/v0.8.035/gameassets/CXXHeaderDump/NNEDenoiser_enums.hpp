enum EDenoiserRuntimeType {
    CPU = 0,
    GPU = 1,
    RDG = 2,
    EDenoiserRuntimeType_MAX = 3,
};

enum class EInputResourceName {
    Color = 0,
    Albedo = 1,
    Normal = 2,
    Output = 3,
    EInputResourceName_MAX = 4,
};

enum class EOutputResourceName {
    Output = 0,
    EOutputResourceName_MAX = 1,
};

enum class EResourceName {
    Color = 0,
    Albedo = 1,
    Normal = 2,
    Flow = 3,
    Output = 4,
    EResourceName_MAX = 5,
};

enum class ETemporalInputResourceName {
    Color = 0,
    Albedo = 1,
    Normal = 2,
    Flow = 3,
    Output = 4,
    ETemporalInputResourceName_MAX = 5,
};

enum class ETemporalOutputResourceName {
    Output = 0,
    ETemporalOutputResourceName_MAX = 1,
};

