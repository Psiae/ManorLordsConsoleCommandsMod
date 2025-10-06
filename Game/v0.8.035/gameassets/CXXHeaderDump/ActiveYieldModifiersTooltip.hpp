#ifndef UE4SS_SDK_ActiveYieldModifiersTooltip_HPP
#define UE4SS_SDK_ActiveYieldModifiersTooltip_HPP

class UActiveYieldModifiersTooltip_C : public UUserWidget
{
    class UDecoratedFrameWidget_C* DecoratedFrameWidget;                              // 0x02D0 (size: 0x8)
    class UlocalizedTextBox_C* GoodsProducedText_2;                                   // 0x02D8 (size: 0x8)
    class UHorizontalBox* GoodsProducedTitle_1;                                       // 0x02E0 (size: 0x8)
    class UImage* Image_20;                                                           // 0x02E8 (size: 0x8)
    class UHorizontalBox* NoModifiersEntry;                                           // 0x02F0 (size: 0x8)
    class UlocalizedTextBox_C* NoneText;                                              // 0x02F8 (size: 0x8)
    class UlocalizedTextBox_C* NoneText_1;                                            // 0x0300 (size: 0x8)
    class UImage* ProductionIcon_2;                                                   // 0x0308 (size: 0x8)
    class UVerticalBox* YieldModifiersBox;                                            // 0x0310 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x0318 (size: 0x8)

    FText GetDataForYieldModifierType(FString PerkType, FName PerkName, class UTexture2D*& Icon);
    void updateBuilding();
    void UpdateYieldModifiers();
}; // Size: 0x320

#endif
