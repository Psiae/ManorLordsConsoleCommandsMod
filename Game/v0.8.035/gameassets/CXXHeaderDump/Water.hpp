#ifndef UE4SS_SDK_Water_HPP
#define UE4SS_SDK_Water_HPP

#include "Water_enums.hpp"

struct FBuoyancyData
{
    TArray<FSphericalPontoon> Pontoons;                                               // 0x0000 (size: 0x10)
    bool bCenterPontoonsOnCOM;                                                        // 0x0010 (size: 0x1)
    float BuoyancyCoefficient;                                                        // 0x0014 (size: 0x4)
    float BuoyancyDamp;                                                               // 0x0018 (size: 0x4)
    float BuoyancyDamp2;                                                              // 0x001C (size: 0x4)
    float BuoyancyRampMinVelocity;                                                    // 0x0020 (size: 0x4)
    float BuoyancyRampMaxVelocity;                                                    // 0x0024 (size: 0x4)
    float BuoyancyRampMax;                                                            // 0x0028 (size: 0x4)
    float MaxBuoyantForce;                                                            // 0x002C (size: 0x4)
    bool bApplyDragForcesInWater;                                                     // 0x0030 (size: 0x1)
    float DragCoefficient;                                                            // 0x0034 (size: 0x4)
    float DragCoefficient2;                                                           // 0x0038 (size: 0x4)
    float AngularDragCoefficient;                                                     // 0x003C (size: 0x4)
    float MaxDragSpeed;                                                               // 0x0040 (size: 0x4)
    bool bApplyRiverForces;                                                           // 0x0044 (size: 0x1)
    int32 RiverPontoonIndex;                                                          // 0x0048 (size: 0x4)
    float WaterShorePushFactor;                                                       // 0x004C (size: 0x4)
    float RiverTraversalPathWidth;                                                    // 0x0050 (size: 0x4)
    float MaxShorePushForce;                                                          // 0x0054 (size: 0x4)
    float WaterVelocityStrength;                                                      // 0x0058 (size: 0x4)
    float MaxWaterForce;                                                              // 0x005C (size: 0x4)
    bool bAlwaysAllowLateralPush;                                                     // 0x0060 (size: 0x1)
    bool bAllowCurrentWhenMovingFastUpstream;                                         // 0x0061 (size: 0x1)
    bool bApplyDownstreamAngularRotation;                                             // 0x0062 (size: 0x1)
    FVector DownstreamAxisOfRotation;                                                 // 0x0068 (size: 0x18)
    float DownstreamRotationStrength;                                                 // 0x0080 (size: 0x4)
    float DownstreamRotationStiffness;                                                // 0x0084 (size: 0x4)
    float DownstreamRotationAngularDamping;                                           // 0x0088 (size: 0x4)
    float DownstreamMaxAcceleration;                                                  // 0x008C (size: 0x4)

}; // Size: 0x90

struct FGerstnerWave
{
    float WaveLength;                                                                 // 0x0000 (size: 0x4)
    float Amplitude;                                                                  // 0x0004 (size: 0x4)
    float Steepness;                                                                  // 0x0008 (size: 0x4)
    FVector Direction;                                                                // 0x0010 (size: 0x18)
    FVector2D WaveVector;                                                             // 0x0028 (size: 0x10)
    float WaveSpeed;                                                                  // 0x0038 (size: 0x4)
    float WKA;                                                                        // 0x003C (size: 0x4)
    float Q;                                                                          // 0x0040 (size: 0x4)
    float PhaseOffset;                                                                // 0x0044 (size: 0x4)

}; // Size: 0x48

struct FGerstnerWaveOctave
{
    int32 NumWaves;                                                                   // 0x0000 (size: 0x4)
    float AmplitudeScale;                                                             // 0x0004 (size: 0x4)
    float MainDirection;                                                              // 0x0008 (size: 0x4)
    float SpreadAngle;                                                                // 0x000C (size: 0x4)
    bool bUniformSpread;                                                              // 0x0010 (size: 0x1)

}; // Size: 0x14

struct FShallowWaterSimulationGrid
{
    TArray<FVector4> ArrayValues;                                                     // 0x0000 (size: 0x10)
    FIntVector2 NumCells;                                                             // 0x0010 (size: 0x8)
    FVector position;                                                                 // 0x0018 (size: 0x18)
    FVector2D Size;                                                                   // 0x0030 (size: 0x10)
    FVector2D Dx;                                                                     // 0x0040 (size: 0x10)
    class UTexture2D* BakedTexture;                                                   // 0x0050 (size: 0x8)

}; // Size: 0x58

