#ifndef UE4SS_SDK_developmentBranchWidget_HPP
#define UE4SS_SDK_developmentBranchWidget_HPP

class UdevelopmentBranchWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* unlockSheen;                                              // 0x02E8 (size: 0x8)
    class UButton* Button_0;                                                          // 0x02F0 (size: 0x8)
    class UImage* glow;                                                               // 0x02F8 (size: 0x8)
    class UImage* glow_1;                                                             // 0x0300 (size: 0x8)
    class UImage* glowFlare;                                                          // 0x0308 (size: 0x8)
    class UGridPanel* GridPanel_0;                                                    // 0x0310 (size: 0x8)
    class UImage* Image_290;                                                          // 0x0318 (size: 0x8)
    class UImage* img;                                                                // 0x0320 (size: 0x8)
    class UImage* mark;                                                               // 0x0328 (size: 0x8)
    class UMD_NaviAutoButton_C* MD_NaviAutoButton;                                    // 0x0330 (size: 0x8)
    int32 techID;                                                                     // 0x0338 (size: 0x4)
    class ARegion* Region;                                                            // 0x0340 (size: 0x8)
    bool possible;                                                                    // 0x0348 (size: 0x1)
    bool Enabled;                                                                     // 0x0349 (size: 0x1)
    class UdevelopmentPanelTree_C* developmentTreeWidget;                             // 0x0350 (size: 0x8)
    int32 cost;                                                                       // 0x0358 (size: 0x4)
    TArray<int32> required;                                                           // 0x0360 (size: 0x10)
    FString Name;                                                                     // 0x0370 (size: 0x10)
    int32 tier;                                                                       // 0x0380 (size: 0x4)
    bool temp_disable;                                                                // 0x0384 (size: 0x1)
    double Angle;                                                                     // 0x0388 (size: 0x8)
    uint8 splitType;                                                                  // 0x0390 (size: 0x1)
    bool link_verticalFlip;                                                           // 0x0391 (size: 0x1)
    TArray<int32> Techs Unlocking This;                                               // 0x0398 (size: 0x10)
    FString techNamePreview;                                                          // 0x03A8 (size: 0x10)

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
    void BndEvt__developmentBranchWidget_MD_NaviAutoButton_K2Node_ComponentBoundEvent_1_OnPress__DelegateSignature();
    void ExecuteUbergraph_developmentBranchWidget(int32 EntryPoint);
}; // Size: 0x3B8

#endif
