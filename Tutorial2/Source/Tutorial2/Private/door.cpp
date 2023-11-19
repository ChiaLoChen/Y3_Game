// Fill out your copyright notice in the Description page of Project Settings.


#include "door.h"
#include <Kismet/GameplayStatics.h>
#include "GameFramework/Actor.h"

// Sets default values
Adoor::Adoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Adoor::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void Adoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	APlayerController* player = UGameplayStatics::GetPlayerController(this, 0);
	if (player) {
		float distance = door->GetDistanceTo(player);
		UE_LOG(LogTemp, Warning, TEXT("Distance to player: %f"), distance);

		if (distance < proxDistance) {
			UE_LOG(LogTemp, Warning, TEXT("Moving door to movePos"));
			door->SetActorLocation(movePos->GetActorLocation());
		}
		else {
			UE_LOG(LogTemp, Warning, TEXT("Moving door to originalPos"));
			door->SetActorLocation(originalPos->GetActorLocation());
		}
	}
}

