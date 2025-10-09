#ifndef UE4SS_SDK_menuButton_HPP
#define UE4SS_SDK_menuButton_HPP

class UmenuButton_C : public UNaviUi
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UWidgetAnimation* hover;                                                    // 0x02C8 (size: 0x8)
    class UButton* Button_35;                                                         // 0x02D0 (size: 0x8)
    class UImage* Image_76;                                                           // 0x02D8 (size: 0x8)
    class UImage* Image_103;                                                          // 0x02E0 (size: 0x8)
    class UImage* leftImg;                                                            // 0x02E8 (size: 0x8)
    class UTextBlock* TextBlock;                                                      // 0x02F0 (size: 0x8)
    FName textKey;                                                                    // 0x02F8 (size: 0x8)
    FmenuButton_COnReleased OnReleased;                                               // 0x0300 (size: 0x10)
    void onReleased();
    int32 FontSize;                                                                   // 0x0310 (size: 0x4)
    FSlateFontInfo Font;                                                              // 0x0318 (size: 0x58)

    void DoOnReleased();
    ENaviHandleMethod HandleInput(ENaviUiIntent Key);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__menuButton_Button_35_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void Construct();
    void Translate();
    void OnFocusChanged(bool nowHasFocus);
    void BndEvt__menuButton_Button_35_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__menuButton_Button_35_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_menuButton(int32 EntryPoint);
    void onReleased__DelegateSignature();
}; // Size: 0x370

#endif
