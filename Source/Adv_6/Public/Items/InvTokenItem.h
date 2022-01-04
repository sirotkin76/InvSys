// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/InvItem.h"
#include "InvTokenItem.generated.h"

/**
 * 
 */
UCLASS()
class ADV_6_API UInvTokenItem : public UInvItem
{
	GENERATED_BODY()

public:
	UInvTokenItem()
	{
		ItemType = UInvAssetManager::TokenItemType;
	}
	
	
};
