#ifndef UE4SS_SDK_regionProductionGraphDataPoint_Widget_HPP
#define UE4SS_SDK_regionProductionGraphDataPoint_Widget_HPP

class UregionProductionGraphDataPoint_Widget_C : public UGraphDataPoint
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E0 (size: 0x8)
    class UWidgetAnimation* show;                                                     // 0x03E8 (size: 0x8)
    class UImage* GoodImage;                                                          // 0x03F0 (size: 0x8)
    class UImage* GoodImageBackground;                                                // 0x03F8 (size: 0x8)
    class UOverlay* Icon_Overlay;                                                     // 0x0400 (size: 0x8)
    class USizeBox* PointSB;                                                          // 0x0408 (size: 0x8)
    class UOverlay* Stack_Overlay;                                                    // 0x0410 (size: 0x8)
    class UTextBlock* StackCountText;                                                 // 0x0418 (size: 0x8)
    class UImage* StackImage;                                                         // 0x0420 (size: 0x8)
    FLogDate date;                                                                    // 0x0428 (size: 0xC)

    void InitFromGood(const FGood& InGood, const FLinearColor& InColour);
    void Construct();
    void InitFromGoods(const TArray<FGood>& InGoods, const FLinearColor& InColour);
    void ExecuteUbergraph_regionProductionGraphDataPoint_Widget(int32 EntryPoint);
}; // Size: 0x434

#endif
