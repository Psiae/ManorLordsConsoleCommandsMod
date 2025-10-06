#ifndef UE4SS_SDK_FamilyMember_HPP
#define UE4SS_SDK_FamilyMember_HPP

class UFamilyMember_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UButton* Button;                                                            // 0x02D8 (size: 0x8)
    class UEditableText* EditableName;                                                // 0x02E0 (size: 0x8)
    class UHorizontalBox* hb_status;                                                  // 0x02E8 (size: 0x8)
    class UImage* Image;                                                              // 0x02F0 (size: 0x8)
    class UMD_NaviAutoButton_C* navi_BtnPerson;                                       // 0x02F8 (size: 0x8)
    class UMD_NaviHijackProxy_C* navi_nameEdit;                                       // 0x0300 (size: 0x8)
    class UMD_NaviAutoTooltip_C* navi_TooltipStatus;                                  // 0x0308 (size: 0x8)
    class UTextBlock* task_txt;                                                       // 0x0310 (size: 0x8)
    class ASMUnit* Person;                                                            // 0x0318 (size: 0x8)
    FString statusText;                                                               // 0x0320 (size: 0x10)
    bool shouldUpdateByTimer;                                                         // 0x0330 (size: 0x1)
    bool widgetSpawnComplete;                                                         // 0x0331 (size: 0x1)
    EUnitRole currentUnitRole;                                                        // 0x0332 (size: 0x1)
    FString LastShownStatusText;                                                      // 0x0338 (size: 0x10)

    void SetStatusVisible(bool IsVisible);
    void updateRoleImgAndTooltip(EUnitRole Role);
    void UpdateContents();
    void BndEvt__PersonEntry_EditableName_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature(const FText& Text);
    void updateDetailsThatCouldHaveChanged();
    void Construct();
    void BndEvt__FamilyMember_Button_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__FamilyMember_navi_nameEdit_K2Node_ComponentBoundEvent_0_HijackedHandleInput__DelegateSignature(ENaviUiIntent intent);
    void BndEvt__FamilyMember_EditableName_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void ExecuteUbergraph_FamilyMember(int32 EntryPoint);
}; // Size: 0x348

#endif
