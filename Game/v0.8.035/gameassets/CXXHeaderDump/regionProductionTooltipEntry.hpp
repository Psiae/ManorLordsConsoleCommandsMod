#ifndef UE4SS_SDK_regionProductionTooltipEntry_HPP
#define UE4SS_SDK_regionProductionTooltipEntry_HPP

class UregionProductionTooltipEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class URichTextBlock* ConsumtionText;                                             // 0x02D8 (size: 0x8)
    class UImage* ItemImage;                                                          // 0x02E0 (size: 0x8)
    class UTextBlock* ItemName;                                                       // 0x02E8 (size: 0x8)
    class URichTextBlock* ProductionText;                                             // 0x02F0 (size: 0x8)
    class UDataTable* ItemsDT;                                                        // 0x02F8 (size: 0x8)
    int32 Good;                                                                       // 0x0300 (size: 0x4)

    void PreConstruct(bool IsDesignTime);
    void InitialiseFromGood(const int32& InGood);
    void SetProduction(int32 Val);
    void SetConsumption(int32 Val);
    void SetStock(int32 InGood);
    void ExecuteUbergraph_regionProductionTooltipEntry(int32 EntryPoint);
}; // Size: 0x304

#endif
