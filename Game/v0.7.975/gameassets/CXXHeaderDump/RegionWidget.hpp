#ifndef UE4SS_SDK_RegionWidget_HPP
#define UE4SS_SDK_RegionWidget_HPP

class URegionWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0268 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0270 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0278 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0280 (size: 0x8)
    class UTextBlock* region_name;                                                    // 0x0288 (size: 0x8)
    class UImage* RegionIcon;                                                         // 0x0290 (size: 0x8)
    class UHorizontalBox* willingToExport;                                            // 0x0298 (size: 0x8)
    class UHorizontalBox* willingToImport_HB;                                         // 0x02A0 (size: 0x8)
    class ARegion* Region;                                                            // 0x02A8 (size: 0x8)
    class UBigMap3d_C* father;                                                        // 0x02B0 (size: 0x8)
    TArray<class UInventory_Item_C*> Items;                                           // 0x02B8 (size: 0x10)
    class ASMBuildingMaster* building;                                                // 0x02C8 (size: 0x8)
    class UObject* tradeRoutePlanner;                                                 // 0x02D0 (size: 0x8)

    bool flipBool(bool InBool);
    void setToHome();
    void Construct();
    void ExecuteUbergraph_RegionWidget(int32 EntryPoint);
}; // Size: 0x2D8

#endif
