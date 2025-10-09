#ifndef UE4SS_SDK_mainTabButton_HPP
#define UE4SS_SDK_mainTabButton_HPP

class UmainTabButton_C : public UNaviUi
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UWidgetAnimation* hover;                                                    // 0x0350 (size: 0x8)
    class UImage* glow;                                                               // 0x0358 (size: 0x8)
    class UImage* mainIcon;                                                           // 0x0360 (size: 0x8)
    class UImage* ring_glow;                                                          // 0x0368 (size: 0x8)
    class UButton* TabButton;                                                         // 0x0370 (size: 0x8)
    class UMainUICPP_C* mainUI reference;                                             // 0x0378 (size: 0x8)
    FText Text;                                                                       // 0x0380 (size: 0x10)
    class UTexture2D* iconTexture;                                                    // 0x0390 (size: 0x8)
    int32 tabID;                                                                      // 0x0398 (size: 0x4)
    int32 previousTabID;                                                              // 0x039C (size: 0x4)
    FName MappingName;                                                                // 0x03A0 (size: 0x8)

    void SetHoverDisplayAllowed(bool IsAllowedToShowHover);
    ENaviHandleMethod HandleInput(ENaviUiIntent Key);
    void flipRoadMode(class APawnCPP* playerRef, class UMainUICPP_C* InputPin);
    class UWidget* GetToolTipWidget_0();
    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void pressButton();
    void BndEvt__mainTabButton_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void OnFocusChanged(bool nowHasFocus);
    void ExecuteUbergraph_mainTabButton(int32 EntryPoint);
}; // Size: 0x3A8

#endif
