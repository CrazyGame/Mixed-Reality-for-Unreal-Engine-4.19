// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
#ifdef MIXEDREALITYOUTPUTPLUGIN_ExternalCameraConfig_generated_h
#error "ExternalCameraConfig.generated.h already included, missing '#pragma once' in ExternalCameraConfig.h"
#endif
#define MIXEDREALITYOUTPUTPLUGIN_ExternalCameraConfig_generated_h

#define NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_ExternalCameraConfig_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateOffset) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_newPostionOffset); \
		P_GET_STRUCT(FRotator,Z_Param_newRotationOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateOffset(Z_Param_newPostionOffset,Z_Param_newRotationOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadConfig) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReadConfig(); \
		P_NATIVE_END; \
	}


#define NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_ExternalCameraConfig_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateOffset) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_newPostionOffset); \
		P_GET_STRUCT(FRotator,Z_Param_newRotationOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateOffset(Z_Param_newPostionOffset,Z_Param_newRotationOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReadConfig) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ReadConfig(); \
		P_NATIVE_END; \
	}


#define NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_ExternalCameraConfig_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAExternalCameraConfig(); \
	friend MIXEDREALITYOUTPUTPLUGIN_API class UClass* Z_Construct_UClass_AExternalCameraConfig(); \
public: \
	DECLARE_CLASS(AExternalCameraConfig, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MixedRealityOutputPlugin"), NO_API) \
	DECLARE_SERIALIZER(AExternalCameraConfig) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_ExternalCameraConfig_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAExternalCameraConfig(); \
	friend MIXEDREALITYOUTPUTPLUGIN_API class UClass* Z_Construct_UClass_AExternalCameraConfig(); \
public: \
	DECLARE_CLASS(AExternalCameraConfig, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/MixedRealityOutputPlugin"), NO_API) \
	DECLARE_SERIALIZER(AExternalCameraConfig) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_ExternalCameraConfig_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AExternalCameraConfig(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AExternalCameraConfig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExternalCameraConfig); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExternalCameraConfig); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExternalCameraConfig(AExternalCameraConfig&&); \
	NO_API AExternalCameraConfig(const AExternalCameraConfig&); \
public:


#define NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_ExternalCameraConfig_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AExternalCameraConfig(AExternalCameraConfig&&); \
	NO_API AExternalCameraConfig(const AExternalCameraConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AExternalCameraConfig); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AExternalCameraConfig); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AExternalCameraConfig)


#define NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_ExternalCameraConfig_h_11_PRIVATE_PROPERTY_OFFSET
#define NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_ExternalCameraConfig_h_8_PROLOG
#define NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_ExternalCameraConfig_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_ExternalCameraConfig_h_11_PRIVATE_PROPERTY_OFFSET \
	NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_ExternalCameraConfig_h_11_RPC_WRAPPERS \
	NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_ExternalCameraConfig_h_11_INCLASS \
	NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_ExternalCameraConfig_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_ExternalCameraConfig_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_ExternalCameraConfig_h_11_PRIVATE_PROPERTY_OFFSET \
	NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_ExternalCameraConfig_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_ExternalCameraConfig_h_11_INCLASS_NO_PURE_DECLS \
	NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_ExternalCameraConfig_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NewMixDemo_Plugins_MixedRealityOutputPlugin_Source_MixedRealityOutputPlugin_Private_ExternalCameraConfig_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
