#ifndef UE4SS_SDK_SequencerScripting_HPP
#define UE4SS_SDK_SequencerScripting_HPP

#include "SequencerScripting_enums.hpp"

struct FSequencerScriptingRange
{
    uint8 bHasStart;                                                                  // 0x0000 (size: 0x1)
    uint8 bHasEnd;                                                                    // 0x0000 (size: 0x1)
    int32 InclusiveStart;                                                             // 0x0004 (size: 0x4)
    int32 ExclusiveEnd;                                                               // 0x0008 (size: 0x4)
    FFrameRate InternalRate;                                                          // 0x000C (size: 0x8)

}; // Size: 0x14

class UMovieSceneBindingExtensions : public UBlueprintFunctionLibrary
{

    void SetSpawnableBindingID(const FMovieSceneBindingProxy& InBinding, const FMovieSceneObjectBindingID& SpawnableBindingID);
    void SetSortingOrder(const FMovieSceneBindingProxy& InBinding, int32 SortingOrder);
    void SetParent(const FMovieSceneBindingProxy& InBinding, const FMovieSceneBindingProxy& InParentBinding);
    void SetName(const FMovieSceneBindingProxy& InBinding, FString InName);
    void SetDisplayName(const FMovieSceneBindingProxy& InBinding, const FText& InDisplayName);
    void RemoveTrack(const FMovieSceneBindingProxy& InBinding, class UMovieSceneTrack* TrackToRemove);
    void Remove(const FMovieSceneBindingProxy& InBinding);
    void MoveBindingContents(const FMovieSceneBindingProxy& SourceBindingId, const FMovieSceneBindingProxy& DestinationBindingId);
    bool IsValid(const FMovieSceneBindingProxy& InBinding);
    TArray<class UMovieSceneTrack*> GetTracks(const FMovieSceneBindingProxy& InBinding);
    int32 GetSortingOrder(const FMovieSceneBindingProxy& InBinding);
    UClass* GetPossessedObjectClass(const FMovieSceneBindingProxy& InBinding);
    FMovieSceneBindingProxy GetParent(const FMovieSceneBindingProxy& InBinding);
    class UObject* GetObjectTemplate(const FMovieSceneBindingProxy& InBinding);
    FString GetName(const FMovieSceneBindingProxy& InBinding);
    FGuid GetId(const FMovieSceneBindingProxy& InBinding);
    FText GetDisplayName(const FMovieSceneBindingProxy& InBinding);
    TArray<FMovieSceneBindingProxy> GetChildPossessables(const FMovieSceneBindingProxy& InBinding);
    TArray<class UMovieSceneTrack*> FindTracksByType(const FMovieSceneBindingProxy& InBinding, TSubclassOf<class UMovieSceneTrack> TrackType);
    TArray<class UMovieSceneTrack*> FindTracksByExactType(const FMovieSceneBindingProxy& InBinding, TSubclassOf<class UMovieSceneTrack> TrackType);
    class UMovieSceneTrack* AddTrack(const FMovieSceneBindingProxy& InBinding, TSubclassOf<class UMovieSceneTrack> TrackType);
}; // Size: 0x28

class UMovieSceneDoubleVectorTrackExtensions : public UBlueprintFunctionLibrary
{

    void SetNumChannelsUsed(class UMovieSceneDoubleVectorTrack* Track, int32 InNumChannelsUsed);
    int32 GetNumChannelsUsed(class UMovieSceneDoubleVectorTrack* Track);
}; // Size: 0x28

class UMovieSceneEventTrackExtensions : public UBlueprintFunctionLibrary
{

    UClass* GetBoundObjectPropertyClass(const FMovieSceneEvent& EventKey);
    class UMovieSceneEventTriggerSection* AddEventTriggerSection(class UMovieSceneEventTrack* InTrack);
    class UMovieSceneEventRepeaterSection* AddEventRepeaterSection(class UMovieSceneEventTrack* InTrack);
}; // Size: 0x28

class UMovieSceneFloatVectorTrackExtensions : public UBlueprintFunctionLibrary
{

