#ifndef UE4SS_SDK_overlayLegend_HPP
#define UE4SS_SDK_overlayLegend_HPP

class UoverlayLegend_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    class UImage* Image_35;                                                           // 0x0358 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x0360 (size: 0x8)
    class UVerticalRadioSelect_C* VerticalRadioSelect;                                // 0x0368 (size: 0x8)
    FString SelectedOption;                                                           // 0x0370 (size: 0x10)

    FNaviSubGridLayout ComputeSubGridLayout();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__overlayLegend_VerticalRadioSelect_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature(FString Value);
    void ExecuteUbergraph_overlayLegend(int32 EntryPoint);
}; // Size: 0x380

#endif
