#ifndef UE4SS_SDK_DefaultRadioSelectSetting_HPP
#define UE4SS_SDK_DefaultRadioSelectSetting_HPP

class UDefaultRadioSelectSetting_C : public URadioSelectSetting
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    FDefaultRadioSelectSetting_CSelectionChanged selectionChanged;                    // 0x02E8 (size: 0x10)
    void selectionChanged(FString Value);

    void BndEvt__DefaultRadioSelectSetting_RadioSelect_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature(FString Value);
    void ExecuteUbergraph_DefaultRadioSelectSetting(int32 EntryPoint);
    void selectionChanged__DelegateSignature(FString Value);
}; // Size: 0x2F8

#endif
