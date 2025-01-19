#ifndef UE4SS_SDK_GeometryCollectionEngine_HPP
#define UE4SS_SDK_GeometryCollectionEngine_HPP

#include "GeometryCollectionEngine_enums.hpp"

struct FChaosBreakingEventData
{
    FVector Location;                                                                 // 0x0000 (size: 0x18)
    FVector Velocity;                                                                 // 0x0018 (size: 0x18)
    float Mass;                                                                       // 0x0030 (size: 0x4)

}; // Size: 0x38

struct FChaosBreakingEventRequestSettings
{
    int32 MaxNumberOfResults;                                                         // 0x0000 (size: 0x4)
    float MinRadius;                                                                  // 0x0004 (size: 0x4)
    float MinSpeed;                                                                   // 0x0008 (size: 0x4)
    float MinMass;                                                                    // 0x000C (size: 0x4)
    float MaxDistance;                                                                // 0x0010 (size: 0x4)
    EChaosBreakingSortMethod SortMethod;                                              // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FChaosCollisionEventData
{
    FVector Location;                                                                 // 0x0000 (size: 0x18)
    FVector Normal;                                                                   // 0x0018 (size: 0x18)
    FVector Velocity1;                                                                // 0x0030 (size: 0x18)
    FVector Velocity2;                                                                // 0x0048 (size: 0x18)
    float Mass1;                                                                      // 0x0060 (size: 0x4)
    float Mass2;                                                                      // 0x0064 (size: 0x4)
    FVector Impulse;                                                                  // 0x0068 (size: 0x18)

}; // Size: 0x80

struct FChaosCollisionEventRequestSettings
{
    int32 MaxNumberResults;                                                           // 0x0000 (size: 0x4)
    float MinMass;                                                                    // 0x0004 (size: 0x4)
    float MinSpeed;                                                                   // 0x0008 (size: 0x4)
    float MinImpulse;                                                                 // 0x000C (size: 0x4)
    float MaxDistance;                                                                // 0x0010 (size: 0x4)
    EChaosCollisionSortMethod SortMethod;                                             // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FChaosRemovalEventData
{
    FVector Location;                                                                 // 0x0000 (size: 0x18)
    float Mass;                                                                       // 0x0018 (size: 0x4)
    int32 ParticleIndex;                                                              // 0x001C (size: 0x4)

}; // Size: 0x20

struct FChaosRemovalEventRequestSettings
{
    int32 MaxNumberOfResults;                                                         // 0x0000 (size: 0x4)
    float MinMass;                                                                    // 0x0004 (size: 0x4)
    float MaxDistance;                                                                // 0x0008 (size: 0x4)
    EChaosRemovalSortMethod SortMethod;                                               // 0x000C (size: 0x1)

}; // Size: 0x10

struct FChaosTrailingEventData
{
    FVector Location;                                                                 // 0x0000 (size: 0x18)
    FVector Velocity;                                                                 // 0x0018 (size: 0x18)
    FVector AngularVelocity;                                                          // 0x0030 (size: 0x18)
    float Mass;                                                                       // 0x0048 (size: 0x4)
    int32 ParticleIndex;                                                              // 0x004C (size: 0x4)

}; // Size: 0x50

struct FChaosTrailingEventRequestSettings
{
    int32 MaxNumberOfResults;                                                         // 0x0000 (size: 0x4)
    float MinMass;                                                                    // 0x0004 (size: 0x4)
    float MinSpeed;                                                                   // 0x0008 (size: 0x4)
    float MinAngularSpeed;                                                            // 0x000C (size: 0x4)
    float MaxDistance;                                                                // 0x0010 (size: 0x4)
    EChaosTrailingSortMethod SortMethod;                                              // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FGeomComponentCacheParameters
{
    EGeometryCollectionCacheType CacheMode;                                           // 0x0000 (size: 0x1)
    class UGeometryCollectionCache* TargetCache;                                      // 0x0008 (size: 0x8)
    float ReverseCacheBeginTime;                                                      // 0x0010 (size: 0x4)
    bool SaveCollisionData;                                                           // 0x0014 (size: 0x1)
    bool DoGenerateCollisionData;                                                     // 0x0015 (size: 0x1)
    int32 CollisionDataSizeMax;                                                       // 0x0018 (size: 0x4)
    bool DoCollisionDataSpatialHash;                                                  // 0x001C (size: 0x1)
    float CollisionDataSpatialHashRadius;                                             // 0x0020 (size: 0x4)
    int32 MaxCollisionPerCell;                                                        // 0x0024 (size: 0x4)
    bool SaveBreakingData;                                                            // 0x0028 (size: 0x1)
    bool DoGenerateBreakingData;                                                      // 0x0029 (size: 0x1)
    int32 BreakingDataSizeMax;                                                        // 0x002C (size: 0x4)
    bool DoBreakingDataSpatialHash;                                                   // 0x0030 (size: 0x1)
    float BreakingDataSpatialHashRadius;                                              // 0x0034 (size: 0x4)
    int32 MaxBreakingPerCell;                                                         // 0x0038 (size: 0x4)
    bool SaveTrailingData;                                                            // 0x003C (size: 0x1)
    bool DoGenerateTrailingData;                                                      // 0x003D (size: 0x1)
    int32 TrailingDataSizeMax;                                                        // 0x0040 (size: 0x4)
    float TrailingMinSpeedThreshold;                                                  // 0x0044 (size: 0x4)
    float TrailingMinVolumeThreshold;                                                 // 0x0048 (size: 0x4)

}; // Size: 0x50

struct FGeometryCollectionAutoInstanceMesh
{
    class UStaticMesh* Mesh;                                                          // 0x0000 (size: 0x8)
    TArray<class UMaterialInterface*> Materials;                                      // 0x0008 (size: 0x10)
    int32 NumInstances;                                                               // 0x0018 (size: 0x4)
    TArray<float> CustomData;                                                         // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FGeometryCollectionCollisionParticleData
{
    float CollisionParticlesFraction;                                                 // 0x0000 (size: 0x4)
    int32 MaximumCollisionParticles;                                                  // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FGeometryCollectionCollisionTypeData
{
    ECollisionTypeEnum CollisionType;                                                 // 0x0000 (size: 0x1)
    EImplicitTypeEnum ImplicitType;                                                   // 0x0001 (size: 0x1)
    FGeometryCollectionLevelSetData LevelSet;                                         // 0x0004 (size: 0x10)
    FGeometryCollectionCollisionParticleData CollisionParticles;                      // 0x0014 (size: 0x8)
    float CollisionObjectReductionPercentage;                                         // 0x001C (size: 0x4)
    float CollisionMarginFraction;                                                    // 0x0020 (size: 0x4)

}; // Size: 0x24

struct FGeometryCollectionDamagePropagationData
{
    bool bEnabled;                                                                    // 0x0000 (size: 0x1)
    float BreakDamagePropagationFactor;                                               // 0x0004 (size: 0x4)
    float ShockDamagePropagationFactor;                                               // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FGeometryCollectionDebugDrawActorSelectedRigidBody
{
    int32 ID;                                                                         // 0x0000 (size: 0x4)
    class AChaosSolverActor* Solver;                                                  // 0x0008 (size: 0x8)
    class AGeometryCollectionActor* GeometryCollection;                               // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FGeometryCollectionDebugDrawWarningMessage
{
}; // Size: 0x1

struct FGeometryCollectionEmbeddedExemplar
{
    FSoftObjectPath StaticMeshExemplar;                                               // 0x0000 (size: 0x20)
    float StartCullDistance;                                                          // 0x0020 (size: 0x4)
    float EndCullDistance;                                                            // 0x0024 (size: 0x4)
    int32 InstanceCount;                                                              // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FGeometryCollectionLevelSetData
{
    int32 MinLevelSetResolution;                                                      // 0x0000 (size: 0x4)
    int32 MaxLevelSetResolution;                                                      // 0x0004 (size: 0x4)
    int32 MinClusterLevelSetResolution;                                               // 0x0008 (size: 0x4)
    int32 MaxClusterLevelSetResolution;                                               // 0x000C (size: 0x4)

}; // Size: 0x10

struct FGeometryCollectionProxyMeshData
{
    TArray<class UStaticMesh*> ProxyMeshes;                                           // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FGeometryCollectionRenderResourceSizeInfo
{
    uint64 MeshResourcesSize;                                                         // 0x0000 (size: 0x8)
    uint64 NaniteResourcesSize;                                                       // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FGeometryCollectionRepData
{
}; // Size: 0x38

struct FGeometryCollectionRepDynamicData
{
}; // Size: 0x18

struct FGeometryCollectionRepStateData
{
}; // Size: 0x40

struct FGeometryCollectionSizeSpecificData
{
    float MaxSize;                                                                    // 0x0000 (size: 0x4)
    TArray<FGeometryCollectionCollisionTypeData> CollisionShapes;                     // 0x0008 (size: 0x10)
    int32 DamageThreshold;                                                            // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FGeometryCollectionSource
{
    FSoftObjectPath SourceGeometryObject;                                             // 0x0000 (size: 0x20)
    FTransform LocalTransform;                                                        // 0x0020 (size: 0x60)
    TArray<class UMaterialInterface*> SourceMaterial;                                 // 0x0080 (size: 0x10)
    TArray<float> InstanceCustomData;                                                 // 0x0090 (size: 0x10)
    bool bAddInternalMaterials;                                                       // 0x00A0 (size: 0x1)
    bool bSplitComponents;                                                            // 0x00A1 (size: 0x1)
    bool bSetInternalFromMaterialIndex;                                               // 0x00A2 (size: 0x1)

}; // Size: 0xB0

class AGeometryCollectionActor : public AActor
{
    class UGeometryCollectionComponent* GeometryCollectionComponent;                  // 0x0290 (size: 0x8)
    class UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent; // 0x0298 (size: 0x8)

    bool RaycastSingle(FVector Start, FVector End, FHitResult& OutHit);
}; // Size: 0x2A0

class AGeometryCollectionDebugDrawActor : public AActor
{
    FGeometryCollectionDebugDrawWarningMessage WarningMessage;                        // 0x0290 (size: 0x1)
    FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody;             // 0x0298 (size: 0x18)
    bool bDebugDrawWholeCollection;                                                   // 0x02B0 (size: 0x1)
    bool bDebugDrawHierarchy;                                                         // 0x02B1 (size: 0x1)
    bool bDebugDrawClustering;                                                        // 0x02B2 (size: 0x1)
    EGeometryCollectionDebugDrawActorHideGeometry HideGeometry;                       // 0x02B3 (size: 0x1)
    bool bShowRigidBodyId;                                                            // 0x02B4 (size: 0x1)
    bool bShowRigidBodyCollision;                                                     // 0x02B5 (size: 0x1)
    bool bCollisionAtOrigin;                                                          // 0x02B6 (size: 0x1)
    bool bShowRigidBodyTransform;                                                     // 0x02B7 (size: 0x1)
    bool bShowRigidBodyInertia;                                                       // 0x02B8 (size: 0x1)
    bool bShowRigidBodyVelocity;                                                      // 0x02B9 (size: 0x1)
    bool bShowRigidBodyForce;                                                         // 0x02BA (size: 0x1)
    bool bShowRigidBodyInfos;                                                         // 0x02BB (size: 0x1)
    bool bShowTransformIndex;                                                         // 0x02BC (size: 0x1)
    bool bShowTransform;                                                              // 0x02BD (size: 0x1)
    bool bShowParent;                                                                 // 0x02BE (size: 0x1)
    bool bShowLevel;                                                                  // 0x02BF (size: 0x1)
    bool bShowConnectivityEdges;                                                      // 0x02C0 (size: 0x1)
    bool bShowGeometryIndex;                                                          // 0x02C1 (size: 0x1)
    bool bShowGeometryTransform;                                                      // 0x02C2 (size: 0x1)
    bool bShowBoundingBox;                                                            // 0x02C3 (size: 0x1)
    bool bShowFaces;                                                                  // 0x02C4 (size: 0x1)
    bool bShowFaceIndices;                                                            // 0x02C5 (size: 0x1)
    bool bShowFaceNormals;                                                            // 0x02C6 (size: 0x1)
    bool bShowSingleFace;                                                             // 0x02C7 (size: 0x1)
    int32 SingleFaceIndex;                                                            // 0x02C8 (size: 0x4)
    bool bShowVertices;                                                               // 0x02CC (size: 0x1)
    bool bShowVertexIndices;                                                          // 0x02CD (size: 0x1)
    bool bShowVertexNormals;                                                          // 0x02CE (size: 0x1)
    bool bUseActiveVisualization;                                                     // 0x02CF (size: 0x1)
    float PointThickness;                                                             // 0x02D0 (size: 0x4)
    float LineThickness;                                                              // 0x02D4 (size: 0x4)
    bool bTextShadow;                                                                 // 0x02D8 (size: 0x1)
    float TextScale;                                                                  // 0x02DC (size: 0x4)
    float NormalScale;                                                                // 0x02E0 (size: 0x4)
    float AxisScale;                                                                  // 0x02E4 (size: 0x4)
    float ArrowScale;                                                                 // 0x02E8 (size: 0x4)
    FColor RigidBodyIdColor;                                                          // 0x02EC (size: 0x4)
    float RigidBodyTransformScale;                                                    // 0x02F0 (size: 0x4)
    FColor RigidBodyCollisionColor;                                                   // 0x02F4 (size: 0x4)
    FColor RigidBodyInertiaColor;                                                     // 0x02F8 (size: 0x4)
    FColor RigidBodyVelocityColor;                                                    // 0x02FC (size: 0x4)
    FColor RigidBodyForceColor;                                                       // 0x0300 (size: 0x4)
    FColor RigidBodyInfoColor;                                                        // 0x0304 (size: 0x4)
    FColor TransformIndexColor;                                                       // 0x0308 (size: 0x4)
    float TransformScale;                                                             // 0x030C (size: 0x4)
    FColor LevelColor;                                                                // 0x0310 (size: 0x4)
    FColor ParentColor;                                                               // 0x0314 (size: 0x4)
    float ConnectivityEdgeThickness;                                                  // 0x0318 (size: 0x4)
    FColor GeometryIndexColor;                                                        // 0x031C (size: 0x4)
    float GeometryTransformScale;                                                     // 0x0320 (size: 0x4)
    FColor BoundingBoxColor;                                                          // 0x0324 (size: 0x4)
    FColor FaceColor;                                                                 // 0x0328 (size: 0x4)
    FColor FaceIndexColor;                                                            // 0x032C (size: 0x4)
    FColor FaceNormalColor;                                                           // 0x0330 (size: 0x4)
    FColor SingleFaceColor;                                                           // 0x0334 (size: 0x4)
    FColor VertexColor;                                                               // 0x0338 (size: 0x4)
    FColor VertexIndexColor;                                                          // 0x033C (size: 0x4)
    FColor VertexNormalColor;                                                         // 0x0340 (size: 0x4)
    class UBillboardComponent* SpriteComponent;                                       // 0x0348 (size: 0x8)

}; // Size: 0x350

class AGeometryCollectionISMPoolActor : public AActor
{
    class UGeometryCollectionISMPoolComponent* ISMPoolComp;                           // 0x0290 (size: 0x8)
    class UGeometryCollectionISMPoolDebugDrawComponent* ISMPoolDebugDrawComp;         // 0x0298 (size: 0x8)

}; // Size: 0x2A0

class AGeometryCollectionRenderLevelSetActor : public AActor
{
    class UVolumeTexture* TargetVolumeTexture;                                        // 0x0290 (size: 0x8)
    class UMaterial* RayMarchMaterial;                                                // 0x0298 (size: 0x8)
    float SurfaceTolerance;                                                           // 0x02A0 (size: 0x4)
    float Isovalue;                                                                   // 0x02A4 (size: 0x4)
    bool Enabled;                                                                     // 0x02A8 (size: 0x1)
    bool RenderVolumeBoundingBox;                                                     // 0x02A9 (size: 0x1)

}; // Size: 0x380

class IGeometryCollectionExternalRenderInterface : public IInterface
{
}; // Size: 0x28

class UChaosDestructionListener : public USceneComponent
{
    uint8 bIsCollisionEventListeningEnabled;                                          // 0x0230 (size: 0x1)
    uint8 bIsBreakingEventListeningEnabled;                                           // 0x0230 (size: 0x1)
    uint8 bIsTrailingEventListeningEnabled;                                           // 0x0230 (size: 0x1)
    uint8 bIsRemovalEventListeningEnabled;                                            // 0x0230 (size: 0x1)
    FChaosCollisionEventRequestSettings CollisionEventRequestSettings;                // 0x0234 (size: 0x18)
    FChaosBreakingEventRequestSettings BreakingEventRequestSettings;                  // 0x024C (size: 0x18)
    FChaosTrailingEventRequestSettings TrailingEventRequestSettings;                  // 0x0264 (size: 0x18)
    FChaosRemovalEventRequestSettings RemovalEventRequestSettings;                    // 0x027C (size: 0x10)
    TSet<AChaosSolverActor*> ChaosSolverActors;                                       // 0x0290 (size: 0x50)
    TSet<AGeometryCollectionActor*> GeometryCollectionActors;                         // 0x02E0 (size: 0x50)
    FChaosDestructionListenerOnCollisionEvents OnCollisionEvents;                     // 0x0330 (size: 0x10)
    void OnChaosCollisionEvents(const TArray<FChaosCollisionEventData>& CollisionEvents);
    FChaosDestructionListenerOnBreakingEvents OnBreakingEvents;                       // 0x0340 (size: 0x10)
    void OnChaosBreakingEvents(const TArray<FChaosBreakingEventData>& BreakingEvents);
    FChaosDestructionListenerOnTrailingEvents OnTrailingEvents;                       // 0x0350 (size: 0x10)
    void OnChaosTrailingEvents(const TArray<FChaosTrailingEventData>& TrailingEvents);
    FChaosDestructionListenerOnRemovalEvents OnRemovalEvents;                         // 0x0360 (size: 0x10)
    void OnChaosRemovalEvents(const TArray<FChaosRemovalEventData>& RemovalEvents);

    void SortTrailingEvents(TArray<FChaosTrailingEventData>& TrailingEvents, EChaosTrailingSortMethod SortMethod);
    void SortRemovalEvents(TArray<FChaosRemovalEventData>& RemovalEvents, EChaosRemovalSortMethod SortMethod);
    void SortCollisionEvents(TArray<FChaosCollisionEventData>& CollisionEvents, EChaosCollisionSortMethod SortMethod);
    void SortBreakingEvents(TArray<FChaosBreakingEventData>& BreakingEvents, EChaosBreakingSortMethod SortMethod);
    void SetTrailingEventRequestSettings(const FChaosTrailingEventRequestSettings& InSettings);
    void SetTrailingEventEnabled(bool bIsEnabled);
    void SetRemovalEventRequestSettings(const FChaosRemovalEventRequestSettings& InSettings);
    void SetRemovalEventEnabled(bool bIsEnabled);
    void SetCollisionEventRequestSettings(const FChaosCollisionEventRequestSettings& InSettings);
    void SetCollisionEventEnabled(bool bIsEnabled);
    void SetBreakingEventRequestSettings(const FChaosBreakingEventRequestSettings& InSettings);
    void SetBreakingEventEnabled(bool bIsEnabled);
    void RemoveGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);
    void RemoveChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);
    bool IsEventListening();
    void AddGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);
    void AddChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);
}; // Size: 0x4E0

class UGeometryCollection : public UObject
{
    bool EnableClustering;                                                            // 0x0038 (size: 0x1)
    int32 ClusterGroupIndex;                                                          // 0x003C (size: 0x4)
    int32 MaxClusterLevel;                                                            // 0x0040 (size: 0x4)
    EDamageModelTypeEnum DamageModel;                                                 // 0x0044 (size: 0x1)
    TArray<float> DamageThreshold;                                                    // 0x0048 (size: 0x10)
    bool bUseSizeSpecificDamageThreshold;                                             // 0x0058 (size: 0x1)
    bool bUseMaterialDamageModifiers;                                                 // 0x0059 (size: 0x1)
    bool PerClusterOnlyDamageThreshold;                                               // 0x005A (size: 0x1)
    FGeometryCollectionDamagePropagationData DamagePropagationData;                   // 0x005C (size: 0xC)
    EClusterConnectionTypeEnum ClusterConnectionType;                                 // 0x0068 (size: 0x1)
    float ConnectionGraphBoundsFilteringMargin;                                       // 0x006C (size: 0x4)
    TArray<class UMaterialInterface*> Materials;                                      // 0x0070 (size: 0x10)
    TArray<FGeometryCollectionEmbeddedExemplar> EmbeddedGeometryExemplar;             // 0x0080 (size: 0x10)
    bool bUseFullPrecisionUVs;                                                        // 0x0090 (size: 0x1)
    bool bStripOnCook;                                                                // 0x0091 (size: 0x1)
    bool bStripRenderDataOnCook;                                                      // 0x0092 (size: 0x1)
    UClass* CustomRendererType;                                                       // 0x0098 (size: 0x8)
    FGeometryCollectionProxyMeshData RootProxyData;                                   // 0x00A0 (size: 0x10)
    TArray<FGeometryCollectionAutoInstanceMesh> AutoInstanceMeshes;                   // 0x00B0 (size: 0x10)
    bool EnableNanite;                                                                // 0x00C0 (size: 0x1)
    bool bConvertVertexColorsToSRGB;                                                  // 0x00C1 (size: 0x1)
    class UPhysicalMaterial* PhysicsMaterial;                                         // 0x00C8 (size: 0x8)
    bool bDensityFromPhysicsMaterial;                                                 // 0x00D0 (size: 0x1)
    float CachedDensityFromPhysicsMaterialInGCm3;                                     // 0x00D4 (size: 0x4)
    bool bMassAsDensity;                                                              // 0x00D8 (size: 0x1)
    float Mass;                                                                       // 0x00DC (size: 0x4)
    float MinimumMassClamp;                                                           // 0x00E0 (size: 0x4)
    bool bImportCollisionFromSource;                                                  // 0x00E4 (size: 0x1)
    bool bOptimizeConvexes;                                                           // 0x00E5 (size: 0x1)
    bool bScaleOnRemoval;                                                             // 0x00E6 (size: 0x1)
    bool bRemoveOnMaxSleep;                                                           // 0x00E7 (size: 0x1)
    FVector2D MaximumSleepTime;                                                       // 0x00E8 (size: 0x10)
    FVector2D RemovalDuration;                                                        // 0x00F8 (size: 0x10)
    bool bSlowMovingAsSleeping;                                                       // 0x0108 (size: 0x1)
    float SlowMovingVelocityThreshold;                                                // 0x010C (size: 0x4)
    TArray<FGeometryCollectionSizeSpecificData> SizeSpecificData;                     // 0x0110 (size: 0x10)
    bool EnableRemovePiecesOnFracture;                                                // 0x0120 (size: 0x1)
    TArray<class UMaterialInterface*> RemoveOnFractureMaterials;                      // 0x0128 (size: 0x10)
    class UDataflow* DataflowAsset;                                                   // 0x0138 (size: 0x8)
    FString DataflowTerminal;                                                         // 0x0140 (size: 0x10)
    TMap<class FString, class FString> Overrides;                                     // 0x0150 (size: 0x50)
    FGuid PersistentGuid;                                                             // 0x01A0 (size: 0x10)
    FGuid StateGuid;                                                                  // 0x01B0 (size: 0x10)
    int32 RootIndex;                                                                  // 0x01C0 (size: 0x4)
    TArray<int32> BreadthFirstTransformIndices;                                       // 0x01C8 (size: 0x10)
    TArray<int32> AutoInstanceTransformRemapIndices;                                  // 0x01D8 (size: 0x10)
    int32 BoneSelectedMaterialIndex;                                                  // 0x01E8 (size: 0x4)
    class UMaterialInterface* BoneSelectedMaterial;                                   // 0x01F0 (size: 0x8)
    TArray<class UAssetUserData*> AssetUserData;                                      // 0x0208 (size: 0x10)

    void SetEnableNanite(bool bValue);
    void SetConvertVertexColorsToSRGB(bool bValue);
}; // Size: 0x218

class UGeometryCollectionBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void SetISMPoolCustomInstanceData(class UGeometryCollectionComponent* GeometryCollectionComponent, int32 CustomDataIndex, float CustomDataValue);
}; // Size: 0x28

class UGeometryCollectionCache : public UObject
{
    FRecordedTransformTrack RecordedData;                                             // 0x0028 (size: 0x10)
    class UGeometryCollection* SupportedCollection;                                   // 0x0038 (size: 0x8)
    FGuid CompatibleCollectionState;                                                  // 0x0040 (size: 0x10)

}; // Size: 0x50

class UGeometryCollectionComponent : public UMeshComponent
{
    class AChaosSolverActor* ChaosSolverActor;                                        // 0x0558 (size: 0x8)
    class UGeometryCollection* RestCollection;                                        // 0x0568 (size: 0x8)
    TArray<class AFieldSystemActor*> InitializationFields;                            // 0x0570 (size: 0x10)
    bool Simulating;                                                                  // 0x0580 (size: 0x1)
    EObjectStateTypeEnum ObjectType;                                                  // 0x0582 (size: 0x1)
    int32 GravityGroupIndex;                                                          // 0x0584 (size: 0x4)
    int32 OneWayInteractionLevel;                                                     // 0x0588 (size: 0x4)
    bool bDensityFromPhysicsMaterial;                                                 // 0x058C (size: 0x1)
    bool bForceMotionBlur;                                                            // 0x058D (size: 0x1)
    bool EnableClustering;                                                            // 0x058E (size: 0x1)
    int32 ClusterGroupIndex;                                                          // 0x0590 (size: 0x4)
    int32 MaxClusterLevel;                                                            // 0x0594 (size: 0x4)
    int32 MaxSimulatedLevel;                                                          // 0x0598 (size: 0x4)
    EDamageModelTypeEnum DamageModel;                                                 // 0x059C (size: 0x1)
    TArray<float> DamageThreshold;                                                    // 0x05A0 (size: 0x10)
    bool bUseSizeSpecificDamageThreshold;                                             // 0x05B0 (size: 0x1)
    bool bUseMaterialDamageModifiers;                                                 // 0x05B1 (size: 0x1)
    FGeometryCollectionDamagePropagationData DamagePropagationData;                   // 0x05B4 (size: 0xC)
    bool bEnableDamageFromCollision;                                                  // 0x05C0 (size: 0x1)
    bool bAllowRemovalOnSleep;                                                        // 0x05C1 (size: 0x1)
    bool bAllowRemovalOnBreak;                                                        // 0x05C2 (size: 0x1)
    EClusterConnectionTypeEnum ClusterConnectionType;                                 // 0x05C3 (size: 0x1)
    int32 CollisionGroup;                                                             // 0x05C4 (size: 0x4)
    float CollisionSampleFraction;                                                    // 0x05C8 (size: 0x4)
    float LinearEtherDrag;                                                            // 0x05CC (size: 0x4)
    float AngularEtherDrag;                                                           // 0x05D0 (size: 0x4)
    class UChaosPhysicalMaterial* PhysicalMaterial;                                   // 0x05D8 (size: 0x8)
    EInitialVelocityTypeEnum InitialVelocityType;                                     // 0x05E0 (size: 0x1)
    FVector InitialLinearVelocity;                                                    // 0x05E8 (size: 0x18)
    FVector InitialAngularVelocity;                                                   // 0x0600 (size: 0x18)
    class UPhysicalMaterial* PhysicalMaterialOverride;                                // 0x0618 (size: 0x8)
    FGeomComponentCacheParameters CacheParameters;                                    // 0x0620 (size: 0x50)
    TArray<FTransform> RestTransforms;                                                // 0x0670 (size: 0x10)
    FGeometryCollectionComponentNotifyGeometryCollectionPhysicsStateChange NotifyGeometryCollectionPhysicsStateChange; // 0x0680 (size: 0x10)
    void NotifyGeometryCollectionPhysicsStateChange(class UGeometryCollectionComponent* FracturedComponent);
    FGeometryCollectionComponentNotifyGeometryCollectionPhysicsLoadingStateChange NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x0690 (size: 0x10)
    void NotifyGeometryCollectionPhysicsLoadingStateChange(class UGeometryCollectionComponent* FracturedComponent);
    FGeometryCollectionComponentOnChaosBreakEvent OnChaosBreakEvent;                  // 0x06B8 (size: 0x10)
    void OnChaosBreakEvent(const FChaosBreakEvent& BreakEvent);
    FGeometryCollectionComponentOnChaosRemovalEvent OnChaosRemovalEvent;              // 0x06C8 (size: 0x10)
    void OnChaosRemovalEvent(const FChaosRemovalEvent& RemovalEvent);
    FGeometryCollectionComponentOnChaosCrumblingEvent OnChaosCrumblingEvent;          // 0x06D8 (size: 0x10)
    void OnChaosCrumblingEvent(const FChaosCrumblingEvent& CrumbleEvent);
    float DesiredCacheTime;                                                           // 0x0730 (size: 0x4)
    bool CachePlayback;                                                               // 0x0734 (size: 0x1)
    FGeometryCollectionComponentOnChaosPhysicsCollision OnChaosPhysicsCollision;      // 0x0738 (size: 0x10)
    void OnChaosPhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);
    bool bNotifyBreaks;                                                               // 0x0748 (size: 0x1)
    bool bNotifyCollisions;                                                           // 0x0749 (size: 0x1)
    bool bNotifyTrailing;                                                             // 0x074A (size: 0x1)
    bool bNotifyRemovals;                                                             // 0x074B (size: 0x1)
    bool bNotifyCrumblings;                                                           // 0x074C (size: 0x1)
    bool bCrumblingEventIncludesChildren;                                             // 0x074D (size: 0x1)
    bool bNotifyGlobalBreaks;                                                         // 0x074E (size: 0x1)
    bool bNotifyGlobalCollisions;                                                     // 0x074F (size: 0x1)
    bool bNotifyGlobalRemovals;                                                       // 0x0750 (size: 0x1)
    bool bNotifyGlobalCrumblings;                                                     // 0x0751 (size: 0x1)
    bool bGlobalCrumblingEventIncludesChildren;                                       // 0x0752 (size: 0x1)
    bool bStoreVelocities;                                                            // 0x0753 (size: 0x1)
    bool bIsCurrentlyNavigationRelevant;                                              // 0x0754 (size: 0x1)
    bool bShowBoneColors;                                                             // 0x0755 (size: 0x1)
    bool bUpdateComponentTransformToRootBone;                                         // 0x0756 (size: 0x1)
    bool bUseRootProxyForNavigation;                                                  // 0x0757 (size: 0x1)
    bool bUpdateNavigationInTick;                                                     // 0x0758 (size: 0x1)
    class AGeometryCollectionISMPoolActor* ISMPool;                                   // 0x0760 (size: 0x8)
    bool bAutoAssignISMPool;                                                          // 0x0768 (size: 0x1)
    bool bOverrideCustomRenderer;                                                     // 0x0769 (size: 0x1)
    UClass* CustomRendererType;                                                       // 0x0770 (size: 0x8)
    bool bEnableRootProxyForCustomRenderer;                                           // 0x0778 (size: 0x1)
    TScriptInterface<class IGeometryCollectionExternalRenderInterface> CustomRenderer; // 0x0780 (size: 0x10)
    bool bEnableReplication;                                                          // 0x0790 (size: 0x1)
    bool bEnableAbandonAfterLevel;                                                    // 0x0791 (size: 0x1)
    FName AbandonedCollisionProfileName;                                              // 0x0794 (size: 0x8)
    TArray<FName> CollisionProfilePerLevel;                                           // 0x07A0 (size: 0x10)
    int32 ReplicationAbandonClusterLevel;                                             // 0x07C0 (size: 0x4)
    int32 ReplicationAbandonAfterLevel;                                               // 0x07C4 (size: 0x4)
    int32 ReplicationMaxPositionAndVelocityCorrectionLevel;                           // 0x07C8 (size: 0x4)
    FGeometryCollectionRepData RepData;                                               // 0x07D0 (size: 0x38)
    FGeometryCollectionRepStateData RepStateData;                                     // 0x0808 (size: 0x40)
    FGeometryCollectionRepDynamicData RepDynamicData;                                 // 0x0848 (size: 0x18)
    class UBodySetup* DummyBodySetup;                                                 // 0x0980 (size: 0x8)
    class UChaosGameplayEventDispatcher* EventDispatcher;                             // 0x0988 (size: 0x8)
    TArray<class UInstancedStaticMeshComponent*> EmbeddedGeometryComponents;          // 0x0990 (size: 0x10)
    bool bUseStaticMeshCollisionForTraces;                                            // 0x09A0 (size: 0x1)

    void SetUseStaticMeshCollisionForTraces(bool bInUseStaticMeshCollisionForTraces);
    void SetUseMaterialDamageModifiers(bool bInUseMaterialDamageModifiers);
    void SetRestCollection(const class UGeometryCollection* RestCollectionIn, bool bApplyAssetDefaults);
    void SetPerParticleCollisionProfileName(const TArray<int32>& BoneIds, FName ProfileName);
    void SetPerLevelCollisionProfileNames(const TArray<FName>& ProfileNames);
    void SetOneWayInteractionLevel(int32 InOneWayInteractionLevel);
    void SetNotifyRemovals(bool bNewNotifyRemovals);
    void SetNotifyGlobalRemovals(bool bNewNotifyGlobalRemovals);
    void SetNotifyGlobalCrumblings(bool bNewNotifyGlobalCrumblings, bool bGlobalNewCrumblingEventIncludesChildren);
    void SetNotifyGlobalCollision(bool bNewNotifyGlobalCollisions);
    void SetNotifyGlobalBreaks(bool bNewNotifyGlobalBreaks);
    void SetNotifyCrumblings(bool bNewNotifyCrumblings, bool bNewCrumblingEventIncludesChildren);
    void SetNotifyBreaks(bool bNewNotifyBreaks);
    void SetLocalRestTransforms(const TArray<FTransform>& Transforms, bool bOnlyLeaves);
    void SetGravityGroupIndex(int32 InGravityGroupIndex);
    void SetEnableDamageFromCollision(bool bValue);
    void SetDensityFromPhysicsMaterial(bool bInDensityFromPhysicsMaterial);
    void SetDamageThreshold(const TArray<float>& InDamageThreshold);
    void SetDamagePropagationData(const FGeometryCollectionDamagePropagationData& InDamagePropagationData);
    void SetDamageModel(EDamageModelTypeEnum InDamageModel);
    void SetAnchoredByTransformedBox(FBox Box, FTransform Transform, bool bAnchored, int32 MaxLevel);
    void SetAnchoredByIndex(int32 Index, bool bAnchored);
    void SetAnchoredByBox(FBox WorldSpaceBox, bool bAnchored, int32 MaxLevel);
    void SetAbandonedParticleCollisionProfileName(FName CollisionProfile);
    void RemoveAllAnchors();
    void ReceivePhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);
    void OnRep_RepStateData();
    void OnRep_RepDynamicData();
    void OnRep_RepData();
    void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent);
    void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent);
    bool IsRootBroken();
    bool GetUseStaticMeshCollisionForTraces();
    FTransform GetRootInitialTransform();
    int32 GetRootIndex();
    FTransform GetRootCurrentTransform();
    void GetMassAndExtents(int32 ItemIndex, float& OutMass, FBox& OutExtents);
    FBox GetLocalBounds();
    TArray<FTransform> GetInitialLocalRestTransforms();
    int32 GetInitialLevel(int32 ItemIndex);
    FString GetDebugInfo();
    TArray<float> GetDamageThreshold();
    void EnableRootProxyForCustomRenderer(bool bEnable);
    void CrumbleCluster(int32 ItemIndex);
    void CrumbleActiveClusters();
    void ApplyPhysicsField(bool Enabled, EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
    void ApplyLinearVelocity(int32 ItemIndex, const FVector& LinearVelocity);
    void ApplyKinematicField(float Radius, FVector Position);
    void ApplyInternalStrain(int32 ItemIndex, const FVector& Location, float Radius, int32 PropagationDepth, float PropagationFactor, float Strain);
    void ApplyExternalStrain(int32 ItemIndex, const FVector& Location, float Radius, int32 PropagationDepth, float PropagationFactor, float Strain);
    void ApplyBreakingLinearVelocity(int32 ItemIndex, const FVector& LinearVelocity);
    void ApplyBreakingAngularVelocity(int32 ItemIndex, const FVector& AngularVelocity);
    void ApplyAssetDefaults();
    void ApplyAngularVelocity(int32 ItemIndex, const FVector& AngularVelocity);
}; // Size: 0xA50

class UGeometryCollectionDebugDrawComponent : public UActorComponent
{
    class AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor;        // 0x00A0 (size: 0x8)
    class AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor; // 0x00A8 (size: 0x8)

}; // Size: 0xB8

class UGeometryCollectionISMPoolComponent : public USceneComponent
{
}; // Size: 0x360

class UGeometryCollectionISMPoolDebugDrawComponent : public UDebugDrawComponent
{
    bool bShowGlobalStats;                                                            // 0x0568 (size: 0x1)
    bool bShowStats;                                                                  // 0x0569 (size: 0x1)
    bool bShowBounds;                                                                 // 0x056A (size: 0x1)
    class UInstancedStaticMeshComponent* SelectedComponent;                           // 0x0570 (size: 0x8)

}; // Size: 0x580

class UGeometryCollectionISMPoolRenderer : public UObject
{
    class AGeometryCollectionISMPoolActor* ISMPoolActor;                              // 0x0030 (size: 0x8)

}; // Size: 0xE0

class UGeometryCollectionISMPoolSubSystem : public UWorldSubsystem
{

    void OnActorEndPlay(class AActor* InSource, TEnumAsByte<EEndPlayReason::Type> Reason);
}; // Size: 0x80

#endif
