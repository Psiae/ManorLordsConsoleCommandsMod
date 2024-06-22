#ifndef UE4SS_SDK_EarlyBlendOut_NotifyState_HPP
#define UE4SS_SDK_EarlyBlendOut_NotifyState_HPP

class UEarlyBlendOut_NotifyState_C : public UAnimNotifyState
{
    class UAnimMontage* ThisMontage;                                                  // 0x0030 (size: 0x8)
    float BlendOutTime;                                                               // 0x0038 (size: 0x4)
    bool CheckMovementState;                                                          // 0x003C (size: 0x1)
    TEnumAsByte<ALS_MovementState::Type> MovementStateEquals;                         // 0x003D (size: 0x1)
    bool CheckStance;                                                                 // 0x003E (size: 0x1)
    TEnumAsByte<ALS_Stance::Type> StanceEquals;                                       // 0x003F (size: 0x1)
    bool CheckMovementInput;                                                          // 0x0040 (size: 0x1)

    FString GetNotifyName();
    bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime);
}; // Size: 0x41

#endif
