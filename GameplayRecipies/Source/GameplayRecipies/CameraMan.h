// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Camera/CameraComponent.h"

#include "GameFramework/Actor.h"

#include "CameraMan.generated.h"

UCLASS()
class GAMEPLAYRECIPIES_API ACameraMan : public AActor
{
	GENERATED_BODY()
	
public:	
	
	UPROPERTY()
	UCameraComponent* MyCamera;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	// Sets default values for this actor's properties
	ACameraMan();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UCameraComponent* GetMyCamera();
	
	void SetMyCamera(UCameraComponent* GivenCamera);
};
