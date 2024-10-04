#ifndef UE4SS_SDK_PlusMinus_HPP
#define UE4SS_SDK_PlusMinus_HPP

class UPlusMinus_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button_0;                                                          // 0x02E8 (size: 0x8)
    class UButton* Button_1;                                                          // 0x02F0 (size: 0x8)
    class UImage* Image_221;                                                          // 0x02F8 (size: 0x8)
    class UImage* Image_308;                                                          // 0x0300 (size: 0x8)
    class UTextBlock* priorityNum_txt;                                                // 0x0308 (size: 0x8)
    int32 Var;                                                                        // 0x0310 (size: 0x4)
    class UInventory_C* inventoryRef;                                                 // 0x0318 (size: 0x8)
    FPlusMinus_CPriorityChanged priorityChanged;                                      // 0x0320 (size: 0x10)
    void priorityChanged(int32 change);

    FText GetText_0();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void setPriorityLabel(int32 priorityID);
    void ExecuteUbergraph_PlusMinus(int32 EntryPoint);
    void priorityChanged__DelegateSignature(int32 change);
}; // Size: 0x330

#endif