    void SetNumChannelsUsed(class UMovieSceneFloatVectorTrack* Track, int32 InNumChannelsUsed);
    int32 GetNumChannelsUsed(class UMovieSceneFloatVectorTrack* Track);
}; // Size: 0x28

class UMovieSceneFolderExtensions : public UBlueprintFunctionLibrary
{

    bool SetFolderName(class UMovieSceneFolder* Folder, FName InFolderName);
    bool SetFolderColor(class UMovieSceneFolder* Folder, FColor InFolderColor);
    bool RemoveChildTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InTrack);
    bool RemoveChildObjectBinding(class UMovieSceneFolder* Folder, const FMovieSceneBindingProxy InObjectBinding);
    bool RemoveChildMasterTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InTrack);
    bool RemoveChildFolder(class UMovieSceneFolder* TargetFolder, class UMovieSceneFolder* FolderToRemove);
    FName GetFolderName(class UMovieSceneFolder* Folder);
    FColor GetFolderColor(class UMovieSceneFolder* Folder);
    TArray<class UMovieSceneTrack*> GetChildTracks(class UMovieSceneFolder* Folder);
    TArray<FMovieSceneBindingProxy> GetChildObjectBindings(class UMovieSceneFolder* Folder);
    TArray<class UMovieSceneTrack*> GetChildMasterTracks(class UMovieSceneFolder* Folder);
    TArray<class UMovieSceneFolder*> GetChildFolders(class UMovieSceneFolder* Folder);
    bool AddChildTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InTrack);
    bool AddChildObjectBinding(class UMovieSceneFolder* Folder, FMovieSceneBindingProxy InObjectBinding);
    bool AddChildMasterTrack(class UMovieSceneFolder* Folder, class UMovieSceneTrack* InTrack);
    bool AddChildFolder(class UMovieSceneFolder* TargetFolder, class UMovieSceneFolder* FolderToAdd);
}; // Size: 0x28

class UMovieSceneMaterialTrackExtensions : public UBlueprintFunctionLibrary
{

    void SetMaterialInfo(class UMovieSceneComponentMaterialTrack* Track, const FComponentMaterialInfo& MaterialInfo);
    void SetMaterialIndex(class UMovieSceneComponentMaterialTrack* Track, const int32 MaterialIndex);
    FComponentMaterialInfo GetMaterialInfo(class UMovieSceneComponentMaterialTrack* Track);
    int32 GetMaterialIndex(class UMovieSceneComponentMaterialTrack* Track);
}; // Size: 0x28

class UMovieScenePrimitiveMaterialTrackExtensions : public UBlueprintFunctionLibrary
{

    void SetMaterialInfo(class UMovieScenePrimitiveMaterialTrack* Track, const FComponentMaterialInfo& MaterialInfo);
    void SetMaterialIndex(class UMovieScenePrimitiveMaterialTrack* Track, const int32 MaterialIndex);
    FComponentMaterialInfo GetMaterialInfo(class UMovieScenePrimitiveMaterialTrack* Track);
    int32 GetMaterialIndex(class UMovieScenePrimitiveMaterialTrack* Track);
}; // Size: 0x28

class UMovieScenePropertyTrackExtensions : public UBlueprintFunctionLibrary
{

    void SetPropertyNameAndPath(class UMovieScenePropertyTrack* Track, const FName& InPropertyName, FString InPropertyPath);
    void SetObjectPropertyClass(class UMovieSceneObjectPropertyTrack* Track, UClass* PropertyClass);
    void SetByteTrackEnum(class UMovieSceneByteTrack* Track, class UEnum* InEnum);
    FName GetUniqueTrackName(class UMovieScenePropertyTrack* Track);
    FString GetPropertyPath(class UMovieScenePropertyTrack* Track);
    FName GetPropertyName(class UMovieScenePropertyTrack* Track);
    UClass* GetObjectPropertyClass(class UMovieSceneObjectPropertyTrack* Track);
    class UEnum* GetByteTrackEnum(class UMovieSceneByteTrack* Track);
}; // Size: 0x28

class UMovieSceneScriptingActorReferenceChannel : public UMovieSceneScriptingChannel
{

