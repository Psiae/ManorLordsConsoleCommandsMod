#ifndef UE4SS_SDK_localizedTextBox_HPP
#define UE4SS_SDK_localizedTextBox_HPP

class UlocalizedTextBox_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* TextBlock_16;                                                   // 0x0268 (size: 0x8)
    int32 FontSize;                                                                   // 0x0270 (size: 0x4)
    FName Translation Key;                                                            // 0x0274 (size: 0x8)
    bool isMainUI;                                                                    // 0x027C (size: 0x1)
    bool Text to Upper;                                                               // 0x027D (size: 0x1)

    void PreConstruct(bool IsDesignTime);
    void Translate();
    void changeText(FName newKey);
    void ExecuteUbergraph_localizedTextBox(int32 EntryPoint);
}; // Size: 0x27E

#endif
