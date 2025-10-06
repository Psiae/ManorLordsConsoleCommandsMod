#ifndef UE4SS_SDK_castleFloater_wallOptionWidget_HPP
#define UE4SS_SDK_castleFloater_wallOptionWidget_HPP

class UcastleFloater_wallOptionWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UButton* Button_join;                                                       // 0x02D8 (size: 0x8)
    class UImage* Image;                                                              // 0x02E0 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton_1;                                  // 0x02E8 (size: 0x8)
    class ARoad* wallA;                                                               // 0x02F0 (size: 0x8)
    class ARoad* wallB;                                                               // 0x02F8 (size: 0x8)

    void updatePosition();
    void BndEvt__castleFloater_platformLevel_Button_levelDown_1_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_castleFloater_wallOptionWidget(int32 EntryPoint);
}; // Size: 0x300

#endif
