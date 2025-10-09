#ifndef UE4SS_SDK_MessageFullscreen_HPP
#define UE4SS_SDK_MessageFullscreen_HPP

class UMessageFullscreen_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* fadeIn_centered;                                          // 0x0268 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x0270 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x0278 (size: 0x8)
    class UBackgroundBlur* BackgroundBlur_75;                                         // 0x0280 (size: 0x8)
    class UScaleBox* bg_scalebox;                                                     // 0x0288 (size: 0x8)
    class UButton* Button_Accept;                                                     // 0x0290 (size: 0x8)
    class UButton* Button_Decline;                                                    // 0x0298 (size: 0x8)
    class UCheckBox* CheckBox_64;                                                     // 0x02A0 (size: 0x8)
    class UTextBlock* choiceA;                                                        // 0x02A8 (size: 0x8)
    class UTextBlock* choiceB;                                                        // 0x02B0 (size: 0x8)
    class UVerticalBox* choices_VB;                                                   // 0x02B8 (size: 0x8)
    class UTextBlock* focus-txt;                                                      // 0x02C0 (size: 0x8)
    class UTextBlock* focus-txt_1;                                                    // 0x02C8 (size: 0x8)
    class USizeBox* focus_sb_DISABLED;                                                // 0x02D0 (size: 0x8)
    class UImage* graphic;                                                            // 0x02D8 (size: 0x8)
    class UImage* Image_125;                                                          // 0x02E0 (size: 0x8)
    class UBorder* letterContent_border;                                              // 0x02E8 (size: 0x8)
    class UVerticalBox* letterParagraphs_VB;                                          // 0x02F0 (size: 0x8)
    class URichTextBlock* message_txt;                                                // 0x02F8 (size: 0x8)
    class USizeBox* objectives_sb;                                                    // 0x0300 (size: 0x8)
    class UVerticalBox* objectives_VB;                                                // 0x0308 (size: 0x8)
    class UVerticalBox* objectives_VB_DISABLED;                                       // 0x0310 (size: 0x8)
    class UpawnButton_C* pawnButton;                                                  // 0x0318 (size: 0x8)
    class UTextBlock* questTimeRemaining;                                             // 0x0320 (size: 0x8)
    class UHorizontalBox* rewards_HB;                                                 // 0x0328 (size: 0x8)
    class UImage* scroll_img_bottom;                                                  // 0x0330 (size: 0x8)
    class UImage* scroll_img_top;                                                     // 0x0338 (size: 0x8)
    class UHorizontalBox* signature_HB;                                               // 0x0340 (size: 0x8)
    class UTextBlock* signatureTxt;                                                   // 0x0348 (size: 0x8)
    class UTextBlock* skip_tutorials_txt;                                             // 0x0350 (size: 0x8)
    class UImage* Spacer;                                                             // 0x0358 (size: 0x8)
    class UImage* Spacer_1;                                                           // 0x0360 (size: 0x8)
    class UImage* Spacer_2;                                                           // 0x0368 (size: 0x8)
    class UVerticalBox* Time_VB_DISABLED;                                             // 0x0370 (size: 0x8)
    class UHorizontalBox* timeLeft_HB;                                                // 0x0378 (size: 0x8)
    class UTextBlock* Title1;                                                         // 0x0380 (size: 0x8)
    class UBorder* title_border;                                                      // 0x0388 (size: 0x8)
    class UVerticalBox* title_VB;                                                     // 0x0390 (size: 0x8)
    class UOverlay* topOverlay;                                                       // 0x0398 (size: 0x8)
    class UVerticalBox* tutorial_options;                                             // 0x03A0 (size: 0x8)
    class UBorder* wholeMessageBorder;                                                // 0x03A8 (size: 0x8)
    FQuest Quest;                                                                     // 0x03B0 (size: 0x118)
    FLetter Letter;                                                                   // 0x04C8 (size: 0x38)
    bool isLetter;                                                                    // 0x0500 (size: 0x1)
    FString senderName;                                                               // 0x0508 (size: 0x10)
    bool tutorial;                                                                    // 0x0518 (size: 0x1)
    class UMediaPlayer* MediaPlayer;                                                  // 0x0520 (size: 0x8)
    class UMediaTexture* Media Texture;                                               // 0x0528 (size: 0x8)
    class UTexture* mainGraphicTexture;                                               // 0x0530 (size: 0x8)
    bool Quest Letter Form;                                                           // 0x0538 (size: 0x1)

    void switchToEventGUIStyle();
    void setBrushDrawAs(class UBorder* border_widget, TEnumAsByte<ESlateBrushDrawType::Type> In Brush Draw As);
    void setGUIToLetterStyle();
    void animateHoverButton(float Delta, class UWidget* Button, class UWidget* Text);
    void closeWindow();
    void decline();
    void playVideo(class UMediaSource* MediaSource, class UMediaTexture* MediaTexture);
    void OnEndReached();
    void BndEvt__Message_CheckBox_64_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void closingAnimFinished();
    void BndEvt__Button_ChoiceA_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Button_ChoiceB_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_MessageFullscreen(int32 EntryPoint);
}; // Size: 0x539

#endif
