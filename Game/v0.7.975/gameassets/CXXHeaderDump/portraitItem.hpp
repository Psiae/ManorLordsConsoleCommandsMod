#ifndef UE4SS_SDK_portraitItem_HPP
#define UE4SS_SDK_portraitItem_HPP

class UportraitItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_0;                                                          // 0x0268 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0270 (size: 0x8)
    class UTexture2D* Texture;                                                        // 0x0278 (size: 0x8)
    FportraitItem_CPortraitChanged portraitChanged;                                   // 0x0280 (size: 0x10)
    void portraitChanged(class UTexture2D* newTexture, bool isFemale);
    bool isFemale;                                                                    // 0x0290 (size: 0x1)

    void PreConstruct(bool IsDesignTime);
    void BndEvt__portraitItem_Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_portraitItem(int32 EntryPoint);
    void portraitChanged__DelegateSignature(class UTexture2D* newTexture, bool isFemale);
}; // Size: 0x291

#endif
