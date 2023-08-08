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


// Function TankRuntime.FortTankVehicleAnimInstance.UpdateMIDEngineProperties
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// float                              DeltaSeconds                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EngineHealthRatio                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortTankVehicleAnimInstance::UpdateMIDEngineProperties(float DeltaSeconds, float EngineHealthRatio)
{
	static auto Func = Class->GetFunction("FortTankVehicleAnimInstance", "UpdateMIDEngineProperties");

	Params::UFortTankVehicleAnimInstance_UpdateMIDEngineProperties_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.EngineHealthRatio = EngineHealthRatio;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function TankRuntime.FortTankVehicleAudioController.PlayTurningOneShot
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortTankVehicleAudioController::PlayTurningOneShot()
{
	static auto Func = Class->GetFunction("FortTankVehicleAudioController", "PlayTurningOneShot");

	Params::UFortTankVehicleAudioController_PlayTurningOneShot_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TankRuntime.FortTankVehicleAudioController.PlayDecelOneShot
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortTankVehicleAudioController::PlayDecelOneShot()
{
	static auto Func = Class->GetFunction("FortTankVehicleAudioController", "PlayDecelOneShot");

	Params::UFortTankVehicleAudioController_PlayDecelOneShot_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TankRuntime.FortTankVehicleAudioController.PlayAccelOneShot
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortTankVehicleAudioController::PlayAccelOneShot()
{
	static auto Func = Class->GetFunction("FortTankVehicleAudioController", "PlayAccelOneShot");

	Params::UFortTankVehicleAudioController_PlayAccelOneShot_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TankRuntime.FortTankVehicleAudioController.GetTankVehicleActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortTankVehicle*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortTankVehicle* UFortTankVehicleAudioController::GetTankVehicleActor()
{
	static auto Func = Class->GetFunction("FortTankVehicleAudioController", "GetTankVehicleActor");

	Params::UFortTankVehicleAudioController_GetTankVehicleActor_Params Parms;


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
