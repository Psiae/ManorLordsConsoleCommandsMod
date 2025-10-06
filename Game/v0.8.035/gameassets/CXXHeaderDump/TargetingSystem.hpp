#ifndef UE4SS_SDK_TargetingSystem_HPP
#define UE4SS_SDK_TargetingSystem_HPP

#include "TargetingSystem_enums.hpp"

struct FCollisionQueryTaskData
{
    TArray<class AActor*> IgnoredActors;                                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FTargetingAsyncTaskData
{
}; // Size: 0x8

struct FTargetingDebugData
{
}; // Size: 0x1

struct FTargetingDefaultResultData
{
    FHitResult HitResult;                                                             // 0x0000 (size: 0x100)
    float Score;                                                                      // 0x0100 (size: 0x4)

}; // Size: 0x108

struct FTargetingDefaultResultsSet
{
    TArray<FTargetingDefaultResultData> TargetResults;                                // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FTargetingImmediateTaskData
{
}; // Size: 0x1

struct FTargetingRequestData
{
    FTargetingRequestDataTargetingRequestDynamicDelegate TargetingRequestDynamicDelegate; // 0x0020 (size: 0x10)
    void TargetingRequestDynamicDelegate(FTargetingRequestHandle TargetingRequestHandle);

}; // Size: 0x30

struct FTargetingRequestHandle
{
}; // Size: 0x4

struct FTargetingSourceContext
{
    class AActor* SourceActor;                                                        // 0x0000 (size: 0x8)
    class AActor* InstigatorActor;                                                    // 0x0008 (size: 0x8)
    FVector SourceLocation;                                                           // 0x0010 (size: 0x18)
    FName SourceSocketName;                                                           // 0x0028 (size: 0x8)
    class UObject* SourceObject;                                                      // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FTargetingTaskSet
{
    TArray<class UTargetingTask*> Tasks;                                              // 0x0000 (size: 0x10)

}; // Size: 0x10

class UAbilityTask_PerformTargeting : public UAbilityTask
{
    FAbilityTask_PerformTargetingOnTargetReady OnTargetReady;                         // 0x0080 (size: 0x10)
    void TargetReadyDelegate(FTargetingRequestHandle TargetingRequestHandle);

    class UAbilityTask_PerformTargeting* PerformTargetingRequest(class UGameplayAbility* OwningAbility, class UTargetingPreset* InTargetingPreset, bool bAllowAsync);
    class UAbilityTask_PerformTargeting* PerformFilteringRequest(class UGameplayAbility* OwningAbility, class UTargetingPreset* TargetingPreset, const TArray<class AActor*> InTargets, bool bAllowAsync);
}; // Size: 0xB0

class UAsyncAction_PerformTargeting : public UBlueprintAsyncActionBase
{
    FAsyncAction_PerformTargetingTargeted Targeted;                                   // 0x0030 (size: 0x10)
    void PerformTargetingReady(FTargetingRequestHandle TargetingHandle);
    class UTargetingPreset* TargetingPreset;                                          // 0x0040 (size: 0x8)
    TWeakObjectPtr<class AActor> WeakSourceActor;                                     // 0x0048 (size: 0x8)
    TArray<class AActor*> InitialTargets;                                             // 0x0050 (size: 0x10)
    FTargetingRequestHandle TargetingHandle;                                          // 0x0060 (size: 0x4)
    uint8 bUseAsyncTargeting;                                                         // 0x0064 (size: 0x1)

    class UAsyncAction_PerformTargeting* PerformTargetingRequest(class AActor* SourceActor, class UTargetingPreset* TargetingPreset, bool bUseAsyncTargeting);
    class UAsyncAction_PerformTargeting* PerformFilteringRequest(class AActor* SourceActor, class UTargetingPreset* TargetingPreset, bool bUseAsyncTargeting, const TArray<class AActor*> InTargets);
    FTargetingRequestHandle GetTargetingHandle();
}; // Size: 0x68

class USimpleTargetingFilterTask : public UTargetingFilterTask_BasicFilterTemplate
{

