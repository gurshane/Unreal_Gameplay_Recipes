// Fill out your copyright notice in the Description page of Project Settings.

#include "ActionPlayerController.h"

void AActionPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAxis("Horizontal", this, &AActionPlayerController::MoveHorizontal);
	InputComponent->BindAxis("Vertical", this, &AActionPlayerController::MoveVertical);
}


void AActionPlayerController::MoveHorizontal(float value)
{
	APawn* MyPawn = GetPawn();

	if (MyPawn)
	{
		UPawnMovementComponent* PawnMovement = MyPawn->GetMovementComponent();
		
		if (PawnMovement)
		{
			FVector ResultVector = MyPawn->GetActorRightVector() * FMath::Clamp<float>(value, -1.0f, 1.0f);
			PawnMovement->AddInputVector(MyPawn->GetActorForwardVector());
		}
	}
}

void AActionPlayerController::MoveVertical(float value)
{

	APawn* MyPawn = GetPawn();

	if (MyPawn)
	{
		UPawnMovementComponent* PawnMovement = MyPawn->GetMovementComponent();

		if (PawnMovement)
		{
			FVector ResultVector = MyPawn->GetActorForwardVector() * FMath::Clamp<float>(value, -1.0f, 1.0f);
			PawnMovement->AddInputVector(MyPawn->GetActorRightVector());
		}
	}
}


