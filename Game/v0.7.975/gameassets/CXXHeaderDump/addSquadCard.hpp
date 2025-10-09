#ifndef UE4SS_SDK_addSquadCard_HPP
#define UE4SS_SDK_addSquadCard_HPP

class UaddSquadCard_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UOverlay* cardOverlay;                                                      // 0x0268 (size: 0x8)
    class UImage* cardTexture;                                                        // 0x0270 (size: 0x8)
    class UImage* locked_img;                                                         // 0x0278 (size: 0x8)
    class UImage* locked_img_1;                                                       // 0x0280 (size: 0x8)
    class UImage* locked_img_2;                                                       // 0x0288 (size: 0x8)
    class UButton* unitButton;                                                        // 0x0290 (size: 0x8)
    FName unitType;                                                                   // 0x0298 (size: 0x8)

    void BndEvt__addSquadCard_unitButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__addSquadCard_unitButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_addSquadCard(int32 EntryPoint);
}; // Size: 0x2A0

#endif
