// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImprovedQuestSystem/Public/Components/IQS_QuestSystemComponent.h"
#include "ImprovedQuestSystem/Public/Structure/IQS_Types.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIQS_QuestSystemComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_AIQS_RewardActor_NoRegister();
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_UIQS_QuestMarkerBase_NoRegister();
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_UIQS_QuestSystemComponent();
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_UIQS_QuestSystemComponent_NoRegister();
IMPROVEDQUESTSYSTEM_API UEnum* Z_Construct_UEnum_ImprovedQuestSystem_EQuestLogTypes();
IMPROVEDQUESTSYSTEM_API UEnum* Z_Construct_UEnum_ImprovedQuestSystem_EQuestState();
IMPROVEDQUESTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnGetExpAndMoneyReward__DelegateSignature();
IMPROVEDQUESTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnRemoveTrackedQuest__DelegateSignature();
IMPROVEDQUESTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_ImprovedQuestSystem_QuestStateChanged__DelegateSignature();
IMPROVEDQUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FMapNamesArray();
IMPROVEDQUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FMinimapLevelSettings();
IMPROVEDQUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNumericRewards();
IMPROVEDQUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerProgress();
IMPROVEDQUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FQuestLogInfo();
IMPROVEDQUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FQuestType();
IMPROVEDQUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FStructIconSelector();
UPackage* Z_Construct_UPackage__Script_ImprovedQuestSystem();
// End Cross Module References

