// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/InvItem.h"
#include "InvVegetableItem.generated.h"

/**
 * 
 */
UCLASS()
class ADV_6_API UInvVegetableItem : public UInvItem
{
	GENERATED_BODY()
	
public:
	UInvVegetableItem()
	{
		ItemType = UInvAssetManager::VegetableItemType;
	}
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Attr")
	UStaticMesh * SM_Rosbery;

	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Attr")
	int Time;
};
