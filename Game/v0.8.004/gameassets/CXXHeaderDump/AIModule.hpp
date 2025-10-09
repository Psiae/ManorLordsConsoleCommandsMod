#ifndef UE4SS_SDK_AIModule_HPP
#define UE4SS_SDK_AIModule_HPP

#include "AIModule_enums.hpp"

struct FAIDamageEvent
{
    float Amount;                                                                     // 0x0000 (size: 0x4)
    FVector Location;                                                                 // 0x0008 (size: 0x18)
    FVector HitLocation;                                                              // 0x0020 (size: 0x18)
    class AActor* DamagedActor;                                                       // 0x0038 (size: 0x8)
    class AActor* Instigator;                                                         // 0x0040 (size: 0x8)
    FName Tag;                                                                        // 0x0048 (size: 0x8)

}; // Size: 0x50

struct FAIDataProviderBoolValue : public FAIDataProviderTypedValue
{
    bool DefaultValue;                                                                // 0x0030 (size: 0x1)

}; // Size: 0x38

struct FAIDataProviderFloatValue : public FAIDataProviderTypedValue
{
    float DefaultValue;                                                               // 0x0030 (size: 0x4)

}; // Size: 0x38

struct FAIDataProviderIntValue : public FAIDataProviderTypedValue
{
    int32 DefaultValue;                                                               // 0x0030 (size: 0x4)

}; // Size: 0x38

struct FAIDataProviderStructValue : public FAIDataProviderValue
{
}; // Size: 0x30

struct FAIDataProviderTypedValue : public FAIDataProviderValue
{
    UClass* PropertyType;                                                             // 0x0020 (size: 0x8)

}; // Size: 0x30

struct FAIDataProviderValue
{
    class UAIDataProvider* DataBinding;                                               // 0x0010 (size: 0x8)
    FName DataField;                                                                  // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FAIDynamicParam
{
    FName ParamName;                                                                  // 0x0000 (size: 0x8)
    EAIParamType ParamType;                                                           // 0x0008 (size: 0x1)
    float Value;                                                                      // 0x000C (size: 0x4)
    FBlackboardKeySelector BBKey;                                                     // 0x0010 (size: 0x28)

}; // Size: 0x38

struct FAIMoveRequest
{
    TWeakObjectPtr<class AActor> GoalActor;                                           // 0x0000 (size: 0x8)

}; // Size: 0x50

struct FAINoiseEvent
{
    FVector NoiseLocation;                                                            // 0x0008 (size: 0x18)
    float Loudness;                                                                   // 0x0020 (size: 0x4)
    float MaxRange;                                                                   // 0x0024 (size: 0x4)
    class AActor* Instigator;                                                         // 0x0028 (size: 0x8)
    FName Tag;                                                                        // 0x0030 (size: 0x8)

}; // Size: 0x40

struct FAIPredictionEvent
{
    class AActor* Requestor;                                                          // 0x0000 (size: 0x8)
    class AActor* PredictedActor;                                                     // 0x0008 (size: 0x8)

}; // Size: 0x18

struct FAIRequestID
{
    uint32 RequestID;                                                                 // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FAISenseAffiliationFilter
{
    uint8 bDetectEnemies;                                                             // 0x0000 (size: 0x1)
    uint8 bDetectNeutrals;                                                            // 0x0000 (size: 0x1)
    uint8 bDetectFriendlies;                                                          // 0x0000 (size: 0x1)

}; // Size: 0x4

struct FAISightEvent
{
    class AActor* SeenActor;                                                          // 0x0008 (size: 0x8)
    class AActor* Observer;                                                           // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FAIStimulus
{
    float Age;                                                                        // 0x0000 (size: 0x4)
    float ExpirationAge;                                                              // 0x0004 (size: 0x4)
    float Strength;                                                                   // 0x0008 (size: 0x4)
    FVector StimulusLocation;                                                         // 0x0010 (size: 0x18)
    FVector ReceiverLocation;                                                         // 0x0028 (size: 0x18)
    FName Tag;                                                                        // 0x0040 (size: 0x8)
    uint8 bSuccessfullySensed;                                                        // 0x0054 (size: 0x1)

}; // Size: 0x58

struct FAITeamStimulusEvent
{
    class AActor* Broadcaster;                                                        // 0x0040 (size: 0x8)
    class AActor* Enemy;                                                              // 0x0048 (size: 0x8)

}; // Size: 0x50

struct FAITouchEvent
{
    class AActor* TouchReceiver;                                                      // 0x0018 (size: 0x8)
    class AActor* OtherActor;                                                         // 0x0020 (size: 0x8)

}; // Size: 0x30

struct FActorPerceptionBlueprintInfo
{
    class AActor* Target;                                                             // 0x0000 (size: 0x8)
    TArray<FAIStimulus> LastSensedStimuli;                                            // 0x0008 (size: 0x10)
    uint8 bIsHostile;                                                                 // 0x0018 (size: 0x1)
    uint8 bIsFriendly;                                                                // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FActorPerceptionUpdateInfo
{
    int32 TargetId;                                                                   // 0x0000 (size: 0x4)
    TWeakObjectPtr<class AActor> Target;                                              // 0x0004 (size: 0x8)
    FAIStimulus Stimulus;                                                             // 0x0010 (size: 0x58)

}; // Size: 0x68

struct FBTCompositeChild
{
    class UBTCompositeNode* ChildComposite;                                           // 0x0000 (size: 0x8)
    class UBTTaskNode* ChildTask;                                                     // 0x0008 (size: 0x8)
    TArray<class UBTDecorator*> Decorators;                                           // 0x0010 (size: 0x10)
    TArray<FBTDecoratorLogic> DecoratorOps;                                           // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FBTDecoratorLogic
{
    TEnumAsByte<EBTDecoratorLogic::Type> Operation;                                   // 0x0000 (size: 0x1)
    uint16 Number;                                                                    // 0x0002 (size: 0x2)

}; // Size: 0x4

struct FBehaviorTreeTemplateInfo
{
    class UBehaviorTree* Asset;                                                       // 0x0000 (size: 0x8)
    class UBTCompositeNode* Template;                                                 // 0x0008 (size: 0x8)

}; // Size: 0x18

struct FBlackboardEntry
{
    FName EntryName;                                                                  // 0x0000 (size: 0x8)
    class UBlackboardKeyType* KeyType;                                                // 0x0008 (size: 0x8)
    uint8 bInstanceSynced;                                                            // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FBlackboardKeySelector
{
    TArray<class UBlackboardKeyType*> AllowedTypes;                                   // 0x0000 (size: 0x10)
    FName SelectedKeyName;                                                            // 0x0010 (size: 0x8)
    TSubclassOf<class UBlackboardKeyType> SelectedKeyType;                            // 0x0018 (size: 0x8)
    int32 SelectedKeyID;                                                              // 0x0020 (size: 0x4)
    uint8 bNoneIsAllowedValue;                                                        // 0x0024 (size: 0x1)

}; // Size: 0x28

struct FCompactIndexedHandleBase
{
}; // Size: 0x4

struct FCrowdAvoidanceConfig
{
    float VelocityBias;                                                               // 0x0000 (size: 0x4)
    float DesiredVelocityWeight;                                                      // 0x0004 (size: 0x4)
    float CurrentVelocityWeight;                                                      // 0x0008 (size: 0x4)
    float SideBiasWeight;                                                             // 0x000C (size: 0x4)
    float ImpactTimeWeight;                                                           // 0x0010 (size: 0x4)
    float ImpactTimeRange;                                                            // 0x0014 (size: 0x4)
    uint8 CustomPatternIdx;                                                           // 0x0018 (size: 0x1)
    uint8 AdaptiveDivisions;                                                          // 0x0019 (size: 0x1)
    uint8 AdaptiveRings;                                                              // 0x001A (size: 0x1)
    uint8 AdaptiveDepth;                                                              // 0x001B (size: 0x1)

}; // Size: 0x1C

struct FCrowdAvoidanceSamplingPattern
{
    TArray<float> Angles;                                                             // 0x0000 (size: 0x10)
    TArray<float> Radii;                                                              // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FDefault__AISenseBlueprintListener
{
}; // Size: 0x0

struct FEQSParametrizedQueryExecutionRequest
{
    class UEnvQuery* QueryTemplate;                                                   // 0x0000 (size: 0x8)
    TArray<FAIDynamicParam> QueryConfig;                                              // 0x0008 (size: 0x10)
    FBlackboardKeySelector EQSQueryBlackboardKey;                                     // 0x0018 (size: 0x28)
    TEnumAsByte<EEnvQueryRunMode::Type> RunMode;                                      // 0x0040 (size: 0x1)
    uint8 bUseBBKeyForQueryTemplate;                                                  // 0x0044 (size: 0x1)

}; // Size: 0x48

struct FEnvDirection
{
    TSubclassOf<class UEnvQueryContext> LineFrom;                                     // 0x0000 (size: 0x8)
    TSubclassOf<class UEnvQueryContext> LineTo;                                       // 0x0008 (size: 0x8)
    TSubclassOf<class UEnvQueryContext> Rotation;                                     // 0x0010 (size: 0x8)
    TEnumAsByte<EEnvDirection::Type> DirMode;                                         // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FEnvNamedValue
{
    FName ParamName;                                                                  // 0x0000 (size: 0x8)
    EAIParamType ParamType;                                                           // 0x0008 (size: 0x1)
    float Value;                                                                      // 0x000C (size: 0x4)

}; // Size: 0x10

struct FEnvOverlapData
{
    float ExtentX;                                                                    // 0x0000 (size: 0x4)
    float ExtentY;                                                                    // 0x0004 (size: 0x4)
    float ExtentZ;                                                                    // 0x0008 (size: 0x4)
    FVector ShapeOffset;                                                              // 0x0010 (size: 0x18)
    TEnumAsByte<ECollisionChannel> OverlapChannel;                                    // 0x0028 (size: 0x1)
    TEnumAsByte<EEnvOverlapShape::Type> OverlapShape;                                 // 0x0029 (size: 0x1)
    uint8 bOnlyBlockingHits;                                                          // 0x002C (size: 0x1)
    uint8 bOverlapComplex;                                                            // 0x002C (size: 0x1)
    uint8 bSkipOverlapQuerier;                                                        // 0x002C (size: 0x1)

}; // Size: 0x30

struct FEnvQueryInstanceCache
{
    class UEnvQuery* Template;                                                        // 0x0000 (size: 0x8)

}; // Size: 0x180

struct FEnvQueryManagerConfig
{
    float MaxAllowedTestingTime;                                                      // 0x0000 (size: 0x4)
    bool bTestQueriesUsingBreadth;                                                    // 0x0004 (size: 0x1)
    int32 QueryCountWarningThreshold;                                                 // 0x0008 (size: 0x4)
    double QueryCountWarningInterval;                                                 // 0x0010 (size: 0x8)
    double ExecutionTimeWarningSeconds;                                               // 0x0018 (size: 0x8)
    double HandlingResultTimeWarningSeconds;                                          // 0x0020 (size: 0x8)
    double GenerationTimeWarningSeconds;                                              // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FEnvQueryRequest
{
    class UEnvQuery* QueryTemplate;                                                   // 0x0000 (size: 0x8)
    class UObject* Owner;                                                             // 0x0008 (size: 0x8)
    class UWorld* World;                                                              // 0x0010 (size: 0x8)

}; // Size: 0x68

struct FEnvQueryResult
{
    TSubclassOf<class UEnvQueryItemType> ItemType;                                    // 0x0010 (size: 0x8)
    int32 OptionIndex;                                                                // 0x002C (size: 0x4)
    int32 QueryID;                                                                    // 0x0030 (size: 0x4)

}; // Size: 0x40

struct FEnvTraceData
{
    int32 VersionNum;                                                                 // 0x0000 (size: 0x4)
    TSubclassOf<class UNavigationQueryFilter> NavigationFilter;                       // 0x0008 (size: 0x8)
    float ProjectDown;                                                                // 0x0010 (size: 0x4)
    float ProjectUp;                                                                  // 0x0014 (size: 0x4)
    float ExtentX;                                                                    // 0x0018 (size: 0x4)
    float ExtentY;                                                                    // 0x001C (size: 0x4)
    float ExtentZ;                                                                    // 0x0020 (size: 0x4)
    float PostProjectionVerticalOffset;                                               // 0x0024 (size: 0x4)
    TEnumAsByte<ETraceTypeQuery> TraceChannel;                                        // 0x0028 (size: 0x1)
    TEnumAsByte<ECollisionChannel> SerializedChannel;                                 // 0x0029 (size: 0x1)
    FName TraceProfileName;                                                           // 0x002C (size: 0x8)
    TEnumAsByte<EEnvTraceShape::Type> TraceShape;                                     // 0x0034 (size: 0x1)
    TEnumAsByte<EEnvQueryTrace::Type> TraceMode;                                      // 0x0035 (size: 0x1)
    uint8 bTraceComplex;                                                              // 0x0038 (size: 0x1)
    uint8 bOnlyBlockingHits;                                                          // 0x0038 (size: 0x1)
    uint8 bCanTraceOnNavMesh;                                                         // 0x0038 (size: 0x1)
    uint8 bCanTraceOnGeometry;                                                        // 0x0038 (size: 0x1)
    uint8 bCanDisableTrace;                                                           // 0x0038 (size: 0x1)
    uint8 bCanProjectDown;                                                            // 0x0038 (size: 0x1)

}; // Size: 0x40

struct FGenericTeamId
{
    uint8 TeamID;                                                                     // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FIndexedHandleBase : public FSimpleIndexedHandleBase
{
}; // Size: 0x8

struct FIntervalCountdown
{
    float Interval;                                                                   // 0x0000 (size: 0x4)

}; // Size: 0x8

struct FPawnActionEvent
{
    class UDEPRECATED_PawnAction* Action;                                             // 0x0000 (size: 0x8)

}; // Size: 0x18

struct FPawnActionStack
{
    class UDEPRECATED_PawnAction* TopAction;                                          // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FRecastGraphWrapper
{
    class ARecastNavMesh* RecastNavMeshActor;                                         // 0x0000 (size: 0x8)

}; // Size: 0xB8

struct FSequentialIDBase
{
    uint32 Value;                                                                     // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FSimpleIndexedHandleBase
{
}; // Size: 0x4

class AAIController : public AController
{
    uint8 bStartAILogicOnPossess;                                                     // 0x0360 (size: 0x1)
    uint8 bStopAILogicOnUnposses;                                                     // 0x0360 (size: 0x1)
    uint8 bLOSflag;                                                                   // 0x0360 (size: 0x1)
    uint8 bSkipExtraLOSChecks;                                                        // 0x0360 (size: 0x1)
    uint8 bAllowStrafe;                                                               // 0x0360 (size: 0x1)
    uint8 bWantsPlayerState;                                                          // 0x0360 (size: 0x1)
    uint8 bSetControlRotationFromPawnOrientation;                                     // 0x0360 (size: 0x1)
    class UPathFollowingComponent* PathFollowingComponent;                            // 0x0368 (size: 0x8)
    class UBrainComponent* BrainComponent;                                            // 0x0370 (size: 0x8)
    class UAIPerceptionComponent* PerceptionComponent;                                // 0x0378 (size: 0x8)
    class UDEPRECATED_PawnActionsComponent* ActionsComp;                              // 0x0380 (size: 0x8)
    class UBlackboardComponent* Blackboard;                                           // 0x0388 (size: 0x8)
    class UGameplayTasksComponent* CachedGameplayTasksComponent;                      // 0x0390 (size: 0x8)
    TSubclassOf<class UNavigationQueryFilter> DefaultNavigationFilterClass;           // 0x0398 (size: 0x8)
    FAIControllerReceiveMoveCompleted ReceiveMoveCompleted;                           // 0x03A0 (size: 0x10)
    void AIMoveCompletedSignature(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> Result);

