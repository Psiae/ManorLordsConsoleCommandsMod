#ifndef UE4SS_SDK_Niagara_HPP
#define UE4SS_SDK_Niagara_HPP

#include "Niagara_enums.hpp"

struct FBasicParticleData
{
    FVector position;                                                                 // 0x0000 (size: 0x18)
    float Size;                                                                       // 0x0018 (size: 0x4)
    FVector Velocity;                                                                 // 0x0020 (size: 0x18)

}; // Size: 0x38

struct FEmitterCompiledScriptPair
{
}; // Size: 0xA0

struct FMeshTriCoordinate
{
    int32 Tri;                                                                        // 0x0000 (size: 0x4)
    FVector3f BaryCoord;                                                              // 0x0004 (size: 0xC)

}; // Size: 0x10

struct FMovieSceneNiagaraBoolParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
    FMovieSceneBoolChannel BoolChannel;                                               // 0x0040 (size: 0x108)

}; // Size: 0x148

struct FMovieSceneNiagaraColorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
    FMovieSceneFloatChannel RedChannel;                                               // 0x0040 (size: 0x110)
    FMovieSceneFloatChannel GreenChannel;                                             // 0x0150 (size: 0x110)
    FMovieSceneFloatChannel BlueChannel;                                              // 0x0260 (size: 0x110)
    FMovieSceneFloatChannel AlphaChannel;                                             // 0x0370 (size: 0x110)

}; // Size: 0x480

struct FMovieSceneNiagaraFloatParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
    FMovieSceneFloatChannel FloatChannel;                                             // 0x0040 (size: 0x110)

}; // Size: 0x150

struct FMovieSceneNiagaraIntegerParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
    FMovieSceneIntegerChannel IntegerChannel;                                         // 0x0040 (size: 0x108)

}; // Size: 0x148

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
    bool bAllowScalability;                                                           // 0x0025 (size: 0x1)

}; // Size: 0x28

struct FMovieSceneNiagaraSystemTrackTemplate : public FMovieSceneEvalTemplate
{
}; // Size: 0x20

struct FMovieSceneNiagaraVectorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
    FMovieSceneFloatChannel VectorChannels;                                           // 0x0040 (size: 0x440)
    int32 ChannelsUsed;                                                               // 0x0480 (size: 0x4)

}; // Size: 0x488

