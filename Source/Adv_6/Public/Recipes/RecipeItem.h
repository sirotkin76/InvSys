// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Items/InvItem.h"
#include "RecipeItem.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FDataInvItem
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Ingredients")
	UInvItem * RecipesItem;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Ingredients")
	int32 Count;
	
};


UCLASS()
class ADV_6_API URecipeItem : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="CraftItem")
	UInvItem * Item;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Ingredients")
	TArray< FDataInvItem > Ingredients;
	
};
