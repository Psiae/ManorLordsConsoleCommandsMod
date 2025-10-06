#ifndef UE4SS_SDK_constructionFeedbackWidget_HPP
#define UE4SS_SDK_constructionFeedbackWidget_HPP

class UconstructionFeedbackWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UWidgetAnimation* NewAnimation;                                             // 0x02D8 (size: 0x8)
    class URichTextBlock* RichTextBlock_0;                                            // 0x02E0 (size: 0x8)
    FText textToPrint;                                                                // 0x02E8 (size: 0x10)
    FVector Pos;                                                                      // 0x02F8 (size: 0x18)
    double PlaybackSpeed;                                                             // 0x0310 (size: 0x8)

    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void ExecuteUbergraph_constructionFeedbackWidget(int32 EntryPoint);
}; // Size: 0x318

#endif
