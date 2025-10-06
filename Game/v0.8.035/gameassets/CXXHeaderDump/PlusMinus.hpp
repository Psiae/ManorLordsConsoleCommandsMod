#ifndef UE4SS_SDK_PlusMinus_HPP
#define UE4SS_SDK_PlusMinus_HPP

class UPlusMinus_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UButton* Button_0;                                                          // 0x0350 (size: 0x8)
    class UButton* Button_1;                                                          // 0x0358 (size: 0x8)
    class UImage* Image_221;                                                          // 0x0360 (size: 0x8)
    class UImage* Image_308;                                                          // 0x0368 (size: 0x8)
    class UMD_NaviAutoButton_C* navi_BtnDown;                                         // 0x0370 (size: 0x8)
    class UMD_NaviAutoButton_C* navi_BtnUp;                                           // 0x0378 (size: 0x8)
    class UTextBlock* priorityNum_txt;                                                // 0x0380 (size: 0x8)
    int32 Var;                                                                        // 0x0388 (size: 0x4)
    class UInventory_C* inventoryRef;                                                 // 0x0390 (size: 0x8)
    FPlusMinus_CPriorityChanged priorityChanged;                                      // 0x0398 (size: 0x10)
    void priorityChanged(int32 change);

    FNaviSubGridLayout ComputeSubGridLayout();
    FText GetText_0();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__Button_1_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void setPriorityLabel(int32 priorityID);
    void ExecuteUbergraph_PlusMinus(int32 EntryPoint);
    void priorityChanged__DelegateSignature(int32 change);
}; // Size: 0x3A8

#endif
