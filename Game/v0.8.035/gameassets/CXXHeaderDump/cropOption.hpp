#ifndef UE4SS_SDK_cropOption_HPP
#define UE4SS_SDK_cropOption_HPP

class UcropOption_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class URichTextBlock* CropNameAndIcon_RichTxt;                                    // 0x02D8 (size: 0x8)
    class UTextBlock* fertility_txt;                                                  // 0x02E0 (size: 0x8)
    class USizeBox* SizeBox_0;                                                        // 0x02E8 (size: 0x8)
    uint8 cropID;                                                                     // 0x02F0 (size: 0x1)
    class ASMBuildingMaster* building;                                                // 0x02F8 (size: 0x8)

    class UWidget* Get_fertility_txt_ToolTipWidget_0();
    class UWidget* GetToolTipWidget_0();
    void Construct();
    void ExecuteUbergraph_cropOption(int32 EntryPoint);
}; // Size: 0x300

#endif
