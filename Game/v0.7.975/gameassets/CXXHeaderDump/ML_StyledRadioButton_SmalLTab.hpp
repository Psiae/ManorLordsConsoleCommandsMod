#ifndef UE4SS_SDK_ML_StyledRadioButton_SmalLTab_HPP
#define UE4SS_SDK_ML_StyledRadioButton_SmalLTab_HPP

class UML_StyledRadioButton_SmalLTab_C : public URadioButton
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    class UTextBlock* LabelText;                                                      // 0x02A8 (size: 0x8)
    class UButton* MainButton;                                                        // 0x02B0 (size: 0x8)

    FSlateColor GetColour();
    void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void UpdateLabel(const FText& InLabel);
    void ExecuteUbergraph_ML_StyledRadioButton_SmalLTab(int32 EntryPoint);
}; // Size: 0x2B8

#endif
