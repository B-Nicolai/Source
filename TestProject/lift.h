// Fill out your copyright notice in the Description page of Project Settings.

#define MAXELEVATOR 1000
#define UP 1
#define DOWN 2
#pragma once

#include "GameFramework/Actor.h"
#include "lift.generated.h"



UCLASS()
class TESTPROJECT_API Alift : public AActor
{
	GENERATED_BODY()
	
private:
	float x_offset;
	float y_offset;
	float z_offset;

public:	
	// Sets default values for this actor's properties
	Alift();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// variables
	int direction;
	

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Movement)
	bool move_x;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Movement)
	bool move_y;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Movement)
	bool move_z;

	//borders
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Border)
	float max_x;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Border)
	float max_y;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Border)
	float max_z;
	
	
};
