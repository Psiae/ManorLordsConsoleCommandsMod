#ifndef UE4SS_SDK_CameraShake_Notify_HPP
#define UE4SS_SDK_CameraShake_Notify_HPP

class UCameraShake_Notify_C : public UAnimNotify
{
    TSubclassOf<class ULegacyCameraShake> ShakeClass;                                 // 0x0038 (size: 0x8)
    double scale;                                                                     // 0x0040 (size: 0x8)

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference);
}; // Size: 0x48

#endif
