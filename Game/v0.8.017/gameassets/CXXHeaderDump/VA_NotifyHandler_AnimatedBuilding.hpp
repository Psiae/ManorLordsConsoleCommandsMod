#ifndef UE4SS_SDK_VA_NotifyHandler_AnimatedBuilding_HPP
#define UE4SS_SDK_VA_NotifyHandler_AnimatedBuilding_HPP

class UVA_NotifyHandler_AnimatedBuilding_C : public UVANotifyHandler
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0028 (size: 0x8)

    class UVARuntimeComponent* getVARuntime(class AActor*& OwnerActor);
    void AnimNotify_stop();
    void ExecuteUbergraph_VA_NotifyHandler_AnimatedBuilding(int32 EntryPoint);
}; // Size: 0x30

#endif
