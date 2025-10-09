#ifndef UE4SS_SDK_NetCore_HPP
#define UE4SS_SDK_NetCore_HPP

struct FNetAnalyticsDataConfig
{
    FName DataName;                                                                   // 0x0000 (size: 0x8)
    bool bEnabled;                                                                    // 0x0008 (size: 0x1)

}; // Size: 0xC

class UNetAnalyticsAggregatorConfig : public UObject
{
    TArray<FNetAnalyticsDataConfig> NetAnalyticsData;                                 // 0x0028 (size: 0x10)

}; // Size: 0x38

#endif
