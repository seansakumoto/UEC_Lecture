// Fill out your copyright notice in the Description page of Project Settings.


#include "CPPComponet.h"
#include "Kismet/KismetSystemLibrary.h"


// Called when the game starts or when spawned
void ACPPComponet::BeginPlay()
{
	Super::BeginPlay();


	// 変数を作成する
	FString Message = "C++ Hello World!";

	// PrintStringノードと同じ処理Duration
		// UKismetSystemLibraryクラスのPrintString関数を呼び出す
	UKismetSystemLibrary::PrintString(this, Message, true, true, TextColor, Duration);

}

ACPPComponet::ACPPComponet()
{
	//SceneComponentを作成する
	DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));

	//SceneComponentをRootComponentに設定する
	RootComponent = DefaultSceneRoot;


	// StaticMeshComponentを作成する
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));

	//StaticMeshをLaodしてStaticMeshComponentのStaticMeshに設定する
	UStaticMesh* Mesh = LoadObject<UStaticMesh>(NULL, TEXT("/Engine/BasicShapes/Cube1"), NULL, LOAD_None, NULL);
	StaticMesh->SetStaticMesh(Mesh);
	
	//StaticMeshComponentをRootComponentにAttachする
	StaticMesh->SetupAttachment(RootComponent);

	//ArrowComponentを作成する
	Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));

	// ArrowComponentの位置を設定する
	Arrow->SetRelativeLocation(FVector(50.0f, 0.0f, 0.0f));

	//ArrowComponentをStaticMeshComponentにAttachする
	Arrow->SetupAttachment(StaticMesh);

	//PointLightComponentを作成する
	PointLight = CreateAbstractDefaultSubobject<UPointLightComponent>(TEXT("PointLightConponent"));

	//PointLightComponentの位置を設定する
	PointLight->SetRelativeLocation(FVector(130.0f, 0.0f, 0.0f));

	//PontLightComponentをStaticMeshComponrntにAttachする
	PointLight->SetupAttachment(StaticMesh);
}

