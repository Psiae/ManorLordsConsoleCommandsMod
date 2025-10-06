#ifndef UE4SS_SDK_AudioWidgets_HPP
#define UE4SS_SDK_AudioWidgets_HPP

#include "AudioWidgets_enums.hpp"

struct FAudioMaterialButtonStyle : public FAudioMaterialWidgetStyle
{
    FLinearColor ButtonMainColor;                                                     // 0x0018 (size: 0x10)
    FLinearColor ButtonMainColorTint_1;                                               // 0x0028 (size: 0x10)
    FLinearColor ButtonMainColorTint_2;                                               // 0x0038 (size: 0x10)
    FLinearColor ButtonAccentColor;                                                   // 0x0048 (size: 0x10)
    FLinearColor ButtonShadowColor;                                                   // 0x0058 (size: 0x10)
    FLinearColor ButtonUnpressedOutlineColor;                                         // 0x0068 (size: 0x10)
    FLinearColor ButtonPressedOutlineColor;                                           // 0x0078 (size: 0x10)

}; // Size: 0x88

struct FAudioMaterialEnvelopeSettings
{
    EAudioMaterialEnvelopeType EnvelopeType;                                          // 0x0000 (size: 0x1)
    float AttackCurve;                                                                // 0x0004 (size: 0x4)
    float AttackValue;                                                                // 0x0008 (size: 0x4)
    float AttackTime;                                                                 // 0x000C (size: 0x4)
    float DecayCurve;                                                                 // 0x0010 (size: 0x4)
    float DecayTime;                                                                  // 0x0014 (size: 0x4)
    float SustainValue;                                                               // 0x0018 (size: 0x4)
    float ReleaseCurve;                                                               // 0x001C (size: 0x4)
    float ReleaseTime;                                                                // 0x0020 (size: 0x4)

}; // Size: 0x24

