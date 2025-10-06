#ifndef UE4SS_SDK_regionProductionGraphTooltipWidget_HPP
#define UE4SS_SDK_regionProductionGraphTooltipWidget_HPP

class UregionProductionGraphTooltipWidget_C : public UProductionPanelTooltip
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UVerticalBox* Entries;                                                      // 0x02D8 (size: 0x8)
    class UBorder* LabelBorder;                                                       // 0x02E0 (size: 0x8)
    class UTextBlock* LabelText;                                                      // 0x02E8 (size: 0x8)
    class UTextBlock* OverflowText;                                                   // 0x02F0 (size: 0x8)
    class UImage* SeasonIcon;                                                         // 0x02F8 (size: 0x8)
    class UScaleBox* SeasonIconSB;                                                    // 0x0300 (size: 0x8)
    class UVerticalBox* ToolTip;                                                      // 0x0308 (size: 0x8)
    TArray<class UUserWidget*> AllEntries;                                            // 0x0310 (size: 0x10)
    int32 MaximumEntryCount;                                                          // 0x0320 (size: 0x4)

    void UpdateOverflowVisibility();
    void updateDate(const FLogDate& LogDate);
    void GetOrCreateEntryForGood(int32 InGood, class UregionProductionTooltipEntry_C*& OutEntry);
    void InitFromEntry(const FLogDate& InDate, const TArray<FGood>& InProduction, const TArray<FGood>& InConsumption);
    void InitFromStockCount(const FLogDate& InDate, const TArray<FGood>& InStock);
    void ExecuteUbergraph_regionProductionGraphTooltipWidget(int32 EntryPoint);
}; // Size: 0x324

#endif
