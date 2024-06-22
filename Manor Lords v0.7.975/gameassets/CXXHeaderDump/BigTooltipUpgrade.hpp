#ifndef UE4SS_SDK_BigTooltipUpgrade_HPP
#define UE4SS_SDK_BigTooltipUpgrade_HPP

class UBigTooltipUpgrade_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* NewAnimation;                                             // 0x0268 (size: 0x8)
    class UBorder* Border_Pattern;                                                    // 0x0270 (size: 0x8)
    class UImage* construction_separator;                                             // 0x0278 (size: 0x8)
    class UHorizontalBox* cost_hb;                                                    // 0x0280 (size: 0x8)
    class URichTextBlock* descr_RichTxt;                                              // 0x0288 (size: 0x8)
    class UHorizontalBox* devBranches_hb;                                             // 0x0290 (size: 0x8)
    class UTextBlock* devBranchesReq_txt;                                             // 0x0298 (size: 0x8)
    class UVerticalBox* extra_req_vb;                                                 // 0x02A0 (size: 0x8)
    class URichTextBlock* extraRequirements_richText;                                 // 0x02A8 (size: 0x8)
    class UTextBlock* houseLv_txt;                                                    // 0x02B0 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02B8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_0;                                  // 0x02C0 (size: 0x8)
    class UTextBlock* name_txt;                                                       // 0x02C8 (size: 0x8)
    class UVerticalBox* settlement_level_vb;                                          // 0x02D0 (size: 0x8)
    class UImage* settlementlevel_sep_1;                                              // 0x02D8 (size: 0x8)
    class UTextBlock* settlm_level_txt;                                               // 0x02E0 (size: 0x8)
    int32 ID;                                                                         // 0x02E8 (size: 0x4)
    TArray<class UcostResource_C*> costWidgets;                                       // 0x02F0 (size: 0x10)
    FUpgrade upgradeData;                                                             // 0x0300 (size: 0x70)
    FText requiredBranchesTranslatedTxt;                                              // 0x0370 (size: 0x18)
    class ASMBuildingMaster* relevantBuilding;                                        // 0x0388 (size: 0x8)
    int32 missingDevBranchesNum;                                                      // 0x0390 (size: 0x4)
    TArray<FName> reasonWhyCantUpgrade;                                               // 0x0398 (size: 0x10)

    bool onlyReasonIsResources(int32 numReasons, TArray<FName>& Array);
    void localizeAndFormatReasonsCant(FText& formatedLocalizedReasons);
    bool anyNonImageChildIsVisible(class UPanelWidget* Target);
    bool IsDevBranchEnabled(int32 devID);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_BigTooltipUpgrade(int32 EntryPoint);
}; // Size: 0x3A8

#endif
