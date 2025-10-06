#ifndef UE4SS_SDK_policyWidget_HPP
#define UE4SS_SDK_policyWidget_HPP

class UpolicyWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UButton* Button_22;                                                         // 0x02D8 (size: 0x8)
    class UImage* check;                                                              // 0x02E0 (size: 0x8)
    class UImage* Image_40;                                                           // 0x02E8 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton;                                    // 0x02F0 (size: 0x8)
    int32 policyID;                                                                   // 0x02F8 (size: 0x4)
    class ARegion* Region;                                                            // 0x0300 (size: 0x8)
    int32 policyTier;                                                                 // 0x0308 (size: 0x4)
    FpolicyWidget_CShouldUpdatePolicyView shouldUpdatePolicyView;                     // 0x0310 (size: 0x10)
    void shouldUpdatePolicyView();
    bool wip;                                                                         // 0x0320 (size: 0x1)

    void ApplyPlatformLimits(bool IsDesignTime);
    void forcePlayEventMessage(FText textSecondary, FText Text, FName msgType);
    void updateSignedAndAvailable();
    void BndEvt__policyWidget_Button_22_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_policyWidget(int32 EntryPoint);
    void shouldUpdatePolicyView__DelegateSignature();
}; // Size: 0x321

#endif
