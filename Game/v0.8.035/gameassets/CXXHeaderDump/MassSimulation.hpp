#ifndef UE4SS_SDK_MassSimulation_HPP
#define UE4SS_SDK_MassSimulation_HPP

class UMassSimulationSettings : public UMassModuleSettings
{
    double DesiredActorSpawningTimeSlicePerTick;                                      // 0x0028 (size: 0x8)
    double DesiredActorDestructionTimeSlicePerTick;                                   // 0x0030 (size: 0x8)
    bool bEntityCompactionEnabled;                                                    // 0x0038 (size: 0x1)
    double DesiredEntityCompactionTimeSlicePerTick;                                   // 0x0040 (size: 0x8)
    float DesiredActorFailedSpawningRetryTimeInterval;                                // 0x0048 (size: 0x4)
    float DesiredActorFailedSpawningRetryMoveDistance;                                // 0x004C (size: 0x4)

}; // Size: 0x50

class UMassSimulationSubsystem : public UMassSubsystemBase
{
    FMassRuntimePipeline RuntimePipeline;                                             // 0x0498 (size: 0x18)

}; // Size: 0x4B8

#endif
