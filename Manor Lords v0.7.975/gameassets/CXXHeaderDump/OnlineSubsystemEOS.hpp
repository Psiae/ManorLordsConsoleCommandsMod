#ifndef UE4SS_SDK_OnlineSubsystemEOS_HPP
#define UE4SS_SDK_OnlineSubsystemEOS_HPP

struct FArtifactSettings
{
    FString ArtifactName;                                                             // 0x0000 (size: 0x10)
    FString ClientId;                                                                 // 0x0010 (size: 0x10)
    FString ClientSecret;                                                             // 0x0020 (size: 0x10)
    FString ProductId;                                                                // 0x0030 (size: 0x10)
    FString SandboxId;                                                                // 0x0040 (size: 0x10)
    FString DeploymentId;                                                             // 0x0050 (size: 0x10)
    FString EncryptionKey;                                                            // 0x0060 (size: 0x10)

}; // Size: 0x70

class UDEPRECATED_EOSArtifactSettings : public UDataAsset
{
}; // Size: 0x30

class UEOSSettings : public UObject
{
    FString CacheDir;                                                                 // 0x0028 (size: 0x10)
    FString DefaultArtifactName;                                                      // 0x0038 (size: 0x10)
    int32 TickBudgetInMilliseconds;                                                   // 0x0048 (size: 0x4)
    bool bEnableOverlay;                                                              // 0x004C (size: 0x1)
    bool bEnableSocialOverlay;                                                        // 0x004D (size: 0x1)
    bool bShouldEnforceBeingLaunchedByEGS;                                            // 0x004E (size: 0x1)
    TArray<FString> TitleStorageTags;                                                 // 0x0050 (size: 0x10)
    int32 TitleStorageReadChunkLength;                                                // 0x0060 (size: 0x4)
    TArray<FArtifactSettings> Artifacts;                                              // 0x0068 (size: 0x10)
    bool bUseEAS;                                                                     // 0x0078 (size: 0x1)
    bool bUseEOSConnect;                                                              // 0x0079 (size: 0x1)
    bool bMirrorStatsToEOS;                                                           // 0x007A (size: 0x1)
    bool bMirrorAchievementsToEOS;                                                    // 0x007B (size: 0x1)
    bool bUseEOSSessions;                                                             // 0x007C (size: 0x1)
    bool bMirrorPresenceToEAS;                                                        // 0x007D (size: 0x1)

}; // Size: 0x80

class UNetConnectionEOS : public UIpConnection
{
}; // Size: 0x1C50

class UNetDriverEOS : public UIpNetDriver
{
    bool bIsPassthrough;                                                              // 0x07D0 (size: 0x1)
    bool bIsUsingP2PSockets;                                                          // 0x07D1 (size: 0x1)

}; // Size: 0x7D8

#endif
