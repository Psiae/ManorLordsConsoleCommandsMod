#ifndef UE4SS_SDK_marketSupplyTooltip_HPP
#define UE4SS_SDK_marketSupplyTooltip_HPP

class UmarketSupplyTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UVerticalBox* goods_VB;                                                     // 0x0268 (size: 0x8)
    class UImage* Image_32;                                                           // 0x0270 (size: 0x8)
    class UImage* Image_72;                                                           // 0x0278 (size: 0x8)
    class UVerticalBox* requirements_vb;                                              // 0x0280 (size: 0x8)
    class UlocalizedTextBox_C* text_occasionalNeeds;                                  // 0x0288 (size: 0x8)
    class UTextBlock* TextBlock;                                                      // 0x0290 (size: 0x8)
    class UTextBlock* TextBlock_1;                                                    // 0x0298 (size: 0x8)
    class UTextBlock* TextBlock_125;                                                  // 0x02A0 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x02A8 (size: 0x8)
    TArray<int32> displayGoodTypes;                                                   // 0x02B0 (size: 0x10)
    bool Show Requirement Lv;                                                         // 0x02C0 (size: 0x1)

    void Construct();
    void updateMeters();
    void ExecuteUbergraph_marketSupplyTooltip(int32 EntryPoint);
}; // Size: 0x2C1

#endif
