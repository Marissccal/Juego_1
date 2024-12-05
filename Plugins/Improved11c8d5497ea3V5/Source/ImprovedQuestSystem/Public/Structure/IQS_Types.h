// Copyright Butenko Evgeny Anatolevich w4ee44@gmail.com 2023

#pragma once

#include "Engine/DataTable.h"
#include "Materials/MaterialInstance.h"
#include "Kismet/BlueprintFunctionLibrary.h"

#include "IQS_Types.generated.h"

class AIQS_RewardActor;

//Quest Current State
UENUM(BlueprintType)
enum class EQuestState : uint8
{ 
	QuestNotStarted = 0,
	GotQuest = 1,
	QuestDoneButNotFinished = 2,
	QuestFinished = 3,
	QuestOneStepAdd = 4,
	QuestOneStepMinus = 5
};

//Markers widgets main types
UENUM(BlueprintType)
enum class EMarkersMainTypes : uint8
{
	ScreenMarker = 0,
	CompassMarker = 1,
	MinimapMarker = 2
};

//Quest log output types
UENUM(BlueprintType)
enum class EQuestLogTypes : uint8
{
	InProgressQuests = 0,
	FinishedQuests = 1,
	NotStartedQuests = 2,
	MainQuests = 3,
	SideQuests = 4
};

UENUM(BlueprintType)
enum class ECompassComparisonResult : uint8
{
	IsMore = 0,
	IsEqual = 1,
	IsLess = 2
};

USTRUCT(BlueprintType)
struct FNumericRewards
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	FName RewardId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	int Count = 0;
};

USTRUCT(BlueprintType)
struct FMapNamesArray
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	TArray<FName> NamesArr;
};

USTRUCT(BlueprintType)
struct FDirectionInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	FName Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	float WorldRotation = 0.0f;
};

USTRUCT(BlueprintType)
struct FStructIconSelector
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	UMaterialInstance* IconAsMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	UTexture2D* IconAsTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	FLinearColor Texture_Color = FLinearColor(1.0f, 1.0f, 1.0f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	FLinearColor AdditionalColorToMapIcon = FLinearColor(1.0f, 1.0f, 1.0f, 0.75f);
};

//minimap
USTRUCT(BlueprintType)
struct FMinimapLevelSettings
{
	GENERATED_BODY()

	//Level name
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	FString LevelName;

	//Link to material instance with level minimap texture choosed in MI params
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	UMaterialInterface* MinimapLevelMaterialInstance;

	//Additional texture for a zone map
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	UTexture2D* ZoneMapTexture;

	//Name of a zone for this map
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	FText NameLocation;

	//World size maximum X
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	float Minimap_World_X_Size = 8000.0f;

	//World size maximum Y
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	float Minimap_World_Y_Size = 8000.0f;

	//Minimap Relative Size X
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	float MinimapRelativeSize_X = 0.2f;

	//Minimap Relative Size Y
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	float MinimapRelativeSize_Y = 0.2f;

	//Minimap Relative Size X
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	float MinMinimapScale = 0.25f;

	//Minimap Relative Size Y
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	float MaxMinimapScale = 1.0f;

	//Offset of minimap texture X
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	float MinimapOffset_X = 0.0f;

	//Offset of minimap texture Y
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	float MinimapOffset_Y = 0.0f;

	//Rotator texture for material. 0.25f = -90 degree
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	float MinimapAddConstantRotator = 0.25f;

	//Rotation of the minimap markers
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	float MinimapMarksRotator = -90.0f;

	//Minimap World Scale. For a big maps this value should be lower
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	float MinimapWorldScale = 1.0f;

	//Player Coords Offset X for levels, wich start not in 0.0.0
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	float PlayerCoordsOffsetX = 0.0f;

	//Player Coords Offset Y for levels, wich start not in 0.0.0
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	float PlayerCoordsOffsetY = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	float FogOfWarRadiusMultiplier = 256.0f;
};

//Quest items simple struct
USTRUCT(BlueprintType)
struct FQuestObjectiveTarget
{
	GENERATED_BODY()
	
