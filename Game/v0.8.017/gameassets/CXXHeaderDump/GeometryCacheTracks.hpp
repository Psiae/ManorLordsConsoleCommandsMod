#ifndef UE4SS_SDK_GeometryCacheTracks_HPP
#define UE4SS_SDK_GeometryCacheTracks_HPP

struct FMovieSceneGeometryCacheParams
{
    class UGeometryCache* GeometryCacheAsset;                                         // 0x0000 (size: 0x8)
    FFrameNumber FirstLoopStartFrameOffset;                                           // 0x0008 (size: 0x4)
    FFrameNumber StartFrameOffset;                                                    // 0x000C (size: 0x4)
    FFrameNumber EndFrameOffset;                                                      // 0x0010 (size: 0x4)
    float PlayRate;                                                                   // 0x0014 (size: 0x4)
    uint8 bReverse;                                                                   // 0x0018 (size: 0x1)
    float StartOffset;                                                                // 0x001C (size: 0x4)
    float EndOffset;                                                                  // 0x0020 (size: 0x4)
    FSoftObjectPath GeometryCache;                                                    // 0x0028 (size: 0x20)

}; // Size: 0x48

struct FMovieSceneGeometryCacheSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneGeometryCacheSectionTemplateParameters Params;                         // 0x0020 (size: 0x50)

}; // Size: 0x70

struct FMovieSceneGeometryCacheSectionTemplateParameters : public FMovieSceneGeometryCacheParams
{
    FFrameNumber SectionStartTime;                                                    // 0x0048 (size: 0x4)
    FFrameNumber SectionEndTime;                                                      // 0x004C (size: 0x4)

}; // Size: 0x50

class UMovieSceneGeometryCacheSection : public UMovieSceneSection
{
    FMovieSceneGeometryCacheParams Params;                                            // 0x00F0 (size: 0x48)

}; // Size: 0x138

class UMovieSceneGeometryCacheTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> AnimationSections;                              // 0x00A0 (size: 0x10)

}; // Size: 0xB0

#endif
