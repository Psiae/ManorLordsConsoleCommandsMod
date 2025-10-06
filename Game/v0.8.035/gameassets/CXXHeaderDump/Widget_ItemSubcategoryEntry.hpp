#ifndef UE4SS_SDK_Widget_ItemSubcategoryEntry_HPP
#define UE4SS_SDK_Widget_ItemSubcategoryEntry_HPP

class UWidget_ItemSubcategoryEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UImage* Image_41;                                                           // 0x02D8 (size: 0x8)
    class UWrapBox* ItemListWrap;                                                     // 0x02E0 (size: 0x8)
    class UTextBlock* SubcategoryName_Txt;                                            // 0x02E8 (size: 0x8)
    EItemSubcategory Subcategory;                                                     // 0x02F0 (size: 0x1)

    void UpdateAllSubcategoryCounters(class ARegion* ForRegion, bool minusReservation, int32& SummedAmt);
    void RecreateItemList();
    void Construct();
    void ExecuteUbergraph_Widget_ItemSubcategoryEntry(int32 EntryPoint);
}; // Size: 0x2F1

#endif
