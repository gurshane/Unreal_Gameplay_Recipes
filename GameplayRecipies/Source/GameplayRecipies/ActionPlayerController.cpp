// Fill out your copyright notice in the Description page of Project Settings.

#include "ActionPlayerController.h"

void AActionPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAxis("Horizontal", this, &AActionPlayerController::MoveHorizontal);
	InputComponent->BindAxis("Vertical", this, &AActionPlayerController::MoveVertical);
	InputComponent->BindAxis("Turn", this, &AActionPlayerController::TurnCamera);
	InputComponent->BindAxis("Pitch", this, &AActionPlayerController::PitchCamera);

	InputComponent->BindAction("ToggleCam", IE_Pressed, this, &AActionPlayerController::ToggleCam);
}


void AActionPlayerController::MoveHorizontal(float value)
{
	APawn* MyPawn = GetPawn();

	if (MyPawn && (value > 0.0f))
	{
		UPawnMovementComponent* PawnMovement = MyPawn->GetMovementComponent();
		
		if (PawnMovement)
		{
			FVector ResultVector = MyPawn->GetActorRightVector() * FMath::Clamp<float>(value, -1.0f, 1.0f);
			PawnMovement->AddInputVector(ResultVector);
		}
	}
}

void AActionPlayerController::MoveVertical(float value)
{

	APawn* MyPawn = GetPawn();

	if (MyPawn && (value > 0.0f))
	{
		UPawnMovementComponent* PawnMovement = MyPawn->GetMovementComponent();

		if (PawnMovement)
		{
			FVector ResultVector = MyPawn->GetActorForwardVector() * FMath::Clamp<float>(value, -1.0f, 1.0f);
			PawnMovement->AddInputVector(ResultVector);
		}
	}
}

void AActionPlayerController::TurnCamera(float value)
{
	APawn* MyPawn = GetPawn();

	//If we are controlling a pawn
	if (MyPawn)
	{
		AActionPawn* MyActionPawn = (AActionPawn*)MyPawn;
		
		//If we are controlling an action pawn
		if (MyActionPawn)
		{

			//If I am in third person, rotate spring arm around player
			if (inThirdPerson)
			{
				USpringArmComponent* ActorSpringArmComponent = MyActionPawn->GetMySpringArmComponent();
				
				if (ActorSpringArmComponent)
				{
					FRotator SpringArmRotator = ActorSpringArmComponent->GetComponentRotation();
					SpringArmRotator.Yaw += value;
					ActorSpringArmComponent->SetWorldRotation(SpringArmRotator);
				}
			}
			else //If I am in first person, rotate camera
			{
				UCameraComponent* ActorCameraComponent = MyActionPawn->GetMyFirstPersonCam();

				if (ActorCameraComponent)
				{
					FRotator CameraRotator = ActorCameraComponent->GetComponentRotation();
					CameraRotator.Yaw = FMath::Clamp<float>(CameraRotator.Yaw + value, minFirstPersonYaw, maxFirstPersonYaw);
					ActorCameraComponent->SetWorldRotation(CameraRotator);
				}
			}

		}
	}
}

void AActionPlayerController::PitchCamera(float value)
{
	APawn* MyPawn = GetPawn();

	//If we are controlling a pawn
	if (MyPawn)
	{
		AActionPawn* MyActionPawn = (AActionPawn*)MyPawn;

		//If we are controlling an action pawn
		if (MyActionPawn)
		{

			//If I am in third person, rotate spring arm around player
			if (inThirdPerson)
			{
				USpringArmComponent* ActorSpringArmComponent = MyActionPawn->GetMySpringArmComponent();

				if (ActorSpringArmComponent)
				{
					FRotator SpringArmRotator = ActorSpringArmComponent->GetComponentRotation();
					SpringArmRotator.Pitch = FMath::Clamp<float>(SpringArmRotator.Pitch + value, -85.0f, 15.0f);
					ActorSpringArmComponent->SetWorldRotation(SpringArmRotator);
				}
			}
			else //If I am in first person, rotate camera
			{
				UCameraComponent* ActorCameraComponent = MyActionPawn->GetMyFirstPersonCam();

				if (ActorCameraComponent)
				{
					FRotator CameraRotator = ActorCameraComponent->GetComponentRotation();
					CameraRotator.Pitch = FMath::Clamp<float>(CameraRotator.Pitch + value, minFirstPersonPitch, maxFirstPersonPitch);
					ActorCameraComponent->SetWorldRotation(CameraRotator);
				}
			}

		}
	}
}

void AActionPlayerController::ToggleCam()
{
	

	if (inThirdPerson)
	{
		//swap to first
		
	}
	else
	{
		//swap to third
	}

	inThirdPerson = !inThirdPerson;
}