struct FSphericalPontoon
{
    FName CenterSocket;                                                               // 0x0000 (size: 0x8)
    FVector RelativeLocation;                                                         // 0x0008 (size: 0x18)
    float Radius;                                                                     // 0x0020 (size: 0x4)
    bool bFXEnabled;                                                                  // 0x0024 (size: 0x1)
    FVector LocalForce;                                                               // 0x0028 (size: 0x18)
    FVector CenterLocation;                                                           // 0x0040 (size: 0x18)
    FQuat SocketRotation;                                                             // 0x0060 (size: 0x20)
    FVector Offset;                                                                   // 0x0080 (size: 0x18)
    float WaterHeight;                                                                // 0x009C (size: 0x4)
    float WaterDepth;                                                                 // 0x00A0 (size: 0x4)
    float ImmersionDepth;                                                             // 0x00A4 (size: 0x4)
    FVector WaterPlaneLocation;                                                       // 0x00A8 (size: 0x18)
    FVector WaterPlaneNormal;                                                         // 0x00C0 (size: 0x18)
    FVector WaterSurfacePosition;                                                     // 0x00D8 (size: 0x18)
    FVector WaterVelocity;                                                            // 0x00F0 (size: 0x18)
    int32 WaterBodyIndex;                                                             // 0x0108 (size: 0x4)
    bool bIsInWater;                                                                  // 0x010C (size: 0x1)
    class UWaterBodyComponent* CurrentWaterBodyComponent;                             // 0x02B8 (size: 0x8)

}; // Size: 0x2D0

struct FUnderwaterPostProcessSettings
{
    bool bEnabled;                                                                    // 0x0000 (size: 0x1)
    float Priority;                                                                   // 0x0004 (size: 0x4)
    float BlendRadius;                                                                // 0x0008 (size: 0x4)
    float BlendWeight;                                                                // 0x000C (size: 0x4)
    FPostProcessSettings PostProcessSettings;                                         // 0x0010 (size: 0x700)
    class UMaterialInterface* UnderwaterPostProcessMaterial;                          // 0x0710 (size: 0x8)

}; // Size: 0x720

struct FWaterBodyHeightmapSettings
{
    EWaterBrushBlendType BlendMode;                                                   // 0x0000 (size: 0x1)
    bool bInvertShape;                                                                // 0x0001 (size: 0x1)
    FWaterFalloffSettings FalloffSettings;                                            // 0x0004 (size: 0x14)
    FWaterBrushEffects Effects;                                                       // 0x0018 (size: 0x80)
    int32 Priority;                                                                   // 0x0098 (size: 0x4)

}; // Size: 0xA0

