#ifndef UE4SS_SDK_DeveloperSettings_HPP
#define UE4SS_SDK_DeveloperSettings_HPP

struct FPerPlatformSettings
{
    TArray<class UPlatformSettings*> Settings;                                        // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FPlatformSettingsInstances
{
    class UPlatformSettings* PlatformInstance;                                        // 0x0000 (size: 0x8)
    TMap<class FName, class UPlatformSettings*> OtherPlatforms;                       // 0x0008 (size: 0x50)

}; // Size: 0x58

class UDeveloperSettings : public UObject
{
}; // Size: 0x38

class UDeveloperSettingsBackedByCVars : public UDeveloperSettings
{
}; // Size: 0x38

class UPlatformSettings : public UObject
{
}; // Size: 0x40

class UPlatformSettingsManager : public UObject
{
    TMap<class TSubclassOf<UPlatformSettings>, class FPlatformSettingsInstances> SettingsMap; // 0x0028 (size: 0x50)

}; // Size: 0x80

#endif
