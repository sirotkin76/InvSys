// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/InvItem.h"
#include "InvWeaponItem.generated.h"

/**
 * 
 */
UCLASS()
class ADV_6_API UInvWeaponItem : public UInvItem
{
	GENERATED_BODY()

public:
	UInvWeaponItem()
	{
		ItemType = UInvAssetManager::WeaponItemType;
	}
	
	/** Weapon actor to spawn */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category= "Weapon")
	TSubclassOf<AActor> WeaponActor;
	
};
