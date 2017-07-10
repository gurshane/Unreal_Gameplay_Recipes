// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ConstructorHelpers.h"
#include "CollidingPawnMovementComponent.h"

#include "GameFramework/Pawn.h"
#include "GameFramework/SpringArmComponent.h"

#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"

#include "Camera/CameraComponent.h"

#include "Particles/ParticleSystemComponent.h"

#include "CollidingPawn.generated.h"

UCLASS()
class GAMEPLAYRECIPIES_API ACollidingPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties

	UPROPERTY(EditAnywhere, Category="Colliding Pawn")
	float sprintSpeed;

	float sprintModifier;

	UParticleSystemComponent* OurParticleSystem;

	class UCollidingPawnMovementComponent* OurMovementComponent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//enables other classes to access the movement component our pawn is using
	//in this example since we are extending the default movement componenet, we need to return the new subclass not the old one
	virtual UPawnMovementComponent* GetMovementComponent() const override;

	ACollidingPawn();

	void MoveForward(float value);
	
	void MoveRight(float value);

	void Turn(float value);

	void ParticleToggle();

	void StartSprinting();

	void StopSprinting();
	
};
