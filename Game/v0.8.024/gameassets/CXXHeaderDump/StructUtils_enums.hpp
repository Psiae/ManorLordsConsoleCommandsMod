enum class EPropertyBagContainerType {
    None = 0,
    Array = 1,
    Count = 2,
    EPropertyBagContainerType_MAX = 3,
};

enum class EPropertyBagMissingEnum {
    Missing = 0,
    EPropertyBagMissingEnum_MAX = 1,
};

enum class EPropertyBagPropertyType {
    None = 0,
    Bool = 1,
    Byte = 2,
    Int32 = 3,
    Int64 = 4,
    Float = 5,
    Double = 6,
    Name = 7,
    String = 8,
    Text = 9,
    Enum = 10,
    Struct = 11,
    Object = 12,
    SoftObject = 13,
    Class = 14,
    SoftClass = 15,
    UInt32 = 16,
    UInt64 = 17,
    Count = 18,
    EPropertyBagPropertyType_MAX = 19,
};

enum class EPropertyBagResult {
    Success = 0,
    TypeMismatch = 1,
    OutOfBounds = 2,
    PropertyNotFound = 3,
    EPropertyBagResult_MAX = 4,
};

