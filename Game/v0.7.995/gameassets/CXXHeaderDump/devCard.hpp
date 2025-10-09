#ifndef UE4SS_SDK_devCard_HPP
#define UE4SS_SDK_devCard_HPP

class UdevCard_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UWidgetAnimation* unlockSheen;                                              // 0x02E8 (size: 0x8)
    class UWidgetAnimation* NewAnimation_1;                                           // 0x02F0 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x02F8 (size: 0x8)
    class UBorder* cost_border_1;                                                     // 0x0300 (size: 0x8)
    class UTextBlock* cost_txt;                                                       // 0x0308 (size: 0x8)
    class UImage* glow;                                                               // 0x0310 (size: 0x8)
    class UImage* glowFlare;                                                          // 0x0318 (size: 0x8)
    class UImage* icon_img;                                                           // 0x0320 (size: 0x8)
    class UImage* Image;                                                              // 0x0328 (size: 0x8)
    class UButton* MainButton;                                                        // 0x0330 (size: 0x8)
    class UTextBlock* name_txt;                                                       // 0x0338 (size: 0x8)
    class UImage* progressImg;                                                        // 0x0340 (size: 0x8)
    class UBorder* ribbon;                                                            // 0x0348 (size: 0x8)
    class UBorder* tier_border;                                                       // 0x0350 (size: 0x8)
    class UTextBlock* tier_txt;                                                       // 0x0358 (size: 0x8)
    class UTexture2D* techImg;                                                        // 0x0360 (size: 0x8)
    FText techName;                                                                   // 0x0368 (size: 0x10)
    FText techDescr;                                                                  // 0x0378 (size: 0x10)
    bool hideRibbon;                                                                  // 0x0388 (size: 0x1)
    int32 techID;                                                                     // 0x038C (size: 0x4)
    TArray<int32> required;                                                           // 0x0390 (size: 0x10)
    bool Enabled;                                                                     // 0x03A0 (size: 0x1)
    int32 currentTier;                                                                // 0x03A4 (size: 0x4)
    class UdevelopmentPanelTree_C* devPanel;                                          // 0x03A8 (size: 0x8)
    class ARegion* Region;                                                            // 0x03B0 (size: 0x8)
    int32 cost;                                                                       // 0x03B8 (size: 0x4)
    int32 Max Tier;                                                                   // 0x03BC (size: 0x4)
    class UMaterialInstanceDynamic* dynamicMat;                                       // 0x03C0 (size: 0x8)
    bool wasHovered;                                                                  // 0x03C8 (size: 0x1)

    FText GetText_0();
    void SequenceEvent_0();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void updateTech(int32 tier, int32 cost);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_devCard(int32 EntryPoint);
}; // Size: 0x3C9

#endif
