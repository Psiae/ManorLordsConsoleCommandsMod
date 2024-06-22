#ifndef UE4SS_SDK_policyWidget_HPP
#define UE4SS_SDK_policyWidget_HPP

class UpolicyWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_22;                                                         // 0x0268 (size: 0x8)
    class UImage* check;                                                              // 0x0270 (size: 0x8)
    class UImage* Image_40;                                                           // 0x0278 (size: 0x8)
    int32 policyID;                                                                   // 0x0280 (size: 0x4)
    class ARegion* Region;                                                            // 0x0288 (size: 0x8)
    int32 policyTier;                                                                 // 0x0290 (size: 0x4)
    FpolicyWidget_CShouldUpdatePolicyView shouldUpdatePolicyView;                     // 0x0298 (size: 0x10)
    void shouldUpdatePolicyView();
    bool WIP;                                                                         // 0x02A8 (size: 0x1)

    void forcePlayEventMessage(FText textSecondary, FText Text, FName msgType);
    void updateSignedAndAvailable();
    void BndEvt__policyWidget_Button_22_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_policyWidget(int32 EntryPoint);
    void shouldUpdatePolicyView__DelegateSignature();
}; // Size: 0x2A9

#endif
