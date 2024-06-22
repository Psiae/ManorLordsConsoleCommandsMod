#ifndef UE4SS_SDK_coatFieldContentsWidget_HPP
#define UE4SS_SDK_coatFieldContentsWidget_HPP

class UcoatFieldContentsWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UHorizontalBox* add_Hscale_HB;                                              // 0x0268 (size: 0x8)
    class UHorizontalBox* add_Vscale_HB_1;                                            // 0x0270 (size: 0x8)
    class USlider* bg_angle_slider;                                                   // 0x0278 (size: 0x8)
    class UTextBlock* bg_angle_txt;                                                   // 0x0280 (size: 0x8)
    class UcoatContentGridSelect_C* bg_colorA;                                        // 0x0288 (size: 0x8)
    class UcoatContentGridSelect_C* bg_colorB;                                        // 0x0290 (size: 0x8)
    class UHorizontalBox* BG_Header_HB;                                               // 0x0298 (size: 0x8)
    class UHorizontalBox* BG_Rotation_HB;                                             // 0x02A0 (size: 0x8)
    class UcoatContentGridSelect_C* bg_texture;                                       // 0x02A8 (size: 0x8)
    class UHorizontalBox* bg_tiling_HB_1;                                             // 0x02B0 (size: 0x8)
    class UVerticalBox* BG_VB;                                                        // 0x02B8 (size: 0x8)
    class UHorizontalBox* FG_Header_HB;                                               // 0x02C0 (size: 0x8)
    class UcoatContentGridSelect_C* FG_Symbol_ColorB;                                 // 0x02C8 (size: 0x8)
    class UcoatContentGridSelect_C* FG_SymbolColorA;                                  // 0x02D0 (size: 0x8)
    class UcoatContentGridSelect_C* FG_Texture_Choice;                                // 0x02D8 (size: 0x8)
    class UVerticalBox* FG_VB;                                                        // 0x02E0 (size: 0x8)
    class UHorizontalBox* HorizontalBox_3;                                            // 0x02E8 (size: 0x8)
    class UImage* Image;                                                              // 0x02F0 (size: 0x8)
    class UImage* Image_154;                                                          // 0x02F8 (size: 0x8)
    class UHorizontalBox* num_instances-HB;                                           // 0x0300 (size: 0x8)
    class UTextBlock* numInstancesTxt;                                                // 0x0308 (size: 0x8)
    class USlider* Slider_261;                                                        // 0x0310 (size: 0x8)
    class USlider* symbol_scale_slider;                                               // 0x0318 (size: 0x8)
    class USlider* symbol_scale_slider_1;                                             // 0x0320 (size: 0x8)
    class UTextBlock* symbol_scale_txt;                                               // 0x0328 (size: 0x8)
    class UVerticalBox* Symbol_VB;                                                    // 0x0330 (size: 0x8)
    class USlider* symbol_Vscale_slider_2;                                            // 0x0338 (size: 0x8)
    class UTextBlock* symbol_Vscale_txt_1;                                            // 0x0340 (size: 0x8)
    class UVerticalBox* symbolDetails_VB;                                             // 0x0348 (size: 0x8)
    class UHorizontalBox* symbolScaling_HB;                                           // 0x0350 (size: 0x8)
    class UTextBlock* TextBlock_4;                                                    // 0x0358 (size: 0x8)
    class UTextBlock* tiling_txt;                                                     // 0x0360 (size: 0x8)
    class UCheckBox* uniformscale_chkb;                                               // 0x0368 (size: 0x8)
    class UVerticalBox* VerticalBox_0;                                                // 0x0370 (size: 0x8)
    class UVerticalBox* VerticalBox_LEFT;                                             // 0x0378 (size: 0x8)
    class UVerticalBox* VerticalBox_RIGHT;                                            // 0x0380 (size: 0x8)
    TArray<FLinearColor> Available Colors;                                            // 0x0388 (size: 0x10)
    FcoatFieldContentsWidget_CFieldContentsChanged fieldContentsChanged;              // 0x0398 (size: 0x10)
    void fieldContentsChanged(bool flicker);
    FCoatField fieldContents;                                                         // 0x03A8 (size: 0xA8)
    TArray<class UTexture2D*> BG_Textures;                                            // 0x0450 (size: 0x10)
    TArray<class UTexture2D*> FG_Textures;                                            // 0x0460 (size: 0x10)
    TArray<class UTexture2D*> Treatment_Textures;                                     // 0x0470 (size: 0x10)
    FName fieldNameKey;                                                               // 0x0480 (size: 0x8)
    bool UniformScale;                                                                // 0x0488 (size: 0x1)
    float lastSliderSfx;                                                              // 0x048C (size: 0x4)
    float deltaTFast;                                                                 // 0x0490 (size: 0x4)

    void sliderSfx();
    void selectDefaultIconForGrid(class UcoatContentGridSelect_C* contentGrid, int32 Index);
    void populateWithTextures(class UcoatContentGridSelect_C* contentGrid, bool isForeground, bool isB, TArray<class UTexture2D*>& availableTextures, bool isTreatment);
    void OnCoatItemPressed(class UcoatContentItem_C* whichItem);
    void populateWithColors(class UcoatContentGridSelect_C* contentGrid, TArray<FLinearColor>& availableColors, bool isForeground, bool isB, bool isTreatment);
    void repopulateGrids();
    void BndEvt__coatFieldContentsWidget_symbol_scale_slider_1_K2Node_ComponentBoundEvent_4_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__coatFieldContentsWidget_symbol_Vscale_slider_2_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__coatFieldContentsWidget_uniformscale_chkb_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__coatFieldContentsWidget_bg_angle_slider_K2Node_ComponentBoundEvent_7_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void Construct();
    void BndEvt__coatFieldContentsWidget_symbol_scale_slider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__coatFieldContentsWidget_Slider_261_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void ExecuteUbergraph_coatFieldContentsWidget(int32 EntryPoint);
    void fieldContentsChanged__DelegateSignature(bool flicker);
}; // Size: 0x494

#endif
