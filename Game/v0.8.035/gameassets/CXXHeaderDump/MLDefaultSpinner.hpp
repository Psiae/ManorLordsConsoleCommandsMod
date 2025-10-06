#ifndef UE4SS_SDK_MLDefaultSpinner_HPP
#define UE4SS_SDK_MLDefaultSpinner_HPP

class UMLDefaultSpinner_C : public USpinner
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0300 (size: 0x8)
    class UWidgetAnimation* scrollright;                                              // 0x0308 (size: 0x8)
    class UWidgetAnimation* scrollleft;                                               // 0x0310 (size: 0x8)
    class UImage* LeftArrow;                                                          // 0x0318 (size: 0x8)
    class UButton* LeftButton;                                                        // 0x0320 (size: 0x8)
    class UMD_NaviHijackProxy_C* MD_NaviHijackProxy;                                  // 0x0328 (size: 0x8)
    class UImage* RightArrow;                                                         // 0x0330 (size: 0x8)
    class UButton* RightButton;                                                       // 0x0338 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x0340 (size: 0x8)
    FMLDefaultSpinner_CButtonPressed ButtonPressed;                                   // 0x0348 (size: 0x10)
    void buttonPressed(FString Value);
    bool localize;                                                                    // 0x0358 (size: 0x1)
    class UWidget* SecondaryTooltipTarget;                                            // 0x0360 (size: 0x8)

    void RefreshTooltip();
    void CycleChoices(bool IsNextDirection);
    FLinearColor ComputeButtonPreferedButtonColor();
    void HandleFocusChange(bool HasFocus);
    void HandleInput(ENaviUiIntent intent);
    void SetupNaviui();
    void ReportChangeToMainSetupIfExists();
    FLinearColor GetRightArrowColorAndOpacity();
    FLinearColor GetLeftArrowColorAndOpacity();
    FText GetLabelText();
    void BndEvt__LeftButton_K2Node_ComponentBoundEvent_178_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__RightButton_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_MLDefaultSpinner(int32 EntryPoint);
    void buttonPressed__DelegateSignature(FString Value);
}; // Size: 0x368

#endif
