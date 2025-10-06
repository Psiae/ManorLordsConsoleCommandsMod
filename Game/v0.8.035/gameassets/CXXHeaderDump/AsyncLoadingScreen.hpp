#ifndef UE4SS_SDK_AsyncLoadingScreen_HPP
#define UE4SS_SDK_AsyncLoadingScreen_HPP

#include "AsyncLoadingScreen_enums.hpp"

struct FALoadingScreenSettings
{
    float MinimumLoadingScreenDisplayTime;                                            // 0x0000 (size: 0x4)
    bool bAutoCompleteWhenLoadingCompletes;                                           // 0x0004 (size: 0x1)
    bool bMoviesAreSkippable;                                                         // 0x0005 (size: 0x1)
    bool bWaitForManualStop;                                                          // 0x0006 (size: 0x1)
    bool bAllowInEarlyStartup;                                                        // 0x0007 (size: 0x1)
    bool bAllowEngineTick;                                                            // 0x0008 (size: 0x1)
    TEnumAsByte<EMoviePlaybackType> PlaybackType;                                     // 0x0009 (size: 0x1)
    TArray<FString> MoviePaths;                                                       // 0x0010 (size: 0x10)
    bool bShuffle;                                                                    // 0x0020 (size: 0x1)
    bool bSetDisplayMovieIndexManually;                                               // 0x0021 (size: 0x1)
    bool bShowWidgetOverlay;                                                          // 0x0022 (size: 0x1)
    bool bShowLoadingCompleteText;                                                    // 0x0023 (size: 0x1)
    FLoadingCompleteTextSettings LoadingCompleteTextSettings;                         // 0x0028 (size: 0xD0)
    FBackgroundSettings Background;                                                   // 0x00F8 (size: 0x38)
    FTipSettings TipWidget;                                                           // 0x0130 (size: 0xB8)
    FLoadingWidgetSettings LoadingWidget;                                             // 0x01F0 (size: 0x2B0)
    EAsyncLoadingScreenLayout Layout;                                                 // 0x04A0 (size: 0x1)

}; // Size: 0x4B0

struct FBackgroundSettings
{
    TArray<FSoftObjectPath> Images;                                                   // 0x0000 (size: 0x10)
    TEnumAsByte<EStretch::Type> ImageStretch;                                         // 0x0010 (size: 0x1)
    FMargin Padding;                                                                  // 0x0014 (size: 0x10)
    FLinearColor BackgroundColor;                                                     // 0x0024 (size: 0x10)
    bool bSetDisplayBackgroundManually;                                               // 0x0034 (size: 0x1)

}; // Size: 0x38

struct FCenterLayoutSettings
{
    bool bIsTipAtBottom;                                                              // 0x0000 (size: 0x1)
    FWidgetAlignment TipAlignment;                                                    // 0x0001 (size: 0x2)
    TEnumAsByte<EHorizontalAlignment> BorderHorizontalAlignment;                      // 0x0003 (size: 0x1)
    float BorderVerticalOffset;                                                       // 0x0004 (size: 0x4)
    FMargin BorderPadding;                                                            // 0x0008 (size: 0x10)
    FSlateBrush BorderBackground;                                                     // 0x0020 (size: 0xB0)

}; // Size: 0xD0

struct FCircularThrobberSettings
{
    int32 NumberOfPieces;                                                             // 0x0000 (size: 0x4)
    float Period;                                                                     // 0x0004 (size: 0x4)
    float Radius;                                                                     // 0x0008 (size: 0x4)
    FSlateBrush Image;                                                                // 0x0010 (size: 0xB0)

}; // Size: 0xC0

struct FClassicLayoutSettings
{
    bool bIsWidgetAtBottom;                                                           // 0x0000 (size: 0x1)
    bool bIsLoadingWidgetAtLeft;                                                      // 0x0001 (size: 0x1)
    float Space;                                                                      // 0x0004 (size: 0x4)
    FWidgetAlignment TipAlignment;                                                    // 0x0008 (size: 0x2)
    TEnumAsByte<EHorizontalAlignment> BorderHorizontalAlignment;                      // 0x000A (size: 0x1)
    FMargin BorderPadding;                                                            // 0x000C (size: 0x10)
    FSlateBrush BorderBackground;                                                     // 0x0020 (size: 0xB0)

}; // Size: 0xD0

