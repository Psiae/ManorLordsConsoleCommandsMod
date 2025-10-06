#ifndef UE4SS_SDK_DataflowSimulation_HPP
#define UE4SS_SDK_DataflowSimulation_HPP

struct FAdvancePhysicsSolversDataflowNode : public FDataflowSimulationNode
{
    FDataflowSimulationTime SimulationTime;                                           // 0x0198 (size: 0xC)
    TArray<FDataflowSimulationProperty> PhysicsSolvers;                               // 0x01A8 (size: 0x10)

}; // Size: 0x1B8

struct FDataflowCollisionObjectProxy : public FDataflowSimulationProxy
{
}; // Size: 0x78

struct FDataflowConstraintObjectProxy : public FDataflowSimulationProxy
{
}; // Size: 0x78

struct FDataflowExecutionNode : public FDataflowSimulationNode
{
}; // Size: 0x198

struct FDataflowInvalidNode : public FDataflowSimulationNode
{
}; // Size: 0x198

struct FDataflowPhysicsObjectProxy : public FDataflowSimulationProxy
{
}; // Size: 0x78

struct FDataflowPhysicsSolverProxy : public FDataflowSimulationProxy
{
}; // Size: 0x78

struct FDataflowSimulationAsset
{
    class UDataflow* DataflowAsset;                                                   // 0x0000 (size: 0x8)
    TSet<FString> SimulationGroups;                                                   // 0x0008 (size: 0x50)

}; // Size: 0x58

struct FDataflowSimulationNode : public FDataflowNode
{
}; // Size: 0x198

struct FDataflowSimulationProperty
{
}; // Size: 0x8

struct FDataflowSimulationProxy
{
}; // Size: 0x78

struct FDataflowSimulationTime
{
    float DeltaTime;                                                                  // 0x0000 (size: 0x4)
    float CurrentTime;                                                                // 0x0004 (size: 0x4)
    float TimeOffset;                                                                 // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FFilterSimulationProxiesDataflowNode : public FDataflowSimulationNode
{
    TArray<FDataflowSimulationProperty> SimulationProxies;                            // 0x0198 (size: 0x10)
    TArray<FDataflowSimulationProperty> FilteredProxies;                              // 0x01A8 (size: 0x10)
    TArray<FString> SimulationGroups;                                                 // 0x01B8 (size: 0x10)

}; // Size: 0x1C8

struct FGetPhysicsSolversDataflowNode : public FDataflowInvalidNode
{
    TArray<FDataflowSimulationProperty> PhysicsSolvers;                               // 0x0198 (size: 0x10)
    TArray<FString> SimulationGroups;                                                 // 0x01A8 (size: 0x10)

}; // Size: 0x1B8

struct FGetSimulationTimeDataflowNode : public FDataflowInvalidNode
{
    FDataflowSimulationTime SimulationTime;                                           // 0x0198 (size: 0xC)

}; // Size: 0x1A8

struct FSimulationProxiesTerminalDataflowNode : public FDataflowExecutionNode
{
    TArray<FDataflowSimulationProperty> SimulationProxies;                            // 0x0198 (size: 0x10)

}; // Size: 0x1A8

class IDataflowCollisionObjectInterface : public IDataflowSimulationInterface
{
}; // Size: 0x28

class IDataflowConstraintObjectInterface : public IDataflowSimulationInterface
{
}; // Size: 0x28

class IDataflowGeometryCachable : public IInterface
{
}; // Size: 0x28

class IDataflowPhysicsObjectInterface : public IDataflowSimulationInterface
{
}; // Size: 0x28

class IDataflowPhysicsSolverInterface : public IDataflowSimulationInterface
{
}; // Size: 0x28

class IDataflowSimulationActor : public IInterface
{

    void PreDataflowSimulationTick(const float SimulationTime, const float DeltaTime);
    void PostDataflowSimulationTick(const float SimulationTime, const float DeltaTime);
}; // Size: 0x28

class IDataflowSimulationInterface : public IInterface
{
}; // Size: 0x28

class UDataflowSimulationManager : public UTickableWorldSubsystem
{
}; // Size: 0xA8

#endif
