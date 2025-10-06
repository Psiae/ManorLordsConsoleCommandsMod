#ifndef UE4SS_SDK_LiveLink_HPP
#define UE4SS_SDK_LiveLink_HPP

#include "LiveLink_enums.hpp"

struct FLiveLinkRetargetAssetReference
{
}; // Size: 0x1

struct FLiveLinkRoleProjectSetting
{
    TSubclassOf<class ULiveLinkRole> Role;                                            // 0x0000 (size: 0x8)
    TSubclassOf<class ULiveLinkSubjectSettings> SettingClass;                         // 0x0008 (size: 0x8)
    TSubclassOf<class ULiveLinkFrameInterpolationProcessor> FrameInterpolationProcessor; // 0x0010 (size: 0x8)
    TArray<class TSubclassOf<ULiveLinkFramePreProcessor>> FramePreProcessors;         // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FLiveLinkVirtualSubjectBoneAttachment
{
    FLiveLinkSubjectName ParentSubject;                                               // 0x0000 (size: 0x8)
    FName ParentBone;                                                                 // 0x0008 (size: 0x8)
    FLiveLinkSubjectName ChildSubject;                                                // 0x0010 (size: 0x8)
    FName ChildBone;                                                                  // 0x0018 (size: 0x8)
    FVector LocationOffset;                                                           // 0x0020 (size: 0x18)
    FRotator RotationOffset;                                                          // 0x0038 (size: 0x18)

}; // Size: 0x60

struct FProviderPollResult
{
    FString Name;                                                                     // 0x0010 (size: 0x10)
    FString MachineName;                                                              // 0x0020 (size: 0x10)
    double MachineTimeOffset;                                                         // 0x0030 (size: 0x8)
    bool bIsValidProvider;                                                            // 0x0038 (size: 0x1)

}; // Size: 0x90

class UDEPRECATED_LiveLinkDrivenComponent : public UActorComponent
{
    FLiveLinkSubjectName SubjectName;                                                 // 0x00A0 (size: 0x8)
    FName ActorTransformBone;                                                         // 0x00A8 (size: 0x8)
    bool bModifyActorTransform;                                                       // 0x00B0 (size: 0x1)
    bool bSetRelativeLocation;                                                        // 0x00B1 (size: 0x1)

}; // Size: 0xB8

class ULiveLinkAnimationAxisSwitchPreProcessor : public ULiveLinkTransformAxisSwitchPreProcessor
{
}; // Size: 0x70

class ULiveLinkAnimationFrameInterpolationProcessor : public ULiveLinkBasicFrameInterpolationProcessor
{
}; // Size: 0x50

class ULiveLinkAnimationRoleToTransform : public ULiveLinkFrameTranslator
{
    FName BoneName;                                                                   // 0x0028 (size: 0x8)

}; // Size: 0x40

class ULiveLinkAnimationVirtualSubject : public ULiveLinkVirtualSubject
{
    TArray<FLiveLinkVirtualSubjectBoneAttachment> Attachments;                        // 0x0178 (size: 0x10)
    EBoneTransformResolution LocationBehavior;                                        // 0x0188 (size: 0x4)
    EBoneTransformResolution RotationBehavior;                                        // 0x018C (size: 0x4)
    bool bAppendSubjectNameToBones;                                                   // 0x0190 (size: 0x1)

}; // Size: 0x240

class ULiveLinkBasicFrameInterpolationProcessor : public ULiveLinkFrameInterpolationProcessor
{
    bool bInterpolatePropertyValues;                                                  // 0x0028 (size: 0x1)

}; // Size: 0x40

class ULiveLinkBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void TransformNames(FSubjectFrameHandle& SubjectFrameHandle, TArray<FName>& TransformNames);
    void TransformName(FLiveLinkTransform& LiveLinkTransform, FName& Name);
    void SetLiveLinkSubjectEnabled(const FLiveLinkSubjectKey SubjectKey, bool bEnabled);
    bool RemoveSource(FLiveLinkSourceHandle& SourceHandle);
    void ParentBoneSpaceTransform(FLiveLinkTransform& LiveLinkTransform, FTransform& Transform);
    int32 NumberOfTransforms(FSubjectFrameHandle& SubjectFrameHandle);
    bool IsSpecificLiveLinkSubjectEnabled(const FLiveLinkSubjectKey SubjectKey, bool bForThisFrame);
    bool IsSourceStillValid(FLiveLinkSourceHandle& SourceHandle);
    bool IsLiveLinkSubjectEnabled(const FLiveLinkSubjectName SubjectName);
    bool HasParent(FLiveLinkTransform& LiveLinkTransform);
    void GetTransformByName(FSubjectFrameHandle& SubjectFrameHandle, FName TransformName, FLiveLinkTransform& LiveLinkTransform);
    void GetTransformByIndex(FSubjectFrameHandle& SubjectFrameHandle, int32 TransformIndex, FLiveLinkTransform& LiveLinkTransform);
    TSubclassOf<class ULiveLinkRole> GetSpecificLiveLinkSubjectRole(const FLiveLinkSubjectKey SubjectKey);
    FText GetSourceTypeFromGuid(FGuid SourceGuid);
    FText GetSourceType(FLiveLinkSourceHandle& SourceHandle);
    FText GetSourceStatus(FLiveLinkSourceHandle& SourceHandle);
    FText GetSourceMachineName(FLiveLinkSourceHandle& SourceHandle);
    void GetRootTransform(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkTransform& LiveLinkTransform);
    bool GetPropertyValue(FLiveLinkBasicBlueprintData& BasicData, FName PropertyName, float& Value);
    void GetParent(FLiveLinkTransform& LiveLinkTransform, FLiveLinkTransform& Parent);
    void GetMetadata(FSubjectFrameHandle& SubjectFrameHandle, FSubjectMetadata& MetaData);
    ELiveLinkSubjectState GetLiveLinkSubjectState(const FLiveLinkSubjectName SubjectName);
    TArray<FLiveLinkSubjectKey> GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeVirtualSubject);
    TSubclassOf<class ULiveLinkRole> GetLiveLinkSubjectRole(const FLiveLinkSubjectName SubjectName);
    TArray<FLiveLinkSubjectName> GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject);
    void GetCurves(FSubjectFrameHandle& SubjectFrameHandle, TMap<FName, float>& Curves);
    void GetChildren(FLiveLinkTransform& LiveLinkTransform, TArray<FLiveLinkTransform>& Children);
    void GetBasicData(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkBasicBlueprintData& BasicBlueprintData);
    bool GetAnimationStaticData(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkSkeletonStaticData& AnimationStaticData);
    bool GetAnimationFrameData(FSubjectFrameHandle& SubjectFrameHandle, FLiveLinkAnimationFrameData& AnimationFrameData);
    bool EvaluateLiveLinkFrameWithSpecificRole(FLiveLinkSubjectName SubjectName, TSubclassOf<class ULiveLinkRole> Role, FLiveLinkBaseBlueprintData& OutBlueprintData);
    bool EvaluateLiveLinkFrameAtWorldTimeOffset(FLiveLinkSubjectName SubjectName, TSubclassOf<class ULiveLinkRole> Role, float WorldTimeOffset, FLiveLinkBaseBlueprintData& OutBlueprintData);
    bool EvaluateLiveLinkFrameAtSceneTime(FLiveLinkSubjectName SubjectName, TSubclassOf<class ULiveLinkRole> Role, FTimecode SceneTime, FLiveLinkBaseBlueprintData& OutBlueprintData);
    bool EvaluateLiveLinkFrame(FLiveLinkSubjectRepresentation SubjectRepresentation, FLiveLinkBaseBlueprintData& OutBlueprintData);
    void ComponentSpaceTransform(FLiveLinkTransform& LiveLinkTransform, FTransform& Transform);
    int32 ChildCount(FLiveLinkTransform& LiveLinkTransform);
}; // Size: 0x28

