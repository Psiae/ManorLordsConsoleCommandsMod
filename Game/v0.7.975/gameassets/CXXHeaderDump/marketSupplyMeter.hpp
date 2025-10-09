#ifndef UE4SS_SDK_marketSupplyMeter_HPP
#define UE4SS_SDK_marketSupplyMeter_HPP

class UmarketSupplyMeter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UHorizontalBox* clothes_hb;                                                 // 0x0268 (size: 0x8)
    class UImage* goodIcon;                                                           // 0x0270 (size: 0x8)
    class UImage* Image_58;                                                           // 0x0278 (size: 0x8)
    class UProgressBar* ProgressBar_5;                                                // 0x0280 (size: 0x8)
    class UHorizontalBox* requirementLv;                                              // 0x0288 (size: 0x8)
    class UTextBlock* requirementLv_txt;                                              // 0x0290 (size: 0x8)
    class UTextBlock* TextBlock_7;                                                    // 0x0298 (size: 0x8)
    class UTextBlock* TextBlock_68;                                                   // 0x02A0 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x02A8 (size: 0x8)
    int32 goodType;                                                                   // 0x02B0 (size: 0x4)
    int32 supply;                                                                     // 0x02B4 (size: 0x4)
    int32 demand;                                                                     // 0x02B8 (size: 0x4)
    bool showRequirementLv;                                                           // 0x02BC (size: 0x1)

    void Construct();
    void updateMeter();
    void ExecuteUbergraph_marketSupplyMeter(int32 EntryPoint);
}; // Size: 0x2BD

#endif
