#ifndef UE4SS_SDK_MetasoundFrontend_HPP
#define UE4SS_SDK_MetasoundFrontend_HPP

#include "MetasoundFrontend_enums.hpp"

struct FMetaSoundFrontendDocumentBuilder
{
    TScriptInterface<class IMetaSoundDocumentInterface> DocumentInterface;            // 0x0008 (size: 0x10)

}; // Size: 0x38

struct FMetasoundFrontendClass
{
    FGuid ID;                                                                         // 0x0008 (size: 0x10)
    FMetasoundFrontendClassMetadata MetaData;                                         // 0x0018 (size: 0x34)
    FMetasoundFrontendClassInterface Interface;                                       // 0x0050 (size: 0x40)

}; // Size: 0x90

struct FMetasoundFrontendClassEnvironmentVariable
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FName TypeName;                                                                   // 0x0008 (size: 0x8)
    bool bIsRequired;                                                                 // 0x0010 (size: 0x1)

}; // Size: 0x14

struct FMetasoundFrontendClassInput : public FMetasoundFrontendClassVertex
{
    FMetasoundFrontendLiteral DefaultLiteral;                                         // 0x0038 (size: 0x58)

}; // Size: 0x90

struct FMetasoundFrontendClassInterface
{
    TArray<FMetasoundFrontendClassInput> Inputs;                                      // 0x0000 (size: 0x10)
    TArray<FMetasoundFrontendClassOutput> Outputs;                                    // 0x0010 (size: 0x10)
    TArray<FMetasoundFrontendClassEnvironmentVariable> Environment;                   // 0x0020 (size: 0x10)
    FGuid ChangeID;                                                                   // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FMetasoundFrontendClassMetadata
{
    FMetasoundFrontendClassName ClassName;                                            // 0x0000 (size: 0x18)
    FMetasoundFrontendVersionNumber Version;                                          // 0x0018 (size: 0x8)
    EMetasoundFrontendClassType Type;                                                 // 0x0020 (size: 0x1)
    bool bIsDeprecated;                                                               // 0x0021 (size: 0x1)
    bool bAutoUpdateManagesInterface;                                                 // 0x0022 (size: 0x1)
    FGuid ChangeID;                                                                   // 0x0024 (size: 0x10)

}; // Size: 0x34

struct FMetasoundFrontendClassName
{
    FName NameSpace;                                                                  // 0x0000 (size: 0x8)
    FName Name;                                                                       // 0x0008 (size: 0x8)
    FName Variant;                                                                    // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FMetasoundFrontendClassOutput : public FMetasoundFrontendClassVertex
{
}; // Size: 0x34

struct FMetasoundFrontendClassStyle
{
}; // Size: 0x1

struct FMetasoundFrontendClassStyleDisplay
{
}; // Size: 0x1

struct FMetasoundFrontendClassVariable : public FMetasoundFrontendClassVertex
{
    FMetasoundFrontendLiteral DefaultLiteral;                                         // 0x0038 (size: 0x58)

}; // Size: 0x90

struct FMetasoundFrontendClassVertex : public FMetasoundFrontendVertex
{
    FGuid NodeID;                                                                     // 0x0020 (size: 0x10)
    EMetasoundFrontendVertexAccessType AccessType;                                    // 0x0030 (size: 0x4)

}; // Size: 0x34

struct FMetasoundFrontendDocument
{
    FMetasoundFrontendDocumentMetadata MetaData;                                      // 0x0010 (size: 0x10)
    TSet<FMetasoundFrontendVersion> Interfaces;                                       // 0x0020 (size: 0x50)
    FMetasoundFrontendGraphClass RootGraph;                                           // 0x0070 (size: 0x118)
    TArray<FMetasoundFrontendGraphClass> Subgraphs;                                   // 0x0188 (size: 0x10)
    TArray<FMetasoundFrontendClass> Dependencies;                                     // 0x0198 (size: 0x10)
    FMetasoundFrontendVersion ArchetypeVersion;                                       // 0x01A8 (size: 0x10)
    TArray<FMetasoundFrontendVersion> InterfaceVersions;                              // 0x01B8 (size: 0x10)

}; // Size: 0x1D0

struct FMetasoundFrontendDocumentMetadata
{
    FMetasoundFrontendVersion Version;                                                // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMetasoundFrontendEdge
{
    FGuid FromNodeID;                                                                 // 0x0000 (size: 0x10)
    FGuid FromVertexID;                                                               // 0x0010 (size: 0x10)
    FGuid ToNodeID;                                                                   // 0x0020 (size: 0x10)
    FGuid ToVertexID;                                                                 // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FMetasoundFrontendEdgeStyle
{
    FGuid NodeID;                                                                     // 0x0000 (size: 0x10)
    FName OutputName;                                                                 // 0x0010 (size: 0x8)
    TArray<FMetasoundFrontendEdgeStyleLiteralColorPair> LiteralColorPairs;            // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FMetasoundFrontendEdgeStyleLiteralColorPair
{
    FMetasoundFrontendLiteral Value;                                                  // 0x0000 (size: 0x58)
    FLinearColor Color;                                                               // 0x0058 (size: 0x10)

}; // Size: 0x68

struct FMetasoundFrontendGraph
{
    TArray<FMetasoundFrontendNode> Nodes;                                             // 0x0000 (size: 0x10)
    TArray<FMetasoundFrontendEdge> Edges;                                             // 0x0010 (size: 0x10)
    TArray<FMetasoundFrontendVariable> Variables;                                     // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FMetasoundFrontendGraphClass : public FMetasoundFrontendClass
{
    FMetasoundFrontendGraph Graph;                                                    // 0x0090 (size: 0x30)
    FMetasoundFrontendGraphClassPresetOptions PresetOptions;                          // 0x00C0 (size: 0x58)

}; // Size: 0x118

struct FMetasoundFrontendGraphClassPresetOptions
{
    bool bIsPreset;                                                                   // 0x0000 (size: 0x1)
    TSet<FName> InputsInheritingDefault;                                              // 0x0008 (size: 0x50)

}; // Size: 0x58

struct FMetasoundFrontendGraphStyle
{
    bool bIsGraphEditable;                                                            // 0x0000 (size: 0x1)
    TArray<FMetasoundFrontendEdgeStyle> EdgeStyles;                                   // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FMetasoundFrontendInterface : public FMetasoundFrontendClassInterface
{
    FMetasoundFrontendVersion Version;                                                // 0x0040 (size: 0x10)
    TArray<FMetasoundFrontendInterfaceUClassOptions> UClassOptions;                   // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FMetasoundFrontendInterfaceBinding
{
    FMetasoundFrontendVersion OutputInterfaceVersion;                                 // 0x0000 (size: 0x10)
    FMetasoundFrontendVersion InputInterfaceVersion;                                  // 0x0010 (size: 0x10)
    int32 BindingPriority;                                                            // 0x0020 (size: 0x4)
    TArray<FMetasoundFrontendInterfaceVertexBinding> VertexBindings;                  // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FMetasoundFrontendInterfaceStyle
{
}; // Size: 0x1

struct FMetasoundFrontendInterfaceUClassOptions
{
    FTopLevelAssetPath ClassPath;                                                     // 0x0000 (size: 0x10)
    bool bIsModifiable;                                                               // 0x0010 (size: 0x1)
    bool bIsDefault;                                                                  // 0x0011 (size: 0x1)

}; // Size: 0x14

struct FMetasoundFrontendInterfaceVertexBinding
{
    FName OutputName;                                                                 // 0x0000 (size: 0x8)
    FName InputName;                                                                  // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FMetasoundFrontendLiteral
{
    EMetasoundFrontendLiteralType Type;                                               // 0x0000 (size: 0x1)
    int32 AsNumDefault;                                                               // 0x0004 (size: 0x4)
    TArray<bool> AsBoolean;                                                           // 0x0008 (size: 0x10)
    TArray<int32> AsInteger;                                                          // 0x0018 (size: 0x10)
    TArray<float> AsFloat;                                                            // 0x0028 (size: 0x10)
    TArray<FString> AsString;                                                         // 0x0038 (size: 0x10)
    TArray<class UObject*> AsUObject;                                                 // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FMetasoundFrontendNode
{
    FGuid ID;                                                                         // 0x0000 (size: 0x10)
    FGuid ClassID;                                                                    // 0x0010 (size: 0x10)
    FName Name;                                                                       // 0x0020 (size: 0x8)
    FMetasoundFrontendNodeInterface Interface;                                        // 0x0028 (size: 0x30)
    TArray<FMetasoundFrontendVertexLiteral> InputLiterals;                            // 0x0058 (size: 0x10)

}; // Size: 0x68

struct FMetasoundFrontendNodeInterface
{
    TArray<FMetasoundFrontendVertex> Inputs;                                          // 0x0000 (size: 0x10)
    TArray<FMetasoundFrontendVertex> Outputs;                                         // 0x0010 (size: 0x10)
    TArray<FMetasoundFrontendVertex> Environment;                                     // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FMetasoundFrontendNodeStyle
{
}; // Size: 0x1

struct FMetasoundFrontendNodeStyleDisplay
{
}; // Size: 0x1

struct FMetasoundFrontendVariable
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FName TypeName;                                                                   // 0x0008 (size: 0x8)
    FMetasoundFrontendLiteral Literal;                                                // 0x0010 (size: 0x58)
    FGuid ID;                                                                         // 0x0068 (size: 0x10)
    FGuid VariableNodeID;                                                             // 0x0078 (size: 0x10)
    FGuid MutatorNodeID;                                                              // 0x0088 (size: 0x10)
    TArray<FGuid> AccessorNodeIDs;                                                    // 0x0098 (size: 0x10)
    TArray<FGuid> DeferredAccessorNodeIDs;                                            // 0x00A8 (size: 0x10)

}; // Size: 0xB8

struct FMetasoundFrontendVersion
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FMetasoundFrontendVersionNumber Number;                                           // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FMetasoundFrontendVersionNumber
{
    int32 Major;                                                                      // 0x0000 (size: 0x4)
    int32 Minor;                                                                      // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FMetasoundFrontendVertex
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FName TypeName;                                                                   // 0x0008 (size: 0x8)
    FGuid VertexID;                                                                   // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FMetasoundFrontendVertexHandle
{
    FGuid NodeID;                                                                     // 0x0000 (size: 0x10)
    FGuid VertexID;                                                                   // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FMetasoundFrontendVertexLiteral
{
    FGuid VertexID;                                                                   // 0x0000 (size: 0x10)
    FMetasoundFrontendLiteral Value;                                                  // 0x0010 (size: 0x58)

}; // Size: 0x68

struct FMetasoundFrontendVertexMetadata
{
}; // Size: 0x1

class IMetaSoundDocumentInterface : public IInterface
{
}; // Size: 0x28

class UMetaSoundBuilderDocument : public UObject
{
    FMetasoundFrontendDocument Document;                                              // 0x0030 (size: 0x1D0)
    UClass* MetaSoundUClass;                                                          // 0x0200 (size: 0x8)

}; // Size: 0x208

class UMetasoundParameterPack : public UObject
{

    ESetParamResult SetTrigger(FName ParameterName, bool OnlyIfExists);
    ESetParamResult SetString(FName ParameterName, FString InValue, bool OnlyIfExists);
    ESetParamResult SetInt(FName ParameterName, int32 InValue, bool OnlyIfExists);
    ESetParamResult SetFloat(FName ParameterName, float InValue, bool OnlyIfExists);
    ESetParamResult SetBool(FName ParameterName, bool InValue, bool OnlyIfExists);
    class UMetasoundParameterPack* MakeMetasoundParameterPack();
    bool HasTrigger(FName ParameterName);
    bool HasString(FName ParameterName);
    bool HasInt(FName ParameterName);
    bool HasFloat(FName ParameterName);
    bool HasBool(FName ParameterName);
    bool GetTrigger(FName ParameterName, ESetParamResult& Result);
    FString GetString(FName ParameterName, ESetParamResult& Result);
    int32 GetInt(FName ParameterName, ESetParamResult& Result);
    float GetFloat(FName ParameterName, ESetParamResult& Result);
    bool GetBool(FName ParameterName, ESetParamResult& Result);
}; // Size: 0x40

#endif
