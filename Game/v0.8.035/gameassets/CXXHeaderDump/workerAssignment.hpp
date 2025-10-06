#ifndef UE4SS_SDK_workerAssignment_HPP
#define UE4SS_SDK_workerAssignment_HPP

class UworkerAssignment_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UHorizontalBox* activeWorkers_HB;                                           // 0x0350 (size: 0x8)
    class UImage* allowLabourers_img;                                                 // 0x0358 (size: 0x8)
    class UButton* button_labourers;                                                  // 0x0360 (size: 0x8)
    class UImage* Image_23;                                                           // 0x0368 (size: 0x8)
    class UImage* Image_25;                                                           // 0x0370 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x0378 (size: 0x8)
    class UMD_NaviAutoButton_C* navi_BtnLeft;                                         // 0x0380 (size: 0x8)
    class UMD_NaviAutoButton_C* navi_BtnRight;                                        // 0x0388 (size: 0x8)
    class UButton* worker_add;                                                        // 0x0390 (size: 0x8)
    class UButton* worker_add_oldstyle;                                               // 0x0398 (size: 0x8)
    class UButton* worker_remove;                                                     // 0x03A0 (size: 0x8)
    class USizeBox* workerGrid_sizeBox;                                               // 0x03A8 (size: 0x8)
    class UUniformGridPanel* workerSlots_Grid;                                        // 0x03B0 (size: 0x8)
    FworkerAssignment_CChangeActiveWorkers changeActiveWorkers;                       // 0x03B8 (size: 0x10)
    void changeActiveWorkers(int32 amt);

    FNaviSubGridLayout ComputeSubGridLayout();
    void updateActiveWorkers(TArray<class ASMUnit*>& workers);
    void Construct();
    void BndEvt__workerAssignment_worker_add_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__workerAssignment_worker_remove_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_workerAssignment(int32 EntryPoint);
    void changeActiveWorkers__DelegateSignature(int32 amt);
}; // Size: 0x3C8

#endif
