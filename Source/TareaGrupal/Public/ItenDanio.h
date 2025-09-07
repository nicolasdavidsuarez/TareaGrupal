// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ItenBase.h"
#include "ItenDanio.generated.h"

/**
 * 
 */
UCLASS()
class TAREAGRUPAL_API AItenDanio : public AItenBase
{
	GENERATED_BODY()
public:
	FString mensaje;
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Props")
	int danio = 10;
};
