// Copyright Butenko Evgeny Anatolevich w4ee44@gmail.com 2023

#include "Components/IQS_QuestSystemComponent.h"
#include "RewardActor/IQS_RewardActor.h"

#include "Kismet/GameplayStatics.h"

void UIQS_QuestSystemComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	AActor* PlayerActor = UGameplayStatics::GetPlayerPawn((const UObject*)GetWorld(), 0);
	if (IsValid(PlayerActor))
	{
		//Updating Screen and Minimap marker postions
		const FVector PlayerLoc = PlayerActor->GetActorLocation();
		FLinearColor PlayerLocColor = UKismetMaterialLibrary::GetVectorParameterValue(GetWorld(), MP_MinimapRef, FName("Player Location"));
		const FVector PlayerMinimapLoc = FVector(PlayerLocColor.R, PlayerLocColor.G, 0.0f);

		const FRotator PlayerRot = PlayerActor->GetActorRotation();
		for (int i = 0; i < QuestScreenMarkersArrCpp.Num(); i++)
		{
			if (IsValid(QuestScreenMarkersArrCpp[i]))
			{
				QuestScreenMarkersArrCpp[i]->UpdateStateCpp(PlayerLoc, PlayerRot, PlayerMinimapLoc);
			}
		}
		for (int i = 0; i < WorldScreenMarkersArrCpp.Num(); i++)
		{
			if (IsValid(WorldScreenMarkersArrCpp[i]))
			{
				WorldScreenMarkersArrCpp[i]->UpdateStateCpp(PlayerLoc, PlayerRot, PlayerMinimapLoc);
			}
		}
		for (int i = 0; i < QuestMinimapMarkersArrCpp.Num(); i++)
		{
			if (IsValid(QuestMinimapMarkersArrCpp[i]))
			{
				QuestMinimapMarkersArrCpp[i]->UpdateStateCpp(PlayerLoc, PlayerRot, PlayerMinimapLoc);
			}
		}
		for (int i = 0; i < WorldMinimapMarkersArrCpp.Num(); i++)
		{
			if (IsValid(WorldMinimapMarkersArrCpp[i]))
			{
				WorldMinimapMarkersArrCpp[i]->UpdateStateCpp(PlayerLoc, PlayerRot, PlayerMinimapLoc);
			}
		}
		for (int i = 0; i < SmoothUpdateMarkersCpp.Num(); i++)
		{
			if (IsValid(SmoothUpdateMarkersCpp[i]))
			{
				SmoothUpdateMarkersCpp[i]->UpdateStateCpp(PlayerLoc, PlayerRot, PlayerMinimapLoc);
			}
		}
	}

	//Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UIQS_QuestSystemComponent::QuestComplete(FName QuestId, EQuestState State, FName ObjectiveTag, bool NoCheck, bool& IsSuccess, bool IsSilent)
{
	IsSuccess = false;

	//If player doing a progress on the quest
	if (State == EQuestState::QuestOneStepAdd || State == EQuestState::QuestOneStepMinus)
	{
		//If complete step without a tag is not choosen
		if (ObjectiveTag != FName("None"))
		{
			//Check is player can do this quest (if Nocheck is false)
			if (NoCheck || CanTakeQuest(QuestId, State, ObjectiveTag))
			{
				//Looking for a quest
				auto CurrentPP = PlayerProgressMap.Find(QuestId);
				if (CurrentPP)
				{
					//Looking for an objective
					if ((*CurrentPP).Sequences.IsValidIndex((*CurrentPP).CurrentSequence))
					{
						for (int j = 0; j < (*CurrentPP).Sequences[(*CurrentPP).CurrentSequence].ObjectiveTargets.Num(); j++)
						{
							//If objective founded
							if ((*CurrentPP).Sequences[(*CurrentPP).CurrentSequence].ObjectiveTargets[j].QuestItemTag == ObjectiveTag && (*CurrentPP).Sequences[(*CurrentPP).CurrentSequence].ObjectiveTargets[j].PlayerCount < (*CurrentPP).Sequences[(*CurrentPP).CurrentSequence].ObjectiveTargets[j].CountToComplete)
							{
								if (State == EQuestState::QuestOneStepAdd)
								{
									//Cant do more num objectives than CountToComplete
									if ((*CurrentPP).Sequences[(*CurrentPP).CurrentSequence].ObjectiveTargets[j].PlayerCount >= (*CurrentPP).Sequences[(*CurrentPP).CurrentSequence].ObjectiveTargets[j].CountToComplete)
									{
										return;
									}
									(*CurrentPP).Sequences[(*CurrentPP).CurrentSequence].ObjectiveTargets[j].PlayerCount++;
								}
								else
								{
									//Not minusing if count is on 0
									if ((*CurrentPP).Sequences[(*CurrentPP).CurrentSequence].ObjectiveTargets[j].PlayerCount <= 0)
									{
										return;
									}
									(*CurrentPP).Sequences[(*CurrentPP).CurrentSequence].ObjectiveTargets[j].PlayerCount--;
								}

								//If player did 5/5 objectives
								if ((*CurrentPP).Sequences[(*CurrentPP).CurrentSequence].ObjectiveTargets[j].PlayerCount >= (*CurrentPP).Sequences[(*CurrentPP).CurrentSequence].ObjectiveTargets[j].CountToComplete)
								{
									//Squence ends, all objectives are done
									if (!IsHaveNotFinishedObjectivesInThisQuestSequence(QuestId, (*CurrentPP).CurrentSequence))
									{
										//Call function on end sequence
										FName FunctionNameToCall = (*CurrentPP).Sequences[(*CurrentPP).CurrentSequence].NameFunctionCallToFinish;
										if (FunctionNameToCall != FName("None") && IsOwnerLocallyControlledCpp())
										{
											UFunction* const func = FindFunction(FunctionNameToCall);
											if (func && func->ParmsSize == 0)
											{
												FTimerDelegate Delegate;
												Delegate.BindUFunction(this, FunctionNameToCall);
												Delegate.Execute();
											}
										}

										IsSuccess = true;
										int NextSequenceNum = (*CurrentPP).CurrentSequence + 1;

										//If can finish all the quest
										if (!(*CurrentPP).Sequences.IsValidIndex(NextSequenceNum))
										{
											//Current tracked quest is done
											bool TrackedQuestDone = TrackedQuestIds.Find(QuestId) != -1;
											FQuestType ThisQuestInfo = GetQuestInfo(QuestId, IsSuccess);

											if (IsSuccess)
											{
												//If player wants to skip a stage with returning to the NPC
												if (WillSkipQuestDoneButNotFinishedStage || ThisQuestInfo.WillSkipStageQuestDoneButNotFinished)
												{
													//Create reward actor
													CreateRewardActor(ThisQuestInfo.RewardActor);

													(*CurrentPP).QuestState = EQuestState::QuestFinished;
													(*CurrentPP).CurrentSequence = 0;
													if (!IsSilent)
													{
														QuestStateChanged.Broadcast(QuestId, ObjectiveTag, EQuestState::QuestFinished, GetQuestInfo(QuestId, IsSuccess), (*CurrentPP), false, TrackedQuestDone);
													}
												}
												else
												{
													(*CurrentPP).QuestState = EQuestState::QuestDoneButNotFinished;
													(*CurrentPP).CurrentSequence = 0;
													if (!IsSilent)
													{
														QuestStateChanged.Broadcast(QuestId, ObjectiveTag, EQuestState::QuestDoneButNotFinished, GetQuestInfo(QuestId, IsSuccess), (*CurrentPP), false, TrackedQuestDone);
													}
												}
											}
										}
										else //Go to the next sequence
										{
											(*CurrentPP).CurrentSequence = NextSequenceNum;
											if (!IsSilent)
											{
												QuestStateChanged.Broadcast(QuestId, ObjectiveTag, EQuestState::QuestOneStepAdd, GetQuestInfo(QuestId, IsSuccess), (*CurrentPP), true, false);
											}
										}
									}
									else //Not all objectives are done
									{
										if (!IsSilent)
										{
											QuestStateChanged.Broadcast(QuestId, ObjectiveTag, EQuestState::QuestOneStepAdd, GetQuestInfo(QuestId, IsSuccess), (*CurrentPP), false, false);
										}
									}
								}
								else //Player not completed this objective yet
								{
									IsSuccess = true;
									if (!IsSilent)
									{
										QuestStateChanged.Broadcast(QuestId, ObjectiveTag, EQuestState::QuestOneStepAdd, GetQuestInfo(QuestId, IsSuccess), (*CurrentPP), false, false);
									}
								}

								//Save if it choosed
								if (WillSave)
								{
									SaveProgress();
								}

								return;
							}
						}
					}
				}
			}
		}
		else
		{
			//If complete step without a tag is not choosen
			//Check is player can do this quest (if Nocheck is false)
			if (NoCheck || CanTakeQuest(QuestId, State, ObjectiveTag))
			{
				//Looking for a quest
				auto CurrentPP = PlayerProgressMap.Find(QuestId);
				if (CurrentPP)
				{
					//Looking for an objective
					if ((*CurrentPP).Sequences.IsValidIndex((*CurrentPP).CurrentSequence))
					{
						for (int j = 0; j < (*CurrentPP).Sequences[(*CurrentPP).CurrentSequence].ObjectiveTargets.Num(); j++)
						{
							//If objective founded
							if ((*CurrentPP).Sequences[(*CurrentPP).CurrentSequence].ObjectiveTargets[j].PlayerCount < (*CurrentPP).Sequences[(*CurrentPP).CurrentSequence].ObjectiveTargets[j].CountToComplete)
							{
								if (State == EQuestState::QuestOneStepAdd)
								{
									//Cant do more num objectives than CountToComplete
									if ((*CurrentPP).Sequences[(*CurrentPP).CurrentSequence].ObjectiveTargets[j].PlayerCount >= (*CurrentPP).Sequences[(*CurrentPP).CurrentSequence].ObjectiveTargets[j].CountToComplete)
									{
										return;
									}
									(*CurrentPP).Sequences[(*CurrentPP).CurrentSequence].ObjectiveTargets[j].PlayerCount++;
								}
								else
								{
									//Not minusing if count is on 0
									if ((*CurrentPP).Sequences[(*CurrentPP).CurrentSequence].ObjectiveTargets[j].PlayerCount <= 0)
									{
										return;
									}
									(*CurrentPP).Sequences[(*CurrentPP).CurrentSequence].ObjectiveTargets[j].PlayerCount--;
								}

								//If player did 5/5 objectives
								if ((*CurrentPP).Sequences[(*CurrentPP).CurrentSequence].ObjectiveTargets[j].PlayerCount >= (*CurrentPP).Sequences[(*CurrentPP).CurrentSequence].ObjectiveTargets[j].CountToComplete)
								{
									//Squences ends, all objectives are done
									if (!IsHaveNotFinishedObjectivesInThisQuestSequence(QuestId, (*CurrentPP).CurrentSequence))
									{
										IsSuccess = true;
										int NextSequenceNum = (*CurrentPP).CurrentSequence + 1;

										//If can finish all the quest
										if (!(*CurrentPP).Sequences.IsValidIndex(NextSequenceNum))
										{
											//If player wants to skip a stage with returning to the NPC
											if (WillSkipQuestDoneButNotFinishedStage)
											{
												(*CurrentPP).QuestState = EQuestState::QuestFinished;
												(*CurrentPP).CurrentSequence = 0;
												if (!IsSilent)
												{
													QuestStateChanged.Broadcast(QuestId, (*CurrentPP).Sequences[(*CurrentPP).CurrentSequence].ObjectiveTargets[j].QuestItemTag, EQuestState::QuestFinished, GetQuestInfo(QuestId, IsSuccess), (*CurrentPP), false, false);
												}
											}
											else
											{
												(*CurrentPP).QuestState = EQuestState::QuestDoneButNotFinished;
												(*CurrentPP).CurrentSequence = 0;
												if (!IsSilent)
												{
													QuestStateChanged.Broadcast(QuestId, (*CurrentPP).Sequences[(*CurrentPP).CurrentSequence].ObjectiveTargets[j].QuestItemTag, EQuestState::QuestDoneButNotFinished, GetQuestInfo(QuestId, IsSuccess), (*CurrentPP), false, false);
												}
											}
										}
										else //Go to the next sequence
										{
											(*CurrentPP).CurrentSequence = NextSequenceNum;
											if (!IsSilent)
											{
												QuestStateChanged.Broadcast(QuestId, (*CurrentPP).Sequences[(*CurrentPP).CurrentSequence].ObjectiveTargets[j].QuestItemTag, EQuestState::QuestOneStepAdd, GetQuestInfo(QuestId, IsSuccess), (*CurrentPP), true, false);
											}
										}
									}
									else //Not all objecrtives are done
									{
										if (!IsSilent)
										{
											QuestStateChanged.Broadcast(QuestId, (*CurrentPP).Sequences[(*CurrentPP).CurrentSequence].ObjectiveTargets[j].QuestItemTag, EQuestState::QuestOneStepAdd, GetQuestInfo(QuestId, IsSuccess), (*CurrentPP), false, false);
										}
									}
								}
								else //Player not completed this objective yet
								{
									IsSuccess = true;
									if (!IsSilent)
									{
										QuestStateChanged.Broadcast(QuestId, (*CurrentPP).Sequences[(*CurrentPP).CurrentSequence].ObjectiveTargets[j].QuestItemTag, EQuestState::QuestOneStepAdd, GetQuestInfo(QuestId, IsSuccess), (*CurrentPP), false, false);
									}
								}

								//Save if it choosed
								if (WillSave)
								{
									SaveProgress();
								}

								return;
							}
						}
					}
				}
			}
		}
	}
	else if (State == EQuestState::GotQuest || State == EQuestState::QuestFinished) //Just taking a fresh new quest or finish current quest
	{
		//Check is player can do this quest (if Nocheck is false)
		if (NoCheck || CanTakeQuest(QuestId, State, ObjectiveTag))
		{
			//Looking for a quest
			auto CurrentPP = PlayerProgressMap.Find(QuestId);
			if (CurrentPP)
			{
				(*CurrentPP).QuestState = State;
				IsSuccess = true;

				bool TrackedQuestDone = false;
				FQuestType ThisQuestInfo = GetQuestInfo(QuestId, IsSuccess);

				if (!IsSuccess)
				{
					//Cant find the quest with id QuestId
					//if (GEngine)
					//{
					//	GEngine->AddOnScreenDebugMessage(-1, 25.f, FColor::Red, "C++ : UIQS_QuestSystemComponent::QuestComplete() : Cant find quest with id " + QuestId.ToString());
					//}
					return;
				}

				//Update a tracked quest if quest was finished
				if (State == EQuestState::QuestFinished)
				{
					//Current tracked quest is done
					TrackedQuestDone = TrackedQuestIds.Find(QuestId) != -1;
					if (TrackedQuestDone)
					{
						RemoveTrackedQuest(QuestId);
					}

					//Set player quest current sequence to the 0
					(*CurrentPP).CurrentSequence = 0;

					//Create reward actor
					CreateRewardActor(ThisQuestInfo.RewardActor);
				}
				else
				{
					//Run function NameFunctionCallWhenPlayerGotQuest when player got quest
					if (ThisQuestInfo.NameFunctionCallWhenPlayerGotQuest != FName("None") && IsOwnerLocallyControlledCpp())
					{
						UFunction* const func = FindFunction(ThisQuestInfo.NameFunctionCallWhenPlayerGotQuest);
						if (func && func->ParmsSize == 0)
						{
							FTimerDelegate Delegate;
							Delegate.BindUFunction(this, ThisQuestInfo.NameFunctionCallWhenPlayerGotQuest);
							Delegate.Execute();
						}
					}
					QuestOrderNumber++;
					(*CurrentPP).OrderNumber = QuestOrderNumber;
				}

				if (!IsSilent)
				{
					QuestStateChanged.Broadcast(QuestId, ObjectiveTag, State, ThisQuestInfo, (*CurrentPP), false, TrackedQuestDone);
				}
			}

			//Save if it choosed
			if (WillSave)
			{
				SaveProgress();
			}
		}
	}
	else if (State == EQuestState::QuestDoneButNotFinished)
	{
		//Check is player can do this quest (if Nocheck is false)
		if (NoCheck || CanTakeQuest(QuestId, State, ObjectiveTag))
		{
			bool TrackedQuestDone = false;
			FQuestType ThisQuestInfo = GetQuestInfo(QuestId, IsSuccess);
			TrackedQuestDone = TrackedQuestIds.Find(QuestId) != -1;

			if (IsSuccess)
			{
				IsSuccess = false;

				//Looking for a quest
				auto CurrentPP = PlayerProgressMap.Find(QuestId);
				if (CurrentPP)
				{
					(*CurrentPP).QuestState = State;
					IsSuccess = true;

					//Set player quest current sequence to the 0
					(*CurrentPP).CurrentSequence = 0;

					if (!IsSilent)
					{
						QuestStateChanged.Broadcast(QuestId, ObjectiveTag, State, ThisQuestInfo, (*CurrentPP), false, TrackedQuestDone);
					}
				}
			}

			//Save if it choosed
			if (WillSave)
			{
				SaveProgress();
			}
		}
	}
	else //if (State == EQuestState::QuestNotStarted)
	{
		bool TrackedQuestDone = false;
		FQuestType ThisQuestInfo = GetQuestInfo(QuestId, IsSuccess);
		TrackedQuestDone = TrackedQuestIds.Find(QuestId) != -1;

		if (IsSuccess)
		{
			IsSuccess = false;

			//Reset the quest
			auto CurrentPP = PlayerProgressMap.Find(QuestId);
			if (CurrentPP)
			{
				(*CurrentPP).QuestState = State;

				//Reset all the sequences and objectives in the quest
				(*CurrentPP).CurrentSequence = 0;
				for (int j = 0; j < (*CurrentPP).Sequences.Num(); j++)
				{
					for (int k = 0; k < (*CurrentPP).Sequences[j].ObjectiveTargets.Num(); k++)
					{
						(*CurrentPP).Sequences[j].ObjectiveTargets[k].PlayerCount = 0;
					}
				}

				IsSuccess = true;

				if (!IsSilent)
				{
					QuestStateChanged.Broadcast(QuestId, FName("None"), EQuestState::QuestNotStarted, ThisQuestInfo, (*CurrentPP), false, TrackedQuestDone);
				}
					
			}
		}
		
		//Save if it choosed
		if (WillSave)
		{
			SaveProgress();
		}
	}
}

