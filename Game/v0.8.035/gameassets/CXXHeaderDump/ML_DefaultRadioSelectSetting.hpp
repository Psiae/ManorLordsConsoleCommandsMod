#ifndef UE4SS_SDK_ML_DefaultRadioSelectSetting_HPP
#define UE4SS_SDK_ML_DefaultRadioSelectSetting_HPP

class UML_DefaultRadioSelectSetting_C : public UDefaultRadioSelectSetting_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    FML_DefaultRadioSelectSetting_COnSelectionChangedML OnSelectionChangedML;         // 0x0358 (size: 0x10)
    void OnSelectionChangedML(FString NextValue);

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__DefaultRadioSelectSetting_RadioSelect_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature(FString Value);
    void ExecuteUbergraph_ML_DefaultRadioSelectSetting(int32 EntryPoint);
    void OnSelectionChangedML__DelegateSignature(FString NextValue);
}; // Size: 0x368

#endif