struct FAudioMaterialEnvelopeStyle : public FAudioMaterialWidgetStyle
{
    FLinearColor CurveColor;                                                          // 0x0018 (size: 0x10)
    FLinearColor BackgroundColor;                                                     // 0x0028 (size: 0x10)
    FLinearColor OutlineColor;                                                        // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FAudioMaterialKnobStyle : public FAudioMaterialWidgetStyle
{
    FLinearColor KnobMainColor;                                                       // 0x0018 (size: 0x10)
    FLinearColor KnobAccentColor;                                                     // 0x0028 (size: 0x10)
    FLinearColor KnobShadowColor;                                                     // 0x0038 (size: 0x10)
    FLinearColor KnobSmoothBevelColor;                                                // 0x0048 (size: 0x10)
    FLinearColor KnobIndicatorDotColor;                                               // 0x0058 (size: 0x10)
    FLinearColor KnobEdgeFillColor;                                                   // 0x0068 (size: 0x10)
    FLinearColor KnobBarColor;                                                        // 0x0078 (size: 0x10)
    FLinearColor KnobBarShadowColor;                                                  // 0x0088 (size: 0x10)
    FLinearColor KnobBarFillMinColor;                                                 // 0x0098 (size: 0x10)
    FLinearColor KnobBarFillMidColor;                                                 // 0x00A8 (size: 0x10)
    FLinearColor KnobBarFillMaxColor;                                                 // 0x00B8 (size: 0x10)
    FLinearColor KnobBarFillTintColor;                                                // 0x00C8 (size: 0x10)
    FAudioTextBoxStyle TextBoxStyle;                                                  // 0x00E0 (size: 0xE0)

}; // Size: 0x1C0

struct FAudioMaterialMeterStyle : public FAudioMaterialWidgetStyle
{
    FLinearColor MeterFillMinColor;                                                   // 0x0018 (size: 0x10)
    FLinearColor MeterFillMidColor;                                                   // 0x0028 (size: 0x10)
    FLinearColor MeterFillMaxColor;                                                   // 0x0038 (size: 0x10)
    FLinearColor MeterFillBackgroundColor;                                            // 0x0048 (size: 0x10)
    FVector2D MeterPadding;                                                           // 0x0058 (size: 0x10)
    FVector2D ValueRangeDb;                                                           // 0x0068 (size: 0x10)
    bool bShowScale;                                                                  // 0x0078 (size: 0x1)
    bool bScaleSide;                                                                  // 0x0079 (size: 0x1)
    float ScaleHashOffset;                                                            // 0x007C (size: 0x4)
    float ScaleHashWidth;                                                             // 0x0080 (size: 0x4)
    float ScaleHashHeight;                                                            // 0x0084 (size: 0x4)
    int32 DecibelsPerHash;                                                            // 0x0088 (size: 0x4)
    FSlateFontInfo Font;                                                              // 0x0090 (size: 0x60)

}; // Size: 0xF0

struct FAudioMaterialSliderStyle : public FAudioMaterialWidgetStyle
{
    FLinearColor SliderBackgroundColor;                                               // 0x0018 (size: 0x10)
    FLinearColor SliderBackgroundAccentColor;                                         // 0x0028 (size: 0x10)
    FLinearColor SliderValueMainColor;                                                // 0x0038 (size: 0x10)
    FLinearColor SliderHandleMainColor;                                               // 0x0048 (size: 0x10)
    FLinearColor SliderHandleOutlineColor;                                            // 0x0058 (size: 0x10)
    FAudioTextBoxStyle TextBoxStyle;                                                  // 0x0070 (size: 0xE0)

}; // Size: 0x150

struct FAudioMaterialWidgetStyle : public FSlateWidgetStyle
{
    class UMaterialInterface* Material;                                               // 0x0008 (size: 0x8)
    FVector2f DesiredSize;                                                            // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FAudioMeterDefaultColorStyle : public FSlateWidgetStyle
{
    FLinearColor MeterBackgroundColor;                                                // 0x0008 (size: 0x10)
    FLinearColor MeterValueColor;                                                     // 0x0018 (size: 0x10)
    FLinearColor MeterPeakColor;                                                      // 0x0028 (size: 0x10)
    FLinearColor MeterClippingColor;                                                  // 0x0038 (size: 0x10)
    FLinearColor MeterScaleColor;                                                     // 0x0048 (size: 0x10)
    FLinearColor MeterScaleLabelColor;                                                // 0x0058 (size: 0x10)

}; // Size: 0x68

struct FAudioMeterStyle : public FSlateWidgetStyle
{
    FSlateBrush MeterValueImage;                                                      // 0x0010 (size: 0xB0)
    FSlateBrush BackgroundImage;                                                      // 0x00C0 (size: 0xB0)
    FSlateBrush MeterBackgroundImage;                                                 // 0x0170 (size: 0xB0)
    FSlateBrush MeterValueBackgroundImage;                                            // 0x0220 (size: 0xB0)
    FSlateBrush MeterPeakImage;                                                       // 0x02D0 (size: 0xB0)
    FVector2D MeterSize;                                                              // 0x0380 (size: 0x10)
    FVector2D MeterPadding;                                                           // 0x0390 (size: 0x10)
    float MeterValuePadding;                                                          // 0x03A0 (size: 0x4)
    float PeakValueWidth;                                                             // 0x03A4 (size: 0x4)
    FVector2D ValueRangeDb;                                                           // 0x03A8 (size: 0x10)
    bool bShowScale;                                                                  // 0x03B8 (size: 0x1)
    bool bScaleSide;                                                                  // 0x03B9 (size: 0x1)
    float ScaleHashOffset;                                                            // 0x03BC (size: 0x4)
    float ScaleHashWidth;                                                             // 0x03C0 (size: 0x4)
    float ScaleHashHeight;                                                            // 0x03C4 (size: 0x4)
    int32 DecibelsPerHash;                                                            // 0x03C8 (size: 0x4)
    FSlateFontInfo Font;                                                              // 0x03D0 (size: 0x60)

}; // Size: 0x430

struct FAudioOscilloscopePanelStyle : public FSlateWidgetStyle
{
    FFixedSampleSequenceRulerStyle TimeRulerStyle;                                    // 0x0010 (size: 0x230)
    FSampledSequenceValueGridOverlayStyle ValueGridStyle;                             // 0x0240 (size: 0xA0)
    FSampledSequenceViewerStyle WaveViewerStyle;                                      // 0x02E0 (size: 0x140)
    FTriggerThresholdLineStyle TriggerThresholdLineStyle;                             // 0x0420 (size: 0x18)

}; // Size: 0x440

struct FAudioRadialSliderStyle : public FSlateWidgetStyle
{
    FAudioTextBoxStyle TextBoxStyle;                                                  // 0x0010 (size: 0xE0)
    FSlateColor CenterBackgroundColor;                                                // 0x00F0 (size: 0x14)
    FSlateColor SliderBarColor;                                                       // 0x0104 (size: 0x14)
    FSlateColor SliderProgressColor;                                                  // 0x0118 (size: 0x14)
    float LabelPadding;                                                               // 0x012C (size: 0x4)
    float DefaultSliderRadius;                                                        // 0x0130 (size: 0x4)

}; // Size: 0x140

struct FAudioSliderStyle : public FSlateWidgetStyle
{
    FSliderStyle SliderStyle;                                                         // 0x0010 (size: 0x440)
    FAudioTextBoxStyle TextBoxStyle;                                                  // 0x0450 (size: 0xE0)
    FSlateBrush WidgetBackgroundImage;                                                // 0x0530 (size: 0xB0)
    FSlateColor SliderBackgroundColor;                                                // 0x05E0 (size: 0x14)
    FVector2D SliderBackgroundSize;                                                   // 0x05F8 (size: 0x10)
    float LabelPadding;                                                               // 0x0608 (size: 0x4)
    FSlateColor SliderBarColor;                                                       // 0x060C (size: 0x14)
    FSlateColor SliderThumbColor;                                                     // 0x0620 (size: 0x14)
    FSlateColor WidgetBackgroundColor;                                                // 0x0634 (size: 0x14)

}; // Size: 0x650

struct FAudioSpectrumPlotStyle : public FSlateWidgetStyle
{
    FSlateColor BackgroundColor;                                                      // 0x0008 (size: 0x14)
    FSlateColor GridColor;                                                            // 0x001C (size: 0x14)
    FSlateColor AxisLabelColor;                                                       // 0x0030 (size: 0x14)
    FSlateFontInfo AxisLabelFont;                                                     // 0x0048 (size: 0x60)
    FSlateColor SpectrumColor;                                                        // 0x00A8 (size: 0x14)
    FSlateColor CrosshairColor;                                                       // 0x00BC (size: 0x14)
    FSlateFontInfo CrosshairLabelFont;                                                // 0x00D0 (size: 0x60)

}; // Size: 0x130

struct FAudioTextBoxStyle : public FSlateWidgetStyle
{
    FSlateBrush BackgroundImage;                                                      // 0x0010 (size: 0xB0)
    FSlateColor BackgroundColor;                                                      // 0x00C0 (size: 0x14)

}; // Size: 0xE0

struct FAudioVectorscopePanelStyle : public FSlateWidgetStyle
{
    FSampledSequenceValueGridOverlayStyle ValueGridStyle;                             // 0x0008 (size: 0xA0)
    FSampledSequenceVectorViewerStyle VectorViewerStyle;                              // 0x00B0 (size: 0xF0)

}; // Size: 0x1A0

struct FFixedSampleSequenceRulerStyle : public FSlateWidgetStyle
{
    float HandleWidth;                                                                // 0x0008 (size: 0x4)
    FSlateColor HandleColor;                                                          // 0x000C (size: 0x14)
    FSlateBrush HandleBrush;                                                          // 0x0020 (size: 0xB0)
    FSlateColor TicksColor;                                                           // 0x00D0 (size: 0x14)
    FSlateColor TicksTextColor;                                                       // 0x00E4 (size: 0x14)
    FSlateFontInfo TicksTextFont;                                                     // 0x00F8 (size: 0x60)
    float TicksTextOffset;                                                            // 0x0158 (size: 0x4)
    FSlateColor BackgroundColor;                                                      // 0x015C (size: 0x14)
    FSlateBrush BackgroundBrush;                                                      // 0x0170 (size: 0xB0)
    float DesiredWidth;                                                               // 0x0220 (size: 0x4)
    float DesiredHeight;                                                              // 0x0224 (size: 0x4)

}; // Size: 0x230

struct FMeterChannelInfo
{
    float MeterValue;                                                                 // 0x0000 (size: 0x4)
    float PeakValue;                                                                  // 0x0004 (size: 0x4)
    float ClippingValue;                                                              // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FPlayheadOverlayStyle : public FSlateWidgetStyle
{
    FSlateColor PlayheadColor;                                                        // 0x0008 (size: 0x14)
    float PlayheadWidth;                                                              // 0x001C (size: 0x4)
    float DesiredWidth;                                                               // 0x0020 (size: 0x4)
    float DesiredHeight;                                                              // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FSampledSequenceValueGridOverlayStyle : public FSlateWidgetStyle
{
    FSlateColor GridColor;                                                            // 0x0008 (size: 0x14)
    float GridThickness;                                                              // 0x001C (size: 0x4)
    FSlateColor LabelTextColor;                                                       // 0x0020 (size: 0x14)
    FSlateFontInfo LabelTextFont;                                                     // 0x0038 (size: 0x60)
    float DesiredWidth;                                                               // 0x0098 (size: 0x4)
    float DesiredHeight;                                                              // 0x009C (size: 0x4)

}; // Size: 0xA0

struct FSampledSequenceVectorViewerStyle : public FSlateWidgetStyle
{
    FSlateColor BackgroundColor;                                                      // 0x0008 (size: 0x14)
    FSlateBrush BackgroundBrush;                                                      // 0x0020 (size: 0xB0)
    FLinearColor LineColor;                                                           // 0x00D0 (size: 0x10)
    float LineThickness;                                                              // 0x00E0 (size: 0x4)

}; // Size: 0xF0

struct FSampledSequenceViewerStyle : public FSlateWidgetStyle
{
    FSlateColor SequenceColor;                                                        // 0x0008 (size: 0x14)
    float SequenceLineThickness;                                                      // 0x001C (size: 0x4)
    FSlateColor MajorGridLineColor;                                                   // 0x0020 (size: 0x14)
    FSlateColor MinorGridLineColor;                                                   // 0x0034 (size: 0x14)
    FSlateColor ZeroCrossingLineColor;                                                // 0x0048 (size: 0x14)
    float ZeroCrossingLineThickness;                                                  // 0x005C (size: 0x4)
    float SampleMarkersSize;                                                          // 0x0060 (size: 0x4)
    FSlateColor SequenceBackgroundColor;                                              // 0x0064 (size: 0x14)
    FSlateBrush BackgroundBrush;                                                      // 0x0080 (size: 0xB0)
    float DesiredWidth;                                                               // 0x0130 (size: 0x4)
    float DesiredHeight;                                                              // 0x0134 (size: 0x4)

}; // Size: 0x140

struct FTriggerThresholdLineStyle : public FSlateWidgetStyle
{
    FLinearColor LineColor;                                                           // 0x0008 (size: 0x10)

}; // Size: 0x18

class UAudioFrequencyRadialSlider : public UAudioRadialSlider
{
}; // Size: 0x360

class UAudioFrequencySlider : public UAudioSliderBase
{
    FVector2D OutputRange;                                                            // 0x08B0 (size: 0x10)

}; // Size: 0x8C0

class UAudioMaterialButton : public UWidget
{
    FAudioMaterialButtonStyle WidgetStyle;                                            // 0x0168 (size: 0x88)
    FAudioMaterialButtonOnButtonPressedChangedEvent OnButtonPressedChangedEvent;      // 0x01F0 (size: 0x10)
    void OnButtonPressedChangedEvent(bool bIsPressed);
    bool bIsPressed;                                                                  // 0x0200 (size: 0x1)

    void SetIsPressed(bool InPressed);
    bool GetIsPressed();
}; // Size: 0x218

class UAudioMaterialButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
    FAudioMaterialButtonStyle ButtonStyle;                                            // 0x0030 (size: 0x88)

}; // Size: 0xB8

class UAudioMaterialEnvelope : public UWidget
{
    FAudioMaterialEnvelopeStyle WidgetStyle;                                          // 0x0168 (size: 0x48)
    FAudioMaterialEnvelopeSettings EnvelopeSettings;                                  // 0x01B0 (size: 0x24)

}; // Size: 0x1E8

class UAudioMaterialKnob : public UWidget
{
    FAudioMaterialKnobStyle WidgetStyle;                                              // 0x0170 (size: 0x1C0)
    FAudioMaterialKnobOnKnobValueChanged OnKnobValueChanged;                          // 0x0330 (size: 0x10)
    void OnKnobValueChangedEvent(float Value);
    float Value;                                                                      // 0x0340 (size: 0x4)
    float TuneSpeed;                                                                  // 0x0344 (size: 0x4)
    float FineTuneSpeed;                                                              // 0x0348 (size: 0x4)
    bool bLocked;                                                                     // 0x034C (size: 0x1)
    bool bMouseUsesStep;                                                              // 0x034D (size: 0x1)
    float StepSize;                                                                   // 0x0350 (size: 0x4)

