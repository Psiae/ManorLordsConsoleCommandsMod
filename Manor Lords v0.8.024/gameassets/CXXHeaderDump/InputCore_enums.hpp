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
    Chest = 7,
    LeftShoulder = 8,
    RightShoulder = 9,
    LeftElbow = 10,
    RightElbow = 11,
    Waist = 12,
    LeftKnee = 13,
    RightKnee = 14,
    LeftFoot = 15,
    RightFoot = 16,
    Special = 17,
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

