#ifndef UE4SS_SDK_main_menu_lord_customization_HPP
#define UE4SS_SDK_main_menu_lord_customization_HPP

class Umain_menu_lord_customization_C : public UNaviUi
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C0 (size: 0x8)
    class UWidgetAnimation* lerpIn;                                                   // 0x02C8 (size: 0x8)
    class UHorizontalBox* add_Hscale_HB;                                              // 0x02D0 (size: 0x8)
    class UHorizontalBox* add_Vscale_HB_1;                                            // 0x02D8 (size: 0x8)
    class USlider* bg_angle_slider;                                                   // 0x02E0 (size: 0x8)
    class UTextBlock* bg_angle_txt;                                                   // 0x02E8 (size: 0x8)
    class UHorizontalBox* BG_Header_HB;                                               // 0x02F0 (size: 0x8)
    class UComboBoxString* bg_primaryColor_CB_1;                                      // 0x02F8 (size: 0x8)
    class UHorizontalBox* BG_primaryColor_HB;                                         // 0x0300 (size: 0x8)
    class UHorizontalBox* BG_Rotation_HB;                                             // 0x0308 (size: 0x8)
    class UComboBoxString* bg_secondaryColor_CB_1;                                    // 0x0310 (size: 0x8)
    class UHorizontalBox* BG_secondaryColor_HB;                                       // 0x0318 (size: 0x8)
    class UWrapBox* bg_textures_grid;                                                 // 0x0320 (size: 0x8)
    class UHorizontalBox* bg_tiling_HB_1;                                             // 0x0328 (size: 0x8)
    class UVerticalBox* bg_transforms_VB;                                             // 0x0330 (size: 0x8)
    class UVerticalBox* BG_VB;                                                        // 0x0338 (size: 0x8)
    class UButton* Button;                                                            // 0x0340 (size: 0x8)
    class UCheckBox* CheckBox_133;                                                    // 0x0348 (size: 0x8)
    class UImage* coatImage;                                                          // 0x0350 (size: 0x8)
    class UHorizontalRadioSelect_C* currentField_radioSelect;                         // 0x0358 (size: 0x8)
    class UHorizontalBox* dimidiation_hb;                                             // 0x0360 (size: 0x8)
    class UEditableText* EditableText_180;                                            // 0x0368 (size: 0x8)
    class UHorizontalBox* FG_Header_HB;                                               // 0x0370 (size: 0x8)
    class UWrapBox* FG_Texture_Choice;                                                // 0x0378 (size: 0x8)
    class UVerticalBox* FG_VB;                                                        // 0x0380 (size: 0x8)
    class UWrapBox* FieldDivisions_GridPanel;                                         // 0x0388 (size: 0x8)
    class UImage* Grunge;                                                             // 0x0390 (size: 0x8)
    class UTextBlock* header_txt_2;                                                   // 0x0398 (size: 0x8)
    class UVerticalBox* header_VB;                                                    // 0x03A0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_0;                                            // 0x03A8 (size: 0x8)
    class UHorizontalBox* HorizontalBox_5;                                            // 0x03B0 (size: 0x8)
    class UImage* Image;                                                              // 0x03B8 (size: 0x8)
    class UImage* Image_1;                                                            // 0x03C0 (size: 0x8)
    class UImage* Image_2;                                                            // 0x03C8 (size: 0x8)
    class UImage* Image_3;                                                            // 0x03D0 (size: 0x8)
    class UImage* Image_4;                                                            // 0x03D8 (size: 0x8)
    class UImage* Image_37;                                                           // 0x03E0 (size: 0x8)
    class UImage* Image_51;                                                           // 0x03E8 (size: 0x8)
    class UImage* Image_52;                                                           // 0x03F0 (size: 0x8)
    class UImage* Image_76;                                                           // 0x03F8 (size: 0x8)
    class UImage* Image_126;                                                          // 0x0400 (size: 0x8)
    class UImage* Image_136;                                                          // 0x0408 (size: 0x8)
    class UVerticalBox* LEFT_VB;                                                      // 0x0410 (size: 0x8)
    class UButton* load_coat_button;                                                  // 0x0418 (size: 0x8)
    class UTextBlock* name_txt;                                                       // 0x0420 (size: 0x8)
    class UVerticalBox* name_vb;                                                      // 0x0428 (size: 0x8)
    class UHorizontalBox* num_instances-HB;                                           // 0x0430 (size: 0x8)
    class UTextBlock* numInstancesTxt;                                                // 0x0438 (size: 0x8)
    class UmenuButton_C* play_button;                                                 // 0x0440 (size: 0x8)
    class UButton* playOld;                                                           // 0x0448 (size: 0x8)
    class UPolygonButton* PolygonButton_field_A;                                      // 0x0450 (size: 0x8)
    class UportraitSelection_C* portraitSelection_C_5;                                // 0x0458 (size: 0x8)
    class UTextBlock* recruit_txt;                                                    // 0x0460 (size: 0x8)
    class UTextBlock* recruit_txt_1;                                                  // 0x0468 (size: 0x8)
    class UmenuButton_C* return_button;                                               // 0x0470 (size: 0x8)
    class UButton* returnOld;                                                         // 0x0478 (size: 0x8)
    class UButton* save_coat_button;                                                  // 0x0480 (size: 0x8)
    class UTextBlock* sirOrLadyTxt;                                                   // 0x0488 (size: 0x8)
    class USlider* Slider_261;                                                        // 0x0490 (size: 0x8)
    class UHorizontalBox* symbol_colors_HB;                                           // 0x0498 (size: 0x8)
    class UComboBoxString* symbol_primaryColor_CB;                                    // 0x04A0 (size: 0x8)
    class UHorizontalBox* symbol_primaryColor_HB;                                     // 0x04A8 (size: 0x8)
    class USlider* symbol_scale_slider;                                               // 0x04B0 (size: 0x8)
    class USlider* symbol_scale_slider_1;                                             // 0x04B8 (size: 0x8)
    class UTextBlock* symbol_scale_txt;                                               // 0x04C0 (size: 0x8)
    class UComboBoxString* symbol_secondaryColor_CB;                                  // 0x04C8 (size: 0x8)
    class UHorizontalBox* symbol_secondaryColor_HB;                                   // 0x04D0 (size: 0x8)
    class UVerticalBox* Symbol_VB;                                                    // 0x04D8 (size: 0x8)
    class USlider* symbol_Vscale_slider_2;                                            // 0x04E0 (size: 0x8)
    class UTextBlock* symbol_Vscale_txt_1;                                            // 0x04E8 (size: 0x8)
    class UVerticalBox* symbolDetails_VB;                                             // 0x04F0 (size: 0x8)
    class UHorizontalBox* symbolScaling_HB;                                           // 0x04F8 (size: 0x8)
    class UTextBlock* TextBlock_1;                                                    // 0x0500 (size: 0x8)
    class UTextBlock* TextBlock_2;                                                    // 0x0508 (size: 0x8)
    class UTextBlock* TextBlock_4;                                                    // 0x0510 (size: 0x8)
    class UTextBlock* TextBlock_9;                                                    // 0x0518 (size: 0x8)
    class UTextBlock* TextBlock_10;                                                   // 0x0520 (size: 0x8)
    class UTextBlock* TextBlock_11;                                                   // 0x0528 (size: 0x8)
    class UTextBlock* TextBlock_95;                                                   // 0x0530 (size: 0x8)
    class UTextBlock* TextBlock_187;                                                  // 0x0538 (size: 0x8)
    class UTextBlock* tiling_txt;                                                     // 0x0540 (size: 0x8)
    class UTextBlock* title_coats_txt_1;                                              // 0x0548 (size: 0x8)
    class UTextBlock* txt_bg;                                                         // 0x0550 (size: 0x8)
    class UTextBlock* txt_fg;                                                         // 0x0558 (size: 0x8)
    class UCheckBox* uniformscale_chkb;                                               // 0x0560 (size: 0x8)
    class UVerticalBox* VerticalBox_LEFT;                                             // 0x0568 (size: 0x8)
    class UVerticalBox* VerticalBox_RIGHT;                                            // 0x0570 (size: 0x8)
    Fmain_menu_lord_customization_CBeginGame BeginGame;                               // 0x0578 (size: 0x10)
    void beginGame();
    bool usingDefaultName;                                                            // 0x0588 (size: 0x1)
    Fmain_menu_lord_customization_CGoToGameSetup goToGameSetup;                       // 0x0590 (size: 0x10)
    void goToGameSetup();
    TArray<class UTexture2D*> fieldDivisionMasks;                                     // 0x05A0 (size: 0x10)
    FString selectedField;                                                            // 0x05B0 (size: 0x10)
    class UTextureRenderTarget2D* currentWorkingRenderTarget;                         // 0x05C0 (size: 0x8)
    class UTexture2D* currentFieldMask;                                               // 0x05C8 (size: 0x8)
    TArray<class UcoatFieldContentsWidget_C*> fieldContentWidgets;                    // 0x05D0 (size: 0x10)
    int32 lastFieldIndex;                                                             // 0x05E0 (size: 0x4)
    class UMaterialInstanceDynamic* coatStampBG;                                      // 0x05E8 (size: 0x8)
    class UMaterialInstanceDynamic* coatStampFG;                                      // 0x05F0 (size: 0x8)
    bool dimidiation;                                                                 // 0x05F8 (size: 0x1)
    TArray<class UTextureRenderTarget2D*> bannerRenderTargets;                        // 0x0600 (size: 0x10)
    TArray<FCoatField> NGFieldContents;                                               // 0x0610 (size: 0x10)
    TArray<FLinearColor> Available Colors;                                            // 0x0620 (size: 0x10)
    TArray<class UTexture2D*> BG_Textures;                                            // 0x0630 (size: 0x10)
    TArray<class UTexture2D*> FG_Textures;                                            // 0x0640 (size: 0x10)
    float lastSliderSfx;                                                              // 0x0650 (size: 0x4)
    bool Uniform Scale;                                                               // 0x0654 (size: 0x1)
    class UMaterialInstanceDynamic* coatReplaceDynMat;                                // 0x0658 (size: 0x8)

    ENaviHandleMethod HandleInput(ENaviUiIntent Key);
    void updateColorChoiceOptionsVisibility();
    void loadCoatOfArmsImage(FString SaveGameName);
    void getColorID(FLinearColor Color, int32& Array Index);
    class UWidget* OnGenerateWidget_0(FString Item);
    float NG_getSymbolSpacing(int32 maxInstanceID);
    void sliderSfx();
    void getCurrentField_doienstwork(FCoatField& Output);
    void OnCoatItemPressed(class UcoatContentItem_C* whichItem);
    void selectDefaultIconForGrid(class UcoatContentGridSelect_C* contentGrid, int32 Index);
    void populateWithColors(class UWrapBox* contentGrid, TArray<FLinearColor>& availableColors, bool isForeground, bool isB);
    void populateWithTextures(class UcoatContentGridSelect_C* contentGrid, bool isForeground, bool isB, TArray<class UTexture2D*>& availableTextures, bool isTreatment);
    void repopulateTextureAndColorGrids();
    void NG_UpdateDetailsForSelectedField();
    void NG_getSymbolOffsetForCurrentMaskAndIndex(int32 fieldIndex, FVector2D& Offset, FVector2D& Scale, int32& biggestFieldIndex);
    void NG_setupStamps();
    void NG_translate();
    void NG_createBannerRenderTargets();
    void NG_prepareBannerMaker();
    void NG on Field Division Item Clicked(class UcoatContentItem_C* whichItem);
    void NG_redrawCoats(bool flicker);
    void NG_populateGridsIfEmpty();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__main_menu_newGame_recruit_button_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void fixTheFuckingGrids();
    void BndEvt__main_menu_newGame_return_button_K2Node_ComponentBoundEvent_1_onReleased__DelegateSignature();
    void BndEvt__main_menu_newGame_play_button_K2Node_ComponentBoundEvent_2_onReleased__DelegateSignature();
    void BndEvt__main_menu_newGame_portraitSelection_C_5_K2Node_ComponentBoundEvent_3_portraitChanged__DelegateSignature(bool isFemale);
    void BndEvt__main_menu_newGame_EditableText_180_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__main_menu_newGame_EditableText_180_K2Node_ComponentBoundEvent_5_OnEditableTextChangedEvent__DelegateSignature(const FText& Text);
    void open_newGameScreen();
    void switchField(FString Value);
    void BndEvt__banner_maker_HorizontalRadioSelect_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature(FString Value);
    void BndEvt__banner_maker_CheckBox_133_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__coatFieldContentsWidget_Slider_261_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__coatFieldContentsWidget_symbol_scale_slider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__coatFieldContentsWidget_symbol_scale_slider_1_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__coatFieldContentsWidget_symbol_Vscale_slider_2_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__coatFieldContentsWidget_uniformscale_chkb_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__coatFieldContentsWidget_bg_angle_slider_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__main_menu_newGame_bg_primaryColor_CB_1_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__main_menu_newGame_bg_secondaryColor_CB_1_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__main_menu_newGame_symbol_primaryColor_CB_K2Node_ComponentBoundEvent_22_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__main_menu_newGame_symbol_secondaryColor_CB_K2Node_ComponentBoundEvent_23_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__main_menu_newGame_Button_K2Node_ComponentBoundEvent_14_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__main_menu_newGame_PolygonButton_71_K2Node_ComponentBoundEvent_15_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__main_menu_lord_customization_Button_1_K2Node_ComponentBoundEvent_16_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__main_menu_lord_customization_Button_68_K2Node_ComponentBoundEvent_17_OnButtonReleasedEvent__DelegateSignature();
    void updateDetailsBasedOnPortrait();
    void ExecuteUbergraph_main_menu_lord_customization(int32 EntryPoint);
    void goToGameSetup__DelegateSignature();
    void beginGame__DelegateSignature();
}; // Size: 0x660

#endif
