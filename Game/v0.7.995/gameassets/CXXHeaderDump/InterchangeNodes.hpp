#ifndef UE4SS_SDK_InterchangeNodes_HPP
#define UE4SS_SDK_InterchangeNodes_HPP

#include "InterchangeNodes_enums.hpp"

struct FInterchangeAnimationPayLoadKey
{
    FString UniqueID;                                                                 // 0x0000 (size: 0x10)
    EInterchangeAnimationPayLoadType Type;                                            // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FInterchangeMeshPayLoadKey
{
    FString UniqueID;                                                                 // 0x0000 (size: 0x10)
    EInterchangeMeshPayLoadType Type;                                                 // 0x0010 (size: 0x1)

}; // Size: 0x18

class UInterchangeAnimationTrackBaseNode : public UInterchangeBaseNode
{

    bool SetCustomCompletionMode(const int32& AttributeValue);
    bool GetCustomCompletionMode(int32& AttributeValue);
}; // Size: 0x70

class UInterchangeAnimationTrackNode : public UInterchangeAnimationTrackBaseNode
{

    bool SetCustomTargetedProperty(const int32& TargetedProperty);
    bool SetCustomPropertyTrack(const FName& PropertyTrack);
    bool SetCustomFrameCount(const int32& AttributeValue);
    bool SetCustomAnimationPayloadKey(FString InUniqueId, const EInterchangeAnimationPayLoadType& InType);
    bool SetCustomActorDependencyUid(FString DependencyUid);
    bool GetCustomTargetedProperty(int32& TargetedProperty);
    bool GetCustomPropertyTrack(FName& PropertyTrack);
    bool GetCustomFrameCount(int32& AttributeValue);
    bool GetCustomAnimationPayloadKey(FInterchangeAnimationPayLoadKey& AnimationPayLoadKey);
    bool GetCustomActorDependencyUid(FString& DependencyUid);
}; // Size: 0xD0

class UInterchangeAnimationTrackSetInstanceNode : public UInterchangeAnimationTrackBaseNode
{

    bool SetCustomTrackSetDependencyUid(FString AttributeValue);
    bool SetCustomTimeScale(const float& AttributeValue);
    bool SetCustomStartFrame(const int32& AttributeValue);
    bool SetCustomDuration(const int32& AttributeValue);
    bool GetCustomTrackSetDependencyUid(FString& AttributeValue);
    bool GetCustomTimeScale(float& AttributeValue);
    bool GetCustomStartFrame(int32& AttributeValue);
    bool GetCustomDuration(int32& AttributeValue);
}; // Size: 0xB0

class UInterchangeAnimationTrackSetNode : public UInterchangeBaseNode
{

    bool SetCustomFrameRate(const float& AttributeValue);
    bool RemoveCustomAnimationTrackUid(FString AnimationTrackUid);
    bool GetCustomFrameRate(float& AttributeValue);
    void GetCustomAnimationTrackUids(TArray<FString>& OutAnimationTrackUids);
    int32 GetCustomAnimationTrackUidCount();
    void GetCustomAnimationTrackUid(const int32 Index, FString& OutAnimationTrackUid);
    bool AddCustomAnimationTrackUid(FString AnimationTrackUid);
}; // Size: 0x90

class UInterchangeBaseLightNode : public UInterchangeBaseNode
{

    bool SetCustomUseTemperature(bool AttributeValue);
    bool SetCustomTemperature(float AttributeValue);
    bool SetCustomLightColor(const FLinearColor& AttributeValue);
    bool SetCustomIntensity(float AttributeValue);
    bool GetCustomUseTemperature(bool& AttributeValue);
    bool GetCustomTemperature(float& AttributeValue);
    bool GetCustomLightColor(FLinearColor& AttributeValue);
    bool GetCustomIntensity(float& AttributeValue);
}; // Size: 0xA0

class UInterchangeDecalMaterialNode : public UInterchangeShaderNode
{
}; // Size: 0x90

class UInterchangeDecalNode : public UInterchangeBaseNode
{

    bool SetCustomSortOrder(const int32& AttributeValue);
    bool SetCustomDecalSize(const FVector& AttributeValue);
    bool SetCustomDecalMaterialPathName(FString AttributeValue);
    bool GetCustomSortOrder(int32& AttributeValue);
    bool GetCustomDecalSize(FVector& AttributeValue);
    bool GetCustomDecalMaterialPathName(FString& AttributeValue);
}; // Size: 0x90

class UInterchangeDirectionalLightNode : public UInterchangeBaseLightNode
{
}; // Size: 0xA0

class UInterchangeFunctionCallShaderNode : public UInterchangeShaderNode
{

