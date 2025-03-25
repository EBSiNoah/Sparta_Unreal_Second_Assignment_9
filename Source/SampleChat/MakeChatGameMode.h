// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ChatPlayerControllerMake.h"
#include "MakeChatGameMode.generated.h"

/**
 * 
 */
UCLASS()
class SAMPLECHAT_API AMakeChatGameMode : public AGameModeBase
{
	GENERATED_BODY()
public:
	AMakeChatGameMode();

	UFUNCTION(BlueprintCallable, Category = "MakeGameMode")
	FString FigureID();
};
