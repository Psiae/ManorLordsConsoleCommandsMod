#ifndef UE4SS_SDK_LiveLinkMovieScene_HPP
#define UE4SS_SDK_LiveLinkMovieScene_HPP

struct FLiveLinkPropertyData
{
    FName PropertyName;                                                               // 0x0000 (size: 0x8)
    TArray<FMovieSceneFloatChannel> FloatChannel;                                     // 0x0008 (size: 0x10)
    TArray<FMovieSceneStringChannel> StringChannel;                                   // 0x0018 (size: 0x10)
    TArray<FMovieSceneIntegerChannel> IntegerChannel;                                 // 0x0028 (size: 0x10)
    TArray<FMovieSceneBoolChannel> BoolChannel;                                       // 0x0038 (size: 0x10)
    TArray<FMovieSceneByteChannel> ByteChannel;                                       // 0x0048 (size: 0x10)

}; // Size: 0x58

struct FLiveLinkSubSectionData
{
    TArray<FLiveLinkPropertyData> Properties;                                         // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMovieSceneLiveLinkSectionTemplate : public FMovieScenePropertySectionTemplate
{
    FLiveLinkSubjectPreset SubjectPreset;                                             // 0x0038 (size: 0x38)
    TArray<bool> ChannelMask;                                                         // 0x0070 (size: 0x10)
    TArray<FLiveLinkSubSectionData> SubSectionsData;                                  // 0x0080 (size: 0x10)

}; // Size: 0xB8

class UMovieSceneLiveLinkSection : public UMovieSceneSection
{
    FLiveLinkSubjectPreset SubjectPreset;                                             // 0x00F8 (size: 0x38)
    TArray<bool> ChannelMask;                                                         // 0x0130 (size: 0x10)
    TArray<class UMovieSceneLiveLinkSubSection*> SubSections;                         // 0x0140 (size: 0x10)
    FName SubjectName;                                                                // 0x0160 (size: 0x8)
    FLiveLinkFrameData TemplateToPush;                                                // 0x0168 (size: 0x90)
    FLiveLinkRefSkeleton RefSkeleton;                                                 // 0x01F8 (size: 0x20)
    TArray<FName> CurveNames;                                                         // 0x0218 (size: 0x10)
    TArray<FMovieSceneFloatChannel> PropertyFloatChannels;                            // 0x0228 (size: 0x10)

}; // Size: 0x238

class UMovieSceneLiveLinkSubSection : public UObject
{
    FLiveLinkSubSectionData SubSectionData;                                           // 0x0028 (size: 0x10)
    TSubclassOf<class ULiveLinkRole> SubjectRole;                                     // 0x0038 (size: 0x8)

}; // Size: 0x50

class UMovieSceneLiveLinkSubSectionAnimation : public UMovieSceneLiveLinkSubSection
{
}; // Size: 0x60

class UMovieSceneLiveLinkSubSectionBasicRole : public UMovieSceneLiveLinkSubSection
{
}; // Size: 0x60

class UMovieSceneLiveLinkSubSectionProperties : public UMovieSceneLiveLinkSubSection
{
}; // Size: 0x60

class UMovieSceneLiveLinkTrack : public UMovieScenePropertyTrack
{
    TSubclassOf<class ULiveLinkRole> TrackRole;                                       // 0x0130 (size: 0x8)

}; // Size: 0x138

#endif
