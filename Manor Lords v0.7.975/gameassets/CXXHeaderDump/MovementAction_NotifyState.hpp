#ifndef UE4SS_SDK_MovementAction_NotifyState_HPP
#define UE4SS_SDK_MovementAction_NotifyState_HPP

class UMovementAction_NotifyState_C : public UAnimNotifyState
{
    TEnumAsByte<ALS_MovementAction::Type> MovementAction;                             // 0x0030 (size: 0x1)

    FString GetNotifyName();
    bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
    bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
}; // Size: 0x31

#endif
