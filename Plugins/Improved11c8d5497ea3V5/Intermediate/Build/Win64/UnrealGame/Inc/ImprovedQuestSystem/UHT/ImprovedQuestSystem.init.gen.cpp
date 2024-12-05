// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImprovedQuestSystem_init() {}
	IMPROVEDQUESTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnGetExpAndMoneyReward__DelegateSignature();
	IMPROVEDQUESTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnRemoveTrackedQuest__DelegateSignature();
	IMPROVEDQUESTSYSTEM_API UFunction* Z_Construct_UDelegateFunction_ImprovedQuestSystem_QuestStateChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ImprovedQuestSystem;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ImprovedQuestSystem()
	{
		if (!Z_Registration_Info_UPackage__Script_ImprovedQuestSystem.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnGetExpAndMoneyReward__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ImprovedQuestSystem_OnRemoveTrackedQuest__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_ImprovedQuestSystem_QuestStateChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ImprovedQuestSystem",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x30C0924D,
				0xB1AE1C3F,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ImprovedQuestSystem.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ImprovedQuestSystem.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ImprovedQuestSystem(Z_Construct_UPackage__Script_ImprovedQuestSystem, TEXT("/Script/ImprovedQuestSystem"), Z_Registration_Info_UPackage__Script_ImprovedQuestSystem, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x30C0924D, 0xB1AE1C3F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
