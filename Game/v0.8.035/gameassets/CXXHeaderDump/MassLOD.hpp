#ifndef UE4SS_SDK_MassLOD_HPP
#define UE4SS_SDK_MassLOD_HPP

#include "MassLOD_enums.hpp"

struct FMassCollectDistanceLODViewerInfoTag : public FMassTag
{
}; // Size: 0x1

struct FMassCollectLODViewerInfoTag : public FMassTag
{
}; // Size: 0x1

struct FMassHighLODTag : public FMassTag
{
}; // Size: 0x1

struct FMassLowLODTag : public FMassTag
{
}; // Size: 0x1

struct FMassMediumLODTag : public FMassTag
{
}; // Size: 0x1

struct FMassOffLODTag : public FMassTag
{
}; // Size: 0x1

struct FMassSimulationLODFragment : public FMassFragment
{
}; // Size: 0x8

struct FMassSimulationLODParameters : public FMassConstSharedFragment
{
    float LODDistance;                                                                // 0x0000 (size: 0x10)
    float BufferHysteresisOnDistancePercentage;                                       // 0x0010 (size: 0x4)
    int32 LODMaxCount;                                                                // 0x0014 (size: 0x10)
    bool bSetLODTags;                                                                 // 0x0024 (size: 0x1)

}; // Size: 0x28

struct FMassSimulationLODSharedFragment : public FMassSharedFragment
{
}; // Size: 0x2020

struct FMassSimulationVariableTickChunkFragment : public FMassVariableTickChunkFragment
{
}; // Size: 0xC

struct FMassSimulationVariableTickFragment : public FMassFragment
{
}; // Size: 0x10

struct FMassSimulationVariableTickParameters : public FMassConstSharedFragment
{
    float TickRates;                                                                  // 0x0000 (size: 0x10)
    bool bSpreadFirstSimulationUpdate;                                                // 0x0010 (size: 0x1)

}; // Size: 0x14

struct FMassSimulationVariableTickSharedFragment : public FMassSharedFragment
{
}; // Size: 0x30

struct FMassVariableTickChunkFragment : public FMassChunkFragment
{
    bool bShouldTickThisFrame;                                                        // 0x0000 (size: 0x1)
    TEnumAsByte<EMassLOD::Type> LOD;                                                  // 0x0001 (size: 0x1)
    float TimeUntilNextTick;                                                          // 0x0004 (size: 0x4)
    int32 LastChunkSerialModificationNumber;                                          // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FMassViewerHandle : public FIndexedHandleBase
{
}; // Size: 0x8

struct FMassViewerInfoFragment : public FMassFragment
{
    float ClosestViewerDistanceSq;                                                    // 0x0000 (size: 0x4)
    float ClosestDistanceToFrustum;                                                   // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FMassVisibilityCanBeSeenTag : public FMassTag
{
}; // Size: 0x1

struct FMassVisibilityCulledByDistanceTag : public FMassTag
{
}; // Size: 0x1

struct FMassVisibilityCulledByFrustumTag : public FMassTag
{
}; // Size: 0x1

struct FMassVisualizationChunkFragment : public FMassChunkFragment
{
    EMassVisibility Visibility;                                                       // 0x0000 (size: 0x1)
    bool bContainsNewlyVisibleEntity;                                                 // 0x0001 (size: 0x1)
    float DeltaTime;                                                                  // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FViewerInfo
{
    class AActor* ActorViewer;                                                        // 0x0000 (size: 0x8)

}; // Size: 0x68

class UMassDistanceLODCollectorTrait : public UMassEntityTraitBase
{
}; // Size: 0x28

class UMassLODCollectorProcessor : public UMassProcessor
{
}; // Size: 0xD50

class UMassLODCollectorTrait : public UMassEntityTraitBase
{
}; // Size: 0x28

class UMassLODDistanceCollectorProcessor : public UMassProcessor
{
}; // Size: 0xD50

class UMassLODSubsystem : public UMassSubsystemBase
{
    uint8 bGatherPlayerControllers;                                                   // 0x0038 (size: 0x1)
    uint8 bGatherStreamingSources;                                                    // 0x0038 (size: 0x1)
    uint8 bAllowNonPlayerViwerActors;                                                 // 0x0038 (size: 0x1)
    uint8 bUsePlayerPawnLocationInsteadOfCamera;                                      // 0x0038 (size: 0x1)
    TArray<FViewerInfo> Viewers;                                                      // 0x0040 (size: 0x10)
    TMap<uint32, FMassViewerHandle> ViewerMap;                                        // 0x0050 (size: 0x50)
    TArray<class AActor*> RegisteredActorViewers;                                     // 0x00A0 (size: 0x10)

    void OnPlayerControllerEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
}; // Size: 0x100

class UMassSimulationLODProcessor : public UMassProcessor
{
    bool bDoAdjustmentFromCount;                                                      // 0x1050 (size: 0x1)

}; // Size: 0x1060

class UMassSimulationLODTrait : public UMassEntityTraitBase
{
    FMassSimulationLODParameters Params;                                              // 0x0028 (size: 0x28)
    bool bEnableVariableTicking;                                                      // 0x0050 (size: 0x1)
    FMassSimulationVariableTickParameters VariableTickParams;                         // 0x0054 (size: 0x14)

}; // Size: 0x68

#endif
