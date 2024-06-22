#ifndef UE4SS_SDK_problemBanner_HPP
#define UE4SS_SDK_problemBanner_HPP

class UproblemBanner_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* hover;                                                    // 0x0268 (size: 0x8)
    class UWidgetAnimation* lerpIn;                                                   // 0x0270 (size: 0x8)
    class UButton* Button_0;                                                          // 0x0278 (size: 0x8)
    class UTextBlock* count_spoil;                                                    // 0x0280 (size: 0x8)
    class UImage* exclam_2;                                                           // 0x0288 (size: 0x8)
    class UImage* Image_14;                                                           // 0x0290 (size: 0x8)
    class UCanvasPanel* problem_spoil;                                                // 0x0298 (size: 0x8)
    class UImage* warnBg_2;                                                           // 0x02A0 (size: 0x8)
    class UImage* warnBgHighlght;                                                     // 0x02A8 (size: 0x8)
    class UTexture2D* problemIcon;                                                    // 0x02B0 (size: 0x8)
    int32 problemID;                                                                  // 0x02B8 (size: 0x4)
    FSlateColor Tint;                                                                 // 0x02C0 (size: 0x28)
    bool showExclam;                                                                  // 0x02E8 (size: 0x1)

    void updateProblemCount(class ARegion* Region);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void BndEvt__problemWidget_Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__problemBanner_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_problemBanner(int32 EntryPoint);
}; // Size: 0x2E9

#endif
