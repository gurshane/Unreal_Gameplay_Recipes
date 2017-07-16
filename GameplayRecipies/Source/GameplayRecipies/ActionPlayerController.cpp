// Fill out your copyright notice in the Description page of Project Settings.

#include "ActionPlayerController.h"

void AActionPlayerController::BeginPlayingState()
{
	Super::BeginPlayingState();

	TArray<ACameraMan*> CameraMen;

	for (TActorIterator<ACameraMan> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		CameraMen.Add(*ActorItr);
	}

	ThirdPersonCameraMan = CameraMen[0];
	FirstPersonCameraMan = CameraMen[1];

}

void AActionPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAxis("Horizontal", this, &AActionPlayerController::MoveHorizontal);
	InputComponent->BindAxis("Vertical", this, &AActionPlayerController::MoveVertical);
	InputComponent->BindAxis("Turn", this, &AActionPlayerController::TurnCamera);
	InputComponent->BindAxis("Pitch", this, &AActionPlayerController::PitchCamera);

	InputComponent->BindAction("ToggleCam", IE_Pressed, this, &AActionPlayerController::ToggleCam);
}



void AActionPlayerController::MoveHorizontal(float value)
{
	APawn* MyPawn = GetPawn();

	if (MyPawn)
	{
		UPawnMovementComponent* PawnMovement = MyPawn->GetMovementComponent();
		
		if (PawnMovement)
		{
			FVector ResultVector = MyPawn->GetActorRightVector() * FMath::Clamp<float>(value, -1.0f, 1.0f);
			PawnMovement->AddInputVector(ResultVector);
		}
	}
}

void AActionPlayerController::MoveVertical(float value)
{

	APawn* MyPawn = GetPawn();

	if (MyPawn)
	{
		UPawnMovementComponent* PawnMovement = MyPawn->GetMovementComponent();

		if (PawnMovement)
		{
			FVector ResultVector = MyPawn->GetActorForwardVector() * FMath::Clamp<float>(value, -1.0f, 1.0f);
			PawnMovement->AddInputVector(ResultVector);
		}
	}
}

void AActionPlayerController::TurnCamera(float value)
{
	APawn* MyPawn = GetPawn();

	//If we are controlling a pawn
	if (MyPawn)
	{
		AActionPawn* MyActionPawn = (AActionPawn*)MyPawn;
		
		//If we are controlling an action pawn
		if (MyActionPawn)
		{
			USpringArmComponent* ActorSpringArmComponent = MyActionPawn->GetMySpringArmComponent();


			//Update the spring arm cameras yaw for both first and third person cameras
			if (ActorSpringArmComponent)
			{
				FRotator SpringArmRotator = ActorSpringArmComponent->GetComponentRotation();
				SpringArmRotator.Yaw += value;
				ActorSpringArmComponent->SetWorldRotation(SpringArmRotator);
			}

			//If I am in first person, rotate player
			if (!inThirdPerson)
			{
				/*USpringArmComponent* ActorSpringArmComponent = MyActionPawn->GetMySpringArmComponent();
				
				if (ActorSpringArmComponent)
				{
					FRotator SpringArmRotator = ActorSpringArmComponent->GetComponentRotation();
					SpringArmRotator.Yaw += value;
					ActorSpringArmComponent->SetWorldRotation(SpringArmRotator);
				}*/

				//Update actor rotation

				//TODO:
				//use value as a left or right indicator but not as the amount to change the actor by
				//to do this find the idfference between the spring arm rotator's before and after quaternion and then apply that to the actor
				FRotator MyPawnRotator = MyPawn->GetActorRotation();
				MyPawnRotator.Yaw += value ;
				MyPawn->SetActorRotation(MyPawnRotator);
			}
			//else //If I am in first person, rotate camera and player
			//{
				/*ACameraMan* FirstPersonCameraMan = MyActionPawn->GetMyFirstPersonCameraMan();
				if (FirstPersonCameraMan)
				{*/
					//Update camera rotation
					/*UCameraComponent* ActorCameraComponent = MyActionPawn->GetMyFirstPersonCam();

					if (ActorCameraComponent)
					{
						FRotator CameraRotator = ActorCameraComponent->GetComponentRotation();
						CameraRotator.Yaw = FMath::Clamp<float>(CameraRotator.Yaw + value, minFirstPersonYaw, maxFirstPersonYaw);
						ActorCameraComponent->SetWorldRotation(CameraRotator);
					}*/

					
				//}
			//}

		}
	}
}

