#ifndef UE4SS_SDK_currentClaimingWidget_HPP
#define UE4SS_SDK_currentClaimingWidget_HPP

class UcurrentClaimingWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* lerpIn;                                                   // 0x0268 (size: 0x8)
    class UButton* Button;                                                            // 0x0270 (size: 0x8)
    class UButton* Button_1;                                                          // 0x0278 (size: 0x8)
    class UButton* Button_70;                                                         // 0x0280 (size: 0x8)
    class UImage* claim_Flag;                                                         // 0x0288 (size: 0x8)
    class UTextBlock* Claiming_txt;                                                   // 0x0290 (size: 0x8)
    class UHorizontalBox* claimResolveOptions;                                        // 0x0298 (size: 0x8)
    class UImage* construction_separator_4;                                           // 0x02A0 (size: 0x8)
    class UImage* Image;                                                              // 0x02A8 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02B0 (size: 0x8)
    class UImage* Image_120;                                                          // 0x02B8 (size: 0x8)
    class UImage* Image_203;                                                          // 0x02C0 (size: 0x8)
    class UProgressBar* ProgressBar_118;                                              // 0x02C8 (size: 0x8)
    class UTextBlock* regionName_txt;                                                 // 0x02D0 (size: 0x8)
    class ARegion* Region;                                                            // 0x02D8 (size: 0x8)

    void getClaimForTheRegion(FClaim& Claim, class APawnCPP_AI*& claimer, FVector& conflict_center_temp);
    void updateProgress();
    void UpdateContent();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__currentClaimingWidget_Button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_currentClaimingWidget(int32 EntryPoint);
}; // Size: 0x2E0

#endif
