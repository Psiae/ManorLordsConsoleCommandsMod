#ifndef UE4SS_SDK_policyChoice_HPP
#define UE4SS_SDK_policyChoice_HPP

class UpolicyChoice_C : public UUserWidget
{
    class UHorizontalBox* options_Tier0_HB;                                           // 0x02E0 (size: 0x8)
    TArray<class UpolicySlotWidget_C*> policySlotWidgets;                             // 0x02E8 (size: 0x10)
    class ARegion* Region;                                                            // 0x02F8 (size: 0x8)
    class URegionPanel_C* Daddy;                                                      // 0x0300 (size: 0x8)

    void updateAvailable();
}; // Size: 0x308

#endif