    void SetValue(float InValue);
    void SetTuneSpeed(float InValue);
    void SetStepSize(float InValue);
    void SetMouseUsesStep(bool InUsesStep);
    void SetLocked(bool InLocked);
    void SetFineTuneSpeed(float InValue);
    float GetValue();
    float GetTuneSpeed();
    float GetStepSize();
    bool GetMouseUsesStep();
    bool GetIsLocked();
    float GetFineTuneSpeed();
}; // Size: 0x370

class UAudioMaterialKnobWidgetStyle : public USlateWidgetStyleContainerBase
{
    FAudioMaterialKnobStyle KnobStyle;                                                // 0x0030 (size: 0x1C0)

}; // Size: 0x1F0

class UAudioMaterialMeter : public UWidget
{
    FAudioMaterialMeterStyle WidgetStyle;                                             // 0x0168 (size: 0xF0)
    TEnumAsByte<EOrientation> Orientation;                                            // 0x0258 (size: 0x1)
    FAudioMaterialMeterMeterChannelInfoDelegate MeterChannelInfoDelegate;             // 0x025C (size: 0x10)
    TArray<FMeterChannelInfo> GetMeterChannelInfo();
    TArray<FMeterChannelInfo> MeterChannelInfo;                                       // 0x0280 (size: 0x10)

