#ifndef UE4SS_SDK_Widget_ItemCounter_HPP
#define UE4SS_SDK_Widget_ItemCounter_HPP

class UWidget_ItemCounter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UTextBlock* Amt_Txt;                                                        // 0x02D8 (size: 0x8)
    class UImage* icon_img;                                                           // 0x02E0 (size: 0x8)
    class UTextBlock* name_txt;                                                       // 0x02E8 (size: 0x8)
    int32 ItemId;                                                                     // 0x02F0 (size: 0x4)

    void UpdateCount(class ARegion* ForRegion, bool minusReservation, int32& SummedAmt);
    void Construct();
    void ExecuteUbergraph_Widget_ItemCounter(int32 EntryPoint);
}; // Size: 0x2F4

#endif
