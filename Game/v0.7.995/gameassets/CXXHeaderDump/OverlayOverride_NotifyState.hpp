#ifndef UE4SS_SDK_OverlayOverride_NotifyState_HPP
#define UE4SS_SDK_OverlayOverride_NotifyState_HPP

class UOverlayOverride_NotifyState_C : public UAnimNotifyState
{
    int32 OverlayOverrideState;                                                       // 0x0030 (size: 0x4)

    FString GetNotifyName();
    bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference);
    bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference);
}; // Size: 0x34

#endif
