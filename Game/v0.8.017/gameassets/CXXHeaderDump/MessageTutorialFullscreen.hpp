#ifndef UE4SS_SDK_MessageTutorialFullscreen_HPP
#define UE4SS_SDK_MessageTutorialFullscreen_HPP

class UMessageTutorialFullscreen_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x0358 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x0360 (size: 0x8)
    class UMD_NaviAutoButton_C* acceptAutoButton;                                     // 0x0368 (size: 0x8)
    class UImage* bg_img;                                                             // 0x0370 (size: 0x8)
    class UButton* Button_Accept;                                                     // 0x0378 (size: 0x8)
    class UMLDefaultCheckbox_C* checkbox_SkipTutorials;                               // 0x0380 (size: 0x8)
    class UTextBlock* choiceA;                                                        // 0x0388 (size: 0x8)
    class UVerticalBox* ContentParent;                                                // 0x0390 (size: 0x8)
    class UImage* Fire;                                                               // 0x0398 (size: 0x8)
    class UTextBlock* focus-txt;                                                      // 0x03A0 (size: 0x8)
    class USizeBox* focus_sb;                                                         // 0x03A8 (size: 0x8)
    class UImage* graphic;                                                            // 0x03B0 (size: 0x8)
    class URichTextBlock* messageTxt;                                                 // 0x03B8 (size: 0x8)
    class UScrollBox* msg_scrollbox;                                                  // 0x03C0 (size: 0x8)
    class UHorizontalBox* rewards_HB;                                                 // 0x03C8 (size: 0x8)
    class UTextBlock* skip_tutorials_txt;                                             // 0x03D0 (size: 0x8)
    class UImage* Spacer;                                                             // 0x03D8 (size: 0x8)
    class UImage* Spacer_2;                                                           // 0x03E0 (size: 0x8)
    class UVerticalBox* Time_VB;                                                      // 0x03E8 (size: 0x8)
    class UTextBlock* Title1;                                                         // 0x03F0 (size: 0x8)
    class UVerticalBox* title_VB;                                                     // 0x03F8 (size: 0x8)
    class UMediaPlayer* MediaPlayer;                                                  // 0x0400 (size: 0x8)
    class UMediaTexture* Media Texture;                                               // 0x0408 (size: 0x8)
    class UTexture* mainGraphicTexture;                                               // 0x0410 (size: 0x8)
    FName header_key;                                                                 // 0x0418 (size: 0x8)
    FName descr_key;                                                                  // 0x0420 (size: 0x8)
    class UMediaSource* Media Source;                                                 // 0x0428 (size: 0x8)

    FNaviSubGridLayout ComputeSubGridLayout();
    void animateHoverButton(double Delta, class UWidget* Button, class UWidget* Text);
    void closeWindow();
    void playVideo(class UMediaSource* MediaSource, class UMediaTexture* MediaTexture);
    void closingAnimFinished();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_ChoiceA_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__MessageTutorialFullscreen_MLDefaultCheckbox_K2Node_ComponentBoundEvent_0_OnValueChange__DelegateSignature(bool IsChecked);
    void Construct();
    void ExecuteUbergraph_MessageTutorialFullscreen(int32 EntryPoint);
}; // Size: 0x430

#endif
