#ifndef UE4SS_SDK_upgradeWidget_HPP
#define UE4SS_SDK_upgradeWidget_HPP

class UupgradeWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_0;                                                          // 0x0268 (size: 0x8)
    class UImage* Image_45;                                                           // 0x0270 (size: 0x8)
    class UImage* Image_84;                                                           // 0x0278 (size: 0x8)
    class UImage* img;                                                                // 0x0280 (size: 0x8)
    int32 ID;                                                                         // 0x0288 (size: 0x4)
    class ASMBuildingMaster* building;                                                // 0x0290 (size: 0x8)
    bool possible;                                                                    // 0x0298 (size: 0x1)
    bool Enabled;                                                                     // 0x0299 (size: 0x1)
    class UInventory_C* daddy;                                                        // 0x02A0 (size: 0x8)
    TArray<int32> required;                                                           // 0x02A8 (size: 0x10)
    TArray<FGood> requiredGoods;                                                      // 0x02B8 (size: 0x10)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void updateContents();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_upgradeWidget(int32 EntryPoint);
}; // Size: 0x2C8

#endif
