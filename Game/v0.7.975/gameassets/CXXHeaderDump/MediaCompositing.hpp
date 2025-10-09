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
    class UMediaTexture* MediaTexture;                                                // 0x0010 (size: 0x8)
    class UMediaPlayer* MediaPlayer;                                                  // 0x0018 (size: 0x8)
    FFrameNumber SectionStartFrame;                                                   // 0x0020 (size: 0x4)
    FFrameNumber SectionEndFrame;                                                     // 0x0024 (size: 0x4)
    bool bLooping;                                                                    // 0x0028 (size: 0x1)
    FFrameNumber StartFrameOffset;                                                    // 0x002C (size: 0x4)

}; // Size: 0x30

struct FMovieSceneMediaSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneMediaSectionParams Params;                                             // 0x0020 (size: 0x30)

}; // Size: 0x50

class UMovieSceneMediaPlayerPropertySection : public UMovieSceneSection
{
    class UMediaSource* MediaSource;                                                  // 0x00E8 (size: 0x8)
    bool bLoop;                                                                       // 0x00F0 (size: 0x1)

}; // Size: 0xF8

class UMovieSceneMediaPlayerPropertyTrack : public UMovieScenePropertyTrack
{
}; // Size: 0xC8

class UMovieSceneMediaSection : public UMovieSceneSection
{
    class UMediaSource* MediaSource;                                                  // 0x00E8 (size: 0x8)
    bool bLooping;                                                                    // 0x00F0 (size: 0x1)
    FFrameNumber StartFrameOffset;                                                    // 0x00F4 (size: 0x4)
    class UMediaTexture* MediaTexture;                                                // 0x00F8 (size: 0x8)
    class UMediaSoundComponent* MediaSoundComponent;                                  // 0x0100 (size: 0x8)
    bool bUseExternalMediaPlayer;                                                     // 0x0108 (size: 0x1)
    class UMediaPlayer* ExternalMediaPlayer;                                          // 0x0110 (size: 0x8)

}; // Size: 0x118

class UMovieSceneMediaTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> MediaSections;                                  // 0x0098 (size: 0x10)

}; // Size: 0xA8

#endif
