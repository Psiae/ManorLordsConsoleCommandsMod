#ifndef UE4SS_SDK_storageFilterWidget_HPP
#define UE4SS_SDK_storageFilterWidget_HPP

class UstorageFilterWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_96;                                                           // 0x0268 (size: 0x8)
    class UstorageFilterCategory_C* storageFilterCategory_comm;                       // 0x0270 (size: 0x8)
    class UstorageFilterCategory_C* storageFilterCategory_constr;                     // 0x0278 (size: 0x8)
    class UstorageFilterCategory_C* storageFilterCategory_crop;                       // 0x0280 (size: 0x8)
    class UstorageFilterCategory_C* storageFilterCategory_food;                       // 0x0288 (size: 0x8)
    class UstorageFilterCategory_C* storageFilterCategory_mat;                        // 0x0290 (size: 0x8)
    class UstorageFilterCategory_C* storageFilterCategory_military;                   // 0x0298 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x02A0 (size: 0x8)
    TArray<class UstorageFilterCategory_C*> alLCategories;                            // 0x02A8 (size: 0x10)
    EStorageType Storage Type;                                                        // 0x02B8 (size: 0x1)

    void Construct();
    void ExecuteUbergraph_storageFilterWidget(int32 EntryPoint);
}; // Size: 0x2B9

#endif
