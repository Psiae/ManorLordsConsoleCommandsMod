#ifndef UE4SS_SDK_TakeMovieScene_HPP
#define UE4SS_SDK_TakeMovieScene_HPP

class UMovieSceneTakeSection : public UMovieSceneSection
{
    FMovieSceneIntegerChannel HoursCurve;                                             // 0x00F8 (size: 0x108)
    FMovieSceneIntegerChannel MinutesCurve;                                           // 0x0200 (size: 0x108)
    FMovieSceneIntegerChannel SecondsCurve;                                           // 0x0308 (size: 0x108)
    FMovieSceneIntegerChannel FramesCurve;                                            // 0x0410 (size: 0x108)
    FMovieSceneFloatChannel SubFramesCurve;                                           // 0x0518 (size: 0x110)
    FMovieSceneFloatChannel RateCurve;                                                // 0x0628 (size: 0x110)
    FMovieSceneStringChannel Slate;                                                   // 0x0738 (size: 0x110)

}; // Size: 0x848

class UMovieSceneTakeSettings : public UObject
{
    FString HoursName;                                                                // 0x0028 (size: 0x10)
    FString MinutesName;                                                              // 0x0038 (size: 0x10)
    FString SecondsName;                                                              // 0x0048 (size: 0x10)
    FString FramesName;                                                               // 0x0058 (size: 0x10)
    FString SubFramesName;                                                            // 0x0068 (size: 0x10)
    FString RateName;                                                                 // 0x0078 (size: 0x10)
    FString SlateName;                                                                // 0x0088 (size: 0x10)

}; // Size: 0x98

class UMovieSceneTakeTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x00F8 (size: 0x10)

}; // Size: 0x108

#endif
