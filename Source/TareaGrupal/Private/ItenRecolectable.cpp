// Fill out your copyright notice in the Description page of Project Settings.


#include "ItenRecolectable.h"
#include "PlayerInterface.h"


AItenRecolectable::AItenRecolectable()
{
	mensaje = "Recolectaste";
	cantidad = 1;
}

void AItenRecolectable::NotifyActorBeginOverlap(AActor* OtherActor)
{
	//Super::NotifyActorBeginOverlap(OtherActor);

	// Reemplaza la l�nea problem�tica por la siguiente para evitar el error de nueva l�nea en la constante
	
	if (OtherActor->Implements<UPlayerInterface>())
	{
		Super::mostrarMensaje(mensaje);
		
		IPlayerInterface::Execute_RecoletarItem(OtherActor,cantidad);
		Destroy();
	}

}
