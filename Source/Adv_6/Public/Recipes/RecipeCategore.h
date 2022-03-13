// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "RecipeItem.h"
#include "Engine/DataAsset.h"
#include "RecipeCategore.generated.h"

/**
 * 
 */
UCLASS()
class ADV_6_API URecipeCategore : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="CraftItem")
	FString CategoriName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Ingredients")
	TArray< URecipeItem * > Recipe;
	
};