    void SetMeterChannelInfo(const TArray<FMeterChannelInfo>& InMeterChannelInfo);
    TArray<FMeterChannelInfo> GetMeterChannelInfo__DelegateSignature();
    TArray<FMeterChannelInfo> GetMeterChannelInfo();
}; // Size: 0x290

class UAudioMaterialMeterWidgetStyle : public USlateWidgetStyleContainerBase
{
    FAudioMaterialMeterStyle MeterStyle;                                              // 0x0030 (size: 0xF0)

}; // Size: 0x120

class UAudioMaterialSlider : public UWidget
{
    FAudioMaterialSliderStyle WidgetStyle;                                            // 0x0170 (size: 0x150)
    FAudioMaterialSliderOnValueChanged OnValueChanged;                                // 0x02C0 (size: 0x10)
    void OnSliderFloatValueChangedEvent(float Value);
    float Value;                                                                      // 0x02D0 (size: 0x4)
    TEnumAsByte<EOrientation> Orientation;                                            // 0x02D4 (size: 0x1)
    float TuneSpeed;                                                                  // 0x02D8 (size: 0x4)
    float FineTuneSpeed;                                                              // 0x02DC (size: 0x4)
    bool bLocked;                                                                     // 0x02E0 (size: 0x1)
    bool bMouseUsesStep;                                                              // 0x02E1 (size: 0x1)
    float StepSize;                                                                   // 0x02E4 (size: 0x4)

