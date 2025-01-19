#ifndef UE4SS_SDK_NetCore_HPP
#define UE4SS_SDK_NetCore_HPP

#include "NetCore_enums.hpp"

struct FEscalationState : public FStateStruct
{
    bool bLogEscalate;                                                                // 0x0018 (size: 0x1)
    bool bDormant;                                                                    // 0x0019 (size: 0x1)
    int16 CooloffTime;                                                                // 0x001A (size: 0x2)
    int16 AutoEscalateTime;                                                           // 0x001C (size: 0x2)
    int8 HighestTimePeriod;                                                           // 0x001E (size: 0x1)
    TArray<int8> AllTimePeriods;                                                      // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FFastArraySerializer
{
    int32 ArrayReplicationKey;                                                        // 0x0054 (size: 0x4)
    EFastArraySerializerDeltaFlags DeltaFlags;                                        // 0x0100 (size: 0x1)

}; // Size: 0x108

struct FFastArraySerializerItem
{
    int32 ReplicationID;                                                              // 0x0000 (size: 0x4)
    int32 ReplicationKey;                                                             // 0x0004 (size: 0x4)
    int32 MostRecentArrayReplicationKey;                                              // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FNetAnalyticsDataConfig
{
    FName DataName;                                                                   // 0x0000 (size: 0x8)
    bool bEnabled;                                                                    // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FNetFaultState : public FEscalationState
{
    bool bCloseConnection;                                                            // 0x0030 (size: 0x1)
    int16 EscalateQuotaFaultsPerPeriod;                                               // 0x0032 (size: 0x2)
    int8 EscalateQuotaFaultPercentPerPeriod;                                          // 0x0034 (size: 0x1)
    int16 DescalateQuotaFaultsPerPeriod;                                              // 0x0036 (size: 0x2)
    int8 DescalateQuotaFaultPercentPerPeriod;                                         // 0x0038 (size: 0x1)
    int8 EscalateQuotaTimePeriod;                                                     // 0x0039 (size: 0x1)

}; // Size: 0x40

struct FStateStruct
{
    FString StateName;                                                                // 0x0008 (size: 0x10)

}; // Size: 0x18

class UEscalationManagerConfig : public UStatePerObjectConfig
{
    TArray<FString> EscalationSeverity;                                               // 0x0068 (size: 0x10)

}; // Size: 0x88

class UNetAnalyticsAggregatorConfig : public UObject
{
    TArray<FNetAnalyticsDataConfig> NetAnalyticsData;                                 // 0x0028 (size: 0x10)

}; // Size: 0x38

class UStatePerObjectConfig : public UObject
{
    FString PerObjectConfigSection;                                                   // 0x0050 (size: 0x10)
    bool bEnabled;                                                                    // 0x0060 (size: 0x1)

}; // Size: 0x68

#endif