	//Objective name
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainSettings")
	FText DisplayName;

	//How many this objectives need to complete the quest
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainSettings")
	int CountToComplete = 0;

	//QuestItemTag of quest objective. You need to call "QuestComplete(QuestId, EQuestState::QuestOneStepAdd, QuestItemTag, false)" when player reaches the objective for a quest QuestId
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainSettings")
	FName QuestItemTag;

	//Point where quest finishing
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainSettings")
	FVector PointQuestToFinish;

	//This is uneditable - component uses this variable for saving player progress for a quests
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "MainSettings")
	int PlayerCount = 0;

	//Icon for an objective. Displayes at the screen, compass and minimap as marker
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "VisualSettings")
	FStructIconSelector IconObjective;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainSettings")
	bool IsIgnoreObjectiveIcons = false;
};

USTRUCT(BlueprintType)
struct FDoorPointsByLevels
{
	GENERATED_BODY()

	//Level name, where does the door lead 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	FName LevelName;

	//Point in the world on current level, where door is
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	FVector DoorToLevelPoint;
};

USTRUCT(BlueprintType)
struct FSequenceMaster
{
	GENERATED_BODY()

	//Name of a Sequence
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sequence")
	FText Title;

	//About a Sequence
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sequence")
	FText Description;

	//Level where quest finishing
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sequence")
	FName LevelNameWhereQuestTarget;

	//Will skip GetActorByClassWithTag and shows a point marker first
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sequence")
	bool IsShowinLocationPointFirst = false;

	//Door to level where quest is. You can use it only if real door actor is not exist in a world (bcs of WorldPartition, for example)
	//Example:
	// 0) [L_Main] = [100.0f, 100.0f, 50.0f]; - at level L_Main marker on a door for this quest will be at coords [100.0f, 100.0f, 50.0f]
	// 1) [L_House] = [500.0f, 200.0f, 10.0f];
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sequence")
	TArray<FDoorPointsByLevels> DoorToLevelPoints;

	//Items for done quest with count
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sequence")
	TArray<FQuestObjectiveTarget> ObjectiveTargets;

	//Function name will be called on server in QuestComponent when quest sequence will be done
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sequence")
	FName NameFunctionCallToFinish;
};


//Progress of player to save game
USTRUCT(BlueprintType)
struct FPlayerProgress
{
	GENERATED_BODY()
	
	//QuestId must be equal table main row
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	FName QuestId;
	
	//Quest Current State
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	EQuestState QuestState = EQuestState::QuestNotStarted;

	//Current step of a quest
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default")
	int CurrentSequence = 0;
	
	//The quest sequences
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sequence")
	TArray<FSequenceMaster> Sequences;

	//Order number of a quest, that determines an order of quest showns by the Quest Log Widget
	UPROPERTY(BlueprintReadWrite, Category = "Uneditable")
	int OrderNumber = 0;

	//Is tracked
	UPROPERTY(BlueprintReadWrite, Category = "Uneditable")
	bool IsTracked = false;
};

//Main Quests Table
USTRUCT(BlueprintType)
struct FQuestType : public FTableRowBase
{
	GENERATED_BODY()
	
	//QuestId must be equal table main row
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainSettings")
	FName QuestId;

	//Name of a quest
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainSettings")
	FText Name;

	//About a quest
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainSettings")
	FText About;
	
	//Is it not a quest, but an achievment - it will not be showed in a quest log.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainSettings")
	bool IsHidden = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainSettings")
	FStructIconSelector QuestLogWidget;

	//Array of Names of quests needs to be done for take this quest
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainSettings")
	TArray<FName> QuestsNeedToFinishToTake;

	//Array of Names of quests wich should be not finished for take this quest
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainSettings")
	TArray<FName> QuestsMustNotBeFinishedToTake;
	
	//Main quest or Side
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainSettings")
	bool IsMainQuest = true;

	//If it is true, then quest will be Finished without a returning to a quest giver NPC when all objectives finished
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainSettings")
	bool WillSkipStageQuestDoneButNotFinished = false;

