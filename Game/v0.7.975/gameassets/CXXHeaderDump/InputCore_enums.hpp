namespace EConsoleForGamepadLabels {
    enum Type {
        None = 0,
        XBoxOne = 1,
        PS4 = 2,
        EConsoleForGamepadLabels_MAX = 3,
    };
}

enum class EControllerHand {
    Left = 0,
    Right = 1,
    AnyHand = 2,
    Pad = 3,
    ExternalCamera = 4,
    Gun = 5,
    HMD = 6,
    Special_1 = 7,
    Special_2 = 8,
    Special_3 = 9,
    Special_4 = 10,
    Special_5 = 11,
    Special_6 = 12,
    Special_7 = 13,
    Special_8 = 14,
    Special_9 = 15,
    Special_10 = 16,
    Special_11 = 17,
    ControllerHand_Count = 18,
    EControllerHand_MAX = 19,
};

namespace ETouchIndex {
    enum Type {
        Touch1 = 0,
        Touch2 = 1,
        Touch3 = 2,
        Touch4 = 3,
        Touch5 = 4,
        Touch6 = 5,
        Touch7 = 6,
        Touch8 = 7,
        Touch9 = 8,
        Touch10 = 9,
        CursorPointerIndex = 10,
        MAX_TOUCHES = 11,
        ETouchIndex_MAX = 12,
    };
}

namespace ETouchType {
    enum Type {
        Began = 0,
        Moved = 1,
        Stationary = 2,
        ForceChanged = 3,
        FirstMove = 4,
        Ended = 5,
        NumTypes = 6,
        ETouchType_MAX = 7,
    };
}

