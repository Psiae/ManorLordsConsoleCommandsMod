#ifndef UE4SS_SDK_ProductivityPanel_Tooltip_HPP
#define UE4SS_SDK_ProductivityPanel_Tooltip_HPP

class UProductivityPanel_Tooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class URichTextBlock* factors;                                                    // 0x02D8 (size: 0x8)
    class UVerticalBox* Factors_VB;                                                   // 0x02E0 (size: 0x8)
    class UTextBlock* FactorsDesc;                                                    // 0x02E8 (size: 0x8)
    class UImage* Image_111;                                                          // 0x02F0 (size: 0x8)
    class UTextBlock* ProductivityLabel;                                              // 0x02F8 (size: 0x8)
    class UTextBlock* ProductivityLabel_1;                                            // 0x0300 (size: 0x8)
    class UTextBlock* ProductivityLabel_Value;                                        // 0x0308 (size: 0x8)
    class UTextBlock* ProductivityLable_tier;                                         // 0x0310 (size: 0x8)
    class UHorizontalBox* title_hb;                                                   // 0x0318 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x0320 (size: 0x8)

    void BuildStringForFactor(FProductivityFactor InFactor, FText& OutString);
    void Construct();
    void UpdateBars();
    void SetBuilding(class ASMBuildingMaster* building);
    void ExecuteUbergraph_ProductivityPanel_Tooltip(int32 EntryPoint);
}; // Size: 0x328

#endif
