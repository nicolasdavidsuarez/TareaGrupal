// Fill out your copyright notice in the Description page of Project Settings.


#include "ComponenteSalud.h"

// Sets default values for this component's properties
UComponenteSalud::UComponenteSalud()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	salud = 100;
	// ...
}

void UComponenteSalud::RecibirDanio(int danio)
{
	salud -= danio;
	if (salud <= 0) {
		UE_LOG(LogTemp, Warning, TEXT("Has muerto"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Te quedan %d puntos de vida"), salud);
	}
}


// Called when the game starts
void UComponenteSalud::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UComponenteSalud::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

