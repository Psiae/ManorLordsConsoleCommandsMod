#ifndef UE4SS_SDK_gameSummarySceren_HPP
#define UE4SS_SDK_gameSummarySceren_HPP

class UgameSummarySceren_C : public UUserWidget
{
    class UHorizontalRadioSelect_C* HorizontalRadioSelect;                            // 0x02E0 (size: 0x8)
    class URichTextBlock* overviewSummary_txt;                                        // 0x02E8 (size: 0x8)

    void getTotalPop(class APawnCPP* playerRef, int32& pop1);
    void updateSummaryContent();
}; // Size: 0x2F0

#endif
