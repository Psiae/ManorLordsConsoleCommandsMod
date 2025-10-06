#ifndef UE4SS_SDK_addSquadCard_HPP
#define UE4SS_SDK_addSquadCard_HPP

class UaddSquadCard_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UOverlay* cardOverlay;                                                      // 0x02D8 (size: 0x8)
    class UImage* cardTexture;                                                        // 0x02E0 (size: 0x8)
    class UImage* locked_img;                                                         // 0x02E8 (size: 0x8)
    class UImage* locked_img_1;                                                       // 0x02F0 (size: 0x8)
    class UImage* locked_img_2;                                                       // 0x02F8 (size: 0x8)
    class UImage* locked_img_3;                                                       // 0x0300 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton;                                    // 0x0308 (size: 0x8)
    class UButton* unitButton;                                                        // 0x0310 (size: 0x8)
    FName unitType;                                                                   // 0x0318 (size: 0x8)

    void updateTooltip();
    void BndEvt__addSquadCard_unitButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__addSquadCard_unitButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__addSquadCard_MD_NaviAutoButton_K2Node_ComponentBoundEvent_2_OnFocusChange__DelegateSignature(bool HasFocus);
    void ExecuteUbergraph_addSquadCard(int32 EntryPoint);
}; // Size: 0x320

#endif
