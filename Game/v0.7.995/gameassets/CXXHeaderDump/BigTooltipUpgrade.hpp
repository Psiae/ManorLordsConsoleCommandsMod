#ifndef UE4SS_SDK_BigTooltipUpgrade_HPP
#define UE4SS_SDK_BigTooltipUpgrade_HPP

class UBigTooltipUpgrade_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* NewAnimation;                                             // 0x02E8 (size: 0x8)
    class UBorder* Border_Pattern;                                                    // 0x02F0 (size: 0x8)
    class UImage* construction_separator;                                             // 0x02F8 (size: 0x8)
    class UHorizontalBox* cost_hb;                                                    // 0x0300 (size: 0x8)
    class URichTextBlock* descr_RichTxt;                                              // 0x0308 (size: 0x8)
    class UHorizontalBox* devBranches_hb;                                             // 0x0310 (size: 0x8)
    class UTextBlock* devBranchesReq_txt;                                             // 0x0318 (size: 0x8)
    class UVerticalBox* extra_req_vb;                                                 // 0x0320 (size: 0x8)
    class URichTextBlock* extraRequirements_richText;                                 // 0x0328 (size: 0x8)
    class UTextBlock* houseLv_txt;                                                    // 0x0330 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0338 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_0;                                  // 0x0340 (size: 0x8)
    class UTextBlock* name_txt;                                                       // 0x0348 (size: 0x8)
    class UVerticalBox* settlement_level_vb;                                          // 0x0350 (size: 0x8)
    class UImage* settlementlevel_sep_1;                                              // 0x0358 (size: 0x8)
    class UTextBlock* settlm_level_txt;                                               // 0x0360 (size: 0x8)
    int32 ID;                                                                         // 0x0368 (size: 0x4)
    TArray<class UcostResource_C*> costWidgets;                                       // 0x0370 (size: 0x10)
    FUpgrade upgradeData;                                                             // 0x0380 (size: 0x70)
    FText requiredBranchesTranslatedTxt;                                              // 0x03F0 (size: 0x10)
    class ASMBuildingMaster* relevantBuilding;                                        // 0x0400 (size: 0x8)
    int32 missingDevBranchesNum;                                                      // 0x0408 (size: 0x4)
    TArray<FName> reasonWhyCantUpgrade;                                               // 0x0410 (size: 0x10)

    bool onlyReasonIsResources(int32 numReasons, TArray<FName>& Array);
    void localizeAndFormatReasonsCant(FText& formatedLocalizedReasons);
    bool anyNonImageChildIsVisible(class UPanelWidget* Target);
    bool IsDevBranchEnabled(int32 devID);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_BigTooltipUpgrade(int32 EntryPoint);
}; // Size: 0x420

#endif
