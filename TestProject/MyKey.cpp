// Fill out your copyright notice in the Description page of Project Settings.

#include "TestProject.h"
#include "MyKey.h"
#include "math.h"


// Sets default values
AMyKey::AMyKey()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyKey::BeginPlay()
{
	Super::BeginPlay();
	FVector StartLocation = GetActorLocation();
	x_offset = StartLocation.X;
	y_offset = StartLocation.Y;
	z_offset = StartLocation.Z;
	phase = 0;
}

// Called every frame
void AMyKey::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

	FVector NewLocation = GetActorLocation();
	FRotator NewRotation = GetActorRotation();
	
	phase += 0.01;
	NewLocation.Z = z_offset + 20*sin(2 * PI*phase);
	NewRotation.Yaw = (int) (100*phase) % 360;
	NewRotation.Pitch = (int) (100*phase) % 360;
	NewRotation.Roll = (int) (100*phase) % 360;

	SetActorLocation(NewLocation);
	SetActorRotation(NewRotation);

}

