#ifndef UE4SS_SDK_resolutionConfirmation_HPP
#define UE4SS_SDK_resolutionConfirmation_HPP

class UresolutionConfirmation_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UmenuButton_C* dontKeep;                                                    // 0x02E8 (size: 0x8)
    class UmenuButton_C* keep;                                                        // 0x02F0 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x02F8 (size: 0x8)
    class UTextBlock* TextBlock_46;                                                   // 0x0300 (size: 0x8)
    double timeElapsed;                                                               // 0x0308 (size: 0x8)
    FresolutionConfirmation_CGoBackToPreviousResolution goBackToPreviousResolution;   // 0x0310 (size: 0x10)
    void goBackToPreviousResolution();
    FTimerHandle abortTimerHandle;                                                    // 0x0320 (size: 0x8)

    void Construct();
    void abortTimer();
    void BndEvt__resolutionConfirmation_menuButton_K2Node_ComponentBoundEvent_0_onReleased__DelegateSignature();
    void BndEvt__resolutionConfirmation_menuButton_1_K2Node_ComponentBoundEvent_1_onReleased__DelegateSignature();
    void ExecuteUbergraph_resolutionConfirmation(int32 EntryPoint);
    void goBackToPreviousResolution__DelegateSignature();
}; // Size: 0x328

#endif
