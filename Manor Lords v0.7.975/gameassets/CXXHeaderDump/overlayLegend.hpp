#ifndef UE4SS_SDK_overlayLegend_HPP
#define UE4SS_SDK_overlayLegend_HPP

class UoverlayLegend_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_35;                                                           // 0x0268 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x0270 (size: 0x8)
    class UVerticalRadioSelect_C* VerticalRadioSelect;                                // 0x0278 (size: 0x8)
    FString SelectedOption;                                                           // 0x0280 (size: 0x10)

    void PreConstruct(bool IsDesignTime);
    void BndEvt__overlayLegend_VerticalRadioSelect_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature(FString Value);
    void ExecuteUbergraph_overlayLegend(int32 EntryPoint);
}; // Size: 0x290

#endif
