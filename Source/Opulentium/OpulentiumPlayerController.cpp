// Fill out your copyright notice in the Description page of Project Settings.

#include "Opulentium.h"
#include "OpulentiumPlayerController.h"

int32 AOpulentiumPlayerController::GetPlayerIndex()
{
	return this->Index;
}

void AOpulentiumPlayerController::SetPlayerIndex(int NewIndex)
{
	Index = NewIndex;
}



