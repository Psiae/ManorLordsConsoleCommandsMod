#ifndef UE4SS_SDK_DataflowEngine_HPP
#define UE4SS_SDK_DataflowEngine_HPP

#include "DataflowEngine_enums.hpp"

struct FDataflowPreviewCacheParams
{
    int32 FrameRate;                                                                  // 0x0000 (size: 0x4)
    FVector2f TimeRange;                                                              // 0x0004 (size: 0x8)
    bool bAsyncCaching;                                                               // 0x000C (size: 0x1)

}; // Size: 0x10

struct FStringValuePair
{
    FString Key;                                                                      // 0x0000 (size: 0x10)
    FString Value;                                                                    // 0x0010 (size: 0x10)

}; // Size: 0x20

class IDataflowContentOwner : public IInterface
{
}; // Size: 0x28

class UDataflow : public UEdGraph
{
    bool bActive;                                                                     // 0x0098 (size: 0x1)
    TArray<class UObject*> Targets;                                                   // 0x00A0 (size: 0x10)
    class UMaterial* Material;                                                        // 0x00B0 (size: 0x8)
    EDataflowType Type;                                                               // 0x00B8 (size: 0x1)

}; // Size: 0xC0

class UDataflowBaseContent : public UDataflowContextObject
{
    FString DataflowTerminal;                                                         // 0x0078 (size: 0x10)
    class UObject* TerminalAsset;                                                     // 0x0088 (size: 0x8)
    bool bIsConstructionDirty;                                                        // 0x0098 (size: 0x1)
    bool bIsSimulationDirty;                                                          // 0x0099 (size: 0x1)

}; // Size: 0xA8

class UDataflowBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void EvaluateTerminalNodeByName(class UDataflow* Dataflow, FName TerminalNodeName, class UObject* ResultAsset);
}; // Size: 0x28

class UDataflowContextObject : public UObject
{
    class UDataflowEdNode* SelectedNode;                                              // 0x0038 (size: 0x8)
    class UDataflow* DataflowGraph;                                                   // 0x0058 (size: 0x8)

}; // Size: 0x78

class UDataflowEdNode : public UEdGraphNode
{
    bool bRenderInAssetEditor;                                                        // 0x00B8 (size: 0x1)
    bool bRenderWireframeInAssetEditor;                                               // 0x00B9 (size: 0x1)
    bool bCanEnableRenderWireframe;                                                   // 0x00BA (size: 0x1)

}; // Size: 0xC0

class UDataflowSkeletalContent : public UDataflowBaseContent
{
    class USkeletalMesh* SkeletalMesh;                                                // 0x00A8 (size: 0x8)
    class UAnimationAsset* AnimationAsset;                                            // 0x00B0 (size: 0x8)

}; // Size: 0xC0

#endif