struct FNCPool
{
    TArray<FNCPoolElement> FreeElements;                                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FNCPoolElement
{
    class UNiagaraComponent* Component;                                               // 0x0000 (size: 0x8)

}; // Size: 0x10

struct FNDCIsland
{
    class UNiagaraDataChannelHandler_Islands* Owner;                                  // 0x0000 (size: 0x8)
    FBoxSphereBounds Bounds;                                                          // 0x0008 (size: 0x38)
    TArray<class UNiagaraComponent*> NiagaraSystems;                                  // 0x0040 (size: 0x10)

}; // Size: 0x70

struct FNDCIslandDebugDrawSettings
{
    uint8 bEnabled;                                                                   // 0x0000 (size: 0x1)
    uint8 bShowIslandBounds;                                                          // 0x0000 (size: 0x1)

}; // Size: 0x4

struct FNDIArraySimCacheDataFrame
{
    int32 NumElements;                                                                // 0x0000 (size: 0x4)
    int32 DataOffset;                                                                 // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FNDIDataChannelCompiledData
{
    TArray<FNDIDataChannelFunctionInfo> FunctionInfo;                                 // 0x0000 (size: 0x10)
    TMap<class FNiagaraCompileHash, class FNDIDataChannel_GPUScriptParameterAccessInfo> GPUScriptParameterInfos; // 0x0010 (size: 0x50)
    uint32 TotalParams;                                                               // 0x0060 (size: 0x4)
    bool bUsedByCPU;                                                                  // 0x0064 (size: 0x1)
    bool bUsedByGPU;                                                                  // 0x0065 (size: 0x1)
    bool bNeedsSpawnDataTable;                                                        // 0x0066 (size: 0x1)
    bool bSpawnsParticles;                                                            // 0x0067 (size: 0x1)
    bool bCallsWrite;                                                                 // 0x0068 (size: 0x1)

}; // Size: 0x70

struct FNDIDataChannelFunctionInfo
{
    FName FunctionName;                                                               // 0x0000 (size: 0x8)
    TArray<FNiagaraVariableBase> Inputs;                                              // 0x0008 (size: 0x10)
    TArray<FNiagaraVariableBase> Outputs;                                             // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FNDIDataChannelWriteCompiledData : public FNDIDataChannelCompiledData
{
    FNiagaraDataSetCompiledData DataLayout;                                           // 0x0070 (size: 0x48)

}; // Size: 0xB8

struct FNDIDataChannelWriteSimCacheFrame
{
    int32 NumElements;                                                                // 0x0000 (size: 0x4)
    TArray<FNDIDataChannelWriteSimCacheFrameBuffer> VariableData;                     // 0x0008 (size: 0x10)
    bool bVisibleToGame;                                                              // 0x0018 (size: 0x1)
    bool bVisibleToCPUSims;                                                           // 0x0019 (size: 0x1)
    bool bVisibleToGPUSims;                                                           // 0x001A (size: 0x1)

}; // Size: 0x20

struct FNDIDataChannelWriteSimCacheFrameBuffer
{
    TArray<uint8> Data;                                                               // 0x0000 (size: 0x10)
    int32 Size;                                                                       // 0x0010 (size: 0x4)
    FNiagaraVariableBase SourceVar;                                                   // 0x0014 (size: 0xC)

}; // Size: 0x20

struct FNDIDataChannel_GPUScriptParameterAccessInfo
{
    TArray<FNiagaraVariableBase> SortedParameters;                                    // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FNDIMemoryBufferSimCacheDataFrame
{
    int32 CpuBufferSize;                                                              // 0x0000 (size: 0x4)
    int32 CpuDataOffset;                                                              // 0x0004 (size: 0x4)
    int32 GpuBufferSize;                                                              // 0x0008 (size: 0x4)
    int32 GpuDataOffset;                                                              // 0x000C (size: 0x4)

}; // Size: 0x10

struct FNDIRenderTargetVolumeSimCacheFrame
{
    FIntVector Size;                                                                  // 0x0000 (size: 0xC)
    TEnumAsByte<EPixelFormat> Format;                                                 // 0x000C (size: 0x1)
    int32 UncompressedSize;                                                           // 0x0010 (size: 0x4)
    int32 CompressedSize;                                                             // 0x0014 (size: 0x4)

}; // Size: 0x48

struct FNDIStaticMeshSectionFilter
{
    TArray<int32> AllowedMaterialSlots;                                               // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FNiagaraAssetTagDefinition
{
    FText AssetTag;                                                                   // 0x0000 (size: 0x10)
    int32 AssetFlags;                                                                 // 0x0010 (size: 0x4)
    FText Description;                                                                // 0x0018 (size: 0x10)
    ENiagaraAssetTagDefinitionImportance DisplayType;                                 // 0x0028 (size: 0x1)
    FLinearColor Color;                                                               // 0x002C (size: 0x10)
    FGuid TagGuid;                                                                    // 0x003C (size: 0x10)

}; // Size: 0x50

struct FNiagaraAssetTagDefinitionReference
{
    FGuid AssetTagDefinitionGuid;                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FNiagaraAssetVersion
{
    int32 MajorVersion;                                                               // 0x0000 (size: 0x4)
    int32 MinorVersion;                                                               // 0x0004 (size: 0x4)
    FGuid VersionGuid;                                                                // 0x0008 (size: 0x10)
    bool bIsVisibleInVersionSelector;                                                 // 0x0018 (size: 0x1)

}; // Size: 0x1C

struct FNiagaraBakerCameraSettings
{
    ENiagaraBakerViewMode ViewMode;                                                   // 0x0000 (size: 0x4)
    FVector ViewportLocation;                                                         // 0x0008 (size: 0x18)
    FRotator ViewportRotation;                                                        // 0x0020 (size: 0x18)
    float OrbitDistance;                                                              // 0x0038 (size: 0x4)
    float FOV;                                                                        // 0x003C (size: 0x4)
    float OrthoWidth;                                                                 // 0x0040 (size: 0x4)
    bool bUseAspectRatio;                                                             // 0x0044 (size: 0x1)
    float AspectRatio;                                                                // 0x0048 (size: 0x4)

}; // Size: 0x50

struct FNiagaraBakerTextureSettings
{
    FName OutputName;                                                                 // 0x0000 (size: 0x8)
    FNiagaraBakerTextureSource SourceBinding;                                         // 0x0008 (size: 0x18)
    uint8 bUseFrameSize;                                                              // 0x0020 (size: 0x1)
    FIntPoint FrameSize;                                                              // 0x0024 (size: 0x8)
    FIntPoint TextureSize;                                                            // 0x002C (size: 0x8)
    class UTexture2D* GeneratedTexture;                                               // 0x0038 (size: 0x8)

}; // Size: 0x40

struct FNiagaraBakerTextureSource
{
    FString DisplayString;                                                            // 0x0000 (size: 0x10)
    FName SourceName;                                                                 // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FNiagaraBool
{
    int32 Value;                                                                      // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FNiagaraBoolParameterMetaData
{
    ENiagaraBoolDisplayMode DisplayMode;                                              // 0x0000 (size: 0x1)
    FName OverrideNameTrue;                                                           // 0x0004 (size: 0x8)
    FName OverrideNameFalse;                                                          // 0x000C (size: 0x8)
    class UTexture2D* IconOverrideTrue;                                               // 0x0018 (size: 0x8)
    class UTexture2D* IconOverrideFalse;                                              // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FNiagaraBoundParameter
{
    FNiagaraVariableBase Parameter;                                                   // 0x0000 (size: 0xC)
    int32 SrcOffset;                                                                  // 0x000C (size: 0x4)
    int32 DestOffset;                                                                 // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FNiagaraCollisionEventPayload
{
    FVector CollisionPos;                                                             // 0x0000 (size: 0x18)
    FVector CollisionNormal;                                                          // 0x0018 (size: 0x18)
    FVector CollisionVelocity;                                                        // 0x0030 (size: 0x18)
    int32 ParticleIndex;                                                              // 0x0048 (size: 0x4)
    int32 PhysicalMaterialIndex;                                                      // 0x004C (size: 0x4)

}; // Size: 0x50

struct FNiagaraCompileDependency
{
    FString LinkerErrorMessage;                                                       // 0x0000 (size: 0x10)
    FGuid NodeGuid;                                                                   // 0x0010 (size: 0x10)
    FGuid PinGuid;                                                                    // 0x0020 (size: 0x10)
    TArray<FGuid> StackGuids;                                                         // 0x0030 (size: 0x10)
    FNiagaraVariableBase DependentVariable;                                           // 0x0040 (size: 0xC)
    bool bDependentVariableFromCustomIterationNamespace;                              // 0x004C (size: 0x1)

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
    FNiagaraVariableAttributeBinding AttributeBinding;                                // 0x0000 (size: 0x38)
    FName PropertyName;                                                               // 0x0038 (size: 0x8)
    FNiagaraTypeDefinition PropertyType;                                              // 0x0040 (size: 0x10)
    FName MetadataSetterName;                                                         // 0x0050 (size: 0x8)
    TMap<class FString, class FString> PropertySetterParameterDefaults;               // 0x0058 (size: 0x50)

}; // Size: 0xA8

struct FNiagaraCulledComponentInfo
{
}; // Size: 0x8

struct FNiagaraDataChannelGameDataLayout
{
    TMap<FNiagaraVariableBase, int32> VariableIndices;                                // 0x0000 (size: 0x50)
    TArray<FNiagaraLwcStructConverter> LwcConverters;                                 // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FNiagaraDataChannelSearchParameters
{
    class USceneComponent* OwningComponent;                                           // 0x0000 (size: 0x8)
    FVector Location;                                                                 // 0x0008 (size: 0x18)
    uint8 bOverrideLocation;                                                          // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FNiagaraDataChannelVariable : public FNiagaraVariableBase
{
}; // Size: 0xC

struct FNiagaraDataInterfaceEmitterBinding
{
    ENiagaraDataInterfaceEmitterBindingMode BindingMode;                              // 0x0000 (size: 0x4)
    FName EmitterName;                                                                // 0x0004 (size: 0x8)

}; // Size: 0xC

struct FNiagaraDataInterfaceSplineLUT
{
    TArray<FVector> Positions;                                                        // 0x0000 (size: 0x10)
    TArray<FVector> scales;                                                           // 0x0010 (size: 0x10)
    TArray<FQuat> Rotations;                                                          // 0x0020 (size: 0x10)
    float SplineLength;                                                               // 0x0030 (size: 0x4)
    float SplineDistanceStep;                                                         // 0x0034 (size: 0x4)
    float InvSplineDistanceStep;                                                      // 0x0038 (size: 0x4)
    int32 MaxIndex;                                                                   // 0x003C (size: 0x4)

}; // Size: 0x40

struct FNiagaraDataSetCompiledData
{
    TArray<FNiagaraVariableBase> Variables;                                           // 0x0000 (size: 0x10)
    TArray<FNiagaraVariableLayoutInfo> VariableLayouts;                               // 0x0010 (size: 0x10)
    FNiagaraDataSetID ID;                                                             // 0x0020 (size: 0xC)
    uint32 TotalFloatComponents;                                                      // 0x002C (size: 0x4)
    uint32 TotalInt32Components;                                                      // 0x0030 (size: 0x4)
    uint32 TotalHalfComponents;                                                       // 0x0034 (size: 0x4)
    uint8 bRequiresPersistentIDs;                                                     // 0x0038 (size: 0x1)
    ENiagaraSimTarget SimTarget;                                                      // 0x003C (size: 0x1)

}; // Size: 0x48

struct FNiagaraDataSetID
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    ENiagaraDataSetType Type;                                                         // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FNiagaraDataSetProperties
{
    FNiagaraDataSetID ID;                                                             // 0x0000 (size: 0xC)
    TArray<FNiagaraVariableBase> Variables;                                           // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FNiagaraDebugHUDSettingsData
{
    bool bHudEnabled;                                                                 // 0x0000 (size: 0x1)
    bool bHudRenderingEnabled;                                                        // 0x0001 (size: 0x1)
    bool bValidationEnabled;                                                          // 0x0002 (size: 0x1)
    bool bOverviewEnabled;                                                            // 0x0003 (size: 0x1)
    ENiagaraDebugHUDOverviewMode OverviewMode;                                        // 0x0004 (size: 0x4)
    ENiagaraDebugHUDDOverviewSort OverviewSortMode;                                   // 0x0008 (size: 0x4)
    bool bIncludeCascade;                                                             // 0x000C (size: 0x1)
    bool bShowRegisteredComponents;                                                   // 0x000D (size: 0x1)
    bool bOverviewShowFilteredSystemOnly;                                             // 0x000E (size: 0x1)
    bool bShowGlobalBudgetInfo;                                                       // 0x000F (size: 0x1)
    bool bSystemFilterEnabled;                                                        // 0x0010 (size: 0x1)
    FString SystemFilter;                                                             // 0x0018 (size: 0x10)
    bool bEmitterFilterEnabled;                                                       // 0x0028 (size: 0x1)
    FString EmitterFilter;                                                            // 0x0030 (size: 0x10)
    bool bActorFilterEnabled;                                                         // 0x0040 (size: 0x1)
    FString ActorFilter;                                                              // 0x0048 (size: 0x10)
    bool bComponentFilterEnabled;                                                     // 0x0058 (size: 0x1)
    FString ComponentFilter;                                                          // 0x0060 (size: 0x10)
    bool bValidateSystemSimulationDataBuffers;                                        // 0x0070 (size: 0x1)
    bool bValidateParticleDataBuffers;                                                // 0x0071 (size: 0x1)
    bool bValidationLogErrors;                                                        // 0x0072 (size: 0x1)
    int32 ValidationAttributeDisplayTruncate;                                         // 0x0074 (size: 0x4)
    ENiagaraDebugHudVerbosity SystemDebugVerbosity;                                   // 0x0078 (size: 0x4)
    ENiagaraDebugHudVerbosity SystemEmitterVerbosity;                                 // 0x007C (size: 0x4)
    ENiagaraDebugHudVerbosity DataInterfaceVerbosity;                                 // 0x0080 (size: 0x4)
    TArray<FNiagaraDebugHUDVariable> SystemVariables;                                 // 0x0088 (size: 0x10)
    bool bSystemShowActiveOnlyInWorld;                                                // 0x0098 (size: 0x1)
    bool bShowParticleVariables;                                                      // 0x0099 (size: 0x1)
    TArray<FNiagaraDebugHUDVariable> ParticlesVariables;                              // 0x00A0 (size: 0x10)
    bool bEnableGpuParticleReadback;                                                  // 0x00B0 (size: 0x1)
    bool bShowParticleIndex;                                                          // 0x00B1 (size: 0x1)
    bool bShowParticlesVariablesWithSystem;                                           // 0x00B2 (size: 0x1)
    bool bShowParticleVariablesVertical;                                              // 0x00B3 (size: 0x1)
    bool bUseMaxParticlesToDisplay;                                                   // 0x00B4 (size: 0x1)
    int32 MaxParticlesToDisplay;                                                      // 0x00B8 (size: 0x4)
    bool bUseParticleDisplayClip;                                                     // 0x00BC (size: 0x1)
    FVector2D ParticleDisplayClip;                                                    // 0x00C0 (size: 0x10)
    bool bUseParticleDisplayCenterRadius;                                             // 0x00D0 (size: 0x1)
    float ParticleDisplayCenterRadius;                                                // 0x00D4 (size: 0x4)
    int32 PerfReportFrames;                                                           // 0x00D8 (size: 0x4)
    ENiagaraDebugHUDPerfSampleMode PerfSampleMode;                                    // 0x00DC (size: 0x4)
    ENiagaraDebugHUDPerfUnits PerfUnits;                                              // 0x00E0 (size: 0x4)
    bool bShowPerfColumGameThreadOnly;                                                // 0x00E4 (size: 0x1)
    ENiagaraDebugHUDPerfGraphMode PerfGraphMode;                                      // 0x00E8 (size: 0x4)
    int32 PerfHistoryFrames;                                                          // 0x00EC (size: 0x4)
    bool bUsePerfGraphTimeRange;                                                      // 0x00F0 (size: 0x1)
    float PerfGraphTimeRange;                                                         // 0x00F4 (size: 0x4)
    FVector2D PerfGraphSize;                                                          // 0x00F8 (size: 0x10)
    FLinearColor PerfGraphAxisColor;                                                  // 0x0108 (size: 0x10)
    int32 SmoothingWidth;                                                             // 0x0118 (size: 0x4)
    ENiagaraDebugHudFont OverviewFont;                                                // 0x011C (size: 0x4)
    FVector2D OverviewLocation;                                                       // 0x0120 (size: 0x10)
    FNiagaraDebugHudTextOptions SystemTextOptions;                                    // 0x0130 (size: 0x18)
    FNiagaraDebugHudTextOptions ParticleTextOptions;                                  // 0x0148 (size: 0x18)
    bool bDrawBoundsEnabled;                                                          // 0x0160 (size: 0x1)
    bool bDrawBoundsWireframe;                                                        // 0x0161 (size: 0x1)
    float DrawBoundsAlpha;                                                            // 0x0164 (size: 0x4)
    FLinearColor DefaultBackgroundColor;                                              // 0x0168 (size: 0x10)
    FLinearColor OverviewHeadingColor;                                                // 0x0178 (size: 0x10)
    FLinearColor OverviewDetailColor;                                                 // 0x0188 (size: 0x10)
    FLinearColor OverviewDetailHighlightColor;                                        // 0x0198 (size: 0x10)
    FLinearColor InWorldErrorTextColor;                                               // 0x01A8 (size: 0x10)
    FLinearColor InWorldTextColor;                                                    // 0x01B8 (size: 0x10)
    FLinearColor MessageInfoTextColor;                                                // 0x01C8 (size: 0x10)
    FLinearColor MessageWarningTextColor;                                             // 0x01D8 (size: 0x10)
    FLinearColor MessageErrorTextColor;                                               // 0x01E8 (size: 0x10)
    float SystemColorTableOpacity;                                                    // 0x01F8 (size: 0x4)
    uint32 SystemColorSeed;                                                           // 0x01FC (size: 0x4)
    FVector SystemColorHSVMin;                                                        // 0x0200 (size: 0x18)
    FVector SystemColorHSVMax;                                                        // 0x0218 (size: 0x18)
    ENiagaraDebugPlaybackMode PlaybackMode;                                           // 0x0230 (size: 0x1)
    bool bPlaybackRateEnabled;                                                        // 0x0231 (size: 0x1)
    float PlaybackRate;                                                               // 0x0234 (size: 0x4)
    bool bLoopTimeEnabled;                                                            // 0x0238 (size: 0x1)
    float LoopTime;                                                                   // 0x023C (size: 0x4)

}; // Size: 0x240

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
    FVector2D ScreenOffset;                                                           // 0x0008 (size: 0x10)

}; // Size: 0x18

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

struct FNiagaraDistributionBase
{
    ENiagaraDistributionMode Mode;                                                    // 0x0008 (size: 0x4)
    FNiagaraVariableBase ParameterBinding;                                            // 0x000C (size: 0xC)

}; // Size: 0x18

struct FNiagaraDistributionColor : public FNiagaraDistributionBase
{
    TArray<FLinearColor> Values;                                                      // 0x0018 (size: 0x10)
    FVector2f ValuesTimeRange;                                                        // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FNiagaraDistributionFloat : public FNiagaraDistributionBase
{
    TArray<float> Values;                                                             // 0x0018 (size: 0x10)
    FVector2f ValuesTimeRange;                                                        // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FNiagaraDistributionPosition : public FNiagaraDistributionVector3
{
}; // Size: 0x30

struct FNiagaraDistributionRangeColor : public FNiagaraDistributionBase
{
    FLinearColor min;                                                                 // 0x0018 (size: 0x10)
    FLinearColor max;                                                                 // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FNiagaraDistributionRangeFloat : public FNiagaraDistributionBase
{
    float min;                                                                        // 0x0018 (size: 0x4)
    float max;                                                                        // 0x001C (size: 0x4)

}; // Size: 0x20

struct FNiagaraDistributionRangeInt
{
    ENiagaraDistributionMode Mode;                                                    // 0x0000 (size: 0x4)
    FNiagaraVariableBase ParameterBinding;                                            // 0x0004 (size: 0xC)
    int32 min;                                                                        // 0x0010 (size: 0x4)
    int32 max;                                                                        // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FNiagaraDistributionRangeVector2 : public FNiagaraDistributionBase
{
    FVector2f min;                                                                    // 0x0018 (size: 0x8)
    FVector2f max;                                                                    // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FNiagaraDistributionRangeVector3 : public FNiagaraDistributionBase
{
    FVector3f min;                                                                    // 0x0018 (size: 0xC)
    FVector3f max;                                                                    // 0x0024 (size: 0xC)

}; // Size: 0x30

struct FNiagaraDistributionVector2 : public FNiagaraDistributionBase
{
    TArray<FVector2f> Values;                                                         // 0x0018 (size: 0x10)
    FVector2f ValuesTimeRange;                                                        // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FNiagaraDistributionVector3 : public FNiagaraDistributionBase
{
    TArray<FVector3f> Values;                                                         // 0x0018 (size: 0x10)
    FVector2f ValuesTimeRange;                                                        // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FNiagaraDouble
{
    double Value;                                                                     // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FNiagaraDynamicMeshMaterial
{
    class UMaterialInterface* Material;                                               // 0x0000 (size: 0x8)
    FNiagaraUserParameterBinding MaterialUserParamBinding;                            // 0x0008 (size: 0x20)

}; // Size: 0x28

struct FNiagaraDynamicMeshSection
{
    int32 NumTriangles;                                                               // 0x0000 (size: 0x4)
    int32 MaterialIndex;                                                              // 0x0004 (size: 0x4)

}; // Size: 0x8

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
    FNiagaraDataSetCompiledData DataSetCompiledData;                                  // 0x00F0 (size: 0x48)

}; // Size: 0x138

struct FNiagaraEmitterHandle
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FGuid ID;                                                                         // 0x0008 (size: 0x10)
    FName IdName;                                                                     // 0x0018 (size: 0x8)
    bool bIsEnabled;                                                                  // 0x0020 (size: 0x1)
    ENiagaraEmitterMode EmitterMode;                                                  // 0x0021 (size: 0x1)
    FVersionedNiagaraEmitter VersionedInstance;                                       // 0x0028 (size: 0x18)
    class UNiagaraStatelessEmitter* StatelessEmitter;                                 // 0x0040 (size: 0x8)

}; // Size: 0x48

struct FNiagaraEmitterID
{
    int32 ID;                                                                         // 0x0000 (size: 0x4)

}; // Size: 0x4

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

struct FNiagaraEmitterStateData
{
    ENiagaraEmitterInactiveResponse InactiveResponse;                                 // 0x0000 (size: 0x1)
    ENiagaraLoopBehavior LoopBehavior;                                                // 0x0001 (size: 0x1)
    int32 LoopCount;                                                                  // 0x0004 (size: 0x4)
    ENiagaraLoopDurationMode LoopDurationMode;                                        // 0x0008 (size: 0x1)
    FNiagaraDistributionRangeFloat LoopDuration;                                      // 0x0010 (size: 0x20)
    FNiagaraDistributionRangeFloat LoopDelay;                                         // 0x0030 (size: 0x20)
    uint8 bLoopDelayEnabled;                                                          // 0x0050 (size: 0x1)
    uint8 bRecalculateDurationEachLoop;                                               // 0x0050 (size: 0x1)
    uint8 bDelayFirstLoopOnly;                                                        // 0x0050 (size: 0x1)
    uint8 bRecalculateDelayEachLoop;                                                  // 0x0050 (size: 0x1)
    uint8 bEnableDistanceCulling;                                                     // 0x0050 (size: 0x1)
    uint8 bEnableVisibilityCulling;                                                   // 0x0050 (size: 0x1)
    uint8 bMinDistanceEnabled;                                                        // 0x0050 (size: 0x1)
    uint8 bMaxDistanceEnabled;                                                        // 0x0050 (size: 0x1)
    uint8 bResetAgeOnAwaken;                                                          // 0x0051 (size: 0x1)
    float MinDistance;                                                                // 0x0054 (size: 0x4)
    ENiagaraExecutionStateManagement MinDistanceReaction;                             // 0x0058 (size: 0x4)
    float MaxDistance;                                                                // 0x005C (size: 0x4)
    ENiagaraExecutionStateManagement MaxDistanceReaction;                             // 0x0060 (size: 0x4)
    ENiagaraExecutionStateManagement VisibilityCullReaction;                          // 0x0064 (size: 0x4)
    float VisibilityCullDelay;                                                        // 0x0068 (size: 0x4)

}; // Size: 0x70

struct FNiagaraEnumParameterMetaData
{
    FName OverrideName;                                                               // 0x0000 (size: 0x8)
    class UTexture2D* IconOverride;                                                   // 0x0008 (size: 0x8)
    bool bUseColorOverride;                                                           // 0x0010 (size: 0x1)
    FLinearColor ColorOverride;                                                       // 0x0014 (size: 0x10)

}; // Size: 0x28

struct FNiagaraEventGeneratorProperties
{
    int32 MaxEventsPerFrame;                                                          // 0x0000 (size: 0x4)
    FName ID;                                                                         // 0x0004 (size: 0x8)
    FNiagaraDataSetCompiledData DataSetCompiledData;                                  // 0x0010 (size: 0x48)

}; // Size: 0x58

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
    bool UpdateAttributeInitialValues;                                                // 0x0054 (size: 0x1)

}; // Size: 0x58

struct FNiagaraExternalUObjectInfo
{
    FNiagaraVariableBase Variable;                                                    // 0x0000 (size: 0xC)
    FName ExternalName;                                                               // 0x000C (size: 0x8)

}; // Size: 0x14

struct FNiagaraFloat
{
    float Value;                                                                      // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FNiagaraFunctionSignature
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    TArray<FNiagaraVariable> Inputs;                                                  // 0x0008 (size: 0x10)
    TArray<FNiagaraVariableBase> Outputs;                                             // 0x0018 (size: 0x10)
    FName OwnerName;                                                                  // 0x0028 (size: 0x8)
    uint8 bRequiresContext;                                                           // 0x0030 (size: 0x1)
    uint8 bRequiresExecPin;                                                           // 0x0030 (size: 0x1)
    uint8 bMemberFunction;                                                            // 0x0030 (size: 0x1)
    uint8 bExperimental;                                                              // 0x0030 (size: 0x1)
    uint8 bSupportsCPU;                                                               // 0x0030 (size: 0x1)
    uint8 bSupportsGPU;                                                               // 0x0030 (size: 0x1)
    uint8 bWriteFunction;                                                             // 0x0030 (size: 0x1)
    uint8 bReadFunction;                                                              // 0x0030 (size: 0x1)
    uint8 bSoftDeprecatedFunction;                                                    // 0x0031 (size: 0x1)
    uint8 bIsCompileTagGenerator;                                                     // 0x0031 (size: 0x1)
    uint8 bHidden;                                                                    // 0x0031 (size: 0x1)
    int32 ModuleUsageBitmask;                                                         // 0x0034 (size: 0x4)
    uint16 MiscUsageBitMask;                                                          // 0x0038 (size: 0x2)
    int32 ContextStageIndex;                                                          // 0x003C (size: 0x4)
    int16 RequiredInputs;                                                             // 0x0040 (size: 0x2)
    int16 RequiredOutputs;                                                            // 0x0042 (size: 0x2)
    TMap<class FName, class FName> FunctionSpecifiers;                                // 0x0048 (size: 0x50)

}; // Size: 0x98

struct FNiagaraGlobalBudgetScaling
{
    uint8 bCullByGlobalBudget;                                                        // 0x0000 (size: 0x1)
    uint8 bScaleMaxDistanceByGlobalBudgetUse;                                         // 0x0000 (size: 0x1)
    uint8 bScaleMaxInstanceCountByGlobalBudgetUse;                                    // 0x0000 (size: 0x1)
    uint8 bScaleSystemInstanceCountByGlobalBudgetUse;                                 // 0x0000 (size: 0x1)
    float MaxGlobalBudgetUsage;                                                       // 0x0004 (size: 0x4)
    FNiagaraLinearRamp MaxDistanceScaleByGlobalBudgetUse;                             // 0x0008 (size: 0x10)
    FNiagaraLinearRamp MaxInstanceCountScaleByGlobalBudgetUse;                        // 0x0018 (size: 0x10)
    FNiagaraLinearRamp MaxSystemInstanceCountScaleByGlobalBudgetUse;                  // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FNiagaraGraphViewSettings
{
    FVector2D Location;                                                               // 0x0000 (size: 0x10)
    float Zoom;                                                                       // 0x0010 (size: 0x4)
    bool bIsValid;                                                                    // 0x0014 (size: 0x1)

}; // Size: 0x18

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

struct FNiagaraInlineDynamicInputFormatToken
{
}; // Size: 0x1

struct FNiagaraInputConditionMetadata
{
    FName InputName;                                                                  // 0x0000 (size: 0x8)
    TArray<FString> TargetValues;                                                     // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FNiagaraInputParameterCustomization
{
    ENiagaraInputWidgetType WidgetType;                                               // 0x0000 (size: 0x1)
    bool bHasMinValue;                                                                // 0x0001 (size: 0x1)
    float MinValue;                                                                   // 0x0004 (size: 0x4)
    bool bHasMaxValue;                                                                // 0x0008 (size: 0x1)
    float MaxValue;                                                                   // 0x000C (size: 0x4)
    bool bHasStepWidth;                                                               // 0x0010 (size: 0x1)
    float StepWidth;                                                                  // 0x0014 (size: 0x4)
    TArray<FWidgetNamedInputValue> InputDropdownValues;                               // 0x0018 (size: 0x10)
    TArray<FNiagaraWidgetNamedIntegerInputValue> EnumStyleDropdownValues;             // 0x0028 (size: 0x10)
    int32 MaxSegmentsPerRow;                                                          // 0x0038 (size: 0x4)
    TArray<FWidgetSegmentValueOverride> SegmentValueOverrides;                        // 0x0040 (size: 0x10)
    bool bBroadcastValueChangesOnCommitOnly;                                          // 0x0050 (size: 0x1)

}; // Size: 0x58

struct FNiagaraInt32
{
    int32 Value;                                                                      // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FNiagaraLinearRamp
{
    float StartX;                                                                     // 0x0000 (size: 0x4)
    float StartY;                                                                     // 0x0004 (size: 0x4)
    float EndX;                                                                       // 0x0008 (size: 0x4)
    float EndY;                                                                       // 0x000C (size: 0x4)

}; // Size: 0x10

struct FNiagaraLwcStructConverter
{
    int32 LWCSize;                                                                    // 0x0000 (size: 0x4)
    int32 SWCSize;                                                                    // 0x0004 (size: 0x4)
    TArray<FNiagaraStructConversionStep> ConversionSteps;                             // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FNiagaraMaterialAttributeBinding
{
    FName MaterialParameterName;                                                      // 0x0000 (size: 0x8)
    FNiagaraVariableBase NiagaraVariable;                                             // 0x0008 (size: 0xC)
    FNiagaraVariableBase ResolvedNiagaraVariable;                                     // 0x0014 (size: 0xC)
    FNiagaraVariableBase NiagaraChildVariable;                                        // 0x0020 (size: 0xC)

}; // Size: 0x2C

struct FNiagaraMatrix
{
    FVector4f Row0;                                                                   // 0x0000 (size: 0x10)
    FVector4f Row1;                                                                   // 0x0010 (size: 0x10)
    FVector4f Row2;                                                                   // 0x0020 (size: 0x10)
    FVector4f Row3;                                                                   // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FNiagaraMeshMICOverride
{
    class UMaterialInterface* OriginalMaterial;                                       // 0x0000 (size: 0x8)
    class UMaterialInstanceConstant* ReplacementMaterial;                             // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FNiagaraMeshMaterialOverride
{
    class UMaterialInterface* ExplicitMat;                                            // 0x0000 (size: 0x8)
    FNiagaraUserParameterBinding UserParamBinding;                                    // 0x0008 (size: 0x20)

}; // Size: 0x28

struct FNiagaraMeshRendererMeshProperties
{
    class UStaticMesh* Mesh;                                                          // 0x0000 (size: 0x8)
    FNiagaraParameterBinding MeshParameterBinding;                                    // 0x0008 (size: 0xC)
    ENiagaraMeshLODMode LODMode;                                                      // 0x0014 (size: 0x1)
    int32 LODLevel;                                                                   // 0x0018 (size: 0x4)
    int32 LODBias;                                                                    // 0x001C (size: 0x4)
    float LODDistanceFactor;                                                          // 0x0020 (size: 0x4)
    bool bUseLODRange;                                                                // 0x0024 (size: 0x1)
    FIntVector2 LODRange;                                                             // 0x0028 (size: 0x8)
    FVector scale;                                                                    // 0x0030 (size: 0x18)
    FRotator Rotation;                                                                // 0x0048 (size: 0x18)
    FVector PivotOffset;                                                              // 0x0060 (size: 0x18)
    ENiagaraMeshPivotOffsetSpace PivotOffsetSpace;                                    // 0x0078 (size: 0x1)

}; // Size: 0x80

struct FNiagaraMessageStore
{
}; // Size: 0x1

struct FNiagaraModuleDependency
{
    FName ID;                                                                         // 0x0000 (size: 0x8)
    ENiagaraModuleDependencyType Type;                                                // 0x0008 (size: 0x1)
    ENiagaraModuleDependencyScriptConstraint ScriptConstraint;                        // 0x0009 (size: 0x1)
    FString RequiredVersion;                                                          // 0x0010 (size: 0x10)
    int32 OnlyEvaluateInScriptUsage;                                                  // 0x0020 (size: 0x4)
    FText Description;                                                                // 0x0028 (size: 0x10)

}; // Size: 0x60

struct FNiagaraNumeric
{
}; // Size: 0x1

struct FNiagaraOutlinerCaptureSettings
{
    bool bTriggerCapture;                                                             // 0x0000 (size: 0x1)
    uint32 CaptureDelayFrames;                                                        // 0x0004 (size: 0x4)
    bool bGatherPerfData;                                                             // 0x0008 (size: 0x1)
    uint32 SimCacheCaptureFrames;                                                     // 0x000C (size: 0x4)

}; // Size: 0x10

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
    uint8 bRequiresPersistentIDs;                                                     // 0x001C (size: 0x1)

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
    FVector3f LWCTile;                                                                // 0x0010 (size: 0xC)
    TArray<FNiagaraOutlinerEmitterInstanceData> Emitters;                             // 0x0020 (size: 0x10)
    ENiagaraExecutionState ActualExecutionState;                                      // 0x0030 (size: 0x4)
    ENiagaraExecutionState RequestedExecutionState;                                   // 0x0034 (size: 0x4)
    FNiagaraScalabilityState ScalabilityState;                                        // 0x0038 (size: 0xC)
    uint8 bPendingKill;                                                               // 0x0044 (size: 0x1)
    uint8 bUsingCullProxy;                                                            // 0x0044 (size: 0x1)
    ENCPoolMethod PoolMethod;                                                         // 0x0048 (size: 0x1)
    FNiagaraOutlinerTimingData AverageTime;                                           // 0x004C (size: 0x8)
    FNiagaraOutlinerTimingData MaxTime;                                               // 0x0054 (size: 0x8)
    TEnumAsByte<ETickingGroup> TickGroup;                                             // 0x005C (size: 0x1)
    TEnumAsByte<ENiagaraGpuComputeTickStage::Type> GpuTickStage;                      // 0x005D (size: 0x1)
    uint8 bIsSolo;                                                                    // 0x0060 (size: 0x1)
    uint8 bRequiresGlobalDistanceField;                                               // 0x0060 (size: 0x1)
    uint8 bRequiresDepthBuffer;                                                       // 0x0060 (size: 0x1)
    uint8 bRequiresEarlyViewData;                                                     // 0x0060 (size: 0x1)
    uint8 bRequiresViewUniformBuffer;                                                 // 0x0060 (size: 0x1)
    uint8 bRequiresRayTracingScene;                                                   // 0x0060 (size: 0x1)
    uint8 bRequiresCurrentFrameNDC;                                                   // 0x0060 (size: 0x1)

}; // Size: 0x68

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

struct FNiagaraParameterBinding
{
    FNiagaraVariableBase ResolvedParameter;                                           // 0x0000 (size: 0xC)

}; // Size: 0xC

struct FNiagaraParameterBindingWithValue : public FNiagaraParameterBinding
{
    TArray<uint8> DefaultValue;                                                       // 0x0010 (size: 0x10)

}; // Size: 0x20

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
    TWeakObjectPtr<class UObject> Owner;                                              // 0x0008 (size: 0x8)
    TArray<FNiagaraVariableWithOffset> SortedParameterOffsets;                        // 0x0010 (size: 0x10)
    TArray<uint8> ParameterData;                                                      // 0x0020 (size: 0x10)
    TArray<class UNiagaraDataInterface*> DataInterfaces;                              // 0x0030 (size: 0x10)
    TArray<class UObject*> UObjects;                                                  // 0x0040 (size: 0x10)
    TArray<FNiagaraPositionSource> OriginalPositionData;                              // 0x0050 (size: 0x10)

}; // Size: 0x88

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
    TArray<FNiagaraDeviceProfileStateEntry> DeviceProfileStates;                      // 0x0000 (size: 0x10)
    TArray<FNiagaraPlatformSetCVarCondition> CVarConditions;                          // 0x0010 (size: 0x10)
    int32 QualityLevelMask;                                                           // 0x0020 (size: 0x4)

}; // Size: 0x30

struct FNiagaraPlatformSetCVarCondition
{
    FName CVarName;                                                                   // 0x0000 (size: 0x8)
    ENiagaraCVarConditionResponse PassResponse;                                       // 0x0008 (size: 0x1)
    ENiagaraCVarConditionResponse FailResponse;                                       // 0x0009 (size: 0x1)
    bool Value;                                                                       // 0x000A (size: 0x1)
    int32 MinInt;                                                                     // 0x000C (size: 0x4)
    int32 MaxInt;                                                                     // 0x0010 (size: 0x4)
    float MinFloat;                                                                   // 0x0014 (size: 0x4)
    float MaxFloat;                                                                   // 0x0018 (size: 0x4)
    uint8 bUseMinInt;                                                                 // 0x001C (size: 0x1)
    uint8 bUseMaxInt;                                                                 // 0x001C (size: 0x1)
    uint8 bUseMinFloat;                                                               // 0x001C (size: 0x1)
    uint8 bUseMaxFloat;                                                               // 0x001C (size: 0x1)

}; // Size: 0x30

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

struct FNiagaraPlatformSetRedirect
{
    TArray<FName> ProfileNames;                                                       // 0x0000 (size: 0x10)
    ENiagaraDeviceProfileRedirectMode Mode;                                           // 0x0010 (size: 0x1)
    FName RedirectProfileName;                                                        // 0x0014 (size: 0x8)
    FNiagaraPlatformSetCVarCondition CVarConditionEnabled;                            // 0x0020 (size: 0x30)
    FNiagaraPlatformSetCVarCondition CVarConditionDisabled;                           // 0x0050 (size: 0x30)

}; // Size: 0x80

struct FNiagaraPosition : public FVector3f
{
}; // Size: 0xC

struct FNiagaraPositionSource
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FVector Value;                                                                    // 0x0008 (size: 0x18)

}; // Size: 0x20

struct FNiagaraRandInfo
{
    int32 Seed1;                                                                      // 0x0000 (size: 0x4)
    int32 Seed2;                                                                      // 0x0004 (size: 0x4)
    int32 Seed3;                                                                      // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FNiagaraRendererMaterialParameters
{
    TArray<FNiagaraMaterialAttributeBinding> AttributeBindings;                       // 0x0000 (size: 0x10)
    TArray<FNiagaraRendererMaterialScalarParameter> ScalarParameters;                 // 0x0010 (size: 0x10)
    TArray<FNiagaraRendererMaterialVectorParameter> VectorParameters;                 // 0x0020 (size: 0x10)
    TArray<FNiagaraRendererMaterialTextureParameter> TextureParameters;               // 0x0030 (size: 0x10)
    TArray<FNiagaraRendererMaterialStaticBoolParameter> StaticBoolParameters;         // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FNiagaraRendererMaterialScalarParameter
{
    FName MaterialParameterName;                                                      // 0x0000 (size: 0x8)
    float Value;                                                                      // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FNiagaraRendererMaterialStaticBoolParameter
{
    FName MaterialParameterName;                                                      // 0x0000 (size: 0x8)
    FName StaticVariableName;                                                         // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FNiagaraRendererMaterialTextureParameter
{
    FName MaterialParameterName;                                                      // 0x0000 (size: 0x8)
    class UTexture* Texture;                                                          // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FNiagaraRendererMaterialVectorParameter
{
    FName MaterialParameterName;                                                      // 0x0000 (size: 0x8)
    FLinearColor Value;                                                               // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FNiagaraRequestSimpleClientInfoMessage
{
}; // Size: 0x1

struct FNiagaraResolvedUObjectInfo
{
    FName ReadVariableName;                                                           // 0x0000 (size: 0x8)
    FNiagaraVariableBase ResolvedVariable;                                            // 0x0008 (size: 0xC)
    class UObject* Object;                                                            // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FNiagaraResolvedUserDataInterfaceBinding
{
    int32 UserParameterStoreDataInterfaceIndex;                                       // 0x0000 (size: 0x4)
    int32 ScriptParameterStoreDataInterfaceIndex;                                     // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FNiagaraRibbonShapeCustomVertex
{
    FVector2f position;                                                               // 0x0000 (size: 0x8)
    FVector2f Normal;                                                                 // 0x0008 (size: 0x8)
    float TextureV;                                                                   // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FNiagaraRibbonUVSettings
{
    ENiagaraRibbonUVDistributionMode DistributionMode;                                // 0x0000 (size: 0x1)
    ENiagaraRibbonUVEdgeMode LeadingEdgeMode;                                         // 0x0001 (size: 0x1)
    ENiagaraRibbonUVEdgeMode TrailingEdgeMode;                                        // 0x0002 (size: 0x1)
    uint8 bEnablePerParticleUOverride;                                                // 0x0003 (size: 0x1)
    uint8 bEnablePerParticleVRangeOverride;                                           // 0x0003 (size: 0x1)
    float TilingLength;                                                               // 0x0004 (size: 0x4)
    FVector2D Offset;                                                                 // 0x0008 (size: 0x10)
    FVector2D scale;                                                                  // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FNiagaraScalabilityManager
{
    class UNiagaraEffectType* EffectType;                                             // 0x0000 (size: 0x8)
    TArray<class UNiagaraComponent*> ManagedComponents;                               // 0x0008 (size: 0x10)

}; // Size: 0xE0

struct FNiagaraScalabilityState
{
    float Significance;                                                               // 0x0000 (size: 0x4)
    float LastVisibleTime;                                                            // 0x0004 (size: 0x4)
    uint8 bNewlyRegistered;                                                           // 0x000A (size: 0x1)
    uint8 bNewlyRegisteredDirty;                                                      // 0x000A (size: 0x1)
    uint8 bCulled;                                                                    // 0x000A (size: 0x1)
    uint8 bPreviousCulled;                                                            // 0x000A (size: 0x1)
    uint8 bCulledByDistance;                                                          // 0x000A (size: 0x1)
    uint8 bCulledByInstanceCount;                                                     // 0x000A (size: 0x1)
    uint8 bCulledByVisibility;                                                        // 0x000A (size: 0x1)
    uint8 bCulledByGlobalBudget;                                                      // 0x000A (size: 0x1)

}; // Size: 0xC

struct FNiagaraScriptAsyncCompileData
{
    TArray<FNiagaraVariable> RapidIterationParameters;                                // 0x00B0 (size: 0x10)
    TMap<class FName, class UNiagaraDataInterface*> NamedDataInterfaces;              // 0x00C0 (size: 0x50)

}; // Size: 0x110

struct FNiagaraScriptDataInterfaceCompileInfo
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    int32 UserPtrIdx;                                                                 // 0x0008 (size: 0x4)
    FNiagaraTypeDefinition Type;                                                      // 0x0010 (size: 0x10)
    FName RegisteredParameterMapRead;                                                 // 0x0020 (size: 0x8)
    FName RegisteredParameterMapWrite;                                                // 0x0028 (size: 0x8)
    bool bIsPlaceholder;                                                              // 0x0030 (size: 0x1)
    FString SourceEmitterName;                                                        // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FNiagaraScriptDataInterfaceInfo
{
    class UNiagaraDataInterface* DataInterface;                                       // 0x0000 (size: 0x8)
    FName Name;                                                                       // 0x0008 (size: 0x8)
    FName CompileName;                                                                // 0x0010 (size: 0x8)
    int32 UserPtrIdx;                                                                 // 0x0018 (size: 0x4)
    FNiagaraTypeDefinition Type;                                                      // 0x0020 (size: 0x10)
    FName RegisteredParameterMapRead;                                                 // 0x0030 (size: 0x8)
    FName RegisteredParameterMapWrite;                                                // 0x0038 (size: 0x8)
    FString SourceEmitterName;                                                        // 0x0040 (size: 0x10)

}; // Size: 0x50

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
    int32 ParameterSize;                                                              // 0x0088 (size: 0x4)
    uint8 bInitialized;                                                               // 0x008C (size: 0x1)

}; // Size: 0x90

struct FNiagaraScriptHighlight
{
    FLinearColor Color;                                                               // 0x0000 (size: 0x10)
    FText DisplayName;                                                                // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FNiagaraScriptInstanceParameterStore : public FNiagaraParameterStore
{
}; // Size: 0x98

struct FNiagaraScriptResolvedDataInterfaceInfo
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FName CompileName;                                                                // 0x0008 (size: 0x8)
    FString ResolvedSourceEmitterName;                                                // 0x0010 (size: 0x10)
    FNiagaraVariableBase ResolvedVariable;                                            // 0x0020 (size: 0xC)
    FNiagaraVariableBase ParameterStoreVariable;                                      // 0x002C (size: 0xC)
    bool bIsInternal;                                                                 // 0x0038 (size: 0x1)
    class UNiagaraDataInterface* ResolvedDataInterface;                               // 0x0040 (size: 0x8)
    int32 UserPtrIdx;                                                                 // 0x0048 (size: 0x4)

}; // Size: 0x50

struct FNiagaraScriptUObjectCompileInfo
{
    FNiagaraVariableBase Variable;                                                    // 0x0000 (size: 0xC)
    class UObject* Object;                                                            // 0x0010 (size: 0x8)
    FSoftObjectPath ObjectPath;                                                       // 0x0018 (size: 0x20)
    FName RegisteredParameterMapRead;                                                 // 0x0038 (size: 0x8)
    TArray<FName> RegisteredParameterMapWrites;                                       // 0x0040 (size: 0x10)

}; // Size: 0x50

struct FNiagaraScriptVariableBinding
{
    FName Name;                                                                       // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FNiagaraSimCacheCaptureParameters
{
    uint8 bAppendToSimCache;                                                          // 0x0000 (size: 0x1)
    uint8 bCaptureFixedNumberOfFrames;                                                // 0x0000 (size: 0x1)
    int32 NumFrames;                                                                  // 0x0004 (size: 0x4)
    int32 CaptureRate;                                                                // 0x0008 (size: 0x4)
    uint8 bUseTimeout;                                                                // 0x000C (size: 0x1)
    int32 TimeoutFrameCount;                                                          // 0x0010 (size: 0x4)
    uint8 bCaptureAllFramesImmediatly;                                                // 0x0014 (size: 0x1)
    float ImmediateCaptureDeltaTime;                                                  // 0x0018 (size: 0x4)

}; // Size: 0x1C

struct FNiagaraSimCacheCreateParameters
{
    ENiagaraSimCacheAttributeCaptureMode AttributeCaptureMode;                        // 0x0000 (size: 0x1)
    uint8 bAllowRebasing;                                                             // 0x0004 (size: 0x1)
    uint8 bAllowDataInterfaceCaching;                                                 // 0x0004 (size: 0x1)
    uint8 bAllowInterpolation;                                                        // 0x0004 (size: 0x1)
    uint8 bAllowVelocityExtrapolation;                                                // 0x0004 (size: 0x1)
    uint8 bAllowSerializeLargeCache;                                                  // 0x0004 (size: 0x1)
    uint8 bIncludeDebugData;                                                          // 0x0004 (size: 0x1)
    TArray<FName> RebaseIncludeAttributes;                                            // 0x0008 (size: 0x10)
    TArray<FName> RebaseExcludeAttributes;                                            // 0x0018 (size: 0x10)
    TArray<FName> InterpolationIncludeAttributes;                                     // 0x0028 (size: 0x10)
    TArray<FName> InterpolationExcludeAttributes;                                     // 0x0038 (size: 0x10)
    TArray<FName> ExplicitCaptureAttributes;                                          // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FNiagaraSimCacheDataBuffers
{
    uint32 NumInstances;                                                              // 0x0000 (size: 0x4)
    uint32 IDAcquireTag;                                                              // 0x0004 (size: 0x4)
    uint32 IDToIndexTableElements;                                                    // 0x0008 (size: 0x4)

}; // Size: 0x98

struct FNiagaraSimCacheDataBuffersLayout
{
    FName LayoutName;                                                                 // 0x0000 (size: 0x8)
    ENiagaraSimTarget SimTarget;                                                      // 0x0008 (size: 0x1)
    TArray<FNiagaraSimCacheVariable> Variables;                                       // 0x0010 (size: 0x10)
    uint16 FloatCount;                                                                // 0x0020 (size: 0x2)
    uint16 HalfCount;                                                                 // 0x0022 (size: 0x2)
    uint16 Int32Count;                                                                // 0x0024 (size: 0x2)
    bool bLocalSpace;                                                                 // 0x0026 (size: 0x1)
    bool bAllowInterpolation;                                                         // 0x0027 (size: 0x1)
    bool bAllowVelocityExtrapolation;                                                 // 0x0028 (size: 0x1)
    TArray<FName> RebaseVariableNames;                                                // 0x0030 (size: 0x10)
    TArray<FName> InterpVariableNames;                                                // 0x0040 (size: 0x10)
    uint16 ComponentVelocity;                                                         // 0x0050 (size: 0x2)

}; // Size: 0xB8

struct FNiagaraSimCacheDebugDataFrame
{
    TMap<class FString, class FNiagaraParameterStore> DebugParameterStores;           // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FNiagaraSimCacheEmitterFrame
{
    FBox LocalBounds;                                                                 // 0x0000 (size: 0x38)
    int32 TotalSpawnedParticles;                                                      // 0x0038 (size: 0x4)
    FNiagaraSimCacheDataBuffers ParticleDataBuffers;                                  // 0x0040 (size: 0x98)

}; // Size: 0xD8

struct FNiagaraSimCacheFrame
{
    FTransform LocalToWorld;                                                          // 0x0000 (size: 0x60)
    FVector3f LWCTile;                                                                // 0x0060 (size: 0xC)
    float SimulationAge;                                                              // 0x006C (size: 0x4)
    int32 SimulationTickCount;                                                        // 0x0070 (size: 0x4)
    FNiagaraSimCacheSystemFrame SystemData;                                           // 0x0078 (size: 0xD0)
    TArray<FNiagaraSimCacheEmitterFrame> EmitterData;                                 // 0x0148 (size: 0x10)

}; // Size: 0x160

struct FNiagaraSimCacheLayout
{
    FNiagaraSimCacheDataBuffersLayout SystemLayout;                                   // 0x0000 (size: 0xB8)
    TArray<FNiagaraSimCacheDataBuffersLayout> EmitterLayouts;                         // 0x00B8 (size: 0x10)

}; // Size: 0xC8

struct FNiagaraSimCacheSystemFrame
{
    FBox LocalBounds;                                                                 // 0x0000 (size: 0x38)
    FNiagaraSimCacheDataBuffers SystemDataBuffers;                                    // 0x0038 (size: 0x98)

}; // Size: 0xD0

struct FNiagaraSimCacheVariable
{
    FNiagaraVariableBase Variable;                                                    // 0x0000 (size: 0xC)
    uint16 FloatOffset;                                                               // 0x000C (size: 0x2)
    uint16 FloatCount;                                                                // 0x000E (size: 0x2)
    uint16 HalfOffset;                                                                // 0x0010 (size: 0x2)
    uint16 HalfCount;                                                                 // 0x0012 (size: 0x2)
    uint16 Int32Offset;                                                               // 0x0014 (size: 0x2)
    uint16 Int32Count;                                                                // 0x0016 (size: 0x2)

}; // Size: 0x18

struct FNiagaraSimStageExecutionLoopData
{
    FName NumLoopsBinding;                                                            // 0x0000 (size: 0x8)
    int32 NumLoops;                                                                   // 0x0008 (size: 0x4)
    int32 StartStageIndex;                                                            // 0x000C (size: 0x4)
    int32 EndStageIndex;                                                              // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FNiagaraSimStageExecutionLoopEditorData
{
}; // Size: 0x1

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

struct FNiagaraStackSection
{
    FName SectionIdentifier;                                                          // 0x0000 (size: 0x8)
    FText SectionDisplayName;                                                         // 0x0008 (size: 0x10)
    TArray<FText> Categories;                                                         // 0x0018 (size: 0x10)
    FText ToolTip;                                                                    // 0x0028 (size: 0x10)
    bool bEnabled;                                                                    // 0x0038 (size: 0x1)

}; // Size: 0x40

struct FNiagaraStatScope
{
    FName FullName;                                                                   // 0x0000 (size: 0x8)
    FName FriendlyName;                                                               // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FNiagaraStatelessDynamicParameterSet
{
    uint8 bXChannelEnabled;                                                           // 0x0000 (size: 0x1)
    uint8 bYChannelEnabled;                                                           // 0x0000 (size: 0x1)
    uint8 bZChannelEnabled;                                                           // 0x0000 (size: 0x1)
    uint8 bWChannelEnabled;                                                           // 0x0000 (size: 0x1)
    FNiagaraDistributionFloat XChannelDistribution;                                   // 0x0008 (size: 0x30)
    FNiagaraDistributionFloat YChannelDistribution;                                   // 0x0038 (size: 0x30)
    FNiagaraDistributionFloat ZChannelDistribution;                                   // 0x0068 (size: 0x30)
    FNiagaraDistributionFloat WChannelDistribution;                                   // 0x0098 (size: 0x30)

}; // Size: 0xC8

struct FNiagaraStatelessSpawnInfo
{
    ENiagaraStatelessSpawnInfoType Type;                                              // 0x0000 (size: 0x4)
    float SpawnTime;                                                                  // 0x0004 (size: 0x4)
    FNiagaraDistributionRangeInt Amount;                                              // 0x0008 (size: 0x18)
    FNiagaraDistributionRangeFloat Rate;                                              // 0x0020 (size: 0x20)
    uint8 bEnabled;                                                                   // 0x0040 (size: 0x1)
    uint8 bSpawnProbabilityEnabled;                                                   // 0x0040 (size: 0x1)
    FNiagaraDistributionRangeFloat SpawnProbability;                                  // 0x0048 (size: 0x20)

}; // Size: 0x68

struct FNiagaraStructConversionStep
{
    int32 LWCBytes;                                                                   // 0x0000 (size: 0x4)
    int32 LWCOffset;                                                                  // 0x0004 (size: 0x4)
    int32 SimulationBytes;                                                            // 0x0008 (size: 0x4)
    int32 SimulationOffset;                                                           // 0x000C (size: 0x4)
    ENiagaraStructConversionType ConversionType;                                      // 0x0010 (size: 0x1)

}; // Size: 0x14

struct FNiagaraSystemAsyncCompileResults
{
    TArray<class UObject*> RootObjects;                                               // 0x0000 (size: 0x10)
    TArray<FNiagaraVariable> ExposedVariables;                                        // 0x0068 (size: 0x10)

}; // Size: 0x88

struct FNiagaraSystemCompiledData
{
    FNiagaraParameterStore InstanceParamStore;                                        // 0x0000 (size: 0x88)
    FNiagaraDataSetCompiledData DataSetCompiledData;                                  // 0x0088 (size: 0x48)
    FNiagaraDataSetCompiledData SpawnInstanceParamsDataSetCompiledData;               // 0x00D0 (size: 0x48)
    FNiagaraDataSetCompiledData UpdateInstanceParamsDataSetCompiledData;              // 0x0118 (size: 0x48)
    FNiagaraParameterDataSetBindingCollection SpawnInstanceGlobalBinding;             // 0x0160 (size: 0x20)
    FNiagaraParameterDataSetBindingCollection SpawnInstanceSystemBinding;             // 0x0180 (size: 0x20)
    FNiagaraParameterDataSetBindingCollection SpawnInstanceOwnerBinding;              // 0x01A0 (size: 0x20)
    TArray<FNiagaraParameterDataSetBindingCollection> SpawnInstanceEmitterBindings;   // 0x01C0 (size: 0x10)
    FNiagaraParameterDataSetBindingCollection UpdateInstanceGlobalBinding;            // 0x01D0 (size: 0x20)
    FNiagaraParameterDataSetBindingCollection UpdateInstanceSystemBinding;            // 0x01F0 (size: 0x20)
    FNiagaraParameterDataSetBindingCollection UpdateInstanceOwnerBinding;             // 0x0210 (size: 0x20)
    TArray<FNiagaraParameterDataSetBindingCollection> UpdateInstanceEmitterBindings;  // 0x0230 (size: 0x10)

}; // Size: 0x240

struct FNiagaraSystemScalabilityOverride : public FNiagaraSystemScalabilitySettings
{
    uint8 bOverrideDistanceSettings;                                                  // 0x0098 (size: 0x1)
    uint8 bOverrideInstanceCountSettings;                                             // 0x0098 (size: 0x1)
    uint8 bOverridePerSystemInstanceCountSettings;                                    // 0x0098 (size: 0x1)
    uint8 bOverrideVisibilitySettings;                                                // 0x0098 (size: 0x1)
    uint8 bOverrideGlobalBudgetScalingSettings;                                       // 0x0098 (size: 0x1)
    uint8 bOverrideCullProxySettings;                                                 // 0x0098 (size: 0x1)

}; // Size: 0xA0

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
    float MaxDistance;                                                                // 0x0034 (size: 0x4)
    uint8 bCullByMaxTimeWithoutRender;                                                // 0x0038 (size: 0x1)
    int32 MaxInstances;                                                               // 0x003C (size: 0x4)
    int32 MaxSystemInstances;                                                         // 0x0040 (size: 0x4)
    float MaxTimeWithoutRender;                                                       // 0x0044 (size: 0x4)
    ENiagaraCullProxyMode CullProxyMode;                                              // 0x0048 (size: 0x4)
    int32 MaxSystemProxies;                                                           // 0x004C (size: 0x4)
    FNiagaraSystemVisibilityCullingSettings VisibilityCulling;                        // 0x0050 (size: 0xC)
    FNiagaraGlobalBudgetScaling BudgetScaling;                                        // 0x005C (size: 0x38)

}; // Size: 0x98

struct FNiagaraSystemScalabilitySettingsArray
{
    TArray<FNiagaraSystemScalabilitySettings> Settings;                               // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FNiagaraSystemSimCacheCaptureReply
{
    FName ComponentName;                                                              // 0x0000 (size: 0x8)
    TArray<uint8> SimCacheData;                                                       // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FNiagaraSystemSimCacheCaptureRequest
{
    FName ComponentName;                                                              // 0x0000 (size: 0x8)
    uint32 CaptureDelayFrames;                                                        // 0x0008 (size: 0x4)
    uint32 CaptureFrames;                                                             // 0x000C (size: 0x4)

}; // Size: 0x10

struct FNiagaraSystemStateData
{
    uint8 bRunSpawnScript;                                                            // 0x0000 (size: 0x1)
    uint8 bRunUpdateScript;                                                           // 0x0000 (size: 0x1)
    uint8 bIgnoreSystemState;                                                         // 0x0000 (size: 0x1)
    uint8 bRecalculateDurationEachLoop;                                               // 0x0000 (size: 0x1)
    uint8 bLoopDelayEnabled;                                                          // 0x0000 (size: 0x1)
    uint8 bDelayFirstLoopOnly;                                                        // 0x0000 (size: 0x1)
    uint8 bRecalculateDelayEachLoop;                                                  // 0x0000 (size: 0x1)
    ENiagaraSystemInactiveResponse InactiveResponse;                                  // 0x0004 (size: 0x1)
    ENiagaraLoopBehavior LoopBehavior;                                                // 0x0005 (size: 0x1)
    FNiagaraDistributionRangeFloat LoopDuration;                                      // 0x0008 (size: 0x20)
    int32 LoopCount;                                                                  // 0x0028 (size: 0x4)
    FNiagaraDistributionRangeFloat LoopDelay;                                         // 0x0030 (size: 0x20)

}; // Size: 0x50

struct FNiagaraSystemUpdateContext
{
    TArray<class UNiagaraComponent*> ComponentsToReset;                               // 0x0000 (size: 0x10)
    TArray<class UNiagaraComponent*> ComponentsToReInit;                              // 0x0010 (size: 0x10)
    TArray<class UNiagaraComponent*> ComponentsToNotifySimDestroy;                    // 0x0020 (size: 0x10)
    TArray<class UNiagaraComponent*> ComponentsToDestroyInstance;                     // 0x0030 (size: 0x10)
    TArray<class UNiagaraSystem*> SystemSimsToDestroy;                                // 0x0040 (size: 0x10)
    TArray<class UNiagaraSystem*> SystemSimsToRecache;                                // 0x0050 (size: 0x10)

}; // Size: 0x88

struct FNiagaraSystemVisibilityCullingSettings
{
    uint8 bCullWhenNotRendered;                                                       // 0x0000 (size: 0x1)
    uint8 bCullByViewFrustum;                                                         // 0x0000 (size: 0x1)
    uint8 bAllowPreCullingByViewFrustum;                                              // 0x0000 (size: 0x1)
    float MaxTimeOutsideViewFrustum;                                                  // 0x0004 (size: 0x4)
    float MaxTimeWithoutRender;                                                       // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FNiagaraTypeDefinition
{
    class UObject* ClassStructOrEnum;                                                 // 0x0000 (size: 0x8)
    uint16 UnderlyingType;                                                            // 0x0008 (size: 0x2)
    uint8 Flags;                                                                      // 0x000A (size: 0x1)

}; // Size: 0x10

struct FNiagaraTypeDefinitionHandle
{
    int32 RegisteredTypeIndex;                                                        // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FNiagaraTypeLayoutInfo
{
    uint16 NumFloatComponents;                                                        // 0x0000 (size: 0x2)
    uint16 NumInt32Components;                                                        // 0x0002 (size: 0x2)
    uint16 NumHalfComponents;                                                         // 0x0004 (size: 0x2)
    TArray<uint32> ComponentsOffsets;                                                 // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FNiagaraUObjectPropertyReaderRemap
{
    FName GraphName;                                                                  // 0x0000 (size: 0x8)
    FName RemapName;                                                                  // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FNiagaraUserParameterBinding
{
    FNiagaraVariable Parameter;                                                       // 0x0000 (size: 0x20)

}; // Size: 0x20

struct FNiagaraUserRedirectionParameterStore : public FNiagaraParameterStore
{
    TMap<class FNiagaraVariable, class FNiagaraVariable> UserParameterRedirects;      // 0x0088 (size: 0x50)

}; // Size: 0xD8

struct FNiagaraVMExecutableByteCode
{
    TArray<uint8> Data;                                                               // 0x0000 (size: 0x10)
    int32 UncompressedSize;                                                           // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FNiagaraVMExecutableData
{
    FNiagaraVMExecutableByteCode ByteCode;                                            // 0x0000 (size: 0x18)
    FNiagaraVMExecutableByteCode OptimizedByteCode;                                   // 0x0018 (size: 0x18)
    int32 NumTempRegisters;                                                           // 0x0068 (size: 0x4)
    int32 NumUserPtrs;                                                                // 0x006C (size: 0x4)
    TArray<FNiagaraCompilerTag> CompileTags;                                          // 0x0070 (size: 0x10)
    TArray<uint8> ScriptLiterals;                                                     // 0x0080 (size: 0x10)
    TArray<FNiagaraVariableBase> Attributes;                                          // 0x0090 (size: 0x10)
    FNiagaraScriptDataUsageInfo DataUsage;                                            // 0x00A0 (size: 0x1)
    TArray<FNiagaraScriptUObjectCompileInfo> UObjectInfos;                            // 0x00A8 (size: 0x10)
    TArray<FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo;                 // 0x00B8 (size: 0x10)
    TArray<FVMExternalFunctionBindingInfo> CalledVMExternalFunctions;                 // 0x00C8 (size: 0x10)
    TArray<FNiagaraDataSetID> ReadDataSets;                                           // 0x00E8 (size: 0x10)
    TArray<FNiagaraDataSetProperties> WriteDataSets;                                  // 0x00F8 (size: 0x10)
    TArray<FNiagaraStatScope> StatScopes;                                             // 0x0108 (size: 0x10)
    FNiagaraShaderScriptParametersMetadata ShaderScriptParametersMetadata;            // 0x0118 (size: 0x58)
    ENiagaraScriptCompileStatus LastCompileStatus;                                    // 0x0170 (size: 0x1)
    TArray<FSimulationStageMetaData> SimulationStageMetaData;                         // 0x0178 (size: 0x10)
    TArray<uint8> ExperimentalContextData;                                            // 0x0188 (size: 0x10)
    uint8 bReadsSignificanceIndex;                                                    // 0x0198 (size: 0x1)
    uint8 bNeedsGPUContextInit;                                                       // 0x0198 (size: 0x1)

}; // Size: 0x1A0

struct FNiagaraVMExecutableDataId
{
    FGuid CompilerVersionID;                                                          // 0x0000 (size: 0x10)
    ENiagaraScriptUsage ScriptUsageType;                                              // 0x0010 (size: 0x1)
    FGuid ScriptUsageTypeID;                                                          // 0x0014 (size: 0x10)
    uint8 bUsesRapidIterationParams;                                                  // 0x0024 (size: 0x1)
    uint8 bDisableDebugSwitches;                                                      // 0x0024 (size: 0x1)
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
    FNiagaraVariable RootVariable;                                                    // 0x0000 (size: 0x20)
    FNiagaraVariableBase ParamMapVariable;                                            // 0x0020 (size: 0xC)
    FName DataSetName;                                                                // 0x002C (size: 0x8)
    TEnumAsByte<ENiagaraBindingSource> BindingSourceMode;                             // 0x0034 (size: 0x1)
    uint8 bBindingExistsOnSource;                                                     // 0x0035 (size: 0x1)
    uint8 bIsCachedParticleValue;                                                     // 0x0035 (size: 0x1)

}; // Size: 0x38

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
    FText Definition;                                                                 // 0x0020 (size: 0x10)
    class UNiagaraDataInterface* DataInterface;                                       // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FNiagaraVariableLayoutInfo
{
    uint16 FloatComponentStart;                                                       // 0x0000 (size: 0x2)
    uint16 Int32ComponentStart;                                                       // 0x0002 (size: 0x2)
    uint16 HalfComponentStart;                                                        // 0x0004 (size: 0x2)
    FNiagaraTypeLayoutInfo LayoutInfo;                                                // 0x0008 (size: 0x18)

}; // Size: 0x20

struct FNiagaraVariableMetaData
{
    FText Description;                                                                // 0x0000 (size: 0x10)
    EUnit DisplayUnit;                                                                // 0x0010 (size: 0x1)
    bool bAdvancedDisplay;                                                            // 0x0011 (size: 0x1)
    bool bDisplayInOverviewStack;                                                     // 0x0012 (size: 0x1)
    int32 InlineParameterSortPriority;                                                // 0x0014 (size: 0x4)
    bool bOverrideColor;                                                              // 0x0018 (size: 0x1)
    FLinearColor InlineParameterColorOverride;                                        // 0x001C (size: 0x10)
    TArray<FNiagaraEnumParameterMetaData> InlineParameterEnumOverrides;               // 0x0030 (size: 0x10)
    bool bEnableBoolOverride;                                                         // 0x0040 (size: 0x1)
    FNiagaraBoolParameterMetaData InlineParameterBoolOverride;                        // 0x0048 (size: 0x28)
    bool bInlineEditConditionToggle;                                                  // 0x0070 (size: 0x1)
    FNiagaraInputConditionMetadata EditCondition;                                     // 0x0078 (size: 0x18)
    FNiagaraInputConditionMetadata VisibleCondition;                                  // 0x0090 (size: 0x18)
    TMap<class FName, class FString> PropertyMetaData;                                // 0x00A8 (size: 0x50)
    TArray<FName> AlternateAliases;                                                   // 0x00F8 (size: 0x10)
    FNiagaraInputParameterCustomization WidgetCustomization;                          // 0x0108 (size: 0x58)
    FGuid VariableGuid;                                                               // 0x0160 (size: 0x10)
    bool bIsStaticSwitch;                                                             // 0x0170 (size: 0x1)
    int32 StaticSwitchDefaultValue;                                                   // 0x0174 (size: 0x4)
    FText CategoryName;                                                               // 0x0178 (size: 0x10)
    FName ParentAttribute;                                                            // 0x0188 (size: 0x8)
    int32 EditorSortPriority;                                                         // 0x0190 (size: 0x4)

}; // Size: 0x198

struct FNiagaraVariableWithOffset : public FNiagaraVariableBase
{
    int32 Offset;                                                                     // 0x000C (size: 0x4)
    FNiagaraLwcStructConverter StructConverter;                                       // 0x0010 (size: 0x18)

}; // Size: 0x28

struct FNiagaraVariant
{
    class UObject* Object;                                                            // 0x0000 (size: 0x8)
    class UNiagaraDataInterface* DataInterface;                                       // 0x0008 (size: 0x8)
    TArray<uint8> Bytes;                                                              // 0x0010 (size: 0x10)
    ENiagaraVariantMode CurrentMode;                                                  // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FNiagaraWidgetNamedIntegerInputValue
{
    FText DisplayName;                                                                // 0x0000 (size: 0x10)
    FText ToolTip;                                                                    // 0x0010 (size: 0x10)

}; // Size: 0x20

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
    TArray<FNiagaraVariableBase> VariadicInputs;                                      // 0x0038 (size: 0x10)
    TArray<FNiagaraVariableBase> VariadicOutputs;                                     // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FVMFunctionSpecifier
{
    FName Key;                                                                        // 0x0000 (size: 0x8)
    FName Value;                                                                      // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FVersionedNiagaraEmitter
{
    class UNiagaraEmitter* Emitter;                                                   // 0x0000 (size: 0x8)
    FGuid Version;                                                                    // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FVersionedNiagaraEmitterData
{
    FNiagaraAssetVersion Version;                                                     // 0x0000 (size: 0x1C)
    bool bDeprecated;                                                                 // 0x001C (size: 0x1)
    FText DeprecationMessage;                                                         // 0x0020 (size: 0x10)
    bool bLocalSpace;                                                                 // 0x0030 (size: 0x1)
    bool bDeterminism;                                                                // 0x0031 (size: 0x1)
    int32 RandomSeed;                                                                 // 0x0034 (size: 0x4)
    uint8 bInterpolatedSpawning;                                                      // 0x0038 (size: 0x1)
    ENiagaraSimTarget SimTarget;                                                      // 0x003C (size: 0x1)
    ENiagaraEmitterCalculateBoundMode CalculateBoundsMode;                            // 0x003D (size: 0x1)
    FBox FixedBounds;                                                                 // 0x0040 (size: 0x38)
    uint8 bRequiresPersistentIDs;                                                     // 0x0078 (size: 0x1)
    TArray<FNiagaraEventScriptProperties> EventHandlerScriptProps;                    // 0x0080 (size: 0x10)
    FNiagaraPlatformSet Platforms;                                                    // 0x0090 (size: 0x30)
    FNiagaraEmitterScalabilityOverrides ScalabilityOverrides;                         // 0x00C0 (size: 0x10)
    int32 MaxGPUParticlesSpawnPerFrame;                                               // 0x00D0 (size: 0x4)
    EParticleAllocationMode AllocationMode;                                           // 0x00D4 (size: 0x1)
    int32 PreAllocationCount;                                                         // 0x00D8 (size: 0x4)
    TArray<FNiagaraDataInterfaceEmitterBinding> EmitterDependencies;                  // 0x00E0 (size: 0x10)
    FNiagaraEmitterScriptProperties UpdateScriptProps;                                // 0x00F0 (size: 0x28)
    FNiagaraEmitterScriptProperties SpawnScriptProps;                                 // 0x0118 (size: 0x28)
    FNiagaraParameterStore RendererBindings;                                          // 0x0140 (size: 0x88)
    TArray<FNiagaraExternalUObjectInfo> RendererBindingsExternalObjects;              // 0x01C8 (size: 0x10)
    TMap<class FNiagaraVariableBase, class FNiagaraVariableBase> ResolvedDIBindings;  // 0x01D8 (size: 0x50)
    TArray<class UNiagaraRendererProperties*> RendererProperties;                     // 0x0228 (size: 0x10)
    TArray<class UNiagaraSimulationStageBase*> SimulationStages;                      // 0x0238 (size: 0x10)
    TArray<FNiagaraSimStageExecutionLoopData> SimStageExecutionLoops;                 // 0x0248 (size: 0x10)
    class UNiagaraScript* GPUComputeScript;                                           // 0x0268 (size: 0x8)
    TArray<FName> SharedEventGeneratorIds;                                            // 0x0270 (size: 0x10)
    FNiagaraEmitterScalabilitySettings CurrentScalabilitySettings;                    // 0x0280 (size: 0x38)

}; // Size: 0x368

struct FVersionedNiagaraScriptData
{
}; // Size: 0x1

struct FWidgetNamedInputValue
{
    float Value;                                                                      // 0x0000 (size: 0x4)
    FText DisplayName;                                                                // 0x0008 (size: 0x10)
    FText ToolTip;                                                                    // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FWidgetSegmentValueOverride
{
    int32 EnumIndexToOverride;                                                        // 0x0000 (size: 0x4)
    bool bOverrideDisplayName;                                                        // 0x0004 (size: 0x1)
    FText DisplayNameOverride;                                                        // 0x0008 (size: 0x10)
    class UTexture2D* DisplayIcon;                                                    // 0x0018 (size: 0x8)

}; // Size: 0x20

class ANiagaraActor : public AActor
{
    class UNiagaraComponent* NiagaraComponent;                                        // 0x02A8 (size: 0x8)
    uint8 bDestroyOnSystemFinish;                                                     // 0x02B0 (size: 0x1)

    void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);
    void OnNiagaraSystemFinished(class UNiagaraComponent* FinishedComponent);
    bool GetDestroyOnSystemFinish();
}; // Size: 0x2B8

class ANiagaraLensEffectBase : public ANiagaraActor
{
    FTransform DesiredRelativeTransform;                                              // 0x02C0 (size: 0x60)
    float BaseAuthoredFOV;                                                            // 0x0320 (size: 0x4)
    uint8 bAllowMultipleInstances;                                                    // 0x0324 (size: 0x1)
    uint8 bResetWhenRetriggered;                                                      // 0x0324 (size: 0x1)
    TArray<class TSubclassOf<AActor>> EmittersToTreatAsSame;                          // 0x0328 (size: 0x10)
    class APlayerCameraManager* OwningCameraManager;                                  // 0x0338 (size: 0x8)

}; // Size: 0x340

class ANiagaraPerfBaselineActor : public AActor
{
    class UNiagaraBaselineController* Controller;                                     // 0x02A8 (size: 0x8)
    class UTextRenderComponent* Label;                                                // 0x02B0 (size: 0x8)

}; // Size: 0x2B8

class ANiagaraPreviewBase : public AActor
{

    void SetSystem(class UNiagaraSystem* InSystem);
    void SetLabelText(const FText& InXAxisText, const FText& InYAxisText);
}; // Size: 0x2A8

class ANiagaraPreviewGrid : public AActor
{
    class UNiagaraSystem* System;                                                     // 0x02A8 (size: 0x8)
    ENiagaraPreviewGridResetMode ResetMode;                                           // 0x02B0 (size: 0x1)
    class UNiagaraPreviewAxis* PreviewAxisX;                                          // 0x02B8 (size: 0x8)
    class UNiagaraPreviewAxis* PreviewAxisY;                                          // 0x02C0 (size: 0x8)
    TSubclassOf<class ANiagaraPreviewBase> PreviewClass;                              // 0x02C8 (size: 0x8)
    float SpacingX;                                                                   // 0x02D0 (size: 0x4)
    float SpacingY;                                                                   // 0x02D4 (size: 0x4)
    int32 NumX;                                                                       // 0x02D8 (size: 0x4)
    int32 NumY;                                                                       // 0x02DC (size: 0x4)
    TArray<class UChildActorComponent*> PreviewComponents;                            // 0x02E0 (size: 0x10)

    void SetPaused(bool bPaused);
    void GetPreviews(TArray<class UNiagaraComponent*>& OutPreviews);
    void DeactivatePreviews();
    void ActivatePreviews(bool bReset);
}; // Size: 0x2F8

class INiagaraParticleCallbackHandler : public IInterface
{

    void ReceiveParticleData(const TArray<FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, const FVector& SimulationPositionOffset);
}; // Size: 0x28

class INiagaraPhysicsAssetDICollectorInterface : public IInterface
{
}; // Size: 0x28

class INiagaraRenderableMeshInterface : public IInterface
{
}; // Size: 0x28

class INiagaraSimCacheCustomStorageInterface : public IInterface
{
}; // Size: 0x28

class UAsyncNiagaraCaptureSimCache : public UCancellableAsyncAction
{
    class UNiagaraSimCache* CaptureSimCache;                                          // 0x0030 (size: 0x8)
    class UNiagaraComponent* CaptureComponent;                                        // 0x0038 (size: 0x8)
    FAsyncNiagaraCaptureSimCacheCaptureComplete CaptureComplete;                      // 0x0040 (size: 0x10)
    void OnCaptureComplete(bool bSuccess);

    void OnCaptureComplete__DelegateSignature(bool bSuccess);
    class UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCacheUntilComplete(class UNiagaraSimCache* SimCache, FNiagaraSimCacheCreateParameters CreateParameters, class UNiagaraComponent* NiagaraComponent, class UNiagaraSimCache*& OutSimCache, int32 CaptureRate, bool bAdvanceSimulation, float AdvanceDeltaTime);
    class UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCacheMultiFrame(class UNiagaraSimCache* SimCache, FNiagaraSimCacheCreateParameters CreateParameters, class UNiagaraComponent* NiagaraComponent, class UNiagaraSimCache*& OutSimCache, int32 NumFrames, int32 CaptureRate, bool bAdvanceSimulation, float AdvanceDeltaTime);
    class UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCache(class UNiagaraSimCache* SimCache, FNiagaraSimCacheCreateParameters CreateParameters, class UNiagaraComponent* NiagaraComponent, FNiagaraSimCacheCaptureParameters CaptureParameters, class UNiagaraSimCache*& OutSimCache);
}; // Size: 0x130

class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{
}; // Size: 0x130

class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
}; // Size: 0x130

class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{
}; // Size: 0x130

class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{
}; // Size: 0x130

class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{
    FNiagaraVariable Parameter;                                                       // 0x0108 (size: 0x20)

}; // Size: 0x128

class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{
    ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior;                     // 0x00F8 (size: 0x4)
    ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior;               // 0x00FC (size: 0x4)
    ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior;                         // 0x0100 (size: 0x4)
    ENiagaraAgeUpdateMode AgeUpdateMode;                                              // 0x0104 (size: 0x1)
    bool bAllowScalability;                                                           // 0x0105 (size: 0x1)

}; // Size: 0x108

class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{
}; // Size: 0x110

class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x00F8 (size: 0x10)

}; // Size: 0x108

class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
    int32 ChannelsUsed;                                                               // 0x0130 (size: 0x4)

}; // Size: 0x138

class UNDIArraySimCacheData : public UObject
{
    TArray<FNDIArraySimCacheDataFrame> CpuFrameData;                                  // 0x0028 (size: 0x10)
    TArray<FNDIArraySimCacheDataFrame> GpuFrameData;                                  // 0x0038 (size: 0x10)
    TArray<uint8> BufferData;                                                         // 0x0048 (size: 0x10)

}; // Size: 0x58

class UNDIDataChannelWriteSimCacheData : public UObject
{
    TArray<FNDIDataChannelWriteSimCacheFrame> FrameData;                              // 0x0028 (size: 0x10)
    FSoftObjectPath DataChannelReference;                                             // 0x0038 (size: 0x20)
    class UNiagaraDataInterfaceDataChannelWrite* DataInterface;                       // 0x0058 (size: 0x8)

}; // Size: 0x68

class UNDILandscapeSimCacheData : public UObject
{
    TArray<class UTexture2D*> HeightFieldTextures;                                    // 0x0028 (size: 0x10)

}; // Size: 0x38

class UNDIMemoryBufferSimCacheData : public UObject
{
    TArray<FNDIMemoryBufferSimCacheDataFrame> FrameData;                              // 0x0028 (size: 0x10)
    TArray<uint32> BufferData;                                                        // 0x0038 (size: 0x10)

}; // Size: 0x48

class UNDIRenderTargetVolumeSimCacheData : public UObject
{
    FName CompressionType;                                                            // 0x0028 (size: 0x8)
    TArray<FNDIRenderTargetVolumeSimCacheFrame> Frames;                               // 0x0030 (size: 0x10)

}; // Size: 0x40

class UNDISimpleCounterSimCacheData : public UObject
{
    TArray<int32> Values;                                                             // 0x0028 (size: 0x10)

}; // Size: 0x38

class UNiagaraAssetTagDefinitions : public UObject
{
    FText DisplayName;                                                                // 0x0028 (size: 0x10)
    FText Description;                                                                // 0x0038 (size: 0x10)
    TArray<FNiagaraAssetTagDefinition> TagDefinitions;                                // 0x0048 (size: 0x10)
    bool bDisplayTagsAsFlatList;                                                      // 0x0058 (size: 0x1)
    int32 SortOrder;                                                                  // 0x005C (size: 0x4)

}; // Size: 0x60

class UNiagaraBakerOutput : public UObject
{
    FString OutputName;                                                               // 0x0028 (size: 0x10)

}; // Size: 0x38

class UNiagaraBakerOutputSimCache : public UNiagaraBakerOutput
{
    FString SimCacheAssetPathFormat;                                                  // 0x0038 (size: 0x10)
    FNiagaraSimCacheCreateParameters CreateParameters;                                // 0x0048 (size: 0x58)

}; // Size: 0xA0

class UNiagaraBakerOutputSparseVolumeTexture : public UNiagaraBakerOutput
{
    FNiagaraBakerTextureSource SourceBinding;                                         // 0x0038 (size: 0x18)
    FNiagaraParameterBinding VolumeWorldSpaceSizeBinding;                             // 0x0050 (size: 0xC)
    FString SparseVolumeTextureAssetPathFormat;                                       // 0x0060 (size: 0x10)

}; // Size: 0x70

class UNiagaraBakerOutputTexture2D : public UNiagaraBakerOutput
{
    FNiagaraBakerTextureSource SourceBinding;                                         // 0x0038 (size: 0x18)
    uint8 bGenerateAtlas;                                                             // 0x0050 (size: 0x1)
    uint8 bGenerateFrames;                                                            // 0x0050 (size: 0x1)
    uint8 bExportFrames;                                                              // 0x0050 (size: 0x1)
    uint8 bSetTextureAddressX;                                                        // 0x0050 (size: 0x1)
    uint8 bSetTextureAddressY;                                                        // 0x0050 (size: 0x1)
    FIntPoint FrameSize;                                                              // 0x0054 (size: 0x8)
    FIntPoint AtlasTextureSize;                                                       // 0x005C (size: 0x8)
    TEnumAsByte<TextureAddress> TextureAddressX;                                      // 0x006C (size: 0x1)
    TEnumAsByte<TextureAddress> TextureAddressY;                                      // 0x006D (size: 0x1)
    FString AtlasAssetPathFormat;                                                     // 0x0070 (size: 0x10)
    FString FramesAssetPathFormat;                                                    // 0x0080 (size: 0x10)
    FString FramesExportPathFormat;                                                   // 0x0090 (size: 0x10)

}; // Size: 0xA0

class UNiagaraBakerOutputVolumeTexture : public UNiagaraBakerOutput
{
    FNiagaraBakerTextureSource SourceBinding;                                         // 0x0038 (size: 0x18)
    uint8 bGenerateAtlas;                                                             // 0x0050 (size: 0x1)
    uint8 bGenerateFrames;                                                            // 0x0050 (size: 0x1)
    uint8 bExportFrames;                                                              // 0x0050 (size: 0x1)
    FString AtlasAssetPathFormat;                                                     // 0x0058 (size: 0x10)
    FString FramesAssetPathFormat;                                                    // 0x0068 (size: 0x10)
    FString FramesExportPathFormat;                                                   // 0x0078 (size: 0x10)

}; // Size: 0x88

class UNiagaraBakerSettings : public UObject
{
    float StartSeconds;                                                               // 0x0028 (size: 0x4)
    float DurationSeconds;                                                            // 0x002C (size: 0x4)
    int32 FramesPerSecond;                                                            // 0x0030 (size: 0x4)
    uint8 bLockToSimulationFrameRate;                                                 // 0x0034 (size: 0x1)
    uint8 bPreviewLooping;                                                            // 0x0034 (size: 0x1)
    FIntPoint FramesPerDimension;                                                     // 0x0038 (size: 0x8)
    TArray<class UNiagaraBakerOutput*> Outputs;                                       // 0x0040 (size: 0x10)
    TArray<FNiagaraBakerCameraSettings> CameraSettings;                               // 0x0050 (size: 0x10)
    int32 CurrentCameraIndex;                                                         // 0x0060 (size: 0x4)
    FName BakeQualityLevel;                                                           // 0x0064 (size: 0x8)
    uint8 bRenderComponentOnly;                                                       // 0x006C (size: 0x1)
    TArray<FNiagaraBakerTextureSettings> OutputTextures;                              // 0x0070 (size: 0x10)
    ENiagaraBakerViewMode CameraViewportMode;                                         // 0x0080 (size: 0x4)
    FVector CameraViewportLocation;                                                   // 0x0088 (size: 0xA8)
    FRotator CameraViewportRotation;                                                  // 0x0130 (size: 0xA8)
    float CameraOrbitDistance;                                                        // 0x01D8 (size: 0x4)
    float CameraFOV;                                                                  // 0x01DC (size: 0x4)
    float CameraOrthoWidth;                                                           // 0x01E0 (size: 0x4)
    uint8 bUseCameraAspectRatio;                                                      // 0x01E4 (size: 0x1)
    float CameraAspectRatio;                                                          // 0x01E8 (size: 0x4)

}; // Size: 0x1F0

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
    class UNiagaraSystem* Asset;                                                      // 0x04E8 (size: 0x8)
    ENiagaraTickBehavior TickBehavior;                                                // 0x04F0 (size: 0x1)
    int32 RandomSeedOffset;                                                           // 0x04F4 (size: 0x4)
    FNiagaraUserRedirectionParameterStore OverrideParameters;                         // 0x04F8 (size: 0xD8)
    uint8 bEnableGpuComputeDebug;                                                     // 0x05D0 (size: 0x1)
    uint8 bOverrideWarmupSettings;                                                    // 0x05D0 (size: 0x1)
    int32 WarmupTickCount;                                                            // 0x05D4 (size: 0x4)
    float WarmupTickDelta;                                                            // 0x05D8 (size: 0x4)
    uint8 bAutoDestroy;                                                               // 0x0610 (size: 0x1)
    uint8 bRenderingEnabled;                                                          // 0x0610 (size: 0x1)
    uint8 bAutoManageAttachment;                                                      // 0x0610 (size: 0x1)
    uint8 bAutoAttachWeldSimulatedBodies;                                             // 0x0610 (size: 0x1)
    float MaxTimeBeforeForceUpdateTransform;                                          // 0x0614 (size: 0x4)
    ENiagaraOcclusionQueryMode OcclusionQueryMode;                                    // 0x0619 (size: 0x1)
    FNiagaraComponentOnSystemFinished OnSystemFinished;                               // 0x0620 (size: 0x10)
    void OnNiagaraSystemFinished(class UNiagaraComponent* PSystem);
    TWeakObjectPtr<class USceneComponent> AutoAttachParent;                           // 0x0630 (size: 0x8)
    FName AutoAttachSocketName;                                                       // 0x0638 (size: 0x8)
    EAttachmentRule AutoAttachLocationRule;                                           // 0x0640 (size: 0x1)
    EAttachmentRule AutoAttachRotationRule;                                           // 0x0641 (size: 0x1)
    EAttachmentRule AutoAttachScaleRule;                                              // 0x0642 (size: 0x1)
    uint8 bAllowScalability;                                                          // 0x064C (size: 0x1)
    class UNiagaraSimCache* SimCache;                                                 // 0x0738 (size: 0x8)
    class UNiagaraCullProxyComponent* CullProxy;                                      // 0x0740 (size: 0x8)

    void SetVariableVec4(FName InVariableName, const FVector4& InValue);
    void SetVariableVec3(FName InVariableName, FVector InValue);
    void SetVariableVec2(FName InVariableName, FVector2D InValue);
    void SetVariableTextureRenderTarget(FName InVariableName, class UTextureRenderTarget* TextureRenderTarget);
    void SetVariableTexture(FName InVariableName, class UTexture* Texture);
    void SetVariableStaticMesh(FName InVariableName, class UStaticMesh* InValue);
    void SetVariableQuat(FName InVariableName, const FQuat& InValue);
    void SetVariablePosition(FName InVariableName, FVector InValue);
    void SetVariableObject(FName InVariableName, class UObject* Object);
    void SetVariableMatrix(FName InVariableName, const FMatrix& InValue);
    void SetVariableMaterial(FName InVariableName, class UMaterialInterface* Object);
    void SetVariableLinearColor(FName InVariableName, const FLinearColor& InValue);
    void SetVariableInt(FName InVariableName, int32 InValue);
    void SetVariableFloat(FName InVariableName, float InValue);
    void SetVariableBool(FName InVariableName, bool InValue);
    void SetVariableActor(FName InVariableName, class AActor* Actor);
    void SetTickBehavior(ENiagaraTickBehavior NewTickBehavior);
    void SetSystemFixedBounds(FBox LocalBounds);
    void SetSimCache(class UNiagaraSimCache* SimCache, bool bResetSystem);
    void SetSeekDelta(float InSeekDelta);
    void SetRenderingEnabled(bool bInRenderingEnabled);
    void SetRandomSeedOffset(int32 NewRandomSeedOffset);
    void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance, float PreviewMaxDistance);
    void SetPaused(bool bInPaused);
    void SetOcclusionQueryMode(ENiagaraOcclusionQueryMode Mode);
    void SetNiagaraVariableVec4(FString InVariableName, const FVector4& InValue);
    void SetNiagaraVariableVec3(FString InVariableName, FVector InValue);
    void SetNiagaraVariableVec2(FString InVariableName, FVector2D InValue);
    void SetNiagaraVariableQuat(FString InVariableName, const FQuat& InValue);
    void SetNiagaraVariablePosition(FString InVariableName, FVector InValue);
    void SetNiagaraVariableObject(FString InVariableName, class UObject* Object);
    void SetNiagaraVariableMatrix(FString InVariableName, const FMatrix& InValue);
    void SetNiagaraVariableLinearColor(FString InVariableName, const FLinearColor& InValue);
    void SetNiagaraVariableInt(FString InVariableName, int32 InValue);
    void SetNiagaraVariableFloat(FString InVariableName, float InValue);
    void SetNiagaraVariableBool(FString InVariableName, bool InValue);
    void SetNiagaraVariableActor(FString InVariableName, class AActor* Actor);
    void SetMaxSimTime(float InMaxTime);
    void SetLockDesiredAgeDeltaTimeToSeekDelta(bool bLock);
    void SetGpuComputeDebug(bool bEnableDebug);
    void SetForceSolo(bool bInForceSolo);
    void SetForceLocalPlayerEffect(bool bIsPlayerEffect);
    void SetEmitterFixedBounds(FName EmitterName, FBox LocalBounds);
    void SetDesiredAge(float InDesiredAge);
    void SetCustomTimeDilation(float Dilation);
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
    FBox GetSystemFixedBounds();
    class UNiagaraSimCache* GetSimCache();
    float GetSeekDelta();
    int32 GetRandomSeedOffset();
    bool GetPreviewLODDistanceEnabled();
    float GetPreviewLODDistance();
    ENiagaraOcclusionQueryMode GetOcclusionQueryMode();
    float GetMaxSimTime();
    bool GetLockDesiredAgeDeltaTimeToSeekDelta();
    bool GetForceSolo();
    bool GetForceLocalPlayerEffect();
    FBox GetEmitterFixedBounds(FName EmitterName);
    float GetDesiredAge();
    class UNiagaraDataInterface* GetDataInterface(FString Name);
    float GetCustomTimeDilation();
    class UNiagaraSystem* GetAsset();
    bool GetAllowScalability();
    ENiagaraAgeUpdateMode GetAgeUpdateMode();
    void ClearSystemFixedBounds();
    void ClearSimCache(bool bResetSystem);
    void ClearEmitterFixedBounds(FName EmitterName);
    void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);
    void AdvanceSimulation(int32 TickCount, float TickDeltaSeconds);
}; // Size: 0x750

class UNiagaraComponentPool : public UObject
{
    TMap<class UNiagaraSystem*, class FNCPool> WorldParticleSystemPools;              // 0x0028 (size: 0x50)

}; // Size: 0x80

class UNiagaraComponentRendererProperties : public UNiagaraRendererProperties
{
    TSubclassOf<class USceneComponent> ComponentType;                                 // 0x00B8 (size: 0x8)
    uint32 ComponentCountLimit;                                                       // 0x00C0 (size: 0x4)
    FNiagaraVariableAttributeBinding EnabledBinding;                                  // 0x00C8 (size: 0x38)
    FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;                    // 0x0100 (size: 0x38)
    bool bAssignComponentsOnParticleID;                                               // 0x0138 (size: 0x1)
    bool bCreateComponentFirstParticleFrame;                                          // 0x0139 (size: 0x1)
    bool bOnlyActivateNewlyAquiredComponents;                                         // 0x013A (size: 0x1)
    int32 RendererVisibility;                                                         // 0x013C (size: 0x4)
    class USceneComponent* TemplateComponent;                                         // 0x0140 (size: 0x8)
    TArray<FNiagaraComponentPropertyBinding> PropertyBindings;                        // 0x0148 (size: 0x10)

}; // Size: 0x1B0

class UNiagaraConvertInPlaceUtilityBase : public UObject
{
}; // Size: 0x28

class UNiagaraCullProxyComponent : public UNiagaraComponent
{
    TArray<FNiagaraCulledComponentInfo> Instances;                                    // 0x0748 (size: 0x10)

}; // Size: 0x760

class UNiagaraDIRigidMeshCollisionFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetSourceActors(class UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<class AActor*>& SourceActors);
}; // Size: 0x28

class UNiagaraDataChannel : public UObject
{
    TArray<FNiagaraDataChannelVariable> ChannelVariables;                             // 0x0028 (size: 0x10)
    bool bKeepPreviousFrameData;                                                      // 0x0038 (size: 0x1)
    bool bEnforceTickGroupReadWriteOrder;                                             // 0x0039 (size: 0x1)
    TEnumAsByte<ETickingGroup> FinalWriteTickGroup;                                   // 0x003A (size: 0x1)

}; // Size: 0x58

class UNiagaraDataChannelAsset : public UObject
{
    class UNiagaraDataChannel* DataChannel;                                           // 0x0028 (size: 0x8)

}; // Size: 0x30

class UNiagaraDataChannelHandler : public UObject
{
    TWeakObjectPtr<class UNiagaraDataChannel> DataChannel;                            // 0x0028 (size: 0x8)
    class UNiagaraDataChannelWriter* Writer;                                          // 0x0030 (size: 0x8)
    class UNiagaraDataChannelReader* Reader;                                          // 0x0038 (size: 0x8)

    class UNiagaraDataChannelWriter* GetDataChannelWriter();
    class UNiagaraDataChannelReader* GetDataChannelReader();
}; // Size: 0x60

class UNiagaraDataChannelHandler_Global : public UNiagaraDataChannelHandler
{
}; // Size: 0x70

class UNiagaraDataChannelHandler_Islands : public UNiagaraDataChannelHandler
{
    TArray<int32> ActiveIslands;                                                      // 0x0060 (size: 0x10)
    TArray<int32> FreeIslands;                                                        // 0x0070 (size: 0x10)
    TArray<FNDCIsland> IslandPool;                                                    // 0x0080 (size: 0x10)

}; // Size: 0x90

class UNiagaraDataChannelLibrary : public UBlueprintFunctionLibrary
{

    void WriteToNiagaraDataChannelSingle(const class UObject* WorldContextObject, const class UNiagaraDataChannelAsset* Channel, FNiagaraDataChannelSearchParameters SearchParams, bool bVisibleToBlueprint, bool bVisibleToNiagaraCPU, bool bVisibleToNiagaraGPU);
    class UNiagaraDataChannelWriter* WriteToNiagaraDataChannel(const class UObject* WorldContextObject, const class UNiagaraDataChannelAsset* Channel, FNiagaraDataChannelSearchParameters SearchParams, int32 Count, bool bVisibleToGame, bool bVisibleToCPU, bool bVisibleToGPU, FString DebugSource);
    void ReadFromNiagaraDataChannelSingle(const class UObject* WorldContextObject, const class UNiagaraDataChannelAsset* Channel, int32 Index, FNiagaraDataChannelSearchParameters SearchParams, bool bReadPreviousFrame, ENiagartaDataChannelReadResult& ReadResult);
    class UNiagaraDataChannelReader* ReadFromNiagaraDataChannel(const class UObject* WorldContextObject, const class UNiagaraDataChannelAsset* Channel, FNiagaraDataChannelSearchParameters SearchParams, bool bReadPreviousFrame);
    class UNiagaraDataChannelHandler* GetNiagaraDataChannel(const class UObject* WorldContextObject, const class UNiagaraDataChannelAsset* Channel);
    int32 GetDataChannelElementCount(const class UObject* WorldContextObject, const class UNiagaraDataChannelAsset* Channel, FNiagaraDataChannelSearchParameters SearchParams, bool bReadPreviousFrame);
}; // Size: 0x28

class UNiagaraDataChannelReader : public UObject
{
    class UNiagaraDataChannelHandler* Owner;                                          // 0x0040 (size: 0x8)

    FVector4 ReadVector4(FName VarName, int32 Index, bool& IsValid);
    FVector2D ReadVector2D(FName VarName, int32 Index, bool& IsValid);
    FVector ReadVector(FName VarName, int32 Index, bool& IsValid);
    FNiagaraSpawnInfo ReadSpawnInfo(FName VarName, int32 Index, bool& IsValid);
    FQuat ReadQuat(FName VarName, int32 Index, bool& IsValid);
    FVector ReadPosition(FName VarName, int32 Index, bool& IsValid);
    FLinearColor ReadLinearColor(FName VarName, int32 Index, bool& IsValid);
    int32 ReadInt(FName VarName, int32 Index, bool& IsValid);
    FNiagaraID ReadID(FName VarName, int32 Index, bool& IsValid);
    double ReadFloat(FName VarName, int32 Index, bool& IsValid);
    uint8 ReadEnum(FName VarName, int32 Index, bool& IsValid);
    bool ReadBool(FName VarName, int32 Index, bool& IsValid);
    int32 Num();
    bool InitAccess(FNiagaraDataChannelSearchParameters SearchParams, bool bReadPrevFrameData);
}; // Size: 0x48

class UNiagaraDataChannelWriter : public UObject
{
    class UNiagaraDataChannelHandler* Owner;                                          // 0x0038 (size: 0x8)

    void WriteVector4(FName VarName, int32 Index, FVector4 InData);
    void WriteVector2D(FName VarName, int32 Index, FVector2D InData);
    void WriteVector(FName VarName, int32 Index, FVector InData);
    void WriteSpawnInfo(FName VarName, int32 Index, FNiagaraSpawnInfo InData);
    void WriteQuat(FName VarName, int32 Index, FQuat InData);
    void WritePosition(FName VarName, int32 Index, FVector InData);
    void WriteLinearColor(FName VarName, int32 Index, FLinearColor InData);
    void WriteInt(FName VarName, int32 Index, int32 InData);
    void WriteID(FName VarName, int32 Index, FNiagaraID InData);
    void WriteFloat(FName VarName, int32 Index, double InData);
    void WriteEnum(FName VarName, int32 Index, uint8 InData);
    void WriteBool(FName VarName, int32 Index, bool InData);
    int32 Num();
    bool InitWrite(FNiagaraDataChannelSearchParameters SearchParams, int32 Count, bool bVisibleToGame, bool bVisibleToCPU, bool bVisibleToGPU, FString DebugSource);
}; // Size: 0x40

class UNiagaraDataChannel_Global : public UNiagaraDataChannel
{
}; // Size: 0x58

class UNiagaraDataChannel_Islands : public UNiagaraDataChannel
{
    ENiagraDataChannel_IslandMode Mode;                                               // 0x0058 (size: 0x1)
    FVector InitialExtents;                                                           // 0x0060 (size: 0x18)
    FVector MaxExtents;                                                               // 0x0078 (size: 0x18)
    FVector PerElementExtents;                                                        // 0x0090 (size: 0x18)
    TArray<TSoftObjectPtr<UNiagaraSystem>> Systems;                                   // 0x00A8 (size: 0x10)
    int32 IslandPoolSize;                                                             // 0x00B8 (size: 0x4)
    FNDCIslandDebugDrawSettings DebugDrawSettings;                                    // 0x00BC (size: 0x4)
    TArray<class UNiagaraSystem*> SystemsInternal;                                    // 0x00C0 (size: 0x10)

}; // Size: 0xE0

class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{
}; // Size: 0x38

class UNiagaraDataInterface2DArrayTexture : public UNiagaraDataInterface
{
    class UTexture* Texture;                                                          // 0x0038 (size: 0x8)
    FNiagaraUserParameterBinding TextureUserParameter;                                // 0x0040 (size: 0x20)

}; // Size: 0x60

class UNiagaraDataInterfaceActorComponent : public UNiagaraDataInterface
{
    ENDIActorComponentSourceMode SourceMode;                                          // 0x0038 (size: 0x1)
    int32 LocalPlayerIndex;                                                           // 0x003C (size: 0x4)
    TLazyObjectPtr<class AActor> SourceActor;                                         // 0x0040 (size: 0x18)
    FNiagaraUserParameterBinding ActorOrComponentParameter;                           // 0x0058 (size: 0x20)
    bool bRequireCurrentFrameData;                                                    // 0x0078 (size: 0x1)

}; // Size: 0x80

class UNiagaraDataInterfaceArray : public UNiagaraDataInterfaceRWBase
{
    ENiagaraGpuSyncMode GpuSyncMode;                                                  // 0x0048 (size: 0x1)
    int32 MaxElements;                                                                // 0x004C (size: 0x4)

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
    TArray<FVector2f> InternalFloatData;                                              // 0x0050 (size: 0x10)

}; // Size: 0x60

class UNiagaraDataInterfaceArrayFloat3 : public UNiagaraDataInterfaceArray
{
    TArray<FVector3f> InternalFloatData;                                              // 0x0050 (size: 0x10)

}; // Size: 0x60

class UNiagaraDataInterfaceArrayFloat4 : public UNiagaraDataInterfaceArray
{
    TArray<FVector4f> InternalFloatData;                                              // 0x0050 (size: 0x10)

}; // Size: 0x60

class UNiagaraDataInterfaceArrayFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, const FVector& Value, bool bSizeToFit);
    void SetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, const FVector4& Value, bool bSizeToFit);
    void SetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<FVector4>& ArrayData);
    void SetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, const FVector2D& Value, bool bSizeToFit);
    void SetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<FVector2D>& ArrayData);
    void SetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<FVector>& ArrayData);
    void SetNiagaraArrayUInt8Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, int32 Value, bool bSizeToFit);
    void SetNiagaraArrayUInt8(class UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<int32>& ArrayData);
    void SetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, const FQuat& Value, bool bSizeToFit);
    void SetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<FQuat>& ArrayData);
    void SetNiagaraArrayPositionValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, const FVector& Value, bool bSizeToFit);
    void SetNiagaraArrayPosition(class UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<FVector>& ArrayData);
    void SetNiagaraArrayMatrixValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, const FMatrix& Value, bool bSizeToFit, bool bApplyLWCRebase);
    void SetNiagaraArrayMatrix(class UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<FMatrix>& ArrayData, bool bApplyLWCRebase);
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
    int32 GetNiagaraArrayUInt8Value(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index);
    TArray<int32> GetNiagaraArrayUInt8(class UNiagaraComponent* NiagaraSystem, FName OverrideName);
    FQuat GetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index);
    TArray<FQuat> GetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, FName OverrideName);
    FVector GetNiagaraArrayPositionValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index);
    TArray<FVector> GetNiagaraArrayPosition(class UNiagaraComponent* NiagaraSystem, FName OverrideName);
    FMatrix GetNiagaraArrayMatrixValue(class UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, bool bApplyLWCRebase);
    TArray<FMatrix> GetNiagaraArrayMatrix(class UNiagaraComponent* NiagaraSystem, FName OverrideName, bool bApplyLWCRebase);
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

class UNiagaraDataInterfaceArrayMatrix : public UNiagaraDataInterfaceArray
{
    TArray<FMatrix44f> InternalMatrixData;                                            // 0x0050 (size: 0x10)

}; // Size: 0x60

class UNiagaraDataInterfaceArrayNiagaraID : public UNiagaraDataInterfaceArray
{
    TArray<FNiagaraID> IntData;                                                       // 0x0050 (size: 0x10)

}; // Size: 0x60

class UNiagaraDataInterfaceArrayPosition : public UNiagaraDataInterfaceArray
{
    TArray<FNiagaraPosition> PositionData;                                            // 0x0050 (size: 0x10)

}; // Size: 0x60

class UNiagaraDataInterfaceArrayQuat : public UNiagaraDataInterfaceArray
{
    TArray<FQuat4f> InternalQuatData;                                                 // 0x0050 (size: 0x10)

}; // Size: 0x60

class UNiagaraDataInterfaceArrayUInt8 : public UNiagaraDataInterfaceArray
{
    TArray<uint8> InternalIntData;                                                    // 0x0050 (size: 0x10)

}; // Size: 0x60

class UNiagaraDataInterfaceAsyncGpuTrace : public UNiagaraDataInterface
{
    int32 MaxTracesPerParticle;                                                       // 0x0038 (size: 0x4)
    int32 MaxRetraces;                                                                // 0x003C (size: 0x4)
    TEnumAsByte<ENDICollisionQuery_AsyncGpuTraceProvider::Type> TraceProvider;        // 0x0040 (size: 0x1)

}; // Size: 0x48

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
    FNiagaraUserParameterBinding ConfigurationUserParameter;                          // 0x0060 (size: 0x20)
    bool bLimitPlaysPerTick;                                                          // 0x0080 (size: 0x1)
    int32 MaxPlaysPerTick;                                                            // 0x0084 (size: 0x4)
    bool bStopWhenComponentIsDestroyed;                                               // 0x0088 (size: 0x1)
    bool bAllowLoopingOneShotSounds;                                                  // 0x0089 (size: 0x1)

}; // Size: 0x90

class UNiagaraDataInterfaceAudioPlayerSettings : public UObject
{
    bool bOverrideConcurrency;                                                        // 0x0028 (size: 0x1)
    class USoundConcurrency* Concurrency;                                             // 0x0030 (size: 0x8)
    bool bOverrideAttenuationSettings;                                                // 0x0038 (size: 0x1)
    FSoundAttenuationSettings AttenuationSettings;                                    // 0x0040 (size: 0x3D0)

}; // Size: 0x410

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
}; // Size: 0x40

class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{
    FRichCurve RedCurve;                                                              // 0x0070 (size: 0x80)
    FRichCurve GreenCurve;                                                            // 0x00F0 (size: 0x80)
    FRichCurve BlueCurve;                                                             // 0x0170 (size: 0x80)
    FRichCurve AlphaCurve;                                                            // 0x01F0 (size: 0x80)

}; // Size: 0x270

class UNiagaraDataInterfaceConsoleVariable : public UNiagaraDataInterface
{
}; // Size: 0x38

class UNiagaraDataInterfaceCubeTexture : public UNiagaraDataInterface
{
    class UTexture* Texture;                                                          // 0x0038 (size: 0x8)
    FNiagaraUserParameterBinding TextureUserParameter;                                // 0x0040 (size: 0x20)

}; // Size: 0x60

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
    uint8 bUseLUT;                                                                    // 0x005C (size: 0x1)
    uint8 bExposeCurve;                                                               // 0x005C (size: 0x1)
    FName ExposedName;                                                                // 0x0060 (size: 0x8)
    class UTexture2D* ExposedTexture;                                                 // 0x0068 (size: 0x8)

}; // Size: 0x70

class UNiagaraDataInterfaceDataChannelRead : public UNiagaraDataInterfaceRWBase
{
    class UNiagaraDataChannelAsset* Channel;                                          // 0x0038 (size: 0x8)
    bool bReadCurrentFrame;                                                           // 0x0040 (size: 0x1)
    bool bUpdateSourceDataEveryTick;                                                  // 0x0041 (size: 0x1)
    bool bOverrideSpawnGroupToDataChannelIndex;                                       // 0x0042 (size: 0x1)
    FNDIDataChannelCompiledData CompiledData;                                         // 0x0048 (size: 0x70)

}; // Size: 0xB8

class UNiagaraDataInterfaceDataChannelWrite : public UNiagaraDataInterface
{
    ENiagaraDataChannelAllocationMode AllocationMode;                                 // 0x0040 (size: 0x1)
    uint32 AllocationCount;                                                           // 0x0044 (size: 0x4)
    bool bPublishToGame;                                                              // 0x0048 (size: 0x1)
    bool bPublishToCPU;                                                               // 0x0049 (size: 0x1)
    bool bPublishToGPU;                                                               // 0x004A (size: 0x1)
    bool bUpdateDestinationDataEveryTick;                                             // 0x004B (size: 0x1)
    class UNiagaraDataChannelAsset* Channel;                                          // 0x0050 (size: 0x8)
    FNDIDataChannelWriteCompiledData CompiledData;                                    // 0x0058 (size: 0xB8)

}; // Size: 0x110

class UNiagaraDataInterfaceDebugDraw : public UNiagaraDataInterface
{
    uint32 OverrideMaxLineInstances;                                                  // 0x0038 (size: 0x4)

}; // Size: 0x40

class UNiagaraDataInterfaceDynamicMesh : public UNiagaraDataInterface
{
    TArray<FNiagaraDynamicMeshSection> Sections;                                      // 0x0040 (size: 0x10)
    TArray<FNiagaraDynamicMeshMaterial> Materials;                                    // 0x0050 (size: 0x10)
    int32 NumVertices;                                                                // 0x0060 (size: 0x4)
    int32 NumTexCoords;                                                               // 0x0064 (size: 0x4)
    bool bHasColors;                                                                  // 0x0068 (size: 0x1)
    bool bHasTangentBasis;                                                            // 0x0069 (size: 0x1)
    bool bClearTrianglesPerFrame;                                                     // 0x006A (size: 0x1)
    FBox DefaultBounds;                                                               // 0x0070 (size: 0x38)

}; // Size: 0xA8

class UNiagaraDataInterfaceEmitterProperties : public UNiagaraDataInterface
{
    FNiagaraDataInterfaceEmitterBinding EmitterBinding;                               // 0x0038 (size: 0xC)

}; // Size: 0x48

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
    bool ClearBeforeNonIterationStage;                                                // 0x0038 (size: 0x1)
    int32 NumCellsX;                                                                  // 0x003C (size: 0x4)
    int32 NumCellsY;                                                                  // 0x0040 (size: 0x4)
    int32 NumCellsMaxAxis;                                                            // 0x0044 (size: 0x4)
    int32 NumAttributes;                                                              // 0x0048 (size: 0x4)
    bool SetGridFromMaxAxis;                                                          // 0x004C (size: 0x1)
    FVector2D WorldBBoxSize;                                                          // 0x0050 (size: 0x10)

}; // Size: 0x60

class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
{
    FNiagaraUserParameterBinding RenderTargetUserParameter;                           // 0x0060 (size: 0x20)
    ENiagaraGpuBufferFormat OverrideBufferFormat;                                     // 0x0080 (size: 0x1)
    uint8 bOverrideFormat;                                                            // 0x0081 (size: 0x1)
    TMap<uint64, UTextureRenderTarget2DArray*> ManagedRenderTargets;                  // 0x00D8 (size: 0x50)

    void GetTextureSize(const class UNiagaraComponent* Component, int32& SizeX, int32& SizeY);
    void GetRawTextureSize(const class UNiagaraComponent* Component, int32& SizeX, int32& SizeY);
    bool FillTexture2D(const class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32 AttributeIndex);
    bool FillRawTexture2D(const class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32& TilesX, int32& TilesY);
}; // Size: 0x128

class UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2DCollection
{
    FString EmitterName;                                                              // 0x0128 (size: 0x10)
    FString DIName;                                                                   // 0x0138 (size: 0x10)

}; // Size: 0x148

class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
{
    bool ClearBeforeNonIterationStage;                                                // 0x0038 (size: 0x1)
    FIntVector NumCells;                                                              // 0x003C (size: 0xC)
    float CellSize;                                                                   // 0x0048 (size: 0x4)
    int32 NumCellsMaxAxis;                                                            // 0x004C (size: 0x4)
    ESetResolutionMethod SetResolutionMethod;                                         // 0x0050 (size: 0x4)
    FVector WorldBBoxSize;                                                            // 0x0058 (size: 0x18)

}; // Size: 0x70

class UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D
{
    int32 NumAttributes;                                                              // 0x0070 (size: 0x4)
    FNiagaraUserParameterBinding RenderTargetUserParameter;                           // 0x0078 (size: 0x20)
    ENiagaraGpuBufferFormat OverrideBufferFormat;                                     // 0x0098 (size: 0x1)
    uint8 bOverrideFormat;                                                            // 0x0099 (size: 0x1)

    void GetTextureSize(const class UNiagaraComponent* Component, int32& SizeX, int32& SizeY, int32& SizeZ);
    void GetRawTextureSize(const class UNiagaraComponent* Component, int32& SizeX, int32& SizeY, int32& SizeZ);
    bool FillVolumeTexture(const class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32 AttributeIndex);
    bool FillRawVolumeTexture(const class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32& TilesX, int32& TilesY, int32& TileZ);
}; // Size: 0xF0

class UNiagaraDataInterfaceGrid3DCollectionReader : public UNiagaraDataInterfaceGrid3DCollection
{
    FString EmitterName;                                                              // 0x00F0 (size: 0x10)
    FString DIName;                                                                   // 0x0100 (size: 0x10)

}; // Size: 0x110

class UNiagaraDataInterfaceIntRenderTarget2D : public UNiagaraDataInterfaceRWBase
{
    FIntPoint Size;                                                                   // 0x0038 (size: 0x8)
    FNiagaraUserParameterBinding RenderTargetUserParameter;                           // 0x0040 (size: 0x20)

}; // Size: 0x60

class UNiagaraDataInterfaceLandscape : public UNiagaraDataInterface
{
    class AActor* SourceLandscape;                                                    // 0x0040 (size: 0x8)
    ENDILandscape_SourceMode SourceMode;                                              // 0x0048 (size: 0x1)
    TArray<class UPhysicalMaterial*> PhysicalMaterials;                               // 0x0050 (size: 0x10)
    bool bVirtualTexturesSupported;                                                   // 0x0060 (size: 0x1)

}; // Size: 0x68

class UNiagaraDataInterfaceMemoryBuffer : public UNiagaraDataInterface
{
    int32 DefaultNumElements;                                                         // 0x0040 (size: 0x4)
    ENiagaraGpuSyncMode GpuSyncMode;                                                  // 0x0044 (size: 0x1)

}; // Size: 0x48

class UNiagaraDataInterfaceMeshRendererInfo : public UNiagaraDataInterface
{
    class UNiagaraMeshRendererProperties* MeshRenderer;                               // 0x0038 (size: 0x8)

}; // Size: 0x50

class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
{
    uint32 MaxNeighborsPerCell;                                                       // 0x0070 (size: 0x4)

}; // Size: 0x78

class UNiagaraDataInterfaceOcclusion : public UNiagaraDataInterface
{
}; // Size: 0x38

class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterfaceRWBase
{
    FNiagaraDataInterfaceEmitterBinding EmitterBinding;                               // 0x0038 (size: 0xC)

}; // Size: 0x48

class UNiagaraDataInterfacePhysicsAsset : public UNiagaraDataInterface
{
    class UPhysicsAsset* DefaultSource;                                               // 0x0038 (size: 0x8)
    TSoftObjectPtr<AActor> SoftSourceActor;                                           // 0x0040 (size: 0x28)
    FNiagaraUserParameterBinding MeshUserParameter;                                   // 0x0068 (size: 0x20)

}; // Size: 0xA8

class UNiagaraDataInterfacePlatformSet : public UNiagaraDataInterface
{
    FNiagaraPlatformSet Platforms;                                                    // 0x0038 (size: 0x30)

}; // Size: 0x68

class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
{
}; // Size: 0x38

class UNiagaraDataInterfaceRasterizationGrid3D : public UNiagaraDataInterfaceGrid3D
{
    int32 NumAttributes;                                                              // 0x0070 (size: 0x4)
    float Precision;                                                                  // 0x0074 (size: 0x4)
    int32 ResetValue;                                                                 // 0x0078 (size: 0x4)

}; // Size: 0x80

class UNiagaraDataInterfaceRenderTarget2D : public UNiagaraDataInterfaceRWBase
{
    FIntPoint Size;                                                                   // 0x0040 (size: 0x8)
    ENiagaraMipMapGeneration MipMapGeneration;                                        // 0x0048 (size: 0x1)
    ENiagaraMipMapGenerationType MipMapGenerationType;                                // 0x0049 (size: 0x1)
    TEnumAsByte<ETextureRenderTargetFormat> OverrideRenderTargetFormat;               // 0x004A (size: 0x1)
    TEnumAsByte<TextureFilter> OverrideRenderTargetFilter;                            // 0x004B (size: 0x1)
    uint8 bInheritUserParameterSettings;                                              // 0x004C (size: 0x1)
    uint8 bOverrideFormat;                                                            // 0x004C (size: 0x1)
    FNiagaraUserParameterBinding RenderTargetUserParameter;                           // 0x0050 (size: 0x20)

}; // Size: 0xC0

class UNiagaraDataInterfaceRenderTarget2DArray : public UNiagaraDataInterfaceRWBase
{
    FIntVector Size;                                                                  // 0x0038 (size: 0xC)
    TEnumAsByte<ETextureRenderTargetFormat> OverrideRenderTargetFormat;               // 0x0044 (size: 0x1)
    TEnumAsByte<TextureFilter> OverrideRenderTargetFilter;                            // 0x0045 (size: 0x1)
    uint8 bInheritUserParameterSettings;                                              // 0x0046 (size: 0x1)
    uint8 bOverrideFormat;                                                            // 0x0046 (size: 0x1)
    FNiagaraUserParameterBinding RenderTargetUserParameter;                           // 0x0048 (size: 0x20)

}; // Size: 0x68

class UNiagaraDataInterfaceRenderTargetCube : public UNiagaraDataInterfaceRWBase
{
    int32 Size;                                                                       // 0x0038 (size: 0x4)
    TEnumAsByte<ETextureRenderTargetFormat> OverrideRenderTargetFormat;               // 0x003C (size: 0x1)
    TEnumAsByte<TextureFilter> OverrideRenderTargetFilter;                            // 0x003D (size: 0x1)
    uint8 bInheritUserParameterSettings;                                              // 0x003E (size: 0x1)
    uint8 bOverrideFormat;                                                            // 0x003E (size: 0x1)
    FNiagaraUserParameterBinding RenderTargetUserParameter;                           // 0x0040 (size: 0x20)

}; // Size: 0x60

class UNiagaraDataInterfaceRenderTargetVolume : public UNiagaraDataInterfaceRWBase
{
    FIntVector Size;                                                                  // 0x0040 (size: 0xC)
    TEnumAsByte<ETextureRenderTargetFormat> OverrideRenderTargetFormat;               // 0x004C (size: 0x1)
    TEnumAsByte<TextureFilter> OverrideRenderTargetFilter;                            // 0x004D (size: 0x1)
    uint8 bInheritUserParameterSettings;                                              // 0x004E (size: 0x1)
    uint8 bOverrideFormat;                                                            // 0x004E (size: 0x1)
    FNiagaraUserParameterBinding RenderTargetUserParameter;                           // 0x0050 (size: 0x20)

}; // Size: 0x70

class UNiagaraDataInterfaceRigidMeshCollisionQuery : public UNiagaraDataInterface
{
    TArray<FName> ActorTags;                                                          // 0x0038 (size: 0x10)
    TArray<FName> ComponentTags;                                                      // 0x0048 (size: 0x10)
    TArray<TSoftObjectPtr<AActor>> SourceActors;                                      // 0x0058 (size: 0x10)
    bool OnlyUseMoveable;                                                             // 0x0068 (size: 0x1)
    bool UseComplexCollisions;                                                        // 0x0069 (size: 0x1)
    bool bFilterByObjectType;                                                         // 0x006A (size: 0x1)
    bool GlobalSearchAllowed;                                                         // 0x006B (size: 0x1)
    bool GlobalSearchForced;                                                          // 0x006C (size: 0x1)
    bool GlobalSearchFallback_Unscripted;                                             // 0x006D (size: 0x1)
    int32 MaxNumPrimitives;                                                           // 0x0070 (size: 0x4)

}; // Size: 0x78

class UNiagaraDataInterfaceSceneCapture2D : public UNiagaraDataInterface
{
    ENDISceneCapture2DSourceMode SourceMode;                                          // 0x0038 (size: 0x1)
    FNiagaraUserParameterBinding SceneCaptureUserParameter;                           // 0x0040 (size: 0x20)
    bool bAutoMoveWithComponent;                                                      // 0x0060 (size: 0x1)
    ENDISceneCapture2DOffsetMode AutoMoveOffsetLocationMode;                          // 0x0061 (size: 0x1)
    FVector AutoMoveOffsetLocation;                                                   // 0x0068 (size: 0x18)
    ENDISceneCapture2DOffsetMode AutoMoveOffsetRotationMode;                          // 0x0080 (size: 0x1)
    FRotator AutoMoveOffsetRotation;                                                  // 0x0088 (size: 0x18)
    TEnumAsByte<ESceneCaptureSource> ManagedCaptureSource;                            // 0x00A0 (size: 0x1)
    FIntPoint ManagedTextureSize;                                                     // 0x00A4 (size: 0x8)
    TEnumAsByte<ETextureRenderTargetFormat> ManagedTextureFormat;                     // 0x00AC (size: 0x1)
    TEnumAsByte<ECameraProjectionMode::Type> ManagedProjectionType;                   // 0x00AD (size: 0x1)
    float ManagedFOVAngle;                                                            // 0x00B0 (size: 0x4)
    float ManagedOrthoWidth;                                                          // 0x00B4 (size: 0x4)
    bool bManagedCaptureEveryFrame;                                                   // 0x00B8 (size: 0x1)
    bool bManagedCaptureOnMovement;                                                   // 0x00B9 (size: 0x1)
    TArray<class AActor*> ManagedShowOnlyActors;                                      // 0x00C0 (size: 0x10)
    TMap<uint64, USceneCaptureComponent2D*> ManagedCaptureComponents;                 // 0x00D8 (size: 0x50)

    void SetSceneCapture2DManagedShowOnlyActors(class UNiagaraComponent* NiagaraSystem, const FName ParameterName, TArray<class AActor*> ShowOnlyActors);
}; // Size: 0x128

class UNiagaraDataInterfaceSimCacheReader : public UNiagaraDataInterface
{
    FNiagaraUserParameterBinding SimCacheBinding;                                     // 0x0038 (size: 0x20)
    class UNiagaraSimCache* SimCache;                                                 // 0x0058 (size: 0x8)
    FName EmitterBinding;                                                             // 0x0060 (size: 0x8)

}; // Size: 0x68

class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterfaceRWBase
{
    ENiagaraGpuSyncMode GpuSyncMode;                                                  // 0x0040 (size: 0x1)
    int32 InitialValue;                                                               // 0x0044 (size: 0x4)

}; // Size: 0x48

class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{
    ENDISkeletalMesh_SourceMode SourceMode;                                           // 0x0038 (size: 0x1)
    class USkeletalMesh* DefaultMesh;                                                 // 0x0040 (size: 0x8)
    TSoftObjectPtr<AActor> SoftSourceActor;                                           // 0x0048 (size: 0x28)
    TArray<FName> ComponentTags;                                                      // 0x0070 (size: 0x10)
    class USkeletalMeshComponent* SourceComponent;                                    // 0x0080 (size: 0x8)
    FNiagaraUserParameterBinding MeshUserParameter;                                   // 0x0088 (size: 0x20)
    ENDISkeletalMesh_SkinningMode SkinningMode;                                       // 0x00A8 (size: 0x1)
    TArray<FName> SamplingRegions;                                                    // 0x00B0 (size: 0x10)
    int32 WholeMeshLOD;                                                               // 0x00C0 (size: 0x4)
    TArray<FName> FilteredBones;                                                      // 0x00C8 (size: 0x10)
    TArray<FName> FilteredSockets;                                                    // 0x00D8 (size: 0x10)
    FName ExcludeBoneName;                                                            // 0x00E8 (size: 0x8)
    uint8 bExcludeBone;                                                               // 0x00F0 (size: 0x1)
    int32 UvSetIndex;                                                                 // 0x00F4 (size: 0x4)
    bool bRequireCurrentFrameData;                                                    // 0x00F8 (size: 0x1)
    bool bReadDeformedGeometry;                                                       // 0x00F9 (size: 0x1)

    void OnSourceEndPlay(class AActor* InSource, TEnumAsByte<EEndPlayReason::Type> Reason);
}; // Size: 0x100

class UNiagaraDataInterfaceSocketReader : public UNiagaraDataInterface
{
    ENDISocketReaderSourceMode SourceMode;                                            // 0x0038 (size: 0x1)
    TArray<FName> FilteredSockets;                                                    // 0x0040 (size: 0x10)
    TLazyObjectPtr<class AActor> SourceActor;                                         // 0x0050 (size: 0x18)
    class UObject* SourceAsset;                                                       // 0x0068 (size: 0x8)
    UClass* AttachComponentClass;                                                     // 0x0070 (size: 0x8)
    FName AttachComponentTag;                                                         // 0x0078 (size: 0x8)
    FNiagaraUserParameterBinding ObjectParameterBinding;                              // 0x0080 (size: 0x20)
    bool bUpdateSocketsPerFrame;                                                      // 0x00A0 (size: 0x1)
    bool bRequireCurrentFrameData;                                                    // 0x00A1 (size: 0x1)

}; // Size: 0xA8

class UNiagaraDataInterfaceSparseVolumeTexture : public UNiagaraDataInterface
{
    class USparseVolumeTexture* SparseVolumeTexture;                                  // 0x0038 (size: 0x8)
    FNiagaraUserParameterBinding SparseVolumeTextureUserParameter;                    // 0x0040 (size: 0x20)
    bool BlockingStreamingRequests;                                                   // 0x0060 (size: 0x1)

}; // Size: 0x68

class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{
    TSoftObjectPtr<AActor> SoftSourceActor;                                           // 0x0038 (size: 0x28)
    FNiagaraUserParameterBinding SplineUserParameter;                                 // 0x0060 (size: 0x20)
    bool bUseLUT;                                                                     // 0x0080 (size: 0x1)
    int32 NumLUTSteps;                                                                // 0x0084 (size: 0x4)

}; // Size: 0xD8

class UNiagaraDataInterfaceSpriteRendererInfo : public UNiagaraDataInterface
{
    class UNiagaraSpriteRendererProperties* SpriteRenderer;                           // 0x0038 (size: 0x8)

}; // Size: 0x40

class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{
    ENDIStaticMesh_SourceMode SourceMode;                                             // 0x0038 (size: 0x1)
    class UStaticMesh* DefaultMesh;                                                   // 0x0040 (size: 0x8)
    TSoftObjectPtr<AActor> SoftSourceActor;                                           // 0x0048 (size: 0x28)
    class UStaticMeshComponent* SourceComponent;                                      // 0x0070 (size: 0x8)
    FNDIStaticMeshSectionFilter SectionFilter;                                        // 0x0078 (size: 0x10)
    bool bCaptureTransformsPerFrame;                                                  // 0x0088 (size: 0x1)
    bool bUsePhysicsBodyVelocity;                                                     // 0x0089 (size: 0x1)
    bool bAllowSamplingFromStreamingLODs;                                             // 0x008A (size: 0x1)
    int32 LODIndex;                                                                   // 0x008C (size: 0x4)
    FNiagaraUserParameterBinding LODIndexUserParameter;                               // 0x0090 (size: 0x20)
    FNiagaraUserParameterBinding MeshParameterBinding;                                // 0x00B0 (size: 0x20)
    int32 InstanceIndex;                                                              // 0x00D0 (size: 0x4)
    TArray<FName> FilteredSockets;                                                    // 0x00D8 (size: 0x10)

    void SetNiagaraStaticMeshDIInstanceIndex(class UNiagaraComponent* NiagaraSystem, const FName UserParameterName, int32 NewInstanceIndex);
    void OnSourceEndPlay(class AActor* InSource, TEnumAsByte<EEndPlayReason::Type> Reason);
}; // Size: 0xF0

class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{
    class UTexture* Texture;                                                          // 0x0038 (size: 0x8)
    FNiagaraUserParameterBinding TextureUserParameter;                                // 0x0040 (size: 0x20)

}; // Size: 0x60

class UNiagaraDataInterfaceUObjectPropertyReader : public UNiagaraDataInterface
{
    ENDIObjectPropertyReaderSourceMode SourceMode;                                    // 0x0038 (size: 0x1)
    FNiagaraUserParameterBinding UObjectParameterBinding;                             // 0x0040 (size: 0x20)
    TArray<FNiagaraUObjectPropertyReaderRemap> PropertyRemap;                         // 0x0060 (size: 0x10)
    TSoftObjectPtr<AActor> SourceActor;                                               // 0x0070 (size: 0x28)
    UClass* SourceActorComponentClass;                                                // 0x0098 (size: 0x8)

    void SetUObjectReaderPropertyRemap(class UNiagaraComponent* NiagaraComponent, FName UserParameterName, FName GraphName, FName RemapName);
}; // Size: 0xA8

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

class UNiagaraDataInterfaceVirtualTexture : public UNiagaraDataInterface
{
    class URuntimeVirtualTexture* Texture;                                            // 0x0038 (size: 0x8)
    FNiagaraUserParameterBinding TextureUserParameter;                                // 0x0040 (size: 0x20)

}; // Size: 0x60

class UNiagaraDataInterfaceVolumeCache : public UNiagaraDataInterface
{
    class UVolumeCache* VolumeCache;                                                  // 0x0038 (size: 0x8)

}; // Size: 0x90

class UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface
{
    class UTexture* Texture;                                                          // 0x0038 (size: 0x8)
    FNiagaraUserParameterBinding TextureUserParameter;                                // 0x0040 (size: 0x20)

}; // Size: 0x60

class UNiagaraDebugHUDSettings : public UObject
{
    FNiagaraDebugHUDSettingsData Data;                                                // 0x0048 (size: 0x240)

}; // Size: 0x288

class UNiagaraDecalRendererProperties : public UNiagaraRendererProperties
{
    class UMaterialInterface* Material;                                               // 0x00B8 (size: 0x8)
    FNiagaraParameterBinding MaterialParameterBinding;                                // 0x00C0 (size: 0xC)
    ENiagaraRendererSourceDataMode SourceMode;                                        // 0x00CC (size: 0x1)
    int32 RendererVisibility;                                                         // 0x00D0 (size: 0x4)
    float DecalScreenSizeFade;                                                        // 0x00D4 (size: 0x4)
    FNiagaraVariableAttributeBinding PositionBinding;                                 // 0x00D8 (size: 0x38)
    FNiagaraVariableAttributeBinding DecalOrientationBinding;                         // 0x0110 (size: 0x38)
    FNiagaraVariableAttributeBinding DecalSizeBinding;                                // 0x0148 (size: 0x38)
    FNiagaraVariableAttributeBinding DecalFadeBinding;                                // 0x0180 (size: 0x38)
    FNiagaraVariableAttributeBinding DecalSortOrderBinding;                           // 0x01B8 (size: 0x38)
    FNiagaraVariableAttributeBinding DecalColorBinding;                               // 0x01F0 (size: 0x38)
    FNiagaraVariableAttributeBinding DecalVisibleBinding;                             // 0x0228 (size: 0x38)
    FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;                    // 0x0260 (size: 0x38)
    FNiagaraRendererMaterialParameters MaterialParameters;                            // 0x0298 (size: 0x50)

}; // Size: 0x320

class UNiagaraEditorDataBase : public UObject
{
}; // Size: 0x28

class UNiagaraEditorParametersAdapterBase : public UObject
{
}; // Size: 0x28

class UNiagaraEffectType : public UObject
{
    bool bAllowCullingForLocalPlayers;                                                // 0x0028 (size: 0x1)
    ENiagaraScalabilityUpdateFrequency UpdateFrequency;                               // 0x002C (size: 0x4)
    ENiagaraCullReaction CullReaction;                                                // 0x0030 (size: 0x4)
    class UNiagaraSignificanceHandler* SignificanceHandler;                           // 0x0038 (size: 0x8)
    TArray<FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings;         // 0x0040 (size: 0x10)
    FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings;                 // 0x0050 (size: 0x10)
    FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings;               // 0x0060 (size: 0x10)
    class UNiagaraBaselineController* PerformanceBaselineController;                  // 0x0078 (size: 0x8)
    FNiagaraPerfBaselineStats PerfBaselineStats;                                      // 0x0080 (size: 0x10)
    FGuid PerfBaselineVersion;                                                        // 0x0090 (size: 0x10)

}; // Size: 0xA0

class UNiagaraEmitter : public UObject
{
    FGuid ExposedVersion;                                                             // 0x0030 (size: 0x10)
    bool bVersioningEnabled;                                                          // 0x0040 (size: 0x1)
    TArray<FVersionedNiagaraEmitterData> VersionData;                                 // 0x0048 (size: 0x10)
    FString UniqueEmitterName;                                                        // 0x0060 (size: 0x10)

}; // Size: 0x70

class UNiagaraEventReceiverEmitterAction : public UObject
{
}; // Size: 0x28

class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{
    uint32 NumParticles;                                                              // 0x0028 (size: 0x4)

}; // Size: 0x30

class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{

    class UNiagaraComponent* SpawnSystemAttachedWithParams(const FFXSystemSpawnParameters& SpawnParams);
    class UNiagaraComponent* SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);
    class UNiagaraComponent* SpawnSystemAtLocationWithParams(const FFXSystemSpawnParameters& SpawnParams);
    class UNiagaraComponent* SpawnSystemAtLocation(const class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, FVector Location, FRotator Rotation, FVector scale, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);
    void SetVolumeTextureObject(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UVolumeTexture* Texture);
    void SetTextureObject(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UTexture* Texture);
    void SetTexture2DArrayObject(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UTexture2DArray* Texture);
    void SetSkeletalMeshDataInterfaceSamplingRegions(class UNiagaraComponent* NiagaraSystem, FString OverrideName, const TArray<FName>& SamplingRegions);
    void SetSkeletalMeshDataInterfaceFilteredSockets(class UNiagaraComponent* NiagaraSystem, FString OverrideName, const TArray<FName>& FilteredSockets);
    void SetSkeletalMeshDataInterfaceFilteredBones(class UNiagaraComponent* NiagaraSystem, FString OverrideName, const TArray<FName>& FilteredBones);
    void SetSceneCapture2DDataInterfaceManagedMode(class UNiagaraComponent* NiagaraSystem, const FName& DIName, TEnumAsByte<ESceneCaptureSource> ManagedCaptureSource, FIntPoint ManagedTextureSize, TEnumAsByte<ETextureRenderTargetFormat> ManagedTextureFormat, TEnumAsByte<ECameraProjectionMode::Type> ManagedProjectionType, float ManagedFOVAngle, float ManagedOrthoWidth, bool bManagedCaptureEveryFrame, bool bManagedCaptureOnMovement, const TArray<class AActor*>& ShowOnlyActors);
    void SetComponentNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, class UPrimitiveComponent* Primitive, int32 CollisionGroup);
    void SetActorNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, class AActor* Actor, int32 CollisionGroup);
    void ReleaseNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, int32 CollisionGroup);
    void OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UStaticMeshComponent* StaticMeshComponent);
    void OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UStaticMesh* StaticMesh);
    void OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent);
    class UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection);
    int32 AcquireNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject);
}; // Size: 0x28

class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{
    ENiagaraRendererSourceDataMode SourceMode;                                        // 0x00B8 (size: 0x1)
    uint8 bUseInverseSquaredFalloff;                                                  // 0x00BC (size: 0x1)
    uint8 bAffectsTranslucency;                                                       // 0x00BC (size: 0x1)
    uint8 bAlphaScalesBrightness;                                                     // 0x00BC (size: 0x1)
    uint8 bOverrideInverseExposureBlend;                                              // 0x00BC (size: 0x1)
    float RadiusScale;                                                                // 0x00C0 (size: 0x4)
    float DefaultExponent;                                                            // 0x00C4 (size: 0x4)
    float SpecularScale;                                                              // 0x00C8 (size: 0x4)
    float DiffuseScale;                                                               // 0x00CC (size: 0x4)
    FVector3f ColorAdd;                                                               // 0x00D0 (size: 0xC)
    float InverseExposureBlend;                                                       // 0x00DC (size: 0x4)
    int32 RendererVisibility;                                                         // 0x00E0 (size: 0x4)
    FNiagaraVariableAttributeBinding LightRenderingEnabledBinding;                    // 0x00E8 (size: 0x38)
    FNiagaraVariableAttributeBinding LightExponentBinding;                            // 0x0120 (size: 0x38)
    FNiagaraVariableAttributeBinding PositionBinding;                                 // 0x0158 (size: 0x38)
    FNiagaraVariableAttributeBinding ColorBinding;                                    // 0x0190 (size: 0x38)
    FNiagaraVariableAttributeBinding RadiusBinding;                                   // 0x01C8 (size: 0x38)
    FNiagaraVariableAttributeBinding VolumetricScatteringBinding;                     // 0x0200 (size: 0x38)
    FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;                    // 0x0238 (size: 0x38)
    FNiagaraVariableAttributeBinding SpecularScaleBinding;                            // 0x0270 (size: 0x38)
    FNiagaraVariableAttributeBinding DiffuseScaleBinding;                             // 0x02A8 (size: 0x38)

}; // Size: 0x320

class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{
    TArray<FNiagaraMeshRendererMeshProperties> Meshes;                                // 0x00B8 (size: 0x10)
    ENiagaraRendererSourceDataMode SourceMode;                                        // 0x00C8 (size: 0x1)
    ENiagaraSortMode SortMode;                                                        // 0x00C9 (size: 0x1)
    ENiagaraRendererSortPrecision SortPrecision;                                      // 0x00CA (size: 0x1)
    ENiagaraRendererGpuTranslucentLatency GpuTranslucentLatency;                      // 0x00CB (size: 0x1)
    uint8 bOverrideMaterials;                                                         // 0x00CC (size: 0x1)
    uint8 bUseHeterogeneousVolumes;                                                   // 0x00CC (size: 0x1)
    uint8 bSortOnlyWhenTranslucent;                                                   // 0x00CC (size: 0x1)
    uint8 bSubImageBlend;                                                             // 0x00CC (size: 0x1)
    uint8 bEnableFrustumCulling;                                                      // 0x00CC (size: 0x1)
    uint8 bEnableCameraDistanceCulling;                                               // 0x00CC (size: 0x1)
    uint8 bEnableMeshFlipbook;                                                        // 0x00CC (size: 0x1)
    uint8 bLockedAxisEnable;                                                          // 0x00CC (size: 0x1)
    uint8 bCastShadows;                                                               // 0x00D0 (size: 0x1)
    TArray<FNiagaraMeshMaterialOverride> OverrideMaterials;                           // 0x00D8 (size: 0x10)
    TArray<FNiagaraMeshMICOverride> MICOverrideMaterials;                             // 0x00E8 (size: 0x10)
    FVector2D SubImageSize;                                                           // 0x00F8 (size: 0x10)
    FVector LockedAxis;                                                               // 0x0108 (size: 0x18)
    FVector MeshBoundsScale;                                                          // 0x0120 (size: 0x18)
    ENiagaraMeshFacingMode FacingMode;                                                // 0x0138 (size: 0x1)
    ENiagaraMeshLockedAxisSpace LockedAxisSpace;                                      // 0x0139 (size: 0x1)
    float MinCameraDistance;                                                          // 0x013C (size: 0x4)
    float MaxCameraDistance;                                                          // 0x0140 (size: 0x4)
    uint32 RendererVisibility;                                                        // 0x0144 (size: 0x4)
    FNiagaraVariableAttributeBinding PositionBinding;                                 // 0x0148 (size: 0x38)
    FNiagaraVariableAttributeBinding ColorBinding;                                    // 0x0180 (size: 0x38)
    FNiagaraVariableAttributeBinding VelocityBinding;                                 // 0x01B8 (size: 0x38)
    FNiagaraVariableAttributeBinding MeshOrientationBinding;                          // 0x01F0 (size: 0x38)
    FNiagaraVariableAttributeBinding ScaleBinding;                                    // 0x0228 (size: 0x38)
    FNiagaraVariableAttributeBinding SubImageIndexBinding;                            // 0x0260 (size: 0x38)
    FNiagaraVariableAttributeBinding DynamicMaterialBinding;                          // 0x0298 (size: 0x38)
    FNiagaraVariableAttributeBinding DynamicMaterial1Binding;                         // 0x02D0 (size: 0x38)
    FNiagaraVariableAttributeBinding DynamicMaterial2Binding;                         // 0x0308 (size: 0x38)
    FNiagaraVariableAttributeBinding DynamicMaterial3Binding;                         // 0x0340 (size: 0x38)
    FNiagaraVariableAttributeBinding MaterialRandomBinding;                           // 0x0378 (size: 0x38)
    FNiagaraVariableAttributeBinding CustomSortingBinding;                            // 0x03B0 (size: 0x38)
    FNiagaraVariableAttributeBinding NormalizedAgeBinding;                            // 0x03E8 (size: 0x38)
    FNiagaraVariableAttributeBinding CameraOffsetBinding;                             // 0x0420 (size: 0x38)
    FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;                    // 0x0458 (size: 0x38)
    FNiagaraVariableAttributeBinding MeshIndexBinding;                                // 0x0490 (size: 0x38)
    FNiagaraRendererMaterialParameters MaterialParameters;                            // 0x04C8 (size: 0x50)
    FNiagaraVariableAttributeBinding PrevPositionBinding;                             // 0x0518 (size: 0x38)
    FNiagaraVariableAttributeBinding PrevScaleBinding;                                // 0x0550 (size: 0x38)
    FNiagaraVariableAttributeBinding PrevMeshOrientationBinding;                      // 0x0588 (size: 0x38)
    FNiagaraVariableAttributeBinding PrevCameraOffsetBinding;                         // 0x05C0 (size: 0x38)
    FNiagaraVariableAttributeBinding PrevVelocityBinding;                             // 0x05F8 (size: 0x38)
    uint32 MaterialParamValidMask;                                                    // 0x0630 (size: 0x4)

}; // Size: 0x688

class UNiagaraMessageDataBase : public UObject
{
}; // Size: 0x28

class UNiagaraParameterCollection : public UObject
{
    FName NameSpace;                                                                  // 0x0028 (size: 0x8)
    TArray<FNiagaraVariable> Parameters;                                              // 0x0030 (size: 0x10)
    class UMaterialParameterCollection* SourceMaterialCollection;                     // 0x0040 (size: 0x8)
    class UNiagaraParameterCollectionInstance* DefaultInstance;                       // 0x0048 (size: 0x8)
    FGuid CompileId;                                                                  // 0x0050 (size: 0x10)

}; // Size: 0x68

class UNiagaraParameterCollectionInstance : public UObject
{
    class UNiagaraParameterCollection* Collection;                                    // 0x0028 (size: 0x8)
    TArray<FNiagaraVariable> OverridenParameters;                                     // 0x0030 (size: 0x10)
    FNiagaraParameterStore ParameterStorage;                                          // 0x0040 (size: 0x88)
    class UMaterialParameterCollectionInstance* SourceMaterialCollectionInstance;     // 0x00C8 (size: 0x8)

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
}; // Size: 0xF8

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
    float min;                                                                        // 0x0038 (size: 0x4)
    float max;                                                                        // 0x003C (size: 0x4)

}; // Size: 0x40

class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
{
    int32 min;                                                                        // 0x0038 (size: 0x4)
    int32 max;                                                                        // 0x003C (size: 0x4)

}; // Size: 0x40

class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{
    FLinearColor min;                                                                 // 0x0038 (size: 0x10)
    FLinearColor max;                                                                 // 0x0048 (size: 0x10)

}; // Size: 0x58

class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{
    FVector min;                                                                      // 0x0038 (size: 0x18)
    FVector max;                                                                      // 0x0050 (size: 0x18)

}; // Size: 0x68

class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{
    FVector2D min;                                                                    // 0x0038 (size: 0x10)
    FVector2D max;                                                                    // 0x0048 (size: 0x10)

}; // Size: 0x58

class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{
    FVector4 min;                                                                     // 0x0040 (size: 0x20)
    FVector4 max;                                                                     // 0x0060 (size: 0x20)

}; // Size: 0x80

class UNiagaraRendererProperties : public UNiagaraMergeable
{
    FNiagaraPlatformSet Platforms;                                                    // 0x0028 (size: 0x30)
    int32 SortOrderHint;                                                              // 0x0058 (size: 0x4)
    ENiagaraRendererMotionVectorSetting MotionVectorSetting;                          // 0x005C (size: 0x1)
    bool bIsEnabled;                                                                  // 0x005D (size: 0x1)
    bool bAllowInCullProxies;                                                         // 0x005E (size: 0x1)
    FNiagaraVariableAttributeBinding RendererEnabledBinding;                          // 0x0060 (size: 0x38)
    FGuid OuterEmitterVersion;                                                        // 0x0098 (size: 0x10)

}; // Size: 0xB8

class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{
    class UMaterialInterface* Material;                                               // 0x00B8 (size: 0x8)
    FNiagaraUserParameterBinding MaterialUserParamBinding;                            // 0x00C0 (size: 0x20)
    FNiagaraRibbonUVSettings UV0Settings;                                             // 0x00E0 (size: 0x28)
    FNiagaraRibbonUVSettings UV1Settings;                                             // 0x0108 (size: 0x28)
    ENiagaraRibbonFacingMode FacingMode;                                              // 0x0130 (size: 0x1)
    int32 MaxNumRibbons;                                                              // 0x0134 (size: 0x4)
    ENiagaraRibbonDrawDirection DrawDirection;                                        // 0x0138 (size: 0x1)
    ENiagaraRibbonShapeMode Shape;                                                    // 0x0139 (size: 0x1)
    uint8 bEnableAccurateGeometry;                                                    // 0x013A (size: 0x1)
    uint8 bUseMaterialBackfaceCulling;                                                // 0x013A (size: 0x1)
    uint8 bUseGeometryNormals;                                                        // 0x013A (size: 0x1)
    uint8 bUseGPUInit;                                                                // 0x013A (size: 0x1)
    uint8 bUseConstantFactor;                                                         // 0x013A (size: 0x1)
    uint8 bScreenSpaceTessellation;                                                   // 0x013A (size: 0x1)
    uint8 bLinkOrderUseUniqueID;                                                      // 0x013A (size: 0x1)
    uint8 bCastShadows;                                                               // 0x013A (size: 0x1)
    int32 WidthSegmentationCount;                                                     // 0x013C (size: 0x4)
    int32 MultiPlaneCount;                                                            // 0x0140 (size: 0x4)
    int32 TubeSubdivisions;                                                           // 0x0144 (size: 0x4)
    TArray<FNiagaraRibbonShapeCustomVertex> CustomVertices;                           // 0x0148 (size: 0x10)
    ENiagaraRibbonTessellationMode TessellationMode;                                  // 0x0158 (size: 0x1)
    float CurveTension;                                                               // 0x015C (size: 0x4)
    int32 TessellationFactor;                                                         // 0x0160 (size: 0x4)
    float TessellationAngle;                                                          // 0x0164 (size: 0x4)
    FNiagaraVariableAttributeBinding PositionBinding;                                 // 0x0168 (size: 0x38)
    FNiagaraVariableAttributeBinding ColorBinding;                                    // 0x01A0 (size: 0x38)
    FNiagaraVariableAttributeBinding VelocityBinding;                                 // 0x01D8 (size: 0x38)
    FNiagaraVariableAttributeBinding NormalizedAgeBinding;                            // 0x0210 (size: 0x38)
    FNiagaraVariableAttributeBinding RibbonTwistBinding;                              // 0x0248 (size: 0x38)
    FNiagaraVariableAttributeBinding RibbonWidthBinding;                              // 0x0280 (size: 0x38)
    FNiagaraVariableAttributeBinding RibbonFacingBinding;                             // 0x02B8 (size: 0x38)
    FNiagaraVariableAttributeBinding RibbonIdBinding;                                 // 0x02F0 (size: 0x38)
    FNiagaraVariableAttributeBinding RibbonLinkOrderBinding;                          // 0x0328 (size: 0x38)
    FNiagaraVariableAttributeBinding MaterialRandomBinding;                           // 0x0360 (size: 0x38)
    FNiagaraVariableAttributeBinding DynamicMaterialBinding;                          // 0x0398 (size: 0x38)
    FNiagaraVariableAttributeBinding DynamicMaterial1Binding;                         // 0x03D0 (size: 0x38)
    FNiagaraVariableAttributeBinding DynamicMaterial2Binding;                         // 0x0408 (size: 0x38)
    FNiagaraVariableAttributeBinding DynamicMaterial3Binding;                         // 0x0440 (size: 0x38)
    FNiagaraVariableAttributeBinding RibbonUVDistance;                                // 0x0478 (size: 0x38)
    FNiagaraVariableAttributeBinding U0OverrideBinding;                               // 0x04B0 (size: 0x38)
    FNiagaraVariableAttributeBinding V0RangeOverrideBinding;                          // 0x04E8 (size: 0x38)
    FNiagaraVariableAttributeBinding U1OverrideBinding;                               // 0x0520 (size: 0x38)
    FNiagaraVariableAttributeBinding V1RangeOverrideBinding;                          // 0x0558 (size: 0x38)
    FNiagaraRendererMaterialParameters MaterialParameters;                            // 0x0590 (size: 0x50)
    FNiagaraVariableAttributeBinding PrevPositionBinding;                             // 0x05E0 (size: 0x38)
    FNiagaraVariableAttributeBinding PrevRibbonWidthBinding;                          // 0x0618 (size: 0x38)
    FNiagaraVariableAttributeBinding PrevRibbonFacingBinding;                         // 0x0650 (size: 0x38)
    FNiagaraVariableAttributeBinding PrevRibbonTwistBinding;                          // 0x0688 (size: 0x38)
    uint32 MaterialParamValidMask;                                                    // 0x06C0 (size: 0x4)

}; // Size: 0x760

class UNiagaraScratchPadContainer : public UObject
{
}; // Size: 0x28

class UNiagaraScript : public UNiagaraScriptBase
{
    ENiagaraScriptUsage Usage;                                                        // 0x0030 (size: 0x1)
    FGuid UsageId;                                                                    // 0x0034 (size: 0x10)
    FNiagaraParameterStore RapidIterationParameters;                                  // 0x0048 (size: 0x88)
    FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore;                  // 0x00D0 (size: 0x90)
    TArray<FNiagaraBoundParameter> ScriptExecutionBoundParameters;                    // 0x0160 (size: 0x10)
    FNiagaraVMExecutableDataId CachedScriptVMId;                                      // 0x0170 (size: 0x58)
    FNiagaraVMExecutableData CachedScriptVM;                                          // 0x01D8 (size: 0x1A0)
    TArray<class UNiagaraParameterCollection*> CachedParameterCollectionReferences;   // 0x0378 (size: 0x10)
    TArray<FNiagaraScriptResolvedDataInterfaceInfo> ResolvedDataInterfaces;           // 0x0388 (size: 0x10)
    TArray<FNiagaraResolvedUserDataInterfaceBinding> ResolvedUserDataInterfaceBindings; // 0x0398 (size: 0x10)
    TArray<FNiagaraResolvedUObjectInfo> ResolvedUObjectInfos;                         // 0x03A8 (size: 0x10)

