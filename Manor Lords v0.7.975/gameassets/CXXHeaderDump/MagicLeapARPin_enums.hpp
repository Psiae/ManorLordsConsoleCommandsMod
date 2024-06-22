enum class EMagicLeapARPinType {
    SingleUserSingleSession = 0,
    SingleUserMultiSession = 1,
    MultiUserMultiSession = 2,
    EMagicLeapARPinType_MAX = 3,
};

enum class EMagicLeapAutoPinType {
    OnlyOnDataRestoration = 0,
    Always = 1,
    Never = 2,
    EMagicLeapAutoPinType_MAX = 3,
};

enum class EMagicLeapPassableWorldError {
    None = 0,
    LowMapQuality = 1,
    UnableToLocalize = 2,
    Unavailable = 3,
    PrivilegeDenied = 4,
    InvalidParam = 5,
    UnspecifiedFailure = 6,
    PrivilegeRequestPending = 7,
    StartupPending = 8,
    SharedWorldNotEnabled = 9,
    NotImplemented = 10,
    PinNotFound = 11,
    EMagicLeapPassableWorldError_MAX = 12,
};

