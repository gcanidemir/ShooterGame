// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ShooterAIController.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTER_API AShooterAIController : public AAIController
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
	bool IsDead() const;


private:
	UPROPERTY(EditAnywhere)
	class UBehaviorTree* AIBehavior;

};
