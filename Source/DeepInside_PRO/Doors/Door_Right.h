// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Door_Right.generated.h"

UCLASS()
class DEEPINSIDE_PRO_API ADoor_Right : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ADoor_Right();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
