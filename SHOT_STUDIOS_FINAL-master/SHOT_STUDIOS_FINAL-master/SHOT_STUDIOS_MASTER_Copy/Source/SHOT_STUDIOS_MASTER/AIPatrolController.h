// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AIPatrolController.generated.h"

/**
 * 
 */
UCLASS()
class SHOT_STUDIOS_MASTER_API AAIPatrolController : public AAIController
{
	GENERATED_BODY()

public:
	AAIPatrolController();

		//BehaviorTree Component
		class UBehaviorTreeComponent* BehaviorComp;

		//Blackboard Component
		class UBlackboardComponent* BlackboardComp;

		//Blackboard Keys
		UPROPERTY(EditDefaultsOnly, Category = "AI")
			FName LocationToGoKey;

		UPROPERTY(EditDefaultsOnly, Category = "AI")
			FName PlayerKey;

		TArray<AActor*> PatrolPoints;

		virtual void Possess(APawn * Pawn) override;

		int32 CurrentPatrolPoint = 0;


	void SetPlayerCaught(APawn* Pawn);

	FORCEINLINE UBlackboardComponent* GetBlackboardComp() const { return BlackboardComp; }
	FORCEINLINE TArray<AActor *> GetPatrolPoints() const { return PatrolPoints; }
	
	
};
