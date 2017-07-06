// Fill out your copyright notice in the Description page of Project Settings.

#include "LightSwitch.h"
#include "Components/PointLightComponent.h"
#include "Components/SphereComponent.h"

// Sets default values
ALightSwitch::ALightSwitch()
{

	DesiredIntensity = 3000.0f;

	PointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("Point Light"));
	PointLight->Intensity = DesiredIntensity;
	PointLight->bVisible = true;
	RootComponent = PointLight;

	Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	Sphere->InitSphereRadius(250.0f);
	Sphere->SetupAttachment(RootComponent);

	FScriptDelegate del1;
	del1.BindUFunction(this, "OnOverlapBegin");
	Sphere->OnComponentBeginOverlap.Add(del1);

	FScriptDelegate del2;
	del2.BindUFunction(this, "OnOverlapEnd");
	Sphere->OnComponentEndOverlap.Add(del2);

}

void ALightSwitch::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		ToggleLight();
	}
}

void ALightSwitch::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		ToggleLight();
	}
}

void ALightSwitch::ToggleLight()
{
	PointLight->ToggleVisibility();
}

