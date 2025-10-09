#ifndef UE4SS_SDK_GeometryCollectionTracks_HPP
#define UE4SS_SDK_GeometryCollectionTracks_HPP

struct FMovieSceneGeometryCollectionParams
{
    FSoftObjectPath GeometryCollectionCache;                                          // 0x0008 (size: 0x20)
    FFrameNumber StartFrameOffset;                                                    // 0x0028 (size: 0x4)
    FFrameNumber EndFrameOffset;                                                      // 0x002C (size: 0x4)
    float PlayRate;                                                                   // 0x0030 (size: 0x4)

}; // Size: 0x38

struct FMovieSceneGeometryCollectionSectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieSceneGeometryCollectionSectionTemplateParameters Params;                    // 0x0020 (size: 0x40)

}; // Size: 0x60

struct FMovieSceneGeometryCollectionSectionTemplateParameters : public FMovieSceneGeometryCollectionParams
{
    FFrameNumber SectionStartTime;                                                    // 0x0038 (size: 0x4)
    FFrameNumber SectionEndTime;                                                      // 0x003C (size: 0x4)

}; // Size: 0x40

class UMovieSceneGeometryCollectionSection : public UMovieSceneSection
{
    FMovieSceneGeometryCollectionParams Params;                                       // 0x00F0 (size: 0x38)

}; // Size: 0x128

class UMovieSceneGeometryCollectionTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> AnimationSections;                              // 0x00A0 (size: 0x10)

}; // Size: 0xB0

#endif
