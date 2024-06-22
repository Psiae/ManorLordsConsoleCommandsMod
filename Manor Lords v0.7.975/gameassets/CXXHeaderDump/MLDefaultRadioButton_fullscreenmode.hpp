#ifndef UE4SS_SDK_MLDefaultRadioButton_fullscreenmode_HPP
#define UE4SS_SDK_MLDefaultRadioButton_fullscreenmode_HPP

class UMLDefaultRadioButton_fullscreenmode_C : public URadioButton
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A0 (size: 0x8)
    class UButton* MainButton;                                                        // 0x02A8 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x02B0 (size: 0x8)
    FMLDefaultRadioButton_fullscreenmode_CClicked Clicked;                            // 0x02B8 (size: 0x10)
    void Clicked(int32 Value);
    FText rawLabel;                                                                   // 0x02C8 (size: 0x18)
    TArray<FIntPoint> commonResolutions;                                              // 0x02E0 (size: 0x10)

    void getLargestLegitResolutionSmallerOrEqualToViewport_NOT_USED(TArray<FIntPoint>& legitResolutions, const FIntPoint& viewportResolution, FVector2D& Resolution);
    FSlateColor GetTextColor();
    void Translate();
    void UpdateLabel(const FText& InLabel);
    void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_MLDefaultRadioButton_fullscreenmode(int32 EntryPoint);
    void Clicked__DelegateSignature(int32 Value);
}; // Size: 0x2F0

#endif
