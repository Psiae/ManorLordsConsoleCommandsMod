#ifndef UE4SS_SDK_manorDetails_HPP
#define UE4SS_SDK_manorDetails_HPP

class UmanorDetails_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button;                                                            // 0x02E8 (size: 0x8)
    class UButton* castlePlanner;                                                     // 0x02F0 (size: 0x8)
    class UImage* Image;                                                              // 0x02F8 (size: 0x8)
    class UImage* Image_21;                                                           // 0x0300 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox_C_0;                                  // 0x0308 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton;                                    // 0x0310 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x0318 (size: 0x8)

    void BndEvt__manorDetails_Button_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__manorDetails_Button_13_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_manorDetails(int32 EntryPoint);
}; // Size: 0x320

#endif
