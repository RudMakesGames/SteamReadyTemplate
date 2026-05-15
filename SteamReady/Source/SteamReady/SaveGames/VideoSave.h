 // Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "VideoSave.generated.h"

/**
 * 
 */
UCLASS()
class STEAMREADY_API UVideoSave : public USaveGame
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite)
	int AntiAliasing;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite)
	int DisplayMode;
	
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite)
	int VSync;

	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite)
    int ShadowQuality;
    
   	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite)
    int MaxFrameRate;

   	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite)
    int ViewDistance;
    
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite)
	int ScreenRes;
};
