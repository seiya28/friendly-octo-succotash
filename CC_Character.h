// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CC_Character.generated.h"

UCLASS()
class BREAKRUN_API ACC_Character : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACC_Character();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Short_Rangeがオーバーラップして処理される回数を一回にするための変数
	float Short_Range_OverLap_Count = 0;

	//Short_Rangeがオーバーラップされた
	bool Short_Range;

protected:
	//オーバーラップしたときの関数
	UFUNCTION()
		virtual void OnOverLapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& bSweepResult);


};
