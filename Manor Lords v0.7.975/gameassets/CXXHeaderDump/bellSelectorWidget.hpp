#ifndef UE4SS_SDK_bellSelectorWidget_HPP
#define UE4SS_SDK_bellSelectorWidget_HPP

class UbellSelectorWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image;                                                              // 0x0268 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0270 (size: 0x8)
    class UImage* Image_46;                                                           // 0x0278 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x0280 (size: 0x8)
    class UButton* nextBell;                                                          // 0x0288 (size: 0x8)
    class UButton* playBell;                                                          // 0x0290 (size: 0x8)
    class UButton* prevBell;                                                          // 0x0298 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x02A0 (size: 0x8)

    void updateBellAchievement();
    void Play Bell Sound();
    void BndEvt__bellSelectorWidget_Button_28_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__bellSelectorWidget_Button_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__bellSelectorWidget_Button_1_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_bellSelectorWidget(int32 EntryPoint);
}; // Size: 0x2A8

#endif
