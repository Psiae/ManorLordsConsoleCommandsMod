#ifndef UE4SS_SDK_ComputeFramework_HPP
#define UE4SS_SDK_ComputeFramework_HPP

#include "ComputeFramework_enums.hpp"

struct FArrayShaderValue
{
    TArray<uint8> ArrayOfValues;                                                      // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FComputeGraphEdge
{
    int32 KernelIndex;                                                                // 0x0000 (size: 0x4)
    int32 KernelBindingIndex;                                                         // 0x0004 (size: 0x4)
    int32 DataInterfaceIndex;                                                         // 0x0008 (size: 0x4)
    int32 DataInterfaceBindingIndex;                                                  // 0x000C (size: 0x4)
    bool bKernelInput;                                                                // 0x0010 (size: 0x1)
    FString BindingFunctionNameOverride;                                              // 0x0018 (size: 0x10)
    FString BindingFunctionNamespace;                                                 // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FComputeGraphInstance
{
    TArray<class UComputeDataProvider*> DataProviders;                                // 0x0000 (size: 0x10)

}; // Size: 0x18

struct FComputeKernelDefinition
{
    FString Symbol;                                                                   // 0x0000 (size: 0x10)
    FString Define;                                                                   // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FComputeKernelDefinitionSet
{
    TArray<FComputeKernelDefinition> Defines;                                         // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FComputeKernelPermutationBool
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    bool Value;                                                                       // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FComputeKernelPermutationSet
{
    TArray<FComputeKernelPermutationBool> BooleanOptions;                             // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FComputeKernelPermutationVector
{
    TMap<FString, uint32> Permutations;                                               // 0x0000 (size: 0x50)
    uint32 BitCount;                                                                  // 0x0050 (size: 0x4)

}; // Size: 0x58

struct FShaderFunctionDefinition
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    TArray<FShaderParamTypeDefinition> ParamTypes;                                    // 0x0010 (size: 0x10)
    bool bHasReturnType;                                                              // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FShaderParamTypeDefinition
{
    FString TypeDeclaration;                                                          // 0x0000 (size: 0x10)
    FString Name;                                                                     // 0x0010 (size: 0x10)
    FShaderValueTypeHandle ValueType;                                                 // 0x0020 (size: 0x8)
    uint16 ArrayElementCount;                                                         // 0x0028 (size: 0x2)
    EShaderParamBindingType BindingType;                                              // 0x002A (size: 0x1)
    EShaderResourceType resourceType;                                                 // 0x002B (size: 0x1)
    EShaderParamModifier Modifier;                                                    // 0x002C (size: 0x1)

}; // Size: 0x30

struct FShaderValueContainer
{
    TArray<uint8> ShaderValue;                                                        // 0x0000 (size: 0x10)
    TArray<FArrayShaderValue> ArrayList;                                              // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FShaderValueType
{
    EShaderFundamentalType Type;                                                      // 0x0000 (size: 0x1)
    EShaderFundamentalDimensionType DimensionType;                                    // 0x0001 (size: 0x1)
    FName Name;                                                                       // 0x0004 (size: 0x8)
    bool bIsDynamicArray;                                                             // 0x000C (size: 0x1)

}; // Size: 0x20

struct FShaderValueTypeHandle
{
}; // Size: 0x8

class UComputeDataInterface : public UObject
{
}; // Size: 0x28

class UComputeDataProvider : public UObject
{
}; // Size: 0x28

class UComputeGraph : public UObject
{
    TArray<class UComputeKernel*> KernelInvocations;                                  // 0x0028 (size: 0x10)
    TArray<class UComputeDataInterface*> DataInterfaces;                              // 0x0038 (size: 0x10)
    TArray<FComputeGraphEdge> GraphEdges;                                             // 0x0048 (size: 0x10)
    TArray<class UClass*> Bindings;                                                   // 0x0058 (size: 0x10)
    TArray<int32> DataInterfaceToBinding;                                             // 0x0068 (size: 0x10)

}; // Size: 0xE0

class UComputeGraphComponent : public UActorComponent
{
    class UComputeGraph* ComputeGraph;                                                // 0x00A0 (size: 0x8)
    FComputeGraphInstance ComputeGraphInstance;                                       // 0x00A8 (size: 0x18)

    void QueueExecute();
    void DestroyDataProviders();
    void CreateDataProviders(int32 InBindingIndex, class UObject* InBindingObject);
}; // Size: 0xC0

class UComputeKernel : public UObject
{
    class UComputeKernelSource* KernelSource;                                         // 0x0028 (size: 0x8)
    int32 KernelFlags;                                                                // 0x0030 (size: 0x4)

}; // Size: 0x38

class UComputeKernelFromText : public UComputeKernelSource
{
    FFilePath SourceFile;                                                             // 0x0098 (size: 0x10)

}; // Size: 0xA8

class UComputeKernelSource : public UObject
{
    FString EntryPoint;                                                               // 0x0028 (size: 0x10)
    FIntVector GroupSize;                                                             // 0x0038 (size: 0xC)
    FComputeKernelPermutationSet PermutationSet;                                      // 0x0048 (size: 0x10)
    FComputeKernelDefinitionSet DefinitionsSet;                                       // 0x0058 (size: 0x10)
    TArray<class UComputeSource*> AdditionalSources;                                  // 0x0068 (size: 0x10)
    TArray<FShaderFunctionDefinition> ExternalInputs;                                 // 0x0078 (size: 0x10)
    TArray<FShaderFunctionDefinition> ExternalOutputs;                                // 0x0088 (size: 0x10)

}; // Size: 0x98

class UComputeSource : public UObject
{
    TArray<class UComputeSource*> AdditionalSources;                                  // 0x0028 (size: 0x10)

}; // Size: 0x38

class UComputeSourceFromText : public UComputeSource
{
    FFilePath SourceFile;                                                             // 0x0038 (size: 0x10)

}; // Size: 0x48

#endif
