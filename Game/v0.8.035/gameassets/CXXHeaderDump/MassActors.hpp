#ifndef UE4SS_SDK_MassActors_HPP
#define UE4SS_SDK_MassActors_HPP

#include "MassActors_enums.hpp"

struct FCapsuleComponentWrapperFragment : public FObjectWrapperFragment
{
}; // Size: 0x8

struct FCharacterMovementComponentWrapperFragment : public FObjectWrapperFragment
{
}; // Size: 0x8

struct FDataFragment_BehaviorTreeComponentWrapper : public FObjectWrapperFragment
{
}; // Size: 0x8

struct FMassActorFragment : public FObjectWrapperFragment
{
    TWeakObjectPtr<class AActor> Actor;                                               // 0x0000 (size: 0x8)

}; // Size: 0xC

struct FMassActorInstanceFragment : public FMassFragment
{
    FActorInstanceHandle Handle;                                                      // 0x0000 (size: 0x20)

}; // Size: 0x20

struct FMassActorSpawnRequest
{
    TSubclassOf<class AActor> Template;                                               // 0x0008 (size: 0x8)
    class AActor* SpawnedActor;                                                       // 0x00A0 (size: 0x8)

}; // Size: 0xD0

struct FMassActorSpawnRequestHandle : public FIndexedHandleBase
{
}; // Size: 0x8

struct FMassAgentInitializationQueue
{
    TArray<class UMassAgentComponent*> AgentComponents;                               // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMassCapsuleTransformCopyToActorTag : public FMassTag
{
}; // Size: 0x1

struct FMassCapsuleTransformCopyToMassTag : public FMassTag
{
}; // Size: 0x1

struct FMassCharacterMovementCopyToActorTag : public FMassTag
{
}; // Size: 0x1

struct FMassCharacterMovementCopyToMassTag : public FMassTag
{
}; // Size: 0x1

struct FMassCharacterOrientationCopyToActorTag : public FMassTag
{
}; // Size: 0x1

struct FMassCharacterOrientationCopyToMassTag : public FMassTag
{
}; // Size: 0x1

struct FMassGuidFragment : public FObjectWrapperFragment
{
}; // Size: 0x10

struct FMassSceneComponentLocationCopyToActorTag : public FMassTag
{
}; // Size: 0x1

struct FMassSceneComponentLocationCopyToMassTag : public FMassTag
{
}; // Size: 0x1

struct FMassSceneComponentWrapperFragment : public FObjectWrapperFragment
{
}; // Size: 0x8

class IMassActorPoolableInterface : public IInterface
{

    void PrepareForPooling();
    void PrepareForGame();
    bool CanBePooled();
}; // Size: 0x28

class UMassActorSpawnerSubsystem : public UMassSubsystemBase
{
    TArray<FInstancedStruct> SpawnRequests;                                           // 0x0038 (size: 0x10)
    TArray<class AActor*> ActorsToDestroy;                                            // 0x0048 (size: 0x10)
    TArray<class AActor*> DeactivatedActorsToDestroy;                                 // 0x0058 (size: 0x10)

}; // Size: 0xF0

class UMassActorSubsystem : public UMassSubsystemBase
{
}; // Size: 0x48

class UMassAgentCapsuleCollisionSyncTrait : public UMassAgentSyncTrait
{
    bool bSyncTransform;                                                              // 0x0030 (size: 0x1)

}; // Size: 0x38

class UMassAgentComponent : public UActorComponent
{
    FMassEntityConfig EntityConfig;                                                   // 0x0140 (size: 0x30)
    FMassNetworkID NetID;                                                             // 0x019C (size: 0x4)

    void OnRep_NetID();
    void KillEntity(const bool bDestroyActor);
    void Enable();
    void Disable();
}; // Size: 0x1A0

class UMassAgentFeetLocationSyncTrait : public UMassAgentSyncTrait
{
}; // Size: 0x30

class UMassAgentMovementSyncTrait : public UMassAgentSyncTrait
{
}; // Size: 0x30

class UMassAgentOrientationSyncTrait : public UMassAgentSyncTrait
{
}; // Size: 0x30

class UMassAgentSubsystem : public UMassSubsystemBase
{
    class UMassSpawnerSubsystem* SpawnerSystem;                                       // 0x0048 (size: 0x8)
    class UMassSimulationSubsystem* SimulationSystem;                                 // 0x0050 (size: 0x8)
    TMap<class FMassEntityTemplateID, class FMassAgentInitializationQueue> PendingAgentEntities; // 0x0058 (size: 0x50)
    TMap<class FMassEntityTemplateID, class FMassAgentInitializationQueue> PendingPuppets; // 0x00A8 (size: 0x50)
    class UMassReplicationSubsystem* ReplicationSubsystem;                            // 0x00F8 (size: 0x8)
    TMap<class FMassNetworkID, class UMassAgentComponent*> ReplicatedAgentComponents; // 0x0100 (size: 0x50)

}; // Size: 0x180

class UMassAgentSyncTrait : public UMassEntityTraitBase
{
    EMassTranslationDirection SyncDirection;                                          // 0x0028 (size: 0x1)

}; // Size: 0x30

class UMassCapsuleTransformToMassTranslator : public UMassTranslator
{
}; // Size: 0x3F0

class UMassCharacterMovementToActorTranslator : public UMassTranslator
{
}; // Size: 0x3F0

class UMassCharacterMovementToMassTranslator : public UMassTranslator
{
}; // Size: 0x3F0

class UMassCharacterOrientationToActorTranslator : public UMassTranslator
{
}; // Size: 0x3F0

class UMassCharacterOrientationToMassTranslator : public UMassTranslator
{
}; // Size: 0x3F0

class UMassSceneComponentLocationToActorTranslator : public UMassTranslator
{
}; // Size: 0x3F0

class UMassSceneComponentLocationToMassTranslator : public UMassTranslator
{
}; // Size: 0x3F0

class UMassTransformToActorCapsuleTranslator : public UMassTranslator
{
}; // Size: 0x3F0

class UMassTranslator_BehaviorTree : public UMassTranslator
{
}; // Size: 0x3F0

#endif
