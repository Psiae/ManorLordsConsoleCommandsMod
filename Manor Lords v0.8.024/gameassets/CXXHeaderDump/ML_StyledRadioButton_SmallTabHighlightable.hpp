#ifndef UE4SS_SDK_ML_StyledRadioButton_SmallTabHighlightable_HPP
#define UE4SS_SDK_ML_StyledRadioButton_SmallTabHighlightable_HPP

class UML_StyledRadioButton_SmallTabHighlightable_C : public URadioButton
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UBorder* highlightBorder;                                                   // 0x0320 (size: 0x8)
    class UTextBlock* LabelText;                                                      // 0x0328 (size: 0x8)
    class UButton* MainButton;                                                        // 0x0330 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton;                                    // 0x0338 (size: 0x8)

    FSlateColor GetColour();
    void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void UpdateLabel(const FText& InLabel);
    void EmulateClick();
    void ExecuteUbergraph_ML_StyledRadioButton_SmallTabHighlightable(int32 EntryPoint);
}; // Size: 0x340

#endif
