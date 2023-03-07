// Fill out your copyright notice in the Description page of Project Settings.


#include "Monster/VMonsterBase.h"
#include "Animation/AnimMontage.h"
#include "GameFramework/MovementComponent.h"

// Sets default values
AVMonsterBase::AVMonsterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// State
	bDead = false;
}

// Called when the game starts or when spawned
void AVMonsterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVMonsterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AVMonsterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AVMonsterBase::Die()
{
	// !TODO implement checks, implement health system, fix movement
	bDead = true;

	// FX
	PlayAnimMontage(DeathAnim, 1.0f, "start_1");

}

