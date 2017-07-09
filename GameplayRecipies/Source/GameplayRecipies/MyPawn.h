// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MyPawn.generated.h"

UCLASS()
class GAMEPLAYRECIPIES_API AMyPawn : public APawn
{
	GENERATED_BODY()

public:
	
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* OurVisibleComponent;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Sets default values for this pawn's properties
	AMyPawn();
	
	void Move_XAxis(float value);
	void Move_YAxis(float value);
	void StartGrowing();
	void StopGrowing();

	FVector CurrentVelocity;
	bool bGrowing;
};