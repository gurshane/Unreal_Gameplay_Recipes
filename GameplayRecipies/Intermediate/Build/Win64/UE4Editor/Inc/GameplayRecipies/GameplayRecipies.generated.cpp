// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GameplayRecipies.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1GameplayRecipies() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API class UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UPawnMovementComponent();
	ENGINE_API class UClass* Z_Construct_UClass_APawn();
	ENGINE_API class UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_APlayerController();
	ENGINE_API class UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API class UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UMG_API class UClass* Z_Construct_UClass_UUserWidget_NoRegister();

	GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_AActionGameMode_NoRegister();
	GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_AActionGameMode();
	GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_UActionMovementComponent_NoRegister();
	GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_UActionMovementComponent();
	GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_ACameraMan_NoRegister();
	GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_ACameraMan();
	GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_UActionPawnMovementComponent_NoRegister();
	GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_UActionPawnMovementComponent();
	GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_AActionPawn_NoRegister();
	GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_AActionPawn();
	GAMEPLAYRECIPIES_API class UFunction* Z_Construct_UFunction_AActionPlayerController_MoveHorizontal();
	GAMEPLAYRECIPIES_API class UFunction* Z_Construct_UFunction_AActionPlayerController_MoveVertical();
	GAMEPLAYRECIPIES_API class UFunction* Z_Construct_UFunction_AActionPlayerController_PitchCamera();
	GAMEPLAYRECIPIES_API class UFunction* Z_Construct_UFunction_AActionPlayerController_TurnCamera();
	GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_AActionPlayerController_NoRegister();
	GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_AActionPlayerController();
	GAMEPLAYRECIPIES_API class UScriptStruct* Z_Construct_UScriptStruct_FDirectorCam();
	GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_ACameraDirector_NoRegister();
	GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_ACameraDirector();
	GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_UCollidingPawnMovementComponent_NoRegister();
	GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_UCollidingPawnMovementComponent();
	GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_ACollidingPawn_NoRegister();
	GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_ACollidingPawn();
	GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_AGameplayRecipiesGameModeBase_NoRegister();
	GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_AGameplayRecipiesGameModeBase();
	GAMEPLAYRECIPIES_API class UFunction* Z_Construct_UFunction_ALightSwitch_OnOverlapBegin();
	GAMEPLAYRECIPIES_API class UFunction* Z_Construct_UFunction_ALightSwitch_OnOverlapEnd();
	GAMEPLAYRECIPIES_API class UFunction* Z_Construct_UFunction_ALightSwitch_ToggleLight();
	GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_ALightSwitch_NoRegister();
	GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_ALightSwitch();
	GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_AMyPawn_NoRegister();
	GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_AMyPawn();
	GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_APawnWithCamera_NoRegister();
	GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_APawnWithCamera();
	GAMEPLAYRECIPIES_API class UFunction* Z_Construct_UFunction_AUMGGameMode_ChangeMenuWidget();
	GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_AUMGGameMode_NoRegister();
	GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_AUMGGameMode();
	GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_AUMGPlayerController_NoRegister();
	GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_AUMGPlayerController();
	GAMEPLAYRECIPIES_API class UPackage* Z_Construct_UPackage__Script_GameplayRecipies();
	void AActionGameMode::StaticRegisterNativesAActionGameMode()
	{
	}
	UClass* Z_Construct_UClass_AActionGameMode_NoRegister()
	{
		return AActionGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AActionGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_GameplayRecipies();
			OuterClass = AActionGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900288;


				static TCppClassTypeInfo<TCppClassTypeTraits<AActionGameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ActionGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("ActionGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AActionGameMode, 1472542392);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AActionGameMode(Z_Construct_UClass_AActionGameMode, &AActionGameMode::StaticClass, TEXT("/Script/GameplayRecipies"), TEXT("AActionGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActionGameMode);
	void UActionMovementComponent::StaticRegisterNativesUActionMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UActionMovementComponent_NoRegister()
	{
		return UActionMovementComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UActionMovementComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_GameplayRecipies();
			OuterClass = UActionMovementComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;


				static TCppClassTypeInfo<TCppClassTypeTraits<UActionMovementComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ActionMovementComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("ActionMovementComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActionMovementComponent, 2060140973);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActionMovementComponent(Z_Construct_UClass_UActionMovementComponent, &UActionMovementComponent::StaticClass, TEXT("/Script/GameplayRecipies"), TEXT("UActionMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActionMovementComponent);
	void ACameraMan::StaticRegisterNativesACameraMan()
	{
	}
	UClass* Z_Construct_UClass_ACameraMan_NoRegister()
	{
		return ACameraMan::StaticClass();
	}
	UClass* Z_Construct_UClass_ACameraMan()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_GameplayRecipies();
			OuterClass = ACameraMan::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_MyCamera = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MyCamera"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MyCamera, ACameraMan), 0x0010000000080008, Z_Construct_UClass_UCameraComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<ACameraMan> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CameraMan.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("CameraMan.h"));
				MetaData->SetValue(NewProp_MyCamera, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MyCamera, TEXT("ModuleRelativePath"), TEXT("CameraMan.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACameraMan, 3277630054);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACameraMan(Z_Construct_UClass_ACameraMan, &ACameraMan::StaticClass, TEXT("/Script/GameplayRecipies"), TEXT("ACameraMan"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraMan);
	void UActionPawnMovementComponent::StaticRegisterNativesUActionPawnMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UActionPawnMovementComponent_NoRegister()
	{
		return UActionPawnMovementComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UActionPawnMovementComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UPawnMovementComponent();
			Z_Construct_UPackage__Script_GameplayRecipies();
			OuterClass = UActionPawnMovementComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00084;


				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UActionPawnMovementComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ActionPawnMovementComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("ActionPawnMovementComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActionPawnMovementComponent, 642009478);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActionPawnMovementComponent(Z_Construct_UClass_UActionPawnMovementComponent, &UActionPawnMovementComponent::StaticClass, TEXT("/Script/GameplayRecipies"), TEXT("UActionPawnMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActionPawnMovementComponent);
	void AActionPawn::StaticRegisterNativesAActionPawn()
	{
	}
	UClass* Z_Construct_UClass_AActionPawn_NoRegister()
	{
		return AActionPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_AActionPawn()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APawn();
			Z_Construct_UPackage__Script_GameplayRecipies();
			OuterClass = AActionPawn::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_cameraLagSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("cameraLagSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(cameraLagSpeed, AActionPawn), 0x0010000000000001);
				UProperty* NewProp_MyFirstPersonCam = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MyFirstPersonCam"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MyFirstPersonCam, AActionPawn), 0x0010000000080008, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_MyThirdPersonCam = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MyThirdPersonCam"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MyThirdPersonCam, AActionPawn), 0x0010000000080008, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_MySpringArmComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MySpringArmComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MySpringArmComponent, AActionPawn), 0x0010000000080008, Z_Construct_UClass_USpringArmComponent_NoRegister());
				UProperty* NewProp_MySphereComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MySphereComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(MySphereComponent, AActionPawn), 0x0010000000080008, Z_Construct_UClass_USphereComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<AActionPawn> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ActionPawn.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("ActionPawn.h"));
				MetaData->SetValue(NewProp_cameraLagSpeed, TEXT("Category"), TEXT("Action Pawn"));
				MetaData->SetValue(NewProp_cameraLagSpeed, TEXT("ModuleRelativePath"), TEXT("ActionPawn.h"));
				MetaData->SetValue(NewProp_cameraLagSpeed, TEXT("ToolTip"), TEXT("UPROPERTY()\nACameraMan* MyFirstPersonCameraMan;"));
				MetaData->SetValue(NewProp_MyFirstPersonCam, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MyFirstPersonCam, TEXT("ModuleRelativePath"), TEXT("ActionPawn.h"));
				MetaData->SetValue(NewProp_MyThirdPersonCam, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MyThirdPersonCam, TEXT("ModuleRelativePath"), TEXT("ActionPawn.h"));
				MetaData->SetValue(NewProp_MySpringArmComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MySpringArmComponent, TEXT("ModuleRelativePath"), TEXT("ActionPawn.h"));
				MetaData->SetValue(NewProp_MySphereComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_MySphereComponent, TEXT("ModuleRelativePath"), TEXT("ActionPawn.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AActionPawn, 206742369);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AActionPawn(Z_Construct_UClass_AActionPawn, &AActionPawn::StaticClass, TEXT("/Script/GameplayRecipies"), TEXT("AActionPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActionPawn);
	void AActionPlayerController::StaticRegisterNativesAActionPlayerController()
	{
		UClass* Class = AActionPlayerController::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "MoveHorizontal", (Native)&AActionPlayerController::execMoveHorizontal },
			{ "MoveVertical", (Native)&AActionPlayerController::execMoveVertical },
			{ "PitchCamera", (Native)&AActionPlayerController::execPitchCamera },
			{ "TurnCamera", (Native)&AActionPlayerController::execTurnCamera },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 4);
	}
	UFunction* Z_Construct_UFunction_AActionPlayerController_MoveHorizontal()
	{
		struct ActionPlayerController_eventMoveHorizontal_Parms
		{
			float value;
		};
		UObject* Outer=Z_Construct_UClass_AActionPlayerController();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MoveHorizontal"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535, sizeof(ActionPlayerController_eventMoveHorizontal_Parms));
			UProperty* NewProp_value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(value, ActionPlayerController_eventMoveHorizontal_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("ActionPlayerController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AActionPlayerController_MoveVertical()
	{
		struct ActionPlayerController_eventMoveVertical_Parms
		{
			float value;
		};
		UObject* Outer=Z_Construct_UClass_AActionPlayerController();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("MoveVertical"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535, sizeof(ActionPlayerController_eventMoveVertical_Parms));
			UProperty* NewProp_value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(value, ActionPlayerController_eventMoveVertical_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("ActionPlayerController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AActionPlayerController_PitchCamera()
	{
		struct ActionPlayerController_eventPitchCamera_Parms
		{
			float value;
		};
		UObject* Outer=Z_Construct_UClass_AActionPlayerController();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("PitchCamera"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535, sizeof(ActionPlayerController_eventPitchCamera_Parms));
			UProperty* NewProp_value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(value, ActionPlayerController_eventPitchCamera_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("ActionPlayerController.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AActionPlayerController_TurnCamera()
	{
		struct ActionPlayerController_eventTurnCamera_Parms
		{
			float value;
		};
		UObject* Outer=Z_Construct_UClass_AActionPlayerController();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("TurnCamera"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535, sizeof(ActionPlayerController_eventTurnCamera_Parms));
			UProperty* NewProp_value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(value, ActionPlayerController_eventTurnCamera_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("ActionPlayerController.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AActionPlayerController_NoRegister()
	{
		return AActionPlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_AActionPlayerController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APlayerController();
			Z_Construct_UPackage__Script_GameplayRecipies();
			OuterClass = AActionPlayerController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900284;

				OuterClass->LinkChild(Z_Construct_UFunction_AActionPlayerController_MoveHorizontal());
				OuterClass->LinkChild(Z_Construct_UFunction_AActionPlayerController_MoveVertical());
				OuterClass->LinkChild(Z_Construct_UFunction_AActionPlayerController_PitchCamera());
				OuterClass->LinkChild(Z_Construct_UFunction_AActionPlayerController_TurnCamera());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_ThirdPersonCameraMan = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ThirdPersonCameraMan"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ThirdPersonCameraMan, AActionPlayerController), 0x0010000000000001, Z_Construct_UClass_ACameraMan_NoRegister());
				UProperty* NewProp_FirstPersonCameraMan = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FirstPersonCameraMan"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FirstPersonCameraMan, AActionPlayerController), 0x0010000000000001, Z_Construct_UClass_ACameraMan_NoRegister());
				UProperty* NewProp_maxFirstPersonYaw = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("maxFirstPersonYaw"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(maxFirstPersonYaw, AActionPlayerController), 0x0010000000000001);
				UProperty* NewProp_minFirstPersonYaw = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("minFirstPersonYaw"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(minFirstPersonYaw, AActionPlayerController), 0x0010000000000001);
				UProperty* NewProp_maxFirstPersonPitch = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("maxFirstPersonPitch"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(maxFirstPersonPitch, AActionPlayerController), 0x0010000000000001);
				UProperty* NewProp_minFirstPersonPitch = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("minFirstPersonPitch"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(minFirstPersonPitch, AActionPlayerController), 0x0010000000000001);
				UProperty* NewProp_maxThirdPersonPitch = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("maxThirdPersonPitch"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(maxThirdPersonPitch, AActionPlayerController), 0x0010000000000001);
				UProperty* NewProp_minThirdPersonPitch = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("minThirdPersonPitch"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(minThirdPersonPitch, AActionPlayerController), 0x0010000000000001);
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(inThirdPerson, AActionPlayerController, bool);
				UProperty* NewProp_inThirdPerson = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("inThirdPerson"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(inThirdPerson, AActionPlayerController), 0x0010000000000001, CPP_BOOL_PROPERTY_BITMASK(inThirdPerson, AActionPlayerController), sizeof(bool), true);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AActionPlayerController_MoveHorizontal(), "MoveHorizontal"); // 3661615788
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AActionPlayerController_MoveVertical(), "MoveVertical"); // 3797737010
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AActionPlayerController_PitchCamera(), "PitchCamera"); // 702037153
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AActionPlayerController_TurnCamera(), "TurnCamera"); // 3151446237
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AActionPlayerController> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("ActionPlayerController.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("ActionPlayerController.h"));
				MetaData->SetValue(NewProp_ThirdPersonCameraMan, TEXT("Category"), TEXT("Camera Crew"));
				MetaData->SetValue(NewProp_ThirdPersonCameraMan, TEXT("ModuleRelativePath"), TEXT("ActionPlayerController.h"));
				MetaData->SetValue(NewProp_FirstPersonCameraMan, TEXT("Category"), TEXT("Camera Crew"));
				MetaData->SetValue(NewProp_FirstPersonCameraMan, TEXT("ModuleRelativePath"), TEXT("ActionPlayerController.h"));
				MetaData->SetValue(NewProp_maxFirstPersonYaw, TEXT("Category"), TEXT("First Person Camera"));
				MetaData->SetValue(NewProp_maxFirstPersonYaw, TEXT("ModuleRelativePath"), TEXT("ActionPlayerController.h"));
				MetaData->SetValue(NewProp_minFirstPersonYaw, TEXT("Category"), TEXT("First Person Camera"));
				MetaData->SetValue(NewProp_minFirstPersonYaw, TEXT("ModuleRelativePath"), TEXT("ActionPlayerController.h"));
				MetaData->SetValue(NewProp_maxFirstPersonPitch, TEXT("Category"), TEXT("First Person Camera"));
				MetaData->SetValue(NewProp_maxFirstPersonPitch, TEXT("ModuleRelativePath"), TEXT("ActionPlayerController.h"));
				MetaData->SetValue(NewProp_minFirstPersonPitch, TEXT("Category"), TEXT("First Person Camera"));
				MetaData->SetValue(NewProp_minFirstPersonPitch, TEXT("ModuleRelativePath"), TEXT("ActionPlayerController.h"));
				MetaData->SetValue(NewProp_maxThirdPersonPitch, TEXT("Category"), TEXT("Third Person Camera"));
				MetaData->SetValue(NewProp_maxThirdPersonPitch, TEXT("ModuleRelativePath"), TEXT("ActionPlayerController.h"));
				MetaData->SetValue(NewProp_minThirdPersonPitch, TEXT("Category"), TEXT("Third Person Camera"));
				MetaData->SetValue(NewProp_minThirdPersonPitch, TEXT("ModuleRelativePath"), TEXT("ActionPlayerController.h"));
				MetaData->SetValue(NewProp_inThirdPerson, TEXT("Category"), TEXT("Action Controller"));
				MetaData->SetValue(NewProp_inThirdPerson, TEXT("ModuleRelativePath"), TEXT("ActionPlayerController.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AActionPlayerController, 458276045);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AActionPlayerController(Z_Construct_UClass_AActionPlayerController, &AActionPlayerController::StaticClass, TEXT("/Script/GameplayRecipies"), TEXT("AActionPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActionPlayerController);
class UScriptStruct* FDirectorCam::StaticStruct()
{
	extern GAMEPLAYRECIPIES_API class UPackage* Z_Construct_UPackage__Script_GameplayRecipies();
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYRECIPIES_API class UScriptStruct* Z_Construct_UScriptStruct_FDirectorCam();
		extern GAMEPLAYRECIPIES_API uint32 Get_Z_Construct_UScriptStruct_FDirectorCam_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDirectorCam, Z_Construct_UPackage__Script_GameplayRecipies(), TEXT("DirectorCam"), sizeof(FDirectorCam), Get_Z_Construct_UScriptStruct_FDirectorCam_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDirectorCam(FDirectorCam::StaticStruct, TEXT("/Script/GameplayRecipies"), TEXT("DirectorCam"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayRecipies_StaticRegisterNativesFDirectorCam
{
	FScriptStruct_GameplayRecipies_StaticRegisterNativesFDirectorCam()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DirectorCam")),new UScriptStruct::TCppStructOps<FDirectorCam>);
	}
} ScriptStruct_GameplayRecipies_StaticRegisterNativesFDirectorCam;
	UScriptStruct* Z_Construct_UScriptStruct_FDirectorCam()
	{
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayRecipies();
		extern uint32 Get_Z_Construct_UScriptStruct_FDirectorCam_CRC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DirectorCam"), sizeof(FDirectorCam), Get_Z_Construct_UScriptStruct_FDirectorCam_CRC(), false);
		if (!ReturnStruct)
		{
			ReturnStruct = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DirectorCam"), RF_Public|RF_Transient|RF_MarkAsNative) UScriptStruct(FObjectInitializer(), NULL, new UScriptStruct::TCppStructOps<FDirectorCam>, EStructFlags(0x00000001));
			UProperty* NewProp_SmoothBlendTime = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("SmoothBlendTime"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SmoothBlendTime, FDirectorCam), 0x0010000000000001);
			UProperty* NewProp_TimeToNextCameraChange = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("TimeToNextCameraChange"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TimeToNextCameraChange, FDirectorCam), 0x0010000000000001);
			UProperty* NewProp_Camera = new(EC_InternalUseOnlyConstructor, ReturnStruct, TEXT("Camera"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Camera, FDirectorCam), 0x0010000000000001, Z_Construct_UClass_AActor_NoRegister());
			ReturnStruct->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnStruct->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnStruct, TEXT("ModuleRelativePath"), TEXT("CameraDirector.h"));
			MetaData->SetValue(NewProp_SmoothBlendTime, TEXT("Category"), TEXT("DirectorCam"));
			MetaData->SetValue(NewProp_SmoothBlendTime, TEXT("ModuleRelativePath"), TEXT("CameraDirector.h"));
			MetaData->SetValue(NewProp_TimeToNextCameraChange, TEXT("Category"), TEXT("DirectorCam"));
			MetaData->SetValue(NewProp_TimeToNextCameraChange, TEXT("ModuleRelativePath"), TEXT("CameraDirector.h"));
			MetaData->SetValue(NewProp_Camera, TEXT("Category"), TEXT("DirectorCam"));
			MetaData->SetValue(NewProp_Camera, TEXT("ModuleRelativePath"), TEXT("CameraDirector.h"));
#endif
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDirectorCam_CRC() { return 3891216005U; }
	void ACameraDirector::StaticRegisterNativesACameraDirector()
	{
	}
	UClass* Z_Construct_UClass_ACameraDirector_NoRegister()
	{
		return ACameraDirector::StaticClass();
	}
	UClass* Z_Construct_UClass_ACameraDirector()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_GameplayRecipies();
			OuterClass = ACameraDirector::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_TimeToNextCameraChange = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TimeToNextCameraChange"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TimeToNextCameraChange, ACameraDirector), 0x0010000000000001);
				UProperty* NewProp_CameraList = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraList"), RF_Public|RF_Transient|RF_MarkAsNative) UArrayProperty(CPP_PROPERTY_BASE(CameraList, ACameraDirector), 0x0010000000000001);
				UProperty* NewProp_CameraList_Inner = new(EC_InternalUseOnlyConstructor, NewProp_CameraList, TEXT("CameraList"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000, Z_Construct_UScriptStruct_FDirectorCam());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<ACameraDirector> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CameraDirector.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("CameraDirector.h"));
				MetaData->SetValue(NewProp_TimeToNextCameraChange, TEXT("Category"), TEXT("CameraDirector"));
				MetaData->SetValue(NewProp_TimeToNextCameraChange, TEXT("ModuleRelativePath"), TEXT("CameraDirector.h"));
				MetaData->SetValue(NewProp_CameraList, TEXT("Category"), TEXT("CameraDirector"));
				MetaData->SetValue(NewProp_CameraList, TEXT("ModuleRelativePath"), TEXT("CameraDirector.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACameraDirector, 2372468952);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACameraDirector(Z_Construct_UClass_ACameraDirector, &ACameraDirector::StaticClass, TEXT("/Script/GameplayRecipies"), TEXT("ACameraDirector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraDirector);
	void UCollidingPawnMovementComponent::StaticRegisterNativesUCollidingPawnMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UCollidingPawnMovementComponent_NoRegister()
	{
		return UCollidingPawnMovementComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UCollidingPawnMovementComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UPawnMovementComponent();
			Z_Construct_UPackage__Script_GameplayRecipies();
			OuterClass = UCollidingPawnMovementComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00084;


				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UCollidingPawnMovementComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CollidingPawnMovementComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("CollidingPawnMovementComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCollidingPawnMovementComponent, 3510495132);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCollidingPawnMovementComponent(Z_Construct_UClass_UCollidingPawnMovementComponent, &UCollidingPawnMovementComponent::StaticClass, TEXT("/Script/GameplayRecipies"), TEXT("UCollidingPawnMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCollidingPawnMovementComponent);
	void ACollidingPawn::StaticRegisterNativesACollidingPawn()
	{
	}
	UClass* Z_Construct_UClass_ACollidingPawn_NoRegister()
	{
		return ACollidingPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_ACollidingPawn()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APawn();
			Z_Construct_UPackage__Script_GameplayRecipies();
			OuterClass = ACollidingPawn::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_sprintSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("sprintSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(sprintSpeed, ACollidingPawn), 0x0010000000000001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<ACollidingPawn> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("CollidingPawn.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("CollidingPawn.h"));
				MetaData->SetValue(NewProp_sprintSpeed, TEXT("Category"), TEXT("Colliding Pawn"));
				MetaData->SetValue(NewProp_sprintSpeed, TEXT("ModuleRelativePath"), TEXT("CollidingPawn.h"));
				MetaData->SetValue(NewProp_sprintSpeed, TEXT("ToolTip"), TEXT("Sets default values for this pawn's properties"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACollidingPawn, 1759347033);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACollidingPawn(Z_Construct_UClass_ACollidingPawn, &ACollidingPawn::StaticClass, TEXT("/Script/GameplayRecipies"), TEXT("ACollidingPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACollidingPawn);
	void AGameplayRecipiesGameModeBase::StaticRegisterNativesAGameplayRecipiesGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AGameplayRecipiesGameModeBase_NoRegister()
	{
		return AGameplayRecipiesGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AGameplayRecipiesGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_GameplayRecipies();
			OuterClass = AGameplayRecipiesGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900288;


				static TCppClassTypeInfo<TCppClassTypeTraits<AGameplayRecipiesGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("GameplayRecipiesGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("GameplayRecipiesGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameplayRecipiesGameModeBase, 1994422280);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameplayRecipiesGameModeBase(Z_Construct_UClass_AGameplayRecipiesGameModeBase, &AGameplayRecipiesGameModeBase::StaticClass, TEXT("/Script/GameplayRecipies"), TEXT("AGameplayRecipiesGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameplayRecipiesGameModeBase);
	void ALightSwitch::StaticRegisterNativesALightSwitch()
	{
		UClass* Class = ALightSwitch::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnOverlapBegin", (Native)&ALightSwitch::execOnOverlapBegin },
			{ "OnOverlapEnd", (Native)&ALightSwitch::execOnOverlapEnd },
			{ "ToggleLight", (Native)&ALightSwitch::execToggleLight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 3);
	}
	UFunction* Z_Construct_UFunction_ALightSwitch_OnOverlapBegin()
	{
		struct LightSwitch_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
		UObject* Outer=Z_Construct_UClass_ALightSwitch();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnOverlapBegin"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00420401, 65535, sizeof(LightSwitch_eventOnOverlapBegin_Parms));
			UProperty* NewProp_SweepResult = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("SweepResult"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(SweepResult, LightSwitch_eventOnOverlapBegin_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(bFromSweep, LightSwitch_eventOnOverlapBegin_Parms, bool);
			UProperty* NewProp_bFromSweep = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("bFromSweep"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bFromSweep, LightSwitch_eventOnOverlapBegin_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(bFromSweep, LightSwitch_eventOnOverlapBegin_Parms), sizeof(bool), true);
			UProperty* NewProp_OtherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherBodyIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OtherBodyIndex, LightSwitch_eventOnOverlapBegin_Parms), 0x0010000000000080);
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, LightSwitch_eventOnOverlapBegin_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, LightSwitch_eventOnOverlapBegin_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_OverlappedComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverlappedComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverlappedComp, LightSwitch_eventOnOverlapBegin_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("LightSwitch.h"));
			MetaData->SetValue(NewProp_SweepResult, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_OverlappedComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALightSwitch_OnOverlapEnd()
	{
		struct LightSwitch_eventOnOverlapEnd_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		UObject* Outer=Z_Construct_UClass_ALightSwitch();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnOverlapEnd"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535, sizeof(LightSwitch_eventOnOverlapEnd_Parms));
			UProperty* NewProp_OtherBodyIndex = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherBodyIndex"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(OtherBodyIndex, LightSwitch_eventOnOverlapEnd_Parms), 0x0010000000000080);
			UProperty* NewProp_OtherComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherComp, LightSwitch_eventOnOverlapEnd_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, LightSwitch_eventOnOverlapEnd_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_OverlappedComp = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OverlappedComp"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OverlappedComp, LightSwitch_eventOnOverlapEnd_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("LightSwitch.h"));
			MetaData->SetValue(NewProp_OtherComp, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_OverlappedComp, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALightSwitch_ToggleLight()
	{
		UObject* Outer=Z_Construct_UClass_ALightSwitch();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ToggleLight"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("LightSwitch.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALightSwitch_NoRegister()
	{
		return ALightSwitch::StaticClass();
	}
	UClass* Z_Construct_UClass_ALightSwitch()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_GameplayRecipies();
			OuterClass = ALightSwitch::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_ALightSwitch_OnOverlapBegin());
				OuterClass->LinkChild(Z_Construct_UFunction_ALightSwitch_OnOverlapEnd());
				OuterClass->LinkChild(Z_Construct_UFunction_ALightSwitch_ToggleLight());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_Sphere = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("Sphere"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(Sphere, ALightSwitch), 0x00100000000a0009, Z_Construct_UClass_USphereComponent_NoRegister());
				UProperty* NewProp_PointLight = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PointLight"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PointLight, ALightSwitch), 0x00100000000a0009, Z_Construct_UClass_UPointLightComponent_NoRegister());
				UProperty* NewProp_DesiredIntensity = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("DesiredIntensity"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(DesiredIntensity, ALightSwitch), 0x0010000000020001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ALightSwitch_OnOverlapBegin(), "OnOverlapBegin"); // 3510047346
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ALightSwitch_OnOverlapEnd(), "OnOverlapEnd"); // 3008794407
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ALightSwitch_ToggleLight(), "ToggleLight"); // 4047222451
				static TCppClassTypeInfo<TCppClassTypeTraits<ALightSwitch> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("LightSwitch.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("LightSwitch.h"));
				MetaData->SetValue(NewProp_Sphere, TEXT("Category"), TEXT("Switch Components"));
				MetaData->SetValue(NewProp_Sphere, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_Sphere, TEXT("ModuleRelativePath"), TEXT("LightSwitch.h"));
				MetaData->SetValue(NewProp_PointLight, TEXT("Category"), TEXT("Switch Components"));
				MetaData->SetValue(NewProp_PointLight, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_PointLight, TEXT("ModuleRelativePath"), TEXT("LightSwitch.h"));
				MetaData->SetValue(NewProp_DesiredIntensity, TEXT("Category"), TEXT("Switch Variables"));
				MetaData->SetValue(NewProp_DesiredIntensity, TEXT("ModuleRelativePath"), TEXT("LightSwitch.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALightSwitch, 2647976159);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALightSwitch(Z_Construct_UClass_ALightSwitch, &ALightSwitch::StaticClass, TEXT("/Script/GameplayRecipies"), TEXT("ALightSwitch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALightSwitch);
	void AMyPawn::StaticRegisterNativesAMyPawn()
	{
	}
	UClass* Z_Construct_UClass_AMyPawn_NoRegister()
	{
		return AMyPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_AMyPawn()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APawn();
			Z_Construct_UPackage__Script_GameplayRecipies();
			OuterClass = AMyPawn::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_OurVisibleComponent = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OurVisibleComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OurVisibleComponent, AMyPawn), 0x0010000000080009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<AMyPawn> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MyPawn.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MyPawn.h"));
				MetaData->SetValue(NewProp_OurVisibleComponent, TEXT("Category"), TEXT("MyPawn"));
				MetaData->SetValue(NewProp_OurVisibleComponent, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_OurVisibleComponent, TEXT("ModuleRelativePath"), TEXT("MyPawn.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyPawn, 2710587817);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyPawn(Z_Construct_UClass_AMyPawn, &AMyPawn::StaticClass, TEXT("/Script/GameplayRecipies"), TEXT("AMyPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPawn);
	void APawnWithCamera::StaticRegisterNativesAPawnWithCamera()
	{
	}
	UClass* Z_Construct_UClass_APawnWithCamera_NoRegister()
	{
		return APawnWithCamera::StaticClass();
	}
	UClass* Z_Construct_UClass_APawnWithCamera()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APawn();
			Z_Construct_UPackage__Script_GameplayRecipies();
			OuterClass = APawnWithCamera::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_OurMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("OurMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OurMesh, APawnWithCamera), 0x0010000000080009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<APawnWithCamera> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("PawnWithCamera.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("PawnWithCamera.h"));
				MetaData->SetValue(NewProp_OurMesh, TEXT("Category"), TEXT("PawnWithCamera"));
				MetaData->SetValue(NewProp_OurMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_OurMesh, TEXT("ModuleRelativePath"), TEXT("PawnWithCamera.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(APawnWithCamera, 3271648397);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APawnWithCamera(Z_Construct_UClass_APawnWithCamera, &APawnWithCamera::StaticClass, TEXT("/Script/GameplayRecipies"), TEXT("APawnWithCamera"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APawnWithCamera);
	void AUMGGameMode::StaticRegisterNativesAUMGGameMode()
	{
		UClass* Class = AUMGGameMode::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "ChangeMenuWidget", (Native)&AUMGGameMode::execChangeMenuWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_AUMGGameMode_ChangeMenuWidget()
	{
		struct UMGGameMode_eventChangeMenuWidget_Parms
		{
			TSubclassOf<UUserWidget>  NewWidgetClass;
		};
		UObject* Outer=Z_Construct_UClass_AUMGGameMode();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("ChangeMenuWidget"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(UMGGameMode_eventChangeMenuWidget_Parms));
			UProperty* NewProp_NewWidgetClass = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewWidgetClass"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(NewWidgetClass, UMGGameMode_eventChangeMenuWidget_Parms), 0x0014000000000080, Z_Construct_UClass_UUserWidget_NoRegister(), UClass::StaticClass());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("UMG Game"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("UMGGameMode.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("This function will deactivate the default menu widget and replace it with some widget\nthat is a subclass of UUserWidget"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUMGGameMode_NoRegister()
	{
		return AUMGGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AUMGGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_GameplayRecipies();
			OuterClass = AUMGGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900288;

				OuterClass->LinkChild(Z_Construct_UFunction_AUMGGameMode_ChangeMenuWidget());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_CurrentWidget = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CurrentWidget"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CurrentWidget, AUMGGameMode), 0x0020080000080008, Z_Construct_UClass_UUserWidget_NoRegister());
				UProperty* NewProp_StartingWidgetClass = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("StartingWidgetClass"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(StartingWidgetClass, AUMGGameMode), 0x0024080000000015, Z_Construct_UClass_UUserWidget_NoRegister(), UClass::StaticClass());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AUMGGameMode_ChangeMenuWidget(), "ChangeMenuWidget"); // 3436910576
				static TCppClassTypeInfo<TCppClassTypeTraits<AUMGGameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("UMGGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("UMGGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(NewProp_CurrentWidget, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CurrentWidget, TEXT("ModuleRelativePath"), TEXT("UMGGameMode.h"));
				MetaData->SetValue(NewProp_CurrentWidget, TEXT("ToolTip"), TEXT("What the current menu widget is (so we can turn it on/off)"));
				MetaData->SetValue(NewProp_StartingWidgetClass, TEXT("Category"), TEXT("UMG Game"));
				MetaData->SetValue(NewProp_StartingWidgetClass, TEXT("ModuleRelativePath"), TEXT("UMGGameMode.h"));
				MetaData->SetValue(NewProp_StartingWidgetClass, TEXT("ToolTip"), TEXT("The widget we want to replace the default one with"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUMGGameMode, 2272191840);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUMGGameMode(Z_Construct_UClass_AUMGGameMode, &AUMGGameMode::StaticClass, TEXT("/Script/GameplayRecipies"), TEXT("AUMGGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUMGGameMode);
	void AUMGPlayerController::StaticRegisterNativesAUMGPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AUMGPlayerController_NoRegister()
	{
		return AUMGPlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_AUMGPlayerController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APlayerController();
			Z_Construct_UPackage__Script_GameplayRecipies();
			OuterClass = AUMGPlayerController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900284;


				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AUMGPlayerController> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("UMGPlayerController.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("UMGPlayerController.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUMGPlayerController, 941565905);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUMGPlayerController(Z_Construct_UClass_AUMGPlayerController, &AUMGPlayerController::StaticClass, TEXT("/Script/GameplayRecipies"), TEXT("AUMGPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUMGPlayerController);
	UPackage* Z_Construct_UPackage__Script_GameplayRecipies()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/GameplayRecipies")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xC250BB2A;
			Guid.B = 0xCC27B68F;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
