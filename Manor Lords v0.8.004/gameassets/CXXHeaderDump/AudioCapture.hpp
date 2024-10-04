#ifndef UE4SS_SDK_AudioCapture_HPP
#define UE4SS_SDK_AudioCapture_HPP

struct FAudioCaptureDeviceInfo
{
    FName DeviceName;                                                                 // 0x0000 (size: 0x8)
    int32 NumInputChannels;                                                           // 0x0008 (size: 0x4)
    int32 SampleRate;                                                                 // 0x000C (size: 0x4)

}; // Size: 0x10

struct FAudioInputDeviceInfo
{
    FString DeviceName;                                                               // 0x0000 (size: 0x10)
    FString DeviceID;                                                                 // 0x0010 (size: 0x10)
    int32 InputChannels;                                                              // 0x0020 (size: 0x4)
    int32 PreferredSampleRate;                                                        // 0x0024 (size: 0x4)
    uint8 bSupportsHardwareAEC;                                                       // 0x0028 (size: 0x1)

}; // Size: 0x30

class UAudioCapture : public UAudioGenerator
{

    void StopCapturingAudio();
    void StartCapturingAudio();
    bool IsCapturingAudio();
    bool GetAudioCaptureDeviceInfo(FAudioCaptureDeviceInfo& OutInfo);
}; // Size: 0xB0

class UAudioCaptureBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void GetAvailableAudioInputDevices(const class UObject* WorldContextObject, const FGetAvailableAudioInputDevicesOnObtainDevicesEvent& OnObtainDevicesEvent);
    FString Conv_AudioInputDeviceInfoToString(const FAudioInputDeviceInfo& Info);
}; // Size: 0x28

class UAudioCaptureComponent : public USynthComponent
{
    int32 JitterLatencyFrames;                                                        // 0x0890 (size: 0x4)

}; // Size: 0x950

class UAudioCaptureFunctionLibrary : public UBlueprintFunctionLibrary
{

    class UAudioCapture* CreateAudioCapture();
}; // Size: 0x28

#endif
