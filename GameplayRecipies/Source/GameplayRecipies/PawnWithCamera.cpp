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

	OurMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	OurMesh->SetupAttachment(RootComponent);

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

	//If we are pressing the zoom in button
	if (bZoomingIn)
	{
		//zoom in, in 1/2 a second
		ZoomFactor += (DeltaTime / 0.5f);
	}
	else
	{
		//otherwise zoom out in 1/4 a second
		ZoomFactor -= (DeltaTime / 0.25f);
	}
	ZoomFactor = FMath::Clamp<float>(ZoomFactor, 0.0f, 1.0f);
	OurCamera->FieldOfView = FMath::Lerp<float>(90.0f, 60.0f, ZoomFactor); //lerp between 90 and 60 degree FOV by ZoomFactor
	OurCameraSpringArm->TargetArmLength = FMath::Lerp<float>(400.0f, 300.0f, ZoomFactor); //bring the camera closer as well to enhance zoom effect

	//Update spring arm rotation with mouse input
	FRotator ArmRotation = OurCameraSpringArm->GetComponentRotation();
	ArmRotation.Pitch = FMath::Clamp<float>(ArmRotation.Pitch + CameraInput.Y, -80.0f, -15.0f);
	ArmRotation.Yaw = FMath::Clamp<float>(ArmRotation.Yaw + CameraInput.X, -80.0f, -15.0f);
	OurCameraSpringArm->SetWorldRotation(ArmRotation);

	if (!MovementInput.IsZero())
	{
		MovementInput = MovementInput.SafeNormal() * 100.0f;
		FVector NewLocation = GetActorLocation();
		NewLocation += GetActorForwardVector() * MovementInput.X * DeltaTime;
		NewLocation += GetActorRightVector() * MovementInput.Y * DeltaTime;
		SetActorLocation(NewLocation);
	}

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
