#ifndef UE4SS_SDK_SpatialSystem_HPP
#define UE4SS_SDK_SpatialSystem_HPP

#include "SpatialSystem_enums.hpp"

struct FSpatialAvoidanceSettings
{
    float Radius;                                                                     // 0x0000 (size: 0x4)
    float TargetDistance;                                                             // 0x0004 (size: 0x4)
    float Strength;                                                                   // 0x0008 (size: 0x4)
    float TraceAngle;                                                                 // 0x000C (size: 0x4)
    float Height;                                                                     // 0x0010 (size: 0x4)
    float HeightOffset;                                                               // 0x0014 (size: 0x4)
    FVector ProjectExtend;                                                            // 0x0018 (size: 0x18)
    float ProjectHeightOffset;                                                        // 0x0030 (size: 0x4)
    class USpatialFilterAvoidance* Filter;                                            // 0x0038 (size: 0x8)

}; // Size: 0x40

struct FSpatialCollisionEntityData
{
    class USpatialEntityComponent* EntityComponent;                                   // 0x0000 (size: 0x8)

}; // Size: 0x30

struct FSpatialCollisionFragment : public FMassFragment
{
}; // Size: 0x8

struct FSpatialCollisionResult
{
    bool hit;                                                                         // 0x0040 (size: 0x1)
    double Time;                                                                      // 0x0048 (size: 0x8)
    FVector VectorNormal;                                                             // 0x0050 (size: 0x18)
    FVector VectorLocation;                                                           // 0x0068 (size: 0x18)
    FName SocketName;                                                                 // 0x0080 (size: 0x8)
    FSpatialCollisionEntityData EntityA;                                              // 0x0090 (size: 0x30)
    FSpatialCollisionEntityData EntityB;                                              // 0x00C0 (size: 0x30)
    class USpatialEntityComponent* HitEntity;                                         // 0x00F0 (size: 0x8)

}; // Size: 0x100

struct FSpatialEntity
{
}; // Size: 0x78

struct FSpatialGrid
{
    FSpatialSettings Settings;                                                        // 0x0050 (size: 0x68)

}; // Size: 0x168