    void RaiseOnGPUCompilationComplete();
}; // Size: 0x3C0

class UNiagaraScriptSourceBase : public UObject
{
}; // Size: 0x48

class UNiagaraSettings : public UDeveloperSettings
{
    bool bSystemsSupportLargeWorldCoordinates;                                        // 0x0038 (size: 0x1)
    bool bEnforceStrictStackTypes;                                                    // 0x0039 (size: 0x1)
    bool bExperimentalVMEnabled;                                                      // 0x003A (size: 0x1)
    bool bAccurateQuatInterpolation;                                                  // 0x003B (size: 0x1)
    ENiagaraCompileErrorSeverity InvalidNamespaceWriteSeverity;                       // 0x003C (size: 0x1)
    bool bLimitDeltaTime;                                                             // 0x003D (size: 0x1)
    float MaxDeltaTimePerTick;                                                        // 0x0040 (size: 0x4)
    FSoftObjectPath DefaultEffectType;                                                // 0x0048 (size: 0x20)
    bool bAllowCreateActorFromSystemWithNoEffectType;                                 // 0x0068 (size: 0x1)
    FLinearColor PositionPinTypeColor;                                                // 0x006C (size: 0x10)
    ENiagaraStripScriptByteCodeOption ByteCodeStripOption;                            // 0x007C (size: 0x1)
    TArray<FText> QualityLevels;                                                      // 0x0080 (size: 0x10)
    TMap<class FString, class FText> ComponentRendererWarningsPerClass;               // 0x0090 (size: 0x50)
    TEnumAsByte<ETextureRenderTargetFormat> DefaultRenderTargetFormat;                // 0x00E0 (size: 0x1)
    ENiagaraGpuBufferFormat DefaultGridFormat;                                        // 0x00E1 (size: 0x1)
    ENiagaraDefaultRendererMotionVectorSetting DefaultRendererMotionVectorSetting;    // 0x00E2 (size: 0x1)
    ENiagaraDefaultRendererPixelCoverageMode DefaultPixelCoverageMode;                // 0x00E3 (size: 0x1)
    ENiagaraDefaultSortPrecision DefaultSortPrecision;                                // 0x00E4 (size: 0x1)
    ENiagaraDefaultGpuTranslucentLatency DefaultGpuTranslucentLatency;                // 0x00E5 (size: 0x1)
    float DefaultLightInverseExposureBlend;                                           // 0x00E8 (size: 0x4)
    bool NDISkelMesh_SupportReadingDeformedGeometry;                                  // 0x00EC (size: 0x1)
    bool NDISkelMesh_Support16BitIndexWeight;                                         // 0x00ED (size: 0x1)
    TEnumAsByte<ENDISkelMesh_GpuMaxInfluences::Type> NDISkelMesh_GpuMaxInfluences;    // 0x00EE (size: 0x1)
    TEnumAsByte<ENDISkelMesh_GpuUniformSamplingFormat::Type> NDISkelMesh_GpuUniformSamplingFormat; // 0x00EF (size: 0x1)
    TEnumAsByte<ENDISkelMesh_AdjacencyTriangleIndexFormat::Type> NDISkelMesh_AdjacencyTriangleIndexFormat; // 0x00F0 (size: 0x1)
    bool NDIStaticMesh_AllowDistanceFields;                                           // 0x00F1 (size: 0x1)
    TArray<TEnumAsByte<ENDICollisionQuery_AsyncGpuTraceProvider::Type>> NDICollisionQuery_AsyncGpuTraceProviderOrder; // 0x00F8 (size: 0x10)
    FString SimCacheAuxiliaryFileBasePath;                                            // 0x0108 (size: 0x10)
    int64 SimCacheMaxCPUMemoryVolumetrics;                                            // 0x0118 (size: 0x8)
    TArray<FNiagaraPlatformSetRedirect> PlatformSetRedirects;                         // 0x0120 (size: 0x10)

}; // Size: 0x130

class UNiagaraSignificanceHandler : public UObject
{
}; // Size: 0x28

class UNiagaraSignificanceHandlerAge : public UNiagaraSignificanceHandler
{
}; // Size: 0x28

class UNiagaraSignificanceHandlerDistance : public UNiagaraSignificanceHandler
{
}; // Size: 0x28

class UNiagaraSimCache : public UObject
{
    FGuid CacheGuid;                                                                  // 0x0028 (size: 0x10)
    TSoftObjectPtr<UNiagaraSystem> SoftNiagaraSystem;                                 // 0x0038 (size: 0x28)
    float StartSeconds;                                                               // 0x0060 (size: 0x4)
    float DurationSeconds;                                                            // 0x0064 (size: 0x4)
    FNiagaraSimCacheCreateParameters CreateParameters;                                // 0x0068 (size: 0x58)
    bool bNeedsReadComponentMappingRecache;                                           // 0x00C0 (size: 0x1)
    FNiagaraSimCacheLayout CacheLayout;                                               // 0x00C8 (size: 0xC8)
    TArray<FNiagaraSimCacheFrame> CacheFrames;                                        // 0x0190 (size: 0x10)
    TMap<class FNiagaraVariableBase, class UObject*> DataInterfaceStorage;            // 0x01A0 (size: 0x50)
    class UNiagaraSimCacheDebugData* DebugData;                                       // 0x01F0 (size: 0x8)

