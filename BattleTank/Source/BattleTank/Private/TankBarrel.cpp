// Fill out your copyright notice in the Description page of Project Settings.


#include "TankBarrel.h"

void UTankBarrel::Elevate(float DegreesPerSecond)
{
	// Переместить пушку в нужное положение (с максимальной скоростью перемещения и скоростью кадров)
	UE_LOG(LogTemp, Warning, TEXT("Barrel->Elevate() called at speed %f"), DegreesPerSecond);
}
