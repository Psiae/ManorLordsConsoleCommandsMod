#ifndef UE4SS_SDK_SlateCore_HPP
#define UE4SS_SDK_SlateCore_HPP

#include "SlateCore_enums.hpp"

struct FAnalogInputEvent : public FKeyEvent
{
}; // Size: 0x40

struct FButtonStyle : public FSlateWidgetStyle
{
    FSlateBrush Normal;                                                               // 0x0008 (size: 0x88)
    FSlateBrush Hovered;                                                              // 0x0090 (size: 0x88)
    FSlateBrush Pressed;                                                              // 0x0118 (size: 0x88)
    FSlateBrush Disabled;                                                             // 0x01A0 (size: 0x88)
    FMargin NormalPadding;                                                            // 0x0228 (size: 0x10)
    FMargin PressedPadding;                                                           // 0x0238 (size: 0x10)
    FSlateSound PressedSlateSound;                                                    // 0x0248 (size: 0x18)
    FSlateSound HoveredSlateSound;                                                    // 0x0260 (size: 0x18)

}; // Size: 0x278

struct FCaptureLostEvent
{
}; // Size: 0x8

struct FCharacterEvent : public FInputEvent
{
}; // Size: 0x20

struct FCheckBoxStyle : public FSlateWidgetStyle
{
    TEnumAsByte<ESlateCheckBoxType::Type> CheckBoxType;                               // 0x0008 (size: 0x1)
    FSlateBrush UncheckedImage;                                                       // 0x0010 (size: 0x88)
    FSlateBrush UncheckedHoveredImage;                                                // 0x0098 (size: 0x88)
    FSlateBrush UncheckedPressedImage;                                                // 0x0120 (size: 0x88)
    FSlateBrush CheckedImage;                                                         // 0x01A8 (size: 0x88)
    FSlateBrush CheckedHoveredImage;                                                  // 0x0230 (size: 0x88)
    FSlateBrush CheckedPressedImage;                                                  // 0x02B8 (size: 0x88)
    FSlateBrush UndeterminedImage;                                                    // 0x0340 (size: 0x88)
    FSlateBrush UndeterminedHoveredImage;                                             // 0x03C8 (size: 0x88)
    FSlateBrush UndeterminedPressedImage;                                             // 0x0450 (size: 0x88)
    FMargin Padding;                                                                  // 0x04D8 (size: 0x10)
    FSlateColor ForegroundColor;                                                      // 0x04E8 (size: 0x28)
    FSlateColor BorderBackgroundColor;                                                // 0x0510 (size: 0x28)
    FSlateSound CheckedSlateSound;                                                    // 0x0538 (size: 0x18)
    FSlateSound UncheckedSlateSound;                                                  // 0x0550 (size: 0x18)
    FSlateSound HoveredSlateSound;                                                    // 0x0568 (size: 0x18)

}; // Size: 0x580

struct FComboBoxStyle : public FSlateWidgetStyle
{
    FComboButtonStyle ComboButtonStyle;                                               // 0x0008 (size: 0x3B8)
    FSlateSound PressedSlateSound;                                                    // 0x03C0 (size: 0x18)
    FSlateSound SelectionChangeSlateSound;                                            // 0x03D8 (size: 0x18)

}; // Size: 0x3F0

struct FComboButtonStyle : public FSlateWidgetStyle
{
    FButtonStyle ButtonStyle;                                                         // 0x0008 (size: 0x278)
    FSlateBrush DownArrowImage;                                                       // 0x0280 (size: 0x88)
    FVector2D ShadowOffset;                                                           // 0x0308 (size: 0x8)
    FLinearColor ShadowColorAndOpacity;                                               // 0x0310 (size: 0x10)
    FSlateBrush MenuBorderBrush;                                                      // 0x0320 (size: 0x88)
    FMargin MenuBorderPadding;                                                        // 0x03A8 (size: 0x10)

}; // Size: 0x3B8

