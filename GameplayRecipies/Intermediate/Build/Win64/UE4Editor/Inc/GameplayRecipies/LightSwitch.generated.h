// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef GAMEPLAYRECIPIES_LightSwitch_generated_h
#error "LightSwitch.generated.h already included, missing '#pragma once' in LightSwitch.h"
#endif
#define GAMEPLAYRECIPIES_LightSwitch_generated_h

#define GameplayRecipies_Source_GameplayRecipies_LightSwitch_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToggleLight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ToggleLight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define GameplayRecipies_Source_GameplayRecipies_LightSwitch_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleLight) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->ToggleLight(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapEnd) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnOverlapBegin) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define GameplayRecipies_Source_GameplayRecipies_LightSwitch_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALightSwitch(); \
	friend GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_ALightSwitch(); \
public: \
	DECLARE_CLASS(ALightSwitch, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GameplayRecipies"), NO_API) \
	DECLARE_SERIALIZER(ALightSwitch) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GameplayRecipies_Source_GameplayRecipies_LightSwitch_h_12_INCLASS \
private: \
	static void StaticRegisterNativesALightSwitch(); \
	friend GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_ALightSwitch(); \
public: \
	DECLARE_CLASS(ALightSwitch, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GameplayRecipies"), NO_API) \
	DECLARE_SERIALIZER(ALightSwitch) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define GameplayRecipies_Source_GameplayRecipies_LightSwitch_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALightSwitch(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALightSwitch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightSwitch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightSwitch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightSwitch(ALightSwitch&&); \
	NO_API ALightSwitch(const ALightSwitch&); \
public:


#define GameplayRecipies_Source_GameplayRecipies_LightSwitch_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightSwitch(ALightSwitch&&); \
	NO_API ALightSwitch(const ALightSwitch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightSwitch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightSwitch); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALightSwitch)


#define GameplayRecipies_Source_GameplayRecipies_LightSwitch_h_12_PRIVATE_PROPERTY_OFFSET
#define GameplayRecipies_Source_GameplayRecipies_LightSwitch_h_9_PROLOG
#define GameplayRecipies_Source_GameplayRecipies_LightSwitch_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameplayRecipies_Source_GameplayRecipies_LightSwitch_h_12_PRIVATE_PROPERTY_OFFSET \
	GameplayRecipies_Source_GameplayRecipies_LightSwitch_h_12_RPC_WRAPPERS \
	GameplayRecipies_Source_GameplayRecipies_LightSwitch_h_12_INCLASS \
	GameplayRecipies_Source_GameplayRecipies_LightSwitch_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GameplayRecipies_Source_GameplayRecipies_LightSwitch_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GameplayRecipies_Source_GameplayRecipies_LightSwitch_h_12_PRIVATE_PROPERTY_OFFSET \
	GameplayRecipies_Source_GameplayRecipies_LightSwitch_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GameplayRecipies_Source_GameplayRecipies_LightSwitch_h_12_INCLASS_NO_PURE_DECLS \
	GameplayRecipies_Source_GameplayRecipies_LightSwitch_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GameplayRecipies_Source_GameplayRecipies_LightSwitch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
