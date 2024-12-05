// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImprovedQuestSystem/Public/Structure/IQS_Types.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIQS_Types() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_AIQS_RewardActor_NoRegister();
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_UIQS_Types();
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_UIQS_Types_NoRegister();
IMPROVEDQUESTSYSTEM_API UEnum* Z_Construct_UEnum_ImprovedQuestSystem_ECompassComparisonResult();
IMPROVEDQUESTSYSTEM_API UEnum* Z_Construct_UEnum_ImprovedQuestSystem_EMarkersMainTypes();
IMPROVEDQUESTSYSTEM_API UEnum* Z_Construct_UEnum_ImprovedQuestSystem_EQuestLogTypes();
IMPROVEDQUESTSYSTEM_API UEnum* Z_Construct_UEnum_ImprovedQuestSystem_EQuestState();
IMPROVEDQUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDirectionInfo();
IMPROVEDQUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDoorPointsByLevels();
IMPROVEDQUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FMapNamesArray();
IMPROVEDQUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FMinimapLevelSettings();
IMPROVEDQUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNumericRewards();
IMPROVEDQUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerProgress();
IMPROVEDQUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FQuestLogInfo();
IMPROVEDQUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FQuestObjectiveTarget();
IMPROVEDQUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FQuestType();
IMPROVEDQUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSequenceMaster();
IMPROVEDQUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FStructIconSelector();
UPackage* Z_Construct_UPackage__Script_ImprovedQuestSystem();
// End Cross Module References

