#ifndef UE4SS_SDK_Foliage_HPP
#define UE4SS_SDK_Foliage_HPP

#include "Foliage_enums.hpp"

struct FFoliageDensityFalloff
{
    bool bUseFalloffCurve;                                                            // 0x0000 (size: 0x1)
    FRuntimeFloatCurve FalloffCurve;                                                  // 0x0008 (size: 0x88)

}; // Size: 0x90

struct FFoliageTypeObject
{
    class UObject* FoliageTypeObject;                                                 // 0x0000 (size: 0x8)
    class UFoliageType* TypeInstance;                                                 // 0x0008 (size: 0x8)
    bool bIsAsset;                                                                    // 0x0010 (size: 0x1)
    TSubclassOf<class UFoliageType_InstancedStaticMesh> Type;                         // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FFoliageVertexColorChannelMask
{
    uint8 UseMask;                                                                    // 0x0000 (size: 0x1)
    float MaskThreshold;                                                              // 0x0004 (size: 0x4)
    uint8 InvertMask;                                                                 // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FProceduralFoliageInstance
{
    FQuat Rotation;                                                                   // 0x0000 (size: 0x20)
    FVector Location;                                                                 // 0x0020 (size: 0x18)
    float Age;                                                                        // 0x0038 (size: 0x4)
    FVector Normal;                                                                   // 0x0040 (size: 0x18)
    float Scale;                                                                      // 0x0058 (size: 0x4)
    class UFoliageType* Type;                                                         // 0x0060 (size: 0x8)

}; // Size: 0x80

class AInstancedFoliageActor : public AISMPartitionActor
{
}; // Size: 0x2F0

class AInteractiveFoliageActor : public AStaticMeshActor
{
    class UCapsuleComponent* CapsuleComponent;                                        // 0x02A0 (size: 0x8)
    FVector TouchingActorEntryPosition;                                               // 0x02A8 (size: 0x18)
    FVector FoliageVelocity;                                                          // 0x02C0 (size: 0x18)
    FVector FoliageForce;                                                             // 0x02D8 (size: 0x18)
    FVector FoliagePosition;                                                          // 0x02F0 (size: 0x18)
    float FoliageDamageImpulseScale;                                                  // 0x0308 (size: 0x4)
    float FoliageTouchImpulseScale;                                                   // 0x030C (size: 0x4)
    float FoliageStiffness;                                                           // 0x0310 (size: 0x4)
    float FoliageStiffnessQuadratic;                                                  // 0x0314 (size: 0x4)
    float FoliageDamping;                                                             // 0x0318 (size: 0x4)
    float MaxDamageImpulse;                                                           // 0x031C (size: 0x4)
    float MaxTouchImpulse;                                                            // 0x0320 (size: 0x4)
    float MaxForce;                                                                   // 0x0324 (size: 0x4)
    float Mass;                                                                       // 0x0328 (size: 0x4)

    void CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& OverlapInfo);
}; // Size: 0x330

class AProceduralFoliageBlockingVolume : public AVolume
{
    class AProceduralFoliageVolume* ProceduralFoliageVolume;                          // 0x02C8 (size: 0x8)
    FFoliageDensityFalloff DensityFalloff;                                            // 0x02D0 (size: 0x90)

}; // Size: 0x360

class AProceduralFoliageVolume : public AVolume
{
    class UProceduralFoliageComponent* ProceduralComponent;                           // 0x02D0 (size: 0x8)

}; // Size: 0x2D8

class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
    FFoliageInstancedStaticMeshComponentOnInstanceTakePointDamage OnInstanceTakePointDamage; // 0x0B10 (size: 0x10)
    void InstancePointDamageSignature(int32 InstanceIndex, float Damage, class AController* InstigatedBy, FVector HitLocation, FVector ShotFromDirection, const class UDamageType* DamageType, class AActor* DamageCauser);
    FFoliageInstancedStaticMeshComponentOnInstanceTakeRadialDamage OnInstanceTakeRadialDamage; // 0x0B20 (size: 0x10)
    void InstanceRadialDamageSignature(const TArray<int32>& Instances, const TArray<float>& Damages, class AController* InstigatedBy, FVector Origin, float MaxRadius, const class UDamageType* DamageType, class AActor* DamageCauser);
    bool bEnableDiscardOnLoad;                                                        // 0x0B30 (size: 0x1)
    FGuid GenerationGuid;                                                             // 0x0B34 (size: 0x10)

}; // Size: 0xB50

