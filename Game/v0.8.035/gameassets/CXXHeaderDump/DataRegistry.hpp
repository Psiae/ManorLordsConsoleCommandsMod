#ifndef UE4SS_SDK_DataRegistry_HPP
#define UE4SS_SDK_DataRegistry_HPP

#include "DataRegistry_enums.hpp"

struct FDataRegistryCachePolicy
{
    bool bCacheIsAlwaysVolatile;                                                      // 0x0000 (size: 0x1)
    bool bUseCurveTableCacheVersion;                                                  // 0x0001 (size: 0x1)
    int32 MinNumberKept;                                                              // 0x0004 (size: 0x4)
    int32 MaxNumberKept;                                                              // 0x0008 (size: 0x4)
    float ForceKeepSeconds;                                                           // 0x000C (size: 0x4)
    float ForceReleaseSeconds;                                                        // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FDataRegistryId
{
    FDataRegistryType RegistryType;                                                   // 0x0000 (size: 0x8)
    FName ItemName;                                                                   // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FDataRegistryIdFormat
{
    FGameplayTag BaseGameplayTag;                                                     // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FDataRegistryLookup
{
}; // Size: 0x20

struct FDataRegistryOrTableRow
{
    bool bUseDataRegistryId;                                                          // 0x0000 (size: 0x1)
    FDataTableRowHandle DataTableRow;                                                 // 0x0008 (size: 0x10)
    FDataRegistryId DataRegistryId;                                                   // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FDataRegistrySourceItemId
{
}; // Size: 0x40

struct FDataRegistrySource_DataTableRules
{
    bool bPrecacheTable;                                                              // 0x0000 (size: 0x1)
    float CachedTableKeepSeconds;                                                     // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FDataRegistryType
{
    FName Name;                                                                       // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FSoftDataRegistryOrTable
{
    bool bUseDataRegistry;                                                            // 0x0000 (size: 0x1)
    TSoftObjectPtr<UDataTable> Table;                                                 // 0x0008 (size: 0x28)
    FDataRegistryType RegistryType;                                                   // 0x0030 (size: 0x8)

}; // Size: 0x38

class UDataRegistry : public UObject
{
    FName RegistryType;                                                               // 0x0028 (size: 0x8)
    FDataRegistryIdFormat IdFormat;                                                   // 0x0030 (size: 0x8)
    class UScriptStruct* ItemStruct;                                                  // 0x0038 (size: 0x8)
    TArray<class UDataRegistrySource*> DataSources;                                   // 0x0040 (size: 0x10)
    TArray<class UDataRegistrySource*> RuntimeSources;                                // 0x0050 (size: 0x10)
    float TimerUpdateFrequency;                                                       // 0x0060 (size: 0x4)
    FDataRegistryCachePolicy DefaultCachePolicy;                                      // 0x0064 (size: 0x14)

}; // Size: 0xC0

class UDataRegistrySettings : public UDeveloperSettings
{
    TArray<FDirectoryPath> DirectoriesToScan;                                         // 0x0038 (size: 0x10)
    bool bInitializeAllLoadedRegistries;                                              // 0x0048 (size: 0x1)
    bool bIgnoreMissingCookedAssetRegistryData;                                       // 0x0049 (size: 0x1)

}; // Size: 0x50

class UDataRegistrySource : public UObject
{
    class UDataRegistrySource* ParentSource;                                          // 0x0030 (size: 0x8)

}; // Size: 0x38

class UDataRegistrySource_CurveTable : public UDataRegistrySource
{
    TSoftObjectPtr<UCurveTable> SourceTable;                                          // 0x0038 (size: 0x28)
    FDataRegistrySource_DataTableRules TableRules;                                    // 0x0060 (size: 0x8)
    class UCurveTable* CachedTable;                                                   // 0x0068 (size: 0x8)
    class UCurveTable* PreloadTable;                                                  // 0x0070 (size: 0x8)

}; // Size: 0xA0

class UDataRegistrySource_DataTable : public UDataRegistrySource
{
    TSoftObjectPtr<UDataTable> SourceTable;                                           // 0x0038 (size: 0x28)
    FDataRegistrySource_DataTableRules TableRules;                                    // 0x0060 (size: 0x8)
    class UDataTable* CachedTable;                                                    // 0x0068 (size: 0x8)
    class UDataTable* PreloadTable;                                                   // 0x0070 (size: 0x8)

}; // Size: 0xA0

class UDataRegistrySubsystem : public UEngineSubsystem
{

    bool NotEqual_DataRegistryType(FDataRegistryType A, FDataRegistryType B);
    bool NotEqual_DataRegistryId(FDataRegistryId A, FDataRegistryId B);
    bool IsValidDataRegistryType(FDataRegistryType DataRegistryType);
    bool IsValidDataRegistryId(FDataRegistryId DataRegistryId);
    void GetPossibleDataRegistryIdList(FDataRegistryType RegistryType, TArray<FDataRegistryId>& OutIdList);
    bool GetCachedItemFromLookupBP(FDataRegistryId ItemId, const FDataRegistryLookup& ResolvedLookup, FTableRowBase& OutItem);
    bool GetCachedItemBP(FDataRegistryId ItemId, FTableRowBase& OutItem);
    void FindCachedItemFromLookupBP(FDataRegistryId ItemId, const FDataRegistryLookup& ResolvedLookup, EDataRegistrySubsystemGetItemResult& OutResult, FTableRowBase& OutItem);
    void FindCachedItemBP(FDataRegistryId ItemId, EDataRegistrySubsystemGetItemResult& OutResult, FTableRowBase& OutItem);
    void EvaluateDataRegistryCurve(FDataRegistryId ItemId, float InputValue, float DefaultValue, EDataRegistrySubsystemGetItemResult& OutResult, float& OutValue);
    bool EqualEqual_DataRegistryType(FDataRegistryType A, FDataRegistryType B);
    bool EqualEqual_DataRegistryId(FDataRegistryId A, FDataRegistryId B);
    FString Conv_DataRegistryTypeToString(FDataRegistryType DataRegistryType);
    FString Conv_DataRegistryIdToString(FDataRegistryId DataRegistryId);
    bool AcquireItemBP(FDataRegistryId ItemId, FAcquireItemBPAcquireCallback AcquireCallback);
}; // Size: 0xE0

class UMetaDataRegistrySource : public UDataRegistrySource
{
    EMetaDataRegistrySourceAssetUsage AssetUsage;                                     // 0x0038 (size: 0x1)
    FAssetManagerSearchRules SearchRules;                                             // 0x0040 (size: 0x50)
    TMap<class FName, class UDataRegistrySource*> RuntimeChildren;                    // 0x0090 (size: 0x50)

}; // Size: 0x108

class UMetaDataRegistrySource_CurveTable : public UMetaDataRegistrySource
{
    TSubclassOf<class UDataRegistrySource_CurveTable> CreatedSource;                  // 0x0108 (size: 0x8)
    FDataRegistrySource_DataTableRules TableRules;                                    // 0x0110 (size: 0x8)

}; // Size: 0x118

class UMetaDataRegistrySource_DataTable : public UMetaDataRegistrySource
{
    TSubclassOf<class UDataRegistrySource_DataTable> CreatedSource;                   // 0x0108 (size: 0x8)
    FDataRegistrySource_DataTableRules TableRules;                                    // 0x0110 (size: 0x8)

}; // Size: 0x118

#endif
