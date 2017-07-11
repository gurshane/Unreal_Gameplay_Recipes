// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "GameFramework/GameModeBase.h"

#include "Blueprint/UserWidget.h"

#include "UMGGameMode.generated.h"

/**
 * 
 */
UCLASS()
class GAMEPLAYRECIPIES_API AUMGGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:

	//This function will deactivate the default menu widget and replace it with some widget
	//that is a subclass of UUserWidget
	UFUNCTION(BlueprintCallable, Category = "UMG Game")
	void ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass);

protected:

	//First function called on start of game mode
	virtual void BeginPlay() override;

	//The widget we want to replace the default one with
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UMG Game")
	TSubclassOf<UUserWidget> StartingWidgetClass;

	//What the current menu widget is (so we can turn it on/off)
	UPROPERTY()
	UUserWidget* CurrentWidget;
	
	
};
