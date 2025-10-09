#ifndef UE4SS_SDK_DefaultRadioButton_HPP
#define UE4SS_SDK_DefaultRadioButton_HPP

class UDefaultRadioButton_C : public URadioButton
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    class UButton* MainButton;                                                        // 0x02A8 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x02B0 (size: 0x8)
    FDefaultRadioButton_CClicked Clicked;                                             // 0x02B8 (size: 0x10)
    void Clicked(int32 Value);

    FSlateColor GetTextColor();
    void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_DefaultRadioButton(int32 EntryPoint);
    void Clicked__DelegateSignature(int32 Value);
}; // Size: 0x2C8

#endif
