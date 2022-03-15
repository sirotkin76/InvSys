// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Styling/SlateBrush.h"
#include "InvAssetManager.h"
#include "InvItem.generated.h"

class URecipeItem;
/**
 * 
 */
UCLASS(Abstract, BlueprintType)
class ADV_6_API UInvItem : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Item")
	FPrimaryAssetType ItemType;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Item")
	FText ItemName;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Item")
	FText ItemDescription;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Item")
	FSlateBrush ItemIcon;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Craft")
	URecipeItem * Recipe;
	
	/** Returns the logical name, equivalent to the primary asset id */
	UFUNCTION(BlueprintCallable, Category="Item")
	FString GetIdentifierString();

	/** Overridden to use saved type */
	virtual FPrimaryAssetId GetPrimaryAssetId() const override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Item")
	int32 Price;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Item")
	int32 MaxCount;

	UFUNCTION(BlueprintCallable, BlueprintPure ,Category="Item")
	bool IsStackable() const;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Item_BpPickupActor")
	bool bPickupActorIsActive = true;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Item_BpPickupActor", meta=(EditCondition = "bPickupActorIsActive", EditConditionHides))
	UStaticMesh * SM_Item_BpPickupActor;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Item_BpPickupActor", meta=(EditCondition = "bPickupActorIsActive", EditConditionHides))
	UMaterialInstance * MaterialInst_Item_BpPickupActor;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Item_BpPickupActor", meta=(EditCondition = "bPickupActorIsActive", EditConditionHides))
	FLinearColor ColorName_Item_BpPickupActor;

};
