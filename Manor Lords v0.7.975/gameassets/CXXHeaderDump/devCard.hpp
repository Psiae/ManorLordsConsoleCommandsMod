#ifndef UE4SS_SDK_devCard_HPP
#define UE4SS_SDK_devCard_HPP

class UdevCard_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* unlockSheen;                                              // 0x0268 (size: 0x8)
    class UWidgetAnimation* NewAnimation_1;                                           // 0x0270 (size: 0x8)
    class UBorder* Border_0;                                                          // 0x0278 (size: 0x8)
    class UBorder* cost_border_1;                                                     // 0x0280 (size: 0x8)
    class UTextBlock* cost_txt;                                                       // 0x0288 (size: 0x8)
    class UImage* glow;                                                               // 0x0290 (size: 0x8)
    class UImage* glowFlare;                                                          // 0x0298 (size: 0x8)
    class UImage* icon_img;                                                           // 0x02A0 (size: 0x8)
    class UImage* Image;                                                              // 0x02A8 (size: 0x8)
    class UButton* MainButton;                                                        // 0x02B0 (size: 0x8)
    class UTextBlock* name_txt;                                                       // 0x02B8 (size: 0x8)
    class UImage* progressImg;                                                        // 0x02C0 (size: 0x8)
    class UBorder* ribbon;                                                            // 0x02C8 (size: 0x8)
    class UBorder* tier_border;                                                       // 0x02D0 (size: 0x8)
    class UTextBlock* tier_txt;                                                       // 0x02D8 (size: 0x8)
    class UTexture2D* techImg;                                                        // 0x02E0 (size: 0x8)
    FText techName;                                                                   // 0x02E8 (size: 0x18)
    FText techDescr;                                                                  // 0x0300 (size: 0x18)
    bool hideRibbon;                                                                  // 0x0318 (size: 0x1)
    int32 techID;                                                                     // 0x031C (size: 0x4)
    TArray<int32> required;                                                           // 0x0320 (size: 0x10)
    bool Enabled;                                                                     // 0x0330 (size: 0x1)
    int32 currentTier;                                                                // 0x0334 (size: 0x4)
    class UdevelopmentPanelTree_C* devPanel;                                          // 0x0338 (size: 0x8)
    class ARegion* Region;                                                            // 0x0340 (size: 0x8)
    int32 cost;                                                                       // 0x0348 (size: 0x4)
    int32 Max Tier;                                                                   // 0x034C (size: 0x4)
    class UMaterialInstanceDynamic* dynamicMat;                                       // 0x0350 (size: 0x8)
    bool wasHovered;                                                                  // 0x0358 (size: 0x1)

    FText GetText_0();
    void SequenceEvent_0();
    void updateTech(int32 tier, int32 cost);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void PreConstruct(bool IsDesignTime);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_devCard(int32 EntryPoint);
}; // Size: 0x359

#endif
