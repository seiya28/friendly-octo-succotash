// Fill out your copyright notice in the Description page of Project Settings.


#include "CC_Character.h"
#include "Components/PrimitiveComponent.h"


// Sets default values
ACC_Character::ACC_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	

}

// Called when the game starts or when spawned
void ACC_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACC_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACC_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

//オーバーラップされた時の処理
void ACC_Character::OnOverLapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& bSweepResult)
{
	constexpr auto element_index = 0;

	UStaticMeshComponent* pHit_Range;

	Short_Range_OverLap_Count += 1;
	if (Short_Range_OverLap_Count == 1)
	{
		//pHit_Range= UPrimitiveComponent::SetMaterialByName(FName MaterialSlotName, class UMaterialInterface* Material)

	}
}