    void ReadVectorAttribute(TArray<FVector>& OutValues, FName AttributeName, FName EmitterName, int32 FrameIndex);
    void ReadVector4Attribute(TArray<FVector4>& OutValues, FName AttributeName, FName EmitterName, int32 FrameIndex);
    void ReadVector2Attribute(TArray<FVector2D>& OutValues, FName AttributeName, FName EmitterName, int32 FrameIndex);
    void ReadQuatAttributeWithRebase(TArray<FQuat>& OutValues, FQuat Quat, FName AttributeName, FName EmitterName, int32 FrameIndex);
    void ReadQuatAttribute(TArray<FQuat>& OutValues, FName AttributeName, FName EmitterName, bool bLocalSpaceToWorld, int32 FrameIndex);
    void ReadPositionAttributeWithRebase(TArray<FVector>& OutValues, FTransform Transform, FName AttributeName, FName EmitterName, int32 FrameIndex);
    void ReadPositionAttribute(TArray<FVector>& OutValues, FName AttributeName, FName EmitterName, bool bLocalSpaceToWorld, int32 FrameIndex);
    void ReadIntAttribute(TArray<int32>& OutValues, FName AttributeName, FName EmitterName, int32 FrameIndex);
    void ReadIDAttribute(TArray<FNiagaraID>& OutValues, FName AttributeName, FName EmitterName, int32 FrameIndex);
    void ReadFloatAttribute(TArray<float>& OutValues, FName AttributeName, FName EmitterName, int32 FrameIndex);
    class UObject* ReadDataInterfaceAs(UClass* RequestedType, FName AttributeName, int32 FrameIndex);
    void ReadColorAttribute(TArray<FLinearColor>& OutValues, FName AttributeName, FName EmitterName, int32 FrameIndex);
    bool IsEmpty();
    bool IsCacheValid();
    float GetStartSeconds();
    int32 GetNumFrames();
    int32 GetNumEmitters();
    TArray<FName> GetEmitterNames();
    FName GetEmitterName(int32 EmitterIndex);
    ENiagaraSimCacheAttributeCaptureMode GetAttributeCaptureMode();
}; // Size: 0x210

class UNiagaraSimCacheDebugData : public UObject
{
    TArray<FNiagaraSimCacheDebugDataFrame> Frames;                                    // 0x0028 (size: 0x10)

}; // Size: 0x38

class UNiagaraSimCacheFunctionLibrary : public UBlueprintFunctionLibrary
{

