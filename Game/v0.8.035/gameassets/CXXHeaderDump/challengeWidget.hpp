#ifndef UE4SS_SDK_challengeWidget_HPP
#define UE4SS_SDK_challengeWidget_HPP

class UchallengeWidget_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UButton* Button_changeBattlefield;                                          // 0x0350 (size: 0x8)
    class UButton* Button_kingsFavour;                                                // 0x0358 (size: 0x8)
    class UButton* Button_surrender;                                                  // 0x0360 (size: 0x8)
    class UButton* Button_Zoom;                                                       // 0x0368 (size: 0x8)
    class UHorizontalBox* daysRemaining_HB;                                           // 0x0370 (size: 0x8)
    class UTextBlock* daysRemaining_txt;                                              // 0x0378 (size: 0x8)
    class UTextBlock* header_txt;                                                     // 0x0380 (size: 0x8)
    class UHorizontalBox* HorizontalBox_1;                                            // 0x0388 (size: 0x8)
    class UImage* Image;                                                              // 0x0390 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0398 (size: 0x8)
    class UImage* Image_2;                                                            // 0x03A0 (size: 0x8)
    class UImage* Image_21;                                                           // 0x03A8 (size: 0x8)
    class UImage* Image_85;                                                           // 0x03B0 (size: 0x8)
    class UImage* Image_104;                                                          // 0x03B8 (size: 0x8)
    class UImage* Image_144;                                                          // 0x03C0 (size: 0x8)
    class UMD_NaviAutoButton_C* naviBtn_changeBattlefield;                            // 0x03C8 (size: 0x8)
    class UMD_NaviAutoButton_C* naviBtn_kingsfavour;                                  // 0x03D0 (size: 0x8)
    class UMD_NaviAutoButton_C* naviBtn_surrender;                                    // 0x03D8 (size: 0x8)
    class UMD_NaviAutoButton_C* naviBtn_Zoom;                                         // 0x03E0 (size: 0x8)
    class UTextBlock* status_txt;                                                     // 0x03E8 (size: 0x8)
    FChallenge Challenge;                                                             // 0x03F0 (size: 0x68)

    void ApplyPlatformLimits();
    FNaviSubGridLayout ComputeSubGridLayout();
    void updateDetails();
    void Construct();
    void BndEvt__challengeWidget_Button_62_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__challengeWidget_Button_Zoom_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__challengeWidget_Button_Zoom_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_challengeWidget(int32 EntryPoint);
}; // Size: 0x458

#endif
