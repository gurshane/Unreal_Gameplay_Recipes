// Fill out your copyright notice in the Description page of Project Settings.

#include "CollidingPawnMovementComponent.h"


void UCollidingPawnMovementComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//If there is no pawn owner, or the component is not meant to be updated then skip updating it
	if (!PawnOwner || !UpdatedComponent || ShouldSkipUpdate(DeltaTime))
	{
		return;
	}

	//Consume the input vector from the pawn
	FVector DesiredMovementThisFrame = ConsumeInputVector().GetClampedToMaxSize(1.0f) * DeltaTime * 150.0f;

	//As long as we are moving some amount
	if (!DesiredMovementThisFrame.IsNearlyZero())
	{
		FHitResult Hit;
		//Moves pawn while respecting physical barriers
		SafeMoveUpdatedComponent(DesiredMovementThisFrame, UpdatedComponent->GetComponentRotation(), true, Hit);

		//If we hit something move along it
		if (Hit.IsValidBlockingHit())
		{
			//Handles moving along a surface
			SlideAlongSurface(DesiredMovementThisFrame, 1.0f - Hit.Time, Hit.Normal, Hit);
		}
	}
}