// Begin Delegate FQuestStateChanged
struct Z_Construct_UDelegateFunction_ImprovedQuestSystem_QuestStateChanged__DelegateSignature_Statics
{
	struct _Script_ImprovedQuestSystem_eventQuestStateChanged_Parms
	{
		FName QuestId;
		FName ObjectiveTag;
		EQuestState NewQuestState;
		FQuestType QuestInfo;
		FPlayerProgress QuestProgress;
		bool IsNextQuestSequence;
		bool IsTrackedQuestDone;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectiveTag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewQuestState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewQuestState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuestInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuestProgress;
	static void NewProp_IsNextQuestSequence_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsNextQuestSequence;
	static void NewProp_IsTrackedQuestDone_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTrackedQuestDone;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_ImprovedQuestSystem_QuestStateChanged__DelegateSignature_Statics::NewProp_QuestId = { "QuestId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ImprovedQuestSystem_eventQuestStateChanged_Parms, QuestId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_ImprovedQuestSystem_QuestStateChanged__DelegateSignature_Statics::NewProp_ObjectiveTag = { "ObjectiveTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ImprovedQuestSystem_eventQuestStateChanged_Parms, ObjectiveTag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_ImprovedQuestSystem_QuestStateChanged__DelegateSignature_Statics::NewProp_NewQuestState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_ImprovedQuestSystem_QuestStateChanged__DelegateSignature_Statics::NewProp_NewQuestState = { "NewQuestState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ImprovedQuestSystem_eventQuestStateChanged_Parms, NewQuestState), Z_Construct_UEnum_ImprovedQuestSystem_EQuestState, METADATA_PARAMS(0, nullptr) }; // 392213162
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ImprovedQuestSystem_QuestStateChanged__DelegateSignature_Statics::NewProp_QuestInfo = { "QuestInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ImprovedQuestSystem_eventQuestStateChanged_Parms, QuestInfo), Z_Construct_UScriptStruct_FQuestType, METADATA_PARAMS(0, nullptr) }; // 2755114105
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ImprovedQuestSystem_QuestStateChanged__DelegateSignature_Statics::NewProp_QuestProgress = { "QuestProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ImprovedQuestSystem_eventQuestStateChanged_Parms, QuestProgress), Z_Construct_UScriptStruct_FPlayerProgress, METADATA_PARAMS(0, nullptr) }; // 3775136938
void Z_Construct_UDelegateFunction_ImprovedQuestSystem_QuestStateChanged__DelegateSignature_Statics::NewProp_IsNextQuestSequence_SetBit(void* Obj)
{
	((_Script_ImprovedQuestSystem_eventQuestStateChanged_Parms*)Obj)->IsNextQuestSequence = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ImprovedQuestSystem_QuestStateChanged__DelegateSignature_Statics::NewProp_IsNextQuestSequence = { "IsNextQuestSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ImprovedQuestSystem_eventQuestStateChanged_Parms), &Z_Construct_UDelegateFunction_ImprovedQuestSystem_QuestStateChanged__DelegateSignature_Statics::NewProp_IsNextQuestSequence_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UDelegateFunction_ImprovedQuestSystem_QuestStateChanged__DelegateSignature_Statics::NewProp_IsTrackedQuestDone_SetBit(void* Obj)
{
	((_Script_ImprovedQuestSystem_eventQuestStateChanged_Parms*)Obj)->IsTrackedQuestDone = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_ImprovedQuestSystem_QuestStateChanged__DelegateSignature_Statics::NewProp_IsTrackedQuestDone = { "IsTrackedQuestDone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_ImprovedQuestSystem_eventQuestStateChanged_Parms), &Z_Construct_UDelegateFunction_ImprovedQuestSystem_QuestStateChanged__DelegateSignature_Statics::NewProp_IsTrackedQuestDone_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ImprovedQuestSystem_QuestStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ImprovedQuestSystem_QuestStateChanged__DelegateSignature_Statics::NewProp_QuestId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ImprovedQuestSystem_QuestStateChanged__DelegateSignature_Statics::NewProp_ObjectiveTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ImprovedQuestSystem_QuestStateChanged__DelegateSignature_Statics::NewProp_NewQuestState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ImprovedQuestSystem_QuestStateChanged__DelegateSignature_Statics::NewProp_NewQuestState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ImprovedQuestSystem_QuestStateChanged__DelegateSignature_Statics::NewProp_QuestInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ImprovedQuestSystem_QuestStateChanged__DelegateSignature_Statics::NewProp_QuestProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ImprovedQuestSystem_QuestStateChanged__DelegateSignature_Statics::NewProp_IsNextQuestSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ImprovedQuestSystem_QuestStateChanged__DelegateSignature_Statics::NewProp_IsTrackedQuestDone,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ImprovedQuestSystem_QuestStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ImprovedQuestSystem_QuestStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ImprovedQuestSystem, nullptr, "QuestStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ImprovedQuestSystem_QuestStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ImprovedQuestSystem_QuestStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ImprovedQuestSystem_QuestStateChanged__DelegateSignature_Statics::_Script_ImprovedQuestSystem_eventQuestStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ImprovedQuestSystem_QuestStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ImprovedQuestSystem_QuestStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ImprovedQuestSystem_QuestStateChanged__DelegateSignature_Statics::_Script_ImprovedQuestSystem_eventQuestStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ImprovedQuestSystem_QuestStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ImprovedQuestSystem_QuestStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FQuestStateChanged_DelegateWrapper(const FMulticastScriptDelegate& QuestStateChanged, FName QuestId, FName ObjectiveTag, EQuestState NewQuestState, FQuestType QuestInfo, FPlayerProgress QuestProgress, bool IsNextQuestSequence, bool IsTrackedQuestDone)
{
	struct _Script_ImprovedQuestSystem_eventQuestStateChanged_Parms
	{
		FName QuestId;
		FName ObjectiveTag;
		EQuestState NewQuestState;
		FQuestType QuestInfo;
		FPlayerProgress QuestProgress;
		bool IsNextQuestSequence;
		bool IsTrackedQuestDone;
	};
	_Script_ImprovedQuestSystem_eventQuestStateChanged_Parms Parms;
	Parms.QuestId=QuestId;
	Parms.ObjectiveTag=ObjectiveTag;
	Parms.NewQuestState=NewQuestState;
	Parms.QuestInfo=QuestInfo;
	Parms.QuestProgress=QuestProgress;
	Parms.IsNextQuestSequence=IsNextQuestSequence ? true : false;
	Parms.IsTrackedQuestDone=IsTrackedQuestDone ? true : false;
	QuestStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FQuestStateChanged

// Begin Delegate FOnRemoveTrackedQuest
struct Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnRemoveTrackedQuest__DelegateSignature_Statics
{
	struct _Script_ImprovedQuestSystem_eventOnRemoveTrackedQuest_Parms
	{
		FName QuestId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnRemoveTrackedQuest__DelegateSignature_Statics::NewProp_QuestId = { "QuestId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ImprovedQuestSystem_eventOnRemoveTrackedQuest_Parms, QuestId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnRemoveTrackedQuest__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnRemoveTrackedQuest__DelegateSignature_Statics::NewProp_QuestId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnRemoveTrackedQuest__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnRemoveTrackedQuest__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ImprovedQuestSystem, nullptr, "OnRemoveTrackedQuest__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnRemoveTrackedQuest__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnRemoveTrackedQuest__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnRemoveTrackedQuest__DelegateSignature_Statics::_Script_ImprovedQuestSystem_eventOnRemoveTrackedQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnRemoveTrackedQuest__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnRemoveTrackedQuest__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnRemoveTrackedQuest__DelegateSignature_Statics::_Script_ImprovedQuestSystem_eventOnRemoveTrackedQuest_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnRemoveTrackedQuest__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnRemoveTrackedQuest__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRemoveTrackedQuest_DelegateWrapper(const FMulticastScriptDelegate& OnRemoveTrackedQuest, FName QuestId)
{
	struct _Script_ImprovedQuestSystem_eventOnRemoveTrackedQuest_Parms
	{
		FName QuestId;
	};
	_Script_ImprovedQuestSystem_eventOnRemoveTrackedQuest_Parms Parms;
	Parms.QuestId=QuestId;
	OnRemoveTrackedQuest.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnRemoveTrackedQuest

// Begin Delegate FOnGetExpAndMoneyReward
struct Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnGetExpAndMoneyReward__DelegateSignature_Statics
{
	struct _Script_ImprovedQuestSystem_eventOnGetExpAndMoneyReward_Parms
	{
		TArray<FNumericRewards> NewExpAndMoneyReward;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewExpAndMoneyReward_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewExpAndMoneyReward_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewExpAndMoneyReward;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnGetExpAndMoneyReward__DelegateSignature_Statics::NewProp_NewExpAndMoneyReward_Inner = { "NewExpAndMoneyReward", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNumericRewards, METADATA_PARAMS(0, nullptr) }; // 651813718
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnGetExpAndMoneyReward__DelegateSignature_Statics::NewProp_NewExpAndMoneyReward = { "NewExpAndMoneyReward", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_ImprovedQuestSystem_eventOnGetExpAndMoneyReward_Parms, NewExpAndMoneyReward), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewExpAndMoneyReward_MetaData), NewProp_NewExpAndMoneyReward_MetaData) }; // 651813718
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnGetExpAndMoneyReward__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnGetExpAndMoneyReward__DelegateSignature_Statics::NewProp_NewExpAndMoneyReward_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnGetExpAndMoneyReward__DelegateSignature_Statics::NewProp_NewExpAndMoneyReward,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnGetExpAndMoneyReward__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnGetExpAndMoneyReward__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_ImprovedQuestSystem, nullptr, "OnGetExpAndMoneyReward__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnGetExpAndMoneyReward__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnGetExpAndMoneyReward__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnGetExpAndMoneyReward__DelegateSignature_Statics::_Script_ImprovedQuestSystem_eventOnGetExpAndMoneyReward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnGetExpAndMoneyReward__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnGetExpAndMoneyReward__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnGetExpAndMoneyReward__DelegateSignature_Statics::_Script_ImprovedQuestSystem_eventOnGetExpAndMoneyReward_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnGetExpAndMoneyReward__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnGetExpAndMoneyReward__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGetExpAndMoneyReward_DelegateWrapper(const FMulticastScriptDelegate& OnGetExpAndMoneyReward, TArray<FNumericRewards> const& NewExpAndMoneyReward)
{
	struct _Script_ImprovedQuestSystem_eventOnGetExpAndMoneyReward_Parms
	{
		TArray<FNumericRewards> NewExpAndMoneyReward;
	};
	_Script_ImprovedQuestSystem_eventOnGetExpAndMoneyReward_Parms Parms;
	Parms.NewExpAndMoneyReward=NewExpAndMoneyReward;
	OnGetExpAndMoneyReward.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnGetExpAndMoneyReward

// Begin Class UIQS_QuestSystemComponent Function AddSmoothUpdateMarker
struct Z_Construct_UFunction_UIQS_QuestSystemComponent_AddSmoothUpdateMarker_Statics
{
	struct IQS_QuestSystemComponent_eventAddSmoothUpdateMarker_Parms
	{
		UIQS_QuestMarkerBase* MarkerRef;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Main Methods" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerRef_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MarkerRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_AddSmoothUpdateMarker_Statics::NewProp_MarkerRef = { "MarkerRef", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_QuestSystemComponent_eventAddSmoothUpdateMarker_Parms, MarkerRef), Z_Construct_UClass_UIQS_QuestMarkerBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerRef_MetaData), NewProp_MarkerRef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIQS_QuestSystemComponent_AddSmoothUpdateMarker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_AddSmoothUpdateMarker_Statics::NewProp_MarkerRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_AddSmoothUpdateMarker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIQS_QuestSystemComponent_AddSmoothUpdateMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIQS_QuestSystemComponent, nullptr, "AddSmoothUpdateMarker", nullptr, nullptr, Z_Construct_UFunction_UIQS_QuestSystemComponent_AddSmoothUpdateMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_AddSmoothUpdateMarker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_AddSmoothUpdateMarker_Statics::IQS_QuestSystemComponent_eventAddSmoothUpdateMarker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_AddSmoothUpdateMarker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIQS_QuestSystemComponent_AddSmoothUpdateMarker_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_AddSmoothUpdateMarker_Statics::IQS_QuestSystemComponent_eventAddSmoothUpdateMarker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIQS_QuestSystemComponent_AddSmoothUpdateMarker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIQS_QuestSystemComponent_AddSmoothUpdateMarker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIQS_QuestSystemComponent::execAddSmoothUpdateMarker)
{
	P_GET_OBJECT(UIQS_QuestMarkerBase,Z_Param_MarkerRef);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddSmoothUpdateMarker(Z_Param_MarkerRef);
	P_NATIVE_END;
}
// End Class UIQS_QuestSystemComponent Function AddSmoothUpdateMarker

// Begin Class UIQS_QuestSystemComponent Function AddTrackedQuest
struct Z_Construct_UFunction_UIQS_QuestSystemComponent_AddTrackedQuest_Statics
{
	struct IQS_QuestSystemComponent_eventAddTrackedQuest_Parms
	{
		FName QuestId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Main Methods" },
		{ "Comment", "//Add tracked quest to a TrackedQuestIds\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Add tracked quest to a TrackedQuestIds" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_AddTrackedQuest_Statics::NewProp_QuestId = { "QuestId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_QuestSystemComponent_eventAddTrackedQuest_Parms, QuestId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIQS_QuestSystemComponent_AddTrackedQuest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_AddTrackedQuest_Statics::NewProp_QuestId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_AddTrackedQuest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIQS_QuestSystemComponent_AddTrackedQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIQS_QuestSystemComponent, nullptr, "AddTrackedQuest", nullptr, nullptr, Z_Construct_UFunction_UIQS_QuestSystemComponent_AddTrackedQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_AddTrackedQuest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_AddTrackedQuest_Statics::IQS_QuestSystemComponent_eventAddTrackedQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_AddTrackedQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIQS_QuestSystemComponent_AddTrackedQuest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_AddTrackedQuest_Statics::IQS_QuestSystemComponent_eventAddTrackedQuest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIQS_QuestSystemComponent_AddTrackedQuest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIQS_QuestSystemComponent_AddTrackedQuest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIQS_QuestSystemComponent::execAddTrackedQuest)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_QuestId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTrackedQuest(Z_Param_QuestId);
	P_NATIVE_END;
}
// End Class UIQS_QuestSystemComponent Function AddTrackedQuest

// Begin Class UIQS_QuestSystemComponent Function CanTakeQuest
struct Z_Construct_UFunction_UIQS_QuestSystemComponent_CanTakeQuest_Statics
{
	struct IQS_QuestSystemComponent_eventCanTakeQuest_Parms
	{
		FName QuestId;
		EQuestState State;
		FName ObjectiveTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Main Methods" },
		{ "Comment", "//Main checker function - finds out, could be this quest recieved or perform a reaching the objective for this quest\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Main checker function - finds out, could be this quest recieved or perform a reaching the objective for this quest" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectiveTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_CanTakeQuest_Statics::NewProp_QuestId = { "QuestId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_QuestSystemComponent_eventCanTakeQuest_Parms, QuestId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_CanTakeQuest_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_CanTakeQuest_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_QuestSystemComponent_eventCanTakeQuest_Parms, State), Z_Construct_UEnum_ImprovedQuestSystem_EQuestState, METADATA_PARAMS(0, nullptr) }; // 392213162
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_CanTakeQuest_Statics::NewProp_ObjectiveTag = { "ObjectiveTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_QuestSystemComponent_eventCanTakeQuest_Parms, ObjectiveTag), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIQS_QuestSystemComponent_CanTakeQuest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IQS_QuestSystemComponent_eventCanTakeQuest_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_CanTakeQuest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IQS_QuestSystemComponent_eventCanTakeQuest_Parms), &Z_Construct_UFunction_UIQS_QuestSystemComponent_CanTakeQuest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIQS_QuestSystemComponent_CanTakeQuest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_CanTakeQuest_Statics::NewProp_QuestId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_CanTakeQuest_Statics::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_CanTakeQuest_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_CanTakeQuest_Statics::NewProp_ObjectiveTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_CanTakeQuest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_CanTakeQuest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIQS_QuestSystemComponent_CanTakeQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIQS_QuestSystemComponent, nullptr, "CanTakeQuest", nullptr, nullptr, Z_Construct_UFunction_UIQS_QuestSystemComponent_CanTakeQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_CanTakeQuest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_CanTakeQuest_Statics::IQS_QuestSystemComponent_eventCanTakeQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_CanTakeQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIQS_QuestSystemComponent_CanTakeQuest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_CanTakeQuest_Statics::IQS_QuestSystemComponent_eventCanTakeQuest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIQS_QuestSystemComponent_CanTakeQuest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIQS_QuestSystemComponent_CanTakeQuest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIQS_QuestSystemComponent::execCanTakeQuest)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_QuestId);
	P_GET_ENUM(EQuestState,Z_Param_State);
	P_GET_PROPERTY(FNameProperty,Z_Param_ObjectiveTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanTakeQuest(Z_Param_QuestId,EQuestState(Z_Param_State),Z_Param_ObjectiveTag);
	P_NATIVE_END;
}
// End Class UIQS_QuestSystemComponent Function CanTakeQuest

// Begin Class UIQS_QuestSystemComponent Function ConvertPlayerProgressArrToMap
struct Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressArrToMap_Statics
{
	struct IQS_QuestSystemComponent_eventConvertPlayerProgressArrToMap_Parms
	{
		TArray<FPlayerProgress> CurrentPlayerProgress;
		TMap<FName,FPlayerProgress> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Main Methods" },
		{ "Comment", "//Convert Player Progress from Arr to Map\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Convert Player Progress from Arr to Map" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentPlayerProgress_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentPlayerProgress;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressArrToMap_Statics::NewProp_CurrentPlayerProgress_Inner = { "CurrentPlayerProgress", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlayerProgress, METADATA_PARAMS(0, nullptr) }; // 3775136938
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressArrToMap_Statics::NewProp_CurrentPlayerProgress = { "CurrentPlayerProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_QuestSystemComponent_eventConvertPlayerProgressArrToMap_Parms, CurrentPlayerProgress), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3775136938
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressArrToMap_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FPlayerProgress, METADATA_PARAMS(0, nullptr) }; // 3775136938
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressArrToMap_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressArrToMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_QuestSystemComponent_eventConvertPlayerProgressArrToMap_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3775136938
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressArrToMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressArrToMap_Statics::NewProp_CurrentPlayerProgress_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressArrToMap_Statics::NewProp_CurrentPlayerProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressArrToMap_Statics::NewProp_ReturnValue_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressArrToMap_Statics::NewProp_ReturnValue_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressArrToMap_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressArrToMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressArrToMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIQS_QuestSystemComponent, nullptr, "ConvertPlayerProgressArrToMap", nullptr, nullptr, Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressArrToMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressArrToMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressArrToMap_Statics::IQS_QuestSystemComponent_eventConvertPlayerProgressArrToMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressArrToMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressArrToMap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressArrToMap_Statics::IQS_QuestSystemComponent_eventConvertPlayerProgressArrToMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressArrToMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressArrToMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIQS_QuestSystemComponent::execConvertPlayerProgressArrToMap)
{
	P_GET_TARRAY(FPlayerProgress,Z_Param_CurrentPlayerProgress);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TMap<FName,FPlayerProgress>*)Z_Param__Result=P_THIS->ConvertPlayerProgressArrToMap(Z_Param_CurrentPlayerProgress);
	P_NATIVE_END;
}
// End Class UIQS_QuestSystemComponent Function ConvertPlayerProgressArrToMap

// Begin Class UIQS_QuestSystemComponent Function ConvertPlayerProgressMapToArr
struct Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressMapToArr_Statics
{
	struct IQS_QuestSystemComponent_eventConvertPlayerProgressMapToArr_Parms
	{
		TMap<FName,FPlayerProgress> CurrentPlayerProgress;
		TArray<FPlayerProgress> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Main Methods" },
		{ "Comment", "//Convert Player Progress from Map to Arr\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Convert Player Progress from Map to Arr" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentPlayerProgress_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentPlayerProgress_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CurrentPlayerProgress;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressMapToArr_Statics::NewProp_CurrentPlayerProgress_ValueProp = { "CurrentPlayerProgress", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FPlayerProgress, METADATA_PARAMS(0, nullptr) }; // 3775136938
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressMapToArr_Statics::NewProp_CurrentPlayerProgress_Key_KeyProp = { "CurrentPlayerProgress_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressMapToArr_Statics::NewProp_CurrentPlayerProgress = { "CurrentPlayerProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_QuestSystemComponent_eventConvertPlayerProgressMapToArr_Parms, CurrentPlayerProgress), EMapPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3775136938
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressMapToArr_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlayerProgress, METADATA_PARAMS(0, nullptr) }; // 3775136938
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressMapToArr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_QuestSystemComponent_eventConvertPlayerProgressMapToArr_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3775136938
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressMapToArr_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressMapToArr_Statics::NewProp_CurrentPlayerProgress_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressMapToArr_Statics::NewProp_CurrentPlayerProgress_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressMapToArr_Statics::NewProp_CurrentPlayerProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressMapToArr_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressMapToArr_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressMapToArr_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressMapToArr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIQS_QuestSystemComponent, nullptr, "ConvertPlayerProgressMapToArr", nullptr, nullptr, Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressMapToArr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressMapToArr_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressMapToArr_Statics::IQS_QuestSystemComponent_eventConvertPlayerProgressMapToArr_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressMapToArr_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressMapToArr_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressMapToArr_Statics::IQS_QuestSystemComponent_eventConvertPlayerProgressMapToArr_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressMapToArr()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressMapToArr_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIQS_QuestSystemComponent::execConvertPlayerProgressMapToArr)
{
	P_GET_TMAP(FName,FPlayerProgress,Z_Param_CurrentPlayerProgress);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FPlayerProgress>*)Z_Param__Result=P_THIS->ConvertPlayerProgressMapToArr(Z_Param_CurrentPlayerProgress);
	P_NATIVE_END;
}
// End Class UIQS_QuestSystemComponent Function ConvertPlayerProgressMapToArr

// Begin Class UIQS_QuestSystemComponent Function CopyPlayerProgressWithoutTrackedQuests
struct Z_Construct_UFunction_UIQS_QuestSystemComponent_CopyPlayerProgressWithoutTrackedQuests_Statics
{
	struct IQS_QuestSystemComponent_eventCopyPlayerProgressWithoutTrackedQuests_Parms
	{
		TArray<FPlayerProgress> NewPlayerProgress;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Main Methods" },
		{ "Comment", "//CopyPlayerProgressWithoutTrackedQuests for multiplayer\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "CopyPlayerProgressWithoutTrackedQuests for multiplayer" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewPlayerProgress_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewPlayerProgress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_CopyPlayerProgressWithoutTrackedQuests_Statics::NewProp_NewPlayerProgress_Inner = { "NewPlayerProgress", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlayerProgress, METADATA_PARAMS(0, nullptr) }; // 3775136938
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_CopyPlayerProgressWithoutTrackedQuests_Statics::NewProp_NewPlayerProgress = { "NewPlayerProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_QuestSystemComponent_eventCopyPlayerProgressWithoutTrackedQuests_Parms, NewPlayerProgress), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3775136938
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIQS_QuestSystemComponent_CopyPlayerProgressWithoutTrackedQuests_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_CopyPlayerProgressWithoutTrackedQuests_Statics::NewProp_NewPlayerProgress_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_CopyPlayerProgressWithoutTrackedQuests_Statics::NewProp_NewPlayerProgress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_CopyPlayerProgressWithoutTrackedQuests_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIQS_QuestSystemComponent_CopyPlayerProgressWithoutTrackedQuests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIQS_QuestSystemComponent, nullptr, "CopyPlayerProgressWithoutTrackedQuests", nullptr, nullptr, Z_Construct_UFunction_UIQS_QuestSystemComponent_CopyPlayerProgressWithoutTrackedQuests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_CopyPlayerProgressWithoutTrackedQuests_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_CopyPlayerProgressWithoutTrackedQuests_Statics::IQS_QuestSystemComponent_eventCopyPlayerProgressWithoutTrackedQuests_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_CopyPlayerProgressWithoutTrackedQuests_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIQS_QuestSystemComponent_CopyPlayerProgressWithoutTrackedQuests_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_CopyPlayerProgressWithoutTrackedQuests_Statics::IQS_QuestSystemComponent_eventCopyPlayerProgressWithoutTrackedQuests_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIQS_QuestSystemComponent_CopyPlayerProgressWithoutTrackedQuests()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIQS_QuestSystemComponent_CopyPlayerProgressWithoutTrackedQuests_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIQS_QuestSystemComponent::execCopyPlayerProgressWithoutTrackedQuests)
{
	P_GET_TARRAY(FPlayerProgress,Z_Param_NewPlayerProgress);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CopyPlayerProgressWithoutTrackedQuests(Z_Param_NewPlayerProgress);
	P_NATIVE_END;
}
// End Class UIQS_QuestSystemComponent Function CopyPlayerProgressWithoutTrackedQuests

// Begin Class UIQS_QuestSystemComponent Function CreateRewardActor
struct Z_Construct_UFunction_UIQS_QuestSystemComponent_CreateRewardActor_Statics
{
	struct IQS_QuestSystemComponent_eventCreateRewardActor_Parms
	{
		TSubclassOf<AIQS_RewardActor> NewRewardActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//Create Reward Actor\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Create Reward Actor" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewRewardActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_CreateRewardActor_Statics::NewProp_NewRewardActor = { "NewRewardActor", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_QuestSystemComponent_eventCreateRewardActor_Parms, NewRewardActor), Z_Construct_UClass_UClass, Z_Construct_UClass_AIQS_RewardActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIQS_QuestSystemComponent_CreateRewardActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_CreateRewardActor_Statics::NewProp_NewRewardActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_CreateRewardActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIQS_QuestSystemComponent_CreateRewardActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIQS_QuestSystemComponent, nullptr, "CreateRewardActor", nullptr, nullptr, Z_Construct_UFunction_UIQS_QuestSystemComponent_CreateRewardActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_CreateRewardActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_CreateRewardActor_Statics::IQS_QuestSystemComponent_eventCreateRewardActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_CreateRewardActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIQS_QuestSystemComponent_CreateRewardActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_CreateRewardActor_Statics::IQS_QuestSystemComponent_eventCreateRewardActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIQS_QuestSystemComponent_CreateRewardActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIQS_QuestSystemComponent_CreateRewardActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIQS_QuestSystemComponent::execCreateRewardActor)
{
	P_GET_OBJECT(UClass,Z_Param_NewRewardActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CreateRewardActor(Z_Param_NewRewardActor);
	P_NATIVE_END;
}
// End Class UIQS_QuestSystemComponent Function CreateRewardActor

// Begin Class UIQS_QuestSystemComponent Function FindDoorsToObjectiveLocation
struct Z_Construct_UFunction_UIQS_QuestSystemComponent_FindDoorsToObjectiveLocation_Statics
{
	struct IQS_QuestSystemComponent_eventFindDoorsToObjectiveLocation_Parms
	{
		FName ObjectiveLevelId;
		TArray<AActor*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Main Methods" },
		{ "Comment", "//Find door actors to other level with limit steps\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Find door actors to other level with limit steps" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectiveLevelId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_FindDoorsToObjectiveLocation_Statics::NewProp_ObjectiveLevelId = { "ObjectiveLevelId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_QuestSystemComponent_eventFindDoorsToObjectiveLocation_Parms, ObjectiveLevelId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_FindDoorsToObjectiveLocation_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_FindDoorsToObjectiveLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_QuestSystemComponent_eventFindDoorsToObjectiveLocation_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIQS_QuestSystemComponent_FindDoorsToObjectiveLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_FindDoorsToObjectiveLocation_Statics::NewProp_ObjectiveLevelId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_FindDoorsToObjectiveLocation_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_FindDoorsToObjectiveLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_FindDoorsToObjectiveLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIQS_QuestSystemComponent_FindDoorsToObjectiveLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIQS_QuestSystemComponent, nullptr, "FindDoorsToObjectiveLocation", nullptr, nullptr, Z_Construct_UFunction_UIQS_QuestSystemComponent_FindDoorsToObjectiveLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_FindDoorsToObjectiveLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_FindDoorsToObjectiveLocation_Statics::IQS_QuestSystemComponent_eventFindDoorsToObjectiveLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_FindDoorsToObjectiveLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIQS_QuestSystemComponent_FindDoorsToObjectiveLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_FindDoorsToObjectiveLocation_Statics::IQS_QuestSystemComponent_eventFindDoorsToObjectiveLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIQS_QuestSystemComponent_FindDoorsToObjectiveLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIQS_QuestSystemComponent_FindDoorsToObjectiveLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIQS_QuestSystemComponent::execFindDoorsToObjectiveLocation)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ObjectiveLevelId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<AActor*>*)Z_Param__Result=P_THIS->FindDoorsToObjectiveLocation(Z_Param_ObjectiveLevelId);
	P_NATIVE_END;
}
// End Class UIQS_QuestSystemComponent Function FindDoorsToObjectiveLocation

// Begin Class UIQS_QuestSystemComponent Function GetQuestInfo
struct Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestInfo_Statics
{
	struct IQS_QuestSystemComponent_eventGetQuestInfo_Parms
	{
		FName QuestId;
		bool IsFound;
		FQuestType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Main Methods" },
		{ "Comment", "//Returns the quest info for this quest from the QuestTable\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Returns the quest info for this quest from the QuestTable" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestId;
	static void NewProp_IsFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestInfo_Statics::NewProp_QuestId = { "QuestId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_QuestSystemComponent_eventGetQuestInfo_Parms, QuestId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestInfo_Statics::NewProp_IsFound_SetBit(void* Obj)
{
	((IQS_QuestSystemComponent_eventGetQuestInfo_Parms*)Obj)->IsFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestInfo_Statics::NewProp_IsFound = { "IsFound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IQS_QuestSystemComponent_eventGetQuestInfo_Parms), &Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestInfo_Statics::NewProp_IsFound_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_QuestSystemComponent_eventGetQuestInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuestType, METADATA_PARAMS(0, nullptr) }; // 2755114105
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestInfo_Statics::NewProp_QuestId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestInfo_Statics::NewProp_IsFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIQS_QuestSystemComponent, nullptr, "GetQuestInfo", nullptr, nullptr, Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestInfo_Statics::IQS_QuestSystemComponent_eventGetQuestInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestInfo_Statics::IQS_QuestSystemComponent_eventGetQuestInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIQS_QuestSystemComponent::execGetQuestInfo)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_QuestId);
	P_GET_UBOOL_REF(Z_Param_Out_IsFound);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FQuestType*)Z_Param__Result=P_THIS->GetQuestInfo(Z_Param_QuestId,Z_Param_Out_IsFound);
	P_NATIVE_END;
}
// End Class UIQS_QuestSystemComponent Function GetQuestInfo

// Begin Class UIQS_QuestSystemComponent Function GetQuestLog
struct Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestLog_Statics
{
	struct IQS_QuestSystemComponent_eventGetQuestLog_Parms
	{
		EQuestLogTypes QuestLogType;
		TArray<FQuestLogInfo> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Main Methods" },
		{ "Comment", "//Return all the quest data for a QuestLog by types: InProgressQuests, FinishedQuests, NotStartedQuests\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Return all the quest data for a QuestLog by types: InProgressQuests, FinishedQuests, NotStartedQuests" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_QuestLogType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_QuestLogType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestLog_Statics::NewProp_QuestLogType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestLog_Statics::NewProp_QuestLogType = { "QuestLogType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_QuestSystemComponent_eventGetQuestLog_Parms, QuestLogType), Z_Construct_UEnum_ImprovedQuestSystem_EQuestLogTypes, METADATA_PARAMS(0, nullptr) }; // 539589632
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestLog_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FQuestLogInfo, METADATA_PARAMS(0, nullptr) }; // 3627445481
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestLog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_QuestSystemComponent_eventGetQuestLog_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3627445481
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestLog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestLog_Statics::NewProp_QuestLogType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestLog_Statics::NewProp_QuestLogType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestLog_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestLog_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestLog_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestLog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIQS_QuestSystemComponent, nullptr, "GetQuestLog", nullptr, nullptr, Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestLog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestLog_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestLog_Statics::IQS_QuestSystemComponent_eventGetQuestLog_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestLog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestLog_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestLog_Statics::IQS_QuestSystemComponent_eventGetQuestLog_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestLog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestLog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIQS_QuestSystemComponent::execGetQuestLog)
{
	P_GET_ENUM(EQuestLogTypes,Z_Param_QuestLogType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FQuestLogInfo>*)Z_Param__Result=P_THIS->GetQuestLog(EQuestLogTypes(Z_Param_QuestLogType));
	P_NATIVE_END;
}
// End Class UIQS_QuestSystemComponent Function GetQuestLog

// Begin Class UIQS_QuestSystemComponent Function GetQuestProgress
struct Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestProgress_Statics
{
	struct IQS_QuestSystemComponent_eventGetQuestProgress_Parms
	{
		FName QuestId;
		bool IsFound;
		FPlayerProgress ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Main Methods" },
		{ "Comment", "//Returns the player progress for this quest from the PlayerProgress\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Returns the player progress for this quest from the PlayerProgress" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestId;
	static void NewProp_IsFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestProgress_Statics::NewProp_QuestId = { "QuestId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_QuestSystemComponent_eventGetQuestProgress_Parms, QuestId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestProgress_Statics::NewProp_IsFound_SetBit(void* Obj)
{
	((IQS_QuestSystemComponent_eventGetQuestProgress_Parms*)Obj)->IsFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestProgress_Statics::NewProp_IsFound = { "IsFound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IQS_QuestSystemComponent_eventGetQuestProgress_Parms), &Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestProgress_Statics::NewProp_IsFound_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_QuestSystemComponent_eventGetQuestProgress_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlayerProgress, METADATA_PARAMS(0, nullptr) }; // 3775136938
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestProgress_Statics::NewProp_QuestId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestProgress_Statics::NewProp_IsFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIQS_QuestSystemComponent, nullptr, "GetQuestProgress", nullptr, nullptr, Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestProgress_Statics::IQS_QuestSystemComponent_eventGetQuestProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestProgress_Statics::IQS_QuestSystemComponent_eventGetQuestProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIQS_QuestSystemComponent::execGetQuestProgress)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_QuestId);
	P_GET_UBOOL_REF(Z_Param_Out_IsFound);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPlayerProgress*)Z_Param__Result=P_THIS->GetQuestProgress(Z_Param_QuestId,Z_Param_Out_IsFound);
	P_NATIVE_END;
}
// End Class UIQS_QuestSystemComponent Function GetQuestProgress

// Begin Class UIQS_QuestSystemComponent Function GetQuestState
struct Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestState_Statics
{
	struct IQS_QuestSystemComponent_eventGetQuestState_Parms
	{
		FName QuestId;
		bool IsFound;
		int32 CurrentSequence;
		EQuestState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Main Methods" },
		{ "Comment", "//Returns a QuestState of choosen quest\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Returns a QuestState of choosen quest" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestId;
	static void NewProp_IsFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFound;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentSequence;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestState_Statics::NewProp_QuestId = { "QuestId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_QuestSystemComponent_eventGetQuestState_Parms, QuestId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestState_Statics::NewProp_IsFound_SetBit(void* Obj)
{
	((IQS_QuestSystemComponent_eventGetQuestState_Parms*)Obj)->IsFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestState_Statics::NewProp_IsFound = { "IsFound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IQS_QuestSystemComponent_eventGetQuestState_Parms), &Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestState_Statics::NewProp_IsFound_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestState_Statics::NewProp_CurrentSequence = { "CurrentSequence", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_QuestSystemComponent_eventGetQuestState_Parms, CurrentSequence), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_QuestSystemComponent_eventGetQuestState_Parms, ReturnValue), Z_Construct_UEnum_ImprovedQuestSystem_EQuestState, METADATA_PARAMS(0, nullptr) }; // 392213162
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestState_Statics::NewProp_QuestId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestState_Statics::NewProp_IsFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestState_Statics::NewProp_CurrentSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIQS_QuestSystemComponent, nullptr, "GetQuestState", nullptr, nullptr, Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestState_Statics::IQS_QuestSystemComponent_eventGetQuestState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestState_Statics::IQS_QuestSystemComponent_eventGetQuestState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIQS_QuestSystemComponent::execGetQuestState)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_QuestId);
	P_GET_UBOOL_REF(Z_Param_Out_IsFound);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_CurrentSequence);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EQuestState*)Z_Param__Result=P_THIS->GetQuestState(Z_Param_QuestId,Z_Param_Out_IsFound,Z_Param_Out_CurrentSequence);
	P_NATIVE_END;
}
// End Class UIQS_QuestSystemComponent Function GetQuestState

// Begin Class UIQS_QuestSystemComponent Function IsCanTakeQuestByQuestsMustNotBeFinishedToTake
struct Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsMustNotBeFinishedToTake_Statics
{
	struct IQS_QuestSystemComponent_eventIsCanTakeQuestByQuestsMustNotBeFinishedToTake_Parms
	{
		FName QuestId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Main Methods" },
		{ "Comment", "//Check if there is a quests, wich blocks this quest\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Check if there is a quests, wich blocks this quest" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsMustNotBeFinishedToTake_Statics::NewProp_QuestId = { "QuestId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_QuestSystemComponent_eventIsCanTakeQuestByQuestsMustNotBeFinishedToTake_Parms, QuestId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsMustNotBeFinishedToTake_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IQS_QuestSystemComponent_eventIsCanTakeQuestByQuestsMustNotBeFinishedToTake_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsMustNotBeFinishedToTake_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IQS_QuestSystemComponent_eventIsCanTakeQuestByQuestsMustNotBeFinishedToTake_Parms), &Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsMustNotBeFinishedToTake_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsMustNotBeFinishedToTake_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsMustNotBeFinishedToTake_Statics::NewProp_QuestId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsMustNotBeFinishedToTake_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsMustNotBeFinishedToTake_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsMustNotBeFinishedToTake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIQS_QuestSystemComponent, nullptr, "IsCanTakeQuestByQuestsMustNotBeFinishedToTake", nullptr, nullptr, Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsMustNotBeFinishedToTake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsMustNotBeFinishedToTake_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsMustNotBeFinishedToTake_Statics::IQS_QuestSystemComponent_eventIsCanTakeQuestByQuestsMustNotBeFinishedToTake_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsMustNotBeFinishedToTake_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsMustNotBeFinishedToTake_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsMustNotBeFinishedToTake_Statics::IQS_QuestSystemComponent_eventIsCanTakeQuestByQuestsMustNotBeFinishedToTake_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsMustNotBeFinishedToTake()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsMustNotBeFinishedToTake_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIQS_QuestSystemComponent::execIsCanTakeQuestByQuestsMustNotBeFinishedToTake)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_QuestId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCanTakeQuestByQuestsMustNotBeFinishedToTake(Z_Param_QuestId);
	P_NATIVE_END;
}
// End Class UIQS_QuestSystemComponent Function IsCanTakeQuestByQuestsMustNotBeFinishedToTake

// Begin Class UIQS_QuestSystemComponent Function IsCanTakeQuestByQuestsNeedToFinishToTake
struct Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsNeedToFinishToTake_Statics
{
	struct IQS_QuestSystemComponent_eventIsCanTakeQuestByQuestsNeedToFinishToTake_Parms
	{
		FName QuestId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Main Methods" },
		{ "Comment", "//Check if previos quests are done\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Check if previos quests are done" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsNeedToFinishToTake_Statics::NewProp_QuestId = { "QuestId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_QuestSystemComponent_eventIsCanTakeQuestByQuestsNeedToFinishToTake_Parms, QuestId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsNeedToFinishToTake_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IQS_QuestSystemComponent_eventIsCanTakeQuestByQuestsNeedToFinishToTake_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsNeedToFinishToTake_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IQS_QuestSystemComponent_eventIsCanTakeQuestByQuestsNeedToFinishToTake_Parms), &Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsNeedToFinishToTake_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsNeedToFinishToTake_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsNeedToFinishToTake_Statics::NewProp_QuestId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsNeedToFinishToTake_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsNeedToFinishToTake_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsNeedToFinishToTake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIQS_QuestSystemComponent, nullptr, "IsCanTakeQuestByQuestsNeedToFinishToTake", nullptr, nullptr, Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsNeedToFinishToTake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsNeedToFinishToTake_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsNeedToFinishToTake_Statics::IQS_QuestSystemComponent_eventIsCanTakeQuestByQuestsNeedToFinishToTake_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsNeedToFinishToTake_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsNeedToFinishToTake_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsNeedToFinishToTake_Statics::IQS_QuestSystemComponent_eventIsCanTakeQuestByQuestsNeedToFinishToTake_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsNeedToFinishToTake()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsNeedToFinishToTake_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIQS_QuestSystemComponent::execIsCanTakeQuestByQuestsNeedToFinishToTake)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_QuestId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsCanTakeQuestByQuestsNeedToFinishToTake(Z_Param_QuestId);
	P_NATIVE_END;
}
// End Class UIQS_QuestSystemComponent Function IsCanTakeQuestByQuestsNeedToFinishToTake

// Begin Class UIQS_QuestSystemComponent Function IsObjectiveCompleted
struct Z_Construct_UFunction_UIQS_QuestSystemComponent_IsObjectiveCompleted_Statics
{
	struct IQS_QuestSystemComponent_eventIsObjectiveCompleted_Parms
	{
		FName QuestId;
		FName ObjectiveTag;
		int32 PlayerHave;
		int32 PlayerNeeds;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Main Methods" },
		{ "Comment", "//Find out, if player finished an objective in a quest\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Find out, if player finished an objective in a quest" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectiveTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerHave;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerNeeds;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_IsObjectiveCompleted_Statics::NewProp_QuestId = { "QuestId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_QuestSystemComponent_eventIsObjectiveCompleted_Parms, QuestId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_IsObjectiveCompleted_Statics::NewProp_ObjectiveTag = { "ObjectiveTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_QuestSystemComponent_eventIsObjectiveCompleted_Parms, ObjectiveTag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_IsObjectiveCompleted_Statics::NewProp_PlayerHave = { "PlayerHave", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_QuestSystemComponent_eventIsObjectiveCompleted_Parms, PlayerHave), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_IsObjectiveCompleted_Statics::NewProp_PlayerNeeds = { "PlayerNeeds", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_QuestSystemComponent_eventIsObjectiveCompleted_Parms, PlayerNeeds), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIQS_QuestSystemComponent_IsObjectiveCompleted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IQS_QuestSystemComponent_eventIsObjectiveCompleted_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_IsObjectiveCompleted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IQS_QuestSystemComponent_eventIsObjectiveCompleted_Parms), &Z_Construct_UFunction_UIQS_QuestSystemComponent_IsObjectiveCompleted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIQS_QuestSystemComponent_IsObjectiveCompleted_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_IsObjectiveCompleted_Statics::NewProp_QuestId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_IsObjectiveCompleted_Statics::NewProp_ObjectiveTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_IsObjectiveCompleted_Statics::NewProp_PlayerHave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_IsObjectiveCompleted_Statics::NewProp_PlayerNeeds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_IsObjectiveCompleted_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_IsObjectiveCompleted_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIQS_QuestSystemComponent_IsObjectiveCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIQS_QuestSystemComponent, nullptr, "IsObjectiveCompleted", nullptr, nullptr, Z_Construct_UFunction_UIQS_QuestSystemComponent_IsObjectiveCompleted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_IsObjectiveCompleted_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_IsObjectiveCompleted_Statics::IQS_QuestSystemComponent_eventIsObjectiveCompleted_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_IsObjectiveCompleted_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIQS_QuestSystemComponent_IsObjectiveCompleted_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_IsObjectiveCompleted_Statics::IQS_QuestSystemComponent_eventIsObjectiveCompleted_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIQS_QuestSystemComponent_IsObjectiveCompleted()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIQS_QuestSystemComponent_IsObjectiveCompleted_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIQS_QuestSystemComponent::execIsObjectiveCompleted)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_QuestId);
	P_GET_PROPERTY(FNameProperty,Z_Param_ObjectiveTag);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PlayerHave);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_PlayerNeeds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsObjectiveCompleted(Z_Param_QuestId,Z_Param_ObjectiveTag,Z_Param_Out_PlayerHave,Z_Param_Out_PlayerNeeds);
	P_NATIVE_END;
}
// End Class UIQS_QuestSystemComponent Function IsObjectiveCompleted

// Begin Class UIQS_QuestSystemComponent Function IsOwnerHasAuthority
struct Z_Construct_UFunction_UIQS_QuestSystemComponent_IsOwnerHasAuthority_Statics
{
	struct IQS_QuestSystemComponent_eventIsOwnerHasAuthority_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Main Methods" },
		{ "Comment", "//If player, owning this component - is a server\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "If player, owning this component - is a server" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIQS_QuestSystemComponent_IsOwnerHasAuthority_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IQS_QuestSystemComponent_eventIsOwnerHasAuthority_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_IsOwnerHasAuthority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IQS_QuestSystemComponent_eventIsOwnerHasAuthority_Parms), &Z_Construct_UFunction_UIQS_QuestSystemComponent_IsOwnerHasAuthority_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIQS_QuestSystemComponent_IsOwnerHasAuthority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_IsOwnerHasAuthority_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_IsOwnerHasAuthority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIQS_QuestSystemComponent_IsOwnerHasAuthority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIQS_QuestSystemComponent, nullptr, "IsOwnerHasAuthority", nullptr, nullptr, Z_Construct_UFunction_UIQS_QuestSystemComponent_IsOwnerHasAuthority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_IsOwnerHasAuthority_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_IsOwnerHasAuthority_Statics::IQS_QuestSystemComponent_eventIsOwnerHasAuthority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_IsOwnerHasAuthority_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIQS_QuestSystemComponent_IsOwnerHasAuthority_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_IsOwnerHasAuthority_Statics::IQS_QuestSystemComponent_eventIsOwnerHasAuthority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIQS_QuestSystemComponent_IsOwnerHasAuthority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIQS_QuestSystemComponent_IsOwnerHasAuthority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIQS_QuestSystemComponent::execIsOwnerHasAuthority)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOwnerHasAuthority();
	P_NATIVE_END;
}
// End Class UIQS_QuestSystemComponent Function IsOwnerHasAuthority

// Begin Class UIQS_QuestSystemComponent Function IsOwnerLocallyControlledCpp
struct Z_Construct_UFunction_UIQS_QuestSystemComponent_IsOwnerLocallyControlledCpp_Statics
{
	struct IQS_QuestSystemComponent_eventIsOwnerLocallyControlledCpp_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Main Methods" },
		{ "Comment", "//If player, owning this component - is locally controlled\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "If player, owning this component - is locally controlled" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UIQS_QuestSystemComponent_IsOwnerLocallyControlledCpp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((IQS_QuestSystemComponent_eventIsOwnerLocallyControlledCpp_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_IsOwnerLocallyControlledCpp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IQS_QuestSystemComponent_eventIsOwnerLocallyControlledCpp_Parms), &Z_Construct_UFunction_UIQS_QuestSystemComponent_IsOwnerLocallyControlledCpp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIQS_QuestSystemComponent_IsOwnerLocallyControlledCpp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_IsOwnerLocallyControlledCpp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_IsOwnerLocallyControlledCpp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIQS_QuestSystemComponent_IsOwnerLocallyControlledCpp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIQS_QuestSystemComponent, nullptr, "IsOwnerLocallyControlledCpp", nullptr, nullptr, Z_Construct_UFunction_UIQS_QuestSystemComponent_IsOwnerLocallyControlledCpp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_IsOwnerLocallyControlledCpp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_IsOwnerLocallyControlledCpp_Statics::IQS_QuestSystemComponent_eventIsOwnerLocallyControlledCpp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_IsOwnerLocallyControlledCpp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIQS_QuestSystemComponent_IsOwnerLocallyControlledCpp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_IsOwnerLocallyControlledCpp_Statics::IQS_QuestSystemComponent_eventIsOwnerLocallyControlledCpp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIQS_QuestSystemComponent_IsOwnerLocallyControlledCpp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIQS_QuestSystemComponent_IsOwnerLocallyControlledCpp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIQS_QuestSystemComponent::execIsOwnerLocallyControlledCpp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsOwnerLocallyControlledCpp();
	P_NATIVE_END;
}
// End Class UIQS_QuestSystemComponent Function IsOwnerLocallyControlledCpp

// Begin Class UIQS_QuestSystemComponent Function LoadProgress
struct Z_Construct_UFunction_UIQS_QuestSystemComponent_LoadProgress_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Main Methods" },
		{ "Comment", "//load the player progress from the save file\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "load the player progress from the save file" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIQS_QuestSystemComponent_LoadProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIQS_QuestSystemComponent, nullptr, "LoadProgress", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_LoadProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIQS_QuestSystemComponent_LoadProgress_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UIQS_QuestSystemComponent_LoadProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIQS_QuestSystemComponent_LoadProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIQS_QuestSystemComponent::execLoadProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoadProgress();
	P_NATIVE_END;
}
// End Class UIQS_QuestSystemComponent Function LoadProgress

// Begin Class UIQS_QuestSystemComponent Function MakeQuestLogInfo
struct Z_Construct_UFunction_UIQS_QuestSystemComponent_MakeQuestLogInfo_Statics
{
	struct IQS_QuestSystemComponent_eventMakeQuestLogInfo_Parms
	{
		FPlayerProgress NewQuestProgress;
		FQuestType NewQuestType;
		FQuestLogInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Main Methods" },
		{ "Comment", "//Make QuestLog type\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Make QuestLog type" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewQuestProgress;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewQuestType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_MakeQuestLogInfo_Statics::NewProp_NewQuestProgress = { "NewQuestProgress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_QuestSystemComponent_eventMakeQuestLogInfo_Parms, NewQuestProgress), Z_Construct_UScriptStruct_FPlayerProgress, METADATA_PARAMS(0, nullptr) }; // 3775136938
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_MakeQuestLogInfo_Statics::NewProp_NewQuestType = { "NewQuestType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_QuestSystemComponent_eventMakeQuestLogInfo_Parms, NewQuestType), Z_Construct_UScriptStruct_FQuestType, METADATA_PARAMS(0, nullptr) }; // 2755114105
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_MakeQuestLogInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_QuestSystemComponent_eventMakeQuestLogInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuestLogInfo, METADATA_PARAMS(0, nullptr) }; // 3627445481
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIQS_QuestSystemComponent_MakeQuestLogInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_MakeQuestLogInfo_Statics::NewProp_NewQuestProgress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_MakeQuestLogInfo_Statics::NewProp_NewQuestType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_MakeQuestLogInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_MakeQuestLogInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIQS_QuestSystemComponent_MakeQuestLogInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIQS_QuestSystemComponent, nullptr, "MakeQuestLogInfo", nullptr, nullptr, Z_Construct_UFunction_UIQS_QuestSystemComponent_MakeQuestLogInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_MakeQuestLogInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_MakeQuestLogInfo_Statics::IQS_QuestSystemComponent_eventMakeQuestLogInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_MakeQuestLogInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIQS_QuestSystemComponent_MakeQuestLogInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_MakeQuestLogInfo_Statics::IQS_QuestSystemComponent_eventMakeQuestLogInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIQS_QuestSystemComponent_MakeQuestLogInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIQS_QuestSystemComponent_MakeQuestLogInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIQS_QuestSystemComponent::execMakeQuestLogInfo)
{
	P_GET_STRUCT(FPlayerProgress,Z_Param_NewQuestProgress);
	P_GET_STRUCT(FQuestType,Z_Param_NewQuestType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FQuestLogInfo*)Z_Param__Result=P_THIS->MakeQuestLogInfo(Z_Param_NewQuestProgress,Z_Param_NewQuestType);
	P_NATIVE_END;
}
// End Class UIQS_QuestSystemComponent Function MakeQuestLogInfo

// Begin Class UIQS_QuestSystemComponent Function OnLoad_BP
static const FName NAME_UIQS_QuestSystemComponent_OnLoad_BP = FName(TEXT("OnLoad_BP"));
void UIQS_QuestSystemComponent::OnLoad_BP()
{
	UFunction* Func = FindFunctionChecked(NAME_UIQS_QuestSystemComponent_OnLoad_BP);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnLoad_BP_Implementation();
	}
}
struct Z_Construct_UFunction_UIQS_QuestSystemComponent_OnLoad_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//On Load n Blueprint event\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "On Load n Blueprint event" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIQS_QuestSystemComponent_OnLoad_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIQS_QuestSystemComponent, nullptr, "OnLoad_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_OnLoad_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIQS_QuestSystemComponent_OnLoad_BP_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UIQS_QuestSystemComponent_OnLoad_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIQS_QuestSystemComponent_OnLoad_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIQS_QuestSystemComponent::execOnLoad_BP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnLoad_BP_Implementation();
	P_NATIVE_END;
}
// End Class UIQS_QuestSystemComponent Function OnLoad_BP

// Begin Class UIQS_QuestSystemComponent Function OnSave_BP
static const FName NAME_UIQS_QuestSystemComponent_OnSave_BP = FName(TEXT("OnSave_BP"));
void UIQS_QuestSystemComponent::OnSave_BP()
{
	UFunction* Func = FindFunctionChecked(NAME_UIQS_QuestSystemComponent_OnSave_BP);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		OnSave_BP_Implementation();
	}
}
struct Z_Construct_UFunction_UIQS_QuestSystemComponent_OnSave_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//On Save n Blueprint event\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "On Save n Blueprint event" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIQS_QuestSystemComponent_OnSave_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIQS_QuestSystemComponent, nullptr, "OnSave_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_OnSave_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIQS_QuestSystemComponent_OnSave_BP_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UIQS_QuestSystemComponent_OnSave_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIQS_QuestSystemComponent_OnSave_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIQS_QuestSystemComponent::execOnSave_BP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSave_BP_Implementation();
	P_NATIVE_END;
}
// End Class UIQS_QuestSystemComponent Function OnSave_BP

// Begin Class UIQS_QuestSystemComponent Function QuestAddStepOnlyByTag
struct Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestAddStepOnlyByTag_Statics
{
	struct IQS_QuestSystemComponent_eventQuestAddStepOnlyByTag_Parms
	{
		FName ObjectiveTag;
		bool IsMinusStep;
		bool NoCheck;
		bool IsSuccess;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Main Methods" },
		{ "Comment", "//Add step for quest by only ObjectiveTag without a QuestId - usefull when some item is objective for many quests at the same time\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Add step for quest by only ObjectiveTag without a QuestId - usefull when some item is objective for many quests at the same time" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectiveTag;
	static void NewProp_IsMinusStep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMinusStep;
	static void NewProp_NoCheck_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NoCheck;
	static void NewProp_IsSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestAddStepOnlyByTag_Statics::NewProp_ObjectiveTag = { "ObjectiveTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_QuestSystemComponent_eventQuestAddStepOnlyByTag_Parms, ObjectiveTag), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestAddStepOnlyByTag_Statics::NewProp_IsMinusStep_SetBit(void* Obj)
{
	((IQS_QuestSystemComponent_eventQuestAddStepOnlyByTag_Parms*)Obj)->IsMinusStep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestAddStepOnlyByTag_Statics::NewProp_IsMinusStep = { "IsMinusStep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IQS_QuestSystemComponent_eventQuestAddStepOnlyByTag_Parms), &Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestAddStepOnlyByTag_Statics::NewProp_IsMinusStep_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestAddStepOnlyByTag_Statics::NewProp_NoCheck_SetBit(void* Obj)
{
	((IQS_QuestSystemComponent_eventQuestAddStepOnlyByTag_Parms*)Obj)->NoCheck = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestAddStepOnlyByTag_Statics::NewProp_NoCheck = { "NoCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IQS_QuestSystemComponent_eventQuestAddStepOnlyByTag_Parms), &Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestAddStepOnlyByTag_Statics::NewProp_NoCheck_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestAddStepOnlyByTag_Statics::NewProp_IsSuccess_SetBit(void* Obj)
{
	((IQS_QuestSystemComponent_eventQuestAddStepOnlyByTag_Parms*)Obj)->IsSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestAddStepOnlyByTag_Statics::NewProp_IsSuccess = { "IsSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IQS_QuestSystemComponent_eventQuestAddStepOnlyByTag_Parms), &Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestAddStepOnlyByTag_Statics::NewProp_IsSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestAddStepOnlyByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestAddStepOnlyByTag_Statics::NewProp_ObjectiveTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestAddStepOnlyByTag_Statics::NewProp_IsMinusStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestAddStepOnlyByTag_Statics::NewProp_NoCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestAddStepOnlyByTag_Statics::NewProp_IsSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestAddStepOnlyByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestAddStepOnlyByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIQS_QuestSystemComponent, nullptr, "QuestAddStepOnlyByTag", nullptr, nullptr, Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestAddStepOnlyByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestAddStepOnlyByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestAddStepOnlyByTag_Statics::IQS_QuestSystemComponent_eventQuestAddStepOnlyByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestAddStepOnlyByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestAddStepOnlyByTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestAddStepOnlyByTag_Statics::IQS_QuestSystemComponent_eventQuestAddStepOnlyByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestAddStepOnlyByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestAddStepOnlyByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIQS_QuestSystemComponent::execQuestAddStepOnlyByTag)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ObjectiveTag);
	P_GET_UBOOL(Z_Param_IsMinusStep);
	P_GET_UBOOL(Z_Param_NoCheck);
	P_GET_UBOOL_REF(Z_Param_Out_IsSuccess);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QuestAddStepOnlyByTag(Z_Param_ObjectiveTag,Z_Param_IsMinusStep,Z_Param_NoCheck,Z_Param_Out_IsSuccess);
	P_NATIVE_END;
}
// End Class UIQS_QuestSystemComponent Function QuestAddStepOnlyByTag

// Begin Class UIQS_QuestSystemComponent Function QuestComplete
struct Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestComplete_Statics
{
	struct IQS_QuestSystemComponent_eventQuestComplete_Parms
	{
		FName QuestId;
		EQuestState State;
		FName ObjectiveTag;
		bool NoCheck;
		bool IsSuccess;
		bool IsSilent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Main Methods" },
		{ "Comment", "// Main function to operate with quests - call it when player Get quest, reach an objective, finish quests and other.\n// Arguments:\n// QuestId - main quest id from QuestTable\n// State - state of a quest: QuestNotStarted, GotQuest, QuestDoneButNotFinished, QuestFinished, QuestOneStepAdd, QuestOneStepMinus\n// ObjectiveTag - When quest objective are reached, this tag defines which part of a quest sequence are done. You can leave it untouched for an easy quests with one objective in sequence\n// NoCheck - determines, will it be checked or not. For example, if you choose it on \"true\" and player finish the objective for the quest he hasn't received yet, quest will be automaticly started. If you choose \"false\", then finishing the objective will be skipped, because player dont have this quest\n// IsSuccess - in here there will be returned a result of success/unsuccess a QuestComplete function execution\n// IsSilent - if it is TRUE, it will not show any notifications after call this function\n" },
		{ "CPP_Default_IsSilent", "false" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Main function to operate with quests - call it when player Get quest, reach an objective, finish quests and other.\nArguments:\nQuestId - main quest id from QuestTable\nState - state of a quest: QuestNotStarted, GotQuest, QuestDoneButNotFinished, QuestFinished, QuestOneStepAdd, QuestOneStepMinus\nObjectiveTag - When quest objective are reached, this tag defines which part of a quest sequence are done. You can leave it untouched for an easy quests with one objective in sequence\nNoCheck - determines, will it be checked or not. For example, if you choose it on \"true\" and player finish the objective for the quest he hasn't received yet, quest will be automaticly started. If you choose \"false\", then finishing the objective will be skipped, because player dont have this quest\nIsSuccess - in here there will be returned a result of success/unsuccess a QuestComplete function execution\nIsSilent - if it is TRUE, it will not show any notifications after call this function" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectiveTag;
	static void NewProp_NoCheck_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NoCheck;
	static void NewProp_IsSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSuccess;
	static void NewProp_IsSilent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSilent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestComplete_Statics::NewProp_QuestId = { "QuestId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_QuestSystemComponent_eventQuestComplete_Parms, QuestId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestComplete_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestComplete_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_QuestSystemComponent_eventQuestComplete_Parms, State), Z_Construct_UEnum_ImprovedQuestSystem_EQuestState, METADATA_PARAMS(0, nullptr) }; // 392213162
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestComplete_Statics::NewProp_ObjectiveTag = { "ObjectiveTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_QuestSystemComponent_eventQuestComplete_Parms, ObjectiveTag), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestComplete_Statics::NewProp_NoCheck_SetBit(void* Obj)
{
	((IQS_QuestSystemComponent_eventQuestComplete_Parms*)Obj)->NoCheck = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestComplete_Statics::NewProp_NoCheck = { "NoCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IQS_QuestSystemComponent_eventQuestComplete_Parms), &Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestComplete_Statics::NewProp_NoCheck_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestComplete_Statics::NewProp_IsSuccess_SetBit(void* Obj)
{
	((IQS_QuestSystemComponent_eventQuestComplete_Parms*)Obj)->IsSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestComplete_Statics::NewProp_IsSuccess = { "IsSuccess", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IQS_QuestSystemComponent_eventQuestComplete_Parms), &Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestComplete_Statics::NewProp_IsSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestComplete_Statics::NewProp_IsSilent_SetBit(void* Obj)
{
	((IQS_QuestSystemComponent_eventQuestComplete_Parms*)Obj)->IsSilent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestComplete_Statics::NewProp_IsSilent = { "IsSilent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(IQS_QuestSystemComponent_eventQuestComplete_Parms), &Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestComplete_Statics::NewProp_IsSilent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestComplete_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestComplete_Statics::NewProp_QuestId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestComplete_Statics::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestComplete_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestComplete_Statics::NewProp_ObjectiveTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestComplete_Statics::NewProp_NoCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestComplete_Statics::NewProp_IsSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestComplete_Statics::NewProp_IsSilent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestComplete_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIQS_QuestSystemComponent, nullptr, "QuestComplete", nullptr, nullptr, Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestComplete_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestComplete_Statics::IQS_QuestSystemComponent_eventQuestComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestComplete_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestComplete_Statics::IQS_QuestSystemComponent_eventQuestComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIQS_QuestSystemComponent::execQuestComplete)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_QuestId);
	P_GET_ENUM(EQuestState,Z_Param_State);
	P_GET_PROPERTY(FNameProperty,Z_Param_ObjectiveTag);
	P_GET_UBOOL(Z_Param_NoCheck);
	P_GET_UBOOL_REF(Z_Param_Out_IsSuccess);
	P_GET_UBOOL(Z_Param_IsSilent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QuestComplete(Z_Param_QuestId,EQuestState(Z_Param_State),Z_Param_ObjectiveTag,Z_Param_NoCheck,Z_Param_Out_IsSuccess,Z_Param_IsSilent);
	P_NATIVE_END;
}
// End Class UIQS_QuestSystemComponent Function QuestComplete

// Begin Class UIQS_QuestSystemComponent Function RefreshSmoothUpdateMarkers
struct Z_Construct_UFunction_UIQS_QuestSystemComponent_RefreshSmoothUpdateMarkers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Main Methods" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIQS_QuestSystemComponent_RefreshSmoothUpdateMarkers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIQS_QuestSystemComponent, nullptr, "RefreshSmoothUpdateMarkers", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_RefreshSmoothUpdateMarkers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIQS_QuestSystemComponent_RefreshSmoothUpdateMarkers_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UIQS_QuestSystemComponent_RefreshSmoothUpdateMarkers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIQS_QuestSystemComponent_RefreshSmoothUpdateMarkers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIQS_QuestSystemComponent::execRefreshSmoothUpdateMarkers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RefreshSmoothUpdateMarkers();
	P_NATIVE_END;
}
// End Class UIQS_QuestSystemComponent Function RefreshSmoothUpdateMarkers

// Begin Class UIQS_QuestSystemComponent Function RemoveTrackedQuest
struct Z_Construct_UFunction_UIQS_QuestSystemComponent_RemoveTrackedQuest_Statics
{
	struct IQS_QuestSystemComponent_eventRemoveTrackedQuest_Parms
	{
		FName QuestId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Main Methods" },
		{ "Comment", "//Remove a tracked quest from the TrackedQuestIds\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Remove a tracked quest from the TrackedQuestIds" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIQS_QuestSystemComponent_RemoveTrackedQuest_Statics::NewProp_QuestId = { "QuestId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_QuestSystemComponent_eventRemoveTrackedQuest_Parms, QuestId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIQS_QuestSystemComponent_RemoveTrackedQuest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestSystemComponent_RemoveTrackedQuest_Statics::NewProp_QuestId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_RemoveTrackedQuest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIQS_QuestSystemComponent_RemoveTrackedQuest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIQS_QuestSystemComponent, nullptr, "RemoveTrackedQuest", nullptr, nullptr, Z_Construct_UFunction_UIQS_QuestSystemComponent_RemoveTrackedQuest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_RemoveTrackedQuest_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_RemoveTrackedQuest_Statics::IQS_QuestSystemComponent_eventRemoveTrackedQuest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_RemoveTrackedQuest_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIQS_QuestSystemComponent_RemoveTrackedQuest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIQS_QuestSystemComponent_RemoveTrackedQuest_Statics::IQS_QuestSystemComponent_eventRemoveTrackedQuest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIQS_QuestSystemComponent_RemoveTrackedQuest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIQS_QuestSystemComponent_RemoveTrackedQuest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIQS_QuestSystemComponent::execRemoveTrackedQuest)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_QuestId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveTrackedQuest(Z_Param_QuestId);
	P_NATIVE_END;
}
// End Class UIQS_QuestSystemComponent Function RemoveTrackedQuest

// Begin Class UIQS_QuestSystemComponent Function ResetPlayerProgress
struct Z_Construct_UFunction_UIQS_QuestSystemComponent_ResetPlayerProgress_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Main Methods" },
		{ "Comment", "//Reload a save and fill the PlayerProgress array accordingly with QuestTable. Should be always called at the start of the game. Very inportant if you changed a QuestTable data\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Reload a save and fill the PlayerProgress array accordingly with QuestTable. Should be always called at the start of the game. Very inportant if you changed a QuestTable data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIQS_QuestSystemComponent_ResetPlayerProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIQS_QuestSystemComponent, nullptr, "ResetPlayerProgress", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_ResetPlayerProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIQS_QuestSystemComponent_ResetPlayerProgress_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UIQS_QuestSystemComponent_ResetPlayerProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIQS_QuestSystemComponent_ResetPlayerProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIQS_QuestSystemComponent::execResetPlayerProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetPlayerProgress();
	P_NATIVE_END;
}
// End Class UIQS_QuestSystemComponent Function ResetPlayerProgress

// Begin Class UIQS_QuestSystemComponent Function SaveProgress
struct Z_Construct_UFunction_UIQS_QuestSystemComponent_SaveProgress_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Main Methods" },
		{ "Comment", "//Save the player progress to the save file\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Save the player progress to the save file" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIQS_QuestSystemComponent_SaveProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIQS_QuestSystemComponent, nullptr, "SaveProgress", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestSystemComponent_SaveProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIQS_QuestSystemComponent_SaveProgress_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UIQS_QuestSystemComponent_SaveProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIQS_QuestSystemComponent_SaveProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIQS_QuestSystemComponent::execSaveProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveProgress();
	P_NATIVE_END;
}
// End Class UIQS_QuestSystemComponent Function SaveProgress

// Begin Class UIQS_QuestSystemComponent
void UIQS_QuestSystemComponent::StaticRegisterNativesUIQS_QuestSystemComponent()
{
	UClass* Class = UIQS_QuestSystemComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddSmoothUpdateMarker", &UIQS_QuestSystemComponent::execAddSmoothUpdateMarker },
		{ "AddTrackedQuest", &UIQS_QuestSystemComponent::execAddTrackedQuest },
		{ "CanTakeQuest", &UIQS_QuestSystemComponent::execCanTakeQuest },
		{ "ConvertPlayerProgressArrToMap", &UIQS_QuestSystemComponent::execConvertPlayerProgressArrToMap },
		{ "ConvertPlayerProgressMapToArr", &UIQS_QuestSystemComponent::execConvertPlayerProgressMapToArr },
		{ "CopyPlayerProgressWithoutTrackedQuests", &UIQS_QuestSystemComponent::execCopyPlayerProgressWithoutTrackedQuests },
		{ "CreateRewardActor", &UIQS_QuestSystemComponent::execCreateRewardActor },
		{ "FindDoorsToObjectiveLocation", &UIQS_QuestSystemComponent::execFindDoorsToObjectiveLocation },
		{ "GetQuestInfo", &UIQS_QuestSystemComponent::execGetQuestInfo },
		{ "GetQuestLog", &UIQS_QuestSystemComponent::execGetQuestLog },
		{ "GetQuestProgress", &UIQS_QuestSystemComponent::execGetQuestProgress },
		{ "GetQuestState", &UIQS_QuestSystemComponent::execGetQuestState },
		{ "IsCanTakeQuestByQuestsMustNotBeFinishedToTake", &UIQS_QuestSystemComponent::execIsCanTakeQuestByQuestsMustNotBeFinishedToTake },
		{ "IsCanTakeQuestByQuestsNeedToFinishToTake", &UIQS_QuestSystemComponent::execIsCanTakeQuestByQuestsNeedToFinishToTake },
		{ "IsObjectiveCompleted", &UIQS_QuestSystemComponent::execIsObjectiveCompleted },
		{ "IsOwnerHasAuthority", &UIQS_QuestSystemComponent::execIsOwnerHasAuthority },
		{ "IsOwnerLocallyControlledCpp", &UIQS_QuestSystemComponent::execIsOwnerLocallyControlledCpp },
		{ "LoadProgress", &UIQS_QuestSystemComponent::execLoadProgress },
		{ "MakeQuestLogInfo", &UIQS_QuestSystemComponent::execMakeQuestLogInfo },
		{ "OnLoad_BP", &UIQS_QuestSystemComponent::execOnLoad_BP },
		{ "OnSave_BP", &UIQS_QuestSystemComponent::execOnSave_BP },
		{ "QuestAddStepOnlyByTag", &UIQS_QuestSystemComponent::execQuestAddStepOnlyByTag },
		{ "QuestComplete", &UIQS_QuestSystemComponent::execQuestComplete },
		{ "RefreshSmoothUpdateMarkers", &UIQS_QuestSystemComponent::execRefreshSmoothUpdateMarkers },
		{ "RemoveTrackedQuest", &UIQS_QuestSystemComponent::execRemoveTrackedQuest },
		{ "ResetPlayerProgress", &UIQS_QuestSystemComponent::execResetPlayerProgress },
		{ "SaveProgress", &UIQS_QuestSystemComponent::execSaveProgress },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIQS_QuestSystemComponent);
UClass* Z_Construct_UClass_UIQS_QuestSystemComponent_NoRegister()
{
	return UIQS_QuestSystemComponent::StaticClass();
}
struct Z_Construct_UClass_UIQS_QuestSystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/IQS_QuestSystemComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestStateChanged_MetaData[] = {
		{ "Comment", "//<Delegates>\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "<Delegates>" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRemoveTrackedQuest_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGetExpAndMoneyReward_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerProgressMap_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//<Variables>\n//Main player progress array - goes to the Save Game\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "<Variables>\nMain player progress array - goes to the Save Game" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestTable_MetaData[] = {
		{ "Category", "Main Variables" },
		{ "Comment", "//Main quest table path - all quests must be filled here\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Main quest table path - all quests must be filled here" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WillHideMouseInGame_MetaData[] = {
		{ "Category", "Main Variables" },
		{ "Comment", "//Will hide mouse in game (useful in First Person Template games, Racing games, Third Person Template Games)\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Will hide mouse in game (useful in First Person Template games, Racing games, Third Person Template Games)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WillShowMouseInUI_MetaData[] = {
		{ "Category", "Main Variables" },
		{ "Comment", "//Will show mouse in UI - should be false for GamePad games\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Will show mouse in UI - should be false for GamePad games" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WillShowScreenMarks_MetaData[] = {
		{ "Category", "Main Variables" },
		{ "Comment", "//Show or hide screen markers\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Show or hide screen markers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WillShowCompassMarks_MetaData[] = {
		{ "Category", "Main Variables" },
		{ "Comment", "//Show or hide compass widget\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Show or hide compass widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WillShowMinimap_MetaData[] = {
		{ "Category", "Main Variables" },
		{ "Comment", "//Show or hide minimap widget\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Show or hide minimap widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WillMinimapTurnWithPlayer_MetaData[] = {
		{ "Category", "Main Variables" },
		{ "Comment", "//Will Minimap turn with a player\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Will Minimap turn with a player" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTrackedQuestsNum_MetaData[] = {
		{ "Category", "Main Variables" },
		{ "Comment", "//Max tracked quests count\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Max tracked quests count" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WillSkipQuestDoneButNotFinishedStage_MetaData[] = {
		{ "Category", "Main Variables" },
		{ "Comment", "//Skip a stage where quest delivers to an NPC\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Skip a stage where quest delivers to an NPC" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsFogOfWarEnabled_MetaData[] = {
		{ "Category", "Main Variables" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartNameFirstLevel_MetaData[] = {
		{ "Category", "Main Variables StartGameSettings" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPlayerLocationOnFirstLevel_MetaData[] = {
		{ "Category", "Main Variables StartGameSettings" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartPlayerRotationOnFirstLevel_MetaData[] = {
		{ "Category", "Main Variables StartGameSettings" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WillSave_MetaData[] = {
		{ "Category", "Main Variables SaveLoad" },
		{ "Comment", "//Will save the progress in file\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Will save the progress in file" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveGameSlotName_MetaData[] = {
		{ "Category", "Main Variables SaveLoad" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentUserIndexForSave_MetaData[] = {
		{ "Category", "Main Variables SaveLoad" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WillNotifyWhenSaved_MetaData[] = {
		{ "Category", "Main Variables SaveLoad" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandartDoorMarker_MetaData[] = {
		{ "Category", "Main Variables MarkerStyles" },
		{ "Comment", "//Door marker standart style\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Door marker standart style" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandartNewQuestMarker_MetaData[] = {
		{ "Category", "Main Variables MarkerStyles" },
		{ "Comment", "//New quest marker standart style\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "New quest marker standart style" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandartGotQuestMarker_MetaData[] = {
		{ "Category", "Main Variables MarkerStyles" },
		{ "Comment", "//Standart Got Quest Marker\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Standart Got Quest Marker" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StandartQuestDoneButNotFinished_MetaData[] = {
		{ "Category", "Main Variables MarkerStyles" },
		{ "Comment", "//Quest done but not finished standart style\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Quest done but not finished standart style" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrossLevelDoorMapping_MetaData[] = {
		{ "Category", "Main Variables CrossLevelDoorMapping" },
		{ "Comment", "//Map of Level - Doors to other levels\n//Example:\n//1) OpenWorld - House0, House1, Castle0\n//2) House0 - OpenWorld, Cave\n//3) Cave - House0\n//4) House1 - OpenWorld\n//5) Castle0 - OpenWorld\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Map of Level - Doors to other levels\nExample:\n1) OpenWorld - House0, House1, Castle0\n2) House0 - OpenWorld, Cave\n3) Cave - House0\n4) House1 - OpenWorld\n5) Castle0 - OpenWorld" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimapLevelSettings_MetaData[] = {
		{ "Category", "Main Variables CrossLevelDoorMapping" },
		{ "Comment", "//Minimap settings for this level\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Minimap settings for this level" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCrossLevelDoorMappingStepCount_MetaData[] = {
		{ "Category", "Main Variables CrossLevelDoorMapping" },
		{ "Comment", "//Maximum steps for determining the path to the goal between the doors. Function is recursive, so we need some limiter to exclude endless cycles on the big projects. But you can easy up this value\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Maximum steps for determining the path to the goal between the doors. Function is recursive, so we need some limiter to exclude endless cycles on the big projects. But you can easy up this value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GotQuestSound_MetaData[] = {
		{ "Category", "Main Variables Sounds" },
		{ "Comment", "//Sound on getting new quest\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Sound on getting new quest" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextSequenceSound_MetaData[] = {
		{ "Category", "Main Variables Sounds" },
		{ "Comment", "//Sound on next quest sequence\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Sound on next quest sequence" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectiveAddOrMinusSound_MetaData[] = {
		{ "Category", "Main Variables Sounds" },
		{ "Comment", "//Sound on objective minus\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Sound on objective minus" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestCompletedButNotFinishedSound_MetaData[] = {
		{ "Category", "Main Variables Sounds" },
		{ "Comment", "//Sound on quest completed before return to NPC\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Sound on quest completed before return to NPC" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestFinishedSound_MetaData[] = {
		{ "Category", "Main Variables Sounds" },
		{ "Comment", "//Sound for quest finish\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Sound for quest finish" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerProgressDebug_MetaData[] = {
		{ "Category", "Main Variables Debug" },
		{ "Comment", "//Player progress for debug\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Player progress for debug" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsInDebugMode_MetaData[] = {
		{ "Category", "Main Variables Debug" },
		{ "Comment", "//Is debug mode on\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Is debug mode on" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsNoCinematicsInDebugMode_MetaData[] = {
		{ "Category", "Main Variables Debug" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugLevelName_MetaData[] = {
		{ "Category", "Main Variables Debug" },
		{ "Comment", "//Level will be loaded on debug mode\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Level will be loaded on debug mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugTransform_MetaData[] = {
		{ "Category", "Main Variables Debug" },
		{ "Comment", "//Player pawn transform on debug mode\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Player pawn transform on debug mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackedQuestIds_MetaData[] = {
		{ "Category", "UnEditable" },
		{ "Comment", "//Tracked quests list\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Tracked quests list" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CinematicsPlayed_MetaData[] = {
		{ "Category", "UnEditable" },
		{ "Comment", "//Already played cinematics\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Already played cinematics" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestOrderNumber_MetaData[] = {
		{ "Category", "UnEditable" },
		{ "Comment", "//Order number of a quest, that determines an order of quest showns by the Quest Log Widget\n" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
		{ "ToolTip", "Order number of a quest, that determines an order of quest showns by the Quest Log Widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MP_MinimapRef_MetaData[] = {
		{ "Category", "UnEditable" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestScreenMarkersArrCpp_MetaData[] = {
		{ "Category", "UnEditable-TickMarkers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldScreenMarkersArrCpp_MetaData[] = {
		{ "Category", "UnEditable-TickMarkers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestMinimapMarkersArrCpp_MetaData[] = {
		{ "Category", "UnEditable-TickMarkers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldMinimapMarkersArrCpp_MetaData[] = {
		{ "Category", "UnEditable-TickMarkers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothUpdateMarkersCpp_MetaData[] = {
		{ "Category", "UnEditable-TickMarkers" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/IQS_QuestSystemComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_QuestStateChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRemoveTrackedQuest;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGetExpAndMoneyReward;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerProgressMap_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PlayerProgressMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_PlayerProgressMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestTable;
	static void NewProp_WillHideMouseInGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WillHideMouseInGame;
	static void NewProp_WillShowMouseInUI_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WillShowMouseInUI;
	static void NewProp_WillShowScreenMarks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WillShowScreenMarks;
	static void NewProp_WillShowCompassMarks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WillShowCompassMarks;
	static void NewProp_WillShowMinimap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WillShowMinimap;
	static void NewProp_WillMinimapTurnWithPlayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WillMinimapTurnWithPlayer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTrackedQuestsNum;
	static void NewProp_WillSkipQuestDoneButNotFinishedStage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WillSkipQuestDoneButNotFinishedStage;
	static void NewProp_IsFogOfWarEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFogOfWarEnabled;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StartNameFirstLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPlayerLocationOnFirstLevel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StartPlayerRotationOnFirstLevel;
	static void NewProp_WillSave_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WillSave;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveGameSlotName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentUserIndexForSave;
	static void NewProp_WillNotifyWhenSaved_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WillNotifyWhenSaved;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StandartDoorMarker;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StandartNewQuestMarker;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StandartGotQuestMarker;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StandartQuestDoneButNotFinished;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CrossLevelDoorMapping_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CrossLevelDoorMapping_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_CrossLevelDoorMapping;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinimapLevelSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MinimapLevelSettings;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCrossLevelDoorMappingStepCount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GotQuestSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NextSequenceSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectiveAddOrMinusSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestCompletedButNotFinishedSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestFinishedSound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerProgressDebug_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerProgressDebug;
	static void NewProp_IsInDebugMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsInDebugMode;
	static void NewProp_IsNoCinematicsInDebugMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsNoCinematicsInDebugMode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DebugLevelName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugTransform;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TrackedQuestIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackedQuestIds;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CinematicsPlayed_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CinematicsPlayed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_QuestOrderNumber;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MP_MinimapRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestScreenMarkersArrCpp_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_QuestScreenMarkersArrCpp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldScreenMarkersArrCpp_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WorldScreenMarkersArrCpp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuestMinimapMarkersArrCpp_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_QuestMinimapMarkersArrCpp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldMinimapMarkersArrCpp_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WorldMinimapMarkersArrCpp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SmoothUpdateMarkersCpp_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SmoothUpdateMarkersCpp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIQS_QuestSystemComponent_AddSmoothUpdateMarker, "AddSmoothUpdateMarker" }, // 1159692283
		{ &Z_Construct_UFunction_UIQS_QuestSystemComponent_AddTrackedQuest, "AddTrackedQuest" }, // 3349086345
		{ &Z_Construct_UFunction_UIQS_QuestSystemComponent_CanTakeQuest, "CanTakeQuest" }, // 1282993486
		{ &Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressArrToMap, "ConvertPlayerProgressArrToMap" }, // 37964194
		{ &Z_Construct_UFunction_UIQS_QuestSystemComponent_ConvertPlayerProgressMapToArr, "ConvertPlayerProgressMapToArr" }, // 4076186064
		{ &Z_Construct_UFunction_UIQS_QuestSystemComponent_CopyPlayerProgressWithoutTrackedQuests, "CopyPlayerProgressWithoutTrackedQuests" }, // 4056558238
		{ &Z_Construct_UFunction_UIQS_QuestSystemComponent_CreateRewardActor, "CreateRewardActor" }, // 376964202
		{ &Z_Construct_UFunction_UIQS_QuestSystemComponent_FindDoorsToObjectiveLocation, "FindDoorsToObjectiveLocation" }, // 3300986284
		{ &Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestInfo, "GetQuestInfo" }, // 2645292701
		{ &Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestLog, "GetQuestLog" }, // 1692777031
		{ &Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestProgress, "GetQuestProgress" }, // 2712592800
		{ &Z_Construct_UFunction_UIQS_QuestSystemComponent_GetQuestState, "GetQuestState" }, // 1861239967
		{ &Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsMustNotBeFinishedToTake, "IsCanTakeQuestByQuestsMustNotBeFinishedToTake" }, // 230226419
		{ &Z_Construct_UFunction_UIQS_QuestSystemComponent_IsCanTakeQuestByQuestsNeedToFinishToTake, "IsCanTakeQuestByQuestsNeedToFinishToTake" }, // 2315310688
		{ &Z_Construct_UFunction_UIQS_QuestSystemComponent_IsObjectiveCompleted, "IsObjectiveCompleted" }, // 3944526829
		{ &Z_Construct_UFunction_UIQS_QuestSystemComponent_IsOwnerHasAuthority, "IsOwnerHasAuthority" }, // 3245526318
		{ &Z_Construct_UFunction_UIQS_QuestSystemComponent_IsOwnerLocallyControlledCpp, "IsOwnerLocallyControlledCpp" }, // 689486182
		{ &Z_Construct_UFunction_UIQS_QuestSystemComponent_LoadProgress, "LoadProgress" }, // 1286113060
		{ &Z_Construct_UFunction_UIQS_QuestSystemComponent_MakeQuestLogInfo, "MakeQuestLogInfo" }, // 994971636
		{ &Z_Construct_UFunction_UIQS_QuestSystemComponent_OnLoad_BP, "OnLoad_BP" }, // 4242255633
		{ &Z_Construct_UFunction_UIQS_QuestSystemComponent_OnSave_BP, "OnSave_BP" }, // 1596321816
		{ &Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestAddStepOnlyByTag, "QuestAddStepOnlyByTag" }, // 3772449586
		{ &Z_Construct_UFunction_UIQS_QuestSystemComponent_QuestComplete, "QuestComplete" }, // 1884339700
		{ &Z_Construct_UFunction_UIQS_QuestSystemComponent_RefreshSmoothUpdateMarkers, "RefreshSmoothUpdateMarkers" }, // 511066364
		{ &Z_Construct_UFunction_UIQS_QuestSystemComponent_RemoveTrackedQuest, "RemoveTrackedQuest" }, // 2728669017
		{ &Z_Construct_UFunction_UIQS_QuestSystemComponent_ResetPlayerProgress, "ResetPlayerProgress" }, // 3638004425
		{ &Z_Construct_UFunction_UIQS_QuestSystemComponent_SaveProgress, "SaveProgress" }, // 875142538
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIQS_QuestSystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_QuestStateChanged = { "QuestStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestSystemComponent, QuestStateChanged), Z_Construct_UDelegateFunction_ImprovedQuestSystem_QuestStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestStateChanged_MetaData), NewProp_QuestStateChanged_MetaData) }; // 3445495038
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_OnRemoveTrackedQuest = { "OnRemoveTrackedQuest", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestSystemComponent, OnRemoveTrackedQuest), Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnRemoveTrackedQuest__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRemoveTrackedQuest_MetaData), NewProp_OnRemoveTrackedQuest_MetaData) }; // 3932919821
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_OnGetExpAndMoneyReward = { "OnGetExpAndMoneyReward", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestSystemComponent, OnGetExpAndMoneyReward), Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnGetExpAndMoneyReward__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGetExpAndMoneyReward_MetaData), NewProp_OnGetExpAndMoneyReward_MetaData) }; // 1761665542
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_PlayerProgressMap_ValueProp = { "PlayerProgressMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FPlayerProgress, METADATA_PARAMS(0, nullptr) }; // 3775136938
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_PlayerProgressMap_Key_KeyProp = { "PlayerProgressMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_PlayerProgressMap = { "PlayerProgressMap", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestSystemComponent, PlayerProgressMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerProgressMap_MetaData), NewProp_PlayerProgressMap_MetaData) }; // 3775136938
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_QuestTable = { "QuestTable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestSystemComponent, QuestTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestTable_MetaData), NewProp_QuestTable_MetaData) };
void Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WillHideMouseInGame_SetBit(void* Obj)
{
	((UIQS_QuestSystemComponent*)Obj)->WillHideMouseInGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WillHideMouseInGame = { "WillHideMouseInGame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIQS_QuestSystemComponent), &Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WillHideMouseInGame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WillHideMouseInGame_MetaData), NewProp_WillHideMouseInGame_MetaData) };
void Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WillShowMouseInUI_SetBit(void* Obj)
{
	((UIQS_QuestSystemComponent*)Obj)->WillShowMouseInUI = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WillShowMouseInUI = { "WillShowMouseInUI", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIQS_QuestSystemComponent), &Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WillShowMouseInUI_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WillShowMouseInUI_MetaData), NewProp_WillShowMouseInUI_MetaData) };
void Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WillShowScreenMarks_SetBit(void* Obj)
{
	((UIQS_QuestSystemComponent*)Obj)->WillShowScreenMarks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WillShowScreenMarks = { "WillShowScreenMarks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIQS_QuestSystemComponent), &Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WillShowScreenMarks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WillShowScreenMarks_MetaData), NewProp_WillShowScreenMarks_MetaData) };
void Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WillShowCompassMarks_SetBit(void* Obj)
{
	((UIQS_QuestSystemComponent*)Obj)->WillShowCompassMarks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WillShowCompassMarks = { "WillShowCompassMarks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIQS_QuestSystemComponent), &Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WillShowCompassMarks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WillShowCompassMarks_MetaData), NewProp_WillShowCompassMarks_MetaData) };
void Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WillShowMinimap_SetBit(void* Obj)
{
	((UIQS_QuestSystemComponent*)Obj)->WillShowMinimap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WillShowMinimap = { "WillShowMinimap", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIQS_QuestSystemComponent), &Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WillShowMinimap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WillShowMinimap_MetaData), NewProp_WillShowMinimap_MetaData) };
void Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WillMinimapTurnWithPlayer_SetBit(void* Obj)
{
	((UIQS_QuestSystemComponent*)Obj)->WillMinimapTurnWithPlayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WillMinimapTurnWithPlayer = { "WillMinimapTurnWithPlayer", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIQS_QuestSystemComponent), &Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WillMinimapTurnWithPlayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WillMinimapTurnWithPlayer_MetaData), NewProp_WillMinimapTurnWithPlayer_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_MaxTrackedQuestsNum = { "MaxTrackedQuestsNum", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestSystemComponent, MaxTrackedQuestsNum), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTrackedQuestsNum_MetaData), NewProp_MaxTrackedQuestsNum_MetaData) };
void Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WillSkipQuestDoneButNotFinishedStage_SetBit(void* Obj)
{
	((UIQS_QuestSystemComponent*)Obj)->WillSkipQuestDoneButNotFinishedStage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WillSkipQuestDoneButNotFinishedStage = { "WillSkipQuestDoneButNotFinishedStage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIQS_QuestSystemComponent), &Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WillSkipQuestDoneButNotFinishedStage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WillSkipQuestDoneButNotFinishedStage_MetaData), NewProp_WillSkipQuestDoneButNotFinishedStage_MetaData) };
void Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_IsFogOfWarEnabled_SetBit(void* Obj)
{
	((UIQS_QuestSystemComponent*)Obj)->IsFogOfWarEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_IsFogOfWarEnabled = { "IsFogOfWarEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIQS_QuestSystemComponent), &Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_IsFogOfWarEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsFogOfWarEnabled_MetaData), NewProp_IsFogOfWarEnabled_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_StartNameFirstLevel = { "StartNameFirstLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestSystemComponent, StartNameFirstLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartNameFirstLevel_MetaData), NewProp_StartNameFirstLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_StartPlayerLocationOnFirstLevel = { "StartPlayerLocationOnFirstLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestSystemComponent, StartPlayerLocationOnFirstLevel), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPlayerLocationOnFirstLevel_MetaData), NewProp_StartPlayerLocationOnFirstLevel_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_StartPlayerRotationOnFirstLevel = { "StartPlayerRotationOnFirstLevel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestSystemComponent, StartPlayerRotationOnFirstLevel), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartPlayerRotationOnFirstLevel_MetaData), NewProp_StartPlayerRotationOnFirstLevel_MetaData) };
void Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WillSave_SetBit(void* Obj)
{
	((UIQS_QuestSystemComponent*)Obj)->WillSave = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WillSave = { "WillSave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIQS_QuestSystemComponent), &Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WillSave_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WillSave_MetaData), NewProp_WillSave_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_SaveGameSlotName = { "SaveGameSlotName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestSystemComponent, SaveGameSlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveGameSlotName_MetaData), NewProp_SaveGameSlotName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_CurrentUserIndexForSave = { "CurrentUserIndexForSave", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestSystemComponent, CurrentUserIndexForSave), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentUserIndexForSave_MetaData), NewProp_CurrentUserIndexForSave_MetaData) };
void Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WillNotifyWhenSaved_SetBit(void* Obj)
{
	((UIQS_QuestSystemComponent*)Obj)->WillNotifyWhenSaved = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WillNotifyWhenSaved = { "WillNotifyWhenSaved", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIQS_QuestSystemComponent), &Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WillNotifyWhenSaved_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WillNotifyWhenSaved_MetaData), NewProp_WillNotifyWhenSaved_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_StandartDoorMarker = { "StandartDoorMarker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestSystemComponent, StandartDoorMarker), Z_Construct_UScriptStruct_FStructIconSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandartDoorMarker_MetaData), NewProp_StandartDoorMarker_MetaData) }; // 2251188672
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_StandartNewQuestMarker = { "StandartNewQuestMarker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestSystemComponent, StandartNewQuestMarker), Z_Construct_UScriptStruct_FStructIconSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandartNewQuestMarker_MetaData), NewProp_StandartNewQuestMarker_MetaData) }; // 2251188672
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_StandartGotQuestMarker = { "StandartGotQuestMarker", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestSystemComponent, StandartGotQuestMarker), Z_Construct_UScriptStruct_FStructIconSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandartGotQuestMarker_MetaData), NewProp_StandartGotQuestMarker_MetaData) }; // 2251188672
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_StandartQuestDoneButNotFinished = { "StandartQuestDoneButNotFinished", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestSystemComponent, StandartQuestDoneButNotFinished), Z_Construct_UScriptStruct_FStructIconSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StandartQuestDoneButNotFinished_MetaData), NewProp_StandartQuestDoneButNotFinished_MetaData) }; // 2251188672
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_CrossLevelDoorMapping_ValueProp = { "CrossLevelDoorMapping", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FMapNamesArray, METADATA_PARAMS(0, nullptr) }; // 2653733095
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_CrossLevelDoorMapping_Key_KeyProp = { "CrossLevelDoorMapping_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_CrossLevelDoorMapping = { "CrossLevelDoorMapping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestSystemComponent, CrossLevelDoorMapping), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrossLevelDoorMapping_MetaData), NewProp_CrossLevelDoorMapping_MetaData) }; // 2653733095
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_MinimapLevelSettings_Inner = { "MinimapLevelSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMinimapLevelSettings, METADATA_PARAMS(0, nullptr) }; // 14826
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_MinimapLevelSettings = { "MinimapLevelSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestSystemComponent, MinimapLevelSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimapLevelSettings_MetaData), NewProp_MinimapLevelSettings_MetaData) }; // 14826
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_MaxCrossLevelDoorMappingStepCount = { "MaxCrossLevelDoorMappingStepCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestSystemComponent, MaxCrossLevelDoorMappingStepCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCrossLevelDoorMappingStepCount_MetaData), NewProp_MaxCrossLevelDoorMappingStepCount_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_GotQuestSound = { "GotQuestSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestSystemComponent, GotQuestSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GotQuestSound_MetaData), NewProp_GotQuestSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_NextSequenceSound = { "NextSequenceSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestSystemComponent, NextSequenceSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextSequenceSound_MetaData), NewProp_NextSequenceSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_ObjectiveAddOrMinusSound = { "ObjectiveAddOrMinusSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestSystemComponent, ObjectiveAddOrMinusSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectiveAddOrMinusSound_MetaData), NewProp_ObjectiveAddOrMinusSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_QuestCompletedButNotFinishedSound = { "QuestCompletedButNotFinishedSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestSystemComponent, QuestCompletedButNotFinishedSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestCompletedButNotFinishedSound_MetaData), NewProp_QuestCompletedButNotFinishedSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_QuestFinishedSound = { "QuestFinishedSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestSystemComponent, QuestFinishedSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestFinishedSound_MetaData), NewProp_QuestFinishedSound_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_PlayerProgressDebug_Inner = { "PlayerProgressDebug", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlayerProgress, METADATA_PARAMS(0, nullptr) }; // 3775136938
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_PlayerProgressDebug = { "PlayerProgressDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestSystemComponent, PlayerProgressDebug), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerProgressDebug_MetaData), NewProp_PlayerProgressDebug_MetaData) }; // 3775136938
void Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_IsInDebugMode_SetBit(void* Obj)
{
	((UIQS_QuestSystemComponent*)Obj)->IsInDebugMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_IsInDebugMode = { "IsInDebugMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIQS_QuestSystemComponent), &Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_IsInDebugMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsInDebugMode_MetaData), NewProp_IsInDebugMode_MetaData) };
void Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_IsNoCinematicsInDebugMode_SetBit(void* Obj)
{
	((UIQS_QuestSystemComponent*)Obj)->IsNoCinematicsInDebugMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_IsNoCinematicsInDebugMode = { "IsNoCinematicsInDebugMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIQS_QuestSystemComponent), &Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_IsNoCinematicsInDebugMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsNoCinematicsInDebugMode_MetaData), NewProp_IsNoCinematicsInDebugMode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_DebugLevelName = { "DebugLevelName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestSystemComponent, DebugLevelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugLevelName_MetaData), NewProp_DebugLevelName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_DebugTransform = { "DebugTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestSystemComponent, DebugTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugTransform_MetaData), NewProp_DebugTransform_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_TrackedQuestIds_Inner = { "TrackedQuestIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_TrackedQuestIds = { "TrackedQuestIds", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestSystemComponent, TrackedQuestIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackedQuestIds_MetaData), NewProp_TrackedQuestIds_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_CinematicsPlayed_Inner = { "CinematicsPlayed", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_CinematicsPlayed = { "CinematicsPlayed", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestSystemComponent, CinematicsPlayed), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CinematicsPlayed_MetaData), NewProp_CinematicsPlayed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_QuestOrderNumber = { "QuestOrderNumber", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestSystemComponent, QuestOrderNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestOrderNumber_MetaData), NewProp_QuestOrderNumber_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_MP_MinimapRef = { "MP_MinimapRef", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestSystemComponent, MP_MinimapRef), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MP_MinimapRef_MetaData), NewProp_MP_MinimapRef_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_QuestScreenMarkersArrCpp_Inner = { "QuestScreenMarkersArrCpp", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UIQS_QuestMarkerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_QuestScreenMarkersArrCpp = { "QuestScreenMarkersArrCpp", nullptr, (EPropertyFlags)0x001000800000000c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestSystemComponent, QuestScreenMarkersArrCpp), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestScreenMarkersArrCpp_MetaData), NewProp_QuestScreenMarkersArrCpp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WorldScreenMarkersArrCpp_Inner = { "WorldScreenMarkersArrCpp", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UIQS_QuestMarkerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WorldScreenMarkersArrCpp = { "WorldScreenMarkersArrCpp", nullptr, (EPropertyFlags)0x001000800000000c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestSystemComponent, WorldScreenMarkersArrCpp), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldScreenMarkersArrCpp_MetaData), NewProp_WorldScreenMarkersArrCpp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_QuestMinimapMarkersArrCpp_Inner = { "QuestMinimapMarkersArrCpp", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UIQS_QuestMarkerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_QuestMinimapMarkersArrCpp = { "QuestMinimapMarkersArrCpp", nullptr, (EPropertyFlags)0x001000800000000c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestSystemComponent, QuestMinimapMarkersArrCpp), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestMinimapMarkersArrCpp_MetaData), NewProp_QuestMinimapMarkersArrCpp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WorldMinimapMarkersArrCpp_Inner = { "WorldMinimapMarkersArrCpp", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UIQS_QuestMarkerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WorldMinimapMarkersArrCpp = { "WorldMinimapMarkersArrCpp", nullptr, (EPropertyFlags)0x001000800000000c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestSystemComponent, WorldMinimapMarkersArrCpp), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldMinimapMarkersArrCpp_MetaData), NewProp_WorldMinimapMarkersArrCpp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_SmoothUpdateMarkersCpp_Inner = { "SmoothUpdateMarkersCpp", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UIQS_QuestMarkerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_SmoothUpdateMarkersCpp = { "SmoothUpdateMarkersCpp", nullptr, (EPropertyFlags)0x001000800000000c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestSystemComponent, SmoothUpdateMarkersCpp), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothUpdateMarkersCpp_MetaData), NewProp_SmoothUpdateMarkersCpp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_QuestStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_OnRemoveTrackedQuest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_OnGetExpAndMoneyReward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_PlayerProgressMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_PlayerProgressMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_PlayerProgressMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_QuestTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WillHideMouseInGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WillShowMouseInUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WillShowScreenMarks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WillShowCompassMarks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WillShowMinimap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WillMinimapTurnWithPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_MaxTrackedQuestsNum,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WillSkipQuestDoneButNotFinishedStage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_IsFogOfWarEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_StartNameFirstLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_StartPlayerLocationOnFirstLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_StartPlayerRotationOnFirstLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WillSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_SaveGameSlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_CurrentUserIndexForSave,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WillNotifyWhenSaved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_StandartDoorMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_StandartNewQuestMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_StandartGotQuestMarker,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_StandartQuestDoneButNotFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_CrossLevelDoorMapping_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_CrossLevelDoorMapping_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_CrossLevelDoorMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_MinimapLevelSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_MinimapLevelSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_MaxCrossLevelDoorMappingStepCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_GotQuestSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_NextSequenceSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_ObjectiveAddOrMinusSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_QuestCompletedButNotFinishedSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_QuestFinishedSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_PlayerProgressDebug_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_PlayerProgressDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_IsInDebugMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_IsNoCinematicsInDebugMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_DebugLevelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_DebugTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_TrackedQuestIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_TrackedQuestIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_CinematicsPlayed_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_CinematicsPlayed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_QuestOrderNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_MP_MinimapRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_QuestScreenMarkersArrCpp_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_QuestScreenMarkersArrCpp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WorldScreenMarkersArrCpp_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WorldScreenMarkersArrCpp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_QuestMinimapMarkersArrCpp_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_QuestMinimapMarkersArrCpp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WorldMinimapMarkersArrCpp_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_WorldMinimapMarkersArrCpp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_SmoothUpdateMarkersCpp_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::NewProp_SmoothUpdateMarkersCpp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ImprovedQuestSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::ClassParams = {
	&UIQS_QuestSystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIQS_QuestSystemComponent()
{
	if (!Z_Registration_Info_UClass_UIQS_QuestSystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIQS_QuestSystemComponent.OuterSingleton, Z_Construct_UClass_UIQS_QuestSystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIQS_QuestSystemComponent.OuterSingleton;
}
template<> IMPROVEDQUESTSYSTEM_API UClass* StaticClass<UIQS_QuestSystemComponent>()
{
	return UIQS_QuestSystemComponent::StaticClass();
}
UIQS_QuestSystemComponent::UIQS_QuestSystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIQS_QuestSystemComponent);
UIQS_QuestSystemComponent::~UIQS_QuestSystemComponent() {}
// End Class UIQS_QuestSystemComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Components_IQS_QuestSystemComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIQS_QuestSystemComponent, UIQS_QuestSystemComponent::StaticClass, TEXT("UIQS_QuestSystemComponent"), &Z_Registration_Info_UClass_UIQS_QuestSystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIQS_QuestSystemComponent), 2681141527U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Components_IQS_QuestSystemComponent_h_3782732902(TEXT("/Script/ImprovedQuestSystem"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Components_IQS_QuestSystemComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Components_IQS_QuestSystemComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
