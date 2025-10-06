#ifndef UE4SS_SDK_settlementLv_tooltip_HPP
#define UE4SS_SDK_settlementLv_tooltip_HPP

class UsettlementLv_tooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UBorder* Border_Pattern;                                                    // 0x02D8 (size: 0x8)
    class URichTextBlock* current_txt;                                                // 0x02E0 (size: 0x8)
    class URichTextBlock* descr_RichTxt;                                              // 0x02E8 (size: 0x8)
    class UImage* Image;                                                              // 0x02F0 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02F8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_0;                                  // 0x0300 (size: 0x8)
    class UTextBlock* TextBlock_59;                                                   // 0x0308 (size: 0x8)
    class UTextBlock* TextBlock_78;                                                   // 0x0310 (size: 0x8)
    class UVerticalBox* VerticalBox_51;                                               // 0x0318 (size: 0x8)
    class ARegion* Region;                                                            // 0x0320 (size: 0x8)
    FSettlementRequirements SettlementRequirementFulfillment;                         // 0x0328 (size: 0x20)
    FSettlementRequirements NextSettlementRequirementFulfillment;                     // 0x0348 (size: 0x20)
    class UsettlemtnLvRequirementWidget_C* BaseSettlementEntry;                       // 0x0368 (size: 0x8)
    class UsettlemtnLvRequirementWidget_C* Lvl2SettlementEntry;                       // 0x0370 (size: 0x8)
    class UsettlemtnLvRequirementWidget_C* Lvl3SettlementEntry;                       // 0x0378 (size: 0x8)

    void HasPerkReadyToUse(bool& ReadyToUse);
    void HasSettlementRequirementChanged(FSettlementRequirements CurrentSettlementRequirement, FSettlementRequirements LastUpdateSettlementRequirement, bool& HasChanged);
    void updateSettlementLevelDetails(int32 SettlementLevel);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_settlementLv_tooltip(int32 EntryPoint);
}; // Size: 0x380

#endif
