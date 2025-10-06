#ifndef UE4SS_SDK_regionProductionGraphLabelWidget_HPP
#define UE4SS_SDK_regionProductionGraphLabelWidget_HPP

class UregionProductionGraphLabelWidget_C : public UProductionGraphLabel
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UBorder* LabelBorder;                                                       // 0x02D8 (size: 0x8)
    class UTextBlock* LabelText;                                                      // 0x02E0 (size: 0x8)
    class UImage* SeasonIcon;                                                         // 0x02E8 (size: 0x8)
    class UScaleBox* SeasonIconSB;                                                    // 0x02F0 (size: 0x8)

    void InitFromText(const FText& InText);
    void InitFromDate(const int32 InDay, const int32 InMonth, const int32 InYear);
    void ExecuteUbergraph_regionProductionGraphLabelWidget(int32 EntryPoint);
}; // Size: 0x2F8

#endif