    void SetValue(float InValue);
    void SetTuneSpeed(const float InValue);
    void SetStepSize(float InValue);
    void SetMouseUsesStep(bool bInUsesStep);
    void SetLocked(bool bInLocked);
    void SetFineTuneSpeed(const float InValue);
    float GetValue();
    float GetTuneSpeed();
    float GetStepSize();
    bool GetMouseUsesStep();
    bool GetIsLocked();
    float GetFineTuneSpeed();
}; // Size: 0x300

class UAudioMaterialSliderWidgetStyle : public USlateWidgetStyleContainerBase
{
    FAudioMaterialSliderStyle SliderStyle;                                            // 0x0030 (size: 0x150)

}; // Size: 0x180

class UAudioMeter : public UWidget
{
    TArray<FMeterChannelInfo> MeterChannelInfo;                                       // 0x0168 (size: 0x10)
    FAudioMeterMeterChannelInfoDelegate MeterChannelInfoDelegate;                     // 0x0178 (size: 0x10)
    TArray<FMeterChannelInfo> GetMeterChannelInfo();
    FAudioMeterStyle WidgetStyle;                                                     // 0x0190 (size: 0x430)
    TEnumAsByte<EOrientation> Orientation;                                            // 0x05C0 (size: 0x1)
    FLinearColor BackgroundColor;                                                     // 0x05C4 (size: 0x10)
    FLinearColor MeterBackgroundColor;                                                // 0x05D4 (size: 0x10)
    FLinearColor MeterValueColor;                                                     // 0x05E4 (size: 0x10)
    FLinearColor MeterPeakColor;                                                      // 0x05F4 (size: 0x10)
    FLinearColor MeterClippingColor;                                                  // 0x0604 (size: 0x10)
    FLinearColor MeterScaleColor;                                                     // 0x0614 (size: 0x10)
    FLinearColor MeterScaleLabelColor;                                                // 0x0624 (size: 0x10)

