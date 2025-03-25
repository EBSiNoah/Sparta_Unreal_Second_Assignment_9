// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Math/UnrealMathUtility.h"
#include "MyTestCppLib.generated.h"

/**
 * 
 */
UCLASS()
class SAMPLECHAT_API UMyTestCppLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "MyTestCPPLib")
	static FString GetMyFirstCPP();
	UFUNCTION(BlueprintCallable, Category = "MyTestCPPLib")
	static FString ThrowBalls();
	UFUNCTION(BlueprintCallable, Category = "MyTestCPPLib")
	static FString CompareSwing(FString swing, FString balls);
};
