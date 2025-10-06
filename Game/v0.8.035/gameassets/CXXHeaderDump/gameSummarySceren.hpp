#ifndef UE4SS_SDK_gameSummarySceren_HPP
#define UE4SS_SDK_gameSummarySceren_HPP

class UgameSummarySceren_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UHorizontalRadioSelect_C* HorizontalRadioSelect;                            // 0x02D8 (size: 0x8)
    class URichTextBlock* overviewSummary_txt;                                        // 0x02E0 (size: 0x8)
    class USizeBox* SizeBox_0;                                                        // 0x02E8 (size: 0x8)

    void ApplyPlatformBehaviour();
    void getTotalPop(class APawnCPP* playerRef, int32& pop1);
    void updateSummaryContent();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_gameSummarySceren(int32 EntryPoint);
}; // Size: 0x2F0

#endif
