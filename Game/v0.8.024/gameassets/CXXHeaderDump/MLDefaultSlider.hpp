#ifndef UE4SS_SDK_MLDefaultSlider_HPP
#define UE4SS_SDK_MLDefaultSlider_HPP

class UMLDefaultSlider_C : public UNaviUi
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UMD_NaviAutoFocusHighlight_C* MD_NaviAutoFocusHighlight;                    // 0x0350 (size: 0x8)
    class USlider* SliderControl;                                                     // 0x0358 (size: 0x8)
    class USizeBox* SliderSizeParent;                                                 // 0x0360 (size: 0x8)
    class UTextBlock* ValueDisplay;                                                   // 0x0368 (size: 0x8)
    class USizeBox* ValueSizeParent;                                                  // 0x0370 (size: 0x8)
    float ValueDefault;                                                               // 0x0378 (size: 0x4)
    float ValueMin;                                                                   // 0x037C (size: 0x4)
    float ValueMax;                                                                   // 0x0380 (size: 0x4)
    float ValueStepSize;                                                              // 0x0384 (size: 0x4)
    bool ForceSliderPrecision;                                                        // 0x0388 (size: 0x1)
    double ForceSliderFractionPrecision;                                              // 0x0390 (size: 0x8)
    float SliderBarWidth;                                                             // 0x0398 (size: 0x4)
    ESlateVisibility ValueVisiblity;                                                  // 0x039C (size: 0x1)
    float ValueDisplayWidth;                                                          // 0x03A0 (size: 0x4)
    FMLDefaultSlider_COnValueChange OnValueChange;                                    // 0x03A8 (size: 0x10)
    void OnValueChange(double Value);
    FMLDefaultSlider_COnValueCommited OnValueCommited;                                // 0x03B8 (size: 0x10)
    void OnValueCommited(double CommitedValue);
    FSlateFontInfo ValueFont;                                                         // 0x03C8 (size: 0x60)
    FSlateColor ValueFontColor;                                                       // 0x0428 (size: 0x14)
    FMargin ValuePadding;                                                             // 0x043C (size: 0x10)
    bool ValueAsPercentage;                                                           // 0x044C (size: 0x1)
    class USoundBase* Sfx_SoundFile;                                                  // 0x0450 (size: 0x8)
    double Sfx_CooldownTime;                                                          // 0x0458 (size: 0x8)
    float SfxVolume;                                                                  // 0x0460 (size: 0x4)
    float SfxPitch;                                                                   // 0x0464 (size: 0x4)
    double timeOfLastSfx;                                                             // 0x0468 (size: 0x8)
    bool IgnoreChanges;                                                               // 0x0470 (size: 0x1)
    int32 Minimum Fractional Digits;                                                  // 0x0474 (size: 0x4)
    float LastShownValue;                                                             // 0x0478 (size: 0x4)
    bool NaviUI_SliderHasFullFocus;                                                   // 0x047C (size: 0x1)

    void ComputeInversion(double Value, double& InvertedValue);
    void SetColorOnSliderDot(FLinearColor SpecifiedColor);
    bool WantsAllInput();
    void AlterValueByFullStep(bool GoHigher);
    void SetControllerFocusShown(bool InputPin);
    void SetControllerControlShown(bool HasControllerFocus);
    ENaviHandleMethod HandleInput(ENaviUiIntent Key);
    void GetValue(double& CurrentValue);
    void ExternalSetValue(double NewValue);
    void ConsiderValueByRules(float InputValue, double& ValidValue);
    void ConsiderOnChangeSfx();
    void DisplayValue(float InputPin);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__MLDefaultSlider_SliderControl_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__MLDefaultSlider_SliderControl_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature();
    void OnFocusChanged(bool nowHasFocus);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_MLDefaultSlider(int32 EntryPoint);
    void OnValueCommited__DelegateSignature(double CommitedValue);
    void OnValueChange__DelegateSignature(double Value);
}; // Size: 0x47D

#endif
