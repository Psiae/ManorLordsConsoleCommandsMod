#ifndef UE4SS_SDK_Footstep_AnimNotify_HPP
#define UE4SS_SDK_Footstep_AnimNotify_HPP

class UFootstep_AnimNotify_C : public UAnimNotify
{
    class USoundBase* sound;                                                          // 0x0038 (size: 0x8)
    FName AttachPointName;                                                            // 0x0040 (size: 0x8)
    TEnumAsByte<FootstepType::Type> FootstepType;                                     // 0x0048 (size: 0x1)
    float VolumeMultiplier;                                                           // 0x004C (size: 0x4)
    float PitchMultiplier;                                                            // 0x0050 (size: 0x4)
    bool OverrideMaskCurve;                                                           // 0x0054 (size: 0x1)

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
}; // Size: 0x55

#endif
