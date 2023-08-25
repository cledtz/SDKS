#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class HoagieUI.FortHoagieVehicleReticle
// (None)

class UClass* UFortHoagieVehicleReticle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortHoagieVehicleReticle");

	return Clss;
}


// FortHoagieVehicleReticle HoagieUI.Default__FortHoagieVehicleReticle
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortHoagieVehicleReticle* UFortHoagieVehicleReticle::GetDefaultObj()
{
	static class UFortHoagieVehicleReticle* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortHoagieVehicleReticle*>(UFortHoagieVehicleReticle::StaticClass()->DefaultObject);

	return Default;
}


// Function HoagieUI.FortHoagieVehicleReticle.OnSetupComplete
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bVehicleUsesFuelSystem                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHoagieVehicleReticle::OnSetupComplete(bool bVehicleUsesFuelSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortHoagieVehicleReticle", "OnSetupComplete");

	Params::UFortHoagieVehicleReticle_OnSetupComplete_Params Parms{};

	Parms.bVehicleUsesFuelSystem = bVehicleUsesFuelSystem;

	UObject::ProcessEvent(Func, &Parms);

}

}


