// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/InvItem.h"
#include "InvPotionItem.generated.h"

/**
 * 
 */
UCLASS()
class ADV_6_API UInvPotionItem : public UInvItem
{
	GENERATED_BODY()

public:
	UInvPotionItem()
	{
		ItemType = UInvAssetManager::PotionItemType;
	}
	
};