bool UIQS_QuestSystemComponent::IsOwnerLocallyControlledCpp()
{
	UObject* out = GetOuter();
	if (!out)
	{
		return false;
	}

	APlayerController* PC = Cast<APlayerController>(out);
	if (!PC)
	{
		return false;
	}

	APawn* Pawn = PC->GetPawn();
	if (!Pawn)
	{
		return false;
	}

	return Pawn->IsLocallyControlled();
}

bool UIQS_QuestSystemComponent::IsOwnerHasAuthority()
{
	UObject* out = GetOuter();
	if (!out)
	{
		return false;
	}

	APlayerController* PC = Cast<APlayerController>(out);
	if (!PC)
	{
		return false;
	}

	APawn* Pawn = PC->GetPawn();
	if (!Pawn)
	{
		return false;
	}

	return Pawn->HasAuthority();
}

void UIQS_QuestSystemComponent::RemoveTrackedQuest(FName QuestId)
{
	TrackedQuestIds.Remove(QuestId);

	FPlayerProgress* CurrentPP = PlayerProgressMap.Find(QuestId);

	if (CurrentPP)
	{
		(*CurrentPP).IsTracked = false;
	}

	OnRemoveTrackedQuest.Broadcast(QuestId);
}

void UIQS_QuestSystemComponent::AddTrackedQuest(FName QuestId)
{
	if (MaxTrackedQuestsNum < 0 || TrackedQuestIds.Num() < MaxTrackedQuestsNum)
	{
		TrackedQuestIds.Add(QuestId);

		FPlayerProgress* CurrentPP = PlayerProgressMap.Find(QuestId);

		if (CurrentPP)
		{
			(*CurrentPP).IsTracked = true;
		}
	}
}

