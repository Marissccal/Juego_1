// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImprovedQuestSystem/Public/Widgets/SingleElems/Minimap/IQS_PlayerMarker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIQS_PlayerMarker() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_UIQS_MinimapMarkerBase();
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_UIQS_PlayerMarker();
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_UIQS_PlayerMarker_NoRegister();
UPackage* Z_Construct_UPackage__Script_ImprovedQuestSystem();
// End Cross Module References

// Begin Class UIQS_PlayerMarker
void UIQS_PlayerMarker::StaticRegisterNativesUIQS_PlayerMarker()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIQS_PlayerMarker);
UClass* Z_Construct_UClass_UIQS_PlayerMarker_NoRegister()
{
	return UIQS_PlayerMarker::StaticClass();
}
struct Z_Construct_UClass_UIQS_PlayerMarker_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Widgets/SingleElems/Minimap/IQS_PlayerMarker.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/Minimap/IQS_PlayerMarker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorTargetCpp_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//<Variables>\n" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/Minimap/IQS_PlayerMarker.h" },
		{ "ToolTip", "<Variables>" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCoordsOffsetX_Cpp_MetaData[] = {
		{ "Category", "Default" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/Minimap/IQS_PlayerMarker.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCoordsOffsetY_Cpp_MetaData[] = {
		{ "Category", "Default" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/Minimap/IQS_PlayerMarker.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorTargetCpp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerCoordsOffsetX_Cpp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerCoordsOffsetY_Cpp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIQS_PlayerMarker>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIQS_PlayerMarker_Statics::NewProp_ActorTargetCpp = { "ActorTargetCpp", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_PlayerMarker, ActorTargetCpp), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorTargetCpp_MetaData), NewProp_ActorTargetCpp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIQS_PlayerMarker_Statics::NewProp_PlayerCoordsOffsetX_Cpp = { "PlayerCoordsOffsetX_Cpp", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_PlayerMarker, PlayerCoordsOffsetX_Cpp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCoordsOffsetX_Cpp_MetaData), NewProp_PlayerCoordsOffsetX_Cpp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIQS_PlayerMarker_Statics::NewProp_PlayerCoordsOffsetY_Cpp = { "PlayerCoordsOffsetY_Cpp", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_PlayerMarker, PlayerCoordsOffsetY_Cpp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCoordsOffsetY_Cpp_MetaData), NewProp_PlayerCoordsOffsetY_Cpp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIQS_PlayerMarker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_PlayerMarker_Statics::NewProp_ActorTargetCpp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_PlayerMarker_Statics::NewProp_PlayerCoordsOffsetX_Cpp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_PlayerMarker_Statics::NewProp_PlayerCoordsOffsetY_Cpp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_PlayerMarker_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIQS_PlayerMarker_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIQS_MinimapMarkerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ImprovedQuestSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_PlayerMarker_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIQS_PlayerMarker_Statics::ClassParams = {
	&UIQS_PlayerMarker::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIQS_PlayerMarker_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_PlayerMarker_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_PlayerMarker_Statics::Class_MetaDataParams), Z_Construct_UClass_UIQS_PlayerMarker_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIQS_PlayerMarker()
{
	if (!Z_Registration_Info_UClass_UIQS_PlayerMarker.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIQS_PlayerMarker.OuterSingleton, Z_Construct_UClass_UIQS_PlayerMarker_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIQS_PlayerMarker.OuterSingleton;
}
template<> IMPROVEDQUESTSYSTEM_API UClass* StaticClass<UIQS_PlayerMarker>()
{
	return UIQS_PlayerMarker::StaticClass();
}
UIQS_PlayerMarker::UIQS_PlayerMarker(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIQS_PlayerMarker);
UIQS_PlayerMarker::~UIQS_PlayerMarker() {}
// End Class UIQS_PlayerMarker

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_SingleElems_Minimap_IQS_PlayerMarker_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIQS_PlayerMarker, UIQS_PlayerMarker::StaticClass, TEXT("UIQS_PlayerMarker"), &Z_Registration_Info_UClass_UIQS_PlayerMarker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIQS_PlayerMarker), 2142381693U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_SingleElems_Minimap_IQS_PlayerMarker_h_4055305297(TEXT("/Script/ImprovedQuestSystem"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_SingleElems_Minimap_IQS_PlayerMarker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_SingleElems_Minimap_IQS_PlayerMarker_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
