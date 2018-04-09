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

		//BehaviorTree Component
		UBehaviorTree* BehaviorTreeComp;

		//Blackboard Component
		UBlackboardComponent* BlackboardComp;

		//Blackboard Keys
		UPROPERTY(EditDefaultsOnly, Category = AI)
			FName LocationToGoKey;

		UPROPERTY(EditDefaultsOnly, Category = AI)
			FName PlayerKey;

public:

	AAIPatrolController();

	FORCEINLINE UBlackboardComponent* GetBlackboardComp() const { return BlackboardComp; }
	
	
};