    bool UseBlackboard(class UBlackboardData* BlackboardAsset, class UBlackboardComponent*& BlackboardComponent);
    void UnclaimTaskResource(TSubclassOf<class UGameplayTaskResource> ResourceClass);
    void SetPathFollowingComponent(class UPathFollowingComponent* NewPFComponent);
    void SetMoveBlockDetection(bool bEnable);
    bool RunBehaviorTree(class UBehaviorTree* BTAsset);
    void OnUsingBlackBoard(class UBlackboardComponent* BlackboardComp, class UBlackboardData* BlackboardAsset);
    void OnGameplayTaskResourcesClaimed(FGameplayResourceSet NewlyClaimed, FGameplayResourceSet FreshlyReleased);
    TEnumAsByte<EPathFollowingRequestResult::Type> MoveToLocation(const FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, TSubclassOf<class UNavigationQueryFilter> FilterClass, bool bAllowPartialPath);
    TEnumAsByte<EPathFollowingRequestResult::Type> MoveToActor(class AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, TSubclassOf<class UNavigationQueryFilter> FilterClass, bool bAllowPartialPath);
    void K2_SetFocus(class AActor* NewFocus);
    void K2_SetFocalPoint(FVector FP);
    void K2_ClearFocus();
    bool HasPartialPath();
    class UPathFollowingComponent* GetPathFollowingComponent();
    TEnumAsByte<EPathFollowingStatus::Type> GetMoveStatus();
    FVector GetImmediateMoveDestination();
    class AActor* GetFocusActor();
    FVector GetFocalPointOnActor(const class AActor* Actor);
    FVector GetFocalPoint();
    class UDEPRECATED_PawnActionsComponent* GetDeprecatedActionsComponent();
    class UAIPerceptionComponent* GetAIPerceptionComponent();
    void ClaimTaskResource(TSubclassOf<class UGameplayTaskResource> ResourceClass);
}; // Size: 0x3B8

class ADetourCrowdAIController : public AAIController
{
}; // Size: 0x3B8

class AEQSTestingPawn : public ACharacter
{
    class UEnvQuery* QueryTemplate;                                                   // 0x0670 (size: 0x8)
    TArray<FEnvNamedValue> QueryParams;                                               // 0x0678 (size: 0x10)
    TArray<FAIDynamicParam> QueryConfig;                                              // 0x0688 (size: 0x10)
    float TimeLimitPerStep;                                                           // 0x0698 (size: 0x4)
    int32 StepToDebugDraw;                                                            // 0x069C (size: 0x4)
    EEnvQueryHightlightMode HighlightMode;                                            // 0x06A0 (size: 0x1)
    uint8 bDrawLabels;                                                                // 0x06A4 (size: 0x1)
    uint8 bDrawFailedItems;                                                           // 0x06A4 (size: 0x1)
    uint8 bReRunQueryOnlyOnFinishedMove;                                              // 0x06A4 (size: 0x1)
    uint8 bShouldBeVisibleInGame;                                                     // 0x06A4 (size: 0x1)
    uint8 bTickDuringGame;                                                            // 0x06A4 (size: 0x1)
    TEnumAsByte<EEnvQueryRunMode::Type> QueryingMode;                                 // 0x06A8 (size: 0x1)
    FNavAgentProperties NavAgentProperties;                                           // 0x06B0 (size: 0x38)

}; // Size: 0x710

class AGridPathAIController : public AAIController
{
}; // Size: 0x3B8

class ANavLinkProxy : public AActor
{
    TArray<FNavigationLink> PointLinks;                                               // 0x02A0 (size: 0x10)
    TArray<FNavigationSegmentLink> SegmentLinks;                                      // 0x02B0 (size: 0x10)
    class UNavLinkCustomComponent* SmartLinkComp;                                     // 0x02C0 (size: 0x8)
    bool bSmartLinkIsRelevant;                                                        // 0x02C8 (size: 0x1)
    FNavLinkProxyOnSmartLinkReached OnSmartLinkReached;                               // 0x02D0 (size: 0x10)
    void SmartLinkReachedSignature(class AActor* MovingActor, const FVector& DestinationPoint);

    void SetSmartLinkEnabled(bool bEnabled);
    void ResumePathFollowing(class AActor* Agent);
    void ReceiveSmartLinkReached(class AActor* Agent, const FVector& Destination);
    bool IsSmartLinkEnabled();
    bool HasMovingAgents();
}; // Size: 0x2E0

class IAIPerceptionListenerInterface : public IInterface
{
}; // Size: 0x28

class IAIResourceInterface : public IInterface
{
}; // Size: 0x28

class IAISightTargetInterface : public IInterface
{
}; // Size: 0x28

class IBlackboardAssetProvider : public IInterface
{

    class UBlackboardData* GetBlackboardAsset();
}; // Size: 0x28

class ICrowdAgentInterface : public IInterface
{
}; // Size: 0x28

class IEQSQueryResultSourceInterface : public IInterface
{
}; // Size: 0x28

class IGenericTeamAgentInterface : public IInterface
{
}; // Size: 0x28

class UAIAsyncTaskBlueprintProxy : public UObject
{
    FAIAsyncTaskBlueprintProxyOnSuccess OnSuccess;                                    // 0x0028 (size: 0x10)
    void OAISimpleDelegate(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    FAIAsyncTaskBlueprintProxyOnFail OnFail;                                          // 0x0038 (size: 0x10)
    void OAISimpleDelegate(TEnumAsByte<EPathFollowingResult::Type> MovementResult);

    void OnMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult::Type> MovementResult);
}; // Size: 0x68

class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{

