#ifndef UE4SS_SDK_cropOption_HPP
#define UE4SS_SDK_cropOption_HPP

class UcropOption_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* cropName_txt;                                                   // 0x02E8 (size: 0x8)
    class UTextBlock* fertility_txt;                                                  // 0x02F0 (size: 0x8)
    class UImage* Image_29;                                                           // 0x02F8 (size: 0x8)
    class USizeBox* SizeBox_0;                                                        // 0x0300 (size: 0x8)
    uint8 cropID;                                                                     // 0x0308 (size: 0x1)
    class ASMBuildingMaster* building;                                                // 0x0310 (size: 0x8)

    class UWidget* Get_fertility_txt_ToolTipWidget_0();
    class UWidget* GetToolTipWidget_0();
    void Construct();
    void ExecuteUbergraph_cropOption(int32 EntryPoint);
}; // Size: 0x318

#endif
