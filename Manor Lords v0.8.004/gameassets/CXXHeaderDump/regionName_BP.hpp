#ifndef UE4SS_SDK_regionName_BP_HPP
#define UE4SS_SDK_regionName_BP_HPP

class AregionName_BP_C : public ATextRenderActor
{
    class ARegion* Region;                                                            // 0x0298 (size: 0x8)

    void updateRegionName(const FText& Name);
    void UserConstructionScript();
}; // Size: 0x2A0

#endif
