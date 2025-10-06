#ifndef UE4SS_SDK_iconButton_HPP
#define UE4SS_SDK_iconButton_HPP

class UiconButton_C : public UNaviUi
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UButton* Button;                                                            // 0x0348 (size: 0x8)
    class UImage* IconDisplay;                                                        // 0x0350 (size: 0x8)
    class UMD_NaviAutoFocusHighlight_C* MD_NaviAutoFocusHighlight;                    // 0x0358 (size: 0x8)
    class UBorder* Tinter;                                                            // 0x0360 (size: 0x8)
    FiconButton_COnReleased OnReleased;                                               // 0x0368 (size: 0x10)
    void onReleased();
    class USoundBase* pressedSfx;                                                     // 0x0378 (size: 0x8)
    class UTexture2D* iconTexture;                                                    // 0x0380 (size: 0x8)
    int32 IconSize;                                                                   // 0x0388 (size: 0x4)
    bool IsActiveSelection;                                                           // 0x038C (size: 0x1)

    void ShowAsActiveSelection(bool IsActive);
    void SetImageSize(class UImage* InputPin, int32 Size);
    void DoOnReleased();
    ENaviHandleMethod HandleInput(ENaviUiIntent Key);
    void BndEvt__menuButton_Button_35_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__menuButton_Button_35_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_iconButton(int32 EntryPoint);
    void onReleased__DelegateSignature();
}; // Size: 0x38D

#endif