    void SetMeterValueColor(FLinearColor InValue);
    void SetMeterScaleLabelColor(FLinearColor InValue);
    void SetMeterScaleColor(FLinearColor InValue);
    void SetMeterPeakColor(FLinearColor InValue);
    void SetMeterClippingColor(FLinearColor InValue);
    void SetMeterChannelInfo(const TArray<FMeterChannelInfo>& InMeterChannelInfo);
    void SetMeterBackgroundColor(FLinearColor InValue);
    void SetBackgroundColor(FLinearColor InValue);
    TArray<FMeterChannelInfo> GetMeterChannelInfo__DelegateSignature();
    TArray<FMeterChannelInfo> GetMeterChannelInfo();
}; // Size: 0x650

class UAudioOscilloscope : public UWidget
{
    FAudioOscilloscopePanelStyle OscilloscopeStyle;                                   // 0x0170 (size: 0x440)
    class UAudioBus* AudioBus;                                                        // 0x05B0 (size: 0x8)
    float MaxTimeWindowMs;                                                            // 0x05B8 (size: 0x4)
    float TimeWindowMs;                                                               // 0x05BC (size: 0x4)
    float AnalysisPeriodMs;                                                           // 0x05C0 (size: 0x4)
    bool bShowTimeGrid;                                                               // 0x05C4 (size: 0x1)
    EXAxisLabelsUnit TimeGridLabelsUnit;                                              // 0x05C5 (size: 0x1)
    bool bShowAmplitudeGrid;                                                          // 0x05C6 (size: 0x1)
    bool bShowAmplitudeLabels;                                                        // 0x05C7 (size: 0x1)
    EYAxisLabelsUnit AmplitudeGridLabelsUnit;                                         // 0x05C8 (size: 0x1)
    EAudioOscilloscopeTriggerMode TriggerMode;                                        // 0x05C9 (size: 0x1)
    float TriggerThreshold;                                                           // 0x05CC (size: 0x4)
    EAudioPanelLayoutType PanelLayoutType;                                            // 0x05D0 (size: 0x1)
    int32 ChannelToAnalyze;                                                           // 0x05D4 (size: 0x4)

