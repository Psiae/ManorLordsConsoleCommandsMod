#ifndef UE4SS_SDK_bellSelectorWidget_HPP
#define UE4SS_SDK_bellSelectorWidget_HPP

class UbellSelectorWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Image;                                                              // 0x02E8 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02F0 (size: 0x8)
    class UImage* Image_46;                                                           // 0x02F8 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x0300 (size: 0x8)
    class UButton* nextBell;                                                          // 0x0308 (size: 0x8)
    class UButton* playBell;                                                          // 0x0310 (size: 0x8)
    class UButton* prevBell;                                                          // 0x0318 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x0320 (size: 0x8)

    void updateBellAchievement();
    void Play Bell Sound();
    void BndEvt__bellSelectorWidget_Button_28_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__bellSelectorWidget_Button_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__bellSelectorWidget_Button_1_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_bellSelectorWidget(int32 EntryPoint);
}; // Size: 0x328

#endif
