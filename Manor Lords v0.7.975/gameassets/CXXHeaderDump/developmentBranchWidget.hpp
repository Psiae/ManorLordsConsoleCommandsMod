#ifndef UE4SS_SDK_developmentBranchWidget_HPP
#define UE4SS_SDK_developmentBranchWidget_HPP

class UdevelopmentBranchWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* unlockSheen;                                              // 0x0268 (size: 0x8)
    class UButton* Button_0;                                                          // 0x0270 (size: 0x8)
    class UImage* glow;                                                               // 0x0278 (size: 0x8)
    class UImage* glow_1;                                                             // 0x0280 (size: 0x8)
    class UImage* glowFlare;                                                          // 0x0288 (size: 0x8)
    class UGridPanel* GridPanel_0;                                                    // 0x0290 (size: 0x8)
    class UImage* Image_290;                                                          // 0x0298 (size: 0x8)
    class UImage* img;                                                                // 0x02A0 (size: 0x8)
    class UImage* mark;                                                               // 0x02A8 (size: 0x8)
    int32 techID;                                                                     // 0x02B0 (size: 0x4)
    class ARegion* Region;                                                            // 0x02B8 (size: 0x8)
    bool possible;                                                                    // 0x02C0 (size: 0x1)
    bool Enabled;                                                                     // 0x02C1 (size: 0x1)
    class UdevelopmentPanelTree_C* developmentTreeWidget;                             // 0x02C8 (size: 0x8)
    int32 cost;                                                                       // 0x02D0 (size: 0x4)
    TArray<int32> required;                                                           // 0x02D8 (size: 0x10)
    FString Name;                                                                     // 0x02E8 (size: 0x10)
    int32 tier;                                                                       // 0x02F8 (size: 0x4)
    bool temp_disable;                                                                // 0x02FC (size: 0x1)
    float Angle;                                                                      // 0x0300 (size: 0x4)
    uint8 splitType;                                                                  // 0x0304 (size: 0x1)
    bool link_verticalFlip;                                                           // 0x0305 (size: 0x1)
    TArray<int32> Techs Unlocking This;                                               // 0x0308 (size: 0x10)
    FString techNamePreview;                                                          // 0x0318 (size: 0x10)

    class UWidget* GetToolTipWidget_1();
    void unlockTechSfx();
    void hasRequiredTech(bool& hasTech);
    void Update();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void updateContents();
    void updateEnabled();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_developmentBranchWidget(int32 EntryPoint);
}; // Size: 0x328

#endif
