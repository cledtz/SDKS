#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class TankRuntime.FortTankVehicleConfigs
// (None)

class UClass* UFortTankVehicleConfigs::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortTankVehicleConfigs");

	return Clss;
}


// FortTankVehicleConfigs TankRuntime.Default__FortTankVehicleConfigs
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortTankVehicleConfigs* UFortTankVehicleConfigs::GetDefaultObj()
{
	static class UFortTankVehicleConfigs* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortTankVehicleConfigs*>(UFortTankVehicleConfigs::StaticClass()->DefaultObject);

	return Default;
}


// Class TankRuntime.FortTankAnimFunctionLibrary
// (None)

class UClass* UFortTankAnimFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortTankAnimFunctionLibrary");

	return Clss;
}


// FortTankAnimFunctionLibrary TankRuntime.Default__FortTankAnimFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortTankAnimFunctionLibrary* UFortTankAnimFunctionLibrary::GetDefaultObj()
{
	static class UFortTankAnimFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortTankAnimFunctionLibrary*>(UFortTankAnimFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Class TankRuntime.FortTankVehicle
// (Actor, Pawn)

class UClass* UFortTankVehicle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortTankVehicle");

	return Clss;
}


// FortTankVehicle TankRuntime.Default__FortTankVehicle
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortTankVehicle* UFortTankVehicle::GetDefaultObj()
{
	static class UFortTankVehicle* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortTankVehicle*>(UFortTankVehicle::StaticClass()->DefaultObject);

	return Default;
}


// Class TankRuntime.FortTankVehicleAnimInstance
// (None)

class UClass* UFortTankVehicleAnimInstance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortTankVehicleAnimInstance");

	return Clss;
}


// FortTankVehicleAnimInstance TankRuntime.Default__FortTankVehicleAnimInstance
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortTankVehicleAnimInstance* UFortTankVehicleAnimInstance::GetDefaultObj()
{
	static class UFortTankVehicleAnimInstance* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortTankVehicleAnimInstance*>(UFortTankVehicleAnimInstance::StaticClass()->DefaultObject);

	return Default;
}


// Function TankRuntime.FortTankVehicleAnimInstance.UpdateMIDEngineProperties
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// float                              DeltaSeconds                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EngineHealthRatio                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortTankVehicleAnimInstance::UpdateMIDEngineProperties(float DeltaSeconds, float EngineHealthRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortTankVehicleAnimInstance", "UpdateMIDEngineProperties");

	Params::UFortTankVehicleAnimInstance_UpdateMIDEngineProperties_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.EngineHealthRatio = EngineHealthRatio;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class TankRuntime.FortTankVehicleAudioController
// (Actor)

class UClass* UFortTankVehicleAudioController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortTankVehicleAudioController");

	return Clss;
}


// FortTankVehicleAudioController TankRuntime.Default__FortTankVehicleAudioController
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortTankVehicleAudioController* UFortTankVehicleAudioController::GetDefaultObj()
{
	static class UFortTankVehicleAudioController* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortTankVehicleAudioController*>(UFortTankVehicleAudioController::StaticClass()->DefaultObject);

	return Default;
}


// Function TankRuntime.FortTankVehicleAudioController.PlayTurningOneShot
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortTankVehicleAudioController::PlayTurningOneShot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortTankVehicleAudioController", "PlayTurningOneShot");

	Params::UFortTankVehicleAudioController_PlayTurningOneShot_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function TankRuntime.FortTankVehicleAudioController.PlayDecelOneShot
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortTankVehicleAudioController::PlayDecelOneShot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortTankVehicleAudioController", "PlayDecelOneShot");

	Params::UFortTankVehicleAudioController_PlayDecelOneShot_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function TankRuntime.FortTankVehicleAudioController.PlayAccelOneShot
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortTankVehicleAudioController::PlayAccelOneShot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortTankVehicleAudioController", "PlayAccelOneShot");

	Params::UFortTankVehicleAudioController_PlayAccelOneShot_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function TankRuntime.FortTankVehicleAudioController.GetTankVehicleActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortTankVehicle*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortTankVehicle* UFortTankVehicleAudioController::GetTankVehicleActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortTankVehicleAudioController", "GetTankVehicleActor");

	Params::UFortTankVehicleAudioController_GetTankVehicleActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


