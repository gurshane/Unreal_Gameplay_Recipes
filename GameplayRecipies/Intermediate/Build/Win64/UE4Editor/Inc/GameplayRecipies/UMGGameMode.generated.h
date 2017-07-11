// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef GAMEPLAYRECIPIES_UMGGameMode_generated_h
#error "UMGGameMode.generated.h already included, missing '#pragma once' in UMGGameMode.h"
#endif
#define GAMEPLAYRECIPIES_UMGGameMode_generated_h

#define GameplayRecipies_Source_GameplayRecipies_UMGGameMode_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeMenuWidget) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewWidgetClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ChangeMenuWidget(Z_Param_NewWidgetClass); \
		P_NATIVE_END; \
	}


#define GameplayRecipies_Source_GameplayRecipies_UMGGameMode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeMenuWidget) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_NewWidgetClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ChangeMenuWidget(Z_Param_NewWidgetClass); \
		P_NATIVE_END; \
	}


#define GameplayRecipies_Source_GameplayRecipies_UMGGameMode_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUMGGameMode(); \
	friend GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_AUMGGameMode(); \
public: \
	DECLARE_CLASS(AUMGGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/GameplayRecipies"), NO_API) \
	DECLARE_SERIALIZER(AUMGGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GameplayRecipies_Source_GameplayRecipies_UMGGameMode_h_19_INCLASS \
private: \
	static void StaticRegisterNativesAUMGGameMode(); \
	friend GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_AUMGGameMode(); \
public: \
	DECLARE_CLASS(AUMGGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/GameplayRecipies"), NO_API) \
	DECLARE_SERIALIZER(AUMGGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GameplayRecipies_Source_GameplayRecipies_UMGGameMode_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUMGGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUMGGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUMGGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUMGGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUMGGameMode(AUMGGameMode&&); \
	NO_API AUMGGameMode(const AUMGGameMode&); \
public:


#define GameplayRecipies_Source_GameplayRecipies_UMGGameMode_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUMGGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUMGGameMode(AUMGGameMode&&); \
	NO_API AUMGGameMode(const AUMGGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUMGGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUMGGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUMGGameMode)


#define GameplayRecipies_Source_GameplayRecipies_UMGGameMode_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StartingWidgetClass() { return STRUCT_OFFSET(AUMGGameMode, StartingWidgetClass); } \
	FORCEINLINE static uint32 __PPO__CurrentWidget() { return STRUCT_OFFSET(AUMGGameMode, CurrentWidget); }


#define GameplayRecipies_Source_GameplayRecipies_UMGGameMode_h_16_PROLOG
#define GameplayRecipies_Source_GameplayRecipies_UMGGameMode_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameplayRecipies_Source_GameplayRecipies_UMGGameMode_h_19_PRIVATE_PROPERTY_OFFSET \
	GameplayRecipies_Source_GameplayRecipies_UMGGameMode_h_19_RPC_WRAPPERS \
	GameplayRecipies_Source_GameplayRecipies_UMGGameMode_h_19_INCLASS \
	GameplayRecipies_Source_GameplayRecipies_UMGGameMode_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GameplayRecipies_Source_GameplayRecipies_UMGGameMode_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameplayRecipies_Source_GameplayRecipies_UMGGameMode_h_19_PRIVATE_PROPERTY_OFFSET \
	GameplayRecipies_Source_GameplayRecipies_UMGGameMode_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	GameplayRecipies_Source_GameplayRecipies_UMGGameMode_h_19_INCLASS_NO_PURE_DECLS \
	GameplayRecipies_Source_GameplayRecipies_UMGGameMode_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GameplayRecipies_Source_GameplayRecipies_UMGGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
