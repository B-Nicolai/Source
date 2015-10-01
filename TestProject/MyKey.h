// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "MyKey.generated.h"
#define PI 3.14159265

UCLASS()
class TESTPROJECT_API AMyKey : public AActor
{
	GENERATED_BODY()

private:
	float x_offset;
	float y_offset;
	float z_offset;
	float phase;

public:	
	// Sets default values for this actor's properties
	AMyKey();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	
	
};
