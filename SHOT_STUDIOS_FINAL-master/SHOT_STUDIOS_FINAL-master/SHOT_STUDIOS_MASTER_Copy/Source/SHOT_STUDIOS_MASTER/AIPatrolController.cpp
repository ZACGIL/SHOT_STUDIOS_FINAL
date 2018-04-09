// Fill out your copyright notice in the Description page of Project Settings.

#include "SHOT_STUDIOS_MASTER.h"
#include "AIPatrolController.h"
#include "AIPatrol.h"
#include "AIPatrolPoint.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "Kismet/GameplayStatics.h"



AAIPatrolController::AAIPatrolController()
{
	//Initialise blackboard and behavior tree
	BehaviorComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorComp"));
	BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComp"));

	//Initialise blackboard key
	LocationToGoKey = "LocationToGo";
	PlayerKey = "Target";

	CurrentPatrolPoint = 0;
}

void AAIPatrolController::SetPlayerCaught(APawn * Pawn)
{
	if (BlackboardComp)
	{
		BlackboardComp->SetValueAsObject(PlayerKey, Pawn);
	}
}

void AAIPatrolController::Possess(APawn * Pawn)
{
	Super::Possess(Pawn);

	//Get reference to character
	AAIPatrol* AICharacter = Cast<AAIPatrol>(Pawn);

	if (AICharacter)
	{
		if (AICharacter->BehaviourTree->BlackboardAsset)
		{
			BlackboardComp->InitializeBlackboard(*(AICharacter->BehaviourTree->BlackboardAsset));
		}

		//Populate patrol point array
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AAIPatrolPoint::StaticClass(), PatrolPoints);
		BehaviorComp->StartTree(*AICharacter->BehaviourTree);
	}
}