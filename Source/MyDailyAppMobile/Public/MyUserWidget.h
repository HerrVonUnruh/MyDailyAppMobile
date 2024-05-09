// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class MYDAILYAPPMOBILE_API UMyUserWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
    // Ein Beispiel-String-Array
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Data")
    TArray<FString> StringArray;
public:
    // Deklariert eine �ffentliche Funktion, die von Blueprints aufgerufen werden kann.
    // Diese Funktion wird die aktuelle Zeit als String zur�ckgeben.
    UFUNCTION(BlueprintCallable, Category = "Time")
    FString GetCurrentTimeAsString();

    /*UFUNCTION(BlueprintCallable, Category = "EssensListe")*/
};
