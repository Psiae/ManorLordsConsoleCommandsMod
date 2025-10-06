#ifndef UE4SS_SDK_BigTooltip_ApprovalAndPublicOrder_HPP
#define UE4SS_SDK_BigTooltip_ApprovalAndPublicOrder_HPP

class UBigTooltip_ApprovalAndPublicOrder_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UlocalizedTextBox_C* approval_factors_recent_localizedText;                 // 0x02D8 (size: 0x8)
    class UTextBlock* current_sum_txt;                                                // 0x02E0 (size: 0x8)
    class URichTextBlock* descr_RichTxt;                                              // 0x02E8 (size: 0x8)
    class UImage* Image;                                                              // 0x02F0 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02F8 (size: 0x8)
    class UVerticalBox* LastYearFactorsParent;                                        // 0x0300 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x0308 (size: 0x8)
    class UTextBlock* name_txt_1;                                                     // 0x0310 (size: 0x8)
    class UTextBlock* none_txt;                                                       // 0x0318 (size: 0x8)
    class UTextBlock* past_sum_txt;                                                   // 0x0320 (size: 0x8)
    class UVerticalBox* pastFactors_VB;                                               // 0x0328 (size: 0x8)
    class UTextBlock* pst_none_txt_1;                                                 // 0x0330 (size: 0x8)
    class UVerticalBox* recentFactors_VB;                                             // 0x0338 (size: 0x8)
    class UImage* Spacer;                                                             // 0x0340 (size: 0x8)
    class UImage* Spacer_1;                                                           // 0x0348 (size: 0x8)
    class UtabHint_C* tabHint;                                                        // 0x0350 (size: 0x8)
    class UTextBlock* TextBlock_59;                                                   // 0x0358 (size: 0x8)
    class UWidget_Frame_Scroll_Simple_C* Widget_Frame_Scroll_Simple;                  // 0x0360 (size: 0x8)
    class UWidget_HeaderBg_C* Widget_HeaderBg;                                        // 0x0368 (size: 0x8)
    FName headerKey;                                                                  // 0x0370 (size: 0x8)
    FName mainTextKey;                                                                // 0x0378 (size: 0x8)
    int32 summedTotalValue;                                                           // 0x0380 (size: 0x4)
    bool ShowPastMemoryDetails;                                                       // 0x0384 (size: 0x1)

    void ApplyPlatformLimits();
    FSlateColor getColorForValue(int32 Value);
    void doesPlayerPressTAB(bool& B Tab Pressed);
    void togglePastDetails(bool showDetails);
    void UpdateContents(int32 summedTotalValue, class ARegion* Region, TArray<FApprovalMemory>& factorsToDisplay);
    void Construct();
    void ExecuteUbergraph_BigTooltip_ApprovalAndPublicOrder(int32 EntryPoint);
}; // Size: 0x385

#endif