    class UNiagaraSimCache* CreateNiagaraSimCache(class UObject* WorldContextObject);
    bool CaptureNiagaraSimCacheImmediate(class UNiagaraSimCache* SimCache, FNiagaraSimCacheCreateParameters CreateParameters, class UNiagaraComponent* NiagaraComponent, class UNiagaraSimCache*& OutSimCache, bool bAdvanceSimulation, float AdvanceDeltaTime);
}; // Size: 0x28

class UNiagaraSimulationStageBase : public UNiagaraMergeable
{
    class UNiagaraScript* Script;                                                     // 0x0028 (size: 0x8)
    FName SimulationStageName;                                                        // 0x0030 (size: 0x8)
    uint8 bEnabled;                                                                   // 0x0038 (size: 0x1)

}; // Size: 0x40

class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase
{
    FNiagaraVariableAttributeBinding EnabledBinding;                                  // 0x0040 (size: 0x38)
    ENiagaraIterationSource IterationSource;                                          // 0x0078 (size: 0x1)
    FNiagaraParameterBindingWithValue NumIterations;                                  // 0x0080 (size: 0x20)
    ENiagaraSimStageExecuteBehavior ExecuteBehavior;                                  // 0x00A0 (size: 0x1)
    uint8 bDisablePartialParticleUpdate;                                              // 0x00A4 (size: 0x1)
    FNiagaraVariableDataInterfaceBinding DataInterface;                               // 0x00A8 (size: 0x20)
    uint8 bParticleIterationStateEnabled;                                             // 0x00C8 (size: 0x1)
    FNiagaraVariableAttributeBinding ParticleIterationStateBinding;                   // 0x00D0 (size: 0x38)
    FIntPoint ParticleIterationStateRange;                                            // 0x0108 (size: 0x8)
    uint8 bGpuDispatchForceLinear;                                                    // 0x0110 (size: 0x1)
    uint8 bOverrideGpuDispatchNumThreads;                                             // 0x0110 (size: 0x1)
    FNiagaraParameterBindingWithValue OverrideGpuDispatchNumThreadsX;                 // 0x0118 (size: 0x20)
    FNiagaraParameterBindingWithValue OverrideGpuDispatchNumThreadsY;                 // 0x0138 (size: 0x20)
    FNiagaraParameterBindingWithValue OverrideGpuDispatchNumThreadsZ;                 // 0x0158 (size: 0x20)
    ENiagaraGpuDispatchType DirectDispatchType;                                       // 0x0178 (size: 0x1)
    ENiagaraDirectDispatchElementType DirectDispatchElementType;                      // 0x0179 (size: 0x1)
    FNiagaraParameterBindingWithValue ElementCountX;                                  // 0x0180 (size: 0x20)
    FNiagaraParameterBindingWithValue ElementCountY;                                  // 0x01A0 (size: 0x20)
    FNiagaraParameterBindingWithValue ElementCountZ;                                  // 0x01C0 (size: 0x20)

}; // Size: 0x1E0

class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{
    class UMaterialInterface* Material;                                               // 0x00B8 (size: 0x8)
    FNiagaraUserParameterBinding MaterialUserParamBinding;                            // 0x00C0 (size: 0x20)
    ENiagaraRendererSourceDataMode SourceMode;                                        // 0x00E0 (size: 0x1)
    ENiagaraSpriteAlignment Alignment;                                                // 0x00E1 (size: 0x1)
    ENiagaraSpriteFacingMode FacingMode;                                              // 0x00E2 (size: 0x1)
    ENiagaraSortMode SortMode;                                                        // 0x00E3 (size: 0x1)
    float MacroUVRadius;                                                              // 0x00E4 (size: 0x4)
    FVector2D PivotInUVSpace;                                                         // 0x00E8 (size: 0x10)
    FVector2D SubImageSize;                                                           // 0x00F8 (size: 0x10)
    uint8 bSubImageBlend;                                                             // 0x0108 (size: 0x1)
    uint8 bRemoveHMDRollInVR;                                                         // 0x0108 (size: 0x1)
    uint8 bSortOnlyWhenTranslucent;                                                   // 0x0108 (size: 0x1)
    uint8 bEnableCameraDistanceCulling;                                               // 0x0108 (size: 0x1)
    uint8 bCastShadows;                                                               // 0x0108 (size: 0x1)
    ENiagaraRendererSortPrecision SortPrecision;                                      // 0x0109 (size: 0x1)
    ENiagaraRendererGpuTranslucentLatency GpuTranslucentLatency;                      // 0x010A (size: 0x1)
    ENiagaraRendererPixelCoverageMode PixelCoverageMode;                              // 0x010B (size: 0x1)
    float PixelCoverageBlend;                                                         // 0x010C (size: 0x4)
    float MinFacingCameraBlendDistance;                                               // 0x0110 (size: 0x4)
    float MaxFacingCameraBlendDistance;                                               // 0x0114 (size: 0x4)
    float MinCameraDistance;                                                          // 0x0118 (size: 0x4)
    float MaxCameraDistance;                                                          // 0x011C (size: 0x4)
    uint32 RendererVisibility;                                                        // 0x0120 (size: 0x4)
    FNiagaraVariableAttributeBinding PositionBinding;                                 // 0x0128 (size: 0x38)
    FNiagaraVariableAttributeBinding ColorBinding;                                    // 0x0160 (size: 0x38)
    FNiagaraVariableAttributeBinding VelocityBinding;                                 // 0x0198 (size: 0x38)
    FNiagaraVariableAttributeBinding SpriteRotationBinding;                           // 0x01D0 (size: 0x38)
    FNiagaraVariableAttributeBinding SpriteSizeBinding;                               // 0x0208 (size: 0x38)
    FNiagaraVariableAttributeBinding SpriteFacingBinding;                             // 0x0240 (size: 0x38)
    FNiagaraVariableAttributeBinding SpriteAlignmentBinding;                          // 0x0278 (size: 0x38)
    FNiagaraVariableAttributeBinding SubImageIndexBinding;                            // 0x02B0 (size: 0x38)
    FNiagaraVariableAttributeBinding DynamicMaterialBinding;                          // 0x02E8 (size: 0x38)
    FNiagaraVariableAttributeBinding DynamicMaterial1Binding;                         // 0x0320 (size: 0x38)
    FNiagaraVariableAttributeBinding DynamicMaterial2Binding;                         // 0x0358 (size: 0x38)
    FNiagaraVariableAttributeBinding DynamicMaterial3Binding;                         // 0x0390 (size: 0x38)
    FNiagaraVariableAttributeBinding CameraOffsetBinding;                             // 0x03C8 (size: 0x38)
    FNiagaraVariableAttributeBinding UVScaleBinding;                                  // 0x0400 (size: 0x38)
    FNiagaraVariableAttributeBinding PivotOffsetBinding;                              // 0x0438 (size: 0x38)
    FNiagaraVariableAttributeBinding MaterialRandomBinding;                           // 0x0470 (size: 0x38)
    FNiagaraVariableAttributeBinding CustomSortingBinding;                            // 0x04A8 (size: 0x38)
    FNiagaraVariableAttributeBinding NormalizedAgeBinding;                            // 0x04E0 (size: 0x38)
    FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;                    // 0x0518 (size: 0x38)
    FNiagaraRendererMaterialParameters MaterialParameters;                            // 0x0550 (size: 0x50)
    FNiagaraVariableAttributeBinding PrevPositionBinding;                             // 0x05A0 (size: 0x38)
    FNiagaraVariableAttributeBinding PrevVelocityBinding;                             // 0x05D8 (size: 0x38)
    FNiagaraVariableAttributeBinding PrevSpriteRotationBinding;                       // 0x0610 (size: 0x38)
    FNiagaraVariableAttributeBinding PrevSpriteSizeBinding;                           // 0x0648 (size: 0x38)
    FNiagaraVariableAttributeBinding PrevSpriteFacingBinding;                         // 0x0680 (size: 0x38)
    FNiagaraVariableAttributeBinding PrevSpriteAlignmentBinding;                      // 0x06B8 (size: 0x38)
    FNiagaraVariableAttributeBinding PrevCameraOffsetBinding;                         // 0x06F0 (size: 0x38)
    FNiagaraVariableAttributeBinding PrevPivotOffsetBinding;                          // 0x0728 (size: 0x38)
    uint32 MaterialParamValidMask;                                                    // 0x0760 (size: 0x4)

}; // Size: 0x7C8

class UNiagaraStatelessEmitter : public UObject
{
    FString UniqueEmitterName;                                                        // 0x0038 (size: 0x10)
    UClass* EmitterTemplateClass;                                                     // 0x0048 (size: 0x8)
    uint8 bDeterministic;                                                             // 0x0050 (size: 0x1)
    uint32 AllowedFeatureMask;                                                        // 0x0054 (size: 0x4)
    int32 RandomSeed;                                                                 // 0x0058 (size: 0x4)
    FBox FixedBounds;                                                                 // 0x0060 (size: 0x38)
    FNiagaraEmitterStateData EmitterState;                                            // 0x0098 (size: 0x70)
    TArray<FNiagaraStatelessSpawnInfo> SpawnInfos;                                    // 0x0108 (size: 0x10)
    TArray<class UNiagaraStatelessModule*> Modules;                                   // 0x0118 (size: 0x10)
    TArray<class UNiagaraRendererProperties*> RendererProperties;                     // 0x0128 (size: 0x10)
    FNiagaraPlatformSet Platforms;                                                    // 0x0138 (size: 0x30)
    FNiagaraEmitterScalabilityOverrides ScalabilityOverrides;                         // 0x0168 (size: 0x10)
    FNiagaraDataSetCompiledData ParticleDataSetCompiledData;                          // 0x0178 (size: 0x48)
    TArray<int32> ComponentOffsets;                                                   // 0x01C0 (size: 0x10)
    TArray<class UNiagaraParameterCollection*> CachedParameterCollectionReferences;   // 0x01D0 (size: 0x10)

}; // Size: 0x1E0

class UNiagaraStatelessEmitterDefault : public UNiagaraStatelessEmitterTemplate
{
}; // Size: 0x28

class UNiagaraStatelessEmitterExample1 : public UNiagaraStatelessEmitterTemplate
{
}; // Size: 0x28

class UNiagaraStatelessEmitterTemplate : public UObject
{
}; // Size: 0x28

class UNiagaraStatelessModule : public UNiagaraMergeable
{
    uint8 bModuleEnabled;                                                             // 0x0028 (size: 0x1)

}; // Size: 0x30

class UNiagaraStatelessModule_AccelerationForce : public UNiagaraStatelessModule
{
    FNiagaraDistributionRangeVector3 AccelerationDistribution;                        // 0x0030 (size: 0x30)
    ENiagaraCoordinateSpace CoordinateSpace;                                          // 0x0060 (size: 0x4)

}; // Size: 0x68

class UNiagaraStatelessModule_AddVelocity : public UNiagaraStatelessModule
{
    ENSM_VelocityType VelocityType;                                                   // 0x0030 (size: 0x4)
    FNiagaraDistributionRangeVector3 LinearVelocityDistribution;                      // 0x0038 (size: 0x30)
    float LinearVelocityScale;                                                        // 0x0068 (size: 0x4)
    FNiagaraDistributionRangeFloat ConeVelocityDistribution;                          // 0x0070 (size: 0x20)
    FRotator ConeRotation;                                                            // 0x0090 (size: 0x18)
    float ConeAngle;                                                                  // 0x00A8 (size: 0x4)
    float InnerCone;                                                                  // 0x00AC (size: 0x4)
    FNiagaraDistributionRangeFloat PointVelocityDistribution;                         // 0x00B0 (size: 0x20)
    FVector3f PointOrigin;                                                            // 0x00D0 (size: 0xC)
    bool bSpeedFalloffFromConeAxisEnabled;                                            // 0x00DC (size: 0x1)
    float SpeedFalloffFromConeAxis;                                                   // 0x00E0 (size: 0x4)
    ENiagaraCoordinateSpace CoordinateSpace;                                          // 0x00E4 (size: 0x4)

}; // Size: 0xE8

class UNiagaraStatelessModule_CalculateAccurateVelocity : public UNiagaraStatelessModule
{
}; // Size: 0x30

class UNiagaraStatelessModule_CameraOffset : public UNiagaraStatelessModule
{
    FNiagaraDistributionFloat CameraOffsetDistribution;                               // 0x0030 (size: 0x30)

}; // Size: 0x60

class UNiagaraStatelessModule_CurlNoiseForce : public UNiagaraStatelessModule
{
    float NoiseAmplitude;                                                             // 0x0030 (size: 0x4)
    float NoiseFrequency;                                                             // 0x0034 (size: 0x4)
    ENSM_NoiseMode NoiseMode;                                                         // 0x0038 (size: 0x4)
    class UObject* NoiseTexture;                                                      // 0x0040 (size: 0x8)

}; // Size: 0x48

class UNiagaraStatelessModule_Drag : public UNiagaraStatelessModule
{
    FNiagaraDistributionRangeFloat DragDistribution;                                  // 0x0030 (size: 0x20)

}; // Size: 0x50

class UNiagaraStatelessModule_DynamicMaterialParameters : public UNiagaraStatelessModule
{
    uint8 bParameter0Enabled;                                                         // 0x0030 (size: 0x1)
    uint8 bParameter1Enabled;                                                         // 0x0030 (size: 0x1)
    uint8 bParameter2Enabled;                                                         // 0x0030 (size: 0x1)
    uint8 bParameter3Enabled;                                                         // 0x0030 (size: 0x1)
    FNiagaraStatelessDynamicParameterSet Parameter0;                                  // 0x0038 (size: 0xC8)
    FNiagaraStatelessDynamicParameterSet Parameter1;                                  // 0x0100 (size: 0xC8)
    FNiagaraStatelessDynamicParameterSet Parameter2;                                  // 0x01C8 (size: 0xC8)
    FNiagaraStatelessDynamicParameterSet Parameter3;                                  // 0x0290 (size: 0xC8)

}; // Size: 0x358

class UNiagaraStatelessModule_GravityForce : public UNiagaraStatelessModule
{
    FNiagaraDistributionRangeVector3 GravityDistribution;                             // 0x0030 (size: 0x30)

}; // Size: 0x60

class UNiagaraStatelessModule_InitialMeshOrientation : public UNiagaraStatelessModule
{
    ENSMInitialMeshOrientationMode MeshOrientationMode;                               // 0x0030 (size: 0x4)
    FNiagaraDistributionRangeVector3 OrientationVector;                               // 0x0038 (size: 0x30)
    FNiagaraDistributionRangeVector3 MeshAxisToOrient;                                // 0x0068 (size: 0x30)
    FNiagaraDistributionRangeVector3 Rotation;                                        // 0x0098 (size: 0x30)

}; // Size: 0xC8

class UNiagaraStatelessModule_InitializeParticle : public UNiagaraStatelessModule
{
    FNiagaraDistributionRangeFloat LifetimeDistribution;                              // 0x0030 (size: 0x20)
    FNiagaraDistributionRangeColor ColorDistribution;                                 // 0x0050 (size: 0x38)
    FNiagaraDistributionRangeFloat MassDistribution;                                  // 0x0088 (size: 0x20)
    FNiagaraDistributionRangeVector2 SpriteSizeDistribution;                          // 0x00A8 (size: 0x28)
    FNiagaraDistributionRangeFloat SpriteRotationDistribution;                        // 0x00D0 (size: 0x20)
    FNiagaraDistributionRangeVector3 MeshScaleDistribution;                           // 0x00F0 (size: 0x30)
    bool bWriteRibbonWidth;                                                           // 0x0120 (size: 0x1)
    FNiagaraDistributionRangeFloat RibbonWidthDistribution;                           // 0x0128 (size: 0x20)
    FNiagaraDistributionPosition InitialPositionDistribution;                         // 0x0148 (size: 0x30)

}; // Size: 0x178

class UNiagaraStatelessModule_MeshIndex : public UNiagaraStatelessModule
{
    FNiagaraDistributionRangeInt MeshIndex;                                           // 0x0030 (size: 0x18)
    TArray<float> MeshIndexWeight;                                                    // 0x0048 (size: 0x10)

