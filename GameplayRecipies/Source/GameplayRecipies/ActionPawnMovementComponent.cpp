// Fill out your copyright notice in the Description page of Project Settings.

#include "ActionPawnMovementComponent.h"

void UActionPawnMovementComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!PawnOwner || !UpdatedComponent || ShouldSkipUpdate(DeltaTime))
	{
		return;
	}

	FVector MovementInput = ConsumeInputVector().GetClampedToMaxSize(1.0f) * DeltaTime * 200.0f;

	if (!MovementInput.IsNearlyZero())
	{
		FHitResult Hit;

		SafeMoveUpdatedComponent(MovementInput, UpdatedComponent->GetComponentRotation(), true, Hit);

		if (Hit.IsValidBlockingHit())
		{
			SlideAlongSurface(MovementInput, 1.0f - Hit.Time, Hit.Normal, Hit);
		}
	}
}