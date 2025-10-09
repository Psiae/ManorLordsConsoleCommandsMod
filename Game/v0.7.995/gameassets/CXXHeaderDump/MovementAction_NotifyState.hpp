#ifndef UE4SS_SDK_MovementAction_NotifyState_HPP
#define UE4SS_SDK_MovementAction_NotifyState_HPP

class UMovementAction_NotifyState_C : public UAnimNotifyState
{
    TEnumAsByte<ALS_MovementAction::Type> MovementAction;                             // 0x0030 (size: 0x1)

    FString GetNotifyName();
    bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference);
    bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference);
}; // Size: 0x31

#endif
