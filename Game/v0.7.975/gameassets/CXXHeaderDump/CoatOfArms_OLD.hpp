#ifndef UE4SS_SDK_CoatOfArms_OLD_HPP
#define UE4SS_SDK_CoatOfArms_OLD_HPP

class UCoatOfArms_OLD_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_78;                                                         // 0x0268 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0270 (size: 0x8)
    class APawnCPP* Pawn;                                                             // 0x0278 (size: 0x8)

    void BndEvt__Button_78_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_CoatOfArms_OLD(int32 EntryPoint);
}; // Size: 0x280

#endif
