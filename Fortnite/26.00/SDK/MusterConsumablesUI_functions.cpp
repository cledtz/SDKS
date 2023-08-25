#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MusterConsumablesUI.EnergyDrinkStaminaBarOverlayWidget
// (None)

class UClass* UEnergyDrinkStaminaBarOverlayWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnergyDrinkStaminaBarOverlayWidget");

	return Clss;
}


// EnergyDrinkStaminaBarOverlayWidget MusterConsumablesUI.Default__EnergyDrinkStaminaBarOverlayWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnergyDrinkStaminaBarOverlayWidget* UEnergyDrinkStaminaBarOverlayWidget::GetDefaultObj()
{
	static class UEnergyDrinkStaminaBarOverlayWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnergyDrinkStaminaBarOverlayWidget*>(UEnergyDrinkStaminaBarOverlayWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function MusterConsumablesUI.EnergyDrinkStaminaBarOverlayWidget.OnPlayerStateSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortPlayerStateAthena*      InPlayerState                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnergyDrinkStaminaBarOverlayWidget::OnPlayerStateSet(class UFortPlayerStateAthena* InPlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnergyDrinkStaminaBarOverlayWidget", "OnPlayerStateSet");

	Params::UEnergyDrinkStaminaBarOverlayWidget_OnPlayerStateSet_Params Parms{};

	Parms.InPlayerState = InPlayerState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusterConsumablesUI.EnergyDrinkStaminaBarOverlayWidget.OnPlayerDeadStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortPlayerStateAthena*      PlayerState                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsDead                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnergyDrinkStaminaBarOverlayWidget::OnPlayerDeadStateChanged(class UFortPlayerStateAthena* PlayerState, bool bIsDead)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnergyDrinkStaminaBarOverlayWidget", "OnPlayerDeadStateChanged");

	Params::UEnergyDrinkStaminaBarOverlayWidget_OnPlayerDeadStateChanged_Params Parms{};

	Parms.PlayerState = PlayerState;
	Parms.bIsDead = bIsDead;

	UObject::ProcessEvent(Func, &Parms);

}

}


