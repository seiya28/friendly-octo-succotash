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
	* �R���W������ݒ肷��v���O����������
	*/ 
	//ADestructibleActor->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);
	/*
	* ��
	* �I�u�W�F�N�g��j�󂷂�
	* ��
	* �v���C���[���U���ł��Ȃ���Ԃɂ���
	* ��
	* �v���C���[�̈ړ��X�s�[�h���グ��C�x���g���Ăяo��
	* ��
	* �I�u�W�F�N�g�̔j�󂵂���̔j�Ђ�����
	* 
	*/
}
