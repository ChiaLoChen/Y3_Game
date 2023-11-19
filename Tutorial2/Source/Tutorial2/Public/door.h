// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "door.generated.h"

UCLASS()
class TUTORIAL2_API Adoor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	Adoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
		AActor* door;
	UPROPERTY(EditAnywhere)
		AActor* movePos;
	UPROPERTY(EditAnywhere)
		AActor* originalPos;


	UPROPERTY(EditAnywhere)
		float proxDistance;

	UPROPERTY(EditAnywhere)
		bool isProx;
};
