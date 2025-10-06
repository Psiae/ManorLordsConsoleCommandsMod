#ifndef UE4SS_SDK_requiredEquipment_HPP
#define UE4SS_SDK_requiredEquipment_HPP

class UrequiredEquipment_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UImage* Image_136;                                                          // 0x02D8 (size: 0x8)
    class UTextBlock* itemName_txt;                                                   // 0x02E0 (size: 0x8)
    class UTextBlock* numItems_txt;                                                   // 0x02E8 (size: 0x8)
    int32 ItemType;                                                                   // 0x02F0 (size: 0x4)
    class ARegion* Region;                                                            // 0x02F8 (size: 0x8)
    int32 numRequired;                                                                // 0x0300 (size: 0x4)
    int32 hasItems;                                                                   // 0x0304 (size: 0x4)

    void Construct();
    void ExecuteUbergraph_requiredEquipment(int32 EntryPoint);
}; // Size: 0x308

#endif
