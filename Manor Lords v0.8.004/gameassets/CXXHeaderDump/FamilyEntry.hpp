#ifndef UE4SS_SDK_FamilyEntry_HPP
#define UE4SS_SDK_FamilyEntry_HPP

class UFamilyEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* lerpIn;                                                   // 0x02E8 (size: 0x8)
    class UTextBlock* action_txt;                                                     // 0x02F0 (size: 0x8)
    class USizeBox* assignment_sb;                                                    // 0x02F8 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x0300 (size: 0x8)
    class UFamilyMember_C* FamilyMember;                                              // 0x0308 (size: 0x8)
    class UVerticalBox* familyMembers_VB;                                             // 0x0310 (size: 0x8)
    class UButton* homeButton;                                                        // 0x0318 (size: 0x8)
    class UImage* Image;                                                              // 0x0320 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0328 (size: 0x8)
    class UImage* Image_54;                                                           // 0x0330 (size: 0x8)
    class UTextBlock* job_text;                                                       // 0x0338 (size: 0x8)
    class UButton* reassignButton;                                                    // 0x0340 (size: 0x8)
    class UButton* workplaceButton;                                                   // 0x0348 (size: 0x8)
    bool isWorkplace;                                                                 // 0x0350 (size: 0x1)
    bool widgetSpawnComplete;                                                         // 0x0351 (size: 0x1)
    bool shouldUpdateByTimer;                                                         // 0x0352 (size: 0x1)
    FWorkerFamily WorkerFamily;                                                       // 0x0358 (size: 0x28)

    void setFamilyBeingAssignedMaterialHighlight(bool isBeingAssigned);
    bool notProSoldier(class ASMUnit* Target);
    void Construct();
    void updateContents();
    void BndEvt__PersonEntry_Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void updateDetailsThatCouldHaveChanged();
    void BndEvt__FamilyEntry_reassignButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__FamilyEntry_reassignButton_1_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_FamilyEntry(int32 EntryPoint);
}; // Size: 0x380

#endif
