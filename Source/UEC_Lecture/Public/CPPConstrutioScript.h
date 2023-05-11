// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Components/ArrowComponent.h" // ’Ç‰Á
#include"Components/PointlightComponent.h"

#include "CPPConstrutioScript.generated.h"//‚±‚¢‚Â‚Íˆê”Ô‰º‚É•`‚­!!!

UCLASS()

class UEC_LECTURE_API ACPPConstrutioScript : public AActor
{
	GENERATED_BODY()

public:
	//PrintStringŠÖ”‚ÌDuration‚Éİ’è‚·‚é•Ï”
	virtual void BeginPlay()override;

protected:

	//PrintStringŠÖ”‚ÌDuration‚Éİ’è‚·‚é•Ï”
	const float Duration = 10.0f;

	// PrintStringŠÖ”‚ÌTextColor‚Éİ’è‚·‚é•Ï”
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
