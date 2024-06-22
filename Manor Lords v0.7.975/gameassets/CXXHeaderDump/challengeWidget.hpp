#ifndef UE4SS_SDK_challengeWidget_HPP
#define UE4SS_SDK_challengeWidget_HPP

class UchallengeWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_changeBattlefield;                                          // 0x0268 (size: 0x8)
    class UButton* Button_changeBattlefield_1;                                        // 0x0270 (size: 0x8)
    class UButton* Button_kingsFavour;                                                // 0x0278 (size: 0x8)
    class UButton* Button_Zoom;                                                       // 0x0280 (size: 0x8)
    class UHorizontalBox* daysRemaining_HB;                                           // 0x0288 (size: 0x8)
    class UTextBlock* daysRemaining_txt;                                              // 0x0290 (size: 0x8)
    class UTextBlock* header_txt;                                                     // 0x0298 (size: 0x8)
    class UHorizontalBox* HorizontalBox_1;                                            // 0x02A0 (size: 0x8)
    class UImage* Image;                                                              // 0x02A8 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02B0 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02B8 (size: 0x8)
    class UImage* Image_21;                                                           // 0x02C0 (size: 0x8)
    class UImage* Image_85;                                                           // 0x02C8 (size: 0x8)
    class UImage* Image_104;                                                          // 0x02D0 (size: 0x8)
    class UImage* Image_144;                                                          // 0x02D8 (size: 0x8)
    class UTextBlock* status_txt;                                                     // 0x02E0 (size: 0x8)
    FChallenge Challenge;                                                             // 0x02E8 (size: 0x58)

    void updateDetails();
    void Construct();
    void BndEvt__challengeWidget_Button_62_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__challengeWidget_Button_Zoom_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__challengeWidget_Button_Zoom_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_challengeWidget(int32 EntryPoint);
}; // Size: 0x340

#endif
