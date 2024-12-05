// Copyright Butenko Evgeny Anatolevich w4ee44@gmail.com 2023

#pragma once

#include "Engine/DataTable.h"
#include "TimerManager.h"
#include "Components/ActorComponent.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Pawn.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMaterialLibrary.h"

#include "Structure/IQS_Types.h"
#include "Widgets/SingleElems/IQS_QuestMarkerBase.h"

#include "IQS_QuestSystemComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_SevenParams(FQuestStateChanged, FName, QuestId, FName, ObjectiveTag, EQuestState, NewQuestState, FQuestType, QuestInfo, FPlayerProgress, QuestProgress, bool, IsNextQuestSequence, bool, IsTrackedQuestDone);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRemoveTrackedQuest, FName, QuestId);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGetExpAndMoneyReward, const TArray<FNumericRewards>&, NewExpAndMoneyReward);

UCLASS(BlueprintType, Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class IMPROVEDQUESTSYSTEM_API UIQS_QuestSystemComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	//<Methods>

	// Main function to operate with quests - call it when player Get quest, reach an objective, finish quests and other.
	// Arguments:
	// QuestId - main quest id from QuestTable
	// State - state of a quest: QuestNotStarted, GotQuest, QuestDoneButNotFinished, QuestFinished, QuestOneStepAdd, QuestOneStepMinus
	// ObjectiveTag - When quest objective are reached, this tag defines which part of a quest sequence are done. You can leave it untouched for an easy quests with one objective in sequence
	// NoCheck - determines, will it be checked or not. For example, if you choose it on "true" and player finish the objective for the quest he hasn't received yet, quest will be automaticly started. If you choose "false", then finishing the objective will be skipped, because player dont have this quest
	// IsSuccess - in here there will be returned a result of success/unsuccess a QuestComplete function execution
	// IsSilent - if it is TRUE, it will not show any notifications after call this function
	UFUNCTION(BlueprintCallable, Category = "Main Methods")
	void QuestComplete(FName QuestId, EQuestState State, FName ObjectiveTag, bool NoCheck, bool& IsSuccess, bool IsSilent = false);

	//Add step for quest by only ObjectiveTag without a QuestId - usefull when some item is objective for many quests at the same time
	UFUNCTION(BlueprintCallable, Category = "Main Methods")
	void QuestAddStepOnlyByTag(FName ObjectiveTag, bool IsMinusStep, bool NoCheck, bool& IsSuccess);

	//Updating Screen and Minimap marker postions
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	//Returns a QuestState of choosen quest
	UFUNCTION(BlueprintCallable, Category = "Main Methods")
	EQuestState GetQuestState(FName QuestId, bool& IsFound, int& CurrentSequence);

	//Reload a save and fill the PlayerProgress array accordingly with QuestTable. Should be always called at the start of the game. Very inportant if you changed a QuestTable data
	UFUNCTION(BlueprintCallable, Category = "Main Methods")
	void ResetPlayerProgress();

	//Save the player progress to the save file
	UFUNCTION(BlueprintCallable, Category = "Main Methods")
	void SaveProgress();

	//load the player progress from the save file
	UFUNCTION(BlueprintCallable, Category = "Main Methods")
	void LoadProgress();

	//Main checker function - finds out, could be this quest recieved or perform a reaching the objective for this quest
	UFUNCTION(BlueprintCallable, Category = "Main Methods")
	bool CanTakeQuest(FName QuestId, EQuestState State, FName ObjectiveTag);

	//Check if previos quests are done
	UFUNCTION(BlueprintCallable, Category = "Main Methods")
	bool IsCanTakeQuestByQuestsNeedToFinishToTake(FName QuestId);

	//Check if there is a quests, wich blocks this quest
	UFUNCTION(BlueprintCallable, Category = "Main Methods")
	bool IsCanTakeQuestByQuestsMustNotBeFinishedToTake(FName QuestId);

	//Returns the player progress for this quest from the PlayerProgress
	UFUNCTION(BlueprintCallable, Category = "Main Methods")
	FPlayerProgress GetQuestProgress(FName QuestId, bool& IsFound);

	//Returns the quest info for this quest from the QuestTable
	UFUNCTION(BlueprintCallable, Category = "Main Methods")
	FQuestType GetQuestInfo(FName QuestId, bool& IsFound);

	//Return all the quest data for a QuestLog by types: InProgressQuests, FinishedQuests, NotStartedQuests
	UFUNCTION(BlueprintCallable, Category = "Main Methods")
	TArray<FQuestLogInfo> GetQuestLog(EQuestLogTypes QuestLogType);

	//Create Reward Actor
	UFUNCTION()
	void CreateRewardActor(TSubclassOf<AIQS_RewardActor> NewRewardActor);

	//On Save n Blueprint event
	UFUNCTION(BlueprintNativeEvent)
	void OnSave_BP();

	//On Load n Blueprint event
	UFUNCTION(BlueprintNativeEvent)
	void OnLoad_BP();

	//Remove a tracked quest from the TrackedQuestIds
	UFUNCTION(BlueprintCallable, Category = "Main Methods")
	void RemoveTrackedQuest(FName QuestId);

	//Add tracked quest to a TrackedQuestIds
	UFUNCTION(BlueprintCallable, Category = "Main Methods")
	void AddTrackedQuest(FName QuestId);

	//CopyPlayerProgressWithoutTrackedQuests for multiplayer
	UFUNCTION(BlueprintCallable, Category = "Main Methods")
	void CopyPlayerProgressWithoutTrackedQuests(TArray<FPlayerProgress> NewPlayerProgress);

	//Find door actors to other level with limit steps
	UFUNCTION(BlueprintCallable, Category = "Main Methods")
	TArray<AActor*> FindDoorsToObjectiveLocation(FName ObjectiveLevelId);

	TArray<AActor*> FindDoorsToObjectiveLocationRecurse(FName ObjectiveLevelId, int* CurrentStepCount, TArray<FName>* AlreadyChecked);

	//Make QuestLog type
	UFUNCTION(BlueprintCallable, Category = "Main Methods")
	FQuestLogInfo MakeQuestLogInfo(FPlayerProgress NewQuestProgress, FQuestType NewQuestType);

	//If player, owning this component - is locally controlled
	UFUNCTION(BlueprintCallable, Category = "Main Methods")
	bool IsOwnerLocallyControlledCpp();

	//If player, owning this component - is a server
	UFUNCTION(BlueprintCallable, Category = "Main Methods")
	bool IsOwnerHasAuthority();

	//Find out, if player finished an objective in a quest
	UFUNCTION(BlueprintCallable, Category = "Main Methods")
	bool IsObjectiveCompleted(FName QuestId, FName ObjectiveTag, int& PlayerHave, int& PlayerNeeds);

	//Convert Player Progress from Arr to Map
	UFUNCTION(BlueprintCallable, Category = "Main Methods")
	TMap<FName, FPlayerProgress> ConvertPlayerProgressArrToMap(TArray<FPlayerProgress> CurrentPlayerProgress);

	//Convert Player Progress from Map to Arr
	UFUNCTION(BlueprintCallable, Category = "Main Methods")
	TArray<FPlayerProgress> ConvertPlayerProgressMapToArr(TMap<FName, FPlayerProgress> CurrentPlayerProgress);

	UFUNCTION(BlueprintCallable, Category = "Main Methods")
	void AddSmoothUpdateMarker(UIQS_QuestMarkerBase* MarkerRef);

	UFUNCTION(BlueprintCallable, Category = "Main Methods")
	void RefreshSmoothUpdateMarkers();

	void RemoveSmoothUpdateMarker(UIQS_QuestMarkerBase* MarkerRef);
	//</Methods>

	//<Delegates>
	UPROPERTY(BlueprintAssignable)
	FQuestStateChanged QuestStateChanged;

	UPROPERTY(BlueprintAssignable)
	FOnRemoveTrackedQuest OnRemoveTrackedQuest;

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnGetExpAndMoneyReward OnGetExpAndMoneyReward;
	//</Delegates>

	//<Variables>
	//Main player progress array - goes to the Save Game
	UPROPERTY(BlueprintReadWrite, Category = "Default")
	TMap<FName, FPlayerProgress> PlayerProgressMap;

	//Main quest table path - all quests must be filled here
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Variables")
	UDataTable* QuestTable;

	//Will hide mouse in game (useful in First Person Template games, Racing games, Third Person Template Games)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Variables")
	bool WillHideMouseInGame = true;

	//Will show mouse in UI - should be false for GamePad games
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Variables")
	bool WillShowMouseInUI = true;

	//Show or hide screen markers
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Variables")
	bool WillShowScreenMarks = true;

	//Show or hide compass widget
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Variables")
	bool WillShowCompassMarks = true;

	//Show or hide minimap widget
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Variables")
	bool WillShowMinimap = true;

	//Will Minimap turn with a player
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Variables")
	bool WillMinimapTurnWithPlayer = true;

	//Max tracked quests count
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Variables")
	int MaxTrackedQuestsNum = 5;

	//Skip a stage where quest delivers to an NPC
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Variables")
	bool WillSkipQuestDoneButNotFinishedStage = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Variables")
	bool IsFogOfWarEnabled = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Variables StartGameSettings")
	FString StartNameFirstLevel = "L_Demonstration";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Variables StartGameSettings")
	FVector StartPlayerLocationOnFirstLevel = FVector(0.f, 0.f, 92.f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Variables StartGameSettings")
	FRotator StartPlayerRotationOnFirstLevel = FRotator::ZeroRotator;

	//Will save the progress in file
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Variables SaveLoad")
	bool WillSave = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Variables SaveLoad")
	FString SaveGameSlotName = "SaveSlot_QuestSystemComponent";

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Variables SaveLoad")
	int CurrentUserIndexForSave = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Variables SaveLoad")
	bool WillNotifyWhenSaved = true;

	//Door marker standart style
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Variables MarkerStyles")
	FStructIconSelector StandartDoorMarker;

	//New quest marker standart style
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Variables MarkerStyles")
	FStructIconSelector StandartNewQuestMarker;

	//Standart Got Quest Marker
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Variables MarkerStyles")
	FStructIconSelector StandartGotQuestMarker;

	//Quest done but not finished standart style
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Variables MarkerStyles")
	FStructIconSelector StandartQuestDoneButNotFinished;

	//Map of Level - Doors to other levels
	//Example:
	//1) OpenWorld - House0, House1, Castle0
	//2) House0 - OpenWorld, Cave
	//3) Cave - House0
	//4) House1 - OpenWorld
	//5) Castle0 - OpenWorld
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Variables CrossLevelDoorMapping")
	TMap<FName, FMapNamesArray> CrossLevelDoorMapping;

	//Minimap settings for this level
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Variables CrossLevelDoorMapping")
	TArray <FMinimapLevelSettings> MinimapLevelSettings;

	//Maximum steps for determining the path to the goal between the doors. Function is recursive, so we need some limiter to exclude endless cycles on the big projects. But you can easy up this value
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Variables CrossLevelDoorMapping")
	int MaxCrossLevelDoorMappingStepCount = 1000;

	//Sound on getting new quest
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Variables Sounds")
	USoundBase* GotQuestSound;

	//Sound on next quest sequence
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Variables Sounds")
	USoundBase* NextSequenceSound;

	//Sound on objective minus
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Variables Sounds")
	USoundBase* ObjectiveAddOrMinusSound;

	//Sound on quest completed before return to NPC
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Variables Sounds")
	USoundBase* QuestCompletedButNotFinishedSound;

	//Sound for quest finish
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Variables Sounds")
	USoundBase* QuestFinishedSound;

	//Player progress for debug
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Variables Debug")
	TArray<FPlayerProgress> PlayerProgressDebug;

	//Is debug mode on
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Variables Debug")
	bool IsInDebugMode = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Variables Debug")
	bool IsNoCinematicsInDebugMode = false;

	//Level will be loaded on debug mode
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Variables Debug")
	FString DebugLevelName;

	//Player pawn transform on debug mode
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Main Variables Debug")
	FTransform DebugTransform;

	//Tracked quests list
	UPROPERTY(BlueprintReadWrite, Category = "UnEditable")
	TArray<FName> TrackedQuestIds;

	//Already played cinematics
	UPROPERTY(BlueprintReadWrite, Category = "UnEditable")
	TArray<FName> CinematicsPlayed;

	//Order number of a quest, that determines an order of quest showns by the Quest Log Widget
	UPROPERTY(BlueprintReadWrite, Category = "UnEditable")
	int QuestOrderNumber = 0;

	UPROPERTY(EditAnywhere, Category = "UnEditable")
	UMaterialParameterCollection* MP_MinimapRef;

	UPROPERTY(BlueprintReadWrite, Category = "UnEditable-TickMarkers")
	TArray<UIQS_QuestMarkerBase*> QuestScreenMarkersArrCpp;

	UPROPERTY(BlueprintReadWrite, Category = "UnEditable-TickMarkers")
	TArray<UIQS_QuestMarkerBase*> WorldScreenMarkersArrCpp;

	UPROPERTY(BlueprintReadWrite, Category = "UnEditable-TickMarkers")
	TArray<UIQS_QuestMarkerBase*> QuestMinimapMarkersArrCpp;

	UPROPERTY(BlueprintReadWrite, Category = "UnEditable-TickMarkers")
	TArray<UIQS_QuestMarkerBase*> WorldMinimapMarkersArrCpp;

	UPROPERTY(BlueprintReadWrite, Category = "UnEditable-TickMarkers")
	TArray<UIQS_QuestMarkerBase*> SmoothUpdateMarkersCpp;
	//</Variables>

private:
	bool IsHaveNotFinishedObjectivesInThisQuestSequence(FName QuestId, int SequenceNumber);
};
