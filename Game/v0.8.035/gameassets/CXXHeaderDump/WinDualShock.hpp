#ifndef UE4SS_SDK_WinDualShock_HPP
#define UE4SS_SDK_WinDualShock_HPP

class UDualShockExternalEndpointSettings : public UAudioEndpointSettingsBase
{
    int32 ControllerIndex;                                                            // 0x0028 (size: 0x4)

}; // Size: 0x30

class UDualShockSoundfieldEndpointSettings : public USoundfieldEndpointSettingsBase
{
    int32 ControllerIndex;                                                            // 0x0028 (size: 0x4)

}; // Size: 0x30

class UDualShockSpatializationSettings : public USoundfieldEncodingSettingsBase
{
    float spread;                                                                     // 0x0028 (size: 0x4)
    int32 Priority;                                                                   // 0x002C (size: 0x4)
    bool PassThrough;                                                                 // 0x0030 (size: 0x1)

}; // Size: 0x38

#endif
