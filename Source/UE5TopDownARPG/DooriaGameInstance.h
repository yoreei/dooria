// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "DooriaGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class UE5TOPDOWNARPG_API UDooriaGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	
	UFUNCTION(BlueprintCallable, Category = "Dooria|Levels")
	void AdvanceLevel();

	UFUNCTION(BlueprintCallable, Category = "Dooria")
	void EndGame(bool IsWin);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dooria|MazeGen")
	float BaseTrapSpawnFactor = 0.8f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dooria|MazeGen")
	float IncTrapSpawnFactor = 0.2f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Dooria|MazeGen")
	float CurrentTrapSpawnFactor = BaseTrapSpawnFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dooria|Levels")
	int32 ReachLevelToWin = 4;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dooria|Levels")
	int32 CurrentLevel = 1;

	/*
	MUST BE ODD!!! E.g. 3,5,7,9,11,13
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dooria|MazeGen")
	int32 BaseLevelRows = 11;

	/*
	MUST BE ODD!!! E.g. 3,5,7,9,11,13
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dooria|MazeGen")
	int32 BaseLevelCols = 11;

	/*
	MUST BE EVEN!!! E.g. 2,4,6,8
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dooria|MazeGen")
	int32 IncLevelRows = 2;

	/*
	MUST BE EVEN!!! E.g. 2,4,6,8
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dooria|MazeGen")
	int32 IncLevelCols = 2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dooria|MazeGen")
	int32 CurrentLevelRows = BaseLevelRows;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dooria|MazeGen")
	int32 CurrentLevelCols = BaseLevelCols;

protected:
	virtual void Init() override;
};
