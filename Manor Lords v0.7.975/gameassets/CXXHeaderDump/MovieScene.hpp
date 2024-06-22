#ifndef UE4SS_SDK_MovieScene_HPP
#define UE4SS_SDK_MovieScene_HPP

#include "MovieScene_enums.hpp"

struct FEasingComponentData
{
    class UMovieSceneSection* Section;                                                // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FGeneratedMovieSceneKeyStruct
{
}; // Size: 0x50

struct FMovieSceneBinding
{
    FGuid ObjectGuid;                                                                 // 0x0000 (size: 0x10)
    FString BindingName;                                                              // 0x0010 (size: 0x10)
    TArray<class UMovieSceneTrack*> Tracks;                                           // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FMovieSceneBindingOverrideData
{
    FMovieSceneObjectBindingID ObjectBindingID;                                       // 0x0000 (size: 0x18)
    TWeakObjectPtr<class UObject> Object;                                             // 0x0018 (size: 0x8)
    bool bOverridesDefault;                                                           // 0x0020 (size: 0x1)

}; // Size: 0x24

struct FMovieSceneBoolChannel : public FMovieSceneChannel
{
    TArray<FFrameNumber> Times;                                                       // 0x0008 (size: 0x10)
    bool DefaultValue;                                                                // 0x0018 (size: 0x1)
    bool bHasDefaultValue;                                                            // 0x0019 (size: 0x1)
    TArray<bool> Values;                                                              // 0x0020 (size: 0x10)

}; // Size: 0x90

struct FMovieSceneByteChannel : public FMovieSceneChannel
{
    TArray<FFrameNumber> Times;                                                       // 0x0008 (size: 0x10)
    uint8 DefaultValue;                                                               // 0x0018 (size: 0x1)
    bool bHasDefaultValue;                                                            // 0x0019 (size: 0x1)
    TArray<uint8> Values;                                                             // 0x0020 (size: 0x10)
    class UEnum* Enum;                                                                // 0x0030 (size: 0x8)

}; // Size: 0x98

struct FMovieSceneChannel
{
}; // Size: 0x8

struct FMovieSceneCompiledSequenceFlagStruct
{
    uint8 bParentSequenceRequiresLowerFence;                                          // 0x0000 (size: 0x1)
    uint8 bParentSequenceRequiresUpperFence;                                          // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FMovieSceneDeterminismData
{
    TArray<FFrameTime> Fences;                                                        // 0x0000 (size: 0x10)
    bool bParentSequenceRequiresLowerFence;                                           // 0x0010 (size: 0x1)
    bool bParentSequenceRequiresUpperFence;                                           // 0x0011 (size: 0x1)

}; // Size: 0x18

struct FMovieSceneEasingSettings
{
    int32 AutoEaseInDuration;                                                         // 0x0000 (size: 0x4)
    int32 AutoEaseOutDuration;                                                        // 0x0004 (size: 0x4)
    TScriptInterface<class IMovieSceneEasingFunction> EaseIn;                         // 0x0008 (size: 0x10)
    bool bManualEaseIn;                                                               // 0x0018 (size: 0x1)
    int32 ManualEaseInDuration;                                                       // 0x001C (size: 0x4)
    TScriptInterface<class IMovieSceneEasingFunction> easeOut;                        // 0x0020 (size: 0x10)
    bool bManualEaseOut;                                                              // 0x0030 (size: 0x1)
    int32 ManualEaseOutDuration;                                                      // 0x0034 (size: 0x4)

}; // Size: 0x38

struct FMovieSceneEditorData
{
    TMap<class FString, class FMovieSceneExpansionState> ExpansionStates;             // 0x0000 (size: 0x50)
    TArray<FString> PinnedNodes;                                                      // 0x0050 (size: 0x10)
    double ViewStart;                                                                 // 0x0060 (size: 0x8)
    double ViewEnd;                                                                   // 0x0068 (size: 0x8)
    double WorkStart;                                                                 // 0x0070 (size: 0x8)
    double WorkEnd;                                                                   // 0x0078 (size: 0x8)
    TSet<FFrameNumber> MarkedFrames;                                                  // 0x0080 (size: 0x50)
    FFloatRange WorkingRange;                                                         // 0x00D0 (size: 0x10)
    FFloatRange ViewRange;                                                            // 0x00E0 (size: 0x10)

}; // Size: 0xF0

struct FMovieSceneEmptyStruct
{
}; // Size: 0x1

struct FMovieSceneEntityComponentField
{
    FMovieSceneEvaluationFieldEntityTree PersistentEntityTree;                        // 0x0000 (size: 0x60)
    FMovieSceneEvaluationFieldEntityTree OneShotEntityTree;                           // 0x0060 (size: 0x60)
    TArray<FMovieSceneEvaluationFieldEntity> Entities;                                // 0x00C0 (size: 0x10)
    TArray<FMovieSceneEvaluationFieldEntityMetaData> EntityMetaData;                  // 0x00D0 (size: 0x10)
    TArray<FMovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData;            // 0x00E0 (size: 0x10)

}; // Size: 0xF0

struct FMovieSceneEntitySystemGraph
{
    FMovieSceneEntitySystemGraphNodes Nodes;                                          // 0x0080 (size: 0x38)

}; // Size: 0x138

struct FMovieSceneEntitySystemGraphNode
{
    class UMovieSceneEntitySystem* System;                                            // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FMovieSceneEntitySystemGraphNodes
{
}; // Size: 0x38

struct FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase
{
    EMovieSceneCompletionMode CompletionMode;                                         // 0x0010 (size: 0x1)
    TWeakObjectPtr<class UMovieSceneSection> SourceSectionPtr;                        // 0x0014 (size: 0x8)

}; // Size: 0x20

struct FMovieSceneEvalTemplateBase
{
}; // Size: 0x10

struct FMovieSceneEvalTemplatePtr
{
}; // Size: 0x88

struct FMovieSceneEvaluationField
{
    TArray<FMovieSceneFrameRange> Ranges;                                             // 0x0000 (size: 0x10)
    TArray<FMovieSceneEvaluationGroup> Groups;                                        // 0x0010 (size: 0x10)
    TArray<FMovieSceneEvaluationMetaData> MetaData;                                   // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FMovieSceneEvaluationFieldEntity
{
    FMovieSceneEvaluationFieldEntityKey Key;                                          // 0x0000 (size: 0xC)
    int32 SharedMetaDataIndex;                                                        // 0x000C (size: 0x4)

}; // Size: 0x10

struct FMovieSceneEvaluationFieldEntityKey
{
    TWeakObjectPtr<class UObject> EntityOwner;                                        // 0x0000 (size: 0x8)
    uint32 EntityID;                                                                  // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FMovieSceneEvaluationFieldEntityMetaData
{
    FString OverrideBoundPropertyPath;                                                // 0x0000 (size: 0x10)
    FFrameNumber ForcedTime;                                                          // 0x0010 (size: 0x4)
    ESectionEvaluationFlags Flags;                                                    // 0x0018 (size: 0x1)
    uint8 bEvaluateInSequencePreRoll;                                                 // 0x0019 (size: 0x1)
    uint8 bEvaluateInSequencePostRoll;                                                // 0x0019 (size: 0x1)

}; // Size: 0x20

struct FMovieSceneEvaluationFieldEntityTree
{
}; // Size: 0x60

struct FMovieSceneEvaluationFieldSegmentPtr : public FMovieSceneEvaluationFieldTrackPtr
{
    FMovieSceneSegmentIdentifier SegmentID;                                           // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FMovieSceneEvaluationFieldSharedEntityMetaData
{
    FGuid ObjectBindingID;                                                            // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMovieSceneEvaluationFieldTrackPtr
{
    FMovieSceneSequenceID SequenceID;                                                 // 0x0000 (size: 0x4)
    FMovieSceneTrackIdentifier TrackIdentifier;                                       // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FMovieSceneEvaluationGroup
{
    TArray<FMovieSceneEvaluationGroupLUTIndex> LUTIndices;                            // 0x0000 (size: 0x10)
    TArray<FMovieSceneFieldEntry_EvaluationTrack> TrackLUT;                           // 0x0010 (size: 0x10)
    TArray<FMovieSceneFieldEntry_ChildTemplate> SectionLUT;                           // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FMovieSceneEvaluationGroupLUTIndex
{
    int32 NumInitPtrs;                                                                // 0x0000 (size: 0x4)
    int32 NumEvalPtrs;                                                                // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FMovieSceneEvaluationHookComponent
{
    TScriptInterface<class IMovieSceneEvaluationHook> Interface;                      // 0x0000 (size: 0x10)

}; // Size: 0x20

struct FMovieSceneEvaluationHookEvent
{
    FMovieSceneEvaluationHookComponent Hook;                                          // 0x0000 (size: 0x20)

}; // Size: 0x38

struct FMovieSceneEvaluationHookEventContainer
{
    TArray<FMovieSceneEvaluationHookEvent> events;                                    // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMovieSceneEvaluationInstanceKey
{
}; // Size: 0x4

struct FMovieSceneEvaluationKey
{
    FMovieSceneSequenceID SequenceID;                                                 // 0x0000 (size: 0x4)
    FMovieSceneTrackIdentifier TrackIdentifier;                                       // 0x0004 (size: 0x4)
    uint32 SectionIndex;                                                              // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FMovieSceneEvaluationMetaData
{
    TArray<FMovieSceneSequenceID> ActiveSequences;                                    // 0x0000 (size: 0x10)
    TArray<FMovieSceneOrderedEvaluationKey> ActiveEntities;                           // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FMovieSceneEvaluationOperand
{
    FGuid ObjectBindingID;                                                            // 0x0000 (size: 0x10)
    FMovieSceneSequenceID SequenceID;                                                 // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FMovieSceneEvaluationTemplate
{
    TMap<class FMovieSceneTrackIdentifier, class FMovieSceneEvaluationTrack> Tracks;  // 0x0000 (size: 0x50)
    FGuid SequenceSignature;                                                          // 0x00A0 (size: 0x10)
    FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber;                   // 0x00B0 (size: 0x4)
    FMovieSceneTemplateGenerationLedger TemplateLedger;                               // 0x00B8 (size: 0xA8)

}; // Size: 0x160

struct FMovieSceneEvaluationTemplateSerialNumber
{
    uint32 Value;                                                                     // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FMovieSceneEvaluationTrack
{
    FGuid ObjectBindingID;                                                            // 0x0000 (size: 0x10)
    uint16 EvaluationPriority;                                                        // 0x0010 (size: 0x2)
    EEvaluationMethod EvaluationMethod;                                               // 0x0012 (size: 0x1)
    TWeakObjectPtr<class UMovieSceneTrack> SourceTrack;                               // 0x0014 (size: 0x8)
    TArray<FMovieSceneEvalTemplatePtr> ChildTemplates;                                // 0x0020 (size: 0x10)
    FMovieSceneTrackImplementationPtr TrackTemplate;                                  // 0x0030 (size: 0x38)
    FName EvaluationGroup;                                                            // 0x0068 (size: 0x8)
    uint8 bEvaluateInPreroll;                                                         // 0x0070 (size: 0x1)
    uint8 bEvaluateInPostroll;                                                        // 0x0070 (size: 0x1)
    uint8 bTearDownPriority;                                                          // 0x0070 (size: 0x1)

}; // Size: 0x78

struct FMovieSceneExpansionState
{
    bool bExpanded;                                                                   // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FMovieSceneFieldEntry_ChildTemplate
{
    uint16 ChildIndex;                                                                // 0x0000 (size: 0x2)
    ESectionEvaluationFlags Flags;                                                    // 0x0002 (size: 0x1)
    FFrameNumber ForcedTime;                                                          // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FMovieSceneFieldEntry_EvaluationTrack
{
    FMovieSceneEvaluationFieldTrackPtr TrackPtr;                                      // 0x0000 (size: 0x8)
    uint16 NumChildren;                                                               // 0x0008 (size: 0x2)

}; // Size: 0xC

struct FMovieSceneFloatChannel : public FMovieSceneChannel
{
    TEnumAsByte<ERichCurveExtrapolation> PreInfinityExtrap;                           // 0x0008 (size: 0x1)
    TEnumAsByte<ERichCurveExtrapolation> PostInfinityExtrap;                          // 0x0009 (size: 0x1)
    TArray<FFrameNumber> Times;                                                       // 0x0010 (size: 0x10)
    TArray<FMovieSceneFloatValue> Values;                                             // 0x0020 (size: 0x10)
    float DefaultValue;                                                               // 0x0030 (size: 0x4)
    bool bHasDefaultValue;                                                            // 0x0034 (size: 0x1)
    FMovieSceneKeyHandleMap KeyHandles;                                               // 0x0038 (size: 0x60)
    FFrameRate TickResolution;                                                        // 0x0098 (size: 0x8)

}; // Size: 0xA0

struct FMovieSceneFloatValue
{
    float Value;                                                                      // 0x0000 (size: 0x4)
    FMovieSceneTangentData Tangent;                                                   // 0x0004 (size: 0x14)
    TEnumAsByte<ERichCurveInterpMode> InterpMode;                                     // 0x0018 (size: 0x1)
    TEnumAsByte<ERichCurveTangentMode> TangentMode;                                   // 0x0019 (size: 0x1)
    uint8 PaddingByte;                                                                // 0x001A (size: 0x1)

}; // Size: 0x1C

struct FMovieSceneFrameRange
{
}; // Size: 0x10

struct FMovieSceneIntegerChannel : public FMovieSceneChannel
{
    TArray<FFrameNumber> Times;                                                       // 0x0008 (size: 0x10)
    int32 DefaultValue;                                                               // 0x0018 (size: 0x4)
    bool bHasDefaultValue;                                                            // 0x001C (size: 0x1)
    TArray<int32> Values;                                                             // 0x0020 (size: 0x10)

}; // Size: 0x90

struct FMovieSceneKeyHandleMap : public FKeyHandleLookupTable
{
}; // Size: 0x60

struct FMovieSceneKeyStruct
{
}; // Size: 0x8

struct FMovieSceneKeyTimeStruct : public FMovieSceneKeyStruct
{
    FFrameNumber Time;                                                                // 0x0008 (size: 0x4)

}; // Size: 0x28

struct FMovieSceneMarkedFrame
{
    FFrameNumber FrameNumber;                                                         // 0x0000 (size: 0x4)
    FString Label;                                                                    // 0x0008 (size: 0x10)
    bool bIsDeterminismFence;                                                         // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FMovieSceneNestedSequenceTransform
{
    FMovieSceneTimeTransform LinearTransform;                                         // 0x0000 (size: 0xC)
    FMovieSceneTimeWarping Warping;                                                   // 0x000C (size: 0x8)

}; // Size: 0x14

struct FMovieSceneObjectBindingID
{
    FGuid Guid;                                                                       // 0x0000 (size: 0x10)
    int32 SequenceID;                                                                 // 0x0010 (size: 0x4)
    int32 ResolveParentIndex;                                                         // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FMovieSceneObjectBindingIDs
{
    TArray<FMovieSceneObjectBindingID> IDs;                                           // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMovieSceneObjectPathChannel : public FMovieSceneChannel
{
    UClass* PropertyClass;                                                            // 0x0008 (size: 0x8)
    TArray<FFrameNumber> Times;                                                       // 0x0010 (size: 0x10)
    TArray<FMovieSceneObjectPathChannelKeyValue> Values;                              // 0x0020 (size: 0x10)
    FMovieSceneObjectPathChannelKeyValue DefaultValue;                                // 0x0030 (size: 0x30)

}; // Size: 0xC0

struct FMovieSceneObjectPathChannelKeyValue
{
    TSoftObjectPtr<UObject> SoftPtr;                                                  // 0x0000 (size: 0x28)
    class UObject* HardPtr;                                                           // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FMovieSceneOrderedEvaluationKey
{
    FMovieSceneEvaluationKey Key;                                                     // 0x0000 (size: 0xC)
    uint16 SetupIndex;                                                                // 0x000C (size: 0x2)
    uint16 TearDownIndex;                                                             // 0x000E (size: 0x2)

}; // Size: 0x10

struct FMovieScenePossessable
{
    TArray<FName> Tags;                                                               // 0x0000 (size: 0x10)
    FGuid Guid;                                                                       // 0x0010 (size: 0x10)
    FString Name;                                                                     // 0x0020 (size: 0x10)
    UClass* PossessedObjectClass;                                                     // 0x0030 (size: 0x8)
    FGuid ParentGuid;                                                                 // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FMovieScenePropertyBinding
{
    FName PropertyName;                                                               // 0x0000 (size: 0x8)
    FName PropertyPath;                                                               // 0x0008 (size: 0x8)
    bool bCanUseClassLookup;                                                          // 0x0010 (size: 0x1)

}; // Size: 0x14

struct FMovieScenePropertySectionData
{
    FName PropertyName;                                                               // 0x0000 (size: 0x8)
    FString PropertyPath;                                                             // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FMovieScenePropertySectionTemplate : public FMovieSceneEvalTemplate
{
    FMovieScenePropertySectionData PropertyData;                                      // 0x0020 (size: 0x18)

}; // Size: 0x38

struct FMovieSceneRootEvaluationTemplateInstance
{
    TWeakObjectPtr<class UMovieSceneSequence> WeakRootSequence;                       // 0x0000 (size: 0x8)
    class UMovieSceneCompiledDataManager* CompiledDataManager;                        // 0x0008 (size: 0x8)
    class UMovieSceneEntitySystemLinker* EntitySystemLinker;                          // 0x0018 (size: 0x8)
    TMap<class FMovieSceneSequenceID, class UObject*> DirectorInstances;              // 0x0090 (size: 0x50)

}; // Size: 0xE8

struct FMovieSceneSectionEvalOptions
{
    bool bCanEditCompletionMode;                                                      // 0x0000 (size: 0x1)
    EMovieSceneCompletionMode CompletionMode;                                         // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FMovieSceneSectionGroup
{
    TArray<TWeakObjectPtr<UMovieSceneSection>> Sections;                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMovieSceneSectionParameters
{
    FFrameNumber StartFrameOffset;                                                    // 0x0000 (size: 0x4)
    bool bCanLoop;                                                                    // 0x0004 (size: 0x1)
    FFrameNumber EndFrameOffset;                                                      // 0x0008 (size: 0x4)
    FFrameNumber FirstLoopStartFrameOffset;                                           // 0x000C (size: 0x4)
    float TimeScale;                                                                  // 0x0010 (size: 0x4)
    int32 HierarchicalBias;                                                           // 0x0014 (size: 0x4)
    float StartOffset;                                                                // 0x0018 (size: 0x4)
    float PrerollTime;                                                                // 0x001C (size: 0x4)
    float PostrollTime;                                                               // 0x0020 (size: 0x4)

}; // Size: 0x24

struct FMovieSceneSegment
{
}; // Size: 0x58

struct FMovieSceneSegmentIdentifier
{
    int32 IdentifierIndex;                                                            // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FMovieSceneSequenceActorPointers
{
    class AActor* SequenceActor;                                                      // 0x0000 (size: 0x8)
    TScriptInterface<class IMovieSceneSequenceActor> SequenceActorInterface;          // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FMovieSceneSequenceCompilerMaskStruct
{
    uint8 bHierarchy;                                                                 // 0x0000 (size: 0x1)
    uint8 bEvaluationTemplate;                                                        // 0x0000 (size: 0x1)
    uint8 bEvaluationTemplateField;                                                   // 0x0000 (size: 0x1)
    uint8 bEntityComponentField;                                                      // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FMovieSceneSequenceHierarchy
{
    FMovieSceneSequenceHierarchyNode RootNode;                                        // 0x0000 (size: 0x18)
    FMovieSceneSubSequenceTree tree;                                                  // 0x0018 (size: 0x60)
    TMap<class FMovieSceneSequenceID, class FMovieSceneSubSequenceData> SubSequences; // 0x0078 (size: 0x50)
    TMap<class FMovieSceneSequenceID, class FMovieSceneSequenceHierarchyNode> Hierarchy; // 0x00C8 (size: 0x50)

}; // Size: 0x118

struct FMovieSceneSequenceHierarchyNode
{
    FMovieSceneSequenceID ParentID;                                                   // 0x0000 (size: 0x4)
    TArray<FMovieSceneSequenceID> Children;                                           // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FMovieSceneSequenceID
{
    uint32 Value;                                                                     // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FMovieSceneSequenceInstanceData
{
}; // Size: 0x8

struct FMovieSceneSequenceInstanceDataPtr
{
}; // Size: 0x18

struct FMovieSceneSequenceLoopCount
{
    int32 Value;                                                                      // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FMovieSceneSequencePlaybackParams
{
    FFrameTime Frame;                                                                 // 0x0000 (size: 0x8)
    float Time;                                                                       // 0x0008 (size: 0x4)
    FString MarkedFrame;                                                              // 0x0010 (size: 0x10)
    EMovieScenePositionType PositionType;                                             // 0x0020 (size: 0x1)
    EUpdatePositionMethod UpdateMethod;                                               // 0x0021 (size: 0x1)

}; // Size: 0x28

struct FMovieSceneSequencePlaybackSettings
{
    uint8 bAutoPlay;                                                                  // 0x0000 (size: 0x1)
    FMovieSceneSequenceLoopCount LoopCount;                                           // 0x0004 (size: 0x4)
    float PlayRate;                                                                   // 0x0008 (size: 0x4)
    float StartTime;                                                                  // 0x000C (size: 0x4)
    uint8 bRandomStartTime;                                                           // 0x0010 (size: 0x1)
    uint8 bRestoreState;                                                              // 0x0010 (size: 0x1)
    uint8 bDisableMovementInput;                                                      // 0x0010 (size: 0x1)
    uint8 bDisableLookAtInput;                                                        // 0x0010 (size: 0x1)
    uint8 bHidePlayer;                                                                // 0x0010 (size: 0x1)
    uint8 bHideHud;                                                                   // 0x0010 (size: 0x1)
    uint8 bDisableCameraCuts;                                                         // 0x0010 (size: 0x1)
    uint8 bPauseAtEnd;                                                                // 0x0010 (size: 0x1)

}; // Size: 0x14

struct FMovieSceneSequenceReplProperties
{
    FFrameTime LastKnownPosition;                                                     // 0x0000 (size: 0x8)
    TEnumAsByte<EMovieScenePlayerStatus::Type> LastKnownStatus;                       // 0x0008 (size: 0x1)
    int32 LastKnownNumLoops;                                                          // 0x000C (size: 0x4)

}; // Size: 0x10

struct FMovieSceneSequenceTransform
{
    FMovieSceneTimeTransform LinearTransform;                                         // 0x0000 (size: 0xC)
    TArray<FMovieSceneNestedSequenceTransform> NestedTransforms;                      // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FMovieSceneSpawnable
{
    FTransform SpawnTransform;                                                        // 0x0000 (size: 0x30)
    TArray<FName> Tags;                                                               // 0x0030 (size: 0x10)
    bool bContinuouslyRespawn;                                                        // 0x0040 (size: 0x1)
    bool bNetAddressableName;                                                         // 0x0041 (size: 0x1)
    bool bEvaluateTracksWhenNotSpawned;                                               // 0x0042 (size: 0x1)
    FGuid Guid;                                                                       // 0x0044 (size: 0x10)
    FString Name;                                                                     // 0x0058 (size: 0x10)
    class UObject* ObjectTemplate;                                                    // 0x0068 (size: 0x8)
    TArray<FGuid> ChildPossessables;                                                  // 0x0070 (size: 0x10)
    ESpawnOwnership Ownership;                                                        // 0x0080 (size: 0x1)
    FName LevelName;                                                                  // 0x0084 (size: 0x8)

}; // Size: 0x90

struct FMovieSceneSubSectionData
{
    TWeakObjectPtr<class UMovieSceneSubSection> Section;                              // 0x0000 (size: 0x8)
    FGuid ObjectBindingID;                                                            // 0x0008 (size: 0x10)
    ESectionEvaluationFlags Flags;                                                    // 0x0018 (size: 0x1)

}; // Size: 0x1C

struct FMovieSceneSubSequenceData
{
    FSoftObjectPath Sequence;                                                         // 0x0000 (size: 0x18)
    FMovieSceneSequenceTransform OuterToInnerTransform;                               // 0x0018 (size: 0x20)
    FMovieSceneSequenceTransform RootToSequenceTransform;                             // 0x0038 (size: 0x20)
    FFrameRate TickResolution;                                                        // 0x0058 (size: 0x8)
    FMovieSceneSequenceID DeterministicSequenceID;                                    // 0x0060 (size: 0x4)
    FMovieSceneFrameRange ParentPlayRange;                                            // 0x0064 (size: 0x10)
    FFrameNumber ParentStartFrameOffset;                                              // 0x0074 (size: 0x4)
    FFrameNumber ParentEndFrameOffset;                                                // 0x0078 (size: 0x4)
    FFrameNumber ParentFirstLoopStartFrameOffset;                                     // 0x007C (size: 0x4)
    bool bCanLoop;                                                                    // 0x0080 (size: 0x1)
    FMovieSceneFrameRange PlayRange;                                                  // 0x0084 (size: 0x10)
    FMovieSceneFrameRange FullPlayRange;                                              // 0x0094 (size: 0x10)
    FMovieSceneFrameRange UnwarpedPlayRange;                                          // 0x00A4 (size: 0x10)
    FMovieSceneFrameRange PreRollRange;                                               // 0x00B4 (size: 0x10)
    FMovieSceneFrameRange PostRollRange;                                              // 0x00C4 (size: 0x10)
    int16 HierarchicalBias;                                                           // 0x00D4 (size: 0x2)
    bool bHasHierarchicalEasing;                                                      // 0x00D6 (size: 0x1)
    FMovieSceneSequenceInstanceDataPtr InstanceData;                                  // 0x00D8 (size: 0x18)
    FGuid SubSectionSignature;                                                        // 0x00F8 (size: 0x10)

}; // Size: 0x108

struct FMovieSceneSubSequenceTree
{
}; // Size: 0x60

struct FMovieSceneSubSequenceTreeEntry
{
}; // Size: 0x18

struct FMovieSceneTangentData
{
    float ArriveTangent;                                                              // 0x0000 (size: 0x4)
    float LeaveTangent;                                                               // 0x0004 (size: 0x4)
    float ArriveTangentWeight;                                                        // 0x0008 (size: 0x4)
    float LeaveTangentWeight;                                                         // 0x000C (size: 0x4)
    TEnumAsByte<ERichCurveTangentWeightMode> TangentWeightMode;                       // 0x0010 (size: 0x1)

}; // Size: 0x14

struct FMovieSceneTemplateGenerationLedger
{
    FMovieSceneTrackIdentifier LastTrackIdentifier;                                   // 0x0000 (size: 0x4)
    TMap<class FGuid, class FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier; // 0x0008 (size: 0x50)
    TMap<class FGuid, class FMovieSceneFrameRange> SubSectionRanges;                  // 0x0058 (size: 0x50)

}; // Size: 0xA8

struct FMovieSceneTimeTransform
{
    float TimeScale;                                                                  // 0x0000 (size: 0x4)
    FFrameTime Offset;                                                                // 0x0004 (size: 0x8)

}; // Size: 0xC

struct FMovieSceneTimeWarping
{
    FFrameNumber Start;                                                               // 0x0000 (size: 0x4)
    FFrameNumber End;                                                                 // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FMovieSceneTimecodeSource
{
    FTimecode Timecode;                                                               // 0x0000 (size: 0x14)
    FFrameNumber DeltaFrame;                                                          // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FMovieSceneTrackDisplayOptions
{
    uint8 bShowVerticalFrames;                                                        // 0x0000 (size: 0x1)

}; // Size: 0x4

struct FMovieSceneTrackEvalOptions
{
    uint8 bCanEvaluateNearestSection;                                                 // 0x0000 (size: 0x1)
    uint8 bEvalNearestSection;                                                        // 0x0000 (size: 0x1)
    uint8 bEvaluateInPreroll;                                                         // 0x0000 (size: 0x1)
    uint8 bEvaluateInPostroll;                                                        // 0x0000 (size: 0x1)
    uint8 bEvaluateNearestSection;                                                    // 0x0000 (size: 0x1)

}; // Size: 0x4

struct FMovieSceneTrackEvaluationField
{
    TArray<FMovieSceneTrackEvaluationFieldEntry> Entries;                             // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMovieSceneTrackEvaluationFieldEntry
{
    class UMovieSceneSection* Section;                                                // 0x0000 (size: 0x8)
    FFrameNumberRange range;                                                          // 0x0008 (size: 0x10)
    FFrameNumber ForcedTime;                                                          // 0x0018 (size: 0x4)
    ESectionEvaluationFlags Flags;                                                    // 0x001C (size: 0x1)
    int16 LegacySortOrder;                                                            // 0x001E (size: 0x2)

}; // Size: 0x20

struct FMovieSceneTrackIdentifier
{
    uint32 Value;                                                                     // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FMovieSceneTrackImplementation : public FMovieSceneEvalTemplateBase
{
}; // Size: 0x10

struct FMovieSceneTrackImplementationPtr
{
}; // Size: 0x38

struct FMovieSceneTrackInstanceComponent
{
    class UMovieSceneSection* Owner;                                                  // 0x0000 (size: 0x8)
    TSubclassOf<class UMovieSceneTrackInstance> TrackInstanceClass;                   // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FMovieSceneTrackInstanceEntry
{
    class UObject* BoundObject;                                                       // 0x0000 (size: 0x8)
    class UMovieSceneTrackInstance* TrackInstance;                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FMovieSceneTrackInstanceInput
{
    class UMovieSceneSection* Section;                                                // 0x0000 (size: 0x8)

}; // Size: 0x10

struct FMovieSceneTrackLabels
{
    TArray<FString> Strings;                                                          // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMovieSceneWarpCounter
{
    TArray<uint32> WarpCounts;                                                        // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FOptionalMovieSceneBlendType
{
    EMovieSceneBlendType BlendType;                                                   // 0x0000 (size: 0x1)
    bool bIsValid;                                                                    // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FSectionEvaluationData
{
    int32 ImplIndex;                                                                  // 0x0000 (size: 0x4)
    FFrameNumber ForcedTime;                                                          // 0x0004 (size: 0x4)
    ESectionEvaluationFlags Flags;                                                    // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FTestMovieSceneEvalTemplate : public FMovieSceneEvalTemplate
{
}; // Size: 0x20

struct FTrackInstanceInputComponent
{
    class UMovieSceneSection* Section;                                                // 0x0000 (size: 0x8)
    int32 OutputIndex;                                                                // 0x0008 (size: 0x4)

}; // Size: 0x10

class IMovieSceneBindingOwnerInterface : public IInterface
{
}; // Size: 0x28

class IMovieSceneCustomClockSource : public IInterface
{

    void OnTick(float DeltaSeconds, float InPlayRate);
    void OnStopPlaying(const FQualifiedFrameTime& InStopTime);
    void OnStartPlaying(const FQualifiedFrameTime& InStartTime);
    FFrameTime OnRequestCurrentTime(const FQualifiedFrameTime& InCurrentTime, float InPlayRate);
}; // Size: 0x28

class IMovieSceneDeterminismSource : public IInterface
{
}; // Size: 0x28

class IMovieSceneEasingFunction : public IInterface
{

    float OnEvaluate(float Interp);
}; // Size: 0x28

class IMovieSceneEntityProvider : public IInterface
{
}; // Size: 0x28

class IMovieSceneEvaluationHook : public IInterface
{
}; // Size: 0x28

class IMovieSceneFloatDecomposer : public IInterface
{
}; // Size: 0x28

class IMovieSceneKeyProxy : public IInterface
{
}; // Size: 0x28

class IMovieScenePlaybackClient : public IInterface
{
}; // Size: 0x28

class IMovieScenePreAnimatedStateSystemInterface : public IInterface
{
}; // Size: 0x28

class IMovieSceneSceneComponentImpersonator : public IInterface
{
}; // Size: 0x28

class IMovieSceneSequenceActor : public IInterface
{
}; // Size: 0x28

class IMovieSceneTrackTemplateProducer : public IInterface
{
}; // Size: 0x28

class INodeAndChannelMappings : public IInterface
{
}; // Size: 0x28

class UMovieScene : public UMovieSceneSignedObject
{
    TArray<FMovieSceneSpawnable> Spawnables;                                          // 0x0050 (size: 0x10)
    TArray<FMovieScenePossessable> Possessables;                                      // 0x0060 (size: 0x10)
    TArray<FMovieSceneBinding> ObjectBindings;                                        // 0x0070 (size: 0x10)
    TMap<class FName, class FMovieSceneObjectBindingIDs> BindingGroups;               // 0x0080 (size: 0x50)
    TArray<class UMovieSceneTrack*> MasterTracks;                                     // 0x00D0 (size: 0x10)
    class UMovieSceneTrack* CameraCutTrack;                                           // 0x00E0 (size: 0x8)
    FMovieSceneFrameRange SelectionRange;                                             // 0x00E8 (size: 0x10)
    FMovieSceneFrameRange PlaybackRange;                                              // 0x00F8 (size: 0x10)
    FFrameRate TickResolution;                                                        // 0x0108 (size: 0x8)
    FFrameRate DisplayRate;                                                           // 0x0110 (size: 0x8)
    EMovieSceneEvaluationType EvaluationType;                                         // 0x0118 (size: 0x1)
    EUpdateClockSource ClockSource;                                                   // 0x0119 (size: 0x1)
    FSoftObjectPath CustomClockSourcePath;                                            // 0x0120 (size: 0x18)
    TArray<FMovieSceneMarkedFrame> MarkedFrames;                                      // 0x0138 (size: 0x10)

}; // Size: 0x148

class UMovieSceneBindingOverrides : public UObject
{
    TArray<FMovieSceneBindingOverrideData> BindingData;                               // 0x0028 (size: 0x10)

}; // Size: 0x90

class UMovieSceneBlenderSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x68

class UMovieSceneBoolSection : public UMovieSceneSection
{
    bool DefaultValue;                                                                // 0x00E8 (size: 0x1)
    FMovieSceneBoolChannel BoolCurve;                                                 // 0x00F0 (size: 0x90)

}; // Size: 0x180

class UMovieSceneBoundSceneComponentInstantiator : public UMovieSceneEntityInstantiatorSystem
{
}; // Size: 0x40

class UMovieSceneBuiltInEasingFunction : public UObject
{
    EMovieSceneBuiltInEasing Type;                                                    // 0x0030 (size: 0x1)

}; // Size: 0x38

class UMovieSceneCachePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
{
}; // Size: 0x60

class UMovieSceneCompiledData : public UObject
{
    FMovieSceneEvaluationTemplate EvaluationTemplate;                                 // 0x0028 (size: 0x160)
    FMovieSceneSequenceHierarchy Hierarchy;                                           // 0x0188 (size: 0x118)
    FMovieSceneEntityComponentField EntityComponentField;                             // 0x02A0 (size: 0xF0)
    FMovieSceneEvaluationField TrackTemplateField;                                    // 0x0390 (size: 0x30)
    TArray<FFrameTime> DeterminismFences;                                             // 0x03C0 (size: 0x10)
    FGuid CompiledSignature;                                                          // 0x03D0 (size: 0x10)
    FGuid CompilerVersion;                                                            // 0x03E0 (size: 0x10)
    FMovieSceneSequenceCompilerMaskStruct AccumulatedMask;                            // 0x03F0 (size: 0x1)
    FMovieSceneSequenceCompilerMaskStruct AllocatedMask;                              // 0x03F1 (size: 0x1)
    EMovieSceneSequenceFlags AccumulatedFlags;                                        // 0x03F2 (size: 0x1)

}; // Size: 0x3F8

class UMovieSceneCompiledDataManager : public UObject
{
    TMap<int32, FMovieSceneSequenceHierarchy> Hierarchies;                            // 0x00D8 (size: 0x50)
    TMap<int32, FMovieSceneEvaluationTemplate> TrackTemplates;                        // 0x0128 (size: 0x50)
    TMap<int32, FMovieSceneEvaluationField> TrackTemplateFields;                      // 0x0178 (size: 0x50)
    TMap<int32, FMovieSceneEntityComponentField> EntityComponentFields;               // 0x01C8 (size: 0x50)

}; // Size: 0x230

class UMovieSceneEasingExternalCurve : public UObject
{
    class UCurveFloat* Curve;                                                         // 0x0030 (size: 0x8)

}; // Size: 0x38

class UMovieSceneEntityInstantiatorSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x40

class UMovieSceneEntitySystem : public UObject
{
    class UMovieSceneEntitySystemLinker* Linker;                                      // 0x0028 (size: 0x8)

}; // Size: 0x40

class UMovieSceneEntitySystemLinker : public UObject
{
    FMovieSceneEntitySystemGraph SystemGraph;                                         // 0x0298 (size: 0x138)

}; // Size: 0x4F0

class UMovieSceneEvalTimeSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x50

class UMovieSceneEvaluationHookSystem : public UMovieSceneEntitySystem
{
    TMap<class FMovieSceneEvaluationInstanceKey, class FMovieSceneEvaluationHookEventContainer> PendingEventsByRootInstance; // 0x0040 (size: 0x50)

}; // Size: 0x90

class UMovieSceneFolder : public UObject
{
    FName FolderName;                                                                 // 0x0028 (size: 0x8)
    TArray<class UMovieSceneFolder*> ChildFolders;                                    // 0x0030 (size: 0x10)
    TArray<class UMovieSceneTrack*> ChildMasterTracks;                                // 0x0040 (size: 0x10)
    TArray<FString> ChildObjectBindingStrings;                                        // 0x0050 (size: 0x10)

}; // Size: 0x70

class UMovieSceneGenericBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem
{
}; // Size: 0x40

class UMovieSceneHookSection : public UMovieSceneSection
{
    uint8 bRequiresRangedHook;                                                        // 0x00F8 (size: 0x1)
    uint8 bRequiresTriggerHooks;                                                      // 0x00F8 (size: 0x1)

}; // Size: 0x100

class UMovieSceneMasterInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
}; // Size: 0x40

class UMovieSceneNameableTrack : public UMovieSceneTrack
{
}; // Size: 0x90

class UMovieSceneNodeGroup : public UObject
{
}; // Size: 0x28

class UMovieSceneNodeGroupCollection : public UObject
{
}; // Size: 0x28

class UMovieSceneRestorePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
{
}; // Size: 0x50

class UMovieSceneSection : public UMovieSceneSignedObject
{
    FMovieSceneSectionEvalOptions EvalOptions;                                        // 0x0050 (size: 0x2)
    FMovieSceneEasingSettings Easing;                                                 // 0x0058 (size: 0x38)
    FMovieSceneFrameRange SectionRange;                                               // 0x0090 (size: 0x10)
    FFrameNumber PreRollFrames;                                                       // 0x00A0 (size: 0x4)
    FFrameNumber PostRollFrames;                                                      // 0x00A4 (size: 0x4)
    int32 RowIndex;                                                                   // 0x00A8 (size: 0x4)
    int32 OverlapPriority;                                                            // 0x00AC (size: 0x4)
    uint8 bIsActive;                                                                  // 0x00B0 (size: 0x1)
    uint8 bIsLocked;                                                                  // 0x00B0 (size: 0x1)
    float StartTime;                                                                  // 0x00B4 (size: 0x4)
    float EndTime;                                                                    // 0x00B8 (size: 0x4)
    float PrerollTime;                                                                // 0x00BC (size: 0x4)
    float PostrollTime;                                                               // 0x00C0 (size: 0x4)
    uint8 bIsInfinite;                                                                // 0x00C4 (size: 0x1)
    bool bSupportsInfiniteRange;                                                      // 0x00C8 (size: 0x1)
    FOptionalMovieSceneBlendType BlendType;                                           // 0x00C9 (size: 0x2)

    void SetRowIndex(int32 NewRowIndex);
    void SetPreRollFrames(int32 InPreRollFrames);
    void SetPostRollFrames(int32 InPostRollFrames);
    void SetOverlapPriority(int32 NewPriority);
    void SetIsLocked(bool bInIsLocked);
    void SetIsActive(bool bInIsActive);
    void SetCompletionMode(EMovieSceneCompletionMode InCompletionMode);
    void SetBlendType(EMovieSceneBlendType InBlendType);
    bool IsLocked();
    bool IsActive();
    int32 GetRowIndex();
    int32 GetPreRollFrames();
    int32 GetPostRollFrames();
    int32 GetOverlapPriority();
    EMovieSceneCompletionMode GetCompletionMode();
    FOptionalMovieSceneBlendType GetBlendType();
}; // Size: 0xE8

class UMovieSceneSequence : public UMovieSceneSignedObject
{
    class UMovieSceneCompiledData* CompiledData;                                      // 0x0050 (size: 0x8)
    EMovieSceneCompletionMode DefaultCompletionMode;                                  // 0x0058 (size: 0x1)
    bool bParentContextsAreSignificant;                                               // 0x0059 (size: 0x1)
    bool bPlayableDirectly;                                                           // 0x005A (size: 0x1)
    EMovieSceneSequenceFlags SequenceFlags;                                           // 0x005B (size: 0x1)

    TArray<FMovieSceneObjectBindingID> FindBindingsByTag(FName InBindingName);
    FMovieSceneObjectBindingID FindBindingByTag(FName InBindingName);
}; // Size: 0x60

class UMovieSceneSequencePlayer : public UObject
{
    FMovieSceneSequencePlayerOnPlay OnPlay;                                           // 0x0260 (size: 0x10)
    void OnMovieSceneSequencePlayerEvent();
    FMovieSceneSequencePlayerOnPlayReverse OnPlayReverse;                             // 0x0270 (size: 0x10)
    void OnMovieSceneSequencePlayerEvent();
    FMovieSceneSequencePlayerOnStop OnStop;                                           // 0x0280 (size: 0x10)
    void OnMovieSceneSequencePlayerEvent();
    FMovieSceneSequencePlayerOnPause OnPause;                                         // 0x0290 (size: 0x10)
    void OnMovieSceneSequencePlayerEvent();
    FMovieSceneSequencePlayerOnFinished OnFinished;                                   // 0x02A0 (size: 0x10)
    void OnMovieSceneSequencePlayerEvent();
    TEnumAsByte<EMovieScenePlayerStatus::Type> status;                                // 0x02B0 (size: 0x1)
    uint8 bReversePlayback;                                                           // 0x02B4 (size: 0x1)
    class UMovieSceneSequence* Sequence;                                              // 0x02B8 (size: 0x8)
    FFrameNumber StartTime;                                                           // 0x02C0 (size: 0x4)
    int32 DurationFrames;                                                             // 0x02C4 (size: 0x4)
    float DurationSubFrames;                                                          // 0x02C8 (size: 0x4)
    int32 CurrentNumLoops;                                                            // 0x02CC (size: 0x4)
    FMovieSceneSequencePlaybackSettings PlaybackSettings;                             // 0x02D0 (size: 0x14)
    FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;                   // 0x02E8 (size: 0xE8)
    FMovieSceneSequenceReplProperties NetSyncProps;                                   // 0x0438 (size: 0x10)
    TScriptInterface<class IMovieScenePlaybackClient> PlaybackClient;                 // 0x0448 (size: 0x10)
    class UMovieSceneSequenceTickManager* TickManager;                                // 0x0458 (size: 0x8)

    void StopAtCurrentTime();
    void Stop();
    void SetTimeRange(float StartTime, float Duration);
    void SetPlayRate(float PlayRate);
    void SetPlaybackPosition(FMovieSceneSequencePlaybackParams PlaybackParams);
    void SetFrameRate(FFrameRate FrameRate);
    void SetFrameRange(int32 StartFrame, int32 Duration, float SubFrames);
    void SetDisableCameraCuts(bool bInDisableCameraCuts);
    void ScrubToSeconds(float TimeInSeconds);
    bool ScrubToMarkedFrame(FString InLabel);
    void ScrubToFrame(FFrameTime NewPosition);
    void Scrub();
    void RPC_OnStopEvent(FFrameTime StoppedTime);
    void RPC_ExplicitServerUpdateEvent(EUpdatePositionMethod Method, FFrameTime RelevantTime);
    void RestoreState();
    void PlayToSeconds(float TimeInSeconds);
    bool PlayToMarkedFrame(FString InLabel);
    void PlayToFrame(FFrameTime NewPosition);
    void PlayTo(FMovieSceneSequencePlaybackParams PlaybackParams);
    void PlayReverse();
    void PlayLooping(int32 NumLoops);
    void Play();
    void Pause();
    void JumpToSeconds(float TimeInSeconds);
    bool JumpToMarkedFrame(FString InLabel);
    void JumpToFrame(FFrameTime NewPosition);
    bool IsReversed();
    bool IsPlaying();
    bool IsPaused();
    void GoToEndAndStop();
    FQualifiedFrameTime GetStartTime();
    class UMovieSceneSequence* GetSequence();
    float GetPlayRate();
    TArray<FMovieSceneObjectBindingID> GetObjectBindings(class UObject* InObject);
    FFrameRate GetFrameRate();
    int32 GetFrameDuration();
    FQualifiedFrameTime GetEndTime();
    FQualifiedFrameTime GetDuration();
    bool GetDisableCameraCuts();
    FQualifiedFrameTime GetCurrentTime();
    TArray<class UObject*> GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding);
    void ChangePlaybackDirection();
}; // Size: 0x4E8

class UMovieSceneSequenceTickManager : public UObject
{
    TArray<FMovieSceneSequenceActorPointers> SequenceActors;                          // 0x0028 (size: 0x10)
    class UMovieSceneEntitySystemLinker* Linker;                                      // 0x0038 (size: 0x8)

}; // Size: 0xD0

class UMovieSceneSignedObject : public UObject
{
    FGuid signature;                                                                  // 0x0028 (size: 0x10)

}; // Size: 0x50

class UMovieSceneSpawnSection : public UMovieSceneBoolSection
{
}; // Size: 0x188

class UMovieSceneSpawnTrack : public UMovieSceneTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x0090 (size: 0x10)
    FGuid ObjectGuid;                                                                 // 0x00A0 (size: 0x10)

}; // Size: 0xB0

class UMovieSceneSpawnablesSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x40

class UMovieSceneSubSection : public UMovieSceneSection
{
    FMovieSceneSectionParameters Parameters;                                          // 0x00E8 (size: 0x24)
    float StartOffset;                                                                // 0x010C (size: 0x4)
    float TimeScale;                                                                  // 0x0110 (size: 0x4)
    float PrerollTime;                                                                // 0x0114 (size: 0x4)
    uint8 NetworkMask;                                                                // 0x0118 (size: 0x1)
    class UMovieSceneSequence* SubSequence;                                           // 0x0120 (size: 0x8)
    TLazyObjectPtr<class AActor> ActorToRecord;                                       // 0x0128 (size: 0x1C)
    FString TargetSequenceName;                                                       // 0x0148 (size: 0x10)
    FDirectoryPath TargetPathToRecordTo;                                              // 0x0158 (size: 0x10)

    void SetSequence(class UMovieSceneSequence* Sequence);
    class UMovieSceneSequence* GetSequence();
}; // Size: 0x168

class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x0090 (size: 0x10)

}; // Size: 0xA0

class UMovieSceneTrack : public UMovieSceneSignedObject
{
    FMovieSceneTrackEvalOptions EvalOptions;                                          // 0x0050 (size: 0x4)
    bool bIsEvalDisabled;                                                             // 0x0055 (size: 0x1)
    TArray<int32> RowsDisabled;                                                       // 0x0058 (size: 0x10)
    FGuid EvaluationFieldGuid;                                                        // 0x006C (size: 0x10)
    FMovieSceneTrackEvaluationField EvaluationField;                                  // 0x0080 (size: 0x10)

}; // Size: 0x90

class UMovieSceneTrackInstance : public UObject
{
    class UObject* AnimatedObject;                                                    // 0x0028 (size: 0x8)
    bool bIsMasterTrackInstance;                                                      // 0x0030 (size: 0x1)
    class UMovieSceneEntitySystemLinker* Linker;                                      // 0x0038 (size: 0x8)
    TArray<FMovieSceneTrackInstanceInput> Inputs;                                     // 0x0040 (size: 0x10)

}; // Size: 0x50

class UMovieSceneTrackInstanceInstantiator : public UMovieSceneEntityInstantiatorSystem
{
}; // Size: 0xF0

class UMovieSceneTrackInstanceSystem : public UMovieSceneEntitySystem
{
    class UMovieSceneTrackInstanceInstantiator* Instantiator;                         // 0x0040 (size: 0x8)

}; // Size: 0x48

class UTestMovieSceneEvalHookSection : public UMovieSceneHookSection
{
}; // Size: 0x118

class UTestMovieSceneEvalHookTrack : public UMovieSceneTrack
{
    TArray<class UMovieSceneSection*> SectionArray;                                   // 0x0090 (size: 0x10)

}; // Size: 0xA0

class UTestMovieSceneSection : public UMovieSceneSection
{
}; // Size: 0xE8

class UTestMovieSceneSequence : public UMovieSceneSequence
{
    class UMovieScene* MovieScene;                                                    // 0x0060 (size: 0x8)

}; // Size: 0x68

class UTestMovieSceneSubSection : public UMovieSceneSubSection
{
}; // Size: 0x168

class UTestMovieSceneSubTrack : public UMovieSceneSubTrack
{
    TArray<class UMovieSceneSection*> SectionArray;                                   // 0x00A0 (size: 0x10)

}; // Size: 0xB0

class UTestMovieSceneTrack : public UMovieSceneTrack
{
    bool bHighPassFilter;                                                             // 0x0098 (size: 0x1)
    TArray<class UMovieSceneSection*> SectionArray;                                   // 0x00A0 (size: 0x10)

}; // Size: 0xB0

#endif