    void SetDefault(FMovieSceneObjectBindingID InDefaultValue);
    void RemoveKey(class UMovieSceneScriptingKey* Key);
    void RemoveDefault();
    bool HasDefault();
    TArray<class UMovieSceneScriptingKey*> GetKeysByIndex(const TArray<int32>& Indices);
    TArray<class UMovieSceneScriptingKey*> GetKeys();
    FMovieSceneObjectBindingID GetDefault();
    class UMovieSceneScriptingActorReferenceKey* AddKey(const FFrameNumber InTime, FMovieSceneObjectBindingID NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit);
}; // Size: 0x60

class UMovieSceneScriptingActorReferenceKey : public UMovieSceneScriptingKey
{

    void SetValue(const FMovieSceneObjectBindingID& InNewValue);
    void SetTime(const FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit);
    FMovieSceneObjectBindingID GetValue();
    FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit);
}; // Size: 0x60

class UMovieSceneScriptingActualFloatKey : public UMovieSceneScriptingFloatKey
{
}; // Size: 0x60

class UMovieSceneScriptingBoolChannel : public UMovieSceneScriptingChannel
{

    void SetDefault(bool InDefaultValue);
    void RemoveKey(class UMovieSceneScriptingKey* Key);
    void RemoveDefault();
    bool HasDefault();
    int32 GetNumKeys();
    TArray<class UMovieSceneScriptingKey*> GetKeysByIndex(const TArray<int32>& Indices);
    TArray<class UMovieSceneScriptingKey*> GetKeys();
    bool GetDefault();
    TArray<bool> EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate);
    FSequencerScriptingRange ComputeEffectiveRange();
    class UMovieSceneScriptingBoolKey* AddKey(const FFrameNumber& InTime, bool NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit);
}; // Size: 0x60

class UMovieSceneScriptingBoolKey : public UMovieSceneScriptingKey
{

    void SetValue(bool InNewValue);
    void SetTime(const FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit);
    bool GetValue();
    FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit);
}; // Size: 0x60

class UMovieSceneScriptingByteChannel : public UMovieSceneScriptingChannel
{

    void SetDefault(uint8 InDefaultValue);
    void RemoveKey(class UMovieSceneScriptingKey* Key);
    void RemoveDefault();
    bool HasDefault();
    TArray<class UMovieSceneScriptingKey*> GetKeysByIndex(const TArray<int32>& Indices);
    TArray<class UMovieSceneScriptingKey*> GetKeys();
    uint8 GetDefault();
    class UMovieSceneScriptingByteKey* AddKey(const FFrameNumber& InTime, uint8 NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation);
}; // Size: 0x60

class UMovieSceneScriptingByteKey : public UMovieSceneScriptingKey
{

    void SetValue(uint8 InNewValue);
    void SetTime(const FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit);
    uint8 GetValue();
    FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit);
}; // Size: 0x60

class UMovieSceneScriptingChannel : public UObject
{
    FName ChannelName;                                                                // 0x0028 (size: 0x8)

}; // Size: 0x30

class UMovieSceneScriptingDoubleAsFloatKey : public UMovieSceneScriptingFloatKey
{
}; // Size: 0x60

class UMovieSceneScriptingDoubleChannel : public UMovieSceneScriptingChannel
{

    void SetPreInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation);
    void SetPostInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation);
    void SetDefault(double InDefaultValue);
    void RemoveKey(class UMovieSceneScriptingKey* Key);
    void RemoveDefault();
    bool HasDefault();
    TEnumAsByte<ERichCurveExtrapolation> GetPreInfinityExtrapolation();
    TEnumAsByte<ERichCurveExtrapolation> GetPostInfinityExtrapolation();
    int32 GetNumKeys();
    TArray<class UMovieSceneScriptingKey*> GetKeysByIndex(const TArray<int32>& Indices);
    TArray<class UMovieSceneScriptingKey*> GetKeys();
    double GetDefault();
    TArray<double> EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate);
    FSequencerScriptingRange ComputeEffectiveRange();
    class UMovieSceneScriptingDoubleKey* AddKey(const FFrameNumber& InTime, double NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation);
}; // Size: 0x60

class UMovieSceneScriptingDoubleKey : public UMovieSceneScriptingKey
{

