#ifndef UE4SS_SDK_AdvancedWidgets_HPP
#define UE4SS_SDK_AdvancedWidgets_HPP

class URadialSlider : public UWidget
{
    float Value;                                                                      // 0x0178 (size: 0x4)
    FRadialSliderValueDelegate ValueDelegate;                                         // 0x017C (size: 0x10)
    float GetFloat();
    bool bUseCustomDefaultValue;                                                      // 0x018C (size: 0x1)
    float CustomDefaultValue;                                                         // 0x0190 (size: 0x4)
    FRuntimeFloatCurve SliderRange;                                                   // 0x0198 (size: 0x88)
    TArray<float> ValueTags;                                                          // 0x0220 (size: 0x10)
    float SliderHandleStartAngle;                                                     // 0x0230 (size: 0x4)
    float SliderHandleEndAngle;                                                       // 0x0234 (size: 0x4)
    float AngularOffset;                                                              // 0x0238 (size: 0x4)
    FVector2D HandStartEndRatio;                                                      // 0x0240 (size: 0x10)
    FSliderStyle WidgetStyle;                                                         // 0x0250 (size: 0x500)
    FLinearColor SliderBarColor;                                                      // 0x0750 (size: 0x10)
    FLinearColor SliderProgressColor;                                                 // 0x0760 (size: 0x10)
    FLinearColor SliderHandleColor;                                                   // 0x0770 (size: 0x10)
    FLinearColor CenterBackgroundColor;                                               // 0x0780 (size: 0x10)
    bool Locked;                                                                      // 0x0790 (size: 0x1)
    bool MouseUsesStep;                                                               // 0x0791 (size: 0x1)
    bool RequiresControllerLock;                                                      // 0x0792 (size: 0x1)
    float StepSize;                                                                   // 0x0794 (size: 0x4)
    bool IsFocusable;                                                                 // 0x0798 (size: 0x1)
    bool UseVerticalDrag;                                                             // 0x0799 (size: 0x1)
    bool ShowSliderHandle;                                                            // 0x079A (size: 0x1)
    bool ShowSliderHand;                                                              // 0x079B (size: 0x1)
    FRadialSliderOnMouseCaptureBegin OnMouseCaptureBegin;                             // 0x07A0 (size: 0x10)
    void OnMouseCaptureBeginEvent();
    FRadialSliderOnMouseCaptureEnd OnMouseCaptureEnd;                                 // 0x07B0 (size: 0x10)
    void OnMouseCaptureEndEvent();
    FRadialSliderOnControllerCaptureBegin OnControllerCaptureBegin;                   // 0x07C0 (size: 0x10)
    void OnControllerCaptureBeginEvent();
    FRadialSliderOnControllerCaptureEnd OnControllerCaptureEnd;                       // 0x07D0 (size: 0x10)
    void OnControllerCaptureEndEvent();
    FRadialSliderOnValueChanged OnValueChanged;                                       // 0x07E0 (size: 0x10)
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
}; // Size: 0x800

#endif
