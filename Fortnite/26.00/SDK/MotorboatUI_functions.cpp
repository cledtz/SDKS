#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MotorboatUI.FortAthenaVehicleDashboardWidget_Meatball
// (None)

class UClass* UFortAthenaVehicleDashboardWidget_Meatball::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaVehicleDashboardWidget_Meatball");

	return Clss;
}


// FortAthenaVehicleDashboardWidget_Meatball MotorboatUI.Default__FortAthenaVehicleDashboardWidget_Meatball
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaVehicleDashboardWidget_Meatball* UFortAthenaVehicleDashboardWidget_Meatball::GetDefaultObj()
{
	static class UFortAthenaVehicleDashboardWidget_Meatball* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaVehicleDashboardWidget_Meatball*>(UFortAthenaVehicleDashboardWidget_Meatball::StaticClass()->DefaultObject);

	return Default;
}


// Function MotorboatUI.FortAthenaVehicleDashboardWidget_Meatball.GetMeatballVehicle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortMeatballVehicle*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortMeatballVehicle* UFortAthenaVehicleDashboardWidget_Meatball::GetMeatballVehicle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaVehicleDashboardWidget_Meatball", "GetMeatballVehicle");

	Params::UFortAthenaVehicleDashboardWidget_Meatball_GetMeatballVehicle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


