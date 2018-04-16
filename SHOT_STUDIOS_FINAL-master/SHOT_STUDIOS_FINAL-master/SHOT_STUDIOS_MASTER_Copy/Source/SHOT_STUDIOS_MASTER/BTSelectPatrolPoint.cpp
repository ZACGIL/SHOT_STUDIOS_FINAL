// Fill out your copyright notice in the Description page of Project Settings.

#include "BTSelectPatrolPoint.h"
#include "AIPatrolPoint.h"
#include "AIPatrolController.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UBTSelectPatrolPoint::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	return EBTNodeResult::Type();

	AAIPatrolController* AICon = Cast <AAIPatrolController>(OwnerComp.GetAIOwner());

	if (AICon)
	{
		//Get Blackboard Component
		UBlackboardComponent * BlackboardComp = AICon->GetBlackboardComp();

		AAIPatrolPoint* CurrentPoint = Cast <AAIPatrolPoint>(BlackboardComp->GetValueAsObject("LocationToGo"));
	
		TArray<AActor*> AvailablePatrolPoints = AICon->GetPatrolPoints();

		AAIPatrolPoint * NextPatrolPoint = nullptr;

		UE_LOG(LogTemp, Warning, TEXT("AAAAA"));
		
		if (AICon->CurrentPatrolPoint != AvailablePatrolPoints.Num() - 1)
		{
			NextPatrolPoint = Cast<AAIPatrolPoint>(AvailablePatrolPoints[++AICon->CurrentPatrolPoint]);
		}
		else //If no more points to go to
		{
			NextPatrolPoint = Cast<AAIPatrolPoint>(AvailablePatrolPoints[0]);
			AICon->CurrentPatrolPoint = 0;
		}

		BlackboardComp->SetValueAsObject("LocationToGo", NextPatrolPoint);

		return EBTNodeResult::Succeeded;
	
	}

	UE_LOG(LogTemp, Warning, TEXT("BBBBB"));

	return EBTNodeResult::Failed;
}
