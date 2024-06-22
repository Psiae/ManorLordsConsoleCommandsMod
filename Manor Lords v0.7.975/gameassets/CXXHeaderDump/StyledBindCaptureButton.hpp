#ifndef UE4SS_SDK_StyledBindCaptureButton_HPP
#define UE4SS_SDK_StyledBindCaptureButton_HPP

class UStyledBindCaptureButton_C : public UBindCaptureButton
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UButton* Button_0;                                                          // 0x0298 (size: 0x8)
    class UNamedSlot* Content;                                                        // 0x02A0 (size: 0x8)

    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_StyledBindCaptureButton(int32 EntryPoint);
}; // Size: 0x2A8

#endif
