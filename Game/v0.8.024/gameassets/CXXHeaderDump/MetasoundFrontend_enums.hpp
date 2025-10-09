enum class EMetasoundFrontendClassType {
    External = 0,
    Graph = 1,
    Input = 2,
    Output = 3,
    Literal = 4,
    Variable = 5,
    VariableDeferredAccessor = 6,
    VariableAccessor = 7,
    VariableMutator = 8,
    Template = 9,
    Invalid = 10,
    EMetasoundFrontendClassType_MAX = 11,
};

enum class EMetasoundFrontendLiteralType {
    None = 0,
    Boolean = 1,
    Integer = 2,
    Float = 3,
    String = 4,
    UObject = 5,
    NoneArray = 6,
    BooleanArray = 7,
    IntegerArray = 8,
    FloatArray = 9,
    StringArray = 10,
    UObjectArray = 11,
    Invalid = 12,
    EMetasoundFrontendLiteralType_MAX = 13,
};

enum class EMetasoundFrontendNodeStyleDisplayVisibility {
    Visible = 0,
    Hidden = 1,
    EMetasoundFrontendNodeStyleDisplayVisibility_MAX = 2,
};

enum class EMetasoundFrontendVertexAccessType {
    Reference = 0,
    Value = 1,
    Unset = 2,
    EMetasoundFrontendVertexAccessType_MAX = 3,
};

enum class ESetParamResult {
    Succeeded = 0,
    Failed = 1,
    ESetParamResult_MAX = 2,
};

