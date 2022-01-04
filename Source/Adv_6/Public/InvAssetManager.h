// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetManager.h"
#include "InvAssetManager.generated.h"

class UInvItem;
/**
 * 
 */
UCLASS()
class ADV_6_API UInvAssetManager : public UAssetManager
{
	GENERATED_BODY()

public:
	
	// Constructor and overrides
	UInvAssetManager() {}

	/** Static types for items */
	static const FPrimaryAssetType PotionItemType;
	static const FPrimaryAssetType SkillItemType;
	static const FPrimaryAssetType TokenItemType;
	static const FPrimaryAssetType WeaponItemType;

	/** Returns the current AssetManager object */
	static UInvAssetManager & Get();

	/**
	 * Synchronously loads an InvItem subclass, this can hitch but is useful when you cannot wait for an async load
	 * This does not maintain a reference to the item so it will garbage collect if not loaded some other way
	 *
	 * @param PrimaryAssetId The asset identifier to load
	 * @param bDisplayWarning If true, this will log a warning if the item failed to load
	 */
	UInvItem * ForceLoadItem (const FPrimaryAssetId & PrimaryAssetId, bool bLogWarning = true); 
};
