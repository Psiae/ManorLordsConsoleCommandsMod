#ifndef UE4SS_SDK_InputRow_HPP
#define UE4SS_SDK_InputRow_HPP

class UInputRow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UBorder* AlternatingRowBorder;                                              // 0x02D8 (size: 0x8)
    class UNamedSlot* Content1;                                                       // 0x02E0 (size: 0x8)
    class UNamedSlot* Content2_1;                                                     // 0x02E8 (size: 0x8)
    class UTextBlock* LabelText;                                                      // 0x02F0 (size: 0x8)
    FText Label;                                                                      // 0x02F8 (size: 0x10)
    int32 Index;                                                                      // 0x0308 (size: 0x4)
    double MinDesiredWidth;                                                           // 0x0310 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void Translate();
    void ExecuteUbergraph_InputRow(int32 EntryPoint);
}; // Size: 0x318

#endif
