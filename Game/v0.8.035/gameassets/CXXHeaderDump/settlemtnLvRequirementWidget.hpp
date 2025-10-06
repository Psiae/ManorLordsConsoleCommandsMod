#ifndef UE4SS_SDK_settlemtnLvRequirementWidget_HPP
#define UE4SS_SDK_settlemtnLvRequirementWidget_HPP

class UsettlemtnLvRequirementWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UImage* Image_113;                                                          // 0x02D8 (size: 0x8)
    class UTextBlock* TextBlock_11;                                                   // 0x02E0 (size: 0x8)
    FText requirementTxt;                                                             // 0x02E8 (size: 0x10)
    bool fulfilled;                                                                   // 0x02F8 (size: 0x1)

    void UpdateSettlementRequirements(FText requirementText, bool fulfilled);
    void Construct();
    void ExecuteUbergraph_settlemtnLvRequirementWidget(int32 EntryPoint);
}; // Size: 0x2F9

#endif
