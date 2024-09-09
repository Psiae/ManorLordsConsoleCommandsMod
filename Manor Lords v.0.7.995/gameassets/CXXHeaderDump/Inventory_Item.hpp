#ifndef UE4SS_SDK_Inventory_Item_HPP
#define UE4SS_SDK_Inventory_Item_HPP

class UInventory_Item_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UTextBlock* itemAmt;                                                        // 0x02E8 (size: 0x8)
    class UImage* itemImage;                                                          // 0x02F0 (size: 0x8)
    class UOverlay* Overlay_0;                                                        // 0x02F8 (size: 0x8)
    int32 ItemType;                                                                   // 0x0300 (size: 0x4)
    int32 amt;                                                                        // 0x0304 (size: 0x4)
    class URegionWidget_C* RegionWidget;                                              // 0x0308 (size: 0x8)
    bool Buy;                                                                         // 0x0310 (size: 0x1)
    class ASMBuildingMaster* building;                                                // 0x0318 (size: 0x8)
    int32 spoilageIndex;                                                              // 0x0320 (size: 0x4)

    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Inventory_Item(int32 EntryPoint);
}; // Size: 0x324

#endif
