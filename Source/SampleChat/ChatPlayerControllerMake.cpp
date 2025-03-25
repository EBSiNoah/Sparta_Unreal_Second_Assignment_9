// Fill out your copyright notice in the Description page of Project Settings.


#include "ChatPlayerControllerMake.h"

AChatPlayerControllerMake::AChatPlayerControllerMake()
{
	userID = nullptr;
}

FString AChatPlayerControllerMake::ApplyID()
{
	return userID;
}
/*
void AChatPlayerControllerMake::GetLifetimeErplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeErplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AChatPlayerControllerMake, userID);
}*/