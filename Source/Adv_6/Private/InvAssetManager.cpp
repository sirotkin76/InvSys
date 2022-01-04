// Fill out your copyright notice in the Description page of Project Settings.


#include "InvAssetManager.h"

#include "Items/InvItem.h"

UInvAssetManager& UInvAssetManager::Get()
{
	UInvAssetManager * This = Cast <UInvAssetManager> (GEngine->AssetManager);

	if (This)
	{
		return * This;
	}
	else
	{
		UE_LOG(LogTemp, Fatal, TEXT("Invalid AssetManager in DefaultEngine.ini, must be InvAssetManager!"));
		return * NewObject<UInvAssetManager>();
	}
}

UInvItem* UInvAssetManager::ForceLoadItem(const FPrimaryAssetId& PrimaryAssetId, bool bLogWarning)
{
	FSoftObjectPath ItemPath = GetPrimaryAssetPath(PrimaryAssetId);
	UInvItem * LoadedItem = Cast <UInvItem> (ItemPath.TryLoad());

	if (bLogWarning && LoadedItem == nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Failed to load item for identifier %s!"), *PrimaryAssetId.ToString());
	}

	return LoadedItem;
}
