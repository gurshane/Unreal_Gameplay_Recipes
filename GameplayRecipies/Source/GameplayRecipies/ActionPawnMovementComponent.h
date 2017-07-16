// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PawnMovementComponent.h"
#include "ActionPawnMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class GAMEPLAYRECIPIES_API UActionPawnMovementComponent : public UPawnMovementComponent
{
	GENERATED_BODY()

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;
	
};
