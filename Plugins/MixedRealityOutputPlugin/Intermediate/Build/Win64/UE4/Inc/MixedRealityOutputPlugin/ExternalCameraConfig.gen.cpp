// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/pch.h"
#include "Private/ExternalCameraConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExternalCameraConfig() {}
// Cross Module References
	MIXEDREALITYOUTPUTPLUGIN_API UClass* Z_Construct_UClass_AExternalCameraConfig_NoRegister();
	MIXEDREALITYOUTPUTPLUGIN_API UClass* Z_Construct_UClass_AExternalCameraConfig();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MixedRealityOutputPlugin();
	MIXEDREALITYOUTPUTPLUGIN_API UFunction* Z_Construct_UFunction_AExternalCameraConfig_ReadConfig();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AExternalCameraConfig::StaticRegisterNativesAExternalCameraConfig()
	{
		UClass* Class = AExternalCameraConfig::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ReadConfig", &AExternalCameraConfig::execReadConfig },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AExternalCameraConfig_ReadConfig()
	{
		struct ExternalCameraConfig_eventReadConfig_Parms
		{
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((ExternalCameraConfig_eventReadConfig_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ExternalCameraConfig_eventReadConfig_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "ExternalCamera" },
				{ "ModuleRelativePath", "Private/ExternalCameraConfig.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AExternalCameraConfig, "ReadConfig", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ExternalCameraConfig_eventReadConfig_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AExternalCameraConfig_NoRegister()
	{
		return AExternalCameraConfig::StaticClass();
	}
	UClass* Z_Construct_UClass_AExternalCameraConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_MixedRealityOutputPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AExternalCameraConfig_ReadConfig, "ReadConfig" }, // 4287085915
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "ExternalCameraConfig.h" },
				{ "ModuleRelativePath", "Private/ExternalCameraConfig.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FOV_MetaData[] = {
				{ "Category", "ExternalCameraConfig" },
				{ "ModuleRelativePath", "Private/ExternalCameraConfig.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FOV = { UE4CodeGen_Private::EPropertyClass::Float, "FOV", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AExternalCameraConfig, FOV), METADATA_PARAMS(NewProp_FOV_MetaData, ARRAY_COUNT(NewProp_FOV_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[] = {
				{ "Category", "ExternalCameraConfig" },
				{ "ModuleRelativePath", "Private/ExternalCameraConfig.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "RotationOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AExternalCameraConfig, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_RotationOffset_MetaData, ARRAY_COUNT(NewProp_RotationOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[] = {
				{ "Category", "ExternalCameraConfig" },
				{ "ModuleRelativePath", "Private/ExternalCameraConfig.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "LocationOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, STRUCT_OFFSET(AExternalCameraConfig, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_LocationOffset_MetaData, ARRAY_COUNT(NewProp_LocationOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConfigAvailable_MetaData[] = {
				{ "Category", "ExternalCameraConfig" },
				{ "ModuleRelativePath", "Private/ExternalCameraConfig.h" },
			};
#endif
			auto NewProp_ConfigAvailable_SetBit = [](void* Obj){ ((AExternalCameraConfig*)Obj)->ConfigAvailable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ConfigAvailable = { UE4CodeGen_Private::EPropertyClass::Bool, "ConfigAvailable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000020015, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AExternalCameraConfig), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ConfigAvailable_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ConfigAvailable_MetaData, ARRAY_COUNT(NewProp_ConfigAvailable_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FOV,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RotationOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocationOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ConfigAvailable,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AExternalCameraConfig>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AExternalCameraConfig::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExternalCameraConfig, 3182864720);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExternalCameraConfig(Z_Construct_UClass_AExternalCameraConfig, &AExternalCameraConfig::StaticClass, TEXT("/Script/MixedRealityOutputPlugin"), TEXT("AExternalCameraConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExternalCameraConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
