#ifndef UE4SS_SDK_storageFilterGood_HPP
#define UE4SS_SDK_storageFilterGood_HPP

class UstorageFilterGood_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_0;                                                          // 0x0268 (size: 0x8)
    class UImage* checkmark;                                                          // 0x0270 (size: 0x8)
    class UImage* goodIcon;                                                           // 0x0278 (size: 0x8)
    int32 ItemId;                                                                     // 0x0280 (size: 0x4)
    class ASMBuildingMaster* building;                                                // 0x0288 (size: 0x8)
    int32 marketNumStallsForThisGood;                                                 // 0x0290 (size: 0x4)
    int32 numAvailableGoodsForSale;                                                   // 0x0294 (size: 0x4)

    void updateStorageFilterCheckmark();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__storageFilterGood_Button_0_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_storageFilterGood(int32 EntryPoint);
}; // Size: 0x298

#endif
