#ifndef UE4SS_SDK_productionFocusWidget_HPP
#define UE4SS_SDK_productionFocusWidget_HPP

class UproductionFocusWidget_C : public UUserWidget
{
    class UHorizontalBox* HorizontalBox_18;                                           // 0x02E0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_0;                                  // 0x02E8 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x02F0 (size: 0x8)

    void productionFocusWidget_updateSelection(int32 goodType);
    void updateChoiceSelectionHighlight();
    void Repopulate Choices();
}; // Size: 0x2F8

#endif
