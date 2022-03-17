// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/InvItem.h"
#include "InvKeyItem.generated.h"

/**
 * 
 */
UCLASS()
class ADV_6_API UInvKeyItem : public UInvItem
{
	GENERATED_BODY()
	
public:
	UInvKeyItem()
	{
		ItemType = UInvAssetManager::KeyItemType;
		AddInInventory = false;
	}

};
