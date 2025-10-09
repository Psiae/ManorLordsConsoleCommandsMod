#ifndef UE4SS_SDK_Foliage_HPP
#define UE4SS_SDK_Foliage_HPP

#include "Foliage_enums.hpp"

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
    FQuat Rotation;                                                                   // 0x0000 (size: 0x10)
    FVector Location;                                                                 // 0x0010 (size: 0xC)
    float Age;                                                                        // 0x001C (size: 0x4)
    FVector Normal;                                                                   // 0x0020 (size: 0xC)
    float Scale;                                                                      // 0x002C (size: 0x4)
    class UFoliageType* Type;                                                         // 0x0030 (size: 0x8)

}; // Size: 0x50

class AInstancedFoliageActor : public AActor
{
}; // Size: 0x270

class AInteractiveFoliageActor : public AStaticMeshActor
{
    class UCapsuleComponent* CapsuleComponent;                                        // 0x0230 (size: 0x8)
    FVector TouchingActorEntryPosition;                                               // 0x0238 (size: 0xC)
    FVector FoliageVelocity;                                                          // 0x0244 (size: 0xC)
    FVector FoliageForce;                                                             // 0x0250 (size: 0xC)
    FVector FoliagePosition;                                                          // 0x025C (size: 0xC)
    float FoliageDamageImpulseScale;                                                  // 0x0268 (size: 0x4)
    float FoliageTouchImpulseScale;                                                   // 0x026C (size: 0x4)
    float FoliageStiffness;                                                           // 0x0270 (size: 0x4)
    float FoliageStiffnessQuadratic;                                                  // 0x0274 (size: 0x4)
    float FoliageDamping;                                                             // 0x0278 (size: 0x4)
    float MaxDamageImpulse;                                                           // 0x027C (size: 0x4)
    float MaxTouchImpulse;                                                            // 0x0280 (size: 0x4)
    float MaxForce;                                                                   // 0x0284 (size: 0x4)
    float Mass;                                                                       // 0x0288 (size: 0x4)

    void CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& OverlapInfo);
}; // Size: 0x290

class AProceduralFoliageBlockingVolume : public AVolume
{
    class AProceduralFoliageVolume* ProceduralFoliageVolume;                          // 0x0258 (size: 0x8)

}; // Size: 0x260

class AProceduralFoliageVolume : public AVolume
{
    class UProceduralFoliageComponent* ProceduralComponent;                           // 0x0258 (size: 0x8)

}; // Size: 0x260

class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
    FFoliageInstancedStaticMeshComponentOnInstanceTakePointDamage OnInstanceTakePointDamage; // 0x0678 (size: 0x10)
    void InstancePointDamageSignature(int32 InstanceIndex, float Damage, class AController* InstigatedBy, FVector HitLocation, FVector ShotFromDirection, const class UDamageType* DamageType, class AActor* DamageCauser);
    FFoliageInstancedStaticMeshComponentOnInstanceTakeRadialDamage OnInstanceTakeRadialDamage; // 0x0688 (size: 0x10)
    void InstanceRadialDamageSignature(const TArray<int32>& Instances, const TArray<float>& Damages, class AController* InstigatedBy, FVector Origin, float MaxRadius, const class UDamageType* DamageType, class AActor* DamageCauser);
    FGuid GenerationGuid;                                                             // 0x0698 (size: 0x10)

}; // Size: 0x6B0

class UFoliageStatistics : public UBlueprintFunctionLibrary
{

    int32 FoliageOverlappingSphereCount(class UObject* WorldContextObject, const class UStaticMesh* StaticMesh, FVector CenterPosition, float Radius);
    int32 FoliageOverlappingBoxCount(class UObject* WorldContextObject, const class UStaticMesh* StaticMesh, FBox Box);
}; // Size: 0x28

