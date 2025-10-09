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

#endif
