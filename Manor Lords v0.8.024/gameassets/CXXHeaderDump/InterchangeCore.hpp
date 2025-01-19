#ifndef UE4SS_SDK_InterchangeCore_HPP
#define UE4SS_SDK_InterchangeCore_HPP

#include "InterchangeCore_enums.hpp"

struct FInterchangePipelinePropertyStatePerContext
{
    bool bVisible;                                                                    // 0x0000 (size: 0x1)

}; // Size: 0x1

struct FInterchangePipelinePropertyStates
{
    bool bLocked;                                                                     // 0x0000 (size: 0x1)
    FInterchangePipelinePropertyStatePerContext BasicLayoutStates;                    // 0x0001 (size: 0x1)
    FInterchangePipelinePropertyStatePerContext ImportStates;                         // 0x0002 (size: 0x1)
    FInterchangePipelinePropertyStatePerContext ReimportStates;                       // 0x0003 (size: 0x1)

}; // Size: 0x4

struct FInterchangeUserDefinedAttributeInfo
{
    FString Name;                                                                     // 0x0000 (size: 0x10)

}; // Size: 0x38

class UInterchangeBaseNode : public UObject
{

    bool SetParentUid(FString ParentUid);
    bool SetEnabled(const bool bIsEnabled);
    bool SetDisplayLabel(FString DisplayName);
    bool SetAssetName(FString AssetName);
    bool RemoveTargetNodeUid(FString AssetUid);
    bool RemoveAttribute(FString NodeAttributeKey);
    bool IsEnabled();
    void InitializeNode(FString UniqueID, FString DisplayLabel, const EInterchangeNodeContainerType NodeContainerType);
    bool GetVector2Attribute(FString NodeAttributeKey, FVector2f& OutValue);
    FString GetUniqueID();
    void GetTargetNodeUids(TArray<FString>& OutTargetAssets);
    int32 GetTargetNodeCount();
    bool GetStringAttribute(FString NodeAttributeKey, FString& OutValue);
    FString GetParentUid();
    EInterchangeNodeContainerType GetNodeContainerType();
    bool GetLinearColorAttribute(FString NodeAttributeKey, FLinearColor& OutValue);
    bool GetInt32Attribute(FString NodeAttributeKey, int32& OutValue);
    bool GetGuidAttribute(FString NodeAttributeKey, FGuid& OutValue);
    bool GetFloatAttribute(FString NodeAttributeKey, float& OutValue);
    bool GetDoubleAttribute(FString NodeAttributeKey, double& OutValue);
    FString GetDisplayLabel();
    bool GetBooleanAttribute(FString NodeAttributeKey, bool& OutValue);
    FString GetAssetName();
    bool AddVector2Attribute(FString NodeAttributeKey, const FVector2f& Value);
    bool AddTargetNodeUid(FString AssetUid);
    bool AddStringAttribute(FString NodeAttributeKey, FString Value);
    bool AddLinearColorAttribute(FString NodeAttributeKey, const FLinearColor& Value);
    bool AddInt32Attribute(FString NodeAttributeKey, const int32& Value);
    bool AddGuidAttribute(FString NodeAttributeKey, const FGuid& Value);
    bool AddFloatAttribute(FString NodeAttributeKey, const float& Value);
    bool AddDoubleAttribute(FString NodeAttributeKey, const double& Value);
    bool AddBooleanAttribute(FString NodeAttributeKey, const bool& Value);
}; // Size: 0x60

class UInterchangeBaseNodeContainer : public UObject
{
    TMap<class FString, class UInterchangeBaseNode*> Nodes;                           // 0x0028 (size: 0x50)

    bool SetNodeParentUid(FString NodeUniqueID, FString NewParentNodeUid);
    void SaveToFile(FString Filename);
    void ResetChildrenCache();
    void Reset();
    void ReplaceNode(FString NodeUniqueID, class UInterchangeFactoryBaseNode* NewNode);
    void LoadFromFile(FString Filename);
    bool IsNodeUidValid(FString NodeUniqueID);
    void GetRoots(TArray<FString>& RootNodes);
    void GetNodes(const UClass* ClassNode, TArray<FString>& OutNodes);
    TArray<FString> GetNodeChildrenUids(FString NodeUniqueID);
    int32 GetNodeChildrenCount(FString NodeUniqueID);
    class UInterchangeBaseNode* GetNodeChildren(FString NodeUniqueID, int32 ChildIndex);
    class UInterchangeBaseNode* GetNode(FString NodeUniqueID);
    class UInterchangeFactoryBaseNode* GetFactoryNode(FString NodeUniqueID);
    void ComputeChildrenCache();
    FString AddNode(class UInterchangeBaseNode* Node);
}; // Size: 0xC8

