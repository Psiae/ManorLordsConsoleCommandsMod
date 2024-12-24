#ifndef UE4SS_SDK_paintWidget_HPP
#define UE4SS_SDK_paintWidget_HPP

class UpaintWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* itemIMG;                                                            // 0x02E8 (size: 0x8)
    FLinearColor itemColor;                                                           // 0x02F0 (size: 0x10)
    class UMaterialInstanceDynamic* materialDynamic;                                  // 0x0300 (size: 0x8)
    FpaintWidget_CItemClicked itemClicked;                                            // 0x0308 (size: 0x10)
    void itemClicked(class UcoatContentItem_C* whichItem);

    void OnMouseButtonUp_0(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void PreConstruct(bool IsDesignTime);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_paintWidget(int32 EntryPoint);
    void itemClicked__DelegateSignature(class UcoatContentItem_C* whichItem);
}; // Size: 0x318

#endif
