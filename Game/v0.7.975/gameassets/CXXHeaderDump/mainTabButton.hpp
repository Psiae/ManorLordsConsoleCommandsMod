#ifndef UE4SS_SDK_mainTabButton_HPP
#define UE4SS_SDK_mainTabButton_HPP

class UmainTabButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* hover;                                                    // 0x0268 (size: 0x8)
    class UButton* Button_0;                                                          // 0x0270 (size: 0x8)
    class UImage* glow;                                                               // 0x0278 (size: 0x8)
    class UImage* mainIcon;                                                           // 0x0280 (size: 0x8)
    class UMainUICPP_C* mainUI reference;                                             // 0x0288 (size: 0x8)
    FText Text;                                                                       // 0x0290 (size: 0x18)
    class UTexture2D* iconTexture;                                                    // 0x02A8 (size: 0x8)
    int32 tabID;                                                                      // 0x02B0 (size: 0x4)
    int32 previousTabID;                                                              // 0x02B4 (size: 0x4)
    FName mappingName;                                                                // 0x02B8 (size: 0x8)

    void flipRoadMode(class APawnCPP* playerRef, class UMainUICPP_C* InputPin);
    class UWidget* GetToolTipWidget_0();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void pressButton();
    void BndEvt__mainTabButton_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_mainTabButton(int32 EntryPoint);
}; // Size: 0x2C0

#endif
