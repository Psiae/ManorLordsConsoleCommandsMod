#ifndef UE4SS_SDK_FamilyEntry_HPP
#define UE4SS_SDK_FamilyEntry_HPP

class UFamilyEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* lerpIn;                                                   // 0x0268 (size: 0x8)
    class UTextBlock* action_txt;                                                     // 0x0270 (size: 0x8)
    class USizeBox* assignment_sb;                                                    // 0x0278 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x0280 (size: 0x8)
    class UFamilyMember_C* FamilyMember;                                              // 0x0288 (size: 0x8)
    class UVerticalBox* familyMembers_VB;                                             // 0x0290 (size: 0x8)
    class UButton* homeButton;                                                        // 0x0298 (size: 0x8)
    class UImage* Image;                                                              // 0x02A0 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02A8 (size: 0x8)
    class UImage* Image_54;                                                           // 0x02B0 (size: 0x8)
    class UTextBlock* job_text;                                                       // 0x02B8 (size: 0x8)
    class UButton* reassignButton;                                                    // 0x02C0 (size: 0x8)
    class UButton* workplaceButton;                                                   // 0x02C8 (size: 0x8)
    bool isWorkplace;                                                                 // 0x02D0 (size: 0x1)
    bool widgetSpawnComplete;                                                         // 0x02D1 (size: 0x1)
    bool shouldUpdateByTimer;                                                         // 0x02D2 (size: 0x1)
    FWorkerFamily WorkerFamily;                                                       // 0x02D8 (size: 0x28)

    void setFamilyBeingAssignedMaterialHighlight(bool isBeingAssigned);
    bool notProSoldier(class ASMUnit* Target);
    void Construct();
    void updateContents();
    void BndEvt__PersonEntry_Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void updateDetailsThatCouldHaveChanged();
    void BndEvt__FamilyEntry_reassignButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__FamilyEntry_reassignButton_1_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_FamilyEntry(int32 EntryPoint);
}; // Size: 0x300

#endif
