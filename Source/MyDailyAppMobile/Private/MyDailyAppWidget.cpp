#include "MyDailyAppWidget.h"
#include "Components/Button.h" 
#include "Components/Widget.h" 
#include "Kismet/KismetSystemLibrary.h"

bool UMyDailyAppWidget::Initialize() 

{
    Super::Initialize();

    if (BT_Dailys)
    {
        BT_Dailys->OnClicked.AddDynamic(this, &UMyDailyAppWidget::OnDailysClicked);
    }
    if (BT_AlleZweiDreiTage)
    {
        BT_AlleZweiDreiTage->OnClicked.AddDynamic(this, &UMyDailyAppWidget::OnAlleZweiDreiTageClicked);
    }
    if (BT_SpeichernUndBeenden)
    {
        BT_SpeichernUndBeenden->OnClicked.AddDynamic(this, &UMyDailyAppWidget::OnSpeichernUndBeendenClicked);
    }

    return true;

}

void UMyDailyAppWidget::OnDailysClicked()
{
    SetButtonVisible(BT_Sport);
    SetButtonVisible(BT_Duschen);
    SetButtonVisible(BT_Lueften);
    SetButtonVisible(BT_TeeMachen);
    SetButtonVisible(BT_KinderNeuEinkleiden);
}

void UMyDailyAppWidget::OnAlleZweiDreiTageClicked()
{

}

void UMyDailyAppWidget::OnSpeichernUndBeendenClicked()
{
    UKismetSystemLibrary::QuitGame(this, nullptr, EQuitPreference::Quit, true);
}

void UMyDailyAppWidget::SetButtonVisible(UButton* Button)
{
    if (Button)
    {
        Button->SetVisibility(ESlateVisibility::Visible);
    }
}

void UMyDailyAppWidget::SetButtonCollapsed(UButton* Button)
{
    if (Button)
    {
        Button->SetVisibility(ESlateVisibility::Collapsed);
    }
}

