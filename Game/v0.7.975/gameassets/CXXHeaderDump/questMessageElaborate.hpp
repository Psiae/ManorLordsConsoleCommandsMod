#ifndef UE4SS_SDK_questMessageElaborate_HPP
#define UE4SS_SDK_questMessageElaborate_HPP

class UquestMessageElaborate_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* duck;                                                     // 0x0268 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x0270 (size: 0x8)
    class UImage* bgCircle;                                                           // 0x0278 (size: 0x8)
    class UImage* bgCircle_1;                                                         // 0x0280 (size: 0x8)
    class UButton* Button_ChoiceA;                                                    // 0x0288 (size: 0x8)
    class UButton* Button_ChoiceB;                                                    // 0x0290 (size: 0x8)
    class UTextBlock* choiceA;                                                        // 0x0298 (size: 0x8)
    class UTextBlock* choiceB;                                                        // 0x02A0 (size: 0x8)
    class UlocalizedTextBox_C* contractAvailable_txt;                                 // 0x02A8 (size: 0x8)
    class UImage* flareA;                                                             // 0x02B0 (size: 0x8)
    class UImage* flareB;                                                             // 0x02B8 (size: 0x8)
    class UImage* glow;                                                               // 0x02C0 (size: 0x8)
    class UImage* graphic;                                                            // 0x02C8 (size: 0x8)
    class UButton* MainButton;                                                        // 0x02D0 (size: 0x8)
    class UTextBlock* Message;                                                        // 0x02D8 (size: 0x8)
    class UTextBlock* numMsgs_txt;                                                    // 0x02E0 (size: 0x8)
    class UImage* ribbon_left;                                                        // 0x02E8 (size: 0x8)
    class UImage* ribbon_left_1;                                                      // 0x02F0 (size: 0x8)
    class UImage* ribbon_mid;                                                         // 0x02F8 (size: 0x8)
    class UImage* scrollImg;                                                          // 0x0300 (size: 0x8)
    class UTextBlock* sender;                                                         // 0x0308 (size: 0x8)
    class UImage* Spacer;                                                             // 0x0310 (size: 0x8)
    class UTextBlock* Title1;                                                         // 0x0318 (size: 0x8)
    FQuest Quest;                                                                     // 0x0320 (size: 0x118)
    bool Pressed;                                                                     // 0x0438 (size: 0x1)
    FLetter Letter;                                                                   // 0x0440 (size: 0x38)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void BndEvt__scrollButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void ExecuteUbergraph_questMessageElaborate(int32 EntryPoint);
}; // Size: 0x478

#endif
