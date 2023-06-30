// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DestructibleActor.h"
#include "CC_destroy_kuruma.generated.h"

/**
 * 
 */
UCLASS()
class BREAKRUN_API ACC_destroy_kuruma : public ADestructibleActor
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool Hit_Check;
	bool Destroy;
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPrintHelloDelegate);

	UPROPERTY(BlueprintAssignable, Category = "CPP_BP")
		FPrintHelloDelegate OnPrintHello;
	ADestructibleActor* pComp;
	//APlayer* Player;
	float Hit_Count;
	
};