void UIQS_QuestSystemComponent::CopyPlayerProgressWithoutTrackedQuests(TArray<FPlayerProgress> NewPlayerProgress)
{
	for (int i = 0; i < NewPlayerProgress.Num(); i++)
	{
		if (NewPlayerProgress.IsValidIndex(i))
		{
			bool WasTracked = false;

			FPlayerProgress* CurrentPP = PlayerProgressMap.Find(NewPlayerProgress[i].QuestId);
			if (CurrentPP)
			{
				WasTracked = (*CurrentPP).IsTracked;
				(*CurrentPP) = NewPlayerProgress[i];
				(*CurrentPP).IsTracked = WasTracked;
			}
			else
			{
				PlayerProgressMap[NewPlayerProgress[i].QuestId] = NewPlayerProgress[i];
			}
		}
	}
}

TArray<FQuestLogInfo> UIQS_QuestSystemComponent::GetQuestLog(EQuestLogTypes QuestLogType)
{
	TArray<FQuestLogInfo> result;
	TArray<FName> QuestIdKeys;

	switch (QuestLogType)
	{
	case EQuestLogTypes::InProgressQuests:
		PlayerProgressMap.GetKeys(QuestIdKeys);
		for (const FName& QuestId : QuestIdKeys)
		{
			auto quest = PlayerProgressMap.Find(QuestId);
			if (quest && ((*quest).QuestState == EQuestState::GotQuest || (*quest).QuestState == EQuestState::QuestDoneButNotFinished))
			{
				bool IsFound = false;
				FQuestType QuestInfo = GetQuestInfo((*quest).QuestId, IsFound);
				if (IsFound && !QuestInfo.IsHidden)
				{
					FQuestLogInfo NewQuestInfo;
					NewQuestInfo.QuestInfo = QuestInfo;
					NewQuestInfo.PlayerProgress = (*quest);
					result.Add(NewQuestInfo);
				}
			}
		}
	break;
	case EQuestLogTypes::FinishedQuests:
		PlayerProgressMap.GetKeys(QuestIdKeys);
		for (const FName& QuestId : QuestIdKeys)
		{
			auto quest = PlayerProgressMap.Find(QuestId);
			if (quest && ((*quest).QuestState == EQuestState::QuestFinished))
			{
				bool IsFound = false;
				FQuestType QuestInfo = GetQuestInfo((*quest).QuestId, IsFound);
				if (IsFound && !QuestInfo.IsHidden)
				{
					FQuestLogInfo NewQuestInfo;
					NewQuestInfo.QuestInfo = QuestInfo;
					NewQuestInfo.PlayerProgress = (*quest);
					result.Add(NewQuestInfo);
				}
			}
		}
	break;
	case EQuestLogTypes::NotStartedQuests:
		PlayerProgressMap.GetKeys(QuestIdKeys);
		for (const FName& QuestId : QuestIdKeys)
		{
			auto quest = PlayerProgressMap.Find(QuestId);
			if (quest && ((*quest).QuestState == EQuestState::QuestNotStarted))
			{
				bool IsFound = false;
				FQuestType QuestInfo = GetQuestInfo((*quest).QuestId, IsFound);
				if (IsFound && !QuestInfo.IsHidden)
				{
					FQuestLogInfo NewQuestInfo;
					NewQuestInfo.QuestInfo = QuestInfo;
					NewQuestInfo.PlayerProgress = (*quest);
					result.Add(NewQuestInfo);
				}
			}
		}
	break;
	case EQuestLogTypes::MainQuests:
		PlayerProgressMap.GetKeys(QuestIdKeys);
		for (const FName& QuestId : QuestIdKeys)
		{
			auto quest = PlayerProgressMap.Find(QuestId);
			if (quest && ((*quest).QuestState == EQuestState::GotQuest || (*quest).QuestState == EQuestState::QuestDoneButNotFinished))
			{
				bool IsFound = false;
				FQuestType QuestInfo = GetQuestInfo((*quest).QuestId, IsFound);
				if (IsFound && QuestInfo.IsMainQuest && !QuestInfo.IsHidden)
				{
					FQuestLogInfo NewQuestInfo;
					NewQuestInfo.QuestInfo = QuestInfo;
					NewQuestInfo.PlayerProgress = (*quest);
					result.Add(NewQuestInfo);
				}
			}
		}
	break;
	case EQuestLogTypes::SideQuests:
		PlayerProgressMap.GetKeys(QuestIdKeys);
		for (const FName& QuestId : QuestIdKeys)
		{
			auto quest = PlayerProgressMap.Find(QuestId);
			if (quest && ((*quest).QuestState == EQuestState::GotQuest || (*quest).QuestState == EQuestState::QuestDoneButNotFinished))
			{
				bool IsFound = false;
				FQuestType QuestInfo = GetQuestInfo((*quest).QuestId, IsFound);
				if (IsFound && !QuestInfo.IsMainQuest && !QuestInfo.IsHidden)
				{
					FQuestLogInfo NewQuestInfo;
					NewQuestInfo.QuestInfo = QuestInfo;
					NewQuestInfo.PlayerProgress = (*quest);
					result.Add(NewQuestInfo);
				}
			}
		}
	break;
	default:;
	}

	return result;
}