class ULiveLinkBlueprintVirtualSubject : public ULiveLinkVirtualSubject
{

    bool UpdateVirtualSubjectStaticData_Internal(const FLiveLinkBaseStaticData& InStruct);
    bool UpdateVirtualSubjectFrameData_Internal(const FLiveLinkBaseFrameData& InStruct, bool bInShouldStampCurrentTime);
    void OnUpdate();
    void OnInitialize();
}; // Size: 0x198

class ULiveLinkComponent : public UActorComponent
{
    FLiveLinkComponentOnLiveLinkUpdated OnLiveLinkUpdated;                            // 0x00A0 (size: 0x10)
    void LiveLinkTickSignature(float DeltaTime);

    void GetSubjectDataAtWorldTime(const FName SubjectName, const float WorldTime, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle);
    void GetSubjectDataAtSceneTime(const FName SubjectName, const FTimecode& SceneTime, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle);
    void GetSubjectData(const FName SubjectName, bool& bSuccess, FSubjectFrameHandle& SubjectFrameHandle);
    void GetAvailableSubjectNames(TArray<FName>& SubjectNames);
}; // Size: 0xC0

class ULiveLinkCustomTimeStep : public UGenlockedCustomTimeStep
{
    FFrameRate LiveLinkDataRate;                                                      // 0x0030 (size: 0x8)
    FLiveLinkSubjectKey SubjectKey;                                                   // 0x0038 (size: 0x18)
    bool bLockStepMode;                                                               // 0x0050 (size: 0x1)
    uint32 FrameRateDivider;                                                          // 0x0054 (size: 0x4)
    double TimeoutInSeconds;                                                          // 0x0058 (size: 0x8)

}; // Size: 0xC0

class ULiveLinkMessageBusFinder : public UObject
{

    void GetAvailableProviders(class UObject* WorldContextObject, FLatentActionInfo LatentInfo, float Duration, TArray<FProviderPollResult>& AvailableProviders);
    class ULiveLinkMessageBusFinder* ConstructMessageBusFinder();
    void ConnectToProvider(FProviderPollResult& Provider, FLiveLinkSourceHandle& SourceHandle);
}; // Size: 0x80

class ULiveLinkMessageBusSourceFactory : public ULiveLinkSourceFactory
{
}; // Size: 0x28

