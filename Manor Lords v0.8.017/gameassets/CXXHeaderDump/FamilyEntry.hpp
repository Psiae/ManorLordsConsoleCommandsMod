#ifndef UE4SS_SDK_FamilyEntry_HPP
#define UE4SS_SDK_FamilyEntry_HPP

class UFamilyEntry_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0350 (size: 0x8)
    class UWidgetAnimation* lerpIn;                                                   // 0x0358 (size: 0x8)
    class UTextBlock* action_txt;                                                     // 0x0360 (size: 0x8)
    class USizeBox* assignment_sb;                                                    // 0x0368 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x0370 (size: 0x8)
    class UFamilyMember_C* FamilyMember;                                              // 0x0378 (size: 0x8)
    class UVerticalBox* familyMembers_VB;                                             // 0x0380 (size: 0x8)
    class UButton* homeButton;                                                        // 0x0388 (size: 0x8)
    class UImage* Image;                                                              // 0x0390 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0398 (size: 0x8)
    class UImage* Image_54;                                                           // 0x03A0 (size: 0x8)
    class UTextBlock* job_text;                                                       // 0x03A8 (size: 0x8)
    class UMD_NaviAutoButton_C* naviBtn_Home;                                         // 0x03B0 (size: 0x8)
    class UMD_NaviAutoButton_C* naviBtn_ressign;                                      // 0x03B8 (size: 0x8)
    class UMD_NaviAutoButton_C* naviBtn_workplace;                                    // 0x03C0 (size: 0x8)
    class UButton* reassignButton;                                                    // 0x03C8 (size: 0x8)
    class UButton* workplaceButton;                                                   // 0x03D0 (size: 0x8)
    bool isWorkplace;                                                                 // 0x03D8 (size: 0x1)
    bool widgetSpawnComplete;                                                         // 0x03D9 (size: 0x1)
    bool shouldUpdateByTimer;                                                         // 0x03DA (size: 0x1)
    FWorkerFamily WorkerFamily;                                                       // 0x03E0 (size: 0x28)

    FNaviSubGridLayout ComputeSubGridLayout();
    void setFamilyBeingAssignedMaterialHighlight(bool isBeingAssigned);
    bool notProSoldier(class ASMUnit* Target);
    void Construct();
    void updateContents();
    void BndEvt__PersonEntry_Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void updateDetailsThatCouldHaveChanged();
    void BndEvt__FamilyEntry_reassignButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__FamilyEntry_reassignButton_1_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_FamilyEntry(int32 EntryPoint);
}; // Size: 0x408

#endif
