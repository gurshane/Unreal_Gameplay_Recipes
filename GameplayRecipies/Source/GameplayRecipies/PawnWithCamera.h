// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Camera/CameraComponent.h"

#include "Components/InputComponent.h"

#include "GameFramework/Pawn.h"
#include "GameFramework/SpringArmComponent.h"

#include "PawnWithCamera.generated.h"

UCLASS()
class GAMEPLAYRECIPIES_API APawnWithCamera : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	
	FVector2D MovementInput;
	FVector2D CameraInput;

	float ZoomFactor;
	
	bool bZoomingIn;

protected:

	USpringArmComponent* OurCameraSpringArm;

	UCameraComponent* OurCamera;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	APawnWithCamera();

	void MoveForward(float value);

	void MoveRight(float value);

	void PitchCamera(float value);

	void YawCamera(float value);

	void ZoomIn();

	void ZoomOut();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
