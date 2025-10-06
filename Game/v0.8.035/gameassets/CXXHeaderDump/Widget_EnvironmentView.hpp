#ifndef UE4SS_SDK_Widget_EnvironmentView_HPP
#define UE4SS_SDK_Widget_EnvironmentView_HPP

class UWidget_EnvironmentView_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UWidgetAnimation* FadeInAffinityDetails;                                    // 0x0350 (size: 0x8)
    class UImage* brown_separator_IMG;                                                // 0x0358 (size: 0x8)
    class UImage* brown_separator_IMG_1;                                              // 0x0360 (size: 0x8)
    class UImage* brown_separator_IMG_2;                                              // 0x0368 (size: 0x8)
    class UImage* brown_separator_IMG_3;                                              // 0x0370 (size: 0x8)
    class UButton* Button_Farmland;                                                   // 0x0378 (size: 0x8)
    class UButton* Button_Forest;                                                     // 0x0380 (size: 0x8)
    class UButton* Button_Meadow;                                                     // 0x0388 (size: 0x8)
    class UButton* Button_Rural;                                                      // 0x0390 (size: 0x8)
    class UButton* Button_Urban;                                                      // 0x0398 (size: 0x8)
    class UImage* DecoratedFrame_IMG;                                                 // 0x03A0 (size: 0x8)
    class UHorizontalBox* EnvironmentPillars_HB;                                      // 0x03A8 (size: 0x8)
    class UVerticalBox* Farmland_VB_1;                                                // 0x03B0 (size: 0x8)
    class UImage* Field_IMG;                                                          // 0x03B8 (size: 0x8)
    class UImage* Forest_IMG;                                                         // 0x03C0 (size: 0x8)
    class UVerticalBox* Forest_VB_1;                                                  // 0x03C8 (size: 0x8)
    class UImage* gold_separator_IMG;                                                 // 0x03D0 (size: 0x8)
    class UImage* gold_separator_IMG_1;                                               // 0x03D8 (size: 0x8)
    class UImage* Image_9;                                                            // 0x03E0 (size: 0x8)
    class UImage* Image_10;                                                           // 0x03E8 (size: 0x8)
    class UImage* Image_11;                                                           // 0x03F0 (size: 0x8)
    class UImage* Image_12;                                                           // 0x03F8 (size: 0x8)
    class UImage* Image_13;                                                           // 0x0400 (size: 0x8)
    class UImage* Image_47;                                                           // 0x0408 (size: 0x8)
    class UImage* Meadow_IMG;                                                         // 0x0410 (size: 0x8)
    class UVerticalBox* Meadow_VB;                                                    // 0x0418 (size: 0x8)
    class UMD_NaviAutoButton_C* Navi_Farmland;                                        // 0x0420 (size: 0x8)
    class UMD_NaviAutoButton_C* Navi_Forest;                                          // 0x0428 (size: 0x8)
    class UMD_NaviAutoButton_C* Navi_Meadow;                                          // 0x0430 (size: 0x8)
    class UMD_NaviAutoButton_C* Navi_Rural;                                           // 0x0438 (size: 0x8)
    class UMD_NaviAutoButton_C* Navi_Urban;                                           // 0x0440 (size: 0x8)
    class UImage* rural_IMG;                                                          // 0x0448 (size: 0x8)
    class UVerticalBox* Rural_VB;                                                     // 0x0450 (size: 0x8)
    class UBorder* SelectionHighlight_Farm;                                           // 0x0458 (size: 0x8)
    class UBorder* SelectionHighlight_Meadow;                                         // 0x0460 (size: 0x8)
    class UBorder* SelectionHighlight_Rural;                                          // 0x0468 (size: 0x8)
    class UBorder* SelectionHighlight_Urban;                                          // 0x0470 (size: 0x8)
    class UBorder* SelectionHighlight_Woodland;                                       // 0x0478 (size: 0x8)
    class UTextBlock* Text_Farmland_;                                                 // 0x0480 (size: 0x8)
    class UTextBlock* Text_Forest_;                                                   // 0x0488 (size: 0x8)
    class UTextBlock* Text_Meadow_;                                                   // 0x0490 (size: 0x8)
    class UTextBlock* Text_Rural_;                                                    // 0x0498 (size: 0x8)
    class UTextBlock* Text_Urban_;                                                    // 0x04A0 (size: 0x8)
    class UTextBlock* TextBlock_SelectedEnvironment;                                  // 0x04A8 (size: 0x8)
    class UTextBlock* TextBlock_SelectedEnvironment_1;                                // 0x04B0 (size: 0x8)
    class UTextBlock* TextBlock_SelectedEnvironment_2;                                // 0x04B8 (size: 0x8)
    class UImage* urban_IMG;                                                          // 0x04C0 (size: 0x8)
    class UVerticalBox* Urban_VB;                                                     // 0x04C8 (size: 0x8)
    class UWrapBox* WrapBox_64;                                                       // 0x04D0 (size: 0x8)
    EGameplayEnvironment SelectedEnvironmentType;                                     // 0x04D8 (size: 0x1)
    class ARegion* Region;                                                            // 0x04E0 (size: 0x8)

    void ApplyPlatformLimits();
    FNaviSubGridLayout ComputeSubGridLayout();
    void changeSelectedEnvironment(EGameplayEnvironment NewEnvironment);
    void UpdateContents(class ARegion* Region, bool animate);
    void BndEvt__Widget_EnvironmentView_Button_Meadow_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Widget_EnvironmentView_Button_Forest_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Widget_EnvironmentView_Button_Farmland_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Widget_EnvironmentView_Button_Rural_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Widget_EnvironmentView_Button_Urban_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_Widget_EnvironmentView(int32 EntryPoint);
}; // Size: 0x4E8

#endif
