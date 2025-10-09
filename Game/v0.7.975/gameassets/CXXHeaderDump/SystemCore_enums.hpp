enum class ENaviFormType {
    None = 0,
    Header = 1,
    SubHeader = 2,
    Text = 3,
    Selector = 4,
    InputOneLine = 5,
    InputNumerical = 6,
    Save = 7,
    Cancel = 8,
    EnumSelector = 9,
    ENaviFormType_MAX = 10,
};

enum class ENaviHandleMethod {
    PassToChild = 0,
    StopNow = 1,
    ENaviHandleMethod_MAX = 2,
};

enum class ENaviResultHandleMethod {
    PassToParent = 0,
    StopNow = 1,
    ENaviResultHandleMethod_MAX = 2,
};

enum class ENaviUiIntent {
    None = 0,
    Accept = 1,
    Back = 2,
    Up = 3,
    Right = 4,
    Down = 5,
    Left = 6,
    SpecialUp = 7,
    SpecialDown = 8,
    ENaviUiIntent_MAX = 9,
};

enum class EPlatformCategory {
    Pc = 0,
    XBO = 1,
    XSX = 2,
    Ps4 = 3,
    Ps5 = 4,
    Switch = 5,
    Stadia = 6,
    EPlatformCategory_MAX = 7,
};

