#ifndef UE4SS_SDK_StallEntry_HPP
#define UE4SS_SDK_StallEntry_HPP

class UStallEntry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* NewAnimation_1;                                           // 0x0268 (size: 0x8)
    class UButton* Button_0;                                                          // 0x0270 (size: 0x8)
    class UButton* Button_1;                                                          // 0x0278 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0280 (size: 0x8)
    class UImage* Image_54;                                                           // 0x0288 (size: 0x8)
    class UTextBlock* role_txt;                                                       // 0x0290 (size: 0x8)
    class UTextBlock* TextBlock_0;                                                    // 0x0298 (size: 0x8)
    class UTextBlock* TextBlock_1;                                                    // 0x02A0 (size: 0x8)
    class UComboBoxString* tradeable_CB;                                              // 0x02A8 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x02B0 (size: 0x8)
    class UInventory_C* daddy;                                                        // 0x02B8 (size: 0x8)
    int32 ID;                                                                         // 0x02C0 (size: 0x4)

    void BndEvt__tradeable_CB_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_StallEntry(int32 EntryPoint);
}; // Size: 0x2C4

#endif
