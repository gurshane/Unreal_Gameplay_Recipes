// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ConstructorHelpers.h"
#include "CameraMan.h"
#include "Engine/World.h"

#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"

#include "Camera/CameraComponent.h"

#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/Pawn.h"

#include "ActionPawn.generated.h"

UCLASS()
class GAMEPLAYRECIPIES_API AActionPawn : public APawn
{
	GENERATED_BODY()

public:
	/*
	UPROPERTY(EditAnywhere, Category="Action Pawn")
	TSubclassOf<ACameraMan> CameraMan;*/

	UPROPERTY()
	USphereComponent* MySphereComponent;

	UPROPERTY()
	USpringArmComponent* MySpringArmComponent;

	UPROPERTY()
	UCameraComponent* MyThirdPersonCam;

	UPROPERTY()
	UCameraComponent* MyFirstPersonCam;

	//UPROPERTY()
	//ACameraMan* MyThirdPersonCameraMan;

	//UPROPERTY()
	//ACameraMan* MyFirstPersonCameraMan;

	UPROPERTY(EditAnywhere, Category="Action Pawn")
	float cameraLagSpeed;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	// Sets default values for this pawn's properties
	AActionPawn();

	USphereComponent* GetMySphereComponent();

	USpringArmComponent* GetMySpringArmComponent();

	UCameraComponent* GetMyThirdPersonCam();

	UCameraComponent* GetMyFirstPersonCam();

	//ACameraMan* GetMyThirdPersonCameraMan();

	//ACameraMan* GetMyFirstPersonCameraMan();

};
