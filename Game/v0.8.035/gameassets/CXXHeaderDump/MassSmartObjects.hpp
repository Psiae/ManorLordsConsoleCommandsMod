#ifndef UE4SS_SDK_MassSmartObjects_HPP
#define UE4SS_SDK_MassSmartObjects_HPP

#include "MassSmartObjects_enums.hpp"

struct FMassInActiveSmartObjectsRangeTag : public FMassTag
{
}; // Size: 0x1

struct FMassSmartObjectCandidateSlots
{
    uint8 NumSlots;                                                                   // 0x0080 (size: 0x1)

}; // Size: 0x88

struct FMassSmartObjectCompletedRequestTag : public FMassTag
{
}; // Size: 0x1

struct FMassSmartObjectLaneLocationRequestFragment : public FMassFragment
{
    FMassEntityHandle RequestingEntity;                                               // 0x0010 (size: 0x8)
    FGameplayTagContainer UserTags;                                                   // 0x0018 (size: 0x20)
    FGameplayTagQuery ActivityRequirements;                                           // 0x0038 (size: 0x48)

}; // Size: 0x80

struct FMassSmartObjectRequestID
{
    FMassEntityHandle Entity;                                                         // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FMassSmartObjectRequestResultFragment : public FMassFragment
{
    FMassSmartObjectCandidateSlots Candidates;                                        // 0x0000 (size: 0x88)
    bool bProcessed;                                                                  // 0x0088 (size: 0x1)

}; // Size: 0x90

struct FMassSmartObjectTimedBehaviorFragment : public FMassFragment
{
    float UseTime;                                                                    // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FMassSmartObjectUserFragment : public FMassFragment
{
    FGameplayTagContainer UserTags;                                                   // 0x0000 (size: 0x20)
    FSmartObjectClaimHandle InteractionHandle;                                        // 0x0020 (size: 0x20)
    EMassSmartObjectInteractionStatus InteractionStatus;                              // 0x0040 (size: 0x1)
    double InteractionCooldownEndTime;                                                // 0x0048 (size: 0x8)

}; // Size: 0x50

struct FMassSmartObjectWorldLocationRequestFragment : public FMassFragment
{
    FVector SearchOrigin;                                                             // 0x0000 (size: 0x18)
    FMassEntityHandle RequestingEntity;                                               // 0x0018 (size: 0x8)
    FGameplayTagContainer UserTags;                                                   // 0x0020 (size: 0x20)
    FGameplayTagQuery ActivityRequirements;                                           // 0x0040 (size: 0x48)

}; // Size: 0x88

struct FSmartObjectAnnotationData
{
    FZoneGraphDataHandle DataHandle;                                                  // 0x0000 (size: 0x4)
    TArray<int32> AffectedLanes;                                                      // 0x0008 (size: 0x10)
    TArray<FSmartObjectLaneLocation> SmartObjectLaneLocations;                        // 0x0018 (size: 0x10)
    TMap<FSmartObjectHandle, int32> SmartObjectToLaneLocationIndexLookup;             // 0x0028 (size: 0x50)
    TMap<int32, FSmartObjectLaneLocationIndices> LaneToLaneLocationIndicesLookup;     // 0x0078 (size: 0x50)

}; // Size: 0xD0

struct FSmartObjectCandidateSlot
{
    FSmartObjectRequestResult Result;                                                 // 0x0000 (size: 0x18)
    float cost;                                                                       // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FSmartObjectLaneLocation
{
    FSmartObjectHandle ObjectHandle;                                                  // 0x0000 (size: 0x8)
    int32 LaneIndex;                                                                  // 0x0008 (size: 0x4)
    float DistanceAlongLane;                                                          // 0x000C (size: 0x4)

}; // Size: 0x10

struct FSmartObjectLaneLocationIndices
{
    TArray<int32> SmartObjectLaneLocationIndices;                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FSmartObjectMassEntityUserData
{
    FMassEntityHandle UserEntity;                                                     // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FSmartObjectRegistrationFragment : public FMassFragment
{
    TWeakObjectPtr<class USmartObjectDefinition> Asset;                               // 0x0000 (size: 0x8)
    FSmartObjectHandle Handle;                                                        // 0x0008 (size: 0x8)

}; // Size: 0x10

class UMassActiveSmartObjectDeinitializer : public UMassSmartObjectDeinitializerBase
{
}; // Size: 0x400

class UMassActiveSmartObjectInitializer : public UMassSmartObjectInitializerBase
{
}; // Size: 0x400

class UMassActiveSmartObjectSignalProcessor : public UMassSignalProcessorBase
{
}; // Size: 0xAD0

class UMassActorInstanceHandleDeinitializer : public UMassSmartObjectDeinitializerBase
{
}; // Size: 0x400

class UMassActorInstanceHandleInitializer : public UMassSmartObjectInitializerBase
{
}; // Size: 0x400

class UMassSmartObjectCandidatesFinderProcessor : public UMassProcessor
{
    float SearchExtents;                                                              // 0x00B0 (size: 0x4)

}; // Size: 0x700

class UMassSmartObjectDeinitializerBase : public UMassObserverProcessor
{
}; // Size: 0x400

class UMassSmartObjectInitializerBase : public UMassObserverProcessor
{
}; // Size: 0x400

class UMassSmartObjectSettings : public UMassModuleSettings
{
    FZoneGraphTag SmartObjectTag;                                                     // 0x0028 (size: 0x1)
    float SearchExtents;                                                              // 0x002C (size: 0x4)

}; // Size: 0x30

class UMassSmartObjectTimedBehaviorProcessor : public UMassProcessor
{
}; // Size: 0x3D0

class UMassSmartObjectUserFragmentDeinitializer : public UMassObserverProcessor
{
}; // Size: 0x3F0

class UMassSmartObjectUserTrait : public UMassEntityTraitBase
{
    FGameplayTagContainer UserTags;                                                   // 0x0028 (size: 0x20)

}; // Size: 0x48

class USmartObjectMassBehaviorDefinition : public USmartObjectBehaviorDefinition
{
    float UseTime;                                                                    // 0x0028 (size: 0x4)

}; // Size: 0x30

class USmartObjectZoneAnnotations : public UZoneGraphAnnotationComponent
{
    FZoneGraphTagFilter AffectedLaneTags;                                             // 0x0558 (size: 0xC)
    TArray<FSmartObjectAnnotationData> SmartObjectAnnotationDataArray;                // 0x0568 (size: 0x10)
    FZoneGraphTag BehaviorTag;                                                        // 0x0578 (size: 0x1)
    class USmartObjectSubsystem* SmartObjectSubsystem;                                // 0x0580 (size: 0x8)

}; // Size: 0x590

#endif
