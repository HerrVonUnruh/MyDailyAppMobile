#include "MyUserWidget.h"
// Einbinden der Header-Datei f�r diese Klasse.
// Einbinden der DateTime-Bibliothek, um mit Datum und Uhrzeit arbeiten zu k�nnen.
#include "Misc/DateTime.h"

// Implementierung der Funktion, die die aktuelle Zeit als String zur�ckgibt.
FString UMyUserWidget::GetCurrentTimeAsString()
{
    // Abrufen der aktuellen Zeit und Speichern in einer Variable vom Typ FDateTime.
    FDateTime Now = FDateTime::Now();

    // Konvertierung der Zeit in einen String. Das Format wird als Parameter �bergeben,
    // "%Y-%m-%d %H:%M:%S" entspricht dem Format: Jahr-Monat-Tag Stunde:Minute:Sekunde.
    // Der zur�ckgegebene String wird als Ergebnis der Funktion zur�ckgegeben.
    return Now.ToString(TEXT("%H:%M:%S    %d.%m.%Y "));
}
