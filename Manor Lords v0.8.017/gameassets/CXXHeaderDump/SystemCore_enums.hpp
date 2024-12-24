enum class EInputIconButton {
    None = 0,
    Start = 1,
    Select = 2,
    Face_Up = 3,
    Face_Right = 4,
    Face_Down = 5,
    Face_Left = 6,
    DPad = 7,
    DPad_Up = 8,
    DPad_Right = 9,
    DPad_Down = 10,
    DPad_Left = 11,
    Trigger_Right = 12,
    Trigger_Left = 13,
    Shoulder_Right = 14,
    Shoulder_Left = 15,
    Analog_Right = 16,
    Analog_Left = 17,
    AnalogPress_Right = 18,
    AnalogPress_Left = 19,
    EInputIconButton_MAX = 20,
};

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

enum class ENaviGridAttribute {
    None = 0,
    StealFocus = 1,
    ENaviGridAttribute_MAX = 2,
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

enum class ENaviUiHighlightStyle {
    Square = 0,
    Circle = 1,
    Diamond = 2,
    ENaviUiHighlightStyle_MAX = 3,
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
    FaceLeft = 9,
    FaceTop = 10,
    ENaviUiIntent_MAX = 11,
};

enum class EPlatformCategory {
    Pc = 0,
    XBO = 1,
    XSX = 2,
    Ps4 = 3,
    Ps5 = 4,
    Switch = 5,
    Stadia = 6,
    Steamdeck = 7,
    EPlatformCategory_MAX = 8,
};

