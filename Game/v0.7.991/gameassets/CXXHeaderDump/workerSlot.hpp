#ifndef UE4SS_SDK_workerSlot_HPP
#define UE4SS_SDK_workerSlot_HPP

class UworkerSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* Open;                                                     // 0x02E8 (size: 0x8)
    class UImage* Head;                                                               // 0x02F0 (size: 0x8)
    class UImage* Image_29;                                                           // 0x02F8 (size: 0x8)
    class UButton* stallButton;                                                       // 0x0300 (size: 0x8)
    class ASMUnit* worker;                                                            // 0x0308 (size: 0x8)
    class UHorizontalBox* daddy_HB;                                                   // 0x0310 (size: 0x8)
    int32 ID;                                                                         // 0x0318 (size: 0x4)
    class UInventory_C* daddy_inventory;                                              // 0x0320 (size: 0x8)
    bool isLivestockAssignment;                                                       // 0x0328 (size: 0x1)
    FWorkerFamily WorkerFamily;                                                       // 0x0330 (size: 0x28)

    bool isBuildingTabOpened(class AMyPawnCPP_BP3_C*& pawnCPPBP, class UObject*& building);
    class UWidget* GetToolTipWidget_0();
    void openAnim();
    void Construct();
    void updateWorkerSlot();
    void BndEvt__workerSlot_stallButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_workerSlot(int32 EntryPoint);
}; // Size: 0x358

#endif
