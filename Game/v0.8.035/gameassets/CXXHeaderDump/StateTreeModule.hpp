#ifndef UE4SS_SDK_StateTreeModule_HPP
#define UE4SS_SDK_StateTreeModule_HPP

#include "StateTreeModule_enums.hpp"

struct FCompactEventDesc
{
    class UScriptStruct* PayloadStruct;                                               // 0x0000 (size: 0x8)
    FGameplayTag Tag;                                                                 // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FCompactStateTransition
{
    FCompactEventDesc RequiredEvent;                                                  // 0x0000 (size: 0x10)
    uint16 ConditionsBegin;                                                           // 0x0010 (size: 0x2)
    FStateTreeStateHandle State;                                                      // 0x0012 (size: 0x2)
    FStateTreeRandomTimeDuration Delay;                                               // 0x0014 (size: 0x4)
    EStateTreeTransitionTrigger Trigger;                                              // 0x0018 (size: 0x1)
    EStateTreeTransitionPriority Priority;                                            // 0x0019 (size: 0x1)
    EStateTreeSelectionFallback Fallback;                                             // 0x001A (size: 0x1)
    uint8 ConditionsNum;                                                              // 0x001B (size: 0x1)
    uint8 bTransitionEnabled;                                                         // 0x001C (size: 0x1)
    uint8 bConsumeEventOnSelect;                                                      // 0x001C (size: 0x1)

}; // Size: 0x20

struct FCompactStateTreeParameters
{
    FInstancedPropertyBag Parameters;                                                 // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FCompactStateTreeState
{
    FCompactEventDesc RequiredEventToEnter;                                           // 0x0000 (size: 0x10)
    FName Name;                                                                       // 0x0010 (size: 0x8)
    FGameplayTag Tag;                                                                 // 0x0018 (size: 0x8)
    class UStateTree* LinkedAsset;                                                    // 0x0020 (size: 0x8)
    FStateTreeStateHandle LinkedState;                                                // 0x0028 (size: 0x2)
    FStateTreeStateHandle Parent;                                                     // 0x002A (size: 0x2)
    uint16 ChildrenBegin;                                                             // 0x002C (size: 0x2)
    uint16 ChildrenEnd;                                                               // 0x002E (size: 0x2)
    uint16 EnterConditionsBegin;                                                      // 0x0030 (size: 0x2)
    uint16 UtilityConsiderationsBegin;                                                // 0x0032 (size: 0x2)
    uint16 TransitionsBegin;                                                          // 0x0034 (size: 0x2)
    uint16 TasksBegin;                                                                // 0x0036 (size: 0x2)
    FStateTreeIndex16 ParameterTemplateIndex;                                         // 0x0038 (size: 0x2)
    FStateTreeDataHandle ParameterDataHandle;                                         // 0x003A (size: 0x6)
    FStateTreeIndex16 ParameterBindingsBatch;                                         // 0x0040 (size: 0x2)
    FStateTreeIndex16 EventDataIndex;                                                 // 0x0042 (size: 0x2)
    uint8 EnterConditionsNum;                                                         // 0x0044 (size: 0x1)
    uint8 UtilityConsiderationsNum;                                                   // 0x0045 (size: 0x1)
    uint8 TransitionsNum;                                                             // 0x0046 (size: 0x1)
    uint8 TasksNum;                                                                   // 0x0047 (size: 0x1)
    uint8 InstanceDataNum;                                                            // 0x0048 (size: 0x1)
    uint8 Depth;                                                                      // 0x0049 (size: 0x1)
    EStateTreeStateType Type;                                                         // 0x004A (size: 0x1)
    EStateTreeStateSelectionBehavior SelectionBehavior;                               // 0x004B (size: 0x1)
    uint8 bHasTransitionTasks;                                                        // 0x004C (size: 0x1)
    uint8 bHasStateChangeConditions;                                                  // 0x004C (size: 0x1)
    uint8 bCheckPrerequisitesWhenActivatingChildDirectly;                             // 0x004C (size: 0x1)
    float Weight;                                                                     // 0x0050 (size: 0x4)
    uint8 bEnabled;                                                                   // 0x0054 (size: 0x1)
    uint8 bConsumeEventOnSelect;                                                      // 0x0054 (size: 0x1)

}; // Size: 0x58

struct FGameplayTagContainerMatchCondition : public FStateTreeConditionCommonBase
{
    EGameplayContainerMatchType MatchType;                                            // 0x0028 (size: 0x1)
    bool bExactMatch;                                                                 // 0x0029 (size: 0x1)
    bool bInvert;                                                                     // 0x002A (size: 0x1)

}; // Size: 0x30

struct FGameplayTagContainerMatchConditionInstanceData
{
    FGameplayTagContainer TagContainer;                                               // 0x0000 (size: 0x20)
    FGameplayTagContainer OtherContainer;                                             // 0x0020 (size: 0x20)

}; // Size: 0x40

struct FGameplayTagMatchCondition : public FStateTreeConditionCommonBase
{
    bool bExactMatch;                                                                 // 0x0028 (size: 0x1)
    bool bInvert;                                                                     // 0x0029 (size: 0x1)

}; // Size: 0x30

struct FGameplayTagMatchConditionInstanceData
{
    FGameplayTagContainer TagContainer;                                               // 0x0000 (size: 0x20)
    FGameplayTag Tag;                                                                 // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FGameplayTagQueryCondition : public FStateTreeConditionCommonBase
{
    FGameplayTagQuery TagQuery;                                                       // 0x0028 (size: 0x48)
    bool bInvert;                                                                     // 0x0070 (size: 0x1)

}; // Size: 0x78

struct FGameplayTagQueryConditionInstanceData
{
    FGameplayTagContainer TagContainer;                                               // 0x0000 (size: 0x20)

}; // Size: 0x20

struct FRecordedStateTreeExecutionFrame
{
    class UStateTree* StateTree;                                                      // 0x0000 (size: 0x8)
    FStateTreeStateHandle RootState;                                                  // 0x0008 (size: 0x2)
    FStateTreeActiveStates ActiveStates;                                              // 0x000A (size: 0x12)
    uint8 bIsGlobalFrame;                                                             // 0x001C (size: 0x1)

}; // Size: 0x28

struct FRecordedStateTreeTransitionResult
{
    TArray<FRecordedStateTreeExecutionFrame> NextActiveFrames;                        // 0x0000 (size: 0x10)
    TArray<FStateTreeEvent> NextActiveFrameEvents;                                    // 0x0010 (size: 0x10)
    FStateTreeStateHandle SourceState;                                                // 0x0020 (size: 0x2)
    FStateTreeStateHandle TargetState;                                                // 0x0022 (size: 0x2)
    EStateTreeTransitionPriority Priority;                                            // 0x0024 (size: 0x1)
    class UStateTree* SourceStateTree;                                                // 0x0028 (size: 0x8)
    FStateTreeStateHandle SourceRootState;                                            // 0x0030 (size: 0x2)

}; // Size: 0x38

struct FStateTreeAbsoluteFloatPropertyFunction : public FStateTreePropertyFunctionCommonBase
{
}; // Size: 0x20

struct FStateTreeAbsoluteIntPropertyFunction : public FStateTreePropertyFunctionCommonBase
{
}; // Size: 0x20

struct FStateTreeActiveStates
{
    FStateTreeStateHandle States;                                                     // 0x0000 (size: 0x10)
    uint8 NumStates;                                                                  // 0x0010 (size: 0x1)

}; // Size: 0x12

struct FStateTreeAddFloatPropertyFunction : public FStateTreePropertyFunctionCommonBase
{
}; // Size: 0x20

struct FStateTreeAddIntPropertyFunction : public FStateTreePropertyFunctionCommonBase
{
}; // Size: 0x20

struct FStateTreeAnyEnum
{
    uint32 Value;                                                                     // 0x0000 (size: 0x4)
    class UEnum* Enum;                                                                // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FStateTreeBindableStructDesc
{
    class UStruct* Struct;                                                            // 0x0000 (size: 0x8)
    FName Name;                                                                       // 0x0008 (size: 0x8)
    FStateTreeDataHandle DataHandle;                                                  // 0x0010 (size: 0x6)
    EStateTreeBindableStructSource DataSource;                                        // 0x0016 (size: 0x1)

}; // Size: 0x18

struct FStateTreeBlueprintConditionWrapper : public FStateTreeConditionBase
{
    TSubclassOf<class UStateTreeConditionBlueprintBase> ConditionClass;               // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FStateTreeBlueprintConsiderationWrapper : public FStateTreeConsiderationBase
{
    TSubclassOf<class UStateTreeConsiderationBlueprintBase> ConsiderationClass;       // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FStateTreeBlueprintEvaluatorWrapper : public FStateTreeEvaluatorBase
{
    TSubclassOf<class UStateTreeEvaluatorBlueprintBase> EvaluatorClass;               // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FStateTreeBlueprintPropertyRef : public FStateTreePropertyRef
{
    EStateTreePropertyRefType RefType;                                                // 0x0002 (size: 0x1)
    uint8 bIsRefToArray;                                                              // 0x0003 (size: 0x1)
    uint8 bIsOptional;                                                                // 0x0003 (size: 0x1)
    class UObject* TypeObject;                                                        // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FStateTreeBlueprintTaskWrapper : public FStateTreeTaskBase
{
    TSubclassOf<class UStateTreeTaskBlueprintBase> TaskClass;                         // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FStateTreeBooleanAndPropertyFunction : public FStateTreePropertyFunctionCommonBase
{
}; // Size: 0x20

struct FStateTreeBooleanNotOperationPropertyFunctionInstanceData
{
    bool bInput;                                                                      // 0x0000 (size: 0x1)
    bool bResult;                                                                     // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FStateTreeBooleanNotPropertyFunction : public FStateTreePropertyFunctionCommonBase
{
}; // Size: 0x20

struct FStateTreeBooleanOperationPropertyFunctionInstanceData
{
    bool bLeft;                                                                       // 0x0000 (size: 0x1)
    bool bRight;                                                                      // 0x0001 (size: 0x1)
    bool bResult;                                                                     // 0x0002 (size: 0x1)

}; // Size: 0x3

struct FStateTreeBooleanOrPropertyFunction : public FStateTreePropertyFunctionCommonBase
{
}; // Size: 0x20

struct FStateTreeBooleanXOrPropertyFunction : public FStateTreePropertyFunctionCommonBase
{
}; // Size: 0x20

struct FStateTreeCompareBoolCondition : public FStateTreeConditionCommonBase
{
    bool bInvert;                                                                     // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FStateTreeCompareBoolConditionInstanceData
{
    bool bLeft;                                                                       // 0x0000 (size: 0x1)
    bool bRight;                                                                      // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FStateTreeCompareDistanceCondition : public FStateTreeConditionCommonBase
{
    bool bInvert;                                                                     // 0x0028 (size: 0x1)
    EGenericAICheck Operator;                                                         // 0x0029 (size: 0x1)

}; // Size: 0x30

struct FStateTreeCompareDistanceConditionInstanceData
{
    FVector Source;                                                                   // 0x0000 (size: 0x18)
    FVector Target;                                                                   // 0x0018 (size: 0x18)
    double Distance;                                                                  // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FStateTreeCompareEnumCondition : public FStateTreeConditionCommonBase
{
    bool bInvert;                                                                     // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FStateTreeCompareEnumConditionInstanceData
{
    FStateTreeAnyEnum Left;                                                           // 0x0000 (size: 0x10)
    FStateTreeAnyEnum Right;                                                          // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FStateTreeCompareFloatCondition : public FStateTreeConditionCommonBase
{
    bool bInvert;                                                                     // 0x0028 (size: 0x1)
    EGenericAICheck Operator;                                                         // 0x0029 (size: 0x1)

}; // Size: 0x30

struct FStateTreeCompareFloatConditionInstanceData
{
    double Left;                                                                      // 0x0000 (size: 0x8)
    double Right;                                                                     // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FStateTreeCompareIntCondition : public FStateTreeConditionCommonBase
{
    bool bInvert;                                                                     // 0x0028 (size: 0x1)
    EGenericAICheck Operator;                                                         // 0x0029 (size: 0x1)

}; // Size: 0x30

struct FStateTreeCompareIntConditionInstanceData
{
    int32 Left;                                                                       // 0x0000 (size: 0x4)
    int32 Right;                                                                      // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FStateTreeConditionBase : public FStateTreeNodeBase
{
    EStateTreeExpressionOperand Operand;                                              // 0x0020 (size: 0x1)
    int8 DeltaIndent;                                                                 // 0x0021 (size: 0x1)
    EStateTreeConditionEvaluationMode EvaluationMode;                                 // 0x0022 (size: 0x1)

}; // Size: 0x28

struct FStateTreeConditionCommonBase : public FStateTreeConditionBase
{
}; // Size: 0x28

struct FStateTreeConsiderationBase : public FStateTreeNodeBase
{
    EStateTreeExpressionOperand Operand;                                              // 0x0020 (size: 0x1)
    int8 DeltaIndent;                                                                 // 0x0021 (size: 0x1)

}; // Size: 0x28

struct FStateTreeConsiderationCommonBase : public FStateTreeConsiderationBase
{
}; // Size: 0x28

struct FStateTreeConsiderationResponseCurve
{
    FRuntimeFloatCurve CurveInfo;                                                     // 0x0000 (size: 0x88)

}; // Size: 0x88

struct FStateTreeConstantConsideration : public FStateTreeConsiderationCommonBase
{
}; // Size: 0x28

struct FStateTreeConstantConsiderationInstanceData
{
    float Constant;                                                                   // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FStateTreeDataHandle
{
    EStateTreeDataSourceType Source;                                                  // 0x0000 (size: 0x1)
    uint16 Index;                                                                     // 0x0002 (size: 0x2)
    FStateTreeStateHandle StateHandle;                                                // 0x0004 (size: 0x2)

}; // Size: 0x6

struct FStateTreeDebugTextTask : public FStateTreeTaskCommonBase
{
    FString Text;                                                                     // 0x0028 (size: 0x10)
    FColor TextColor;                                                                 // 0x0038 (size: 0x4)
    float FontScale;                                                                  // 0x003C (size: 0x4)
    FVector Offset;                                                                   // 0x0040 (size: 0x18)
    bool bEnabled;                                                                    // 0x0058 (size: 0x1)

}; // Size: 0x60

struct FStateTreeDebugTextTaskInstanceData
{
    class AActor* ReferenceActor;                                                     // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FStateTreeDelayTask : public FStateTreeTaskCommonBase
{
}; // Size: 0x28

struct FStateTreeDelayTaskInstanceData
{
    float Duration;                                                                   // 0x0000 (size: 0x4)
    float RandomDeviation;                                                            // 0x0004 (size: 0x4)
    bool bRunForever;                                                                 // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FStateTreeDivideFloatPropertyFunction : public FStateTreePropertyFunctionCommonBase
{
}; // Size: 0x20

struct FStateTreeDivideIntPropertyFunction : public FStateTreePropertyFunctionCommonBase
{
}; // Size: 0x20

struct FStateTreeEditorPropertyPath
{
    FGuid StructID;                                                                   // 0x0000 (size: 0x10)
    TArray<FString> Path;                                                             // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FStateTreeEnumInputConsideration : public FStateTreeConsiderationCommonBase
{
    FStateTreeEnumValueScorePairs EnumValueScorePairs;                                // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FStateTreeEnumInputConsiderationInstanceData
{
    FStateTreeAnyEnum Input;                                                          // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FStateTreeEnumValueScorePair
{
    int64 EnumValue;                                                                  // 0x0000 (size: 0x8)
    float Score;                                                                      // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FStateTreeEnumValueScorePairs
{
    TArray<FStateTreeEnumValueScorePair> Data;                                        // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FStateTreeEvaluatorBase : public FStateTreeNodeBase
{
}; // Size: 0x20

struct FStateTreeEvaluatorCommonBase : public FStateTreeEvaluatorBase
{
}; // Size: 0x20

struct FStateTreeEvent
{
    FGameplayTag Tag;                                                                 // 0x0000 (size: 0x8)
    FInstancedStruct Payload;                                                         // 0x0008 (size: 0x10)
    FName Origin;                                                                     // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FStateTreeEventQueue
{
    TArray<FStateTreeSharedEvent> SharedEvents;                                       // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FStateTreeExecutionFrame
{
    class UStateTree* StateTree;                                                      // 0x0000 (size: 0x8)
    FStateTreeStateHandle RootState;                                                  // 0x0008 (size: 0x2)
    FStateTreeActiveStates ActiveStates;                                              // 0x000A (size: 0x12)
    FStateTreeIndex16 ExternalDataBaseIndex;                                          // 0x001C (size: 0x2)
    FStateTreeIndex16 GlobalInstanceIndexBase;                                        // 0x001E (size: 0x2)
    FStateTreeIndex16 ActiveInstanceIndexBase;                                        // 0x0020 (size: 0x2)
    FStateTreeDataHandle StateParameterDataHandle;                                    // 0x0022 (size: 0x6)
    FStateTreeDataHandle GlobalParameterDataHandle;                                   // 0x0028 (size: 0x6)
    uint8 bIsGlobalFrame;                                                             // 0x002F (size: 0x1)

}; // Size: 0x30

struct FStateTreeExecutionState
{
    TArray<FStateTreeExecutionFrame> ActiveFrames;                                    // 0x0000 (size: 0x10)
    TArray<FStateTreeTransitionDelayedState> DelayedTransitions;                      // 0x0010 (size: 0x10)
    FStateTreeIndex16 EnterStateFailedFrameIndex;                                     // 0x0020 (size: 0x2)
    FStateTreeIndex16 EnterStateFailedTaskIndex;                                      // 0x0022 (size: 0x2)
    EStateTreeRunStatus LastTickStatus;                                               // 0x0024 (size: 0x1)
    EStateTreeRunStatus TreeRunStatus;                                                // 0x0025 (size: 0x1)
    EStateTreeRunStatus RequestedStop;                                                // 0x0026 (size: 0x1)
    EStateTreeUpdatePhase CurrentPhase;                                               // 0x0027 (size: 0x1)
    FStateTreeIndex16 CompletedFrameIndex;                                            // 0x0028 (size: 0x2)
    FStateTreeStateHandle CompletedStateHandle;                                       // 0x002A (size: 0x2)
    uint16 StateChangeCount;                                                          // 0x002C (size: 0x2)
    FRandomStream RandomStream;                                                       // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FStateTreeExternalDataDesc
{
    class UStruct* Struct;                                                            // 0x0000 (size: 0x8)
    FName Name;                                                                       // 0x0008 (size: 0x8)
    FStateTreeExternalDataHandle Handle;                                              // 0x0010 (size: 0x6)
    EStateTreeExternalDataRequirement Requirement;                                    // 0x0016 (size: 0x1)

}; // Size: 0x18

struct FStateTreeExternalDataHandle
{
    FStateTreeDataHandle DataHandle;                                                  // 0x0000 (size: 0x6)

}; // Size: 0x6

struct FStateTreeFloatCombinaisonPropertyFunctionInstanceData
{
    float Left;                                                                       // 0x0000 (size: 0x4)
    float Right;                                                                      // 0x0004 (size: 0x4)
    float Result;                                                                     // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FStateTreeFloatInputConsideration : public FStateTreeConsiderationCommonBase
{
    FStateTreeConsiderationResponseCurve ResponseCurve;                               // 0x0028 (size: 0x88)

}; // Size: 0xB0

struct FStateTreeFloatInputConsiderationInstanceData
{
    float Input;                                                                      // 0x0000 (size: 0x4)
    FFloatInterval Interval;                                                          // 0x0004 (size: 0x8)

}; // Size: 0xC

struct FStateTreeIndex16
{
    uint16 Value;                                                                     // 0x0000 (size: 0x2)

}; // Size: 0x2

struct FStateTreeIndex8
{
    uint8 Value;                                                                      // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FStateTreeInstanceData
{
}; // Size: 0x10

struct FStateTreeInstanceObjectWrapper
{
    class UObject* InstanceObject;                                                    // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FStateTreeInstanceStorage
{
    FInstancedStructContainer InstanceStructs;                                        // 0x0000 (size: 0x10)
    FStateTreeExecutionState ExecutionState;                                          // 0x0010 (size: 0x38)
    TArray<FStateTreeTemporaryInstanceData> TemporaryInstances;                       // 0x0048 (size: 0x10)
    TArray<FStateTreeTransitionRequest> TransitionRequests;                           // 0x0070 (size: 0x10)
    FInstancedPropertyBag GlobalParameters;                                           // 0x0080 (size: 0x10)

}; // Size: 0x90

struct FStateTreeIntCombinaisonPropertyFunctionInstanceData
{
    int32 Left;                                                                       // 0x0000 (size: 0x4)
    int32 Right;                                                                      // 0x0004 (size: 0x4)
    int32 Result;                                                                     // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FStateTreeInvertFloatPropertyFunction : public FStateTreePropertyFunctionCommonBase
{
}; // Size: 0x20

struct FStateTreeInvertIntPropertyFunction : public FStateTreePropertyFunctionCommonBase
{
}; // Size: 0x20

struct FStateTreeMakeIntervalPropertyFunction : public FStateTreePropertyFunctionCommonBase
{
}; // Size: 0x20

struct FStateTreeMakeIntervalPropertyFunctionInstanceData
{
    float min;                                                                        // 0x0000 (size: 0x4)
    float max;                                                                        // 0x0004 (size: 0x4)
    FFloatInterval Result;                                                            // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FStateTreeMultiplyFloatPropertyFunction : public FStateTreePropertyFunctionCommonBase
{
}; // Size: 0x20

struct FStateTreeMultiplyIntPropertyFunction : public FStateTreePropertyFunctionCommonBase
{
}; // Size: 0x20

struct FStateTreeNodeBase
{
    FName Name;                                                                       // 0x0008 (size: 0x8)
    FStateTreeIndex16 BindingsBatch;                                                  // 0x0010 (size: 0x2)
    FStateTreeIndex16 InstanceTemplateIndex;                                          // 0x0012 (size: 0x2)
    FStateTreeDataHandle InstanceDataHandle;                                          // 0x0014 (size: 0x6)

}; // Size: 0x20

struct FStateTreeNodeIdToIndex
{
    FGuid ID;                                                                         // 0x0000 (size: 0x10)
    FStateTreeIndex16 Index;                                                          // 0x0010 (size: 0x2)

}; // Size: 0x14

struct FStateTreeObjectEqualsCondition : public FStateTreeConditionCommonBase
{
    bool bInvert;                                                                     // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FStateTreeObjectEqualsConditionInstanceData
{
    class UObject* Left;                                                              // 0x0000 (size: 0x8)
    class UObject* Right;                                                             // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FStateTreeObjectIsChildOfClassCondition : public FStateTreeConditionCommonBase
{
    bool bInvert;                                                                     // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FStateTreeObjectIsChildOfClassConditionInstanceData
{
    class UObject* Object;                                                            // 0x0000 (size: 0x8)
    UClass* Class;                                                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FStateTreeObjectIsValidCondition : public FStateTreeConditionCommonBase
{
    bool bInvert;                                                                     // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FStateTreeObjectIsValidConditionInstanceData
{
    class UObject* Object;                                                            // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FStateTreePropertyAccess
{
    FStateTreePropertyIndirection SourceIndirection;                                  // 0x0000 (size: 0x18)
    class UStruct* SourceStructType;                                                  // 0x0020 (size: 0x8)
    FStateTreeDataHandle SourceDataHandle;                                            // 0x0028 (size: 0x6)

}; // Size: 0x30

struct FStateTreePropertyBinding
{
    FStateTreePropertySegment SourcePath;                                             // 0x0000 (size: 0x10)
    FStateTreePropertySegment TargetPath;                                             // 0x0010 (size: 0x10)
    FStateTreeIndex16 SourceStructIndex;                                              // 0x0020 (size: 0x2)
    EStateTreePropertyCopyType CopyType;                                              // 0x0022 (size: 0x1)

}; // Size: 0x24

struct FStateTreePropertyBindings
{
    TArray<FStateTreeBindableStructDesc> SourceStructs;                               // 0x0000 (size: 0x10)
    TArray<FStateTreePropertyCopyBatch> CopyBatches;                                  // 0x0010 (size: 0x10)
    TArray<FStateTreePropertyPathBinding> PropertyPathBindings;                       // 0x0020 (size: 0x10)
    TArray<FStateTreePropertyCopy> PropertyCopies;                                    // 0x0030 (size: 0x10)
    TArray<FStateTreePropertyRefPath> PropertyReferencePaths;                         // 0x0040 (size: 0x10)
    TArray<FStateTreePropertyAccess> PropertyAccesses;                                // 0x0050 (size: 0x10)
    TArray<FStateTreePropertyIndirection> PropertyIndirections;                       // 0x0060 (size: 0x10)

}; // Size: 0x78

struct FStateTreePropertyCopy
{
    FStateTreePropertyIndirection SourceIndirection;                                  // 0x0000 (size: 0x18)
    FStateTreePropertyIndirection TargetIndirection;                                  // 0x0018 (size: 0x18)
    class UStruct* SourceStructType;                                                  // 0x0040 (size: 0x8)
    int32 CopySize;                                                                   // 0x0048 (size: 0x4)
    FStateTreeDataHandle SourceDataHandle;                                            // 0x004C (size: 0x6)
    EStateTreePropertyCopyType Type;                                                  // 0x0052 (size: 0x1)
    FStateTreeIndex16 SourceStructIndex;                                              // 0x0054 (size: 0x2)

}; // Size: 0x58

struct FStateTreePropertyCopyBatch
{
    FStateTreeBindableStructDesc TargetStruct;                                        // 0x0000 (size: 0x18)
    FStateTreeIndex16 BindingsBegin;                                                  // 0x0018 (size: 0x2)
    FStateTreeIndex16 BindingsEnd;                                                    // 0x001A (size: 0x2)
    FStateTreeIndex16 PropertyFunctionsBegin;                                         // 0x001C (size: 0x2)
    FStateTreeIndex16 PropertyFunctionsEnd;                                           // 0x001E (size: 0x2)

}; // Size: 0x20

struct FStateTreePropertyFunctionBase : public FStateTreeNodeBase
{
}; // Size: 0x20

struct FStateTreePropertyFunctionCommonBase : public FStateTreePropertyFunctionBase
{
}; // Size: 0x20

struct FStateTreePropertyIndirection
{
    FStateTreeIndex16 ArrayIndex;                                                     // 0x0000 (size: 0x2)
    uint16 Offset;                                                                    // 0x0002 (size: 0x2)
    FStateTreeIndex16 NextIndex;                                                      // 0x0004 (size: 0x2)
    EStateTreePropertyAccessType Type;                                                // 0x0006 (size: 0x1)
    class UStruct* InstanceStruct;                                                    // 0x0008 (size: 0x8)

}; // Size: 0x18

struct FStateTreePropertyPath
{
    TArray<FStateTreePropertyPathSegment> Segments;                                   // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FStateTreePropertyPathBinding
{
    FStateTreePropertyPath SourcePropertyPath;                                        // 0x0000 (size: 0x10)
    FStateTreePropertyPath TargetPropertyPath;                                        // 0x0010 (size: 0x10)
    FStateTreeDataHandle SourceDataHandle;                                            // 0x0020 (size: 0x6)

}; // Size: 0x28

struct FStateTreePropertyPathSegment
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    int32 ArrayIndex;                                                                 // 0x0008 (size: 0x4)
    class UStruct* InstanceStruct;                                                    // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FStateTreePropertyRef
{
    FStateTreeIndex16 RefAccessIndex;                                                 // 0x0000 (size: 0x2)

}; // Size: 0x2

struct FStateTreePropertyRefPath
{
    FStateTreePropertyPath SourcePropertyPath;                                        // 0x0000 (size: 0x10)
    FStateTreeDataHandle SourceDataHandle;                                            // 0x0010 (size: 0x6)

}; // Size: 0x18

struct FStateTreePropertySegment
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FStateTreeIndex16 ArrayIndex;                                                     // 0x0008 (size: 0x2)
    FStateTreeIndex16 NextIndex;                                                      // 0x000A (size: 0x2)
    EStateTreePropertyAccessType Type;                                                // 0x000C (size: 0x1)

}; // Size: 0x10

struct FStateTreeRandomCondition : public FStateTreeConditionCommonBase
{
}; // Size: 0x28

struct FStateTreeRandomConditionInstanceData
{
    float Threshold;                                                                  // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FStateTreeRandomTimeDuration
{
    uint16 Duration;                                                                  // 0x0000 (size: 0x2)
    uint16 RandomVariance;                                                            // 0x0002 (size: 0x2)

}; // Size: 0x4

struct FStateTreeReference
{
    class UStateTree* StateTree;                                                      // 0x0000 (size: 0x8)
    FInstancedPropertyBag Parameters;                                                 // 0x0008 (size: 0x10)
    TArray<FGuid> PropertyOverrides;                                                  // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FStateTreeReferenceOverrideItem
{
    FGameplayTag StateTag;                                                            // 0x0000 (size: 0x8)
    FStateTreeReference StateTreeReference;                                           // 0x0008 (size: 0x28)

}; // Size: 0x30

struct FStateTreeReferenceOverrides
{
    TArray<FStateTreeReferenceOverrideItem> OverrideItems;                            // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FStateTreeRunParallelStateTreeTask : public FStateTreeTaskCommonBase
{
    FGameplayTag StateTreeOverrideTag;                                                // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FStateTreeRunParallelStateTreeTaskInstanceData
{
    FStateTreeReference StateTree;                                                    // 0x0000 (size: 0x28)
    FStateTreeInstanceData TreeInstanceData;                                          // 0x0028 (size: 0x10)
    class UStateTree* RunningStateTree;                                               // 0x0038 (size: 0x8)

}; // Size: 0x40

struct FStateTreeSharedEvent
{
}; // Size: 0x10

struct FStateTreeSingleFloatPropertyFunctionInstanceData
{
    float Input;                                                                      // 0x0000 (size: 0x4)
    float Result;                                                                     // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FStateTreeSingleIntPropertyFunctionInstanceData
{
    int32 Input;                                                                      // 0x0000 (size: 0x4)
    int32 Result;                                                                     // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FStateTreeStateHandle
{
    uint16 Index;                                                                     // 0x0000 (size: 0x2)

}; // Size: 0x2

struct FStateTreeStateIdToHandle
{
    FGuid ID;                                                                         // 0x0000 (size: 0x10)
    FStateTreeStateHandle Handle;                                                     // 0x0010 (size: 0x2)

}; // Size: 0x14

struct FStateTreeStateLink
{
    FStateTreeStateHandle StateHandle;                                                // 0x0000 (size: 0x2)

}; // Size: 0x2

struct FStateTreeStructRef
{
}; // Size: 0x10

struct FStateTreeSubtractFloatPropertyFunction : public FStateTreePropertyFunctionCommonBase
{
}; // Size: 0x20

struct FStateTreeSubtractIntPropertyFunction : public FStateTreePropertyFunctionCommonBase
{
}; // Size: 0x20

struct FStateTreeTaskBase : public FStateTreeNodeBase
{
    uint8 bTaskEnabled;                                                               // 0x0020 (size: 0x1)
    EStateTreeTransitionPriority TransitionHandlingPriority;                          // 0x0021 (size: 0x1)

}; // Size: 0x28

struct FStateTreeTaskCommonBase : public FStateTreeTaskBase
{
}; // Size: 0x28

struct FStateTreeTemporaryInstanceData
{
    class UStateTree* StateTree;                                                      // 0x0000 (size: 0x8)
    FStateTreeStateHandle RootState;                                                  // 0x0008 (size: 0x2)
    FStateTreeDataHandle DataHandle;                                                  // 0x000A (size: 0x6)
    FStateTreeIndex16 OwnerNodeIndex;                                                 // 0x0010 (size: 0x2)
    FInstancedStruct Instance;                                                        // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FStateTreeTransitionDelayedState
{
    class UStateTree* StateTree;                                                      // 0x0000 (size: 0x8)
    FStateTreeIndex16 TransitionIndex;                                                // 0x0008 (size: 0x2)
    float TimeLeft;                                                                   // 0x000C (size: 0x4)
    FStateTreeSharedEvent CapturedEvent;                                              // 0x0010 (size: 0x10)
    uint32 CapturedEventHash;                                                         // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FStateTreeTransitionIdToIndex
{
    FGuid ID;                                                                         // 0x0000 (size: 0x10)
    FStateTreeIndex16 Index;                                                          // 0x0010 (size: 0x2)

}; // Size: 0x14

struct FStateTreeTransitionRequest
{
    FStateTreeStateHandle SourceState;                                                // 0x0000 (size: 0x2)
    class UStateTree* SourceStateTree;                                                // 0x0008 (size: 0x8)
    FStateTreeStateHandle SourceRootState;                                            // 0x0010 (size: 0x2)
    FStateTreeStateHandle TargetState;                                                // 0x0012 (size: 0x2)
    EStateTreeTransitionPriority Priority;                                            // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FStateTreeTransitionResult
{
    TArray<FStateTreeExecutionFrame> NextActiveFrames;                                // 0x0000 (size: 0x10)
    EStateTreeRunStatus CurrentRunStatus;                                             // 0x0020 (size: 0x1)
    FStateTreeStateHandle SourceState;                                                // 0x0022 (size: 0x2)
    FStateTreeStateHandle TargetState;                                                // 0x0024 (size: 0x2)
    FStateTreeStateHandle CurrentState;                                               // 0x0026 (size: 0x2)
    EStateTreeStateChangeType ChangeType;                                             // 0x0028 (size: 0x1)
    EStateTreeTransitionPriority Priority;                                            // 0x0029 (size: 0x1)
    class UStateTree* SourceStateTree;                                                // 0x0030 (size: 0x8)
    FStateTreeStateHandle SourceRootState;                                            // 0x0038 (size: 0x2)

}; // Size: 0x40

struct FStateTreeTransitionSource
{
}; // Size: 0x8

class IStateTreeSchemaProvider : public IInterface
{
}; // Size: 0x28

class UStateTree : public UDataAsset
{
    uint32 LastCompiledEditorDataHash;                                                // 0x0030 (size: 0x4)
    class UStateTreeSchema* Schema;                                                   // 0x0038 (size: 0x8)
    TArray<FCompactStateTreeState> States;                                            // 0x0040 (size: 0x10)
    TArray<FCompactStateTransition> Transitions;                                      // 0x0050 (size: 0x10)
    FInstancedStructContainer Nodes;                                                  // 0x0060 (size: 0x10)
    FStateTreeInstanceData DefaultInstanceData;                                       // 0x0070 (size: 0x10)
    FStateTreeInstanceData SharedInstanceData;                                        // 0x0080 (size: 0x10)
    TArray<FStateTreeExternalDataDesc> ContextDataDescs;                              // 0x00A8 (size: 0x10)
    FStateTreePropertyBindings PropertyBindings;                                      // 0x00B8 (size: 0x78)
    TArray<FStateTreeStateIdToHandle> IDToStateMappings;                              // 0x0130 (size: 0x10)
    TArray<FStateTreeNodeIdToIndex> IDToNodeMappings;                                 // 0x0140 (size: 0x10)
    TArray<FStateTreeTransitionIdToIndex> IDToTransitionMappings;                     // 0x0150 (size: 0x10)
    FInstancedPropertyBag Parameters;                                                 // 0x0160 (size: 0x10)
    uint16 NumContextData;                                                            // 0x0170 (size: 0x2)
    uint16 NumGlobalInstanceData;                                                     // 0x0172 (size: 0x2)
    uint16 EvaluatorsBegin;                                                           // 0x0174 (size: 0x2)
    uint16 EvaluatorsNum;                                                             // 0x0176 (size: 0x2)
    uint16 GlobalTasksBegin;                                                          // 0x0178 (size: 0x2)
    uint16 GlobalTasksNum;                                                            // 0x017A (size: 0x2)
    bool bHasGlobalTransitionTasks;                                                   // 0x017C (size: 0x1)
    TArray<FStateTreeExternalDataDesc> ExternalDataDescs;                             // 0x0180 (size: 0x10)

}; // Size: 0x198

class UStateTreeConditionBlueprintBase : public UStateTreeNodeBlueprintBase
{

    bool ReceiveTestCondition();
}; // Size: 0x58

class UStateTreeConsiderationBlueprintBase : public UStateTreeNodeBlueprintBase
{

    float ReceiveGetScore();
}; // Size: 0x58

class UStateTreeEvaluatorBlueprintBase : public UStateTreeNodeBlueprintBase
{

    void ReceiveTreeStop();
    void ReceiveTreeStart();
    void ReceiveTick(const float DeltaTime);
}; // Size: 0x58

class UStateTreeNodeBlueprintBase : public UObject
{
    class UObject* CachedOwner;                                                       // 0x0038 (size: 0x8)
    class UStateTree* CachedFrameStateTree;                                           // 0x0040 (size: 0x8)

    void SendEvent(const FStateTreeEvent& Event);
    void RequestTransition(const FStateTreeStateLink& TargetState, const EStateTreeTransitionPriority Priority);
    FText ReceiveGetDescription(TEnumAsByte<EStateTreeNodeFormatting> Formatting);
    bool IsPropertyRefValid(const FStateTreeBlueprintPropertyRef& PropertyRef);
    void GetPropertyReference(const FStateTreeBlueprintPropertyRef& PropertyRef);
    FText GetPropertyDescriptionByPropertyName(FName PropertyName);
}; // Size: 0x50

class UStateTreeSchema : public UObject
{
}; // Size: 0x28

class UStateTreeSettings : public UDeveloperSettings
{
    bool bAutoStartDebuggerTracesOnNonEditorTargets;                                  // 0x0038 (size: 0x1)

}; // Size: 0x40

class UStateTreeTaskBlueprintBase : public UStateTreeNodeBlueprintBase
{
    uint8 bShouldStateChangeOnReselect;                                               // 0x0051 (size: 0x1)
    uint8 bShouldCallTickOnlyOnEvents;                                                // 0x0051 (size: 0x1)
    uint8 bShouldCopyBoundPropertiesOnTick;                                           // 0x0051 (size: 0x1)
    uint8 bShouldCopyBoundPropertiesOnExitState;                                      // 0x0051 (size: 0x1)

    EStateTreeRunStatus ReceiveTick(const float DeltaTime);
    void ReceiveStateCompleted(const EStateTreeRunStatus CompletionStatus, const FStateTreeActiveStates CompletedActiveStates);
    void ReceiveLatentTick(const float DeltaTime);
    void ReceiveLatentEnterState(const FStateTreeTransitionResult& Transition);
    void ReceiveExitState(const FStateTreeTransitionResult& Transition);
    EStateTreeRunStatus ReceiveEnterState(const FStateTreeTransitionResult& Transition);
    void FinishTask(const bool bSucceeded);
}; // Size: 0x58

#endif
