// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImprovedQuestSystem/Public/Interface/IQS_QuestObjectiveInterfaceCpp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIQS_QuestObjectiveInterfaceCpp() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_UIQS_QuestObjectiveInterfaceCpp();
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_UIQS_QuestObjectiveInterfaceCpp_NoRegister();
UPackage* Z_Construct_UPackage__Script_ImprovedQuestSystem();
// End Cross Module References

// Begin Interface UIQS_QuestObjectiveInterfaceCpp Function GetQuestObjectiveOffsetCpp
struct IQS_QuestObjectiveInterfaceCpp_eventGetQuestObjectiveOffsetCpp_Parms
{
	FVector ReturnValue;

	/** Constructor, initializes return property only **/
	IQS_QuestObjectiveInterfaceCpp_eventGetQuestObjectiveOffsetCpp_Parms()
		: ReturnValue(ForceInit)
	{
	}
};
FVector IIQS_QuestObjectiveInterfaceCpp::GetQuestObjectiveOffsetCpp()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetQuestObjectiveOffsetCpp instead.");
	IQS_QuestObjectiveInterfaceCpp_eventGetQuestObjectiveOffsetCpp_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UIQS_QuestObjectiveInterfaceCpp_GetQuestObjectiveOffsetCpp = FName(TEXT("GetQuestObjectiveOffsetCpp"));
FVector IIQS_QuestObjectiveInterfaceCpp::Execute_GetQuestObjectiveOffsetCpp(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UIQS_QuestObjectiveInterfaceCpp::StaticClass()));
	IQS_QuestObjectiveInterfaceCpp_eventGetQuestObjectiveOffsetCpp_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UIQS_QuestObjectiveInterfaceCpp_GetQuestObjectiveOffsetCpp);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UIQS_QuestObjectiveInterfaceCpp_GetQuestObjectiveOffsetCpp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "IQS_QuestObjective" },
		{ "ModuleRelativePath", "Public/Interface/IQS_QuestObjectiveInterfaceCpp.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UIQS_QuestObjectiveInterfaceCpp_GetQuestObjectiveOffsetCpp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_QuestObjectiveInterfaceCpp_eventGetQuestObjectiveOffsetCpp_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIQS_QuestObjectiveInterfaceCpp_GetQuestObjectiveOffsetCpp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_QuestObjectiveInterfaceCpp_GetQuestObjectiveOffsetCpp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestObjectiveInterfaceCpp_GetQuestObjectiveOffsetCpp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIQS_QuestObjectiveInterfaceCpp_GetQuestObjectiveOffsetCpp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIQS_QuestObjectiveInterfaceCpp, nullptr, "GetQuestObjectiveOffsetCpp", nullptr, nullptr, Z_Construct_UFunction_UIQS_QuestObjectiveInterfaceCpp_GetQuestObjectiveOffsetCpp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestObjectiveInterfaceCpp_GetQuestObjectiveOffsetCpp_Statics::PropPointers), sizeof(IQS_QuestObjectiveInterfaceCpp_eventGetQuestObjectiveOffsetCpp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_QuestObjectiveInterfaceCpp_GetQuestObjectiveOffsetCpp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIQS_QuestObjectiveInterfaceCpp_GetQuestObjectiveOffsetCpp_Statics::Function_MetaDataParams) };
static_assert(sizeof(IQS_QuestObjectiveInterfaceCpp_eventGetQuestObjectiveOffsetCpp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIQS_QuestObjectiveInterfaceCpp_GetQuestObjectiveOffsetCpp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIQS_QuestObjectiveInterfaceCpp_GetQuestObjectiveOffsetCpp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UIQS_QuestObjectiveInterfaceCpp Function GetQuestObjectiveOffsetCpp

// Begin Interface UIQS_QuestObjectiveInterfaceCpp
void UIQS_QuestObjectiveInterfaceCpp::StaticRegisterNativesUIQS_QuestObjectiveInterfaceCpp()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIQS_QuestObjectiveInterfaceCpp);
UClass* Z_Construct_UClass_UIQS_QuestObjectiveInterfaceCpp_NoRegister()
{
	return UIQS_QuestObjectiveInterfaceCpp::StaticClass();
}
struct Z_Construct_UClass_UIQS_QuestObjectiveInterfaceCpp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interface/IQS_QuestObjectiveInterfaceCpp.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIQS_QuestObjectiveInterfaceCpp_GetQuestObjectiveOffsetCpp, "GetQuestObjectiveOffsetCpp" }, // 898708473
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIQS_QuestObjectiveInterfaceCpp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UIQS_QuestObjectiveInterfaceCpp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ImprovedQuestSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_QuestObjectiveInterfaceCpp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIQS_QuestObjectiveInterfaceCpp_Statics::ClassParams = {
	&UIQS_QuestObjectiveInterfaceCpp::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_QuestObjectiveInterfaceCpp_Statics::Class_MetaDataParams), Z_Construct_UClass_UIQS_QuestObjectiveInterfaceCpp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIQS_QuestObjectiveInterfaceCpp()
{
	if (!Z_Registration_Info_UClass_UIQS_QuestObjectiveInterfaceCpp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIQS_QuestObjectiveInterfaceCpp.OuterSingleton, Z_Construct_UClass_UIQS_QuestObjectiveInterfaceCpp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIQS_QuestObjectiveInterfaceCpp.OuterSingleton;
}
template<> IMPROVEDQUESTSYSTEM_API UClass* StaticClass<UIQS_QuestObjectiveInterfaceCpp>()
{
	return UIQS_QuestObjectiveInterfaceCpp::StaticClass();
}
UIQS_QuestObjectiveInterfaceCpp::UIQS_QuestObjectiveInterfaceCpp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIQS_QuestObjectiveInterfaceCpp);
UIQS_QuestObjectiveInterfaceCpp::~UIQS_QuestObjectiveInterfaceCpp() {}
// End Interface UIQS_QuestObjectiveInterfaceCpp

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Interface_IQS_QuestObjectiveInterfaceCpp_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIQS_QuestObjectiveInterfaceCpp, UIQS_QuestObjectiveInterfaceCpp::StaticClass, TEXT("UIQS_QuestObjectiveInterfaceCpp"), &Z_Registration_Info_UClass_UIQS_QuestObjectiveInterfaceCpp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIQS_QuestObjectiveInterfaceCpp), 2608145045U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Interface_IQS_QuestObjectiveInterfaceCpp_h_3564076161(TEXT("/Script/ImprovedQuestSystem"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Interface_IQS_QuestObjectiveInterfaceCpp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Interface_IQS_QuestObjectiveInterfaceCpp_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
