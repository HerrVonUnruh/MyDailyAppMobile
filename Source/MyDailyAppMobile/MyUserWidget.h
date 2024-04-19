// Pr�prozessoranweisung, um sicherzustellen, dass diese Header-Datei nur einmal eingebunden wird.
#pragma once

// Einbinden der erforderlichen Header-Dateien aus der Unreal Engine.
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MyUserWidget.generated.h"

// UCLASS-Makro, um diese Klasse als Teil der Unreal Engine Objekthierarchie zu definieren.
// YOURPROJECTNAME_API sorgt f�r die korrekte DLL-Linkage unter Windows.
UCLASS()
class MYDAILYAPP_API UMyUserWidget : public UUserWidget
{
    // Dieses Makro ist notwendig f�r die Unreal Engine, um Metadaten f�r die Reflexion zu generieren.
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
