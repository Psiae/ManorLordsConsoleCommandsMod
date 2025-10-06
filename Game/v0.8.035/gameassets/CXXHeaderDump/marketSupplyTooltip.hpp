#ifndef UE4SS_SDK_marketSupplyTooltip_HPP
#define UE4SS_SDK_marketSupplyTooltip_HPP

class UmarketSupplyTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UDecoratedFrameWidget_C* DecoratedFrameWidget;                              // 0x02D8 (size: 0x8)
    class UTextBlock* foodVarietyTxt;                                                 // 0x02E0 (size: 0x8)
    class UHorizontalBox* foodVarietyTxt_HB;                                          // 0x02E8 (size: 0x8)
    class UVerticalBox* goods_VB;                                                     // 0x02F0 (size: 0x8)
    class UTextBlock* headerItalics;                                                  // 0x02F8 (size: 0x8)
    class UImage* Image;                                                              // 0x0300 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0308 (size: 0x8)
    class UImage* Image_36;                                                           // 0x0310 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x0318 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_1;                                    // 0x0320 (size: 0x8)
    class UmarketSupplyMeter_C* marketSupplyMeter;                                    // 0x0328 (size: 0x8)
    class UmarketSupplyMeter_C* marketSupplyMeter_1;                                  // 0x0330 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x0338 (size: 0x8)
    TArray<int32> displayGoodTypes;                                                   // 0x0340 (size: 0x10)
    bool Show Requirement Lv;                                                         // 0x0350 (size: 0x1)
    class UTexture2D* Storage Type Icon;                                              // 0x0358 (size: 0x8)

    void updateFoodVarietyText();
    void updateMeters();
    void Construct();
    void ExecuteUbergraph_marketSupplyTooltip(int32 EntryPoint);
}; // Size: 0x360

#endif
