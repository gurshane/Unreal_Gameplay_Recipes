// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

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
	
protected:

	virtual void SetupInputComponent() override;
	
public:

	void MoveHorizontal(float value);

	void MoveVertical(float value);
};
