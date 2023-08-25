#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SuperstormRuntime.TempestLightningComponent
// (None)

class UClass* UTempestLightningComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TempestLightningComponent");

	return Clss;
}


// TempestLightningComponent SuperstormRuntime.Default__TempestLightningComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UTempestLightningComponent* UTempestLightningComponent::GetDefaultObj()
{
	static class UTempestLightningComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UTempestLightningComponent*>(UTempestLightningComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function SuperstormRuntime.TempestLightningComponent.GetLightningRadius
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTempestLightningComponent::GetLightningRadius()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TempestLightningComponent", "GetLightningRadius");

	Params::UTempestLightningComponent_GetLightningRadius_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SuperstormRuntime.TempestLightningComponent.GetCloudHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTempestLightningComponent::GetCloudHeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TempestLightningComponent", "GetCloudHeight");

	Params::UTempestLightningComponent_GetCloudHeight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SuperstormRuntime.TempestTornadoForcesComponent
// (None)

class UClass* UTempestTornadoForcesComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TempestTornadoForcesComponent");

	return Clss;
}


// TempestTornadoForcesComponent SuperstormRuntime.Default__TempestTornadoForcesComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UTempestTornadoForcesComponent* UTempestTornadoForcesComponent::GetDefaultObj()
{
	static class UTempestTornadoForcesComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UTempestTornadoForcesComponent*>(UTempestTornadoForcesComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function SuperstormRuntime.TempestTornadoForcesComponent.OnVehicleInTornadoPlayerExit
// (Final, Native, Private)
// Parameters:
// class UFortPlayerControllerAthena* PlayerController                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAthenaVehicle*          Vehicle                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTempestTornadoForcesComponent::OnVehicleInTornadoPlayerExit(class UFortPlayerControllerAthena* PlayerController, class UFortAthenaVehicle* Vehicle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TempestTornadoForcesComponent", "OnVehicleInTornadoPlayerExit");

	Params::UTempestTornadoForcesComponent_OnVehicleInTornadoPlayerExit_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.Vehicle = Vehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SuperstormRuntime.TempestTornadoForcesComponent.IsActorInTornado
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTempestTornadoForcesComponent::IsActorInTornado(class UActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TempestTornadoForcesComponent", "IsActorInTornado");

	Params::UTempestTornadoForcesComponent_IsActorInTornado_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SuperstormRuntime.TornadoRadialForce
// (Actor)

class UClass* UTornadoRadialForce::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TornadoRadialForce");

	return Clss;
}


// TornadoRadialForce SuperstormRuntime.Default__TornadoRadialForce
// (Public, ClassDefaultObject, ArchetypeObject)

class UTornadoRadialForce* UTornadoRadialForce::GetDefaultObj()
{
	static class UTornadoRadialForce* Default = nullptr;

	if (!Default)
		Default = static_cast<UTornadoRadialForce*>(UTornadoRadialForce::StaticClass()->DefaultObject);

	return Default;
}

}