    void StopProcessing();
    void StartProcessing();
    TArray<float> GetOscilloscopeAudioSamples__DelegateSignature();
    bool CanTriggeringBeSet();
}; // Size: 0x630

class UAudioRadialSlider : public UWidget
{
    float Value;                                                                      // 0x0168 (size: 0x4)
    FAudioRadialSliderValueDelegate ValueDelegate;                                    // 0x016C (size: 0x10)
    float GetFloat();
    TEnumAsByte<EAudioRadialSliderLayout> WidgetLayout;                               // 0x017C (size: 0x1)
    FLinearColor CenterBackgroundColor;                                               // 0x0180 (size: 0x10)
    FLinearColor SliderProgressColor;                                                 // 0x0190 (size: 0x10)
    FLinearColor SliderBarColor;                                                      // 0x01A0 (size: 0x10)
    FVector2D HandStartEndRatio;                                                      // 0x01B0 (size: 0x10)
    FText UnitsText;                                                                  // 0x01C0 (size: 0x10)
    FLinearColor TextLabelBackgroundColor;                                            // 0x01D0 (size: 0x10)
    bool ShowLabelOnlyOnHover;                                                        // 0x01E0 (size: 0x1)
    bool ShowUnitsText;                                                               // 0x01E1 (size: 0x1)
    bool IsUnitsTextReadOnly;                                                         // 0x01E2 (size: 0x1)
    bool IsValueTextReadOnly;                                                         // 0x01E3 (size: 0x1)
    float SliderThickness;                                                            // 0x01E4 (size: 0x4)
    FVector2D OutputRange;                                                            // 0x01E8 (size: 0x10)
    FAudioRadialSliderOnValueChanged OnValueChanged;                                  // 0x01F8 (size: 0x10)
    void OnAudioRadialSliderValueChangedEvent(float Value);

