#ifndef UE4SS_SDK_mineCollapseChance_HPP
#define UE4SS_SDK_mineCollapseChance_HPP

class UmineCollapseChance_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class URichTextBlock* collapsechancetext;                                         // 0x02D8 (size: 0x8)
    class UImage* collapseIcon;                                                       // 0x02E0 (size: 0x8)
    class UImage* Image_22;                                                           // 0x02E8 (size: 0x8)
    class UHorizontalBox* MineCollapseChance_Container;                               // 0x02F0 (size: 0x8)
    class UOverlay* Overlay_0;                                                        // 0x02F8 (size: 0x8)
    int32 CloseProximityMines;                                                        // 0x0300 (size: 0x4)
    double MaintenanceEffect;                                                         // 0x0308 (size: 0x8)
    double FinalChance;                                                               // 0x0310 (size: 0x8)
    FText TooltipTextFinal;                                                           // 0x0318 (size: 0x10)
    double ChanceThisEffect;                                                          // 0x0328 (size: 0x8)

    void UpdateCollapseChanceDetails(TMap<ECollapseModifier, double> Collapse Modifiers, bool bIsDailyChance);
    void ExecuteUbergraph_mineCollapseChance(int32 EntryPoint);
}; // Size: 0x330

#endif
