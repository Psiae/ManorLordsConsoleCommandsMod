#ifndef UE4SS_SDK_WBP_Approval_HPP
#define UE4SS_SDK_WBP_Approval_HPP

class UWBP_Approval_C : public UApprovalWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UapprovalEffectWidget_C* approvalEffectWidget;                              // 0x02E8 (size: 0x8)
    class UapprovalEffectWidget_C* approvalEffectWidget_1;                            // 0x02F0 (size: 0x8)
    class UapprovalEffectWidget_C* approvalEffectWidget_2;                            // 0x02F8 (size: 0x8)
    class UapprovalFactorWidget_C* approvalFactorWidget;                              // 0x0300 (size: 0x8)
    class UapprovalFactorWidget_C* approvalFactorWidget_297;                          // 0x0308 (size: 0x8)
    class UTextBlock* ApprovalPercentText;                                            // 0x0310 (size: 0x8)
    class UlocalizedTextBox_C* ApprovalTitle_Text;                                    // 0x0318 (size: 0x8)
    class UImage* BorderExterior;                                                     // 0x0320 (size: 0x8)
    class UImage* BorderInterior;                                                     // 0x0328 (size: 0x8)
    class UlocalizedTextBox_C* CurrentEffects_txt;                                    // 0x0330 (size: 0x8)
    class UlocalizedTextBox_C* CurrentEffectsText;                                    // 0x0338 (size: 0x8)
    class UlocalizedTextBox_C* CurrentFactorsText_2;                                  // 0x0340 (size: 0x8)
    class UImage* Decor_Bottom;                                                       // 0x0348 (size: 0x8)
    class UImage* Decor_Top;                                                          // 0x0350 (size: 0x8)
    class URichTextBlock* descr_RichTxt;                                              // 0x0358 (size: 0x8)
    class UTextBlock* EffectsAmountCountText;                                         // 0x0360 (size: 0x8)
    class UBorder* EffectsBorder;                                                     // 0x0368 (size: 0x8)
    class UVerticalBox* EffectsContainer;                                             // 0x0370 (size: 0x8)
    class UVerticalBox* FactorsContainer;                                             // 0x0378 (size: 0x8)
    class UTextBlock* FactorsNegativeAmountText;                                      // 0x0380 (size: 0x8)
    class UTextBlock* FactorsPositiveAmountText;                                      // 0x0388 (size: 0x8)
    class UHorizontalBox* FactorsTrackerHB;                                           // 0x0390 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0398 (size: 0x8)
    class UImage* Image_1;                                                            // 0x03A0 (size: 0x8)
    class UImage* Image_2;                                                            // 0x03A8 (size: 0x8)
    class UImage* Image_334;                                                          // 0x03B0 (size: 0x8)
    class UlocalizedTextBox_C* ImpressionText;                                        // 0x03B8 (size: 0x8)
    class UlocalizedTextBox_C* NoApprovalEffects_txt;                                 // 0x03C0 (size: 0x8)
    class UlocalizedTextBox_C* NoEffectsText;                                         // 0x03C8 (size: 0x8)
    class UlocalizedTextBox_C* NoPastFactorsText;                                     // 0x03D0 (size: 0x8)
    class UlocalizedTextBox_C* NoRecentFactors_Text;                                  // 0x03D8 (size: 0x8)
    class UlocalizedTextBox_C* OverflowText;                                          // 0x03E0 (size: 0x8)
    class UVerticalBox* PastFactorsContainer;                                         // 0x03E8 (size: 0x8)
    class UTextBlock* PastFactorsNegativeAmountText;                                  // 0x03F0 (size: 0x8)
    class UTextBlock* PastFactorsPositiveAmountText;                                  // 0x03F8 (size: 0x8)
    class UTextBlock* PastFactorsSum_txt_1;                                           // 0x0400 (size: 0x8)
    class UlocalizedTextBox_C* PastFactorsText;                                       // 0x0408 (size: 0x8)
    class UHorizontalBox* PastFactorsTrackerHB;                                       // 0x0410 (size: 0x8)
    class UImage* popIcon_1;                                                          // 0x0418 (size: 0x8)
    class UBorder* RecentFactorsList_Border;                                          // 0x0420 (size: 0x8)
    class UTextBlock* RecentFactorsSum_txt;                                           // 0x0428 (size: 0x8)
    class UlocalizedTextBox_C* RecentFactorsText;                                     // 0x0430 (size: 0x8)
    class UtabHint_C* TabButton;                                                      // 0x0438 (size: 0x8)
    class UWidget_Frame_Scroll_Simple_C* Widget_Frame_Scroll_Simple;                  // 0x0440 (size: 0x8)
    class UWidget_HeaderBg_C* Widget_HeaderBg;                                        // 0x0448 (size: 0x8)
    double ApprovalRate;                                                              // 0x0450 (size: 0x8)
    FApproval Approval Data;                                                          // 0x0458 (size: 0x38)
    TArray<FApprovalMemory> PositiveFactors;                                          // 0x0490 (size: 0x10)
    TArray<FApprovalMemory> NegativeFactors;                                          // 0x04A0 (size: 0x10)
    bool bTabPressed;                                                                 // 0x04B0 (size: 0x1)
    class AMyPawnCPP_BP3_C* playerPawn;                                               // 0x04B8 (size: 0x8)
    class ARegion* Region;                                                            // 0x04C0 (size: 0x8)
    TArray<FApprovalMemory> PastFactors;                                              // 0x04C8 (size: 0x10)

    void GetFactorSum(TArray<FApprovalMemory>& FactorArray, int32& FactorSum);
    void UpdateApprovalWidgetContents(FApproval Approval Data);
    void ImpressionTextSetup();
    void EffectsAmountCountSetup();
    void ApprovalPercentSetup();
    void TabInteraction();
    void UpdateContainerVisibility();
    void CreateEffectWidgetEntries();
    void SortArrayByPopulation(TArray<FApprovalMemory>& factors);
    void SortFactors();
    void CreateFactorWidgetEntries(TArray<FApprovalMemory>& factors);
    void HideApprovalDetails();
    void RecreateApprovalDetailsAndUpdateVisibility();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void UpdateContents(const FApproval& ApprovalData);
    void ExecuteUbergraph_WBP_Approval(int32 EntryPoint);
}; // Size: 0x4D8

#endif
