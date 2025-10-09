#ifndef UE4SS_SDK_skillButton_HPP
#define UE4SS_SDK_skillButton_HPP

class UskillButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_44;                                                         // 0x0268 (size: 0x8)
    class UImage* highlight;                                                          // 0x0270 (size: 0x8)
    class UImage* iconImg;                                                            // 0x0278 (size: 0x8)
    FString Name;                                                                     // 0x0280 (size: 0x10)
    int32 ID;                                                                         // 0x0290 (size: 0x4)
    class UTexture2D* skillIcon;                                                      // 0x0298 (size: 0x8)
    bool activated;                                                                   // 0x02A0 (size: 0x1)
    int32 numSquadsToRemove;                                                          // 0x02A4 (size: 0x4)
    TArray<int32> squadsToRemove;                                                     // 0x02A8 (size: 0x10)

    void getReasonsAsLocalizedText(TArray<FName>& Array, FText& reasonsTxt1);
    void Update Skill Available And Tooltip();
    void getSelectedSquadsWhoCanRally(class APawnCPP* Pawn, TArray<int32>& squadIDs);
    void getManorForSelectedRetinueSquad(class APawnCPP* Pawn, int32 squadID, class ASMBuildingMaster*& manor);
    class UWidget* GetToolTipWidget_0();
    void checkSkillAvailable(bool& available, TArray<FName>& outReasonsNot);
    void checkSkillActivated(TArray<class ASMUnit*>& units, const int32& skillID, bool& Active);
    void updateStatus();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__Button_44_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_skillButton(int32 EntryPoint);
}; // Size: 0x2B8

#endif
