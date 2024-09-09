#ifndef UE4SS_SDK_localizedTextBox_HPP
#define UE4SS_SDK_localizedTextBox_HPP

class UlocalizedTextBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* TextBlock_16;                                                   // 0x02E8 (size: 0x8)
    int32 FontSize;                                                                   // 0x02F0 (size: 0x4)
    FName Translation Key;                                                            // 0x02F4 (size: 0x8)
    bool isMainUI;                                                                    // 0x02FC (size: 0x1)
    bool Text to Upper;                                                               // 0x02FD (size: 0x1)

    void PreConstruct(bool IsDesignTime);
    void Translate();
    void changeText(FName NewKey);
    void ExecuteUbergraph_localizedTextBox(int32 EntryPoint);
}; // Size: 0x2FE

#endif