    void UnlockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);
    class APawn* SpawnAIFromClass(class UObject* WorldContextObject, TSubclassOf<class APawn> PawnClass, class UBehaviorTree* BehaviorTree, FVector Location, FRotator Rotation, bool bNoCollisionFail, class AActor* Owner);
    void SimpleMoveToLocation(class AController* Controller, const FVector& Goal);
    void SimpleMoveToActor(class AController* Controller, const class AActor* Goal);
    void SendAIMessage(class APawn* Target, FName Message, class UObject* MessageSource, bool bSuccess);
    void LockAIResourcesWithAnimation(class UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);
    bool IsValidAIRotation(FRotator Rotation);
    bool IsValidAILocation(FVector Location);
    bool IsValidAIDirection(FVector DirectionVector);
    int32 GetNextNavLinkIndex(const class AController* Controller);
    TArray<FVector> GetCurrentPathPoints(class AController* Controller);
    int32 GetCurrentPathIndex(const class AController* Controller);
    class UNavigationPath* GetCurrentPath(class AController* Controller);
    class UBlackboardComponent* GetBlackboard(class AActor* Target);
    class AAIController* GetAIController(class AActor* ControlledActor);
    class UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(class UObject* WorldContextObject, class APawn* Pawn, FVector Destination, class AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap);
}; // Size: 0x28

class UAIDataProvider : public UObject
{
}; // Size: 0x28

class UAIDataProvider_QueryParams : public UAIDataProvider
{
    FName ParamName;                                                                  // 0x0028 (size: 0x8)
    float FloatValue;                                                                 // 0x0030 (size: 0x4)
    int32 IntValue;                                                                   // 0x0034 (size: 0x4)
    bool BoolValue;                                                                   // 0x0038 (size: 0x1)

}; // Size: 0x40

class UAIDataProvider_Random : public UAIDataProvider_QueryParams
{
    float Min;                                                                        // 0x0040 (size: 0x4)
    float Max;                                                                        // 0x0044 (size: 0x4)
    uint8 bInteger;                                                                   // 0x0048 (size: 0x1)

}; // Size: 0x50

class UAIHotSpotManager : public UObject
{
}; // Size: 0x28

class UAIPerceptionComponent : public UActorComponent
{
    TArray<class UAISenseConfig*> SensesConfig;                                       // 0x00A0 (size: 0x10)
    TSubclassOf<class UAISense> DominantSense;                                        // 0x00B0 (size: 0x8)
    class AAIController* AIOwner;                                                     // 0x00C8 (size: 0x8)
    FAIPerceptionComponentOnPerceptionUpdated OnPerceptionUpdated;                    // 0x0150 (size: 0x10)
    void PerceptionUpdatedDelegate(const TArray<class AActor*>& UpdatedActors);
    FAIPerceptionComponentOnTargetPerceptionForgotten OnTargetPerceptionForgotten;    // 0x0160 (size: 0x10)
    void ActorPerceptionForgetUpdatedDelegate(class AActor* Actor);
    FAIPerceptionComponentOnTargetPerceptionUpdated OnTargetPerceptionUpdated;        // 0x0170 (size: 0x10)
    void ActorPerceptionUpdatedDelegate(class AActor* Actor, FAIStimulus Stimulus);
    FAIPerceptionComponentOnTargetPerceptionInfoUpdated OnTargetPerceptionInfoUpdated; // 0x0180 (size: 0x10)
    void ActorPerceptionInfoUpdatedDelegate(const FActorPerceptionUpdateInfo& UpdateInfo);

    void SetSenseEnabled(TSubclassOf<class UAISense> SenseClass, const bool bEnable);
    void RequestStimuliListenerUpdate();
    void OnOwnerEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    bool IsSenseEnabled(TSubclassOf<class UAISense> SenseClass);
    void GetPerceivedHostileActorsBySense(const TSubclassOf<class UAISense> SenseToUse, TArray<class AActor*>& OutActors);
    void GetPerceivedHostileActors(TArray<class AActor*>& OutActors);
    void GetKnownPerceivedActors(TSubclassOf<class UAISense> SenseToUse, TArray<class AActor*>& OutActors);
    void GetCurrentlyPerceivedActors(TSubclassOf<class UAISense> SenseToUse, TArray<class AActor*>& OutActors);
    bool GetActorsPerception(class AActor* Actor, FActorPerceptionBlueprintInfo& Info);
    void ForgetAll();
}; // Size: 0x190

class UAIPerceptionStimuliSourceComponent : public UActorComponent
{
    uint8 bAutoRegisterAsSource;                                                      // 0x00A0 (size: 0x1)
    TArray<class TSubclassOf<UAISense>> RegisterAsSourceForSenses;                    // 0x00A8 (size: 0x10)

    void UnregisterFromSense(TSubclassOf<class UAISense> SenseClass);
    void UnregisterFromPerceptionSystem();
    void RegisterWithPerceptionSystem();
    void RegisterForSense(TSubclassOf<class UAISense> SenseClass);
}; // Size: 0xB8

class UAIPerceptionSystem : public UAISubsystem
{
    TArray<class UAISense*> Senses;                                                   // 0x0088 (size: 0x10)
    float PerceptionAgingRate;                                                        // 0x0098 (size: 0x4)

    void ReportPerceptionEvent(class UObject* WorldContextObject, class UAISenseEvent* PerceptionEvent);
    void ReportEvent(class UAISenseEvent* PerceptionEvent);
    bool RegisterPerceptionStimuliSource(class UObject* WorldContextObject, TSubclassOf<class UAISense> Sense, class AActor* Target);
    void OnPerceptionStimuliSourceEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    TSubclassOf<class UAISense> GetSenseClassForStimulus(class UObject* WorldContextObject, const FAIStimulus& Stimulus);
}; // Size: 0x138

class UAIResource_Logic : public UGameplayTaskResource
{
}; // Size: 0x38

class UAIResource_Movement : public UGameplayTaskResource
{
}; // Size: 0x38

class UAISense : public UObject
{
    EAISenseNotifyType NotifyType;                                                    // 0x0028 (size: 0x1)
    uint8 bWantsNewPawnNotification;                                                  // 0x002C (size: 0x1)
    uint8 bAutoRegisterAllPawnsAsSources;                                             // 0x002C (size: 0x1)
    class UAIPerceptionSystem* PerceptionSystemInstance;                              // 0x0030 (size: 0x8)

}; // Size: 0x78

class UAISenseBlueprintListener : public UUserDefinedStruct
{
}; // Size: 0x108

class UAISenseConfig : public UObject
{
    FColor DebugColor;                                                                // 0x0028 (size: 0x4)
    float MaxAge;                                                                     // 0x002C (size: 0x4)
    uint8 bStartsEnabled;                                                             // 0x0030 (size: 0x1)

}; // Size: 0x48

class UAISenseConfig_Blueprint : public UAISenseConfig
{
    TSubclassOf<class UAISense_Blueprint> Implementation;                             // 0x0048 (size: 0x8)

}; // Size: 0x50

class UAISenseConfig_Damage : public UAISenseConfig
{
    TSubclassOf<class UAISense_Damage> Implementation;                                // 0x0048 (size: 0x8)

}; // Size: 0x50

class UAISenseConfig_Hearing : public UAISenseConfig
{
    TSubclassOf<class UAISense_Hearing> Implementation;                               // 0x0048 (size: 0x8)
    float HearingRange;                                                               // 0x0050 (size: 0x4)
    float LoSHearingRange;                                                            // 0x0054 (size: 0x4)
    uint8 bUseLoSHearing;                                                             // 0x0058 (size: 0x1)
    FAISenseAffiliationFilter DetectionByAffiliation;                                 // 0x005C (size: 0x4)

}; // Size: 0x60

class UAISenseConfig_Prediction : public UAISenseConfig
{
}; // Size: 0x48

class UAISenseConfig_Sight : public UAISenseConfig
{
    TSubclassOf<class UAISense_Sight> Implementation;                                 // 0x0048 (size: 0x8)
    float SightRadius;                                                                // 0x0050 (size: 0x4)
    float LoseSightRadius;                                                            // 0x0054 (size: 0x4)
    float PeripheralVisionAngleDegrees;                                               // 0x0058 (size: 0x4)
    FAISenseAffiliationFilter DetectionByAffiliation;                                 // 0x005C (size: 0x4)
    float AutoSuccessRangeFromLastSeenLocation;                                       // 0x0060 (size: 0x4)
    float PointOfViewBackwardOffset;                                                  // 0x0064 (size: 0x4)
    float NearClippingRadius;                                                         // 0x0068 (size: 0x4)

}; // Size: 0x70

class UAISenseConfig_Team : public UAISenseConfig
{
}; // Size: 0x48

class UAISenseConfig_Touch : public UAISenseConfig
{
    FAISenseAffiliationFilter DetectionByAffiliation;                                 // 0x0048 (size: 0x4)

}; // Size: 0x50

class UAISenseEvent : public UObject
{
}; // Size: 0x28

class UAISenseEvent_Damage : public UAISenseEvent
{
    FAIDamageEvent Event;                                                             // 0x0028 (size: 0x50)

}; // Size: 0x78

class UAISenseEvent_Hearing : public UAISenseEvent
{
    FAINoiseEvent Event;                                                              // 0x0028 (size: 0x40)

}; // Size: 0x68

class UAISense_Blueprint : public UAISense
{
    TSubclassOf<class UUserDefinedStruct> ListenerDataType;                           // 0x0078 (size: 0x8)
    TArray<class UAIPerceptionComponent*> ListenerContainer;                          // 0x0080 (size: 0x10)
    TArray<class UAISenseEvent*> UnprocessedEvents;                                   // 0x0090 (size: 0x10)

    float OnUpdate(const TArray<class UAISenseEvent*>& EventsToProcess);
    void OnListenerUpdated(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
    void OnListenerUnregistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
    void OnListenerRegistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
    void K2_OnNewPawn(class APawn* NewPawn);
    void GetAllListenerComponents(TArray<class UAIPerceptionComponent*>& ListenerComponents);
    void GetAllListenerActors(TArray<class AActor*>& ListenerActors);
}; // Size: 0xA0

class UAISense_Damage : public UAISense
{
    TArray<FAIDamageEvent> RegisteredEvents;                                          // 0x0078 (size: 0x10)

    void ReportDamageEvent(class UObject* WorldContextObject, class AActor* DamagedActor, class AActor* Instigator, float DamageAmount, FVector EventLocation, FVector HitLocation, FName Tag);
}; // Size: 0x88

class UAISense_Hearing : public UAISense
{
    TArray<FAINoiseEvent> NoiseEvents;                                                // 0x0078 (size: 0x10)
    float SpeedOfSoundSq;                                                             // 0x0088 (size: 0x4)

    void ReportNoiseEvent(class UObject* WorldContextObject, FVector NoiseLocation, float Loudness, class AActor* Instigator, float MaxRange, FName Tag);
}; // Size: 0xE0

class UAISense_Prediction : public UAISense
{
    TArray<FAIPredictionEvent> RegisteredEvents;                                      // 0x0078 (size: 0x10)

    void RequestPawnPredictionEvent(class APawn* Requestor, class AActor* PredictedActor, float PredictionTime);
    void RequestControllerPredictionEvent(class AAIController* Requestor, class AActor* PredictedActor, float PredictionTime);
}; // Size: 0x88

class UAISense_Sight : public UAISense
{
    int32 MaxTracesPerTick;                                                           // 0x0150 (size: 0x4)
    int32 MaxAsyncTracesPerTick;                                                      // 0x0154 (size: 0x4)
    int32 MinQueriesPerTimeSliceCheck;                                                // 0x0158 (size: 0x4)
    double MaxTimeSlicePerTick;                                                       // 0x0160 (size: 0x8)
    float HighImportanceQueryDistanceThreshold;                                       // 0x0168 (size: 0x4)
    float MaxQueryImportance;                                                         // 0x0170 (size: 0x4)
    float SightLimitQueryImportance;                                                  // 0x0174 (size: 0x4)
    float PendingQueriesBudgetReductionRatio;                                         // 0x0178 (size: 0x4)
    bool bUseAsynchronousTraceForDefaultSightQueries;                                 // 0x017C (size: 0x1)

}; // Size: 0x1A8

class UAISense_Team : public UAISense
{
    TArray<FAITeamStimulusEvent> RegisteredEvents;                                    // 0x0078 (size: 0x10)

}; // Size: 0x88

class UAISense_Touch : public UAISense
{
    TArray<FAITouchEvent> RegisteredEvents;                                           // 0x0078 (size: 0x10)

