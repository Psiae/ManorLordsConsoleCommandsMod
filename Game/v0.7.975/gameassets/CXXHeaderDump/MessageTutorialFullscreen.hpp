#ifndef UE4SS_SDK_MessageTutorialFullscreen_HPP
#define UE4SS_SDK_MessageTutorialFullscreen_HPP

class UMessageTutorialFullscreen_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* FadeOut;                                                  // 0x0268 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x0270 (size: 0x8)
    class UImage* bg_img;                                                             // 0x0278 (size: 0x8)
    class UButton* Button_Accept;                                                     // 0x0280 (size: 0x8)
    class UCheckBox* CheckBox_64;                                                     // 0x0288 (size: 0x8)
    class UTextBlock* choiceA;                                                        // 0x0290 (size: 0x8)
    class UImage* Fire;                                                               // 0x0298 (size: 0x8)
    class UTextBlock* focus-txt;                                                      // 0x02A0 (size: 0x8)
    class USizeBox* focus_sb;                                                         // 0x02A8 (size: 0x8)
    class UImage* graphic;                                                            // 0x02B0 (size: 0x8)
    class URichTextBlock* messageTxt;                                                 // 0x02B8 (size: 0x8)
    class UScrollBox* msg_scrollbox;                                                  // 0x02C0 (size: 0x8)
    class UHorizontalBox* rewards_HB;                                                 // 0x02C8 (size: 0x8)
    class UTextBlock* skip_tutorials_txt;                                             // 0x02D0 (size: 0x8)
    class UImage* Spacer;                                                             // 0x02D8 (size: 0x8)
    class UImage* Spacer_2;                                                           // 0x02E0 (size: 0x8)
    class UVerticalBox* Time_VB;                                                      // 0x02E8 (size: 0x8)
    class UTextBlock* Title1;                                                         // 0x02F0 (size: 0x8)
    class UVerticalBox* title_VB;                                                     // 0x02F8 (size: 0x8)
    class UMediaPlayer* MediaPlayer;                                                  // 0x0300 (size: 0x8)
    class UMediaTexture* Media Texture;                                               // 0x0308 (size: 0x8)
    class UTexture* mainGraphicTexture;                                               // 0x0310 (size: 0x8)
    FName header_key;                                                                 // 0x0318 (size: 0x8)
    FName descr_key;                                                                  // 0x0320 (size: 0x8)

    void animateHoverButton(float Delta, class UWidget* Button, class UWidget* Text);
    void closeWindow();
    void playVideo(class UMediaSource* MediaSource, class UMediaTexture* MediaTexture);
    void Construct();
    void OnEndReached();
    void BndEvt__Message_CheckBox_64_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void closingAnimFinished();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_ChoiceA_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_MessageTutorialFullscreen(int32 EntryPoint);
}; // Size: 0x328

#endif
