#ifndef UE4SS_SDK_Niagara_HPP
#define UE4SS_SDK_Niagara_HPP

#include "Niagara_enums.hpp"

struct FBasicParticleData
{
    FVector Position;                                                                 // 0x0000 (size: 0xC)
    float Size;                                                                       // 0x000C (size: 0x4)
    FVector Velocity;                                                                 // 0x0010 (size: 0xC)

}; // Size: 0x1C

struct FEmitterCompiledScriptPair
{
}; // Size: 0x90

struct FMeshTriCoordinate
{
    int32 Tri;                                                                        // 0x0000 (size: 0x4)
    FVector BaryCoord;                                                                // 0x0004 (size: 0xC)

}; // Size: 0x10

struct FMovieSceneNiagaraBoolParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
    FMovieSceneBoolChannel BoolChannel;                                               // 0x0040 (size: 0x90)

}; // Size: 0xD0

struct FMovieSceneNiagaraColorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
    FMovieSceneFloatChannel RedChannel;                                               // 0x0040 (size: 0xA0)
    FMovieSceneFloatChannel GreenChannel;                                             // 0x00E0 (size: 0xA0)
    FMovieSceneFloatChannel BlueChannel;                                              // 0x0180 (size: 0xA0)
    FMovieSceneFloatChannel AlphaChannel;                                             // 0x0220 (size: 0xA0)

}; // Size: 0x2C0

struct FMovieSceneNiagaraFloatParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
    FMovieSceneFloatChannel FloatChannel;                                             // 0x0040 (size: 0xA0)

}; // Size: 0xE0

struct FMovieSceneNiagaraIntegerParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
    FMovieSceneIntegerChannel IntegerChannel;                                         // 0x0040 (size: 0x90)

}; // Size: 0xD0

struct FMovieSceneNiagaraParameterSectionTemplate : public FMovieSceneEvalTemplate
{
    FNiagaraVariable Parameter;                                                       // 0x0020 (size: 0x20)

}; // Size: 0x40

struct FMovieSceneNiagaraSystemTrackImplementation : public FMovieSceneTrackImplementation
{
    FFrameNumber SpawnSectionStartFrame;                                              // 0x0010 (size: 0x4)
    FFrameNumber SpawnSectionEndFrame;                                                // 0x0014 (size: 0x4)
    ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior;                // 0x0018 (size: 0x4)
    ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior;          // 0x001C (size: 0x4)
    ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior;                    // 0x0020 (size: 0x4)
    ENiagaraAgeUpdateMode AgeUpdateMode;                                              // 0x0024 (size: 0x1)

}; // Size: 0x28

struct FMovieSceneNiagaraSystemTrackTemplate : public FMovieSceneEvalTemplate
{
}; // Size: 0x20

struct FMovieSceneNiagaraVectorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
    FMovieSceneFloatChannel VectorChannels;                                           // 0x0040 (size: 0x280)
    int32 ChannelsUsed;                                                               // 0x02C0 (size: 0x4)

}; // Size: 0x2C8

