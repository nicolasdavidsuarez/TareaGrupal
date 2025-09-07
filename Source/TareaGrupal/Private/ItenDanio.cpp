// Fill out your copyright notice in the Description page of Project Settings.


#include "ItenDanio.h"

void AItenDanio::NotifyActorBeginOverlap(AActor* OtherActor)
{
	//Super::NotifyActorBeginOverlap(OtherActor);
	mensaje = FString::Printf(TEXT("Has recibido %d puntos de daño"), danio);
	if (OtherActor->Implements<UPlayerInterface>())
	{
		Super::mostrarMensaje(mensaje);
		// IPlayerInterface::Execute_RecibirDanio(OtherActor);
	}

}