    void SetWidgetLayout(TEnumAsByte<EAudioRadialSliderLayout> InLayout);
    void SetValueTextReadOnly(const bool bIsReadOnly);
    void SetUnitsTextReadOnly(const bool bIsReadOnly);
    void SetUnitsText(const FText units);
    void SetTextLabelBackgroundColor(FSlateColor InColor);
    void SetSliderThickness(const float InThickness);
    void SetSliderProgressColor(FLinearColor InValue);
    void SetSliderBarColor(FLinearColor InValue);
    void SetShowUnitsText(const bool bShowUnitsText);
    void SetShowLabelOnlyOnHover(const bool bShowLabelOnlyOnHover);
    void SetOutputRange(const FVector2D InOutputRange);
    void SetHandStartEndRatio(const FVector2D InHandStartEndRatio);
    void SetCenterBackgroundColor(FLinearColor InValue);
    float GetSliderValue(const float OutputValue);
    float GetOutputValue(const float InSliderValue);
}; // Size: 0x360

class UAudioSlider : public UAudioSliderBase
{
    TWeakObjectPtr<class UCurveFloat> LinToOutputCurve;                               // 0x08B0 (size: 0x8)
    TWeakObjectPtr<class UCurveFloat> OutputToLinCurve;                               // 0x08B8 (size: 0x8)

}; // Size: 0x8C0

class UAudioSliderBase : public UWidget
{
    float Value;                                                                      // 0x0168 (size: 0x4)
    FText UnitsText;                                                                  // 0x0170 (size: 0x10)
    FLinearColor TextLabelBackgroundColor;                                            // 0x0180 (size: 0x10)
    FAudioSliderBaseTextLabelBackgroundColorDelegate TextLabelBackgroundColorDelegate; // 0x0190 (size: 0x10)
    FLinearColor GetLinearColor();
    bool ShowLabelOnlyOnHover;                                                        // 0x01A0 (size: 0x1)
    bool ShowUnitsText;                                                               // 0x01A1 (size: 0x1)
    bool IsUnitsTextReadOnly;                                                         // 0x01A2 (size: 0x1)
    bool IsValueTextReadOnly;                                                         // 0x01A3 (size: 0x1)
    FAudioSliderBaseValueDelegate ValueDelegate;                                      // 0x01A4 (size: 0x10)
    float GetFloat();
    FLinearColor SliderBackgroundColor;                                               // 0x01B4 (size: 0x10)
    FAudioSliderBaseSliderBackgroundColorDelegate SliderBackgroundColorDelegate;      // 0x01C4 (size: 0x10)
    FLinearColor GetLinearColor();
    FLinearColor SliderBarColor;                                                      // 0x01D4 (size: 0x10)
    FAudioSliderBaseSliderBarColorDelegate SliderBarColorDelegate;                    // 0x01E4 (size: 0x10)
    FLinearColor GetLinearColor();
    FLinearColor SliderThumbColor;                                                    // 0x01F4 (size: 0x10)
    FAudioSliderBaseSliderThumbColorDelegate SliderThumbColorDelegate;                // 0x0204 (size: 0x10)
    FLinearColor GetLinearColor();
    FLinearColor WidgetBackgroundColor;                                               // 0x0214 (size: 0x10)
    FAudioSliderBaseWidgetBackgroundColorDelegate WidgetBackgroundColorDelegate;      // 0x0224 (size: 0x10)
    FLinearColor GetLinearColor();
    TEnumAsByte<EOrientation> Orientation;                                            // 0x0234 (size: 0x1)
    FAudioSliderBaseOnValueChanged OnValueChanged;                                    // 0x0238 (size: 0x10)
    void OnFloatValueChangedEvent(float Value);

    void SetWidgetBackgroundColor(FLinearColor InValue);
    void SetValueTextReadOnly(const bool bIsReadOnly);
    void SetUnitsTextReadOnly(const bool bIsReadOnly);
    void SetUnitsText(const FText units);
    void SetTextLabelBackgroundColor(FSlateColor InColor);
    void SetSliderThumbColor(FLinearColor InValue);
    void SetSliderBarColor(FLinearColor InValue);
    void SetSliderBackgroundColor(FLinearColor InValue);
    void SetShowUnitsText(const bool bShowUnitsText);
    void SetShowLabelOnlyOnHover(const bool bShowLabelOnlyOnHover);
    float GetSliderValue(const float OutputValue);
    float GetOutputValue(const float InSliderValue);
    float GetLinValue(const float OutputValue);
}; // Size: 0x8B0

class UAudioVectorscope : public UWidget
{
    FAudioVectorscopePanelStyle VectorscopeStyle;                                     // 0x0170 (size: 0x1A0)
    class UAudioBus* AudioBus;                                                        // 0x0310 (size: 0x8)
    bool bShowGrid;                                                                   // 0x0318 (size: 0x1)
    int32 GridDivisions;                                                              // 0x031C (size: 0x4)
    float MaxDisplayPersistenceMs;                                                    // 0x0320 (size: 0x4)
    float DisplayPersistenceMs;                                                       // 0x0324 (size: 0x4)
    float scale;                                                                      // 0x0328 (size: 0x4)
    EAudioPanelLayoutType PanelLayoutType;                                            // 0x032C (size: 0x1)

    void StopProcessing();
    void StartProcessing();
    TArray<float> GetVectorscopeAudioSamples__DelegateSignature();
}; // Size: 0x380

class UAudioVolumeRadialSlider : public UAudioRadialSlider
{
}; // Size: 0x360

class UAudioVolumeSlider : public UAudioSlider
{
}; // Size: 0x8C0

#endif