    bool BP_ShouldFilterTarget(const FTargetingRequestHandle& TargetingHandle, const FTargetingDefaultResultData& TargetData);
}; // Size: 0x28

class USimpleTargetingSelectionTask : public UTargetingTask
{

    void SelectTargets(const FTargetingRequestHandle& TargetingHandle, const FTargetingSourceContext& SourceContext);
    bool AddTargetActor(const FTargetingRequestHandle& TargetingHandle, class AActor* Actor);
    bool AddHitResult(const FTargetingRequestHandle& TargetingHandle, const FHitResult& HitResult);
}; // Size: 0x28

class USimpleTargetingSortTask : public UTargetingSortTask_Base
{

    float BP_GetScoreForTarget(const FTargetingRequestHandle& TargetingHandle, const FTargetingDefaultResultData& TargetData);
}; // Size: 0x30

class UTargetingFilterTask_ActorClass : public UTargetingFilterTask_BasicFilterTemplate
{
    TArray<class UClass*> RequiredActorClassFilters;                                  // 0x0028 (size: 0x10)
    TArray<class UClass*> IgnoredActorClassFilters;                                   // 0x0038 (size: 0x10)

}; // Size: 0x48

class UTargetingFilterTask_BasicFilterTemplate : public UTargetingTask
{
}; // Size: 0x28

class UTargetingFilterTask_SortByDistance : public UTargetingSortTask_Base
{
    bool bUseDistanceToNearestBlockingCollider;                                       // 0x0030 (size: 0x1)
    TEnumAsByte<ECollisionChannel> DistanceToCollisionChannel;                        // 0x0031 (size: 0x1)

}; // Size: 0x38

class UTargetingPreset : public UDataAsset
{
    FTargetingTaskSet TargetingTaskSet;                                               // 0x0030 (size: 0x10)

}; // Size: 0x40

class UTargetingSelectionTask_AOE : public UTargetingTask
{
    ETargetingAOEShape ShapeType;                                                     // 0x0028 (size: 0x1)
    TEnumAsByte<ECollisionChannel> CollisionChannel;                                  // 0x0029 (size: 0x1)
    FCollisionProfileName CollisionProfileName;                                       // 0x002C (size: 0x8)
    TArray<TEnumAsByte<EObjectTypeQuery>> CollisionObjectTypes;                       // 0x0038 (size: 0x10)
    FVector DefaultSourceOffset;                                                      // 0x0048 (size: 0x18)
    uint8 bUseRelativeOffset;                                                         // 0x0060 (size: 0x1)
    uint8 bIgnoreSourceActor;                                                         // 0x0060 (size: 0x1)
    uint8 bIgnoreInstigatorActor;                                                     // 0x0060 (size: 0x1)
    uint8 bTraceComplex;                                                              // 0x0060 (size: 0x1)
    FVector HalfExtent;                                                               // 0x0068 (size: 0x18)
    FScalableFloat Radius;                                                            // 0x0080 (size: 0x28)
    FScalableFloat HalfHeight;                                                        // 0x00A8 (size: 0x28)
    FName ComponentTag;                                                               // 0x00D0 (size: 0x8)

