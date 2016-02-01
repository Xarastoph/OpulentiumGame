// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "OpulentiumStructure.generated.h"

UCLASS()
class OPULENTIUM_API AOpulentiumStructure : public ACharacter
{
	GENERATED_BODY()
	
	int HP;

public:	
	// Sets default values for this actor's properties
	AOpulentiumStructure();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	void AddHP(int value);
	int GetHP();
};
