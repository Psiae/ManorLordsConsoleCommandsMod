#ifndef UE4SS_SDK_MovieScene_HPP
#define UE4SS_SDK_MovieScene_HPP

#include "MovieScene_enums.hpp"

struct FActorForWorldTransforms
{
    TWeakObjectPtr<class AActor> Actor;                                               // 0x0000 (size: 0x8)
    TWeakObjectPtr<class USceneComponent> Component;                                  // 0x0008 (size: 0x8)
    FName SocketName;                                                                 // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FEasingComponentData
{
    class UMovieSceneSection* Section;                                                // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FGeneratedMovieSceneKeyStruct
{
}; // Size: 0x50

struct FMovieSceneAudioTriggerChannel : public FMovieSceneChannel
{
    TArray<FFrameNumber> Times;                                                       // 0x0050 (size: 0x10)
    TArray<bool> Values;                                                              // 0x0060 (size: 0x10)
    FMovieSceneKeyHandleMap KeyHandles;                                               // 0x0070 (size: 0x88)

}; // Size: 0xF8

struct FMovieSceneBinding
{
    FGuid ObjectGuid;                                                                 // 0x0000 (size: 0x10)
    FString BindingName;                                                              // 0x0010 (size: 0x10)
    TArray<class UMovieSceneTrack*> Tracks;                                           // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FMovieSceneBindingOverrideData
{
    FMovieSceneObjectBindingID ObjectBindingID;                                       // 0x0000 (size: 0x18)
    TSoftObjectPtr<UObject> Object;                                                   // 0x0018 (size: 0x28)
    bool bOverridesDefault;                                                           // 0x0040 (size: 0x1)

}; // Size: 0x48

struct FMovieSceneBindingProxy
{
    FGuid BindingID;                                                                  // 0x0000 (size: 0x10)
    class UMovieSceneSequence* Sequence;                                              // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FMovieSceneBindingReference
{
    FGuid ID;                                                                         // 0x0000 (size: 0x10)
    FUniversalObjectLocator Locator;                                                  // 0x0010 (size: 0x10)
    ELocatorResolveFlags ResolveFlags;                                                // 0x0020 (size: 0x1)
    class UMovieSceneCustomBinding* CustomBinding;                                    // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FMovieSceneBindingReferences
{
    TArray<FMovieSceneBindingReference> SortedReferences;                             // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMovieSceneBindingResolveContext
{
    class UObject* WorldContext;                                                      // 0x0000 (size: 0x8)
    FMovieSceneBindingProxy Binding;                                                  // 0x0008 (size: 0x18)

}; // Size: 0x20

struct FMovieSceneBindingResolveParams
{
    class UMovieSceneSequence* Sequence;                                              // 0x0000 (size: 0x8)
    FGuid ObjectBindingID;                                                            // 0x0008 (size: 0x10)
    FMovieSceneSequenceID SequenceID;                                                 // 0x0018 (size: 0x4)
    class UObject* Context;                                                           // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FMovieSceneBindingResolveResult
{
    class UObject* Object;                                                            // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FMovieSceneBoolChannel : public FMovieSceneChannel
{
    TEnumAsByte<ERichCurveExtrapolation> PreInfinityExtrap;                           // 0x0050 (size: 0x1)
    TEnumAsByte<ERichCurveExtrapolation> PostInfinityExtrap;                          // 0x0051 (size: 0x1)
    TArray<FFrameNumber> Times;                                                       // 0x0058 (size: 0x10)
    bool DefaultValue;                                                                // 0x0068 (size: 0x1)
    bool bHasDefaultValue;                                                            // 0x0069 (size: 0x1)
    TArray<bool> Values;                                                              // 0x0070 (size: 0x10)
    FMovieSceneKeyHandleMap KeyHandles;                                               // 0x0080 (size: 0x88)

}; // Size: 0x108

struct FMovieSceneByteChannel : public FMovieSceneChannel
{
    TEnumAsByte<ERichCurveExtrapolation> PreInfinityExtrap;                           // 0x0050 (size: 0x1)
    TEnumAsByte<ERichCurveExtrapolation> PostInfinityExtrap;                          // 0x0051 (size: 0x1)
    TArray<FFrameNumber> Times;                                                       // 0x0058 (size: 0x10)
    uint8 DefaultValue;                                                               // 0x0068 (size: 0x1)
    bool bHasDefaultValue;                                                            // 0x0069 (size: 0x1)
    TArray<uint8> Values;                                                             // 0x0070 (size: 0x10)
    class UEnum* Enum;                                                                // 0x0080 (size: 0x8)
    FMovieSceneKeyHandleMap KeyHandles;                                               // 0x0088 (size: 0x88)

}; // Size: 0x110

struct FMovieSceneChannel
{
}; // Size: 0x50

struct FMovieSceneCompiledSequenceFlagStruct
{
    uint8 bParentSequenceRequiresLowerFence;                                          // 0x0000 (size: 0x1)
    uint8 bParentSequenceRequiresUpperFence;                                          // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FMovieSceneConditionContainer
{
    class UMovieSceneCondition* Condition;                                            // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FMovieSceneConditionContext
{
    class UObject* WorldContext;                                                      // 0x0000 (size: 0x8)
    FMovieSceneBindingProxy Binding;                                                  // 0x0008 (size: 0x18)
    TArray<class UObject*> BoundObjects;                                              // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FMovieSceneCustomTimeWarpGetterStruct
{
    class UMovieSceneTimeWarpGetter* Object;                                          // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FMovieSceneDeterminismData
{
    TArray<FMovieSceneDeterminismFence> Fences;                                       // 0x0000 (size: 0x10)
    bool bParentSequenceRequiresLowerFence;                                           // 0x0010 (size: 0x1)
    bool bParentSequenceRequiresUpperFence;                                           // 0x0011 (size: 0x1)

}; // Size: 0x18

struct FMovieSceneDeterminismFence
{
    FFrameNumber FrameNumber;                                                         // 0x0000 (size: 0x4)
    uint8 bInclusive;                                                                 // 0x0004 (size: 0x1)

}; // Size: 0x8

struct FMovieSceneDoubleChannel : public FMovieSceneChannel
{
    TEnumAsByte<ERichCurveExtrapolation> PreInfinityExtrap;                           // 0x0050 (size: 0x1)
    TEnumAsByte<ERichCurveExtrapolation> PostInfinityExtrap;                          // 0x0051 (size: 0x1)
    TArray<FFrameNumber> Times;                                                       // 0x0058 (size: 0x10)
    TArray<FMovieSceneDoubleValue> Values;                                            // 0x0068 (size: 0x10)
    double DefaultValue;                                                              // 0x0078 (size: 0x8)
    bool bHasDefaultValue;                                                            // 0x0080 (size: 0x1)
    FMovieSceneKeyHandleMap KeyHandles;                                               // 0x0088 (size: 0x88)
    FFrameRate TickResolution;                                                        // 0x0110 (size: 0x8)

}; // Size: 0x118

struct FMovieSceneDoubleValue
{
    double Value;                                                                     // 0x0000 (size: 0x8)
    FMovieSceneTangentData Tangent;                                                   // 0x0008 (size: 0x14)
    TEnumAsByte<ERichCurveInterpMode> InterpMode;                                     // 0x001C (size: 0x1)
    TEnumAsByte<ERichCurveTangentMode> TangentMode;                                   // 0x001D (size: 0x1)
    uint8 PaddingByte;                                                                // 0x001E (size: 0x1)

}; // Size: 0x20

struct FMovieSceneDynamicBinding
{
    class UFunction* Function;                                                        // 0x0000 (size: 0x8)
    TFieldPath<FProperty> ResolveParamsProperty;                                      // 0x0008 (size: 0x20)

}; // Size: 0x28

struct FMovieSceneDynamicBindingContainer
{
    FMovieSceneDynamicBinding DynamicBinding;                                         // 0x0000 (size: 0x28)

}; // Size: 0x28

struct FMovieSceneDynamicBindingPayloadVariable
{
    FSoftObjectPath ObjectValue;                                                      // 0x0000 (size: 0x20)
    FString Value;                                                                    // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FMovieSceneDynamicBindingResolveParams
{
    class UMovieSceneSequence* Sequence;                                              // 0x0000 (size: 0x8)
    FGuid ObjectBindingID;                                                            // 0x0008 (size: 0x10)
    class UMovieSceneSequence* RootSequence;                                          // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FMovieSceneDynamicBindingResolveResult
{
    class UObject* Object;                                                            // 0x0000 (size: 0x8)
    bool bIsPossessedObject;                                                          // 0x0008 (size: 0x1)

}; // Size: 0x10

struct FMovieSceneEasingSettings
{
    int32 AutoEaseInDuration;                                                         // 0x0000 (size: 0x4)
    int32 AutoEaseOutDuration;                                                        // 0x0004 (size: 0x4)
    TScriptInterface<class IMovieSceneEasingFunction> EaseIn;                         // 0x0008 (size: 0x10)
    bool bManualEaseIn;                                                               // 0x0018 (size: 0x1)
    int32 ManualEaseInDuration;                                                       // 0x001C (size: 0x4)
    TScriptInterface<class IMovieSceneEasingFunction> EaseOut;                        // 0x0020 (size: 0x10)
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
    FMovieSceneEntitySystemGraphNodes Nodes;                                          // 0x00B8 (size: 0x38)

}; // Size: 0x190

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
    TSoftObjectPtr<UMovieSceneCondition> Condition;                                   // 0x0000 (size: 0x28)
    FString OverrideBoundPropertyPath;                                                // 0x0028 (size: 0x10)
    FFrameNumber ForcedTime;                                                          // 0x0038 (size: 0x4)
    ESectionEvaluationFlags Flags;                                                    // 0x003C (size: 0x1)
    uint8 bEvaluateInSequencePreRoll;                                                 // 0x003D (size: 0x1)
    uint8 bEvaluateInSequencePostRoll;                                                // 0x003D (size: 0x1)

}; // Size: 0x40

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

}; // Size: 0x40

struct FMovieSceneEvaluationHookEventContainer
{
    TArray<FMovieSceneEvaluationHookEvent> Events;                                    // 0x0000 (size: 0x10)

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

struct FMovieSceneFixedPlayRateStruct
{
    double PlayRate;                                                                  // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FMovieSceneFloatChannel : public FMovieSceneChannel
{
    TEnumAsByte<ERichCurveExtrapolation> PreInfinityExtrap;                           // 0x0050 (size: 0x1)
    TEnumAsByte<ERichCurveExtrapolation> PostInfinityExtrap;                          // 0x0051 (size: 0x1)
    TArray<FFrameNumber> Times;                                                       // 0x0058 (size: 0x10)
    TArray<FMovieSceneFloatValue> Values;                                             // 0x0068 (size: 0x10)
    float DefaultValue;                                                               // 0x0078 (size: 0x4)
    bool bHasDefaultValue;                                                            // 0x007C (size: 0x1)
    FMovieSceneKeyHandleMap KeyHandles;                                               // 0x0080 (size: 0x88)
    FFrameRate TickResolution;                                                        // 0x0108 (size: 0x8)

}; // Size: 0x110

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
    TEnumAsByte<ERichCurveExtrapolation> PreInfinityExtrap;                           // 0x0050 (size: 0x1)
    TEnumAsByte<ERichCurveExtrapolation> PostInfinityExtrap;                          // 0x0051 (size: 0x1)
    bool bInterpolateLinearKeys;                                                      // 0x0052 (size: 0x1)
    TArray<FFrameNumber> Times;                                                       // 0x0058 (size: 0x10)
    int32 DefaultValue;                                                               // 0x0068 (size: 0x4)
    bool bHasDefaultValue;                                                            // 0x006C (size: 0x1)
    TArray<int32> Values;                                                             // 0x0070 (size: 0x10)
    FMovieSceneKeyHandleMap KeyHandles;                                               // 0x0080 (size: 0x88)

}; // Size: 0x108

struct FMovieSceneInverseNestedSequenceTransform
{
    FMovieSceneTimeWarpVariant TimeScale;                                             // 0x0000 (size: 0x8)
    FFrameTime Offset;                                                                // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FMovieSceneInverseSequenceTransform
{
    FMovieSceneTimeTransform LinearTransform;                                         // 0x0000 (size: 0xC)
    TArray<FMovieSceneInverseNestedSequenceTransform> NestedTransforms;               // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FMovieSceneKeyHandleMap : public FKeyHandleLookupTable
{
}; // Size: 0x88

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
    bool bIsInclusiveTime;                                                            // 0x0019 (size: 0x1)

}; // Size: 0x20

struct FMovieSceneNestedSequenceTransform
{
    FMovieSceneTimeWarpVariant TimeScale;                                             // 0x0000 (size: 0x8)
    FFrameTime Offset;                                                                // 0x0008 (size: 0x8)

}; // Size: 0x18

struct FMovieSceneNumericVariant
{
}; // Size: 0x8

struct FMovieSceneObjectBindingID
{
    FGuid Guid;                                                                       // 0x0000 (size: 0x10)
    int32 SequenceID;                                                                 // 0x0010 (size: 0x4)
    int32 ResolveParentIndex;                                                         // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FMovieSceneObjectBindingIDs
{
    TArray<FMovieSceneObjectBindingID> Ids;                                           // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMovieSceneObjectPathChannel : public FMovieSceneChannel
{
    UClass* PropertyClass;                                                            // 0x0050 (size: 0x8)
    TArray<FFrameNumber> Times;                                                       // 0x0058 (size: 0x10)
    TArray<FMovieSceneObjectPathChannelKeyValue> Values;                              // 0x0068 (size: 0x10)
    FMovieSceneObjectPathChannelKeyValue DefaultValue;                                // 0x0078 (size: 0x30)
    FMovieSceneKeyHandleMap KeyHandles;                                               // 0x00A8 (size: 0x88)

}; // Size: 0x130

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
    FMovieSceneDynamicBinding DynamicBinding;                                         // 0x0010 (size: 0x28)
    FGuid Guid;                                                                       // 0x0038 (size: 0x10)
    FString Name;                                                                     // 0x0048 (size: 0x10)
    FGuid ParentGuid;                                                                 // 0x0058 (size: 0x10)
    FMovieSceneObjectBindingID SpawnableObjectBindingID;                              // 0x0068 (size: 0x18)

}; // Size: 0x80

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
    class UMovieSceneEntitySystemLinker* EntitySystemLinker;                          // 0x0000 (size: 0x8)

}; // Size: 0x20

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
    FMovieSceneTimeWarpVariant TimeScale;                                             // 0x0010 (size: 0x8)
    int32 HierarchicalBias;                                                           // 0x0018 (size: 0x4)
    EMovieSceneSubSectionFlags Flags;                                                 // 0x001C (size: 0x1)
    float StartOffset;                                                                // 0x0020 (size: 0x4)
    float PrerollTime;                                                                // 0x0024 (size: 0x4)
    float PostrollTime;                                                               // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FMovieSceneSectionTimingParametersFrames
{
    FMovieSceneTimeWarpVariant PlayRate;                                              // 0x0000 (size: 0x8)
    FFrameNumber InnerStartOffset;                                                    // 0x0008 (size: 0x4)
    FFrameNumber InnerEndOffset;                                                      // 0x000C (size: 0x4)
    FFrameNumber FirstLoopStartOffset;                                                // 0x0010 (size: 0x4)
    uint8 bLoop;                                                                      // 0x0014 (size: 0x1)
    uint8 bClamp;                                                                     // 0x0014 (size: 0x1)
    uint8 bReverse;                                                                   // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FMovieSceneSectionTimingParametersSeconds
{
    FMovieSceneTimeWarpVariant PlayRate;                                              // 0x0000 (size: 0x8)
    float InnerStartOffset;                                                           // 0x0008 (size: 0x4)
    float InnerEndOffset;                                                             // 0x000C (size: 0x4)
    float FirstLoopStartOffset;                                                       // 0x0010 (size: 0x4)
    uint8 bLoop;                                                                      // 0x0014 (size: 0x1)
    uint8 bClamp;                                                                     // 0x0014 (size: 0x1)
    uint8 bReverse;                                                                   // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FMovieSceneSegment
{
}; // Size: 0x58

struct FMovieSceneSegmentIdentifier
{
    int32 IdentifierIndex;                                                            // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FMovieSceneSequenceHierarchy
{
    FMovieSceneSequenceHierarchyNode RootNode;                                        // 0x0000 (size: 0x18)
    FMovieSceneSubSequenceTree tree;                                                  // 0x0018 (size: 0x60)
    FMovieSceneSequenceTransform RootTransform;                                       // 0x0078 (size: 0x20)
    TMap<class FMovieSceneSequenceID, class FMovieSceneSubSequenceData> SubSequences; // 0x0098 (size: 0x50)
    TMap<class FMovieSceneSequenceID, class FMovieSceneSequenceHierarchyNode> Hierarchy; // 0x00E8 (size: 0x50)
    EMovieSceneServerClientMask AccumulatedNetworkMask;                               // 0x0138 (size: 0x1)

}; // Size: 0x140

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

struct FMovieSceneSequencePlayToParams
{
    bool bExclusive;                                                                  // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FMovieSceneSequencePlaybackParams
{
    FFrameTime Frame;                                                                 // 0x0000 (size: 0x8)
    float Time;                                                                       // 0x0008 (size: 0x4)
    FString MarkedFrame;                                                              // 0x0010 (size: 0x10)
    FTimecode Timecode;                                                               // 0x0020 (size: 0x18)
    EMovieScenePositionType PositionType;                                             // 0x0038 (size: 0x1)
    EUpdatePositionMethod UpdateMethod;                                               // 0x0039 (size: 0x1)
    bool bHasJumped;                                                                  // 0x003A (size: 0x1)

}; // Size: 0x40

struct FMovieSceneSequencePlaybackSettings
{
    uint8 bAutoPlay;                                                                  // 0x0000 (size: 0x1)
    FMovieSceneSequenceLoopCount LoopCount;                                           // 0x0004 (size: 0x4)
    FMovieSceneSequenceTickInterval TickInterval;                                     // 0x0008 (size: 0xC)
    float PlayRate;                                                                   // 0x0014 (size: 0x4)
    float StartTime;                                                                  // 0x0018 (size: 0x4)
    uint8 bRandomStartTime;                                                           // 0x001C (size: 0x1)
    uint8 bDisableMovementInput;                                                      // 0x001C (size: 0x1)
    uint8 bDisableLookAtInput;                                                        // 0x001C (size: 0x1)
    uint8 bHidePlayer;                                                                // 0x001C (size: 0x1)
    uint8 bHideHud;                                                                   // 0x001C (size: 0x1)
    uint8 bDisableCameraCuts;                                                         // 0x001C (size: 0x1)
    EMovieSceneCompletionModeOverride FinishCompletionStateOverride;                  // 0x0020 (size: 0x1)
    uint8 bPauseAtEnd;                                                                // 0x0024 (size: 0x1)
    uint8 bInheritTickIntervalFromOwner;                                              // 0x0024 (size: 0x1)
    uint8 bDynamicWeighting;                                                          // 0x0024 (size: 0x1)

}; // Size: 0x28

struct FMovieSceneSequenceReplProperties
{
    FFrameTime LastKnownPosition;                                                     // 0x0000 (size: 0x8)
    TEnumAsByte<EMovieScenePlayerStatus::Type> LastKnownStatus;                       // 0x0008 (size: 0x1)
    int32 LastKnownNumLoops;                                                          // 0x000C (size: 0x4)
    int32 LastKnownSerialNumber;                                                      // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FMovieSceneSequenceTickInterval
{
    float TickIntervalSeconds;                                                        // 0x0000 (size: 0x4)
    float EvaluationBudgetMicroseconds;                                               // 0x0004 (size: 0x4)
    bool bTickWhenPaused;                                                             // 0x0008 (size: 0x1)
    bool bAllowRounding;                                                              // 0x0009 (size: 0x1)

}; // Size: 0xC

struct FMovieSceneSequenceTransform
{
    FMovieSceneTimeTransform LinearTransform;                                         // 0x0000 (size: 0xC)
    TArray<FMovieSceneNestedSequenceTransform> NestedTransforms;                      // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FMovieSceneSpawnable
{
    FTransform SpawnTransform;                                                        // 0x0000 (size: 0x60)
    TArray<FName> Tags;                                                               // 0x0060 (size: 0x10)
    bool bContinuouslyRespawn;                                                        // 0x0070 (size: 0x1)
    bool bNetAddressableName;                                                         // 0x0071 (size: 0x1)
    FMovieSceneDynamicBinding DynamicBinding;                                         // 0x0078 (size: 0x28)
    FGuid Guid;                                                                       // 0x00A0 (size: 0x10)
    FString Name;                                                                     // 0x00B0 (size: 0x10)
    class UObject* ObjectTemplate;                                                    // 0x00C0 (size: 0x8)
    TArray<FGuid> ChildPossessables;                                                  // 0x00C8 (size: 0x10)
    ESpawnOwnership Ownership;                                                        // 0x00D8 (size: 0x1)
    FName LevelName;                                                                  // 0x00DC (size: 0x8)

}; // Size: 0xF0

struct FMovieSceneSubSectionData
{
    TWeakObjectPtr<class UMovieSceneSubSection> Section;                              // 0x0000 (size: 0x8)
    FGuid ObjectBindingID;                                                            // 0x0008 (size: 0x10)
    ESectionEvaluationFlags Flags;                                                    // 0x0018 (size: 0x1)

}; // Size: 0x1C

struct FMovieSceneSubSectionOriginOverrideMask
{
    uint32 Mask;                                                                      // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FMovieSceneSubSequenceData
{
    FSoftObjectPath Sequence;                                                         // 0x0000 (size: 0x20)
    FMovieSceneSequenceTransform OuterToInnerTransform;                               // 0x0020 (size: 0x20)
    FMovieSceneSequenceTransform RootToSequenceTransform;                             // 0x0040 (size: 0x20)
    FFrameRate TickResolution;                                                        // 0x0060 (size: 0x8)
    FMovieSceneSequenceID DeterministicSequenceID;                                    // 0x0068 (size: 0x4)
    FMovieSceneFrameRange PlayRange;                                                  // 0x006C (size: 0x10)
    FMovieSceneFrameRange ParentPlayRange;                                            // 0x007C (size: 0x10)
    FMovieSceneFrameRange PreRollRange;                                               // 0x008C (size: 0x10)
    FMovieSceneFrameRange PostRollRange;                                              // 0x009C (size: 0x10)
    int16 HierarchicalBias;                                                           // 0x00AC (size: 0x2)
    EMovieSceneSubSectionFlags AccumulatedFlags;                                      // 0x00AE (size: 0x1)
    bool bCanLoop;                                                                    // 0x00AF (size: 0x1)
    FMovieSceneSequenceInstanceDataPtr InstanceData;                                  // 0x00B0 (size: 0x18)
    FName SectionPath;                                                                // 0x00C8 (size: 0x8)
    class UMovieSceneCondition* Condition;                                            // 0x00D0 (size: 0x8)
    FGuid SubSectionSignature;                                                        // 0x00E0 (size: 0x10)

}; // Size: 0xF0

struct FMovieSceneSubSequenceTree
{
}; // Size: 0x60

struct FMovieSceneSubSequenceTreeEntry
{
}; // Size: 0x30

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

struct FMovieSceneTimeWarpChannel : public FMovieSceneDoubleChannel
{
    class UMovieScene* Owner;                                                         // 0x0118 (size: 0x8)

}; // Size: 0x128

struct FMovieSceneTimeWarpClamp
{
    FFrameNumber max;                                                                 // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FMovieSceneTimeWarpClampFloat
{
    float max;                                                                        // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FMovieSceneTimeWarpFixedFrame
{
    FFrameNumber FrameNumber;                                                         // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FMovieSceneTimeWarpFrameRate
{
    uint8 FrameRateNumerator;                                                         // 0x0000 (size: 0x3)
    uint8 FrameRateDenominator;                                                       // 0x0003 (size: 0x3)

}; // Size: 0x6

struct FMovieSceneTimeWarpLoop
{
    FFrameNumber Duration;                                                            // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FMovieSceneTimeWarpLoopFloat
{
    float Duration;                                                                   // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FMovieSceneTimeWarpVariant
{
    FMovieSceneNumericVariant Variant;                                                // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FMovieSceneTimeWarping
{
    FFrameNumber Start;                                                               // 0x0000 (size: 0x4)
    FFrameNumber End;                                                                 // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FMovieSceneTimecodeSource
{
    FTimecode Timecode;                                                               // 0x0000 (size: 0x18)

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
    FFrameNumberRange Range;                                                          // 0x0008 (size: 0x10)
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

struct FMovieSceneTrackRowMetadata
{
    FMovieSceneConditionContainer ConditionContainer;                                 // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FMovieSceneTransformBreadcrumbs
{
    TArray<FFrameTime> Breadcrumbs;                                                   // 0x0000 (size: 0x10)
    EMovieSceneBreadcrumbMode Mode;                                                   // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FMovieSceneWarpCounter : public FMovieSceneTransformBreadcrumbs
{
}; // Size: 0x28

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

class IMovieSceneBindingEventReceiverInterface : public IInterface
{

    void OnObjectUnboundBySequencer(class UMovieSceneSequencePlayer* Player, FMovieSceneObjectBindingID BindingID);
    void OnObjectBoundBySequencer(class UMovieSceneSequencePlayer* Player, FMovieSceneObjectBindingID BindingID);
}; // Size: 0x28

class IMovieSceneBindingOwnerInterface : public IInterface
{
}; // Size: 0x28

class IMovieSceneBlenderSystemSupport : public IInterface
{
}; // Size: 0x28

class IMovieSceneBoundObjectProxy : public IInterface
{

    class UObject* BP_GetBoundObjectForSequencer(class UObject* ResolvedObject);
}; // Size: 0x28

class IMovieSceneCachedTrack : public IInterface
{
}; // Size: 0x28

class IMovieSceneChannelOverrideProvider : public IInterface
{
}; // Size: 0x28

class IMovieSceneChannelOwner : public IInterface
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

class IMovieSceneKeyProxy : public IInterface
{
}; // Size: 0x28

class IMovieSceneMetaDataInterface : public IInterface
{
}; // Size: 0x28

class IMovieScenePlaybackClient : public IInterface
{
}; // Size: 0x28

class IMovieScenePreAnimatedStateSystemInterface : public IInterface
{
}; // Size: 0x28

class IMovieSceneSequencePlayerObserver : public IInterface
{
}; // Size: 0x28

class IMovieSceneSequenceTickManagerClient : public IInterface
{
}; // Size: 0x28

class IMovieSceneTrackTemplateProducer : public IInterface
{
}; // Size: 0x28

class IMovieSceneValueDecomposer : public IInterface
{
}; // Size: 0x28

class INodeAndChannelMappings : public IInterface
{
}; // Size: 0x28

class UBuiltInDynamicBindingResolverLibrary : public UBlueprintFunctionLibrary
{

    FMovieSceneDynamicBindingResolveResult ResolveToPlayerPawn(class UObject* WorldContextObject, int32 PlayerControllerIndex);
}; // Size: 0x28

class UMovieScene : public UMovieSceneSignedObject
{
    TArray<FMovieSceneSpawnable> Spawnables;                                          // 0x0060 (size: 0x10)
    TArray<FMovieScenePossessable> Possessables;                                      // 0x0070 (size: 0x10)
    TArray<FMovieSceneBinding> ObjectBindings;                                        // 0x0080 (size: 0x10)
    TMap<class FName, class FMovieSceneObjectBindingIDs> BindingGroups;               // 0x0090 (size: 0x50)
    TArray<class UMovieSceneTrack*> Tracks;                                           // 0x00E0 (size: 0x10)
    class UMovieSceneTrack* CameraCutTrack;                                           // 0x00F0 (size: 0x8)
    FMovieSceneFrameRange SelectionRange;                                             // 0x00F8 (size: 0x10)
    FMovieSceneFrameRange PlaybackRange;                                              // 0x0108 (size: 0x10)
    FFrameRate TickResolution;                                                        // 0x0118 (size: 0x8)
    FFrameRate DisplayRate;                                                           // 0x0120 (size: 0x8)
    EMovieSceneEvaluationType EvaluationType;                                         // 0x0128 (size: 0x1)
    EUpdateClockSource ClockSource;                                                   // 0x0129 (size: 0x1)
    FSoftObjectPath CustomClockSourcePath;                                            // 0x0130 (size: 0x20)
    TArray<FMovieSceneMarkedFrame> MarkedFrames;                                      // 0x0150 (size: 0x10)
    TArray<class UMovieSceneGroupCondition*> GeneratedConditions;                     // 0x0160 (size: 0x10)

}; // Size: 0x170

class UMovieSceneBindingLifetimeSection : public UMovieSceneSection
{
}; // Size: 0x100

class UMovieSceneBindingLifetimeSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x40

class UMovieSceneBindingLifetimeTrack : public UMovieSceneTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x0100 (size: 0x10)

}; // Size: 0x110

class UMovieSceneBindingOverrides : public UObject
{
    TArray<FMovieSceneBindingOverrideData> BindingData;                               // 0x0028 (size: 0x10)

}; // Size: 0x90

class UMovieSceneBlenderSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x68

class UMovieSceneBoolSection : public UMovieSceneSection
{
    bool DefaultValue;                                                                // 0x00F8 (size: 0x1)
    FMovieSceneBoolChannel BoolCurve;                                                 // 0x0100 (size: 0x108)

}; // Size: 0x208

class UMovieSceneBoundSceneComponentInstantiator : public UMovieSceneEntityInstantiatorSystem
{
}; // Size: 0x40

class UMovieSceneBuiltInEasingFunction : public UObject
{
    EMovieSceneBuiltInEasing Type;                                                    // 0x0030 (size: 0x1)

}; // Size: 0x38

class UMovieSceneCachePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
{
}; // Size: 0x40

class UMovieSceneChannelOverrideContainer : public UMovieSceneSignedObject
{
}; // Size: 0x58

class UMovieSceneCompiledData : public UObject
{
    FMovieSceneEvaluationTemplate EvaluationTemplate;                                 // 0x0028 (size: 0x160)
    FMovieSceneSequenceHierarchy Hierarchy;                                           // 0x0188 (size: 0x140)
    FMovieSceneEntityComponentField EntityComponentField;                             // 0x02C8 (size: 0xF0)
    FMovieSceneEvaluationField TrackTemplateField;                                    // 0x03B8 (size: 0x30)
    TArray<FMovieSceneDeterminismFence> DeterminismFences;                            // 0x03E8 (size: 0x10)
    FGuid CompiledSignature;                                                          // 0x03F8 (size: 0x10)
    FGuid CompilerVersion;                                                            // 0x0408 (size: 0x10)
    EMovieSceneSequenceCompilerMask AccumulatedMask;                                  // 0x0418 (size: 0x1)
    EMovieSceneSequenceCompilerMask AllocatedMask;                                    // 0x0419 (size: 0x1)
    EMovieSceneSequenceFlags AccumulatedFlags;                                        // 0x041A (size: 0x1)

}; // Size: 0x420

class UMovieSceneCompiledDataManager : public UObject
{
    TMap<int32, FMovieSceneSequenceHierarchy> Hierarchies;                            // 0x00D8 (size: 0x50)
    TMap<int32, FMovieSceneEvaluationTemplate> TrackTemplates;                        // 0x0128 (size: 0x50)
    TMap<int32, FMovieSceneEvaluationField> TrackTemplateFields;                      // 0x0178 (size: 0x50)
    TMap<int32, FMovieSceneEntityComponentField> EntityComponentFields;               // 0x01C8 (size: 0x50)

}; // Size: 0x230

class UMovieSceneCondition : public UMovieSceneSignedObject
{
    bool bInvert;                                                                     // 0x0058 (size: 0x1)

    EMovieSceneConditionScope BP_GetScope();
    EMovieSceneConditionCheckFrequency BP_GetCheckFrequency();
    bool BP_EvaluateCondition(const FMovieSceneConditionContext& ConditionContext);
}; // Size: 0x60

class UMovieSceneCustomBinding : public UObject
{

    int32 GetBaseEnginePriority();
    int32 GetBaseCustomPriority();
}; // Size: 0x28

class UMovieSceneEasingExternalCurve : public UObject
{
    class UCurveFloat* Curve;                                                         // 0x0030 (size: 0x8)

}; // Size: 0x38

class UMovieSceneEntityGroupingSystem : public UMovieSceneEntitySystem
{
}; // Size: 0xE8

class UMovieSceneEntityInstantiatorSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x40

class UMovieSceneEntitySystem : public UObject
{
    class UMovieSceneEntitySystemLinker* Linker;                                      // 0x0028 (size: 0x8)

}; // Size: 0x40

class UMovieSceneEntitySystemLinker : public UObject
{
    FMovieSceneEntitySystemGraph SystemGraph;                                         // 0x02A0 (size: 0x190)

}; // Size: 0x750

class UMovieSceneEvalTimeSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x1B0

class UMovieSceneEvaluationHookSystem : public UMovieSceneEntitySystem
{
    TMap<class FMovieSceneEvaluationInstanceKey, class FMovieSceneEvaluationHookEventContainer> PendingEventsByRootInstance; // 0x0040 (size: 0x50)

}; // Size: 0x90

class UMovieSceneFolder : public UObject
{
    FName FolderName;                                                                 // 0x002C (size: 0x8)
    TArray<class UMovieSceneFolder*> ChildFolders;                                    // 0x0038 (size: 0x10)
    TArray<class UMovieSceneTrack*> ChildTracks;                                      // 0x0048 (size: 0x10)
    TArray<FString> ChildObjectBindingStrings;                                        // 0x0058 (size: 0x10)

}; // Size: 0x78

class UMovieSceneGenericBoundObjectInstantiator : public UMovieSceneEntityInstantiatorSystem
{
}; // Size: 0x40

class UMovieSceneGroupCondition : public UMovieSceneCondition
{
    EMovieSceneGroupConditionOperator Operator;                                       // 0x0060 (size: 0x1)
    TArray<FMovieSceneConditionContainer> SubConditions;                              // 0x0068 (size: 0x10)

}; // Size: 0x78

class UMovieSceneHookSection : public UMovieSceneSection
{
    uint8 bRequiresRangedHook;                                                        // 0x0108 (size: 0x1)
    uint8 bRequiresTriggerHooks;                                                      // 0x0108 (size: 0x1)

}; // Size: 0x110

class UMovieSceneMetaData : public UObject
{
    FString Author;                                                                   // 0x0030 (size: 0x10)
    FDateTime Created;                                                                // 0x0040 (size: 0x8)
    FString Notes;                                                                    // 0x0048 (size: 0x10)

    void SetNotes(FString InNotes);
    void SetCreated(FDateTime InCreated);
    void SetAuthor(FString InAuthor);
    FString GetNotes();
    FDateTime GetCreated();
    FString GetAuthor();
}; // Size: 0x58

class UMovieSceneNameableTrack : public UMovieSceneTrack
{
}; // Size: 0xF8

class UMovieSceneNodeGroup : public UObject
{
}; // Size: 0x28

class UMovieSceneNodeGroupCollection : public UObject
{
}; // Size: 0x28

class UMovieSceneNumericVariantGetter : public UMovieSceneSignedObject
{
    class UMovieSceneNumericVariantGetter* ReferenceToSelf;                           // 0x0058 (size: 0x8)

}; // Size: 0x60

class UMovieScenePlayRateCurve : public UMovieSceneTimeWarpGetter
{
    FMovieSceneTimeWarpChannel PlayRate;                                              // 0x0070 (size: 0x128)

}; // Size: 0x1B0

class UMovieSceneReplaceableBindingBase : public UMovieSceneCustomBinding
{
}; // Size: 0x28

class UMovieSceneRestorePreAnimatedStateSystem : public UMovieSceneEntityInstantiatorSystem
{
}; // Size: 0x50

class UMovieSceneRootInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem
{
}; // Size: 0x40

class UMovieSceneSection : public UMovieSceneSignedObject
{
    FMovieSceneSectionEvalOptions EvalOptions;                                        // 0x0058 (size: 0x2)
    FMovieSceneEasingSettings Easing;                                                 // 0x0060 (size: 0x38)
    FMovieSceneFrameRange SectionRange;                                               // 0x0098 (size: 0x10)
    FMovieSceneConditionContainer ConditionContainer;                                 // 0x00A8 (size: 0x8)
    FFrameNumber PreRollFrames;                                                       // 0x00B0 (size: 0x4)
    FFrameNumber PostRollFrames;                                                      // 0x00B4 (size: 0x4)
    int32 RowIndex;                                                                   // 0x00B8 (size: 0x4)
    int32 OverlapPriority;                                                            // 0x00BC (size: 0x4)
    uint8 bIsActive;                                                                  // 0x00C0 (size: 0x1)
    uint8 bIsLocked;                                                                  // 0x00C0 (size: 0x1)
    float StartTime;                                                                  // 0x00C4 (size: 0x4)
    float EndTime;                                                                    // 0x00C8 (size: 0x4)
    float PrerollTime;                                                                // 0x00CC (size: 0x4)
    float PostrollTime;                                                               // 0x00D0 (size: 0x4)
    uint8 bIsInfinite;                                                                // 0x00D4 (size: 0x1)
    bool bSupportsInfiniteRange;                                                      // 0x00D8 (size: 0x1)
    FOptionalMovieSceneBlendType BlendType;                                           // 0x00D9 (size: 0x2)

    void SetRowIndex(int32 NewRowIndex);
    void SetPreRollFrames(int32 InPreRollFrames);
    void SetPostRollFrames(int32 InPostRollFrames);
    void SetOverlapPriority(int32 NewPriority);
    void SetIsLocked(bool bInIsLocked);
    void SetIsActive(bool bInIsActive);
    void SetCompletionMode(EMovieSceneCompletionMode InCompletionMode);
    void SetColorTint(const FColor& InColorTint);
    void SetBlendType(EMovieSceneBlendType InBlendType);
    bool IsLocked();
    bool IsActive();
    int32 GetRowIndex();
    int32 GetPreRollFrames();
    int32 GetPostRollFrames();
    int32 GetOverlapPriority();
    EMovieSceneCompletionMode GetCompletionMode();
    FColor GetColorTint();
    FOptionalMovieSceneBlendType GetBlendType();
}; // Size: 0xF8

class UMovieSceneSectionChannelOverrideRegistry : public UObject
{
    TMap<class FName, class UMovieSceneChannelOverrideContainer*> Overrides;          // 0x0028 (size: 0x50)

}; // Size: 0x78

class UMovieSceneSequence : public UMovieSceneSignedObject
{
    class UMovieSceneCompiledData* CompiledData;                                      // 0x0058 (size: 0x8)
    EMovieSceneCompletionMode DefaultCompletionMode;                                  // 0x0060 (size: 0x1)
    bool bParentContextsAreSignificant;                                               // 0x0061 (size: 0x1)
    bool bPlayableDirectly;                                                           // 0x0062 (size: 0x1)
    EMovieSceneSequenceFlags SequenceFlags;                                           // 0x0063 (size: 0x1)

    FMovieSceneTimecodeSource GetEarliestTimecodeSource();
    TArray<FMovieSceneObjectBindingID> FindBindingsByTag(FName InBindingName);
    FMovieSceneObjectBindingID FindBindingByTag(FName InBindingName);
}; // Size: 0x68

class UMovieSceneSequencePlayer : public UObject
{
    TScriptInterface<class IMovieSceneSequencePlayerObserver> Observer;               // 0x0218 (size: 0x10)
    FMovieSceneSequencePlayerOnPlay OnPlay;                                           // 0x0228 (size: 0x10)
    void OnMovieSceneSequencePlayerEvent();
    FMovieSceneSequencePlayerOnPlayReverse OnPlayReverse;                             // 0x0238 (size: 0x10)
    void OnMovieSceneSequencePlayerEvent();
    FMovieSceneSequencePlayerOnStop OnStop;                                           // 0x0248 (size: 0x10)
    void OnMovieSceneSequencePlayerEvent();
    FMovieSceneSequencePlayerOnPause OnPause;                                         // 0x0258 (size: 0x10)
    void OnMovieSceneSequencePlayerEvent();
    FMovieSceneSequencePlayerOnFinished OnFinished;                                   // 0x0268 (size: 0x10)
    void OnMovieSceneSequencePlayerEvent();
    TEnumAsByte<EMovieScenePlayerStatus::Type> Status;                                // 0x0288 (size: 0x1)
    uint8 bReversePlayback;                                                           // 0x028C (size: 0x1)
    class UMovieSceneSequence* Sequence;                                              // 0x0290 (size: 0x8)
    FFrameNumber StartTime;                                                           // 0x0298 (size: 0x4)
    int32 DurationFrames;                                                             // 0x029C (size: 0x4)
    float DurationSubFrames;                                                          // 0x02A0 (size: 0x4)
    int32 CurrentNumLoops;                                                            // 0x02A4 (size: 0x4)
    int32 SerialNumber;                                                               // 0x02A8 (size: 0x4)
    FMovieSceneSequencePlaybackSettings PlaybackSettings;                             // 0x02AC (size: 0x28)
    FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;                   // 0x02D8 (size: 0x20)
    FMovieSceneSequenceReplProperties NetSyncProps;                                   // 0x0384 (size: 0x14)
    TScriptInterface<class IMovieScenePlaybackClient> PlaybackClient;                 // 0x0398 (size: 0x10)
    class UMovieSceneSequenceTickManager* TickManager;                                // 0x03A8 (size: 0x8)

    void StopAtCurrentTime();
    void Stop();
    void SetWeight(double InWeight);
    void SetTimeRange(float StartTime, float Duration);
    void SetPlayRate(float PlayRate);
    void SetPlaybackPosition(FMovieSceneSequencePlaybackParams PlaybackParams);
    void SetHideHud(bool HideHud);
    void SetFrameRate(FFrameRate FrameRate);
    void SetFrameRange(int32 StartFrame, int32 Duration, float SubFrames);
    void SetDisableCameraCuts(bool bInDisableCameraCuts);
    void SetCompletionModeOverride(EMovieSceneCompletionModeOverride CompletionModeOverride);
    void Scrub();
    void RPC_OnStopEvent(FFrameTime StoppedTime, int32 NewSerialNumber);
    void RPC_OnFinishPlaybackEvent(FFrameTime StoppedTime, int32 NewSerialNumber);
    void RPC_ExplicitServerUpdateEvent(EUpdatePositionMethod Method, FFrameTime RelevantTime, int32 NewSerialNumber);
    void RestoreState();
    void RequestInvalidateBinding(FMovieSceneObjectBindingID ObjectBinding);
    void RemoveWeight();
    void PlayTo(FMovieSceneSequencePlaybackParams PlaybackParams, FMovieSceneSequencePlayToParams PlayToParams);
    void PlayReverse();
    void PlayLooping(int32 NumLoops);
    void Play();
    void Pause();
    bool IsReversed();
    bool IsPlaying();
    bool IsPaused();
    void GoToEndAndStop();
    FQualifiedFrameTime GetStartTime();
    FString GetSequenceName(bool bAddClientInfo);
    class UMovieSceneSequence* GetSequence();
    float GetPlayRate();
    TArray<FMovieSceneObjectBindingID> GetObjectBindings(class UObject* InObject);
    bool GetHideHud();
    FFrameRate GetFrameRate();
    int32 GetFrameDuration();
    FQualifiedFrameTime GetEndTime();
    FQualifiedFrameTime GetDuration();
    bool GetDisableCameraCuts();
    FQualifiedFrameTime GetCurrentTime();
    EMovieSceneCompletionModeOverride GetCompletionModeOverride();
    TArray<class UObject*> GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding);
    void ChangePlaybackDirection();
}; // Size: 0x468

class UMovieSceneSequenceTickManager : public UObject
{
}; // Size: 0x98

class UMovieSceneSignedObject : public UObject
{
    FGuid signature;                                                                  // 0x002C (size: 0x10)

}; // Size: 0x58

class UMovieSceneSpawnSection : public UMovieSceneBoolSection
{
}; // Size: 0x210

class UMovieSceneSpawnTrack : public UMovieSceneTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x00F8 (size: 0x10)
    FGuid ObjectGuid;                                                                 // 0x0108 (size: 0x10)

}; // Size: 0x118

class UMovieSceneSpawnableBindingBase : public UMovieSceneCustomBinding
{
    ESpawnOwnership SpawnOwnership;                                                   // 0x0028 (size: 0x1)
    bool bContinuouslyRespawn;                                                        // 0x0029 (size: 0x1)

}; // Size: 0x30

class UMovieSceneSpawnablesSystem : public UMovieSceneEntitySystem
{
}; // Size: 0x40

class UMovieSceneSubSection : public UMovieSceneSection
{
    FMovieSceneSectionParameters Parameters;                                          // 0x0100 (size: 0x30)
    float StartOffset;                                                                // 0x0130 (size: 0x4)
    float TimeScale;                                                                  // 0x0134 (size: 0x4)
    float PrerollTime;                                                                // 0x0138 (size: 0x4)
    uint8 NetworkMask;                                                                // 0x013C (size: 0x1)
    FMovieSceneSubSectionOriginOverrideMask OriginOverrideMask;                       // 0x0140 (size: 0x4)
    FMovieSceneDoubleChannel Translation;                                             // 0x0148 (size: 0x348)
    FMovieSceneDoubleChannel Rotation;                                                // 0x0490 (size: 0x348)
    class UMovieSceneSequence* SubSequence;                                           // 0x07D8 (size: 0x8)

    void SetSequence(class UMovieSceneSequence* Sequence);
    class UMovieSceneSequence* GetSequence();
}; // Size: 0x7E0

class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
    TArray<class UMovieSceneSection*> Sections;                                       // 0x00F8 (size: 0x10)

}; // Size: 0x108

class UMovieSceneTimeWarpCurve : public UMovieSceneTimeWarpGetter
{
    FMovieSceneTimeWarpChannel Channel;                                               // 0x0070 (size: 0x128)

}; // Size: 0x198

class UMovieSceneTimeWarpGetter : public UMovieSceneNumericVariantGetter
{
    uint8 bMuted;                                                                     // 0x0068 (size: 0x1)

}; // Size: 0x70

class UMovieSceneTimeWarpSection : public UMovieSceneSection
{
    FMovieSceneTimeWarpVariant TimeWarp;                                              // 0x00F8 (size: 0x8)

}; // Size: 0x100

class UMovieSceneTimeWarpTrack : public UMovieSceneTrack
{
    bool bIsActiveTimeWarp;                                                           // 0x00F8 (size: 0x1)
    TArray<class UMovieSceneSection*> Sections;                                       // 0x0100 (size: 0x10)

}; // Size: 0x110

class UMovieSceneTrack : public UMovieSceneSignedObject
{
    FMovieSceneTrackEvalOptions EvalOptions;                                          // 0x0058 (size: 0x4)
    FMovieSceneConditionContainer ConditionContainer;                                 // 0x0060 (size: 0x8)
    bool bIsEvalDisabled;                                                             // 0x0069 (size: 0x1)
    TArray<int32> RowsDisabled;                                                       // 0x0070 (size: 0x10)
    FGuid EvaluationFieldGuid;                                                        // 0x0084 (size: 0x10)
    FMovieSceneTrackEvaluationField EvaluationField;                                  // 0x0098 (size: 0x10)
    TMap<int32, FMovieSceneTrackRowMetadata> TrackRowMetadata;                        // 0x00A8 (size: 0x50)

}; // Size: 0xF8

class UMovieSceneTrackInstance : public UObject
{
    TWeakObjectPtr<class UObject> WeakAnimatedObject;                                 // 0x0028 (size: 0x8)
    bool bIsRootTrackInstance;                                                        // 0x0030 (size: 0x1)
    class UMovieSceneEntitySystemLinker* PrivateLinker;                               // 0x0038 (size: 0x8)
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
}; // Size: 0x128

class UTestMovieSceneEvalHookTrack : public UMovieSceneTrack
{
    TArray<class UMovieSceneSection*> SectionArray;                                   // 0x00F8 (size: 0x10)

}; // Size: 0x108

class UTestMovieSceneSection : public UMovieSceneSection
{
}; // Size: 0xF8

class UTestMovieSceneSequence : public UMovieSceneSequence
{
    class UMovieScene* MovieScene;                                                    // 0x0068 (size: 0x8)

}; // Size: 0x70

class UTestMovieSceneSubSection : public UMovieSceneSubSection
{
}; // Size: 0x7E0

class UTestMovieSceneSubTrack : public UMovieSceneSubTrack
{
    TArray<class UMovieSceneSection*> SectionArray;                                   // 0x0108 (size: 0x10)

}; // Size: 0x118

class UTestMovieSceneTrack : public UMovieSceneTrack
{
    bool bHighPassFilter;                                                             // 0x0100 (size: 0x1)
    TArray<class UMovieSceneSection*> SectionArray;                                   // 0x0108 (size: 0x10)

}; // Size: 0x118

#endif
