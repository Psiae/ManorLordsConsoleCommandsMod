#ifndef UE4SS_SDK_InputRow_HPP
#define UE4SS_SDK_InputRow_HPP

class UInputRow_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UBorder* AlternatingRowBorder;                                              // 0x0268 (size: 0x8)
    class UNamedSlot* Content1;                                                       // 0x0270 (size: 0x8)
    class UNamedSlot* Content2;                                                       // 0x0278 (size: 0x8)
    class UNamedSlot* Content2_1;                                                     // 0x0280 (size: 0x8)
    class UNamedSlot* Content2_2;                                                     // 0x0288 (size: 0x8)
    class UTextBlock* LabelText;                                                      // 0x0290 (size: 0x8)
    FText Label;                                                                      // 0x0298 (size: 0x18)
    int32 Index;                                                                      // 0x02B0 (size: 0x4)
    float MinDesiredWidth;                                                            // 0x02B4 (size: 0x4)

    void PreConstruct(bool IsDesignTime);
    void Translate();
    void ExecuteUbergraph_InputRow(int32 EntryPoint);
}; // Size: 0x2B8

#endif
