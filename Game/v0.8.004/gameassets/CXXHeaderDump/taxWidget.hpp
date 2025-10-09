#ifndef UE4SS_SDK_taxWidget_HPP
#define UE4SS_SDK_taxWidget_HPP

class UtaxWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* appLoss_txt;                                                    // 0x02E8 (size: 0x8)
    class UBorder* Border_approvalLoss;                                               // 0x02F0 (size: 0x8)
    class UTextBlock* collectionEffectiveness_txt;                                    // 0x02F8 (size: 0x8)
    class UButton* help_button;                                                       // 0x0300 (size: 0x8)
    class UImage* help_img;                                                           // 0x0308 (size: 0x8)
    class UImage* icon_approvalFace;                                                  // 0x0310 (size: 0x8)
    class UImage* icon_approvalFace_1;                                                // 0x0318 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C;                                    // 0x0320 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_0;                                  // 0x0328 (size: 0x8)
    class UTextBlock* loyaltyChangeText;                                              // 0x0330 (size: 0x8)
    class URichTextBlock* RichTextBlock;                                              // 0x0338 (size: 0x8)
    class URichTextBlock* RichTextBlock_0;                                            // 0x0340 (size: 0x8)
    class UVerticalBox* taxes_VB;                                                     // 0x0348 (size: 0x8)
    class UtaxOption_C* taxOption_geld;                                               // 0x0350 (size: 0x8)
    class UtaxOption_C* taxOption_here;                                               // 0x0358 (size: 0x8)
    class UtaxOption_C* taxOption_here_1;                                             // 0x0360 (size: 0x8)
    class UtaxOption_C* taxOption_inc;                                                // 0x0368 (size: 0x8)
    class UtaxOption_C* taxOption_mill;                                               // 0x0370 (size: 0x8)
    class UtaxOption_C* taxOption_tith;                                               // 0x0378 (size: 0x8)
    class UtaxOption_C* taxOption_war;                                                // 0x0380 (size: 0x8)
    class UVerticalBox* taxOptions_VB;                                                // 0x0388 (size: 0x8)
    class UTextBlock* TextBlockRegionName;                                            // 0x0390 (size: 0x8)
    class UTextBlock* treasuryChangeTxt;                                              // 0x0398 (size: 0x8)
    class ARegion* Region;                                                            // 0x03A0 (size: 0x8)

    void updateApprovalLoss();
    void updateTaxRateDisplay();
    void Construct();
    void taxChanged();
    void BndEvt__taxWidget_help_button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_taxWidget(int32 EntryPoint);
}; // Size: 0x3A8

#endif