class UFoliageStatistics : public UBlueprintFunctionLibrary
{

    int32 FoliageOverlappingSphereCount(class UObject* WorldContextObject, const class UStaticMesh* StaticMesh, FVector CenterPosition, float Radius);
    void FoliageOverlappingBoxTransforms(class UObject* WorldContextObject, const class UStaticMesh* StaticMesh, FBox Box, TArray<FTransform>& OutTransforms);
    int32 FoliageOverlappingBoxCount(class UObject* WorldContextObject, const class UStaticMesh* StaticMesh, FBox Box);
}; // Size: 0x28

class UFoliageType : public UObject
{
    FGuid UpdateGuid;                                                                 // 0x0028 (size: 0x10)
    float Density;                                                                    // 0x0038 (size: 0x4)
    float DensityAdjustmentFactor;                                                    // 0x003C (size: 0x4)
    float Radius;                                                                     // 0x0040 (size: 0x4)
    bool bSingleInstanceModeOverrideRadius;                                           // 0x0044 (size: 0x1)
    float SingleInstanceModeRadius;                                                   // 0x0048 (size: 0x4)
    EFoliageScaling Scaling;                                                          // 0x004C (size: 0x1)
    FFloatInterval ScaleX;                                                            // 0x0050 (size: 0x8)
    FFloatInterval ScaleY;                                                            // 0x0058 (size: 0x8)
    FFloatInterval ScaleZ;                                                            // 0x0060 (size: 0x8)
    FFoliageVertexColorChannelMask VertexColorMaskByChannel;                          // 0x0068 (size: 0x30)
    TEnumAsByte<FoliageVertexColorMask> VertexColorMask;                              // 0x0098 (size: 0x1)
    float VertexColorMaskThreshold;                                                   // 0x009C (size: 0x4)
    uint8 VertexColorMaskInvert;                                                      // 0x00A0 (size: 0x1)
    FFloatInterval ZOffset;                                                           // 0x00A4 (size: 0x8)
    uint8 AlignToNormal;                                                              // 0x00AC (size: 0x1)
    uint8 AverageNormal;                                                              // 0x00AC (size: 0x1)
    uint8 AverageNormalSingleComponent;                                               // 0x00AC (size: 0x1)
    float AlignMaxAngle;                                                              // 0x00B0 (size: 0x4)
    uint8 RandomYaw;                                                                  // 0x00B4 (size: 0x1)
    float RandomPitchAngle;                                                           // 0x00B8 (size: 0x4)
    FFloatInterval GroundSlopeAngle;                                                  // 0x00BC (size: 0x8)
    FFloatInterval Height;                                                            // 0x00C4 (size: 0x8)
    TArray<FName> LandscapeLayers;                                                    // 0x00D0 (size: 0x10)
    float MinimumLayerWeight;                                                         // 0x00E0 (size: 0x4)
    TArray<FName> ExclusionLandscapeLayers;                                           // 0x00E8 (size: 0x10)
    float MinimumExclusionLayerWeight;                                                // 0x00F8 (size: 0x4)
    FName LandscapeLayer;                                                             // 0x00FC (size: 0x8)
    uint8 CollisionWithWorld;                                                         // 0x0104 (size: 0x1)
    FVector CollisionScale;                                                           // 0x0108 (size: 0x18)
    int32 AverageNormalSampleCount;                                                   // 0x0120 (size: 0x4)
    FBoxSphereBounds MeshBounds;                                                      // 0x0128 (size: 0x38)
    FVector LowBoundOriginRadius;                                                     // 0x0160 (size: 0x18)
    TEnumAsByte<EComponentMobility::Type> Mobility;                                   // 0x0178 (size: 0x1)
    FInt32Interval CullDistance;                                                      // 0x017C (size: 0x8)
    uint8 bEnableStaticLighting;                                                      // 0x0184 (size: 0x1)
    uint8 CastShadow;                                                                 // 0x0184 (size: 0x1)
    uint8 bAffectDynamicIndirectLighting;                                             // 0x0184 (size: 0x1)
    uint8 bAffectDistanceFieldLighting;                                               // 0x0184 (size: 0x1)
    uint8 bCastDynamicShadow;                                                         // 0x0184 (size: 0x1)
    uint8 bCastStaticShadow;                                                          // 0x0184 (size: 0x1)
    uint8 bCastContactShadow;                                                         // 0x0188 (size: 0x1)
    uint8 bCastShadowAsTwoSided;                                                      // 0x018C (size: 0x1)
    uint8 bReceivesDecals;                                                            // 0x018C (size: 0x1)
    uint8 bOverrideLightMapRes;                                                       // 0x018C (size: 0x1)
    EShadowCacheInvalidationBehavior ShadowCacheInvalidationBehavior;                 // 0x0190 (size: 0x1)
    int32 OverriddenLightMapRes;                                                      // 0x0194 (size: 0x4)
    ELightmapType LightmapType;                                                       // 0x0198 (size: 0x1)
    uint8 bUseAsOccluder;                                                             // 0x019C (size: 0x1)
    uint8 bVisibleInRayTracing;                                                       // 0x01A0 (size: 0x1)
    uint8 bEvaluateWorldPositionOffset;                                               // 0x01A0 (size: 0x1)
    int32 WorldPositionOffsetDisableDistance;                                         // 0x01A4 (size: 0x4)
    FBodyInstance BodyInstance;                                                       // 0x01A8 (size: 0x198)
    TEnumAsByte<EHasCustomNavigableGeometry::Type> CustomNavigableGeometry;           // 0x0340 (size: 0x1)
    FLightingChannels LightingChannels;                                               // 0x0341 (size: 0x1)
    uint8 bRenderCustomDepth;                                                         // 0x0344 (size: 0x1)
    ERendererStencilMask CustomDepthStencilWriteMask;                                 // 0x0348 (size: 0x1)
    int32 CustomDepthStencilValue;                                                    // 0x034C (size: 0x4)
    int32 TranslucencySortPriority;                                                   // 0x0350 (size: 0x4)
    float CollisionRadius;                                                            // 0x0354 (size: 0x4)
    float ShadeRadius;                                                                // 0x0358 (size: 0x4)
    int32 NumSteps;                                                                   // 0x035C (size: 0x4)
    float InitialSeedDensity;                                                         // 0x0360 (size: 0x4)
    float AverageSpreadDistance;                                                      // 0x0364 (size: 0x4)
    float SpreadVariance;                                                             // 0x0368 (size: 0x4)
    int32 SeedsPerStep;                                                               // 0x036C (size: 0x4)
    int32 DistributionSeed;                                                           // 0x0370 (size: 0x4)
    float MaxInitialSeedOffset;                                                       // 0x0374 (size: 0x4)
    bool bCanGrowInShade;                                                             // 0x0378 (size: 0x1)
    bool bSpawnsInShade;                                                              // 0x0379 (size: 0x1)
    float MaxInitialAge;                                                              // 0x037C (size: 0x4)
    float MaxAge;                                                                     // 0x0380 (size: 0x4)
    float OverlapPriority;                                                            // 0x0384 (size: 0x4)
    FFloatInterval ProceduralScale;                                                   // 0x0388 (size: 0x8)
    FRuntimeFloatCurve ScaleCurve;                                                    // 0x0390 (size: 0x88)
    FFoliageDensityFalloff DensityFalloff;                                            // 0x0418 (size: 0x90)
    int32 ChangeCount;                                                                // 0x04A8 (size: 0x4)
    uint8 ReapplyDensity;                                                             // 0x04AC (size: 0x1)
    uint8 ReapplyRadius;                                                              // 0x04AC (size: 0x1)
    uint8 ReapplyAlignToNormal;                                                       // 0x04AC (size: 0x1)
    uint8 ReapplyRandomYaw;                                                           // 0x04AC (size: 0x1)
    uint8 ReapplyScaling;                                                             // 0x04AC (size: 0x1)
    uint8 ReapplyScaleX;                                                              // 0x04AC (size: 0x1)
    uint8 ReapplyScaleY;                                                              // 0x04AC (size: 0x1)
    uint8 ReapplyScaleZ;                                                              // 0x04AC (size: 0x1)
    uint8 ReapplyRandomPitchAngle;                                                    // 0x04AD (size: 0x1)
    uint8 ReapplyGroundSlope;                                                         // 0x04AD (size: 0x1)
    uint8 ReapplyHeight;                                                              // 0x04AD (size: 0x1)
    uint8 ReapplyLandscapeLayers;                                                     // 0x04AD (size: 0x1)
    uint8 ReapplyZOffset;                                                             // 0x04AD (size: 0x1)
    uint8 ReapplyCollisionWithWorld;                                                  // 0x04AD (size: 0x1)
    uint8 ReapplyVertexColorMask;                                                     // 0x04AD (size: 0x1)
    uint8 bEnableDensityScaling;                                                      // 0x04AD (size: 0x1)
    uint8 bEnableDiscardOnLoad;                                                       // 0x04AE (size: 0x1)
    uint8 bEnableCullDistanceScaling;                                                 // 0x04AE (size: 0x1)
    TArray<class URuntimeVirtualTexture*> RuntimeVirtualTextures;                     // 0x04B0 (size: 0x10)
    int32 VirtualTextureCullMips;                                                     // 0x04C0 (size: 0x4)
    ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType;                  // 0x04C4 (size: 0x1)

}; // Size: 0x4C8

