#ifndef UE4SS_SDK_claimProgress_HPP
#define UE4SS_SDK_claimProgress_HPP

class UclaimProgress_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02E0 (size: 0x8)
    class UImage* Bg;                                                                 // 0x02E8 (size: 0x8)
    class UBorder* claiming_border;                                                   // 0x02F0 (size: 0x8)
    class UProgressBar* claiming_progress;                                            // 0x02F8 (size: 0x8)
    class UTextBlock* Claiming_txt;                                                   // 0x0300 (size: 0x8)
    class UImage* iconImg;                                                            // 0x0308 (size: 0x8)
    class UOverlay* Overlay_52;                                                       // 0x0310 (size: 0x8)
    class UImage* progress;                                                           // 0x0318 (size: 0x8)
    class ARegion* currentRegion;                                                     // 0x0320 (size: 0x8)
    class UMaterialInstanceDynamic* dynamicCircularMaterial;                          // 0x0328 (size: 0x8)

    void updateClaimBar();
    void Construct();
    void updateRegularly();
    void ExecuteUbergraph_claimProgress(int32 EntryPoint);
}; // Size: 0x330

#endif
