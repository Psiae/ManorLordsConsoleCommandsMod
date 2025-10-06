#ifndef UE4SS_SDK_WorldMetricsCore_HPP
#define UE4SS_SDK_WorldMetricsCore_HPP

struct FWorldMetricCollection
{
    TArray<class UWorldMetricInterface*> Metrics;                                     // 0x0000 (size: 0x10)
    TWeakObjectPtr<class UWorldMetricsSubsystem> Subsystem;                           // 0x0010 (size: 0x8)
    bool bIsEnabled;                                                                  // 0x0018 (size: 0x1)

}; // Size: 0x20

class IWorldMetricsActorTrackerSubscriber : public IInterface
{
}; // Size: 0x28

class UWorldMetricInterface : public UObject
{
}; // Size: 0x28

class UWorldMetricsActorTracker : public UWorldMetricsExtension
{
}; // Size: 0xD0

class UWorldMetricsExtension : public UObject
{
}; // Size: 0x28

class UWorldMetricsSubsystem : public UWorldSubsystem
{
    TArray<class UWorldMetricInterface*> Metrics;                                     // 0x0040 (size: 0x10)
    float UpdateRateInSeconds;                                                        // 0x2A30 (size: 0x4)
    int32 WarmUpFrames;                                                               // 0x2A34 (size: 0x4)

}; // Size: 0x2A40

#endif
