#ifndef UE4SS_SDK_GroundedEntryState_AnimNotify_HPP
#define UE4SS_SDK_GroundedEntryState_AnimNotify_HPP

class UGroundedEntryState_AnimNotify_C : public UAnimNotify
{
    TEnumAsByte<GroundedEntryState::Type> Grounded Entry State;                       // 0x0038 (size: 0x1)

    FString GetNotifyName();
    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference);
}; // Size: 0x39

#endif