    void SetValue(double InNewValue);
    void SetTime(const FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit);
    void SetTangentWeightMode(TEnumAsByte<ERichCurveTangentWeightMode> InNewValue);
    void SetTangentMode(TEnumAsByte<ERichCurveTangentMode> InNewValue);
    void SetLeaveTangentWeight(float InNewValue);
    void SetLeaveTangent(float InNewValue);
    void SetInterpolationMode(TEnumAsByte<ERichCurveInterpMode> InNewValue);
    void SetArriveTangentWeight(float InNewValue);
    void SetArriveTangent(float InNewValue);
    double GetValue();
    FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit);
    TEnumAsByte<ERichCurveTangentWeightMode> GetTangentWeightMode();
    TEnumAsByte<ERichCurveTangentMode> GetTangentMode();
    float GetLeaveTangentWeight();
    float GetLeaveTangent();
    TEnumAsByte<ERichCurveInterpMode> GetInterpolationMode();
    float GetArriveTangentWeight();
    float GetArriveTangent();
}; // Size: 0x60

class UMovieSceneScriptingEventChannel : public UMovieSceneScriptingChannel
{

    void RemoveKey(class UMovieSceneScriptingKey* Key);
    TArray<class UMovieSceneScriptingKey*> GetKeysByIndex(const TArray<int32>& Indices);
    TArray<class UMovieSceneScriptingKey*> GetKeys();
    class UMovieSceneScriptingEventKey* AddKey(const FFrameNumber& InTime, FMovieSceneEvent NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit);
}; // Size: 0x60

class UMovieSceneScriptingEventKey : public UMovieSceneScriptingKey
{

    void SetValue(const FMovieSceneEvent& InNewValue);
    void SetTime(const FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit);
    FMovieSceneEvent GetValue();
    FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit);
}; // Size: 0x60

class UMovieSceneScriptingFloatChannel : public UMovieSceneScriptingChannel
{

    void SetPreInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation);
    void SetPostInfinityExtrapolation(TEnumAsByte<ERichCurveExtrapolation> InExtrapolation);
    void SetDefault(float InDefaultValue);
    void RemoveKey(class UMovieSceneScriptingKey* Key);
    void RemoveDefault();
    bool HasDefault();
    TEnumAsByte<ERichCurveExtrapolation> GetPreInfinityExtrapolation();
    TEnumAsByte<ERichCurveExtrapolation> GetPostInfinityExtrapolation();
    int32 GetNumKeys();
    TArray<class UMovieSceneScriptingKey*> GetKeysByIndex(const TArray<int32>& Indices);
    TArray<class UMovieSceneScriptingKey*> GetKeys();
    float GetDefault();
    TArray<float> EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate);
    FSequencerScriptingRange ComputeEffectiveRange();
    class UMovieSceneScriptingFloatKey* AddKey(const FFrameNumber& InTime, float NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit, EMovieSceneKeyInterpolation InInterpolation);
}; // Size: 0x80

class UMovieSceneScriptingFloatKey : public UMovieSceneScriptingKey
{

    void SetValue(float InNewValue);
    void SetTime(const FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit);
    void SetTangentWeightMode(TEnumAsByte<ERichCurveTangentWeightMode> InNewValue);
    void SetTangentMode(TEnumAsByte<ERichCurveTangentMode> InNewValue);
    void SetLeaveTangentWeight(float InNewValue);
    void SetLeaveTangent(float InNewValue);
    void SetInterpolationMode(TEnumAsByte<ERichCurveInterpMode> InNewValue);
    void SetArriveTangentWeight(float InNewValue);
    void SetArriveTangent(float InNewValue);
    float GetValue();
    FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit);
    TEnumAsByte<ERichCurveTangentWeightMode> GetTangentWeightMode();
    TEnumAsByte<ERichCurveTangentMode> GetTangentMode();
    float GetLeaveTangentWeight();
    float GetLeaveTangent();
    TEnumAsByte<ERichCurveInterpMode> GetInterpolationMode();
    float GetArriveTangentWeight();
    float GetArriveTangent();
}; // Size: 0x40

class UMovieSceneScriptingIntegerChannel : public UMovieSceneScriptingChannel
{

