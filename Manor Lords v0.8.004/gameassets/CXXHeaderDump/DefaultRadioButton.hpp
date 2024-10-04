#ifndef UE4SS_SDK_DefaultRadioButton_HPP
#define UE4SS_SDK_DefaultRadioButton_HPP

class UDefaultRadioButton_C : public URadioButton
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UButton* MainButton;                                                        // 0x0320 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x0328 (size: 0x8)
    FDefaultRadioButton_CClicked Clicked;                                             // 0x0330 (size: 0x10)
    void Clicked(int32 Value);

    FSlateColor GetTextColor();
    void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_DefaultRadioButton(int32 EntryPoint);
    void Clicked__DelegateSignature(int32 Value);
}; // Size: 0x340

#endif
