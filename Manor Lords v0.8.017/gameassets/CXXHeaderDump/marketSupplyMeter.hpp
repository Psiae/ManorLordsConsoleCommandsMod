#ifndef UE4SS_SDK_marketSupplyMeter_HPP
#define UE4SS_SDK_marketSupplyMeter_HPP

class UmarketSupplyMeter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* goodIcon;                                                           // 0x02E8 (size: 0x8)
    class UImage* Image;                                                              // 0x02F0 (size: 0x8)
    class UImage* Image_58;                                                           // 0x02F8 (size: 0x8)
    class UImage* Image_79;                                                           // 0x0300 (size: 0x8)
    class UTextBlock* overstock_txt;                                                  // 0x0308 (size: 0x8)
    class UProgressBar* ProgressBar_5;                                                // 0x0310 (size: 0x8)
    class UHorizontalBox* requirementLv;                                              // 0x0318 (size: 0x8)
    class UTextBlock* requirementLv_txt;                                              // 0x0320 (size: 0x8)
    class UHorizontalBox* suppliedPlots_HB;                                           // 0x0328 (size: 0x8)
    class UTextBlock* TextBlock_68;                                                   // 0x0330 (size: 0x8)
    class UTextBlock* txt_stored;                                                     // 0x0338 (size: 0x8)
    class UTextBlock* txt_supplied;                                                   // 0x0340 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x0348 (size: 0x8)
    int32 goodType;                                                                   // 0x0350 (size: 0x4)
    int32 supplyStored;                                                               // 0x0354 (size: 0x4)
    int32 demand;                                                                     // 0x0358 (size: 0x4)
    bool showRequirementLv;                                                           // 0x035C (size: 0x1)
    int32 supplyVirtual;                                                              // 0x0360 (size: 0x4)
    class UTexture2D* StorageTypeIcon;                                                // 0x0368 (size: 0x8)

    void updateOverstockTxt();
    void updateMeter();
    void Construct();
    void ExecuteUbergraph_marketSupplyMeter(int32 EntryPoint);
}; // Size: 0x370

#endif
