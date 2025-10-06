#ifndef UE4SS_SDK_portraitItem_HPP
#define UE4SS_SDK_portraitItem_HPP

class UportraitItem_C : public UNaviUi
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UButton* Button_0;                                                          // 0x0348 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0350 (size: 0x8)
    class UMD_NaviAutoFocusHighlight_C* MD_NaviAutoFocusHighlight;                    // 0x0358 (size: 0x8)
    class UTexture2D* Texture;                                                        // 0x0360 (size: 0x8)
    FportraitItem_CPortraitChanged portraitChanged;                                   // 0x0368 (size: 0x10)
    void portraitChanged(class UTexture2D* NewTexture, bool isFemale);
    bool isFemale;                                                                    // 0x0378 (size: 0x1)

    ENaviHandleMethod HandleInput(ENaviUiIntent Key);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__portraitItem_Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void DoActivation();
    void BndEvt__portraitItem_Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_portraitItem(int32 EntryPoint);
    void portraitChanged__DelegateSignature(class UTexture2D* NewTexture, bool isFemale);
}; // Size: 0x379

#endif
