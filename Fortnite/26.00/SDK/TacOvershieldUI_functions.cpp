#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class TacOvershieldUI.TacOvershieldPlayerInfoWidget
// (None)

class UClass* UTacOvershieldPlayerInfoWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TacOvershieldPlayerInfoWidget");

	return Clss;
}


// TacOvershieldPlayerInfoWidget TacOvershieldUI.Default__TacOvershieldPlayerInfoWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UTacOvershieldPlayerInfoWidget* UTacOvershieldPlayerInfoWidget::GetDefaultObj()
{
	static class UTacOvershieldPlayerInfoWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UTacOvershieldPlayerInfoWidget*>(UTacOvershieldPlayerInfoWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function TacOvershieldUI.TacOvershieldPlayerInfoWidget.OnPlayerStateSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortPlayerStateAthena*      InPlayerState                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTacOvershieldPlayerInfoWidget::OnPlayerStateSet(class UFortPlayerStateAthena* InPlayerState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TacOvershieldPlayerInfoWidget", "OnPlayerStateSet");

	Params::UTacOvershieldPlayerInfoWidget_OnPlayerStateSet_Params Parms{};

	Parms.InPlayerState = InPlayerState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TacOvershieldUI.TacOvershieldPlayerInfoWidget.OnOvershieldStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Overshield                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OvershieldMax                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTacOvershieldPlayerInfoWidget::OnOvershieldStateChanged(float Overshield, float OvershieldMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TacOvershieldPlayerInfoWidget", "OnOvershieldStateChanged");

	Params::UTacOvershieldPlayerInfoWidget_OnOvershieldStateChanged_Params Parms{};

	Parms.Overshield = Overshield;
	Parms.OvershieldMax = OvershieldMax;

	UObject::ProcessEvent(Func, &Parms);

}

}


