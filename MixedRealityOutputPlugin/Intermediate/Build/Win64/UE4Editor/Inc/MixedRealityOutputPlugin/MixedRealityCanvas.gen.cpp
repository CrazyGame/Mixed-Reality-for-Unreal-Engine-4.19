// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/pch.h"
#include "Private/MixedRealityCanvas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMixedRealityCanvas() {}
// Cross Module References
	MIXEDREALITYOUTPUTPLUGIN_API UClass* Z_Construct_UClass_UMixedRealityCanvas_NoRegister();
	MIXEDREALITYOUTPUTPLUGIN_API UClass* Z_Construct_UClass_UMixedRealityCanvas();
	ENGINE_API UClass* Z_Construct_UClass_UCanvasRenderTarget2D();
	UPackage* Z_Construct_UPackage__Script_MixedRealityOutputPlugin();
	MIXEDREALITYOUTPUTPLUGIN_API UFunction* Z_Construct_UFunction_UMixedRealityCanvas_FastUpdateResource();
	MIXEDREALITYOUTPUTPLUGIN_API UFunction* Z_Construct_UFunction_UMixedRealityCanvas_OnRender();
	ENGINE_API UClass* Z_Construct_UClass_UCanvas_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
// End Cross Module References
	void UMixedRealityCanvas::StaticRegisterNativesUMixedRealityCanvas()
	{
		UClass* Class = UMixedRealityCanvas::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FastUpdateResource", &UMixedRealityCanvas::execFastUpdateResource },
			{ "OnRender", &UMixedRealityCanvas::execOnRender },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_UMixedRealityCanvas_FastUpdateResource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Canvas Render Target 2D" },
				{ "ModuleRelativePath", "Private/MixedRealityCanvas.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMixedRealityCanvas, "FastUpdateResource", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020400, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UMixedRealityCanvas_OnRender()
	{
		struct MixedRealityCanvas_eventOnRender_Parms
		{
			UCanvas* Canvas;
			int32 Width;
			int32 Height;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height = { UE4CodeGen_Private::EPropertyClass::Int, "Height", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MixedRealityCanvas_eventOnRender_Parms, Height), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width = { UE4CodeGen_Private::EPropertyClass::Int, "Width", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MixedRealityCanvas_eventOnRender_Parms, Width), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Canvas = { UE4CodeGen_Private::EPropertyClass::Object, "Canvas", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MixedRealityCanvas_eventOnRender_Parms, Canvas), Z_Construct_UClass_UCanvas_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Height,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Width,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Canvas,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Private/MixedRealityCanvas.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_UMixedRealityCanvas, "OnRender", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(MixedRealityCanvas_eventOnRender_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMixedRealityCanvas_NoRegister()
	{
		return UMixedRealityCanvas::StaticClass();
	}
	UClass* Z_Construct_UClass_UMixedRealityCanvas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UCanvasRenderTarget2D,
				(UObject* (*)())Z_Construct_UPackage__Script_MixedRealityOutputPlugin,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_UMixedRealityCanvas_FastUpdateResource, "FastUpdateResource" }, // 1345855548
				{ &Z_Construct_UFunction_UMixedRealityCanvas_OnRender, "OnRender" }, // 2497740429
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Object Texture Compression Adjustments Compositing" },
				{ "IncludePath", "MixedRealityCanvas.h" },
				{ "ModuleRelativePath", "Private/MixedRealityCanvas.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPostprocessForeground_MetaData[] = {
				{ "Category", "MixedRealityCanvas" },
				{ "ModuleRelativePath", "Private/MixedRealityCanvas.h" },
			};
#endif
			auto NewProp_bPostprocessForeground_SetBit = [](void* Obj){ ((UMixedRealityCanvas*)Obj)->bPostprocessForeground = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPostprocessForeground = { UE4CodeGen_Private::EPropertyClass::Bool, "bPostprocessForeground", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMixedRealityCanvas), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPostprocessForeground_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPostprocessForeground_MetaData, ARRAY_COUNT(NewProp_bPostprocessForeground_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPostprocessBackground_MetaData[] = {
				{ "Category", "MixedRealityCanvas" },
				{ "ModuleRelativePath", "Private/MixedRealityCanvas.h" },
			};
#endif
			auto NewProp_bPostprocessBackground_SetBit = [](void* Obj){ ((UMixedRealityCanvas*)Obj)->bPostprocessBackground = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPostprocessBackground = { UE4CodeGen_Private::EPropertyClass::Bool, "bPostprocessBackground", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UMixedRealityCanvas), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bPostprocessBackground_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bPostprocessBackground_MetaData, ARRAY_COUNT(NewProp_bPostprocessBackground_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FG_CombineAlpha_MetaData[] = {
				{ "Category", "MixedRealityCanvas" },
				{ "ModuleRelativePath", "Private/MixedRealityCanvas.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FG_CombineAlpha = { UE4CodeGen_Private::EPropertyClass::Object, "FG_CombineAlpha", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMixedRealityCanvas, FG_CombineAlpha), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(NewProp_FG_CombineAlpha_MetaData, ARRAY_COUNT(NewProp_FG_CombineAlpha_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FG_Tonemapper_MetaData[] = {
				{ "Category", "MixedRealityCanvas" },
				{ "ModuleRelativePath", "Private/MixedRealityCanvas.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FG_Tonemapper = { UE4CodeGen_Private::EPropertyClass::Object, "FG_Tonemapper", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMixedRealityCanvas, FG_Tonemapper), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(NewProp_FG_Tonemapper_MetaData, ARRAY_COUNT(NewProp_FG_Tonemapper_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BG_Tonemapper_MetaData[] = {
				{ "Category", "MixedRealityCanvas" },
				{ "ModuleRelativePath", "Private/MixedRealityCanvas.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BG_Tonemapper = { UE4CodeGen_Private::EPropertyClass::Object, "BG_Tonemapper", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMixedRealityCanvas, BG_Tonemapper), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(NewProp_BG_Tonemapper_MetaData, ARRAY_COUNT(NewProp_BG_Tonemapper_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostprocessedForegroundTexture_MetaData[] = {
				{ "Category", "MixedRealityCanvas" },
				{ "ModuleRelativePath", "Private/MixedRealityCanvas.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PostprocessedForegroundTexture = { UE4CodeGen_Private::EPropertyClass::Object, "PostprocessedForegroundTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000805, 1, nullptr, STRUCT_OFFSET(UMixedRealityCanvas, PostprocessedForegroundTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(NewProp_PostprocessedForegroundTexture_MetaData, ARRAY_COUNT(NewProp_PostprocessedForegroundTexture_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForegroundTexture_MetaData[] = {
				{ "Category", "MixedRealityCanvas" },
				{ "ModuleRelativePath", "Private/MixedRealityCanvas.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForegroundTexture = { UE4CodeGen_Private::EPropertyClass::Object, "ForegroundTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000805, 1, nullptr, STRUCT_OFFSET(UMixedRealityCanvas, ForegroundTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(NewProp_ForegroundTexture_MetaData, ARRAY_COUNT(NewProp_ForegroundTexture_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackgroundTexture_MetaData[] = {
				{ "Category", "MixedRealityCanvas" },
				{ "ModuleRelativePath", "Private/MixedRealityCanvas.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackgroundTexture = { UE4CodeGen_Private::EPropertyClass::Object, "BackgroundTexture", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000805, 1, nullptr, STRUCT_OFFSET(UMixedRealityCanvas, BackgroundTexture), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(NewProp_BackgroundTexture_MetaData, ARRAY_COUNT(NewProp_BackgroundTexture_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPostprocessForeground,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bPostprocessBackground,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FG_CombineAlpha,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FG_Tonemapper,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BG_Tonemapper,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PostprocessedForegroundTexture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForegroundTexture,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BackgroundTexture,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UMixedRealityCanvas>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UMixedRealityCanvas::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(UMixedRealityCanvas, 3733315844);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMixedRealityCanvas(Z_Construct_UClass_UMixedRealityCanvas, &UMixedRealityCanvas::StaticClass, TEXT("/Script/MixedRealityOutputPlugin"), TEXT("UMixedRealityCanvas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMixedRealityCanvas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
