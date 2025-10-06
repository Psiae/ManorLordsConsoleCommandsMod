enum class ENNEAttributeDataType {
    None = 0,
    Float = 1,
    FloatArray = 2,
    Int32 = 3,
    Int32Array = 4,
    String = 5,
    StringArray = 6,
    Tensor = 7,
    TensorArray = 8,
    ENNEAttributeDataType_MAX = 9,
};

enum class ENNEFormatTensorType {
    None = 0,
    Input = 1,
    Output = 2,
    Intermediate = 3,
    Initializer = 4,
    Empty = 5,
    NUM = 6,
    ENNEFormatTensorType_MAX = 7,
};

enum class ENNEInferenceFormat {
    Invalid = 0,
    ONNX = 1,
    ORT = 2,
    NNERT = 3,
    ENNEInferenceFormat_MAX = 4,
};

enum class ENNETensorDataType {
    None = 0,
    Char = 1,
    Boolean = 2,
    Half = 3,
    Float = 4,
    Double = 5,
    Int8 = 6,
    Int16 = 7,
    Int32 = 8,
    Int64 = 9,
    UInt8 = 10,
    UInt16 = 11,
    UInt32 = 12,
    UInt64 = 13,
    Complex64 = 14,
    Complex128 = 15,
    BFloat16 = 16,
    ENNETensorDataType_MAX = 17,
};

