// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImprovedQuestSystem/Public/Widgets/Minimap/IQS_MinimapWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIQS_MinimapWidget() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_UIQS_MinimapWidget();
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_UIQS_MinimapWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ImprovedQuestSystem();
// End Cross Module References

// Begin Class UIQS_MinimapWidget
void UIQS_MinimapWidget::StaticRegisterNativesUIQS_MinimapWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIQS_MinimapWidget);
UClass* Z_Construct_UClass_UIQS_MinimapWidget_NoRegister()
{
	return UIQS_MinimapWidget::StaticClass();
}
struct Z_Construct_UClass_UIQS_MinimapWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Widgets/Minimap/IQS_MinimapWidget.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Widgets/Minimap/IQS_MinimapWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MP_MinimapRef_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//<Variables>\n" },
		{ "ModuleRelativePath", "Public/Widgets/Minimap/IQS_MinimapWidget.h" },
		{ "ToolTip", "<Variables>" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsZonemapEnabledCpp_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Widgets/Minimap/IQS_MinimapWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_halfWorldSizeXMinusOffsetCpp_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Widgets/Minimap/IQS_MinimapWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_halfWorldSizeYMinusOffsetCpp_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Widgets/Minimap/IQS_MinimapWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MP_MinimapRef;
	static void NewProp_IsZonemapEnabledCpp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsZonemapEnabledCpp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_halfWorldSizeXMinusOffsetCpp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_halfWorldSizeYMinusOffsetCpp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIQS_MinimapWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIQS_MinimapWidget_Statics::NewProp_MP_MinimapRef = { "MP_MinimapRef", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_MinimapWidget, MP_MinimapRef), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MP_MinimapRef_MetaData), NewProp_MP_MinimapRef_MetaData) };
void Z_Construct_UClass_UIQS_MinimapWidget_Statics::NewProp_IsZonemapEnabledCpp_SetBit(void* Obj)
{
	((UIQS_MinimapWidget*)Obj)->IsZonemapEnabledCpp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIQS_MinimapWidget_Statics::NewProp_IsZonemapEnabledCpp = { "IsZonemapEnabledCpp", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIQS_MinimapWidget), &Z_Construct_UClass_UIQS_MinimapWidget_Statics::NewProp_IsZonemapEnabledCpp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsZonemapEnabledCpp_MetaData), NewProp_IsZonemapEnabledCpp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIQS_MinimapWidget_Statics::NewProp_halfWorldSizeXMinusOffsetCpp = { "halfWorldSizeXMinusOffsetCpp", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_MinimapWidget, halfWorldSizeXMinusOffsetCpp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_halfWorldSizeXMinusOffsetCpp_MetaData), NewProp_halfWorldSizeXMinusOffsetCpp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIQS_MinimapWidget_Statics::NewProp_halfWorldSizeYMinusOffsetCpp = { "halfWorldSizeYMinusOffsetCpp", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_MinimapWidget, halfWorldSizeYMinusOffsetCpp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_halfWorldSizeYMinusOffsetCpp_MetaData), NewProp_halfWorldSizeYMinusOffsetCpp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIQS_MinimapWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_MinimapWidget_Statics::NewProp_MP_MinimapRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_MinimapWidget_Statics::NewProp_IsZonemapEnabledCpp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_MinimapWidget_Statics::NewProp_halfWorldSizeXMinusOffsetCpp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_MinimapWidget_Statics::NewProp_halfWorldSizeYMinusOffsetCpp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_MinimapWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIQS_MinimapWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ImprovedQuestSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_MinimapWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIQS_MinimapWidget_Statics::ClassParams = {
	&UIQS_MinimapWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UIQS_MinimapWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_MinimapWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_MinimapWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UIQS_MinimapWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIQS_MinimapWidget()
{
	if (!Z_Registration_Info_UClass_UIQS_MinimapWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIQS_MinimapWidget.OuterSingleton, Z_Construct_UClass_UIQS_MinimapWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIQS_MinimapWidget.OuterSingleton;
}
template<> IMPROVEDQUESTSYSTEM_API UClass* StaticClass<UIQS_MinimapWidget>()
{
	return UIQS_MinimapWidget::StaticClass();
}
UIQS_MinimapWidget::UIQS_MinimapWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIQS_MinimapWidget);
UIQS_MinimapWidget::~UIQS_MinimapWidget() {}
// End Class UIQS_MinimapWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_Minimap_IQS_MinimapWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIQS_MinimapWidget, UIQS_MinimapWidget::StaticClass, TEXT("UIQS_MinimapWidget"), &Z_Registration_Info_UClass_UIQS_MinimapWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIQS_MinimapWidget), 1433535305U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_Minimap_IQS_MinimapWidget_h_1134105997(TEXT("/Script/ImprovedQuestSystem"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_Minimap_IQS_MinimapWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_Minimap_IQS_MinimapWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
