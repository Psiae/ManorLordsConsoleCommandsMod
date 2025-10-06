#ifndef UE4SS_SDK_MassEQS_HPP
#define UE4SS_SDK_MassEQS_HPP

#include "MassEQS_enums.hpp"

struct FMassEQSRequestHandle : public FIndexedHandleBase
{
}; // Size: 0x8

struct FMassEnvQueryEntityInfo
{
}; // Size: 0x70

struct FMassEnvQueryEntityInfoBlueprintWrapper
{
}; // Size: 0x70

class IMassEQSRequestInterface : public IInterface
{
}; // Size: 0x28

class UEnvQueryItemType_MassEntityHandle : public UEnvQueryItemType_VectorBase
{
}; // Size: 0x30

class UMassEQSBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void SendSignalToEntity(const class AActor* Owner, const FMassEnvQueryEntityInfoBlueprintWrapper& EntityInfo, const FName Signal);
    TArray<FMassEnvQueryEntityInfoBlueprintWrapper> GetEnviromentQueryResultAsEntityInfo(const class UEnvQueryInstanceBlueprintWrapper* QueryInstance);
    FVector GetCurrentEntityPosition(const class AActor* Owner, const FMassEnvQueryEntityInfoBlueprintWrapper& EntityInfo);
    FVector GetCachedEntityPosition(const FMassEnvQueryEntityInfoBlueprintWrapper& EntityInfo);
    FString EntityToString(const FMassEnvQueryEntityInfoBlueprintWrapper& EntityInfo);
    bool EntityComparison(const FMassEnvQueryEntityInfoBlueprintWrapper& A, const FMassEnvQueryEntityInfoBlueprintWrapper& B);
    bool ContainsEntity(const TArray<FMassEnvQueryEntityInfoBlueprintWrapper>& EntityList, const FMassEnvQueryEntityInfoBlueprintWrapper& EntityInfo);
}; // Size: 0x28

class UMassEQSSubsystem : public UMassSubsystemBase
{
}; // Size: 0x120

class UMassEnvQueryGenerator : public UEnvQueryGenerator
{
}; // Size: 0x78

class UMassEnvQueryGeneratorProcessor_MassEntityHandles : public UMassEnvQueryProcessorBase
{
}; // Size: 0x3E0

class UMassEnvQueryGenerator_MassEntityHandles : public UMassEnvQueryGenerator
{
    FAIDataProviderFloatValue SearchRadius;                                           // 0x0078 (size: 0x38)
    TSubclassOf<class UEnvQueryContext> SearchCenter;                                 // 0x00B0 (size: 0x8)

}; // Size: 0xB8

class UMassEnvQueryProcessorBase : public UMassProcessor
{
}; // Size: 0xC0

class UMassEnvQueryTest : public UEnvQueryTest
{
}; // Size: 0x220

class UMassEnvQueryTestProcessor_MassEntityTags : public UMassEnvQueryProcessorBase
{
}; // Size: 0x3E0

class UMassEnvQueryTest_MassEntityTags : public UMassEnvQueryTest
{
    EMassEntityTagsTestMode TagTestMode;                                              // 0x0220 (size: 0x1)
    TArray<FInstancedStruct> Tags;                                                    // 0x0228 (size: 0x10)

}; // Size: 0x238

#endif
