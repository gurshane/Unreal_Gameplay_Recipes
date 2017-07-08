// Fill out your copyright notice in the Description page of Project Settings.

#include "CameraDirector.h"

#include "Kismet/GameplayStatics.h"

// Sets default values
ACameraDirector::ACameraDirector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	currentCamIndex = 0;
}

// Called when the game starts or when spawned
void ACameraDirector::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACameraDirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TimeToNextCameraChange -= DeltaTime;

	if (TimeToNextCameraChange <= 0.0f)
	{

		APlayerController* OurPlayerController = UGameplayStatics::GetPlayerController(this, 0);

		FDirectorCam* cameras = CameraList.GetData();
		int32 count = CameraList.Num();
		FDirectorCam currentCam = cameras[currentCamIndex % count];

		OurPlayerController->SetViewTargetWithBlend(currentCam.GetCamera(), currentCam.GetSmoothBlendTime());
		currentCamIndex++;
		TimeToNextCameraChange += currentCam.GetTimeToNextCameraChange();
	}

}



