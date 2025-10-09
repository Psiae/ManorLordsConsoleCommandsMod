#ifndef UE4SS_SDK_SettingRow_HPP
#define UE4SS_SDK_SettingRow_HPP

class USettingRow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UBorder* AlternatingRowBorder;                                              // 0x0268 (size: 0x8)
    class USizeBox* ContentSize;                                                      // 0x0270 (size: 0x8)
    class UTextBlock* LabelText;                                                      // 0x0278 (size: 0x8)
    class UNamedSlot* SettingContent;                                                 // 0x0280 (size: 0x8)
    FText Label;                                                                      // 0x0288 (size: 0x18)
    int32 Index;                                                                      // 0x02A0 (size: 0x4)
    float MinDesiredWidth;                                                            // 0x02A4 (size: 0x4)

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_SettingRow(int32 EntryPoint);
}; // Size: 0x2A8

#endif
