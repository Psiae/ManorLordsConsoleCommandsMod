#ifndef UE4SS_SDK_LightPropagationVolumeRuntime_HPP
#define UE4SS_SDK_LightPropagationVolumeRuntime_HPP

class ULightPropagationVolumeBlendable : public UObject
{
    FLightPropagationVolumeSettings Settings;                                         // 0x0030 (size: 0x40)
    float BlendWeight;                                                                // 0x0070 (size: 0x4)

}; // Size: 0x78

#endif
