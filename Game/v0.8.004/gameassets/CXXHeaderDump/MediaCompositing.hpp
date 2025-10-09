#ifndef UE4SS_SDK_MediaCompositing_HPP
#define UE4SS_SDK_MediaCompositing_HPP

struct FMovieSceneMediaPlayerPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
    class UMediaSource* MediaSource;                                                  // 0x0038 (size: 0x8)
    FFrameNumber SectionStartFrame;                                                   // 0x0040 (size: 0x4)
    bool bLoop;                                                                       // 0x0044 (size: 0x1)

}; // Size: 0x48

struct FMovieSceneMediaSectionParams
{
    class UMediaSoundComponent* MediaSoundComponent;                                  // 0x0000 (size: 0x8)
    class UMediaSource* MediaSource;                                                  // 0x0008 (size: 0x8)
    FMovieSceneObjectBindingID MediaSourceProxy;                                      // 0x0010 (size: 0x18)
    int32 MediaSourceProxyIndex;                                                      // 0x0028 (size: 0x4)
    class UMediaTexture* MediaTexture;                                                // 0x0030 (size: 0x8)
    class UMediaPlayer* MediaPlayer;                                                  // 0x0038 (size: 0x8)
    FFrameNumber SectionStartFrame;                                                   // 0x0040 (size: 0x4)
    FFrameNumber SectionEndFrame;                                                     // 0x0044 (size: 0x4)
    bool bLooping;                                                                    // 0x0048 (size: 0x1)
    FFrameNumber StartFrameOffset;                                                    // 0x004C (size: 0x4)
    FMovieSceneFloatChannel ProxyTextureBlend;                                        // 0x0050 (size: 0x110)

}; // Size: 0x160

struct FMovieSceneMediaSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneMediaSectionParams Params;                                             // 0x0020 (size: 0x160)
    class UMovieSceneMediaSection* MediaSection;                                      // 0x0180 (size: 0x8)

}; // Size: 0x188

class UMovieSceneMediaPlayerPropertySection : public UMovieSceneSection
{
    class UMediaSource* MediaSource;                                                  // 0x00F0 (size: 0x8)
    bool bLoop;                                                                       // 0x00F8 (size: 0x1)

}; // Size: 0x100

class UMovieSceneMediaPlayerPropertyTrack : public UMovieScenePropertyTrack
{
}; // Size: 0xD0

class UMovieSceneMediaSection : public UMovieSceneSection
{
    class UMediaSource* MediaSource;                                                  // 0x00F0 (size: 0x8)
    int32 MediaSourceProxyIndex;                                                      // 0x00F8 (size: 0x4)
    bool bLooping;                                                                    // 0x00FC (size: 0x1)
    FFrameNumber StartFrameOffset;                                                    // 0x0100 (size: 0x4)
    class UMediaTexture* MediaTexture;                                                // 0x0108 (size: 0x8)
    class UMediaSoundComponent* MediaSoundComponent;                                  // 0x0110 (size: 0x8)
    bool bUseExternalMediaPlayer;                                                     // 0x0118 (size: 0x1)
    class UMediaPlayer* ExternalMediaPlayer;                                          // 0x0120 (size: 0x8)
    FMediaSourceCacheSettings CacheSettings;                                          // 0x0128 (size: 0x8)
    int32 TextureIndex;                                                               // 0x0130 (size: 0x4)
    bool bHasMediaPlayerProxy;                                                        // 0x0134 (size: 0x1)
    FMovieSceneBoolChannel ChannelCanPlayerBeOpen;                                    // 0x0138 (size: 0x108)
    FMovieSceneObjectBindingID MediaSourceProxyBindingID;                             // 0x0240 (size: 0x18)

}; // Size: 0x258

class UMovieSceneMediaTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> MediaSections;                                  // 0x00A0 (size: 0x10)

}; // Size: 0xB0

#endif
