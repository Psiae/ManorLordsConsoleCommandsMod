#ifndef UE4SS_SDK_castleFloater_platformLevel_HPP
#define UE4SS_SDK_castleFloater_platformLevel_HPP

class UcastleFloater_platformLevel_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UButton* Button_levelDown_1;                                                // 0x02D8 (size: 0x8)
    class UButton* Button_levelUp_1;                                                  // 0x02E0 (size: 0x8)
    class UImage* Image;                                                              // 0x02E8 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02F0 (size: 0x8)
    class UImage* Image_81;                                                           // 0x02F8 (size: 0x8)
    class UTextBlock* lvTxt_1;                                                        // 0x0300 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton_1;                                  // 0x0308 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton_2;                                  // 0x0310 (size: 0x8)
    class UHorizontalBox* platformLevel_HB;                                           // 0x0318 (size: 0x8)
    FcastleFloater_platformLevel_CPlatformLevelChange platformLevelChange;            // 0x0320 (size: 0x10)
    void platformLevelChange(int32 change);

    void BndEvt__castleFloater_platformLevel_Button_levelUp_1_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__castleFloater_platformLevel_Button_levelDown_1_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_castleFloater_platformLevel(int32 EntryPoint);
    void platformLevelChange__DelegateSignature(int32 change);
}; // Size: 0x330

#endif