	//Reward actor will be spawned and destroyed when quest will be done
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainSettings")
	TSubclassOf<AIQS_RewardActor> RewardActor;

	//Numerical rewards for the ques, example: [Exp = 100], [Gold = 10]
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainSettings")
	TArray<FNumericRewards> ExpAndMoneyReward;

	//Function name will be called on server  in QuestComponent when quest will be done
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainSettings")
	FName NameFunctionCallWhenPlayerGotQuest;

	//Can this quest be cancelld or not
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainSettings")
	bool IsCanBeCanceled = true;

	//Function name will be called on server in QuestComponent when quest will be canceled
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainSettings")
	FName NameFunctionCallWhenPlayerCancelQuest;

	//Min player level to get the quest (set your player level in BP to functions "UpdateOverlappedWorldMarkers", in object ".../Blueprints/Components/BP_IQS_MarkerActorComponent" and ".../Blueprints/InteractionExamples/NPCQuestGiver/BP_IQS_NPC_QuestGiverBase"
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MainSettings")
	int MinLevelToGet = 0;

	//Sound setting
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SoundSettings")
	bool PlayGotQuestSound = true;

	//Sound setting
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SoundSettings")
	bool PlayObjectiveAddOrMinusSound = true;

	//Sound setting
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SoundSettings")
	bool PlayNextSequenceSound = true;
	
	//Sound setting
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SoundSettings")
	bool PlayQuestCompletedButNotFinishedSound = true;

	//Sound setting
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SoundSettings")
	bool PlayQuestFinishedSound = true;
	
	//Tag in NPC wich starts this quest
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NpcSettings-Start")
	FName NpcTagWhereStart;

	//Point where is NPC wich starts this quest
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NpcSettings-Start")
	FVector PointWhereNpcStart;

	//NPC Name wich starts this quest
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NpcSettings-Start")
	FText NpcQuestNameToStart;

	//Level where is NPC wich starts this quest
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NpcSettings-Start")
	FString LevelNameWhereNpcStart;

	//Icon for an NPC quest starter
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NpcSettings-Start")
	FStructIconSelector IconNpcStart;

	//Level Sequence Actor tag, wich may play when player start the quest
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NpcSettings-Start")
	FName CinematicStartQuestTag;

	//Quest completion text for NPC
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NpcSettings-Finish")
	FText QuestFinishAbout;

	//Tag in NPC wich ends this quest
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NpcSettings-Finish")
	FName NpcTagWhereFinish;

	//Point where is NPC wich ends this quest
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NpcSettings-Finish")
	FVector PointWhereNpcFinish;

	//NPC Name wich ends this quest
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NpcSettings-Finish")
	FText NpcQuestNameToFinish;

	//Level where is NPC wich ends this quest
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NpcSettings-Finish")
	FString LevelNameWhereNpcFinish;

	//Door to level where quest is. You can use it only if real door actor is not exist in a world (bcs of WorldPartition, for example)
	//Example:
	// 0) [L_Main] = [100.0f, 100.0f, 50.0f]; - at level L_Main marker on a door for this quest will be at coords [100.0f, 100.0f, 50.0f]
	// 1) [L_House] = [500.0f, 200.0f, 10.0f];
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NpcSettings-Finish")
	TArray<FDoorPointsByLevels> DoorToLevelPointsWhereNpcFinish;

	//Icon for an NPC quest ender
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NpcSettings-Finish")
	FStructIconSelector IconNpcEnd;

	//Level Sequence Actor tag, wich may play when player ends the quest
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "NpcSettings-Finish")
	FName CinematicFinishQuestTag;

	//The quest sequences
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sequence")
	TArray<FSequenceMaster> Sequences;
};

//Quest full info for QuestLog
USTRUCT(BlueprintType)
struct FQuestLogInfo
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Default")
	FQuestType QuestInfo;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Default")
	FPlayerProgress PlayerProgress;
};

UCLASS()
class IMPROVEDQUESTSYSTEM_API UIQS_Types : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
};
