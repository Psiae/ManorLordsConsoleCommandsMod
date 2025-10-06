#ifndef UE4SS_SDK_FamilyConsumptionTooltip_HPP
#define UE4SS_SDK_FamilyConsumptionTooltip_HPP

class UFamilyConsumptionTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UImage* BorderExterior;                                                     // 0x02D8 (size: 0x8)
    class UImage* BorderInterior;                                                     // 0x02E0 (size: 0x8)
    class UVerticalBox* ConsumptionList_Vb;                                           // 0x02E8 (size: 0x8)
    class UImage* Image_334;                                                          // 0x02F0 (size: 0x8)
    class UTextBlock* name_txt;                                                       // 0x02F8 (size: 0x8)

    void UpdateConsumptionData(TArray<FFamilyConsumptionData>& ConsumptionData);
    void RespawnConsumptionListAndUpdate(TArray<FFamilyConsumptionData>& ConsumptionData);
    void Construct();
    void ExecuteUbergraph_FamilyConsumptionTooltip(int32 EntryPoint);
}; // Size: 0x300

#endif