// Begin Enum EQuestState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQuestState;
static UEnum* EQuestState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EQuestState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EQuestState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ImprovedQuestSystem_EQuestState, (UObject*)Z_Construct_UPackage__Script_ImprovedQuestSystem(), TEXT("EQuestState"));
	}
	return Z_Registration_Info_UEnum_EQuestState.OuterSingleton;
}
template<> IMPROVEDQUESTSYSTEM_API UEnum* StaticEnum<EQuestState>()
{
	return EQuestState_StaticEnum();
}
struct Z_Construct_UEnum_ImprovedQuestSystem_EQuestState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Quest Current State\n" },
		{ "GotQuest.Name", "EQuestState::GotQuest" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "QuestDoneButNotFinished.Name", "EQuestState::QuestDoneButNotFinished" },
		{ "QuestFinished.Name", "EQuestState::QuestFinished" },
		{ "QuestNotStarted.Name", "EQuestState::QuestNotStarted" },
		{ "QuestOneStepAdd.Name", "EQuestState::QuestOneStepAdd" },
		{ "QuestOneStepMinus.Name", "EQuestState::QuestOneStepMinus" },
		{ "ToolTip", "Quest Current State" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EQuestState::QuestNotStarted", (int64)EQuestState::QuestNotStarted },
		{ "EQuestState::GotQuest", (int64)EQuestState::GotQuest },
		{ "EQuestState::QuestDoneButNotFinished", (int64)EQuestState::QuestDoneButNotFinished },
		{ "EQuestState::QuestFinished", (int64)EQuestState::QuestFinished },
		{ "EQuestState::QuestOneStepAdd", (int64)EQuestState::QuestOneStepAdd },
		{ "EQuestState::QuestOneStepMinus", (int64)EQuestState::QuestOneStepMinus },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ImprovedQuestSystem_EQuestState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ImprovedQuestSystem,
	nullptr,
	"EQuestState",
	"EQuestState",
	Z_Construct_UEnum_ImprovedQuestSystem_EQuestState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ImprovedQuestSystem_EQuestState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ImprovedQuestSystem_EQuestState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ImprovedQuestSystem_EQuestState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ImprovedQuestSystem_EQuestState()
{
	if (!Z_Registration_Info_UEnum_EQuestState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQuestState.InnerSingleton, Z_Construct_UEnum_ImprovedQuestSystem_EQuestState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EQuestState.InnerSingleton;
}
// End Enum EQuestState

// Begin Enum EMarkersMainTypes
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMarkersMainTypes;
static UEnum* EMarkersMainTypes_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMarkersMainTypes.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMarkersMainTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ImprovedQuestSystem_EMarkersMainTypes, (UObject*)Z_Construct_UPackage__Script_ImprovedQuestSystem(), TEXT("EMarkersMainTypes"));
	}
	return Z_Registration_Info_UEnum_EMarkersMainTypes.OuterSingleton;
}
template<> IMPROVEDQUESTSYSTEM_API UEnum* StaticEnum<EMarkersMainTypes>()
{
	return EMarkersMainTypes_StaticEnum();
}
struct Z_Construct_UEnum_ImprovedQuestSystem_EMarkersMainTypes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Markers widgets main types\n" },
		{ "CompassMarker.Name", "EMarkersMainTypes::CompassMarker" },
		{ "MinimapMarker.Name", "EMarkersMainTypes::MinimapMarker" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ScreenMarker.Name", "EMarkersMainTypes::ScreenMarker" },
		{ "ToolTip", "Markers widgets main types" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMarkersMainTypes::ScreenMarker", (int64)EMarkersMainTypes::ScreenMarker },
		{ "EMarkersMainTypes::CompassMarker", (int64)EMarkersMainTypes::CompassMarker },
		{ "EMarkersMainTypes::MinimapMarker", (int64)EMarkersMainTypes::MinimapMarker },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ImprovedQuestSystem_EMarkersMainTypes_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ImprovedQuestSystem,
	nullptr,
	"EMarkersMainTypes",
	"EMarkersMainTypes",
	Z_Construct_UEnum_ImprovedQuestSystem_EMarkersMainTypes_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ImprovedQuestSystem_EMarkersMainTypes_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ImprovedQuestSystem_EMarkersMainTypes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ImprovedQuestSystem_EMarkersMainTypes_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ImprovedQuestSystem_EMarkersMainTypes()
{
	if (!Z_Registration_Info_UEnum_EMarkersMainTypes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMarkersMainTypes.InnerSingleton, Z_Construct_UEnum_ImprovedQuestSystem_EMarkersMainTypes_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMarkersMainTypes.InnerSingleton;
}
// End Enum EMarkersMainTypes

// Begin Enum EQuestLogTypes
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQuestLogTypes;
static UEnum* EQuestLogTypes_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EQuestLogTypes.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EQuestLogTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ImprovedQuestSystem_EQuestLogTypes, (UObject*)Z_Construct_UPackage__Script_ImprovedQuestSystem(), TEXT("EQuestLogTypes"));
	}
	return Z_Registration_Info_UEnum_EQuestLogTypes.OuterSingleton;
}
template<> IMPROVEDQUESTSYSTEM_API UEnum* StaticEnum<EQuestLogTypes>()
{
	return EQuestLogTypes_StaticEnum();
}
struct Z_Construct_UEnum_ImprovedQuestSystem_EQuestLogTypes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Quest log output types\n" },
		{ "FinishedQuests.Name", "EQuestLogTypes::FinishedQuests" },
		{ "InProgressQuests.Name", "EQuestLogTypes::InProgressQuests" },
		{ "MainQuests.Name", "EQuestLogTypes::MainQuests" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "NotStartedQuests.Name", "EQuestLogTypes::NotStartedQuests" },
		{ "SideQuests.Name", "EQuestLogTypes::SideQuests" },
		{ "ToolTip", "Quest log output types" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EQuestLogTypes::InProgressQuests", (int64)EQuestLogTypes::InProgressQuests },
		{ "EQuestLogTypes::FinishedQuests", (int64)EQuestLogTypes::FinishedQuests },
		{ "EQuestLogTypes::NotStartedQuests", (int64)EQuestLogTypes::NotStartedQuests },
		{ "EQuestLogTypes::MainQuests", (int64)EQuestLogTypes::MainQuests },
		{ "EQuestLogTypes::SideQuests", (int64)EQuestLogTypes::SideQuests },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ImprovedQuestSystem_EQuestLogTypes_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ImprovedQuestSystem,
	nullptr,
	"EQuestLogTypes",
	"EQuestLogTypes",
	Z_Construct_UEnum_ImprovedQuestSystem_EQuestLogTypes_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ImprovedQuestSystem_EQuestLogTypes_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ImprovedQuestSystem_EQuestLogTypes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ImprovedQuestSystem_EQuestLogTypes_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ImprovedQuestSystem_EQuestLogTypes()
{
	if (!Z_Registration_Info_UEnum_EQuestLogTypes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQuestLogTypes.InnerSingleton, Z_Construct_UEnum_ImprovedQuestSystem_EQuestLogTypes_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EQuestLogTypes.InnerSingleton;
}
// End Enum EQuestLogTypes

// Begin Enum ECompassComparisonResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECompassComparisonResult;
static UEnum* ECompassComparisonResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECompassComparisonResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECompassComparisonResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ImprovedQuestSystem_ECompassComparisonResult, (UObject*)Z_Construct_UPackage__Script_ImprovedQuestSystem(), TEXT("ECompassComparisonResult"));
	}
	return Z_Registration_Info_UEnum_ECompassComparisonResult.OuterSingleton;
}
template<> IMPROVEDQUESTSYSTEM_API UEnum* StaticEnum<ECompassComparisonResult>()
{
	return ECompassComparisonResult_StaticEnum();
}
struct Z_Construct_UEnum_ImprovedQuestSystem_ECompassComparisonResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsEqual.Name", "ECompassComparisonResult::IsEqual" },
		{ "IsLess.Name", "ECompassComparisonResult::IsLess" },
		{ "IsMore.Name", "ECompassComparisonResult::IsMore" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECompassComparisonResult::IsMore", (int64)ECompassComparisonResult::IsMore },
		{ "ECompassComparisonResult::IsEqual", (int64)ECompassComparisonResult::IsEqual },
		{ "ECompassComparisonResult::IsLess", (int64)ECompassComparisonResult::IsLess },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ImprovedQuestSystem_ECompassComparisonResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ImprovedQuestSystem,
	nullptr,
	"ECompassComparisonResult",
	"ECompassComparisonResult",
	Z_Construct_UEnum_ImprovedQuestSystem_ECompassComparisonResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ImprovedQuestSystem_ECompassComparisonResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ImprovedQuestSystem_ECompassComparisonResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ImprovedQuestSystem_ECompassComparisonResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ImprovedQuestSystem_ECompassComparisonResult()
{
	if (!Z_Registration_Info_UEnum_ECompassComparisonResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECompassComparisonResult.InnerSingleton, Z_Construct_UEnum_ImprovedQuestSystem_ECompassComparisonResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECompassComparisonResult.InnerSingleton;
}
// End Enum ECompassComparisonResult

// Begin ScriptStruct FNumericRewards
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NumericRewards;
class UScriptStruct* FNumericRewards::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NumericRewards.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NumericRewards.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNumericRewards, (UObject*)Z_Construct_UPackage__Script_ImprovedQuestSystem(), TEXT("NumericRewards"));
	}
	return Z_Registration_Info_UScriptStruct_NumericRewards.OuterSingleton;
}
template<> IMPROVEDQUESTSYSTEM_API UScriptStruct* StaticStruct<FNumericRewards>()
{
	return FNumericRewards::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNumericRewards_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RewardId_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Count_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_RewardId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNumericRewards>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNumericRewards_Statics::NewProp_RewardId = { "RewardId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNumericRewards, RewardId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RewardId_MetaData), NewProp_RewardId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNumericRewards_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNumericRewards, Count), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Count_MetaData), NewProp_Count_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNumericRewards_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNumericRewards_Statics::NewProp_RewardId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNumericRewards_Statics::NewProp_Count,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNumericRewards_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNumericRewards_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ImprovedQuestSystem,
	nullptr,
	&NewStructOps,
	"NumericRewards",
	Z_Construct_UScriptStruct_FNumericRewards_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNumericRewards_Statics::PropPointers),
	sizeof(FNumericRewards),
	alignof(FNumericRewards),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNumericRewards_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNumericRewards_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNumericRewards()
{
	if (!Z_Registration_Info_UScriptStruct_NumericRewards.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NumericRewards.InnerSingleton, Z_Construct_UScriptStruct_FNumericRewards_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NumericRewards.InnerSingleton;
}
// End ScriptStruct FNumericRewards

// Begin ScriptStruct FMapNamesArray
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MapNamesArray;
class UScriptStruct* FMapNamesArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MapNamesArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MapNamesArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMapNamesArray, (UObject*)Z_Construct_UPackage__Script_ImprovedQuestSystem(), TEXT("MapNamesArray"));
	}
	return Z_Registration_Info_UScriptStruct_MapNamesArray.OuterSingleton;
}
template<> IMPROVEDQUESTSYSTEM_API UScriptStruct* StaticStruct<FMapNamesArray>()
{
	return FMapNamesArray::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMapNamesArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NamesArr_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NamesArr_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NamesArr;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMapNamesArray>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMapNamesArray_Statics::NewProp_NamesArr_Inner = { "NamesArr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMapNamesArray_Statics::NewProp_NamesArr = { "NamesArr", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMapNamesArray, NamesArr), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NamesArr_MetaData), NewProp_NamesArr_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMapNamesArray_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapNamesArray_Statics::NewProp_NamesArr_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMapNamesArray_Statics::NewProp_NamesArr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapNamesArray_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMapNamesArray_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ImprovedQuestSystem,
	nullptr,
	&NewStructOps,
	"MapNamesArray",
	Z_Construct_UScriptStruct_FMapNamesArray_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapNamesArray_Statics::PropPointers),
	sizeof(FMapNamesArray),
	alignof(FMapNamesArray),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMapNamesArray_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMapNamesArray_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMapNamesArray()
{
	if (!Z_Registration_Info_UScriptStruct_MapNamesArray.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MapNamesArray.InnerSingleton, Z_Construct_UScriptStruct_FMapNamesArray_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MapNamesArray.InnerSingleton;
}
// End ScriptStruct FMapNamesArray

// Begin ScriptStruct FDirectionInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DirectionInfo;
class UScriptStruct* FDirectionInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DirectionInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DirectionInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDirectionInfo, (UObject*)Z_Construct_UPackage__Script_ImprovedQuestSystem(), TEXT("DirectionInfo"));
	}
	return Z_Registration_Info_UScriptStruct_DirectionInfo.OuterSingleton;
}
template<> IMPROVEDQUESTSYSTEM_API UScriptStruct* StaticStruct<FDirectionInfo>()
{
	return FDirectionInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDirectionInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldRotation_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WorldRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDirectionInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDirectionInfo_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDirectionInfo, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDirectionInfo_Statics::NewProp_WorldRotation = { "WorldRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDirectionInfo, WorldRotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldRotation_MetaData), NewProp_WorldRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDirectionInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectionInfo_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectionInfo_Statics::NewProp_WorldRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectionInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDirectionInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ImprovedQuestSystem,
	nullptr,
	&NewStructOps,
	"DirectionInfo",
	Z_Construct_UScriptStruct_FDirectionInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectionInfo_Statics::PropPointers),
	sizeof(FDirectionInfo),
	alignof(FDirectionInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectionInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDirectionInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDirectionInfo()
{
	if (!Z_Registration_Info_UScriptStruct_DirectionInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DirectionInfo.InnerSingleton, Z_Construct_UScriptStruct_FDirectionInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DirectionInfo.InnerSingleton;
}
// End ScriptStruct FDirectionInfo

// Begin ScriptStruct FStructIconSelector
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StructIconSelector;
class UScriptStruct* FStructIconSelector::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StructIconSelector.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StructIconSelector.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructIconSelector, (UObject*)Z_Construct_UPackage__Script_ImprovedQuestSystem(), TEXT("StructIconSelector"));
	}
	return Z_Registration_Info_UScriptStruct_StructIconSelector.OuterSingleton;
}
template<> IMPROVEDQUESTSYSTEM_API UScriptStruct* StaticStruct<FStructIconSelector>()
{
	return FStructIconSelector::StaticStruct();
}
struct Z_Construct_UScriptStruct_FStructIconSelector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconAsMaterial_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconAsTexture_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Texture_Color_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalColorToMapIcon_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IconAsMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IconAsTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Texture_Color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalColorToMapIcon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructIconSelector>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStructIconSelector_Statics::NewProp_IconAsMaterial = { "IconAsMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStructIconSelector, IconAsMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconAsMaterial_MetaData), NewProp_IconAsMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStructIconSelector_Statics::NewProp_IconAsTexture = { "IconAsTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStructIconSelector, IconAsTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconAsTexture_MetaData), NewProp_IconAsTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructIconSelector_Statics::NewProp_Texture_Color = { "Texture_Color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStructIconSelector, Texture_Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Texture_Color_MetaData), NewProp_Texture_Color_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructIconSelector_Statics::NewProp_AdditionalColorToMapIcon = { "AdditionalColorToMapIcon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FStructIconSelector, AdditionalColorToMapIcon), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalColorToMapIcon_MetaData), NewProp_AdditionalColorToMapIcon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructIconSelector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructIconSelector_Statics::NewProp_IconAsMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructIconSelector_Statics::NewProp_IconAsTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructIconSelector_Statics::NewProp_Texture_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructIconSelector_Statics::NewProp_AdditionalColorToMapIcon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructIconSelector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructIconSelector_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ImprovedQuestSystem,
	nullptr,
	&NewStructOps,
	"StructIconSelector",
	Z_Construct_UScriptStruct_FStructIconSelector_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructIconSelector_Statics::PropPointers),
	sizeof(FStructIconSelector),
	alignof(FStructIconSelector),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructIconSelector_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FStructIconSelector_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FStructIconSelector()
{
	if (!Z_Registration_Info_UScriptStruct_StructIconSelector.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StructIconSelector.InnerSingleton, Z_Construct_UScriptStruct_FStructIconSelector_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_StructIconSelector.InnerSingleton;
}
// End ScriptStruct FStructIconSelector

// Begin ScriptStruct FMinimapLevelSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MinimapLevelSettings;
class UScriptStruct* FMinimapLevelSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MinimapLevelSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MinimapLevelSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMinimapLevelSettings, (UObject*)Z_Construct_UPackage__Script_ImprovedQuestSystem(), TEXT("MinimapLevelSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MinimapLevelSettings.OuterSingleton;
}
template<> IMPROVEDQUESTSYSTEM_API UScriptStruct* StaticStruct<FMinimapLevelSettings>()
{
	return FMinimapLevelSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//minimap\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "minimap" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//Level name\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Level name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimapLevelMaterialInstance_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//Link to material instance with level minimap texture choosed in MI params\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Link to material instance with level minimap texture choosed in MI params" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoneMapTexture_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//Additional texture for a zone map\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Additional texture for a zone map" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameLocation_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//Name of a zone for this map\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Name of a zone for this map" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Minimap_World_X_Size_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//World size maximum X\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "World size maximum X" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Minimap_World_Y_Size_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//World size maximum Y\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "World size maximum Y" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimapRelativeSize_X_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//Minimap Relative Size X\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Minimap Relative Size X" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimapRelativeSize_Y_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//Minimap Relative Size Y\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Minimap Relative Size Y" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinMinimapScale_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//Minimap Relative Size X\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Minimap Relative Size X" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMinimapScale_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//Minimap Relative Size Y\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Minimap Relative Size Y" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimapOffset_X_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//Offset of minimap texture X\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Offset of minimap texture X" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimapOffset_Y_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//Offset of minimap texture Y\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Offset of minimap texture Y" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimapAddConstantRotator_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//Rotator texture for material. 0.25f = -90 degree\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Rotator texture for material. 0.25f = -90 degree" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimapMarksRotator_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//Rotation of the minimap markers\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Rotation of the minimap markers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimapWorldScale_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//Minimap World Scale. For a big maps this value should be lower\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Minimap World Scale. For a big maps this value should be lower" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCoordsOffsetX_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//Player Coords Offset X for levels, wich start not in 0.0.0\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Player Coords Offset X for levels, wich start not in 0.0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCoordsOffsetY_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//Player Coords Offset Y for levels, wich start not in 0.0.0\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Player Coords Offset Y for levels, wich start not in 0.0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FogOfWarRadiusMultiplier_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LevelName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MinimapLevelMaterialInstance;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ZoneMapTexture;
	static const UECodeGen_Private::FTextPropertyParams NewProp_NameLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Minimap_World_X_Size;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Minimap_World_Y_Size;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimapRelativeSize_X;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimapRelativeSize_Y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinMinimapScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxMinimapScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimapOffset_X;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimapOffset_Y;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimapAddConstantRotator;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimapMarksRotator;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimapWorldScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerCoordsOffsetX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerCoordsOffsetY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FogOfWarRadiusMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMinimapLevelSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinimapLevelSettings, LevelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelName_MetaData), NewProp_LevelName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::NewProp_MinimapLevelMaterialInstance = { "MinimapLevelMaterialInstance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinimapLevelSettings, MinimapLevelMaterialInstance), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimapLevelMaterialInstance_MetaData), NewProp_MinimapLevelMaterialInstance_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::NewProp_ZoneMapTexture = { "ZoneMapTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinimapLevelSettings, ZoneMapTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoneMapTexture_MetaData), NewProp_ZoneMapTexture_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::NewProp_NameLocation = { "NameLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinimapLevelSettings, NameLocation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameLocation_MetaData), NewProp_NameLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::NewProp_Minimap_World_X_Size = { "Minimap_World_X_Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinimapLevelSettings, Minimap_World_X_Size), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Minimap_World_X_Size_MetaData), NewProp_Minimap_World_X_Size_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::NewProp_Minimap_World_Y_Size = { "Minimap_World_Y_Size", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinimapLevelSettings, Minimap_World_Y_Size), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Minimap_World_Y_Size_MetaData), NewProp_Minimap_World_Y_Size_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::NewProp_MinimapRelativeSize_X = { "MinimapRelativeSize_X", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinimapLevelSettings, MinimapRelativeSize_X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimapRelativeSize_X_MetaData), NewProp_MinimapRelativeSize_X_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::NewProp_MinimapRelativeSize_Y = { "MinimapRelativeSize_Y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinimapLevelSettings, MinimapRelativeSize_Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimapRelativeSize_Y_MetaData), NewProp_MinimapRelativeSize_Y_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::NewProp_MinMinimapScale = { "MinMinimapScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinimapLevelSettings, MinMinimapScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinMinimapScale_MetaData), NewProp_MinMinimapScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::NewProp_MaxMinimapScale = { "MaxMinimapScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinimapLevelSettings, MaxMinimapScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMinimapScale_MetaData), NewProp_MaxMinimapScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::NewProp_MinimapOffset_X = { "MinimapOffset_X", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinimapLevelSettings, MinimapOffset_X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimapOffset_X_MetaData), NewProp_MinimapOffset_X_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::NewProp_MinimapOffset_Y = { "MinimapOffset_Y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinimapLevelSettings, MinimapOffset_Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimapOffset_Y_MetaData), NewProp_MinimapOffset_Y_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::NewProp_MinimapAddConstantRotator = { "MinimapAddConstantRotator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinimapLevelSettings, MinimapAddConstantRotator), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimapAddConstantRotator_MetaData), NewProp_MinimapAddConstantRotator_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::NewProp_MinimapMarksRotator = { "MinimapMarksRotator", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinimapLevelSettings, MinimapMarksRotator), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimapMarksRotator_MetaData), NewProp_MinimapMarksRotator_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::NewProp_MinimapWorldScale = { "MinimapWorldScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinimapLevelSettings, MinimapWorldScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimapWorldScale_MetaData), NewProp_MinimapWorldScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::NewProp_PlayerCoordsOffsetX = { "PlayerCoordsOffsetX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinimapLevelSettings, PlayerCoordsOffsetX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCoordsOffsetX_MetaData), NewProp_PlayerCoordsOffsetX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::NewProp_PlayerCoordsOffsetY = { "PlayerCoordsOffsetY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinimapLevelSettings, PlayerCoordsOffsetY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCoordsOffsetY_MetaData), NewProp_PlayerCoordsOffsetY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::NewProp_FogOfWarRadiusMultiplier = { "FogOfWarRadiusMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinimapLevelSettings, FogOfWarRadiusMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FogOfWarRadiusMultiplier_MetaData), NewProp_FogOfWarRadiusMultiplier_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::NewProp_LevelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::NewProp_MinimapLevelMaterialInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::NewProp_ZoneMapTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::NewProp_NameLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::NewProp_Minimap_World_X_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::NewProp_Minimap_World_Y_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::NewProp_MinimapRelativeSize_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::NewProp_MinimapRelativeSize_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::NewProp_MinMinimapScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::NewProp_MaxMinimapScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::NewProp_MinimapOffset_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::NewProp_MinimapOffset_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::NewProp_MinimapAddConstantRotator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::NewProp_MinimapMarksRotator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::NewProp_MinimapWorldScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::NewProp_PlayerCoordsOffsetX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::NewProp_PlayerCoordsOffsetY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::NewProp_FogOfWarRadiusMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ImprovedQuestSystem,
	nullptr,
	&NewStructOps,
	"MinimapLevelSettings",
	Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::PropPointers),
	sizeof(FMinimapLevelSettings),
	alignof(FMinimapLevelSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMinimapLevelSettings()
{
	if (!Z_Registration_Info_UScriptStruct_MinimapLevelSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MinimapLevelSettings.InnerSingleton, Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MinimapLevelSettings.InnerSingleton;
}
// End ScriptStruct FMinimapLevelSettings

// Begin ScriptStruct FQuestObjectiveTarget
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuestObjectiveTarget;
class UScriptStruct* FQuestObjectiveTarget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestObjectiveTarget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuestObjectiveTarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestObjectiveTarget, (UObject*)Z_Construct_UPackage__Script_ImprovedQuestSystem(), TEXT("QuestObjectiveTarget"));
	}
	return Z_Registration_Info_UScriptStruct_QuestObjectiveTarget.OuterSingleton;
}
template<> IMPROVEDQUESTSYSTEM_API UScriptStruct* StaticStruct<FQuestObjectiveTarget>()
{
	return FQuestObjectiveTarget::StaticStruct();
}
struct Z_Construct_UScriptStruct_FQuestObjectiveTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Quest items simple struct\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Quest items simple struct" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[] = {
		{ "Category", "MainSettings" },
		{ "Comment", "//Objective name\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Objective name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CountToComplete_MetaData[] = {
		{ "Category", "MainSettings" },
		{ "Comment", "//How many this objectives need to complete the quest\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "How many this objectives need to complete the quest" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestItemTag_MetaData[] = {
		{ "Category", "MainSettings" },
		{ "Comment", "//QuestItemTag of quest objective. You need to call \"QuestComplete(QuestId, EQuestState::QuestOneStepAdd, QuestItemTag, false)\" when player reaches the objective for a quest QuestId\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "QuestItemTag of quest objective. You need to call \"QuestComplete(QuestId, EQuestState::QuestOneStepAdd, QuestItemTag, false)\" when player reaches the objective for a quest QuestId" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointQuestToFinish_MetaData[] = {
		{ "Category", "MainSettings" },
		{ "Comment", "//Point where quest finishing\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Point where quest finishing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCount_MetaData[] = {
		{ "Category", "MainSettings" },
		{ "Comment", "//This is uneditable - component uses this variable for saving player progress for a quests\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "This is uneditable - component uses this variable for saving player progress for a quests" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconObjective_MetaData[] = {
		{ "Category", "VisualSettings" },
		{ "Comment", "//Icon for an objective. Displayes at the screen, compass and minimap as marker\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Icon for an objective. Displayes at the screen, compass and minimap as marker" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsIgnoreObjectiveIcons_MetaData[] = {
		{ "Category", "MainSettings" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DisplayName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CountToComplete;
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestItemTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointQuestToFinish;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IconObjective;
	static void NewProp_IsIgnoreObjectiveIcons_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsIgnoreObjectiveIcons;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestObjectiveTarget>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FQuestObjectiveTarget_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestObjectiveTarget, DisplayName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplayName_MetaData), NewProp_DisplayName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestObjectiveTarget_Statics::NewProp_CountToComplete = { "CountToComplete", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestObjectiveTarget, CountToComplete), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CountToComplete_MetaData), NewProp_CountToComplete_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FQuestObjectiveTarget_Statics::NewProp_QuestItemTag = { "QuestItemTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestObjectiveTarget, QuestItemTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestItemTag_MetaData), NewProp_QuestItemTag_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestObjectiveTarget_Statics::NewProp_PointQuestToFinish = { "PointQuestToFinish", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestObjectiveTarget, PointQuestToFinish), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointQuestToFinish_MetaData), NewProp_PointQuestToFinish_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestObjectiveTarget_Statics::NewProp_PlayerCount = { "PlayerCount", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestObjectiveTarget, PlayerCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCount_MetaData), NewProp_PlayerCount_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestObjectiveTarget_Statics::NewProp_IconObjective = { "IconObjective", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestObjectiveTarget, IconObjective), Z_Construct_UScriptStruct_FStructIconSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconObjective_MetaData), NewProp_IconObjective_MetaData) }; // 2251188672
void Z_Construct_UScriptStruct_FQuestObjectiveTarget_Statics::NewProp_IsIgnoreObjectiveIcons_SetBit(void* Obj)
{
	((FQuestObjectiveTarget*)Obj)->IsIgnoreObjectiveIcons = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuestObjectiveTarget_Statics::NewProp_IsIgnoreObjectiveIcons = { "IsIgnoreObjectiveIcons", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FQuestObjectiveTarget), &Z_Construct_UScriptStruct_FQuestObjectiveTarget_Statics::NewProp_IsIgnoreObjectiveIcons_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsIgnoreObjectiveIcons_MetaData), NewProp_IsIgnoreObjectiveIcons_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestObjectiveTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestObjectiveTarget_Statics::NewProp_DisplayName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestObjectiveTarget_Statics::NewProp_CountToComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestObjectiveTarget_Statics::NewProp_QuestItemTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestObjectiveTarget_Statics::NewProp_PointQuestToFinish,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestObjectiveTarget_Statics::NewProp_PlayerCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestObjectiveTarget_Statics::NewProp_IconObjective,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestObjectiveTarget_Statics::NewProp_IsIgnoreObjectiveIcons,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestObjectiveTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestObjectiveTarget_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ImprovedQuestSystem,
	nullptr,
	&NewStructOps,
	"QuestObjectiveTarget",
	Z_Construct_UScriptStruct_FQuestObjectiveTarget_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestObjectiveTarget_Statics::PropPointers),
	sizeof(FQuestObjectiveTarget),
	alignof(FQuestObjectiveTarget),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestObjectiveTarget_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQuestObjectiveTarget_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQuestObjectiveTarget()
{
	if (!Z_Registration_Info_UScriptStruct_QuestObjectiveTarget.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuestObjectiveTarget.InnerSingleton, Z_Construct_UScriptStruct_FQuestObjectiveTarget_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_QuestObjectiveTarget.InnerSingleton;
}
// End ScriptStruct FQuestObjectiveTarget

// Begin ScriptStruct FDoorPointsByLevels
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DoorPointsByLevels;
class UScriptStruct* FDoorPointsByLevels::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DoorPointsByLevels.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DoorPointsByLevels.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDoorPointsByLevels, (UObject*)Z_Construct_UPackage__Script_ImprovedQuestSystem(), TEXT("DoorPointsByLevels"));
	}
	return Z_Registration_Info_UScriptStruct_DoorPointsByLevels.OuterSingleton;
}
template<> IMPROVEDQUESTSYSTEM_API UScriptStruct* StaticStruct<FDoorPointsByLevels>()
{
	return FDoorPointsByLevels::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDoorPointsByLevels_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//Level name, where does the door lead \n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Level name, where does the door lead" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorToLevelPoint_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//Point in the world on current level, where door is\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Point in the world on current level, where door is" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_LevelName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DoorToLevelPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDoorPointsByLevels>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDoorPointsByLevels_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDoorPointsByLevels, LevelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelName_MetaData), NewProp_LevelName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDoorPointsByLevels_Statics::NewProp_DoorToLevelPoint = { "DoorToLevelPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDoorPointsByLevels, DoorToLevelPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorToLevelPoint_MetaData), NewProp_DoorToLevelPoint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDoorPointsByLevels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoorPointsByLevels_Statics::NewProp_LevelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoorPointsByLevels_Statics::NewProp_DoorToLevelPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoorPointsByLevels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDoorPointsByLevels_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ImprovedQuestSystem,
	nullptr,
	&NewStructOps,
	"DoorPointsByLevels",
	Z_Construct_UScriptStruct_FDoorPointsByLevels_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoorPointsByLevels_Statics::PropPointers),
	sizeof(FDoorPointsByLevels),
	alignof(FDoorPointsByLevels),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoorPointsByLevels_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDoorPointsByLevels_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDoorPointsByLevels()
{
	if (!Z_Registration_Info_UScriptStruct_DoorPointsByLevels.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DoorPointsByLevels.InnerSingleton, Z_Construct_UScriptStruct_FDoorPointsByLevels_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DoorPointsByLevels.InnerSingleton;
}
// End ScriptStruct FDoorPointsByLevels

// Begin ScriptStruct FSequenceMaster
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SequenceMaster;
class UScriptStruct* FSequenceMaster::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SequenceMaster.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SequenceMaster.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSequenceMaster, (UObject*)Z_Construct_UPackage__Script_ImprovedQuestSystem(), TEXT("SequenceMaster"));
	}
	return Z_Registration_Info_UScriptStruct_SequenceMaster.OuterSingleton;
}
template<> IMPROVEDQUESTSYSTEM_API UScriptStruct* StaticStruct<FSequenceMaster>()
{
	return FSequenceMaster::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSequenceMaster_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "//Name of a Sequence\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Name of a Sequence" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "//About a Sequence\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "About a Sequence" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelNameWhereQuestTarget_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "//Level where quest finishing\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Level where quest finishing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsShowinLocationPointFirst_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "//Will skip GetActorByClassWithTag and shows a point marker first\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Will skip GetActorByClassWithTag and shows a point marker first" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorToLevelPoints_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "//Door to level where quest is. You can use it only if real door actor is not exist in a world (bcs of WorldPartition, for example)\n//Example:\n// 0) [L_Main] = [100.0f, 100.0f, 50.0f]; - at level L_Main marker on a door for this quest will be at coords [100.0f, 100.0f, 50.0f]\n// 1) [L_House] = [500.0f, 200.0f, 10.0f];\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Door to level where quest is. You can use it only if real door actor is not exist in a world (bcs of WorldPartition, for example)\nExample:\n 0) [L_Main] = [100.0f, 100.0f, 50.0f]; - at level L_Main marker on a door for this quest will be at coords [100.0f, 100.0f, 50.0f]\n 1) [L_House] = [500.0f, 200.0f, 10.0f];" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectiveTargets_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "//Items for done quest with count\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Items for done quest with count" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameFunctionCallToFinish_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "//Function name will be called on server in QuestComponent when quest sequence will be done\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Function name will be called on server in QuestComponent when quest sequence will be done" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Title;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LevelNameWhereQuestTarget;
	static void NewProp_IsShowinLocationPointFirst_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsShowinLocationPointFirst;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DoorToLevelPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DoorToLevelPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectiveTargets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectiveTargets;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NameFunctionCallToFinish;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSequenceMaster>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSequenceMaster_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSequenceMaster, Title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSequenceMaster_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSequenceMaster, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSequenceMaster_Statics::NewProp_LevelNameWhereQuestTarget = { "LevelNameWhereQuestTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSequenceMaster, LevelNameWhereQuestTarget), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelNameWhereQuestTarget_MetaData), NewProp_LevelNameWhereQuestTarget_MetaData) };
void Z_Construct_UScriptStruct_FSequenceMaster_Statics::NewProp_IsShowinLocationPointFirst_SetBit(void* Obj)
{
	((FSequenceMaster*)Obj)->IsShowinLocationPointFirst = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSequenceMaster_Statics::NewProp_IsShowinLocationPointFirst = { "IsShowinLocationPointFirst", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSequenceMaster), &Z_Construct_UScriptStruct_FSequenceMaster_Statics::NewProp_IsShowinLocationPointFirst_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsShowinLocationPointFirst_MetaData), NewProp_IsShowinLocationPointFirst_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSequenceMaster_Statics::NewProp_DoorToLevelPoints_Inner = { "DoorToLevelPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDoorPointsByLevels, METADATA_PARAMS(0, nullptr) }; // 2754736103
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSequenceMaster_Statics::NewProp_DoorToLevelPoints = { "DoorToLevelPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSequenceMaster, DoorToLevelPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorToLevelPoints_MetaData), NewProp_DoorToLevelPoints_MetaData) }; // 2754736103
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSequenceMaster_Statics::NewProp_ObjectiveTargets_Inner = { "ObjectiveTargets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FQuestObjectiveTarget, METADATA_PARAMS(0, nullptr) }; // 1889290149
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSequenceMaster_Statics::NewProp_ObjectiveTargets = { "ObjectiveTargets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSequenceMaster, ObjectiveTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectiveTargets_MetaData), NewProp_ObjectiveTargets_MetaData) }; // 1889290149
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSequenceMaster_Statics::NewProp_NameFunctionCallToFinish = { "NameFunctionCallToFinish", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSequenceMaster, NameFunctionCallToFinish), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameFunctionCallToFinish_MetaData), NewProp_NameFunctionCallToFinish_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSequenceMaster_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceMaster_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceMaster_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceMaster_Statics::NewProp_LevelNameWhereQuestTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceMaster_Statics::NewProp_IsShowinLocationPointFirst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceMaster_Statics::NewProp_DoorToLevelPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceMaster_Statics::NewProp_DoorToLevelPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceMaster_Statics::NewProp_ObjectiveTargets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceMaster_Statics::NewProp_ObjectiveTargets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceMaster_Statics::NewProp_NameFunctionCallToFinish,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceMaster_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSequenceMaster_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ImprovedQuestSystem,
	nullptr,
	&NewStructOps,
	"SequenceMaster",
	Z_Construct_UScriptStruct_FSequenceMaster_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceMaster_Statics::PropPointers),
	sizeof(FSequenceMaster),
	alignof(FSequenceMaster),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceMaster_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSequenceMaster_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSequenceMaster()
{
	if (!Z_Registration_Info_UScriptStruct_SequenceMaster.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SequenceMaster.InnerSingleton, Z_Construct_UScriptStruct_FSequenceMaster_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SequenceMaster.InnerSingleton;
}
// End ScriptStruct FSequenceMaster

// Begin ScriptStruct FPlayerProgress
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerProgress;
class UScriptStruct* FPlayerProgress::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerProgress.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerProgress.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerProgress, (UObject*)Z_Construct_UPackage__Script_ImprovedQuestSystem(), TEXT("PlayerProgress"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerProgress.OuterSingleton;
}
template<> IMPROVEDQUESTSYSTEM_API UScriptStruct* StaticStruct<FPlayerProgress>()
{
	return FPlayerProgress::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerProgress_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Progress of player to save game\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Progress of player to save game" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestId_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//QuestId must be equal table main row\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "QuestId must be equal table main row" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestState_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//Quest Current State\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Quest Current State" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSequence_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//Current step of a quest\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Current step of a quest" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sequences_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "//The quest sequences\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "The quest sequences" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrderNumber_MetaData[] = {
		{ "Category", "Uneditable" },
		{ "Comment", "//Order number of a quest, that determines an order of quest showns by the Quest Log Widget\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Order number of a quest, that determines an order of quest showns by the Quest Log Widget" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsTracked_MetaData[] = {
		{ "Category", "Uneditable" },
		{ "Comment", "//Is tracked\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Is tracked" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_QuestState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_QuestState;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentSequence;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sequences_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Sequences;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OrderNumber;
	static void NewProp_IsTracked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTracked;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerProgress>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPlayerProgress_Statics::NewProp_QuestId = { "QuestId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerProgress, QuestId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestId_MetaData), NewProp_QuestId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPlayerProgress_Statics::NewProp_QuestState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPlayerProgress_Statics::NewProp_QuestState = { "QuestState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerProgress, QuestState), Z_Construct_UEnum_ImprovedQuestSystem_EQuestState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestState_MetaData), NewProp_QuestState_MetaData) }; // 392213162
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerProgress_Statics::NewProp_CurrentSequence = { "CurrentSequence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerProgress, CurrentSequence), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSequence_MetaData), NewProp_CurrentSequence_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerProgress_Statics::NewProp_Sequences_Inner = { "Sequences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSequenceMaster, METADATA_PARAMS(0, nullptr) }; // 2628321247
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerProgress_Statics::NewProp_Sequences = { "Sequences", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerProgress, Sequences), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sequences_MetaData), NewProp_Sequences_MetaData) }; // 2628321247
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPlayerProgress_Statics::NewProp_OrderNumber = { "OrderNumber", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerProgress, OrderNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrderNumber_MetaData), NewProp_OrderNumber_MetaData) };
void Z_Construct_UScriptStruct_FPlayerProgress_Statics::NewProp_IsTracked_SetBit(void* Obj)
{
	((FPlayerProgress*)Obj)->IsTracked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerProgress_Statics::NewProp_IsTracked = { "IsTracked", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FPlayerProgress), &Z_Construct_UScriptStruct_FPlayerProgress_Statics::NewProp_IsTracked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsTracked_MetaData), NewProp_IsTracked_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerProgress_Statics::NewProp_QuestId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerProgress_Statics::NewProp_QuestState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerProgress_Statics::NewProp_QuestState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerProgress_Statics::NewProp_CurrentSequence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerProgress_Statics::NewProp_Sequences_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerProgress_Statics::NewProp_Sequences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerProgress_Statics::NewProp_OrderNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerProgress_Statics::NewProp_IsTracked,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerProgress_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ImprovedQuestSystem,
	nullptr,
	&NewStructOps,
	"PlayerProgress",
	Z_Construct_UScriptStruct_FPlayerProgress_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerProgress_Statics::PropPointers),
	sizeof(FPlayerProgress),
	alignof(FPlayerProgress),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerProgress_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerProgress_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerProgress()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerProgress.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerProgress.InnerSingleton, Z_Construct_UScriptStruct_FPlayerProgress_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerProgress.InnerSingleton;
}
// End ScriptStruct FPlayerProgress

// Begin ScriptStruct FQuestType
static_assert(std::is_polymorphic<FQuestType>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FQuestType cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuestType;
class UScriptStruct* FQuestType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuestType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestType, (UObject*)Z_Construct_UPackage__Script_ImprovedQuestSystem(), TEXT("QuestType"));
	}
	return Z_Registration_Info_UScriptStruct_QuestType.OuterSingleton;
}
template<> IMPROVEDQUESTSYSTEM_API UScriptStruct* StaticStruct<FQuestType>()
{
	return FQuestType::StaticStruct();
}
struct Z_Construct_UScriptStruct_FQuestType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Main Quests Table\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Main Quests Table" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestId_MetaData[] = {
		{ "Category", "MainSettings" },
		{ "Comment", "//QuestId must be equal table main row\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "QuestId must be equal table main row" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "MainSettings" },
		{ "Comment", "//Name of a quest\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Name of a quest" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_About_MetaData[] = {
		{ "Category", "MainSettings" },
		{ "Comment", "//About a quest\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "About a quest" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsHidden_MetaData[] = {
		{ "Category", "MainSettings" },
		{ "Comment", "//Is it not a quest, but an achievment - it will not be showed in a quest log.\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Is it not a quest, but an achievment - it will not be showed in a quest log." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestLogWidget_MetaData[] = {
		{ "Category", "MainSettings" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestsNeedToFinishToTake_MetaData[] = {
		{ "Category", "MainSettings" },
		{ "Comment", "//Array of Names of quests needs to be done for take this quest\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Array of Names of quests needs to be done for take this quest" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestsMustNotBeFinishedToTake_MetaData[] = {
		{ "Category", "MainSettings" },
		{ "Comment", "//Array of Names of quests wich should be not finished for take this quest\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Array of Names of quests wich should be not finished for take this quest" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsMainQuest_MetaData[] = {
		{ "Category", "MainSettings" },
		{ "Comment", "//Main quest or Side\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Main quest or Side" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WillSkipStageQuestDoneButNotFinished_MetaData[] = {
		{ "Category", "MainSettings" },
		{ "Comment", "//If it is true, then quest will be Finished without a returning to a quest giver NPC when all objectives finished\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "If it is true, then quest will be Finished without a returning to a quest giver NPC when all objectives finished" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RewardActor_MetaData[] = {
		{ "Category", "MainSettings" },
		{ "Comment", "//Reward actor will be spawned and destroyed when quest will be done\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Reward actor will be spawned and destroyed when quest will be done" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpAndMoneyReward_MetaData[] = {
		{ "Category", "MainSettings" },
		{ "Comment", "//Numerical rewards for the ques, example: [Exp = 100], [Gold = 10]\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Numerical rewards for the ques, example: [Exp = 100], [Gold = 10]" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameFunctionCallWhenPlayerGotQuest_MetaData[] = {
		{ "Category", "MainSettings" },
		{ "Comment", "//Function name will be called on server  in QuestComponent when quest will be done\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Function name will be called on server  in QuestComponent when quest will be done" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsCanBeCanceled_MetaData[] = {
		{ "Category", "MainSettings" },
		{ "Comment", "//Can this quest be cancelld or not\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Can this quest be cancelld or not" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameFunctionCallWhenPlayerCancelQuest_MetaData[] = {
		{ "Category", "MainSettings" },
		{ "Comment", "//Function name will be called on server in QuestComponent when quest will be canceled\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Function name will be called on server in QuestComponent when quest will be canceled" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLevelToGet_MetaData[] = {
		{ "Category", "MainSettings" },
		{ "Comment", "//Min player level to get the quest (set your player level in BP to functions \"UpdateOverlappedWorldMarkers\", in object \".../Blueprints/Components/BP_IQS_MarkerActorComponent\" and \".../Blueprints/InteractionExamples/NPCQuestGiver/BP_IQS_NPC_QuestGiverBase\"\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Min player level to get the quest (set your player level in BP to functions \"UpdateOverlappedWorldMarkers\", in object \".../Blueprints/Components/BP_IQS_MarkerActorComponent\" and \".../Blueprints/InteractionExamples/NPCQuestGiver/BP_IQS_NPC_QuestGiverBase\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayGotQuestSound_MetaData[] = {
		{ "Category", "SoundSettings" },
		{ "Comment", "//Sound setting\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Sound setting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayObjectiveAddOrMinusSound_MetaData[] = {
		{ "Category", "SoundSettings" },
		{ "Comment", "//Sound setting\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Sound setting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayNextSequenceSound_MetaData[] = {
		{ "Category", "SoundSettings" },
		{ "Comment", "//Sound setting\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Sound setting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayQuestCompletedButNotFinishedSound_MetaData[] = {
		{ "Category", "SoundSettings" },
		{ "Comment", "//Sound setting\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Sound setting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayQuestFinishedSound_MetaData[] = {
		{ "Category", "SoundSettings" },
		{ "Comment", "//Sound setting\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Sound setting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NpcTagWhereStart_MetaData[] = {
		{ "Category", "NpcSettings-Start" },
		{ "Comment", "//Tag in NPC wich starts this quest\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Tag in NPC wich starts this quest" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointWhereNpcStart_MetaData[] = {
		{ "Category", "NpcSettings-Start" },
		{ "Comment", "//Point where is NPC wich starts this quest\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Point where is NPC wich starts this quest" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NpcQuestNameToStart_MetaData[] = {
		{ "Category", "NpcSettings-Start" },
		{ "Comment", "//NPC Name wich starts this quest\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "NPC Name wich starts this quest" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelNameWhereNpcStart_MetaData[] = {
		{ "Category", "NpcSettings-Start" },
		{ "Comment", "//Level where is NPC wich starts this quest\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Level where is NPC wich starts this quest" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconNpcStart_MetaData[] = {
		{ "Category", "NpcSettings-Start" },
		{ "Comment", "//Icon for an NPC quest starter\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Icon for an NPC quest starter" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CinematicStartQuestTag_MetaData[] = {
		{ "Category", "NpcSettings-Start" },
		{ "Comment", "//Level Sequence Actor tag, wich may play when player start the quest\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Level Sequence Actor tag, wich may play when player start the quest" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestFinishAbout_MetaData[] = {
		{ "Category", "NpcSettings-Finish" },
		{ "Comment", "//Quest completion text for NPC\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Quest completion text for NPC" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NpcTagWhereFinish_MetaData[] = {
		{ "Category", "NpcSettings-Finish" },
		{ "Comment", "//Tag in NPC wich ends this quest\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Tag in NPC wich ends this quest" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PointWhereNpcFinish_MetaData[] = {
		{ "Category", "NpcSettings-Finish" },
		{ "Comment", "//Point where is NPC wich ends this quest\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Point where is NPC wich ends this quest" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NpcQuestNameToFinish_MetaData[] = {
		{ "Category", "NpcSettings-Finish" },
		{ "Comment", "//NPC Name wich ends this quest\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "NPC Name wich ends this quest" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelNameWhereNpcFinish_MetaData[] = {
		{ "Category", "NpcSettings-Finish" },
		{ "Comment", "//Level where is NPC wich ends this quest\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Level where is NPC wich ends this quest" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoorToLevelPointsWhereNpcFinish_MetaData[] = {
		{ "Category", "NpcSettings-Finish" },
		{ "Comment", "//Door to level where quest is. You can use it only if real door actor is not exist in a world (bcs of WorldPartition, for example)\n//Example:\n// 0) [L_Main] = [100.0f, 100.0f, 50.0f]; - at level L_Main marker on a door for this quest will be at coords [100.0f, 100.0f, 50.0f]\n// 1) [L_House] = [500.0f, 200.0f, 10.0f];\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Door to level where quest is. You can use it only if real door actor is not exist in a world (bcs of WorldPartition, for example)\nExample:\n 0) [L_Main] = [100.0f, 100.0f, 50.0f]; - at level L_Main marker on a door for this quest will be at coords [100.0f, 100.0f, 50.0f]\n 1) [L_House] = [500.0f, 200.0f, 10.0f];" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IconNpcEnd_MetaData[] = {
		{ "Category", "NpcSettings-Finish" },
		{ "Comment", "//Icon for an NPC quest ender\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Icon for an NPC quest ender" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CinematicFinishQuestTag_MetaData[] = {
		{ "Category", "NpcSettings-Finish" },
		{ "Comment", "//Level Sequence Actor tag, wich may play when player ends the quest\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Level Sequence Actor tag, wich may play when player ends the quest" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sequences_MetaData[] = {
		{ "Category", "Sequence" },
		{ "Comment", "//The quest sequences\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "The quest sequences" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestId;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Name;
	static const UECodeGen_Private::FTextPropertyParams NewProp_About;
	static void NewProp_IsHidden_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsHidden;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuestLogWidget;
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestsNeedToFinishToTake_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_QuestsNeedToFinishToTake;
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestsMustNotBeFinishedToTake_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_QuestsMustNotBeFinishedToTake;
	static void NewProp_IsMainQuest_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMainQuest;
	static void NewProp_WillSkipStageQuestDoneButNotFinished_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WillSkipStageQuestDoneButNotFinished;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RewardActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExpAndMoneyReward_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExpAndMoneyReward;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NameFunctionCallWhenPlayerGotQuest;
	static void NewProp_IsCanBeCanceled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsCanBeCanceled;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NameFunctionCallWhenPlayerCancelQuest;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinLevelToGet;
	static void NewProp_PlayGotQuestSound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PlayGotQuestSound;
	static void NewProp_PlayObjectiveAddOrMinusSound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PlayObjectiveAddOrMinusSound;
	static void NewProp_PlayNextSequenceSound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PlayNextSequenceSound;
	static void NewProp_PlayQuestCompletedButNotFinishedSound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PlayQuestCompletedButNotFinishedSound;
	static void NewProp_PlayQuestFinishedSound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PlayQuestFinishedSound;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NpcTagWhereStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointWhereNpcStart;
	static const UECodeGen_Private::FTextPropertyParams NewProp_NpcQuestNameToStart;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LevelNameWhereNpcStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IconNpcStart;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CinematicStartQuestTag;
	static const UECodeGen_Private::FTextPropertyParams NewProp_QuestFinishAbout;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NpcTagWhereFinish;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PointWhereNpcFinish;
	static const UECodeGen_Private::FTextPropertyParams NewProp_NpcQuestNameToFinish;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LevelNameWhereNpcFinish;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DoorToLevelPointsWhereNpcFinish_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DoorToLevelPointsWhereNpcFinish;
	static const UECodeGen_Private::FStructPropertyParams NewProp_IconNpcEnd;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CinematicFinishQuestTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sequences_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Sequences;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestType>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_QuestId = { "QuestId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestType, QuestId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestId_MetaData), NewProp_QuestId_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestType, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_About = { "About", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestType, About), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_About_MetaData), NewProp_About_MetaData) };
void Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_IsHidden_SetBit(void* Obj)
{
	((FQuestType*)Obj)->IsHidden = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_IsHidden = { "IsHidden", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FQuestType), &Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_IsHidden_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsHidden_MetaData), NewProp_IsHidden_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_QuestLogWidget = { "QuestLogWidget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestType, QuestLogWidget), Z_Construct_UScriptStruct_FStructIconSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestLogWidget_MetaData), NewProp_QuestLogWidget_MetaData) }; // 2251188672
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_QuestsNeedToFinishToTake_Inner = { "QuestsNeedToFinishToTake", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_QuestsNeedToFinishToTake = { "QuestsNeedToFinishToTake", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestType, QuestsNeedToFinishToTake), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestsNeedToFinishToTake_MetaData), NewProp_QuestsNeedToFinishToTake_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_QuestsMustNotBeFinishedToTake_Inner = { "QuestsMustNotBeFinishedToTake", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_QuestsMustNotBeFinishedToTake = { "QuestsMustNotBeFinishedToTake", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestType, QuestsMustNotBeFinishedToTake), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestsMustNotBeFinishedToTake_MetaData), NewProp_QuestsMustNotBeFinishedToTake_MetaData) };
void Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_IsMainQuest_SetBit(void* Obj)
{
	((FQuestType*)Obj)->IsMainQuest = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_IsMainQuest = { "IsMainQuest", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FQuestType), &Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_IsMainQuest_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsMainQuest_MetaData), NewProp_IsMainQuest_MetaData) };
void Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_WillSkipStageQuestDoneButNotFinished_SetBit(void* Obj)
{
	((FQuestType*)Obj)->WillSkipStageQuestDoneButNotFinished = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_WillSkipStageQuestDoneButNotFinished = { "WillSkipStageQuestDoneButNotFinished", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FQuestType), &Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_WillSkipStageQuestDoneButNotFinished_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WillSkipStageQuestDoneButNotFinished_MetaData), NewProp_WillSkipStageQuestDoneButNotFinished_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_RewardActor = { "RewardActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestType, RewardActor), Z_Construct_UClass_UClass, Z_Construct_UClass_AIQS_RewardActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RewardActor_MetaData), NewProp_RewardActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_ExpAndMoneyReward_Inner = { "ExpAndMoneyReward", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNumericRewards, METADATA_PARAMS(0, nullptr) }; // 651813718
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_ExpAndMoneyReward = { "ExpAndMoneyReward", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestType, ExpAndMoneyReward), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpAndMoneyReward_MetaData), NewProp_ExpAndMoneyReward_MetaData) }; // 651813718
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_NameFunctionCallWhenPlayerGotQuest = { "NameFunctionCallWhenPlayerGotQuest", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestType, NameFunctionCallWhenPlayerGotQuest), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameFunctionCallWhenPlayerGotQuest_MetaData), NewProp_NameFunctionCallWhenPlayerGotQuest_MetaData) };
void Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_IsCanBeCanceled_SetBit(void* Obj)
{
	((FQuestType*)Obj)->IsCanBeCanceled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_IsCanBeCanceled = { "IsCanBeCanceled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FQuestType), &Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_IsCanBeCanceled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsCanBeCanceled_MetaData), NewProp_IsCanBeCanceled_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_NameFunctionCallWhenPlayerCancelQuest = { "NameFunctionCallWhenPlayerCancelQuest", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestType, NameFunctionCallWhenPlayerCancelQuest), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameFunctionCallWhenPlayerCancelQuest_MetaData), NewProp_NameFunctionCallWhenPlayerCancelQuest_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_MinLevelToGet = { "MinLevelToGet", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestType, MinLevelToGet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLevelToGet_MetaData), NewProp_MinLevelToGet_MetaData) };
void Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_PlayGotQuestSound_SetBit(void* Obj)
{
	((FQuestType*)Obj)->PlayGotQuestSound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_PlayGotQuestSound = { "PlayGotQuestSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FQuestType), &Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_PlayGotQuestSound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayGotQuestSound_MetaData), NewProp_PlayGotQuestSound_MetaData) };
void Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_PlayObjectiveAddOrMinusSound_SetBit(void* Obj)
{
	((FQuestType*)Obj)->PlayObjectiveAddOrMinusSound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_PlayObjectiveAddOrMinusSound = { "PlayObjectiveAddOrMinusSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FQuestType), &Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_PlayObjectiveAddOrMinusSound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayObjectiveAddOrMinusSound_MetaData), NewProp_PlayObjectiveAddOrMinusSound_MetaData) };
void Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_PlayNextSequenceSound_SetBit(void* Obj)
{
	((FQuestType*)Obj)->PlayNextSequenceSound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_PlayNextSequenceSound = { "PlayNextSequenceSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FQuestType), &Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_PlayNextSequenceSound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayNextSequenceSound_MetaData), NewProp_PlayNextSequenceSound_MetaData) };
void Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_PlayQuestCompletedButNotFinishedSound_SetBit(void* Obj)
{
	((FQuestType*)Obj)->PlayQuestCompletedButNotFinishedSound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_PlayQuestCompletedButNotFinishedSound = { "PlayQuestCompletedButNotFinishedSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FQuestType), &Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_PlayQuestCompletedButNotFinishedSound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayQuestCompletedButNotFinishedSound_MetaData), NewProp_PlayQuestCompletedButNotFinishedSound_MetaData) };
void Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_PlayQuestFinishedSound_SetBit(void* Obj)
{
	((FQuestType*)Obj)->PlayQuestFinishedSound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_PlayQuestFinishedSound = { "PlayQuestFinishedSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FQuestType), &Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_PlayQuestFinishedSound_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayQuestFinishedSound_MetaData), NewProp_PlayQuestFinishedSound_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_NpcTagWhereStart = { "NpcTagWhereStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestType, NpcTagWhereStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NpcTagWhereStart_MetaData), NewProp_NpcTagWhereStart_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_PointWhereNpcStart = { "PointWhereNpcStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestType, PointWhereNpcStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointWhereNpcStart_MetaData), NewProp_PointWhereNpcStart_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_NpcQuestNameToStart = { "NpcQuestNameToStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestType, NpcQuestNameToStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NpcQuestNameToStart_MetaData), NewProp_NpcQuestNameToStart_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_LevelNameWhereNpcStart = { "LevelNameWhereNpcStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestType, LevelNameWhereNpcStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelNameWhereNpcStart_MetaData), NewProp_LevelNameWhereNpcStart_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_IconNpcStart = { "IconNpcStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestType, IconNpcStart), Z_Construct_UScriptStruct_FStructIconSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconNpcStart_MetaData), NewProp_IconNpcStart_MetaData) }; // 2251188672
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_CinematicStartQuestTag = { "CinematicStartQuestTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestType, CinematicStartQuestTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CinematicStartQuestTag_MetaData), NewProp_CinematicStartQuestTag_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_QuestFinishAbout = { "QuestFinishAbout", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestType, QuestFinishAbout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestFinishAbout_MetaData), NewProp_QuestFinishAbout_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_NpcTagWhereFinish = { "NpcTagWhereFinish", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestType, NpcTagWhereFinish), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NpcTagWhereFinish_MetaData), NewProp_NpcTagWhereFinish_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_PointWhereNpcFinish = { "PointWhereNpcFinish", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestType, PointWhereNpcFinish), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PointWhereNpcFinish_MetaData), NewProp_PointWhereNpcFinish_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_NpcQuestNameToFinish = { "NpcQuestNameToFinish", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestType, NpcQuestNameToFinish), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NpcQuestNameToFinish_MetaData), NewProp_NpcQuestNameToFinish_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_LevelNameWhereNpcFinish = { "LevelNameWhereNpcFinish", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestType, LevelNameWhereNpcFinish), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelNameWhereNpcFinish_MetaData), NewProp_LevelNameWhereNpcFinish_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_DoorToLevelPointsWhereNpcFinish_Inner = { "DoorToLevelPointsWhereNpcFinish", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDoorPointsByLevels, METADATA_PARAMS(0, nullptr) }; // 2754736103
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_DoorToLevelPointsWhereNpcFinish = { "DoorToLevelPointsWhereNpcFinish", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestType, DoorToLevelPointsWhereNpcFinish), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoorToLevelPointsWhereNpcFinish_MetaData), NewProp_DoorToLevelPointsWhereNpcFinish_MetaData) }; // 2754736103
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_IconNpcEnd = { "IconNpcEnd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestType, IconNpcEnd), Z_Construct_UScriptStruct_FStructIconSelector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IconNpcEnd_MetaData), NewProp_IconNpcEnd_MetaData) }; // 2251188672
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_CinematicFinishQuestTag = { "CinematicFinishQuestTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestType, CinematicFinishQuestTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CinematicFinishQuestTag_MetaData), NewProp_CinematicFinishQuestTag_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_Sequences_Inner = { "Sequences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSequenceMaster, METADATA_PARAMS(0, nullptr) }; // 2628321247
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_Sequences = { "Sequences", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestType, Sequences), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sequences_MetaData), NewProp_Sequences_MetaData) }; // 2628321247
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_QuestId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_About,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_IsHidden,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_QuestLogWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_QuestsNeedToFinishToTake_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_QuestsNeedToFinishToTake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_QuestsMustNotBeFinishedToTake_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_QuestsMustNotBeFinishedToTake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_IsMainQuest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_WillSkipStageQuestDoneButNotFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_RewardActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_ExpAndMoneyReward_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_ExpAndMoneyReward,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_NameFunctionCallWhenPlayerGotQuest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_IsCanBeCanceled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_NameFunctionCallWhenPlayerCancelQuest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_MinLevelToGet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_PlayGotQuestSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_PlayObjectiveAddOrMinusSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_PlayNextSequenceSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_PlayQuestCompletedButNotFinishedSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_PlayQuestFinishedSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_NpcTagWhereStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_PointWhereNpcStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_NpcQuestNameToStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_LevelNameWhereNpcStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_IconNpcStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_CinematicStartQuestTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_QuestFinishAbout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_NpcTagWhereFinish,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_PointWhereNpcFinish,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_NpcQuestNameToFinish,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_LevelNameWhereNpcFinish,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_DoorToLevelPointsWhereNpcFinish_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_DoorToLevelPointsWhereNpcFinish,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_IconNpcEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_CinematicFinishQuestTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_Sequences_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestType_Statics::NewProp_Sequences,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestType_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ImprovedQuestSystem,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"QuestType",
	Z_Construct_UScriptStruct_FQuestType_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestType_Statics::PropPointers),
	sizeof(FQuestType),
	alignof(FQuestType),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestType_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQuestType_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQuestType()
{
	if (!Z_Registration_Info_UScriptStruct_QuestType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuestType.InnerSingleton, Z_Construct_UScriptStruct_FQuestType_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_QuestType.InnerSingleton;
}
// End ScriptStruct FQuestType

// Begin ScriptStruct FQuestLogInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QuestLogInfo;
class UScriptStruct* FQuestLogInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QuestLogInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QuestLogInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuestLogInfo, (UObject*)Z_Construct_UPackage__Script_ImprovedQuestSystem(), TEXT("QuestLogInfo"));
	}
	return Z_Registration_Info_UScriptStruct_QuestLogInfo.OuterSingleton;
}
template<> IMPROVEDQUESTSYSTEM_API UScriptStruct* StaticStruct<FQuestLogInfo>()
{
	return FQuestLogInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FQuestLogInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Quest full info for QuestLog\n" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
		{ "ToolTip", "Quest full info for QuestLog" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestInfo_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerProgress_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QuestInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerProgress;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuestLogInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestLogInfo_Statics::NewProp_QuestInfo = { "QuestInfo", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestLogInfo, QuestInfo), Z_Construct_UScriptStruct_FQuestType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestInfo_MetaData), NewProp_QuestInfo_MetaData) }; // 2755114105
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuestLogInfo_Statics::NewProp_PlayerProgress = { "PlayerProgress", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FQuestLogInfo, PlayerProgress), Z_Construct_UScriptStruct_FPlayerProgress, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerProgress_MetaData), NewProp_PlayerProgress_MetaData) }; // 3775136938
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuestLogInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestLogInfo_Statics::NewProp_QuestInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuestLogInfo_Statics::NewProp_PlayerProgress,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestLogInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuestLogInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ImprovedQuestSystem,
	nullptr,
	&NewStructOps,
	"QuestLogInfo",
	Z_Construct_UScriptStruct_FQuestLogInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestLogInfo_Statics::PropPointers),
	sizeof(FQuestLogInfo),
	alignof(FQuestLogInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuestLogInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FQuestLogInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FQuestLogInfo()
{
	if (!Z_Registration_Info_UScriptStruct_QuestLogInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QuestLogInfo.InnerSingleton, Z_Construct_UScriptStruct_FQuestLogInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_QuestLogInfo.InnerSingleton;
}
// End ScriptStruct FQuestLogInfo

// Begin Class UIQS_Types
void UIQS_Types::StaticRegisterNativesUIQS_Types()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIQS_Types);
UClass* Z_Construct_UClass_UIQS_Types_NoRegister()
{
	return UIQS_Types::StaticClass();
}
struct Z_Construct_UClass_UIQS_Types_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Structure/IQS_Types.h" },
		{ "ModuleRelativePath", "Public/Structure/IQS_Types.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIQS_Types>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIQS_Types_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ImprovedQuestSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_Types_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIQS_Types_Statics::ClassParams = {
	&UIQS_Types::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_Types_Statics::Class_MetaDataParams), Z_Construct_UClass_UIQS_Types_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIQS_Types()
{
	if (!Z_Registration_Info_UClass_UIQS_Types.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIQS_Types.OuterSingleton, Z_Construct_UClass_UIQS_Types_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIQS_Types.OuterSingleton;
}
template<> IMPROVEDQUESTSYSTEM_API UClass* StaticClass<UIQS_Types>()
{
	return UIQS_Types::StaticClass();
}
UIQS_Types::UIQS_Types(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIQS_Types);
UIQS_Types::~UIQS_Types() {}
// End Class UIQS_Types

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Structure_IQS_Types_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EQuestState_StaticEnum, TEXT("EQuestState"), &Z_Registration_Info_UEnum_EQuestState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 392213162U) },
		{ EMarkersMainTypes_StaticEnum, TEXT("EMarkersMainTypes"), &Z_Registration_Info_UEnum_EMarkersMainTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3867718315U) },
		{ EQuestLogTypes_StaticEnum, TEXT("EQuestLogTypes"), &Z_Registration_Info_UEnum_EQuestLogTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 539589632U) },
		{ ECompassComparisonResult_StaticEnum, TEXT("ECompassComparisonResult"), &Z_Registration_Info_UEnum_ECompassComparisonResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3639496380U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNumericRewards::StaticStruct, Z_Construct_UScriptStruct_FNumericRewards_Statics::NewStructOps, TEXT("NumericRewards"), &Z_Registration_Info_UScriptStruct_NumericRewards, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNumericRewards), 651813718U) },
		{ FMapNamesArray::StaticStruct, Z_Construct_UScriptStruct_FMapNamesArray_Statics::NewStructOps, TEXT("MapNamesArray"), &Z_Registration_Info_UScriptStruct_MapNamesArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMapNamesArray), 2653733095U) },
		{ FDirectionInfo::StaticStruct, Z_Construct_UScriptStruct_FDirectionInfo_Statics::NewStructOps, TEXT("DirectionInfo"), &Z_Registration_Info_UScriptStruct_DirectionInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDirectionInfo), 1481056245U) },
		{ FStructIconSelector::StaticStruct, Z_Construct_UScriptStruct_FStructIconSelector_Statics::NewStructOps, TEXT("StructIconSelector"), &Z_Registration_Info_UScriptStruct_StructIconSelector, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStructIconSelector), 2251188672U) },
		{ FMinimapLevelSettings::StaticStruct, Z_Construct_UScriptStruct_FMinimapLevelSettings_Statics::NewStructOps, TEXT("MinimapLevelSettings"), &Z_Registration_Info_UScriptStruct_MinimapLevelSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMinimapLevelSettings), 14826U) },
		{ FQuestObjectiveTarget::StaticStruct, Z_Construct_UScriptStruct_FQuestObjectiveTarget_Statics::NewStructOps, TEXT("QuestObjectiveTarget"), &Z_Registration_Info_UScriptStruct_QuestObjectiveTarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestObjectiveTarget), 1889290149U) },
		{ FDoorPointsByLevels::StaticStruct, Z_Construct_UScriptStruct_FDoorPointsByLevels_Statics::NewStructOps, TEXT("DoorPointsByLevels"), &Z_Registration_Info_UScriptStruct_DoorPointsByLevels, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDoorPointsByLevels), 2754736103U) },
		{ FSequenceMaster::StaticStruct, Z_Construct_UScriptStruct_FSequenceMaster_Statics::NewStructOps, TEXT("SequenceMaster"), &Z_Registration_Info_UScriptStruct_SequenceMaster, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSequenceMaster), 2628321247U) },
		{ FPlayerProgress::StaticStruct, Z_Construct_UScriptStruct_FPlayerProgress_Statics::NewStructOps, TEXT("PlayerProgress"), &Z_Registration_Info_UScriptStruct_PlayerProgress, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerProgress), 3775136938U) },
		{ FQuestType::StaticStruct, Z_Construct_UScriptStruct_FQuestType_Statics::NewStructOps, TEXT("QuestType"), &Z_Registration_Info_UScriptStruct_QuestType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestType), 2755114105U) },
		{ FQuestLogInfo::StaticStruct, Z_Construct_UScriptStruct_FQuestLogInfo_Statics::NewStructOps, TEXT("QuestLogInfo"), &Z_Registration_Info_UScriptStruct_QuestLogInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQuestLogInfo), 3627445481U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIQS_Types, UIQS_Types::StaticClass, TEXT("UIQS_Types"), &Z_Registration_Info_UClass_UIQS_Types, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIQS_Types), 1547981745U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Structure_IQS_Types_h_4173909949(TEXT("/Script/ImprovedQuestSystem"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Structure_IQS_Types_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Structure_IQS_Types_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Structure_IQS_Types_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Structure_IQS_Types_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Structure_IQS_Types_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Structure_IQS_Types_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