struct FDualSidebarLayoutSettings
{
    bool bIsLoadingWidgetAtRight;                                                     // 0x0000 (size: 0x1)
    TEnumAsByte<EVerticalAlignment> LeftVerticalAlignment;                            // 0x0001 (size: 0x1)
    TEnumAsByte<EVerticalAlignment> RightVerticalAlignment;                           // 0x0002 (size: 0x1)
    TEnumAsByte<EVerticalAlignment> LeftBorderVerticalAlignment;                      // 0x0003 (size: 0x1)
    TEnumAsByte<EVerticalAlignment> RightBorderVerticalAlignment;                     // 0x0004 (size: 0x1)
    FMargin LeftBorderPadding;                                                        // 0x0008 (size: 0x10)
    FMargin RightBorderPadding;                                                       // 0x0018 (size: 0x10)
    FSlateBrush LeftBorderBackground;                                                 // 0x0030 (size: 0xB0)
    FSlateBrush RightBorderBackground;                                                // 0x00E0 (size: 0xB0)

}; // Size: 0x190

struct FImageSequenceSettings
{
    TArray<class UTexture2D*> Images;                                                 // 0x0000 (size: 0x10)
    FVector2D scale;                                                                  // 0x0010 (size: 0x10)
    float Interval;                                                                   // 0x0020 (size: 0x4)
    bool bPlayReverse;                                                                // 0x0024 (size: 0x1)

}; // Size: 0x28

struct FLetterboxLayoutSettings
{
    bool bIsLoadingWidgetAtTop;                                                       // 0x0000 (size: 0x1)
    FWidgetAlignment TipAlignment;                                                    // 0x0001 (size: 0x2)
    FWidgetAlignment LoadingWidgetAlignment;                                          // 0x0003 (size: 0x2)
    TEnumAsByte<EHorizontalAlignment> TopBorderHorizontalAlignment;                   // 0x0005 (size: 0x1)
    TEnumAsByte<EHorizontalAlignment> BottomBorderHorizontalAlignment;                // 0x0006 (size: 0x1)
    FMargin TopBorderPadding;                                                         // 0x0008 (size: 0x10)
    FMargin BottomBorderPadding;                                                      // 0x0018 (size: 0x10)
    FSlateBrush TopBorderBackground;                                                  // 0x0030 (size: 0xB0)
    FSlateBrush BottomBorderBackground;                                               // 0x00E0 (size: 0xB0)

}; // Size: 0x190

struct FLoadingCompleteTextSettings
{
    FText LoadingCompleteText;                                                        // 0x0000 (size: 0x10)
    FTextAppearance Appearance;                                                       // 0x0010 (size: 0xA0)
    FWidgetAlignment Alignment;                                                       // 0x00B0 (size: 0x2)
    FMargin Padding;                                                                  // 0x00B4 (size: 0x10)
    bool bFadeInOutAnim;                                                              // 0x00C4 (size: 0x1)
    float AnimationSpeed;                                                             // 0x00C8 (size: 0x4)

}; // Size: 0xD0

struct FLoadingWidgetSettings
{
    ELoadingIconType LoadingIconType;                                                 // 0x0000 (size: 0x1)
    ELoadingWidgetType LoadingWidgetType;                                             // 0x0001 (size: 0x1)
    FVector2D TransformTranslation;                                                   // 0x0008 (size: 0x10)
    FVector2D TransformScale;                                                         // 0x0018 (size: 0x10)
    FVector2D TransformPivot;                                                         // 0x0028 (size: 0x10)
    FText LoadingText;                                                                // 0x0038 (size: 0x10)
    bool bLoadingTextRightPosition;                                                   // 0x0048 (size: 0x1)
    bool bLoadingTextTopPosition;                                                     // 0x0049 (size: 0x1)
    FTextAppearance Appearance;                                                       // 0x0050 (size: 0xA0)
    FThrobberSettings ThrobberSettings;                                               // 0x00F0 (size: 0xC0)
    FCircularThrobberSettings CircularThrobberSettings;                               // 0x01B0 (size: 0xC0)
    FImageSequenceSettings ImageSequenceSettings;                                     // 0x0270 (size: 0x28)
    FWidgetAlignment TextAlignment;                                                   // 0x0298 (size: 0x2)
    FWidgetAlignment LoadingIconAlignment;                                            // 0x029A (size: 0x2)
    float Space;                                                                      // 0x029C (size: 0x4)
    bool bHideLoadingWidgetWhenCompletes;                                             // 0x02A0 (size: 0x1)

}; // Size: 0x2B0