class UFoliageType : public UObject
{
    FGuid UpdateGuid;                                                                 // 0x0028 (size: 0x10)
    float density;                                                                    // 0x0038 (size: 0x4)
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
    FVector CollisionScale;                                                           // 0x0108 (size: 0xC)
    FBoxSphereBounds MeshBounds;                                                      // 0x0114 (size: 0x1C)
    FVector LowBoundOriginRadius;                                                     // 0x0130 (size: 0xC)
    TEnumAsByte<EComponentMobility::Type> Mobility;                                   // 0x013C (size: 0x1)
    FInt32Interval cullDistance;                                                      // 0x0140 (size: 0x8)
    uint8 bEnableStaticLighting;                                                      // 0x0148 (size: 0x1)
    uint8 CastShadow;                                                                 // 0x0148 (size: 0x1)
    uint8 bAffectDynamicIndirectLighting;                                             // 0x0148 (size: 0x1)
    uint8 bAffectDistanceFieldLighting;                                               // 0x0148 (size: 0x1)
    uint8 bCastDynamicShadow;                                                         // 0x0148 (size: 0x1)
    uint8 bCastStaticShadow;                                                          // 0x0148 (size: 0x1)
    uint8 bCastShadowAsTwoSided;                                                      // 0x0148 (size: 0x1)
    uint8 bReceivesDecals;                                                            // 0x0148 (size: 0x1)
    uint8 bOverrideLightMapRes;                                                       // 0x0149 (size: 0x1)
    int32 OverriddenLightMapRes;                                                      // 0x014C (size: 0x4)
    ELightmapType LightmapType;                                                       // 0x0150 (size: 0x1)
    uint8 bUseAsOccluder;                                                             // 0x0154 (size: 0x1)
    uint8 bVisibleInRayTracing;                                                       // 0x0158 (size: 0x1)
    uint8 bEvaluateWorldPositionOffset;                                               // 0x0158 (size: 0x1)
    FBodyInstance BodyInstance;                                                       // 0x0160 (size: 0x158)
    TEnumAsByte<EHasCustomNavigableGeometry::Type> CustomNavigableGeometry;           // 0x02B8 (size: 0x1)
    FLightingChannels LightingChannels;                                               // 0x02B9 (size: 0x1)
    uint8 bRenderCustomDepth;                                                         // 0x02BC (size: 0x1)
    ERendererStencilMask CustomDepthStencilWriteMask;                                 // 0x02C0 (size: 0x1)
    int32 CustomDepthStencilValue;                                                    // 0x02C4 (size: 0x4)
    int32 TranslucencySortPriority;                                                   // 0x02C8 (size: 0x4)
    float CollisionRadius;                                                            // 0x02CC (size: 0x4)
    float ShadeRadius;                                                                // 0x02D0 (size: 0x4)
    int32 NumSteps;                                                                   // 0x02D4 (size: 0x4)
    float InitialSeedDensity;                                                         // 0x02D8 (size: 0x4)
    float AverageSpreadDistance;                                                      // 0x02DC (size: 0x4)
    float SpreadVariance;                                                             // 0x02E0 (size: 0x4)
    int32 SeedsPerStep;                                                               // 0x02E4 (size: 0x4)
    int32 DistributionSeed;                                                           // 0x02E8 (size: 0x4)
    float MaxInitialSeedOffset;                                                       // 0x02EC (size: 0x4)
    bool bCanGrowInShade;                                                             // 0x02F0 (size: 0x1)
    bool bSpawnsInShade;                                                              // 0x02F1 (size: 0x1)
    float MaxInitialAge;                                                              // 0x02F4 (size: 0x4)
    float MaxAge;                                                                     // 0x02F8 (size: 0x4)
    float OverlapPriority;                                                            // 0x02FC (size: 0x4)
    FFloatInterval ProceduralScale;                                                   // 0x0300 (size: 0x8)
    FRuntimeFloatCurve ScaleCurve;                                                    // 0x0308 (size: 0x88)
    int32 ChangeCount;                                                                // 0x0390 (size: 0x4)
    uint8 ReapplyDensity;                                                             // 0x0394 (size: 0x1)
    uint8 ReapplyRadius;                                                              // 0x0394 (size: 0x1)
    uint8 ReapplyAlignToNormal;                                                       // 0x0394 (size: 0x1)
    uint8 ReapplyRandomYaw;                                                           // 0x0394 (size: 0x1)
    uint8 ReapplyScaling;                                                             // 0x0394 (size: 0x1)
    uint8 ReapplyScaleX;                                                              // 0x0394 (size: 0x1)
    uint8 ReapplyScaleY;                                                              // 0x0394 (size: 0x1)
    uint8 ReapplyScaleZ;                                                              // 0x0394 (size: 0x1)
    uint8 ReapplyRandomPitchAngle;                                                    // 0x0395 (size: 0x1)
    uint8 ReapplyGroundSlope;                                                         // 0x0395 (size: 0x1)
    uint8 ReapplyHeight;                                                              // 0x0395 (size: 0x1)
    uint8 ReapplyLandscapeLayers;                                                     // 0x0395 (size: 0x1)
    uint8 ReapplyZOffset;                                                             // 0x0395 (size: 0x1)
    uint8 ReapplyCollisionWithWorld;                                                  // 0x0395 (size: 0x1)
    uint8 ReapplyVertexColorMask;                                                     // 0x0395 (size: 0x1)
    uint8 bEnableDensityScaling;                                                      // 0x0395 (size: 0x1)
    uint8 bEnableDiscardOnLoad;                                                       // 0x0396 (size: 0x1)
    TArray<class URuntimeVirtualTexture*> RuntimeVirtualTextures;                     // 0x0398 (size: 0x10)
    int32 VirtualTextureCullMips;                                                     // 0x03A8 (size: 0x4)
    ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType;                  // 0x03AC (size: 0x1)

}; // Size: 0x3B0

