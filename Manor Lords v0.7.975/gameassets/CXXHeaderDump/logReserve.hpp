#ifndef UE4SS_SDK_logReserve_HPP
#define UE4SS_SDK_logReserve_HPP

class UlogReserve_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Add;                                                               // 0x0268 (size: 0x8)
    class UHorizontalBox* HorizontalBox_0;                                            // 0x0270 (size: 0x8)
    class UImage* Image_9;                                                            // 0x0278 (size: 0x8)
    class UImage* Image_22;                                                           // 0x0280 (size: 0x8)
    class UImage* Image_47;                                                           // 0x0288 (size: 0x8)
    class UImage* Image_51;                                                           // 0x0290 (size: 0x8)
    class UlocalizedTextBox_C* localizedTextBox;                                      // 0x0298 (size: 0x8)
    class UButton* Remove;                                                            // 0x02A0 (size: 0x8)
    class UTextBlock* TextBlock_3;                                                    // 0x02A8 (size: 0x8)
    FlogReserve_CMouseLeft mouseLeft;                                                 // 0x02B0 (size: 0x10)
    void mouseLeft();
    bool Hovered;                                                                     // 0x02C0 (size: 0x1)
    FlogReserve_CChangeLogReservation changeLogReservation;                           // 0x02C8 (size: 0x10)
    void changeLogReservation(int32 amt);
    class ARegion* Region;                                                            // 0x02D8 (size: 0x8)
    int32 goodType;                                                                   // 0x02E0 (size: 0x4)

    void changeReservedAmt(int32 change);
    void changeLogReserve(int32 amt);
    void Construct();
    void BndEvt__logReserve_add_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__logReserve_remove_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_logReserve(int32 EntryPoint);
    void changeLogReservation__DelegateSignature(int32 amt);
    void mouseLeft__DelegateSignature();
}; // Size: 0x2E4

#endif
