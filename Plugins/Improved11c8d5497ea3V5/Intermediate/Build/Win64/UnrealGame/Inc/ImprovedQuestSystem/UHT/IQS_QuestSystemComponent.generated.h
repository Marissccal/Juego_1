// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/IQS_QuestSystemComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 struct FPlayerProgress;
class AActor;
class AIQS_RewardActor;
class UIQS_QuestMarkerBase;
enum class EQuestLogTypes : uint8;
enum class EQuestState : uint8;
struct FNumericRewards;
struct FPlayerProgress;
struct FQuestLogInfo;
struct FQuestType;
#ifdef IMPROVEDQUESTSYSTEM_IQS_QuestSystemComponent_generated_h
#error "IQS_QuestSystemComponent.generated.h already included, missing '#pragma once' in IQS_QuestSystemComponent.h"
#endif
#define IMPROVEDQUESTSYSTEM_IQS_QuestSystemComponent_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Components_IQS_QuestSystemComponent_h_19_DELEGATE \
IMPROVEDQUESTSYSTEM_API void FQuestStateChanged_DelegateWrapper(const FMulticastScriptDelegate& QuestStateChanged, FName QuestId, FName ObjectiveTag, EQuestState NewQuestState, FQuestType QuestInfo, FPlayerProgress QuestProgress, bool IsNextQuestSequence, bool IsTrackedQuestDone);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Components_IQS_QuestSystemComponent_h_20_DELEGATE \
IMPROVEDQUESTSYSTEM_API void FOnRemoveTrackedQuest_DelegateWrapper(const FMulticastScriptDelegate& OnRemoveTrackedQuest, FName QuestId);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Components_IQS_QuestSystemComponent_h_21_DELEGATE \
IMPROVEDQUESTSYSTEM_API void FOnGetExpAndMoneyReward_DelegateWrapper(const FMulticastScriptDelegate& OnGetExpAndMoneyReward, TArray<FNumericRewards> const& NewExpAndMoneyReward);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Components_IQS_QuestSystemComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnLoad_BP_Implementation(); \
	virtual void OnSave_BP_Implementation(); \
	DECLARE_FUNCTION(execRefreshSmoothUpdateMarkers); \
	DECLARE_FUNCTION(execAddSmoothUpdateMarker); \
	DECLARE_FUNCTION(execConvertPlayerProgressMapToArr); \
	DECLARE_FUNCTION(execConvertPlayerProgressArrToMap); \
	DECLARE_FUNCTION(execIsObjectiveCompleted); \
	DECLARE_FUNCTION(execIsOwnerHasAuthority); \
	DECLARE_FUNCTION(execIsOwnerLocallyControlledCpp); \
	DECLARE_FUNCTION(execMakeQuestLogInfo); \
	DECLARE_FUNCTION(execFindDoorsToObjectiveLocation); \
	DECLARE_FUNCTION(execCopyPlayerProgressWithoutTrackedQuests); \
	DECLARE_FUNCTION(execAddTrackedQuest); \
	DECLARE_FUNCTION(execRemoveTrackedQuest); \
	DECLARE_FUNCTION(execOnLoad_BP); \
	DECLARE_FUNCTION(execOnSave_BP); \
	DECLARE_FUNCTION(execCreateRewardActor); \
	DECLARE_FUNCTION(execGetQuestLog); \
	DECLARE_FUNCTION(execGetQuestInfo); \
	DECLARE_FUNCTION(execGetQuestProgress); \
	DECLARE_FUNCTION(execIsCanTakeQuestByQuestsMustNotBeFinishedToTake); \
	DECLARE_FUNCTION(execIsCanTakeQuestByQuestsNeedToFinishToTake); \
	DECLARE_FUNCTION(execCanTakeQuest); \
	DECLARE_FUNCTION(execLoadProgress); \
	DECLARE_FUNCTION(execSaveProgress); \
	DECLARE_FUNCTION(execResetPlayerProgress); \
	DECLARE_FUNCTION(execGetQuestState); \
	DECLARE_FUNCTION(execQuestAddStepOnlyByTag); \
	DECLARE_FUNCTION(execQuestComplete);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Components_IQS_QuestSystemComponent_h_26_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Components_IQS_QuestSystemComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIQS_QuestSystemComponent(); \
	friend struct Z_Construct_UClass_UIQS_QuestSystemComponent_Statics; \
public: \
	DECLARE_CLASS(UIQS_QuestSystemComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ImprovedQuestSystem"), NO_API) \
	DECLARE_SERIALIZER(UIQS_QuestSystemComponent)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Components_IQS_QuestSystemComponent_h_26_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIQS_QuestSystemComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UIQS_QuestSystemComponent(UIQS_QuestSystemComponent&&); \
	UIQS_QuestSystemComponent(const UIQS_QuestSystemComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIQS_QuestSystemComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIQS_QuestSystemComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIQS_QuestSystemComponent) \
	NO_API virtual ~UIQS_QuestSystemComponent();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Components_IQS_QuestSystemComponent_h_23_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Components_IQS_QuestSystemComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Components_IQS_QuestSystemComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Components_IQS_QuestSystemComponent_h_26_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Components_IQS_QuestSystemComponent_h_26_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Components_IQS_QuestSystemComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IMPROVEDQUESTSYSTEM_API UClass* StaticClass<class UIQS_QuestSystemComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Components_IQS_QuestSystemComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
