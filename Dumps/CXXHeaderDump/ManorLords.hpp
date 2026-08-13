#ifndef UE4SS_SDK_ManorLords_HPP
#define UE4SS_SDK_ManorLords_HPP

#include "ManorLords_enums.hpp"

struct FAIBuildingRequest
{
}; // Size: 0x18

struct FAICommand
{
    FName Type;                                                                       // 0x0000 (size: 0x8)
    int32 squadID;                                                                    // 0x0008 (size: 0x4)
    int32 targetSquad;                                                                // 0x000C (size: 0x4)
    FVector Pos;                                                                      // 0x0010 (size: 0x18)
    FVector targetPos;                                                                // 0x0028 (size: 0x18)
    float Score;                                                                      // 0x0040 (size: 0x4)
    FSegment line;                                                                    // 0x0048 (size: 0x30)
    bool Close;                                                                       // 0x0078 (size: 0x1)
    TArray<FName> bTags;                                                              // 0x0080 (size: 0x10)

}; // Size: 0xB8

struct FAIRegionData
{
    FVector StartingCenter;                                                           // 0x0000 (size: 0x18)
    FVector PreferredCenter;                                                          // 0x0018 (size: 0x18)
    bool bBuiltStartingRoads;                                                         // 0x0030 (size: 0x1)
    bool bMovedStartingBuildings;                                                     // 0x0031 (size: 0x1)
    int32 WeeklyTick;                                                                 // 0x0034 (size: 0x4)
    int32 UpdateNeededGoodsTick;                                                      // 0x0038 (size: 0x4)
    int32 UpdateReservedGoodsTick;                                                    // 0x003C (size: 0x4)
    int32 SetCraftingAndProductionLimitsTick;                                         // 0x0040 (size: 0x4)
    int32 BuyMajorTradeRouteTick;                                                     // 0x0044 (size: 0x4)
    int32 SetTradeRulesAndInventoryTargetsTick;                                       // 0x0048 (size: 0x4)
    int32 RedistributeWorkersTick;                                                    // 0x004C (size: 0x4)
    TArray<FGood> NeededGoods;                                                        // 0x0050 (size: 0x10)
    TArray<FGood> ImportedGoods;                                                      // 0x0060 (size: 0x10)
    TArray<FGood> ReservedGoods;                                                      // 0x0070 (size: 0x10)

}; // Size: 0x80

struct FAlertType : public FTableRowBase
{
    class USoundBase* SFX;                                                            // 0x0008 (size: 0x8)
    class UTexture2D* Icon;                                                           // 0x0010 (size: 0x8)

}; // Size: 0x18

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
    int32 additionalRepetitions;                                                      // 0x002C (size: 0x4)

}; // Size: 0x30

struct FAnimalSpace
{
    bool shelter;                                                                     // 0x0000 (size: 0x1)
    uint8 pastureCurrent;                                                             // 0x0001 (size: 0x1)
    uint8 pastureMax;                                                                 // 0x0002 (size: 0x1)
    uint8 stableCurrent;                                                              // 0x0003 (size: 0x1)
    uint8 stableMax;                                                                  // 0x0004 (size: 0x1)

}; // Size: 0x5

struct FApproval : public FTableRowBase
{
    int32 HigherApprovalRate;                                                         // 0x0008 (size: 0x4)
    FName ImpressionRowName;                                                          // 0x000C (size: 0x8)
    TArray<FApprovalEffect> Effects;                                                  // 0x0018 (size: 0x10)
    FLinearColor Color;                                                               // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FApprovalEffect
{
    FName RowName;                                                                    // 0x0000 (size: 0x8)
    float Value;                                                                      // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FApprovalMemory
{
    EApprovalFactorType Type;                                                         // 0x0000 (size: 0x1)
    int32 day;                                                                        // 0x0004 (size: 0x4)
    int32 expirationDay;                                                              // 0x0008 (size: 0x4)
    int32 count;                                                                      // 0x000C (size: 0x4)
    bool past;                                                                        // 0x0010 (size: 0x1)
    float effectByPopulation;                                                         // 0x0014 (size: 0x4)

}; // Size: 0x18

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

struct FArtisanData
{
    int32 LowerBound;                                                                 // 0x0000 (size: 0x4)
    int32 UpperBound;                                                                 // 0x0004 (size: 0x4)
    FName Name;                                                                       // 0x0008 (size: 0x8)

}; // Size: 0x10

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
    FVector highGroundAvailable;                                                      // 0x0338 (size: 0x18)
    TArray<FName> battleTags;                                                         // 0x0350 (size: 0x10)

}; // Size: 0x370

struct FBirdData
{
    class AActor* Bird;                                                               // 0x0000 (size: 0x8)
    FVector Offset;                                                                   // 0x0008 (size: 0x18)

}; // Size: 0x20

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
}; // Size: 0xC0

struct FBuildingPartData
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    int32 hp;                                                                         // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FBuildingSocketMeshData : public FTableRowBase
{
    TSoftObjectPtr<UStaticMesh> socketMesh;                                           // 0x0008 (size: 0x28)
    TSoftObjectPtr<UStaticMesh> socketMesh_floor1;                                    // 0x0030 (size: 0x28)
    uint8 floorRestriction;                                                           // 0x0058 (size: 0x1)
    bool allFloorObstacle;                                                            // 0x0059 (size: 0x1)

}; // Size: 0x60

struct FBuildingSpawnParams
{
}; // Size: 0x98

struct FChallenge
{
    int32 ID;                                                                         // 0x0000 (size: 0x4)
    FVector Center;                                                                   // 0x0008 (size: 0x18)
    class APawnCPP* challengedPawn;                                                   // 0x0020 (size: 0x8)
    class APawnCPP* challengedBy;                                                     // 0x0028 (size: 0x8)
    TArray<class ARegion*> inRegardsTo;                                               // 0x0030 (size: 0x10)
    int32 DaysLeft;                                                                   // 0x0040 (size: 0x4)
    bool contested;                                                                   // 0x0044 (size: 0x1)
    int32 influenceStolen;                                                            // 0x0048 (size: 0x4)
    EChallengeStatus status;                                                          // 0x004C (size: 0x1)
    class ABattlefield* Battlefield;                                                  // 0x0050 (size: 0x8)
    int32 DaysInBattle;                                                               // 0x0058 (size: 0x4)
    TArray<int32> initialBattleSquadIDs;                                              // 0x0060 (size: 0x10)

}; // Size: 0x70

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
    int32 DaysLeft;                                                                   // 0x0008 (size: 0x4)
    bool blocked;                                                                     // 0x000C (size: 0x1)
    float Score;                                                                      // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FClaimStatus
{
    class APawnCPP* claimedBy;                                                        // 0x0000 (size: 0x8)
    class APawnCPP* contestedBy;                                                      // 0x0008 (size: 0x8)
    float progress;                                                                   // 0x0010 (size: 0x4)
    bool blocked;                                                                     // 0x0014 (size: 0x1)

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
    uint8 garments;                                                                   // 0x0003 (size: 0x1)
    uint8 footwear;                                                                   // 0x0004 (size: 0x1)
    uint8 sickness;                                                                   // 0x0005 (size: 0x1)
    uint8 injured;                                                                    // 0x0006 (size: 0x1)

}; // Size: 0x7

struct FControlHookConfig
{
    float deadzoneWidth;                                                              // 0x0000 (size: 0x4)
    float tiltSpeed;                                                                  // 0x0004 (size: 0x4)
    float zoomSpeed;                                                                  // 0x0008 (size: 0x4)
    float panSpeedRatio;                                                              // 0x000C (size: 0x4)
    float buildingRotateSpeed;                                                        // 0x0010 (size: 0x4)
    float mouseMoveDetectDistance;                                                    // 0x0014 (size: 0x4)
    float exploreSpeedMultiplier;                                                     // 0x0018 (size: 0x4)

}; // Size: 0x1C

struct FControlHookFlow
{
    bool inFullscreenUi;                                                              // 0x0000 (size: 0x1)
    bool inTutorial;                                                                  // 0x0001 (size: 0x1)
    bool inInventory;                                                                 // 0x0002 (size: 0x1)
    bool inCastlePlanner;                                                             // 0x0003 (size: 0x1)

}; // Size: 0x4

struct FControlHookState
{
    bool hasPlatformInited;                                                           // 0x0000 (size: 0x1)
    class UNaviUi* activeMenu;                                                        // 0x0008 (size: 0x8)
    bool isActiveMenuPureUi;                                                          // 0x0010 (size: 0x1)
    bool isActivePriorityUi;                                                          // 0x0011 (size: 0x1)
    bool inExploreMode;                                                               // 0x0012 (size: 0x1)
    bool isTimeControlsShown;                                                         // 0x0013 (size: 0x1)
    EControlInputMode lastUsedInputMode;                                              // 0x0014 (size: 0x1)
    class APawnCPP* P;                                                                // 0x0018 (size: 0x8)
    class APlayerController* pCon;                                                    // 0x0020 (size: 0x8)
    bool ignoreInputModeChanges;                                                      // 0x0028 (size: 0x1)
    bool forceGamepad;                                                                // 0x0029 (size: 0x1)
    float buildingRotateDir;                                                          // 0x002C (size: 0x4)
    bool forceCtrlPressed;                                                            // 0x0030 (size: 0x1)
    FVector2D accumulatedMenuMovement;                                                // 0x0038 (size: 0x10)
    bool analogRightIsOrbit;                                                          // 0x0048 (size: 0x1)
    bool didAcceptGotoUi;                                                             // 0x0049 (size: 0x1)
    bool inPseudoExplore;                                                             // 0x004A (size: 0x1)
    FVector2D knownMousePosition;                                                     // 0x0050 (size: 0x10)
    bool wantDragBox;                                                                 // 0x0060 (size: 0x1)
    FVector dragBoxWorldStart;                                                        // 0x0068 (size: 0x18)

}; // Size: 0x80

struct FCorners
{
    FVector A;                                                                        // 0x0000 (size: 0x18)
    FVector B;                                                                        // 0x0018 (size: 0x18)
    FVector C;                                                                        // 0x0030 (size: 0x18)
    FVector D;                                                                        // 0x0048 (size: 0x18)

}; // Size: 0x60

struct FCostArray
{
    TArray<float> Costs;                                                              // 0x0000 (size: 0x10)

}; // Size: 0x10

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

struct FExpertiseData
{
    float Expertise;                                                                  // 0x0000 (size: 0x4)
    float ExpertiseThisMonth;                                                         // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FExtension
{
    int32 Type;                                                                       // 0x0000 (size: 0x4)
    FTransform transf;                                                                // 0x0010 (size: 0x60)
    TArray<class ASMBuilding*> buildings;                                             // 0x0070 (size: 0x10)
    TArray<class UStaticMeshComponent*> dirtPlanes;                                   // 0x00C0 (size: 0x10)

}; // Size: 0xD0

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

struct FFamilyConsumptionData
{
    EItemCategory ItemCategory;                                                       // 0x0000 (size: 0x1)
    EItemSubcategory ItemSubcategory;                                                 // 0x0001 (size: 0x1)
    int32 ItemType;                                                                   // 0x0004 (size: 0x4)
    EPeriodType Period;                                                               // 0x0008 (size: 0x1)
    int32 DaysLeft;                                                                   // 0x000C (size: 0x4)
    int32 DaysInCurrentCycle;                                                         // 0x0010 (size: 0x4)
    TArray<FName> AffectedByPerks;                                                    // 0x0018 (size: 0x10)

}; // Size: 0x28

struct FFieldPoint
{
}; // Size: 0x38

struct FFieldSnapPoint
{
}; // Size: 0x58

struct FFoliageReference
{
    class UInstancedStaticMeshComponent* foliageComponent;                            // 0x0000 (size: 0x8)

}; // Size: 0x80

struct FFormationClump
{
    TArray<int32> squads;                                                             // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FGameSetupMapData
{
    TArray<FLordSetupData> AILordData;                                                // 0x0010 (size: 0x10)

}; // Size: 0x2C8

struct FGameSetupParameters : public FTableRowBase
{
    TArray<FTransform> startingLocation;                                              // 0x0008 (size: 0x10)
    TMap<int32, FTransform> startingLocation_AI;                                      // 0x0018 (size: 0x50)
    TArray<FName> questsToTrigger;                                                    // 0x0068 (size: 0x10)
    EGameGoals goals;                                                                 // 0x0078 (size: 0x1)
    int32 numGenericAILords;                                                          // 0x007C (size: 0x4)
    bool adversary_baron;                                                             // 0x0080 (size: 0x1)
    uint8 AI_aggressiveness;                                                          // 0x0081 (size: 0x1)
    uint8 maxBanditCamps;                                                             // 0x0082 (size: 0x1)
    uint8 initialBanditCamps;                                                         // 0x0083 (size: 0x1)
    uint8 raidingFrequency;                                                           // 0x0084 (size: 0x1)
    uint8 yearsUntilFirstRaid;                                                        // 0x0085 (size: 0x1)
    bool generateWaterVeins;                                                          // 0x0086 (size: 0x1)
    uint8 resourcesRandomization;                                                     // 0x0087 (size: 0x1)
    int32 startingSuppliesMultiplier;                                                 // 0x0088 (size: 0x4)
    bool armamentDelivery;                                                            // 0x008C (size: 0x1)
    float loyaltyLossRate;                                                            // 0x0090 (size: 0x4)
    float consumptionRate;                                                            // 0x0094 (size: 0x4)
    float treeGrowthRate;                                                             // 0x0098 (size: 0x4)
    int32 requirementDiscontentBias;                                                  // 0x009C (size: 0x4)
    int32 royalTaxMultiplier;                                                         // 0x00A0 (size: 0x4)
    uint8 spoilage;                                                                   // 0x00A4 (size: 0x1)
    int32 startingDay;                                                                // 0x00A8 (size: 0x4)
    uint8 weatherDamage;                                                              // 0x00AC (size: 0x1)

}; // Size: 0xB0

struct FGameSetupPreset : public FTableRowBase
{
    TSoftObjectPtr<UTexture2D> Thumbnail;                                             // 0x0008 (size: 0x28)
    bool isMainGameMode;                                                              // 0x0030 (size: 0x1)
    TArray<FName> customTags;                                                         // 0x0038 (size: 0x10)
    FName mapOverride;                                                                // 0x0048 (size: 0x8)
    TMap<class EGameDifficulty, class FGameSetupParameters> gameSetupData;            // 0x0050 (size: 0x50)
    FGameSetupParameters currentGameSetup;                                            // 0x00A0 (size: 0xB0)

}; // Size: 0x150

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

struct FGraphicsPreset
{
    TMap<FName, float> Setting;                                                       // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FHISM : public FTableRowBase
{
    FName Name;                                                                       // 0x0008 (size: 0x8)
    class UStaticMesh* Mesh;                                                          // 0x0010 (size: 0x8)
    TSoftObjectPtr<UStaticMesh> meshAsset;                                            // 0x0018 (size: 0x28)
    bool isUnit;                                                                      // 0x0040 (size: 0x1)
    int32 ID;                                                                         // 0x0044 (size: 0x4)
    int32 CustomDepth;                                                                // 0x0048 (size: 0x4)
    ECullDistanceCategory cullDistance;                                               // 0x004C (size: 0x1)

}; // Size: 0x50

struct FHistoricalPolicy
{
}; // Size: 0xC

struct FHudIconData : public FTableRowBase
{
    class UTexture2D* iconTexture;                                                    // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FIcon
{
    int32 ID;                                                                         // 0x0000 (size: 0x4)
    FVector2D Pos;                                                                    // 0x0008 (size: 0x10)
    float scale;                                                                      // 0x0018 (size: 0x4)
    float progress;                                                                   // 0x001C (size: 0x4)
    FColor Tint;                                                                      // 0x0020 (size: 0x4)
    class UTexture2D* Texture;                                                        // 0x0028 (size: 0x8)

}; // Size: 0x30

struct FIconCluster
{
    TArray<FSquadIcon> Icons;                                                         // 0x0000 (size: 0x10)
    TArray<int32> iconIDs;                                                            // 0x0010 (size: 0x10)

}; // Size: 0x20

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
    float range;                                                                      // 0x0068 (size: 0x4)
    float shootingRange;                                                              // 0x006C (size: 0x4)
    float block;                                                                      // 0x0070 (size: 0x4)
    float Speed;                                                                      // 0x0074 (size: 0x4)
    int32 Mode;                                                                       // 0x0078 (size: 0x4)
    float Weight;                                                                     // 0x007C (size: 0x4)
    float charge;                                                                     // 0x0080 (size: 0x4)
    float chargeStop;                                                                 // 0x0084 (size: 0x4)
    float armorPierce;                                                                // 0x0088 (size: 0x4)
    bool force1hAttacks;                                                              // 0x008C (size: 0x1)
    bool noStab;                                                                      // 0x008D (size: 0x1)
    EAttackMethod attackMethod;                                                       // 0x008E (size: 0x1)
    TArray<FGood> Resources;                                                          // 0x0090 (size: 0x10)
    TArray<FGood> craftingOutput;                                                     // 0x00A0 (size: 0x10)
    int32 craftingTool;                                                               // 0x00B0 (size: 0x4)
    float creationProg;                                                               // 0x00B4 (size: 0x4)
    TArray<int32> upgradesRequiredToCraft;                                            // 0x00B8 (size: 0x10)
    TArray<int32> techsRequiredToCraft;                                               // 0x00C8 (size: 0x10)
    float ExpertiseOnCraft;                                                           // 0x00D8 (size: 0x4)
    bool tradeable;                                                                   // 0x00DC (size: 0x1)
    float Value;                                                                      // 0x00E0 (size: 0x4)
    bool isMajorTrade;                                                                // 0x00E4 (size: 0x1)
    float spoilageRate;                                                               // 0x00E8 (size: 0x4)
    FName AnimSet;                                                                    // 0x00EC (size: 0x8)
    TSoftClassPtr<AResource> droppable;                                               // 0x00F8 (size: 0x28)
    uint8 craftingAnim;                                                               // 0x0120 (size: 0x1)
    int32 animID_pickup;                                                              // 0x0124 (size: 0x4)
    int32 animID_putdown;                                                             // 0x0128 (size: 0x4)
    int32 animID_carryIdle;                                                           // 0x012C (size: 0x4)
    int32 animID_carryWalk;                                                           // 0x0130 (size: 0x4)
    EStorageType storageType;                                                         // 0x0134 (size: 0x1)
    TSoftObjectPtr<UStaticMesh> staticVisualization;                                  // 0x0138 (size: 0x28)
    EItemCategory ItemCategory;                                                       // 0x0160 (size: 0x1)
    EItemSubcategory Subcategory;                                                     // 0x0161 (size: 0x1)
    uint8 requirementLevel;                                                           // 0x0162 (size: 0x1)
    class USoundBase* pickupSfx;                                                      // 0x0168 (size: 0x8)
    class USoundBase* putdownSfx;                                                     // 0x0170 (size: 0x8)
    class USoundBase* craftingSfx;                                                    // 0x0178 (size: 0x8)
    int32 LaborValue;                                                                 // 0x0180 (size: 0x4)

}; // Size: 0x188

struct FLazyPoint
{
    FVector Pos;                                                                      // 0x0000 (size: 0x18)
    FRotator rot;                                                                     // 0x0018 (size: 0x18)
    int32 anim;                                                                       // 0x0030 (size: 0x4)

}; // Size: 0x38

struct FLetter
{
    FGuid Guid;                                                                       // 0x0000 (size: 0x10)
    TArray<FName> paras;                                                              // 0x0010 (size: 0x10)
    int32 daySent;                                                                    // 0x0020 (size: 0x4)
    class APawnCPP* sender;                                                           // 0x0028 (size: 0x8)
    int32 senderSetupIndex;                                                           // 0x0030 (size: 0x4)
    class APawnCPP* recipient;                                                        // 0x0038 (size: 0x8)
    int32 recipientSetupIndex;                                                        // 0x0040 (size: 0x4)
    bool read;                                                                        // 0x0044 (size: 0x1)
    bool wasOpened;                                                                   // 0x0045 (size: 0x1)

}; // Size: 0x48

struct FLink
{
}; // Size: 0x8

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

struct FLogDate
{
    int32 day;                                                                        // 0x0000 (size: 0x4)
    int32 month;                                                                      // 0x0004 (size: 0x4)
    int32 year;                                                                       // 0x0008 (size: 0x4)

}; // Size: 0xC

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
    int32 DayOfTheYear;                                                               // 0x0098 (size: 0x4)
    bool IsDisplayed;                                                                 // 0x009C (size: 0x1)

}; // Size: 0xA0

struct FLordSetupData
{
    class UTextureRenderTarget2D* coatOfArms;                                         // 0x0000 (size: 0x8)

}; // Size: 0x30

struct FLorePoint
{
    FVector Location;                                                                 // 0x0000 (size: 0x18)
    FName localizationKey;                                                            // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FLoyaltyFactor
{
    FName Tag;                                                                        // 0x0000 (size: 0x8)
    float Value;                                                                      // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FMLBuildingPanelData
{
    int32 Type;                                                                       // 0x0000 (size: 0x4)
    EBuildingCategory Category;                                                       // 0x0004 (size: 0x1)
    bool bCreateSeparatorAfter;                                                       // 0x0005 (size: 0x1)

}; // Size: 0x8

struct FMLGameSetupSettingEntry
{
    FName PropertyName;                                                               // 0x0000 (size: 0x8)
    FName Label;                                                                      // 0x0008 (size: 0x8)
    TSoftObjectPtr<UTexture2D> Icon;                                                  // 0x0010 (size: 0x28)
    TArray<FMLGameSetupSettingOption> Options;                                        // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FMLGameSetupSettingOption
{
    FName Label;                                                                      // 0x0000 (size: 0x8)
    FName OverrideLabel;                                                              // 0x0008 (size: 0x8)
    FString Value;                                                                    // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FMLRegionProblemStyle
{
    EProblem Type;                                                                    // 0x0000 (size: 0x1)
    int32 TintColorIndex;                                                             // 0x0004 (size: 0x4)
    TSoftObjectPtr<UTexture2D> iconTexture;                                           // 0x0008 (size: 0x28)

}; // Size: 0x30

struct FMLSharedToolTipInitParams
{
    TSubclassOf<class UUserWidget> ToolTipClass;                                      // 0x0000 (size: 0x8)
    class UMLToolTipAnchor* ToolTipAnchor;                                            // 0x0008 (size: 0x8)
    FGameplayTag ToolTipAnchorTag;                                                    // 0x0010 (size: 0x8)
    class UUserWidget* ToolTipSource;                                                 // 0x0018 (size: 0x8)
    FName OpenAnimation;                                                              // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FMLSkillState
{
    bool bVisible;                                                                    // 0x0000 (size: 0x1)
    bool bEnabled;                                                                    // 0x0001 (size: 0x1)
    bool bSelected;                                                                   // 0x0002 (size: 0x1)
    TArray<FName> Reasons;                                                            // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FMLStanceState
{
    bool bVisible;                                                                    // 0x0000 (size: 0x1)
    bool bSelected;                                                                   // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FMaintenanceSupply
{
    TArray<int32> Types;                                                              // 0x0000 (size: 0x10)
    int32 Frequency;                                                                  // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FMaintenanceTrackerData
{
    int32 DurabilityLeft;                                                             // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FMaintenanceTypes
{
    TArray<int32> goodTypes;                                                          // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMapBounds
{
    FIntVector mapCentre;                                                             // 0x0000 (size: 0xC)
    int32 xBounds;                                                                    // 0x000C (size: 0x4)
    int32 yBounds;                                                                    // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FMapDataRow : public FTableRowBase
{
    TSoftObjectPtr<UTexture2D> thumbnailTexture;                                      // 0x0008 (size: 0x28)
    TSoftObjectPtr<UTexture2D> parchmentTexture;                                      // 0x0030 (size: 0x28)
    TSoftObjectPtr<UTexture2D> borderStampTexture;                                    // 0x0058 (size: 0x28)
    TSoftObjectPtr<UTexture2D> borderMaskTexture;                                     // 0x0080 (size: 0x28)
    TSoftObjectPtr<UTexture2D> regionMaskTexture;                                     // 0x00A8 (size: 0x28)
    TSoftObjectPtr<UTexture2DArray> waterbodyTexture;                                 // 0x00D0 (size: 0x28)
    TSoftObjectPtr<UTexture2D> waterbodyTexture_FromScene;                            // 0x00F8 (size: 0x28)
    TMap<class FRegionData, class TSoftObjectPtr<UTexture2D>> FillMaskPerRegion;      // 0x0120 (size: 0x50)
    TMap<class FRegionData, class TSoftObjectPtr<UTexture2D>> BorderMaskPerRegion;    // 0x0170 (size: 0x50)
    TMap<class FRegionData, class FString> RegionNames;                               // 0x01C0 (size: 0x50)
    FMapBounds MapBounds;                                                             // 0x0210 (size: 0x14)
    TSet<FVillageSpawnerData> villageSpawners;                                        // 0x0228 (size: 0x50)
    TArray<FRegionData> RegionData;                                                   // 0x0278 (size: 0x10)
    bool bDevelopmentOnly;                                                            // 0x0288 (size: 0x1)

}; // Size: 0x290

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

struct FNeedIcon
{
    FVector2D screenPos;                                                              // 0x0000 (size: 0x10)
    int32 ItemId;                                                                     // 0x0010 (size: 0x4)
    float pop;                                                                        // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FObjective
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    EObjectiveType objectiveType;                                                     // 0x0010 (size: 0x1)
    TArray<int32> targetTypes;                                                        // 0x0018 (size: 0x10)
    int32 TargetMinimum;                                                              // 0x0028 (size: 0x4)
    int32 TargetMaximum;                                                              // 0x002C (size: 0x4)
    bool trackIncrement;                                                              // 0x0030 (size: 0x1)
    TMap<class FName, class FString> customTags;                                      // 0x0038 (size: 0x50)
    bool markDone;                                                                    // 0x008C (size: 0x1)
    bool hidden;                                                                      // 0x008D (size: 0x1)

}; // Size: 0x90

struct FObstacle2D
{
}; // Size: 0x80

struct FOpenClaim
{
    class ARegion* Region;                                                            // 0x0000 (size: 0x8)
    int32 dayStarted;                                                                 // 0x0008 (size: 0x4)
    TArray<class APawnCPP*> claimingPawns;                                            // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FOption
{
    int32 bType;                                                                      // 0x0000 (size: 0x4)
    float Score;                                                                      // 0x0004 (size: 0x4)
    FVector Pos;                                                                      // 0x0008 (size: 0x18)
    FRotator rot;                                                                     // 0x0020 (size: 0x18)
    TArray<FName> Tags;                                                               // 0x0088 (size: 0x10)
    TArray<FString> debugInfo;                                                        // 0x00A0 (size: 0x10)

}; // Size: 0xC0

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
    float Score;                                                                      // 0x01A8 (size: 0x4)

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

struct FPathLink
{
}; // Size: 0x14

struct FPathPoint
{
}; // Size: 0x88

struct FPathRequest
{
}; // Size: 0x238

struct FPathResult
{
}; // Size: 0x70

struct FPathTarget
{
    FVector Pos;                                                                      // 0x0000 (size: 0x18)
    uint8 floor;                                                                      // 0x0018 (size: 0x1)
    FRotator Rotation;                                                                // 0x0020 (size: 0x18)

}; // Size: 0x38

struct FPixelFedBackend
{
    EPixelFedBackendId backendId;                                                     // 0x0000 (size: 0x1)
    FString backendName;                                                              // 0x0008 (size: 0x10)
    int32 Version;                                                                    // 0x0018 (size: 0x4)
    int32 versionMinor;                                                               // 0x001C (size: 0x4)
    FString englishName;                                                              // 0x0020 (size: 0x10)
    FPixelFedBackendChoices choices;                                                  // 0x0030 (size: 0x148)
    bool isInstalled;                                                                 // 0x0178 (size: 0x1)
    bool isAvailable;                                                                 // 0x0179 (size: 0x1)

}; // Size: 0x180

struct FPixelFedBackendChoices
{
    EPixelFedBackendId desiredBackendId;                                              // 0x0000 (size: 0x1)
    FString backendName;                                                              // 0x0008 (size: 0x10)
    FString englishName;                                                              // 0x0018 (size: 0x10)
    bool hasQualityChoices;                                                           // 0x0028 (size: 0x1)
    FString qualitySettingKey;                                                        // 0x0030 (size: 0x10)
    TArray<FName> qualityChoices;                                                     // 0x0040 (size: 0x10)
    TMap<FName, int32> qualityChoiceToCVarValue;                                      // 0x0050 (size: 0x50)
    FName qualityActive;                                                              // 0x00A0 (size: 0x8)
    FName qualityPrefered;                                                            // 0x00A8 (size: 0x8)
    bool hasFrameGenChoices;                                                          // 0x00B0 (size: 0x1)
    FString frameGenSettingKey;                                                       // 0x00B8 (size: 0x10)
    TArray<FName> frameGenChoices;                                                    // 0x00C8 (size: 0x10)
    FName frameGenActive;                                                             // 0x00D8 (size: 0x8)
    FName frameGenPrefered;                                                           // 0x00E0 (size: 0x8)
    bool hasSharpnessChoices;                                                         // 0x00E8 (size: 0x1)
    FString sharpnessSettingKey;                                                      // 0x00F0 (size: 0x10)
    TArray<FName> sharpnessChoices;                                                   // 0x0100 (size: 0x10)
    FName sharpnessActive;                                                            // 0x0110 (size: 0x8)
    FName sharpnessPrefered;                                                          // 0x0118 (size: 0x8)
    bool hasDynResChoices;                                                            // 0x0120 (size: 0x1)
    TArray<FName> dynResChoices;                                                      // 0x0128 (size: 0x10)
    FName dynResActive;                                                               // 0x0138 (size: 0x8)
    FName dynResPrefered;                                                             // 0x0140 (size: 0x8)

}; // Size: 0x148

struct FPixelFedConfiguration
{
    EPixelFedBackendId backendId;                                                     // 0x0000 (size: 0x1)
    bool qualitySet;                                                                  // 0x0001 (size: 0x1)
    FName qualityValue;                                                               // 0x0004 (size: 0x8)
    bool percentSet;                                                                  // 0x000C (size: 0x1)
    int32 overrideScreenPercentage;                                                   // 0x0010 (size: 0x4)
    bool frameGenSet;                                                                 // 0x0014 (size: 0x1)
    FName frameGenValue;                                                              // 0x0018 (size: 0x8)
    bool sharpnessSet;                                                                // 0x0020 (size: 0x1)
    FName sharpnessValue;                                                             // 0x0024 (size: 0x8)
    bool dynResSet;                                                                   // 0x002C (size: 0x1)
    FName dynResValue;                                                                // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FPixelFedFullChoiceState
{
    EPixelFedBackendId activeBackendId;                                               // 0x0000 (size: 0x1)
    TArray<FPixelFedBackendChoices> backendChoices;                                   // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FPixelFedState
{
    TMap<class EPixelFedBackendId, class FPixelFedBackend> backends;                  // 0x0000 (size: 0x50)
    int32 frameGenMultiplier;                                                         // 0x0050 (size: 0x4)
    bool showFps;                                                                     // 0x0054 (size: 0x1)
    float lastFrameFps;                                                               // 0x0058 (size: 0x4)
    EPixelFedBackendId platformPreferedBackendId;                                     // 0x005C (size: 0x1)
    EPixelFedBackendId activeBackendId;                                               // 0x005D (size: 0x1)
    EPixelFedBackendId playerPreferedBackendId;                                       // 0x005E (size: 0x1)

}; // Size: 0x60

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
    FTransform instanceTransform;                                                     // 0x0050 (size: 0x60)
    class UInstancedStaticMeshComponent* plantISM;                                    // 0x00B0 (size: 0x8)
    uint8 plantISM_id;                                                                // 0x00B8 (size: 0x1)
    bool bElevated;                                                                   // 0x00C0 (size: 0x1)
    uint8 FertilityWhenPlantedQuant;                                                  // 0x00C1 (size: 0x1)

}; // Size: 0xD0

struct FPlayerStartingSetup
{
    FVector startingLocation;                                                         // 0x0000 (size: 0x18)
    FName attachedPlayer;                                                             // 0x0018 (size: 0x8)
    bool isAI;                                                                        // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FPlotData
{
}; // Size: 0x70

struct FPlottedGood
{
}; // Size: 0x14

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
    FName messageType;                                                                // 0x0000 (size: 0x8)
    int32 daysTotal;                                                                  // 0x0008 (size: 0x4)
    class ARegion* Region;                                                            // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FPortrait : public FTableRowBase
{
    class UTexture2D* Texture;                                                        // 0x0008 (size: 0x8)
    TArray<FName> Tags;                                                               // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FPossibilityGrid
{
}; // Size: 0x20

struct FPossibilityGridRequest
{
}; // Size: 0x10

struct FPossibilityTile
{
}; // Size: 0x60

struct FPotentialFactor
{
    FName factorName;                                                                 // 0x0000 (size: 0x8)
    float effect;                                                                     // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FPotentialSnapPointLink
{
}; // Size: 0x18

struct FPreviousPlantGhost
{
}; // Size: 0x8

struct FProblem
{
    EProblem Type;                                                                    // 0x0000 (size: 0x1)
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
    FVector2D scale;                                                                  // 0x0030 (size: 0x10)
    FVector2D zScaleRange;                                                            // 0x0040 (size: 0x10)
    FVector2D cullDistances;                                                          // 0x0050 (size: 0x10)
    bool bCastShadow;                                                                 // 0x0060 (size: 0x1)
    bool alignToGround;                                                               // 0x0061 (size: 0x1)

}; // Size: 0x68

struct FProductionGraphGenerator
{
    class UTextureRenderTarget2D* RTLines;                                            // 0x0000 (size: 0x8)
    FVector2D Size;                                                                   // 0x0008 (size: 0x10)
    class UCanvas* Canvas;                                                            // 0x0020 (size: 0x8)

}; // Size: 0x100

struct FProductionLog
{
    FName regionName;                                                                 // 0x0000 (size: 0x8)
    class ARegion* SourceRegion;                                                      // 0x0008 (size: 0x8)
    TArray<FProductionLogEntry> EntriesForRegion;                                     // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FProductionLogEntry
{
    TMap<int32, int32> EndOfLogTotals;                                                // 0x0000 (size: 0x50)
    TMap<int32, int32> Produced;                                                      // 0x0050 (size: 0x50)
    TMap<int32, int32> Consumed;                                                      // 0x00A0 (size: 0x50)
    FLogDate Timestamp;                                                               // 0x00F0 (size: 0xC)

}; // Size: 0x100

struct FProductionTimeEntry
{
    double timeTaken;                                                                 // 0x0000 (size: 0x8)
    int32 numberOfTasksComplete;                                                      // 0x0008 (size: 0x4)
    FName CategoryName;                                                               // 0x000C (size: 0x8)
    FColor timeSliceColor;                                                            // 0x0014 (size: 0x4)
    EProductionCategory productionCategory;                                           // 0x0018 (size: 0x1)
    TArray<uint8> acceptedTasks;                                                      // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FProductionTrackerEntry
{
    int64 DayProduced;                                                                // 0x0000 (size: 0x8)
    int32 QuantityProduced;                                                           // 0x0008 (size: 0x4)

}; // Size: 0x10

struct FProductivityBracket
{
    uint8 LowerBound;                                                                 // 0x0000 (size: 0x1)
    uint8 UpperBound;                                                                 // 0x0001 (size: 0x1)
    FName Name;                                                                       // 0x0004 (size: 0x8)
    uint8 ProductivityBonus;                                                          // 0x000C (size: 0x1)
    FLinearColor Color;                                                               // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FProductivityFactor
{
    FName factorName;                                                                 // 0x0000 (size: 0x8)
    int32 Strength;                                                                   // 0x0008 (size: 0x4)
    bool IsPerk;                                                                      // 0x000C (size: 0x1)

}; // Size: 0x10

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
    TArray<FObjective> objectives;                                                    // 0x0008 (size: 0x10)
    TArray<FReward> rewards;                                                          // 0x0018 (size: 0x10)
    TArray<FPunishment> Punishment;                                                   // 0x0028 (size: 0x10)
    FString descr;                                                                    // 0x0038 (size: 0x10)
    int32 ID;                                                                         // 0x0048 (size: 0x4)
    int32 playedMessages;                                                             // 0x004C (size: 0x4)
    int32 tier;                                                                       // 0x0050 (size: 0x4)
    TArray<FName> choices;                                                            // 0x0058 (size: 0x10)
    TArray<FName> choicesDone;                                                        // 0x0068 (size: 0x10)
    TArray<FName> choiceQuestOverride;                                                // 0x0078 (size: 0x10)
    TArray<FName> customAcceptTriggers;                                               // 0x0088 (size: 0x10)
    TArray<FName> customRefuseTriggers;                                               // 0x0098 (size: 0x10)
    bool canRefuse;                                                                   // 0x00A8 (size: 0x1)
    int32 DaysLeft;                                                                   // 0x00AC (size: 0x4)
    bool bTracking;                                                                   // 0x00B0 (size: 0x1)
    bool bTimed;                                                                      // 0x00B1 (size: 0x1)
    bool repeats;                                                                     // 0x00B2 (size: 0x1)
    FString Name;                                                                     // 0x00B8 (size: 0x10)
    TArray<FObjective> abortTriggers;                                                 // 0x00C8 (size: 0x10)
    bool hidden;                                                                      // 0x00D8 (size: 0x1)
    bool opportunity;                                                                 // 0x00D9 (size: 0x1)
    bool letterForm;                                                                  // 0x00DA (size: 0x1)
    FName signatureOverride;                                                          // 0x00DC (size: 0x8)
    bool adjustDaysLeftToIssuedDay;                                                   // 0x00E4 (size: 0x1)
    FName focus;                                                                      // 0x00E8 (size: 0x8)
    int32 issuedOnDay;                                                                // 0x00F0 (size: 0x4)
    EQuestStatus status;                                                              // 0x00F4 (size: 0x1)
    TArray<class ARegion*> regions;                                                   // 0x00F8 (size: 0x10)
    TArray<FVector> regionLocations;                                                  // 0x0108 (size: 0x10)
    bool wasReadByPlayer;                                                             // 0x0118 (size: 0x1)

}; // Size: 0x120

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

struct FQueuedMarketDistribution
{
    class ASMBuildingMaster* Distributor;                                             // 0x0000 (size: 0x8)
    TArray<class ASMBuildingMaster*> SortedActiveResidentials;                        // 0x0008 (size: 0x10)

}; // Size: 0x20

struct FQueuedPathfinderDataEdit
{
}; // Size: 0xC

struct FQueuedPathfinderDataEditCollection
{
}; // Size: 0x18

struct FQueuedUIUpdate
{
    class ARegion* Region;                                                            // 0x0000 (size: 0x8)
    EQueuedUIUpdateType UpdateType;                                                   // 0x0008 (size: 0x1)
    int32 goodType;                                                                   // 0x000C (size: 0x4)

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
    bool volumetricClouds;                                                            // 0x0048 (size: 0x1)
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
    TMap<class FString, class FString> namedValues;                                   // 0x00A8 (size: 0x50)

}; // Size: 0xF8

struct FRegionData
{
    FVector regionLocation;                                                           // 0x0000 (size: 0x18)
    bool ownedByBaron;                                                                // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FRegionDescription
{
    TArray<FVector2D> VerticesPS;                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FRelation
{
    class APawnCPP* pawnA;                                                            // 0x0000 (size: 0x8)
    class APawnCPP* pawnB;                                                            // 0x0008 (size: 0x8)
    TArray<FName> Tags;                                                               // 0x0010 (size: 0x10)
    EDiploStatus status;                                                              // 0x0020 (size: 0x1)
    float friendship;                                                                 // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FRequirementCollection
{
    TArray<EItemSubcategory> ItemSubcategories;                                       // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FRequirementsPerLevel
{
    TArray<FResidentialRequirement> Requirements;                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FResidentialRequirement
{
    FRequirementCollection RequirementCollection;                                     // 0x0000 (size: 0x10)
    int32 VarietyRequired;                                                            // 0x0010 (size: 0x4)
    EResidentialRequirement supplyCategory;                                           // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FResourceLookup
{
}; // Size: 0x40

struct FResourceNodeData
{
    ENodeType Type;                                                                   // 0x0000 (size: 0x4)
    FResourceNodeProperties Properties;                                               // 0x0008 (size: 0x78)

}; // Size: 0x80

struct FResourceNodeProperties
{
    bool bIsLimitedResource;                                                          // 0x0000 (size: 0x1)
    bool bUndergroundDepositsWhenRich;                                                // 0x0001 (size: 0x1)
    EItemType ResourceTypeID;                                                         // 0x0004 (size: 0x4)
    int32 resourceCount;                                                              // 0x0008 (size: 0x4)
    int32 MinResourceAmount;                                                          // 0x000C (size: 0x4)
    int32 MaxResourceAmount;                                                          // 0x0010 (size: 0x4)
    int32 MinRichResourceAmount;                                                      // 0x0014 (size: 0x4)
    int32 MaxRichResourceAmount;                                                      // 0x0018 (size: 0x4)
    bool bApplyRandomRotation;                                                        // 0x001C (size: 0x1)
    TArray<EAffinityType> AffinityTypes;                                              // 0x0020 (size: 0x10)
    TSubclassOf<class AResource> ResourceTemplate;                                    // 0x0030 (size: 0x8)
    FVector2D ScaleVariation;                                                         // 0x0038 (size: 0x10)
    class UTexture2D* Icon;                                                           // 0x0048 (size: 0x8)
    class UMaterialInterface* PaperMapMaterial;                                       // 0x0050 (size: 0x8)
    class UMaterialInterface* RichPaperMapMaterial;                                   // 0x0058 (size: 0x8)
    class UMaterialInterface* ZoneMaterial;                                           // 0x0060 (size: 0x8)
    class UMaterialInterface* RichZoneMaterial;                                       // 0x0068 (size: 0x8)
    FColor TintColor;                                                                 // 0x0070 (size: 0x4)
    int32 BreedingThreshold;                                                          // 0x0074 (size: 0x4)

}; // Size: 0x78

struct FResourceSoundData
{
    class USoundBase* pickup;                                                         // 0x0000 (size: 0x8)
    class USoundBase* putDown;                                                        // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FReward
{
    int32 devPoints;                                                                  // 0x0000 (size: 0x4)
    float loyalty;                                                                    // 0x0004 (size: 0x4)
    float prosperity;                                                                 // 0x0008 (size: 0x4)
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
}; // Size: 0x50

struct FRoadLink
{
}; // Size: 0xC

struct FSaveGameSlot
{
    int32 SlotIndex;                                                                  // 0x0000 (size: 0x4)
    class UMLSaveGameDescr* Descriptor;                                               // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FSavedAIData
{
    int32 LastTickDay;                                                                // 0x0000 (size: 0x4)
    bool builtStartingRoads;                                                          // 0x0004 (size: 0x1)
    bool movedStartingBuildings;                                                      // 0x0005 (size: 0x1)

}; // Size: 0x8

struct FSavedAIRegionData
{
    FVector StartingCenter;                                                           // 0x0000 (size: 0x18)
    FVector PreferredCenter;                                                          // 0x0018 (size: 0x18)
    bool bBuiltStartingRoads;                                                         // 0x0030 (size: 0x1)
    bool bMovedStartingBuildings;                                                     // 0x0031 (size: 0x1)
    int32 WeeklyTick;                                                                 // 0x0034 (size: 0x4)
    int32 UpdateNeededGoodsTick;                                                      // 0x0038 (size: 0x4)
    int32 UpdateReservedGoodsTick;                                                    // 0x003C (size: 0x4)
    int32 SetCraftingAndProductionLimitsTick;                                         // 0x0040 (size: 0x4)
    int32 BuyMajorTradeRouteTick;                                                     // 0x0044 (size: 0x4)
    int32 SetTradeRulesAndInventoryTargetsTick;                                       // 0x0048 (size: 0x4)
    int32 RedistributeWorkersTick;                                                    // 0x004C (size: 0x4)
    TArray<FGood> NeededGoods;                                                        // 0x0050 (size: 0x10)
    TArray<FGood> ImportedGoods;                                                      // 0x0060 (size: 0x10)
    TArray<FGood> ReservedGoods;                                                      // 0x0070 (size: 0x10)

}; // Size: 0x80

struct FSavedBuilding
{
    FString CustomName;                                                               // 0x0000 (size: 0x10)
    FTransform transf;                                                                // 0x0010 (size: 0x60)
    float localHp;                                                                    // 0x0070 (size: 0x4)
    int32 bType;                                                                      // 0x0074 (size: 0x4)
    TArray<FVector> fieldBorderPoints;                                                // 0x0078 (size: 0x10)
    TArray<FVector> FieldPoints;                                                      // 0x0088 (size: 0x10)
    TArray<FSavedGood> Inventory;                                                     // 0x0098 (size: 0x10)
    TArray<FTargetStockGood> TargetStock;                                             // 0x00A8 (size: 0x10)
    TArray<FVector> inventoryBelongLocations;                                         // 0x00B8 (size: 0x10)
    TArray<FSavedExtension> Extensions;                                               // 0x00C8 (size: 0x10)
    int32 artisanJob;                                                                 // 0x00D8 (size: 0x4)
    TArray<int32> upgradesDone;                                                       // 0x00E0 (size: 0x10)
    TArray<FName> buildingTags;                                                       // 0x00F0 (size: 0x10)
    ECropType cropType;                                                               // 0x0100 (size: 0x1)
    ECropType cropType2;                                                              // 0x0101 (size: 0x1)
    ECropType cropType3;                                                              // 0x0102 (size: 0x1)
    bool bRotateCrops;                                                                // 0x0103 (size: 0x1)
    TArray<FSavedPlant> plants;                                                       // 0x0108 (size: 0x10)
    bool onFire;                                                                      // 0x0118 (size: 0x1)
    float fireAmt;                                                                    // 0x011C (size: 0x4)
    bool paused;                                                                      // 0x0120 (size: 0x1)
    bool isBeingUpgraded;                                                             // 0x0121 (size: 0x1)
    bool bIsBeingRebuilt;                                                             // 0x0122 (size: 0x1)
    int32 activeWorkers;                                                              // 0x0124 (size: 0x4)
    TMap<ESeason, int32> SeasonalActiveWorkerFamilies;                                // 0x0128 (size: 0x50)
    bool bHasSeasonalAssignment;                                                      // 0x0178 (size: 0x1)
    int32 activeOxen;                                                                 // 0x017C (size: 0x4)
    int32 fieldWorkersNeeded;                                                         // 0x0180 (size: 0x4)
    int32 Priority;                                                                   // 0x0184 (size: 0x4)
    int32 secondaryPriority;                                                          // 0x0188 (size: 0x4)
    bool forceHarvest;                                                                // 0x018C (size: 0x1)
    TArray<FTransform> stallTransforms;                                               // 0x0190 (size: 0x10)
    TArray<int32> ActiveRecipes;                                                      // 0x01A0 (size: 0x10)
    bool needsRefueling;                                                              // 0x01B0 (size: 0x1)
    bool refueled;                                                                    // 0x01B1 (size: 0x1)
    int32 refuelDay;                                                                  // 0x01B4 (size: 0x4)
    uint8 stockFuelFor;                                                               // 0x01B8 (size: 0x1)
    TMap<class FMaintenanceTypes, class FMaintenanceTrackerData> maintenanceTrackers; // 0x01C0 (size: 0x50)
    int32 ActiveSliderValue;                                                          // 0x0210 (size: 0x4)
    int32 huntingLimit;                                                               // 0x0214 (size: 0x4)
    bool wasFullyConstructed;                                                         // 0x0218 (size: 0x1)
    TArray<FSavedGood> constructionGoods;                                             // 0x0220 (size: 0x10)
    bool workAreaLimited;                                                             // 0x0230 (size: 0x1)
    FVector workAreaCenter;                                                           // 0x0238 (size: 0x18)
    float workAreaRange;                                                              // 0x0250 (size: 0x4)
    bool bProtectResourceArea;                                                        // 0x0254 (size: 0x1)
    int32 houseVariety;                                                               // 0x0258 (size: 0x4)
    int32 houseVarietyBPart;                                                          // 0x025C (size: 0x4)
    FTransform residentialPrimaryBuildingTransform;                                   // 0x0260 (size: 0x60)
    FTransform residentialSecondaryBuildingTransform;                                 // 0x02C0 (size: 0x60)
    TArray<int32> assignedFamilyIDs;                                                  // 0x0320 (size: 0x10)
    TArray<int32> occupantFamilyIDs;                                                  // 0x0330 (size: 0x10)
    TArray<int32> storageFilter;                                                      // 0x0340 (size: 0x10)
    int32 ownerPawnID;                                                                // 0x0350 (size: 0x4)
    FVector trainConnectionRegionLocation;                                            // 0x0358 (size: 0x18)
    int32 muleTrain_buyingType;                                                       // 0x0370 (size: 0x4)
    int32 muleTrain_sellingType;                                                      // 0x0374 (size: 0x4)
    TArray<FSavedCastleModule> blueprints;                                            // 0x0378 (size: 0x10)
    TArray<FSavedCastleModule> ghostBlueprints;                                       // 0x0388 (size: 0x10)
    TArray<FSavedCastleModule> constructedModuleTransforms;                           // 0x0398 (size: 0x10)
    int32 typeBeforeChange;                                                           // 0x03A8 (size: 0x4)
    int32 mourningPeriod;                                                             // 0x03AC (size: 0x4)
    bool allowMarketStalls;                                                           // 0x03B0 (size: 0x1)
    int32 overstocking;                                                               // 0x03B4 (size: 0x4)
    FVector windmillShaftLocation;                                                    // 0x03B8 (size: 0x18)
    FExpertiseData ExpertiseData;                                                     // 0x03D0 (size: 0x8)
    TArray<FSavedProductionEntry> productionLogMap;                                   // 0x03D8 (size: 0x10)
    int32 PassiveYieldLastDay;                                                        // 0x03E8 (size: 0x4)
    TArray<FName> AITags;                                                             // 0x03F0 (size: 0x10)
    TArray<FProductionTimeEntry> ProductionTrackerTimeEntries;                        // 0x0400 (size: 0x10)
    int32 ByproductProgress;                                                          // 0x0410 (size: 0x4)
    int32 SeasonalYieldAccumulator;                                                   // 0x0414 (size: 0x4)
    int32 DayConstructionFinished;                                                    // 0x0418 (size: 0x4)
    TArray<bool> bGateStates;                                                         // 0x0420 (size: 0x10)

}; // Size: 0x430

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
    EWallType wallType;                                                               // 0x0004 (size: 0x1)
    FTransform Transform;                                                             // 0x0010 (size: 0x60)
    FSoftObjectPath meshOverride;                                                     // 0x0070 (size: 0x20)
    TArray<float> CustomPrimitiveData;                                                // 0x0090 (size: 0x10)
    TArray<FName> ActorTags;                                                          // 0x00A0 (size: 0x10)

}; // Size: 0xB0

struct FSavedChallenge
{
    int32 ID;                                                                         // 0x0000 (size: 0x4)
    FVector Center;                                                                   // 0x0008 (size: 0x18)
    int32 challengedPawnIndex;                                                        // 0x0020 (size: 0x4)
    int32 challengedByPawnIndex;                                                      // 0x0024 (size: 0x4)
    TArray<FVector> inRegardsToRegionLocations;                                       // 0x0028 (size: 0x10)
    int32 DaysLeft;                                                                   // 0x0038 (size: 0x4)
    bool contested;                                                                   // 0x003C (size: 0x1)
    int32 influenceStolen;                                                            // 0x0040 (size: 0x4)
    EChallengeStatus status;                                                          // 0x0044 (size: 0x1)
    FVector battlefieldLocation;                                                      // 0x0048 (size: 0x18)
    int32 DaysInBattle;                                                               // 0x0060 (size: 0x4)
    TArray<int32> initialBattleSquadIDs;                                              // 0x0068 (size: 0x10)

}; // Size: 0x78

struct FSavedClaim
{
    FVector regionLocation;                                                           // 0x0000 (size: 0x18)
    int32 DaysLeft;                                                                   // 0x0018 (size: 0x4)
    bool blocked;                                                                     // 0x001C (size: 0x1)
    float Score;                                                                      // 0x0020 (size: 0x4)

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
    TArray<FVector> FieldPoints;                                                      // 0x0070 (size: 0x10)
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
    int32 LastGrowthDay;                                                              // 0x0070 (size: 0x4)

}; // Size: 0x80

struct FSavedLetter
{
    FGuid Guid;                                                                       // 0x0000 (size: 0x10)
    TArray<FName> paras;                                                              // 0x0010 (size: 0x10)
    int32 daySent;                                                                    // 0x0020 (size: 0x4)
    int32 senderSetupIndex;                                                           // 0x0024 (size: 0x4)
    int32 recipientSetupIndex;                                                        // 0x0028 (size: 0x4)
    bool read;                                                                        // 0x002C (size: 0x1)
    bool wasOpened;                                                                   // 0x002D (size: 0x1)

}; // Size: 0x30

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
    TArray<FSavedQuest> proposedQuests;                                               // 0x00F8 (size: 0x10)
    TArray<FName> issuedQuests;                                                       // 0x0108 (size: 0x10)
    TArray<FSavedLetter> InBox;                                                       // 0x0118 (size: 0x10)
    TArray<FSavedLetter> outbox;                                                      // 0x0128 (size: 0x10)
    TArray<FSavedClaim> claims;                                                       // 0x0138 (size: 0x10)
    TArray<FUnitGroup> ctrlGroup;                                                     // 0x0148 (size: 0x10)
    TArray<FName> ActorTags;                                                          // 0x0158 (size: 0x10)
    FCoatOfArmsData coatData;                                                         // 0x0168 (size: 0x14)
    TMap<FName, int32> tagAdditionDay;                                                // 0x0180 (size: 0x50)
    int32 mercenaryCompaniesHiredDuringLifetime;                                      // 0x01D0 (size: 0x4)
    FSavedAIData AIData;                                                              // 0x01D4 (size: 0x8)

}; // Size: 0x1E0

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

struct FSavedPathPoint
{
    FVector Pos;                                                                      // 0x0000 (size: 0x18)
    bool bRoadPoint;                                                                  // 0x0018 (size: 0x1)
    uint8 floor;                                                                      // 0x0019 (size: 0x1)

}; // Size: 0x20

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
    FTransform instanceTransform;                                                     // 0x0050 (size: 0x60)
    uint8 plantISM_id;                                                                // 0x00B0 (size: 0x1)
    uint8 FertilityWhenPlantedQuant;                                                  // 0x00B1 (size: 0x1)

}; // Size: 0xC0

struct FSavedProductionEntry
{
    int32 ItemType;                                                                   // 0x0000 (size: 0x4)
    TArray<FProductionTrackerEntry> productionTrackerEntries;                         // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FSavedQuest
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FString descr;                                                                    // 0x0010 (size: 0x10)
    int32 ID;                                                                         // 0x0020 (size: 0x4)
    int32 playedMessages;                                                             // 0x0024 (size: 0x4)
    TArray<FName> choices;                                                            // 0x0028 (size: 0x10)
    TArray<FName> choicesDone;                                                        // 0x0038 (size: 0x10)
    TArray<FName> choiceQuestOverride;                                                // 0x0048 (size: 0x10)
    int32 DaysLeft;                                                                   // 0x0058 (size: 0x4)
    TArray<FObjective> objectives;                                                    // 0x0060 (size: 0x10)
    TArray<FObjective> abortTriggers;                                                 // 0x0070 (size: 0x10)
    TArray<FVector> regionLocations;                                                  // 0x0080 (size: 0x10)
    TArray<FReward> rewards;                                                          // 0x0090 (size: 0x10)
    TArray<FPunishment> Punishment;                                                   // 0x00A0 (size: 0x10)
    int32 tier;                                                                       // 0x00B0 (size: 0x4)
    FName focus;                                                                      // 0x00B4 (size: 0x8)
    bool bTracking;                                                                   // 0x00BC (size: 0x1)
    bool bTimed;                                                                      // 0x00BD (size: 0x1)
    bool hidden;                                                                      // 0x00BE (size: 0x1)
    bool opportunity;                                                                 // 0x00BF (size: 0x1)
    bool canRefuse;                                                                   // 0x00C0 (size: 0x1)
    EQuestStatus status;                                                              // 0x00C1 (size: 0x1)
    int32 issuedOnDay;                                                                // 0x00C4 (size: 0x4)
    bool repeats;                                                                     // 0x00C8 (size: 0x1)
    bool letterForm;                                                                  // 0x00C9 (size: 0x1)
    FName signatureOverride;                                                          // 0x00CC (size: 0x8)
    TArray<FName> customAcceptTriggers;                                               // 0x00D8 (size: 0x10)
    TArray<FName> customRefuseTriggers;                                               // 0x00E8 (size: 0x10)
    bool wasReadByPlayer;                                                             // 0x00F8 (size: 0x1)

}; // Size: 0x100

struct FSavedRegion
{
    FVector Center;                                                                   // 0x0000 (size: 0x18)
    FString CustomName;                                                               // 0x0018 (size: 0x10)
    bool isSettled;                                                                   // 0x0028 (size: 0x1)
    int64 daySettled;                                                                 // 0x0030 (size: 0x8)
    ESettlementType settlementType;                                                   // 0x0038 (size: 0x1)
    int32 Approval;                                                                   // 0x003C (size: 0x4)
    int32 publicOrder;                                                                // 0x0040 (size: 0x4)
    int32 regionalWealth;                                                             // 0x0044 (size: 0x4)
    int32 settlementLv;                                                               // 0x0048 (size: 0x4)
    TArray<int32> development;                                                        // 0x0050 (size: 0x10)
    int32 devPoints;                                                                  // 0x0060 (size: 0x4)
    TArray<FName> regionTags;                                                         // 0x0068 (size: 0x10)
    TArray<int32> policiesSigned;                                                     // 0x0078 (size: 0x10)
    TArray<FHistoricalPolicy> historicalPolicies;                                     // 0x0088 (size: 0x10)
    TArray<int32> targetInventory;                                                    // 0x0098 (size: 0x10)
    TArray<FApprovalMemory> summedApprovalFactors;                                    // 0x00A8 (size: 0x10)
    TArray<FApprovalMemory> publicOrderMemory;                                        // 0x00B8 (size: 0x10)
    TArray<FApprovalMemory> summedPublicOrderFactors;                                 // 0x00C8 (size: 0x10)
    TArray<ETradeRule> tradeRules;                                                    // 0x00D8 (size: 0x10)
    int32 reservedLogs;                                                               // 0x00E8 (size: 0x4)
    int32 retinueSquadID;                                                             // 0x00EC (size: 0x4)
    TArray<FSavedWorkerFamily> workerFamilies;                                        // 0x00F0 (size: 0x10)
    TMap<int32, uint8> tradeRouteLevels;                                              // 0x0100 (size: 0x50)
    TArray<FVector> tradeRouteMerchantLocations;                                      // 0x0150 (size: 0x10)
    FVector outpostToRegionLocation;                                                  // 0x0160 (size: 0x18)
    TMap<FName, int32> taxRates;                                                      // 0x0178 (size: 0x50)
    TArray<FSavedGrowingFoliage> growingFoliage;                                      // 0x01C8 (size: 0x10)
    TArray<FSavedGrowingFoliage> grownForestedPlantedTrees;                           // 0x01D8 (size: 0x10)
    TArray<int32> forbidGlobalTradeGoodTypes;                                         // 0x01E8 (size: 0x10)
    TMap<int32, int32> constructionReserve;                                           // 0x01F8 (size: 0x50)
    TMap<int32, int32> productionLimits;                                              // 0x0248 (size: 0x50)
    TMap<int32, FConsumptionLimit> craftingConsumptionLimits;                         // 0x0298 (size: 0x50)
    int32 nextLivestockOrderIn;                                                       // 0x02E8 (size: 0x4)
    TMap<class EPerkSlot, class FName> ActivePerks;                                   // 0x02F0 (size: 0x50)
    TArray<FName> Tags;                                                               // 0x0340 (size: 0x10)
    FSavedAIRegionData AIData;                                                        // 0x0350 (size: 0x80)

}; // Size: 0x3D0

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
    FVector belongsToPos;                                                             // 0x0098 (size: 0x18)
    TArray<FSavedGood> Inventory;                                                     // 0x00B0 (size: 0x10)
    FColor iconTint;                                                                  // 0x00C0 (size: 0x4)
    bool bSeasonal;                                                                   // 0x00C4 (size: 0x1)
    bool bRichDeposit;                                                                // 0x00C5 (size: 0x1)
    FVector regionPos;                                                                // 0x00C8 (size: 0x18)
    FString staticMeshPath;                                                           // 0x00E0 (size: 0x10)

}; // Size: 0xF0

struct FSavedResourceNode
{
    ENodeType nodeType;                                                               // 0x0000 (size: 0x4)
    bool bRichNode;                                                                   // 0x0004 (size: 0x1)
    FVector Location;                                                                 // 0x0008 (size: 0x18)
    int32 maxResourceCount;                                                           // 0x0020 (size: 0x4)
    int32 resourceCount;                                                              // 0x0024 (size: 0x4)
    int32 squadID;                                                                    // 0x0028 (size: 0x4)
    TArray<FSavedResource> savedResources;                                            // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FSavedRoad
{
    FSplineCurves Curves;                                                             // 0x0000 (size: 0x68)
    FTransform transf;                                                                // 0x0070 (size: 0x60)
    TArray<FVector> roadPoints;                                                       // 0x00D0 (size: 0x10)
    float roadTangentScale;                                                           // 0x00E0 (size: 0x4)
    ERoadType roadType;                                                               // 0x00E4 (size: 0x1)
    EWallType wallType;                                                               // 0x00E5 (size: 0x1)
    EPlatformLevel platformLevel;                                                     // 0x00E6 (size: 0x1)
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
    int32 maxSize;                                                                    // 0x0038 (size: 0x4)
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
    bool bGoingHome;                                                                  // 0x01E8 (size: 0x1)
    bool bCanRaid;                                                                    // 0x01E9 (size: 0x1)
    int32 lootValue;                                                                  // 0x01EC (size: 0x4)
    bool visibleToPlayer;                                                             // 0x01F0 (size: 0x1)
    float cohesion;                                                                   // 0x01F4 (size: 0x4)
    int32 ralliedOnDay;                                                               // 0x01F8 (size: 0x4)
    ESquadControl Control;                                                            // 0x01FC (size: 0x1)
    ERallyingStatus rallyingStatus;                                                   // 0x01FD (size: 0x1)
    bool enemySpotted;                                                                // 0x01FE (size: 0x1)
    bool isEngaged;                                                                   // 0x01FF (size: 0x1)
    float engagementPercentage;                                                       // 0x0200 (size: 0x4)
    TArray<FName> audioTags;                                                          // 0x0208 (size: 0x10)
    uint8 concealmentLevel;                                                           // 0x0218 (size: 0x1)
    FVector campLocation;                                                             // 0x0220 (size: 0x18)
    int32 ownerPawnSetupIndex;                                                        // 0x0238 (size: 0x4)
    FVector originRegionLocation;                                                     // 0x0240 (size: 0x18)
    float previousMoraleChangeTime;                                                   // 0x0258 (size: 0x4)
    FVector lastSquadTargetPosition;                                                  // 0x0260 (size: 0x18)
    ELastSquadTargetType lastSquadTargetType;                                         // 0x0278 (size: 0x1)

}; // Size: 0x280

struct FSavedTask
{
    int32 Type;                                                                       // 0x0000 (size: 0x4)
    int32 ID;                                                                         // 0x0004 (size: 0x4)
    FPathTarget TargetLocation;                                                       // 0x0008 (size: 0x38)
    FPathTarget finalLocation;                                                        // 0x0040 (size: 0x38)
    FVector targetEntityLocation;                                                     // 0x0078 (size: 0x18)
    int32 resourceType;                                                               // 0x0090 (size: 0x4)
    int32 resourceAmt;                                                                // 0x0094 (size: 0x4)
    FVector targetBuildingLocation;                                                   // 0x0098 (size: 0x18)
    FVector finalBuildingLocation;                                                    // 0x00B0 (size: 0x18)
    FVector targetUnitLocation;                                                       // 0x00C8 (size: 0x18)
    FVector finalUnitLocation;                                                        // 0x00E0 (size: 0x18)
    FVector resourceLocation;                                                         // 0x00F8 (size: 0x18)
    int32 targetUnitIndex;                                                            // 0x0110 (size: 0x4)
    bool bPaidInAdvance;                                                              // 0x0114 (size: 0x1)

}; // Size: 0x118

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
    int32 AnimalHunger;                                                               // 0x018C (size: 0x4)
    FConsumptionStatus ConsumptionStatus;                                             // 0x0190 (size: 0x7)
    uint8 monthlyConsumptionDay;                                                      // 0x0197 (size: 0x1)
    int32 yearlyConsumptionDay;                                                       // 0x0198 (size: 0x4)
    int32 Action;                                                                     // 0x019C (size: 0x4)
    uint8 idleTime;                                                                   // 0x01A0 (size: 0x1)
    int32 craftingAnim;                                                               // 0x01A4 (size: 0x4)
    int32 repetitions;                                                                // 0x01A8 (size: 0x4)
    int32 targetRepetitions;                                                          // 0x01AC (size: 0x4)
    FName currentAnimation;                                                           // 0x01B0 (size: 0x8)
    FName targetAnimation;                                                            // 0x01B8 (size: 0x8)
    float currentAnimSpd;                                                             // 0x01C0 (size: 0x4)
    float currentAnimSpdDefault;                                                      // 0x01C4 (size: 0x4)
    EAnimMode animMode;                                                               // 0x01C8 (size: 0x1)
    int32 job;                                                                        // 0x01CC (size: 0x4)
    FSavedTask Task;                                                                  // 0x01D0 (size: 0x118)
    FName taskLabelOverride;                                                          // 0x02E8 (size: 0x8)
    FVector reservedToLocation;                                                       // 0x02F0 (size: 0x18)
    FVector familyStallLocation;                                                      // 0x0308 (size: 0x18)
    FVector garrisonedInLocation;                                                     // 0x0320 (size: 0x18)
    bool unitCollision;                                                               // 0x0338 (size: 0x1)
    bool hasBasicNeeds;                                                               // 0x0339 (size: 0x1)
    TArray<FApprovalMemory> ApprovalMemory;                                           // 0x0340 (size: 0x10)
    FVector colorUVs;                                                                 // 0x0350 (size: 0x18)
    uint8 Age;                                                                        // 0x0368 (size: 0x1)
    float pregnancy;                                                                  // 0x036C (size: 0x4)
    int32 HoundOwnerIndex;                                                            // 0x0370 (size: 0x4)
    float meleeTraining;                                                              // 0x0374 (size: 0x4)
    float archeryTraining;                                                            // 0x0378 (size: 0x4)
    TMap<EEquipmentSlot, uint8> equipmentMeshVariations;                              // 0x0380 (size: 0x50)
    TMap<EEquipmentSlot, uint8> equipmentTextureVariations;                           // 0x03D0 (size: 0x50)
    TMap<class EEquipmentSlot, class FVector> equipmentColorSchemeUVs;                // 0x0420 (size: 0x50)
    float shieldSymbolIndex;                                                          // 0x0470 (size: 0x4)
    int32 assignedSquadID;                                                            // 0x0474 (size: 0x4)
    int32 assignedEquippedSquadID;                                                    // 0x0478 (size: 0x4)
    bool isBeingRallied;                                                              // 0x047C (size: 0x1)
    FVector rallyingLocation;                                                         // 0x0480 (size: 0x18)
    FVector retreatLocation;                                                          // 0x0498 (size: 0x18)
    int32 workerFamilyID;                                                             // 0x04B0 (size: 0x4)
    TArray<FName> ActorTags;                                                          // 0x04B8 (size: 0x10)
    TMap<class FName, class FString> customUnitData;                                  // 0x04C8 (size: 0x50)
    TArray<FSavedGood> shoppingList;                                                  // 0x0518 (size: 0x10)
    TArray<FName> quirks;                                                             // 0x0528 (size: 0x10)
    FRotator TargetRotation;                                                          // 0x0538 (size: 0x18)
    FRotator RequestTargetRotation;                                                   // 0x0550 (size: 0x18)
    int32 checkpoint;                                                                 // 0x0568 (size: 0x4)
    TArray<FVector> checkpoints;                                                      // 0x0570 (size: 0x10)
    TArray<FSavedPathPoint> LeadingPath;                                              // 0x0580 (size: 0x10)
    float DelayToLeader;                                                              // 0x0590 (size: 0x4)
    FSavedPathPoint finalLocation;                                                    // 0x0598 (size: 0x20)
    TArray<FSavedPathPoint> Path;                                                     // 0x05B8 (size: 0x10)
    int32 PathPoint;                                                                  // 0x05C8 (size: 0x4)
    float CheckpointDistanceTravelled;                                                // 0x05CC (size: 0x4)
    float TemporalCheckpointDistanceTravelledCurrent;                                 // 0x05D0 (size: 0x4)
    bool bIndividualSpeedfactor;                                                      // 0x05D4 (size: 0x1)
    double ProductionTrackerTimeTaskStarted;                                          // 0x05D8 (size: 0x8)
    double ProductionTrackerWaitingStartTime;                                         // 0x05E0 (size: 0x8)
    EBehaviourStance behaviourStance;                                                 // 0x05E8 (size: 0x1)
    EPushStance pushStance;                                                           // 0x05E9 (size: 0x1)
    bool isCharging;                                                                  // 0x05EA (size: 0x1)
    bool tacticalRetreat;                                                             // 0x05EB (size: 0x1)
    bool bHoldingLine;                                                                // 0x05EC (size: 0x1)
    bool bFortified;                                                                  // 0x05ED (size: 0x1)
    bool bFireAtWill;                                                                 // 0x05EE (size: 0x1)
    bool bHoldFire;                                                                   // 0x05EF (size: 0x1)
    bool bSpreadOut;                                                                  // 0x05F0 (size: 0x1)

}; // Size: 0x600

struct FSavedWorkerFamily
{
    FVector assignedToLocation;                                                       // 0x0000 (size: 0x18)
    FVector familyStallLocation;                                                      // 0x0018 (size: 0x18)
    FVector familyHomeLocation;                                                       // 0x0030 (size: 0x18)
    FConsumptionStatus ConsumptionStatus;                                             // 0x0048 (size: 0x7)
    uint8 monthlyConsumptionDay;                                                      // 0x004F (size: 0x1)
    int32 yearlyConsumptionDay;                                                       // 0x0050 (size: 0x4)
    TArray<FApprovalMemory> ApprovalMemory;                                           // 0x0058 (size: 0x10)

}; // Size: 0x68

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
    int32 familyLv1;                                                                  // 0x0014 (size: 0x4)
    int32 familyLv2;                                                                  // 0x0018 (size: 0x4)
    int32 familyLv3;                                                                  // 0x001C (size: 0x4)
    int32 familyLv4;                                                                  // 0x0020 (size: 0x4)
    int32 churchLv;                                                                   // 0x0024 (size: 0x4)
    int32 manorLv;                                                                    // 0x0028 (size: 0x4)

}; // Size: 0x30

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

struct FSnapPointLink
{
}; // Size: 0x28

struct FSpatialCell
{
}; // Size: 0x48

struct FSpatialCellCached
{
}; // Size: 0x80

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
    int32 maxSize;                                                                    // 0x0060 (size: 0x4)
    int32 ID;                                                                         // 0x0064 (size: 0x4)
    FVector lastSquadTargetPosition;                                                  // 0x0068 (size: 0x18)
    ELastSquadTargetType lastSquadTargetType;                                         // 0x0080 (size: 0x1)
    TArray<ETrait> traits;                                                            // 0x0088 (size: 0x10)
    FVector WeightedCenter;                                                           // 0x00B8 (size: 0x18)
    TArray<float> killTimes;                                                          // 0x00F0 (size: 0x10)
    TArray<int32> deathTimes;                                                         // 0x0100 (size: 0x10)
    int32 targetSquad;                                                                // 0x0110 (size: 0x4)
    TArray<int32> engagedSquads;                                                      // 0x0118 (size: 0x10)
    FVector TargetLocation;                                                           // 0x0128 (size: 0x18)
    int32 arrivesIn;                                                                  // 0x0144 (size: 0x4)
    int32 payDay;                                                                     // 0x0148 (size: 0x4)
    int32 companyID;                                                                  // 0x014C (size: 0x4)
    float spread;                                                                     // 0x0150 (size: 0x4)
    class ARegion* currentRegion;                                                     // 0x01E8 (size: 0x8)
    class ARegion* targetRegion;                                                      // 0x01F0 (size: 0x8)
    class ARegion* originRegion;                                                      // 0x01F8 (size: 0x8)
    FUnitStat avgStats;                                                               // 0x0200 (size: 0x48)
    TArray<FPotentialFactor> potentialFactors;                                        // 0x0248 (size: 0x10)
    float avgPotential;                                                               // 0x0258 (size: 0x4)
    bool visibleToPlayer;                                                             // 0x0338 (size: 0x1)
    float cohesion;                                                                   // 0x033C (size: 0x4)
    bool rallied;                                                                     // 0x0340 (size: 0x1)
    int32 ralliedOnDay;                                                               // 0x0344 (size: 0x4)
    TArray<class ASMUnit*> assignedRecruits;                                          // 0x0348 (size: 0x10)
    TArray<class ASMUnit*> equippedRecruits;                                          // 0x0358 (size: 0x10)
    ESquadControl Control;                                                            // 0x0368 (size: 0x1)
    ERallyingStatus rallyingStatus;                                                   // 0x0369 (size: 0x1)
    bool enemySpotted;                                                                // 0x036A (size: 0x1)
    bool isEngaged;                                                                   // 0x036B (size: 0x1)
    float engagementPercentage;                                                       // 0x036C (size: 0x4)
    class ASMBuildingMaster* camp;                                                    // 0x0370 (size: 0x8)
    FVector campLocation;                                                             // 0x0378 (size: 0x18)
    int32 lastSquadAIUpdateTime;                                                      // 0x0390 (size: 0x4)
    TArray<FName> audioTags;                                                          // 0x0398 (size: 0x10)
    class APawnCPP* ownerPawn;                                                        // 0x03A8 (size: 0x8)
    int32 ownerPawnSetupIndex;                                                        // 0x03B0 (size: 0x4)
    uint8 concealmentLevel;                                                           // 0x03B4 (size: 0x1)
    float previousHornTime;                                                           // 0x03B8 (size: 0x4)
    float previousMoraleChangeTime;                                                   // 0x03C0 (size: 0x4)
    TArray<class UStaticMeshComponent*> pathMeshes;                                   // 0x03C8 (size: 0x10)

}; // Size: 0x3E8

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
}; // Size: 0x48

struct FStat : public FTableRowBase
{
    bool bWorkInProgress;                                                             // 0x0008 (size: 0x1)
    FName DisplayName;                                                                // 0x000C (size: 0x8)
    TSoftObjectPtr<UTexture2D> panelImage;                                            // 0x0018 (size: 0x28)
    TSoftObjectPtr<UTexture2D> panelImageV2;                                          // 0x0040 (size: 0x28)
    TSoftObjectPtr<UTexture2D> buildingImage;                                         // 0x0068 (size: 0x28)
    class UTexture2D* purposeIcon;                                                    // 0x0090 (size: 0x8)
    EBuildingCategory BuildingCategory;                                               // 0x0098 (size: 0x1)
    class USoundBase* SFX;                                                            // 0x00A0 (size: 0x8)
    FVector2D Bounds;                                                                 // 0x00A8 (size: 0x10)
    bool isPlaza;                                                                     // 0x00B8 (size: 0x1)
    float bSize;                                                                      // 0x00BC (size: 0x4)
    bool bCircularBorder;                                                             // 0x00C0 (size: 0x1)
    TArray<FVector2D> customBorder;                                                   // 0x00C8 (size: 0x10)
    bool isWork;                                                                      // 0x00D8 (size: 0x1)
    FVector4 workerTypes;                                                             // 0x00E0 (size: 0x20)
    int32 job;                                                                        // 0x0100 (size: 0x4)
    bool bAllowSeasonalAssignment;                                                    // 0x0104 (size: 0x1)
    FVector4 occupantTypes;                                                           // 0x0110 (size: 0x20)
    TArray<int32> occasionalNeeds;                                                    // 0x0130 (size: 0x10)
    int32 garrisonLimit;                                                              // 0x0140 (size: 0x4)
    uint8 pastureSpace;                                                               // 0x0144 (size: 0x1)
    uint8 stableSpace;                                                                // 0x0145 (size: 0x1)
    bool shelter;                                                                     // 0x0146 (size: 0x1)
    TSoftObjectPtr<UStaticMesh> constructionMeshAsset;                                // 0x0148 (size: 0x28)
    FSoftClassPath BlueprintPath;                                                     // 0x0170 (size: 0x20)
    TArray<FSoftClassPath> assemblyBlueprintVariations;                               // 0x0190 (size: 0x10)
    EBuildingFunction buildingFunction;                                               // 0x01A0 (size: 0x1)
    int32 maxHp;                                                                      // 0x01A4 (size: 0x4)
    float range;                                                                      // 0x01A8 (size: 0x4)
    float rangeType;                                                                  // 0x01AC (size: 0x4)
    FVector gatheringSpot;                                                            // 0x01B0 (size: 0x18)
    FVector roadPos;                                                                  // 0x01C8 (size: 0x18)
    bool needsRoad;                                                                   // 0x01E0 (size: 0x1)
    bool collidesWithRoads;                                                           // 0x01E1 (size: 0x1)
    bool canRelocate;                                                                 // 0x01E2 (size: 0x1)
    TArray<int32> upgrades;                                                           // 0x01E8 (size: 0x10)
    int32 upgradedFrom;                                                               // 0x01F8 (size: 0x4)
    TArray<FSnapPoint> snapPoints;                                                    // 0x0200 (size: 0x10)
    bool canSetWorkArea;                                                              // 0x0210 (size: 0x1)
    bool chooseProducedGood;                                                          // 0x0211 (size: 0x1)
    TArray<int32> gatherTypes;                                                        // 0x0218 (size: 0x10)
    bool smells;                                                                      // 0x0228 (size: 0x1)
    bool flammable;                                                                   // 0x0229 (size: 0x1)
    bool bProximityCollapse;                                                          // 0x022A (size: 0x1)
    TSet<EAffinityType> affinities;                                                   // 0x0230 (size: 0x50)
    bool bCanGarrisonIn;                                                              // 0x0280 (size: 0x1)
    int32 LaborBenchmark;                                                             // 0x0284 (size: 0x4)
    bool AreGoodsSeasonal;                                                            // 0x0288 (size: 0x1)
    uint8 accidentRate;                                                               // 0x0289 (size: 0x1)
    uint8 deathRate;                                                                  // 0x028A (size: 0x1)
    uint8 deathFromCollapseRate;                                                      // 0x028B (size: 0x1)
    TArray<FGood> constructionGoods;                                                  // 0x0290 (size: 0x10)
    int32 constructionCost;                                                           // 0x02A0 (size: 0x4)
    bool RequiresSkilledBuilders;                                                     // 0x02A4 (size: 0x1)
    bool SupportsTargetStock;                                                         // 0x02A5 (size: 0x1)
    TArray<FGood> TargetStockGoods;                                                   // 0x02A8 (size: 0x10)
    TArray<FName> requiredPerks;                                                      // 0x02B8 (size: 0x10)
    TArray<int32> buildingsConstructed;                                               // 0x02C8 (size: 0x10)
    int32 maxInRegion;                                                                // 0x02D8 (size: 0x4)
    int32 settlementLevel;                                                            // 0x02DC (size: 0x4)
    TArray<FMaintenanceSupply> maintenanceSupplies;                                   // 0x02E0 (size: 0x10)
    TMap<class EMaintenanceCombo, class EMaintenanceEffect> MaintenanceEffects;       // 0x02F0 (size: 0x50)
    bool AIcanBuild;                                                                  // 0x0340 (size: 0x1)
    TArray<FGood> averageConsumption;                                                 // 0x0348 (size: 0x10)
    TArray<FGood> averageProduction;                                                  // 0x0358 (size: 0x10)
    int32 storageLimitGeneric;                                                        // 0x0368 (size: 0x4)
    int32 storageLimitLarge;                                                          // 0x036C (size: 0x4)
    int32 storageLimitPantry;                                                         // 0x0370 (size: 0x4)
    float spoilageRateReduction;                                                      // 0x0374 (size: 0x4)
    EModuleCategory moduleCategory;                                                   // 0x0378 (size: 0x1)
    bool isModule;                                                                    // 0x0379 (size: 0x1)
    int32 placedWithin;                                                               // 0x037C (size: 0x4)
    TArray<FTechRequirement> requiredTech;                                            // 0x0380 (size: 0x10)

}; // Size: 0x390

struct FSubField
{
    int32 extensionID;                                                                // 0x0000 (size: 0x4)
    class UInstancedStaticMeshComponent* ISM;                                         // 0x0008 (size: 0x8)
    int32 plantType;                                                                  // 0x0010 (size: 0x4)
    TArray<FVector> fieldBorder;                                                      // 0x0018 (size: 0x10)
    TArray<FVector> triangulatedBorder;                                               // 0x0028 (size: 0x10)
    TArray<FSegment> Paths;                                                           // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FTargetStockGood
{
    FSavedGood Good;                                                                  // 0x0000 (size: 0x8)
    bool Enabled;                                                                     // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FTask
{
    ETaskType Type;                                                                   // 0x0000 (size: 0x1)
    FPathTarget TargetLocation;                                                       // 0x0008 (size: 0x38)
    FPathTarget finalLocation;                                                        // 0x0040 (size: 0x38)
    FVector targetEntityLocation;                                                     // 0x0078 (size: 0x18)
    int32 resourceType;                                                               // 0x0090 (size: 0x4)
    int32 resourceAmt;                                                                // 0x0094 (size: 0x4)
    class ASMBuildingMaster* targetBuilding;                                          // 0x0098 (size: 0x8)
    class ASMBuildingMaster* finalBuilding;                                           // 0x00A0 (size: 0x8)
    class ASMUnit* targetUnit;                                                        // 0x00A8 (size: 0x8)
    class ASMUnit* finalUnit;                                                         // 0x00B0 (size: 0x8)
    bool executed;                                                                    // 0x00B8 (size: 0x1)
    class AResource* Resource;                                                        // 0x00C0 (size: 0x8)
    int32 ID;                                                                         // 0x00C8 (size: 0x4)
    bool bPaidInAdvance;                                                              // 0x00CC (size: 0x1)
    class ASMBuilding* TargetBuildingPart;                                            // 0x00D0 (size: 0x8)

}; // Size: 0xD8

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
    FString PerkName;                                                                 // 0x0008 (size: 0x10)
    TSoftObjectPtr<UTexture2D> TechIcon;                                              // 0x0018 (size: 0x28)
    TSoftObjectPtr<UTexture2D> TechImage;                                             // 0x0040 (size: 0x28)
    TSet<EPerkEffect> Effects;                                                        // 0x0068 (size: 0x50)
    EPerkSlot PerkSlot;                                                               // 0x00B8 (size: 0x1)

}; // Size: 0xC0

struct FTechRequirement : public FTableRowBase
{
    int32 ID;                                                                         // 0x0008 (size: 0x4)
    int32 tier;                                                                       // 0x000C (size: 0x4)

}; // Size: 0x10

struct FTrackedItem
{
    class URegionProductionStockEntry* Entry;                                         // 0x0000 (size: 0x8)

}; // Size: 0x1A0

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
    bool isImport;                                                                    // 0x002C (size: 0x1)

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

struct FTransformCollection
{
    TArray<FTransform> Transforms;                                                    // 0x0000 (size: 0x10)

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
}; // Size: 0x10

struct FUIText
{
    FString String;                                                                   // 0x0000 (size: 0x10)
    FVector2D Pos;                                                                    // 0x0010 (size: 0x10)
    bool Border;                                                                      // 0x0020 (size: 0x1)
    FColor Color;                                                                     // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FUIValueText
{
    class UTextBlock* TextBlock;                                                      // 0x0000 (size: 0x8)
    int32 Value;                                                                      // 0x0008 (size: 0x4)
    class UTextBlock* TextBlockAlt;                                                   // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FUnitAnimset : public FTableRowBase
{
    TArray<FAnimVariation> anims;                                                     // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FUnitDataStruct
{
    int32 squadID;                                                                    // 0x0000 (size: 0x4)
    bool IsSelected;                                                                  // 0x0004 (size: 0x1)
    FRotator TargetRotation;                                                          // 0x0008 (size: 0x18)
    float bloody;                                                                     // 0x0020 (size: 0x4)
    int32 row;                                                                        // 0x0024 (size: 0x4)
    int32 column;                                                                     // 0x0028 (size: 0x4)
    bool unitCollision;                                                               // 0x002C (size: 0x1)
    float hp;                                                                         // 0x0030 (size: 0x4)

}; // Size: 0x38

struct FUnitGroup
{
    TArray<int32> squads;                                                             // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FUnitStat
{
    float att;                                                                        // 0x0000 (size: 0x4)
    float def;                                                                        // 0x0004 (size: 0x4)
    float block;                                                                      // 0x0008 (size: 0x4)
    float rangedAtt;                                                                  // 0x000C (size: 0x4)
    float range;                                                                      // 0x0010 (size: 0x4)
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
    TSoftObjectPtr<UTexture2D> IconTextureV2;                                         // 0x0038 (size: 0x28)
    bool isMilitia;                                                                   // 0x0060 (size: 0x1)
    float cost;                                                                       // 0x0064 (size: 0x4)
    TArray<int32> armours;                                                            // 0x0068 (size: 0x10)
    TArray<int32> weapons;                                                            // 0x0078 (size: 0x10)
    TArray<int32> shields;                                                            // 0x0088 (size: 0x10)
    TArray<int32> helmets;                                                            // 0x0098 (size: 0x10)
    TArray<int32> mounts;                                                             // 0x00A8 (size: 0x10)
    TArray<int32> bonus;                                                              // 0x00B8 (size: 0x10)
    TArray<int32> skills;                                                             // 0x00C8 (size: 0x10)
    TArray<ETrait> traits;                                                            // 0x00D8 (size: 0x10)
    bool hideHeads;                                                                   // 0x00E8 (size: 0x1)
    class UTexture2D* card;                                                           // 0x00F0 (size: 0x8)
    class UTexture2D* Portrait;                                                       // 0x00F8 (size: 0x8)
    int32 maxSize;                                                                    // 0x0100 (size: 0x4)
    TArray<FName> audioTags;                                                          // 0x0108 (size: 0x10)
    TArray<FGood> requiredEquipment;                                                  // 0x0118 (size: 0x10)
    float minMeleeTraining;                                                           // 0x0128 (size: 0x4)
    float minArcheryTraining;                                                         // 0x012C (size: 0x4)
    int32 minHouseLv;                                                                 // 0x0130 (size: 0x4)
    bool hasBannerCarrier;                                                            // 0x0134 (size: 0x1)
    uint8 concealmentLevel;                                                           // 0x0135 (size: 0x1)
    float combatExperience;                                                           // 0x0138 (size: 0x4)

}; // Size: 0x140

struct FUpgrade : public FTableRowBase
{
    FString Name;                                                                     // 0x0008 (size: 0x10)
    FString descr;                                                                    // 0x0018 (size: 0x10)
    class UTexture2D* Icon;                                                           // 0x0028 (size: 0x8)
    class USoundBase* SoundEffect;                                                    // 0x0030 (size: 0x8)
    bool bIsCostScalable;                                                             // 0x0038 (size: 0x1)
    TArray<FGood> cost;                                                               // 0x0040 (size: 0x10)
    int32 regionalWealth;                                                             // 0x0050 (size: 0x4)
    int32 treasury;                                                                   // 0x0054 (size: 0x4)
    TArray<int32> requiresBuilding;                                                   // 0x0058 (size: 0x10)
    TArray<FName> requiredPerks;                                                      // 0x0068 (size: 0x10)
    int32 minimumSettlementLevel;                                                     // 0x0078 (size: 0x4)
    uint8 minimumProsperity;                                                          // 0x007C (size: 0x1)
    uint8 minimumHouseLv;                                                             // 0x007D (size: 0x1)
    bool lockedInOutposts;                                                            // 0x007E (size: 0x1)
    bool bUseOnlyOnce;                                                                // 0x007F (size: 0x1)
    int32 upgradesInto;                                                               // 0x0080 (size: 0x4)
    TArray<FMaintenanceSupply> maintenanceSupplies;                                   // 0x0088 (size: 0x10)
    TMap<class EMaintenanceCombo, class EMaintenanceEffect> MaintenanceEffects;       // 0x0098 (size: 0x50)
    TSet<EAffinityType> affinities;                                                   // 0x00E8 (size: 0x50)

}; // Size: 0x138

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

struct FVillageSpawnerData
{
    TSoftObjectPtr<AActor> spawnerActor;                                              // 0x0000 (size: 0x28)
    FTransform spawnerTransform;                                                      // 0x0030 (size: 0x60)
    bool IsTradePoint;                                                                // 0x0090 (size: 0x1)
    bool CanBePlayer;                                                                 // 0x0091 (size: 0x1)
    FVector nearestMapLocation;                                                       // 0x0098 (size: 0x18)
    FRegionData RegionData;                                                           // 0x00B0 (size: 0x20)
    float MaxDistanceToRegionBorder;                                                  // 0x00D0 (size: 0x4)

}; // Size: 0xE0

struct FWorkerFamily
{
    TArray<class ASMUnit*> familyMembers;                                             // 0x0000 (size: 0x10)
    class ASMBuildingMaster* assignedTo;                                              // 0x0010 (size: 0x8)
    class ASMBuildingMaster* familyStall;                                             // 0x0018 (size: 0x8)
    class ASMBuildingMaster* familyHome;                                              // 0x0020 (size: 0x8)
    FConsumptionStatus ConsumptionStatus;                                             // 0x0028 (size: 0x7)

}; // Size: 0x50

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
    class ARTSMultiEngineCPP* masterPtr;                                              // 0x02A8 (size: 0x8)
    int32 nearbyHouses;                                                               // 0x02B0 (size: 0x4)

    void updateBiome();
}; // Size: 0x2B8

class ABattlefield : public AActor
{
    class ARTSMultiEngineCPP* masterPtr;                                              // 0x02A8 (size: 0x8)

}; // Size: 0x2B0

class ABirdFlock : public AActor
{
    bool bIsEnabled;                                                                  // 0x02A8 (size: 0x1)
    int32 NumberOfBirds;                                                              // 0x02AC (size: 0x4)
    float FlyingHeight;                                                               // 0x02B0 (size: 0x4)
    float FlockWidthHalf;                                                             // 0x02B4 (size: 0x4)
    float FlockHeightHalf;                                                            // 0x02B8 (size: 0x4)
    float FlockTargetRandomRadius;                                                    // 0x02BC (size: 0x4)
    float SteeringSpeed;                                                              // 0x02C0 (size: 0x4)
    float FlockSpeed;                                                                 // 0x02C4 (size: 0x4)
    float QueueLandscapeRequests;                                                     // 0x02C8 (size: 0x4)
    float QueueObstacleInfrontRequests;                                               // 0x02CC (size: 0x4)
    TSubclassOf<class AActor> BirdsToSpawn;                                           // 0x02D0 (size: 0x8)

    FVector GetFlockLocation();
}; // Size: 0x400

class ABuildingTemplate : public AActor
{
    class UBoxComponent* Shape;                                                       // 0x02A8 (size: 0x8)
    class UDataTable* buildingStats;                                                  // 0x02B0 (size: 0x8)
    class ARTSMultiEngineCPP* masterPtr;                                              // 0x02B8 (size: 0x8)
    int32 bType;                                                                      // 0x02C0 (size: 0x4)
    bool ownershipByRegion;                                                           // 0x02C4 (size: 0x1)
    class ARegion* Region;                                                            // 0x02C8 (size: 0x8)
    TArray<FGood> Inventory;                                                          // 0x02D0 (size: 0x10)
    bool snapToNearestRoad;                                                           // 0x02E0 (size: 0x1)

}; // Size: 0x2E8

class AConstruction : public AActor
{
    class UMaterialInterface* burnedMaterial;                                         // 0x02B8 (size: 0x8)
    class UMaterialInterface* burningMaterial;                                        // 0x02C0 (size: 0x8)
    class UMaterialParameterCollection* BuildingsMPC;                                 // 0x02C8 (size: 0x8)
    class USceneComponent* defaultRootComponent;                                      // 0x02D0 (size: 0x8)
    class UPoseableMeshComponent* stoneStructure;                                     // 0x02D8 (size: 0x8)
    TArray<class UStaticMeshComponent*> debris;                                       // 0x02E0 (size: 0x10)
    float constructionProgress;                                                       // 0x02F0 (size: 0x4)
    FVector Data;                                                                     // 0x02F8 (size: 0x18)
    bool reverseConstruction;                                                         // 0x0310 (size: 0x1)
    bool isCollapsing;                                                                // 0x0311 (size: 0x1)
    bool onFire;                                                                      // 0x0312 (size: 0x1)
    TArray<FVector> completedBalkPositions;                                           // 0x0318 (size: 0x10)
    int32 lastElementUpdatedID;                                                       // 0x0330 (size: 0x4)
    TArray<class UStaticMeshComponent*> beamMeshes;                                   // 0x0338 (size: 0x10)
    TArray<class UStaticMeshComponent*> foundationMeshes;                             // 0x0348 (size: 0x10)
    TArray<class UStaticMeshComponent*> foundationMeshes_sorted;                      // 0x0358 (size: 0x10)
    TArray<class UStaticMeshComponent*> finalMeshes;                                  // 0x0368 (size: 0x10)
    TArray<class UStaticMeshComponent*> finalMeshes_sorted;                           // 0x0378 (size: 0x10)
    TArray<class UStaticMeshComponent*> sortedBoardMeshes;                            // 0x0388 (size: 0x10)
    TArray<FTransform> sortedBoardTransforms;                                         // 0x0398 (size: 0x10)
    TArray<FTransform> sortedBoardGroundTransforms;                                   // 0x03A8 (size: 0x10)
    int32 lastBoardUpdated;                                                           // 0x03B8 (size: 0x4)
    bool isStoneConstruction;                                                         // 0x03BC (size: 0x1)
    bool hasStoneFoundations;                                                         // 0x03BD (size: 0x1)
    bool sortSideways;                                                                // 0x03BE (size: 0x1)

    void updateElementVisibilityCommon();
    void updateConstructionLevel();
    void updateBoardVisibilityFast();
    void sortElementsFast(TArray<class UStaticMeshComponent*>& toSort, TArray<class UStaticMeshComponent*>& sorted, TArray<FTransform>& sortedTransforms, TArray<FTransform>& sortedGroundTransforms);
    TArray<FName> sortBoneNamesByLocation(TArray<FName> sourceArr);
    void setupConstructionFast();
    void setupConstruction();
    void setOnFire();
    void setData(const FVector& newData);
    void OnPartSleep(class UPrimitiveComponent* SleepingComponent, FName BoneName);
    FVector getData();
    void destroyConstructionBP();
}; // Size: 0x3C0

class ADepositDecal : public ADecalActor
{
    FGood depositedGood;                                                              // 0x02B0 (size: 0x18)
    int32 Limit;                                                                      // 0x02C8 (size: 0x4)
    FName depositType;                                                                // 0x02CC (size: 0x8)
    bool bRichDeposit;                                                                // 0x02D4 (size: 0x1)

}; // Size: 0x2D8

class ADiploRoom : public AActor
{
}; // Size: 0x2A8

class ADirector : public AActor
{
    class UDataTable* DT_Quests;                                                      // 0x02B0 (size: 0x8)
    TArray<FName> issuedQuests;                                                       // 0x02C0 (size: 0x10)
    int32 scenario_nextActionDay;                                                     // 0x02D0 (size: 0x4)

    bool startQuestFromPreset(const FName& questTag, class APawnCPP* questPawn, TArray<FReward> extraRewards, class ARegion* questRegion, bool askFirst, int32 daysLeftOverride);
}; // Size: 0x2D8

class AGhostStaticMeshActor : public AStaticMeshActor
{
    int32 buildingType;                                                               // 0x02B8 (size: 0x4)
    EWallType wallType;                                                               // 0x02BC (size: 0x1)

}; // Size: 0x2C0

class AHeightmapGen : public AActor
{
    class UTextureRenderTarget2D* RT_heightmap;                                       // 0x02A8 (size: 0x8)

    void refreshHeightmap();
}; // Size: 0x2B0

class AHudCPP : public AHUD
{
    class UTexture* roadIcon;                                                         // 0x0398 (size: 0x8)
    class UTexture* warningFood;                                                      // 0x03A0 (size: 0x8)
    class UTexture* warningCOld;                                                      // 0x03A8 (size: 0x8)
    class UTexture* warningJobs;                                                      // 0x03B0 (size: 0x8)
    class UTexture* warningWorkers;                                                   // 0x03B8 (size: 0x8)
    class UTexture* warningCrop;                                                      // 0x03C0 (size: 0x8)
    class UTexture* warningBarn;                                                      // 0x03C8 (size: 0x8)
    class UTexture* warningGood;                                                      // 0x03D0 (size: 0x8)
    class UTexture* alertSick;                                                        // 0x03D8 (size: 0x8)
    class UTexture* alertDead;                                                        // 0x03E0 (size: 0x8)
    class UTexture* alertToolsLow;                                                    // 0x03E8 (size: 0x8)
    class UTexture* alertToolsBroken;                                                 // 0x03F0 (size: 0x8)
    class UTexture* buildProgress;                                                    // 0x03F8 (size: 0x8)
    class UTexture* recruitProgress;                                                  // 0x0400 (size: 0x8)
    class UTexture* recruitAssembling;                                                // 0x0408 (size: 0x8)
    class UTexture* squadRibbon;                                                      // 0x0410 (size: 0x8)
    class UTexture* squadBg;                                                          // 0x0418 (size: 0x8)
    class UTexture* squadBgHighlight;                                                 // 0x0420 (size: 0x8)
    class UTexture* squadSpy;                                                         // 0x0428 (size: 0x8)
    class UTexture* squadDeer;                                                        // 0x0430 (size: 0x8)
    class UTexture* squadMerchant;                                                    // 0x0438 (size: 0x8)
    class UTexture* squadLivestockMerchant;                                           // 0x0440 (size: 0x8)
    class UTexture* squadSwordsmen;                                                   // 0x0448 (size: 0x8)
    class UTexture* squadSpearmen;                                                    // 0x0450 (size: 0x8)
    class UTexture* squadBowmen;                                                      // 0x0458 (size: 0x8)
    class UTexture* squadHorse;                                                       // 0x0460 (size: 0x8)
    class UTexture* squadMilitia;                                                     // 0x0468 (size: 0x8)
    class UTexture* squadMace;                                                        // 0x0470 (size: 0x8)
    class UTexture* squadBraced;                                                      // 0x0478 (size: 0x8)
    class UTexture* squadVisionObstructed;                                            // 0x0480 (size: 0x8)
    class UTexture2D* resBg;                                                          // 0x0488 (size: 0x8)
    class UTexture2D* resIron;                                                        // 0x0490 (size: 0x8)
    class UTexture2D* resTradepoint;                                                  // 0x0498 (size: 0x8)
    class UTexture2D* resStone;                                                       // 0x04A0 (size: 0x8)
    class UTexture2D* resBee;                                                         // 0x04A8 (size: 0x8)
    class UTexture2D* resBandit;                                                      // 0x04B0 (size: 0x8)
    class UTexture2D* resSalt;                                                        // 0x04B8 (size: 0x8)
    class UTexture2D* resClay;                                                        // 0x04C0 (size: 0x8)
    class UTexture2D* resBerries;                                                     // 0x04C8 (size: 0x8)
    class UTexture2D* resShrooms;                                                     // 0x04D0 (size: 0x8)
    class UTexture2D* problem_pastureSpace;                                           // 0x04D8 (size: 0x8)
    class UTexture2D* problem_occasionalNeed;                                         // 0x04E0 (size: 0x8)
    class UTexture2D* problem_questionMark;                                           // 0x04E8 (size: 0x8)
    class UTexture2D* problem_cantAfford;                                             // 0x04F0 (size: 0x8)
    class UTexture2D* problem_canUpgrade;                                             // 0x04F8 (size: 0x8)
    class UTexture2D* problem_homeless;                                               // 0x0500 (size: 0x8)
    class UTexture2D* problem_water;                                                  // 0x0508 (size: 0x8)
    class UTexture2D* problem_extension;                                              // 0x0510 (size: 0x8)
    class UTexture2D* problem_spoil;                                                  // 0x0518 (size: 0x8)
    class UTexture2D* problem_storage;                                                // 0x0520 (size: 0x8)
    class UTexture* crop;                                                             // 0x0528 (size: 0x8)
    class UTexture* cropDestroy;                                                      // 0x0530 (size: 0x8)
    TArray<FIcon> drawList;                                                           // 0x0538 (size: 0x10)
    TArray<FUIText> drawTextList;                                                     // 0x0548 (size: 0x10)
    class UFont* defaultFont;                                                         // 0x0558 (size: 0x8)
    bool bDrawBattleDebug;                                                            // 0x0560 (size: 0x1)
    int32 debug_numBattles;                                                           // 0x0564 (size: 0x4)
    int32 debug_numFriendsInBattle;                                                   // 0x0568 (size: 0x4)
    int32 debug_numStray;                                                             // 0x0570 (size: 0x4)
    int32 debug_myMeleeStr;                                                           // 0x0574 (size: 0x4)
    int32 debug_myMissileStr;                                                         // 0x057C (size: 0x4)
    TArray<FName> debug_battleTags;                                                   // 0x0588 (size: 0x10)
    TArray<FName> debug_myArmyTags;                                                   // 0x0598 (size: 0x10)
    TArray<FSegment> drawArcs;                                                        // 0x05A8 (size: 0x10)
    class UDataTable* DT_HudIcons;                                                    // 0x05B8 (size: 0x8)
    bool bShouldClearDrawList;                                                        // 0x05C0 (size: 0x1)

    void onWorldDestroy(class UWorld* World);
    bool iconPositionTaken(const FVector2D& Pos);
    class UTexture2D* getHudIconByName(FName IconName);
    void drawUIText(FString String, const FVector2D& Pos, const bool& drawBorder, const FColor& Color);
    void drawIconTexture(const FIcon& iconToDraw);
    void drawIcon(int32 ID, const FVector2D& Pos, float scale, float progress, const FColor& Tint);
    void DrawHUD();
    void drawBattleDebug();
    void drawArc(const FVector& Start, const FVector& End, const FColor& Color, const float& Thickness);
    void clearDrawList();
}; // Size: 0x5E0

class AMLWaterBodyRiver : public AWaterBodyRiver
{
    bool bGenerateCollision;                                                          // 0x0318 (size: 0x1)
    float BankCollisionOffset;                                                        // 0x031C (size: 0x4)
    float SubdivisionTargetLength;                                                    // 0x0320 (size: 0x4)

}; // Size: 0x350

class AMenuPawn : public APawn
{

    void OnWindowFocusChanged(bool bIsFocused);
}; // Size: 0x328

class ANotStrongholdCPPGameModeBase : public AGameModeBase
{
}; // Size: 0x340

class AObstacle : public AActor
{
}; // Size: 0x330

class APMaster : public AActor
{
    class ARTSMultiEngineCPP* masterPtr;                                              // 0x02A8 (size: 0x8)
    FTimerHandle projUpdateHandle;                                                    // 0x02B0 (size: 0x8)
    TArray<FProj> projArr;                                                            // 0x02B8 (size: 0x10)
    class UInstancedStaticMeshComponent* InstanceArrow;                               // 0x02C8 (size: 0x8)
    class UInstancedStaticMeshComponent* InstanceTorch;                               // 0x02D0 (size: 0x8)

    void updateProj();
    void shootProjectile(int32 Type, FVector Start, FVector End, float Height, class ASMUnit* shooter);
}; // Size: 0x2D8

class APawnCPP : public APawn
{
    FPawnCPPOnPaperMapViewChanged onPaperMapViewChanged;                              // 0x0330 (size: 0x10)
    void OnPaperMapViewChanged(bool bIsPaperMapView);
    class ARTSMultiEngineCPP* masterPtr;                                              // 0x0340 (size: 0x8)
    bool isMainPlayer;                                                                // 0x034C (size: 0x1)
    bool isAI;                                                                        // 0x034D (size: 0x1)
    bool bCinematicTime;                                                              // 0x034E (size: 0x1)
    class USpringArmComponent* Boom;                                                  // 0x0358 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0360 (size: 0x8)
    class UCurveFloat* CameraAngleCurve;                                              // 0x0368 (size: 0x8)
    float cameraHeightMin;                                                            // 0x0370 (size: 0x4)
    float cameraHeightMax;                                                            // 0x0374 (size: 0x4)
    float zoomLevel;                                                                  // 0x0378 (size: 0x4)
    float smoothZoomLevel;                                                            // 0x037C (size: 0x4)
    float smoothZoomIncr;                                                             // 0x0380 (size: 0x4)
    FRotator smoothRotation;                                                          // 0x0388 (size: 0x18)
    bool b_ctrl_pressed;                                                              // 0x03BC (size: 0x1)
    bool shift_pressed_b;                                                             // 0x03BD (size: 0x1)
    bool b_tab_pressed;                                                               // 0x03BE (size: 0x1)
    bool alt_pressed_b;                                                               // 0x03BF (size: 0x1)
    FVector2D LMB_pressed_2d;                                                         // 0x03F8 (size: 0x10)
    FVector2D LMB_pressed_2d_scaled;                                                  // 0x0408 (size: 0x10)
    bool RMB_pressed_b;                                                               // 0x0468 (size: 0x1)
    bool LMB_pressed_b;                                                               // 0x0469 (size: 0x1)
    bool MMB_pressed_b;                                                               // 0x046A (size: 0x1)
    float cameraRotateAxisValue;                                                      // 0x048C (size: 0x4)
    class ASMUnit* hoverUnit;                                                         // 0x0528 (size: 0x8)
    bool bHoversEnemy;                                                                // 0x0530 (size: 0x1)
    class ASMUnit* SelectedDebugUnit;                                                 // 0x0538 (size: 0x8)
    TArray<class ASMUnit*> selectedArr;                                               // 0x0540 (size: 0x10)
    TArray<int32> selectedSquads;                                                     // 0x0550 (size: 0x10)
    int32 hoverSquadID;                                                               // 0x0564 (size: 0x4)
    FPawnCPPOnReorderUnitCards OnReorderUnitCards;                                    // 0x0580 (size: 0x10)
    void SDMDelegate();
    TArray<int32> rallyingSquadIDs;                                                   // 0x0590 (size: 0x10)
    bool isUsingUI;                                                                   // 0x05A8 (size: 0x1)
    bool bFullscreenUIActive;                                                         // 0x05A9 (size: 0x1)
    class UControlHook* ControlHook;                                                  // 0x05B0 (size: 0x8)
    class UMaterialParameterCollectionInstance* MPC;                                  // 0x05B8 (size: 0x8)
    class UMaterialParameterCollection* buildingMPC;                                  // 0x05C0 (size: 0x8)
    ECursorMode cursorMode;                                                           // 0x05C8 (size: 0x1)
    TArray<FLogEntry> log;                                                            // 0x05D0 (size: 0x10)
    FPawnCPPOnPlaceBuildingChanged onPlaceBuildingChanged;                            // 0x05E0 (size: 0x10)
    void SDMDelegate();
    EBuildingCategory BuildingCategory;                                               // 0x05F0 (size: 0x1)
    FPawnCPPOnBuildingCategoryChanged OnBuildingCategoryChanged;                      // 0x05F8 (size: 0x10)
    void SDMDelegate();
    int32 placeBuilding;                                                              // 0x0608 (size: 0x4)
    class UStaticMeshComponent* bbox;                                                 // 0x0610 (size: 0x8)
    float workAreaPreviewRange;                                                       // 0x0688 (size: 0x4)
    class UStaticMeshComponent* workAreaMesh;                                         // 0x0690 (size: 0x8)
    class UDecalComponent* rangeDecal;                                                // 0x06A0 (size: 0x8)
    class UMaterialInterface* rangeDecalMat;                                          // 0x06A8 (size: 0x8)
    class UStaticMeshComponent* roadDecal;                                            // 0x06B0 (size: 0x8)
    class UMaterialInterface* roadDecalMat;                                           // 0x06B8 (size: 0x8)
    class UMaterialInterface* roadPosDecalMat;                                        // 0x06C0 (size: 0x8)
    class UMaterialInterface* roadPosDecalMatOnRoad;                                  // 0x06C8 (size: 0x8)
    class UMaterialInterface* buildingPreviewDecalMat;                                // 0x06D0 (size: 0x8)
    class UMaterialInterface* extensionPreviewDecalMat;                               // 0x06D8 (size: 0x8)
    class UMaterialInterface* marketPreviewDecalMat;                                  // 0x06E0 (size: 0x8)
    class UMaterialInterface* bPartPreviewDecalMat;                                   // 0x06E8 (size: 0x8)
    class UDecalComponent* moveArrow;                                                 // 0x06F0 (size: 0x8)
    class UMaterialInterface* ArrowMat;                                               // 0x06F8 (size: 0x8)
    class UStaticMeshComponent* BoundsDecal;                                          // 0x0700 (size: 0x8)
    class UMaterialInterface* boundsDecalMat;                                         // 0x0708 (size: 0x8)
    class UMaterialInterface* circularBoundsDecalMat;                                 // 0x0710 (size: 0x8)
    class UMaterialInterface* boundsDecalMat_Military;                                // 0x0718 (size: 0x8)
    class ASMBuildingMaster* hitBuilding;                                             // 0x0720 (size: 0x8)
    class ASMBuilding* hitBuildingPart;                                               // 0x0728 (size: 0x8)
    TArray<class ASMBuildingMaster*> selectedBld;                                     // 0x0738 (size: 0x10)
    TArray<class ASMBuildingMaster*> closeBuildings;                                  // 0x0750 (size: 0x10)
    FTimerHandle updateCloseHandle;                                                   // 0x0760 (size: 0x8)
    FVector lastProximityCacheUpdateLocation;                                         // 0x0768 (size: 0x18)
    float lastZoomLevelProximityCacheUpdate;                                          // 0x0780 (size: 0x4)
    class ARoad* dummyRoad;                                                           // 0x0788 (size: 0x8)
    TArray<FVector> roadPoints;                                                       // 0x0790 (size: 0x10)
    FPawnCPPOnRoadModeChanged onRoadModeChanged;                                      // 0x07A0 (size: 0x10)
    void SDMDelegate();
    bool roadmode;                                                                    // 0x07B0 (size: 0x1)
    bool roadRemoveMode;                                                              // 0x07B1 (size: 0x1)
    FVector roadStartPos;                                                             // 0x07B8 (size: 0x18)
    bool roadStarted;                                                                 // 0x07D0 (size: 0x1)
    bool roadBuildHover;                                                              // 0x07D1 (size: 0x1)
    class ARoad* hoverRoad;                                                           // 0x0828 (size: 0x8)
    class ASMBuildingMaster* plannerModeBld;                                          // 0x0850 (size: 0x8)
    bool inPlanningMode;                                                              // 0x0858 (size: 0x1)
    class AActor* hoverBlueprint;                                                     // 0x0860 (size: 0x8)
    class AActor* selectedBlueprint;                                                  // 0x0868 (size: 0x8)
    class AActor* draggingBlueprint;                                                  // 0x0870 (size: 0x8)
    FVector draggingBlueprint_StartLocation;                                          // 0x0878 (size: 0x18)
    FRotator draggingBlueprint_StartRotation;                                         // 0x0890 (size: 0x18)
    int32 draggingRoadPointID;                                                        // 0x08A8 (size: 0x4)
    bool isDraggingGatePoint;                                                         // 0x08AC (size: 0x1)
    class UStaticMeshComponent* rotationGizmo;                                        // 0x08C0 (size: 0x8)
    float rotationGizmo_startYaw;                                                     // 0x08C8 (size: 0x4)
    bool isDraggingRotationGizmo;                                                     // 0x08CC (size: 0x1)
    bool isRotationGizmoHovered;                                                      // 0x08CD (size: 0x1)
    float rotationGizmo_smoothOpacity;                                                // 0x08D0 (size: 0x4)
    class UTextureRenderTarget2D* RT_modulePlanner;                                   // 0x08E0 (size: 0x8)
    FGlobalSettings Settings;                                                         // 0x08E8 (size: 0x2)
    bool hasClicked;                                                                  // 0x0914 (size: 0x1)
    FVector2D camVelo;                                                                // 0x0918 (size: 0x10)
    FString lordsName;                                                                // 0x0928 (size: 0x10)
    bool letterCreatorMode;                                                           // 0x0938 (size: 0x1)
    float mapLerp;                                                                    // 0x093C (size: 0x4)
    class UMaterialInterface* deerDecalMat;                                           // 0x0950 (size: 0x8)
    class UMaterialInterface* decal_dot;                                              // 0x0958 (size: 0x8)
    class UMaterialInterface* decal_cross;                                            // 0x0960 (size: 0x8)
    bool bIsPlayerPaused;                                                             // 0x0968 (size: 0x1)
    FPawnCPPOnGameSpeedChanged OnGameSpeedChanged;                                    // 0x0970 (size: 0x10)
    void SDMDelegate();
    class ARegion* currentRegion;                                                     // 0x0980 (size: 0x8)
    class ARegion* regionUnderCursor;                                                 // 0x0988 (size: 0x8)
    FPawnCPPOnRegionChanged OnRegionChanged;                                          // 0x0990 (size: 0x10)
    void SDMDelegate();
    FPawnCPPOnStatUpdateRequested OnStatUpdateRequested;                              // 0x09A0 (size: 0x10)
    void SDMDelegate();
    FPawnCPPOnProblemUpdateRequested OnProblemUpdateRequested;                        // 0x09B0 (size: 0x10)
    void SDMDelegate();
    FPawnCPPOnArmyUpdateRequested OnArmyUpdateRequested;                              // 0x09C0 (size: 0x10)
    void SDMDelegate();
    FPawnCPPOnArmyListUpdateRequested OnArmyListUpdateRequested;                      // 0x09D0 (size: 0x10)
    void SDMDelegate();
    FPawnCPPOnClaimUpdateRequested OnClaimUpdateRequested;                            // 0x09E0 (size: 0x10)
    void SDMDelegate();
    bool markLoyaltyUIUpdate;                                                         // 0x09F0 (size: 0x1)
    int32 numFieldDrainage;                                                           // 0x09F4 (size: 0x4)
    float camera_tilt;                                                                // 0x09F8 (size: 0x4)
    float camera_heightOffset;                                                        // 0x09FC (size: 0x4)
    float camera_clearance;                                                           // 0x0A00 (size: 0x4)
    float roadTangentScale;                                                           // 0x0A04 (size: 0x4)
    TArray<int32> commandedSquads;                                                    // 0x0A10 (size: 0x10)
    TArray<int32> activeCommandedSquads;                                              // 0x0A20 (size: 0x10)
    TArray<int32> enemySquads;                                                        // 0x0A30 (size: 0x10)
    int32 silver;                                                                     // 0x0A40 (size: 0x4)
    EMainUIMode currentUIMode;                                                        // 0x0A58 (size: 0x1)
    bool cinematicMode;                                                               // 0x0A59 (size: 0x1)
    bool followMode;                                                                  // 0x0A9C (size: 0x1)
    class AActor* following;                                                          // 0x0AA0 (size: 0x8)
    int32 tabBeforeSwitch;                                                            // 0x0AA8 (size: 0x4)
    TArray<FQuest> proposedQuests;                                                    // 0x0AB8 (size: 0x10)
    TArray<FQuest> questOpportunities;                                                // 0x0AD8 (size: 0x10)
    float roadCurvatureBarOpacity;                                                    // 0x0B08 (size: 0x4)
    bool bRoadCurvatureChanged;                                                       // 0x0B0C (size: 0x1)
    FPawnCPPOnMapViewModeChanged onMapViewModeChanged;                                // 0x0B10 (size: 0x10)
    void SDMDelegate();
    bool mapViewMode;                                                                 // 0x0B20 (size: 0x1)
    float mapViewDist;                                                                // 0x0B24 (size: 0x4)
    float mapViewSpeedMul;                                                            // 0x0B28 (size: 0x4)
    class ARegion* hoveringRegion;                                                    // 0x0B30 (size: 0x8)
    class ARegion* selectedRegion;                                                    // 0x0B38 (size: 0x8)
    float recruitCost;                                                                // 0x0B40 (size: 0x4)
    TArray<FLogEntry> dismissedEntries;                                               // 0x0B48 (size: 0x10)
    float lastActionTime;                                                             // 0x0B58 (size: 0x4)
    int32 lastQuestDay;                                                               // 0x0B5C (size: 0x4)
    TArray<FQuest> quests;                                                            // 0x0B60 (size: 0x10)
    TArray<int32> availablePolicies;                                                  // 0x0B70 (size: 0x10)
    bool isBandit;                                                                    // 0x0B80 (size: 0x1)
    TArray<FClaim> claims;                                                            // 0x0B88 (size: 0x10)
    int32 influence;                                                                  // 0x0B98 (size: 0x4)
    uint8 targetSquadSize;                                                            // 0x0BA8 (size: 0x1)
    TArray<FName> recruiting;                                                         // 0x0BB0 (size: 0x10)
    int32 maxNumOfMilitiaToSpawn;                                                     // 0x0BC0 (size: 0x4)
    bool cameraMoved;                                                                 // 0x0BC4 (size: 0x1)
    bool cameraRotated;                                                               // 0x0BC5 (size: 0x1)
    bool cameraZoomed;                                                                // 0x0BC6 (size: 0x1)
    TArray<class APawnCPP*> enemies;                                                  // 0x0BC8 (size: 0x10)
    FColor playerColor;                                                               // 0x0BD8 (size: 0x4)
    FRotator fieldRot;                                                                // 0x0BE0 (size: 0x18)
    TArray<FName> recruitmentPool_Mercs;                                              // 0x0BF8 (size: 0x10)
    TArray<FName> recruitmentPool_Militia;                                            // 0x0C08 (size: 0x10)
    TArray<FString> diplomaticTags;                                                   // 0x0C18 (size: 0x10)
    TArray<FParagraph> letterHistory;                                                 // 0x0C28 (size: 0x10)
    TArray<FLetter> InBox;                                                            // 0x0C38 (size: 0x10)
    TArray<FLetter> outbox;                                                           // 0x0C48 (size: 0x10)
    bool wallMode;                                                                    // 0x0C58 (size: 0x1)
    bool bRelationsEstablishd;                                                        // 0x0C59 (size: 0x1)
    bool placeBuilding_isSnapped;                                                     // 0x0C5A (size: 0x1)
    int32 placeBuilding_snapVariation;                                                // 0x0C5C (size: 0x4)
    bool isFemale;                                                                    // 0x0C60 (size: 0x1)
    class UTexture2D* Portrait;                                                       // 0x0C68 (size: 0x8)
    int32 kingsFavour;                                                                // 0x0C70 (size: 0x4)
    int32 predictedIncome;                                                            // 0x0C74 (size: 0x4)
    float lastShoutSfx;                                                               // 0x0C78 (size: 0x4)
    FSquadTooltip SquadTooltip;                                                       // 0x0C80 (size: 0x18)
    bool shouldUpdateArmyUI;                                                          // 0x0CB8 (size: 0x1)
    bool shouldUpdateArmyListUI;                                                      // 0x0CB9 (size: 0x1)
    bool shouldUpdateStatUI;                                                          // 0x0CBA (size: 0x1)
    class ARegion* RegionPanelTarget;                                                 // 0x0CC0 (size: 0x8)
    EQueuedUIUpdateType RegionPanel_GoodListUpdateType;                               // 0x0CC8 (size: 0x1)
    class ARegion* LastRegionPanelTarget;                                             // 0x0D20 (size: 0x8)
    bool shouldUpdateProblemUI;                                                       // 0x0D28 (size: 0x1)
    bool shouldUpdateClaimUI;                                                         // 0x0D29 (size: 0x1)
    bool shouldUpdateApprovalUI;                                                      // 0x0D2A (size: 0x1)
    bool shouldUpdateInventoryStorageUI;                                              // 0x0D2B (size: 0x1)
    bool shouldUpdateResidentsUI;                                                     // 0x0D2C (size: 0x1)
    bool bShouldUpdateLivingSpaceUI;                                                  // 0x0D2D (size: 0x1)
    bool bShowSurplus;                                                                // 0x0E88 (size: 0x1)
    float lastIconClickTime;                                                          // 0x0E8C (size: 0x4)
    class UStaticMeshComponent* firingRangeMesh;                                      // 0x0E90 (size: 0x8)
    class UMaterialInstanceDynamic* firingRangeDynamicMaterial;                       // 0x0E98 (size: 0x8)
    bool firingRangeVisible;                                                          // 0x0EA0 (size: 0x1)
    float firingRangeOpacity;                                                         // 0x0EA4 (size: 0x4)
    class UMaterialInterface* unitColorDecalMat;                                      // 0x0EA8 (size: 0x8)
    class UMaterialInstanceDynamic* unitDecalDynamic;                                 // 0x0EB0 (size: 0x8)
    class UMaterialInstanceDynamic* unitDecalDynamic_selected;                        // 0x0EB8 (size: 0x8)
    TArray<FSquadIcon> squadIconDrawList;                                             // 0x0EC0 (size: 0x10)
    TArray<int32> showDecalSquads;                                                    // 0x0ED0 (size: 0x10)
    bool weather_thunderStorm;                                                        // 0x0EE0 (size: 0x1)
    float DMS_battleIntensity;                                                        // 0x0EE4 (size: 0x4)
    float DMS_tacticalRetreat;                                                        // 0x0EE8 (size: 0x4)
    FTimerHandle DMS_update_handle;                                                   // 0x0EF0 (size: 0x8)
    TArray<class AResource*> resourcesInCollisionOfPlacebuilding;                     // 0x0EF8 (size: 0x10)
    float LMB_last_pressed_time;                                                      // 0x0F08 (size: 0x4)
    float doubleclick_threshold;                                                      // 0x0F0C (size: 0x4)
    FPawnCPPOnPlotTypeChanged onPlotTypeChanged;                                      // 0x0F10 (size: 0x10)
    void SDMDelegate();
    EPlotType placePlotType;                                                          // 0x0F20 (size: 0x1)
    bool placeFieldMode;                                                              // 0x0F21 (size: 0x1)
    bool isMarket;                                                                    // 0x0F22 (size: 0x1)
    bool isExtension;                                                                 // 0x0F23 (size: 0x1)
    class ASMBuildingMaster* extensionFor;                                            // 0x0F28 (size: 0x8)
    bool fieldCollides;                                                               // 0x0F30 (size: 0x1)
    TArray<FFieldPoint> FieldPoints;                                                  // 0x0F38 (size: 0x10)
    TArray<FFieldPoint> fieldPointsClosed;                                            // 0x0F48 (size: 0x10)
    TArray<FFieldPoint> fieldPointsRotated;                                           // 0x0F58 (size: 0x10)
    TArray<FVector> fieldSmoothPoints;                                                // 0x0F68 (size: 0x10)
    TArray<FVector> fieldSmoothPointsClosed;                                          // 0x0F78 (size: 0x10)
    TArray<FVector> fieldPreviewTriangulated;                                         // 0x0F88 (size: 0x10)
    bool fieldClosed;                                                                 // 0x0F98 (size: 0x1)
    FVector fieldCenter;                                                              // 0x0FA0 (size: 0x18)
    int32 fieldWorkersNeeded;                                                         // 0x0FB8 (size: 0x4)
    float minimumBuildDistanceFromBorder;                                             // 0x0FC0 (size: 0x4)
    FVector lastKnownFieldPointPreviewPos;                                            // 0x0FC8 (size: 0x18)
    bool isInsideBorders;                                                             // 0x0FE0 (size: 0x1)
    FVector2D LastMousePos;                                                           // 0x0FE8 (size: 0x10)
    FVector LastCameraPos;                                                            // 0x0FF8 (size: 0x18)
    bool fieldPointsChanged;                                                          // 0x1050 (size: 0x1)
    TArray<FExtractedPlot> extractedPlots;                                            // 0x1058 (size: 0x10)
    int32 slicingAngle;                                                               // 0x1068 (size: 0x4)
    int32 numPlotOffset;                                                              // 0x106C (size: 0x4)
    int32 expectedNumPlots;                                                           // 0x1070 (size: 0x4)
    int32 maxDivisionsForThisPlot;                                                    // 0x1074 (size: 0x4)
    TArray<FTransform> extensionTransforms;                                           // 0x1078 (size: 0x10)
    TArray<FTransform> marketTransforms;                                              // 0x1088 (size: 0x10)
    TArray<class USplineMeshComponent*> fieldSplineMeshes;                            // 0x1098 (size: 0x10)
    class UStaticMesh* fieldSpline_StaticMesh;                                        // 0x10E0 (size: 0x8)
    class UMaterialInterface* M_fieldSplineDummy;                                     // 0x10E8 (size: 0x8)
    int32 hoverProblem;                                                               // 0x10F0 (size: 0x4)
    TArray<class UStaticMeshComponent*> previewRoadDecals;                            // 0x10F8 (size: 0x10)
    class UStaticMesh* buildingPreviewPlane;                                          // 0x1108 (size: 0x8)
    TArray<class UStaticMeshComponent*> previewBuildingDecals;                        // 0x1110 (size: 0x10)
    TArray<class UStaticMeshComponent*> previewExtensionDecals;                       // 0x1120 (size: 0x10)
    int32 marketShape;                                                                // 0x1130 (size: 0x4)
    ETooltipTint tooltipTint;                                                         // 0x1134 (size: 0x1)
    int32 predictedRoyalTaxes;                                                        // 0x1138 (size: 0x4)
    int32 numTimesInDebt;                                                             // 0x113C (size: 0x4)
    class ASMBuildingMaster* movedBuilding;                                           // 0x1140 (size: 0x8)
    TArray<class UStaticMeshComponent*> fieldPointMarkers;                            // 0x1148 (size: 0x10)
    TArray<float> markerAnimationTimes;                                               // 0x1158 (size: 0x10)
    class UStaticMesh* SM_fieldMarker;                                                // 0x1168 (size: 0x8)
    bool bHoversRoadCommit;                                                           // 0x1170 (size: 0x1)
    bool buildConfirmHovered;                                                         // 0x1171 (size: 0x1)
    FProblem lastPressedProblem;                                                      // 0x1178 (size: 0x38)
    int32 whiteTooltipCorner;                                                         // 0x11B0 (size: 0x4)
    FUpgradeRequest UpgradeRequest;                                                   // 0x11B8 (size: 0x10)
    FUpgradeRequest artisanChangeRequest;                                             // 0x11C8 (size: 0x10)
    FUpgradeRequest extensionChangeRequest;                                           // 0x11D8 (size: 0x10)
    TArray<class ASMBuildingMaster*> demolishRequests;                                // 0x11E8 (size: 0x10)
    bool commitFieldRequestPending;                                                   // 0x11F8 (size: 0x1)
    bool upgradeRequestPending;                                                       // 0x11F9 (size: 0x1)
    bool artisanChangeRequestPending;                                                 // 0x11FA (size: 0x1)
    bool extensionChangeRequestPending;                                               // 0x11FB (size: 0x1)
    bool requestBuild;                                                                // 0x11FC (size: 0x1)
    TArray<FName> traits;                                                             // 0x1210 (size: 0x10)
    bool hasAnyActiveQuests;                                                          // 0x1220 (size: 0x1)
    float foliageTransparencyAdd;                                                     // 0x1224 (size: 0x4)
    bool debugBoopMode;                                                               // 0x1228 (size: 0x1)
    class ASMUnit* reassignMode_FamilyMember;                                         // 0x1230 (size: 0x8)
    FTimerHandle animateDoorsHandle;                                                  // 0x1238 (size: 0x8)
    float cameraLerpFrames;                                                           // 0x1240 (size: 0x4)
    TArray<FName> lastVoiceResponses;                                                 // 0x1248 (size: 0x10)
    class UStaticMeshComponent* wallCursor;                                           // 0x1258 (size: 0x8)
    class UDataTable* DT_Alerts;                                                      // 0x1260 (size: 0x8)
    TArray<int32> visibleSquads;                                                      // 0x1268 (size: 0x10)
    FTimerHandle squadVisiblityHandle;                                                // 0x1278 (size: 0x8)
    float smoothedConstrMode;                                                         // 0x1280 (size: 0x4)
    float dipToBlackOpacity;                                                          // 0x12D0 (size: 0x4)
    TArray<FCinematicShot> cinematicShotQueue;                                        // 0x12D8 (size: 0x10)
    FCinematicShot currentCinematicShot;                                              // 0x12E8 (size: 0x80)
    float currentCinematicShotElapsedTime;                                            // 0x1368 (size: 0x4)
    ECinematicEvent cinematicOverEvent;                                               // 0x136C (size: 0x1)
    bool grayscaleTint;                                                               // 0x136D (size: 0x1)
    class UStaticMesh* plotToRoadSnappingHelperStaticMesh;                            // 0x1370 (size: 0x8)
    TArray<class UStaticMeshComponent*> plotToRoadSnappingHelpers;                    // 0x1378 (size: 0x10)
    float timeMarketDistributionHovered;                                              // 0x1388 (size: 0x4)
    bool bMarketDistributionShowing;                                                  // 0x138C (size: 0x1)
    EResidentialRequirement marketDistributionOverlayCategory;                        // 0x138D (size: 0x1)
    EItemSubcategory marketDistributionOverlaySubcategory;                            // 0x138E (size: 0x1)
    class UTexture2D* marketResourceIconBgTexture;                                    // 0x1390 (size: 0x8)
    bool shouldUpdateMarketStats;                                                     // 0x139C (size: 0x1)
    ERTSTool activeRTSTool;                                                           // 0x139D (size: 0x1)
    class AActor* RTSToolActor;                                                       // 0x13A0 (size: 0x8)
    FName activeRTSToolVariety;                                                       // 0x13A8 (size: 0x8)
    TArray<int32> placebuilding_missingTech;                                          // 0x13B0 (size: 0x10)
    TMap<FName, int32> tagAdditionDay;                                                // 0x13C0 (size: 0x50)
    class UStaticMesh* squadPathArrowMesh;                                            // 0x1418 (size: 0x8)

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
    void updateRoadDecalVisibility();
    void UpdateRetinuePreviewMeshTransform();
    void updateResourceOutlines();
    void updateResidentsUI();
    void updateRecruitmentPool();
    void updateQuestTimesUI();
    void updateQuestlog();
    void updateProjectedFieldCollision(bool checkSteepness, bool reprojectNoSnapIfCollides);
    void updateProblemUI();
    void updatePreviewRoadDecalsPos();
    void updatePreviewBuildingDecalsPos();
    void updatePlotToRoadSnappingHelperLocations();
    void updatePlacebuildingMPC();
    void updatePlacebuildingMesh(int32 buildingID, bool isSnapped, int32 snapVariationID);
    void updateOverlayDecalVisibility();
    void updateOrderProgressUI(const class ASMBuildingMaster* building);
    void updateMercenayCompanyUI();
    void updateMarketStats();
    void updateLogUI();
    void UpdateLivingSpaceUI();
    void updateKingsFavourUI();
    void updateInventoryStorage();
    void updateInventoryFieldStatus();
    void updateInventory(const EUpdateType UpdateType);
    void updateHoveringRegion();
    void updateHasAnyActiveQuests();
    void updateGameSpeedUI();
    void updateFieldPointMarkers();
    void updateDiplomaticTags();
    void updateDemolishAvailabilityInOpenedBuildingTabsUI();
    void updateDateUI(int32 day, int32 month, int32 Season);
    void updateCursor(ECursorMode NewMode);
    void updateCurrentRegionUI();
    void updateCurrentRegion();
    void updateCommandedAndEnemySquads(bool includeFleeing);
    void updateCoatOfArmsSymbol();
    void updateClaimsUI();
    void updateClaims();
    void updateClaimBlocked(FClaim& Claim);
    void updateCastleReconstructionCostUI();
    void updateCastleConstructionAvailabilityUI();
    void updateCameraClearance();
    void UpdateBuildingProximityCache();
    void updateBoopMode();
    void updateAssignModeUI();
    void updateApprovalUI();
    void updateAnySaveMenu();
    void updateActiveRTSToolUI();
    void unPauseGame();
    void triggerTutorialIfNeeded(FName tutorialMsg, const FVector& Location);
    void triggerDefeat(const FName& EventTag, class APawnCPP* byWho);
    void toggleTimePause();
    void toggleTimeNext();
    void toggleTimeLast();
    void toggleSprint();
    void togglePauseMenu();
    void toggleDevelopmentPanel();
    void tickCinematicShot(float DeltaTime);
    void tabBpReleased();
    void tabBpPressed();
    void tab_released();
    void tab_pressed();
    void switchWallMode(const bool& NewMode);
    void switchTab(const int32& Tab);
    void stopVAMP();
    bool splitWallsByCastleModule(const class AStaticMeshActor* Actor);
    void spawnWorkAreaConfirmation(const FVector& Pos, const float& Radius);
    void spawnWallJoinWidget(const class ARoad* wallA, const class ARoad* wallB);
    void spawnPlotToRoadSnappingHelperLocations(int32 numHelpers);
    void spawnCastleFloater(class AActor* buildingModule);
    void showSavingIcon();
    void showProgressUpdate(class ARegion* Region);
    bool shouldShowFieldPreview();
    void setWorkAreaMode(class ASMBuildingMaster* building);
    void setUIScale(float NewScale);
    void settleRegion(class ARegion* regionToSettle, const FTransform& SettlersCampLocation, uint8 supplyLevel, ESettlementType settlementType, class ARegion* outpostToRegion);
    void setSquadName(int32 squadID, FString newName);
    void SetShowSurplus(bool bInShowSurplus);
    void setShowPlotToRoadSnappingHelpers(bool shouldShow);
    void SetSettings(FGlobalSettings newSettings);
    void setRoadMode(bool Mode, FVector StartPos, bool Started);
    void setReassignMode(class ASMUnit* FamilyMember);
    void SetPreviewWorkAreaMode(class ASMBuildingMaster* building);
    void SetPosition(const FVector& newPos);
    void setPlannerMode(class ASMBuildingMaster* setPlannerBuilding);
    void setPlaceRallyingPoint(TArray<int32> squadIDs);
    void setPlacedBuilding(int32 newPlacedBuilding);
    void setMapMode(const bool& newMapMode);
    void setMapLerp(const float& NewValue);
    void setMainUIMode(EMainUIMode NewMode);
    void setLocationAboveGround(FVector& NewPosition, float DeltaTime);
    void SetLMBReleased(bool isLMBReleased);
    void setLetterCreatorMode(const bool NewMode);
    void setIsUsingUI(bool newFlag);
    void setIsUsingLowTopBars(const bool& newFlag);
    void setInventoryTabForBuilding(class ASMBuildingMaster* building, int32 inventoryTabIndex);
    void SetGoodCounterWidget(int32 goodType, bool bAlternativeWidget, class UTextBlock* WidgetToSet);
    void setGameSpeed(const float NewSpeed);
    void setFollowMode(class AActor* actorToFollow, bool playSfx);
    void setFieldMode(bool NewMode, EPlotType plotType);
    void setDipToBlackOpacity(float Opacity);
    void setCinematicMode(bool NewMode);
    void setChoice(FName newChoice, int32 questID);
    void SetCategoryCounterWidget(EItemCategory Category, class UTextBlock* WidgetToSet);
    void setBuildingSelected(class ASMBuildingMaster* building, bool newSelected);
    void setBuildingMeshSoft(const TSoftObjectPtr<UStaticMesh>& InMesh);
    void setBuildingMesh(class UStaticMesh* Mesh);
    void SetBuildingCategory(EBuildingCategory InCategory);
    void setBorderVisibility(bool newSetting);
    void setAllBuildingMeshesHidden(bool hidden);
    void sendLetter(class APawnCPP* recipient, const TArray<FName>& Letter);
    void selectSquad(int32 squadID, bool resetSelection, bool playSounds);
    void selectHoveredBuilding();
    void selectCastleBlueprint(class AActor* Blueprint, bool turnOnFollowMode);
    void selectBuildingSilent(class ASMBuildingMaster* bld);
    void selectBuildingMode(int32 InBuilding, const FStat& InBuildingStat);
    void saveScreenshot();
    void RMB_BP_released();
    void RMB_BP_pressed();
    void ReverseSelectedWall();
    void respawnTownNames();
    void respawnSquadPathArrows(int32 squadID);
    void respawnPreviewRoadDecals();
    void respawnPreviewBuildingDecals();
    bool requestSaveFile(FString SlotName, FString saveName);
    void reorderUnitCard(int32 squadID, int32 newIndex);
    void renameSquad(int32 squadID, FString newName);
    void removeSquad(int32 squadID);
    void removeRoad(class ARoad* roadToRemove);
    void removeOpportunity(FQuest opportunityToRemove);
    void removeLogEntry(const FLogEntry& Entry);
    void removeLastRoadPoint();
    void removeChallengeFromUI(int32 challengeID);
    void refuteClaim(FClaim& claimToRefute, bool useFavour);
    void refuseQuest(FQuest& Quest);
    void recalculateRoyalTaxes();
    void rallySquads(TArray<int32> squadIDs, FTransform rallyPointTransform);
    void QuestMessage(const FQuest& Quest);
    void projectResidentialAndUpdateUI();
    void projectMarketplace();
    void projectHoldSquad(int32 squadID);
    void projectField(bool snap);
    void projectCircularBorder(const FVector& Center, float diameter, TArray<FVector>& outSmoothBorder, TArray<FVector>& outBorder);
    void projectAttackFormation(TArray<class ASMUnit*> attackers, TArray<class ASMUnit*> defenders, bool alwaysDirect);
    void PrevCategory();
    void positionRoadConfirm(const FVector& NewPosition);
    void pleaseTurnMapView(bool NewMode);
    void playVoiceResponse(const FName& responseKey, const int32& voiceID, class ASMUnit* relatedUnit);
    void playVoiceline(const TArray<FName>& audioTags, const FVector& Pos, bool allowOverlap);
    void playUISnd(int32 Type);
    void playSaveFinishedNotif();
    void playQuestMessage(const FQuest& Quest);
    void playPopupMessageIfNotPlayedRecently(FName messageType, class ARegion* Region);
    void playPopupMessageGUI(FName messageType, class ARegion* Region);
    void playParticleSystem(const int32& ID, const FVector& Pos);
    void playMessage(FQuestMessage Message, const int32& questID);
    void playMarkerSound(const int32& snd);
    void playKillCam(const FVector& Pos);
    void playFeedbackText(FString Text, const FVector& Pos, float Speed);
    void playEventMessage(const FName& msgType, FString primaryText, FString secondaryText);
    void playEventComplexMessage(const FName& msgType, const TArray<FString>& primaryText, const TArray<FString>& secondaryText);
    void playCinematicSequence(TArray<FCinematicShot> shotSequence, ECinematicEvent afterItsOver);
    void playCameraShake(const int32& typeOfShake, class AActor* DebugActor, FString Reason);
    void playBuildingSound(const int32& bType);
    void playBuildEffects(const FVector& Position);
    void playAlertFromTag(FName alertTag);
    void playAlert(const int32& Type);
    void placeFieldDummy(bool forceChange);
    FName pickVoiceResponse(class ASMUnit* peasant, bool rare);
    void performCustomQuestTriggers(const TArray<FName>& triggerNames, class APawnCPP* recipient);
    void pauseGame();
    void PaperMapViewChanged(bool bIsPaperMap);
    void openSettlementInitializer(class ARegion* Region);
    void openCastlePlannerUI(class ASMBuildingMaster* plannerBuilding);
    void openBuildingTab(class ASMBuildingMaster* building, bool playSfx);
    void OnWindowFocusChanged(bool bIsFocused);
    void onSavingFinished();
    void NextCategory();
    float measureSquadPowerFromTemplate(FName& UnitTemplate);
    float measureSquadPower(const int32& squadID, bool onlyMelee);
    void MarkLogIndexAsDisplayed(const int32 Index);
    bool logExists(const FLogEntry& LogEntry, bool includeDismissed);
    void LMB_BP_released();
    void LMB_BP_pressed();
    bool letter_hasAnyParagraphs(const TArray<FName>& currentLetter, const TArray<FName>& paras);
    bool letter_hasAllRequired(const TArray<FName>& currentLetter, const TArray<FName>& requiredParas);
    bool letter_containsPara(const TArray<FName>& currentLetter, const FName& para);
    void layClaim(class ARegion* Region, bool useFavour, bool consumeInfluence);
    bool joinWalls(class ARoad* wallA, class ARoad* wallB);
    bool isTaxFixed(int32 taxTypeID);
    void issueRaiderTrackingQuestIfNew(int32 daysUntilRaid);
    bool isStanceAvailableForSelectedSquads(EPushStance Stance);
    bool isStanceActivatedForSelected(bool isPushStance, const EPushStance& _pushStance, const EBehaviourStance& _behaviourStance);
    bool isSquadSelected(int32 squadID);
    bool isSquadFleeing(int32 squadID);
    bool isSkillPresent(int32 SkillID);
    bool isSkillAvailableForSquad(int32 squadID, int32 SkillID, TArray<FName>& outReasonsNot);
    bool isSkillAvailableForSelectedSquads(int32 SkillID, TArray<FName>& outReasonsNot);
    bool IsSkillActiveForSelectedSquads(int32 SkillID);
    bool IsSelectEnemyBuildingOverrideEnabled();
    bool isRoadGuidePoint(const FVector& Point);
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
    bool getWorkAreaMode();
    FVector getWallJoiningLocation(const class ARoad* wallA, const class ARoad* wallB);
    float getUIScale();
    TArray<FTradepoint> getTradeDeals();
    float getTotalRecruitmentCost(const TArray<FName>& recruitment);
    FVector2D getTaxRange(int32 taxTypeID);
    TArray<class ASMUnit*> GetSquadUnits(const int32& squadID);
    FName getSquadStatus(const int32& squadID);
    TArray<int32> getSquadsNearPos(const FVector& Pos, const float& rangeSq, const TArray<int32>& squads);
    class APawnCPP* getSquadOwner(const int32& squadID);
    int32 getSquadEquipmentAmt(int32 squadID, int32 goodType);
    TArray<int32> getSquadControlGroups(int32 squadID);
    FString getSquadCompanyName(int32 squadID);
    FSquad getSquadByID(int32 squadID);
    TArray<FString> getSmallTooltip();
    FString getSetupPortraitName();
    FGlobalSettings getSettings();
    TArray<class ASMBuildingMaster*> getSelectedBuildings();
    int32 getSelectedBuildingBlueprintUpgradeLevel(int32& buildingType, EWallType& wallType);
    TArray<class ASMUnit*> GetSelected();
    float getRoadTangentScale();
    bool getRoadMode();
    ERallyingStatus getRetinueRallyingStatus(class ARegion* Region);
    TArray<class ARegion*> getRelevantClaimedRegions(bool includeChallenges);
    TArray<FChallenge> getRelevantChallenges();
    int32 getRelationsWith(class APawnCPP* Pawn);
    class ARegion* getRegionForRegionPanel();
    bool getRectB();
    FVector2D getRect();
    TArray<FName> getRecruitmentPool(bool mercenaries);
    TArray<FQuest> getQuestsWithFocus(FName focus);
    TArray<FQuest> getQuests();
    bool getPreviousLetterFromThisPawn(class APawnCPP* Pawn, FLetter& Letter);
    bool getPreviousLetterFromConversation(class APawnCPP* Pawn, FLetter& Letter);
    class ARegion* getPreviousCommandedRegion(class ARegion* InCurrentRegion);
    TArray<class ASMUnit*> getPlayersOxen();
    int32 getPawnSetupIndex();
    TArray<int32> getOrderedSquadList();
    int32 getNumYearsSurvived();
    void getNumShowingQuestMessages(int32& Num);
    bool getNextProblemOfType(const EProblem& Type, FProblem& outProblem, class ARegion* Region);
    class ARegion* getNextCommandedRegion(class ARegion* InCurrentRegion);
    FVector getNearestRoadLocation();
    float getMouseLMBdist();
    FVector getMouse3d();
    FVector2D getMouse();
    int32 getMonthIDFromWeatherMaster();
    bool getMapMode();
    TArray<class ASMBuildingMaster*> getManors();
    TArray<class ARegion*> getMainTowns();
    void getMainTabIndex(int32& mainTabIndex);
    TSoftObjectPtr<USkeletalMesh> getLordVisitModeSkeletalMesh();
    FString getLordsName();
    TArray<FLogEntry> getLog();
    bool getLMBPressedB();
    bool getLetterCreatorMode();
    int32 getKingsFavourPlace();
    TArray<class APawnCPP*> getKingsFavourite();
    int32 getKingsFavour_daysLeft();
    FItem getItem(int32 ItemId);
    bool getIsWinter();
    bool getIsUsingUI();
    class ASMBuildingMaster* getHitBuilding();
    void getHiredMercenaryCompanies(TArray<int32>& squads, TArray<int32>& companyIDs, TArray<FMercenaryCompany>& companies, bool bIncludeFleeing);
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
    FSegment getCurrentSquadLineProjection(int32 squadID);
    class ARegion* getCurrentRegion();
    TArray<FName> getCurrentlyAvailableParagraphs(const TArray<FName>& currentLetter, class APawnCPP* recipient, bool includeCantAfford);
    int32 getCompanyCostForPawn(const FMercenaryCompany& company);
    TArray<class ASMBuildingMaster*> getCommandedBuildings();
    class ARegion* getClosestRegion();
    class ARegion* getClosestOwnedRegion();
    bool getCinematicMode();
    FUnitStat getAverageUnitStat(const FName& temp);
    FVector getAverageFacingDirection(const TArray<int32>& squads, TArray<FVector>& outDirs);
    FUnitStat getAverageEquipmentStat(const TArray<int32>& Items);
    EAmbienceType getAmbienceTypeOnPosition(const FVector& Pos);
    TArray<FSquad> getAllSquads();
    TArray<FSquad> getAllCommandedSquads();
    TArray<class ARegion*> getAllCommandedRegions();
    TArray<class ASMUnit*> getAllCommandedMilitaryUnits();
    void gameOver(const int32& Type);
    void formALineArmy(const TArray<int32>& squads, const FSegment& line, const FName& formationType, FSegment lastCommandedLineArmy);
    void finishQuestByIndex(const int32& questID, const bool& Success, const bool& Remove);
    void finishQuest(FQuest& Quest, bool Success, bool Remove);
    void finishCinematicSequence();
    TArray<class ASMUnit*> findUnitsDoingAction(EActionType ActionType, class APawnCPP* ownerPawn);
    TArray<FVector> findSharpPoints(const TArray<FVector>& Path, TArray<float>& props, const bool& parallelOnly);
    class ARegion* findRegionByName(FString regionName);
    bool findNearestWallSnapPoint(const FVector& Loc, float maxDistSq, FVector& OutLocation, float& outDistSq);
    bool findNearestRoadpoint(const class ARegion* Region, const FVector& Position, FVector& OutNearestRoadpoint, bool bOnlyKingsRoad);
    FVector findNearestMapEdge(const FVector& Position, float& outDistSq);
    float findFormationDepth(const int32& squadID);
    TArray<class ARoad*> findCommonRoads(const TArray<class ARoad*>& roadsA, const TArray<class ARoad*>& roadsB);
    FVector findClosestPositionOnSegments(const FVector& Point, const TArray<FVector>& available);
    FVector findClosestPosition(const FVector& Point, const TArray<FVector>& available);
    void finalizeClaim(class ARegion* Region, bool Remove);
    void fieldRemovePoint();
    void fieldAddPoint();
    float fastSqrt(const float& N);
    TArray<FVector> extractSmoothSide(const TArray<FVector>& SmoothBorder, const FVector& cornerA, const FVector& cornerB);
    TArray<FVector> extractIntersected(const TArray<FVector>& smoothSegment, const FSegment& intersectionA, const FSegment& intersectionB, const bool& intersectA, const bool& intersectB);
    bool enactPolicy(class ARegion* Region, const int32& slotNo, const int32& policyID);
    void drawSquadOverlays();
    void drawBuildingOverlays();
    bool doesPlacebuildingAffectDeerLair();
    void DMS_updateBattleIntensity();
    void disbandSquad(int32 squadID);
    void destroySelectedCastleBlueprint();
    void despawnWallJoinWidgetIfExists();
    void despawnCastleFloater();
    void deselectSquad(int32 squadID);
    void deselectCastleBlueprint();
    void deselectBuilding(class ASMBuildingMaster* building);
    void deselect_buildings();
    void Deselect();
    void declareWar(class APawnCPP* targetPawn);
    void declarePeace(class APawnCPP* targetPawn);
    void createDynamicUnitDecalMaterialIfNecessary();
    void createAndPlayVictoryCinematic();
    void createAndPlayGameOverCinematic();
    void constructionComplete(class ASMBuildingMaster* building);
    class ARoad* commitRoad();
    class ASMBuildingMaster* commitField();
    bool collectsAnyTaxes();
    void CloseInventoryTabIfOpen(class ASMBuildingMaster* building);
    void closeAllTabs();
    void clearBufferedMovement();
    void checkAndTriggerGameOver();
    void ChangeTreasury(const int32 Amount);
    void changeSilver(int32 amt);
    void changeSelectedRegionUI(class ARegion* newSelectedRegion);
    void changeSelectedBuildingPlatformLevel(int32 levelChange);
    void changeSelectedBuildingBlueprintUpgradeLevel(int32 levelChange);
    void changeRelationTags(class APawnCPP* pawnB, const TArray<FName>& addTags, const TArray<FName>& removeTags);
    void changeRelations(class APawnCPP* pawnB, const float& change);
    void changePlotOffset(int32 change);
    void changeLetterRead(const FLetter& letterToChange, bool bLetterRead);
    void changeKingsFavour(const int32& change);
    void changeInfluence(const float& change);
    void changeActiveRTSTool(ERTSTool newTool, class AActor* toolActor, FName toolVariety);
    void castlePlanningTools();
    bool canClaimSomething();
    bool canChangeSelectedBuildingPlatformLevel(int32 levelChange);
    bool canChangeSelectedBuildingBlueprintUpgradeLevel(int32 levelChange);
    bool canAddNewMilitiaSquad();
    void cameraMovement(float deltaT);
    void callCommitRoad();
    int32 calculateFieldWorkersNeeded(const TArray<FVector>& Points);
    void beginNextQueuedCinematicShot();
    void armyUIUpdate();
    void armyListUIUpdate();
    bool anyArchersSelected();
    void animateDoorsCrude();
    bool allArchersWithinRange(const int32& squadID, const int32& TargetId);
    void AffectAnimalLairs(class ASMBuildingMaster* building);
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
}; // Size: 0x1540

class APawnCPP_AI : public APawnCPP
{
    FTimerHandle AICommandHandle;                                                     // 0x1538 (size: 0x8)
    FTimerHandle aiActionHandle;                                                      // 0x1540 (size: 0x8)
    FTimerHandle AILetterwritingHandle;                                               // 0x1548 (size: 0x8)
    bool bDrawDebug;                                                                  // 0x1588 (size: 0x1)
    int32 AI_general_cycles;                                                          // 0x158C (size: 0x4)
    int32 AI_tactics_cycles;                                                          // 0x1590 (size: 0x4)

    void startAI(float Speed, bool canBuild);
    void RecalculateOptionsDebug();
    void PickBestOptionDebug();
}; // Size: 0x1600

class ARTSMultiEngineCPP : public AActor
{
    class USceneComponent* Root;                                                      // 0x02B0 (size: 0x8)
    class USpatialComponent* SpatialComponent;                                        // 0x02C0 (size: 0x8)
    float Delta;                                                                      // 0x02C8 (size: 0x4)
    float gameSpeed;                                                                  // 0x02CC (size: 0x4)
    float gameSpeedScheduled;                                                         // 0x02E8 (size: 0x4)
    float gameSpeedBeforePause;                                                       // 0x02EC (size: 0x4)
    bool isGameSpeedScheduled;                                                        // 0x02F0 (size: 0x1)
    FRTSMultiEngineCPPOnSaveLoaded OnSaveLoaded;                                      // 0x02F8 (size: 0x10)
    void SDMDelegate();
    bool spawnAIPlayers;                                                              // 0x0330 (size: 0x1)
    bool declareWarInstant;                                                           // 0x0331 (size: 0x1)
    bool AI_canBuild;                                                                 // 0x0332 (size: 0x1)
    TArray<class ASMUnit*> unitArr;                                                   // 0x0398 (size: 0x10)
    class UStaticMesh* SM_WindmillShaft;                                              // 0x0468 (size: 0x8)
    float cullDistance;                                                               // 0x0470 (size: 0x4)
    float cullDistanceFar;                                                            // 0x0474 (size: 0x4)
    float cullDistanceMid;                                                            // 0x0478 (size: 0x4)
    float cullDistanceClose;                                                          // 0x047C (size: 0x4)
    float cullDistanceBuildings;                                                      // 0x0480 (size: 0x4)
    class UDataTable* DT_ConstructionBPs;                                             // 0x0488 (size: 0x8)
    class UDataTable* DT_AnimsetCombat;                                               // 0x0490 (size: 0x8)
    class UDataTable* DT_AnimsetWork;                                                 // 0x0498 (size: 0x8)
    class UDataTable* DT_AnimsetGoat;                                                 // 0x04A0 (size: 0x8)
    class UDataTable* DT_AnimsetChicken;                                              // 0x04A8 (size: 0x8)
    class UDataTable* DT_AnimsetSheep;                                                // 0x04B0 (size: 0x8)
    class UDataTable* DT_AnimsetDeer;                                                 // 0x04B8 (size: 0x8)
    class UDataTable* DT_AnimsetHorse;                                                // 0x04C0 (size: 0x8)
    class UDataTable* DT_AnimsetBird;                                                 // 0x04C8 (size: 0x8)
    class UDataTable* DT_AnimsetOx;                                                   // 0x04D0 (size: 0x8)
    class UDataTable* DT_AnimsetHound;                                                // 0x04D8 (size: 0x8)
    class UDataTable* DT_AnimsetPig;                                                  // 0x04E0 (size: 0x8)
    class UDataTable* DT_AnimsetHare;                                                 // 0x04E8 (size: 0x8)
    class UDataTable* DT_AnimsetCombined;                                             // 0x04F0 (size: 0x8)
    TArray<class ASMBuildingMaster*> buildingArr;                                     // 0x04F8 (size: 0x10)
    TArray<class ASMBuildingMaster*> independentBuildings;                            // 0x0508 (size: 0x10)
    TArray<class AConstruction*> collapsingConstructions;                             // 0x0518 (size: 0x10)
    class UMaterialParameterCollection* buildingMPC;                                  // 0x0540 (size: 0x8)
    class UMaterialParameterCollection* MPC_Overlays;                                 // 0x0548 (size: 0x8)
    TArray<class ARegion*> regions;                                                   // 0x0550 (size: 0x10)
    TArray<class ARoad*> borders;                                                     // 0x0560 (size: 0x10)
    TArray<class ARoad*> bordersCameraBlocking;                                       // 0x0570 (size: 0x10)
    TArray<class ARoad*> roads;                                                       // 0x0580 (size: 0x10)
    TArray<class ARoad*> streams;                                                     // 0x0590 (size: 0x10)
    class APawnCPP* playerRef;                                                        // 0x05A0 (size: 0x8)
    class ALandscapeProxy* LandscapeProxy;                                            // 0x05A8 (size: 0x8)
    TArray<FSquad> squads;                                                            // 0x05B0 (size: 0x10)
    TArray<int32> playersSquadsUIOrder;                                               // 0x05C0 (size: 0x10)
    TArray<class UTexture2D*> regimentSymbols;                                        // 0x05E0 (size: 0x10)
    class UTextureRenderTarget2D* RT_fields;                                          // 0x0640 (size: 0x8)
    class UTextureRenderTarget2D* RT_plowing;                                         // 0x0648 (size: 0x8)
    class UTextureRenderTarget2D* RT_Fertility;                                       // 0x0650 (size: 0x8)
    class UTextureRenderTarget2D* RT_ForestMask;                                      // 0x0658 (size: 0x8)
    class UTextureRenderTarget2D* RT_Desirability;                                    // 0x0660 (size: 0x8)
    class UCanvas* Canvas;                                                            // 0x0668 (size: 0x8)
    class UTextureRenderTarget2D* RT_RegionMask;                                      // 0x0670 (size: 0x8)
    class UTextureRenderTarget2D* RT_RegionBorderMask;                                // 0x0678 (size: 0x8)
    class UTextureRenderTarget2D* RT_roads;                                           // 0x0680 (size: 0x8)
    class UTextureRenderTarget2D* RT_holes;                                           // 0x0688 (size: 0x8)
    class UTextureRenderTarget2D* RT_veins;                                           // 0x0690 (size: 0x8)
    class UTexture2D* dirtPattern01;                                                  // 0x0698 (size: 0x8)
    class UTexture2D* dirtPattern01Scaled;                                            // 0x06A0 (size: 0x8)
    class UTexture2D* marketPattern;                                                  // 0x06A8 (size: 0x8)
    class UTexture2D* softMask;                                                       // 0x06B0 (size: 0x8)
    class UTexture2D* softMaskScaled;                                                 // 0x06B8 (size: 0x8)
    class UTexture2D* pitMaskTexture;                                                 // 0x06C0 (size: 0x8)
    class UTexture2D* pitMaskDirt;                                                    // 0x06C8 (size: 0x8)
    class UTexture2D* pitMaskNew;                                                     // 0x06D0 (size: 0x8)
    class UDataTable* DT_socketMeshes;                                                // 0x06D8 (size: 0x8)
    class UDataTable* itemStats;                                                      // 0x06E8 (size: 0x8)
    TMap<class FName, class UMaterialInterface*> paperMapResourceMaterials;           // 0x0710 (size: 0x50)
    TMap<class FName, class UMaterialInterface*> resourceZoneMaterials;               // 0x0760 (size: 0x50)
    FVector paperMapMaskOffset;                                                       // 0x07B0 (size: 0x18)
    float mapMiddleHeight;                                                            // 0x07C8 (size: 0x4)
    float mapFadeDistance;                                                            // 0x07CC (size: 0x4)
    TArray<class ADepositDecal*> deposits;                                            // 0x07D0 (size: 0x10)
    class UMaterialInterface* depositMaterial;                                        // 0x07E0 (size: 0x8)
    class UMaterialInterface* depositMaterial_Salt;                                   // 0x07E8 (size: 0x8)
    class UMaterialInterface* depositMaterial_Clay;                                   // 0x07F0 (size: 0x8)
    class UCurveFloat* FallingTreeRotationCurve;                                      // 0x07F8 (size: 0x8)
    TArray<class AResource*> FallingTrees;                                            // 0x0800 (size: 0x10)
    TSubclassOf<class UFoliageInstancedStaticMeshComponent> foliageCustomDataBP;      // 0x0810 (size: 0x8)
    TArray<class UStaticMesh*> youngTreeMeshes;                                       // 0x0828 (size: 0x10)
    TArray<class UStaticMesh*> treeMeshesTriggeringForestBiome;                       // 0x0838 (size: 0x10)
    TArray<class UStaticMesh*> fieldBorderMeshes;                                     // 0x0848 (size: 0x10)
    TArray<class UStaticMesh*> fieldstoneMeshes;                                      // 0x0858 (size: 0x10)
    TSubclassOf<class AResource> treeBP;                                              // 0x0868 (size: 0x8)
    TSubclassOf<class AResource> iranyriveresourceBP;                                 // 0x0870 (size: 0x8)
    TSubclassOf<class AResource> stoneResourceBP;                                     // 0x0878 (size: 0x8)
    TSubclassOf<class AResource> beeResourceBP;                                       // 0x0880 (size: 0x8)
    TSubclassOf<class AResource> shrubResourceBP;                                     // 0x0888 (size: 0x8)
    TSubclassOf<class AResource> shroomResourceBP;                                    // 0x0890 (size: 0x8)
    TSubclassOf<class AResource> handcartResourceBP;                                  // 0x0898 (size: 0x8)
    TSubclassOf<class AResource> bigcartResourceBP;                                   // 0x08A0 (size: 0x8)
    TSubclassOf<class AResource> timberCartResourceBP;                                // 0x08A8 (size: 0x8)
    TSubclassOf<class AResource> fishResourceBP;                                      // 0x08B0 (size: 0x8)
    TSubclassOf<class AResource> ladderResourceBP;                                    // 0x08B8 (size: 0x8)
    TSubclassOf<class AResource> ironResourceBP;                                      // 0x08C0 (size: 0x8)
    TSubclassOf<class AResource> clayResourceBP;                                      // 0x08C8 (size: 0x8)
    TSubclassOf<class AResource> saltResourceBP;                                      // 0x08D0 (size: 0x8)
    class AWeatherMaster* WMaster;                                                    // 0x08D8 (size: 0x8)
    TSubclassOf<class AActor> ThunderLightBP;                                         // 0x08E0 (size: 0x8)
    class UStaticMesh* SM_arrow;                                                      // 0x08F0 (size: 0x8)
    class UStaticMesh* SM_torch;                                                      // 0x08F8 (size: 0x8)
    bool enableFertilityGrid;                                                         // 0x0900 (size: 0x1)
    class USnapDebris* SnapDebris;                                                    // 0x0948 (size: 0x8)
    class ASoundBuddy* SoundBuddy;                                                    // 0x0958 (size: 0x8)
    class UDataTable* DT_resourceSounds;                                              // 0x0960 (size: 0x8)
    TArray<class ASMUnit*> unitsMarkedForDestruction;                                 // 0x0968 (size: 0x10)
    class UParticleSystem* PS_dustPuff;                                               // 0x0978 (size: 0x8)
    class UParticleSystem* PS_BLoodSplatter;                                          // 0x0980 (size: 0x8)
    class UParticleSystem* PS_Thunder;                                                // 0x0988 (size: 0x8)
    class UParticleSystem* PS_dragDust;                                               // 0x0990 (size: 0x8)
    class UParticleSystem* PS_Impact_Smithing;                                        // 0x0998 (size: 0x8)
    class UParticleSystem* PS_Impact_Leaves;                                          // 0x09A0 (size: 0x8)
    class UParticleSystem* PS_Impact_Wood;                                            // 0x09A8 (size: 0x8)
    class UParticleSystem* PS_Impact_WoodDry;                                         // 0x09B0 (size: 0x8)
    class UParticleSystem* PS_Impact_Stone;                                           // 0x09B8 (size: 0x8)
    class UParticleSystem* PS_Impact_Plow;                                            // 0x09C0 (size: 0x8)
    class UParticleSystem* PS_Impact_PloughHeavy;                                     // 0x09C8 (size: 0x8)
    class UParticleSystem* PS_Impact_Sow;                                             // 0x09D0 (size: 0x8)
    class UParticleSystem* PS_fireBig;                                                // 0x09D8 (size: 0x8)
    class UParticleSystem* PS_fireGrid;                                               // 0x09E0 (size: 0x8)
    class UParticleSystem* PS_fireplaceSmoke;                                         // 0x09E8 (size: 0x8)
    class UParticleSystem* PS_chimneySmoke;                                           // 0x09F0 (size: 0x8)
    class UParticleSystem* PS_malthouseSmoke;                                         // 0x09F8 (size: 0x8)
    class UParticleSystem* PS_Splash;                                                 // 0x0A00 (size: 0x8)
    class UParticleSystem* PS_BucketSplash;                                           // 0x0A08 (size: 0x8)
    class UParticleSystem* PS_FlourPuff;                                              // 0x0A10 (size: 0x8)
    class UParticleSystem* PS_ThunderHit;                                             // 0x0A18 (size: 0x8)
    class UParticleSystem* PS_FieryHit;                                               // 0x0A20 (size: 0x8)
    class UParticleSystem* PS_Bees;                                                   // 0x0A28 (size: 0x8)
    class UParticleSystem* PS_TorchImpact;                                            // 0x0A30 (size: 0x8)
    class UParticleSystem* PS_fallingLeaves;                                          // 0x0A38 (size: 0x8)
    TArray<FUpgrade> upgrades;                                                        // 0x0A40 (size: 0x10)
    FTimerHandle textureUpdateHandle;                                                 // 0x0A58 (size: 0x8)
    FTimerHandle asyncCleanupTimer;                                                   // 0x0A60 (size: 0x8)
    FTimerHandle challengeUpdateTimer;                                                // 0x0A68 (size: 0x8)
    int32 predictionCalculationDays;                                                  // 0x0A70 (size: 0x4)
    float locationUpdateCounter;                                                      // 0x0A74 (size: 0x4)
    TArray<class ASMBuildingMaster*> fieldArr;                                        // 0x0A78 (size: 0x10)
    class UMaterialInterface* fieldRTmat;                                             // 0x0A88 (size: 0x8)
    class UMaterialInterface* M_marketDecalMat;                                       // 0x0A90 (size: 0x8)
    class UMaterialInterface* workDecalMat;                                           // 0x0A98 (size: 0x8)
    class UMaterialInterface* moduleMaskMaterial;                                     // 0x0AA0 (size: 0x8)
    class UMaterialInterface* M_overlay_moduleMasks;                                  // 0x0AA8 (size: 0x8)
    class UMaterialInterface* M_overlay_fertility;                                    // 0x0AB0 (size: 0x8)
    int32 updatePosLag;                                                               // 0x0AB8 (size: 0x4)
    int32 lastUniqueID;                                                               // 0x0ABC (size: 0x4)
    TArray<int32> tradeableGoods;                                                     // 0x0AC0 (size: 0x10)
    TArray<int32> SpoilingGoodTypes;                                                  // 0x0AD0 (size: 0x10)
    TArray<int32> GranaryCollectionTypes;                                             // 0x0AE0 (size: 0x10)
    TArray<class UStaticMesh*> treeMeshes;                                            // 0x0B20 (size: 0x10)
    TArray<class UStaticMesh*> shrubMeshes;                                           // 0x0B30 (size: 0x10)
    TArray<class UStaticMesh*> oreMeshes;                                             // 0x0B40 (size: 0x10)
    TArray<FName> recruitmentPool;                                                    // 0x0B50 (size: 0x10)
    TArray<class ASMBuildingMaster*> tradepoints;                                     // 0x0B60 (size: 0x10)
    float basePrice;                                                                  // 0x0B70 (size: 0x4)
    class UDataTable* DT_units;                                                       // 0x0B78 (size: 0x8)
    bool fogOfWar;                                                                    // 0x0B80 (size: 0x1)
    FTimerHandle ambientVoiceHandle;                                                  // 0x0B88 (size: 0x8)
    FTimerHandle projUpdateHandle;                                                    // 0x0B90 (size: 0x8)
    TArray<FRelation> relations;                                                      // 0x0B98 (size: 0x10)
    float MapSize;                                                                    // 0x0BA8 (size: 0x4)
    TSubclassOf<class UBannerAnimInstance> bannerAnimBP;                              // 0x0BB0 (size: 0x8)
    TSubclassOf<class ASMBanner> bannerBP;                                            // 0x0BC0 (size: 0x8)
    TArray<FOpenClaim> openClaims;                                                    // 0x0BC8 (size: 0x10)
    int32 kingsFavour_daysLeft;                                                       // 0x0BD8 (size: 0x4)
    TArray<class APawnCPP*> kingsFavourite;                                           // 0x0BE0 (size: 0x10)
    class UMaterialInterface* ghostMaterial;                                          // 0x0BF0 (size: 0x8)
    class UDataTable* DT_MercenaryCompanies;                                          // 0x0BF8 (size: 0x8)
    TArray<FMercenaryCompany> availableMercs;                                         // 0x0C00 (size: 0x10)
    TMap<int32, FMercenaryCompany> hiredMercs;                                        // 0x0C10 (size: 0x50)
    TArray<class UTexture2D*> availableLordPortraits;                                 // 0x0C60 (size: 0x10)
    TArray<class UTexture2D*> availableBanditPortraits;                               // 0x0C70 (size: 0x10)
    bool prepareRoadsForEditor;                                                       // 0x0C80 (size: 0x1)
    bool instancePositionUpdate;                                                      // 0x0C81 (size: 0x1)
    float deltaDiff;                                                                  // 0x0C84 (size: 0x4)
    TArray<int32> AI_buildingTypes;                                                   // 0x0C88 (size: 0x10)
    TArray<class ASMUnit*> livestockMerchants;                                        // 0x0C98 (size: 0x10)
    TArray<class ASMUnit*> freeMerchants;                                             // 0x0CA8 (size: 0x10)
    int32 traderTimer;                                                                // 0x0CB8 (size: 0x4)
    bool isConstructionAllowed;                                                       // 0x0CBC (size: 0x1)
    bool dustyMap;                                                                    // 0x0CBD (size: 0x1)
    bool spawnMerchants;                                                              // 0x0CBE (size: 0x1)
    bool canRain;                                                                     // 0x0CBF (size: 0x1)
    bool canSnow;                                                                     // 0x0CC0 (size: 0x1)
    FTimerHandle updateArmiesHandle;                                                  // 0x0CC8 (size: 0x8)
    TArray<class ASmoothForce*> smoothForces;                                         // 0x0CD0 (size: 0x10)
    TSubclassOf<class ADecalActor> bloodDecalBP;                                      // 0x0CE0 (size: 0x8)
    TArray<int32> heads_combat;                                                       // 0x0CE8 (size: 0x10)
    bool drawBattleDebug;                                                             // 0x0D00 (size: 0x1)
    bool drawImportantDebug;                                                          // 0x0D01 (size: 0x1)
    bool drawPathfindingDebug;                                                        // 0x0D02 (size: 0x1)
    bool drawDebg_roadGuidePoints;                                                    // 0x0D03 (size: 0x1)
    class UMaterialInterface* plagueDecalMat;                                         // 0x0D08 (size: 0x8)
    TArray<FString> maleNames;                                                        // 0x0D10 (size: 0x10)
    bool unitJustSpawned;                                                             // 0x0D20 (size: 0x1)
    class UMaterialInterface* boundsDecalMatRoadsOK;                                  // 0x0D38 (size: 0x8)
    class UStaticMesh* sidewalkMesh;                                                  // 0x0D40 (size: 0x8)
    class UStaticMesh* SM_fence;                                                      // 0x0D48 (size: 0x8)
    class UStaticMesh* SM_fence_B;                                                    // 0x0D50 (size: 0x8)
    class UStaticMesh* SM_plankFence;                                                 // 0x0D58 (size: 0x8)
    class UStaticMesh* townwallMesh;                                                  // 0x0D60 (size: 0x8)
    class UStaticMesh* SM_palisade;                                                   // 0x0D68 (size: 0x8)
    class UStaticMesh* SM_stoneWall;                                                  // 0x0D70 (size: 0x8)
    TArray<class UStaticMesh*> SM_stoneWall_pieces;                                   // 0x0D78 (size: 0x10)
    TArray<class UStaticMesh*> SM_stoneWall_platforms;                                // 0x0D88 (size: 0x10)
    TArray<class UStaticMesh*> doorMeshes;                                            // 0x0D98 (size: 0x10)
    TArray<class UStaticMesh*> stairMeshesWooden;                                     // 0x0DA8 (size: 0x10)
    TArray<class UStaticMesh*> stairMeshesStone;                                      // 0x0DB8 (size: 0x10)
    class UStaticMesh* SM_storage_log;                                                // 0x0DC8 (size: 0x8)
    class USkeletalMesh* SM_banner;                                                   // 0x0DD0 (size: 0x8)
    class UDataTable* DT_Upgrades;                                                    // 0x0DD8 (size: 0x8)
    class UStaticMesh* borderSegmentMesh;                                             // 0x0DE0 (size: 0x8)
    class UStaticMesh* SM_FatRoad;                                                    // 0x0DE8 (size: 0x8)
    class UStaticMesh* SM_shrubbyMesh;                                                // 0x0DF0 (size: 0x8)
    float lastVeloUpdTime;                                                            // 0x0DF8 (size: 0x4)
    FTimerHandle propagationHandle;                                                   // 0x0E00 (size: 0x8)
    TArray<FDefferedMeshLoadItem> deferredMeshLoadList;                               // 0x0E18 (size: 0x10)
    class URuntimeVirtualTexture* RVT_Landscape;                                      // 0x0E58 (size: 0x8)
    class URuntimeVirtualTexture* RVT_RoadMask;                                       // 0x0E60 (size: 0x8)
    class URuntimeVirtualTexture* RVT_Heightmap;                                      // 0x0E68 (size: 0x8)
    class URuntimeVirtualTexture* RVT_ModuleMask;                                     // 0x0E70 (size: 0x8)
    class URuntimeVirtualTexture* RVT_SnowDisplacementMask;                           // 0x0E78 (size: 0x8)
    class UMaterialInterface* fieldMaskMaterial;                                      // 0x0E80 (size: 0x8)
    class UMaterialInterface* marketMaskMaterial;                                     // 0x0E88 (size: 0x8)
    class UMaterialInterface* vegetableFieldMat;                                      // 0x0E90 (size: 0x8)
    class UDataTable* DT_BuildingPartAssemblies;                                      // 0x0E98 (size: 0x8)
    class UDataTable* DT_BuildingPartMeshes;                                          // 0x0EA0 (size: 0x8)
    class UDataTable* DT_gameplayStaticMeshes;                                        // 0x0EA8 (size: 0x8)
    TMap<class FName, class FSoftClassPath> independentBuildingAssemblies;            // 0x0EB0 (size: 0x50)
    TMap<class FName, class FSoftClassPath> animatedBuildingBlueprints;               // 0x0F00 (size: 0x50)
    TArray<class UStaticMesh*> plantMeshes;                                           // 0x0F50 (size: 0x10)
    TArray<class UStaticMesh*> lazyBuildings;                                         // 0x0F60 (size: 0x10)
    class UStaticMesh* SM_Wheat;                                                      // 0x0F70 (size: 0x8)
    class UStaticMesh* SM_flax;                                                       // 0x0F78 (size: 0x8)
    class UStaticMesh* SM_willowBranches;                                             // 0x0F80 (size: 0x8)
    class UStaticMesh* SM_herbs;                                                      // 0x0F88 (size: 0x8)
    class UStaticMesh* SM_appleTree;                                                  // 0x0F90 (size: 0x8)
    class UStaticMesh* SM_appleTree_old;                                              // 0x0F98 (size: 0x8)
    TArray<FChallenge> challenges;                                                    // 0x0FA0 (size: 0x10)
    TArray<class ASMBuildingMaster*> retinueSpawnRequests;                            // 0x0FB0 (size: 0x10)
    FVector defaultFallenTreeScale;                                                   // 0x0FD0 (size: 0x18)
    class UStaticMesh* empty_instance;                                                // 0x0FE8 (size: 0x8)
    class UStaticMesh* SM_dirtPlane;                                                  // 0x0FF0 (size: 0x8)
    TArray<class UStaticMesh*> SM_AnimalTraps;                                        // 0x0FF8 (size: 0x10)
    TArray<class UStaticMesh*> wallMeshes;                                            // 0x1008 (size: 0x10)
    class ADirector* questDirector;                                                   // 0x1018 (size: 0x8)
    float lastObstructionYaw;                                                         // 0x1020 (size: 0x4)
    FTimerHandle fertilityRedrawHandle;                                               // 0x1038 (size: 0x8)
    TArray<int32> fertilityGridUpdateRequests;                                        // 0x1040 (size: 0x10)
    class UStaticMesh* workAreaMesh;                                                  // 0x1050 (size: 0x8)
    class UAnimSequenceBase* testAnimClip;                                            // 0x1058 (size: 0x8)
    class USkeletalMesh* testSzkeletalMesh;                                           // 0x1060 (size: 0x8)
    class UMaterialInterface* marketfieldMat;                                         // 0x1068 (size: 0x8)
    class UMaterialInterface* roadConnectionMat;                                      // 0x1070 (size: 0x8)
    TArray<class ASMBuilding*> spawnAsyncConstrBpQueue;                               // 0x1078 (size: 0x10)
    FTimerHandle spawnAsyncConstrBPHandle;                                            // 0x1088 (size: 0x8)
    class UStaticMesh* wallMarker;                                                    // 0x1090 (size: 0x8)
    class UStaticMesh* gatehousePreviewMesh;                                          // 0x1098 (size: 0x8)
    class UStaticMesh* randomFormationSocketMesh;                                     // 0x10A0 (size: 0x8)
    TArray<FVector> randomFormationPositions;                                         // 0x10A8 (size: 0x10)
    bool writeDebugLogs;                                                              // 0x10B9 (size: 0x1)
    TArray<FName> drawDebugFlags;                                                     // 0x10C0 (size: 0x10)
    TArray<int32> disableJobIDs;                                                      // 0x10D0 (size: 0x10)
    TArray<FString> debugLog_AI_general;                                              // 0x10E0 (size: 0x10)
    TArray<FString> debugLog_AI_tactics;                                              // 0x10F0 (size: 0x10)
    TArray<FString> debugLog_AI_construction;                                         // 0x1100 (size: 0x10)
    bool shouldUpdateDebugLog_generalAI;                                              // 0x1110 (size: 0x1)
    bool shouldUpdateDebugLog_tacticsAI;                                              // 0x1111 (size: 0x1)
    bool shouldUpdateDebugLog_construction;                                           // 0x1112 (size: 0x1)
    float locomotionTicksAdjusted;                                                    // 0x1134 (size: 0x4)
    float locomotionTicksAdjustedPrevious;                                            // 0x1138 (size: 0x4)
    bool useLegacyVATM;                                                               // 0x113C (size: 0x1)
    TMap<class EUnitRole, class FSoftClassPath> UnitBlueprints;                       // 0x1140 (size: 0x50)
    TArray<FPopupCache> PopupCache;                                                   // 0x11E0 (size: 0x10)
    FSessionAchievementData SessionAchievementData;                                   // 0x11F0 (size: 0x30)
    bool isNightAndAffectsGameplay;                                                   // 0x1270 (size: 0x1)
    class UStaticMesh* unitBannerMesh;                                                // 0x13E8 (size: 0x8)
    class UMaterialInterface* bouncedLightMaterial;                                   // 0x13F8 (size: 0x8)
    TArray<class UVARuntimeComponent*> birdFlockVARuntimeComponents;                  // 0x1420 (size: 0x10)
    TArray<FName> tutorialsLeftToShow;                                                // 0x1430 (size: 0x10)
    TArray<FGood> ForeignMarketSupply;                                                // 0x1440 (size: 0x10)
    TArray<class ASMBuildingMaster*> landscapeDeformationBuildings;                   // 0x1470 (size: 0x10)
    TArray<FTradeLogEntry> tradeLog;                                                  // 0x1480 (size: 0x10)
    TMap<class ASMBuildingMaster*, class USphereReflectionCaptureComponent*> reflectionSpheres; // 0x14A0 (size: 0x50)

    void updateSquadEquipmentStats(const int32& squadID);
    void updateRegionsAndBorders(bool inEditor);
    void updateRegionNamesTxt();
    void updateProjectileManager();
    void updatePlayerRequests();
    void updateOpenClaims();
    void updateKingsFavourite();
    void updateFreeMerchants();
    void updateChallengeStatus(FChallenge& Challenge);
    void updateChallengeDay();
    void updateAllPawnsCommandedSquadsAndEnemies();
    void updateAllPawnsArmies();
    void updateAllChallenges();
    void triggerExampleBattle();
    bool Triangulate_Process(const TArray<FVector>& contour, TArray<FVector>& Result);
    bool Triangulate_InsideTriangle(float Ax, float Ay, float Bx, float By, float Cx, float Cy, float Px, float Py);
    float Triangulate_Area(const TArray<FVector>& contour);
    void triangulate(TArray<FVector>& Vertices, TArray<FTriangle>& outTriangles);
    void splitRoadWithBorder(class ARoad* roadToSplit, const TArray<FVector>& FieldPoints);
    void spawnRaiders(const int32 NumSquads, const FVector& ArmyCenter);
    class APawnCPP* spawnNewAILord(FString lordsName, bool isFemale, class UTexture2D* Portrait, bool canBuild);
    void spawnMerchantHerd(class ASMUnit* livestockMerchant);
    class ASMUnit* spawnLivestockMerchant(class ASMBuildingMaster* nearBuilding);
    class ASMUnit* SpawnLivestock(EUnitRole AnimalType, const FVector& animalSpawnPos, class ARegion* Region);
    class ASMUnit* spawnFreeMerchant(class ARegion* attachedToRegion);
    void spawnEliteRaiders(const FVector& ArmyCenter);
    int32 spawnCompleteUnit(const FName& tempName, const FVector& Location, const FRotator& Rotation, class APawnCPP* ownerPawn, int32 companyID, int32 arrivesInDays);
    void spawnBloodDecal(const FVector& Position);
    void spawnBanditCamp();
    void spawnAsyncContstrBPLazy();
    TArray<int32> spawnArmy(const FVector& Pos, const TArray<FName>& unitTypes, class APawnCPP* ownerPawn, const int32& companyID, const int32& arrivesInDays);
    void snapAngleToNearestRoadIfClose(const FVector& Pos, FRotator& outAngle);
    void simplifyPolygon(TArray<FVector>& Vertices);
    void setupUpgrades();
    void setRegionsManor(class ASMBuildingMaster* manor);
    void setGameSpeed(const float NewSpeed);
    void setDay(int32 day);
    bool segmentIntersectsSphere(const FVector& A, const FVector& B, const FVector& Origin, float Radius);
    bool segmentCollidesWithAnyBuilding(const FSegment& Segment, const FBox2D& segmentBounds, bool countRoadPointArea);
    void SDMDelegate__DelegateSignature();
    void RespawnCameraBasedGroundCover();
    void resetCoreTimers();
    void rerollMercenaries();
    void removeDuplicateVectors(TArray<FVector>& vecArr, float minDistSq);
    void removeAllFieldSnapPointsCreatedBy(class AActor* Actor);
    void refillMercenaries();
    void redrawForestMask();
    void redrawFertilitySlow();
    void RebuildWaterTextures();
    void randomizeRecruitmentPool();
    void projectCircularBorder(const FVector& Center, float Radius, TArray<FVector>& outSmoothBorder, TArray<FVector>& outBorder);
    TArray<FVector> projectBorder(FVector2D Dimensions, FTransform Transform);
    bool pointCollidesWithBuildingBorder(const FVector& Point);
    void playResourceFx(int32 Type, bool putDown, const FVector& Pos);
    void playImpact(const int32& Type, const FVector& Location, const FRotator& emitterRotation, const bool& particleEffect, const float& volumeMul);
    void playAmbientVoice();
    void placeSnowStep(const FVector& Pos);
    void pickNewLeader(int32 squadID);
    FVector pickNearestPos(const FVector& Pos, const TArray<FVector>& Options);
    float pairToFloat(const FVector2D& P);
    float onTheSameSide(FVector P, FVector Q, FVector A, FVector B);
    void OnParticleSystemFinished(class UParticleSystemComponent* ps);
    bool isResourceFood(const int32& resourceType);
    bool IsMinorTrade(int32 goodType);
    bool isHarvestSeason();
    bool isBuildingTypeValid(int32 buildingID);
    uint8 isAreaObstructedByUnits(const FVector& Pos, const float radiusSq, class ASMUnit* outUnit);
    bool intersectTwoComplexBorders(const TArray<FVector>& borderA, const TArray<FVector>& borderB, FVector& Out);
    bool intersectRoads(const FVector& A, const FVector& B, const bool& Center, FVector& Out, bool simple, const FBox2D& segmentBounds);
    bool intersectComplexBorders(const FBBorder& borderA, const TArray<FVector> borderB, FVector& Out);
    bool intersectBorders(const FBBorder& borderA, const FBBorder& borderB, FVector& Out);
    void initChallenge(class APawnCPP* challengedPawn, class APawnCPP* challengedBy, class ARegion* Region);
    TArray<int32> hireMercs(FMercenaryCompany company, class APawnCPP* pawnRef);
    float getWindTimeAdjusted();
    FVector4 getWeatherDetails();
    FUpgrade getUpgradeData(int32 upgradeID);
    FColor getUnusedPlayerColor();
    int32 getTradeValue(class ARegion* Region, const FName& Filter, int32 startDay, int32 endDay);
    TArray<FTradeLogEntry> getTradeLogSummedTradedGoods(class ARegion* Region, int32 startDay, int32 endDay);
    TArray<FTradeLogEntry> getTradeLogAllTradedGoods(class ARegion* Region, int32 startDay, int32 endDay);
    float getSegmentToBorderParallelFactor(const FSegment& Segment, const TArray<FVector>& SmoothBorder, bool accountForDistance);
    TSubclassOf<class AResource> getResourceBP(const FName& resType);
    bool getRelationTags(const class APawnCPP*& pawnA, const class APawnCPP*& pawnB, TArray<FName>& relationTags);
    uint8 getRegionIndex(class ARegion* Region);
    class ARegion* getRegionFromIndex(uint8 regionIndex);
    class ARegion* getRegionByPos(const FVector& Pos, bool skipBoundCheck);
    void getRandomSquad(FSquad& newSquad);
    int32 getRandomPeasantClothes();
    float getRandomObstructionYaw();
    float getRandomObstructionForce();
    int32 getRandomHead(bool isWoman, bool combat);
    int32 getRandomHat(bool isWoman, bool isBurgher);
    int32 getPriceOfGood(class ARegion* Region, int32 goodType);
    int32 getPreviousMonthStartDay();
    int32 getPreviousMonthEndDay();
    class APawnCPP* getPawnBySetupIndex(int32 Index);
    float getPathPrice(const FVector& A, const FVector& B);
    FVector getNearestUnobstructedMapEdgePos(const FVector& nearPos, float boundExtents);
    FVector getNearestMapEdgePos(const FVector& nearPos, bool openOnly);
    FLorePoint getNearestLorePoint();
    class ASMBuildingMaster* getNearestBuildingTo(const FVector& Location, TArray<class ASMBuildingMaster*> buildingsToCheck);
    int32 getMonthsTotal();
    float getModuleRadiusForBuildingID(int32 buildingID);
    int32 getLowestImportPrice(class ARegion* Region, int32 goodType, bool bIgnoreTradeRouteRequirements, bool bIgnoreForbiddenGoods);
    void getLoadedConstructionTemplate(const TSoftClassPtr<AConstruction>& constructionAsset, TSubclassOf<class AConstruction>& outConstructionTemplate);
    FItem getItem(const int32 ItemId);
    FPair getImportPriceRange(class ARegion* Region, int32 goodType, bool& OutMayIncludeTariff, bool ignoreTradeRouteRequirements);
    TArray<int32> GetGoodTypesInSubcategory(EItemSubcategory Subcategory);
    float getGlobalDemandPriceMultiplierForGood(int32 goodType);
    float getGameTimeAdjusted();
    FVector getFieldDominatingAngle(const TArray<FVector>& fieldBorderPoints);
    void getFarmingInfo(class ASMBuildingMaster* building, bool& isPlowing, bool& allPlowed, bool& allHarvested);
    class UStaticMesh* getFallenTreeMeshForTree(const class UStaticMesh* treeMesh, FString& stumpName);
    float getDistanceSquaredBetweenSmoothSegments(const TArray<FVector>& smoothA, const TArray<FVector>& smoothB);
    FEquipment getDefaultMilitiaEquipmentForUnitTemplate(const FName& TemplateName);
    float GetDefaultApprovalRateForFactor(const EApprovalFactorType Type);
    TArray<FVector> getDeerLairLocations();
    int32 getDaysTotal();
    int32 getDayOfTheYear();
    int32 getCurrentMonth();
    void getConstructionBP(const int32& HISM, TSubclassOf<class AConstruction>& ConstructionBP);
    FSoftObjectPath getBuildingPartMeshPath(int32 iType);
    float getBuildingInternalOffsetFromWall(int32 bType);
    FStat getBuildingData(int32 buildingID);
    class ASMBuildingMaster* getBuildingByID(int32& UniqueID);
    float getBorderLength(const TArray<FVector>& FieldPoints);
    FUnitStat getAverageUnitStat(const FName& temp);
    FUnitStat getAverageEquipmentStat(const TArray<int32>& equipmentItems);
    int32 getAvailableExportPrice(class ARegion* Region, int32 goodType, bool bIgnoreTradeRestrictions);
    class UDataTable* getAnimsetDataTable(const FName SetName);
    FName getAnimNameForAnimID(int32 animID, class UDataTable* AnimSet, int32 variationID);
    EUnitRole getAnimalRoleFromGoodType(int32 goodType);
    TArray<FTradeLogEntry> getAllTradeLogEntriesForRegion(class ARegion* Region);
    void fulfillKingsFavour();
    bool fitModuleTransformAlongBorder(const TArray<FVector>& targetBorderPoints, const TArray<FVector>& boundaryAreaPoints, float initialDistanceOffset, float moduleWidthHalf, float moduleHeightHalf, FTransform& outTransform, float collisionDistanceIncrementValue, int32 maxAttempts, TArray<FVector> extraCollisionBorder);
    void finishSpawningSoloBuildingAsync(FBuildingSpawnParams params);
    class AUnitSpawner* findUnitSpawnerWithTag(const FName& Tag);
    class ASMUnit* findUnitByPos(const FVector& Pos);
    class AResource* findResourceByPos(const FVector& Pos);
    class ARegion* findRegionByName(FString Name);
    class ARegion* findRegionByID(const int32& regionID);
    FVector FindGoodSquadMoveTargetNear(const FVector& Location);
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
    void destroyUnit(class ASMUnit* unit);
    bool checkPointWithinComplexBorder(const FVector& Point, const TArray<FVector>& Points, const FVector& Center);
    float calculateWindmillEfficiency(const FVector& Pos);
    bool breedAnimal(class ASMUnit* father);
    bool anyCivInRange(const FVector& Pos, const float& rangeSq, bool& isBuilding);
    void alignToGroundQuatFast(FQuat& worldRotation, const FVector& groundNormal);
    void alignRotationToGround(FRotator& worldRotation, const FVector& groundNormal);
    bool addRelationTag(class APawnCPP* pawnA, class APawnCPP* pawnB, FName newTag);
    void addPawnRelations(class APawnCPP* pawnA);
    void AddCliffCollision();
}; // Size: 0x15C8

class ARegion : public AActor
{
    FName regionUniqueTag;                                                            // 0x02B0 (size: 0x8)
    FString regionName;                                                               // 0x02B8 (size: 0x10)
    FRegionOnWorkerFamilyRemoved OnWorkerFamilyRemoved;                               // 0x02C8 (size: 0x10)
    void OnWorkerFamilyRemoved(const int32 RemovedFamilyID);
    ESettlementType settlementType;                                                   // 0x02D8 (size: 0x1)
    class ARegion* outpostToRegion;                                                   // 0x02E0 (size: 0x8)
    bool isSettled;                                                                   // 0x02E8 (size: 0x1)
    int32 settlementLevel;                                                            // 0x02F8 (size: 0x4)
    int32 tier;                                                                       // 0x0310 (size: 0x4)
    TArray<int32> squadsPresent;                                                      // 0x0330 (size: 0x10)
    class APawnCPP* ownerPawn;                                                        // 0x0350 (size: 0x8)
    class ASMBuildingMaster* manor;                                                   // 0x0358 (size: 0x8)
    int32 claimCost;                                                                  // 0x0360 (size: 0x4)
    TArray<class ASMUnit*> residents;                                                 // 0x0368 (size: 0x10)
    TArray<FWorkerFamily> workerFamilies;                                             // 0x0378 (size: 0x10)
    TArray<class ASMUnit*> corpses;                                                   // 0x0388 (size: 0x10)
    int32 retinueSquadID;                                                             // 0x0398 (size: 0x4)
    FString retinueName;                                                              // 0x03A0 (size: 0x10)
    bool isUnderAttack;                                                               // 0x03B0 (size: 0x1)
    float supplies_food;                                                              // 0x042C (size: 0x4)
    float supplies_wood;                                                              // 0x0430 (size: 0x4)
    int32 regionalWealth;                                                             // 0x04D8 (size: 0x4)
    bool bAnyBuildingOnFire;                                                          // 0x05B8 (size: 0x1)
    class ASMBuildingMaster* townCenter;                                              // 0x05C0 (size: 0x8)
    class UCityPlanningComponent* CityPlanningComponent;                              // 0x05C8 (size: 0x8)
    class UPerkComponent* PerkComponent;                                              // 0x06A0 (size: 0x8)
    TArray<int32> Tech;                                                               // 0x0B28 (size: 0x10)
    TArray<FPolicy> policies;                                                         // 0x0B68 (size: 0x10)
    TArray<int32> policiesSigned;                                                     // 0x0B78 (size: 0x10)
    TMap<FName, int32> taxRates;                                                      // 0x0B98 (size: 0x50)
    FRegionOnTaxRateChanged onTaxRateChanged;                                         // 0x0BE8 (size: 0x10)
    void TaxRateDelegate();
    TArray<FProblem> problems;                                                        // 0x0BF8 (size: 0x10)
    TMap<int32, int32> constructionReserve;                                           // 0x0CB0 (size: 0x50)
    TArray<int32> targetInventory;                                                    // 0x0D00 (size: 0x10)
    TArray<float> Price;                                                              // 0x0D10 (size: 0x10)
    TArray<ETradeRule> tradeRules;                                                    // 0x0D20 (size: 0x10)
    TArray<int32> forbidGlobalTradeGoodTypes;                                         // 0x0D60 (size: 0x10)
    TArray<ETradePartnerLimit> tradePartnerLimits;                                    // 0x0D70 (size: 0x10)
    TMap<int32, uint8> tradeRouteLevels;                                              // 0x0D80 (size: 0x50)
    TArray<class ASMUnit*> tradeRouteMerchants;                                       // 0x0DD0 (size: 0x10)
    TArray<FGood> tradeables;                                                         // 0x0DE0 (size: 0x10)
    int32 nextLivestockOrderIn;                                                       // 0x0DF0 (size: 0x4)
    bool autoBuyCommodities;                                                          // 0x0DF4 (size: 0x1)
    int32 marketAtt;                                                                  // 0x0DF8 (size: 0x4)
    int32 expenses;                                                                   // 0x0DFC (size: 0x4)
    TArray<class UInstancedStaticMeshComponent*> regionalFoliage;                     // 0x0E00 (size: 0x10)
    class UApprovalComponent* ApprovalComponent;                                      // 0x0EF0 (size: 0x8)
    int32 Approval;                                                                   // 0x0EF8 (size: 0x4)
    TArray<FApprovalMemory> summedApprovalFactors;                                    // 0x0F00 (size: 0x10)
    int32 publicOrder;                                                                // 0x0F14 (size: 0x4)
    TArray<FApprovalMemory> publicOrderMemory;                                        // 0x0F18 (size: 0x10)
    TArray<FApprovalMemory> summedPublicOrderFactors;                                 // 0x0F28 (size: 0x10)
    TArray<FQueuedMarketDistribution> SupplyDistributionQueue;                        // 0x1008 (size: 0x10)
    TArray<FGood> overstockedGoods;                                                   // 0x10C8 (size: 0x10)
    TArray<class ASMBuildingMaster*> PendingMarketsForRemoval;                        // 0x1148 (size: 0x10)

    void updateProblems();
    void updateCropTypes();
    void unlockTech(int32 techID);
    bool unlockOneTradeLevel(int32 goodType);
    bool unlockBranchStartQuest(int32 branchID);
    void unassignFamily(int32 familyID);
    void TaxRateDelegate__DelegateSignature();
    void setTradeRouteLevelForGood(int32 goodType, uint8 newLevel);
    void setTech(int32 ID, int32 newTier);
    void setShowTotalMarketDistribution(bool showFlag);
    void setShowMarketDistribution(bool showFlag, EResidentialRequirement displayRequirement, EItemSubcategory InMustContainSubcategory);
    void setProductionUnlimited(int32 goodType);
    void setProductionLimit(int32 goodType, int32 newLimit);
    void setPolicySigned(int32 policyID, bool isSigned);
    void setGlobalTradeAllowedForGood(int32 goodID, bool allowed);
    void SetFamilyHome(int32 familyID, class ASMBuildingMaster* newHome, bool SuppressResortResidential);
    void setCraftingConsumptionUnlimited(int32 producedGoodType, int32 goodType);
    void setCraftingConsumptionLimit(int32 producedGoodType, int32 goodType, int32 newLimit);
    void setConstructionReserveForGood(int32 goodType, int32 newReserveValue);
    void renameRegion(FString newName);
    void removeWorkerFamilyAt(int32 familyID);
    void redistributeMilitiaRecruits();
    void recomodatePastureLivestock();
    void reassignFamily(int32 familyID, class ASMBuildingMaster* workplace);
    bool isTechEnabled(int32 techID, int32 TechTier);
    bool isTargetStockSetForGoodType(int32 goodType);
    bool isRegionStruggling();
    bool isProductionLimited(int32 goodType);
    bool isOutpost();
    bool isMapBorderRegion();
    bool isGlobalTradeAllowedForGood(int32 goodID);
    bool isCraftingConsumptionLimited(int32 producedGoodType, int32 goodType);
    bool isBeingClaimed(FClaimStatus& ClaimStatus);
    bool hasWeakFertility();
    bool hasSurplusOfGoodsMinusReservedSimple(const TArray<FGood>& needed, int32 producedGoodType);
    bool hasPolicy(int32 ID);
    bool hasEnoughRouteLevelToTrade(int32 goodType);
    bool hasEnoughPastureSpace();
    bool HasConstructionYardWorkers();
    bool HasConstructionYard();
    bool hasAnyUnassignedOxen();
    bool hasAnyHomelessFamilies();
    void growPopulation();
    void grantResources(const TArray<FGood>& resourcesToGrant, bool bAddLogPrompt);
    int32 getUnlockTradeLevelPriceForGoodType(int32 goodType);
    TMap<ETradeModifier, int32> GetUnlockTradeLevelModifiersInPercents();
    class ASMUnit* getTradeRouteMerchantForGoodType(int32 goodType);
    uint8 getTradeRouteLevel(int32 goodType);
    int32 getTotalStockOfDistributedGood(int32 goodType);
    int32 getTotalStableSpace();
    int32 getTotalPastureSpace();
    int32 getTotalPastureNeeds();
    int32 GetTotalNumReassignableFamilies();
    int32 getTotalNumFamilies();
    int32 getTotalNumAssignedFamilies();
    int32 getTotalNumAssignableFamilies();
    FPair getTotalMarketVirtualStorageData(EStorageType storageType);
    int32 GetTotalLivestockCountOfType(EUnitRole AnimalType);
    int32 getTotalLivestockCount();
    int32 getTotalImportExpenditure(class ASMUnit* skipUnit);
    int32 getTotalFreeMarketStallLocations();
    int32 getTaxRate(const FName& taxType);
    int32 GetTargetInventory(int32 goodType);
    FIntPoint getSummedFactorsRecentPast(const TArray<FApprovalMemory>& factors);
    int32 getStockOfMultipleGoods(const TArray<int32>& goodTypes, TArray<FGood>& outGoods, bool minusReservation, bool sumNegative, bool allowEmpty);
    int32 getStockOfGoodMinusReservedForRallying(int32 Type);
    int32 getStockOfGoodIncludingEquipped(int32 Type);
    int32 getStockOfGood(int32 Type, bool minusReservation, bool bIncludePredictedCraftingOutput);
    TArray<FGood> getStock(bool includeReserved);
    FSettlementRequirements getSettlementRequirementFulfillment();
    FVector getSettledRegionCenter();
    TArray<class ASMBuildingMaster*> getResidentialBuildings(bool includeNoRequirementHousing);
    int32 getRegionUniqueID();
    FString getRegionName();
    TArray<class ASMUnit*> getRegionBuilders();
    TArray<FGood> getRegionalMarketSupply();
    float GetRegionalImportPriceModifierForGoodType(int32 goodType, float InBaseModifier);
    float GetRegionalExportPriceModifierForGoodType(int32 goodType, float InBaseModifier);
    int32 getProductionLimit(int32 goodType, int32 ValueIfNotSet);
    TArray<float> getPrices();
    int32 getPriceOfGood(int32 goodType);
    int32 getPredictedHarvestForGoodType(int32 goodType);
    int32 getPredictedApprovalLossFromTaxes();
    int32 getPopulationOfRole(EUnitRole populationRole);
    int32 getNumUnassignedLivestockOfType(int32 goodID);
    int32 getNumUnassignedFamilies();
    int32 getNumTotalPopulation();
    int32 getNumResidentsOfRoleAndLv(EUnitRole unitRole, int32 familyLevel);
    int32 getNumResidentialBuildingsOfLvAndHigher(int32 Level);
    int32 getNumResidentialBuildingsOfLv(int32 Level);
    int32 getNumRequiredEqiupmentOfType(int32 goodID, bool includingAlreadyRallied);
    int32 getNumRecruitsNeeded();
    int32 getNumProblemsOfType(const int32& Type);
    int32 getNumOccupiedPlots(int32& lvl1, int32& lvl2, int32& lvl3, int32& lvl4);
    int32 getNumHumanResidents();
    int32 getNumHomelessFamilies();
    int32 getNumFamiliesOfLv(int32 familyLevel);
    int32 getNumDevPointsSpent();
    int32 getNumBurgagePlots(EConstructionStage InConstructionStage);
    int32 getNumAvailableRecruitsOfLv(int32 houseLv);
    int32 getNumAvailableRecruits();
    int32 getNumAssignedMilitaryStockOfType(int32 goodType);
    int32 getNumAssignedMarketFamiliesPerBuildingFunction(EBuildingFunction buildingFunction);
    FSettlementRequirements getNextSettlementRequirements_Static(int32 Level);
    FSettlementRequirements getNextSettlementLvRequirements();
    TMap<EGrowthModifier, int32> GetMonthlyPopGrowthModifiersWithValues();
    int32 GetMonthlyPopChange();
    int32 GetMaxSettlementLevel();
    int32 getMaxPolicies();
    FPair getMarketVirtualStorageData(EStorageType storageType);
    int32 getMarketPercentageSupplied(EResidentialRequirement supplyCategory, EItemSubcategory InLimitToSubcategory);
    FPair getMarketFoodVarietyData();
    FLivingSpaceData getLivingSpace();
    float getLivestockPrice(const int32& livestockType);
    float GetFinalUnlockTradeLevelModifier();
    TArray<FFamilyConsumptionData> GetFamilyConsumptionData(const int32 familyID);
    TMap<EGameplayEnvironment, float> GetEnviromentProportions();
    TArray<int32> getCropTypes();
    int32 getCraftingConsumptionLimit(int32 producedGoodType, int32 goodType);
    int32 getConstructionReserveForGood(int32 goodType);
    TArray<class ASMBuildingMaster*> GetBuildings();
    int32 getBuildingCount(int32 bType, bool constructedOnly);
    void getAvailableRecruits(float minMeleeTraining, float minArcheryTraining, TArray<class ASMUnit*>& outAllRecruits, TArray<class ASMUnit*>& outFreeRecruits, int32 minHouseLv);
    FLivingSpaceData getAvailableLivingSpace();
    int32 getAmtMarketSupplyToMeetDemand(int32 goodType);
    TArray<class ASMUnit*> getAllAvailableRecruits(bool includeNotDisbanded);
    TArray<int32> getAllAvailablePolicies();
    float GetAffinityEffect(const EAffinityType Affinity);
    TArray<EAffinityType> GetAffinitiesConnectedWithEnvironment(const EGameplayEnvironment Environment);
    TArray<class ASMBuildingMaster*> getActiveResidentialBuildings(bool includeNoRequirementHousing);
    class ASMBuildingMaster* FindClosestConstructionYard(const FVector& InPosition);
    bool consumeRegionalWealth(int32 amt);
    bool consumeGoodFromBuildingFunctionType(int32 goodType, int32 goodAmt, EBuildingFunction buildingFunction, bool respectReservation, bool bRedistributeMarketSupply);
    bool consumeGood(int32 goodType, int32 goodAmt, class ASMBuildingMaster* preferredBulding, bool scramble, bool respectReservation, bool bRedistributeMarketSupply);
    void changeTradeRule(int32 goodID, ETradeRule newRule);
    void changeTradePartnerLimit(int32 goodID, ETradePartnerLimit newLimit);
    void changeTaxRate(const FName& taxType, int32 newRate);
    void changeTargetInventory(int32 goodType, int32 Target);
    void changeConstructionReserveBy(int32 goodType, int32 amt);
    int32 calculateExpenses();
    void assignFamily(int32 familyID, class ASMBuildingMaster* workplace);
    bool areNextSettlementLvRequirementsFulfilled();
    bool areAnyEnemySquadsPresent(bool includeEncamped);
    bool AnyConstructionYardHasOxen();
    void addRegionalWealth(int32 amt);
    void AddNewFamilyMember(int32 familyID, class ASMUnit* newMember);
    int32 AddNewFamily(const TArray<class ASMUnit*>& familyMembers);
    void accomodateHomelessLivestock(class ASMBuildingMaster* ignoreBuilding);
    void accomodateHomelessFamilies(class ASMBuildingMaster* ignoreBuilding);
}; // Size: 0x1158

class AResource : public AStaticMeshActor
{
    class ARegion* Region;                                                            // 0x02D0 (size: 0x8)
    class ASMBuildingMaster* belongsTo;                                               // 0x02D8 (size: 0x8)
    FName resType;                                                                    // 0x02F0 (size: 0x8)
    FString DisplayName;                                                              // 0x02F8 (size: 0x10)
    int32 amt;                                                                        // 0x0308 (size: 0x4)
    int32 Type;                                                                       // 0x030C (size: 0x4)
    int32 capacity;                                                                   // 0x0310 (size: 0x4)
    TArray<FGood> Inventory;                                                          // 0x0318 (size: 0x10)
    FColor iconTint;                                                                  // 0x0328 (size: 0x4)
    bool bSeasonal;                                                                   // 0x032C (size: 0x1)
    FTransform TreeFallingInitialTransform;                                           // 0x0340 (size: 0x60)
    FTransform TreeFallingToppledTransform;                                           // 0x03A0 (size: 0x60)
    class UStaticMeshComponent* TreeFallingStaticMesh;                                // 0x0400 (size: 0x8)

    void TreeHitGroundEvent();
    void startFalling();
    void setFalling(bool newSetting);
    void removeResource();
    class ARTSMultiEngineCPP* getMaster();
}; // Size: 0x410

class AResourceNode : public AActor
{
    TArray<class AResource*> resourceClumps;                                          // 0x02C0 (size: 0x10)
    class UDecalComponent* ResourceZoneDecal;                                         // 0x02D0 (size: 0x8)
    class UMaterialInterface* resourceZoneMaterial;                                   // 0x02D8 (size: 0x8)
    class UDecalComponent* PaperMapDecal;                                             // 0x02E0 (size: 0x8)
    class UMaterialInterface* PaperMapMaterial;                                       // 0x02E8 (size: 0x8)
    class APlayerController* PlayerController;                                        // 0x02F0 (size: 0x8)
    class APawnCPP* PlayerPawn;                                                       // 0x02F8 (size: 0x8)
    class ARTSMultiEngineCPP* masterPtr;                                              // 0x0300 (size: 0x8)
    class UMLGameInstance* GameInstance;                                              // 0x0308 (size: 0x8)

    void onPaperMapViewChanged(const bool bIsPaperMap);
}; // Size: 0x318

class ARoad : public AActor
{
    class ARTSMultiEngineCPP* masterPtr;                                              // 0x02A8 (size: 0x8)
    bool kingsRoad;                                                                   // 0x02B2 (size: 0x1)
    bool isBlueprint;                                                                 // 0x02B3 (size: 0x1)
    ERoadType roadType;                                                               // 0x02B4 (size: 0x1)
    EWallType wallType;                                                               // 0x02B5 (size: 0x1)
    EPlatformLevel platformLevel;                                                     // 0x02B6 (size: 0x1)
    float roadTangentScale;                                                           // 0x02B8 (size: 0x4)
    class USplineComponent* Spline;                                                   // 0x02C0 (size: 0x8)
    TArray<class USplineMeshComponent*> SplineMeshComponents;                         // 0x02C8 (size: 0x10)
    TArray<class UStaticMeshComponent*> StaticMeshes;                                 // 0x02D8 (size: 0x10)
    float roadWidth;                                                                  // 0x02E8 (size: 0x4)
    float spacing;                                                                    // 0x02EC (size: 0x4)
    class UStaticMesh* roadMesh;                                                      // 0x02F8 (size: 0x8)
    TArray<FSegment> unadjustedMeshLocations;                                         // 0x0300 (size: 0x10)
    bool resampled;                                                                   // 0x0310 (size: 0x1)
    float SplineSimplification_MinDistance;                                           // 0x0328 (size: 0x4)
    float SplineSimplification_AngleThresholdDegrees;                                 // 0x032C (size: 0x4)
    class UMaterialInterface* MaterialOverride;                                       // 0x0330 (size: 0x8)
    class UMaterialInterface* guideMat;                                               // 0x0338 (size: 0x8)
    class UMaterialInterface* guideMatBridge;                                         // 0x0340 (size: 0x8)
    class UMaterialInterface* roadMat_start;                                          // 0x0348 (size: 0x8)
    class UMaterialInterface* roadMat_end;                                            // 0x0350 (size: 0x8)
    class UMaterialInterface* roadMat_short;                                          // 0x0358 (size: 0x8)
    class UMaterialInterface* borderMat;                                              // 0x0360 (size: 0x8)
    class UTexture2D* roadMask;                                                       // 0x0368 (size: 0x8)
    class ARegion* regionA;                                                           // 0x0410 (size: 0x8)
    class ARegion* regionB;                                                           // 0x0418 (size: 0x8)
    class UMaterialInstanceDynamic* MI_Border;                                        // 0x0420 (size: 0x8)
    TArray<class ASMBuildingMaster*> connectedMarkets;                                // 0x0430 (size: 0x10)
    bool marketRoad;                                                                  // 0x0440 (size: 0x1)
    TArray<class UStaticMeshComponent*> FoliageComponents;                            // 0x0488 (size: 0x10)
    bool isBorder;                                                                    // 0x04B8 (size: 0x1)
    bool bMapEdge;                                                                    // 0x04B9 (size: 0x1)
    bool bOpenBorder;                                                                 // 0x04BA (size: 0x1)

    void updateForks(bool twoWayConnections);
    void updateBorderMaterials(bool hoveringA, bool hoveringB, bool selectedA, bool selectedB);
    void spawnRoadMeshes();
    class UStaticMeshComponent* spawnFoliageComponent(const FVector& Pos, class UStaticMesh* StaticMesh);
    void snapSplineToMapEdge(float snapThresholdSq);
    void SimplifySpline();
    void setRVTMode(ERuntimeVirtualTextureMainPassType NewMode);
    void setCommit(const bool& isCommiting);
    bool intersectRoadCached(const FVector& Start, const FVector& End, FVector& Out, const bool& Center, const bool& simple);
    bool insertPointOnSegmentIfPlazaFound(const int32& SplinePoint, FVector& outPos);
    TArray<FGood> getConstructionCost();
    FVector getCachedCenter();
    TArray<class ASMBuildingMaster*> getBuildingsNearRoadQuick(const float& distSq);
    void fixBorderRegions();
    void eraseVegetation();
    void connectCachedToPathfinding();
    void clearRoad();
    void cleanSplineMeshes();
    void adjustHeight(const bool inEditor);
    void addRuntimeVirtualTexture(class URuntimeVirtualTexture* newRVT, ERuntimeVirtualTextureMainPassType passType);
    void addFieldSnapPoints();
}; // Size: 0x4E0

class ASMBanner : public ASkeletalMeshActor
{
    FVector FrameData;                                                                // 0x0328 (size: 0x18)
    class UMaterialInstanceDynamic* MI_bannerMaterial;                                // 0x0340 (size: 0x8)

    void setFrames(FVector newFrameData);
    FVector getFrames();
    void createDynamicMaterial(const float& colorA, const float& colorB, const float& heraldry);
}; // Size: 0x348

class ASMBuilding : public AStaticMeshActor
{
    class ASMBuildingMaster* buildingMaster;                                          // 0x02C8 (size: 0x8)
    class UGateComponent* controllableGate;                                           // 0x0528 (size: 0x8)

}; // Size: 0x5F0

class ASMBuildingMaster : public AStaticMeshActor
{
    class ARegion* Region;                                                            // 0x02C8 (size: 0x8)
    class APawnCPP* ownerPawn;                                                        // 0x02E0 (size: 0x8)
    class ARTSMultiEngineCPP* masterPtr;                                              // 0x02E8 (size: 0x8)
    TArray<class ASMBuilding*> buildings;                                             // 0x02F8 (size: 0x10)
    TArray<class ASMBuilding*> Resources;                                             // 0x0308 (size: 0x10)
    class UMaintenanceComponent* MaintenanceComponent;                                // 0x0348 (size: 0x8)
    class UProficiencyComponent* ProficiencyComponent;                                // 0x0350 (size: 0x8)
    class UExpertiseComponent* ExpertiseComponent;                                    // 0x0358 (size: 0x8)
    class UProductionTrackerComponent* ProductionTrackerComponent;                    // 0x0360 (size: 0x8)
    int32 typeBeforeChange;                                                           // 0x0370 (size: 0x4)
    float fireAmt;                                                                    // 0x0374 (size: 0x4)
    bool onFire;                                                                      // 0x0378 (size: 0x1)
    class UParticleSystemComponent* ps_fire;                                          // 0x0380 (size: 0x8)
    class UParticleSystemComponent* PS_fireGrid;                                      // 0x0388 (size: 0x8)
    bool isBeingUpgraded;                                                             // 0x0391 (size: 0x1)
    FBuildingDataStruct Data;                                                         // 0x03A8 (size: 0x14)
    EBuildingFunction buildingFunction;                                               // 0x03BC (size: 0x1)
    TArray<FGood> constructionGoods;                                                  // 0x03C0 (size: 0x10)
    TArray<int32> upgradesDone;                                                       // 0x0420 (size: 0x10)
    TArray<FGood> Inventory;                                                          // 0x0438 (size: 0x10)
    bool bTabPinned;                                                                  // 0x0449 (size: 0x1)
    TArray<FGood> resourceSurplusCache;                                               // 0x0450 (size: 0x10)
    FAnimalSpace animalSpaceCache;                                                    // 0x0460 (size: 0x5)
    TArray<class ASMUnit*> animals;                                                   // 0x0468 (size: 0x10)
    TArray<class ASMUnit*> animalsOnPasture;                                          // 0x0478 (size: 0x10)
    int32 fieldWorkersNeeded;                                                         // 0x0488 (size: 0x4)
    int32 fieldOperationMode;                                                         // 0x049C (size: 0x4)
    int32 plannedHarvest_DaysLeft;                                                    // 0x0510 (size: 0x4)
    int32 plannedHarvest_PredictedYield;                                              // 0x0514 (size: 0x4)
    int32 yield;                                                                      // 0x051C (size: 0x4)
    bool forceHarvest;                                                                // 0x0520 (size: 0x1)
    bool bRotateCrops;                                                                // 0x0521 (size: 0x1)
    ECropType cropType2;                                                              // 0x0522 (size: 0x1)
    ECropType cropType3;                                                              // 0x0523 (size: 0x1)
    class UDecalComponent* BoundsDecal;                                               // 0x0528 (size: 0x8)
    TArray<class UStaticMeshComponent*> roadDecals;                                   // 0x0530 (size: 0x10)
    class UDecalComponent* fieldDecal;                                                // 0x0540 (size: 0x8)
    class UMaterialInterface* decalMat;                                               // 0x0548 (size: 0x8)
    class UMaterialInterface* boundsDecalMat;                                         // 0x0550 (size: 0x8)
    class UMaterialInterface* fieldDecalMat;                                          // 0x0558 (size: 0x8)
    class UMaterialInterface* floorDecalMat;                                          // 0x0560 (size: 0x8)
    class UMaterialInterface* roadDecalMat;                                           // 0x0568 (size: 0x8)
    class UMaterialInterface* wellDecalMat;                                           // 0x0570 (size: 0x8)
    class UMaterialInterface* roadPosDecalMatOnRoad;                                  // 0x0578 (size: 0x8)
    TArray<FVector> FieldPoints;                                                      // 0x05E0 (size: 0x10)
    bool borderIsClockwise;                                                           // 0x05F0 (size: 0x1)
    TArray<FVector> fieldPointsTriangulated;                                          // 0x05F8 (size: 0x10)
    TArray<FVector> fieldBorderPoints;                                                // 0x0628 (size: 0x10)
    TArray<FVector> finalBorder;                                                      // 0x0638 (size: 0x10)
    bool sleep;                                                                       // 0x0680 (size: 0x1)
    int32 buildPriority;                                                              // 0x0688 (size: 0x4)
    FString TownName;                                                                 // 0x0690 (size: 0x10)
    bool workAreaLimited;                                                             // 0x06A1 (size: 0x1)
    FVector workAreaCenter;                                                           // 0x06A8 (size: 0x18)
    float workAreaRange;                                                              // 0x06C0 (size: 0x4)
    float workAreaRangeSq;                                                            // 0x06C4 (size: 0x4)
    TArray<class ASMUnit*> oxen;                                                      // 0x06D0 (size: 0x10)
    int32 numActiveWorkerFamilies;                                                    // 0x06E0 (size: 0x4)
    int32 activeOxen;                                                                 // 0x06E4 (size: 0x4)
    FSMBuildingMasterOnWorkerAdded OnWorkerAdded;                                     // 0x06E8 (size: 0x10)
    void BuildingDelegate();
    FSMBuildingMasterOnWorkerRemoved OnWorkerRemoved;                                 // 0x06F8 (size: 0x10)
    void BuildingDelegate();
    FSMBuildingMasterOnSeasonalWorkerAdded OnSeasonalWorkerAdded;                     // 0x0708 (size: 0x10)
    void SeasonalWorkerDelegate(ESeason Season);
    FSMBuildingMasterOnSeasonalWorkerRemoved OnSeasonalWorkerRemoved;                 // 0x0718 (size: 0x10)
    void SeasonalWorkerDelegate(ESeason Season);
    int32 maxOxen;                                                                    // 0x0728 (size: 0x4)
    bool bHasSeasonalAssignment;                                                      // 0x072C (size: 0x1)
    TMap<ESeason, int32> SeasonalActiveWorkerFamilies;                                // 0x0730 (size: 0x50)
    TArray<int32> canMake;                                                            // 0x0790 (size: 0x10)
    TArray<FOrder> orders;                                                            // 0x07A0 (size: 0x10)
    TArray<FBuildingGloop> ambiences;                                                 // 0x07B0 (size: 0x10)
    bool bDrawPeopleConnections;                                                      // 0x07C0 (size: 0x1)
    bool bDrawMarketConnections;                                                      // 0x07C1 (size: 0x1)
    TArray<FTransform> additionalWorkPositions;                                       // 0x0A98 (size: 0x10)
    bool collidesWithRoads;                                                           // 0x0AA8 (size: 0x1)
    class UDecalComponent* plagueDecal;                                               // 0x0AB0 (size: 0x8)
    TArray<FVector> roadIntersectionPoints;                                           // 0x0AB8 (size: 0x10)
    TArray<FExtension> Extensions;                                                    // 0x0AC8 (size: 0x10)
    int32 marketDaysLeft;                                                             // 0x0AF0 (size: 0x4)
    TArray<FVector> connectedRoadPoints;                                              // 0x0AF8 (size: 0x10)
    TArray<class ARoad*> connectedRoadPointRoads;                                     // 0x0B08 (size: 0x10)
    int32 secondaryPriority;                                                          // 0x0B18 (size: 0x4)
    bool allowLabourers;                                                              // 0x0B1C (size: 0x1)
    bool connectionNeedsVerifying;                                                    // 0x0B1D (size: 0x1)
    float field_sowingPerc;                                                           // 0x0B20 (size: 0x4)
    float field_ploughingPerc;                                                        // 0x0B24 (size: 0x4)
    float field_growingPerc;                                                          // 0x0B28 (size: 0x4)
    float field_harvestingPerc;                                                       // 0x0B2C (size: 0x4)
    int32 field_numReadyToHarvest;                                                    // 0x0B30 (size: 0x4)
    int32 field_numUnplowed;                                                          // 0x0B34 (size: 0x4)
    int32 field_numSown;                                                              // 0x0B38 (size: 0x4)
    int32 numStoredGeneric;                                                           // 0x0B40 (size: 0x4)
    int32 numStoredLarge;                                                             // 0x0B44 (size: 0x4)
    int32 numStoredPantry;                                                            // 0x0B48 (size: 0x4)
    int32 storageLimitGeneric;                                                        // 0x0B4C (size: 0x4)
    int32 storageLimitLarge;                                                          // 0x0B50 (size: 0x4)
    int32 storageLimitPantry;                                                         // 0x0B54 (size: 0x4)
    TArray<int32> storageFilter;                                                      // 0x0B58 (size: 0x10)
    FTimerHandle vegetationEraserHandle;                                              // 0x0B68 (size: 0x8)
    uint8 vegetationEraseStage;                                                       // 0x0B70 (size: 0x1)
    TArray<FVector> triangulatedBorderToErase;                                        // 0x0B78 (size: 0x10)
    uint8 waterSupply;                                                                // 0x0B88 (size: 0x1)
    TArray<uint8> customBuildingFlags;                                                // 0x0BD8 (size: 0x10)
    TArray<class UStaticMeshComponent*> moduleMasks;                                  // 0x0BE8 (size: 0x10)
    bool bModuleMaster;                                                               // 0x0BF8 (size: 0x1)
    class ASMBuildingMaster* moduleMasterPtr;                                         // 0x0C00 (size: 0x8)
    class ASMBuildingMaster* areaMasterBld;                                           // 0x0C08 (size: 0x8)
    int32 sellingType;                                                                // 0x0C10 (size: 0x4)
    uint8 targetSquadSize;                                                            // 0x0C14 (size: 0x1)
    TArray<class ASMUnit*> recruits;                                                  // 0x0C18 (size: 0x10)
    class ARoad* snappedToRoad;                                                       // 0x0C58 (size: 0x8)
    FVector roadPos;                                                                  // 0x0C78 (size: 0x18)
    bool isConnectedToTradeNetwork;                                                   // 0x0C90 (size: 0x1)
    TArray<class UStaticMeshComponent*> walls;                                        // 0x0C98 (size: 0x10)
    int32 lv;                                                                         // 0x0CA8 (size: 0x4)
    TArray<uint8> Requirements;                                                       // 0x0CB0 (size: 0x10)
    TMap<FRequirementCollection, int32> SatisfiedRequirementLevels;                   // 0x0CC0 (size: 0x50)
    int32 supplyOverstocking;                                                         // 0x0D50 (size: 0x4)
    TArray<class ASMBuildingMaster*> SortedActiveResidentials;                        // 0x0D58 (size: 0x10)
    TArray<class AResource*> Carts;                                                   // 0x0D68 (size: 0x10)
    bool needsRefueling;                                                              // 0x0DC9 (size: 0x1)
    bool refueled;                                                                    // 0x0DCA (size: 0x1)
    int32 refuelDay;                                                                  // 0x0DCC (size: 0x4)
    uint8 stockFuelFor;                                                               // 0x0DD0 (size: 0x1)
    TArray<FTransform> freeStallTransforms;                                           // 0x0DD8 (size: 0x10)
    TArray<FGood> distributedGoods;                                                   // 0x0DE8 (size: 0x10)
    TArray<FTargetStockGood> TargetStock;                                             // 0x0E28 (size: 0x10)
    TArray<class AActor*> blueprints;                                                 // 0x0E38 (size: 0x10)
    TArray<class AActor*> blueprintGhosts;                                            // 0x0E48 (size: 0x10)
    TArray<FGood> equipmentDistributionReserve;                                       // 0x0E58 (size: 0x10)
    int32 mourningPeriod;                                                             // 0x0E68 (size: 0x4)
    class AActor* VAMP_AnimatedBuildingBP;                                            // 0x0E70 (size: 0x8)
    bool VAMP_isPlaying;                                                              // 0x0E78 (size: 0x1)
    TArray<class ASMUnit*> unitCache_transportTasks;                                  // 0x0EC8 (size: 0x10)
    TArray<class ASMUnit*> unitCache_ownInventory;                                    // 0x0ED8 (size: 0x10)
    TMap<int32, int32> unitCache_transportTasks_distanceGroupCache;                   // 0x0EE8 (size: 0x50)
    float unitCache_transportTasks_lastTimeCached;                                    // 0x0F38 (size: 0x4)
    TArray<class ASMUnit*> unitCache_farmingTasks;                                    // 0x0F40 (size: 0x10)
    TArray<class ASMUnit*> unitCache_craftingTasks;                                   // 0x0F50 (size: 0x10)
    TArray<int32> assignedFamilyIDs;                                                  // 0x0F70 (size: 0x10)
    TArray<int32> occupantFamilyIDs;                                                  // 0x0F80 (size: 0x10)
    class ASMBuildingMaster* trainConnectionSource;                                   // 0x0F90 (size: 0x8)
    class ASMBuildingMaster* trainConnectionTarget;                                   // 0x0F98 (size: 0x8)
    class ARegion* trainConnectionRegion;                                             // 0x0FA0 (size: 0x8)
    int32 muleTrain_buyingType;                                                       // 0x0FA8 (size: 0x4)
    int32 muleTrain_sellingType;                                                      // 0x0FAC (size: 0x4)
    bool allowMarketStalls;                                                           // 0x0FB0 (size: 0x1)
    TArray<int32> shouldHighlightInventoryTabIDs;                                     // 0x0FB8 (size: 0x10)
    int32 artisanJob;                                                                 // 0x141C (size: 0x4)

    void verifyStorageProblems();
    bool useUpgrade(EUpgradeType upgradeType);
    void updateRoadDecalMaterials();
    void updateResourceSurplusCache();
    void updatePremadeFieldPoints();
    void updateParticleSystemBasedOnWorkforce();
    void updateNearbyWindmillEfficiency();
    void updateMuleShoppingList();
    void UpdateFieldCache(bool ploughing, bool sowing, bool growing, bool harvesting);
    void updateFenceVisibilityBasedOnNeighbours(bool applyVisibilityChange);
    bool unassignSingleWorkerFamily();
    void triangulateExtensionArea(int32 slotID);
    void takeOverOrAddMarketStalls();
    bool SupportsTargetStock();
    void StartFire();
    class AActor* spawnVAMPAnimatedBuildingBP(FSoftClassPath BlueprintPath, const FTransform& WorldTransform);
    void spawnRandomClutter(const FSegment& facade);
    void spawnPlotDressing(int32 dressingType, const TArray<FVector>& sideA, const TArray<FVector>& sideB, const TArray<FVector>& sideC);
    class UStaticMeshComponent* spawnModuleMask();
    void spawnManorServantsInside(int32 numServants);
    void spawnFieldBorderShrubbery(const TArray<FVector>& borderPoints);
    void spawnBuildingsForUpgrade(const EUpgradeType upgradeType);
    class ASMUnit* spawnAnimal(EUnitRole animalRole);
    bool shouldShowCraftingSpeed();
    bool shouldDisplayProductivityTracker();
    void setWorkArea(const FVector& Center, const float& range);
    void SetupBuilding();
    void SetTargetStock(int32 goodType, int32 Amount);
    void setTabIsOpen(bool IsOpen);
    void setSleep(bool newSleep);
    void SetProtectResourceArea(bool InSetting);
    void SetPriority(int32 NewPriority);
    void SetIsUsingSeasonalAssignment(bool bNewSetting);
    void setCustomBuildingFlag(int32 flagID, uint8 Value);
    void setCropType(ECropType NewType);
    void setConstructionPaused(bool paused);
    void SeasonalWorkerDelegate__DelegateSignature(ESeason Season);
    void resetWorkArea();
    void RemoveSeasonalWorker(ESeason InSeason);
    bool removeActiveWorkerFamily();
    void playVAMPAnimation(FName animationName);
    void playChimneySmoke();
    bool orderLivestock(int32 Type);
    float muleTrain_getValueRatio();
    bool isWinter();
    bool isTavern();
    bool IsTargetStockOfGoodEnabled(int32 goodType);
    bool isStorageTypeBuilding();
    bool IsRubble();
    bool isResidentialBuilding();
    bool isPeopleBuilding();
    bool IsMineBuilding();
    bool isMarketStall();
    bool isMarketAssignable();
    bool isManor();
    bool isHomelessTent();
    bool isFlammable();
    bool isFamilyBusyAtWorkplace(const FWorkerFamily& WorkerFamily);
    bool isDesiredMilitaryStockAtHomeReached();
    bool IsConstructed();
    void hireExtraRetinue();
    bool hasUpgrade(int32 upgradeID);
    bool HasStorageLimits();
    bool hasRoadSnapPoints(int32 bType);
    bool hasReachedTransportLimits(const FVector& requestLocation, class ASMUnit* Requester);
    bool hasOrder(const int32& orderType);
    bool hasModuleOfType(int32 moduleType);
    bool hasMaxActiveWorkerFamilies();
    int32 getYieldReadyToHarvest();
    int32 getWaterStorageCapacity();
    class UVARuntimeComponent* GetVARuntime();
    TArray<FGood> GetUpgradeResourceCost(const int32 InUpgradeID);
    int32 GetType();
    int32 GetTriggeringRequirementLevel(const FRequirementCollection& InRequirementCollection);
    TArray<uint8> getTrigerringRequirements();
    TArray<int32> getTradeableGoods();
    FString getTownName();
    int32 GetTotalProductivityValueInPercents();
    int32 GetTargetStockOfGood(int32 goodType, bool ReturnTargetIfDisabled);
    TArray<FGood> GetTargetStock();
    int32 getSurplusOfGood(int32 goodType, bool accountBringing, bool accountGrabbing, bool allowNegative);
    TArray<FGood> getSurplusMilitaryEquipment();
    TArray<EResidentialRequirement> GetSupplyCategoriesTriggeringApprovalLoss();
    TArray<int32> GetSuppliedGoodTypesForRequirement(const FRequirementCollection& InRequirementCollection);
    float GetSummedYieldModifierValue();
    TArray<FGood> getStoredMilitaryEquipment();
    int32 getStallOwnerFamilyID();
    float getSown(int32& outNumSown);
    bool getSleep();
    int32 GetSeasonalWorkers(ESeason InSeason);
    int32 GetSatisfiedRequirementLevel(const FRequirementCollection& InRequirementCollection);
    int32 GetRetinueHireTreasuryCost();
    FRequirementsPerLevel GetResidentialUpgradeRequirements();
    FRequirementsPerLevel GetResidentialTriggeringRequirementLevels();
    TArray<FResidentialRequirement> GetResidentialRequirementsForSupplyCategory(EResidentialRequirement InSupplyCategory, const EItemSubcategory InMustHaveSubcategory);
    TArray<FGood> getRequestedMilitaryEquipment();
    class ARegion* getRegionOnLocation();
    int32 GetRegionalWealthCostForUpgrade(const int32 InUpgradeID);
    class ARegion* GetRegion();
    float getReconstructedCastleArea(TArray<FVector>& reconstructedSmoothBorder, TArray<FVector>& reconstructedTriangulatedBorder);
    int32 GetRecipeIndex(const int32 goodID);
    float getRandomFloatInRangePredictable(float min, float max);
    bool GetProtectResourceArea();
    int32 GetPriority();
    int32 getPriceOfGood(int32 goodType);
    class APawnCPP* getOwnerPawn();
    float getOrderProgress(const int32& orderType);
    TArray<class ASMUnit*> getOccupants();
    TArray<FWorkerFamily> getOccupantFamiliesUI();
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
    TArray<int32> getModuleTypes();
    int32 getModularGarrisonLimit();
    TArray<EResidentialRequirement> GetMissingSupplyCategories();
    int32 getMaxWorkerFamilies();
    int32 getMaxSonsPerFamily();
    int32 getMaxResidingFamilies();
    int32 getMaxOxen();
    int32 getMaxOccupantsOfRole(EUnitRole roleToSearch);
    int32 getLowestImportPrice(int32 goodType, bool bIgnoreTradeRouteRequirements, bool bIgnoreForbiddenGoods);
    EUnitRole getLivestockWorkerRole();
    int32 getJobType();
    FItem getItem(const int32& ItemId);
    bool GetIsUsingSeasonalAssignment();
    bool getIsTabOpened();
    TArray<FGood> getInventory(bool includeModules);
    FPair getImportPriceRange(int32 goodType, bool& OutMayIncludeTariff, bool bIgnoreTradeLevel);
    float getHarvested();
    TArray<int32> getGoodTypesForConstructionReserves();
    TArray<int32> getGoodTypesConsumedForCurrentProduction(bool includeTransitionary, bool includeSpecialReserve);
    TArray<uint8> getFilledTrigerringRequirements();
    int32 getFieldWorkers();
    int32 getFieldReadyToSow();
    int32 getExtensionHISM(const int32& ExtensionType);
    float GetExtensionAreaCostMultiplier();
    FString getDisplayNameKey();
    TArray<FGood> getDesiredMilitaryEquipmentStockAtHome();
    FBuildingDataStruct getData();
    float getDailyPlantGrowth();
    uint8 getCustomBuildingFlag(int32 flagID);
    TArray<EResidentialRequirement> GetCurrentResidentialSupplyCategories();
    TArray<int32> GetCurrentlyProducedGoodTypes();
    float getCurrentFoodSpoilageRate(int32 goodType);
    ECropType getCropType();
    TArray<int32> getCraftingConsumedGoodTypes(bool includeTransitionary, bool includeSpecialReserve);
    TArray<class ASMBuilding*> getControllableGates();
    FName getConstructionStatus();
    FVector2D getConstructionResourceSituation();
    int32 getConstructionQueueID();
    float getConstructionProgress();
    bool getConstructionPaused();
    TArray<class ASMBuildingMaster*> getConnectedSupplyBuildings();
    TMap<ECollapseModifier, float> GetCollapseModifiers();
    float GetCollapseChance();
    TArray<FGood> getCastleReconstructionCost(bool bOnlyBuildFirstBuilding);
    FName getCastleLevelFromArea(float Area);
    class UTexture2D* getBuildingFunctionIcon();
    float getBuildingArea();
    TArray<class ASMUnit*> getBoundRetinue();
    float getAvgPloughProgress(int32& outNumUnplowed);
    float getAvgCropProgress();
    float getAverageCropFertility(ECropType cropID);
    TArray<FGood> getAverageConsumption();
    int32 getAvailableExportPrice(int32 goodType, bool bIgnoreTradeRestrictions);
    TArray<ECropType> GetAvailableCropTypes();
    TArray<class ASMUnit*> getAttendingMerchants();
    TArray<FGood> GetAssignedMilitaryEquipmentMinusAlreadyWearing();
    TArray<FGood> getAssignedMilitaryEquipment();
    TArray<FWorkerFamily> getAssignedFamiliesUI();
    TArray<class ASMUnit*> getAnimalsCurrentlyOnPasture();
    TArray<class ASMUnit*> getAnimals();
    TArray<class ASMUnit*> getAllWorkers();
    TArray<int32> GetAllProducedGoods(bool includeHidden);
    TArray<int32> getAllPossibleUpgrades(bool bIncludeExtensions);
    TArray<int32> GetAllAvailableRecipes();
    TSet<EAffinityType> GetAffinities();
    TMap<EYieldModifier, int32> GetActiveYieldModifiersWithValues();
    TArray<int32> GetActiveRecipes();
    TMap<EProductivityModifier, int32> GetActiveProductivityModifiersWithValues();
    class ARegion* findRegionByName(FString regionName);
    void findRegionAndOwner(class ARegion* SetRegion);
    void eraseVegetationSlow();
    void eraseVegetation(const TArray<FVector>& triangulatedBorderToCheck);
    void eraseCrops(bool erasePlowing);
    void EnableTargetStock(int32 goodType);
    void EnableRecipe(const int32 goodID);
    void drawPeopleArcs();
    void drawMarketArcs();
    bool doesWallSegmentOverlap(const FSegment2D& wallSegment);
    bool doesFlipFlopProduction();
    bool doesFenceOverlapAnyUnhiddenNeighbourFence(class USplineMeshComponent* fenceMesh);
    bool doesDistributeRequirementGoods();
    bool doesCastleModuleNeedReconstruction(class AActor* Actor, int32 newModuleBuildingId, EWallType wallType);
    bool doesBuildingConsumeResource(int32 Type, bool includingForConstruction, bool includeWeaponReservation, bool includeTrade);
    bool displayStorageUI();
    void DisableTargetStock(int32 goodType);
    void DisableRecipe(const int32 goodID);
    void demolish(bool refund);
    void convertBlueprintsToBuildings(bool bOnlyBuildFirstBuilding);
    void consumeGoodNoCheck(int32 goodType);
    void collapseBuilding();
    void changeTrainConnectionRegion(int32 uniqueRegionID);
    void ChangeTargetStockBy(int32 goodType, int32 Amount);
    void ChangeSeasonalWorkerAssignment(ESeason InSeason, int32 NumActiveWorkers);
    void changeMuleTrain_sellingType(int32 NewType);
    void changeMuleTrain_buyingType(int32 NewType);
    void ChangeExtension(int32 Slot, int32 NewType);
    void changeArtisanType(int32 ExtensionType);
    void changeActiveLivestockWorkers(int32 amt);
    bool canUpgrade(int32 ID, TArray<FName>& resonsCant);
    bool canSetWorkArea();
    bool CanSelectCropType();
    bool canMakeAnything();
    bool canHireRetinue();
    bool canConstructCastle(TArray<EReason>& outReasons);
    void cancelOrder(const int32& orderType);
    bool canBuildingTypeSetupMarketStalls();
    bool canBeDemolished();
    bool canAffordCastleReconstruction();
    void callMarket();
    bool buildingIsExtension(class ASMBuilding* building);
    bool areExtensionUpgradesAvailable();
    bool anythingReadyToHarvest();
    bool AllResidentialRequirementsSatisfied();
    bool allDirtFlattened();
    void addToInventory(const FGood& Good);
    void AddSeasonalWorker(ESeason InSeason);
    bool addActiveWorkerFamily();
    void abandonAllMarketStalls();
}; // Size: 0x1440

class ASMSiegeUnit : public ASMUnit
{
}; // Size: 0x1310

class ASMUnit : public AActor
{
    FString DisplayName;                                                              // 0x02F0 (size: 0x10)
    float Radius;                                                                     // 0x0304 (size: 0x4)
    bool dead;                                                                        // 0x030C (size: 0x1)
    class ARTSMultiEngineCPP* masterPtr;                                              // 0x0318 (size: 0x8)
    class ASMBuildingMaster* animalAssignedTo;                                        // 0x0338 (size: 0x8)
    class ASMBuildingMaster* Home;                                                    // 0x0340 (size: 0x8)
    int32 workerFamilyID;                                                             // 0x0348 (size: 0x4)
    EBehaviourStance behaviourStance;                                                 // 0x034E (size: 0x1)
    EPushStance pushStance;                                                           // 0x034F (size: 0x1)
    EPushStance pushStanceBeforeMoraleDrop;                                           // 0x0350 (size: 0x1)
    int32 checkpoint;                                                                 // 0x0374 (size: 0x4)
    float LPathSpeedfactorCache;                                                      // 0x03B8 (size: 0x4)
    int32 locomotionAnim;                                                             // 0x03DC (size: 0x4)
    bool locomotionIsIdle;                                                            // 0x03E0 (size: 0x1)
    int32 currAnim;                                                                   // 0x03F8 (size: 0x4)
    int32 targetAnim;                                                                 // 0x0400 (size: 0x4)
    FVector realPos;                                                                  // 0x04F0 (size: 0x18)
    float Speed;                                                                      // 0x0598 (size: 0x4)
    float realSpeed;                                                                  // 0x059C (size: 0x4)
    bool closeToFinal;                                                                // 0x05A8 (size: 0x1)
    float speedFactor;                                                                // 0x05B0 (size: 0x4)
    float climbingSpeedFactor;                                                        // 0x05B4 (size: 0x4)
    float squadLowestClimbingSpeedFactor;                                             // 0x05B8 (size: 0x4)
    uint8 floor;                                                                      // 0x05BC (size: 0x1)
    float velo;                                                                       // 0x0700 (size: 0x4)
    FVector interpolatedMoveVector;                                                   // 0x0770 (size: 0x18)
    FRotator realRot;                                                                 // 0x0788 (size: 0x18)
    uint8 obstructed;                                                                 // 0x07A0 (size: 0x1)
    bool isOnBuilding;                                                                // 0x07D0 (size: 0x1)
    TArray<FPathPoint> Path;                                                          // 0x07D8 (size: 0x10)
    int32 PathPoint;                                                                  // 0x07E8 (size: 0x4)
    int32 spatialGridIndex;                                                           // 0x0804 (size: 0x4)
    FVector dir;                                                                      // 0x0810 (size: 0x18)
    TArray<FGood> Inventory;                                                          // 0x0828 (size: 0x10)
    TArray<class UStaticMeshComponent*> staticMeshGoods;                              // 0x0848 (size: 0x10)
    TArray<FTransform> staticMeshGoods_relativeTransforms;                            // 0x0858 (size: 0x10)
    FName taskLabelOverride;                                                          // 0x08A0 (size: 0x8)
    TArray<FTask> Tasks;                                                              // 0x08A8 (size: 0x10)
    uint8 wasIdle;                                                                    // 0x08B8 (size: 0x1)
    uint8 waitingOnTransportLimitsCounter;                                            // 0x08B9 (size: 0x1)
    float baseAttack;                                                                 // 0x08F0 (size: 0x4)
    float baseDefence;                                                                // 0x08F4 (size: 0x4)
    float baseRange;                                                                  // 0x08F8 (size: 0x4)
    float baseBlock;                                                                  // 0x08FC (size: 0x4)
    float baseCharge;                                                                 // 0x0900 (size: 0x4)
    float att;                                                                        // 0x0904 (size: 0x4)
    float rangedAtt;                                                                  // 0x0908 (size: 0x4)
    float def;                                                                        // 0x090C (size: 0x4)
    float range;                                                                      // 0x0910 (size: 0x4)
    float rangeSq;                                                                    // 0x0914 (size: 0x4)
    float shootingRange;                                                              // 0x0918 (size: 0x4)
    float shootingRangeSq;                                                            // 0x091C (size: 0x4)
    float block;                                                                      // 0x0920 (size: 0x4)
    float charge;                                                                     // 0x0924 (size: 0x4)
    float chargeStop;                                                                 // 0x0928 (size: 0x4)
    float armorPierce;                                                                // 0x092C (size: 0x4)
    float shieldwallBlock;                                                            // 0x0930 (size: 0x4)
    float morale;                                                                     // 0x0934 (size: 0x4)
    float stamina;                                                                    // 0x0938 (size: 0x4)
    bool defenseBroken;                                                               // 0x093C (size: 0x1)
    float combatExperience;                                                           // 0x0940 (size: 0x4)
    bool bHoldingLine;                                                                // 0x0944 (size: 0x1)
    bool bFortified;                                                                  // 0x0945 (size: 0x1)
    bool bFireAtWill;                                                                 // 0x0946 (size: 0x1)
    bool bHoldFire;                                                                   // 0x0947 (size: 0x1)
    FEquipment Equipment;                                                             // 0x0948 (size: 0x1C)
    FEquipment equipmentOnRally;                                                      // 0x0964 (size: 0x1C)
    class ASMUnit* ClosestEnemyUnit;                                                  // 0x0980 (size: 0x8)
    bool battleStance;                                                                // 0x098C (size: 0x1)
    bool closeProximity;                                                              // 0x098D (size: 0x1)
    bool fightingStance;                                                              // 0x098E (size: 0x1)
    bool inChargeDistance;                                                            // 0x098F (size: 0x1)
    ELocomotionStance locomotionStance;                                               // 0x0990 (size: 0x1)
    bool force1hAttacks;                                                              // 0x0991 (size: 0x1)
    EAttackMethod attackMethod;                                                       // 0x0992 (size: 0x1)
    int32 repetitions;                                                                // 0x0994 (size: 0x4)
    int32 targetRepetitions;                                                          // 0x0998 (size: 0x4)
    bool sprintMode;                                                                  // 0x09A4 (size: 0x1)
    float moveToEnemyRange;                                                           // 0x09A8 (size: 0x4)
    bool cosmeticEquipmentOverride;                                                   // 0x09AC (size: 0x1)
    int32 queuedItem;                                                                 // 0x09B0 (size: 0x4)
    uint8 animRandomVariation;                                                        // 0x09B4 (size: 0x1)
    uint8 lastPlayedVariation;                                                        // 0x09B5 (size: 0x1)
    TMap<EEquipmentSlot, uint8> equipmentMeshVariations;                              // 0x09B8 (size: 0x50)
    TMap<EEquipmentSlot, uint8> equipmentTextureVariations;                           // 0x0A08 (size: 0x50)
    TMap<class EEquipmentSlot, class FVector> equipmentColorSchemeUVs;                // 0x0A58 (size: 0x50)
    float shieldSymbolIndex;                                                          // 0x0AA8 (size: 0x4)
    EUnitRole currentUnitRole;                                                        // 0x0AC0 (size: 0x1)
    EUnitRole assignedUnitRole;                                                       // 0x0AC1 (size: 0x1)
    float pregnancy;                                                                  // 0x0AC4 (size: 0x4)
    uint8 Age;                                                                        // 0x0ACC (size: 0x1)
    float meleeTraining;                                                              // 0x0ADC (size: 0x4)
    float archeryTraining;                                                            // 0x0AE0 (size: 0x4)
    FName unitTemp;                                                                   // 0x0AE4 (size: 0x8)
    float potential;                                                                  // 0x0AEC (size: 0x4)
    TArray<FPotentialFactor> potentialFactors;                                        // 0x0AF0 (size: 0x10)
    bool friendlyFirePossible;                                                        // 0x0B00 (size: 0x1)
    bool friendlyFireAllowed;                                                         // 0x0B01 (size: 0x1)
    bool tacticalRetreat;                                                             // 0x0B02 (size: 0x1)
    FVector retreatPosition;                                                          // 0x0B08 (size: 0x18)
    float engagementPercentage;                                                       // 0x0B20 (size: 0x4)
    int32 DrawTime;                                                                   // 0x0B24 (size: 0x4)
    class ARegion* currentRegion;                                                     // 0x0B28 (size: 0x8)
    TArray<FVector2D> targetMemory;                                                   // 0x0B30 (size: 0x10)
    class ASMBuildingMaster* chosenPasture;                                           // 0x0B48 (size: 0x8)
    int32 mountAnimFlavour;                                                           // 0x0B50 (size: 0x4)
    bool unitsPassingThrough;                                                         // 0x0C18 (size: 0x1)
    bool unitsPassingSameDir;                                                         // 0x0C19 (size: 0x1)
    TArray<class ASMUnit*> possibleTargets;                                           // 0x0C20 (size: 0x10)
    float moveToFaceDot;                                                              // 0x0C30 (size: 0x4)
    float moveRightDot;                                                               // 0x0C34 (size: 0x4)
    FVector movingRightV;                                                             // 0x0C38 (size: 0x18)
    bool forceFacingForward;                                                          // 0x0C50 (size: 0x1)
    bool movingSideways;                                                              // 0x0C51 (size: 0x1)
    bool strafeRight;                                                                 // 0x0C52 (size: 0x1)
    bool strafeLeft;                                                                  // 0x0C53 (size: 0x1)
    bool walkForward;                                                                 // 0x0C54 (size: 0x1)
    int32 closeEnemyUpdateLag;                                                        // 0x0C58 (size: 0x4)
    float nearThresholdSq;                                                            // 0x0C5C (size: 0x4)
    float animSpeedFac;                                                               // 0x0C60 (size: 0x4)
    bool squadAnyFriendlyFirePossible;                                                // 0x0C64 (size: 0x1)
    FName currentAnimset;                                                             // 0x0C68 (size: 0x8)
    EAnimMode animMode;                                                               // 0x0C70 (size: 0x1)
    int32 instanceUpdateLag;                                                          // 0x0C74 (size: 0x4)
    FVector lastInstacePosition;                                                      // 0x0C78 (size: 0x18)
    FVector prevToLastInstacePosition;                                                // 0x0C90 (size: 0x18)
    TArray<int32> roadPathPointIDs;                                                   // 0x0CA8 (size: 0x10)
    class ASMBuildingMaster* dropsTo;                                                 // 0x0CB8 (size: 0x8)
    class ARegion* lastTradedWith;                                                    // 0x0CC0 (size: 0x8)
    float lastVeloUpdTime;                                                            // 0x0CC8 (size: 0x4)
    bool raiding;                                                                     // 0x0CCC (size: 0x1)
    int32 ItemsLooted;                                                                // 0x0CD0 (size: 0x4)
    uint8 regionUpdateTimer;                                                          // 0x0CD4 (size: 0x1)
    uint8 lastTrumpetTargetSquadID;                                                   // 0x0CE0 (size: 0x1)
    uint8 livestockRunawayTimer;                                                      // 0x0D10 (size: 0x1)
    FVector laggingBottomPos;                                                         // 0x0D30 (size: 0x18)
    bool isBeingRallied;                                                              // 0x0D48 (size: 0x1)
    FTransform rallyingTransform;                                                     // 0x0D50 (size: 0x60)
    int32 currAnimAction;                                                             // 0x0DB0 (size: 0x4)
    TArray<FString> unitDebugLog;                                                     // 0x0DB8 (size: 0x10)
    uint8 voiceID;                                                                    // 0x0DC8 (size: 0x1)
    TArray<TWeakObjectPtr<UVAISMControllerAbstract>> VAMPControllers;                 // 0x0DD8 (size: 0x10)
    class USpatialEntityComponent* SpatialEntityComponent;                            // 0x0DE8 (size: 0x8)
    class UDataTable* currentAnimsetDT;                                               // 0x0DF0 (size: 0x8)
    float currentAnimSpd;                                                             // 0x0DF8 (size: 0x4)
    float currentAnimSpdDefault;                                                      // 0x0DFC (size: 0x4)
    float lastTransitionTime;                                                         // 0x0E00 (size: 0x4)
    float previouslySetTransitionDuration;                                            // 0x0E04 (size: 0x4)
    float FinalYawCorrection;                                                         // 0x0E08 (size: 0x4)
    TArray<FName> quirks;                                                             // 0x0E10 (size: 0x10)
    int32 UniqueID;                                                                   // 0x0E20 (size: 0x4)
    int32 assignedSquadID;                                                            // 0x0E24 (size: 0x4)
    TArray<FGood> assignedMilitaryEquipment;                                          // 0x0E28 (size: 0x10)
    class ASMUnit* mountActor;                                                        // 0x0E58 (size: 0x8)
    bool isMount;                                                                     // 0x0E60 (size: 0x1)
    TArray<FGood> shoppingList;                                                       // 0x0E68 (size: 0x10)
    TMap<class FName, class FString> customUnitData;                                  // 0x0E78 (size: 0x50)

    void writeUnitDebugLog(FString newLogEntry);
    bool UseSkill(int32 skill, bool bSkipAvailabilityCheck);
    void updateSquadAnyFriendlyFirePossible();
    class ASMUnit* updateNearestLazyFriend();
    void updateDecalVisibility();
    void updateCurrentRegion(bool squadCenter);
    void UnhideVAMPSlot(EEquipmentSlot Slot);
    bool unequip(EEquipmentSlot Slot);
    void turnToSoldierJoinSquad(int32 squadToJoin);
    void turnToBandit();
    void step();
    bool squadFinishedRecruiting();
    void spawnStaticGoodVisualization();
    void SetVAMPVariationsToEquipment();
    void setVAMPControllerCustomData(EEquipmentSlot equimentSlot);
    void setVAMPColorSchemeUVsForSlot(EEquipmentSlot Slot, FVector newColorScheme);
    void setTask(const FTask& newTask);
    void setSprintModeWholeSquad(bool NewMode);
    void setRetreatPositionWholeSquad();
    void setRaidingWholeSquad(bool newSetting);
    void setPushStance(const EPushStance& newStance, bool byMorale, bool playVoiceline);
    void setFriendlyFireAllowedWholeSquad(const bool& newSetting);
    void setFortified(bool newFortified);
    void setCrossbowHolsterStateIfNeeded(bool holstered);
    void setBehaviourStance(const EBehaviourStance& newStance, bool playVoiceline);
    void removeFromSquad();
    void removeFromFamilyIfHasOne(bool deleteEmptyFamily);
    void playVfx(class UParticleSystem* ParticleSystem, FName SocketName, FTransform Offset);
    void playSoundCueFromDatabaseIfClose(FName cueName);
    void playHitFx();
    void playGruntFxSometimesIfClose();
    void playGruntFxSometimes();
    void pickRandomName();
    bool pickNewShootingTarget();
    bool pickAttackAction(class ASMUnit* targetUnit, bool backstab);
    void performHit();
    bool ownsArtisanWorkshop();
    bool murderVillagersNear(const FVector& Position, float maxDistSq);
    void just_die();
    bool isWagonEquipped();
    bool isVAMPControllerVisibile(EEquipmentSlot equimentSlot);
    bool isUnitWithinMapBounds();
    bool isSquadFleeing();
    bool isSquadEngaged();
    bool IsSpatiallyVisible();
    bool isSoldier();
    bool isSkillAvailable(int32 SkillID, TArray<FName>& outReasonsNot);
    bool isSkillActive(int32 SkillID);
    bool isRangedUnit();
    bool isPloughEquipped();
    bool isHumanCivilian(bool includeRetainers);
    bool isFamilyInjured();
    bool isFamilyHead();
    bool isFamilyDiseased();
    bool isEquipped(int32 ItemType);
    bool isDisbanded();
    bool inEditor();
    void HideVAMPSlot(EEquipmentSlot Slot);
    void hideVAMPControllers();
    bool hasValidFamily();
    bool hasNoFamilyMembers();
    class ASMBuildingMaster* getWorkplace();
    int32 getVoiceID();
    uint8 getVAMPTextureVariationIDForSlot(EEquipmentSlot Slot);
    uint8 getVAMPMeshVariationIDForSlot(EEquipmentSlot Slot);
    class UVAISMControllerAbstract* getVAMPController(EEquipmentSlot Slot);
    FVector getVAMPColorSchemeUVsForSlot(EEquipmentSlot Slot);
    FName getUnitSquadTemplateName();
    TArray<class ASMUnit*> getUnitsBlockingLine(const FSegment2D& line, const TArray<class ASMUnit*> unitsToCheck, const int32& skipID, class APawnCPP* onlyOwner);
    int32 getTradeRouteMerchantsTradingGoodType();
    FName getTaskLabel();
    FVector getTargetPos();
    TArray<FName> getStatus();
    TArray<class ASMUnit*> GetSquadUnits();
    TArray<EUnitTrait> getSquadTraits();
    class ASMUnit* getSquadLeader();
    float getSquadFormationSpread();
    FVector getSquadCenter();
    TArray<FName> getSquadAudioTags();
    int32 getJobType();
    FName getItemVariationName(int32 goodID);
    EEquipmentSlot getItemEquipmentSlot(int32 ItemId, bool useCarryingVariationIfPossible);
    FVector GetInterpolatedLocation();
    class ASMBuildingMaster* getHome();
    class ASMBuildingMaster* getFamilyStall();
    int32 getFamilyLevel();
    int32 getEquippedWagon();
    int32 GetEquippedID(EEquipmentSlot Slot);
    TArray<class ASMUnit*> getEnemyUnitsInShootingRange(const int32& targetSquad, bool& friendlyFire);
    bool getDebugFlag(FName flagName);
    FUnitDataStruct getData();
    FName getCurrentEquipmentVariation(EEquipmentSlot equimentSlot);
    class ASMUnit* getBlockingLineVision(class ASMUnit* unitA, class ASMUnit* unitB, bool OnlyStationary);
    TArray<class ASMUnit*> getAllFamilyMembers();
    EActionType GetAction();
    class AResource* FindNearestCart(const class ASMBuildingMaster* belongsTo, int32 goodType);
    void equipWithAnimation(const int32& ItemType);
    void equipTradeWagon();
    bool equipResource(int32 goodID, bool freeHands);
    void equipFromTemplate(const FUnitTemplate& temp, const FName& tempName, bool bannerCarrier);
    bool equipCosmeticOnly(int32 goodID);
    void equipAdequateCivilianClothes(bool forceChange);
    bool equip(int32 goodID, bool forceChange, bool useCarryingVariationIfPossible);
    void drawDebugBoxAtLocation(const FVector& Location, FColor boxColor, float boxTime, FVector BoxSize);
    void DrawDebugBox(FName debugFlag, FColor boxColor, float boxTime, FVector BoxSize);
    bool doFarmingJobs(bool autoHarvestOnly, bool neverIgnoreWorkerLimit);
    void despawnStaticGoodVisualization();
    void despawnAllStaticGoodVisualizations();
    void deathAnimationEnded();
    void CombatHit(class ASMUnit* attacker, class ASMUnit* defender, bool isProjectile, float projDist, bool avoidKilling);
    void changeMapVariationID(TMap<EEquipmentSlot, uint8>& variationMap, EEquipmentSlot Slot, int32 change);
    void changeEquipmentVariation(EEquipmentSlot Slot, FName VariationName);
    void cartLoadingUnequipGood();
    void cartLoadingEquipGood();
    bool capSpeedToPersonInFront(const FVector& currentLocation, const FVector& ProjectedLocation);
    bool canSetPushStance(const EPushStance& stanceType);
    bool canBeTrampled(class ASMUnit* unit);
    void animationLoopEnded(bool intraLoop);
}; // Size: 0x1310

class ASmoothForce : public AActor
{
    TArray<class ASMUnit*> affectedUnits;                                             // 0x02E8 (size: 0x10)
    TArray<class ASMUnit*> sorted;                                                    // 0x02F8 (size: 0x10)

}; // Size: 0x360

class ASnapDebrisActor : public AActor
{
    FName debrisType;                                                                 // 0x02A8 (size: 0x8)
    FVector SpawnLocation;                                                            // 0x02B0 (size: 0x18)
    FRotator SpawnRotation;                                                           // 0x02C8 (size: 0x18)

}; // Size: 0x2E0

class ASoundBuddy : public AActor
{
    class ARTSMultiEngineCPP* masterPtr;                                              // 0x02A8 (size: 0x8)
    FTimerHandle proximityUpdateHandle;                                               // 0x02B0 (size: 0x8)
    class UAudioComponent* ambience_wind_close;                                       // 0x02C8 (size: 0x8)
    class UAudioComponent* ambience_wind_far;                                         // 0x02D0 (size: 0x8)
    class UAudioComponent* ambience_rain_close;                                       // 0x02D8 (size: 0x8)
    TArray<class USoundBase*> weather_thunder;                                        // 0x02E0 (size: 0x10)
    TArray<class USoundBase*> ambience_fireplace;                                     // 0x02F0 (size: 0x10)
    TArray<class USoundBase*> ambience_fireLarge;                                     // 0x0300 (size: 0x10)
    class USoundBase* cue_ambience_bigFire;                                           // 0x0310 (size: 0x8)
    TArray<class USoundBase*> ambience_flag;                                          // 0x0318 (size: 0x10)
    TArray<class USoundBase*> ambience_banner;                                        // 0x0328 (size: 0x10)
    TArray<class USoundBase*> churchBells;                                            // 0x0338 (size: 0x10)
    TArray<class USoundBase*> barks_peasants;                                         // 0x0348 (size: 0x10)
    TArray<class USoundBase*> barks_crows;                                            // 0x0358 (size: 0x10)
    TArray<class USoundBase*> barks_deer;                                             // 0x0368 (size: 0x10)
    TArray<class USoundBase*> barks_sheep;                                            // 0x0378 (size: 0x10)
    TArray<class USoundBase*> barks_oxen;                                             // 0x0388 (size: 0x10)
    TArray<class USoundBase*> barks_chickens;                                         // 0x0398 (size: 0x10)
    TArray<class USoundBase*> barks_horse;                                            // 0x03A8 (size: 0x10)
    TArray<class USoundBase*> conversation_male;                                      // 0x03B8 (size: 0x10)
    TArray<class USoundBase*> steps_grass;                                            // 0x03C8 (size: 0x10)
    class USoundBase* cue_steps_grass_varB;                                           // 0x03D8 (size: 0x8)
    class USoundBase* cue_steps_grass_varC;                                           // 0x03E0 (size: 0x8)
    TArray<class USoundBase*> steps_dirt;                                             // 0x03E8 (size: 0x10)
    TArray<class USoundBase*> steps_dirt_varB;                                        // 0x03F8 (size: 0x10)
    TArray<class USoundBase*> steps_dirt_varC;                                        // 0x0408 (size: 0x10)
    TArray<class USoundBase*> steps_mud;                                              // 0x0418 (size: 0x10)
    TArray<class USoundBase*> steps_mud_varB;                                         // 0x0428 (size: 0x10)
    TArray<class USoundBase*> steps_snow;                                             // 0x0438 (size: 0x10)
    TArray<class USoundBase*> steps_horse;                                            // 0x0448 (size: 0x10)
    TArray<class USoundBase*> steps_carriage;                                         // 0x0458 (size: 0x10)
    TArray<class USoundBase*> steps_handcart;                                         // 0x0468 (size: 0x10)
    TArray<class USoundBase*> steps_plough;                                           // 0x0478 (size: 0x10)
    TArray<class USoundBase*> steps_deer;                                             // 0x0488 (size: 0x10)
    TArray<class USoundBase*> steps_oxen;                                             // 0x0498 (size: 0x10)
    TArray<class USoundBase*> steps_ox_rig;                                           // 0x04A8 (size: 0x10)
    TArray<class USoundBase*> steps_animalSingle;                                     // 0x04B8 (size: 0x10)
    TArray<class USoundBase*> steps_animalLight;                                      // 0x04C8 (size: 0x10)
    TArray<class USoundBase*> steps_logSfx;                                           // 0x04D8 (size: 0x10)
    TArray<class USoundBase*> steps_water;                                            // 0x04E8 (size: 0x10)
    class USoundBase* cue_rustle_weapon;                                              // 0x04F8 (size: 0x8)
    class USoundBase* cue_rustle_shield;                                              // 0x0500 (size: 0x8)
    class USoundBase* cue_rustle_pole;                                                // 0x0508 (size: 0x8)
    class USoundBase* cue_rustle_cloth;                                               // 0x0510 (size: 0x8)
    class USoundBase* cue_rustle_clank;                                               // 0x0518 (size: 0x8)
    class USoundBase* cue_rustle_mail;                                                // 0x0520 (size: 0x8)
    class USoundBase* cue_rustle_bow;                                                 // 0x0528 (size: 0x8)
    class USoundBase* cue_breathing;                                                  // 0x0530 (size: 0x8)
    class USoundBase* cue_male_idle;                                                  // 0x0538 (size: 0x8)
    TArray<class USoundBase*> impacts_chop;                                           // 0x0540 (size: 0x10)
    TArray<class USoundBase*> impacts_chop_far;                                       // 0x0550 (size: 0x10)
    TArray<class USoundBase*> impacts_firewood;                                       // 0x0560 (size: 0x10)
    TArray<class USoundBase*> impacts_mine;                                           // 0x0570 (size: 0x10)
    TArray<class USoundBase*> impacts_build;                                          // 0x0580 (size: 0x10)
    TArray<class USoundBase*> impacts_buildB;                                         // 0x0590 (size: 0x10)
    TArray<class USoundBase*> impacts_splash;                                         // 0x05A0 (size: 0x10)
    TArray<class USoundBase*> impacts_splashBucket;                                   // 0x05B0 (size: 0x10)
    TArray<class USoundBase*> impacts_hoe;                                            // 0x05C0 (size: 0x10)
    TArray<class USoundBase*> impacts_thunderHit;                                     // 0x05D0 (size: 0x10)
    class USoundBase* cue_torchHit;                                                   // 0x05E0 (size: 0x8)
    TArray<class USoundBase*> quiverDraw;                                             // 0x05E8 (size: 0x10)
    TArray<class USoundBase*> bowRelease;                                             // 0x05F8 (size: 0x10)
    TArray<class USoundBase*> arrowImpacts;                                           // 0x0608 (size: 0x10)
    TArray<class USoundBase*> arrowHitGround;                                         // 0x0618 (size: 0x10)
    TArray<class USoundBase*> arrowHitFlesh;                                          // 0x0628 (size: 0x10)
    TArray<class USoundBase*> arrowFlybys;                                            // 0x0638 (size: 0x10)
    TArray<class USoundBase*> clothRumble;                                            // 0x0648 (size: 0x10)
    TArray<class USoundBase*> armourClanks;                                           // 0x0658 (size: 0x10)
    TArray<class USoundBase*> peasantGrunts;                                          // 0x0668 (size: 0x10)
    class USoundBase* cue_deathImpact;                                                // 0x0678 (size: 0x8)
    class USoundBase* cue_chargeImpact;                                               // 0x0680 (size: 0x8)
    TArray<class USoundBase*> marchingSounds;                                         // 0x0688 (size: 0x10)
    TArray<class USoundBase*> runningSounds;                                          // 0x0698 (size: 0x10)
    TArray<class USoundBase*> chargingSounds;                                         // 0x06A8 (size: 0x10)
    TArray<class USoundBase*> groupBattleSounds;                                      // 0x06B8 (size: 0x10)
    TArray<class USoundBase*> groupWalkingBarksLoud;                                  // 0x06C8 (size: 0x10)
    TArray<class USoundBase*> groupHorseIdle;                                         // 0x06D8 (size: 0x10)
    TArray<class USoundBase*> groupHorseWalk;                                         // 0x06E8 (size: 0x10)
    TArray<class USoundBase*> groupHorseRun;                                          // 0x06F8 (size: 0x10)
    TArray<class USoundBase*> deathImpacts;                                           // 0x0708 (size: 0x10)
    TArray<class USoundBase*> shieldBlocks;                                           // 0x0718 (size: 0x10)
    TArray<class USoundBase*> combatGrunts;                                           // 0x0728 (size: 0x10)
    TArray<class USoundBase*> combatGruntsHit;                                        // 0x0738 (size: 0x10)
    TArray<class USoundBase*> combatGruntsDie;                                        // 0x0748 (size: 0x10)
    TArray<class USoundBase*> trample;                                                // 0x0758 (size: 0x10)
    TArray<class USoundBase*> victoryCheersGroup;                                     // 0x0768 (size: 0x10)
    TArray<class USoundBase*> groupShouts;                                            // 0x0778 (size: 0x10)
    TArray<class USoundBase*> birdFlockFlying;                                        // 0x0788 (size: 0x10)
    TArray<class USoundBase*> BirdFlock;                                              // 0x0798 (size: 0x10)
    TArray<class USoundBase*> arrowVolley;                                            // 0x07A8 (size: 0x10)
    TArray<class USoundBase*> battle_taunts;                                          // 0x07B8 (size: 0x10)
    TArray<class USoundBase*> battle_idle;                                            // 0x07C8 (size: 0x10)
    TArray<class USoundBase*> battle_move;                                            // 0x07D8 (size: 0x10)
    TArray<class USoundBase*> battle_hold;                                            // 0x07E8 (size: 0x10)
    TArray<class USoundBase*> battle_holdLine;                                        // 0x07F8 (size: 0x10)
    TArray<class USoundBase*> battle_combat;                                          // 0x0808 (size: 0x10)
    TArray<class USoundBase*> battle_retreat;                                         // 0x0818 (size: 0x10)
    TArray<class USoundBase*> battle_flee;                                            // 0x0828 (size: 0x10)
    TArray<class USoundBase*> battle_charge;                                          // 0x0838 (size: 0x10)
    TArray<class USoundBase*> battle_losing;                                          // 0x0848 (size: 0x10)
    TArray<class USoundBase*> battle_reacting;                                        // 0x0858 (size: 0x10)
    TArray<class USoundBase*> battle_spread;                                          // 0x0868 (size: 0x10)
    TArray<class USoundBase*> battle_idle_barks;                                      // 0x0878 (size: 0x10)
    class USoundBase* cue_voice_far_combat;                                           // 0x0888 (size: 0x8)
    class USoundBase* cue_voice_far_move;                                             // 0x0890 (size: 0x8)
    class USoundBase* cue_voice_far_idle;                                             // 0x0898 (size: 0x8)
    class USoundBase* cue_voice_far_charge;                                           // 0x08A0 (size: 0x8)
    class USoundBase* cue_voice_far_bandit;                                           // 0x08A8 (size: 0x8)
    class USoundBase* cue_voice_far_hold;                                             // 0x08B0 (size: 0x8)
    class USoundBase* cue_voice_far_draw;                                             // 0x08B8 (size: 0x8)
    class USoundBase* cue_voice_far_loose;                                            // 0x08C0 (size: 0x8)
    class USoundBase* cue_voice_far_retreat;                                          // 0x08C8 (size: 0x8)
    class USoundBase* cue_voice_far_morale_low;                                       // 0x08D0 (size: 0x8)
    class USoundBase* cue_voice_far_morale_high;                                      // 0x08D8 (size: 0x8)
    class USoundBase* cue_voice_far_broken;                                           // 0x08E0 (size: 0x8)
    class USoundBase* cue_voice_far_push;                                             // 0x08E8 (size: 0x8)
    class USoundBase* cue_voice_far_attack;                                           // 0x08F0 (size: 0x8)
    class USoundBase* cue_voice_bandit_idle;                                          // 0x08F8 (size: 0x8)
    class USoundBase* cue_voice_bandit_move;                                          // 0x0900 (size: 0x8)
    class USoundBase* cue_voice_bandit_combat;                                        // 0x0908 (size: 0x8)
    class USoundBase* cue_voice_bandit_charge;                                        // 0x0910 (size: 0x8)
    class USoundBase* cue_voice_bandit_far_idle;                                      // 0x0918 (size: 0x8)
    class USoundBase* cue_voice_bandit_far_move;                                      // 0x0920 (size: 0x8)
    class USoundBase* cue_voice_bandit_far_combat;                                    // 0x0928 (size: 0x8)
    class USoundBase* cue_voice_bandit_far_charge;                                    // 0x0930 (size: 0x8)
    TArray<class USoundBase*> chargeHorns;                                            // 0x0938 (size: 0x10)
    TArray<class USoundBase*> tacticalRetreatHorns;                                   // 0x0948 (size: 0x10)
    TArray<class USoundBase*> retreatHorns;                                           // 0x0958 (size: 0x10)
    TArray<class USoundBase*> enemyRetreatHorns;                                      // 0x0968 (size: 0x10)
    TArray<class USoundBase*> unitRecruited;                                          // 0x0978 (size: 0x10)
    class USoundBase* cue_militiaRallyHorns;                                          // 0x0988 (size: 0x8)
    TArray<class USoundBase*> snd_selectUnitLight;                                    // 0x0990 (size: 0x10)
    TArray<class USoundBase*> snd_selectUnitHeavy;                                    // 0x09A0 (size: 0x10)
    TArray<class USoundBase*> snd_singleClick;                                        // 0x09B0 (size: 0x10)
    TArray<class USoundBase*> snd_doubleClick;                                        // 0x09C0 (size: 0x10)
    TArray<class USoundBase*> snd_singleAttack;                                       // 0x09D0 (size: 0x10)
    TArray<class USoundBase*> snd_doubleAttack;                                       // 0x09E0 (size: 0x10)
    TArray<class USoundBase*> snd_armyTent;                                           // 0x09F0 (size: 0x10)
    TArray<class USoundBase*> snd_coins;                                              // 0x0A00 (size: 0x10)
    TArray<class USoundBase*> snd_recruit;                                            // 0x0A10 (size: 0x10)
    TArray<class USoundBase*> snd_buildingUpgrade;                                    // 0x0A20 (size: 0x10)
    TArray<class USoundBase*> snd_residentialPop;                                     // 0x0A30 (size: 0x10)
    class USoundBase* cue_militiaRallyConfirm;                                        // 0x0A40 (size: 0x8)
    TArray<class USoundBase*> eng_filmfinken_selectGeneric;                           // 0x0A48 (size: 0x10)
    TArray<class USoundBase*> eng_filmfinken_selectSwordsmen;                         // 0x0A58 (size: 0x10)
    TArray<class USoundBase*> eng_filmfinken_selectHeavyInfantry;                     // 0x0A68 (size: 0x10)
    TArray<class USoundBase*> eng_filmfinken_commandGeneric;                          // 0x0A78 (size: 0x10)
    TArray<class USoundBase*> eng_filmfinken_commandMarch;                            // 0x0A88 (size: 0x10)
    TArray<class USoundBase*> eng_filmfinken_commandRun;                              // 0x0A98 (size: 0x10)
    TArray<class USoundBase*> eng_filmfinken_commandAttack;                           // 0x0AA8 (size: 0x10)
    TArray<class USoundBase*> eng_filmfinken_commandCharge;                           // 0x0AB8 (size: 0x10)
    TArray<class USoundBase*> eng_filmfinken_commandDraw;                             // 0x0AC8 (size: 0x10)
    TArray<class USoundBase*> eng_filmfinken_commandLoose;                            // 0x0AD8 (size: 0x10)
    TArray<class USoundBase*> eng_filmfinken_commandBrace;                            // 0x0AE8 (size: 0x10)
    TArray<class USoundBase*> eng_filmfinken_commandHold;                             // 0x0AF8 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_selectGeneric;                              // 0x0B08 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_selectSwordsmen;                            // 0x0B18 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_selectHeavyInfantry;                        // 0x0B28 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_selectBillmen;                              // 0x0B38 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_selectArchers;                              // 0x0B48 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_commandGeneric;                             // 0x0B58 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_commandMarch;                               // 0x0B68 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_commandRun;                                 // 0x0B78 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_commandAttack;                              // 0x0B88 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_commandShoot;                               // 0x0B98 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_commandCharge;                              // 0x0BA8 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_commandDraw;                                // 0x0BB8 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_commandLoose;                               // 0x0BC8 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_commandBrace;                               // 0x0BD8 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_commandSpread;                              // 0x0BE8 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_commandHold;                                // 0x0BF8 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_commandShieldwall;                          // 0x0C08 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_commandAtWill;                              // 0x0C18 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_commandVolley;                              // 0x0C28 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_stance_missileAlert;                        // 0x0C38 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_stance_balanced;                            // 0x0C48 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_stance_push;                                // 0x0C58 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_stance_giveGround;                          // 0x0C68 (size: 0x10)
    TArray<class USoundBase*> eng_kabooka_stance_defensive;                           // 0x0C78 (size: 0x10)
    TArray<class USoundBase*> eng_matthewtw_militia;                                  // 0x0C88 (size: 0x10)
    TArray<class USoundBase*> eng_matthewtw_employ_generic;                           // 0x0C98 (size: 0x10)
    TArray<class USoundBase*> eng_matthewtw_employ_hunters;                           // 0x0CA8 (size: 0x10)
    TArray<class USoundBase*> eng_matthewtw_employ_camps;                             // 0x0CB8 (size: 0x10)
    TArray<class USoundBase*> eng_matthewtw_employ_builders;                          // 0x0CC8 (size: 0x10)
    class USoundBase* cue_zoomOnPeasant;                                              // 0x0CD8 (size: 0x8)
    class USoundBase* cue_zoomOnPeasantLT;                                            // 0x0CE0 (size: 0x8)
    class USoundBase* cue_placeWall;                                                  // 0x0CE8 (size: 0x8)
    class USoundBase* cue_firewoodCollapse;                                           // 0x0CF0 (size: 0x8)
    class USoundBase* cue_hammerDown;                                                 // 0x0CF8 (size: 0x8)
    class USoundBase* Cue_ProcessLog;                                                 // 0x0D00 (size: 0x8)
    class USoundBase* cue_smashIron;                                                  // 0x0D08 (size: 0x8)
    FTimerHandle glooptUpdateHandle;                                                  // 0x0D10 (size: 0x8)
    TArray<class USoundBase*> gloopsPlayedNow;                                        // 0x0D30 (size: 0x10)
    TArray<class USoundBase*> gloopsPlayedLast;                                       // 0x0D40 (size: 0x10)
    TArray<class USoundBase*> gloopsPlayedBeforeLast;                                 // 0x0D50 (size: 0x10)
    TArray<class USoundBase*> gloopsPlayedBeforeBeforeLast;                           // 0x0D60 (size: 0x10)
    FTimerHandle pastSoundsHandle;                                                    // 0x0D70 (size: 0x8)
    TArray<FPastSound> pastSounds;                                                    // 0x0D78 (size: 0x10)
    class UDataTable* DT_AudioCues;                                                   // 0x0D88 (size: 0x8)
    TArray<class ARegion*> nearbyRegions;                                             // 0x0D90 (size: 0x10)
    TArray<class ASMBuildingMaster*> nearbyBuildings;                                 // 0x0DA0 (size: 0x10)
    float lastSeldomSound;                                                            // 0x0DF0 (size: 0x4)

    void updateObjectProximities();
    void playSfxSeldom(bool is3d, const TArray<class USoundBase*>& sounds, const FVector& Pos, float Volume, bool ultraRare, bool isVoice);
    void playSfx(bool is3d, const TArray<class USoundBase*>& sounds, const FVector& Pos, float Volume, bool canOverlap, bool isVoice, bool isUI);
    void playQuickCueFromDB(const FName& cueName, const FVector& Pos, float Volume, float Speed);
    void playQuickCue2DFromDB(const FName& cueName, float Volume, float Speed);
    void playQuickCue2D(class USoundBase* SoundCue, float Volume, float Speed);
    void playQuickCue(class USoundBase* SoundCue, const FVector& Pos, float Volume, float Speed);
    void playIncidentalAmbientSounds(float DeltaTime);
    void playGloops();
    void pickAndPlay(TArray<class USoundBase*> sounds, float Volume, const FVector& Pos);
    float getPlayerCameraClearance();
    void filterPastSounds();
}; // Size: 0xDF8

class AUnitSpawner : public AActor
{
    bool Enabled;                                                                     // 0x02A8 (size: 0x1)
    bool ownedByRegion;                                                               // 0x02A9 (size: 0x1)
    class ARegion* Region;                                                            // 0x02B0 (size: 0x8)
    class ARTSMultiEngineCPP* masterPtr;                                              // 0x02B8 (size: 0x8)
    int32 rows;                                                                       // 0x02C0 (size: 0x4)
    int32 columns;                                                                    // 0x02C4 (size: 0x4)
    bool autoAssignToEnemy;                                                           // 0x02C8 (size: 0x1)
    class UDataTable* DT_units;                                                       // 0x02D0 (size: 0x8)
    FName PresetName;                                                                 // 0x02D8 (size: 0x8)
    class ASMBuildingMaster* garrisonedIn;                                            // 0x02E0 (size: 0x8)
    FName scenario;                                                                   // 0x02E8 (size: 0x8)
    bool spawnCamped;                                                                 // 0x02F0 (size: 0x1)
    bool allowBannerCarrier;                                                          // 0x02F1 (size: 0x1)

    int32 spawnUnits();
}; // Size: 0x2F8

class AVillageSpawner : public AActor
{
    bool CanBePlayer;                                                                 // 0x02A8 (size: 0x1)
    bool AIOnly;                                                                      // 0x02A9 (size: 0x1)
    bool bailiff;                                                                     // 0x02AA (size: 0x1)
    bool ironDeposit;                                                                 // 0x02AB (size: 0x1)
    bool farmingVillage;                                                              // 0x02AC (size: 0x1)
    bool woodcutterVillage;                                                           // 0x02AD (size: 0x1)
    bool banditCamp;                                                                  // 0x02AE (size: 0x1)
    bool stoneQuarry;                                                                 // 0x02AF (size: 0x1)
    bool Deer;                                                                        // 0x02B0 (size: 0x1)
    bool Tradepoint;                                                                  // 0x02B1 (size: 0x1)
    bool stoneResources;                                                              // 0x02B2 (size: 0x1)
    bool beeResources;                                                                // 0x02B3 (size: 0x1)
    bool saltDeposit;                                                                 // 0x02B4 (size: 0x1)
    bool clayDeposit;                                                                 // 0x02B5 (size: 0x1)
    bool berries;                                                                     // 0x02B6 (size: 0x1)
    bool shrooms;                                                                     // 0x02B7 (size: 0x1)
    int32 numResources;                                                               // 0x02B8 (size: 0x4)
    class ARegion* Region;                                                            // 0x02C0 (size: 0x8)
    class ARTSMultiEngineCPP* masterPtr;                                              // 0x02C8 (size: 0x8)
    TArray<uint8> Options;                                                            // 0x02D0 (size: 0x10)
    FString TownName;                                                                 // 0x02E0 (size: 0x10)
    FString PlayerName;                                                               // 0x02F0 (size: 0x10)
    TArray<class AVillageSpawner*> spawnPoints;                                       // 0x0300 (size: 0x10)
    uint8 pointsSpawned;                                                              // 0x0310 (size: 0x1)
    uint8 ensureOption;                                                               // 0x0311 (size: 0x1)
    TArray<FName> scenarios;                                                          // 0x0318 (size: 0x10)
    TArray<FName> lord_traits;                                                        // 0x0328 (size: 0x10)

    void calculateOptions();
}; // Size: 0x338

class AWeatherMaster : public AActor
{
    class ARTSMultiEngineCPP* masterPtr;                                              // 0x02A8 (size: 0x8)
    FWeatherMasterOnUpdateDay OnUpdateDay;                                            // 0x02B0 (size: 0x10)
    void SDMDelegate();
    FWeatherMasterOnUpdateMonth OnUpdateMonth;                                        // 0x02C0 (size: 0x10)
    void SDMDelegate();
    FWeatherMasterOnUpdateSeason OnUpdateSeason;                                      // 0x02D0 (size: 0x10)
    void SDMDelegate();
    FTimerHandle windUpdateHandle;                                                    // 0x02E8 (size: 0x8)
    FTimerHandle thunderHandle;                                                       // 0x02F0 (size: 0x8)
    class UWindSettings* WindSettings;                                                // 0x0350 (size: 0x8)
    float dayLength;                                                                  // 0x0360 (size: 0x4)
    int32 day;                                                                        // 0x0364 (size: 0x4)
    int64 daysTotal;                                                                  // 0x0368 (size: 0x8)
    int32 dayOfTheMonth;                                                              // 0x0370 (size: 0x4)
    int32 month;                                                                      // 0x0374 (size: 0x4)
    int32 monthsTotal;                                                                // 0x0378 (size: 0x4)
    int32 year;                                                                       // 0x037C (size: 0x4)
    uint8 Season;                                                                     // 0x0380 (size: 0x1)
    bool isHarvestSeason;                                                             // 0x0381 (size: 0x1)
    float wind;                                                                       // 0x0384 (size: 0x4)
    float windTarget;                                                                 // 0x0388 (size: 0x4)
    float snowLevel;                                                                  // 0x038C (size: 0x4)
    float snowTarget;                                                                 // 0x0390 (size: 0x4)
    float snowing;                                                                    // 0x0394 (size: 0x4)
    float targetSnowing;                                                              // 0x0398 (size: 0x4)
    float raining;                                                                    // 0x039C (size: 0x4)
    float targetRaining;                                                              // 0x03A0 (size: 0x4)
    float targetCloudiness;                                                           // 0x03A4 (size: 0x4)
    float wetness;                                                                    // 0x03A8 (size: 0x4)
    float cloudiness;                                                                 // 0x03AC (size: 0x4)
    float rainfall;                                                                   // 0x03B0 (size: 0x4)
    float snowfall;                                                                   // 0x03B4 (size: 0x4)
    bool isDrought;                                                                   // 0x03B8 (size: 0x1)
    float droughtLevel;                                                               // 0x03BC (size: 0x4)
    float fogLevel;                                                                   // 0x03C0 (size: 0x4)
    int32 rainMeter;                                                                  // 0x03C4 (size: 0x4)
    int32 daysWithoutRainVariation;                                                   // 0x03C8 (size: 0x4)
    bool isWinter;                                                                    // 0x03D0 (size: 0x1)
    bool winterClose;                                                                 // 0x03D1 (size: 0x1)
    class UCurveFloat* TemperatureCurve;                                              // 0x03E8 (size: 0x8)
    class UCurveFloat* rainfallCurve;                                                 // 0x03F0 (size: 0x8)
    class UMaterialParameterCollection* buildingMPC;                                  // 0x03F8 (size: 0x8)
    TArray<class UParticleSystemComponent*> systems;                                  // 0x0400 (size: 0x10)
    class UParticleSystemComponent* psc_rain_heavy;                                   // 0x0410 (size: 0x8)
    class UParticleSystemComponent* psc_snow_light;                                   // 0x0418 (size: 0x8)
    bool enableThunderstorm;                                                          // 0x0420 (size: 0x1)
    uint8 sheepGrowth;                                                                // 0x0421 (size: 0x1)
    uint8 fertilityUpdateTimer;                                                       // 0x0422 (size: 0x1)
    bool damagingRain;                                                                // 0x0423 (size: 0x1)
    bool grassCulled;                                                                 // 0x0424 (size: 0x1)
    int32 daysSinceLastRaid;                                                          // 0x0428 (size: 0x4)
    int32 daysUntilNextRaid;                                                          // 0x042C (size: 0x4)
    int32 lastBanditCampSpawnedDay;                                                   // 0x0430 (size: 0x4)

    void updateWind();
    void updateMonthAndSeason();
    void updateDay();
    void spawnThunder();
    void setWeatherSpeed(float NewSpeed);
    void setupSeasons(bool loadingASavedGame);
    void setLandscapeGrassCulled(bool bCullGrass);
    void SDMDelegate__DelegateSignature();
    class AWeatherMaster* getWeatherMaster(class UObject* inWorld);
    double getTotalDaysAndHours();
    int32 GetSeasonID(int32 DayOfTheYear);
    ESeason GetSeason();
    int32 getMonthID();
    int32 getMonthFromDay(int32 dayNo);
    FGameplayDate getFutureDayAndMonth(const int32 InDaysAhead);
    int32 getDayOfTheYear(int32 CurrentDay, int32 CurrentMonth);
    FGameplayDate getDayAndMonthFromDaysTotal(int32 daysTotalToBreakDown);
    ESeason GetCurrentSeason(class UObject* inWorld);
    FGameplayDate getCurrentDayAndMonth();
    int32 CalculateStartingDay();
    int32 calculateDayOfTheMonthForDay(int32 dayNo);
    int32 calculateDayOfTheMonth();
}; // Size: 0x6B0

class IMLMainMenuOpenCloseInterface : public IInterface
{

    void Open();
    void Close();
}; // Size: 0x28

class IRegionProviderInterface : public IInterface
{
}; // Size: 0x28

class UAffinityComponent : public USceneComponent
{
}; // Size: 0x260

class UAffinitySettings : public UDeveloperSettings
{
    TMap<class EAffinityType, class TSoftObjectPtr<UTexture2D>> Icons;                // 0x0038 (size: 0x50)

}; // Size: 0x88

class UApprovalComponent : public UActorComponent
{
    class UDataTable* ApprovalDataTable;                                              // 0x00A0 (size: 0x8)

    FName GetCurrencyNameForApprovalEffect(const FName InEffect);
    FApproval GetApprovalData();
}; // Size: 0xA8

class UApprovalSettings : public UDeveloperSettings
{
    float ApprovalFactors;                                                            // 0x0038 (size: 0x88)

}; // Size: 0xC0

class UApprovalWidget : public UUserWidget
{
    class USizeBox* ApprovalPercentContainer;                                         // 0x02D0 (size: 0x8)
    class USizeBox* arrow;                                                            // 0x02D8 (size: 0x8)

    void UpdateArrowPosition(const int32 InApprovalRating);
}; // Size: 0x2E0

class UBannerAnimInstance : public UAnimInstance
{
    float frameA;                                                                     // 0x03B8 (size: 0x4)
    float frameB;                                                                     // 0x03BC (size: 0x4)
    float Blend;                                                                      // 0x03C0 (size: 0x4)
    class UAnimSequenceBase* currentClip;                                             // 0x03C8 (size: 0x8)
    bool playsClip;                                                                   // 0x03D0 (size: 0x1)
    float clipTotalFrames;                                                            // 0x03D4 (size: 0x4)
    float clipFrame;                                                                  // 0x03D8 (size: 0x4)

}; // Size: 0x3E0

class UBuildingSettings : public UDeveloperSettings
{
    int32 DefaultExtensionWidth;                                                      // 0x0038 (size: 0x4)
    int32 DefaultExtensionLength;                                                     // 0x003C (size: 0x4)
    TMap<class EBuildingFunction, class FSoftObjectPath> BuildingIcons;               // 0x0040 (size: 0x50)
    FSoftObjectPath UpgradeDataTable;                                                 // 0x0090 (size: 0x20)
    TArray<TSoftObjectPtr<UTexture2D>> SettlementTextures;                            // 0x00B0 (size: 0x10)
    float CloseProximityCollapsePerBuilding;                                          // 0x00C0 (size: 0x4)
    float CloseProximityRadius;                                                       // 0x00C4 (size: 0x4)
    TMap<int32, FBuildingPartData> BuildingPartData;                                  // 0x00C8 (size: 0x50)
    float SquareCentimetersPerPasturePlank;                                           // 0x0118 (size: 0x4)
    float PastureConstructionHPPerFenceSegment;                                       // 0x011C (size: 0x4)
    float PastureFenceOpeningClearance;                                               // 0x0120 (size: 0x4)
    float PastureFenceMinimumCornerRun;                                               // 0x0124 (size: 0x4)
    float PastureBarnClearanceEnvelope;                                               // 0x0128 (size: 0x4)

}; // Size: 0x130

class UBuildingTypeLibrary : public UWidgetBlueprintLibrary
{

    bool HasYearlyYield(class ASMBuildingMaster* InBuildingMaster);
    bool CanCauseDeforestation(int32 InBuildingType);
}; // Size: 0x28

class UCityPlanningComponent : public UActorComponent
{

    void ResetAIBuildingOptions();
}; // Size: 0x530

class UCoatOfArmsSettings : public UDeveloperSettings
{
    FCoatOfArmsData baronData;                                                        // 0x0038 (size: 0x14)
    TArray<FCoatOfArmsData> AIData;                                                   // 0x0050 (size: 0x10)

}; // Size: 0x60

class UControlHook : public UActorComponent
{
    FControlHookConfig Config;                                                        // 0x00A0 (size: 0x1C)
    FControlHookState State;                                                          // 0x00C0 (size: 0x80)
    FControlHookFlow controlFlow;                                                     // 0x0140 (size: 0x4)
    FControlHookOnInputModeChange OnInputModeChange;                                  // 0x0148 (size: 0x10)
    void OnControlHookInputModeChange(EControlInputMode nextInputMode, EControlInputMode lastInputMode);
    FControlHookOnUiHasPriorityChange OnUiHasPriorityChange;                          // 0x0158 (size: 0x10)
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
    FKey GetMappingKey(FName MappingName, int32 KeyIndex, bool bAxis);
    class UTexture2D* GetInputIcon(EInputIconButton Button);
    FControlHookFlow GetFlow();
    void BindActiveUi(class UNaviUi* rootUi, bool isPureUi);
}; // Size: 0x168

class UCropSettings : public UDeveloperSettings
{
    float BaseDailyGrowthRate;                                                        // 0x0038 (size: 0x40)
    int32 BaseYieldPer100Plants;                                                      // 0x0078 (size: 0x40)
    FIntPoint HarvestSeason;                                                          // 0x00B8 (size: 0x80)
    float HarvestGrowthThreshold;                                                     // 0x0138 (size: 0x4)

    bool IsHarvestSeasonal(ECropType InCropType);
}; // Size: 0x140

class UCropTypeLibrary : public UWidgetBlueprintLibrary
{

    bool NeedsAlmostFullGrowthBeforeHarvest(ECropType Type);
    bool IsVegetableCropType(ECropType Type);
    bool IsFruitCropType(ECropType Type);
    bool IsFertilityBased(ECropType Type);
    bool IsBackyardCrop(ECropType Type);
    int32 GetItemIDFromCropType(ECropType Type);
}; // Size: 0x28

class UDiplomacySettings : public UDeveloperSettings
{
    TSoftObjectPtr<UDataTable> ParagraphDT;                                           // 0x0038 (size: 0x28)

}; // Size: 0x60

class UEventWheel : public UActorComponent
{
}; // Size: 0xC8

class UExpertiseComponent : public UActorComponent
{
    class UProficiencySettings* ProficiencySettings;                                  // 0x00D0 (size: 0x8)

    int32 GetExpertise();
    int32 GetArtisanLevel(FArtisanData& OutData);
}; // Size: 0xD8

class UGateComponent : public USceneComponent
{
    bool bGatesOpened;                                                                // 0x0240 (size: 0x1)

    void ToggleGatesOpen();
    bool AreGatesAnimating();
}; // Size: 0x250

class UGhostStaticMeshActorFactory : public UBlueprintFunctionLibrary
{
}; // Size: 0x28

class UGraphDataPoint : public UUserWidget
{

    void InitFromGoods(const TArray<FGood>& InGoods, const FLinearColor& InColour);
    void InitFromGood(const FGood& InGood, const FLinearColor& InColour);
}; // Size: 0x3E0

class UGraphicsSettingsPresets : public UDataAsset
{
    TMap<uint8, FGraphicsPreset> Presets;                                             // 0x0030 (size: 0x50)

}; // Size: 0x80

class UImageHandler : public UObject
{

    bool WriteImageToDisk(class UTextureRenderTarget2D* TextureRenderTarget, FString SlotName);
    bool UseWrapper(FString SlotName);
    class UTexture2D* ReadImageFromDisk(FString SlotName);
    void log(FString Msg);
    bool IsImageOnDisk(FString SlotName);
    bool DeleteImageOnDisk(FString SlotName);
    FString ComputeImageSlot(FString SlotName);
    FString ComputeImagePath(FString SlotName);
}; // Size: 0x28

class UIoHandler : public UObject
{

    bool SaveGameToSlot(class USaveGame* SaveGameObject, FString SlotName, EIoFileCategory ioCategory);
    bool SaveDataToSlot(const TArray<uint8>& InSaveData, FString SlotName, EIoFileCategory ioCategory);
    void PurgeSaveFileWriteCache();
    class USaveGame* LoadGameFromSlot(FString SlotName);
    bool LoadDataFromSlot(TArray<uint8>& OutSaveData, FString SlotName);
    bool IsSaving();
    int32 GetMaxMapFileSize();
    bool DoesSaveGameExist(FString SlotName);
    bool DeleteGameInSlot(FString SlotName);
}; // Size: 0x28

class UItemLibrary : public UWidgetBlueprintLibrary
{

    bool IsBonusOutput(int32 goodType);
}; // Size: 0x28

class UItemSettings : public UDeveloperSettings
{
    TSoftObjectPtr<UDataTable> ItemTable;                                             // 0x0038 (size: 0x28)
    TSoftObjectPtr<UTexture2D> ItemSubcategoryCategoryIcons;                          // 0x0060 (size: 0x488)
    TSoftObjectPtr<UTexture2D> ItemCategoryIcons;                                     // 0x04E8 (size: 0x208)
    TMap<class EItemType, class FTransformCollection> ItemCartTransforms;             // 0x06F0 (size: 0x50)
    TMap<class EItemType, class FTransformCollection> ItemBigCartTransforms;          // 0x0740 (size: 0x50)

    TSoftObjectPtr<UTexture2D> GetIconForItemSubcategory(const EItemSubcategory InSubcategory);
    TSoftObjectPtr<UTexture2D> GetIconForItemCategory(const EItemCategory InCategory);
}; // Size: 0x790

class ULetterHelperLibrary : public UBlueprintFunctionLibrary
{

    int32 getLetterCost(const TArray<FName>& Letter);
}; // Size: 0x28

class ULivestockSettings : public UDeveloperSettings
{
    float SheepConceptionChance;                                                      // 0x0038 (size: 0x4)
    float CowConceptionChance;                                                        // 0x003C (size: 0x4)
    int32 MaxSheepBirthsPerYear;                                                      // 0x0040 (size: 0x4)
    int32 MaxCowBirthsPerYear;                                                        // 0x0044 (size: 0x4)
    float SheepGestationIncrement;                                                    // 0x0048 (size: 0x4)
    float CowGestationIncrement;                                                      // 0x004C (size: 0x4)
    int32 LambAgeToMature;                                                            // 0x0050 (size: 0x4)
    int32 CalfAgeToMature;                                                            // 0x0054 (size: 0x4)
    int32 FeedConsumptionMonthly;                                                     // 0x0058 (size: 0x5C)
    int32 DaysHungryForStarvation;                                                    // 0x00B4 (size: 0x4)
    int32 PercentageChanceOfDeathWhenStarving;                                        // 0x00B8 (size: 0x4)
    int32 DaysHungryForProblemBanner;                                                 // 0x00BC (size: 0x4)

}; // Size: 0xC0

class UMLArmyCommandWidget : public UNaviSubGrid
{
    TMap<class EPushStance, class FMLStanceState> Stances;                            // 0x0368 (size: 0x50)
    TMap<class ESkillType, class FMLSkillState> skills;                               // 0x03B8 (size: 0x50)
    bool bAllRallied;                                                                 // 0x0408 (size: 0x1)
    bool bAllRanged;                                                                  // 0x0409 (size: 0x1)
    bool bAllFriendlyFire;                                                            // 0x040A (size: 0x1)
    bool bRallyAvailable;                                                             // 0x040B (size: 0x1)

    void OnArmyUpdateRequested();
    void BP_UpdateEntries();
}; // Size: 0x410

class UMLArmyControlGroupContainerWidget : public UUserWidget
{
    class UUniformGridPanel* Container;                                               // 0x02D0 (size: 0x8)
    TSubclassOf<class UUserWidget> EntryWidgetClass;                                  // 0x02D8 (size: 0x8)

    void UpdateActiveGroups(int32 squadID);
    void BP_UpdateActiveGroup(class UUserWidget* InWidget, int32 Group);
}; // Size: 0x2E0

class UMLAssetUserData : public UAssetUserData
{
    TArray<FString> Tags;                                                             // 0x0028 (size: 0x10)

}; // Size: 0x38

class UMLBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

    void UseSkill(class APawn* ForPawn, ESkillType SkillType);
    void UpdateButtonBrushState(class UImage* Image, bool bHovered, bool bPressed, bool bSelected);
    FString TypeToStr(int32 Type);
    FName TypeToName(int32 Type);
    FText TranslateText(class UObject* WorldContextObject, FName TextKey, class UDataTable* DataTable);
    TArray<class UUserWidget*> SortWidgetsByStringKey(const TMap<class FString, class UUserWidget*>& WidgetMap);
    void SetShowMenuBackground(class UMenuAnchor* MenuAnchor, bool bShowMenuBackground);
    void SetRowCount(class UUniformGridPanel* Panel, int32 RowCount);
    void setQuestRegion(FQuest& Quest, class ARegion* Region);
    void SetButtonIsFocusable(class UButton* Button, bool bValue);
    void SetBrushSizeY(class UImage* Image, float SizeY);
    void SetBrushSizeX(class UImage* Image, float SizeX);
    void SetBrushSize(class UImage* Image, FVector2D DesiredSize);
    void ParseSeasonString(FString Input, FString& OutHeader, FString& OutRange, FString& OutDescription);
    bool IsWall(int32 Type);
    bool IsSameItemSet(const TArray<int32>& A, const TArray<int32>& B);
    bool IsRoad(int32 Type);
    bool IsPlotType(int32 Type);
    bool IsBuildingLocked(class APawnCPP* PlayerPawn, const FStat& Stat);
    bool inventoryHasGoodType(const TArray<FGood>& Inventory, int32 goodType);
    void GetWidgetAnimations(TSubclassOf<class UUserWidget> WidgetClass, TArray<class UWidgetAnimation*>& OutAnimations);
    int32 getStockOfGood(const TArray<FGood>& Inventory, int32 goodType);
    TArray<int32> getSpecialReserveGoodTypes();
    class ARTSMultiEngineCPP* GetRtsEngine(const class UObject* WorldContextObject);
    EPlotType GetPlotType(int32 Type);
    FVector2D GetPaintSize(class UWidget* Widget);
    TArray<int32> GetGoodTypes(const TArray<EItemSubcategory>& Categories);
    FVector2D GetAbsolutePosition(class UUserWidget* Widget);
    int32 extractBTypeFromActorTag(const class AActor* Actor);
    FVector ComputeVerticalBoxLayout(class UVerticalBox* Box, FVector CurrentOffset, TMap<class UNaviUi*, class FVector>& Map);
    FVector ComputeUniformGridLayout(class UUniformGridPanel* Panel, FVector CurrentOffset, TMap<class UNaviUi*, class FVector>& Map);
    FVector ComputeHorizontalBoxLayout(class UHorizontalBox* Box, FVector CurrentOffset, TMap<class UNaviUi*, class FVector>& Map);
    bool CanRallySquad(class APawnCPP* Pawn, int32 squadID);
    bool AddWidgetToLayout(class UWidget* Widget, FVector CurrentOffset, TMap<class UNaviUi*, class FVector>& Map);
}; // Size: 0x28

class UMLBuildingCardContainerWidget : public UNaviSubGrid
{
    class UHorizontalBox* Container;                                                  // 0x0368 (size: 0x8)
    class USizeBox* ContainerSizeBox;                                                 // 0x0370 (size: 0x8)
    float MinSizeBoxWidth;                                                            // 0x0378 (size: 0x4)
    bool bEnableWidthAnimation;                                                       // 0x037C (size: 0x1)
    float SingleCardAnimationDelay;                                                   // 0x0380 (size: 0x4)
    float MaxAnimationDelay;                                                          // 0x0384 (size: 0x4)
    EBuildingCategory CurrentCategory;                                                // 0x0388 (size: 0x1)
    TArray<FMLBuildingPanelData> AvailableBuildings;                                  // 0x0390 (size: 0x10)
    FMargin CardPadding;                                                              // 0x03A0 (size: 0x10)
    FMargin SeparatorPadding;                                                         // 0x03B0 (size: 0x10)
    TArray<class UMLBuildingCardWidget*> CardWidgets;                                 // 0x03C0 (size: 0x10)

    void SetCategory(EBuildingCategory InCategory);
    void RebuildWidgetContainer();
    class UMLBuildingSeparator* CreateSeparator();
    class UMLBuildingCardWidget* CreateEntryWidget();
    void BP_RebuildWidgetContainer();
}; // Size: 0x3D0

class UMLBuildingCardWidget : public UUserWidget
{
    class UHorizontalBox* ResourceContainer;                                          // 0x02D0 (size: 0x8)
    class UDataTable* StatsTable;                                                     // 0x02D8 (size: 0x8)
    class UDataTable* ItemsTable;                                                     // 0x02E0 (size: 0x8)
    FMLBuildingPanelData Data;                                                        // 0x02E8 (size: 0x8)
    float AnimationDelay;                                                             // 0x02F0 (size: 0x4)

    void Init_BP(const FStat& Stat);
    void Init(const FMLBuildingPanelData& InData);
    int32 GetBuildingType();
    FStat GetBuildingStat();
    EBuildingCategory GetBuildingCategory();
    void DeInit_BP();
    void DeInit();
    class UUserWidget* CreateResourceWidget(const TSoftObjectPtr<UTexture2D>& ResourceIcon);
}; // Size: 0x300

class UMLBuildingSeparator : public UUserWidget
{
    float AnimationDelay;                                                             // 0x02D0 (size: 0x4)

    void Init_BP();
}; // Size: 0x2D8

class UMLButton : public UNaviUi
{
    class UCommonTextBlock* ButtonTextBlock;                                          // 0x0368 (size: 0x8)
    FText DefaultText;                                                                // 0x0370 (size: 0x10)
    TSubclassOf<class UMLCommonTextStyle> DefaultTextStyle;                           // 0x0380 (size: 0x8)
    class UDataTable* TextLocalizationTable;                                          // 0x0388 (size: 0x8)
    bool bOverrideTextColor;                                                          // 0x0390 (size: 0x1)
    FSlateColor OverrideTextColor;                                                    // 0x0394 (size: 0x14)
    TSubclassOf<class UUserWidget> SharedToolTipClass;                                // 0x03A8 (size: 0x8)
    FMLSharedToolTipInitParams ToolTipParams;                                         // 0x03B0 (size: 0x28)

    void UpdateTextStyle(EMLTextState InState);
    void SetButtonTextColor(const FSlateColor& InTextColor);
    void SetButtonText(const FText& InText);
    void OnTextChanged();
    FName GetLocalizationLabel();
    FText GetButtonText();
}; // Size: 0x3D8

class UMLCheatManager : public UCheatManager
{

    void UnmaintainAllBuildings();
    void UnlockPerk(const FName& InPerkName, const int32 InSlotIndex);
    void StopCycleLanguages();
    void StartCycleLanguages(float Period);
    void SpawnBanditSquad();
    bool ShouldSkipIntro();
    void SettleRaiders();
    void SetSettlementLevel(const uint32 InSettlementLevel);
    void SetLanguageId(int32 LangIndex);
    void SetLanguage(FString Key);
    void SetFollowing(int32 UniqueID);
    void SetFireToNumBuildings(const int32 NumBuildings);
    void RemoveAllFamilies();
    void Rebel();
    void RainNow();
    void PrintSaveFiles();
    void MaintainAllBuildings();
    void LogAllProductionTrackerEntries();
    void Injury(const uint8 InInjuryLevel);
    void GiveRandomAmountOfAllItems();
    void GiveItemByName(const FString InItemName, const int32 InCount);
    void GiveItemByID(const int32 InItemID, const int32 InCount);
    void GiveFoodVariety();
    void DumpVAInfo();
    void DestroyHoveredUnit();
    void CycleLanguage();
    void CollapseNumBuildings(const int32 NumBuildings);
    void CollapseAllBuildings();
    void ChangeTreasury(const int32 InNewTreasury);
    void AddItemToBuilding(const FString InBuildingName, const FString InItemName, const float InCount);
    void AddExpertiseToSelection(int32 InExpertise);
}; // Size: 0x88

class UMLCommonTextStyle : public UCommonTextStyle
{
    FLinearColor HoveredColor;                                                        // 0x0188 (size: 0x10)
    FLinearColor PressedColor;                                                        // 0x0198 (size: 0x10)
    FLinearColor SelectedColor;                                                       // 0x01A8 (size: 0x10)
    FLinearColor DisabledColor;                                                       // 0x01B8 (size: 0x10)

}; // Size: 0x1D0

class UMLGameInstance : public UGameInstance
{
    class UPlatformManager* PlatformManager;                                          // 0x01C0 (size: 0x8)
    class UMetaMetric* MetaMetric;                                                    // 0x01C8 (size: 0x8)
    class UNetMan* NetMan;                                                            // 0x01D0 (size: 0x8)
    class UInputIconManager* InputIconManager;                                        // 0x01D8 (size: 0x8)
    class UPixelFed* PixelFed;                                                        // 0x01E0 (size: 0x8)
    class UStaticMesh* moveDecalMesh;                                                 // 0x01E8 (size: 0x8)
    TArray<FColor> allPlayerColors;                                                   // 0x01F0 (size: 0x10)
    TArray<FPortrait> lordPortraits;                                                  // 0x0200 (size: 0x10)
    TArray<FPortrait> banditPortraits;                                                // 0x0210 (size: 0x10)
    class UTexture2D* playerPortrait;                                                 // 0x0220 (size: 0x8)
    FString playerLordsName;                                                          // 0x0228 (size: 0x10)
    TArray<FString> lordNames;                                                        // 0x0238 (size: 0x10)
    TSubclassOf<class APawnCPP> MLplayerPawnBP;                                       // 0x0248 (size: 0x8)
    TArray<FPlayerStartingSetup> startingSetup;                                       // 0x0250 (size: 0x10)
    FMLGameInstanceOnLanguageChanged OnLanguageChanged;                               // 0x0260 (size: 0x10)
    void SimpleDynamicMulticastDelegate();
    class UDataTable* DT_Quirks;                                                      // 0x0270 (size: 0x8)
    TMap<class FName, class UDataTable*> namedTables;                                 // 0x0278 (size: 0x50)
    class UDataTable* DT_GameSetupPresets;                                            // 0x02C8 (size: 0x8)
    TArray<class UTextureRenderTarget2D*> lordArms;                                   // 0x02D0 (size: 0x10)
    TArray<FCoatOfArmsData> CoatOfArmsData;                                           // 0x02E0 (size: 0x10)
    class UDataTable* DT_CoatOfArmsDatabase;                                          // 0x02F0 (size: 0x8)
    class UMaterialInterface* coatOfArmsLinearFixerMaterial;                          // 0x02F8 (size: 0x8)
    class UMaterialInstanceDynamic* coatOfArmsLinearFixerDynamic;                     // 0x0300 (size: 0x8)
    class UMaterialInterface* simpleCoatGeneratorMaterial;                            // 0x0308 (size: 0x8)
    FString savefileToLoad;                                                           // 0x0310 (size: 0x10)
    FName scenario;                                                                   // 0x0320 (size: 0x8)
    bool aggressive_AI;                                                               // 0x0328 (size: 0x1)
    uint8 AI_behaviour;                                                               // 0x0329 (size: 0x1)
    EVictoryStatus currentGameVictoryStatus;                                          // 0x032A (size: 0x1)
    FGameSetupPreset gameSetup;                                                       // 0x0330 (size: 0x150)
    FMLGameInstanceOnStartLocationChanged onStartLocationChanged;                     // 0x0480 (size: 0x10)
    void OnStartLocationChanged();
    FMLGameInstanceOnMapChanged OnMapChanged;                                         // 0x0490 (size: 0x10)
    void MapChanged(FName NewMap);
    FMLGameInstanceOnGameSetupChanged OnGameSetupChanged;                             // 0x04A0 (size: 0x10)
    void SimpleDynamicMulticastDelegate();
    FMLGameInstanceOnGameSetupParamsChanged OnGameSetupParamsChanged;                 // 0x04B0 (size: 0x10)
    void SimpleDynamicMulticastDelegate();
    TMap<class FName, class FGameSetupMapData> PerMapSpawnData;                       // 0x04C0 (size: 0x50)
    FAudioSliders AudioSliders;                                                       // 0x0510 (size: 0x24)
    FRTSSettings Settings;                                                            // 0x0538 (size: 0xF8)
    bool alwaysShowResourceIcons;                                                     // 0x0630 (size: 0x1)
    bool bEnableEdgeScrolling;                                                        // 0x0631 (size: 0x1)
    float GrassDensity;                                                               // 0x0634 (size: 0x4)
    float grassRenderingDistance;                                                     // 0x0638 (size: 0x4)
    bool triggerQuests;                                                               // 0x063C (size: 0x1)
    bool autoIdleJobs;                                                                // 0x063D (size: 0x1)
    ENoticeSquadSetting noticeSquadSetting;                                           // 0x063E (size: 0x1)
    float zoomToCameraAmt;                                                            // 0x0640 (size: 0x4)
    class UGraphicsSettingsPresets* graphicsPresetAsset;                              // 0x0648 (size: 0x8)
    FMLGameInstanceOnChangeReported OnChangeReported;                                 // 0x0668 (size: 0x10)
    void OnChangeReported();
    bool startWithCart;                                                               // 0x0678 (size: 0x1)
    FString Version;                                                                  // 0x0680 (size: 0x10)

    bool WriteSettingsToDisk();
    void updateResourceImmediate(class UTextureRenderTarget2D* RenderTarget, bool bClearRenderTarget);
    bool UpdateMouseFocusAndLock();
    void UpdateGameSetupParameters(const FGameSetupParameters& OldParams, bool bForce);
    void updateBorderFrameDataRenderThread(class UUserWidget* Widget, class UMaterialInstanceDynamic* borderMaterialDynamic);
    void updateAchievementData(FName AchievementName, int32 Score);
    void unassignFromRegion(const FRegionData& InRegion);
    void unassignedStartLocation(const FVillageSpawnerData& InSpawner);
    void ToggleAdversary(const bool InAdversaryEnabled);
    void swapRegionOwners(const FVillageSpawnerData& InSource, const FVillageSpawnerData& InTarget);
    void sortIndexMapByDate(TMap<int32, FDateTime>& mapToSort);
    void SetZoomToCursorAmount(float zoomAmount);
    bool SetUseVolumetricCloudsOnPawn(bool newUseVolClouds);
    void SetUseVolumetricClouds(bool useVolumetricClouds);
    bool SetUseTutorialsOnPawn(bool newUseTutorials);
    void SetUseTutorials(bool useTutorials);
    void setUIScale(float NewScale);
    void setStartLocation(const FVillageSpawnerData& InSpawner, const int32 pawnIndex);
    void setRandomStartLocations(const FMapDataRow& MapData);
    void SetNumAILords(const int32 InNum);
    void SetNoticeEnemyBehaviour(int32 noticeEnemyBehaviour);
    bool SetMouseRelativePosition(float xRatio, float yRatio);
    void SetMouseLock(int32 IsLocked);
    void setLordsArms(int32 pawnIndex, class UTextureRenderTarget2D* armsRenderTarget, FCoatOfArmsData armsData);
    void SetLanguage(FName inLangTxt);
    void SetGrassRenderDistance(float newGrassRenderingDistance);
    void SetGrassDensity(float newGrassDensity);
    void SetEdgeScrolling(bool useEdgeScrolling);
    bool setDayNightCycleLightSetting(bool NewValue);
    void SetDayNightCycle(bool doCycle);
    void setCurrentMap(FName newMapOverride);
    void setCurrentGameSetup(const FGameSetupPreset& setupPreset, EGameDifficulty chosenDifficulty);
    bool SetAutosavePeriodOnPawn(float newAutosavePeriod);
    void SetAutosavePeriod(float autosavePeriod);
    void SetAlwaysShowResourceIcons(bool newAlwaysShowResources);
    bool saveCoatOfArmsImageByName(class UObject* WorldContextObject, class UTextureRenderTarget2D* coatImage, FString Filename);
    bool saveCoatOfArmsImage(class UObject* WorldContextObject, int32 armsIndex, FString saveName);
    void ReportSettingsChanged();
    bool ReadSettingsFromDisk();
    void preallocateSpawnLocations();
    bool MoveMouseToStartDefault();
    bool loadCoatOfArmsImage(int32 Index, FString saveName);
    TArray<FName> ListSupportedLanguages();
    bool IsValidPawnIndex(int32 pawnIndex);
    bool isRegionEmpty(const FRegionData& InRegionData, TArray<FVillageSpawnerData>& OutVillagesInRegion);
    bool isCurrentGameSetup(const FGameSetupPreset& setupPreset, EGameDifficulty& outDifficultyThatMatches);
    bool isCommonResolution(FVector2D Resolution);
    class UTexture2D* ImportSaveThumbnail(class UObject* WorldContextObject, FString SaveGameName);
    float getUIScale();
    FText getTranslatedTextFromDataTable(FName TextKey, class UDataTable* DataTable);
    TArray<FGood> getStartingSupplies(uint8 Level, int32& outCost);
    float getSpoilageRateFromGameSetting();
    bool GetSpawnerForRegion(const FRegionData& InRegion, FVillageSpawnerData& OutSpawner);
    void getSavedAutoSettingFloatValue(const FName& SettingName, float& OutValue);
    void getSavedAutoSettingBoolValue(const FName& SettingName, bool& OutValue);
    FString getRegionName(const FRegionData& InRegionData);
    int32 getRegionID(const FRegionData& InRegionData);
    int32 getRegionCount();
    FLinearColor getRegionColor(const FRegionData& InRegionData);
    FString getRandomName(bool female, const TArray<FString>& namesToAvoid);
    int32 GetPreset(bool& OutPresetFound);
    class UTexture2D* getPortraitByName(FName portraitName);
    class UPixelFed* getPixelFed();
    int32 GetPawnIndexForSpawner(const FVillageSpawnerData& Spawner);
    int32 getOwningPawnIndex(const FRegionData& InRegionData);
    class UDataTable* GetNamedTable(FName tableName);
    int32 getMaxAILords();
    class UTextureRenderTarget2D* getLordsArms(int32 pawnIndex);
    FString GetLordNameByIndex(const int32 InPawnIndex);
    FText getLocalizedText(FName TextKey, FName langKey, class UDataTable* DataTable);
    FString GetDisplayAppVersion();
    FString getDefaultOSLanguage();
    FName getCurrentMap();
    FCoatOfArmsData getCoatOfArmsData(int32 pawnIndex);
    FString GetAppVersion();
    class UTextureRenderTarget2D* generateSimpleCoatOfArms(int32 pawnIndex, const FCoatOfArmsData& coatData);
    void ExportSaveThumbnailRT(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, FString SaveGameName);
    void DeleteSaveThumbnail(class UObject* WorldContextObject, FString SaveGameName);
    void ApplyPreset(const uint8 InPresetVal);
}; // Size: 0x690

class UMLGameSetupMapWidget : public UUserWidget
{
    FMapDataRow Map;                                                                  // 0x02D0 (size: 0x290)
    FRegionData Region;                                                               // 0x0560 (size: 0x20)

    void SetupMapTextures();
}; // Size: 0x590

class UMLGameSetupScreen : public UNaviSubGrid
{
    FMLGameSetupScreenOnBack OnBack;                                                  // 0x0368 (size: 0x10)
    void GameSetupScreenDelegate();
    FMLGameSetupScreenOnNext OnNext;                                                  // 0x0378 (size: 0x10)
    void GameSetupScreenDelegate();

}; // Size: 0x388

class UMLGameSetupSettingWidget : public UNaviUi
{
    class USpinner* Spinner;                                                          // 0x0368 (size: 0x8)
    FMLGameSetupSettingEntry params;                                                  // 0x0370 (size: 0x48)
    class UUserWidget* ActiveToolTip;                                                 // 0x03B8 (size: 0x8)

    void SetSettingValue(const FGameSetupParameters& InValue);
    void GetSettingValue(FGameSetupParameters& InValue);
}; // Size: 0x3C0

class UMLGameStartScreen : public UNaviSubGrid
{
    FMLGameStartScreenOnBack OnBack;                                                  // 0x0368 (size: 0x10)
    void GameStartScreenDelegate();
    FMLGameStartScreenOnNext OnNext;                                                  // 0x0378 (size: 0x10)
    void GameStartScreenDelegate();
    TSubclassOf<class UCoatOfArmsLibrary> LibraryClass;                               // 0x0388 (size: 0x8)

    TSoftObjectPtr<UTexture2D> RemapCoatFgTexture(const TSoftObjectPtr<UTexture2D>& InTexture);
    TSoftObjectPtr<UTexture2D> RemapCoatDivisionTexture(const TSoftObjectPtr<UTexture2D>& InTexture);
    bool IsFemalePortrait(class UTexture2D* Texture);
    void GetFieldMaskOffsetAndScale(class UTexture2D* Texture, int32 FieldMaskIndex, FVector2D& OutOffset, FVector2D& OutScale, int32& MaxFieldIndex);
    class UUserWidget* CreatePortraitWidget(class UTexture2D* Texture);
    class UUserWidget* CreateCoatForegroundWidget(class UTexture2D* Texture);
    class UUserWidget* CreateCoatDivisionWidget(class UTexture2D* Texture);
    class UUserWidget* CreateCoatBackgroundWidget(class UTexture2D* Texture);
}; // Size: 0x390

class UMLGoodStatWidget : public UNaviUi
{
    TSoftObjectPtr<UTexture2D> CustomIcon;                                            // 0x0360 (size: 0x28)
    FText CustomDisplayName;                                                          // 0x0388 (size: 0x10)
    EItemCategory DisplayedGoodCategory;                                              // 0x0398 (size: 0x1)
    TArray<EItemSubcategory> DisplayedGoodCategories;                                 // 0x03A0 (size: 0x10)
    int32 DisplayedGood;                                                              // 0x03B0 (size: 0x4)

    bool ShouldDisplayGoodCategory();
    void NotifyGoodAmountChanged();
    bool GetShowSurplus();
    class ARegion* GetRegion();
    int32 GetGoodAmount();
    int32 GetDisplayedGoodType();
}; // Size: 0x3D0

class UMLInventoryScreen : public UNaviSubGrid
{
    class ASMBuildingMaster* building;                                                // 0x0368 (size: 0x8)
    class UDataTable* BuildingStatTable;                                              // 0x0370 (size: 0x8)
    TMap<class EInventoryTabCategory, class FSettingOption> CategoryOptions;          // 0x0378 (size: 0x50)
    TArray<class UMLInventoryTabWidget*> TabWidgets;                                  // 0x03C8 (size: 0x10)
    TMap<class EInventoryTabCategory, class USizeBox*> Categories;                    // 0x03D8 (size: 0x50)
    TMap<class EInventoryTabCategory, class UWidget*> CategoryRoot;                   // 0x0428 (size: 0x50)
    EInventoryTabCategory ActiveCategory;                                             // 0x0478 (size: 0x1)
    EInventoryTabCategory OldCategory;                                                // 0x0479 (size: 0x1)

    void UpdateVisibleCategories();
    void UpdateActiveTabs();
    void SetActiveCategory(int32 TabIndex);
    FStat GetBuildingStat();
    TArray<FSettingOption> GetAvailableCategories();
    bool CanDisplayCategory(EInventoryTabCategory InTab);
}; // Size: 0x490

class UMLInventoryTabProxyWidget : public UMLInventoryTabWidget
{
    class UNamedSlot* NamedSlot;                                                      // 0x0388 (size: 0x8)
    class UMLInventoryTabWidget* ContentWidget;                                       // 0x0390 (size: 0x8)
    TSubclassOf<class UMLInventoryTabWidget> ContentWidgetClass;                      // 0x0398 (size: 0x8)

}; // Size: 0x3A0

class UMLInventoryTabWidget : public UNaviSubGrid
{
    EInventoryTabCategory TabCategory;                                                // 0x0368 (size: 0x1)
    class UUserWidget* ParentInventory;                                               // 0x0370 (size: 0x8)
    class ASMBuildingMaster* building;                                                // 0x0378 (size: 0x8)

    void Update();
    bool ShouldDisplayTab(class ASMBuildingMaster* InBuilding, const FStat& InStat);
    EBuildingType GetNamedBuildingType();
    int32 GetBuildingType();
    FStat GetBuildingStat();
    void BP_Update();
    void BP_OnInit();
}; // Size: 0x388

class UMLMainMenuScreen : public UNaviGrid
{
    TSubclassOf<class UCoatOfArmsLibrary> LibraryClass;                               // 0x0570 (size: 0x8)

    void LoadCoatLibrary();
    bool IsCoatLibraryLoaded();
}; // Size: 0x588

class UMLMercenaryPanelWidget : public UNaviSubGrid
{
    class UHorizontalBox* MercenaryContainer;                                         // 0x0368 (size: 0x8)
    TSubclassOf<class UMLMercenaryWidget> MercenaryWidgetClass;                       // 0x0370 (size: 0x8)
    FMargin ContainerPadding;                                                         // 0x0378 (size: 0x10)
    int32 PreviewMercenaryCount;                                                      // 0x0388 (size: 0x4)
    TArray<class UMLMercenaryWidget*> MercenaryWidgets;                               // 0x0390 (size: 0x10)

    void RebuildMercenaryPanel();
    void BP_Update(int32 TotalCost);
}; // Size: 0x3A0

class UMLMercenaryWidget : public UUserWidget
{
    int32 MercenaryCompanyID;                                                         // 0x02D0 (size: 0x4)

    void BP_UpdatePaymentDate();
    void BP_Update(const FMercenaryCompany& InCompany);
}; // Size: 0x2D8

class UMLNumericTextBlock : public UCommonNumericTextBlock
{
    int32 DesiredSymbolCount;                                                         // 0x03F0 (size: 0x4)
    TEnumAsByte<EHorizontalAlignment> TextAlignment;                                  // 0x03F4 (size: 0x1)
    bool bEnableScaling;                                                              // 0x03F5 (size: 0x1)
    bool bCollapseThousands;                                                          // 0x03F6 (size: 0x1)
    bool bIncludePositiveSign;                                                        // 0x03F7 (size: 0x1)
    FString Prefix;                                                                   // 0x03F8 (size: 0x10)
    FString Suffix;                                                                   // 0x0408 (size: 0x10)
    bool bHasMaxValue;                                                                // 0x0418 (size: 0x1)
    FString MaxValuePrefix;                                                           // 0x0420 (size: 0x10)
    int32 MaxValue;                                                                   // 0x0430 (size: 0x4)
    TSubclassOf<class UMLCommonTextStyle> MLStyleClass;                               // 0x0438 (size: 0x8)
    EMLTextState State;                                                               // 0x0440 (size: 0x1)

    void SetTextState(EMLTextState InState);
    void SetMLTextStyle(TSubclassOf<class UMLCommonTextStyle> InStyleClass);
    void SetMaxValue(int32 InValue);
    void SetCurrentIntValue(int32 InValue);
    void SetCurrentAndMaxValues(int32 InCurrentValue, int32 InMaxValue);
    EMLTextState GetTextState();
}; // Size: 0x470

class UMLRegionProblemContainerWidget : public UNaviSubGrid
{
    class UHorizontalBox* Container;                                                  // 0x0368 (size: 0x8)
    TSubclassOf<class UMLRegionProblemWidget> EntryWidgetClass;                       // 0x0370 (size: 0x8)
    FMargin EntryPadding;                                                             // 0x0378 (size: 0x10)
    FMLRegionProblemStyle DefaultStyle;                                               // 0x0388 (size: 0x30)
    TArray<FMLRegionProblemStyle> ProblemArray;                                       // 0x03B8 (size: 0x10)

    void UpdateProblemList(class ARegion* Region);
}; // Size: 0x3D8

class UMLRegionProblemWidget : public UUserWidget
{
    FMLRegionProblemStyle Style;                                                      // 0x02D0 (size: 0x30)
    TArray<FSlateColor> TintColors;                                                   // 0x0300 (size: 0x10)

    FSlateColor GetTintColor();
    EProblem GetProblemType();
    void BP_UpdateStyle(const FMLRegionProblemStyle& InStyle);
    void BP_UpdateProblemCount(int32 count);
}; // Size: 0x318

class UMLResolutionChangeSubsystem : public ULocalPlayerSubsystem
{
    FMLResolutionChangeSubsystemOnScreenResolutionChanged OnScreenResolutionChanged;  // 0x0030 (size: 0x10)
    void ResolutionChangedDelegate(FVector2D ViewportSize);

    float GetAspectRatio();
}; // Size: 0x50

class UMLRichTextBlock : public URichTextBlock
{
    bool bLocalizedText;                                                              // 0x07B0 (size: 0x1)
    FText LocalizationLabel;                                                          // 0x07B8 (size: 0x10)
    class UDataTable* LocalizationTable;                                              // 0x07C8 (size: 0x8)

    void UpdateLocalization();
    bool IsLocalizedText();
}; // Size: 0x7D0

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
    TArray<FSavedResourceNode> savedResourceNodes;                                    // 0x00B8 (size: 0x10)
    TArray<FSavedDeposit> savedDeposits;                                              // 0x00C8 (size: 0x10)
    TArray<FVector> removedFoliage;                                                   // 0x00D8 (size: 0x10)
    TArray<FVein> waterVeins;                                                         // 0x00E8 (size: 0x10)
    TArray<int32> playersSquadsUIOrder;                                               // 0x00F8 (size: 0x10)
    TArray<FSavedSquad> squads;                                                       // 0x0108 (size: 0x10)
    FString LevelName;                                                                // 0x0118 (size: 0x10)
    int32 day;                                                                        // 0x0128 (size: 0x4)
    int32 year;                                                                       // 0x012C (size: 0x4)
    int32 daysTotal;                                                                  // 0x0130 (size: 0x4)
    int32 monthsTotal;                                                                // 0x0134 (size: 0x4)
    int32 rainMeter;                                                                  // 0x0138 (size: 0x4)
    float raining;                                                                    // 0x013C (size: 0x4)
    float rainingTarget;                                                              // 0x0140 (size: 0x4)
    float snowing;                                                                    // 0x0144 (size: 0x4)
    float snowingTarget;                                                              // 0x0148 (size: 0x4)
    float wetness;                                                                    // 0x014C (size: 0x4)
    float cloudiness;                                                                 // 0x0150 (size: 0x4)
    float targetCloudiness;                                                           // 0x0154 (size: 0x4)
    float snowLevel;                                                                  // 0x0158 (size: 0x4)
    bool isDrought;                                                                   // 0x015C (size: 0x1)
    float droughtLevel;                                                               // 0x0160 (size: 0x4)
    float gameTimeAdjusted;                                                           // 0x0164 (size: 0x4)
    uint64 gameTicksAdjusted;                                                         // 0x0168 (size: 0x8)
    int32 daysUntilNextRaid;                                                          // 0x0170 (size: 0x4)
    int32 daysSinceLastRaid;                                                          // 0x0174 (size: 0x4)
    TArray<FVector> toppledTrees;                                                     // 0x0178 (size: 0x10)
    TArray<FVector2D> toppledTrees2D;                                                 // 0x0188 (size: 0x10)
    FString Version;                                                                  // 0x0198 (size: 0x10)
    FString startedVersion;                                                           // 0x01A8 (size: 0x10)
    int32 saveVersion;                                                                // 0x01B8 (size: 0x4)
    FSessionAchievementData SessionAchievementData;                                   // 0x01C0 (size: 0x30)
    TArray<FName> issuedStoryQuests;                                                  // 0x01F0 (size: 0x10)
    TArray<FSavedRelationsTag> relationshipTags;                                      // 0x0200 (size: 0x10)
    FName scenario;                                                                   // 0x0210 (size: 0x8)
    uint8 AI_behaviour;                                                               // 0x0218 (size: 0x1)
    bool triggerQuests;                                                               // 0x0219 (size: 0x1)
    TArray<FSavedMercenaryCompany> availableMercs;                                    // 0x0220 (size: 0x10)
    TArray<FSavedMercenaryCompany> hiredMercs;                                        // 0x0230 (size: 0x10)
    TMap<int32, FSavedMercenaryCompany> HiredMercenaryCompanies;                      // 0x0240 (size: 0x50)
    bool enableFertilityGrid;                                                         // 0x0290 (size: 0x1)
    TArray<FLinearColor> fertilityGrid;                                               // 0x0298 (size: 0x10)
    TArray<FColor> fertilityGridQuantized;                                            // 0x02A8 (size: 0x10)
    TArray<FLinearColor> fertilityGridLimits;                                         // 0x02B8 (size: 0x10)
    TArray<FColor> fertilityGridLimitsQuantized;                                      // 0x02C8 (size: 0x10)
    FGameSetupPreset gameSetup;                                                       // 0x02D8 (size: 0x150)
    TArray<FSavedChallenge> challenges;                                               // 0x0428 (size: 0x10)
    TMap<int32, FSavedCamera> savedCameraLocations;                                   // 0x0438 (size: 0x50)
    TArray<FName> tutorialsLeftToShow;                                                // 0x0488 (size: 0x10)
    TArray<FSavedGood> ForeignMarketSupply;                                           // 0x0498 (size: 0x10)
    EVictoryStatus currentGameVictoryStatus;                                          // 0x04A8 (size: 0x1)
    int32 kingsFavour_daysLeft;                                                       // 0x04AC (size: 0x4)
    int32 lastBanditCampSpawnedDay;                                                   // 0x04B0 (size: 0x4)
    int32 scenario_nextActionDay;                                                     // 0x04B4 (size: 0x4)
    TArray<FTradeLogEntry> tradeLog;                                                  // 0x04B8 (size: 0x10)
    TArray<FProductionLog> productionLogs;                                            // 0x04C8 (size: 0x10)

}; // Size: 0x4D8

class UMLSaveGameDescr : public USaveGame
{
    FDateTime date;                                                                   // 0x0028 (size: 0x8)
    FString Version;                                                                  // 0x0030 (size: 0x10)
    FString startedVersion;                                                           // 0x0040 (size: 0x10)
    int32 saveVersion;                                                                // 0x0050 (size: 0x4)
    int32 UserIndex;                                                                  // 0x0054 (size: 0x4)
    FString LevelName;                                                                // 0x0058 (size: 0x10)
    FString saveName;                                                                 // 0x0068 (size: 0x10)
    FString saveSlot;                                                                 // 0x0078 (size: 0x10)
    int32 UncompressedSize;                                                           // 0x0088 (size: 0x4)

}; // Size: 0x90

class UMLSaveLoadMenuScreen : public UNaviSubGrid
{
    FMLSaveLoadMenuScreenOnClosed OnClosed;                                           // 0x0368 (size: 0x10)
    void GameSetupScreenDelegate();
    class UVerticalBox* ContentVB;                                                    // 0x0388 (size: 0x8)
    FMargin SaveGameSlotMargin;                                                       // 0x0390 (size: 0x10)
    double CreateSlotViewTimeStep;                                                    // 0x03A0 (size: 0x8)
    TArray<class UMLSaveGameDescr*> NamedSlots;                                       // 0x03A8 (size: 0x10)
    TMap<int32, UUserWidget*> SlotViews;                                              // 0x03B8 (size: 0x50)
    TArray<FSaveGameSlot> SortedSlotsByDate;                                          // 0x0408 (size: 0x10)
    bool bCreateSlotViews;                                                            // 0x0418 (size: 0x1)

    void StartSlotDiscovery();
    void StartCreatingSlotViews();
    FString SlotNameFromIndex(int32 SlotIndex);
    void SetSaveMode(bool bInSaveMode);
    void RequestClose();
    void RenameSaveSlot(const FSaveGameSlot& InSlot, FString NewSaveName);
    void OnSlotViewCreationDone();
    void OnGameSlotSaved(int32 SlotIndex);
    class UUserWidget* GetSlotView(const FSaveGameSlot& InSlot);
    FString GetFreeSlotName();
    int32 GetFreeSlotIndex();
    void DeleteSaveSlot(const FSaveGameSlot& InSlot);
    class UUserWidget* CreateSaveGameSlotView(const FSaveGameSlot& SaveGameSlot, bool bCanRename);
    bool CanRenameSlot(int32 SlotIndex);
    void AddToContentVB(class UUserWidget* Widget);
}; // Size: 0x420

class UMLSeasonTimerWidget : public UNaviSubGrid
{

    void UpdateCurrentMonth();
}; // Size: 0x368

class UMLSharedToolTipContainerWidget : public UUserWidget
{
    class UNamedSlot* ToolTipSlot;                                                    // 0x02D0 (size: 0x8)
    TArray<class UWidgetAnimation*> WidgetAnimations;                                 // 0x02D8 (size: 0x10)

}; // Size: 0x328

class UMLSharedToolTipSettings : public UDeveloperSettings
{
    TSoftClassPtr<UMLSharedToolTipContainerWidget> ContainerClass;                    // 0x0038 (size: 0x28)
    FName DefaultOpenAnimation;                                                       // 0x0060 (size: 0x8)

}; // Size: 0x68

class UMLSharedToolTipSubsystem : public ULocalPlayerSubsystem
{
    class UMLSharedToolTipContainerWidget* ToolTipContainer;                          // 0x0038 (size: 0x8)
    TMap<class UClass*, class UUserWidget*> SharedToolTips;                           // 0x0040 (size: 0x50)
    TMap<class FGameplayTag, class UMLToolTipAnchor*> ToolTipAnchorMap;               // 0x0090 (size: 0x50)

    void ShowToolTip(class UWidget* ToolTipSource);
    void SetSharedToolTipWithParams(class UWidget* InForWidget, const FMLSharedToolTipInitParams& InParams);
    void SetSharedToolTipArray(const TArray<class UWidget*>& InWidgets, TSubclassOf<class UUserWidget> ToolTipClass);
    void SetSharedToolTip(class UWidget* InForWidget, TSubclassOf<class UUserWidget> ToolTipClass, class UUserWidget* ToolTipSource);
    void HideAllTooltips();
}; // Size: 0x170

class UMLSplashWidget : public UUserWidget
{
    FIntVector CurrentResolution;                                                     // 0x02D0 (size: 0xC)

    void UpdateDisplayedTexture(bool bIsWideScreen);
}; // Size: 0x2E0

class UMLTextBlock : public UCommonTextBlock
{
    bool bLocalizedText;                                                              // 0x0350 (size: 0x1)
    FText LocalizationLabel;                                                          // 0x0358 (size: 0x10)
    class UDataTable* LocalizationTable;                                              // 0x0368 (size: 0x8)
    TOptional<FLinearColor> OverrideColor;                                            // 0x0370 (size: 0x14)
    TSubclassOf<class UMLCommonTextStyle> MLStyleClass;                               // 0x0388 (size: 0x8)
    EMLTextState State;                                                               // 0x0390 (size: 0x1)

    void UpdateLocalization();
    void SetTextState(EMLTextState InState);
    void SetOverrideColor(const FLinearColor& InColor);
    void SetMLTextStyle(TSubclassOf<class UMLCommonTextStyle> InStyleClass);
    void SetLocalizationTable(class UDataTable* InLocalizationTable);
    void ResetOverrideColor();
    bool IsLocalizedText();
    EMLTextState GetTextState();
    FText GetLocalizationLabel();
}; // Size: 0x3A0

class UMLToolTipAnchor : public UMenuAnchor
{
    FGameplayTag AnchorTag;                                                           // 0x01D0 (size: 0x8)
    FName OpenAnimation;                                                              // 0x01D8 (size: 0x8)

    class UUserWidget* GetMenuContent();
}; // Size: 0x1E8

class UMLWidgetBlueprintLibrary : public UWidgetBlueprintLibrary
{

    FText KfyNumber(int32 Value);
    bool IsSaveDeprecated(const class UMLSaveGameDescr* InDesc);
    bool IsDesignTime(const class UUserWidget* Context);
    FString GetRawEnumName_MaintenanceEffect(const EMaintenanceEffect Value);
    FString GetRawEnumName(const EAffinityType Affinity);
}; // Size: 0x28

class UMaintenanceComponent : public UActorComponent
{

    void SetSliderValue(const int32 InSliderValue);
    TArray<FMaintenanceTypes> GetTrackedMaintenanceTypes();
    EMaintenanceSliderValue GetSliderValueAsEnum();
    int32 GetSliderValue();
    EMaintenanceStatus GetMaintenanceStatusForTypes(const FMaintenanceTypes& InMaintenanceTypes);
    EMaintenanceStatus GetMaintenanceStatus();
    float GetMaintenancePercentage(const FMaintenanceTypes& InMaintenanceTypes);
    int32 GetMaintenanceDurationInDays(const FMaintenanceTypes& InMaintenanceTypes);
    FMaintenanceSupply GetMaintenanceDataForGoodTypes(const FMaintenanceTypes& InMaintenanceTypes, const bool bReturnValueWithModifiers, const bool bIncludeSliderModifier);
    float GetFinalMaintenanceRateModifierValue(const bool bIncludeFrequencyModifier);
    TArray<FMaintenanceTypes> GetDynamicMaintenanceTypes();
    TMap<class EMaintenanceCombo, class EMaintenanceEffect> GetDynamicMaintenanceEffects();
    TArray<FMaintenanceSupply> GetDynamicMaintenanceData();
    int32 GetDaysRemainingUntilMaintenanceRequired(const FMaintenanceTypes& InMaintenanceTypes);
    TMap<EMaintenanceRateModifier, int32> GetAdditionalMaintenanceRateModifiersInPercents(bool bIncludeSliderEffect);
    EMaintenanceEffect GetActiveMaintenanceEffect();
    bool DoesBuildingNeedMaintaining();
}; // Size: 0x100

class UMaintenanceSettings : public UDeveloperSettings
{
    int32 MaintenancePendingDays;                                                     // 0x0038 (size: 0x4)
    int32 MaintenanceEffectRatesInPercents;                                           // 0x003C (size: 0x24)

    int32 GetMaintenanceEffectValue(EMaintenanceEffect InEffect);
}; // Size: 0x60

class UMapDataExporterSettings : public UDeveloperSettings
{
    TSoftObjectPtr<UMaterialParameterCollection> PaperMapCollection;                  // 0x0038 (size: 0x28)
    TSoftObjectPtr<UDataTable> MapDataTable;                                          // 0x0060 (size: 0x28)
    TSoftObjectPtr<UMaterialInterface> whiteMat;                                      // 0x0088 (size: 0x28)
    TSoftObjectPtr<UMaterialInterface> blackMat;                                      // 0x00B0 (size: 0x28)
    TSoftObjectPtr<UMaterialInterface> roadMaskMat;                                   // 0x00D8 (size: 0x28)
    TSoftObjectPtr<UMaterialInterface> editorBorderMat;                               // 0x0100 (size: 0x28)

}; // Size: 0x128

class UPaperMapFunctionLibrary : public UBlueprintFunctionLibrary
{

    void togglePaperMap(const class UWorld* inWorld, const bool InVisible, const FMapDataRow& SourceMapData);
    FVector2D StartLocationToPaperMapScreenLocation(const FVector& WorldLocation, const FMapBounds& Bounds, float Resolution);
    void repaintRegionMask(class UObject* WorldContextObject, class UTextureRenderTarget2D* RenderTarget, const TArray<FVector2D>& Vertices, FLinearColor Color);
    float GetWorldSize(const FMapBounds& Bounds);
    class UTexture2D* BuildMippedTextureFromRenderTarget(class UTextureRenderTarget2D* InSourceImage);
}; // Size: 0x28

class UParticleSystemSettings : public UDeveloperSettings
{
    TSoftObjectPtr<UNiagaraSystem> PS_UnitMoveConfirmation;                           // 0x0038 (size: 0x28)
    TMap<class FName, class TSoftObjectPtr<UParticleSystem>> ParticleSystems;         // 0x0060 (size: 0x50)

}; // Size: 0xB0

class UPerkBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{

    FString tryGetPerkNameFromYieldModifier(class UDataTable* perkTable, FString modifierName);
}; // Size: 0x28

class UPerkComponent : public UActorComponent
{
    class UPerkSettings* PerkSettings;                                                // 0x0140 (size: 0x8)

    bool IsPerkSlotUnlocked(const EPerkSlot InPerkSlot);
    int32 GetSettlementLevelRequiredForPerkSlot(const EPerkSlot InPerkSlot);
    FName GetPerkForPerkEffectByString(FString InPerkEffect);
    FName GetPerkForPerkEffect(const EPerkEffect InPerkEffect);
    TArray<EPerkSlot> GetAllPerkSlotTypes();
    FName GetActivePerkInSlot(const EPerkSlot Slot);
    EPerkSlot FindUnlockablePerkSlot();
}; // Size: 0x198

class UPerkEffectLibrary : public UWidgetBlueprintLibrary
{

    bool IsPerkEffectNegative(EPerkEffect PerkEffet);
}; // Size: 0x28

class UPerkHelperLibrary : public UBlueprintFunctionLibrary
{

    bool IsEffectActive(const TScriptInterface<class IRegionProviderInterface>& InRegionProvider, const EPerkEffect InPerkToQuery);
}; // Size: 0x28

class UPerkSettings : public UDeveloperSettings
{
    TSoftObjectPtr<UDataTable> PerkDT;                                                // 0x0038 (size: 0x28)
    TSet<EPerkEffect> DisabledEffects;                                                // 0x0060 (size: 0x50)
    TSet<EBuildingType> RuralBuildings;                                               // 0x00B0 (size: 0x50)
    TSet<EBuildingType> CraftsmenBuildings;                                           // 0x0100 (size: 0x50)
    TSet<EUpgradeType> HomesteadUpgrades;                                             // 0x0150 (size: 0x50)
    TSet<EItemType> RawResources;                                                     // 0x01A0 (size: 0x50)
    float CropYieldBonus;                                                             // 0x01F0 (size: 0x4)
    uint32 ProjectileBonusMultiplier;                                                 // 0x01F4 (size: 0x4)
    float BackyardAgricultureBonus;                                                   // 0x01F8 (size: 0x4)
    float IncreaseImmigrationRate;                                                    // 0x01FC (size: 0x4)
    FPotentialFactor MoraleBoost;                                                     // 0x0200 (size: 0xC)
    float AdditionalInfluence;                                                        // 0x020C (size: 0x4)
    float Lv1BurgageWealthMultiplier;                                                 // 0x0210 (size: 0x4)
    float RegionWealthFromTradeBuff;                                                  // 0x0214 (size: 0x4)
    uint32 RegionalWealthBonusForBurgagePlot;                                         // 0x0218 (size: 0x4)
    float CheaperBurgagePlotModifier;                                                 // 0x021C (size: 0x4)
    float BackyardAgricultureNerf;                                                    // 0x0220 (size: 0x4)
    uint32 TerrainKnowledgeCombatMultiplier;                                          // 0x0224 (size: 0x4)
    float TaxationApprovalReduction;                                                  // 0x0228 (size: 0x4)
    float IncreasedVillagerWalkSpeed;                                                 // 0x022C (size: 0x4)
    uint8 IncreasedBasicItemPriceMultiplier;                                          // 0x0230 (size: 0x1)
    float IncreasedTillSpeedModifier;                                                 // 0x0234 (size: 0x4)
    float DecreasedLoggerSpeedMultiplier;                                             // 0x0238 (size: 0x4)
    uint8 ChanceSuccessfulTreePlant;                                                  // 0x023C (size: 0x1)
    float DecreasedMaintenanceMultiplier;                                             // 0x0240 (size: 0x4)
    int32 YieldBonus;                                                                 // 0x0244 (size: 0x4)
    float GrowthBonus;                                                                // 0x0248 (size: 0x4)
    int32 GainedInfluenceFromTrading;                                                 // 0x024C (size: 0x4)
    int32 MaxAmountOfInfluenceFromTradingPerMonth;                                    // 0x0250 (size: 0x4)
    int32 AdditionalFamiliesForForagingHuts;                                          // 0x0254 (size: 0x4)
    int32 AdditionalSheepYield;                                                       // 0x0258 (size: 0x4)
    uint32 InterestRateOnRegionalWealth;                                              // 0x025C (size: 0x4)
    uint32 InfluenceGainedFromSpendingRegionalWealth;                                 // 0x0260 (size: 0x4)
    uint32 GoodFoodVarietyApprovalMultiplier;                                         // 0x0264 (size: 0x4)
    float flatProficiencyApprovalBuff;                                                // 0x0268 (size: 0x4)
    float RuralProficiencyApprovalBuff;                                               // 0x026C (size: 0x4)
    float ProficiencyGainedPerNeighbourRegion;                                        // 0x0270 (size: 0x4)
    float AcceptableDistanceToRiver;                                                  // 0x0274 (size: 0x4)
    uint32 CloseToRiverRegionalWealthBonus;                                           // 0x0278 (size: 0x4)
    uint32 ChurchRegionalWealthBonus;                                                 // 0x027C (size: 0x4)
    uint32 HigherLevelChurchWealthBonus;                                              // 0x0280 (size: 0x4)
    float CraftsmenWithFilledAdditionalLivingSpaceProficiency;                        // 0x0284 (size: 0x4)
    float ProficiencyBonusForSmallHolding;                                            // 0x0288 (size: 0x4)
    uint32 CoinageTaxIncreasePercentage;                                              // 0x028C (size: 0x4)
    uint32 CoinageRegionalWealthDecreasePercentage;                                   // 0x0290 (size: 0x4)
    uint32 DecreasedInfluenceForSettlementPercentage;                                 // 0x0294 (size: 0x4)
    float DecreasedApprovalForPublicWeaponsBan;                                       // 0x0298 (size: 0x4)
    float IncreaseOfProficiencyForPublicWeaponsBan;                                   // 0x029C (size: 0x4)
    float RawResourcePriceReduction;                                                  // 0x02A0 (size: 0x4)
    float TaxGenerationReduction;                                                     // 0x02A4 (size: 0x4)
    TMap<EPerkEffect, float> PerkEffectBonuses;                                       // 0x02A8 (size: 0x50)

}; // Size: 0x2F8

class UPixelFed : public UObject
{
    FPixelFedState State;                                                             // 0x0028 (size: 0x60)
    class UMLGameInstance* backbone;                                                  // 0x0088 (size: 0x8)
    FPixelFedUponSetupFinished uponSetupFinished;                                     // 0x0090 (size: 0x10)
    void PixelFedSetupFinished();

    void ReportInFullscreenmenu(bool inMenu);
    TArray<EPixelFedBackendId> ListAllPotentialBackends();
    bool HasSetupFinished();
    bool GetShowFps();
    void FindFps(const class UObject* WorldContext, float& fps, float& fpsSmoothed);
    bool FindBackendIdByName(FString backendName, EPixelFedBackendId& backendId);
    bool FindBackendByName(FString backendName, FPixelFedBackend& backend);
    bool FindBackendActiveOrPreferredQuality(EPixelFedBackendId backendId, FName& Quality);
    bool FindBackendActiveOrPreferredFramegen(EPixelFedBackendId backendId, FName& framegen);
    bool FindActiveBackendName(FString& backendName);
    bool FindActiveBackendId(EPixelFedBackendId& backendId);
    void DoSetScreenPercentageNonOverriding(float ScreenPercentage);
    void DoReconfigureBackend(FPixelFedConfiguration request, bool isPlayerPrefernce);
    FPixelFedFullChoiceState ComputeFullState();
}; // Size: 0xA0

class UPolicySettings : public UDeveloperSettings
{
    TArray<EPolicyType> BasePolicyTypes;                                              // 0x0038 (size: 0x10)

}; // Size: 0x48

class UProceduralFoliageSettings : public UDeveloperSettings
{
    TArray<FProceduralGroundCoverData> proceduralGroundCoverTypes;                    // 0x0038 (size: 0x10)
    TSoftObjectPtr<UStaticMesh> groundCoverDistributionSocketMesh;                    // 0x0048 (size: 0x28)
    int32 numberOfCameraGroundCoverCellColumnsHalf;                                   // 0x0070 (size: 0x4)
    float cameraBasedGroundCoverCellSize;                                             // 0x0074 (size: 0x4)

}; // Size: 0x78

class UProductionGraphLabel : public UUserWidget
{

    void InitFromText(const FText& InText);
    void InitFromDate(const int32 InDay, const int32 InMonth, const int32 InYear);
}; // Size: 0x2D0

class UProductionPanelTooltip : public UUserWidget
{

    void InitFromStockCount(const FLogDate& InDate, const TArray<FGood>& InStock);
    void InitFromEntry(const FLogDate& InDate, const TArray<FGood>& InProduction, const TArray<FGood>& InConsumption);
}; // Size: 0x2D0

class UProductionSubsystem : public UWorldSubsystem
{

    void OnRegionRenamed(class ARegion* InRegion, FString InNewName);
}; // Size: 0x58

class UProductionTrackerComponent : public UActorComponent
{
    int64 DateCreated;                                                                // 0x00A0 (size: 0x8)
    FProductionTrackerComponentOnNewTimeTracked OnNewTimeTracked;                     // 0x00A8 (size: 0x10)
    void OnNewTimeTracked();
    FProductionTrackerComponentOnNewProductionAdded OnNewProductionAdded;             // 0x00B8 (size: 0x10)
    void OnNewProductionAdded();
    class AWeatherMaster* weatherMasterPtr;                                           // 0x0118 (size: 0x8)
    TArray<FProductionTimeEntry> timeEntries;                                         // 0x0120 (size: 0x10)

    void setWeatherMasterPtr(class AWeatherMaster* inWeatherMasterPtr);
    EYieldStatus GetYieldStatus();
    float GetTotalTime();
    TArray<int32> GetTimePercentagesForAllCategories();
    int32 GetTimePercentageForSpecificCategory(const EProductionCategory InCategory);
    TArray<FProductionTimeEntry> getTimeEntries();
    int32 GetNumberOfGoodTypesInLog();
    TMap<int32, int32> getGoodsProducedOver(const int64 NumDays);
    TArray<FProductionTrackerEntry> GetEntriesOfItemType(const int32 ItemType);
    int64 ageOfBuildingInDays();
}; // Size: 0x158

class UProductionTrackerSettings : public UDeveloperSettings
{
    TArray<FProductionTimeEntry> productionTimeCategories;                            // 0x0038 (size: 0x10)
    int32 ExcellentYieldStatusValue;                                                  // 0x0048 (size: 0x4)
    int32 GreatYieldStatusValue;                                                      // 0x004C (size: 0x4)
    int32 GoodYieldStatusValue;                                                       // 0x0050 (size: 0x4)
    int32 AverageYieldStatusValue;                                                    // 0x0054 (size: 0x4)
    int32 PoorYieldStatusValue;                                                       // 0x0058 (size: 0x4)
    int32 TerribleYieldStatusValue;                                                   // 0x005C (size: 0x4)

}; // Size: 0x60

class UProductivitySettings : public UDeveloperSettings
{
    TMap<EProductivityModifier, int32> ProductivityModifierPercentValues;             // 0x0038 (size: 0x50)

}; // Size: 0x88

class UProficiencyComponent : public UActorComponent
{
    FProficiencyComponentOnProficiencyChanged OnProficiencyChanged;                   // 0x00A0 (size: 0x10)
    void OnProficiencyChanged(float OldProficiency, float NewProficiency);
    class UMaintenanceComponent* MaintenanceComponent;                                // 0x00C0 (size: 0x8)
    class UExpertiseComponent* ExpertiseComponent;                                    // 0x00C8 (size: 0x8)
    class UPerkSettings* PerkSettings;                                                // 0x02E0 (size: 0x8)
    class UProficiencySettings* ProficiencySettings;                                  // 0x02E8 (size: 0x8)

    void UpdateProficiency();
    int32 GetProficiencyFromMaintenanceState(const class UMaintenanceComponent* InComponent);
    float GetProductivityMultiplier();
    TArray<FProductivityFactor> GetProductivityFactors();
    FProductivityBracket GetCurrentBracket();
}; // Size: 0x2F8

class UProficiencySettings : public UDeveloperSettings
{
    int32 MinExperiencePerCraft;                                                      // 0x0038 (size: 0x4)
    int32 ExperienceCap;                                                              // 0x003C (size: 0x4)
    float ExpertiseDecayRate;                                                         // 0x0040 (size: 0x4)
    float MaxEffectiveProficiency;                                                    // 0x0044 (size: 0x4)
    TArray<FProductivityBracket> ProductivityBrackets;                                // 0x0048 (size: 0x10)
    TArray<FArtisanData> ArtisanBrackets;                                             // 0x0058 (size: 0x10)
    int32 ProductivityCap;                                                            // 0x0068 (size: 0x4)

}; // Size: 0x70

class URaidSettings : public UDeveloperSettings
{
    TArray<FName> defaultRaidIDs;                                                     // 0x0038 (size: 0x10)
    TArray<FName> eliteRaidIDs;                                                       // 0x0048 (size: 0x10)

}; // Size: 0x58

class URegionDevelopmentEntry : public UUserWidget
{
    class UButton* SelectButton;                                                      // 0x02D0 (size: 0x8)
    FRegionDevelopmentEntryOnSelectedSig OnSelectedSig;                               // 0x02D8 (size: 0x10)
    void OnDevelopmentEntrySelected();

    void UpdateLockedState(const int32 InCurrentRegionSettlementLevel);
    void OnSelected();
}; // Size: 0x2E8

class URegionDevelopmentPanel : public UNaviSubGrid
{
    FRegionDevelopmentPanelOnSettlementLevelSelected OnSettlementLevelSelected;       // 0x0368 (size: 0x10)
    void OnSettlementLevelSelected();
    class URegionDevelopmentEntry* ClickedEntry;                                      // 0x0390 (size: 0x8)

    void UpdateAllEntryLockedStates();
    void SetRegion(class ARegion* InRegion);
    void OnEntrySelected();
    class ARegion* GetRegion();
}; // Size: 0x398

class URegionDevelopmentPerkEntry : public UUserWidget
{
    FRegionDevelopmentPerkEntryOnPerkEntryHovered OnPerkEntryHovered;                 // 0x02D0 (size: 0x10)
    void OnPerkEntryHovered(const FName InPerkType);
    FRegionDevelopmentPerkEntryOnPerkEntryClicked OnPerkEntryClicked;                 // 0x02E0 (size: 0x10)
    void OnPerkEntryClicked(const FName InPerkType);
    FName PerkToApply;                                                                // 0x02F0 (size: 0x8)

    void InitialiseFromType(const FName InPerkName);
}; // Size: 0x2F8

class URegionDevelopmentPerksPanel : public UNaviSubGrid
{
    EPerkSlot PerkSlot;                                                               // 0x0368 (size: 0x1)
    class UWrapBox* PerksContainer;                                                   // 0x0370 (size: 0x8)
    class UDataTable* TechDataTable;                                                  // 0x0378 (size: 0x8)
    class UDataTable* TranslatedTechDataTable;                                        // 0x0380 (size: 0x8)
    TSubclassOf<class URegionDevelopmentPerkEntry> PerkEntryTemplate;                 // 0x0388 (size: 0x8)

    void UpdatePanel(const FName InPerkName);
    void SetSelectedPerkName(const FName InPerkName);
    void SetRegion(class ARegion* InRegion);
    void PerkSelectionAccepted();
    void OnPerkEntryHovered(const FName InPerkName);
    void OnPerkEntryClicked(const FName InPerkName);
    bool IsPerkActive(const FName& PerkName);
    FName GetSelectedPerkName();
    void GeneratePerks();
    void ConfirmPerkSelection(const FName InPerkName);
}; // Size: 0x3A0

class URegionProductionPanel : public UNaviSubGrid
{
    TSubclassOf<class URegionProductionStockEntry> StockEntryWidgetClass;             // 0x0368 (size: 0x8)
    TSubclassOf<class UProductionGraphLabel> ProductionGraphLabelClass;               // 0x0370 (size: 0x8)
    TSubclassOf<class UGraphDataPoint> GraphDataPointClass;                           // 0x0378 (size: 0x8)
    TSubclassOf<class UProductionPanelTooltip> ToolTipClass;                          // 0x0380 (size: 0x8)
    class UDataTable* ItemsDataTable;                                                 // 0x0388 (size: 0x8)
    class UVerticalBox* StockEntriesBox;                                              // 0x0390 (size: 0x8)
    class URadioSelect* TimespanSelect;                                               // 0x0398 (size: 0x8)
    class URadioSelect* CategorySelect;                                               // 0x03A0 (size: 0x8)
    class URadioSelect* GraphTypeSelect;                                              // 0x03A8 (size: 0x8)
    class UCanvasPanel* GraphCanvas;                                                  // 0x03B0 (size: 0x8)
    class UCanvasPanel* GraphDataPoints;                                              // 0x03B8 (size: 0x8)
    class UImage* GraphLines;                                                         // 0x03C0 (size: 0x8)
    class URadioSelect* ClearFilterButton;                                            // 0x03C8 (size: 0x8)
    FProductionGraphGenerator GraphGenerator;                                         // 0x03D0 (size: 0x100)
    FLinearColor CategoryColours;                                                     // 0x04D0 (size: 0xD0)
    class ARegion* Region;                                                            // 0x05E0 (size: 0x8)
    class UProductionSubsystem* ProductionSubsystem;                                  // 0x05E8 (size: 0x8)
    TArray<FTrackedItem> TrackedItems;                                                // 0x05F0 (size: 0x10)
    TArray<FPlottedGood> Plots;                                                       // 0x0600 (size: 0x10)
    TArray<class UUserWidget*> Labels;                                                // 0x0610 (size: 0x10)
    TArray<class UUserWidget*> DataPoints;                                            // 0x0620 (size: 0x10)
    class UImage* ProductionPlot;                                                     // 0x0690 (size: 0x8)
    class UImage* ConsumptionPlot;                                                    // 0x0698 (size: 0x8)
    class UImage* BalancedPlot;                                                       // 0x06A0 (size: 0x8)
    class UImage* StocksPlot;                                                         // 0x06A8 (size: 0x8)

    void UpdateXYLines(const FVector2D& InLocation, const bool IsOverGraph);
    void SetupTestEntries();
    void SetRegion(class ARegion* InRegion);
    void OnTrackStateChanged(const FGood& InGood, const bool InIsTracked);
    void OnTimespanChanged(FString InValue);
    void OnGraphTypeChanged(FString InValue);
    void OnCategoryChanged(FString InValue);
    void ClearFilters(FString InValue);
}; // Size: 0x6B0

class URegionProductionStockEntry : public UUserWidget
{
    FGood Good;                                                                       // 0x02D0 (size: 0x18)

    void UpdateDelta(const int32 InDelta, const int32 InTotal, const int32 InProduced, const int32 InConsumed);
    void ReportTrackingChanged(const bool InNewTrackedState);
    void InitialiseFromGood(const FGood& InGood, const bool InIsTracked);
}; // Size: 0x300

class UResidentialRequirementSettings : public UDeveloperSettings
{
    TArray<FRequirementsPerLevel> UpgradeRequirementsPerLevel;                        // 0x0038 (size: 0x10)
    TArray<FRequirementsPerLevel> TriggeringThresholdsPerLevel;                       // 0x0048 (size: 0x10)
    TSoftObjectPtr<UTexture2D> SupplyCategoryIcons;                                   // 0x0058 (size: 0x140)

    TArray<FName> GetThingsSupplyingRequirement(const FRequirementCollection InCollection);
    TSoftObjectPtr<UTexture2D> GetIconForSupplyCategory(const EResidentialRequirement InSupplyCategory);
    TArray<int32> GetAllPossibleItemsForSupplyCategory(const EResidentialRequirement InSupplyCategory);
}; // Size: 0x198

class UResourceSettings : public UDeveloperSettings
{
    float startleDistance;                                                            // 0x0038 (size: 0x4)
    float resourceDepositRadius;                                                      // 0x003C (size: 0x4)
    float resourceRichDepositRadius;                                                  // 0x0040 (size: 0x4)
    float MapDecalWorldSize;                                                          // 0x0044 (size: 0x4)
    float MapDecalWorldSizeRich;                                                      // 0x0048 (size: 0x4)
    int32 ElevationPercentage;                                                        // 0x004C (size: 0x4)
    int32 ElevationDeathPercentage;                                                   // 0x0050 (size: 0x4)
    TArray<ENodeType> MineableNodes;                                                  // 0x0058 (size: 0x10)
    TArray<FResourceNodeData> ResourceNodeData;                                       // 0x0068 (size: 0x10)
    float ResourceClumpCollisionRadius;                                               // 0x0078 (size: 0x4)
    TSoftObjectPtr<UCurveFloat> TreeFallingCurve;                                     // 0x0080 (size: 0x28)
    float TreeHitGroundTimeOffset;                                                    // 0x00A8 (size: 0x4)
    TMap<class FName, class TSubclassOf<AResource>> ResourceClumpTemplates;           // 0x00B0 (size: 0x50)

    FResourceNodeProperties GetPropertiesForType(ENodeType Type);
}; // Size: 0x100

class URoadSettings : public UDeveloperSettings
{
    float RoadHalfWidth;                                                              // 0x0038 (size: 0x4)
    float DecalSize;                                                                  // 0x003C (size: 0x4)
    TSoftObjectPtr<UStaticMesh> DecalMesh;                                            // 0x0040 (size: 0x28)
    TSoftObjectPtr<UMaterialInterface> OnRoadMaterial;                                // 0x0068 (size: 0x28)
    TSoftObjectPtr<UMaterialInterface> DefaultDecalMaterial;                          // 0x0090 (size: 0x28)

}; // Size: 0xB8

class USaveSettings : public UDeveloperSettings
{
    int32 saveVersion;                                                                // 0x0038 (size: 0x4)

}; // Size: 0x40

class USharedStaticMeshSettings : public UDeveloperSettings
{
    TArray<TSoftObjectPtr<UStaticMesh>> DoorsPoor;                                    // 0x0038 (size: 0x10)
    TArray<TSoftObjectPtr<UStaticMesh>> DoorsMedium;                                  // 0x0048 (size: 0x10)
    TArray<TSoftObjectPtr<UStaticMesh>> GatesBig;                                     // 0x0058 (size: 0x10)
    TSoftObjectPtr<UStaticMesh> AffinityZoneBorder;                                   // 0x0068 (size: 0x28)
    TMap<class ECropType, class TSoftObjectPtr<UStaticMesh>> CropStaticMeshes;        // 0x0090 (size: 0x50)
    TMap<class EUnitRole, class TSoftClassPtr<ASMUnit>> UnitBlueprints;               // 0x00E0 (size: 0x50)
    TMap<class FName, class TSoftObjectPtr<UParticleSystem>> ParticleSystems;         // 0x0130 (size: 0x50)
    TSubclassOf<class UCameraShakeBase> CameraShake;                                  // 0x0180 (size: 0x8)
    TSoftObjectPtr<UDataTable> DT_BuildingPartAssemblies;                             // 0x0188 (size: 0x28)
    TMap<int32, float> BuildingPartFacadeWidths;                                      // 0x01B0 (size: 0x50)
    TMap<class ELordGender, class TSoftObjectPtr<USkeletalMesh>> LordsMeshes;         // 0x0200 (size: 0x50)

}; // Size: 0x250

class USicknessSettings : public UDeveloperSettings
{
    uint8 InjuryRecoveryTime;                                                         // 0x0038 (size: 0x1)

}; // Size: 0x40

class USnapDebris : public UActorComponent
{
    TSet<ASnapDebrisActor*> activeDebris;                                             // 0x00A0 (size: 0x50)
    class UDataTable* debrisTable;                                                    // 0x00F0 (size: 0x8)

    bool ReplaceActor(FName debrisName, class AActor* actorToReplace, bool destroyReplacedActor);
    int32 CleanupDebris(FVector Location, float MaxRange, FName FilterName);
    bool AtTransform(FName debrisName, FTransform tr);
    bool AtLocationRotation(FName debrisName, FVector Location, FRotator Rotation);
}; // Size: 0xF8

class USpatialComponent : public UActorComponent
{
    TArray<FObstacle2D> Obstacles;                                                    // 0x0290 (size: 0x10)

}; // Size: 0x470

class UTradeSettings : public UDeveloperSettings
{
    float baseTradeValue;                                                             // 0x0038 (size: 0x4)
    uint32 importFee;                                                                 // 0x003C (size: 0x4)
    TMap<ETradeModifier, int32> TradeModifierValuesInPercents;                        // 0x0040 (size: 0x50)

}; // Size: 0x90

class UTxtLoaderWidget : public UWidgetComponent
{
}; // Size: 0x660

class UUnitMovementComponent : public UActorComponent
{
}; // Size: 0xA0

class UUnitPlacementGraph : public UActorComponent
{
}; // Size: 0x110

class UUnitRoleLibrary : public UWidgetBlueprintLibrary
{

    bool IsWildAnimal(EUnitRole unitRole);
}; // Size: 0x28

class UUnitSettings : public UDeveloperSettings
{
    TArray<ETaskType> AllowedTasks;                                                   // 0x0038 (size: 0x10)

}; // Size: 0x48

class UVAISMExtra : public UVAISMController
{
}; // Size: 0x370

class UVampRuntimeExtra : public UVARuntimeComponent
{
}; // Size: 0x3F8

class UWindSettings : public UDeveloperSettings
{
    float UpdateFrequency;                                                            // 0x0038 (size: 0x4)
    float windStrengthMultipler;                                                      // 0x003C (size: 0x4)
    FVector2D strengthRandRange;                                                      // 0x0040 (size: 0x10)

}; // Size: 0x50

class UWindmillComponent : public UActorComponent
{

    float GetNaturalEfficiency();
}; // Size: 0xE0

class UYieldModifierSettings : public UDeveloperSettings
{
    TMap<EYieldModifier, float> YieldModifierValues;                                  // 0x0038 (size: 0x50)

}; // Size: 0x88

#endif
