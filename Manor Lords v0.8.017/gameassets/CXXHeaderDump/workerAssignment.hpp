#ifndef UE4SS_SDK_workerAssignment_HPP
#define UE4SS_SDK_workerAssignment_HPP

class UworkerAssignment_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UHorizontalBox* activeWorkers_HB;                                           // 0x02E8 (size: 0x8)
    class UImage* allowLabourers_img;                                                 // 0x02F0 (size: 0x8)
    class UButton* button_labourers;                                                  // 0x02F8 (size: 0x8)
    class UImage* Image_23;                                                           // 0x0300 (size: 0x8)
    class UImage* Image_25;                                                           // 0x0308 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x0310 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton;                                    // 0x0318 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton_102;                                // 0x0320 (size: 0x8)
    class UButton* worker_add;                                                        // 0x0328 (size: 0x8)
    class UButton* worker_add_oldstyle;                                               // 0x0330 (size: 0x8)
    class UButton* worker_remove;                                                     // 0x0338 (size: 0x8)
    class USizeBox* workerGrid_sizeBox;                                               // 0x0340 (size: 0x8)
    class UUniformGridPanel* workerSlots_Grid;                                        // 0x0348 (size: 0x8)
    FworkerAssignment_CChangeActiveWorkers changeActiveWorkers;                       // 0x0350 (size: 0x10)
    void changeActiveWorkers(int32 amt);

    void updateActiveWorkers(TArray<class ASMUnit*>& workers);
    void Construct();
    void BndEvt__workerAssignment_worker_add_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__workerAssignment_worker_remove_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_workerAssignment(int32 EntryPoint);
    void changeActiveWorkers__DelegateSignature(int32 amt);
}; // Size: 0x360

#endif
