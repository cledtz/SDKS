#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function MusterConsumablesUI.EnergyDrinkStaminaBarOverlayWidget.OnPlayerStateSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*      InPlayerState                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnergyDrinkStaminaBarOverlayWidget::OnPlayerStateSet(class AFortPlayerStateAthena* InPlayerState)
{
	static auto Func = Class->GetFunction("EnergyDrinkStaminaBarOverlayWidget", "OnPlayerStateSet");

	Params::UEnergyDrinkStaminaBarOverlayWidget_OnPlayerStateSet_Params Parms;

	Parms.InPlayerState = InPlayerState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MusterConsumablesUI.EnergyDrinkStaminaBarOverlayWidget.OnPlayerDeadStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*      PlayerState                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsDead                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnergyDrinkStaminaBarOverlayWidget::OnPlayerDeadStateChanged(class AFortPlayerStateAthena* PlayerState, bool bIsDead)
{
	static auto Func = Class->GetFunction("EnergyDrinkStaminaBarOverlayWidget", "OnPlayerDeadStateChanged");

	Params::UEnergyDrinkStaminaBarOverlayWidget_OnPlayerDeadStateChanged_Params Parms;

	Parms.PlayerState = PlayerState;
	Parms.bIsDead = bIsDead;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
