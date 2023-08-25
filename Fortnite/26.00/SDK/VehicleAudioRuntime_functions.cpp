#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VehicleAudioRuntime.FortMotorSimComponent_PatternPlayer
// (None)

class UClass* UFortMotorSimComponent_PatternPlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMotorSimComponent_PatternPlayer");

	return Clss;
}


// FortMotorSimComponent_PatternPlayer VehicleAudioRuntime.Default__FortMotorSimComponent_PatternPlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMotorSimComponent_PatternPlayer* UFortMotorSimComponent_PatternPlayer::GetDefaultObj()
{
	static class UFortMotorSimComponent_PatternPlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMotorSimComponent_PatternPlayer*>(UFortMotorSimComponent_PatternPlayer::StaticClass()->DefaultObject);

	return Default;
}


// Class VehicleAudioRuntime.FortMotorSimComponent_SurfaceModifier
// (None)

class UClass* UFortMotorSimComponent_SurfaceModifier::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMotorSimComponent_SurfaceModifier");

	return Clss;
}


// FortMotorSimComponent_SurfaceModifier VehicleAudioRuntime.Default__FortMotorSimComponent_SurfaceModifier
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMotorSimComponent_SurfaceModifier* UFortMotorSimComponent_SurfaceModifier::GetDefaultObj()
{
	static class UFortMotorSimComponent_SurfaceModifier* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMotorSimComponent_SurfaceModifier*>(UFortMotorSimComponent_SurfaceModifier::StaticClass()->DefaultObject);

	return Default;
}


// Function VehicleAudioRuntime.FortMotorSimComponent_SurfaceModifier.SetSurface
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class FName                        NewSurface                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortMotorSimComponent_SurfaceModifier::SetSurface(class FName NewSurface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortMotorSimComponent_SurfaceModifier", "SetSurface");

	Params::UFortMotorSimComponent_SurfaceModifier_SetSurface_Params Parms{};

	Parms.NewSurface = NewSurface;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VehicleAudioRuntime.VehicleAudioLifecycleInterface
// (None)

class UClass* UVehicleAudioLifecycleInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VehicleAudioLifecycleInterface");

	return Clss;
}


