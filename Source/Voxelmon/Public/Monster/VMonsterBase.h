// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "VMonsterBase.generated.h"


class UAnimMontage;


UCLASS()
class VOXELMON_API AVMonsterBase : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AVMonsterBase();

	// Getters
	UFUNCTION(BlueprintCallable)
	bool GetDead() { return bDead; }

	UFUNCTION(BlueprintCallable)
	void Die();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:
	// Stat
	UPROPERTY(EditDefaultsOnly, Category="Monster|Base")
	bool bDead;

	UPROPERTY(EditDefaultsOnly, Category = "Monster|Anim")
	UAnimMontage* DeathAnim;
};
