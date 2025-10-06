#ifndef UE4SS_SDK_ConstructionBP_HPP
#define UE4SS_SDK_ConstructionBP_HPP

class AConstructionBP_C : public AConstruction
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)
    float collapseTents_NewTrack_0_3F08BEC64AA98C5B3BB1A9B79A540DC9;                  // 0x03C8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> collapseTents__Direction_3F08BEC64AA98C5B3BB1A9B79A540DC9; // 0x03CC (size: 0x1)
    class UTimelineComponent* collapseTents;                                          // 0x03D0 (size: 0x8)
    TArray<class UStaticMeshComponent*> boards;                                       // 0x03D8 (size: 0x10)
    double zValue;                                                                    // 0x03E8 (size: 0x8)
    int32 tempId_OLD;                                                                 // 0x03F0 (size: 0x4)
    double progress_OLD;                                                              // 0x03F8 (size: 0x8)
    TArray<class UStaticMeshComponent*> FinalMeshes_OLD;                              // 0x0400 (size: 0x10)
    TArray<FTransform> FinalMeshTransforms_OLD;                                       // 0x0410 (size: 0x10)
    TArray<class UMaterialInstanceDynamic*> MaterialInstances_OLD;                    // 0x0420 (size: 0x10)
    bool sortingFinished_OLD;                                                         // 0x0430 (size: 0x1)
    double distSq;                                                                    // 0x0438 (size: 0x8)
    double boardFrac;                                                                 // 0x0440 (size: 0x8)
    class UStaticMeshComponent* staticMeshCurrent;                                    // 0x0448 (size: 0x8)
    int32 numBoards;                                                                  // 0x0450 (size: 0x4)
    int32 numFinalMeshes;                                                             // 0x0454 (size: 0x4)
    int32 numTotalElements;                                                           // 0x0458 (size: 0x4)
    double boardsPercentageOfTotalElements;                                           // 0x0460 (size: 0x8)
    TArray<class UStaticMeshComponent*> finalMeshesSorted_OLD;                        // 0x0468 (size: 0x10)
    int32 numBones;                                                                   // 0x0478 (size: 0x4)
    TArray<FName> BoneNames;                                                          // 0x0480 (size: 0x10)
    TArray<FName> boneNamesSorted;                                                    // 0x0490 (size: 0x10)
    class USceneComponent* NewVar_0;                                                  // 0x04A0 (size: 0x8)
    bool isScaffolding;                                                               // 0x04A8 (size: 0x1)
    int32 visibleBones;                                                               // 0x04AC (size: 0x4)
    bool playDebrisSfx;                                                               // 0x04B0 (size: 0x1)
    bool boardTransformChanged;                                                       // 0x04B1 (size: 0x1)
    class UAudioComponent* fireAmbience;                                              // 0x04B8 (size: 0x8)
    double lastBalkSound;                                                             // 0x04C0 (size: 0x8)
    int32 lastConstructedBoardID;                                                     // 0x04C8 (size: 0x4)
    TArray<class UStaticMeshComponent*> FoundationMeshes_OLD;                         // 0x04D0 (size: 0x10)
    TArray<class UStaticMeshComponent*> FoundationMeshesSortedOld;                    // 0x04E0 (size: 0x10)
    int32 nextFoundationToUpdate;                                                     // 0x04F0 (size: 0x4)
    bool elementVisibilityChanged;                                                    // 0x04F4 (size: 0x1)
    TSoftObjectPtr<UMaterialInterface> burnedMatSoft;                                 // 0x04F8 (size: 0x28)
    double foundationVisThreshold;                                                    // 0x0520 (size: 0x8)
    int32 numVisibleBonesBefore;                                                      // 0x0528 (size: 0x4)
    TSoftObjectPtr<UMaterialInterface> burningMatSoft;                                // 0x0530 (size: 0x28)
    TArray<class UStaticMeshComponent*> tentMeshes;                                   // 0x0558 (size: 0x10)

    void removBlackBoxes();
    void isMeshALogWall(class UMeshComponent* Target, bool& isLogWall);
    void setAllBoardsToGround();
    void getBoardOnTheGroundTransformForBoardIndex(int32 Index, FTransform& groundTransform);
    void setMaterialToBurning(class UPrimitiveComponent* Target);
    bool isMaterialBoards(class UObject* Material);
    double getZValue(FVector InVec);
    void sortBonesAlternative();
    void sortBoneElements(const TArray<FName>& SourceArray, TArray<FName>& sortedArray);
    void setupStoneStructure();
    void sortElements(const TArray<class UStaticMeshComponent*>& SourceArray, TArray<class UStaticMeshComponent*>& sortedArray, const TArray<FTransform>& sortedTransforms, const TArray<FVector>& sortedGroundPositions);
    void setGlueToEarthVariables();
    void UserConstructionScript();
    void collapseTents__FinishedFunc();
    void collapseTents__UpdateFunc();
    void setupConstruction();
    void setOnFire();
    void ReceiveBeginPlay();
    void updateConstructionLevel();
    void sortStuff();
    void ExecuteUbergraph_ConstructionBP(int32 EntryPoint);
}; // Size: 0x568

#endif
