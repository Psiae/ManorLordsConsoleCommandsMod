#ifndef UE4SS_SDK_AudioExtensions_HPP
#define UE4SS_SDK_AudioExtensions_HPP

class UAudioEndpointSettingsBase : public UObject
{
}; // Size: 0x28

class UDummyEndpointSettings : public UAudioEndpointSettingsBase
{
}; // Size: 0x28

class UOcclusionPluginSourceSettingsBase : public UObject
{
}; // Size: 0x28

class UReverbPluginSourceSettingsBase : public UObject
{
}; // Size: 0x28

class USoundModulatorBase : public UObject
{
}; // Size: 0x28

class USoundfieldEffectBase : public UObject
{
    class USoundfieldEffectSettingsBase* Settings;                                    // 0x0028 (size: 0x8)

}; // Size: 0x30

class USoundfieldEffectSettingsBase : public UObject
{
}; // Size: 0x28

class USoundfieldEncodingSettingsBase : public UObject
{
}; // Size: 0x28

class USoundfieldEndpointSettingsBase : public UObject
{
}; // Size: 0x28

class USpatializationPluginSourceSettingsBase : public UObject
{
}; // Size: 0x28

#endif
