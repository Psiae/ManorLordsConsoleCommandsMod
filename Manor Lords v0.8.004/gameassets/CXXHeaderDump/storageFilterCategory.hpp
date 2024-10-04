#ifndef UE4SS_SDK_storageFilterCategory_HPP
#define UE4SS_SDK_storageFilterCategory_HPP

class UstorageFilterCategory_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* acceptAllCategory;                                                 // 0x02E8 (size: 0x8)
    class UButton* Button_52;                                                         // 0x02F0 (size: 0x8)
    class UTextBlock* category_text;                                                  // 0x02F8 (size: 0x8)
    class UWrapBox* goodTypes_WB;                                                     // 0x0300 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0308 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0310 (size: 0x8)
    TArray<int32> typesOfGoods;                                                       // 0x0318 (size: 0x10)
    FName category_name;                                                              // 0x0328 (size: 0x8)
    EItemCategory Category;                                                           // 0x0330 (size: 0x1)
    EStorageType storageType;                                                         // 0x0331 (size: 0x1)
    class ASMBuildingMaster* building;                                                // 0x0338 (size: 0x8)

    bool anyGoodsVisible();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void repopulateCategory(const TArray<int32>& storageFilter);
    void BndEvt__storageFilterCategory_Button_86_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__storageFilterCategory_Button_52_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_storageFilterCategory(int32 EntryPoint);
}; // Size: 0x340

#endif
