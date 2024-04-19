#include "MyUserWidget.h"
// Einbinden der Header-Datei für diese Klasse.
// Einbinden der DateTime-Bibliothek, um mit Datum und Uhrzeit arbeiten zu können.
#include "Misc/DateTime.h"

// Implementierung der Funktion, die die aktuelle Zeit als String zurückgibt.
FString UMyUserWidget::GetCurrentTimeAsString()
{
    // Abrufen der aktuellen Zeit und Speichern in einer Variable vom Typ FDateTime.
    FDateTime Now = FDateTime::Now();

    // Konvertierung der Zeit in einen String. Das Format wird als Parameter übergeben,
    // "%Y-%m-%d %H:%M:%S" entspricht dem Format: Jahr-Monat-Tag Stunde:Minute:Sekunde.
    // Der zurückgegebene String wird als Ergebnis der Funktion zurückgegeben.
    return Now.ToString(TEXT("%H:%M:%S    %d.%m.%Y "));
}
