// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "PlayerInterface.h"
#include "ItenBase.generated.h"

class USphereComponent;
class UStaticMeshComponent;

UCLASS()
class TAREAGRUPAL_API AItenBase : public AActor
{
	GENERATED_BODY()
	
public:	
	
	// Sets default values for this actor's properties
	AItenBase();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

	FString mensaje = "Mensaje componente base";
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<USphereComponent> SphereCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UStaticMeshComponent> SphereMesh;

	UFUNCTION(BlueprintCallable)
	void mostrarMensaje(FString msg);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};
