#ifndef UE4SS_SDK_MLStyledRadioButtonB_HPP
#define UE4SS_SDK_MLStyledRadioButtonB_HPP

class UMLStyledRadioButtonB_C : public URadioButton
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    class UTextBlock* LabelText;                                                      // 0x02A8 (size: 0x8)
    class UButton* MainButton;                                                        // 0x02B0 (size: 0x8)
    FMLStyledRadioButtonB_COnHover onHover;                                           // 0x02B8 (size: 0x10)
    void onHover(FString Value);
    FMLStyledRadioButtonB_COnLeave onLeave;                                           // 0x02C8 (size: 0x10)
    void onLeave();
    bool Localized;                                                                   // 0x02D8 (size: 0x1)
    FText originalLabel;                                                              // 0x02E0 (size: 0x18)

    FSlateColor GetColour();
    void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void UpdateLabel(const FText& InLabel);
    void BndEvt__MLStyledRadioButtonB_MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__MLStyledRadioButtonB_MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void retranslate();
    void ExecuteUbergraph_MLStyledRadioButtonB(int32 EntryPoint);
    void onLeave__DelegateSignature();
    void onHover__DelegateSignature(FString Value);
}; // Size: 0x2F8

#endif
