#ifndef UE4SS_SDK_ProductionCategoryTooltip_HPP
#define UE4SS_SDK_ProductionCategoryTooltip_HPP

class UProductionCategoryTooltip_C : public UUserWidget
{
    class UDecoratedFrameWidget_C* DecoratedFrameWidget;                              // 0x02D0 (size: 0x8)
    class UImage* Image_20;                                                           // 0x02D8 (size: 0x8)
    class UVerticalBox* LaborEntriesBox;                                              // 0x02E0 (size: 0x8)
    class UVerticalBox* OtherEntriesBox;                                              // 0x02E8 (size: 0x8)

    void AddOtherCategoryEntry(class UUserWidget* CategoryWidget);
    void ClearCategoryEntries();
    void AddLaborCategoryEntry(class UUserWidget* CategoryWidget);
}; // Size: 0x2F0

#endif
