// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ChatPlayerControllerMake.generated.h"

/**
 * 
 */
UCLASS()
class SAMPLECHAT_API AChatPlayerControllerMake : public APlayerController
{
	GENERATED_BODY()
protected:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="ID")
	//UPROPERTY(Replicated)
	FString userID;

public:
	AChatPlayerControllerMake();
	UFUNCTION(BlueprintCallable, Category = "MakeController")
	FString ApplyID();
};
