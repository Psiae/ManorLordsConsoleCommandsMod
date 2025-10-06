#ifndef UE4SS_SDK_TimeAllocationTrackerWidget_HPP
#define UE4SS_SDK_TimeAllocationTrackerWidget_HPP

class UTimeAllocationTrackerWidget_C : public UUserWidget
{
    class UDecoratedFrameWidget_C* DecoratedFrameWidget;                              // 0x02D0 (size: 0x8)
    class UVerticalBox* EntriesBox;                                                   // 0x02D8 (size: 0x8)
    class UImage* Image_77;                                                           // 0x02E0 (size: 0x8)
    class UlocalizedTextBox_C* ProductionTimeText;                                    // 0x02E8 (size: 0x8)
    class UHorizontalBox* ProductionTimeTitle;                                        // 0x02F0 (size: 0x8)
    class UTextBlock* ProductivityValueText;                                          // 0x02F8 (size: 0x8)
    class UHorizontalBox* TimeSliceBox;                                               // 0x0300 (size: 0x8)
    class UImage* underline_img;                                                      // 0x0308 (size: 0x8)
    TArray<class UProductionTimeEntry_C*> EntryWidgets;                               // 0x0310 (size: 0x10)
    class ASMBuildingMaster* building;                                                // 0x0320 (size: 0x8)
    TArray<FProductionTimeEntry> Entries;                                             // 0x0328 (size: 0x10)
    double TotalTime;                                                                 // 0x0338 (size: 0x8)
    TArray<double> CategoryPercentages;                                               // 0x0340 (size: 0x10)
    TArray<int32> DisplayPercentages;                                                 // 0x0350 (size: 0x10)
    class UProductionCategoryTooltip_C* CategoryTooltip;                              // 0x0360 (size: 0x8)
    int32 TotalLaborPercentage;                                                       // 0x0368 (size: 0x4)

    void UpdateProductivityModifiers();
    void GetTotalTime(int32& Time);
    void SetBuilding(class ASMBuildingMaster* building);
    void SetTimeSliceSize(class UWidget* Widget, float InSize_Value);
    void UpdateTimeSliceWidget();
    void CalculateTimePercentagesForEntries();
    void AddCategoryEntries();
}; // Size: 0x36C

#endif
