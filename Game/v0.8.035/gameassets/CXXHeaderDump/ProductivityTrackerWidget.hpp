#ifndef UE4SS_SDK_ProductivityTrackerWidget_HPP
#define UE4SS_SDK_ProductivityTrackerWidget_HPP

class UProductivityTrackerWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UImage* Image;                                                              // 0x02D8 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02E0 (size: 0x8)
    class UImage* Image_172;                                                          // 0x02E8 (size: 0x8)
    class UImage* LaborSpeed_arrow;                                                   // 0x02F0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_1;                                    // 0x02F8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_97;                                   // 0x0300 (size: 0x8)
    class UHorizontalBox* ProductionBox;                                              // 0x0308 (size: 0x8)
    class UProductivityPanel_C* ProductivityBoxWidget;                                // 0x0310 (size: 0x8)
    class UTextBlock* ProductivityValueText;                                          // 0x0318 (size: 0x8)
    class UImage* underline_img;                                                      // 0x0320 (size: 0x8)
    class UImage* underline_img_1;                                                    // 0x0328 (size: 0x8)
    class UImage* underline_img_2;                                                    // 0x0330 (size: 0x8)
    class UHorizontalBox* YieldBox;                                                   // 0x0338 (size: 0x8)
    class UTextBlock* YieldModifierValueText;                                         // 0x0340 (size: 0x8)
    class UlocalizedTextBox_C* YieldResultText;                                       // 0x0348 (size: 0x8)
    class UGoodProductionTrackerWidget_C* GoodsProductionTooltipWidget;               // 0x0350 (size: 0x8)
    class ASMBuildingMaster* CurrentBuilding;                                         // 0x0358 (size: 0x8)
    int64 SelectedTimePeriod;                                                         // 0x0360 (size: 0x8)
    TMap<int32, int32> GoodsProducedMap;                                              // 0x0368 (size: 0x50)
    bool AreGoodsSeasonal;                                                            // 0x03B8 (size: 0x1)
    int32 AverageYield;                                                               // 0x03BC (size: 0x4)
    int64 AverageYieldTime;                                                           // 0x03C0 (size: 0x8)
    int32 TotalYield;                                                                 // 0x03C8 (size: 0x4)
    double GoodYieldThreshold;                                                        // 0x03D0 (size: 0x8)
    double PoorYieldThreshold;                                                        // 0x03D8 (size: 0x8)
    double TerribleYieldThreshold;                                                    // 0x03E0 (size: 0x8)
    double AbysmalYieldThreshold;                                                     // 0x03E8 (size: 0x8)
    double GreatYieldThreshold;                                                       // 0x03F0 (size: 0x8)
    double ExcellentYieldThreshold;                                                   // 0x03F8 (size: 0x8)
    TArray<FName> ComboOptionText;                                                    // 0x0400 (size: 0x10)
    TMap<int32, int32> CurrentlyRelevantProducedGoodsMap;                             // 0x0410 (size: 0x50)
    double LastTimeLaborTimeValueWasUpdated;                                          // 0x0460 (size: 0x8)

    void UpdateLaborSpeedArrow();
    void shouldShowCraftingSpeed();
    void UpdateLaborTimeValue();
    class UWidget* GetProductionModifierTooltip();
    void RecalculateTotalYieldAndThresholds();
    void UpdateProducedGoodMaps();
    void UpdateProductivityBoxWidget();
    class UWidget* GetYieldModifierTooltip();
    void SetYieldModifierText();
    class UWidget* GetProductionTimeTooltip();
    void CalculateModifiedAverageYield(int32 yield, int32& ModifiedYield);
    void ModifyAverageYieldByAge(int32 Average Yield , int32& Modified Average Yield);
    void SetAverageYieldTime(int64& YieldTime);
    void CalculateYieldStatus(int32& YieldStatus);
    void UpdateYieldStatusText();
    void GetPercentageOfAverageYield(double Percentage, double& Result);
    void SetYieldThresholds();
    void CalculateAverageTotalYield();
    void UpdateTooltipWidget(int32 ItemType);
    void SetTimePeriod();
    void CalculateTotalYieldAndSetText();
    void updateTooltip();
    void SetCurrentBuilding(class ASMBuildingMaster* building);
    class UWidget* UpdateGoodsTooltip();
    void Construct();
    void ExecuteUbergraph_ProductivityTrackerWidget(int32 EntryPoint);
}; // Size: 0x468

#endif
