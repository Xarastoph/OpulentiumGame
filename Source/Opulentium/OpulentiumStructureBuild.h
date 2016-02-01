// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "OpulentiumStructureBuild.generated.h"

UCLASS()
class OPULENTIUM_API AOpulentiumStructureBuild : public ACharacter
{
	GENERATED_BODY()

		float MatScalar;

public:
	// Sets default values for this character's properties
	AOpulentiumStructureBuild();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	void SetScalar(float value);
	float GetScalar();
};
