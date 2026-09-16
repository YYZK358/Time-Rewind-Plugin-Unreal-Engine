// Fill out your copyright notice in the Description page of Project Settings.


#include "TimeActorManagementSubsystem.h"
#include "TimeRewindComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"

void UTimeActorManagementSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UTimeActorManagementSubsystem::OnWorldBeginPlay(UWorld& InWorld)
{
	Super::OnWorldBeginPlay(InWorld);
	
}
void UTimeActorManagementSubsystem::Deinitialize()
{
	Super::Deinitialize();
}

void UTimeActorManagementSubsystem::StartRewinding()
{
	for (auto Actor : ActorList)
	{
		Actor->GetComponentByClass<UTimeRewindComponent>()->StartRewinding();
	}
}

void UTimeActorManagementSubsystem::StopRewinding()
{
	for (auto Actor : ActorList)
	{
		Actor->GetComponentByClass<UTimeRewindComponent>()->EndRewinding();
	}
}

void UTimeActorManagementSubsystem::RegisterActor(AActor* Actor)
{
	if (Actor == nullptr)return;
	ActorList.Add(Actor);
}

void UTimeActorManagementSubsystem::UnRegisterActor(AActor* Actor)
{
	if (Actor == nullptr)return;
	ActorList.Remove(Actor);
}

