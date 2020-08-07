// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

private:
	ATank* GetControlledTank() const;

	virtual void BeginPlay() override; 

	virtual void Tick(float DeltaTime) override;

	// Метод направляет ствол танка на перекрестие прицела
	void AimTowardsCrosshair();

	// Возвращать внешний параметр (OUT)
	// true при попадании в ландшафт
	bool GetSightRayHitLocation(FVector& HitLocation) const;

	UPROPERTY(EditAnywhere)
	float CrosshairXLocation = 0.5;
	
	UPROPERTY(EditAnywhere)
	float CrosshairYLocation = 0.33333;
};
