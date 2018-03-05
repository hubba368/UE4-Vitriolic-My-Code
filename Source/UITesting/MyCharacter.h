// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerHUD.h"
#include "EngineUtils.h"
#include "MyCharacter.generated.h"

UCLASS()
class UITESTING_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

private:
	// Sets default values for this character's properties
	AMyCharacter();

	UPROPERTY(EditAnywhere, Category = "Player UI")
	float CurrentHealth;

	UPROPERTY(EditAnywhere, Category = "Player UI")
	float InitialHealth;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void UpdateCurrentHealth(float value);

public:	

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(EditAnywhere, Category = "Player UI")
	class APlayerHUD *playerHUD;


	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Player UI")
	float GetInitialHealth();

	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "Player UI")
	float GetCurrentHealth();
	
};

