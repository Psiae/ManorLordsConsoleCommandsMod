#ifndef UE4SS_SDK_quickSettings_HPP
#define UE4SS_SDK_quickSettings_HPP

class UquickSettings_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* animateCategory;                                          // 0x0268 (size: 0x8)
    class UButton* AA_FXAA;                                                           // 0x0270 (size: 0x8)
    class UButton* AA_FXAA_1;                                                         // 0x0278 (size: 0x8)
    class UButton* AA_OFF;                                                            // 0x0280 (size: 0x8)
    class UButton* AA_OFF_1;                                                          // 0x0288 (size: 0x8)
    class UButton* AA_TAA;                                                            // 0x0290 (size: 0x8)
    class UButton* AA_TAA_1;                                                          // 0x0298 (size: 0x8)
    class UVerticalBox* AA_VB;                                                        // 0x02A0 (size: 0x8)
    class UVerticalBox* bindings_vb;                                                  // 0x02A8 (size: 0x8)
    class UButton* boop_mode;                                                         // 0x02B0 (size: 0x8)
    class UButton* boop_mode_1;                                                       // 0x02B8 (size: 0x8)
    class UButton* borderless_b;                                                      // 0x02C0 (size: 0x8)
    class USlider* camera_rotationSpeed_slider_1;                                     // 0x02C8 (size: 0x8)
    class UCheckBox* camera_shake_chb_1;                                              // 0x02D0 (size: 0x8)
    class UBorder* category_bar_border_bottom;                                        // 0x02D8 (size: 0x8)
    class UBorder* category_bar_border_top;                                           // 0x02E0 (size: 0x8)
    class UHorizontalBox* color_coding_hb;                                            // 0x02E8 (size: 0x8)
    class UButton* colorcoding_off;                                                   // 0x02F0 (size: 0x8)
    class UButton* colorcoding_off_1;                                                 // 0x02F8 (size: 0x8)
    class UButton* colorcoding_off_2;                                                 // 0x0300 (size: 0x8)
    class UButton* colorcoding_off_3;                                                 // 0x0308 (size: 0x8)
    class UButton* colorcoding_on;                                                    // 0x0310 (size: 0x8)
    class UComboBoxString* ComboBoxString_54;                                         // 0x0318 (size: 0x8)
    class UCheckBox* ctrlGroups_chkb;                                                 // 0x0320 (size: 0x8)
    class UCheckBox* debug_chkb;                                                      // 0x0328 (size: 0x8)
    class UCheckBox* debug_chkb_1;                                                    // 0x0330 (size: 0x8)
    class UCheckBox* debug_chkb_2;                                                    // 0x0338 (size: 0x8)
    class UButton* default_resolutionScale;                                           // 0x0340 (size: 0x8)
    class UButton* default_viewDistMul;                                               // 0x0348 (size: 0x8)
    class UDefaultRadioSelectSetting_C* DefaultRadioSelectSetting_AA_1;               // 0x0350 (size: 0x8)
    class UDefaultRadioSelectSetting_C* DefaultRadioSelectSetting_AA_Choices;         // 0x0358 (size: 0x8)
    class UButton* dlss_off;                                                          // 0x0360 (size: 0x8)
    class UButton* dlss_off_1;                                                        // 0x0368 (size: 0x8)
    class UButton* dlss_off_2;                                                        // 0x0370 (size: 0x8)
    class UButton* dlss_off_3;                                                        // 0x0378 (size: 0x8)
    class UButton* dlss_perf;                                                         // 0x0380 (size: 0x8)
    class UButton* dlss_perf_1;                                                       // 0x0388 (size: 0x8)
    class UButton* dlss_perf_2;                                                       // 0x0390 (size: 0x8)
    class UButton* dlss_perf_3;                                                       // 0x0398 (size: 0x8)
    class UButton* dlss_quality;                                                      // 0x03A0 (size: 0x8)
    class UButton* dlss_quality_1;                                                    // 0x03A8 (size: 0x8)
    class UButton* dlss_quality_2;                                                    // 0x03B0 (size: 0x8)
    class UButton* dlss_quality_3;                                                    // 0x03B8 (size: 0x8)
    class UButton* dlss_quality_4;                                                    // 0x03C0 (size: 0x8)
    class UButton* dlss_quality_5;                                                    // 0x03C8 (size: 0x8)
    class UButton* dlss_quality_6;                                                    // 0x03D0 (size: 0x8)
    class UButton* dlss_quality_7;                                                    // 0x03D8 (size: 0x8)
    class UHorizontalBox* dlss_quality_dynamic_hb;                                    // 0x03E0 (size: 0x8)
    class UHorizontalBox* dlss_quality_hb;                                            // 0x03E8 (size: 0x8)
    class UVerticalBox* DuringGameOnly_VB;                                            // 0x03F0 (size: 0x8)
    class UScaleBox* fps_scalebox;                                                    // 0x03F8 (size: 0x8)
    class UVerticalBox* FPS_VB;                                                       // 0x0400 (size: 0x8)
    class UHorizontalBox* fsr_quality_hb_1;                                           // 0x0408 (size: 0x8)
    class UButton* fullscreen_b;                                                      // 0x0410 (size: 0x8)
    class UScaleBox* globalSB;                                                        // 0x0418 (size: 0x8)
    class UHorizontalRadioSelect_C* HorizontalRadioSelect;                            // 0x0420 (size: 0x8)
    class UHorizontalRadioSelect_C* HorizontalRadioSelect_bottom;                     // 0x0428 (size: 0x8)
    class UImage* Image;                                                              // 0x0430 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0438 (size: 0x8)
    class UImage* Image_13;                                                           // 0x0440 (size: 0x8)
    class UImage* Image_15;                                                           // 0x0448 (size: 0x8)
    class UImage* Image_80;                                                           // 0x0450 (size: 0x8)
    class UBorder* insideBorder;                                                      // 0x0458 (size: 0x8)
    class UHorizontalBox* language_text_hb;                                           // 0x0460 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x0468 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_1;                                    // 0x0470 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_132;                                  // 0x0478 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_140;                                  // 0x0480 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_212;                                  // 0x0488 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C;                                    // 0x0490 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_0;                                  // 0x0498 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_1;                                  // 0x04A0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_2;                                  // 0x04A8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_3;                                  // 0x04B0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_4;                                  // 0x04B8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_5;                                  // 0x04C0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_6;                                  // 0x04C8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_7;                                  // 0x04D0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_8;                                  // 0x04D8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_9;                                  // 0x04E0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_10;                                 // 0x04E8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_11;                                 // 0x04F0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_12;                                 // 0x04F8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_13;                                 // 0x0500 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_14;                                 // 0x0508 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_15;                                 // 0x0510 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_16;                                 // 0x0518 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_17;                                 // 0x0520 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_18;                                 // 0x0528 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_19;                                 // 0x0530 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_20;                                 // 0x0538 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_21;                                 // 0x0540 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_22;                                 // 0x0548 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_23;                                 // 0x0550 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_24;                                 // 0x0558 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_25;                                 // 0x0560 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_26;                                 // 0x0568 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_27;                                 // 0x0570 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_28;                                 // 0x0578 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_29;                                 // 0x0580 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_30;                                 // 0x0588 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_31;                                 // 0x0590 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_32;                                 // 0x0598 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_33;                                 // 0x05A0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_34;                                 // 0x05A8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_35;                                 // 0x05B0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_36;                                 // 0x05B8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_37;                                 // 0x05C0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_38;                                 // 0x05C8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_39;                                 // 0x05D0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_40;                                 // 0x05D8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_41;                                 // 0x05E0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_42;                                 // 0x05E8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_43;                                 // 0x05F0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_44;                                 // 0x05F8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_45;                                 // 0x0600 (size: 0x8)
    class UBorder* main_border;                                                       // 0x0608 (size: 0x8)
    class USizeBox* main_sb;                                                          // 0x0610 (size: 0x8)
    class UML_DefaultComboBoxSetting_C* ML_DefaultComboBoxSetting;                    // 0x0618 (size: 0x8)
    class UMLDefaultSpinner_C* MLDefaultSpinner_noticeEnemyBehavior;                  // 0x0620 (size: 0x8)
    class USlider* move_speed_slider_1;                                               // 0x0628 (size: 0x8)
    class UButton* playtest_battle;                                                   // 0x0630 (size: 0x8)
    class UHorizontalRadioSelect_C* PresetSelector;                                   // 0x0638 (size: 0x8)
    class UCheckBox* resIcons_chkb_1;                                                 // 0x0640 (size: 0x8)
    class UHorizontalBox* resolution_HB;                                              // 0x0648 (size: 0x8)
    class UHorizontalBox* resolutionscale_hb;                                         // 0x0650 (size: 0x8)
    class USlider* resolutionScale_slider;                                            // 0x0658 (size: 0x8)
    class USlider* sc_postpro;                                                        // 0x0660 (size: 0x8)
    class USlider* sc_postpro_1;                                                      // 0x0668 (size: 0x8)
    class USlider* sc_postpro_2;                                                      // 0x0670 (size: 0x8)
    class USlider* sc_postpro_3;                                                      // 0x0678 (size: 0x8)
    class USlider* sc_postpro_5;                                                      // 0x0680 (size: 0x8)
    class USlider* sc_shadows;                                                        // 0x0688 (size: 0x8)
    class USlider* sc_shadows_2;                                                      // 0x0690 (size: 0x8)
    class USlider* sc_viewDistance;                                                   // 0x0698 (size: 0x8)
    class UComboBoxString* screenResolution_CB;                                       // 0x06A0 (size: 0x8)
    class UButton* screenshot;                                                        // 0x06A8 (size: 0x8)
    class UScrollBox* scrollbox_main;                                                 // 0x06B0 (size: 0x8)
    class UVerticalBox* SECRET_VB;                                                    // 0x06B8 (size: 0x8)
    class UHorizontalBox* setting_specular_hb;                                        // 0x06C0 (size: 0x8)
    class UVerticalBox* settings_audio;                                               // 0x06C8 (size: 0x8)
    class UVerticalBox* settings_camera;                                              // 0x06D0 (size: 0x8)
    class UVerticalBox* settings_controls;                                            // 0x06D8 (size: 0x8)
    class UVerticalBox* settings_gameplay;                                            // 0x06E0 (size: 0x8)
    class UVerticalBox* settings_graphics;                                            // 0x06E8 (size: 0x8)
    class UVerticalBox* settings_language_accessibility;                              // 0x06F0 (size: 0x8)
    class USlider* smoothness_slider;                                                 // 0x06F8 (size: 0x8)
    class UHorizontalBox* TAA_Sharpness_HB;                                           // 0x0700 (size: 0x8)
    class UTextBlock* TextBlock_15;                                                   // 0x0708 (size: 0x8)
    class UTextBlock* TextBlock_16;                                                   // 0x0710 (size: 0x8)
    class UTextBlock* TextBlock_23;                                                   // 0x0718 (size: 0x8)
    class UTextBlock* TextBlock_37;                                                   // 0x0720 (size: 0x8)
    class UTextBlock* TextBlock_38;                                                   // 0x0728 (size: 0x8)
    class UTextBlock* TextBlock_41;                                                   // 0x0730 (size: 0x8)
    class UTextBlock* TextBlock_75;                                                   // 0x0738 (size: 0x8)
    class UTextBlock* TextBlock_76;                                                   // 0x0740 (size: 0x8)
    class UTextBlock* TextBlock_79;                                                   // 0x0748 (size: 0x8)
    class UTextBlock* TextBlock_83;                                                   // 0x0750 (size: 0x8)
    class UTextBlock* TextBlock_84;                                                   // 0x0758 (size: 0x8)
    class UTextBlock* TextBlock_87;                                                   // 0x0760 (size: 0x8)
    class UTextBlock* TextBlock_88;                                                   // 0x0768 (size: 0x8)
    class UTextBlock* TextBlock_89;                                                   // 0x0770 (size: 0x8)
    class USlider* ui_scale_slider;                                                   // 0x0778 (size: 0x8)
    class UTextBlock* uiScale_value_txt;                                              // 0x0780 (size: 0x8)
    class UTextBlock* volume_ambience;                                                // 0x0788 (size: 0x8)
    class USlider* volume_ambience_slider;                                            // 0x0790 (size: 0x8)
    class UTextBlock* volume_barks_perc;                                              // 0x0798 (size: 0x8)
    class USlider* volume_barks_slider_1;                                             // 0x07A0 (size: 0x8)
    class UTextBlock* volume_master;                                                  // 0x07A8 (size: 0x8)
    class USlider* volume_master_slider;                                              // 0x07B0 (size: 0x8)
    class UTextBlock* volume_music;                                                   // 0x07B8 (size: 0x8)
    class USlider* volume_music_slider;                                               // 0x07C0 (size: 0x8)
    class UTextBlock* volume_notif;                                                   // 0x07C8 (size: 0x8)
    class USlider* volume_notif_slider;                                               // 0x07D0 (size: 0x8)
    class UTextBlock* volume_sfx;                                                     // 0x07D8 (size: 0x8)
    class USlider* volume_sfx_slider;                                                 // 0x07E0 (size: 0x8)
    class UTextBlock* volume_ui;                                                      // 0x07E8 (size: 0x8)
    class USlider* volume_UI_slider;                                                  // 0x07F0 (size: 0x8)
    class UTextBlock* volume_voice;                                                   // 0x07F8 (size: 0x8)
    class USlider* volume_voice_slider;                                               // 0x0800 (size: 0x8)
    class UCheckBox* vsync_chmb;                                                      // 0x0808 (size: 0x8)
    class UCheckBox* vsync_chmb_1;                                                    // 0x0810 (size: 0x8)
    class UButton* walkaround_mode_button;                                            // 0x0818 (size: 0x8)
    class UButton* windowed_b;                                                        // 0x0820 (size: 0x8)
    class UHorizontalBox* xess_quality_hb;                                            // 0x0828 (size: 0x8)
    class USlider* zoom_speed_slider;                                                 // 0x0830 (size: 0x8)
    class USlider* zoomToCursor_slider;                                               // 0x0838 (size: 0x8)
    class UMLGameInstance* MLGameInstance;                                            // 0x0840 (size: 0x8)
    int32 currentCategory;                                                            // 0x0848 (size: 0x4)
    float prevFPS;                                                                    // 0x084C (size: 0x4)
    bool isMainMenu;                                                                  // 0x0850 (size: 0x1)
    bool hideBorders;                                                                 // 0x0851 (size: 0x1)
    float lastSliderValue;                                                            // 0x0854 (size: 0x4)
    bool scrollUpCauseDropboxResolution;                                              // 0x0858 (size: 0x1)
    float resolutionLockedScrollAt;                                                   // 0x085C (size: 0x4)
    int32 tempResolutionSelectedIndex;                                                // 0x0860 (size: 0x4)
    FString lastWorkingResolution;                                                    // 0x0868 (size: 0x10)
    class UresolutionConfirmation_C* resolutionConfirmationWidget;                    // 0x0878 (size: 0x8)
    TMap<USlider*, float> sliderLastValues;                                           // 0x0880 (size: 0x50)

    void Adjust Upscale Options For Platform();
    void updateMPCViewportResolutionScale();
    void notchSliderSfx(class USlider* Slider);
    void notchSlider(class USlider* Slider);
    void filterAADetailedSettingsBasedOnMainAAMode(FString currentAASetting);
    class UWidget* OnGenerateWidget_0(FString Item);
    void filterSettingVisiblityBasedOnOtherSettings();
    void Update Resolution Options();
    void highlightChildrenWidgetsIfHovered(class UPanelWidget* self2, float Alpha);
    void setTestPercentageValueFromSliderValue(class USlider*& Slider, class UTextBlock*& Text);
    void notchAudioSlider(float sliderValue, class USlider*& sliderWidget, class UTextBlock* textWidget);
    void adjustForMainMenu();
    void setSliderIfWrong(class USlider*& Slider, float& Value);
    void checkBoxIfNotCheckedProperly(class UCheckBox* CheckBox, bool ShouldBeChecked);
    void setCursors();
    void refresh_fps();
    void saveAndApply();
    void SaveSettings();
    void LoadSettings();
    void updateTranslationMainUI();
    void ApplySettings();
    void setCategoryVisibility(int32 categoryID, class UWidget* VerticalBox);
    void changeCategory(int32 Category);
    void translate_buttons();
    void Open();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__ComboBoxString_54_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__AA_OFF_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Button_3_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__AA_TAA_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__camera_rotationSmoothness_slider_1_K2Node_ComponentBoundEvent_19_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__AA_TAA_1_K2Node_ComponentBoundEvent_23_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__colorcoding_off_K2Node_ComponentBoundEvent_24_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__colorcoding_off_1_K2Node_ComponentBoundEvent_26_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__volume_sfx_slider_K2Node_ComponentBoundEvent_27_OnMouseCaptureEndEvent__DelegateSignature();
    void BndEvt__volume_sfx_slider_K2Node_ComponentBoundEvent_28_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__volume_sfx_slider_1_K2Node_ComponentBoundEvent_29_OnMouseCaptureEndEvent__DelegateSignature();
    void BndEvt__volume_UI_slider_K2Node_ComponentBoundEvent_30_OnMouseCaptureEndEvent__DelegateSignature();
    void BndEvt__colorcoding_off_2_K2Node_ComponentBoundEvent_31_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__colorcoding_off_3_K2Node_ComponentBoundEvent_32_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__volume_music_slider_K2Node_ComponentBoundEvent_33_OnMouseCaptureEndEvent__DelegateSignature();
    void BndEvt__camera_rotationSmoothness_slider_1_K2Node_ComponentBoundEvent_35_OnMouseCaptureEndEvent__DelegateSignature();
    void BndEvt__screenResolution_CB_K2Node_ComponentBoundEvent_36_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__AA_OFF_1_K2Node_ComponentBoundEvent_39_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__fullscreen_b_K2Node_ComponentBoundEvent_40_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__borderless_b_K2Node_ComponentBoundEvent_41_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__volume_UI_slider_1_K2Node_ComponentBoundEvent_42_OnMouseCaptureEndEvent__DelegateSignature();
    void BndEvt__colorcoding_off_4_K2Node_ComponentBoundEvent_43_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__debug_chkb_K2Node_ComponentBoundEvent_44_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__sc_shadows_K2Node_ComponentBoundEvent_45_OnMouseCaptureEndEvent__DelegateSignature();
    void BndEvt__sc_shadows_K2Node_ComponentBoundEvent_46_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__sc_shadows_1_K2Node_ComponentBoundEvent_47_OnMouseCaptureEndEvent__DelegateSignature();
    void BndEvt__sc_shadows_1_K2Node_ComponentBoundEvent_48_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__sc_viewDistance_K2Node_ComponentBoundEvent_53_OnMouseCaptureEndEvent__DelegateSignature();
    void BndEvt__resolutionScale_slider_K2Node_ComponentBoundEvent_54_OnMouseCaptureEndEvent__DelegateSignature();
    void BndEvt__default_resolutionScale_K2Node_ComponentBoundEvent_55_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__resolutionScale_slider_K2Node_ComponentBoundEvent_56_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__default_viewDistMul_K2Node_ComponentBoundEvent_50_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__camera_shake_chb_1_K2Node_ComponentBoundEvent_60_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__camera_rotationSmoothness_slider_1_K2Node_ComponentBoundEvent_61_OnMouseCaptureEndEvent__DelegateSignature();
    void BndEvt__quickSettings_dlss_off_K2Node_ComponentBoundEvent_63_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__quickSettings_dlss_perf_K2Node_ComponentBoundEvent_64_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__quickSettings_dlss_quality_K2Node_ComponentBoundEvent_67_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__quickSettings_dlss_quality_1_K2Node_ComponentBoundEvent_68_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__quickSettings_screenshot_K2Node_ComponentBoundEvent_64_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__quickSettings_camera_rotationSpeed_slider_K2Node_ComponentBoundEvent_66_OnMouseCaptureEndEvent__DelegateSignature();
    void BndEvt__quickSettings_ui_scale_slider_K2Node_ComponentBoundEvent_69_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__quickSettings_resIcons_chkb_1_K2Node_ComponentBoundEvent_72_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__quickSettings_volume_ambience_slider_K2Node_ComponentBoundEvent_73_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__quickSettings_boop_mode_K2Node_ComponentBoundEvent_74_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__quickSettings_debug_chkb_1_K2Node_ComponentBoundEvent_76_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__quickSettings_debug_chkb_2_K2Node_ComponentBoundEvent_77_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__quickSettings_boop_mode_1_K2Node_ComponentBoundEvent_51_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__quickSettings_MLDefaultSpinner_noticeEnemyBehavior_K2Node_ComponentBoundEvent_9_SpinnerSelectionChanged__DelegateSignature(FString Value);
    void BndEvt__quickSettings_ctrlGroups_chkb_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__quickSettings_volume_UI_slider_K2Node_ComponentBoundEvent_13_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__quickSettings_volume_voice_slider_K2Node_ComponentBoundEvent_22_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__quickSettings_volume_music_slider_K2Node_ComponentBoundEvent_49_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__quickSettings_volume_sfx_slider_1_K2Node_ComponentBoundEvent_52_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__quickSettings_volume_master_slider_K2Node_ComponentBoundEvent_58_OnMouseCaptureEndEvent__DelegateSignature();
    void BndEvt__quickSettings_volume_notif_slider_K2Node_ComponentBoundEvent_59_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__quickSettings_volume_notif_slider_K2Node_ComponentBoundEvent_70_OnMouseCaptureEndEvent__DelegateSignature();
    void BndEvt__quickSettings_zoom_speed_slider_1_K2Node_ComponentBoundEvent_75_OnMouseCaptureEndEvent__DelegateSignature();
    void BndEvt__quickSettings_smoothness_slider_K2Node_ComponentBoundEvent_79_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__quickSettings_move_speed_slider_1_K2Node_ComponentBoundEvent_17_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__quickSettings_move_speed_slider_1_K2Node_ComponentBoundEvent_18_OnMouseCaptureEndEvent__DelegateSignature();
    void BndEvt__quickSettings_ML_DefaultComboBoxSetting_K2Node_ComponentBoundEvent_80_onOpen__DelegateSignature();
    void BndEvt__quickSettings_scrollbox_main_K2Node_ComponentBoundEvent_81_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
    void BndEvt__quickSettings_ML_DefaultComboBoxSetting_K2Node_ComponentBoundEvent_1_onSelectionChanged__DelegateSignature(FString Item, TEnumAsByte<ESelectInfo::Type> Type);
    void abortResolutionChange();
    void BndEvt__quickSettings_volume_voice_slider_1_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__quickSettings_volume_voice_slider_1_K2Node_ComponentBoundEvent_3_OnMouseCaptureEndEvent__DelegateSignature();
    void BndEvt__quickSettings_DefaultRadioSelectSetting_AA_1_K2Node_ComponentBoundEvent_7_selectionChanged__DelegateSignature(FString Value);
    void BndEvt__quickSettings_HorizontalRadioSelect_K2Node_ComponentBoundEvent_8_RadioSelectedSignature__DelegateSignature(FString Value);
    void BndEvt__quickSettings_HorizontalRadioSelect_1_K2Node_ComponentBoundEvent_10_RadioSelectedSignature__DelegateSignature(FString Value);
    void BndEvt__quickSettings_zoomToCursor_slider_K2Node_ComponentBoundEvent_12_OnMouseCaptureEndEvent__DelegateSignature();
    void BndEvt__quickSettings_zoomToCursor_slider_K2Node_ComponentBoundEvent_14_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__quickSettings_zoom_speed_slider_K2Node_ComponentBoundEvent_16_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__quickSettings_DefaultRadioSelectSetting_AA_Choices_K2Node_ComponentBoundEvent_20_selectionChanged__DelegateSignature(FString Value);
    void ExecuteUbergraph_quickSettings(int32 EntryPoint);
}; // Size: 0x8D0

#endif
