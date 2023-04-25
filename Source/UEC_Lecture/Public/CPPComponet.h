// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Components/ArrowComponent.h" // ’Ç‰Á

#include "CPPComponet.generated.h"//‚±‚¢‚Â‚Íˆê”Ô‰º‚É•`‚­!!!


UCLASS()
class UEC_LECTURE_API ACPPComponet : public AActor
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
