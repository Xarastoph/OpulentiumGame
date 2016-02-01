// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerController.h"
#include "OpulentiumPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class OPULENTIUM_API AOpulentiumPlayerController : public APlayerController
{
	GENERATED_BODY()

	int32 Index = 0;
	
public:

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Opulentium")
	int32 GetPlayerIndex();

	void SetPlayerIndex(int NewIndex);
	
	
	
};
