#ifndef UE4SS_SDK_LivestockEntry_HPP
#define UE4SS_SDK_LivestockEntry_HPP

class ULivestockEntry_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UButton* Button;                                                            // 0x0350 (size: 0x8)
    class UEditableText* EditableName;                                                // 0x0358 (size: 0x8)
    class UHorizontalBox* hb_status;                                                  // 0x0360 (size: 0x8)
    class UImage* Image;                                                              // 0x0368 (size: 0x8)
    class UImage* Image_101;                                                          // 0x0370 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton;                                    // 0x0378 (size: 0x8)
    class UMD_NaviHijackProxy_C* navi_nameEdit;                                       // 0x0380 (size: 0x8)
    class UTextBlock* task_txt;                                                       // 0x0388 (size: 0x8)
    class ASMUnit* unit;                                                              // 0x0390 (size: 0x8)
    FString statusText;                                                               // 0x0398 (size: 0x10)
    bool shouldUpdateByTimer;                                                         // 0x03A8 (size: 0x1)
    bool widgetSpawnComplete;                                                         // 0x03A9 (size: 0x1)
    EUnitRole currentUnitRole;                                                        // 0x03AA (size: 0x1)

    FNaviSubGridLayout ComputeSubGridLayout();
    void updateRoleImgAndTooltip(EUnitRole Role);
    void UpdateContents();
    void BndEvt__PersonEntry_EditableName_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature(const FText& Text);
    void updateDetailsThatCouldHaveChanged();
    void Construct();
    void BndEvt__FamilyMember_Button_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__LivestockEntry_EditableName_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__LivestockEntry_navi_NameEdit_K2Node_ComponentBoundEvent_3_HijackedHandleInput__DelegateSignature(ENaviUiIntent intent);
    void ExecuteUbergraph_LivestockEntry(int32 EntryPoint);
}; // Size: 0x3AB

#endif
