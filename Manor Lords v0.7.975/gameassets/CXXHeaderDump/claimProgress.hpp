#ifndef UE4SS_SDK_claimProgress_HPP
#define UE4SS_SDK_claimProgress_HPP

class UclaimProgress_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Bg;                                                                 // 0x0268 (size: 0x8)
    class UBorder* claiming_border;                                                   // 0x0270 (size: 0x8)
    class UProgressBar* claiming_progress;                                            // 0x0278 (size: 0x8)
    class UTextBlock* Claiming_txt;                                                   // 0x0280 (size: 0x8)
    class UImage* iconImg;                                                            // 0x0288 (size: 0x8)
    class UOverlay* Overlay_52;                                                       // 0x0290 (size: 0x8)
    class UImage* progress;                                                           // 0x0298 (size: 0x8)
    class ARegion* currentRegion;                                                     // 0x02A0 (size: 0x8)
    class UMaterialInstanceDynamic* dynamicCircularMaterial;                          // 0x02A8 (size: 0x8)

    void updateClaimBar();
    void Construct();
    void updateRegularly();
    void ExecuteUbergraph_claimProgress(int32 EntryPoint);
}; // Size: 0x2B0

#endif
