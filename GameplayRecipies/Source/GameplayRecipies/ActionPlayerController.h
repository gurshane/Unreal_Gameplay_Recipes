// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ActionPawn.h"
#include "EngineUtils.h"
#include "Engine.h"
#include "EngineGlobals.h"

#include "GameFramework/PlayerController.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PawnMovementComponent.h"

#include "ActionPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class GAMEPLAYRECIPIES_API AActionPlayerController : public APlayerController
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, Category="Action Controller")
	bool inThirdPerson = true;

	UPROPERTY(EditAnywhere, Category = "Third Person Camera")
	float minThirdPersonPitch;

	UPROPERTY(EditAnywhere, Category = "Third Person Camera")
	float maxThirdPersonPitch;

	UPROPERTY(EditAnywhere, Category = "First Person Camera")
	float minFirstPersonPitch;

	UPROPERTY(EditAnywhere, Category = "First Person Camera")
	float maxFirstPersonPitch;

	UPROPERTY(EditAnywhere, Category = "First Person Camera")
	float minFirstPersonYaw;

	UPROPERTY(EditAnywhere, Category = "First Person Camera")
	float maxFirstPersonYaw;

	UPROPERTY(EditAnywhere, Category = "Camera Crew")
	ACameraMan* FirstPersonCameraMan;

	UPROPERTY(EditAnywhere, Category = "Camera Crew")
	ACameraMan* ThirdPersonCameraMan;
	
protected:

	virtual void BeginPlayingState() override;

	virtual void SetupInputComponent() override;
	
public:

	UFUNCTION()
	void MoveHorizontal(float value);

	UFUNCTION()
	void MoveVertical(float value);

	UFUNCTION()
	void TurnCamera(float value);

	UFUNCTION()
	void PitchCamera(float value);

	void ToggleCam();

};
