#ifndef UE4SS_SDK_SmartObjectsModule_HPP
#define UE4SS_SDK_SmartObjectsModule_HPP

#include "SmartObjectsModule_enums.hpp"

struct FSmartObjectActorOwnerData
{
    FActorInstanceHandle Handle;                                                      // 0x0000 (size: 0x20)

}; // Size: 0x20

struct FSmartObjectActorUserData
{
    TWeakObjectPtr<class AActor> UserActor;                                           // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FSmartObjectAnnotation_SlotUserCollision : public FSmartObjectSlotAnnotation
{
    bool bUseUserCapsuleSize;                                                         // 0x0008 (size: 0x1)
    FSmartObjectUserCapsuleParams Capsule;                                            // 0x000C (size: 0xC)

}; // Size: 0x18

struct FSmartObjectClaimHandle
{
    FSmartObjectHandle SmartObjectHandle;                                             // 0x0000 (size: 0x8)
    FSmartObjectSlotHandle SlotHandle;                                                // 0x0008 (size: 0x10)
    FSmartObjectUserHandle UserHandle;                                                // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FSmartObjectCollectionEntry
{
    FGameplayTagContainer Tags;                                                       // 0x0000 (size: 0x20)
    FSoftObjectPath Path;                                                             // 0x0020 (size: 0x20)
    FTransform Transform;                                                             // 0x0040 (size: 0x60)
    FBox Bounds;                                                                      // 0x00A0 (size: 0x38)
    FSmartObjectHandle Handle;                                                        // 0x00D8 (size: 0x8)
    uint32 DefinitionIdx;                                                             // 0x00E0 (size: 0x4)

}; // Size: 0xF0

struct FSmartObjectComponentInstanceData : public FActorComponentInstanceData
{
    FSmartObjectDefinitionReference SmartObjectDefinitionRef;                         // 0x0068 (size: 0x28)

}; // Size: 0x90

struct FSmartObjectContainer
{
    FBox Bounds;                                                                      // 0x0000 (size: 0x38)
    TArray<FSmartObjectCollectionEntry> CollectionEntries;                            // 0x0038 (size: 0x10)
    TMap<class FSmartObjectHandle, class FSoftObjectPath> RegisteredIdToObjectMap;    // 0x0048 (size: 0x50)
    TArray<class USmartObjectDefinition*> Definitions;                                // 0x0098 (size: 0x10)
    class UObject* Owner;                                                             // 0x00A8 (size: 0x8)

}; // Size: 0xB0

struct FSmartObjectDefinitionData
{
}; // Size: 0x8

struct FSmartObjectDefinitionDataHandle
{
    uint16 SlotIndex;                                                                 // 0x0000 (size: 0x2)
    uint16 DataIndex;                                                                 // 0x0002 (size: 0x2)

}; // Size: 0x4

struct FSmartObjectDefinitionDataProxy
{
    FInstancedStruct Data;                                                            // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FSmartObjectDefinitionPreviewData
{
    TSoftClassPtr<AActor> ObjectActorClass;                                           // 0x0000 (size: 0x28)
    FSoftObjectPath ObjectMeshPath;                                                   // 0x0028 (size: 0x20)
    TSoftClassPtr<AActor> UserActorClass;                                             // 0x0048 (size: 0x28)
    TSoftClassPtr<USmartObjectSlotValidationFilter> UserValidationFilterClass;        // 0x0070 (size: 0x28)

}; // Size: 0x98

struct FSmartObjectDefinitionPropertyBinding
{
    FPropertyBindingPath SourcePath;                                                  // 0x0000 (size: 0x10)
    FPropertyBindingPath TargetPath;                                                  // 0x0010 (size: 0x10)
    FSmartObjectDefinitionDataHandle SourceDataHandle;                                // 0x0020 (size: 0x4)
    FSmartObjectDefinitionDataHandle TargetDataHandle;                                // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FSmartObjectDefinitionReference
{
    class USmartObjectDefinition* SmartObjectDefinition;                              // 0x0000 (size: 0x8)
    FInstancedPropertyBag Parameters;                                                 // 0x0008 (size: 0x10)
    TArray<FGuid> PropertyOverrides;                                                  // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FSmartObjectEventData
{
    FSmartObjectHandle SmartObjectHandle;                                             // 0x0000 (size: 0x8)
    FSmartObjectSlotHandle SlotHandle;                                                // 0x0008 (size: 0x10)
    ESmartObjectChangeReason Reason;                                                  // 0x0018 (size: 0x1)
    FGameplayTag Tag;                                                                 // 0x001C (size: 0x8)

}; // Size: 0x38

struct FSmartObjectHandle
{
    uint64 ID;                                                                        // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FSmartObjectHashGridEntryData : public FSmartObjectSpatialEntryData
{
}; // Size: 0xC

struct FSmartObjectOctreeEntryData : public FSmartObjectSpatialEntryData
{
}; // Size: 0x10

struct FSmartObjectRequest
{
    FBox QueryBox;                                                                    // 0x0000 (size: 0x38)
    FSmartObjectRequestFilter Filter;                                                 // 0x0040 (size: 0xD0)

}; // Size: 0x110

struct FSmartObjectRequestFilter
{
    FGameplayTagContainer UserTags;                                                   // 0x0000 (size: 0x20)
    ESmartObjectClaimPriority ClaimPriority;                                          // 0x0020 (size: 0x1)
    FGameplayTagQuery ActivityRequirements;                                           // 0x0028 (size: 0x48)
    TArray<class TSubclassOf<USmartObjectBehaviorDefinition>> BehaviorDefinitionClasses; // 0x0070 (size: 0x10)
    bool bShouldEvaluateConditions;                                                   // 0x0080 (size: 0x1)
    bool bShouldIncludeClaimedSlots;                                                  // 0x0081 (size: 0x1)
    bool bShouldIncludeDisabledSlots;                                                 // 0x0082 (size: 0x1)

}; // Size: 0xD0

struct FSmartObjectRequestResult
{
    FSmartObjectHandle SmartObjectHandle;                                             // 0x0000 (size: 0x8)
    FSmartObjectSlotHandle SlotHandle;                                                // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FSmartObjectRuntime
{
    FWorldConditionQueryState PreconditionState;                                      // 0x0000 (size: 0x30)
    TArray<FSmartObjectRuntimeSlot> Slots;                                            // 0x0030 (size: 0x10)
    class USmartObjectDefinition* Definition;                                         // 0x0040 (size: 0x8)
    TWeakObjectPtr<class USmartObjectComponent> OwnerComponent;                       // 0x0048 (size: 0x8)
    FTransform Transform;                                                             // 0x0060 (size: 0x60)
    FGameplayTagContainer Tags;                                                       // 0x00C0 (size: 0x20)
    FSmartObjectHandle RegisteredHandle;                                              // 0x0108 (size: 0x8)
    FInstancedStruct SpatialEntryData;                                                // 0x0110 (size: 0x10)
    uint16 DisableFlags;                                                              // 0x0120 (size: 0x2)

}; // Size: 0x130

struct FSmartObjectRuntimeSlot
{
    FVector3f Offset;                                                                 // 0x0000 (size: 0xC)
    FRotator3f Rotation;                                                              // 0x000C (size: 0xC)
    FGameplayTagContainer Tags;                                                       // 0x0018 (size: 0x20)
    FSmartObjectUserHandle User;                                                      // 0x0068 (size: 0x4)
    FWorldConditionQueryState PreconditionState;                                      // 0x0070 (size: 0x30)
    ESmartObjectSlotState State;                                                      // 0x00A0 (size: 0x1)
    ESmartObjectClaimPriority ClaimedPriority;                                        // 0x00A1 (size: 0x1)
    uint8 bSlotEnabled;                                                               // 0x00A2 (size: 0x1)
    uint8 bObjectEnabled;                                                             // 0x00A2 (size: 0x1)

}; // Size: 0xA8

struct FSmartObjectSlotAnnotation : public FSmartObjectDefinitionData
{
}; // Size: 0x8

struct FSmartObjectSlotDefinition
{
    FVector3f Offset;                                                                 // 0x0000 (size: 0xC)
    FRotator3f Rotation;                                                              // 0x000C (size: 0xC)
    bool bEnabled;                                                                    // 0x0018 (size: 0x1)
    FGameplayTagQuery UserTagFilter;                                                  // 0x0020 (size: 0x48)
    FGameplayTagContainer ActivityTags;                                               // 0x0068 (size: 0x20)
    FGameplayTagContainer RuntimeTags;                                                // 0x0088 (size: 0x20)
    FWorldConditionQueryDefinition SelectionPreconditions;                            // 0x00A8 (size: 0x18)
    TArray<class USmartObjectBehaviorDefinition*> BehaviorDefinitions;                // 0x00C0 (size: 0x10)
    TArray<FSmartObjectDefinitionDataProxy> DefinitionData;                           // 0x00D0 (size: 0x10)

}; // Size: 0xE0

struct FSmartObjectSlotEntranceAnnotation : public FSmartObjectSlotAnnotation
{
    FVector3f Offset;                                                                 // 0x0008 (size: 0xC)
    FRotator3f Rotation;                                                              // 0x0014 (size: 0xC)
    FGameplayTagContainer Tags;                                                       // 0x0020 (size: 0x20)
    uint8 bIsEntry;                                                                   // 0x0040 (size: 0x1)
    uint8 bIsExit;                                                                    // 0x0040 (size: 0x1)
    uint8 bTraceGroundLocation;                                                       // 0x0040 (size: 0x1)
    uint8 bCheckTransitionTrajectory;                                                 // 0x0040 (size: 0x1)
    ESmartObjectEntrancePriority SelectionPriority;                                   // 0x0041 (size: 0x1)
    float TrajectoryStartHeightOffset;                                                // 0x0044 (size: 0x4)
    float TrajectorySlotHeightOffset;                                                 // 0x0048 (size: 0x4)
    float TransitionCheckRadius;                                                      // 0x004C (size: 0x4)

}; // Size: 0x50

struct FSmartObjectSlotEntranceHandle
{
    FSmartObjectSlotHandle SlotHandle;                                                // 0x0000 (size: 0x10)

}; // Size: 0x18

struct FSmartObjectSlotEntranceLocationRequest
{
    class AActor* UserActor;                                                          // 0x0000 (size: 0x8)
    TSubclassOf<class USmartObjectSlotValidationFilter> ValidationFilter;             // 0x0008 (size: 0x8)
    class ANavigationData* NavigationData;                                            // 0x0010 (size: 0x8)
    FSmartObjectUserCapsuleParams UserCapsuleParams;                                  // 0x0018 (size: 0xC)
    FVector SearchLocation;                                                           // 0x0028 (size: 0x18)
    FSmartObjectSlotEntrySelectionMethod SelectMethod;                                // 0x0040 (size: 0x1)
    ESmartObjectSlotNavigationLocationType LocationType;                              // 0x0041 (size: 0x1)
    bool bProjectNavigationLocation;                                                  // 0x0042 (size: 0x1)
    bool bTraceGroundLocation;                                                        // 0x0043 (size: 0x1)
    bool bCheckTransitionTrajectory;                                                  // 0x0044 (size: 0x1)
    bool bCheckEntranceLocationOverlap;                                               // 0x0045 (size: 0x1)
    bool bCheckSlotLocationOverlap;                                                   // 0x0046 (size: 0x1)
    bool bUseSlotLocationAsFallback;                                                  // 0x0047 (size: 0x1)

}; // Size: 0x58

struct FSmartObjectSlotEntranceLocationResult
{
    FVector Location;                                                                 // 0x0000 (size: 0x18)
    FRotator Rotation;                                                                // 0x0018 (size: 0x18)
    FGameplayTag Tag;                                                                 // 0x0038 (size: 0x8)
    FGameplayTagContainer Tags;                                                       // 0x0040 (size: 0x20)
    FSmartObjectSlotEntranceHandle EntranceHandle;                                    // 0x0060 (size: 0x18)
    bool bIsValid;                                                                    // 0x0078 (size: 0x1)

}; // Size: 0x80

struct FSmartObjectSlotHandle
{
}; // Size: 0x10

struct FSmartObjectSlotIndex
{
    int32 Index;                                                                      // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FSmartObjectSlotLinkAnnotation : public FSmartObjectSlotAnnotation
{
    FGameplayTag Tag;                                                                 // 0x0008 (size: 0x8)
    FSmartObjectSlotReference LinkedSlot;                                             // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FSmartObjectSlotReference
{
    uint8 Index;                                                                      // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FSmartObjectSlotStateData
{
}; // Size: 0x1

struct FSmartObjectSlotTransform : public FSmartObjectSlotStateData
{
    FTransform Transform;                                                             // 0x0000 (size: 0x60)

}; // Size: 0x60

struct FSmartObjectSlotValidationParams
{
    TSubclassOf<class UNavigationQueryFilter> NavigationFilter;                       // 0x0000 (size: 0x8)
    FVector SearchExtents;                                                            // 0x0008 (size: 0x18)
    FSmartObjectTraceParams GroundTraceParameters;                                    // 0x0020 (size: 0x28)
    FSmartObjectTraceParams TransitionTraceParameters;                                // 0x0048 (size: 0x28)
    bool bUseNavigationCapsuleSize;                                                   // 0x0070 (size: 0x1)
    FSmartObjectUserCapsuleParams UserCapsule;                                        // 0x0074 (size: 0xC)

}; // Size: 0x80

struct FSmartObjectSlotView
{
}; // Size: 0x20

struct FSmartObjectSpatialEntryData
{
}; // Size: 0x1

struct FSmartObjectTraceParams
{
    ESmartObjectTraceType Type;                                                       // 0x0000 (size: 0x1)
    TEnumAsByte<ETraceTypeQuery> TraceChannel;                                        // 0x0001 (size: 0x1)
    TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes;                                // 0x0008 (size: 0x10)
    FCollisionProfileName CollisionProfile;                                           // 0x0018 (size: 0x8)
    bool bTraceComplex;                                                               // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FSmartObjectUserCapsuleParams
{
    float Radius;                                                                     // 0x0000 (size: 0x4)
    float Height;                                                                     // 0x0004 (size: 0x4)
    float StepHeight;                                                                 // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FSmartObjectUserHandle
{
    uint32 ID;                                                                        // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FSmartObjectWorldConditionBase : public FWorldConditionBase
{
}; // Size: 0x10

struct FSmartObjectWorldConditionObjectTagQuery : public FSmartObjectWorldConditionBase
{
    FGameplayTagQuery TagQuery;                                                       // 0x0028 (size: 0x48)

}; // Size: 0x70

struct FSmartObjectWorldConditionObjectTagQueryState
{
}; // Size: 0x8

struct FSmartObjectWorldConditionSlotTagQuery : public FSmartObjectWorldConditionBase
{
    FGameplayTagQuery TagQuery;                                                       // 0x0028 (size: 0x48)

}; // Size: 0x70

struct FSmartObjectWorldConditionSlotTagQueryState
{
}; // Size: 0x18

struct FWorldCondition_SmartObjectActorTagQuery : public FSmartObjectWorldConditionBase
{
    FGameplayTagQuery TagQuery;                                                       // 0x0020 (size: 0x48)

}; // Size: 0x68

struct FWorldCondition_SmartObjectActorTagQueryState
{
}; // Size: 0x8

class ADEPRECATED_SmartObjectCollection : public AActor
{
    FBox Bounds;                                                                      // 0x02A8 (size: 0x38)
    TArray<FSmartObjectCollectionEntry> CollectionEntries;                            // 0x02E0 (size: 0x10)
    TMap<class FSmartObjectHandle, class FSoftObjectPath> RegisteredIdToObjectMap;    // 0x02F0 (size: 0x50)
    TArray<class USmartObjectDefinition*> Definitions;                                // 0x0340 (size: 0x10)

}; // Size: 0x358

class AGenericSmartObject : public AActor
{
    class USmartObjectComponent* SOComponent;                                         // 0x02A8 (size: 0x8)

}; // Size: 0x2B0

class ASmartObjectPersistentCollection : public AActor
{
    FSmartObjectContainer SmartObjectContainer;                                       // 0x02A8 (size: 0xB0)

}; // Size: 0x360

class ASmartObjectSubsystemRenderingActor : public AActor
{
    class USmartObjectSubsystemRenderingComponent* RenderingComponent;                // 0x02A8 (size: 0x8)

}; // Size: 0x2B0

class ASmartObjectTestingActor : public AActor
{
    TArray<class USmartObjectTest*> Tests;                                            // 0x02A8 (size: 0x10)
    class USmartObjectTestRenderingComponent* RenderingComponent;                     // 0x02B8 (size: 0x8)
    class USmartObjectSubsystem* SmartObjectSubsystem;                                // 0x02C0 (size: 0x8)
    bool bRunTestsEachFrame;                                                          // 0x02C8 (size: 0x1)

    void RunTests();
    void ResetTests();
}; // Size: 0x2D0

class UBlackboardKeyType_SOClaimHandle : public UBlackboardKeyType
{
    FSmartObjectClaimHandle Handle;                                                   // 0x0030 (size: 0x20)

}; // Size: 0x50

class UEnvQueryGenerator_SmartObjects : public UEnvQueryGenerator
{
    TSubclassOf<class UEnvQueryContext> QueryOriginContext;                           // 0x0050 (size: 0x8)
    FSmartObjectRequestFilter SmartObjectRequestFilter;                               // 0x0060 (size: 0xD0)
    FVector QueryBoxExtent;                                                           // 0x0130 (size: 0x18)
    bool bOnlyClaimable;                                                              // 0x0148 (size: 0x1)

}; // Size: 0x150

class UEnvQueryItemType_SmartObject : public UEnvQueryItemType_VectorBase
{
}; // Size: 0x30

class USmartObjectBehaviorDefinition : public UObject
{
}; // Size: 0x28

class USmartObjectBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

    FSmartObjectClaimHandle SmartObjectClaimHandle_Invalid();
    void SetValueAsSOClaimHandle(class UBlackboardComponent* BlackboardComponent, const FName& KeyName, FSmartObjectClaimHandle Value);
    bool SetSmartObjectEnabled(class AActor* SmartObjectActor, const bool bEnabled);
    bool SetMultipleSmartObjectsEnabled(const TArray<class AActor*>& SmartObjectActors, const bool bEnabled);
    void SetBlackboardValueAsSOClaimHandle(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key, const FSmartObjectClaimHandle& Value);
    bool RemoveSmartObject(class AActor* SmartObjectActor);
    bool RemoveMultipleSmartObjects(const TArray<class AActor*>& SmartObjectActors);
    bool NotEqual_SmartObjectSlotHandleSmartObjectSlotHandle(const FSmartObjectSlotHandle& A, const FSmartObjectSlotHandle& B);
    bool NotEqual_SmartObjectHandleSmartObjectHandle(const FSmartObjectHandle& A, const FSmartObjectHandle& B);
    class USmartObjectBehaviorDefinition* MarkSmartObjectSlotAsOccupied(class UObject* WorldContextObject, const FSmartObjectClaimHandle ClaimHandle, TSubclassOf<class USmartObjectBehaviorDefinition> DefinitionClass);
    bool MarkSmartObjectSlotAsFree(class UObject* WorldContextObject, const FSmartObjectClaimHandle ClaimHandle);
    FSmartObjectClaimHandle MarkSmartObjectSlotAsClaimed(class UObject* WorldContextObject, const FSmartObjectSlotHandle SlotHandle, const class AActor* UserActor, ESmartObjectClaimPriority ClaimPriority);
    bool IsValidSmartObjectSlotHandle(const FSmartObjectSlotHandle& Handle);
    bool IsValidSmartObjectHandle(const FSmartObjectHandle& Handle);
    bool IsValidSmartObjectClaimHandle(const FSmartObjectClaimHandle Handle);
    FSmartObjectClaimHandle GetValueAsSOClaimHandle(class UBlackboardComponent* BlackboardComponent, const FName& KeyName);
    FSmartObjectClaimHandle GetBlackboardValueAsSOClaimHandle(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    bool FindSmartObjectsInTargetingRequest(class UObject* WorldContextObject, const FSmartObjectRequestFilter& Filter, const FTargetingRequestHandle TargetingHandle, TArray<FSmartObjectRequestResult>& OutResults, const class AActor* UserActor);
    bool FindSmartObjectsInList(class UObject* WorldContextObject, const FSmartObjectRequestFilter& Filter, const TArray<class AActor*>& ActorList, TArray<FSmartObjectRequestResult>& OutResults, const class AActor* UserActor);
    bool FindSmartObjectsInComponent(const FSmartObjectRequestFilter& Filter, class USmartObjectComponent* SmartObjectComponent, TArray<FSmartObjectRequestResult>& OutResults, const class AActor* UserActor);
    bool FindSmartObjectsInActor(const FSmartObjectRequestFilter& Filter, class AActor* SearchActor, TArray<FSmartObjectRequestResult>& OutResults, const class AActor* UserActor);
    bool Equal_SmartObjectSlotHandleSmartObjectSlotHandle(const FSmartObjectSlotHandle& A, const FSmartObjectSlotHandle& B);
    bool Equal_SmartObjectHandleSmartObjectHandle(const FSmartObjectHandle& A, const FSmartObjectHandle& B);
    FString Conv_SmartObjectSlotHandleToString(const FSmartObjectSlotHandle& Handle);
    FString Conv_SmartObjectRequestResultToString(const FSmartObjectRequestResult& Result);
    FString Conv_SmartObjectHandleToString(const FSmartObjectHandle& Handle);
    FString Conv_SmartObjectDefinitionToString(const class USmartObjectDefinition* Definition);
    FString Conv_SmartObjectClaimHandleToString(const FSmartObjectClaimHandle& Result);
    bool AddSmartObject(class AActor* SmartObjectActor);
    bool AddOrRemoveSmartObject(class AActor* SmartObject, const bool bEnabled);
    bool AddOrRemoveMultipleSmartObjects(const TArray<class AActor*>& SmartObjectActors, const bool bAdd);
    bool AddMultipleSmartObjects(const TArray<class AActor*>& SmartObjectActors);
}; // Size: 0x28

class USmartObjectComponent : public USceneComponent
{
    FSmartObjectComponentOnSmartObjectEvent OnSmartObjectEvent;                       // 0x0230 (size: 0x10)
    void SmartObjectComponentEventSignature(const FSmartObjectEventData& EventData, const class AActor* Interactor);
    FSmartObjectDefinitionReference DefinitionRef;                                    // 0x0258 (size: 0x28)
    FSmartObjectHandle RegisteredHandle;                                              // 0x0280 (size: 0x8)
    bool bCanBePartOfCollection;                                                      // 0x0298 (size: 0x1)
    class USmartObjectDefinition* CachedDefinitionAssetVariation;                     // 0x02A0 (size: 0x8)

    bool SetSmartObjectEnabledForReason(FGameplayTag ReasonTag, const bool bEnabled);
    bool SetSmartObjectEnabled(const bool bEnable);
    void SetDefinition(class USmartObjectDefinition* DefinitionAsset);
    void ReceiveOnEvent(const FSmartObjectEventData& EventData, const class AActor* Interactor);
    bool IsSmartObjectEnabledForReason(FGameplayTag ReasonTag);
    bool IsSmartObjectEnabled();
    bool IsBoundToSimulation();
    class USmartObjectDefinition* GetDefinition();
}; // Size: 0x2B0

class USmartObjectContainerRenderingComponent : public UPrimitiveComponent
{
}; // Size: 0x4F0

class USmartObjectDebugRenderingComponent : public UDebugDrawComponent
{
}; // Size: 0x540

class USmartObjectDefinition : public UDataAsset
{
    FInstancedPropertyBag Parameters;                                                 // 0x0040 (size: 0x10)
    FGuid ParametersID;                                                               // 0x0050 (size: 0x10)
    FGuid RootID;                                                                     // 0x0060 (size: 0x10)
    TArray<FSmartObjectDefinitionPropertyBinding> PropertyBindings;                   // 0x0070 (size: 0x10)
    TArray<FSmartObjectSlotDefinition> Slots;                                         // 0x0080 (size: 0x10)
    TArray<class USmartObjectBehaviorDefinition*> DefaultBehaviorDefinitions;         // 0x0090 (size: 0x10)
    FGameplayTagQuery UserTagFilter;                                                  // 0x00A0 (size: 0x48)
    FWorldConditionQueryDefinition Preconditions;                                     // 0x00E8 (size: 0x18)
    FGameplayTagContainer ActivityTags;                                               // 0x0100 (size: 0x20)
    TArray<FSmartObjectDefinitionDataProxy> DefinitionData;                           // 0x0120 (size: 0x10)
    TSubclassOf<class USmartObjectWorldConditionSchema> WorldConditionSchemaClass;    // 0x0130 (size: 0x8)
    ESmartObjectTagMergingPolicy ActivityTagsMergingPolicy;                           // 0x0138 (size: 0x1)
    ESmartObjectTagFilteringPolicy UserTagsFilteringPolicy;                           // 0x0139 (size: 0x1)

    void SetUserTagFilter(const FGameplayTagQuery& InUserTagFilter);
    TArray<FSmartObjectSlotDefinition> K2_GetSlots();
    bool IsValidSlotIndex(const int32 SlotIndex);
    ESmartObjectTagFilteringPolicy GetUserTagsFilteringPolicy();
    FGameplayTagQuery GetUserTagFilter();
    FTransform GetSlotWorldTransform(const int32 SlotIndex, const FTransform& OwnerTransform);
    void GetSlotActivityTags(const int32 SlotIndex, FGameplayTagContainer& OutActivityTags);
    FSmartObjectSlotDefinition GetMutableSlot(const int32 Index);
    FBox GetBounds();
    FGameplayTagContainer GetActivityTags();
}; // Size: 0x140

class USmartObjectHashGrid : public USmartObjectSpacePartition
{
}; // Size: 0xD0

class USmartObjectOctree : public USmartObjectSpacePartition
{
}; // Size: 0xF0

class USmartObjectRenderingComponent : public UPrimitiveComponent
{
}; // Size: 0x4F0

class USmartObjectSettings : public UDeveloperSettings
{
    ESmartObjectTagFilteringPolicy DefaultUserTagsFilteringPolicy;                    // 0x0038 (size: 0x1)
    ESmartObjectTagMergingPolicy DefaultActivityTagsMergingPolicy;                    // 0x0039 (size: 0x1)
    TSubclassOf<class USmartObjectWorldConditionSchema> DefaultWorldConditionSchemaClass; // 0x0040 (size: 0x8)
    bool bShouldExcludePreConditionsOnDedicatedClient;                                // 0x0048 (size: 0x1)

}; // Size: 0x50

class USmartObjectSimpleQueryTest : public USmartObjectTest
{
    FSmartObjectRequest request;                                                      // 0x0030 (size: 0x110)
    TArray<FSmartObjectRequestResult> Results;                                        // 0x0140 (size: 0x10)

}; // Size: 0x150

class USmartObjectSlotValidationFilter : public UObject
{
    FSmartObjectSlotValidationParams EntryParameters;                                 // 0x0028 (size: 0x80)
    bool bUseEntryParametersForExit;                                                  // 0x00A8 (size: 0x1)
    FSmartObjectSlotValidationParams ExitParameters;                                  // 0x00B0 (size: 0x80)

}; // Size: 0x130

class USmartObjectSpacePartition : public UObject
{
}; // Size: 0x28

class USmartObjectSubsystem : public UWorldSubsystem
{
    FSoftClassPath SpacePartitionClassName;                                           // 0x0030 (size: 0x20)
    TSubclassOf<class USmartObjectSpacePartition> SpacePartitionClass;                // 0x0050 (size: 0x8)
    class USmartObjectSpacePartition* SpacePartition;                                 // 0x0058 (size: 0x8)
    class ASmartObjectSubsystemRenderingActor* RenderingActor;                        // 0x0060 (size: 0x8)
    FSmartObjectContainer SmartObjectContainer;                                       // 0x0068 (size: 0xB0)
    TMap<class FSmartObjectHandle, class FSmartObjectRuntime> RuntimeSmartObjects;    // 0x0128 (size: 0x50)
    TArray<class USmartObjectComponent*> RegisteredSOComponents;                      // 0x0178 (size: 0x10)
    TArray<class USmartObjectComponent*> PendingSmartObjectRegistration;              // 0x0188 (size: 0x10)

    bool SetSlotEnabled(const FSmartObjectSlotHandle SlotHandle, const bool bEnabled);
    bool SetEnabledForReason(const FSmartObjectHandle Handle, FGameplayTag ReasonTag, const bool bEnabled);
    bool SetEnabled(const FSmartObjectHandle Handle, const bool bEnabled);
    bool RemoveTagFromSlot(const FSmartObjectSlotHandle SlotHandle, const FGameplayTag& Tag);
    void RemoveTagFromInstance(const FSmartObjectHandle Handle, const FGameplayTag& Tag);
    bool Release(const FSmartObjectClaimHandle& ClaimHandle);
    bool IsEnabledForReason(const FSmartObjectHandle Handle, FGameplayTag ReasonTag);
    bool IsEnabled(const FSmartObjectHandle Handle);
    class USmartObjectComponent* GetSmartObjectComponentByRequestResult(const FSmartObjectRequestResult& Result, ETrySpawnActorIfDehydrated TrySpawnActorIfDehydrated);
    class USmartObjectComponent* GetSmartObjectComponent(const FSmartObjectClaimHandle& ClaimHandle, ETrySpawnActorIfDehydrated TrySpawnActorIfDehydrated);
    bool GetSlotTransformFromRequestResult(const FSmartObjectRequestResult& RequestResult, FTransform& OutSlotTransform);
    bool GetSlotTransform(const FSmartObjectClaimHandle& ClaimHandle, FTransform& OutSlotTransform);
    FGameplayTagContainer GetSlotTags(const FSmartObjectSlotHandle SlotHandle);
    ESmartObjectSlotState GetSlotState(const FSmartObjectSlotHandle SlotHandle);
    bool GetSlotLocation(const FSmartObjectClaimHandle& ClaimHandle, FVector& OutSlotLocation);
    FGameplayTagContainer GetInstanceTags(const FSmartObjectHandle Handle);
    class USmartObjectBehaviorDefinition* GetBehaviorDefinitionByRequestResult(const FSmartObjectRequestResult& RequestResult, TSubclassOf<class USmartObjectBehaviorDefinition> DefinitionClass);
    class USmartObjectBehaviorDefinition* GetBehaviorDefinition(const FSmartObjectClaimHandle& ClaimHandle, TSubclassOf<class USmartObjectBehaviorDefinition> DefinitionClass);
    void GetAllSlots(const FSmartObjectHandle Handle, TArray<FSmartObjectSlotHandle>& OutSlots);
    bool FindSmartObjects_BP(const FSmartObjectRequest& request, TArray<FSmartObjectRequestResult>& OutResults, const class AActor* UserActor);
    bool FindSmartObjects(const FSmartObjectRequest& request, TArray<FSmartObjectRequestResult>& OutResults, const class AActor* UserActor);
    FSmartObjectRequestResult FindSmartObject(const FSmartObjectRequest& request, const class AActor* UserActor);
    void AddTagToSlot(const FSmartObjectSlotHandle SlotHandle, const FGameplayTag& Tag);
    void AddTagToInstance(const FSmartObjectHandle Handle, const FGameplayTag& Tag);
}; // Size: 0x1A0

class USmartObjectSubsystemRenderingComponent : public USmartObjectDebugRenderingComponent
{
}; // Size: 0x540

class USmartObjectTest : public UObject
{
    class ASmartObjectTestingActor* SmartObjectTestingActor;                          // 0x0028 (size: 0x8)

}; // Size: 0x30

class USmartObjectTestRenderingComponent : public USmartObjectDebugRenderingComponent
{
}; // Size: 0x540

class USmartObjectUserComponent : public UActorComponent
{
    TSubclassOf<class USmartObjectSlotValidationFilter> ValidationFilter;             // 0x00A0 (size: 0x8)

}; // Size: 0xA8

class USmartObjectWorldConditionSchema : public UWorldConditionSchema
{
}; // Size: 0x78

#endif
