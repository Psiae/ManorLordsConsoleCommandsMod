#ifndef UE4SS_SDK_resolutionConfirmation_HPP
#define UE4SS_SDK_resolutionConfirmation_HPP

class UresolutionConfirmation_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UmenuButton_C* dontKeep;                                                    // 0x0268 (size: 0x8)
    class UmenuButton_C* keep;                                                        // 0x0270 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x0278 (size: 0x8)
    class UTextBlock* TextBlock_46;                                                   // 0x0280 (size: 0x8)
    float timeElapsed;                                                                // 0x0288 (size: 0x4)
    FresolutionConfirmation_CGoBackToPreviousResolution goBackToPreviousResolution;   // 0x0290 (size: 0x10)
    void goBackToPreviousResolution();
    FTimerHandle abortTimerHandle;                                                    // 0x02A0 (size: 0x8)

    void Construct();
    void abortTimer();
    void BndEvt__resolutionConfirmation_menuButton_K2Node_ComponentBoundEvent_0_onReleased__DelegateSignature();
    void BndEvt__resolutionConfirmation_menuButton_1_K2Node_ComponentBoundEvent_1_onReleased__DelegateSignature();
    void ExecuteUbergraph_resolutionConfirmation(int32 EntryPoint);
    void goBackToPreviousResolution__DelegateSignature();
}; // Size: 0x2A8

#endif
