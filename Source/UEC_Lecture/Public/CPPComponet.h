// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Components/ArrowComponent.h" // �ǉ�

#include "CPPComponet.generated.h"//�����͈�ԉ��ɕ`��!!!


UCLASS()
class UEC_LECTURE_API ACPPComponet : public AActor
{
	GENERATED_BODY()
	
public:	
	//PrintString�֐���Duration�ɐݒ肷��ϐ�
	virtual void BeginPlay()override;

protected:
	
	//PrintString�֐���Duration�ɐݒ肷��ϐ�
	const float Duration = 10.0f;

	// PrintString�֐���TextColor�ɐݒ肷��ϐ�
	const FLinearColor TextColor = FLinearColor(0.0, 0.66, 1.0);

public:
	//UE4
	USceneComponent* DefaultSceneRoot;

	//Sets default values for this actor's properties
	ACPPComponet();

	// StaticMesh Component
	UPROPERTY(EditAnywhere)
    UStaticMeshComponent* StaticMesh;

	//
	UPROPERTY(VisibleAnywhere)
	UArrowComponent* Arrow;

};
