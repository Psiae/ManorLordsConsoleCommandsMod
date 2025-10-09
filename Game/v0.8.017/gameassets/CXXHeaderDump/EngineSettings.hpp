#ifndef UE4SS_SDK_EngineSettings_HPP
#define UE4SS_SDK_EngineSettings_HPP

#include "EngineSettings_enums.hpp"

struct FAutoCompleteCommand
{
    FString Command;                                                                  // 0x0000 (size: 0x10)
    FString Desc;                                                                     // 0x0010 (size: 0x10)

}; // Size: 0x28

struct FGameModeName
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FSoftClassPath GameMode;                                                          // 0x0010 (size: 0x20)

}; // Size: 0x30

struct FTemplateMapInfoOverride
{
    FSoftObjectPath Thumbnail;                                                        // 0x0000 (size: 0x20)
    FSoftObjectPath Map;                                                              // 0x0020 (size: 0x20)
    FText DisplayName;                                                                // 0x0040 (size: 0x10)

}; // Size: 0x50

class UConsoleSettings : public UObject
{
    int32 MaxScrollbackSize;                                                          // 0x0028 (size: 0x4)
    TArray<FAutoCompleteCommand> ManualAutoCompleteList;                              // 0x0030 (size: 0x10)
    TArray<FString> AutoCompleteMapPaths;                                             // 0x0040 (size: 0x10)
    float BackgroundOpacityPercentage;                                                // 0x0050 (size: 0x4)
    bool bOrderTopToBottom;                                                           // 0x0054 (size: 0x1)
    bool bDisplayHelpInAutoComplete;                                                  // 0x0055 (size: 0x1)
    FColor InputColor;                                                                // 0x0058 (size: 0x4)
    FColor HistoryColor;                                                              // 0x005C (size: 0x4)
    FColor AutoCompleteCommandColor;                                                  // 0x0060 (size: 0x4)
    FColor AutoCompleteCVarColor;                                                     // 0x0064 (size: 0x4)
    FColor AutoCompleteFadedColor;                                                    // 0x0068 (size: 0x4)

}; // Size: 0x70

class UGameMapsSettings : public UObject
{
    FString LocalMapOptions;                                                          // 0x0028 (size: 0x10)
    FSoftObjectPath TransitionMap;                                                    // 0x0038 (size: 0x20)
    bool bUseSplitscreen;                                                             // 0x0058 (size: 0x1)
    TEnumAsByte<ETwoPlayerSplitScreenType::Type> TwoPlayerSplitscreenLayout;          // 0x0059 (size: 0x1)
    TEnumAsByte<EThreePlayerSplitScreenType::Type> ThreePlayerSplitscreenLayout;      // 0x005A (size: 0x1)
    EFourPlayerSplitScreenType FourPlayerSplitscreenLayout;                           // 0x005B (size: 0x1)
    bool bOffsetPlayerGamepadIds;                                                     // 0x005C (size: 0x1)
    FSoftClassPath GameInstanceClass;                                                 // 0x0060 (size: 0x20)
    FSoftObjectPath GameDefaultMap;                                                   // 0x0080 (size: 0x20)
    FSoftObjectPath ServerDefaultMap;                                                 // 0x00A0 (size: 0x20)
    FSoftClassPath GlobalDefaultGameMode;                                             // 0x00C0 (size: 0x20)
    FSoftClassPath GlobalDefaultServerGameMode;                                       // 0x00E0 (size: 0x20)
    TArray<FGameModeName> GameModeMapPrefixes;                                        // 0x0100 (size: 0x10)
    TArray<FGameModeName> GameModeClassAliases;                                       // 0x0110 (size: 0x10)

    void SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer);
    bool GetSkipAssigningGamepadToPlayer1();
    class UGameMapsSettings* GetGameMapsSettings();
}; // Size: 0x120

class UGameNetworkManagerSettings : public UObject
{
    int32 MinDynamicBandwidth;                                                        // 0x0028 (size: 0x4)
    int32 MaxDynamicBandwidth;                                                        // 0x002C (size: 0x4)
    int32 TotalNetBandwidth;                                                          // 0x0030 (size: 0x4)
    int32 BadPingThreshold;                                                           // 0x0034 (size: 0x4)
    uint8 bIsStandbyCheckingEnabled;                                                  // 0x0038 (size: 0x1)
    float StandbyRxCheatTime;                                                         // 0x003C (size: 0x4)
    float StandbyTxCheatTime;                                                         // 0x0040 (size: 0x4)
    float PercentMissingForRxStandby;                                                 // 0x0044 (size: 0x4)
    float PercentMissingForTxStandby;                                                 // 0x0048 (size: 0x4)
    float PercentForBadPing;                                                          // 0x004C (size: 0x4)
    float JoinInProgressStandbyWaitTime;                                              // 0x0050 (size: 0x4)

}; // Size: 0x58

class UGameSessionSettings : public UObject
{
    int32 MaxSpectators;                                                              // 0x0028 (size: 0x4)
    int32 MaxPlayers;                                                                 // 0x002C (size: 0x4)
    uint8 bRequiresPushToTalk;                                                        // 0x0030 (size: 0x1)

}; // Size: 0x38

class UGeneralEngineSettings : public UObject
{
}; // Size: 0x28

class UGeneralProjectSettings : public UObject
{
    FString CompanyName;                                                              // 0x0028 (size: 0x10)
    FString CompanyDistinguishedName;                                                 // 0x0038 (size: 0x10)
    FString CopyrightNotice;                                                          // 0x0048 (size: 0x10)
    FString Description;                                                              // 0x0058 (size: 0x10)
    FString Homepage;                                                                 // 0x0068 (size: 0x10)
    FString LicensingTerms;                                                           // 0x0078 (size: 0x10)
    FString PrivacyPolicy;                                                            // 0x0088 (size: 0x10)
    FGuid ProjectID;                                                                  // 0x0098 (size: 0x10)
    FString ProjectName;                                                              // 0x00A8 (size: 0x10)
    FString ProjectVersion;                                                           // 0x00B8 (size: 0x10)
    FString SupportContact;                                                           // 0x00C8 (size: 0x10)
    FText ProjectDisplayedTitle;                                                      // 0x00D8 (size: 0x10)
    FText ProjectDebugTitleInfo;                                                      // 0x00E8 (size: 0x10)
    bool bShouldWindowPreserveAspectRatio;                                            // 0x00F8 (size: 0x1)
    bool bUseBorderlessWindow;                                                        // 0x00F9 (size: 0x1)
    bool bStartInVR;                                                                  // 0x00FA (size: 0x1)
    bool bAllowWindowResize;                                                          // 0x00FB (size: 0x1)
    bool bAllowClose;                                                                 // 0x00FC (size: 0x1)
    bool bAllowMaximize;                                                              // 0x00FD (size: 0x1)
    bool bAllowMinimize;                                                              // 0x00FE (size: 0x1)
    float EyeOffsetForFakeStereoRenderingDevice;                                      // 0x0100 (size: 0x4)
    float FOVForFakeStereoRenderingDevice;                                            // 0x0104 (size: 0x4)

}; // Size: 0x108

class UHudSettings : public UObject
{
    uint8 bShowHUD;                                                                   // 0x0028 (size: 0x1)
    TArray<FName> DebugDisplay;                                                       // 0x0030 (size: 0x10)

}; // Size: 0x40

#endif
