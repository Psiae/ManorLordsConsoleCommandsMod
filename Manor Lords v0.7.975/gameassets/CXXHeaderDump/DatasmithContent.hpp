#ifndef UE4SS_SDK_DatasmithContent_HPP
#define UE4SS_SDK_DatasmithContent_HPP

#include "DatasmithContent_enums.hpp"

struct FDatasmithAssetImportOptions
{
    FName PackagePath;                                                                // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FDatasmithCameraFilmbackSettingsTemplate
{
    float SensorWidth;                                                                // 0x0000 (size: 0x4)
    float SensorHeight;                                                               // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FDatasmithCameraFocusSettingsTemplate
{
    ECameraFocusMethod FocusMethod;                                                   // 0x0000 (size: 0x1)
    float ManualFocusDistance;                                                        // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FDatasmithCameraLensSettingsTemplate
{
    float MaxFStop;                                                                   // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FDatasmithCameraLookatTrackingSettingsTemplate
{
    uint8 bEnableLookAtTracking;                                                      // 0x0000 (size: 0x1)
    uint8 bAllowRoll;                                                                 // 0x0000 (size: 0x1)
    TSoftObjectPtr<AActor> ActorToTrack;                                              // 0x0008 (size: 0x28)

}; // Size: 0x30

struct FDatasmithImportBaseOptions
{
    EDatasmithImportScene SceneHandling;                                              // 0x0000 (size: 0x1)
    bool bIncludeGeometry;                                                            // 0x0001 (size: 0x1)
    bool bIncludeMaterial;                                                            // 0x0002 (size: 0x1)
    bool bIncludeLight;                                                               // 0x0003 (size: 0x1)
    bool bIncludeCamera;                                                              // 0x0004 (size: 0x1)
    bool bIncludeAnimation;                                                           // 0x0005 (size: 0x1)
    FDatasmithAssetImportOptions AssetOptions;                                        // 0x0008 (size: 0x8)
    FDatasmithStaticMeshImportOptions StaticMeshOptions;                              // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FDatasmithMeshBuildSettingsTemplate
{
    uint8 bUseMikkTSpace;                                                             // 0x0000 (size: 0x1)
    uint8 bRecomputeNormals;                                                          // 0x0000 (size: 0x1)
    uint8 bRecomputeTangents;                                                         // 0x0000 (size: 0x1)
    uint8 bRemoveDegenerates;                                                         // 0x0000 (size: 0x1)
    uint8 bBuildAdjacencyBuffer;                                                      // 0x0000 (size: 0x1)
    uint8 bUseHighPrecisionTangentBasis;                                              // 0x0000 (size: 0x1)
    uint8 bUseFullPrecisionUVs;                                                       // 0x0000 (size: 0x1)
    uint8 bGenerateLightmapUVs;                                                       // 0x0000 (size: 0x1)
    int32 MinLightmapResolution;                                                      // 0x0004 (size: 0x4)
    int32 SrcLightmapIndex;                                                           // 0x0008 (size: 0x4)
    int32 DstLightmapIndex;                                                           // 0x000C (size: 0x4)

}; // Size: 0x10

struct FDatasmithMeshSectionInfoMapTemplate
{
    TMap<uint32, FDatasmithMeshSectionInfoTemplate> Map;                              // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FDatasmithMeshSectionInfoTemplate
{
    int32 MaterialIndex;                                                              // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FDatasmithPostProcessSettingsTemplate
{
    uint8 bOverride_WhiteTemp;                                                        // 0x0000 (size: 0x1)
    uint8 bOverride_ColorSaturation;                                                  // 0x0000 (size: 0x1)
    uint8 bOverride_VignetteIntensity;                                                // 0x0000 (size: 0x1)
    uint8 bOverride_FilmWhitePoint;                                                   // 0x0000 (size: 0x1)
    uint8 bOverride_AutoExposureMethod;                                               // 0x0000 (size: 0x1)
    uint8 bOverride_CameraISO;                                                        // 0x0000 (size: 0x1)
    uint8 bOverride_CameraShutterSpeed;                                               // 0x0000 (size: 0x1)
    uint8 bOverride_DepthOfFieldFstop;                                                // 0x0004 (size: 0x1)
    float WhiteTemp;                                                                  // 0x0008 (size: 0x4)
    float VignetteIntensity;                                                          // 0x000C (size: 0x4)
    FLinearColor FilmWhitePoint;                                                      // 0x0010 (size: 0x10)
    FVector4 ColorSaturation;                                                         // 0x0020 (size: 0x10)
    TEnumAsByte<EAutoExposureMethod> AutoExposureMethod;                              // 0x0030 (size: 0x1)
    float CameraISO;                                                                  // 0x0034 (size: 0x4)
    float CameraShutterSpeed;                                                         // 0x0038 (size: 0x4)
    float DepthOfFieldFstop;                                                          // 0x003C (size: 0x4)

}; // Size: 0x40

struct FDatasmithReimportOptions
{
    bool bUpdateActors;                                                               // 0x0000 (size: 0x1)
    bool bRespawnDeletedActors;                                                       // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FDatasmithRetessellationOptions : public FDatasmithTessellationOptions
{
    EDatasmithCADRetessellationRule RetessellationRule;                               // 0x0010 (size: 0x1)

}; // Size: 0x14

struct FDatasmithStaticMaterialTemplate
{
    FName MaterialSlotName;                                                           // 0x0000 (size: 0x8)
    class UMaterialInterface* MaterialInterface;                                      // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FDatasmithStaticMeshImportOptions
{
    EDatasmithImportLightmapMin MinLightmapResolution;                                // 0x0000 (size: 0x1)
    EDatasmithImportLightmapMax MaxLightmapResolution;                                // 0x0001 (size: 0x1)
    bool bGenerateLightmapUVs;                                                        // 0x0002 (size: 0x1)
    bool bRemoveDegenerates;                                                          // 0x0003 (size: 0x1)

}; // Size: 0x4

struct FDatasmithStaticParameterSetTemplate
{
    TMap<class FName, class bool> StaticSwitchParameters;                             // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FDatasmithTessellationOptions
{
    float ChordTolerance;                                                             // 0x0000 (size: 0x4)
    float MaxEdgeLength;                                                              // 0x0004 (size: 0x4)
    float NormalTolerance;                                                            // 0x0008 (size: 0x4)
    EDatasmithCADStitchingTechnique StitchingTechnique;                               // 0x000C (size: 0x1)

}; // Size: 0x10

class ADatasmithAreaLightActor : public AActor
{
    TEnumAsByte<EComponentMobility::Type> Mobility;                                   // 0x0220 (size: 0x1)
    EDatasmithAreaLightActorType LightType;                                           // 0x0221 (size: 0x1)
    EDatasmithAreaLightActorShape LightShape;                                         // 0x0222 (size: 0x1)
    FVector2D Dimensions;                                                             // 0x0224 (size: 0x8)
    float Intensity;                                                                  // 0x022C (size: 0x4)
    ELightUnits IntensityUnits;                                                       // 0x0230 (size: 0x1)
    FLinearColor Color;                                                               // 0x0234 (size: 0x10)
    float Temperature;                                                                // 0x0244 (size: 0x4)
    class UTextureLightProfile* IESTexture;                                           // 0x0248 (size: 0x8)
    bool bUseIESBrightness;                                                           // 0x0250 (size: 0x1)
    float IESBrightnessScale;                                                         // 0x0254 (size: 0x4)
    FRotator Rotation;                                                                // 0x0258 (size: 0xC)
    float SourceRadius;                                                               // 0x0264 (size: 0x4)
    float SourceLength;                                                               // 0x0268 (size: 0x4)
    float AttenuationRadius;                                                          // 0x026C (size: 0x4)
    float SpotlightInnerAngle;                                                        // 0x0270 (size: 0x4)
    float SpotlightOuterAngle;                                                        // 0x0274 (size: 0x4)

}; // Size: 0x278

class ADatasmithImportedSequencesActor : public AActor
{
    TArray<class ULevelSequence*> ImportedSequences;                                  // 0x0220 (size: 0x10)

    void PlayLevelSequence(class ULevelSequence* SequenceToPlay);
}; // Size: 0x230

class ADatasmithSceneActor : public AActor
{
    class UDatasmithScene* Scene;                                                     // 0x0220 (size: 0x8)
    TMap<class FName, class TSoftObjectPtr<AActor>> RelatedActors;                    // 0x0228 (size: 0x50)

}; // Size: 0x278

class UDatasmithActorTemplate : public UDatasmithObjectTemplate
{
    TSet<FName> Layers;                                                               // 0x0030 (size: 0x50)
    TSet<FName> Tags;                                                                 // 0x0080 (size: 0x50)

}; // Size: 0xD0

class UDatasmithAdditionalData : public UObject
{
}; // Size: 0x28

class UDatasmithAreaLightActorTemplate : public UDatasmithObjectTemplate
{
    EDatasmithAreaLightActorType LightType;                                           // 0x0030 (size: 0x1)
    EDatasmithAreaLightActorShape LightShape;                                         // 0x0031 (size: 0x1)
    FVector2D Dimensions;                                                             // 0x0034 (size: 0x8)
    FLinearColor Color;                                                               // 0x003C (size: 0x10)
    float Intensity;                                                                  // 0x004C (size: 0x4)
    ELightUnits IntensityUnits;                                                       // 0x0050 (size: 0x1)
    float Temperature;                                                                // 0x0054 (size: 0x4)
    TSoftObjectPtr<UTextureLightProfile> IESTexture;                                  // 0x0058 (size: 0x28)
    bool bUseIESBrightness;                                                           // 0x0080 (size: 0x1)
    float IESBrightnessScale;                                                         // 0x0084 (size: 0x4)
    FRotator Rotation;                                                                // 0x0088 (size: 0xC)
    float SourceRadius;                                                               // 0x0094 (size: 0x4)
    float SourceLength;                                                               // 0x0098 (size: 0x4)
    float AttenuationRadius;                                                          // 0x009C (size: 0x4)

}; // Size: 0xA0

class UDatasmithAssetImportData : public UAssetImportData
{
}; // Size: 0x28

class UDatasmithAssetUserData : public UAssetUserData
{
    TMap<class FName, class FString> MetaData;                                        // 0x0028 (size: 0x50)

}; // Size: 0x78

class UDatasmithCADImportSceneData : public UDatasmithSceneImportData
{
}; // Size: 0x28

class UDatasmithCineCameraActorTemplate : public UDatasmithObjectTemplate
{
    FDatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings;            // 0x0030 (size: 0x30)

}; // Size: 0x60

class UDatasmithCineCameraComponentTemplate : public UDatasmithObjectTemplate
{
    FDatasmithCameraFilmbackSettingsTemplate FilmbackSettings;                        // 0x0030 (size: 0x8)
    FDatasmithCameraLensSettingsTemplate LensSettings;                                // 0x0038 (size: 0x4)
    FDatasmithCameraFocusSettingsTemplate FocusSettings;                              // 0x003C (size: 0x8)
    float CurrentFocalLength;                                                         // 0x0044 (size: 0x4)
    float CurrentAperture;                                                            // 0x0048 (size: 0x4)
    FDatasmithPostProcessSettingsTemplate PostProcessSettings;                        // 0x0050 (size: 0x40)

}; // Size: 0x90

class UDatasmithCommonTessellationOptions : public UDatasmithOptionsBase
{
    FDatasmithTessellationOptions options;                                            // 0x0028 (size: 0x10)

}; // Size: 0x38

class UDatasmithContentBlueprintLibrary : public UBlueprintFunctionLibrary
{

    FString GetDatasmithUserDataValueForKey(class UObject* Object, FName Key);
    void GetDatasmithUserDataKeysAndValuesForValue(class UObject* Object, FString StringToMatch, TArray<FName>& OutKeys, TArray<FString>& OutValues);
    class UDatasmithAssetUserData* GetDatasmithUserData(class UObject* Object);
}; // Size: 0x28

class UDatasmithCustomActionBase : public UObject
{
}; // Size: 0x30

class UDatasmithDecalComponentTemplate : public UDatasmithObjectTemplate
{
    int32 SortOrder;                                                                  // 0x0030 (size: 0x4)
    FVector DecalSize;                                                                // 0x0034 (size: 0xC)
    class UMaterialInterface* Material;                                               // 0x0040 (size: 0x8)

}; // Size: 0x48

class UDatasmithDeltaGenAssetImportData : public UDatasmithAssetImportData
{
}; // Size: 0x28

class UDatasmithDeltaGenSceneImportData : public UDatasmithFBXSceneImportData
{
    bool bMergeNodes;                                                                 // 0x0048 (size: 0x1)
    bool bOptimizeDuplicatedNodes;                                                    // 0x0049 (size: 0x1)
    bool bRemoveInvisibleNodes;                                                       // 0x004A (size: 0x1)
    bool bSimplifyNodeHierarchy;                                                      // 0x004B (size: 0x1)
    bool bImportVar;                                                                  // 0x004C (size: 0x1)
    FString VarPath;                                                                  // 0x0050 (size: 0x10)
    bool bImportPos;                                                                  // 0x0060 (size: 0x1)
    FString PosPath;                                                                  // 0x0068 (size: 0x10)
    bool bImportTml;                                                                  // 0x0078 (size: 0x1)
    FString TmlPath;                                                                  // 0x0080 (size: 0x10)

}; // Size: 0x90

class UDatasmithFBXSceneImportData : public UDatasmithSceneImportData
{
    bool bGenerateLightmapUVs;                                                        // 0x0028 (size: 0x1)
    FString TexturesDir;                                                              // 0x0030 (size: 0x10)
    uint8 IntermediateSerialization;                                                  // 0x0040 (size: 0x1)
    bool bColorizeMaterials;                                                          // 0x0041 (size: 0x1)

}; // Size: 0x48

class UDatasmithGLTFSceneImportData : public UDatasmithSceneImportData
{
    FString Generator;                                                                // 0x0028 (size: 0x10)
    float Version;                                                                    // 0x0038 (size: 0x4)
    FString Author;                                                                   // 0x0040 (size: 0x10)
    FString License;                                                                  // 0x0050 (size: 0x10)
    FString Source;                                                                   // 0x0060 (size: 0x10)

}; // Size: 0x70

class UDatasmithIFCSceneImportData : public UDatasmithSceneImportData
{
}; // Size: 0x28

class UDatasmithImportOptions : public UDatasmithOptionsBase
{
    EDatasmithImportSearchPackagePolicy SearchPackagePolicy;                          // 0x0028 (size: 0x1)
    EDatasmithImportAssetConflictPolicy MaterialConflictPolicy;                       // 0x0029 (size: 0x1)
    EDatasmithImportAssetConflictPolicy TextureConflictPolicy;                        // 0x002A (size: 0x1)
    EDatasmithImportActorPolicy StaticMeshActorImportPolicy;                          // 0x002B (size: 0x1)
    EDatasmithImportActorPolicy LightImportPolicy;                                    // 0x002C (size: 0x1)
    EDatasmithImportActorPolicy CameraImportPolicy;                                   // 0x002D (size: 0x1)
    EDatasmithImportActorPolicy OtherActorImportPolicy;                               // 0x002E (size: 0x1)
    EDatasmithImportMaterialQuality MaterialQuality;                                  // 0x002F (size: 0x1)
    FDatasmithImportBaseOptions BaseOptions;                                          // 0x0030 (size: 0x14)
    FDatasmithReimportOptions ReimportOptions;                                        // 0x0044 (size: 0x2)
    FString Filename;                                                                 // 0x0048 (size: 0x10)
    FString FilePath;                                                                 // 0x0058 (size: 0x10)

}; // Size: 0x70

class UDatasmithLandscapeTemplate : public UDatasmithObjectTemplate
{
    class UMaterialInterface* LandscapeMaterial;                                      // 0x0030 (size: 0x8)
    int32 StaticLightingLOD;                                                          // 0x0038 (size: 0x4)

}; // Size: 0x40

class UDatasmithLightComponentTemplate : public UDatasmithObjectTemplate
{
    uint8 bVisible;                                                                   // 0x0030 (size: 0x1)
    uint8 CastShadows;                                                                // 0x0034 (size: 0x1)
    uint8 bUseTemperature;                                                            // 0x0034 (size: 0x1)
    uint8 bUseIESBrightness;                                                          // 0x0034 (size: 0x1)
    float Intensity;                                                                  // 0x0038 (size: 0x4)
    float Temperature;                                                                // 0x003C (size: 0x4)
    float IESBrightnessScale;                                                         // 0x0040 (size: 0x4)
    FLinearColor LightColor;                                                          // 0x0044 (size: 0x10)
    class UMaterialInterface* LightFunctionMaterial;                                  // 0x0058 (size: 0x8)
    class UTextureLightProfile* IESTexture;                                           // 0x0060 (size: 0x8)

}; // Size: 0x68

class UDatasmithMDLSceneImportData : public UDatasmithSceneImportData
{
}; // Size: 0x28

class UDatasmithMaterialInstanceTemplate : public UDatasmithObjectTemplate
{
    TSoftObjectPtr<UMaterialInterface> ParentMaterial;                                // 0x0030 (size: 0x28)
    TMap<FName, float> ScalarParameterValues;                                         // 0x0058 (size: 0x50)
    TMap<class FName, class FLinearColor> VectorParameterValues;                      // 0x00A8 (size: 0x50)
    TMap<class FName, class TSoftObjectPtr<UTexture>> TextureParameterValues;         // 0x00F8 (size: 0x50)
    FDatasmithStaticParameterSetTemplate StaticParameters;                            // 0x0148 (size: 0x50)

}; // Size: 0x198

class UDatasmithObjectTemplate : public UObject
{
}; // Size: 0x30

class UDatasmithOptionsBase : public UObject
{
}; // Size: 0x28

class UDatasmithPointLightComponentTemplate : public UDatasmithObjectTemplate
{
    ELightUnits IntensityUnits;                                                       // 0x0030 (size: 0x1)
    float SourceRadius;                                                               // 0x0034 (size: 0x4)
    float SourceLength;                                                               // 0x0038 (size: 0x4)
    float AttenuationRadius;                                                          // 0x003C (size: 0x4)

}; // Size: 0x40

class UDatasmithPostProcessVolumeTemplate : public UDatasmithObjectTemplate
{
    FDatasmithPostProcessSettingsTemplate Settings;                                   // 0x0030 (size: 0x40)
    uint8 bEnabled;                                                                   // 0x0070 (size: 0x1)
    uint8 bUnbound;                                                                   // 0x0070 (size: 0x1)

}; // Size: 0x80

class UDatasmithScene : public UObject
{
}; // Size: 0x30

class UDatasmithSceneComponentTemplate : public UDatasmithObjectTemplate
{
    FTransform RelativeTransform;                                                     // 0x0030 (size: 0x30)
    TEnumAsByte<EComponentMobility::Type> Mobility;                                   // 0x0060 (size: 0x1)
    TSoftObjectPtr<USceneComponent> AttachParent;                                     // 0x0068 (size: 0x28)
    bool bVisible;                                                                    // 0x0090 (size: 0x1)
    TSet<FName> Tags;                                                                 // 0x0098 (size: 0x50)

}; // Size: 0xF0

class UDatasmithSceneImportData : public UAssetImportData
{
}; // Size: 0x28

class UDatasmithSkyLightComponentTemplate : public UDatasmithObjectTemplate
{
    TEnumAsByte<ESkyLightSourceType> SourceType;                                      // 0x0030 (size: 0x1)
    int32 CubemapResolution;                                                          // 0x0034 (size: 0x4)
    class UTextureCube* Cubemap;                                                      // 0x0038 (size: 0x8)

}; // Size: 0x40

class UDatasmithSpotLightComponentTemplate : public UDatasmithObjectTemplate
{
    float InnerConeAngle;                                                             // 0x0030 (size: 0x4)
    float OuterConeAngle;                                                             // 0x0034 (size: 0x4)

}; // Size: 0x38

class UDatasmithStaticMeshCADImportData : public UDatasmithStaticMeshImportData
{
}; // Size: 0x28

class UDatasmithStaticMeshComponentTemplate : public UDatasmithObjectTemplate
{
    class UStaticMesh* StaticMesh;                                                    // 0x0030 (size: 0x8)
    TArray<class UMaterialInterface*> OverrideMaterials;                              // 0x0038 (size: 0x10)

}; // Size: 0x48

class UDatasmithStaticMeshGLTFImportData : public UDatasmithStaticMeshImportData
{
    FString SourceMeshName;                                                           // 0x0028 (size: 0x10)

}; // Size: 0x38

class UDatasmithStaticMeshIFCImportData : public UDatasmithStaticMeshImportData
{
    FString SourceGlobalId;                                                           // 0x0028 (size: 0x10)

}; // Size: 0x38

class UDatasmithStaticMeshImportData : public UDatasmithAssetImportData
{
}; // Size: 0x28

class UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate
{
    FDatasmithMeshSectionInfoMapTemplate SectionInfoMap;                              // 0x0030 (size: 0x50)
    int32 LightMapCoordinateIndex;                                                    // 0x0080 (size: 0x4)
    int32 LightMapResolution;                                                         // 0x0084 (size: 0x4)
    TArray<FDatasmithMeshBuildSettingsTemplate> BuildSettings;                        // 0x0088 (size: 0x10)
    TArray<FDatasmithStaticMaterialTemplate> StaticMaterials;                         // 0x0098 (size: 0x10)

}; // Size: 0xA8

class UDatasmithTranslatedSceneImportData : public UDatasmithSceneImportData
{
}; // Size: 0x28

class UDatasmithVREDAssetImportData : public UDatasmithAssetImportData
{
}; // Size: 0x28

class UDatasmithVREDSceneImportData : public UDatasmithFBXSceneImportData
{
    bool bMergeNodes;                                                                 // 0x0048 (size: 0x1)
    bool bOptimizeDuplicatedNodes;                                                    // 0x0049 (size: 0x1)
    bool bImportMats;                                                                 // 0x004A (size: 0x1)
    FString MatsPath;                                                                 // 0x0050 (size: 0x10)
    bool bImportVar;                                                                  // 0x0060 (size: 0x1)
    bool bCleanVar;                                                                   // 0x0061 (size: 0x1)
    FString VarPath;                                                                  // 0x0068 (size: 0x10)
    bool bImportLightInfo;                                                            // 0x0078 (size: 0x1)
    FString LightInfoPath;                                                            // 0x0080 (size: 0x10)
    bool bImportClipInfo;                                                             // 0x0090 (size: 0x1)
    FString ClipInfoPath;                                                             // 0x0098 (size: 0x10)

}; // Size: 0xA8

#endif
