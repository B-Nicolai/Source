// Fill out your copyright notice in the Description page of Project Settings.

#include "TestProject.h"
#include "lift.h"


// Sets default values
Alift::Alift()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	max_x = MAXELEVATOR;
	max_y = MAXELEVATOR;
	max_z = MAXELEVATOR;
}

// Called when the game starts or when spawned
void Alift::BeginPlay()
{
	Super::BeginPlay();
	direction = UP;
	FVector StartLocation = GetActorLocation();
	x_offset = StartLocation.X;
	y_offset = StartLocation.Y;
	z_offset = StartLocation.Z;
}

// Called every frame
void Alift::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

	FVector NewLocation = GetActorLocation();
	FRotator NewRotation = GetActorRotation();

	if (move_x){
		if (NewLocation.X >= (max_x + x_offset)){
			direction = DOWN;
		}
		if (NewLocation.X <= (x_offset)){
			direction = UP;
		}
		if (direction == UP){
			NewLocation.X += 3;
		}
		else{
			NewLocation.X -= 3;
		}
	}
	if (move_y){
		if (NewLocation.Y >= (max_y + y_offset)){
			direction = DOWN;
		}
		if (NewLocation.Y <= (y_offset)){
			direction = UP;
		}
		if (direction == UP){
			NewLocation.Y += 3;
		}
		else{
			NewLocation.Y -= 3;
		}
	}
	if (move_z){
		if (NewLocation.Z >= (max_z + z_offset)){
			direction = DOWN;
		}
		if (NewLocation.Z <= (z_offset)){
			direction = UP;
		}
		if (direction == UP){
			NewLocation.Z += 3;
		//	NewRotation.Yaw -= 1;
		}
		else{
			NewLocation.Z -= 3;
		//	NewRotation.Yaw -= 1;
		}
	}

	SetActorRotation(NewRotation);
	SetActorLocation(NewLocation);
}