struct FSidebarLayoutSettings
{
    bool bIsWidgetAtRight;                                                            // 0x0000 (size: 0x1)
    bool bIsLoadingWidgetAtTop;                                                       // 0x0001 (size: 0x1)
    float Space;                                                                      // 0x0004 (size: 0x4)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;                                // 0x0008 (size: 0x1)
    FWidgetAlignment LoadingWidgetAlignment;                                          // 0x0009 (size: 0x2)
    FWidgetAlignment TipAlignment;                                                    // 0x000B (size: 0x2)
    TEnumAsByte<EVerticalAlignment> BorderVerticalAlignment;                          // 0x000D (size: 0x1)
    float BorderHorizontalOffset;                                                     // 0x0010 (size: 0x4)
    FMargin BorderPadding;                                                            // 0x0014 (size: 0x10)
    FSlateBrush BorderBackground;                                                     // 0x0030 (size: 0xB0)

}; // Size: 0xE0

struct FTextAppearance
{
    FSlateColor ColorAndOpacity;                                                      // 0x0000 (size: 0x14)
    FSlateFontInfo Font;                                                              // 0x0018 (size: 0x60)
    FVector2D ShadowOffset;                                                           // 0x0078 (size: 0x10)
    FLinearColor ShadowColorAndOpacity;                                               // 0x0088 (size: 0x10)
    TEnumAsByte<ETextJustify::Type> Justification;                                    // 0x0098 (size: 0x1)

}; // Size: 0xA0

struct FThrobberSettings
{
    int32 NumberOfPieces;                                                             // 0x0000 (size: 0x4)
    bool bAnimateHorizontally;                                                        // 0x0004 (size: 0x1)
    bool bAnimateVertically;                                                          // 0x0005 (size: 0x1)
    bool bAnimateOpacity;                                                             // 0x0006 (size: 0x1)
    FSlateBrush Image;                                                                // 0x0010 (size: 0xB0)

}; // Size: 0xC0

struct FTipSettings
{
    TArray<FText> TipText;                                                            // 0x0000 (size: 0x10)
    FTextAppearance Appearance;                                                       // 0x0010 (size: 0xA0)
    float TipWrapAt;                                                                  // 0x00B0 (size: 0x4)
    bool bSetDisplayTipTextManually;                                                  // 0x00B4 (size: 0x1)

}; // Size: 0xB8

struct FWidgetAlignment
{
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;                            // 0x0000 (size: 0x1)
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;                                // 0x0001 (size: 0x1)

}; // Size: 0x2

class UAsyncLoadingScreenLibrary : public UBlueprintFunctionLibrary
{

    void StopLoadingScreen();
    void SetEnableLoadingScreen(bool bIsEnableLoadingScreen);
    void SetDisplayTipTextIndex(int32 TipTextIndex);
    void SetDisplayMovieIndex(int32 MovieIndex);
    void SetDisplayBackgroundIndex(int32 BackgroundIndex);
    void RemovePreloadedBackgroundImages();
    void PreloadBackgroundImages();
    bool GetIsEnableLoadingScreen();
}; // Size: 0x28

class ULoadingScreenSettings : public UDeveloperSettings
{
    bool bPreloadBackgroundImages;                                                    // 0x0038 (size: 0x1)
    FALoadingScreenSettings StartupLoadingScreen;                                     // 0x0040 (size: 0x4B0)
    FALoadingScreenSettings DefaultLoadingScreen;                                     // 0x04F0 (size: 0x4B0)
    FClassicLayoutSettings Classic;                                                   // 0x09A0 (size: 0xD0)
    FCenterLayoutSettings Center;                                                     // 0x0A70 (size: 0xD0)
    FLetterboxLayoutSettings Letterbox;                                               // 0x0B40 (size: 0x190)
    FSidebarLayoutSettings Sidebar;                                                   // 0x0CD0 (size: 0xE0)
    FDualSidebarLayoutSettings DualSidebar;                                           // 0x0DB0 (size: 0x190)

}; // Size: 0xF40

#endif
