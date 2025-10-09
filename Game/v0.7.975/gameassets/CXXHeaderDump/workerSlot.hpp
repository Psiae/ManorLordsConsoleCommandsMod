#ifndef UE4SS_SDK_workerSlot_HPP
#define UE4SS_SDK_workerSlot_HPP

class UworkerSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* Open;                                                     // 0x0268 (size: 0x8)
    class UImage* Head;                                                               // 0x0270 (size: 0x8)
    class UImage* Image_29;                                                           // 0x0278 (size: 0x8)
    class UButton* stallButton;                                                       // 0x0280 (size: 0x8)
    class ASMUnit* worker;                                                            // 0x0288 (size: 0x8)
    class UHorizontalBox* daddy_HB;                                                   // 0x0290 (size: 0x8)
    int32 ID;                                                                         // 0x0298 (size: 0x4)
    class UInventory_C* daddy_inventory;                                              // 0x02A0 (size: 0x8)
    bool isLivestockAssignment;                                                       // 0x02A8 (size: 0x1)
    FWorkerFamily WorkerFamily;                                                       // 0x02B0 (size: 0x28)

    bool isBuildingTabOpened(class AMyPawnCPP_BP3_C*& pawnCPPBP, class UObject*& building);
    class UWidget* GetToolTipWidget_0();
    void openAnim();
    void Construct();
    void updateWorkerSlot();
    void BndEvt__workerSlot_stallButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_workerSlot(int32 EntryPoint);
}; // Size: 0x2D8

#endif
