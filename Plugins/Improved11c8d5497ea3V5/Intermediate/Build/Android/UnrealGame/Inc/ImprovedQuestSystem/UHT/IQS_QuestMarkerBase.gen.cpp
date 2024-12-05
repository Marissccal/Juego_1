// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImprovedQuestSystem/Public/Widgets/SingleElems/IQS_QuestMarkerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIQS_QuestMarkerBase() {}

// Begin Cross Module References
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_UIQS_QuestMarkerBase();
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_UIQS_QuestMarkerBase_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_ImprovedQuestSystem();
// End Cross Module References

// Begin Class UIQS_QuestMarkerBase Function RemoveQuestMarkByActor_BP
static const FName NAME_UIQS_QuestMarkerBase_RemoveQuestMarkByActor_BP = FName(TEXT("RemoveQuestMarkByActor_BP"));
void UIQS_QuestMarkerBase::RemoveQuestMarkByActor_BP()
{
	UFunction* Func = FindFunctionChecked(NAME_UIQS_QuestMarkerBase_RemoveQuestMarkByActor_BP);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		RemoveQuestMarkByActor_BP_Implementation();
	}
}
struct Z_Construct_UFunction_UIQS_QuestMarkerBase_RemoveQuestMarkByActor_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/IQS_QuestMarkerBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIQS_QuestMarkerBase_RemoveQuestMarkByActor_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIQS_QuestMarkerBase, nullptr, "RemoveQuestMarkByActor_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestMarkerBase_RemoveQuestMarkByActor_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIQS_QuestMarkerBase_RemoveQuestMarkByActor_BP_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UIQS_QuestMarkerBase_RemoveQuestMarkByActor_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIQS_QuestMarkerBase_RemoveQuestMarkByActor_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIQS_QuestMarkerBase::execRemoveQuestMarkByActor_BP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveQuestMarkByActor_BP_Implementation();
	P_NATIVE_END;
}
// End Class UIQS_QuestMarkerBase Function RemoveQuestMarkByActor_BP

// Begin Class UIQS_QuestMarkerBase Function TimedRemove_BP
static const FName NAME_UIQS_QuestMarkerBase_TimedRemove_BP = FName(TEXT("TimedRemove_BP"));
void UIQS_QuestMarkerBase::TimedRemove_BP()
{
	UFunction* Func = FindFunctionChecked(NAME_UIQS_QuestMarkerBase_TimedRemove_BP);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		TimedRemove_BP_Implementation();
	}
}
struct Z_Construct_UFunction_UIQS_QuestMarkerBase_TimedRemove_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/IQS_QuestMarkerBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIQS_QuestMarkerBase_TimedRemove_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIQS_QuestMarkerBase, nullptr, "TimedRemove_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestMarkerBase_TimedRemove_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIQS_QuestMarkerBase_TimedRemove_BP_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UIQS_QuestMarkerBase_TimedRemove_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIQS_QuestMarkerBase_TimedRemove_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIQS_QuestMarkerBase::execTimedRemove_BP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TimedRemove_BP_Implementation();
	P_NATIVE_END;
}
// End Class UIQS_QuestMarkerBase Function TimedRemove_BP

// Begin Class UIQS_QuestMarkerBase Function TimedRemoveCpp
struct Z_Construct_UFunction_UIQS_QuestMarkerBase_TimedRemoveCpp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/IQS_QuestMarkerBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIQS_QuestMarkerBase_TimedRemoveCpp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIQS_QuestMarkerBase, nullptr, "TimedRemoveCpp", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestMarkerBase_TimedRemoveCpp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIQS_QuestMarkerBase_TimedRemoveCpp_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UIQS_QuestMarkerBase_TimedRemoveCpp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIQS_QuestMarkerBase_TimedRemoveCpp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIQS_QuestMarkerBase::execTimedRemoveCpp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TimedRemoveCpp();
	P_NATIVE_END;
}
// End Class UIQS_QuestMarkerBase Function TimedRemoveCpp

// Begin Class UIQS_QuestMarkerBase
void UIQS_QuestMarkerBase::StaticRegisterNativesUIQS_QuestMarkerBase()
{
	UClass* Class = UIQS_QuestMarkerBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RemoveQuestMarkByActor_BP", &UIQS_QuestMarkerBase::execRemoveQuestMarkByActor_BP },
		{ "TimedRemove_BP", &UIQS_QuestMarkerBase::execTimedRemove_BP },
		{ "TimedRemoveCpp", &UIQS_QuestMarkerBase::execTimedRemoveCpp },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIQS_QuestMarkerBase);
