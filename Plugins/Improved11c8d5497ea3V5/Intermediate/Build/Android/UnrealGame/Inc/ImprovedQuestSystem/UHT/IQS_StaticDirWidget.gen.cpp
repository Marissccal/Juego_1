// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImprovedQuestSystem/Public/Widgets/SingleElems/Compass/IQS_StaticDirWidget.h"
#include "ImprovedQuestSystem/Public/Structure/IQS_Types.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIQS_StaticDirWidget() {}

// Begin Cross Module References
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_UIQS_StaticDirWidget();
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_UIQS_StaticDirWidget_NoRegister();
IMPROVEDQUESTSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDirectionInfo();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ImprovedQuestSystem();
// End Cross Module References

// Begin Class UIQS_StaticDirWidget
void UIQS_StaticDirWidget::StaticRegisterNativesUIQS_StaticDirWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIQS_StaticDirWidget);
UClass* Z_Construct_UClass_UIQS_StaticDirWidget_NoRegister()
{
	return UIQS_StaticDirWidget::StaticClass();
}
struct Z_Construct_UClass_UIQS_StaticDirWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Widgets/SingleElems/Compass/IQS_StaticDirWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/Compass/IQS_StaticDirWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionInfoCpp_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//<Variables>\n" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/Compass/IQS_StaticDirWidget.h" },
		{ "ToolTip", "<Variables>" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionInfoCpp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIQS_StaticDirWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIQS_StaticDirWidget_Statics::NewProp_DirectionInfoCpp = { "DirectionInfoCpp", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_StaticDirWidget, DirectionInfoCpp), Z_Construct_UScriptStruct_FDirectionInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionInfoCpp_MetaData), NewProp_DirectionInfoCpp_MetaData) }; // 1481056245
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIQS_StaticDirWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_StaticDirWidget_Statics::NewProp_DirectionInfoCpp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_StaticDirWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIQS_StaticDirWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ImprovedQuestSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_StaticDirWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIQS_StaticDirWidget_Statics::ClassParams = {
	&UIQS_StaticDirWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIQS_StaticDirWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_StaticDirWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_StaticDirWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UIQS_StaticDirWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIQS_StaticDirWidget()
{
	if (!Z_Registration_Info_UClass_UIQS_StaticDirWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIQS_StaticDirWidget.OuterSingleton, Z_Construct_UClass_UIQS_StaticDirWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIQS_StaticDirWidget.OuterSingleton;
}
template<> IMPROVEDQUESTSYSTEM_API UClass* StaticClass<UIQS_StaticDirWidget>()
{
	return UIQS_StaticDirWidget::StaticClass();
}
UIQS_StaticDirWidget::UIQS_StaticDirWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIQS_StaticDirWidget);
UIQS_StaticDirWidget::~UIQS_StaticDirWidget() {}
// End Class UIQS_StaticDirWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_SingleElems_Compass_IQS_StaticDirWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIQS_StaticDirWidget, UIQS_StaticDirWidget::StaticClass, TEXT("UIQS_StaticDirWidget"), &Z_Registration_Info_UClass_UIQS_StaticDirWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIQS_StaticDirWidget), 42009739U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_SingleElems_Compass_IQS_StaticDirWidget_h_3808102708(TEXT("/Script/ImprovedQuestSystem"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_SingleElems_Compass_IQS_StaticDirWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_SingleElems_Compass_IQS_StaticDirWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