// VehicleAudioLifecycleInterface VehicleAudioRuntime.Default__VehicleAudioLifecycleInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UVehicleAudioLifecycleInterface* UVehicleAudioLifecycleInterface::GetDefaultObj()
{
	static class UVehicleAudioLifecycleInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UVehicleAudioLifecycleInterface*>(UVehicleAudioLifecycleInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function VehicleAudioRuntime.VehicleAudioLifecycleInterface.OnUpdate
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVehicleAudioLifecycleInterface::OnUpdate(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleAudioLifecycleInterface", "OnUpdate");

	Params::UVehicleAudioLifecycleInterface_OnUpdate_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VehicleAudioRuntime.VehicleAudioLifecycleInterface.OnShutdown
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UVehicleAudioLifecycleInterface::OnShutdown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleAudioLifecycleInterface", "OnShutdown");

	Params::UVehicleAudioLifecycleInterface_OnShutdown_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VehicleAudioRuntime.VehicleAudioLifecycleInterface.OnInit
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UVehicleAudioLifecycleInterface::OnInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleAudioLifecycleInterface", "OnInit");

	Params::UVehicleAudioLifecycleInterface_OnInit_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VehicleAudioRuntime.FortVehicleAudioController
// (Actor)

class UClass* UFortVehicleAudioController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortVehicleAudioController");

	return Clss;
}


// FortVehicleAudioController VehicleAudioRuntime.Default__FortVehicleAudioController
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortVehicleAudioController* UFortVehicleAudioController::GetDefaultObj()
{
	static class UFortVehicleAudioController* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortVehicleAudioController*>(UFortVehicleAudioController::StaticClass()->DefaultObject);

	return Default;
}


// Function VehicleAudioRuntime.FortVehicleAudioController.UpdateMotorModelNative
// (Native, Protected, BlueprintCallable)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortVehicleAudioController::UpdateMotorModelNative(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleAudioController", "UpdateMotorModelNative");

	Params::UFortVehicleAudioController_UpdateMotorModelNative_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VehicleAudioRuntime.FortVehicleAudioController.Update
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortVehicleAudioController::Update(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleAudioController", "Update");

	Params::UFortVehicleAudioController_Update_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VehicleAudioRuntime.FortVehicleAudioController.Shutdown
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortVehicleAudioController::Shutdown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleAudioController", "Shutdown");

	Params::UFortVehicleAudioController_Shutdown_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VehicleAudioRuntime.FortVehicleAudioController.SetVehicle
// (Native, Public, BlueprintCallable)
// Parameters:
// class UFortAthenaVehicle*          InVehicle                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortVehicleAudioController::SetVehicle(class UFortAthenaVehicle* InVehicle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleAudioController", "SetVehicle");

	Params::UFortVehicleAudioController_SetVehicle_Params Parms{};

	Parms.InVehicle = InVehicle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VehicleAudioRuntime.FortVehicleAudioController.SetRedlineActive
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortVehicleAudioController::SetRedlineActive(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleAudioController", "SetRedlineActive");

	Params::UFortVehicleAudioController_SetRedlineActive_Params Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VehicleAudioRuntime.FortVehicleAudioController.SetLayeredAudioComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortLayeredAudioComponent*  InComponent                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortVehicleAudioController::SetLayeredAudioComponent(class UFortLayeredAudioComponent* InComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleAudioController", "SetLayeredAudioComponent");

	Params::UFortVehicleAudioController_SetLayeredAudioComponent_Params Parms{};

	Parms.InComponent = InComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VehicleAudioRuntime.FortVehicleAudioController.IsNativizationEnabled
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortVehicleAudioController::IsNativizationEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleAudioController", "IsNativizationEnabled");

	Params::UFortVehicleAudioController_IsNativizationEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VehicleAudioRuntime.FortVehicleAudioController.Init
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortVehicleAudioController::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleAudioController", "Init");

	Params::UFortVehicleAudioController_Init_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VehicleAudioRuntime.FortVehicleAudioController.GetVehicleActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaVehicle*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaVehicle* UFortVehicleAudioController::GetVehicleActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleAudioController", "GetVehicleActor");

	Params::UFortVehicleAudioController_GetVehicleActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VehicleAudioRuntime.FortVehicleAudioController.GetThrottleNative
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortVehicleAudioController::GetThrottleNative()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleAudioController", "GetThrottleNative");

	Params::UFortVehicleAudioController_GetThrottleNative_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VehicleAudioRuntime.FortVehicleAudioController.GetREVComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UREVComponent*               ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UREVComponent* UFortVehicleAudioController::GetREVComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleAudioController", "GetREVComponent");

	Params::UFortVehicleAudioController_GetREVComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VehicleAudioRuntime.FortVehicleAudioController.GetRedlineActive
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortVehicleAudioController::GetRedlineActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleAudioController", "GetRedlineActive");

	Params::UFortVehicleAudioController_GetRedlineActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VehicleAudioRuntime.FortVehicleAudioController.GetPhysicsVehicleConfigs
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortPhysicsVehicleConfigs*  ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortPhysicsVehicleConfigs* UFortVehicleAudioController::GetPhysicsVehicleConfigs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleAudioController", "GetPhysicsVehicleConfigs");

	Params::UFortVehicleAudioController_GetPhysicsVehicleConfigs_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VehicleAudioRuntime.FortVehicleAudioController.GetLayeredAudioComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortLayeredAudioComponent*  ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortLayeredAudioComponent* UFortVehicleAudioController::GetLayeredAudioComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleAudioController", "GetLayeredAudioComponent");

	Params::UFortVehicleAudioController_GetLayeredAudioComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VehicleAudioRuntime.FortVehicleAudioController.GetJitterTime
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortVehicleAudioController::GetJitterTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleAudioController", "GetJitterTime");

	Params::UFortVehicleAudioController_GetJitterTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VehicleAudioRuntime.FortVehicleAudioController.GetBrakingNative
// (Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortVehicleAudioController::GetBrakingNative()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleAudioController", "GetBrakingNative");

	Params::UFortVehicleAudioController_GetBrakingNative_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VehicleAudioRuntime.FortVehicleAudioController.GetAudioParameterComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAudioParameterComponent*    ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAudioParameterComponent* UFortVehicleAudioController::GetAudioParameterComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleAudioController", "GetAudioParameterComponent");

	Params::UFortVehicleAudioController_GetAudioParameterComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VehicleAudioRuntime.FortVehicleAudioController.GetAudioMotorModelComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAudioMotorModelComponent*   ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAudioMotorModelComponent* UFortVehicleAudioController::GetAudioMotorModelComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleAudioController", "GetAudioMotorModelComponent");

	Params::UFortVehicleAudioController_GetAudioMotorModelComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VehicleAudioRuntime.FortVehicleAudioController.CacheJitterTime
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortVehicleAudioController::CacheJitterTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleAudioController", "CacheJitterTime");

	Params::UFortVehicleAudioController_CacheJitterTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VehicleAudioRuntime.FortVehicleSoundComponent
// (None)

class UClass* UFortVehicleSoundComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortVehicleSoundComponent");

	return Clss;
}


// FortVehicleSoundComponent VehicleAudioRuntime.Default__FortVehicleSoundComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortVehicleSoundComponent* UFortVehicleSoundComponent::GetDefaultObj()
{
	static class UFortVehicleSoundComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortVehicleSoundComponent*>(UFortVehicleSoundComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function VehicleAudioRuntime.FortVehicleSoundComponent.Update
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortVehicleSoundComponent::Update(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleSoundComponent", "Update");

	Params::UFortVehicleSoundComponent_Update_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VehicleAudioRuntime.FortVehicleSoundComponent.Shutdown
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortVehicleSoundComponent::Shutdown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleSoundComponent", "Shutdown");

	Params::UFortVehicleSoundComponent_Shutdown_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VehicleAudioRuntime.FortVehicleSoundComponent.Init
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortVehicleSoundComponent::Init()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleSoundComponent", "Init");

	Params::UFortVehicleSoundComponent_Init_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VehicleAudioRuntime.FortVehicleSoundComponent.GetVehicleActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaVehicle*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaVehicle* UFortVehicleSoundComponent::GetVehicleActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleSoundComponent", "GetVehicleActor");

	Params::UFortVehicleSoundComponent_GetVehicleActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VehicleAudioRuntime.FortVehicleSoundComponent.GetRootComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USceneComponent*             ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USceneComponent* UFortVehicleSoundComponent::GetRootComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleSoundComponent", "GetRootComponent");

	Params::UFortVehicleSoundComponent_GetRootComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VehicleAudioRuntime.FortVehicleSoundComponent.GetREVComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UREVComponent*               ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UREVComponent* UFortVehicleSoundComponent::GetREVComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleSoundComponent", "GetREVComponent");

	Params::UFortVehicleSoundComponent_GetREVComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VehicleAudioRuntime.FortVehicleSoundComponent.GetPhysicsVehicleConfigs
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortPhysicsVehicleConfigs*  ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortPhysicsVehicleConfigs* UFortVehicleSoundComponent::GetPhysicsVehicleConfigs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleSoundComponent", "GetPhysicsVehicleConfigs");

	Params::UFortVehicleSoundComponent_GetPhysicsVehicleConfigs_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VehicleAudioRuntime.FortVehicleSoundComponent.GetMotorModelComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAudioMotorModelComponent*   ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAudioMotorModelComponent* UFortVehicleSoundComponent::GetMotorModelComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleSoundComponent", "GetMotorModelComponent");

	Params::UFortVehicleSoundComponent_GetMotorModelComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VehicleAudioRuntime.FortVehicleSoundComponent.GetLayeredAudioComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortLayeredAudioComponent*  ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortLayeredAudioComponent* UFortVehicleSoundComponent::GetLayeredAudioComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleSoundComponent", "GetLayeredAudioComponent");

	Params::UFortVehicleSoundComponent_GetLayeredAudioComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VehicleAudioRuntime.FortVehicleSoundComponent.GetAudioParameterComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAudioParameterComponent*    ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAudioParameterComponent* UFortVehicleSoundComponent::GetAudioParameterComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleSoundComponent", "GetAudioParameterComponent");

	Params::UFortVehicleSoundComponent_GetAudioParameterComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VehicleAudioRuntime.FortVehicleSoundComponent.GetAudioController
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortVehicleAudioController* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortVehicleAudioController* UFortVehicleSoundComponent::GetAudioController()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleSoundComponent", "GetAudioController");

	Params::UFortVehicleSoundComponent_GetAudioController_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class VehicleAudioRuntime.FortVehicleSoundComponent_Speed
// (None)

class UClass* UFortVehicleSoundComponent_Speed::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortVehicleSoundComponent_Speed");

	return Clss;
}


// FortVehicleSoundComponent_Speed VehicleAudioRuntime.Default__FortVehicleSoundComponent_Speed
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortVehicleSoundComponent_Speed* UFortVehicleSoundComponent_Speed::GetDefaultObj()
{
	static class UFortVehicleSoundComponent_Speed* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortVehicleSoundComponent_Speed*>(UFortVehicleSoundComponent_Speed::StaticClass()->DefaultObject);

	return Default;
}


// Function VehicleAudioRuntime.FortVehicleSoundComponent_Speed.OnReversedChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bReversing                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortVehicleSoundComponent_Speed::OnReversedChanged(bool bReversing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleSoundComponent_Speed", "OnReversedChanged");

	Params::UFortVehicleSoundComponent_Speed_OnReversedChanged_Params Parms{};

	Parms.bReversing = bReversing;

	UObject::ProcessEvent(Func, &Parms);

}


// Class VehicleAudioRuntime.FortVehicleSoundComponent_Surface
// (None)

class UClass* UFortVehicleSoundComponent_Surface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortVehicleSoundComponent_Surface");

	return Clss;
}


// FortVehicleSoundComponent_Surface VehicleAudioRuntime.Default__FortVehicleSoundComponent_Surface
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortVehicleSoundComponent_Surface* UFortVehicleSoundComponent_Surface::GetDefaultObj()
{
	static class UFortVehicleSoundComponent_Surface* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortVehicleSoundComponent_Surface*>(UFortVehicleSoundComponent_Surface::StaticClass()->DefaultObject);

	return Default;
}


// Function VehicleAudioRuntime.FortVehicleSoundComponent_Surface.OnSurfaceChanged
// (Final, Native, Public)
// Parameters:
// enum class EPhysicalSurface        NewSurface                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortVehicleSoundComponent_Surface::OnSurfaceChanged(enum class EPhysicalSurface NewSurface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleSoundComponent_Surface", "OnSurfaceChanged");

	Params::UFortVehicleSoundComponent_Surface_OnSurfaceChanged_Params Parms{};

	Parms.NewSurface = NewSurface;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VehicleAudioRuntime.FortVehicleSoundComponent_Surface.OnSkiddingChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bNewState                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortVehicleSoundComponent_Surface::OnSkiddingChanged(bool bNewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleSoundComponent_Surface", "OnSkiddingChanged");

	Params::UFortVehicleSoundComponent_Surface_OnSkiddingChanged_Params Parms{};

	Parms.bNewState = bNewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VehicleAudioRuntime.FortVehicleSoundComponent_Surface.OnInAirChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bNewState                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortVehicleSoundComponent_Surface::OnInAirChanged(bool bNewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleSoundComponent_Surface", "OnInAirChanged");

	Params::UFortVehicleSoundComponent_Surface_OnInAirChanged_Params Parms{};

	Parms.bNewState = bNewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VehicleAudioRuntime.FortVehicleSoundComponent_Surface.OnBrakingChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bNewState                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortVehicleSoundComponent_Surface::OnBrakingChanged(bool bNewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVehicleSoundComponent_Surface", "OnBrakingChanged");

	Params::UFortVehicleSoundComponent_Surface_OnBrakingChanged_Params Parms{};

	Parms.bNewState = bNewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Class VehicleAudioRuntime.FortVehicleSoundData
// (None)

class UClass* UFortVehicleSoundData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortVehicleSoundData");

	return Clss;
}


// FortVehicleSoundData VehicleAudioRuntime.Default__FortVehicleSoundData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortVehicleSoundData* UFortVehicleSoundData::GetDefaultObj()
{
	static class UFortVehicleSoundData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortVehicleSoundData*>(UFortVehicleSoundData::StaticClass()->DefaultObject);

	return Default;
}

}