FPlayerProgress UIQS_QuestSystemComponent::GetQuestProgress(FName QuestId, bool& IsFound)
{
	IsFound = false;

	auto CurrentPP = PlayerProgressMap.Find(QuestId);
	if (CurrentPP)
	{
		IsFound = true;
		return (*CurrentPP);
	}

	FPlayerProgress result;
	return result;
}

FQuestType UIQS_QuestSystemComponent::GetQuestInfo(FName QuestId, bool& IsFound)
{
	IsFound = false;
	if (QuestTable)
	{
		FQuestType* QuestTableRow = QuestTable->FindRow<FQuestType>(QuestId, "", false);
		if (QuestTableRow)
		{
			IsFound = true;
			return *QuestTableRow;
		}
	}

	FQuestType result;
	return result;
	
}

void UIQS_QuestSystemComponent::QuestAddStepOnlyByTag(FName ObjectiveTag, bool IsMinusStep, bool NoCheck, bool& IsSuccess)
{
	IsSuccess = false;

	TArray<FName> QuestIdKeys;
	PlayerProgressMap.GetKeys(QuestIdKeys);
	for (const FName& QuestId : QuestIdKeys)
	{
		auto CurrentPP = PlayerProgressMap.Find(QuestId);
		if (CurrentPP)
		{
			if (NoCheck || (*CurrentPP).QuestState == EQuestState::GotQuest)
			{
				int CurrentSequence = (*CurrentPP).CurrentSequence;
				if ((*CurrentPP).Sequences.IsValidIndex(CurrentSequence))
				{
					for (const FQuestObjectiveTarget& Objective : (*CurrentPP).Sequences[CurrentSequence].ObjectiveTargets)
					{
						if (Objective.QuestItemTag == ObjectiveTag && Objective.PlayerCount < Objective.CountToComplete)
						{
							if (!IsMinusStep)
							{
								QuestComplete((*CurrentPP).QuestId, EQuestState::QuestOneStepAdd, ObjectiveTag, NoCheck, IsSuccess);
							}
							else
							{
								QuestComplete((*CurrentPP).QuestId, EQuestState::QuestOneStepMinus, ObjectiveTag, NoCheck, IsSuccess);
							}

						}
					}
				}
			}
		}
	}
}

