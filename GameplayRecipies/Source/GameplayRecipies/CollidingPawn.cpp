// Fill out your copyright notice in the Description page of Project Settings.

#include "CollidingPawn.h"

// Sets default values
ACollidingPawn::ACollidingPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	sprintModifier = 1.0f;
	sprintSpeed = 5.0f;

	//Create sphere collider and make it the root component
	USphereComponent* SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
	RootComponent = SphereComponent;
	SphereComponent->InitSphereRadius(40.0f);
	SphereComponent->SetCollisionProfileName(TEXT("Pawn"));

	//Create a mesh and make it a child of the root
	UStaticMeshComponent* SphereVisual = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Visual"));
	SphereVisual->SetupAttachment(RootComponent);

	//Use constructor helpers to get the mesh(if it exists) and attach it to this pawn
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereVisualAsset(TEXT("/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere"));
	if (SphereVisualAsset.Succeeded())
	{
		SphereVisual->SetStaticMesh(SphereVisualAsset.Object);
		SphereVisual->SetRelativeLocation(FVector(0.0f, 0.0f, -40.0f));
		SphereVisual->SetWorldScale3D(FVector(0.8f));
	}

	//Create a particle system and initialize it with a pre-created template
	OurParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particles"));
	OurParticleSystem->SetupAttachment(SphereVisual);
	OurParticleSystem->bAutoActivate = false;
	OurParticleSystem->SetRelativeLocation(FVector(-20.0f, 0.0f, 20.0f));
	
	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("/Game/StarterContent/Particles/P_Fire.P_Fire"));
	if (ParticleAsset.Succeeded())
	{
		OurParticleSystem->SetTemplate(ParticleAsset.Object);
	}

	USpringArmComponent* SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->RelativeRotation = FRotator(-45.0f, 0.0f, 0.0f);
	SpringArm->TargetArmLength = 400.0f;
	SpringArm->bEnableCameraLag = true;
	SpringArm->CameraLagSpeed = 3.0f;

	UCameraComponent* Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);

	OurMovementComponent = CreateDefaultSubobject<UCollidingPawnMovementComponent>(TEXT("CustomMovementComponent"));
	OurMovementComponent->UpdatedComponent = RootComponent; // specify which coomponent to move
	//This component does not require an attachment to the root component because it doesnt need to exist in the scene. It simply needs to know
	//who to do work to

	AutoPossessPlayer = EAutoReceiveInput::Player0;
	
}

// Called when the game starts or when spawned
void ACollidingPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACollidingPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//"Gravity"
	OurMovementComponent->AddInputVector(GetActorUpVector() * -1.0f);
}

// Called to bind functionality to input
void ACollidingPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("ToggleParticle", IE_Pressed, this, &ACollidingPawn::ParticleToggle);
	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &ACollidingPawn::StartSprinting);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &ACollidingPawn::StopSprinting);
	
	PlayerInputComponent->BindAxis("MoveX", this, &ACollidingPawn::MoveForward);
	PlayerInputComponent->BindAxis("MoveY", this, &ACollidingPawn::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &ACollidingPawn::Turn);
}

UPawnMovementComponent* ACollidingPawn::GetMovementComponent() const
{
	return OurMovementComponent;
}

void ACollidingPawn::MoveForward(float value)
{
	//If our movement component exists and the updated component is still the root component
	if (OurMovementComponent && (OurMovementComponent->UpdatedComponent == RootComponent))
	{
		//Adds to an existing input vector until that vector is consumed at which point it is reset
		OurMovementComponent->AddInputVector(GetActorForwardVector() * value * sprintModifier);
	}
}

void ACollidingPawn::MoveRight(float value)
{
	if (OurMovementComponent && (OurMovementComponent->UpdatedComponent == RootComponent))
	{
		OurMovementComponent->AddInputVector(GetActorRightVector() * value * sprintModifier);
	}
}

void ACollidingPawn::Turn(float value)
{
	//add the turn amount to the yaw and set the actor rotation
	FRotator NewRotation = GetActorRotation();
	NewRotation.Yaw += value;
	SetActorRotation(NewRotation);
}

void ACollidingPawn::ParticleToggle()
{
	if (OurParticleSystem && OurParticleSystem->Template)
	{
		OurParticleSystem->ToggleActive();
	}
}

void ACollidingPawn::StartSprinting()
{
	sprintModifier *= sprintSpeed;
}

void ACollidingPawn::StopSprinting()
{
	sprintModifier = 1.0f;
}

