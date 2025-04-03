#pragma once

#include "CoreMinimal.h" 
#include "Blueprint/UserWidget.h"
#include "Components/Button.h" 
#include "Components/Widget.h" 
#include "MyDailyAppWidget.generated.h"

UCLASS()
class MYDAILYAPPMOBILE_API UMyDailyAppWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	virtual bool Initialize() override;

protected:

	//////////////////////////
	//Dailys
	/////////////////////////
	UPROPERTY(meta = (BindWidget))
	UButton* BT_Dailys;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_Sport;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_Duschen;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_TeeMachen;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_Lueften;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_KinderNeuEinkleiden;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_HaareKaemmen;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_Fruehstuecken;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_ObstUndGemueseEssen;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_ZaehnePutzen;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_Geschirrspueler;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_WaescheMachen;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_Rausgehen;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_CPPLernen;

	//////////////////////////////////
	/// Täglich beide
	//////////////////////////////////
	UPROPERTY(meta = (BindWidget))
	UButton* BT_TaeglichBeide;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_EssenVorbereiten;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_EssenEintuppern;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_OberflaechenInKuecheAbwischen;

	UPROPERTY(meta = (BindWidget))
	UButton* WaescheZusammenlegen;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_AkkusLaden;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_HandysLaden;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_StaubsaugerLeeren;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_KatzenFuettern;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_AllesVomBodenAufheben;

	//////////////////////////////////
	/// Alle zwei bis drei Tage
	//////////////////////////////////
	UPROPERTY(meta = (BindWidget))
	UButton* BT_AlleZweiDreiTage;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_KinderBaden;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_Rasieren;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_HausmuellWegbringen;

	UPROPERTY(meta = (BindWidget))
	UButton* PlastikWegbringen;

	//////////////////////////////////
	// Wöchentlich
	//////////////////////////////////
	UPROPERTY(meta = (BindWidget))
	UButton* BT_Woechentlich;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_EinmalProWocheBeiAllenMelden;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_AllePCsUpdaten;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_WohnungWischen;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_AllesEntstauben;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_BrotBacken;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_ButterMachen;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_KuehlschrankSortieren;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_GlasWegbringen;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_PappeWegbringen;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_BatterienWegbringen;


	//////////////////////////////////
	// Monatlich
	//////////////////////////////////

	UPROPERTY(meta = (BindWidget))
	UButton* BT_Monatlich;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_FensterPutzen;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_TrinkbrunnenFilterReinigen;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_PCsSaeubern;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_AlleVentileDrehenSarah;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_AlleVentileDrehenJenni;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_AlleBettenNeuBeziehen;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_AlleKissenWaschen;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_AlleDeckenWaschen;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_EinmalImMonatMitLarsUndMarcelZocken;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_DirtDevilSauberMachen;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_StaubsaugroboterSauberMachen;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_GeschirrspuelerSaeubern;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_WaschmaschineSauebern;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_KuehlschrankSauebern;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_HerdSauberMachen;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_OfenSauberMachen;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_NeuerTag;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_NeueWoche;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_NeuerMonat;

	UPROPERTY(meta = (BindWidget))
	UButton* BT_SpeichernUndBeenden;



private:

	UFUNCTION()
	void OnDailysClicked();

	UFUNCTION()
	void OnAlleZweiDreiTageClicked();

	UFUNCTION()
	void OnSpeichernUndBeendenClicked();

	UFUNCTION()
	void SetButtonVisible(UButton* Button);

	UFUNCTION()
	void SetButtonCollapsed(UButton* Button);
};