    void SetDefault(int32 InDefaultValue);
    void RemoveKey(class UMovieSceneScriptingKey* Key);
    void RemoveDefault();
    bool HasDefault();
    int32 GetNumKeys();
    TArray<class UMovieSceneScriptingKey*> GetKeysByIndex(const TArray<int32>& Indices);
    TArray<class UMovieSceneScriptingKey*> GetKeys();
    int32 GetDefault();
    TArray<int32> EvaluateKeys(FSequencerScriptingRange Range, FFrameRate FrameRate);
    class UMovieSceneScriptingIntegerKey* AddKey(const FFrameNumber& InTime, int32 NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit);
}; // Size: 0x60

class UMovieSceneScriptingIntegerKey : public UMovieSceneScriptingKey
{

    void SetValue(int32 InNewValue);
    void SetTime(const FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit);
    int32 GetValue();
    FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit);
}; // Size: 0x60

class UMovieSceneScriptingKey : public UObject
{
}; // Size: 0x40

class UMovieSceneScriptingObjectPathChannel : public UMovieSceneScriptingChannel
{

    void SetDefault(class UObject* InDefaultValue);
    void RemoveKey(class UMovieSceneScriptingKey* Key);
    void RemoveDefault();
    bool HasDefault();
    TArray<class UMovieSceneScriptingKey*> GetKeysByIndex(const TArray<int32>& Indices);
    TArray<class UMovieSceneScriptingKey*> GetKeys();
    class UObject* GetDefault();
    class UMovieSceneScriptingObjectPathKey* AddKey(const FFrameNumber InTime, class UObject* NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit);
}; // Size: 0x60

class UMovieSceneScriptingObjectPathKey : public UMovieSceneScriptingKey
{

    void SetValue(class UObject* InNewValue);
    void SetTime(const FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit);
    class UObject* GetValue();
    FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit);
}; // Size: 0x60

class UMovieSceneScriptingStringChannel : public UMovieSceneScriptingChannel
{

    void SetDefault(FString InDefaultValue);
    void RemoveKey(class UMovieSceneScriptingKey* Key);
    void RemoveDefault();
    bool HasDefault();
    TArray<class UMovieSceneScriptingKey*> GetKeysByIndex(const TArray<int32>& Indices);
    TArray<class UMovieSceneScriptingKey*> GetKeys();
    FString GetDefault();
    class UMovieSceneScriptingStringKey* AddKey(const FFrameNumber& InTime, FString NewValue, float SubFrame, EMovieSceneTimeUnit TimeUnit);
}; // Size: 0x60

class UMovieSceneScriptingStringKey : public UMovieSceneScriptingKey
{

    void SetValue(FString InNewValue);
    void SetTime(const FFrameNumber& NewFrameNumber, float SubFrame, EMovieSceneTimeUnit TimeUnit);
    FString GetValue();
    FFrameTime GetTime(EMovieSceneTimeUnit TimeUnit);
}; // Size: 0x60

class UMovieSceneSectionExtensions : public UBlueprintFunctionLibrary
{

    void SetStartFrameSeconds(class UMovieSceneSection* Section, float StartTime);
    void SetStartFrameBounded(class UMovieSceneSection* Section, bool bIsBounded);
    void SetStartFrame(class UMovieSceneSection* Section, int32 StartFrame);
    void SetRangeSeconds(class UMovieSceneSection* Section, float StartTime, float EndTime);
    void SetRange(class UMovieSceneSection* Section, int32 StartFrame, int32 EndFrame);
    void SetEndFrameSeconds(class UMovieSceneSection* Section, float EndTime);
    void SetEndFrameBounded(class UMovieSceneSection* Section, bool bIsBounded);
    void SetEndFrame(class UMovieSceneSection* Section, int32 EndFrame);
    bool HasStartFrame(class UMovieSceneSection* Section);
    bool HasEndFrame(class UMovieSceneSection* Section);
    float GetStartFrameSeconds(class UMovieSceneSection* Section);
    int32 GetStartFrame(class UMovieSceneSection* Section);
    int32 GetParentSequenceFrame(class UMovieSceneSubSection* Section, int32 InFrame, class UMovieSceneSequence* ParentSequence);
    float GetEndFrameSeconds(class UMovieSceneSection* Section);
    int32 GetEndFrame(class UMovieSceneSection* Section);
    TArray<class UMovieSceneScriptingChannel*> GetChannelsByType(class UMovieSceneSection* Section, TSubclassOf<class UMovieSceneScriptingChannel> ChannelType);
    class UMovieSceneScriptingChannel* GetChannel(class UMovieSceneSection* Section, const FName& ChannelName);
    float GetAutoSizeStartFrameSeconds(class UMovieSceneSection* Section);
    int32 GetAutoSizeStartFrame(class UMovieSceneSection* Section);
    bool GetAutoSizeHasStartFrame(class UMovieSceneSection* Section);
    bool GetAutoSizeHasEndFrame(class UMovieSceneSection* Section);
    float GetAutoSizeEndFrameSeconds(class UMovieSceneSection* Section);
    int32 GetAutoSizeEndFrame(class UMovieSceneSection* Section);
    TArray<class UMovieSceneScriptingChannel*> GetAllChannels(class UMovieSceneSection* Section);
}; // Size: 0x28