struct FWaterBodyStaticMeshSettings
{
    bool bEnableWaterBodyStaticMesh;                                                  // 0x0000 (size: 0x1)
    bool bSectionWaterBodyStaticMesh;                                                 // 0x0001 (size: 0x1)
    double SectionSize;                                                               // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FWaterBodyWeightmapSettings
{
    float FalloffWidth;                                                               // 0x0000 (size: 0x4)
    float EdgeOffset;                                                                 // 0x0004 (size: 0x4)
    TSoftObjectPtr<UTexture2D> ModulationTexture;                                     // 0x0008 (size: 0x28)
    float TextureTiling;                                                              // 0x0030 (size: 0x4)
    float TextureInfluence;                                                           // 0x0034 (size: 0x4)
    float Midpoint;                                                                   // 0x0038 (size: 0x4)
    float FinalOpacity;                                                               // 0x003C (size: 0x4)

}; // Size: 0x40

struct FWaterBrushEffectBlurring
{
    bool bBlurShape;                                                                  // 0x0000 (size: 0x1)
    int32 Radius;                                                                     // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FWaterBrushEffectCurlNoise
{
    float Curl1Amount;                                                                // 0x0000 (size: 0x4)
    float Curl2Amount;                                                                // 0x0004 (size: 0x4)
    float Curl1Tiling;                                                                // 0x0008 (size: 0x4)
    float Curl2Tiling;                                                                // 0x000C (size: 0x4)

}; // Size: 0x10

struct FWaterBrushEffectCurves
{
    bool bUseCurveChannel;                                                            // 0x0000 (size: 0x1)
    class UCurveFloat* ElevationCurveAsset;                                           // 0x0008 (size: 0x8)
    float ChannelEdgeOffset;                                                          // 0x0010 (size: 0x4)
    float ChannelDepth;                                                               // 0x0014 (size: 0x4)
    float CurveRampWidth;                                                             // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FWaterBrushEffectDisplacement
{
    float DisplacementHeight;                                                         // 0x0000 (size: 0x4)
    float DisplacementTiling;                                                         // 0x0004 (size: 0x4)
    TSoftObjectPtr<UTexture2D> Texture;                                               // 0x0008 (size: 0x28)
    float Midpoint;                                                                   // 0x0030 (size: 0x4)
    FLinearColor Channel;                                                             // 0x0034 (size: 0x10)
    float WeightmapInfluence;                                                         // 0x0044 (size: 0x4)

}; // Size: 0x48

struct FWaterBrushEffectSmoothBlending
{
    float InnerSmoothDistance;                                                        // 0x0000 (size: 0x4)
    float OuterSmoothDistance;                                                        // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FWaterBrushEffectTerracing
{
    float TerraceAlpha;                                                               // 0x0000 (size: 0x4)
    float TerraceSpacing;                                                             // 0x0004 (size: 0x4)
    float TerraceSmoothness;                                                          // 0x0008 (size: 0x4)
    float MaskLength;                                                                 // 0x000C (size: 0x4)
    float MaskStartOffset;                                                            // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FWaterBrushEffects
{
    FWaterBrushEffectBlurring Blurring;                                               // 0x0000 (size: 0x8)
    FWaterBrushEffectCurlNoise CurlNoise;                                             // 0x0008 (size: 0x10)
    FWaterBrushEffectDisplacement Displacement;                                       // 0x0018 (size: 0x48)
    FWaterBrushEffectSmoothBlending SmoothBlending;                                   // 0x0060 (size: 0x8)
    FWaterBrushEffectTerracing Terracing;                                             // 0x0068 (size: 0x14)

}; // Size: 0x80

struct FWaterCurveSettings
{
    bool bUseCurveChannel;                                                            // 0x0000 (size: 0x1)
    class UCurveFloat* ElevationCurveAsset;                                           // 0x0008 (size: 0x8)
    float ChannelEdgeOffset;                                                          // 0x0010 (size: 0x4)
    float ChannelDepth;                                                               // 0x0014 (size: 0x4)
    float CurveRampWidth;                                                             // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FWaterFalloffSettings
{
    EWaterBrushFalloffMode FalloffMode;                                               // 0x0000 (size: 0x1)
    float FalloffAngle;                                                               // 0x0004 (size: 0x4)
    float FalloffWidth;                                                               // 0x0008 (size: 0x4)
    float EdgeOffset;                                                                 // 0x000C (size: 0x4)
    float ZOffset;                                                                    // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FWaterSplineCurveDefaults
{
    float DefaultDepth;                                                               // 0x0000 (size: 0x4)
    float DefaultWidth;                                                               // 0x0004 (size: 0x4)
    float DefaultVelocity;                                                            // 0x0008 (size: 0x4)
    float DefaultAudioIntensity;                                                      // 0x000C (size: 0x4)

}; // Size: 0x10

class ABuoyancyManager : public AActor
{
    TArray<class UBuoyancyComponent*> BuoyancyComponents;                             // 0x02F8 (size: 0x10)

    bool GetBuoyancyComponentManager(const class UObject* WorldContextObject, class ABuoyancyManager*& Manager);
}; // Size: 0x370

class AWaterBody : public AActor
{
    class UWaterSplineComponent* SplineComp;                                          // 0x02B0 (size: 0x8)
    class UWaterSplineMetadata* WaterSplineMetadata;                                  // 0x02B8 (size: 0x8)
    class UWaterBodyComponent* WaterBodyComponent;                                    // 0x02C0 (size: 0x8)
    int32 WaterBodyIndex;                                                             // 0x02C8 (size: 0x4)
    EWaterBodyType WaterBodyType;                                                     // 0x02CC (size: 0x1)
    class UWaterWavesBase* WaterWaves;                                                // 0x02D0 (size: 0x8)
    class UWaterBodyInfoMeshComponent* WaterInfoMeshComponent;                        // 0x02D8 (size: 0x8)
    class UWaterBodyInfoMeshComponent* DilatedWaterInfoMeshComponent;                 // 0x02E0 (size: 0x8)
    TArray<class UWaterBodyStaticMeshComponent*> WaterBodyStaticMeshComponents;       // 0x02E8 (size: 0x10)
    TSubclassOf<class UWaterBodyRiverComponent> WaterBodyRiverComponentClass;         // 0x02F8 (size: 0x8)
    TSubclassOf<class UWaterBodyLakeComponent> WaterBodyLakeComponentClass;           // 0x0300 (size: 0x8)
    TSubclassOf<class UWaterBodyOceanComponent> WaterBodyOceanComponentClass;         // 0x0308 (size: 0x8)
    TSubclassOf<class UWaterBodyCustomComponent> WaterBodyCustomComponentClass;       // 0x0310 (size: 0x8)

    void SetWaterWaves(class UWaterWavesBase* InWaterWaves);
    void SetWaterMaterial(class UMaterialInterface* InMaterial);
    void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged);
    FVector GetWaterVelocityVectorAtSplineInputKey(float InKey);
    float GetWaterVelocityAtSplineInputKey(float InKey);
    class UWaterSplineComponent* GetWaterSpline();
    class UMaterialInstanceDynamic* GetWaterMaterialInstance();
    EWaterBodyType GetWaterBodyType();
    class UWaterBodyComponent* GetWaterBodyComponent();
    class UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance();
    class UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance();
    TArray<class AWaterBodyIsland*> GetIslands();
    TArray<class AWaterBodyExclusionVolume*> GetExclusionVolumes();
    float GetAudioIntensityAtSplineInputKey(float InKey);
}; // Size: 0x318

class AWaterBodyCustom : public AWaterBody
{
}; // Size: 0x318

class AWaterBodyExclusionVolume : public APhysicsVolume
{
    EWaterExclusionMode ExclusionMode;                                                // 0x02F0 (size: 0x4)
    TArray<TSoftObjectPtr<AWaterBody>> WaterBodies;                                   // 0x02F8 (size: 0x10)

}; // Size: 0x308

class AWaterBodyIsland : public AActor
{
    FWaterCurveSettings WaterCurveSettings;                                           // 0x02B0 (size: 0x20)
    FWaterBodyHeightmapSettings WaterHeightmapSettings;                               // 0x02D0 (size: 0xA0)
    TMap<class FName, class FWaterBodyWeightmapSettings> WaterWeightmapSettings;      // 0x0370 (size: 0x50)
    class UWaterSplineComponent* SplineComp;                                          // 0x03C0 (size: 0x8)

    class UWaterSplineComponent* GetWaterSpline();
}; // Size: 0x3C8

class AWaterBodyLake : public AWaterBody
{
}; // Size: 0x318

class AWaterBodyOcean : public AWaterBody
{
}; // Size: 0x318

class AWaterBodyRiver : public AWaterBody
{
}; // Size: 0x318

class AWaterZone : public AActor
{
    class UTextureRenderTarget2DArray* WaterInfoTextureArray;                         // 0x02A8 (size: 0x8)
    int32 WaterInfoTextureArrayNumSlices;                                             // 0x02B0 (size: 0x4)
    TArray<TWeakObjectPtr<UWaterBodyComponent>> OwnedWaterBodies;                     // 0x02B8 (size: 0x10)
    FIntPoint RenderTargetResolution;                                                 // 0x02C8 (size: 0x8)
    class UWaterMeshComponent* WaterMesh;                                             // 0x02D0 (size: 0x8)
    FVector2D ZoneExtent;                                                             // 0x02D8 (size: 0x10)
    float CaptureZOffset;                                                             // 0x02E8 (size: 0x4)
    bool bHalfPrecisionTexture;                                                       // 0x02EC (size: 0x1)
    int32 VelocityBlurRadius;                                                         // 0x02F0 (size: 0x4)
    int32 OverlapPriority;                                                            // 0x02F4 (size: 0x4)
    bool bEnableLocalOnlyTessellation;                                                // 0x02F8 (size: 0x1)
    FVector LocalTessellationExtent;                                                  // 0x0300 (size: 0x18)
    bool bAutoIncludeLandscapesAsTerrain;                                             // 0x0318 (size: 0x1)
    int32 WaterZoneIndex;                                                             // 0x0328 (size: 0x4)
    FWaterZoneOnWaterInfoTextureArrayCreated OnWaterInfoTextureArrayCreated;          // 0x0330 (size: 0x10)
    void OnWaterInfoTextureArrayCreated(const class UTextureRenderTarget2DArray* WaterInfoTextureArray);

    void SetFarMeshMaterial(class UMaterialInterface* InFarMaterial);
    int32 GetWaterZoneIndex();
}; // Size: 0x340

class IWaterBrushActorInterface : public IInterface
{
}; // Size: 0x28

class UBakedShallowWaterSimulationComponent : public UPrimitiveComponent
{
    FShallowWaterSimulationGrid SimulationData;                                       // 0x04E8 (size: 0x58)

}; // Size: 0x540

class UBuoyancyComponent : public UActorComponent
{
    TArray<FSphericalPontoon> Pontoons;                                               // 0x00A0 (size: 0x10)
    FBuoyancyComponentOnEnteredWaterDelegate OnEnteredWaterDelegate;                  // 0x00B0 (size: 0x10)
    void OnPontoonEnteredWater(const FSphericalPontoon& Pontoon);
    FBuoyancyComponentOnExitedWaterDelegate OnExitedWaterDelegate;                    // 0x00C0 (size: 0x10)
    void OnPontoonExitedWater(const FSphericalPontoon& Pontoon);
    FBuoyancyData BuoyancyData;                                                       // 0x00D0 (size: 0x90)
    TArray<class UWaterBodyComponent*> CurrentWaterBodyComponents;                    // 0x0160 (size: 0x10)
    class UPrimitiveComponent* SimulatingComponent;                                   // 0x0170 (size: 0x8)

    void OnPontoonExitedWater(const FSphericalPontoon& Pontoon);
    void OnPontoonEnteredWater(const FSphericalPontoon& Pontoon);
    bool IsOverlappingWaterBody();
    bool IsInWaterBody();
    void GetLastWaterSurfaceInfo(FVector& OutWaterPlaneLocation, FVector& OutWaterPlaneNormal, FVector& OutWaterSurfacePosition, float& OutWaterDepth, int32& OutWaterBodyIdx, FVector& OutWaterVelocity);
    TArray<class UWaterBodyComponent*> GetCurrentWaterBodyComponents();
}; // Size: 0x208

class UDEPRECATED_CustomMeshGenerator : public UDEPRECATED_WaterBodyGenerator
{
    class UStaticMeshComponent* MeshComp;                                             // 0x0028 (size: 0x8)

}; // Size: 0x30

class UDEPRECATED_LakeGenerator : public UDEPRECATED_WaterBodyGenerator
{
    class UStaticMeshComponent* LakeMeshComp;                                         // 0x0028 (size: 0x8)
    class UBoxComponent* LakeCollisionComp;                                           // 0x0030 (size: 0x8)
    class ULakeCollisionComponent* LakeCollision;                                     // 0x0038 (size: 0x8)

}; // Size: 0x40

class UDEPRECATED_OceanGenerator : public UDEPRECATED_WaterBodyGenerator
{
    TArray<class UOceanBoxCollisionComponent*> CollisionBoxes;                        // 0x0028 (size: 0x10)
    TArray<class UOceanCollisionComponent*> CollisionHullSets;                        // 0x0038 (size: 0x10)

}; // Size: 0x48

class UDEPRECATED_RiverGenerator : public UDEPRECATED_WaterBodyGenerator
{
    TArray<class USplineMeshComponent*> SplineMeshComponents;                         // 0x0028 (size: 0x10)

}; // Size: 0x38

class UDEPRECATED_WaterBodyGenerator : public UObject
{
}; // Size: 0x28

class UEnvQueryTest_InsideWaterBody : public UEnvQueryTest
{
    bool bIncludeWaves;                                                               // 0x01F8 (size: 0x1)
    bool bSimpleWaves;                                                                // 0x01F9 (size: 0x1)
    bool bIgnoreExclusionVolumes;                                                     // 0x01FA (size: 0x1)

}; // Size: 0x200

class UGerstnerWaterWaveGeneratorBase : public UObject
{

    void GenerateGerstnerWaves(TArray<FGerstnerWave>& OutWaves);
}; // Size: 0x28

class UGerstnerWaterWaveGeneratorSimple : public UGerstnerWaterWaveGeneratorBase
{
    int32 NumWaves;                                                                   // 0x0028 (size: 0x4)
    int32 Seed;                                                                       // 0x002C (size: 0x4)
    float Randomness;                                                                 // 0x0030 (size: 0x4)
    float MinWavelength;                                                              // 0x0034 (size: 0x4)
    float MaxWavelength;                                                              // 0x0038 (size: 0x4)
    float WavelengthFalloff;                                                          // 0x003C (size: 0x4)
    float MinAmplitude;                                                               // 0x0040 (size: 0x4)
    float MaxAmplitude;                                                               // 0x0044 (size: 0x4)
    float AmplitudeFalloff;                                                           // 0x0048 (size: 0x4)
    float WindAngleDeg;                                                               // 0x004C (size: 0x4)
    float DirectionAngularSpreadDeg;                                                  // 0x0050 (size: 0x4)
    float SmallWaveSteepness;                                                         // 0x0054 (size: 0x4)
    float LargeWaveSteepness;                                                         // 0x0058 (size: 0x4)
    float SteepnessFalloff;                                                           // 0x005C (size: 0x4)

}; // Size: 0x60

class UGerstnerWaterWaveGeneratorSpectrum : public UGerstnerWaterWaveGeneratorBase
{
    EWaveSpectrumType SpectrumType;                                                   // 0x0028 (size: 0x1)
    TArray<FGerstnerWaveOctave> Octaves;                                              // 0x0030 (size: 0x10)

}; // Size: 0x40

class UGerstnerWaterWaveSubsystem : public UEngineSubsystem
{
}; // Size: 0x48

class UGerstnerWaterWaves : public UWaterWaves
{
    class UGerstnerWaterWaveGeneratorBase* GerstnerWaveGenerator;                     // 0x0028 (size: 0x8)
    TArray<FGerstnerWave> GerstnerWaves;                                              // 0x0030 (size: 0x10)
    float MaxWaveHeight;                                                              // 0x0040 (size: 0x4)

}; // Size: 0x48

class ULakeCollisionComponent : public UPrimitiveComponent
{
    class UBodySetup* CachedBodySetup;                                                // 0x04E8 (size: 0x8)
    FVector BoxExtent;                                                                // 0x04F0 (size: 0x18)

}; // Size: 0x510

class UNiagaraDataInterfaceWater : public UNiagaraDataInterface
{
    bool bFindWaterBodyOnSpawn;                                                       // 0x0038 (size: 0x1)
    bool bEvaluateSystemDepth;                                                        // 0x0039 (size: 0x1)
    bool bEvaluateSystemDepthPerFrame;                                                // 0x003A (size: 0x1)
    class UObject* SourceBodyComponent;                                               // 0x0040 (size: 0x8)

}; // Size: 0x50

class UNiagaraWaterFunctionLibrary : public UBlueprintFunctionLibrary
{

    void SetWaterBodyComponent(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class UWaterBodyComponent* WaterBodyComponent);
    void SetWaterBody(class UNiagaraComponent* NiagaraSystem, FString OverrideName, class AWaterBody* WaterBody);
}; // Size: 0x28

class UOceanBoxCollisionComponent : public UBoxComponent
{
}; // Size: 0x520

class UOceanCollisionComponent : public UPrimitiveComponent
{
    class UBodySetup* CachedBodySetup;                                                // 0x04E8 (size: 0x8)

}; // Size: 0x530

class UWaterBodyComponent : public UPrimitiveComponent
{
    class UPhysicalMaterial* PhysicalMaterial;                                        // 0x04E8 (size: 0x8)
    float TargetWaveMaskDepth;                                                        // 0x04F0 (size: 0x4)
    float MaxWaveHeightOffset;                                                        // 0x04F4 (size: 0x4)
    FUnderwaterPostProcessSettings UnderwaterPostProcessSettings;                     // 0x0500 (size: 0x720)
    FWaterCurveSettings CurveSettings;                                                // 0x0C20 (size: 0x20)
    class UMaterialInterface* WaterMaterial;                                          // 0x0C40 (size: 0x8)
    class UMaterialInterface* WaterHLODMaterial;                                      // 0x0C48 (size: 0x8)
    class UMaterialInterface* WaterStaticMeshMaterial;                                // 0x0C50 (size: 0x8)
    class UMaterialInterface* UnderwaterPostProcessMaterial;                          // 0x0C58 (size: 0x8)
    class UMaterialInterface* WaterInfoMaterial;                                      // 0x0C60 (size: 0x8)
    FWaterBodyHeightmapSettings WaterHeightmapSettings;                               // 0x0C68 (size: 0xA0)
    TMap<class FName, class FWaterBodyWeightmapSettings> LayerWeightmapSettings;      // 0x0D08 (size: 0x50)
    float ShapeDilation;                                                              // 0x0D58 (size: 0x4)
    float CollisionHeightOffset;                                                      // 0x0D5C (size: 0x4)
    bool bAffectsLandscape;                                                           // 0x0D60 (size: 0x1)
    FWaterBodyStaticMeshSettings StaticMeshSettings;                                  // 0x0D68 (size: 0x10)
    int32 WaterBodyIndex;                                                             // 0x0D78 (size: 0x4)
    class UStaticMesh* WaterMeshOverride;                                             // 0x0D80 (size: 0x8)
    bool bAlwaysGenerateWaterMeshTiles;                                               // 0x0D88 (size: 0x1)
    int32 OverlapMaterialPriority;                                                    // 0x0D8C (size: 0x4)
    class UWaterSplineMetadata* WaterSplineMetadata;                                  // 0x0D90 (size: 0x8)
    class UMaterialInstanceDynamic* WaterMID;                                         // 0x0D98 (size: 0x8)
    class UMaterialInstanceDynamic* WaterStaticMeshMID;                               // 0x0DA0 (size: 0x8)
    class UMaterialInstanceDynamic* UnderwaterPostProcessMID;                         // 0x0DA8 (size: 0x8)
    class UMaterialInstanceDynamic* WaterInfoMID;                                     // 0x0DB0 (size: 0x8)
    TArray<TSoftObjectPtr<AWaterBodyIsland>> WaterBodyIslands;                        // 0x0DB8 (size: 0x10)
    TArray<TSoftObjectPtr<AWaterBodyExclusionVolume>> WaterBodyExclusionVolumes;      // 0x0DC8 (size: 0x10)
    TWeakObjectPtr<class ALandscapeProxy> Landscape;                                  // 0x0DD8 (size: 0x8)
    TSoftObjectPtr<AWaterZone> OwningWaterZone;                                       // 0x0DE0 (size: 0x28)
    TSoftObjectPtr<AWaterZone> WaterZoneOverride;                                     // 0x0E08 (size: 0x28)
    FPostProcessSettings CurrentPostProcessSettings;                                  // 0x0E30 (size: 0x700)
    TSubclassOf<class UNavAreaBase> WaterNavAreaClass;                                // 0x1530 (size: 0x8)
    double FixedWaterDepth;                                                           // 0x1538 (size: 0x8)
    TWeakObjectPtr<class UBakedShallowWaterSimulationComponent> BakedShallowWaterSim; // 0x1540 (size: 0x8)
    bool bUseBakedSimForQueriesAndPhysics;                                            // 0x1548 (size: 0x1)

    void SetWaterZoneOverride(const TSoftObjectPtr<AWaterZone>& InWaterZoneOverride);
    void SetWaterStaticMeshMaterial(class UMaterialInterface* InMaterial);
    void SetWaterMaterial(class UMaterialInterface* InMaterial);
    void SetWaterAndUnderWaterPostProcessMaterial(class UMaterialInterface* InWaterMaterial, class UMaterialInterface* InUnderWaterPostProcessMaterial);
    void SetUnderwaterPostProcessMaterial(class UMaterialInterface* InMaterial);
    void OnWaterBodyChanged(bool bShapeOrPositionChanged, bool bWeightmapSettingsChanged, bool bUserTriggeredChanged);
    class UWaterWavesBase* GetWaterWaves();
    float GetWaterVelocityAtSplineInputKey(float InKey);
    void GetWaterSurfaceInfoAtLocation(const FVector& InLocation, FVector& OutWaterSurfaceLocation, FVector& OutWaterSurfaceNormal, FVector& OutWaterVelocity, float& OutWaterDepth, bool bIncludeDepth);
    class UMaterialInstanceDynamic* GetWaterStaticMeshMaterialInstance();
    class UWaterSplineComponent* GetWaterSpline();
    class UMaterialInstanceDynamic* GetWaterMaterialInstance();
    class UMaterialInterface* GetWaterMaterial();
    class UMaterialInstanceDynamic* GetWaterLODMaterialInstance();
    class UMaterialInstanceDynamic* GetWaterInfoMaterialInstance();
    class AWaterBody* GetWaterBodyActor();
    class UMaterialInstanceDynamic* GetUnderwaterPostProcessMaterialInstance();
    TArray<class UPrimitiveComponent*> GetStandardRenderableComponents();
    class UMaterialInstanceDynamic* GetRiverToOceanTransitionMaterialInstance();
    class UMaterialInterface* GetRiverToOceanTransitionMaterial();
    class UMaterialInstanceDynamic* GetRiverToLakeTransitionMaterialInstance();
    class UMaterialInterface* GetRiverToLakeTransitionMaterial();
    float GetMaxWaveHeight();
    TArray<class AWaterBodyIsland*> GetIslands();
    TArray<class AWaterBodyExclusionVolume*> GetExclusionVolumes();
    TArray<class UPrimitiveComponent*> GetCollisionComponents(bool bInOnlyEnabledComponents);
}; // Size: 0x1550

class UWaterBodyCustomComponent : public UWaterBodyComponent
{
    class UStaticMeshComponent* MeshComp;                                             // 0x1550 (size: 0x8)

}; // Size: 0x1560

class UWaterBodyHLODBuilder : public UHLODBuilder
{
}; // Size: 0x28

class UWaterBodyInfoMeshComponent : public UWaterBodyMeshComponent
{
    bool bIsDilatedMesh;                                                              // 0x05B8 (size: 0x1)
    bool bIsConservativeRasterCompatible;                                             // 0x05B9 (size: 0x1)

}; // Size: 0x5C0

class UWaterBodyLakeComponent : public UWaterBodyComponent
{
    class UStaticMeshComponent* LakeMeshComp;                                         // 0x1550 (size: 0x8)
    class ULakeCollisionComponent* LakeCollision;                                     // 0x1558 (size: 0x8)

}; // Size: 0x1560

class UWaterBodyMeshComponent : public UStaticMeshComponent
{
}; // Size: 0x5C0

class UWaterBodyOceanComponent : public UWaterBodyComponent
{
    TArray<class UOceanBoxCollisionComponent*> CollisionBoxes;                        // 0x1550 (size: 0x10)
    TArray<class UOceanCollisionComponent*> CollisionHullSets;                        // 0x1560 (size: 0x10)
    FVector CollisionExtents;                                                         // 0x1570 (size: 0x18)
    FVector2D OceanExtents;                                                           // 0x1588 (size: 0x10)
    FVector2D SavedZoneLocation;                                                      // 0x1598 (size: 0x10)
    bool bCenterOnWaterZone;                                                          // 0x15A8 (size: 0x1)
    float HeightOffset;                                                               // 0x15AC (size: 0x4)

}; // Size: 0x15B0

class UWaterBodyRiverComponent : public UWaterBodyComponent
{
    TArray<class USplineMeshComponent*> SplineMeshComponents;                         // 0x1550 (size: 0x10)
    class UMaterialInterface* LakeTransitionMaterial;                                 // 0x1560 (size: 0x8)
    class UMaterialInstanceDynamic* LakeTransitionMID;                                // 0x1568 (size: 0x8)
    class UMaterialInterface* OceanTransitionMaterial;                                // 0x1570 (size: 0x8)
    class UMaterialInstanceDynamic* OceanTransitionMID;                               // 0x1578 (size: 0x8)

    void SetOceanTransitionMaterial(class UMaterialInterface* InMat);
    void SetLakeTransitionMaterial(class UMaterialInterface* InMat);
    void SetLakeAndOceanTransitionMaterials(class UMaterialInterface* InLakeTransition, class UMaterialInterface* InOceanTransition);
}; // Size: 0x1580

class UWaterBodyStaticMeshComponent : public UWaterBodyMeshComponent
{
}; // Size: 0x5C0

class UWaterMeshComponent : public UMeshComponent
{
    int32 ForceCollapseDensityLevel;                                                  // 0x0518 (size: 0x4)
    class UMaterialInterface* FarDistanceMaterial;                                    // 0x0520 (size: 0x8)
    float FarDistanceMeshExtent;                                                      // 0x0528 (size: 0x4)
    float TileSize;                                                                   // 0x052C (size: 0x4)
    FIntPoint QuadTreeResolution;                                                     // 0x0530 (size: 0x8)
    TSet<UMaterialInterface*> UsedMaterials;                                          // 0x0680 (size: 0x50)
    TMap<class UMaterialInterface*, class UMaterialInstanceDynamic*> MaterialToMID;   // 0x06D0 (size: 0x50)
    bool bUseFarMeshWithoutOcean;                                                     // 0x0720 (size: 0x1)
    int32 TessellationFactor;                                                         // 0x0730 (size: 0x4)
    float LODScale;                                                                   // 0x0734 (size: 0x4)

    bool IsEnabled();
}; // Size: 0x740

class UWaterRuntimeSettings : public UDeveloperSettings
{
    TEnumAsByte<ECollisionChannel> CollisionChannelForWaterTraces;                    // 0x0038 (size: 0x1)
    TSoftObjectPtr<UMaterialParameterCollection> MaterialParameterCollection;         // 0x0040 (size: 0x28)
    float WaterBodyIconWorldZOffset;                                                  // 0x0068 (size: 0x4)
    FName DefaultWaterCollisionProfileName;                                           // 0x006C (size: 0x8)
    TSoftObjectPtr<UMaterialInterface> DefaultWaterInfoMaterial;                      // 0x0078 (size: 0x28)
    TSubclassOf<class UWaterBodyRiverComponent> WaterBodyRiverComponentClass;         // 0x00A0 (size: 0x8)
    TSubclassOf<class UWaterBodyLakeComponent> WaterBodyLakeComponentClass;           // 0x00A8 (size: 0x8)
    TSubclassOf<class UWaterBodyOceanComponent> WaterBodyOceanComponentClass;         // 0x00B0 (size: 0x8)
    TSubclassOf<class UWaterBodyCustomComponent> WaterBodyCustomComponentClass;       // 0x00B8 (size: 0x8)
    bool bWarnOnMismatchOceanExtent;                                                  // 0x00C0 (size: 0x1)

}; // Size: 0xC8

class UWaterSplineComponent : public USplineComponent
{
    FWaterSplineCurveDefaults WaterSplineDefaults;                                    // 0x0580 (size: 0x10)
    FWaterSplineCurveDefaults PreviousWaterSplineDefaults;                            // 0x0590 (size: 0x10)

    void K2_SynchronizeAndBroadcastDataChange();
}; // Size: 0x5A0

class UWaterSplineMetadata : public USplineMetadata
{
    FInterpCurveFloat Depth;                                                          // 0x0028 (size: 0x18)
    FInterpCurveFloat WaterVelocityScalar;                                            // 0x0040 (size: 0x18)
    FInterpCurveFloat RiverWidth;                                                     // 0x0058 (size: 0x18)
    FInterpCurveFloat AudioIntensity;                                                 // 0x0070 (size: 0x18)
    FInterpCurveVector WaterVelocity;                                                 // 0x0088 (size: 0x18)

}; // Size: 0xA0

class UWaterSubsystem : public UTickableWorldSubsystem
{
    class ABuoyancyManager* BuoyancyManager;                                          // 0x0040 (size: 0x8)
    FWaterSubsystemOnCameraUnderwaterStateChanged OnCameraUnderwaterStateChanged;     // 0x0048 (size: 0x10)
    void OnCameraUnderwaterStateChanged(bool bIsUnderWater, float DepthUnderwater);
    FWaterSubsystemOnWaterScalabilityChanged OnWaterScalabilityChanged;               // 0x0058 (size: 0x10)
    void OnWaterScalabilityChanged();
    class UStaticMesh* DefaultRiverMesh;                                              // 0x0068 (size: 0x8)
    class UStaticMesh* DefaultLakeMesh;                                               // 0x0070 (size: 0x8)
    class UMaterialParameterCollection* MaterialParameterCollection;                  // 0x00A0 (size: 0x8)

    void SetOceanFloodHeight(float InFloodHeight);
    void PrintToWaterLog(FString Message, bool bWarning);
    bool IsWaterRenderingEnabled();
    bool IsUnderwaterPostProcessEnabled();
    bool IsShallowWaterSimulationEnabled();
    float GetWaterTimeSeconds();
    float GetSmoothedWorldTimeSeconds();
    int32 GetShallowWaterSimulationRenderTargetSize();
    int32 GetShallowWaterMaxImpulseForces();
    int32 GetShallowWaterMaxDynamicForces();
    float GetOceanTotalHeight();
    float GetOceanFloodHeight();
    float GetOceanBaseHeight();
    float GetCameraUnderwaterDepth();
}; // Size: 0x1D0

class UWaterTerrainComponent : public UActorComponent
{
    TSoftObjectPtr<AWaterZone> WaterZoneOverride;                                     // 0x00A0 (size: 0x28)

}; // Size: 0xC8

class UWaterWaves : public UWaterWavesBase
{
}; // Size: 0x28

class UWaterWavesAsset : public UObject
{
    class UWaterWaves* WaterWaves;                                                    // 0x0028 (size: 0x8)

}; // Size: 0x30

class UWaterWavesAssetReference : public UWaterWavesBase
{
    class UWaterWavesAsset* WaterWavesAsset;                                          // 0x0028 (size: 0x8)

}; // Size: 0x30

class UWaterWavesBase : public UObject
{
}; // Size: 0x28

#endif
