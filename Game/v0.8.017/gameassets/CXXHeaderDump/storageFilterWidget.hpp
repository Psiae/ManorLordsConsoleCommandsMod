#ifndef UE4SS_SDK_storageFilterWidget_HPP
#define UE4SS_SDK_storageFilterWidget_HPP

class UstorageFilterWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Image_96;                                                           // 0x02E8 (size: 0x8)
    class UstorageFilterCategory_C* storageFilterCategory_comm;                       // 0x02F0 (size: 0x8)
    class UstorageFilterCategory_C* storageFilterCategory_constr;                     // 0x02F8 (size: 0x8)
    class UstorageFilterCategory_C* storageFilterCategory_crop;                       // 0x0300 (size: 0x8)
    class UstorageFilterCategory_C* storageFilterCategory_food;                       // 0x0308 (size: 0x8)
    class UstorageFilterCategory_C* storageFilterCategory_mat;                        // 0x0310 (size: 0x8)
    class UstorageFilterCategory_C* storageFilterCategory_military;                   // 0x0318 (size: 0x8)
    class UTextBlock* text_accepted_goods;                                            // 0x0320 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x0328 (size: 0x8)
    TArray<class UstorageFilterCategory_C*> alLCategories;                            // 0x0330 (size: 0x10)
    EStorageType Storage Type;                                                        // 0x0340 (size: 0x1)

    void Construct();
    void ExecuteUbergraph_storageFilterWidget(int32 EntryPoint);
}; // Size: 0x341

#endif
