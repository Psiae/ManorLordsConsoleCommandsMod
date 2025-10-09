#ifndef UE4SS_SDK_Spatialization_HPP
#define UE4SS_SDK_Spatialization_HPP

class UITDSpatializationSourceSettings : public USpatializationPluginSourceSettingsBase
{
    bool bEnableILD;                                                                  // 0x0028 (size: 0x1)
    FRuntimeFloatCurve PanningIntensityOverDistance;                                  // 0x0030 (size: 0x88)

}; // Size: 0xB8

#endif
