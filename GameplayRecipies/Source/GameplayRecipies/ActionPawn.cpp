// Fill out your copyright notice in the Description page of Project Settings.

#include "ActionPawn.h"


// Sets default values
AActionPawn::AActionPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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

}


