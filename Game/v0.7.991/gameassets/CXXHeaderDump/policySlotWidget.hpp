#ifndef UE4SS_SDK_policySlotWidget_HPP
#define UE4SS_SDK_policySlotWidget_HPP

class UpolicySlotWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UButton* Button_0;                                                          // 0x02E8 (size: 0x8)
    class UImage* glow;                                                               // 0x02F0 (size: 0x8)
    class UImage* Image_282;                                                          // 0x02F8 (size: 0x8)
    class UImage* mainIcon;                                                           // 0x0300 (size: 0x8)
    class UTextBlock* policyTime_txt;                                                 // 0x0308 (size: 0x8)
    int32 policyID;                                                                   // 0x0310 (size: 0x4)
    class ARegion* Region;                                                            // 0x0318 (size: 0x8)
    bool possible;                                                                    // 0x0320 (size: 0x1)
    bool Enabled;                                                                     // 0x0321 (size: 0x1)
    class URegionPanel_C* daddy;                                                      // 0x0328 (size: 0x8)
    int32 cost;                                                                       // 0x0330 (size: 0x4)
    TArray<int32> required;                                                           // 0x0338 (size: 0x10)
    bool isRegionSlot;                                                                // 0x0348 (size: 0x1)
    int32 slotNo;                                                                     // 0x034C (size: 0x4)
    FString Name;                                                                     // 0x0350 (size: 0x10)
    int32 timeLeft;                                                                   // 0x0360 (size: 0x4)

    class UWidget* GetToolTipWidget_0();
    void hasRequiredTech(bool& hasTech);
    void Update();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void updateContents();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void updateTimer();
    void ExecuteUbergraph_policySlotWidget(int32 EntryPoint);
}; // Size: 0x364

#endif
