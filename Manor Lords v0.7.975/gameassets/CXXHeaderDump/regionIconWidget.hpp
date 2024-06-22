#ifndef UE4SS_SDK_regionIconWidget_HPP
#define UE4SS_SDK_regionIconWidget_HPP

class UregionIconWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Bg;                                                                 // 0x0268 (size: 0x8)
    class UButton* Button_73;                                                         // 0x0270 (size: 0x8)
    class UImage* DynamicIcon;                                                        // 0x0278 (size: 0x8)
    class UImage* progress;                                                           // 0x0280 (size: 0x8)
    class UProgressBar* ProgressBar_177;                                              // 0x0288 (size: 0x8)
    class UImage* selectionImg;                                                       // 0x0290 (size: 0x8)
    FVector pos3d;                                                                    // 0x0298 (size: 0xC)
    class ARegion* Region;                                                            // 0x02A8 (size: 0x8)
    bool beingClaimed;                                                                // 0x02B0 (size: 0x1)
    bool contested;                                                                   // 0x02B1 (size: 0x1)
    float claimProgress;                                                              // 0x02B4 (size: 0x4)
    bool Selected;                                                                    // 0x02B8 (size: 0x1)
    class UMaterialInstanceDynamic* dynamicCircularMaterial;                          // 0x02C0 (size: 0x8)
    class APawnCPP* claimedBy;                                                        // 0x02C8 (size: 0x8)
    float ownerColorA;                                                                // 0x02D0 (size: 0x4)
    float claimerColorA;                                                              // 0x02D4 (size: 0x4)
    class UMaterialInstanceDynamic* regionIcon_Material;                              // 0x02D8 (size: 0x8)
    float lastPressed;                                                                // 0x02E0 (size: 0x4)
    float doubleClickThres;                                                           // 0x02E4 (size: 0x4)

    void setOrAnimateColors();
    void updateRegionIconContents();
    void updatePositionAndVis();
    void updateProgress();
    void BndEvt__Button_73_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_regionIconWidget(int32 EntryPoint);
}; // Size: 0x2E8

#endif
