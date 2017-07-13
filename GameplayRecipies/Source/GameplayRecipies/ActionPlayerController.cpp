// Fill out your copyright notice in the Description page of Project Settings.

#include "ActionPlayerController.h"

void AActionPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAxis("Horizontal", this, &AActionPlayerController::MoveHorizontal);
	InputComponent->BindAxis("Vertical", this, &AActionPlayerController::MoveVertical);
	
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


