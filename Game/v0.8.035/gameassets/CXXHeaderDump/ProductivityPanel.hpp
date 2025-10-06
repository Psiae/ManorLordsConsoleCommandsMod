#ifndef UE4SS_SDK_ProductivityPanel_HPP
#define UE4SS_SDK_ProductivityPanel_HPP

class UProductivityPanel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UBorder* area_High;                                                         // 0x02D8 (size: 0x8)
    class UBorder* area_Low;                                                          // 0x02E0 (size: 0x8)
    class UBorder* area_normal;                                                       // 0x02E8 (size: 0x8)
    class UBorder* area_veryHigh;                                                     // 0x02F0 (size: 0x8)
    class UBorder* area_veryLow;                                                      // 0x02F8 (size: 0x8)
    class UImage* BarBorder;                                                          // 0x0300 (size: 0x8)
    class UTextBlock* currentEffectLabel;                                             // 0x0308 (size: 0x8)
    class UHoverableSegment_C* HoverableSegment;                                      // 0x0310 (size: 0x8)
    class UHoverableSegment_C* HoverableSegment_1;                                    // 0x0318 (size: 0x8)
    class UHoverableSegment_C* HoverableSegment_2;                                    // 0x0320 (size: 0x8)
    class UHoverableSegment_C* HoverableSegment_3;                                    // 0x0328 (size: 0x8)
    class UHoverableSegment_C* HoverableSegment_4;                                    // 0x0330 (size: 0x8)
    class UImage* Image;                                                              // 0x0338 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0340 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0348 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0350 (size: 0x8)
    class UImage* Image_20;                                                           // 0x0358 (size: 0x8)
    class UImage* Image_97;                                                           // 0x0360 (size: 0x8)
    class UTextBlock* ProductivityLabel;                                              // 0x0368 (size: 0x8)
    class UTextBlock* ProductivityLabel_1;                                            // 0x0370 (size: 0x8)
    class UTextBlock* ProductivityLabel_Level;                                        // 0x0378 (size: 0x8)
    class UProgressBar* ProgressBar;                                                  // 0x0380 (size: 0x8)
    class UNamedSlot* TEMP_hidding_slot;                                              // 0x0388 (size: 0x8)
    class UHorizontalBox* title_hb;                                                   // 0x0390 (size: 0x8)
    class UVerticalBox* title_VB;                                                     // 0x0398 (size: 0x8)
    class UImage* underline_img;                                                      // 0x03A0 (size: 0x8)
    class UProductivityPanel_Tooltip_C* title_tooltip;                                // 0x03A8 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x03B0 (size: 0x8)
    class UProductivityTrackerWidget_C* ProductivityTrackerWidget;                    // 0x03B8 (size: 0x8)

    void UpdateLaborValue();
    class UWidget* UpdateAndShowProductivityTooltip();
    void UpdateBars(float OldProficiency, float NewProficiency);
    void UpdatePanel(double NewValue);
    void SetBuilding(class ASMBuildingMaster* building);
    void OnNewTimeTracked();
    void ExecuteUbergraph_ProductivityPanel(int32 EntryPoint);
}; // Size: 0x3C0

#endif
