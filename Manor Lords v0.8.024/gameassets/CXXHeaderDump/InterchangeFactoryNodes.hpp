#ifndef UE4SS_SDK_InterchangeFactoryNodes_HPP
#define UE4SS_SDK_InterchangeFactoryNodes_HPP

#include "InterchangeFactoryNodes_enums.hpp"

class UInterchangeActorFactoryNode : public UInterchangeFactoryBaseNode
{

    bool SetCustomMobility(const uint8& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomLocalTransform(const FTransform& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomGlobalTransform(const FTransform& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomActorClassName(FString AttributeValue);
    bool GetCustomMobility(uint8& AttributeValue);
    bool GetCustomLocalTransform(FTransform& AttributeValue);
    bool GetCustomGlobalTransform(FTransform& AttributeValue);
    bool GetCustomActorClassName(FString& AttributeValue);
}; // Size: 0x180

class UInterchangeAnimSequenceFactoryNode : public UInterchangeFactoryBaseNode
{

    bool SetCustomSkeletonSoftObjectPath(const FSoftObjectPath& AttributeValue);
    bool SetCustomSkeletonFactoryNodeUid(FString AttributeValue);
    bool SetCustomRemoveCurveRedundantKeys(const bool& AttributeValue);
    bool SetCustomMaterialDriveParameterOnCustomAttribute(const bool& AttributeValue);
    bool SetCustomImportBoneTracksSampleRate(const double& AttributeValue);
    bool SetCustomImportBoneTracksRangeStop(const double& AttributeValue);
    bool SetCustomImportBoneTracksRangeStart(const double& AttributeValue);
    bool SetCustomImportBoneTracks(const bool& AttributeValue);
    bool SetCustomImportAttributeCurves(const bool& AttributeValue);
    bool SetCustomDoNotImportCurveWithZero(const bool& AttributeValue);
    bool SetCustomDeleteExistingNonCurveCustomAttributes(const bool& AttributeValue);
    bool SetCustomDeleteExistingMorphTargetCurves(const bool& AttributeValue);
    bool SetCustomDeleteExistingCustomAttributeCurves(const bool& AttributeValue);
    bool SetCustomAddCurveMetadataToSkeleton(const bool& AttributeValue);
    void SetAnimationPayloadKeysForSceneNodeUids(const TMap<class FString, class FString>& SceneNodeAnimationPayloadKeyUids, const TMap<FString, uint8>& SceneNodeAnimationPayloadKeyTypes);
    void SetAnimationPayloadKeysForMorphTargetNodeUids(const TMap<class FString, class FString>& MorphTargetAnimationPayloadKeyUids, const TMap<FString, uint8>& MorphTargetAnimationPayloadKeyTypes);
    bool SetAnimatedMaterialCurveSuffixe(FString MaterialCurveSuffixe);
    bool SetAnimatedAttributeStepCurveName(FString AttributeStepCurveName);
    bool SetAnimatedAttributeCurveName(FString AttributeCurveName);
    bool RemoveAnimatedMaterialCurveSuffixe(FString MaterialCurveSuffixe);
    bool RemoveAnimatedAttributeStepCurveName(FString AttributeStepCurveName);
    bool RemoveAnimatedAttributeCurveName(FString AttributeCurveName);
    void InitializeAnimSequenceNode(FString UniqueID, FString DisplayLabel);
    void GetSceneNodeAnimationPayloadKeys(TMap<class FString, class FInterchangeAnimationPayLoadKey>& OutSceneNodeAnimationPayloadKeys);
    UClass* GetObjectClass();
    void GetMorphTargetNodeAnimationPayloadKeys(TMap<class FString, class FInterchangeAnimationPayLoadKey>& OutMorphTargetNodeAnimationPayloads);
    bool GetCustomSkeletonSoftObjectPath(FSoftObjectPath& AttributeValue);
    bool GetCustomSkeletonFactoryNodeUid(FString& AttributeValue);
    bool GetCustomRemoveCurveRedundantKeys(bool& AttributeValue);
    bool GetCustomMaterialDriveParameterOnCustomAttribute(bool& AttributeValue);
    bool GetCustomImportBoneTracksSampleRate(double& AttributeValue);
    bool GetCustomImportBoneTracksRangeStop(double& AttributeValue);
    bool GetCustomImportBoneTracksRangeStart(double& AttributeValue);
    bool GetCustomImportBoneTracks(bool& AttributeValue);
    bool GetCustomImportAttributeCurves(bool& AttributeValue);
    bool GetCustomDoNotImportCurveWithZero(bool& AttributeValue);
    bool GetCustomDeleteExistingNonCurveCustomAttributes(bool& AttributeValue);
    bool GetCustomDeleteExistingMorphTargetCurves(bool& AttributeValue);
    bool GetCustomDeleteExistingCustomAttributeCurves(bool& AttributeValue);
    bool GetCustomAddCurveMetadataToSkeleton(bool& AttributeValue);
    int32 GetAnimatedMaterialCurveSuffixesCount();
    void GetAnimatedMaterialCurveSuffixes(TArray<FString>& OutMaterialCurveSuffixes);
    void GetAnimatedMaterialCurveSuffixe(const int32 Index, FString& OutMaterialCurveSuffixe);
    int32 GetAnimatedAttributeStepCurveNamesCount();
    void GetAnimatedAttributeStepCurveNames(TArray<FString>& OutAttributeStepCurveNames);
    void GetAnimatedAttributeStepCurveName(const int32 Index, FString& OutAttributeStepCurveName);
    int32 GetAnimatedAttributeCurveNamesCount();
    void GetAnimatedAttributeCurveNames(TArray<FString>& OutAttributeCurveNames);
    void GetAnimatedAttributeCurveName(const int32 Index, FString& OutAttributeCurveName);
}; // Size: 0x480

class UInterchangeBaseLightFactoryNode : public UInterchangeActorFactoryNode
{

    bool SetCustomUseTemperature(bool AttributeValue, bool bAddApplyDelegate);
    bool SetCustomTemperature(float AttributeValue, bool bAddApplyDelegate);
    bool SetCustomLightColor(const FColor& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomIntensity(float AttributeValue, bool bAddApplyDelegate);
    bool GetCustomUseTemperature(bool& AttributeValue);
    bool GetCustomTemperature(float& AttributeValue);
    bool GetCustomLightColor(FColor& AttributeValue);
    bool GetCustomIntensity(float& AttributeValue);
}; // Size: 0x1C0

class UInterchangeBaseMaterialFactoryNode : public UInterchangeFactoryBaseNode
{

    bool SetCustomIsMaterialImportEnabled(const bool& AttributeValue);
    bool GetCustomIsMaterialImportEnabled(bool& AttributeValue);
}; // Size: 0x150

class UInterchangeCommonPipelineDataFactoryNode : public UInterchangeFactoryBaseNode
{

    bool SetCustomGlobalOffsetTransform(const class UInterchangeBaseNodeContainer* NodeContainer, const FTransform& AttributeValue);
    bool SetBakeMeshes(const class UInterchangeBaseNodeContainer* NodeContainer, const bool& AttributeValue);
    bool GetCustomGlobalOffsetTransform(FTransform& AttributeValue);
    bool GetBakeMeshes(bool& AttributeValue);
}; // Size: 0x160

class UInterchangeDecalActorFactoryNode : public UInterchangeActorFactoryNode
{

    bool SetCustomSortOrder(const int32& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomDecalSize(const FVector& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomDecalMaterialPathName(FString AttributeValue);
    UClass* GetObjectClass();
    bool GetCustomSortOrder(int32& AttributeValue);
    bool GetCustomDecalSize(FVector& AttributeValue);
    bool GetCustomDecalMaterialPathName(FString& AttributeValue);
}; // Size: 0x1B0

class UInterchangeDecalMaterialFactoryNode : public UInterchangeBaseMaterialFactoryNode
{

    bool SetCustomNormalTexturePath(FString AttributeValue);
    bool SetCustomDiffuseTexturePath(FString AttributeValue);
    UClass* GetObjectClass();
    bool GetCustomNormalTexturePath(FString& AttributeValue);
    bool GetCustomDiffuseTexturePath(FString& AttributeValue);
}; // Size: 0x170

class UInterchangeDirectionalLightFactoryNode : public UInterchangeBaseLightFactoryNode
{
}; // Size: 0x1C0

class UInterchangeLevelSequenceFactoryNode : public UInterchangeFactoryBaseNode
{

    bool SetCustomFrameRate(const float& AttributeValue);
    bool RemoveCustomAnimationTrackUid(FString AnimationTrackUid);
    UClass* GetObjectClass();
    bool GetCustomFrameRate(float& AttributeValue);
    void GetCustomAnimationTrackUids(TArray<FString>& OutAnimationTrackUids);
    int32 GetCustomAnimationTrackUidCount();
    void GetCustomAnimationTrackUid(const int32 Index, FString& OutAnimationTrackUid);
    bool AddCustomAnimationTrackUid(FString AnimationTrackUid);
}; // Size: 0x170

class UInterchangeLightFactoryNode : public UInterchangeBaseLightFactoryNode
{

    bool SetCustomUseIESBrightness(const bool& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomRotation(const FRotator& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomIntensityUnits(ELightUnits AttributeValue, bool bAddApplyDelegate);
    bool SetCustomIESTexture(FString AttributeValue);
    bool SetCustomIESBrightnessScale(const float& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomAttenuationRadius(float AttributeValue, bool bAddApplyDelegate);
    bool GetCustomUseIESBrightness(bool& AttributeValue);
    bool GetCustomRotation(FRotator& AttributeValue);
    bool GetCustomIntensityUnits(ELightUnits& AttributeValue);
    bool GetCustomIESTexture(FString& AttributeValue);
    bool GetCustomIESBrightnessScale(float& AttributeValue);
    bool GetCustomAttenuationRadius(float& AttributeValue);
}; // Size: 0x220

class UInterchangeMaterialExpressionFactoryNode : public UInterchangeFactoryBaseNode
{

    bool SetCustomExpressionClassName(FString AttributeValue);
    bool GetCustomExpressionClassName(FString& AttributeValue);
}; // Size: 0x150

class UInterchangeMaterialFactoryNode : public UInterchangeBaseMaterialFactoryNode
{

    bool SetCustomTwoSided(const bool& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomTranslucencyLightingMode(const TEnumAsByte<ETranslucencyLightingMode>& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomShadingModel(const TEnumAsByte<EMaterialShadingModel>& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomScreenSpaceReflections(const bool& AttributeValue);
    bool SetCustomRefractionMethod(const TEnumAsByte<ERefractionMode>& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomOpacityMaskClipValue(const float& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomBlendMode(const TEnumAsByte<EBlendMode>& AttributeValue, bool bAddApplyDelegate);
    bool GetTransmissionColorConnection(FString& ExpressionNodeUid, FString& OutputName);
    bool GetTangentConnection(FString& ExpressionNodeUid, FString& OutputName);
    bool GetSubsurfaceConnection(FString& ExpressionNodeUid, FString& OutputName);
    bool GetSpecularConnection(FString& ExpressionNodeUid, FString& OutputName);
    bool GetRoughnessConnection(FString& ExpressionNodeUid, FString& OutputName);
    bool GetRefractionConnection(FString& ExpressionNodeUid, FString& OutputName);
    bool GetOpacityConnection(FString& ExpressionNodeUid, FString& OutputName);
    bool GetOcclusionConnection(FString& ExpressionNodeUid, FString& OutputName);
    UClass* GetObjectClass();
    bool GetNormalConnection(FString& ExpressionNodeUid, FString& OutputName);
    bool GetMetallicConnection(FString& ExpressionNodeUid, FString& OutputName);
    bool GetFuzzColorConnection(FString& ExpressionNodeUid, FString& OutputName);
    bool GetEmissiveColorConnection(FString& ExpressionNodeUid, FString& OutputName);
    bool GetCustomTwoSided(bool& AttributeValue);
    bool GetCustomTranslucencyLightingMode(TEnumAsByte<ETranslucencyLightingMode>& AttributeValue);
    bool GetCustomShadingModel(TEnumAsByte<EMaterialShadingModel>& AttributeValue);
    bool GetCustomScreenSpaceReflections(bool& AttributeValue);
    bool GetCustomRefractionMethod(TEnumAsByte<ERefractionMode>& AttributeValue);
    bool GetCustomOpacityMaskClipValue(float& AttributeValue);
    bool GetCustomBlendMode(TEnumAsByte<EBlendMode>& AttributeValue);
    bool GetClothConnection(FString& ExpressionNodeUid, FString& OutputName);
    bool GetClearCoatRoughnessConnection(FString& ExpressionNodeUid, FString& OutputName);
    bool GetClearCoatNormalConnection(FString& ExpressionNodeUid, FString& OutputName);
    bool GetClearCoatConnection(FString& ExpressionNodeUid, FString& OutputName);
    bool GetBaseColorConnection(FString& ExpressionNodeUid, FString& OutputName);
    bool GetAnisotropyConnection(FString& ExpressionNodeUid, FString& OutputName);
    bool ConnectToTransmissionColor(FString AttributeValue);
    bool ConnectToTangent(FString ExpressionNodeUid);
    bool ConnectToSubsurface(FString ExpressionNodeUid);
    bool ConnectToSpecular(FString ExpressionNodeUid);
    bool ConnectToRoughness(FString ExpressionNodeUid);
    bool ConnectToRefraction(FString AttributeValue);
    bool ConnectToOpacity(FString AttributeValue);
    bool ConnectToOcclusion(FString AttributeValue);
    bool ConnectToNormal(FString ExpressionNodeUid);
    bool ConnectToMetallic(FString AttributeValue);
    bool ConnectToFuzzColor(FString AttributeValue);
    bool ConnectToEmissiveColor(FString ExpressionNodeUid);
    bool ConnectToCloth(FString AttributeValue);
    bool ConnectToClearCoatRoughness(FString AttributeValue);
    bool ConnectToClearCoatNormal(FString AttributeValue);
    bool ConnectToClearCoat(FString AttributeValue);
    bool ConnectToBaseColor(FString AttributeValue);
    bool ConnectToAnisotropy(FString ExpressionNodeUid);
    bool ConnectOutputToTransmissionColor(FString ExpressionNodeUid, FString OutputName);
    bool ConnectOutputToTangent(FString ExpressionNodeUid, FString OutputName);
    bool ConnectOutputToSubsurface(FString ExpressionNodeUid, FString OutputName);
    bool ConnectOutputToSpecular(FString ExpressionNodeUid, FString OutputName);
    bool ConnectOutputToRoughness(FString ExpressionNodeUid, FString OutputName);
    bool ConnectOutputToRefraction(FString ExpressionNodeUid, FString OutputName);
    bool ConnectOutputToOpacity(FString ExpressionNodeUid, FString OutputName);
    bool ConnectOutputToOcclusion(FString ExpressionNodeUid, FString OutputName);
    bool ConnectOutputToNormal(FString ExpressionNodeUid, FString OutputName);
    bool ConnectOutputToMetallic(FString ExpressionNodeUid, FString OutputName);
    bool ConnectOutputToFuzzColor(FString ExpressionNodeUid, FString OutputName);
    bool ConnectOutputToEmissiveColor(FString ExpressionNodeUid, FString OutputName);
    bool ConnectOutputToCloth(FString ExpressionNodeUid, FString OutputName);
    bool ConnectOutputToClearCoatRoughness(FString ExpressionNodeUid, FString OutputName);
    bool ConnectOutputToClearCoatNormal(FString ExpressionNodeUid, FString OutputName);
    bool ConnectOutputToClearCoat(FString ExpressionNodeUid, FString OutputName);
    bool ConnectOutputToBaseColor(FString ExpressionNodeUid, FString OutputName);
    bool ConnectOutputToAnisotropy(FString ExpressionNodeUid, FString OutputName);
}; // Size: 0x1C0

class UInterchangeMaterialFunctionCallExpressionFactoryNode : public UInterchangeMaterialExpressionFactoryNode
{

    bool SetCustomMaterialFunctionDependency(FString AttributeValue);
    bool GetCustomMaterialFunctionDependency(FString& AttributeValue);
}; // Size: 0x160

class UInterchangeMaterialFunctionFactoryNode : public UInterchangeBaseMaterialFactoryNode
{

    UClass* GetObjectClass();
    bool GetInputConnection(FString InputName, FString& ExpressionNodeUid, FString& OutputName);
}; // Size: 0x150

class UInterchangeMaterialInstanceFactoryNode : public UInterchangeBaseMaterialFactoryNode
{

    bool SetCustomParent(FString AttributeValue);
    bool SetCustomInstanceClassName(FString AttributeValue);
    bool GetCustomParent(FString& AttributeValue);
    bool GetCustomInstanceClassName(FString& AttributeValue);
}; // Size: 0x170

class UInterchangeMeshActorFactoryNode : public UInterchangeActorFactoryNode
{

    bool SetSlotMaterialDependencyUid(FString SlotName, FString MaterialDependencyUid);
    bool SetCustomGeometricTransform(const FTransform& AttributeValue);
    bool SetCustomAnimationAssetUidToPlay(FString AttributeValue);
    bool RemoveSlotMaterialDependencyUid(FString SlotName);
    bool GetSlotMaterialDependencyUid(FString SlotName, FString& OutMaterialDependency);
    void GetSlotMaterialDependencies(TMap<class FString, class FString>& OutMaterialDependencies);
    bool GetCustomGeometricTransform(FTransform& AttributeValue);
    bool GetCustomAnimationAssetUidToPlay(FString& AttributeValue);
}; // Size: 0x218

class UInterchangeMeshFactoryNode : public UInterchangeFactoryBaseNode
{

    bool SetSlotMaterialDependencyUid(FString SlotName, FString MaterialDependencyUid);
    bool SetCustomVertexColorReplace(const bool& AttributeValue);
    bool SetCustomVertexColorOverride(const FColor& AttributeValue);
    bool SetCustomVertexColorIgnore(const bool& AttributeValue);
    bool SetCustomUseMikkTSpace(const bool& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomUseHighPrecisionTangentBasis(const bool& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomUseFullPrecisionUVs(const bool& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomUseBackwardsCompatibleF16TruncUVs(const bool& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomRemoveDegenerates(const bool& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomRecomputeTangents(const bool& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomRecomputeNormals(const bool& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomLODGroup(const FName& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomKeepSectionsSeparate(const bool& AttributeValue);
    bool SetCustomComputeWeightedNormals(const bool& AttributeValue, bool bAddApplyDelegate);
    bool ResetSlotMaterialDependencies();
    bool RemoveSlotMaterialDependencyUid(FString SlotName);
    bool RemoveLodDataUniqueId(FString LodDataUniqueId);
    bool GetSlotMaterialDependencyUid(FString SlotName, FString& OutMaterialDependency);
    void GetSlotMaterialDependencies(TMap<class FString, class FString>& OutMaterialDependencies);
    void GetLodDataUniqueIds(TArray<FString>& OutLodDataUniqueIds);
    int32 GetLodDataCount();
    bool GetCustomVertexColorReplace(bool& AttributeValue);
    bool GetCustomVertexColorOverride(FColor& AttributeValue);
    bool GetCustomVertexColorIgnore(bool& AttributeValue);
    bool GetCustomUseMikkTSpace(bool& AttributeValue);
    bool GetCustomUseHighPrecisionTangentBasis(bool& AttributeValue);
    bool GetCustomUseFullPrecisionUVs(bool& AttributeValue);
    bool GetCustomUseBackwardsCompatibleF16TruncUVs(bool& AttributeValue);
    bool GetCustomRemoveDegenerates(bool& AttributeValue);
    bool GetCustomRecomputeTangents(bool& AttributeValue);
    bool GetCustomRecomputeNormals(bool& AttributeValue);
    bool GetCustomLODGroup(FName& AttributeValue);
    bool GetCustomKeepSectionsSeparate(bool& AttributeValue);
    bool GetCustomComputeWeightedNormals(bool& AttributeValue);
    bool AddLodDataUniqueId(FString LodDataUniqueId);
}; // Size: 0x2C0

class UInterchangePhysicalCameraFactoryNode : public UInterchangeActorFactoryNode
{

    bool SetCustomSensorWidth(const float& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomSensorHeight(const float& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomFocusMethod(const ECameraFocusMethod& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomFocalLength(const float& AttributeValue, bool bAddApplyDelegate);
    bool GetCustomSensorWidth(float& AttributeValue);
    bool GetCustomSensorHeight(float& AttributeValue);
    bool GetCustomFocusMethod(ECameraFocusMethod& AttributeValue);
    bool GetCustomFocalLength(float& AttributeValue);
}; // Size: 0x1C0

class UInterchangePhysicsAssetFactoryNode : public UInterchangeFactoryBaseNode
{

    bool SetCustomSkeletalMeshUid(FString AttributeValue);
    void InitializePhysicsAssetNode(FString UniqueID, FString DisplayLabel, FString InAssetClass);
    UClass* GetObjectClass();
    bool GetCustomSkeletalMeshUid(FString& AttributeValue);
}; // Size: 0x170

class UInterchangePointLightFactoryNode : public UInterchangeLightFactoryNode
{

    bool SetCustomUseInverseSquaredFalloff(bool AttributeValue, bool bAddApplyDelegate);
    bool SetCustomLightFalloffExponent(float AttributeValue, bool bAddApplyDelegate);
    bool GetCustomUseInverseSquaredFalloff(bool& AttributeValue);
    bool GetCustomLightFalloffExponent(float& AttributeValue);
}; // Size: 0x240

class UInterchangeRectLightFactoryNode : public UInterchangeLightFactoryNode
{

    bool SetCustomSourceWidth(float AttributeValue, bool bAddApplyDelegate);
    bool SetCustomSourceHeight(float AttributeValue, bool bAddApplyDelegate);
    bool GetCustomSourceWidth(float& AttributeValue);
    bool GetCustomSourceHeight(float& AttributeValue);
}; // Size: 0x240

class UInterchangeSceneImportAssetFactoryNode : public UInterchangeFactoryBaseNode
{
}; // Size: 0x140

class UInterchangeSceneVariantSetsFactoryNode : public UInterchangeFactoryBaseNode
{

    bool RemoveCustomVariantSetUid(FString VariantUid);
    UClass* GetObjectClass();
    void GetCustomVariantSetUids(TArray<FString>& OutVariantUids);
    int32 GetCustomVariantSetUidCount();
    void GetCustomVariantSetUid(const int32 Index, FString& OutVariantUid);
    bool AddCustomVariantSetUid(FString VariantUid);
}; // Size: 0x160

class UInterchangeSkeletalMeshFactoryNode : public UInterchangeMeshFactoryNode
{

    bool SetCustomUseHighPrecisionSkinWeights(const bool& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomThresholdUV(const float& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomThresholdTangentNormal(const float& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomThresholdPosition(const float& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomSkeletonSoftObjectPath(const FSoftObjectPath& AttributeValue);
    bool SetCustomPhysicAssetSoftObjectPath(const FSoftObjectPath& AttributeValue);
    bool SetCustomMorphThresholdPosition(const float& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomImportVertexAttributes(const bool& AttributeValue);
    bool SetCustomImportMorphTarget(const bool& AttributeValue);
    bool SetCustomImportContentType(const EInterchangeSkeletalMeshContentType& AttributeValue);
    bool SetCustomCreatePhysicsAsset(const bool& AttributeValue);
    bool SetCustomBoneInfluenceLimit(const int32& AttributeValue, bool bAddApplyDelegate);
    void InitializeSkeletalMeshNode(FString UniqueID, FString DisplayLabel, FString InAssetClass);
    UClass* GetObjectClass();
    bool GetCustomUseHighPrecisionSkinWeights(bool& AttributeValue);
    bool GetCustomThresholdUV(float& AttributeValue);
    bool GetCustomThresholdTangentNormal(float& AttributeValue);
    bool GetCustomThresholdPosition(float& AttributeValue);
    bool GetCustomSkeletonSoftObjectPath(FSoftObjectPath& AttributeValue);
    bool GetCustomPhysicAssetSoftObjectPath(FSoftObjectPath& AttributeValue);
    bool GetCustomMorphThresholdPosition(float& AttributeValue);
    bool GetCustomImportVertexAttributes(bool& AttributeValue);
    bool GetCustomImportMorphTarget(bool& AttributeValue);
    bool GetCustomImportContentType(EInterchangeSkeletalMeshContentType& AttributeValue);
    bool GetCustomCreatePhysicsAsset(bool& AttributeValue);
    bool GetCustomBoneInfluenceLimit(int32& AttributeValue);
}; // Size: 0x398

class UInterchangeSkeletalMeshLodDataNode : public UInterchangeFactoryBaseNode
{

    bool SetCustomSkeletonUid(FString AttributeValue);
    bool RemoveMeshUid(FString meshName);
    bool RemoveAllMeshes();
    int32 GetMeshUidsCount();
    void GetMeshUids(TArray<FString>& OutMeshNames);
    bool GetCustomSkeletonUid(FString& AttributeValue);
    bool AddMeshUid(FString meshName);
}; // Size: 0x170

class UInterchangeSkeletonFactoryNode : public UInterchangeFactoryBaseNode
{

    bool SetCustomUseTimeZeroForBindPose(const bool& AttributeValue);
    bool SetCustomSkeletalMeshFactoryNodeUid(FString AttributeValue);
    bool SetCustomRootJointUid(FString AttributeValue);
    void InitializeSkeletonNode(FString UniqueID, FString DisplayLabel, FString InAssetClass);
    UClass* GetObjectClass();
    bool GetCustomUseTimeZeroForBindPose(bool& AttributeValue);
    bool GetCustomSkeletalMeshFactoryNodeUid(FString& AttributeValue);
    bool GetCustomRootJointUid(FString& AttributeValue);
}; // Size: 0x190

class UInterchangeSpotLightFactoryNode : public UInterchangePointLightFactoryNode
{

    bool SetCustomOuterConeAngle(float AttributeValue, bool bAddApplyDelegate);
    bool SetCustomInnerConeAngle(float AttributeValue, bool bAddApplyDelegate);
    bool GetCustomOuterConeAngle(float& AttributeValue);
    bool GetCustomInnerConeAngle(float& AttributeValue);
}; // Size: 0x260

class UInterchangeStandardCameraFactoryNode : public UInterchangeActorFactoryNode
{

    bool SetCustomWidth(const float& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomProjectionMode(const TEnumAsByte<ECameraProjectionMode::Type>& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomNearClipPlane(const float& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomFieldOfView(const float& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomFarClipPlane(const float& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomAspectRatio(const float& AttributeValue, bool bAddApplyDelegate);
    bool GetCustomWidth(float& AttributeValue);
    bool GetCustomProjectionMode(TEnumAsByte<ECameraProjectionMode::Type>& AttributeValue);
    bool GetCustomNearClipPlane(float& AttributeValue);
    bool GetCustomFieldOfView(float& AttributeValue);
    bool GetCustomFarClipPlane(float& AttributeValue);
    bool GetCustomAspectRatio(float& AttributeValue);
}; // Size: 0x1E0

class UInterchangeStaticMeshFactoryNode : public UInterchangeMeshFactoryNode
{

    bool SetCustomSupportFaceRemap(const bool& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomSrcLightmapIndex(const int32& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomMinLightmapResolution(const int32& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomMaxLumenMeshCards(const int32& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomGenerateLightmapUVs(const bool& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomGenerateDistanceFieldAsIfTwoSided(const bool& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomDstLightmapIndex(const int32& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomDistanceFieldResolutionScale(const float& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomDistanceFieldReplacementMesh(const FSoftObjectPath& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomBuildScale3D(const FVector& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomBuildReversedIndexBuffer(const bool& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomBuildNanite(const bool& AttributeValue, bool bAddApplyDelegate);
    bool RemoveSocketUd(FString SocketUid);
    void InitializeStaticMeshNode(FString UniqueID, FString DisplayLabel, FString InAssetClass);
    void GetSocketUids(TArray<FString>& OutSocketUids);
    int32 GetSocketUidCount();
    UClass* GetObjectClass();
    bool GetCustomSupportFaceRemap(bool& AttributeValue);
    bool GetCustomSrcLightmapIndex(int32& AttributeValue);
    bool GetCustomMinLightmapResolution(int32& AttributeValue);
    bool GetCustomMaxLumenMeshCards(int32& AttributeValue);
    bool GetCustomGenerateLightmapUVs(bool& AttributeValue);
    bool GetCustomGenerateDistanceFieldAsIfTwoSided(bool& AttributeValue);
    bool GetCustomDstLightmapIndex(int32& AttributeValue);
    bool GetCustomDistanceFieldResolutionScale(float& AttributeValue);
    bool GetCustomDistanceFieldReplacementMesh(FSoftObjectPath& AttributeValue);
    bool GetCustomBuildScale3D(FVector& AttributeValue);
    bool GetCustomBuildReversedIndexBuffer(bool& AttributeValue);
    bool GetCustomBuildNanite(bool& AttributeValue);
    bool AddSocketUids(const TArray<FString>& InSocketUids);
    bool AddSocketUid(FString SocketUid);
}; // Size: 0x3A8

class UInterchangeStaticMeshLodDataNode : public UInterchangeFactoryBaseNode
{

    bool SetOneConvexHullPerUCX(bool AttributeValue);
    bool SetImportCollision(bool AttributeValue);
    bool RemoveSphereCollisionMeshUid(FString meshName);
    bool RemoveMeshUid(FString meshName);
    bool RemoveConvexCollisionMeshUid(FString meshName);
    bool RemoveCapsuleCollisionMeshUid(FString meshName);
    bool RemoveBoxCollisionMeshUid(FString meshName);
    bool RemoveAllSphereCollisionMeshes();
    bool RemoveAllMeshes();
    bool RemoveAllConvexCollisionMeshes();
    bool RemoveAllCapsuleCollisionMeshes();
    bool RemoveAllBoxCollisionMeshes();
    int32 GetSphereCollisionMeshUidsCount();
    void GetSphereCollisionMeshUids(TArray<FString>& OutMeshNames);
    bool GetOneConvexHullPerUCX(bool& AttributeValue);
    int32 GetMeshUidsCount();
    void GetMeshUids(TArray<FString>& OutMeshNames);
    bool GetImportCollision(bool& AttributeValue);
    int32 GetConvexCollisionMeshUidsCount();
    void GetConvexCollisionMeshUids(TArray<FString>& OutMeshNames);
    int32 GetCapsuleCollisionMeshUidsCount();
    void GetCapsuleCollisionMeshUids(TArray<FString>& OutMeshNames);
    int32 GetBoxCollisionMeshUidsCount();
    void GetBoxCollisionMeshUids(TArray<FString>& OutMeshNames);
    bool AddSphereCollisionMeshUid(FString meshName);
    bool AddMeshUid(FString meshName);
    bool AddConvexCollisionMeshUid(FString meshName);
    bool AddCapsuleCollisionMeshUid(FString meshName);
    bool AddBoxCollisionMeshUid(FString meshName);
}; // Size: 0x200

class UInterchangeTexture2DArrayFactoryNode : public UInterchangeTextureFactoryNode
{

    bool SetCustomAddressZ(const uint8 AttributeValue, bool bAddApplyDelegate);
    bool GetCustomAddressZ(uint8& AttributeValue);
    bool GetCustomAddressY(uint8& AttributeValue);
    bool GetCustomAddressX(uint8& AttributeValue);
}; // Size: 0x400

class UInterchangeTexture2DFactoryNode : public UInterchangeTextureFactoryNode
{

    void SetSourceBlocks(const TMap<int32, FString>& InSourceBlocks);
    void SetSourceBlockByCoordinates(int32 X, int32 Y, FString InSourceFile);
    void SetSourceBlock(int32 BlockIndex, FString InSourceFile);
    bool SetCustomAddressY(const TEnumAsByte<TextureAddress> AttributeValue, bool bAddApplyDelegate);
    bool SetCustomAddressX(const TEnumAsByte<TextureAddress> AttributeValue, bool bAddApplyDelegate);
    TMap<int32, FString> GetSourceBlocks();
    bool GetSourceBlockByCoordinates(int32 X, int32 Y, FString& OutSourceFile);
    bool GetSourceBlock(int32 BlockIndex, FString& OutSourceFile);
    bool GetCustomAddressY(TEnumAsByte<TextureAddress>& AttributeValue);
    bool GetCustomAddressX(TEnumAsByte<TextureAddress>& AttributeValue);
}; // Size: 0x468

class UInterchangeTextureCubeArrayFactoryNode : public UInterchangeTextureFactoryNode
{
}; // Size: 0x3D0

class UInterchangeTextureCubeFactoryNode : public UInterchangeTextureFactoryNode
{
}; // Size: 0x3D0

class UInterchangeTextureFactoryNode : public UInterchangeFactoryBaseNode
{

    bool SetCustomVirtualTextureStreaming(const bool& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomTranslatedTextureNodeUid(FString AttributeValue);
    bool SetCustomSRGB(const bool& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomPreferCompressedSourceData(const bool& AttributeValue);
    bool SetCustomPowerOfTwoMode(const uint8& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomPaddingColor(const FColor& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomMipLoadOptions(const uint8& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomMipGenSettings(const uint8& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomMaxTextureSize(const int32& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomLossyCompressionAmount(const uint8& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomLODGroup(const uint8& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomLODBias(const int32& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomFilter(const uint8& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomDownscaleOptions(const uint8& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomDownscale(const float& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomDeferCompression(const bool& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomCompressionSettings(const uint8& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomCompressionQuality(const uint8& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomCompressionNoAlpha(const bool& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomCompositeTextureMode(const uint8& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomCompositePower(const float& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomChromaKeyThreshold(const float& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomChromaKeyColor(const FColor& AttributeValue, bool bAddApplyDelegate);
    bool SetCustombUseLegacyGamma(const bool& AttributeValue, bool bAddApplyDelegate);
    bool SetCustombPreserveBorder(const bool& AttributeValue, bool bAddApplyDelegate);
    bool SetCustombFlipGreenChannel(const bool& AttributeValue, bool bAddApplyDelegate);
    bool SetCustombDoScaleMipsForAlphaCoverage(const bool& AttributeValue, bool bAddApplyDelegate);
    bool SetCustombChromaKeyTexture(const bool& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomAlphaCoverageThresholds(const FVector4& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomAllowNonPowerOfTwo(const bool& AttributeValue);
    bool SetCustomAdjustVibrance(const float& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomAdjustSaturation(const float& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomAdjustRGBCurve(const float& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomAdjustMinAlpha(const float& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomAdjustMaxAlpha(const float& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomAdjustHue(const float& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomAdjustBrightnessCurve(const float& AttributeValue, bool bAddApplyDelegate);
    bool SetCustomAdjustBrightness(const float& AttributeValue, bool bAddApplyDelegate);
    void InitializeTextureNode(FString UniqueID, FString DisplayLabel, FString InAssetName);
    UClass* GetObjectClass();
    bool GetCustomVirtualTextureStreaming(bool& AttributeValue);
    bool GetCustomTranslatedTextureNodeUid(FString& AttributeValue);
    bool GetCustomSRGB(bool& AttributeValue);
    bool GetCustomPreferCompressedSourceData(bool& AttributeValue);
    bool GetCustomPowerOfTwoMode(uint8& AttributeValue);
    bool GetCustomPaddingColor(FColor& AttributeValue);
    bool GetCustomMipLoadOptions(uint8& AttributeValue);
    bool GetCustomMipGenSettings(uint8& AttributeValue);
    bool GetCustomMaxTextureSize(int32& AttributeValue);
    bool GetCustomLossyCompressionAmount(uint8& AttributeValue);
    bool GetCustomLODGroup(uint8& AttributeValue);
    bool GetCustomLODBias(int32& AttributeValue);
    bool GetCustomFilter(uint8& AttributeValue);
    bool GetCustomDownscaleOptions(uint8& AttributeValue);
    bool GetCustomDownscale(float& AttributeValue);
    bool GetCustomDeferCompression(bool& AttributeValue);
    bool GetCustomCompressionSettings(uint8& AttributeValue);
    bool GetCustomCompressionQuality(uint8& AttributeValue);
    bool GetCustomCompressionNoAlpha(bool& AttributeValue);
    bool GetCustomCompositeTextureMode(uint8& AttributeValue);
    bool GetCustomCompositePower(float& AttributeValue);
    bool GetCustomChromaKeyThreshold(float& AttributeValue);
    bool GetCustomChromaKeyColor(FColor& AttributeValue);
    bool GetCustombUseLegacyGamma(bool& AttributeValue);
    bool GetCustombPreserveBorder(bool& AttributeValue);
    bool GetCustombFlipGreenChannel(bool& AttributeValue);
    bool GetCustombDoScaleMipsForAlphaCoverage(bool& AttributeValue);
    bool GetCustombChromaKeyTexture(bool& AttributeValue);
    bool GetCustomAlphaCoverageThresholds(FVector4& AttributeValue);
    bool GetCustomAllowNonPowerOfTwo(bool& AttributeValue);
    bool GetCustomAdjustVibrance(float& AttributeValue);
    bool GetCustomAdjustSaturation(float& AttributeValue);
    bool GetCustomAdjustRGBCurve(float& AttributeValue);
    bool GetCustomAdjustMinAlpha(float& AttributeValue);
    bool GetCustomAdjustMaxAlpha(float& AttributeValue);
    bool GetCustomAdjustHue(float& AttributeValue);
    bool GetCustomAdjustBrightnessCurve(float& AttributeValue);
    bool GetCustomAdjustBrightness(float& AttributeValue);
}; // Size: 0x3D0

class UInterchangeTextureLightProfileFactoryNode : public UInterchangeTexture2DFactoryNode
{

    bool SetCustomTextureMultiplier(const float AttributeValue, bool bAddApplyDelegate);
    bool SetCustomBrightness(const float AttributeValue, bool bAddApplyDelegate);
    bool GetCustomTextureMultiplier(float& AttributeValue);
    bool GetCustomBrightness(float& AttributeValue);
}; // Size: 0x488

class UInterchangeVolumeTextureFactoryNode : public UInterchangeTextureFactoryNode
{
}; // Size: 0x3D0

#endif
