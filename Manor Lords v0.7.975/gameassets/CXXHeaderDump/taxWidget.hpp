#ifndef UE4SS_SDK_taxWidget_HPP
#define UE4SS_SDK_taxWidget_HPP

class UtaxWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* appLoss_txt;                                                    // 0x0268 (size: 0x8)
    class UBorder* Border_approvalLoss;                                               // 0x0270 (size: 0x8)
    class UTextBlock* collectionEffectiveness_txt;                                    // 0x0278 (size: 0x8)
    class UImage* icon_approvalFace;                                                  // 0x0280 (size: 0x8)
    class UImage* icon_approvalFace_1;                                                // 0x0288 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C;                                    // 0x0290 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_0;                                  // 0x0298 (size: 0x8)
    class UTextBlock* loyaltyChangeText;                                              // 0x02A0 (size: 0x8)
    class URichTextBlock* RichTextBlock;                                              // 0x02A8 (size: 0x8)
    class URichTextBlock* RichTextBlock_0;                                            // 0x02B0 (size: 0x8)
    class UVerticalBox* taxes_VB;                                                     // 0x02B8 (size: 0x8)
    class UtaxOption_C* taxOption_geld;                                               // 0x02C0 (size: 0x8)
    class UtaxOption_C* taxOption_here;                                               // 0x02C8 (size: 0x8)
    class UtaxOption_C* taxOption_here_1;                                             // 0x02D0 (size: 0x8)
    class UtaxOption_C* taxOption_inc;                                                // 0x02D8 (size: 0x8)
    class UtaxOption_C* taxOption_mill;                                               // 0x02E0 (size: 0x8)
    class UtaxOption_C* taxOption_tith;                                               // 0x02E8 (size: 0x8)
    class UtaxOption_C* taxOption_war;                                                // 0x02F0 (size: 0x8)
    class UVerticalBox* taxOptions_VB;                                                // 0x02F8 (size: 0x8)
    class UTextBlock* TextBlock_158;                                                  // 0x0300 (size: 0x8)
    class UTextBlock* treasuryChangeTxt;                                              // 0x0308 (size: 0x8)
    class ARegion* Region;                                                            // 0x0310 (size: 0x8)

    void updateApprovalLoss();
    void updateTaxRateDisplay();
    void Construct();
    void taxChanged();
    void ExecuteUbergraph_taxWidget(int32 EntryPoint);
}; // Size: 0x318

#endif
