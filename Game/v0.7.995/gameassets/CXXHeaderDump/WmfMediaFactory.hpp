#ifndef UE4SS_SDK_WmfMediaFactory_HPP
#define UE4SS_SDK_WmfMediaFactory_HPP

class UWmfMediaSettings : public UObject
{
    bool AllowNonStandardCodecs;                                                      // 0x0028 (size: 0x1)
    bool LowLatency;                                                                  // 0x0029 (size: 0x1)
    bool NativeAudioOut;                                                              // 0x002A (size: 0x1)
    bool HardwareAcceleratedVideoDecoding;                                            // 0x002B (size: 0x1)

}; // Size: 0x30

#endif
