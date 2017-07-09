// Fill out your copyright notice in the Description page of Project Settings.

#include "MyPawn.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values
AMyPawn::AMyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	AutoPossessPlayer = EAutoReceiveInput::Player0;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	UCameraComponent* OurCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	OurVisibleComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	OurCamera->SetupAttachment(RootComponent);
	OurVisibleComponent->SetupAttachment(RootComponent);

	OurCamera->SetRelativeLocation(FVector(-250.0f, 0.0f, 250.0f));
	OurCamera->SetRelativeRotation(FRotator(-45.0f, 0.0f, 0.0f));
}

// Called when the game starts or when spawned
void AMyPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float CurrentScale = OurVisibleComponent->GetComponentScale().X;
	if (bGrowing)
	{
		CurrentScale += DeltaTime;
	}
	else
	{
		CurrentScale -= (DeltaTime * 0.8f);
	}

	CurrentScale = FMath::Clamp(CurrentScale, 1.0f, 3.0f);
	OurVisibleComponent->SetWorldScale3D(FVector(CurrentScale));

	if (!CurrentVelocity.IsZero())
	{
		FVector NewLocation = GetActorLocation() + (CurrentVelocity * DeltaTime);
		SetActorLocation(NewLocation);
	}
}

// Called to bind functionality to input
void AMyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveX", this, &AMyPawn::Move_XAxis);
	PlayerInputComponent->BindAxis("MoveY", this, &AMyPawn::Move_YAxis);

	PlayerInputComponent->BindAction("Grow", IE_Pressed, this, &AMyPawn::StartGrowing);
	PlayerInputComponent->BindAction("Grow", IE_Released, this, &AMyPawn::StopGrowing);

}

void AMyPawn::Move_XAxis(float value)
{
	CurrentVelocity.X = FMath::Clamp(value, -1.0f, 1.0f) * 100.0f;
	
}

void AMyPawn::Move_YAxis(float value)
{
	CurrentVelocity.Y = FMath::Clamp(value, -1.0f, 1.0f) * 100.0f;
}

void AMyPawn::StartGrowing()
{
	bGrowing = true;
}

void AMyPawn::StopGrowing()
{
	bGrowing = false;
}

