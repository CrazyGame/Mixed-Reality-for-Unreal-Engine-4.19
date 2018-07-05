// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/pch.h"
#include "Public/MixedRealityRenderer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMixedRealityRenderer() {}
// Cross Module References
	MIXEDREALITYOUTPUTPLUGIN_API UEnum* Z_Construct_UEnum_MixedRealityOutputPlugin_ECapturePostprocessType();
	UPackage* Z_Construct_UPackage__Script_MixedRealityOutputPlugin();
	MIXEDREALITYOUTPUTPLUGIN_API UClass* Z_Construct_UClass_UMixedRealityRenderer_NoRegister();
	MIXEDREALITYOUTPUTPLUGIN_API UClass* Z_Construct_UClass_UMixedRealityRenderer();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	MIXEDREALITYOUTPUTPLUGIN_API UClass* Z_Construct_UClass_UMixedRealityCanvas_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
	MIXEDREALITYOUTPUTPLUGIN_API UClass* Z_Construct_UClass_AExternalCameraConfig_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	static UEnum* ECapturePostprocessType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_MixedRealityOutputPlugin_ECapturePostprocessType, Z_Construct_UPackage__Script_MixedRealityOutputPlugin(), TEXT("ECapturePostprocessType"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECapturePostprocessType(ECapturePostprocessType_StaticEnum, TEXT("/Script/MixedRealityOutputPlugin"), TEXT("ECapturePostprocessType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_MixedRealityOutputPlugin_ECapturePostprocessType_CRC() { return 859417723U; }
	UEnum* Z_Construct_UEnum_MixedRealityOutputPlugin_ECapturePostprocessType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_MixedRealityOutputPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECapturePostprocessType"), 0, Get_Z_Construct_UEnum_MixedRealityOutputPlugin_ECapturePostprocessType_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECapturePostprocessType::NoPostprocess", (int64)ECapturePostprocessType::NoPostprocess },
				{ "ECapturePostprocessType::BackgroundPostprocess", (int64)ECapturePostprocessType::BackgroundPostprocess },
				{ "ECapturePostprocessType::FullPostprocess", (int64)ECapturePostprocessType::FullPostprocess },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/MixedRealityRenderer.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_MixedRealityOutputPlugin,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECapturePostprocessType",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ECapturePostprocessType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UMixedRealityRenderer::StaticRegisterNativesUMixedRealityRenderer()
	{
	}
	UClass* Z_Construct_UClass_UMixedRealityRenderer_NoRegister()
	{
		return UMixedRealityRenderer::StaticClass();
	}
	UClass* Z_Construct_UClass_UMixedRealityRenderer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_USceneComponent,
				(UObject* (*)())Z_Construct_UPackage__Script_MixedRealityOutputPlugin,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintSpawnableComponent", "" },
				{ "BlueprintType", "true" },
				{ "ClassGroupNames", "MixedReality" },
				{ "HideCategories", "Trigger PhysicsVolume" },
				{ "IncludePath", "MixedRealityRenderer.h" },
				{ "ModuleRelativePath", "Public/MixedRealityRenderer.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MixedRealityCanvas_MetaData[] = {
				{ "ModuleRelativePath", "Public/MixedRealityRenderer.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MixedRealityCanvas = { UE4CodeGen_Private::EPropertyClass::Object, "MixedRealityCanvas", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UMixedRealityRenderer, MixedRealityCanvas), Z_Construct_UClass_UMixedRealityCanvas_NoRegister, METADATA_PARAMS(NewProp_MixedRealityCanvas_MetaData, ARRAY_COUNT(NewProp_MixedRealityCanvas_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Post_FG_Capture_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MixedRealityRenderer.h" },
				{ "ToolTip", "Postprocessed Foreground Scene Capture" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Post_FG_Capture = { UE4CodeGen_Private::EPropertyClass::Object, "Post_FG_Capture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080008, 1, nullptr, STRUCT_OFFSET(UMixedRealityRenderer, Post_FG_Capture), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(NewProp_Post_FG_Capture_MetaData, ARRAY_COUNT(NewProp_Post_FG_Capture_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FG_Capture_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MixedRealityRenderer.h" },
				{ "ToolTip", "Foreground Scene Capture" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FG_Capture = { UE4CodeGen_Private::EPropertyClass::Object, "FG_Capture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080008, 1, nullptr, STRUCT_OFFSET(UMixedRealityRenderer, FG_Capture), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(NewProp_FG_Capture_MetaData, ARRAY_COUNT(NewProp_FG_Capture_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BG_Capture_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MixedRealityRenderer.h" },
				{ "ToolTip", "Background Scene Capture" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BG_Capture = { UE4CodeGen_Private::EPropertyClass::Object, "BG_Capture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080008, 1, nullptr, STRUCT_OFFSET(UMixedRealityRenderer, BG_Capture), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(NewProp_BG_Capture_MetaData, ARRAY_COUNT(NewProp_BG_Capture_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalCameraConfig_MetaData[] = {
				{ "ModuleRelativePath", "Public/MixedRealityRenderer.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExternalCameraConfig = { UE4CodeGen_Private::EPropertyClass::Object, "ExternalCameraConfig", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000000000, 1, nullptr, STRUCT_OFFSET(UMixedRealityRenderer, ExternalCameraConfig), Z_Construct_UClass_AExternalCameraConfig_NoRegister, METADATA_PARAMS(NewProp_ExternalCameraConfig_MetaData, ARRAY_COUNT(NewProp_ExternalCameraConfig_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalCamera_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MixedRealityRenderer.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExternalCamera = { UE4CodeGen_Private::EPropertyClass::Object, "ExternalCamera", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080008, 1, nullptr, STRUCT_OFFSET(UMixedRealityRenderer, ExternalCamera), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(NewProp_ExternalCamera_MetaData, ARRAY_COUNT(NewProp_ExternalCamera_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapturePostprocessType_MetaData[] = {
				{ "Category", "MixedReality" },
				{ "ModuleRelativePath", "Public/MixedRealityRenderer.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CapturePostprocessType = { UE4CodeGen_Private::EPropertyClass::Enum, "CapturePostprocessType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(UMixedRealityRenderer, CapturePostprocessType), Z_Construct_UEnum_MixedRealityOutputPlugin_ECapturePostprocessType, METADATA_PARAMS(NewProp_CapturePostprocessType_MetaData, ARRAY_COUNT(NewProp_CapturePostprocessType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CapturePostprocessType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerType_MetaData[] = {
				{ "Category", "MixedReality" },
				{ "ModuleRelativePath", "Public/MixedRealityRenderer.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ControllerType = { UE4CodeGen_Private::EPropertyClass::Enum, "ControllerType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010005, 1, nullptr, STRUCT_OFFSET(UMixedRealityRenderer, ControllerType), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(NewProp_ControllerType_MetaData, ARRAY_COUNT(NewProp_ControllerType_MetaData)) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ControllerType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HMD_MetaData[] = {
				{ "Category", "MixedReality" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/MixedRealityRenderer.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HMD = { UE4CodeGen_Private::EPropertyClass::Object, "HMD", RF_Public|RF_Transient|RF_MarkAsNative, 0x001000000008000d, 1, nullptr, STRUCT_OFFSET(UMixedRealityRenderer, HMD), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_HMD_MetaData, ARRAY_COUNT(NewProp_HMD_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MixedRealityCanvas,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Post_FG_Capture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FG_Capture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BG_Capture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExternalCameraConfig,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ExternalCamera,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapturePostprocessType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapturePostprocessType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControllerType,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ControllerType_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_HMD,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMixedRealityRenderer>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMixedRealityRenderer::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00B00080u,
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
	IMPLEMENT_CLASS(UMixedRealityRenderer, 1317772880);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMixedRealityRenderer(Z_Construct_UClass_UMixedRealityRenderer, &UMixedRealityRenderer::StaticClass, TEXT("/Script/MixedRealityOutputPlugin"), TEXT("UMixedRealityRenderer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMixedRealityRenderer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