    void ReportTouchEvent(class UObject* WorldContextObject, class AActor* TouchReceiver, class AActor* OtherActor, FVector Location);
}; // Size: 0xD8

class UAISubsystem : public UObject
{
    class UAISystem* AISystem;                                                        // 0x0030 (size: 0x8)

}; // Size: 0x38

class UAISystem : public UAISystemBase
{
    FSoftClassPath PerceptionSystemClassName;                                         // 0x0060 (size: 0x20)
    FSoftClassPath HotSpotManagerClassName;                                           // 0x0080 (size: 0x20)
    FSoftClassPath EnvQueryManagerClassName;                                          // 0x00A0 (size: 0x20)
    float AcceptanceRadius;                                                           // 0x00C0 (size: 0x4)
    float PathfollowingRegularPathPointAcceptanceRadius;                              // 0x00C4 (size: 0x4)
    float PathfollowingNavLinkAcceptanceRadius;                                       // 0x00C8 (size: 0x4)
    bool bFinishMoveOnGoalOverlap;                                                    // 0x00CC (size: 0x1)
    bool bAcceptPartialPaths;                                                         // 0x00CD (size: 0x1)
    bool bAllowStrafing;                                                              // 0x00CE (size: 0x1)
    bool bAllowControllersAsEQSQuerier;                                               // 0x00CF (size: 0x1)
    bool bEnableDebuggerPlugin;                                                       // 0x00D0 (size: 0x1)
    bool bForgetStaleActors;                                                          // 0x00D1 (size: 0x1)
    bool bAddBlackboardSelfKey;                                                       // 0x00D2 (size: 0x1)
    bool bClearBBEntryOnBTEQSFail;                                                    // 0x00D3 (size: 0x1)
    bool bBlackboardKeyDecoratorAllowsNoneAsValue;                                    // 0x00D4 (size: 0x1)
    TSoftObjectPtr<UBlackboardData> DefaultBlackboard;                                // 0x00D8 (size: 0x28)
    TEnumAsByte<ECollisionChannel> DefaultSightCollisionChannel;                      // 0x0100 (size: 0x1)
    class UBehaviorTreeManager* BehaviorTreeManager;                                  // 0x0108 (size: 0x8)
    class UEnvQueryManager* EnvironmentQueryManager;                                  // 0x0110 (size: 0x8)
    class UAIPerceptionSystem* PerceptionSystem;                                      // 0x0118 (size: 0x8)
    TArray<class UAIAsyncTaskBlueprintProxy*> AllProxyObjects;                        // 0x0120 (size: 0x10)
    class UAIHotSpotManager* HotSpotManager;                                          // 0x0130 (size: 0x8)
    class UNavLocalGridManager* NavLocalGrids;                                        // 0x0138 (size: 0x8)

    void AILoggingVerbose();
    void AIIgnorePlayers();
}; // Size: 0x1A0

class UAITask : public UGameplayTask
{
    class AAIController* OwnerController;                                             // 0x0068 (size: 0x8)

}; // Size: 0x70

class UAITask_LockLogic : public UAITask
{
}; // Size: 0x70

class UAITask_MoveTo : public UAITask
{
    FAITask_MoveToOnRequestFailed OnRequestFailed;                                    // 0x0070 (size: 0x10)
    void GenericGameplayTaskDelegate();
    FAITask_MoveToOnMoveFinished OnMoveFinished;                                      // 0x0080 (size: 0x10)
    void MoveTaskCompletedSignature(TEnumAsByte<EPathFollowingResult::Type> Result, class AAIController* AIController);
    FAIMoveRequest MoveRequest;                                                       // 0x0090 (size: 0x50)

    class UAITask_MoveTo* AIMoveTo(class AAIController* Controller, FVector GoalLocation, class AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag::Type> StopOnOverlap, TEnumAsByte<EAIOptionFlag::Type> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuousGoalTracking, TEnumAsByte<EAIOptionFlag::Type> ProjectGoalOnNavigation, TEnumAsByte<EAIOptionFlag::Type> RequireNavigableEndLocation);
}; // Size: 0x120

class UAITask_RunEQS : public UAITask
{

    class UAITask_RunEQS* RunEQS(class AAIController* Controller, class UEnvQuery* QueryTemplate);
}; // Size: 0xE8

class UBTAuxiliaryNode : public UBTNode
{
}; // Size: 0x60

class UBTCompositeNode : public UBTNode
{
    TArray<FBTCompositeChild> Children;                                               // 0x0058 (size: 0x10)
    TArray<class UBTService*> Services;                                               // 0x0068 (size: 0x10)
    uint8 bApplyDecoratorScope;                                                       // 0x0078 (size: 0x1)

}; // Size: 0x80

class UBTComposite_Selector : public UBTCompositeNode
{
}; // Size: 0x80

class UBTComposite_Sequence : public UBTCompositeNode
{
}; // Size: 0x80

class UBTComposite_SimpleParallel : public UBTCompositeNode
{
    TEnumAsByte<EBTParallelMode::Type> FinishMode;                                    // 0x0080 (size: 0x1)

}; // Size: 0x88

class UBTDecorator : public UBTAuxiliaryNode
{
    uint8 bInverseCondition;                                                          // 0x0060 (size: 0x1)
    TEnumAsByte<EBTFlowAbortMode::Type> FlowAbortMode;                                // 0x0064 (size: 0x1)

}; // Size: 0x68

class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
{
    int32 IntValue;                                                                   // 0x0090 (size: 0x4)
    float FloatValue;                                                                 // 0x0094 (size: 0x4)
    FString StringValue;                                                              // 0x0098 (size: 0x10)
    FString CachedDescription;                                                        // 0x00A8 (size: 0x10)
    uint8 OperationType;                                                              // 0x00B8 (size: 0x1)
    TEnumAsByte<EBTBlackboardRestart::Type> NotifyObserver;                           // 0x00B9 (size: 0x1)

}; // Size: 0xC0

class UBTDecorator_BlackboardBase : public UBTDecorator
{
    FBlackboardKeySelector BlackboardKey;                                             // 0x0068 (size: 0x28)

}; // Size: 0x90

class UBTDecorator_BlueprintBase : public UBTDecorator
{
    class AAIController* AIOwner;                                                     // 0x0068 (size: 0x8)
    class AActor* ActorOwner;                                                         // 0x0070 (size: 0x8)
    TArray<FName> ObservedKeyNames;                                                   // 0x0078 (size: 0x10)
    uint8 bShowPropertyDetails;                                                       // 0x0098 (size: 0x1)
    uint8 bCheckConditionOnlyBlackBoardChanges;                                       // 0x0098 (size: 0x1)

    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
    void ReceiveObserverDeactivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveObserverDeactivated(class AActor* OwnerActor);
    void ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveObserverActivated(class AActor* OwnerActor);
    void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveExecutionStart(class AActor* OwnerActor);
    void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<EBTNodeResult::Type> NodeResult);
    void ReceiveExecutionFinish(class AActor* OwnerActor, TEnumAsByte<EBTNodeResult::Type> NodeResult);
    bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    bool PerformConditionCheck(class AActor* OwnerActor);
    bool IsDecoratorObserverActive();
    bool IsDecoratorExecutionActive();
}; // Size: 0xA0

class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
{
    FBlackboardKeySelector ActorToCheck;                                              // 0x0068 (size: 0x28)
    EGameplayContainerMatchType TagsToMatch;                                          // 0x0090 (size: 0x1)
    FGameplayTagContainer GameplayTags;                                               // 0x0098 (size: 0x20)
    FString CachedDescription;                                                        // 0x00B8 (size: 0x10)

}; // Size: 0xC8

class UBTDecorator_CompareBBEntries : public UBTDecorator
{
    TEnumAsByte<EBlackBoardEntryComparison::Type> Operator;                           // 0x0068 (size: 0x1)
    FBlackboardKeySelector BlackboardKeyA;                                            // 0x0070 (size: 0x28)
    FBlackboardKeySelector BlackboardKeyB;                                            // 0x0098 (size: 0x28)

}; // Size: 0xC0

class UBTDecorator_ConditionalLoop : public UBTDecorator_Blackboard
{
}; // Size: 0xC0

class UBTDecorator_ConeCheck : public UBTDecorator
{
    float ConeHalfAngle;                                                              // 0x0068 (size: 0x4)
    FBlackboardKeySelector ConeOrigin;                                                // 0x0070 (size: 0x28)
    FBlackboardKeySelector ConeDirection;                                             // 0x0098 (size: 0x28)
    FBlackboardKeySelector Observed;                                                  // 0x00C0 (size: 0x28)

}; // Size: 0xF0

class UBTDecorator_Cooldown : public UBTDecorator
{
    float CoolDownTime;                                                               // 0x0068 (size: 0x4)

}; // Size: 0x70

class UBTDecorator_DoesPathExist : public UBTDecorator
{
    FBlackboardKeySelector BlackboardKeyA;                                            // 0x0068 (size: 0x28)
    FBlackboardKeySelector BlackboardKeyB;                                            // 0x0090 (size: 0x28)
    uint8 bUseSelf;                                                                   // 0x00B8 (size: 0x1)
    TEnumAsByte<EPathExistanceQueryType::Type> PathQueryType;                         // 0x00BC (size: 0x1)
    TSubclassOf<class UNavigationQueryFilter> FilterClass;                            // 0x00C0 (size: 0x8)

}; // Size: 0xC8

class UBTDecorator_ForceSuccess : public UBTDecorator
{
}; // Size: 0x68

class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase
{
    float AcceptableRadius;                                                           // 0x0090 (size: 0x4)
    FAIDataProviderFloatValue ParametrizedAcceptableRadius;                           // 0x0098 (size: 0x38)
    FAIDistanceType GeometricDistanceType;                                            // 0x00D0 (size: 0x1)
    uint8 bUseParametrizedRadius;                                                     // 0x00D4 (size: 0x1)
    uint8 bUseNavAgentGoalLocation;                                                   // 0x00D4 (size: 0x1)
    uint8 bPathFindingBasedTest;                                                      // 0x00D4 (size: 0x1)

}; // Size: 0xD8

class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase
{
    UClass* TestClass;                                                                // 0x0090 (size: 0x8)

}; // Size: 0x98

class UBTDecorator_KeepInCone : public UBTDecorator
{
    float ConeHalfAngle;                                                              // 0x0068 (size: 0x4)
    FBlackboardKeySelector ConeOrigin;                                                // 0x0070 (size: 0x28)
    FBlackboardKeySelector Observed;                                                  // 0x0098 (size: 0x28)
    uint8 bUseSelfAsOrigin;                                                           // 0x00C0 (size: 0x1)
    uint8 bUseSelfAsObserved;                                                         // 0x00C0 (size: 0x1)

}; // Size: 0xC8

class UBTDecorator_Loop : public UBTDecorator
{
    int32 NumLoops;                                                                   // 0x0068 (size: 0x4)
    bool bInfiniteLoop;                                                               // 0x006C (size: 0x1)
    float InfiniteLoopTimeoutTime;                                                    // 0x0070 (size: 0x4)

}; // Size: 0x78

class UBTDecorator_ReachedMoveGoal : public UBTDecorator
{
}; // Size: 0x68

class UBTDecorator_SetTagCooldown : public UBTDecorator
{
    FGameplayTag CooldownTag;                                                         // 0x0068 (size: 0x8)
    float CooldownDuration;                                                           // 0x0070 (size: 0x4)
    bool bAddToExistingDuration;                                                      // 0x0074 (size: 0x1)

}; // Size: 0x78

class UBTDecorator_TagCooldown : public UBTDecorator
{
    FGameplayTag CooldownTag;                                                         // 0x0068 (size: 0x8)
    float CooldownDuration;                                                           // 0x0070 (size: 0x4)
    bool bAddToExistingDuration;                                                      // 0x0074 (size: 0x1)
    bool bActivatesCooldown;                                                          // 0x0075 (size: 0x1)

}; // Size: 0x78

class UBTDecorator_TimeLimit : public UBTDecorator
{
    float TimeLimit;                                                                  // 0x0068 (size: 0x4)

}; // Size: 0x70

class UBTFunctionLibrary : public UBlueprintFunctionLibrary
{

