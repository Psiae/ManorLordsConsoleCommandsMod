#ifndef UE4SS_SDK_taxWidget_HPP
#define UE4SS_SDK_taxWidget_HPP

class UtaxWidget_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    class UTextBlock* appLoss_txt;                                                    // 0x0358 (size: 0x8)
    class UBorder* Border_approvalLoss;                                               // 0x0360 (size: 0x8)
    class UTextBlock* collectionEffectiveness_txt;                                    // 0x0368 (size: 0x8)
    class UButton* help_button;                                                       // 0x0370 (size: 0x8)
    class UImage* help_img;                                                           // 0x0378 (size: 0x8)
    class UImage* icon_approvalFace;                                                  // 0x0380 (size: 0x8)
    class UImage* icon_approvalFace_1;                                                // 0x0388 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C;                                    // 0x0390 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_0;                                  // 0x0398 (size: 0x8)
    class UTextBlock* loyaltyChangeText;                                              // 0x03A0 (size: 0x8)
    class URichTextBlock* RichTextBlock;                                              // 0x03A8 (size: 0x8)
    class URichTextBlock* RichTextBlock_0;                                            // 0x03B0 (size: 0x8)
    class UVerticalBox* taxes_VB;                                                     // 0x03B8 (size: 0x8)
    class UtaxOption_C* taxOption_geld;                                               // 0x03C0 (size: 0x8)
    class UtaxOption_C* taxOption_here;                                               // 0x03C8 (size: 0x8)
    class UtaxOption_C* taxOption_here_1;                                             // 0x03D0 (size: 0x8)
    class UtaxOption_C* taxOption_inc;                                                // 0x03D8 (size: 0x8)
    class UtaxOption_C* taxOption_mill;                                               // 0x03E0 (size: 0x8)
    class UtaxOption_C* taxOption_tith;                                               // 0x03E8 (size: 0x8)
    class UtaxOption_C* taxOption_war;                                                // 0x03F0 (size: 0x8)
    class UVerticalBox* taxOptions_VB;                                                // 0x03F8 (size: 0x8)
    class UTextBlock* TextBlockRegionName;                                            // 0x0400 (size: 0x8)
    class UTextBlock* treasuryChangeTxt;                                              // 0x0408 (size: 0x8)
    class ARegion* Region;                                                            // 0x0410 (size: 0x8)

    FNaviSubGridLayout ComputeSubGridLayout();
    void updateApprovalLoss();
    void updateTaxRateDisplay();
    void Construct();
    void taxChanged();
    void BndEvt__taxWidget_help_button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_taxWidget(int32 EntryPoint);
}; // Size: 0x418

#endif
