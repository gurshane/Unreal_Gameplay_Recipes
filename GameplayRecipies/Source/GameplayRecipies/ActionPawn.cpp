// Fill out your copyright notice in the Description page of Project Settings.

#include "ActionPawn.h"


// Sets default values
AActionPawn::AActionPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MyCapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Collider"));
	RootComponent = MyCapsuleComponent;
	MyCapsuleComponent->SetCapsuleHalfHeight(88.0f);
	MyCapsuleComponent->SetCapsuleRadius(34.0f);
	MyCapsuleComponent->SetCollisionProfileName(TEXT("Pawn"));

	//Create collider
	/*MySphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Collider"));
	MySphereComponent->InitSphereRadius(40.0f);
	MySphereComponent->SetCollisionProfileName(TEXT("Pawn"));
	RootComponent = MySphereComponent;*/
	
	//Create and display mesh
	UStaticMeshComponent* MyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	MyMesh->SetupAttachment(RootComponent);
	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereVisual(TEXT("/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere"));
	if (SphereVisual.Succeeded())
	{
		MyMesh->SetStaticMesh(SphereVisual.Object);
		MyMesh->SetWorldScale3D(FVector(1.0f));
	}

	//Create spring arm for third person cam
	MySpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	MySpringArmComponent->SetRelativeRotation(FRotator(-45.0f, 0.0f, 0.0f));
	MySpringArmComponent->TargetArmLength = 350.0f;
	MySpringArmComponent->bEnableCameraLag = true;
	MySpringArmComponent->CameraLagSpeed = cameraLagSpeed;
	MySpringArmComponent->SetupAttachment(RootComponent);

	//Create and attach third person cam to spring arm
	//MyThirdPersonCameraMan = GetWorld()->SpawnActor<ACameraMan>(CameraMan, GetActorLocation(), GetActorRotation());
	//MyThirdPersonCameraMan->GetMyCamera()->SetupAttachment(MySpringArmComponent, USpringArmComponent::SocketName);
	MyThirdPersonCam = CreateDefaultSubobject<UCameraComponent>(TEXT("ThirdPersonCam"));
	MyThirdPersonCam->SetupAttachment(MySpringArmComponent, USpringArmComponent::SocketName);
	MyThirdPersonCam->bAutoActivate = true;

	//Create and attach first person cam to root
	MyFirstPersonCam = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCam"));
	MyFirstPersonCam->SetupAttachment(RootComponent);
	MyFirstPersonCam->bAutoActivate = false;

	MovementComponent = CreateDefaultSubobject<UActionPawnMovementComponent>(TEXT("Movement"));
	MovementComponent->UpdatedComponent = RootComponent;

	MyArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
	MyArrow->SetupAttachment(RootComponent);
	MyArrow->ArrowSize = 4.0f;
	MyArrow->bHiddenInGame = false;

	bFindCameraComponentWhenViewTarget = true;

}

// Called when the game starts or when spawned
void AActionPawn::BeginPlay()
{
	Super::BeginPlay();
	
	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

// Called every frame
void AActionPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (isFalling)
	{
		AddMovementInput(FVector(0.0f, 0.0f, -5.0f) * DeltaTime);
	}
}

//USphereComponent* AActionPawn::GetMySphereComponent()
//{
//	return MySphereComponent;
//}

USpringArmComponent* AActionPawn::GetMySpringArmComponent()
{
	return MySpringArmComponent;
}

UCameraComponent* AActionPawn::GetMyFirstPersonCam()
{
	return MyFirstPersonCam;
}

UCameraComponent* AActionPawn::GetMyThirdPersonCam()
{
	return MyThirdPersonCam;
}

void AActionPawn::StartFalling()
{
	isFalling = true;
}

UPawnMovementComponent* AActionPawn::GetMovementComponent() const
{
	return MovementComponent;
}



//ACameraMan* AActionPawn::GetMyFirstPersonCameraMan()
//{
//	return MyFirstPersonCameraMan;
//}
//
//ACameraMan* AActionPawn::GetMyThirdPersonCameraMan()
//{
//	return MyThirdPersonCameraMan;
//}


