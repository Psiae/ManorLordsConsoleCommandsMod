#ifndef UE4SS_SDK_MLDefaultRadioButton_HPP
#define UE4SS_SDK_MLDefaultRadioButton_HPP

class UMLDefaultRadioButton_C : public URadioButton
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0308 (size: 0x8)
    class UtextButton_C* textButton;                                                  // 0x0310 (size: 0x8)
    FMLDefaultRadioButton_CClicked Clicked;                                           // 0x0318 (size: 0x10)
    void Clicked(int32 Value);

    FSlateColor GetTextColor();
    void UpdateLabel(const FText& InLabel);
    void Translate();
    void BndEvt__MLDefaultRadioButton_textButton_K2Node_ComponentBoundEvent_1_onReleased__DelegateSignature();
    void UpdateSelected(bool InSelected);
    void Construct();
    void ExecuteUbergraph_MLDefaultRadioButton(int32 EntryPoint);
    void Clicked__DelegateSignature(int32 Value);
}; // Size: 0x328

#endif
