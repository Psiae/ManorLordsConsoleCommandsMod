#ifndef UE4SS_SDK_coatContentItem_HPP
#define UE4SS_SDK_coatContentItem_HPP

class UcoatContentItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_43;                                                         // 0x0268 (size: 0x8)
    class UImage* itemIMG;                                                            // 0x0270 (size: 0x8)
    FLinearColor itemColor;                                                           // 0x0278 (size: 0x10)
    class UMaterialInstanceDynamic* materialDynamic;                                  // 0x0288 (size: 0x8)
    FcoatContentItem_CItemClicked itemClicked;                                        // 0x0290 (size: 0x10)
    void itemClicked(class UcoatContentItem_C* whichItem);
    bool isForeground;                                                                // 0x02A0 (size: 0x1)
    bool isColorTint;                                                                 // 0x02A1 (size: 0x1)
    bool isB;                                                                         // 0x02A2 (size: 0x1)
    class UTexture2D* Texture;                                                        // 0x02A8 (size: 0x8)
    bool isMask;                                                                      // 0x02B0 (size: 0x1)
    bool isTreatment;                                                                 // 0x02B1 (size: 0x1)
    float Tiling;                                                                     // 0x02B4 (size: 0x4)

    void PreConstruct(bool IsDesignTime);
    void BndEvt__coatContentItem_Button_43_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_coatContentItem(int32 EntryPoint);
    void itemClicked__DelegateSignature(class UcoatContentItem_C* whichItem);
}; // Size: 0x2B8

#endif
