// Fill out your copyright notice in the Description page of Project Settings.


#include "ItenBase.h"

// Sets default values
AItenBase::AItenBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//Crear componentes
	SphereCollision = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	RootComponent = SphereCollision;
	SphereMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SphereMesh"));
	SphereMesh->SetupAttachment(SphereCollision);
}

// Called when the game starts or when spawned
void AItenBase::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AItenBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
//mostrar mensaje en pantalla
void AItenBase::mostrarMensaje(FString msg)
{
			if (GEngine) {
				GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red,
					msg);
			}
}	

void AItenBase::NotifyActorBeginOverlap(AActor* OtherActor)
{
	//Super::NotifyActorBeginOverlap(OtherActor);

	if (OtherActor->Implements<UPlayerInterface>())
	{
		mostrarMensaje(mensaje);
   // IPlayerInterface::Execute_RecibirDanio(OtherActor);
	}

}

