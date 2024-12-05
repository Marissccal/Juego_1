// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImprovedQuestSystem/Public/Widgets/SingleElems/Minimap/IQS_QuestMarkerActorMinimap_NoRotation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIQS_QuestMarkerActorMinimap_NoRotation() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_UIQS_MinimapMarkerBase();
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_UIQS_QuestMarkerActorMinimap_NoRotation();
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_UIQS_QuestMarkerActorMinimap_NoRotation_NoRegister();
UPackage* Z_Construct_UPackage__Script_ImprovedQuestSystem();
// End Cross Module References

// Begin Class UIQS_QuestMarkerActorMinimap_NoRotation
void UIQS_QuestMarkerActorMinimap_NoRotation::StaticRegisterNativesUIQS_QuestMarkerActorMinimap_NoRotation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIQS_QuestMarkerActorMinimap_NoRotation);
UClass* Z_Construct_UClass_UIQS_QuestMarkerActorMinimap_NoRotation_NoRegister()
{
	return UIQS_QuestMarkerActorMinimap_NoRotation::StaticClass();
}
struct Z_Construct_UClass_UIQS_QuestMarkerActorMinimap_NoRotation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Widgets/SingleElems/Minimap/IQS_QuestMarkerActorMinimap_NoRotation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/Minimap/IQS_QuestMarkerActorMinimap_NoRotation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorTargetCpp_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//<Variables>\n" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/Minimap/IQS_QuestMarkerActorMinimap_NoRotation.h" },
		{ "ToolTip", "<Variables>" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorTargetCpp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIQS_QuestMarkerActorMinimap_NoRotation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIQS_QuestMarkerActorMinimap_NoRotation_Statics::NewProp_ActorTargetCpp = { "ActorTargetCpp", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestMarkerActorMinimap_NoRotation, ActorTargetCpp), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorTargetCpp_MetaData), NewProp_ActorTargetCpp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIQS_QuestMarkerActorMinimap_NoRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestMarkerActorMinimap_NoRotation_Statics::NewProp_ActorTargetCpp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_QuestMarkerActorMinimap_NoRotation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIQS_QuestMarkerActorMinimap_NoRotation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIQS_MinimapMarkerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ImprovedQuestSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_QuestMarkerActorMinimap_NoRotation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIQS_QuestMarkerActorMinimap_NoRotation_Statics::ClassParams = {
	&UIQS_QuestMarkerActorMinimap_NoRotation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIQS_QuestMarkerActorMinimap_NoRotation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_QuestMarkerActorMinimap_NoRotation_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_QuestMarkerActorMinimap_NoRotation_Statics::Class_MetaDataParams), Z_Construct_UClass_UIQS_QuestMarkerActorMinimap_NoRotation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIQS_QuestMarkerActorMinimap_NoRotation()
{
	if (!Z_Registration_Info_UClass_UIQS_QuestMarkerActorMinimap_NoRotation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIQS_QuestMarkerActorMinimap_NoRotation.OuterSingleton, Z_Construct_UClass_UIQS_QuestMarkerActorMinimap_NoRotation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIQS_QuestMarkerActorMinimap_NoRotation.OuterSingleton;
}
template<> IMPROVEDQUESTSYSTEM_API UClass* StaticClass<UIQS_QuestMarkerActorMinimap_NoRotation>()
{
	return UIQS_QuestMarkerActorMinimap_NoRotation::StaticClass();
}
UIQS_QuestMarkerActorMinimap_NoRotation::UIQS_QuestMarkerActorMinimap_NoRotation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIQS_QuestMarkerActorMinimap_NoRotation);
UIQS_QuestMarkerActorMinimap_NoRotation::~UIQS_QuestMarkerActorMinimap_NoRotation() {}
// End Class UIQS_QuestMarkerActorMinimap_NoRotation

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_SingleElems_Minimap_IQS_QuestMarkerActorMinimap_NoRotation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIQS_QuestMarkerActorMinimap_NoRotation, UIQS_QuestMarkerActorMinimap_NoRotation::StaticClass, TEXT("UIQS_QuestMarkerActorMinimap_NoRotation"), &Z_Registration_Info_UClass_UIQS_QuestMarkerActorMinimap_NoRotation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIQS_QuestMarkerActorMinimap_NoRotation), 3337142864U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_SingleElems_Minimap_IQS_QuestMarkerActorMinimap_NoRotation_h_961884859(TEXT("/Script/ImprovedQuestSystem"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_SingleElems_Minimap_IQS_QuestMarkerActorMinimap_NoRotation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_SingleElems_Minimap_IQS_QuestMarkerActorMinimap_NoRotation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
