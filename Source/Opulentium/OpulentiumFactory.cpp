// Fill out your copyright notice in the Description page of Project Settings.

#include "Opulentium.h"
#include "OpulentiumFactory.h"

void AOpulentiumFactory::BeginPlay()
{
	Super::BeginPlay();
}

void AOpulentiumFactory::Playing()
{
	bIsPlayingAnim = true;
}

void AOpulentiumFactory::NotPlaying()
{
	bIsPlayingAnim = false;
}

bool AOpulentiumFactory::GetPlayAnim()
{
	return bIsPlayingAnim;
}


