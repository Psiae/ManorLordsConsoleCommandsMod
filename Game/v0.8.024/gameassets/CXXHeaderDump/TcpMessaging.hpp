#ifndef UE4SS_SDK_TcpMessaging_HPP
#define UE4SS_SDK_TcpMessaging_HPP

class UTcpMessagingSettings : public UObject
{
    bool EnableTransport;                                                             // 0x0028 (size: 0x1)
    FString ListenEndpoint;                                                           // 0x0030 (size: 0x10)
    TArray<FString> ConnectToEndpoints;                                               // 0x0040 (size: 0x10)
    int32 ConnectionRetryDelay;                                                       // 0x0050 (size: 0x4)
    int32 ConnectionRetryPeriod;                                                      // 0x0054 (size: 0x4)
    bool bStopServiceWhenAppDeactivates;                                              // 0x0058 (size: 0x1)

}; // Size: 0x60

#endif
