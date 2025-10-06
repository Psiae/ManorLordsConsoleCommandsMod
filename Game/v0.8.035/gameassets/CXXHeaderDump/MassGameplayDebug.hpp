#ifndef UE4SS_SDK_MassGameplayDebug_HPP
#define UE4SS_SDK_MassGameplayDebug_HPP

#include "MassGameplayDebug_enums.hpp"

struct FAgentDebugVisualization : public FTableRowBase
{
    class UStaticMesh* Mesh;                                                          // 0x0008 (size: 0x8)
    class UMaterialInterface* MaterialOverride;                                       // 0x0010 (size: 0x8)
    uint32 VisualNearCullDistance;                                                    // 0x0018 (size: 0x4)
    uint32 VisualFarCullDistance;                                                     // 0x001C (size: 0x4)
    EMassEntityDebugShape WireShape;                                                  // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FDataFragment_DebugVis : public FMassFragment
{
    EMassEntityDebugShape Shape;                                                      // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FMassDebuggableTag : public FMassTag
{
}; // Size: 0x1

struct FSimDebugDataRow : public FTableRowBase
{
    class UStaticMesh* Mesh;                                                          // 0x0008 (size: 0x8)
    class UMaterialInterface* MaterialOverride;                                       // 0x0010 (size: 0x8)
    float scale;                                                                      // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FSimDebugVisFragment : public FMassFragment
{
}; // Size: 0x8

class AMassDebugVisualizer : public AActor
{
}; // Size: 0x2A8

class UAssignDebugVisProcessor : public UMassObserverProcessor
{
}; // Size: 0x3F0

class UDebugVisLocationProcessor : public UMassProcessor
{
}; // Size: 0x3D0

class UMassDebugVisualizationComponent : public UActorComponent
{
}; // Size: 0xA0

class UMassDebugVisualizationTrait : public UMassEntityTraitBase
{
}; // Size: 0x28

class UMassDebuggerSubsystem : public UMassSubsystemBase
{
    class UMassDebugVisualizationComponent* VisualizationComponent;                   // 0x00B8 (size: 0x8)
    class AMassDebugVisualizer* DebugVisualizer;                                      // 0x00C0 (size: 0x8)

}; // Size: 0xD0

class UMassProcessor_UpdateDebugVis : public UMassProcessor
{
}; // Size: 0x3D0

#endif
