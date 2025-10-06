#ifndef UE4SS_SDK_storageFilterGood_HPP
#define UE4SS_SDK_storageFilterGood_HPP

class UstorageFilterGood_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UButton* Button_0;                                                          // 0x02D8 (size: 0x8)
    class UImage* checkmark;                                                          // 0x02E0 (size: 0x8)
    class UImage* goodIcon;                                                           // 0x02E8 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton;                                    // 0x02F0 (size: 0x8)
    int32 ItemId;                                                                     // 0x02F8 (size: 0x4)
    class ASMBuildingMaster* building;                                                // 0x0300 (size: 0x8)
    int32 marketNumStallsForThisGood;                                                 // 0x0308 (size: 0x4)
    int32 numAvailableGoodsForSale;                                                   // 0x030C (size: 0x4)

    void updateStorageFilterCheckmark();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__storageFilterGood_Button_0_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_storageFilterGood(int32 EntryPoint);
}; // Size: 0x310

#endif
