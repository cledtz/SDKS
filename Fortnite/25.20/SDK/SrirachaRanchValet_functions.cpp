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


// Function SrirachaRanchValet.StreamingRadioPlayerComponent_Valet.VehicleExploded
// (Final, Native, Protected)
// Parameters:
// class AController*                 LastDamageInstigator                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortAthenaVehicle*          Vehicle                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStreamingRadioPlayerComponent_Valet::VehicleExploded(class AController* LastDamageInstigator, class AFortAthenaVehicle* Vehicle)
{
	static auto Func = Class->GetFunction("StreamingRadioPlayerComponent_Valet", "VehicleExploded");

	Params::UStreamingRadioPlayerComponent_Valet_VehicleExploded_Params Parms;

	Parms.LastDamageInstigator = LastDamageInstigator;
	Parms.Vehicle = Vehicle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