bool UIQS_QuestSystemComponent::IsHaveNotFinishedObjectivesInThisQuestSequence(FName QuestId, int SequenceNumber)
{
	auto CurrentPP = PlayerProgressMap.Find(QuestId);
	if (CurrentPP && (*CurrentPP).Sequences.IsValidIndex(SequenceNumber))
	{
		for (const FQuestObjectiveTarget& Objective : (*CurrentPP).Sequences[SequenceNumber].ObjectiveTargets)
		{
			if (Objective.PlayerCount < Objective.CountToComplete)
			{
				return true;
			}
		}
	}

	return false;
}

EQuestState UIQS_QuestSystemComponent::GetQuestState(FName QuestId, bool& IsFound, int& CurrentSequence)
{
	CurrentSequence = 0;
	IsFound = false;
	auto CurrentPP = PlayerProgressMap.Find(QuestId);
	if (CurrentPP)
	{
		IsFound = true;
		CurrentSequence = (*CurrentPP).CurrentSequence;
		return (*CurrentPP).QuestState;
	}

	return EQuestState::QuestNotStarted;
}

void UIQS_QuestSystemComponent::SaveProgress()
{
	OnSave_BP();
}

void UIQS_QuestSystemComponent::LoadProgress()
{
	OnLoad_BP();
}

