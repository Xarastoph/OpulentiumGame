// Fill out your copyright notice in the Description page of Project Settings.

#include "Opulentium.h"
#include "OpulentiumStructure.h"


// Sets default values
AOpulentiumStructure::AOpulentiumStructure()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AOpulentiumStructure::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOpulentiumStructure::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

void AOpulentiumStructure::AddHP(int value)
{
	HP += value;
}

int AOpulentiumStructure::GetHP()
{
	return HP;
}

