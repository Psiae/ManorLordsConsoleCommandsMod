#ifndef UE4SS_SDK_main_menu_lord_customization_HPP
#define UE4SS_SDK_main_menu_lord_customization_HPP

class Umain_menu_lord_customization_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UWidgetAnimation* lerpIn;                                                   // 0x0350 (size: 0x8)
    class UHorizontalBox* add_Hscale_HB;                                              // 0x0358 (size: 0x8)
    class UHorizontalBox* add_Vscale_HB;                                              // 0x0360 (size: 0x8)
    class UHorizontalBox* BG_Header_HB;                                               // 0x0368 (size: 0x8)
    class UComboBoxString* bg_primaryColor_CB_1;                                      // 0x0370 (size: 0x8)
    class UHorizontalBox* BG_primaryColor_HB;                                         // 0x0378 (size: 0x8)
    class UHorizontalBox* BG_Rotation_HB;                                             // 0x0380 (size: 0x8)
    class UComboBoxString* bg_secondaryColor_CB_1;                                    // 0x0388 (size: 0x8)
    class UHorizontalBox* BG_secondaryColor_HB;                                       // 0x0390 (size: 0x8)
    class UWrapBox* bg_textures_grid;                                                 // 0x0398 (size: 0x8)
    class UHorizontalBox* bg_tiling_HB_1;                                             // 0x03A0 (size: 0x8)
    class UVerticalBox* bg_transforms_VB;                                             // 0x03A8 (size: 0x8)
    class UVerticalBox* BG_VB;                                                        // 0x03B0 (size: 0x8)
    class UMLDefaultCheckbox_C* checkbox_dimidation;                                  // 0x03B8 (size: 0x8)
    class UMLDefaultCheckbox_C* checkbox_UniformScale;                                // 0x03C0 (size: 0x8)
    class UImage* coatImage;                                                          // 0x03C8 (size: 0x8)
    class UHorizontalRadioSelect_C* currentField_radioSelect;                         // 0x03D0 (size: 0x8)
    class UHorizontalBox* dimidiation_hb;                                             // 0x03D8 (size: 0x8)
    class UHorizontalBox* FG_Header_HB;                                               // 0x03E0 (size: 0x8)
    class UWrapBox* FG_Symbols_Choices;                                               // 0x03E8 (size: 0x8)
    class UVerticalBox* FG_VB;                                                        // 0x03F0 (size: 0x8)
    class UWrapBox* FieldDivisions_GridPanel;                                         // 0x03F8 (size: 0x8)
    class UImage* Grunge;                                                             // 0x0400 (size: 0x8)
    class UTextBlock* header_txt_2;                                                   // 0x0408 (size: 0x8)
    class UVerticalBox* header_VB;                                                    // 0x0410 (size: 0x8)
    class UHorizontalBox* HorizontalBox_0;                                            // 0x0418 (size: 0x8)
    class UHorizontalBox* HorizontalBox_5;                                            // 0x0420 (size: 0x8)
    class UImage* Image;                                                              // 0x0428 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0430 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0438 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0440 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0448 (size: 0x8)
    class UImage* Image_37;                                                           // 0x0450 (size: 0x8)
    class UImage* Image_51;                                                           // 0x0458 (size: 0x8)
    class UImage* Image_52;                                                           // 0x0460 (size: 0x8)
    class UImage* Image_76;                                                           // 0x0468 (size: 0x8)
    class UImage* Image_126;                                                          // 0x0470 (size: 0x8)
    class UImage* Image_136;                                                          // 0x0478 (size: 0x8)
    class UVerticalBox* LEFT_VB;                                                      // 0x0480 (size: 0x8)
    class UTextBlock* name_txt;                                                       // 0x0488 (size: 0x8)
    class UVerticalBox* name_vb;                                                      // 0x0490 (size: 0x8)
    class UMD_NaviHijackProxy_C* nameEdit_naviProxy;                                  // 0x0498 (size: 0x8)
    class UEditableText* nameEditableText;                                            // 0x04A0 (size: 0x8)
    class UMD_NaviComboBoxWrapper_C* navi_bg_primeColor;                              // 0x04A8 (size: 0x8)
    class UMD_NaviComboBoxWrapper_C* navi_bg_secondColor;                             // 0x04B0 (size: 0x8)
    class UMD_NaviComboBoxWrapper_C* navi_symbol_primeColor;                          // 0x04B8 (size: 0x8)
    class UMD_NaviComboBoxWrapper_C* navi_symbol_secondColor;                         // 0x04C0 (size: 0x8)
    class UHorizontalBox* num_instances-HB;                                           // 0x04C8 (size: 0x8)
    class UmenuButton_C* play_button;                                                 // 0x04D0 (size: 0x8)
    class UportraitSelection_C* portraitSelectionGrid;                                // 0x04D8 (size: 0x8)
    class UmenuButton_C* return_button;                                               // 0x04E0 (size: 0x8)
    class UScrollBox* ScrollBox_Symbols;                                              // 0x04E8 (size: 0x8)
    class UScrollBox* ScrollBox_Textures;                                             // 0x04F0 (size: 0x8)
    class UTextBlock* sirOrLadyTxt;                                                   // 0x04F8 (size: 0x8)
    class UMLDefaultSlider_C* slider_BgAngle;                                         // 0x0500 (size: 0x8)
    class UMLDefaultSlider_C* slider_BgTiling;                                        // 0x0508 (size: 0x8)
    class UMLDefaultSlider_C* slider_SymbolInstances;                                 // 0x0510 (size: 0x8)
    class UMLDefaultSlider_C* slider_SymbolScalePrime;                                // 0x0518 (size: 0x8)
    class UMLDefaultSlider_C* slider_SymbolScaleSecondary;                            // 0x0520 (size: 0x8)
    class UsquareButton_C* squareButton_CoatLoad;                                     // 0x0528 (size: 0x8)
    class UsquareButton_C* squareButton_CoatLoadCustom;                               // 0x0530 (size: 0x8)
    class UsquareButton_C* squareButton_CoatSave;                                     // 0x0538 (size: 0x8)
    class UHorizontalBox* symbol_colors_HB;                                           // 0x0540 (size: 0x8)
    class UComboBoxString* symbol_primaryColor_CB;                                    // 0x0548 (size: 0x8)
    class UHorizontalBox* symbol_primaryColor_HB;                                     // 0x0550 (size: 0x8)
    class UComboBoxString* symbol_secondaryColor_CB;                                  // 0x0558 (size: 0x8)
    class UHorizontalBox* symbol_secondaryColor_HB;                                   // 0x0560 (size: 0x8)
    class UVerticalBox* Symbol_VB;                                                    // 0x0568 (size: 0x8)
    class UVerticalBox* symbolDetails_VB;                                             // 0x0570 (size: 0x8)
    class UHorizontalBox* symbolScaling_HB;                                           // 0x0578 (size: 0x8)
    class UTextBlock* TextBlock_1;                                                    // 0x0580 (size: 0x8)
    class UTextBlock* TextBlock_2;                                                    // 0x0588 (size: 0x8)
    class UTextBlock* TextBlock_4;                                                    // 0x0590 (size: 0x8)
    class UTextBlock* TextBlock_9;                                                    // 0x0598 (size: 0x8)
    class UTextBlock* TextBlock_10;                                                   // 0x05A0 (size: 0x8)
    class UTextBlock* TextBlock_11;                                                   // 0x05A8 (size: 0x8)
    class UTextBlock* TextBlock_95;                                                   // 0x05B0 (size: 0x8)
    class UTextBlock* TextBlock_187;                                                  // 0x05B8 (size: 0x8)
    class UTextBlock* title_coats_txt_1;                                              // 0x05C0 (size: 0x8)
    class UTextBlock* txt_bg;                                                         // 0x05C8 (size: 0x8)
    class UTextBlock* txt_fg;                                                         // 0x05D0 (size: 0x8)
    class UVerticalBox* VerticalBox_LEFT;                                             // 0x05D8 (size: 0x8)
    class UVerticalBox* VerticalBox_RIGHT;                                            // 0x05E0 (size: 0x8)
    Fmain_menu_lord_customization_CBeginGame BeginGame;                               // 0x05E8 (size: 0x10)
    void beginGame();
    bool usingDefaultName;                                                            // 0x05F8 (size: 0x1)
    Fmain_menu_lord_customization_CGoToGameSetup goToGameSetup;                       // 0x0600 (size: 0x10)
    void goToGameSetup();
    FString selectedField;                                                            // 0x0610 (size: 0x10)
    class UTextureRenderTarget2D* currentWorkingRenderTarget;                         // 0x0620 (size: 0x8)
    class UTexture2D* currentFieldMask;                                               // 0x0628 (size: 0x8)
    TArray<class UObject*> fieldContentWidgets;                                       // 0x0630 (size: 0x10)
    int32 lastFieldIndex;                                                             // 0x0640 (size: 0x4)
    class UMaterialInstanceDynamic* coatStampBG;                                      // 0x0648 (size: 0x8)
    class UMaterialInstanceDynamic* coatStampFG;                                      // 0x0650 (size: 0x8)
    bool dimidiation;                                                                 // 0x0658 (size: 0x1)
    TArray<class UTextureRenderTarget2D*> bannerRenderTargets;                        // 0x0660 (size: 0x10)
    TArray<FCoatField> NGFieldContents;                                               // 0x0670 (size: 0x10)
    TArray<FLinearColor> Available Colors;                                            // 0x0680 (size: 0x10)
    double lastSliderSfx;                                                             // 0x0690 (size: 0x8)
    bool Uniform Scale;                                                               // 0x0698 (size: 0x1)
    TSubclassOf<class UCoatOfArmsLibrary> CoatOfArmsLibraryClass;                     // 0x06A0 (size: 0x8)
    class UCoatOfArmsLibrary* CoatOfArmsLibrary;                                      // 0x06A8 (size: 0x8)

    void ComputeWrapBoxRowLength(class UWrapBox* WrapBox, int32& RowLength);
    void OnFieldDivisionItemClicked(class UcoatContentItem_C* whichItem);
    void ApplyPlatformLimits();
    void SaveCoatToDisk(class UTextureRenderTarget2D* TextureRenderTarget);
    void OnCoatChoiceControllerHoverScrollIntoView(bool HasFocus);
    void Get Single Color Coat Content(int32 bg_color_index, FCoatField& CoatField);
    void AccessCoatOfArmsLibrary(class UCoatOfArmsLibrary*& Library);
    void AddCoatItemsToGrid(class UPanelWidget* WrapBox, TMap<class UNaviUi*, class FVector>& gridMembers, int32 MaxWidth, FVector PosOffset);
    FNaviSubGridLayout ComputeSubGridLayout();
    void updateColorChoiceOptionsVisibility();
    void loadCoatOfArmsImage(FString SaveGameName);
    void getColorID(FLinearColor Color, int32& Array Index);
    class UWidget* OnGenerateWidget_0(FString Item);
    double NG_getSymbolSpacing(int32 maxInstanceID);
    void getCurrentField_doienstwork(FCoatField& Output);
    void OnCoatItemPressed(class UcoatContentItem_C* whichItem);
    void selectDefaultIconForGrid(class UcoatContentGridSelect_C* contentGrid, int32 Index);
    void populateWithColors(class UWrapBox* contentGrid, TArray<FLinearColor>& availableColors, bool isForeground, bool isB);
    void populateWithTextures(class UcoatContentGridSelect_C* contentGrid, bool isForeground, bool isB, TArray<class UTexture2D*>& availableTextures, bool isTreatment);
    void repopulateTextureAndColorGrids();
    void NG_UpdateDetailsForSelectedField();
    void NG_getSymbolOffsetForCurrentMaskAndIndex(int32 fieldIndex, FVector2D& Offset, FVector2D& scale, int32& biggestFieldIndex);
    void NG_setupStamps();
    void NG_translate();
    void NG_createBannerRenderTargets();
    void NG_prepareBannerMaker();
    void NG Select Field Division Item(class UcoatContentItem_C* whichItem, bool isInit);
    void NG_redrawCoats(bool flicker);
    void NG_populateGridsIfEmpty();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void fixTheFuckingGrids();
    void BndEvt__main_menu_newGame_return_button_K2Node_ComponentBoundEvent_1_onReleased__DelegateSignature();
    void BndEvt__main_menu_newGame_play_button_K2Node_ComponentBoundEvent_2_onReleased__DelegateSignature();
    void BndEvt__main_menu_newGame_portraitSelection_C_5_K2Node_ComponentBoundEvent_3_portraitChanged__DelegateSignature(bool isFemale);
    void BndEvt__main_menu_newGame_EditableText_180_K2Node_ComponentBoundEvent_4_OnEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__main_menu_newGame_EditableText_180_K2Node_ComponentBoundEvent_5_OnEditableTextChangedEvent__DelegateSignature(const FText& Text);
    void open_newGameScreen();
    void switchField(FString Value);
    void BndEvt__banner_maker_HorizontalRadioSelect_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature(FString Value);
    void BndEvt__main_menu_newGame_bg_primaryColor_CB_1_K2Node_ComponentBoundEvent_20_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__main_menu_newGame_bg_secondaryColor_CB_1_K2Node_ComponentBoundEvent_21_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__main_menu_newGame_symbol_primaryColor_CB_K2Node_ComponentBoundEvent_22_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__main_menu_newGame_symbol_secondaryColor_CB_K2Node_ComponentBoundEvent_23_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void updateDetailsBasedOnPortrait();
    void BndEvt__main_menu_lord_customization_squareButton_K2Node_ComponentBoundEvent_15_onReleased__DelegateSignature();
    void BndEvt__main_menu_lord_customization_squareButton_CoatLoad_K2Node_ComponentBoundEvent_18_onReleased__DelegateSignature();
    void BndEvt__main_menu_lord_customization_squareButton_CoatSave_K2Node_ComponentBoundEvent_19_onReleased__DelegateSignature();
    void BndEvt__main_menu_lord_customization_slider_SymbolScalePrime_K2Node_ComponentBoundEvent_12_OnValueChange__DelegateSignature(double Value);
    void BndEvt__main_menu_lord_customization_slider_SymbolScaleSecondary_K2Node_ComponentBoundEvent_16_OnValueChange__DelegateSignature(double Value);
    void BndEvt__main_menu_lord_customization_slider_SymbolInstances_K2Node_ComponentBoundEvent_24_OnValueChange__DelegateSignature(double Value);
    void BndEvt__main_menu_lord_customization_slider_BgAngle_K2Node_ComponentBoundEvent_26_OnValueChange__DelegateSignature(double Value);
    void BndEvt__main_menu_lord_customization_slider_BgTiling_K2Node_ComponentBoundEvent_28_OnValueChange__DelegateSignature(double Value);
    void BndEvt__main_menu_lord_customization_checkbox_dimidation_K2Node_ComponentBoundEvent_2_OnValueChange__DelegateSignature(bool IsChecked);
    void BndEvt__main_menu_lord_customization_checkbox_UniformScale_K2Node_ComponentBoundEvent_1_OnValueChange__DelegateSignature(bool IsChecked);
    void BndEvt__main_menu_lord_customization_nameEdit_naviProxy_K2Node_ComponentBoundEvent_3_HijackedHandleInput__DelegateSignature(ENaviUiIntent intent);
    void ExecuteUbergraph_main_menu_lord_customization(int32 EntryPoint);
    void goToGameSetup__DelegateSignature();
    void beginGame__DelegateSignature();
}; // Size: 0x6B0

#endif
