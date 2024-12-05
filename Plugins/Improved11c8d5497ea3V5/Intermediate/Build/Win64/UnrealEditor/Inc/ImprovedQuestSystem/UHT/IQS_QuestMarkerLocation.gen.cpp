// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImprovedQuestSystem/Public/Widgets/SingleElems/Screen/IQS_QuestMarkerLocation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIQS_QuestMarkerLocation() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_UIQS_QuestMarkerBase();
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_UIQS_QuestMarkerLocation();
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_UIQS_QuestMarkerLocation_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_ImprovedQuestSystem();
// End Cross Module References

// Begin Class UIQS_QuestMarkerLocation
void UIQS_QuestMarkerLocation::StaticRegisterNativesUIQS_QuestMarkerLocation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIQS_QuestMarkerLocation);
UClass* Z_Construct_UClass_UIQS_QuestMarkerLocation_NoRegister()
{
	return UIQS_QuestMarkerLocation::StaticClass();
}
struct Z_Construct_UClass_UIQS_QuestMarkerLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Widgets/SingleElems/Screen/IQS_QuestMarkerLocation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/Screen/IQS_QuestMarkerLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceMarkerRef_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//<Variables>\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/Screen/IQS_QuestMarkerLocation.h" },
		{ "ToolTip", "<Variables>" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationTargetCpp_MetaData[] = {
		{ "Category", "Default" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/Screen/IQS_QuestMarkerLocation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DistanceMarkerRef;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationTargetCpp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIQS_QuestMarkerLocation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIQS_QuestMarkerLocation_Statics::NewProp_DistanceMarkerRef = { "DistanceMarkerRef", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestMarkerLocation, DistanceMarkerRef), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceMarkerRef_MetaData), NewProp_DistanceMarkerRef_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIQS_QuestMarkerLocation_Statics::NewProp_LocationTargetCpp = { "LocationTargetCpp", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestMarkerLocation, LocationTargetCpp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationTargetCpp_MetaData), NewProp_LocationTargetCpp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIQS_QuestMarkerLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestMarkerLocation_Statics::NewProp_DistanceMarkerRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestMarkerLocation_Statics::NewProp_LocationTargetCpp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_QuestMarkerLocation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIQS_QuestMarkerLocation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIQS_QuestMarkerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ImprovedQuestSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_QuestMarkerLocation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIQS_QuestMarkerLocation_Statics::ClassParams = {
	&UIQS_QuestMarkerLocation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIQS_QuestMarkerLocation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_QuestMarkerLocation_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_QuestMarkerLocation_Statics::Class_MetaDataParams), Z_Construct_UClass_UIQS_QuestMarkerLocation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIQS_QuestMarkerLocation()
{
	if (!Z_Registration_Info_UClass_UIQS_QuestMarkerLocation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIQS_QuestMarkerLocation.OuterSingleton, Z_Construct_UClass_UIQS_QuestMarkerLocation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIQS_QuestMarkerLocation.OuterSingleton;
}
template<> IMPROVEDQUESTSYSTEM_API UClass* StaticClass<UIQS_QuestMarkerLocation>()
{
	return UIQS_QuestMarkerLocation::StaticClass();
}
UIQS_QuestMarkerLocation::UIQS_QuestMarkerLocation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIQS_QuestMarkerLocation);
UIQS_QuestMarkerLocation::~UIQS_QuestMarkerLocation() {}
// End Class UIQS_QuestMarkerLocation

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_SingleElems_Screen_IQS_QuestMarkerLocation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIQS_QuestMarkerLocation, UIQS_QuestMarkerLocation::StaticClass, TEXT("UIQS_QuestMarkerLocation"), &Z_Registration_Info_UClass_UIQS_QuestMarkerLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIQS_QuestMarkerLocation), 3252833378U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_SingleElems_Screen_IQS_QuestMarkerLocation_h_1966193360(TEXT("/Script/ImprovedQuestSystem"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_SingleElems_Screen_IQS_QuestMarkerLocation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_SingleElems_Screen_IQS_QuestMarkerLocation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
