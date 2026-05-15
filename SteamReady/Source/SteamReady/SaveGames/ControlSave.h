// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "ControlSave.generated.h"

/**
 * 
 */
UCLASS()
class STEAMREADY_API UControlSave : public USaveGame
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite)
	float MouseSens;	
};
