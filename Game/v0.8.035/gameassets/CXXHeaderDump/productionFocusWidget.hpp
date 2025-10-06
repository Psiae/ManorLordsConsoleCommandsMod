#ifndef UE4SS_SDK_productionFocusWidget_HPP
#define UE4SS_SDK_productionFocusWidget_HPP

class UproductionFocusWidget_C : public UNaviSubGrid
{
    class UHorizontalBox* HorizontalBox_18;                                           // 0x0348 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_0;                                  // 0x0350 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x0358 (size: 0x8)

    FNaviSubGridLayout ComputeSubGridLayout();
    void productionFocusWidget_updateSelection(int32 goodType);
    void updateChoiceSelectionHighlight();
    void Repopulate Choices();
}; // Size: 0x360

#endif
