#ifndef UE4SS_SDK_productionFocusWidget_HPP
#define UE4SS_SDK_productionFocusWidget_HPP

class UproductionFocusWidget_C : public UUserWidget
{
    class UHorizontalBox* HorizontalBox_18;                                           // 0x0260 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_0;                                  // 0x0268 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x0270 (size: 0x8)

    void productionFocusWidget_updateSelection(int32 goodType);
    void updateChoiceSelectionHighlight();
    void Repopulate Choices();
}; // Size: 0x278

#endif
