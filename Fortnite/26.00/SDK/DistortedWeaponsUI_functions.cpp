#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DistortedWeaponsUI.ChromeWeaponInfoWidget
// (None)

class UClass* UChromeWeaponInfoWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChromeWeaponInfoWidget");

	return Clss;
}


// ChromeWeaponInfoWidget DistortedWeaponsUI.Default__ChromeWeaponInfoWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UChromeWeaponInfoWidget* UChromeWeaponInfoWidget::GetDefaultObj()
{
	static class UChromeWeaponInfoWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UChromeWeaponInfoWidget*>(UChromeWeaponInfoWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function DistortedWeaponsUI.ChromeWeaponInfoWidget.OnWeaponUpgraded
// (Event, Protected, BlueprintEvent)
// Parameters:

void UChromeWeaponInfoWidget::OnWeaponUpgraded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromeWeaponInfoWidget", "OnWeaponUpgraded");

	Params::UChromeWeaponInfoWidget_OnWeaponUpgraded_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DistortedWeaponsUI.ChromeWeaponInfoWidget.OnWeaponStartUpgrading
// (Event, Protected, BlueprintEvent)
// Parameters:

void UChromeWeaponInfoWidget::OnWeaponStartUpgrading()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromeWeaponInfoWidget", "OnWeaponStartUpgrading");

	Params::UChromeWeaponInfoWidget_OnWeaponStartUpgrading_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DistortedWeaponsUI.ChromeWeaponInfoWidget.OnWeaponRemoved
// (Event, Protected, BlueprintEvent)
// Parameters:

void UChromeWeaponInfoWidget::OnWeaponRemoved()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromeWeaponInfoWidget", "OnWeaponRemoved");

	Params::UChromeWeaponInfoWidget_OnWeaponRemoved_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DistortedWeaponsUI.ChromeWeaponInfoWidget.OnWeaponEquipped
// (Event, Protected, BlueprintEvent)
// Parameters:

void UChromeWeaponInfoWidget::OnWeaponEquipped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromeWeaponInfoWidget", "OnWeaponEquipped");

	Params::UChromeWeaponInfoWidget_OnWeaponEquipped_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function DistortedWeaponsUI.ChromeWeaponInfoWidget.OnReadyToUpgradeWeapon
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortRarity             NextRarity                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromeWeaponInfoWidget::OnReadyToUpgradeWeapon(enum class EFortRarity NextRarity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromeWeaponInfoWidget", "OnReadyToUpgradeWeapon");

	Params::UChromeWeaponInfoWidget_OnReadyToUpgradeWeapon_Params Parms{};

	Parms.NextRarity = NextRarity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DistortedWeaponsUI.ChromeWeaponInfoWidget.OnGainedXp
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              CurrentXPPercentage                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromeWeaponInfoWidget::OnGainedXp(float CurrentXPPercentage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromeWeaponInfoWidget", "OnGainedXp");

	Params::UChromeWeaponInfoWidget_OnGainedXp_Params Parms{};

	Parms.CurrentXPPercentage = CurrentXPPercentage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DistortedWeaponsUI.ChromeWeaponInfoWidget.HandleXpChanged
// (Final, Native, Protected)
// Parameters:
// float                              XPDelta                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CurrentXPPercentage                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromeWeaponInfoWidget::HandleXpChanged(float XPDelta, float CurrentXPPercentage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromeWeaponInfoWidget", "HandleXpChanged");

	Params::UChromeWeaponInfoWidget_HandleXpChanged_Params Parms{};

	Parms.XPDelta = XPDelta;
	Parms.CurrentXPPercentage = CurrentXPPercentage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DistortedWeaponsUI.ChromeWeaponInfoWidget.HandleWeaponUpgraded
// (Final, Native, Protected)
// Parameters:

void UChromeWeaponInfoWidget::HandleWeaponUpgraded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromeWeaponInfoWidget", "HandleWeaponUpgraded");

	Params::UChromeWeaponInfoWidget_HandleWeaponUpgraded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DistortedWeaponsUI.ChromeWeaponInfoWidget.HandleWeaponUnEquipped
// (Final, Native, Protected)
// Parameters:

void UChromeWeaponInfoWidget::HandleWeaponUnEquipped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromeWeaponInfoWidget", "HandleWeaponUnEquipped");

	Params::UChromeWeaponInfoWidget_HandleWeaponUnEquipped_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DistortedWeaponsUI.ChromeWeaponInfoWidget.HandleWeaponEquipped
// (Final, Native, Protected)
// Parameters:
// class UFortWeapon*                 NewWeapon                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortWeapon*                 PrevWeapon                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromeWeaponInfoWidget::HandleWeaponEquipped(class UFortWeapon* NewWeapon, class UFortWeapon* PrevWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromeWeaponInfoWidget", "HandleWeaponEquipped");

	Params::UChromeWeaponInfoWidget_HandleWeaponEquipped_Params Parms{};

	Parms.NewWeapon = NewWeapon;
	Parms.PrevWeapon = PrevWeapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DistortedWeaponsUI.ChromeWeaponInfoWidget.HandleUpgradeTriggered
// (Final, Native, Protected)
// Parameters:
// float                              ReloadTime                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortWeaponReloadType   ReloadType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChromeWeaponInfoWidget::HandleUpgradeTriggered(float ReloadTime, enum class EFortWeaponReloadType ReloadType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromeWeaponInfoWidget", "HandleUpgradeTriggered");

	Params::UChromeWeaponInfoWidget_HandleUpgradeTriggered_Params Parms{};

	Parms.ReloadTime = ReloadTime;
	Parms.ReloadType = ReloadType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DistortedWeaponsUI.ChromeWeaponInfoWidget.HandlePowerUpPending
// (Final, Native, Protected)
// Parameters:

void UChromeWeaponInfoWidget::HandlePowerUpPending()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromeWeaponInfoWidget", "HandlePowerUpPending");

	Params::UChromeWeaponInfoWidget_HandlePowerUpPending_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DistortedWeaponsUI.ChromeWeaponInfoWidget.GetCurrentWeaponRarity
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFortRarity             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFortRarity UChromeWeaponInfoWidget::GetCurrentWeaponRarity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChromeWeaponInfoWidget", "GetCurrentWeaponRarity");

	Params::UChromeWeaponInfoWidget_GetCurrentWeaponRarity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


