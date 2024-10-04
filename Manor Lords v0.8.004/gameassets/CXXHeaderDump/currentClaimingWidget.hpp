#ifndef UE4SS_SDK_currentClaimingWidget_HPP
#define UE4SS_SDK_currentClaimingWidget_HPP

class UcurrentClaimingWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* lerpIn;                                                   // 0x02E8 (size: 0x8)
    class UButton* Button;                                                            // 0x02F0 (size: 0x8)
    class UButton* Button_1;                                                          // 0x02F8 (size: 0x8)
    class UButton* Button_70;                                                         // 0x0300 (size: 0x8)
    class UImage* claim_Flag;                                                         // 0x0308 (size: 0x8)
    class UTextBlock* Claiming_txt;                                                   // 0x0310 (size: 0x8)
    class UHorizontalBox* claimResolveOptions;                                        // 0x0318 (size: 0x8)
    class UImage* construction_separator_4;                                           // 0x0320 (size: 0x8)
    class UImage* Image;                                                              // 0x0328 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0330 (size: 0x8)
    class UImage* Image_120;                                                          // 0x0338 (size: 0x8)
    class UImage* Image_203;                                                          // 0x0340 (size: 0x8)
    class UProgressBar* ProgressBar_118;                                              // 0x0348 (size: 0x8)
    class UTextBlock* regionName_txt;                                                 // 0x0350 (size: 0x8)
    class ARegion* Region;                                                            // 0x0358 (size: 0x8)

    void getClaimForTheRegion(FClaim& Claim, class APawnCPP_AI*& claimer, FVector& conflict_center_temp);
    void updateProgress();
    void UpdateContent();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__currentClaimingWidget_Button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_currentClaimingWidget(int32 EntryPoint);
}; // Size: 0x360

#endif
