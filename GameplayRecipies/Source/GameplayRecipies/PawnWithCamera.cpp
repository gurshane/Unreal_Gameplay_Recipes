// Fill out your copyright notice in the Description page of Project Settings.

#include "PawnWithCamera.h"


// Sets default values
APawnWithCamera::APawnWithCamera()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	OurCameraSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraArm"));
	OurCameraSpringArm->SetupAttachment(RootComponent);
	OurCameraSpringArm->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, 50.0f), FRotator(-60.0f, 0.0f, 0.0f));
	OurCameraSpringArm->TargetArmLength = 400.0f;
	OurCameraSpringArm->bEnableCameraLag = true;
	OurCameraSpringArm->CameraLagSpeed = 3.0f;

	OurCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	OurCamera->SetupAttachment(OurCameraSpringArm, USpringArmComponent::SocketName);

	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

// Called when the game starts or when spawned
void APawnWithCamera::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APawnWithCamera::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APawnWithCamera::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("ZoomIn", IE_Pressed, this, &APawnWithCamera::ZoomIn);
	PlayerInputComponent->BindAction("ZoomIn", IE_Released, this, &APawnWithCamera::ZoomOut);

	PlayerInputComponent->BindAxis("MoveX", this, &APawnWithCamera::MoveForward);
	PlayerInputComponent->BindAxis("MoveY", this, &APawnWithCamera::MoveRight);
	PlayerInputComponent->BindAxis("Pitch", this, &APawnWithCamera::PitchCamera);
	PlayerInputComponent->BindAxis("Yaw", this, &APawnWithCamera::YawCamera);
}

void APawnWithCamera::MoveForward(float value)
{
	MovementInput.X = FMath::Clamp<float>(value, -1.0f, 1.0f);
}

void APawnWithCamera::MoveRight(float value)
{
	MovementInput.Y = FMath::Clamp<float>(value, -1.0f, 1.0f); 
}

void APawnWithCamera::PitchCamera(float value)
{
	CameraInput.Y = value;
}

void APawnWithCamera::YawCamera(float value)
{
	CameraInput.X = value;
}

void APawnWithCamera::ZoomIn()
{
	bZoomingIn = true;
}

void APawnWithCamera::ZoomOut()
{
	bZoomingIn = false;
}
