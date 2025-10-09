#ifndef UE4SS_SDK_NiagaraShader_HPP
#define UE4SS_SDK_NiagaraShader_HPP

#include "NiagaraShader_enums.hpp"

struct FNiagaraCompileEvent
{
    FNiagaraCompileEventSeverity Severity;                                            // 0x0000 (size: 0x1)
    FString Message;                                                                  // 0x0008 (size: 0x10)
    FString ShortDescription;                                                         // 0x0018 (size: 0x10)
    FGuid NodeGuid;                                                                   // 0x0028 (size: 0x10)
    FGuid PinGuid;                                                                    // 0x0038 (size: 0x10)
    TArray<FGuid> StackGuids;                                                         // 0x0048 (size: 0x10)
    FNiagaraCompileEventSource Source;                                                // 0x0058 (size: 0x1)

}; // Size: 0x60

struct FNiagaraDataInterfaceGPUParamInfo
{
    FString DataInterfaceHLSLSymbol;                                                  // 0x0000 (size: 0x10)
    FString DIClassName;                                                              // 0x0010 (size: 0x10)
    uint32 ShaderParametersOffset;                                                    // 0x0020 (size: 0x4)
    TArray<FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions;                // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FNiagaraDataInterfaceGeneratedFunction
{
    TArray<FNiagaraVariableCommonReference> VariadicInputs;                           // 0x0030 (size: 0x10)
    TArray<FNiagaraVariableCommonReference> VariadicOutputs;                          // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FNiagaraShaderScriptExternalConstant
{
    FName Type;                                                                       // 0x0000 (size: 0x8)
    FString Name;                                                                     // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FNiagaraShaderScriptParametersMetadata
{
    TArray<FNiagaraDataInterfaceGPUParamInfo> DataInterfaceParamInfo;                 // 0x0000 (size: 0x10)
    TArray<FString> LooseMetadataNames;                                               // 0x0010 (size: 0x10)
    bool bExternalConstantsInterpolated;                                              // 0x0020 (size: 0x1)
    TArray<FNiagaraShaderScriptExternalConstant> ExternalConstants;                   // 0x0028 (size: 0x10)

}; // Size: 0x58

struct FSimulationStageMetaData
{
    FName SimulationStageName;                                                        // 0x0000 (size: 0x8)
    FName EnabledBinding;                                                             // 0x0008 (size: 0x8)
    FIntVector ElementCount;                                                          // 0x0010 (size: 0xC)
    FName ElementCountXBinding;                                                       // 0x001C (size: 0x8)
    FName ElementCountYBinding;                                                       // 0x0024 (size: 0x8)
    FName ElementCountZBinding;                                                       // 0x002C (size: 0x8)
    ENiagaraIterationSource IterationSourceType;                                      // 0x0034 (size: 0x1)
    FName IterationDataInterface;                                                     // 0x0038 (size: 0x8)
    FName IterationDirectBinding;                                                     // 0x0040 (size: 0x8)
    ENiagaraSimStageExecuteBehavior ExecuteBehavior;                                  // 0x0048 (size: 0x1)
    uint8 bWritesParticles;                                                           // 0x004C (size: 0x1)
    uint8 bPartialParticleUpdate;                                                     // 0x004C (size: 0x1)
    uint8 bParticleIterationStateEnabled;                                             // 0x004C (size: 0x1)
    uint8 bGpuIndirectDispatch;                                                       // 0x004C (size: 0x1)
    FName ParticleIterationStateBinding;                                              // 0x0050 (size: 0x8)
    FIntPoint ParticleIterationStateRange;                                            // 0x005C (size: 0x8)
    TArray<FName> OutputDestinations;                                                 // 0x0068 (size: 0x10)
    TArray<FName> InputDataInterfaces;                                                // 0x0078 (size: 0x10)
    int32 NumIterations;                                                              // 0x0088 (size: 0x4)
    FName NumIterationsBinding;                                                       // 0x008C (size: 0x8)
    ENiagaraGpuDispatchType GpuDispatchType;                                          // 0x0094 (size: 0x1)
    ENiagaraDirectDispatchElementType GpuDirectDispatchElementType;                   // 0x0095 (size: 0x1)
    FIntVector GpuDispatchNumThreads;                                                 // 0x0098 (size: 0xC)

}; // Size: 0xA8

class UNiagaraScriptBase : public UObject
{
}; // Size: 0x28

#endif
