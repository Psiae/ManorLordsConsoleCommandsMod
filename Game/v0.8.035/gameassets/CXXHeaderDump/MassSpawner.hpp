#ifndef UE4SS_SDK_MassSpawner_HPP
#define UE4SS_SDK_MassSpawner_HPP

#include "MassSpawner_enums.hpp"

struct FMassDuplicateElementsMessage
{
}; // Size: 0x1

struct FMassEntityConfig
{
    class UMassEntityConfigAsset* Parent;                                             // 0x0000 (size: 0x8)
    TArray<class UMassEntityTraitBase*> Traits;                                       // 0x0008 (size: 0x10)
    class UObject* ConfigOwner;                                                       // 0x0018 (size: 0x8)
    FGuid ConfigGuid;                                                                 // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FMassEntitySpawnDataGeneratorResult
{
    FInstancedStruct SpawnData;                                                       // 0x0000 (size: 0x10)
    TSubclassOf<class UMassProcessor> SpawnDataProcessor;                             // 0x0010 (size: 0x8)
    TArray<class TSubclassOf<UMassProcessor>> PostSpawnProcessors;                    // 0x0018 (size: 0x10)
    int32 EntityConfigIndex;                                                          // 0x0028 (size: 0x4)
    int32 NumEntities;                                                                // 0x002C (size: 0x4)

}; // Size: 0x30

struct FMassEntityTemplateData
{
}; // Size: 0x148

struct FMassEntityTemplateID
{
    FGuid ConfigGuid;                                                                 // 0x0000 (size: 0x10)
    uint32 FlavorHash;                                                                // 0x0010 (size: 0x4)
    uint64 TotalHash;                                                                 // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FMassMissingTraitMessage
{
}; // Size: 0x1

struct FMassSpawnDataGenerator
{
    TSubclassOf<class UMassEntitySpawnDataGeneratorBase> GeneratorClass;              // 0x0000 (size: 0x8)
    class UMassEntitySpawnDataGeneratorBase* GeneratorInstance;                       // 0x0008 (size: 0x8)
    float Proportion;                                                                 // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FMassSpawnedEntityType
{
    TSoftObjectPtr<UMassEntityConfigAsset> EntityConfig;                              // 0x0000 (size: 0x28)
    float Proportion;                                                                 // 0x0028 (size: 0x4)
    class UMassEntityConfigAsset* EntityConfigPtr;                                    // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FMassTransformsSpawnData
{
}; // Size: 0x18

struct FReplicationTemplateIDFragment : public FMassFragment
{
    FMassEntityTemplateID ID;                                                         // 0x0000 (size: 0x20)

}; // Size: 0x20

class AMassSpawner : public AActor
{
    FMassSpawnerOnSpawningFinishedEvent OnSpawningFinishedEvent;                      // 0x02A8 (size: 0x10)
    void MassSpawnerOnSpawningFinishedEvent();
    FMassSpawnerOnDespawningFinishedEvent OnDespawningFinishedEvent;                  // 0x02B8 (size: 0x10)
    void MassSpawnerOnDespawningFinishedEvent();
    int32 Count;                                                                      // 0x02C8 (size: 0x4)
    TArray<FMassSpawnedEntityType> EntityTypes;                                       // 0x02D0 (size: 0x10)
    TArray<FMassSpawnDataGenerator> SpawnDataGenerators;                              // 0x02E0 (size: 0x10)
    uint8 bAutoSpawnOnBeginPlay;                                                      // 0x02F0 (size: 0x1)
    uint8 bOverrideSchematics;                                                        // 0x02F0 (size: 0x1)
    TArray<class UMassProcessor*> PostSpawnProcessors;                                // 0x02F8 (size: 0x10)
    float SpawningCountScale;                                                         // 0x0308 (size: 0x4)

    void UnloadConfig();
    void ScaleSpawningCount(float scale);
    float GetSpawningCountScale();
    int32 GetCount();
    void DoSpawning();
    void DoDespawning();
    void ClearTemplates();
}; // Size: 0x350

class UMassAssortedFragmentsTrait : public UMassEntityTraitBase
{
    TArray<FInstancedStruct> Fragments;                                               // 0x0028 (size: 0x10)
    TArray<FInstancedStruct> Tags;                                                    // 0x0038 (size: 0x10)

}; // Size: 0x48

class UMassEntityConfigAsset : public UDataAsset
{
    FMassEntityConfig Config;                                                         // 0x0030 (size: 0x30)

}; // Size: 0x60

class UMassEntityEQSSpawnPointsGenerator : public UMassEntitySpawnDataGeneratorBase
{
    FEQSParametrizedQueryExecutionRequest EQSRequest;                                 // 0x0030 (size: 0x48)

}; // Size: 0x78

class UMassEntitySpawnDataGeneratorBase : public UObject
{
    int32 RandomSelectionSeed;                                                        // 0x0028 (size: 0x4)
    uint8 bUseCustomSeed;                                                             // 0x002C (size: 0x1)

}; // Size: 0x30

class UMassEntityTraitBase : public UObject
{
}; // Size: 0x28

class UMassEntityZoneGraphSpawnPointsGenerator : public UMassEntitySpawnDataGeneratorBase
{
    FZoneGraphTagFilter TagFilter;                                                    // 0x0030 (size: 0xC)
    float MinGap;                                                                     // 0x003C (size: 0x4)
    float MaxGap;                                                                     // 0x0040 (size: 0x4)

}; // Size: 0x48

class UMassSpawnLocationProcessor : public UMassProcessor
{
}; // Size: 0x3E0

class UMassSpawnerSubsystem : public UMassSubsystemBase
{
    TArray<class UMassProcessor*> SpawnDataInitializers;                              // 0x0038 (size: 0x10)

}; // Size: 0xC0

class UMassTranslator : public UMassProcessor
{
}; // Size: 0xD0

#endif
