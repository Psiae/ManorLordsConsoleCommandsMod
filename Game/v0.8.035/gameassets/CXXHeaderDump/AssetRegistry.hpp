#ifndef UE4SS_SDK_AssetRegistry_HPP
#define UE4SS_SDK_AssetRegistry_HPP

#include "AssetRegistry_enums.hpp"

struct FAssetRegistryDependencyOptions
{
    bool bIncludeSoftPackageReferences;                                               // 0x0000 (size: 0x1)
    bool bIncludeHardPackageReferences;                                               // 0x0001 (size: 0x1)
    bool bIncludeSearchableNames;                                                     // 0x0002 (size: 0x1)
    bool bIncludeSoftManagementReferences;                                            // 0x0003 (size: 0x1)
    bool bIncludeHardManagementReferences;                                            // 0x0004 (size: 0x1)

}; // Size: 0x5

struct FTagAndValue
{
    FName Tag;                                                                        // 0x0000 (size: 0x8)
    FString Value;                                                                    // 0x0008 (size: 0x10)

}; // Size: 0x18

class IAssetRegistry : public IInterface
{

    void WaitForPackage(FString PackageName);
    void WaitForCompletion();
    void UseFilterToExcludeAssets(TArray<FAssetData>& AssetDataList, const FARFilter& Filter);
    void SearchAllAssets(bool bSynchronousSearch);
    void ScanPathsSynchronous(const TArray<FString>& InPaths, bool bForceRescan, bool bIgnoreDenyListScanFilters);
    void ScanModifiedAssetFiles(const TArray<FString>& InFilePaths);
    void ScanFilesSynchronous(const TArray<FString>& InFilePaths, bool bForceRescan);
    void RunAssetsThroughFilter(TArray<FAssetData>& AssetDataList, const FARFilter& Filter);
    void PrioritizeSearchPath(FString PathToPrioritize);
    bool K2_GetReferencers(FName PackageName, const FAssetRegistryDependencyOptions& ReferenceOptions, TArray<FName>& OutReferencers);
    bool K2_GetDependencies(FName PackageName, const FAssetRegistryDependencyOptions& DependencyOptions, TArray<FName>& OutDependencies);
    FAssetData K2_GetAssetByObjectPath(const FSoftObjectPath& ObjectPath, bool bIncludeOnlyOnDiskAssets, bool bSkipARFilteredAssets);
    bool IsSearchAsync();
    bool IsSearchAllAssets();
    bool IsLoadingAssets();
    bool HasAssets(const FName PackagePath, const bool bRecursive);
    void GetSubPaths(FString InBasePath, TArray<FString>& OutPathList, bool bInRecurse);
    bool GetInMemoryAssets(const FARFilter& Filter, TArray<FAssetData>& OutAssetData, bool bSkipARFilteredAssets);
    void GetDerivedClassNames(const TArray<FTopLevelAssetPath>& ClassNames, const TSet<FTopLevelAssetPath>& ExcludedClassNames, TSet<FTopLevelAssetPath>& OutDerivedClassNames);
    bool GetAssetsByPaths(TArray<FName> PackagePaths, TArray<FAssetData>& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets);
    bool GetAssetsByPath(FName PackagePath, TArray<FAssetData>& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets);
    bool GetAssetsByPackageName(FName PackageName, TArray<FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets, bool bSkipARFilteredAssets);
    bool GetAssetsByClass(FTopLevelAssetPath ClassPathName, TArray<FAssetData>& OutAssetData, bool bSearchSubClasses);
    bool GetAssets(const FARFilter& Filter, TArray<FAssetData>& OutAssetData, bool bSkipARFilteredAssets);
    FAssetData GetAssetByObjectPath(const FName ObjectPath, bool bIncludeOnlyOnDiskAssets);
    bool GetAncestorClassNames(FTopLevelAssetPath ClassPathName, TArray<FTopLevelAssetPath>& OutAncestorClassNames);
    void GetAllCachedPaths(TArray<FString>& OutPathList);
    bool GetAllAssets(TArray<FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets);
}; // Size: 0x28

class UAssetRegistryHelpers : public UObject
{

    FSoftObjectPath ToSoftObjectPath(const FAssetData& InAssetData);
    bool SortingPredicate__DelegateSignature(const FAssetData& Left, const FAssetData& Right);
    void SortByPredicate(TArray<FAssetData>& Assets, FSortByPredicateSortingPredicate SortingPredicate, EAssetRegistrySortOrder SortOrder);
    void SortByAssetName(TArray<FAssetData>& Assets, EAssetRegistrySortOrder SortOrder);
    FARFilter SetFilterTagsAndValues(const FARFilter& InFilter, const TArray<FTagAndValue>& InTagsAndValues);
    bool IsValid(const FAssetData& InAssetData);
    bool IsUAsset(const FAssetData& InAssetData);
    bool IsRedirector(const FAssetData& InAssetData);
    bool IsAssetLoaded(const FAssetData& InAssetData);
    bool GetTagValue(const FAssetData& InAssetData, const FName& InTagName, FString& OutTagValue);
    FString GetFullName(const FAssetData& InAssetData);
    FString GetExportTextName(const FAssetData& InAssetData);
    UClass* GetClass(const FAssetData& InAssetData);
    void GetBlueprintAssets(const FARFilter& InFilter, TArray<FAssetData>& OutAssetData);
    TScriptInterface<class IAssetRegistry> GetAssetRegistry();
    class UObject* GetAsset(const FAssetData& InAssetData);
    UClass* FindAssetNativeClass(const FAssetData& AssetData);
    FAssetData CreateAssetData(const class UObject* InAsset, bool bAllowBlueprintClass);
}; // Size: 0x28

class UAssetRegistryImpl : public UObject
{
}; // Size: 0x1108

#endif
