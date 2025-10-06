enum class EText3DBevelType {
    Linear = 0,
    HalfCircle = 1,
    Convex = 2,
    Concave = 3,
    OneStep = 4,
    TwoSteps = 5,
    Engraved = 6,
    EText3DBevelType_MAX = 7,
};

enum class EText3DCharacterEffectOrder {
    Normal = 0,
    FromCenter = 1,
    ToCenter = 2,
    Opposite = 3,
    EText3DCharacterEffectOrder_MAX = 4,
};

enum class EText3DHorizontalTextAlignment {
    Left = 0,
    Center = 1,
    Right = 2,
    EText3DHorizontalTextAlignment_MAX = 3,
};

enum class EText3DMaxWidthHandling {
    Scale = 0,
    WrapAndScale = 1,
    EText3DMaxWidthHandling_MAX = 2,
};

enum class EText3DModifyFlags {
    None = 0,
    Layout = 1,
    Geometry = 2,
    Unfreeze = 4,
    All = 7,
    EText3DModifyFlags_MAX = 8,
};

enum class EText3DVerticalTextAlignment {
    FirstLine = 0,
    Top = 1,
    Center = 2,
    Bottom = 3,
    EText3DVerticalTextAlignment_MAX = 4,
};

