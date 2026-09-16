// Fill out your copyright notice in the Description page of Project Settings.


#include "TimeRewindComponent.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"


// Sets default values for this component's properties
UTimeRewindComponent::UTimeRewindComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	bCanRewind = false;
	bIsRewinding = false;
	Owner = nullptr;
	TimeLine = 0.0f;
	// ...
}


// Called when the game starts
void UTimeRewindComponent::BeginPlay()
{
	Super::BeginPlay();
	Owner = GetOwner();
	OwnerMesh = Cast<UStaticMeshComponent>(Owner->GetComponentByClass(UStaticMeshComponent::StaticClass()));
	// ...
}

void UTimeRewindComponent::SaveTimeInfo(float DataTime)
{
	if (!IsValid(Owner))return;
	if (!OwnerMesh) return;
	TimeInfo  time(Owner->GetActorLocation(),Owner->GetActorRotation(),DataTime,OwnerMesh->GetPhysicsLinearVelocity(),OwnerMesh->GetPhysicsAngularVelocityInDegrees());
	
	if (TimeList.IsEmpty() || TimeList.GetTail()->GetValue().TimeLine - TimeList.GetHead()->GetValue().TimeLine < TimeLineLenght)
	{
		TimeList.AddTail(time);
	}else
	{
		TimeList.RemoveNode(TimeList.GetHead());
		TimeList.AddTail(time);
	}
}

void UTimeRewindComponent::LoadTimeInfo()
{
	if (TimeList.IsEmpty())
	{
		bIsRewinding = false;
		//UE_LOG(LogTemp,Warning,TEXT("TimeRewindComponent LoadTimeInfo: TimeList is empty."));
		return;
	}
		
	TimeInfo time(TimeList.GetTail()->GetValue());
	Owner->SetActorLocation(time.Location);
	Owner->SetActorRotation(time.Rotation);
	OwnerMesh->SetPhysicsLinearVelocity(time.LinearVelocity);
	OwnerMesh->SetPhysicsAngularVelocityInDegrees(time.AngularVelocity);
	TimeList.RemoveNode(TimeList.GetTail());
}


// Called every frame
void UTimeRewindComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                         FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	if (bCanRewind && !bIsRewinding)
	{
		TimeLine += DeltaTime;
		SaveTimeInfo(TimeLine);
	}
	else if (bIsRewinding)
	{
		TimeLine -= DeltaTime;
		LoadTimeInfo();
	}
}

void UTimeRewindComponent::StartRewinding()
{
	bIsRewinding = true;
}

void UTimeRewindComponent::EndRewinding()
{
	bIsRewinding = false;
}
