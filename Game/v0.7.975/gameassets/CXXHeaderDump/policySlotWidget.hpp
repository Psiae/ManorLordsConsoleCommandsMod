#ifndef UE4SS_SDK_policySlotWidget_HPP
#define UE4SS_SDK_policySlotWidget_HPP

class UpolicySlotWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_0;                                                          // 0x0268 (size: 0x8)
    class UImage* glow;                                                               // 0x0270 (size: 0x8)
    class UImage* Image_282;                                                          // 0x0278 (size: 0x8)
    class UImage* mainIcon;                                                           // 0x0280 (size: 0x8)
    class UTextBlock* policyTime_txt;                                                 // 0x0288 (size: 0x8)
    int32 policyID;                                                                   // 0x0290 (size: 0x4)
    class ARegion* Region;                                                            // 0x0298 (size: 0x8)
    bool possible;                                                                    // 0x02A0 (size: 0x1)
    bool Enabled;                                                                     // 0x02A1 (size: 0x1)
    class URegionPanel_C* daddy;                                                      // 0x02A8 (size: 0x8)
    int32 cost;                                                                       // 0x02B0 (size: 0x4)
    TArray<int32> required;                                                           // 0x02B8 (size: 0x10)
    bool isRegionSlot;                                                                // 0x02C8 (size: 0x1)
    int32 slotNo;                                                                     // 0x02CC (size: 0x4)
    FString Name;                                                                     // 0x02D0 (size: 0x10)
    int32 TimeLeft;                                                                   // 0x02E0 (size: 0x4)

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
}; // Size: 0x2E4

#endif
