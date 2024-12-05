// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImprovedQuestSystem/Public/RewardActor/IQS_RewardActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIQS_RewardActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_AIQS_RewardActor();
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_AIQS_RewardActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_ImprovedQuestSystem();
// End Cross Module References

// Begin Class AIQS_RewardActor Function BeginPlay
struct Z_Construct_UFunction_AIQS_RewardActor_BeginPlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RewardActor/IQS_RewardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIQS_RewardActor_BeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIQS_RewardActor, nullptr, "BeginPlay", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIQS_RewardActor_BeginPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIQS_RewardActor_BeginPlay_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AIQS_RewardActor_BeginPlay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIQS_RewardActor_BeginPlay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIQS_RewardActor::execBeginPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BeginPlay();
	P_NATIVE_END;
}
// End Class AIQS_RewardActor Function BeginPlay

// Begin Class AIQS_RewardActor Function GetReward
static const FName NAME_AIQS_RewardActor_GetReward = FName(TEXT("GetReward"));
void AIQS_RewardActor::GetReward()
{
	UFunction* Func = FindFunctionChecked(NAME_AIQS_RewardActor_GetReward);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		GetReward_Implementation();
	}
}
struct Z_Construct_UFunction_AIQS_RewardActor_GetReward_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Overridable Functions" },
		{ "ModuleRelativePath", "Public/RewardActor/IQS_RewardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AIQS_RewardActor_GetReward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AIQS_RewardActor, nullptr, "GetReward", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AIQS_RewardActor_GetReward_Statics::Function_MetaDataParams), Z_Construct_UFunction_AIQS_RewardActor_GetReward_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AIQS_RewardActor_GetReward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AIQS_RewardActor_GetReward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AIQS_RewardActor::execGetReward)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetReward_Implementation();
	P_NATIVE_END;
}
// End Class AIQS_RewardActor Function GetReward

// Begin Class AIQS_RewardActor
void AIQS_RewardActor::StaticRegisterNativesAIQS_RewardActor()
{
	UClass* Class = AIQS_RewardActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BeginPlay", &AIQS_RewardActor::execBeginPlay },
		{ "GetReward", &AIQS_RewardActor::execGetReward },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AIQS_RewardActor);
UClass* Z_Construct_UClass_AIQS_RewardActor_NoRegister()
{
	return AIQS_RewardActor::StaticClass();
}
struct Z_Construct_UClass_AIQS_RewardActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RewardActor/IQS_RewardActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RewardActor/IQS_RewardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewLifeTime_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/RewardActor/IQS_RewardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLifeTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AIQS_RewardActor_BeginPlay, "BeginPlay" }, // 2623638060
		{ &Z_Construct_UFunction_AIQS_RewardActor_GetReward, "GetReward" }, // 1113785263
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIQS_RewardActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AIQS_RewardActor_Statics::NewProp_NewLifeTime = { "NewLifeTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIQS_RewardActor, NewLifeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewLifeTime_MetaData), NewProp_NewLifeTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIQS_RewardActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIQS_RewardActor_Statics::NewProp_NewLifeTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIQS_RewardActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AIQS_RewardActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_ImprovedQuestSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AIQS_RewardActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AIQS_RewardActor_Statics::ClassParams = {
	&AIQS_RewardActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AIQS_RewardActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AIQS_RewardActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AIQS_RewardActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AIQS_RewardActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AIQS_RewardActor()
{
	if (!Z_Registration_Info_UClass_AIQS_RewardActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIQS_RewardActor.OuterSingleton, Z_Construct_UClass_AIQS_RewardActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AIQS_RewardActor.OuterSingleton;
}
template<> IMPROVEDQUESTSYSTEM_API UClass* StaticClass<AIQS_RewardActor>()
{
	return AIQS_RewardActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AIQS_RewardActor);
AIQS_RewardActor::~AIQS_RewardActor() {}
// End Class AIQS_RewardActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_RewardActor_IQS_RewardActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AIQS_RewardActor, AIQS_RewardActor::StaticClass, TEXT("AIQS_RewardActor"), &Z_Registration_Info_UClass_AIQS_RewardActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIQS_RewardActor), 51618942U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_RewardActor_IQS_RewardActor_h_3183456406(TEXT("/Script/ImprovedQuestSystem"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_RewardActor_IQS_RewardActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_RewardActor_IQS_RewardActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
