// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "OpulentiumPlayer.generated.h"

UCLASS()
class OPULENTIUM_API AOpulentiumPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AOpulentiumPlayer();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	UFUNCTION(BlueprintCallable, category = Actor)
	void SetActorOwner(AActor* ActorTarget);
	
};
