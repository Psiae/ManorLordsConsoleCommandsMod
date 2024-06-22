#ifndef UE4SS_SDK_recruitmentCard_HPP
#define UE4SS_SDK_recruitmentCard_HPP

class UrecruitmentCard_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UOverlay* cardOverlay;                                                      // 0x0268 (size: 0x8)
    class UImage* cardTexture;                                                        // 0x0270 (size: 0x8)
    class UImage* locked_img;                                                         // 0x0278 (size: 0x8)
    class UButton* unitButton;                                                        // 0x0280 (size: 0x8)
    bool Selected;                                                                    // 0x0288 (size: 0x1)
    FName Template;                                                                   // 0x028C (size: 0x8)
    bool available;                                                                   // 0x0294 (size: 0x1)
    float cost;                                                                       // 0x0298 (size: 0x4)
    bool isMilitia;                                                                   // 0x029C (size: 0x1)

    void BndEvt__Button_31_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void updateAvailability(bool newAvailability);
    void ExecuteUbergraph_recruitmentCard(int32 EntryPoint);
}; // Size: 0x29D

#endif
