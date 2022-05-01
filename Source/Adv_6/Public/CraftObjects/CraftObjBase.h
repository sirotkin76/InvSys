// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Recipes/RecipeItem.h"

#include "CraftObjBase.generated.h"

class UInvItem;
struct FDataInvItem;
/**
 * 
 */
UCLASS()
class ADV_6_API UCraftObjBase : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Attr")
	UStaticMesh * SM_Body;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Ingredients")
	TArray< FDataInvItem > Ingredients;
	
	
};
