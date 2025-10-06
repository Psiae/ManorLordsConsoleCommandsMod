#ifndef UE4SS_SDK_GateControl_HPP
#define UE4SS_SDK_GateControl_HPP

class UGateControl_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UButton* Button_16;                                                         // 0x02D8 (size: 0x8)
    class UImage* Image_31;                                                           // 0x02E0 (size: 0x8)
    class ASMBuilding* BuildingPart;                                                  // 0x02E8 (size: 0x8)

    void setIconBasedOnOpenedStatus(class UGateComponent* GateComponent);
    void updatePositionInViewport();
    void Construct();
    void BndEvt__GateControl_Button_16_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_GateControl(int32 EntryPoint);
}; // Size: 0x2F0

#endif
