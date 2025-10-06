#ifndef UE4SS_SDK_storageFilterCategory_HPP
#define UE4SS_SDK_storageFilterCategory_HPP

class UstorageFilterCategory_C : public UNaviSubGrid
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0348 (size: 0x8)
    class UButton* acceptAllCategory;                                                 // 0x0350 (size: 0x8)
    class UButton* Button_52;                                                         // 0x0358 (size: 0x8)
    class UTextBlock* category_text;                                                  // 0x0360 (size: 0x8)
    class UWrapBox* goodTypes_WB;                                                     // 0x0368 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0370 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0378 (size: 0x8)
    class UMD_NaviAutoButton_C* navi_AcceptAll;                                       // 0x0380 (size: 0x8)
    class UMD_NaviAutoButton_C* navi_BlockAll;                                        // 0x0388 (size: 0x8)
    TArray<int32> typesOfGoods;                                                       // 0x0390 (size: 0x10)
    FName category_name;                                                              // 0x03A0 (size: 0x8)
    EItemCategory Category;                                                           // 0x03A8 (size: 0x1)
    EStorageType storageType;                                                         // 0x03A9 (size: 0x1)
    class ASMBuildingMaster* building;                                                // 0x03B0 (size: 0x8)
    TArray<int32> maretkplaceDistributableNonFoodItems;                               // 0x03B8 (size: 0x10)
    FstorageFilterCategory_COnControllerGridMemberFocused OnControllerGridMemberFocused; // 0x03C8 (size: 0x10)
    void OnControllerGridMemberFocused(class UUserWidget* FocusedMember);

    void Controller_GridMemberFocused(bool HasFocus);
    FNaviSubGridLayout ComputeSubGridLayout();
    bool anyGoodsVisible();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void repopulateCategory(const TArray<int32>& storageFilter);
    void BndEvt__storageFilterCategory_Button_86_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__storageFilterCategory_Button_52_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_storageFilterCategory(int32 EntryPoint);
    void OnControllerGridMemberFocused__DelegateSignature(class UUserWidget* FocusedMember);
}; // Size: 0x3D8

#endif
