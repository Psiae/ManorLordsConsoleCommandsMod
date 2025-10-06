#ifndef UE4SS_SDK_RegionWidget_HPP
#define UE4SS_SDK_RegionWidget_HPP

class URegionWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02D8 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02E0 (size: 0x8)
    class UImage* Image_3;                                                            // 0x02E8 (size: 0x8)
    class UImage* Image_4;                                                            // 0x02F0 (size: 0x8)
    class UTextBlock* region_name;                                                    // 0x02F8 (size: 0x8)
    class UImage* RegionIcon;                                                         // 0x0300 (size: 0x8)
    class UHorizontalBox* willingToExport;                                            // 0x0308 (size: 0x8)
    class UHorizontalBox* willingToImport_HB;                                         // 0x0310 (size: 0x8)
    class ARegion* Region;                                                            // 0x0318 (size: 0x8)
    class UBigMap3d_C* father;                                                        // 0x0320 (size: 0x8)
    TArray<class UInventory_Item_C*> Items;                                           // 0x0328 (size: 0x10)
    class ASMBuildingMaster* building;                                                // 0x0338 (size: 0x8)
    class UObject* tradeRoutePlanner;                                                 // 0x0340 (size: 0x8)

    bool flipBool(bool InBool);
    void setToHome();
    void Construct();
    void ExecuteUbergraph_RegionWidget(int32 EntryPoint);
}; // Size: 0x348

#endif
