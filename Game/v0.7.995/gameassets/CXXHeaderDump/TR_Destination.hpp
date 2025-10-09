#ifndef UE4SS_SDK_TR_Destination_HPP
#define UE4SS_SDK_TR_Destination_HPP

class UTR_Destination_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UHorizontalBox* buying_HB;                                                  // 0x02E8 (size: 0x8)
    class UComboBoxString* ComboBoxString_0;                                          // 0x02F0 (size: 0x8)
    class UImage* Image_545;                                                          // 0x02F8 (size: 0x8)
    class UHorizontalBox* pops_HB;                                                    // 0x0300 (size: 0x8)
    class UTextBlock* regionName_txt;                                                 // 0x0308 (size: 0x8)
    class UButton* Remove;                                                            // 0x0310 (size: 0x8)
    class UHorizontalBox* Selling_HB;                                                 // 0x0318 (size: 0x8)
    int32 Index;                                                                      // 0x0320 (size: 0x4)
    class UInventory_C* father;                                                       // 0x0328 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x0330 (size: 0x8)
    class UObject* tradeRoutePlanner;                                                 // 0x0338 (size: 0x8)
    TArray<class UTR_Pop_C*> pop_widgets;                                             // 0x0340 (size: 0x10)

    void updateDestination();
    void update_destination_list();
    void BndEvt__remove_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_TR_Destination(int32 EntryPoint);
}; // Size: 0x350

#endif
