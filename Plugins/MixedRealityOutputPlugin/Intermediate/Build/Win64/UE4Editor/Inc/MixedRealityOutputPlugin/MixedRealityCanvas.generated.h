// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCanvas;
#ifdef MIXEDREALITYOUTPUTPLUGIN_MixedRealityCanvas_generated_h
#error "MixedRealityCanvas.generated.h already included, missing '#pragma once' in MixedRealityCanvas.h"
#endif
#define MIXEDREALITYOUTPUTPLUGIN_MixedRealityCanvas_generated_h

#define NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_MixedRealityCanvas_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRender) \
	{ \
		P_GET_OBJECT(UCanvas,Z_Param_Canvas); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Width); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Height); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRender(Z_Param_Canvas,Z_Param_Width,Z_Param_Height); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFastUpdateResource) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FastUpdateResource(); \
		P_NATIVE_END; \
	}


#define NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_MixedRealityCanvas_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRender) \
	{ \
		P_GET_OBJECT(UCanvas,Z_Param_Canvas); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Width); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Height); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRender(Z_Param_Canvas,Z_Param_Width,Z_Param_Height); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFastUpdateResource) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FastUpdateResource(); \
		P_NATIVE_END; \
	}


#define NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_MixedRealityCanvas_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMixedRealityCanvas(); \
	friend MIXEDREALITYOUTPUTPLUGIN_API class UClass* Z_Construct_UClass_UMixedRealityCanvas(); \
public: \
	DECLARE_CLASS(UMixedRealityCanvas, UCanvasRenderTarget2D, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MixedRealityOutputPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMixedRealityCanvas) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_MixedRealityCanvas_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUMixedRealityCanvas(); \
	friend MIXEDREALITYOUTPUTPLUGIN_API class UClass* Z_Construct_UClass_UMixedRealityCanvas(); \
public: \
	DECLARE_CLASS(UMixedRealityCanvas, UCanvasRenderTarget2D, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MixedRealityOutputPlugin"), NO_API) \
	DECLARE_SERIALIZER(UMixedRealityCanvas) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_MixedRealityCanvas_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMixedRealityCanvas(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMixedRealityCanvas) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMixedRealityCanvas); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMixedRealityCanvas); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMixedRealityCanvas(UMixedRealityCanvas&&); \
	NO_API UMixedRealityCanvas(const UMixedRealityCanvas&); \
public:


#define NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_MixedRealityCanvas_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMixedRealityCanvas(UMixedRealityCanvas&&); \
	NO_API UMixedRealityCanvas(const UMixedRealityCanvas&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMixedRealityCanvas); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMixedRealityCanvas); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMixedRealityCanvas)


#define NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_MixedRealityCanvas_h_10_PRIVATE_PROPERTY_OFFSET
#define NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_MixedRealityCanvas_h_7_PROLOG
#define NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_MixedRealityCanvas_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_MixedRealityCanvas_h_10_PRIVATE_PROPERTY_OFFSET \
	NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_MixedRealityCanvas_h_10_RPC_WRAPPERS \
	NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_MixedRealityCanvas_h_10_INCLASS \
	NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_MixedRealityCanvas_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_MixedRealityCanvas_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_MixedRealityCanvas_h_10_PRIVATE_PROPERTY_OFFSET \
	NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_MixedRealityCanvas_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_MixedRealityCanvas_h_10_INCLASS_NO_PURE_DECLS \
	NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_MixedRealityCanvas_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_MixedRealityCanvas_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
