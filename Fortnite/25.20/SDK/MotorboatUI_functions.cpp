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


// Function MotorboatUI.FortAthenaVehicleDashboardWidget_Meatball.GetMeatballVehicle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFortMeatballVehicle*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AFortMeatballVehicle* UFortAthenaVehicleDashboardWidget_Meatball::GetMeatballVehicle()
{
	static auto Func = Class->GetFunction("FortAthenaVehicleDashboardWidget_Meatball", "GetMeatballVehicle");

	Params::UFortAthenaVehicleDashboardWidget_Meatball_GetMeatballVehicle_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
