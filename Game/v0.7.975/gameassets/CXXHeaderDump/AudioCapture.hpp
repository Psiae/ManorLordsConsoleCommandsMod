#ifndef UE4SS_SDK_AudioCapture_HPP
#define UE4SS_SDK_AudioCapture_HPP

struct FAudioCaptureDeviceInfo
{
    FName DeviceName;                                                                 // 0x0000 (size: 0x8)
    int32 NumInputChannels;                                                           // 0x0008 (size: 0x4)
    int32 SampleRate;                                                                 // 0x000C (size: 0x4)

}; // Size: 0x10

class UAudioCapture : public UAudioGenerator
{

    void StopCapturingAudio();
    void StartCapturingAudio();
    bool IsCapturingAudio();
    bool GetAudioCaptureDeviceInfo(FAudioCaptureDeviceInfo& OutInfo);
}; // Size: 0xB0

class UAudioCaptureComponent : public USynthComponent
{
    int32 JitterLatencyFrames;                                                        // 0x06C0 (size: 0x4)

}; // Size: 0x780

class UAudioCaptureFunctionLibrary : public UBlueprintFunctionLibrary
{

    class UAudioCapture* CreateAudioCapture();
}; // Size: 0x28

#endif
