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
	ENGINE_API class UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API class UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();

	GAMEPLAYRECIPIES_API class UScriptStruct* Z_Construct_UScriptStruct_FDirectorCam();
	GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_ACameraDirector_NoRegister();
	GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_ACameraDirector();
	GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_AGameplayRecipiesGameModeBase_NoRegister();
	GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_AGameplayRecipiesGameModeBase();
	GAMEPLAYRECIPIES_API class UFunction* Z_Construct_UFunction_ALightSwitch_OnOverlapBegin();
	GAMEPLAYRECIPIES_API class UFunction* Z_Construct_UFunction_ALightSwitch_OnOverlapEnd();
	GAMEPLAYRECIPIES_API class UFunction* Z_Construct_UFunction_ALightSwitch_ToggleLight();
	GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_ALightSwitch_NoRegister();
	GAMEPLAYRECIPIES_API class UClass* Z_Construct_UClass_ALightSwitch();
	GAMEPLAYRECIPIES_API class UPackage* Z_Construct_UPackage__Script_GameplayRecipies();
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
	UPackage* Z_Construct_UPackage__Script_GameplayRecipies()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/GameplayRecipies")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x3057F057;
			Guid.B = 0xA4543CAE;
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