    bool SetCustomMaterialFunction(FString AttributeValue);
    bool GetCustomMaterialFunction(FString& AttributeValue);
}; // Size: 0x80

class UInterchangeLightNode : public UInterchangeBaseLightNode
{

    bool SetCustomUseIESBrightness(const bool& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomRotation(const FRotator& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomIntensityUnits(const EInterchangeLightUnits& AttributeValue);
    bool SetCustomIESTexture(FString AttributeValue);
    bool SetCustomIESBrightnessScale(const float& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomAttenuationRadius(float AttributeValue);
    bool GetCustomUseIESBrightness(bool& AttributeValue);
    bool GetCustomRotation(FRotator& AttributeValue);
    bool GetCustomIntensityUnits(EInterchangeLightUnits& AttributeValue);
    bool GetCustomIESTexture(FString& AttributeValue);
    bool GetCustomIESBrightnessScale(float& AttributeValue);
    bool GetCustomAttenuationRadius(float& AttributeValue);
}; // Size: 0x100

class UInterchangeMaterialInstanceNode : public UInterchangeBaseNode
{

    bool SetCustomParent(FString AttributeValue);
    bool GetVectorParameterValue(FString ParameterName, FLinearColor& AttributeValue);
    bool GetTextureParameterValue(FString ParameterName, FString& AttributeValue);
    bool GetStaticSwitchParameterValue(FString ParameterName, bool& AttributeValue);
    bool GetScalarParameterValue(FString ParameterName, float& AttributeValue);
    bool GetCustomParent(FString& AttributeValue);
    bool AddVectorParameterValue(FString ParameterName, const FLinearColor& AttributeValue);
    bool AddTextureParameterValue(FString ParameterName, FString AttributeValue);
    bool AddStaticSwitchParameterValue(FString ParameterName, bool AttributeValue);
    bool AddScalarParameterValue(FString ParameterName, float AttributeValue);
}; // Size: 0x70

class UInterchangeMeshNode : public UInterchangeBaseNode
{

    bool SetSlotMaterialDependencyUid(FString SlotName, FString MaterialDependencyUid);
    bool SetSkinnedMesh(const bool bIsSkinnedMesh);
    bool SetSkeletonDependencyUid(FString DependencyUid);
    bool SetSceneInstanceUid(FString DependencyUid);
    void SetPayLoadKey(FString PayloadKey, const EInterchangeMeshPayLoadType& PayLoadType);
    bool SetMorphTargetName(FString MorphTargetName);
    bool SetMorphTargetDependencyUid(FString DependencyUid);
    bool SetMorphTarget(const bool bIsMorphTarget);
    bool SetCustomVertexCount(const int32& AttributeValue);
    bool SetCustomUVCount(const int32& AttributeValue);
    bool SetCustomPolygonCount(const int32& AttributeValue);
    bool SetCustomHasVertexTangent(const bool& AttributeValue);
    bool SetCustomHasVertexNormal(const bool& AttributeValue);
    bool SetCustomHasVertexColor(const bool& AttributeValue);
    bool SetCustomHasVertexBinormal(const bool& AttributeValue);
    bool SetCustomHasSmoothGroup(const bool& AttributeValue);
    bool SetCustomBoundingBox(const FBox& AttributeValue);
    bool RemoveSlotMaterialDependencyUid(FString SlotName);
    bool RemoveSkeletonDependencyUid(FString DependencyUid);
    bool RemoveSceneInstanceUid(FString DependencyUid);
    bool RemoveMorphTargetDependencyUid(FString DependencyUid);
    bool IsSkinnedMesh();
    bool IsMorphTarget();
    bool GetSlotMaterialDependencyUid(FString SlotName, FString& OutMaterialDependency);
    void GetSlotMaterialDependencies(TMap<class FString, class FString>& OutMaterialDependencies);
    void GetSkeletonDependency(const int32 Index, FString& OutDependency);
    void GetSkeletonDependencies(TArray<FString>& OutDependencies);
    int32 GetSkeletonDependeciesCount();
    int32 GetSceneInstanceUidsCount();
    void GetSceneInstanceUids(TArray<FString>& OutDependencies);
    void GetSceneInstanceUid(const int32 Index, FString& OutDependency);
    bool GetMorphTargetName(FString& OutMorphTargetName);
    void GetMorphTargetDependency(const int32 Index, FString& OutDependency);
    void GetMorphTargetDependencies(TArray<FString>& OutDependencies);
    int32 GetMorphTargetDependeciesCount();
    bool GetCustomVertexCount(int32& AttributeValue);
    bool GetCustomUVCount(int32& AttributeValue);
    bool GetCustomPolygonCount(int32& AttributeValue);
    bool GetCustomHasVertexTangent(bool& AttributeValue);
    bool GetCustomHasVertexNormal(bool& AttributeValue);
    bool GetCustomHasVertexColor(bool& AttributeValue);
    bool GetCustomHasVertexBinormal(bool& AttributeValue);
    bool GetCustomHasSmoothGroup(bool& AttributeValue);
    bool GetCustomBoundingBox(FBox& AttributeValue);
}; // Size: 0x1E8

class UInterchangePhysicalCameraNode : public UInterchangeBaseNode
{

    bool SetCustomSensorWidth(const float& AttributeValue);
    bool SetCustomSensorHeight(const float& AttributeValue);
    bool SetCustomFocalLength(const float& AttributeValue);
    bool SetCustomEnableDepthOfField(const bool& AttributeValue);
    bool GetCustomSensorWidth(float& AttributeValue);
    bool GetCustomSensorHeight(float& AttributeValue);
    bool GetCustomFocalLength(float& AttributeValue);
    bool GetCustomEnableDepthOfField(bool& AttributeValue);
}; // Size: 0xA0

class UInterchangePointLightNode : public UInterchangeLightNode
{

    bool SetCustomUseInverseSquaredFalloff(bool AttributeValue);
    bool SetCustomLightFalloffExponent(float AttributeValue);
    bool GetCustomUseInverseSquaredFalloff(bool& AttributeValue);
    bool GetCustomLightFalloffExponent(float& AttributeValue);
}; // Size: 0x120

class UInterchangeRectLightNode : public UInterchangeLightNode
{

    bool SetCustomSourceWidth(float AttributeValue);
    bool SetCustomSourceHeight(float AttributeValue);
    bool GetCustomSourceWidth(float& AttributeValue);
    bool GetCustomSourceHeight(float& AttributeValue);
}; // Size: 0x120

class UInterchangeSceneNode : public UInterchangeBaseNode
{

    bool SetSlotMaterialDependencyUid(FString SlotName, FString MaterialDependencyUid);
    bool SetMorphTargetCurveWeight(FString MorphTargetName, const float& Weight);
    bool SetCustomTimeZeroLocalTransform(const class UInterchangeBaseNodeContainer* BaseNodeContainer, const FTransform& AttributeValue, bool bResetCache);
    bool SetCustomLocalTransform(const class UInterchangeBaseNodeContainer* BaseNodeContainer, const FTransform& AttributeValue, bool bResetCache);
    bool SetCustomGeometricTransform(const FTransform& AttributeValue);
    bool SetCustomBindPoseLocalTransform(const class UInterchangeBaseNodeContainer* BaseNodeContainer, const FTransform& AttributeValue, bool bResetCache);
    bool SetCustomAssetInstanceUid(FString AttributeValue);
    bool SetCustomAnimationAssetUidToPlay(FString AttributeValue);
    bool RemoveSpecializedType(FString SpecializedType);
    bool RemoveSlotMaterialDependencyUid(FString SlotName);
    bool IsSpecializedTypeContains(FString SpecializedType);
    void GetSpecializedTypes(TArray<FString>& OutSpecializedTypes);
    int32 GetSpecializedTypeCount();
    void GetSpecializedType(const int32 Index, FString& OutSpecializedType);
    bool GetSlotMaterialDependencyUid(FString SlotName, FString& OutMaterialDependency);
    void GetSlotMaterialDependencies(TMap<class FString, class FString>& OutMaterialDependencies);
    void GetMorphTargetCurveWeights(TMap<FString, float>& OutMorphTargetCurveWeights);
    bool GetCustomTimeZeroLocalTransform(FTransform& AttributeValue);
    bool GetCustomTimeZeroGlobalTransform(const class UInterchangeBaseNodeContainer* BaseNodeContainer, const FTransform& GlobalOffsetTransform, FTransform& AttributeValue, bool bForceRecache);
    bool GetCustomLocalTransform(FTransform& AttributeValue);
    bool GetCustomGlobalTransform(const class UInterchangeBaseNodeContainer* BaseNodeContainer, const FTransform& GlobalOffsetTransform, FTransform& AttributeValue, bool bForceRecache);
    bool GetCustomGeometricTransform(FTransform& AttributeValue);
    bool GetCustomBindPoseLocalTransform(FTransform& AttributeValue);
    bool GetCustomBindPoseGlobalTransform(const class UInterchangeBaseNodeContainer* BaseNodeContainer, const FTransform& GlobalOffsetTransform, FTransform& AttributeValue, bool bForceRecache);
    bool GetCustomAssetInstanceUid(FString& AttributeValue);
    bool GetCustomAnimationAssetUidToPlay(FString& AttributeValue);
    bool AddSpecializedType(FString SpecializedType);
}; // Size: 0x320

class UInterchangeSceneVariantSetsNode : public UInterchangeBaseNode
{

    bool RemoveCustomVariantSetUid(FString VariantUid);
    void GetCustomVariantSetUids(TArray<FString>& OutVariantUids);
    int32 GetCustomVariantSetUidCount();
    void GetCustomVariantSetUid(const int32 Index, FString& OutVariantUid);
    bool AddCustomVariantSetUid(FString VariantUid);
}; // Size: 0x80

class UInterchangeShaderGraphNode : public UInterchangeShaderNode
{

    bool SetCustomTwoSidedTransmission(const bool& AttributeValue);
    bool SetCustomTwoSided(const bool& AttributeValue);
    bool SetCustomScreenSpaceReflections(const bool& AttributeValue);
    bool SetCustomOpacityMaskClipValue(const float& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomIsAShaderFunction(const bool& AttributeValue);
    bool SetCustomBlendMode(int32 AttributeValue);
    bool GetCustomTwoSidedTransmission(bool& AttributeValue);
    bool GetCustomTwoSided(bool& AttributeValue);
    bool GetCustomScreenSpaceReflections(bool& AttributeValue);
    bool GetCustomOpacityMaskClipValue(float& AttributeValue);
    bool GetCustomIsAShaderFunction(bool& AttributeValue);
    bool GetCustomBlendMode(int32& AttributeValue);
}; // Size: 0xD0

class UInterchangeShaderNode : public UInterchangeBaseNode
{

    bool SetCustomShaderType(FString AttributeValue);
    bool GetCustomShaderType(FString& AttributeValue);
    bool AddStringInput(FString InputName, FString AttributeValue, bool bIsAParameter);
    bool AddLinearColorInput(FString InputName, const FLinearColor& AttributeValue, bool bIsAParameter);
    bool AddFloatInput(FString InputName, const float& AttributeValue, bool bIsAParameter);
}; // Size: 0x70

class UInterchangeShaderPortsAPI : public UObject
{

    FString MakeInputValueKey(FString InputName);
    FString MakeInputParameterKey(FString InputName);
    FString MakeInputName(FString InputKey);
    FString MakeInputConnectionKey(FString InputName);
    bool IsAParameter(FString AttributeKey);
    bool IsAnInput(FString AttributeKey);
    bool HasParameter(const class UInterchangeBaseNode* InterchangeNode, const FName& InInputName);
    bool HasInput(const class UInterchangeBaseNode* InterchangeNode, const FName& InInputName);
    bool GetInputConnection(const class UInterchangeBaseNode* InterchangeNode, FString InputName, FString& OutExpressionUid, FString& OutputName);
    void GatherInputs(const class UInterchangeBaseNode* InterchangeNode, TArray<FString>& OutInputNames);
    bool ConnectOuputToInputByName(class UInterchangeBaseNode* InterchangeNode, FString InputName, FString ExpressionUid, FString OutputName);
    bool ConnectOuputToInputByIndex(class UInterchangeBaseNode* InterchangeNode, FString InputName, FString ExpressionUid, int32 OutputIndex);
    bool ConnectDefaultOuputToInput(class UInterchangeBaseNode* InterchangeNode, FString InputName, FString ExpressionUid);
}; // Size: 0x28

class UInterchangeSkeletalAnimationTrackNode : public UInterchangeAnimationTrackBaseNode
{

    bool SetCustomSkeletonNodeUid(FString AttributeValue);
    bool SetCustomAnimationStopTime(const double& StopTime);
    bool SetCustomAnimationStartTime(const double& StartTime);
    bool SetCustomAnimationSampleRate(const double& SampleRate);
    bool SetAnimationPayloadKeyForSceneNodeUid(FString SceneNodeUid, FString InUniqueId, const EInterchangeAnimationPayLoadType& InType);
    bool SetAnimationPayloadKeyForMorphTargetNodeUid(FString MorphTargetNodeUid, FString InUniqueId, const EInterchangeAnimationPayLoadType& InType);
    void GetSceneNodeAnimationPayloadKeys(TMap<class FString, class FString>& OutSceneNodeAnimationPayloadKeyUids, TMap<FString, uint8>& OutSceneNodeAnimationPayloadKeyTypes);
    void GetMorphTargetNodeAnimationPayloadKeys(TMap<class FString, class FString>& OutMorphTargetNodeAnimationPayloadKeyUids, TMap<FString, uint8>& OutMorphTargetNodeAnimationPayloadKeyTypes);
    bool GetCustomSkeletonNodeUid(FString& AttributeValue);
    bool GetCustomAnimationStopTime(double& StopTime);
    bool GetCustomAnimationStartTime(double& StartTime);
    bool GetCustomAnimationSampleRate(double& SampleRate);
}; // Size: 0x290

class UInterchangeSpotLightNode : public UInterchangePointLightNode
{

    bool SetCustomOuterConeAngle(float AttributeValue);
    bool SetCustomInnerConeAngle(float AttributeValue);
    bool GetCustomOuterConeAngle(float& AttributeValue);
    bool GetCustomInnerConeAngle(float& AttributeValue);
}; // Size: 0x140

class UInterchangeStandardCameraNode : public UInterchangeBaseNode
{

    bool SetCustomWidth(const float& AttributeValue);
    bool SetCustomProjectionMode(const EInterchangeCameraProjectionType& AttributeValue);
    bool SetCustomNearClipPlane(const float& AttributeValue);
    bool SetCustomFieldOfView(const float& AttributeValue);
    bool SetCustomFarClipPlane(const float& AttributeValue);
    bool SetCustomAspectRatio(const float& AttributeValue);
    bool GetCustomWidth(float& AttributeValue);
    bool GetCustomProjectionMode(EInterchangeCameraProjectionType& AttributeValue);
    bool GetCustomNearClipPlane(float& AttributeValue);
    bool GetCustomFieldOfView(float& AttributeValue);
    bool GetCustomFarClipPlane(float& AttributeValue);
    bool GetCustomAspectRatio(float& AttributeValue);
}; // Size: 0xC0

class UInterchangeTexture2DArrayNode : public UInterchangeTextureNode
{
}; // Size: 0x90

class UInterchangeTexture2DNode : public UInterchangeTextureNode
{

    bool SetCustomWrapV(const EInterchangeTextureWrapMode& AttributeValue);
    bool SetCustomWrapU(const EInterchangeTextureWrapMode& AttributeValue);
    TMap<int32, FString> GetSourceBlocks();
    bool GetCustomWrapV(EInterchangeTextureWrapMode& AttributeValue);
    bool GetCustomWrapU(EInterchangeTextureWrapMode& AttributeValue);
}; // Size: 0x128

class UInterchangeTextureBlurNode : public UInterchangeTexture2DNode
{
}; // Size: 0x128

class UInterchangeTextureCubeArrayNode : public UInterchangeTextureNode
{
}; // Size: 0x90

class UInterchangeTextureCubeNode : public UInterchangeTextureNode
{
}; // Size: 0x90

class UInterchangeTextureLightProfileNode : public UInterchangeTextureNode
{
}; // Size: 0x90

class UInterchangeTextureNode : public UInterchangeBaseNode
{

    void SetPayLoadKey(FString PayloadKey);
    bool SetCustomSRGB(const bool& AttributeValue);
    bool SetCustomFilter(const EInterchangeTextureFilterMode& AttributeValue);
    bool SetCustombFlipGreenChannel(const bool& AttributeValue);
    bool GetCustomSRGB(bool& AttributeValue);
    bool GetCustomFilter(EInterchangeTextureFilterMode& AttributeValue);
    bool GetCustombFlipGreenChannel(bool& AttributeValue);
}; // Size: 0x90

class UInterchangeTransformAnimationTrackNode : public UInterchangeAnimationTrackNode
{

    bool SetCustomUsedChannels(const int32& AttributeValue);
    bool GetCustomUsedChannels(int32& AttributeValue);
}; // Size: 0xE0

class UInterchangeVariantSetNode : public UInterchangeBaseNode
{

    bool SetCustomVariantsPayloadKey(FString PayloadKey);
    bool SetCustomDisplayText(FString AttributeValue);
    bool RemoveCustomDependencyUid(FString DependencyUid);
    bool GetCustomVariantsPayloadKey(FString& PayloadKey);
    bool GetCustomDisplayText(FString& AttributeValue);
    void GetCustomDependencyUids(TArray<FString>& OutDependencyUids);
    int32 GetCustomDependencyUidCount();
    void GetCustomDependencyUid(const int32 Index, FString& OutDependencyUid);
    bool AddCustomDependencyUid(FString DependencyUid);
}; // Size: 0xA0

class UInterchangeVolumeTextureNode : public UInterchangeTextureNode
{
}; // Size: 0x90

#endif
