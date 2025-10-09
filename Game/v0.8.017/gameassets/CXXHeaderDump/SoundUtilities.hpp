#ifndef UE4SS_SDK_SoundUtilities_HPP
#define UE4SS_SDK_SoundUtilities_HPP

struct FSoundVariation
{
    class USoundWave* SoundWave;                                                      // 0x0000 (size: 0x8)
    float ProbabilityWeight;                                                          // 0x0008 (size: 0x4)
    FVector2D VolumeRange;                                                            // 0x0010 (size: 0x10)
    FVector2D PitchRange;                                                             // 0x0020 (size: 0x10)

}; // Size: 0x30

class USoundSimple : public USoundBase
{
    TArray<FSoundVariation> variations;                                               // 0x0168 (size: 0x10)
    class USoundWave* SoundWave;                                                      // 0x0178 (size: 0x8)

}; // Size: 0x180

class USoundUtilitiesBPFunctionLibrary : public UBlueprintFunctionLibrary
{

    float GetQFromBandwidth(const float InBandwidth);
    float GetPitchScaleFromMIDIPitch(const int32 BaseMidiNote, const int32 TargetMidiNote);
    int32 GetMIDIPitchFromFrequency(const float Frequency);
    float GetLogFrequencyClamped(const float InValue, const FVector2D& InDomain, const FVector2D& InRange);
    float GetLinearFrequencyClamped(const float InValue, const FVector2D& InDomain, const FVector2D& InRange);
    float GetGainFromMidiVelocity(int32 InVelocity);
    float GetFrequencyMultiplierFromSemitones(const float InPitchSemitones);
    float GetFrequencyFromMIDIPitch(const int32 MidiNote);
    float GetBeatTempo(float BeatsPerMinute, int32 BeatMultiplier, int32 DivisionsOfWholeNote);
    float GetBandwidthFromQ(const float InQ);
    float ConvertLinearToDecibels(const float InLinear, const float InFloor);
    float ConvertDecibelsToLinear(const float InDecibels);
}; // Size: 0x28

#endif