struct FCompositeFallbackFont
{
    FTypeface Typeface;                                                               // 0x0000 (size: 0x10)
    float ScalingFactor;                                                              // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FCompositeFont
{
    FTypeface DefaultTypeface;                                                        // 0x0000 (size: 0x10)
    FCompositeFallbackFont FallbackTypeface;                                          // 0x0010 (size: 0x18)
    TArray<FCompositeSubFont> SubTypefaces;                                           // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FCompositeSubFont : public FCompositeFallbackFont
{
    TArray<FInt32Range> CharacterRanges;                                              // 0x0018 (size: 0x10)
    FString Cultures;                                                                 // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FDockTabStyle : public FSlateWidgetStyle
{
    FButtonStyle CloseButtonStyle;                                                    // 0x0008 (size: 0x278)
    FSlateBrush NormalBrush;                                                          // 0x0280 (size: 0x88)
    FSlateBrush ActiveBrush;                                                          // 0x0308 (size: 0x88)
    FSlateBrush ColorOverlayTabBrush;                                                 // 0x0390 (size: 0x88)
    FSlateBrush ColorOverlayIconBrush;                                                // 0x0418 (size: 0x88)
    FSlateBrush ForegroundBrush;                                                      // 0x04A0 (size: 0x88)
    FSlateBrush HoveredBrush;                                                         // 0x0528 (size: 0x88)
    FSlateBrush ContentAreaBrush;                                                     // 0x05B0 (size: 0x88)
    FSlateBrush TabWellBrush;                                                         // 0x0638 (size: 0x88)
    FMargin TabPadding;                                                               // 0x06C0 (size: 0x10)
    float OverlapWidth;                                                               // 0x06D0 (size: 0x4)
    FSlateColor FlashColor;                                                           // 0x06D8 (size: 0x28)

}; // Size: 0x700

struct FEditableTextBoxStyle : public FSlateWidgetStyle
{
    FSlateBrush BackgroundImageNormal;                                                // 0x0008 (size: 0x88)
    FSlateBrush BackgroundImageHovered;                                               // 0x0090 (size: 0x88)
    FSlateBrush BackgroundImageFocused;                                               // 0x0118 (size: 0x88)
    FSlateBrush BackgroundImageReadOnly;                                              // 0x01A0 (size: 0x88)
    FMargin Padding;                                                                  // 0x0228 (size: 0x10)
    FSlateFontInfo Font;                                                              // 0x0238 (size: 0x58)
    FSlateColor ForegroundColor;                                                      // 0x0290 (size: 0x28)
    FSlateColor BackgroundColor;                                                      // 0x02B8 (size: 0x28)
    FSlateColor ReadOnlyForegroundColor;                                              // 0x02E0 (size: 0x28)
    FMargin HScrollBarPadding;                                                        // 0x0308 (size: 0x10)
    FMargin VScrollBarPadding;                                                        // 0x0318 (size: 0x10)
    FScrollBarStyle ScrollBarStyle;                                                   // 0x0328 (size: 0x4D0)

}; // Size: 0x7F8

struct FEditableTextStyle : public FSlateWidgetStyle
{
    FSlateFontInfo Font;                                                              // 0x0008 (size: 0x58)
    FSlateColor ColorAndOpacity;                                                      // 0x0060 (size: 0x28)
    FSlateBrush BackgroundImageSelected;                                              // 0x0088 (size: 0x88)
    FSlateBrush BackgroundImageComposing;                                             // 0x0110 (size: 0x88)
    FSlateBrush CaretImage;                                                           // 0x0198 (size: 0x88)

}; // Size: 0x220

struct FExpandableAreaStyle : public FSlateWidgetStyle
{
    FSlateBrush CollapsedImage;                                                       // 0x0008 (size: 0x88)
    FSlateBrush ExpandedImage;                                                        // 0x0090 (size: 0x88)
    float RolloutAnimationSeconds;                                                    // 0x0118 (size: 0x4)

}; // Size: 0x120

struct FFocusEvent
{
}; // Size: 0x8

struct FFontData
{
    FString FontFilename;                                                             // 0x0000 (size: 0x10)
    EFontHinting Hinting;                                                             // 0x0010 (size: 0x1)
    EFontLoadingPolicy LoadingPolicy;                                                 // 0x0011 (size: 0x1)
    int32 SubFaceIndex;                                                               // 0x0014 (size: 0x4)
    class UObject* FontFaceAsset;                                                     // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FFontOutlineSettings
{
    int32 OutlineSize;                                                                // 0x0000 (size: 0x4)
    bool bSeparateFillAlpha;                                                          // 0x0004 (size: 0x1)
    bool bApplyOutlineToDropShadows;                                                  // 0x0005 (size: 0x1)
    class UObject* OutlineMaterial;                                                   // 0x0008 (size: 0x8)
    FLinearColor OutlineColor;                                                        // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FGeometry
{
}; // Size: 0x38

struct FHeaderRowStyle : public FSlateWidgetStyle
{
    FTableColumnHeaderStyle ColumnStyle;                                              // 0x0008 (size: 0x4D0)
    FTableColumnHeaderStyle LastColumnStyle;                                          // 0x04D8 (size: 0x4D0)
    FSplitterStyle ColumnSplitterStyle;                                               // 0x09A8 (size: 0x118)
    FSlateBrush BackgroundBrush;                                                      // 0x0AC0 (size: 0x88)
    FSlateColor ForegroundColor;                                                      // 0x0B48 (size: 0x28)

}; // Size: 0xB70

struct FHyperlinkStyle : public FSlateWidgetStyle
{
    FButtonStyle UnderlineStyle;                                                      // 0x0008 (size: 0x278)
    FTextBlockStyle TextStyle;                                                        // 0x0280 (size: 0x270)
    FMargin Padding;                                                                  // 0x04F0 (size: 0x10)

}; // Size: 0x500

struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{
    FEditableTextBoxStyle EditableTextBoxStyle;                                       // 0x0008 (size: 0x7F8)
    FTextBlockStyle TextStyle;                                                        // 0x0800 (size: 0x270)

}; // Size: 0xA70

struct FInlineTextImageStyle : public FSlateWidgetStyle
{
    FSlateBrush Image;                                                                // 0x0008 (size: 0x88)
    int16 Baseline;                                                                   // 0x0090 (size: 0x2)

}; // Size: 0x98

struct FInputEvent
{
}; // Size: 0x18

struct FKeyEvent : public FInputEvent
{
}; // Size: 0x38

struct FMargin
{
    float Left;                                                                       // 0x0000 (size: 0x4)
    float Top;                                                                        // 0x0004 (size: 0x4)
    float Right;                                                                      // 0x0008 (size: 0x4)
    float Bottom;                                                                     // 0x000C (size: 0x4)

}; // Size: 0x10

struct FMotionEvent : public FInputEvent
{
}; // Size: 0x48

struct FNavigationEvent : public FInputEvent
{
}; // Size: 0x20

struct FPointerEvent : public FInputEvent
{
}; // Size: 0x70

struct FProgressBarStyle : public FSlateWidgetStyle
{
    FSlateBrush BackgroundImage;                                                      // 0x0008 (size: 0x88)
    FSlateBrush FillImage;                                                            // 0x0090 (size: 0x88)
    FSlateBrush MarqueeImage;                                                         // 0x0118 (size: 0x88)

}; // Size: 0x1A0

struct FScrollBarStyle : public FSlateWidgetStyle
{
    FSlateBrush HorizontalBackgroundImage;                                            // 0x0008 (size: 0x88)
    FSlateBrush VerticalBackgroundImage;                                              // 0x0090 (size: 0x88)
    FSlateBrush VerticalTopSlotImage;                                                 // 0x0118 (size: 0x88)
    FSlateBrush HorizontalTopSlotImage;                                               // 0x01A0 (size: 0x88)
    FSlateBrush VerticalBottomSlotImage;                                              // 0x0228 (size: 0x88)
    FSlateBrush HorizontalBottomSlotImage;                                            // 0x02B0 (size: 0x88)
    FSlateBrush NormalThumbImage;                                                     // 0x0338 (size: 0x88)
    FSlateBrush HoveredThumbImage;                                                    // 0x03C0 (size: 0x88)
    FSlateBrush DraggedThumbImage;                                                    // 0x0448 (size: 0x88)

}; // Size: 0x4D0

struct FScrollBorderStyle : public FSlateWidgetStyle
{
    FSlateBrush TopShadowBrush;                                                       // 0x0008 (size: 0x88)
    FSlateBrush BottomShadowBrush;                                                    // 0x0090 (size: 0x88)

}; // Size: 0x118

struct FScrollBoxStyle : public FSlateWidgetStyle
{
    FSlateBrush TopShadowBrush;                                                       // 0x0008 (size: 0x88)
    FSlateBrush BottomShadowBrush;                                                    // 0x0090 (size: 0x88)
    FSlateBrush LeftShadowBrush;                                                      // 0x0118 (size: 0x88)
    FSlateBrush RightShadowBrush;                                                     // 0x01A0 (size: 0x88)

}; // Size: 0x228

struct FSearchBoxStyle : public FSlateWidgetStyle
{
    FEditableTextBoxStyle TextBoxStyle;                                               // 0x0008 (size: 0x7F8)
    FSlateFontInfo ActiveFontInfo;                                                    // 0x0800 (size: 0x58)
    FSlateBrush UpArrowImage;                                                         // 0x0858 (size: 0x88)
    FSlateBrush DownArrowImage;                                                       // 0x08E0 (size: 0x88)
    FSlateBrush GlassImage;                                                           // 0x0968 (size: 0x88)
    FSlateBrush ClearImage;                                                           // 0x09F0 (size: 0x88)
    FMargin ImagePadding;                                                             // 0x0A78 (size: 0x10)
    bool bLeftAlignButtons;                                                           // 0x0A88 (size: 0x1)

}; // Size: 0xA90

struct FSlateBrush
{
    FVector2D ImageSize;                                                              // 0x0008 (size: 0x8)
    FMargin Margin;                                                                   // 0x0010 (size: 0x10)
    FSlateColor TintColor;                                                            // 0x0020 (size: 0x28)
    class UObject* ResourceObject;                                                    // 0x0048 (size: 0x8)
    FName ResourceName;                                                               // 0x0050 (size: 0x8)
    FBox2D UVRegion;                                                                  // 0x0058 (size: 0x14)
    TEnumAsByte<ESlateBrushDrawType::Type> DrawAs;                                    // 0x006C (size: 0x1)
    TEnumAsByte<ESlateBrushTileType::Type> Tiling;                                    // 0x006D (size: 0x1)
    TEnumAsByte<ESlateBrushMirrorType::Type> Mirroring;                               // 0x006E (size: 0x1)
    TEnumAsByte<ESlateBrushImageType::Type> ImageType;                                // 0x006F (size: 0x1)
    uint8 bIsDynamicallyLoaded;                                                       // 0x0080 (size: 0x1)
    uint8 bHasUObject;                                                                // 0x0080 (size: 0x1)

}; // Size: 0x88

struct FSlateColor
{
    FLinearColor SpecifiedColor;                                                      // 0x0000 (size: 0x10)
    TEnumAsByte<ESlateColorStylingMode::Type> ColorUseRule;                           // 0x0010 (size: 0x1)

}; // Size: 0x28

struct FSlateFontInfo
{
    class UObject* FontObject;                                                        // 0x0000 (size: 0x8)
    class UObject* FontMaterial;                                                      // 0x0008 (size: 0x8)
    FFontOutlineSettings OutlineSettings;                                             // 0x0010 (size: 0x20)
    FName TypefaceFontName;                                                           // 0x0040 (size: 0x8)
    int32 Size;                                                                       // 0x0048 (size: 0x4)
    int32 LetterSpacing;                                                              // 0x004C (size: 0x4)

}; // Size: 0x58

struct FSlateSound
{
    class UObject* ResourceObject;                                                    // 0x0000 (size: 0x8)

}; // Size: 0x18

struct FSlateWidgetStyle
{
}; // Size: 0x8

struct FSliderStyle : public FSlateWidgetStyle
{
    FSlateBrush NormalBarImage;                                                       // 0x0008 (size: 0x88)
    FSlateBrush HoveredBarImage;                                                      // 0x0090 (size: 0x88)
    FSlateBrush DisabledBarImage;                                                     // 0x0118 (size: 0x88)
    FSlateBrush NormalThumbImage;                                                     // 0x01A0 (size: 0x88)
    FSlateBrush HoveredThumbImage;                                                    // 0x0228 (size: 0x88)
    FSlateBrush DisabledThumbImage;                                                   // 0x02B0 (size: 0x88)
    float BarThickness;                                                               // 0x0338 (size: 0x4)

}; // Size: 0x340

struct FSpinBoxStyle : public FSlateWidgetStyle
{
    FSlateBrush BackgroundBrush;                                                      // 0x0008 (size: 0x88)
    FSlateBrush HoveredBackgroundBrush;                                               // 0x0090 (size: 0x88)
    FSlateBrush ActiveFillBrush;                                                      // 0x0118 (size: 0x88)
    FSlateBrush InactiveFillBrush;                                                    // 0x01A0 (size: 0x88)
    FSlateBrush ArrowsImage;                                                          // 0x0228 (size: 0x88)
    FSlateColor ForegroundColor;                                                      // 0x02B0 (size: 0x28)
    FMargin TextPadding;                                                              // 0x02D8 (size: 0x10)

}; // Size: 0x2E8

struct FSplitterStyle : public FSlateWidgetStyle
{
    FSlateBrush HandleNormalBrush;                                                    // 0x0008 (size: 0x88)
    FSlateBrush HandleHighlightBrush;                                                 // 0x0090 (size: 0x88)

}; // Size: 0x118

struct FTableColumnHeaderStyle : public FSlateWidgetStyle
{
    FSlateBrush SortPrimaryAscendingImage;                                            // 0x0008 (size: 0x88)
    FSlateBrush SortPrimaryDescendingImage;                                           // 0x0090 (size: 0x88)
    FSlateBrush SortSecondaryAscendingImage;                                          // 0x0118 (size: 0x88)
    FSlateBrush SortSecondaryDescendingImage;                                         // 0x01A0 (size: 0x88)
    FSlateBrush NormalBrush;                                                          // 0x0228 (size: 0x88)
    FSlateBrush HoveredBrush;                                                         // 0x02B0 (size: 0x88)
    FSlateBrush MenuDropdownImage;                                                    // 0x0338 (size: 0x88)
    FSlateBrush MenuDropdownNormalBorderBrush;                                        // 0x03C0 (size: 0x88)
    FSlateBrush MenuDropdownHoveredBorderBrush;                                       // 0x0448 (size: 0x88)

}; // Size: 0x4D0

struct FTableRowStyle : public FSlateWidgetStyle
{
    FSlateBrush SelectorFocusedBrush;                                                 // 0x0008 (size: 0x88)
    FSlateBrush ActiveHoveredBrush;                                                   // 0x0090 (size: 0x88)
    FSlateBrush ActiveBrush;                                                          // 0x0118 (size: 0x88)
    FSlateBrush InactiveHoveredBrush;                                                 // 0x01A0 (size: 0x88)
    FSlateBrush InactiveBrush;                                                        // 0x0228 (size: 0x88)
    FSlateBrush EvenRowBackgroundHoveredBrush;                                        // 0x02B0 (size: 0x88)
    FSlateBrush EvenRowBackgroundBrush;                                               // 0x0338 (size: 0x88)
    FSlateBrush OddRowBackgroundHoveredBrush;                                         // 0x03C0 (size: 0x88)
    FSlateBrush OddRowBackgroundBrush;                                                // 0x0448 (size: 0x88)
    FSlateColor TextColor;                                                            // 0x04D0 (size: 0x28)
    FSlateColor SelectedTextColor;                                                    // 0x04F8 (size: 0x28)
    FSlateBrush DropIndicator_Above;                                                  // 0x0520 (size: 0x88)
    FSlateBrush DropIndicator_Onto;                                                   // 0x05A8 (size: 0x88)
    FSlateBrush DropIndicator_Below;                                                  // 0x0630 (size: 0x88)
    FSlateBrush ActiveHighlightedBrush;                                               // 0x06B8 (size: 0x88)
    FSlateBrush InactiveHighlightedBrush;                                             // 0x0740 (size: 0x88)

}; // Size: 0x7C8

struct FTextBlockStyle : public FSlateWidgetStyle
{
    FSlateFontInfo Font;                                                              // 0x0008 (size: 0x58)
    FSlateColor ColorAndOpacity;                                                      // 0x0060 (size: 0x28)
    FVector2D ShadowOffset;                                                           // 0x0088 (size: 0x8)
    FLinearColor ShadowColorAndOpacity;                                               // 0x0090 (size: 0x10)
    FSlateColor SelectedBackgroundColor;                                              // 0x00A0 (size: 0x28)
    FLinearColor HighlightColor;                                                      // 0x00C8 (size: 0x10)
    FSlateBrush HighlightShape;                                                       // 0x00D8 (size: 0x88)
    FSlateBrush StrikeBrush;                                                          // 0x0160 (size: 0x88)
    FSlateBrush UnderlineBrush;                                                       // 0x01E8 (size: 0x88)

}; // Size: 0x270

struct FTypeface
{
    TArray<FTypefaceEntry> Fonts;                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FTypefaceEntry
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FFontData Font;                                                                   // 0x0008 (size: 0x20)

}; // Size: 0x28

struct FVolumeControlStyle : public FSlateWidgetStyle
{
    FSliderStyle SliderStyle;                                                         // 0x0008 (size: 0x340)
    FSlateBrush HighVolumeImage;                                                      // 0x0348 (size: 0x88)
    FSlateBrush MidVolumeImage;                                                       // 0x03D0 (size: 0x88)
    FSlateBrush LowVolumeImage;                                                       // 0x0458 (size: 0x88)
    FSlateBrush NoVolumeImage;                                                        // 0x04E0 (size: 0x88)
    FSlateBrush MutedImage;                                                           // 0x0568 (size: 0x88)

}; // Size: 0x5F0

struct FWindowStyle : public FSlateWidgetStyle
{
    FButtonStyle MinimizeButtonStyle;                                                 // 0x0008 (size: 0x278)
    FButtonStyle MaximizeButtonStyle;                                                 // 0x0280 (size: 0x278)
    FButtonStyle RestoreButtonStyle;                                                  // 0x04F8 (size: 0x278)
    FButtonStyle CloseButtonStyle;                                                    // 0x0770 (size: 0x278)
    FTextBlockStyle TitleTextStyle;                                                   // 0x09E8 (size: 0x270)
    FSlateBrush ActiveTitleBrush;                                                     // 0x0C58 (size: 0x88)
    FSlateBrush InactiveTitleBrush;                                                   // 0x0CE0 (size: 0x88)
    FSlateBrush FlashTitleBrush;                                                      // 0x0D68 (size: 0x88)
    FSlateColor BackgroundColor;                                                      // 0x0DF0 (size: 0x28)
    FSlateBrush OutlineBrush;                                                         // 0x0E18 (size: 0x88)
    FSlateColor OutlineColor;                                                         // 0x0EA0 (size: 0x28)
    FSlateBrush BorderBrush;                                                          // 0x0EC8 (size: 0x88)
    FSlateBrush BackgroundBrush;                                                      // 0x0F50 (size: 0x88)
    FSlateBrush ChildBackgroundBrush;                                                 // 0x0FD8 (size: 0x88)

}; // Size: 0x1060

class IFontFaceInterface : public IInterface
{
}; // Size: 0x28

class IFontProviderInterface : public IInterface
{
}; // Size: 0x28

class ISlateWidgetStyleContainerInterface : public IInterface
{
}; // Size: 0x28

class UFontBulkData : public UObject
{
}; // Size: 0x78

class USlateTypes : public UObject
{
}; // Size: 0x28

class USlateWidgetStyleAsset : public UObject
{
    class USlateWidgetStyleContainerBase* CustomStyle;                                // 0x0028 (size: 0x8)

}; // Size: 0x30

class USlateWidgetStyleContainerBase : public UObject
{
}; // Size: 0x30

#endif
