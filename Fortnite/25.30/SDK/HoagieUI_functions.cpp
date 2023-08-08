#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function HoagieUI.FortHoagieVehicleReticle.OnSetupComplete
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bVehicleUsesFuelSystem                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortHoagieVehicleReticle::OnSetupComplete(bool bVehicleUsesFuelSystem)
{
	static auto Func = Class->GetFunction("FortHoagieVehicleReticle", "OnSetupComplete");

	Params::UFortHoagieVehicleReticle_OnSetupComplete_Params Parms;

	Parms.bVehicleUsesFuelSystem = bVehicleUsesFuelSystem;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