    bool NeedsMeshIndexWeights();
}; // Size: 0x58

class UNiagaraStatelessModule_MeshRotationRate : public UNiagaraStatelessModule
{
    FNiagaraDistributionRangeVector3 RotationRateDistribution;                        // 0x0030 (size: 0x30)

}; // Size: 0x60

class UNiagaraStatelessModule_RotateAroundPoint : public UNiagaraStatelessModule
{
    float RateMin;                                                                    // 0x0030 (size: 0x4)
    float RateMax;                                                                    // 0x0034 (size: 0x4)
    float RadiusMin;                                                                  // 0x0038 (size: 0x4)
    float RadiusMax;                                                                  // 0x003C (size: 0x4)
    float InitialPhaseMin;                                                            // 0x0040 (size: 0x4)
    float InitialPhaseMax;                                                            // 0x0044 (size: 0x4)

}; // Size: 0x48

class UNiagaraStatelessModule_ScaleColor : public UNiagaraStatelessModule
{
    FNiagaraDistributionColor ScaleDistribution;                                      // 0x0030 (size: 0x30)

}; // Size: 0x60

class UNiagaraStatelessModule_ScaleMeshSize : public UNiagaraStatelessModule
{
    FNiagaraDistributionVector3 ScaleDistribution;                                    // 0x0030 (size: 0x30)
    FNiagaraParameterBindingWithValue ScaleCurveRange;                                // 0x0060 (size: 0x20)

