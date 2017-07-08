// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CameraDirector.generated.h"

USTRUCT()
struct FDirectorCam
{
	GENERATED_BODY();

public:
	UPROPERTY(EditAnywhere)
	AActor* Camera;

	UPROPERTY(EditAnywhere)
	float TimeToNextCameraChange;

	UPROPERTY(EditAnywhere)
	float SmoothBlendTime;

	FDirectorCam()
	{
		Camera = nullptr;
		TimeToNextCameraChange = 0.0f;
		SmoothBlendTime = 0.0f;
	}

	AActor* GetCamera()
	{
		return Camera;
	}

	float GetTimeToNextCameraChange()
	{
		return TimeToNextCameraChange;
	}

	float GetSmoothBlendTime()
	{
		return SmoothBlendTime;
	}
};


UCLASS()
class GAMEPLAYRECIPIES_API ACameraDirector : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACameraDirector();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	TArray<FDirectorCam> CameraList;

	UPROPERTY(EditAnywhere)
	float TimeToNextCameraChange;
	
	int32 currentCamIndex;
};