UClass* Z_Construct_UClass_UIQS_QuestMarkerBase_NoRegister()
{
	return UIQS_QuestMarkerBase::StaticClass();
}
struct Z_Construct_UClass_UIQS_QuestMarkerBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Widgets/SingleElems/IQS_QuestMarkerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/IQS_QuestMarkerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsRemovedCpp_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//<Variables>\n" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/IQS_QuestMarkerBase.h" },
		{ "ToolTip", "<Variables>" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WillDoAnimCpp_MetaData[] = {
		{ "Category", "Default" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/IQS_QuestMarkerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToHideCpp_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/IQS_QuestMarkerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MarkerAboutCpp_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/IQS_QuestMarkerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QuestIdCpp_MetaData[] = {
		{ "Category", "Default" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/IQS_QuestMarkerBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_IsRemovedCpp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsRemovedCpp;
	static void NewProp_WillDoAnimCpp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WillDoAnimCpp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToHideCpp;
	static const UECodeGen_Private::FTextPropertyParams NewProp_MarkerAboutCpp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_QuestIdCpp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIQS_QuestMarkerBase_RemoveQuestMarkByActor_BP, "RemoveQuestMarkByActor_BP" }, // 2079913307
		{ &Z_Construct_UFunction_UIQS_QuestMarkerBase_TimedRemove_BP, "TimedRemove_BP" }, // 1619491077
		{ &Z_Construct_UFunction_UIQS_QuestMarkerBase_TimedRemoveCpp, "TimedRemoveCpp" }, // 2280006740
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIQS_QuestMarkerBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UIQS_QuestMarkerBase_Statics::NewProp_IsRemovedCpp_SetBit(void* Obj)
{
	((UIQS_QuestMarkerBase*)Obj)->IsRemovedCpp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIQS_QuestMarkerBase_Statics::NewProp_IsRemovedCpp = { "IsRemovedCpp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIQS_QuestMarkerBase), &Z_Construct_UClass_UIQS_QuestMarkerBase_Statics::NewProp_IsRemovedCpp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsRemovedCpp_MetaData), NewProp_IsRemovedCpp_MetaData) };
void Z_Construct_UClass_UIQS_QuestMarkerBase_Statics::NewProp_WillDoAnimCpp_SetBit(void* Obj)
{
	((UIQS_QuestMarkerBase*)Obj)->WillDoAnimCpp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIQS_QuestMarkerBase_Statics::NewProp_WillDoAnimCpp = { "WillDoAnimCpp", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIQS_QuestMarkerBase), &Z_Construct_UClass_UIQS_QuestMarkerBase_Statics::NewProp_WillDoAnimCpp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WillDoAnimCpp_MetaData), NewProp_WillDoAnimCpp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIQS_QuestMarkerBase_Statics::NewProp_DistanceToHideCpp = { "DistanceToHideCpp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestMarkerBase, DistanceToHideCpp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceToHideCpp_MetaData), NewProp_DistanceToHideCpp_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UIQS_QuestMarkerBase_Statics::NewProp_MarkerAboutCpp = { "MarkerAboutCpp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestMarkerBase, MarkerAboutCpp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MarkerAboutCpp_MetaData), NewProp_MarkerAboutCpp_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIQS_QuestMarkerBase_Statics::NewProp_QuestIdCpp = { "QuestIdCpp", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_QuestMarkerBase, QuestIdCpp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QuestIdCpp_MetaData), NewProp_QuestIdCpp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIQS_QuestMarkerBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestMarkerBase_Statics::NewProp_IsRemovedCpp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestMarkerBase_Statics::NewProp_WillDoAnimCpp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestMarkerBase_Statics::NewProp_DistanceToHideCpp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestMarkerBase_Statics::NewProp_MarkerAboutCpp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_QuestMarkerBase_Statics::NewProp_QuestIdCpp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_QuestMarkerBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIQS_QuestMarkerBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_ImprovedQuestSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_QuestMarkerBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIQS_QuestMarkerBase_Statics::ClassParams = {
	&UIQS_QuestMarkerBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIQS_QuestMarkerBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_QuestMarkerBase_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_QuestMarkerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UIQS_QuestMarkerBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIQS_QuestMarkerBase()
{
	if (!Z_Registration_Info_UClass_UIQS_QuestMarkerBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIQS_QuestMarkerBase.OuterSingleton, Z_Construct_UClass_UIQS_QuestMarkerBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIQS_QuestMarkerBase.OuterSingleton;
}
template<> IMPROVEDQUESTSYSTEM_API UClass* StaticClass<UIQS_QuestMarkerBase>()
{
	return UIQS_QuestMarkerBase::StaticClass();
}
UIQS_QuestMarkerBase::UIQS_QuestMarkerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIQS_QuestMarkerBase);
UIQS_QuestMarkerBase::~UIQS_QuestMarkerBase() {}
// End Class UIQS_QuestMarkerBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_SingleElems_IQS_QuestMarkerBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIQS_QuestMarkerBase, UIQS_QuestMarkerBase::StaticClass, TEXT("UIQS_QuestMarkerBase"), &Z_Registration_Info_UClass_UIQS_QuestMarkerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIQS_QuestMarkerBase), 2194045245U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_SingleElems_IQS_QuestMarkerBase_h_3818911869(TEXT("/Script/ImprovedQuestSystem"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_SingleElems_IQS_QuestMarkerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_SingleElems_IQS_QuestMarkerBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
