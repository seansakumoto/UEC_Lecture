// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Components/ArrowComponent.h" // �ǉ�
#include"Components/PointlightComponent.h"

#include "CPPConstrutioScript.generated.h"//�����͈�ԉ��ɕ`��!!!

UCLASS()

class UEC_LECTURE_API ACPPConstrutioScript : public AActor
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

	//ConstructionScript
	virtual void OnConstruction(const FTransform& Transform) override;

public:

	//Sets default values for this actor's properties
	ACPPConstrutioScript();

	//UE4
	UPROPERTY(EditAnywhere)
		USceneComponent* DefaultSceneRoot;

	// StaticMesh Component
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* StaticMesh;

	//
	UPROPERTY(VisibleAnywhere)
		UArrowComponent* Arrow;

	//PontlightComponent Component
	UPROPERTY(EditAnyWhere)
		UPointLightComponent* PointLight;

	UPROPERTY(EditAnywhere, Category = "Point Light")
		bool bIsVisible = false;

	UPROPERTY(EditAnywhere, Category = "Point Light")
		float Intensity = 5000.0f;

	UPROPERTY(EditAnywhere, Category = "Point Light")
		FLinearColor LightColor = FLinearColor::White;

};
