#ifndef UE4SS_SDK_paintWidget_HPP
#define UE4SS_SDK_paintWidget_HPP

class UpaintWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* itemIMG;                                                            // 0x0268 (size: 0x8)
    FLinearColor itemColor;                                                           // 0x0270 (size: 0x10)
    class UMaterialInstanceDynamic* materialDynamic;                                  // 0x0280 (size: 0x8)
    FpaintWidget_CItemClicked itemClicked;                                            // 0x0288 (size: 0x10)
    void itemClicked(class UcoatContentItem_C* whichItem);

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_paintWidget(int32 EntryPoint);
    void itemClicked__DelegateSignature(class UcoatContentItem_C* whichItem);
}; // Size: 0x298

#endif
