#ifndef UE4SS_SDK_stanceButton_HPP
#define UE4SS_SDK_stanceButton_HPP

class UstanceButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button_44;                                                         // 0x02E8 (size: 0x8)
    class UImage* highlight;                                                          // 0x02F0 (size: 0x8)
    class UImage* iconImg;                                                            // 0x02F8 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton;                                    // 0x0300 (size: 0x8)
    FString Name;                                                                     // 0x0308 (size: 0x10)
    int32 ID;                                                                         // 0x0318 (size: 0x4)
    class UTexture2D* skillIcon;                                                      // 0x0320 (size: 0x8)
    bool activated;                                                                   // 0x0328 (size: 0x1)
    EBehaviourStance behaviourStance;                                                 // 0x0329 (size: 0x1)
    bool isPushStance;                                                                // 0x032A (size: 0x1)
    EPushStance pushStance;                                                           // 0x032B (size: 0x1)

    void checkStanceAvailable(TArray<class ASMUnit*>& units, const int32& skillID, bool& Active);
    void checkStanceActivated(TArray<class ASMUnit*>& units, bool& Active);
    void updateStatus();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__Button_44_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_stanceButton(int32 EntryPoint);
}; // Size: 0x32C

#endif