    bool UseScaleCurveRange();
}; // Size: 0x80

class UNiagaraStatelessModule_ScaleMeshSizeBySpeed : public UNiagaraStatelessModule
{
    FNiagaraDistributionRangeFloat VelocityThreshold;                                 // 0x0030 (size: 0x20)
    FNiagaraDistributionRangeVector3 MinScaleFactor;                                  // 0x0050 (size: 0x30)
    FNiagaraDistributionRangeVector3 MaxScaleFactor;                                  // 0x0080 (size: 0x30)
    bool bSampleScaleFactorByCurve;                                                   // 0x00B0 (size: 0x1)
    FNiagaraDistributionFloat SampleFactorCurve;                                      // 0x00B8 (size: 0x30)

}; // Size: 0xE8

class UNiagaraStatelessModule_ScaleSpriteSize : public UNiagaraStatelessModule
{
    FNiagaraDistributionVector2 ScaleDistribution;                                    // 0x0030 (size: 0x30)
    FNiagaraParameterBindingWithValue ScaleCurveRange;                                // 0x0060 (size: 0x20)

    bool UseScaleCurveRange();
}; // Size: 0x80

class UNiagaraStatelessModule_ScaleSpriteSizeBySpeed : public UNiagaraStatelessModule
{
    FNiagaraDistributionRangeFloat VelocityThreshold;                                 // 0x0030 (size: 0x20)
    FNiagaraDistributionRangeVector2 MinScaleFactor;                                  // 0x0050 (size: 0x28)
    FNiagaraDistributionRangeVector2 MaxScaleFactor;                                  // 0x0078 (size: 0x28)
    bool bSampleScaleFactorByCurve;                                                   // 0x00A0 (size: 0x1)
    FNiagaraDistributionFloat SampleFactorCurve;                                      // 0x00A8 (size: 0x30)

}; // Size: 0xD8

class UNiagaraStatelessModule_ShapeLocation : public UNiagaraStatelessModule
{
    ENSM_ShapePrimitive ShapePrimitive;                                               // 0x0030 (size: 0x4)
    FVector3f BoxSize;                                                                // 0x0034 (size: 0xC)
    bool bBoxSurfaceOnly;                                                             // 0x0040 (size: 0x1)
    float BoxSurfaceThicknessMin;                                                     // 0x0044 (size: 0x4)
    float BoxSurfaceThicknessMax;                                                     // 0x0048 (size: 0x4)
    FVector2f PlaneSize;                                                              // 0x004C (size: 0x8)
    float CylinderHeight;                                                             // 0x0054 (size: 0x4)
    float CylinderRadius;                                                             // 0x0058 (size: 0x4)
    float CylinderHeightMidpoint;                                                     // 0x005C (size: 0x4)
    float RingRadius;                                                                 // 0x0060 (size: 0x4)
    float DiscCoverage;                                                               // 0x0064 (size: 0x4)
    float RingUDistribution;                                                          // 0x0068 (size: 0x4)
    float SphereMin;                                                                  // 0x006C (size: 0x4)
    float SphereMax;                                                                  // 0x0070 (size: 0x4)

}; // Size: 0x78

class UNiagaraStatelessModule_SolveVelocitiesAndForces : public UNiagaraStatelessModule
{
}; // Size: 0x30

class UNiagaraStatelessModule_SpriteFacingAndAlignment : public UNiagaraStatelessModule
{
    bool bSpriteFacingEnabled;                                                        // 0x0030 (size: 0x1)
    bool bSpriteAlignmentEnabled;                                                     // 0x0031 (size: 0x1)
    FVector3f SpriteFacing;                                                           // 0x0034 (size: 0xC)
    FVector3f SpriteAlignment;                                                        // 0x0040 (size: 0xC)

}; // Size: 0x50

class UNiagaraStatelessModule_SpriteRotationRate : public UNiagaraStatelessModule
{
    FNiagaraDistributionRangeFloat RotationRateDistribution;                          // 0x0030 (size: 0x20)

}; // Size: 0x50

class UNiagaraStatelessModule_SubUVAnimation : public UNiagaraStatelessModule
{
    int32 NumFrames;                                                                  // 0x0030 (size: 0x4)
    bool bStartFrameRangeOverride_Enabled;                                            // 0x0034 (size: 0x1)
    bool bEndFrameRangeOverride_Enabled;                                              // 0x0035 (size: 0x1)
    int32 StartFrameRangeOverride;                                                    // 0x0038 (size: 0x4)
    int32 EndFrameRangeOverride;                                                      // 0x003C (size: 0x4)
    ENSMSubUVAnimation_Mode AnimationMode;                                            // 0x0040 (size: 0x4)
    float LoopsPerSecond;                                                             // 0x0044 (size: 0x4)
    float RandomChangeInterval;                                                       // 0x0048 (size: 0x4)

}; // Size: 0x50

class UNiagaraSystem : public UFXSystemAsset
{
    uint8 bSupportLargeWorldCoordinates;                                              // 0x0050 (size: 0x1)
    uint8 bOverrideCastShadow;                                                        // 0x0050 (size: 0x1)
    uint8 bOverrideReceivesDecals;                                                    // 0x0050 (size: 0x1)
    uint8 bOverrideRenderCustomDepth;                                                 // 0x0050 (size: 0x1)
    uint8 bOverrideCustomDepthStencilValue;                                           // 0x0050 (size: 0x1)
    uint8 bOverrideCustomDepthStencilWriteMask;                                       // 0x0050 (size: 0x1)
    uint8 bOverrideTranslucencySortPriority;                                          // 0x0050 (size: 0x1)
    uint8 bOverrideTranslucencySortDistanceOffset;                                    // 0x0050 (size: 0x1)
    uint8 bCastShadow;                                                                // 0x0051 (size: 0x1)
    uint8 bReceivesDecals;                                                            // 0x0051 (size: 0x1)
    uint8 bRenderCustomDepth;                                                         // 0x0051 (size: 0x1)
    uint8 bDisableExperimentalVM;                                                     // 0x0051 (size: 0x1)
    uint8 bInitialOwnerVelocityFromActor;                                             // 0x0051 (size: 0x1)
    ERendererStencilMask CustomDepthStencilWriteMask;                                 // 0x0052 (size: 0x1)
    int32 CustomDepthStencilValue;                                                    // 0x0054 (size: 0x4)
    int32 TranslucencySortPriority;                                                   // 0x0058 (size: 0x4)
    float TranslucencySortDistanceOffset;                                             // 0x005C (size: 0x4)
    uint8 bDumpDebugSystemInfo;                                                       // 0x0060 (size: 0x1)
    uint8 bDumpDebugEmitterInfo;                                                      // 0x0060 (size: 0x1)
    uint8 bRequireCurrentFrameData;                                                   // 0x0060 (size: 0x1)
    uint8 bOverrideScalabilitySettings;                                               // 0x0060 (size: 0x1)
    uint8 bFixedBounds;                                                               // 0x0064 (size: 0x1)
    class UNiagaraEffectType* EffectType;                                             // 0x0068 (size: 0x8)
    uint8 bOverrideAllowCullingForLocalPlayers;                                       // 0x0070 (size: 0x1)
    uint8 bAllowCullingForLocalPlayersOverride;                                       // 0x0070 (size: 0x1)
    FNiagaraSystemScalabilityOverrides SystemScalabilityOverrides;                    // 0x0078 (size: 0x10)
    FNiagaraPlatformSet Platforms;                                                    // 0x0088 (size: 0x30)
    TArray<FNiagaraEmitterHandle> EmitterHandles;                                     // 0x00B8 (size: 0x10)
    TArray<class UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;  // 0x00C8 (size: 0x10)
    class UNiagaraScript* SystemSpawnScript;                                          // 0x00D8 (size: 0x8)
    class UNiagaraScript* SystemUpdateScript;                                         // 0x00E0 (size: 0x8)
    FNiagaraSystemCompiledData SystemCompiledData;                                    // 0x00F8 (size: 0x240)
    FNiagaraUserRedirectionParameterStore ExposedParameters;                          // 0x0338 (size: 0xD8)
    FBox FixedBounds;                                                                 // 0x0410 (size: 0x38)
    bool bNeedsGPUContextInitForDataInterfaces;                                       // 0x0448 (size: 0x1)
    bool bDeterminism;                                                                // 0x0449 (size: 0x1)
    bool bFixedTickDelta;                                                             // 0x044A (size: 0x1)
    int32 RandomSeed;                                                                 // 0x044C (size: 0x4)
    float WarmupTime;                                                                 // 0x0450 (size: 0x4)
    int32 WarmupTickCount;                                                            // 0x0454 (size: 0x4)
    float WarmupTickDelta;                                                            // 0x0458 (size: 0x4)
    float FixedTickDeltaTime;                                                         // 0x045C (size: 0x4)
    uint8 bAllowSystemStateFastPath;                                                  // 0x04F8 (size: 0x1)
    uint8 bSystemStateFastPathEnabled;                                                // 0x04F8 (size: 0x1)
    FNiagaraSystemStateData SystemStateData;                                          // 0x0508 (size: 0x50)

}; // Size: 0x560

class UNiagaraValidationRule : public UObject
{
}; // Size: 0x28

class UNiagaraValidationRuleSet : public UObject
{
    TArray<class UNiagaraValidationRule*> ValidationRules;                            // 0x0028 (size: 0x10)

}; // Size: 0x38

class UNiagaraVolumeRendererProperties : public UNiagaraRendererProperties
{
    class UMaterialInterface* Material;                                               // 0x00B8 (size: 0x8)
    FNiagaraParameterBinding MaterialParameterBinding;                                // 0x00C0 (size: 0xC)
    int32 RendererVisibility;                                                         // 0x00D0 (size: 0x4)
    float StepFactor;                                                                 // 0x00D4 (size: 0x4)
    float LightingDownsampleFactor;                                                   // 0x00D8 (size: 0x4)
    float ShadowStepFactor;                                                           // 0x00DC (size: 0x4)
    float ShadowBiasFactor;                                                           // 0x00E0 (size: 0x4)
    FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;                    // 0x0190 (size: 0x38)
    FNiagaraVariableAttributeBinding VolumeResolutionMaxAxisBinding;                  // 0x01C8 (size: 0x38)
    FNiagaraVariableAttributeBinding VolumeWorldSpaceSizeBinding;                     // 0x0200 (size: 0x38)
    FNiagaraRendererMaterialParameters MaterialParameters;                            // 0x0238 (size: 0x50)

}; // Size: 0x2B0

class UVolumeCache : public UObject
{
    FString FilePath;                                                                 // 0x0028 (size: 0x10)
    EVolumeCacheType CacheType;                                                       // 0x0038 (size: 0x1)
    FIntVector Resolution;                                                            // 0x003C (size: 0xC)
    int32 FrameRangeStart;                                                            // 0x0048 (size: 0x4)
    int32 FrameRangeEnd;                                                              // 0x004C (size: 0x4)

}; // Size: 0x60

#endif
