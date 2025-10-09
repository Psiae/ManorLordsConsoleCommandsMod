#ifndef UE4SS_SDK_MessageFullscreen_HPP
#define UE4SS_SDK_MessageFullscreen_HPP

class UMessageFullscreen_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    class UWidgetAnimation* fadeIn_centered;                                          // 0x0358 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x0360 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x0368 (size: 0x8)
    class UBackgroundBlur* BackgroundBlur_75;                                         // 0x0370 (size: 0x8)
    class UScaleBox* bg_scalebox;                                                     // 0x0378 (size: 0x8)
    class UButton* Button_Accept;                                                     // 0x0380 (size: 0x8)
    class UButton* Button_Decline;                                                    // 0x0388 (size: 0x8)
    class UCheckBox* CheckBox_64;                                                     // 0x0390 (size: 0x8)
    class UTextBlock* choiceA;                                                        // 0x0398 (size: 0x8)
    class UTextBlock* choiceB;                                                        // 0x03A0 (size: 0x8)
    class UVerticalBox* choices_VB;                                                   // 0x03A8 (size: 0x8)
    class UTextBlock* focus-txt;                                                      // 0x03B0 (size: 0x8)
    class UTextBlock* focus-txt_1;                                                    // 0x03B8 (size: 0x8)
    class USizeBox* focus_sb_DISABLED;                                                // 0x03C0 (size: 0x8)
    class UImage* graphic;                                                            // 0x03C8 (size: 0x8)
    class UImage* Image_125;                                                          // 0x03D0 (size: 0x8)
    class UBorder* letterContent_border;                                              // 0x03D8 (size: 0x8)
    class UVerticalBox* letterParagraphs_VB;                                          // 0x03E0 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton_Accept;                             // 0x03E8 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton_Decline;                            // 0x03F0 (size: 0x8)
    class URichTextBlock* message_txt;                                                // 0x03F8 (size: 0x8)
    class USizeBox* objectives_sb;                                                    // 0x0400 (size: 0x8)
    class UVerticalBox* objectives_vb;                                                // 0x0408 (size: 0x8)
    class UVerticalBox* objectives_VB_DISABLED;                                       // 0x0410 (size: 0x8)
    class UpawnButton_C* pawnButton;                                                  // 0x0418 (size: 0x8)
    class UTextBlock* questTimeRemaining;                                             // 0x0420 (size: 0x8)
    class UHorizontalBox* rewards_HB;                                                 // 0x0428 (size: 0x8)
    class UImage* scroll_img_bottom;                                                  // 0x0430 (size: 0x8)
    class UImage* scroll_img_top;                                                     // 0x0438 (size: 0x8)
    class UHorizontalBox* signature_HB;                                               // 0x0440 (size: 0x8)
    class UTextBlock* signatureTxt;                                                   // 0x0448 (size: 0x8)
    class UTextBlock* skip_tutorials_txt;                                             // 0x0450 (size: 0x8)
    class UImage* Spacer;                                                             // 0x0458 (size: 0x8)
    class UImage* Spacer_1;                                                           // 0x0460 (size: 0x8)
    class UImage* Spacer_2;                                                           // 0x0468 (size: 0x8)
    class UVerticalBox* Time_VB_DISABLED;                                             // 0x0470 (size: 0x8)
    class UHorizontalBox* timeLeft_HB;                                                // 0x0478 (size: 0x8)
    class UTextBlock* Title1;                                                         // 0x0480 (size: 0x8)
    class UBorder* title_border;                                                      // 0x0488 (size: 0x8)
    class UVerticalBox* title_VB;                                                     // 0x0490 (size: 0x8)
    class UOverlay* topOverlay;                                                       // 0x0498 (size: 0x8)
    class UVerticalBox* tutorial_options;                                             // 0x04A0 (size: 0x8)
    class UBorder* wholeMessageBorder;                                                // 0x04A8 (size: 0x8)
    FQuest Quest;                                                                     // 0x04B0 (size: 0x118)
    FLetter Letter;                                                                   // 0x05C8 (size: 0x38)
    bool isLetter;                                                                    // 0x0600 (size: 0x1)
    FString senderName;                                                               // 0x0608 (size: 0x10)
    bool tutorial;                                                                    // 0x0618 (size: 0x1)
    class UMediaPlayer* MediaPlayer;                                                  // 0x0620 (size: 0x8)
    class UMediaTexture* Media Texture;                                               // 0x0628 (size: 0x8)
    class UTexture* mainGraphicTexture;                                               // 0x0630 (size: 0x8)
    bool Quest Letter Form;                                                           // 0x0638 (size: 0x1)

    void ReportClosedToMainui();
    FNaviSubGridLayout ComputeSubGridLayout();
    void switchToEventGUIStyle();
    void setBrushDrawAs(class UBorder* border_widget, TEnumAsByte<ESlateBrushDrawType::Type> In Brush Draw As);
    void setGUIToLetterStyle();
    void animateHoverButton(double Delta, class UWidget* Button, class UWidget* Text);
    void closeWindow();
    void decline();
    void BndEvt__Button_ChoiceA_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Button_ChoiceB_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void playVideo(class UMediaSource* MediaSource, class UMediaTexture* MediaTexture);
    void OnEndReached();
    void BndEvt__Message_CheckBox_64_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void closingAnimFinished();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_MessageFullscreen(int32 EntryPoint);
}; // Size: 0x639

#endif
