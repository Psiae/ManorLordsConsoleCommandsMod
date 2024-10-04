#ifndef UE4SS_SDK_EarlyBlendOut_NotifyState_HPP
#define UE4SS_SDK_EarlyBlendOut_NotifyState_HPP

class UEarlyBlendOut_NotifyState_C : public UAnimNotifyState
{
    class UAnimMontage* ThisMontage;                                                  // 0x0030 (size: 0x8)
    double BlendOutTime;                                                              // 0x0038 (size: 0x8)
    bool CheckMovementState;                                                          // 0x0040 (size: 0x1)
    TEnumAsByte<ALS_MovementState::Type> MovementStateEquals;                         // 0x0041 (size: 0x1)
    bool CheckStance;                                                                 // 0x0042 (size: 0x1)
    TEnumAsByte<ALS_Stance::Type> StanceEquals;                                       // 0x0043 (size: 0x1)
    bool CheckMovementInput;                                                          // 0x0044 (size: 0x1)

    FString GetNotifyName();
    bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, const FAnimNotifyEventReference& EventReference);
}; // Size: 0x45

#endif
