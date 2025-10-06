#ifndef UE4SS_SDK_GameplayStateTreeModule_HPP
#define UE4SS_SDK_GameplayStateTreeModule_HPP

struct FStateTreeAIActionTaskBase : public FStateTreeAITaskBase
{
}; // Size: 0x28

struct FStateTreeAIConditionBase : public FStateTreeConditionBase
{
}; // Size: 0x28

struct FStateTreeAITaskBase : public FStateTreeTaskBase
{
}; // Size: 0x28

struct FStateTreeGetActorLocationPropertyFunction : public FStateTreePropertyFunctionCommonBase
{
}; // Size: 0x20

struct FStateTreeGetActorLocationPropertyFunctionInstanceData
{
    class AActor* Input;                                                              // 0x0000 (size: 0x8)
    FVector Output;                                                                   // 0x0008 (size: 0x18)

}; // Size: 0x20

struct FStateTreeMoveToTask : public FStateTreeAIActionTaskBase
{
}; // Size: 0x28

struct FStateTreeMoveToTaskInstanceData
{
    class AAIController* AIController;                                                // 0x0000 (size: 0x8)
    FVector Destination;                                                              // 0x0008 (size: 0x18)
    class AActor* TargetActor;                                                        // 0x0020 (size: 0x8)
    float AcceptableRadius;                                                           // 0x0028 (size: 0x4)
    float DestinationMoveTolerance;                                                   // 0x002C (size: 0x4)
    TSubclassOf<class UNavigationQueryFilter> FilterClass;                            // 0x0030 (size: 0x8)
    bool bAllowStrafe;                                                                // 0x0038 (size: 0x1)
    bool bAllowPartialPath;                                                           // 0x0039 (size: 0x1)
    bool bTrackMovingGoal;                                                            // 0x003A (size: 0x1)
    bool bRequireNavigableEndLocation;                                                // 0x003B (size: 0x1)
    bool bProjectGoalLocation;                                                        // 0x003C (size: 0x1)
    bool bReachTestIncludesAgentRadius;                                               // 0x003D (size: 0x1)
    bool bReachTestIncludesGoalRadius;                                                // 0x003E (size: 0x1)
    class UAITask_MoveTo* MoveToTask;                                                 // 0x0040 (size: 0x8)
    TScriptInterface<class IGameplayTaskOwnerInterface> TaskOwner;                    // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FStateTreeRunEnvQueryInstanceData
{
    FStateTreePropertyRef Result;                                                     // 0x0000 (size: 0x2)
    class AActor* QueryOwner;                                                         // 0x0008 (size: 0x8)
    class UEnvQuery* QueryTemplate;                                                   // 0x0010 (size: 0x8)
    TArray<FAIDynamicParam> QueryConfig;                                              // 0x0018 (size: 0x10)
    TEnumAsByte<EEnvQueryRunMode::Type> RunMode;                                      // 0x0028 (size: 0x1)

}; // Size: 0x48

struct FStateTreeRunEnvQueryTask : public FStateTreeTaskCommonBase
{
}; // Size: 0x28

class UBTTask_RunDynamicStateTree : public UBTTaskNode
{
    FStateTreeReference StateTreeRef;                                                 // 0x0070 (size: 0x28)
    FStateTreeInstanceData InstanceData;                                              // 0x0098 (size: 0x10)
    FGameplayTag InjectionTag;                                                        // 0x00A8 (size: 0x8)

}; // Size: 0xC8

class UBTTask_RunStateTree : public UBTTaskNode
{
    FStateTreeReference StateTreeRef;                                                 // 0x0078 (size: 0x28)
    FStateTreeInstanceData InstanceData;                                              // 0x00A0 (size: 0x10)
    float Interval;                                                                   // 0x00B0 (size: 0x4)
    float RandomDeviation;                                                            // 0x00B4 (size: 0x4)

}; // Size: 0xB8

class UStateTreeAIComponent : public UStateTreeComponent
{
}; // Size: 0x170

class UStateTreeAIComponentSchema : public UStateTreeComponentSchema
{
    TSubclassOf<class AAIController> AIControllerClass;                               // 0x0058 (size: 0x8)

}; // Size: 0x60

class UStateTreeComponent : public UBrainComponent
{
    FStateTreeComponentOnStateTreeRunStatusChanged OnStateTreeRunStatusChanged;       // 0x0108 (size: 0x10)
    void StateTreeRunStatusChanged(EStateTreeRunStatus StateTreeRunStatus);
    FStateTreeReference StateTreeRef;                                                 // 0x0118 (size: 0x28)
    FStateTreeReferenceOverrides LinkedStateTreeOverrides;                            // 0x0140 (size: 0x10)
    bool bStartLogicAutomatically;                                                    // 0x0150 (size: 0x1)
    FStateTreeInstanceData InstanceData;                                              // 0x0158 (size: 0x10)

    void SetStartLogicAutomatically(const bool bInStartLogicAutomatically);
    void SendStateTreeEvent(const FStateTreeEvent& Event);
    EStateTreeRunStatus GetStateTreeRunStatus();
}; // Size: 0x170

class UStateTreeComponentSchema : public UStateTreeSchema
{
    TSubclassOf<class AActor> ContextActorClass;                                      // 0x0028 (size: 0x8)
    FStateTreeExternalDataDesc ContextActorDataDesc;                                  // 0x0030 (size: 0x18)
    TArray<FStateTreeExternalDataDesc> ContextDataDescs;                              // 0x0048 (size: 0x10)

}; // Size: 0x58

#endif
