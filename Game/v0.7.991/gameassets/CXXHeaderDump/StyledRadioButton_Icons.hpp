#ifndef UE4SS_SDK_StyledRadioButton_Icons_HPP
#define UE4SS_SDK_StyledRadioButton_Icons_HPP

class UStyledRadioButton_Icons_C : public URadioButton
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UWidgetAnimation* Pressed;                                                  // 0x0320 (size: 0x8)
    class UGridPanel* GridPanel_0;                                                    // 0x0328 (size: 0x8)
    class UImage* iconImg;                                                            // 0x0330 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0338 (size: 0x8)
    class UImage* Image_23;                                                           // 0x0340 (size: 0x8)
    class UTextBlock* LabelText;                                                      // 0x0348 (size: 0x8)
    class UButton* MainButton;                                                        // 0x0350 (size: 0x8)

    FSlateColor GetColour();
    void UpdateLabel(const FText& InLabel);
    void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void UpdateSelected(bool InSelected);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_StyledRadioButton_Icons(int32 EntryPoint);
}; // Size: 0x358

#endif
