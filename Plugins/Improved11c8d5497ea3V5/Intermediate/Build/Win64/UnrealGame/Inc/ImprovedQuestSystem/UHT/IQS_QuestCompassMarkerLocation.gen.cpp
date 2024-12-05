// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImprovedQuestSystem/Public/Widgets/SingleElems/Compass/IQS_QuestCompassMarkerLocation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIQS_QuestCompassMarkerLocation() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_UIQS_QuestCompassMarkerLocation();
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_UIQS_QuestCompassMarkerLocation_NoRegister();
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_UIQS_QuestMarkerBase();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UPackage* Z_Construct_UPackage__Script_ImprovedQuestSystem();
// End Cross Module References

// Begin Class UIQS_QuestCompassMarkerLocation
void UIQS_QuestCompassMarkerLocation::StaticRegisterNativesUIQS_QuestCompassMarkerLocation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIQS_QuestCompassMarkerLocation);
UClass* Z_Construct_UClass_UIQS_QuestCompassMarkerLocation_NoRegister()
{
	return UIQS_QuestCompassMarkerLocation::StaticClass();
}
struct Z_Construct_UClass_UIQS_QuestCompassMarkerLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Widgets/SingleElems/Compass/IQS_QuestCompassMarkerLocation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/Compass/IQS_QuestCompassMarkerLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationTargetCpp_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//<Variables>\n" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/Compass/IQS_QuestCompassMarkerLocation.h" },
		{ "ToolTip", "<Variables>" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsWorldActorCpp_MetaData[] = {
		{ "Category", "Default" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/Compass/IQS_QuestCompassMarkerLocation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceMarkerRef_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/Compass/IQS_QuestCompassMarkerLocation.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationTargetCpp;
	static void NewProp_IsWorldActorCpp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsWorldActorCpp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DistanceMarkerRef;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIQS_QuestCompassMarkerLocation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIQS_QuestCompassMarkerLocation_Statics::NewProp_LocationTargetCpp = { "LocationTargetCpp", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestCompassMarkerLocation, LocationTargetCpp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationTargetCpp_MetaData), NewProp_LocationTargetCpp_MetaData) };
void Z_Construct_UClass_UIQS_QuestCompassMarkerLocation_Statics::NewProp_IsWorldActorCpp_SetBit(void* Obj)
{
	((UIQS_QuestCompassMarkerLocation*)Obj)->IsWorldActorCpp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIQS_QuestCompassMarkerLocation_Statics::NewProp_IsWorldActorCpp = { "IsWorldActorCpp", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIQS_QuestCompassMarkerLocation), &Z_Construct_UClass_UIQS_QuestCompassMarkerLocation_Statics::NewProp_IsWorldActorCpp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsWorldActorCpp_MetaData), NewProp_IsWorldActorCpp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIQS_QuestCompassMarkerLocation_Statics::NewProp_DistanceMarkerRef = { "DistanceMarkerRef", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestCompassMarkerLocation, DistanceMarkerRef), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceMarkerRef_MetaData), NewProp_DistanceMarkerRef_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIQS_QuestCompassMarkerLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestCompassMarkerLocation_Statics::NewProp_LocationTargetCpp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestCompassMarkerLocation_Statics::NewProp_IsWorldActorCpp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestCompassMarkerLocation_Statics::NewProp_DistanceMarkerRef,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_QuestCompassMarkerLocation_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIQS_QuestCompassMarkerLocation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIQS_QuestMarkerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ImprovedQuestSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_QuestCompassMarkerLocation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIQS_QuestCompassMarkerLocation_Statics::ClassParams = {
	&UIQS_QuestCompassMarkerLocation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIQS_QuestCompassMarkerLocation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_QuestCompassMarkerLocation_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_QuestCompassMarkerLocation_Statics::Class_MetaDataParams), Z_Construct_UClass_UIQS_QuestCompassMarkerLocation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIQS_QuestCompassMarkerLocation()
{
	if (!Z_Registration_Info_UClass_UIQS_QuestCompassMarkerLocation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIQS_QuestCompassMarkerLocation.OuterSingleton, Z_Construct_UClass_UIQS_QuestCompassMarkerLocation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIQS_QuestCompassMarkerLocation.OuterSingleton;
}
template<> IMPROVEDQUESTSYSTEM_API UClass* StaticClass<UIQS_QuestCompassMarkerLocation>()
{
	return UIQS_QuestCompassMarkerLocation::StaticClass();
}
UIQS_QuestCompassMarkerLocation::UIQS_QuestCompassMarkerLocation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIQS_QuestCompassMarkerLocation);
UIQS_QuestCompassMarkerLocation::~UIQS_QuestCompassMarkerLocation() {}
// End Class UIQS_QuestCompassMarkerLocation

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_SingleElems_Compass_IQS_QuestCompassMarkerLocation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIQS_QuestCompassMarkerLocation, UIQS_QuestCompassMarkerLocation::StaticClass, TEXT("UIQS_QuestCompassMarkerLocation"), &Z_Registration_Info_UClass_UIQS_QuestCompassMarkerLocation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIQS_QuestCompassMarkerLocation), 655469306U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_SingleElems_Compass_IQS_QuestCompassMarkerLocation_h_2055849492(TEXT("/Script/ImprovedQuestSystem"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_SingleElems_Compass_IQS_QuestCompassMarkerLocation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_SingleElems_Compass_IQS_QuestCompassMarkerLocation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