struct FSpatialGridInfo
{
    int32 Total;                                                                      // 0x0000 (size: 0x4)
    int32 Visible;                                                                    // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FSpatialGridPrioritySettings
{
    double Mid;                                                                       // 0x0000 (size: 0x8)
    double High;                                                                      // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FSpatialMassEntity
{
    FMassEntityHandle EntityHandle;                                                   // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FSpatialMovementInputFragment : public FMassFragment
{
    FVector TargetLocation;                                                           // 0x0000 (size: 0x18)
    TWeakObjectPtr<class AActor> TargetActor;                                         // 0x0018 (size: 0x8)
    class USceneComponent* Component;                                                 // 0x0020 (size: 0x8)
    bool bLimitRotation;                                                              // 0x0028 (size: 0x1)
    FRotator RotationLimits;                                                          // 0x0030 (size: 0x18)
    bool bSmoothRotation;                                                             // 0x0048 (size: 0x1)
    float RotationSpeed;                                                              // 0x004C (size: 0x4)
    float MovementSpeed;                                                              // 0x0050 (size: 0x4)
    bool bFollowTarget;                                                               // 0x0054 (size: 0x1)

}; // Size: 0xC0

struct FSpatialMovementOutputFragment : public FMassFragment
{
}; // Size: 0xC0

struct FSpatialQueryResult
{
    class USpatialEntityComponent* EntityComponent;                                   // 0x0008 (size: 0x8)
    FVector Delta;                                                                    // 0x0010 (size: 0x18)
    double DistanceSquared;                                                           // 0x0028 (size: 0x8)
    double CollisionThresholdSquared;                                                 // 0x0030 (size: 0x8)
    double CollisionThreshold;                                                        // 0x0038 (size: 0x8)

}; // Size: 0x50

struct FSpatialSettings
{
    FVector Size;                                                                     // 0x0000 (size: 0x18)
    TEnumAsByte<ESpatialDimension> Dimension;                                         // 0x0018 (size: 0x1)
    FVector SizeHalf;                                                                 // 0x0020 (size: 0x18)
    bool bCullDistanceEnabled;                                                        // 0x0038 (size: 0x1)
    int32 CullDistance;                                                               // 0x003C (size: 0x4)
    float CullScale;                                                                  // 0x0040 (size: 0x4)
    bool bCullViewFrustum;                                                            // 0x0044 (size: 0x1)
    bool bCullEntityEvents;                                                           // 0x0045 (size: 0x1)
    bool bDebugTiles;                                                                 // 0x0046 (size: 0x1)
    bool bDebugEntities;                                                              // 0x0047 (size: 0x1)
    bool bPriority;                                                                   // 0x0048 (size: 0x1)
    FSpatialGridPrioritySettings PrioritySettings;                                    // 0x0050 (size: 0x10)
    class UUserDefinedEnum* CollisionChannels;                                        // 0x0060 (size: 0x8)

}; // Size: 0x68

struct FSpatialTile
{
}; // Size: 0xE8

struct FSpatialTrajectorySettings
{
    bool bVelocity;                                                                   // 0x0000 (size: 0x1)
    float GravityZ;                                                                   // 0x0004 (size: 0x4)
    float Arc;                                                                        // 0x0008 (size: 0x4)
    FVector InitialVelocity;                                                          // 0x0010 (size: 0x18)
    bool bRotation;                                                                   // 0x0028 (size: 0x1)
    float TimeScale;                                                                  // 0x002C (size: 0x4)

}; // Size: 0x30

class UActorStateComponent : public UActorComponent
{
    FGameplayTagContainer TaskState;                                                  // 0x00A0 (size: 0x20)
    FGameplayTag TaskTag;                                                             // 0x00C0 (size: 0x8)
    FGameplayTagContainer AnimationState;                                             // 0x00C8 (size: 0x20)
    FGameplayTag AnimationTag;                                                        // 0x00E8 (size: 0x8)
    FActorStateComponentOnRequestAnimation OnRequestAnimation;                        // 0x00F0 (size: 0x10)
    void OnRequestAnimationSignature(FName AnimatioName);
    FActorStateComponentOnRequestAnimationTag OnRequestAnimationTag;                  // 0x0100 (size: 0x10)
    void OnRequestAnimationTagSignature(FGameplayTag Tag);
    FActorStateComponentOnResume OnResume;                                            // 0x0110 (size: 0x10)
    void OnResumeSignature(FGameplayTag Tag);
    TArray<class UPropertyInjection*> PropertyInjection;                              // 0x0120 (size: 0x10)
    class UCoreStateTreeComponent* CoreStateTree;                                     // 0x0130 (size: 0x8)

    void SetTaskState(FGameplayTag Tag, bool bSend);
    void SetAnimationState(FGameplayTag Tag, bool bRequest);
    void Resume(FGameplayTag Tag);
    void RequestAnimationTag(FGameplayTag Tag);
    void RequestAnimation(FName Animation);
    void RemoveTaskState(FGameplayTag Tag);
    void RemoveAnimationState(FGameplayTag Tag);
    FGameplayTag GetTaskState();
    TArray<FName> GetComponentPropertyNames();
    TArray<FName> GetComponentNames();
    FGameplayTag GetAnimationState();
    void AddTaskState(FGameplayTag Tag);
    void AddAnimationState(FGameplayTag Tag);
}; // Size: 0x138

class UAnimNotify_Core : public UAnimNotify
{
    TSubclassOf<class UActorStateComponent> ActorStateComponentClass;                 // 0x0038 (size: 0x8)
    TSubclassOf<class UCoreStateTreeComponent> CoreStateTreeComponentClass;           // 0x0040 (size: 0x8)
    bool bSendAnimation;                                                              // 0x0048 (size: 0x1)
    FGameplayTag AnimationTag;                                                        // 0x004C (size: 0x8)
    bool bSendTask;                                                                   // 0x0054 (size: 0x1)
    FGameplayTag TaskTag;                                                             // 0x0058 (size: 0x8)
    bool bSendResume;                                                                 // 0x0060 (size: 0x1)
    FGameplayTag ResumeTag;                                                           // 0x0064 (size: 0x8)
    class UActorStateComponent* ActorStateComponent;                                  // 0x0070 (size: 0x8)
    class UCoreStateTreeComponent* CoreStateTreeComponent;                            // 0x0078 (size: 0x8)
    TEnumAsByte<EPriorityLevel> Priority;                                             // 0x0080 (size: 0x1)

    void SetPriority(TEnumAsByte<EPriorityLevel> NewPriority);
    TEnumAsByte<EPriorityLevel> GetPriority();
    bool Execute(class USceneComponent* SceneComponent);
}; // Size: 0x88

class UCoreStateTreeComponent : public UStateTreeComponent
{
}; // Size: 0x170

class UCoreStateTreeComponentSchema : public UStateTreeComponentSchema
{
    TSubclassOf<class UActorStateComponent> ActorStateClass;                          // 0x0058 (size: 0x8)

}; // Size: 0x60

class UPropertyInjection : public UObject
{
    FName PropertyName;                                                               // 0x0028 (size: 0x8)
    FName ComponentName;                                                              // 0x0030 (size: 0x8)
    FComponentReference ComponentReference;                                           // 0x0038 (size: 0x28)

    TArray<FName> GetComponentPropertyNames();
    TArray<FName> GetComponentNames();
}; // Size: 0x68

class USpatialCollisionProcessor : public UMassProcessor
{
}; // Size: 0x3D0

class USpatialEntityComponent : public UActorComponent
{
    TSubclassOf<class USpatialGridSettings> GridSettingsAsset;                        // 0x00B0 (size: 0x8)
    bool bAutoSize;                                                                   // 0x00B8 (size: 0x1)
    float Radius;                                                                     // 0x00BC (size: 0x4)
    FVector Offset;                                                                   // 0x00C0 (size: 0x18)
    bool bStatic;                                                                     // 0x00D8 (size: 0x1)
    bool bEventsOnMovedDistance;                                                      // 0x00D9 (size: 0x1)
    float EventOnMovedDistance;                                                       // 0x00DC (size: 0x4)
    bool bGenerateOverlapEvents;                                                      // 0x00E0 (size: 0x1)
    class USpatialFilter* OverlapFilter;                                              // 0x00E8 (size: 0x8)
    bool bAvoidance;                                                                  // 0x00F0 (size: 0x1)
    FSpatialAvoidanceSettings AvoidanceSettings;                                      // 0x00F8 (size: 0x40)
    bool bDebug;                                                                      // 0x0140 (size: 0x1)
    FSpatialEntityComponentOnOverlap OnOverlap;                                       // 0x0148 (size: 0x10)
    void OnOverlapSignature(const TArray<class USpatialEntityComponent*>& Components);
    FSpatialEntityComponentOnSelected OnSelected;                                     // 0x0158 (size: 0x10)
    void OnSelectedSignature();
    FSpatialEntityComponentOnDeselected OnDeselected;                                 // 0x0168 (size: 0x10)
    void OnSelectedSignature();
    FSpatialEntityComponentOnAvoidance OnAvoidance;                                   // 0x0178 (size: 0x10)
    void OnAvoidanceSignature(const FVector& Velocity, const FVector& TargetLocation);
    FSpatialEntityComponentOnAvoidanceInvalid OnAvoidanceInvalid;                     // 0x0188 (size: 0x10)
    void OnAvoidanceSignature(const FVector& Velocity, const FVector& TargetLocation);
    FSpatialEntityComponentOnTilePriorityChange OnTilePriorityChange;                 // 0x01C8 (size: 0x10)
    void OnTilePriorityChange(TEnumAsByte<EPriorityLevel> Priority);
    FSpatialEntityComponentOnHit OnHit;                                               // 0x01D8 (size: 0x10)
    void OnHitEntity(class USpatialEntityComponent* Entity, const FSpatialCollisionResult& Result);
    bool bSurfaceAlignment;                                                           // 0x01E8 (size: 0x1)
    float SurfaceUp;                                                                  // 0x01EC (size: 0x4)
    float SurfaceDown;                                                                // 0x01F0 (size: 0x4)
    bool bCollision;                                                                  // 0x01F4 (size: 0x1)
    FName CollisionChannel;                                                           // 0x01F8 (size: 0x8)
    int32 CollisionLayer;                                                             // 0x0200 (size: 0x4)
    int32 CollisionMask;                                                              // 0x0204 (size: 0x4)
    TArray<FSpatialEntity> LOD;                                                       // 0x0208 (size: 0x10)
    bool bLODCollision;                                                               // 0x0218 (size: 0x1)
    float LODScale;                                                                   // 0x021C (size: 0x4)
    TWeakObjectPtr<class USceneComponent> LODComponent;                               // 0x0220 (size: 0x8)
    TSoftObjectPtr<UPhysicsAsset> LODPhysicsAsset;                                    // 0x0228 (size: 0x28)
    FHitResult SurfaceHitResult;                                                      // 0x0258 (size: 0x100)
    class USpatialMovementComponent* MovementComponent;                               // 0x0390 (size: 0x8)
    TArray<class UPropertyInjection*> PropertyInjection;                              // 0x0398 (size: 0x10)

    bool UpdateLOD(bool bForceUpdate);
    void UpdateEntityBounds(bool bForceUpdate);
    void SurfaceAlignment(const FVector& Location);
    void SetRadius(float InRadius);
    void SetCollisionChannel(FName NewChannel);
    bool Select();
    void RemoveEntity();
    void ReceiveOnSelected();
    void ReceiveOnDeselected();
    void ReceiveOnAvoidanceInvalid(const FVector& Velocity, const FVector& Location);
    void ReceiveOnAvoidance(const FVector& Velocity, const FVector& Location);
    void QueryResultsInRange(TArray<FSpatialQueryResult>& Collection, class USpatialFilter* Filter, float QueryRadius, bool bSorted);
    void QueryInRange(TArray<class USpatialEntityComponent*>& Collection, class USpatialFilter* Filter, float QueryRadius);
    bool QueryAvoidanceInternal(FVector& Velocity, FVector& Location);
    void QueryAvoidance(const FVector& TargetLocationIn, bool bTargetOrientation, FRotator& Direction, FVector& TargetLocation, bool& bSuccess);
    void QueryActorsInRange(TArray<class AActor*>& Collection, class USpatialFilter* Filter, float QueryRadius);
    void OnHitEvent(class USpatialEntityComponent* EntityComponent, const FSpatialCollisionResult& Result);
    void LerpVelocity(const FVector& TargetDirection, const FVector& AvoidanceDirection, const float Alpha, const float Speed, FVector& Direction);
    bool IsSelected();
    bool IsLODUpdated();
    TArray<FName> GetSupportedChannelNames();
    float GetRadius();
    FVector GetLocation();
    void DrawDebug();
    bool Deselect();
    bool CreateLOD();
}; // Size: 0x430

class USpatialFilter : public UObject
{
    float MinimumDistance;                                                            // 0x0028 (size: 0x4)

}; // Size: 0x38

class USpatialFilterActor : public USpatialFilter
{
    TSubclassOf<class AActor> ActorClass;                                             // 0x0038 (size: 0x8)

}; // Size: 0x40

class USpatialFilterAvoidance : public USpatialFilter
{
    float MinZ;                                                                       // 0x0038 (size: 0x4)
    float MaxZ;                                                                       // 0x003C (size: 0x4)

}; // Size: 0x40

class USpatialFilterBlueprint : public USpatialFilterActor
{

    bool Validate(class USpatialEntityComponent* Entity);
}; // Size: 0x40

class USpatialFilterComposition : public USpatialFilter
{
    TArray<class USpatialFilter*> Filter;                                             // 0x0038 (size: 0x10)

}; // Size: 0x48

class USpatialFilterPhysics : public USpatialFilter
{
    FVector PreviousLocation;                                                         // 0x0038 (size: 0x18)
    float Radius;                                                                     // 0x0050 (size: 0x4)
    class UPhysicsAsset* PhysicsAsset;                                                // 0x0058 (size: 0x8)
    float scale;                                                                      // 0x0060 (size: 0x4)
    TArray<FSpatialEntity> Entities;                                                  // 0x0068 (size: 0x10)

}; // Size: 0x78

class USpatialGridSettings : public UObject
{
    FSpatialSettings Settings;                                                        // 0x0028 (size: 0x68)

}; // Size: 0x90

class USpatialMovementComponent : public UActorComponent
{
    FName Agent;                                                                      // 0x00A0 (size: 0x8)
    TWeakObjectPtr<class ANavigationData> AgentNavData;                               // 0x00A8 (size: 0x8)
    class UNavigationPath* NavigationPath;                                            // 0x00B0 (size: 0x8)
    FSpatialMovementComponentOnHit OnHit;                                             // 0x00B8 (size: 0x10)
    void OnHit(class AActor* TargetActor, FVector HitLocation);
    FSpatialMovementComponentOnTargetReached OnTargetReached;                         // 0x00C8 (size: 0x10)
    void OnTargetReached(class AActor* TargetActor, FVector HitLocation);
    FSpatialMovementComponentOnUpdateInSight OnUpdateInSight;                         // 0x00D8 (size: 0x10)
    void OnUpdateInSight(bool InSight);
    FSpatialMovementComponentOnOvershot OnOvershot;                                   // 0x00E8 (size: 0x10)
    void OnOvershot(FRotator Overshot);
    FSpatialMovementComponentOnTargetActorChanged OnTargetActorChanged;               // 0x00F8 (size: 0x10)
    void OnTargetActorChanged(class AActor* TargetActor);
    class USceneComponent* Component;                                                 // 0x0108 (size: 0x8)
    bool bSmoothRotation;                                                             // 0x0110 (size: 0x1)
    float RotationSpeed;                                                              // 0x0114 (size: 0x4)
    bool bLimitRotation;                                                              // 0x0118 (size: 0x1)
    FRotator RotationLimits;                                                          // 0x0120 (size: 0x18)
    bool bUseRotationAdjustment;                                                      // 0x0138 (size: 0x1)
    FQuat RotationAdjustment;                                                         // 0x0140 (size: 0x20)
    float MovementSpeed;                                                              // 0x0160 (size: 0x4)
    bool bFollowTarget;                                                               // 0x0164 (size: 0x1)
    bool bObserve;                                                                    // 0x0165 (size: 0x1)
    float SightAngle;                                                                 // 0x0168 (size: 0x4)
    float RangeMax;                                                                   // 0x016C (size: 0x4)
    float HitRadius;                                                                  // 0x0170 (size: 0x4)
    float AcceptanceRadius;                                                           // 0x0174 (size: 0x4)
    FVector PivotOffset;                                                              // 0x0178 (size: 0x18)
    float DistanceToTarget;                                                           // 0x0190 (size: 0x4)
    FSpatialTrajectorySettings Trajectory;                                            // 0x0198 (size: 0x30)
    bool bCollision;                                                                  // 0x01C8 (size: 0x1)
    bool bBlocking;                                                                   // 0x01C9 (size: 0x1)
    class USpatialEntityComponent* EntityComponent;                                   // 0x01D0 (size: 0x8)
    TArray<class UPropertyInjection*> PropertyInjection;                              // 0x01D8 (size: 0x10)
    FVector TargetLocation;                                                           // 0x01F0 (size: 0x18)
    class AActor* TargetActor;                                                        // 0x0208 (size: 0x8)
    FVector Waypoint;                                                                 // 0x0210 (size: 0x18)
    TArray<FVector> Waypoints;                                                        // 0x0228 (size: 0x10)
    int32 WaypointIndex;                                                              // 0x0238 (size: 0x4)
    class UMassEntitySubsystem* EntitySubsystem;                                      // 0x0240 (size: 0x8)
    FSpatialMassEntity CoreEntity;                                                    // 0x0248 (size: 0x8)

    bool UpdateInSight();
    bool UnregisterEntity(const class UObject* WorldContextObject, FSpatialMassEntity& CoreEntity);
    void Stop();
    void Start();
    bool SetWaypoints(TArray<FVector> Waypoints);
    bool SetWaypointIndex(int32 Index);
    void SetTargetLocation(const FVector& Location);
    void SetTargetActor(class AActor* Actor, bool bActivate);
    bool SetNextWaypoint();
    bool SetInSight(bool IsInSight);
    void SetDebugDrawing(bool bShouldDrawDebugData, FLinearColor PathColor);
    bool SetCurrentWaypoint();
    bool RegisterEntity(class USpatialMovementComponent* MovementComponent, class USceneComponent* Component, class AActor* TargetActor, FSpatialMassEntity& CoreEntity, const FVector PivotOffset, bool bSmoothRotation, float Speed, bool bLimitRotation, FRotator RotationLimits, float MovementSpeed, bool bFollowTarget, bool bCollision);
    void ReceiveOnHit();
    bool Raycast(const FVector& RayStart, const FVector& RayEnd, FVector& HitLocation);
    bool ProjectPoint(const FVector& Point, float Radius, FVector& Location);
    bool MoveToTrajectory(const FVector& Location, bool bAutoStart, bool bDebug);
    bool MoveTo(const FVector& Location, TSubclassOf<class UNavigationQueryFilter> FilterClass, bool bDebug, bool bPartial, bool bAutoStart);
    bool IsInSight();
    TArray<FVector> GetWaypoints();
    int32 GetWaypointIndex();
    FVector GetWaypoint();
    FVector GetTargetLocation();
    class AActor* GetTargetActor();
    TArray<FName> GetSupportedAgentNames();
    FVector GetDestination();
    bool GetDebugDrawing();
    void DrawDebugTrajectory();
    void ClearWaypoints();
    void AlignTargetBySockets(const class USceneComponent* ComponentRotator, const class USceneComponent* ComponentAttached, const TArray<FName>& Sockets, FVector& Offset);
}; // Size: 0x260

class USpatialMovementProcessor : public UMassProcessor
{
}; // Size: 0x480

class USpatialMovementTrait : public UMassEntityTraitBase
{
}; // Size: 0x28

class USpatialSystemBPLibrary : public UBlueprintFunctionLibrary
{

    bool UpdateEntitiesFromSockets(class USceneComponent* Component, TArray<FSpatialEntity>& Entities, bool bResetVelocity);
    bool UpdateEntitiesFromPhysics(class USceneComponent* Component, TArray<FSpatialEntity>& Entities, bool bResetVelocity);
    bool TraceWorld(class UObject* WorldContextObject, const FSpatialEntity& Entity, TEnumAsByte<ECollisionChannel> TraceChannel, FHitResult& HitResult);
    bool TraceSurface(class UObject* WorldContextObject, const FVector& Location, const float Up, const float Down, TEnumAsByte<ECollisionChannel> TraceChannel, FHitResult& HitResult);
    FSpatialCollisionResult SphereCollision(FVector LocationA, FVector VelocityA, float RadiusA, FVector LocationB, FVector VelocityB, float RadiusB);
    TArray<FVector> QueryLocationsDebug(const FSpatialSettings& GridSettings, const FVector& Location, const float Radius, TArray<FVector>& OutLocationsInner);
    TArray<FVector> QueryLocations(const FSpatialSettings& GridSettings, const FVector& Location, const float Radius);
    FVector MaskVector(const FVector& Vector, const FSpatialSettings& Settings);
    void Inject(class UActorComponent* ActorComponent, const TArray<class UPropertyInjection*>& PropertyInjection);
    TArray<FName> GetComponentPropertyNames(const class UActorComponent* ActorComponent, const UClass* Class);
    TArray<FName> GetComponentNames(const class UActorComponent* ActorComponent, const UClass* Class);
    class UActorComponent* GetComponentByName(class AActor* Actor, FName ComponentName);
    class AActor* GetClosests(const FVector& Location, const TArray<class AActor*>& Collection);
    void DrawSelection(const class UObject* WorldContextObject, const FVector2D& FirstPoint, const FVector2D& SecondPoint, const FColor& Color, float Thickness, float Near, float Far);
    bool DrawDebugEntity(class UObject* WorldContextObject, const FSpatialEntity& Entity);
    bool DrawDebugCollisionResult(class UObject* WorldContextObject, const FSpatialCollisionResult& CollisionResult);
    bool CreateEntitiesFromSockets(const class USceneComponent* Component, TArray<FSpatialEntity>& Entities, float scale);
    bool CreateEntitiesFromPhysics(const class USceneComponent* Component, const class UPhysicsAsset* PhysicsAsset, TArray<FSpatialEntity>& Entities, float scale);
}; // Size: 0x28

class USpatialWorldSubsystem : public UTickableWorldSubsystem
{
    FSpatialGridInfo Info;                                                            // 0x0134 (size: 0x8)

    bool UpdateScreenWorldLocation(const float Near, const float Far, TEnumAsByte<ECollisionChannel> TraceChannel);
    bool TraceScreenPoint(const FVector2D& ScreenPoint, const float Near, const float Far, TEnumAsByte<ECollisionChannel> TraceChannel, FVector& Location);
    bool QuerySelectionActors(TSubclassOf<class USpatialGridSettings> GridSetting, class USpatialFilter* Filter, TArray<class AActor*>& Collection, const FVector2D& FirstPoint, const FVector2D& SecondPoint, float Near, float Far, bool DrawDebug, bool bTraceEndPoint);
    bool QuerySelection(TSubclassOf<class USpatialGridSettings> GridSetting, class USpatialFilter* Filter, TArray<class USpatialEntityComponent*>& Collection, const FVector2D& FirstPoint, const FVector2D& SecondPoint, float Near, float Far, bool DrawDebug, bool bTraceEndPoint);
    void QueryLineTraceActors(TSubclassOf<class USpatialGridSettings> GridSetting, class USpatialFilter* Filter, const FVector& Start, const FVector& End, TArray<class AActor*>& Collection, bool bTraceEndPoint, bool Debug);
    void QueryEntities(TSubclassOf<class USpatialGridSettings> GridSettings, const FVector& Location, float Radius, TArray<class USpatialEntityComponent*>& Collection);
    void Query(TSubclassOf<class USpatialGridSettings> GridSettings, const FVector& Location, float Radius, TArray<class AActor*>& Collection);
    FVector GetScreenWorldLocation();
}; // Size: 0x3B0

#endif
