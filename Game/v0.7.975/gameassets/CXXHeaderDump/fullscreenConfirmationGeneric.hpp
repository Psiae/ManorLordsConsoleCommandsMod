#ifndef UE4SS_SDK_fullscreenConfirmationGeneric_HPP
#define UE4SS_SDK_fullscreenConfirmationGeneric_HPP

class UfullscreenConfirmationGeneric_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UmenuButton_C* No;                                                          // 0x0268 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x0270 (size: 0x8)
    class UmenuButton_C* Yes;                                                         // 0x0278 (size: 0x8)
    FfullscreenConfirmationGeneric_COnDecision onDecision;                            // 0x0280 (size: 0x10)
    void onDecision(bool confirmed);
    FName questionKey;                                                                // 0x0290 (size: 0x8)

    void Construct();
    void BndEvt__fullscreenConfirmationGeneric_dontKeep_K2Node_ComponentBoundEvent_2_onReleased__DelegateSignature();
    void BndEvt__fullscreenConfirmationGeneric_keep_K2Node_ComponentBoundEvent_3_onReleased__DelegateSignature();
    void ExecuteUbergraph_fullscreenConfirmationGeneric(int32 EntryPoint);
    void onDecision__DelegateSignature(bool confirmed);
}; // Size: 0x298

#endif