class UInterchangeFactoryBase : public UObject
{
    class UInterchangeResultsContainer* Results;                                      // 0x0028 (size: 0x8)

    UClass* GetFactoryClass();
}; // Size: 0x30

class UInterchangeFactoryBaseNode : public UInterchangeBaseNode
{

    bool UnsetSkipNodeImport();
    bool UnsetForceNodeReimport();
    bool ShouldSkipNodeImport();
    bool ShouldForceNodeReimport();
    bool SetSkipNodeImport();
    bool SetReimportStrategyFlags(const EReimportStrategyFlags& ReimportStrategyFlags);
    bool SetForceNodeReimport();
    bool SetCustomSubPath(FString AttributeValue);
    bool SetCustomReferenceObject(const FSoftObjectPath& AttributeValue);
    bool RemoveFactoryDependencyUid(FString DependencyUid);
    EReimportStrategyFlags GetReimportStrategyFlags();
    void GetFactoryDependency(const int32 Index, FString& OutDependency);
    int32 GetFactoryDependenciesCount();
    void GetFactoryDependencies(TArray<FString>& OutDependencies);
    bool GetCustomSubPath(FString& AttributeValue);
    bool GetCustomReferenceObject(FSoftObjectPath& AttributeValue);
    bool AddFactoryDependencyUid(FString DependencyUid);
}; // Size: 0x140

class UInterchangePipelineBase : public UObject
{
    class UInterchangeResultsContainer* Results;                                      // 0x0040 (size: 0x8)
    TMap<class FName, class FInterchangePipelinePropertyStates> PropertiesStates;     // 0x0048 (size: 0x50)

    void ScriptedSetReimportSourceIndex(UClass* ReimportObjectClass, const int32 SourceFileIndex);
    FString ScriptedGetPipelineDisplayName();
    void ScriptedExecutePostImportPipeline(const class UInterchangeBaseNodeContainer* BaseNodeContainer, FString FactoryNodeKey, class UObject* CreatedAsset, bool bIsAReimport);
    void ScriptedExecutePostFactoryPipeline(const class UInterchangeBaseNodeContainer* BaseNodeContainer, FString FactoryNodeKey, class UObject* CreatedAsset, bool bIsAReimport);
    void ScriptedExecutePipeline(class UInterchangeBaseNodeContainer* BaseNodeContainer, const TArray<class UInterchangeSourceData*>& SourceDatas, FString ContentBasePath);
    void ScriptedExecuteExportPipeline(class UInterchangeBaseNodeContainer* BaseNodeContainer);
    FInterchangePipelinePropertyStates FindOrAddPropertyStates(const FName PropertyPath);
    bool DoesPropertyStatesExist(const FName PropertyPath);
}; // Size: 0x108

class UInterchangeResult : public UObject
{
    FString SourceAssetName;                                                          // 0x0028 (size: 0x10)
    FString DestinationAssetName;                                                     // 0x0038 (size: 0x10)
    FString AssetFriendlyName;                                                        // 0x0048 (size: 0x10)
    UClass* AssetType;                                                                // 0x0058 (size: 0x8)
    FString InterchangeKey;                                                           // 0x0060 (size: 0x10)

}; // Size: 0x70

class UInterchangeResultDisplay_Generic : public UInterchangeResultSuccess
{
    FText Text;                                                                       // 0x0070 (size: 0x10)

}; // Size: 0x80

class UInterchangeResultError : public UInterchangeResult
{
}; // Size: 0x70

class UInterchangeResultError_Generic : public UInterchangeResultError
{
    FText Text;                                                                       // 0x0070 (size: 0x10)

}; // Size: 0x80

class UInterchangeResultError_ReimportFail : public UInterchangeResultError
{
}; // Size: 0x70

