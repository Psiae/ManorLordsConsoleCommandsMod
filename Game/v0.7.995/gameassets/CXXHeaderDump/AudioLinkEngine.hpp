#ifndef UE4SS_SDK_AudioLinkEngine_HPP
#define UE4SS_SDK_AudioLinkEngine_HPP

class IAudioLinkBlueprintInterface : public IInterface
{

    void StopLink();
    void SetLinkSound(class USoundBase* NewSound);
    void PlayLink(float StartTime);
    bool IsLinkPlaying();
}; // Size: 0x28

#endif
