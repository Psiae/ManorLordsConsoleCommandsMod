#ifndef UE4SS_SDK_progressTrackingButton_HPP
#define UE4SS_SDK_progressTrackingButton_HPP

class UprogressTrackingButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x02D8 (size: 0x8)
    class UButton* DevButton_0;                                                       // 0x02E0 (size: 0x8)
    class UImage* glow;                                                               // 0x02E8 (size: 0x8)
    class UImage* mainIcon;                                                           // 0x02F0 (size: 0x8)
    class UImage* ring_glow;                                                          // 0x02F8 (size: 0x8)
    class UTexture2D* Icon;                                                           // 0x0300 (size: 0x8)
    FName focus;                                                                      // 0x0308 (size: 0x8)

    void BndEvt__progressTrackingButton_DevButton_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__progressTrackingButton_DevButton_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_progressTrackingButton(int32 EntryPoint);
}; // Size: 0x310

#endif
