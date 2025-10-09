#ifndef UE4SS_SDK_AudioMixer_HPP
#define UE4SS_SDK_AudioMixer_HPP

#include "AudioMixer_enums.hpp"

struct FAudioOutputDeviceInfo
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FString DeviceID;                                                                 // 0x0010 (size: 0x10)
    int32 NumChannels;                                                                // 0x0020 (size: 0x4)
    int32 SampleRate;                                                                 // 0x0024 (size: 0x4)
    EAudioMixerStreamDataFormatType Format;                                           // 0x0028 (size: 0x1)
    TArray<EAudioMixerChannelType> OutputChannelArray;                                // 0x0030 (size: 0x10)
    uint8 bIsSystemDefault;                                                           // 0x0040 (size: 0x1)
    uint8 bIsCurrentDevice;                                                           // 0x0040 (size: 0x1)

}; // Size: 0x48

struct FSubmixEffectDynamicProcessorFilterSettings
{
    uint8 bEnabled;                                                                   // 0x0000 (size: 0x1)
    float Cutoff;                                                                     // 0x0004 (size: 0x4)
    float GainDb;                                                                     // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FSubmixEffectDynamicsProcessorSettings
{
    ESubmixEffectDynamicsProcessorType DynamicsProcessorType;                         // 0x0000 (size: 0x1)
    ESubmixEffectDynamicsPeakMode PeakMode;                                           // 0x0001 (size: 0x1)
    ESubmixEffectDynamicsChannelLinkMode LinkMode;                                    // 0x0002 (size: 0x1)
    float InputGainDb;                                                                // 0x0004 (size: 0x4)
    float ThresholdDb;                                                                // 0x0008 (size: 0x4)
    float Ratio;                                                                      // 0x000C (size: 0x4)
    float KneeBandwidthDb;                                                            // 0x0010 (size: 0x4)
    float LookAheadMsec;                                                              // 0x0014 (size: 0x4)
    float AttackTimeMsec;                                                             // 0x0018 (size: 0x4)
    float ReleaseTimeMsec;                                                            // 0x001C (size: 0x4)
    ESubmixEffectDynamicsKeySource KeySource;                                         // 0x0020 (size: 0x1)
    class UAudioBus* ExternalAudioBus;                                                // 0x0028 (size: 0x8)
    class USoundSubmix* ExternalSubmix;                                               // 0x0030 (size: 0x8)
    uint8 bChannelLinked;                                                             // 0x0038 (size: 0x1)
    uint8 bAnalogMode;                                                                // 0x0038 (size: 0x1)
    uint8 bBypass;                                                                    // 0x0038 (size: 0x1)
    uint8 bKeyAudition;                                                               // 0x0038 (size: 0x1)
    float KeyGainDb;                                                                  // 0x003C (size: 0x4)
    float OutputGainDb;                                                               // 0x0040 (size: 0x4)
    FSubmixEffectDynamicProcessorFilterSettings KeyHighshelf;                         // 0x0044 (size: 0xC)
    FSubmixEffectDynamicProcessorFilterSettings KeyLowshelf;                          // 0x0050 (size: 0xC)

}; // Size: 0x60

struct FSubmixEffectEQBand
{
    float Frequency;                                                                  // 0x0000 (size: 0x4)
    float Bandwidth;                                                                  // 0x0004 (size: 0x4)
    float GainDb;                                                                     // 0x0008 (size: 0x4)
    uint8 bEnabled;                                                                   // 0x000C (size: 0x1)

}; // Size: 0x10

struct FSubmixEffectReverbSettings
{
    bool bBypassEarlyReflections;                                                     // 0x0000 (size: 0x1)
    float ReflectionsDelay;                                                           // 0x0004 (size: 0x4)
    float GainHF;                                                                     // 0x0008 (size: 0x4)
    float ReflectionsGain;                                                            // 0x000C (size: 0x4)
    bool bBypassLateReflections;                                                      // 0x0010 (size: 0x1)
    float LateDelay;                                                                  // 0x0014 (size: 0x4)
    float DecayTime;                                                                  // 0x0018 (size: 0x4)
    float Density;                                                                    // 0x001C (size: 0x4)
    float Diffusion;                                                                  // 0x0020 (size: 0x4)
    float AirAbsorptionGainHF;                                                        // 0x0024 (size: 0x4)
    float DecayHFRatio;                                                               // 0x0028 (size: 0x4)
    float LateGain;                                                                   // 0x002C (size: 0x4)
    float Gain;                                                                       // 0x0030 (size: 0x4)
    float WetLevel;                                                                   // 0x0034 (size: 0x4)
    float DryLevel;                                                                   // 0x0038 (size: 0x4)
    bool bBypass;                                                                     // 0x003C (size: 0x1)

}; // Size: 0x40

struct FSubmixEffectSubmixEQSettings
{
    TArray<FSubmixEffectEQBand> EQBands;                                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FSwapAudioOutputResult
{
    FString CurrentDeviceId;                                                          // 0x0000 (size: 0x10)
    FString RequestedDeviceId;                                                        // 0x0010 (size: 0x10)
    ESwapAudioOutputDeviceResultState Result;                                         // 0x0020 (size: 0x1)

}; // Size: 0x28

class UAudioBusSubsystem : public UAudioEngineSubsystem
{
}; // Size: 0x90

class UAudioDeviceNotificationSubsystem : public UEngineSubsystem
{
    FAudioDeviceNotificationSubsystemDefaultCaptureDeviceChanged DefaultCaptureDeviceChanged; // 0x0038 (size: 0x10)
    void OnAudioDefaultDeviceChanged(EAudioDeviceChangedRole AudioDeviceRole, FString DeviceID);
    FAudioDeviceNotificationSubsystemDefaultRenderDeviceChanged DefaultRenderDeviceChanged; // 0x0060 (size: 0x10)
    void OnAudioDefaultDeviceChanged(EAudioDeviceChangedRole AudioDeviceRole, FString DeviceID);
    FAudioDeviceNotificationSubsystemDeviceAdded DeviceAdded;                         // 0x0088 (size: 0x10)
    void OnAudioDeviceChange(FString DeviceID);
    FAudioDeviceNotificationSubsystemDeviceRemoved DeviceRemoved;                     // 0x00B0 (size: 0x10)
    void OnAudioDeviceChange(FString DeviceID);
    FAudioDeviceNotificationSubsystemDeviceStateChanged DeviceStateChanged;           // 0x00D8 (size: 0x10)
    void OnAudioDeviceStateChanged(FString DeviceID, EAudioDeviceChangedState NewState);
    FAudioDeviceNotificationSubsystemDeviceSwitched DeviceSwitched;                   // 0x0100 (size: 0x10)
    void OnAudioDeviceChange(FString DeviceID);

}; // Size: 0x128

class UAudioGenerator : public UObject
{
}; // Size: 0xA8

class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void UnregisterAudioBusFromSubmix(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class UAudioBus* AudioBus);
    float TrimAudioCache(float InMegabytesToFree);
    void SwapAudioOutputDevice(const class UObject* WorldContextObject, FString NewDeviceId, const FSwapAudioOutputDeviceOnCompletedDeviceSwap& OnCompletedDeviceSwap);
    class USoundWave* StopRecordingOutput(const class UObject* WorldContextObject, EAudioRecordingExportType ExportType, FString Name, FString Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite);
    void StopAudioBus(const class UObject* WorldContextObject, class UAudioBus* AudioBus);
    void StopAnalyzingOutput(const class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing);
    void StartRecordingOutput(const class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord);
    void StartAudioBus(const class UObject* WorldContextObject, class UAudioBus* AudioBus);
    void StartAnalyzingOutput(const class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, EFFTSize FFTSize, EFFTPeakInterpolationMethod InterpolationMethod, EFFTWindowType WindowType, float HopSize, EAudioSpectrumType SpectrumType);
    void SetSubmixEffectChainOverride(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, TArray<class USoundEffectSubmixPreset*> SubmixEffectPresetChain, float FadeTimeSec);
    void SetBypassSourceEffectChainEntry(const class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex, bool bBypassed);
    void ResumeRecordingOutput(const class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
    void ReplaceSubmixEffect(const class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32 SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset);
    void ReplaceSoundEffectSubmix(const class UObject* WorldContextObject, class USoundSubmix* InSoundSubmix, int32 SubmixChainIndex, class USoundEffectSubmixPreset* SubmixEffectPreset);
    void RemoveSubmixEffectPresetAtIndex(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32 SubmixChainIndex);
    void RemoveSubmixEffectPreset(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
    void RemoveSubmixEffectAtIndex(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, int32 SubmixChainIndex);
    void RemoveSubmixEffect(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
    void RemoveSourceEffectFromPresetChain(const class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex);
    void RemoveMasterSubmixEffect(const class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
    void RegisterAudioBusToSubmix(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class UAudioBus* AudioBus);
    void PrimeSoundForPlayback(class USoundWave* SoundWave, const FPrimeSoundForPlaybackOnLoadCompletion OnLoadCompletion);
    void PrimeSoundCueForPlayback(class USoundCue* SoundCue);
    void PauseRecordingOutput(const class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
    TArray<FSoundSubmixSpectralAnalysisBandSettings> MakePresetSpectralAnalysisBandSettings(EAudioSpectrumBandPresetType InBandPresetType, int32 InNumBands, int32 InAttackTimeMsec, int32 InReleaseTimeMsec);
    TArray<FSoundSubmixSpectralAnalysisBandSettings> MakeMusicalSpectralAnalysisBandSettings(int32 InNumSemitones, EMusicalNoteName InStartingMusicalNote, int32 InStartingOctave, int32 InAttackTimeMsec, int32 InReleaseTimeMsec);
    TArray<FSoundSubmixSpectralAnalysisBandSettings> MakeFullSpectrumSpectralAnalysisBandSettings(int32 InNumBands, float InMinimumFrequency, float InMaximumFrequency, int32 InAttackTimeMsec, int32 InReleaseTimeMsec);
    bool IsAudioBusActive(const class UObject* WorldContextObject, class UAudioBus* AudioBus);
    void GetPhaseForFrequencies(const class UObject* WorldContextObject, const TArray<float>& Frequencies, TArray<float>& Phases, class USoundSubmix* SubmixToAnalyze);
    int32 GetNumberOfEntriesInSourceEffectChain(const class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain);
    void GetMagnitudeForFrequencies(const class UObject* WorldContextObject, const TArray<float>& Frequencies, TArray<float>& Magnitudes, class USoundSubmix* SubmixToAnalyze);
    void GetCurrentAudioOutputDeviceName(const class UObject* WorldContextObject, const FGetCurrentAudioOutputDeviceNameOnObtainCurrentDeviceEvent& OnObtainCurrentDeviceEvent);
    void GetAvailableAudioOutputDevices(const class UObject* WorldContextObject, const FGetAvailableAudioOutputDevicesOnObtainDevicesEvent& OnObtainDevicesEvent);
    FString Conv_AudioOutputDeviceInfoToString(const FAudioOutputDeviceInfo& Info);
    void ClearSubmixEffects(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix);
    void ClearSubmixEffectChainOverride(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, float FadeTimeSec);
    void ClearMasterSubmixEffects(const class UObject* WorldContextObject);
    int32 AddSubmixEffect(const class UObject* WorldContextObject, class USoundSubmix* SoundSubmix, class USoundEffectSubmixPreset* SubmixEffectPreset);
    void AddSourceEffectToPresetChain(const class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, FSourceEffectChainEntry Entry);
    void AddMasterSubmixEffect(const class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
}; // Size: 0x28

class UQuartzClockHandle : public UObject
{

    void UnsubscribeFromTimeDivision(const class UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, class UQuartzClockHandle*& ClockHandle);
    void UnsubscribeFromAllTimeDivisions(const class UObject* WorldContextObject, class UQuartzClockHandle*& ClockHandle);
    void SubscribeToQuantizationEvent(const class UObject* WorldContextObject, EQuartzCommandQuantization InQuantizationBoundary, const FSubscribeToQuantizationEventOnQuantizationEvent& OnQuantizationEvent, class UQuartzClockHandle*& ClockHandle);
    void SubscribeToAllQuantizationEvents(const class UObject* WorldContextObject, const FSubscribeToAllQuantizationEventsOnQuantizationEvent& OnQuantizationEvent, class UQuartzClockHandle*& ClockHandle);
    void StopClock(const class UObject* WorldContextObject, bool CancelPendingEvents, class UQuartzClockHandle*& ClockHandle);
    void StartOtherClock(const class UObject* WorldContextObject, FName OtherClockName, FQuartzQuantizationBoundary InQuantizationBoundary, const FStartOtherClockInDelegate& InDelegate);
    void StartClock(const class UObject* WorldContextObject, class UQuartzClockHandle*& ClockHandle);
    void SetTicksPerSecond(const class UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FSetTicksPerSecondDelegate& Delegate, class UQuartzClockHandle*& ClockHandle, float TicksPerSecond);
    void SetThirtySecondNotesPerMinute(const class UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FSetThirtySecondNotesPerMinuteDelegate& Delegate, class UQuartzClockHandle*& ClockHandle, float ThirtySecondsNotesPerMinute);
    void SetSecondsPerTick(const class UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FSetSecondsPerTickDelegate& Delegate, class UQuartzClockHandle*& ClockHandle, float SecondsPerTick);
    void SetMillisecondsPerTick(const class UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FSetMillisecondsPerTickDelegate& Delegate, class UQuartzClockHandle*& ClockHandle, float MillisecondsPerTick);
    void SetBeatsPerMinute(const class UObject* WorldContextObject, const FQuartzQuantizationBoundary& QuantizationBoundary, const FSetBeatsPerMinuteDelegate& Delegate, class UQuartzClockHandle*& ClockHandle, float BeatsPerMinute);
    void ResumeClock(const class UObject* WorldContextObject, class UQuartzClockHandle*& ClockHandle);
    void ResetTransportQuantized(const class UObject* WorldContextObject, FQuartzQuantizationBoundary InQuantizationBoundary, const FResetTransportQuantizedInDelegate& InDelegate, class UQuartzClockHandle*& ClockHandle);
    void ResetTransport(const class UObject* WorldContextObject, const FResetTransportInDelegate& InDelegate);
    void PauseClock(const class UObject* WorldContextObject, class UQuartzClockHandle*& ClockHandle);
    void NotifyOnQuantizationBoundary(const class UObject* WorldContextObject, FQuartzQuantizationBoundary InQuantizationBoundary, const FNotifyOnQuantizationBoundaryInDelegate& InDelegate, float InMsOffset);
    bool IsClockRunning(const class UObject* WorldContextObject);
    float GetTicksPerSecond(const class UObject* WorldContextObject);
    float GetThirtySecondNotesPerMinute(const class UObject* WorldContextObject);
    float GetSecondsPerTick(const class UObject* WorldContextObject);
    float GetMillisecondsPerTick(const class UObject* WorldContextObject);
    float GetEstimatedRunTime(const class UObject* WorldContextObject);
    float GetDurationOfQuantizationTypeInSeconds(const class UObject* WorldContextObject, const EQuartzCommandQuantization& QuantizationType, float Multiplier);
    FQuartzTransportTimeStamp GetCurrentTimestamp(const class UObject* WorldContextObject);
    float GetBeatsPerMinute(const class UObject* WorldContextObject);
    float GetBeatProgressPercent(EQuartzCommandQuantization QuantizationBoundary, float PhaseOffset, float MsOffset);
}; // Size: 0x1F0

class UQuartzSubsystem : public UTickableWorldSubsystem
{

    void SetQuartzSubsystemTickableWhenPaused(const bool bInTickableWhenPaused);
    bool IsQuartzEnabled();
    bool IsClockRunning(const class UObject* WorldContextObject, FName ClockName);
    float GetRoundTripMinLatency(const class UObject* WorldContextObject);
    float GetRoundTripMaxLatency(const class UObject* WorldContextObject);
    float GetRoundTripAverageLatency(const class UObject* WorldContextObject);
    class UQuartzClockHandle* GetHandleForClock(const class UObject* WorldContextObject, FName ClockName);
    float GetGameThreadToAudioRenderThreadMinLatency(const class UObject* WorldContextObject);
    float GetGameThreadToAudioRenderThreadMaxLatency(const class UObject* WorldContextObject);
    float GetGameThreadToAudioRenderThreadAverageLatency(const class UObject* WorldContextObject);
    float GetEstimatedClockRunTime(const class UObject* WorldContextObject, const FName& InClockName);
    float GetDurationOfQuantizationTypeInSeconds(const class UObject* WorldContextObject, FName ClockName, const EQuartzCommandQuantization& QuantizationType, float Multiplier);
    FQuartzTransportTimeStamp GetCurrentClockTimestamp(const class UObject* WorldContextObject, const FName& InClockName);
    float GetAudioRenderThreadToGameThreadMinLatency();
    float GetAudioRenderThreadToGameThreadMaxLatency();
    float GetAudioRenderThreadToGameThreadAverageLatency();
    bool DoesClockExist(const class UObject* WorldContextObject, FName ClockName);
    void DeleteClockByName(const class UObject* WorldContextObject, FName ClockName);
    void DeleteClockByHandle(const class UObject* WorldContextObject, class UQuartzClockHandle*& InClockHandle);
    class UQuartzClockHandle* CreateNewClock(const class UObject* WorldContextObject, FName ClockName, FQuartzClockSettings InSettings, bool bOverrideSettingsIfClockExists, bool bUseAudioEngineClockManager);
}; // Size: 0x68

class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{
    FSubmixEffectDynamicsProcessorSettings Settings;                                  // 0x00F0 (size: 0x60)

    void SetSettings(const FSubmixEffectDynamicsProcessorSettings& Settings);
    void SetExternalSubmix(class USoundSubmix* Submix);
    void SetAudioBus(class UAudioBus* AudioBus);
    void ResetKey();
}; // Size: 0x150

class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
    FSubmixEffectReverbSettings Settings;                                             // 0x00D0 (size: 0x40)

    void SetSettingsWithReverbEffect(const class UReverbEffect* InReverbEffect, const float WetLevel, const float DryLevel);
    void SetSettings(const FSubmixEffectReverbSettings& InSettings);
}; // Size: 0x110

class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
    FSubmixEffectSubmixEQSettings Settings;                                           // 0x00A0 (size: 0x10)

    void SetSettings(const FSubmixEffectSubmixEQSettings& InSettings);
}; // Size: 0xB0

class USynthComponent : public USceneComponent
{
    uint8 bAutoDestroy;                                                               // 0x0230 (size: 0x1)
    uint8 bStopWhenOwnerDestroyed;                                                    // 0x0230 (size: 0x1)
    uint8 bAllowSpatialization;                                                       // 0x0230 (size: 0x1)
    uint8 bOverrideAttenuation;                                                       // 0x0230 (size: 0x1)
    uint8 bEnableBusSends;                                                            // 0x0234 (size: 0x1)
    uint8 bEnableBaseSubmix;                                                          // 0x0234 (size: 0x1)
    uint8 bEnableSubmixSends;                                                         // 0x0234 (size: 0x1)
    class USoundAttenuation* AttenuationSettings;                                     // 0x0238 (size: 0x8)
    FSoundAttenuationSettings AttenuationOverrides;                                   // 0x0240 (size: 0x3D0)
    class USoundConcurrency* ConcurrencySettings;                                     // 0x0610 (size: 0x8)
    TSet<USoundConcurrency*> ConcurrencySet;                                          // 0x0618 (size: 0x50)
    FSoundModulationDefaultRoutingSettings ModulationRouting;                         // 0x0668 (size: 0x168)
    class USoundClass* SoundClass;                                                    // 0x07D0 (size: 0x8)
    class USoundEffectSourcePresetChain* SourceEffectChain;                           // 0x07D8 (size: 0x8)
    class USoundSubmixBase* SoundSubmix;                                              // 0x07E0 (size: 0x8)
    TArray<FSoundSubmixSendInfo> SoundSubmixSends;                                    // 0x07E8 (size: 0x10)
    TArray<FSoundSourceBusSendInfo> BusSends;                                         // 0x07F8 (size: 0x10)
    TArray<FSoundSourceBusSendInfo> PreEffectBusSends;                                // 0x0808 (size: 0x10)
    uint8 bIsUISound;                                                                 // 0x0818 (size: 0x1)
    uint8 bIsPreviewSound;                                                            // 0x0818 (size: 0x1)
    int32 EnvelopeFollowerAttackTime;                                                 // 0x081C (size: 0x4)
    int32 EnvelopeFollowerReleaseTime;                                                // 0x0820 (size: 0x4)
    FSynthComponentOnAudioEnvelopeValue OnAudioEnvelopeValue;                         // 0x0828 (size: 0x10)
    void OnSynthEnvelopeValue(const float EnvelopeValue);
    class USynthSound* Synth;                                                         // 0x0858 (size: 0x8)
    class UAudioComponent* AudioComponent;                                            // 0x0860 (size: 0x8)

    void Stop();
    void Start();
    void SetVolumeMultiplier(float VolumeMultiplier);
    void SetSubmixSend(class USoundSubmixBase* Submix, float SendLevel);
    void SetSourceBusSendPreEffect(class USoundSourceBus* SoundSourceBus, float SourceBusSendLevel);
    void SetSourceBusSendPostEffect(class USoundSourceBus* SoundSourceBus, float SourceBusSendLevel);
    void SetOutputToBusOnly(bool bInOutputToBusOnly);
    void SetModulationRouting(const TSet<USoundModulatorBase*>& Modulators, const EModulationDestination Destination, const EModulationRouting RoutingMethod);
    void SetLowPassFilterFrequency(float InLowPassFilterFrequency);
    void SetLowPassFilterEnabled(bool InLowPassFilterEnabled);
    void SetAudioBusSendPreEffect(class UAudioBus* AudioBus, float AudioBusSendLevel);
    void SetAudioBusSendPostEffect(class UAudioBus* AudioBus, float AudioBusSendLevel);
    bool IsPlaying();
    TSet<USoundModulatorBase*> GetModulators(const EModulationDestination Destination);
    void FadeOut(float FadeOutDuration, float FadeVolumeLevel, const EAudioFaderCurve FadeCurve);
    void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime, const EAudioFaderCurve FadeCurve);
    void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel, const EAudioFaderCurve FadeCurve);
}; // Size: 0x890

class USynthSound : public USoundWaveProcedural
{
    TWeakObjectPtr<class USynthComponent> OwningSynthComponent;                       // 0x0470 (size: 0x8)

}; // Size: 0x490

#endif
