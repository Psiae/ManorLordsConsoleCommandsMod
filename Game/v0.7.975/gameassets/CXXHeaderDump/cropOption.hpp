#ifndef UE4SS_SDK_cropOption_HPP
#define UE4SS_SDK_cropOption_HPP

class UcropOption_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* cropName_txt;                                                   // 0x0268 (size: 0x8)
    class UTextBlock* fertility_txt;                                                  // 0x0270 (size: 0x8)
    class UImage* Image_29;                                                           // 0x0278 (size: 0x8)
    class USizeBox* SizeBox_0;                                                        // 0x0280 (size: 0x8)
    uint8 cropID;                                                                     // 0x0288 (size: 0x1)
    class ASMBuildingMaster* building;                                                // 0x0290 (size: 0x8)

    class UWidget* Get_fertility_txt_ToolTipWidget_0();
    class UWidget* GetToolTipWidget_0();
    void Construct();
    void ExecuteUbergraph_cropOption(int32 EntryPoint);
}; // Size: 0x298

#endif
