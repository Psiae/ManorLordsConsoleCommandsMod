#ifndef UE4SS_SDK_MLDefaultSpinner_HPP
#define UE4SS_SDK_MLDefaultSpinner_HPP

class UMLDefaultSpinner_C : public USpinner
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UWidgetAnimation* scrollright;                                              // 0x0298 (size: 0x8)
    class UWidgetAnimation* scrollleft;                                               // 0x02A0 (size: 0x8)
    class UImage* LeftArrow;                                                          // 0x02A8 (size: 0x8)
    class UButton* LeftButton;                                                        // 0x02B0 (size: 0x8)
    class UImage* RightArrow;                                                         // 0x02B8 (size: 0x8)
    class UButton* RightButton;                                                       // 0x02C0 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x02C8 (size: 0x8)
    FMLDefaultSpinner_CButtonPressed ButtonPressed;                                   // 0x02D0 (size: 0x10)
    void buttonPressed(FString Value);
    bool localize;                                                                    // 0x02E0 (size: 0x1)

    void spinnerButtonWasClicked();
    FLinearColor GetRightArrowColorAndOpacity();
    FLinearColor GetLeftArrowColorAndOpacity();
    FText GetLabelText();
    void BndEvt__LeftButton_K2Node_ComponentBoundEvent_178_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__RightButton_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_MLDefaultSpinner(int32 EntryPoint);
    void buttonPressed__DelegateSignature(FString Value);
}; // Size: 0x2E1

#endif
