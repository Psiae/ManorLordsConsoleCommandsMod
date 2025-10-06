#ifndef UE4SS_SDK_constructionGoodsWidget_HPP
#define UE4SS_SDK_constructionGoodsWidget_HPP

class UconstructionGoodsWidget_C : public UNaviSubGrid
{
    class UImage* Image;                                                              // 0x0348 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C;                                    // 0x0350 (size: 0x8)
    class UHorizontalBox* transportedRes_HB;                                          // 0x0358 (size: 0x8)
    TMap<int32, UconstructionList_Item_C*> ItemTypeWidgets;                           // 0x0360 (size: 0x50)

    FNaviSubGridLayout ComputeSubGridLayout();
    void RepopulateConstructionGoods(class ASMBuildingMaster* OurBuilding);
}; // Size: 0x3B0

#endif
