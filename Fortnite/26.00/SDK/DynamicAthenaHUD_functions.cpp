#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class DynamicAthenaHUD.DynamicAthenaHUDDirector
// (Actor)

class UClass* UDynamicAthenaHUDDirector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicAthenaHUDDirector");

	return Clss;
}


// DynamicAthenaHUDDirector DynamicAthenaHUD.Default__DynamicAthenaHUDDirector
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicAthenaHUDDirector* UDynamicAthenaHUDDirector::GetDefaultObj()
{
	static class UDynamicAthenaHUDDirector* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicAthenaHUDDirector*>(UDynamicAthenaHUDDirector::StaticClass()->DefaultObject);

	return Default;
}


// Function DynamicAthenaHUD.DynamicAthenaHUDDirector.HandleExitingVehicle
// (Final, Native, Private)
// Parameters:

void UDynamicAthenaHUDDirector::HandleExitingVehicle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicAthenaHUDDirector", "HandleExitingVehicle");

	Params::UDynamicAthenaHUDDirector_HandleExitingVehicle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DynamicAthenaHUD.DynamicAthenaHUDDirector.HandleEnteringVehicle
// (Final, Native, Private)
// Parameters:

void UDynamicAthenaHUDDirector::HandleEnteringVehicle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicAthenaHUDDirector", "HandleEnteringVehicle");

	Params::UDynamicAthenaHUDDirector_HandleEnteringVehicle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function DynamicAthenaHUD.DynamicAthenaHUDDirector.HandleCreativeQuickbarEquippedChanged
// (Final, Native, Private)
// Parameters:
// bool                               bIsQuickbarEquipped                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDynamicAthenaHUDDirector::HandleCreativeQuickbarEquippedChanged(bool bIsQuickbarEquipped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicAthenaHUDDirector", "HandleCreativeQuickbarEquippedChanged");

	Params::UDynamicAthenaHUDDirector_HandleCreativeQuickbarEquippedChanged_Params Parms{};

	Parms.bIsQuickbarEquipped = bIsQuickbarEquipped;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


