#ifndef UE4SS_SDK_fullscreenConfirmationGeneric_HPP
#define UE4SS_SDK_fullscreenConfirmationGeneric_HPP

class UfullscreenConfirmationGeneric_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UmenuButton_C* No;                                                          // 0x0350 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x0358 (size: 0x8)
    class UmenuButton_C* Yes;                                                         // 0x0360 (size: 0x8)
    FfullscreenConfirmationGeneric_COnDecision onDecision;                            // 0x0368 (size: 0x10)
    void onDecision(bool confirmed);
    FName questionKey;                                                                // 0x0378 (size: 0x8)

    FNaviSubGridLayout ComputeSubGridLayout();
    void Construct();
    void BndEvt__fullscreenConfirmationGeneric_dontKeep_K2Node_ComponentBoundEvent_2_onReleased__DelegateSignature();
    void BndEvt__fullscreenConfirmationGeneric_keep_K2Node_ComponentBoundEvent_3_onReleased__DelegateSignature();
    void ExecuteUbergraph_fullscreenConfirmationGeneric(int32 EntryPoint);
    void onDecision__DelegateSignature(bool confirmed);
}; // Size: 0x380

#endif
