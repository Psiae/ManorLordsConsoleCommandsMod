#ifndef UE4SS_SDK_stanceButton_HPP
#define UE4SS_SDK_stanceButton_HPP

class UstanceButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_44;                                                         // 0x0268 (size: 0x8)
    class UImage* highlight;                                                          // 0x0270 (size: 0x8)
    class UImage* iconImg;                                                            // 0x0278 (size: 0x8)
    FString Name;                                                                     // 0x0280 (size: 0x10)
    int32 ID;                                                                         // 0x0290 (size: 0x4)
    class UTexture2D* skillIcon;                                                      // 0x0298 (size: 0x8)
    bool activated;                                                                   // 0x02A0 (size: 0x1)
    EBehaviourStance behaviourStance;                                                 // 0x02A1 (size: 0x1)
    bool isPushStance;                                                                // 0x02A2 (size: 0x1)
    EPushStance pushStance;                                                           // 0x02A3 (size: 0x1)

    void checkStanceAvailable(TArray<class ASMUnit*>& units, const int32& skillID, bool& Active);
    void checkStanceActivated(TArray<class ASMUnit*>& units, bool& Active);
    void updateStatus();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__Button_44_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_stanceButton(int32 EntryPoint);
}; // Size: 0x2A4

#endif