    FQuat GetSourceRotation(const FTargetingRequestHandle& TargetingHandle);
    FVector GetSourceOffset(const FTargetingRequestHandle& TargetingHandle);
    FVector GetSourceLocation(const FTargetingRequestHandle& TargetingHandle);
}; // Size: 0xD8

class UTargetingSelectionTask_SourceActor : public UTargetingTask
{
}; // Size: 0x28

class UTargetingSelectionTask_Trace : public UTargetingTask
{
    ETargetingTraceType TraceType;                                                    // 0x0028 (size: 0x1)
    TEnumAsByte<ETraceTypeQuery> TraceChannel;                                        // 0x0029 (size: 0x1)
    FCollisionProfileName CollisionProfileName;                                       // 0x002C (size: 0x8)
    FScalableFloat DefaultSweptTraceRadius;                                           // 0x0038 (size: 0x28)
    FScalableFloat DefaultSweptTraceCapsuleHalfHeight;                                // 0x0060 (size: 0x28)
    FScalableFloat DefaultSweptTraceBoxHalfExtentX;                                   // 0x0088 (size: 0x28)
    FScalableFloat DefaultSweptTraceBoxHalfExtentY;                                   // 0x00B0 (size: 0x28)
    FScalableFloat DefaultSweptTraceBoxHalfExtentZ;                                   // 0x00D8 (size: 0x28)
    FRotator DefaultSweptTraceRotation;                                               // 0x0100 (size: 0x18)
    FScalableFloat DefaultTraceLength;                                                // 0x0118 (size: 0x28)
    FVector DefaultSourceOffset;                                                      // 0x0140 (size: 0x18)
    FVector ExplicitTraceDirection;                                                   // 0x0158 (size: 0x18)
    uint8 bComplexTrace;                                                              // 0x0170 (size: 0x1)
    uint8 bMultiTrace;                                                                // 0x0170 (size: 0x1)
    uint8 bIgnoreSourceActor;                                                         // 0x0170 (size: 0x1)
    uint8 bIgnoreInstigatorActor;                                                     // 0x0170 (size: 0x1)

    float GetTraceLength(const FTargetingRequestHandle& TargetingHandle);
    FVector GetTraceDirection(const FTargetingRequestHandle& TargetingHandle);
    FRotator GetSweptTraceRotation(const FTargetingRequestHandle& TargetingHandle);
    float GetSweptTraceRadius(const FTargetingRequestHandle& TargetingHandle);
    float GetSweptTraceCapsuleHalfHeight(const FTargetingRequestHandle& TargetingHandle);
    FVector GetSweptTraceBoxHalfExtents(const FTargetingRequestHandle& TargetingHandle);
    FVector GetSourceOffset(const FTargetingRequestHandle& TargetingHandle);
    FVector GetSourceLocation(const FTargetingRequestHandle& TargetingHandle);
    void GetAdditionalActorsToIgnore(const FTargetingRequestHandle& TargetingHandle, TArray<class AActor*>& OutAdditionalActorsToIgnore);
}; // Size: 0x178

class UTargetingSortTask_Base : public UTargetingTask
{
    uint8 bAscending;                                                                 // 0x0028 (size: 0x1)
    uint8 bStableSort;                                                                // 0x0028 (size: 0x1)

}; // Size: 0x30

class UTargetingSubsystem : public UGameInstanceSubsystem
{
    TArray<FTargetingRequestHandle> AsyncTargetingRequests;                           // 0x0040 (size: 0x10)

    FTargetingRequestHandle StartAsyncTargetingRequest(const class UTargetingPreset* TargetingPreset, const FTargetingSourceContext& InSourceContext, FStartAsyncTargetingRequestCompletionDynamicDelegate CompletionDynamicDelegate);
    void RemoveAsyncTargetingRequestWithHandle(FTargetingRequestHandle& TargetingHandle);
    void OverrideCollisionQueryTaskData(FTargetingRequestHandle TargetingHandle, const FCollisionQueryTaskData& CollisionQueryDataOverride);
    FTargetingSourceContext GetTargetingSourceContext(FTargetingRequestHandle TargetingHandle);
    void GetTargetingResultsActors(FTargetingRequestHandle TargetingHandle, TArray<class AActor*>& Targets);
    void GetTargetingResults(FTargetingRequestHandle TargetingHandle, TArray<FHitResult>& OutTargets);
    void ExecuteTargetingRequest(const class UTargetingPreset* TargetingPreset, const FTargetingSourceContext& InSourceContext, FExecuteTargetingRequestCompletionDynamicDelegate CompletionDynamicDelegate);
}; // Size: 0x78

class UTargetingTask : public UObject
{

    class UTargetingSubsystem* GetTargetingSubsystem(const FTargetingRequestHandle& TargetingHandle);
}; // Size: 0x28

#endif
