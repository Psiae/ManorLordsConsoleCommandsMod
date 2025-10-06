#ifndef UE4SS_SDK_Widget_ItemSubcategoryTooltip_HPP
#define UE4SS_SDK_Widget_ItemSubcategoryTooltip_HPP

class UWidget_ItemSubcategoryTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class URichTextBlock* descr_RichTxt;                                              // 0x02D8 (size: 0x8)
    class UImage* Image;                                                              // 0x02E0 (size: 0x8)
    class UTextBlock* name_txt;                                                       // 0x02E8 (size: 0x8)
    class UVerticalBox* Subcategories_VB;                                             // 0x02F0 (size: 0x8)
    class UWidget_Frame_Scroll_Simple_C* Widget_Frame_Scroll_Simple;                  // 0x02F8 (size: 0x8)
    class UWidget_HeaderBg_C* Widget_HeaderBg;                                        // 0x0300 (size: 0x8)
    TArray<EItemSubcategory> SubcategoriesToDisplay;                                  // 0x0308 (size: 0x10)
    FString CustomName;                                                               // 0x0318 (size: 0x10)

    void UpdateContents(class ARegion* ForRegion, bool minusReservation, int32& SummedAmt);
    void RespawnSubcategories();
    void Construct();
    void ExecuteUbergraph_Widget_ItemSubcategoryTooltip(int32 EntryPoint);
}; // Size: 0x328

#endif
