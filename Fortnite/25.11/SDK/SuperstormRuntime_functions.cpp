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


// Function SuperstormRuntime.TempestLightningComponent.GetLightningRadius
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTempestLightningComponent::GetLightningRadius()
{
	static auto Func = Class->GetFunction("TempestLightningComponent", "GetLightningRadius");

	Params::UTempestLightningComponent_GetLightningRadius_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SuperstormRuntime.TempestLightningComponent.GetCloudHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTempestLightningComponent::GetCloudHeight()
{
	static auto Func = Class->GetFunction("TempestLightningComponent", "GetCloudHeight");

	Params::UTempestLightningComponent_GetCloudHeight_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SuperstormRuntime.TempestTornadoForcesComponent.OnVehicleInTornadoPlayerExit
// (Final, Native, Private)
// Parameters:
// class AFortPlayerControllerAthena* PlayerController                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortAthenaVehicle*          Vehicle                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTempestTornadoForcesComponent::OnVehicleInTornadoPlayerExit(class AFortPlayerControllerAthena* PlayerController, class AFortAthenaVehicle* Vehicle)
{
	static auto Func = Class->GetFunction("TempestTornadoForcesComponent", "OnVehicleInTornadoPlayerExit");

	Params::UTempestTornadoForcesComponent_OnVehicleInTornadoPlayerExit_Params Parms;

	Parms.PlayerController = PlayerController;
	Parms.Vehicle = Vehicle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SuperstormRuntime.TempestTornadoForcesComponent.IsActorInTornado
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTempestTornadoForcesComponent::IsActorInTornado(class AActor* Actor)
{
	static auto Func = Class->GetFunction("TempestTornadoForcesComponent", "IsActorInTornado");

	Params::UTempestTornadoForcesComponent_IsActorInTornado_Params Parms;

	Parms.Actor = Actor;

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
