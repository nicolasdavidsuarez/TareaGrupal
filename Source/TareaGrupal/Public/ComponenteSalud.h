// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ComponenteSalud.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )

class TAREAGRUPAL_API UComponenteSalud : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UComponenteSalud();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Salud")
	int salud;
	void RecibirDanio(int danio);
	int GetSalud() const { return salud; }
	void SetSalud(int nuevaSalud) { salud = nuevaSalud; }

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
};
