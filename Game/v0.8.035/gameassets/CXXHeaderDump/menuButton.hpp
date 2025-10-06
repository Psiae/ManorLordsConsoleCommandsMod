#ifndef UE4SS_SDK_menuButton_HPP
#define UE4SS_SDK_menuButton_HPP

class UmenuButton_C : public UNaviUi
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UWidgetAnimation* hover;                                                    // 0x0348 (size: 0x8)
    class UButton* Button_35;                                                         // 0x0350 (size: 0x8)
    class UImage* Image_76;                                                           // 0x0358 (size: 0x8)
    class UImage* Image_103;                                                          // 0x0360 (size: 0x8)
    class UImage* leftImg;                                                            // 0x0368 (size: 0x8)
    class UMD_NaviAutoHotkey_C* MD_NaviAutoHotkey;                                    // 0x0370 (size: 0x8)
    class UTextBlock* TextBlock;                                                      // 0x0378 (size: 0x8)
    FName textKey;                                                                    // 0x0380 (size: 0x8)
    FmenuButton_COnReleased OnReleased;                                               // 0x0388 (size: 0x10)
    void onReleased();
    int32 FontSize;                                                                   // 0x0398 (size: 0x4)
    FSlateFontInfo Font;                                                              // 0x03A0 (size: 0x60)

    void UpdateText();
    void HideAnyControllerTooltip();
    void ShowControllerTooltip();
    void DoOnReleased();
    ENaviHandleMethod HandleInput(ENaviUiIntent Key);
    void BndEvt__menuButton_Button_35_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void Translate();
    void OnFocusChanged(bool nowHasFocus);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_menuButton(int32 EntryPoint);
    void onReleased__DelegateSignature();
}; // Size: 0x400

#endif
