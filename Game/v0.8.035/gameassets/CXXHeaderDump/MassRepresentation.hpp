#ifndef UE4SS_SDK_MassRepresentation_HPP
#define UE4SS_SDK_MassRepresentation_HPP

#include "MassRepresentation_enums.hpp"

struct FMassDistanceLODParameters : public FMassConstSharedFragment
{
    float LODDistance;                                                                // 0x0000 (size: 0x10)
    float BufferHysteresisOnDistancePercentage;                                       // 0x0010 (size: 0x4)
    class UScriptStruct* FilterTag;                                                   // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FMassDistanceLODProcessorTag : public FMassTag
{
}; // Size: 0x1

struct FMassDistanceLODSharedFragment : public FMassSharedFragment
{
    class UScriptStruct* FilterTag;                                                   // 0x2018 (size: 0x8)

}; // Size: 0x2020

struct FMassInstancedStaticMeshInfo
{
    FStaticMeshInstanceVisualizationDesc Desc;                                        // 0x0000 (size: 0x80)
    TArray<class UInstancedStaticMeshComponent*> InstancedStaticMeshComponents;       // 0x0080 (size: 0x10)
    TArray<FMassLODSignificanceRange> LODSignificanceRanges;                          // 0x0090 (size: 0x10)

}; // Size: 0xA0

struct FMassLODSignificanceRange
{
}; // Size: 0x20

struct FMassRepresentationFragment : public FMassFragment
{
    EMassRepresentationType CurrentRepresentation;                                    // 0x0000 (size: 0x1)
    EMassRepresentationType PrevRepresentation;                                       // 0x0001 (size: 0x1)
    int16 HighResTemplateActorIndex;                                                  // 0x0002 (size: 0x2)
    int16 LowResTemplateActorIndex;                                                   // 0x0004 (size: 0x2)
    FStaticMeshInstanceVisualizationDescHandle StaticMeshDescHandle;                  // 0x0006 (size: 0x2)
    FMassActorSpawnRequestHandle ActorSpawnRequestHandle;                             // 0x0008 (size: 0x8)
    FTransform PrevTransform;                                                         // 0x0010 (size: 0x60)
    float PrevLODSignificance;                                                        // 0x0070 (size: 0x4)

}; // Size: 0x80

struct FMassRepresentationLODFragment : public FMassFragment
{
    TEnumAsByte<EMassLOD::Type> LOD;                                                  // 0x0000 (size: 0x1)
    TEnumAsByte<EMassLOD::Type> PrevLOD;                                              // 0x0001 (size: 0x1)
    EMassVisibility Visibility;                                                       // 0x0002 (size: 0x1)
    EMassVisibility PrevVisibility;                                                   // 0x0003 (size: 0x1)
    float LODSignificance;                                                            // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FMassRepresentationParameters : public FMassConstSharedFragment
{
    TSubclassOf<class UMassRepresentationActorManagement> RepresentationActorManagementClass; // 0x0000 (size: 0x8)
    EMassRepresentationType LODRepresentation;                                        // 0x0008 (size: 0x4)
    uint8 bForceActorRepresentationForExternalActors;                                 // 0x000C (size: 0x1)
    uint8 bKeepLowResActors;                                                          // 0x000C (size: 0x1)
    uint8 bKeepActorExtraFrame;                                                       // 0x000C (size: 0x1)
    uint8 bSpreadFirstVisualizationUpdate;                                            // 0x000C (size: 0x1)
    FName WorldPartitionGridNameContainingCollision;                                  // 0x0010 (size: 0x8)
    float NotVisibleUpdateRate;                                                       // 0x0018 (size: 0x4)
    EMassRepresentationType CachedDefaultRepresentationType;                          // 0x001C (size: 0x1)
    class UMassRepresentationActorManagement* CachedRepresentationActorManagement;    // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FMassRepresentationSubsystemSharedFragment : public FMassSharedFragment
{
    class UMassRepresentationSubsystem* RepresentationSubsystem;                      // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FMassRepresentationUpdateParams
{
    bool bTestCollisionAvailibilityForActorVisualization;                             // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FMassStaticMeshInstanceVisualizationMeshDesc
{
    class UStaticMesh* Mesh;                                                          // 0x0000 (size: 0x8)
    TArray<class UMaterialInterface*> MaterialOverrides;                              // 0x0008 (size: 0x10)
    float MinLODSignificance;                                                         // 0x0018 (size: 0x4)
    float MaxLODSignificance;                                                         // 0x001C (size: 0x4)
    bool bCastShadows;                                                                // 0x0020 (size: 0x1)
    TSubclassOf<class UInstancedStaticMeshComponent> ISMComponentClass;               // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FMassStaticRepresentationTag : public FMassTag
{
}; // Size: 0x1

struct FMassStationaryISMSwitcherProcessorTag : public FMassTag
{
}; // Size: 0x1

struct FMassVisualizationLODParameters : public FMassConstSharedFragment
{
    float BaseLODDistance;                                                            // 0x0000 (size: 0x10)
    float VisibleLODDistance;                                                         // 0x0010 (size: 0x10)
    float BufferHysteresisOnDistancePercentage;                                       // 0x0020 (size: 0x4)
    int32 LODMaxCount;                                                                // 0x0024 (size: 0x10)
    float DistanceToFrustum;                                                          // 0x0034 (size: 0x4)
    float DistanceToFrustumHysteresis;                                                // 0x0038 (size: 0x4)
    class UScriptStruct* FilterTag;                                                   // 0x0040 (size: 0x8)

}; // Size: 0x48

struct FMassVisualizationLODProcessorTag : public FMassTag
{
}; // Size: 0x1

struct FMassVisualizationLODSharedFragment : public FMassSharedFragment
{
    class UScriptStruct* FilterTag;                                                   // 0x2020 (size: 0x8)

}; // Size: 0x2028

struct FMassVisualizationProcessorTag : public FMassTag
{
}; // Size: 0x1

struct FStaticMeshInstanceVisualizationDesc : public FTableRowBase
{
    TArray<FMassStaticMeshInstanceVisualizationMeshDesc> Meshes;                      // 0x0008 (size: 0x10)
    bool bUseTransformOffset;                                                         // 0x0018 (size: 0x1)
    FTransform TransformOffset;                                                       // 0x0020 (size: 0x60)

}; // Size: 0x80

struct FStaticMeshInstanceVisualizationDescHandle
{
    uint16 Index;                                                                     // 0x0000 (size: 0x2)

}; // Size: 0x2

class AMassVisualizer : public AActor
{
    class UMassVisualizationComponent* VisComponent;                                  // 0x02A8 (size: 0x8)

}; // Size: 0x2B0

class UMassDistanceLODProcessor : public UMassProcessor
{
    class UScriptStruct* FilterTag;                                                   // 0x0A18 (size: 0x8)

}; // Size: 0xA20

class UMassDistanceVisualizationTrait : public UMassEntityTraitBase
{
    FStaticMeshInstanceVisualizationDesc StaticMeshInstanceDesc;                      // 0x0030 (size: 0x80)
    TSubclassOf<class AActor> HighResTemplateActor;                                   // 0x00B0 (size: 0x8)
    TSubclassOf<class AActor> LowResTemplateActor;                                    // 0x00B8 (size: 0x8)
    TSubclassOf<class UMassRepresentationSubsystem> RepresentationSubsystemClass;     // 0x00C0 (size: 0x8)
    FMassRepresentationParameters Params;                                             // 0x00C8 (size: 0x28)
    FMassDistanceLODParameters LODParams;                                             // 0x00F0 (size: 0x20)
    bool bAllowServerSideVisualization;                                               // 0x0110 (size: 0x1)

}; // Size: 0x120

class UMassMovableVisualizationTrait : public UMassVisualizationTrait
{
}; // Size: 0x140

class UMassRepresentationActorManagement : public UObject
{
}; // Size: 0x28

class UMassRepresentationFragmentDestructor : public UMassObserverProcessor
{
}; // Size: 0x3F0

class UMassRepresentationProcessor : public UMassProcessor
{
    FMassRepresentationUpdateParams UpdateParams;                                     // 0x03D0 (size: 0x1)

}; // Size: 0x3E0

class UMassRepresentationSubsystem : public UMassSubsystemBase
{
    class UMassVisualizationComponent* VisualizationComponent;                        // 0x0070 (size: 0x8)
    class AMassVisualizer* Visualizer;                                                // 0x0078 (size: 0x8)
    class UMassActorSpawnerSubsystem* ActorSpawnerSubsystem;                          // 0x0080 (size: 0x8)
    class UWorldPartitionSubsystem* WorldPartitionSubsystem;                          // 0x0098 (size: 0x8)

}; // Size: 0xF8

class UMassStationaryDistanceVisualizationTrait : public UMassDistanceVisualizationTrait
{
}; // Size: 0x120

class UMassStationaryISMRepresentationFragmentDestructor : public UMassObserverProcessor
{
}; // Size: 0x3F0

class UMassStationaryISMSwitcherProcessor : public UMassProcessor
{
}; // Size: 0x3D0

class UMassStationaryVisualizationTrait : public UMassVisualizationTrait
{
}; // Size: 0x140

class UMassUpdateISMProcessor : public UMassProcessor
{
}; // Size: 0x3D0

class UMassVisualizationComponent : public UActorComponent
{
    TArray<FMassInstancedStaticMeshInfo> InstancedStaticMeshInfos;                    // 0x00A0 (size: 0x10)

}; // Size: 0x200

class UMassVisualizationLODProcessor : public UMassProcessor
{
    class UScriptStruct* FilterTag;                                                   // 0x0D38 (size: 0x8)
    bool bDoAdjustmentFromCount;                                                      // 0x0D40 (size: 0x1)

}; // Size: 0xD50

class UMassVisualizationProcessor : public UMassRepresentationProcessor
{
}; // Size: 0x3E0

class UMassVisualizationTrait : public UMassEntityTraitBase
{
    FStaticMeshInstanceVisualizationDesc StaticMeshInstanceDesc;                      // 0x0030 (size: 0x80)
    TSubclassOf<class AActor> HighResTemplateActor;                                   // 0x00B0 (size: 0x8)
    TSubclassOf<class AActor> LowResTemplateActor;                                    // 0x00B8 (size: 0x8)
    TSubclassOf<class UMassRepresentationSubsystem> RepresentationSubsystemClass;     // 0x00C0 (size: 0x8)
    FMassRepresentationParameters Params;                                             // 0x00C8 (size: 0x28)
    FMassVisualizationLODParameters LODParams;                                        // 0x00F0 (size: 0x48)
    bool bAllowServerSideVisualization;                                               // 0x0138 (size: 0x1)

}; // Size: 0x140

#endif
