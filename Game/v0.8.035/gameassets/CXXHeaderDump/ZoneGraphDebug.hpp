#ifndef UE4SS_SDK_ZoneGraphDebug_HPP
#define UE4SS_SDK_ZoneGraphDebug_HPP

class AZoneGraphTestingActor : public AActor
{
    class UZoneGraphTestingComponent* DebugComp;                                      // 0x02A8 (size: 0x8)

    void EnableCustomTests();
    void DisableCustomTests();
}; // Size: 0x2B0

class UZoneGraphTestingComponent : public UPrimitiveComponent
{
    class UZoneGraphSubsystem* ZoneGraph;                                             // 0x04F8 (size: 0x8)
    FZoneGraphLaneLocation LaneLocation;                                              // 0x0500 (size: 0x70)
    FZoneGraphLaneLocation NextLaneLocation;                                          // 0x0570 (size: 0x70)
    FZoneGraphLaneLocation NearestLaneLocation;                                       // 0x05E0 (size: 0x70)
    FVector SearchExtent;                                                             // 0x0650 (size: 0x18)
    float AdvanceDistance;                                                            // 0x0668 (size: 0x4)
    FVector NearestTestOffset;                                                        // 0x0670 (size: 0x18)
    FZoneGraphTagFilter QueryFilter;                                                  // 0x0688 (size: 0xC)
    bool bDrawLinkedLanes;                                                            // 0x0694 (size: 0x1)
    bool bDrawLaneTangentVectors;                                                     // 0x0695 (size: 0x1)
    bool bDrawLaneSmoothing;                                                          // 0x0696 (size: 0x1)
    bool bDrawBVTreeQuery;                                                            // 0x0697 (size: 0x1)
    bool bDrawLanePath;                                                               // 0x0698 (size: 0x1)
    class AZoneGraphTestingActor* OtherActor;                                         // 0x06A0 (size: 0x8)
    TArray<class UZoneLaneTest*> CustomTests;                                         // 0x07A8 (size: 0x10)

    void EnableCustomTests();
    void DisableCustomTests();
}; // Size: 0x7C0

class UZoneLaneTest : public UObject
{
    class UZoneGraphTestingComponent* OwnerComponent;                                 // 0x0028 (size: 0x8)

}; // Size: 0x30

#endif
