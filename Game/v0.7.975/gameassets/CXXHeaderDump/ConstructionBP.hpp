#ifndef UE4SS_SDK_ConstructionBP_HPP
#define UE4SS_SDK_ConstructionBP_HPP

class AConstructionBP_C : public AConstruction
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0330 (size: 0x8)
    float collapseTents_NewTrack_0_3F08BEC64AA98C5B3BB1A9B79A540DC9;                  // 0x0338 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> collapseTents__Direction_3F08BEC64AA98C5B3BB1A9B79A540DC9; // 0x033C (size: 0x1)
    class UTimelineComponent* collapseTents;                                          // 0x0340 (size: 0x8)
    TArray<class UStaticMeshComponent*> boards;                                       // 0x0348 (size: 0x10)
    float zValue;                                                                     // 0x0358 (size: 0x4)
    int32 tempId_OLD;                                                                 // 0x035C (size: 0x4)
    float progress_OLD;                                                               // 0x0360 (size: 0x4)
    TArray<class UStaticMeshComponent*> FinalMeshes_OLD;                              // 0x0368 (size: 0x10)
    TArray<FTransform> FinalMeshTransforms_OLD;                                       // 0x0378 (size: 0x10)
    TArray<class UMaterialInstanceDynamic*> MaterialInstances_OLD;                    // 0x0388 (size: 0x10)
    bool sortingFinished_OLD;                                                         // 0x0398 (size: 0x1)
    float distSq;                                                                     // 0x039C (size: 0x4)
    float boardFrac;                                                                  // 0x03A0 (size: 0x4)
    class UStaticMeshComponent* staticMeshCurrent;                                    // 0x03A8 (size: 0x8)
    int32 numBoards;                                                                  // 0x03B0 (size: 0x4)
    int32 numFinalMeshes;                                                             // 0x03B4 (size: 0x4)
    int32 numTotalElements;                                                           // 0x03B8 (size: 0x4)
    float boardsPercentageOfTotalElements;                                            // 0x03BC (size: 0x4)
    TArray<class UStaticMeshComponent*> finalMeshesSorted_OLD;                        // 0x03C0 (size: 0x10)
    int32 numBones;                                                                   // 0x03D0 (size: 0x4)
    TArray<FName> BoneNames;                                                          // 0x03D8 (size: 0x10)
    TArray<FName> boneNamesSorted;                                                    // 0x03E8 (size: 0x10)
    class USceneComponent* NewVar_0;                                                  // 0x03F8 (size: 0x8)
    bool isScaffolding;                                                               // 0x0400 (size: 0x1)
    int32 visibleBones;                                                               // 0x0404 (size: 0x4)
    bool playDebrisSfx;                                                               // 0x0408 (size: 0x1)
    bool boardTransformChanged;                                                       // 0x0409 (size: 0x1)
    class UAudioComponent* fireAmbience;                                              // 0x0410 (size: 0x8)
    float lastBalkSound;                                                              // 0x0418 (size: 0x4)
    int32 lastConstructedBoardID;                                                     // 0x041C (size: 0x4)
    TArray<class UStaticMeshComponent*> FoundationMeshes_OLD;                         // 0x0420 (size: 0x10)
    TArray<class UStaticMeshComponent*> FoundationMeshesSortedOld;                    // 0x0430 (size: 0x10)
    int32 nextFoundationToUpdate;                                                     // 0x0440 (size: 0x4)
    bool elementVisibilityChanged;                                                    // 0x0444 (size: 0x1)
    TSoftObjectPtr<UMaterialInterface> burnedMatSoft;                                 // 0x0448 (size: 0x28)
    float foundationVisThreshold;                                                     // 0x0470 (size: 0x4)
    int32 numVisibleBonesBefore;                                                      // 0x0474 (size: 0x4)
    TSoftObjectPtr<UMaterialInterface> burningMatSoft;                                // 0x0478 (size: 0x28)
    TArray<class UStaticMeshComponent*> tentMeshes;                                   // 0x04A0 (size: 0x10)

    void removBlackBoxes();
    void isMeshALogWall(class UMeshComponent* Target, bool& isLogWall);
    void setAllBoardsToGround();
    void getBoardOnTheGroundTransformForBoardIndex(int32 Index, FTransform& groundTransform);
    void setMaterialToBurning(class UPrimitiveComponent* Target);
    bool isMaterialBoards(class UObject* Material);
    float getZValue(FVector InVec);
    void sortBonesAlternative();
    void sortBoneElements(const TArray<FName>& SourceArray, TArray<FName>& sortedArray);
    void setupStoneStructure();
    void sortElements(const TArray<class UStaticMeshComponent*>& SourceArray, TArray<class UStaticMeshComponent*>& sortedArray, const TArray<FTransform>& sortedTransforms, const TArray<FVector>& sortedGroundPositions);
    void setGlueToEarthVariables();
    void UserConstructionScript();
    void collapseTents__FinishedFunc();
    void collapseTents__UpdateFunc();
    void ReceiveBeginPlay();
    void sortStuff();
    void playCollapseBalkVfx(const FTransform& balkTransform, bool isLargeElement);
    void playConstructBalkSfx(const FVector& balkPos);
    void setupConstruction();
    void setOnFire();
    void updateConstructionLevel();
    void ExecuteUbergraph_ConstructionBP(int32 EntryPoint);
}; // Size: 0x4B0

#endif
