// Fill out your copyright notice in the Description page of Project Settings.


#include "MakeChatGameMode.h"

AMakeChatGameMode::AMakeChatGameMode()
{
    //bReplicates = true;
}

FString AMakeChatGameMode::FigureID()
{
	FString id;

	for (FConstPlayerControllerIterator itr = GetWorld()->GetPlayerControllerIterator(); itr; itr++)
	{
		AChatPlayerControllerMake* con = Cast<AChatPlayerControllerMake>(*itr);
		if (itr)
		{
			id = con->ApplyID();
		}
	}

	return id;
}