class UFoliageType_Actor : public UFoliageType
{
    TSubclassOf<class AActor> ActorClass;                                             // 0x04C8 (size: 0x8)
    bool bShouldAttachToBaseComponent;                                                // 0x04D0 (size: 0x1)
    bool bStaticMeshOnly;                                                             // 0x04D1 (size: 0x1)
    TSubclassOf<class UFoliageInstancedStaticMeshComponent> StaticMeshOnlyComponentClass; // 0x04D8 (size: 0x8)

}; // Size: 0x4E0

class UFoliageType_InstancedStaticMesh : public UFoliageType
{
    class UStaticMesh* Mesh;                                                          // 0x04C8 (size: 0x8)
    TArray<class UMaterialInterface*> OverrideMaterials;                              // 0x04D0 (size: 0x10)
    TArray<class UMaterialInterface*> NaniteOverrideMaterials;                        // 0x04E0 (size: 0x10)
    TSubclassOf<class UFoliageInstancedStaticMeshComponent> ComponentClass;           // 0x04F0 (size: 0x8)

}; // Size: 0x4F8

class UGrassInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
}; // Size: 0xB10

class UInteractiveFoliageComponent : public UStaticMeshComponent
{
}; // Size: 0x5E0

class UProceduralFoliageComponent : public UActorComponent
{
    class UProceduralFoliageSpawner* FoliageSpawner;                                  // 0x00A0 (size: 0x8)
    float TileOverlap;                                                                // 0x00A8 (size: 0x4)
    class AVolume* SpawningVolume;                                                    // 0x00B0 (size: 0x8)
    FGuid ProceduralGuid;                                                             // 0x00B8 (size: 0x10)

}; // Size: 0xC8

class UProceduralFoliageSpawner : public UObject
{
    int32 RandomSeed;                                                                 // 0x0028 (size: 0x4)
    float TileSize;                                                                   // 0x002C (size: 0x4)
    int32 NumUniqueTiles;                                                             // 0x0030 (size: 0x4)
    float MinimumQuadTreeSize;                                                        // 0x0034 (size: 0x4)
    TArray<FFoliageTypeObject> FoliageTypes;                                          // 0x0040 (size: 0x10)
    bool bUseOverrideFoliageTerrainMaterials;                                         // 0x0050 (size: 0x1)
    TArray<TSoftObjectPtr<UMaterialInterface>> OverrideFoliageTerrainMaterials;       // 0x0058 (size: 0x10)

    void Simulate(int32 NumSteps);
}; // Size: 0x80

class UProceduralFoliageTile : public UObject
{
    class UProceduralFoliageSpawner* FoliageSpawner;                                  // 0x0028 (size: 0x8)
    TArray<FProceduralFoliageInstance> InstancesArray;                                // 0x00D0 (size: 0x10)

}; // Size: 0x170

#endif
