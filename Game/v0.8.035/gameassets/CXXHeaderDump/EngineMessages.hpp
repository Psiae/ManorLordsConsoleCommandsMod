#ifndef UE4SS_SDK_EngineMessages_HPP
#define UE4SS_SDK_EngineMessages_HPP

struct FEngineServiceAuthDeny
{
    FString UserName;                                                                 // 0x0000 (size: 0x10)
    FString UserToDeny;                                                               // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FEngineServiceAuthGrant
{
    FString UserName;                                                                 // 0x0000 (size: 0x10)
    FString UserToGrant;                                                              // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FEngineServiceExecuteCommand
{
    FString Command;                                                                  // 0x0000 (size: 0x10)
    FString UserName;                                                                 // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FEngineServiceNotification
{
    FString Text;                                                                     // 0x0000 (size: 0x10)
    double TimeSeconds;                                                               // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FEngineServicePing
{
}; // Size: 0x1

struct FEngineServicePong
{
    FString CurrentLevel;                                                             // 0x0000 (size: 0x10)
    int32 EngineVersion;                                                              // 0x0010 (size: 0x4)
    bool HasBegunPlay;                                                                // 0x0014 (size: 0x1)
    FGuid InstanceId;                                                                 // 0x0018 (size: 0x10)
    FString InstanceType;                                                             // 0x0028 (size: 0x10)
    FGuid SessionId;                                                                  // 0x0038 (size: 0x10)
    float WorldTimeSeconds;                                                           // 0x0048 (size: 0x4)

}; // Size: 0x50

struct FEngineServiceTerminate
{
    FString UserName;                                                                 // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FTraceChannelPreset
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FString ChannelList;                                                              // 0x0010 (size: 0x10)
    bool bIsReadOnly;                                                                 // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FTraceControlBookmark
{
    FString Label;                                                                    // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FTraceControlChannelsDesc
{
    TArray<FString> Channels;                                                         // 0x0000 (size: 0x10)
    TArray<uint32> Ids;                                                               // 0x0010 (size: 0x10)
    TArray<FString> Descriptions;                                                     // 0x0020 (size: 0x10)
    TArray<uint32> ReadOnlyIds;                                                       // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FTraceControlChannelsPing
{
    uint32 KnownChannelCount;                                                         // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FTraceControlChannelsSet
{
    TArray<uint32> ChannelIdsToEnable;                                                // 0x0000 (size: 0x10)
    TArray<uint32> ChannelIdsToDisable;                                               // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FTraceControlChannelsStatus
{
    TArray<uint32> EnabledIds;                                                        // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FTraceControlDiscovery : public FTraceControlStatus
{
    FGuid SessionId;                                                                  // 0x0068 (size: 0x10)
    FGuid InstanceId;                                                                 // 0x0078 (size: 0x10)

}; // Size: 0x88

struct FTraceControlDiscoveryPing
{
    FGuid SessionId;                                                                  // 0x0000 (size: 0x10)
    FGuid InstanceId;                                                                 // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FTraceControlFile : public FTraceControlStartCommon
{
    FString File;                                                                     // 0x0018 (size: 0x10)
    bool bTruncateFile;                                                               // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FTraceControlPause
{
}; // Size: 0x1

struct FTraceControlResume
{
}; // Size: 0x1

struct FTraceControlScreenshot
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    bool bShowUI;                                                                     // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FTraceControlSend : public FTraceControlStartCommon
{
    FString Host;                                                                     // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FTraceControlSetStatNamedEvents
{
    bool bEnabled;                                                                    // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FTraceControlSettings
{
    bool bUseWorkerThread;                                                            // 0x0000 (size: 0x1)
    bool bUseImportantCache;                                                          // 0x0001 (size: 0x1)
    uint32 TailSizeBytes;                                                             // 0x0004 (size: 0x4)
    TArray<FTraceChannelPreset> ChannelPresets;                                       // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FTraceControlSettingsPing
{
}; // Size: 0x1

struct FTraceControlSnapshotFile
{
    FString File;                                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FTraceControlSnapshotSend
{
    FString Host;                                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FTraceControlStartCommon
{
    FString Channels;                                                                 // 0x0000 (size: 0x10)
    bool bExcludeTail;                                                                // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FTraceControlStatus
{
    FString Endpoint;                                                                 // 0x0000 (size: 0x10)
    FGuid SessionGuid;                                                                // 0x0010 (size: 0x10)
    FGuid TraceGuid;                                                                  // 0x0020 (size: 0x10)
    uint64 BytesSent;                                                                 // 0x0030 (size: 0x8)
    uint64 BytesTraced;                                                               // 0x0038 (size: 0x8)
    uint64 MemoryUsed;                                                                // 0x0040 (size: 0x8)
    uint32 CacheAllocated;                                                            // 0x0048 (size: 0x4)
    uint32 CacheUsed;                                                                 // 0x004C (size: 0x4)
    uint32 CacheWaste;                                                                // 0x0050 (size: 0x4)
    bool bAreStatNamedEventsEnabled;                                                  // 0x0054 (size: 0x1)
    bool bIsPaused;                                                                   // 0x0055 (size: 0x1)
    bool bIsTracing;                                                                  // 0x0056 (size: 0x1)
    FDateTime StatusTimestamp;                                                        // 0x0058 (size: 0x8)
    uint8 TraceSystemStatus;                                                          // 0x0060 (size: 0x1)

}; // Size: 0x68

struct FTraceControlStatusPing
{
}; // Size: 0x1

struct FTraceControlStop
{
}; // Size: 0x1

#endif
