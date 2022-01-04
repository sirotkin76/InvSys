// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/InvItem.h"
#include "InvSkillItem.generated.h"

/**
 * 
 */
UCLASS()
class ADV_6_API UInvSkillItem : public UInvItem
{
	GENERATED_BODY()

public:
	UInvSkillItem()
	{
		ItemType = UInvAssetManager::SkillItemType;
	}
	
};
