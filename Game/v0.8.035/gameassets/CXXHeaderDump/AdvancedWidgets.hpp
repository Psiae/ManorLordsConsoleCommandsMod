#ifndef UE4SS_SDK_AdvancedWidgets_HPP
#define UE4SS_SDK_AdvancedWidgets_HPP

struct FColorGradingSpinBoxStyle : public FSlateWidgetStyle
{
    FSlateBrush BorderBrush;                                                          // 0x0010 (size: 0xB0)
    FSlateBrush ActiveBorderBrush;                                                    // 0x00C0 (size: 0xB0)
    FSlateBrush HoveredBorderBrush;                                                   // 0x0170 (size: 0xB0)
    FSlateBrush SelectorBrush;                                                        // 0x0220 (size: 0xB0)
    float SelectorWidth;                                                              // 0x02D0 (size: 0x4)

}; // Size: 0x2E0

class URadialSlider : public UWidget
{
    float Value;                                                                      // 0x0168 (size: 0x4)
    FRadialSliderValueDelegate ValueDelegate;                                         // 0x016C (size: 0x10)
    float GetFloat();
    bool bUseCustomDefaultValue;                                                      // 0x017C (size: 0x1)
    float CustomDefaultValue;                                                         // 0x0180 (size: 0x4)
    FRuntimeFloatCurve SliderRange;                                                   // 0x0188 (size: 0x88)
    TArray<float> ValueTags;                                                          // 0x0210 (size: 0x10)
    float SliderHandleStartAngle;                                                     // 0x0220 (size: 0x4)
    float SliderHandleEndAngle;                                                       // 0x0224 (size: 0x4)
    float AngularOffset;                                                              // 0x0228 (size: 0x4)
    FVector2D HandStartEndRatio;                                                      // 0x0230 (size: 0x10)
    FSliderStyle WidgetStyle;                                                         // 0x0240 (size: 0x440)
    FLinearColor SliderBarColor;                                                      // 0x0680 (size: 0x10)
    FLinearColor SliderProgressColor;                                                 // 0x0690 (size: 0x10)
    FLinearColor SliderHandleColor;                                                   // 0x06A0 (size: 0x10)
    FLinearColor CenterBackgroundColor;                                               // 0x06B0 (size: 0x10)
    bool Locked;                                                                      // 0x06C0 (size: 0x1)
    bool MouseUsesStep;                                                               // 0x06C1 (size: 0x1)
    bool RequiresControllerLock;                                                      // 0x06C2 (size: 0x1)
    float StepSize;                                                                   // 0x06C4 (size: 0x4)
    bool IsFocusable;                                                                 // 0x06C8 (size: 0x1)
    bool UseVerticalDrag;                                                             // 0x06C9 (size: 0x1)
    bool ShowSliderHandle;                                                            // 0x06CA (size: 0x1)
    bool ShowSliderHand;                                                              // 0x06CB (size: 0x1)
    FRadialSliderOnMouseCaptureBegin OnMouseCaptureBegin;                             // 0x06D0 (size: 0x10)
    void OnMouseCaptureBeginEvent();
    FRadialSliderOnMouseCaptureEnd OnMouseCaptureEnd;                                 // 0x06E0 (size: 0x10)
    void OnMouseCaptureEndEvent();
    FRadialSliderOnControllerCaptureBegin OnControllerCaptureBegin;                   // 0x06F0 (size: 0x10)
    void OnControllerCaptureBeginEvent();
    FRadialSliderOnControllerCaptureEnd OnControllerCaptureEnd;                       // 0x0700 (size: 0x10)
    void OnControllerCaptureEndEvent();
    FRadialSliderOnValueChanged OnValueChanged;                                       // 0x0710 (size: 0x10)
    void OnFloatValueChangedEvent(float Value);

    void SetValueTags(const TArray<float>& InValueTags);
    void SetValue(float InValue);
    void SetUseVerticalDrag(bool InUseVerticalDrag);
    void SetStepSize(float InValue);
    void SetSliderRange(const FRuntimeFloatCurve& InSliderRange);
    void SetSliderProgressColor(FLinearColor InValue);
    void SetSliderHandleStartAngle(float InValue);
    void SetSliderHandleEndAngle(float InValue);
    void SetSliderHandleColor(FLinearColor InValue);
    void SetSliderBarColor(FLinearColor InValue);
    void SetShowSliderHandle(bool InShowSliderHandle);
    void SetShowSliderHand(bool InShowSliderHand);
    void SetLocked(bool InValue);
    void SetHandStartEndRatio(FVector2D InValue);
    void SetCustomDefaultValue(float InValue);
    void SetCenterBackgroundColor(FLinearColor InValue);
    void SetAngularOffset(float InValue);
    float GetValue();
    float GetNormalizedSliderHandlePosition();
    float GetCustomDefaultValue();
}; // Size: 0x730

#endif
