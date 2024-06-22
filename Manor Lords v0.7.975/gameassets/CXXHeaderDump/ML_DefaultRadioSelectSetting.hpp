#ifndef UE4SS_SDK_ML_DefaultRadioSelectSetting_HPP
#define UE4SS_SDK_ML_DefaultRadioSelectSetting_HPP

class UML_DefaultRadioSelectSetting_C : public UDefaultRadioSelectSetting_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02F8 (size: 0x8)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__DefaultRadioSelectSetting_RadioSelect_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature(FString Value);
    void ExecuteUbergraph_ML_DefaultRadioSelectSetting(int32 EntryPoint);
}; // Size: 0x300

#endif
