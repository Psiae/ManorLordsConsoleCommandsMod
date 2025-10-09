#ifndef UE4SS_SDK_requiredEquipment_HPP
#define UE4SS_SDK_requiredEquipment_HPP

class UrequiredEquipment_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_136;                                                          // 0x0268 (size: 0x8)
    class UTextBlock* itemName_txt;                                                   // 0x0270 (size: 0x8)
    class UTextBlock* numItems_txt;                                                   // 0x0278 (size: 0x8)
    int32 ItemType;                                                                   // 0x0280 (size: 0x4)
    class ARegion* Region;                                                            // 0x0288 (size: 0x8)
    int32 numRequired;                                                                // 0x0290 (size: 0x4)
    int32 hasItems;                                                                   // 0x0294 (size: 0x4)

    void Construct();
    void ExecuteUbergraph_requiredEquipment(int32 EntryPoint);
}; // Size: 0x298

#endif
