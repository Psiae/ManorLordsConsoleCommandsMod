#ifndef UE4SS_SDK_CameraShake_Notify_HPP
#define UE4SS_SDK_CameraShake_Notify_HPP

class UCameraShake_Notify_C : public UAnimNotify
{
    TSubclassOf<class UMatineeCameraShake> ShakeClass;                                // 0x0038 (size: 0x8)
    float Scale;                                                                      // 0x0040 (size: 0x4)

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
}; // Size: 0x44

#endif
