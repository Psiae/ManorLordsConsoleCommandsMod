#ifndef UE4SS_SDK_recruitmentCard_HPP
#define UE4SS_SDK_recruitmentCard_HPP

class UrecruitmentCard_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UOverlay* cardOverlay;                                                      // 0x02D8 (size: 0x8)
    class UImage* cardTexture;                                                        // 0x02E0 (size: 0x8)
    class UImage* locked_img;                                                         // 0x02E8 (size: 0x8)
    class UButton* unitButton;                                                        // 0x02F0 (size: 0x8)
    bool Selected;                                                                    // 0x02F8 (size: 0x1)
    FName Template;                                                                   // 0x02FC (size: 0x8)
    bool available;                                                                   // 0x0304 (size: 0x1)
    double cost;                                                                      // 0x0308 (size: 0x8)
    bool isMilitia;                                                                   // 0x0310 (size: 0x1)

    void BndEvt__Button_31_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void updateAvailability(bool newAvailability);
    void ExecuteUbergraph_recruitmentCard(int32 EntryPoint);
}; // Size: 0x311

#endif
