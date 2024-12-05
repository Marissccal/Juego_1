// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImprovedQuestSystem/Public/Widgets/SingleElems/Minimap/IQS_MinimapMarkerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIQS_MinimapMarkerBase() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_UIQS_MinimapMarkerBase();
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_UIQS_MinimapMarkerBase_NoRegister();
IMPROVEDQUESTSYSTEM_API UClass* Z_Construct_UClass_UIQS_QuestMarkerBase();
UMG_API UClass* Z_Construct_UClass_UCanvasPanelSlot_NoRegister();
UPackage* Z_Construct_UPackage__Script_ImprovedQuestSystem();
// End Cross Module References

// Begin Class UIQS_MinimapMarkerBase Function AddMinimapMarkScaleCpp_BP
struct IQS_MinimapMarkerBase_eventAddMinimapMarkScaleCpp_BP_Parms
{
	float NewAddmarkScale;
};
static const FName NAME_UIQS_MinimapMarkerBase_AddMinimapMarkScaleCpp_BP = FName(TEXT("AddMinimapMarkScaleCpp_BP"));
void UIQS_MinimapMarkerBase::AddMinimapMarkScaleCpp_BP(float NewAddmarkScale)
{
	UFunction* Func = FindFunctionChecked(NAME_UIQS_MinimapMarkerBase_AddMinimapMarkScaleCpp_BP);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		IQS_MinimapMarkerBase_eventAddMinimapMarkScaleCpp_BP_Parms Parms;
		Parms.NewAddmarkScale=NewAddmarkScale;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		AddMinimapMarkScaleCpp_BP_Implementation(NewAddmarkScale);
	}
}
struct Z_Construct_UFunction_UIQS_MinimapMarkerBase_AddMinimapMarkScaleCpp_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/Minimap/IQS_MinimapMarkerBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewAddmarkScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIQS_MinimapMarkerBase_AddMinimapMarkScaleCpp_BP_Statics::NewProp_NewAddmarkScale = { "NewAddmarkScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_MinimapMarkerBase_eventAddMinimapMarkScaleCpp_BP_Parms, NewAddmarkScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIQS_MinimapMarkerBase_AddMinimapMarkScaleCpp_BP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_MinimapMarkerBase_AddMinimapMarkScaleCpp_BP_Statics::NewProp_NewAddmarkScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_MinimapMarkerBase_AddMinimapMarkScaleCpp_BP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIQS_MinimapMarkerBase_AddMinimapMarkScaleCpp_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIQS_MinimapMarkerBase, nullptr, "AddMinimapMarkScaleCpp_BP", nullptr, nullptr, Z_Construct_UFunction_UIQS_MinimapMarkerBase_AddMinimapMarkScaleCpp_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_MinimapMarkerBase_AddMinimapMarkScaleCpp_BP_Statics::PropPointers), sizeof(IQS_MinimapMarkerBase_eventAddMinimapMarkScaleCpp_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_MinimapMarkerBase_AddMinimapMarkScaleCpp_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIQS_MinimapMarkerBase_AddMinimapMarkScaleCpp_BP_Statics::Function_MetaDataParams) };
static_assert(sizeof(IQS_MinimapMarkerBase_eventAddMinimapMarkScaleCpp_BP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIQS_MinimapMarkerBase_AddMinimapMarkScaleCpp_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIQS_MinimapMarkerBase_AddMinimapMarkScaleCpp_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIQS_MinimapMarkerBase::execAddMinimapMarkScaleCpp_BP)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewAddmarkScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddMinimapMarkScaleCpp_BP_Implementation(Z_Param_NewAddmarkScale);
	P_NATIVE_END;
}
// End Class UIQS_MinimapMarkerBase Function AddMinimapMarkScaleCpp_BP

// Begin Class UIQS_MinimapMarkerBase Function SetIconOpacityCpp_BP
struct IQS_MinimapMarkerBase_eventSetIconOpacityCpp_BP_Parms
{
	float NewOpacity;
};
static const FName NAME_UIQS_MinimapMarkerBase_SetIconOpacityCpp_BP = FName(TEXT("SetIconOpacityCpp_BP"));
void UIQS_MinimapMarkerBase::SetIconOpacityCpp_BP(float NewOpacity)
{
	UFunction* Func = FindFunctionChecked(NAME_UIQS_MinimapMarkerBase_SetIconOpacityCpp_BP);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		IQS_MinimapMarkerBase_eventSetIconOpacityCpp_BP_Parms Parms;
		Parms.NewOpacity=NewOpacity;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		SetIconOpacityCpp_BP_Implementation(NewOpacity);
	}
}
struct Z_Construct_UFunction_UIQS_MinimapMarkerBase_SetIconOpacityCpp_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/Minimap/IQS_MinimapMarkerBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewOpacity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIQS_MinimapMarkerBase_SetIconOpacityCpp_BP_Statics::NewProp_NewOpacity = { "NewOpacity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_MinimapMarkerBase_eventSetIconOpacityCpp_BP_Parms, NewOpacity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIQS_MinimapMarkerBase_SetIconOpacityCpp_BP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_MinimapMarkerBase_SetIconOpacityCpp_BP_Statics::NewProp_NewOpacity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_MinimapMarkerBase_SetIconOpacityCpp_BP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIQS_MinimapMarkerBase_SetIconOpacityCpp_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIQS_MinimapMarkerBase, nullptr, "SetIconOpacityCpp_BP", nullptr, nullptr, Z_Construct_UFunction_UIQS_MinimapMarkerBase_SetIconOpacityCpp_BP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_MinimapMarkerBase_SetIconOpacityCpp_BP_Statics::PropPointers), sizeof(IQS_MinimapMarkerBase_eventSetIconOpacityCpp_BP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_MinimapMarkerBase_SetIconOpacityCpp_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIQS_MinimapMarkerBase_SetIconOpacityCpp_BP_Statics::Function_MetaDataParams) };
static_assert(sizeof(IQS_MinimapMarkerBase_eventSetIconOpacityCpp_BP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIQS_MinimapMarkerBase_SetIconOpacityCpp_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIQS_MinimapMarkerBase_SetIconOpacityCpp_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIQS_MinimapMarkerBase::execSetIconOpacityCpp_BP)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewOpacity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIconOpacityCpp_BP_Implementation(Z_Param_NewOpacity);
	P_NATIVE_END;
}
// End Class UIQS_MinimapMarkerBase Function SetIconOpacityCpp_BP

// Begin Class UIQS_MinimapMarkerBase Function SetNewMinimapMarkDistanceLimitCpp
struct Z_Construct_UFunction_UIQS_MinimapMarkerBase_SetNewMinimapMarkDistanceLimitCpp_Statics
{
	struct IQS_MinimapMarkerBase_eventSetNewMinimapMarkDistanceLimitCpp_Parms
	{
		float NewMinimapMarkDistanceLimit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/Minimap/IQS_MinimapMarkerBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMinimapMarkDistanceLimit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIQS_MinimapMarkerBase_SetNewMinimapMarkDistanceLimitCpp_Statics::NewProp_NewMinimapMarkDistanceLimit = { "NewMinimapMarkDistanceLimit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(IQS_MinimapMarkerBase_eventSetNewMinimapMarkDistanceLimitCpp_Parms, NewMinimapMarkDistanceLimit), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIQS_MinimapMarkerBase_SetNewMinimapMarkDistanceLimitCpp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIQS_MinimapMarkerBase_SetNewMinimapMarkDistanceLimitCpp_Statics::NewProp_NewMinimapMarkDistanceLimit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_MinimapMarkerBase_SetNewMinimapMarkDistanceLimitCpp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIQS_MinimapMarkerBase_SetNewMinimapMarkDistanceLimitCpp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIQS_MinimapMarkerBase, nullptr, "SetNewMinimapMarkDistanceLimitCpp", nullptr, nullptr, Z_Construct_UFunction_UIQS_MinimapMarkerBase_SetNewMinimapMarkDistanceLimitCpp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_MinimapMarkerBase_SetNewMinimapMarkDistanceLimitCpp_Statics::PropPointers), sizeof(Z_Construct_UFunction_UIQS_MinimapMarkerBase_SetNewMinimapMarkDistanceLimitCpp_Statics::IQS_MinimapMarkerBase_eventSetNewMinimapMarkDistanceLimitCpp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_MinimapMarkerBase_SetNewMinimapMarkDistanceLimitCpp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIQS_MinimapMarkerBase_SetNewMinimapMarkDistanceLimitCpp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UIQS_MinimapMarkerBase_SetNewMinimapMarkDistanceLimitCpp_Statics::IQS_MinimapMarkerBase_eventSetNewMinimapMarkDistanceLimitCpp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UIQS_MinimapMarkerBase_SetNewMinimapMarkDistanceLimitCpp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIQS_MinimapMarkerBase_SetNewMinimapMarkDistanceLimitCpp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIQS_MinimapMarkerBase::execSetNewMinimapMarkDistanceLimitCpp)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewMinimapMarkDistanceLimit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNewMinimapMarkDistanceLimitCpp(Z_Param_NewMinimapMarkDistanceLimit);
	P_NATIVE_END;
}
// End Class UIQS_MinimapMarkerBase Function SetNewMinimapMarkDistanceLimitCpp

// Begin Class UIQS_MinimapMarkerBase Function ShowPopUpAnimCpp_BP
static const FName NAME_UIQS_MinimapMarkerBase_ShowPopUpAnimCpp_BP = FName(TEXT("ShowPopUpAnimCpp_BP"));
void UIQS_MinimapMarkerBase::ShowPopUpAnimCpp_BP()
{
	UFunction* Func = FindFunctionChecked(NAME_UIQS_MinimapMarkerBase_ShowPopUpAnimCpp_BP);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		ShowPopUpAnimCpp_BP_Implementation();
	}
}
struct Z_Construct_UFunction_UIQS_MinimapMarkerBase_ShowPopUpAnimCpp_BP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Default" },
		{ "Comment", "//<Methods>\n" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/Minimap/IQS_MinimapMarkerBase.h" },
		{ "ToolTip", "<Methods>" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIQS_MinimapMarkerBase_ShowPopUpAnimCpp_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIQS_MinimapMarkerBase, nullptr, "ShowPopUpAnimCpp_BP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UIQS_MinimapMarkerBase_ShowPopUpAnimCpp_BP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UIQS_MinimapMarkerBase_ShowPopUpAnimCpp_BP_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UIQS_MinimapMarkerBase_ShowPopUpAnimCpp_BP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIQS_MinimapMarkerBase_ShowPopUpAnimCpp_BP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UIQS_MinimapMarkerBase::execShowPopUpAnimCpp_BP)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowPopUpAnimCpp_BP_Implementation();
	P_NATIVE_END;
}
// End Class UIQS_MinimapMarkerBase Function ShowPopUpAnimCpp_BP

// Begin Class UIQS_MinimapMarkerBase
void UIQS_MinimapMarkerBase::StaticRegisterNativesUIQS_MinimapMarkerBase()
{
	UClass* Class = UIQS_MinimapMarkerBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddMinimapMarkScaleCpp_BP", &UIQS_MinimapMarkerBase::execAddMinimapMarkScaleCpp_BP },
		{ "SetIconOpacityCpp_BP", &UIQS_MinimapMarkerBase::execSetIconOpacityCpp_BP },
		{ "SetNewMinimapMarkDistanceLimitCpp", &UIQS_MinimapMarkerBase::execSetNewMinimapMarkDistanceLimitCpp },
		{ "ShowPopUpAnimCpp_BP", &UIQS_MinimapMarkerBase::execShowPopUpAnimCpp_BP },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIQS_MinimapMarkerBase);
UClass* Z_Construct_UClass_UIQS_MinimapMarkerBase_NoRegister()
{
	return UIQS_MinimapMarkerBase::StaticClass();
}
struct Z_Construct_UClass_UIQS_MinimapMarkerBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Widgets/SingleElems/Minimap/IQS_MinimapMarkerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/Minimap/IQS_MinimapMarkerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_baseMinimapCoordCenter_X_Cpp_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "//<Variables>\n" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/Minimap/IQS_MinimapMarkerBase.h" },
		{ "ToolTip", "<Variables>" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_baseMinimapCoordCenter_Y_Cpp_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/Minimap/IQS_MinimapMarkerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_minimapScaleAdditionalCoefCpp_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/Minimap/IQS_MinimapMarkerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MP_MinimapRef_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/Minimap/IQS_MinimapMarkerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isZoneMapEnabledCpp_MetaData[] = {
		{ "Category", "Default" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/Minimap/IQS_MinimapMarkerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasSlotCpp_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/Minimap/IQS_MinimapMarkerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimapWidgetSizeCpp_MetaData[] = {
		{ "Category", "Default" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/Minimap/IQS_MinimapMarkerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimapMarksScaleCpp_MetaData[] = {
		{ "Category", "Default" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/Minimap/IQS_MinimapMarkerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimapMarksRotatorCpp_MetaData[] = {
		{ "Category", "Default" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/Widgets/SingleElems/Minimap/IQS_MinimapMarkerBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_baseMinimapCoordCenter_X_Cpp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_baseMinimapCoordCenter_Y_Cpp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_minimapScaleAdditionalCoefCpp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MP_MinimapRef;
	static void NewProp_isZoneMapEnabledCpp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isZoneMapEnabledCpp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CanvasSlotCpp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinimapWidgetSizeCpp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimapMarksScaleCpp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimapMarksRotatorCpp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UIQS_MinimapMarkerBase_AddMinimapMarkScaleCpp_BP, "AddMinimapMarkScaleCpp_BP" }, // 3044318053
		{ &Z_Construct_UFunction_UIQS_MinimapMarkerBase_SetIconOpacityCpp_BP, "SetIconOpacityCpp_BP" }, // 3107874757
		{ &Z_Construct_UFunction_UIQS_MinimapMarkerBase_SetNewMinimapMarkDistanceLimitCpp, "SetNewMinimapMarkDistanceLimitCpp" }, // 400019399
		{ &Z_Construct_UFunction_UIQS_MinimapMarkerBase_ShowPopUpAnimCpp_BP, "ShowPopUpAnimCpp_BP" }, // 2841004762
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIQS_MinimapMarkerBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIQS_MinimapMarkerBase_Statics::NewProp_baseMinimapCoordCenter_X_Cpp = { "baseMinimapCoordCenter_X_Cpp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_MinimapMarkerBase, baseMinimapCoordCenter_X_Cpp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseMinimapCoordCenter_X_Cpp_MetaData), NewProp_baseMinimapCoordCenter_X_Cpp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIQS_MinimapMarkerBase_Statics::NewProp_baseMinimapCoordCenter_Y_Cpp = { "baseMinimapCoordCenter_Y_Cpp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_MinimapMarkerBase, baseMinimapCoordCenter_Y_Cpp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_baseMinimapCoordCenter_Y_Cpp_MetaData), NewProp_baseMinimapCoordCenter_Y_Cpp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIQS_MinimapMarkerBase_Statics::NewProp_minimapScaleAdditionalCoefCpp = { "minimapScaleAdditionalCoefCpp", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_MinimapMarkerBase, minimapScaleAdditionalCoefCpp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_minimapScaleAdditionalCoefCpp_MetaData), NewProp_minimapScaleAdditionalCoefCpp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIQS_MinimapMarkerBase_Statics::NewProp_MP_MinimapRef = { "MP_MinimapRef", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_MinimapMarkerBase, MP_MinimapRef), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MP_MinimapRef_MetaData), NewProp_MP_MinimapRef_MetaData) };
void Z_Construct_UClass_UIQS_MinimapMarkerBase_Statics::NewProp_isZoneMapEnabledCpp_SetBit(void* Obj)
{
	((UIQS_MinimapMarkerBase*)Obj)->isZoneMapEnabledCpp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIQS_MinimapMarkerBase_Statics::NewProp_isZoneMapEnabledCpp = { "isZoneMapEnabledCpp", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UIQS_MinimapMarkerBase), &Z_Construct_UClass_UIQS_MinimapMarkerBase_Statics::NewProp_isZoneMapEnabledCpp_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isZoneMapEnabledCpp_MetaData), NewProp_isZoneMapEnabledCpp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIQS_MinimapMarkerBase_Statics::NewProp_CanvasSlotCpp = { "CanvasSlotCpp", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_MinimapMarkerBase, CanvasSlotCpp), Z_Construct_UClass_UCanvasPanelSlot_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasSlotCpp_MetaData), NewProp_CanvasSlotCpp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIQS_MinimapMarkerBase_Statics::NewProp_MinimapWidgetSizeCpp = { "MinimapWidgetSizeCpp", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_MinimapMarkerBase, MinimapWidgetSizeCpp), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimapWidgetSizeCpp_MetaData), NewProp_MinimapWidgetSizeCpp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIQS_MinimapMarkerBase_Statics::NewProp_MinimapMarksScaleCpp = { "MinimapMarksScaleCpp", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_MinimapMarkerBase, MinimapMarksScaleCpp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimapMarksScaleCpp_MetaData), NewProp_MinimapMarksScaleCpp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIQS_MinimapMarkerBase_Statics::NewProp_MinimapMarksRotatorCpp = { "MinimapMarksRotatorCpp", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UIQS_MinimapMarkerBase, MinimapMarksRotatorCpp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimapMarksRotatorCpp_MetaData), NewProp_MinimapMarksRotatorCpp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIQS_MinimapMarkerBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_MinimapMarkerBase_Statics::NewProp_baseMinimapCoordCenter_X_Cpp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_MinimapMarkerBase_Statics::NewProp_baseMinimapCoordCenter_Y_Cpp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_MinimapMarkerBase_Statics::NewProp_minimapScaleAdditionalCoefCpp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_MinimapMarkerBase_Statics::NewProp_MP_MinimapRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_MinimapMarkerBase_Statics::NewProp_isZoneMapEnabledCpp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_MinimapMarkerBase_Statics::NewProp_CanvasSlotCpp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_MinimapMarkerBase_Statics::NewProp_MinimapWidgetSizeCpp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_MinimapMarkerBase_Statics::NewProp_MinimapMarksScaleCpp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIQS_MinimapMarkerBase_Statics::NewProp_MinimapMarksRotatorCpp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_MinimapMarkerBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UIQS_MinimapMarkerBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UIQS_QuestMarkerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ImprovedQuestSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_MinimapMarkerBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UIQS_MinimapMarkerBase_Statics::ClassParams = {
	&UIQS_MinimapMarkerBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UIQS_MinimapMarkerBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_MinimapMarkerBase_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UIQS_MinimapMarkerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UIQS_MinimapMarkerBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UIQS_MinimapMarkerBase()
{
	if (!Z_Registration_Info_UClass_UIQS_MinimapMarkerBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIQS_MinimapMarkerBase.OuterSingleton, Z_Construct_UClass_UIQS_MinimapMarkerBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UIQS_MinimapMarkerBase.OuterSingleton;
}
template<> IMPROVEDQUESTSYSTEM_API UClass* StaticClass<UIQS_MinimapMarkerBase>()
{
	return UIQS_MinimapMarkerBase::StaticClass();
}
UIQS_MinimapMarkerBase::UIQS_MinimapMarkerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UIQS_MinimapMarkerBase);
UIQS_MinimapMarkerBase::~UIQS_MinimapMarkerBase() {}
// End Class UIQS_MinimapMarkerBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_SingleElems_Minimap_IQS_MinimapMarkerBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UIQS_MinimapMarkerBase, UIQS_MinimapMarkerBase::StaticClass, TEXT("UIQS_MinimapMarkerBase"), &Z_Registration_Info_UClass_UIQS_MinimapMarkerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIQS_MinimapMarkerBase), 3400455140U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_SingleElems_Minimap_IQS_MinimapMarkerBase_h_1547758366(TEXT("/Script/ImprovedQuestSystem"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_SingleElems_Minimap_IQS_MinimapMarkerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_ImprovedQuestSystem_Source_ImprovedQuestSystem_Public_Widgets_SingleElems_Minimap_IQS_MinimapMarkerBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
