#ifndef UE4SS_SDK_FamilyMember_HPP
#define UE4SS_SDK_FamilyMember_HPP

class UFamilyMember_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button;                                                            // 0x02E8 (size: 0x8)
    class UEditableText* EditableName;                                                // 0x02F0 (size: 0x8)
    class UHorizontalBox* hb_status;                                                  // 0x02F8 (size: 0x8)
    class UImage* Image;                                                              // 0x0300 (size: 0x8)
    class UImage* Image_101;                                                          // 0x0308 (size: 0x8)
    class UTextBlock* personNameOLD;                                                  // 0x0310 (size: 0x8)
    class UTextBlock* task_txt;                                                       // 0x0318 (size: 0x8)
    class ASMUnit* Person;                                                            // 0x0320 (size: 0x8)
    FString statusText;                                                               // 0x0328 (size: 0x10)
    bool shouldUpdateByTimer;                                                         // 0x0338 (size: 0x1)
    bool widgetSpawnComplete;                                                         // 0x0339 (size: 0x1)
    EUnitRole currentUnitRole;                                                        // 0x033A (size: 0x1)

    void updateRoleImgAndTooltip(EUnitRole Role);
    void updateContents();
    void BndEvt__PersonEntry_EditableName_K2Node_ComponentBoundEvent_2_OnEditableTextChangedEvent__DelegateSignature(const FText& Text);
    void updateDetailsThatCouldHaveChanged();
    void Construct();
    void BndEvt__FamilyMember_Button_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_FamilyMember(int32 EntryPoint);
}; // Size: 0x33B

#endif
