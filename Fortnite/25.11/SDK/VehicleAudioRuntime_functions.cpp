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


// Function VehicleAudioRuntime.VehicleAudioLifecycleInterface.OnUpdate
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVehicleAudioLifecycleInterface::OnUpdate(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("VehicleAudioLifecycleInterface", "OnUpdate");

	Params::UVehicleAudioLifecycleInterface_OnUpdate_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VehicleAudioRuntime.VehicleAudioLifecycleInterface.OnShutdown
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UVehicleAudioLifecycleInterface::OnShutdown()
{
	static auto Func = Class->GetFunction("VehicleAudioLifecycleInterface", "OnShutdown");

	Params::UVehicleAudioLifecycleInterface_OnShutdown_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VehicleAudioRuntime.VehicleAudioLifecycleInterface.OnInit
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UVehicleAudioLifecycleInterface::OnInit()
{
	static auto Func = Class->GetFunction("VehicleAudioLifecycleInterface", "OnInit");

	Params::UVehicleAudioLifecycleInterface_OnInit_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VehicleAudioRuntime.FortVehicleAudioController.UpdateMotorModelNative
// (Native, Protected, BlueprintCallable)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortVehicleAudioController::UpdateMotorModelNative(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("FortVehicleAudioController", "UpdateMotorModelNative");

	Params::AFortVehicleAudioController_UpdateMotorModelNative_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VehicleAudioRuntime.FortVehicleAudioController.Update
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortVehicleAudioController::Update(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("FortVehicleAudioController", "Update");

	Params::AFortVehicleAudioController_Update_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VehicleAudioRuntime.FortVehicleAudioController.Shutdown
// (Native, Public, BlueprintCallable)
// Parameters:

void AFortVehicleAudioController::Shutdown()
{
	static auto Func = Class->GetFunction("FortVehicleAudioController", "Shutdown");

	Params::AFortVehicleAudioController_Shutdown_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VehicleAudioRuntime.FortVehicleAudioController.SetVehicle
// (Native, Public, BlueprintCallable)
// Parameters:
// class AFortAthenaVehicle*          InVehicle                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortVehicleAudioController::SetVehicle(class AFortAthenaVehicle* InVehicle)
{
	static auto Func = Class->GetFunction("FortVehicleAudioController", "SetVehicle");

	Params::AFortVehicleAudioController_SetVehicle_Params Parms;

	Parms.InVehicle = InVehicle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VehicleAudioRuntime.FortVehicleAudioController.SetRedlineActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortVehicleAudioController::SetRedlineActive(bool bEnabled)
{
	static auto Func = Class->GetFunction("FortVehicleAudioController", "SetRedlineActive");

	Params::AFortVehicleAudioController_SetRedlineActive_Params Parms;

	Parms.bEnabled = bEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VehicleAudioRuntime.FortVehicleAudioController.SetLayeredAudioComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortLayeredAudioComponent*  InComponent                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AFortVehicleAudioController::SetLayeredAudioComponent(class UFortLayeredAudioComponent* InComponent)
{
	static auto Func = Class->GetFunction("FortVehicleAudioController", "SetLayeredAudioComponent");

	Params::AFortVehicleAudioController_SetLayeredAudioComponent_Params Parms;

	Parms.InComponent = InComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VehicleAudioRuntime.FortVehicleAudioController.IsNativizationEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortVehicleAudioController::IsNativizationEnabled()
{
	static auto Func = Class->GetFunction("FortVehicleAudioController", "IsNativizationEnabled");

	Params::AFortVehicleAudioController_IsNativizationEnabled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VehicleAudioRuntime.FortVehicleAudioController.Init
// (Native, Public, BlueprintCallable)
// Parameters:

void AFortVehicleAudioController::Init()
{
	static auto Func = Class->GetFunction("FortVehicleAudioController", "Init");

	Params::AFortVehicleAudioController_Init_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VehicleAudioRuntime.FortVehicleAudioController.GetVehicleActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFortAthenaVehicle*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AFortAthenaVehicle* AFortVehicleAudioController::GetVehicleActor()
{
	static auto Func = Class->GetFunction("FortVehicleAudioController", "GetVehicleActor");

	Params::AFortVehicleAudioController_GetVehicleActor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VehicleAudioRuntime.FortVehicleAudioController.GetThrottleNative
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortVehicleAudioController::GetThrottleNative()
{
	static auto Func = Class->GetFunction("FortVehicleAudioController", "GetThrottleNative");

	Params::AFortVehicleAudioController_GetThrottleNative_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VehicleAudioRuntime.FortVehicleAudioController.GetREVComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UREVComponent*               ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UREVComponent* AFortVehicleAudioController::GetREVComponent()
{
	static auto Func = Class->GetFunction("FortVehicleAudioController", "GetREVComponent");

	Params::AFortVehicleAudioController_GetREVComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VehicleAudioRuntime.FortVehicleAudioController.GetRedlineActive
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AFortVehicleAudioController::GetRedlineActive()
{
	static auto Func = Class->GetFunction("FortVehicleAudioController", "GetRedlineActive");

	Params::AFortVehicleAudioController_GetRedlineActive_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VehicleAudioRuntime.FortVehicleAudioController.GetPhysicsVehicleConfigs
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortPhysicsVehicleConfigs*  ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortPhysicsVehicleConfigs* AFortVehicleAudioController::GetPhysicsVehicleConfigs()
{
	static auto Func = Class->GetFunction("FortVehicleAudioController", "GetPhysicsVehicleConfigs");

	Params::AFortVehicleAudioController_GetPhysicsVehicleConfigs_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VehicleAudioRuntime.FortVehicleAudioController.GetLayeredAudioComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortLayeredAudioComponent*  ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortLayeredAudioComponent* AFortVehicleAudioController::GetLayeredAudioComponent()
{
	static auto Func = Class->GetFunction("FortVehicleAudioController", "GetLayeredAudioComponent");

	Params::AFortVehicleAudioController_GetLayeredAudioComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VehicleAudioRuntime.FortVehicleAudioController.GetJitterTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortVehicleAudioController::GetJitterTime()
{
	static auto Func = Class->GetFunction("FortVehicleAudioController", "GetJitterTime");

	Params::AFortVehicleAudioController_GetJitterTime_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VehicleAudioRuntime.FortVehicleAudioController.GetBrakingNative
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AFortVehicleAudioController::GetBrakingNative()
{
	static auto Func = Class->GetFunction("FortVehicleAudioController", "GetBrakingNative");

	Params::AFortVehicleAudioController_GetBrakingNative_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VehicleAudioRuntime.FortVehicleAudioController.GetAudioParameterComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAudioParameterComponent*    ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAudioParameterComponent* AFortVehicleAudioController::GetAudioParameterComponent()
{
	static auto Func = Class->GetFunction("FortVehicleAudioController", "GetAudioParameterComponent");

	Params::AFortVehicleAudioController_GetAudioParameterComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VehicleAudioRuntime.FortVehicleAudioController.GetAudioMotorModelComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAudioMotorModelComponent*   ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAudioMotorModelComponent* AFortVehicleAudioController::GetAudioMotorModelComponent()
{
	static auto Func = Class->GetFunction("FortVehicleAudioController", "GetAudioMotorModelComponent");

	Params::AFortVehicleAudioController_GetAudioMotorModelComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VehicleAudioRuntime.FortVehicleAudioController.CacheJitterTime
// (Native, Public, BlueprintCallable)
// Parameters:

void AFortVehicleAudioController::CacheJitterTime()
{
	static auto Func = Class->GetFunction("FortVehicleAudioController", "CacheJitterTime");

	Params::AFortVehicleAudioController_CacheJitterTime_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VehicleAudioRuntime.FortVehicleSoundComponent.Update
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortVehicleSoundComponent::Update(float DeltaSeconds)
{
	static auto Func = Class->GetFunction("FortVehicleSoundComponent", "Update");

	Params::UFortVehicleSoundComponent_Update_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VehicleAudioRuntime.FortVehicleSoundComponent.Shutdown
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortVehicleSoundComponent::Shutdown()
{
	static auto Func = Class->GetFunction("FortVehicleSoundComponent", "Shutdown");

	Params::UFortVehicleSoundComponent_Shutdown_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VehicleAudioRuntime.FortVehicleSoundComponent.Init
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortVehicleSoundComponent::Init()
{
	static auto Func = Class->GetFunction("FortVehicleSoundComponent", "Init");

	Params::UFortVehicleSoundComponent_Init_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VehicleAudioRuntime.FortVehicleSoundComponent.GetVehicleActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFortAthenaVehicle*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AFortAthenaVehicle* UFortVehicleSoundComponent::GetVehicleActor()
{
	static auto Func = Class->GetFunction("FortVehicleSoundComponent", "GetVehicleActor");

	Params::UFortVehicleSoundComponent_GetVehicleActor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VehicleAudioRuntime.FortVehicleSoundComponent.GetRootComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USceneComponent*             ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USceneComponent* UFortVehicleSoundComponent::GetRootComponent()
{
	static auto Func = Class->GetFunction("FortVehicleSoundComponent", "GetRootComponent");

	Params::UFortVehicleSoundComponent_GetRootComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VehicleAudioRuntime.FortVehicleSoundComponent.GetREVComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UREVComponent*               ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UREVComponent* UFortVehicleSoundComponent::GetREVComponent()
{
	static auto Func = Class->GetFunction("FortVehicleSoundComponent", "GetREVComponent");

	Params::UFortVehicleSoundComponent_GetREVComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VehicleAudioRuntime.FortVehicleSoundComponent.GetPhysicsVehicleConfigs
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortPhysicsVehicleConfigs*  ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortPhysicsVehicleConfigs* UFortVehicleSoundComponent::GetPhysicsVehicleConfigs()
{
	static auto Func = Class->GetFunction("FortVehicleSoundComponent", "GetPhysicsVehicleConfigs");

	Params::UFortVehicleSoundComponent_GetPhysicsVehicleConfigs_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VehicleAudioRuntime.FortVehicleSoundComponent.GetMotorModelComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAudioMotorModelComponent*   ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAudioMotorModelComponent* UFortVehicleSoundComponent::GetMotorModelComponent()
{
	static auto Func = Class->GetFunction("FortVehicleSoundComponent", "GetMotorModelComponent");

	Params::UFortVehicleSoundComponent_GetMotorModelComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VehicleAudioRuntime.FortVehicleSoundComponent.GetLayeredAudioComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortLayeredAudioComponent*  ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortLayeredAudioComponent* UFortVehicleSoundComponent::GetLayeredAudioComponent()
{
	static auto Func = Class->GetFunction("FortVehicleSoundComponent", "GetLayeredAudioComponent");

	Params::UFortVehicleSoundComponent_GetLayeredAudioComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VehicleAudioRuntime.FortVehicleSoundComponent.GetAudioParameterComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAudioParameterComponent*    ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAudioParameterComponent* UFortVehicleSoundComponent::GetAudioParameterComponent()
{
	static auto Func = Class->GetFunction("FortVehicleSoundComponent", "GetAudioParameterComponent");

	Params::UFortVehicleSoundComponent_GetAudioParameterComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VehicleAudioRuntime.FortVehicleSoundComponent.GetAudioController
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AFortVehicleAudioController* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AFortVehicleAudioController* UFortVehicleSoundComponent::GetAudioController()
{
	static auto Func = Class->GetFunction("FortVehicleSoundComponent", "GetAudioController");

	Params::UFortVehicleSoundComponent_GetAudioController_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VehicleAudioRuntime.FortVehicleSoundComponent_Speed.OnReversedChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bReversing                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortVehicleSoundComponent_Speed::OnReversedChanged(bool bReversing)
{
	static auto Func = Class->GetFunction("FortVehicleSoundComponent_Speed", "OnReversedChanged");

	Params::UFortVehicleSoundComponent_Speed_OnReversedChanged_Params Parms;

	Parms.bReversing = bReversing;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VehicleAudioRuntime.FortVehicleSoundComponent_Surface.OnSurfaceChanged
// (Final, Native, Public)
// Parameters:
// enum class EPhysicalSurface        NewSurface                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortVehicleSoundComponent_Surface::OnSurfaceChanged(enum class EPhysicalSurface NewSurface)
{
	static auto Func = Class->GetFunction("FortVehicleSoundComponent_Surface", "OnSurfaceChanged");

	Params::UFortVehicleSoundComponent_Surface_OnSurfaceChanged_Params Parms;

	Parms.NewSurface = NewSurface;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VehicleAudioRuntime.FortVehicleSoundComponent_Surface.OnSkiddingChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bNewState                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortVehicleSoundComponent_Surface::OnSkiddingChanged(bool bNewState)
{
	static auto Func = Class->GetFunction("FortVehicleSoundComponent_Surface", "OnSkiddingChanged");

	Params::UFortVehicleSoundComponent_Surface_OnSkiddingChanged_Params Parms;

	Parms.bNewState = bNewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VehicleAudioRuntime.FortVehicleSoundComponent_Surface.OnInAirChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bNewState                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortVehicleSoundComponent_Surface::OnInAirChanged(bool bNewState)
{
	static auto Func = Class->GetFunction("FortVehicleSoundComponent_Surface", "OnInAirChanged");

	Params::UFortVehicleSoundComponent_Surface_OnInAirChanged_Params Parms;

	Parms.bNewState = bNewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VehicleAudioRuntime.FortVehicleSoundComponent_Surface.OnBrakingChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bNewState                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortVehicleSoundComponent_Surface::OnBrakingChanged(bool bNewState)
{
	static auto Func = Class->GetFunction("FortVehicleSoundComponent_Surface", "OnBrakingChanged");

	Params::UFortVehicleSoundComponent_Surface_OnBrakingChanged_Params Parms;

	Parms.bNewState = bNewState;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
