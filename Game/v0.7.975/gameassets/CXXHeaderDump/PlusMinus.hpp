#ifndef UE4SS_SDK_PlusMinus_HPP
#define UE4SS_SDK_PlusMinus_HPP

class UPlusMinus_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_0;                                                          // 0x0268 (size: 0x8)
    class UButton* Button_1;                                                          // 0x0270 (size: 0x8)
    class UImage* Image_221;                                                          // 0x0278 (size: 0x8)
    class UImage* Image_308;                                                          // 0x0280 (size: 0x8)
    class UTextBlock* priorityNum_txt;                                                // 0x0288 (size: 0x8)
    int32 var;                                                                        // 0x0290 (size: 0x4)
    class UInventory_C* inventoryRef;                                                 // 0x0298 (size: 0x8)
    FPlusMinus_CPriorityChanged priorityChanged;                                      // 0x02A0 (size: 0x10)
    void priorityChanged(int32 change);

    FText GetText_0();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void setPriorityLabel(int32 priorityID);
    void ExecuteUbergraph_PlusMinus(int32 EntryPoint);
    void priorityChanged__DelegateSignature(int32 change);
}; // Size: 0x2B0

#endif
