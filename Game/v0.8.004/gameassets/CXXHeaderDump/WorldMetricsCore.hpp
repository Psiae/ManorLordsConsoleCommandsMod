#ifndef UE4SS_SDK_WorldMetricsCore_HPP
#define UE4SS_SDK_WorldMetricsCore_HPP

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
    TArray<class UWorldMetricsExtension*> extensions;                                 // 0x0050 (size: 0x10)
    float UpdateRateInSeconds;                                                        // 0x2870 (size: 0x4)
    int32 WarmUpFrames;                                                               // 0x2874 (size: 0x4)

}; // Size: 0x2880

#endif
