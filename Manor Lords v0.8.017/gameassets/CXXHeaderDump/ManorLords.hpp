#ifndef UE4SS_SDK_ManorLords_HPP
#define UE4SS_SDK_ManorLords_HPP

#include "ManorLords_enums.hpp"

struct FAICommand
{
    FName Type;                                                                       // 0x0000 (size: 0x8)
    int32 squadID;                                                                    // 0x0008 (size: 0x4)
    int32 targetSquad;                                                                // 0x000C (size: 0x4)
    FVector Pos;                                                                      // 0x0010 (size: 0x18)
    FVector targetPos;                                                                // 0x0028 (size: 0x18)
    float score;                                                                      // 0x0040 (size: 0x4)
    FSegment line;                                                                    // 0x0048 (size: 0x30)
    bool Close;                                                                       // 0x0078 (size: 0x1)
    TArray<FName> bTags;                                                              // 0x0080 (size: 0x10)
    bool isFlanking;                                                                  // 0x0090 (size: 0x1)
    int32 bType;                                                                      // 0x0094 (size: 0x4)
    class ARegion* Region;                                                            // 0x0098 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x00A0 (size: 0x8)
    int32 resType;                                                                    // 0x00A8 (size: 0x4)

}; // Size: 0xB0

struct FAlertType : public FTableRowBase
{
    class USoundBase* SFX;                                                            // 0x0008 (size: 0x8)
    class UTexture2D* Icon;                                                           // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FAmbientNode
{
    class UAudioComponent* currentComponent;                                          // 0x0000 (size: 0x8)
    FVector Position;                                                                 // 0x0008 (size: 0x18)
    uint8 biome;                                                                      // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FAnimArr : public FTableRowBase
{
    TArray<FAnimStruct> anims;                                                        // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FAnimStruct : public FTableRowBase
{
    FName clipName;                                                                   // 0x0008 (size: 0x8)
    float spd;                                                                        // 0x0010 (size: 0x4)
    float speedVariation;                                                             // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FAnimVariation : public FTableRowBase
{
    int32 ID;                                                                         // 0x0008 (size: 0x4)
    FName Tag;                                                                        // 0x000C (size: 0x8)
    TArray<FAnimStruct> variations;                                                   // 0x0018 (size: 0x10)
    int32 repetitions;                                                                // 0x0028 (size: 0x4)

}; // Size: 0x30

struct FAnimalSpace
{
    bool shelter;                                                                     // 0x0000 (size: 0x1)
    uint8 pastureCurrent;                                                             // 0x0001 (size: 0x1)
    uint8 pastureMax;                                                                 // 0x0002 (size: 0x1)
    uint8 stableCurrent;                                                              // 0x0003 (size: 0x1)
    uint8 stableMax;                                                                  // 0x0004 (size: 0x1)

}; // Size: 0x5

struct FApprovalMemory
{
    EApprovalFactorType Type;                                                         // 0x0000 (size: 0x1)
    int32 month;                                                                      // 0x0004 (size: 0x4)
    int32 Count;                                                                      // 0x0008 (size: 0x4)
    bool past;                                                                        // 0x000C (size: 0x1)
    float effectByPopulation;                                                         // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FArmy
{
    TArray<int32> squads;                                                             // 0x0000 (size: 0x10)
    TArray<int32> spears;                                                             // 0x0010 (size: 0x10)
    TArray<int32> chargers;                                                           // 0x0020 (size: 0x10)
    TArray<int32> missiles;                                                           // 0x0030 (size: 0x10)
    TArray<int32> cavalry;                                                            // 0x0040 (size: 0x10)
    TArray<int32> scouts;                                                             // 0x0050 (size: 0x10)
    TArray<int32> antiarmors;                                                         // 0x0060 (size: 0x10)
    TArray<int32> heavy;                                                              // 0x0070 (size: 0x10)
    TArray<int32> stray;                                                              // 0x0080 (size: 0x10)
    TArray<int32> frontline;                                                          // 0x0090 (size: 0x10)
    TArray<int32> centerFront;                                                        // 0x00A0 (size: 0x10)
    TArray<int32> centerMid;                                                          // 0x00B0 (size: 0x10)
    TArray<int32> centerBack;                                                         // 0x00C0 (size: 0x10)
    TArray<int32> flankLeft;                                                          // 0x00D0 (size: 0x10)
    TArray<int32> flankRight;                                                         // 0x00E0 (size: 0x10)
    FVector Center;                                                                   // 0x00F0 (size: 0x18)
    FVector leftFlank;                                                                // 0x0108 (size: 0x18)
    FVector rightFlank;                                                               // 0x0120 (size: 0x18)
    FVector forwardDir;                                                               // 0x0138 (size: 0x18)
    FVector targetPos;                                                                // 0x0150 (size: 0x18)
    float meleeStr;                                                                   // 0x0168 (size: 0x4)
    float missileStr;                                                                 // 0x016C (size: 0x4)
    int32 strongestSpearID;                                                           // 0x0170 (size: 0x4)
    float strongestSpearStr;                                                          // 0x0174 (size: 0x4)

}; // Size: 0x178

struct FAudioCueData : public FTableRowBase
{
    class USoundBase* audioCue;                                                       // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FAudioSliders
{
    float Master;                                                                     // 0x0000 (size: 0x4)
    float UI;                                                                         // 0x0004 (size: 0x4)
    float SFX;                                                                        // 0x0008 (size: 0x4)
    float Voice;                                                                      // 0x000C (size: 0x4)
    float ambience;                                                                   // 0x0010 (size: 0x4)
    float music;                                                                      // 0x0014 (size: 0x4)
    float Events;                                                                     // 0x0018 (size: 0x4)
    float notifs;                                                                     // 0x001C (size: 0x4)
    float barks;                                                                      // 0x0020 (size: 0x4)

}; // Size: 0x24

struct FAvPos
{
}; // Size: 0x58

struct FBBorder
{
    FVector A;                                                                        // 0x0000 (size: 0x18)
    FVector B;                                                                        // 0x0018 (size: 0x18)
    FVector C;                                                                        // 0x0030 (size: 0x18)
    FVector D;                                                                        // 0x0048 (size: 0x18)

}; // Size: 0x60

struct FBattle
{
    FArmy myArmy;                                                                     // 0x0000 (size: 0x178)
    FArmy hisArmy;                                                                    // 0x0178 (size: 0x178)
    FVector battleCenter;                                                             // 0x02F0 (size: 0x18)
    FVector leftFlank;                                                                // 0x0308 (size: 0x18)
    FVector rightFlank;                                                               // 0x0320 (size: 0x18)
    FVector highGroundAvailable;                                                      // 0x0338 (size: 0x18)
    TArray<FName> battleTags;                                                         // 0x0350 (size: 0x10)

}; // Size: 0x360

struct FBuildingAmbience
{
    int32 bType;                                                                      // 0x0000 (size: 0x4)
    TArray<class USoundBase*> soundPool;                                              // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FBuildingDataStruct
{
    int32 bType;                                                                      // 0x0000 (size: 0x4)
    int32 squadID;                                                                    // 0x0004 (size: 0x4)
    bool IsSelected;                                                                  // 0x0008 (size: 0x1)
    bool constructed;                                                                 // 0x0009 (size: 0x1)
    float hp;                                                                         // 0x000C (size: 0x4)
    float maxHp;                                                                      // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FBuildingGloop
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FVector Pos;                                                                      // 0x0008 (size: 0x18)

}; // Size: 0x20

struct FBuildingLookup
{
    class ASMBuildingMaster* bld;                                                     // 0x0000 (size: 0x8)
    int32 bType;                                                                      // 0x0008 (size: 0x4)
    FVector Pos;                                                                      // 0x0010 (size: 0x18)
    FRotator Rotation;                                                                // 0x0028 (size: 0x18)
    TArray<FGood> avgProduction;                                                      // 0x0040 (size: 0x10)
    TArray<FGood> avgConsumption;                                                     // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FBuildingSocketMeshData : public FTableRowBase
{
    TSoftObjectPtr<UStaticMesh> socketMesh;                                           // 0x0008 (size: 0x28)

}; // Size: 0x30

struct FBuildingSpawnParams
{
    class ASMBuildingMaster* buildingMaster;                                          // 0x0000 (size: 0x8)
    int32 buildingID;                                                                 // 0x0008 (size: 0x4)
    FVector Location;                                                                 // 0x0010 (size: 0x18)
    FRotator Rotation;                                                                // 0x0028 (size: 0x18)
    FVector Scale;                                                                    // 0x0040 (size: 0x18)
    bool isFullbuilding;                                                              // 0x0058 (size: 0x1)
    bool isMainbuilding;                                                              // 0x0059 (size: 0x1)
    FSoftObjectPath Path;                                                             // 0x0060 (size: 0x20)
    int32 extensionSlot;                                                              // 0x0080 (size: 0x4)
    TArray<FName> Tags;                                                               // 0x0088 (size: 0x10)

}; // Size: 0x98

struct FChallenge
{
    int32 ID;                                                                         // 0x0000 (size: 0x4)
    FVector Center;                                                                   // 0x0008 (size: 0x18)
    class APawnCPP* challengedPawn;                                                   // 0x0020 (size: 0x8)
    class APawnCPP* challengedBy;                                                     // 0x0028 (size: 0x8)
    TArray<class ARegion*> inRegardsTo;                                               // 0x0030 (size: 0x10)
    int32 daysLeft;                                                                   // 0x0040 (size: 0x4)
    bool contested;                                                                   // 0x0044 (size: 0x1)
    int32 influenceStolen;                                                            // 0x0048 (size: 0x4)
    EChallengeStatus Status;                                                          // 0x004C (size: 0x1)
    class ABattlefield* Battlefield;                                                  // 0x0050 (size: 0x8)
    TArray<int32> initialBattleSquadIDs;                                              // 0x0058 (size: 0x10)

}; // Size: 0x68

struct FCheckpoint
{
    FVector Pos;                                                                      // 0x0000 (size: 0x18)
    FVector flagPos;                                                                  // 0x0018 (size: 0x18)

}; // Size: 0x30

struct FCinematicShot
{
    FVector beginLocation;                                                            // 0x0000 (size: 0x18)
    FVector endLocation;                                                              // 0x0018 (size: 0x18)
    FRotator beginRotation;                                                           // 0x0030 (size: 0x18)
    FRotator endRotation;                                                             // 0x0048 (size: 0x18)
    float durationInSeconds;                                                          // 0x0060 (size: 0x4)
    bool rotateAroundPivot;                                                           // 0x0064 (size: 0x1)
    float fadeInSeconds;                                                              // 0x0068 (size: 0x4)
    float fadeOutSeconds;                                                             // 0x006C (size: 0x4)
    float boomArmLengthStart;                                                         // 0x0070 (size: 0x4)
    float boomArmLengthEnd;                                                           // 0x0074 (size: 0x4)
    bool EaseOut;                                                                     // 0x0078 (size: 0x1)
    float gameSpeed;                                                                  // 0x007C (size: 0x4)

}; // Size: 0x80

struct FClaim
{
    class ARegion* Region;                                                            // 0x0000 (size: 0x8)
    int32 daysLeft;                                                                   // 0x0008 (size: 0x4)
    bool bLocked;                                                                     // 0x000C (size: 0x1)
    float score;                                                                      // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FClaimStatus
{
    class APawnCPP* claimedBy;                                                        // 0x0000 (size: 0x8)
    class APawnCPP* contestedBy;                                                      // 0x0008 (size: 0x8)
    float progress;                                                                   // 0x0010 (size: 0x4)
    bool bLocked;                                                                     // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FClassPathData : public FTableRowBase
{
    FSoftClassPath Path;                                                              // 0x0008 (size: 0x20)

}; // Size: 0x28

struct FCoatContentTexture : public FTableRowBase
{
    TSoftObjectPtr<UTexture2D> Texture;                                               // 0x0008 (size: 0x28)

}; // Size: 0x30

struct FCoatOfArmsData
{
    bool wasGenerated;                                                                // 0x0000 (size: 0x1)
    FColor BackgroundColor;                                                           // 0x0004 (size: 0x4)
    FColor symbolColor;                                                               // 0x0008 (size: 0x4)
    FName symbolName;                                                                 // 0x000C (size: 0x8)

}; // Size: 0x14

struct FCollisionCluster
{
    TArray<class ASMUnit*> units;                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FConnectionCache
{
    class ASMBuildingMaster* buildingA;                                               // 0x0000 (size: 0x8)
    class ASMBuildingMaster* buildingB;                                               // 0x0008 (size: 0x8)
    bool areConnectedByRoad;                                                          // 0x0010 (size: 0x1)

}; // Size: 0x18

struct FConstructionBP : public FTableRowBase
{
    TSubclassOf<class AConstruction> ConstructionBP;                                  // 0x0008 (size: 0x8)
    TSoftClassPtr<AConstruction> constructionAsset;                                   // 0x0010 (size: 0x28)
    FName buildingPartName;                                                           // 0x0038 (size: 0x8)

}; // Size: 0x40

struct FConsumptionLimit
{
    TMap<int32, int32> limitPerGoodType;                                              // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FConsumptionStatus
{
    uint8 hunger;                                                                     // 0x0000 (size: 0x1)
    uint8 cold;                                                                       // 0x0001 (size: 0x1)
    uint8 ale;                                                                        // 0x0002 (size: 0x1)
    uint8 linen;                                                                      // 0x0003 (size: 0x1)
    uint8 leather;                                                                    // 0x0004 (size: 0x1)
    uint8 faith;                                                                      // 0x0005 (size: 0x1)
    uint8 tools;                                                                      // 0x0006 (size: 0x1)

}; // Size: 0x7

struct FControlHookConfig
{
    float deadzoneWidth;                                                              // 0x0000 (size: 0x4)
    float tiltSpeed;                                                                  // 0x0004 (size: 0x4)
    float panSpeedRatio;                                                              // 0x0008 (size: 0x4)
    float buildingRotateSpeed;                                                        // 0x000C (size: 0x4)

}; // Size: 0x10

struct FControlHookFlow
{
    bool inFullscreenUi;                                                              // 0x0000 (size: 0x1)
    bool inTutorial;                                                                  // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FControlHookState
{
    bool hasPlatformInited;                                                           // 0x0000 (size: 0x1)
    class UNaviUi* activeMenu;                                                        // 0x0008 (size: 0x8)
    bool isActiveMenuPureUi;                                                          // 0x0010 (size: 0x1)
    bool isActivePriorityUi;                                                          // 0x0011 (size: 0x1)
    bool inExploreMode;                                                               // 0x0012 (size: 0x1)
    EControlInputMode lastUsedInputMode;                                              // 0x0013 (size: 0x1)
    class APawnCPP* P;                                                                // 0x0018 (size: 0x8)
    class APlayerController* pCon;                                                    // 0x0020 (size: 0x8)
    bool ignoreInputModeChanges;                                                      // 0x0028 (size: 0x1)
    bool forceGamepad;                                                                // 0x0029 (size: 0x1)
    float buildingRotateDir;                                                          // 0x002C (size: 0x4)
    bool forceCtrlPressed;                                                            // 0x0030 (size: 0x1)
    bool analogRightIsOrbit;                                                          // 0x0031 (size: 0x1)
    bool didAcceptGotoUi;                                                             // 0x0032 (size: 0x1)

}; // Size: 0x38

struct FCorners
{
    FVector A;                                                                        // 0x0000 (size: 0x18)
    FVector B;                                                                        // 0x0018 (size: 0x18)
    FVector C;                                                                        // 0x0030 (size: 0x18)
    FVector D;                                                                        // 0x0048 (size: 0x18)

}; // Size: 0x60

struct FCostArray
{
    TArray<float> costs;                                                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FDataGrid
{
    TArray<class ASMUnit*> units;                                                     // 0x0000 (size: 0x10)
    TArray<class AObstacle*> obstacles;                                               // 0x0010 (size: 0x10)
    TArray<class ASMBuildingMaster*> buildings;                                       // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FDealProposal
{
    class APawnCPP* pawnA;                                                            // 0x0000 (size: 0x8)
    class APawnCPP* pawnB;                                                            // 0x0008 (size: 0x8)
    TArray<FDiplo> dealsA;                                                            // 0x0010 (size: 0x10)
    TArray<FDiplo> dealsB;                                                            // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FDefferedMeshLoadItem
{
    class UStaticMesh* Mesh;                                                          // 0x0000 (size: 0x8)
    class UHierarchicalInstancedStaticMeshComponent* HISM;                            // 0x0008 (size: 0x8)
    int32 iType;                                                                      // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FDiplo
{
    class APawnCPP* partner;                                                          // 0x0000 (size: 0x8)
    int32 Type;                                                                       // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FEquipment
{
    int32 bodyType;                                                                   // 0x0000 (size: 0x4)
    int32 headType;                                                                   // 0x0004 (size: 0x4)
    int32 wpnType;                                                                    // 0x0008 (size: 0x4)
    int32 shieldType;                                                                 // 0x000C (size: 0x4)
    int32 coifType;                                                                   // 0x0010 (size: 0x4)
    int32 helmetType;                                                                 // 0x0014 (size: 0x4)
    int32 bonusType;                                                                  // 0x0018 (size: 0x4)

}; // Size: 0x1C

struct FExtension
{
    int32 Type;                                                                       // 0x0000 (size: 0x4)
    FTransform transf;                                                                // 0x0010 (size: 0x60)
    TArray<class ASMBuilding*> buildings;                                             // 0x0070 (size: 0x10)
    TArray<FVector> fieldPoints;                                                      // 0x0080 (size: 0x10)
    TArray<FVector> cornerPoints;                                                     // 0x0090 (size: 0x10)
    TArray<FVector> triangulated;                                                     // 0x00A0 (size: 0x10)
    TArray<class UStaticMeshComponent*> dirtPlanes;                                   // 0x00B0 (size: 0x10)

}; // Size: 0xC0

struct FExtractedPlot
{
    TArray<FVector> SmoothBorder;                                                     // 0x0000 (size: 0x10)
    TArray<FVector> Corners;                                                          // 0x0010 (size: 0x10)
    FTransform primaryBuildingTransform;                                              // 0x0020 (size: 0x60)
    FTransform secondaryBuildingTransform;                                            // 0x0080 (size: 0x60)
    FTransform extensionTransform;                                                    // 0x00E0 (size: 0x60)
    FSegment backFacade;                                                              // 0x0140 (size: 0x30)
    TArray<FVector> extensionSmoothBorder;                                            // 0x0170 (size: 0x10)
    TArray<FVector> extensionCorners;                                                 // 0x0180 (size: 0x10)

}; // Size: 0x190

struct FFieldPoint
{
    TArray<class ARoad*> snappedToRoad;                                               // 0x0000 (size: 0x10)
    FVector Pos;                                                                      // 0x0010 (size: 0x18)
    float Size;                                                                       // 0x0028 (size: 0x4)
    bool snapped;                                                                     // 0x002C (size: 0x1)

}; // Size: 0x30

struct FFieldSnapPoint
{
    FVector Pos;                                                                      // 0x0000 (size: 0x18)
    TArray<FLink> links;                                                              // 0x0018 (size: 0x10)
    TArray<class ARoad*> sRoad;                                                       // 0x0028 (size: 0x10)
    bool isFork;                                                                      // 0x0038 (size: 0x1)
    bool isField;                                                                     // 0x0039 (size: 0x1)
    bool isColliding;                                                                 // 0x003A (size: 0x1)
    int32 roadID;                                                                     // 0x003C (size: 0x4)
    float G;                                                                          // 0x0040 (size: 0x4)
    float H;                                                                          // 0x0044 (size: 0x4)
    float F;                                                                          // 0x0048 (size: 0x4)
    int32 Parent;                                                                     // 0x004C (size: 0x4)
    TArray<class AActor*> createdBy;                                                  // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FFoliageReference
{
    class UInstancedStaticMeshComponent* foliageComponent;                            // 0x0000 (size: 0x8)

}; // Size: 0x70

struct FFormationClump
{
    TArray<int32> squads;                                                             // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FGameSetupParameters : public FTableRowBase
{
    TArray<FName> questsToTrigger;                                                    // 0x0008 (size: 0x10)
    EGameGoals goals;                                                                 // 0x0018 (size: 0x1)
    int32 numGenericAILords;                                                          // 0x001C (size: 0x4)
    bool adversary_baron;                                                             // 0x0020 (size: 0x1)
    uint8 AI_aggressiveness;                                                          // 0x0021 (size: 0x1)
    uint8 maxBanditCamps;                                                             // 0x0022 (size: 0x1)
    uint8 initialBanditCamps;                                                         // 0x0023 (size: 0x1)
    uint8 raidingFrequency;                                                           // 0x0024 (size: 0x1)
    uint8 yearsUntilFirstRaid;                                                        // 0x0025 (size: 0x1)
    bool generateWaterVeins;                                                          // 0x0026 (size: 0x1)
    uint8 resourcesRandomization;                                                     // 0x0027 (size: 0x1)
    int32 startingSuppliesMultiplier;                                                 // 0x0028 (size: 0x4)
    bool armamentDelivery;                                                            // 0x002C (size: 0x1)
    float loyaltyLossRate;                                                            // 0x0030 (size: 0x4)
    float consumptionRate;                                                            // 0x0034 (size: 0x4)
    float treeGrowthRate;                                                             // 0x0038 (size: 0x4)
    int32 requirementDiscontentBias;                                                  // 0x003C (size: 0x4)
    int32 royalTaxMultiplier;                                                         // 0x0040 (size: 0x4)
    uint8 spoilage;                                                                   // 0x0044 (size: 0x1)
    int32 startingDay;                                                                // 0x0048 (size: 0x4)
    uint8 weatherDamage;                                                              // 0x004C (size: 0x1)

}; // Size: 0x50

struct FGameSetupPreset : public FTableRowBase
{
    class UTexture2D* Thumbnail;                                                      // 0x0008 (size: 0x8)
    bool isMainGameMode;                                                              // 0x0010 (size: 0x1)
    TArray<FName> customTags;                                                         // 0x0018 (size: 0x10)
    FName mapOverride;                                                                // 0x0028 (size: 0x8)
    TMap<class EGameDifficulty, class FGameSetupParameters> gameSetupData;            // 0x0030 (size: 0x50)
    FGameSetupParameters currentGameSetup;                                            // 0x0080 (size: 0x50)

}; // Size: 0xD0

struct FGameplayDate
{
    int32 dayOfTheMonth;                                                              // 0x0000 (size: 0x4)
    int32 monthOfTheYear;                                                             // 0x0004 (size: 0x4)
    int32 yearsSurvivedTotal;                                                         // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FGlobalSettings
{
    bool snapToRoads;                                                                 // 0x0000 (size: 0x1)
    bool snapToBuildings;                                                             // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FGood
{
    int32 Type;                                                                       // 0x0000 (size: 0x4)
    int32 amt;                                                                        // 0x0004 (size: 0x4)
    class ASMBuildingMaster* belongsTo;                                               // 0x0008 (size: 0x8)
    class ASMUnit* belongsToUnit;                                                     // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FHISM : public FTableRowBase
{
    FName Name;                                                                       // 0x0008 (size: 0x8)
    class UStaticMesh* Mesh;                                                          // 0x0010 (size: 0x8)
    TSoftObjectPtr<UStaticMesh> meshAsset;                                            // 0x0018 (size: 0x28)
    bool isUnit;                                                                      // 0x0040 (size: 0x1)
    int32 ID;                                                                         // 0x0044 (size: 0x4)
    int32 CustomDepth;                                                                // 0x0048 (size: 0x4)
    ECullDistanceCategory CullDistance;                                               // 0x004C (size: 0x1)

}; // Size: 0x50

struct FHarvest
{
    int32 goodID;                                                                     // 0x0000 (size: 0x4)
    int32 yieldSoFar;                                                                 // 0x0004 (size: 0x4)
    int32 totalPredictedYield;                                                        // 0x0008 (size: 0x4)
    int32 daysToHarvest;                                                              // 0x000C (size: 0x4)

}; // Size: 0x78

struct FHudIconData : public FTableRowBase
{
    class UTexture2D* iconTexture;                                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FIcon
{
    int32 ID;                                                                         // 0x0000 (size: 0x4)
    FVector2D Pos;                                                                    // 0x0008 (size: 0x10)
    float Scale;                                                                      // 0x0018 (size: 0x4)
    float progress;                                                                   // 0x001C (size: 0x4)
    FColor Tint;                                                                      // 0x0020 (size: 0x4)
    class UTexture2D* Texture;                                                        // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FIconCluster
{
    TArray<FSquadIcon> icons;                                                         // 0x0000 (size: 0x10)
    TArray<int32> iconIDs;                                                            // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FIntPair
{
    int32 X;                                                                          // 0x0000 (size: 0x4)
    int32 Y;                                                                          // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FItem : public FTableRowBase
{
    FString Name;                                                                     // 0x0008 (size: 0x10)
    class UTexture2D* Icon;                                                           // 0x0018 (size: 0x8)
    bool bCombatType;                                                                 // 0x0020 (size: 0x1)
    EEquipmentSlot EquipmentSlot;                                                     // 0x0021 (size: 0x1)
    EEquipmentSlot equipmentSlotOverrideCivilian;                                     // 0x0022 (size: 0x1)
    TArray<FName> VAMP_Variations;                                                    // 0x0028 (size: 0x10)
    FName VAMP_Socket;                                                                // 0x0038 (size: 0x8)
    FName VAMP_Variation_Override_Handcart;                                           // 0x0040 (size: 0x8)
    FName VAMP_Variation_Carried;                                                     // 0x0048 (size: 0x8)
    FName VAMP_Socket_Carried;                                                        // 0x0050 (size: 0x8)
    ELocomotionStance locomotionStance;                                               // 0x0058 (size: 0x1)
    float att;                                                                        // 0x005C (size: 0x4)
    float rangedAtt;                                                                  // 0x0060 (size: 0x4)
    float def;                                                                        // 0x0064 (size: 0x4)
    float Range;                                                                      // 0x0068 (size: 0x4)
    float shootingRange;                                                              // 0x006C (size: 0x4)
    float bLock;                                                                      // 0x0070 (size: 0x4)
    float Speed;                                                                      // 0x0074 (size: 0x4)
    int32 Mode;                                                                       // 0x0078 (size: 0x4)
    float Weight;                                                                     // 0x007C (size: 0x4)
    float charge;                                                                     // 0x0080 (size: 0x4)
    float chargeStop;                                                                 // 0x0084 (size: 0x4)
    float armorPierce;                                                                // 0x0088 (size: 0x4)
    bool force1hAttacks;                                                              // 0x008C (size: 0x1)
    bool noStab;                                                                      // 0x008D (size: 0x1)
    EAttackMethod attackMethod;                                                       // 0x008E (size: 0x1)
    TArray<FGood> resources;                                                          // 0x0090 (size: 0x10)
    TArray<FGood> craftingOutput;                                                     // 0x00A0 (size: 0x10)
    int32 craftingTool;                                                               // 0x00B0 (size: 0x4)
    float creationProg;                                                               // 0x00B4 (size: 0x4)
    TArray<int32> upgradesRequiredToCraft;                                            // 0x00B8 (size: 0x10)
    TArray<int32> techsRequiredToCraft;                                               // 0x00C8 (size: 0x10)
    bool tradeable;                                                                   // 0x00D8 (size: 0x1)
    float Value;                                                                      // 0x00DC (size: 0x4)
    float spoilageRate;                                                               // 0x00E0 (size: 0x4)
    FName AnimSet;                                                                    // 0x00E4 (size: 0x8)
    TSoftClassPtr<AResource> droppable;                                               // 0x00F0 (size: 0x28)
    uint8 craftingAnim;                                                               // 0x0118 (size: 0x1)
    int32 animID_pickup;                                                              // 0x011C (size: 0x4)
    int32 animID_putdown;                                                             // 0x0120 (size: 0x4)
    int32 animID_carryIdle;                                                           // 0x0124 (size: 0x4)
    int32 animID_carryWalk;                                                           // 0x0128 (size: 0x4)
    EStorageType storageType;                                                         // 0x012C (size: 0x1)
    TSoftObjectPtr<UStaticMesh> staticVisualization;                                  // 0x0130 (size: 0x28)
    EItemCategory itemCategory;                                                       // 0x0158 (size: 0x1)
    uint8 requirementLevel;                                                           // 0x0159 (size: 0x1)
    class USoundBase* pickupSfx;                                                      // 0x0160 (size: 0x8)
    class USoundBase* putdownSfx;                                                     // 0x0168 (size: 0x8)
    class USoundBase* craftingSfx;                                                    // 0x0170 (size: 0x8)
    int32 Slot;                                                                       // 0x0178 (size: 0x4)
    int32 slotOverrideCivilian;                                                       // 0x017C (size: 0x4)
    int32 HISM;                                                                       // 0x0180 (size: 0x4)
    int32 HISM_Combat;                                                                // 0x0184 (size: 0x4)
    TArray<int32> HISM_Variations_Combat;                                             // 0x0188 (size: 0x10)

}; // Size: 0x198

struct FLazyPoint
{
    FVector Pos;                                                                      // 0x0000 (size: 0x18)
    FRotator rot;                                                                     // 0x0018 (size: 0x18)
    int32 anim;                                                                       // 0x0030 (size: 0x4)

}; // Size: 0x38

struct FLetter
{
    TArray<FName> paras;                                                              // 0x0000 (size: 0x10)
    int32 daySent;                                                                    // 0x0010 (size: 0x4)
    class APawnCPP* sender;                                                           // 0x0018 (size: 0x8)
    int32 senderSetupIndex;                                                           // 0x0020 (size: 0x4)
    class APawnCPP* recipient;                                                        // 0x0028 (size: 0x8)
    int32 recipientSetupIndex;                                                        // 0x0030 (size: 0x4)
    bool read;                                                                        // 0x0034 (size: 0x1)

}; // Size: 0x38

struct FLink
{
}; // Size: 0x14

struct FLivingSpaceData
{
    int32 constructed;                                                                // 0x0000 (size: 0x4)
    int32 unconstructed;                                                              // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FLocalizedText : public FTableRowBase
{
    FString en_US;                                                                    // 0x0008 (size: 0x10)
    FString zh_CN;                                                                    // 0x0018 (size: 0x10)
    FString zh_TW;                                                                    // 0x0028 (size: 0x10)
    FString ja_JA;                                                                    // 0x0038 (size: 0x10)
    FString ko_KR;                                                                    // 0x0048 (size: 0x10)
    FString de_DE;                                                                    // 0x0058 (size: 0x10)
    FString es_ES;                                                                    // 0x0068 (size: 0x10)
    FString fr_FR;                                                                    // 0x0078 (size: 0x10)
    FString pt_BR;                                                                    // 0x0088 (size: 0x10)
    FString pl_PL;                                                                    // 0x0098 (size: 0x10)
    FString ru_RU;                                                                    // 0x00A8 (size: 0x10)
    FString it_IT;                                                                    // 0x00B8 (size: 0x10)
    FString tr_TR;                                                                    // 0x00C8 (size: 0x10)
    FString cs_CZ;                                                                    // 0x00D8 (size: 0x10)
    FString hu_HU;                                                                    // 0x00E8 (size: 0x10)
    FString uk_UA;                                                                    // 0x00F8 (size: 0x10)
    FString da_DK;                                                                    // 0x0108 (size: 0x10)
    FString nl_NL;                                                                    // 0x0118 (size: 0x10)
    FString sv_SE;                                                                    // 0x0128 (size: 0x10)

}; // Size: 0x138

struct FLogEntry
{
    FString LogText;                                                                  // 0x0000 (size: 0x10)
    FVector Location;                                                                 // 0x0010 (size: 0x18)
    FString fullDescr;                                                                // 0x0028 (size: 0x10)
    float Timestamp;                                                                  // 0x0038 (size: 0x4)
    int32 opensMenu;                                                                  // 0x003C (size: 0x4)
    class AActor* Actor;                                                              // 0x0040 (size: 0x8)
    class ARegion* Region;                                                            // 0x0048 (size: 0x8)
    int32 Icon;                                                                       // 0x0050 (size: 0x4)
    FDealProposal proposal;                                                           // 0x0058 (size: 0x30)
    int32 Problem;                                                                    // 0x0088 (size: 0x4)
    int32 fadesAfter;                                                                 // 0x008C (size: 0x4)
    FName Tag;                                                                        // 0x0090 (size: 0x8)
    int32 dayOfTheYear;                                                               // 0x0098 (size: 0x4)

}; // Size: 0xA0

struct FLoyaltyFactor
{
    FName Tag;                                                                        // 0x0000 (size: 0x8)
    float Value;                                                                      // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FMercenaryCompany : public FTableRowBase
{
    FString Name;                                                                     // 0x0008 (size: 0x10)
    TArray<FName> units;                                                              // 0x0018 (size: 0x10)
    TArray<FName> traits;                                                             // 0x0028 (size: 0x10)
    class UTexture2D* banner;                                                         // 0x0038 (size: 0x8)
    int32 cost;                                                                       // 0x0040 (size: 0x4)
    int32 colorA;                                                                     // 0x0044 (size: 0x4)
    int32 colorB;                                                                     // 0x0048 (size: 0x4)
    int32 emblemA;                                                                    // 0x004C (size: 0x4)
    int32 emblemB;                                                                    // 0x0050 (size: 0x4)
    int32 arrivesIn;                                                                  // 0x0054 (size: 0x4)
    class ARegion* arrivalRegion;                                                     // 0x0058 (size: 0x8)

}; // Size: 0x60

struct FMilitaryTarget
{
    class ARegion* Region;                                                            // 0x0000 (size: 0x8)
    float threat;                                                                     // 0x0008 (size: 0x4)
    float presence;                                                                   // 0x000C (size: 0x4)
    float profit;                                                                     // 0x0010 (size: 0x4)
    TArray<FName> bTags;                                                              // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FMunkerBool
{
    TArray<bool> col;                                                                 // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMunkerLocation
{
    int32 row;                                                                        // 0x0000 (size: 0x4)
    int32 column;                                                                     // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FMunkerRow
{
    TArray<int32> costs;                                                              // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FNavLinkDataStruct
{
    FVector In;                                                                       // 0x0000 (size: 0x18)
    FVector Out;                                                                      // 0x0018 (size: 0x18)

}; // Size: 0x30

struct FNeedIcon
{
    FVector2D screenPos;                                                              // 0x0000 (size: 0x10)
    int32 ItemId;                                                                     // 0x0010 (size: 0x4)
    float pop;                                                                        // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FObjective
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    bool survive;                                                                     // 0x0010 (size: 0x1)
    TArray<int32> buildingToHaveType;                                                 // 0x0018 (size: 0x10)
    int32 buildingToHaveAmt;                                                          // 0x0028 (size: 0x4)
    int32 populationToHave;                                                           // 0x002C (size: 0x4)
    FGood gatherResource;                                                             // 0x0030 (size: 0x18)
    float cashToHave;                                                                 // 0x0048 (size: 0x4)
    bool winBattle;                                                                   // 0x004C (size: 0x1)
    bool payTax;                                                                      // 0x004D (size: 0x1)
    FName paraToSend;                                                                 // 0x0050 (size: 0x8)
    FName controlRegion;                                                              // 0x0058 (size: 0x8)
    int32 recipientSetupIndex;                                                        // 0x0060 (size: 0x4)
    bool markDone;                                                                    // 0x0064 (size: 0x1)
    bool Hidden;                                                                      // 0x0065 (size: 0x1)
    int32 payCompanyID;                                                               // 0x0068 (size: 0x4)

}; // Size: 0x70

struct FObstacle2D
{
    class AActor* createdBy;                                                          // 0x0048 (size: 0x8)

}; // Size: 0x58

struct FOpenClaim
{
    class ARegion* Region;                                                            // 0x0000 (size: 0x8)
    int32 dayStarted;                                                                 // 0x0008 (size: 0x4)
    TArray<class APawnCPP*> claimingPawns;                                            // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FOption
{
    int32 bType;                                                                      // 0x0000 (size: 0x4)
    float score;                                                                      // 0x0004 (size: 0x4)
    FVector Pos;                                                                      // 0x0008 (size: 0x18)
    FRotator rot;                                                                     // 0x0020 (size: 0x18)
    TArray<FVector> fieldSmoothPoints;                                                // 0x0038 (size: 0x10)
    TArray<FFieldPoint> fieldPoints;                                                  // 0x0048 (size: 0x10)
    float roadDist;                                                                   // 0x0058 (size: 0x4)
    class ARoad* nearestRoad;                                                         // 0x0060 (size: 0x8)

}; // Size: 0x68

struct FOrder
{
    int32 Type;                                                                       // 0x0000 (size: 0x4)
    float progress;                                                                   // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FOre
{
    FVector Pos;                                                                      // 0x0000 (size: 0x18)
    class UFoliageInstancedStaticMeshComponent* oreComponent;                         // 0x0018 (size: 0x8)
    int32 iNo;                                                                        // 0x0020 (size: 0x4)
    int32 Type;                                                                       // 0x0024 (size: 0x4)
    int32 amt;                                                                        // 0x0028 (size: 0x4)
    class ARegion* Region;                                                            // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FPPLink
{
    int32 ID;                                                                         // 0x0000 (size: 0x4)
    float Price;                                                                      // 0x0004 (size: 0x4)
    float distSq;                                                                     // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FPPStruct
{
    FVector2D Pos;                                                                    // 0x0000 (size: 0x10)
    FVector pos3d;                                                                    // 0x0010 (size: 0x18)
    TArray<FPPLink> Link;                                                             // 0x0028 (size: 0x10)
    float G;                                                                          // 0x0038 (size: 0x4)
    float H;                                                                          // 0x003C (size: 0x4)
    float F;                                                                          // 0x0040 (size: 0x4)
    int32 Parent;                                                                     // 0x0044 (size: 0x4)
    bool taken;                                                                       // 0x0048 (size: 0x1)
    FVector dir;                                                                      // 0x0050 (size: 0x18)
    bool roadPoint;                                                                   // 0x0068 (size: 0x1)
    bool isNavLink;                                                                   // 0x0069 (size: 0x1)
    class ARoad* Road;                                                                // 0x0070 (size: 0x8)
    TArray<class AActor*> createdBy;                                                  // 0x0078 (size: 0x10)
    float freeRadiusSq;                                                               // 0x0088 (size: 0x4)
    int32 closestObstacleID;                                                          // 0x008C (size: 0x4)

}; // Size: 0x90

struct FPair
{
    int32 Key;                                                                        // 0x0000 (size: 0x4)
    int32 Value;                                                                      // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FParagraph : public FTableRowBase
{
    FName ID;                                                                         // 0x0008 (size: 0x8)
    int32 Category;                                                                   // 0x0010 (size: 0x4)
    int32 numTextVariations;                                                          // 0x0014 (size: 0x4)
    FString Text;                                                                     // 0x0018 (size: 0x10)
    FText descr;                                                                      // 0x0028 (size: 0x10)
    int32 cost;                                                                       // 0x0038 (size: 0x4)
    int32 relations;                                                                  // 0x003C (size: 0x4)
    bool useOnlyOnce;                                                                 // 0x0040 (size: 0x1)
    TArray<FName> Effects;                                                            // 0x0048 (size: 0x10)
    TArray<FName> effectAmtParas;                                                     // 0x0058 (size: 0x10)
    TArray<FName> requiredInText;                                                     // 0x0068 (size: 0x10)
    TArray<FName> forbiddenInText;                                                    // 0x0078 (size: 0x10)
    TArray<FName> requiredTags;                                                       // 0x0088 (size: 0x10)
    TArray<FName> forbiddenTags;                                                      // 0x0098 (size: 0x10)
    TArray<FName> addTagsWhenSent;                                                    // 0x00A8 (size: 0x10)
    TArray<FName> removeTagsWhenSent;                                                 // 0x00B8 (size: 0x10)
    TArray<FName> prevLetterMustContain;                                              // 0x00C8 (size: 0x10)
    TArray<FName> enabledIfPrevLetterContainsAny;                                     // 0x00D8 (size: 0x10)
    int32 minRelationship;                                                            // 0x00E8 (size: 0x4)
    int32 maxRelationship;                                                            // 0x00EC (size: 0x4)
    EParaPick paraPick;                                                               // 0x00F0 (size: 0x1)
    TArray<EParaRequirement> paraRequirements;                                        // 0x00F8 (size: 0x10)
    TArray<FName> forbiddenSenderTraits;                                              // 0x0108 (size: 0x10)
    TArray<FName> requiredSenderTraits;                                               // 0x0118 (size: 0x10)
    TArray<FName> forbiddenRecipientTraits;                                           // 0x0128 (size: 0x10)
    TArray<FName> requiredRecipientTraits;                                            // 0x0138 (size: 0x10)
    TArray<FName> addSenderTraitsWhenSent;                                            // 0x0148 (size: 0x10)
    TArray<FName> addRecipientTraitsWhenSent;                                         // 0x0158 (size: 0x10)
    FName requiredSenderQuest;                                                        // 0x0168 (size: 0x8)
    FName requiredRecipientQuest;                                                     // 0x0170 (size: 0x8)
    FName forbiddenSenderQuest;                                                       // 0x0178 (size: 0x8)
    FName forbiddenRecipientQuest;                                                    // 0x0180 (size: 0x8)
    FName forceResponse;                                                              // 0x0188 (size: 0x8)
    TArray<FName> forceResponse_abortParas;                                           // 0x0190 (size: 0x10)
    FName forceResponse_autoResponse;                                                 // 0x01A0 (size: 0x8)
    float score;                                                                      // 0x01A8 (size: 0x4)

}; // Size: 0x1B0

struct FPastSound
{
    float Time;                                                                       // 0x0000 (size: 0x4)
    class USoundBase* Sound;                                                          // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FPathData : public FTableRowBase
{
    FSoftObjectPath Path;                                                             // 0x0008 (size: 0x20)

}; // Size: 0x28

struct FPathRequest
{
    class ASMUnit* unit;                                                              // 0x0000 (size: 0x8)
    TArray<class ASMUnit*> squadUnits;                                                // 0x0058 (size: 0x10)
    class ASMBuildingMaster* targetBuilding;                                          // 0x0068 (size: 0x8)

}; // Size: 0xF8

struct FPathResult
{
}; // Size: 0x48

struct FPlant
{
    ECropType Type;                                                                   // 0x0000 (size: 0x1)
    FVector Pos;                                                                      // 0x0008 (size: 0x18)
    float plowed;                                                                     // 0x0020 (size: 0x4)
    float growth;                                                                     // 0x0024 (size: 0x4)
    int32 InstanceId;                                                                 // 0x0028 (size: 0x4)
    float Rotation;                                                                   // 0x002C (size: 0x4)
    FRotator plowAngle;                                                               // 0x0030 (size: 0x18)
    ECropType typeBefore;                                                             // 0x0048 (size: 0x1)
    int32 yield;                                                                      // 0x004C (size: 0x4)
    float fertilityCache;                                                             // 0x0050 (size: 0x4)
    FTransform instanceTransform;                                                     // 0x0060 (size: 0x60)
    class UInstancedStaticMeshComponent* plantISM;                                    // 0x00C0 (size: 0x8)
    uint8 plantISM_id;                                                                // 0x00C8 (size: 0x1)

}; // Size: 0xD0

struct FPlantPredictionDebugData
{
    int32 totalYieldThisDay;                                                          // 0x0000 (size: 0x4)
    float avgFertilityThisDay;                                                        // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FPlayerStartingSetup
{
    FVector startingLocation;                                                         // 0x0000 (size: 0x18)
    FName attachedPlayer;                                                             // 0x0018 (size: 0x8)
    bool isAI;                                                                        // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FPolicy : public FTableRowBase
{
    int32 ID;                                                                         // 0x0008 (size: 0x4)
    int32 tier;                                                                       // 0x000C (size: 0x4)
    FString Name;                                                                     // 0x0010 (size: 0x10)
    FString descr;                                                                    // 0x0020 (size: 0x10)
    int32 timeLeft;                                                                   // 0x0030 (size: 0x4)
    class UTexture2D* Icon;                                                           // 0x0038 (size: 0x8)

}; // Size: 0x40

struct FPopData
{
    int32 peasantMale;                                                                // 0x0000 (size: 0x4)
    int32 peasantFemale;                                                              // 0x0004 (size: 0x4)
    int32 peasantSons;                                                                // 0x0008 (size: 0x4)
    int32 burgherMale;                                                                // 0x000C (size: 0x4)
    int32 burgherFemale;                                                              // 0x0010 (size: 0x4)
    int32 burgherSons;                                                                // 0x0014 (size: 0x4)
    int32 artisanMale;                                                                // 0x0018 (size: 0x4)
    int32 artisanFemale;                                                              // 0x001C (size: 0x4)
    int32 artisanSons;                                                                // 0x0020 (size: 0x4)
    int32 retinueMale;                                                                // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FPopupCache
{
    FName MessageType;                                                                // 0x0000 (size: 0x8)
    int32 daysTotal;                                                                  // 0x0008 (size: 0x4)
    class ARegion* Region;                                                            // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FPortrait : public FTableRowBase
{
    class UTexture2D* Texture;                                                        // 0x0008 (size: 0x8)
    TArray<FName> Tags;                                                               // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FPossibilityTile
{
    class ARoad* nearestRoad;                                                         // 0x0028 (size: 0x8)

}; // Size: 0x48

struct FPotentialFactor
{
    FName factorName;                                                                 // 0x0000 (size: 0x8)
    float effect;                                                                     // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FProblem
{
    int32 Type;                                                                       // 0x0000 (size: 0x4)
    class ASMUnit* unit;                                                              // 0x0008 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x0010 (size: 0x8)
    FVector Location;                                                                 // 0x0018 (size: 0x18)
    int32 day;                                                                        // 0x0030 (size: 0x4)
    int32 expiresIn;                                                                  // 0x0034 (size: 0x4)

}; // Size: 0x38

struct FProceduralGroundCoverData
{
    TSoftObjectPtr<UStaticMesh> StaticMesh;                                           // 0x0000 (size: 0x28)
    EGroundCoverCategory Category;                                                    // 0x0028 (size: 0x1)
    float Density;                                                                    // 0x002C (size: 0x4)
    FVector2D Scale;                                                                  // 0x0030 (size: 0x10)
    FVector2D cullDistances;                                                          // 0x0040 (size: 0x10)
    bool bCastShadow;                                                                 // 0x0050 (size: 0x1)
    bool alignToGround;                                                               // 0x0051 (size: 0x1)

}; // Size: 0x58

struct FProductionDay
{
    TArray<FGood> produced;                                                           // 0x0000 (size: 0x10)
    TArray<FGood> consumed;                                                           // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FProductionLog
{
    int32 daysOperating;                                                              // 0x0000 (size: 0x4)
    TArray<FProductionYear> productionYears;                                          // 0x0008 (size: 0x10)
    TArray<FGood> averageProduction;                                                  // 0x0018 (size: 0x10)
    TArray<FGood> averageConsumption;                                                 // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FProductionYear
{
    int32 yearNo;                                                                     // 0x0000 (size: 0x4)
    TArray<FProductionDay> day;                                                       // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FProj
{
    int32 Type;                                                                       // 0x0000 (size: 0x4)
    FVector Pos;                                                                      // 0x0008 (size: 0x18)
    FVector Start;                                                                    // 0x0020 (size: 0x18)
    FVector End;                                                                      // 0x0038 (size: 0x18)
    float Height;                                                                     // 0x0050 (size: 0x4)
    int32 InstanceId;                                                                 // 0x0054 (size: 0x4)
    float progress;                                                                   // 0x0058 (size: 0x4)
    FQuat rot;                                                                        // 0x0060 (size: 0x20)
    float inGround;                                                                   // 0x0080 (size: 0x4)
    bool hasHit;                                                                      // 0x0084 (size: 0x1)
    class ASMUnit* shooter;                                                           // 0x0088 (size: 0x8)
    float incr;                                                                       // 0x0090 (size: 0x4)

}; // Size: 0xA0

struct FPropagationQueue
{
    TArray<class ASMBuildingMaster*> buildings;                                       // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FProsperity
{
    float sum;                                                                        // 0x0000 (size: 0x4)
    int32 baseDemand;                                                                 // 0x0004 (size: 0x4)
    int32 advancedDemand;                                                             // 0x0008 (size: 0x4)
    float sumFirewood;                                                                // 0x000C (size: 0x4)
    float sumFood;                                                                    // 0x0010 (size: 0x4)
    float sumFabrics;                                                                 // 0x0014 (size: 0x4)
    float sumClothing;                                                                // 0x0018 (size: 0x4)
    float diff;                                                                       // 0x001C (size: 0x4)
    TArray<FGood> combinedSupply;                                                     // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FPunishment
{
    int32 devPoints;                                                                  // 0x0000 (size: 0x4)
    float loyalty;                                                                    // 0x0004 (size: 0x4)
    float growth;                                                                     // 0x0008 (size: 0x4)
    float development;                                                                // 0x000C (size: 0x4)
    TArray<FGood> Items;                                                              // 0x0010 (size: 0x10)
    TArray<int32> policyLock;                                                         // 0x0020 (size: 0x10)
    TArray<int32> techLock;                                                           // 0x0030 (size: 0x10)
    int32 forTime;                                                                    // 0x0040 (size: 0x4)
    TArray<FName> sendParas;                                                          // 0x0048 (size: 0x10)
    FName startQuest;                                                                 // 0x0058 (size: 0x8)
    int32 recipientSetupIndex;                                                        // 0x0060 (size: 0x4)
    TArray<int32> breakSquads;                                                        // 0x0068 (size: 0x10)

}; // Size: 0x78

struct FQuest : public FTableRowBase
{
    FString Name;                                                                     // 0x0008 (size: 0x10)
    FString descr;                                                                    // 0x0018 (size: 0x10)
    int32 ID;                                                                         // 0x0028 (size: 0x4)
    int32 playedMessages;                                                             // 0x002C (size: 0x4)
    TArray<FName> choices;                                                            // 0x0030 (size: 0x10)
    TArray<FName> choicesDone;                                                        // 0x0040 (size: 0x10)
    TArray<FName> choiceQuestOverride;                                                // 0x0050 (size: 0x10)
    int32 daysLeft;                                                                   // 0x0060 (size: 0x4)
    TArray<FObjective> objectives;                                                    // 0x0068 (size: 0x10)
    TArray<FObjective> abortTriggers;                                                 // 0x0078 (size: 0x10)
    TArray<class ARegion*> Regions;                                                   // 0x0088 (size: 0x10)
    TArray<FVector> regionLocations;                                                  // 0x0098 (size: 0x10)
    TArray<FReward> rewards;                                                          // 0x00A8 (size: 0x10)
    TArray<FPunishment> Punishment;                                                   // 0x00B8 (size: 0x10)
    int32 tier;                                                                       // 0x00C8 (size: 0x4)
    FName focus;                                                                      // 0x00CC (size: 0x8)
    bool bTracking;                                                                   // 0x00D4 (size: 0x1)
    bool bTimed;                                                                      // 0x00D5 (size: 0x1)
    bool Hidden;                                                                      // 0x00D6 (size: 0x1)
    bool opportunity;                                                                 // 0x00D7 (size: 0x1)
    bool canRefuse;                                                                   // 0x00D8 (size: 0x1)
    EQuestStatus Status;                                                              // 0x00D9 (size: 0x1)
    int32 issuedOnDay;                                                                // 0x00DC (size: 0x4)
    bool repeats;                                                                     // 0x00E0 (size: 0x1)
    bool letterForm;                                                                  // 0x00E1 (size: 0x1)
    FName signatureOverride;                                                          // 0x00E4 (size: 0x8)
    TArray<FName> customAcceptTriggers;                                               // 0x00F0 (size: 0x10)
    TArray<FName> customRefuseTriggers;                                               // 0x0100 (size: 0x10)
    bool adjustDaysLeftToIssuedDay;                                                   // 0x0110 (size: 0x1)

}; // Size: 0x118

struct FQuestMessage
{
    FString from;                                                                     // 0x0000 (size: 0x10)
    FString Title;                                                                    // 0x0010 (size: 0x10)
    FString Text;                                                                     // 0x0020 (size: 0x10)
    TArray<FString> choices;                                                          // 0x0030 (size: 0x10)
    TArray<FString> objectives;                                                       // 0x0040 (size: 0x10)
    TArray<FString> rewards;                                                          // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FQueuedFertilityChange
{
}; // Size: 0x8

struct FQueuedLinkerDataEdit
{
    EQueuedEditType editType;                                                         // 0x0000 (size: 0x1)
    int32 Index;                                                                      // 0x0004 (size: 0x4)
    int32 mainThreadArrayOffset;                                                      // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FQueuedPathfinderDataEdit
{
    EQueuedEditType editType;                                                         // 0x0000 (size: 0x1)
    int32 Index;                                                                      // 0x0004 (size: 0x4)
    int32 mainThreadArrayOffset;                                                      // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FQueuedPathfinderDataEditCollection
{
    TArray<FQueuedPathfinderDataEdit> queuedEdits;                                    // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FQuirk : public FTableRowBase
{
    TArray<FName> conflictingQuirks;                                                  // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FRTSSettings
{
    ESettingColorCoding colorCoding;                                                  // 0x0000 (size: 0x1)
    bool showTutorials;                                                               // 0x0001 (size: 0x1)
    bool showAllProblems;                                                             // 0x0002 (size: 0x1)
    bool multipleControlGroupsAllowed;                                                // 0x0003 (size: 0x1)
    float exposure_sunny;                                                             // 0x0004 (size: 0x4)
    float exposure_cloudy;                                                            // 0x0008 (size: 0x4)
    float camera_fov;                                                                 // 0x000C (size: 0x4)
    bool camera_shake;                                                                // 0x0010 (size: 0x1)
    float camera_speed;                                                               // 0x0014 (size: 0x4)
    int32 camera_freeTilt;                                                            // 0x0018 (size: 0x4)
    bool camera_cumulativeRotation;                                                   // 0x001C (size: 0x1)
    bool camera_scaleRotationWhenZoomed;                                              // 0x001D (size: 0x1)
    float camera_rotationSpeed;                                                       // 0x0020 (size: 0x4)
    float camera_rotationSmoothness;                                                  // 0x0024 (size: 0x4)
    float camera_tiltSensitivity;                                                     // 0x0028 (size: 0x4)
    float camera_zoomSpeed;                                                           // 0x002C (size: 0x4)
    float camera_zoomToCursor;                                                        // 0x0030 (size: 0x4)
    int32 graphics_fullscreenMode;                                                    // 0x0034 (size: 0x4)
    FVector2D graphics_resolution;                                                    // 0x0038 (size: 0x10)
    bool VolumetricClouds;                                                            // 0x0048 (size: 0x1)
    bool CloudShadows;                                                                // 0x0049 (size: 0x1)
    bool graphics_vsync;                                                              // 0x004A (size: 0x1)
    int32 graphics_cascades;                                                          // 0x004C (size: 0x4)
    bool graphics_contactShadows;                                                     // 0x0050 (size: 0x1)
    bool graphics_SSGI;                                                               // 0x0051 (size: 0x1)
    bool graphics_SSGI_halfres;                                                       // 0x0052 (size: 0x1)
    int32 scalability_aa;                                                             // 0x0054 (size: 0x4)
    int32 scalability_shadows;                                                        // 0x0058 (size: 0x4)
    int32 scalability_material;                                                       // 0x005C (size: 0x4)
    float scalability_viewdistanceMultiplier;                                         // 0x0060 (size: 0x4)
    int32 scalability_postprocess;                                                    // 0x0064 (size: 0x4)
    int32 scalability_textures;                                                       // 0x0068 (size: 0x4)
    int32 scalability_fx;                                                             // 0x006C (size: 0x4)
    int32 scalability_foliageDensity;                                                 // 0x0070 (size: 0x4)
    float scalability_resolutionScale;                                                // 0x0074 (size: 0x4)
    FName lang_txt;                                                                   // 0x0078 (size: 0x8)
    bool hud_showResourceIcons;                                                       // 0x0080 (size: 0x1)
    float userInterfaceScale;                                                         // 0x0084 (size: 0x4)
    int32 mouseLock;                                                                  // 0x0088 (size: 0x4)
    bool useDayNightCycle;                                                            // 0x008C (size: 0x1)
    float autosavePeriod;                                                             // 0x0090 (size: 0x4)
    int32 noticeEnemyBehaviour;                                                       // 0x0094 (size: 0x4)
    bool useTutorials;                                                                // 0x0098 (size: 0x1)
    bool alwaysShowResourceIcons;                                                     // 0x0099 (size: 0x1)
    bool useVolumetricClouds;                                                         // 0x009A (size: 0x1)
    bool edgeScrolling;                                                               // 0x009B (size: 0x1)
    float GrassDensity;                                                               // 0x009C (size: 0x4)
    float grassRenderingDistance;                                                     // 0x00A0 (size: 0x4)

}; // Size: 0xA8

struct FRelation
{
    class APawnCPP* pawnA;                                                            // 0x0000 (size: 0x8)
    class APawnCPP* pawnB;                                                            // 0x0008 (size: 0x8)
    TArray<FName> Tags;                                                               // 0x0010 (size: 0x10)
    EDiploStatus Status;                                                              // 0x0020 (size: 0x1)
    float friendship;                                                                 // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FResampleCache
{
    TArray<FVector> Locations;                                                        // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FResourceSoundData
{
    class USoundBase* pickup;                                                         // 0x0000 (size: 0x8)
    class USoundBase* putdown;                                                        // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FReward
{
    int32 devPoints;                                                                  // 0x0000 (size: 0x4)
    float loyalty;                                                                    // 0x0004 (size: 0x4)
    float Prosperity;                                                                 // 0x0008 (size: 0x4)
    TArray<FSavedGood> Items;                                                         // 0x0010 (size: 0x10)
    int32 regionalWealth;                                                             // 0x0020 (size: 0x4)
    int32 treasury;                                                                   // 0x0024 (size: 0x4)
    TArray<int32> policies;                                                           // 0x0028 (size: 0x10)
    TArray<int32> Tech;                                                               // 0x0038 (size: 0x10)
    TArray<FName> startQuests;                                                        // 0x0048 (size: 0x10)
    int32 spawnRaiderForce;                                                           // 0x0058 (size: 0x4)
    TArray<FName> spawnFreeSquads;                                                    // 0x0060 (size: 0x10)
    bool triggerVictory;                                                              // 0x0070 (size: 0x1)

}; // Size: 0x78

struct FRoadFork
{
    class ARoad* Road;                                                                // 0x0000 (size: 0x8)
    float dist;                                                                       // 0x0008 (size: 0x4)
    FVector Point;                                                                    // 0x0010 (size: 0x18)

}; // Size: 0x28

struct FRoadGuidePoint
{
    FVector Pos;                                                                      // 0x0000 (size: 0x18)
    TArray<FPPLink> links;                                                            // 0x0018 (size: 0x10)
    class AActor* createdBy;                                                          // 0x0028 (size: 0x8)
    bool isColliding;                                                                 // 0x0030 (size: 0x1)
    float G;                                                                          // 0x0034 (size: 0x4)
    float H;                                                                          // 0x0038 (size: 0x4)
    float F;                                                                          // 0x003C (size: 0x4)
    int32 Parent;                                                                     // 0x0040 (size: 0x4)
    bool onRoad;                                                                      // 0x0044 (size: 0x1)

}; // Size: 0x48

struct FSavedBuilding
{
    FString CustomName;                                                               // 0x0000 (size: 0x10)
    FTransform transf;                                                                // 0x0010 (size: 0x60)
    float localHp;                                                                    // 0x0070 (size: 0x4)
    int32 bType;                                                                      // 0x0074 (size: 0x4)
    TArray<FVector> fieldBorderPoints;                                                // 0x0078 (size: 0x10)
    TArray<FVector> fieldPoints;                                                      // 0x0088 (size: 0x10)
    TArray<FSavedGood> Inventory;                                                     // 0x0098 (size: 0x10)
    TArray<FVector> inventoryBelongLocations;                                         // 0x00A8 (size: 0x10)
    TArray<FSavedExtension> extensions;                                               // 0x00B8 (size: 0x10)
    int32 artisanJob;                                                                 // 0x00C8 (size: 0x4)
    TArray<int32> upgradesDone;                                                       // 0x00D0 (size: 0x10)
    TArray<FName> buildingTags;                                                       // 0x00E0 (size: 0x10)
    ECropType cropType;                                                               // 0x00F0 (size: 0x1)
    ECropType cropType2;                                                              // 0x00F1 (size: 0x1)
    ECropType cropType3;                                                              // 0x00F2 (size: 0x1)
    bool bRotateCrops;                                                                // 0x00F3 (size: 0x1)
    TArray<FSavedPlant> plants;                                                       // 0x00F8 (size: 0x10)
    bool onFire;                                                                      // 0x0108 (size: 0x1)
    float fireAmt;                                                                    // 0x010C (size: 0x4)
    bool paused;                                                                      // 0x0110 (size: 0x1)
    bool isBeingUpgraded;                                                             // 0x0111 (size: 0x1)
    int32 activeWorkers;                                                              // 0x0114 (size: 0x4)
    int32 activeOxen;                                                                 // 0x0118 (size: 0x4)
    int32 fieldWorkersNeeded;                                                         // 0x011C (size: 0x4)
    int32 Priority;                                                                   // 0x0120 (size: 0x4)
    bool forceHarvest;                                                                // 0x0124 (size: 0x1)
    TArray<FTransform> stallTransforms;                                               // 0x0128 (size: 0x10)
    int32 productionFocus;                                                            // 0x0138 (size: 0x4)
    bool needsRefueling;                                                              // 0x013C (size: 0x1)
    bool refueled;                                                                    // 0x013D (size: 0x1)
    int32 refuelDay;                                                                  // 0x0140 (size: 0x4)
    uint8 stockFuelFor;                                                               // 0x0144 (size: 0x1)
    int32 huntingLimit;                                                               // 0x0148 (size: 0x4)
    TArray<FSavedGood> constructionGoods;                                             // 0x0150 (size: 0x10)
    bool workAreaLimited;                                                             // 0x0160 (size: 0x1)
    FVector workAreaCenter;                                                           // 0x0168 (size: 0x18)
    float workAreaRange;                                                              // 0x0180 (size: 0x4)
    int32 houseVariety;                                                               // 0x0184 (size: 0x4)
    int32 houseVarietyBPart;                                                          // 0x0188 (size: 0x4)
    FTransform residentialPrimaryBuildingTransform;                                   // 0x0190 (size: 0x60)
    FTransform residentialSecondaryBuildingTransform;                                 // 0x01F0 (size: 0x60)
    TArray<int32> assignedFamilyIDs;                                                  // 0x0250 (size: 0x10)
    TArray<int32> occupantFamilyIDs;                                                  // 0x0260 (size: 0x10)
    TArray<int32> storageFilter;                                                      // 0x0270 (size: 0x10)
    int32 ownerPawnID;                                                                // 0x0280 (size: 0x4)
    FVector trainConnectionRegionLocation;                                            // 0x0288 (size: 0x18)
    int32 muleTrain_buyingType;                                                       // 0x02A0 (size: 0x4)
    int32 muleTrain_sellingType;                                                      // 0x02A4 (size: 0x4)
    TArray<FSavedCastleModule> blueprints;                                            // 0x02A8 (size: 0x10)
    TArray<FSavedCastleModule> constructedModuleTransforms;                           // 0x02B8 (size: 0x10)
    int32 typeBeforeChange;                                                           // 0x02C8 (size: 0x4)
    int32 mourningPeriod;                                                             // 0x02CC (size: 0x4)
    bool allowMarketStalls;                                                           // 0x02D0 (size: 0x1)
    int32 overstocking;                                                               // 0x02D4 (size: 0x4)

}; // Size: 0x2E0

struct FSavedCamera
{
    FTransform pawnTransform;                                                         // 0x0000 (size: 0x60)
    float zoomLevel;                                                                  // 0x0060 (size: 0x4)
    float Pitch;                                                                      // 0x0064 (size: 0x4)
    float Tilt;                                                                       // 0x0068 (size: 0x4)

}; // Size: 0x70

struct FSavedCastleModule
{
    int32 bType;                                                                      // 0x0000 (size: 0x4)
    FTransform Transform;                                                             // 0x0010 (size: 0x60)

}; // Size: 0x70

struct FSavedChallenge
{
    int32 ID;                                                                         // 0x0000 (size: 0x4)
    FVector Center;                                                                   // 0x0008 (size: 0x18)
    int32 challengedPawnIndex;                                                        // 0x0020 (size: 0x4)
    int32 challengedByPawnIndex;                                                      // 0x0024 (size: 0x4)
    TArray<FVector> inRegardsToRegionLocations;                                       // 0x0028 (size: 0x10)
    int32 daysLeft;                                                                   // 0x0038 (size: 0x4)
    bool contested;                                                                   // 0x003C (size: 0x1)
    int32 influenceStolen;                                                            // 0x0040 (size: 0x4)
    EChallengeStatus Status;                                                          // 0x0044 (size: 0x1)
    FVector battlefieldLocation;                                                      // 0x0048 (size: 0x18)
    TArray<int32> initialBattleSquadIDs;                                              // 0x0060 (size: 0x10)

}; // Size: 0x70

struct FSavedClaim
{
    FVector regionLocation;                                                           // 0x0000 (size: 0x18)
    int32 daysLeft;                                                                   // 0x0018 (size: 0x4)
    bool bLocked;                                                                     // 0x001C (size: 0x1)
    float score;                                                                      // 0x0020 (size: 0x4)

}; // Size: 0x28

struct FSavedDeposit
{
    FName depositType;                                                                // 0x0000 (size: 0x8)
    FTransform Transform;                                                             // 0x0010 (size: 0x60)
    FSavedGood Inventory;                                                             // 0x0070 (size: 0x8)
    bool bRichDeposit;                                                                // 0x0078 (size: 0x1)
    int32 Limit;                                                                      // 0x007C (size: 0x4)

}; // Size: 0x80

struct FSavedExtension
{
    int32 Type;                                                                       // 0x0000 (size: 0x4)
    FTransform transf;                                                                // 0x0010 (size: 0x60)
    TArray<FVector> fieldPoints;                                                      // 0x0070 (size: 0x10)
    TArray<FVector> cornerPoints;                                                     // 0x0080 (size: 0x10)
    TArray<FVector> triangulated;                                                     // 0x0090 (size: 0x10)

}; // Size: 0xA0

struct FSavedGood
{
    int32 Type;                                                                       // 0x0000 (size: 0x4)
    int32 amt;                                                                        // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FSavedGrowingFoliage
{
    FString meshName;                                                                 // 0x0000 (size: 0x10)
    FTransform instanceTransform;                                                     // 0x0010 (size: 0x60)

}; // Size: 0x70

struct FSavedLetter
{
    TArray<FName> paras;                                                              // 0x0000 (size: 0x10)
    int32 daySent;                                                                    // 0x0010 (size: 0x4)
    int32 senderSetupIndex;                                                           // 0x0014 (size: 0x4)
    int32 recipientSetupIndex;                                                        // 0x0018 (size: 0x4)
    bool read;                                                                        // 0x001C (size: 0x1)

}; // Size: 0x20

struct FSavedLord
{
    bool isAI;                                                                        // 0x0000 (size: 0x1)
    bool isBandit;                                                                    // 0x0001 (size: 0x1)
    TArray<FName> traits;                                                             // 0x0008 (size: 0x10)
    FString CustomName;                                                               // 0x0018 (size: 0x10)
    FString portraitName;                                                             // 0x0028 (size: 0x10)
    FVector originPos;                                                                // 0x0038 (size: 0x18)
    FTransform currentTransf;                                                         // 0x0050 (size: 0x60)
    int32 treasury;                                                                   // 0x00B0 (size: 0x4)
    int32 influence;                                                                  // 0x00B4 (size: 0x4)
    int32 favour;                                                                     // 0x00B8 (size: 0x4)
    TArray<FVector> commandedRegionLocations;                                         // 0x00C0 (size: 0x10)
    TArray<int32> enemyPawnIDs;                                                       // 0x00D0 (size: 0x10)
    FColor playerColor;                                                               // 0x00E0 (size: 0x4)
    TArray<FSavedQuest> quests;                                                       // 0x00E8 (size: 0x10)
    TArray<FSavedLetter> InBox;                                                       // 0x00F8 (size: 0x10)
    TArray<FSavedLetter> outbox;                                                      // 0x0108 (size: 0x10)
    TArray<FSavedClaim> claims;                                                       // 0x0118 (size: 0x10)
    TArray<FUnitGroup> ctrlGroup;                                                     // 0x0128 (size: 0x10)
    TArray<FName> actorTags;                                                          // 0x0138 (size: 0x10)
    FCoatOfArmsData coatData;                                                         // 0x0148 (size: 0x14)
    TMap<FName, int32> tagAdditionDay;                                                // 0x0160 (size: 0x50)
    int32 mercenaryCompaniesHiredDuringLifetime;                                      // 0x01B0 (size: 0x4)

}; // Size: 0x1C0

struct FSavedMercenaryCompany
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    TArray<FName> units;                                                              // 0x0010 (size: 0x10)
    TArray<FName> traits;                                                             // 0x0020 (size: 0x10)
    class UTexture2D* banner;                                                         // 0x0030 (size: 0x8)
    int32 cost;                                                                       // 0x0038 (size: 0x4)
    int32 colorA;                                                                     // 0x003C (size: 0x4)
    int32 colorB;                                                                     // 0x0040 (size: 0x4)
    int32 emblemA;                                                                    // 0x0044 (size: 0x4)
    int32 emblemB;                                                                    // 0x0048 (size: 0x4)
    int32 arrivesIn;                                                                  // 0x004C (size: 0x4)
    FVector2D arrivalRegionLocation;                                                  // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FSavedPlant
{
    ECropType Type;                                                                   // 0x0000 (size: 0x1)
    FVector Pos;                                                                      // 0x0008 (size: 0x18)
    float plowed;                                                                     // 0x0020 (size: 0x4)
    float growth;                                                                     // 0x0024 (size: 0x4)
    int32 InstanceId;                                                                 // 0x0028 (size: 0x4)
    float Rotation;                                                                   // 0x002C (size: 0x4)
    FRotator plowAngle;                                                               // 0x0030 (size: 0x18)
    ECropType typeBefore;                                                             // 0x0048 (size: 0x1)
    int32 yield;                                                                      // 0x004C (size: 0x4)
    float fertilityCache;                                                             // 0x0050 (size: 0x4)
    FTransform instanceTransform;                                                     // 0x0060 (size: 0x60)
    uint8 plantISM_id;                                                                // 0x00C0 (size: 0x1)

}; // Size: 0xD0

struct FSavedQuest
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FString descr;                                                                    // 0x0010 (size: 0x10)
    int32 ID;                                                                         // 0x0020 (size: 0x4)
    int32 playedMessages;                                                             // 0x0024 (size: 0x4)
    TArray<FName> choices;                                                            // 0x0028 (size: 0x10)
    TArray<FName> choicesDone;                                                        // 0x0038 (size: 0x10)
    TArray<FName> choiceQuestOverride;                                                // 0x0048 (size: 0x10)
    int32 daysLeft;                                                                   // 0x0058 (size: 0x4)
    TArray<FObjective> objectives;                                                    // 0x0060 (size: 0x10)
    TArray<FObjective> abortTriggers;                                                 // 0x0070 (size: 0x10)
    TArray<FVector> regionLocations;                                                  // 0x0080 (size: 0x10)
    TArray<FReward> rewards;                                                          // 0x0090 (size: 0x10)
    TArray<FPunishment> Punishment;                                                   // 0x00A0 (size: 0x10)
    int32 tier;                                                                       // 0x00B0 (size: 0x4)
    FName focus;                                                                      // 0x00B4 (size: 0x8)
    bool bTracking;                                                                   // 0x00BC (size: 0x1)
    bool bTimed;                                                                      // 0x00BD (size: 0x1)
    bool Hidden;                                                                      // 0x00BE (size: 0x1)
    bool opportunity;                                                                 // 0x00BF (size: 0x1)
    bool canRefuse;                                                                   // 0x00C0 (size: 0x1)
    EQuestStatus Status;                                                              // 0x00C1 (size: 0x1)
    int32 issuedOnDay;                                                                // 0x00C4 (size: 0x4)
    bool repeats;                                                                     // 0x00C8 (size: 0x1)
    bool letterForm;                                                                  // 0x00C9 (size: 0x1)
    FName signatureOverride;                                                          // 0x00CC (size: 0x8)
    TArray<FName> customAcceptTriggers;                                               // 0x00D8 (size: 0x10)
    TArray<FName> customRefuseTriggers;                                               // 0x00E8 (size: 0x10)

}; // Size: 0xF8

struct FSavedRegion
{
    FVector Center;                                                                   // 0x0000 (size: 0x18)
    FString CustomName;                                                               // 0x0018 (size: 0x10)
    bool isSettled;                                                                   // 0x0028 (size: 0x1)
    ESettlementType settlementType;                                                   // 0x0029 (size: 0x1)
    int32 approval;                                                                   // 0x002C (size: 0x4)
    int32 publicOrder;                                                                // 0x0030 (size: 0x4)
    int32 regionalWealth;                                                             // 0x0034 (size: 0x4)
    int32 settlementLv;                                                               // 0x0038 (size: 0x4)
    TArray<int32> development;                                                        // 0x0040 (size: 0x10)
    int32 devPoints;                                                                  // 0x0050 (size: 0x4)
    TArray<FName> regionTags;                                                         // 0x0058 (size: 0x10)
    TArray<int32> policiesSigned;                                                     // 0x0068 (size: 0x10)
    TArray<int32> targetInventory;                                                    // 0x0078 (size: 0x10)
    TArray<FApprovalMemory> summedApprovalFactors;                                    // 0x0088 (size: 0x10)
    TArray<FApprovalMemory> publicOrderMemory;                                        // 0x0098 (size: 0x10)
    TArray<FApprovalMemory> summedPublicOrderFactors;                                 // 0x00A8 (size: 0x10)
    TArray<ETradeRule> tradeRules;                                                    // 0x00B8 (size: 0x10)
    int32 reservedLogs;                                                               // 0x00C8 (size: 0x4)
    int32 retinueSquadID;                                                             // 0x00CC (size: 0x4)
    TArray<FSavedWorkerFamily> workerFamilies;                                        // 0x00D0 (size: 0x10)
    TMap<int32, uint8> tradeRouteLevels;                                              // 0x00E0 (size: 0x50)
    TArray<FVector> tradeRouteMerchantLocations;                                      // 0x0130 (size: 0x10)
    FVector outpostToRegionLocation;                                                  // 0x0140 (size: 0x18)
    TMap<FName, int32> taxRates;                                                      // 0x0158 (size: 0x50)
    TArray<FSavedGrowingFoliage> growingFoliage;                                      // 0x01A8 (size: 0x10)
    TArray<FSavedGrowingFoliage> grownForestedPlantedTrees;                           // 0x01B8 (size: 0x10)
    TArray<int32> forbidGlobalTradeGoodTypes;                                         // 0x01C8 (size: 0x10)
    TMap<int32, int32> constructionReserve;                                           // 0x01D8 (size: 0x50)
    TMap<int32, int32> productionLimits;                                              // 0x0228 (size: 0x50)
    TMap<int32, FConsumptionLimit> craftingConsumptionLimits;                         // 0x0278 (size: 0x50)
    int32 nextLivestockOrderIn;                                                       // 0x02C8 (size: 0x4)

}; // Size: 0x2D0

struct FSavedRelationsTag
{
    int32 pawnA_setupIndex;                                                           // 0x0000 (size: 0x4)
    int32 pawnB_setupIndex;                                                           // 0x0004 (size: 0x4)
    FName Tag;                                                                        // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FSavedResource
{
    FName resType;                                                                    // 0x0000 (size: 0x8)
    FTransform transf;                                                                // 0x0010 (size: 0x60)
    int32 capacity;                                                                   // 0x0070 (size: 0x4)
    int32 grownThisYear;                                                              // 0x0074 (size: 0x4)
    int32 amt;                                                                        // 0x0078 (size: 0x4)
    int32 Type;                                                                       // 0x007C (size: 0x4)
    FString DisplayName;                                                              // 0x0080 (size: 0x10)
    bool falling;                                                                     // 0x0090 (size: 0x1)
    FVector clumpCenter;                                                              // 0x0098 (size: 0x18)
    FVector belongsToPos;                                                             // 0x00B0 (size: 0x18)
    TArray<FSavedGood> Inventory;                                                     // 0x00C8 (size: 0x10)
    FColor iconTint;                                                                  // 0x00D8 (size: 0x4)
    bool bSeasonal;                                                                   // 0x00DC (size: 0x1)
    bool bRichDeposit;                                                                // 0x00DD (size: 0x1)
    FVector regionPos;                                                                // 0x00E0 (size: 0x18)

}; // Size: 0x100

struct FSavedRoad
{
    FSplineCurves Curves;                                                             // 0x0000 (size: 0x70)
    FTransform transf;                                                                // 0x0070 (size: 0x60)
    TArray<FVector> roadPoints;                                                       // 0x00D0 (size: 0x10)
    float roadTangentScale;                                                           // 0x00E0 (size: 0x4)
    ERoadType roadType;                                                               // 0x00E4 (size: 0x1)
    EWallType wallType;                                                               // 0x00E5 (size: 0x1)
    FVector blueprintToBuildingLocation;                                              // 0x00E8 (size: 0x18)
    TArray<FTransform> gateTransforms;                                                // 0x0100 (size: 0x10)
    TArray<int32> cullSplinePointIDs;                                                 // 0x0110 (size: 0x10)
    TArray<FVector2D> connectedBuildingLocations;                                     // 0x0120 (size: 0x10)

}; // Size: 0x130

struct FSavedSquad
{
    FName unitType;                                                                   // 0x0000 (size: 0x8)
    ESquadType squadType;                                                             // 0x0008 (size: 0x1)
    FString Name;                                                                     // 0x0010 (size: 0x10)
    TArray<int32> skills;                                                             // 0x0020 (size: 0x10)
    int32 Icon;                                                                       // 0x0030 (size: 0x4)
    int32 ctrlGroup;                                                                  // 0x0034 (size: 0x4)
    int32 MaxSize;                                                                    // 0x0038 (size: 0x4)
    int32 ID;                                                                         // 0x003C (size: 0x4)
    int32 targetSquadID;                                                              // 0x0040 (size: 0x4)
    FVector Center;                                                                   // 0x0048 (size: 0x18)
    FVector smoothCenter;                                                             // 0x0060 (size: 0x18)
    TArray<float> killTimes;                                                          // 0x0078 (size: 0x10)
    TArray<int32> deathTimes;                                                         // 0x0088 (size: 0x10)
    int32 targetSquad;                                                                // 0x0098 (size: 0x4)
    TArray<int32> engagedSquads;                                                      // 0x00A0 (size: 0x10)
    FVector TargetLocation;                                                           // 0x00B0 (size: 0x18)
    int32 splitFromSquad;                                                             // 0x00C8 (size: 0x4)
    int32 arrivesIn;                                                                  // 0x00CC (size: 0x4)
    int32 payDay;                                                                     // 0x00D0 (size: 0x4)
    int32 companyID;                                                                  // 0x00D4 (size: 0x4)
    float spread;                                                                     // 0x00D8 (size: 0x4)
    FSegment line;                                                                    // 0x00E0 (size: 0x30)
    FSegment lastCommandedLine;                                                       // 0x0110 (size: 0x30)
    FSegment lastMergeLine;                                                           // 0x0140 (size: 0x30)
    FUnitStat avgStats;                                                               // 0x0170 (size: 0x48)
    TArray<FPotentialFactor> potentialFactors;                                        // 0x01B8 (size: 0x10)
    float avgPotential;                                                               // 0x01C8 (size: 0x4)
    FVector facingDir;                                                                // 0x01D0 (size: 0x18)
    int32 lootValue;                                                                  // 0x01E8 (size: 0x4)
    bool visibleToPlayer;                                                             // 0x01EC (size: 0x1)
    float cohesion;                                                                   // 0x01F0 (size: 0x4)
    int32 ralliedOnDay;                                                               // 0x01F4 (size: 0x4)
    ESquadControl Control;                                                            // 0x01F8 (size: 0x1)
    ERallyingStatus rallyingStatus;                                                   // 0x01F9 (size: 0x1)
    bool enemySpotted;                                                                // 0x01FA (size: 0x1)
    bool isEngaged;                                                                   // 0x01FB (size: 0x1)
    float engagementPercentage;                                                       // 0x01FC (size: 0x4)
    TArray<FName> audioTags;                                                          // 0x0200 (size: 0x10)
    uint8 concealmentLevel;                                                           // 0x0210 (size: 0x1)
    FVector campLocation;                                                             // 0x0218 (size: 0x18)
    int32 ownerPawnSetupIndex;                                                        // 0x0230 (size: 0x4)
    FVector originRegionLocation;                                                     // 0x0238 (size: 0x18)
    float previousMoraleChangeTime;                                                   // 0x0250 (size: 0x4)

}; // Size: 0x258

struct FSavedTask
{
    int32 Type;                                                                       // 0x0000 (size: 0x4)
    int32 ID;                                                                         // 0x0004 (size: 0x4)
    FVector TargetLocation;                                                           // 0x0008 (size: 0x18)
    FVector finalLocation;                                                            // 0x0020 (size: 0x18)
    FVector targetEntityLocation;                                                     // 0x0038 (size: 0x18)
    int32 resourceType;                                                               // 0x0050 (size: 0x4)
    int32 resourceAmt;                                                                // 0x0054 (size: 0x4)
    FVector targetBuildingLocation;                                                   // 0x0058 (size: 0x18)
    FVector finalBuildingLocation;                                                    // 0x0070 (size: 0x18)
    FVector targetUnitLocation;                                                       // 0x0088 (size: 0x18)
    FVector finalUnitLocation;                                                        // 0x00A0 (size: 0x18)
    FVector resourceLocation;                                                         // 0x00B8 (size: 0x18)
    int32 targetUnitIndex;                                                            // 0x00D0 (size: 0x4)

}; // Size: 0xD8

struct FSavedUnit
{
    int32 ownerPawnSetupIndex;                                                        // 0x0000 (size: 0x4)
    FString CustomName;                                                               // 0x0008 (size: 0x10)
    int32 squadID;                                                                    // 0x0018 (size: 0x4)
    FTransform transf;                                                                // 0x0020 (size: 0x60)
    EUnitRole currentUnitRole;                                                        // 0x0080 (size: 0x1)
    EUnitRole assignedUnitRole;                                                       // 0x0081 (size: 0x1)
    FEquipment Equipment;                                                             // 0x0084 (size: 0x1C)
    FEquipment equipmentOnRally;                                                      // 0x00A0 (size: 0x1C)
    FVector migratedToPos;                                                            // 0x00C0 (size: 0x18)
    FVector homePos;                                                                  // 0x00D8 (size: 0x18)
    FVector assignedPos;                                                              // 0x00F0 (size: 0x18)
    FVector workBuildingPos;                                                          // 0x0108 (size: 0x18)
    FVector lairPos;                                                                  // 0x0120 (size: 0x18)
    TArray<FSavedGood> Inventory;                                                     // 0x0138 (size: 0x10)
    TArray<FVector> inventoryBelongLocations;                                         // 0x0148 (size: 0x10)
    FVector dropsToPos;                                                               // 0x0158 (size: 0x18)
    bool dead;                                                                        // 0x0170 (size: 0x1)
    bool deadAndAnimationFinished;                                                    // 0x0171 (size: 0x1)
    float hp;                                                                         // 0x0174 (size: 0x4)
    float hunger;                                                                     // 0x0178 (size: 0x4)
    float disease;                                                                    // 0x017C (size: 0x4)
    float cold;                                                                       // 0x0180 (size: 0x4)
    float stamina;                                                                    // 0x0184 (size: 0x4)
    bool isHungry;                                                                    // 0x0188 (size: 0x1)
    bool isCold;                                                                      // 0x0189 (size: 0x1)
    FConsumptionStatus ConsumptionStatus;                                             // 0x018A (size: 0x7)
    uint8 monthlyConsumptionDay;                                                      // 0x0191 (size: 0x1)
    int32 yearlyConsumptionDay;                                                       // 0x0194 (size: 0x4)
    int32 Action;                                                                     // 0x0198 (size: 0x4)
    uint8 idleTime;                                                                   // 0x019C (size: 0x1)
    int32 craftingAnim;                                                               // 0x01A0 (size: 0x4)
    int32 repetitions;                                                                // 0x01A4 (size: 0x4)
    int32 targetRepetitions;                                                          // 0x01A8 (size: 0x4)
    FName currentAnimation;                                                           // 0x01AC (size: 0x8)
    FName targetAnimation;                                                            // 0x01B4 (size: 0x8)
    float currentAnimSpd;                                                             // 0x01BC (size: 0x4)
    float currentAnimSpdDefault;                                                      // 0x01C0 (size: 0x4)
    EAnimMode animMode;                                                               // 0x01C4 (size: 0x1)
    int32 job;                                                                        // 0x01C8 (size: 0x4)
    FSavedTask Task;                                                                  // 0x01D0 (size: 0xD8)
    FName taskLabelOverride;                                                          // 0x02A8 (size: 0x8)
    FVector reservedToLocation;                                                       // 0x02B0 (size: 0x18)
    FVector familyStallLocation;                                                      // 0x02C8 (size: 0x18)
    FVector garrisonedInLocation;                                                     // 0x02E0 (size: 0x18)
    bool unitCollision;                                                               // 0x02F8 (size: 0x1)
    bool hasBasicNeeds;                                                               // 0x02F9 (size: 0x1)
    TArray<FApprovalMemory> ApprovalMemory;                                           // 0x0300 (size: 0x10)
    FVector colorUVs;                                                                 // 0x0310 (size: 0x18)
    uint8 Age;                                                                        // 0x0328 (size: 0x1)
    float pregnancy;                                                                  // 0x032C (size: 0x4)
    float meleeTraining;                                                              // 0x0330 (size: 0x4)
    float archeryTraining;                                                            // 0x0334 (size: 0x4)
    TMap<EEquipmentSlot, uint8> equipmentMeshVariations;                              // 0x0338 (size: 0x50)
    TMap<EEquipmentSlot, uint8> equipmentTextureVariations;                           // 0x0388 (size: 0x50)
    TMap<class EEquipmentSlot, class FVector> equipmentColorSchemeUVs;                // 0x03D8 (size: 0x50)
    float shieldSymbolIndex;                                                          // 0x0428 (size: 0x4)
    int32 assignedSquadID;                                                            // 0x042C (size: 0x4)
    int32 assignedEquippedSquadID;                                                    // 0x0430 (size: 0x4)
    bool isBeingRallied;                                                              // 0x0434 (size: 0x1)
    FVector rallyingLocation;                                                         // 0x0438 (size: 0x18)
    FVector retreatLocation;                                                          // 0x0450 (size: 0x18)
    int32 workerFamilyID;                                                             // 0x0468 (size: 0x4)
    TArray<FName> actorTags;                                                          // 0x0470 (size: 0x10)
    TMap<class FName, class FString> customUnitData;                                  // 0x0480 (size: 0x50)
    TArray<FSavedGood> shoppingList;                                                  // 0x04D0 (size: 0x10)
    TArray<FName> quirks;                                                             // 0x04E0 (size: 0x10)
    FRotator TargetRotation;                                                          // 0x04F0 (size: 0x18)

}; // Size: 0x510

struct FSavedWorkerFamily
{
    FVector assignedToLocation;                                                       // 0x0000 (size: 0x18)
    FVector familyStallLocation;                                                      // 0x0018 (size: 0x18)
    FVector familyHomeLocation;                                                       // 0x0030 (size: 0x18)

}; // Size: 0x48

struct FSegment
{
    FVector A;                                                                        // 0x0000 (size: 0x18)
    FVector B;                                                                        // 0x0018 (size: 0x18)

}; // Size: 0x30

struct FSegment2D
{
}; // Size: 0x20

struct FSessionAchievementData
{
    bool hiredMilitia;                                                                // 0x0000 (size: 0x1)
    bool ralliedRetinue;                                                              // 0x0001 (size: 0x1)
    TArray<int32> buildingsConstructed;                                               // 0x0008 (size: 0x10)
    int32 numConstructionsFinished;                                                   // 0x0018 (size: 0x4)
    int32 numChallengesWon;                                                           // 0x001C (size: 0x4)
    int32 numChallengesLost;                                                          // 0x0020 (size: 0x4)
    int32 numEnemiesKilled;                                                           // 0x0024 (size: 0x4)
    int32 numSoldiersLost;                                                            // 0x0028 (size: 0x4)
    int32 numVillagersDied;                                                           // 0x002C (size: 0x4)

}; // Size: 0x30

struct FSettlementRequirements : public FTableRowBase
{
    int32 residentialLv1;                                                             // 0x0008 (size: 0x4)
    int32 residentialLv2;                                                             // 0x000C (size: 0x4)
    int32 residentialLv3;                                                             // 0x0010 (size: 0x4)
    int32 churchLv;                                                                   // 0x0014 (size: 0x4)
    int32 manorLv;                                                                    // 0x0018 (size: 0x4)

}; // Size: 0x20

struct FSnapDebrisRow : public FTableRowBase
{
    FName ID;                                                                         // 0x0008 (size: 0x8)
    TSubclassOf<class ASnapDebrisActor> ActorClass;                                   // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FSnapPoint
{
    TArray<int32> canSnapBuildings;                                                   // 0x0000 (size: 0x10)
    FTransform transf;                                                                // 0x0010 (size: 0x60)
    int32 variationIndex;                                                             // 0x0070 (size: 0x4)

}; // Size: 0x80

struct FSpatialCell
{
    TArray<class ASMUnit*> units;                                                     // 0x0000 (size: 0x10)
    TArray<class ASMBuildingMaster*> buildings;                                       // 0x0010 (size: 0x10)

}; // Size: 0x30

struct FSquad : public FTableRowBase
{
    FName unitType;                                                                   // 0x0008 (size: 0x8)
    ESquadType squadType;                                                             // 0x0010 (size: 0x1)
    TArray<class ASMUnit*> unitArr;                                                   // 0x0018 (size: 0x10)
    FString Name;                                                                     // 0x0028 (size: 0x10)
    TArray<int32> skills;                                                             // 0x0038 (size: 0x10)
    int32 Icon;                                                                       // 0x0048 (size: 0x4)
    class UTexture2D* iconTexture;                                                    // 0x0050 (size: 0x8)
    class UTexture2D* card;                                                           // 0x0058 (size: 0x8)
    int32 MaxSize;                                                                    // 0x0060 (size: 0x4)
    int32 ID;                                                                         // 0x0064 (size: 0x4)
    FVector Center;                                                                   // 0x0068 (size: 0x18)
    FVector smoothCenter;                                                             // 0x0080 (size: 0x18)
    TArray<float> killTimes;                                                          // 0x0098 (size: 0x10)
    TArray<int32> deathTimes;                                                         // 0x00A8 (size: 0x10)
    int32 targetSquad;                                                                // 0x00B8 (size: 0x4)
    TArray<int32> engagedSquads;                                                      // 0x00C0 (size: 0x10)
    FVector TargetLocation;                                                           // 0x00D0 (size: 0x18)
    int32 splitFromSquad;                                                             // 0x00E8 (size: 0x4)
    int32 arrivesIn;                                                                  // 0x00EC (size: 0x4)
    int32 payDay;                                                                     // 0x00F0 (size: 0x4)
    int32 companyID;                                                                  // 0x00F4 (size: 0x4)
    float spread;                                                                     // 0x00F8 (size: 0x4)
    FSegment line;                                                                    // 0x0100 (size: 0x30)
    FSegment lastCommandedLine;                                                       // 0x0130 (size: 0x30)
    FSegment lastMergeLine;                                                           // 0x0160 (size: 0x30)
    class ARegion* currentRegion;                                                     // 0x0190 (size: 0x8)
    class ARegion* targetRegion;                                                      // 0x0198 (size: 0x8)
    class ARegion* originRegion;                                                      // 0x01A0 (size: 0x8)
    FUnitStat avgStats;                                                               // 0x01A8 (size: 0x48)
    TArray<FPotentialFactor> potentialFactors;                                        // 0x01F0 (size: 0x10)
    float avgPotential;                                                               // 0x0200 (size: 0x4)
    FVector facingDir;                                                                // 0x0208 (size: 0x18)
    TArray<int32> equippedNum_body;                                                   // 0x0220 (size: 0x10)
    TArray<int32> equippedNum_helmet;                                                 // 0x0230 (size: 0x10)
    FAICommand prevAICommand;                                                         // 0x0240 (size: 0xB0)
    int32 lootValue;                                                                  // 0x02F0 (size: 0x4)
    bool visibleToPlayer;                                                             // 0x02F4 (size: 0x1)
    float cohesion;                                                                   // 0x02F8 (size: 0x4)
    bool rallied;                                                                     // 0x02FC (size: 0x1)
    int32 ralliedOnDay;                                                               // 0x0300 (size: 0x4)
    TArray<class ASMUnit*> assignedRecruits;                                          // 0x0308 (size: 0x10)
    TArray<class ASMUnit*> equippedRecruits;                                          // 0x0318 (size: 0x10)
    ESquadControl Control;                                                            // 0x0328 (size: 0x1)
    ERallyingStatus rallyingStatus;                                                   // 0x0329 (size: 0x1)
    bool enemySpotted;                                                                // 0x032A (size: 0x1)
    bool isEngaged;                                                                   // 0x032B (size: 0x1)
    float engagementPercentage;                                                       // 0x032C (size: 0x4)
    class ASMBuildingMaster* camp;                                                    // 0x0330 (size: 0x8)
    FVector campLocation;                                                             // 0x0338 (size: 0x18)
    int32 lastSquadAIUpdateTime;                                                      // 0x0350 (size: 0x4)
    TArray<FName> audioTags;                                                          // 0x0358 (size: 0x10)
    class APawnCPP* ownerPawn;                                                        // 0x0368 (size: 0x8)
    int32 ownerPawnSetupIndex;                                                        // 0x0370 (size: 0x4)
    uint8 concealmentLevel;                                                           // 0x0374 (size: 0x1)
    float previousHornTime;                                                           // 0x0378 (size: 0x4)
    float previousMoraleChangeTime;                                                   // 0x0380 (size: 0x4)
    TArray<class UStaticMeshComponent*> pathMeshes;                                   // 0x0388 (size: 0x10)

}; // Size: 0x3A0

struct FSquadEquipment
{
    FGood weapon;                                                                     // 0x0000 (size: 0x18)
    FGood shield;                                                                     // 0x0018 (size: 0x18)
    FGood armor;                                                                      // 0x0030 (size: 0x18)
    FGood helmet;                                                                     // 0x0048 (size: 0x18)
    FGood Mount;                                                                      // 0x0060 (size: 0x18)
    FGood bonus;                                                                      // 0x0078 (size: 0x18)

}; // Size: 0x90

struct FSquadIcon
{
    FVector2D screenPos;                                                              // 0x0000 (size: 0x10)
    int32 squadID;                                                                    // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FSquadTooltip
{
    bool show;                                                                        // 0x0000 (size: 0x1)
    bool isAttack;                                                                    // 0x0001 (size: 0x1)
    bool showFull;                                                                    // 0x0002 (size: 0x1)
    int32 squadID;                                                                    // 0x0004 (size: 0x4)
    TArray<int32> attackers;                                                          // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FSquadUnitPath
{
}; // Size: 0x30

struct FStat : public FTableRowBase
{
    FName DisplayName;                                                                // 0x0008 (size: 0x8)
    class UTexture2D* panelImage;                                                     // 0x0010 (size: 0x8)
    class UTexture2D* purposeIcon;                                                    // 0x0018 (size: 0x8)
    int32 cat;                                                                        // 0x0020 (size: 0x4)
    class USoundBase* SFX;                                                            // 0x0028 (size: 0x8)
    FVector2D Bounds;                                                                 // 0x0030 (size: 0x10)
    bool isPlaza;                                                                     // 0x0040 (size: 0x1)
    float bSize;                                                                      // 0x0044 (size: 0x4)
    bool bCircularBorder;                                                             // 0x0048 (size: 0x1)
    TArray<FVector2D> customBorder;                                                   // 0x0050 (size: 0x10)
    bool isWork;                                                                      // 0x0060 (size: 0x1)
    FVector4 workerTypes;                                                             // 0x0070 (size: 0x20)
    int32 job;                                                                        // 0x0090 (size: 0x4)
    FVector4 occupantTypes;                                                           // 0x00A0 (size: 0x20)
    TArray<int32> occasionalNeeds;                                                    // 0x00C0 (size: 0x10)
    int32 garrisonLimit;                                                              // 0x00D0 (size: 0x4)
    uint8 pastureSpace;                                                               // 0x00D4 (size: 0x1)
    uint8 stableSpace;                                                                // 0x00D5 (size: 0x1)
    bool shelter;                                                                     // 0x00D6 (size: 0x1)
    TSoftObjectPtr<UStaticMesh> constructionMeshAsset;                                // 0x00D8 (size: 0x28)
    FSoftClassPath BlueprintPath;                                                     // 0x0100 (size: 0x20)
    TArray<FSoftClassPath> assemblyBlueprintVariations;                               // 0x0120 (size: 0x10)
    EBuildingFunction buildingFunction;                                               // 0x0130 (size: 0x1)
    int32 maxHp;                                                                      // 0x0134 (size: 0x4)
    float Range;                                                                      // 0x0138 (size: 0x4)
    float rangeType;                                                                  // 0x013C (size: 0x4)
    FVector gatheringSpot;                                                            // 0x0140 (size: 0x18)
    FVector roadPos;                                                                  // 0x0158 (size: 0x18)
    bool needsRoad;                                                                   // 0x0170 (size: 0x1)
    bool collidesWithRoads;                                                           // 0x0171 (size: 0x1)
    bool canRelocate;                                                                 // 0x0172 (size: 0x1)
    TArray<int32> upgrades;                                                           // 0x0178 (size: 0x10)
    TArray<FSnapPoint> snapPoints;                                                    // 0x0188 (size: 0x10)
    bool canSetWorkArea;                                                              // 0x0198 (size: 0x1)
    bool chooseProducedGood;                                                          // 0x0199 (size: 0x1)
    TArray<int32> gatherTypes;                                                        // 0x01A0 (size: 0x10)
    bool smells;                                                                      // 0x01B0 (size: 0x1)
    bool flammable;                                                                   // 0x01B1 (size: 0x1)
    TArray<FGood> constructionGoods;                                                  // 0x01B8 (size: 0x10)
    float constructionCost;                                                           // 0x01C8 (size: 0x4)
    TArray<FTechRequirement> requiredTech;                                            // 0x01D0 (size: 0x10)
    TArray<int32> buildingsConstructed;                                               // 0x01E0 (size: 0x10)
    int32 maxInRegion;                                                                // 0x01F0 (size: 0x4)
    int32 settlementLevel;                                                            // 0x01F4 (size: 0x4)
    bool AIcanBuild;                                                                  // 0x01F8 (size: 0x1)
    TArray<FGood> averageConsumption;                                                 // 0x0200 (size: 0x10)
    TArray<FGood> averageProduction;                                                  // 0x0210 (size: 0x10)
    int32 storageLimitGeneric;                                                        // 0x0220 (size: 0x4)
    int32 storageLimitLarge;                                                          // 0x0224 (size: 0x4)
    int32 storageLimitPantry;                                                         // 0x0228 (size: 0x4)
    float spoilageRateReduction;                                                      // 0x022C (size: 0x4)
    EModuleCategory moduleCategory;                                                   // 0x0230 (size: 0x1)
    bool isModule;                                                                    // 0x0231 (size: 0x1)
    int32 placedWithin;                                                               // 0x0234 (size: 0x4)

}; // Size: 0x240

struct FSubField
{
    int32 extensionID;                                                                // 0x0000 (size: 0x4)
    class UInstancedStaticMeshComponent* ISM;                                         // 0x0008 (size: 0x8)
    int32 plantType;                                                                  // 0x0010 (size: 0x4)
    TArray<FVector> fieldBorder;                                                      // 0x0018 (size: 0x10)
    TArray<FVector> triangulatedBorder;                                               // 0x0028 (size: 0x10)
    TArray<FSegment> Paths;                                                           // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FTask
{
    int32 Type;                                                                       // 0x0000 (size: 0x4)
    FVector TargetLocation;                                                           // 0x0008 (size: 0x18)
    FVector finalLocation;                                                            // 0x0020 (size: 0x18)
    FVector targetEntityLocation;                                                     // 0x0038 (size: 0x18)
    int32 resourceType;                                                               // 0x0050 (size: 0x4)
    int32 resourceAmt;                                                                // 0x0054 (size: 0x4)
    class ASMBuildingMaster* targetBuilding;                                          // 0x0058 (size: 0x8)
    class ASMBuildingMaster* finalBuilding;                                           // 0x0060 (size: 0x8)
    class ASMUnit* targetUnit;                                                        // 0x0068 (size: 0x8)
    class ASMUnit* finalUnit;                                                         // 0x0070 (size: 0x8)
    bool executed;                                                                    // 0x0078 (size: 0x1)
    class AResource* Resource;                                                        // 0x0080 (size: 0x8)
    int32 ID;                                                                         // 0x0088 (size: 0x4)

}; // Size: 0x90

struct FTaxSettings
{
    int32 geld;                                                                       // 0x0000 (size: 0x4)
    int32 heregeld;                                                                   // 0x0004 (size: 0x4)
    int32 tithe;                                                                      // 0x0008 (size: 0x4)
    int32 income;                                                                     // 0x000C (size: 0x4)
    int32 war;                                                                        // 0x0010 (size: 0x4)
    int32 milling;                                                                    // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FTech : public FTableRowBase
{
    int32 tier;                                                                       // 0x0008 (size: 0x4)
    int32 maxTier;                                                                    // 0x000C (size: 0x4)
    FString Name;                                                                     // 0x0010 (size: 0x10)
    FString descr;                                                                    // 0x0020 (size: 0x10)
    class UTexture2D* img;                                                            // 0x0030 (size: 0x8)
    TArray<int32> nessecary;                                                          // 0x0038 (size: 0x10)
    TArray<int32> techsUnlockingThis;                                                 // 0x0048 (size: 0x10)
    int32 cost;                                                                       // 0x0058 (size: 0x4)
    EWIPStatus wipStatus;                                                             // 0x005C (size: 0x1)

}; // Size: 0x60

struct FTechRequirement : public FTableRowBase
{
    int32 ID;                                                                         // 0x0008 (size: 0x4)
    int32 tier;                                                                       // 0x000C (size: 0x4)

}; // Size: 0x10

struct FTradeDestination
{
    class ASMBuildingMaster* building;                                                // 0x0000 (size: 0x8)
    int32 goodType;                                                                   // 0x0008 (size: 0x4)
    bool buying;                                                                      // 0x000C (size: 0x1)

}; // Size: 0x10

struct FTradeLogEntry
{
    class ASMBuildingMaster* fromBuilding;                                            // 0x0000 (size: 0x8)
    class ASMBuildingMaster* toBuilding;                                              // 0x0008 (size: 0x8)
    uint8 fromRegionIndex;                                                            // 0x0010 (size: 0x1)
    uint8 toRegionIndex;                                                              // 0x0011 (size: 0x1)
    int32 goodType;                                                                   // 0x0014 (size: 0x4)
    int32 goodAmt;                                                                    // 0x0018 (size: 0x4)
    int32 priceTotal;                                                                 // 0x001C (size: 0x4)
    int32 daysTotal;                                                                  // 0x0020 (size: 0x4)
    FName traderName;                                                                 // 0x0024 (size: 0x8)

}; // Size: 0x30

struct FTradepoint
{
    class ARegion* Region;                                                            // 0x0000 (size: 0x8)
    int32 sellingType;                                                                // 0x0008 (size: 0x4)
    float sellingPrice;                                                               // 0x000C (size: 0x4)
    int32 buyingType;                                                                 // 0x0010 (size: 0x4)
    float buyingPrice;                                                                // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FTransformBunch
{
}; // Size: 0x10

struct FTransformPairCollection
{
    TMap<class FVector2D, class FTransform> pairs;                                    // 0x0000 (size: 0x50)
    TArray<bool> culling;                                                             // 0x0050 (size: 0x10)

}; // Size: 0x60

struct FTreeStruct
{
}; // Size: 0x28

struct FTriangle
{
    TArray<FVector> Border;                                                           // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FUIText
{
    FString String;                                                                   // 0x0000 (size: 0x10)
    FVector2D Pos;                                                                    // 0x0010 (size: 0x10)
    bool Border;                                                                      // 0x0020 (size: 0x1)
    FColor Color;                                                                     // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FUnitAnimset : public FTableRowBase
{
    TArray<FAnimVariation> anims;                                                     // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FUnitDataStruct
{
    int32 squadID;                                                                    // 0x0000 (size: 0x4)
    bool IsSelected;                                                                  // 0x0004 (size: 0x1)
    FVector TargetLocation;                                                           // 0x0008 (size: 0x18)
    FRotator TargetRotation;                                                          // 0x0020 (size: 0x18)
    int32 bodyType;                                                                   // 0x0038 (size: 0x4)
    int32 BodyID;                                                                     // 0x003C (size: 0x4)
    int32 headType;                                                                   // 0x0040 (size: 0x4)
    int32 HeadID;                                                                     // 0x0044 (size: 0x4)
    int32 coifType;                                                                   // 0x0048 (size: 0x4)
    int32 CoifID;                                                                     // 0x004C (size: 0x4)
    int32 wpnType;                                                                    // 0x0050 (size: 0x4)
    int32 WpnID;                                                                      // 0x0054 (size: 0x4)
    int32 helmetType;                                                                 // 0x0058 (size: 0x4)
    int32 HelmetID;                                                                   // 0x005C (size: 0x4)
    int32 shieldType;                                                                 // 0x0060 (size: 0x4)
    int32 ShieldID;                                                                   // 0x0064 (size: 0x4)
    int32 bonusType;                                                                  // 0x0068 (size: 0x4)
    int32 BonusID;                                                                    // 0x006C (size: 0x4)
    float bloody;                                                                     // 0x0070 (size: 0x4)
    int32 row;                                                                        // 0x0074 (size: 0x4)
    int32 column;                                                                     // 0x0078 (size: 0x4)
    bool unitCollision;                                                               // 0x007C (size: 0x1)
    float hp;                                                                         // 0x0080 (size: 0x4)

}; // Size: 0x88

struct FUnitGroup
{
    TArray<int32> squads;                                                             // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FUnitStat
{
    float att;                                                                        // 0x0000 (size: 0x4)
    float def;                                                                        // 0x0004 (size: 0x4)
    float bLock;                                                                      // 0x0008 (size: 0x4)
    float rangedAtt;                                                                  // 0x000C (size: 0x4)
    float Range;                                                                      // 0x0010 (size: 0x4)
    float shootingRange;                                                              // 0x0014 (size: 0x4)
    float charge;                                                                     // 0x0018 (size: 0x4)
    float chargeStop;                                                                 // 0x001C (size: 0x4)
    float Speed;                                                                      // 0x0020 (size: 0x4)
    float armorPierce;                                                                // 0x0024 (size: 0x4)
    float stamina;                                                                    // 0x0028 (size: 0x4)
    float morale;                                                                     // 0x002C (size: 0x4)
    float potential;                                                                  // 0x0030 (size: 0x4)
    TArray<FPotentialFactor> moraleEffects;                                           // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FUnitTemplate : public FTableRowBase
{
    FString Name;                                                                     // 0x0008 (size: 0x10)
    FString descr;                                                                    // 0x0018 (size: 0x10)
    int32 Icon;                                                                       // 0x0028 (size: 0x4)
    class UTexture2D* iconTexture;                                                    // 0x0030 (size: 0x8)
    bool isMilitia;                                                                   // 0x0038 (size: 0x1)
    float cost;                                                                       // 0x003C (size: 0x4)
    TArray<int32> armours;                                                            // 0x0040 (size: 0x10)
    TArray<int32> weapons;                                                            // 0x0050 (size: 0x10)
    TArray<int32> shields;                                                            // 0x0060 (size: 0x10)
    TArray<int32> helmets;                                                            // 0x0070 (size: 0x10)
    TArray<int32> mounts;                                                             // 0x0080 (size: 0x10)
    TArray<int32> bonus;                                                              // 0x0090 (size: 0x10)
    TArray<int32> skills;                                                             // 0x00A0 (size: 0x10)
    bool hideHeads;                                                                   // 0x00B0 (size: 0x1)
    class UTexture2D* card;                                                           // 0x00B8 (size: 0x8)
    class UTexture2D* Portrait;                                                       // 0x00C0 (size: 0x8)
    int32 MaxSize;                                                                    // 0x00C8 (size: 0x4)
    TArray<FName> audioTags;                                                          // 0x00D0 (size: 0x10)
    TArray<FGood> requiredEquipment;                                                  // 0x00E0 (size: 0x10)
    float minMeleeTraining;                                                           // 0x00F0 (size: 0x4)
    float minArcheryTraining;                                                         // 0x00F4 (size: 0x4)
    int32 minHouseLv;                                                                 // 0x00F8 (size: 0x4)
    bool hasBannerCarrier;                                                            // 0x00FC (size: 0x1)
    uint8 concealmentLevel;                                                           // 0x00FD (size: 0x1)
    float combatExperience;                                                           // 0x0100 (size: 0x4)

}; // Size: 0x108

struct FUpgrade : public FTableRowBase
{
    FString Name;                                                                     // 0x0008 (size: 0x10)
    FString descr;                                                                    // 0x0018 (size: 0x10)
    class UTexture2D* Icon;                                                           // 0x0028 (size: 0x8)
    TArray<FGood> cost;                                                               // 0x0030 (size: 0x10)
    int32 regionalWealth;                                                             // 0x0040 (size: 0x4)
    int32 treasury;                                                                   // 0x0044 (size: 0x4)
    TArray<int32> requiresBuilding;                                                   // 0x0048 (size: 0x10)
    TArray<FTechRequirement> requiresTech;                                            // 0x0058 (size: 0x10)
    int32 minimumSettlementLevel;                                                     // 0x0068 (size: 0x4)
    uint8 minimumProsperity;                                                          // 0x006C (size: 0x1)
    uint8 minimumHouseLv;                                                             // 0x006D (size: 0x1)
    bool lockedInOutposts;                                                            // 0x006E (size: 0x1)

}; // Size: 0x70

struct FUpgradeRequest
{
    class ASMBuildingMaster* buildingMaster;                                          // 0x0000 (size: 0x8)
    int32 upgradeID;                                                                  // 0x0008 (size: 0x4)
    int32 Slot;                                                                       // 0x000C (size: 0x4)

}; // Size: 0x10

struct FVein
{
    FVector Pos;                                                                      // 0x0000 (size: 0x18)
    TArray<FVector> links;                                                            // 0x0018 (size: 0x10)
    TArray<FVector> Path;                                                             // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FWorkerFamily
{
    TArray<class ASMUnit*> familyMembers;                                             // 0x0000 (size: 0x10)
    class ASMBuildingMaster* assignedTo;                                              // 0x0010 (size: 0x8)
    class ASMBuildingMaster* familyStall;                                             // 0x0018 (size: 0x8)
    class ASMBuildingMaster* familyHome;                                              // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FaiAction
{
    int32 Type;                                                                       // 0x0000 (size: 0x4)
    int32 flavour;                                                                    // 0x0004 (size: 0x4)
    FVector Location;                                                                 // 0x0008 (size: 0x18)
    int32 votes;                                                                      // 0x0020 (size: 0x4)
    class ASMBuildingMaster* targetBuilding;                                          // 0x0028 (size: 0x8)
    class ASMUnit* targetUnit;                                                        // 0x0030 (size: 0x8)
    class ARegion* Region;                                                            // 0x0038 (size: 0x8)
    class APawnCPP* partner;                                                          // 0x0040 (size: 0x8)
    int32 resourceType;                                                               // 0x0048 (size: 0x4)
    int32 resourceAmt;                                                                // 0x004C (size: 0x4)

}; // Size: 0x50

class AAmbientSoundNode : public AActor
{
    class ARTSMultiEngineCPP* masterPtr;                                              // 0x0290 (size: 0x8)
    int32 nearbyHouses;                                                               // 0x0298 (size: 0x4)

    void updateBiome();
}; // Size: 0x2A0

class ABattlefield : public AActor
{
    class ARTSMultiEngineCPP* masterPtr;                                              // 0x0290 (size: 0x8)

}; // Size: 0x298

class ABuildingTemplate : public AActor
{
    class UBoxComponent* Shape;                                                       // 0x0290 (size: 0x8)
    class UDataTable* buildingStats;                                                  // 0x0298 (size: 0x8)
    class ARTSMultiEngineCPP* masterPtr;                                              // 0x02A0 (size: 0x8)
    int32 bType;                                                                      // 0x02A8 (size: 0x4)
    bool ownershipByRegion;                                                           // 0x02AC (size: 0x1)
    class ARegion* Region;                                                            // 0x02B0 (size: 0x8)
    TArray<FGood> Inventory;                                                          // 0x02B8 (size: 0x10)
    bool snapToNearestRoad;                                                           // 0x02C8 (size: 0x1)

}; // Size: 0x2D0

class AConstruction : public AActor
{
    FVector Data;                                                                     // 0x0290 (size: 0x18)
    class ASMBuilding* building;                                                      // 0x02A8 (size: 0x8)
    class ARTSMultiEngineCPP* masterPtr;                                              // 0x02B0 (size: 0x8)
    class USceneComponent* defaultRootComponent;                                      // 0x02B8 (size: 0x8)
    class UPoseableMeshComponent* stoneStructure;                                     // 0x02C0 (size: 0x8)
    bool reverseConstruction;                                                         // 0x02C8 (size: 0x1)
    TArray<FVector> completedBalkPositions;                                           // 0x02D0 (size: 0x10)
    TArray<class UStaticMeshComponent*> debris;                                       // 0x02E0 (size: 0x10)
    bool isCollapsing;                                                                // 0x02F0 (size: 0x1)
    bool onFire;                                                                      // 0x02F1 (size: 0x1)
    TArray<class UStaticMeshComponent*> sortedBoardMeshes;                            // 0x02F8 (size: 0x10)
    TArray<FTransform> sortedBoardTransforms;                                         // 0x0308 (size: 0x10)
    TArray<FTransform> sortedBoardGroundTransforms;                                   // 0x0318 (size: 0x10)
    int32 lastBoardUpdated;                                                           // 0x0328 (size: 0x4)
    bool isStoneConstruction;                                                         // 0x032C (size: 0x1)
    bool hasStoneFoundations;                                                         // 0x032D (size: 0x1)
    class UMaterialInterface* burnedMaterial;                                         // 0x0330 (size: 0x8)
    class UMaterialInterface* burningMaterial;                                        // 0x0338 (size: 0x8)
    class UMaterialParameterCollection* BuildingsMPC;                                 // 0x0340 (size: 0x8)
    bool sortSideways;                                                                // 0x0348 (size: 0x1)
    float constructionProgress;                                                       // 0x034C (size: 0x4)
    TArray<class UStaticMeshComponent*> beamMeshes;                                   // 0x0350 (size: 0x10)
    TArray<class UStaticMeshComponent*> foundationMeshes;                             // 0x0360 (size: 0x10)
    TArray<class UStaticMeshComponent*> foundationMeshes_sorted;                      // 0x0370 (size: 0x10)
    TArray<class UStaticMeshComponent*> finalMeshes;                                  // 0x0380 (size: 0x10)
    TArray<class UStaticMeshComponent*> finalMeshes_sorted;                           // 0x0390 (size: 0x10)
    int32 lastElementUpdatedID;                                                       // 0x03A0 (size: 0x4)

    void updateElementVisibilityCommon();
    void updateConstructionLevel();
    void updateBoardVisibilityFast();
    void sortElementsFast(TArray<class UStaticMeshComponent*>& toSort, TArray<class UStaticMeshComponent*>& sorted, TArray<FTransform>& sortedTransforms, TArray<FTransform>& sortedGroundTransforms);
    TArray<FName> sortBoneNamesByLocation(TArray<FName> sourceArr);
    void setupConstructionFast();
    void setupConstruction();
    void setOnFire();
    void setData(const FVector& newData);
    void playConstructBalkSfx(const FVector& balkPos);
    void playCollapseBalkVfx(const FTransform& balkTransform, bool isLargeElement);
    FVector getData();
    bool getConstructionPosForBuilder(const TArray<class UStaticMeshComponent*>& componentsToCheck, FVector& OutLocation, FRotator& OutRotation, int32& outAnimID);
    void destroyConstructionBP();
}; // Size: 0x3A8

class ADepositDecal : public ADecalActor
{
    FGood Inventory;                                                                  // 0x0298 (size: 0x18)
    int32 Limit;                                                                      // 0x02B0 (size: 0x4)
    FName depositType;                                                                // 0x02B4 (size: 0x8)
    float str;                                                                        // 0x02BC (size: 0x4)
    class UMaterialInstanceDynamic* MI;                                               // 0x02C0 (size: 0x8)
    bool bRichDeposit;                                                                // 0x02C8 (size: 0x1)

    void updateMaterialParameter();
}; // Size: 0x2D0

class ADiploRoom : public AActor
{
}; // Size: 0x290

class ADirector : public AActor
{
    class ARTSMultiEngineCPP* masterPtr;                                              // 0x0290 (size: 0x8)
    class APawnCPP* playerRef;                                                        // 0x0298 (size: 0x8)
    FTimerHandle directorUpdateHandle;                                                // 0x02A0 (size: 0x8)
    TArray<int32> messagesShown;                                                      // 0x02A8 (size: 0x10)
    class UDataTable* DT_Quests;                                                      // 0x02B8 (size: 0x8)
    TArray<FName> issuedStoryQuests;                                                  // 0x02C0 (size: 0x10)
    int32 scenario_nextActionDay;                                                     // 0x02D0 (size: 0x4)

    void updateQuestDay();
    void updateQuest();
    bool startQuestFromPreset(const FName& questTag, class APawnCPP* questPawn, TArray<FReward> extraRewards, class ARegion* questRegion, bool askFirst, int32 daysLeftOverride);
    void issueProceduralQuest();
    bool isPawnCurrentlyFighting(class APawnCPP* Pawn);
    TArray<FReward> chooseRandomRewards(const int32& tier, const int32& flavour);
    TArray<FPunishment> chooseRandomPunishment(const int32& tier, const int32& flavour);
    void checkQuestsFulfilled();
}; // Size: 0x2D8

class AHeightmapGen : public AActor
{
    class UTextureRenderTarget2D* RT_heightmap;                                       // 0x0290 (size: 0x8)

    void refreshHeightmap();
}; // Size: 0x298

class AHudCPP : public AHUD
{
    class UTexture* roadIcon;                                                         // 0x0380 (size: 0x8)
    class UTexture* warningFood;                                                      // 0x0388 (size: 0x8)
    class UTexture* warningCOld;                                                      // 0x0390 (size: 0x8)
    class UTexture* warningJobs;                                                      // 0x0398 (size: 0x8)
    class UTexture* warningWorkers;                                                   // 0x03A0 (size: 0x8)
    class UTexture* warningCrop;                                                      // 0x03A8 (size: 0x8)
    class UTexture* warningBarn;                                                      // 0x03B0 (size: 0x8)
    class UTexture* warningGood;                                                      // 0x03B8 (size: 0x8)
    class UTexture* alertSick;                                                        // 0x03C0 (size: 0x8)
    class UTexture* alertDead;                                                        // 0x03C8 (size: 0x8)
    class UTexture* alertToolsLow;                                                    // 0x03D0 (size: 0x8)
    class UTexture* alertToolsBroken;                                                 // 0x03D8 (size: 0x8)
    class UTexture* buildProgress;                                                    // 0x03E0 (size: 0x8)
    class UTexture* recruitProgress;                                                  // 0x03E8 (size: 0x8)
    class UTexture* recruitAssembling;                                                // 0x03F0 (size: 0x8)
    class UTexture* squadRibbon;                                                      // 0x03F8 (size: 0x8)
    class UTexture* squadBg;                                                          // 0x0400 (size: 0x8)
    class UTexture* squadBgHighlight;                                                 // 0x0408 (size: 0x8)
    class UTexture* squadSpy;                                                         // 0x0410 (size: 0x8)
    class UTexture* squadDeer;                                                        // 0x0418 (size: 0x8)
    class UTexture* squadMerchant;                                                    // 0x0420 (size: 0x8)
    class UTexture* squadLivestockMerchant;                                           // 0x0428 (size: 0x8)
    class UTexture* squadSwordsmen;                                                   // 0x0430 (size: 0x8)
    class UTexture* squadSpearmen;                                                    // 0x0438 (size: 0x8)
    class UTexture* squadBowmen;                                                      // 0x0440 (size: 0x8)
    class UTexture* squadHorse;                                                       // 0x0448 (size: 0x8)
    class UTexture* squadMilitia;                                                     // 0x0450 (size: 0x8)
    class UTexture* squadMace;                                                        // 0x0458 (size: 0x8)
    class UTexture* squadBraced;                                                      // 0x0460 (size: 0x8)
    class UTexture* squadVisionObstructed;                                            // 0x0468 (size: 0x8)
    class UTexture2D* resBg;                                                          // 0x0470 (size: 0x8)
    class UTexture2D* resIron;                                                        // 0x0478 (size: 0x8)
    class UTexture2D* resTradepoint;                                                  // 0x0480 (size: 0x8)
    class UTexture2D* resStone;                                                       // 0x0488 (size: 0x8)
    class UTexture2D* resBee;                                                         // 0x0490 (size: 0x8)
    class UTexture2D* resBandit;                                                      // 0x0498 (size: 0x8)
    class UTexture2D* resSalt;                                                        // 0x04A0 (size: 0x8)
    class UTexture2D* resClay;                                                        // 0x04A8 (size: 0x8)
    class UTexture2D* resBerries;                                                     // 0x04B0 (size: 0x8)
    class UTexture2D* resShrooms;                                                     // 0x04B8 (size: 0x8)
    class UTexture2D* problem_pastureSpace;                                           // 0x04C0 (size: 0x8)
    class UTexture2D* problem_occasionalNeed;                                         // 0x04C8 (size: 0x8)
    class UTexture2D* problem_questionMark;                                           // 0x04D0 (size: 0x8)
    class UTexture2D* problem_cantAfford;                                             // 0x04D8 (size: 0x8)
    class UTexture2D* problem_canUpgrade;                                             // 0x04E0 (size: 0x8)
    class UTexture2D* problem_homeless;                                               // 0x04E8 (size: 0x8)
    class UTexture2D* problem_water;                                                  // 0x04F0 (size: 0x8)
    class UTexture2D* problem_extension;                                              // 0x04F8 (size: 0x8)
    class UTexture2D* problem_spoil;                                                  // 0x0500 (size: 0x8)
    class UTexture2D* problem_storage;                                                // 0x0508 (size: 0x8)
    class UTexture* crop;                                                             // 0x0510 (size: 0x8)
    class UTexture* cropDestroy;                                                      // 0x0518 (size: 0x8)
    TArray<FIcon> drawList;                                                           // 0x0520 (size: 0x10)
    TArray<FUIText> drawTextList;                                                     // 0x0530 (size: 0x10)
    class UFont* defaultFont;                                                         // 0x0540 (size: 0x8)
    bool bDrawBattleDebug;                                                            // 0x0548 (size: 0x1)
    int32 debug_numBattles;                                                           // 0x054C (size: 0x4)
    int32 debug_numFriendsInBattle;                                                   // 0x0550 (size: 0x4)
    int32 debug_numStray;                                                             // 0x0558 (size: 0x4)
    int32 debug_myMeleeStr;                                                           // 0x055C (size: 0x4)
    int32 debug_myMissileStr;                                                         // 0x0564 (size: 0x4)
    TArray<FName> debug_battleTags;                                                   // 0x0570 (size: 0x10)
    TArray<FName> debug_myArmyTags;                                                   // 0x0580 (size: 0x10)
    TArray<FSegment> drawArcs;                                                        // 0x0590 (size: 0x10)
    class UDataTable* DT_HudIcons;                                                    // 0x05A0 (size: 0x8)
    bool bShouldClearDrawList;                                                        // 0x05A8 (size: 0x1)

    void onWorldDestroy(class UWorld* World);
    bool iconPositionTaken(const FVector2D& Pos);
    class UTexture2D* getHudIconByName(FName iconName);
    void drawUIText(FString String, const FVector2D& Pos, const bool& drawBorder, const FColor& Color);
    void drawIconTexture(const FIcon& iconToDraw);
    void drawIcon(int32 ID, const FVector2D& Pos, float Scale, float progress, const FColor& Tint);
    void DrawHUD();
    void drawBattleDebug();
    void drawArc(const FVector& Start, const FVector& End, const FColor& Color, const float& Thickness);
    void clearDrawList();
}; // Size: 0x5B0

class AMLWaterBodyRiver : public AWaterBodyRiver
{
}; // Size: 0x328

class AMenuPawn : public APawn
{

    void OnWindowFocusChanged(bool bIsFocused);
}; // Size: 0x318

class ANotStrongholdCPPGameModeBase : public AGameModeBase
{
}; // Size: 0x328

class AObstacle : public AActor
{
}; // Size: 0x318

class APMaster : public AActor
{
    class ARTSMultiEngineCPP* masterPtr;                                              // 0x0290 (size: 0x8)
    FTimerHandle projUpdateHandle;                                                    // 0x0298 (size: 0x8)
    TArray<FProj> projArr;                                                            // 0x02A0 (size: 0x10)
    class UInstancedStaticMeshComponent* InstanceArrow;                               // 0x02B0 (size: 0x8)
    class UInstancedStaticMeshComponent* InstanceTorch;                               // 0x02B8 (size: 0x8)

    void updateProj();
    void shootProjectile(int32 Type, FVector Start, FVector End, float Height, class ASMUnit* shooter);
}; // Size: 0x2C0

class APawnCPP : public APawn
{
    class USpringArmComponent* Boom;                                                  // 0x0320 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0328 (size: 0x8)
    class UCurveFloat* CameraAngleCurve;                                              // 0x0330 (size: 0x8)
    float cameraHeightMin;                                                            // 0x0338 (size: 0x4)
    float cameraHeightMax;                                                            // 0x033C (size: 0x4)
    float zoomLevel;                                                                  // 0x0340 (size: 0x4)
    float smoothZoomLevel;                                                            // 0x0344 (size: 0x4)
    float smoothZoomIncr;                                                             // 0x0348 (size: 0x4)
    FRotator smoothRotation;                                                          // 0x0350 (size: 0x18)
    bool bCinematicTime;                                                              // 0x0368 (size: 0x1)
    FVector preferredSpawnPos;                                                        // 0x0370 (size: 0x18)
    class AHudCPP* HUD;                                                               // 0x0388 (size: 0x8)
    class UControlHook* ControlHook;                                                  // 0x0390 (size: 0x8)
    int32 placeBuilding;                                                              // 0x0398 (size: 0x4)
    float workAreaPreviewRange;                                                       // 0x039C (size: 0x4)
    bool dummyCollision;                                                              // 0x03A0 (size: 0x1)
    class UStaticMeshComponent* bbox;                                                 // 0x03A8 (size: 0x8)
    class UStaticMeshComponent* workAreaMesh;                                         // 0x03B0 (size: 0x8)
    FVector instanceOffset;                                                           // 0x0400 (size: 0x18)
    class UDecalComponent* rangeDecal;                                                // 0x0428 (size: 0x8)
    class UMaterialInterface* rangeDecalMat;                                          // 0x0430 (size: 0x8)
    class UStaticMeshComponent* roadDecal;                                            // 0x0438 (size: 0x8)
    class UMaterialInterface* roadDecalMat;                                           // 0x0440 (size: 0x8)
    class UMaterialInterface* roadPosDecalMat;                                        // 0x0448 (size: 0x8)
    class UMaterialInterface* roadPosDecalMatOnRoad;                                  // 0x0450 (size: 0x8)
    class UMaterialInterface* buildingPreviewDecalMat;                                // 0x0458 (size: 0x8)
    class UMaterialInterface* extensionPreviewDecalMat;                               // 0x0460 (size: 0x8)
    class UMaterialInterface* marketPreviewDecalMat;                                  // 0x0468 (size: 0x8)
    class UMaterialInterface* bPartPreviewDecalMat;                                   // 0x0470 (size: 0x8)
    float cameraForward;                                                              // 0x0478 (size: 0x4)
    float cameraRight;                                                                // 0x047C (size: 0x4)
    float Zoom;                                                                       // 0x0480 (size: 0x4)
    float MMB;                                                                        // 0x0484 (size: 0x4)
    float KB_space_axis;                                                              // 0x0488 (size: 0x4)
    float padLeftXAxis;                                                               // 0x048C (size: 0x4)
    float padLeftYAxis;                                                               // 0x0490 (size: 0x4)
    float padRightXAxis;                                                              // 0x0494 (size: 0x4)
    float padRightYAxis;                                                              // 0x0498 (size: 0x4)
    float padLeftTriggerAxis;                                                         // 0x049C (size: 0x4)
    float padRightTriggerAxis;                                                        // 0x04A0 (size: 0x4)
    bool b_ctrl_pressed;                                                              // 0x04A4 (size: 0x1)
    bool shift_pressed_b;                                                             // 0x04A5 (size: 0x1)
    bool b_tab_pressed;                                                               // 0x04A6 (size: 0x1)
    float cameraRotateAxisValue;                                                      // 0x04A8 (size: 0x4)
    float lastRMBClickTime;                                                           // 0x04AC (size: 0x4)
    bool alt_pressed_b;                                                               // 0x04B0 (size: 0x1)
    TArray<FUnitGroup> ctrlGroup;                                                     // 0x04B8 (size: 0x10)
    class ARTSMultiEngineCPP* masterPtr;                                              // 0x04C8 (size: 0x8)
    class UMaterialParameterCollectionInstance* MPC;                                  // 0x04D0 (size: 0x8)
    FVector2D mousePos2d;                                                             // 0x04D8 (size: 0x10)
    FVector2D mousePos2d_scaled;                                                      // 0x04E8 (size: 0x10)
    FVector2D mouseMove2d;                                                            // 0x04F8 (size: 0x10)
    FVector mouseMove3d;                                                              // 0x0508 (size: 0x18)
    FVector2D mouseMoveSmoothMMB;                                                     // 0x0520 (size: 0x10)
    FVector m3d;                                                                      // 0x0530 (size: 0x18)
    FVector m3d_whenLastZoomed;                                                       // 0x0548 (size: 0x18)
    float cameraTiltAdditionalInput;                                                  // 0x0560 (size: 0x4)
    FVector lastProximityCacheUpdateLocation;                                         // 0x0568 (size: 0x18)
    float lastZoomLevelProximityCacheUpdate;                                          // 0x0580 (size: 0x4)
    FVector2D MMB_pressed_2d;                                                         // 0x0588 (size: 0x10)
    FVector2D MMB_released_2d;                                                        // 0x0598 (size: 0x10)
    FVector2D LMB_pressed_2d;                                                         // 0x05A8 (size: 0x10)
    FVector2D LMB_pressed_2d_scaled;                                                  // 0x05B8 (size: 0x10)
    FVector2D LMB_released_2d;                                                        // 0x05C8 (size: 0x10)
    FVector LMB_pressed_3d;                                                           // 0x05D8 (size: 0x18)
    FVector2D RMB_pressed_2d;                                                         // 0x05F0 (size: 0x10)
    FVector RMB_pressed_3d;                                                           // 0x0600 (size: 0x18)
    bool RMB_pressed_b;                                                               // 0x0618 (size: 0x1)
    bool LMB_pressed_b;                                                               // 0x0619 (size: 0x1)
    bool MMB_pressed_b;                                                               // 0x061A (size: 0x1)
    bool DrawRect;                                                                    // 0x061B (size: 0x1)
    FRotator MMB_pressed_rot;                                                         // 0x0620 (size: 0x18)
    bool dragsRMB;                                                                    // 0x0638 (size: 0x1)
    bool RMB_drag_use_m3d;                                                            // 0x0639 (size: 0x1)
    float rotated;                                                                    // 0x063C (size: 0x4)
    TArray<class ASMUnit*> selectedArr;                                               // 0x0640 (size: 0x10)
    TArray<class ASMBuildingMaster*> selectedBld;                                     // 0x0650 (size: 0x10)
    TArray<int32> selectedSquads;                                                     // 0x0660 (size: 0x10)
    int32 hoverSquadID;                                                               // 0x0670 (size: 0x4)
    class ARoad* hoverRoad;                                                           // 0x0678 (size: 0x8)
    int32 hoveringEnvelopmentPointID;                                                 // 0x0680 (size: 0x4)
    class UDecalComponent* moveArrow;                                                 // 0x0688 (size: 0x8)
    class UMaterialInterface* ArrowMat;                                               // 0x0690 (size: 0x8)
    class UStaticMeshComponent* BoundsDecal;                                          // 0x0698 (size: 0x8)
    class UMaterialInterface* boundsDecalMat;                                         // 0x06A0 (size: 0x8)
    class UMaterialInterface* circularBoundsDecalMat;                                 // 0x06A8 (size: 0x8)
    class UMaterialInterface* boundsDecalMat_Military;                                // 0x06B0 (size: 0x8)
    class UMaterialParameterCollection* buildingMPC;                                  // 0x06B8 (size: 0x8)
    ECursorMode cursorMode;                                                           // 0x06C0 (size: 0x1)
    class ASMBuildingMaster* hitBuilding;                                             // 0x06C8 (size: 0x8)
    TArray<class ASMBuildingMaster*> closeBuildings;                                  // 0x06D0 (size: 0x10)
    FTimerHandle updateCloseHandle;                                                   // 0x06E0 (size: 0x8)
    class ARoad* dummyRoad;                                                           // 0x06E8 (size: 0x8)
    TArray<FVector> roadPoints;                                                       // 0x06F0 (size: 0x10)
    bool isAI;                                                                        // 0x0700 (size: 0x1)
    bool roadmode;                                                                    // 0x0701 (size: 0x1)
    bool roadRemoveMode;                                                              // 0x0702 (size: 0x1)
    FVector roadStartPos;                                                             // 0x0708 (size: 0x18)
    bool roadStarted;                                                                 // 0x0720 (size: 0x1)
    bool roadBuildHover;                                                              // 0x0721 (size: 0x1)
    uint8 roadLag;                                                                    // 0x0722 (size: 0x1)
    bool snapped;                                                                     // 0x0723 (size: 0x1)
    class ARoad* sRoad;                                                               // 0x0728 (size: 0x8)
    FVector sPos;                                                                     // 0x0730 (size: 0x18)
    bool bFlip;                                                                       // 0x0748 (size: 0x1)
    class ASMBuildingMaster* plannerModeBld;                                          // 0x0750 (size: 0x8)
    bool inPlanningMode;                                                              // 0x0758 (size: 0x1)
    class AActor* hoverBlueprint;                                                     // 0x0760 (size: 0x8)
    class AActor* selectedBlueprint;                                                  // 0x0768 (size: 0x8)
    class AActor* draggingBlueprint;                                                  // 0x0770 (size: 0x8)
    FVector draggingBlueprint_StartLocation;                                          // 0x0778 (size: 0x18)
    int32 draggingRoadPointID;                                                        // 0x0790 (size: 0x4)
    bool isDraggingGatePoint;                                                         // 0x0794 (size: 0x1)
    class UStaticMeshComponent* rotationGizmo;                                        // 0x0798 (size: 0x8)
    float rotationGizmo_startYaw;                                                     // 0x07A0 (size: 0x4)
    bool isDraggingRotationGizmo;                                                     // 0x07A4 (size: 0x1)
    bool isRotationGizmoHovered;                                                      // 0x07A5 (size: 0x1)
    float rotationGizmo_smoothOpacity;                                                // 0x07A8 (size: 0x4)
    TMap<class FSegment, class FResampleCache> roadResampleCache;                     // 0x07B0 (size: 0x50)
    TArray<FLogEntry> log;                                                            // 0x0800 (size: 0x10)
    bool isMainPlayer;                                                                // 0x0810 (size: 0x1)
    bool isUsingUI;                                                                   // 0x0818 (size: 0x1)
    TArray<int32> commandedSquads;                                                    // 0x0820 (size: 0x10)
    TArray<int32> activeCommandedSquads;                                              // 0x0830 (size: 0x10)
    TArray<int32> enemySquads;                                                        // 0x0840 (size: 0x10)
    FGlobalSettings Settings;                                                         // 0x0850 (size: 0x2)
    class ASMBuildingMaster* workAreaBuilding;                                        // 0x0880 (size: 0x8)
    bool placeFieldMode;                                                              // 0x0888 (size: 0x1)
    bool isMarket;                                                                    // 0x0889 (size: 0x1)
    bool isExtension;                                                                 // 0x088A (size: 0x1)
    EPlotType placePlotType;                                                          // 0x088B (size: 0x1)
    class ASMBuildingMaster* extensionFor;                                            // 0x0890 (size: 0x8)
    bool fieldCollides;                                                               // 0x0898 (size: 0x1)
    TArray<FFieldPoint> fieldPoints;                                                  // 0x08A0 (size: 0x10)
    TArray<FFieldPoint> fieldPointsClosed;                                            // 0x08B0 (size: 0x10)
    TArray<FFieldPoint> fieldPointsRotated;                                           // 0x08C0 (size: 0x10)
    TArray<FVector> fieldSmoothPoints;                                                // 0x08D0 (size: 0x10)
    TArray<FVector> fieldSmoothPointsClosed;                                          // 0x08E0 (size: 0x10)
    TArray<FVector> fieldPreviewTriangulated;                                         // 0x08F0 (size: 0x10)
    bool fieldClosed;                                                                 // 0x0900 (size: 0x1)
    FVector fieldCenter;                                                              // 0x0908 (size: 0x18)
    int32 fieldWorkersNeeded;                                                         // 0x0920 (size: 0x4)
    TArray<FQuest> proposedQuests;                                                    // 0x0948 (size: 0x10)
    TArray<FQuest> questOpportunities;                                                // 0x0958 (size: 0x10)
    class ADirector* Director;                                                        // 0x0968 (size: 0x8)
    bool hasClicked;                                                                  // 0x0970 (size: 0x1)
    FVector2D camVelo;                                                                // 0x0978 (size: 0x10)
    FString lordsName;                                                                // 0x0988 (size: 0x10)
    float mapLerp;                                                                    // 0x0998 (size: 0x4)
    TArray<class UDecalComponent*> deerDecals;                                        // 0x09B0 (size: 0x10)
    class UMaterialInterface* deerDecalMat;                                           // 0x09C0 (size: 0x8)
    class UMaterialInterface* decal_dot;                                              // 0x09C8 (size: 0x8)
    class UMaterialInterface* decal_cross;                                            // 0x09D0 (size: 0x8)
    class ARegion* currentRegion;                                                     // 0x09D8 (size: 0x8)
    class ARegion* regionUnderCursor;                                                 // 0x09E0 (size: 0x8)
    bool markLoyaltyUIUpdate;                                                         // 0x09E8 (size: 0x1)
    int32 numFieldDrainage;                                                           // 0x09EC (size: 0x4)
    float camera_tilt;                                                                // 0x09F0 (size: 0x4)
    float camera_heightOffset;                                                        // 0x09F4 (size: 0x4)
    float camera_clearance;                                                           // 0x09F8 (size: 0x4)
    float roadTangentScale;                                                           // 0x09FC (size: 0x4)
    float silver;                                                                     // 0x0A00 (size: 0x4)
    TArray<class ARegion*> commandedRegions;                                          // 0x0A08 (size: 0x10)
    bool bLMBwasPressedOnUsingUI;                                                     // 0x0A94 (size: 0x1)
    bool cinematicMode;                                                               // 0x0A95 (size: 0x1)
    TArray<FString> problemTooltip;                                                   // 0x0A98 (size: 0x10)
    TArray<FString> ToolTip;                                                          // 0x0AA8 (size: 0x10)
    bool constructionGoodsMet;                                                        // 0x0AB8 (size: 0x1)
    bool hasCommand;                                                                  // 0x0AB9 (size: 0x1)
    class ASMBuildingMaster* moduleConnection;                                        // 0x0AC0 (size: 0x8)
    bool noVein;                                                                      // 0x0AC8 (size: 0x1)
    bool buildingLimitReached;                                                        // 0x0AC9 (size: 0x1)
    bool hasEnoughMen;                                                                // 0x0ACA (size: 0x1)
    bool tooSteep;                                                                    // 0x0ACB (size: 0x1)
    bool moduleTooFar;                                                                // 0x0ACC (size: 0x1)
    bool followMode;                                                                  // 0x0AD4 (size: 0x1)
    class AActor* following;                                                          // 0x0AD8 (size: 0x8)
    int32 tabBeforeSwitch;                                                            // 0x0AE0 (size: 0x4)
    class ASMUnit* hoverUnit;                                                         // 0x0AE8 (size: 0x8)
    bool bHoversEnemy;                                                                // 0x0AF0 (size: 0x1)
    float roadCurvatureBarOpacity;                                                    // 0x0B10 (size: 0x4)
    bool bRoadCurvatureChanged;                                                       // 0x0B14 (size: 0x1)
    bool mapViewMode;                                                                 // 0x0B15 (size: 0x1)
    float mapViewDist;                                                                // 0x0B18 (size: 0x4)
    float mapViewSpeedMul;                                                            // 0x0B1C (size: 0x4)
    class ARegion* hoveringRegion;                                                    // 0x0B20 (size: 0x8)
    class ARegion* selectedRegion;                                                    // 0x0B28 (size: 0x8)
    float recruitCost;                                                                // 0x0B30 (size: 0x4)
    TArray<FLogEntry> dismissedEntries;                                               // 0x0B38 (size: 0x10)
    float lastActionTime;                                                             // 0x0B48 (size: 0x4)
    int32 lastQuestDay;                                                               // 0x0B4C (size: 0x4)
    TArray<FQuest> quests;                                                            // 0x0B50 (size: 0x10)
    TArray<int32> Tech;                                                               // 0x0B60 (size: 0x10)
    TArray<int32> availablePolicies;                                                  // 0x0B70 (size: 0x10)
    bool isBandit;                                                                    // 0x0B80 (size: 0x1)
    TArray<FClaim> claims;                                                            // 0x0B88 (size: 0x10)
    int32 influence;                                                                  // 0x0B98 (size: 0x4)
    class ASoundBuddy* SoundBuddy;                                                    // 0x0BA0 (size: 0x8)
    uint8 targetSquadSize;                                                            // 0x0BA8 (size: 0x1)
    TArray<FName> recruiting;                                                         // 0x0BB0 (size: 0x10)
    bool cameraMoved;                                                                 // 0x0BC0 (size: 0x1)
    bool cameraRotated;                                                               // 0x0BC1 (size: 0x1)
    bool cameraZoomed;                                                                // 0x0BC2 (size: 0x1)
    TArray<class APawnCPP*> enemies;                                                  // 0x0BC8 (size: 0x10)
    FColor playerColor;                                                               // 0x0BD8 (size: 0x4)
    FRotator fieldRot;                                                                // 0x0BE0 (size: 0x18)
    TArray<FName> recruitmentPool_Mercs;                                              // 0x0BF8 (size: 0x10)
    TArray<FName> recruitmentPool_Militia;                                            // 0x0C08 (size: 0x10)
    TArray<FName> paragraphsAvailable;                                                // 0x0C18 (size: 0x10)
    TArray<FString> diplomaticTags;                                                   // 0x0C28 (size: 0x10)
    TArray<FParagraph> letterHistory;                                                 // 0x0C38 (size: 0x10)
    TArray<FLetter> InBox;                                                            // 0x0C48 (size: 0x10)
    TArray<FLetter> outbox;                                                           // 0x0C58 (size: 0x10)
    bool wallMode;                                                                    // 0x0C68 (size: 0x1)
    bool bRelationsEstablishd;                                                        // 0x0C69 (size: 0x1)
    bool placeBuilding_isSnapped;                                                     // 0x0C6A (size: 0x1)
    int32 placeBuilding_snapVariation;                                                // 0x0C6C (size: 0x4)
    TArray<class USplineMeshComponent*> fieldSplineMeshes;                            // 0x0C70 (size: 0x10)
    class UStaticMesh* fieldSpline_StaticMesh;                                        // 0x0C80 (size: 0x8)
    FFieldPoint lastPreviewFieldPoint;                                                // 0x0C88 (size: 0x30)
    class UMaterialInterface* M_fieldSplineDummy;                                     // 0x0CB8 (size: 0x8)
    bool isFemale;                                                                    // 0x0CC0 (size: 0x1)
    class UTexture2D* Portrait;                                                       // 0x0CC8 (size: 0x8)
    int32 kingsFavour;                                                                // 0x0CD0 (size: 0x4)
    int32 predictedIncome;                                                            // 0x0CD4 (size: 0x4)
    FVector2D camRotSmooth2D;                                                         // 0x0CD8 (size: 0x10)
    float lastShoutSfx;                                                               // 0x0CE8 (size: 0x4)
    FVector2D mmove;                                                                  // 0x0CF0 (size: 0x10)
    FSquadTooltip SquadTooltip;                                                       // 0x0D00 (size: 0x18)
    bool shouldUpdateArmyUI;                                                          // 0x0D38 (size: 0x1)
    bool shouldUpdateArmyListUI;                                                      // 0x0D39 (size: 0x1)
    bool shouldUpdateStatUI;                                                          // 0x0D3A (size: 0x1)
    bool shouldUpdateProblemUI;                                                       // 0x0D3B (size: 0x1)
    bool shouldUpdateClaimUI;                                                         // 0x0D3C (size: 0x1)
    bool shouldUpdateApprovalUI;                                                      // 0x0D3D (size: 0x1)
    bool shouldUpdateInventoryStorageUI;                                              // 0x0D3E (size: 0x1)
    bool shouldUpdateResidentsUI;                                                     // 0x0D3F (size: 0x1)
    float lastIconClickTime;                                                          // 0x0D40 (size: 0x4)
    class UStaticMeshComponent* firingRangeMesh;                                      // 0x0D48 (size: 0x8)
    class UMaterialInstanceDynamic* firingRangeDynamicMaterial;                       // 0x0D50 (size: 0x8)
    bool firingRangeVisible;                                                          // 0x0D58 (size: 0x1)
    float firingRangeOpacity;                                                         // 0x0D5C (size: 0x4)
    class UMaterialInterface* unitColorDecalMat;                                      // 0x0D60 (size: 0x8)
    class UMaterialInstanceDynamic* unitDecalDynamic;                                 // 0x0D68 (size: 0x8)
    class UMaterialInstanceDynamic* unitDecalDynamic_selected;                        // 0x0D70 (size: 0x8)
    TArray<FSquadIcon> squadIconDrawList;                                             // 0x0D78 (size: 0x10)
    TArray<int32> showDecalSquads;                                                    // 0x0D88 (size: 0x10)
    bool weather_thunderStorm;                                                        // 0x0D98 (size: 0x1)
    float DMS_battleIntensity;                                                        // 0x0D9C (size: 0x4)
    float DMS_tacticalRetreat;                                                        // 0x0DA0 (size: 0x4)
    FTimerHandle DMS_update_handle;                                                   // 0x0DA8 (size: 0x8)
    TArray<class AResource*> resourcesInCollisionOfPlacebuilding;                     // 0x0DB0 (size: 0x10)
    float LMB_last_pressed_time;                                                      // 0x0DC0 (size: 0x4)
    float doubleclick_threshold;                                                      // 0x0DC4 (size: 0x4)
    class ARegion* fieldRegion;                                                       // 0x0DC8 (size: 0x8)
    FFieldPoint cursorFieldPoint;                                                     // 0x0DD0 (size: 0x30)
    bool fieldPointsChanged;                                                          // 0x0E00 (size: 0x1)
    TArray<FExtractedPlot> extractedPlots;                                            // 0x0E08 (size: 0x10)
    int32 slicingAngle;                                                               // 0x0E18 (size: 0x4)
    int32 numPlotOffset;                                                              // 0x0E1C (size: 0x4)
    int32 expectedNumPlots;                                                           // 0x0E20 (size: 0x4)
    int32 maxDivisionsForThisPlot;                                                    // 0x0E24 (size: 0x4)
    TArray<FTransform> extensionTransforms;                                           // 0x0E28 (size: 0x10)
    TArray<FTransform> marketTransforms;                                              // 0x0E38 (size: 0x10)
    TArray<FVector> residentialSlicesA;                                               // 0x0E48 (size: 0x10)
    TArray<FVector> residentialSlicesB;                                               // 0x0E58 (size: 0x10)
    int32 hoverProblem;                                                               // 0x0E68 (size: 0x4)
    TArray<class UDecalComponent*> previewRoadDecals;                                 // 0x0E70 (size: 0x10)
    class UStaticMesh* buildingPreviewPlane;                                          // 0x0E80 (size: 0x8)
    TArray<class UStaticMeshComponent*> previewBuildingDecals;                        // 0x0E88 (size: 0x10)
    TArray<class UStaticMeshComponent*> previewExtensionDecals;                       // 0x0E98 (size: 0x10)
    TArray<class ARoad*> prevSnappedToRoads;                                          // 0x0EA8 (size: 0x10)
    int32 marketShape;                                                                // 0x0EB8 (size: 0x4)
    ETooltipTint tooltipTint;                                                         // 0x0EBC (size: 0x1)
    int32 predictedRoyalTaxes;                                                        // 0x0EC0 (size: 0x4)
    int32 numTimesInDebt;                                                             // 0x0EC4 (size: 0x4)
    class ASMBuildingMaster* movedBuilding;                                           // 0x0EC8 (size: 0x8)
    TArray<class UStaticMeshComponent*> fieldPointMarkers;                            // 0x0ED0 (size: 0x10)
    TArray<float> markerAnimationTimes;                                               // 0x0EE0 (size: 0x10)
    class UStaticMesh* SM_fieldMarker;                                                // 0x0EF0 (size: 0x8)
    bool bHoversRoadCommit;                                                           // 0x0EF8 (size: 0x1)
    bool buildConfirmHovered;                                                         // 0x0EF9 (size: 0x1)
    FProblem lastPressedProblem;                                                      // 0x0F00 (size: 0x38)
    int32 whiteTooltipCorner;                                                         // 0x0F38 (size: 0x4)
    FUpgradeRequest UpgradeRequest;                                                   // 0x0F40 (size: 0x10)
    FUpgradeRequest artisanChangeRequest;                                             // 0x0F50 (size: 0x10)
    FUpgradeRequest extensionChangeRequest;                                           // 0x0F60 (size: 0x10)
    TArray<class ASMBuildingMaster*> demolishRequests;                                // 0x0F70 (size: 0x10)
    bool commitFieldRequestPending;                                                   // 0x0F80 (size: 0x1)
    bool upgradeRequestPending;                                                       // 0x0F81 (size: 0x1)
    bool artisanChangeRequestPending;                                                 // 0x0F82 (size: 0x1)
    bool extensionChangeRequestPending;                                               // 0x0F83 (size: 0x1)
    bool requestBuild;                                                                // 0x0F84 (size: 0x1)
    TArray<FName> traits;                                                             // 0x0F98 (size: 0x10)
    bool hasAnyActiveQuests;                                                          // 0x0FA8 (size: 0x1)
    float foliageTransparencyAdd;                                                     // 0x0FAC (size: 0x4)
    bool debugBoopMode;                                                               // 0x0FB0 (size: 0x1)
    class ASMUnit* reassignMode_FamilyMember;                                         // 0x0FB8 (size: 0x8)
    FTimerHandle animateDoorsHandle;                                                  // 0x0FC0 (size: 0x8)
    float cameraLerpFrames;                                                           // 0x0FC8 (size: 0x4)
    TArray<FName> lastVoiceResponses;                                                 // 0x0FD0 (size: 0x10)
    bool bShowedCulledWall;                                                           // 0x0FE0 (size: 0x1)
    class UStaticMeshComponent* wallCursor;                                           // 0x0FE8 (size: 0x8)
    TArray<int32> rallyingSquadIDs;                                                   // 0x0FF0 (size: 0x10)
    class UDataTable* DT_Alerts;                                                      // 0x1000 (size: 0x8)
    TArray<int32> visibleSquads;                                                      // 0x1008 (size: 0x10)
    FTimerHandle squadVisiblityHandle;                                                // 0x1018 (size: 0x8)
    float smoothedConstrMode;                                                         // 0x1020 (size: 0x4)
    EMainUIMode currentUIMode;                                                        // 0x1024 (size: 0x1)
    float dipToBlackOpacity;                                                          // 0x1028 (size: 0x4)
    TArray<FCinematicShot> cinematicShotQueue;                                        // 0x1030 (size: 0x10)
    FCinematicShot currentCinematicShot;                                              // 0x1040 (size: 0x80)
    float currentCinematicShotElapsedTime;                                            // 0x10C0 (size: 0x4)
    ECinematicEvent cinematicOverEvent;                                               // 0x10C4 (size: 0x1)
    bool grayscaleTint;                                                               // 0x10C5 (size: 0x1)
    class UStaticMesh* plotToRoadSnappingHelperStaticMesh;                            // 0x10C8 (size: 0x8)
    TArray<class UStaticMeshComponent*> plotToRoadSnappingHelpers;                    // 0x10D0 (size: 0x10)
    float timeMarketDistributionHovered;                                              // 0x10E0 (size: 0x4)
    bool bMarketDistributionShowing;                                                  // 0x10E4 (size: 0x1)
    EResidentialRequirement marketDistributionOverlayCategory;                        // 0x10E5 (size: 0x1)
    class UTexture2D* marketResourceIconBgTexture;                                    // 0x10E8 (size: 0x8)
    int32 maxNumOfMilitiaToSpawn;                                                     // 0x10F0 (size: 0x4)
    class UTextureRenderTarget2D* RT_modulePlanner;                                   // 0x10F8 (size: 0x8)
    bool shouldUpdateMarketStats;                                                     // 0x1100 (size: 0x1)
    ERTSTool activeRTSTool;                                                           // 0x1101 (size: 0x1)
    class AActor* RTSToolActor;                                                       // 0x1108 (size: 0x8)
    FName activeRTSToolVariety;                                                       // 0x1110 (size: 0x8)
    TArray<int32> placebuilding_missingTech;                                          // 0x1118 (size: 0x10)
    TMap<FName, int32> tagAdditionDay;                                                // 0x1128 (size: 0x50)
    class UStaticMesh* squadPathArrowMesh;                                            // 0x1180 (size: 0x8)

    void ZoomIn(float AxisValue);
    void workAreaDummy();
    void withdrawAllClaimsAndChallengesTowards(class APawnCPP* Pawn);
    bool wasParagraphEverUsed(class APawnCPP* sender, const FName& para);
    void updateTradeUI();
    void updateTownLabels();
    void updateTooltip();
    void updateStatUI();
    void updateSquadVisibility();
    void updateSoundFilters();
    void updateShowDecalSquads();
    void updateSelectionDecals(TArray<class ASMUnit*> unitsToUpdate);
    void updateRTSToolActorUI();
    void updateRoadSnapHighlight();
    void updateRoadDecalVisibility();
    void updateResourceOutlines();
    void updateResidentsUI();
    void updateRecruitmentPool();
    void updateQuestTimesUI();
    void updateQuestlog();
    void updateProjectedFieldCollision(bool checkSteepness, bool reprojectNoSnapIfCollides);
    void updateProblemUI();
    void updatePreviewRoadDecalsPos();
    void updatePreviewBuildingDecalsPos();
    void updatePredictedIncome();
    void updatePlotToRoadSnappingHelperLocations();
    void updatePlacebuildingMPC();
    void updatePlacebuildingMesh(int32 buildingID, bool isSnapped, int32 snapVariationID);
    void updateOverlayDecalVisibility();
    void updateOrderProgressUI(const class ASMBuildingMaster* building);
    void updateMercenayCompanyUI();
    void updateMarketStats();
    void updateLogUI();
    void updateKingsFavourUI();
    void updateInventoryStorage();
    void updateInventoryFieldStatus();
    void updateInventory();
    void updateHoveringRegion();
    void updateHasAnyActiveQuests();
    void updateGameSpeedUI();
    void updateFieldSpline();
    void updateFieldPointMarkers();
    void updateDiplomaticTags();
    void updateDemolishAvailabilityInOpenedBuildingTabsUI();
    void updateDeerDecalVisibility();
    void updateDeerDecals();
    void updateDateUI(int32 day, int32 month, int32 season);
    void updateCursor(ECursorMode NewMode);
    void updateCurrentRegionUI();
    void updateCurrentRegion();
    void updateCommandedRegions();
    void updateCommandedAndEnemySquads(bool includeFleeing);
    void updateCoatOfArmsSymbol();
    void updateClose();
    void updateClaimsUI();
    void updateClaims();
    void updateClaimBlocked(FClaim& Claim);
    void updateCastleReconstructionCostUI();
    void updateCameraClearance();
    void updateBoopMode();
    void updateAssignModeUI();
    void updateApprovalUI();
    void updateAllBorderColors();
    void updateActiveRTSToolUI();
    FLinearColor update_MPC();
    void update_mouse(const float& DeltaTime);
    void unstuckOxen();
    void unlockTech(const int32& newTech);
    void triggerTutorialIfNeeded(FName tutorialMsg, const FVector& Location);
    void triggerDefeat(const FName& eventTag, class APawnCPP* byWho);
    void toggleTimePause();
    void toggleTimeNext();
    void toggleSprint();
    void togglePauseMenu();
    void tickCinematicShot(float DeltaTime);
    void tab_released();
    void tab_pressed();
    void switchWallMode(const bool& NewMode);
    void switchTab(const int32& Tab);
    void stopVAMP();
    TArray<FPPStruct> squadFind(const int32& squadID, bool fatnessCheck);
    void splitGroup(const TArray<class ASMUnit*>& unitsToSplit, TArray<class ASMUnit*>& archers, TArray<class ASMUnit*>& melee);
    void spawnWorkAreaConfirmation(const FVector& Pos, const float& Radius);
    void spawnPlotToRoadSnappingHelperLocations(int32 numHelpers);
    void spawnFieldSplineMesh(FVector& Start, FVector& End, bool dummyMat, bool interPlot);
    void showWallAllCullPreview(const TArray<class UStaticMeshComponent*>& overlappedWalls);
    void showSavingIcon();
    void showProgressUpdate(class ARegion* Region);
    bool shouldShowFieldPreview();
    void shift_released();
    void shift_pressed();
    void shift_axis(float AxisValue);
    void setWorkAreaMode(class ASMBuildingMaster* building);
    void setUIScale(float NewScale);
    void settleRegion(class ARegion* regionToSettle, uint8 supplyLevel, ESettlementType settlementType, class ARegion* outpostToRegion);
    void setSquadName(int32 squadID, FString NewName);
    void setShowPlotToRoadSnappingHelpers(bool shouldShow);
    void setShadowSharpness(class UDirectionalLightComponent* Light, float sharpness);
    void SetSettings(FGlobalSettings newSettings);
    void setRoadMode(bool Mode, FVector StartPos, bool started);
    void setReassignMode(class ASMUnit* FamilyMember);
    void SetPosition(const FVector& newPos);
    void setPlannerMode(class ASMBuildingMaster* setPlannerBuilding);
    void setPlaceRallyingPoint(TArray<int32> squadIDs);
    void setPlacedBuilding(int32 newPlacedBuilding);
    void setMapMode(const bool& newMapMode);
    void setMapLerp(const float& NewValue);
    void setMainUIMode(EMainUIMode NewMode);
    void setLocationAboveGround(FVector& NewPosition, float DeltaTime);
    void setIsUsingUI(bool newFlag);
    void setIsUsingLowTopBars(const bool& newFlag);
    void setInventoryTabForBuilding(class ASMBuildingMaster* building, int32 inventoryTabIndex);
    void setGameSpeed(float newSpeed);
    void setFollowMode(class AActor* actorToFollow);
    void setFieldMode(bool NewMode, bool _isExtension, bool _isMarket, EPlotType plotType);
    void setDipToBlackOpacity(float Opacity);
    void setCurrentWorkAreaRange(float Range);
    void setCinematicMode(bool NewMode);
    void setChoice(FName newChoice, int32 questID);
    void setBuildingSelected(class ASMBuildingMaster* building, bool newSelected);
    void setBuildingMesh(class UStaticMesh* Mesh);
    void setBorderVisibility(bool newSetting);
    void setAllBuildingMeshesHidden(bool Hidden);
    void sendLetter(class APawnCPP* recipient, const TArray<FName>& Letter);
    void selectSquad(int32 squadID, bool resetSelection, bool playSounds);
    void selection();
    void selectHoveredBuilding();
    void selectBuildingSilent(class ASMBuildingMaster* bld);
    void select_rect();
    void saveScreenshot();
    void roadToolsNewRMB();
    void roadToolsNewLMB();
    void roadToolsNew();
    void RMB_released();
    void RMB_pressed();
    void RMB_BP_released();
    void RMB_BP_pressed();
    void respawnTownNames();
    void respawnSquadPathArrows(int32 squadID);
    void respawnPreviewRoadDecals();
    void respawnPreviewBuildingDecals();
    bool requestSaveFile(FString SlotName, FString saveName);
    void reorderUnitCard(int32 squadID, int32 newIndex);
    void renameSquad(int32 squadID, FString NewName);
    void removeSquad(int32 squadID);
    void removeRoad(class ARoad* roadToRemove);
    void removeOpportunity(FQuest opportunityToRemove);
    void removeLogEntry(const FLogEntry& Entry);
    void removeLastRoadPoint();
    void removeChallengeFromUI(int32 challengeID);
    void refuteClaim(FClaim& claimToRefute, bool useFavour);
    void refuseQuest(const FQuest& Quest);
    void redrawModulePlannerRT();
    void recalculateRoyalTaxes();
    void rallySquads(TArray<int32> squadIDs, FTransform rallyPointTransform);
    void QuestMessage(const FQuest& Quest);
    void projectResidentialAndUpdateUI();
    void projectMarketplace();
    void projectHoldSquad(int32 squadID);
    void projectFormation(int32 squadID, const FVector& Pos, const FVector& sourceOverride, const FVector& facingTargetOverride);
    void projectField(bool snap);
    void projectCircularBorder(const FVector& Center, float diameter, TArray<FVector>& outSmoothBorder, TArray<FVector>& outBorder);
    void projectAttackFormation(TArray<class ASMUnit*> attackers, TArray<class ASMUnit*> defenders, bool alwaysDirect);
    void projectArmyFormation(const TArray<int32>& squads, const FVector& Pos, FVector sourceOverride);
    void pressGroup(int32 Group, bool doubleClick);
    void positionRoadConfirm(const FVector& NewPosition);
    void pleaseTurnMapView(bool NewMode);
    void playVoiceResponse(const FName& responseKey, const int32& voiceID, class ASMUnit* relatedUnit);
    void playVoiceline(const TArray<FName>& audioTags, const FVector& Pos, bool allowOverlap);
    void playVfx(const int32& Type, const FVector& Pos);
    void playUISnd(int32 Type);
    void playSaveFinishedNotif();
    void playQuestMessage(const FQuest& Quest);
    void playPopupMessageIfNotPlayedRecently(FName MessageType, class ARegion* Region);
    void playPopupMessageGUI(FName MessageType, class ARegion* Region);
    void playParticleSystem(const int32& ID, const FVector& Pos);
    void playMessage(FQuestMessage Message, const int32& questID);
    void playMarkerSound(const int32& snd);
    void playKillCam(const FVector& Pos);
    void playFeedbackText(FString Text, const FVector& Pos, float Speed);
    void playEventMessage(const FName& msgType, FString primaryText, FString secondaryText);
    void playEventComplexMessage(const FName& msgType, const TArray<FString>& primaryText, const TArray<FString>& secondaryText);
    void playCinematicSequence(TArray<FCinematicShot> shotSequence, ECinematicEvent afterItsOver);
    void playCameraShake(const int32& typeOfShake);
    void playBuildingSound(const int32& bType);
    void playBuildEffects(const FVector& Position);
    void playAlertFromTag(FName alertTag);
    void playAlert(const int32& Type);
    void placeFieldDummy(bool forceChange);
    FName pickVoiceResponse(class ASMUnit* peasant, bool rare);
    void performCustomQuestTriggers(const TArray<FName>& triggerNames, class APawnCPP* recipient);
    void pathfinding_splitLongPaths(TArray<FPPStruct>& pathArr, const float& DistanceThreshold);
    void pad_right_Y(float AxisValue);
    void pad_right_X(float AxisValue);
    void pad_right_trigger(float AxisValue);
    void pad_left_Y(float AxisValue);
    void pad_left_X(float AxisValue);
    void pad_left_trigger(float AxisValue);
    void openSettlementInitializer(class ARegion* Region);
    void openCastlePlannerUI(class ASMBuildingMaster* plannerBuilding);
    void openBuildingTab(class ASMBuildingMaster* building, bool playSfx);
    void OnWindowFocusChanged(bool bIsFocused);
    void onSavingFinished();
    void moveSquadAsync(int32 squadID, TArray<FVector> waypoints, bool resetTasks, class ASMBuildingMaster* targetBuilding);
    void moveSquad(int32 squadID, TArray<FVector> waypoints, bool resetTasks);
    void moveSelected(bool useWaypoints);
    void MoveRight(float AxisValue);
    void MoveForward(float AxisValue);
    void moveDecals();
    void MMB_released();
    void MMB_pressed();
    void MMB_doubleclick();
    void MMB_axis(float AxisValue);
    float measureSquadPowerFromTemplate(FName& UnitTemplate);
    float measureSquadPower(const int32& squadID, bool onlyMelee);
    bool logExists(const FLogEntry& LogEntry, bool includeDismissed);
    void LMB_released();
    void LMB_pressed();
    void LMB_doubleclick();
    void LMB_BP_released();
    void LMB_BP_pressed();
    bool letter_hasAnyParagraphs(const TArray<FName>& currentLetter, const TArray<FName>& paras);
    bool letter_hasAllRequired(const TArray<FName>& currentLetter, const TArray<FName>& requiredParas);
    bool letter_containsPara(const TArray<FName>& currentLetter, const FName& para);
    void layClaim(class ARegion* Region, bool useFavour, bool consumeInfluence);
    void KB_space(float AxisValue);
    bool isTaxFixed(int32 taxTypeID);
    void issueRaiderTrackingQuestIfNew(int32 daysUntilRaid);
    bool isStanceActivatedForSelected(bool isPushStance, const EPushStance& _pushStance, const EBehaviourStance& _behaviourStance);
    bool isSquadSelected(int32 squadID);
    bool isSquadFleeing(int32 squadID);
    bool isSkillAvailableForSelectedSquads(int32 skillID, TArray<FName>& outReasonsNot);
    bool isRoadGuidePoint(const FVector& Point);
    bool isPlacebuildingCollidingWithRoad(class ARoad* Road);
    bool isPlacebuildingCollidingWithAnyRoad();
    bool isPlacebuildingColliding();
    bool isInAnyConstructionMode();
    bool isCurrentlyInBattle();
    bool isBuildingHovered();
    bool isAnySquadRaiding(const FArmy& Army);
    void invokeRemoveRoadPrompt(class ARoad* roadToRemove);
    void iconPop(class ASMBuildingMaster* building, int32 Type);
    int32 howManyDayAgoSentParagraph(const FName& para, class APawnCPP* recipient);
    void HomeShortcut_pressed();
    void highlightTargetBuilding(class ASMBuildingMaster* building);
    bool hasTechAnyRegion(const int32& ID, int32 tier);
    bool hasActiveQuestNamed(FString questName);
    void group9_2x();
    void group9();
    void group8_2x();
    void group8();
    void group7_2x();
    void group7();
    void group6_2x();
    void group6();
    void group5_2x();
    void group5();
    void group4_2x();
    void group4();
    void group3_2x();
    void group3();
    void group2_2x();
    void group2();
    void group1_2x();
    void group10_2x();
    void group10();
    void group1();
    bool getWorkAreaMode();
    float getUIScale();
    TArray<FTradepoint> getTradeDeals();
    float getTotalRecruitmentCost(const TArray<FName>& recruitment);
    TArray<int32> getTech();
    FVector2D getTaxRange(int32 taxTypeID);
    TArray<class ASMUnit*> getSquadUnits(const int32& squadID);
    FName getSquadStatus(const int32& squadID);
    TArray<int32> getSquadsNearPos(const FVector& Pos, const float& rangeSq, const TArray<int32>& squads);
    TArray<int32> getSquads(const TArray<class ASMUnit*>& unitsToGetSquadsFrom);
    class APawnCPP* getSquadOwner(const int32& squadID);
    int32 getSquadEquipmentAmt(int32 squadID, int32 goodType);
    TArray<int32> getSquadControlGroups(int32 squadID);
    FString getSquadCompanyName(int32 squadID);
    FSquad getSquadByID(int32 squadID);
    TArray<FString> getSmallTooltip();
    float getSilver();
    FString getSetupPortraitName();
    FGlobalSettings getSettings();
    TArray<class ASMBuildingMaster*> getSelectedBuildings();
    TArray<class ASMUnit*> GetSelected();
    float getRoadTangentScale();
    FVector getRoadpointInRange(const FVector& Pos, const float& Range);
    bool getRoadMode();
    ERallyingStatus getRetinueRallyingStatus(class ARegion* Region);
    TArray<class ARegion*> getRelevantClaimedRegions(bool includeChallenges);
    TArray<FChallenge> getRelevantChallenges();
    int32 getRelationsWith(class APawnCPP* Pawn);
    bool getRectB();
    FVector2D getRect();
    TArray<FName> getRecruitmentPool(bool mercenaries);
    TArray<FQuest> getQuests();
    bool getPreviousLetterFromThisPawn(class APawnCPP* Pawn, FLetter& Letter);
    bool getPreviousLetterFromConversation(class APawnCPP* Pawn, FLetter& Letter);
    TArray<class ASMUnit*> getPlayersOxen();
    class APlayerController* GetPlayerController();
    int32 getPawnSetupIndex();
    TArray<int32> getOrderedSquadList();
    int32 getNumYearsSurvived();
    void getNumShowingQuestMessages(int32& Num);
    int32 getNumOverlappedTrees(const TArray<FVector>& borderPoints, const FVector& Center);
    bool getNextProblemOfType(const int32& Type, FProblem& outProblem, class ARegion* Region);
    FVector getNearestRoadLocation();
    float getMouseLMBdist();
    FVector getMouse3d();
    FVector2D getMouse();
    int32 getMonthIDFromWeatherMaster();
    bool getMapMode();
    TArray<class ASMBuildingMaster*> getManors();
    TArray<class ARegion*> getMainTowns();
    void getMainTabIndex(int32& mainTabIndex);
    FString getLordsName();
    TArray<FLogEntry> getLog();
    bool getLMBPressedB();
    int32 getLetterCost(const TArray<FName>& Letter);
    int32 getKingsFavourPlace();
    TArray<class APawnCPP*> getKingsFavourite();
    int32 getKingsFavour_daysLeft();
    FItem getItem(int32 ItemId);
    bool getIsWinter();
    bool getIsUsingUI();
    class ASMBuildingMaster* getHitBuilding();
    void getHiredMercenaryCompanies(TArray<int32>& squads, TArray<int32>& companyIDs, TArray<FMercenaryCompany>& companies);
    float getGameSpeed();
    bool getFieldModeClosed();
    bool getFieldMode();
    FVector getFieldCenter();
    bool getDummyCollision();
    float getDistSqToNearestPlannerStaticModule(const FVector& Pos, FVector& outModulePos);
    int32 getDaysUntilCompanyGetsPaid(int32 comapnyID);
    int32 getdaysSinceLastExtortionAttempt(class APawnCPP* byPawn);
    int32 getDayOfTheYear();
    int32 getDayOfTheMonthFromWeatherMaster();
    int32 getCurrentYear();
    float getCurrentWorkAreaRange();
    FSegment getCurrentSquadLineProjection(int32 squadID);
    class ARegion* getCurrentRegion();
    TArray<FName> getCurrentlyAvailableParagraphs(const TArray<FName>& currentLetter, class APawnCPP* recipient, bool includeCantAfford);
    int32 getCompanyCostForPawn(const FMercenaryCompany& company);
    TArray<class ASMBuildingMaster*> getCommandedBuildings();
    class ARoad* getClosestRoad(const FVector& Pos, FVector& Out);
    bool getCinematicMode();
    FUnitStat getAverageUnitStat(const FName& Temp);
    FVector getAverageFacingDirection(const TArray<int32>& squads, TArray<FVector>& outDirs);
    FUnitStat getAverageEquipmentStat(const TArray<int32>& Items);
    EAmbienceType getAmbienceTypeOnPosition(const FVector& Pos);
    TArray<FSquad> getAllSquads();
    TArray<FSquad> getAllCommandedSquads();
    TArray<class ARegion*> getAllCommandedRegions();
    TArray<class ASMUnit*> getAllCommandedMilitaryUnits();
    void gameOver(const int32& Type);
    void formALineArmy(const TArray<int32>& squads, const FSegment& line, const FName& formationType, FSegment lastCommandedLineArmy);
    void formALine(const TArray<class ASMUnit*>& unitArr, const FVector& Start, const FVector& End);
    void finishQuestByIndex(const int32& questID, const bool& Success, const bool& Remove);
    void finishQuest(FQuest& Quest, bool Success, bool Remove);
    void finishCinematicSequence();
    TArray<class ASMUnit*> findUnitsDoingAction(int32 ActionType, class APawnCPP* ownerPawn);
    TArray<FVector> findSharpPoints(const TArray<FVector>& Path, TArray<float>& props, const bool& parallelOnly);
    class ARegion* findRegionByName(FString regionName);
    bool findNearestWallSnapPoint(const FVector& Loc, float maxDistSq, FVector& OutLocation, float& outDistSq);
    bool findNearestRoadpoint(class ARegion* Region, const FVector& Pos, FVector& outNearestRoadpoint);
    bool findNearestRetreatPos(const FVector& Pos, FVector& OutPosition);
    FVector findNearestMapEdge(const FVector& Position, float& outDistSq);
    void findMasterReferences();
    float findFormationDepth(const int32& squadID);
    FVector findFiringPos(const FVector& Source, const FVector& Target, const float& Range, const float& formationDepth, bool& alreadyInRange);
    TArray<class ARoad*> findCommonRoads(const TArray<class ARoad*>& roadsA, const TArray<class ARoad*>& roadsB);
    FVector findClosestPositionOnSegments(const FVector& Point, const TArray<FVector>& available);
    FVector findClosestPosition(const FVector& Point, const TArray<FVector>& available);
    void finalizeClaim(class ARegion* Region, bool Remove);
    void fieldRemovePoint();
    void fieldAddPoint();
    float fastSqrt(const float& N);
    TArray<FVector> extractSmoothSide(const TArray<FVector>& SmoothBorder, const FVector& cornerA, const FVector& cornerB);
    TArray<FVector> extractIntersected(const TArray<FVector>& smoothSegment, const FSegment& intersectionA, const FSegment& intersectionB, const bool& intersectA, const bool& intersectB);
    bool extractAmtFromCorrespondence(int32& outAmt, const FName& paraToSearchFor, class APawnCPP* sender, EParaPick paraPickType);
    void eraseBuildingReferencesFromUI(class ASMBuildingMaster* building);
    bool enactPolicy(class ARegion* Region, const int32& slotNo, const int32& policyID);
    void drawSquadOverlays();
    void drawMarketDistributionIcons();
    void drawBuildingOverlays();
    bool doesPlacebuildingAffectDeerLair();
    void DMS_updateBattleIntensity();
    void disbandSquad(int32 squadID);
    void disableWallAllCullPreview();
    void deselectSquad(int32 squadID);
    void deselectBuilding(class ASMBuildingMaster* building);
    void deselect_buildings();
    void Deselect();
    void declareWar(class APawnCPP* targetPawn);
    void declarePeace(class APawnCPP* targetPawn);
    void ctrl_axis(float AxisValue);
    void createDynamicUnitDecalMaterialIfNecessary();
    void createAndPlayVictoryCinematic();
    void createAndPlayGameOverCinematic();
    void constructionComplete(class ASMBuildingMaster* building);
    class ARoad* commitRoad();
    class ASMBuildingMaster* commitField();
    bool collectsAnyTaxes();
    void closeAllTabs();
    void clearBufferedMovement();
    void checkSelectionUnderCursor();
    void checkAndTriggerGameOver();
    void changeTreasury(float Amount);
    void changeSilver(int32 amt);
    void changeSelectedRegionUI(class ARegion* newSelectedRegion);
    void changeRelationTags(class APawnCPP* pawnB, const TArray<FName>& addTags, const TArray<FName>& removeTags);
    void changeRelations(class APawnCPP* pawnB, const float& change);
    void changePlotOffset(int32 change);
    void changeLetterRead(const FLetter& letterToChange, bool bLetterRead);
    void changeKingsFavour(const int32& change);
    void changeInfluence(const float& change);
    void changeActiveRTSTool(ERTSTool newTool, class AActor* toolActor, FName toolVariety);
    void castlePlanningTools();
    bool canClaimSomething();
    bool canAddNewMilitiaSquad(class ARegion* inRegion);
    void cameraMovement(float deltaT);
    void camera_rotate_axis(float AxisValue);
    void callCommitRoad();
    int32 calculateFieldWorkersNeeded(const TArray<FVector>& Points);
    void buildingDummy();
    class ASMBuildingMaster* build(bool instaBuild);
    void beginNextQueuedCinematicShot();
    void beginMilitiaRallyingAtBuildingDummy();
    void armyUIUpdate();
    void armyListUIUpdate();
    bool anyArchersSelected();
    void animateDoorsCrude();
    void alt_released();
    void alt_pressed();
    void alt_axis(float AxisValue);
    bool allArchersWithinRange(const int32& squadID, const int32& TargetId);
    void affectDeerLairs(class ASMBuildingMaster* building);
    void addUpgradeRequest(FUpgradeRequest newRequest);
    void addTradeDeal(const FTradepoint& newDeal);
    void addToOutbox(const FLetter& newLetter);
    void addToInbox(const FLetter& newLetter);
    void addTagRememberDay(const FName& newTag);
    void addRetinueSquad(class ARegion* Region);
    void addResourceAddedLogs(const TArray<FGood>& newInventory, class ASMBuildingMaster* building);
    void addRemoveSquadRequest(int32 squadID);
    void addMilitiaSquad(class ARegion* Region, FName unitType);
    void addLogIfNew(const FName& Tag, FString Text, FString descr, int32 opensMenu, const FVector& Pos, class AActor* Actor);
    void addLog(const FName& Tag, FString Text, FString descr, int32 opensMenu, const FVector& Pos, class AActor* Actor);
    void addExtensionChangeRequest(FUpgradeRequest newRequest);
    void addCommitFieldRequest();
    void addArtisanChangeRequest(FUpgradeRequest newRequest);
    void acceptQuest(FQuest& Quest);
}; // Size: 0x11E0

class APawnCPP_AI : public APawnCPP
{
    FTimerHandle AICommandHandle;                                                     // 0x11E0 (size: 0x8)
    FTimerHandle aiActionHandle;                                                      // 0x11E8 (size: 0x8)
    FTimerHandle AILetterwritingHandle;                                               // 0x11F0 (size: 0x8)
    bool bDrawDebug;                                                                  // 0x1240 (size: 0x1)
    int32 AI_general_cycles;                                                          // 0x1244 (size: 0x4)
    int32 AI_tactics_cycles;                                                          // 0x1248 (size: 0x4)

    void writeDebugLogTacticsAI(FString debugLogTxt);
    void writeDebugLogGeneralAI(FString debugLogTxt);
    void startAI(float Speed, bool canBuild);
}; // Size: 0x1250

class ARTSMultiEngineCPP : public AActor
{
    class USceneComponent* Root;                                                      // 0x0290 (size: 0x8)
    float Delta;                                                                      // 0x0298 (size: 0x4)
    bool isLoadingASave;                                                              // 0x029C (size: 0x1)
    bool finishedSetup;                                                               // 0x029D (size: 0x1)
    TArray<FTransform> spawnPositions;                                                // 0x02A0 (size: 0x10)
    float gameSpeed;                                                                  // 0x02B0 (size: 0x4)
    TArray<FPPStruct> roadLinks;                                                      // 0x02C0 (size: 0x10)
    FTimerHandle interpRealPosUpdateHandle;                                           // 0x02D0 (size: 0x8)
    FTimerHandle realposUpdateHandle;                                                 // 0x02D8 (size: 0x8)
    FTimerHandle textureUpdateHandle;                                                 // 0x02E0 (size: 0x8)
    FTimerHandle asyncCleanupTimer;                                                   // 0x02E8 (size: 0x8)
    FTimerHandle challengeUpdateTimer;                                                // 0x02F0 (size: 0x8)
    uint8 interpolationStaggerTimer;                                                  // 0x0304 (size: 0x1)
    float currAnimUpdateTime;                                                         // 0x0308 (size: 0x4)
    float lastAnimUpdateTime;                                                         // 0x030C (size: 0x4)
    float updateInterpRealPosLag;                                                     // 0x0310 (size: 0x4)
    class UStaticMesh* SM_WindmillShaft;                                              // 0x0318 (size: 0x8)
    float CullDistance;                                                               // 0x0320 (size: 0x4)
    float cullDistanceFar;                                                            // 0x0324 (size: 0x4)
    float cullDistanceMid;                                                            // 0x0328 (size: 0x4)
    float cullDistanceClose;                                                          // 0x032C (size: 0x4)
    float cullDistanceBuildings;                                                      // 0x0330 (size: 0x4)
    class UDataTable* DT_ConstructionBPs;                                             // 0x0338 (size: 0x8)
    class UDataTable* DT_AnimsetCombat;                                               // 0x0340 (size: 0x8)
    class UDataTable* DT_AnimsetWork;                                                 // 0x0348 (size: 0x8)
    class UDataTable* DT_AnimsetGoat;                                                 // 0x0350 (size: 0x8)
    class UDataTable* DT_AnimsetChicken;                                              // 0x0358 (size: 0x8)
    class UDataTable* DT_AnimsetSheep;                                                // 0x0360 (size: 0x8)
    class UDataTable* DT_AnimsetDeer;                                                 // 0x0368 (size: 0x8)
    class UDataTable* DT_AnimsetHorse;                                                // 0x0370 (size: 0x8)
    class UDataTable* DT_AnimsetBird;                                                 // 0x0378 (size: 0x8)
    class UDataTable* DT_AnimsetOx;                                                   // 0x0380 (size: 0x8)
    class UDataTable* DT_AnimsetHound;                                                // 0x0388 (size: 0x8)
    class UDataTable* DT_AnimsetPig;                                                  // 0x0390 (size: 0x8)
    class UDataTable* DT_AnimsetCombined;                                             // 0x0398 (size: 0x8)
    class UMaterialParameterCollection* buildingMPC;                                  // 0x03A0 (size: 0x8)
    class UMaterialParameterCollection* MPC_Overlays;                                 // 0x03A8 (size: 0x8)
    TSubclassOf<class AObstacle> ObstacleBP;                                          // 0x03B0 (size: 0x8)
    class ALandscapeProxy* LandscapeProxy;                                            // 0x03B8 (size: 0x8)
    class APawnCPP* playerRef;                                                        // 0x03C0 (size: 0x8)
    TArray<class ASMUnit*> unitArr;                                                   // 0x03C8 (size: 0x10)
    TArray<FSquad> squads;                                                            // 0x03D8 (size: 0x10)
    TArray<int32> playersSquadsUIOrder;                                               // 0x03E8 (size: 0x10)
    TArray<class ASMBuildingMaster*> buildingArr;                                     // 0x03F8 (size: 0x10)
    TArray<class ASMBuildingMaster*> independentBuildings;                            // 0x0408 (size: 0x10)
    TArray<class AConstruction*> collapsingConstructions;                             // 0x0418 (size: 0x10)
    TArray<class ASMUnit*> deerArr;                                                   // 0x0428 (size: 0x10)
    TArray<class ASMUnit*> birdArr;                                                   // 0x0438 (size: 0x10)
    TArray<class ARegion*> Regions;                                                   // 0x0448 (size: 0x10)
    TArray<class ARoad*> borders;                                                     // 0x0458 (size: 0x10)
    TArray<class ARoad*> bordersCameraBlocking;                                       // 0x0468 (size: 0x10)
    TArray<class ARoad*> roads;                                                       // 0x0478 (size: 0x10)
    TArray<class ARoad*> streams;                                                     // 0x0488 (size: 0x10)
    TArray<class AMLWaterBodyRiver*> rivers;                                          // 0x0498 (size: 0x10)
    TArray<class AResource*> resources;                                               // 0x04C8 (size: 0x10)
    TArray<class UMaterialInstanceDynamic*> MaterialInstances;                        // 0x04D8 (size: 0x10)
    TArray<class APawnCPP*> pawns;                                                    // 0x04E8 (size: 0x10)
    class UTextureRenderTarget2D* RT_fields;                                          // 0x04F8 (size: 0x8)
    class UTextureRenderTarget2D* RT_plowing;                                         // 0x0500 (size: 0x8)
    class UTextureRenderTarget2D* RT_Fertility;                                       // 0x0508 (size: 0x8)
    class UTextureRenderTarget2D* RT_ForestMask;                                      // 0x0510 (size: 0x8)
    class UTextureRenderTarget2D* RT_Desirability;                                    // 0x0518 (size: 0x8)
    class UCanvas* Canvas;                                                            // 0x0520 (size: 0x8)
    class UTextureRenderTarget2D* RT_RegionMask;                                      // 0x0528 (size: 0x8)
    class UTextureRenderTarget2D* RT_roads;                                           // 0x0530 (size: 0x8)
    class UTextureRenderTarget2D* RT_holes;                                           // 0x0538 (size: 0x8)
    class UTextureRenderTarget2D* RT_veins;                                           // 0x0540 (size: 0x8)
    class UTexture2D* dirtPattern01;                                                  // 0x0548 (size: 0x8)
    class UTexture2D* marketPattern;                                                  // 0x0550 (size: 0x8)
    class UTexture2D* softMask;                                                       // 0x0558 (size: 0x8)
    class UTexture2D* pitMaskTexture;                                                 // 0x0560 (size: 0x8)
    class UTexture2D* pitMaskDirt;                                                    // 0x0568 (size: 0x8)
    class UTexture2D* pitMaskNew;                                                     // 0x0570 (size: 0x8)
    class UDataTable* DT_socketMeshes;                                                // 0x0578 (size: 0x8)
    class UDataTable* techStats;                                                      // 0x05D8 (size: 0x8)
    class UDataTable* itemStats;                                                      // 0x05E0 (size: 0x8)
    TSubclassOf<class UFoliageInstancedStaticMeshComponent> foliageCustomDataBP;      // 0x0640 (size: 0x8)
    TArray<class UStaticMesh*> youngTreeMeshes;                                       // 0x0658 (size: 0x10)
    TArray<class UStaticMesh*> treeMeshesTriggeringForestBiome;                       // 0x0668 (size: 0x10)
    TArray<class UStaticMesh*> fieldBorderMeshes;                                     // 0x0678 (size: 0x10)
    TArray<class UStaticMesh*> fieldstoneMeshes;                                      // 0x0688 (size: 0x10)
    TSubclassOf<class AResource> treeBP;                                              // 0x0698 (size: 0x8)
    TSubclassOf<class AResource> iranyriveresourceBP;                                 // 0x06A0 (size: 0x8)
    TSubclassOf<class AResource> stoneResourceBP;                                     // 0x06A8 (size: 0x8)
    TSubclassOf<class AResource> beeResourceBP;                                       // 0x06B0 (size: 0x8)
    TSubclassOf<class AResource> shrubResourceBP;                                     // 0x06B8 (size: 0x8)
    TSubclassOf<class AResource> shroomResourceBP;                                    // 0x06C0 (size: 0x8)
    TSubclassOf<class AResource> handcartResourceBP;                                  // 0x06C8 (size: 0x8)
    TSubclassOf<class AResource> bigcartResourceBP;                                   // 0x06D0 (size: 0x8)
    TSubclassOf<class AResource> fishResourceBP;                                      // 0x06D8 (size: 0x8)
    class AWeatherMaster* WMaster;                                                    // 0x06E0 (size: 0x8)
    TSubclassOf<class AActor> ThunderLightBP;                                         // 0x06E8 (size: 0x8)
    class APMaster* PMaster;                                                          // 0x06F0 (size: 0x8)
    class UStaticMesh* SM_arrow;                                                      // 0x06F8 (size: 0x8)
    class UStaticMesh* SM_torch;                                                      // 0x0700 (size: 0x8)
    TArray<FPPStruct> PPoints;                                                        // 0x0708 (size: 0x10)
    class USnapDebris* SnapDebris;                                                    // 0x0738 (size: 0x8)
    float startleDist;                                                                // 0x0740 (size: 0x4)
    float startleDistSq;                                                              // 0x0744 (size: 0x4)
    class ASoundBuddy* SoundBuddy;                                                    // 0x0748 (size: 0x8)
    class UDataTable* DT_resourceSounds;                                              // 0x0750 (size: 0x8)
    TArray<class ASMUnit*> unitsMarkedForDestruction;                                 // 0x0758 (size: 0x10)
    class UParticleSystem* PS_dustPuff;                                               // 0x0768 (size: 0x8)
    class UParticleSystem* PS_BLoodSplatter;                                          // 0x0770 (size: 0x8)
    class UParticleSystem* PS_Thunder;                                                // 0x0778 (size: 0x8)
    class UParticleSystem* PS_dragDust;                                               // 0x0780 (size: 0x8)
    class UParticleSystem* PS_Impact_Smithing;                                        // 0x0788 (size: 0x8)
    class UParticleSystem* PS_Impact_Leaves;                                          // 0x0790 (size: 0x8)
    class UParticleSystem* PS_Impact_Wood;                                            // 0x0798 (size: 0x8)
    class UParticleSystem* PS_Impact_WoodDry;                                         // 0x07A0 (size: 0x8)
    class UParticleSystem* PS_Impact_Stone;                                           // 0x07A8 (size: 0x8)
    class UParticleSystem* PS_Impact_Plow;                                            // 0x07B0 (size: 0x8)
    class UParticleSystem* PS_Impact_PloughHeavy;                                     // 0x07B8 (size: 0x8)
    class UParticleSystem* PS_Impact_Sow;                                             // 0x07C0 (size: 0x8)
    class UParticleSystem* PS_fireBig;                                                // 0x07C8 (size: 0x8)
    class UParticleSystem* PS_fireGrid;                                               // 0x07D0 (size: 0x8)
    class UParticleSystem* PS_fireplaceSmoke;                                         // 0x07D8 (size: 0x8)
    class UParticleSystem* PS_chimneySmoke;                                           // 0x07E0 (size: 0x8)
    class UParticleSystem* PS_malthouseSmoke;                                         // 0x07E8 (size: 0x8)
    class UParticleSystem* PS_Splash;                                                 // 0x07F0 (size: 0x8)
    class UParticleSystem* PS_BucketSplash;                                           // 0x07F8 (size: 0x8)
    class UParticleSystem* PS_FlourPuff;                                              // 0x0800 (size: 0x8)
    class UParticleSystem* PS_ThunderHit;                                             // 0x0808 (size: 0x8)
    class UParticleSystem* PS_FieryHit;                                               // 0x0810 (size: 0x8)
    class UParticleSystem* PS_Bees;                                                   // 0x0818 (size: 0x8)
    class UParticleSystem* PS_TorchImpact;                                            // 0x0820 (size: 0x8)
    class UParticleSystem* PS_fallingLeaves;                                          // 0x0828 (size: 0x8)
    TArray<FUpgrade> upgrades;                                                        // 0x0830 (size: 0x10)
    int32 predictionCalculationDays;                                                  // 0x0840 (size: 0x4)
    float locationUpdateCounter;                                                      // 0x0844 (size: 0x4)
    TArray<class ASMBuildingMaster*> fieldArr;                                        // 0x0848 (size: 0x10)
    class UMaterialInterface* fieldRTmat;                                             // 0x0858 (size: 0x8)
    class UMaterialInterface* M_marketDecalMat;                                       // 0x0860 (size: 0x8)
    class UMaterialInterface* workDecalMat;                                           // 0x0868 (size: 0x8)
    class UMaterialInterface* moduleMaskMaterial;                                     // 0x0870 (size: 0x8)
    class UMaterialInterface* M_overlay_moduleMasks;                                  // 0x0878 (size: 0x8)
    class UMaterialInterface* M_overlay_fertility;                                    // 0x0880 (size: 0x8)
    int32 updatePosLag;                                                               // 0x0888 (size: 0x4)
    int32 lastUniqueID;                                                               // 0x088C (size: 0x4)
    TArray<int32> tradeableGoods;                                                     // 0x0890 (size: 0x10)
    TArray<int32> foodTypes;                                                          // 0x08A0 (size: 0x10)
    TArray<int32> spoilingGoodTypes;                                                  // 0x08B0 (size: 0x10)
    TArray<int32> granaryCollectionTypes;                                             // 0x08C0 (size: 0x10)
    TArray<class UStaticMesh*> treeMeshes;                                            // 0x08D0 (size: 0x10)
    TArray<class UStaticMesh*> shrubMeshes;                                           // 0x08E0 (size: 0x10)
    TArray<class UStaticMesh*> oreMeshes;                                             // 0x08F0 (size: 0x10)
    TArray<class ADepositDecal*> deposits;                                            // 0x0900 (size: 0x10)
    class UTexture2D* depositMask;                                                    // 0x0910 (size: 0x8)
    class UMaterialInterface* depositMaterial;                                        // 0x0918 (size: 0x8)
    class UMaterialInterface* depositMaterial_Salt;                                   // 0x0920 (size: 0x8)
    class UMaterialInterface* depositMaterial_Clay;                                   // 0x0928 (size: 0x8)
    TArray<FName> recruitmentPool;                                                    // 0x0930 (size: 0x10)
    TArray<class ASMBuildingMaster*> tradepoints;                                     // 0x0940 (size: 0x10)
    float basePrice;                                                                  // 0x0950 (size: 0x4)
    class UDataTable* DT_units;                                                       // 0x0958 (size: 0x8)
    float roadRadius;                                                                 // 0x0960 (size: 0x4)
    bool fogOfWar;                                                                    // 0x0964 (size: 0x1)
    FTimerHandle ambientVoiceHandle;                                                  // 0x0968 (size: 0x8)
    FTimerHandle taskUpdateHandle;                                                    // 0x0970 (size: 0x8)
    int32 taskIteratorID;                                                             // 0x0978 (size: 0x4)
    FTimerHandle projUpdateHandle;                                                    // 0x0980 (size: 0x8)
    class UDataTable* DT_paragraphs;                                                  // 0x0988 (size: 0x8)
    TArray<FRelation> relations;                                                      // 0x0990 (size: 0x10)
    float mapSize;                                                                    // 0x09A0 (size: 0x4)
    TSubclassOf<class UBannerAnimInstance> bannerAnimBP;                              // 0x09A8 (size: 0x8)
    TSubclassOf<class ASMBanner> bannerBP;                                            // 0x09B8 (size: 0x8)
    TArray<FOpenClaim> openClaims;                                                    // 0x09C0 (size: 0x10)
    int32 kingsFavour_daysLeft;                                                       // 0x09D0 (size: 0x4)
    TArray<class APawnCPP*> kingsFavourite;                                           // 0x09D8 (size: 0x10)
    class UMaterialInterface* ghostMaterial;                                          // 0x09E8 (size: 0x8)
    class UDataTable* DT_MercenaryCompanies;                                          // 0x09F0 (size: 0x8)
    TArray<FMercenaryCompany> availableMercs;                                         // 0x09F8 (size: 0x10)
    TArray<FMercenaryCompany> hiredMercs;                                             // 0x0A08 (size: 0x10)
    TArray<class UTexture2D*> availableLordPortraits;                                 // 0x0A18 (size: 0x10)
    TArray<class UTexture2D*> availableBanditPortraits;                               // 0x0A28 (size: 0x10)
    bool prepareRoadsForEditor;                                                       // 0x0A38 (size: 0x1)
    bool enableFertilityGrid;                                                         // 0x0A39 (size: 0x1)
    TArray<FLinearColor> fertilityGrid;                                               // 0x0A40 (size: 0x10)
    TArray<FLinearColor> fertilityGridLimits;                                         // 0x0A50 (size: 0x10)
    bool instancePositionUpdate;                                                      // 0x0A80 (size: 0x1)
    float deltaDiff;                                                                  // 0x0A84 (size: 0x4)
    TArray<int32> AI_buildingTypes;                                                   // 0x0A88 (size: 0x10)
    TArray<class ASMUnit*> livestockMerchants;                                        // 0x0A98 (size: 0x10)
    TArray<class ASMUnit*> freeMerchants;                                             // 0x0AA8 (size: 0x10)
    int32 traderTimer;                                                                // 0x0AB8 (size: 0x4)
    bool isConstructionAllowed;                                                       // 0x0ABC (size: 0x1)
    bool dustyMap;                                                                    // 0x0ABD (size: 0x1)
    bool spawnMerchants;                                                              // 0x0ABE (size: 0x1)
    bool canRain;                                                                     // 0x0ABF (size: 0x1)
    bool canSnow;                                                                     // 0x0AC0 (size: 0x1)
    FTimerHandle updateArmiesHandle;                                                  // 0x0AC8 (size: 0x8)
    TArray<class ASmoothForce*> smoothForces;                                         // 0x0AD0 (size: 0x10)
    TSubclassOf<class ADecalActor> bloodDecalBP;                                      // 0x0AE0 (size: 0x8)
    TArray<int32> heads_combat;                                                       // 0x0AE8 (size: 0x10)
    bool drawBattleDebug;                                                             // 0x0B00 (size: 0x1)
    bool drawImportantDebug;                                                          // 0x0B01 (size: 0x1)
    bool drawPathfindingDebug;                                                        // 0x0B02 (size: 0x1)
    bool drawDebg_roadGuidePoints;                                                    // 0x0B03 (size: 0x1)
    class UMaterialInterface* plagueDecalMat;                                         // 0x0B08 (size: 0x8)
    TArray<FString> maleNames;                                                        // 0x0B10 (size: 0x10)
    bool spawnAIPlayers;                                                              // 0x0B20 (size: 0x1)
    bool declareWarInstant;                                                           // 0x0B21 (size: 0x1)
    bool AI_canBuild;                                                                 // 0x0B22 (size: 0x1)
    bool unitJustSpawned;                                                             // 0x0B23 (size: 0x1)
    TArray<FVein> veins;                                                              // 0x0B28 (size: 0x10)
    class UMaterialInterface* boundsDecalMatRoadsOK;                                  // 0x0B38 (size: 0x8)
    class UStaticMesh* sidewalkMesh;                                                  // 0x0B40 (size: 0x8)
    class UStaticMesh* SM_fence;                                                      // 0x0B48 (size: 0x8)
    class UStaticMesh* SM_fence_B;                                                    // 0x0B50 (size: 0x8)
    class UStaticMesh* SM_plankFence;                                                 // 0x0B58 (size: 0x8)
    class UStaticMesh* townwallMesh;                                                  // 0x0B60 (size: 0x8)
    class UStaticMesh* SM_palisade;                                                   // 0x0B68 (size: 0x8)
    class UStaticMesh* SM_stoneWall;                                                  // 0x0B70 (size: 0x8)
    TArray<class UStaticMesh*> SM_stoneWall_pieces;                                   // 0x0B78 (size: 0x10)
    TArray<class UStaticMesh*> SM_stoneWall_platforms;                                // 0x0B88 (size: 0x10)
    TArray<class UStaticMesh*> doorMeshes;                                            // 0x0B98 (size: 0x10)
    TArray<class UStaticMesh*> stairMeshesWooden;                                     // 0x0BA8 (size: 0x10)
    TArray<class UStaticMesh*> stairMeshesStone;                                      // 0x0BB8 (size: 0x10)
    class UStaticMesh* SM_storage_log;                                                // 0x0BC8 (size: 0x8)
    class USkeletalMesh* SM_banner;                                                   // 0x0BD0 (size: 0x8)
    class UDataTable* DT_Upgrades;                                                    // 0x0BD8 (size: 0x8)
    class UStaticMesh* borderSegmentMesh;                                             // 0x0BE0 (size: 0x8)
    class UStaticMesh* SM_FatRoad;                                                    // 0x0BE8 (size: 0x8)
    class UStaticMesh* SM_shrubbyMesh;                                                // 0x0BF0 (size: 0x8)
    TArray<int32> snapPointsToVerify;                                                 // 0x0BF8 (size: 0x10)
    TArray<int32> snapPointsToBeingVerifiedAsync;                                     // 0x0C08 (size: 0x10)
    TArray<FFieldSnapPoint> fieldSnapPoints;                                          // 0x0C18 (size: 0x10)
    TArray<class UHierarchicalInstancedStaticMeshComponent*> hismPtrCache;            // 0x0C28 (size: 0x10)
    float lastVeloUpdTime;                                                            // 0x0C38 (size: 0x4)
    FTimerHandle propagationHandle;                                                   // 0x0C40 (size: 0x8)
    TArray<class UParticleSystemComponent*> spawnedVfx;                               // 0x0C48 (size: 0x10)
    TArray<FDefferedMeshLoadItem> deferredMeshLoadList;                               // 0x0C58 (size: 0x10)
    TArray<FObstacle2D> obstacles;                                                    // 0x0C78 (size: 0x10)
    TArray<FObstacle2D> bridgeZones;                                                  // 0x0C88 (size: 0x10)
    TArray<FObstacle2D> cachedBuildingBorderRoadObstacles;                            // 0x0C98 (size: 0x10)
    class URuntimeVirtualTexture* RVT_Landscape;                                      // 0x0CA8 (size: 0x8)
    class URuntimeVirtualTexture* RVT_RoadMask;                                       // 0x0CB0 (size: 0x8)
    class URuntimeVirtualTexture* RVT_Heightmap;                                      // 0x0CB8 (size: 0x8)
    class URuntimeVirtualTexture* RVT_ModuleMask;                                     // 0x0CC0 (size: 0x8)
    class URuntimeVirtualTexture* RVT_SnowDisplacementMask;                           // 0x0CC8 (size: 0x8)
    class UMaterialInterface* fieldMaskMaterial;                                      // 0x0CD0 (size: 0x8)
    class UMaterialInterface* marketMaskMaterial;                                     // 0x0CD8 (size: 0x8)
    class UMaterialInterface* vegetableFieldMat;                                      // 0x0CE0 (size: 0x8)
    TArray<int32> cliffObstacles;                                                     // 0x0CE8 (size: 0x10)
    TArray<FRoadGuidePoint> roadGuidePoints;                                          // 0x0CF8 (size: 0x10)
    TArray<int32> roadGuidePointsToVerify;                                            // 0x0D08 (size: 0x10)
    class UDataTable* DT_BuildingPartAssemblies;                                      // 0x0D18 (size: 0x8)
    class UDataTable* DT_BuildingPartMeshes;                                          // 0x0D20 (size: 0x8)
    class UDataTable* DT_gameplayStaticMeshes;                                        // 0x0D28 (size: 0x8)
    TMap<class FName, class FSoftClassPath> independentBuildingAssemblies;            // 0x0D30 (size: 0x50)
    TMap<class FName, class FSoftClassPath> animatedBuildingBlueprints;               // 0x0D80 (size: 0x50)
    TArray<class UStaticMesh*> plantMeshes;                                           // 0x0DD0 (size: 0x10)
    TArray<class UStaticMesh*> lazyBuildings;                                         // 0x0DE0 (size: 0x10)
    class UStaticMesh* SM_wheat;                                                      // 0x0DF0 (size: 0x8)
    class UStaticMesh* SM_flax;                                                       // 0x0DF8 (size: 0x8)
    class UStaticMesh* SM_willowBranches;                                             // 0x0E00 (size: 0x8)
    class UStaticMesh* SM_herbs;                                                      // 0x0E08 (size: 0x8)
    class UStaticMesh* SM_appleTree;                                                  // 0x0E10 (size: 0x8)
    class UStaticMesh* SM_appleTree_old;                                              // 0x0E18 (size: 0x8)
    int32 newChallengeID;                                                             // 0x0E20 (size: 0x4)
    TArray<FChallenge> challenges;                                                    // 0x0E28 (size: 0x10)
    TArray<class ASMBuildingMaster*> retinueSpawnRequests;                            // 0x0E38 (size: 0x10)
    TArray<class UTexture2D*> regimentSymbols;                                        // 0x0E68 (size: 0x10)
    class UStaticMesh* empty_instance;                                                // 0x0E78 (size: 0x8)
    class UStaticMesh* SM_dirtPlane;                                                  // 0x0E80 (size: 0x8)
    TArray<class UStaticMesh*> SM_AnimalTraps;                                        // 0x0E88 (size: 0x10)
    TArray<class UStaticMesh*> wallMeshes;                                            // 0x0E98 (size: 0x10)
    class ADirector* questDirector;                                                   // 0x0EA8 (size: 0x8)
    float lastObstructionYaw;                                                         // 0x0EB0 (size: 0x4)
    float ppGridDensity;                                                              // 0x0EBC (size: 0x4)
    FTimerHandle fertilityRedrawHandle;                                               // 0x0EE0 (size: 0x8)
    TArray<int32> fertilityGridUpdateRequests;                                        // 0x0EE8 (size: 0x10)
    TArray<FConnectionCache> roadConnectionCache;                                     // 0x0EF8 (size: 0x10)
    class UStaticMesh* workAreaMesh;                                                  // 0x0F08 (size: 0x8)
    class UAnimSequenceBase* testAnimClip;                                            // 0x0F10 (size: 0x8)
    class USkeletalMesh* testSzkeletalMesh;                                           // 0x0F18 (size: 0x8)
    class UMaterialInterface* marketfieldMat;                                         // 0x0F20 (size: 0x8)
    class UMaterialInterface* roadConnectionMat;                                      // 0x0F28 (size: 0x8)
    TArray<class ASMBuilding*> spawnAsyncConstrBpQueue;                               // 0x0F30 (size: 0x10)
    FTimerHandle spawnAsyncConstrBPHandle;                                            // 0x0F40 (size: 0x8)
    class UStaticMesh* wallMarker;                                                    // 0x0F48 (size: 0x8)
    class UStaticMesh* gatehousePreviewMesh;                                          // 0x0F50 (size: 0x8)
    class UStaticMesh* randomFormationSocketMesh;                                     // 0x0F58 (size: 0x8)
    TArray<FVector> randomFormationPositions;                                         // 0x0F60 (size: 0x10)
    bool writeUnitDebugLogs;                                                          // 0x0F70 (size: 0x1)
    TArray<FName> drawDebugFlags;                                                     // 0x0F78 (size: 0x10)
    TArray<int32> disableJobIDs;                                                      // 0x0F88 (size: 0x10)
    bool writeDebugLogs;                                                              // 0x0F98 (size: 0x1)
    TArray<FString> debugLog_AI_general;                                              // 0x0FA0 (size: 0x10)
    TArray<FString> debugLog_AI_tactics;                                              // 0x0FB0 (size: 0x10)
    bool shouldUpdateDebugLog_generalAI;                                              // 0x0FC0 (size: 0x1)
    bool shouldUpdateDebugLog_tacticsAI;                                              // 0x0FC1 (size: 0x1)
    float gameSpeedScheduled;                                                         // 0x0FC4 (size: 0x4)
    float gameSpeedBeforePause;                                                       // 0x0FC8 (size: 0x4)
    bool isGameSpeedScheduled;                                                        // 0x0FCC (size: 0x1)
    float locomotionTicksAdjusted;                                                    // 0x0FE0 (size: 0x4)
    float locomotionTicksAdjustedPrevious;                                            // 0x0FE4 (size: 0x4)
    bool useLegacyVATM;                                                               // 0x0FE8 (size: 0x1)
    TMap<class EUnitRole, class FSoftClassPath> unitBlueprints;                       // 0x0FF0 (size: 0x50)
    TArray<FPopupCache> PopupCache;                                                   // 0x1090 (size: 0x10)
    FSessionAchievementData SessionAchievementData;                                   // 0x10A0 (size: 0x30)
    TArray<FSpatialCell> SpatialGrid;                                                 // 0x10D0 (size: 0x10)
    TArray<FPathRequest> asyncPathRequestsPending;                                    // 0x1100 (size: 0x10)
    bool asyncLinkerCreated;                                                          // 0x1188 (size: 0x1)
    TArray<FQueuedLinkerDataEdit> queuedLinkerDataEdits;                              // 0x1190 (size: 0x10)
    TArray<FQueuedPathfinderDataEditCollection> pathfinerEditCollections;             // 0x11A0 (size: 0x10)
    bool isNightAndAffectsGameplay;                                                   // 0x11B0 (size: 0x1)
    TArray<FProceduralGroundCoverData> proceduralGroundCoverTypes;                    // 0x11B8 (size: 0x10)
    TArray<class UInstancedStaticMeshComponent*> proceduralGroundCover;               // 0x11C8 (size: 0x10)
    int32 numberOfCameraGroundCoverCellColumnsHalf;                                   // 0x11D8 (size: 0x4)
    float cameraBasedGroundCoverCellSize;                                             // 0x11DC (size: 0x4)
    FTimerHandle cameraBasedGroundCoverHandle;                                        // 0x11E0 (size: 0x8)
    TMap<class FVector, class EGroundCoverCategory> biomeCache;                       // 0x11E8 (size: 0x50)
    int32 cameraBasedGroundCoverComponentIterator;                                    // 0x1238 (size: 0x4)
    bool cameraBasedGroundCoverComponentFlipFlop;                                     // 0x123C (size: 0x1)
    TArray<FBox2D> groundCoverOcclusionBoxes;                                         // 0x1240 (size: 0x10)
    class UStaticMesh* groundCoverDistributionSocketMesh;                             // 0x1250 (size: 0x8)
    TArray<FVector> groundCoverDistributionSocketLocations;                           // 0x1258 (size: 0x10)
    TArray<EGroundCoverCategory> biomeCacheGrid;                                      // 0x1268 (size: 0x10)
    TArray<int32> biomeCacheUpdateRequests;                                           // 0x1278 (size: 0x10)
    FTimerHandle biomeCacheUpdateSlowHandle;                                          // 0x1288 (size: 0x8)
    FVector lastGroundCoverUpdateCameraLocation;                                      // 0x1290 (size: 0x18)
    TMap<FVector, float> groundCoverLandscapeHeightCache;                             // 0x12A8 (size: 0x50)
    TArray<FTransformPairCollection> groundCoverLandscapeTransformCacheGrid;          // 0x12F8 (size: 0x10)
    class UStaticMesh* unitBannerMesh;                                                // 0x1308 (size: 0x8)
    class UMaterialInterface* bouncedLightMaterial;                                   // 0x1318 (size: 0x8)
    TArray<FCollisionCluster> collisionClusters;                                      // 0x1330 (size: 0x10)
    TArray<class UVARuntimeComponent*> birdFlockVARuntimeComponents;                  // 0x1350 (size: 0x10)
    TArray<FName> tutorialsLeftToShow;                                                // 0x1368 (size: 0x10)
    TArray<FGood> foreignMarketSupply;                                                // 0x1378 (size: 0x10)
    TArray<class ASMBuildingMaster*> landscapeDeformationBuildings;                   // 0x13A8 (size: 0x10)
    TArray<FTradeLogEntry> tradeLog;                                                  // 0x13B8 (size: 0x10)
    TMap<class ASMBuildingMaster*, class USphereReflectionCaptureComponent*> reflectionSpheres; // 0x13E8 (size: 0x50)

    void verifyRoadGuidePoints();
    void updateVerifySnapPointsQueue();
    void updateUnitTasks();
    void updateSquadEquipmentStats(const int32& squadID);
    void updateRegionsAndBorders(bool inEditor);
    void updateRegionNamesTxt();
    void updatePropagation();
    void updateProjectileManager();
    void updatePlayerRequests();
    void updatePathfindersGameThread();
    void updateOpenClaims();
    void updateKingsFavourite();
    void updateFreeMerchants();
    void updateCullingMaskCacheForCell(int32 GridId, FVector pos3d);
    void updateChallengeStatus(FChallenge& Challenge);
    void updateChallengeDay();
    void updateAsyncSnapPointLinkerGameThread();
    void updateAllPawnsCommandedSquadsAndEnemies();
    void updateAllPawnsArmies();
    void updateAllChallenges();
    void triggerExampleBattle();
    bool Triangulate_Process(const TArray<FVector>& contour, TArray<FVector>& Result);
    bool Triangulate_InsideTriangle(float Ax, float Ay, float bX, float bY, float Cx, float Cy, float Px, float Py);
    float Triangulate_Area(const TArray<FVector>& contour);
    void triangulate(TArray<FVector>& Vertices, TArray<FTriangle>& outTriangles);
    bool triangleIntersectsTriangle(const TArray<FVector>& T0, const TArray<FVector>& T1);
    bool toppleRegionalTree(class ARegion* Region, int32 regionalTreeArrayIndex, class ASMUnit* toppler);
    float terrainHeight(const FVector& Location, bool landscapeOnly, bool addPitOffset);
    TArray<FVector> subdivideSmoothBorder(const TArray<FVector>& fieldPoints);
    void splitRoadWithBorder(class ARoad* roadToSplit, const TArray<FVector>& fieldPoints);
    void spawnWildAnimals(const FVector& Center, class ARegion* originRegion, int32 herdSize);
    void spawnUpgradeConstructionBPAsync(class ASMBuildingMaster* building, class ASMBuilding* buildingPart, const int32& hismID);
    class ASMUnit* SpawnUnit(EUnitRole unitRole, const FVector& Location, const FRotator& Rotation, class APawnCPP* ownerPawn, int32 squadID, const FEquipment& Equipment, EUnitRole currentRoleOverride);
    void spawnStump(const FVector& Pos, FString meshName);
    void spawnSingleBuildingMeshAsync(int32 iType, class ASMBuildingMaster* buildingMaster, const FVector& Location, const FRotator& Rotation, const FVector& Scale, bool isFullbuilding, bool isMainbuilding, int32 extensionSlot, const TArray<FName>& actorTags);
    void spawnRaiders(int32 numSquads, FVector armyCenter);
    class APawnCPP* spawnPlayer(const FTransform& spawnerTransf, bool isAI, bool startingSetup);
    class AResource* spawnOre(class ARegion* Region, const FTransform& trans, TSubclassOf<class AResource> resourceBP);
    class APawnCPP* spawnNewAILord(FString lordsName, bool isFemale, class UTexture2D* Portrait, bool canBuild);
    void spawnMerchantHerd(class ASMUnit* livestockMerchant);
    class ASMUnit* spawnLivestockMerchant(class ASMBuildingMaster* nearBuilding);
    class ASMUnit* spawnFreeMerchant(class ARegion* attachedToRegion);
    void spawnConstructionBPAsync(class ASMBuilding* buildingPart, const int32& iType);
    int32 spawnCompleteUnit(const FName& tempName, const FVector& Location, const FRotator& Rotation, class APawnCPP* ownerPawn, int32 companyID, int32 arrivesInDays);
    void spawnBuildingAssembleBPAsync(class ASMBuildingMaster* buildingMaster, const FSoftClassPath& BlueprintPath, const FTransform& transf, int8 extensionID, TArray<FName> actorTags);
    class ASMBuildingMaster* SpawnBuilding(int32 bType, const FVector& Location, const FRotator& Rotation);
    void spawnBloodDecal(const FVector& Position);
    void spawnBanditCamp();
    void spawnAsyncContstrBPLazy();
    TArray<int32> spawnArmy(const FVector& Pos, const TArray<FName>& unitTypes, class APawnCPP* ownerPawn, const int32& companyID, const int32& arrivesInDays);
    class ASMUnit* spawnAnimal(EUnitRole animalType, const FVector& animalSpawnPos, class ARegion* Region);
    void snapFieldPointCollide(FFieldPoint& FieldPoint, const TArray<FFieldPoint>& fieldPoints, float snapDistSq, class ASMBuildingMaster* fieldBuilding, int32 pointID);
    void snapFieldPoint(FFieldPoint& FieldPoint, const TArray<FFieldPoint>& fieldPoints, float snapDistSq, class ASMBuildingMaster* fieldBuilding, int32 pointID, const TArray<FFieldSnapPoint>& fsp);
    void snapAngleToNearestRoadIfClose(const FVector& Pos, FRotator& outAngle);
    TArray<FVector> smoothOutFieldBorder(TArray<FFieldPoint>& fieldPoints, float snapDistSq, TArray<FFieldSnapPoint>& fieldSnapPoints, const TArray<FObstacle2D>& cachedObstacles, class ARTSMultiEngineCPP* masterPtr, EPlotCollisionCheck plotCollisionCheck);
    void simplifyPolygon(TArray<FVector>& Vertices);
    TArray<FVector> shrinkPolygon(const TArray<FVector>& Vertices, const TArray<FVector>& triangulated, const float& shrinkAmt);
    void showPP();
    void shiftEditCommandIndices_PPoints(int32 deletedIndex);
    void shiftEditCommandIndices_Obstacles(int32 deletedIndex);
    void shiftEditCommandIndices_FieldSnapPoints(int32 deletedIndex);
    void shiftEditCommandIndices_BorderObstacles(int32 deletedIndex);
    void severRoadGuideLinks(const TArray<FVector>& triangulatedBorder, const FBox2D& borderBounds);
    void setupUpgrades();
    void setupStats();
    void setTradeable();
    void setRegionsManor(class ASMBuildingMaster* manor);
    void setGameSpeed(float newGameSpeed);
    void setGameplayStaticMeshByNameAsync(const FName& meshName, class UActorComponent* MeshComponent);
    void setDay(int32 day);
    bool segmentIntersectsTriangle(const FSegment& line, const TArray<FVector>& Tri);
    bool segmentIntersectsSphere(const FVector& A, const FVector& B, const FVector& Origin, float Radius);
    bool segmentCollidesWithAnyBuilding(const FSegment& Segment, const FBox2D& segmentBounds, bool countRoadPointArea);
    void respawnCameraBasedGroundCover();
    void resetCoreTimers();
    void rerollMercenaries();
    void repaintRegionMask(class ARegion* Region);
    void removeSpawnPoint(class AVillageSpawner* chosenSpawnpoint);
    void removePathPoints(TArray<int32>& ppsToRemove);
    void removeObstacleIDs(TArray<int32> obsToRemove);
    void removeDuplicateVectors(TArray<FVector>& vecArr, const float& minDistSq);
    void removeAllRoadGuidePointsCreatedBy(class AActor* Actor);
    void removeAllPPsCreatedBy(class AActor* Actor);
    void removeAllObstaclesCreatedBy(class AActor* Actor);
    void removeAllFieldSnapPointsCreatedBy(class AActor* Actor);
    void removeAllBorderObstaclesCreatedBy(class AActor* Actor);
    void registerNewRoad(class ARoad* Road, bool UpdateCache);
    void regenerateSnapLinks(const FVector& Center);
    void refillMercenaries();
    void redrawForestMask();
    void redrawFertilitySlow();
    void redrawFertilityComplete();
    void redrawDesirability();
    void randomizeRecruitmentPool();
    void pushSnapPoint(const FVector& pointPos, const FVector& Direction);
    void projectCircularBorder(const FVector& Center, const float& diameter, TArray<FVector>& outSmoothBorder, TArray<FVector>& outBorder);
    TArray<FVector> projectBorder(FVector2D Dimensions, FTransform Transform);
    bool pointCollidesWithBuildingBorder(const FVector& Point);
    class UParticleSystemComponent* playVfx(class UParticleSystem* System, const FVector& Pos, const FRotator& rot);
    void playResourceFx(int32 Type, bool putdown, const FVector& Pos);
    void playImpact(const int32& Type, const FVector& Location, const FRotator& EmitterRotation, const bool& particleEffect, const float& volumeMul);
    void playAmbientVoice();
    void placeSnowStep(const FVector& Pos);
    void placePlowDirt(const FVector& Pos, float power, bool Additive);
    void placePathSegment(const FSegment& Segment);
    void placePath(const FVector& Location);
    void placeHole(FVector& Location, float& Rotation, class UTexture2D* Texture, const FVector2D& tsize);
    void placeFreshDirt(const FVector& Location, const float& Rotation, const FVector2D& tsize, const uint8& Mode);
    void placeComplexField(TArray<FVector> fieldPoints, const FVector& Center, const int8& Mask, const bool& isMarket);
    void pickNewLeader(int32 squadID);
    FVector pickNearestPos(const FVector& Pos, const TArray<FVector>& Options);
    float pairToFloat(const FVector2D& P);
    float onTheSameSide(FVector P, FVector Q, FVector A, FVector B);
    void loadConstructionBlueprints(class ASMBuildingMaster* building, const TArray<FSavedCastleModule>& blueprintMap);
    bool isSpawnPosTaken(const FTransform& trans);
    bool isSafeToSpawn(const FVector& Pos, float Radius);
    bool isResourceFood(const int32& resourceType);
    bool isPointWithinPlayableMapBounds(const FVector& Point);
    bool isPointWithinMapBounds(const FVector& Point);
    bool isPointWithinAnyBuildingBounds(const FVector& Point);
    bool isPointOnVein(const FVector& Point, const TArray<FVein>& waterVeins);
    bool isPathOutsideRoad(const FVector& Source, const FVector& Target);
    bool isHarvestSeason();
    bool isBuildingTypeValid(int32 buildingID);
    bool isBuildingConnectedToTradeNetwork(const class ASMBuildingMaster* building);
    bool isBorderCollidingWithRoad(const FBBorder& Border, class ARoad* Road, const FBox2D& borderBounds);
    uint8 isAreaObstructedByUnits(const FVector& Pos, const float& radiusSq, class ASMUnit* outUnit);
    void invalidateBiomeCache(const FBox2D& Bounds);
    bool intersectTwoComplexBorders(const TArray<FVector>& borderA, const TArray<FVector>& borderB, FVector& Out);
    bool intersectRoads(const FVector& A, const FVector& B, const bool& Center, FVector& Out, bool simple, const FBox2D& segmentBounds);
    bool intersectComplexBorders(const FBBorder& borderA, const TArray<FVector> borderB, FVector& Out);
    bool intersectBorders(const FBBorder& borderA, const FBBorder& borderB, FVector& Out);
    void initChallenge(class APawnCPP* challengedPawn, class APawnCPP* challengedBy, class ARegion* Region, const FVector& Center, bool cancelClaim);
    TArray<int32> hireMercs(FMercenaryCompany company, class APawnCPP* pawnRef);
    bool hasItem(int32 ItemId);
    float getWindTimeAdjusted();
    FVector4 getWeatherDetails();
    FUpgrade getUpgradeData(int32 upgradeID);
    FColor getUnusedPlayerColor();
    FUnitTemplate getUnitTemplateByName(const FName& unitType);
    int32 getUnitCount();
    int32 getTradeValue(class ARegion* Region, const FName& Filter, int32 startDay, int32 endDay);
    TArray<FTradeLogEntry> getTradeLogSummedTradedGoods(class ARegion* Region, int32 startDay, int32 endDay);
    class UStaticMesh* getSocketMeshForHISM(const int32& hismID);
    float getSegmentToBorderParallelFactor(const FSegment& Segment, const TArray<FVector>& SmoothBorder, bool accountForDistance);
    TSubclassOf<class AResource> getResourceBP(const FName& resType);
    bool getRelationTags(class APawnCPP*& pawnA, class APawnCPP*& pawnB, TArray<FName>& relationTags);
    uint8 getRegionIndex(class ARegion* Region);
    class ARegion* getRegionFromIndex(uint8 regionIndex);
    class ARegion* getRegionByPos(const FVector& Pos, bool skipBoundCheck);
    void getRandomSquad(FSquad& newSquad);
    int32 getRandomPeasantClothes();
    float getRandomObstructionYaw();
    float getRandomObstructionForce();
    int32 getRandomHead(bool isWoman, bool combat);
    int32 getRandomHat(bool isWoman, bool isBurgher);
    FTransform getRandomAvailableSpawnTransform();
    int32 getPreviousMonthStartDay();
    int32 getPreviousMonthEndDay();
    FVector getPointAlongSmoothBorder(const float& Distance, const TArray<FVector>& SmoothBorder);
    class APawnCPP* getPawnBySetupIndex(int32 Index);
    float getPathPrice(const FVector& A, const FVector& B);
    bool getParagraphData(const FName& paragraphName, FParagraph& paragraphData);
    FVector getNearestUnobstructedMapEdgePos(const FVector& nearPos, float boundExtents);
    FVector getNearestMapEdgePos(const FVector& nearPos, bool openOnly);
    class ASMBuildingMaster* getNearestBuildingTo(const FVector& Location, TArray<class ASMBuildingMaster*> buildingsToCheck);
    FString getNameFromSpawnPos(const FVector& Pos);
    int32 getMonthsTotal();
    float getModuleRadiusForBuildingID(int32 buildingID);
    void getLoadedConstructionTemplate(const TSoftClassPtr<AConstruction>& constructionAsset, TSubclassOf<class AConstruction>& outConstructionTemplate);
    FVector getLandscapeNormalAveraged(const float& Radius, const FVector& Center);
    FVector getLandscapeNormalArrayAveraged(TArray<FVector> Locations);
    FVector getLandscapeNormal(class ALandscapeProxy* Landscape, const FVector& Location);
    TArray<FItem> getItems();
    FItem getItem(int32 ItemId);
    class AHudCPP* GetHUD();
    int32 getHismRepresentationForItem(int32 ItemType, bool isCombat);
    FVector GetHeight(const FVector& Location, bool& isOnBuilding);
    int32 getGridIDforBiomeCacheAtLocation(const FVector& Location);
    float getGlobalDemandPriceMultiplierForGood(int32 goodType);
    float getGameTimeAdjusted();
    FVector getFieldDominatingAngle(const TArray<FVector>& fieldBorderPoints);
    int32 getFertilityIDandPos(const FVector& Pos, int32& outX, int32& outY);
    int32 getFertilityID(const FVector& Pos);
    float getFertilityAtGridID(int32 GridId, ECropType cropType);
    float getFertility(const FVector& Pos, ECropType cropType);
    void getFarmingInfo(class ASMBuildingMaster* building, bool& isPlowing, bool& allPlowed, bool& allHarvested);
    class UStaticMesh* getFallenTreeMeshForTree(const class UStaticMesh* treeMesh, FString& stumpName);
    float getDistanceSquaredBetweenSmoothSegments(const TArray<FVector>& smoothA, const TArray<FVector>& smoothB);
    int32 getDefaultRepetitionsForAnimID(int32 animID, class UDataTable* AnimSet);
    FEquipment getDefaultMilitiaEquipmentForUnitTemplate(const FName& TemplateName);
    TArray<FVector> getDeerLairLocations();
    int32 getDaysTotal();
    int32 getDayOfTheYear();
    int32 getCurrentMonth();
    void getConstructionBP(const int32& HISM, TSubclassOf<class AConstruction>& ConstructionBP);
    bool getConnectionCache(const class ASMBuildingMaster* bldA, const class ASMBuildingMaster* bldB, FConnectionCache& outCache);
    class ABattlefield* getClosestBattlefield(const FVector& Center);
    EGroundCoverCategory getCachedBiomeAtLocation(const FVector& Location);
    FSoftObjectPath getBuildingPartMeshPath(int32 iType);
    float getBuildingInternalOffsetFromWall(int32 bType);
    FStat getBuildingData(int32 buildingID);
    class ASMBuildingMaster* getBuildingByID(int32& UniqueID);
    float getBorderLength(const TArray<FVector>& Border);
    void getBiomeCacheXYandPos(int32 GridId, int32& outX, int32& outY, FVector& outPos);
    EGroundCoverCategory getBiomeAtLocation(const FVector& Location);
    FUnitStat getAverageUnitStat(const FName& Temp);
    FUnitStat getAverageEquipmentStat(const TArray<int32>& equipmentItems);
    float getApprovalRateForFactor(EApprovalFactorType Type);
    class UDataTable* getAnimsetDataTable(const FName SetName);
    FName getAnimNameForAnimID(int32 animID, class UDataTable* AnimSet, int32 variationID);
    EUnitRole getAnimalRoleFromGoodType(int32 goodType);
    TArray<FTradeLogEntry> getAllTradeLogEntriesForRegion(class ARegion* Region);
    void generateWaterVeins();
    void generateFertilityValues();
    void fulfillKingsFavour();
    bool fitModuleTransformAlongBorder(const TArray<FVector>& smoothSegment, const TArray<FVector>& colliderSegment, float distanceAlong, float moduleWidthHalf, float moduleHeightHalf, FTransform& OutTransform, float collisionDistanceIncrementValue, int32 maxAttempts, TArray<FVector> extraCollisionBorder);
    void finishSpawningUpgradeConstructionBP(class ASMBuildingMaster* building, class ASMBuilding* buildingPart, TSoftClassPtr<AConstruction> constructionAsset);
    void finishSpawningSoloBuildingAsync(FBuildingSpawnParams Params);
    void finishSpawningConstructionBP(class ASMBuilding* buildingPart, TSoftClassPtr<AConstruction> constructionAsset);
    void finishSpawningBuildingAssembleBP(class ASMBuildingMaster* buildingMaster, FSoftClassPath SoftClassPath, FTransform transf, int8 extensionID, TArray<FName> actorTags);
    void finishLoadingGameplayStaticMesh(FSoftObjectPath ObjectPath, class UActorComponent* MeshComponent);
    class AUnitSpawner* findUnitSpawnerWithTag(const FName& Tag);
    class ASMUnit* findUnitByPos(const FVector& Pos);
    bool findSnapPath(const FVector& A, const FVector& B, TArray<FVector>& snapPath, const TArray<FVector>& currentBorder, TArray<FFieldSnapPoint>& fsp, const TArray<FObstacle2D>& cachedObstacles, const TArray<int32>& relevantFspIDs, EPlotCollisionCheck internalCollisionCheck);
    TArray<FVector> findRoadPath(const FVector& Source, const FVector& Target);
    class AResource* findResourceByPos(const FVector& Pos);
    class ARegion* findRegionByName(FString Name);
    class ARegion* findRegionByID(const int32& regionID);
    class APawnCPP* findOrSpawnBanditPawn(const FVector& nearLocation);
    int32 findLinkIDByPos(const FVector& Pos);
    FVector findGoodSquadMoveTargetNear(const FVector& Location);
    FVector findCollisionNormal(FVector& realPos, FVector& NewPosition);
    void find_garbage();
    void finalizeChallenge(FChallenge& Challenge, class APawnCPP* victoriousPawn);
    int32 extractBTypeFromTag(const class AActor* Actor);
    int32 extractBTypeFromComponentTag(const class UStaticMeshComponent* Component);
    void eraseBuildingReferences(class ASMBuildingMaster* building);
    void eraseArmy(FArmy Army);
    bool doTwoSmoothBordersIntersect(const TArray<FVector>& borderA, const TArray<FVector>& borderB);
    bool doesTriangulatedBorderCollideWithOneOfTheRoads(const FBox2D& bounds2d, const TArray<FVector>& triangulatedBorder, const TArray<class ARoad*> roadsToCheck);
    bool doesTriangulatedBorderCollideWithAnyRoad(TArray<FVector>& Border, TArray<FVector>& triangulatedBorder, const FVector& Center);
    bool doesSegmentOverlapComplexBorder(const FSegment& Segment, const TArray<FVector>& Border, const TArray<FVector>& triangulated);
    bool doesSegmentIntersectRectangle(const FSegment2D& Segment, const FBox2D& rect);
    void disbandMercCompany(int32 companyID);
    void destroyUnit(class ASMUnit* unit);
    void destroyResource(class AResource* Resource);
    void destroyDeposit(class ADepositDecal* deposit);
    bool cross2(const TArray<FVector>& Points, const TArray<FVector>& Triangle);
    void createAsyncPathfinder();
    void createAsyncLinker();
    FVector2D convertPosToImgPos(const FVector& Pos, float TextureSize);
    void clampFertilityValuesForDirtyCells();
    bool checkPointWithinComplexBorder(const FVector& Point, const TArray<FVector>& Points, const FVector& Center);
    bool checkPointWithinBorder(const FVector& Point, const FBBorder& Border);
    FVector2D checkIntersectionPoint(const FVector2D& A, const FVector2D& B, const FVector2D& C, const FVector2D& D);
    bool checkIntersection(const FVector2D& A, const FVector2D& B, const FVector2D& C, const FVector2D& D);
    bool checkIfFieldIntersectsInternally(const FSegment& newSegment, const TArray<FFieldPoint>& fieldPoints, const FSegment& skipSegment);
    bool checkComplexFieldCollision(const TArray<FVector>& fieldSmoothPoints, class ARegion* Region, const FVector& fieldCenter, bool closed, TArray<int32> ignoreBTypes);
    bool checkComplexBorderVsRoad(const TArray<FVector>& Border, const TArray<FVector>& borderTriangulated, class ARoad* Road, const FVector& Center, const bool& cached, bool closed);
    void changeFertilityCellUnclamped(int32 cellID, int32 cropType, float change);
    void changeFertilityCell(int32 cellID, int32 cropType, float change);
    void changeFertility(const FVector& Pos, int32 cropType, float change);
    void cancelAsyncFieldSnapPointLinkGeneration();
    float calculateWindmillEfficiency(const FVector& Pos);
    FBBorder calculateBorderBasedOnStats(const FVector& Location, const FRotator& Rotation, int32 bType);
    void cacheBiomeToGrid();
    bool breedAnimal(class ASMUnit* father);
    void biomeCacheProcessUpdateRequestsTimeSliced();
    bool areBuildingsConnectedByRoad(const class ASMBuildingMaster* buildingA, const class ASMBuildingMaster* buildingB);
    float areaOfTriangle(FVector A, FVector B, FVector C);
    bool anyCivInRange(const FVector& Pos, const float& rangeSq, bool& isBuilding);
    bool anyBorderObstacleAdditionsQueued();
    void alignToGroundQuatFast(FQuat& worldRotation, const FVector& groundNormal);
    void alignRotationToGround(FRotator& worldRotation, const FVector& groundNormal);
    int32 addSquad(const FSquad& newSquad);
    int32 addRoadGuidePoint(const FVector& Pos, class AActor* createdBy);
    bool addRelationTag(class APawnCPP* pawnA, class APawnCPP* pawnB, FName newTag);
    void addQueuedPathfinderDataEdits(FQueuedPathfinderDataEdit newEdit);
    void addPawnRelations(class APawnCPP* pawnA);
    void addFieldSnapPoint(const FVector& pointPos, const TArray<class ARoad*>& sRoad, bool isFork, int32 roadCacheID, class AActor* createdBy, bool isField);
    void addCliffCollision();
    int32 addAndConnectPathPoint(const FVector& Pos, class AActor* createdBy, class ARoad* Road);
}; // Size: 0x1440

class ARegion : public AActor
{
    class APawnCPP* ownerPawn;                                                        // 0x0290 (size: 0x8)
    TArray<class ASMBuildingMaster*> buildings;                                       // 0x0298 (size: 0x10)
    class ARTSMultiEngineCPP* masterPtr;                                              // 0x02A8 (size: 0x8)
    FString regionName;                                                               // 0x02B0 (size: 0x10)
    TArray<float> Price;                                                              // 0x02C0 (size: 0x10)
    int32 devPoints;                                                                  // 0x02D0 (size: 0x4)
    FTimerHandle problemUpdateHandle;                                                 // 0x02D8 (size: 0x8)
    bool markedForStorageUpdate;                                                      // 0x02E0 (size: 0x1)
    TArray<int32> cropTypes;                                                          // 0x02E8 (size: 0x10)
    TArray<FGood> totalNeeds;                                                         // 0x02F8 (size: 0x10)
    TArray<FGood> totalWillingToBuy;                                                  // 0x0308 (size: 0x10)
    TArray<FGood> totalWillingToSell;                                                 // 0x0318 (size: 0x10)
    TArray<FGood> totalWillingToImport;                                               // 0x0328 (size: 0x10)
    TArray<FGood> totalWillingToExport;                                               // 0x0338 (size: 0x10)
    TArray<FGood> totalStored;                                                        // 0x0348 (size: 0x10)
    TArray<FGood> totalStoredMinusReservation;                                        // 0x0358 (size: 0x10)
    TArray<FGood> reserved;                                                           // 0x0368 (size: 0x10)
    int32 regionalWealth;                                                             // 0x0378 (size: 0x4)
    TArray<FGood> productionFocus;                                                    // 0x0380 (size: 0x10)
    class ASMBuildingMaster* manor;                                                   // 0x0390 (size: 0x8)
    int32 claimCost;                                                                  // 0x0398 (size: 0x4)
    TArray<int32> Tech;                                                               // 0x03A0 (size: 0x10)
    int32 lastUpdate_prevLv;                                                          // 0x03B0 (size: 0x4)
    int32 lastUpdate_Lv;                                                              // 0x03B4 (size: 0x4)
    float lastUpdate_prevXp;                                                          // 0x03B8 (size: 0x4)
    float lastUpdate_prevLevelThres;                                                  // 0x03BC (size: 0x4)
    float lastUpdate_levelThres;                                                      // 0x03C0 (size: 0x4)
    float lastUpdate_totalXp;                                                         // 0x03C4 (size: 0x4)
    int32 GridSize;                                                                   // 0x03C8 (size: 0x4)
    float gridScale;                                                                  // 0x03CC (size: 0x4)
    TArray<FPossibilityTile> grid;                                                    // 0x03D0 (size: 0x10)
    FTimerHandle gridUpdateHandle;                                                    // 0x03E0 (size: 0x8)
    int32 GridId;                                                                     // 0x03E8 (size: 0x4)
    int32 checked;                                                                    // 0x03EC (size: 0x4)
    uint8 gridPattern;                                                                // 0x03F0 (size: 0x1)
    float Sequence;                                                                   // 0x03F4 (size: 0x4)
    TArray<int8> iteration;                                                           // 0x03F8 (size: 0x10)
    bool possibilityCheckDone;                                                        // 0x0408 (size: 0x1)
    TArray<int32> lookingFor;                                                         // 0x0410 (size: 0x10)
    TArray<int32> checkedFor;                                                         // 0x0420 (size: 0x10)
    FVector possibilityCenter;                                                        // 0x0430 (size: 0x18)
    TArray<FVector> possibilityGridLocations;                                         // 0x0448 (size: 0x10)
    TArray<FOption> buildingOptions;                                                  // 0x0468 (size: 0x10)
    TArray<class ARoad*> closeRoads;                                                  // 0x0478 (size: 0x10)
    TArray<FRotator> angleGrid;                                                       // 0x0488 (size: 0x10)
    int32 angleGridSize;                                                              // 0x0498 (size: 0x4)
    float angleGridScale;                                                             // 0x049C (size: 0x4)
    TArray<float> roadDistGrid;                                                       // 0x04B0 (size: 0x10)
    TArray<class AResource*> resources;                                               // 0x04C0 (size: 0x10)
    TArray<FTreeStruct> treeArr;                                                      // 0x04D0 (size: 0x10)
    TArray<FOre> oreArr;                                                              // 0x04F0 (size: 0x10)
    TArray<FGood> tradeables;                                                         // 0x0500 (size: 0x10)
    TArray<FPolicy> policies;                                                         // 0x0510 (size: 0x10)
    TArray<FGood> averageProduction;                                                  // 0x0530 (size: 0x10)
    TArray<FGood> averageConsumption;                                                 // 0x0540 (size: 0x10)
    TArray<int32> squadsPresent;                                                      // 0x0568 (size: 0x10)
    int32 tier;                                                                       // 0x0578 (size: 0x4)
    int32 marketAtt;                                                                  // 0x057C (size: 0x4)
    int32 expenses;                                                                   // 0x0580 (size: 0x4)
    float supplies_food;                                                              // 0x0584 (size: 0x4)
    float supplies_wood;                                                              // 0x0588 (size: 0x4)
    float lastLoyaltyChangeMessageTime;                                               // 0x058C (size: 0x4)
    TMap<class ASMBuildingMaster*, class FHarvest> harvestData;                       // 0x0590 (size: 0x50)
    bool isSettled;                                                                   // 0x05E0 (size: 0x1)
    int32 settlementLevel;                                                            // 0x05E4 (size: 0x4)
    TArray<int32> targetInventory;                                                    // 0x05E8 (size: 0x10)
    bool isUnderAttack;                                                               // 0x0698 (size: 0x1)
    TArray<FProblem> problems;                                                        // 0x06A0 (size: 0x10)
    TArray<class ASMUnit*> residents;                                                 // 0x06B0 (size: 0x10)
    TArray<class ASMUnit*> corpses;                                                   // 0x06C0 (size: 0x10)
    FBox2D regionBounds;                                                              // 0x06D0 (size: 0x28)
    TArray<FBuildingLookup> BuildingLookup;                                           // 0x06F8 (size: 0x10)
    TArray<FOption> AI_failedBuilds;                                                  // 0x0708 (size: 0x10)
    FString retinueName;                                                              // 0x0718 (size: 0x10)
    TArray<ETradeRule> tradeRules;                                                    // 0x0728 (size: 0x10)
    TArray<int32> forbidGlobalTradeGoodTypes;                                         // 0x0768 (size: 0x10)
    TArray<ETradePartnerLimit> tradePartnerLimits;                                    // 0x0778 (size: 0x10)
    TMap<int32, uint8> tradeRouteLevels;                                              // 0x0788 (size: 0x50)
    TArray<class ASMUnit*> tradeRouteMerchants;                                       // 0x07D8 (size: 0x10)
    TArray<class UInstancedStaticMeshComponent*> regionalFoliage;                     // 0x07E8 (size: 0x10)
    TArray<class UInstancedStaticMeshComponent*> treeComponents;                      // 0x07F8 (size: 0x10)
    TArray<class UInstancedStaticMeshComponent*> fieldstoneComponents;                // 0x0808 (size: 0x10)
    TArray<FVector> regionBorder;                                                     // 0x0818 (size: 0x10)
    TArray<FVector> triangulatedRegion;                                               // 0x0828 (size: 0x10)
    TArray<FVector> triangulatedRegionShrunk;                                         // 0x0838 (size: 0x10)
    class ASMBuildingMaster* townCenter;                                              // 0x0848 (size: 0x8)
    bool autoBuyCommodities;                                                          // 0x0850 (size: 0x1)
    bool startedPollarding;                                                           // 0x0851 (size: 0x1)
    TArray<FFoliageReference> growingFoliage;                                         // 0x0858 (size: 0x10)
    bool hasWell;                                                                     // 0x0868 (size: 0x1)
    int32 approval;                                                                   // 0x086C (size: 0x4)
    TArray<FApprovalMemory> summedApprovalFactors;                                    // 0x0870 (size: 0x10)
    int32 publicOrder;                                                                // 0x0880 (size: 0x4)
    TArray<FApprovalMemory> publicOrderMemory;                                        // 0x0888 (size: 0x10)
    TArray<FApprovalMemory> summedPublicOrderFactors;                                 // 0x0898 (size: 0x10)
    int32 numMouthsToFeed;                                                            // 0x08A8 (size: 0x4)
    bool bAnyBuildingOnFire;                                                          // 0x08AC (size: 0x1)
    TArray<class ASMBuildingMaster*> buildingsNeedingRefueling;                       // 0x08B0 (size: 0x10)
    TMap<int32, int32> constructionReserve;                                           // 0x08C0 (size: 0x50)
    int32 nextLivestockOrderIn;                                                       // 0x0910 (size: 0x4)
    TArray<class ARoad*> roadBlueprints;                                              // 0x0918 (size: 0x10)
    TArray<class AActor*> resourceNodes_earlyFood;                                    // 0x0928 (size: 0x10)
    TArray<class AActor*> resourceNodes_forest;                                       // 0x0938 (size: 0x10)
    TArray<class AActor*> resourceNodes_open;                                         // 0x0948 (size: 0x10)
    int32 retinueSquadID;                                                             // 0x0958 (size: 0x4)
    TArray<int32> policiesSigned;                                                     // 0x0960 (size: 0x10)
    FName regionUniqueTag;                                                            // 0x0970 (size: 0x8)
    TArray<FWorkerFamily> workerFamilies;                                             // 0x0978 (size: 0x10)
    ESettlementType settlementType;                                                   // 0x0988 (size: 0x1)
    class ARegion* outpostToRegion;                                                   // 0x0990 (size: 0x8)
    TMap<FName, int32> taxRates;                                                      // 0x0998 (size: 0x50)
    TArray<FGood> overstockedGoods;                                                   // 0x0A00 (size: 0x10)

    bool waitingForConstruction(const int32& bType);
    void updateSupplies();
    void updateStorage();
    void updateSettlementLv();
    void updateProductionFocus();
    void updateProblems();
    void updatePrices();
    void updatePresentSquads();
    void updateNumMouthsToFeed();
    void updateJobAssignment();
    void updateHarvestData();
    void updateCropTypes();
    void updateCloseRoads();
    void updateAnimalJobAssignment();
    void updateAngleGridAsync();
    void updateAngleGrid();
    void unlockTech(int32 techID);
    bool unlockOneTradeLevel(int32 goodType);
    bool unlockBranchStartQuest(int32 branchID);
    void unassignFamily(int32 familyID);
    void triangulateRegionIfNecessary();
    void startPossibilityGrid();
    void spawnRegionalResources();
    class ASMUnit* spawnNewFamilyMember(int32 familyID, EUnitRole unitRole, class ASMBuildingMaster* Home);
    void setTradeRouteLevelForGood(int32 goodType, uint8 newLevel);
    void setTech(int32 ID, int32 newTier);
    void setShowMarketDistribution(bool showFlag, EResidentialRequirement displayRequirement);
    void setProductionUnlimited(int32 goodType);
    void setProductionLimit(int32 goodType, int32 NewLimit);
    void setPolicySigned(int32 policyID, bool isSigned);
    void setGlobalTradeAllowedForGood(int32 goodID, bool allowed);
    void setFamilyHome(int32 familyID, class ASMBuildingMaster* newHome);
    void setDevPoints(int32 newAmt);
    void setCraftingConsumptionUnlimited(int32 producedGoodType, int32 goodType);
    void setCraftingConsumptionLimit(int32 producedGoodType, int32 goodType, int32 NewLimit);
    void setConstructionReserveForGood(int32 goodType, int32 newReserveValue);
    void resumPublicOrderFactors();
    void resumApprovalFactors();
    void resetPossibilityGrid();
    void renameRegion(FString NewName);
    void removeWorkerFamilyAt(int32 familyID);
    void removeResourceFromLookup(const FVector& resourceLocation);
    void removeProblemQuick(int32 Type, class ASMBuildingMaster* building, class ASMUnit* unit);
    void removeProblem(const FProblem& problemToRemove);
    void removeBuildingLookup(class ASMBuildingMaster* bld);
    void removeAllProblemsOfType(EProblem problemType);
    void regionalizeFoliage();
    void redistributeMilitiaRecruits();
    void recomodatePastureLivestock();
    void reassignFamily(int32 familyID, class ASMBuildingMaster* workplace);
    void processMigration();
    bool isTechEnabled(int32 techID, int32 tier);
    bool isTargetStockSetForGoodType(int32 goodType);
    bool isSafeToPlant(const FVector& Pos, const float& treeRadius, bool avoidTrees);
    bool isResourcePresent(int32 resourceType);
    bool isRegionStruggling();
    bool isProductionLimited(int32 goodType);
    bool isPointWithinTriangulatedRegion(const FVector& Point);
    bool isOutpost();
    bool isMarkedSupplySatisfied(int32 goodType);
    bool isMapBorderRegion();
    bool isGlobalTradeAllowedForGood(int32 goodID);
    bool isCraftingConsumptionLimited(int32 producedGoodType, int32 goodType);
    bool isBeingClaimed(FClaimStatus& ClaimStatus);
    void invokePossibilityCheckAsync(int32 lookFor);
    void invalidatePossibilities(const FVector& Pos, class ASMBuildingMaster* building);
    void initForSettlement(ESettlementType newSettlementType);
    bool hasWeakFertility();
    bool hasSurplusOfGoodsMinusReservedSimple(const TArray<FGood>& needed, int32 producedGoodType);
    bool hasPolicy(int32 ID);
    bool hasEnoughRouteLevelToTrade(int32 goodType);
    bool hasEnoughPastureSpace();
    bool hasAnyUnassignedOxen();
    bool hasAnyHomelessFamilies();
    void harvestOre(const FVector& Pos);
    void growPopulation();
    void grantResources(const TArray<FGood>& resourcesToGrant);
    int32 getWildAnimalsCount();
    int32 getUnlockTradeLevelPriceForGoodType(int32 goodType);
    int32 getTreeByPos(const FVector& Location);
    class ASMUnit* getTradeRouteMerchantForGoodType(int32 goodType);
    uint8 getTradeRouteLevel(int32 goodType);
    int32 getTotalStockOfDistributedGood(int32 goodType);
    int32 getTotalStableSpace();
    int32 getTotalPastureSpace();
    int32 getTotalPastureNeeds();
    int32 getTotalNumFamilies();
    int32 getTotalNumAssignedFamilies();
    int32 getTotalNumAssignableFamilies();
    FPair getTotalMarketVirtualStorageData(EStorageType storageType);
    int32 getTotalLivestockCount();
    int32 getTotalImportExpenditure(class ASMUnit* skipUnit);
    int32 getTotalFreeMarketStallLocations();
    int32 getTaxRate(const FName& taxType);
    int32 getStockOfMultipleGoods(const TArray<int32>& goodTypes, TArray<FGood>& outGoods, bool minusReservation, bool sumNegative, bool allowEmpty);
    int32 getStockOfGoodMinusReservedForRallying(int32 Type);
    int32 getStockOfGoodIncludingEquipped(int32 Type);
    int32 getStockOfGood(int32 Type, bool minusReservation);
    TArray<FGood> getStock(bool includeReserved);
    FSettlementRequirements getSettlementRequirementFulfillment();
    FVector getSettledRegionCenter();
    TArray<class ASMBuildingMaster*> getResidentialBuildings(bool includeNoRequirementHousing);
    int32 getRegionUniqueID();
    FString getRegionName();
    TArray<class ASMUnit*> getRegionBuilders();
    TArray<FGood> getRegionalMarketSupply();
    bool getRandomTreePosNearLocation(const FVector& Pos, const float& MaxDistance, FVector& treePos);
    int32 getProductionLimit(int32 goodType);
    int32 getProductionFocusedofType(const int32& goodType);
    TArray<float> getPrices();
    int32 getPriceOfGood(int32 goodType);
    int32 getPredictedHarvestForGoodType(int32 goodType);
    int32 getPredictedApprovalLossFromTaxes();
    int32 getPopulationOfRole(EUnitRole populationRole);
    int32 getNumUnassignedLivestockOfType(int32 goodID);
    int32 getNumUnassignedFamilies();
    int32 getNumTotalPopulation();
    int32 getNumTotalActiveWorkerFamilies();
    int32 getNumResidentsOfRoleAndLv(EUnitRole unitRole, int32 familyLevel);
    int32 getNumResidentialBuildingsOfLvAndHigher(int32 Level);
    int32 getNumResidentialBuildingsOfLv(int32 Level);
    int32 getNumRequiredEqiupmentOfType(int32 goodID, bool includingAlreadyRallied);
    int32 getNumRecruitsNeeded();
    int32 getNumProblemsOfType(const int32& Type);
    int32 getNumOccupiedPlots(int32& lvl1, int32& lvl2, int32& lvl3);
    int32 getNumHumanResidents();
    int32 getNumHomelessFamilies();
    int32 getNumHarvestableResourceWithinWorkArea(const int32& Type, const FVector& areaCenter, const float& areaRangeSq);
    int32 getNumHarvestableResource(const int32& Type);
    int32 getNumFamiliesOfLv(int32 familyLevel);
    int32 getNumDevPointsSpent();
    int32 getNumBurgagePlots(bool constructedOrBeingUpgraded);
    int32 getNumAvailableRecruitsOfLv(int32 houseLv);
    int32 getNumAvailableRecruits();
    int32 getNumAssignedMilitaryStockOfType(int32 goodType);
    int32 getNumAssignedMarketFamiliesPerBuildingFunction(EBuildingFunction buildingFunction);
    FSettlementRequirements getNextSettlementLvRequirements();
    int32 getMaxPolicies();
    FPair getMarketVirtualStorageData(EStorageType storageType);
    int32 getMarketSupplyOfGood(int32 goodType);
    int32 getMarketPercentageSupplied(EResidentialRequirement supplyCategory);
    FPair getMarketFoodVarietyData();
    int32 getMarketDemandOfGood(int32 goodType);
    FLivingSpaceData getLivingSpace();
    float getLivestockPrice(const int32& livestockType);
    class UInstancedStaticMeshComponent* getFoliageHISM(FString nameContains);
    int32 getDevPoints();
    TArray<int32> getCropTypes();
    int32 getCraftingConsumptionLimit(int32 producedGoodType, int32 goodType);
    int32 getConstructionReserveForGood(int32 goodType);
    int32 getBuildingCount(int32 bType, bool constructedOnly);
    FRotator getBuildingAngle(const FVector& Pos, float& roadDist);
    void getAvailableRecruits(float minMeleeTraining, float minArcheryTraining, TArray<class ASMUnit*>& outAllRecruits, TArray<class ASMUnit*>& outFreeRecruits, int32 minHouseLv);
    FLivingSpaceData getAvailableLivingSpace();
    FRotator getAngleFromGrid(const FVector& Pos, float& roadDist);
    int32 getAmtMarketSupplyToMeetDemand(int32 goodType);
    TArray<class ASMUnit*> getAllAvailableRecruits(bool includeNotDisbanded);
    TArray<class ASMBuildingMaster*> getActiveResidentialBuildings(bool includeNoRequirementHousing);
    void generatePossibilityGridLocations();
    void finishUpdatingAngleGridAsync();
    void finishAsyncPossibilityChecksWhenDone();
    class UInstancedStaticMeshComponent* findOrAddFoliageComponent(FString nameContains, class UStaticMesh* StaticMesh, bool isTree);
    class ARoad* findNearestRoad(const FVector& Pos);
    class ASMUnit* findFreeOx();
    int32 findClosestFoodResourceType(const FVector& Pos);
    bool findBestOption(int32 bType, FOption& Result);
    bool consumeRegionalWealth(int32 amt);
    bool consumeGoodFromBuildingFunctionType(int32 goodType, int32 goodAmt, EBuildingFunction buildingFunction, bool respectReservation);
    bool consumeGood(int32 goodType, int32 goodAmt, class ASMBuildingMaster* preferredBulding, bool scramble, bool respectReservation);
    void collectMonthlyTaxes();
    void changeTradeRule(int32 goodID, ETradeRule newRule);
    void changeTradePartnerLimit(int32 goodID, ETradePartnerLimit NewLimit);
    void changeTier(int32 newTier);
    void changeTaxRate(const FName& taxType, int32 NewRate);
    void changeTargetInventory(int32 goodType, int32 Target);
    void changeOwnership(class APawnCPP* NewOwner, bool prepareForSettlement);
    void changeConstructionReserveBy(int32 goodType, int32 amt);
    bool canBeRaided();
    void calculateMarketAttractiveness();
    int32 calculateExpenses();
    void assignFamily(int32 familyID, class ASMBuildingMaster* workplace);
    bool areNextSettlementLvRequirementsFulfilled();
    bool areAnyEnemySquadsPresent(bool includeEncamped);
    void adjustFoliageMeshesNear(const FVector& Pos);
    void adjustFieldRotation(const FVector& Pos, FRotator& Rotation);
    void addWealth(int32 amt);
    void addResourceLookup(class AResource* Resource);
    void addRegionalWealth(int32 amt);
    void addPublicOrderMemoriesFromUnits();
    void addProblemQuick(int32 Type, class ASMBuildingMaster* building, class ASMUnit* unit);
    void addProblemIfNew(const FProblem& newProblem, bool updateExpiration);
    void addNewFamilyMember(int32 familyID, class ASMUnit* newMember);
    int32 addNewFamily(const TArray<class ASMUnit*>& familyMembers);
    void addDevPoints(int32 amt);
    bool addCloseRoadIfClose(class ARoad* Road);
    void addBuildingLookup(class ASMBuildingMaster* bld);
    void addApprovalMemoriesFromUnits();
    void addAllResourcesToLookup();
    void accomodateHomelessLivestock(class ASMBuildingMaster* ignoreBuilding);
    void accomodateHomelessFamilies(class ASMBuildingMaster* ignoreBuilding);
}; // Size: 0xAB0

class AResource : public AStaticMeshActor
{
    FName resType;                                                                    // 0x02A0 (size: 0x8)
    int32 capacity;                                                                   // 0x02A8 (size: 0x4)
    int32 grownThisYear;                                                              // 0x02AC (size: 0x4)
    int32 amt;                                                                        // 0x02B0 (size: 0x4)
    int32 Type;                                                                       // 0x02B4 (size: 0x4)
    FString DisplayName;                                                              // 0x02B8 (size: 0x10)
    bool falling;                                                                     // 0x02C8 (size: 0x1)
    class ARTSMultiEngineCPP* masterPtr;                                              // 0x02D0 (size: 0x8)
    class ASMUnit* reservedTo;                                                        // 0x02D8 (size: 0x8)
    class ARegion* Region;                                                            // 0x02E0 (size: 0x8)
    FVector clumpCenter;                                                              // 0x02E8 (size: 0x18)
    class ASMBuildingMaster* belongsTo;                                               // 0x0300 (size: 0x8)
    TArray<FGood> Inventory;                                                          // 0x0308 (size: 0x10)
    int32 commonAmt;                                                                  // 0x0318 (size: 0x4)
    int32 commonCapacity;                                                             // 0x031C (size: 0x4)
    FColor iconTint;                                                                  // 0x0320 (size: 0x4)
    bool bSeasonal;                                                                   // 0x0324 (size: 0x1)
    bool pathfindingFailed;                                                           // 0x0325 (size: 0x1)
    bool bRichDeposit;                                                                // 0x0326 (size: 0x1)

    void startFalling();
    void setFalling(const bool& newSetting);
    void removeResource();
    class ARTSMultiEngineCPP* getMaster();
    void addToAmt(const int32& amtToAdd);
}; // Size: 0x328

class ARoad : public AActor
{
    class ARTSMultiEngineCPP* masterPtr;                                              // 0x0290 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0298 (size: 0x8)
    TArray<class USplineMeshComponent*> SplineMeshComponents;                         // 0x02A0 (size: 0x10)
    TArray<FSegment> unadjustedMeshLocations;                                         // 0x02B0 (size: 0x10)
    TArray<class UStaticMeshComponent*> staticMeshes;                                 // 0x02C0 (size: 0x10)
    class UStaticMesh* roadMesh;                                                      // 0x02D0 (size: 0x8)
    class UMaterialInterface* roadMat_start;                                          // 0x02D8 (size: 0x8)
    class UMaterialInterface* roadMat_end;                                            // 0x02E0 (size: 0x8)
    class UMaterialInterface* roadMat_short;                                          // 0x02E8 (size: 0x8)
    class UMaterialInterface* borderMat;                                              // 0x02F0 (size: 0x8)
    class UMaterialInterface* MaterialOverride;                                       // 0x02F8 (size: 0x8)
    class UTexture2D* roadMask;                                                       // 0x0300 (size: 0x8)
    bool commit;                                                                      // 0x0308 (size: 0x1)
    class UMaterialInterface* guideMat;                                               // 0x0310 (size: 0x8)
    class UMaterialInterface* guideMatBridge;                                         // 0x0318 (size: 0x8)
    float spacing;                                                                    // 0x0320 (size: 0x4)
    float pieceLength;                                                                // 0x0324 (size: 0x4)
    TArray<class ASMBuildingMaster*> connectedMarkets;                                // 0x0328 (size: 0x10)
    bool marketRoad;                                                                  // 0x0338 (size: 0x1)
    TArray<FRoadFork> forks;                                                          // 0x0340 (size: 0x10)
    TArray<FVector> envelopmentPoints;                                                // 0x0350 (size: 0x10)
    TArray<FVector> cachedLocations;                                                  // 0x0360 (size: 0x10)
    TArray<FVector> cachedEdgeA;                                                      // 0x0370 (size: 0x10)
    TArray<FVector> cachedEdgeB;                                                      // 0x0380 (size: 0x10)
    TArray<FRotator> cachedRotations;                                                 // 0x0390 (size: 0x10)
    TArray<FVector> cachedEdgeCollisionA;                                             // 0x03A0 (size: 0x10)
    TArray<FVector> cachedEdgeCollisionB;                                             // 0x03B0 (size: 0x10)
    class ARegion* regionA;                                                           // 0x03C0 (size: 0x8)
    class ARegion* regionB;                                                           // 0x03C8 (size: 0x8)
    class UMaterialInstanceDynamic* MI_Border;                                        // 0x03D0 (size: 0x8)
    int32 numTraversedByMerchants;                                                    // 0x03D8 (size: 0x4)
    bool isBorder;                                                                    // 0x03DC (size: 0x1)
    bool isGuide;                                                                     // 0x03DD (size: 0x1)
    TArray<FVector> forkSnapPoints;                                                   // 0x03E0 (size: 0x10)
    TArray<class ARoad*> forkSnapRoads;                                               // 0x03F0 (size: 0x10)
    bool kingsRoad;                                                                   // 0x0400 (size: 0x1)
    float roadWidth;                                                                  // 0x0404 (size: 0x4)
    TArray<FVector> fatPositions;                                                     // 0x0408 (size: 0x10)
    TArray<int32> fatPositionID;                                                      // 0x0418 (size: 0x10)
    TArray<FVector> forkSnapDirs;                                                     // 0x0428 (size: 0x10)
    bool resampled;                                                                   // 0x0438 (size: 0x1)
    FBox2D roadBounds;                                                                // 0x0440 (size: 0x28)
    TArray<class UStaticMeshComponent*> FoliageComponents;                            // 0x0468 (size: 0x10)
    ERoadType roadType;                                                               // 0x0478 (size: 0x1)
    EWallType wallType;                                                               // 0x0479 (size: 0x1)
    bool isBlueprint;                                                                 // 0x047A (size: 0x1)
    float roadTangentScale;                                                           // 0x047C (size: 0x4)
    TArray<FTransform> gateTransforms;                                                // 0x0480 (size: 0x10)
    TArray<int32> cullSplinePointIDs;                                                 // 0x0490 (size: 0x10)
    bool fieldSnapPointsCreated;                                                      // 0x04A0 (size: 0x1)
    bool bMapEdge;                                                                    // 0x04A1 (size: 0x1)
    bool bOpenBorder;                                                                 // 0x04A2 (size: 0x1)
    TArray<class ASMBuildingMaster*> connectedBuildings;                              // 0x04A8 (size: 0x10)

    void updatePreviewRoadMeshes(bool forceUpdate);
    void updateLocalHeight(FVector& LocalPosition, class USplineMeshComponent* MeshComponent);
    void updateForks();
    void updateCollisionCache(bool isPreview);
    void updateBorderMaterials(bool hoveringA, bool hoveringB, bool selectedA, bool selectedB);
    void spawnRoadMeshes();
    class UStaticMeshComponent* spawnFoliageComponent(const FVector& Pos, class UStaticMesh* StaticMesh);
    void snapSplineToMapEdge(float snapThresholdSq);
    void setRVTMode(ERuntimeVirtualTextureMainPassType NewMode);
    void setHighlightParameter(const float& highlight);
    void setDynamicMaterialParameters(const float& highlight, const float& tradeValue);
    void setCommit(const bool& isCommiting);
    void replaceDirt();
    void rebuildFromEnvelopmentPoints(bool includeDummyRoad);
    void pushOutForkSnapPoints();
    void placeDirt(const FVector& Location, const bool& Reverse, const float& Scale);
    bool isPointWithinRoadBounds(const FVector& Point);
    bool isPointOnRoadExtended(const FVector& Point, const float& extensionSq);
    bool isPointOnRoadCached(const FVector& Point);
    bool intersectRoadCached(const FVector& Start, const FVector& End, FVector& Out, const bool& Center, const bool& simple);
    bool intersectRoad(const FVector& Start, const FVector& End, FVector& Out, const bool& Center, const bool& simple);
    bool insertPointOnSegmentIfPlazaFound(const int32& SplinePoint, FVector& outPos);
    void insertGatesOnRoads(const TArray<class ARoad*>& relevantRoads);
    void insertEnvelopmentPointsOnGates();
    int32 insertEnvelopmentPointNear(FVector Location);
    void insertCachedPoint(const FVector& Point);
    bool hasForkWith(class ARoad* otherRoad);
    FVector getNearestInterpolatedCachedLocation(const FVector& Pos, float& outDistSq);
    FVector getNearestCachedLocation(const FVector& Pos, FRotator& Forward, float& outDistSq, bool subdivide);
    int32 getIndexOfNearestCachedEdge(const FVector& edgePos);
    float GetDistanceAlongSplineForWorldLocation(FVector Location);
    FVector getClosestPreciseCachedLocation(const FVector& Pos);
    FVector getClosestInterpolatedCachedEdgeLocation(const FVector& Pos, int32& OutIndex, bool push);
    void getClosestCachedTransform(const FVector& Pos, FVector& OutLocation, FRotator& OutRotation);
    FVector getClosestCachedLocation(const FVector& Pos);
    TArray<class ASMBuildingMaster*> getBuildingsNearRoadQuick(const float& distSq);
    void fixBorderRegions();
    void eraseVegetation();
    void eraseAllDirt();
    void connectCachedToPathfinding();
    void clearRoad();
    void cleanSplineMeshes();
    void adjustHeight();
    void addUniqueFork(const FRoadFork& newFork);
    void addRuntimeVirtualTexture(class URuntimeVirtualTexture* newRVT, ERuntimeVirtualTextureMainPassType passType);
    void addFieldSnapPoints();
    void addEdgeIntersections(const TArray<FVector>& myEdges, class ARoad* roadB, const FRoadFork& fork);
}; // Size: 0x4B8

class ASMBanner : public ASkeletalMeshActor
{
    FVector FrameData;                                                                // 0x0310 (size: 0x18)
    class UMaterialInstanceDynamic* MI_bannerMaterial;                                // 0x0328 (size: 0x8)

    void setFrames(FVector newFrameData);
    FVector getFrames();
    void createDynamicMaterial(const float& colorA, const float& colorB, const float& heraldry);
}; // Size: 0x330

class ASMBuilding : public AStaticMeshActor
{
    int32 iNo;                                                                        // 0x02A0 (size: 0x4)
    int32 iType;                                                                      // 0x02A4 (size: 0x4)
    class ARTSMultiEngineCPP* masterPtr;                                              // 0x02A8 (size: 0x8)
    class ASMBuildingMaster* bMaster;                                                 // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* DefaultMesh;                                          // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* socketMesh;                                           // 0x02C0 (size: 0x8)
    TArray<class UStaticMeshComponent*> secondaryMeshes;                              // 0x02C8 (size: 0x10)
    TArray<class AObstacle*> obstacles;                                               // 0x02D8 (size: 0x10)
    TArray<class USplineMeshComponent*> Fences;                                       // 0x02E8 (size: 0x10)
    bool collisionSpawned;                                                            // 0x02F8 (size: 0x1)
    class AConstruction* ConstructionBP;                                              // 0x0300 (size: 0x8)
    bool isWorkbench;                                                                 // 0x0308 (size: 0x1)
    FVector workPos;                                                                  // 0x0310 (size: 0x18)
    FRotator workRot;                                                                 // 0x0328 (size: 0x18)
    int32 resourceType;                                                               // 0x0340 (size: 0x4)
    int32 resourceMin;                                                                // 0x0344 (size: 0x4)
    int32 resourceStack;                                                              // 0x0348 (size: 0x4)
    float StackSize;                                                                  // 0x034C (size: 0x4)
    TArray<FGood> contained;                                                          // 0x0350 (size: 0x10)
    bool ladiesOnly;                                                                  // 0x0360 (size: 0x1)
    int32 lazyAnim;                                                                   // 0x0364 (size: 0x4)
    bool fullBuilding;                                                                // 0x0368 (size: 0x1)
    float customColorUV;                                                              // 0x036C (size: 0x4)
    FVector instancePos;                                                              // 0x0370 (size: 0x18)
    bool isStall;                                                                     // 0x0388 (size: 0x1)
    bool rolledOut;                                                                   // 0x0389 (size: 0x1)
    int32 sellingType;                                                                // 0x038C (size: 0x4)
    bool isMainbuilding;                                                              // 0x0390 (size: 0x1)
    float hp;                                                                         // 0x0394 (size: 0x4)
    float maxHp;                                                                      // 0x0398 (size: 0x4)
    bool loadingAConstructionBP;                                                      // 0x039C (size: 0x1)
    bool isDeconstructing;                                                            // 0x039D (size: 0x1)
    float highestObstacleSocket;                                                      // 0x03A0 (size: 0x4)

    void spawnPPoints();
    void spawnObstacles();
    void spawnObstaclePathfindingIfNeeded();
    void spawnFenceMesh(const FVector& Start, const FVector& End, class UStaticMesh* fenceMesh);
    void spawnFence(const TArray<FVector>& fieldPoints, class UStaticMesh* fenceMesh);
    void SpawnConstructionBP();
    void SetType(uint32 typeset);
    void setMeshes(int32 InstanceType);
    void SetInstanceNo(uint32 iNoSet);
    void setGroundCollisionEnabled(bool enableGroundCollision);
    float getTopObstacleSocketHeight();
    bool findSocketTransform(const FName& SocketName, FTransform& outTransf);
    void destroyBuilding();
    FVector correctHeight(const FVector& Location, const int32& floor);
    void calculateWorkPos(const FVector& Offset, const FRotator& RotationOffset, bool workbench);
    void addFencingObstacle();
}; // Size: 0x3A8

class ASMBuildingMaster : public AStaticMeshActor
{
    TArray<class USpotLightComponent*> lights;                                        // 0x02A0 (size: 0x10)
    TArray<FVector> bpoints;                                                          // 0x02B0 (size: 0x10)
    FVector gatheringSpot;                                                            // 0x02C0 (size: 0x18)
    FVector roadPos;                                                                  // 0x02D8 (size: 0x18)
    TArray<FVector> roadSnapPoints;                                                   // 0x02F0 (size: 0x10)
    TArray<FVector> validRoadSnapPoints;                                              // 0x0300 (size: 0x10)
    int32 UniqueID;                                                                   // 0x0310 (size: 0x4)
    class APawnCPP* ownerPawn;                                                        // 0x0318 (size: 0x8)
    class ARTSMultiEngineCPP* masterPtr;                                              // 0x0320 (size: 0x8)
    TArray<class ASMBuilding*> buildings;                                             // 0x0328 (size: 0x10)
    TArray<class ASMBuilding*> resources;                                             // 0x0338 (size: 0x10)
    TArray<class ASMBuilding*> lazyBuildings;                                         // 0x0348 (size: 0x10)
    TArray<FLazyPoint> lazyPoints;                                                    // 0x0358 (size: 0x10)
    bool spawned;                                                                     // 0x0368 (size: 0x1)
    FTimerHandle bUpdateHandle;                                                       // 0x0370 (size: 0x8)
    FBuildingDataStruct Data;                                                         // 0x0378 (size: 0x14)
    TArray<FGood> constructionGoods;                                                  // 0x0390 (size: 0x10)
    class ARoad* snappedToRoad;                                                       // 0x03A0 (size: 0x8)
    FVector snappedPos;                                                               // 0x03A8 (size: 0x18)
    float snappedDist;                                                                // 0x03C0 (size: 0x4)
    bool bFlip;                                                                       // 0x03C4 (size: 0x1)
    TArray<int32> upgradesDone;                                                       // 0x03C8 (size: 0x10)
    TArray<FGood> Inventory;                                                          // 0x03D8 (size: 0x10)
    bool isTabOpened;                                                                 // 0x03E8 (size: 0x1)
    bool bTabPinned;                                                                  // 0x03E9 (size: 0x1)
    TArray<FGood> resourceSurplusCache;                                               // 0x03F0 (size: 0x10)
    FBBorder Border;                                                                  // 0x0400 (size: 0x60)
    TArray<class ASMUnit*> oxen;                                                      // 0x0460 (size: 0x10)
    TArray<class ASMUnit*> animals;                                                   // 0x0470 (size: 0x10)
    int32 fieldWorkersNeeded;                                                         // 0x0480 (size: 0x4)
    TArray<FPlant> plants;                                                            // 0x0498 (size: 0x10)
    TArray<class UInstancedStaticMeshComponent*> plantISM;                            // 0x04A8 (size: 0x10)
    TArray<class UInstancedStaticMeshComponent*> shrubBorderComponents;               // 0x04B8 (size: 0x10)
    int32 plannedHarvest_DaysLeft;                                                    // 0x04C8 (size: 0x4)
    int32 plannedHarvest_PredictedYield;                                              // 0x04CC (size: 0x4)
    int32 yield;                                                                      // 0x04D4 (size: 0x4)
    bool forceHarvest;                                                                // 0x04D8 (size: 0x1)
    class UDecalComponent* BoundsDecal;                                               // 0x04E0 (size: 0x8)
    TArray<class UDecalComponent*> roadDecals;                                        // 0x04E8 (size: 0x10)
    class UDecalComponent* fieldDecal;                                                // 0x04F8 (size: 0x8)
    class UMaterialInterface* decalMat;                                               // 0x0500 (size: 0x8)
    class UMaterialInterface* boundsDecalMat;                                         // 0x0508 (size: 0x8)
    class UMaterialInterface* fieldDecalMat;                                          // 0x0510 (size: 0x8)
    class UMaterialInterface* floorDecalMat;                                          // 0x0518 (size: 0x8)
    class UMaterialInterface* roadDecalMat;                                           // 0x0520 (size: 0x8)
    class UMaterialInterface* wellDecalMat;                                           // 0x0528 (size: 0x8)
    class UMaterialInterface* roadPosDecalMatOnRoad;                                  // 0x0530 (size: 0x8)
    int32 buildPriority;                                                              // 0x0538 (size: 0x4)
    FString TownName;                                                                 // 0x0540 (size: 0x10)
    bool needsRoad;                                                                   // 0x0550 (size: 0x1)
    TArray<FVector> fieldPoints;                                                      // 0x0558 (size: 0x10)
    bool borderIsClockwise;                                                           // 0x0568 (size: 0x1)
    TArray<FVector> fieldPointsTriangulated;                                          // 0x0570 (size: 0x10)
    TArray<FVector> triangulatedCollision;                                            // 0x0580 (size: 0x10)
    TArray<FVector> finalBorderCollision;                                             // 0x0590 (size: 0x10)
    TArray<FVector> fieldBorderPoints;                                                // 0x05A0 (size: 0x10)
    TArray<FVector> finalBorder;                                                      // 0x05B0 (size: 0x10)
    class ARegion* Region;                                                            // 0x05C0 (size: 0x8)
    FTimerHandle fieldHighlightHandle;                                                // 0x05C8 (size: 0x8)
    float fieldHighlight;                                                             // 0x05D0 (size: 0x4)
    bool sleep;                                                                       // 0x05D4 (size: 0x1)
    ECropType cropType;                                                               // 0x05D5 (size: 0x1)
    ECropType cropType2;                                                              // 0x05D6 (size: 0x1)
    ECropType cropType3;                                                              // 0x05D7 (size: 0x1)
    bool bRotateCrops;                                                                // 0x05D8 (size: 0x1)
    int32 lastDeath;                                                                  // 0x05DC (size: 0x4)
    TArray<class UParticleSystemComponent*> particleSystems;                          // 0x05E0 (size: 0x10)
    bool discovered;                                                                  // 0x05F0 (size: 0x1)
    FVector fogShift;                                                                 // 0x05F8 (size: 0x18)
    int32 fieldOperationMode;                                                         // 0x0610 (size: 0x4)
    bool workAreaLimited;                                                             // 0x0614 (size: 0x1)
    FVector workAreaCenter;                                                           // 0x0618 (size: 0x18)
    float workAreaRange;                                                              // 0x0630 (size: 0x4)
    float workAreaRangeSq;                                                            // 0x0634 (size: 0x4)
    int32 numActiveWorkerFamilies;                                                    // 0x0638 (size: 0x4)
    int32 activeOxen;                                                                 // 0x063C (size: 0x4)
    int32 maxOxen;                                                                    // 0x0640 (size: 0x4)
    TArray<class ASMUnit*> animalsOnPasture;                                          // 0x0648 (size: 0x10)
    TArray<int32> canMake;                                                            // 0x0658 (size: 0x10)
    TArray<FOrder> orders;                                                            // 0x0668 (size: 0x10)
    TArray<FBuildingGloop> ambiences;                                                 // 0x0678 (size: 0x10)
    class UStaticMeshComponent* windmillShaft;                                        // 0x0688 (size: 0x8)
    FTimerHandle shaftHandle;                                                         // 0x0690 (size: 0x8)
    float shaftRotation;                                                              // 0x0698 (size: 0x4)
    float naturalEfficiency;                                                          // 0x069C (size: 0x4)
    class ASoundBuddy* SoundBuddy;                                                    // 0x06A0 (size: 0x8)
    bool isBeingUpgraded;                                                             // 0x06A8 (size: 0x1)
    TArray<class AConstruction*> upgradeConstructionBPs;                              // 0x06B0 (size: 0x10)
    TArray<FSnapPoint> snapPoints;                                                    // 0x06C0 (size: 0x10)
    bool bDrawPeopleConnections;                                                      // 0x06D0 (size: 0x1)
    bool bDrawMarketConnections;                                                      // 0x06D1 (size: 0x1)
    TArray<class ASMUnit*> recruits;                                                  // 0x06D8 (size: 0x10)
    class ASMBuildingMaster* leftNeighbour;                                           // 0x06E8 (size: 0x8)
    class ASMBuildingMaster* rightNeighbour;                                          // 0x06F0 (size: 0x8)
    FSegment frontFacade;                                                             // 0x06F8 (size: 0x30)
    FSegment backFacade;                                                              // 0x0728 (size: 0x30)
    FSegment backFacadeExtended;                                                      // 0x0758 (size: 0x30)
    FSegment insetFacade;                                                             // 0x0788 (size: 0x30)
    FSegment extendedFacade;                                                          // 0x07B8 (size: 0x30)
    FSegment housePositions;                                                          // 0x07E8 (size: 0x30)
    FVector gatePos;                                                                  // 0x0818 (size: 0x18)
    FVector gatePosBack;                                                              // 0x0830 (size: 0x18)
    FTransform residentialPrimaryBuildingTransform;                                   // 0x0850 (size: 0x60)
    FTransform residentialSecondaryBuildingTransform;                                 // 0x08B0 (size: 0x60)
    float procedural_pushFwd;                                                         // 0x0910 (size: 0x4)
    float procedural_floorScaleA;                                                     // 0x0914 (size: 0x4)
    float procedural_floorScaleB;                                                     // 0x0918 (size: 0x4)
    int32 procedural_windowTypeA;                                                     // 0x091C (size: 0x4)
    int32 procedural_windowTypeB;                                                     // 0x0920 (size: 0x4)
    float procedural_color;                                                           // 0x0924 (size: 0x4)
    bool procedural_splitBuilding;                                                    // 0x0928 (size: 0x1)
    TArray<class USplineMeshComponent*> sideWalkMeshes;                               // 0x0930 (size: 0x10)
    FLinearColor roofTint;                                                            // 0x0940 (size: 0x10)
    class UMaterialInterface* roofMaterial;                                           // 0x0950 (size: 0x8)
    float procedural_uvOffset;                                                        // 0x0958 (size: 0x4)
    TArray<FTransform> additionalWorkPositions;                                       // 0x0960 (size: 0x10)
    bool collidesWithRoads;                                                           // 0x0970 (size: 0x1)
    int32 huntingLimit;                                                               // 0x0974 (size: 0x4)
    class UDecalComponent* plagueDecal;                                               // 0x0978 (size: 0x8)
    int32 lv;                                                                         // 0x0980 (size: 0x4)
    float shaftRotationSpeed;                                                         // 0x0984 (size: 0x4)
    TArray<FVector> roadIntersectionPoints;                                           // 0x0988 (size: 0x10)
    TArray<FExtension> extensions;                                                    // 0x0998 (size: 0x10)
    class UInstancedStaticMeshComponent* fieldBorderISM;                              // 0x09A8 (size: 0x8)
    TArray<FSegment> fieldBorderSegmentsSpawned;                                      // 0x09B0 (size: 0x10)
    int32 marketDaysLeft;                                                             // 0x09C0 (size: 0x4)
    int32 artisanJob;                                                                 // 0x09C4 (size: 0x4)
    int32 typeBeforeChange;                                                           // 0x09C8 (size: 0x4)
    float fireAmt;                                                                    // 0x09CC (size: 0x4)
    bool onFire;                                                                      // 0x09D0 (size: 0x1)
    class UParticleSystemComponent* ps_fire;                                          // 0x09D8 (size: 0x8)
    class UParticleSystemComponent* PS_fireGrid;                                      // 0x09E0 (size: 0x8)
    TArray<FVector> connectedRoadPoints;                                              // 0x09F0 (size: 0x10)
    TArray<class ARoad*> connectedRoadPointRoads;                                     // 0x0A00 (size: 0x10)
    int32 secondaryPriority;                                                          // 0x0A10 (size: 0x4)
    bool allowLabourers;                                                              // 0x0A14 (size: 0x1)
    bool connectionNeedsVerifying;                                                    // 0x0A15 (size: 0x1)
    float field_sowingPerc;                                                           // 0x0A18 (size: 0x4)
    float field_ploughingPerc;                                                        // 0x0A1C (size: 0x4)
    float field_growingPerc;                                                          // 0x0A20 (size: 0x4)
    float field_harvestingPerc;                                                       // 0x0A24 (size: 0x4)
    int32 field_numReadyToHarvest;                                                    // 0x0A28 (size: 0x4)
    int32 field_numUnplowed;                                                          // 0x0A2C (size: 0x4)
    int32 field_numSown;                                                              // 0x0A30 (size: 0x4)
    bool constructionLevelUpdatePending;                                              // 0x0A60 (size: 0x1)
    TArray<FTransform> plantTransformsToDestroy;                                      // 0x0A68 (size: 0x10)
    int32 numStoredGeneric;                                                           // 0x0A78 (size: 0x4)
    int32 numStoredLarge;                                                             // 0x0A7C (size: 0x4)
    int32 numStoredPantry;                                                            // 0x0A80 (size: 0x4)
    int32 storageLimitGeneric;                                                        // 0x0A84 (size: 0x4)
    int32 storageLimitLarge;                                                          // 0x0A88 (size: 0x4)
    int32 storageLimitPantry;                                                         // 0x0A8C (size: 0x4)
    class ASMBuilding* fieldBuilding;                                                 // 0x0A90 (size: 0x8)
    class UMaterialInstanceDynamic* MI_fieldDirtMaterial;                             // 0x0A98 (size: 0x8)
    class UTextureRenderTarget2D* RT_fieldMask;                                       // 0x0AA0 (size: 0x8)
    TArray<FSubField> subfields;                                                      // 0x0AA8 (size: 0x10)
    uint8 AI_workforce;                                                               // 0x0AB8 (size: 0x1)
    FTimerHandle vegetationEraserHandle;                                              // 0x0AC0 (size: 0x8)
    uint8 vegetationEraseStage;                                                       // 0x0AC8 (size: 0x1)
    TArray<FVector> triangulatedBorderToErase;                                        // 0x0AD0 (size: 0x10)
    uint8 waterSupply;                                                                // 0x0AE0 (size: 0x1)
    TArray<class UStaticMeshComponent*> dirtPlanes;                                   // 0x0AE8 (size: 0x10)
    TArray<class UStaticMeshComponent*> roadConnectionDirtSegmentMeshes;              // 0x0AF8 (size: 0x10)
    TArray<FSegment> roadConnectionDirtSegments;                                      // 0x0B08 (size: 0x10)
    TArray<uint8> customBuildingFlags;                                                // 0x0B18 (size: 0x10)
    TArray<class UStaticMeshComponent*> moduleMasks;                                  // 0x0B28 (size: 0x10)
    bool bModuleMaster;                                                               // 0x0B38 (size: 0x1)
    class ASMBuildingMaster* moduleMasterPtr;                                         // 0x0B40 (size: 0x8)
    class ASMBuildingMaster* areaMasterBld;                                           // 0x0B48 (size: 0x8)
    int32 sellingType;                                                                // 0x0B50 (size: 0x4)
    uint8 targetSquadSize;                                                            // 0x0B54 (size: 0x1)
    int32 houseVariety;                                                               // 0x0B58 (size: 0x4)
    int32 houseVarietyBPart;                                                          // 0x0B5C (size: 0x4)
    bool isConnectedToTradeNetwork;                                                   // 0x0B60 (size: 0x1)
    TArray<class UStaticMeshComponent*> doors;                                        // 0x0B68 (size: 0x10)
    TArray<int32> doorSpatialGridIndex;                                               // 0x0B78 (size: 0x10)
    TArray<class UStaticMeshComponent*> walls;                                        // 0x0B88 (size: 0x10)
    TArray<uint8> requirements;                                                       // 0x0B98 (size: 0x10)
    TArray<FTransform> handcartSlots;                                                 // 0x0BA8 (size: 0x10)
    bool needsRefueling;                                                              // 0x0BE0 (size: 0x1)
    bool refueled;                                                                    // 0x0BE1 (size: 0x1)
    int32 refuelDay;                                                                  // 0x0BE4 (size: 0x4)
    uint8 stockFuelFor;                                                               // 0x0BE8 (size: 0x1)
    TArray<FTransform> freeStallTransforms;                                           // 0x0BF0 (size: 0x10)
    FAnimalSpace animalSpaceCache;                                                    // 0x0C00 (size: 0x5)
    uint8 extraFamilies;                                                              // 0x0C05 (size: 0x1)
    TArray<FGood> distributedGoods;                                                   // 0x0C08 (size: 0x10)
    TArray<class AActor*> blueprints;                                                 // 0x0C28 (size: 0x10)
    TArray<class AActor*> blueprintGhosts;                                            // 0x0C38 (size: 0x10)
    TArray<FGood> equipmentDistributionReserve;                                       // 0x0C50 (size: 0x10)
    int32 productionFocus;                                                            // 0x0C60 (size: 0x4)
    TArray<int32> storageFilter;                                                      // 0x0C68 (size: 0x10)
    EBuildingFunction buildingFunction;                                               // 0x0C78 (size: 0x1)
    int32 mourningPeriod;                                                             // 0x0C7C (size: 0x4)
    class AActor* VAMP_AnimatedBuildingBP;                                            // 0x0C80 (size: 0x8)
    bool VAMP_isPlaying;                                                              // 0x0C88 (size: 0x1)
    class UInstancedStaticMeshComponent* instancedWallComponent;                      // 0x0C90 (size: 0x8)
    TArray<FSegment2D> instancedWallSegments;                                         // 0x0C98 (size: 0x10)
    TArray<int32> instancedWallSegmentIDsSpawned;                                     // 0x0CA8 (size: 0x10)
    TArray<int32> instancedWallSegmentIDsOmittedSpawningDueToOverlap;                 // 0x0CB8 (size: 0x10)
    TArray<class ASMUnit*> unitCache_transportTasks;                                  // 0x0CC8 (size: 0x10)
    TArray<class ASMUnit*> unitCache_ownInventory;                                    // 0x0CD8 (size: 0x10)
    TMap<int32, int32> unitCache_transportTasks_distanceGroupCache;                   // 0x0CE8 (size: 0x50)
    float unitCache_transportTasks_lastTimeCached;                                    // 0x0D38 (size: 0x4)
    TArray<class ASMUnit*> unitCache_farmingTasks;                                    // 0x0D40 (size: 0x10)
    TArray<class ASMUnit*> unitCache_craftingTasks;                                   // 0x0D50 (size: 0x10)
    TArray<int32> assignedFamilyIDs;                                                  // 0x0D70 (size: 0x10)
    TArray<int32> occupantFamilyIDs;                                                  // 0x0D80 (size: 0x10)
    class ASMBuildingMaster* trainConnectionSource;                                   // 0x0D90 (size: 0x8)
    class ASMBuildingMaster* trainConnectionTarget;                                   // 0x0D98 (size: 0x8)
    class ARegion* trainConnectionRegion;                                             // 0x0DA0 (size: 0x8)
    int32 muleTrain_buyingType;                                                       // 0x0DA8 (size: 0x4)
    int32 muleTrain_sellingType;                                                      // 0x0DAC (size: 0x4)
    class UPointLightComponent* fakeBounceLight;                                      // 0x0DB0 (size: 0x8)
    bool allowMarketStalls;                                                           // 0x0DB8 (size: 0x1)
    TArray<int32> shouldHighlightInventoryTabIDs;                                     // 0x0DC0 (size: 0x10)
    class ASMBuildingMaster* assignedToMarket;                                        // 0x0DD0 (size: 0x8)
    int32 supplyOverstocking;                                                         // 0x0E28 (size: 0x4)

    void verifyStorageProblems();
    bool useUpgrade(int32 ID);
    bool usesGoodForCrafting(int32 goodType);
    void updateVarsDependingOnConstruction();
    void updateTradeNetworkConnection();
    void updateSubfield(const int32& extensionSlot);
    void updateSnapPoints();
    void updateRoadDecalMaterials();
    void updateResourceSurplusCache();
    void updateResources(bool autoDemolish, FVector Origin);
    void updateProblems(bool periodical);
    void updatePremadeFieldPoints();
    void updateParticleSystemBasedOnWorkforce();
    void updateNearbyWindmillEfficiency();
    void updateMuleShoppingList();
    void updateHighlight();
    void updateFogshift();
    void updateFieldCache(bool ploughing, bool sowing, bool growing, bool harvesting);
    void updateFenceVisibilityBasedOnNeighbours(bool applyVisibilityChange);
    void updateFacade();
    void updateConstructionLevel(float prop, bool updateResourceSituation);
    void updateBuildingBounds2D();
    void updateBuilding();
    void updateBorder();
    bool unassignSingleWorkerFamily();
    void triangulateExtensionArea(int32 slotID);
    bool transformsContainsPosition(const TArray<FTransform>& transformArr, const FVector& Position);
    void takeOverOrAddMarketStalls();
    void StartFire();
    void spawnWallSegmentsIfNoLongerOverlapping();
    class AActor* spawnVAMPAnimatedBuildingBP(FSoftClassPath BlueprintPath, const FTransform& WorldTransform);
    void spawnSidewalkMesh(const FSegment& Segment, const FSegment& Tangents, class UStaticMesh* StaticMesh);
    void spawnShaft(const FVector& Offset);
    void spawnRetinueInside(int32 numberOfUnits, const FName& unitTemp, const FName& unitRallyTemp);
    void spawnResourceBPWorldTransform(FTransform& transf, FName resType, TSubclassOf<class AResource> resourceBP);
    void spawnRandomShed(const FTransform& Center, TArray<FName> actorTags);
    void spawnRandomClutter(const FSegment& facade);
    void spawnProceduralTownhouse();
    void spawnProceduralFloor(TArray<FVector>& Points, const float& FloorHeight);
    void spawnPlotDressing(int32 dressingType, const TArray<FVector>& sideA, const TArray<FVector>& sideB, const TArray<FVector>& sideC);
    void spawnPlantISMComponents(int32 numComponents);
    class UParticleSystemComponent* spawnParticleSystem(class UParticleSystem* systemComponent, const FTransform& trans);
    class UStaticMeshComponent* spawnModuleMask();
    void spawnManorServantsInside(int32 numServants);
    void spawnInstancedWallSegment(int32 SegmentIndex, int32 obstacleID);
    void spawnInstancedWall(const TArray<FVector>& wallSegments, bool spawnOnConstructionFinished, class UStaticMesh* wallMesh, bool eraseCurrent);
    void spawnHandcarts(int32 numCarts);
    void spawnGarrisonInside(int32 numberOfUnits, const FName& unitTemp, const FName& unitRallyTemp, int32& squadID);
    void spawnFieldDecal(const TArray<FVector>& fieldPointsArray, int8 Mask);
    void spawnFieldBorderShrubbery(const TArray<FVector>& borderPoints);
    void spawnFieldBorderSegment(const TArray<FVector>& segmentPoints, float& segmentLengthSoFar);
    void spawnComplexPlants(ECropType Type);
    void spawnComplexField(const TArray<FVector>& fieldPointsArray, int8 Mask);
    void spawnComplexFence(const TArray<FVector>& fieldPointsArray, class UStaticMesh* fenceMesh, bool spawnShrubs, class ASMBuilding* fenceBld);
    void spawnBuildingsForUpgrade(int32 upgradeID);
    class ASMUnit* spawnAnimal(EUnitRole animalRole);
    class ASMBuilding* spawnAdjustedStairs(const FTransform& transf, uint8 Type);
    bool snapToNearestRoad();
    bool shrubExistsClose(const FVector& Pos);
    void setWorkArea(const FVector& Center, const float& Range);
    void setupBuildPoints();
    void setTabIsOpen(bool IsOpen);
    void setSleep(bool newSleep);
    void SetPriority(int32 NewPriority);
    void setHuntingLimit(const int32& NewLimit);
    void setData(FBuildingDataStruct newData);
    void setCustomBuildingFlag(int32 flagID, uint8 Value);
    void setCropType(ECropType NewType);
    void setConstructionPaused(bool paused);
    void rotateShaft();
    void rotateCrops();
    void respawnSidewalk(TArray<FVector>& Positions);
    void respawnRoadDecals();
    void respawnFieldBorderISM();
    void resetWorkArea();
    void removeScaffolding();
    void removeInstancedWallSegment(int32 SegmentIndex);
    bool removeActiveWorkerFamily();
    void recreateFieldMask();
    void queueArcConnectionDrawTo(class AActor* Target);
    void putOutFire();
    void progressFire(float gameSpeed);
    void populateShrubsOnBorder(const TArray<FVector>& borderSegment, int32 subdivisions, float probability);
    void playVAMPAnimation(FName AnimationName);
    void playChimneySmoke();
    void placeDirtSegmentSplit(const FSegment& dirtSegment, class ARoad* Road);
    void placeDirtSegment(const FSegment& dirtSegment, float fatness, int32 extensionSlot, float maskID, float wholeSegmentLength);
    void placeDirtConnectionPoint(const FVector& Pos);
    int32 pickBestVariety(const TArray<int32>& Options);
    bool orderLivestock(int32 Type);
    FVector2D offsetUV_Y(const FVector2D& UV);
    FVector2D offsetUV_X(const FVector2D& UV);
    float muleTrain_getValueRatio();
    void marketDrawRoads();
    bool isWinter();
    bool isWarehouse();
    bool isStorageTypeBuilding();
    bool isResidentialBuilding();
    bool isPointWithinWorkArea(const FVector& Point);
    bool isMarketStall();
    bool isMarketAssignable();
    bool isManor();
    bool isGranary();
    bool isFlammable();
    bool isFamilyBusyAtWorkplace(const FWorkerFamily& WorkerFamily);
    bool isDesiredMilitaryStockAtHomeReached();
    bool isDeposit();
    void hireExtraRetinue();
    bool hasUpgrade(int32 upgradeID);
    bool hasRoadSnapPoints();
    bool hasResource(int32 Type, int32 amt);
    bool hasReachedTransportLimits(const FVector& requestLocation);
    bool hasOrder(const int32& orderType);
    bool hasModuleOfType(int32 moduleType);
    bool hasMaxActiveWorkerFamilies();
    bool hasEmptyWorkbench();
    bool hasAnyMarketModule();
    int32 getYieldReadyToHarvest();
    int32 getWorkerID(class ASMUnit* worker);
    int32 getWaterStorageCapacity();
    class UVARuntimeComponent* getVARuntime();
    int32 GetType();
    TArray<uint8> getTrigerringRequirements();
    TArray<int32> getTradeableGoods();
    FString getTownName();
    int32 getSurplusOfGood(int32 goodType, bool accountBringing, bool accountGrabbing, bool allowNegative);
    TArray<FGood> getSurplusMilitaryEquipment();
    float getSummedLocalMaxHp();
    float getSummedLocalHp();
    TArray<FGood> getStoredMilitaryEquipment();
    int32 getStockOfDistributedGood(int32 goodType);
    int32 getStallOwnerFamilyID();
    float getSown(int32& outNumSown);
    bool getSleep();
    FSegment getRotatedSegment(const FSegment& Segment, const FRotator& Rotation);
    FVector getRotatedOffsetPosition(const FVector& Offset, const bool& terrainAdjusted);
    class ASMBuildingMaster* getRoadConnectionBuilding();
    TArray<FGood> getRequestedMilitaryEquipment();
    class ARegion* getRegion();
    FName getRandomShedName();
    FVector getRandomPointOnPastureByLeader(const FVector& leaderPos);
    FVector getRandomPointOnPasture();
    float getRandomFloatInRangePredictable(float Min, float Max);
    TArray<int32> getProducingGoods(bool includeHidden);
    TArray<int32> getProblems();
    int32 GetPriority();
    int32 getPriceOfGood(int32 goodType);
    FRotator GetPlowPointAngle(int32 plantID);
    TArray<FTransform> getPlantTransformsForExtension(const FExtension& ext, TArray<int32>& subfieldIDs);
    class APawnCPP* getOwnerPawn();
    float getOrderProgress(const int32& orderType);
    TArray<class ASMUnit*> getOccupants();
    TArray<FWorkerFamily> getOccupantFamiliesUI();
    int32 getNumStoredLogs();
    int32 getNumResidingFamilies();
    int32 getNumReadyToHarvest();
    int32 getNumOrders(const int32& orderType);
    int32 getNumMarketStallsOfType(int32 stallType);
    int32 getNumMarketStalls();
    int32 getNumConnectedBuildingsOfFunction(EBuildingFunction Function);
    FVector2D getNumBuilders();
    int32 getNumActiveWorkerFamilies();
    TArray<uint8> getNextLevelRequirments();
    class ASMBuilding* getNearestResource(const int32& resType, const FVector& Pos);
    bool getNearestMarketplace(float& outDist, class ASMBuildingMaster*& nearestMarket);
    TArray<int32> getModuleTypes();
    int32 getModularGarrisonLimit();
    int32 getMaxYield();
    int32 getMaxWorkerFamilies();
    int32 getMaxSonsPerFamily();
    int32 getMaxResidingFamilies();
    int32 getMaxOxen();
    int32 getMaxOccupantsOfRole(EUnitRole roleToSearch);
    uint8 getMaxConstructionWorkers();
    FPair getMarketVirtualStorageData(EStorageType storageType);
    int32 getMarketSupplyCapacity();
    TArray<FGood> getMarketSupply();
    FPair getMarketStorageData(EStorageType storageType);
    int32 getLowestImportPrice(int32 goodType, bool ignoreTradeRouteRequirements);
    int32 getLootType();
    EUnitRole getLivestockWorkerRole();
    int32 getJobType();
    int32 getItemIDFromCropType(ECropType Type);
    FItem getItem(const int32& ItemId);
    bool getIsTabOpened();
    TArray<FGood> getInventory(bool includeModules);
    FPair getImportPriceRange(int32 goodType);
    int32 getHismIterScore(const int32& HISM);
    float getHarvested();
    TArray<int32> getGoodTypesForConstructionReserves();
    TArray<int32> getGoodTypesConsumedForCurrentProduction(bool includeTransitionary, bool includeSpecialReserve);
    int32 getGeneralGoodsMarketSupplyCapacity();
    int32 getFoodMarketSupplyCapacity();
    TArray<uint8> getFilledTrigerringRequirements();
    int32 getFieldWorkers();
    int32 getFieldReadyToSow();
    int32 getExtensionHISM(const int32& ExtensionType);
    float getDistToComplexBorder(const FVector& P, FVector& outDirToBorder);
    FString getDisplayNameKey();
    TArray<FGood> getDesiredMilitaryEquipmentStockAtHome();
    FBuildingDataStruct getData();
    float getDailyPlantGrowth();
    uint8 getCustomBuildingFlag(int32 flagID);
    int32 getCurrentlyProducedGoodType();
    float getCurrentFoodSpoilageRate(int32 goodType);
    ECropType getCropType();
    TArray<int32> getCraftingConsumedGoodTypes(bool includeTransitionary, bool includeSpecialReserve);
    FName getConstructionStatus();
    FVector2D getConstructionResourceSituation();
    int32 getConstructionQueueID();
    float getConstructionProgress();
    bool getConstructionPaused();
    TArray<class ASMBuildingMaster*> getConnectedSupplyBuildings();
    TArray<FGood> getCastleReconstructionCost();
    FVector getBuildingEntrancePos();
    TArray<class ASMUnit*> getBoundRetinue();
    int32 getBestHismForFacadeLength(float Length, float& outScale, int32 Level);
    float getAvgPloughProgress(int32& outNumUnplowed);
    float getAvgCropProgress();
    float getAverageCropFertility(ECropType cropID);
    TArray<FGood> getAverageConsumption();
    int32 getAvailableExportPrice(int32 goodType);
    TArray<class ASMUnit*> getAttendingMerchants();
    TArray<FGood> getAssignedMilitaryEquipmentMinusAlreadyWearing();
    TArray<FGood> getAssignedMilitaryEquipment();
    TArray<FWorkerFamily> getAssignedFamiliesUI();
    TArray<class ASMUnit*> getAnimalsCurrentlyOnPasture();
    TArray<class ASMUnit*> getAnimals();
    TArray<class ASMUnit*> getAllWorkers();
    TArray<int32> getAllPossibleUpgrades();
    FTransform fitModuleTransformAlongBorder(const TArray<FVector>& smoothSegment, const TArray<FVector>& colliderSegment, float distanceAlong, float moduleWidthHalf, float moduleHeightHalf, float collisionDistanceIncrementValue);
    void fitModuleAlongBorder(FName assemblyName, const TArray<FVector>& smoothSegment, float distanceAlong, float moduleWidthHalf, int32 extensionSlot, TArray<FName> moduleTags);
    FVector fitGround(const FVector& Offset);
    void finishConstruction();
    class ARegion* findRegionByName(FString regionName);
    void findRegionAndOwner(class ARegion* setRegion);
    bool findPlantByPos(const FVector& Pos, FPlant& outPlant);
    int32 findOrAddPathfindingObstacle();
    bool findHitchingPoint(FVector& OutPosition, FRotator& OutRotation);
    bool fieldBorderSegmentExists(const FSegment& Segment, const TArray<class ASMBuildingMaster*> nearbyBuildings);
    void eraseVegetationSlow();
    void eraseVegetation(const TArray<FVector>& triangulatedBorderToCheck);
    void eraseCrops(bool erasePlowing);
    void eraseBaseDirtPlanes();
    void drawPeopleArcs();
    void drawMarketArcs();
    bool doesWallSegmentOverlap(const FSegment2D& wallSegment);
    bool doesTouchBuilding(class ASMBuildingMaster* building, const float& maxDistSq);
    bool doesFlipFlopProduction();
    bool doesFenceOverlapAnyUnhiddenNeighbourFence(class USplineMeshComponent* fenceMesh);
    bool doesDistributeRequirementGoods();
    bool doesBuildingConsumeResource(int32 Type, bool includingForConstruction, bool includeWeaponReservation, bool includeTrade);
    void distributeMarketGoods(TArray<class ASMBuildingMaster*> residentials, TArray<FGood>& toDistribute);
    bool displayStorageUI();
    void discoverBuildings();
    void discover();
    void diminishFire(float amt);
    void destroyBuildingMaster(bool destroyCarts);
    void destroyAllBuildings(bool inclResources, bool inclParticles, bool inclExtensions, bool inclUpgradeBP, bool inclFences, bool keepOuthouse);
    bool demolishSuppliesIfEmpty();
    void demolish(bool refund);
    class USpotLightComponent* createSpotlight(const FVector& Location, const FRotator& Rotation, const float& Intensity, const FColor& Color, const float& Attenuation, const float& outerCone, const bool& flicker, const FName& Name);
    void convertToBuilding(const int32& bType);
    void convertBlueprintsToBuildings();
    void consumeGoodNoCheck(int32 goodType);
    class ASMBuilding* constructResource(int32 HISM, const FVector& Offset, const FRotator& rot, const FVector& Scale, int32 resType, uint8 resourceMin, int32 stack, float StackSize, bool adjustHeight, bool absolutePosition);
    void constructResidentialBuildings(int32 Level, bool constructAPart, bool constructBPart);
    class ASMBuilding* constructBuilding(int32 HISM, FVector Offset, FRotator rot, FVector Scale, bool fullBuilding, bool absoluteTransform, bool isMainbuilding, bool adjustHeight, bool instaBuild);
    bool checkNearWell(const FVector& Pos);
    void changeTrainConnectionRegion(int32 uniqueRegionID);
    void changeMuleTrain_sellingType(int32 NewType);
    void changeMuleTrain_buyingType(int32 NewType);
    void ChangeExtension(int32 Slot, int32 NewType);
    void changeArtisanType(int32 ExtensionType);
    void changeActiveLivestockWorkers(int32 amt);
    bool canUpgrade(int32 ID, TArray<FName>& resonsCant);
    bool canSetWorkArea();
    bool canMakeAnything();
    bool canHireRetinue();
    void cancelOrder(const int32& orderType);
    bool canBuildingTypeSetupMarketStalls();
    bool canBeDemolished();
    void callMarket();
    FVector calculateOffsetForLandscapeFit();
    bool buildingIsExtension(class ASMBuilding* building);
    void beginConversion(int32 targetType);
    bool baileyHasGate();
    bool autoConnectToRoads(class ARoad* roadToConnectTo);
    bool areExtensionUpgradesAvailable();
    bool anythingReadyToHarvest();
    bool allRequirementsFilled();
    bool allDirtFlattened();
    void addToInventory(const FGood& Good);
    void addToBuildingInventory(const int32& ItemType, const int32& itemAmt);
    void addSegmentHeight(FSegment& Segment, const float& Height);
    void addRoadIntersectionSnapPointsForRoad(class ARoad* Road);
    void addRoadIntersectionSnapPoints();
    void addLocalHp(float amt);
    void addHISMOptionWeighted(TArray<int32>& Options, const int32& HISM);
    void addFieldSnapPoints();
    void addFieldRoadGuidePoints();
    class UStaticMeshComponent* addDirtPlane(int32 extensionSlot);
    bool addActiveWorkerFamily();
    void abandonAllMarketStalls();
}; // Size: 0xE30

class ASMSiegeUnit : public ASMUnit
{
}; // Size: 0xE90

class ASMUnit : public AActor
{
    FUnitDataStruct Data;                                                             // 0x0290 (size: 0x88)
    FString DisplayName;                                                              // 0x0318 (size: 0x10)
    float Radius;                                                                     // 0x032C (size: 0x4)
    class ARTSMultiEngineCPP* masterPtr;                                              // 0x0338 (size: 0x8)
    class APawnCPP* ownerPawn;                                                        // 0x0340 (size: 0x8)
    class ASMUnit* reservedTo;                                                        // 0x0348 (size: 0x8)
    class ASMBuildingMaster* animalAssignedTo;                                        // 0x0350 (size: 0x8)
    class ASMBuildingMaster* Home;                                                    // 0x0358 (size: 0x8)
    int32 instanceArrayIndex;                                                         // 0x0360 (size: 0x4)
    FVector2D instanceArrayTexturePos2D;                                              // 0x0368 (size: 0x10)
    FRotator slowRotation;                                                            // 0x0378 (size: 0x18)
    FVector slowRotationV;                                                            // 0x0390 (size: 0x18)
    FRotator Rotation;                                                                // 0x03A8 (size: 0x18)
    FVector rotationV;                                                                // 0x03C0 (size: 0x18)
    FVector finishingPos;                                                             // 0x03D8 (size: 0x18)
    FVector instanceOffset;                                                           // 0x03F0 (size: 0x18)
    FRotator offsetRot;                                                               // 0x0408 (size: 0x18)
    int32 Checkpoint;                                                                 // 0x0420 (size: 0x4)
    TArray<FVector> checkpoints;                                                      // 0x0428 (size: 0x10)
    TArray<FVector> temporalCheckpoints;                                              // 0x0438 (size: 0x10)
    TArray<FPPStruct> LPath;                                                          // 0x0448 (size: 0x10)
    float LPathSpeedfactorCache;                                                      // 0x0458 (size: 0x4)
    bool isOnBuilding;                                                                // 0x045C (size: 0x1)
    float moveDelay;                                                                  // 0x0460 (size: 0x4)
    float delayFactor;                                                                // 0x0464 (size: 0x4)
    float lastHeightCheck;                                                            // 0x0468 (size: 0x4)
    FVector realPos;                                                                  // 0x0470 (size: 0x18)
    FVector interpolatedMoveVector;                                                   // 0x0488 (size: 0x18)
    FVector obstructionV;                                                             // 0x04A0 (size: 0x18)
    FVector Target;                                                                   // 0x04B8 (size: 0x18)
    float pathCheckTimer;                                                             // 0x04D0 (size: 0x4)
    FRotator realRot;                                                                 // 0x04D8 (size: 0x18)
    uint8 obstructed;                                                                 // 0x04F0 (size: 0x1)
    bool avoidedObstruction;                                                          // 0x04F1 (size: 0x1)
    FVector pushed;                                                                   // 0x04F8 (size: 0x18)
    bool isWaiting;                                                                   // 0x0511 (size: 0x1)
    float waitingTime;                                                                // 0x0514 (size: 0x4)
    float Speed;                                                                      // 0x0518 (size: 0x4)
    float realSpeed;                                                                  // 0x051C (size: 0x4)
    bool closeToFinal;                                                                // 0x0521 (size: 0x1)
    bool dead;                                                                        // 0x0528 (size: 0x1)
    float speedFactor;                                                                // 0x0534 (size: 0x4)
    float climbingSpeedFactor;                                                        // 0x0538 (size: 0x4)
    float squadLowestClimbingSpeedFactor;                                             // 0x053C (size: 0x4)
    class ARoad* onRoad;                                                              // 0x05C0 (size: 0x8)
    class UStaticMeshComponent* Decal;                                                // 0x05D8 (size: 0x8)
    class UStaticMeshComponent* MoveDecal;                                            // 0x05E0 (size: 0x8)
    class UMaterialInterface* decalMat;                                               // 0x05E8 (size: 0x8)
    FVector interpRealPos;                                                            // 0x0628 (size: 0x18)
    bool snappedToTarget;                                                             // 0x0644 (size: 0x1)
    float leftoverSpeed;                                                              // 0x0648 (size: 0x4)
    float velo;                                                                       // 0x064C (size: 0x4)
    TArray<FVector> pathArr;                                                          // 0x06A8 (size: 0x10)
    int32 pathPoint;                                                                  // 0x06B8 (size: 0x4)
    TArray<class ASMUnit*> closeUnits;                                                // 0x06C0 (size: 0x10)
    FTimerHandle spatialUpdateHandle;                                                 // 0x06D0 (size: 0x8)
    int32 spatialGridIndex;                                                           // 0x06D8 (size: 0x4)
    FVector dir;                                                                      // 0x06E0 (size: 0x18)
    TArray<FGood> Inventory;                                                          // 0x06F8 (size: 0x10)
    int32 Action;                                                                     // 0x0718 (size: 0x4)
    class ASMUnit* actionPartner;                                                     // 0x0720 (size: 0x8)
    TArray<FTask> tasks;                                                              // 0x0738 (size: 0x10)
    uint8 wasIdle;                                                                    // 0x0748 (size: 0x1)
    uint8 monthlyConsumptionDay;                                                      // 0x074A (size: 0x1)
    int32 yearlyConsumptionDay;                                                       // 0x074C (size: 0x4)
    FConsumptionStatus ConsumptionStatus;                                             // 0x0750 (size: 0x7)
    TArray<FApprovalMemory> ApprovalMemory;                                           // 0x0758 (size: 0x10)
    float approval;                                                                   // 0x0768 (size: 0x4)
    float disease;                                                                    // 0x076C (size: 0x4)
    float woolYield;                                                                  // 0x0770 (size: 0x4)
    float baseAttack;                                                                 // 0x0774 (size: 0x4)
    float baseDefence;                                                                // 0x0778 (size: 0x4)
    float baseRange;                                                                  // 0x077C (size: 0x4)
    float baseBlock;                                                                  // 0x0780 (size: 0x4)
    float baseCharge;                                                                 // 0x0784 (size: 0x4)
    float att;                                                                        // 0x0788 (size: 0x4)
    float rangedAtt;                                                                  // 0x078C (size: 0x4)
    float def;                                                                        // 0x0790 (size: 0x4)
    float Range;                                                                      // 0x0794 (size: 0x4)
    float rangeSq;                                                                    // 0x0798 (size: 0x4)
    float shootingRange;                                                              // 0x079C (size: 0x4)
    float shootingRangeSq;                                                            // 0x07A0 (size: 0x4)
    float bLock;                                                                      // 0x07A4 (size: 0x4)
    float charge;                                                                     // 0x07A8 (size: 0x4)
    float chargeStop;                                                                 // 0x07AC (size: 0x4)
    float armorPierce;                                                                // 0x07B0 (size: 0x4)
    float shieldwallBlock;                                                            // 0x07B4 (size: 0x4)
    float morale;                                                                     // 0x07B8 (size: 0x4)
    float stamina;                                                                    // 0x07BC (size: 0x4)
    bool defenseBroken;                                                               // 0x07C0 (size: 0x1)
    float combatExperience;                                                           // 0x07C4 (size: 0x4)
    bool bHoldingLine;                                                                // 0x07C8 (size: 0x1)
    bool bFortified;                                                                  // 0x07C9 (size: 0x1)
    bool bFireAtWill;                                                                 // 0x07CA (size: 0x1)
    bool bHoldFire;                                                                   // 0x07CB (size: 0x1)
    FEquipment Equipment;                                                             // 0x07CC (size: 0x1C)
    FEquipment equipmentOnRally;                                                      // 0x07E8 (size: 0x1C)
    bool performedHit;                                                                // 0x0804 (size: 0x1)
    bool animFinished;                                                                // 0x0805 (size: 0x1)
    class ASMUnit* closestEnemy;                                                      // 0x0808 (size: 0x8)
    float closestEnemyDist;                                                           // 0x0810 (size: 0x4)
    bool battleStance;                                                                // 0x0814 (size: 0x1)
    bool closeProximity;                                                              // 0x0815 (size: 0x1)
    bool fightingStance;                                                              // 0x0816 (size: 0x1)
    bool inChargeDistance;                                                            // 0x0817 (size: 0x1)
    ELocomotionStance locomotionStance;                                               // 0x0818 (size: 0x1)
    bool force1hAttacks;                                                              // 0x0819 (size: 0x1)
    EAttackMethod attackMethod;                                                       // 0x081A (size: 0x1)
    bool attackVills;                                                                 // 0x081B (size: 0x1)
    int32 relaxingTime;                                                               // 0x081C (size: 0x4)
    int32 repetitions;                                                                // 0x0820 (size: 0x4)
    int32 targetRepetitions;                                                          // 0x0824 (size: 0x4)
    int32 queuedAction;                                                               // 0x0828 (size: 0x4)
    bool stealthing;                                                                  // 0x082C (size: 0x1)
    bool sprintMode;                                                                  // 0x082D (size: 0x1)
    float moveToEnemyRange;                                                           // 0x0830 (size: 0x4)
    class ASMUnit* following;                                                         // 0x0838 (size: 0x8)
    class ASMUnit* follower;                                                          // 0x0840 (size: 0x8)
    int32 babyTime;                                                                   // 0x0848 (size: 0x4)
    bool isAnimal;                                                                    // 0x084C (size: 0x1)
    int32 queuedItem;                                                                 // 0x0850 (size: 0x4)
    uint8 animRandomVariation;                                                        // 0x0854 (size: 0x1)
    uint8 lastPlayedVariation;                                                        // 0x0855 (size: 0x1)
    TMap<EEquipmentSlot, uint8> equipmentMeshVariations;                              // 0x0858 (size: 0x50)
    TMap<EEquipmentSlot, uint8> equipmentTextureVariations;                           // 0x08A8 (size: 0x50)
    TMap<class EEquipmentSlot, class FVector> equipmentColorSchemeUVs;                // 0x08F8 (size: 0x50)
    float shieldSymbolIndex;                                                          // 0x0948 (size: 0x4)
    float moveDecalAnim;                                                              // 0x094C (size: 0x4)
    float moveDecalAnimTarget;                                                        // 0x0950 (size: 0x4)
    bool cameraSuperClose;                                                            // 0x0954 (size: 0x1)
    bool cameraClose;                                                                 // 0x0955 (size: 0x1)
    bool cameraCenterClose;                                                           // 0x0956 (size: 0x1)
    bool cameraMid;                                                                   // 0x0957 (size: 0x1)
    float distToCameraSq;                                                             // 0x0958 (size: 0x4)
    EUnitRole currentUnitRole;                                                        // 0x095C (size: 0x1)
    EUnitRole assignedUnitRole;                                                       // 0x095D (size: 0x1)
    bool startled;                                                                    // 0x095E (size: 0x1)
    float lastStepFrame;                                                              // 0x0960 (size: 0x4)
    class ASoundBuddy* SoundBuddy;                                                    // 0x0968 (size: 0x8)
    bool hasBasicNeeds;                                                               // 0x0970 (size: 0x1)
    float meleeTraining;                                                              // 0x0974 (size: 0x4)
    float archeryTraining;                                                            // 0x0978 (size: 0x4)
    FName unitTemp;                                                                   // 0x097C (size: 0x8)
    bool squadCenterCalculated;                                                       // 0x0984 (size: 0x1)
    int32 surrounded;                                                                 // 0x0988 (size: 0x4)
    int32 exposed;                                                                    // 0x098C (size: 0x4)
    class ASMUnit* lastFiringTarget;                                                  // 0x0990 (size: 0x8)
    bool spreadOut;                                                                   // 0x0998 (size: 0x1)
    bool friendlyFirePossible;                                                        // 0x0999 (size: 0x1)
    bool friendlyFireAllowed;                                                         // 0x099A (size: 0x1)
    bool tacticalRetreat;                                                             // 0x099B (size: 0x1)
    FVector retreatPosition;                                                          // 0x09A0 (size: 0x18)
    float engagementPercentage;                                                       // 0x09B8 (size: 0x4)
    int32 DrawTime;                                                                   // 0x09BC (size: 0x4)
    class ARegion* currentRegion;                                                     // 0x09C0 (size: 0x8)
    TArray<FVector2D> targetMemory;                                                   // 0x09C8 (size: 0x10)
    class ASMBuildingMaster* chosenPasture;                                           // 0x09E0 (size: 0x8)
    int32 mountAnimFlavour;                                                           // 0x09E8 (size: 0x4)
    bool isCharging;                                                                  // 0x0A00 (size: 0x1)
    float distToFinalSq;                                                              // 0x0A04 (size: 0x4)
    float distToTargetSq;                                                             // 0x0A08 (size: 0x4)
    FVector lastDifference;                                                           // 0x0A10 (size: 0x18)
    float lastYawDiff;                                                                // 0x0A28 (size: 0x4)
    float lastLocationUpdateTime;                                                     // 0x0A2C (size: 0x4)
    float prevFrameA;                                                                 // 0x0A30 (size: 0x4)
    float prevFrameB;                                                                 // 0x0A34 (size: 0x4)
    float prevBlend;                                                                  // 0x0A38 (size: 0x4)
    float prevWheelRot;                                                               // 0x0A3C (size: 0x4)
    FVector prevActorLocation;                                                        // 0x0A40 (size: 0x18)
    FVector lastWPOIncrement;                                                         // 0x0A58 (size: 0x18)
    float avgDistToCheckpoint;                                                        // 0x0A70 (size: 0x4)
    float personalChargeThreshold;                                                    // 0x0A74 (size: 0x4)
    float personalRunThreshold;                                                       // 0x0A78 (size: 0x4)
    float diseaseResistance;                                                          // 0x0A7C (size: 0x4)
    uint8 squadAI_updateLag;                                                          // 0x0A80 (size: 0x1)
    FVector forcePush;                                                                // 0x0A88 (size: 0x18)
    int32 pushAuraLag;                                                                // 0x0AA0 (size: 0x4)
    float potential;                                                                  // 0x0AA4 (size: 0x4)
    TArray<FPotentialFactor> potentialFactors;                                        // 0x0AA8 (size: 0x10)
    EBehaviourStance behaviourStance;                                                 // 0x0AB8 (size: 0x1)
    EPushStance pushStance;                                                           // 0x0AB9 (size: 0x1)
    EPushStance pushStanceBeforeMoraleDrop;                                           // 0x0ABA (size: 0x1)
    bool moraleDropChangedStance;                                                     // 0x0ABB (size: 0x1)
    float idleThreshold;                                                              // 0x0ABC (size: 0x4)
    float smoothRotationSpeed;                                                        // 0x0AC0 (size: 0x4)
    int32 locomotionAnim;                                                             // 0x0AC4 (size: 0x4)
    bool locomotionIsIdle;                                                            // 0x0AC8 (size: 0x1)
    bool altCarryAnim;                                                                // 0x0AC9 (size: 0x1)
    int32 currAnim;                                                                   // 0x0ACC (size: 0x4)
    int32 targetAnim;                                                                 // 0x0AD4 (size: 0x4)
    float lastCharge;                                                                 // 0x0AD8 (size: 0x4)
    int32 lastSoundFrame;                                                             // 0x0ADC (size: 0x4)
    int32 currAnimMount;                                                              // 0x0AE0 (size: 0x4)
    int32 targetAnimMount;                                                            // 0x0AE4 (size: 0x4)
    bool guaranteedAttack;                                                            // 0x0AE8 (size: 0x1)
    FVector attackFormationPos;                                                       // 0x0AF0 (size: 0x18)
    bool keepingFormationWhileEngaged;                                                // 0x0B08 (size: 0x1)
    class ASMUnit* attackFormationEnemy;                                              // 0x0B10 (size: 0x8)
    float unity;                                                                      // 0x0B18 (size: 0x4)
    float Chaos;                                                                      // 0x0B1C (size: 0x4)
    bool foundCommonLpath;                                                            // 0x0B20 (size: 0x1)
    int32 equipmentLevel_body;                                                        // 0x0B2C (size: 0x4)
    int32 equipmentLevel_helmet;                                                      // 0x0B30 (size: 0x4)
    TArray<float> upgradeTimes;                                                       // 0x0B38 (size: 0x10)
    float lastShootingDrawTimeUpdateTime;                                             // 0x0B48 (size: 0x4)
    float blendedFrames_reference;                                                    // 0x0B4C (size: 0x4)
    float blendReserve_reference;                                                     // 0x0B50 (size: 0x4)
    float blendedFrames;                                                              // 0x0B54 (size: 0x4)
    float blendReserve;                                                               // 0x0B58 (size: 0x4)
    TArray<EUnitTrait> traits;                                                        // 0x0B60 (size: 0x10)
    bool unitsPassingThrough;                                                         // 0x0B70 (size: 0x1)
    bool unitsPassingSameDir;                                                         // 0x0B71 (size: 0x1)
    TArray<class ASMUnit*> possibleTargets;                                           // 0x0B78 (size: 0x10)
    float moveToFaceDot;                                                              // 0x0B88 (size: 0x4)
    float moveRightDot;                                                               // 0x0B8C (size: 0x4)
    FVector movingRightV;                                                             // 0x0B90 (size: 0x18)
    bool forceFacingForward;                                                          // 0x0BA8 (size: 0x1)
    bool movingSideways;                                                              // 0x0BA9 (size: 0x1)
    bool strafeRight;                                                                 // 0x0BAA (size: 0x1)
    bool strafeLeft;                                                                  // 0x0BAB (size: 0x1)
    bool walkForward;                                                                 // 0x0BAC (size: 0x1)
    int32 closeEnemyUpdateLag;                                                        // 0x0BB0 (size: 0x4)
    float nearThresholdSq;                                                            // 0x0BB4 (size: 0x4)
    float animSpeedFac;                                                               // 0x0BB8 (size: 0x4)
    bool squadAnyFriendlyFirePossible;                                                // 0x0BBC (size: 0x1)
    FName currentAnimset;                                                             // 0x0BC0 (size: 0x8)
    EAnimMode animMode;                                                               // 0x0BC8 (size: 0x1)
    int32 instanceUpdateLag;                                                          // 0x0BCC (size: 0x4)
    FVector lastInstacePosition;                                                      // 0x0BD0 (size: 0x18)
    FVector prevToLastInstacePosition;                                                // 0x0BE8 (size: 0x18)
    TArray<int32> roadPathPointIDs;                                                   // 0x0C00 (size: 0x10)
    class ARegion* migratedTo;                                                        // 0x0C10 (size: 0x8)
    class ASMBuildingMaster* dropsTo;                                                 // 0x0C18 (size: 0x8)
    class ARegion* lastTradedWith;                                                    // 0x0C20 (size: 0x8)
    class ARegion* lastSoldTo;                                                        // 0x0C28 (size: 0x8)
    float lastVeloUpdTime;                                                            // 0x0C30 (size: 0x4)
    bool raiding;                                                                     // 0x0C34 (size: 0x1)
    int32 itemsLooted;                                                                // 0x0C38 (size: 0x4)
    uint8 regionUpdateTimer;                                                          // 0x0C3C (size: 0x1)
    bool hasPointOfInterest;                                                          // 0x0C3D (size: 0x1)
    FVector pointOfInterest;                                                          // 0x0C40 (size: 0x18)
    bool realPosUpdated;                                                              // 0x0C58 (size: 0x1)
    bool marked;                                                                      // 0x0C59 (size: 0x1)
    float pregnancy;                                                                  // 0x0C5C (size: 0x4)
    uint8 Age;                                                                        // 0x0C60 (size: 0x1)
    class ASMBuildingMaster* garrisonedIn;                                            // 0x0C68 (size: 0x8)
    uint8 lastTrumpetTargetSquadID;                                                   // 0x0C70 (size: 0x1)
    class USkeletalMeshComponent* banner;                                             // 0x0C78 (size: 0x8)
    class UMaterialInstanceDynamic* bannerMaterialInstance;                           // 0x0C80 (size: 0x8)
    class UTextureRenderTarget2D* RT_banner;                                          // 0x0C88 (size: 0x8)
    uint8 livestockRunawayTimer;                                                      // 0x0C90 (size: 0x1)
    TArray<FVector> failedPathfindingTargets;                                         // 0x0C98 (size: 0x10)
    bool wasFollowingRoads;                                                           // 0x0CA8 (size: 0x1)
    bool stranded;                                                                    // 0x0CA9 (size: 0x1)
    bool shouldVerifyPath;                                                            // 0x0CAA (size: 0x1)
    float speedFactorWithClimbing;                                                    // 0x0CAC (size: 0x4)
    float debugDistToSFCheckpoint;                                                    // 0x0CB0 (size: 0x4)
    float debugAvgDistToSFCheckpoint;                                                 // 0x0CB4 (size: 0x4)
    bool followsIndividualPath;                                                       // 0x0CB8 (size: 0x1)
    bool shouldFinishTaskOnAnimationEnd;                                              // 0x0CB9 (size: 0x1)
    bool taskFlipFlop;                                                                // 0x0CBA (size: 0x1)
    FName taskLabelOverride;                                                          // 0x0CBC (size: 0x8)
    uint8 intersectionCounter;                                                        // 0x0CCC (size: 0x1)
    TArray<class ARoad*> pathArr_roadCache;                                           // 0x0CD0 (size: 0x10)
    FVector laggingBottomPos;                                                         // 0x0CE0 (size: 0x18)
    bool isBeingRallied;                                                              // 0x0CF8 (size: 0x1)
    FTransform rallyingTransform;                                                     // 0x0D00 (size: 0x60)
    int32 currAnimAction;                                                             // 0x0D60 (size: 0x4)
    TArray<FString> unitDebugLog;                                                     // 0x0D68 (size: 0x10)
    uint8 voiceID;                                                                    // 0x0D78 (size: 0x1)
    TWeakObjectPtr<class UVARuntimeComponent> VARuntime;                              // 0x0D7C (size: 0x8)
    TArray<TWeakObjectPtr<UVAISMControllerAbstract>> VAMPControllers;                 // 0x0D88 (size: 0x10)
    class UDataTable* currentAnimsetDT;                                               // 0x0D98 (size: 0x8)
    float currentAnimSpd;                                                             // 0x0DA0 (size: 0x4)
    float currentAnimSpdDefault;                                                      // 0x0DA4 (size: 0x4)
    float lastTransitionTime;                                                         // 0x0DA8 (size: 0x4)
    float previouslySetTransitionDuration;                                            // 0x0DAC (size: 0x4)
    TArray<FName> quirks;                                                             // 0x0DB0 (size: 0x10)
    int32 UniqueID;                                                                   // 0x0DC0 (size: 0x4)
    int32 assignedSquadID;                                                            // 0x0DC4 (size: 0x4)
    TArray<FGood> assignedMilitaryEquipment;                                          // 0x0DC8 (size: 0x10)
    int32 workerFamilyID;                                                             // 0x0DDC (size: 0x4)
    uint8 waitingOnTransportLimitsCounter;                                            // 0x0DE0 (size: 0x1)
    TArray<class UStaticMeshComponent*> staticMeshGoods;                              // 0x0DE8 (size: 0x10)
    TArray<FTransform> staticMeshGoods_relativeTransforms;                            // 0x0DF8 (size: 0x10)
    class ASMUnit* mountActor;                                                        // 0x0E10 (size: 0x8)
    bool isMount;                                                                     // 0x0E18 (size: 0x1)
    TArray<FGood> shoppingList;                                                       // 0x0E20 (size: 0x10)
    TMap<class FName, class FString> customUnitData;                                  // 0x0E30 (size: 0x50)

    void writeUnitDebugLog(FString newLogEntry);
    bool warmUp();
    void verifyCurrentPathVsObstacleID(int32 obstacleID);
    void verifyCurrentPath();
    bool useSkill(int32 skill);
    void updateUnity();
    void updateTraits();
    void updateSquadPotential();
    void updateSquadEngagement();
    void updateSquadCohesion();
    void updateSquadCenter();
    void updateSquadAnyFriendlyFirePossible();
    void updateSquadAI();
    void updateSpreadDist();
    void updateSpeedFactor();
    void updatePotential();
    void updatePosition(bool clampToLeftoverSpeed);
    class ASMUnit* updateNearestLazyFriend();
    void updateInstanceArrayTexturePosBasedOnInstanceArrayIndex();
    void updateFrame(float Delta);
    void updateEquipmentStats();
    void updateDecalVisibility();
    void updateCurrentRegion(bool squadCenter);
    void updateCurrAnimValue();
    void updateConsumption(int32 dayOfTheMonth, int32 dayOfTheYear);
    void unhideVAMPSLot(EEquipmentSlot Slot);
    bool unequipLevelledEquipmentFromSquad(bool isHelmet, const int32& Level);
    bool unequip(EEquipmentSlot Slot);
    void turnToSoldierJoinSquad(int32 squadToJoin);
    void turnToBandit();
    void triggerSquadRetreat();
    void triggerEnemyCheer(class ARegion* Region);
    void triggerChargeAnim(class ASMUnit* againstUnit);
    void transferTo(class ARegion* targetRegion, bool clearHomeAndWorkpalce, bool accomodate);
    void step();
    void startleWholeSquad();
    void startle();
    void squadRetreatAndReformIfClose();
    void squadReform();
    bool squadOnPosition(const float& Percentage, bool excludeStragglers);
    bool squadIsTargetingThis(class ASMUnit* unit);
    bool squadFinishedRecruiting();
    void spawnStaticGoodVisualization();
    void spawnBanner();
    void spatialUpdate();
    void sortBuildingsByDistance(TArray<class ASMBuildingMaster*>& bld, TArray<class ASMBuildingMaster*>& sorted);
    void setVAMPControllerCustomData(EEquipmentSlot equimentSlot);
    void setVAMPColorSchemeUVsForSlot(EEquipmentSlot Slot, FVector newColorScheme);
    void setVAHISMVariationsToEquipment();
    void setTaskUpdateTimer();
    void setTask(const FTask& newTask);
    void setSquadNumEquipmentLevel(bool isHelmet, const int32& Level, const int32& newNum);
    void setSprintModeWholeSquad(bool NewMode);
    bool setSpreadOut_WholeSquad(const bool& newSetting);
    void setRetreatPositionWholeSquad();
    void setRaidingWholeSquad(bool newSetting);
    void setPushStance(const EPushStance& newStance, bool byMorale, bool playVoiceline);
    bool setHoldingLine(bool newSetting);
    bool setGarrisoned(class ASMBuildingMaster* bld);
    void setFriendlyFireAllowedWholeSquad(const bool& newSetting);
    void setFortified(bool newFortified);
    void setFollowingPosition(class ASMUnit* unitToFollow);
    void setData(const FUnitDataStruct& newData);
    void setCurrentUnitRole(EUnitRole newRole);
    void setCrossbowHolsterStateIfNeeded(bool holstered);
    void setBehaviourStance(const EBehaviourStance& newStance, bool playVoiceline);
    void setAnimset(FName SetName);
    void resetPersonalThresholds();
    void removeFromSquad();
    void removeFromFamilyIfHasOne(bool deleteEmptyFamily);
    void recalculateApproval();
    void pushDeerLair(const FVector& overlapPosition);
    void pushAwayCloseUnits();
    void push(const FVector& Direction);
    void projectForce(const FVector& Origin, const FVector& Vector, const float& forceRadius, bool animate);
    bool proceedHunt();
    void playVfx(class UParticleSystem* ParticleSystem, FName SocketName, FTransform Offset);
    void playSoundCueFromDatabaseIfClose(FName cueName);
    void playHitFx();
    void playGruntFxSometimesIfClose();
    void playGruntFxSometimes();
    void playDefenseAnim(const FName& attackType);
    void pickRandomName();
    bool pickNewShootingTarget();
    void pickNewLocomotionAnim();
    bool pickAttackAction(class ASMUnit* targetUnit, bool backstab);
    void performHit();
    void pasteIntoBanner(class UTextureRenderTarget2D* RenderTarget, class UTexture* Texture);
    bool ownsArtisanWorkshop();
    bool murderVillagersNear(const FVector& Position, float maxDistSq);
    void locationUpdate();
    void just_die();
    bool isWagonEquipped();
    bool isVAMPControllerVisibile(EEquipmentSlot equimentSlot);
    bool isUnitWithinMapBounds();
    bool isSquadFleeing();
    bool isSquadEngaged();
    bool isSoldier();
    bool isSkillAvailable(int32 skillID, TArray<FName>& outReasonsNot);
    bool isSkillActive(int32 skillID);
    bool isRunningAnimationPlaying();
    bool isRoleRecruitable();
    bool isRangedUnit();
    bool isPloughEquipped();
    bool isMale();
    bool isHumanCivilian(bool includeRetainers);
    bool isFamilyHead();
    bool isEquipped(int32 ItemType);
    bool isDisbanded();
    bool isChoppingTree();
    bool isBlockingPath(FSegment Path, const float& radiusSq);
    bool isAttackPathObstructedByFriend(const FVector& attackPos, class ASMUnit* outBlockingFriend);
    bool isAnimalReserved(class ASMUnit* animal);
    class ASMBuildingMaster* isAnimalOnPasture(class ASMUnit* unit, class ARegion* Region);
    bool inEditor();
    void hit(class ASMUnit* attacker, class ASMUnit* defender, bool isProjectile, float projDist, bool avoidKilling);
    void hideVAMPSLot(EEquipmentSlot Slot);
    void hideVAMPControllers();
    bool hasValidFamily();
    bool hasNoFamilyMembers();
    bool hasItem(const int32& ItemType, const int32& itemAmt);
    bool hasFailedToFindPathRecently(const FVector& targetPos);
    bool grabItemUnit(class ASMUnit* unit, int32 ItemType, int32 itemAmt, class ASMBuildingMaster* belongsTo);
    bool grabItem(class ASMBuildingMaster* building, int32 ItemType, int32 itemAmt, class ASMBuildingMaster* belongsTo);
    class ASMBuildingMaster* getWorkplace();
    int32 getVoiceID();
    class UVARuntimeComponent* getVARuntime();
    uint8 getVAMPTextureVariationIDForSlot(EEquipmentSlot Slot);
    uint8 getVAMPMeshVariationIDForSlot(EEquipmentSlot Slot);
    class UVAISMControllerAbstract* getVAMPController(EEquipmentSlot Slot);
    FVector getVAMPColorSchemeUVsForSlot(EEquipmentSlot Slot);
    FName getUnitSquadTemplateName();
    TArray<class ASMUnit*> getUnitsBlockingLine(const FSegment2D& line, const TArray<class ASMUnit*> unitsToCheck, const int32& skipID, class APawnCPP* onlyOwner);
    FVector2D getUnitArrTexturePos();
    int32 getTradeRouteMerchantsTradingGoodType();
    FName getTaskLabel();
    TArray<FName> getStatus();
    TArray<class ASMUnit*> getSquadUnits();
    TArray<EUnitTrait> getSquadTraits();
    int32 getSquadNumEquipmentLevel(bool isHelmet, const int32& Level);
    class ASMUnit* getSquadLeader();
    float getSquadFormationSpread();
    FVector getSquadCenter();
    TArray<FName> getSquadAudioTags();
    int32 getPutdownAnimationID(int32 ItemId);
    int32 getPickupAnimationID(int32 ItemId);
    int32 getNumCurrentByEquipmentLevel(bool isHelmet, const int32& Level);
    float getMeleeAttackRange(class ASMUnit* targetUnit);
    int32 getJobType();
    FName getItemVariationName(int32 goodID);
    EEquipmentSlot getItemEquipmentSlot(int32 ItemId, bool useCarryingVariationIfPossible);
    FVector getInterpolatedLocation();
    class ASMBuildingMaster* getHome();
    FVector getGroundHeight(const FVector& Location);
    class ASMBuildingMaster* getFamilyStall();
    int32 getFamilyLevel();
    int32 getEquippedID(EEquipmentSlot Slot);
    TArray<int32> getEquipmentItemsPerLevel(bool isHelmet, const int32& Level);
    TArray<FGood> getEquipmentAvailableByLevel(bool isHelmet, const int32& Level, bool includeSquad);
    TArray<class ASMUnit*> getEnemyUnitsInShootingRange(const int32& targetSquad, bool& friendlyFire);
    bool getDebugFlag(FName flagName);
    int32 getDaysTotal();
    FUnitDataStruct getData();
    FName getCurrentEquipmentVariation(EEquipmentSlot equimentSlot);
    float getCombinedRadius(class ASMUnit* unitA, class ASMUnit* unitB, bool isEnemy);
    int32 getCarryWalkAnimationID(int32 ItemId);
    int32 getCarryIdleAnimationID(int32 ItemId);
    class ASMUnit* getBlockingLineVision(class ASMUnit* unitA, class ASMUnit* unitB);
    int32 getAnimForAction();
    int32 getAmtResourceCurrentlyTransportingTo(class ASMBuildingMaster* building);
    TArray<class ASMUnit*> getAllFamilyMembers();
    int32 getActivity();
    bool freeMerchantSell();
    bool freeMerchantBuy();
    void finishTaskIfFinalRepetition();
    void finishTaskAndUpdate();
    void finishTask();
    class ASMBuildingMaster* findUnplowedFieldSimple(class ARegion* Region);
    class ASMBuildingMaster* findSourceOfFood(class ARegion* Region);
    class ASMUnit* findNearestUnreservedSheep(class ARegion* Region);
    class ASMBuildingMaster* findNearestShelter();
    class ASMBuildingMaster* findNearestOxFarm();
    class AResource* findNearestCart(const class ASMBuildingMaster* belongsTo);
    class ASMBuildingMaster* findFreePasture(class ARegion* Region, FVector& Point);
    FSegment findEngagementLine(const int32& enemySquad);
    class ASMUnit* findDrinkingBuddy();
    bool faceEnemy(bool clampRotation);
    void equipWithAnimation(const int32& ItemType);
    void equipTradeWagon();
    void equipTool(int32 goodID, bool mustFreeBothHands);
    bool equipResource(int32 goodID, bool freeHands);
    void equipFromTemplate(const FUnitTemplate& Temp, const FName& tempName, bool bannerCarrier);
    void equipAdequateCivilianClothes(bool forceChange);
    bool equip(int32 goodID, bool forceChange, bool useCarryingVariationIfPossible);
    void dropInventoryImmediate();
    void drawDebugBoxAtLocation(const FVector& Location, FColor boxColor, float boxTime, FVector BoxSize);
    void DrawDebugBox(FName debugFlag, FColor boxColor, float boxTime, FVector BoxSize);
    bool doFarmingJobs(bool autoHarvestOnly, bool neverIgnoreWorkerLimit);
    bool doesGenerateApproval();
    void discoverBuildings();
    void despawnStaticGoodVisualization();
    void despawnAllStaticGoodVisualizations();
    void deselectUnit();
    void deerStartleTick();
    void deathAnimationEnded();
    bool currentTaskIs(int32 taskID);
    void createDynamicBannerMaterial();
    void convertSheepToResource(class ASMUnit* sheep, class ASMBuildingMaster* building);
    bool consumeFood();
    FVector closestAttackPosToEnemy(class ASMUnit* Enemy, float attackRange);
    class ASMBuildingMaster* chooseFieldToWork(class ASMBuildingMaster* farm, const FName& jobType, int32 minimumPriority);
    void checkIfSquadSurrounded();
    void checkIfExposed();
    void changeMapVariationID(TMap<EEquipmentSlot, uint8>& variationMap, EEquipmentSlot Slot, int32 change);
    void changeEquipmentVariation(EEquipmentSlot Slot, FName VariationName);
    void cartLoadingUnequipGood();
    void cartLoadingEquipGood();
    bool capSpeedToPersonInFront(const FVector& currentLocation, const FVector& ProjectedLocation);
    bool canSetPushStance(const EPushStance& stanceType);
    bool canBeTrampled(class ASMUnit* unit);
    void calculateMorale(float adjustedTimeDelta);
    void attackClosestUnitFromSquadKeepSpacing(int32 squadID);
    void attackClosestUnitFromSquad(int32 squadID);
    void assignDefaultUnitRole(EUnitRole newRole);
    bool anyPersonClose(const FVector& Position);
    bool anyoneInSquadCharging();
    bool anyoneFiringAlready();
    bool anyActionInSquad(const int32& actionID);
    void animationLoopEnded(bool intraLoop);
    void addProblemIfWorkAreaEmpty(int32 resourceTypeGathered);
    void addPotentialFactor(TArray<FPotentialFactor>& potentialFactorsArray, const FPotentialFactor& newFactor);
}; // Size: 0xE90

class ASmoothForce : public AActor
{
    TArray<class ASMUnit*> affectedUnits;                                             // 0x02D0 (size: 0x10)
    TArray<class ASMUnit*> sorted;                                                    // 0x02E0 (size: 0x10)

}; // Size: 0x348

class ASnapDebrisActor : public AActor
{
    FName debrisType;                                                                 // 0x0290 (size: 0x8)
    FVector SpawnLocation;                                                            // 0x0298 (size: 0x18)
    FRotator SpawnRotation;                                                           // 0x02B0 (size: 0x18)

}; // Size: 0x2C8

class ASoundBuddy : public AActor
{
    class ARTSMultiEngineCPP* masterPtr;                                              // 0x0290 (size: 0x8)
    class UAudioComponent* ambience_wind_close;                                       // 0x0298 (size: 0x8)
    class UAudioComponent* ambience_wind_far;                                         // 0x02A0 (size: 0x8)
    class UAudioComponent* ambience_rain_close;                                       // 0x02A8 (size: 0x8)
    FTimerHandle proximityUpdateHandle;                                               // 0x02B0 (size: 0x8)
    float ambience_fieldLevel;                                                        // 0x02B8 (size: 0x4)
    float ambience_forestLevel;                                                       // 0x02BC (size: 0x4)
    float ambienceVolumeTarget_wind;                                                  // 0x02C0 (size: 0x4)
    float ambienceVolumeTarget_rain;                                                  // 0x02C4 (size: 0x4)
    TArray<class USoundBase*> ambience_stream;                                        // 0x02C8 (size: 0x10)
    TArray<class USoundBase*> weather_thunder;                                        // 0x02D8 (size: 0x10)
    TArray<class USoundBase*> ambience_fieldSounds;                                   // 0x02E8 (size: 0x10)
    TArray<class USoundBase*> ambience_forestSounds;                                  // 0x02F8 (size: 0x10)
    TArray<class USoundBase*> ambience_townSounds;                                    // 0x0308 (size: 0x10)
    TArray<FBuildingAmbience> ambience_buildings;                                     // 0x0318 (size: 0x10)
    TArray<class USoundBase*> ambience_genericTown;                                   // 0x0328 (size: 0x10)
    TArray<class USoundBase*> ambience_construction;                                  // 0x0338 (size: 0x10)
    TArray<class USoundBase*> ambience_fireplace;                                     // 0x0348 (size: 0x10)
    TArray<class USoundBase*> ambience_fireLarge;                                     // 0x0358 (size: 0x10)
    class USoundBase* cue_ambience_bigFire;                                           // 0x0368 (size: 0x8)
    TArray<class USoundBase*> ambience_flag;                                          // 0x0370 (size: 0x10)
    TArray<class USoundBase*> ambience_banner;                                        // 0x0380 (size: 0x10)
    TArray<class USoundBase*> churchBells;                                            // 0x0390 (size: 0x10)
    TArray<class USoundBase*> barks_peasants;                                         // 0x03A0 (size: 0x10)
    TArray<class USoundBase*> barks_crows;                                            // 0x03B0 (size: 0x10)
    TArray<class USoundBase*> barks_deer;                                             // 0x03C0 (size: 0x10)
    TArray<class USoundBase*> barks_sheep;                                            // 0x03D0 (size: 0x10)
    TArray<class USoundBase*> barks_oxen;                                             // 0x03E0 (size: 0x10)
    TArray<class USoundBase*> barks_chickens;                                         // 0x03F0 (size: 0x10)
    TArray<class USoundBase*> barks_horse;                                            // 0x0400 (size: 0x10)
    TArray<class USoundBase*> conversation_male;                                      // 0x0410 (size: 0x10)
    TArray<class USoundBase*> steps_grass;                                            // 0x0420 (size: 0x10)
    class USoundBase* cue_steps_grass_varB;                                           // 0x0430 (size: 0x8)
    class USoundBase* cue_steps_grass_varC;                                           // 0x0438 (size: 0x8)
    TArray<class USoundBase*> steps_dirt;                                             // 0x0440 (size: 0x10)
    TArray<class USoundBase*> steps_dirt_varB;                                        // 0x0450 (size: 0x10)
    TArray<class USoundBase*> steps_dirt_varC;                                        // 0x0460 (size: 0x10)
    TArray<class USoundBase*> steps_mud;                                              // 0x0470 (size: 0x10)
    TArray<class USoundBase*> steps_mud_varB;                                         // 0x0480 (size: 0x10)
    TArray<class USoundBase*> steps_snow;                                             // 0x0490 (size: 0x10)
    TArray<class USoundBase*> steps_horse;                                            // 0x04A0 (size: 0x10)
    TArray<class USoundBase*> steps_carriage;                                         // 0x04B0 (size: 0x10)
    TArray<class USoundBase*> steps_handcart;                                         // 0x04C0 (size: 0x10)
    TArray<class USoundBase*> steps_plough;                                           // 0x04D0 (size: 0x10)
    TArray<class USoundBase*> steps_deer;                                             // 0x04E0 (size: 0x10)
    TArray<class USoundBase*> steps_oxen;                                             // 0x04F0 (size: 0x10)
    TArray<class USoundBase*> steps_ox_rig;                                           // 0x0500 (size: 0x10)
    TArray<class USoundBase*> steps_animalSingle;                                     // 0x0510 (size: 0x10)
    TArray<class USoundBase*> steps_animalLight;                                      // 0x0520 (size: 0x10)
    TArray<class USoundBase*> steps_logSfx;                                           // 0x0530 (size: 0x10)
    TArray<class USoundBase*> steps_water;                                            // 0x0540 (size: 0x10)
    class USoundBase* cue_rustle_weapon;                                              // 0x0550 (size: 0x8)
    class USoundBase* cue_rustle_shield;                                              // 0x0558 (size: 0x8)
    class USoundBase* cue_rustle_pole;                                                // 0x0560 (size: 0x8)
    class USoundBase* cue_rustle_cloth;                                               // 0x0568 (size: 0x8)
    class USoundBase* cue_rustle_clank;                                               // 0x0570 (size: 0x8)
    class USoundBase* cue_rustle_mail;                                                // 0x0578 (size: 0x8)
    class USoundBase* cue_rustle_bow;                                                 // 0x0580 (size: 0x8)
    class USoundBase* cue_breathing;                                                  // 0x0588 (size: 0x8)
    class USoundBase* cue_male_idle;                                                  // 0x0590 (size: 0x8)
    TArray<class USoundBase*> impacts_chop;                                           // 0x0598 (size: 0x10)
    TArray<class USoundBase*> impacts_chop_far;                                       // 0x05A8 (size: 0x10)
    TArray<class USoundBase*> impacts_firewood;                                       // 0x05B8 (size: 0x10)
    TArray<class USoundBase*> impacts_mine;                                           // 0x05C8 (size: 0x10)
    TArray<class USoundBase*> impacts_build;                                          // 0x05D8 (size: 0x10)
    TArray<class USoundBase*> impacts_buildB;                                         // 0x05E8 (size: 0x10)
    TArray<class USoundBase*> impacts_splash;                                         // 0x05F8 (size: 0x10)
    TArray<class USoundBase*> impacts_splashBucket;                                   // 0x0608 (size: 0x10)
    TArray<class USoundBase*> impacts_hoe;                                            // 0x0618 (size: 0x10)
    TArray<class USoundBase*> impacts_thunderHit;                                     // 0x0628 (size: 0x10)
    class USoundBase* cue_torchHit;                                                   // 0x0638 (size: 0x8)
    TArray<class USoundBase*> quiverDraw;                                             // 0x0640 (size: 0x10)
    TArray<class USoundBase*> bowRelease;                                             // 0x0650 (size: 0x10)
    TArray<class USoundBase*> arrowImpacts;                                           // 0x0660 (size: 0x10)
    TArray<class USoundBase*> arrowHitGround;                                         // 0x0670 (size: 0x10)
    TArray<class USoundBase*> arrowHitFlesh;                                          // 0x0680 (size: 0x10)
    TArray<class USoundBase*> arrowFlybys;                                            // 0x0690 (size: 0x10)
    TArray<class USoundBase*> clothRumble;                                            // 0x06A0 (size: 0x10)
    TArray<class USoundBase*> armourClanks;                                           // 0x06B0 (size: 0x10)
    TArray<class USoundBase*> peasantGrunts;                                          // 0x06C0 (size: 0x10)
    class USoundBase* cue_deathImpact;                                                // 0x06D0 (size: 0x8)
    class USoundBase* cue_chargeImpact;                                               // 0x06D8 (size: 0x8)
    TArray<class USoundBase*> marchingSounds;                                         // 0x06E0 (size: 0x10)
    TArray<class USoundBase*> runningSounds;                                          // 0x06F0 (size: 0x10)
    TArray<class USoundBase*> chargingSounds;                                         // 0x0700 (size: 0x10)
    TArray<class USoundBase*> groupBattleSounds;                                      // 0x0710 (size: 0x10)
    TArray<class USoundBase*> groupWalkingBarksLoud;                                  // 0x0720 (size: 0x10)
    TArray<class USoundBase*> groupHorseIdle;                                         // 0x0730 (size: 0x10)
    TArray<class USoundBase*> groupHorseWalk;                                         // 0x0740 (size: 0x10)
    TArray<class USoundBase*> groupHorseRun;                                          // 0x0750 (size: 0x10)
    TArray<class USoundBase*> deathImpacts;                                           // 0x0760 (size: 0x10)
    TArray<class USoundBase*> shieldBlocks;                                           // 0x0770 (size: 0x10)
    TArray<class USoundBase*> combatGrunts;                                           // 0x0780 (size: 0x10)
    TArray<class USoundBase*> combatGruntsHit;                                        // 0x0790 (size: 0x10)
    TArray<class USoundBase*> combatGruntsDie;                                        // 0x07A0 (size: 0x10)
    TArray<class USoundBase*> trample;                                                // 0x07B0 (size: 0x10)
    TArray<class USoundBase*> victoryCheersGroup;                                     // 0x07C0 (size: 0x10)
    TArray<class USoundBase*> groupShouts;                                            // 0x07D0 (size: 0x10)
    TArray<class USoundBase*> birdFlockFlying;                                        // 0x07E0 (size: 0x10)
    TArray<class USoundBase*> birdFlock;                                              // 0x07F0 (size: 0x10)
    TArray<class USoundBase*> arrowVolley;                                            // 0x0800 (size: 0x10)
    TArray<class USoundBase*> battle_taunts;                                          // 0x0810 (size: 0x10)
    TArray<class USoundBase*> battle_idle;                                            // 0x0820 (size: 0x10)
    TArray<class USoundBase*> battle_move;                                            // 0x0830 (size: 0x10)
    TArray<class USoundBase*> battle_hold;                                            // 0x0840 (size: 0x10)
    TArray<class USoundBase*> battle_holdLine;                                        // 0x0850 (size: 0x10)
    TArray<class USoundBase*> battle_combat;                                          // 0x0860 (size: 0x10)
    TArray<class USoundBase*> battle_retreat;                                         // 0x0870 (size: 0x10)
    TArray<class USoundBase*> battle_flee;                                            // 0x0880 (size: 0x10)
    TArray<class USoundBase*> battle_charge;                                          // 0x0890 (size: 0x10)
    TArray<class USoundBase*> battle_losing;                                          // 0x08A0 (size: 0x10)
    TArray<class USoundBase*> battle_reacting;                                        // 0x08B0 (size: 0x10)
    TArray<class USoundBase*> battle_spread;                                          // 0x08C0 (size: 0x10)
    TArray<class USoundBase*> battle_idle_barks;                                      // 0x08D0 (size: 0x10)
    class USoundBase* cue_voice_far_combat;                                           // 0x08E0 (size: 0x8)
    class USoundBase* cue_voice_far_move;                                             // 0x08E8 (size: 0x8)
    class USoundBase* cue_voice_far_idle;                                             // 0x08F0 (size: 0x8)
    class USoundBase* cue_voice_far_charge;                                           // 0x08F8 (size: 0x8)
    class USoundBase* cue_voice_far_bandit;                                           // 0x0900 (size: 0x8)
    class USoundBase* cue_voice_far_hold;                                             // 0x0908 (size: 0x8)
    class USoundBase* cue_voice_far_draw;                                             // 0x0910 (size: 0x8)
    class USoundBase* cue_voice_far_loose;                                            // 0x0918 (size: 0x8)
    class USoundBase* cue_voice_far_retreat;                                          // 0x0920 (size: 0x8)
    class USoundBase* cue_voice_far_morale_low;                                       // 0x0928 (size: 0x8)
    class USoundBase* cue_voice_far_morale_high;                                      // 0x0930 (size: 0x8)
    class USoundBase* cue_voice_far_broken;                                           // 0x0938 (size: 0x8)
    class USoundBase* cue_voice_far_push;                                             // 0x0940 (size: 0x8)
    class USoundBase* cue_voice_far_attack;                                           // 0x0948 (size: 0x8)
    class USoundBase* cue_voice_bandit_idle;                                          // 0x0950 (size: 0x8)
    class USoundBase* cue_voice_bandit_move;                                          // 0x0958 (size: 0x8)
    class USoundBase* cue_voice_bandit_combat;                                        // 0x0960 (size: 0x8)
    class USoundBase* cue_voice_bandit_charge;                                        // 0x0968 (size: 0x8)
    class USoundBase* cue_voice_bandit_far_idle;                                      // 0x0970 (size: 0x8)
    class USoundBase* cue_voice_bandit_far_move;                                      // 0x0978 (size: 0x8)
    class USoundBase* cue_voice_bandit_far_combat;                                    // 0x0980 (size: 0x8)
    class USoundBase* cue_voice_bandit_far_charge;                                    // 0x0988 (size: 0x8)
    TArray<class USoundBase*> chargeHorns;                                            // 0x0990 (size: 0x10)
    TArray<class USoundBase*> tacticalRetreatHorns;                                   // 0x09A0 (size: 0x10)
    TArray<class USoundBase*> retreatHorns;                                           // 0x09B0 (size: 0x10)
    TArray<class USoundBase*> enemyRetreatHorns;                                      // 0x09C0 (size: 0x10)
    TArray<class USoundBase*> unitRecruited;                                          // 0x09D0 (size: 0x10)
    class USoundBase* cue_militiaRallyHorns;                                          // 0x09E0 (size: 0x8)
    TArray<class USoundBase*> snd_selectUnitLight;                                    // 0x09E8 (size: 0x10)
    TArray<class USoundBase*> snd_selectUnitHeavy;                                    // 0x09F8 (size: 0x10)
    TArray<class USoundBase*> snd_singleClick;                                        // 0x0A08 (size: 0x10)
    TArray<class USoundBase*> snd_doubleClick;                                        // 0x0A18 (size: 0x10)
    TArray<class USoundBase*> snd_singleAttack;                                       // 0x0A28 (size: 0x10)
    TArray<class USoundBase*> snd_doubleAttack;                                       // 0x0A38 (size: 0x10)
    TArray<class USoundBase*> snd_armyTent;                                           // 0x0A48 (size: 0x10)
    TArray<class USoundBase*> snd_coins;                                              // 0x0A58 (size: 0x10)
    TArray<class USoundBase*> snd_recruit;                                            // 0x0A68 (size: 0x10)
    TArray<class USoundBase*> snd_buildingUpgrade;                                    // 0x0A78 (size: 0x10)
    TArray<class USoundBase*> snd_residentialPop;                                     // 0x0A88 (size: 0x10)
    class USoundBase* cue_militiaRallyConfirm;                                        // 0x0A98 (size: 0x8)
    TArray<class USoundBase*> eng_filmfinken_selectGeneric;                           // 0x0AA0 (size: 0x10)
    TArray<class USoundBase*> eng_filmfinken_selectSwordsmen;                         // 0x0AB0 (size: 0x10)
    TArray<class USoundBase*> eng_filmfinken_selectHeavyInfantry;                     // 0x0AC0 (size: 0x10)
    TArray<class USoundBase*> eng_filmfinken_commandGeneric;                          // 0x0AD0 (size: 0x10)
    TArray<class USoundBase*> eng_filmfinken_commandMarch;                            // 0x0AE0 (size: 0x10)
    TArray<class USoundBase*> eng_filmfinken_commandRun;                              // 0x0AF0 (size: 0x10)
    TArray<class USoundBase*> eng_filmfinken_commandAttack;                           // 0x0B00 (size: 0x10)
    TArray<class USoundBase*> eng_filmfinken_commandCharge;                           // 0x0B10 (size: 0x10)
    TArray<class USoundBase*> eng_filmfinken_commandDraw;                             // 0x0B20 (size: 0x10)
    TArray<class USoundBase*> eng_filmfinken_commandLoose;                            // 0x0B30 (size: 0x10)
    TArray<class USoundBase*> eng_filmfinken_commandBrace;                            // 0x0B40 (size: 0x10)
    TArray<class USoundBase*> eng_filmfinken_commandHold;                             // 0x0B50 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_selectGeneric;                              // 0x0B60 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_selectSwordsmen;                            // 0x0B70 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_selectHeavyInfantry;                        // 0x0B80 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_selectBillmen;                              // 0x0B90 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_selectArchers;                              // 0x0BA0 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_commandGeneric;                             // 0x0BB0 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_commandMarch;                               // 0x0BC0 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_commandRun;                                 // 0x0BD0 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_commandAttack;                              // 0x0BE0 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_commandShoot;                               // 0x0BF0 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_commandCharge;                              // 0x0C00 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_commandDraw;                                // 0x0C10 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_commandLoose;                               // 0x0C20 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_commandBrace;                               // 0x0C30 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_commandSpread;                              // 0x0C40 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_commandHold;                                // 0x0C50 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_commandShieldwall;                          // 0x0C60 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_commandAtWill;                              // 0x0C70 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_commandVolley;                              // 0x0C80 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_stance_missileAlert;                        // 0x0C90 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_stance_balanced;                            // 0x0CA0 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_stance_push;                                // 0x0CB0 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_stance_giveGround;                          // 0x0CC0 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_stance_defensive;                           // 0x0CD0 (size: 0x10)
    TArray<class USoundBase*> eng_matthewtw_militia;                                  // 0x0CE0 (size: 0x10)
    TArray<class USoundBase*> eng_matthewtw_employ_generic;                           // 0x0CF0 (size: 0x10)
    TArray<class USoundBase*> eng_matthewtw_employ_hunters;                           // 0x0D00 (size: 0x10)
    TArray<class USoundBase*> eng_matthewtw_employ_camps;                             // 0x0D10 (size: 0x10)
    TArray<class USoundBase*> eng_matthewtw_employ_builders;                          // 0x0D20 (size: 0x10)
    class USoundBase* cue_zoomOnPeasant;                                              // 0x0D30 (size: 0x8)
    class USoundBase* cue_zoomOnPeasantLT;                                            // 0x0D38 (size: 0x8)
    class USoundBase* cue_placeWall;                                                  // 0x0D40 (size: 0x8)
    class USoundBase* cue_firewoodCollapse;                                           // 0x0D48 (size: 0x8)
    class USoundBase* cue_hammerDown;                                                 // 0x0D50 (size: 0x8)
    class USoundBase* Cue_ProcessLog;                                                 // 0x0D58 (size: 0x8)
    class USoundBase* cue_smashIron;                                                  // 0x0D60 (size: 0x8)
    FTimerHandle glooptUpdateHandle;                                                  // 0x0D68 (size: 0x8)
    TArray<class USoundBase*> gloopsPlayedNow;                                        // 0x0D80 (size: 0x10)
    TArray<class USoundBase*> gloopsPlayedLast;                                       // 0x0D90 (size: 0x10)
    TArray<class USoundBase*> gloopsPlayedBeforeLast;                                 // 0x0DA0 (size: 0x10)
    TArray<class USoundBase*> gloopsPlayedBeforeBeforeLast;                           // 0x0DB0 (size: 0x10)
    FTimerHandle pastSoundsHandle;                                                    // 0x0DC0 (size: 0x8)
    TArray<FPastSound> pastSounds;                                                    // 0x0DC8 (size: 0x10)
    class UDataTable* DT_AudioCues;                                                   // 0x0DD8 (size: 0x8)
    TArray<class ARegion*> nearbyRegions;                                             // 0x0DE0 (size: 0x10)
    TArray<class ASMBuildingMaster*> nearbyBuildings;                                 // 0x0DF0 (size: 0x10)
    TArray<class ASMUnit*> unitsAllDistance;                                          // 0x0E00 (size: 0x10)
    TArray<class ASMUnit*> nearbyUnits;                                               // 0x0E10 (size: 0x10)
    TArray<class ASMUnit*> midDistanceUnits;                                          // 0x0E20 (size: 0x10)
    TArray<class ASMUnit*> nearbyAnimals;                                             // 0x0E30 (size: 0x10)
    float lastSeldomSound;                                                            // 0x0E40 (size: 0x4)
    float smoothBirdLevel;                                                            // 0x0E44 (size: 0x4)
    TArray<FAmbientNode> ambientNodes;                                                // 0x0E48 (size: 0x10)
    FVector ambienceCenter;                                                           // 0x0E58 (size: 0x18)
    float ambientNodeSpread;                                                          // 0x0E70 (size: 0x4)
    int32 ambientNodeWidth;                                                           // 0x0E74 (size: 0x4)

    void updateNearbySquads();
    void updateAmbientNodes();
    void updateAmbienceProximities();
    void spawnAmbientNodes();
    void playSfxSeldom(const bool is3d, const TArray<class USoundBase*>& sounds, const FVector& Pos, const float& Volume, bool ultraRare, bool isVoice);
    void playSfx(const bool is3d, const TArray<class USoundBase*>& sounds, const FVector& Pos, const float& Volume, bool canOverlap, bool isVoice, bool isUI);
    void playQuickCueFromDB(const FName& cueName, const FVector& Pos, float Volume, float Speed);
    void playQuickCue2DFromDB(const FName& cueName, float Volume, float Speed);
    void playQuickCue2D(class USoundBase* SoundCue, float Volume, float Speed);
    void playQuickCue(class USoundBase* SoundCue, const FVector& Pos, float Volume, float Speed);
    void playIncidentalAmbientSounds(const float& DeltaTime);
    void playIncidentalAmbientSingle(TArray<class USoundBase*>& soundPool, const float& chance);
    void playGloops();
    void playAmbientNode(class UAudioComponent* ambience);
    void pickAndPlay(TArray<class USoundBase*> sounds, float Volume, const FVector& Pos);
    bool isBuildingBeingConstructed(class ASMBuildingMaster* building);
    float getPlayerCameraClearance();
    bool getBuildingAmbiencePool(const int32& ID, TArray<class USoundBase*>& outSoundPool);
    void filterPastSounds();
    void adjustAmbienceVolume(float DeltaTime);
}; // Size: 0xE78

class AUnitSpawner : public AActor
{
    bool Enabled;                                                                     // 0x0290 (size: 0x1)
    bool ownedByRegion;                                                               // 0x0291 (size: 0x1)
    class ARegion* Region;                                                            // 0x0298 (size: 0x8)
    class ARTSMultiEngineCPP* masterPtr;                                              // 0x02A0 (size: 0x8)
    int32 rows;                                                                       // 0x02A8 (size: 0x4)
    int32 columns;                                                                    // 0x02AC (size: 0x4)
    bool autoAssignToEnemy;                                                           // 0x02B0 (size: 0x1)
    class UDataTable* DT_units;                                                       // 0x02B8 (size: 0x8)
    FName PresetName;                                                                 // 0x02C0 (size: 0x8)
    class ASMBuildingMaster* garrisonedIn;                                            // 0x02C8 (size: 0x8)
    FName scenario;                                                                   // 0x02D0 (size: 0x8)
    bool spawnCamped;                                                                 // 0x02D8 (size: 0x1)
    bool allowBannerCarrier;                                                          // 0x02D9 (size: 0x1)

    int32 spawnUnits();
}; // Size: 0x2E0

class AVillageSpawner : public AActor
{
    bool canBePlayer;                                                                 // 0x0290 (size: 0x1)
    bool AIOnly;                                                                      // 0x0291 (size: 0x1)
    bool bailiff;                                                                     // 0x0292 (size: 0x1)
    bool ironDeposit;                                                                 // 0x0293 (size: 0x1)
    bool farmingVillage;                                                              // 0x0294 (size: 0x1)
    bool woodcutterVillage;                                                           // 0x0295 (size: 0x1)
    bool banditCamp;                                                                  // 0x0296 (size: 0x1)
    bool stoneQuarry;                                                                 // 0x0297 (size: 0x1)
    bool Deer;                                                                        // 0x0298 (size: 0x1)
    bool Tradepoint;                                                                  // 0x0299 (size: 0x1)
    bool stoneResources;                                                              // 0x029A (size: 0x1)
    bool beeResources;                                                                // 0x029B (size: 0x1)
    bool saltDeposit;                                                                 // 0x029C (size: 0x1)
    bool clayDeposit;                                                                 // 0x029D (size: 0x1)
    bool berries;                                                                     // 0x029E (size: 0x1)
    bool shrooms;                                                                     // 0x029F (size: 0x1)
    int32 numResources;                                                               // 0x02A0 (size: 0x4)
    class ARegion* Region;                                                            // 0x02A8 (size: 0x8)
    class ARTSMultiEngineCPP* masterPtr;                                              // 0x02B0 (size: 0x8)
    TArray<uint8> Options;                                                            // 0x02B8 (size: 0x10)
    FString TownName;                                                                 // 0x02C8 (size: 0x10)
    FString PlayerName;                                                               // 0x02D8 (size: 0x10)
    TArray<class AVillageSpawner*> spawnPoints;                                       // 0x02E8 (size: 0x10)
    uint8 pointsSpawned;                                                              // 0x02F8 (size: 0x1)
    uint8 ensureOption;                                                               // 0x02F9 (size: 0x1)
    TArray<FName> scenarios;                                                          // 0x0300 (size: 0x10)
    TArray<FName> lord_traits;                                                        // 0x0310 (size: 0x10)

    void spawnAI();
    void calculateOptions();
}; // Size: 0x320

class AWeatherMaster : public AActor
{
    class ARTSMultiEngineCPP* masterPtr;                                              // 0x0290 (size: 0x8)
    FTimerHandle windUpdateHandle;                                                    // 0x02A0 (size: 0x8)
    FTimerHandle thunderHandle;                                                       // 0x02A8 (size: 0x8)
    float dayLength;                                                                  // 0x02B0 (size: 0x4)
    int32 day;                                                                        // 0x02B4 (size: 0x4)
    int64 daysTotal;                                                                  // 0x02B8 (size: 0x8)
    int32 dayOfTheMonth;                                                              // 0x02C0 (size: 0x4)
    int32 month;                                                                      // 0x02C4 (size: 0x4)
    int32 monthsTotal;                                                                // 0x02C8 (size: 0x4)
    int32 Year;                                                                       // 0x02CC (size: 0x4)
    uint8 season;                                                                     // 0x02D0 (size: 0x1)
    bool isHarvestSeason;                                                             // 0x02D1 (size: 0x1)
    float wind;                                                                       // 0x02D4 (size: 0x4)
    float windTarget;                                                                 // 0x02D8 (size: 0x4)
    float snowLevel;                                                                  // 0x02DC (size: 0x4)
    float snowTarget;                                                                 // 0x02E0 (size: 0x4)
    float snowing;                                                                    // 0x02E4 (size: 0x4)
    float targetSnowing;                                                              // 0x02E8 (size: 0x4)
    float raining;                                                                    // 0x02EC (size: 0x4)
    float targetRaining;                                                              // 0x02F0 (size: 0x4)
    float targetCloudiness;                                                           // 0x02F4 (size: 0x4)
    float wetness;                                                                    // 0x02F8 (size: 0x4)
    float cloudiness;                                                                 // 0x02FC (size: 0x4)
    float rainfall;                                                                   // 0x0300 (size: 0x4)
    float snowfall;                                                                   // 0x0304 (size: 0x4)
    bool isDrought;                                                                   // 0x0308 (size: 0x1)
    float droughtLevel;                                                               // 0x030C (size: 0x4)
    float fogLevel;                                                                   // 0x0310 (size: 0x4)
    int32 rainMeter;                                                                  // 0x0314 (size: 0x4)
    int32 daysWithoutRainVariation;                                                   // 0x0318 (size: 0x4)
    bool isWinter;                                                                    // 0x0320 (size: 0x1)
    bool winterClose;                                                                 // 0x0321 (size: 0x1)
    class UCurveFloat* TemperatureCurve;                                              // 0x0328 (size: 0x8)
    class UCurveFloat* rainfallCurve;                                                 // 0x0330 (size: 0x8)
    class UMaterialParameterCollection* buildingMPC;                                  // 0x0338 (size: 0x8)
    TArray<class UParticleSystemComponent*> Systems;                                  // 0x0340 (size: 0x10)
    class UParticleSystemComponent* psc_rain_heavy;                                   // 0x0350 (size: 0x8)
    class UParticleSystemComponent* psc_snow_light;                                   // 0x0358 (size: 0x8)
    int32 lastFieldResetDay;                                                          // 0x0360 (size: 0x4)
    bool enableThunderstorm;                                                          // 0x0364 (size: 0x1)
    uint8 sheepGrowth;                                                                // 0x0365 (size: 0x1)
    uint8 fertilityUpdateTimer;                                                       // 0x0366 (size: 0x1)
    bool damagingRain;                                                                // 0x0367 (size: 0x1)
    bool grassCulled;                                                                 // 0x0368 (size: 0x1)
    int32 daysSinceLastRaid;                                                          // 0x036C (size: 0x4)
    int32 daysUntilNextRaid;                                                          // 0x0370 (size: 0x4)
    int32 lastBanditCampSpawnedDay;                                                   // 0x0374 (size: 0x4)

    void updateWind();
    void updateMonthAndSeason();
    void updateDay();
    void spawnThunder();
    void setWeatherSpeed(float newSpeed);
    void setupSeasons(bool loadingASavedGame);
    void setLandscapeGrassCulled(bool bCullGrass);
    void resetRandomFieldSpot();
    void resetFields();
    int32 getSeasonID(int32 dayNo);
    int32 getMonthID();
    int32 getMonthFromDay(int32 dayNo);
    int32 getDayThresholdForMonth(int32 monthID);
    FGameplayDate getDayAndMonthFromDaysTotal(int32 daysTotalToBreakDown);
    int32 dayDiff(int32 dayA, int32 dayB);
    int32 calculateDayOfTheMonthForDay(int32 dayNo);
    int32 calculateDayOfTheMonth();
}; // Size: 0x378

class UBannerAnimInstance : public UAnimInstance
{
    float frameA;                                                                     // 0x0368 (size: 0x4)
    float frameB;                                                                     // 0x036C (size: 0x4)
    float Blend;                                                                      // 0x0370 (size: 0x4)
    class UAnimSequenceBase* currentClip;                                             // 0x0378 (size: 0x8)
    bool playsClip;                                                                   // 0x0380 (size: 0x1)
    float clipTotalFrames;                                                            // 0x0384 (size: 0x4)
    float clipFrame;                                                                  // 0x0388 (size: 0x4)

}; // Size: 0x390

class UControlHook : public UActorComponent
{
    FControlHookConfig config;                                                        // 0x00A0 (size: 0x10)
    FControlHookState State;                                                          // 0x00B0 (size: 0x38)
    FControlHookFlow controlFlow;                                                     // 0x00E8 (size: 0x2)
    FControlHookOnInputModeChange OnInputModeChange;                                  // 0x00F0 (size: 0x10)
    void OnControlHookInputModeChange(EControlInputMode nextInputMode, EControlInputMode lastInputMode);
    FControlHookOnUiHasPriorityChange OnUiHasPriorityChange;                          // 0x0100 (size: 0x10)
    void OnControlHookUiHasPriority(bool hasPriority);

    bool ShowControllerCursors();
    void SetInPriorityWindow(bool inPriorityWindow);
    void SetFlowInTutorial(bool inTutorial);
    void SetFlowInFullscreen(bool inFullscreen);
    void SetFlowInExplore(bool inExplore);
    void SetFlow(FControlHookFlow newFlow);
    void SendMouseToCenter();
    void SendInput(ENaviUiIntent intent);
    void SendAcceptToTool();
    class UTexture2D* GetInputIcon(EInputIconButton Button);
    FControlHookFlow GetFlow();
    void BindActiveUi(class UNaviUi* rootUi, bool isPureUi);
}; // Size: 0x110

class UImageHandler : public UObject
{

    bool WriteImageToDisk(class UTextureRenderTarget2D* TextureRenderTarget, FString SlotName);
    bool UseWrapper();
    class UTexture2D* ReadImageFromDisk(FString SlotName);
    void log(FString Msg);
    bool IsImageOnDisk(FString SlotName);
    bool DeleteImageOnDisk(FString SlotName);
    FString ComputeImageSlot(FString SlotName);
    FString ComputeImagePath(FString SlotName);
}; // Size: 0x28

class UMLAssetUserData : public UAssetUserData
{
    TArray<FString> Tags;                                                             // 0x0028 (size: 0x10)

}; // Size: 0x38

class UMLBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

    bool inventoryHasGoodType(const TArray<FGood>& Inventory, int32 goodType);
    int32 getStockOfGood(const TArray<FGood>& Inventory, int32 goodType);
    TArray<int32> getSpecialReserveGoodTypes();
    FVector2D GetAbsolutePosition(class UUserWidget* Widget);
}; // Size: 0x28

class UMLGameInstance : public UGameInstance
{
    class UPlatformManager* PlatformManager;                                          // 0x01C0 (size: 0x8)
    class UMetaMetric* MetaMetric;                                                    // 0x01C8 (size: 0x8)
    class UNetMan* NetMan;                                                            // 0x01D0 (size: 0x8)
    class UInputIconManager* InputIconManager;                                        // 0x01D8 (size: 0x8)
    class UStaticMesh* moveDecalMesh;                                                 // 0x01E0 (size: 0x8)
    TArray<FColor> allPlayerColors;                                                   // 0x01E8 (size: 0x10)
    TArray<FPortrait> lordPortraits;                                                  // 0x01F8 (size: 0x10)
    class UTexture2D* playerPortrait;                                                 // 0x0208 (size: 0x8)
    FString playerLordsName;                                                          // 0x0210 (size: 0x10)
    TArray<FString> lordNames;                                                        // 0x0220 (size: 0x10)
    TSubclassOf<class APawnCPP> MLplayerPawnBP;                                       // 0x0230 (size: 0x8)
    TArray<FPlayerStartingSetup> startingSetup;                                       // 0x0238 (size: 0x10)
    class UDataTable* DT_Quirks;                                                      // 0x0248 (size: 0x8)
    TMap<class FName, class UDataTable*> namedTables;                                 // 0x0250 (size: 0x50)
    class UDataTable* DT_GameSetupPresets;                                            // 0x02A0 (size: 0x8)
    TArray<class UTextureRenderTarget2D*> lordArms;                                   // 0x02A8 (size: 0x10)
    TArray<FCoatOfArmsData> CoatOfArmsData;                                           // 0x02B8 (size: 0x10)
    class UDataTable* DT_CoatOfArmsDatabase;                                          // 0x02C8 (size: 0x8)
    class UMaterialInterface* coatOfArmsLinearFixerMaterial;                          // 0x02D0 (size: 0x8)
    class UMaterialInstanceDynamic* coatOfArmsLinearFixerDynamic;                     // 0x02D8 (size: 0x8)
    class UMaterialInterface* simpleCoatGeneratorMaterial;                            // 0x02E0 (size: 0x8)
    FString savefileToLoad;                                                           // 0x02E8 (size: 0x10)
    FName scenario;                                                                   // 0x02F8 (size: 0x8)
    int32 numGenericAIs;                                                              // 0x0300 (size: 0x4)
    bool aggressive_AI;                                                               // 0x0304 (size: 0x1)
    uint8 AI_behaviour;                                                               // 0x0305 (size: 0x1)
    EVictoryStatus currentGameVictoryStatus;                                          // 0x0306 (size: 0x1)
    FGameSetupPreset gameSetup;                                                       // 0x0308 (size: 0xD0)
    FAudioSliders AudioSliders;                                                       // 0x03D8 (size: 0x24)
    FRTSSettings Settings;                                                            // 0x0400 (size: 0xA8)
    bool alwaysShowResourceIcons;                                                     // 0x04A8 (size: 0x1)
    bool bEnableEdgeScrolling;                                                        // 0x04A9 (size: 0x1)
    float GrassDensity;                                                               // 0x04AC (size: 0x4)
    float grassRenderingDistance;                                                     // 0x04B0 (size: 0x4)
    bool triggerQuests;                                                               // 0x04B4 (size: 0x1)
    bool autoIdleJobs;                                                                // 0x04B5 (size: 0x1)
    ENoticeSquadSetting noticeSquadSetting;                                           // 0x04B6 (size: 0x1)
    float zoomToCameraAmt;                                                            // 0x04B8 (size: 0x4)
    bool startWithCart;                                                               // 0x04C0 (size: 0x1)
    FString Version;                                                                  // 0x04C8 (size: 0x10)

    bool WriteSettingsToDisk();
    void updateResourceImmediate(class UTextureRenderTarget2D* RenderTarget, bool bClearRenderTarget);
    bool UpdateMouseFocusAndLock();
    void updateBorderFrameDataRenderThread(class UUserWidget* Widget, class UMaterialInstanceDynamic* borderMaterialDynamic);
    void updateAchievementData(FName AchievementName, int32 score);
    void sortIndexMapByDate(TMap<int32, FDateTime>& mapToSort);
    void SetZoomToCursorAmount(float zoomAmount);
    void SetUseVolumetricClouds(bool useVolumetricClouds);
    bool SetUseTutorialsOnPawn(bool newUseTutorials);
    void SetUseTutorials(bool useTutorials);
    void setUIScale(float NewScale);
    void SetNoticeEnemyBehaviour(int32 noticeEnemyBehaviour);
    bool SetMouseRelativePosition(float xRatio, float yRatio);
    void SetMouseLock(int32 IsLocked);
    void setLordsArms(int32 pawnIndex, class UTextureRenderTarget2D* armsRenderTarget, FCoatOfArmsData armsData);
    void SetGrassRenderDistance(float newGrassRenderingDistance);
    void SetGrassDensity(float newGrassDensity);
    void SetEdgeScrolling(bool useEdgeScrolling);
    bool setDayNightCycleLightSetting(bool NewValue);
    void SetDayNightCycle(bool doCycle);
    void setCurrentGameSetup(const FGameSetupPreset& setupPreset, EGameDifficulty chosenDifficulty);
    bool SetAutosavePeriodOnPawn(float newAutosavePeriod);
    void SetAutosavePeriod(float autosavePeriod);
    void SetAlwaysShowResourceIcons(bool newAlwaysShowResources);
    bool saveCoatOfArmsImage(class UObject* WorldContextObject, int32 armsIndex, FString saveName);
    void ReportSettingsChanged();
    bool ReadSettingsFromDisk();
    bool MoveMouseToStartDefault();
    bool loadCoatOfArmsImage(int32 Index, FString saveName);
    bool isCurrentGameSetup(const FGameSetupPreset& setupPreset, EGameDifficulty& outDifficultyThatMatches);
    bool isCommonResolution(FVector2D Resolution);
    class UTexture2D* ImportSaveThumbnail(class UObject* WorldContextObject, FString SaveGameName);
    float getUIScale();
    FText getTranslatedTextFromDataTable(FName textKey, class UDataTable* DataTable);
    TArray<FGood> getStartingSupplies(uint8 Level, int32& outCost);
    float getSpoilageRateFromGameSetting();
    void getSavedAutoSettingFloatValue(const FName& SettingName, float& OutValue);
    void getSavedAutoSettingBoolValue(const FName& SettingName, bool& OutValue);
    class UTexture2D* getRandomUnusedPortrait(const TArray<class APawnCPP*>& existingLords, FName Tag);
    FString getRandomName(bool female, TArray<FString> namesToAvoid);
    class UTexture2D* getPortraitByName(FName portraitName);
    class UDataTable* GetNamedTable(FName tableName);
    class UTextureRenderTarget2D* getLordsArms(int32 pawnIndex);
    FString getDefaultOSLanguage();
    FString GetAppVersion();
    void generateSimpleCoatOfArms(int32 pawnIndex, const FCoatOfArmsData& coatData);
    void ExportSaveThumbnailRT(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, FString SaveGameName);
    void DeleteSaveThumbnail(class UObject* WorldContextObject, FString SaveGameName);
}; // Size: 0x4D8

class UMLSaveGame : public USaveGame
{
    FString saveName;                                                                 // 0x0028 (size: 0x10)
    FDateTime date;                                                                   // 0x0038 (size: 0x8)
    FString saveSlot;                                                                 // 0x0040 (size: 0x10)
    uint32 UserIndex;                                                                 // 0x0050 (size: 0x4)
    TArray<FSavedRoad> savedRoads;                                                    // 0x0058 (size: 0x10)
    TArray<FSavedRegion> savedRegions;                                                // 0x0068 (size: 0x10)
    TArray<FSavedLord> savedLords;                                                    // 0x0078 (size: 0x10)
    TArray<FSavedBuilding> savedBuildings;                                            // 0x0088 (size: 0x10)
    TArray<FSavedUnit> savedUnits;                                                    // 0x0098 (size: 0x10)
    TArray<FSavedResource> savedResources;                                            // 0x00A8 (size: 0x10)
    TArray<FSavedDeposit> savedDeposits;                                              // 0x00B8 (size: 0x10)
    TArray<FVector> removedFoliage;                                                   // 0x00C8 (size: 0x10)
    TArray<FVein> waterVeins;                                                         // 0x00D8 (size: 0x10)
    TArray<int32> playersSquadsUIOrder;                                               // 0x00E8 (size: 0x10)
    TArray<FSavedSquad> squads;                                                       // 0x00F8 (size: 0x10)
    FString LevelName;                                                                // 0x0108 (size: 0x10)
    int32 day;                                                                        // 0x0118 (size: 0x4)
    int32 Year;                                                                       // 0x011C (size: 0x4)
    int32 daysTotal;                                                                  // 0x0120 (size: 0x4)
    int32 monthsTotal;                                                                // 0x0124 (size: 0x4)
    int32 rainMeter;                                                                  // 0x0128 (size: 0x4)
    float raining;                                                                    // 0x012C (size: 0x4)
    float rainingTarget;                                                              // 0x0130 (size: 0x4)
    float snowing;                                                                    // 0x0134 (size: 0x4)
    float snowingTarget;                                                              // 0x0138 (size: 0x4)
    float wetness;                                                                    // 0x013C (size: 0x4)
    float cloudiness;                                                                 // 0x0140 (size: 0x4)
    float targetCloudiness;                                                           // 0x0144 (size: 0x4)
    float snowLevel;                                                                  // 0x0148 (size: 0x4)
    float gameTimeAdjusted;                                                           // 0x014C (size: 0x4)
    uint64 gameTicksAdjusted;                                                         // 0x0150 (size: 0x8)
    int32 daysUntilNextRaid;                                                          // 0x0158 (size: 0x4)
    int32 daysSinceLastRaid;                                                          // 0x015C (size: 0x4)
    TArray<FVector> toppledTrees;                                                     // 0x0160 (size: 0x10)
    TArray<FVector2D> toppledTrees2D;                                                 // 0x0170 (size: 0x10)
    FString Version;                                                                  // 0x0180 (size: 0x10)
    FSessionAchievementData SessionAchievementData;                                   // 0x0190 (size: 0x30)
    TArray<FName> issuedStoryQuests;                                                  // 0x01C0 (size: 0x10)
    TArray<FSavedRelationsTag> relationshipTags;                                      // 0x01D0 (size: 0x10)
    FName scenario;                                                                   // 0x01E0 (size: 0x8)
    uint8 AI_behaviour;                                                               // 0x01E8 (size: 0x1)
    bool triggerQuests;                                                               // 0x01E9 (size: 0x1)
    TArray<FSavedMercenaryCompany> availableMercs;                                    // 0x01F0 (size: 0x10)
    TArray<FSavedMercenaryCompany> hiredMercs;                                        // 0x0200 (size: 0x10)
    bool enableFertilityGrid;                                                         // 0x0210 (size: 0x1)
    TArray<FLinearColor> fertilityGrid;                                               // 0x0218 (size: 0x10)
    TArray<FColor> fertilityGridQuantized;                                            // 0x0228 (size: 0x10)
    TArray<FLinearColor> fertilityGridLimits;                                         // 0x0238 (size: 0x10)
    TArray<FColor> fertilityGridLimitsQuantized;                                      // 0x0248 (size: 0x10)
    FGameSetupPreset gameSetup;                                                       // 0x0258 (size: 0xD0)
    TArray<FSavedChallenge> challenges;                                               // 0x0328 (size: 0x10)
    TMap<int32, FSavedCamera> savedCameraLocations;                                   // 0x0338 (size: 0x50)
    TArray<FName> tutorialsLeftToShow;                                                // 0x0388 (size: 0x10)
    TArray<FSavedGood> foreignMarketSupply;                                           // 0x0398 (size: 0x10)
    EVictoryStatus currentGameVictoryStatus;                                          // 0x03A8 (size: 0x1)
    int32 kingsFavour_daysLeft;                                                       // 0x03AC (size: 0x4)
    int32 lastBanditCampSpawnedDay;                                                   // 0x03B0 (size: 0x4)
    TArray<FTradeLogEntry> tradeLog;                                                  // 0x03B8 (size: 0x10)

}; // Size: 0x3C8

class UMLSaveGameDescr : public USaveGame
{
    FDateTime date;                                                                   // 0x0028 (size: 0x8)
    FString Version;                                                                  // 0x0030 (size: 0x10)
    int32 UserIndex;                                                                  // 0x0040 (size: 0x4)
    FString LevelName;                                                                // 0x0048 (size: 0x10)
    FString saveName;                                                                 // 0x0058 (size: 0x10)
    FString saveSlot;                                                                 // 0x0068 (size: 0x10)
    int32 UncompressedSize;                                                           // 0x0078 (size: 0x4)

}; // Size: 0x80

class USnapDebris : public UActorComponent
{
    TSet<ASnapDebrisActor*> activeDebris;                                             // 0x00A0 (size: 0x50)
    class UDataTable* debrisTable;                                                    // 0x00F0 (size: 0x8)

    bool ReplaceActor(FName debrisName, class AActor* actorToReplace, bool destroyReplacedActor);
    int32 CleanupDebris(FVector Location, float MaxRange, FName FilterName);
    bool AtTransform(FName debrisName, FTransform tr);
    bool AtLocationRotation(FName debrisName, FVector Location, FRotator Rotation);
}; // Size: 0xF8

class UTxtLoaderWidget : public UWidgetComponent
{
}; // Size: 0x690

class UVAISMExtra : public UVAISMController
{
}; // Size: 0x370

class UVampRuntimeExtra : public UVARuntimeComponent
{
}; // Size: 0x530

#endif