void AActionPlayerController::PitchCamera(float value)
{
	APawn* MyPawn = GetPawn();

	//If we are controlling a pawn
	if (MyPawn)
	{
		AActionPawn* MyActionPawn = (AActionPawn*)MyPawn;

		//If we are controlling an action pawn
		if (MyActionPawn)
		{

			//If I am in third person, rotate spring arm around player
			/*if (inThirdPerson)
			{*/
				USpringArmComponent* ActorSpringArmComponent = MyActionPawn->GetMySpringArmComponent();

				if (ActorSpringArmComponent)
				{
					FRotator SpringArmRotator = ActorSpringArmComponent->GetComponentRotation();
					SpringArmRotator.Pitch = FMath::Clamp<float>(SpringArmRotator.Pitch + value, -85.0f, 15.0f);
					ActorSpringArmComponent->SetWorldRotation(SpringArmRotator);
				}
			//}
			//else //If I am in first person, rotate camera
			//{
			//	/*ACameraMan* FirstPersonCameraMan = MyActionPawn->GetMyFirstPersonCameraMan();
			//	if (FirstPersonCameraMan)
			//	{*/
			//		UCameraComponent* ActorCameraComponent = MyActionPawn->GetMyFirstPersonCam();

			//		if (ActorCameraComponent)
			//		{
			//			FRotator CameraRotator = ActorCameraComponent->GetComponentRotation();
			//			CameraRotator.Pitch = FMath::Clamp<float>(CameraRotator.Pitch + value, minFirstPersonPitch, maxFirstPersonPitch);
			//			ActorCameraComponent->SetWorldRotation(CameraRotator);
			//		}
			//	//}
			//}

		}
	}
}

void AActionPlayerController::ToggleCam()
{
	
	AActor* MyPawn = GetPawn();

	if (MyPawn)
	{
		AActionPawn* MyActionPawn = (AActionPawn*) MyPawn;

		if (MyActionPawn)
		{
			USpringArmComponent* ActorSpringArm = MyActionPawn->GetMySpringArmComponent();

			if (ActorSpringArm)
			{
				if (inThirdPerson)
				{
					ActorSpringArm->TargetArmLength = 0;
					ActorSpringArm->SetRelativeRotation(FRotator(0.0f, 0.0f, 0.0f));
				}
				else
				{
					ActorSpringArm->TargetArmLength = 350.0f;
					ActorSpringArm->SetRelativeRotation(FRotator(-45.0f, 0.0f, 0.0f));
				}
				inThirdPerson = !inThirdPerson;

			}
			////UCameraComponent* FirstPersonCam = MyActionPawn->GetMyFirstPersonCam();
			//UCameraComponent* ThirdPersonCam = MyActionPawn->GetMyThirdPersonCam();

			//if (/*FirstPersonCam &&*/ ThirdPersonCam)
			//{
			//	
			//	if (inThirdPerson)
			//	{
			//		//swap to first
			//		/*if (FirstPersonCameraMan->GetMyCamera() == nullptr)
			//		{
			//			FirstPersonCameraMan->SetMyCamera(FirstPersonCam);
			//		}
			//		SetViewTarget(FirstPersonCameraMan);*/

			//	}
			//	else
			//	{
			//		//swap to third
			//		/*if (ThirdPersonCameraMan->GetMyCamera() == nullptr)
			//		{
			//			ThirdPersonCameraMan->SetMyCamera(ThirdPersonCam);
			//		}
			//		SetViewTarget(ThirdPersonCameraMan);*/
			//	}

			//	inThirdPerson = !inThirdPerson;
			//}

		}
	}
}

void AActionPlayerController::DoJump()
{
	AActor* MyPawn = GetPawn();

	if (MyPawn)
	{
		AActionPawn* MyActionPawn = (AActionPawn*)MyPawn;

		if (MyActionPawn)
		{
			UPawnMovementComponent* PawnMovementComponent = MyActionPawn->GetMovementComponent();

			if (PawnMovementComponent)
			{
				PawnMovementComponent->AddInputVector(FVector(0.0f, 0.0f, 50.0f));
				MyActionPawn->StartFalling();
			}
		}
	}
}


