#ifndef UE4SS_SDK_Inventory_Item_HPP
#define UE4SS_SDK_Inventory_Item_HPP

class UInventory_Item_C : public UUserWidget
{
    class UTextBlock* itemAmt;                                                        // 0x02D0 (size: 0x8)
    class UImage* ItemImage;                                                          // 0x02D8 (size: 0x8)
    class UMD_NaviAutoTooltip_C* MD_NaviAutoTooltip;                                  // 0x02E0 (size: 0x8)
    class UOverlay* Overlay_0;                                                        // 0x02E8 (size: 0x8)
    int32 ItemType;                                                                   // 0x02F0 (size: 0x4)
    int32 amt;                                                                        // 0x02F4 (size: 0x4)
    class ASMBuildingMaster* building;                                                // 0x02F8 (size: 0x8)
    int32 spoilageIndex;                                                              // 0x0300 (size: 0x4)

    void updateInventoryItem();
}; // Size: 0x304

#endif
