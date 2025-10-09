#ifndef UE4SS_SDK_currentClaimingWidget_HPP
#define UE4SS_SDK_currentClaimingWidget_HPP

class UcurrentClaimingWidget_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    class UWidgetAnimation* lerpIn;                                                   // 0x0358 (size: 0x8)
    class UButton* Button_InitChallenge;                                              // 0x0360 (size: 0x8)
    class UButton* Button_KingFavour;                                                 // 0x0368 (size: 0x8)
    class UButton* Button_Negotiate;                                                  // 0x0370 (size: 0x8)
    class UImage* claim_Flag;                                                         // 0x0378 (size: 0x8)
    class UTextBlock* Claiming_txt;                                                   // 0x0380 (size: 0x8)
    class UHorizontalBox* claimResolveOptions;                                        // 0x0388 (size: 0x8)
    class UImage* construction_separator_4;                                           // 0x0390 (size: 0x8)
    class UImage* icon_challenge;                                                     // 0x0398 (size: 0x8)
    class UImage* icon_kingfavour;                                                    // 0x03A0 (size: 0x8)
    class UImage* icon_negotiate;                                                     // 0x03A8 (size: 0x8)
    class UImage* Image_120;                                                          // 0x03B0 (size: 0x8)
    class UMD_NaviAutoButton_C* naviBtn_InitChallenge;                                // 0x03B8 (size: 0x8)
    class UMD_NaviAutoButton_C* naviBtn_kingfavour;                                   // 0x03C0 (size: 0x8)
    class UMD_NaviAutoButton_C* naviBtn_negotiate;                                    // 0x03C8 (size: 0x8)
    class UProgressBar* ProgressBar_118;                                              // 0x03D0 (size: 0x8)
    class UTextBlock* regionName_txt;                                                 // 0x03D8 (size: 0x8)
    class ARegion* Region;                                                            // 0x03E0 (size: 0x8)

    FNaviSubGridLayout ComputeSubGridLayout();
    void getClaimForTheRegion(FClaim& Claim, class APawnCPP_AI*& claimer, FVector& conflict_center_temp);
    void updateProgress();
    void UpdateContent();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__currentClaimingWidget_Button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_currentClaimingWidget(int32 EntryPoint);
}; // Size: 0x3E8

#endif