struct FNCPool
{
    TArray<FNCPoolElement> FreeElements;                                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FNCPoolElement
{
    class UNiagaraComponent* Component;                                               // 0x0000 (size: 0x8)

}; // Size: 0x10

struct FNDIStaticMeshSectionFilter
{
    TArray<int32> AllowedMaterialSlots;                                               // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FNiagaraAssetVersion
{
    int32 MajorVersion;                                                               // 0x0000 (size: 0x4)
    int32 MinorVersion;                                                               // 0x0004 (size: 0x4)
    FGuid VersionGuid;                                                                // 0x0008 (size: 0x10)
    bool bIsVisibleInVersionSelector;                                                 // 0x0018 (size: 0x1)

}; // Size: 0x1C

struct FNiagaraBakerTextureSettings
{
    FName OutputName;                                                                 // 0x0000 (size: 0x8)
    FNiagaraBakerTextureSource SourceBinding;                                         // 0x0008 (size: 0x8)
    uint8 bUseFrameSize;                                                              // 0x0010 (size: 0x1)
    FIntPoint FrameSize;                                                              // 0x0014 (size: 0x8)
    FIntPoint TextureSize;                                                            // 0x001C (size: 0x8)
    class UTexture2D* GeneratedTexture;                                               // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FNiagaraBakerTextureSource
{
    FName SourceName;                                                                 // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FNiagaraBool
{
    int32 Value;                                                                      // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FNiagaraBoundParameter
{
    FNiagaraVariable Parameter;                                                       // 0x0000 (size: 0x20)
    int32 SrcOffset;                                                                  // 0x0020 (size: 0x4)
    int32 DestOffset;                                                                 // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FNiagaraCollisionEventPayload
{
    FVector CollisionPos;                                                             // 0x0000 (size: 0xC)
    FVector CollisionNormal;                                                          // 0x000C (size: 0xC)
    FVector CollisionVelocity;                                                        // 0x0018 (size: 0xC)
    int32 ParticleIndex;                                                              // 0x0024 (size: 0x4)
    int32 PhysicalMaterialIndex;                                                      // 0x0028 (size: 0x4)

}; // Size: 0x2C

struct FNiagaraCompileDependency
{
    FString LinkerErrorMessage;                                                       // 0x0000 (size: 0x10)
    FGuid NodeGuid;                                                                   // 0x0010 (size: 0x10)
    FGuid PinGuid;                                                                    // 0x0020 (size: 0x10)
    TArray<FGuid> StackGuids;                                                         // 0x0030 (size: 0x10)
    FNiagaraVariableBase DependentVariable;                                           // 0x0040 (size: 0xC)

}; // Size: 0x50

struct FNiagaraCompileHashVisitorDebugInfo
{
    FString Object;                                                                   // 0x0000 (size: 0x10)
    TArray<FString> PropertyKeys;                                                     // 0x0010 (size: 0x10)
    TArray<FString> PropertyValues;                                                   // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FNiagaraCompilerTag
{
    FNiagaraVariable Variable;                                                        // 0x0000 (size: 0x20)
    FString StringValue;                                                              // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FNiagaraComponentPropertyBinding
{
    FNiagaraVariableAttributeBinding AttributeBinding;                                // 0x0000 (size: 0x58)
    FName PropertyName;                                                               // 0x0058 (size: 0x8)
    FNiagaraTypeDefinition PropertyType;                                              // 0x0060 (size: 0x10)
    FName MetadataSetterName;                                                         // 0x0070 (size: 0x8)
    TMap<class FString, class FString> PropertySetterParameterDefaults;               // 0x0078 (size: 0x50)
    FNiagaraVariable WritableValue;                                                   // 0x00C8 (size: 0x20)

}; // Size: 0xE8

struct FNiagaraDataSetCompiledData
{
    TArray<FNiagaraVariable> Variables;                                               // 0x0000 (size: 0x10)
    TArray<FNiagaraVariableLayoutInfo> VariableLayouts;                               // 0x0010 (size: 0x10)
    FNiagaraDataSetID ID;                                                             // 0x0020 (size: 0xC)
    uint32 TotalFloatComponents;                                                      // 0x002C (size: 0x4)
    uint32 TotalInt32Components;                                                      // 0x0030 (size: 0x4)
    uint32 TotalHalfComponents;                                                       // 0x0034 (size: 0x4)
    uint8 bRequiresPersistentIDs;                                                     // 0x0038 (size: 0x1)
    ENiagaraSimTarget SimTarget;                                                      // 0x003C (size: 0x1)

}; // Size: 0x40

struct FNiagaraDataSetID
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    ENiagaraDataSetType Type;                                                         // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FNiagaraDataSetProperties
{
    FNiagaraDataSetID ID;                                                             // 0x0000 (size: 0xC)
    TArray<FNiagaraVariable> Variables;                                               // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FNiagaraDebugHUDSettingsData
{
    bool bEnabled;                                                                    // 0x0000 (size: 0x1)
    bool bValidateSystemSimulationDataBuffers;                                        // 0x0001 (size: 0x1)
    bool bValidateParticleDataBuffers;                                                // 0x0002 (size: 0x1)
    bool bOverviewEnabled;                                                            // 0x0003 (size: 0x1)
    ENiagaraDebugHudFont OverviewFont;                                                // 0x0004 (size: 0x4)
    FVector2D OverviewLocation;                                                       // 0x0008 (size: 0x8)
    FString ActorFilter;                                                              // 0x0010 (size: 0x10)
    bool bComponentFilterEnabled;                                                     // 0x0020 (size: 0x1)
    FString ComponentFilter;                                                          // 0x0028 (size: 0x10)
    bool bSystemFilterEnabled;                                                        // 0x0038 (size: 0x1)
    FString SystemFilter;                                                             // 0x0040 (size: 0x10)
    bool bEmitterFilterEnabled;                                                       // 0x0050 (size: 0x1)
    FString EmitterFilter;                                                            // 0x0058 (size: 0x10)
    bool bActorFilterEnabled;                                                         // 0x0068 (size: 0x1)
    ENiagaraDebugHudVerbosity SystemDebugVerbosity;                                   // 0x006C (size: 0x4)
    ENiagaraDebugHudVerbosity SystemEmitterVerbosity;                                 // 0x0070 (size: 0x4)
    bool bSystemShowBounds;                                                           // 0x0074 (size: 0x1)
    bool bSystemShowActiveOnlyInWorld;                                                // 0x0075 (size: 0x1)
    bool bShowSystemVariables;                                                        // 0x0076 (size: 0x1)
    TArray<FNiagaraDebugHUDVariable> SystemVariables;                                 // 0x0078 (size: 0x10)
    FNiagaraDebugHudTextOptions SystemTextOptions;                                    // 0x0088 (size: 0x10)
    bool bShowParticleVariables;                                                      // 0x0098 (size: 0x1)
    bool bEnableGpuParticleReadback;                                                  // 0x0099 (size: 0x1)
    TArray<FNiagaraDebugHUDVariable> ParticlesVariables;                              // 0x00A0 (size: 0x10)
    FNiagaraDebugHudTextOptions ParticleTextOptions;                                  // 0x00B0 (size: 0x10)
    bool bShowParticlesVariablesWithSystem;                                           // 0x00C0 (size: 0x1)
    bool bUseMaxParticlesToDisplay;                                                   // 0x00C1 (size: 0x1)
    int32 MaxParticlesToDisplay;                                                      // 0x00C4 (size: 0x4)
    ENiagaraDebugPlaybackMode PlaybackMode;                                           // 0x00C8 (size: 0x1)
    bool bPlaybackRateEnabled;                                                        // 0x00C9 (size: 0x1)
    float PlaybackRate;                                                               // 0x00CC (size: 0x4)
    bool bLoopTimeEnabled;                                                            // 0x00D0 (size: 0x1)
    float LoopTime;                                                                   // 0x00D4 (size: 0x4)
    bool bShowGlobalBudgetInfo;                                                       // 0x00D8 (size: 0x1)

}; // Size: 0xE0

struct FNiagaraDebugHUDVariable
{
    bool bEnabled;                                                                    // 0x0000 (size: 0x1)
    FString Name;                                                                     // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FNiagaraDebugHudTextOptions
{
    ENiagaraDebugHudFont Font;                                                        // 0x0000 (size: 0x4)
    ENiagaraDebugHudHAlign HorizontalAlignment;                                       // 0x0004 (size: 0x1)
    ENiagaraDebugHudVAlign VerticalAlignment;                                         // 0x0005 (size: 0x1)
    FVector2D ScreenOffset;                                                           // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FNiagaraDebuggerAcceptConnection
{
    FGuid SessionId;                                                                  // 0x0000 (size: 0x10)
    FGuid InstanceId;                                                                 // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FNiagaraDebuggerConnectionClosed
{
    FGuid SessionId;                                                                  // 0x0000 (size: 0x10)
    FGuid InstanceId;                                                                 // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FNiagaraDebuggerExecuteConsoleCommand
{
    FString Command;                                                                  // 0x0000 (size: 0x10)
    bool bRequiresWorld;                                                              // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FNiagaraDebuggerOutlinerUpdate
{
    FNiagaraOutlinerData OutlinerData;                                                // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FNiagaraDebuggerRequestConnection
{
    FGuid SessionId;                                                                  // 0x0000 (size: 0x10)
    FGuid InstanceId;                                                                 // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FNiagaraDetailsLevelScaleOverrides
{
    float Low;                                                                        // 0x0000 (size: 0x4)
    float Medium;                                                                     // 0x0004 (size: 0x4)
    float High;                                                                       // 0x0008 (size: 0x4)
    float Epic;                                                                       // 0x000C (size: 0x4)
    float Cine;                                                                       // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FNiagaraDeviceProfileStateEntry
{
    FName ProfileName;                                                                // 0x0000 (size: 0x8)
    uint32 QualityLevelMask;                                                          // 0x0008 (size: 0x4)
    uint32 SetQualityLevelMask;                                                       // 0x000C (size: 0x4)

}; // Size: 0x10

struct FNiagaraEmitterCompiledData
{
    TArray<FName> SpawnAttributes;                                                    // 0x0000 (size: 0x10)
    FNiagaraVariable EmitterSpawnIntervalVar;                                         // 0x0010 (size: 0x20)
    FNiagaraVariable EmitterInterpSpawnStartDTVar;                                    // 0x0030 (size: 0x20)
    FNiagaraVariable EmitterSpawnGroupVar;                                            // 0x0050 (size: 0x20)
    FNiagaraVariable EmitterAgeVar;                                                   // 0x0070 (size: 0x20)
    FNiagaraVariable EmitterRandomSeedVar;                                            // 0x0090 (size: 0x20)
    FNiagaraVariable EmitterInstanceSeedVar;                                          // 0x00B0 (size: 0x20)
    FNiagaraVariable EmitterTotalSpawnedParticlesVar;                                 // 0x00D0 (size: 0x20)
    FNiagaraDataSetCompiledData DataSetCompiledData;                                  // 0x00F0 (size: 0x40)

}; // Size: 0x130

struct FNiagaraEmitterHandle
{
    FGuid ID;                                                                         // 0x0000 (size: 0x10)
    FName IdName;                                                                     // 0x0010 (size: 0x8)
    bool bIsEnabled;                                                                  // 0x0018 (size: 0x1)
    FName Name;                                                                       // 0x001C (size: 0x8)
    class UNiagaraEmitter* Instance;                                                  // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FNiagaraEmitterNameSettingsRef
{
    FName SystemName;                                                                 // 0x0000 (size: 0x8)
    FString EmitterName;                                                              // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FNiagaraEmitterScalabilityOverride : public FNiagaraEmitterScalabilitySettings
{
    uint8 bOverrideSpawnCountScale;                                                   // 0x0038 (size: 0x1)

}; // Size: 0x40

struct FNiagaraEmitterScalabilityOverrides
{
    TArray<FNiagaraEmitterScalabilityOverride> Overrides;                             // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FNiagaraEmitterScalabilitySettings
{
    FNiagaraPlatformSet Platforms;                                                    // 0x0000 (size: 0x30)
    uint8 bScaleSpawnCount;                                                           // 0x0030 (size: 0x1)
    float SpawnCountScale;                                                            // 0x0034 (size: 0x4)

}; // Size: 0x38

struct FNiagaraEmitterScalabilitySettingsArray
{
    TArray<FNiagaraEmitterScalabilitySettings> Settings;                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FNiagaraEmitterScriptProperties
{
    class UNiagaraScript* Script;                                                     // 0x0000 (size: 0x8)
    TArray<FNiagaraEventReceiverProperties> EventReceivers;                           // 0x0008 (size: 0x10)
    TArray<FNiagaraEventGeneratorProperties> EventGenerators;                         // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FNiagaraEventGeneratorProperties
{
    int32 MaxEventsPerFrame;                                                          // 0x0000 (size: 0x4)
    FName ID;                                                                         // 0x0004 (size: 0x8)
    FNiagaraDataSetCompiledData DataSetCompiledData;                                  // 0x0010 (size: 0x40)

}; // Size: 0x50

struct FNiagaraEventReceiverProperties
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FName SourceEventGenerator;                                                       // 0x0008 (size: 0x8)
    FName SourceEmitter;                                                              // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FNiagaraEventScriptProperties : public FNiagaraEmitterScriptProperties
{
    EScriptExecutionMode ExecutionMode;                                               // 0x0028 (size: 0x1)
    uint32 SpawnNumber;                                                               // 0x002C (size: 0x4)
    uint32 MaxEventsPerFrame;                                                         // 0x0030 (size: 0x4)
    FGuid SourceEmitterID;                                                            // 0x0034 (size: 0x10)
    FName SourceEventName;                                                            // 0x0044 (size: 0x8)
    bool bRandomSpawnNumber;                                                          // 0x004C (size: 0x1)
    uint32 MinSpawnNumber;                                                            // 0x0050 (size: 0x4)

}; // Size: 0x58

struct FNiagaraFloat
{
    float Value;                                                                      // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FNiagaraFunctionSignature
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    TArray<FNiagaraVariable> Inputs;                                                  // 0x0008 (size: 0x10)
    TArray<FNiagaraVariable> Outputs;                                                 // 0x0018 (size: 0x10)
    FName OwnerName;                                                                  // 0x0028 (size: 0x8)
    uint8 bRequiresContext;                                                           // 0x0030 (size: 0x1)
    uint8 bRequiresExecPin;                                                           // 0x0030 (size: 0x1)
    uint8 bMemberFunction;                                                            // 0x0030 (size: 0x1)
    uint8 bExperimental;                                                              // 0x0030 (size: 0x1)
    uint8 bSupportsCPU;                                                               // 0x0030 (size: 0x1)
    uint8 bSupportsGPU;                                                               // 0x0030 (size: 0x1)
    uint8 bWriteFunction;                                                             // 0x0030 (size: 0x1)
    uint8 bSoftDeprecatedFunction;                                                    // 0x0030 (size: 0x1)
    uint8 bIsCompileTagGenerator;                                                     // 0x0031 (size: 0x1)
    uint8 bHidden;                                                                    // 0x0031 (size: 0x1)
    int32 ModuleUsageBitmask;                                                         // 0x0034 (size: 0x4)
    int32 ContextStageMinIndex;                                                       // 0x0038 (size: 0x4)
    int32 ContextStageMaxIndex;                                                       // 0x003C (size: 0x4)
    TMap<class FName, class FName> FunctionSpecifiers;                                // 0x0040 (size: 0x50)

}; // Size: 0x90

struct FNiagaraGraphViewSettings
{
    FVector2D Location;                                                               // 0x0000 (size: 0x8)
    float Zoom;                                                                       // 0x0008 (size: 0x4)
    bool bIsValid;                                                                    // 0x000C (size: 0x1)

}; // Size: 0x10

struct FNiagaraHalf
{
    uint16 Value;                                                                     // 0x0000 (size: 0x2)

}; // Size: 0x2

struct FNiagaraHalfVector2
{
    uint16 X;                                                                         // 0x0000 (size: 0x2)
    uint16 Y;                                                                         // 0x0002 (size: 0x2)

}; // Size: 0x4

struct FNiagaraHalfVector3
{
    uint16 X;                                                                         // 0x0000 (size: 0x2)
    uint16 Y;                                                                         // 0x0002 (size: 0x2)
    uint16 Z;                                                                         // 0x0004 (size: 0x2)

}; // Size: 0x6

struct FNiagaraHalfVector4
{
    uint16 X;                                                                         // 0x0000 (size: 0x2)
    uint16 Y;                                                                         // 0x0002 (size: 0x2)
    uint16 Z;                                                                         // 0x0004 (size: 0x2)
    uint16 W;                                                                         // 0x0006 (size: 0x2)

}; // Size: 0x8

struct FNiagaraID
{
    int32 Index;                                                                      // 0x0000 (size: 0x4)
    int32 AcquireTag;                                                                 // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FNiagaraInputConditionMetadata
{
    FName InputName;                                                                  // 0x0000 (size: 0x8)
    TArray<FString> TargetValues;                                                     // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FNiagaraInt32
{
    int32 Value;                                                                      // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FNiagaraMaterialAttributeBinding
{
    FName MaterialParameterName;                                                      // 0x0000 (size: 0x8)
    FNiagaraVariableBase NiagaraVariable;                                             // 0x0008 (size: 0xC)
    FNiagaraVariableBase ResolvedNiagaraVariable;                                     // 0x0014 (size: 0xC)
    FNiagaraVariableBase NiagaraChildVariable;                                        // 0x0020 (size: 0xC)

}; // Size: 0x2C

struct FNiagaraMaterialOverride
{
    class UMaterialInterface* Material;                                               // 0x0000 (size: 0x8)
    uint32 MaterialSubIndex;                                                          // 0x0008 (size: 0x4)
    class UNiagaraRendererProperties* EmitterRendererProperty;                        // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FNiagaraMatrix
{
    FVector4 Row0;                                                                    // 0x0000 (size: 0x10)
    FVector4 Row1;                                                                    // 0x0010 (size: 0x10)
    FVector4 Row2;                                                                    // 0x0020 (size: 0x10)
    FVector4 Row3;                                                                    // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FNiagaraMeshMaterialOverride
{
    class UMaterialInterface* ExplicitMat;                                            // 0x0000 (size: 0x8)
    FNiagaraUserParameterBinding UserParamBinding;                                    // 0x0008 (size: 0x20)

}; // Size: 0x28

struct FNiagaraMeshRendererMeshProperties
{
    class UStaticMesh* Mesh;                                                          // 0x0000 (size: 0x8)
    FVector Scale;                                                                    // 0x0008 (size: 0xC)
    FVector PivotOffset;                                                              // 0x0014 (size: 0xC)
    ENiagaraMeshPivotOffsetSpace PivotOffsetSpace;                                    // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FNiagaraModuleDependency
{
    FName ID;                                                                         // 0x0000 (size: 0x8)
    ENiagaraModuleDependencyType Type;                                                // 0x0008 (size: 0x1)
    ENiagaraModuleDependencyScriptConstraint ScriptConstraint;                        // 0x0009 (size: 0x1)
    FText Description;                                                                // 0x0010 (size: 0x18)

}; // Size: 0x28

struct FNiagaraNumeric
{
}; // Size: 0x1

struct FNiagaraOutlinerCaptureSettings
{
    bool bTriggerCapture;                                                             // 0x0000 (size: 0x1)
    uint32 CaptureDelayFrames;                                                        // 0x0004 (size: 0x4)
    bool bGatherPerfData;                                                             // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FNiagaraOutlinerData
{
    TMap<class FString, class FNiagaraOutlinerWorldData> WorldData;                   // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FNiagaraOutlinerEmitterInstanceData
{
    FString EmitterName;                                                              // 0x0000 (size: 0x10)
    ENiagaraSimTarget SimTarget;                                                      // 0x0010 (size: 0x1)
    ENiagaraExecutionState ExecState;                                                 // 0x0014 (size: 0x4)
    int32 NumParticles;                                                               // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FNiagaraOutlinerSystemData
{
    TArray<FNiagaraOutlinerSystemInstanceData> SystemInstances;                       // 0x0000 (size: 0x10)
    FNiagaraOutlinerTimingData AveragePerFrameTime;                                   // 0x0010 (size: 0x8)
    FNiagaraOutlinerTimingData MaxPerFrameTime;                                       // 0x0018 (size: 0x8)
    FNiagaraOutlinerTimingData AveragePerInstanceTime;                                // 0x0020 (size: 0x8)
    FNiagaraOutlinerTimingData MaxPerInstanceTime;                                    // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FNiagaraOutlinerSystemInstanceData
{
    FString ComponentName;                                                            // 0x0000 (size: 0x10)
    TArray<FNiagaraOutlinerEmitterInstanceData> Emitters;                             // 0x0010 (size: 0x10)
    ENiagaraExecutionState ActualExecutionState;                                      // 0x0020 (size: 0x4)
    ENiagaraExecutionState RequestedExecutionState;                                   // 0x0024 (size: 0x4)
    FNiagaraScalabilityState ScalabilityState;                                        // 0x0028 (size: 0x8)
    uint8 bPendingKill;                                                               // 0x0030 (size: 0x1)
    ENCPoolMethod PoolMethod;                                                         // 0x0034 (size: 0x1)
    FNiagaraOutlinerTimingData AverageTime;                                           // 0x0038 (size: 0x8)
    FNiagaraOutlinerTimingData MaxTime;                                               // 0x0040 (size: 0x8)

}; // Size: 0x48

struct FNiagaraOutlinerTimingData
{
    float GameThread;                                                                 // 0x0000 (size: 0x4)
    float RenderThread;                                                               // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FNiagaraOutlinerWorldData
{
    TMap<class FString, class FNiagaraOutlinerSystemData> Systems;                    // 0x0000 (size: 0x50)
    bool bHasBegunPlay;                                                               // 0x0050 (size: 0x1)
    uint8 WorldType;                                                                  // 0x0051 (size: 0x1)
    uint8 NetMode;                                                                    // 0x0052 (size: 0x1)
    FNiagaraOutlinerTimingData AveragePerFrameTime;                                   // 0x0054 (size: 0x8)
    FNiagaraOutlinerTimingData MaxPerFrameTime;                                       // 0x005C (size: 0x8)

}; // Size: 0x68

struct FNiagaraParameterDataSetBinding
{
    int32 ParameterOffset;                                                            // 0x0000 (size: 0x4)
    int32 DataSetComponentOffset;                                                     // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FNiagaraParameterDataSetBindingCollection
{
    TArray<FNiagaraParameterDataSetBinding> FloatOffsets;                             // 0x0000 (size: 0x10)
    TArray<FNiagaraParameterDataSetBinding> Int32Offsets;                             // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FNiagaraParameterMap
{
}; // Size: 0x1

struct FNiagaraParameterStore
{
    class UObject* Owner;                                                             // 0x0008 (size: 0x8)
    TArray<FNiagaraVariableWithOffset> SortedParameterOffsets;                        // 0x0010 (size: 0x10)
    TArray<uint8> ParameterData;                                                      // 0x0020 (size: 0x10)
    TArray<class UNiagaraDataInterface*> DataInterfaces;                              // 0x0030 (size: 0x10)
    TArray<class UObject*> UObjects;                                                  // 0x0040 (size: 0x10)

}; // Size: 0x78

struct FNiagaraParameters
{
    TArray<FNiagaraVariable> Parameters;                                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FNiagaraPerfBaselineStats
{
    float PerInstanceAvg_GT;                                                          // 0x0000 (size: 0x4)
    float PerInstanceAvg_RT;                                                          // 0x0004 (size: 0x4)
    float PerInstanceMax_GT;                                                          // 0x0008 (size: 0x4)
    float PerInstanceMax_RT;                                                          // 0x000C (size: 0x4)

}; // Size: 0x10

struct FNiagaraPlatformSet
{
    int32 QualityLevelMask;                                                           // 0x0000 (size: 0x4)
    TArray<FNiagaraDeviceProfileStateEntry> DeviceProfileStates;                      // 0x0008 (size: 0x10)
    TArray<FNiagaraPlatformSetCVarCondition> CVarConditions;                          // 0x0018 (size: 0x10)

}; // Size: 0x30

struct FNiagaraPlatformSetCVarCondition
{
    FName CVarName;                                                                   // 0x0000 (size: 0x8)
    bool Value;                                                                       // 0x0008 (size: 0x1)
    int32 MinInt;                                                                     // 0x000C (size: 0x4)
    int32 MaxInt;                                                                     // 0x0010 (size: 0x4)
    float MinFloat;                                                                   // 0x0014 (size: 0x4)
    float MaxFloat;                                                                   // 0x0018 (size: 0x4)
    uint8 bUseMinInt;                                                                 // 0x001C (size: 0x1)
    uint8 bUseMaxInt;                                                                 // 0x001C (size: 0x1)
    uint8 bUseMinFloat;                                                               // 0x001C (size: 0x1)
    uint8 bUseMaxFloat;                                                               // 0x001C (size: 0x1)

}; // Size: 0x28

struct FNiagaraPlatformSetConflictEntry
{
    FName ProfileName;                                                                // 0x0000 (size: 0x8)
    int32 QualityLevelMask;                                                           // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FNiagaraPlatformSetConflictInfo
{
    int32 SetAIndex;                                                                  // 0x0000 (size: 0x4)
    int32 SetBIndex;                                                                  // 0x0004 (size: 0x4)
    TArray<FNiagaraPlatformSetConflictEntry> Conflicts;                               // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FNiagaraRandInfo
{
    int32 Seed1;                                                                      // 0x0000 (size: 0x4)
    int32 Seed2;                                                                      // 0x0004 (size: 0x4)
    int32 Seed3;                                                                      // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FNiagaraRequestSimpleClientInfoMessage
{
}; // Size: 0x1

struct FNiagaraRibbonShapeCustomVertex
{
    FVector2D Position;                                                               // 0x0000 (size: 0x8)
    FVector2D Normal;                                                                 // 0x0008 (size: 0x8)
    float TextureV;                                                                   // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FNiagaraRibbonUVSettings
{
    ENiagaraRibbonUVDistributionMode DistributionMode;                                // 0x0000 (size: 0x4)
    ENiagaraRibbonUVEdgeMode LeadingEdgeMode;                                         // 0x0004 (size: 0x4)
    ENiagaraRibbonUVEdgeMode TrailingEdgeMode;                                        // 0x0008 (size: 0x4)
    float TilingLength;                                                               // 0x000C (size: 0x4)
    FVector2D Offset;                                                                 // 0x0010 (size: 0x8)
    FVector2D Scale;                                                                  // 0x0018 (size: 0x8)
    bool bEnablePerParticleUOverride;                                                 // 0x0020 (size: 0x1)
    bool bEnablePerParticleVRangeOverride;                                            // 0x0021 (size: 0x1)

}; // Size: 0x24

struct FNiagaraScalabilityManager
{
    class UNiagaraEffectType* EffectType;                                             // 0x0000 (size: 0x8)
    TArray<class UNiagaraComponent*> ManagedComponents;                               // 0x0008 (size: 0x10)

}; // Size: 0x70

struct FNiagaraScalabilityState
{
    float Significance;                                                               // 0x0000 (size: 0x4)
    uint8 bCulled;                                                                    // 0x0004 (size: 0x1)
    uint8 bPreviousCulled;                                                            // 0x0004 (size: 0x1)
    uint8 bCulledByDistance;                                                          // 0x0004 (size: 0x1)
    uint8 bCulledByInstanceCount;                                                     // 0x0004 (size: 0x1)
    uint8 bCulledByVisibility;                                                        // 0x0004 (size: 0x1)
    uint8 bCulledByGlobalBudget;                                                      // 0x0004 (size: 0x1)

}; // Size: 0x8

struct FNiagaraScriptDataInterfaceCompileInfo
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    int32 UserPtrIdx;                                                                 // 0x0008 (size: 0x4)
    FNiagaraTypeDefinition Type;                                                      // 0x0010 (size: 0x10)
    FName RegisteredParameterMapRead;                                                 // 0x0020 (size: 0x8)
    FName RegisteredParameterMapWrite;                                                // 0x0028 (size: 0x8)
    bool bIsPlaceholder;                                                              // 0x0030 (size: 0x1)

}; // Size: 0x38

struct FNiagaraScriptDataInterfaceInfo
{
    class UNiagaraDataInterface* DataInterface;                                       // 0x0000 (size: 0x8)
    FName Name;                                                                       // 0x0008 (size: 0x8)
    int32 UserPtrIdx;                                                                 // 0x0010 (size: 0x4)
    FNiagaraTypeDefinition Type;                                                      // 0x0018 (size: 0x10)
    FName RegisteredParameterMapRead;                                                 // 0x0028 (size: 0x8)
    FName RegisteredParameterMapWrite;                                                // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FNiagaraScriptDataUsageInfo
{
    bool bReadsAttributeData;                                                         // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FNiagaraScriptExecutionPaddingInfo
{
    uint16 SrcOffset;                                                                 // 0x0000 (size: 0x2)
    uint16 DestOffset;                                                                // 0x0002 (size: 0x2)
    uint16 SrcSize;                                                                   // 0x0004 (size: 0x2)
    uint16 DestSize;                                                                  // 0x0006 (size: 0x2)

}; // Size: 0x8

struct FNiagaraScriptExecutionParameterStore : public FNiagaraParameterStore
{
    int32 ParameterSize;                                                              // 0x0078 (size: 0x4)
    uint32 PaddedParameterSize;                                                       // 0x007C (size: 0x4)
    TArray<FNiagaraScriptExecutionPaddingInfo> PaddingInfo;                           // 0x0080 (size: 0x10)
    uint8 bInitialized;                                                               // 0x0090 (size: 0x1)

}; // Size: 0x98

struct FNiagaraScriptHighlight
{
    FLinearColor Color;                                                               // 0x0000 (size: 0x10)
    FText DisplayName;                                                                // 0x0010 (size: 0x18)

}; // Size: 0x28

struct FNiagaraScriptInstanceParameterStore : public FNiagaraParameterStore
{
}; // Size: 0x88

struct FNiagaraScriptVariableBinding
{
    FName Name;                                                                       // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FNiagaraSimpleClientInfo
{
    TArray<FString> Systems;                                                          // 0x0000 (size: 0x10)
    TArray<FString> Actors;                                                           // 0x0010 (size: 0x10)
    TArray<FString> Components;                                                       // 0x0020 (size: 0x10)
    TArray<FString> Emitters;                                                         // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FNiagaraSpawnInfo
{
    int32 Count;                                                                      // 0x0000 (size: 0x4)
    float InterpStartDt;                                                              // 0x0004 (size: 0x4)
    float IntervalDt;                                                                 // 0x0008 (size: 0x4)
    int32 SpawnGroup;                                                                 // 0x000C (size: 0x4)

}; // Size: 0x10

struct FNiagaraStatScope
{
    FName FullName;                                                                   // 0x0000 (size: 0x8)
    FName FriendlyName;                                                               // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FNiagaraSystemCompileRequest
{
    TArray<class UObject*> RootObjects;                                               // 0x0008 (size: 0x10)

}; // Size: 0x80

struct FNiagaraSystemCompiledData
{
    FNiagaraParameterStore InstanceParamStore;                                        // 0x0000 (size: 0x78)
    FNiagaraDataSetCompiledData DataSetCompiledData;                                  // 0x0078 (size: 0x40)
    FNiagaraDataSetCompiledData SpawnInstanceParamsDataSetCompiledData;               // 0x00B8 (size: 0x40)
    FNiagaraDataSetCompiledData UpdateInstanceParamsDataSetCompiledData;              // 0x00F8 (size: 0x40)
    FNiagaraParameterDataSetBindingCollection SpawnInstanceGlobalBinding;             // 0x0138 (size: 0x20)
    FNiagaraParameterDataSetBindingCollection SpawnInstanceSystemBinding;             // 0x0158 (size: 0x20)
    FNiagaraParameterDataSetBindingCollection SpawnInstanceOwnerBinding;              // 0x0178 (size: 0x20)
    TArray<FNiagaraParameterDataSetBindingCollection> SpawnInstanceEmitterBindings;   // 0x0198 (size: 0x10)
    FNiagaraParameterDataSetBindingCollection UpdateInstanceGlobalBinding;            // 0x01A8 (size: 0x20)
    FNiagaraParameterDataSetBindingCollection UpdateInstanceSystemBinding;            // 0x01C8 (size: 0x20)
    FNiagaraParameterDataSetBindingCollection UpdateInstanceOwnerBinding;             // 0x01E8 (size: 0x20)
    TArray<FNiagaraParameterDataSetBindingCollection> UpdateInstanceEmitterBindings;  // 0x0208 (size: 0x10)

}; // Size: 0x218

struct FNiagaraSystemScalabilityOverride : public FNiagaraSystemScalabilitySettings
{
    uint8 bOverrideDistanceSettings;                                                  // 0x0048 (size: 0x1)
    uint8 bOverrideInstanceCountSettings;                                             // 0x0048 (size: 0x1)
    uint8 bOverridePerSystemInstanceCountSettings;                                    // 0x0048 (size: 0x1)
    uint8 bOverrideTimeSinceRendererSettings;                                         // 0x0048 (size: 0x1)
    uint8 bOverrideGlobalBudgetCullingSettings;                                       // 0x0048 (size: 0x1)

}; // Size: 0x50

struct FNiagaraSystemScalabilityOverrides
{
    TArray<FNiagaraSystemScalabilityOverride> Overrides;                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FNiagaraSystemScalabilitySettings
{
    FNiagaraPlatformSet Platforms;                                                    // 0x0000 (size: 0x30)
    uint8 bCullByDistance;                                                            // 0x0030 (size: 0x1)
    uint8 bCullMaxInstanceCount;                                                      // 0x0030 (size: 0x1)
    uint8 bCullPerSystemMaxInstanceCount;                                             // 0x0030 (size: 0x1)
    uint8 bCullByMaxTimeWithoutRender;                                                // 0x0030 (size: 0x1)
    uint8 bCullByGlobalBudget;                                                        // 0x0030 (size: 0x1)
    float MaxDistance;                                                                // 0x0034 (size: 0x4)
    int32 MaxInstances;                                                               // 0x0038 (size: 0x4)
    int32 MaxSystemInstances;                                                         // 0x003C (size: 0x4)
    float MaxTimeWithoutRender;                                                       // 0x0040 (size: 0x4)
    float MaxGlobalBudgetUsage;                                                       // 0x0044 (size: 0x4)

}; // Size: 0x48

struct FNiagaraSystemScalabilitySettingsArray
{
    TArray<FNiagaraSystemScalabilitySettings> Settings;                               // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FNiagaraSystemUpdateContext
{
    TArray<class UNiagaraComponent*> ComponentsToReset;                               // 0x0000 (size: 0x10)
    TArray<class UNiagaraComponent*> ComponentsToReInit;                              // 0x0010 (size: 0x10)
    TArray<class UNiagaraComponent*> ComponentsToNotifySimDestroy;                    // 0x0020 (size: 0x10)
    TArray<class UNiagaraSystem*> SystemSimsToDestroy;                                // 0x0030 (size: 0x10)

}; // Size: 0x68

struct FNiagaraTypeDefinition
{
    class UObject* ClassStructOrEnum;                                                 // 0x0000 (size: 0x8)
    uint16 UnderlyingType;                                                            // 0x0008 (size: 0x2)

}; // Size: 0x10

struct FNiagaraTypeDefinitionHandle
{
    int32 RegisteredTypeIndex;                                                        // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FNiagaraTypeLayoutInfo
{
    TArray<uint32> FloatComponentByteOffsets;                                         // 0x0000 (size: 0x10)
    TArray<uint32> FloatComponentRegisterOffsets;                                     // 0x0010 (size: 0x10)
    TArray<uint32> Int32ComponentByteOffsets;                                         // 0x0020 (size: 0x10)
    TArray<uint32> Int32ComponentRegisterOffsets;                                     // 0x0030 (size: 0x10)
    TArray<uint32> HalfComponentByteOffsets;                                          // 0x0040 (size: 0x10)
    TArray<uint32> HalfComponentRegisterOffsets;                                      // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FNiagaraUserParameterBinding
{
    FNiagaraVariable Parameter;                                                       // 0x0000 (size: 0x20)

}; // Size: 0x20

struct FNiagaraUserRedirectionParameterStore : public FNiagaraParameterStore
{
    TMap<class FNiagaraVariable, class FNiagaraVariable> UserParameterRedirects;      // 0x0078 (size: 0x50)

}; // Size: 0xC8

struct FNiagaraVMExecutableData
{
    TArray<uint8> ByteCode;                                                           // 0x0000 (size: 0x10)
    TArray<uint8> OptimizedByteCode;                                                  // 0x0010 (size: 0x10)
    int32 NumTempRegisters;                                                           // 0x0020 (size: 0x4)
    int32 NumUserPtrs;                                                                // 0x0024 (size: 0x4)
    TArray<FNiagaraCompilerTag> CompileTags;                                          // 0x0028 (size: 0x10)
    TArray<uint8> ScriptLiterals;                                                     // 0x0038 (size: 0x10)
    TArray<FNiagaraVariable> Attributes;                                              // 0x0048 (size: 0x10)
    FNiagaraScriptDataUsageInfo DataUsage;                                            // 0x0058 (size: 0x1)
    TArray<FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo;                 // 0x0060 (size: 0x10)
    TArray<FVMExternalFunctionBindingInfo> CalledVMExternalFunctions;                 // 0x0070 (size: 0x10)
    TArray<FNiagaraDataSetID> ReadDataSets;                                           // 0x0090 (size: 0x10)
    TArray<FNiagaraDataSetProperties> WriteDataSets;                                  // 0x00A0 (size: 0x10)
    TArray<FNiagaraStatScope> StatScopes;                                             // 0x00B0 (size: 0x10)
    TArray<FNiagaraDataInterfaceGPUParamInfo> DIParamInfo;                            // 0x00C0 (size: 0x10)
    ENiagaraScriptCompileStatus LastCompileStatus;                                    // 0x00D0 (size: 0x1)
    TArray<FSimulationStageMetaData> SimulationStageMetaData;                         // 0x00D8 (size: 0x10)
    uint8 bReadsSignificanceIndex;                                                    // 0x00E8 (size: 0x1)
    uint8 bNeedsGPUContextInit;                                                       // 0x00E8 (size: 0x1)

}; // Size: 0xF0

struct FNiagaraVMExecutableDataId
{
    FGuid CompilerVersionID;                                                          // 0x0000 (size: 0x10)
    ENiagaraScriptUsage ScriptUsageType;                                              // 0x0010 (size: 0x1)
    FGuid ScriptUsageTypeID;                                                          // 0x0014 (size: 0x10)
    uint8 bUsesRapidIterationParams;                                                  // 0x0024 (size: 0x1)
    uint8 bInterpolatedSpawn;                                                         // 0x0024 (size: 0x1)
    uint8 bRequiresPersistentIDs;                                                     // 0x0024 (size: 0x1)
    FGuid BaseScriptID;                                                               // 0x0028 (size: 0x10)
    FNiagaraCompileHash BaseScriptCompileHash;                                        // 0x0038 (size: 0x10)
    FGuid ScriptVersionID;                                                            // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FNiagaraVariable : public FNiagaraVariableBase
{
    TArray<uint8> VarData;                                                            // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FNiagaraVariableAttributeBinding
{
    FNiagaraVariableBase ParamMapVariable;                                            // 0x0000 (size: 0xC)
    FNiagaraVariable DataSetVariable;                                                 // 0x0010 (size: 0x20)
    FNiagaraVariable RootVariable;                                                    // 0x0030 (size: 0x20)
    TEnumAsByte<ENiagaraBindingSource> BindingSourceMode;                             // 0x0050 (size: 0x1)
    uint8 bBindingExistsOnSource;                                                     // 0x0054 (size: 0x1)
    uint8 bIsCachedParticleValue;                                                     // 0x0054 (size: 0x1)

}; // Size: 0x58

struct FNiagaraVariableBase
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FNiagaraTypeDefinitionHandle TypeDefHandle;                                       // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FNiagaraVariableDataInterfaceBinding
{
    FNiagaraVariable BoundVariable;                                                   // 0x0000 (size: 0x20)

}; // Size: 0x20

struct FNiagaraVariableInfo
{
    FNiagaraVariable Variable;                                                        // 0x0000 (size: 0x20)
    FText Definition;                                                                 // 0x0020 (size: 0x18)
    class UNiagaraDataInterface* DataInterface;                                       // 0x0038 (size: 0x8)

}; // Size: 0x40

struct FNiagaraVariableLayoutInfo
{
    uint32 FloatComponentStart;                                                       // 0x0000 (size: 0x4)
    uint32 Int32ComponentStart;                                                       // 0x0004 (size: 0x4)
    uint32 HalfComponentStart;                                                        // 0x0008 (size: 0x4)
    FNiagaraTypeLayoutInfo LayoutInfo;                                                // 0x0010 (size: 0x60)

}; // Size: 0x70

struct FNiagaraVariableMetaData
{
    FText Description;                                                                // 0x0000 (size: 0x18)
    FText CategoryName;                                                               // 0x0018 (size: 0x18)
    bool bAdvancedDisplay;                                                            // 0x0030 (size: 0x1)
    int32 EditorSortPriority;                                                         // 0x0034 (size: 0x4)
    bool bInlineEditConditionToggle;                                                  // 0x0038 (size: 0x1)
    FNiagaraInputConditionMetadata EditCondition;                                     // 0x0040 (size: 0x18)
    FNiagaraInputConditionMetadata VisibleCondition;                                  // 0x0058 (size: 0x18)
    TMap<class FName, class FString> PropertyMetaData;                                // 0x0070 (size: 0x50)
    FName ParentAttribute;                                                            // 0x00C0 (size: 0x8)
    FGuid VariableGuid;                                                               // 0x00C8 (size: 0x10)
    bool bIsStaticSwitch;                                                             // 0x00D8 (size: 0x1)
    int32 StaticSwitchDefaultValue;                                                   // 0x00DC (size: 0x4)

}; // Size: 0xE0

struct FNiagaraVariableWithOffset : public FNiagaraVariableBase
{
    int32 Offset;                                                                     // 0x000C (size: 0x4)

}; // Size: 0x10

struct FNiagaraVariant
{
    class UObject* Object;                                                            // 0x0000 (size: 0x8)
    class UNiagaraDataInterface* DataInterface;                                       // 0x0008 (size: 0x8)
    TArray<uint8> Bytes;                                                              // 0x0010 (size: 0x10)
    ENiagaraVariantMode CurrentMode;                                                  // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FNiagaraWildcard
{
}; // Size: 0x1

struct FNiagaraWorldManagerTickFunction : public FTickFunction
{
}; // Size: 0x30

struct FParameterDefinitionsSubscription
{
}; // Size: 0x1

struct FVMExternalFunctionBindingInfo
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FName OwnerName;                                                                  // 0x0008 (size: 0x8)
    TArray<bool> InputParamLocations;                                                 // 0x0010 (size: 0x10)
    int32 NumOutputs;                                                                 // 0x0020 (size: 0x4)
    TArray<FVMFunctionSpecifier> FunctionSpecifiers;                                  // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FVMFunctionSpecifier
{
    FName Key;                                                                        // 0x0000 (size: 0x8)
    FName Value;                                                                      // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FVersionedNiagaraScriptData
{
}; // Size: 0x1

class ANiagaraActor : public AActor
{
    class UNiagaraComponent* NiagaraComponent;                                        // 0x0220 (size: 0x8)
    uint8 bDestroyOnSystemFinish;                                                     // 0x0228 (size: 0x1)

    void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);
    void OnNiagaraSystemFinished(class UNiagaraComponent* FinishedComponent);
}; // Size: 0x230

class ANiagaraPerfBaselineActor : public AActor
{
    class UNiagaraBaselineController* Controller;                                     // 0x0220 (size: 0x8)
    class UTextRenderComponent* Label;                                                // 0x0228 (size: 0x8)

}; // Size: 0x230

class ANiagaraPreviewBase : public AActor
{

    void SetSystem(class UNiagaraSystem* InSystem);
    void SetLabelText(const FText& InXAxisText, const FText& InYAxisText);
}; // Size: 0x220

class ANiagaraPreviewGrid : public AActor
{
    class UNiagaraSystem* System;                                                     // 0x0220 (size: 0x8)
    ENiagaraPreviewGridResetMode ResetMode;                                           // 0x0228 (size: 0x1)
    class UNiagaraPreviewAxis* PreviewAxisX;                                          // 0x0230 (size: 0x8)
    class UNiagaraPreviewAxis* PreviewAxisY;                                          // 0x0238 (size: 0x8)
    TSubclassOf<class ANiagaraPreviewBase> PreviewClass;                              // 0x0240 (size: 0x8)
    float SpacingX;                                                                   // 0x0248 (size: 0x4)
    float SpacingY;                                                                   // 0x024C (size: 0x4)
    int32 NumX;                                                                       // 0x0250 (size: 0x4)
    int32 NumY;                                                                       // 0x0254 (size: 0x4)
    TArray<class UChildActorComponent*> PreviewComponents;                            // 0x0258 (size: 0x10)

    void SetPaused(bool bPaused);
    void GetPreviews(TArray<class UNiagaraComponent*>& OutPreviews);
    void DeactivatePreviews();
    void ActivatePreviews(bool bReset);
}; // Size: 0x270

class INiagaraParticleCallbackHandler : public IInterface
{

    void ReceiveParticleData(const TArray<FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem);
}; // Size: 0x28

class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{
}; // Size: 0xC8

class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
}; // Size: 0xC8

class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{
}; // Size: 0xC8

class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{
}; // Size: 0xC8

class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{
    FNiagaraVariable Parameter;                                                       // 0x00A0 (size: 0x20)

}; // Size: 0xC0

class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{
    ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior;                     // 0x00E8 (size: 0x4)
    ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior;               // 0x00EC (size: 0x4)
    ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior;                         // 0x00F0 (size: 0x4)
    ENiagaraAgeUpdateMode AgeUpdateMode;                                              // 0x00F4 (size: 0x1)

}; // Size: 0xF8

class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{
}; // Size: 0xA8

class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x0090 (size: 0x10)

}; // Size: 0xA0

class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
    int32 ChannelsUsed;                                                               // 0x00C8 (size: 0x4)

}; // Size: 0xD0

class UNiagaraBakerSettings : public UObject
{
    float StartSeconds;                                                               // 0x0028 (size: 0x4)
    float DurationSeconds;                                                            // 0x002C (size: 0x4)
    int32 FramesPerSecond;                                                            // 0x0030 (size: 0x4)
    uint8 bPreviewLooping;                                                            // 0x0034 (size: 0x1)
    FIntPoint FramesPerDimension;                                                     // 0x0038 (size: 0x8)
    TArray<FNiagaraBakerTextureSettings> OutputTextures;                              // 0x0040 (size: 0x10)
    ENiagaraBakerViewMode CameraViewportMode;                                         // 0x0050 (size: 0x4)
    FVector CameraViewportLocation;                                                   // 0x0054 (size: 0x54)
    FRotator CameraViewportRotation;                                                  // 0x00A8 (size: 0x54)
    float CameraOrbitDistance;                                                        // 0x00FC (size: 0x4)
    float CameraFOV;                                                                  // 0x0100 (size: 0x4)
    float CameraOrthoWidth;                                                           // 0x0104 (size: 0x4)
    uint8 bUseCameraAspectRatio;                                                      // 0x0108 (size: 0x1)
    float CameraAspectRatio;                                                          // 0x010C (size: 0x4)
    uint8 bRenderComponentOnly;                                                       // 0x0110 (size: 0x1)

}; // Size: 0x118

class UNiagaraBaselineController : public UObject
{
    float TestDuration;                                                               // 0x0028 (size: 0x4)
    class UNiagaraEffectType* EffectType;                                             // 0x0030 (size: 0x8)
    class ANiagaraPerfBaselineActor* Owner;                                           // 0x0038 (size: 0x8)
    TSoftObjectPtr<UNiagaraSystem> System;                                            // 0x0040 (size: 0x28)

    bool OnTickTest();
    void OnOwnerTick(float DeltaTime);
    void OnEndTest(FNiagaraPerfBaselineStats Stats);
    void OnBeginTest();
    class UNiagaraSystem* GetSystem();
}; // Size: 0x68

class UNiagaraBaselineController_Basic : public UNiagaraBaselineController
{
    int32 NumInstances;                                                               // 0x0068 (size: 0x4)
    TArray<class UNiagaraComponent*> SpawnedComponents;                               // 0x0070 (size: 0x10)

}; // Size: 0x80

class UNiagaraComponent : public UFXSystemComponent
{
    class UNiagaraSystem* Asset;                                                      // 0x0450 (size: 0x8)
    ENiagaraTickBehavior TickBehavior;                                                // 0x0458 (size: 0x1)
    int32 RandomSeedOffset;                                                           // 0x045C (size: 0x4)
    FNiagaraUserRedirectionParameterStore OverrideParameters;                         // 0x0460 (size: 0xC8)
    uint8 bForceSolo;                                                                 // 0x0528 (size: 0x1)
    uint8 bEnableGpuComputeDebug;                                                     // 0x0528 (size: 0x1)
    uint8 bAutoDestroy;                                                               // 0x0558 (size: 0x1)
    uint8 bRenderingEnabled;                                                          // 0x0558 (size: 0x1)
    uint8 bAutoManageAttachment;                                                      // 0x0558 (size: 0x1)
    uint8 bAutoAttachWeldSimulatedBodies;                                             // 0x0558 (size: 0x1)
    float MaxTimeBeforeForceUpdateTransform;                                          // 0x055C (size: 0x4)
    TArray<FNiagaraMaterialOverride> EmitterMaterials;                                // 0x0560 (size: 0x10)
    FNiagaraComponentOnSystemFinished OnSystemFinished;                               // 0x0578 (size: 0x10)
    void OnNiagaraSystemFinished(class UNiagaraComponent* PSystem);
    TWeakObjectPtr<class USceneComponent> AutoAttachParent;                           // 0x0588 (size: 0x8)
    FName AutoAttachSocketName;                                                       // 0x0590 (size: 0x8)
    EAttachmentRule AutoAttachLocationRule;                                           // 0x0598 (size: 0x1)
    EAttachmentRule AutoAttachRotationRule;                                           // 0x0599 (size: 0x1)
    EAttachmentRule AutoAttachScaleRule;                                              // 0x059A (size: 0x1)

    void SetVariableVec4(FName InVariableName, const FVector4& InValue);
    void SetVariableVec3(FName InVariableName, FVector InValue);
    void SetVariableVec2(FName InVariableName, FVector2D InValue);
    void SetVariableTextureRenderTarget(FName InVariableName, class UTextureRenderTarget* TextureRenderTarget);
    void SetVariableQuat(FName InVariableName, const FQuat& InValue);
    void SetVariableObject(FName InVariableName, class UObject* Object);
    void SetVariableMaterial(FName InVariableName, class UMaterialInterface* Object);
    void SetVariableLinearColor(FName InVariableName, const FLinearColor& InValue);
    void SetVariableInt(FName InVariableName, int32 InValue);
    void SetVariableFloat(FName InVariableName, float InValue);
    void SetVariableBool(FName InVariableName, bool InValue);
    void SetVariableActor(FName InVariableName, class AActor* Actor);
    void SetTickBehavior(ENiagaraTickBehavior NewTickBehavior);
    void SetSeekDelta(float InSeekDelta);
    void SetRenderingEnabled(bool bInRenderingEnabled);
    void SetRandomSeedOffset(int32 NewRandomSeedOffset);
    void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance);
    void SetPaused(bool bInPaused);
    void SetNiagaraVariableVec4(FString InVariableName, const FVector4& InValue);
    void SetNiagaraVariableVec3(FString InVariableName, FVector InValue);
    void SetNiagaraVariableVec2(FString InVariableName, FVector2D InValue);
    void SetNiagaraVariableQuat(FString InVariableName, const FQuat& InValue);
    void SetNiagaraVariableObject(FString InVariableName, class UObject* Object);
    void SetNiagaraVariableLinearColor(FString InVariableName, const FLinearColor& InValue);
    void SetNiagaraVariableInt(FString InVariableName, int32 InValue);
    void SetNiagaraVariableFloat(FString InVariableName, float InValue);
    void SetNiagaraVariableBool(FString InVariableName, bool InValue);
    void SetNiagaraVariableActor(FString InVariableName, class AActor* Actor);
    void SetMaxSimTime(float InMaxTime);
    void SetLockDesiredAgeDeltaTimeToSeekDelta(bool block);
    void SetGpuComputeDebug(bool bEnableDebug);
    void SetForceSolo(bool bInForceSolo);
    void SetDesiredAge(float InDesiredAge);
    void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);
    void SetAutoDestroy(bool bInAutoDestroy);
    void SetAsset(class UNiagaraSystem* InAsset, bool bResetExistingOverrideParameters);
    void SetAllowScalability(bool bAllow);
    void SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode);
    void SeekToDesiredAge(float InDesiredAge);
    void ResetSystem();
    void ReinitializeSystem();
    bool IsPaused();
    void InitForPerformanceBaseline();
    ENiagaraTickBehavior GetTickBehavior();
    float GetSeekDelta();
    int32 GetRandomSeedOffset();
    bool GetPreviewLODDistanceEnabled();
    float GetPreviewLODDistance();
    TArray<FVector> GetNiagaraParticleValueVec3_DebugOnly(FString InEmitterName, FString InValueName);
    TArray<float> GetNiagaraParticleValues_DebugOnly(FString InEmitterName, FString InValueName);
    TArray<FVector> GetNiagaraParticlePositions_DebugOnly(FString InEmitterName);
    float GetMaxSimTime();
    bool GetLockDesiredAgeDeltaTimeToSeekDelta();
    bool GetForceSolo();
    float GetDesiredAge();
    class UNiagaraDataInterface* GetDataInterface(FString Name);
    class UNiagaraSystem* GetAsset();
    ENiagaraAgeUpdateMode GetAgeUpdateMode();
    void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);
    void AdvanceSimulation(int32 TickCount, float TickDeltaSeconds);
}; // Size: 0x600

class UNiagaraComponentPool : public UObject
{
    TMap<class UNiagaraSystem*, class FNCPool> WorldParticleSystemPools;              // 0x0028 (size: 0x50)

}; // Size: 0x80

class UNiagaraComponentRendererProperties : public UNiagaraRendererProperties
{
    TSubclassOf<class USceneComponent> ComponentType;                                 // 0x0078 (size: 0x8)
    uint32 ComponentCountLimit;                                                       // 0x0080 (size: 0x4)
    FNiagaraVariableAttributeBinding EnabledBinding;                                  // 0x0088 (size: 0x58)
    FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;                    // 0x00E0 (size: 0x58)
    bool bAssignComponentsOnParticleID;                                               // 0x0138 (size: 0x1)
    bool bOnlyCreateComponentsOnParticleSpawn;                                        // 0x0139 (size: 0x1)
    int32 RendererVisibility;                                                         // 0x013C (size: 0x4)
    class USceneComponent* TemplateComponent;                                         // 0x0140 (size: 0x8)
    TArray<FNiagaraComponentPropertyBinding> PropertyBindings;                        // 0x0148 (size: 0x10)

}; // Size: 0x1B0

class UNiagaraComponentSettings : public UObject
{
    TSet<FName> SuppressActivationList;                                               // 0x0028 (size: 0x50)
    TSet<FName> ForceAutoPooolingList;                                                // 0x0078 (size: 0x50)
    TSet<FNiagaraEmitterNameSettingsRef> SuppressEmitterList;                         // 0x00C8 (size: 0x50)

}; // Size: 0x118

class UNiagaraConvertInPlaceUtilityBase : public UObject
{
}; // Size: 0x28

class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{
}; // Size: 0x38

class UNiagaraDataInterface2DArrayTexture : public UNiagaraDataInterface
{
    class UTexture2DArray* Texture;                                                   // 0x0038 (size: 0x8)

}; // Size: 0x50

class UNiagaraDataInterfaceArray : public UNiagaraDataInterface
{
    int32 MaxElements;                                                                // 0x0040 (size: 0x4)

}; // Size: 0x50

class UNiagaraDataInterfaceArrayBool : public UNiagaraDataInterfaceArray
{
    TArray<bool> BoolData;                                                            // 0x0050 (size: 0x10)

}; // Size: 0x60

class UNiagaraDataInterfaceArrayColor : public UNiagaraDataInterfaceArray
{
    TArray<FLinearColor> ColorData;                                                   // 0x0050 (size: 0x10)

}; // Size: 0x60

class UNiagaraDataInterfaceArrayFloat : public UNiagaraDataInterfaceArray
{
    TArray<float> FloatData;                                                          // 0x0050 (size: 0x10)

}; // Size: 0x60

class UNiagaraDataInterfaceArrayFloat2 : public UNiagaraDataInterfaceArray
{
    TArray<FVector2D> FloatData;                                                      // 0x0050 (size: 0x10)

}; // Size: 0x60

class UNiagaraDataInterfaceArrayFloat3 : public UNiagaraDataInterfaceArray
{
    TArray<FVector> FloatData;                                                        // 0x0050 (size: 0x10)

}; // Size: 0x60

class UNiagaraDataInterfaceArrayFloat4 : public UNiagaraDataInterfaceArray
{
    TArray<FVector4> FloatData;                                                       // 0x0050 (size: 0x10)

}; // Size: 0x60

class UNiagaraDataInterfaceArrayFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, const FVector& Value, bool bSizeToFit);
    void SetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, const FVector4& Value, bool bSizeToFit);
    void SetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<FVector4>& ArrayData);
    void SetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, const FVector2D& Value, bool bSizeToFit);
    void SetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<FVector2D>& ArrayData);
    void SetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<FVector>& ArrayData);
    void SetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, const FQuat& Value, bool bSizeToFit);
    void SetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<FQuat>& ArrayData);
    void SetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, int32 Value, bool bSizeToFit);
    void SetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<int32>& ArrayData);
    void SetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, float Value, bool bSizeToFit);
    void SetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<float>& ArrayData);
    void SetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, const FLinearColor& Value, bool bSizeToFit);
    void SetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<FLinearColor>& ArrayData);
    void SetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, const bool& Value, bool bSizeToFit);
    void SetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<bool>& ArrayData);
    FVector GetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index);
    FVector4 GetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index);
    TArray<FVector4> GetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, FName OverrideName);
    FVector2D GetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index);
    TArray<FVector2D> GetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, FName OverrideName);
    TArray<FVector> GetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, FName OverrideName);
    FQuat GetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index);
    TArray<FQuat> GetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, FName OverrideName);
    int32 GetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index);
    TArray<int32> GetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, FName OverrideName);
    float GetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index);
    TArray<float> GetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, FName OverrideName);
    FLinearColor GetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index);
    TArray<FLinearColor> GetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, FName OverrideName);
    bool GetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index);
    TArray<bool> GetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, FName OverrideName);
}; // Size: 0x28

class UNiagaraDataInterfaceArrayInt32 : public UNiagaraDataInterfaceArray
{
    TArray<int32> IntData;                                                            // 0x0050 (size: 0x10)

}; // Size: 0x60

class UNiagaraDataInterfaceArrayQuat : public UNiagaraDataInterfaceArray
{
    TArray<FQuat> QuatData;                                                           // 0x0050 (size: 0x10)

}; // Size: 0x60

class UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface
{
    class USoundSubmix* Submix;                                                       // 0x0038 (size: 0x8)
    int32 Resolution;                                                                 // 0x0040 (size: 0x4)
    float ScopeInMilliseconds;                                                        // 0x0044 (size: 0x4)

}; // Size: 0x48

class UNiagaraDataInterfaceAudioPlayer : public UNiagaraDataInterface
{
    class USoundBase* SoundToPlay;                                                    // 0x0038 (size: 0x8)
    class USoundAttenuation* Attenuation;                                             // 0x0040 (size: 0x8)
    class USoundConcurrency* Concurrency;                                             // 0x0048 (size: 0x8)
    TArray<FName> ParameterNames;                                                     // 0x0050 (size: 0x10)
    bool bLimitPlaysPerTick;                                                          // 0x0060 (size: 0x1)
    int32 MaxPlaysPerTick;                                                            // 0x0064 (size: 0x4)
    bool bStopWhenComponentIsDestroyed;                                               // 0x0068 (size: 0x1)

}; // Size: 0x70

class UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix
{
    int32 Resolution;                                                                 // 0x0040 (size: 0x4)
    float MinimumFrequency;                                                           // 0x0044 (size: 0x4)
    float MaximumFrequency;                                                           // 0x0048 (size: 0x4)
    float NoiseFloorDb;                                                               // 0x004C (size: 0x4)

}; // Size: 0x50

class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface
{
    class USoundSubmix* Submix;                                                       // 0x0038 (size: 0x8)

}; // Size: 0x40

class UNiagaraDataInterfaceCamera : public UNiagaraDataInterface
{
    int32 PlayerControllerIndex;                                                      // 0x0038 (size: 0x4)
    bool bRequireCurrentFrameData;                                                    // 0x003C (size: 0x1)

}; // Size: 0x40

class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{
}; // Size: 0x48

class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{
    FRichCurve RedCurve;                                                              // 0x0070 (size: 0x80)
    FRichCurve GreenCurve;                                                            // 0x00F0 (size: 0x80)
    FRichCurve BlueCurve;                                                             // 0x0170 (size: 0x80)
    FRichCurve AlphaCurve;                                                            // 0x01F0 (size: 0x80)

}; // Size: 0x270

class UNiagaraDataInterfaceCubeTexture : public UNiagaraDataInterface
{
    class UTextureCube* Texture;                                                      // 0x0038 (size: 0x8)

}; // Size: 0x48

class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{
    uint32 Seed;                                                                      // 0x0038 (size: 0x4)

}; // Size: 0x48

class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{
    FRichCurve Curve;                                                                 // 0x0070 (size: 0x80)

}; // Size: 0xF0

class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{
    TArray<float> ShaderLUT;                                                          // 0x0038 (size: 0x10)
    float LUTMinTime;                                                                 // 0x0048 (size: 0x4)
    float LUTMaxTime;                                                                 // 0x004C (size: 0x4)
    float LUTInvTimeRange;                                                            // 0x0050 (size: 0x4)
    float LUTNumSamplesMinusOne;                                                      // 0x0054 (size: 0x4)
    uint8 bUseLUT;                                                                    // 0x0058 (size: 0x1)
    uint8 bExposeCurve;                                                               // 0x0058 (size: 0x1)
    FName ExposedName;                                                                // 0x005C (size: 0x8)
    class UTexture2D* ExposedTexture;                                                 // 0x0068 (size: 0x8)

}; // Size: 0x70

class UNiagaraDataInterfaceDebugDraw : public UNiagaraDataInterface
{
}; // Size: 0x38

class UNiagaraDataInterfaceExport : public UNiagaraDataInterface
{
    FNiagaraUserParameterBinding CallbackHandlerParameter;                            // 0x0038 (size: 0x20)
    ENDIExport_GPUAllocationMode GPUAllocationMode;                                   // 0x0058 (size: 0x1)
    int32 GPUAllocationFixedSize;                                                     // 0x005C (size: 0x4)
    float GPUAllocationPerParticleSize;                                               // 0x0060 (size: 0x4)

}; // Size: 0x68

class UNiagaraDataInterfaceGBuffer : public UNiagaraDataInterface
{
}; // Size: 0x38

class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
{
    int32 NumCellsX;                                                                  // 0x00D8 (size: 0x4)
    int32 NumCellsY;                                                                  // 0x00DC (size: 0x4)
    int32 NumCellsMaxAxis;                                                            // 0x00E0 (size: 0x4)
    int32 NumAttributes;                                                              // 0x00E4 (size: 0x4)
    bool SetGridFromMaxAxis;                                                          // 0x00E8 (size: 0x1)
    FVector2D WorldBBoxSize;                                                          // 0x00EC (size: 0x8)

}; // Size: 0xF8

class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
{
    FNiagaraUserParameterBinding RenderTargetUserParameter;                           // 0x00F8 (size: 0x20)
    ENiagaraGpuBufferFormat OverrideBufferFormat;                                     // 0x0118 (size: 0x1)
    uint8 bOverrideFormat;                                                            // 0x0119 (size: 0x1)
    TMap<uint64, UTextureRenderTarget2DArray*> ManagedRenderTargets;                  // 0x0170 (size: 0x50)

    void GetTextureSize(const class UNiagaraComponent* Component, int32& SizeX, int32& SizeY);
    void GetRawTextureSize(const class UNiagaraComponent* Component, int32& SizeX, int32& SizeY);
    bool FillTexture2D(const class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32 AttributeIndex);
    bool FillRawTexture2D(const class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32& TilesX, int32& TilesY);
}; // Size: 0x1C0

class UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2D
{
    FString EmitterName;                                                              // 0x00F8 (size: 0x10)
    FString DIName;                                                                   // 0x0108 (size: 0x10)

}; // Size: 0x168

class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
{
    FIntVector NumCells;                                                              // 0x00D8 (size: 0xC)
    float CellSize;                                                                   // 0x00E4 (size: 0x4)
    int32 NumCellsMaxAxis;                                                            // 0x00E8 (size: 0x4)
    ESetResolutionMethod SetResolutionMethod;                                         // 0x00EC (size: 0x4)
    FVector WorldBBoxSize;                                                            // 0x00F0 (size: 0xC)

}; // Size: 0x100

class UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D
{
    int32 NumAttributes;                                                              // 0x0100 (size: 0x4)
    FNiagaraUserParameterBinding RenderTargetUserParameter;                           // 0x0108 (size: 0x20)
    ENiagaraGpuBufferFormat OverrideBufferFormat;                                     // 0x0128 (size: 0x1)
    uint8 bOverrideFormat;                                                            // 0x0129 (size: 0x1)

    void GetTextureSize(const class UNiagaraComponent* Component, int32& SizeX, int32& SizeY, int32& SizeZ);
    void GetRawTextureSize(const class UNiagaraComponent* Component, int32& SizeX, int32& SizeY, int32& SizeZ);
    bool FillVolumeTexture(const class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32 AttributeIndex);
    bool FillRawVolumeTexture(const class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32& TilesX, int32& TilesY, int32& TileZ);
}; // Size: 0x180

class UNiagaraDataInterfaceIntRenderTarget2D : public UNiagaraDataInterfaceRWBase
{
    FIntPoint Size;                                                                   // 0x00D8 (size: 0x8)
    FNiagaraUserParameterBinding RenderTargetUserParameter;                           // 0x00E0 (size: 0x20)
    TMap<uint64, UTextureRenderTarget2D*> ManagedRenderTargets;                       // 0x0100 (size: 0x50)

}; // Size: 0x150

class UNiagaraDataInterfaceLandscape : public UNiagaraDataInterface
{
    class AActor* SourceLandscape;                                                    // 0x0038 (size: 0x8)
    ENDILandscape_SourceMode SourceMode;                                              // 0x0040 (size: 0x1)
    TArray<class UPhysicalMaterial*> PhysicalMaterials;                               // 0x0048 (size: 0x10)

}; // Size: 0x58

class UNiagaraDataInterfaceMeshRendererInfo : public UNiagaraDataInterface
{
    class UNiagaraMeshRendererProperties* MeshRenderer;                               // 0x0038 (size: 0x8)

}; // Size: 0x50

class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
{
    uint32 MaxNeighborsPerCell;                                                       // 0x0100 (size: 0x4)

}; // Size: 0x108

class UNiagaraDataInterfaceOcclusion : public UNiagaraDataInterface
{
}; // Size: 0x38

class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterfaceRWBase
{
    FString EmitterName;                                                              // 0x00D8 (size: 0x10)

}; // Size: 0xE8

class UNiagaraDataInterfacePlatformSet : public UNiagaraDataInterface
{
    FNiagaraPlatformSet Platforms;                                                    // 0x0038 (size: 0x30)

}; // Size: 0x68

class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
{
    TSet<int32> OutputShaderStages;                                                   // 0x0038 (size: 0x50)
    TSet<int32> IterationShaderStages;                                                // 0x0088 (size: 0x50)

}; // Size: 0xD8

class UNiagaraDataInterfaceRenderTarget2D : public UNiagaraDataInterfaceRWBase
{
    FIntPoint Size;                                                                   // 0x00D8 (size: 0x8)
    ENiagaraMipMapGeneration MipMapGeneration;                                        // 0x00E0 (size: 0x1)
    TEnumAsByte<ETextureRenderTargetFormat> OverrideRenderTargetFormat;               // 0x00E1 (size: 0x1)
    uint8 bInheritUserParameterSettings;                                              // 0x00E2 (size: 0x1)
    uint8 bOverrideFormat;                                                            // 0x00E2 (size: 0x1)
    FNiagaraUserParameterBinding RenderTargetUserParameter;                           // 0x00E8 (size: 0x20)
    TMap<uint64, UTextureRenderTarget2D*> ManagedRenderTargets;                       // 0x0158 (size: 0x50)

}; // Size: 0x1A8

class UNiagaraDataInterfaceRenderTarget2DArray : public UNiagaraDataInterfaceRWBase
{
    FIntVector Size;                                                                  // 0x00D8 (size: 0xC)
    TEnumAsByte<ETextureRenderTargetFormat> OverrideRenderTargetFormat;               // 0x00E4 (size: 0x1)
    uint8 bInheritUserParameterSettings;                                              // 0x00E5 (size: 0x1)
    uint8 bOverrideFormat;                                                            // 0x00E5 (size: 0x1)
    FNiagaraUserParameterBinding RenderTargetUserParameter;                           // 0x00E8 (size: 0x20)
    TMap<uint64, UTextureRenderTarget2DArray*> ManagedRenderTargets;                  // 0x0108 (size: 0x50)

}; // Size: 0x158

class UNiagaraDataInterfaceRenderTargetCube : public UNiagaraDataInterfaceRWBase
{
    int32 Size;                                                                       // 0x00D8 (size: 0x4)
    TEnumAsByte<ETextureRenderTargetFormat> OverrideRenderTargetFormat;               // 0x00DC (size: 0x1)
    uint8 bInheritUserParameterSettings;                                              // 0x00DD (size: 0x1)
    uint8 bOverrideFormat;                                                            // 0x00DD (size: 0x1)
    FNiagaraUserParameterBinding RenderTargetUserParameter;                           // 0x00E0 (size: 0x20)
    TMap<uint64, UTextureRenderTargetCube*> ManagedRenderTargets;                     // 0x0100 (size: 0x50)

}; // Size: 0x150

class UNiagaraDataInterfaceRenderTargetVolume : public UNiagaraDataInterfaceRWBase
{
    FIntVector Size;                                                                  // 0x00D8 (size: 0xC)
    TEnumAsByte<ETextureRenderTargetFormat> OverrideRenderTargetFormat;               // 0x00E4 (size: 0x1)
    uint8 bInheritUserParameterSettings;                                              // 0x00E5 (size: 0x1)
    uint8 bOverrideFormat;                                                            // 0x00E5 (size: 0x1)
    FNiagaraUserParameterBinding RenderTargetUserParameter;                           // 0x00E8 (size: 0x20)
    TMap<uint64, UTextureRenderTargetVolume*> ManagedRenderTargets;                   // 0x0108 (size: 0x50)

}; // Size: 0x158

class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface
{
}; // Size: 0x38

class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{
    ENDISkeletalMesh_SourceMode SourceMode;                                           // 0x0038 (size: 0x1)
    class AActor* Source;                                                             // 0x0040 (size: 0x8)
    FNiagaraUserParameterBinding MeshUserParameter;                                   // 0x0048 (size: 0x20)
    class USkeletalMeshComponent* SourceComponent;                                    // 0x0068 (size: 0x8)
    ENDISkeletalMesh_SkinningMode SkinningMode;                                       // 0x0070 (size: 0x1)
    TArray<FName> SamplingRegions;                                                    // 0x0078 (size: 0x10)
    int32 WholeMeshLOD;                                                               // 0x0088 (size: 0x4)
    TArray<FName> FilteredBones;                                                      // 0x0090 (size: 0x10)
    TArray<FName> FilteredSockets;                                                    // 0x00A0 (size: 0x10)
    FName ExcludeBoneName;                                                            // 0x00B0 (size: 0x8)
    uint8 bExcludeBone;                                                               // 0x00B8 (size: 0x1)
    int32 UvSetIndex;                                                                 // 0x00BC (size: 0x4)
    bool bRequireCurrentFrameData;                                                    // 0x00C0 (size: 0x1)

}; // Size: 0xC8

class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{
    class AActor* Source;                                                             // 0x0038 (size: 0x8)
    FNiagaraUserParameterBinding SplineUserParameter;                                 // 0x0040 (size: 0x20)

}; // Size: 0x60

class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{
    ENDIStaticMesh_SourceMode SourceMode;                                             // 0x0038 (size: 0x1)
    class UStaticMesh* DefaultMesh;                                                   // 0x0040 (size: 0x8)
    class AActor* Source;                                                             // 0x0048 (size: 0x8)
    class UStaticMeshComponent* SourceComponent;                                      // 0x0050 (size: 0x8)
    FNDIStaticMeshSectionFilter SectionFilter;                                        // 0x0058 (size: 0x10)
    bool bUsePhysicsBodyVelocity;                                                     // 0x0068 (size: 0x1)
    TArray<FName> FilteredSockets;                                                    // 0x0070 (size: 0x10)

}; // Size: 0x88

class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{
    class UTexture* Texture;                                                          // 0x0038 (size: 0x8)

}; // Size: 0x48

class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{
    FRichCurve XCurve;                                                                // 0x0070 (size: 0x80)
    FRichCurve YCurve;                                                                // 0x00F0 (size: 0x80)

}; // Size: 0x170

class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{
    FRichCurve XCurve;                                                                // 0x0070 (size: 0x80)
    FRichCurve YCurve;                                                                // 0x00F0 (size: 0x80)
    FRichCurve ZCurve;                                                                // 0x0170 (size: 0x80)
    FRichCurve WCurve;                                                                // 0x01F0 (size: 0x80)

}; // Size: 0x270

class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{
    FRichCurve XCurve;                                                                // 0x0070 (size: 0x80)
    FRichCurve YCurve;                                                                // 0x00F0 (size: 0x80)
    FRichCurve ZCurve;                                                                // 0x0170 (size: 0x80)

}; // Size: 0x1F0

class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{
    class UVectorField* Field;                                                        // 0x0038 (size: 0x8)
    bool bTileX;                                                                      // 0x0040 (size: 0x1)
    bool bTileY;                                                                      // 0x0041 (size: 0x1)
    bool bTileZ;                                                                      // 0x0042 (size: 0x1)

}; // Size: 0x48

class UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface
{
    class UVolumeTexture* Texture;                                                    // 0x0038 (size: 0x8)

}; // Size: 0x50

class UNiagaraDebugHUDSettings : public UObject
{
    FNiagaraDebugHUDSettingsData Data;                                                // 0x0048 (size: 0xE0)

}; // Size: 0x128

class UNiagaraEditorDataBase : public UObject
{
}; // Size: 0x28

class UNiagaraEditorParametersAdapterBase : public UObject
{
}; // Size: 0x28

class UNiagaraEffectType : public UObject
{
    ENiagaraScalabilityUpdateFrequency UpdateFrequency;                               // 0x0028 (size: 0x4)
    ENiagaraCullReaction CullReaction;                                                // 0x002C (size: 0x4)
    class UNiagaraSignificanceHandler* SignificanceHandler;                           // 0x0030 (size: 0x8)
    TArray<FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings;         // 0x0038 (size: 0x10)
    FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings;                 // 0x0048 (size: 0x10)
    FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings;               // 0x0058 (size: 0x10)
    class UNiagaraBaselineController* PerformanceBaselineController;                  // 0x0070 (size: 0x8)
    FNiagaraPerfBaselineStats PerfBaselineStats;                                      // 0x0078 (size: 0x10)
    FGuid PerfBaselineVersion;                                                        // 0x0088 (size: 0x10)

}; // Size: 0x98

class UNiagaraEmitter : public UObject
{
    bool bLocalSpace;                                                                 // 0x0028 (size: 0x1)
    bool bDeterminism;                                                                // 0x0029 (size: 0x1)
    int32 RandomSeed;                                                                 // 0x002C (size: 0x4)
    EParticleAllocationMode AllocationMode;                                           // 0x0030 (size: 0x1)
    int32 PreAllocationCount;                                                         // 0x0034 (size: 0x4)
    FNiagaraEmitterScriptProperties UpdateScriptProps;                                // 0x0038 (size: 0x28)
    FNiagaraEmitterScriptProperties SpawnScriptProps;                                 // 0x0060 (size: 0x28)
    ENiagaraSimTarget SimTarget;                                                      // 0x0088 (size: 0x1)
    FBox FixedBounds;                                                                 // 0x008C (size: 0x1C)
    int32 MinDetailLevel;                                                             // 0x00A8 (size: 0x4)
    int32 MaxDetailLevel;                                                             // 0x00AC (size: 0x4)
    FNiagaraDetailsLevelScaleOverrides GlobalSpawnCountScaleOverrides;                // 0x00B0 (size: 0x14)
    FNiagaraPlatformSet Platforms;                                                    // 0x00C8 (size: 0x30)
    FNiagaraEmitterScalabilityOverrides ScalabilityOverrides;                         // 0x00F8 (size: 0x10)
    uint8 bInterpolatedSpawning;                                                      // 0x0108 (size: 0x1)
    uint8 bFixedBounds;                                                               // 0x0108 (size: 0x1)
    uint8 bUseMinDetailLevel;                                                         // 0x0108 (size: 0x1)
    uint8 bUseMaxDetailLevel;                                                         // 0x0108 (size: 0x1)
    uint8 bOverrideGlobalSpawnCountScale;                                             // 0x0108 (size: 0x1)
    uint8 bRequiresPersistentIDs;                                                     // 0x0108 (size: 0x1)
    uint8 bCombineEventSpawn;                                                         // 0x0108 (size: 0x1)
    float MaxDeltaTimePerTick;                                                        // 0x010C (size: 0x4)
    uint32 DefaultShaderStageIndex;                                                   // 0x0110 (size: 0x4)
    uint32 MaxUpdateIterations;                                                       // 0x0114 (size: 0x4)
    TSet<uint32> SpawnStages;                                                         // 0x0118 (size: 0x50)
    uint8 bSimulationStagesEnabled;                                                   // 0x0168 (size: 0x1)
    uint8 bDeprecatedShaderStagesEnabled;                                             // 0x0168 (size: 0x1)
    uint8 bLimitDeltaTime;                                                            // 0x0168 (size: 0x1)
    FString UniqueEmitterName;                                                        // 0x0170 (size: 0x10)
    TArray<class UNiagaraRendererProperties*> RendererProperties;                     // 0x0180 (size: 0x10)
    TArray<FNiagaraEventScriptProperties> EventHandlerScriptProps;                    // 0x0190 (size: 0x10)
    TArray<class UNiagaraSimulationStageBase*> SimulationStages;                      // 0x01A0 (size: 0x10)
    class UNiagaraScript* GPUComputeScript;                                           // 0x01B0 (size: 0x8)
    TArray<FName> SharedEventGeneratorIds;                                            // 0x01B8 (size: 0x10)

}; // Size: 0x2A0

class UNiagaraEventReceiverEmitterAction : public UObject
{
}; // Size: 0x28

class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{
    uint32 NumParticles;                                                              // 0x0028 (size: 0x4)

}; // Size: 0x30

class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{

    class UNiagaraComponent* SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);
    class UNiagaraComponent* SpawnSystemAtLocation(const class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);
    void SetVolumeTextureObject(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UVolumeTexture* Texture);
    void SetTextureObject(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UTexture* Texture);
    void SetTexture2DArrayObject(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UTexture2DArray* Texture);
    void SetSkeletalMeshDataInterfaceSamplingRegions(class UNiagaraComponent* NiagaraSystem, FString OverrideName, const TArray<FName>& SamplingRegions);
    void OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UStaticMeshComponent* StaticMeshComponent);
    void OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UStaticMesh* StaticMesh);
    void OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent);
    class UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection);
}; // Size: 0x28

class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{
    uint8 bUseInverseSquaredFalloff;                                                  // 0x0078 (size: 0x1)
    uint8 bAffectsTranslucency;                                                       // 0x0078 (size: 0x1)
    uint8 bAlphaScalesBrightness;                                                     // 0x0078 (size: 0x1)
    float RadiusScale;                                                                // 0x007C (size: 0x4)
    float DefaultExponent;                                                            // 0x0080 (size: 0x4)
    FVector ColorAdd;                                                                 // 0x0084 (size: 0xC)
    int32 RendererVisibility;                                                         // 0x0090 (size: 0x4)
    FNiagaraVariableAttributeBinding LightRenderingEnabledBinding;                    // 0x0098 (size: 0x58)
    FNiagaraVariableAttributeBinding LightExponentBinding;                            // 0x00F0 (size: 0x58)
    FNiagaraVariableAttributeBinding PositionBinding;                                 // 0x0148 (size: 0x58)
    FNiagaraVariableAttributeBinding ColorBinding;                                    // 0x01A0 (size: 0x58)
    FNiagaraVariableAttributeBinding RadiusBinding;                                   // 0x01F8 (size: 0x58)
    FNiagaraVariableAttributeBinding VolumetricScatteringBinding;                     // 0x0250 (size: 0x58)
    FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;                    // 0x02A8 (size: 0x58)

}; // Size: 0x330

class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{
    TArray<FNiagaraMeshRendererMeshProperties> Meshes;                                // 0x0078 (size: 0x10)
    ENiagaraRendererSourceDataMode SourceMode;                                        // 0x0088 (size: 0x1)
    ENiagaraSortMode SortMode;                                                        // 0x0089 (size: 0x1)
    uint8 bOverrideMaterials;                                                         // 0x008C (size: 0x1)
    uint8 bSortOnlyWhenTranslucent;                                                   // 0x008C (size: 0x1)
    uint8 bGpuLowLatencyTranslucency;                                                 // 0x008C (size: 0x1)
    uint8 bSubImageBlend;                                                             // 0x008C (size: 0x1)
    uint8 bEnableFrustumCulling;                                                      // 0x008C (size: 0x1)
    uint8 bEnableCameraDistanceCulling;                                               // 0x008C (size: 0x1)
    uint8 bEnableMeshFlipbook;                                                        // 0x008C (size: 0x1)
    TArray<FNiagaraMeshMaterialOverride> OverrideMaterials;                           // 0x0090 (size: 0x10)
    FVector2D SubImageSize;                                                           // 0x00A0 (size: 0x8)
    ENiagaraMeshFacingMode FacingMode;                                                // 0x00A8 (size: 0x1)
    uint8 bLockedAxisEnable;                                                          // 0x00AC (size: 0x1)
    FVector LockedAxis;                                                               // 0x00B0 (size: 0xC)
    ENiagaraMeshLockedAxisSpace LockedAxisSpace;                                      // 0x00BC (size: 0x1)
    float MinCameraDistance;                                                          // 0x00C0 (size: 0x4)
    float MaxCameraDistance;                                                          // 0x00C4 (size: 0x4)
    uint32 RendererVisibility;                                                        // 0x00C8 (size: 0x4)
    FNiagaraVariableAttributeBinding PositionBinding;                                 // 0x00D0 (size: 0x58)
    FNiagaraVariableAttributeBinding ColorBinding;                                    // 0x0128 (size: 0x58)
    FNiagaraVariableAttributeBinding VelocityBinding;                                 // 0x0180 (size: 0x58)
    FNiagaraVariableAttributeBinding MeshOrientationBinding;                          // 0x01D8 (size: 0x58)
    FNiagaraVariableAttributeBinding ScaleBinding;                                    // 0x0230 (size: 0x58)
    FNiagaraVariableAttributeBinding SubImageIndexBinding;                            // 0x0288 (size: 0x58)
    FNiagaraVariableAttributeBinding DynamicMaterialBinding;                          // 0x02E0 (size: 0x58)
    FNiagaraVariableAttributeBinding DynamicMaterial1Binding;                         // 0x0338 (size: 0x58)
    FNiagaraVariableAttributeBinding DynamicMaterial2Binding;                         // 0x0390 (size: 0x58)
    FNiagaraVariableAttributeBinding DynamicMaterial3Binding;                         // 0x03E8 (size: 0x58)
    FNiagaraVariableAttributeBinding MaterialRandomBinding;                           // 0x0440 (size: 0x58)
    FNiagaraVariableAttributeBinding CustomSortingBinding;                            // 0x0498 (size: 0x58)
    FNiagaraVariableAttributeBinding NormalizedAgeBinding;                            // 0x04F0 (size: 0x58)
    FNiagaraVariableAttributeBinding CameraOffsetBinding;                             // 0x0548 (size: 0x58)
    FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;                    // 0x05A0 (size: 0x58)
    FNiagaraVariableAttributeBinding MeshIndexBinding;                                // 0x05F8 (size: 0x58)
    TArray<FNiagaraMaterialAttributeBinding> MaterialParameterBindings;               // 0x0650 (size: 0x10)
    FNiagaraVariableAttributeBinding PrevPositionBinding;                             // 0x0660 (size: 0x58)
    FNiagaraVariableAttributeBinding PrevScaleBinding;                                // 0x06B8 (size: 0x58)
    FNiagaraVariableAttributeBinding PrevMeshOrientationBinding;                      // 0x0710 (size: 0x58)
    FNiagaraVariableAttributeBinding PrevCameraOffsetBinding;                         // 0x0768 (size: 0x58)
    FNiagaraVariableAttributeBinding PrevVelocityBinding;                             // 0x07C0 (size: 0x58)
    class UStaticMesh* ParticleMesh;                                                  // 0x0880 (size: 0x8)
    FVector PivotOffset;                                                              // 0x0888 (size: 0xC)
    ENiagaraMeshPivotOffsetSpace PivotOffsetSpace;                                    // 0x0894 (size: 0x1)

}; // Size: 0x898

class UNiagaraMessageDataBase : public UObject
{
}; // Size: 0x28

class UNiagaraParameterCollection : public UObject
{
    FName Namespace;                                                                  // 0x0028 (size: 0x8)
    TArray<FNiagaraVariable> Parameters;                                              // 0x0030 (size: 0x10)
    class UMaterialParameterCollection* SourceMaterialCollection;                     // 0x0040 (size: 0x8)
    class UNiagaraParameterCollectionInstance* DefaultInstance;                       // 0x0048 (size: 0x8)
    FGuid CompileId;                                                                  // 0x0050 (size: 0x10)

}; // Size: 0x60

class UNiagaraParameterCollectionInstance : public UObject
{
    class UNiagaraParameterCollection* Collection;                                    // 0x0028 (size: 0x8)
    TArray<FNiagaraVariable> OverridenParameters;                                     // 0x0030 (size: 0x10)
    FNiagaraParameterStore ParameterStorage;                                          // 0x0040 (size: 0x78)

    void SetVectorParameter(FString InVariableName, FVector InValue);
    void SetVector4Parameter(FString InVariableName, const FVector4& InValue);
    void SetVector2DParameter(FString InVariableName, FVector2D InValue);
    void SetQuatParameter(FString InVariableName, const FQuat& InValue);
    void SetIntParameter(FString InVariableName, int32 InValue);
    void SetFloatParameter(FString InVariableName, float InValue);
    void SetColorParameter(FString InVariableName, FLinearColor InValue);
    void SetBoolParameter(FString InVariableName, bool InValue);
    FVector GetVectorParameter(FString InVariableName);
    FVector4 GetVector4Parameter(FString InVariableName);
    FVector2D GetVector2DParameter(FString InVariableName);
    FQuat GetQuatParameter(FString InVariableName);
    int32 GetIntParameter(FString InVariableName);
    float GetFloatParameter(FString InVariableName);
    FLinearColor GetColorParameter(FString InVariableName);
    bool GetBoolParameter(FString InVariableName);
}; // Size: 0xE0

class UNiagaraParameterDefinitionsBase : public UObject
{
}; // Size: 0x28

class UNiagaraPrecompileContainer : public UObject
{
    TArray<class UNiagaraScript*> Scripts;                                            // 0x0028 (size: 0x10)
    class UNiagaraSystem* System;                                                     // 0x0038 (size: 0x8)

}; // Size: 0x40

class UNiagaraPreviewAxis : public UObject
{

    int32 Num();
    void ApplyToPreview(class UNiagaraComponent* PreviewComponent, int32 PreviewIndex, bool bIsXAxis, FString& OutLabelText);
}; // Size: 0x28

class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{
    FName Param;                                                                      // 0x0028 (size: 0x8)
    int32 Count;                                                                      // 0x0030 (size: 0x4)

}; // Size: 0x38

class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
{
    float Min;                                                                        // 0x0038 (size: 0x4)
    float Max;                                                                        // 0x003C (size: 0x4)

}; // Size: 0x40

class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
{
    int32 Min;                                                                        // 0x0038 (size: 0x4)
    int32 Max;                                                                        // 0x003C (size: 0x4)

}; // Size: 0x40

class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{
    FLinearColor Min;                                                                 // 0x0038 (size: 0x10)
    FLinearColor Max;                                                                 // 0x0048 (size: 0x10)

}; // Size: 0x58

class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{
    FVector Min;                                                                      // 0x0038 (size: 0xC)
    FVector Max;                                                                      // 0x0044 (size: 0xC)

}; // Size: 0x50

class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{
    FVector2D Min;                                                                    // 0x0038 (size: 0x8)
    FVector2D Max;                                                                    // 0x0040 (size: 0x8)

}; // Size: 0x48

class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{
    FVector4 Min;                                                                     // 0x0040 (size: 0x10)
    FVector4 Max;                                                                     // 0x0050 (size: 0x10)

}; // Size: 0x60

class UNiagaraRendererProperties : public UNiagaraMergeable
{
    FNiagaraPlatformSet Platforms;                                                    // 0x0028 (size: 0x30)
    int32 SortOrderHint;                                                              // 0x0058 (size: 0x4)
    ENiagaraRendererMotionVectorSetting MotionVectorSetting;                          // 0x005C (size: 0x4)
    bool bIsEnabled;                                                                  // 0x0060 (size: 0x1)
    bool bMotionBlurEnabled;                                                          // 0x0061 (size: 0x1)

}; // Size: 0x78

class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{
    class UMaterialInterface* Material;                                               // 0x0078 (size: 0x8)
    FNiagaraUserParameterBinding MaterialUserParamBinding;                            // 0x0080 (size: 0x20)
    ENiagaraRibbonFacingMode FacingMode;                                              // 0x00A0 (size: 0x1)
    FNiagaraRibbonUVSettings UV0Settings;                                             // 0x00A4 (size: 0x24)
    FNiagaraRibbonUVSettings UV1Settings;                                             // 0x00C8 (size: 0x24)
    ENiagaraRibbonDrawDirection DrawDirection;                                        // 0x00EC (size: 0x1)
    ENiagaraRibbonShapeMode Shape;                                                    // 0x00ED (size: 0x1)
    bool bEnableAccurateGeometry;                                                     // 0x00EE (size: 0x1)
    int32 WidthSegmentationCount;                                                     // 0x00F0 (size: 0x4)
    int32 MultiPlaneCount;                                                            // 0x00F4 (size: 0x4)
    int32 TubeSubdivisions;                                                           // 0x00F8 (size: 0x4)
    TArray<FNiagaraRibbonShapeCustomVertex> CustomVertices;                           // 0x0100 (size: 0x10)
    float CurveTension;                                                               // 0x0110 (size: 0x4)
    ENiagaraRibbonTessellationMode TessellationMode;                                  // 0x0114 (size: 0x1)
    int32 TessellationFactor;                                                         // 0x0118 (size: 0x4)
    bool bUseConstantFactor;                                                          // 0x011C (size: 0x1)
    float TessellationAngle;                                                          // 0x0120 (size: 0x4)
    bool bScreenSpaceTessellation;                                                    // 0x0124 (size: 0x1)
    FNiagaraVariableAttributeBinding PositionBinding;                                 // 0x0128 (size: 0x58)
    FNiagaraVariableAttributeBinding ColorBinding;                                    // 0x0180 (size: 0x58)
    FNiagaraVariableAttributeBinding VelocityBinding;                                 // 0x01D8 (size: 0x58)
    FNiagaraVariableAttributeBinding NormalizedAgeBinding;                            // 0x0230 (size: 0x58)
    FNiagaraVariableAttributeBinding RibbonTwistBinding;                              // 0x0288 (size: 0x58)
    FNiagaraVariableAttributeBinding RibbonWidthBinding;                              // 0x02E0 (size: 0x58)
    FNiagaraVariableAttributeBinding RibbonFacingBinding;                             // 0x0338 (size: 0x58)
    FNiagaraVariableAttributeBinding RibbonIdBinding;                                 // 0x0390 (size: 0x58)
    FNiagaraVariableAttributeBinding RibbonLinkOrderBinding;                          // 0x03E8 (size: 0x58)
    FNiagaraVariableAttributeBinding MaterialRandomBinding;                           // 0x0440 (size: 0x58)
    FNiagaraVariableAttributeBinding DynamicMaterialBinding;                          // 0x0498 (size: 0x58)
    FNiagaraVariableAttributeBinding DynamicMaterial1Binding;                         // 0x04F0 (size: 0x58)
    FNiagaraVariableAttributeBinding DynamicMaterial2Binding;                         // 0x0548 (size: 0x58)
    FNiagaraVariableAttributeBinding DynamicMaterial3Binding;                         // 0x05A0 (size: 0x58)
    FNiagaraVariableAttributeBinding RibbonUVDistance;                                // 0x05F8 (size: 0x58)
    FNiagaraVariableAttributeBinding U0OverrideBinding;                               // 0x0650 (size: 0x58)
    FNiagaraVariableAttributeBinding V0RangeOverrideBinding;                          // 0x06A8 (size: 0x58)
    FNiagaraVariableAttributeBinding U1OverrideBinding;                               // 0x0700 (size: 0x58)
    FNiagaraVariableAttributeBinding V1RangeOverrideBinding;                          // 0x0758 (size: 0x58)
    TArray<FNiagaraMaterialAttributeBinding> MaterialParameterBindings;               // 0x07B0 (size: 0x10)

}; // Size: 0x860

class UNiagaraScript : public UNiagaraScriptBase
{
    ENiagaraScriptUsage Usage;                                                        // 0x0028 (size: 0x1)
    FGuid UsageId;                                                                    // 0x002C (size: 0x10)
    FNiagaraParameterStore RapidIterationParameters;                                  // 0x0040 (size: 0x78)
    FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore;                  // 0x00B8 (size: 0x98)
    TArray<FNiagaraBoundParameter> ScriptExecutionBoundParameters;                    // 0x0150 (size: 0x10)
    FNiagaraVMExecutableDataId CachedScriptVMId;                                      // 0x0160 (size: 0x58)
    FNiagaraVMExecutableData CachedScriptVM;                                          // 0x01C8 (size: 0xF0)
    TArray<class UNiagaraParameterCollection*> CachedParameterCollectionReferences;   // 0x02B8 (size: 0x10)
    TArray<FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces;              // 0x02C8 (size: 0x10)

    void RaiseOnGPUCompilationComplete();
}; // Size: 0x2E0

class UNiagaraScriptSourceBase : public UObject
{
}; // Size: 0x48

class UNiagaraSettings : public UDeveloperSettings
{
    FSoftObjectPath DefaultEffectType;                                                // 0x0038 (size: 0x18)
    TArray<FText> QualityLevels;                                                      // 0x0050 (size: 0x10)
    TMap<class FString, class FText> ComponentRendererWarningsPerClass;               // 0x0060 (size: 0x50)
    TEnumAsByte<ETextureRenderTargetFormat> DefaultRenderTargetFormat;                // 0x00B0 (size: 0x1)
    ENiagaraGpuBufferFormat DefaultGridFormat;                                        // 0x00B1 (size: 0x1)
    ENiagaraDefaultRendererMotionVectorSetting DefaultRendererMotionVectorSetting;    // 0x00B4 (size: 0x4)
    TEnumAsByte<ENDISkelMesh_GpuMaxInfluences::Type> NDISkelMesh_GpuMaxInfluences;    // 0x00B8 (size: 0x1)
    TEnumAsByte<ENDISkelMesh_GpuUniformSamplingFormat::Type> NDISkelMesh_GpuUniformSamplingFormat; // 0x00B9 (size: 0x1)
    TEnumAsByte<ENDISkelMesh_AdjacencyTriangleIndexFormat::Type> NDISkelMesh_AdjacencyTriangleIndexFormat; // 0x00BA (size: 0x1)
    class UNiagaraEffectType* DefaultEffectTypePtr;                                   // 0x00C0 (size: 0x8)

}; // Size: 0xC8

class UNiagaraSignificanceHandler : public UObject
{
}; // Size: 0x28

class UNiagaraSignificanceHandlerAge : public UNiagaraSignificanceHandler
{
}; // Size: 0x28

class UNiagaraSignificanceHandlerDistance : public UNiagaraSignificanceHandler
{
}; // Size: 0x28

class UNiagaraSimulationStageBase : public UNiagaraMergeable
{
    class UNiagaraScript* Script;                                                     // 0x0028 (size: 0x8)
    FName SimulationStageName;                                                        // 0x0030 (size: 0x8)
    uint8 bEnabled;                                                                   // 0x0038 (size: 0x1)

}; // Size: 0x40

class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase
{
    ENiagaraIterationSource IterationSource;                                          // 0x0040 (size: 0x1)
    int32 Iterations;                                                                 // 0x0044 (size: 0x4)
    uint8 bSpawnOnly;                                                                 // 0x0048 (size: 0x1)
    uint8 bDisablePartialParticleUpdate;                                              // 0x0048 (size: 0x1)
    FNiagaraVariableDataInterfaceBinding DataInterface;                               // 0x0050 (size: 0x20)

}; // Size: 0x70

class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{
    class UMaterialInterface* Material;                                               // 0x0078 (size: 0x8)
    ENiagaraRendererSourceDataMode SourceMode;                                        // 0x0080 (size: 0x1)
    FNiagaraUserParameterBinding MaterialUserParamBinding;                            // 0x0088 (size: 0x20)
    ENiagaraSpriteAlignment Alignment;                                                // 0x00A8 (size: 0x1)
    ENiagaraSpriteFacingMode FacingMode;                                              // 0x00A9 (size: 0x1)
    FVector2D PivotInUVSpace;                                                         // 0x00AC (size: 0x8)
    ENiagaraSortMode SortMode;                                                        // 0x00B4 (size: 0x1)
    FVector2D SubImageSize;                                                           // 0x00B8 (size: 0x8)
    uint8 bSubImageBlend;                                                             // 0x00C0 (size: 0x1)
    uint8 bRemoveHMDRollInVR;                                                         // 0x00C0 (size: 0x1)
    uint8 bSortOnlyWhenTranslucent;                                                   // 0x00C0 (size: 0x1)
    uint8 bGpuLowLatencyTranslucency;                                                 // 0x00C0 (size: 0x1)
    float MinFacingCameraBlendDistance;                                               // 0x00C4 (size: 0x4)
    float MaxFacingCameraBlendDistance;                                               // 0x00C8 (size: 0x4)
    uint8 bEnableCameraDistanceCulling;                                               // 0x00CC (size: 0x1)
    float MinCameraDistance;                                                          // 0x00D0 (size: 0x4)
    float MaxCameraDistance;                                                          // 0x00D4 (size: 0x4)
    uint32 RendererVisibility;                                                        // 0x00D8 (size: 0x4)
    FNiagaraVariableAttributeBinding PositionBinding;                                 // 0x00E0 (size: 0x58)
    FNiagaraVariableAttributeBinding ColorBinding;                                    // 0x0138 (size: 0x58)
    FNiagaraVariableAttributeBinding VelocityBinding;                                 // 0x0190 (size: 0x58)
    FNiagaraVariableAttributeBinding SpriteRotationBinding;                           // 0x01E8 (size: 0x58)
    FNiagaraVariableAttributeBinding SpriteSizeBinding;                               // 0x0240 (size: 0x58)
    FNiagaraVariableAttributeBinding SpriteFacingBinding;                             // 0x0298 (size: 0x58)
    FNiagaraVariableAttributeBinding SpriteAlignmentBinding;                          // 0x02F0 (size: 0x58)
    FNiagaraVariableAttributeBinding SubImageIndexBinding;                            // 0x0348 (size: 0x58)
    FNiagaraVariableAttributeBinding DynamicMaterialBinding;                          // 0x03A0 (size: 0x58)
    FNiagaraVariableAttributeBinding DynamicMaterial1Binding;                         // 0x03F8 (size: 0x58)
    FNiagaraVariableAttributeBinding DynamicMaterial2Binding;                         // 0x0450 (size: 0x58)
    FNiagaraVariableAttributeBinding DynamicMaterial3Binding;                         // 0x04A8 (size: 0x58)
    FNiagaraVariableAttributeBinding CameraOffsetBinding;                             // 0x0500 (size: 0x58)
    FNiagaraVariableAttributeBinding UVScaleBinding;                                  // 0x0558 (size: 0x58)
    FNiagaraVariableAttributeBinding PivotOffsetBinding;                              // 0x05B0 (size: 0x58)
    FNiagaraVariableAttributeBinding MaterialRandomBinding;                           // 0x0608 (size: 0x58)
    FNiagaraVariableAttributeBinding CustomSortingBinding;                            // 0x0660 (size: 0x58)
    FNiagaraVariableAttributeBinding NormalizedAgeBinding;                            // 0x06B8 (size: 0x58)
    FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;                    // 0x0710 (size: 0x58)
    TArray<FNiagaraMaterialAttributeBinding> MaterialParameterBindings;               // 0x0768 (size: 0x10)
    FNiagaraVariableAttributeBinding PrevPositionBinding;                             // 0x0778 (size: 0x58)
    FNiagaraVariableAttributeBinding PrevVelocityBinding;                             // 0x07D0 (size: 0x58)
    FNiagaraVariableAttributeBinding PrevSpriteRotationBinding;                       // 0x0828 (size: 0x58)
    FNiagaraVariableAttributeBinding PrevSpriteSizeBinding;                           // 0x0880 (size: 0x58)
    FNiagaraVariableAttributeBinding PrevSpriteFacingBinding;                         // 0x08D8 (size: 0x58)
    FNiagaraVariableAttributeBinding PrevSpriteAlignmentBinding;                      // 0x0930 (size: 0x58)
    FNiagaraVariableAttributeBinding PrevCameraOffsetBinding;                         // 0x0988 (size: 0x58)
    FNiagaraVariableAttributeBinding PrevPivotOffsetBinding;                          // 0x09E0 (size: 0x58)

}; // Size: 0xAB0

class UNiagaraSystem : public UFXSystemAsset
{
    bool bDumpDebugSystemInfo;                                                        // 0x0030 (size: 0x1)
    bool bDumpDebugEmitterInfo;                                                       // 0x0031 (size: 0x1)
    bool bRequireCurrentFrameData;                                                    // 0x0033 (size: 0x1)
    uint8 bFixedBounds;                                                               // 0x0034 (size: 0x1)
    class UNiagaraEffectType* EffectType;                                             // 0x0038 (size: 0x8)
    bool bOverrideScalabilitySettings;                                                // 0x0040 (size: 0x1)
    TArray<FNiagaraSystemScalabilityOverride> ScalabilityOverrides;                   // 0x0048 (size: 0x10)
    FNiagaraSystemScalabilityOverrides SystemScalabilityOverrides;                    // 0x0058 (size: 0x10)
    TArray<FNiagaraEmitterHandle> EmitterHandles;                                     // 0x0068 (size: 0x10)
    TArray<class UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;  // 0x0078 (size: 0x10)
    class UNiagaraScript* SystemSpawnScript;                                          // 0x0088 (size: 0x8)
    class UNiagaraScript* SystemUpdateScript;                                         // 0x0090 (size: 0x8)
    FNiagaraSystemCompiledData SystemCompiledData;                                    // 0x00A8 (size: 0x218)
    FNiagaraUserRedirectionParameterStore ExposedParameters;                          // 0x02C0 (size: 0xC8)
    FBox FixedBounds;                                                                 // 0x0388 (size: 0x1C)
    bool bAutoDeactivate;                                                             // 0x03A4 (size: 0x1)
    float WarmupTime;                                                                 // 0x03A8 (size: 0x4)
    int32 WarmupTickCount;                                                            // 0x03AC (size: 0x4)
    float WarmupTickDelta;                                                            // 0x03B0 (size: 0x4)
    bool bHasSystemScriptDIsWithPerInstanceData;                                      // 0x03B4 (size: 0x1)
    bool bNeedsGPUContextInitForDataInterfaces;                                       // 0x03B5 (size: 0x1)
    TArray<FName> UserDINamesReadInSystemScripts;                                     // 0x03B8 (size: 0x10)

}; // Size: 0x498

#endif
