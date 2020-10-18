// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyGameMode.h"

void ALobbyGameMode::PostLogin(APlayerController* NewPlayer)
{
	++NumberOfPlayers;
	if (NumberOfPlayers >= 2)
	{
		UE_LOG(LogTemp, Warning, TEXT("Reached 2 Players !"));
	}
}

void ALobbyGameMode::Logout(AController* Exiting)
{
	--NumberOfPlayers;
}
