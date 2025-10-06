#ifndef UE4SS_SDK_bellSelectorWidget_HPP
#define UE4SS_SDK_bellSelectorWidget_HPP

class UbellSelectorWidget_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UImage* Image;                                                              // 0x0350 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0358 (size: 0x8)
    class UImage* Image_46;                                                           // 0x0360 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x0368 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton;                                    // 0x0370 (size: 0x8)
    class UMD_NaviAutoButton_C* Navi_BtnNext;                                         // 0x0378 (size: 0x8)
    class UMD_NaviAutoButton_C* Navi_BtnPrev;                                         // 0x0380 (size: 0x8)
    class UButton* nextBell;                                                          // 0x0388 (size: 0x8)
    class UButton* playBell;                                                          // 0x0390 (size: 0x8)
    class UButton* prevBell;                                                          // 0x0398 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x03A0 (size: 0x8)

    FNaviSubGridLayout ComputeSubGridLayout();
    void updateBellAchievement();
    void Play Bell Sound();
    void BndEvt__bellSelectorWidget_Button_28_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__bellSelectorWidget_Button_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__bellSelectorWidget_Button_1_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_bellSelectorWidget(int32 EntryPoint);
}; // Size: 0x3A8

#endif
