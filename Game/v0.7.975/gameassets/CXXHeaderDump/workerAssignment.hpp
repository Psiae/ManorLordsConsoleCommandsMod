#ifndef UE4SS_SDK_workerAssignment_HPP
#define UE4SS_SDK_workerAssignment_HPP

class UworkerAssignment_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UHorizontalBox* activeWorkers_HB;                                           // 0x0268 (size: 0x8)
    class UImage* allowLabourers_img;                                                 // 0x0270 (size: 0x8)
    class UButton* button_labourers;                                                  // 0x0278 (size: 0x8)
    class UImage* Image_23;                                                           // 0x0280 (size: 0x8)
    class UImage* Image_25;                                                           // 0x0288 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x0290 (size: 0x8)
    class UButton* worker_add;                                                        // 0x0298 (size: 0x8)
    class UButton* worker_add_oldstyle;                                               // 0x02A0 (size: 0x8)
    class UButton* worker_remove;                                                     // 0x02A8 (size: 0x8)
    class USizeBox* workerGrid_sizeBox;                                               // 0x02B0 (size: 0x8)
    class UUniformGridPanel* workerSlots_Grid;                                        // 0x02B8 (size: 0x8)
    FworkerAssignment_CChangeActiveWorkers changeActiveWorkers;                       // 0x02C0 (size: 0x10)
    void changeActiveWorkers(int32 amt);

    void updateActiveWorkers(TArray<class ASMUnit*>& workers);
    void Construct();
    void BndEvt__workerAssignment_worker_add_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__workerAssignment_worker_remove_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_workerAssignment(int32 EntryPoint);
    void changeActiveWorkers__DelegateSignature(int32 amt);
}; // Size: 0x2D0

#endif
