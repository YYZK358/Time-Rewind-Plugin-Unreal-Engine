// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "TimeActorManagementSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class TIMEREWINDPLUGIN_API UTimeActorManagementSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()
	public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void OnWorldBeginPlay(UWorld& InWorld) override;
	virtual void Deinitialize() override;
	private:
	TArray<AActor*> ActorList;
	
	public:
	UFUNCTION(BlueprintCallable, Category = "TimeActorManagementSubsystem")
	void StartRewinding();
	UFUNCTION(BlueprintCallable, Category = "TimeActorManagementSubsystem")
	void StopRewinding();
	UFUNCTION(BlueprintCallable, Category = "TimeActorManagementSubsystem")
	void RegisterActor(AActor* Actor);
	
	UFUNCTION(BlueprintCallable, Category = "TimeActorManagementSubsystem")
	void UnRegisterActor(AActor* Actor);
};
