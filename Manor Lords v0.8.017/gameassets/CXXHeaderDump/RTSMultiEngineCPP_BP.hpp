#ifndef UE4SS_SDK_RTSMultiEngineCPP_BP_HPP
#define UE4SS_SDK_RTSMultiEngineCPP_BP_HPP

class AMyRTSMultiEngineCPP_BP_C : public ARTSMultiEngineCPP
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1440 (size: 0x8)
    class UInstancedStaticMeshComponent* InstanceSnowTrails;                          // 0x1448 (size: 0x8)
    double buildingCullDistance;                                                      // 0x1450 (size: 0x8)
    double unitCullDistance;                                                          // 0x1458 (size: 0x8)

    void bakeLandscapeHeight();
    void updateRegions();
    class UStaticMesh* getFallenTreeMeshForTree(const class UStaticMesh* treeMesh, FString& stumpName);
    void getLoadedConstructionTemplate(const TSoftClassPtr<AConstruction>& constructionAsset, TSubclassOf<class AConstruction>& outConstructionTemplate);
    void updateRegionNameMapTexts();
    void getRandomSquad(FSquad& newSquad);
    void getConstructionBP(const int32& HISM, TSubclassOf<class AConstruction>& ConstructionBP);
    void setupUnits();
    void setUnit(class UHierarchicalInstancedStaticMeshComponent* Target, class UStaticMesh* NewMesh);
    void setupBuildings();
    void setBuilding(class UStaticMeshComponent* Target, class UStaticMesh* NewMesh, bool bNewReceivesDecals);
    void UserConstructionScript();
    void OnLoaded_F036CE2A432404F4FC13A39639FD3079(class UObject* Loaded);
    void ReceiveBeginPlay();
    void setupUpgrades();
    void updateRegionNamesTxt();
    void loadAsyncBP(TSoftObjectPtr<UObject> Asset);
    void ExecuteUbergraph_MyRTSMultiEngineCPP_BP(int32 EntryPoint);
}; // Size: 0x1460

#endif
