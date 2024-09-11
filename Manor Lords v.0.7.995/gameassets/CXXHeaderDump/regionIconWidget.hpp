#ifndef UE4SS_SDK_regionIconWidget_HPP
#define UE4SS_SDK_regionIconWidget_HPP

class UregionIconWidget_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* bg;                                                                 // 0x02E8 (size: 0x8)
    class UButton* Button_73;                                                         // 0x02F0 (size: 0x8)
    class UImage* DynamicIcon;                                                        // 0x02F8 (size: 0x8)
    class UImage* progress;                                                           // 0x0300 (size: 0x8)
    class UProgressBar* ProgressBar_177;                                              // 0x0308 (size: 0x8)
    class UImage* selectionImg;                                                       // 0x0310 (size: 0x8)
    FVector pos3d;                                                                    // 0x0318 (size: 0x18)
    class ARegion* Region;                                                            // 0x0330 (size: 0x8)
    bool beingClaimed;                                                                // 0x0338 (size: 0x1)
    bool contested;                                                                   // 0x0339 (size: 0x1)
    double claimProgress;                                                             // 0x0340 (size: 0x8)
    bool Selected;                                                                    // 0x0348 (size: 0x1)
    class UMaterialInstanceDynamic* dynamicCircularMaterial;                          // 0x0350 (size: 0x8)
    class APawnCPP* claimedBy;                                                        // 0x0358 (size: 0x8)
    double ownerColorA;                                                               // 0x0360 (size: 0x8)
    double claimerColorA;                                                             // 0x0368 (size: 0x8)
    class UMaterialInstanceDynamic* regionIcon_Material;                              // 0x0370 (size: 0x8)
    double lastPressed;                                                               // 0x0378 (size: 0x8)
    double doubleClickThres;                                                          // 0x0380 (size: 0x8)

    void setOrAnimateColors();
    void updateRegionIconContents();
    void updatePositionAndVis();
    void updateProgress();
    void BndEvt__Button_73_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_regionIconWidget(int32 EntryPoint);
}; // Size: 0x388

#endif
