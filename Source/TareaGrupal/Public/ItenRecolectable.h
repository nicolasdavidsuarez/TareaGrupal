// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItenBase.h"
#include "ItenRecolectable.generated.h"

/**
 * 
 */
UCLASS()
class TAREAGRUPAL_API AItenRecolectable : public AItenBase
{
	GENERATED_BODY()
public:

	AItenRecolectable();	

	FString mensaje="Recolectaste";
	int cantidad;
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
};