class UFoliageType_Actor : public UFoliageType
{
    TSubclassOf<class AActor> actorClass;                                             // 0x03B0 (size: 0x8)
    bool bShouldAttachToBaseComponent;                                                // 0x03B8 (size: 0x1)

}; // Size: 0x3C0

class UFoliageType_InstancedStaticMesh : public UFoliageType
{
    class UStaticMesh* Mesh;                                                          // 0x03B0 (size: 0x8)
    TArray<class UMaterialInterface*> OverrideMaterials;                              // 0x03B8 (size: 0x10)
    TSubclassOf<class UFoliageInstancedStaticMeshComponent> ComponentClass;           // 0x03C8 (size: 0x8)

}; // Size: 0x3D0

class UInteractiveFoliageComponent : public UStaticMeshComponent
{
}; // Size: 0x4F0

class UProceduralFoliageComponent : public UActorComponent
{
    class UProceduralFoliageSpawner* FoliageSpawner;                                  // 0x00B0 (size: 0x8)
    float TileOverlap;                                                                // 0x00B8 (size: 0x4)
    class AVolume* SpawningVolume;                                                    // 0x00C0 (size: 0x8)
    FGuid ProceduralGuid;                                                             // 0x00C8 (size: 0x10)

}; // Size: 0xD8

class UProceduralFoliageSpawner : public UObject
{
    int32 RandomSeed;                                                                 // 0x0028 (size: 0x4)
    float TileSize;                                                                   // 0x002C (size: 0x4)
    int32 NumUniqueTiles;                                                             // 0x0030 (size: 0x4)
    float MinimumQuadTreeSize;                                                        // 0x0034 (size: 0x4)
    TArray<FFoliageTypeObject> FoliageTypes;                                          // 0x0040 (size: 0x10)

    void Simulate(int32 NumSteps);
}; // Size: 0x68

class UProceduralFoliageTile : public UObject
{
    class UProceduralFoliageSpawner* FoliageSpawner;                                  // 0x0028 (size: 0x8)
    TArray<FProceduralFoliageInstance> InstancesArray;                                // 0x00D0 (size: 0x10)

}; // Size: 0x158

#endif
