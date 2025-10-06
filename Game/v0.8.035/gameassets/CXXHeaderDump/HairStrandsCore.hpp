#ifndef UE4SS_SDK_HairStrandsCore_HPP
#define UE4SS_SDK_HairStrandsCore_HPP

#include "HairStrandsCore_enums.hpp"

struct FFollicleMaskOptions
{
    class UGroomAsset* Groom;                                                         // 0x0000 (size: 0x8)
    EFollicleMaskChannel Channel;                                                     // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FGoomBindingGroupInfo
{
    int32 RenRootCount;                                                               // 0x0000 (size: 0x4)
    int32 RenLODCount;                                                                // 0x0004 (size: 0x4)
    int32 SimRootCount;                                                               // 0x0008 (size: 0x4)
    int32 SimLODCount;                                                                // 0x000C (size: 0x4)

}; // Size: 0x10

struct FGroomAnimationInfo
{
    uint32 NumFrames;                                                                 // 0x0000 (size: 0x4)
    float SecondsPerFrame;                                                            // 0x0004 (size: 0x4)
    float Duration;                                                                   // 0x0008 (size: 0x4)
    float StartTime;                                                                  // 0x000C (size: 0x4)
    float EndTime;                                                                    // 0x0010 (size: 0x4)
    int32 StartFrame;                                                                 // 0x0014 (size: 0x4)
    int32 EndFrame;                                                                   // 0x0018 (size: 0x4)
    EGroomCacheAttributes Attributes;                                                 // 0x001C (size: 0x1)

}; // Size: 0x20

struct FGroomBuildSettings
{
    bool bOverrideGuides;                                                             // 0x0000 (size: 0x1)
    float HairToGuideDensity;                                                         // 0x0004 (size: 0x4)
    EGroomInterpolationQuality InterpolationQuality;                                  // 0x0008 (size: 0x1)
    EGroomInterpolationWeight InterpolationDistance;                                  // 0x0009 (size: 0x1)
    bool bRandomizeGuide;                                                             // 0x000A (size: 0x1)
    bool bUseUniqueGuide;                                                             // 0x000B (size: 0x1)

}; // Size: 0xC

struct FGroomCacheImportSettings
{
    bool bImportGroomCache;                                                           // 0x0000 (size: 0x1)
    EGroomCacheImportType ImportType;                                                 // 0x0001 (size: 0x1)
    int32 FrameStart;                                                                 // 0x0004 (size: 0x4)
    int32 FrameEnd;                                                                   // 0x0008 (size: 0x4)
    bool bSkipEmptyFrames;                                                            // 0x000C (size: 0x1)
    bool bImportGroomAsset;                                                           // 0x000D (size: 0x1)
    FSoftObjectPath GroomAsset;                                                       // 0x0010 (size: 0x20)
    bool bOverrideConversionSettings;                                                 // 0x0030 (size: 0x1)
    FGroomConversionSettings ConversionSettings;                                      // 0x0038 (size: 0x30)

}; // Size: 0x68

struct FGroomCacheInfo
{
    int32 Version;                                                                    // 0x0000 (size: 0x4)
    EGroomCacheType Type;                                                             // 0x0004 (size: 0x1)
    FGroomAnimationInfo AnimationInfo;                                                // 0x0008 (size: 0x20)

}; // Size: 0x28

struct FGroomConversionSettings
{
    FVector Rotation;                                                                 // 0x0000 (size: 0x18)
    FVector scale;                                                                    // 0x0018 (size: 0x18)

}; // Size: 0x30

struct FGroomHairGroupPreview
{
    FName GroupName;                                                                  // 0x0000 (size: 0x8)
    int32 GroupID;                                                                    // 0x0008 (size: 0x4)
    int32 CurveCount;                                                                 // 0x000C (size: 0x4)
    int32 GuideCount;                                                                 // 0x0010 (size: 0x4)
    uint32 Attributes;                                                                // 0x0014 (size: 0x4)
    uint32 AttributeFlags;                                                            // 0x0018 (size: 0x4)
    uint32 Flags;                                                                     // 0x001C (size: 0x4)
    FHairGroupsInterpolation InterpolationSettings;                                   // 0x0020 (size: 0x28)

}; // Size: 0x48

struct FHairAdvancedRenderingSettings
{
    bool bUseStableRasterization;                                                     // 0x0000 (size: 0x1)
    bool bScatterSceneLighting;                                                       // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FHairBendConstraint
{
    bool SolveBend;                                                                   // 0x0000 (size: 0x1)
    bool ProjectBend;                                                                 // 0x0001 (size: 0x1)
    float BendDamping;                                                                // 0x0004 (size: 0x4)
    float BendStiffness;                                                              // 0x0008 (size: 0x4)
    FRuntimeFloatCurve BendScale;                                                     // 0x0010 (size: 0x88)

}; // Size: 0x98

struct FHairCollisionConstraint
{
    bool SolveCollision;                                                              // 0x0000 (size: 0x1)
    bool ProjectCollision;                                                            // 0x0001 (size: 0x1)
    float StaticFriction;                                                             // 0x0004 (size: 0x4)
    float KineticFriction;                                                            // 0x0008 (size: 0x4)
    float StrandsViscosity;                                                           // 0x000C (size: 0x4)
    FIntVector GridDimension;                                                         // 0x0010 (size: 0xC)
    float CollisionRadius;                                                            // 0x001C (size: 0x4)
    FRuntimeFloatCurve RadiusScale;                                                   // 0x0020 (size: 0x88)

}; // Size: 0xA8

struct FHairDecimationSettings
{
    float CurveDecimation;                                                            // 0x0000 (size: 0x4)
    float VertexDecimation;                                                           // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FHairDeformationSettings
{
    bool bEnableRigging;                                                              // 0x0000 (size: 0x1)
    int32 NumCurves;                                                                  // 0x0004 (size: 0x4)
    int32 NumPoints;                                                                  // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FHairExternalForces
{
    FVector GravityVector;                                                            // 0x0000 (size: 0x18)
    float AirDrag;                                                                    // 0x0018 (size: 0x4)
    FVector AirVelocity;                                                              // 0x0020 (size: 0x18)

}; // Size: 0x38

struct FHairGeometrySettings
{
    float HairWidth;                                                                  // 0x0000 (size: 0x4)
    bool HairWidth_Override;                                                          // 0x0004 (size: 0x1)
    float HairRootScale;                                                              // 0x0008 (size: 0x4)
    float HairTipScale;                                                               // 0x000C (size: 0x4)

}; // Size: 0x10

struct FHairGroupCardsInfo
{
    int32 NumCards;                                                                   // 0x0000 (size: 0x4)
    int32 NumCardVertices;                                                            // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FHairGroupCardsTextures
{
    EHairTextureLayout Layout;                                                        // 0x0000 (size: 0x1)
    TArray<class UTexture2D*> Textures;                                               // 0x0008 (size: 0x10)
    class UTexture2D* DepthTexture;                                                   // 0x0018 (size: 0x8)
    class UTexture2D* CoverageTexture;                                                // 0x0020 (size: 0x8)
    class UTexture2D* TangentTexture;                                                 // 0x0028 (size: 0x8)
    class UTexture2D* AttributeTexture;                                               // 0x0030 (size: 0x8)
    class UTexture2D* AuxilaryDataTexture;                                            // 0x0038 (size: 0x8)
    class UTexture2D* MaterialTexture;                                                // 0x0040 (size: 0x8)

}; // Size: 0x50

struct FHairGroupDesc
{
    float HairLength;                                                                 // 0x0000 (size: 0x4)
    float HairWidth;                                                                  // 0x0004 (size: 0x4)
    bool HairWidth_Override;                                                          // 0x0008 (size: 0x1)
    float HairRootScale;                                                              // 0x000C (size: 0x4)
    bool HairRootScale_Override;                                                      // 0x0010 (size: 0x1)
    float HairTipScale;                                                               // 0x0014 (size: 0x4)
    bool HairTipScale_Override;                                                       // 0x0018 (size: 0x1)
    float HairShadowDensity;                                                          // 0x001C (size: 0x4)
    bool HairShadowDensity_Override;                                                  // 0x0020 (size: 0x1)
    float HairRaytracingRadiusScale;                                                  // 0x0024 (size: 0x4)
    bool HairRaytracingRadiusScale_Override;                                          // 0x0028 (size: 0x1)
    bool bUseHairRaytracingGeometry;                                                  // 0x0029 (size: 0x1)
    bool bUseHairRaytracingGeometry_Override;                                         // 0x002A (size: 0x1)
    float LODBias;                                                                    // 0x002C (size: 0x4)
    bool bUseStableRasterization;                                                     // 0x0030 (size: 0x1)
    bool bUseStableRasterization_Override;                                            // 0x0031 (size: 0x1)
    bool bScatterSceneLighting;                                                       // 0x0032 (size: 0x1)
    bool bScatterSceneLighting_Override;                                              // 0x0033 (size: 0x1)
    bool bSupportVoxelization;                                                        // 0x0034 (size: 0x1)
    bool bSupportVoxelization_Override;                                               // 0x0035 (size: 0x1)
    float HairLengthScale;                                                            // 0x0038 (size: 0x4)
    bool HairLengthScale_Override;                                                    // 0x003C (size: 0x1)

}; // Size: 0x40

struct FHairGroupInfo
{
    int32 GroupID;                                                                    // 0x0000 (size: 0x4)
    FName GroupName;                                                                  // 0x0004 (size: 0x8)
    int32 NumCurves;                                                                  // 0x000C (size: 0x4)
    int32 NumGuides;                                                                  // 0x0010 (size: 0x4)
    int32 NumCurveVertices;                                                           // 0x0014 (size: 0x4)
    int32 NumGuideVertices;                                                           // 0x0018 (size: 0x4)
    float MaxCurveLength;                                                             // 0x001C (size: 0x4)
    uint32 Flags;                                                                     // 0x0020 (size: 0x4)
    TArray<FHairGroupLODInfo> LODInfos;                                               // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FHairGroupInfoWithVisibility : public FHairGroupInfo
{
    bool bIsVisible;                                                                  // 0x0038 (size: 0x1)

}; // Size: 0x40

struct FHairGroupLODInfo
{
    int32 NumPoints;                                                                  // 0x0000 (size: 0x4)
    int32 NumCurves;                                                                  // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FHairGroupsCardsSourceDescription
{
    class UMaterialInterface* Material;                                               // 0x0000 (size: 0x8)
    FName MaterialSlotName;                                                           // 0x0008 (size: 0x8)
    EHairCardsSourceType SourceType;                                                  // 0x0010 (size: 0x1)
    class UStaticMesh* ProceduralMesh;                                                // 0x0018 (size: 0x8)
    bool bInvertUV;                                                                   // 0x0020 (size: 0x1)
    EHairCardsGuideType GuideType;                                                    // 0x0021 (size: 0x1)
    class UStaticMesh* ImportedMesh;                                                  // 0x0028 (size: 0x8)
    FHairGroupCardsTextures Textures;                                                 // 0x0030 (size: 0x50)
    int32 GroupIndex;                                                                 // 0x0080 (size: 0x4)
    int32 LODIndex;                                                                   // 0x0084 (size: 0x4)
    FHairGroupCardsInfo CardsInfo;                                                    // 0x0088 (size: 0x8)
    FString ImportedMeshKey;                                                          // 0x0090 (size: 0x10)

}; // Size: 0xA0

struct FHairGroupsInterpolation
{
    FHairDecimationSettings DecimationSettings;                                       // 0x0000 (size: 0x8)
    FHairInterpolationSettings InterpolationSettings;                                 // 0x0008 (size: 0x14)
    FHairDeformationSettings RiggingSettings;                                         // 0x001C (size: 0xC)

}; // Size: 0x28

struct FHairGroupsLOD
{
    TArray<FHairLODSettings> LODs;                                                    // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FHairGroupsMaterial
{
    class UMaterialInterface* Material;                                               // 0x0000 (size: 0x8)
    FName SlotName;                                                                   // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FHairGroupsMeshesSourceDescription
{
    class UMaterialInterface* Material;                                               // 0x0000 (size: 0x8)
    FName MaterialSlotName;                                                           // 0x0008 (size: 0x8)
    class UStaticMesh* ImportedMesh;                                                  // 0x0010 (size: 0x8)
    FHairGroupCardsTextures Textures;                                                 // 0x0018 (size: 0x50)
    int32 GroupIndex;                                                                 // 0x0068 (size: 0x4)
    int32 LODIndex;                                                                   // 0x006C (size: 0x4)
    FString ImportedMeshKey;                                                          // 0x0070 (size: 0x10)

}; // Size: 0x80

struct FHairGroupsPhysics
{
    FHairSolverSettings SolverSettings;                                               // 0x0000 (size: 0x40)
    FHairExternalForces ExternalForces;                                               // 0x0040 (size: 0x38)
    FHairMaterialConstraints MaterialConstraints;                                     // 0x0078 (size: 0x1D8)
    FHairStrandsParameters StrandsParameters;                                         // 0x0250 (size: 0x98)

}; // Size: 0x2E8

struct FHairGroupsRendering
{
    FName MaterialSlotName;                                                           // 0x0000 (size: 0x8)
    class UMaterialInterface* Material;                                               // 0x0008 (size: 0x8)
    FHairGeometrySettings GeometrySettings;                                           // 0x0010 (size: 0x10)
    FHairShadowSettings ShadowSettings;                                               // 0x0020 (size: 0xC)
    FHairAdvancedRenderingSettings AdvancedSettings;                                  // 0x002C (size: 0x2)

}; // Size: 0x30

struct FHairInterpolationSettings
{
    EGroomGuideType GuideType;                                                        // 0x0000 (size: 0x1)
    bool bOverrideGuides;                                                             // 0x0001 (size: 0x1)
    float HairToGuideDensity;                                                         // 0x0004 (size: 0x4)
    int32 RiggedGuideNumCurves;                                                       // 0x0008 (size: 0x4)
    int32 RiggedGuideNumPoints;                                                       // 0x000C (size: 0x4)
    EHairInterpolationQuality InterpolationQuality;                                   // 0x0010 (size: 0x1)
    EHairInterpolationWeight InterpolationDistance;                                   // 0x0011 (size: 0x1)
    bool bRandomizeGuide;                                                             // 0x0012 (size: 0x1)
    bool bUseUniqueGuide;                                                             // 0x0013 (size: 0x1)

}; // Size: 0x14

struct FHairLODSettings
{
    float CurveDecimation;                                                            // 0x0000 (size: 0x4)
    float VertexDecimation;                                                           // 0x0004 (size: 0x4)
    float AngularThreshold;                                                           // 0x0008 (size: 0x4)
    float ScreenSize;                                                                 // 0x000C (size: 0x4)
    float ThicknessScale;                                                             // 0x0010 (size: 0x4)
    bool bVisible;                                                                    // 0x0014 (size: 0x1)
    EGroomGeometryType GeometryType;                                                  // 0x0015 (size: 0x1)
    EGroomBindingType BindingType;                                                    // 0x0016 (size: 0x1)
    EGroomOverrideType Simulation;                                                    // 0x0017 (size: 0x1)
    EGroomOverrideType GlobalInterpolation;                                           // 0x0018 (size: 0x1)

}; // Size: 0x1C

struct FHairMaterialConstraints
{
    FHairBendConstraint BendConstraint;                                               // 0x0000 (size: 0x98)
    FHairStretchConstraint StretchConstraint;                                         // 0x0098 (size: 0x98)
    FHairCollisionConstraint CollisionConstraint;                                     // 0x0130 (size: 0xA8)

}; // Size: 0x1D8

struct FHairShadowSettings
{
    float HairShadowDensity;                                                          // 0x0000 (size: 0x4)
    float HairRaytracingRadiusScale;                                                  // 0x0004 (size: 0x4)
    bool bUseHairRaytracingGeometry;                                                  // 0x0008 (size: 0x1)
    bool bVoxelize;                                                                   // 0x0009 (size: 0x1)

}; // Size: 0xC

struct FHairSimulationConstraints
{
    float BendDamping;                                                                // 0x0000 (size: 0x4)
    float BendStiffness;                                                              // 0x0004 (size: 0x4)
    float StretchDamping;                                                             // 0x0008 (size: 0x4)
    float StretchStiffness;                                                           // 0x000C (size: 0x4)
    float StaticFriction;                                                             // 0x0010 (size: 0x4)
    float KineticFriction;                                                            // 0x0014 (size: 0x4)
    float StrandsViscosity;                                                           // 0x0018 (size: 0x4)
    float CollisionRadius;                                                            // 0x001C (size: 0x4)

}; // Size: 0x20

struct FHairSimulationForces
{
    FVector GravityVector;                                                            // 0x0000 (size: 0x18)
    float AirDrag;                                                                    // 0x0018 (size: 0x4)
    FVector AirVelocity;                                                              // 0x0020 (size: 0x18)

}; // Size: 0x38

struct FHairSimulationSettings
{
    bool bOverrideSettings;                                                           // 0x0000 (size: 0x1)
    FHairSimulationSetup SimulationSetup;                                             // 0x0008 (size: 0x28)
    FHairSimulationSolver SolverSettings;                                             // 0x0030 (size: 0x1)
    FHairSimulationForces ExternalForces;                                             // 0x0038 (size: 0x38)
    FHairSimulationConstraints MaterialConstraints;                                   // 0x0070 (size: 0x20)

}; // Size: 0x90

struct FHairSimulationSetup
{
    bool bResetSimulation;                                                            // 0x0000 (size: 0x1)
    bool bDebugSimulation;                                                            // 0x0001 (size: 0x1)
    bool bLocalSimulation;                                                            // 0x0002 (size: 0x1)
    float LinearVelocityScale;                                                        // 0x0004 (size: 0x4)
    float AngularVelocityScale;                                                       // 0x0008 (size: 0x4)
    FString LocalBone;                                                                // 0x0010 (size: 0x10)
    float TeleportDistance;                                                           // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FHairSimulationSolver
{
    bool bEnableSimulation;                                                           // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FHairSolverSettings
{
    bool EnableSimulation;                                                            // 0x0000 (size: 0x1)
    EGroomNiagaraSolvers NiagaraSolver;                                               // 0x0001 (size: 0x1)
    TSoftObjectPtr<UNiagaraSystem> CustomSystem;                                      // 0x0008 (size: 0x28)
    float GravityPreloading;                                                          // 0x0030 (size: 0x4)
    int32 SubSteps;                                                                   // 0x0034 (size: 0x4)
    int32 IterationCount;                                                             // 0x0038 (size: 0x4)
    bool bForceVisible;                                                               // 0x003C (size: 0x1)

}; // Size: 0x40

struct FHairStrandsParameters
{
    EGroomStrandsSize StrandsSize;                                                    // 0x0000 (size: 0x1)
    float StrandsDensity;                                                             // 0x0004 (size: 0x4)
    float StrandsSmoothing;                                                           // 0x0008 (size: 0x4)
    float StrandsThickness;                                                           // 0x000C (size: 0x4)
    FRuntimeFloatCurve ThicknessScale;                                                // 0x0010 (size: 0x88)

}; // Size: 0x98

struct FHairStretchConstraint
{
    bool SolveStretch;                                                                // 0x0000 (size: 0x1)
    bool ProjectStretch;                                                              // 0x0001 (size: 0x1)
    float StretchDamping;                                                             // 0x0004 (size: 0x4)
    float StretchStiffness;                                                           // 0x0008 (size: 0x4)
    FRuntimeFloatCurve StretchScale;                                                  // 0x0010 (size: 0x88)

}; // Size: 0x98

struct FMovieSceneGroomCacheParams
{
    class UGroomCache* GroomCache;                                                    // 0x0000 (size: 0x8)
    FFrameNumber FirstLoopStartFrameOffset;                                           // 0x0008 (size: 0x4)
    FFrameNumber StartFrameOffset;                                                    // 0x000C (size: 0x4)
    FFrameNumber EndFrameOffset;                                                      // 0x0010 (size: 0x4)
    float PlayRate;                                                                   // 0x0014 (size: 0x4)
    uint8 bReverse;                                                                   // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FMovieSceneGroomCacheSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneGroomCacheSectionTemplateParameters Params;                            // 0x0020 (size: 0x28)

}; // Size: 0x48

struct FMovieSceneGroomCacheSectionTemplateParameters : public FMovieSceneGroomCacheParams
{
    FFrameNumber SectionStartTime;                                                    // 0x0020 (size: 0x4)
    FFrameNumber SectionEndTime;                                                      // 0x0024 (size: 0x4)

}; // Size: 0x28

class AGroomActor : public AActor
{
    class UGroomComponent* GroomComponent;                                            // 0x02A8 (size: 0x8)

}; // Size: 0x2B0

class UGroomAsset : public UObject
{
    EGroomLODMode LODMode;                                                            // 0x0030 (size: 0x1)
    float AutoLODBias;                                                                // 0x0034 (size: 0x4)
    TArray<FHairGroupInfoWithVisibility> HairGroupsInfo;                              // 0x0038 (size: 0x10)
    TArray<FHairGroupsRendering> HairGroupsRendering;                                 // 0x0048 (size: 0x10)
    TArray<FHairGroupsPhysics> HairGroupsPhysics;                                     // 0x0058 (size: 0x10)
    TArray<FHairGroupsInterpolation> HairGroupsInterpolation;                         // 0x0068 (size: 0x10)
    TArray<FHairGroupsLOD> HairGroupsLOD;                                             // 0x0078 (size: 0x10)
    TArray<FHairGroupsCardsSourceDescription> HairGroupsCards;                        // 0x0088 (size: 0x10)
    TArray<FHairGroupsMeshesSourceDescription> HairGroupsMeshes;                      // 0x0098 (size: 0x10)
    TArray<FHairGroupsMaterial> HairGroupsMaterials;                                  // 0x00A8 (size: 0x10)
    bool EnableGlobalInterpolation;                                                   // 0x00B8 (size: 0x1)
    bool EnableSimulationCache;                                                       // 0x00B9 (size: 0x1)
    EGroomInterpolationType HairInterpolationType;                                    // 0x00BA (size: 0x1)
    class USkeletalMesh* RiggedSkeletalMesh;                                          // 0x00C0 (size: 0x8)
    TArray<int32> DeformedGroupSections;                                              // 0x00C8 (size: 0x10)
    FPerPlatformInt MinLOD;                                                           // 0x00D8 (size: 0x4)
    FPerPlatformBool DisableBelowMinLodStripping;                                     // 0x00DC (size: 0x1)
    TArray<float> EffectiveLODBias;                                                   // 0x00E0 (size: 0x10)
    TArray<class UAssetUserData*> AssetUserData;                                      // 0x0110 (size: 0x10)

    void SetRiggedSkeletalMesh(class USkeletalMesh* In);
    void SetHairInterpolationType(EGroomInterpolationType In);
    void SetHairGroupsRendering(const TArray<FHairGroupsRendering>& In);
    void SetHairGroupsPhysics(const TArray<FHairGroupsPhysics>& In);
    void SetHairGroupsMeshes(const TArray<FHairGroupsMeshesSourceDescription>& In);
    void SetHairGroupsMaterials(const TArray<FHairGroupsMaterial>& In);
    void SetHairGroupsLOD(const TArray<FHairGroupsLOD>& In);
    void SetHairGroupsInterpolation(const TArray<FHairGroupsInterpolation>& In);
    void SetHairGroupsCards(const TArray<FHairGroupsCardsSourceDescription>& In);
    void SetEnableSimulationCache(bool In);
    void SetEnableGlobalInterpolation(bool In);
    void SetDeformedGroupSections(const TArray<int32>& In);
    class USkeletalMesh* GetRiggedSkeletalMesh();
    EGroomInterpolationType GetHairInterpolationType();
    TArray<FHairGroupsRendering> GetHairGroupsRendering();
    TArray<FHairGroupsPhysics> GetHairGroupsPhysics();
    TArray<FHairGroupsMeshesSourceDescription> GetHairGroupsMeshes();
    TArray<FHairGroupsMaterial> GetHairGroupsMaterials();
    TArray<FHairGroupsLOD> GetHairGroupsLOD();
    TArray<FHairGroupsInterpolation> GetHairGroupsInterpolation();
    TArray<FHairGroupsCardsSourceDescription> GetHairGroupsCards();
    bool GetEnableSimulationCache();
    bool GetEnableGlobalInterpolation();
    TArray<int32> GetDeformedGroupSections();
}; // Size: 0x128

class UGroomAssetImportData : public UAssetImportData
{
    class UGroomImportOptions* ImportOptions;                                         // 0x0028 (size: 0x8)
    class UGroomCreateStrandsTexturesOptions* HairStrandsTexturesOptions;             // 0x0030 (size: 0x8)

}; // Size: 0x38

class UGroomBindingAsset : public UObject
{
    EGroomBindingMeshType GroomBindingType;                                           // 0x0030 (size: 0x1)
    class UGroomAsset* Groom;                                                         // 0x0038 (size: 0x8)
    class USkeletalMesh* SourceSkeletalMesh;                                          // 0x0040 (size: 0x8)
    class USkeletalMesh* TargetSkeletalMesh;                                          // 0x0048 (size: 0x8)
    class UGeometryCache* SourceGeometryCache;                                        // 0x0050 (size: 0x8)
    class UGeometryCache* TargetGeometryCache;                                        // 0x0058 (size: 0x8)
    int32 NumInterpolationPoints;                                                     // 0x0060 (size: 0x4)
    int32 MatchingSection;                                                            // 0x0064 (size: 0x4)
    TArray<FGoomBindingGroupInfo> GroupInfos;                                         // 0x0068 (size: 0x10)

    void SetTargetSkeletalMesh(class USkeletalMesh* InSkeletalMesh);
    void SetTargetGeometryCache(class UGeometryCache* InGeometryCache);
    void SetSourceSkeletalMesh(class USkeletalMesh* InSkeletalMesh);
    void SetSourceGeometryCache(class UGeometryCache* InGeometryCache);
    void SetNumInterpolationPoints(int32 InNumInterpolationPoints);
    void SetMatchingSection(int32 InMatchingSection);
    void SetGroupInfos(const TArray<FGoomBindingGroupInfo>& InGroupInfos);
    void SetGroomBindingType(EGroomBindingMeshType InGroomBindingType);
    void SetGroom(class UGroomAsset* InGroom);
    class USkeletalMesh* GetTargetSkeletalMesh();
    class UGeometryCache* GetTargetGeometryCache();
    class USkeletalMesh* GetSourceSkeletalMesh();
    class UGeometryCache* GetSourceGeometryCache();
    int32 GetNumInterpolationPoints();
    int32 GetMatchingSection();
    TArray<FGoomBindingGroupInfo> GetGroupInfos();
    EGroomBindingMeshType GetGroomBindingType();
    class UGroomAsset* GetGroom();
}; // Size: 0xC0

class UGroomBindingAssetList : public UObject
{
    TArray<class UGroomBindingAsset*> Bindings;                                       // 0x0028 (size: 0x10)

}; // Size: 0x38

class UGroomBlueprintLibrary : public UBlueprintFunctionLibrary
{

    bool IsHairStrandsSupportedInWorld(const class UObject* WorldContextObject);
    class UGroomBindingAsset* CreateNewGroomBindingAssetWithPath(FString InDesiredPackagePath, class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int32 InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int32 InMatchingSection);
    class UGroomBindingAsset* CreateNewGroomBindingAsset(class UGroomAsset* InGroomAsset, class USkeletalMesh* InSkeletalMesh, int32 InNumInterpolationPoints, class USkeletalMesh* InSourceSkeletalMeshForTransfer, int32 InMatchingSection);
    class UGroomBindingAsset* CreateNewGeometryCacheGroomBindingAssetWithPath(FString DesiredPackagePath, class UGroomAsset* GroomAsset, class UGeometryCache* GeometryCache, int32 NumInterpolationPoints, class UGeometryCache* SourceGeometryCacheForTransfer, int32 MatchingSection);
    class UGroomBindingAsset* CreateNewGeometryCacheGroomBindingAsset(class UGroomAsset* GroomAsset, class UGeometryCache* GeometryCache, int32 NumInterpolationPoints, class UGeometryCache* SourceGeometryCacheForTransfer, int32 MatchingSection);
}; // Size: 0x28

class UGroomCache : public UObject
{
    TArray<class UAssetUserData*> AssetUserData;                                      // 0x0040 (size: 0x10)
    FGroomCacheInfo GroomCacheInfo;                                                   // 0x0050 (size: 0x28)

}; // Size: 0x88

class UGroomCacheImportData : public UAssetImportData
{
    FGroomCacheImportSettings Settings;                                               // 0x0028 (size: 0x68)

}; // Size: 0x90

class UGroomCacheImportOptions : public UObject
{
    FGroomCacheImportSettings ImportSettings;                                         // 0x0028 (size: 0x68)

}; // Size: 0x90

class UGroomComponent : public UMeshComponent
{
    class UGroomAsset* GroomAsset;                                                    // 0x0528 (size: 0x8)
    class UGroomCache* GroomCache;                                                    // 0x0530 (size: 0x8)
    TArray<class UNiagaraComponent*> NiagaraComponents;                               // 0x0538 (size: 0x10)
    class USkeletalMesh* SourceSkeletalMesh;                                          // 0x0548 (size: 0x8)
    class UGroomBindingAsset* BindingAsset;                                           // 0x0550 (size: 0x8)
    class UPhysicsAsset* PhysicsAsset;                                                // 0x0558 (size: 0x8)
    FHairSimulationSettings SimulationSettings;                                       // 0x0570 (size: 0x90)
    class UMeshDeformer* MeshDeformer;                                                // 0x0600 (size: 0x8)
    class UMeshDeformerInstance* MeshDeformerInstance;                                // 0x0608 (size: 0x8)
    class UMeshDeformerInstanceSettings* MeshDeformerInstanceSettings;                // 0x0610 (size: 0x8)
    class UMaterialInterface* Strands_DebugMaterial;                                  // 0x0618 (size: 0x8)
    class UMaterialInterface* Strands_DefaultMaterial;                                // 0x0620 (size: 0x8)
    class UMaterialInterface* Cards_DefaultMaterial;                                  // 0x0628 (size: 0x8)
    class UMaterialInterface* Meshes_DefaultMaterial;                                 // 0x0630 (size: 0x8)
    class UNiagaraSystem* AngularSpringsSystem;                                       // 0x0638 (size: 0x8)
    class UNiagaraSystem* CosseratRodsSystem;                                         // 0x0640 (size: 0x8)
    FString AttachmentName;                                                           // 0x0648 (size: 0x10)
    TArray<FHairGroupDesc> GroomGroupsDesc;                                           // 0x06E0 (size: 0x10)
    bool bUseCards;                                                                   // 0x06F0 (size: 0x1)
    bool bRunning;                                                                    // 0x06F1 (size: 0x1)
    bool bLooping;                                                                    // 0x06F2 (size: 0x1)
    bool bManualTick;                                                                 // 0x06F3 (size: 0x1)
    float ElapsedTime;                                                                // 0x06F4 (size: 0x4)

    void SetPhysicsAsset(class UPhysicsAsset* InPhysicsAsset);
    void SetMeshDeformer(class UMeshDeformer* InMeshDeformer);
    void SetHairLengthScaleEnable(bool bEnable);
    void SetHairLengthScale(float scale);
    void SetGroomCache(class UGroomCache* InGroomCache);
    void SetGroomAsset(class UGroomAsset* Asset);
    void SetEnableSimulation(bool bInEnableSimulation);
    void SetBindingAsset(class UGroomBindingAsset* InBinding);
    void ResetSimulation();
    void ResetCollisionComponents();
    class UNiagaraComponent* GetNiagaraComponent(const int32 GroupIndex);
    bool GetIsHairLengthScaleEnabled();
    void AddCollisionComponent(class USkeletalMeshComponent* SkeletalMeshComponent);
}; // Size: 0x740

class UGroomCreateBindingOptions : public UObject
{
    TWeakObjectPtr<class UGroomAsset> GroomAsset;                                     // 0x0028 (size: 0x8)
    EGroomBindingMeshType GroomBindingType;                                           // 0x0030 (size: 0x1)
    class USkeletalMesh* SourceSkeletalMesh;                                          // 0x0038 (size: 0x8)
    class USkeletalMesh* TargetSkeletalMesh;                                          // 0x0040 (size: 0x8)
    class UGeometryCache* SourceGeometryCache;                                        // 0x0048 (size: 0x8)
    class UGeometryCache* TargetGeometryCache;                                        // 0x0050 (size: 0x8)
    int32 NumInterpolationPoints;                                                     // 0x0058 (size: 0x4)
    int32 MatchingSection;                                                            // 0x005C (size: 0x4)

}; // Size: 0x60

class UGroomCreateFollicleMaskOptions : public UObject
{
    int32 Resolution;                                                                 // 0x0028 (size: 0x4)
    int32 RootRadius;                                                                 // 0x002C (size: 0x4)
    TArray<FFollicleMaskOptions> Grooms;                                              // 0x0030 (size: 0x10)

}; // Size: 0x40

class UGroomCreateStrandsTexturesOptions : public UObject
{
    EHairTextureLayout Layout;                                                        // 0x0028 (size: 0x1)
    int32 Resolution;                                                                 // 0x002C (size: 0x4)
    EStrandsTexturesTraceType TraceType;                                              // 0x0030 (size: 0x1)
    float TraceDistance;                                                              // 0x0034 (size: 0x4)
    EStrandsTexturesMeshType MeshType;                                                // 0x0038 (size: 0x1)
    class UStaticMesh* StaticMesh;                                                    // 0x0040 (size: 0x8)
    class USkeletalMesh* SkeletalMesh;                                                // 0x0048 (size: 0x8)
    int32 LODIndex;                                                                   // 0x0050 (size: 0x4)
    int32 SectionIndex;                                                               // 0x0054 (size: 0x4)
    int32 UVChannelIndex;                                                             // 0x0058 (size: 0x4)
    TArray<int32> GroupIndex;                                                         // 0x0060 (size: 0x10)
    int32 Dilation;                                                                   // 0x0070 (size: 0x4)

}; // Size: 0x78

class UGroomHairGroupsPreview : public UObject
{
    TArray<FGroomHairGroupPreview> Groups;                                            // 0x0028 (size: 0x10)

}; // Size: 0x38

class UGroomImportOptions : public UObject
{
    FGroomConversionSettings ConversionSettings;                                      // 0x0028 (size: 0x30)
    TArray<FHairGroupsInterpolation> InterpolationSettings;                           // 0x0058 (size: 0x10)

}; // Size: 0x68

class UGroomPluginSettings : public UObject
{
    float GroomCacheLookAheadBuffer;                                                  // 0x0028 (size: 0x4)

}; // Size: 0x30

class UHairCardGenerationSettings : public UObject
{
}; // Size: 0x28

class UMovieSceneGroomCacheSection : public UMovieSceneSection
{
    FMovieSceneGroomCacheParams Params;                                               // 0x00F8 (size: 0x20)

}; // Size: 0x118

class UMovieSceneGroomCacheTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> AnimationSections;                              // 0x0100 (size: 0x10)

}; // Size: 0x110

class UNiagaraDataInterfaceHairStrands : public UNiagaraDataInterface
{
    class UGroomAsset* DefaultSource;                                                 // 0x0040 (size: 0x8)
    class AActor* SourceActor;                                                        // 0x0048 (size: 0x8)

}; // Size: 0x58

class UNiagaraDataInterfacePressureGrid : public UNiagaraDataInterfaceVelocityGrid
{
}; // Size: 0x48

class UNiagaraDataInterfaceVelocityGrid : public UNiagaraDataInterfaceRWBase
{
    FIntVector GridSize;                                                              // 0x0038 (size: 0xC)

}; // Size: 0x48

#endif
