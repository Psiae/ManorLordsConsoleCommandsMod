#ifndef UE4SS_SDK_Synthesis_HPP
#define UE4SS_SDK_Synthesis_HPP

#include "Synthesis_enums.hpp"

struct FDynamicsBandSettings
{
    float CrossoverTopFrequency;                                                      // 0x0000 (size: 0x4)
    float AttackTimeMsec;                                                             // 0x0004 (size: 0x4)
    float ReleaseTimeMsec;                                                            // 0x0008 (size: 0x4)
    float ThresholdDb;                                                                // 0x000C (size: 0x4)
    float Ratio;                                                                      // 0x0010 (size: 0x4)
    float KneeBandwidthDb;                                                            // 0x0014 (size: 0x4)
    float InputGainDb;                                                                // 0x0018 (size: 0x4)
    float OutputGainDb;                                                               // 0x001C (size: 0x4)

}; // Size: 0x20

struct FEpicSynth1Patch
{
    ESynth1PatchSource PatchSource;                                                   // 0x0000 (size: 0x1)
    TArray<FSynth1PatchCable> PatchCables;                                            // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FModularSynthPreset : public FTableRowBase
{
    uint8 bEnablePolyphony;                                                           // 0x0008 (size: 0x1)
    ESynth1OscType Osc1Type;                                                          // 0x000C (size: 0x1)
    float Osc1Gain;                                                                   // 0x0010 (size: 0x4)
    float Osc1Octave;                                                                 // 0x0014 (size: 0x4)
    float Osc1Semitones;                                                              // 0x0018 (size: 0x4)
    float Osc1Cents;                                                                  // 0x001C (size: 0x4)
    float Osc1PulseWidth;                                                             // 0x0020 (size: 0x4)
    ESynth1OscType Osc2Type;                                                          // 0x0024 (size: 0x1)
    float Osc2Gain;                                                                   // 0x0028 (size: 0x4)
    float Osc2Octave;                                                                 // 0x002C (size: 0x4)
    float Osc2Semitones;                                                              // 0x0030 (size: 0x4)
    float Osc2Cents;                                                                  // 0x0034 (size: 0x4)
    float Osc2PulseWidth;                                                             // 0x0038 (size: 0x4)
    float Portamento;                                                                 // 0x003C (size: 0x4)
    uint8 bEnableUnison;                                                              // 0x0040 (size: 0x1)
    uint8 bEnableOscillatorSync;                                                      // 0x0040 (size: 0x1)
    float spread;                                                                     // 0x0044 (size: 0x4)
    float Pan;                                                                        // 0x0048 (size: 0x4)
    float LFO1Frequency;                                                              // 0x004C (size: 0x4)
    float LFO1Gain;                                                                   // 0x0050 (size: 0x4)
    ESynthLFOType LFO1Type;                                                           // 0x0054 (size: 0x1)
    ESynthLFOMode LFO1Mode;                                                           // 0x0055 (size: 0x1)
    ESynthLFOPatchType LFO1PatchType;                                                 // 0x0056 (size: 0x1)
    float LFO2Frequency;                                                              // 0x0058 (size: 0x4)
    float LFO2Gain;                                                                   // 0x005C (size: 0x4)
    ESynthLFOType LFO2Type;                                                           // 0x0060 (size: 0x1)
    ESynthLFOMode LFO2Mode;                                                           // 0x0061 (size: 0x1)
    ESynthLFOPatchType LFO2PatchType;                                                 // 0x0062 (size: 0x1)
    float GainDb;                                                                     // 0x0064 (size: 0x4)
    float AttackTime;                                                                 // 0x0068 (size: 0x4)
    float DecayTime;                                                                  // 0x006C (size: 0x4)
    float SustainGain;                                                                // 0x0070 (size: 0x4)
    float ReleaseTime;                                                                // 0x0074 (size: 0x4)
    ESynthModEnvPatch ModEnvPatchType;                                                // 0x0078 (size: 0x1)
    ESynthModEnvBiasPatch ModEnvBiasPatchType;                                        // 0x0079 (size: 0x1)
    uint8 bInvertModulationEnvelope;                                                  // 0x007C (size: 0x1)
    uint8 bInvertModulationEnvelopeBias;                                              // 0x007C (size: 0x1)
    float ModulationEnvelopeDepth;                                                    // 0x0080 (size: 0x4)
    float ModulationEnvelopeAttackTime;                                               // 0x0084 (size: 0x4)
    float ModulationEnvelopeDecayTime;                                                // 0x0088 (size: 0x4)
    float ModulationEnvelopeSustainGain;                                              // 0x008C (size: 0x4)
    float ModulationEnvelopeReleaseTime;                                              // 0x0090 (size: 0x4)
    uint8 bLegato;                                                                    // 0x0094 (size: 0x1)
    uint8 bRetrigger;                                                                 // 0x0094 (size: 0x1)
    float FilterFrequency;                                                            // 0x0098 (size: 0x4)
    float FilterQ;                                                                    // 0x009C (size: 0x4)
    ESynthFilterType FilterType;                                                      // 0x00A0 (size: 0x1)
    ESynthFilterAlgorithm FilterAlgorithm;                                            // 0x00A1 (size: 0x1)
    uint8 bStereoDelayEnabled;                                                        // 0x00A4 (size: 0x1)
    ESynthStereoDelayMode StereoDelayMode;                                            // 0x00A8 (size: 0x1)
    float StereoDelayTime;                                                            // 0x00AC (size: 0x4)
    float StereoDelayFeedback;                                                        // 0x00B0 (size: 0x4)
    float StereoDelayWetlevel;                                                        // 0x00B4 (size: 0x4)
    float StereoDelayRatio;                                                           // 0x00B8 (size: 0x4)
    uint8 bChorusEnabled;                                                             // 0x00BC (size: 0x1)
    float ChorusDepth;                                                                // 0x00C0 (size: 0x4)
    float ChorusFeedback;                                                             // 0x00C4 (size: 0x4)
    float ChorusFrequency;                                                            // 0x00C8 (size: 0x4)
    TArray<FEpicSynth1Patch> Patches;                                                 // 0x00D0 (size: 0x10)

}; // Size: 0xE0

struct FModularSynthPresetBankEntry
{
    FString PresetName;                                                               // 0x0000 (size: 0x10)
    FModularSynthPreset Preset;                                                       // 0x0010 (size: 0xE0)

}; // Size: 0xF0

struct FPatchId
{
    int32 ID;                                                                         // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FSourceEffectBitCrusherBaseSettings
{
    float SampleRate;                                                                 // 0x0000 (size: 0x4)
    float BitDepth;                                                                   // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FSourceEffectBitCrusherSettings
{
    float CrushedSampleRate;                                                          // 0x0000 (size: 0x4)
    FSoundModulationDestinationSettings SampleRateModulation;                         // 0x0008 (size: 0x58)
    float CrushedBits;                                                                // 0x0060 (size: 0x4)
    FSoundModulationDestinationSettings BitModulation;                                // 0x0068 (size: 0x58)

}; // Size: 0xC0

struct FSourceEffectChorusBaseSettings
{
    float Depth;                                                                      // 0x0000 (size: 0x4)
    float Frequency;                                                                  // 0x0004 (size: 0x4)
    float Feedback;                                                                   // 0x0008 (size: 0x4)
    float WetLevel;                                                                   // 0x000C (size: 0x4)
    float DryLevel;                                                                   // 0x0010 (size: 0x4)
    float spread;                                                                     // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FSourceEffectChorusSettings
{
    float Depth;                                                                      // 0x0000 (size: 0x4)
    float Frequency;                                                                  // 0x0004 (size: 0x4)
    float Feedback;                                                                   // 0x0008 (size: 0x4)
    float WetLevel;                                                                   // 0x000C (size: 0x4)
    float DryLevel;                                                                   // 0x0010 (size: 0x4)
    float spread;                                                                     // 0x0014 (size: 0x4)
    FSoundModulationDestinationSettings DepthModulation;                              // 0x0018 (size: 0x58)
    FSoundModulationDestinationSettings FrequencyModulation;                          // 0x0070 (size: 0x58)
    FSoundModulationDestinationSettings FeedbackModulation;                           // 0x00C8 (size: 0x58)
    FSoundModulationDestinationSettings WetModulation;                                // 0x0120 (size: 0x58)
    FSoundModulationDestinationSettings DryModulation;                                // 0x0178 (size: 0x58)
    FSoundModulationDestinationSettings SpreadModulation;                             // 0x01D0 (size: 0x58)

}; // Size: 0x228

struct FSourceEffectConvolutionReverbSettings
{
    float NormalizationVolumeDb;                                                      // 0x0000 (size: 0x4)
    float WetVolumeDb;                                                                // 0x0004 (size: 0x4)
    float DryVolumeDb;                                                                // 0x0008 (size: 0x4)
    bool bBypass;                                                                     // 0x000C (size: 0x1)

}; // Size: 0x10

struct FSourceEffectDynamicsProcessorSettings
{
    ESourceEffectDynamicsProcessorType DynamicsProcessorType;                         // 0x0000 (size: 0x1)
    ESourceEffectDynamicsPeakMode PeakMode;                                           // 0x0001 (size: 0x1)
    float LookAheadMsec;                                                              // 0x0004 (size: 0x4)
    float AttackTimeMsec;                                                             // 0x0008 (size: 0x4)
    float ReleaseTimeMsec;                                                            // 0x000C (size: 0x4)
    float ThresholdDb;                                                                // 0x0010 (size: 0x4)
    float Ratio;                                                                      // 0x0014 (size: 0x4)
    float KneeBandwidthDb;                                                            // 0x0018 (size: 0x4)
    float InputGainDb;                                                                // 0x001C (size: 0x4)
    float OutputGainDb;                                                               // 0x0020 (size: 0x4)
    uint8 bStereoLinked;                                                              // 0x0024 (size: 0x1)
    uint8 bAnalogMode;                                                                // 0x0024 (size: 0x1)

}; // Size: 0x28

struct FSourceEffectEQBand
{
    float Frequency;                                                                  // 0x0000 (size: 0x4)
    float Bandwidth;                                                                  // 0x0004 (size: 0x4)
    float GainDb;                                                                     // 0x0008 (size: 0x4)
    uint8 bEnabled;                                                                   // 0x000C (size: 0x1)

}; // Size: 0x10

struct FSourceEffectEQSettings
{
    TArray<FSourceEffectEQBand> EQBands;                                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FSourceEffectEnvelopeFollowerSettings
{
    float AttackTime;                                                                 // 0x0000 (size: 0x4)
    float ReleaseTime;                                                                // 0x0004 (size: 0x4)
    EEnvelopeFollowerPeakMode PeakMode;                                               // 0x0008 (size: 0x1)
    bool bIsAnalogMode;                                                               // 0x0009 (size: 0x1)

}; // Size: 0xC

struct FSourceEffectFilterAudioBusModulationSettings
{
    class UAudioBus* AudioBus;                                                        // 0x0000 (size: 0x8)
    int32 EnvelopeFollowerAttackTimeMsec;                                             // 0x0008 (size: 0x4)
    int32 EnvelopeFollowerReleaseTimeMsec;                                            // 0x000C (size: 0x4)
    float EnvelopeGainMultiplier;                                                     // 0x0010 (size: 0x4)
    ESourceEffectFilterParam FilterParam;                                             // 0x0014 (size: 0x1)
    float MinFrequencyModulation;                                                     // 0x0018 (size: 0x4)
    float MaxFrequencyModulation;                                                     // 0x001C (size: 0x4)
    float MinResonanceModulation;                                                     // 0x0020 (size: 0x4)
    float MaxResonanceModulation;                                                     // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FSourceEffectFilterSettings
{
    ESourceEffectFilterCircuit FilterCircuit;                                         // 0x0000 (size: 0x1)
    ESourceEffectFilterType FilterType;                                               // 0x0001 (size: 0x1)
    float CutoffFrequency;                                                            // 0x0004 (size: 0x4)
    float FilterQ;                                                                    // 0x0008 (size: 0x4)
    TArray<FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation;         // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FSourceEffectFoldbackDistortionSettings
{
    float InputGainDb;                                                                // 0x0000 (size: 0x4)
    float ThresholdDb;                                                                // 0x0004 (size: 0x4)
    float OutputGainDb;                                                               // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FSourceEffectIndividualFilterSettings
{
    ESourceEffectMotionFilterCircuit FilterCircuit;                                   // 0x0000 (size: 0x1)
    ESourceEffectMotionFilterType FilterType;                                         // 0x0001 (size: 0x1)
    float CutoffFrequency;                                                            // 0x0004 (size: 0x4)
    float FilterQ;                                                                    // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FSourceEffectMidSideSpreaderSettings
{
    float SpreadAmount;                                                               // 0x0000 (size: 0x4)
    EStereoChannelMode InputMode;                                                     // 0x0004 (size: 0x1)
    EStereoChannelMode OutputMode;                                                    // 0x0005 (size: 0x1)
    bool bEqualPower;                                                                 // 0x0006 (size: 0x1)

}; // Size: 0x8

struct FSourceEffectMotionFilterModulationSettings
{
    ESourceEffectMotionFilterModSource ModulationSource;                              // 0x0000 (size: 0x1)
    FVector2D ModulationInputRange;                                                   // 0x0008 (size: 0x10)
    FVector2D ModulationOutputMinimumRange;                                           // 0x0018 (size: 0x10)
    FVector2D ModulationOutputMaximumRange;                                           // 0x0028 (size: 0x10)
    float UpdateEaseMS;                                                               // 0x0038 (size: 0x4)

}; // Size: 0x40

struct FSourceEffectMotionFilterSettings
{
    ESourceEffectMotionFilterTopology MotionFilterTopology;                           // 0x0000 (size: 0x1)
    float MotionFilterMix;                                                            // 0x0004 (size: 0x4)
    FSourceEffectIndividualFilterSettings FilterASettings;                            // 0x0008 (size: 0xC)
    FSourceEffectIndividualFilterSettings FilterBSettings;                            // 0x0014 (size: 0xC)
    TMap<class ESourceEffectMotionFilterModDestination, class FSourceEffectMotionFilterModulationSettings> ModulationMappings; // 0x0020 (size: 0x50)
    float DryVolumeDb;                                                                // 0x0070 (size: 0x4)

}; // Size: 0x78

struct FSourceEffectPannerSettings
{
    float spread;                                                                     // 0x0000 (size: 0x4)
    float Pan;                                                                        // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FSourceEffectPhaserSettings
{
    float WetLevel;                                                                   // 0x0000 (size: 0x4)
    float Frequency;                                                                  // 0x0004 (size: 0x4)
    float Feedback;                                                                   // 0x0008 (size: 0x4)
    EPhaserLFOType LFOType;                                                           // 0x000C (size: 0x1)
    bool UseQuadraturePhase;                                                          // 0x000D (size: 0x1)

}; // Size: 0x10

struct FSourceEffectRingModulationSettings
{
    ERingModulatorTypeSourceEffect ModulatorType;                                     // 0x0000 (size: 0x1)
    float Frequency;                                                                  // 0x0004 (size: 0x4)
    float Depth;                                                                      // 0x0008 (size: 0x4)
    float DryLevel;                                                                   // 0x000C (size: 0x4)
    float WetLevel;                                                                   // 0x0010 (size: 0x4)
    class UAudioBus* AudioBusModulator;                                               // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FSourceEffectSimpleDelaySettings
{
    float SpeedOfSound;                                                               // 0x0000 (size: 0x4)
    float DelayAmount;                                                                // 0x0004 (size: 0x4)
    float DryAmount;                                                                  // 0x0008 (size: 0x4)
    float WetAmount;                                                                  // 0x000C (size: 0x4)
    float Feedback;                                                                   // 0x0010 (size: 0x4)
    uint8 bDelayBasedOnDistance;                                                      // 0x0014 (size: 0x1)
    uint8 bUseDistanceOverride;                                                       // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FSourceEffectStereoDelaySettings
{
    EStereoDelaySourceEffect DelayMode;                                               // 0x0000 (size: 0x1)
    float DelayTimeMsec;                                                              // 0x0004 (size: 0x4)
    float Feedback;                                                                   // 0x0008 (size: 0x4)
    float DelayRatio;                                                                 // 0x000C (size: 0x4)
    float WetLevel;                                                                   // 0x0010 (size: 0x4)
    float DryLevel;                                                                   // 0x0014 (size: 0x4)
    bool bFilterEnabled;                                                              // 0x0018 (size: 0x1)
    EStereoDelayFiltertype FilterType;                                                // 0x0019 (size: 0x1)
    float FilterFrequency;                                                            // 0x001C (size: 0x4)
    float FilterQ;                                                                    // 0x0020 (size: 0x4)

}; // Size: 0x24

struct FSourceEffectWaveShaperSettings
{
    float Amount;                                                                     // 0x0000 (size: 0x4)
    float OutputGainDb;                                                               // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FSubmixEffectConvolutionReverbSettings
{
    float NormalizationVolumeDb;                                                      // 0x0000 (size: 0x4)
    float WetVolumeDb;                                                                // 0x0004 (size: 0x4)
    float DryVolumeDb;                                                                // 0x0008 (size: 0x4)
    bool bBypass;                                                                     // 0x000C (size: 0x1)
    bool bMixInputChannelFormatToImpulseResponseFormat;                               // 0x000D (size: 0x1)
    bool bMixReverbOutputToOutputChannelFormat;                                       // 0x000E (size: 0x1)
    float SurroundRearChannelBleedDb;                                                 // 0x0010 (size: 0x4)
    bool bInvertRearChannelBleedPhase;                                                // 0x0014 (size: 0x1)
    bool bSurroundRearChannelFlip;                                                    // 0x0015 (size: 0x1)
    float SurroundRearChannelBleedAmount;                                             // 0x0018 (size: 0x4)
    class UAudioImpulseResponse* ImpulseResponse;                                     // 0x0020 (size: 0x8)
    bool AllowHardwareAcceleration;                                                   // 0x0028 (size: 0x1)

}; // Size: 0x30

struct FSubmixEffectDelaySettings
{
    float MaximumDelayLength;                                                         // 0x0000 (size: 0x4)
    float InterpolationTime;                                                          // 0x0004 (size: 0x4)
    float DelayLength;                                                                // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FSubmixEffectFilterSettings
{
    ESubmixFilterType FilterType;                                                     // 0x0000 (size: 0x1)
    ESubmixFilterAlgorithm FilterAlgorithm;                                           // 0x0001 (size: 0x1)
    float FilterFrequency;                                                            // 0x0004 (size: 0x4)
    float FilterQ;                                                                    // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FSubmixEffectFlexiverbSettings
{
    float PreDelay;                                                                   // 0x0000 (size: 0x4)
    float DecayTime;                                                                  // 0x0004 (size: 0x4)
    float RoomDampening;                                                              // 0x0008 (size: 0x4)
    int32 Complexity;                                                                 // 0x000C (size: 0x4)

}; // Size: 0x10

struct FSubmixEffectMultibandCompressorSettings
{
    ESubmixEffectDynamicsProcessorType DynamicsProcessorType;                         // 0x0000 (size: 0x1)
    ESubmixEffectDynamicsPeakMode PeakMode;                                           // 0x0001 (size: 0x1)
    ESubmixEffectDynamicsChannelLinkMode LinkMode;                                    // 0x0002 (size: 0x1)
    float LookAheadMsec;                                                              // 0x0004 (size: 0x4)
    bool bAnalogMode;                                                                 // 0x0008 (size: 0x1)
    bool bFourPole;                                                                   // 0x0009 (size: 0x1)
    bool bBypass;                                                                     // 0x000A (size: 0x1)
    ESubmixEffectDynamicsKeySource KeySource;                                         // 0x000B (size: 0x1)
    class UAudioBus* ExternalAudioBus;                                                // 0x0010 (size: 0x8)
    class USoundSubmix* ExternalSubmix;                                               // 0x0018 (size: 0x8)
    float KeyGainDb;                                                                  // 0x0020 (size: 0x4)
    bool bKeyAudition;                                                                // 0x0024 (size: 0x1)
    TArray<FDynamicsBandSettings> Bands;                                              // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FSubmixEffectStereoDelaySettings
{
    EStereoDelaySourceEffect DelayMode;                                               // 0x0000 (size: 0x1)
    float DelayTimeMsec;                                                              // 0x0004 (size: 0x4)
    float Feedback;                                                                   // 0x0008 (size: 0x4)
    float DelayRatio;                                                                 // 0x000C (size: 0x4)
    float WetLevel;                                                                   // 0x0010 (size: 0x4)
    float DryLevel;                                                                   // 0x0014 (size: 0x4)
    bool bFilterEnabled;                                                              // 0x0018 (size: 0x1)
    EStereoDelayFiltertype FilterType;                                                // 0x0019 (size: 0x1)
    float FilterFrequency;                                                            // 0x001C (size: 0x4)
    float FilterQ;                                                                    // 0x0020 (size: 0x4)

}; // Size: 0x24

struct FSubmixEffectStereoToQuadSettings
{
    bool bFlipChannels;                                                               // 0x0000 (size: 0x1)
    float RearChannelGain;                                                            // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FSubmixEffectTapDelaySettings
{
    float MaximumDelayLength;                                                         // 0x0000 (size: 0x4)
    float InterpolationTime;                                                          // 0x0004 (size: 0x4)
    TArray<FTapDelayInfo> Taps;                                                       // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FSynth1PatchCable
{
    float Depth;                                                                      // 0x0000 (size: 0x4)
    ESynth1PatchDestination Destination;                                              // 0x0004 (size: 0x1)

}; // Size: 0x8

struct FSynth2DSliderStyle : public FSlateWidgetStyle
{
    FSlateBrush NormalThumbImage;                                                     // 0x0010 (size: 0xD0)
    FSlateBrush DisabledThumbImage;                                                   // 0x00E0 (size: 0xD0)
    FSlateBrush NormalBarImage;                                                       // 0x01B0 (size: 0xD0)
    FSlateBrush DisabledBarImage;                                                     // 0x0280 (size: 0xD0)
    FSlateBrush BackgroundImage;                                                      // 0x0350 (size: 0xD0)
    float BarThickness;                                                               // 0x0420 (size: 0x4)

}; // Size: 0x430

struct FSynthKnobStyle : public FSlateWidgetStyle
{
    FSlateBrush LargeKnob;                                                            // 0x0010 (size: 0xD0)
    FSlateBrush LargeKnobOverlay;                                                     // 0x00E0 (size: 0xD0)
    FSlateBrush MediumKnob;                                                           // 0x01B0 (size: 0xD0)
    FSlateBrush MediumKnobOverlay;                                                    // 0x0280 (size: 0xD0)
    float MinValueAngle;                                                              // 0x0350 (size: 0x4)
    float MaxValueAngle;                                                              // 0x0354 (size: 0x4)
    ESynthKnobSize KnobSize;                                                          // 0x0358 (size: 0x1)

}; // Size: 0x360

struct FSynthSlateStyle : public FSlateWidgetStyle
{
    ESynthSlateSizeType SizeType;                                                     // 0x0008 (size: 0x1)
    ESynthSlateColorStyle ColorStyle;                                                 // 0x0009 (size: 0x1)

}; // Size: 0x10

struct FTapDelayInfo
{
    ETapLineMode TapLineMode;                                                         // 0x0000 (size: 0x1)
    float DelayLength;                                                                // 0x0004 (size: 0x4)
    float Gain;                                                                       // 0x0008 (size: 0x4)
    int32 OutputChannel;                                                              // 0x000C (size: 0x4)
    float PanInDegrees;                                                               // 0x0010 (size: 0x4)
    int32 TapId;                                                                      // 0x0014 (size: 0x4)

}; // Size: 0x18

class UAudioImpulseResponse : public UObject
{
    TArray<float> ImpulseResponse;                                                    // 0x0028 (size: 0x10)
    int32 NumChannels;                                                                // 0x0038 (size: 0x4)
    int32 SampleRate;                                                                 // 0x003C (size: 0x4)
    float NormalizationVolumeDb;                                                      // 0x0040 (size: 0x4)
    bool bTrueStereo;                                                                 // 0x0044 (size: 0x1)
    TArray<float> IRData;                                                             // 0x0048 (size: 0x10)

}; // Size: 0x58

class UEnvelopeFollowerListener : public UActorComponent
{
    FEnvelopeFollowerListenerOnEnvelopeFollowerUpdate OnEnvelopeFollowerUpdate;       // 0x00A0 (size: 0x10)
    void OnEnvelopeFollowerUpdate(float EnvelopeValue);

}; // Size: 0xC0

class UGranularSynth : public USynthComponent
{
    class USoundWave* GranulatedSoundWave;                                            // 0x0890 (size: 0x8)

    void SetSustainGain(const float SustainGain);
    void SetSoundWave(class USoundWave* InSoundWave);
    void SetScrubMode(const bool bScrubMode);
    void SetReleaseTimeMsec(const float ReleaseTimeMsec);
    void SetPlayheadTime(const float InPositionSec, const float LerpTimeSec, EGranularSynthSeekType SeekType);
    void SetPlaybackSpeed(const float InPlayheadRate);
    void SetGrainVolume(const float BaseVolume, const FVector2D VolumeRange);
    void SetGrainsPerSecond(const float InGrainsPerSecond);
    void SetGrainProbability(const float InGrainProbability);
    void SetGrainPitch(const float BasePitch, const FVector2D PitchRange);
    void SetGrainPan(const float BasePan, const FVector2D PanRange);
    void SetGrainEnvelopeType(const EGranularSynthEnvelopeType EnvelopeType);
    void SetGrainDuration(const float BaseDurationMsec, const FVector2D DurationRange);
    void SetDecayTime(const float DecayTimeMsec);
    void SetAttackTime(const float AttackTimeMsec);
    void NoteOn(const float Note, const int32 Velocity, const float Duration);
    void NoteOff(const float Note, const bool bKill);
    bool IsLoaded();
    float GetSampleDuration();
    float GetCurrentPlayheadTime();
}; // Size: 0xC80

class UModularSynthComponent : public USynthComponent
{
    int32 VoiceCount;                                                                 // 0x0890 (size: 0x4)

    void SetSynthPreset(const FModularSynthPreset& SynthPreset);
    void SetSustainGain(float SustainGain);
    void SetStereoDelayWetlevel(float DelayWetlevel);
    void SetStereoDelayTime(float DelayTimeMsec);
    void SetStereoDelayRatio(float DelayRatio);
    void SetStereoDelayMode(ESynthStereoDelayMode StereoDelayMode);
    void SetStereoDelayIsEnabled(bool StereoDelayEnabled);
    void SetStereoDelayFeedback(float DelayFeedback);
    void SetSpread(float spread);
    void SetReleaseTime(float ReleaseTimeMsec);
    void SetPortamento(float Portamento);
    void SetPitchBend(float PitchBend);
    void SetPan(float Pan);
    void SetOscType(int32 OscIndex, ESynth1OscType OscType);
    void SetOscSync(const bool bIsSynced);
    void SetOscSemitones(int32 OscIndex, float Semitones);
    void SetOscPulsewidth(int32 OscIndex, float Pulsewidth);
    void SetOscOctave(int32 OscIndex, float Octave);
    void SetOscGainMod(int32 OscIndex, float OscGainMod);
    void SetOscGain(int32 OscIndex, float OscGain);
    void SetOscFrequencyMod(int32 OscIndex, float OscFreqMod);
    void SetOscCents(int32 OscIndex, float Cents);
    void SetModEnvSustainGain(const float SustainGain);
    void SetModEnvReleaseTime(const float Release);
    void SetModEnvPatch(const ESynthModEnvPatch InPatchType);
    void SetModEnvInvert(const bool bInvert);
    void SetModEnvDepth(const float Depth);
    void SetModEnvDecayTime(const float DecayTimeMsec);
    void SetModEnvBiasPatch(const ESynthModEnvBiasPatch InPatchType);
    void SetModEnvBiasInvert(const bool bInvert);
    void SetModEnvAttackTime(const float AttackTimeMsec);
    void SetLFOType(int32 LFOIndex, ESynthLFOType LFOType);
    void SetLFOPatch(int32 LFOIndex, ESynthLFOPatchType LFOPatchType);
    void SetLFOMode(int32 LFOIndex, ESynthLFOMode LFOMode);
    void SetLFOGainMod(int32 LFOIndex, float GainMod);
    void SetLFOGain(int32 LFOIndex, float Gain);
    void SetLFOFrequencyMod(int32 LFOIndex, float FrequencyModHz);
    void SetLFOFrequency(int32 LFOIndex, float FrequencyHz);
    void SetGainDb(float GainDb);
    void SetFilterType(ESynthFilterType FilterType);
    void SetFilterQMod(float FilterQ);
    void SetFilterQ(float FilterQ);
    void SetFilterFrequencyMod(float FilterFrequencyHz);
    void SetFilterFrequency(float FilterFrequencyHz);
    void SetFilterAlgorithm(ESynthFilterAlgorithm FilterAlgorithm);
    void SetEnableUnison(bool EnableUnison);
    void SetEnableRetrigger(bool RetriggerEnabled);
    void SetEnablePolyphony(bool bEnablePolyphony);
    bool SetEnablePatch(const FPatchId PatchId, const bool bIsEnabled);
    void SetEnableLegato(bool LegatoEnabled);
    void SetDecayTime(float DecayTimeMsec);
    void SetChorusFrequency(float Frequency);
    void SetChorusFeedback(float Feedback);
    void SetChorusEnabled(bool EnableChorus);
    void SetChorusDepth(float Depth);
    void SetAttackTime(float AttackTimeMsec);
    void NoteOn(const float Note, const int32 Velocity, const float Duration);
    void NoteOff(const float Note, const bool bAllNotesOff, const bool bKillAllNotes);
    FPatchId CreatePatch(const ESynth1PatchSource PatchSource, const TArray<FSynth1PatchCable>& PatchCables, const bool bEnableByDefault);
}; // Size: 0xF80

class UModularSynthLibrary : public UBlueprintFunctionLibrary
{

    void AddModularSynthPresetToBankAsset(class UModularSynthPresetBank* InBank, const FModularSynthPreset& Preset, FString PresetName);
}; // Size: 0x28

class UModularSynthPresetBank : public UObject
{
    TArray<FModularSynthPresetBankEntry> Presets;                                     // 0x0028 (size: 0x10)

}; // Size: 0x38

class UMonoWaveTableSynthPreset : public UObject
{
    FString PresetName;                                                               // 0x0028 (size: 0x10)
    uint8 bLockKeyframesToGridBool;                                                   // 0x0038 (size: 0x1)
    int32 LockKeyframesToGrid;                                                        // 0x003C (size: 0x4)
    int32 WaveTableResolution;                                                        // 0x0040 (size: 0x4)
    TArray<FRuntimeFloatCurve> WaveTable;                                             // 0x0048 (size: 0x10)
    uint8 bNormalizeWaveTables;                                                       // 0x0058 (size: 0x1)

}; // Size: 0x170

class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset
{
    FSourceEffectBitCrusherSettings Settings;                                         // 0x0150 (size: 0xC0)

    void SetSettings(const FSourceEffectBitCrusherBaseSettings& Settings);
    void SetSampleRateModulators(const TSet<USoundModulatorBase*>& InModulators);
    void SetSampleRateModulator(const class USoundModulatorBase* Modulator);
    void SetSampleRate(float SampleRate);
    void SetModulationSettings(const FSourceEffectBitCrusherSettings& ModulationSettings);
    void SetBits(float Bits);
    void SetBitModulators(const TSet<USoundModulatorBase*>& InModulators);
    void SetBitModulator(const class USoundModulatorBase* Modulator);
}; // Size: 0x210

class USourceEffectChorusPreset : public USoundEffectSourcePreset
{
    FSourceEffectChorusSettings Settings;                                             // 0x02B8 (size: 0x228)

    void SetWetModulators(const TSet<USoundModulatorBase*>& Modulators);
    void SetWetModulator(const class USoundModulatorBase* Modulator);
    void SetWet(float WetAmount);
    void SetSpreadModulators(const TSet<USoundModulatorBase*>& Modulators);
    void SetSpreadModulator(const class USoundModulatorBase* Modulator);
    void SetSpread(float spread);
    void SetSettings(const FSourceEffectChorusBaseSettings& Settings);
    void SetModulationSettings(const FSourceEffectChorusSettings& ModulationSettings);
    void SetFrequencyModulators(const TSet<USoundModulatorBase*>& Modulators);
    void SetFrequencyModulator(const class USoundModulatorBase* Modulator);
    void SetFrequency(float Frequency);
    void SetFeedbackModulators(const TSet<USoundModulatorBase*>& Modulators);
    void SetFeedbackModulator(const class USoundModulatorBase* Modulator);
    void SetFeedback(float Feedback);
    void SetDryModulators(const TSet<USoundModulatorBase*>& Modulators);
    void SetDryModulator(const class USoundModulatorBase* Modulator);
    void SetDry(float DryAmount);
    void SetDepthModulators(const TSet<USoundModulatorBase*>& Modulators);
    void SetDepthModulator(const class USoundModulatorBase* Modulator);
    void SetDepth(float Depth);
}; // Size: 0x4E0

class USourceEffectConvolutionReverbPreset : public USoundEffectSourcePreset
{
    class UAudioImpulseResponse* ImpulseResponse;                                     // 0x0068 (size: 0x8)
    FSourceEffectConvolutionReverbSettings Settings;                                  // 0x0070 (size: 0x10)
    ESubmixEffectConvolutionReverbBlockSize BlockSize;                                // 0x0080 (size: 0x1)
    bool bEnableHardwareAcceleration;                                                 // 0x0081 (size: 0x1)

    void SetSettings(const FSourceEffectConvolutionReverbSettings& InSettings);
    void SetImpulseResponse(class UAudioImpulseResponse* InImpulseResponse);
}; // Size: 0xC0

class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset
{
    FSourceEffectDynamicsProcessorSettings Settings;                                  // 0x00B8 (size: 0x28)

    void SetSettings(const FSourceEffectDynamicsProcessorSettings& InSettings);
}; // Size: 0xE0

class USourceEffectEQPreset : public USoundEffectSourcePreset
{
    FSourceEffectEQSettings Settings;                                                 // 0x00A0 (size: 0x10)

    void SetSettings(const FSourceEffectEQSettings& InSettings);
}; // Size: 0xB0

class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset
{
    FSourceEffectEnvelopeFollowerSettings Settings;                                   // 0x009C (size: 0xC)

    void UnregisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener);
    void SetSettings(const FSourceEffectEnvelopeFollowerSettings& InSettings);
    void RegisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener);
}; // Size: 0xA8

class USourceEffectFilterPreset : public USoundEffectSourcePreset
{
    FSourceEffectFilterSettings Settings;                                             // 0x00B0 (size: 0x20)

    void SetSettings(const FSourceEffectFilterSettings& InSettings);
}; // Size: 0xD0

class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset
{
    FSourceEffectFoldbackDistortionSettings Settings;                                 // 0x009C (size: 0xC)

    void SetSettings(const FSourceEffectFoldbackDistortionSettings& InSettings);
}; // Size: 0xA8

class USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset
{
    FSourceEffectMidSideSpreaderSettings Settings;                                    // 0x0098 (size: 0x8)

    void SetSettings(const FSourceEffectMidSideSpreaderSettings& InSettings);
}; // Size: 0xA0

class USourceEffectMotionFilterPreset : public USoundEffectSourcePreset
{
    FSourceEffectMotionFilterSettings Settings;                                       // 0x0108 (size: 0x78)

    void SetSettings(const FSourceEffectMotionFilterSettings& InSettings);
}; // Size: 0x180

class USourceEffectPannerPreset : public USoundEffectSourcePreset
{
    FSourceEffectPannerSettings Settings;                                             // 0x0098 (size: 0x8)

    void SetSettings(const FSourceEffectPannerSettings& InSettings);
}; // Size: 0xA0

class USourceEffectPhaserPreset : public USoundEffectSourcePreset
{
    FSourceEffectPhaserSettings Settings;                                             // 0x00A0 (size: 0x10)

    void SetSettings(const FSourceEffectPhaserSettings& InSettings);
}; // Size: 0xB0

class USourceEffectRingModulationPreset : public USoundEffectSourcePreset
{
    FSourceEffectRingModulationSettings Settings;                                     // 0x00B0 (size: 0x20)

    void SetSettings(const FSourceEffectRingModulationSettings& InSettings);
}; // Size: 0xD0

class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset
{
    FSourceEffectSimpleDelaySettings Settings;                                        // 0x00A8 (size: 0x18)

    void SetSettings(const FSourceEffectSimpleDelaySettings& InSettings);
}; // Size: 0xC0

class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset
{
    FSourceEffectStereoDelaySettings Settings;                                        // 0x00B4 (size: 0x24)

    void SetSettings(const FSourceEffectStereoDelaySettings& InSettings);
}; // Size: 0xD8

class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset
{
    FSourceEffectWaveShaperSettings Settings;                                         // 0x0098 (size: 0x8)

    void SetSettings(const FSourceEffectWaveShaperSettings& InSettings);
}; // Size: 0xA0

class USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset
{
    class UAudioImpulseResponse* ImpulseResponse;                                     // 0x0068 (size: 0x8)
    FSubmixEffectConvolutionReverbSettings Settings;                                  // 0x0070 (size: 0x30)
    ESubmixEffectConvolutionReverbBlockSize BlockSize;                                // 0x00A0 (size: 0x1)
    bool bEnableHardwareAcceleration;                                                 // 0x00A1 (size: 0x1)

    void SetSettings(const FSubmixEffectConvolutionReverbSettings& InSettings);
    void SetImpulseResponse(class UAudioImpulseResponse* InImpulseResponse);
}; // Size: 0x100

class USubmixEffectDelayPreset : public USoundEffectSubmixPreset
{
    FSubmixEffectDelaySettings Settings;                                              // 0x009C (size: 0xC)
    FSubmixEffectDelaySettings DynamicSettings;                                       // 0x00A8 (size: 0xC)

    void SetSettings(const FSubmixEffectDelaySettings& InSettings);
    void SetInterpolationTime(float Time);
    void SetDelay(float Length);
    void SetDefaultSettings(const FSubmixEffectDelaySettings& InSettings);
    float GetMaxDelayInMilliseconds();
}; // Size: 0xB8

class USubmixEffectDelayStatics : public UBlueprintFunctionLibrary
{

    FSubmixEffectDelaySettings SetMaximumDelayLength(FSubmixEffectDelaySettings& DelaySettings, float MaximumDelayLength);
    FSubmixEffectDelaySettings SetInterpolationTime(FSubmixEffectDelaySettings& DelaySettings, float InterpolationTime);
    FSubmixEffectDelaySettings SetDelayLength(FSubmixEffectDelaySettings& DelaySettings, float DelayLength);
}; // Size: 0x28

class USubmixEffectFilterPreset : public USoundEffectSubmixPreset
{
    FSubmixEffectFilterSettings Settings;                                             // 0x009C (size: 0xC)

    void SetSettings(const FSubmixEffectFilterSettings& InSettings);
    void SetFilterType(ESubmixFilterType InType);
    void SetFilterQMod(float InQ);
    void SetFilterQ(float InQ);
    void SetFilterCutoffFrequencyMod(float InFrequency);
    void SetFilterCutoffFrequency(float InFrequency);
    void SetFilterAlgorithm(ESubmixFilterAlgorithm InAlgorithm);
}; // Size: 0xA8

class USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset
{
    FSubmixEffectFlexiverbSettings Settings;                                          // 0x00A0 (size: 0x10)

    void SetSettings(const FSubmixEffectFlexiverbSettings& InSettings);
}; // Size: 0xB0

class USubmixEffectMultibandCompressorPreset : public USoundEffectSubmixPreset
{
    FSubmixEffectMultibandCompressorSettings Settings;                                // 0x00C8 (size: 0x38)

    void SetSettings(const FSubmixEffectMultibandCompressorSettings& InSettings);
    void SetExternalSubmix(class USoundSubmix* Submix);
    void SetAudioBus(class UAudioBus* AudioBus);
    void ResetKey();
}; // Size: 0x100

class USubmixEffectStereoDelayPreset : public USoundEffectSubmixPreset
{
    FSubmixEffectStereoDelaySettings Settings;                                        // 0x00B4 (size: 0x24)

    void SetSettings(const FSubmixEffectStereoDelaySettings& InSettings);
}; // Size: 0xD8

class USubmixEffectStereoToQuadPreset : public USoundEffectSubmixPreset
{
    FSubmixEffectStereoToQuadSettings Settings;                                       // 0x0098 (size: 0x8)

    void SetSettings(const FSubmixEffectStereoToQuadSettings& InSettings);
}; // Size: 0xA0

class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset
{
    FSubmixEffectTapDelaySettings Settings;                                           // 0x00A8 (size: 0x18)

    void SetTap(int32 TapId, const FTapDelayInfo& TapInfo);
    void SetSettings(const FSubmixEffectTapDelaySettings& InSettings);
    void SetInterpolationTime(float Time);
    void RemoveTap(int32 TapId);
    void GetTapIds(TArray<int32>& TapIds);
    void GetTap(int32 TapId, FTapDelayInfo& TapInfo);
    float GetMaxDelayInMilliseconds();
    void AddTap(int32& TapId);
}; // Size: 0xD8

class USynth2DSlider : public UWidget
{
    float ValueX;                                                                     // 0x0178 (size: 0x4)
    float ValueY;                                                                     // 0x017C (size: 0x4)
    FSynth2DSliderValueXDelegate ValueXDelegate;                                      // 0x0180 (size: 0x10)
    float GetFloat();
    FSynth2DSliderValueYDelegate ValueYDelegate;                                      // 0x0190 (size: 0x10)
    float GetFloat();
    FSynth2DSliderStyle WidgetStyle;                                                  // 0x01A0 (size: 0x430)
    FLinearColor SliderHandleColor;                                                   // 0x05D0 (size: 0x10)
    bool IndentHandle;                                                                // 0x05E0 (size: 0x1)
    bool Locked;                                                                      // 0x05E1 (size: 0x1)
    float StepSize;                                                                   // 0x05E4 (size: 0x4)
    bool IsFocusable;                                                                 // 0x05E8 (size: 0x1)
    FSynth2DSliderOnMouseCaptureBegin OnMouseCaptureBegin;                            // 0x05F0 (size: 0x10)
    void OnMouseCaptureBeginEventSynth2D();
    FSynth2DSliderOnMouseCaptureEnd OnMouseCaptureEnd;                                // 0x0600 (size: 0x10)
    void OnMouseCaptureEndEventSynth2D();
    FSynth2DSliderOnControllerCaptureBegin OnControllerCaptureBegin;                  // 0x0610 (size: 0x10)
    void OnControllerCaptureBeginEventSynth2D();
    FSynth2DSliderOnControllerCaptureEnd OnControllerCaptureEnd;                      // 0x0620 (size: 0x10)
    void OnControllerCaptureEndEventSynth2D();
    FSynth2DSliderOnValueChangedX OnValueChangedX;                                    // 0x0630 (size: 0x10)
    void OnFloatValueChangedEventSynth2D(float Value);
    FSynth2DSliderOnValueChangedY OnValueChangedY;                                    // 0x0640 (size: 0x10)
    void OnFloatValueChangedEventSynth2D(float Value);

    void SetValue(FVector2D InValue);
    void SetStepSize(float InValue);
    void SetSliderHandleColor(FLinearColor InValue);
    void SetLocked(bool InValue);
    void SetIndentHandle(bool InValue);
    FVector2D GetValue();
}; // Size: 0x660

class USynthComponentMonoWaveTable : public USynthComponent
{
    FSynthComponentMonoWaveTableOnTableAltered OnTableAltered;                        // 0x0890 (size: 0x10)
    void OnTableAltered(int32 TableIndex);
    FSynthComponentMonoWaveTableOnNumTablesChanged OnNumTablesChanged;                // 0x08A0 (size: 0x10)
    void NumTablesChanged();
    class UMonoWaveTableSynthPreset* CurrentPreset;                                   // 0x08B0 (size: 0x8)

    void SetWaveTablePosition(float InPosition);
    void SetSustainPedalState(bool InSustainPedalState);
    void SetPosLfoType(const ESynthLFOType InLfoType);
    void SetPosLfoFrequency(const float InLfoFrequency);
    void SetPosLfoDepth(const float InLfoDepth);
    void SetPositionEnvelopeSustainGain(const float InSustainGain);
    void SetPositionEnvelopeReleaseTime(const float InReleaseTimeMsec);
    void SetPositionEnvelopeInvert(const bool bInInvert);
    void SetPositionEnvelopeDepth(const float InDepth);
    void SetPositionEnvelopeDecayTime(const float InDecayTimeMsec);
    void SetPositionEnvelopeBiasInvert(const bool bInBiasInvert);
    void SetPositionEnvelopeBiasDepth(const float InDepth);
    void SetPositionEnvelopeAttackTime(const float InAttackTimeMsec);
    void SetLowPassFilterResonance(float InNewQ);
    void SetFrequencyWithMidiNote(const float InMidiNote);
    void SetFrequencyPitchBend(const float FrequencyOffsetCents);
    void SetFrequency(const float FrequencyHz);
    void SetFilterEnvelopeSustainGain(const float InSustainGain);
    void SetFilterEnvelopeReleaseTime(const float InReleaseTimeMsec);
    void SetFilterEnvelopenDecayTime(const float InDecayTimeMsec);
    void SetFilterEnvelopeInvert(const bool bInInvert);
    void SetFilterEnvelopeDepth(const float InDepth);
    void SetFilterEnvelopeBiasInvert(const bool bInBiasInvert);
    void SetFilterEnvelopeBiasDepth(const float InDepth);
    void SetFilterEnvelopeAttackTime(const float InAttackTimeMsec);
    bool SetCurveValue(int32 TableIndex, int32 KeyframeIndex, const float NewValue);
    bool SetCurveTangent(int32 TableIndex, float InNewTangent);
    bool SetCurveInterpolationType(CurveInterpolationType InterpolationType, int32 TableIndex);
    void SetAmpEnvelopeSustainGain(const float InSustainGain);
    void SetAmpEnvelopeReleaseTime(const float InReleaseTimeMsec);
    void SetAmpEnvelopeInvert(const bool bInInvert);
    void SetAmpEnvelopeDepth(const float InDepth);
    void SetAmpEnvelopeDecayTime(const float InDecayTimeMsec);
    void SetAmpEnvelopeBiasInvert(const bool bInBiasInvert);
    void SetAmpEnvelopeBiasDepth(const float InDepth);
    void SetAmpEnvelopeAttackTime(const float InAttackTimeMsec);
    void RefreshWaveTable(int32 Index);
    void RefreshAllWaveTables();
    void NoteOn(const float InMidiNote, const float InVelocity);
    void NoteOff(const float InMidiNote);
    int32 GetNumTableEntries();
    int32 GetMaxTableIndex();
    TArray<float> GetKeyFrameValuesForTable(float TableIndex);
    float GetCurveTangent(int32 TableIndex);
}; // Size: 0xFE0

class USynthComponentToneGenerator : public USynthComponent
{
    float Frequency;                                                                  // 0x0890 (size: 0x4)
    float Volume;                                                                     // 0x0894 (size: 0x4)
    FRuntimeFloatCurve DistanceAttenuationCurve;                                      // 0x0898 (size: 0x88)
    FVector2D DistanceRange;                                                          // 0x0920 (size: 0x10)
    float AttenuationDbAtMaxRange;                                                    // 0x0930 (size: 0x4)

    void SetVolume(float InVolume);
    void SetFrequency(float InFrequency);
}; // Size: 0x980

class USynthKnob : public UWidget
{
    float Value;                                                                      // 0x0178 (size: 0x4)
    float StepSize;                                                                   // 0x017C (size: 0x4)
    float MouseSpeed;                                                                 // 0x0180 (size: 0x4)
    float MouseFineTuneSpeed;                                                         // 0x0184 (size: 0x4)
    uint8 ShowTooltipInfo;                                                            // 0x0188 (size: 0x1)
    FText ParameterName;                                                              // 0x0190 (size: 0x10)
    FText ParameterUnits;                                                             // 0x01A0 (size: 0x10)
    FSynthKnobValueDelegate ValueDelegate;                                            // 0x01B0 (size: 0x10)
    float GetFloat();
    FSynthKnobStyle WidgetStyle;                                                      // 0x01C0 (size: 0x360)
    bool Locked;                                                                      // 0x0520 (size: 0x1)
    bool IsFocusable;                                                                 // 0x0521 (size: 0x1)
    FSynthKnobOnMouseCaptureBegin OnMouseCaptureBegin;                                // 0x0528 (size: 0x10)
    void OnMouseCaptureBeginEvent();
    FSynthKnobOnMouseCaptureEnd OnMouseCaptureEnd;                                    // 0x0538 (size: 0x10)
    void OnMouseCaptureEndEvent();
    FSynthKnobOnControllerCaptureBegin OnControllerCaptureBegin;                      // 0x0548 (size: 0x10)
    void OnControllerCaptureBeginEvent();
    FSynthKnobOnControllerCaptureEnd OnControllerCaptureEnd;                          // 0x0558 (size: 0x10)
    void OnControllerCaptureEndEvent();
    FSynthKnobOnValueChanged OnValueChanged;                                          // 0x0568 (size: 0x10)
    void OnFloatValueChangedEvent(float Value);

    void SetValue(float InValue);
    void SetStepSize(float InValue);
    void SetLocked(bool InValue);
    float GetValue();
}; // Size: 0x590

class USynthSamplePlayer : public USynthComponent
{
    class USoundWave* SoundWave;                                                      // 0x0890 (size: 0x8)
    FSynthSamplePlayerOnSampleLoaded OnSampleLoaded;                                  // 0x0898 (size: 0x10)
    void OnSampleLoaded();
    FSynthSamplePlayerOnSamplePlaybackProgress OnSamplePlaybackProgress;              // 0x08A8 (size: 0x10)
    void OnSamplePlaybackProgress(float ProgressPercent, float ProgressTimeSeconds);

    void SetSoundWave(class USoundWave* InSoundWave);
    void SetScrubTimeWidth(float InScrubTimeWidthSec);
    void SetScrubMode(bool bScrubMode);
    void SetPitch(float InPitch, float TimeSec);
    void SeekToTime(float TimeSec, ESamplePlayerSeekType SeekType, bool bWrap);
    bool IsLoaded();
    float GetSampleDuration();
    float GetCurrentPlaybackProgressTime();
    float GetCurrentPlaybackProgressPercent();
}; // Size: 0x9C0

class USynthesisUtilitiesBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

    float GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax);
    float GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax);
}; // Size: 0x28

#endif
