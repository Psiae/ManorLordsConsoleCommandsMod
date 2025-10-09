#ifndef UE4SS_SDK_problemBanner_HPP
#define UE4SS_SDK_problemBanner_HPP

class UproblemBanner_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* hover;                                                    // 0x02E8 (size: 0x8)
    class UWidgetAnimation* lerpIn;                                                   // 0x02F0 (size: 0x8)
    class UButton* Button_0;                                                          // 0x02F8 (size: 0x8)
    class UTextBlock* count_spoil;                                                    // 0x0300 (size: 0x8)
    class UImage* exclam_2;                                                           // 0x0308 (size: 0x8)
    class UImage* Image_14;                                                           // 0x0310 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton_1;                                  // 0x0318 (size: 0x8)
    class UCanvasPanel* problem_spoil;                                                // 0x0320 (size: 0x8)
    class UImage* warnBg_2;                                                           // 0x0328 (size: 0x8)
    class UImage* warnBgHighlght;                                                     // 0x0330 (size: 0x8)
    class UTexture2D* problemIcon;                                                    // 0x0338 (size: 0x8)
    int32 problemID;                                                                  // 0x0340 (size: 0x4)
    FSlateColor Tint;                                                                 // 0x0344 (size: 0x14)
    bool showExclam;                                                                  // 0x0358 (size: 0x1)

    void updateProblemCount(class ARegion* Region);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void BndEvt__problemWidget_Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__problemBanner_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_problemBanner(int32 EntryPoint);
}; // Size: 0x359

#endif