class UMovieSceneSequenceExtensions : public UBlueprintFunctionLibrary
{

    void SortMarkedFrames(class UMovieSceneSequence* Sequence);
    void SetWorkRangeStart(class UMovieSceneSequence* InSequence, double StartTimeInSeconds);
    void SetWorkRangeEnd(class UMovieSceneSequence* InSequence, double EndTimeInSeconds);
    void SetViewRangeStart(class UMovieSceneSequence* InSequence, double StartTimeInSeconds);
    void SetViewRangeEnd(class UMovieSceneSequence* InSequence, double EndTimeInSeconds);
    void SetTickResolutionDirectly(class UMovieSceneSequence* Sequence, FFrameRate TickResolution);
    void SetTickResolution(class UMovieSceneSequence* Sequence, FFrameRate TickResolution);
    void SetReadOnly(class UMovieSceneSequence* Sequence, bool bInReadOnly);
    void SetPlaybackStartSeconds(class UMovieSceneSequence* Sequence, float StartTime);
    void SetPlaybackStart(class UMovieSceneSequence* Sequence, int32 StartFrame);
    void SetPlaybackRangeLocked(class UMovieSceneSequence* Sequence, bool bInLocked);
    void SetPlaybackEndSeconds(class UMovieSceneSequence* Sequence, float EndTime);
    void SetPlaybackEnd(class UMovieSceneSequence* Sequence, int32 EndFrame);
    void SetMarkedFramesLocked(class UMovieSceneSequence* Sequence, bool bInLocked);
    void SetMarkedFrameInSequence(class UMovieSceneSequence* Sequence, int32 InMarkIndex, FFrameNumber InFrameNumber, EMovieSceneTimeUnit TimeUnit);
    void SetMarkedFrame(class UMovieSceneSequence* Sequence, int32 InMarkIndex, FFrameNumber InFrameNumber);
    void SetEvaluationType(class UMovieSceneSequence* InSequence, EMovieSceneEvaluationType InEvaluationType);
    void SetDisplayRate(class UMovieSceneSequence* Sequence, FFrameRate DisplayRate);
    void SetClockSource(class UMovieSceneSequence* InSequence, EUpdateClockSource InClockSource);
    FMovieSceneBindingProxy ResolveBindingID(class UMovieSceneSequence* RootSequence, FMovieSceneObjectBindingID InObjectBindingID);
    bool RemoveTrack(class UMovieSceneSequence* Sequence, class UMovieSceneTrack* Track);
    void RemoveRootFolderFromSequence(class UMovieSceneSequence* Sequence, class UMovieSceneFolder* Folder);
    bool RemoveMasterTrack(class UMovieSceneSequence* Sequence, class UMovieSceneTrack* Track);
    FSequencerScriptingRange MakeRangeSeconds(class UMovieSceneSequence* Sequence, float StartTime, float Duration);
    FSequencerScriptingRange MakeRange(class UMovieSceneSequence* Sequence, int32 StartFrame, int32 Duration);
    TArray<class UObject*> LocateBoundObjects(class UMovieSceneSequence* Sequence, const FMovieSceneBindingProxy& InBinding, class UObject* Context);
    bool IsReadOnly(class UMovieSceneSequence* Sequence);
    bool IsPlaybackRangeLocked(class UMovieSceneSequence* Sequence);
    double GetWorkRangeStart(class UMovieSceneSequence* InSequence);
    double GetWorkRangeEnd(class UMovieSceneSequence* InSequence);
    double GetViewRangeStart(class UMovieSceneSequence* InSequence);
    double GetViewRangeEnd(class UMovieSceneSequence* InSequence);
    TArray<class UMovieSceneTrack*> GetTracks(class UMovieSceneSequence* Sequence);
    FFrameRate GetTickResolution(class UMovieSceneSequence* Sequence);
    TArray<FMovieSceneBindingProxy> GetSpawnables(class UMovieSceneSequence* Sequence);
    TArray<class UMovieSceneFolder*> GetRootFoldersInSequence(class UMovieSceneSequence* Sequence);
    TArray<FMovieSceneBindingProxy> GetPossessables(class UMovieSceneSequence* Sequence);
    FMovieSceneObjectBindingID GetPortableBindingID(class UMovieSceneSequence* RootSequence, class UMovieSceneSequence* DestinationSequence, const FMovieSceneBindingProxy& InBinding);
    float GetPlaybackStartSeconds(class UMovieSceneSequence* Sequence);
    int32 GetPlaybackStart(class UMovieSceneSequence* Sequence);
    FSequencerScriptingRange GetPlaybackRange(class UMovieSceneSequence* Sequence);
    float GetPlaybackEndSeconds(class UMovieSceneSequence* Sequence);
    int32 GetPlaybackEnd(class UMovieSceneSequence* Sequence);
    class UMovieScene* GetMovieScene(class UMovieSceneSequence* Sequence);
    TArray<class UMovieSceneTrack*> GetMasterTracks(class UMovieSceneSequence* Sequence);
    TArray<FMovieSceneMarkedFrame> GetMarkedFramesFromSequence(class UMovieSceneSequence* Sequence, EMovieSceneTimeUnit TimeUnit);
    TArray<FMovieSceneMarkedFrame> GetMarkedFrames(class UMovieSceneSequence* Sequence);
    EMovieSceneEvaluationType GetEvaluationType(class UMovieSceneSequence* InSequence);
    FFrameRate GetDisplayRate(class UMovieSceneSequence* Sequence);
    EUpdateClockSource GetClockSource(class UMovieSceneSequence* InSequence);
    TArray<FMovieSceneBindingProxy> GetBindings(class UMovieSceneSequence* Sequence);
    FMovieSceneObjectBindingID GetBindingID(class UMovieSceneSequence* Sequence, const FMovieSceneBindingProxy& InBinding);
    TArray<class UMovieSceneTrack*> FindTracksByType(class UMovieSceneSequence* Sequence, TSubclassOf<class UMovieSceneTrack> TrackType);
    TArray<class UMovieSceneTrack*> FindTracksByExactType(class UMovieSceneSequence* Sequence, TSubclassOf<class UMovieSceneTrack> TrackType);
    int32 FindNextMarkedFrameInSequence(class UMovieSceneSequence* Sequence, FFrameNumber InFrameNumber, bool bForward, EMovieSceneTimeUnit TimeUnit);
    int32 FindNextMarkedFrame(class UMovieSceneSequence* Sequence, FFrameNumber InFrameNumber, bool bForward);
    TArray<class UMovieSceneTrack*> FindMasterTracksByType(class UMovieSceneSequence* Sequence, TSubclassOf<class UMovieSceneTrack> TrackType);
    TArray<class UMovieSceneTrack*> FindMasterTracksByExactType(class UMovieSceneSequence* Sequence, TSubclassOf<class UMovieSceneTrack> TrackType);
    int32 FindMarkedFrameByLabel(class UMovieSceneSequence* Sequence, FString InLabel);
    int32 FindMarkedFrameByFrameNumberInSequence(class UMovieSceneSequence* Sequence, FFrameNumber InFrameNumber, EMovieSceneTimeUnit TimeUnit);
    int32 FindMarkedFrameByFrameNumber(class UMovieSceneSequence* Sequence, FFrameNumber InFrameNumber);
    FMovieSceneBindingProxy FindBindingByName(class UMovieSceneSequence* Sequence, FString Name);
    FMovieSceneBindingProxy FindBindingById(class UMovieSceneSequence* Sequence, FGuid BindingID);
    void DeleteMarkedFrames(class UMovieSceneSequence* Sequence);
    void DeleteMarkedFrame(class UMovieSceneSequence* Sequence, int32 DeleteIndex);
    bool AreMarkedFramesLocked(class UMovieSceneSequence* Sequence);
    class UMovieSceneTrack* AddTrack(class UMovieSceneSequence* Sequence, TSubclassOf<class UMovieSceneTrack> TrackType);
    FMovieSceneBindingProxy AddSpawnableFromInstance(class UMovieSceneSequence* Sequence, class UObject* ObjectToSpawn);
    FMovieSceneBindingProxy AddSpawnableFromClass(class UMovieSceneSequence* Sequence, UClass* ClassToSpawn);
    class UMovieSceneFolder* AddRootFolderToSequence(class UMovieSceneSequence* Sequence, FString NewFolderName);
    FMovieSceneBindingProxy AddPossessable(class UMovieSceneSequence* Sequence, class UObject* ObjectToPossess);
    class UMovieSceneTrack* AddMasterTrack(class UMovieSceneSequence* Sequence, TSubclassOf<class UMovieSceneTrack> TrackType);
    int32 AddMarkedFrameToSequence(class UMovieSceneSequence* Sequence, const FMovieSceneMarkedFrame& InMarkedFrame, EMovieSceneTimeUnit TimeUnit);
    int32 AddMarkedFrame(class UMovieSceneSequence* Sequence, const FMovieSceneMarkedFrame& InMarkedFrame);
}; // Size: 0x28

