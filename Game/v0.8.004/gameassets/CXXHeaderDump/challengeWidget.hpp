#ifndef UE4SS_SDK_challengeWidget_HPP
#define UE4SS_SDK_challengeWidget_HPP

class UchallengeWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button_changeBattlefield;                                          // 0x02E8 (size: 0x8)
    class UButton* Button_changeBattlefield_1;                                        // 0x02F0 (size: 0x8)
    class UButton* Button_kingsFavour;                                                // 0x02F8 (size: 0x8)
    class UButton* Button_Zoom;                                                       // 0x0300 (size: 0x8)
    class UHorizontalBox* daysRemaining_HB;                                           // 0x0308 (size: 0x8)
    class UTextBlock* daysRemaining_txt;                                              // 0x0310 (size: 0x8)
    class UTextBlock* header_txt;                                                     // 0x0318 (size: 0x8)
    class UHorizontalBox* HorizontalBox_1;                                            // 0x0320 (size: 0x8)
    class UImage* Image;                                                              // 0x0328 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0330 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0338 (size: 0x8)
    class UImage* Image_21;                                                           // 0x0340 (size: 0x8)
    class UImage* Image_85;                                                           // 0x0348 (size: 0x8)
    class UImage* Image_104;                                                          // 0x0350 (size: 0x8)
    class UImage* Image_144;                                                          // 0x0358 (size: 0x8)
    class UTextBlock* status_txt;                                                     // 0x0360 (size: 0x8)
    FChallenge Challenge;                                                             // 0x0368 (size: 0x68)

    void updateDetails();
    void Construct();
    void BndEvt__challengeWidget_Button_62_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__challengeWidget_Button_Zoom_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__challengeWidget_Button_Zoom_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_challengeWidget(int32 EntryPoint);
}; // Size: 0x3D0

#endif
