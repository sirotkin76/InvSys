// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/InvItem.h"
#include "InvRecipe.generated.h"

/**
 * 
 */
UCLASS()
class ADV_6_API UInvRecipe : public UInvItem
{
	GENERATED_BODY()
public:
	
	UInvRecipe()
	{
		ItemType = UInvAssetManager::RecipeItemType;\
		AddInInventory = false;
	}

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Craft")
	URecipeItem * Recipe;
	
};
