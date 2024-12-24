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
    FString ClientEncryptionKey;                                                      // 0x0060 (size: 0x10)

}; // Size: 0x70

class UDEPRECATED_EOSArtifactSettings : public UDataAsset
{
}; // Size: 0x30

class UEOSSettings : public URuntimeOptionsBase
{
    FString CacheDir;                                                                 // 0x0038 (size: 0x10)
    FString DefaultArtifactName;                                                      // 0x0048 (size: 0x10)
    FString RTCBackgroundMode;                                                        // 0x0058 (size: 0x10)
    int32 TickBudgetInMilliseconds;                                                   // 0x0068 (size: 0x4)
    bool bEnableOverlay;                                                              // 0x006C (size: 0x1)
    bool bEnableSocialOverlay;                                                        // 0x006D (size: 0x1)
    bool bEnableEditorOverlay;                                                        // 0x006E (size: 0x1)
    bool bPreferPersistentAuth;                                                       // 0x006F (size: 0x1)
    TArray<FString> TitleStorageTags;                                                 // 0x0070 (size: 0x10)
    int32 TitleStorageReadChunkLength;                                                // 0x0080 (size: 0x4)
    TArray<FArtifactSettings> Artifacts;                                              // 0x0088 (size: 0x10)
    TArray<FString> AuthScopeFlags;                                                   // 0x0098 (size: 0x10)
    bool bUseEAS;                                                                     // 0x00A8 (size: 0x1)
    bool bUseEOSConnect;                                                              // 0x00A9 (size: 0x1)
    bool bMirrorStatsToEOS;                                                           // 0x00AA (size: 0x1)
    bool bMirrorAchievementsToEOS;                                                    // 0x00AB (size: 0x1)
    bool bUseEOSSessions;                                                             // 0x00AC (size: 0x1)
    bool bMirrorPresenceToEAS;                                                        // 0x00AD (size: 0x1)
    FString SteamTokenType;                                                           // 0x00B0 (size: 0x10)

}; // Size: 0xC0

class UNetDriverEOS : public UNetDriverEOSBase
{
}; // Size: 0x980

#endif
