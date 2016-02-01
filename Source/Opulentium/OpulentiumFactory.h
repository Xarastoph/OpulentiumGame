// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "OpulentiumStructure.h"
#include "OpulentiumFactory.generated.h"

/**
 * 
 */
UCLASS()
class OPULENTIUM_API AOpulentiumFactory : public AOpulentiumStructure
{
	GENERATED_BODY()

		bool bIsPlayingAnim=false;

public:	
	
	virtual void BeginPlay() override;
	UFUNCTION(BlueprintCallable, Category = "Factory")
	void NotPlaying();
	UFUNCTION(BlueprintCallable, Category = "Factory")
	void Playing();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Factory")
	bool GetPlayAnim();
};
