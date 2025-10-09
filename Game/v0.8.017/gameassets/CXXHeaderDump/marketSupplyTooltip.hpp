#ifndef UE4SS_SDK_marketSupplyTooltip_HPP
#define UE4SS_SDK_marketSupplyTooltip_HPP

class UmarketSupplyTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* foodVarietyTxt;                                                 // 0x02E8 (size: 0x8)
    class UHorizontalBox* foodVarietyTxt_HB;                                          // 0x02F0 (size: 0x8)
    class UVerticalBox* goods_VB;                                                     // 0x02F8 (size: 0x8)
    class UTextBlock* headerItalics;                                                  // 0x0300 (size: 0x8)
    class UImage* Image;                                                              // 0x0308 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0310 (size: 0x8)
    class UImage* Image_32;                                                           // 0x0318 (size: 0x8)
    class UImage* Image_36;                                                           // 0x0320 (size: 0x8)
    class UImage* Image_72;                                                           // 0x0328 (size: 0x8)
    class UImage* Image_84;                                                           // 0x0330 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x0338 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_1;                                    // 0x0340 (size: 0x8)
    class UVerticalBox* requirements_vb;                                              // 0x0348 (size: 0x8)
    class UlocalizedTextBox_C* text_occasionalNeeds;                                  // 0x0350 (size: 0x8)
    class UTextBlock* TextBlock;                                                      // 0x0358 (size: 0x8)
    class UTextBlock* TextBlock_1;                                                    // 0x0360 (size: 0x8)
    class UTextBlock* TextBlock_125;                                                  // 0x0368 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x0370 (size: 0x8)
    TArray<int32> displayGoodTypes;                                                   // 0x0378 (size: 0x10)
    bool Show Requirement Lv;                                                         // 0x0388 (size: 0x1)
    class UTexture2D* Storage Type Icon;                                              // 0x0390 (size: 0x8)

    void updateFoodVarietyText();
    void updateMeters();
    void Construct();
    void ExecuteUbergraph_marketSupplyTooltip(int32 EntryPoint);
}; // Size: 0x398

#endif
