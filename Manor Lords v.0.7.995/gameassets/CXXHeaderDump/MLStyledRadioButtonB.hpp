#ifndef UE4SS_SDK_MLStyledRadioButtonB_HPP
#define UE4SS_SDK_MLStyledRadioButtonB_HPP

class UMLStyledRadioButtonB_C : public URadioButton
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UTextBlock* LabelText;                                                      // 0x0320 (size: 0x8)
    class UButton* MainButton;                                                        // 0x0328 (size: 0x8)
    class UMD_NaviHijackProxy_C* MD_NaviHijackProxy;                                  // 0x0330 (size: 0x8)
    FMLStyledRadioButtonB_COnHover onHover;                                           // 0x0338 (size: 0x10)
    void onHover(FString Value);
    FMLStyledRadioButtonB_COnLeave onLeave;                                           // 0x0348 (size: 0x10)
    void onLeave();
    bool Localized;                                                                   // 0x0358 (size: 0x1)
    FText originalLabel;                                                              // 0x0360 (size: 0x10)

    void HandleInput(ENaviUiIntent intent);
    void InitConsoleControls();
    FSlateColor GetColour();
    void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void UpdateLabel(const FText& InLabel);
    void BndEvt__MLStyledRadioButtonB_MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__MLStyledRadioButtonB_MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void retranslate();
    void PreConstruct(bool IsDesignTime);
    void OnActivation();
    void ExecuteUbergraph_MLStyledRadioButtonB(int32 EntryPoint);
    void onLeave__DelegateSignature();
    void onHover__DelegateSignature(FString Value);
}; // Size: 0x370

#endif
