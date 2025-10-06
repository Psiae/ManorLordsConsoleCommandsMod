#ifndef UE4SS_SDK_paraPick_HPP
#define UE4SS_SDK_paraPick_HPP

class UparaPick_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UTextBlock* PickTxt;                                                        // 0x02D8 (size: 0x8)
    FString Item;                                                                     // 0x02E0 (size: 0x10)
    EParaPick paraPick;                                                               // 0x02F0 (size: 0x1)

    void Construct();
    void ExecuteUbergraph_paraPick(int32 EntryPoint);
}; // Size: 0x2F1

#endif