class UMovieSceneTrackExtensions : public UBlueprintFunctionLibrary
{

    void SetTrackRowDisplayName(class UMovieSceneTrack* Track, const FText& InName, int32 RowIndex);
    void SetSortingOrder(class UMovieSceneTrack* Track, int32 SortingOrder);
    void SetSectionToKey(class UMovieSceneTrack* Track, class UMovieSceneSection* Section);
    void SetDisplayName(class UMovieSceneTrack* Track, const FText& InName);
    void SetColorTint(class UMovieSceneTrack* Track, const FColor& ColorTint);
    void RemoveSection(class UMovieSceneTrack* Track, class UMovieSceneSection* Section);
    FText GetTrackRowDisplayName(class UMovieSceneTrack* Track, int32 RowIndex);
    int32 GetSortingOrder(class UMovieSceneTrack* Track);
    class UMovieSceneSection* GetSectionToKey(class UMovieSceneTrack* Track);
    TArray<class UMovieSceneSection*> GetSections(class UMovieSceneTrack* Track);
    FText GetDisplayName(class UMovieSceneTrack* Track);
    FColor GetColorTint(class UMovieSceneTrack* Track);
    class UMovieSceneSection* AddSection(class UMovieSceneTrack* Track);
}; // Size: 0x28

class USequencerScriptingRangeExtensions : public UBlueprintFunctionLibrary
{

    void SetStartSeconds(FSequencerScriptingRange& Range, float Start);
    void SetStartFrame(FSequencerScriptingRange& Range, int32 Start);
    void SetEndSeconds(FSequencerScriptingRange& Range, float End);
    void SetEndFrame(FSequencerScriptingRange& Range, int32 End);
    void RemoveStart(FSequencerScriptingRange& Range);
    void RemoveEnd(FSequencerScriptingRange& Range);
    bool HasStart(const FSequencerScriptingRange& Range);
    bool HasEnd(const FSequencerScriptingRange& Range);
    float GetStartSeconds(const FSequencerScriptingRange& Range);
    int32 GetStartFrame(const FSequencerScriptingRange& Range);
    float GetEndSeconds(const FSequencerScriptingRange& Range);
    int32 GetEndFrame(const FSequencerScriptingRange& Range);
}; // Size: 0x28

#endif
