// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImprovedQuestSystem/Public/Widgets/Compass/IQS_CompassWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIQS_CompassWidget() {}

// Begin Cross Module References
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_UIQS_CompassWidget();
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_UIQS_CompassWidget_NoRegister();
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_UIQS_QuestMarkerBase_NoRegister();
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_UIQS_StaticDirWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ImprovedQuestSystem();
// End Cross Module References

// Begin Class UIQS_CompassWidget
void UIQS_CompassWidget::StaticRegisterNativesUIQS_CompassWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIQS_CompassWidget);
UClass* Z_Construct_UClass_UIQS_CompassWidget_NoRegister()
{
	return UIQS_CompassWidget::StaticClass();
}
struct Z_Construct_UClass_UIQS_CompassWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Widgets/Compass/IQS_CompassWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Compass/IQS_CompassWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsCompassVisCpp_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//<Variables>\n" },
		{ "ModuleRelativePath", "Public/Widgets/Compass/IQS_CompassWidget.h" },
		{ "ToolTip", "<Variables>" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsCompassActiCpp_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Widgets/Compass/IQS_CompassWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirsCpp_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Compass/IQS_CompassWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompassMarkersCpp_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Compass/IQS_CompassWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldActorsOnCompassMarkersCpp_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Compass/IQS_CompassWidget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsCompassVisCpp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsCompassVisCpp;
	static void NewProp_IsCompassActiCpp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsCompassActiCpp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DirsCpp_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DirsCpp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CompassMarkersCpp_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CompassMarkersCpp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldActorsOnCompassMarkersCpp_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WorldActorsOnCompassMarkersCpp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIQS_CompassWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UIQS_CompassWidget_Statics::NewProp_IsCompassVisCpp_SetBit(void* Obj)
{
	((UIQS_CompassWidget*)Obj)->IsCompassVisCpp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIQS_CompassWidget_Statics::NewProp_IsCompassVisCpp = { "IsCompassVisCpp", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIQS_CompassWidget), &Z_Construct_UClass_UIQS_CompassWidget_Statics::NewProp_IsCompassVisCpp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsCompassVisCpp_MetaData), NewProp_IsCompassVisCpp_MetaData) };
void Z_Construct_UClass_UIQS_CompassWidget_Statics::NewProp_IsCompassActiCpp_SetBit(void* Obj)
{
	((UIQS_CompassWidget*)Obj)->IsCompassActiCpp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIQS_CompassWidget_Statics::NewProp_IsCompassActiCpp = { "IsCompassActiCpp", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIQS_CompassWidget), &Z_Construct_UClass_UIQS_CompassWidget_Statics::NewProp_IsCompassActiCpp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsCompassActiCpp_MetaData), NewProp_IsCompassActiCpp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIQS_CompassWidget_Statics::NewProp_DirsCpp_Inner = { "DirsCpp", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UIQS_StaticDirWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIQS_CompassWidget_Statics::NewProp_DirsCpp = { "DirsCpp", nullptr, (EPropertyFlags)0x001000800000000c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_CompassWidget, DirsCpp), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirsCpp_MetaData), NewProp_DirsCpp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIQS_CompassWidget_Statics::NewProp_CompassMarkersCpp_Inner = { "CompassMarkersCpp", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UIQS_QuestMarkerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIQS_CompassWidget_Statics::NewProp_CompassMarkersCpp = { "CompassMarkersCpp", nullptr, (EPropertyFlags)0x001000800000000c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_CompassWidget, CompassMarkersCpp), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompassMarkersCpp_MetaData), NewProp_CompassMarkersCpp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIQS_CompassWidget_Statics::NewProp_WorldActorsOnCompassMarkersCpp_Inner = { "WorldActorsOnCompassMarkersCpp", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UIQS_QuestMarkerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIQS_CompassWidget_Statics::NewProp_WorldActorsOnCompassMarkersCpp = { "WorldActorsOnCompassMarkersCpp", nullptr, (EPropertyFlags)0x001000800000000c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_CompassWidget, WorldActorsOnCompassMarkersCpp), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldActorsOnCompassMarkersCpp_MetaData), NewProp_WorldActorsOnCompassMarkersCpp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIQS_CompassWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_CompassWidget_Statics::NewProp_IsCompassVisCpp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_CompassWidget_Statics::NewProp_IsCompassActiCpp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_CompassWidget_Statics::NewProp_DirsCpp_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_CompassWidget_Statics::NewProp_DirsCpp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_CompassWidget_Statics::NewProp_CompassMarkersCpp_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_CompassWidget_Statics::NewProp_CompassMarkersCpp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_CompassWidget_Statics::NewProp_WorldActorsOnCompassMarkersCpp_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_CompassWidget_Statics::NewProp_WorldActorsOnCompassMarkersCpp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_CompassWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIQS_CompassWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ImprovedQuestSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_CompassWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIQS_CompassWidget_Statics::ClassParams = {
	&UIQS_CompassWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIQS_CompassWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_CompassWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_CompassWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UIQS_CompassWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIQS_CompassWidget()
{
	if (!Z_Registration_Info_UClass_UIQS_CompassWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIQS_CompassWidget.OuterSingleton, Z_Construct_UClass_UIQS_CompassWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIQS_CompassWidget.OuterSingleton;
}
template<> IMPROVEDQUESTSYSTEM_API UClass* StaticClass<UIQS_CompassWidget>()
{
	return UIQS_CompassWidget::StaticClass();
}
UIQS_CompassWidget::UIQS_CompassWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIQS_CompassWidget);
UIQS_CompassWidget::~UIQS_CompassWidget() {}
// End Class UIQS_CompassWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_Compass_IQS_CompassWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIQS_CompassWidget, UIQS_CompassWidget::StaticClass, TEXT("UIQS_CompassWidget"), &Z_Registration_Info_UClass_UIQS_CompassWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIQS_CompassWidget), 802651538U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_Compass_IQS_CompassWidget_h_311961267(TEXT("/Script/ImprovedQuestSystem"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_Compass_IQS_CompassWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_Compass_IQS_CompassWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
