#ifndef UE4SS_SDK_policyChoice_HPP
#define UE4SS_SDK_policyChoice_HPP

class UpolicyChoice_C : public UUserWidget
{
    class UHorizontalBox* options_Tier0_HB;                                           // 0x0260 (size: 0x8)
    TArray<class UpolicySlotWidget_C*> policySlotWidgets;                             // 0x0268 (size: 0x10)
    class ARegion* Region;                                                            // 0x0278 (size: 0x8)
    class URegionPanel_C* daddy;                                                      // 0x0280 (size: 0x8)

    void updateAvailable();
}; // Size: 0x288

#endif
