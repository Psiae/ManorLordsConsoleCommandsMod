#ifndef UE4SS_SDK_manorDetails_HPP
#define UE4SS_SDK_manorDetails_HPP

class UmanorDetails_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button;                                                            // 0x0268 (size: 0x8)
    class UButton* castlePlanner;                                                     // 0x0270 (size: 0x8)
    class UImage* Image;                                                              // 0x0278 (size: 0x8)
    class UImage* Image_21;                                                           // 0x0280 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_0;                                  // 0x0288 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x0290 (size: 0x8)

    void BndEvt__manorDetails_Button_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__manorDetails_Button_13_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_manorDetails(int32 EntryPoint);
}; // Size: 0x298

#endif
