#ifndef UE4SS_SDK_ProductionTimeEntry_HPP
#define UE4SS_SDK_ProductionTimeEntry_HPP

class UProductionTimeEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UImage* CategoryColor;                                                      // 0x02D8 (size: 0x8)
    class UlocalizedTextBox_C* CategoryText;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* ValueText;                                                      // 0x02E8 (size: 0x8)

    void SetValue(int32 PercentValue);
    void InitEntry(FName CategoryName, FColor Color);
    void Construct();
    void ExecuteUbergraph_ProductionTimeEntry(int32 EntryPoint);
}; // Size: 0x2F0

#endif
