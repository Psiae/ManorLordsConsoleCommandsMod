#ifndef UE4SS_SDK_GameplayTags_HPP
#define UE4SS_SDK_GameplayTags_HPP

#include "GameplayTags_enums.hpp"

struct FGameplayTag
{
    FName TagName;                                                                    // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FGameplayTagCategoryRemap
{
    FString BaseCategory;                                                             // 0x0000 (size: 0x10)
    TArray<FString> RemapCategories;                                                  // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FGameplayTagContainer
{
    TArray<FGameplayTag> GameplayTags;                                                // 0x0000 (size: 0x10)
    TArray<FGameplayTag> ParentTags;                                                  // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FGameplayTagContainerNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FGameplayTagContainerNetSerializerSerializationHelper
{
    TArray<FGameplayTag> GameplayTags;                                                // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FGameplayTagCreationWidgetHelper
{
}; // Size: 0x1

struct FGameplayTagNetSerializerConfig : public FNetSerializerConfig
{
}; // Size: 0x10

struct FGameplayTagNode
{
}; // Size: 0x50

struct FGameplayTagQuery
{
    int32 TokenStreamVersion;                                                         // 0x0000 (size: 0x4)
    TArray<FGameplayTag> TagDictionary;                                               // 0x0008 (size: 0x10)
    TArray<uint8> QueryTokenStream;                                                   // 0x0018 (size: 0x10)
    FString UserDescription;                                                          // 0x0028 (size: 0x10)
    FString AutoDescription;                                                          // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FGameplayTagRedirect
{
    FName OldTagName;                                                                 // 0x0000 (size: 0x8)
    FName NewTagName;                                                                 // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FGameplayTagSource
{
    FName SourceName;                                                                 // 0x0000 (size: 0x8)
    EGameplayTagSourceType SourceType;                                                // 0x0008 (size: 0x1)
    class UGameplayTagsList* SourceTagList;                                           // 0x0010 (size: 0x8)
    class URestrictedGameplayTagsList* SourceRestrictedTagList;                       // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FGameplayTagTableRow : public FTableRowBase
{
    FName Tag;                                                                        // 0x0008 (size: 0x8)
    FString DevComment;                                                               // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FRestrictedConfigInfo
{
    FString RestrictedConfigName;                                                     // 0x0000 (size: 0x10)
    TArray<FString> Owners;                                                           // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FRestrictedGameplayTagTableRow : public FGameplayTagTableRow
{
    bool bAllowNonRestrictedChildren;                                                 // 0x0020 (size: 0x1)

}; // Size: 0x28

class IGameplayTagAssetInterface : public IInterface
{

    bool HasMatchingGameplayTag(FGameplayTag TagToCheck);
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer);
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer);
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer);
}; // Size: 0x28

class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary
{

    bool RemoveGameplayTag(FGameplayTagContainer& TagContainer, FGameplayTag Tag);
    bool NotEqual_TagTag(FGameplayTag A, FString B);
    bool NotEqual_TagContainerTagContainer(FGameplayTagContainer A, FString B);
    bool NotEqual_GameplayTagContainer(const FGameplayTagContainer& A, const FGameplayTagContainer& B);
    bool NotEqual_GameplayTag(FGameplayTag A, FGameplayTag B);
    bool MatchesTag(FGameplayTag TagOne, FGameplayTag TagTwo, bool bExactMatch);
    bool MatchesAnyTags(FGameplayTag TagOne, const FGameplayTagContainer& OtherContainer, bool bExactMatch);
    FGameplayTagContainer MakeLiteralGameplayTagContainer(FGameplayTagContainer Value);
    FGameplayTag MakeLiteralGameplayTag(FGameplayTag Value);
    FGameplayTagQuery MakeGameplayTagQuery_MatchNoTags(const FGameplayTagContainer& InTags);
    FGameplayTagQuery MakeGameplayTagQuery_MatchAnyTags(const FGameplayTagContainer& InTags);
    FGameplayTagQuery MakeGameplayTagQuery_MatchAllTags(const FGameplayTagContainer& InTags);
    FGameplayTagQuery MakeGameplayTagQuery(FGameplayTagQuery TagQuery);
    FGameplayTagContainer MakeGameplayTagContainerFromTag(FGameplayTag SingleTag);
    FGameplayTagContainer MakeGameplayTagContainerFromArray(const TArray<FGameplayTag>& GameplayTags);
    bool IsTagQueryEmpty(const FGameplayTagQuery& TagQuery);
    bool IsGameplayTagValid(FGameplayTag GameplayTag);
    bool HasTag(const FGameplayTagContainer& TagContainer, FGameplayTag Tag, bool bExactMatch);
    bool HasAnyTags(const FGameplayTagContainer& TagContainer, const FGameplayTagContainer& OtherContainer, bool bExactMatch);
    bool HasAllTags(const FGameplayTagContainer& TagContainer, const FGameplayTagContainer& OtherContainer, bool bExactMatch);
    bool HasAllMatchingGameplayTags(TScriptInterface<class IGameplayTagAssetInterface> TagContainerInterface, const FGameplayTagContainer& OtherContainer);
    FName GetTagName(const FGameplayTag& GameplayTag);
    int32 GetNumGameplayTagsInContainer(const FGameplayTagContainer& TagContainer);
    FString GetDebugStringFromGameplayTagContainer(const FGameplayTagContainer& TagContainer);
    FString GetDebugStringFromGameplayTag(FGameplayTag GameplayTag);
    void GetAllActorsOfClassMatchingTagQuery(class UObject* WorldContextObject, TSubclassOf<class AActor> ActorClass, const FGameplayTagQuery& GameplayTagQuery, TArray<class AActor*>& OutActors);
    bool EqualEqual_GameplayTagContainer(const FGameplayTagContainer& A, const FGameplayTagContainer& B);
    bool EqualEqual_GameplayTag(FGameplayTag A, FGameplayTag B);
    bool DoesTagAssetInterfaceHaveTag(TScriptInterface<class IGameplayTagAssetInterface> TagContainerInterface, FGameplayTag Tag);
    bool DoesContainerMatchTagQuery(const FGameplayTagContainer& TagContainer, const FGameplayTagQuery& TagQuery);
    void BreakGameplayTagContainer(const FGameplayTagContainer& GameplayTagContainer, TArray<FGameplayTag>& GameplayTags);
    void AppendGameplayTagContainers(FGameplayTagContainer& InOutTagContainer, const FGameplayTagContainer& InTagContainer);
    void AddGameplayTag(FGameplayTagContainer& TagContainer, FGameplayTag Tag);
}; // Size: 0x28

class UEditableGameplayTagQuery : public UObject
{
    FString UserDescription;                                                          // 0x0028 (size: 0x10)
    class UEditableGameplayTagQueryExpression* RootExpression;                        // 0x0048 (size: 0x8)
    FGameplayTagQuery TagQueryExportText_Helper;                                      // 0x0050 (size: 0x48)

}; // Size: 0x98

class UEditableGameplayTagQueryExpression : public UObject
{
}; // Size: 0x28

class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression
{
    TArray<class UEditableGameplayTagQueryExpression*> Expressions;                   // 0x0028 (size: 0x10)

}; // Size: 0x38

class UEditableGameplayTagQueryExpression_AllTagsMatch : public UEditableGameplayTagQueryExpression
{
    FGameplayTagContainer Tags;                                                       // 0x0028 (size: 0x20)

}; // Size: 0x48

class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression
{
    TArray<class UEditableGameplayTagQueryExpression*> Expressions;                   // 0x0028 (size: 0x10)

}; // Size: 0x38

class UEditableGameplayTagQueryExpression_AnyTagsMatch : public UEditableGameplayTagQueryExpression
{
    FGameplayTagContainer Tags;                                                       // 0x0028 (size: 0x20)

}; // Size: 0x48

class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression
{
    TArray<class UEditableGameplayTagQueryExpression*> Expressions;                   // 0x0028 (size: 0x10)

}; // Size: 0x38

class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression
{
    FGameplayTagContainer Tags;                                                       // 0x0028 (size: 0x20)

}; // Size: 0x48

class UGameplayTagsDeveloperSettings : public UDeveloperSettings
{
    FString DeveloperConfigName;                                                      // 0x0038 (size: 0x10)
    FName FavoriteTagSource;                                                          // 0x0048 (size: 0x8)

}; // Size: 0x50

class UGameplayTagsList : public UObject
{
    FString ConfigFileName;                                                           // 0x0028 (size: 0x10)
    TArray<FGameplayTagTableRow> GameplayTagList;                                     // 0x0038 (size: 0x10)

}; // Size: 0x48

class UGameplayTagsManager : public UObject
{
    TMap<class FName, class FGameplayTagSource> TagSources;                           // 0x0188 (size: 0x50)
    TArray<class UDataTable*> GameplayTagTables;                                      // 0x0290 (size: 0x10)

}; // Size: 0x2A0

class UGameplayTagsSettings : public UGameplayTagsList
{
    bool ImportTagsFromConfig;                                                        // 0x0048 (size: 0x1)
    bool WarnOnInvalidTags;                                                           // 0x0049 (size: 0x1)
    bool ClearInvalidTags;                                                            // 0x004A (size: 0x1)
    bool AllowEditorTagUnloading;                                                     // 0x004B (size: 0x1)
    bool AllowGameTagUnloading;                                                       // 0x004C (size: 0x1)
    bool FastReplication;                                                             // 0x004D (size: 0x1)
    FString InvalidTagCharacters;                                                     // 0x0050 (size: 0x10)
    TArray<FGameplayTagCategoryRemap> CategoryRemapping;                              // 0x0060 (size: 0x10)
    TArray<FSoftObjectPath> GameplayTagTableList;                                     // 0x0070 (size: 0x10)
    TArray<FGameplayTagRedirect> GameplayTagRedirects;                                // 0x0080 (size: 0x10)
    TArray<FName> CommonlyReplicatedTags;                                             // 0x0090 (size: 0x10)
    int32 NumBitsForContainerSize;                                                    // 0x00A0 (size: 0x4)
    int32 NetIndexFirstBitSegment;                                                    // 0x00A4 (size: 0x4)
    TArray<FRestrictedConfigInfo> RestrictedConfigFiles;                              // 0x00A8 (size: 0x10)

}; // Size: 0xB8

class URestrictedGameplayTagsList : public UObject
{
    FString ConfigFileName;                                                           // 0x0028 (size: 0x10)
    TArray<FRestrictedGameplayTagTableRow> RestrictedGameplayTagList;                 // 0x0038 (size: 0x10)

}; // Size: 0x48

#endif
