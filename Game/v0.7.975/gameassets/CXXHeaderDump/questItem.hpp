#ifndef UE4SS_SDK_questItem_HPP
#define UE4SS_SDK_questItem_HPP

class UquestItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* NewAnimation_1;                                           // 0x0268 (size: 0x8)
    class UButton* Button_0;                                                          // 0x0270 (size: 0x8)
    class UHorizontalBox* daysLeftHB;                                                 // 0x0278 (size: 0x8)
    class UImage* fleur;                                                              // 0x0280 (size: 0x8)
    class UImage* Image_125;                                                          // 0x0288 (size: 0x8)
    class UScaleBox* objective_SB;                                                    // 0x0290 (size: 0x8)
    class USizeBox* objective_sizeb;                                                  // 0x0298 (size: 0x8)
    class UVerticalBox* objectives_VB;                                                // 0x02A0 (size: 0x8)
    class UTextBlock* questTimeRemaining;                                             // 0x02A8 (size: 0x8)
    class UTextBlock* Title;                                                          // 0x02B0 (size: 0x8)
    FQuest Quest;                                                                     // 0x02B8 (size: 0x118)
    TArray<class UquestObjective_C*> objectiveWidgets;                                // 0x03D0 (size: 0x10)
    bool existedBefore;                                                               // 0x03E0 (size: 0x1)
    bool foldedOut;                                                                   // 0x03E1 (size: 0x1)
    bool finishedFolding;                                                             // 0x03E2 (size: 0x1)

    void updateQuestTime();
    void updateObjectives();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void updateQuestDetails(FQuest Quest);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_questItem(int32 EntryPoint);
}; // Size: 0x3E3

#endif
