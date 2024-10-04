#ifndef UE4SS_SDK_traitWidget_HPP
#define UE4SS_SDK_traitWidget_HPP

class UtraitWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* TextBlock_20;                                                   // 0x02E8 (size: 0x8)
    FName traitName;                                                                  // 0x02F0 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_traitWidget(int32 EntryPoint);
}; // Size: 0x2F8

#endif
