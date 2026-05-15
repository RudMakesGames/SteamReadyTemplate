// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "AudioSave.generated.h"

/**
 * 
 */
UCLASS()
class STEAMREADY_API UAudioSave : public USaveGame
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite)
	float AmbienceVol = 100;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite)
	float UIVol = 100;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite)
	float SFXVol = 100;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite)
    float MasterVol = 100;
};