    void StopUsingExternalEvent(class UBTNode* NodeOwner);
    void StartUsingExternalEvent(class UBTNode* NodeOwner, class AActor* OwningActor);
    void SetBlackboardValueAsVector(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key, FVector Value);
    void SetBlackboardValueAsString(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key, FString Value);
    void SetBlackboardValueAsRotator(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key, FRotator Value);
    void SetBlackboardValueAsObject(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key, class UObject* Value);
    void SetBlackboardValueAsName(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key, FName Value);
    void SetBlackboardValueAsInt(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key, int32 Value);
    void SetBlackboardValueAsFloat(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key, float Value);
    void SetBlackboardValueAsEnum(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key, uint8 Value);
    void SetBlackboardValueAsClass(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key, UClass* Value);
    void SetBlackboardValueAsBool(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key, bool Value);
    class UBlackboardComponent* GetOwnersBlackboard(class UBTNode* NodeOwner);
    class UBehaviorTreeComponent* GetOwnerComponent(class UBTNode* NodeOwner);
    FVector GetBlackboardValueAsVector(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    FString GetBlackboardValueAsString(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    FRotator GetBlackboardValueAsRotator(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    class UObject* GetBlackboardValueAsObject(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    FName GetBlackboardValueAsName(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    int32 GetBlackboardValueAsInt(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    float GetBlackboardValueAsFloat(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    uint8 GetBlackboardValueAsEnum(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    UClass* GetBlackboardValueAsClass(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    bool GetBlackboardValueAsBool(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    class AActor* GetBlackboardValueAsActor(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    void ClearBlackboardValueAsVector(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
    void ClearBlackboardValue(class UBTNode* NodeOwner, const FBlackboardKeySelector& Key);
}; // Size: 0x28

class UBTNode : public UObject
{
    FString NodeName;                                                                 // 0x0030 (size: 0x10)
    class UBehaviorTree* TreeAsset;                                                   // 0x0040 (size: 0x8)
    class UBTCompositeNode* ParentNode;                                               // 0x0048 (size: 0x8)

}; // Size: 0x58

class UBTService : public UBTAuxiliaryNode
{
    float Interval;                                                                   // 0x0060 (size: 0x4)
    float RandomDeviation;                                                            // 0x0064 (size: 0x4)
    uint8 bCallTickOnSearchStart;                                                     // 0x0068 (size: 0x1)
    uint8 bRestartTimerOnEachActivation;                                              // 0x0068 (size: 0x1)

}; // Size: 0x70

class UBTService_BlackboardBase : public UBTService
{
    FBlackboardKeySelector BlackboardKey;                                             // 0x0070 (size: 0x28)

}; // Size: 0x98

class UBTService_BlueprintBase : public UBTService
{
    class AAIController* AIOwner;                                                     // 0x0070 (size: 0x8)
    class AActor* ActorOwner;                                                         // 0x0078 (size: 0x8)
    uint8 bShowPropertyDetails;                                                       // 0x0090 (size: 0x1)
    uint8 bShowEventDetails;                                                          // 0x0090 (size: 0x1)

    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
    void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveSearchStart(class AActor* OwnerActor);
    void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveDeactivation(class AActor* OwnerActor);
    void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveActivation(class AActor* OwnerActor);
    bool IsServiceActive();
}; // Size: 0x98

class UBTService_DefaultFocus : public UBTService_BlackboardBase
{
    uint8 FocusPriority;                                                              // 0x0098 (size: 0x1)

}; // Size: 0xA0

class UBTService_RunEQS : public UBTService_BlackboardBase
{
    FEQSParametrizedQueryExecutionRequest EQSRequest;                                 // 0x0098 (size: 0x48)
    bool bUpdateBBOnFail;                                                             // 0x00E0 (size: 0x1)

}; // Size: 0xF8

class UBTTaskNode : public UBTNode
{
    TArray<class UBTService*> Services;                                               // 0x0058 (size: 0x10)
    uint8 bIgnoreRestartSelf;                                                         // 0x0068 (size: 0x1)

}; // Size: 0x70

class UBTTask_BlackboardBase : public UBTTaskNode
{
    FBlackboardKeySelector BlackboardKey;                                             // 0x0070 (size: 0x28)

}; // Size: 0x98

class UBTTask_BlueprintBase : public UBTTaskNode
{
    class AAIController* AIOwner;                                                     // 0x0070 (size: 0x8)
    class AActor* ActorOwner;                                                         // 0x0078 (size: 0x8)
    FIntervalCountdown TickInterval;                                                  // 0x0080 (size: 0x8)
    uint8 bShowPropertyDetails;                                                       // 0x00A0 (size: 0x1)

    void SetFinishOnMessageWithId(FName MessageName, int32 RequestID);
    void SetFinishOnMessage(FName MessageName);
    void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
    void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveExecute(class AActor* OwnerActor);
    void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ReceiveAbort(class AActor* OwnerActor);
    bool IsTaskExecuting();
    bool IsTaskAborting();
    void FinishExecute(bool bSuccess);
    void FinishAbort();
}; // Size: 0xA8

class UBTTask_FinishWithResult : public UBTTaskNode
{
    TEnumAsByte<EBTNodeResult::Type> Result;                                          // 0x0070 (size: 0x1)

}; // Size: 0x78

class UBTTask_GameplayTaskBase : public UBTTaskNode
{
    uint8 bWaitForGameplayTask;                                                       // 0x0070 (size: 0x1)

}; // Size: 0x78

class UBTTask_MakeNoise : public UBTTaskNode
{
    float Loudnes;                                                                    // 0x0070 (size: 0x4)

}; // Size: 0x78

class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo
{
    uint8 bDisablePathUpdateOnGoalLocationChange;                                     // 0x00B0 (size: 0x1)
    uint8 bProjectVectorGoalToNavigation;                                             // 0x00B0 (size: 0x1)
    uint8 bUpdatedDeprecatedProperties;                                               // 0x00B0 (size: 0x1)

}; // Size: 0xB8

class UBTTask_MoveTo : public UBTTask_BlackboardBase
{
    float AcceptableRadius;                                                           // 0x0098 (size: 0x4)
    TSubclassOf<class UNavigationQueryFilter> FilterClass;                            // 0x00A0 (size: 0x8)
    float ObservedBlackboardValueTolerance;                                           // 0x00A8 (size: 0x4)
    uint8 bObserveBlackboardValue;                                                    // 0x00AC (size: 0x1)
    uint8 bAllowStrafe;                                                               // 0x00AC (size: 0x1)
    uint8 bAllowPartialPath;                                                          // 0x00AC (size: 0x1)
    uint8 bTrackMovingGoal;                                                           // 0x00AC (size: 0x1)
    uint8 bRequireNavigableEndLocation;                                               // 0x00AC (size: 0x1)
    uint8 bProjectGoalLocation;                                                       // 0x00AC (size: 0x1)
    uint8 bReachTestIncludesAgentRadius;                                              // 0x00AC (size: 0x1)
    uint8 bReachTestIncludesGoalRadius;                                               // 0x00AC (size: 0x1)
    uint8 bStopOnOverlap;                                                             // 0x00AD (size: 0x1)
    uint8 bStopOnOverlapNeedsUpdate;                                                  // 0x00AD (size: 0x1)

}; // Size: 0xB0

class UBTTask_PawnActionBase : public UBTTaskNode
{
}; // Size: 0x70

class UBTTask_PlayAnimation : public UBTTaskNode
{
    class UAnimationAsset* AnimationToPlay;                                           // 0x0070 (size: 0x8)
    uint8 bLooping;                                                                   // 0x0078 (size: 0x1)
    uint8 bNonBlocking;                                                               // 0x0078 (size: 0x1)
    class UBehaviorTreeComponent* MyOwnerComp;                                        // 0x0080 (size: 0x8)
    class USkeletalMeshComponent* CachedSkelMesh;                                     // 0x0088 (size: 0x8)

}; // Size: 0xB0

class UBTTask_PlaySound : public UBTTaskNode
{
    class USoundCue* SoundToPlay;                                                     // 0x0070 (size: 0x8)

}; // Size: 0x78

class UBTTask_PushPawnAction : public UBTTask_PawnActionBase
{
    class UDEPRECATED_PawnAction* Action;                                             // 0x0070 (size: 0x8)

}; // Size: 0x78

class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
{
    float Precision;                                                                  // 0x0098 (size: 0x4)

}; // Size: 0xA0

class UBTTask_RunBehavior : public UBTTaskNode
{
    class UBehaviorTree* BehaviorAsset;                                               // 0x0070 (size: 0x8)

}; // Size: 0x78

class UBTTask_RunBehaviorDynamic : public UBTTaskNode
{
    FGameplayTag InjectionTag;                                                        // 0x0070 (size: 0x8)
    class UBehaviorTree* DefaultBehaviorAsset;                                        // 0x0078 (size: 0x8)
    class UBehaviorTree* BehaviorAsset;                                               // 0x0080 (size: 0x8)

}; // Size: 0x88

class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
{
    class UEnvQuery* QueryTemplate;                                                   // 0x0098 (size: 0x8)
    TArray<FEnvNamedValue> QueryParams;                                               // 0x00A0 (size: 0x10)
    TArray<FAIDynamicParam> QueryConfig;                                              // 0x00B0 (size: 0x10)
    TEnumAsByte<EEnvQueryRunMode::Type> RunMode;                                      // 0x00C0 (size: 0x1)
    FBlackboardKeySelector EQSQueryBlackboardKey;                                     // 0x00C8 (size: 0x28)
    bool bUseBBKey;                                                                   // 0x00F0 (size: 0x1)
    FEQSParametrizedQueryExecutionRequest EQSRequest;                                 // 0x00F8 (size: 0x48)
    bool bUpdateBBOnFail;                                                             // 0x0140 (size: 0x1)

}; // Size: 0x158

class UBTTask_SetTagCooldown : public UBTTaskNode
{
    FGameplayTag CooldownTag;                                                         // 0x0070 (size: 0x8)
    bool bAddToExistingDuration;                                                      // 0x0078 (size: 0x1)
    float CooldownDuration;                                                           // 0x007C (size: 0x4)

}; // Size: 0x80

class UBTTask_Wait : public UBTTaskNode
{
    float WaitTime;                                                                   // 0x0070 (size: 0x4)
    float RandomDeviation;                                                            // 0x0074 (size: 0x4)

}; // Size: 0x78

class UBTTask_WaitBlackboardTime : public UBTTask_Wait
{
    FBlackboardKeySelector BlackboardKey;                                             // 0x0078 (size: 0x28)

}; // Size: 0xA0

class UBehaviorTree : public UObject
{
    class UBTCompositeNode* RootNode;                                                 // 0x0030 (size: 0x8)
    class UBlackboardData* BlackboardAsset;                                           // 0x0038 (size: 0x8)
    TArray<class UBTDecorator*> RootDecorators;                                       // 0x0040 (size: 0x10)
    TArray<FBTDecoratorLogic> RootDecoratorOps;                                       // 0x0050 (size: 0x10)

}; // Size: 0x68

class UBehaviorTreeComponent : public UBrainComponent
{
    TArray<class UBTNode*> NodeInstances;                                             // 0x0118 (size: 0x10)
    class UBehaviorTree* DefaultBehaviorTreeAsset;                                    // 0x0270 (size: 0x8)

    void SetDynamicSubtree(FGameplayTag InjectTag, class UBehaviorTree* BehaviorAsset);
    double GetTagCooldownEndTime(FGameplayTag CooldownTag);
    void AddCooldownTagDuration(FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration);
}; // Size: 0x290

class UBehaviorTreeManager : public UObject
{
    int32 MaxDebuggerSteps;                                                           // 0x0028 (size: 0x4)
    TArray<FBehaviorTreeTemplateInfo> LoadedTemplates;                                // 0x0030 (size: 0x10)
    TArray<class UBehaviorTreeComponent*> ActiveComponents;                           // 0x0040 (size: 0x10)

}; // Size: 0x50

class UBehaviorTreeTypes : public UObject
{
}; // Size: 0x28

class UBlackboardComponent : public UActorComponent
{
    class UBrainComponent* BrainComp;                                                 // 0x00A0 (size: 0x8)
    class UBlackboardData* DefaultBlackboardAsset;                                    // 0x00A8 (size: 0x8)
    class UBlackboardData* BlackboardAsset;                                           // 0x00B0 (size: 0x8)
    TArray<class UBlackboardKeyType*> KeyInstances;                                   // 0x00D8 (size: 0x10)

    void SetValueAsVector(const FName& KeyName, FVector VectorValue);
    void SetValueAsString(const FName& KeyName, FString StringValue);
    void SetValueAsRotator(const FName& KeyName, FRotator VectorValue);
    void SetValueAsObject(const FName& KeyName, class UObject* ObjectValue);
    void SetValueAsName(const FName& KeyName, FName NameValue);
    void SetValueAsInt(const FName& KeyName, int32 IntValue);
    void SetValueAsFloat(const FName& KeyName, float FloatValue);
    void SetValueAsEnum(const FName& KeyName, uint8 EnumValue);
    void SetValueAsClass(const FName& KeyName, UClass* ClassValue);
    void SetValueAsBool(const FName& KeyName, bool BoolValue);
    bool IsVectorValueSet(const FName& KeyName);
    FVector GetValueAsVector(const FName& KeyName);
    FString GetValueAsString(const FName& KeyName);
    FRotator GetValueAsRotator(const FName& KeyName);
    class UObject* GetValueAsObject(const FName& KeyName);
    FName GetValueAsName(const FName& KeyName);
    int32 GetValueAsInt(const FName& KeyName);
    float GetValueAsFloat(const FName& KeyName);
    uint8 GetValueAsEnum(const FName& KeyName);
    UClass* GetValueAsClass(const FName& KeyName);
    bool GetValueAsBool(const FName& KeyName);
    bool GetRotationFromEntry(const FName& KeyName, FRotator& ResultRotation);
    bool GetLocationFromEntry(const FName& KeyName, FVector& ResultLocation);
    void ClearValue(const FName& KeyName);
}; // Size: 0x1A8

class UBlackboardData : public UDataAsset
{
    class UBlackboardData* Parent;                                                    // 0x0030 (size: 0x8)
    TArray<FBlackboardEntry> keys;                                                    // 0x0038 (size: 0x10)
    uint8 bHasSynchronizedKeys;                                                       // 0x0048 (size: 0x1)

}; // Size: 0x50

class UBlackboardKeyType : public UObject
{
}; // Size: 0x30

class UBlackboardKeyType_Bool : public UBlackboardKeyType
{
    bool bDefaultValue;                                                               // 0x0030 (size: 0x1)

}; // Size: 0x38

class UBlackboardKeyType_Class : public UBlackboardKeyType
{
    UClass* BaseClass;                                                                // 0x0030 (size: 0x8)

}; // Size: 0x38

class UBlackboardKeyType_Enum : public UBlackboardKeyType
{
    class UEnum* EnumType;                                                            // 0x0030 (size: 0x8)
    FString EnumName;                                                                 // 0x0038 (size: 0x10)
    uint8 bIsEnumNameValid;                                                           // 0x0048 (size: 0x1)

}; // Size: 0x50

class UBlackboardKeyType_Float : public UBlackboardKeyType
{
    float DefaultValue;                                                               // 0x0030 (size: 0x4)

}; // Size: 0x38

class UBlackboardKeyType_Int : public UBlackboardKeyType
{
    int32 DefaultValue;                                                               // 0x0030 (size: 0x4)

}; // Size: 0x38

class UBlackboardKeyType_Name : public UBlackboardKeyType
{
    FName DefaultValue;                                                               // 0x0030 (size: 0x8)

}; // Size: 0x38

class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType
{
    FString EnumName;                                                                 // 0x0030 (size: 0x10)
    class UEnum* EnumType;                                                            // 0x0040 (size: 0x8)

}; // Size: 0x48

class UBlackboardKeyType_Object : public UBlackboardKeyType
{
    UClass* BaseClass;                                                                // 0x0030 (size: 0x8)

}; // Size: 0x38

class UBlackboardKeyType_Rotator : public UBlackboardKeyType
{
    FRotator DefaultValue;                                                            // 0x0030 (size: 0x18)
    bool bUseDefaultValue;                                                            // 0x0048 (size: 0x1)

}; // Size: 0x50

class UBlackboardKeyType_String : public UBlackboardKeyType
{
    FString StringValue;                                                              // 0x0030 (size: 0x10)
    FString DefaultValue;                                                             // 0x0040 (size: 0x10)

}; // Size: 0x50

class UBlackboardKeyType_Vector : public UBlackboardKeyType
{
    FVector DefaultValue;                                                             // 0x0030 (size: 0x18)
    bool bUseDefaultValue;                                                            // 0x0048 (size: 0x1)

}; // Size: 0x50

class UBrainComponent : public UActorComponent
{
    class UBlackboardComponent* BlackboardComp;                                       // 0x00A8 (size: 0x8)
    class AAIController* AIOwner;                                                     // 0x00B0 (size: 0x8)

    void StopLogic(FString Reason);
    void StartLogic();
    void RestartLogic();
    bool IsRunning();
    bool IsPaused();
}; // Size: 0xF8

class UCrowdFollowingComponent : public UPathFollowingComponent
{
    FVector CrowdAgentMoveDirection;                                                  // 0x02F8 (size: 0x18)

    void SuspendCrowdSteering(bool bSuspend);
}; // Size: 0x330

class UCrowdManager : public UCrowdManagerBase
{
    class ANavigationData* MyNavData;                                                 // 0x0028 (size: 0x8)
    TArray<FCrowdAvoidanceConfig> AvoidanceConfig;                                    // 0x0030 (size: 0x10)
    TArray<FCrowdAvoidanceSamplingPattern> SamplingPatterns;                          // 0x0040 (size: 0x10)
    int32 MaxAgents;                                                                  // 0x0050 (size: 0x4)
    float MaxAgentRadius;                                                             // 0x0054 (size: 0x4)
    int32 MaxAvoidedAgents;                                                           // 0x0058 (size: 0x4)
    int32 MaxAvoidedWalls;                                                            // 0x005C (size: 0x4)
    float NavmeshCheckInterval;                                                       // 0x0060 (size: 0x4)
    float PathOptimizationInterval;                                                   // 0x0064 (size: 0x4)
    float SeparationDirClamp;                                                         // 0x0068 (size: 0x4)
    float PathOffsetRadiusMultiplier;                                                 // 0x006C (size: 0x4)
    uint8 bResolveCollisions;                                                         // 0x0070 (size: 0x1)

}; // Size: 0xF0

class UDEPRECATED_PawnAction : public UObject
{
    class UDEPRECATED_PawnAction* ChildAction;                                        // 0x0028 (size: 0x8)
    class UDEPRECATED_PawnAction* ParentAction;                                       // 0x0030 (size: 0x8)
    class UDEPRECATED_PawnActionsComponent* OwnerComponent;                           // 0x0038 (size: 0x8)
    class UObject* Instigator;                                                        // 0x0040 (size: 0x8)
    class UBrainComponent* BrainComp;                                                 // 0x0048 (size: 0x8)
    uint8 bAllowNewSameClassInstance;                                                 // 0x0080 (size: 0x1)
    uint8 bReplaceActiveSameClassInstance;                                            // 0x0080 (size: 0x1)
    uint8 bShouldPauseMovement;                                                       // 0x0080 (size: 0x1)
    uint8 bAlwaysNotifyOnFinished;                                                    // 0x0080 (size: 0x1)

    TEnumAsByte<EAIRequestPriority::Type> GetActionPriority();
    void Finish(TEnumAsByte<EPawnActionResult::Type> WithResult);
    class UDEPRECATED_PawnAction* CreateActionInstance(class UObject* WorldContextObject, TSubclassOf<class UDEPRECATED_PawnAction> ActionClass);
}; // Size: 0x90

class UDEPRECATED_PawnAction_BlueprintBase : public UDEPRECATED_PawnAction
{

    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionStart(class APawn* ControlledPawn);
    void ActionResume(class APawn* ControlledPawn);
    void ActionPause(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
}; // Size: 0x90

class UDEPRECATED_PawnAction_Move : public UDEPRECATED_PawnAction
{
    class AActor* GoalActor;                                                          // 0x0090 (size: 0x8)
    FVector GoalLocation;                                                             // 0x0098 (size: 0x18)
    float AcceptableRadius;                                                           // 0x00B0 (size: 0x4)
    TSubclassOf<class UNavigationQueryFilter> FilterClass;                            // 0x00B8 (size: 0x8)
    uint8 bAllowStrafe;                                                               // 0x00C0 (size: 0x1)
    uint8 bFinishOnOverlap;                                                           // 0x00C0 (size: 0x1)
    uint8 bUsePathfinding;                                                            // 0x00C0 (size: 0x1)
    uint8 bAllowPartialPath;                                                          // 0x00C0 (size: 0x1)
    uint8 bProjectGoalToNavigation;                                                   // 0x00C0 (size: 0x1)
    uint8 bUpdatePathToGoal;                                                          // 0x00C0 (size: 0x1)
    uint8 bAbortSubActionOnPathChange;                                                // 0x00C0 (size: 0x1)

}; // Size: 0xF0

class UDEPRECATED_PawnAction_Repeat : public UDEPRECATED_PawnAction
{
    class UDEPRECATED_PawnAction* ActionToRepeat;                                     // 0x0090 (size: 0x8)
    class UDEPRECATED_PawnAction* RecentActionCopy;                                   // 0x0098 (size: 0x8)
    TEnumAsByte<EPawnActionFailHandling::Type> ChildFailureHandlingMode;              // 0x00A0 (size: 0x1)

}; // Size: 0xB0

class UDEPRECATED_PawnAction_Sequence : public UDEPRECATED_PawnAction
{
    TArray<class UDEPRECATED_PawnAction*> ActionSequence;                             // 0x0090 (size: 0x10)
    TEnumAsByte<EPawnActionFailHandling::Type> ChildFailureHandlingMode;              // 0x00A0 (size: 0x1)
    class UDEPRECATED_PawnAction* RecentActionCopy;                                   // 0x00A8 (size: 0x8)

}; // Size: 0xB8

class UDEPRECATED_PawnAction_Wait : public UDEPRECATED_PawnAction
{
    float TimeToWait;                                                                 // 0x0090 (size: 0x4)

}; // Size: 0xA0

class UDEPRECATED_PawnActionsComponent : public UActorComponent
{
    class APawn* ControlledPawn;                                                      // 0x00A0 (size: 0x8)
    TArray<FPawnActionStack> ActionStacks;                                            // 0x00A8 (size: 0x10)
    TArray<FPawnActionEvent> ActionEvents;                                            // 0x00B8 (size: 0x10)
    class UDEPRECATED_PawnAction* CurrentAction;                                      // 0x00C8 (size: 0x8)

    bool K2_PushAction(class UDEPRECATED_PawnAction* NewAction, TEnumAsByte<EAIRequestPriority::Type> Priority, class UObject* Instigator);
    bool K2_PerformAction(class APawn* Pawn, class UDEPRECATED_PawnAction* Action, TEnumAsByte<EAIRequestPriority::Type> Priority);
    TEnumAsByte<EPawnActionAbortState::Type> K2_ForceAbortAction(class UDEPRECATED_PawnAction* ActionToAbort);
    TEnumAsByte<EPawnActionAbortState::Type> K2_AbortAction(class UDEPRECATED_PawnAction* ActionToAbort);
}; // Size: 0xD8

class UEQSRenderingComponent : public UDebugDrawComponent
{
}; // Size: 0x5A0

class UEnvQuery : public UDataAsset
{
    FName QueryName;                                                                  // 0x0030 (size: 0x8)
    TArray<class UEnvQueryOption*> Options;                                           // 0x0038 (size: 0x10)

}; // Size: 0x48

class UEnvQueryContext : public UObject
{
}; // Size: 0x28

class UEnvQueryContext_BlueprintBase : public UEnvQueryContext
{

    void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, FVector& ResultingLocation);
    void ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor*& ResultingActor);
    void ProvideLocationsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<FVector>& ResultingLocationSet);
    void ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>& ResultingActorsSet);
}; // Size: 0x30

class UEnvQueryContext_Item : public UEnvQueryContext
{
}; // Size: 0x28

class UEnvQueryContext_Querier : public UEnvQueryContext
{
}; // Size: 0x28

class UEnvQueryDebugHelpers : public UObject
{
}; // Size: 0x28

class UEnvQueryGenerator : public UEnvQueryNode
{
    FString OptionName;                                                               // 0x0030 (size: 0x10)
    TSubclassOf<class UEnvQueryItemType> ItemType;                                    // 0x0040 (size: 0x8)
    uint8 bAutoSortTests;                                                             // 0x0048 (size: 0x1)

}; // Size: 0x50

class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
{
    TSubclassOf<class AActor> SearchedActorClass;                                     // 0x0050 (size: 0x8)
    FAIDataProviderBoolValue GenerateOnlyActorsInRadius;                              // 0x0058 (size: 0x38)
    FAIDataProviderFloatValue SearchRadius;                                           // 0x0090 (size: 0x38)
    TSubclassOf<class UEnvQueryContext> SearchCenter;                                 // 0x00C8 (size: 0x8)

}; // Size: 0xD0

class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
{
    FText GeneratorsActionDescription;                                                // 0x0050 (size: 0x10)
    TSubclassOf<class UEnvQueryContext> Context;                                      // 0x0060 (size: 0x8)
    TSubclassOf<class UEnvQueryItemType> GeneratedItemType;                           // 0x0068 (size: 0x8)

    class UObject* GetQuerier();
    void DoItemGenerationFromActors(const TArray<class AActor*>& ContextActors);
    void DoItemGeneration(const TArray<FVector>& ContextLocations);
    void AddGeneratedVector(FVector GeneratedVector);
    void AddGeneratedActor(class AActor* GeneratedActor);
}; // Size: 0x80

class UEnvQueryGenerator_Composite : public UEnvQueryGenerator
{
    TArray<class UEnvQueryGenerator*> Generators;                                     // 0x0050 (size: 0x10)
    uint8 bAllowDifferentItemTypes;                                                   // 0x0060 (size: 0x1)
    uint8 bHasMatchingItemType;                                                       // 0x0060 (size: 0x1)
    TSubclassOf<class UEnvQueryItemType> ForcedItemType;                              // 0x0068 (size: 0x8)

}; // Size: 0x70

class UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints
{
    FAIDataProviderFloatValue AlignedPointsDistance;                                  // 0x0090 (size: 0x38)
    FAIDataProviderFloatValue ConeDegrees;                                            // 0x00C8 (size: 0x38)
    FAIDataProviderFloatValue AngleStep;                                              // 0x0100 (size: 0x38)
    FAIDataProviderFloatValue Range;                                                  // 0x0138 (size: 0x38)
    TSubclassOf<class UEnvQueryContext> CenterActor;                                  // 0x0170 (size: 0x8)
    uint8 bIncludeContextLocation;                                                    // 0x0178 (size: 0x1)

}; // Size: 0x180

class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator
{
    TSubclassOf<class UEnvQueryContext> QueryContext;                                 // 0x0050 (size: 0x8)

}; // Size: 0x58

class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
{
    FAIDataProviderFloatValue InnerRadius;                                            // 0x0090 (size: 0x38)
    FAIDataProviderFloatValue OuterRadius;                                            // 0x00C8 (size: 0x38)
    FAIDataProviderIntValue NumberOfRings;                                            // 0x0100 (size: 0x38)
    FAIDataProviderIntValue PointsPerRing;                                            // 0x0138 (size: 0x38)
    FEnvDirection ArcDirection;                                                       // 0x0170 (size: 0x20)
    FAIDataProviderFloatValue ArcAngle;                                               // 0x0190 (size: 0x38)
    bool bUseSpiralPattern;                                                           // 0x01C8 (size: 0x1)
    TSubclassOf<class UEnvQueryContext> Center;                                       // 0x01D0 (size: 0x8)
    uint8 bDefineArc;                                                                 // 0x01D8 (size: 0x1)

}; // Size: 0x1E0

class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
{
    FAIDataProviderFloatValue CircleRadius;                                           // 0x0090 (size: 0x38)
    EPointOnCircleSpacingMethod PointOnCircleSpacingMethod;                           // 0x00C8 (size: 0x1)
    FAIDataProviderFloatValue SpaceBetween;                                           // 0x00D0 (size: 0x38)
    FAIDataProviderIntValue NumberOfPoints;                                           // 0x0108 (size: 0x38)
    FEnvDirection ArcDirection;                                                       // 0x0140 (size: 0x20)
    FAIDataProviderFloatValue ArcAngle;                                               // 0x0160 (size: 0x38)
    float AngleRadians;                                                               // 0x0198 (size: 0x4)
    TSubclassOf<class UEnvQueryContext> CircleCenter;                                 // 0x01A0 (size: 0x8)
    bool bIgnoreAnyContextActorsWhenGeneratingCircle;                                 // 0x01A8 (size: 0x1)
    FAIDataProviderFloatValue CircleCenterZOffset;                                    // 0x01B0 (size: 0x38)
    FEnvTraceData TraceData;                                                          // 0x01E8 (size: 0x40)
    uint8 bDefineArc;                                                                 // 0x0228 (size: 0x1)

}; // Size: 0x230

class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
{
    FAIDataProviderBoolValue PathToItem;                                              // 0x0108 (size: 0x38)
    TSubclassOf<class UNavigationQueryFilter> NavigationFilter;                       // 0x0140 (size: 0x8)
    FAIDataProviderFloatValue ScanRangeMultiplier;                                    // 0x0148 (size: 0x38)

}; // Size: 0x180

class UEnvQueryGenerator_PerceivedActors : public UEnvQueryGenerator
{
    TSubclassOf<class AActor> AllowedActorClass;                                      // 0x0050 (size: 0x8)
    FAIDataProviderFloatValue SearchRadius;                                           // 0x0058 (size: 0x38)
    TSubclassOf<class UEnvQueryContext> ListenerContext;                              // 0x0090 (size: 0x8)
    TSubclassOf<class UAISense> SenseToUse;                                           // 0x0098 (size: 0x8)
    bool bIncludeKnownActors;                                                         // 0x00A0 (size: 0x1)

}; // Size: 0xA8

class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
{
    FEnvTraceData ProjectionData;                                                     // 0x0050 (size: 0x40)

}; // Size: 0x90

class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
{
    FAIDataProviderFloatValue GridSize;                                               // 0x0090 (size: 0x38)
    FAIDataProviderFloatValue SpaceBetween;                                           // 0x00C8 (size: 0x38)
    TSubclassOf<class UEnvQueryContext> GenerateAround;                               // 0x0100 (size: 0x8)

}; // Size: 0x108

class UEnvQueryInstanceBlueprintWrapper : public UObject
{
    int32 QueryID;                                                                    // 0x0030 (size: 0x4)
    TSubclassOf<class UEnvQueryItemType> ItemType;                                    // 0x0058 (size: 0x8)
    int32 OptionIndex;                                                                // 0x0060 (size: 0x4)
    FEnvQueryInstanceBlueprintWrapperOnQueryFinishedEvent OnQueryFinishedEvent;       // 0x0068 (size: 0x10)
    void EQSQueryDoneSignature(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus::Type> QueryStatus);

    void SetNamedParam(FName ParamName, float Value);
    TArray<FVector> GetResultsAsLocations();
    TArray<class AActor*> GetResultsAsActors();
    bool GetQueryResultsAsLocations(TArray<FVector>& ResultLocations);
    bool GetQueryResultsAsActors(TArray<class AActor*>& ResultActors);
    float GetItemScore(int32 ItemIndex);
    void EQSQueryDoneSignature__DelegateSignature(class UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus::Type> QueryStatus);
}; // Size: 0x78

class UEnvQueryItemType : public UObject
{
}; // Size: 0x30

class UEnvQueryItemType_Actor : public UEnvQueryItemType_ActorBase
{
}; // Size: 0x30

class UEnvQueryItemType_ActorBase : public UEnvQueryItemType_VectorBase
{
}; // Size: 0x30

class UEnvQueryItemType_Direction : public UEnvQueryItemType_VectorBase
{
}; // Size: 0x30

class UEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase
{
}; // Size: 0x30

class UEnvQueryItemType_VectorBase : public UEnvQueryItemType
{
}; // Size: 0x30

class UEnvQueryManager : public UAISubsystem
{
    TArray<FEnvQueryInstanceCache> InstanceCache;                                     // 0x00A8 (size: 0x10)
    TArray<class UEnvQueryContext*> LocalContexts;                                    // 0x00B8 (size: 0x10)
    TArray<class UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers;              // 0x00C8 (size: 0x10)
    float MaxAllowedTestingTime;                                                      // 0x012C (size: 0x4)
    bool bTestQueriesUsingBreadth;                                                    // 0x0130 (size: 0x1)
    int32 QueryCountWarningThreshold;                                                 // 0x0134 (size: 0x4)
    double QueryCountWarningInterval;                                                 // 0x0138 (size: 0x8)
    double ExecutionTimeWarningSeconds;                                               // 0x0140 (size: 0x8)
    double HandlingResultTimeWarningSeconds;                                          // 0x0148 (size: 0x8)
    double GenerationTimeWarningSeconds;                                              // 0x0150 (size: 0x8)

    class UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(class UObject* WorldContextObject, class UEnvQuery* QueryTemplate, class UObject* Querier, TEnumAsByte<EEnvQueryRunMode::Type> RunMode, TSubclassOf<class UEnvQueryInstanceBlueprintWrapper> WrapperClass);
}; // Size: 0x158

class UEnvQueryNode : public UObject
{
    int32 VerNum;                                                                     // 0x0028 (size: 0x4)

}; // Size: 0x30

class UEnvQueryOption : public UObject
{
    class UEnvQueryGenerator* Generator;                                              // 0x0028 (size: 0x8)
    TArray<class UEnvQueryTest*> Tests;                                               // 0x0030 (size: 0x10)

}; // Size: 0x40

class UEnvQueryTest : public UEnvQueryNode
{
    int32 TestOrder;                                                                  // 0x0030 (size: 0x4)
    TEnumAsByte<EEnvTestPurpose::Type> TestPurpose;                                   // 0x0034 (size: 0x1)
    FString TestComment;                                                              // 0x0038 (size: 0x10)
    TEnumAsByte<EEnvTestFilterOperator::Type> MultipleContextFilterOp;                // 0x0048 (size: 0x1)
    TEnumAsByte<EEnvTestScoreOperator::Type> MultipleContextScoreOp;                  // 0x0049 (size: 0x1)
    TEnumAsByte<EEnvTestFilterType::Type> FilterType;                                 // 0x004A (size: 0x1)
    FAIDataProviderBoolValue BoolValue;                                               // 0x0050 (size: 0x38)
    FAIDataProviderFloatValue FloatValueMin;                                          // 0x0088 (size: 0x38)
    FAIDataProviderFloatValue FloatValueMax;                                          // 0x00C0 (size: 0x38)
    TEnumAsByte<EEnvTestScoreEquation::Type> ScoringEquation;                         // 0x00F9 (size: 0x1)
    TEnumAsByte<EEnvQueryTestClamping::Type> ClampMinType;                            // 0x00FA (size: 0x1)
    TEnumAsByte<EEnvQueryTestClamping::Type> ClampMaxType;                            // 0x00FB (size: 0x1)
    EEQSNormalizationType NormalizationType;                                          // 0x00FC (size: 0x1)
    FAIDataProviderFloatValue ScoreClampMin;                                          // 0x0100 (size: 0x38)
    FAIDataProviderFloatValue ScoreClampMax;                                          // 0x0138 (size: 0x38)
    FAIDataProviderFloatValue ScoringFactor;                                          // 0x0170 (size: 0x38)
    FAIDataProviderFloatValue ReferenceValue;                                         // 0x01A8 (size: 0x38)
    bool bDefineReferenceValue;                                                       // 0x01E0 (size: 0x1)
    uint8 bWorkOnFloatValues;                                                         // 0x01F0 (size: 0x1)

}; // Size: 0x1F8

class UEnvQueryTest_Distance : public UEnvQueryTest
{
    TEnumAsByte<EEnvTestDistance::Type> TestMode;                                     // 0x01F8 (size: 0x1)
    TSubclassOf<class UEnvQueryContext> DistanceTo;                                   // 0x0200 (size: 0x8)

}; // Size: 0x208

class UEnvQueryTest_Dot : public UEnvQueryTest
{
    FEnvDirection LineA;                                                              // 0x01F8 (size: 0x20)
    FEnvDirection LineB;                                                              // 0x0218 (size: 0x20)
    EEnvTestDot TestMode;                                                             // 0x0238 (size: 0x1)
    bool bAbsoluteValue;                                                              // 0x0239 (size: 0x1)

}; // Size: 0x240

class UEnvQueryTest_GameplayTags : public UEnvQueryTest
{
    FGameplayTagQuery TagQueryToMatch;                                                // 0x01F8 (size: 0x48)
    bool bRejectIncompatibleItems;                                                    // 0x0240 (size: 0x1)
    bool bUpdatedToUseQuery;                                                          // 0x0241 (size: 0x1)
    EGameplayContainerMatchType TagsToMatch;                                          // 0x0242 (size: 0x1)
    FGameplayTagContainer GameplayTags;                                               // 0x0248 (size: 0x20)

}; // Size: 0x268

class UEnvQueryTest_Overlap : public UEnvQueryTest
{
    FEnvOverlapData OverlapData;                                                      // 0x01F8 (size: 0x30)

}; // Size: 0x228

class UEnvQueryTest_Pathfinding : public UEnvQueryTest
{
    TEnumAsByte<EEnvTestPathfinding::Type> TestMode;                                  // 0x01F8 (size: 0x1)
    TSubclassOf<class UEnvQueryContext> Context;                                      // 0x0200 (size: 0x8)
    FAIDataProviderBoolValue PathFromContext;                                         // 0x0208 (size: 0x38)
    FAIDataProviderBoolValue SkipUnreachable;                                         // 0x0240 (size: 0x38)
    TSubclassOf<class UNavigationQueryFilter> FilterClass;                            // 0x0278 (size: 0x8)

}; // Size: 0x280

class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
{
    FAIDataProviderFloatValue ScanRangeMultiplier;                                    // 0x0280 (size: 0x38)

}; // Size: 0x2B8

class UEnvQueryTest_Project : public UEnvQueryTest
{
    FEnvTraceData ProjectionData;                                                     // 0x01F8 (size: 0x40)

}; // Size: 0x238

class UEnvQueryTest_Random : public UEnvQueryTest
{
}; // Size: 0x1F8

class UEnvQueryTest_Trace : public UEnvQueryTest
{
    FEnvTraceData TraceData;                                                          // 0x01F8 (size: 0x40)
    FAIDataProviderBoolValue TraceFromContext;                                        // 0x0238 (size: 0x38)
    FAIDataProviderFloatValue ItemHeightOffset;                                       // 0x0270 (size: 0x38)
    FAIDataProviderFloatValue ContextHeightOffset;                                    // 0x02A8 (size: 0x38)
    TSubclassOf<class UEnvQueryContext> Context;                                      // 0x02E0 (size: 0x8)

}; // Size: 0x2E8

class UEnvQueryTest_Volume : public UEnvQueryTest
{
    TSubclassOf<class UEnvQueryContext> VolumeContext;                                // 0x01F8 (size: 0x8)
    TSubclassOf<class AVolume> VolumeClass;                                           // 0x0200 (size: 0x8)
    uint8 bDoComplexVolumeTest;                                                       // 0x0208 (size: 0x1)
    uint8 bSkipTestIfNoVolumes;                                                       // 0x0208 (size: 0x1)

}; // Size: 0x210

class UEnvQueryTypes : public UObject
{
}; // Size: 0x28

class UGridPathFollowingComponent : public UPathFollowingComponent
{
    class UNavLocalGridManager* GridManager;                                          // 0x02E0 (size: 0x8)

}; // Size: 0x310

class UNavFilter_AIControllerDefault : public UNavigationQueryFilter
{
}; // Size: 0x48

class UNavLocalGridManager : public UObject
{

    bool SetLocalNavigationGridDensity(class UObject* WorldContextObject, float CellSize);
    void RemoveLocalNavigationGrid(class UObject* WorldContextObject, int32 gridID, bool bRebuildGrids);
    bool FindLocalNavigationGridPath(class UObject* WorldContextObject, const FVector& Start, const FVector& End, TArray<FVector>& PathPoints);
    int32 AddLocalNavigationGridForPoints(class UObject* WorldContextObject, const TArray<FVector>& locations, const int32 Radius2D, const float Height, bool bRebuildGrids);
    int32 AddLocalNavigationGridForPoint(class UObject* WorldContextObject, const FVector& Location, const int32 Radius2D, const float Height, bool bRebuildGrids);
    int32 AddLocalNavigationGridForCapsule(class UObject* WorldContextObject, const FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, const int32 Radius2D, const float Height, bool bRebuildGrids);
    int32 AddLocalNavigationGridForBox(class UObject* WorldContextObject, const FVector& Location, FVector Extent, FRotator Rotation, const int32 Radius2D, const float Height, bool bRebuildGrids);
}; // Size: 0x58

class UPathFollowingComponent : public UActorComponent
{
    class UNavMovementComponent* MovementComp;                                        // 0x00D8 (size: 0x8)
    class ANavigationData* MyNavData;                                                 // 0x00F0 (size: 0x8)

    void OnNavDataRegistered(class ANavigationData* NavData);
    void OnActorBump(class AActor* SelfActor, class AActor* OtherActor, FVector NormalImpulse, const FHitResult& hit);
    FVector GetPathDestination();
    TEnumAsByte<EPathFollowingAction::Type> GetPathActionType();
}; // Size: 0x2E0

class UPathFollowingManager : public UObject
{
}; // Size: 0x28

class UPawnSensingComponent : public UActorComponent
{
    float HearingThreshold;                                                           // 0x00A0 (size: 0x4)
    float LOSHearingThreshold;                                                        // 0x00A4 (size: 0x4)
    float SightRadius;                                                                // 0x00A8 (size: 0x4)
    float SensingInterval;                                                            // 0x00AC (size: 0x4)
    float HearingMaxSoundAge;                                                         // 0x00B0 (size: 0x4)
    uint8 bEnableSensingUpdates;                                                      // 0x00B4 (size: 0x1)
    uint8 bOnlySensePlayers;                                                          // 0x00B4 (size: 0x1)
    uint8 bSeePawns;                                                                  // 0x00B4 (size: 0x1)
    uint8 bHearNoises;                                                                // 0x00B4 (size: 0x1)
    FPawnSensingComponentOnSeePawn OnSeePawn;                                         // 0x00C0 (size: 0x10)
    void SeePawnDelegate(class APawn* Pawn);
    FPawnSensingComponentOnHearNoise OnHearNoise;                                     // 0x00D0 (size: 0x10)
    void HearNoiseDelegate(class APawn* Instigator, const FVector& Location, float Volume);
    float PeripheralVisionAngle;                                                      // 0x00E0 (size: 0x4)
    float PeripheralVisionCosine;                                                     // 0x00E4 (size: 0x4)

    void SetSensingUpdatesEnabled(const bool bEnabled);
    void SetSensingInterval(const float NewSensingInterval);
    void SetPeripheralVisionAngle(const float NewPeripheralVisionAngle);
    void SeePawnDelegate__DelegateSignature(class APawn* Pawn);
    void HearNoiseDelegate__DelegateSignature(class APawn* Instigator, const FVector& Location, float Volume);
    float GetPeripheralVisionCosine();
    float GetPeripheralVisionAngle();
}; // Size: 0xE8

class UVisualLoggerExtension : public UObject
{
}; // Size: 0x28

#endif
