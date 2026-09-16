// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TimeRewindComponent.generated.h"

class UStaticMeshComponent;
class AActor;

struct TimeInfo
{
	FVector Location;
	FRotator Rotation;
	float TimeLine;
	FVector LinearVelocity;
	FVector AngularVelocity;
	TimeInfo(FVector InLocation, FRotator InRotation, float InTimeLine,FVector LinearVector,FVector AngularVelocity) : Location(InLocation), Rotation(InRotation), TimeLine(InTimeLine), LinearVelocity(LinearVector), AngularVelocity(AngularVelocity)
	{
	}
};
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class TIMEREWINDPLUGIN_API UTimeRewindComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTimeRewindComponent();
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="TimeRewindComponent")
	AActor* Owner;
	UStaticMeshComponent *OwnerMesh;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="TimeRewindComponent")
	bool bCanRewind;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="TimeRewindComponent")
	bool bIsRewinding;
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="TimeRewindComponent")
	float TimeLineLenght;
	float TimeLine;
	TDoubleLinkedList<TimeInfo> TimeList;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	void SaveTimeInfo(float DataTime);
	void LoadTimeInfo();
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UFUNCTION(BlueprintCallable, Category="TimeRewindComponent")
	void StartRewinding();
	UFUNCTION(BlueprintCallable, Category="TimeRewindComponent")
	void EndRewinding();
		
};
