#ifndef UE4SS_SDK_constructionFeedbackWidget_HPP
#define UE4SS_SDK_constructionFeedbackWidget_HPP

class UconstructionFeedbackWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* NewAnimation;                                             // 0x0268 (size: 0x8)
    class URichTextBlock* RichTextBlock_0;                                            // 0x0270 (size: 0x8)
    FText textToPrint;                                                                // 0x0278 (size: 0x18)
    FVector Pos;                                                                      // 0x0290 (size: 0xC)
    float PlaybackSpeed;                                                              // 0x029C (size: 0x4)

    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnAnimationFinished(const class UWidgetAnimation* Animation);
    void ExecuteUbergraph_constructionFeedbackWidget(int32 EntryPoint);
}; // Size: 0x2A0

#endif
