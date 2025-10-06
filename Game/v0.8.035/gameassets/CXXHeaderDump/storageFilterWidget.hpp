#ifndef UE4SS_SDK_storageFilterWidget_HPP
#define UE4SS_SDK_storageFilterWidget_HPP

class UstorageFilterWidget_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UScrollBox* FilterScrollBox;                                                // 0x0350 (size: 0x8)
    class UVerticalBox* FiltersParent;                                                // 0x0358 (size: 0x8)
    class UImage* Image_96;                                                           // 0x0360 (size: 0x8)
    class UstorageFilterCategory_C* storageFilterCategory_comm;                       // 0x0368 (size: 0x8)
    class UstorageFilterCategory_C* storageFilterCategory_constr;                     // 0x0370 (size: 0x8)
    class UstorageFilterCategory_C* storageFilterCategory_crop;                       // 0x0378 (size: 0x8)
    class UstorageFilterCategory_C* storageFilterCategory_food;                       // 0x0380 (size: 0x8)
    class UstorageFilterCategory_C* storageFilterCategory_Fuel;                       // 0x0388 (size: 0x8)
    class UstorageFilterCategory_C* storageFilterCategory_mat;                        // 0x0390 (size: 0x8)
    class UstorageFilterCategory_C* storageFilterCategory_military;                   // 0x0398 (size: 0x8)
    class UTextBlock* text_accepted_goods;                                            // 0x03A0 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x03A8 (size: 0x8)
    TArray<class UstorageFilterCategory_C*> alLCategories;                            // 0x03B0 (size: 0x10)
    EStorageType Storage Type;                                                        // 0x03C0 (size: 0x1)

    void ScrollWidgetIntoView(class UUserWidget* FocusedMember);
    FNaviSubGridLayout ComputeSubGridLayout();
    void Construct();
    void ExecuteUbergraph_storageFilterWidget(int32 EntryPoint);
}; // Size: 0x3C1

#endif
