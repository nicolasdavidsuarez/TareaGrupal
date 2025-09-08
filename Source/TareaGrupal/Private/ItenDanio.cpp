// Fill out your copyright notice in the Description page of Project Settings.


#include "ItenDanio.h"
#include "PlayerInterface.h"

AItenDanio::AItenDanio()
{
	mensaje = "Recibes danio";
	danio = 10;
}

void AItenDanio::NotifyActorBeginOverlap(AActor* OtherActor)
{
	//Super::NotifyActorBeginOverlap(OtherActor);
	
    // Reemplaza la l�nea problem�tica por la siguiente para evitar el error de nueva l�nea en la constante
   
	if (OtherActor->Implements<UPlayerInterface>())
	{
		Super::mostrarMensaje(mensaje);
		//
		 IPlayerInterface::Execute_RecibirDanio(OtherActor,danio);
	}

}
