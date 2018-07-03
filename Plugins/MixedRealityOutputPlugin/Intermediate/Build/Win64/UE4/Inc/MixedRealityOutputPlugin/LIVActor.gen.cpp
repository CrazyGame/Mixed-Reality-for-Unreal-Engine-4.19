// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/pch.h"
#include "Public/LIVActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLIVActor() {}
// Cross Module References
	MIXEDREALITYOUTPUTPLUGIN_API UClass* Z_Construct_UClass_ALIVActor_NoRegister();
	MIXEDREALITYOUTPUTPLUGIN_API UClass* Z_Construct_UClass_ALIVActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_MixedRealityOutputPlugin();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	MIXEDREALITYOUTPUTPLUGIN_API UClass* Z_Construct_UClass_UMixedRealityRenderer_NoRegister();
// End Cross Module References
	void ALIVActor::StaticRegisterNativesALIVActor()
	{
	}
	UClass* Z_Construct_UClass_ALIVActor_NoRegister()
	{
		return ALIVActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ALIVActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_MixedRealityOutputPlugin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "LIVActor.h" },
				{ "ModuleRelativePath", "Public/LIVActor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalCameraController_MetaData[] = {
				{ "Category", "MixReality" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LIVActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExternalCameraController = { UE4CodeGen_Private::EPropertyClass::Object, "ExternalCameraController", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(ALIVActor, ExternalCameraController), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_ExternalCameraController_MetaData, ARRAY_COUNT(NewProp_ExternalCameraController_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderRoot_MetaData[] = {
				{ "Category", "MixReality" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LIVActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderRoot = { UE4CodeGen_Private::EPropertyClass::Object, "RenderRoot", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(ALIVActor, RenderRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_RenderRoot_MetaData, ARRAY_COUNT(NewProp_RenderRoot_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UMixedRealityRendererRoot_MetaData[] = {
				{ "Category", "MixReality" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/LIVActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UMixedRealityRendererRoot = { UE4CodeGen_Private::EPropertyClass::Object, "UMixedRealityRendererRoot", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(ALIVActor, UMixedRealityRendererRoot), Z_Construct_UClass_UMixedRealityRenderer_NoRegister, METADATA_PARAMS(NewProp_UMixedRealityRendererRoot_MetaData, ARRAY_COUNT(NewProp_UMixedRealityRendererRoot_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExternalCameraController,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RenderRoot,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UMixedRealityRendererRoot,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ALIVActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ALIVActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
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
	IMPLEMENT_CLASS(ALIVActor, 1861980714);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALIVActor(Z_Construct_UClass_ALIVActor, &ALIVActor::StaticClass, TEXT("/Script/MixedRealityOutputPlugin"), TEXT("ALIVActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALIVActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
