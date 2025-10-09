#ifndef UE4SS_SDK_StallEntry_HPP
#define UE4SS_SDK_StallEntry_HPP

class UStallEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* NewAnimation_1;                                           // 0x02E8 (size: 0x8)
    class UButton* Button_0;                                                          // 0x02F0 (size: 0x8)
    class UButton* Button_1;                                                          // 0x02F8 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0300 (size: 0x8)
    class UImage* Image_54;                                                           // 0x0308 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton;                                    // 0x0310 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton_95;                                 // 0x0318 (size: 0x8)
    class UTextBlock* role_txt;                                                       // 0x0320 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x0328 (size: 0x8)
    class UTextBlock* TextBlock_1;                                                    // 0x0330 (size: 0x8)
    class UComboBoxString* tradeable_CB;                                              // 0x0338 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x0340 (size: 0x8)
    class UInventory_C* daddy;                                                        // 0x0348 (size: 0x8)
    int32 ID;                                                                         // 0x0350 (size: 0x4)

    void BndEvt__tradeable_CB_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_StallEntry(int32 EntryPoint);
}; // Size: 0x354

#endif
