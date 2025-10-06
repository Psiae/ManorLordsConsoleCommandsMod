#ifndef UE4SS_SDK_ActiveProductionModifiersTooltip_HPP
#define UE4SS_SDK_ActiveProductionModifiersTooltip_HPP

class UActiveProductionModifiersTooltip_C : public UUserWidget
{
    class UDecoratedFrameWidget_C* DecoratedFrameWidget;                              // 0x02D0 (size: 0x8)
    class UHorizontalBox* GoodsProducedTitle_1;                                       // 0x02D8 (size: 0x8)
    class UImage* Image_20;                                                           // 0x02E0 (size: 0x8)
    class UlocalizedTextBox_C* ModifiersText;                                         // 0x02E8 (size: 0x8)
    class UHorizontalBox* NoModifiersEntry;                                           // 0x02F0 (size: 0x8)
    class UlocalizedTextBox_C* NoneText;                                              // 0x02F8 (size: 0x8)
    class UlocalizedTextBox_C* NoneText_1;                                            // 0x0300 (size: 0x8)
    class UVerticalBox* ProductionModifiersBox;                                       // 0x0308 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x0310 (size: 0x8)

    void UpdatePerkModifiers(class UYieldModifierEntryWidget_C* EntryWidget, EProductivityModifier Modifier, FString inModifierValue);
    FText GetDataForProductionModifier(FString ModifierTypeString, FName modifierName, class UTexture2D*& Icon);
    void GetModifierData(EProductivityModifier Modifier, FName& PerkName, FName& ModifierKey);
    void updateBuilding(class ASMBuildingMaster* building);
    void UpdateProductionModifiers();
}; // Size: 0x318

#endif