class ULiveLinkMessageBusSourceSettings : public ULiveLinkSourceSettings
{
}; // Size: 0xB0

class ULiveLinkPreset : public UObject
{
    TArray<FLiveLinkSourcePreset> Sources;                                            // 0x0028 (size: 0x10)
    TArray<FLiveLinkSubjectPreset> Subjects;                                          // 0x0038 (size: 0x10)

    void BuildFromClient();
    void ApplyToClientLatent(class UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    bool ApplyToClient();
    bool AddToClient(const bool bRecreatePresets);
}; // Size: 0x58

class ULiveLinkSettings : public UObject
{
    TArray<FLiveLinkRoleProjectSetting> DefaultRoleSettings;                          // 0x0028 (size: 0x10)
    FSoftClassPath DefaultSettingsClass;                                              // 0x0038 (size: 0x20)
    TSubclassOf<class ULiveLinkFrameInterpolationProcessor> FrameInterpolationProcessor; // 0x0058 (size: 0x8)
    TSoftObjectPtr<ULiveLinkPreset> DefaultLiveLinkPreset;                            // 0x0060 (size: 0x28)
    float ClockOffsetCorrectionStep;                                                  // 0x0088 (size: 0x4)
    ELiveLinkSourceMode DefaultMessageBusSourceMode;                                  // 0x008C (size: 0x1)
    double MessageBusPingRequestFrequency;                                            // 0x0090 (size: 0x8)
    double MessageBusHeartbeatFrequency;                                              // 0x0098 (size: 0x8)
    double MessageBusHeartbeatTimeout;                                                // 0x00A0 (size: 0x8)
    double MessageBusTimeBeforeRemovingInactiveSource;                                // 0x00A8 (size: 0x8)
    bool bPreProcessRebroadcastFrames;                                                // 0x00B0 (size: 0x1)
    bool bTranslateRebroadcastFrames;                                                 // 0x00B1 (size: 0x1)
    double TimeWithoutFrameToBeConsiderAsInvalid;                                     // 0x00B8 (size: 0x8)
    FLinearColor ValidColor;                                                          // 0x00C0 (size: 0x10)
    FLinearColor InvalidColor;                                                        // 0x00D0 (size: 0x10)
    uint8 TextSizeSource;                                                             // 0x00E0 (size: 0x1)
    uint8 TextSizeSubject;                                                            // 0x00E1 (size: 0x1)

}; // Size: 0xE8

class ULiveLinkSkeletonRemapper : public ULiveLinkSubjectRemapper
{
    TSoftObjectPtr<USkeletalMesh> ReferenceSkeleton;                                  // 0x0080 (size: 0x28)

}; // Size: 0xA8

class ULiveLinkTimeSynchronizationSource : public UTimeSynchronizationSource
{
    FLiveLinkSubjectName SubjectName;                                                 // 0x0030 (size: 0x8)

}; // Size: 0x80

class ULiveLinkTimecodeProvider : public UTimecodeProvider
{
    FLiveLinkSubjectKey SubjectKey;                                                   // 0x0030 (size: 0x18)
    ELiveLinkTimecodeProviderEvaluationType Evaluation;                               // 0x0048 (size: 0x4)
    bool bOverrideFrameRate;                                                          // 0x004C (size: 0x1)
    FFrameRate OverrideFrameRate;                                                     // 0x0050 (size: 0x8)
    int32 BufferSize;                                                                 // 0x0058 (size: 0x4)

}; // Size: 0xC0

class ULiveLinkTransformAxisSwitchPreProcessor : public ULiveLinkFramePreProcessor
{
    ELiveLinkAxis FrontAxis;                                                          // 0x0028 (size: 0x1)
    ELiveLinkAxis RightAxis;                                                          // 0x0029 (size: 0x1)
    ELiveLinkAxis UpAxis;                                                             // 0x002A (size: 0x1)
    bool bUseOffsetPosition;                                                          // 0x002B (size: 0x1)
    bool bUseOffsetOrientation;                                                       // 0x002C (size: 0x1)
    FVector OffsetPosition;                                                           // 0x0030 (size: 0x18)
    FRotator OffsetOrientation;                                                       // 0x0048 (size: 0x18)

}; // Size: 0x70

class ULiveLinkTransformDeadbandPreProcessor : public ULiveLinkFramePreProcessor
{
    bool bEnableDeadband;                                                             // 0x0028 (size: 0x1)
    float TranslationDeadband;                                                        // 0x002C (size: 0x4)
    float RotationDeadbandInDegrees;                                                  // 0x0030 (size: 0x4)

}; // Size: 0x48

class ULiveLinkTransformRoleToAnimation : public ULiveLinkFrameTranslator
{
    FName OutputBoneName;                                                             // 0x0028 (size: 0x8)

}; // Size: 0x40

class ULiveLinkUserSettings : public UObject
{
    FDirectoryPath PresetSaveDir;                                                     // 0x0028 (size: 0x10)

}; // Size: 0x38

class ULiveLinkVirtualSubjectSourceSettings : public ULiveLinkSourceSettings
{
    FName SourceName;                                                                 // 0x00B0 (size: 0x8)

}; // Size: 0xB8

#endif
