#ifndef UE4SS_SDK_equipmentStat_HPP
#define UE4SS_SDK_equipmentStat_HPP

class UequipmentStat_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* itemIcon;                                                           // 0x02E8 (size: 0x8)
    class UTextBlock* statsTxt;                                                       // 0x02F0 (size: 0x8)
    int32 goodID;                                                                     // 0x02F8 (size: 0x4)

    void updateHas(int32 has);
    void updateStats(int32 has, int32 needs);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_equipmentStat(int32 EntryPoint);
}; // Size: 0x2FC

#endif
