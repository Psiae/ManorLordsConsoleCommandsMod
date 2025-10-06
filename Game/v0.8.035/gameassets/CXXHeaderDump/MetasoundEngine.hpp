#ifndef UE4SS_SDK_MetasoundEngine_HPP
#define UE4SS_SDK_MetasoundEngine_HPP

#include "MetasoundEngine_enums.hpp"

struct FDefaultMetaSoundAssetAutoUpdateSettings
{
    FSoftObjectPath Metasound;                                                        // 0x0000 (size: 0x20)

}; // Size: 0x20

struct FMetaSoundAssetDirectory
{
    FDirectoryPath Directory;                                                         // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMetaSoundAsyncAssetDependencies
{
    class UObject* Metasound;                                                         // 0x0008 (size: 0x8)

}; // Size: 0x30

struct FMetaSoundBuilderNodeInputHandle : public FMetasoundFrontendVertexHandle
{
}; // Size: 0x20

struct FMetaSoundBuilderNodeOutputHandle : public FMetasoundFrontendVertexHandle
{
}; // Size: 0x20

struct FMetaSoundBuilderOptions
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    bool bForceUniqueClassName;                                                       // 0x0008 (size: 0x1)
    bool bAddToRegistry;                                                              // 0x0009 (size: 0x1)
    TScriptInterface<class IMetaSoundDocumentInterface> ExistingMetaSound;            // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FMetaSoundNodeHandle
{
    FGuid NodeID;                                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMetaSoundOutput : public FSoundGeneratorOutput
{
}; // Size: 0x10

struct FMetaSoundPageSettings
{
    FGuid UniqueID;                                                                   // 0x0000 (size: 0x10)
    FName Name;                                                                       // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FMetaSoundQualitySettings
{
    FGuid UniqueID;                                                                   // 0x0000 (size: 0x10)
    FName Name;                                                                       // 0x0010 (size: 0x8)
    FPerPlatformInt SampleRate;                                                       // 0x0018 (size: 0x4)
    FPerPlatformFloat BlockRate;                                                      // 0x001C (size: 0x4)

}; // Size: 0x20

class UMetaSoundAssetSubsystem : public UEngineSubsystem
{

    void UnregisterAssetClassesInDirectories(const TArray<FMetaSoundAssetDirectory>& Directories);
    void RegisterAssetClassesInDirectories(const TArray<FMetaSoundAssetDirectory>& Directories);
}; // Size: 0x30

class UMetaSoundBuilderBase : public UObject
{
    FMetaSoundFrontendDocumentBuilder Builder;                                        // 0x0028 (size: 0x48)

    void SetNodeInputDefault(const FMetaSoundBuilderNodeInputHandle& NodeInputHandle, const FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult);
    void SetGraphOutputName(FName OutputName, FName NewName, EMetaSoundBuilderResult& OutResult);
    void SetGraphOutputDataType(FName OutputName, FName DataType, EMetaSoundBuilderResult& OutResult);
    void SetGraphOutputAccessType(FName OutputName, EMetasoundFrontendVertexAccessType AccessType, EMetaSoundBuilderResult& OutResult);
    void SetGraphInputName(FName InputName, FName NewName, EMetaSoundBuilderResult& OutResult);
    void SetGraphInputDefault(FName InputName, const FMetasoundFrontendLiteral& Literal, EMetaSoundBuilderResult& OutResult);
    void SetGraphInputDataType(FName InputName, FName DataType, EMetaSoundBuilderResult& OutResult);
    void SetGraphInputAccessType(FName InputName, EMetasoundFrontendVertexAccessType AccessType, EMetaSoundBuilderResult& OutResult);
    void RemoveUnusedDependencies();
    void RemoveNodeInputDefault(const FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult& OutResult);
    void RemoveNode(const FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult, bool bRemoveUnusedDependencies);
    void RemoveInterface(FName InterfaceName, EMetaSoundBuilderResult& OutResult);
    void RemoveGraphOutput(FName Name, EMetaSoundBuilderResult& OutResult);
    void RemoveGraphInput(FName Name, EMetaSoundBuilderResult& OutResult);
    bool NodesAreConnected(const FMetaSoundBuilderNodeOutputHandle& OutputHandle, const FMetaSoundBuilderNodeInputHandle& InputHandle);
    bool NodeOutputIsConnected(const FMetaSoundBuilderNodeOutputHandle& OutputHandle);
    bool NodeInputIsConnected(const FMetaSoundBuilderNodeInputHandle& InputHandle);
    bool IsPreset();
    bool InterfaceIsDeclared(FName InterfaceName);
    FMetasoundFrontendClassName GetRootGraphClassName();
    class UObject* GetReferencedPresetAsset();
    bool GetNodeOutputIsConstructorPin(const FMetaSoundBuilderNodeOutputHandle& OutputHandle);
    void GetNodeOutputData(const FMetaSoundBuilderNodeOutputHandle& OutputHandle, FName& Name, FName& DataType, EMetaSoundBuilderResult& OutResult);
    bool GetNodeInputIsConstructorPin(const FMetaSoundBuilderNodeInputHandle& InputHandle);
    FMetasoundFrontendLiteral GetNodeInputDefault(const FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult& OutResult);
    void GetNodeInputData(const FMetaSoundBuilderNodeInputHandle& InputHandle, FName& Name, FName& DataType, EMetaSoundBuilderResult& OutResult);
    FMetasoundFrontendLiteral GetNodeInputClassDefault(const FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult& OutResult);
    TArray<FMetaSoundBuilderNodeOutputHandle> FindNodeOutputsByDataType(const FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult, FName DataType);
    TArray<FMetaSoundBuilderNodeOutputHandle> FindNodeOutputs(const FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult);
    FMetaSoundNodeHandle FindNodeOutputParent(const FMetaSoundBuilderNodeOutputHandle& OutputHandle, EMetaSoundBuilderResult& OutResult);
    FMetaSoundBuilderNodeOutputHandle FindNodeOutputByName(const FMetaSoundNodeHandle& NodeHandle, FName OutputName, EMetaSoundBuilderResult& OutResult);
    TArray<FMetaSoundBuilderNodeInputHandle> FindNodeInputsByDataType(const FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult, FName DataType);
    TArray<FMetaSoundBuilderNodeInputHandle> FindNodeInputs(const FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult);
    FMetaSoundNodeHandle FindNodeInputParent(const FMetaSoundBuilderNodeInputHandle& InputHandle, EMetaSoundBuilderResult& OutResult);
    FMetaSoundBuilderNodeInputHandle FindNodeInputByName(const FMetaSoundNodeHandle& NodeHandle, FName InputName, EMetaSoundBuilderResult& OutResult);
    FMetasoundFrontendVersion FindNodeClassVersion(const FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult);
    TArray<FMetaSoundNodeHandle> FindInterfaceOutputNodes(FName InterfaceName, EMetaSoundBuilderResult& OutResult);
    TArray<FMetaSoundNodeHandle> FindInterfaceInputNodes(FName InterfaceName, EMetaSoundBuilderResult& OutResult);
    FMetaSoundNodeHandle FindGraphOutputNode(FName OutputName, EMetaSoundBuilderResult& OutResult);
    FMetaSoundNodeHandle FindGraphInputNode(FName InputName, EMetaSoundBuilderResult& OutResult);
    void DisconnectNodesByInterfaceBindings(const FMetaSoundNodeHandle& FromNodeHandle, const FMetaSoundNodeHandle& ToNodeHandle, EMetaSoundBuilderResult& OutResult);
    void DisconnectNodes(const FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, const FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult& OutResult);
    void DisconnectNodeOutput(const FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, EMetaSoundBuilderResult& OutResult);
    void DisconnectNodeInput(const FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult& OutResult);
    void ConvertToPreset(const TScriptInterface<class IMetaSoundDocumentInterface>& ReferencedNodeClass, EMetaSoundBuilderResult& OutResult);
    void ConvertFromPreset(EMetaSoundBuilderResult& OutResult);
    bool ContainsNodeOutput(const FMetaSoundBuilderNodeOutputHandle& Output);
    bool ContainsNodeInput(const FMetaSoundBuilderNodeInputHandle& Input);
    bool ContainsNode(const FMetaSoundNodeHandle& Node);
    void ConnectNodesByInterfaceBindings(const FMetaSoundNodeHandle& FromNodeHandle, const FMetaSoundNodeHandle& ToNodeHandle, EMetaSoundBuilderResult& OutResult);
    void ConnectNodes(const FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, const FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult& OutResult);
    void ConnectNodeOutputToGraphOutput(FName GraphOutputName, const FMetaSoundBuilderNodeOutputHandle& NodeOutputHandle, EMetaSoundBuilderResult& OutResult);
    TArray<FMetaSoundBuilderNodeInputHandle> ConnectNodeOutputsToMatchingGraphInterfaceOutputs(const FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult);
    void ConnectNodeInputToGraphInput(FName GraphInputName, const FMetaSoundBuilderNodeInputHandle& NodeInputHandle, EMetaSoundBuilderResult& OutResult);
    TArray<FMetaSoundBuilderNodeOutputHandle> ConnectNodeInputsToMatchingGraphInterfaceInputs(const FMetaSoundNodeHandle& NodeHandle, EMetaSoundBuilderResult& OutResult);
    TScriptInterface<class IMetaSoundDocumentInterface> BuildNewMetaSound(FName NameBase);
    void BuildAndOverwriteMetaSound(TScriptInterface<class IMetaSoundDocumentInterface> ExistingMetaSound, bool bForceUniqueClassName);
    TScriptInterface<class IMetaSoundDocumentInterface> Build(class UObject* Parent, const FMetaSoundBuilderOptions& Options);
    FMetaSoundNodeHandle AddNodeByClassName(const FMetasoundFrontendClassName& ClassName, EMetaSoundBuilderResult& OutResult, int32 MajorVersion);
    FMetaSoundNodeHandle AddNode(const TScriptInterface<class IMetaSoundDocumentInterface>& NodeClass, EMetaSoundBuilderResult& OutResult);
    void AddInterface(FName InterfaceName, EMetaSoundBuilderResult& OutResult);
    FMetaSoundBuilderNodeInputHandle AddGraphOutputNode(FName Name, FName DataType, FMetasoundFrontendLiteral DefaultValue, EMetaSoundBuilderResult& OutResult, bool bIsConstructorOutput);
    FMetaSoundBuilderNodeOutputHandle AddGraphInputNode(FName Name, FName DataType, FMetasoundFrontendLiteral DefaultValue, EMetaSoundBuilderResult& OutResult, bool bIsConstructorInput);
}; // Size: 0x90

class UMetaSoundBuilderSubsystem : public UEngineSubsystem
{
    TMap<class FName, class UMetaSoundBuilderBase*> NamedBuilders;                    // 0x0030 (size: 0x50)

    bool UnregisterSourceBuilder(FName BuilderName);
    bool UnregisterPatchBuilder(FName BuilderName);
    bool UnregisterBuilder(FName BuilderName);
    bool SetTargetPage(FName PageName);
    void RegisterSourceBuilder(FName BuilderName, class UMetaSoundSourceBuilder* Builder);
    void RegisterPatchBuilder(FName BuilderName, class UMetaSoundPatchBuilder* Builder);
    void RegisterBuilder(FName BuilderName, class UMetaSoundBuilderBase* Builder);
    bool IsInterfaceRegistered(FName InInterfaceName);
    class UMetaSoundSourceBuilder* FindSourceBuilder(FName BuilderName);
    class UMetaSoundPatchBuilder* FindPatchBuilder(FName BuilderName);
    class UMetaSoundBuilderBase* FindBuilderOfDocument(TScriptInterface<class IMetaSoundDocumentInterface> InMetaSound);
    class UMetaSoundBuilderBase* FindBuilder(FName BuilderName);
    FMetasoundFrontendLiteral CreateStringMetaSoundLiteral(FString Value, FName& DataType);
    FMetasoundFrontendLiteral CreateStringArrayMetaSoundLiteral(const TArray<FString>& Value, FName& DataType);
    class UMetaSoundSourceBuilder* CreateSourcePresetBuilder(FName BuilderName, const TScriptInterface<class IMetaSoundDocumentInterface>& ReferencedSourceClass, EMetaSoundBuilderResult& OutResult);
    class UMetaSoundSourceBuilder* CreateSourceBuilder(FName BuilderName, FMetaSoundBuilderNodeOutputHandle& OnPlayNodeOutput, FMetaSoundBuilderNodeInputHandle& OnFinishedNodeInput, TArray<FMetaSoundBuilderNodeInputHandle>& AudioOutNodeInputs, EMetaSoundBuilderResult& OutResult, EMetaSoundOutputAudioFormat OutputFormat, bool bIsOneShot);
    class UMetaSoundPatchBuilder* CreatePatchPresetBuilder(FName BuilderName, const TScriptInterface<class IMetaSoundDocumentInterface>& ReferencedPatchClass, EMetaSoundBuilderResult& OutResult);
    class UMetaSoundPatchBuilder* CreatePatchBuilder(FName BuilderName, EMetaSoundBuilderResult& OutResult);
    FMetasoundFrontendLiteral CreateObjectMetaSoundLiteral(class UObject* Value);
    FMetasoundFrontendLiteral CreateObjectArrayMetaSoundLiteral(const TArray<class UObject*>& Value);
    FMetasoundFrontendLiteral CreateMetaSoundLiteralFromParam(const FAudioParameter& Param);
    FMetasoundFrontendLiteral CreateIntMetaSoundLiteral(int32 Value, FName& DataType);
    FMetasoundFrontendLiteral CreateIntArrayMetaSoundLiteral(const TArray<int32>& Value, FName& DataType);
    FMetasoundFrontendLiteral CreateFloatMetaSoundLiteral(float Value, FName& DataType);
    FMetasoundFrontendLiteral CreateFloatArrayMetaSoundLiteral(const TArray<float>& Value, FName& DataType);
    FMetasoundFrontendLiteral CreateBoolMetaSoundLiteral(bool Value, FName& DataType);
    FMetasoundFrontendLiteral CreateBoolArrayMetaSoundLiteral(const TArray<bool>& Value, FName& DataType);
}; // Size: 0x80

class UMetaSoundCacheSubsystem : public UAudioEngineSubsystem
{

    void TouchOrPrecacheMetaSound(class UMetaSoundSource* InMetaSound, int32 InNumInstances);
    void RemoveCachedOperatorsForMetaSound(class UMetaSoundSource* InMetaSound);
    void PrecacheMetaSound(class UMetaSoundSource* InMetaSound, int32 InNumInstances);
}; // Size: 0x78

class UMetaSoundOutputSubsystem : public UWorldSubsystem
{

    bool WatchOutput(class UAudioComponent* AudioComponent, FName OutputName, const FWatchOutputOnOutputValueChanged& OnOutputValueChanged, FName AnalyzerName, FName AnalyzerOutputName);
}; // Size: 0x40

class UMetaSoundPatch : public UObject
{
    FMetasoundFrontendDocument RootMetaSoundDocument;                                 // 0x0070 (size: 0x190)
    TSet<FString> ReferencedAssetClassKeys;                                           // 0x0200 (size: 0x50)
    TSet<UObject*> ReferencedAssetClassObjects;                                       // 0x0250 (size: 0x50)
    TSet<FSoftObjectPath> ReferenceAssetClassCache;                                   // 0x02A0 (size: 0x50)
    FGuid AssetClassID;                                                               // 0x02F0 (size: 0x10)

}; // Size: 0x308

class UMetaSoundPatchBuilder : public UMetaSoundBuilderBase
{
}; // Size: 0x90

class UMetaSoundQualityHelper : public UObject
{

    TArray<FName> GetQualityNames();
}; // Size: 0x28

class UMetaSoundSettings : public UDeveloperSettings
{
    bool bAutoUpdateEnabled;                                                          // 0x0038 (size: 0x1)
    TArray<FMetasoundFrontendClassName> AutoUpdateDenylist;                           // 0x0040 (size: 0x10)
    TArray<FDefaultMetaSoundAssetAutoUpdateSettings> AutoUpdateAssetDenylist;         // 0x0050 (size: 0x10)
    bool bAutoUpdateLogWarningOnDroppedConnection;                                    // 0x0060 (size: 0x1)
    TArray<FDirectoryPath> DirectoriesToRegister;                                     // 0x0068 (size: 0x10)
    int32 DenyListCacheChangeID;                                                      // 0x0078 (size: 0x4)
    FName TargetPageName;                                                             // 0x007C (size: 0x8)
    FMetaSoundPageSettings DefaultPageSettings;                                       // 0x0084 (size: 0x18)
    TArray<FMetaSoundPageSettings> PageSettings;                                      // 0x00A0 (size: 0x10)
    TArray<FMetaSoundQualitySettings> QualitySettings;                                // 0x00B0 (size: 0x10)

}; // Size: 0xC8

class UMetaSoundSource : public USoundWaveProcedural
{
    FMetasoundFrontendDocument RootMetaSoundDocument;                                 // 0x0488 (size: 0x190)
    TSet<FString> ReferencedAssetClassKeys;                                           // 0x0618 (size: 0x50)
    TSet<UObject*> ReferencedAssetClassObjects;                                       // 0x0668 (size: 0x50)
    TSet<FSoftObjectPath> ReferenceAssetClassCache;                                   // 0x06B8 (size: 0x50)
    EMetaSoundOutputAudioFormat OutputFormat;                                         // 0x0708 (size: 0x1)
    FGuid AssetClassID;                                                               // 0x070C (size: 0x10)

}; // Size: 0x810

class UMetaSoundSourceBuilder : public UMetaSoundBuilderBase
{

    void SetSampleRateOverride(int32 SampleRate);
    void SetQuality(FName Quality);
    void SetFormat(EMetaSoundOutputAudioFormat OutputFormat, EMetaSoundBuilderResult& OutResult);
    void SetBlockRateOverride(float BlockRate);
    bool GetLiveUpdatesEnabled();
    void Audition(class UObject* Parent, class UAudioComponent* AudioComponent, FAuditionOnCreateGenerator OnCreateGenerator, bool bLiveUpdatesEnabled);
}; // Size: 0xB8

class UMetasoundEditorGraphBase : public UEdGraph
{
}; // Size: 0x60

class UMetasoundFrontendLiteralBlueprintAccess : public UBlueprintFunctionLibrary
{

    FMetasoundFrontendLiteral CreateStringMetaSoundLiteral(FString Value);
    FMetasoundFrontendLiteral CreateStringArrayMetaSoundLiteral(const TArray<FString>& Value);
    FMetasoundFrontendLiteral CreateObjectMetaSoundLiteral(class UObject* Value);
    FMetasoundFrontendLiteral CreateObjectArrayMetaSoundLiteral(const TArray<class UObject*>& Value);
    FMetasoundFrontendLiteral CreateMetaSoundLiteralFromParam(const FAudioParameter& Param);
    FMetasoundFrontendLiteral CreateIntMetaSoundLiteral(int32 Value);
    FMetasoundFrontendLiteral CreateIntArrayMetaSoundLiteral(const TArray<int32>& Value);
    FMetasoundFrontendLiteral CreateFloatMetaSoundLiteral(float Value);
    FMetasoundFrontendLiteral CreateFloatArrayMetaSoundLiteral(const TArray<float>& Value);
    FMetasoundFrontendLiteral CreateBoolMetaSoundLiteral(bool Value);
    FMetasoundFrontendLiteral CreateBoolArrayMetaSoundLiteral(const TArray<bool>& Value);
}; // Size: 0x28

class UMetasoundGeneratorHandle : public UObject
{

    bool WatchOutput(FName OutputName, const FWatchOutputOnOutputValueChanged& OnOutputValueChanged, FName AnalyzerName, FName AnalyzerOutputName);
    void UpdateWatchers();
    double GetCPUCoreUtilization();
    void EnableRuntimeRenderTiming(bool Enable);
    class UMetasoundGeneratorHandle* CreateMetaSoundGeneratorHandle(class UAudioComponent* OnComponent);
    bool ApplyParameterPack(class UMetasoundParameterPack* Pack);
}; // Size: 0xB0

class UMetasoundOutputBlueprintAccess : public UBlueprintFunctionLibrary
{

    bool IsTime(const FMetaSoundOutput& Output);
    bool IsString(const FMetaSoundOutput& Output);
    bool IsInt32(const FMetaSoundOutput& Output);
    bool IsFloat(const FMetaSoundOutput& Output);
    bool IsBool(const FMetaSoundOutput& Output);
    double GetTimeSeconds(const FMetaSoundOutput& Output, bool& Success);
    FString GetString(const FMetaSoundOutput& Output, bool& Success);
    int32 GetInt32(const FMetaSoundOutput& Output, bool& Success);
    float GetFloat(const FMetaSoundOutput& Output, bool& Success);
    bool GetBool(const FMetaSoundOutput& Output, bool& Success);
}; // Size: 0x28

#endif
