#ifndef UE4SS_SDK_coatContentItem_HPP
#define UE4SS_SDK_coatContentItem_HPP

class UcoatContentItem_C : public UNaviUi
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UButton* Button_43;                                                         // 0x0348 (size: 0x8)
    class UImage* itemIMG;                                                            // 0x0350 (size: 0x8)
    class UMD_NaviAutoFocusHighlight_C* MD_NaviAutoFocusHighlight;                    // 0x0358 (size: 0x8)
    FLinearColor itemColor;                                                           // 0x0360 (size: 0x10)
    class UMaterialInstanceDynamic* materialDynamic;                                  // 0x0370 (size: 0x8)
    FcoatContentItem_CItemClicked itemClicked;                                        // 0x0378 (size: 0x10)
    void itemClicked(class UcoatContentItem_C* whichItem);
    bool isForeground;                                                                // 0x0388 (size: 0x1)
    bool isColorTint;                                                                 // 0x0389 (size: 0x1)
    bool isB;                                                                         // 0x038A (size: 0x1)
    class UTexture2D* Texture;                                                        // 0x0390 (size: 0x8)
    bool isMask;                                                                      // 0x0398 (size: 0x1)
    bool isTreatment;                                                                 // 0x0399 (size: 0x1)
    double Tiling;                                                                    // 0x03A0 (size: 0x8)

    ENaviHandleMethod HandleInput(ENaviUiIntent Key);
    void SetImageSize(FDeprecateSlateVector2D NewSize);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__coatContentItem_Button_43_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_coatContentItem(int32 EntryPoint);
    void itemClicked__DelegateSignature(class UcoatContentItem_C* whichItem);
}; // Size: 0x3A8

#endif
