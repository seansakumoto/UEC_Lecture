// Fill out your copyright notice in the Description page of Project Settings.


#include "CPPVariable.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetStringLibrary.h" // 追加


// Called when the game starts or when spawned
void ACPPVariable::BeginPlay()
{
	Super::BeginPlay();

	// 変数を作成する
	FString Message = "C++ Hello World!";

	//Durationに別の値を設定する
	//Duration = 3.0f;

	// PrintStringノードと同じ処理Duration
	// UKismetSystemLibraryクラスのPrintString関数を呼び出す
	UKismetSystemLibrary::PrintString(this, Message, true, true, TextColor, Duration);
	
}





