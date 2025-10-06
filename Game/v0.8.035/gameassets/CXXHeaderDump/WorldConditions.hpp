#ifndef UE4SS_SDK_WorldConditions_HPP
#define UE4SS_SDK_WorldConditions_HPP

#include "WorldConditions_enums.hpp"

struct FWorldConditionBase
{
    uint8 bInvert;                                                                    // 0x000B (size: 0x1)
    EWorldConditionOperator Operator;                                                 // 0x000C (size: 0x1)
    uint8 NextExpressionDepth;                                                        // 0x000D (size: 0x1)

}; // Size: 0x10

struct FWorldConditionCommonActorBase : public FWorldConditionBase
{
}; // Size: 0x10

struct FWorldConditionCommonBase : public FWorldConditionBase
{
}; // Size: 0x10

struct FWorldConditionContextDataDesc
{
    class UStruct* Struct;                                                            // 0x0000 (size: 0x8)
    FName Name;                                                                       // 0x0008 (size: 0x8)
    EWorldConditionContextDataType Type;                                              // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FWorldConditionContextDataRef
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    uint8 Index;                                                                      // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FWorldConditionEditable
{
}; // Size: 0x1

struct FWorldConditionItem
{
}; // Size: 0x3

struct FWorldConditionQuery
{
    FWorldConditionQueryDefinition QueryDefinition;                                   // 0x0000 (size: 0x18)
    FWorldConditionQueryState QueryState;                                             // 0x0018 (size: 0x30)

}; // Size: 0x48

struct FWorldConditionQueryDefinition
{
    TSubclassOf<class UWorldConditionSchema> SchemaClass;                             // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FWorldConditionQuerySharedDefinition
{
    FInstancedStructContainer Conditions;                                             // 0x0000 (size: 0x10)
    TSubclassOf<class UWorldConditionSchema> SchemaClass;                             // 0x0010 (size: 0x8)

}; // Size: 0x28

struct FWorldConditionQueryState
{
    class UObject* Owner;                                                             // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FWorldConditionResult
{
    EWorldConditionResultValue Value;                                                 // 0x0000 (size: 0x1)
    bool bCanBeCached;                                                                // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FWorldConditionStateObject
{
    class UObject* Object;                                                            // 0x0000 (size: 0x8)

}; // Size: 0x8

class UWorldConditionSchema : public UObject
{
    TArray<FWorldConditionContextDataDesc> ContextDataDescs;                          // 0x0028 (size: 0x10)

}; // Size: 0x38

#endif
