// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LightSwitch.generated.h"

UCLASS()
class GAMEPLAYRECIPIES_API ALightSwitch : public AActor
{
	GENERATED_BODY()
	
public:

	UPROPERTY(VisibleAnywhere, Category = "Switch Variables")
	float DesiredIntensity;

public:	

	// Sets default values for this actor's properties
	ALightSwitch();
	
	UPROPERTY(VisibleAnywhere, Category = "Switch Components")
		class UPointLightComponent* PointLight;

	UPROPERTY(VisibleAnywhere, Category = "Switch Components")
		class USphereComponent* Sphere;

	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
		void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION()
		void ToggleLight();
};