void UIQS_QuestSystemComponent::OnSave_BP_Implementation()
{
	//In BP
}

void UIQS_QuestSystemComponent::OnLoad_BP_Implementation()
{
	//In BP
}

bool UIQS_QuestSystemComponent::IsCanTakeQuestByQuestsNeedToFinishToTake(FName QuestId)
{
	bool IsFound = false;
	FQuestType QuestInfo = GetQuestInfo(QuestId, IsFound);
	if (IsFound)
	{
		for (const FName& QuestNameRow : QuestInfo.QuestsNeedToFinishToTake)
		{
			FPlayerProgress RowPlayerProgress = GetQuestProgress(QuestNameRow, IsFound);
			if (!IsFound)
			{
				return false;
			}
			if (RowPlayerProgress.QuestState != EQuestState::QuestFinished)
			{
				return false;
			}
		}
	}else
	{
		return false;
	}
	
	return true;
}

bool UIQS_QuestSystemComponent::IsCanTakeQuestByQuestsMustNotBeFinishedToTake(FName QuestId)
{
	bool IsFound = false;
	FQuestType QuestInfo = GetQuestInfo(QuestId, IsFound);
	if (IsFound)
	{
		for (const FName& QuestNameRow : QuestInfo.QuestsMustNotBeFinishedToTake)
		{
			FPlayerProgress RowPlayerProgress = GetQuestProgress(QuestNameRow, IsFound);
			if (IsFound && RowPlayerProgress.QuestState == EQuestState::QuestFinished)
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}

	return true;
}

bool UIQS_QuestSystemComponent::CanTakeQuest(FName QuestId, EQuestState State, FName ObjectiveTag)
{
	bool IsFound = false;
	int NewCurrentSequence = 0;
	EQuestState FoundQuestState = GetQuestState(QuestId, IsFound, NewCurrentSequence);

	//Cant find a quest
	if (!IsFound)
	{
		return false;
	}

	//Quest refresh
	if (State == EQuestState::QuestNotStarted)
	{
		return true;
	}
	
	//Take a new quest only if quest not started
	if (State == EQuestState::GotQuest)
	{
		//Check if previous quests are done
		if (!IsCanTakeQuestByQuestsNeedToFinishToTake(QuestId))
		{
			return false;
		}

		//Check if there is a quests, wich blocks current quest
		if (!IsCanTakeQuestByQuestsMustNotBeFinishedToTake(QuestId))
		{
			return false;
		}

		if (FoundQuestState != EQuestState::QuestNotStarted)
		{
			return false;
		}
	}
	//Cant finish again a finished quests and cant finish not started quest
	else if (State == EQuestState::QuestDoneButNotFinished)
	{
		if (FoundQuestState == EQuestState::QuestFinished || FoundQuestState == EQuestState::QuestNotStarted)
		{
			return false;
		}
	}
	//Cant finish a quests if it already finished
	else if (State == EQuestState::QuestFinished)
	{
		//If player wants to skip a stage with returning to the NPC
		if (WillSkipQuestDoneButNotFinishedStage)
		{
			if (FoundQuestState != EQuestState::QuestDoneButNotFinished && FoundQuestState != EQuestState::GotQuest)
			{
				return false;
			}
		}
		else
		{
			if (FoundQuestState != EQuestState::QuestDoneButNotFinished)
			{
				return false;
			}
		}

	}
	//For QuestOneStepAdd and QuestOneStepMinus can use it only if quest in state GotQuest
	else
	{
		if (FoundQuestState != EQuestState::GotQuest)
		{
			return false;
		}

		auto CurrentPP = PlayerProgressMap.Find(QuestId);
		if (CurrentPP)
		{
			if ((*CurrentPP).Sequences.IsValidIndex((*CurrentPP).CurrentSequence))
			{
				for (int j = 0; j < (*CurrentPP).Sequences[(*CurrentPP).CurrentSequence].ObjectiveTargets.Num(); j++)
				{
					if ((*CurrentPP).Sequences[(*CurrentPP).CurrentSequence].ObjectiveTargets[j].QuestItemTag == ObjectiveTag)
					{
						return true;
					}
				}
			}

			return false;
		}		
	}
	return true;
}

void UIQS_QuestSystemComponent::ResetPlayerProgress()
{
	PlayerProgressMap.Empty();

	UGameplayStatics::DeleteGameInSlot(SaveGameSlotName, CurrentUserIndexForSave);

	if (!QuestTable)
	{
		//Cant work without a Quest Table
		//if (GEngine)
		//{
		//	GEngine->AddOnScreenDebugMessage(-1, 25.f, FColor::Red, "C++ : UIQS_QuestSystemComponent::ResetPlayerProgress() : Cant work without a Quest Table");
		//	GEngine->AddOnScreenDebugMessage(-1, 25.f, FColor::Red, "You need to fill a QuestTable variable in BP_IQS_QuestSystemComponent in your PlayerController");
		//}
		
		return;
	}

	TArray<FName> Rows = QuestTable->GetRowNames();

	for (const FName& RowName : Rows)
	{
		FQuestType* QuestTableRow = QuestTable->FindRow<FQuestType>(RowName, "", false);
		if (QuestTableRow)
		{
			FPlayerProgress PlayerProgress_Row;
			PlayerProgress_Row.QuestId = QuestTableRow->QuestId;
			PlayerProgress_Row.Sequences = QuestTableRow->Sequences;

			PlayerProgress_Row.CurrentSequence = 0;
			PlayerProgressMap.Add(RowName, PlayerProgress_Row);	
		}
	}
}

void UIQS_QuestSystemComponent::CreateRewardActor(TSubclassOf<AIQS_RewardActor> NewRewardActor)
{
	if (NewRewardActor && GetWorld() && IsOwnerHasAuthority())
	{
		APawn* Player_Pawn = UGameplayStatics::GetPlayerPawn((const UObject*)GetWorld(), 0);
		if (Player_Pawn)
		{
			FActorSpawnParameters SpawnParams;
			SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
			SpawnParams.Owner = Player_Pawn;
			SpawnParams.Instigator = Player_Pawn;

			FVector SpawnLocation = FVector::ZeroVector;
			FRotator SpawnRotation = FRotator::ZeroRotator;

			GetWorld()->SpawnActor(NewRewardActor, &SpawnLocation, &SpawnRotation, SpawnParams);
		}
		else
		{
			//GEngine->AddOnScreenDebugMessage(-1, 25.f, FColor::Red, "C++ : UIQS_QuestSystemComponent::CreateRewardActor() : Cant find player reward initiator");
		}
	}
}

TArray<AActor*> UIQS_QuestSystemComponent::FindDoorsToObjectiveLocation(FName ObjectiveLevelId)
{
	int StepCount = 0;
	TArray<FName> AlreadyChecked;

	int NumLevelsOfTargetLevelId = 0,
		NumLevelsOfCurrentLevelId = 0;

	FName CurrentLevelName = FName(*UGameplayStatics::GetCurrentLevelName(GetWorld()));

	FMapNamesArray* LevelLink = CrossLevelDoorMapping.Find(ObjectiveLevelId);
	if (!LevelLink)
	{
		//if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 25.f, FColor::Red, "C++ : UIQS_QuestSystemComponent::FindDoorsToObjectiveLocation : quest target level is not found in CrossLevelDoorMapping (BP_QuestSystemComponent variables)");
		TArray<AActor*> Error_End;
		return Error_End;
	}
	NumLevelsOfTargetLevelId = LevelLink->NamesArr.Num();

	LevelLink = CrossLevelDoorMapping.Find(CurrentLevelName);
	if (!LevelLink)
	{
		//if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 25.f, FColor::Red, "C++ : UIQS_QuestSystemComponent::FindDoorsToObjectiveLocation : current level is not found in CrossLevelDoorMapping (BP_QuestSystemComponent variables)");
		TArray<AActor*> Error_End;
		return Error_End;
	}
	NumLevelsOfCurrentLevelId = LevelLink->NamesArr.Num();

	if (NumLevelsOfTargetLevelId < NumLevelsOfCurrentLevelId)
	{
		return FindDoorsToObjectiveLocationRecurse(ObjectiveLevelId, &StepCount, &AlreadyChecked);
	}
	else
	{
		return FindDoorsToObjectiveLocationRecurse(CurrentLevelName, &StepCount, &AlreadyChecked);
	}
}

TArray<AActor*> UIQS_QuestSystemComponent::FindDoorsToObjectiveLocationRecurse(FName ObjectiveLevelId, int* CurrentStepCount, TArray<FName>* AlreadyChecked)
{
	TArray<AActor*> result;

	if (AlreadyChecked->Find(ObjectiveLevelId) != -1)
	{
		return result;
	}

	AlreadyChecked->Add(ObjectiveLevelId);

	if (!CurrentStepCount || *CurrentStepCount > MaxCrossLevelDoorMappingStepCount)
	{
		//if(GEngine) GEngine->AddOnScreenDebugMessage(-1, 25.f, FColor::Red, "C++ : UIQS_QuestSystemComponent::FindDoorsToObjectiveLocation : Reached recurse limit");
		return result;
	}

	(*CurrentStepCount)++;

	FName CurrentLevelName = FName(*UGameplayStatics::GetCurrentLevelName(GetWorld()));

	FMapNamesArray* LevelLink = CrossLevelDoorMapping.Find(ObjectiveLevelId);
	if (!LevelLink)
	{
		return result;
	}
	
	TArray<FName> LevelArr = LevelLink->NamesArr;
	for (const FName& LevelRow : LevelArr)
	{
		if (LevelRow == CurrentLevelName)
		{
			UGameplayStatics::GetAllActorsOfClassWithTag(GetWorld(), AActor::StaticClass(), ObjectiveLevelId, result);
			return result;
		}
	}
	for (const FName& LevelRow : LevelArr)
	{
		result = FindDoorsToObjectiveLocationRecurse(LevelRow, CurrentStepCount, AlreadyChecked);
		if (result.Num() > 0)
		{
			return result;
		}
	}

	return result;
}

FQuestLogInfo UIQS_QuestSystemComponent::MakeQuestLogInfo(FPlayerProgress NewQuestProgress, FQuestType NewQuestType)
{
	FQuestLogInfo NewQuestLogInfo;
	NewQuestLogInfo.PlayerProgress = NewQuestProgress;
	NewQuestLogInfo.QuestInfo = NewQuestType;
	return NewQuestLogInfo;
}

bool UIQS_QuestSystemComponent::IsObjectiveCompleted(FName QuestId, FName ObjectiveTag, int& PlayerHave, int& PlayerNeeds)
{
	PlayerHave = 0;
	PlayerNeeds = 0;

	auto CurrentPP = PlayerProgressMap.Find(QuestId);
	if (CurrentPP)
	{
		for (const FSequenceMaster& sequence_row : (*CurrentPP).Sequences)
		{
			for (const FQuestObjectiveTarget& objective_row : sequence_row.ObjectiveTargets)
			{
				if (objective_row.QuestItemTag == ObjectiveTag)
				{
					PlayerHave += objective_row.PlayerCount;
					PlayerNeeds += objective_row.CountToComplete;
				}
			}
		}

		if (PlayerHave < PlayerNeeds)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	else
	{
		return false;
	}	
}

TMap<FName, FPlayerProgress> UIQS_QuestSystemComponent::ConvertPlayerProgressArrToMap(TArray<FPlayerProgress> CurrentPlayerProgress)
{
	TMap<FName, FPlayerProgress> CurrentPlayerProgressMap;

	for (const FPlayerProgress& ppRow : CurrentPlayerProgress)
	{
		CurrentPlayerProgressMap.Add(ppRow.QuestId, ppRow);
	}

	return CurrentPlayerProgressMap;
}

TArray<FPlayerProgress> UIQS_QuestSystemComponent::ConvertPlayerProgressMapToArr(TMap<FName, FPlayerProgress> CurrentPlayerProgress)
{
	TArray<FPlayerProgress> CurrentPlayerProgressArr;

	TArray<FName> KeysPP;
	CurrentPlayerProgress.GetKeys(KeysPP);

	for (const FName& key : KeysPP)
	{
		auto PlayerProgressRow = CurrentPlayerProgress.Find(key);
		if (PlayerProgressRow) //Perhaps this check is unnecessary
		{
			CurrentPlayerProgressArr.Add((*PlayerProgressRow));
		}
	}

	return CurrentPlayerProgressArr;
}

void UIQS_QuestSystemComponent::AddSmoothUpdateMarker(UIQS_QuestMarkerBase* MarkerRef)
{
	AActor* PlayerActor = UGameplayStatics::GetPlayerPawn((const UObject*)GetWorld(), 0);
	if (PlayerActor)
	{
		SmoothUpdateMarkersCpp.Add(MarkerRef);
		FTimerHandle RemoveSmoothUpdateMarkerTH;
		FTimerDelegate RemoveSmoothUpdateMarkerDelegate = FTimerDelegate::CreateUObject(this, &UIQS_QuestSystemComponent::RemoveSmoothUpdateMarker, MarkerRef);
		PlayerActor->GetWorldTimerManager().SetTimer(RemoveSmoothUpdateMarkerTH, RemoveSmoothUpdateMarkerDelegate, 0.3f, false);
	}
}

void UIQS_QuestSystemComponent::RemoveSmoothUpdateMarker(UIQS_QuestMarkerBase* MarkerRef)
{
	int index = -1;
	SmoothUpdateMarkersCpp.Find(MarkerRef, index);
	if (index > -1)
	{
		SmoothUpdateMarkersCpp[index] = nullptr;
	}
}

void UIQS_QuestSystemComponent::RefreshSmoothUpdateMarkers()
{
	TArray<UIQS_QuestMarkerBase*> NewSmoothUpdateMarkers;

	for (int i = 0; i < SmoothUpdateMarkersCpp.Num(); i++)
	{
		if (IsValid(SmoothUpdateMarkersCpp[i]))
		{
			NewSmoothUpdateMarkers.Add(SmoothUpdateMarkersCpp[i]);
		}
	}

	SmoothUpdateMarkersCpp = NewSmoothUpdateMarkers;
}