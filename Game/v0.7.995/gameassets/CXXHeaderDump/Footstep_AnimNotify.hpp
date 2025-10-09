#ifndef UE4SS_SDK_Footstep_AnimNotify_HPP
#define UE4SS_SDK_Footstep_AnimNotify_HPP

class UFootstep_AnimNotify_C : public UAnimNotify
{
    class USoundBase* Sound;                                                          // 0x0038 (size: 0x8)
    FName AttachPointName;                                                            // 0x0040 (size: 0x8)
    TEnumAsByte<FootstepType::Type> FootstepType;                                     // 0x0048 (size: 0x1)
    double VolumeMultiplier;                                                          // 0x0050 (size: 0x8)
    double PitchMultiplier;                                                           // 0x0058 (size: 0x8)
    bool OverrideMaskCurve;                                                           // 0x0060 (size: 0x1)

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference);
}; // Size: 0x61

#endif
