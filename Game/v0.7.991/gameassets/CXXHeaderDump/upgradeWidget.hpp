#ifndef UE4SS_SDK_upgradeWidget_HPP
#define UE4SS_SDK_upgradeWidget_HPP

class UupgradeWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button_0;                                                          // 0x02E8 (size: 0x8)
    class UImage* Image_45;                                                           // 0x02F0 (size: 0x8)
    class UImage* Image_84;                                                           // 0x02F8 (size: 0x8)
    class UImage* img;                                                                // 0x0300 (size: 0x8)
    int32 ID;                                                                         // 0x0308 (size: 0x4)
    class ASMBuildingMaster* building;                                                // 0x0310 (size: 0x8)
    bool possible;                                                                    // 0x0318 (size: 0x1)
    bool Enabled;                                                                     // 0x0319 (size: 0x1)
    class UInventory_C* daddy;                                                        // 0x0320 (size: 0x8)
    TArray<int32> required;                                                           // 0x0328 (size: 0x10)
    TArray<FGood> requiredGoods;                                                      // 0x0338 (size: 0x10)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void updateContents();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_upgradeWidget(int32 EntryPoint);
}; // Size: 0x348

#endif
