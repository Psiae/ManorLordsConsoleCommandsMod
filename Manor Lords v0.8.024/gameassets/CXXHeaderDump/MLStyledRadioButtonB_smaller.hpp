#ifndef UE4SS_SDK_MLStyledRadioButtonB_smaller_HPP
#define UE4SS_SDK_MLStyledRadioButtonB_smaller_HPP

class UMLStyledRadioButtonB_smaller_C : public URadioButton
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0318 (size: 0x8)
    class UtextButton_C* textButton;                                                  // 0x0320 (size: 0x8)
    FMLStyledRadioButtonB_smaller_COnHover onHover;                                   // 0x0328 (size: 0x10)
    void onHover(FString Value);
    FMLStyledRadioButtonB_smaller_COnLeave onLeave;                                   // 0x0338 (size: 0x10)
    void onLeave();
    FText originalLabel;                                                              // 0x0348 (size: 0x10)

    void retranslate();
    FSlateColor GetColour();
    void UpdateLabel(const FText& InLabel);
    void BndEvt__MLStyledRadioButtonB_smaller_textButton_K2Node_ComponentBoundEvent_3_onReleased__DelegateSignature();
    void BndEvt__MLStyledRadioButtonB_smaller_textButton_K2Node_ComponentBoundEvent_4_OnFocusChange__DelegateSignature(bool HasFocus);
    void UpdateSelected(bool InSelected);
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    void ExecuteUbergraph_MLStyledRadioButtonB_smaller(int32 EntryPoint);
    void onLeave__DelegateSignature();
    void onHover__DelegateSignature(FString Value);
}; // Size: 0x358

#endif
