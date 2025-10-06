#ifndef UE4SS_SDK_progressTrackingTooltip_HPP
#define UE4SS_SDK_progressTrackingTooltip_HPP

class UprogressTrackingTooltip_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UBorder* Border_Pattern;                                                    // 0x02D8 (size: 0x8)
    class URichTextBlock* descr_RichTxt;                                              // 0x02E0 (size: 0x8)
    class UImage* Image;                                                              // 0x02E8 (size: 0x8)
    class UImage* Image_0;                                                            // 0x02F0 (size: 0x8)
    class URichTextBlock* name_txt;                                                   // 0x02F8 (size: 0x8)
    class UVerticalBox* quests_VB;                                                    // 0x0300 (size: 0x8)
    class UTextBlock* TextBlock_59;                                                   // 0x0308 (size: 0x8)
    FName focus;                                                                      // 0x0310 (size: 0x8)

    void updateTrackedQuests(TArray<FQuest>& quests);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_progressTrackingTooltip(int32 EntryPoint);
}; // Size: 0x318

#endif
