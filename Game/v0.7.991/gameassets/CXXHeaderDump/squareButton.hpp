#ifndef UE4SS_SDK_squareButton_HPP
#define UE4SS_SDK_squareButton_HPP

class UsquareButton_C : public UNaviUi
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UWidgetAnimation* hover;                                                    // 0x0350 (size: 0x8)
    class UButton* Button;                                                            // 0x0358 (size: 0x8)
    class UNamedSlot* ContentCustom;                                                  // 0x0360 (size: 0x8)
    class UTextBlock* ContentText;                                                    // 0x0368 (size: 0x8)
    class UImage* Focus_Bg;                                                           // 0x0370 (size: 0x8)
    class USpacer* Focus_SpacingLeft;                                                 // 0x0378 (size: 0x8)
    class USpacer* Focus_SpacingRight;                                                // 0x0380 (size: 0x8)
    class UImage* Focus_SymbolLeft;                                                   // 0x0388 (size: 0x8)
    class UImage* Focus_SymbolRight;                                                  // 0x0390 (size: 0x8)
    class UMD_NaviAutoFocusHighlight_C* MD_NaviAutoFocusHighlight;                    // 0x0398 (size: 0x8)
    class UBorder* Tinter;                                                            // 0x03A0 (size: 0x8)
    FName textKey;                                                                    // 0x03A8 (size: 0x8)
    FsquareButton_COnReleased OnReleased;                                             // 0x03B0 (size: 0x10)
    void onReleased();
    FSlateColor FontColor;                                                            // 0x03C0 (size: 0x14)
    int32 FontSize;                                                                   // 0x03D4 (size: 0x4)
    FSlateFontInfo Font;                                                              // 0x03D8 (size: 0x60)
    class UObject* FontFamily;                                                        // 0x0438 (size: 0x8)

    void SetImageSize(class UImage* InputPin, int32 Size);
    void SetShownTextKey(FName NextTextKey);
    void DoOnReleased();
    ENaviHandleMethod HandleInput(ENaviUiIntent Key);
    void BndEvt__menuButton_Button_35_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void Translate();
    void BndEvt__menuButton_Button_35_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_squareButton(int32 EntryPoint);
    void onReleased__DelegateSignature();
}; // Size: 0x440

#endif
