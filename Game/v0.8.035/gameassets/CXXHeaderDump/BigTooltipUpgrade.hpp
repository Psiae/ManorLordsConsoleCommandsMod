#ifndef UE4SS_SDK_BigTooltipUpgrade_HPP
#define UE4SS_SDK_BigTooltipUpgrade_HPP

class UBigTooltipUpgrade_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UWidgetAnimation* NewAnimation;                                             // 0x02D8 (size: 0x8)
    class UHorizontalBox* affinity_HB;                                                // 0x02E0 (size: 0x8)
    class UImage* construction_separator;                                             // 0x02E8 (size: 0x8)
    class UImage* construction_separator_1;                                           // 0x02F0 (size: 0x8)
    class UHorizontalBox* cost_hb;                                                    // 0x02F8 (size: 0x8)
    class URichTextBlock* descr_RichTxt;                                              // 0x0300 (size: 0x8)
    class UHorizontalBox* devBranches_hb;                                             // 0x0308 (size: 0x8)
    class UTextBlock* devBranchesReq_txt;                                             // 0x0310 (size: 0x8)
    class UVerticalBox* extra_req_vb;                                                 // 0x0318 (size: 0x8)
    class URichTextBlock* extraRequirements_richText;                                 // 0x0320 (size: 0x8)
    class UTextBlock* houseLv_txt;                                                    // 0x0328 (size: 0x8)
    class UImage* Image_334;                                                          // 0x0330 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_0;                                  // 0x0338 (size: 0x8)
    class UTextBlock* name_txt;                                                       // 0x0340 (size: 0x8)
    class UVerticalBox* settlement_level_vb;                                          // 0x0348 (size: 0x8)
    class UTextBlock* settlm_level_txt;                                               // 0x0350 (size: 0x8)
    class UImage* topSeparator;                                                       // 0x0358 (size: 0x8)
    class UWidget_Affinity_C* Widget_Affinity;                                        // 0x0360 (size: 0x8)
    class UWidget_Frame_Scroll_Simple_C* Widget_Frame_Scroll_Simple;                  // 0x0368 (size: 0x8)
    int32 ID;                                                                         // 0x0370 (size: 0x4)
    TArray<class UcostResource_C*> costWidgets;                                       // 0x0378 (size: 0x10)
    FUpgrade UpgradeData;                                                             // 0x0388 (size: 0xE8)
    FText requiredBranchesTranslatedTxt;                                              // 0x0470 (size: 0x10)
    class ASMBuildingMaster* relevantBuilding;                                        // 0x0480 (size: 0x8)
    int32 missingDevBranchesNum;                                                      // 0x0488 (size: 0x4)
    TArray<FName> reasonWhyCantUpgrade;                                               // 0x0490 (size: 0x10)
    int32 UpgradeCost_Wealth;                                                         // 0x04A0 (size: 0x4)

    void getUpgradeData(int32 upgradeID, FUpgrade& UpgradeData);
    bool onlyReasonIsResources(int32 numReasons, TArray<FName>& Array);
    void localizeAndFormatReasonsCant(FText& formatedLocalizedReasons);
    bool anyNonImageChildIsVisible(class UPanelWidget* Target);
    bool IsDevBranchEnabled(int32 devID);
    void Construct();
    void ExecuteUbergraph_BigTooltipUpgrade(int32 EntryPoint);
}; // Size: 0x4A4

#endif
