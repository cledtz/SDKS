#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SrirachaRanchValet.StreamingRadioPlayerComponent_Valet
// (None)

class UClass* UStreamingRadioPlayerComponent_Valet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StreamingRadioPlayerComponent_Valet");

	return Clss;
}


// StreamingRadioPlayerComponent_Valet SrirachaRanchValet.Default__StreamingRadioPlayerComponent_Valet
// (Public, ClassDefaultObject, ArchetypeObject)

class UStreamingRadioPlayerComponent_Valet* UStreamingRadioPlayerComponent_Valet::GetDefaultObj()
{
	static class UStreamingRadioPlayerComponent_Valet* Default = nullptr;

	if (!Default)
		Default = static_cast<UStreamingRadioPlayerComponent_Valet*>(UStreamingRadioPlayerComponent_Valet::StaticClass()->DefaultObject);

	return Default;
}


// Function SrirachaRanchValet.StreamingRadioPlayerComponent_Valet.VehicleExploded
// (Final, Native, Protected)
// Parameters:
// class UController*                 LastDamageInstigator                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAthenaVehicle*          Vehicle                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent_Valet::VehicleExploded(class UController* LastDamageInstigator, class UFortAthenaVehicle* Vehicle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StreamingRadioPlayerComponent_Valet", "VehicleExploded");

	Params::UStreamingRadioPlayerComponent_Valet_VehicleExploded_Params Parms{};

	Parms.LastDamageInstigator = LastDamageInstigator;
	Parms.Vehicle = Vehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


