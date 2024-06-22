#ifndef UE4SS_SDK_GeometryCollectionTracks_HPP
#define UE4SS_SDK_GeometryCollectionTracks_HPP

struct FMovieSceneGeometryCollectionParams
{
    FSoftObjectPath GeometryCollectionCache;                                          // 0x0008 (size: 0x18)
    FFrameNumber StartFrameOffset;                                                    // 0x0020 (size: 0x4)
    FFrameNumber EndFrameOffset;                                                      // 0x0024 (size: 0x4)
    float PlayRate;                                                                   // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FMovieSceneGeometryCollectionSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneGeometryCollectionSectionTemplateParameters Params;                    // 0x0020 (size: 0x38)

}; // Size: 0x58

struct FMovieSceneGeometryCollectionSectionTemplateParameters : public FMovieSceneGeometryCollectionParams
{
    FFrameNumber SectionStartTime;                                                    // 0x0030 (size: 0x4)
    FFrameNumber SectionEndTime;                                                      // 0x0034 (size: 0x4)

}; // Size: 0x38

class UMovieSceneGeometryCollectionSection : public UMovieSceneSection
{
    FMovieSceneGeometryCollectionParams Params;                                       // 0x00E8 (size: 0x30)

}; // Size: 0x118

class UMovieSceneGeometryCollectionTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> AnimationSections;                              // 0x0098 (size: 0x10)

}; // Size: 0xA8

#endif
