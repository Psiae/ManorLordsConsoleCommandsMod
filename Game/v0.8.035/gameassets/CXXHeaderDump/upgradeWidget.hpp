#ifndef UE4SS_SDK_upgradeWidget_HPP
#define UE4SS_SDK_upgradeWidget_HPP

class UupgradeWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02D0 (size: 0x8)
    class UButton* Btn_Upgrade;                                                       // 0x02D8 (size: 0x8)
    class UImage* Image_45;                                                           // 0x02E0 (size: 0x8)
    class UImage* Image_84;                                                           // 0x02E8 (size: 0x8)
    class UImage* img;                                                                // 0x02F0 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton;                                    // 0x02F8 (size: 0x8)
    int32 ID;                                                                         // 0x0300 (size: 0x4)
    class ASMBuildingMaster* building;                                                // 0x0308 (size: 0x8)
    bool possible;                                                                    // 0x0310 (size: 0x1)
    bool Enabled;                                                                     // 0x0311 (size: 0x1)
    class UInventory_C* Daddy;                                                        // 0x0318 (size: 0x8)
    TArray<int32> required;                                                           // 0x0320 (size: 0x10)
    TArray<FGood> requiredGoods;                                                      // 0x0330 (size: 0x10)

    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void UpdateContents();
    void ExecuteUbergraph_upgradeWidget(int32 EntryPoint);
}; // Size: 0x340

#endif
