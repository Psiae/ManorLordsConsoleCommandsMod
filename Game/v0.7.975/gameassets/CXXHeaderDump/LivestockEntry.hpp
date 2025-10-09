#ifndef UE4SS_SDK_LivestockEntry_HPP
#define UE4SS_SDK_LivestockEntry_HPP

class ULivestockEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button;                                                            // 0x0268 (size: 0x8)
    class UEditableText* EditableName;                                                // 0x0270 (size: 0x8)
    class UHorizontalBox* hb_status;                                                  // 0x0278 (size: 0x8)
    class UImage* Image;                                                              // 0x0280 (size: 0x8)
    class UImage* Image_101;                                                          // 0x0288 (size: 0x8)
    class UTextBlock* task_txt;                                                       // 0x0290 (size: 0x8)
    class ASMUnit* unit;                                                              // 0x0298 (size: 0x8)
    FString statusText;                                                               // 0x02A0 (size: 0x10)
    bool shouldUpdateByTimer;                                                         // 0x02B0 (size: 0x1)
    bool widgetSpawnComplete;                                                         // 0x02B1 (size: 0x1)
    EUnitRole currentUnitRole;                                                        // 0x02B2 (size: 0x1)

    void updateRoleImgAndTooltip(EUnitRole Role);
    void updateContents();
    void BndEvt__PersonEntry_EditableName_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature(const FText& Text);
    void updateDetailsThatCouldHaveChanged();
    void Construct();
    void BndEvt__FamilyMember_Button_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__LivestockEntry_EditableName_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void ExecuteUbergraph_LivestockEntry(int32 EntryPoint);
}; // Size: 0x2B3

#endif
