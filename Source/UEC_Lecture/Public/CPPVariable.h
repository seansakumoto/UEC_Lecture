// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CPPVariable.generated.h"

UCLASS()
class UEC_LECTURE_API ACPPVariable : public AActor
{
	GENERATED_BODY()
	


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	//printstring�֐���Duration�ɐݒ肷��ϐ�
	 const float Duration = 10.0f;

	 const FLinearColor TextColor = FLinearColor(1.0, 1.0, 1.0);

};
