// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/InvItem.h"
#include "InvMap.generated.h"

/**
 * 
 */
UCLASS()
class ADV_6_API UInvMap : public UInvItem
{
	GENERATED_BODY()
public:
	UInvMap()
	{
		ItemType = UInvAssetManager::MapItemType;
		AddInInventory = false;
	}

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Map")
	UTexture2D * Map;
};
