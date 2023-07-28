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


// Function DynamicAthenaHUD.DynamicAthenaHUDDirector.HandleExitingVehicle
// (Final, Native, Private)
// Parameters:

void UDynamicAthenaHUDDirector::HandleExitingVehicle()
{
	static auto Func = Class->GetFunction("DynamicAthenaHUDDirector", "HandleExitingVehicle");

	Params::UDynamicAthenaHUDDirector_HandleExitingVehicle_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DynamicAthenaHUD.DynamicAthenaHUDDirector.HandleEnteringVehicle
// (Final, Native, Private)
// Parameters:

void UDynamicAthenaHUDDirector::HandleEnteringVehicle()
{
	static auto Func = Class->GetFunction("DynamicAthenaHUDDirector", "HandleEnteringVehicle");

	Params::UDynamicAthenaHUDDirector_HandleEnteringVehicle_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function DynamicAthenaHUD.DynamicAthenaHUDDirector.HandleCreativeQuickbarEquippedChanged
// (Final, Native, Private)
// Parameters:
// bool                               bIsQuickbarEquipped                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDynamicAthenaHUDDirector::HandleCreativeQuickbarEquippedChanged(bool bIsQuickbarEquipped)
{
	static auto Func = Class->GetFunction("DynamicAthenaHUDDirector", "HandleCreativeQuickbarEquippedChanged");

	Params::UDynamicAthenaHUDDirector_HandleCreativeQuickbarEquippedChanged_Params Parms;

	Parms.bIsQuickbarEquipped = bIsQuickbarEquipped;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
