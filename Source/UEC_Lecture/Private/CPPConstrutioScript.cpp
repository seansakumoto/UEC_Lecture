// Fill out your copyright notice in the Description page of Project Settings.


#include"CPPConstrutioScript.h"
#include "Kismet/KismetSystemLibrary.h"


// Called when the game starts or when spawned
void ACPPConstrutioScript::BeginPlay()
{
	Super::BeginPlay();


	// �ϐ����쐬����
	FString Message = "C++ Hello World!";

	// PrintString�m�[�h�Ɠ�������Duration
		// UKismetSystemLibrary�N���X��PrintString�֐����Ăяo��
	UKismetSystemLibrary::PrintString(this, Message, true, true, TextColor, Duration);

}

ACPPConstrutioScript::ACPPConstrutioScript()
{
	//SceneComponent���쐬����
	DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));

	//SceneComponent��RootComponent�ɐݒ肷��
	RootComponent = DefaultSceneRoot;


	// StaticMeshComponent���쐬����
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));

	//StaticMesh��Laod����StaticMeshComponent��StaticMesh�ɐݒ肷��
	UStaticMesh* Mesh = LoadObject<UStaticMesh>(NULL, TEXT("/Engine/BasicShapes/Cube1"), NULL, LOAD_None, NULL);
	StaticMesh->SetStaticMesh(Mesh);

	//StaticMeshComponent��RootComponent��Attach����
	StaticMesh->SetupAttachment(RootComponent);

	//ArrowComponent���쐬����
	Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));

	// ArrowComponent�̈ʒu��ݒ肷��
	Arrow->SetRelativeLocation(FVector(50.0f, 0.0f, 0.0f));

	//ArrowComponent��StaticMeshComponent��Attach����
	Arrow->SetupAttachment(StaticMesh);

	//PointLightComponent���쐬����
	PointLight = CreateAbstractDefaultSubobject<UPointLightComponent>(TEXT("PointLightConponent"));

	//PointLightComponent�̈ʒu��ݒ肷��
	PointLight->SetRelativeLocation(FVector(130.0f, 0.0f, 0.0f));

	//PontLightComponent��StaticMeshComponrnt��Attach����
	PointLight->SetupAttachment(StaticMesh);
}

void ACPPConstrutioScript::OnConstruction(const FTransform& Transfrom)
{
	//pointLight�̕\���E��\����ݒ肷��
	PointLight->SetVisibility(bIsVisible);

	//pointLIght�̋�����ݒ�
	PointLight->SetIntensity(Intensity);

	//PointLight�̋�����ݒ肷��
	PointLight->SetLightColor(LightColor);
}