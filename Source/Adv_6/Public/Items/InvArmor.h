// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/InvItem.h"
#include "InvArmor.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EArmorType : uint8
{
	None,
	Head,
	Body,
	Legs,
	Writes,
	Feet,
};


UCLASS()
class ADV_6_API UInvArmor : public UInvItem
{
	GENERATED_BODY()

public:
	UInvArmor()
	{
		ItemType = UInvAssetManager::ArmorItemType;
	}

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Armor")
	EArmorType ArmorType;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Armor")
	USkeletalMesh * SM_Armor;
	
};
