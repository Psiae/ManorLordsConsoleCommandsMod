#ifndef UE4SS_SDK_AnimationSharing_HPP
#define UE4SS_SDK_AnimationSharing_HPP

struct FAnimationSetup
{
    class UAnimSequence* AnimSequence;                                                // 0x0000 (size: 0x8)
    TSubclassOf<class UAnimSharingStateInstance> AnimBlueprint;                       // 0x0008 (size: 0x8)
    FPerPlatformInt NumRandomizedInstances;                                           // 0x0010 (size: 0x4)
    FPerPlatformBool Enabled;                                                         // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FAnimationSharingScalability
{
    FPerPlatformBool UseBlendTransitions;                                             // 0x0000 (size: 0x1)
    FPerPlatformFloat BlendSignificanceValue;                                         // 0x0004 (size: 0x4)
    FPerPlatformInt MaximumNumberConcurrentBlends;                                    // 0x0008 (size: 0x4)
    FPerPlatformFloat TickSignificanceValue;                                          // 0x000C (size: 0x4)

}; // Size: 0x10

struct FAnimationStateEntry
{
    uint8 State;                                                                      // 0x0000 (size: 0x1)
    TArray<FAnimationSetup> AnimationSetups;                                          // 0x0008 (size: 0x10)
    bool bOnDemand;                                                                   // 0x0018 (size: 0x1)
    bool bAdditive;                                                                   // 0x0019 (size: 0x1)
    float BlendTime;                                                                  // 0x001C (size: 0x4)
    bool bReturnToPreviousState;                                                      // 0x0020 (size: 0x1)
    bool bSetNextState;                                                               // 0x0021 (size: 0x1)
    uint8 NextState;                                                                  // 0x0022 (size: 0x1)
    FPerPlatformInt MaximumNumberOfConcurrentInstances;                               // 0x0024 (size: 0x4)
    float WiggleTimePercentage;                                                       // 0x0028 (size: 0x4)
    bool bRequiresCurves;                                                             // 0x002C (size: 0x1)

}; // Size: 0x30

struct FPerSkeletonAnimationSharingSetup
{
    class USkeleton* Skeleton;                                                        // 0x0000 (size: 0x8)
    class USkeletalMesh* SkeletalMesh;                                                // 0x0008 (size: 0x8)
    TSubclassOf<class UAnimSharingTransitionInstance> BlendAnimBlueprint;             // 0x0010 (size: 0x8)
    TSubclassOf<class UAnimSharingAdditiveInstance> AdditiveAnimBlueprint;            // 0x0018 (size: 0x8)
    TSubclassOf<class UAnimationSharingStateProcessor> StateProcessorClass;           // 0x0020 (size: 0x8)
    TArray<FAnimationStateEntry> AnimationStates;                                     // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FTickAnimationSharingFunction : public FTickFunction
{
}; // Size: 0x30

class UAnimSharingAdditiveInstance : public UAnimInstance
{
    TWeakObjectPtr<class USkeletalMeshComponent> BaseComponent;                       // 0x02B8 (size: 0x8)
    TWeakObjectPtr<class UAnimSequence> AdditiveAnimation;                            // 0x02C0 (size: 0x8)
    float Alpha;                                                                      // 0x02C8 (size: 0x4)
    bool bStateBool;                                                                  // 0x02CC (size: 0x1)

}; // Size: 0x2D0

class UAnimSharingInstance : public UObject
{
    TArray<class AActor*> RegisteredActors;                                           // 0x0028 (size: 0x10)
    class UAnimationSharingStateProcessor* StateProcessor;                            // 0x0088 (size: 0x8)
    TArray<class UAnimSequence*> UsedAnimationSequences;                              // 0x00C8 (size: 0x10)
    class UEnum* StateEnum;                                                           // 0x00E8 (size: 0x8)
    class AActor* SharingActor;                                                       // 0x00F0 (size: 0x8)

}; // Size: 0x118

class UAnimSharingStateInstance : public UAnimInstance
{
    class UAnimSequence* AnimationToPlay;                                             // 0x02B8 (size: 0x8)
    float PermutationTimeOffset;                                                      // 0x02C0 (size: 0x4)
    float PlayRate;                                                                   // 0x02C4 (size: 0x4)
    bool bStateBool;                                                                  // 0x02C8 (size: 0x1)
    class UAnimSharingInstance* Instance;                                             // 0x02D0 (size: 0x8)

    void GetInstancedActors(TArray<class AActor*>& Actors);
}; // Size: 0x2E0

class UAnimSharingTransitionInstance : public UAnimInstance
{
    TWeakObjectPtr<class USkeletalMeshComponent> FromComponent;                       // 0x02B8 (size: 0x8)
    TWeakObjectPtr<class USkeletalMeshComponent> ToComponent;                         // 0x02C0 (size: 0x8)
    float BlendTime;                                                                  // 0x02C8 (size: 0x4)
    bool bBlendBool;                                                                  // 0x02CC (size: 0x1)

}; // Size: 0x2D0

class UAnimationSharingManager : public UObject
{
    TArray<class USkeleton*> Skeletons;                                               // 0x0028 (size: 0x10)
    TArray<class UAnimSharingInstance*> PerSkeletonData;                              // 0x0038 (size: 0x10)

    void RegisterActorWithSkeletonBP(class AActor* InActor, const class USkeleton* SharingSkeleton);
    class UAnimationSharingManager* GetAnimationSharingManager(class UObject* WorldContextObject);
    bool CreateAnimationSharingManager(class UObject* WorldContextObject, const class UAnimationSharingSetup* Setup);
    bool AnimationSharingEnabled();
}; // Size: 0x88

class UAnimationSharingSetup : public UObject
{
    TArray<FPerSkeletonAnimationSharingSetup> SkeletonSetups;                         // 0x0028 (size: 0x10)
    FAnimationSharingScalability ScalabilitySettings;                                 // 0x0038 (size: 0x10)

}; // Size: 0x48

class UAnimationSharingStateProcessor : public UObject
{
    TSoftObjectPtr<UEnum> AnimationStateEnum;                                         // 0x0028 (size: 0x28)

    void ProcessActorState(int32& OutState, class AActor* InActor, uint8 CurrentState, uint8 OnDemandState, bool& bShouldProcess);
    class UEnum* GetAnimationStateEnum();
}; // Size: 0x50

#endif
