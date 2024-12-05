// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImprovedQuestSystem/Public/Widgets/SingleElems/Compass/IQS_QuestCompassMarkerActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIQS_QuestCompassMarkerActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_UIQS_QuestCompassMarkerActor();
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_UIQS_QuestCompassMarkerActor_NoRegister();
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_UIQS_QuestMarkerBase();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_ImprovedQuestSystem();
// End Cross Module References

// Begin Class UIQS_QuestCompassMarkerActor
void UIQS_QuestCompassMarkerActor::StaticRegisterNativesUIQS_QuestCompassMarkerActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIQS_QuestCompassMarkerActor);
UClass* Z_Construct_UClass_UIQS_QuestCompassMarkerActor_NoRegister()
{
	return UIQS_QuestCompassMarkerActor::StaticClass();
}
struct Z_Construct_UClass_UIQS_QuestCompassMarkerActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Widgets/SingleElems/Compass/IQS_QuestCompassMarkerActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/Compass/IQS_QuestCompassMarkerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorTargetCpp_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//<Variables>\n" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/Compass/IQS_QuestCompassMarkerActor.h" },
		{ "ToolTip", "<Variables>" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsWorldActorCpp_MetaData[] = {
		{ "Category", "Default" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/Compass/IQS_QuestCompassMarkerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceMarkerRef_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/Compass/IQS_QuestCompassMarkerActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorTargetCpp;
	static void NewProp_IsWorldActorCpp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsWorldActorCpp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DistanceMarkerRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIQS_QuestCompassMarkerActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIQS_QuestCompassMarkerActor_Statics::NewProp_ActorTargetCpp = { "ActorTargetCpp", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestCompassMarkerActor, ActorTargetCpp), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorTargetCpp_MetaData), NewProp_ActorTargetCpp_MetaData) };
void Z_Construct_UClass_UIQS_QuestCompassMarkerActor_Statics::NewProp_IsWorldActorCpp_SetBit(void* Obj)
{
	((UIQS_QuestCompassMarkerActor*)Obj)->IsWorldActorCpp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIQS_QuestCompassMarkerActor_Statics::NewProp_IsWorldActorCpp = { "IsWorldActorCpp", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIQS_QuestCompassMarkerActor), &Z_Construct_UClass_UIQS_QuestCompassMarkerActor_Statics::NewProp_IsWorldActorCpp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsWorldActorCpp_MetaData), NewProp_IsWorldActorCpp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIQS_QuestCompassMarkerActor_Statics::NewProp_DistanceMarkerRef = { "DistanceMarkerRef", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestCompassMarkerActor, DistanceMarkerRef), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceMarkerRef_MetaData), NewProp_DistanceMarkerRef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIQS_QuestCompassMarkerActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestCompassMarkerActor_Statics::NewProp_ActorTargetCpp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestCompassMarkerActor_Statics::NewProp_IsWorldActorCpp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestCompassMarkerActor_Statics::NewProp_DistanceMarkerRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_QuestCompassMarkerActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIQS_QuestCompassMarkerActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIQS_QuestMarkerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ImprovedQuestSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_QuestCompassMarkerActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIQS_QuestCompassMarkerActor_Statics::ClassParams = {
	&UIQS_QuestCompassMarkerActor::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIQS_QuestCompassMarkerActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_QuestCompassMarkerActor_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_QuestCompassMarkerActor_Statics::Class_MetaDataParams), Z_Construct_UClass_UIQS_QuestCompassMarkerActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIQS_QuestCompassMarkerActor()
{
	if (!Z_Registration_Info_UClass_UIQS_QuestCompassMarkerActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIQS_QuestCompassMarkerActor.OuterSingleton, Z_Construct_UClass_UIQS_QuestCompassMarkerActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIQS_QuestCompassMarkerActor.OuterSingleton;
}
template<> IMPROVEDQUESTSYSTEM_API UClass* StaticClass<UIQS_QuestCompassMarkerActor>()
{
	return UIQS_QuestCompassMarkerActor::StaticClass();
}
UIQS_QuestCompassMarkerActor::UIQS_QuestCompassMarkerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIQS_QuestCompassMarkerActor);
UIQS_QuestCompassMarkerActor::~UIQS_QuestCompassMarkerActor() {}
// End Class UIQS_QuestCompassMarkerActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_SingleElems_Compass_IQS_QuestCompassMarkerActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIQS_QuestCompassMarkerActor, UIQS_QuestCompassMarkerActor::StaticClass, TEXT("UIQS_QuestCompassMarkerActor"), &Z_Registration_Info_UClass_UIQS_QuestCompassMarkerActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIQS_QuestCompassMarkerActor), 994673234U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_SingleElems_Compass_IQS_QuestCompassMarkerActor_h_839327486(TEXT("/Script/ImprovedQuestSystem"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_SingleElems_Compass_IQS_QuestCompassMarkerActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_SingleElems_Compass_IQS_QuestCompassMarkerActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
