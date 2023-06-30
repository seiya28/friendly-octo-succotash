// Fill out your copyright notice in the Description page of Project Settings.


#include "CC_destroy_kuruma.h"

bool Hit_Check;
bool Destroy;
float Hit_Count;
ADestructibleActor* pComp;



void ACC_destroy_kuruma(float DeltaTime)
{
	if (Hit_Check == true)
	{
		Hit_Count = 1;

	}
	if (Hit_Count == 1)
	{
		Destroy = true;
	}
	
	/*
	* コリジョンを設定するプログラムを書く
	*/ 
	//ADestructibleActor->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);
	/*
	* ↓
	* オブジェクトを破壊する
	* ↓
	* プレイヤーを攻撃できない状態にする
	* ↓
	* プレイヤーの移動スピードを上げるイベントを呼び出す
	* ↓
	* オブジェクトの破壊した後の破片を消す
	* 
	*/
}
