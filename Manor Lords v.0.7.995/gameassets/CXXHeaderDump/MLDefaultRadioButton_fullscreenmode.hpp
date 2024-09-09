#ifndef UE4SS_SDK_MLDefaultRadioButton_fullscreenmode_HPP
#define UE4SS_SDK_MLDefaultRadioButton_fullscreenmode_HPP

class UMLDefaultRadioButton_fullscreenmode_C : public URadioButton
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UtextButton_C* textButton;                                                  // 0x0320 (size: 0x8)
    FMLDefaultRadioButton_fullscreenmode_CClicked Clicked;                            // 0x0328 (size: 0x10)
    void Clicked(int32 Value);
    FText rawLabel;                                                                   // 0x0338 (size: 0x10)
    TArray<FIntPoint> commonResolutions;                                              // 0x0348 (size: 0x10)

    void getLargestLegitResolutionSmallerOrEqualToViewport_NOT_USED(TArray<FIntPoint>& legitResolutions, const FIntPoint& viewportResolution, FVector2D& Resolution);
    FSlateColor GetTextColor();
    void Translate();
    void UpdateLabel(const FText& InLabel);
    void BndEvt__MLDefaultRadioButton_fullscreenmode_textButton_K2Node_ComponentBoundEvent_1_onReleased__DelegateSignature();
    void UpdateSelected(bool InSelected);
    void ExecuteUbergraph_MLDefaultRadioButton_fullscreenmode(int32 EntryPoint);
    void Clicked__DelegateSignature(int32 Value);
}; // Size: 0x358

#endif
