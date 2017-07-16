// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYRECIPIES_ActionPlayerController_generated_h
#error "ActionPlayerController.generated.h already included, missing '#pragma once' in ActionPlayerController.h"
#endif
#define GAMEPLAYRECIPIES_ActionPlayerController_generated_h

#define GameplayRecipies_Source_GameplayRecipies_ActionPlayerController_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPitchCamera) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PitchCamera(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurnCamera) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TurnCamera(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveVertical) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveVertical(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveHorizontal) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveHorizontal(Z_Param_value); \
		P_NATIVE_END; \
	}


#define GameplayRecipies_Source_GameplayRecipies_ActionPlayerController_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPitchCamera) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->PitchCamera(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurnCamera) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->TurnCamera(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveVertical) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveVertical(Z_Param_value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMoveHorizontal) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->MoveHorizontal(Z_Param_value); \
		P_NATIVE_END; \
	}


#define GameplayRecipies_Source_GameplayRecipies_ActionPlayerController_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAActionPlayerController(); \
	friend GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_AActionPlayerController(); \
public: \
	DECLARE_CLASS(AActionPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/GameplayRecipies"), NO_API) \
	DECLARE_SERIALIZER(AActionPlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GameplayRecipies_Source_GameplayRecipies_ActionPlayerController_h_23_INCLASS \
private: \
	static void StaticRegisterNativesAActionPlayerController(); \
	friend GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_AActionPlayerController(); \
public: \
	DECLARE_CLASS(AActionPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/GameplayRecipies"), NO_API) \
	DECLARE_SERIALIZER(AActionPlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GameplayRecipies_Source_GameplayRecipies_ActionPlayerController_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AActionPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AActionPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActionPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActionPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AActionPlayerController(AActionPlayerController&&); \
	NO_API AActionPlayerController(const AActionPlayerController&); \
public:


#define GameplayRecipies_Source_GameplayRecipies_ActionPlayerController_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AActionPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AActionPlayerController(AActionPlayerController&&); \
	NO_API AActionPlayerController(const AActionPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AActionPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AActionPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AActionPlayerController)


#define GameplayRecipies_Source_GameplayRecipies_ActionPlayerController_h_23_PRIVATE_PROPERTY_OFFSET
#define GameplayRecipies_Source_GameplayRecipies_ActionPlayerController_h_20_PROLOG
#define GameplayRecipies_Source_GameplayRecipies_ActionPlayerController_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameplayRecipies_Source_GameplayRecipies_ActionPlayerController_h_23_PRIVATE_PROPERTY_OFFSET \
	GameplayRecipies_Source_GameplayRecipies_ActionPlayerController_h_23_RPC_WRAPPERS \
	GameplayRecipies_Source_GameplayRecipies_ActionPlayerController_h_23_INCLASS \
	GameplayRecipies_Source_GameplayRecipies_ActionPlayerController_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GameplayRecipies_Source_GameplayRecipies_ActionPlayerController_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameplayRecipies_Source_GameplayRecipies_ActionPlayerController_h_23_PRIVATE_PROPERTY_OFFSET \
	GameplayRecipies_Source_GameplayRecipies_ActionPlayerController_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	GameplayRecipies_Source_GameplayRecipies_ActionPlayerController_h_23_INCLASS_NO_PURE_DECLS \
	GameplayRecipies_Source_GameplayRecipies_ActionPlayerController_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GameplayRecipies_Source_GameplayRecipies_ActionPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