class UInterchangeResultSuccess : public UInterchangeResult
{
}; // Size: 0x70

class UInterchangeResultWarning : public UInterchangeResult
{
}; // Size: 0x70

class UInterchangeResultWarning_Generic : public UInterchangeResultWarning
{
    FText Text;                                                                       // 0x0070 (size: 0x10)

}; // Size: 0x80

class UInterchangeResultsContainer : public UObject
{
    TArray<class UInterchangeResult*> Results;                                        // 0x0050 (size: 0x10)

}; // Size: 0x60

class UInterchangeSourceData : public UObject
{
    FString Filename;                                                                 // 0x0028 (size: 0x10)

    bool SetFilename(FString InFilename);
    FString GetFilename();
}; // Size: 0x50

class UInterchangeSourceNode : public UInterchangeBaseNode
{

    bool SetCustomSourceTimelineStart(const double& AttributeValue);
    bool SetCustomSourceTimelineEnd(const double& AttributeValue);
    bool SetCustomSourceFrameRateNumerator(const int32& AttributeValue);
    bool SetCustomSourceFrameRateDenominator(const int32& AttributeValue);
    bool SetCustomImportUnusedMaterial(const bool& AttributeValue);
    bool SetCustomAnimatedTimeStart(const double& AttributeValue);
    bool SetCustomAnimatedTimeEnd(const double& AttributeValue);
    void InitializeSourceNode(FString UniqueID, FString DisplayLabel);
    bool GetCustomSourceTimelineStart(double& AttributeValue);
    bool GetCustomSourceTimelineEnd(double& AttributeValue);
    bool GetCustomSourceFrameRateNumerator(int32& AttributeValue);
    bool GetCustomSourceFrameRateDenominator(int32& AttributeValue);
    bool GetCustomImportUnusedMaterial(bool& AttributeValue);
    bool GetCustomAnimatedTimeStart(double& AttributeValue);
    bool GetCustomAnimatedTimeEnd(double& AttributeValue);
}; // Size: 0xD0

class UInterchangeTranslatorBase : public UObject
{
    class UInterchangeResultsContainer* Results;                                      // 0x0028 (size: 0x8)
    class UInterchangeSourceData* SourceData;                                         // 0x0030 (size: 0x8)

}; // Size: 0x38

class UInterchangeTranslatorSettings : public UObject
{
}; // Size: 0x28

class UInterchangeUserDefinedAttributesAPI : public UObject
{

    bool RemoveUserDefinedAttribute(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName);
    void GetUserDefinedAttributeInfos(const class UInterchangeBaseNode* InterchangeNode, TArray<FInterchangeUserDefinedAttributeInfo>& UserDefinedAttributeInfos);
    bool GetUserDefinedAttribute_Int32(const class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, int32& OutValue, FString& OutPayloadKey);
    bool GetUserDefinedAttribute_FString(const class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, FString& OutValue, FString& OutPayloadKey);
    bool GetUserDefinedAttribute_Float(const class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, float& OutValue, FString& OutPayloadKey);
    bool GetUserDefinedAttribute_Double(const class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, double& OutValue, FString& OutPayloadKey);
    bool GetUserDefinedAttribute_Boolean(const class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, bool& OutValue, FString& OutPayloadKey);
    void DuplicateAllUserDefinedAttribute(const class UInterchangeBaseNode* InterchangeSourceNode, class UInterchangeBaseNode* InterchangeDestinationNode, bool bAddSourceNodeName);
    bool CreateUserDefinedAttribute_Int32(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, const int32& Value, FString PayloadKey, bool RequiresDelegate);
    bool CreateUserDefinedAttribute_FString(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, FString Value, FString PayloadKey, bool RequiresDelegate);
    bool CreateUserDefinedAttribute_Float(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, const float& Value, FString PayloadKey, bool RequiresDelegate);
    bool CreateUserDefinedAttribute_Double(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, const double& Value, FString PayloadKey, bool RequiresDelegate);
    bool CreateUserDefinedAttribute_Boolean(class UInterchangeBaseNode* InterchangeNode, FString UserDefinedAttributeName, const bool& Value, FString PayloadKey, bool RequiresDelegate);
}; // Size: 0x28

class UInterchangeWriterBase : public UObject
{
}; // Size: 0x28

#endif
