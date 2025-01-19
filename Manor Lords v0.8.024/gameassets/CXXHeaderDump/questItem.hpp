#ifndef UE4SS_SDK_questItem_HPP
#define UE4SS_SDK_questItem_HPP

class UquestItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* NewAnimation_1;                                           // 0x02E8 (size: 0x8)
    class UButton* Button_0;                                                          // 0x02F0 (size: 0x8)
    class UHorizontalBox* daysLeftHB;                                                 // 0x02F8 (size: 0x8)
    class UImage* fleur;                                                              // 0x0300 (size: 0x8)
    class UImage* Image_125;                                                          // 0x0308 (size: 0x8)
    class UScaleBox* objective_SB;                                                    // 0x0310 (size: 0x8)
    class USizeBox* objective_sizeb;                                                  // 0x0318 (size: 0x8)
    class UVerticalBox* objectives_VB;                                                // 0x0320 (size: 0x8)
    class UTextBlock* questTimeRemaining;                                             // 0x0328 (size: 0x8)
    class UTextBlock* Title;                                                          // 0x0330 (size: 0x8)
    FQuest Quest;                                                                     // 0x0338 (size: 0x118)
    TArray<class UquestObjective_C*> objectiveWidgets;                                // 0x0450 (size: 0x10)
    bool existedBefore;                                                               // 0x0460 (size: 0x1)
    bool foldedOut;                                                                   // 0x0461 (size: 0x1)
    bool finishedFolding;                                                             // 0x0462 (size: 0x1)

    void updateQuestTime();
    void updateObjectives();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void updateQuestDetails(FQuest Quest);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void ExecuteUbergraph_questItem(int32 EntryPoint);
}; // Size: 0x463

#endif
