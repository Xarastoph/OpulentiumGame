// Fill out your copyright notice in the Description page of Project Settings.

#include "Opulentium.h"
#include "OpulentiumStructureBuild.h"


// Sets default values
AOpulentiumStructureBuild::AOpulentiumStructureBuild()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AOpulentiumStructureBuild::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOpulentiumStructureBuild::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );
}

void AOpulentiumStructureBuild::SetScalar(float value)
{
}

