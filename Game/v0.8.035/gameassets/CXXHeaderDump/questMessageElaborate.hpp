#ifndef UE4SS_SDK_questMessageElaborate_HPP
#define UE4SS_SDK_questMessageElaborate_HPP

class UquestMessageElaborate_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UWidgetAnimation* duck;                                                     // 0x02D8 (size: 0x8)
    class UWidgetAnimation* FadeIn;                                                   // 0x02E0 (size: 0x8)
    class UImage* bgCircle;                                                           // 0x02E8 (size: 0x8)
    class UImage* bgCircle_1;                                                         // 0x02F0 (size: 0x8)
    class UButton* Button_ChoiceA;                                                    // 0x02F8 (size: 0x8)
    class UButton* Button_ChoiceB;                                                    // 0x0300 (size: 0x8)
    class UTextBlock* choiceA;                                                        // 0x0308 (size: 0x8)
    class UTextBlock* choiceB;                                                        // 0x0310 (size: 0x8)
    class UlocalizedTextBox_C* contractAvailable_txt;                                 // 0x0318 (size: 0x8)
    class UImage* flareA;                                                             // 0x0320 (size: 0x8)
    class UImage* flareB;                                                             // 0x0328 (size: 0x8)
    class UImage* glow;                                                               // 0x0330 (size: 0x8)
    class UImage* graphic;                                                            // 0x0338 (size: 0x8)
    class UButton* MainButton;                                                        // 0x0340 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton;                                    // 0x0348 (size: 0x8)
    class UTextBlock* Message;                                                        // 0x0350 (size: 0x8)
    class UTextBlock* numMsgs_txt;                                                    // 0x0358 (size: 0x8)
    class UImage* ribbon_left;                                                        // 0x0360 (size: 0x8)
    class UImage* ribbon_left_1;                                                      // 0x0368 (size: 0x8)
    class UImage* ribbon_mid;                                                         // 0x0370 (size: 0x8)
    class UImage* scrollImg;                                                          // 0x0378 (size: 0x8)
    class UTextBlock* sender;                                                         // 0x0380 (size: 0x8)
    class UImage* Spacer;                                                             // 0x0388 (size: 0x8)
    class UTextBlock* Title1;                                                         // 0x0390 (size: 0x8)
    FQuest Quest;                                                                     // 0x0398 (size: 0x118)
    bool Pressed;                                                                     // 0x04B0 (size: 0x1)
    FLetter Letter;                                                                   // 0x04B8 (size: 0x38)

    void UpdateOtherQuestMsgCounts();
    void UpdateMsgCount();
    void BndEvt__scrollButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_questMessageElaborate(int32 EntryPoint);
}; // Size: 0x4F0

#endif
